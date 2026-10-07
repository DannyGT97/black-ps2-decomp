/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00367f20 */
undefined4 fn_00367f20(void)

{
  return 0xffffffff;
}


/* ADDR 00367f28 */
undefined4 fn_00367f28(void)

{
  return 0xffffffff;
}

extern int PTR_DAT_0040b4a0;
/* ADDR 00364e20 */
undefined ** fn_00364e20(void)

{
  return &PTR_DAT_0040b4a0;
}

extern int DAT_003d7158;
/* ADDR 00367ce0 */
void fn_00367ce0(void)

{
  DAT_003d7158 = 0;
  return;
}


/* ADDR 00367fe0 */
undefined8 fn_00367fe0(undefined8 param_1,int param_2)

{
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


/* ADDR 0036ab48 */
void fn_0036ab48(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

extern int PTR_DAT_0040a991;
/* ADDR 00364de0 */
int fn_00364de0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + param_1) & 1) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

extern int PTR_DAT_0040a991;
/* ADDR 00364e00 */
int fn_00364e00(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if ((*(byte *)((int)&PTR_DAT_0040a991 + param_1) & 2) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

extern int DAT_00483ae4;
extern int DAT_00483aec;
/* ADDR 0036a4d8 */
void fn_0036a4d8(uint param_1)

{
  if ((int)param_1 < 0) {
    *(undefined4 *)((param_1 & 0x7fffffff) * 0xc + DAT_00483ae4) = 0;
    return;
  }
  *(undefined4 *)(param_1 * 0xc + DAT_00483aec) = 0;
  return;
}


/* ADDR 00366788 */
int fn_00366788(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff0000) == 0) {
    iVar1 = 0x10;
    param_1 = param_1 << 0x10;
  }
  if ((param_1 & 0xff000000) == 0) {
    iVar1 = iVar1 + 8;
    param_1 = param_1 << 8;
  }
  if ((param_1 & 0xf0000000) == 0) {
    iVar1 = iVar1 + 4;
    param_1 = param_1 << 4;
  }
  if ((param_1 & 0xc0000000) == 0) {
    iVar1 = iVar1 + 2;
    param_1 = param_1 << 2;
  }
  if ((-1 < (int)param_1) && (iVar1 = iVar1 + 1, (param_1 & 0x40000000) == 0)) {
    return 0x20;
  }
  return iVar1;
}
