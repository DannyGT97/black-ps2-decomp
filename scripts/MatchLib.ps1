# Libreria de comparacion (dot-source). Funciones:
#   Load-AsmIndex            -> hashtable addr(8 hex) -> @{ Hex = string[]; Txt = string[] }
#   Compare-Func -Obj -Func -Addr -Asm   -> objeto { Ok; N; Masked; Diffs; Error }

function Load-AsmIndex([string]$Dir) {
    $idx = @{}
    foreach ($f in Get-ChildItem $Dir -Filter *.s) {
        $cur = $null
        foreach ($l in [IO.File]::ReadAllLines($f.FullName)) {
            if ($l.StartsWith('# ====')) {
                $a = $l.Substring($l.Length - 13, 8)
                $cur = @{ Hex = New-Object System.Collections.Generic.List[string]; Txt = New-Object System.Collections.Generic.List[string] }
                $idx[$a] = $cur
            } elseif ($l.Length -gt 2 -and $null -ne $cur) {
                $p = $l.Trim() -split '\s+', 3
                $cur.Hex.Add($p[1]); $cur.Txt.Add($p[2])
            }
        }
    }
    $idx
}

function Compare-Func([string]$Obj, [string]$Func, [string]$Addr, $Asm) {
    $res = [pscustomobject]@{ Ok = $false; N = 0; Masked = 0; Diffs = @(); Error = $null }
    $Addr = $Addr.ToLower().PadLeft(8, '0')
    if (-not $Asm.ContainsKey($Addr)) { $res.Error = "addr no esta en src/asm"; return $res }
    $orig = $Asm[$Addr].Hex; $origTxt = $Asm[$Addr].Txt
    $b = [IO.File]::ReadAllBytes($Obj)
    $shoff = [BitConverter]::ToUInt32($b, 0x20); $shentsize = [BitConverter]::ToUInt16($b, 0x2e)
    $shnum = [BitConverter]::ToUInt16($b, 0x30)
    $sec = New-Object object[] $shnum
    for ($i = 0; $i -lt $shnum; $i++) {
        $o = $shoff + $i * $shentsize
        $sec[$i] = [pscustomobject]@{ Type = [BitConverter]::ToUInt32($b, $o + 4); Off = [BitConverter]::ToUInt32($b, $o + 16); Size = [BitConverter]::ToUInt32($b, $o + 20); Link = [BitConverter]::ToUInt32($b, $o + 24); Info = [BitConverter]::ToUInt32($b, $o + 28) }
    }
    $symtab = $null; foreach ($s in $sec) { if ($s.Type -eq 2) { $symtab = $s; break } }
    if (-not $symtab) { $res.Error = "sin symtab"; return $res }
    $strtab = $sec[$symtab.Link]; $sym = $null
    for ($o = $symtab.Off; $o -lt $symtab.Off + $symtab.Size; $o += 16) {
        $e = $strtab.Off + [BitConverter]::ToUInt32($b, $o); $st = $e
        while ($b[$e] -ne 0) { $e++ }
        if ([Text.Encoding]::ASCII.GetString($b, $st, $e - $st) -eq $Func) {
            $sym = [pscustomobject]@{ Value = [BitConverter]::ToUInt32($b, $o + 4); Size = [BitConverter]::ToUInt32($b, $o + 8); Shndx = [BitConverter]::ToUInt16($b, $o + 14) }; break
        }
    }
    if (-not $sym) { $res.Error = "simbolo no encontrado"; return $res }
    if ($sym.Shndx -ge $shnum -or $sym.Shndx -eq 0) { $res.Error = "simbolo no definido"; return $res }
    $text = $sec[$sym.Shndx]
    $size = $sym.Size; if ($size -eq 0) { $size = $text.Size - $sym.Value }
    $masks = @{}
    foreach ($r in $sec) {
        if ($r.Type -ne 9 -or $r.Info -ne $sym.Shndx) { continue }
        for ($o = $r.Off; $o -lt $r.Off + $r.Size; $o += 8) {
            $ro = [BitConverter]::ToUInt32($b, $o); $t = [BitConverter]::ToUInt32($b, $o + 4) -band 0xff
            if ($ro -ge $sym.Value -and $ro -lt $sym.Value + $size) {
                $m = 0; if ($t -eq 4) { $m = 0x03ffffff } elseif ($t -eq 5 -or $t -eq 6 -or $t -eq 7) { $m = 0xffff } elseif ($t -eq 2) { $m = 0xffffffff }
                if ($m) { $masks[[int]($ro - $sym.Value)] = [uint32]$m }
            }
        }
    }
    $n1 = [int]($size / 4); $n2 = $orig.Count
    $res.N = $n1; $res.Masked = $masks.Count
    $diffs = New-Object System.Collections.Generic.List[string]
    for ($i = 0; $i -lt [Math]::Max($n1, $n2); $i++) {
        $wa = $null; $wb = $null
        if ($i -lt $n1) { $wa = [BitConverter]::ToUInt32($b, $text.Off + $sym.Value + $i * 4) }
        if ($i -lt $n2) { $h = $orig[$i]; $wb = [BitConverter]::ToUInt32([byte[]]@([Convert]::ToByte($h.Substring(0, 2), 16), [Convert]::ToByte($h.Substring(2, 2), 16), [Convert]::ToByte($h.Substring(4, 2), 16), [Convert]::ToByte($h.Substring(6, 2), 16)), 0) }
        if ($masks.ContainsKey($i * 4)) {
            $keep = -bnot $masks[$i * 4]
            if ($null -ne $wa) { $wa = [uint32]($wa -band $keep -band 0xffffffffL) }
            if ($null -ne $wb) { $wb = [uint32]($wb -band $keep -band 0xffffffffL) }
        }
        if ($wa -ne $wb) {
            $sa = if ($null -ne $wa) { '{0:x8}' -f $wa } else { '--------' }
            $sb = if ($null -ne $wb) { '{0:x8}' -f $wb } else { '--------' }
            $diffs.Add(("  +{0:x3}: nuestro={1} original={2}  {3}" -f ($i * 4), $sa, $sb, $(if ($i -lt $origTxt.Count) { $origTxt[$i] } else { '' })))
        }
    }
    $res.Diffs = $diffs.ToArray(); $res.Ok = ($diffs.Count -eq 0)
    $res
}

# Resuelve un compilador EE-GCC bajo tools/<Rel> (ej. "ee-gcc/cc", "ee-gcc2.95.3-136"). Devuelve Exe, B1, B2.
function Get-EeCompiler([string]$Root, [string]$Rel = "ee-gcc/cc") {
    $cc = (Resolve-Path (Join-Path $Root "../tools/$Rel")).Path
    $gl = Get-ChildItem (Join-Path $cc "lib/gcc-lib/ee") -Directory | Select-Object -First 1
    $b1 = $gl.FullName
    $b2 = if (Test-Path (Join-Path $cc "ee/bin")) { Join-Path $cc "ee/bin" } else { $b1 }
    $env:PATH = "$cc\bin;$b2;$b1;$env:PATH"
    [pscustomobject]@{ Exe = (Join-Path $cc "bin/ee-gcc.exe"); B1 = ($b1.Replace('\','/') + "/"); B2 = ($b2.Replace('\','/') + "/") }
}
