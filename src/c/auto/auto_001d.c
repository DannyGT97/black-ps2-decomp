/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001d1b28 */
undefined4 fn_001d1b28(void)

{
  return 1;
}


/* ADDR 001d1b30 */
void fn_001d1b30(void)

{
  return;
}


/* ADDR 001d1b38 */
void fn_001d1b38(void)

{
  return;
}


/* ADDR 001d1d18 */
void fn_001d1d18(void)

{
  return;
}


/* ADDR 001d4068 */
void fn_001d4068(void)

{
  return;
}


/* ADDR 001d4070 */
undefined4 fn_001d4070(void)

{
  return 1;
}


/* ADDR 001d4078 */
undefined4 fn_001d4078(void)

{
  return 1;
}


/* ADDR 001d72b8 */
void fn_001d72b8(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x90) = 0;
  return;
}


/* ADDR 001d84c8 */
void fn_001d84c8(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x26) = 0;
  return;
}


/* ADDR 001d8d68 */
undefined8 fn_001d8d68(void)

{
  return 0;
}


/* ADDR 001d8de8 */
void fn_001d8de8(void)

{
  return;
}


/* ADDR 001d8df0 */
void fn_001d8df0(void)

{
  return;
}


/* ADDR 001d96e8 */
undefined4 fn_001d96e8(void)

{
  return 1;
}


/* ADDR 001d96f0 */
void fn_001d96f0(void)

{
  return;
}


/* ADDR 001d9760 */
void fn_001d9760(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


/* ADDR 001d97c8 */
void fn_001d97c8(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


/* ADDR 001dd4c8 */
void fn_001dd4c8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}


/* ADDR 001daad0 */
bool fn_001daad0(int param_1)

{
  return *(int *)(param_1 + 0xc4) == 0;
}


/* ADDR 001d9f60 */
int fn_001d9f60(int *param_1)

{
  return param_1[9] * *(int *)(*param_1 + 0xe0);
}


/* ADDR 001d7498 */
void fn_001d7498(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_1 + 0x2f);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(puVar2 + -0xf) == param_2) {
      *puVar2 = 0;
      return;
    }
    puVar2 = puVar2 + 0x10;
  } while (iVar1 < 2);
  return;
}


/* ADDR 001dad60 */
void fn_001dad60(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (param_2 != 0) {
    *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 2;
    return;
  }
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffd;
  return;
}


/* ADDR 001d5028 */
void fn_001d5028(void)

{
  fn_001c2d90();
  return;
}


/* ADDR 001d6388 */
void fn_001d6388(int param_1)

{
  fn_00281e28(param_1 + 0x94);
  return;
}


/* ADDR 001d7238 */
void fn_001d7238(int param_1)

{
  fn_001f08e8(*(undefined4 *)(param_1 + 0x1be0));
  return;
}


/* ADDR 001d7258 */
void fn_001d7258(int param_1)

{
  fn_001f0958(*(undefined4 *)(param_1 + 0x1be0));
  return;
}


/* ADDR 001d9ea8 */
void fn_001d9ea8(undefined4 *param_1)

{
  fn_001dace0(*param_1);
  return;
}


/* ADDR 001d9f40 */
void fn_001d9f40(undefined4 *param_1)

{
  fn_001dad08(*param_1);
  return;
}


/* ADDR 001dd728 */
void fn_001dd728(int param_1)

{
  fn_001d9ea8(*(undefined4 *)(param_1 + 0x30));
  return;
}


/* ADDR 001d5048 */
undefined4 fn_001d5048(void)

{
  fn_001c2e30();
  return 1;
}


/* ADDR 001d5808 */
void fn_001d5808(void)

{
  fn_001d5370(1,0xffff);
  return;
}


/* ADDR 001d59c8 */
undefined4 fn_001d59c8(void)

{
  fn_001efba0();
  return 1;
}


/* ADDR 001d7b98 */
bool fn_001d7b98(void)

{
  long lVar1;
  
  lVar1 = fn_00324f98();
  return lVar1 != 0;
}


/* ADDR 001d72c0 */
void fn_001d72c0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001092f8();
  *(undefined4 *)(param_2 + 0x1bec) = uVar1;
  return;
}


/* ADDR 001d72e8 */
void fn_001d72e8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001092f8();
  *(undefined4 *)(param_2 + 0x1c04) = uVar1;
  return;
}


/* ADDR 001d7310 */
void fn_001d7310(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001092f8();
  *(undefined4 *)(param_2 + 0x1bf4) = uVar1;
  return;
}


/* ADDR 001d7338 */
void fn_001d7338(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001092f8();
  *(undefined4 *)(param_2 + 0x1c08) = uVar1;
  return;
}


/* ADDR 001d7bb8 */
void fn_001d7bb8(int param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_2;
  fn_0027fcf8(*(undefined4 *)(param_1 + 0x88),auStack_20,0);
  return;
}


/* ADDR 001dacb0 */
void fn_001dacb0(int param_1)

{
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  fn_00284298(*(undefined4 *)(param_1 + 0xb0));
  return;
}


/* ADDR 001daa68 */
void fn_001daa68(int param_1)

{
  fn_0031d528(param_1 + 0x18,*(int *)(param_1 + 0xd0) * *(int *)(param_1 + 0xdc),
               *(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(int *)(param_1 + 0xd0) = (*(int *)(param_1 + 0xd0) + 1) % 2;
  return;
}
