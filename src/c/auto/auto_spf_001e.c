/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_001d7198(int param_1,undefined8 param_2,long param_3);
void fn_001dc498(int param_1,undefined8 param_2,long param_3);
void fn_001e1690(int param_1,undefined8 param_2,long param_3);
void fn_001e2c68(undefined8 param_1,undefined8 param_2,long param_3);
void fn_001e4260(undefined8 param_1,undefined8 param_2,long param_3);
void fn_001e6208(int param_1,undefined8 param_2,undefined1 param_3);
void fn_001ec9f0(int param_1,undefined8 param_2,long param_3);
extern int DAT_0040f510;
/* ADDR 001edb80 */
undefined4 fn_001edb80(int param_1)

{
  fn_001e1690(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x46));
  fn_001e2c68(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x47));
  fn_001d7198(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x44));
  fn_001dc498(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x45));
  fn_001ec9f0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x4a));
  fn_001e4260(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x48));
  fn_001e6208(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),*(undefined4 *)(param_1 + 0x18),
               *(undefined1 *)(param_1 + 0x49));
  return 1;
}

/* ---- */
void fn_001d7198(int param_1,undefined8 param_2,long param_3);
void fn_001dc498(int param_1,undefined8 param_2,long param_3);
void fn_001e1690(int param_1,undefined8 param_2,long param_3);
void fn_001e2c68(undefined8 param_1,undefined8 param_2,long param_3);
void fn_001e4260(undefined8 param_1,undefined8 param_2,long param_3);
void fn_001e6208(int param_1,undefined8 param_2,undefined1 param_3);
void fn_001ec9f0(int param_1,undefined8 param_2,long param_3);
extern int DAT_0040f510;
/* ADDR 001edc80 */
undefined4 fn_001edc80(int param_1)

{
  fn_001e1690(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),
               *(undefined4 *)(param_1 + 0x18),0);
  fn_001e2c68(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),
               *(undefined4 *)(param_1 + 0x18),0);
  fn_001d7198(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),
               *(undefined4 *)(param_1 + 0x18),0);
  fn_001dc498(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),
               *(undefined4 *)(param_1 + 0x18),0);
  fn_001ec9f0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
               *(undefined4 *)(param_1 + 0x18),0);
  fn_001e4260(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),
               *(undefined4 *)(param_1 + 0x18),0);
  fn_001e6208(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),*(undefined4 *)(param_1 + 0x18),
               0);
  return 1;
}
