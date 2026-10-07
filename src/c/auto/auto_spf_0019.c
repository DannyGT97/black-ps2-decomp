/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"

/* ---- */
void fn_00198568(void);

/* ADDR 001994c0 */
void fn_001994c0(int *param_1)

{
  fn_00198568();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  return;
}

/* ---- */
void fn_00193988(void);

/* ADDR 001971a0 */
void fn_001971a0(int *param_1)

{
  fn_00193988();
  if ((char)param_1[9] != '\0') {
    *(undefined1 *)(*(int *)(*param_1 + 0x7c) + 0x3b8) = 0;
  }
  return;
}

/* ---- */
void fn_00187fe0(undefined1 *param_1,undefined4 param_2);
void fn_00193980(void);

/* ADDR 001963a8 */
void fn_001963a8(int *param_1)

{
  fn_00193980();
  fn_00187fe0(*param_1 + 0x290,1);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  return;
}

/* ---- */
void fn_00180cc8(int param_1,undefined1 param_2);
void fn_001825b0(undefined8 param_1);
void fn_00193988(void);

/* ADDR 00194a38 */
void fn_00194a38(int *param_1)

{
  fn_00193988();
  fn_00180cc8(*param_1 + 0xb30,0);
  *(undefined1 *)(*param_1 + 0x845) = 0;
  fn_001825b0(*param_1 + 0x810);
  return;
}

/* ---- */
void fn_001825b0(undefined8 param_1);
void fn_00187fe0(undefined1 *param_1,undefined4 param_2);
void fn_00193980(void);

/* ADDR 001964e8 */
void fn_001964e8(int *param_1)

{
  fn_00193980();
  fn_00187fe0(*param_1 + 0x290,0);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  fn_001825b0(*param_1 + 0x810);
  return;
}

/* ---- */
void fn_00182318(int param_1,undefined1 param_2);
void fn_00188148(int param_1,undefined1 param_2);
void fn_00193988(void);

/* ADDR 00197d48 */
void fn_00197d48(int *param_1)

{
  fn_00193988();
  fn_00182318(*param_1 + 0x810,1);
  fn_00188148(*param_1 + 0x290,0);
  *(undefined4 *)(*param_1 + 0x4c) = 0;
  return;
}

/* ---- */
void fn_00173640(float param_1,float *param_2);
void fn_00173690(undefined4 *param_1);
void fn_001825b0(undefined8 param_1);
void fn_00187fe0(undefined1 *param_1,undefined4 param_2);
void fn_00193980(void);

/* ADDR 00194420 */
void fn_00194420(int *param_1)

{
  fn_00193980();
  fn_00173690(param_1 + 4);
  fn_00173640(0,param_1 + 3);
  param_1[2] = 0;
  fn_00173690(param_1 + 5);
  fn_00187fe0(*param_1 + 0x290,0);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  fn_001825b0(*param_1 + 0x810);
  return;
}
