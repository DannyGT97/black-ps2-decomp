/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00191790 */
void fn_00191790(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* ADDR 00192560 */
undefined8 fn_00192560(void)

{
  return 0;
}


/* ADDR 00192568 */
void fn_00192568(void)

{
  return;
}


/* ADDR 00193988 */
void fn_00193988(void)

{
  return;
}


/* ADDR 00191568 */
void fn_00191568(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}


/* ADDR 00194888 */
void fn_00194888(int *param_1)

{
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  param_1[2] = 3;
  return;
}


/* ADDR 00191270 */
bool fn_00191270(int *param_1)

{
  return (long)*(char *)(*param_1 + 0x29) == (long)*(int *)(param_1[1] + 0x1ef4);
}


/* ADDR 00195920 */
void fn_00195920(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 8) = iVar1;
  }
  return;
}
