/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0020db58 */
int fn_0020db58(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((param_2 != (char *)0x0 && (cVar1 = *param_2, cVar1 != '\0'))) {
    param_2 = param_2 + 1;
    if (0x3f < (byte)(cVar1 + 0x80U)) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}
