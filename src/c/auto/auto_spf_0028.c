/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_00281948(undefined8 param_1,undefined8 param_2);

/* ADDR 00280848 */
void fn_00280848(int param_1)

{
  fn_00281948(param_1 + 0xb308,0);
  *(undefined1 *)(param_1 + 0xcb9e) = 0;
  return;
}

/* ---- */
void fn_00287120(int *param_1);
void fn_00288a38(int param_1);

/* ADDR 002886d0 */
void fn_002886d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + param_1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  *(int *)(param_1 + 8) = iVar1;
  fn_00288a38(iVar1);
  fn_00287120(*(undefined4 *)(param_1 + 4));
  return;
}

/* ---- */
void fn_002817c8(uint param_1);

/* ADDR 002808a0 */
void fn_002808a0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xcba0) + 0x24))
            (param_1 + *(short *)(*(int *)(param_1 + 0xcba0) + 0x20));
  fn_002817c8(param_1 + 0xb308);
  (**(code **)(*(int *)(param_1 + 0xcba0) + 0x2c))
            (param_1 + *(short *)(*(int *)(param_1 + 0xcba0) + 0x28));
  return;
}
