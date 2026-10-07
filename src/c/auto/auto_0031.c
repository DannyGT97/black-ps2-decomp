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
