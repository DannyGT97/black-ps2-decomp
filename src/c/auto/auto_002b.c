/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

extern int DAT_003c3d80;
/* ADDR 002bfe58 */
undefined * fn_002bfe58(void)

{
  return &DAT_003c3d80;
}

extern int DAT_0044e750;
/* ADDR 002bfec0 */
undefined4 * fn_002bfec0(void)

{
  return &DAT_0044e750;
}


/* ADDR 002bfed0 */
int fn_002bfed0(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
