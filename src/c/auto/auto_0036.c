/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00367f20 */
undefined4 fn_00367f20(void)

{
  return 0xffffffff;
}


/* ADDR 00367f28 */
undefined4 fn_00367f28(void)

{
  return 0xffffffff;
}

extern int PTR_DAT_0040b4a0;
/* ADDR 00364e20 */
undefined ** fn_00364e20(void)

{
  return &PTR_DAT_0040b4a0;
}

extern int DAT_003d7158;
/* ADDR 00367ce0 */
void fn_00367ce0(void)

{
  DAT_003d7158 = 0;
  return;
}


/* ADDR 00367fe0 */
undefined8 fn_00367fe0(undefined8 param_1,int param_2)

{
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


/* ADDR 0036ab48 */
void fn_0036ab48(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

extern int PTR_DAT_0040a991;
/* ADDR 00364de0 */
int fn_00364de0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + param_1) & 1) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

extern int PTR_DAT_0040a991;
/* ADDR 00364e00 */
int fn_00364e00(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + param_1) & 2) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

extern int DAT_00483ae4;
extern int DAT_00483aec;
/* ADDR 0036a4d8 */
void fn_0036a4d8(uint param_1)

{
  if ((int)param_1 < 0) {
    *(undefined4 *)((param_1 & 0x7fffffff) * 0xc + DAT_00483ae4) = 0;
    return;
  }
  *(undefined4 *)(param_1 * 0xc + DAT_00483aec) = 0;
  return;
}


/* ADDR 00366788 */
int fn_00366788(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff0000) == 0) {
    iVar1 = 0x10;
    param_1 = param_1 << 0x10;
  }
  if ((param_1 & 0xff000000) == 0) {
    iVar1 = iVar1 + 8;
    param_1 = param_1 << 8;
  }
  if ((param_1 & 0xf0000000) == 0) {
    iVar1 = iVar1 + 4;
    param_1 = param_1 << 4;
  }
  if ((param_1 & 0xc0000000) == 0) {
    iVar1 = iVar1 + 2;
    param_1 = param_1 << 2;
  }
  if ((-1 < (int)param_1) && (iVar1 = iVar1 + 1, (param_1 & 0x40000000) == 0)) {
    return 0x20;
  }
  return iVar1;
}


/* ADDR 0036fa80 */
void fn_0036fa80(void)

{
  fn_0035e828();
  return;
}


/* ADDR 0036fa00 */
undefined4 fn_0036fa00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00292088();
  return *puVar1;
}

extern int PTR_DAT_003d6944;
/* ADDR 00360ac8 */
void fn_00360ac8(undefined8 param_1,undefined8 param_2)

{
  fn_00360af0(param_1,param_2,PTR_DAT_003d6944 + 0x5c);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 00364e38 */
void fn_00364e38(void)

{
  fn_00364e20(PTR_DAT_003d6944);
  return;
}


/* ADDR 0036eb10 */
void fn_0036eb10(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(4,auStack_20);
  return;
}


/* ADDR 0036ebc0 */
void fn_0036ebc0(undefined4 param_1)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  Deci2Call(0x10,auStack_20);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 003605b8 */
void fn_003605b8(undefined8 param_1,undefined8 param_2)

{
  fn_0035f6c0(PTR_DAT_003d6944,param_1,param_2);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 00360800 */
void fn_00360800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_003605f0(PTR_DAT_003d6944,param_1,param_2,param_3);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 00364da8 */
void fn_00364da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_00364b78(PTR_DAT_003d6944,param_1,param_2,param_3);
  return;
}

extern int DAT_003d7168;
extern int DAT_00483ad4;
/* ADDR 0036a410 */
void fn_0036a410(void)

{
  fn_00368338(5);
  RemoveDmacHandler(5,DAT_00483ad4);
  DAT_003d7168 = 0;
  return;
}


/* ADDR 0036fa20 */
int fn_0036fa20(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)fn_00292088();
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *(long *)(iVar1 + 0x20) = *(long *)(iVar1 + 0x20) + 1;
  return iVar1;
}


/* ADDR 0036ab98 */
int fn_0036ab98(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    iVar1 = fn_0036ab68();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x40;
  }
  return iVar1;
}


/* ADDR 0036ed30 */
void fn_0036ed30(void)

{
  long lVar1;
  
  lVar1 = GetMemorySize();
  if (lVar1 == 0x2000000) {
    fn_0036ed70();
  }
  else {
    _InitTLB();
  }
  return;
}

extern int DAT_00482da8;
/* ADDR 00365d48 */
long fn_00365d48(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = fn_00367f20(param_2);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}

extern int DAT_00482da8;
/* ADDR 00365da0 */
long fn_00365da0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = fn_00367fe0(param_2,param_3);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}

extern int DAT_00482da8;
/* ADDR 00365e00 */
long fn_00365e00(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = fn_00367f28(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}

extern int DAT_00482da8;
/* ADDR 00365e60 */
long fn_00365e60(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = fn_00367ea8(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}

extern int DAT_00482da8;
/* ADDR 00365f20 */
long fn_00365f20(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_00482da8 = 0;
  lVar1 = fn_00367e28(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_00482da8 != 0)) {
    *param_1 = DAT_00482da8;
  }
  return lVar1;
}
