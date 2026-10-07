# Compara una funcion compilada (.o) con la original (src/asm).
# Uso: powershell -File scripts/match.ps1 -Obj build/foo.o -Func nombre -Addr 00135550
param([Parameter(Mandatory)] [string]$Obj, [Parameter(Mandatory)] [string]$Func, [Parameter(Mandatory)] [string]$Addr)
$root = Split-Path $PSScriptRoot -Parent
. (Join-Path $PSScriptRoot "MatchLib.ps1")
$asm = Load-AsmIndex (Join-Path $root "src/asm")
$r = Compare-Func -Obj (Resolve-Path $Obj).Path -Func $Func -Addr $Addr -Asm $asm
if ($r.Ok) { "MATCH  $Func @ $Addr ($($r.N) instrucciones, $($r.Masked) relocaciones enmascaradas)"; exit 0 }
"NO MATCH  $Func @ $Addr $($r.Error)"; $r.Diffs | Select-Object -First 25; exit 1
