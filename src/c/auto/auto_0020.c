/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00200f00 */
void fn_00200f00(void)

{
  return;
}


/* ADDR 002050b0 */
undefined4 fn_002050b0(void)

{
  return 1;
}


/* ADDR 002061e8 */
void fn_002061e8(void)

{
  return;
}


/* ADDR 00206b28 */
void fn_00206b28(void)

{
  return;
}


/* ADDR 002094a8 */
void fn_002094a8(void)

{
  return;
}


/* ADDR 002097b8 */
void fn_002097b8(void)

{
  return;
}


/* ADDR 00209a50 */
void fn_00209a50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 00209a58 */
void fn_00209a58(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00209c60 */
undefined4 fn_00209c60(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c68 */
undefined4 fn_00209c68(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c70 */
undefined4 fn_00209c70(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c78 */
undefined4 fn_00209c78(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c80 */
undefined4 fn_00209c80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ADDR 00209c88 */
void fn_00209c88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* ADDR 00209e78 */
undefined4 fn_00209e78(void)

{
  return 1;
}


/* ADDR 0020b980 */
int fn_0020b980(int param_1)

{
  return param_1 + 0x389c;
}


/* ADDR 0020ccf8 */
void fn_0020ccf8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3918) = param_2;
  return;
}


/* ADDR 00205170 */
undefined4 fn_00205170(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}

extern int DAT_003be718;
/* ADDR 002092d8 */
void fn_002092d8(undefined4 param_1)

{
  DAT_003be718 = param_1;
  return;
}

extern int DAT_003be7a0;
/* ADDR 0020db40 */
void fn_0020db40(undefined4 param_1)

{
  DAT_003be7a0 = param_1;
  return;
}


/* ADDR 0020dd88 */
void fn_0020dd88(int param_1)

{
  **(undefined2 **)(param_1 + 4) = 0;
  return;
}

extern int DAT_003be7a4;
/* ADDR 0020e620 */
bool fn_0020e620(void)

{
  return DAT_003be7a4 != 0;
}


/* ADDR 00209bd8 */
void fn_00209bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 1;
  param_1[2] = param_2;
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_3;
  param_1[4] = 0;
  return;
}


/* ADDR 00209c08 */
void fn_00209c08(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 4;
  param_1[2] = param_2;
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_3;
  param_1[4] = 0;
  return;
}


/* ADDR 00209c38 */
void fn_00209c38(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 5;
  param_1[2] = param_2;
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_3;
  param_1[4] = 0;
  return;
}


/* ADDR 00204fb0 */
void fn_00204fb0(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_5;
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 **)(param_1 + 0x58) = param_2;
  return;
}


/* ADDR 00204ea0 */
void fn_00204ea0(void)

{
  fn_00204f90();
  return;
}


/* ADDR 00204f90 */
void fn_00204f90(void)

{
  fn_00278ea0();
  return;
}


/* ADDR 002053c0 */
void fn_002053c0(void)

{
  fn_00204f00();
  return;
}


/* ADDR 00205980 */
void fn_00205980(void)

{
  fn_00204f90();
  return;
}


/* ADDR 00205bf0 */
void fn_00205bf0(void)

{
  fn_00204f90();
  return;
}


/* ADDR 002060b8 */
void fn_002060b8(void)

{
  fn_00204f90();
  return;
}


/* ADDR 00206110 */
void fn_00206110(void)

{
  fn_00204ff0();
  return;
}


/* ADDR 002071f8 */
void fn_002071f8(void)

{
  fn_00204ff0();
  return;
}


/* ADDR 002075f0 */
void fn_002075f0(void)

{
  fn_00204ff0();
  return;
}


/* ADDR 0020d188 */
void fn_0020d188(undefined8 param_1,undefined8 param_2)

{
  fn_00275068(param_1,param_2,4);
  return;
}


/* ADDR 0020d1a8 */
void fn_0020d1a8(void)

{
  fn_00275090();
  return;
}


/* ADDR 002041b0 */
void fn_002041b0(void)

{
  fn_00201ad0(1,0xffff);
  return;
}


/* ADDR 00204a30 */
void fn_00204a30(void)

{
  fn_00204910(1,0xffff);
  return;
}


/* ADDR 002061f0 */
undefined4 fn_002061f0(void)

{
  fn_002050b0();
  return 1;
}


/* ADDR 00206a00 */
undefined4 fn_00206a00(void)

{
  fn_002050b0();
  return 1;
}


/* ADDR 00206b30 */
undefined4 fn_00206b30(void)

{
  fn_002050b0();
  return 1;
}


/* ADDR 00206f08 */
undefined4 fn_00206f08(void)

{
  fn_002050b0();
  return 1;
}


/* ADDR 002092b8 */
void fn_002092b8(void)

{
  fn_00208d00(1,0xffff);
  return;
}


/* ADDR 0020df30 */
undefined4 fn_0020df30(void)

{
  fn_0020dc20();
  return 1;
}

extern int DAT_0040f544;
/* ADDR 002092e8 */
void fn_002092e8(void)

{
  fn_0020d188(DAT_0040f544 + 0xe90);
  return;
}

extern int DAT_0040f544;
/* ADDR 00209340 */
void fn_00209340(void)

{
  fn_0020d1a8(DAT_0040f544 + 0xe90);
  return;
}


/* ADDR 0020b8c0 */
void fn_0020b8c0(int param_1)

{
  fn_0035d1a0(param_1 + 0x3860,param_1 + 0x3840,0x20);
  return;
}


/* ADDR 0020c0a8 */
void fn_0020c0a8(void)

{
  fn_0021ad88();
  fn_0021ad58();
  return;
}

extern int DAT_0040f544;
/* ADDR 0020df68 */
void fn_0020df68(void)

{
  fn_00209618(DAT_0040f544 + 4);
  return;
}

extern int DAT_0040f544;
/* ADDR 0020df90 */
void fn_0020df90(void)

{
  fn_00209760(DAT_0040f544 + 4);
  return;
}


/* ADDR 002041d0 */
void fn_002041d0(int param_1)

{
  fn_001f1c08();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

extern int DAT_0040f0e0;
/* ADDR 00205808 */
undefined4 fn_00205808(void)

{
  fn_00103818(DAT_0040f0e0);
  return 1;
}

extern int DAT_0040f544;
/* ADDR 0020be90 */
void fn_0020be90(undefined8 param_1)

{
  fn_0020d188(DAT_0040f544 + 0xe90,param_1);
  return;
}


/* ADDR 00201518 */
void fn_00201518(int param_1)

{
  fn_001f1c08();
  fn_00200f00(param_1 + 0x20);
  return;
}


/* ADDR 00209c90 */
void fn_00209c90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_0020d910(*(int *)(param_1 + 0x10));
  }
  return;
}


