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
