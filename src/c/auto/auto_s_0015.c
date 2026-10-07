/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00153078 */
undefined4 fn_00153078(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  fn_0014b948(param_1,param_2,param_3);
  return 1;
}


/* ADDR 00156d80 */
void fn_00156d80(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0xec) + 0xc4) != '\0') {
    fn_0015a990(*(undefined4 *)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xd8) = 0x1e;
  }
  return;
}


/* ADDR 00152988 */
void fn_00152988(int param_1,long param_2)

{
  if ((param_2 == 0) &&
     ((*(uint *)(param_1 + 0x1b4) < 2 || (*(char *)(*(int *)(param_1 + 0xb4) + 0x3d) == '\0')))) {
    fn_00151b40(param_1,1,1);
  }
  return;
}
