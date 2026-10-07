/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */

extern undefined DAT_00483c80;
/* ADDR 0036a168 */
undefined4 fn_0036a168(int param_1)

{
  return *(undefined4 *)(&DAT_00483c80 + param_1 * 4);
}

/* ---- */
void fn_0036a410(void);
extern undefined4 DAT_003d716c;
/* ADDR 0036aa78 */
void fn_0036aa78(void)

{
  fn_0036a410();
  DAT_003d716c = 0;
  return;
}

/* ---- */
void fn_0036b970(void);
extern undefined4 DAT_003d71fc;
/* ADDR 0036b9c8 */
undefined8 fn_0036b9c8(void)

{
  fn_0036b970();
  WaitSema(DAT_003d71fc);
  return 0;
}
