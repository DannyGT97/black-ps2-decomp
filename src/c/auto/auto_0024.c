/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00241268 */
undefined4 fn_00241268(undefined4 *param_1)

{
  return *param_1;
}


/* ADDR 00241c40 */
void fn_00241c40(void)

{
  return;
}


/* ADDR 0024f760 */
int fn_0024f760(int param_1)

{
  return param_1 + 8;
}


/* ADDR 00244cd8 */
void fn_00244cd8(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}


/* ADDR 00244d78 */
void fn_00244d78(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}


/* ADDR 00244d88 */
void fn_00244d88(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


/* ADDR 0024f538 */
undefined4 fn_0024f538(uint *param_1)

{
  switch(*param_1 >> 0x19) {
  case 1:
  case 9:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x21:
  case 0x24:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    return 1;
  default:
    return 0;
  }
}


/* ADDR 002406e0 */
void fn_002406e0(undefined8 param_1,undefined4 *param_2)

{
  fn_002406a0(param_1,*param_2);
  return;
}


/* ADDR 00241270 */
void fn_00241270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_002405e8(param_1,param_3);
  return;
}


/* ADDR 0024f790 */
void fn_0024f790(int param_1)

{
  fn_002487e0(param_1 + 8);
  return;
}


/* ADDR 0024f7b0 */
void fn_0024f7b0(void)

{
  fn_0024b3b0();
  return;
}


/* ADDR 00249cc8 */
undefined8 fn_00249cc8(undefined8 param_1)

{
  fn_00249cf0();
  return param_1;
}


/* ADDR 00241c48 */
void fn_00241c48(undefined8 param_1,uint *param_2)

{
  if (((int)*param_2 >> 1 & 1U) == 0) {
    *param_2 = *param_2 | 2;
    (**(code **)(param_2[1] + 0x74))((int)param_2 + (int)*(short *)(param_2[1] + 0x70));
  }
  return;
}
