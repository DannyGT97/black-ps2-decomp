/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001b37c8 */
void fn_001b37c8(int param_1,uint param_2)

{
  int iVar1;
  
  param_1 = param_1 + (param_2 & 0xffff) * 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  (**(code **)(iVar1 + 0x7c))
            (*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x78),*(undefined1 *)(param_1 + 0xc));
  fn_001b3d18(param_1);
  return;
}
