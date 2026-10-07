/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00180070 */
void fn_00180070(void)

{
  return;
}


/* ADDR 001808d0 */
void fn_001808d0(void)

{
  return;
}


/* ADDR 00180cc8 */
void fn_00180cc8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14c) = param_2;
  return;
}


/* ADDR 00180f10 */
void fn_00180f10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 00181f20 */
void fn_00181f20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 00181fe8 */
undefined4 fn_00181fe8(void)

{
  return 1;
}


/* ADDR 00182318 */
void fn_00182318(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}


/* ADDR 00182960 */
undefined8 fn_00182960(undefined8 param_1)

{
  return param_1;
}


/* ADDR 001829a0 */
undefined4 fn_001829a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


/* ADDR 001831d8 */
void fn_001831d8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 001834d8 */
void fn_001834d8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}


/* ADDR 001834e0 */
undefined4 fn_001834e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


/* ADDR 00183910 */
void fn_00183910(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 001848b8 */
undefined4 fn_001848b8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00185530 */
void fn_00185530(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}


/* ADDR 00185d08 */
void fn_00185d08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}


/* ADDR 00185f10 */
int fn_00185f10(int param_1)

{
  return param_1 + 0x90;
}


/* ADDR 00185fe8 */
undefined4 fn_00185fe8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}


/* ADDR 00187b10 */
void fn_00187b10(int param_1)

{
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  return;
}


/* ADDR 00188148 */
void fn_00188148(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}


/* ADDR 00188b00 */
void fn_00188b00(void)

{
  return;
}


/* ADDR 00188b90 */
void fn_00188b90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x130) = param_2;
  return;
}


/* ADDR 0018ab80 */
void fn_0018ab80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 0018ad80 */
void fn_0018ad80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}


/* ADDR 0018be88 */
void fn_0018be88(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 0018d9e8 */
void fn_0018d9e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 0018e2e8 */
void fn_0018e2e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 00180078 */
bool fn_00180078(int param_1)

{
  return *(int *)(param_1 + 0x8c) == 0;
}


/* ADDR 001809f0 */
undefined4 fn_001809f0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x18);
}


/* ADDR 00180f18 */
undefined4 fn_00180f18(undefined1 *param_1)

{
  *param_1 = 0;
  return 1;
}


/* ADDR 00185f00 */
bool fn_00185f00(int param_1)

{
  return *(int *)(param_1 + 0x70) != 0;
}


/* ADDR 00185f18 */
bool fn_00185f18(int param_1)

{
  return *(int *)(param_1 + 0x7c) != 0;
}


/* ADDR 0018dcd0 */
bool fn_0018dcd0(int param_1)

{
  return *(int *)(param_1 + 4) != 0x27;
}


/* ADDR 0018ddd8 */
bool fn_0018ddd8(int param_1)

{
  return *(int *)(param_1 + 4) - 0x1dU < 3;
}


/* ADDR 001834e8 */
int fn_001834e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  return iVar1;
}


/* ADDR 0018d858 */
void fn_0018d858(int param_1)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe | 2;
  return;
}


/* ADDR 001893a0 */
int fn_001893a0(int param_1)

{
  return *(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x20;
}


/* ADDR 00189478 */
int fn_00189478(int param_1)

{
  return *(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x30;
}


/* ADDR 00183688 */
undefined4 fn_00183688(int param_1,undefined8 param_2,int param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 8) = (uint)*(byte *)(param_3 + 0x24);
  *(uint *)(param_1 + 4) = (uint)*(byte *)(param_3 + 0x25);
  return 1;
}


/* ADDR 001829e8 */
undefined4 fn_001829e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x30) == 0) || (*(int *)(param_1 + 0x30) == 8)) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ADDR 00183858 */
int fn_00183858(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 < *(int *)(param_1 + 8) + -1) {
    iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
  }
  return iVar1;
}


/* ADDR 0018b490 */
void fn_0018b490(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*param_1 == param_2) {
      *param_1 = 0;
      return;
    }
    param_1 = param_1 + 2;
  } while (iVar1 < 4);
  return;
}


/* ADDR 00183710 */
undefined4 fn_00183710(int *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if ((-1 < iVar1) && (iVar1 < param_1[2])) {
    return *(undefined4 *)(iVar1 * 4 + *param_1);
  }
  return 0;
}


/* ADDR 001829a8 */
undefined4 fn_001829a8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = 0;
  if ((((uVar1 < 2) || (uVar1 == 7)) || (uVar1 == 4)) || ((uVar1 == 5 || (uVar1 == 8)))) {
    uVar2 = 1;
  }
  return uVar2;
}
