# Intenta reconstruir automaticamente funciones pequenas: pseudo-C de Ghidra -> C limpio -> EE-GCC -> comparar.
# Las que coinciden byte a byte se guardan en src/c/auto/auto_<bloque>.c y se anaden a matched.txt.
# Uso: powershell -File scripts/AutoMatch.ps1 [-MaxBytes 64] [-MinBytes 0] [-Limit 0] [-Flags "-O2 -G0"]
param([int]$MaxBytes = 64, [int]$MinBytes = 0, [int]$Limit = 0, [string]$Flags = "-O2 -G0")
$root = Split-Path $PSScriptRoot -Parent
. (Join-Path $PSScriptRoot "MatchLib.ps1")
$cc = (Resolve-Path (Join-Path $root "../tools/ee-gcc/cc")).Path
$env:PATH = "$cc\bin;$cc\ee\bin;$env:PATH"
$B1 = ($cc + "/lib/gcc-lib/ee/2.95.2/").Replace('\', '/'); $B2 = ($cc + "/ee/bin/").Replace('\', '/')
$tmp = Join-Path $root "build/auto_tmp"; New-Item -ItemType Directory -Force $tmp | Out-Null
$autoDir = Join-Path $root "src/c/auto"; New-Item -ItemType Directory -Force $autoDir | Out-Null
$mf = Join-Path $root "matched.txt"
$have = @{}; Get-Content $mf | ForEach-Object { $t = ($_ -split '#')[0].Trim().ToLower(); if ($t) { $have[$t] = 1 } }
# ya generadas en ficheros auto (por si matched.txt se perdio)
Get-ChildItem $autoDir -Filter *.c | ForEach-Object { [regex]::Matches([IO.File]::ReadAllText($_.FullName), 'ADDR ([0-9a-f]{8})') | ForEach-Object { $have[$_.Groups[1].Value] = 1 } }

Write-Host "Cargando ensamblador y pseudo-C..."
$asm = Load-AsmIndex (Join-Path $root "src/asm")
$dec = @{}
foreach ($f in Get-ChildItem (Join-Path $root "src/auto") -Filter "batch_*.c") {
    $cur = $null; $sb = $null
    foreach ($l in [IO.File]::ReadAllLines($f.FullName)) {
        if ($l.StartsWith('// ==== ')) {
            if ($cur) { $dec[$cur] = $sb.ToString() }
            $cur = $l.Substring($l.Length - 13, 8); $sb = New-Object Text.StringBuilder
        } elseif ($cur) { [void]$sb.AppendLine($l) }
    }
    if ($cur) { $dec[$cur] = $sb.ToString() }
}
$cands = Import-Csv (Join-Path $root "src/auto/functions.csv") | Where-Object { [int]$_.size_bytes -le $MaxBytes -and [int]$_.size_bytes -ge $MinBytes -and -not $have.ContainsKey($_.address) } | Sort-Object { [int]$_.size_bytes }, address
if ($Limit -gt 0) { $cands = $cands | Select-Object -First $Limit }
Write-Host "Candidatas: $($cands.Count)"

$forbidden = 'CONCAT|SUB[0-9]|ZEXT|SEXT|\bin_[a-z0-9_]+|unaff_|halt_|\bEI\(|\bDI\(|\b_p[a-z0-9]+\(|syscall|\bTLB|\bSync|\bCOP0|_mfc0|_mtc0|WARNING|\bswi\b|trap|\bcpu_|\bPCR|\bStatus\b|\bCause\b|\bEPC\b'
$ok = 0; $tried = 0; $skip = 0; $i = 0
foreach ($c in $cands) {
    $i++
    $addr = $c.address
    if (-not $dec.ContainsKey($addr)) { $skip++; continue }
    $lines = $dec[$addr] -split "`r?`n"
    # quitar comentario inicial /* ... */ y lineas //
    $code = New-Object System.Collections.Generic.List[string]; $inc = $false
    foreach ($l in $lines) {
        if ($inc) { if ($l -match '\*/') { $inc = $false }; continue }
        if ($l.TrimStart().StartsWith('/*') -and -not ($l -match '\*/')) { $inc = $true; continue }
        if ($l.TrimStart().StartsWith('/*') -and ($l -match '\*/\s*$')) { continue }
        if ($l.TrimStart().StartsWith('//')) { continue }
        $code.Add($l)
    }
    $src = ($code -join "`n").Trim()
    if ($src -match $forbidden) { $skip++; continue }
    $m = [regex]::Match($src, '(?s)^(.*?)\b([A-Za-z_][A-Za-z0-9_]*)\s*\(')
    if (-not $m.Success) { $skip++; continue }
    $oldName = $m.Groups[2].Value
    $newName = "fn_$addr"
    $src = $src -replace ("\b" + [regex]::Escape($oldName) + "\b"), $newName
    $src = [regex]::Replace($src, '\bFUN_([0-9a-f]{8})\b', 'fn_$1')
    $ext = New-Object System.Collections.Generic.List[string]
    foreach ($d in ([regex]::Matches($src, '\b(?:PTR_)?DAT_[0-9a-f]{8}\b') | ForEach-Object { $_.Value } | Sort-Object -Unique)) { $ext.Add("extern int $d;") }
    foreach ($d in ([regex]::Matches($src, '\bLAB_[0-9a-f]{8}\b') | ForEach-Object { $_.Value } | Sort-Object -Unique)) { }
    $file = Join-Path $tmp "t.c"; $obj = Join-Path $tmp "t.o"
    $body = "#include `"auto_types.h`"`n" + ($ext -join "`n") + "`n/* ADDR $addr */`n" + $src + "`n"
    [IO.File]::WriteAllText($file, $body)
    if (Test-Path $obj) { Remove-Item $obj }
    & "$cc\bin\ee-gcc.exe" "-B$B1" "-B$B2" -w -c ($Flags -split ' ') -I (Join-Path $root "include") $file -o $obj 2>&1 | Out-Null
    $tried++
    if (-not (Test-Path $obj)) { continue }
    $r = Compare-Func -Obj $obj -Func $newName -Addr $addr -Asm $asm
    if ($r.Ok) {
        $ok++
        $bucket = $addr.Substring(0, 4)
        $af = Join-Path $autoDir "auto_$bucket.c"
        if (-not (Test-Path $af)) { [IO.File]::WriteAllText($af, "/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */`n#include `"auto_types.h`"`n") }
        [IO.File]::AppendAllText($af, "`n" + ($ext -join "`n") + "`n/* ADDR $addr */`n" + $src + "`n")
        Add-Content $mf ("{0}  # auto" -f $addr); $have[$addr] = 1
    }
    if ($i % 100 -eq 0) { Write-Host ("  {0}/{1}  coinciden: {2}  (probadas {3}, omitidas {4})" -f $i, $cands.Count, $ok, $tried, $skip) }
}
Write-Host ("== Coinciden: {0}  Probadas: {1}  Omitidas: {2}  Candidatas: {3}" -f $ok, $tried, $skip, $cands.Count)
