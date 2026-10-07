# Calcula el progreso a partir de src/auto/functions.csv y matched.txt; escribe PROGRESS.md y actualiza el README.
$root = Split-Path $PSScriptRoot -Parent
$rows = Import-Csv (Join-Path $root "src/auto/functions.csv")
$matchedFile = Join-Path $root "matched.txt"
$matched = @()
if (Test-Path $matchedFile) {
    $matched = Get-Content $matchedFile | ForEach-Object { ($_ -split '#')[0].Trim().ToLower() } | Where-Object { $_ }
}
$total = $rows.Count
$totalBytes = ($rows | Measure-Object size_bytes -Sum).Sum
$named = $rows | Where-Object { $_.name -notlike 'FUN_*' }
$done = $rows | Where-Object { $matched -contains $_.address.ToLower() }
$namedBytes = ($named | Measure-Object size_bytes -Sum).Sum
$doneBytes = ($done | Measure-Object size_bytes -Sum).Sum
if (-not $namedBytes) { $namedBytes = 0 }
if (-not $doneBytes) { $doneBytes = 0 }
function Pct($a, $b) { if ($b -eq 0) { "0.00" } else { "{0:N2}" -f (100.0 * $a / $b) } }
$ci = [Globalization.CultureInfo]::InvariantCulture
$pNamedF = (Pct $named.Count $total).Replace(',', '.')
$pNamedB = (Pct $namedBytes $totalBytes).Replace(',', '.')
$pDoneF = (Pct $done.Count $total).Replace(',', '.')
$pDoneB = (Pct $doneBytes $totalBytes).Replace(',', '.')
$date = Get-Date -Format "yyyy-MM-dd"

$table = @"
| Metrica | Funciones | Bytes de codigo |
|---|---|---|
| **Reconstruidas y verificadas (decompilacion real)** | $($done.Count) / $total (**$pDoneF%**) | $doneBytes / $totalBytes (**$pDoneB%**) |
| Identificadas (con nombre, aun sin reconstruir) | $($named.Count) / $total ($pNamedF%) | $namedBytes / $totalBytes ($pNamedB%) |
"@
$full = "# Progreso de decompilacion`n`nActualizado: $date`n`n$table`n`n- *Reconstruidas*: tienen codigo C/C++ propio en el repo que reproduce el original (listadas en ``matched.txt``).`n- *Identificadas*: Ghidra les ha dado un nombre real (syscalls, clases, menus...). No implica que el codigo este reescrito.`n- Generado por ``scripts/update_progress.ps1`` a partir de ``src/auto/functions.csv``.`n"
[IO.File]::WriteAllText((Join-Path $root "PROGRESS.md"), $full, (New-Object Text.UTF8Encoding($false)))

# Bloque en el README entre marcadores
$readme = Join-Path $root "README.md"
$utf8 = New-Object Text.UTF8Encoding($false)
$txt = [IO.File]::ReadAllText($readme, $utf8)
$block = "<!-- PROGRESS:START -->`n**Decompilacion verificada: $pDoneF% (funciones) / $pDoneB% (bytes)** | Identificadas: $pNamedF% | actualizado $date`n<!-- PROGRESS:END -->"
if ($txt -match '(?s)<!-- PROGRESS:START -->.*<!-- PROGRESS:END -->') {
    $txt = [regex]::Replace($txt, '(?s)<!-- PROGRESS:START -->.*<!-- PROGRESS:END -->', $block.Replace('$', '$$'))
} else {
    $txt = $txt -replace '(?m)^(# black-ps2-decomp\r?\n)', "`$1`n$block`n"
}
[IO.File]::WriteAllText($readme, $txt, $utf8)
"Verificada: $pDoneF% fn / $pDoneB% bytes | Identificadas: $pNamedF% fn / $pNamedB% bytes"