/* ADDR 00209cc0 */
void fn_00209cc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 < 1) {
    fn_00209cf0();
  }
  return;
}

extern int DAT_0040f544;
/* ADDR 0020beb8 */
void fn_0020beb8(long param_1)

{
  if (param_1 != 0) {
    fn_0020d1a8(DAT_0040f544 + 0xe90,param_1);
  }
  return;
}

extern int DAT_0040f544;
/* ADDR 0020bee8 */
void fn_0020bee8(long param_1)

{
  if (param_1 != 0) {
    fn_0020d1a8(DAT_0040f544 + 0xe90,param_1);
  }
  return;
}

extern int PTR_DAT_003bdcc0;
/* ADDR 00204f00 */
void fn_00204f00(undefined8 param_1)

{
  fn_002789c0(param_1,10,0x1e,0x1e,PTR_DAT_003bdcc0,0x1880);
  return;
}

extern int DAT_003bdcc8;
/* ADDR 002071c8 */
undefined4 fn_002071c8(int param_1)

{
  fn_00278f00(DAT_003bdcc8,0,*(undefined4 *)(param_1 + 0x18));
  return 1;
}


/* ADDR 002060d8 */
undefined4 fn_002060d8(int param_1)

{
  fn_00206b30(param_1 + 0x60);
  fn_00206f08(param_1 + 0x88);
  return 1;
}

