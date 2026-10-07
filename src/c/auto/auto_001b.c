/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001b0068 */
undefined4 fn_001b0068(void)

{
  return 1;
}


/* ADDR 001b0f48 */
void fn_001b0f48(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


/* ADDR 001b0fc0 */
void fn_001b0fc0(void)

{
  return;
}


/* ADDR 001b0fc8 */
undefined4 fn_001b0fc8(void)

{
  return 1;
}


/* ADDR 001b2438 */
undefined4 fn_001b2438(void)

{
  return 1;
}


/* ADDR 001b2b60 */
void fn_001b2b60(void)

{
  return;
}


/* ADDR 001b3d38 */
void fn_001b3d38(void)

{
  return;
}


/* ADDR 001b5570 */
undefined4 fn_001b5570(void)

{
  return 1;
}


/* ADDR 001b6908 */
void fn_001b6908(void)

{
  return;
}


/* ADDR 001b8630 */
void fn_001b8630(void)

{
  return;
}


/* ADDR 001b8638 */
undefined4 fn_001b8638(void)

{
  return 1;
}


/* ADDR 001be2e0 */
void fn_001be2e0(void)

{
  return;
}


/* ADDR 001be938 */
void fn_001be938(void)

{
  return;
}


/* ADDR 001becc8 */
undefined4 fn_001becc8(void)

{
  return 1;
}


/* ADDR 001bd610 */
bool fn_001bd610(int param_1)

{
  return *(char *)(param_1 + 0xc9) < '\x03';
}


/* ADDR 001bcdd8 */
undefined4 fn_001bcdd8(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 3;
  return 1;
}


/* ADDR 001b10f8 */
void fn_001b10f8(int param_1)

{
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x4c) - *(float *)(*(int *)(param_1 + 0x40) + 8)
  ;
  return;
}


/* ADDR 001b0aa8 */
void fn_001b0aa8(void)

{
  fn_001b0c88();
  return;
}


/* ADDR 001b7f08 */
void fn_001b7f08(void)

{
  fn_001b7f28();
  return;
}


/* ADDR 001b3d18 */
undefined4 fn_001b3d18(void)

{
  fn_001b3cd8();
  return 1;
}


/* ADDR 001be2f0 */
undefined4 fn_001be2f0(void)

{
  fn_001be890();
  return 1;
}


/* ADDR 001be310 */
undefined4 fn_001be310(void)

{
  fn_001be890();
  return 1;
}


/* ADDR 001be940 */
undefined4 fn_001be940(void)

{
  fn_001beb50();
  return 1;
}


/* ADDR 001beb28 */
undefined4 fn_001beb28(void)

{
  fn_001beb50();
  return 1;
}


/* ADDR 001b86d0 */
void fn_001b86d0(int param_1)

{
  fn_001b7f28(param_1 + 0x11604);
  return;
}


/* ADDR 001b1110 */
void fn_001b1110(int param_1)

{
  fn_001b10f8();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


/* ADDR 001b1dc0 */
void fn_001b1dc0(int param_1)

{
  fn_001b2b68(param_1 + 0x33c40);
  fn_001b5028(param_1 + 0x512e0);
  return;
}


/* ADDR 001b79c0 */
void fn_001b79c0(int param_1,undefined8 param_2,int param_3)

{
  fn_001b7a70(param_1,*(undefined4 *)(param_3 * 4 + *(int *)(*(int *)(param_1 + 0x1a010) + 0x24)),
               param_2,0);
  return;
}

extern int DAT_0040f4c0;
/* ADDR 001b2b68 */
void fn_001b2b68(undefined8 param_1)

{
  fn_001d3090(*(undefined4 *)(DAT_0040f4c0 + 0xd540));
  fn_001b2bc0(param_1);
  fn_001b2c40(param_1);
  fn_001b2cd0(param_1);
  fn_001d3368();
  return;
}
