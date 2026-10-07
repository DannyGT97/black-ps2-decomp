/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00140ab0 */
void fn_00140ab0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xfa) = param_2;
  return;
}


/* ADDR 0014c548 */
void fn_0014c548(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}


/* ADDR 0014d908 */
void fn_0014d908(void)

{
  return;
}


/* ADDR 0014dc10 */
undefined4 fn_0014dc10(void)

{
  return 1;
}


/* ADDR 0014e010 */
void fn_0014e010(void)

{
  return;
}


/* ADDR 0014ec08 */
void fn_0014ec08(void)

{
  return;
}


/* ADDR 0014cad8 */
void fn_0014cad8(int param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  return;
}


/* ADDR 001438e8 */
undefined4 fn_001438e8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x80) + 0x1c) == 9) {
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 0;
  }
  return 1;
}


/* ADDR 00147988 */
int fn_00147988(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4));
  if (-1 < iVar1) {
    return *(int *)(param_1 + 0x19c) + iVar1 * 0x40;
  }
  return param_1 + 0x70;
}


/* ADDR 0014c0c8 */
void fn_0014c0c8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) == 2) {
    *(undefined4 *)(param_1 + 0x124) = 3;
    return;
  }
  if (*(int *)(param_2 + 0x3a4) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  return;
}


/* ADDR 00148508 */
int fn_00148508(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_2 & 0xff) * 4 + *(int *)(param_1 + 0x1a4));
  if (iVar1 != -1) {
    return *(int *)(param_1 + 0x19c) + iVar1 * 0x40;
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    return param_1 + 0x140;
  }
  return param_1 + 0x70;
}
