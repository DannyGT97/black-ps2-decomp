/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00181028 */
undefined1 fn_00181028(undefined1 *param_1)

{
  return *param_1;
}


/* ADDR 00188350 */
undefined1 fn_00188350(int param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}


/* ADDR 0018d608 */
undefined1 fn_0018d608(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}


/* ADDR 0018ad00 */
void fn_0018ad00(int *param_1)

{
  if ((param_1[1] != 0) && ((char)param_1[2] != '\0')) {
    *(int *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = param_1[1] + 0x5c;
  }
  return;
}


/* ADDR 00180ed8 */
int fn_00180ed8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x100) + 0x14) == 1) {
    return 0;
  }
  if (*(char *)(*(int *)(param_1 + 0x100) + 0x71) != '\0') {
    return 0;
  }
  return param_1 + 0x20;
}


/* ADDR 0018d658 */
void fn_0018d658(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    *(undefined1 *)(param_1 + 0x15) = 1;
    fn_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,9);
  }
  return;
}
