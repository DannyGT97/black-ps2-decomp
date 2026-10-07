/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 003915c0 */
void fn_003915c0(void)

{
  return;
}


/* ADDR 003915c8 */
void fn_003915c8(void)

{
  return;
}


/* ADDR 00391620 */
undefined4 fn_00391620(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


/* ADDR 00392e48 */
void fn_00392e48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* ADDR 003921a0 */
void fn_003921a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


/* ADDR 00392550 */
void fn_00392550(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


/* ADDR 00392d38 */
void fn_00392d38(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 8) = 0xbff0000000000000;
  return;
}


/* ADDR 00393810 */
float fn_00393810(float *param_1)

{
  return *param_1 * *param_1 + param_1[2] * param_1[2];
}
