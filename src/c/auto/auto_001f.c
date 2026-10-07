/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001f1c00 */
void fn_001f1c00(void)

{
  return;
}


/* ADDR 001f1c08 */
void fn_001f1c08(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 001f27f0 */
void fn_001f27f0(void)

{
  return;
}


/* ADDR 001f2828 */
void fn_001f2828(void)

{
  return;
}


/* ADDR 001f2830 */
undefined4 fn_001f2830(void)

{
  return 1;
}


/* ADDR 001f2910 */
void fn_001f2910(void)

{
  return;
}


/* ADDR 001f2c98 */
undefined8 fn_001f2c98(void)

{
  return 0;
}


/* ADDR 001f44b8 */
void fn_001f44b8(void)

{
  return;
}


/* ADDR 001f7c40 */
void fn_001f7c40(void)

{
  return;
}


/* ADDR 001fc4f8 */
void fn_001fc4f8(void)

{
  return;
}


/* ADDR 001fc500 */
void fn_001fc500(void)

{
  return;
}


/* ADDR 001fdff8 */
void fn_001fdff8(void)

{
  return;
}


/* ADDR 001f9980 */
void fn_001f9980(int param_1)

{
  *(undefined4 *)(param_1 + 0xb90) = 1;
  return;
}


/* ADDR 001f8ff8 */
void fn_001f8ff8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1b8) != param_2) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  *(int *)(param_1 + 0x1b8) = param_2;
  return;
}

extern int DAT_0040f518;
/* ADDR 001f2870 */
undefined4 fn_001f2870(undefined8 param_1,char param_2)

{
  return *(undefined4 *)(param_2 * 0xa8 + DAT_0040f518 + 0x8c);
}

extern int DAT_0040f0e0;
/* ADDR 001f5928 */
void fn_001f5928(int param_1)

{
  if (*(int *)(DAT_0040f0e0 + 0x2014c) != 0) {
    *(undefined1 *)(param_1 + 0x19a4) = 1;
  }
  return;
}


/* ADDR 001f2740 */
void fn_001f2740(int param_1,int param_2,char param_3,int param_4,int param_5,int param_6)

{
  param_1 = param_3 * 0xa8 + param_1;
  *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + param_4;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + param_5;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_6;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = param_2;
  return;
}


/* ADDR 001fd978 */
void fn_001fd978(void)

{
  fn_001f1f08();
  return;
}


/* ADDR 001fdf28 */
void fn_001fdf28(void)

{
  fn_001fdff8();
  return;
}


/* ADDR 001f0300 */
void fn_001f0300(void)

{
  fn_001effc8(1,0xffff);
  return;
}

extern int DAT_0040f544;
/* ADDR 001f1df8 */
void fn_001f1df8(void)

{
  fn_00209ec8(DAT_0040f544 + 0x1c6c);
  return;
}

extern int DAT_0040f544;
/* ADDR 001f1e90 */
void fn_001f1e90(void)

{
  fn_00209ff8(DAT_0040f544 + 0x13a8);
  return;
}

extern int DAT_0040f544;
/* ADDR 001f1eb8 */
void fn_001f1eb8(void)

{
  fn_00209ff8(DAT_0040f544 + 0x1c6c);
  return;
}

extern int DAT_0040f518;
/* ADDR 001f2a38 */
void fn_001f2a38(void)

{
  fn_001f4d30(*(undefined4 *)(DAT_0040f518 + 0x14));
  return;
}

extern int DAT_0040f518;
/* ADDR 001f2ca8 */
void fn_001f2ca8(undefined8 param_1,undefined1 *param_2)

{
  fn_001f8ff8(*(undefined4 *)(DAT_0040f518 + 0x38),*param_2);
  return;
}

extern int DAT_0040f518;
/* ADDR 001f2cd0 */
void fn_001f2cd0(undefined8 param_1,ulong param_2)

{
  fn_001f8528(*(undefined4 *)(DAT_0040f518 + 0x34),param_2 ^ 1);
  return;
}


/* ADDR 001f42a0 */
void fn_001f42a0(int param_1)

{
  fn_001f1c08();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}


/* ADDR 001f59c0 */
void fn_001f59c0(int param_1)

{
  fn_001f1c08();
  *(undefined1 *)(param_1 + 0x2b10) = 0;
  return;
}


/* ADDR 001f19d0 */
undefined4 fn_001f19d0(undefined8 param_1)

{
  fn_001f1a00();
  fn_001f1a70(param_1);
  return 1;
}


/* ADDR 001f81d8 */
void fn_001f81d8(int param_1)

{
  fn_001f1c08();
  fn_00200a68(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


/* ADDR 001f1e20 */
void fn_001f1e20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_0027c278(param_2);
  fn_001f1e90(param_1,uVar1);
  return;
}


/* ADDR 001f1e58 */
void fn_001f1e58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_0027c278(param_2);
  fn_001f1eb8(param_1,uVar1);
  return;
}

extern int DAT_0040f518;
/* ADDR 001f2838 */
void fn_001f2838(undefined8 param_1,char param_2,undefined8 param_3)

{
  fn_001f1b98(DAT_0040f518 + param_2 * 0xa8,param_3);
  return;
}

extern int DAT_0040f518;
/* ADDR 001f2898 */
void fn_001f2898(undefined8 param_1,char param_2,undefined8 param_3)

{
  fn_001f1c00(DAT_0040f518 + param_2 * 0xa8,param_3);
  return;
}


/* ADDR 001f85d0 */
void fn_001f85d0(int param_1)

{
  fn_001f1c08();
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  fn_00200f00(param_1 + 0x120);
  fn_00200a68(param_1 + 0x1c0);
  return;
}

extern int DAT_0040f544;
/* ADDR 001f1d48 */
void fn_001f1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = fn_0027c278(param_2);
  fn_00209f38(DAT_0040f544 + 0x13a8,uVar1,param_3);
  return;
}

extern int DAT_0040f518;
/* ADDR 001f84e8 */
undefined4 fn_001f84e8(int param_1)

{
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xa0));
  return 1;
}

extern int DAT_0040f518;
/* ADDR 001f8fb8 */
undefined4 fn_001f8fb8(int param_1)

{
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1bc));
  return 1;
}


/* ADDR 001f1db0 */
void fn_001f1db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = fn_0027c278(param_2);
  fn_001f1df8(param_1,uVar1,param_3);
  return;
}


/* ADDR 001f9eb0 */
void fn_001f9eb0(int param_1)

{
  fn_001f1c08();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  fn_00200a68(param_1 + 0x20);
  fn_001f9028(param_1 + 0xc0);
  fn_001fa468(param_1 + 0xc80);
  *(undefined4 *)(param_1 + 0xea8) = 0;
  return;
}

extern int DAT_0040f518;
/* ADDR 001f4cb0 */
undefined4 fn_001f4cb0(int param_1)

{
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  return 1;
}

extern int DAT_0040f518;
/* ADDR 001ffdc8 */
undefined4 fn_001ffdc8(int param_1)

{
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 1
               ,*(undefined4 *)(param_1 + 0x18));
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 1
               ,*(undefined4 *)(param_1 + 0x1c));
  fn_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return 1;
}
