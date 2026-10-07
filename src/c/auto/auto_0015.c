/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 00152690 */
undefined8 fn_00152690(void)

{
  return 0;
}


/* ADDR 001531b8 */
void fn_001531b8(void)

{
  return;
}


/* ADDR 001531c0 */
undefined4 fn_001531c0(void)

{
  return 1;
}


/* ADDR 001536b0 */
void fn_001536b0(void)

{
  return;
}


/* ADDR 001551a0 */
void fn_001551a0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xe) = param_2;
  return;
}


/* ADDR 00158e80 */
void fn_00158e80(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}


/* ADDR 0015b8f0 */
void fn_0015b8f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x200) = 0;
  return;
}


/* ADDR 0015d3d8 */
void fn_0015d3d8(int param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}


/* ADDR 00156e70 */
void fn_00156e70(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0xb;
  return;
}


/* ADDR 00156e80 */
void fn_00156e80(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 9;
  return;
}


/* ADDR 00156f00 */
undefined4 fn_00156f00(int param_1)

{
  return **(undefined4 **)(param_1 + 0xf4);
}


/* ADDR 001580e0 */
undefined2 fn_001580e0(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 0xf4) + 0x18);
}


/* ADDR 0015a938 */
bool fn_0015a938(int param_1)

{
  return *(short *)(param_1 + 0x18) < 1;
}


/* ADDR 00158078 */
bool fn_00158078(int param_1)

{
  return *(int *)(param_1 + 0xd8) == 4;
}


/* ADDR 00158088 */
bool fn_00158088(int param_1)

{
  return *(int *)(param_1 + 0xd8) == 1;
}

extern int DAT_0040f540;
/* ADDR 0015bf38 */
undefined4 fn_0015bf38(void)

{
  return *(undefined4 *)(*(int *)(*(int *)(DAT_0040f540 + 0x7c) + 8) + 0x1b4);
}


/* ADDR 0015d210 */
int fn_0015d210(int *param_1,int param_2)

{
  return *(int *)(*param_1 + 4) + ((param_2 << 0x18) >> 0x13);
}


/* ADDR 0015d228 */
undefined4 fn_0015d228(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 8);
}


/* ADDR 0015d288 */
undefined4 fn_0015d288(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 0x10);
}


/* ADDR 0015d2a8 */
undefined4 fn_0015d2a8(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 0x14);
}


/* ADDR 0015d2c8 */
undefined4 fn_0015d2c8(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 0x18);
}


/* ADDR 00158098 */
undefined4 fn_00158098(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0xd8) == 1) || (*(int *)(param_1 + 0xd8) == 8)) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ADDR 00155140 */
ushort fn_00155140(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  param_3 = param_3 & 0xff;
  puVar2 = (ushort *)(param_1 + param_2 * 2);
  if (*puVar2 < param_3) {
    uVar1 = *puVar2;
    *puVar2 = 0;
    return uVar1;
  }
  *puVar2 = *puVar2 - param_3;
  return param_3;
}
