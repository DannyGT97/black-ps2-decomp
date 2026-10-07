/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00350098 */
void fn_00350098(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}


/* ADDR 00353360 */
undefined4 fn_00353360(void)

{
  return 0x1000;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035c4a0 */
undefined * fn_0035c4a0(void)

{
  return PTR_DAT_003d6944;
}


/* ADDR 00351ad0 */
void fn_00351ad0(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


/* ADDR 00354c60 */
void fn_00354c60(undefined8 param_1,int param_2,int param_3)

{
  *(int *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(int *)(param_3 + 0x24) = param_2;
  *(int *)(*(int *)(param_2 + 0x24) + 0x28) = param_2;
  return;
}


/* ADDR 00354c80 */
void fn_00354c80(undefined8 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035f630 */
uint fn_0035f630(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(PTR_DAT_003d6944 + 0x58) * 0x41c64e6d + 0x3039;
  *(uint *)(PTR_DAT_003d6944 + 0x58) = uVar1;
  return uVar1 & 0x7fffffff;
}


/* ADDR 00353518 */
void fn_00353518(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x474) != 0) && (iVar1 = *(int *)(param_1 + 0x440), iVar1 != 0)) {
    *(uint *)(param_1 + 0x474) = iVar1 + ((*(uint *)(iVar1 + 4) & 0x7ffffff8) >> 1);
  }
  return;
}


/* ADDR 00352020 */
void fn_00352020(int param_1)

{
  fn_00348a38(*(undefined2 *)(param_1 + 2));
  return;
}


/* ADDR 0035a9c8 */
void fn_0035a9c8(void)

{
  fn_0035b738();
  return;
}


/* ADDR 0035a9e8 */
void fn_0035a9e8(void)

{
  fn_0035b910();
  return;
}


/* ADDR 0035aa08 */
void fn_0035aa08(void)

{
  fn_0035bae8();
  return;
}


/* ADDR 0035b228 */
void fn_0035b228(void)

{
  fn_0035b0e8();
  return;
}


/* ADDR 0035b248 */
void fn_0035b248(void)

{
  fn_0035ad50();
  return;
}


/* ADDR 0035d598 */
void fn_0035d598(void)

{
  fn_00365f80();
  return;
}


/* ADDR 0035e730 */
void fn_0035e730(undefined8 param_1)

{
  fn_003605b8(param_1,0);
  return;
}


/* ADDR 00352b30 */
void fn_00352b30(void)

{
  fn_00352b00(1,0xffff);
  return;
}


/* ADDR 0035d998 */
void fn_0035d998(int param_1)

{
  fn_00365d48(*(undefined4 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0xe));
  return;
}


/* ADDR 00356030 */
void fn_00356030(undefined8 param_1,undefined8 param_2)

{
  fn_00355f88(1,param_1,param_2);
  return;
}


/* ADDR 00356058 */
void fn_00356058(undefined8 param_1,undefined8 param_2)

{
  fn_00355f88(0,param_1,param_2);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035d398 */
void fn_0035d398(void)

{
  fn_0035d378(PTR_DAT_003d6944);
  return;
}


/* ADDR 003535b0 */
void fn_003535b0(undefined8 param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 + 4) = param_3 | 1;
  *(int *)(param_2 + 0xc) = param_2;
  *(int *)(param_2 + 8) = param_2;
  *(uint *)(param_2 + param_3) = param_3;
  fn_00353518();
  return;
}

extern int DAT_003d6ca8;
extern int DAT_003d6cac;
extern int DAT_003d7230;
/* ADDR 0035ec10 */
void fn_0035ec10(void)

{
  DAT_003d6cac = DAT_003d6cac + -1;
  if (DAT_003d6cac == 0) {
    DAT_003d6ca8 = 0xffffffff;
    SignalSema(DAT_003d7230);
  }
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035e828 */
void fn_0035e828(undefined8 param_1)

{
  fn_0035ebb0(PTR_DAT_003d6944);
  fn_003640d0(PTR_DAT_003d6944,param_1);
  fn_0035ec10(PTR_DAT_003d6944);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035e7d8 */
undefined8 fn_0035e7d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  fn_0035ebb0(PTR_DAT_003d6944);
  uVar1 = fn_003639a0(PTR_DAT_003d6944,param_1);
  fn_0035ec10(PTR_DAT_003d6944);
  return uVar1;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035e778 */
undefined8 fn_0035e778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  fn_0035ebb0(PTR_DAT_003d6944);
  uVar1 = fn_00364ab8(PTR_DAT_003d6944,param_1,param_2);
  fn_0035ec10(PTR_DAT_003d6944);
  return uVar1;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035f660 */
undefined8 fn_0035f660(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  fn_0035ebb0(PTR_DAT_003d6944);
  uVar1 = fn_00364538(PTR_DAT_003d6944,param_1,param_2);
  fn_0035ec10(PTR_DAT_003d6944);
  return uVar1;
}
