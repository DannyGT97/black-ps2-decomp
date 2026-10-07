/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001a24b0 */
void fn_001a24b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


/* ADDR 001a2690 */
void fn_001a2690(void)

{
  return;
}


/* ADDR 001ab760 */
void fn_001ab760(void)

{
  return;
}


/* ADDR 001ab768 */
void fn_001ab768(void)

{
  return;
}


/* ADDR 001abe08 */
void fn_001abe08(void)

{
  return;
}


/* ADDR 001abe10 */
void fn_001abe10(void)

{
  return;
}


/* ADDR 001ac040 */
undefined4 fn_001ac040(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}


/* ADDR 001ae088 */
void fn_001ae088(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


/* ADDR 001ae090 */
void fn_001ae090(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* ADDR 001af1b8 */
void fn_001af1b8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* ADDR 001afc78 */
void fn_001afc78(void)

{
  return;
}


/* ADDR 001afcc8 */
undefined4 fn_001afcc8(void)

{
  return 1;
}


/* ADDR 001afcd0 */
void fn_001afcd0(void)

{
  return;
}


/* ADDR 001afda8 */
undefined4 fn_001afda8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* ADDR 001ad368 */
bool fn_001ad368(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}


/* ADDR 001ae078 */
void fn_001ae078(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


/* ADDR 001a6918 */
bool fn_001a6918(int *param_1)

{
  return *(int *)(*param_1 + 0xc4) == 2;
}


/* ADDR 001adf18 */
void fn_001adf18(int param_1,int param_2)

{
  *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4)) = 0;
  return;
}


/* ADDR 001af1a0 */
undefined4
fn_001af1a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  param_1[2] = 0;
  return 1;
}


/* ADDR 001adf30 */
void fn_001adf30(int *param_1,int param_2)

{
  *(undefined4 *)(param_2 * 4 + param_1[1]) = *(undefined4 *)(param_2 * 4 + *param_1);
  return;
}


/* ADDR 001ade50 */
uint fn_001ade50(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  param_2 = param_2 * 4;
  uVar1 = *(int *)(param_2 + param_1[1]) + 0xfU & 0xfffffff0;
  *(int *)(param_2 + param_1[1]) = uVar1 + param_3;
  if ((uint)(*(int *)(param_2 + *param_1) + param_1[3]) < *(uint *)(param_2 + param_1[1])) {
    uVar1 = 0;
  }
  return uVar1;
}
