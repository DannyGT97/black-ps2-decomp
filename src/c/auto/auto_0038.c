/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00382bd8 */
void fn_00382bd8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00383d40 */
undefined4 fn_00383d40(undefined4 *param_1)

{
  return *param_1;
}


/* ADDR 00384648 */
undefined8 fn_00384648(undefined8 param_1)

{
  return param_1;
}


/* ADDR 00384738 */
void fn_00384738(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x79) = param_2;
  return;
}


/* ADDR 00386860 */
undefined4 fn_00386860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}


/* ADDR 00388c30 */
undefined8 fn_00388c30(undefined8 param_1)

{
  return param_1;
}


/* ADDR 00388e40 */
undefined4 fn_00388e40(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00388e70 */
void fn_00388e70(void)

{
  return;
}


/* ADDR 00389368 */
void fn_00389368(void)

{
  return;
}


/* ADDR 0038f2a8 */
void fn_0038f2a8(void)

{
  return;
}


/* ADDR 00384290 */
void fn_00384290(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


/* ADDR 00387080 */
uint fn_00387080(uint *param_1)

{
  return *param_1 >> 0x19;
}


/* ADDR 00387e08 */
int fn_00387e08(int *param_1)

{
  return *param_1 + 8;
}


/* ADDR 00387e18 */
int fn_00387e18(int *param_1)

{
  return *param_1 + 8;
}


/* ADDR 00388e18 */
int fn_00388e18(int param_1)

{
  return param_1 + 0xb308;
}


/* ADDR 00388e30 */
void fn_00388e30(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00388e48 */
void fn_00388e48(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00382348 */
void fn_00382348(uint *param_1,uint param_2)

{
  param_1[1] = param_2;
  *param_1 = ~param_2;
  return;
}


/* ADDR 00387170 */
void fn_00387170(uint *param_1)

{
  *param_1 = *param_1 | 4;
  return;
}


/* ADDR 003822e0 */
undefined4 fn_003822e0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 003822f8 */
undefined4 fn_003822f8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 00382310 */
undefined4 fn_00382310(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 00383738 */
undefined4 fn_00383738(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 003843c0 */
undefined4 fn_003843c0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 003843d8 */
undefined4 fn_003843d8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 003843f0 */
undefined4 fn_003843f0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 00384d78 */
undefined4 fn_00384d78(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0xc));
}


/* ADDR 00384d90 */
undefined4 fn_00384d90(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 003871c0 */
uint fn_003871c0(int *param_1)

{
  return *param_1 >> 4 & 1U ^ 1;
}


/* ADDR 00388e58 */
undefined4 fn_00388e58(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


/* ADDR 00383878 */
void fn_00383878(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  }
  return;
}

extern int DAT_003bfaf8;
/* ADDR 003872a8 */
bool fn_003872a8(undefined4 *param_1)

{
  return (undefined2 *)*param_1 == &DAT_003bfaf8;
}


/* ADDR 003870e0 */
void fn_003870e0(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0x1ffffff | param_2 << 0x19;
  return;
}


/* ADDR 00386838 */
int fn_00386838(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 + 0x14 != *param_1 + param_1[4] * 0x14) {
    iVar1 = param_2 + 0x14;
  }
  return iVar1;
}


/* ADDR 00387140 */
void fn_00387140(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xff03ffff | (param_2 & 0x3f) << 0x12;
  return;
}


/* ADDR 00389140 */
float fn_00389140(float *param_1)

{
  return *param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2];
}


/* ADDR 00387090 */
void fn_00387090(uint *param_1,uint param_2)

{
  if (0xfff < param_2) {
    param_2 = 0xfff;
    *param_1 = *param_1 & 0xfeffffff | 0x1000000;
  }
  *param_1 = *param_1 & 0xfffc003f | (param_2 & 0xfff) << 6;
  return;
}
