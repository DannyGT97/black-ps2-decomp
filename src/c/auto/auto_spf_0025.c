/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_0014c380(undefined8 param_1);

/* ADDR 0025daf0 */
void fn_0025daf0(int param_1)

{
  fn_0014c380(*(undefined4 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x3f) = 1;
  return;
}

/* ---- */
undefined4 fn_0032e320(int param_1);
extern undefined DAT_0043f3f0;
/* ADDR 0025cc48 */
undefined4 fn_0025cc48(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)fn_0032e320(*param_1);
  return *(undefined4 *)(&DAT_0043f3f0 + ((param_2 - *piVar1) * -0x45d1745d >> 4) * 4);
}
