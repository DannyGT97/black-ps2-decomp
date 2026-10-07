/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00110858 */
int fn_00110858(int param_1)

{
  return param_1 + 0x7f0;
}


/* ADDR 00114228 */
void fn_00114228(void)

{
  return;
}


/* ADDR 00114968 */
void fn_00114968(void)

{
  return;
}


/* ADDR 00114970 */
void fn_00114970(void)

{
  return;
}


/* ADDR 00114980 */
void fn_00114980(void)

{
  return;
}


/* ADDR 00116f60 */
void fn_00116f60(void)

{
  return;
}


/* ADDR 001175e0 */
void fn_001175e0(void)

{
  return;
}


/* ADDR 00118088 */
undefined4 fn_00118088(void)

{
  return 1;
}


/* ADDR 00118090 */
void fn_00118090(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00118240 */
void fn_00118240(void)

{
  return;
}


/* ADDR 00118340 */
void fn_00118340(void)

{
  return;
}


/* ADDR 00118808 */
void fn_00118808(void)

{
  return;
}


/* ADDR 00118900 */
void fn_00118900(void)

{
  return;
}


/* ADDR 0011a888 */
undefined4 fn_0011a888(void)

{
  return 1;
}


/* ADDR 0011bf20 */
void fn_0011bf20(void)

{
  return;
}


/* ADDR 0011d490 */
void fn_0011d490(void)

{
  return;
}


/* ADDR 0011d430 */
void fn_0011d430(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x11] = param_2;
  *param_1 = 0;
  return;
}


/* ADDR 0011d498 */
undefined4 fn_0011d498(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x7c);
}


/* ADDR 0011d4a8 */
int fn_0011d4a8(int *param_1)

{
  return *param_1 + 0xa0;
}


/* ADDR 0011d1f0 */
void fn_0011d1f0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  return;
}


/* ADDR 00110010 */
bool fn_00110010(undefined4 *param_1)

{
  return *(long *)(param_1 + 0x59c) != *(long *)*param_1;
}


/* ADDR 00110a88 */
void fn_00110a88(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  return;
}


/* ADDR 0011d1d0 */
int fn_0011d1d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x90);
  }
  return iVar1;
}


/* ADDR 00116dc0 */
void fn_00116dc0(void)

{
  fn_00118090();
  return;
}


/* ADDR 00116fa8 */
void fn_00116fa8(void)

{
  fn_00116fc8();
  return;
}


/* ADDR 001175c0 */
void fn_001175c0(void)

{
  fn_00118090();
  return;
}


/* ADDR 00118320 */
void fn_00118320(void)

{
  fn_00118090();
  return;
}


/* ADDR 001188e0 */
void fn_001188e0(void)

{
  fn_00118090();
  return;
}


/* ADDR 0011a0a8 */
void fn_0011a0a8(void)

{
  fn_0011c878();
  return;
}


/* ADDR 0011a0e8 */
void fn_0011a0e8(void)

{
  fn_0011c930();
  return;
}


/* ADDR 0011e2e0 */
void fn_0011e2e0(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  fn_0011e1b8(param_1,auStack_20);
  return;
}


/* ADDR 0011ea48 */
void fn_0011ea48(undefined8 param_1)

{
  fn_0011d430(param_1,6);
  return;
}


/* ADDR 0011ebf0 */
void fn_0011ebf0(void)

{
  fn_0011d490();
  return;
}


/* ADDR 0011ec10 */
void fn_0011ec10(undefined8 param_1)

{
  fn_0011d430(param_1,5);
  return;
}


/* ADDR 0011ed98 */
void fn_0011ed98(void)

{
  fn_0011d490();
  return;
}


/* ADDR 0011edb8 */
void fn_0011edb8(undefined8 param_1)

{
  fn_0011d430(param_1,7);
  return;
}


/* ADDR 0011eec8 */
void fn_0011eec8(void)

{
  fn_0011d490();
  return;
}


/* ADDR 0011eee8 */
void fn_0011eee8(undefined8 param_1)

{
  fn_0011d430(param_1,0);
  return;
}


/* ADDR 0011f350 */
void fn_0011f350(void)

{
  fn_0011d490();
  return;
}


/* ADDR 0011f8f8 */
void fn_0011f8f8(undefined8 param_1)

{
  fn_0011d430(param_1,8);
  return;
}


/* ADDR 0011fcd8 */
void fn_0011fcd8(undefined8 param_1)

{
  fn_0011d430(param_1,3);
  return;
}


/* ADDR 00118410 */
undefined4 fn_00118410(void)

{
  fn_00118088();
  return 1;
}


/* ADDR 0011a0c8 */
undefined4 fn_0011a0c8(void)

{
  fn_0011c8c0();
  return 1;
}


/* ADDR 0011a108 */
undefined4 fn_0011a108(void)

{
  fn_0011c9c8();
  return 1;
}


/* ADDR 0011edd8 */
void fn_0011edd8(undefined4 *param_1)

{
  fn_001412e8(*param_1,2);
  return;
}


/* ADDR 00117800 */
void fn_00117800(int param_1)

{
  *(undefined1 *)(param_1 + 0xa0) = 1;
  fn_00118810(param_1 + 4);
  return;
}


/* ADDR 00117830 */
void fn_00117830(int param_1)

{
  *(undefined1 *)(param_1 + 0xa2) = 1;
  fn_00118248(param_1 + 0x60);
  return;
}

extern int DAT_0040f4c0;
/* ADDR 00110670 */
void fn_00110670(int param_1)

{
  fn_001ae938(DAT_0040f4c0,1,param_1 + 0x700);
  return;
}


/* ADDR 001178d8 */
void fn_001178d8(int param_1)

{
  fn_0027acc8();
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


/* ADDR 00117630 */
void fn_00117630(int param_1)

{
  fn_00118900(param_1 + 4);
  fn_001175e0(param_1 + 0x20);
  fn_00118340(param_1 + 0x60);
  return;
}


/* ADDR 00110610 */
void fn_00110610(int param_1)

{
  fn_0027d020();
  fn_0010f730(param_1 + 0x7f0);
  fn_0027a7a8(param_1 + 0x700);
  fn_0027a7a8(param_1 + 0x750);
  return;
}


/* ADDR 00116f68 */
undefined4 fn_00116f68(undefined8 param_1,undefined8 param_2)

{
  fn_00118088();
  fn_00116fc8(param_1,param_2);
  return 1;
}


/* ADDR 0011c8c0 */
undefined4 fn_0011c8c0(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 7;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = param_1 + 0x20;
  puVar1 = (undefined4 *)(param_1 + 0xb0);
  do {
    iVar3 = iVar3 + -1;
    *puVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 **)(param_1 + 0x18) = puVar2;
    puVar1 = puVar1 + 0x13c;
    puVar2 = puVar2 + 0x4f0;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  fn_00382348(param_1 + 0x10,0x2b9d6f8);
  *param_1 = 0;
  return 1;
}
