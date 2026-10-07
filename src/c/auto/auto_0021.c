/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00218398 */
void fn_00218398(void)

{
  return;
}

extern int DAT_003be8b8;
/* ADDR 00216af0 */
void fn_00216af0(undefined4 param_1)

{
  DAT_003be8b8 = param_1;
  return;
}

extern int DAT_003be8fc;
/* ADDR 0021ad98 */
void fn_0021ad98(undefined4 param_1)

{
  DAT_003be8fc = param_1;
  return;
}

extern int DAT_003be8fc;
/* ADDR 0021ada8 */
undefined4 fn_0021ada8(void)

{
  return DAT_003be8fc;
}

extern int DAT_003be844;
extern int DAT_0040f0e0;
/* ADDR 002122d0 */
void fn_002122d0(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x2014c) = DAT_003be844;
  return;
}

extern int DAT_0043df50;
extern int DAT_0043df68;
/* ADDR 0021ad58 */
void fn_0021ad58(void)

{
  if ((DAT_0043df50 == 0) && (DAT_0043df68 != 0)) {
    *(undefined4 *)(DAT_0043df68 + 0x24) = 0;
  }
  return;
}


/* ADDR 00211420 */
int fn_00211420(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*param_1 == param_3) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 3;
    } while (iVar1 < param_2);
  }
  return -1;
}


/* ADDR 00212318 */
void fn_00212318(void)

{
  fn_00212338(0);
  return;
}


/* ADDR 00218870 */
void fn_00218870(void)

{
  fn_00241c40();
  return;
}


/* ADDR 0021a1f0 */
void fn_0021a1f0(void)

{
  fn_0021a130();
  return;
}


/* ADDR 0021bae0 */
void fn_0021bae0(void)

{
  fn_0021b1b0();
  return;
}


/* ADDR 0021f0f8 */
void fn_0021f0f8(void)

{
  fn_00251a60();
  return;
}


/* ADDR 00218350 */
void fn_00218350(void)

{
  fn_00218158(1,0xffff);
  return;
}


/* ADDR 0021bac0 */
void fn_0021bac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_0021b1b0(param_1,param_2,0,param_3);
  return;
}


/* ADDR 00211580 */
void fn_00211580(void)

{
  fn_00211450();
  fn_00210fe8();
  return;
}

extern int DAT_003be844;
/* ADDR 002122f0 */
void fn_002122f0(void)

{
  DAT_003be844 = atoi();
  fn_002122d0();
  return;
}

extern int DAT_0043dee0;
/* ADDR 0021b0b0 */
void fn_0021b0b0(int param_1)

{
  Pool_Free(DAT_0043dee0,param_1 + -4,*(int *)(param_1 + -4) + 4);
  return;
}

extern int DAT_0040f4f0;
/* ADDR 00215bb0 */
void fn_00215bb0(void)

{
  fn_0010b530(DAT_0040f4f0,0);
  fn_0010b608(DAT_0040f4f0,1);
  return;
}

extern int DAT_0043dee0;
/* ADDR 0021b078 */
int * fn_0021b078(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)Pool_Alloc(DAT_0043dee0,param_1 + 4);
  *piVar1 = param_1;
  return piVar1 + 1;
}

extern int DAT_003be838;
extern int DAT_003be83c;
extern int DAT_0040f510;
/* ADDR 002120f0 */
void fn_002120f0(void)

{
  DAT_003be83c = atoi();
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be838);
  fn_00212088();
  return;
}

extern int DAT_003be838;
extern int DAT_003be840;
extern int DAT_0040f510;
/* ADDR 00212140 */
void fn_00212140(void)

{
  DAT_003be840 = atoi();
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be838);
  fn_00212088();
  return;
}

extern int DAT_003be820;
extern int DAT_003be830;
extern int DAT_0040f510;
/* ADDR 00211e60 */
void fn_00211e60(undefined8 param_1)

{
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be820);
  DAT_003be830 = atoi(param_1);
  fn_00211d78();
  return;
}

extern int DAT_003be820;
extern int DAT_003be834;
extern int DAT_0040f510;
/* ADDR 00211eb8 */
void fn_00211eb8(undefined8 param_1)

{
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be820);
  DAT_003be834 = atoi(param_1);
  fn_00211d78();
  return;
}

extern int DAT_003be804;
extern int DAT_003be808;
extern int DAT_0040f0e0;
extern int DAT_0040f510;
/* ADDR 00210e00 */
void fn_00210e00(void)

{
  DAT_003be808 = atoi();
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  *(bool *)(DAT_0040f0e0 + 0x20167) = DAT_003be808 != 0;
  return;
}

extern int DAT_003be804;
extern int DAT_003be80c;
extern int DAT_0040f0e0;
extern int DAT_0040f510;
/* ADDR 00210e68 */
void fn_00210e68(void)

{
  DAT_003be80c = atoi();
  fn_001ef7b0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x38),DAT_003be804);
  *(bool *)(DAT_0040f0e0 + 0x20165) = DAT_003be80c != 0;
  return;
}
