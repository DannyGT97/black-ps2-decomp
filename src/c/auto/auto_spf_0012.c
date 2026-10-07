/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */

extern undefined4 * DAT_0040f4dc;
/* ADDR 001227a8 */
void fn_001227a8(undefined4 *param_1)

{
  *param_1 = *DAT_0040f4dc;
  return;
}

/* ---- */

extern undefined DAT_003bc850;
/* ADDR 00124e78 */
undefined * fn_00124e78(int param_1)

{
  return &DAT_003bc850 + param_1 * 0x94;
}

/* ---- */

extern undefined DAT_003f4228;
/* ADDR 00122a00 */
undefined4 fn_00122a00(undefined8 param_1,int param_2)

{
  return *(undefined4 *)(&DAT_003f4228 + ((param_2 << 0x18) >> 0x16));
}

/* ---- */

extern undefined DAT_003bc850;
extern int DAT_003bcac8;
/* ADDR 00124da8 */
void fn_00124da8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = (undefined4 *)(&DAT_003bc850 + param_2 * 0x94);
  do {
    iVar2 = iVar4 * 4;
    uVar1 = *puVar3;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(iVar2 + DAT_003bcac8) = uVar1;
  } while (iVar4 < 0x25);
  return;
}
