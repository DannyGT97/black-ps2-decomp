/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
bool fn_00173610(float *param_1);

/* ADDR 0018b168 */
byte fn_0018b168(int param_1)

{
  byte bVar1;
  
  bVar1 = fn_00173610(param_1 + 0x20);
  return bVar1 ^ 1;
}

/* ---- */
bool fn_00173610(float *param_1);

/* ADDR 00189490 */
byte fn_00189490(int param_1)

{
  byte bVar1;
  
  bVar1 = fn_00173610(*(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x50);
  return bVar1 ^ 1;
}
