/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
int fn_002e91c0(void);
extern float DAT_003c95a8;
/* ADDR 00272340 */
void fn_00272340(float param_1)

{
  fn_002e91c0();
  DAT_003c95a8 = DAT_003c95a8 + param_1;
  return;
}

/* ---- */
void fn_0027bbb8(undefined8 param_1);
extern int DAT_003c09e8;
extern undefined4 DAT_0040eb9c;
/* ADDR 0027c0d8 */
void fn_0027c0d8(int param_1,undefined4 param_2)

{
  DAT_003c09e8 = param_1;
  fn_0027bbb8(param_1 + 4);
  DAT_0040eb9c = param_2;
  return;
}
