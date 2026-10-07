/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00272328 */
void fn_00272328(int param_1)

{
  *(undefined1 *)(param_1 + 0x46) = 0;
  return;
}


/* ADDR 00274920 */
void fn_00274920(void)

{
  return;
}


/* ADDR 00274f58 */
void fn_00274f58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


/* ADDR 002791b0 */
void fn_002791b0(void)

{
  return;
}


/* ADDR 0027a7a8 */
void fn_0027a7a8(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}


/* ADDR 0027acc8 */
void fn_0027acc8(void)

{
  return;
}


/* ADDR 0027bc38 */
void fn_0027bc38(void)

{
  return;
}


/* ADDR 0027bc40 */
void fn_0027bc40(void)

{
  return;
}


/* ADDR 0027bc48 */
void fn_0027bc48(void)

{
  return;
}


/* ADDR 0027bc50 */
void fn_0027bc50(void)

{
  return;
}


/* ADDR 0027bc58 */
void fn_0027bc58(void)

{
  return;
}


/* ADDR 0027c1a0 */
void fn_0027c1a0(void)

{
  return;
}


/* ADDR 0027c320 */
void fn_0027c320(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 0027c348 */
void fn_0027c348(void)

{
  return;
}


/* ADDR 0027f5e0 */
undefined8 fn_0027f5e0(void)

{
  return 0;
}


/* ADDR 0027f9c0 */
void fn_0027f9c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


/* ADDR 002722b8 */
void fn_002722b8(int param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0x39;
  return;
}


/* ADDR 00272310 */
void fn_00272310(int param_1)

{
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}


/* ADDR 002740d8 */
void fn_002740d8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}

extern int DAT_003bfb3c;
/* ADDR 00274350 */
void fn_00274350(undefined4 param_1)

{
  DAT_003bfb3c = param_1;
  return;
}


/* ADDR 00274fc8 */
void fn_00274fc8(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}


/* ADDR 0027b2e0 */
void fn_0027b2e0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x68) = param_2;
  *(int *)(param_2 + 0x30) = param_1;
  return;
}

extern int DAT_003c0dfc;
/* ADDR 0027c990 */
void fn_0027c990(undefined4 param_1)

{
  DAT_003c0dfc = param_1;
  return;
}


/* ADDR 00274f60 */
int fn_00274f60(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
}


/* ADDR 00274f70 */
int fn_00274f70(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
}


/* ADDR 00278f30 */
void fn_00278f30(int *param_1)

{
  *param_1 = *param_1 + (int)param_1;
  return;
}


/* ADDR 00279790 */
void fn_00279790(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return;
}


/* ADDR 00279930 */
void fn_00279930(int param_1)

{
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  return;
}


/* ADDR 00276960 */
void fn_00276960(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}


/* ADDR 0027bb98 */
void fn_0027bb98(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}


/* ADDR 0027c110 */
undefined4 fn_0027c110(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2011c) = param_2;
  return 1;
}

extern int DAT_003c0e04;
/* ADDR 0027f778 */
void fn_0027f778(void)

{
  DAT_003c0e04 = DAT_003c0e04 + 1;
  return;
}


/* ADDR 0027f6d8 */
void fn_0027f6d8(int *param_1)

{
  *param_1 = (int)param_1 + *param_1;
  param_1[1] = (int)param_1 + param_1[1];
  return;
}


/* ADDR 0027f708 */
void fn_0027f708(int *param_1)

{
  *param_1 = (int)param_1 + *param_1;
  param_1[1] = (int)param_1 + param_1[1];
  return;
}


/* ADDR 00273340 */
void fn_00273340(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_2 + 0x20) = param_1 + 0x10;
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(int *)(*(int *)(param_1 + 0x10) + 4) = param_2 + 0x1c;
    *(int *)(param_1 + 0x10) = param_2 + 0x1c;
  }
  return;
}


/* ADDR 002733e0 */
void fn_002733e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    **(int **)(param_2 + 0x20) = *(int *)(param_2 + 0x1c);
    *(undefined4 *)(*(int *)(param_2 + 0x1c) + 4) = *(undefined4 *)(param_2 + 0x20);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_2 + 0x18) = param_1 + 0x18;
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(int *)(*(int *)(param_1 + 0x18) + 4) = param_2 + 0x14;
  *(int *)(param_1 + 0x18) = param_2 + 0x14;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}
