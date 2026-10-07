/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
long fn_00365e00(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
long fn_00365f20(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);

/* ADDR 0035d8b0 */
undefined4 fn_0035d8b0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0xc) & 0x100) != 0) {
    fn_00365e00(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),0,2);
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xefff;
  uVar1 = fn_00365f20(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe),param_2,
                       param_3);
  return uVar1;
}
