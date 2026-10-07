/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00174ad8 */
undefined1 fn_00174ad8(int param_1,int param_2)

{
  return *(undefined1 *)(param_2 * 8 + *(int *)(*(int *)(param_1 + 0x18) + 0x14) + 4);
}


/* ADDR 0017fa58 */
undefined1 fn_0017fa58(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x80) == 1) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x84a);
  }
  return uVar1;
}


/* ADDR 001796e0 */
void fn_001796e0(int param_1)

{
  if (*(char *)(param_1 + 0x74) != '\0') {
    fn_00179960(*(undefined4 *)(param_1 + 0x70));
  }
  return;
}


/* ADDR 0017fa78 */
void fn_0017fa78(int param_1)

{
  long lVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x44) + 0x3b) != '\0') &&
     (lVar1 = fn_001a6840(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0x330),0,1),
     lVar1 != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x3b) = 0;
  }
  return;
}
