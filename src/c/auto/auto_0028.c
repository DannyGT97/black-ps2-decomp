/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00280320 */
void fn_00280320(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x102d) = 0;
  return;
}


/* ADDR 00280358 */
void fn_00280358(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


/* ADDR 002803f8 */
void fn_002803f8(void)

{
  return;
}


/* ADDR 00283648 */
void fn_00283648(void)

{
  return;
}


/* ADDR 002870f8 */
void fn_002870f8(void)

{
  return;
}


/* ADDR 00287100 */
void fn_00287100(void)

{
  return;
}


/* ADDR 00287118 */
void fn_00287118(void)

{
  return;
}


/* ADDR 00287c30 */
void fn_00287c30(void)

{
  return;
}


/* ADDR 00287c38 */
void fn_00287c38(void)

{
  return;
}


/* ADDR 00287c40 */
void fn_00287c40(void)

{
  return;
}


/* ADDR 00287ec0 */
void fn_00287ec0(void)

{
  return;
}


/* ADDR 00288788 */
void fn_00288788(void)

{
  return;
}


/* ADDR 00289948 */
void fn_00289948(void)

{
  return;
}


/* ADDR 0028b940 */
void fn_0028b940(void)

{
  return;
}


/* ADDR 0028bb98 */
void fn_0028bb98(void)

{
  return;
}


/* ADDR 00288910 */
undefined4 fn_00288910(int param_1)

{
  *(undefined1 *)(param_1 + 0x10d) = 1;
  return 1;
}


/* ADDR 0028bb80 */
void fn_0028bb80(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | param_2 & 0xf;
  return;
}


/* ADDR 00287600 */
void fn_00287600(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *param_1 + (int)param_1;
  }
  return;
}


/* ADDR 00287e88 */
void fn_00287e88(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  }
  return;
}


/* ADDR 00288470 */
void fn_00288470(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  }
  return;
}


/* ADDR 0028bbf8 */
void fn_0028bbf8(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_1;
  }
  return;
}


/* ADDR 0028bd68 */
void fn_0028bd68(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  }
  return;
}


/* ADDR 0028c028 */
void fn_0028c028(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + param_1;
  }
  return;
}


/* ADDR 00283ba0 */
void fn_00283ba0(int param_1,undefined4 param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x38) + 0x5c) = *(ushort *)(*(int *)(param_1 + 0x38) + 0x5c) | 0x80
  ;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x30) + 0x18) = param_2;
  return;
}


/* ADDR 00288e00 */
void fn_00288e00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x18)) = param_2;
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  return;
}


/* ADDR 00281a38 */
void fn_00281a38(undefined8 param_1,undefined8 param_2)

{
  fn_002811e8(param_2);
  return;
}


/* ADDR 002821f0 */
void fn_002821f0(int param_1)

{
  fn_00274f60(param_1 + 0x38);
  return;
}


/* ADDR 00283650 */
void fn_00283650(void)

{
  fn_00283c38();
  return;
}


/* ADDR 00283858 */
void fn_00283858(undefined8 param_1,undefined8 param_2)

{
  fn_00283e78(param_1,param_2,0);
  return;
}


/* ADDR 00283878 */
void fn_00283878(void)

{
  fn_00284298();
  return;
}


/* ADDR 00283898 */
void fn_00283898(void)

{
  fn_002842e8();
  return;
}


/* ADDR 00283b60 */
void fn_00283b60(int param_1)

{
  fn_00328180(*(undefined4 *)(param_1 + 0x38));
  return;
}


/* ADDR 00283c18 */
void fn_00283c18(int param_1)

{
  fn_00328180(*(undefined4 *)(param_1 + 0x38));
  return;
}


/* ADDR 00284628 */
void fn_00284628(undefined8 param_1,undefined8 param_2)

{
  fn_00284bf0(param_1,param_2,0);
  return;
}


/* ADDR 00284648 */
void fn_00284648(void)

{
  fn_00285190();
  return;
}


/* ADDR 00284668 */
void fn_00284668(void)

{
  fn_002851e0();
  return;
}


/* ADDR 00285c20 */
void fn_00285c20(int param_1)

{
  fn_00286558(param_1 + 0x1c0);
  return;
}


/* ADDR 00285c40 */
void fn_00285c40(int param_1)

{
  fn_00286720(param_1 + 0x1c0);
  return;
}


/* ADDR 00285c60 */
void fn_00285c60(int param_1)

{
  fn_00286598(param_1 + 0x1c0);
  return;
}


/* ADDR 00285c80 */
void fn_00285c80(int param_1)

{
  fn_00286770(param_1 + 0x1c0);
  return;
}


