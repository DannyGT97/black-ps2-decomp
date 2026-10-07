/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0013da60 */
void fn_0013da60(int param_1)

{
  if (*(char *)(param_1 + 0x1fc1) == '\0') {
    if (*(int *)(param_1 + 0x1fc4) != 0) {
      fn_0016aba8(param_1 + 0x1f90,*(int *)(param_1 + 0x1fc4),*(undefined4 *)(param_1 + 0x1fc8),
                   *(undefined4 *)(param_1 + 0x7c));
    }
    *(undefined1 *)(param_1 + 0x1fc1) = 1;
  }
  return;
}
