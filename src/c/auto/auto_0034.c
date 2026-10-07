/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00341b48 */
undefined4 fn_00341b48(void)

{
  return 1;
}


/* ADDR 003438d8 */
void fn_003438d8(void)

{
  return;
}


/* ADDR 003487e0 */
undefined4 fn_003487e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* ADDR 003487e8 */
int fn_003487e8(int param_1)

{
  return param_1 + 0x14;
}


/* ADDR 0034b5a8 */
undefined4 fn_0034b5a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* ADDR 00343508 */
undefined4 fn_00343508(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}

extern int DAT_003d1b7c;
/* ADDR 00343f38 */
undefined4 fn_00343f38(void)

{
  return DAT_003d1b7c;
}

extern int DAT_0046a500;
/* ADDR 003461e0 */
void fn_003461e0(void)

{
  DAT_0046a500 = 0;
  return;
}

extern int DAT_003d24c4;
/* ADDR 00347948 */
void fn_00347948(undefined4 param_1)

{
  DAT_003d24c4 = param_1;
  return;
}

extern int DAT_003d2b04;
/* ADDR 00348a28 */
undefined4 fn_00348a28(void)

{
  return DAT_003d2b04;
}


/* ADDR 003487d0 */
float fn_003487d0(int param_1)

{
  return (float)*(int *)(param_1 + 0x14);
}


/* ADDR 00349278 */
void fn_00349278(int param_1)

{
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0xffffffff;
  return;
}


/* ADDR 003492e0 */
void fn_003492e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x99c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}

extern int DAT_003d2b00;
extern int DAT_003d2b04;
/* ADDR 00348a10 */
void fn_00348a10(undefined4 param_1,undefined4 param_2)

{
  DAT_003d2b00 = param_1;
  DAT_003d2b04 = param_2;
  return;
}


/* ADDR 003477f0 */
void fn_003477f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x5c) < 9) {
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58)) = param_2;
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58) + 4) = param_3;
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58) + 8) = param_4;
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + 1;
  }
  return;
}


/* ADDR 00341808 */
void fn_00341808(void)

{
  fn_00341b48();
  return;
}


/* ADDR 00342a60 */
void fn_00342a60(void)

{
  fn_00352a30();
  return;
}


/* ADDR 00347d48 */
void fn_00347d48(undefined8 param_1,undefined8 param_2)

{
  fn_00347ca0(param_1,param_2,1);
  return;
}


/* ADDR 0034ae60 */
void fn_0034ae60(void)

{
  fn_0034a7c8();
  return;
}


/* ADDR 0034ae80 */
void fn_0034ae80(void)

{
  fn_0034ac70();
  return;
}


/* ADDR 00341678 */
void fn_00341678(void)

{
  fn_00341520(1,0xffff);
  return;
}


/* ADDR 00341698 */
void fn_00341698(void)

{
  fn_00341520(0,0xffff);
  return;
}


/* ADDR 00341828 */
void fn_00341828(void)

{
  fn_003416b8(1,0xffff);
  return;
}


/* ADDR 00341848 */
void fn_00341848(void)

{
  fn_003416b8(0,0xffff);
  return;
}


/* ADDR 003419e0 */
void fn_003419e0(void)

{
  fn_00341868(0,0xffff);
  return;
}


/* ADDR 00341b78 */
void fn_00341b78(void)

{
  fn_00341a00(0,0xffff);
  return;
}


/* ADDR 00341ce0 */
void fn_00341ce0(void)

{
  fn_00341b98(1,0xffff);
  return;
}


/* ADDR 00341d00 */
void fn_00341d00(void)

{
  fn_00341b98(0,0xffff);
  return;
}


/* ADDR 003420a8 */
void fn_003420a8(void)

{
  fn_00341d20(1,0xffff);
  return;
}


/* ADDR 003420c8 */
void fn_003420c8(void)

{
  fn_00341d20(0,0xffff);
  return;
}


/* ADDR 003426a8 */
uint fn_003426a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = fn_003429e8(param_2);
  return uVar1 >> 0x16;
}


/* ADDR 003477d0 */
void fn_003477d0(void)

{
  fn_00347738(1,0xffff);
  return;
}


/* ADDR 003485c8 */
void fn_003485c8(int param_1)

{
  fn_00343278(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  return;
}


/* ADDR 00343120 */
void fn_00343120(int param_1,undefined4 param_2)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_2;
  fn_00396b68(*(undefined4 *)(param_1 + 0x2c),auStack_20);
  return;
}


/* ADDR 00345e30 */
void fn_00345e30(uint *param_1)

{
  if ((*param_1 & 0x480000) == 0) {
    fn_00345c78();
  }
  return;
}


/* ADDR 0034b460 */
undefined4 fn_0034b460(undefined8 param_1,undefined8 param_2)

{
  fn_00343ed0();
  fn_00347948(param_2);
  return 1;
}


/* ADDR 00348b18 */
void fn_00348b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00352a30(param_2);
  fn_00348a90(param_1,uVar1);
  return;
}


/* ADDR 00343c28 */
long fn_00343c28(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    fn_00344020();
  }
  return param_1;
}


/* ADDR 003483a0 */
void fn_003483a0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(short *)(param_1 + 8) * 0x10 + *(int *)(*(int *)(param_1 + 4) + 0x1c));
  fn_003486e0(param_2,puVar1[3],*puVar1);
  return;
}


/* ADDR 00348430 */
void fn_00348430(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(short *)(param_1 + 8) * 0x10 + *(int *)(*(int *)(param_1 + 4) + 0x1c));
  fn_00348738(param_2,puVar1[3],*puVar1);
  return;
}


/* ADDR 00348738 */
void fn_00348738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = fn_00352a30();
  fn_003486e0(uVar1,param_2,param_3);
  return;
}


/* ADDR 0034d920 */
void fn_0034d920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_0034b910();
  fn_00347430(param_1,uVar1,param_2);
  return;
}


/* ADDR 00344118 */
undefined8 fn_00344118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [32];
  
  fn_00343fc8(auStack_60);
  fn_00344050(auStack_60,param_3);
  fn_003440b8(param_1,param_2,auStack_60);
  return param_1;
}


/* ADDR 0034ab18 */
undefined4
fn_0034ab18(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  if (*(short *)(param_1 + 0x2e) != 0) {
    fn_0034b128(*(int *)(param_1 + 0xac) + *(short *)(param_1 + 0x5a) * param_2,param_3,0,1,
                 *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(short *)(param_1 + 10) != 0) {
    fn_0034aea0(*(int *)(param_1 + 0xa0) + *(short *)(param_1 + 0x58) * param_2 * 2,param_4,0,1,
                 *(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(short *)(param_1 + 0x76) != 0) {
    fn_0034a1e8(*(int *)(param_1 + 0xc0) + *(short *)(param_1 + 0x7a) * param_2,param_5,
                 *(undefined4 *)(param_1 + 200),0,1,*(undefined4 *)(param_1 + 0xd4));
  }
  if (*(short *)(param_1 + 0x74) != 0) {
    fn_0034a3c0(*(int *)(param_1 + 0xbc) + *(short *)(param_1 + 0x78) * param_2 * 2,param_6,
                 *(undefined4 *)(param_1 + 0xc4),0,1,*(undefined4 *)(param_1 + 0xd8));
  }
  if (*(short *)(param_1 + 0x72) != 0) {
    fn_0034a770(*(int *)(param_1 + 0xb4) + *(short *)(param_1 + 0x72) * param_2 * 0xc,param_7,0,1);
  }
  return 1;
}
