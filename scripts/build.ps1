# Compila src/c/**/*.c con EE-GCC 2.95.3 (build 136) y verifica las funciones marcadas con /* ADDR xxxxxxxx */.
# Los ficheros auto_*.c (generados por AutoMatch) se compilan funcion a funcion, porque cada una se verifico sola.
# Uso: powershell -File scripts/build.ps1 [-Mark] [-Files a.c,b.c] [-Flags "-O2 -G0"] [-Quiet] [-CC ee-gcc2.95.3-136]
param([switch]$Mark, [string[]]$Files, [string]$Flags = "-O2 -G0", [switch]$Quiet, [string]$CC = "ee-gcc2.95.3-136")
$root = Split-Path $PSScriptRoot -Parent
. (Join-Path $PSScriptRoot "MatchLib.ps1")
$comp = Get-EeCompiler $root $CC
$out = Join-Path $root "build"; New-Item -ItemType Directory -Force $out | Out-Null
$asm = Load-AsmIndex (Join-Path $root "src/asm")
$srcs = if ($Files) { $Files | ForEach-Object { Get-Item (Join-Path $root "src/c/$_") } } else { Get-ChildItem (Join-Path $root "src/c") -Filter *.c -Recurse }
$mf = Join-Path $root "matched.txt"
$have = @{}; Get-Content $mf | ForEach-Object { $t = ($_ -split '#')[0].Trim().ToLower(); if ($t) { $have[$t] = 1 } }
$script:pass = 0; $script:fail = 0; $script:err = 0
$fnRe = '/\*\s*ADDR\s+([0-9a-fA-F]{8})\s*\*/[^(;{}]*?\b([A-Za-z_][A-Za-z0-9_]*)\s*\('

function Invoke-Unit([string]$code, [string]$label, [string]$fl) {
    $file = Join-Path $out "unit.c"; $obj = Join-Path $out "unit.o"
    [IO.File]::WriteAllText($file, $code)
    if (Test-Path $obj) { Remove-Item $obj }
    $log = & $comp.Exe "-B$($comp.B1)" "-B$($comp.B2)" -w -c ($fl -split ' ') -I (Join-Path $root "include") $file -o $obj 2>&1
    if (-not (Test-Path $obj)) { Write-Host "ERROR compilando ${label}: $($log | Select-Object -First 2)"; $script:err++; return }
    foreach ($m in [regex]::Matches($code, $fnRe)) {
        $addr = $m.Groups[1].Value.ToLower(); $fn = $m.Groups[2].Value
        $r = Compare-Func -Obj $obj -Func $fn -Addr $addr -Asm $asm
        if ($r.Ok) {
            $script:pass++
            if (-not $Quiet) { Write-Host "MATCH     $fn @ $addr ($($r.N) instr)" }
            if ($Mark -and -not $have.ContainsKey($addr)) { Add-Content $mf ("{0}  # {1}" -f $addr, $fn); $have[$addr] = 1 }
        } else {
            $script:fail++
            Write-Host "NO MATCH  $fn @ $addr $($r.Error)"
            $r.Diffs | Select-Object -First 12 | ForEach-Object { Write-Host $_ }
        }
    }
}

foreach ($s in $srcs) {
    $fl = $Flags
    if ($s.BaseName -match '^auto_[a-z]*s[a-z]*_') { $fl += " -funsigned-char" }  # variante S de AutoMatch
    $text = [IO.File]::ReadAllText($s.FullName)
    if ($s.BaseName -like 'auto_*') {
        $lines = $text -split "`r?`n"
        $inc = ($lines | Where-Object { $_ -match '^#include' } | Select-Object -First 1)
        $ext = ($lines | Where-Object { $_ -match '^extern ' } | Sort-Object -Unique) -join "`n"
        $body = ($lines | Where-Object { $_ -notmatch '^#include' -and $_ -notmatch '^extern ' -and $_ -notmatch '^/\* Funciones reconstruidas' }) -join "`n"
        $chunks = [regex]::Split($body, '(?m)^(?=/\* ADDR )') | Where-Object { $_ -match '/\* ADDR ' }
        foreach ($ch in $chunks) { Invoke-Unit ("$inc`n$ext`n$ch`n") $s.Name $fl }
    } else {
        Invoke-Unit $text $s.Name $fl
    }
}
Write-Host "== OK: $($script:pass)  FALLO: $($script:fail)  ERROR de compilacion: $($script:err)"
