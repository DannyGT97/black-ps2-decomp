/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */

extern undefined8 DAT_0040dfd0;
extern undefined8 DAT_0040eb28;
/* ADDR 001d4c78 */
void fn_001d4c78(void)

{
  DAT_0040dfd0 = DAT_0040eb28;
  return;
}

/* ---- */
void fn_001c5f48(int param_1);
void fn_0026a7a0(void);
extern undefined4 DAT_0040f4c0;
/* ADDR 001d4030 */
void fn_001d4030(int param_1)

{
  fn_0026a7a0();
  if (*(int *)(param_1 + 4) != 0) {
    fn_001c5f48(DAT_0040f4c0);
  }
  return;
}

/* ---- */
void fn_001dd6c0(int param_1);

/* ADDR 001d9250 */
void fn_001d9250(int param_1)

{
  if (*(int *)(param_1 + 4) - 5U < 2) {
    fn_001dd6c0(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 7;
  }
  return;
}
