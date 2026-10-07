/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 003915c0 */
void fn_003915c0(void)

{
  return;
}


/* ADDR 003915c8 */
void fn_003915c8(void)

{
  return;
}


/* ADDR 00391620 */
undefined4 fn_00391620(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


/* ADDR 00392e48 */
void fn_00392e48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 003921a0 */
void fn_003921a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


/* ADDR 00392550 */
void fn_00392550(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


/* ADDR 00392d38 */
void fn_00392d38(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


/* ADDR 00393810 */
float fn_00393810(float *param_1)

{
  return *param_1 * *param_1 + param_1[2] * param_1[2];
}


/* ADDR 00391380 */
void fn_00391380(int *param_1)

{
  (**(code **)(*param_1 + 0x5c))((int)param_1 + (int)*(short *)(*param_1 + 0x58),0);
  return;
}


/* ADDR 00394c20 */
bool fn_00394c20(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  return param_1[0x12] == -1;
}


/* ADDR 00393398 */
undefined4 fn_00393398(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *param_2;
  uVar2 = fn_002e27d0(param_1 + 4,param_2 + 1,0,1);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + iVar1) = uVar2;
  return 1;
}