/* ADDR 00287618 */
void fn_00287618(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287638 */
void fn_00287638(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287658 */
void fn_00287658(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287678 */
void fn_00287678(void)

{
  fn_00287658();
  return;
}


/* ADDR 002876e0 */
void fn_002876e0(void)

{
  fn_00287678();
  return;
}


/* ADDR 00287700 */
void fn_00287700(void)

{
  fn_00287678();
  return;
}


/* ADDR 00287720 */
void fn_00287720(void)

{
  fn_00287678();
  return;
}


/* ADDR 00287740 */
void fn_00287740(void)

{
  fn_00287678();
  return;
}


/* ADDR 00287760 */
void fn_00287760(void)

{
  fn_00287698();
  return;
}


/* ADDR 00287780 */
void fn_00287780(void)

{
  fn_00287698();
  return;
}


/* ADDR 002877a0 */
void fn_002877a0(void)

{
  fn_00287698();
  return;
}


/* ADDR 002877c0 */
void fn_002877c0(void)

{
  fn_00287698();
  return;
}


/* ADDR 002877e0 */
void fn_002877e0(void)

{
  fn_00287698();
  return;
}


/* ADDR 00287800 */
void fn_00287800(void)

{
  fn_00287698();
  return;
}


/* ADDR 00287820 */
void fn_00287820(void)

{
  fn_00287698();
  return;
}


/* ADDR 00287920 */
void fn_00287920(void)

{
  fn_00287600();
  return;
}


/* ADDR 002879f8 */
void fn_002879f8(void)

{
  fn_00287638();
  return;
}


/* ADDR 00287a60 */
void fn_00287a60(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287a90 */
void fn_00287a90(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287ab0 */
void fn_00287ab0(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287ad0 */
void fn_00287ad0(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287af0 */
void fn_00287af0(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287b10 */
void fn_00287b10(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287b30 */
void fn_00287b30(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287b50 */
void fn_00287b50(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287b70 */
void fn_00287b70(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287b90 */
void fn_00287b90(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287bb0 */
void fn_00287bb0(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287bd0 */
void fn_00287bd0(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287bf0 */
void fn_00287bf0(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287c10 */
void fn_00287c10(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287c48 */
void fn_00287c48(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287c68 */
void fn_00287c68(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287c88 */
void fn_00287c88(void)

{
  fn_00287638();
  return;
}


/* ADDR 00287ca8 */
void fn_00287ca8(void)

{
  fn_00287638();
  return;
}


/* ADDR 00287cc8 */
void fn_00287cc8(void)

{
  fn_00287638();
  return;
}


/* ADDR 00287ce8 */
void fn_00287ce8(void)

{
  fn_00287618();
  return;
}


/* ADDR 00287e68 */
void fn_00287e68(void)

{
  fn_00287600();
  return;
}


/* ADDR 00287ea0 */
void fn_00287ea0(void)

{
  fn_00287638();
  return;
}


/* ADDR 00282888 */
undefined4 fn_00282888(void)

{
  fn_00282ad8();
  return 1;
}


/* ADDR 00284408 */
undefined4 fn_00284408(void)

{
  fn_00285258();
  return 1;
}


/* ADDR 00286c80 */
void fn_00286c80(void)

{
  fn_00286c10(1,0xffff);
  return;
}


/* ADDR 0028c3a0 */
void fn_0028c3a0(void)

{
  fn_0028c040(1,0xffff);
  return;
}


/* ADDR 0028c3c0 */
void fn_0028c3c0(void)

{
  fn_0028c040(0,0xffff);
  return;
}


/* ADDR 0028c4d8 */
void fn_0028c4d8(void)

{
  fn_0028c3e0(1,0xffff);
  return;
}


/* ADDR 00283b10 */
void fn_00283b10(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  fn_00328140(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x18));
  return;
}


/* ADDR 00285aa8 */
void fn_00285aa8(int param_1)

{
  fn_00325ad0(*(undefined4 *)(param_1 + 0xcba8));
  return;
}


/* ADDR 00289da8 */
void fn_00289da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  fn_0018c2e0(param_2,param_3,param_4);
  return;
}


/* ADDR 00284990 */
void fn_00284990(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  fn_00319e28(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_2 + 0x18));
  return;
}


/* ADDR 00289360 */
undefined8 fn_00289360(undefined8 param_1,int param_2)

{
  fn_00288fb0(param_1,param_2 + 0x28);
  return param_1;
}


/* ADDR 00282170 */
undefined4 fn_00282170(int param_1)

{
  fn_00274fc8(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = 2;
  return 1;
}


/* ADDR 00287840 */
void fn_00287840(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


/* ADDR 00287878 */
void fn_00287878(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


/* ADDR 002878b0 */
void fn_002878b0(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


/* ADDR 002878e8 */
void fn_002878e8(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


/* ADDR 00287940 */
void fn_00287940(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


/* ADDR 00287978 */
void fn_00287978(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


/* ADDR 00287df8 */
void fn_00287df8(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  return;
}


/* ADDR 00287e30 */
void fn_00287e30(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  return;
}


/* ADDR 00289660 */
void fn_00289660(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x6c) = 0x7f;
  uVar1 = fn_0035e7d8(0x7f0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}


/* ADDR 00282f48 */
void fn_00282f48(int param_1)

{
  fn_00280628();
  fn_003110b0(*(undefined4 *)(param_1 + 0x14),0,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* ADDR 00281948 */
void fn_00281948(undefined8 param_1,undefined8 param_2)

{
  fn_002819e0();
  fn_00281988(param_1,param_2);
  return;
}


/* ADDR 00289798 */
undefined4 fn_00289798(int *param_1)

{
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x8c))((int)param_1 + (int)*(short *)(*param_1 + 0x88));
  return 1;
}


/* ADDR 002817c8 */
void fn_002817c8(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xe00;
  do {
    fn_00285190(param_1);
    param_1 = param_1 + 0x38;
  } while (param_1 < uVar1);
  return;
}


/* ADDR 00287698 */
void fn_00287698(int param_1)

{
  fn_00287658();
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_1;
  }
  return;
}


/* ADDR 002879b0 */
void fn_002879b0(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + param_1;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + param_1;
  }
  return;
}


/* ADDR 00287a18 */
void fn_00287a18(int param_1)

{
  fn_00287638();
  if (*(int *)(param_1 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_1;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_1;
  }
  return;
}


/* ADDR 00288078 */
void fn_00288078(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  return;
}


/* ADDR 002880c0 */
void fn_002880c0(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  return;
}


/* ADDR 00288108 */
void fn_00288108(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  return;
}


/* ADDR 00288bc8 */
void fn_00288bc8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  }
  fn_00289398(*(undefined4 *)(param_1 + 4));
  return;
}


/* ADDR 00282ef8 */
undefined4 fn_00282ef8(int param_1)

{
  fn_00280528();
  if (*(int *)(param_1 + 8) == 1) {
    fn_003178b8(2);
  }
  else {
    fn_003178b8(3);
  }
  return 1;
}


/* ADDR 00284298 */
undefined4 fn_00284298(int param_1)

{
  **(undefined4 **)(*(int *)(param_1 + 0x38) + 0x30) = 1;
  fn_00328140(*(undefined4 *)(param_1 + 0x38),0);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 1;
  return 1;
}


/* ADDR 00285190 */
undefined4 fn_00285190(int param_1)

{
  fn_00319de0(*(undefined4 *)(param_1 + 0x34),0);
  fn_00319e28(*(undefined4 *)(param_1 + 0x34),0);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 1;
  return 1;
}


/* ADDR 00280628 */
void fn_00280628(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    if (*param_1 != 0) {
      fn_00282c18(*param_1);
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  } while (uVar1 < 2);
  return;
}


/* ADDR 00281988 */
void fn_00281988(int param_1,undefined8 param_2)

{
  uint uVar1;
  
  param_1 = param_1 + 0xe00;
  uVar1 = 0;
  do {
    fn_00280908(param_1,param_2);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x3c;
  } while (uVar1 < 0x23);
  return;
}


/* ADDR 002843b0 */
void fn_002843b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  fn_00281198();
  uVar1 = fn_00319c70(0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x1c);
  return;
}


/* ADDR 00288020 */
void fn_00288020(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_1;
  }
  return;
}


/* ADDR 00288150 */
void fn_00288150(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_1;
  }
  return;
}


/* ADDR 002819e0 */
void fn_002819e0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xe00;
  do {
    fn_00280ee0(param_1,param_2);
    param_1 = param_1 + 0x38;
  } while (param_1 < uVar1);
  return;
}


/* ADDR 00287d08 */
void fn_00287d08(int param_1)

{
  fn_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_1;
  }
  return;
}


/* ADDR 00282ad8 */
void fn_00282ad8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1038) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar1 = param_1 + 0x10;
      do {
        uVar2 = uVar2 + 1;
        fn_00285880(iVar1);
        iVar1 = iVar1 + 0x20;
      } while (uVar2 < *(uint *)(param_1 + 0x1028));
    }
    fn_00313fd0(*(undefined4 *)(param_1 + 0x1038));
    *(undefined4 *)(param_1 + 0x1038) = 0;
  }
  *(undefined1 *)(param_1 + 0x102e) = 0;
  *(undefined4 *)(param_1 + 0x103c) = 1;
  return;
}


/* ADDR 00287d70 */
void fn_00287d70(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_1;
  }
  return;
}


/* ADDR 00289398 */
void fn_00289398(int param_1)

{
  fn_00289590();
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  return;
}


/* ADDR 00287ec8 */
void fn_00287ec8(int param_1)

{
  fn_00287618();
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_1;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_1;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_1;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_1;
  }
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_1;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_1;
  }
  return;
}


/* ADDR 00287218 */
void fn_00287218(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + (int)param_1;
  }
  switch(*param_1) {
  case 0:
    fn_002876e0(param_1[1]);
    break;
  case 1:
    fn_00287700(param_1[1]);
    break;
  case 2:
    fn_00287720(param_1[1]);
    break;
  case 3:
    fn_00287760(param_1[1]);
    break;
  case 4:
    fn_00287780(param_1[1]);
    break;
  case 5:
    fn_002877a0(param_1[1]);
    break;
  case 6:
    fn_002877c0(param_1[1]);
    break;
  case 7:
    fn_002877e0(param_1[1]);
    break;
  case 8:
    fn_00287800(param_1[1]);
    break;
  case 9:
    fn_00287820(param_1[1]);
    break;
  case 10:
    fn_00287740(param_1[1]);
    break;
  case 0xb:
    fn_002879f8(param_1[1]);
    break;
  case 0xc:
    fn_00287a18(param_1[1]);
    break;
  case 0xf:
    fn_00287a90(param_1[1]);
    break;
  case 0x10:
    fn_00287ab0(param_1[1]);
    break;
  case 0x11:
    fn_00287ad0(param_1[1]);
    break;
  case 0x12:
    fn_00287a60(param_1[1]);
    break;
  case 0x13:
    fn_00287af0(param_1[1]);
    break;
  case 0x14:
    fn_00287b10(param_1[1]);
    break;
  case 0x15:
    fn_00287b50(param_1[1]);
    break;
  case 0x16:
    fn_00287b70(param_1[1]);
    break;
  case 0x17:
    fn_00287b90(param_1[1]);
    break;
  case 0x18:
    fn_00287bb0(param_1[1]);
    break;
  case 0x19:
    fn_00287bd0(param_1[1]);
    break;
  case 0x1a:
    fn_00287bf0(param_1[1]);
    break;
  case 0x1b:
    fn_00287840(param_1[1]);
    break;
  case 0x1e:
    fn_002879b0(param_1[1]);
    break;
  case 0x23:
    fn_00287ce8(param_1[1]);
    break;
  case 0x25:
    fn_00287940(param_1[1]);
    break;
  case 0x26:
    fn_00287978(param_1[1]);
    break;
  case 0x27:
    fn_00287878(param_1[1]);
    break;
  case 0x28:
    fn_002878b0(param_1[1]);
    break;
  case 0x29:
    fn_002878e8(param_1[1]);
    break;
  case 0x2a:
    fn_00287920(param_1[1]);
    break;
  case 0x2b:
    fn_00287c40(param_1[1]);
    break;
  case 0x2c:
  case 0x2f:
    fn_00287c48(param_1[1]);
    break;
  case 0x2d:
    fn_00287c10(param_1[1]);
    break;
  case 0x2e:
    fn_00287c30(param_1[1]);
    break;
  case 0x30:
    fn_00287ca8(param_1[1]);
    break;
  case 0x31:
    fn_00287cc8(param_1[1]);
    break;
  case 0x32:
    fn_00287c88(param_1[1]);
    break;
  case 0x33:
    fn_00287c38(param_1[1]);
    break;
  case 0x34:
    fn_00287b30(param_1[1]);
    break;
  case 0x35:
    fn_00287e88(param_1[1]);
    break;
  case 0x36:
    fn_00287c68(param_1[1]);
    break;
  case 0x37:
    fn_00287d70(param_1[1]);
    break;
  case 0x38:
    fn_00287d08(param_1[1]);
    break;
  case 0x39:
    fn_00287df8(param_1[1]);
    break;
  case 0x3a:
    fn_00287e30(param_1[1]);
    break;
  case 0x3b:
    fn_00287ec8(param_1[1]);
    break;
  case 0x3c:
    fn_00288020(param_1[1]);
    break;
  case 0x3d:
    fn_00288078(param_1[1]);
    break;
  case 0x3e:
    fn_002880c0(param_1[1]);
    break;
  case 0x3f:
    fn_00288108(param_1[1]);
    break;
  case 0x40:
    fn_00288150(param_1[1]);
    break;
  case 0x41:
    fn_00287e68(param_1[1]);
    break;
  case 0x43:
    fn_00287ea0(param_1[1]);
  default:
    break;
  case 0x44:
    fn_00287ec0(param_1[1]);
  }
  return;
}
