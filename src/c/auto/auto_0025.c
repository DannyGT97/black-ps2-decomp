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
