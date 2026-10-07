/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00322a00 */
undefined8 fn_00322a00(void)

{
  return 0;
}


/* ADDR 0032e320 */
undefined4 fn_0032e320(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* ADDR 0032faf0 */
undefined4 fn_0032faf0(void)

{
  return 1;
}

extern int DAT_00458dc0;
/* ADDR 00324650 */
undefined4 fn_00324650(void)

{
  return DAT_00458dc0;
}


/* ADDR 0032a530 */
void fn_0032a530(uint *param_1,uint param_2)

{
  param_1[3] = param_2;
  *param_1 = *param_1 | 8;
  return;
}


/* ADDR 0032a548 */
void fn_0032a548(uint *param_1,uint param_2)

{
  param_1[5] = param_2;
  *param_1 = *param_1 | 0x40;
  return;
}


/* ADDR 0032a560 */
void fn_0032a560(uint *param_1,uint param_2)

{
  param_1[1] = param_2;
  *param_1 = *param_1 | 0x80;
  return;
}


/* ADDR 0032a938 */
undefined4 fn_0032a938(int param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10);
}


/* ADDR 0032e1b0 */
uint fn_0032e1b0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    if ((uVar1 < *(uint *)(param_1 + 0x28)) &&
       (*(uint **)(uVar1 * 4 + *(int *)(param_1 + 0x44)) == param_2)) {
      uVar2 = *(uint *)((uVar1 >> 5) * 4 + *(int *)(param_1 + 0x60)) >> (uVar1 & 0x1f) & 1;
    }
  }
  return uVar2;
}
