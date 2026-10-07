/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 002611c8 */
void fn_002611c8(void)

{
  return;
}


/* ADDR 00263388 */
void fn_00263388(int param_1)

{
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


/* ADDR 0026bc80 */
undefined4 fn_0026bc80(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}


/* ADDR 0026f4a8 */
undefined4 fn_0026f4a8(undefined4 *param_1)

{
  return *param_1;
}


/* ADDR 0026f4b0 */
void fn_0026f4b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 0026f4b8 */
undefined4 fn_0026f4b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}


/* ADDR 00260fa0 */
undefined4 fn_00260fa0(undefined4 *param_1)

{
  *param_1 = 0;
  return 1;
}


/* ADDR 0026c8d0 */
void fn_0026c8d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  return;
}


/* ADDR 002633d0 */
undefined4 fn_002633d0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x58);
}


/* ADDR 0026f560 */
int fn_0026f560(int param_1)

{
  if (*(int *)(param_1 + 0xd8) < 0) {
    return -1;
  }
  return *(int *)(param_1 + 0xd8) << 10;
}
