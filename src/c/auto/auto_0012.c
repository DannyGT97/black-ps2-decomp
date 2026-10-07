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


/* ADDR 001207b8 */
void fn_001207b8(void)

{
  fn_0011d490();
  return;
}


/* ADDR 001207d8 */
void fn_001207d8(undefined8 param_1)

{
  fn_0011d430(param_1,4);
  return;
}


/* ADDR 00120cb0 */
void fn_00120cb0(void)

{
  fn_0011d490();
  return;
}


/* ADDR 00120cd0 */
void fn_00120cd0(undefined8 param_1)

{
  fn_0011d430(param_1,1);
  return;
}


/* ADDR 001215e0 */
void fn_001215e0(void)

{
  fn_0011d490();
  return;
}


/* ADDR 00123960 */
void fn_00123960(void)

{
  fn_00123988();
  return;
}


/* ADDR 00124090 */
void fn_00124090(int param_1,undefined8 param_2)

{
  fn_0035d1a0(param_1 + 8,param_2,0x50);
  return;
}


/* ADDR 00124708 */
undefined4 fn_00124708(int param_1)

{
  fn_00124260(param_1 + 0x10);
  return 1;
}


/* ADDR 00125950 */
void fn_00125950(void)

{
  fn_001255b8(1,0xffff);
  return;
}


/* ADDR 00125c38 */
void fn_00125c38(void)

{
  fn_00125b18(1,0xffff);
  return;
}


/* ADDR 00125e40 */
undefined4 fn_00125e40(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 0012fe30 */
undefined4 fn_0012fe30(void)

{
  fn_00165b98();
  return 1;
}


/* ADDR 00121c08 */
void fn_00121c08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00107d20(0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}


/* ADDR 00122708 */
void fn_00122708(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00107d20(0x280);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


/* ADDR 00123bf0 */
bool fn_00123bf0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)fn_00123c90(param_1,7,param_2);
  return 1 < *piVar1;
}

extern int DAT_003bcaa0;
/* ADDR 00124e48 */
void fn_00124e48(int param_1,int param_2)

{
  fn_0026bbc0(*(undefined4 *)(param_1 + 0xc),(&DAT_003bcaa0)[param_2]);
  return;
}

extern int DAT_0040f4c0;
/* ADDR 001217d0 */
undefined4 fn_001217d0(int param_1)

{
  fn_002123f0(param_1 + 0xc);
  fn_001b0a20(DAT_0040f4c0 + 0xd290);
  return 1;
}


/* ADDR 00121bd0 */
undefined4 fn_00121bd0(int param_1)

{
  fe_FEDiffMode_0020f920(param_1 + 8);
  fe_FEInvertLookFlag_002105f8(param_1 + 0xc);
  return 1;
}


/* ADDR 00124048 */
void fn_00124048(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  fn_0026f340(auStack_30);
  uVar1 = fn_0027f640(auStack_30);
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 0x6a5) = 0;
  return;
}

extern int DAT_0040f0e0;
/* ADDR 0012d458 */
void fn_0012d458(void)

{
  long lVar1;
  
  lVar1 = fn_00103860(DAT_0040f0e0);
  if (lVar1 != 0) {
    fn_00103848(DAT_0040f0e0);
  }
  return;
}

extern int DAT_0040f0e0;
/* ADDR 00121af8 */
undefined4 fn_00121af8(int param_1)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x210c0) = 0;
  fe_FEDiffMode_0020f6c8(param_1 + 8);
  fe_FEInvertLookFlag_00210450(param_1 + 0xc);
  return 1;
}
