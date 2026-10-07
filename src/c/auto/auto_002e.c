/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 002e95a0 */
void fn_002e95a0(int param_1,uint param_2,undefined4 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 8))) {
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x24)) = param_3;
  }
  return;
}
