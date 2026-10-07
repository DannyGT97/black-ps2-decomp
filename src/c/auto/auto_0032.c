/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00322a00 */
undefined8 fn_00322a00(void)

{
  return 0;
}


/* ADDR 0032e320 */
undefined4 fn_0032e320(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* ADDR 0032faf0 */
undefined4 fn_0032faf0(void)

{
  return 1;
}

extern int DAT_00458dc0;
/* ADDR 00324650 */
undefined4 fn_00324650(void)

{
  return DAT_00458dc0;
}


/* ADDR 0032a530 */
void fn_0032a530(uint *param_1,uint param_2)

{
  param_1[3] = param_2;
  *param_1 = *param_1 | 8;
  return;
}


/* ADDR 0032a548 */
void fn_0032a548(uint *param_1,uint param_2)

{
  param_1[5] = param_2;
  *param_1 = *param_1 | 0x40;
  return;
}


/* ADDR 0032a560 */
void fn_0032a560(uint *param_1,uint param_2)

{
  param_1[1] = param_2;
  *param_1 = *param_1 | 0x80;
  return;
}


/* ADDR 0032a938 */
undefined4 fn_0032a938(int param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10);
}


/* ADDR 0032e1b0 */
uint fn_0032e1b0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    if ((uVar1 < *(uint *)(param_1 + 0x28)) &&
       (*(uint **)(uVar1 * 4 + *(int *)(param_1 + 0x44)) == param_2)) {
      uVar2 = *(uint *)((uVar1 >> 5) * 4 + *(int *)(param_1 + 0x60)) >> (uVar1 & 0x1f) & 1;
    }
  }
  return uVar2;
}


/* ADDR 00322c70 */
void fn_00322c70(int param_1)

{
  fn_00311b50(*(undefined4 *)(param_1 + 0x40));
  return;
}


/* ADDR 003232a8 */
void fn_003232a8(void)

{
  fn_00312c70();
  return;
}


/* ADDR 00328bc0 */
void fn_00328bc0(void)

{
  fn_00324640();
  return;
}


/* ADDR 00328c50 */
void fn_00328c50(void)

{
  fn_00315f28();
  return;
}


/* ADDR 0032b6e0 */
void fn_0032b6e0(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  fn_0032ad30(auStack_20);
  return;
}


/* ADDR 0032b820 */
void fn_0032b820(void)

{
  fn_0032b598(1,0xffff);
  return;
}


/* ADDR 0032b840 */
void fn_0032b840(void)

{
  fn_0032b598(0,0xffff);
  return;
}


/* ADDR 0032bc50 */
void fn_0032bc50(void)

{
  fn_0032b9e0(0,0xffff);
  return;
}


/* ADDR 0032e390 */
void fn_0032e390(void)

{
  fn_0032df00(1,0xffff);
  return;
}


/* ADDR 0032e3b0 */
void fn_0032e3b0(void)

{
  fn_0032df00(0,0xffff);
  return;
}


/* ADDR 0032e6d0 */
void fn_0032e6d0(void)

{
  fn_0032e490(1,0xffff);
  return;
}


/* ADDR 0032e6f0 */
void fn_0032e6f0(void)

{
  fn_0032e490(0,0xffff);
  return;
}


/* ADDR 0032fb80 */
void fn_0032fb80(void)

{
  fn_0032f928(1,0xffff);
  return;
}


/* ADDR 0032fba0 */
void fn_0032fba0(void)

{
  fn_0032f928(0,0xffff);
  return;
}


/* ADDR 00322dd8 */
undefined4 fn_00322dd8(undefined8 param_1)

{
  undefined4 auStack_20 [4];
  
  fn_00322e00(param_1,0,auStack_20);
  return auStack_20[0];
}


/* ADDR 00322f80 */
void fn_00322f80(undefined4 *param_1)

{
  (*(code *)param_1[1])(*param_1,param_1[2]);
  return;
}


/* ADDR 00321ee0 */
undefined4 fn_00321ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_20 [4];
  
  fn_0031e9d8(param_1,param_2,param_4,param_3,auStack_20);
  return auStack_20[0];
}


/* ADDR 00323058 */
void fn_00323058(byte *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 1;
  if (param_1[3] <= uVar1) {
    uVar1 = uVar1 - param_1[3];
  }
  param_1[1] = param_1[1] - 1;
  *param_1 = (byte)uVar1;
  return;
}


/* ADDR 00324de8 */
undefined8 fn_00324de8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_0036cd08(0,param_1,0);
  fn_00324e38(uVar1,param_1);
  return uVar1;
}


/* ADDR 00326858 */
void fn_00326858(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  fn_003242b0(0,0,0,0x4e,0,uVar1,param_1,0);
  SleepThread();
  return;
}


/* ADDR 00329170 */
void fn_00329170(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fn_00328eb8();
  fn_003242b0(iVar1 + param_2,param_3,param_4 + 0x3fU & 0xffffffc0,7,0,0,0,0);
  return;
}