extern int DAT_0040f510;
/* ADDR 0020cc60 */
void fn_0020cc60(undefined8 param_1)

{
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),param_1);
  return;
}


/* ADDR 00207938 */
undefined4 fn_00207938(int param_1)

{
  fn_002050b0();
  fn_00278f00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x7c));
  return 1;
}

extern int DAT_0040f544;
/* ADDR 0020dd48 */
void fn_0020dd48(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_0020bc00(DAT_0040f544,3);
  fn_00209ff8(uVar1,*(undefined4 *)(param_1 + 8));
  return;
}

extern int DAT_0040f518;
/* ADDR 00201960 */
undefined4 fn_00201960(int param_1)

{
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xb0));
  return 1;
}

extern int DAT_0040f518;
/* ADDR 002048d0 */
undefined4 fn_002048d0(int param_1)

{
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  return 1;
}


/* ADDR 00204ec0 */
undefined4 fn_00204ec0(int param_1)

{
  fn_002071c8(*(undefined4 *)(param_1 + 0x60));
  fn_002071c8(*(int *)(param_1 + 0x60) + 0x1c);
  fn_00207938(*(undefined4 *)(param_1 + 100));
  return 1;
}


/* ADDR 00205c10 */
undefined4 fn_00205c10(int param_1)

{
  fn_002071c8(*(undefined4 *)(param_1 + 0x60));
  fn_002071c8(*(int *)(param_1 + 0x60) + 0x1c);
  fn_00208bf0(*(undefined4 *)(param_1 + 100));
  return 1;
}

extern int DAT_003be7a8;
/* ADDR 0020e840 */
void fn_0020e840(void)

{
  if (DAT_003be7a8 == 2) {
    fn_00215788(0);
  }
  DAT_003be7a8 = 1;
  return;
}

extern int DAT_003be7a8;
/* ADDR 0020e880 */
void fn_0020e880(void)

{
  if (DAT_003be7a8 == 2) {
    fn_00215788(0);
  }
  DAT_003be7a8 = 1;
  return;
}

extern int DAT_0040f544;
/* ADDR 0020e020 */
void fn_0020e020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_0027c278(param_2);
  uVar2 = fn_0020bc00(DAT_0040f544,0);
  fn_00209ff8(uVar2,uVar1);
  return;
}

extern int DAT_0040f0e0;
/* ADDR 0020f5a0 */
void fn_0020f5a0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = atoi();
  *(undefined4 *)(DAT_0040f0e0 + 0x2014c) = uVar1;
  fe_FE_SECONDARYOBJECTIVETARGET_00217408();
  fn_0020f268(param_1);
  return;
}

extern int DAT_0040f544;
/* ADDR 0020dcf8 */
void fn_0020dcf8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_0027c278(param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar2 = fn_0020bc00(DAT_0040f544,3);
  fn_00209f38(uVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  return;
}

extern int DAT_0040f4c4;
extern int DAT_0040f540;
/* ADDR 0020aff8 */
void fn_0020aff8(int param_1)

{
  if (*(int *)(param_1 + 0x36e8) != 0) {
    fn_001084a8(DAT_0040f4c4,7,0xc);
    *(undefined4 *)(param_1 + 0x36e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3924) = 0;
  fn_001438e8(DAT_0040f540);
  return;
}

extern int DAT_0040f544;
/* ADDR 0020e0c8 */
void fn_0020e0c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_0020bc00(DAT_0040f544,2);
  uVar2 = fn_0027c278(param_2);
  fn_00209ff8(uVar1,uVar2);
  return;
}

extern int DAT_0040f544;
/* ADDR 0020dfc8 */
void fn_0020dfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_0027c278(param_2);
  uVar2 = fn_0020bc00(DAT_0040f544,0);
  fn_00209f98(uVar2,uVar1,param_3);
  return;
}

extern int DAT_0040f0e0;
/* ADDR 002059a0 */
undefined4 fn_002059a0(int param_1)

{
  long lVar1;
  
  fn_002061f0(param_1 + 0x60);
  fn_00206a00(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0xb8) = 2;
  lVar1 = fn_00103870(DAT_0040f0e0);
  if (lVar1 != 0) {
    fn_00103818(DAT_0040f0e0);
  }
  return 1;
}

