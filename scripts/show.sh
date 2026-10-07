#!/bin/sh
# Uso: scripts/show.sh <direccion_hex> [max_lineas]   (muestra el pseudo-C de una funcion)
d="$(dirname "$0")/../src/auto"
a="$1"; n="${2:-40}"
b=$(grep -m1 "^$a," "$d/functions.csv" | awk -F, '{printf "batch_%04d.c",$4}')
awk -v a="$a" 'index($0,"@ " a " ====")>0{p=1} p{print} p&&/^}/{exit}' "$d/$b" | grep -v '^$' | head -"$n"
