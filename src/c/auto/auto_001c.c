/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001c05f8 */
void fn_001c05f8(void)

{
  return;
}


/* ADDR 001c1ba0 */
undefined4 fn_001c1ba0(void)

{
  return 1;
}


/* ADDR 001c1c40 */
void fn_001c1c40(void)

{
  return;
}


/* ADDR 001c1cc8 */
undefined4 fn_001c1cc8(void)

{
  return 1;
}


/* ADDR 001c2248 */
undefined4 fn_001c2248(void)

{
  return 1;
}


/* ADDR 001c29a0 */
undefined4 fn_001c29a0(void)

{
  return 1;
}


/* ADDR 001c29a8 */
undefined4 fn_001c29a8(void)

{
  return 1;
}


/* ADDR 001c2ea8 */
void fn_001c2ea8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* ADDR 001c3e08 */
undefined4 fn_001c3e08(void)

{
  return 1;
}


/* ADDR 001ca200 */
void fn_001ca200(void)

{
  return;
}


/* ADDR 001c2e30 */
undefined4 fn_001c2e30(int param_1)

{
  *(undefined4 *)(param_1 + 0x428) = 0;
  return 1;
}


/* ADDR 001c28a0 */
bool fn_001c28a0(int param_1)

{
  return *(int *)(param_1 + 0x34) == 1;
}


/* ADDR 001c62d8 */
int fn_001c62d8(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x30;
}

extern int DAT_0040eb00;
extern int DAT_0040eb04;
/* ADDR 001cff78 */
void fn_001cff78(void)

{
  DAT_0040eb00 = 0xffffffff;
  DAT_0040eb04 = 0xffffffff;
  return;
}


/* ADDR 001c4f08 */
void fn_001c4f08(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xd5f0) = param_2;
  if (param_2 < *(uint *)(param_1 + 0xd5f4)) {
    *(uint *)(param_1 + 0xd5f4) = param_2;
  }
  return;
}


/* ADDR 001c05d8 */
void fn_001c05d8(undefined8 param_1,undefined8 param_2)

{
  fn_001d0010(param_2);
  return;
}


/* ADDR 001c50e0 */
void fn_001c50e0(void)

{
  fn_001ae538();
  return;
}


/* ADDR 001c65e8 */
void fn_001c65e8(void)

{
  fn_001afde0();
  return;
}


/* ADDR 001cfb30 */
undefined4 fn_001cfb30(void)

{
  fn_001c2248();
  return 1;
}

extern int DAT_0040f4c0;
/* ADDR 001c4d00 */
void fn_001c4d00(void)

{
  fn_001c4f08(DAT_0040f4c0);
  return;
}

extern int DAT_0040f4c0;
/* ADDR 001c67c0 */
void fn_001c67c0(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x70;
  do {
    fn_001c6fa0(param_1,param_2);
    param_1 = param_1 + 0x38;
  } while (param_1 < iVar1);
  fn_001c5f48(DAT_0040f4c0);
  return;
}
