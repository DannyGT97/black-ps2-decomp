/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00165c40 */
void fn_00165c40(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + *(int *)(param_1 + 8)) = param_2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return;
}
