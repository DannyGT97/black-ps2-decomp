/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0010b610 */
undefined1 fn_0010b610(int param_1)

{
  return *(undefined1 *)(param_1 + 0x515);
}


/* ADDR 00103860 */
undefined1 fn_00103860(int param_1)

{
  return *(undefined1 *)(param_1 + 0x210c9);
}


/* ADDR 00103870 */
undefined1 fn_00103870(int param_1)

{
  return *(undefined1 *)(param_1 + 0x210c8);
}


/* ADDR 0010a820 */
void fn_0010a820(char *param_1)

{
  if (*param_1 != '\0') {
    fn_00278ea0(param_1 + 0x20);
  }
  return;
}


/* ADDR 00106698 */
void fn_00106698(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x30) + 4) == 1) && (*(char *)(param_1 + 0x24) == '\0')) {
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0x2c) - *(float *)(*(int *)(param_1 + 0x30) + 0x4c);
  }
  return;
}
