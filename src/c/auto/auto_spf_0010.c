/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_00109640(undefined4 *param_1);
void fn_00109fb0(undefined1 *param_1);
void fn_0020ccf8(int param_1,undefined4 param_2);
extern undefined4 DAT_0040f544;
/* ADDR 001041a8 */
void fn_001041a8(undefined4 *param_1)

{
  param_1[0x354] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x353) = 0;
  fn_00109640(param_1 + 0x13);
  fn_00109fb0(param_1 + 0x86);
  fn_0020ccf8(DAT_0040f544,param_1 + 0x13);
  *(undefined1 *)((int)param_1 + 0xd4d) = 0;
  *param_1 = 1;
  return;
}
