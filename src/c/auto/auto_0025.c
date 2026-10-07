/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0025c020 */
void fn_0025c020(void)

{
  return;
}


/* ADDR 0025da10 */
ushort fn_0025da10(int param_1)

{
  return *(ushort *)(param_1 + 0x40) >> 9 & 1;
}

extern int DAT_003bfae0;
/* ADDR 00252310 */
void fn_00252310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = DAT_003bfae0;
  DAT_003bfae0 = 0;
  return;
}


/* ADDR 0025ce28 */
void fn_0025ce28(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b04) = 0xffffffff;
  return;
}

extern int DAT_003bfad4;
/* ADDR 002523a8 */
undefined4 fn_002523a8(int param_1)

{
  return *(undefined4 *)(param_1 * 4 + DAT_003bfad4);
}


/* ADDR 0025c028 */
undefined4 fn_0025c028(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b44) = 0x37;
  return 1;
}


/* ADDR 00250018 */
int fn_00250018(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x14) + 8;
}


/* ADDR 00250038 */
int fn_00250038(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + -8) == 0) {
    return 0;
  }
  return *(int *)(param_2 + -8) + 8;
}


/* ADDR 00250550 */
void fn_00250550(void)

{
  fn_0024f770();
  return;
}


/* ADDR 00250570 */
void fn_00250570(void)

{
  fn_0024f790();
  return;
}


/* ADDR 0025cae8 */
void fn_0025cae8(undefined8 param_1,undefined8 param_2)

{
  fn_0025da20(param_2);
  return;
}


/* ADDR 00259d68 */
void fn_00259d68(void)

{
  fn_002599d8(1,0xffff);
  return;
}


/* ADDR 00259d88 */
void fn_00259d88(void)

{
  fn_002599d8(0,0xffff);
  return;
}


/* ADDR 0025dac0 */
void fn_0025dac0(int param_1)

{
  fn_0014c330(*(undefined4 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}


/* ADDR 00253ac8 */
int fn_00253ac8(int *param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [4];
  
  iVar2 = 0;
  iVar1 = *param_1 + 8;
  while (iVar1 = fn_00387510(iVar1,aiStack_30), aiStack_30[0] != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* ADDR 0025ce40 */
void fn_0025ce40(undefined4 *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = fn_0032e1b0(*param_1,*(undefined4 *)(param_2 + 0x34));
  if (lVar1 != 0) {
    fn_00100290(*param_1,*(undefined4 *)(*(int *)(param_2 + 0x34) + 0xc),1);
  }
  return;
}

extern int DAT_003bfad4;
extern int DAT_003bfad8;
/* ADDR 002523c0 */
void fn_002523c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_003bfad8 < param_1 + 1) {
    DAT_003bfad8 = param_1 + 1;
  }
  piVar3 = (int *)(param_1 * 4 + DAT_003bfad4);
  iVar1 = *piVar3;
  *piVar3 = param_2;
  (**(code **)(*(int *)(param_2 + 4) + 0xc))(param_2 + *(short *)(*(int *)(param_2 + 4) + 8));
  iVar2 = *(int *)(iVar1 + 4);
  (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
  return;
}
