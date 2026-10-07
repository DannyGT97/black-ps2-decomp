/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_001f9980(int param_1);

/* ADDR 001fa438 */
void fn_001fa438(int param_1)

{
  fn_001f9980(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xea8) = 1;
  return;
}

/* ---- */
void fn_001f5928(int param_1);
void fn_002019a0(int param_1,long param_2);
extern int DAT_0040f518;
/* ADDR 001f2d70 */
void fn_001f2d70(void)

{
  fn_001f5928(*(undefined4 *)(DAT_0040f518 + 0x14));
  fn_002019a0(*(undefined4 *)(DAT_0040f518 + 0x2c),0);
  return;
}

/* ---- */
void fn_001f5928(int param_1);
void fn_002019a0(int param_1,long param_2);
void fn_002019f8(int param_1);
extern int DAT_0040f518;
/* ADDR 001f2db0 */
void fn_001f2db0(void)

{
  fn_001f5928(*(undefined4 *)(DAT_0040f518 + 0x14));
  fn_002019f8(*(undefined4 *)(DAT_0040f518 + 0x2c));
  fn_002019a0(*(undefined4 *)(DAT_0040f518 + 0x2c),0);
  return;
}
