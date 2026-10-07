/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00140ab0 */
void fn_00140ab0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xfa) = param_2;
  return;
}


/* ADDR 0014c548 */
void fn_0014c548(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}


/* ADDR 0014d908 */
void fn_0014d908(void)

{
  return;
}


/* ADDR 0014dc10 */
undefined4 fn_0014dc10(void)

{
  return 1;
}


/* ADDR 0014e010 */
void fn_0014e010(void)

{
  return;
}


/* ADDR 0014ec08 */
void fn_0014ec08(void)

{
  return;
}


/* ADDR 0014cad8 */
void fn_0014cad8(int param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  return;
}


/* ADDR 001438e8 */
undefined4 fn_001438e8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x80) + 0x1c) == 9) {
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 0;
  }
  return 1;
}


/* ADDR 00147988 */
int fn_00147988(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4));
  if (-1 < iVar1) {
    return *(int *)(param_1 + 0x19c) + iVar1 * 0x40;
  }
  return param_1 + 0x70;
}


/* ADDR 0014c0c8 */
void fn_0014c0c8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) == 2) {
    *(undefined4 *)(param_1 + 0x124) = 3;
    return;
  }
  if (*(int *)(param_2 + 0x3a4) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  return;
}


/* ADDR 00148508 */
int fn_00148508(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_2 & 0xff) * 4 + *(int *)(param_1 + 0x1a4));
  if (iVar1 != -1) {
    return *(int *)(param_1 + 0x19c) + iVar1 * 0x40;
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    return param_1 + 0x140;
  }
  return param_1 + 0x70;
}


/* ADDR 00140048 */
void fn_00140048(void)

{
  fn_0013ee30();
  return;
}


/* ADDR 00141440 */
void fn_00141440(int param_1)

{
  fn_001735e0(param_1 + 0x4e0);
  return;
}


/* ADDR 00146bf8 */
void fn_00146bf8(void)

{
  fn_00165bc8();
  return;
}


/* ADDR 0014ba80 */
void fn_0014ba80(void)

{
  fn_00125d10();
  return;
}


/* ADDR 0014c140 */
void fn_0014c140(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  fn_0014c088(param_1,*(undefined4 *)(param_4 + 0x124));
  return;
}


/* ADDR 0014caa0 */
void fn_0014caa0(int param_1)

{
  fn_00274f80(param_1 + 4);
  return;
}


/* ADDR 0014cc90 */
void fn_0014cc90(void)

{
  fn_0014cad8();
  return;
}


/* ADDR 0014cd70 */
void fn_0014cd70(void)

{
  fn_0014ca40();
  return;
}


/* ADDR 0014cd90 */
void fn_0014cd90(void)

{
  fn_0014ca70();
  return;
}


/* ADDR 001438a8 */
bool fn_001438a8(void)

{
  long lVar1;
  
  lVar1 = fn_00143908();
  return lVar1 != 0;
}


/* ADDR 001438c8 */
bool fn_001438c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = fn_00143908(param_1,0);
  return lVar1 != 0;
}


/* ADDR 0014ba58 */
undefined4 fn_0014ba58(void)

{
  fn_00125e40();
  return 1;
}


/* ADDR 0014ebe0 */
void fn_0014ebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_0014e278(param_1,0,param_2,param_3,0);
  return;
}


/* ADDR 00142f50 */
undefined4 fn_00142f50(int param_1)

{
  fn_00143550();
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}


/* ADDR 0014ca70 */
void fn_0014ca70(int param_1)

{
  fn_00343ed0(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* ADDR 00148498 */
int fn_00148498(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_001afd80(*(int *)(param_1 + 0x1a0) + param_2 * 0xc,*(undefined4 *)(param_1 + 0x118));
  return iVar1 + 0x90;
}


/* ADDR 0014c888 */
void fn_0014c888(int param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  fn_00272488(param_2,auStack_30);
  fn_00348470(*(undefined4 *)(param_1 + 0x40),auStack_30);
  return;
}

extern int DAT_0040f4d0;
/* ADDR 00143550 */
void fn_00143550(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_00129240(DAT_0040f4d0,*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* ADDR 0014d958 */
void fn_0014d958(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xf0;
  do {
    fn_0014d3b8(param_1);
    param_1 = param_1 + 0x18;
  } while (param_1 < iVar1);
  return;
}


/* ADDR 0014d910 */
undefined4 fn_0014d910(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xf0;
  do {
    fn_0014d3b8(param_1);
    param_1 = param_1 + 0x18;
  } while (param_1 < iVar1);
  return 1;
}

extern int DAT_0040f4c4;
/* ADDR 00143f90 */
void fn_00143f90(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if ((*(undefined4 **)(param_1 + 0x80))[7] == 9) {
    fn_001093c0(DAT_0040f4c4,param_2,6,**(undefined4 **)(param_1 + 0x80),param_3,param_4,param_5,
                 0x2000000);
  }
  return;
}

extern int DAT_0040f4d8;
/* ADDR 00144e00 */
undefined4 fn_00144e00(undefined8 param_1)

{
  fn_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,0);
  fn_00149ac8(param_1);
  return 1;
}

extern int DAT_0040f510;
/* ADDR 001435f8 */
undefined4 fn_001435f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  uVar1 = fn_001d74c8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return 1;
}

extern int DAT_0040f4d4;
/* ADDR 0014c380 */
void fn_0014c380(undefined8 param_1)

{
  fn_0017bd10(DAT_0040f4d4 + 0xcd4,param_1);
  fn_00175ab8(DAT_0040f4d4 + 0xa48,param_1,0);
  return;
}
