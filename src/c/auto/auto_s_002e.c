/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

extern int DAT_003c87dc;
/* ADDR 002e4188 */
undefined1 fn_002e4188(void)

{
  return DAT_003c87dc;
}


/* ADDR 002e14d8 */
void fn_002e14d8(int *param_1,undefined1 param_2)

{
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28),param_2);
  return;
}
