# Compila src/c/**/*.c con EE-GCC 2.95.2 (SN v2.73a) y verifica las funciones marcadas con /* ADDR xxxxxxxx */.
# Uso: powershell -File scripts/build.ps1 [-Mark] [-Files a.c,b.c] [-Flags "-O2 -G0"] [-Quiet]
param([switch]$Mark, [string[]]$Files, [string]$Flags = "-O2 -G0", [switch]$Quiet, [string]$CC = "ee-gcc2.95.3-136")
$root = Split-Path $PSScriptRoot -Parent
. (Join-Path $PSScriptRoot "MatchLib.ps1")
$comp = Get-EeCompiler $root $CC
$out = Join-Path $root "build"; New-Item -ItemType Directory -Force $out | Out-Null
$asm = Load-AsmIndex (Join-Path $root "src/asm")
$srcs = if ($Files) { $Files | ForEach-Object { Get-Item (Join-Path $root "src/c/$_") } } else { Get-ChildItem (Join-Path $root "src/c") -Filter *.c -Recurse }
$mf = Join-Path $root "matched.txt"
$have = @{}; Get-Content $mf | ForEach-Object { $t = ($_ -split '#')[0].Trim().ToLower(); if ($t) { $have[$t] = 1 } }
$pass = 0; $fail = 0; $err = 0
foreach ($s in $srcs) {
    $o = Join-Path $out ($s.BaseName + ".o")
    if (Test-Path $o) { Remove-Item $o }
    $log = & $comp.Exe "-B$($comp.B1)" "-B$($comp.B2)" -c ($Flags -split ' ') -I (Join-Path $root "include") $s.FullName -o $o 2>&1
    if (-not (Test-Path $o)) { Write-Host "ERROR compilando $($s.Name): $($log | Select-Object -First 3)"; $err++; continue }
    $text = [IO.File]::ReadAllText($s.FullName)
    foreach ($m in [regex]::Matches($text, '/\*\s*ADDR\s+([0-9a-fA-F]{8})\s*\*/[^(;{}]*?\b([A-Za-z_][A-Za-z0-9_]*)\s*\(')) {
        $addr = $m.Groups[1].Value.ToLower(); $fn = $m.Groups[2].Value
        $r = Compare-Func -Obj $o -Func $fn -Addr $addr -Asm $asm
        if ($r.Ok) {
            $pass++
            if (-not $Quiet) { Write-Host "MATCH     $fn @ $addr ($($r.N) instr)" }
            if ($Mark -and -not $have.ContainsKey($addr)) { Add-Content $mf ("{0}  # {1}" -f $addr, $fn); $have[$addr] = 1 }
        } else {
            $fail++
            Write-Host "NO MATCH  $fn @ $addr $($r.Error)"
            $r.Diffs | Select-Object -First 12 | ForEach-Object { Write-Host $_ }
        }
    }
}
Write-Host "== OK: $pass  FALLO: $fail  ERROR de compilacion: $err"
