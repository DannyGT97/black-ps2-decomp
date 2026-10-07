/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00272308 */
undefined1 fn_00272308(int param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}


/* ADDR 0027c328 */
void fn_0027c328(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* ADDR 0027f858 */
void fn_0027f858(int param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    fn_0027f890();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}
