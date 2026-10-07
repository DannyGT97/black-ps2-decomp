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


/* ADDR 001a0800 */
void fn_001a0800(void)

{
  fn_00193988();
  return;
}


/* ADDR 001a08e8 */
void fn_001a08e8(void)

{
  fn_001a0a30();
  return;
}


/* ADDR 001a1620 */
void fn_001a1620(void)

{
  fn_00193988();
  return;
}


/* ADDR 001a1cb0 */
void fn_001a1cb0(void)

{
  fn_001a1d20();
  return;
}


/* ADDR 001abe18 */
void fn_001abe18(void)

{
  fn_001ab500();
  return;
}


/* ADDR 001ac020 */
void fn_001ac020(int param_1)

{
  fn_001ae090(param_1 + 0x8f0);
  return;
}


/* ADDR 001ac940 */
void fn_001ac940(int param_1)

{
  fn_001ae088(param_1 + 0x8f0);
  return;
}


/* ADDR 001ad030 */
void fn_001ad030(int param_1)

{
  fn_001ae078(param_1 + 0x8f0);
  return;
}


/* ADDR 001ad050 */
void fn_001ad050(int param_1)

{
  fn_001ae0f0(param_1 + 0x8f0);
  return;
}


/* ADDR 001ae0a8 */
void fn_001ae0a8(int param_1)

{
  fn_001adea8(param_1 + 0xc);
  return;
}


/* ADDR 001ae0c8 */
void fn_001ae0c8(int param_1)

{
  fn_001adf18(param_1 + 0xc);
  return;
}


/* ADDR 001ae5c8 */
void fn_001ae5c8(void)

{
  fn_0026a7a0();
  return;
}


/* ADDR 001ae9f8 */
void fn_001ae9f8(undefined8 param_1)

{
  fn_001aea18(param_1,0);
  return;
}


/* ADDR 001a3478 */
undefined4 fn_001a3478(void)

{
  fn_001a24b8();
  return 1;
}


/* ADDR 001a4fa8 */
void fn_001a4fa8(void)

{
  fn_001a4930(1,0xffff);
  return;
}


/* ADDR 001a4fc8 */
void fn_001a4fc8(void)

{
  fn_001a4930(0,0xffff);
  return;
}


/* ADDR 001ae2c8 */
void fn_001ae2c8(void)

{
  fn_001ae130(1,0xffff);
  return;
}


/* ADDR 001a2698 */
void fn_001a2698(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    fn_001a2cf0();
  }
  return;
}


/* ADDR 001ae5a0 */
void fn_001ae5a0(int param_1)

{
  fn_0026a6f0(*(undefined4 *)(param_1 + 0xd540));
  return;
}


/* ADDR 001abeb8 */
void fn_001abeb8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001092f8();
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  return;
}

extern int DAT_0040f4d4;
/* ADDR 001a2620 */
void fn_001a2620(int param_1)

{
  fn_00179258(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x298));
  return;
}


/* ADDR 001ae538 */
void fn_001ae538(int param_1)

{
  fn_002a90e8(*(undefined4 *)(*(int *)(param_1 + 0xd540) + 0x58));
  *(undefined4 *)(param_1 + 0xd540) = 0;
  return;
}


/* ADDR 001abfd8 */
undefined8 fn_001abfd8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = fn_001ae0a8(param_1 + 0x8f0);
  fn_001ae090(param_1 + 0x8f0,uVar1);
  return uVar1;
}


/* ADDR 001ae8f0 */
void fn_001ae8f0(int param_1)

{
  fn_0027b260(param_1 + 0xd400);
  fn_0027b260(param_1 + 0xd4a0);
  fn_0027b260(param_1 + 0xd360);
  return;
}


/* ADDR 001a1298 */
void fn_001a1298(int *param_1)

{
  long lVar1;
  
  fn_00193988();
  lVar1 = fn_001829a8(*param_1 + 0x810);
  if (lVar1 == 0) {
    fn_00182550(*param_1 + 0x810,0);
  }
  return;
}


/* ADDR 001ac070 */
void fn_001ac070(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = fn_00135550(*param_2);
  if ((lVar2 != 0) && (iVar1 = fn_00135550(*param_2), *(int *)(iVar1 + 0x80) == 1)) {
    iVar1 = fn_00135550(*param_2);
    fn_0017f720(iVar1 + 0x650);
  }
  return;
}


/* ADDR 001a7188 */
void fn_001a7188(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  param_1[0x27] = 0;
  if (param_1[0x25] != 0) {
    *(undefined1 *)((int)param_1 + 0x69) = 0;
    *(undefined1 *)((int)param_1 + 0xb5) = 1;
    param_1[0x25] = 0;
    if (*(int *)(*param_1 + 0x39c) == 0x26) {
      fn_003492f0(param_1[0x15]);
    }
    else {
      fn_00349288(param_1[0x15]);
    }
  }
  return;
}


/* ADDR 001ae3a8 */
undefined4 fn_001ae3a8(int param_1)

{
  fn_0027b2c8(param_1 + 0xd360);
  fn_0027b2c8(param_1 + 0xd400);
  fn_0027b2c8(param_1 + 0xd4a0);
  fn_001c6608(param_1 + 0xd170);
  fn_001b0a20(param_1 + 0xd290);
  fn_001b0068(param_1 + 0xcbe0);
  fn_001b0fc8(param_1 + 0xd350);
  return 1;
}
