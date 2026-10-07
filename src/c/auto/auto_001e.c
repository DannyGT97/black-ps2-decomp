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
