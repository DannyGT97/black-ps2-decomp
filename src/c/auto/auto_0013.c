/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00130690 */
void fn_00130690(void)

{
  return;
}


/* ADDR 00133fa0 */
void fn_00133fa0(void)

{
  return;
}


/* ADDR 00135570 */
undefined4 fn_00135570(int param_1)

{
  return *(undefined4 *)(param_1 + 0x328);
}


/* ADDR 00135578 */
void fn_00135578(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3a9) = param_2;
  return;
}


/* ADDR 00137318 */
void fn_00137318(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 00138320 */
undefined4 fn_00138320(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00138328 */
void fn_00138328(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 00138338 */
void fn_00138338(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 00138340 */
undefined4 fn_00138340(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* ADDR 001389a0 */
void fn_001389a0(void)

{
  return;
}


/* ADDR 0013ee20 */
void fn_0013ee20(void)

{
  return;
}


/* ADDR 0013ee28 */
undefined4 fn_0013ee28(void)

{
  return 1;
}


/* ADDR 0013ee30 */
void fn_0013ee30(void)

{
  return;
}


/* ADDR 0013ee48 */
void fn_0013ee48(int param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


/* ADDR 0013d3f0 */
undefined4 fn_0013d3f0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x34c) + 0x18);
}

extern int DAT_004147c0;
/* ADDR 00138378 */
undefined4 * fn_00138378(int param_1)

{
  return &DAT_004147c0 + param_1 * 0x10;
}

extern int DAT_0040f540;
/* ADDR 00138c50 */
undefined4 fn_00138c50(void)

{
  return *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 0x14);
}

extern int DAT_0040f540;
/* ADDR 00138c68 */
undefined4 fn_00138c68(void)

{
  return *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 0x18);
}


/* ADDR 0013d8a0 */
void fn_0013d8a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1f98) == 0) {
    *(undefined4 *)(param_1 + 0x1f98) = param_2;
  }
  return;
}

extern int DAT_0040f4bc;
/* ADDR 001378f0 */
float fn_001378f0(int param_1)

{
  return *(float *)(param_1 + 0xc0) * *(float *)(DAT_0040f4bc + 0x1660);
}


/* ADDR 0013dc38 */
void fn_0013dc38(int param_1)

{
  *(undefined1 *)(param_1 + 0xb9) = 1;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

extern int PTR_DAT_003bd140;
/* ADDR 00137ae0 */
undefined * fn_00137ae0(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) != 0) {
    return (undefined *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0xe8) + 0xc) + 0x10);
  }
  return PTR_DAT_003bd140;
}


/* ADDR 0013dc50 */
void fn_0013dc50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc4) != 3) {
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 3;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return;
}


/* ADDR 0013dc78 */
void fn_0013dc78(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc4) != 4) {
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return;
}


/* ADDR 00136ba8 */
int fn_00136ba8(int param_1,int param_2,short param_3)

{
  return *(int *)(param_1 + 0x354) + (int)*(short *)(param_3 * 6 + *(int *)(param_2 + 0x20));
}


/* ADDR 001394b8 */
void fn_001394b8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x79d4);
  iVar1 = 7;
  do {
    iVar1 = iVar1 + -1;
    if (*piVar2 == param_2) {
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 2;
  } while (-1 < iVar1);
  return;
}


/* ADDR 00135e68 */
void fn_00135e68(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) == 2) {
    *(undefined4 *)(param_1 + 0x3a0) = 3;
    return;
  }
  if (*(int *)(param_2 + 0x3a4) == 0) {
    *(undefined4 *)(param_1 + 0x3a0) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  return;
}
