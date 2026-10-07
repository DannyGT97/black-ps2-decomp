/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_0012a280(int param_1,int param_2);
extern undefined4 DAT_0040f4d0;
/* ADDR 001531d8 */
void fn_001531d8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_1[1] + iVar1) != '\0') {
      fn_0012a280(DAT_0040f4d0,*param_1 + iVar2);
      *(undefined1 *)(param_1[1] + iVar1) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0xf0;
  } while (iVar1 < 100);
  return;
}
