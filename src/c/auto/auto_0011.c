/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00110858 */
int fn_00110858(int param_1)

{
  return param_1 + 0x7f0;
}


/* ADDR 00114228 */
void fn_00114228(void)

{
  return;
}


/* ADDR 00114968 */
void fn_00114968(void)

{
  return;
}


/* ADDR 00114970 */
void fn_00114970(void)

{
  return;
}


/* ADDR 00114980 */
void fn_00114980(void)

{
  return;
}


/* ADDR 00116f60 */
void fn_00116f60(void)

{
  return;
}


/* ADDR 001175e0 */
void fn_001175e0(void)

{
  return;
}


/* ADDR 00118088 */
undefined4 fn_00118088(void)

{
  return 1;
}


/* ADDR 00118090 */
void fn_00118090(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* ADDR 00118240 */
void fn_00118240(void)

{
  return;
}


/* ADDR 00118340 */
void fn_00118340(void)

{
  return;
}


/* ADDR 00118808 */
void fn_00118808(void)

{
  return;
}


/* ADDR 00118900 */
void fn_00118900(void)

{
  return;
}


/* ADDR 0011a888 */
undefined4 fn_0011a888(void)

{
  return 1;
}


/* ADDR 0011bf20 */
void fn_0011bf20(void)

{
  return;
}


/* ADDR 0011d490 */
void fn_0011d490(void)

{
  return;
}


/* ADDR 0011d430 */
void fn_0011d430(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x11] = param_2;
  *param_1 = 0;
  return;
}


/* ADDR 0011d498 */
undefined4 fn_0011d498(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x7c);
}


/* ADDR 0011d4a8 */
int fn_0011d4a8(int *param_1)

{
  return *param_1 + 0xa0;
}


/* ADDR 0011d1f0 */
void fn_0011d1f0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  return;
}


/* ADDR 00110010 */
bool fn_00110010(undefined4 *param_1)

{
  return *(long *)(param_1 + 0x59c) != *(long *)*param_1;
}


/* ADDR 00110a88 */
void fn_00110a88(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  return;
}


/* ADDR 0011d1d0 */
int fn_0011d1d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x90);
  }
  return iVar1;
}
