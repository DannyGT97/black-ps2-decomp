/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00162570 */
int fn_00162570(int param_1)

{
  return param_1 + 0x40;
}


/* ADDR 00165af8 */
undefined4 fn_00165af8(void)

{
  return 1;
}


/* ADDR 00165de8 */
undefined4 fn_00165de8(void)

{
  return 1;
}


/* ADDR 0016aba0 */
void fn_0016aba0(int param_1)

{
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}


/* ADDR 0016b798 */
void fn_0016b798(void)

{
  return;
}


/* ADDR 0016be08 */
void fn_0016be08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}


/* ADDR 0016fb58 */
undefined4 fn_0016fb58(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* ADDR 00160b48 */
void fn_00160b48(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


/* ADDR 00164e40 */
void fn_00164e40(int param_1)

{
  *(undefined1 *)(param_1 + 0x131) = 0;
  *(undefined1 *)(param_1 + 0x130) = 1;
  return;
}


/* ADDR 0016b788 */
undefined4 fn_0016b788(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0x37;
  return 1;
}


/* ADDR 00160b30 */
void fn_00160b30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}


/* ADDR 00169bd0 */
undefined4 fn_00169bd0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0xd0));
}


/* ADDR 0016ddb0 */
bool fn_0016ddb0(int param_1)

{
  return *(int *)(param_1 + 0x22bbc) != 0;
}


/* ADDR 0016eab8 */
void fn_0016eab8(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + *param_1) = param_3;
  return;
}


/* ADDR 0016dde0 */
void fn_0016dde0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1ef0) = *(undefined4 *)(param_1 + 0x22bbc);
  *(int *)(param_1 + 0x22bbc) = param_2;
  return;
}

extern int DAT_0040f4d4;
/* ADDR 0016fa38 */
undefined4 fn_0016fa38(void)

{
  return *(undefined4 *)(DAT_0040f4d4 + 0x22b98);
}


/* ADDR 00164e50 */
undefined4 fn_00164e50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((int)param_1 + 0x134) = param_3;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  return 1;
}

extern int DAT_003c9ed4;
/* ADDR 0016ee70 */
undefined4 fn_0016ee70(int param_1)

{
  if (DAT_003c9ed4 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return 1;
}


/* ADDR 001624a0 */
void fn_001624a0(int param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x37c);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(*(int *)(param_1 + 0x50) + 0x2c);
  return;
}
