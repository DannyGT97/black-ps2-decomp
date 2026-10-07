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
