/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00200f00 */
void fn_00200f00(void)

{
  return;
}


/* ADDR 002050b0 */
undefined4 fn_002050b0(void)

{
  return 1;
}


/* ADDR 002061e8 */
void fn_002061e8(void)

{
  return;
}


/* ADDR 00206b28 */
void fn_00206b28(void)

{
  return;
}


/* ADDR 002094a8 */
void fn_002094a8(void)

{
  return;
}


/* ADDR 002097b8 */
void fn_002097b8(void)

{
  return;
}


/* ADDR 00209a50 */
void fn_00209a50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 00209a58 */
void fn_00209a58(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00209c60 */
undefined4 fn_00209c60(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c68 */
undefined4 fn_00209c68(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c70 */
undefined4 fn_00209c70(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c78 */
undefined4 fn_00209c78(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 00209c80 */
undefined4 fn_00209c80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ADDR 00209c88 */
void fn_00209c88(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* ADDR 00209e78 */
undefined4 fn_00209e78(void)

{
  return 1;
}


/* ADDR 0020b980 */
int fn_0020b980(int param_1)

{
  return param_1 + 0x389c;
}


/* ADDR 0020ccf8 */
void fn_0020ccf8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3918) = param_2;
  return;
}


/* ADDR 00205170 */
undefined4 fn_00205170(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}

extern int DAT_003be718;
/* ADDR 002092d8 */
void fn_002092d8(undefined4 param_1)

{
  DAT_003be718 = param_1;
  return;
}

extern int DAT_003be7a0;
/* ADDR 0020db40 */
void fn_0020db40(undefined4 param_1)

{
  DAT_003be7a0 = param_1;
  return;
}


/* ADDR 0020dd88 */
void fn_0020dd88(int param_1)

{
  **(undefined2 **)(param_1 + 4) = 0;
  return;
}

extern int DAT_003be7a4;
/* ADDR 0020e620 */
bool fn_0020e620(void)

{
  return DAT_003be7a4 != 0;
}


/* ADDR 00209bd8 */
void fn_00209bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 1;
  param_1[2] = param_2;
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_3;
  param_1[4] = 0;
  return;
}


/* ADDR 00209c08 */
void fn_00209c08(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 4;
  param_1[2] = param_2;
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_3;
  param_1[4] = 0;
  return;
}


/* ADDR 00209c38 */
void fn_00209c38(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 5;
  param_1[2] = param_2;
  param_1[3] = param_1[3] + 1;
  param_1[1] = param_3;
  param_1[4] = 0;
  return;
}


/* ADDR 00204fb0 */
void fn_00204fb0(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_5;
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 **)(param_1 + 0x58) = param_2;
  return;
}
