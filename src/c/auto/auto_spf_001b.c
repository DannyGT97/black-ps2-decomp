/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */


/* ADDR 001b1138 */
bool fn_001b1138(int param_1)

{
  return 3.1535e+07f < *(float *)(*(int *)(param_1 + 0x40) + 8);
}

/* ---- */
void fn_0016b7a0(int param_1,uint param_2);
void fn_001de6f0(undefined8 param_1,int param_2,uint param_3);
extern int DAT_0040f4cc;
/* ADDR 001b1ef0 */
void fn_001b1ef0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  
  uVar1 = *(undefined4 *)(DAT_0040f4cc + 0x8b00);
  iVar2 = DAT_0040f4cc + 0x2980;
  fn_001de6f0(auStack_40,iVar2,uVar1);
  fn_0016b7a0(iVar2,uVar1);
  return;
}

/* ---- */
void fn_001b7fc8(int *param_1,uint param_2);
void fn_001b82e0(int param_1,ulong param_2);
void fn_001c3e10(void);
void fn_001c4130(long param_1);
void fn_001c45c0(void);
void fn_001c45e0(void);

/* ADDR 001b86f8 */
void fn_001b86f8(int param_1)

{
  fn_001c3e10();
  fn_001c4130(0);
  fn_001b7fc8(param_1 + 0x11604,0);
  fn_001b82e0(param_1 + 0x11164,0);
  fn_001c45c0();
  fn_001c4130(1);
  fn_001b7fc8(param_1 + 0x11604,1);
  fn_001b82e0(param_1 + 0x11164,1);
  fn_001c45c0();
  fn_001c45e0();
  return;
}
