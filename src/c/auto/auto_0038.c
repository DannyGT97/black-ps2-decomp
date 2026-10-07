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


/* ADDR 00382460 */
void fn_00382460(void)

{
  fn_00313008();
  return;
}


/* ADDR 00382480 */
void fn_00382480(void)

{
  fn_00313048();
  return;
}


/* ADDR 003824e0 */
void fn_003824e0(void)

{
  fn_0027acc8();
  return;
}


/* ADDR 00383208 */
void fn_00383208(void)

{
  fn_00287118();
  return;
}


/* ADDR 003818a0 */
void fn_003818a0(void)

{
  fn_00381758(1,0xffff);
  return;
}


/* ADDR 003818c0 */
void fn_003818c0(void)

{
  fn_00381758(0,0xffff);
  return;
}


/* ADDR 00381a70 */
void fn_00381a70(void)

{
  fn_003818e0(1,0xffff);
  return;
}


/* ADDR 00381a90 */
void fn_00381a90(void)

{
  fn_003818e0(0,0xffff);
  return;
}


/* ADDR 00382278 */
void fn_00382278(void)

{
  fn_00382130(1,0xffff);
  return;
}


/* ADDR 00382298 */
void fn_00382298(void)

{
  fn_00382130(0,0xffff);
  return;
}


/* ADDR 003872e0 */
undefined8 fn_003872e0(undefined8 param_1)

{
  String_ctor_cstr();
  return param_1;
}

extern int DAT_0043dee0;
/* ADDR 00385200 */
void fn_00385200(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}

extern int DAT_0043dee0;
/* ADDR 00386668 */
void fn_00386668(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}

extern int DAT_0043dee0;
/* ADDR 00386698 */
void fn_00386698(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}

extern int DAT_0043dee0;
/* ADDR 003866c8 */
void fn_003866c8(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}

extern int DAT_0043dee0;
/* ADDR 00386968 */
void fn_00386968(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}


/* ADDR 00385f80 */
void fn_00385f80(int param_1,int param_2)

{
  (**(code **)(*(int *)(param_2 + 4) + 0xc))(param_2 + *(short *)(*(int *)(param_2 + 4) + 8));
  *(int *)(param_1 + 0x20) = param_2;
  return;
}

extern int DAT_0043dee4;
/* ADDR 00385b10 */
void fn_00385b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_0024fa38(DAT_0043dee4,0x34);
  fn_00252030(uVar1,param_1,param_2);
  return;
}

extern int DAT_0043dee4;
/* ADDR 00385db0 */
void fn_00385db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_0024fa38(DAT_0043dee4,0x34);
  fn_002520d8(uVar1,param_1,param_2);
  return;
}


/* ADDR 0038bad8 */
undefined4 fn_0038bad8(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = fn_002e3920(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    pcVar1 = (char *)fn_002e3920(param_2);
    if (*pcVar1 == '_') {
      return 1;
    }
  }
  return 0;
}


/* ADDR 0038c390 */
undefined4 fn_0038c390(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = fn_002e3920(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    pcVar1 = (char *)fn_002e3920(param_2);
    if (*pcVar1 == '_') {
      return 1;
    }
  }
  return 0;
}


/* ADDR 0038e768 */
undefined4 fn_0038e768(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = fn_002e3920(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    pcVar1 = (char *)fn_002e3920(param_2);
    if (*pcVar1 == '_') {
      return 1;
    }
  }
  return 0;
}


/* ADDR 0038efb0 */
undefined4 fn_0038efb0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = fn_002e3920(param_2);
    if (lVar2 == 0) {
      return 0;
    }
    pcVar1 = (char *)fn_002e3920(param_2);
    if (*pcVar1 == '_') {
      return 1;
    }
  }
  return 0;
}
