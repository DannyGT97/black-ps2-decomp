/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001e1240 */
undefined4 fn_001e1240(undefined8 param_1,int param_2)

{
  return *(undefined4 *)(param_2 + 0x30);
}


/* ADDR 001e5cd8 */
undefined4 fn_001e5cd8(void)

{
  return 1;
}


/* ADDR 001e5d80 */
void fn_001e5d80(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x170) = 0;
  return;
}


/* ADDR 001e6050 */
void fn_001e6050(void)

{
  return;
}


/* ADDR 001e69e0 */
undefined2 fn_001e69e0(int param_1)

{
  return *(undefined2 *)(param_1 + 0x62);
}


/* ADDR 001e8248 */
undefined4 fn_001e8248(void)

{
  return 1;
}


/* ADDR 001e8798 */
void fn_001e8798(void)

{
  return;
}


/* ADDR 001ea510 */
void fn_001ea510(void)

{
  return;
}


/* ADDR 001ea7c0 */
undefined4 fn_001ea7c0(void)

{
  return 1;
}


/* ADDR 001ed640 */
undefined4 fn_001ed640(void)

{
  return 1;
}


/* ADDR 001e1ea8 */
void fn_001e1ea8(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 6;
  return;
}


/* ADDR 001ec768 */
undefined8 fn_001ec768(int param_1)

{
  return **(undefined8 **)(param_1 + 0x1e10);
}


/* ADDR 001e1eb8 */
void fn_001e1eb8(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 3;
  return;
}


/* ADDR 001e4ac8 */
void fn_001e4ac8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 4) = 3;
  return;
}


/* ADDR 001e75f0 */
void fn_001e75f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


/* ADDR 001efe60 */
void fn_001efe60(int param_1)

{
  *(undefined4 *)(param_1 + 0xcbf8) = 0;
  return;
}


/* ADDR 001ec840 */
int fn_001ec840(int param_1,undefined8 param_2,int param_3)

{
  return *(int *)(*(int *)(param_1 + 0x1e10) + 0x18) + param_3 * 8;
}


/* ADDR 001e51c8 */
undefined4 fn_001e51c8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x44) + 0x5c));
}

extern int PTR_DAT_003bd478;
/* ADDR 001e5408 */
undefined * fn_001e5408(undefined8 param_1,int param_2)

{
  return (&PTR_DAT_003bd478)[param_2];
}

extern int DAT_003bd9d0;
extern int DAT_003bd9d8;
extern int DAT_003c0e04;
/* ADDR 001eb490 */
void fn_001eb490(void)

{
  if (1 < (uint)(DAT_003c0e04 - DAT_003bd9d8)) {
    DAT_003bd9d0 = DAT_003c0e04;
  }
  DAT_003bd9d8 = DAT_003c0e04;
  return;
}

extern int DAT_0040f4d0;
/* ADDR 001e7118 */
bool fn_001e7118(int param_1)

{
  return *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x34) < *(float *)(DAT_0040f4d0 + 0x20);
}


/* ADDR 001e4b38 */
undefined4 fn_001e4b38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = 0;
  if ((((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 2)) || (iVar1 == 4)) {
    uVar2 = 1;
  }
  return uVar2;
}


/* ADDR 001e9640 */
void fn_001e9640(int param_1)

{
  fn_001ea510(*(undefined4 *)(param_1 + 0x174));
  return;
}


/* ADDR 001e9c48 */
void fn_001e9c48(int param_1)

{
  fn_001ef6f0(*(undefined4 *)(param_1 + 0x1a0));
  return;
}


/* ADDR 001ecad8 */
void fn_001ecad8(int param_1)

{
  fn_001ed4f0(param_1 + 0x7b0);
  return;
}


/* ADDR 001ed3a0 */
void fn_001ed3a0(void)

{
  fn_00282218();
  return;
}


/* ADDR 001ef6f0 */
void fn_001ef6f0(void)

{
  fn_00280a80();
  return;
}


/* ADDR 001e5fa8 */
bool fn_001e5fa8(int param_1)