extern int DAT_0040f544;
/* ADDR 0020e068 */
void fn_0020e068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_0020bc00(DAT_0040f544,2);
  uVar2 = fn_0027c278(param_2);
  fn_00209ec8(uVar1,uVar2,param_3);
  return;
}

extern int DAT_0040f4d0;
extern int DAT_0040f4dc;
extern int DAT_0040f4e8;
/* ADDR 002019f8 */
void fn_002019f8(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = fn_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac));
  uVar1 = *(undefined4 *)(DAT_0040f4d0 + 0x5ab0);
  *(undefined2 *)(param_1 + 0xfe) = 0;
  uVar2 = fn_0012fc78(DAT_0040f4d0 + 0x910,uVar3,uVar1);
  *(undefined2 *)(param_1 + 0x102) = uVar2;
  uVar2 = fn_00122660(DAT_0040f4dc);
  *(undefined2 *)(param_1 + 0x100) = uVar2;
  return;
}


/* ADDR 00205180 */
void fn_00205180(int param_1)

{
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    fn_00205d40(*(undefined4 *)(param_1 + 0xc));
    break;
  case 2:
    fn_002058f0(*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    fn_00205b68(*(undefined4 *)(param_1 + 0x10));
    break;
  case 4:
    fn_00204d80(*(undefined4 *)(param_1 + 0x14));
    break;
  case 5:
    fn_00205798(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

extern int DAT_003be7a0;
extern int DAT_0040f544;
/* ADDR 0020db90 */
void fn_0020db90(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = fn_00275068(DAT_003be7a0,(param_2 + 0x40) * 2,4);
  param_1[1] = iVar1;
  *param_1 = param_2;
  if (param_1[2] != -1) {
    uVar2 = fn_0020bc00(DAT_0040f544,3);
    uVar2 = fn_00209e80(uVar2,param_1[2]);
    fn_00209c90(uVar2,param_1[1]);
    fn_00209cc0(uVar2);
  }
  return;
}

extern int DAT_0040f0e0;
/* ADDR 00205ca0 */
undefined4 fn_00205ca0(int param_1)

{
  fn_00204f30();
  fn_00206a58(param_1 + 0x60);
  fe_FE_PressStart_00206b88(param_1 + 0x88);
  *(undefined1 *)(DAT_0040f0e0 + 0x2020c) =
       *(undefined1 *)
        (*(char *)(param_1 + 0xc9) * 0x24 + *(int *)(*(int *)(DAT_0040f0e0 + 0x2106c) + 4) + 0x10);
  *(char *)(DAT_0040f0e0 + 0x2020d) = *(char *)(param_1 + 0xca) + '\x01';
  *(undefined1 *)(DAT_0040f0e0 + 0x2020e) = 1;
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return 1;
}

extern int DAT_003e0c30;
extern int DAT_003e0c48;
extern int DAT_003e0c60;
extern int DAT_003e0c78;
/* ADDR 002050b8 */
void fn_002050b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = fn_00107cf8(0x68);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = fn_00107cf8(0x78);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = fn_00107cf8(0x698);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  iVar2 = fn_00107cf8(0xd8);
  *(undefined **)(iVar2 + 0x74) = &DAT_003e0c48;
  *(undefined **)(iVar2 + 0x9c) = &DAT_003e0c30;
  *(int *)(param_1 + 0xc) = iVar2;
  iVar2 = fn_00107cf8(0xc0);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined **)(iVar2 + 0x74) = &DAT_003e0c78;
  *(undefined **)(iVar2 + 0x90) = &DAT_003e0c60;
  *(int *)(param_1 + 8) = iVar2;
  fn_00205c50(uVar1);
  fn_00205830(*(undefined4 *)(param_1 + 8));
  fn_00205a00(*(undefined4 *)(param_1 + 0x10));
  fn_00204a50(*(undefined4 *)(param_1 + 0x14));
  fn_002053c0(*(undefined4 *)(param_1 + 0x18));
  return;
}
