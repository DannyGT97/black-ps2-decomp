/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */


/* ADDR 00165268 */
void fn_00165268(float param_1,int param_2)

{
  param_1 = *(float *)(param_2 + 0x1c) - param_1;
  *(float *)(param_2 + 0x1c) = param_1;
  if (param_1 <= 0.0f) {
    *(undefined1 *)(param_2 + 0x18) = 0;
    (**(code **)(*(int *)(param_2 + 0x10) + 0x14))
              (param_2 + *(short *)(*(int *)(param_2 + 0x10) + 0x10),0);
  }
  return;
}