{
  long lVar1;
  
  lVar1 = fn_001e4b70(param_1 + 0x858);
  return lVar1 != 0;
}


/* ADDR 001ea4f0 */
undefined4 fn_001ea4f0(undefined8 param_1)

{
  fn_001e9ee8(param_1,0);
  return 1;
}


/* ADDR 001ed478 */
undefined4 fn_001ed478(void)

{
  fn_00282628();
  return 1;
}


/* ADDR 001e16e0 */
void fn_001e16e0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = fn_00281120();
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}


/* ADDR 001e8b38 */
void fn_001e8b38(int param_1)

{
  fn_001e8120();
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}


/* ADDR 001e9660 */
void fn_001e9660(int param_1)

{
  fn_001e8120();
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}


/* ADDR 001e9b30 */
void fn_001e9b30(int param_1)

{
  fn_001e8120();
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}


/* ADDR 001e8980 */
void fn_001e8980(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1b0);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x40) + (int)*(short *)(iVar1 + 0x10));
  return;
}

extern int DAT_0040f510;
/* ADDR 001eaac8 */
void fn_001eaac8(void)

{
  fn_001ebfc0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24));
  return;
}


/* ADDR 001eed58 */
undefined4 fn_001eed58(int param_1)

{
  fn_00280b10();
  *(undefined1 *)(param_1 + 0x291) = 0;
  *(undefined4 *)(param_1 + 0x250) = 2;
  return 1;
}


/* ADDR 001ee850 */
void fn_001ee850(int param_1)

{
  fn_001edd80();
  *(float *)(param_1 + 8) = *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x20) / *(float *)(param_1 + 4);
  return;
}


/* ADDR 001e0440 */
void fn_001e0440(undefined8 param_1)

{
  fn_001dfc78();
  fn_001e0fe8(param_1);
  fn_001e10c0(param_1);
  fn_001e1068(param_1);
  return;
}


/* ADDR 001e10c0 */
void fn_001e10c0(undefined8 param_1)

{
  fn_001e0d28();
  fn_001e0f28(param_1);
  fn_001e0e70(param_1);
  fn_001e0a30(param_1);
  return;
}


/* ADDR 001e1ba0 */
undefined4 fn_001e1ba0(int param_1)

{
  memset(param_1 + 0x20,0,0x28);
  *(undefined4 *)(param_1 + 0x5c) = 7;
  return 1;
}


/* ADDR 001ea780 */
void fn_001ea780(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x260;
  do {
    fn_001eaaf8(param_1);
    param_1 = param_1 + 0x4c;
  } while (param_1 < iVar1);
  return;
}


/* ADDR 001ea898 */
undefined4 fn_001ea898(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x260;
  do {
    fn_001eaba0(param_1);
    param_1 = param_1 + 0x4c;
  } while (param_1 < iVar1);
  return 1;
}

extern int DAT_0040f50c;
extern int DAT_0040f510;
/* ADDR 001e79f0 */
undefined4 fn_001e79f0(int param_1)

{
  if (*(int *)(param_1 + 8) != 3) {
    fn_00280100(DAT_0040f510,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(DAT_0040f50c + 0x948) = 0;
    *(undefined4 *)(param_1 + 8) = 3;
  }
  return 1;
}

extern int DAT_0040f4d0;
/* ADDR 001e5ce0 */
int fn_001e5ce0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = -1;
  uVar2 = fn_00135570(param_2);
  iVar4 = 0;
  lVar3 = fn_00138320(uVar2);
  if (0x23 < lVar3) {
    if (lVar3 < 0x26) {
      iVar4 = *(int *)(param_1 + 0x594);
      iVar1 = 2;
    }
    else if (lVar3 < 0x2b) {
      iVar4 = *(int *)(param_1 + 0x590);
      iVar1 = 1;
    }
  }
  iVar1 = fn_0012d158(DAT_0040f4d0,0,iVar1 + -1);
  return iVar1 * 400 + iVar4;
}
