/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00292808 */
void fn_00292808(void)

{
  return;
}


/* ADDR 00294ab8 */
undefined4 fn_00294ab8(void)

{
  return 1;
}


/* ADDR 00294b98 */
undefined4 fn_00294b98(int param_1)

{
  return **(undefined4 **)(param_1 + 0x40);
}


/* ADDR 00294e98 */
void fn_00294e98(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}


/* ADDR 00294ea8 */
void fn_00294ea8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return;
}

extern int DAT_003c1550;
/* ADDR 0029b4f0 */
undefined * fn_0029b4f0(void)

{
  return &DAT_003c1550;
}


/* ADDR 0029d108 */
uint fn_0029d108(uint param_1)

{
  return ((param_1 & 0xff) / 10) * 6 + (param_1 & 0xff) & 0xff;
}


/* ADDR 00294d30 */
undefined4 fn_00294d30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar1 + 0x1c8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1c8) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1d8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1d8) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1e8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1cc) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1cc) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1dc) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1dc) + 0x28) = 0;
  }
  if (*(int *)(iVar1 + 0x1ec) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1ec) + 0x28) = 0;
  }
  return 1;
}
