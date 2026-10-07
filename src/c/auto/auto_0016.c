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


/* ADDR 00160ef8 */
void fn_00160ef8(void)

{
  fn_00165bb0();
  return;
}


/* ADDR 00161920 */
void fn_00161920(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00161d58 */
void fn_00161d58(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00161ed0 */
void fn_00161ed0(void)

{
  fn_00160e70();
  return;
}


/* ADDR 001625e0 */
void fn_001625e0(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00162738 */
void fn_00162738(void)

{
  fn_00160e70();
  return;
}


/* ADDR 001628c8 */
void fn_001628c8(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00162a40 */
void fn_00162a40(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00162cf0 */
void fn_00162cf0(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00162f08 */
void fn_00162f08(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00163230 */
void fn_00163230(void)

{
  fn_00160e70();
  return;
}


/* ADDR 00163de8 */
void fn_00163de8(void)

{
  fn_00165ae0();
  return;
}


/* ADDR 00164248 */
void fn_00164248(void)

{
  fn_00169bf0();
  return;
}


/* ADDR 001648e0 */
void fn_001648e0(void)

{
  fn_00169bf0();
  return;
}


/* ADDR 00169bf0 */
void fn_00169bf0(void)

{
  fn_00125c60();
  return;
}


/* ADDR 0016a7a0 */
void fn_0016a7a0(void)

{
  fn_00169ef8();
  return;
}


/* ADDR 0016ac98 */
void fn_0016ac98(void)

{
  fn_00160e70();
  return;
}


/* ADDR 0016b758 */
void fn_0016b758(void)

{
  fn_001c32b8();
  return;
}


/* ADDR 0016c708 */
void fn_0016c708(void)

{
  fn_00169bf0();
  return;
}


/* ADDR 00160ed8 */
undefined4 fn_00160ed8(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 00161350 */
undefined4 fn_00161350(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00161460 */
undefined4 fn_00161460(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00161530 */
undefined4 fn_00161530(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00161990 */
undefined4 fn_00161990(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00161cb8 */
undefined4 fn_00161cb8(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00161dc8 */
undefined4 fn_00161dc8(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00161f30 */
undefined4 fn_00161f30(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 001622a8 */
undefined4 fn_001622a8(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 001627a8 */
undefined4 fn_001627a8(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00162938 */
undefined4 fn_00162938(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00162ac0 */
undefined4 fn_00162ac0(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00162d70 */
undefined4 fn_00162d70(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00162f88 */
undefined4 fn_00162f88(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00163130 */
undefined4 fn_00163130(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00163530 */
undefined4 fn_00163530(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 00163e88 */
undefined4 fn_00163e88(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 001648b8 */
undefined4 fn_001648b8(void)

{
  fn_00169eb8();
  return 1;
}


/* ADDR 00164dc8 */
undefined4 fn_00164dc8(void)

{
  fn_00169eb8();
  return 1;
}


/* ADDR 00165148 */
undefined4 fn_00165148(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 001652b8 */
undefined4 fn_001652b8(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 00165380 */
undefined4 fn_00165380(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 00165a38 */
undefined4 fn_00165a38(void)

{
  fn_00169eb8();
  return 1;
}


/* ADDR 00169eb8 */
undefined4 fn_00169eb8(void)

{
  fn_00125e40();
  return 1;
}


/* ADDR 0016a778 */
undefined4 fn_0016a778(void)

{
  fn_00169eb8();
  return 1;
}


/* ADDR 0016ab18 */
undefined4 fn_0016ab18(void)

{
  fn_0016a778();
  return 1;
}


/* ADDR 0016ad18 */
undefined4 fn_0016ad18(void)

{
  fn_00160ed8();
  return 1;
}


/* ADDR 0016b670 */
void fn_0016b670(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 1;
  fn_001c31f8();
  return;
}


/* ADDR 0016ccf0 */
undefined4 fn_0016ccf0(void)

{
  fn_00169eb8();
  return 1;
}


/* ADDR 0016d7d0 */
void fn_0016d7d0(void)

{
  fn_0016d1f8(1,0xffff);
  return;
}


/* ADDR 0016ade0 */
void fn_0016ade0(void)

{
  fn_0016b670();
  fn_001d4268();
  return;
}


/* ADDR 0016e780 */
void fn_0016e780(int param_1)

{
  fn_00173190(param_1 + 0x22800);
  return;
}


/* ADDR 00160ea0 */
undefined4 fn_00160ea0(int param_1)

{
  fn_00165af8();
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return 1;
}


/* ADDR 00163c28 */
undefined4 fn_00163c28(int param_1)

{
  fn_00160ed8();
  *(undefined4 *)(param_1 + 0x24) = 4;
  return 1;
}

extern int DAT_0040f51c;
/* ADDR 001631f8 */
void fn_001631f8(int param_1)

{
  fn_001f2a60(DAT_0040f51c,**(undefined1 **)(param_1 + 0x20),0,0,1);
  return;
}


/* ADDR 00160f20 */
void fn_00160f20(undefined8 param_1,undefined8 param_2)

{
  fn_00160e70();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 00161ef0 */
undefined4
fn_00161ef0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  fn_00160ea0();
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((int)param_1 + 0x24);
  return 1;
}


/* ADDR 00163498 */
void fn_00163498(undefined8 param_1,undefined8 param_2)

{
  fn_00160e70();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 00163cc8 */
void fn_00163cc8(undefined8 param_1,undefined8 param_2)

{
  fn_00165ae0();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 001650b8 */
void fn_001650b8(undefined8 param_1,undefined8 param_2)

{
  fn_00165ae0();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 001653f0 */
void fn_001653f0(undefined8 param_1,undefined8 param_2)

{
  fn_00169bf0();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 00169d48 */
void fn_00169d48(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 2) {
    fn_00169d88();
  }
  else {
    fn_00165b00();
  }
  return;
}


/* ADDR 00169ef8 */
void fn_00169ef8(undefined8 param_1,undefined8 param_2)

{
  fn_00169bf0();
  fn_00165bc8(param_1,param_2);
  return;
}


/* ADDR 00162688 */
undefined4 fn_00162688(int param_1)

{
  fn_00160ed8();
  if (*(int *)(param_1 + 0x90) != 0) {
    fn_00177c90(*(int *)(param_1 + 0x90),param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return 1;
}


/* ADDR 0016ab58 */
void fn_0016ab58(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00107d20(param_2 * 0xc);
  *(short *)(param_1 + 1) = (short)param_2;
  *param_1 = uVar1;
  *(undefined2 *)((int)param_1 + 6) = 0;
  return;
}


/* ADDR 0016dd68 */
undefined8 fn_0016dd68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = fn_00179640();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_00179668(param_1,param_2);
  }
  return uVar2;
}


/* ADDR 0016edf0 */
undefined4 fn_0016edf0(int param_1)

{
  fn_0016f9a8();
  fn_0016ea80(param_1 + 0x7c);
  fn_0016ea80(param_1 + 0x88);
  fn_0016fb48();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return 1;
}


/* ADDR 00162258 */
void fn_00162258(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    fn_00162420();
  }
  else {
    if (*(int *)(iVar1 + 0x38c) == 0) {
      if (*(int *)(iVar1 + 0x37c) == *(int *)(param_1 + 0x2c)) {
        return;
      }
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* ADDR 0016e728 */
void fn_0016e728(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_3 != 0) {
    iVar1 = 2;
  }
  if (*(int *)(param_1 + 0x22bc8) < iVar1) {
    fn_0016e780();
    *(int *)(param_1 + 0x22bc8) = iVar1;
  }
  return;
}


/* ADDR 0016ed80 */
void fn_0016ed80(void)

{
  long lVar1;
  
  lVar1 = fn_002d15a0();
  if ((((lVar1 != 0) && (lVar1 = fn_002d8448(), lVar1 != 0)) &&
      (lVar1 = fn_002da1c8(), lVar1 != 0)) &&
     ((lVar1 = fn_002f0da8(), lVar1 != 0 && (lVar1 = fn_003054f8(), lVar1 != 0)))) {
    fn_0030d130();
  }
  return;
}


/* ADDR 00165bc8 */
void fn_00165bc8(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(char *)(param_1 + 0xc) = (char)param_2;
  if ((param_2 & 0xff) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uVar1 = fn_00107d20((uint)*(byte *)(param_1 + 0xc) << 2);
    *(undefined4 *)(param_1 + 8) = uVar1;
    iVar3 = 0;
    if (0 < (int)param_2) {
      do {
        iVar2 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 8)) = 0;
      } while (iVar3 < (int)param_2);
    }
  }
  return;
}
