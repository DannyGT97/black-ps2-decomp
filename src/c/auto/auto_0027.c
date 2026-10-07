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


/* ADDR 00271348 */
void fn_00271348(void)

{
  GetThreadId();
  return;
}


/* ADDR 002715f0 */
void fn_002715f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_003685d0(param_3);
  return;
}


/* ADDR 00275090 */
void fn_00275090(int param_1)

{
  fn_00353f50(param_1 + 8);
  return;
}


/* ADDR 00277c98 */
void fn_00277c98(void)

{
  fn_00277b88();
  return;
}


/* ADDR 00278f40 */
void fn_00278f40(void)

{
  fn_00278f30();
  return;
}


/* ADDR 0027bd00 */
void fn_0027bd00(void)

{
  fn_0027bb98();
  return;
}


/* ADDR 00271968 */
undefined4 fn_00271968(undefined8 param_1,undefined8 param_2,int param_3)

{
  fn_0028f618(param_3 + 0xb8);
  return 1;
}


/* ADDR 00271988 */
undefined4 fn_00271988(undefined8 param_1,undefined8 param_2,int param_3)

{
  fn_0028f718(param_3 + 0xb8);
  return 1;
}


/* ADDR 00278ea0 */
void fn_00278ea0(int param_1)

{
  fn_00278b48(param_1,0,*(undefined4 *)(param_1 + 0x30));
  return;
}


/* ADDR 0027fba0 */
void fn_0027fba0(void)

{
  fn_0027fa68(1,0xffff);
  return;
}


/* ADDR 00275068 */
void fn_00275068(int param_1,undefined8 param_2,undefined8 param_3)

{
  fn_00354190(param_1 + 8,param_2,param_3,0,0);
  return;
}


/* ADDR 002719a8 */
bool fn_002719a8(int param_1)

{
  long lVar1;
  
  lVar1 = fn_0028fa60(param_1 + 0xb8);
  return lVar1 < 0x10000;
}


/* ADDR 00278f00 */
void fn_00278f00(int param_1,int param_2,int param_3)

{
  fn_00274138(*(int *)(param_1 + 0x2c) + param_2 * 0x10 + 4,param_3 + -8);
  return;
}


/* ADDR 0027cc78 */
void fn_0027cc78(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x10));
  return;
}


/* ADDR 00271368 */
void fn_00271368(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  ChangeThreadPriority(uVar1,param_1 + 1);
  return;
}


/* ADDR 00272378 */
void fn_00272378(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_002e91c0();
  fn_002e9630(uVar1,param_1);
  return;
}


/* ADDR 00276258 */
void fn_00276258(int param_1)

{
  fn_002763b0();
  fn_00274138(*(int *)(param_1 + 0x48) + 0x40,param_1 + -8);
  return;
}


/* ADDR 0027c460 */
int fn_0027c460(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0027c410();
  return *(int *)(iVar1 + 0x10c) + param_2 * 0x70;
}


/* ADDR 0027d098 */
void fn_0027d098(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),4,param_1[1],0,0);
  }
  return;
}


/* ADDR 0027d0d8 */
void fn_0027d0d8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),5,param_1[1],param_2,param_3);
  }
  return;
}


/* ADDR 0027d158 */
void fn_0027d158(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),2,param_1[1],param_2,param_3);
  }
  return;
}


/* ADDR 0027d198 */
void fn_0027d198(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),3,param_1[1],param_2,param_3);
  }
  return;
}


/* ADDR 00279940 */
void fn_00279940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_00279700(param_1,0);
  fn_00279390(param_1,param_2,param_3);
  return;
}


/* ADDR 002732e0 */
void fn_002732e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    fn_002734b8();
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(int *)(param_2 + 0x18) = param_1 + 8;
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(int *)(*(int *)(param_1 + 8) + 4) = param_2 + 0x14;
  *(int *)(param_1 + 8) = param_2 + 0x14;
  return;
}


/* ADDR 00271be8 */
void fn_00271be8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  do {
    fn_00271650(iVar1);
    iVar1 = iVar1 + 0x18;
  } while (iVar1 < param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 1;
  fn_00294a08();
  return;
}
