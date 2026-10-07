/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00350098 */
void fn_00350098(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}


/* ADDR 00353360 */
undefined4 fn_00353360(void)

{
  return 0x1000;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035c4a0 */
undefined * fn_0035c4a0(void)

{
  return PTR_DAT_003d6944;
}


/* ADDR 00351ad0 */
void fn_00351ad0(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


/* ADDR 00354c60 */
void fn_00354c60(undefined8 param_1,int param_2,int param_3)

{
  *(int *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(int *)(param_3 + 0x24) = param_2;
  *(int *)(*(int *)(param_2 + 0x24) + 0x28) = param_2;
  return;
}


/* ADDR 00354c80 */
void fn_00354c80(undefined8 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}

extern int PTR_DAT_003d6944;
/* ADDR 0035f630 */
uint fn_0035f630(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(PTR_DAT_003d6944 + 0x58) * 0x41c64e6d + 0x3039;
  *(uint *)(PTR_DAT_003d6944 + 0x58) = uVar1;
  return uVar1 & 0x7fffffff;
}


/* ADDR 00353518 */
void fn_00353518(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x474) != 0) && (iVar1 = *(int *)(param_1 + 0x440), iVar1 != 0)) {
    *(uint *)(param_1 + 0x474) = iVar1 + ((*(uint *)(iVar1 + 4) & 0x7ffffff8) >> 1);
  }
  return;
}
