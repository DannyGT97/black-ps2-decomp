/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_0011d490(void);

/* ADDR 0011ea10 */
void fn_0011ea10(int param_1)

{
  fn_0011d490();
  *(undefined4 *)(param_1 + 0x50) = 4;
  return;
}

/* ---- */
void fn_0011c4a8(int param_1);
void fn_00138fa0(undefined8 param_1,undefined8 param_2);
void fn_001e31a8(int param_1);
extern undefined4 DAT_0040f504;
extern int DAT_0040f510;
extern undefined4 DAT_0040f514;
/* ADDR 0011d158 */
void fn_0011d158(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x7c);
  fn_001e31a8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14));
  if (iVar1 == *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  fn_00138fa0(DAT_0040f514,iVar1);
  fn_0011c4a8(DAT_0040f504);
  return;
}

/* ---- */
void fn_00103918(int param_1,undefined4 param_2);
void fn_001354e0(int param_1,int param_2);
void fn_0027f9c0(int param_1,undefined4 param_2);
extern undefined4 DAT_0040f0e0;
extern int DAT_0040f4bc;
extern undefined4 DAT_0040f4d0;
/* ADDR 0011c4a8 */
void fn_0011c4a8(int param_1)

{
  if (*(char *)(param_1 + 0x15d) != '\0') {
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(*(int *)(param_1 + 0x150) + 0x38c) == 2) {
      (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
                (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),0xb,0);
      fn_001354e0(*(int *)(param_1 + 0x154),*(int *)(param_1 + 0x154) + 0x4f0);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x154) + 0x8b2) = 0;
      *(undefined1 *)(param_1 + 0x15c) = 0;
      fn_0027f9c0(DAT_0040f4d0,1);
      fn_00103918(DAT_0040f0e0,0);
      *(undefined1 *)(param_1 + 0x15d) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 6;
    }
  }
  return;
}
