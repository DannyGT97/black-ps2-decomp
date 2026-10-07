/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0023eac8 */
void fn_0023eac8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_3 + 0xc) = param_2;
  *(int *)(param_3 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_3;
  }
  *(int *)(*(int *)(param_3 + 0xc) + 8) = param_3;
  return;
}
