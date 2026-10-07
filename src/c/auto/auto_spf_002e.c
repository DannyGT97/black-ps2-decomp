/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */

extern undefined1 DAT_004513c8;
/* ADDR 002e6cf0 */
void fn_002e6cf0(long param_1,long param_2)

{
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_004513c8 = 0;
  }
  return;
}

/* ---- */
float fn_0029da28(float param_1);

/* ADDR 002ea1c8 */
void fn_002ea1c8(float param_1)

{
  fn_0029da28(param_1 * 0.017453292f);
  return;
}

/* ---- */

extern int * DAT_003c9588;
/* ADDR 002e9cc8 */
void fn_002e9cc8(void)

{
  if (DAT_003c9588 != (int *)0x0) {
    (**(code **)(*DAT_003c9588 + 0xc))((int)DAT_003c9588 + (int)*(short *)(*DAT_003c9588 + 8),3);
  }
  DAT_003c9588 = (int *)0x0;
  return;
}
