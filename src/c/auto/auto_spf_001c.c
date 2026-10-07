/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_001c5f48(int param_1);
void fn_001c6fa0(int *param_1,long param_2);
extern undefined4 DAT_0040f4c0;
/* ADDR 001c6828 */
void fn_001c6828(int param_1,int param_2,undefined8 param_3)

{
  fn_001c6fa0(param_2 * 0x38 + param_1,param_3);
  fn_001c5f48(DAT_0040f4c0);
  return;
}

/* ---- */
void fn_001c5f48(int param_1);
void fn_0026a7a0(void);
extern undefined4 DAT_0040f4c0;
/* ADDR 001cfac8 */
void fn_001cfac8(int param_1)

{
  fn_0026a7a0();
  if (*(int *)(param_1 + 4) != 0) {
    fn_001c5f48(DAT_0040f4c0);
  }
  return;
}
