/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 001229f8 */
undefined4 fn_001229f8(void)

{
  return 8;
}


/* ADDR 00122df0 */
void fn_00122df0(void)

{
  return;
}


/* ADDR 00123980 */
undefined8 fn_00123980(void)

{
  return 0;
}


/* ADDR 00123bc8 */
undefined8 fn_00123bc8(void)

{
  return 0;
}


/* ADDR 00123ca8 */
undefined8 fn_00123ca8(void)

{
  return 0;
}


/* ADDR 00123cb0 */
undefined8 fn_00123cb0(void)

{
  return 0;
}


/* ADDR 00123cb8 */
undefined8 fn_00123cb8(void)

{
  return 0;
}


/* ADDR 00123cc8 */
undefined8 fn_00123cc8(void)

{
  return 0;
}


/* ADDR 00123cd0 */
undefined8 fn_00123cd0(void)

{
  return 0;
}


/* ADDR 001240b0 */
void fn_001240b0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6a5) = param_2;
  return;
}


/* ADDR 00124258 */
void fn_00124258(void)

{
  return;
}


/* ADDR 00124728 */
void fn_00124728(void)

{
  return;
}


/* ADDR 001250c8 */
void fn_001250c8(void)

{
  return;
}


/* ADDR 00125c58 */
void fn_00125c58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}


/* ADDR 00125d10 */
void fn_00125d10(void)

{
  return;
}


/* ADDR 001264c0 */
undefined4 fn_001264c0(void)

{
  return 1;
}


/* ADDR 001282b0 */
undefined4 fn_001282b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}


/* ADDR 0012f058 */
undefined4 fn_0012f058(void)

{
  return 1;
}


/* ADDR 0012f4e8 */
undefined4 fn_0012f4e8(void)

{
  return 1;
}

extern int DAT_003bcac8;
/* ADDR 00124d98 */
void fn_00124d98(undefined8 param_1,undefined4 param_2)

{
  DAT_003bcac8 = param_2;
  return;
}


/* ADDR 0012e978 */
bool fn_0012e978(int param_1)

{
  return *(char *)(param_1 + 0x39) != '\0';
}


/* ADDR 00121ef0 */
void fn_00121ef0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_2;
  return;
}


/* ADDR 00124080 */
void fn_00124080(float param_1,int param_2)

{
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + param_1;
  return;
}


/* ADDR 001282d0 */
void fn_001282d0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  return;
}


/* ADDR 0012eeb8 */
void fn_0012eeb8(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  return;
}

extern int DAT_003bcac8;
/* ADDR 00124a58 */
void fn_00124a58(undefined8 param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + DAT_003bcac8) = param_3;
  return;
}


/* ADDR 0012eec8 */
void fn_0012eec8(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  return;
}


/* ADDR 0012bdf0 */
void fn_0012bdf0(int param_1,int param_2)

{
  if ((*(uint *)(param_1 + 0x5ab0) != (uint)*(byte *)(*(int *)(param_1 + 0x5ab4) + 0x11)) &&
     (*(uint *)(param_1 + 0x5ab0) == param_2 - 1U)) {
    *(undefined4 *)(param_1 + 0x5aa8) = 1;
  }
  return;
}


/* ADDR 001225b8 */
void fn_001225b8(int *param_1,ulong param_2)

{
  int iVar1;
  
  if ((param_2 & 4) != 0) {
    *(char *)(*param_1 + 0x17) = *(char *)(*param_1 + 0x17) + '\x01';
    return;
  }
  if ((param_2 & 8) != 0) {
    *(char *)(*param_1 + 0x18) = *(char *)(*param_1 + 0x18) + '\x01';
    return;
  }
  if ((param_2 & 0x10) != 0) {
    *(char *)(*param_1 + 0x19) = *(char *)(*param_1 + 0x19) + '\x01';
    return;
  }
  if ((param_2 & 2) != 0) {
    *(char *)(*param_1 + 0x16) = *(char *)(*param_1 + 0x16) + '\x01';
    return;
  }
  iVar1 = *param_1;
  if ((param_2 & 0x20) != 0) {
    *(char *)(iVar1 + 0x1a) = *(char *)(iVar1 + 0x1a) + '\x01';
    return;
  }
  *(char *)(iVar1 + 0x15) = *(char *)(iVar1 + 0x15) + '\x01';
  return;
}
