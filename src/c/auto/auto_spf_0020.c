/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_001084a8(int param_1,int param_2,short param_3);
void fn_0010bbb0(undefined8 param_1);
extern undefined4 DAT_0040f4c4;
extern undefined4 DAT_0040f4f0;
/* ADDR 0020b048 */
void fn_0020b048(int param_1)

{
  if (*(int *)(param_1 + 0x36c8) != 0) {
    fn_001084a8(DAT_0040f4c4,7,4);
    *(undefined4 *)(param_1 + 0x36c8) = 0;
  }
  if (*(int *)(param_1 + 0x36e4) != 0) {
    fn_001084a8(DAT_0040f4c4,7,0xb);
    *(undefined4 *)(param_1 + 0x36e4) = 0;
  }
  fn_0010bbb0(DAT_0040f4f0);
  *(undefined4 *)(param_1 + 0x37a4) = 0x38;
  return;
}
