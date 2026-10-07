/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00226380 */
void fn_00226380(undefined8 param_1,int param_2)

{
  fn_002202c8(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


/* ADDR 0022b080 */
void fn_0022b080(undefined8 param_1,int param_2)

{
  fn_002202c8(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return;
}


/* ADDR 00229700 */
void fn_00229700(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  piVar3 = (int *)(iVar1 * 4 + param_1[2]);
  iVar2 = piVar3[-1];
  *piVar3 = iVar2;
  *param_1 = iVar1 + 1;
  (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
  return;
}


/* ADDR 002210f0 */
void fn_002210f0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  fn_0023db58(iVar1,*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + 1);
  *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) = *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) & 0xfdffffff;
  return;
}


/* ADDR 00221140 */
void fn_00221140(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  fn_0023db58(iVar1,*(int *)(*(int *)(iVar1 + 0x48) + 0x18) + -1);
  *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) = *(uint *)(*(int *)(iVar1 + 0x48) + 0x1c) & 0xfdffffff;
  return;
}


/* ADDR 0022c618 */
void fn_0022c618(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_2 + 3U & 0xfffffffc);
  *param_2 = (int)(puVar1 + 1);
  fn_002523c0(*puVar1,*(undefined4 *)(*param_1 * 4 + param_1[2] + -4));
  return;
}

extern int DAT_0043df40;
extern int DAT_0043df68;
/* ADDR 00224590 */
void fn_00224590(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0043df68 + 0x2c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
  }
  *(undefined4 *)(DAT_0043df68 + 0x2c) = DAT_0043df40;
  return;
}
