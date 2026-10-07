/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00312bc8 */
void fn_00312bc8(void)

{
  return;
}


/* ADDR 00319610 */
undefined4 fn_00319610(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* ADDR 0031c960 */
void fn_0031c960(void)

{
  return;
}


/* ADDR 0031d520 */
undefined4 fn_0031d520(void)

{
  return 0x11940000;
}


/* ADDR 0031c968 */
uint fn_0031c968(int param_1)

{
  return *(uint *)(param_1 + 0x9c) & 1;
}

extern int PTR_DAT_003ced40;
/* ADDR 00315168 */
undefined * fn_00315168(int param_1)

{
  return (&PTR_DAT_003ced40)[param_1];
}


/* ADDR 00318a28 */
bool fn_00318a28(int param_1)

{
  return **(int **)(param_1 + 8) == *(int *)(param_1 + 0xc);
}


/* ADDR 00313e60 */
void fn_00313e60(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | *(byte *)(param_2 + 2);
  return;
}


/* ADDR 003151d8 */
int fn_003151d8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x1c;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 0x2c;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x14);
  }
  return iVar1;
}


/* ADDR 003183c0 */
int fn_003183c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != param_1; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* ADDR 00312d08 */
void fn_00312d08(int param_1)

{
  fn_00312c70(*(undefined4 *)(param_1 + -4));
  return;
}


/* ADDR 00312d28 */
void fn_00312d28(void)

{
  fn_0035e7d8();
  return;
}


/* ADDR 00312d48 */
void fn_00312d48(void)

{
  fn_0035f660();
  return;
}


/* ADDR 00313e88 */
void fn_00313e88(void)

{
  fn_00324e38();
  return;
}


/* ADDR 00313ea8 */
void fn_00313ea8(undefined8 param_1)

{
  fn_00324d98(param_1,0);
  return;
}


/* ADDR 00314488 */
void fn_00314488(int param_1)

{
  fn_00318288(param_1 + 0xc);
  return;
}


/* ADDR 003144a8 */
void fn_003144a8(int param_1)

{
  fn_003183c0(param_1 + 0xc);
  return;
}


/* ADDR 00318bc0 */
void fn_00318bc0(void)

{
  fn_00312c70();
  return;
}


/* ADDR 00319480 */
void fn_00319480(void)

{
  fn_00318d28();
  return;
}


/* ADDR 0031c800 */
void fn_0031c800(int param_1)

{
  fn_00312c70(*(undefined4 *)(param_1 + 0x50));
  return;
}


/* ADDR 0031d480 */
void fn_0031d480(void)

{
  fn_0031d4c8();
  return;
}


/* ADDR 00310228 */
void fn_00310228(void)

{
  CEntityManager_0030fd68(1,0xffff);
  return;
}


/* ADDR 00310248 */
void fn_00310248(void)

{
  CEntityManager_0030fd68(0,0xffff);
  return;
}


/* ADDR 0031d460 */
undefined4 fn_0031d460(void)

{
  fn_0031d4a0();
  return 1;
}


/* ADDR 0031e5a0 */
bool fn_0031e5a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = fn_00316400(*param_2,param_3);
  return lVar1 == 0;
}


/* ADDR 00316668 */
undefined8 fn_00316668(undefined8 param_1)

{
  fn_003166f8();
  fn_00316698(param_1);
  return param_1;
}


/* ADDR 0031c7c0 */
void fn_0031c7c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00312c48(*(int *)(param_1 + 0x4c) * 0x18,0x30809);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return;
}


/* ADDR 0031d528 */
void fn_0031d528(int param_1)

{
  if ((*(uint *)(param_1 + 0x54) & 0x40) == 0) {
    fn_00324fa0();
  }
  else {
    fn_00315ff0();
  }
  return;
}


/* ADDR 0031d130 */
void fn_0031d130(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    fn_00312c70(param_1[4]);
  }
  TerminateThread(*param_1);
  DeleteThread(*param_1);
  return;
}


/* ADDR 0031de30 */
undefined8 fn_0031de30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_003165c8(param_1,param_3);
  fn_00316618(param_1,param_2);
  return param_1;
}


/* ADDR 00319f80 */
void fn_00319f80(int param_1)

{
  fn_00317340(param_1 + 0x28,1);
  if (*(int *)(param_1 + 0x28) != 0) {
    **(int **)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}
