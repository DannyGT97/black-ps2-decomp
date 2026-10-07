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
