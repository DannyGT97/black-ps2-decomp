/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00341b48 */
undefined4 fn_00341b48(void)

{
  return 1;
}


/* ADDR 003438d8 */
void fn_003438d8(void)

{
  return;
}


/* ADDR 003487e0 */
undefined4 fn_003487e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* ADDR 003487e8 */
int fn_003487e8(int param_1)

{
  return param_1 + 0x14;
}


/* ADDR 0034b5a8 */
undefined4 fn_0034b5a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* ADDR 00343508 */
undefined4 fn_00343508(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}

extern int DAT_003d1b7c;
/* ADDR 00343f38 */
undefined4 fn_00343f38(void)

{
  return DAT_003d1b7c;
}

extern int DAT_0046a500;
/* ADDR 003461e0 */
void fn_003461e0(void)

{
  DAT_0046a500 = 0;
  return;
}

extern int DAT_003d24c4;
/* ADDR 00347948 */
void fn_00347948(undefined4 param_1)

{
  DAT_003d24c4 = param_1;
  return;
}

extern int DAT_003d2b04;
/* ADDR 00348a28 */
undefined4 fn_00348a28(void)

{
  return DAT_003d2b04;
}


/* ADDR 003487d0 */
float fn_003487d0(int param_1)

{
  return (float)*(int *)(param_1 + 0x14);
}


/* ADDR 00349278 */
void fn_00349278(int param_1)

{
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0xffffffff;
  return;
}


/* ADDR 003492e0 */
void fn_003492e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x99c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}

extern int DAT_003d2b00;
extern int DAT_003d2b04;
/* ADDR 00348a10 */
void fn_00348a10(undefined4 param_1,undefined4 param_2)

{
  DAT_003d2b00 = param_1;
  DAT_003d2b04 = param_2;
  return;
}


/* ADDR 003477f0 */
void fn_003477f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x5c) < 9) {
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58)) = param_2;
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58) + 4) = param_3;
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58) + 8) = param_4;
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + 1;
  }
  return;
}
