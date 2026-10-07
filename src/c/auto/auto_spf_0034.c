/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */

extern undefined1 DAT_003d20d0;
/* ADDR 003461d0 */
void fn_003461d0(undefined1 param_1)

{
  DAT_003d20d0 = param_1;
  return;
}

/* ---- */

extern float DAT_003d4460;
/* ADDR 0034ed88 */
void fn_0034ed88(float param_1)

{
  DAT_003d4460 = DAT_003d4460 + param_1;
  return;
}

/* ---- */

extern float DAT_003d4464;
/* ADDR 0034eda0 */
void fn_0034eda0(float param_1)

{
  DAT_003d4464 = DAT_003d4464 + param_1;
  return;
}

/* ---- */

extern int * DAT_003d1b7c;
/* ADDR 00343f90 */
void fn_00343f90(undefined8 param_1)

{
  (**(code **)(*DAT_003d1b7c + 0x14))
            ((int)DAT_003d1b7c + (int)*(short *)(*DAT_003d1b7c + 0x10),param_1,0);
  return;
}
