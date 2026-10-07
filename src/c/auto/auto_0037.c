/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0037c1f0 */
undefined4 fn_0037c1f0(undefined4 *param_1)

{
  return *param_1;
}


/* ADDR 003704b8 */
void fn_003704b8(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00370548 */
void fn_00370548(void)

{
  fn_003700d0();
  return;
}


/* ADDR 003705d0 */
void fn_003705d0(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00371260 */
void fn_00371260(void)

{
  fn_003700d0();
  return;
}


/* ADDR 003712d0 */
void fn_003712d0(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00371340 */
void fn_00371340(void)

{
  fn_003700d0();
  return;
}


/* ADDR 003713b0 */
void fn_003713b0(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00371420 */
void fn_00371420(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00371490 */
void fn_00371490(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00371500 */
void fn_00371500(void)

{
  fn_003700d0();
  return;
}


/* ADDR 00377840 */
void fn_00377840(void)

{
  fn_003753e0();
  return;
}


/* ADDR 00377cd0 */
void fn_00377cd0(int param_1)

{
  DeleteSema(*(undefined4 *)(param_1 + 0xc));
  return;
}


/* ADDR 0037b450 */
void fn_0037b450(void)

{
  fn_0037b608();
  return;
}


/* ADDR 00370720 */
ulong fn_00370720(void)

{
  ulong uVar1;
  
  uVar1 = fn_00370100();
  return uVar1 ^ 1;
}


/* ADDR 00374188 */
void fn_00374188(int param_1,long param_2)

{
  if (param_2 != 0) {
    fn_00377628(param_1 + 0x84);
  }
  return;
}


/* ADDR 0037c1f8 */
void fn_0037c1f8(void)

{
  fn_0037c048(1,0xffff);
  return;
}


/* ADDR 0037c218 */
void fn_0037c218(void)

{
  fn_0037c048(0,0xffff);
  return;
}


/* ADDR 0037d118 */
void fn_0037d118(void)

{
  fn_0037cca8(1,0xffff);
  return;
}


/* ADDR 0037d138 */
void fn_0037d138(void)

{
  fn_0037cca8(0,0xffff);
  return;
}


/* ADDR 0037d840 */
void fn_0037d840(void)

{
  fn_0037d158(1,0xffff);
  return;
}


/* ADDR 0037d860 */
void fn_0037d860(void)

{
  fn_0037d158(0,0xffff);
  return;
}


/* ADDR 0037def0 */
void fn_0037def0(void)

{
  fn_0037d880(1,0xffff);
  return;
}


/* ADDR 0037df10 */
void fn_0037df10(void)

{
  fn_0037d880(0,0xffff);
  return;
}


/* ADDR 0037e678 */
void fn_0037e678(void)

{
  fn_0037df30(1,0xffff);
  return;
}


/* ADDR 0037e698 */
void fn_0037e698(void)

{
  fn_0037df30(0,0xffff);
  return;
}


/* ADDR 0037ec10 */
void fn_0037ec10(void)

{
  fn_0037e6b8(1,0xffff);
  return;
}


/* ADDR 0037ec30 */
void fn_0037ec30(void)

{
  fn_0037e6b8(0,0xffff);
  return;
}


/* ADDR 0037f010 */
void fn_0037f010(void)

{
  fn_0037eec8(1,0xffff);
  return;
}


/* ADDR 0037f030 */
void fn_0037f030(void)

{
  fn_0037eec8(0,0xffff);
  return;
}


/* ADDR 0037f238 */
void fn_0037f238(void)

{
  fn_0037f050(1,0xffff);
  return;
}


/* ADDR 0037f258 */
void fn_0037f258(void)

{
  fn_0037f050(0,0xffff);
  return;
}


/* ADDR 0037f8e8 */
void fn_0037f8e8(void)

{
  fn_0037f7a0(1,0xffff);
  return;
}


/* ADDR 0037f908 */
void fn_0037f908(void)

{
  fn_0037f7a0(0,0xffff);
  return;
}


/* ADDR 003707a0 */
uint fn_003707a0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*param_1,*param_2);
  return uVar1 >> 0x1f;
}


/* ADDR 0037b8e8 */
void fn_0037b8e8(int param_1,undefined8 param_2)

{
  fn_00323188(param_1,*(undefined4 *)(param_1 + 0x40),2,param_2);
  return;
}


/* ADDR 0037bf00 */
void fn_0037bf00(int param_1,undefined8 param_2)

{
  fn_00323150(param_1,*(undefined4 *)(param_1 + 0x40),0,param_2);
  return;
}


/* ADDR 0037bb58 */
void fn_0037bb58(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x14);
  fn_00323188(*(int *)(param_1 + 0x14),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x80),1,
               *(undefined4 *)(param_2 + 0x14));
  return;
}


/* ADDR 00377868 */
void fn_00377868(int param_1)

{
  int iVar1;
  
  iVar1 = fn_003778d8();
  *(int *)(param_1 + 0x14c) = *(int *)(*(int *)(param_1 + 0x124) + 0x10) + iVar1 * 0x20;
  return;
}


/* ADDR 003778a0 */
void fn_003778a0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00377968();
  *(int *)(param_1 + 0x14c) = *(int *)(*(int *)(param_1 + 0x124) + 0x10) + iVar1 * 0x20;
  return;
}
