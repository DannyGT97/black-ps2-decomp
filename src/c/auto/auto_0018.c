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


/* ADDR 00181ab0 */
void fn_00181ab0(void)

{
  fn_00181990();
  return;
}


/* ADDR 00182a40 */
void fn_00182a40(int param_1)

{
  fn_00192470(param_1 + 0x60);
  return;
}


/* ADDR 00185c38 */
void fn_00185c38(int param_1)

{
  fn_00173fb8(param_1 + 0x2c);
  return;
}


/* ADDR 001895a8 */
void fn_001895a8(undefined8 param_1,undefined8 param_2)

{
  fn_00189740(param_1,param_2,1);
  return;
}


/* ADDR 001896e0 */
void fn_001896e0(undefined8 param_1,undefined8 param_2)

{
  fn_00189740(param_1,param_2,0);
  return;
}


/* ADDR 00189700 */
void fn_00189700(undefined8 param_1,undefined8 param_2)

{
  fn_00189740(param_1,param_2,1);
  return;
}


/* ADDR 00189720 */
void fn_00189720(undefined8 param_1,int param_2)

{
  fn_00189b90(param_1,*(undefined4 *)(param_2 + 0x380));
  return;
}


/* ADDR 0018ade0 */
void fn_0018ade0(void)

{
  fn_0018ae00();
  return;
}


/* ADDR 0018efe8 */
void fn_0018efe8(void)

{
  fn_0018e5e0();
  return;
}


/* ADDR 0018f358 */
void fn_0018f358(void)

{
  fn_0018e488();
  return;
}


/* ADDR 0018f730 */
void fn_0018f730(void)

{
  fn_0018e5e0();
  return;
}


/* ADDR 001830d0 */
void fn_001830d0(undefined4 *param_1)

{
  fn_00183710(*param_1,*(undefined1 *)((int)param_1 + 5));
  return;
}


/* ADDR 001830f0 */
void fn_001830f0(undefined4 *param_1)

{
  fn_00183710(*param_1,*(undefined1 *)((int)param_1 + 6));
  return;
}


/* ADDR 0018ad60 */
void fn_0018ad60(undefined4 *param_1)

{
  fn_001640d0(param_1[1],*param_1);
  return;
}


/* ADDR 0018df28 */
bool fn_0018df28(void)

{
  long lVar1;
  
  lVar1 = fn_0018ddd8();
  return lVar1 != 0;
}


/* ADDR 0018fe30 */
void fn_0018fe30(int param_1)

{
  fn_00180a00(*(int *)(param_1 + 4) + 0xb30);
  return;
}


/* ADDR 001834b0 */
void fn_001834b0(int *param_1)

{
  fn_00181ad0(*param_1 + 0xec0,0xd);
  return;
}


/* ADDR 0018e590 */
void fn_0018e590(int param_1)

{
  fn_0018dde8(*(int *)(param_1 + 4) + 0xc94,*(undefined4 *)(*(int *)(param_1 + 4) + 0x754));
  return;
}


/* ADDR 0018e5b8 */
void fn_0018e5b8(int param_1,undefined8 param_2)

{
  fn_0018de48(*(int *)(param_1 + 4) + 0xc94,param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x754))
  ;
  return;
}

extern int DAT_0040f4d4;
/* ADDR 00186e40 */
void fn_00186e40(int param_1)

{
  fn_001776a0(DAT_0040f4d4 + 0x78,*(undefined4 *)(param_1 + 0x7c));
  return;
}


/* ADDR 00186ff0 */
void fn_00186ff0(int *param_1)

{
  if (*param_1 < 0x14) {
    fn_00187018();
  }
  return;
}


/* ADDR 00188a18 */
void fn_00188a18(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) == param_2) {
    fn_00188a40(param_1,0xffffffffffffffff);
  }
  return;
}


/* ADDR 00189048 */
void fn_00189048(int param_1)

{
  fn_00189070(param_1,*(int *)(param_1 + 0x120) * 0x60 + param_1);
  return;
}


/* ADDR 001890a8 */
void fn_001890a8(int param_1)

{
  fn_00189178(param_1,*(int *)(param_1 + 0x120) * 0x60 + param_1);
  return;
}


/* ADDR 0018d698 */
void fn_0018d698(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  fn_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,0xb);
  return;
}


/* ADDR 00181960 */
void fn_00181960(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_00181a18();
  fn_00181908(param_1,uVar1);
  return;
}

extern int DAT_0040f4d4;
/* ADDR 00189178 */
void fn_00189178(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00179258(DAT_0040f4d4 + 0xfa8,*param_2);
  fn_00178e60(uVar1);
  return;
}

extern int DAT_0040f4d4;
/* ADDR 00185318 */
void fn_00185318(int *param_1,undefined8 param_2,undefined8 param_3)

{
  fn_00175f50(DAT_0040f4d4 + 4000,param_2,param_3,0x221,*(undefined4 *)(*param_1 + 0x7c),1);
  return;
}


/* ADDR 00181ad0 */
void fn_00181ad0(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  if (param_2 != 0) {
    fn_0018be88(auStack_30);
    fn_00181b08(param_1,auStack_30);
  }
  return;
}


/* ADDR 00182510 */
undefined4 fn_00182510(int param_1)

{
  fn_0017e5a8(*(int *)(param_1 + 0x310) + 0x650);
  *(undefined1 *)(param_1 + 0x37) = 1;
  return 1;
}


/* ADDR 00185870 */
void fn_00185870(int *param_1)

{
  undefined1 auStack_40 [32];
  
  fn_0018bfe8(auStack_40);
  fn_00181b08(*param_1 + 0xec0,auStack_40);
  return;
}

extern int DAT_0040f4d4;
/* ADDR 00188f80 */
void fn_00188f80(int param_1)

{
  fn_00179258(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(*(int *)(param_1 + 0x120) * 0x60 + param_1));
  return;
}


/* ADDR 0018e488 */
void fn_0018e488(int *param_1)

{
  if (*param_1 != 0) {
    fn_00174ba0(*param_1,param_1[1]);
    *param_1 = 0;
  }
  return;
}


/* ADDR 00183578 */
void fn_00183578(undefined8 param_1,undefined8 param_2)

{
  fn_00160e70();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 0018d818 */
void fn_0018d818(int param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 0xef) != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0x10;
    fn_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,0xd);
  }
  return;
}


/* ADDR 00187f90 */
void fn_00187f90(undefined8 param_1)

{
  fn_00188238();
  fn_00188780(param_1);
  fn_001884e0(param_1);
  fn_001886e0(param_1);
  fn_00188358(param_1);
  return;
}

extern int DAT_0040f4d0;
/* ADDR 0018a890 */
void fn_0018a890(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = fn_00188f10();
  if (lVar1 == 0) {
    fn_00189740(param_1,DAT_0040f4d0 + 0x30,1);
  }
  return;
}

extern int DAT_0040f4d4;
/* ADDR 0018a9c8 */
void fn_0018a9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = fn_001792b0(DAT_0040f4d4 + 0xfa8);
  fn_0018a8d8(param_1,uVar1,param_3);
  return;
}


/* ADDR 0018ce18 */
void fn_0018ce18(int *param_1)

{
  fn_001a73f0(*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x330));
  fn_00182318(*param_1 + 0x810,1);
  fn_00188148(*param_1 + 0x290,0);
  return;
}
