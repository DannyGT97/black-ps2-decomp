/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001a7450 */
void fn_001a7450(int param_1)

{
  if ((*(char *)(param_1 + 0xb9) != '\0') && (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0)) {
    fn_00347858(*(int *)(param_1 + 0x54),param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  return;
}
