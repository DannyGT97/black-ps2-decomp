/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */


/* ADDR 00328180 */
void fn_00328180(float param_1,int param_2)

{
  *(ushort *)(param_2 + 0x5c) = *(ushort *)(param_2 + 0x5c) | 4;
  *(float *)(param_2 + 0xa4) = param_1 * 0.5f + 0.5f;
  return;
}
