/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00218398 */
void fn_00218398(void)

{
  return;
}

extern int DAT_003be8b8;
/* ADDR 00216af0 */
void fn_00216af0(undefined4 param_1)

{
  DAT_003be8b8 = param_1;
  return;
}

extern int DAT_003be8fc;
/* ADDR 0021ad98 */
void fn_0021ad98(undefined4 param_1)

{
  DAT_003be8fc = param_1;
  return;
}

extern int DAT_003be8fc;
/* ADDR 0021ada8 */
undefined4 fn_0021ada8(void)

{
  return DAT_003be8fc;
}

extern int DAT_003be844;
extern int DAT_0040f0e0;
/* ADDR 002122d0 */
void fn_002122d0(void)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x2014c) = DAT_003be844;
  return;
}

extern int DAT_0043df50;
extern int DAT_0043df68;
/* ADDR 0021ad58 */
void fn_0021ad58(void)

{
  if ((DAT_0043df50 == 0) && (DAT_0043df68 != 0)) {
    *(undefined4 *)(DAT_0043df68 + 0x24) = 0;
  }
  return;
}


/* ADDR 00211420 */
int fn_00211420(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*param_1 == param_3) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 3;
    } while (iVar1 < param_2);
  }
  return -1;
}
