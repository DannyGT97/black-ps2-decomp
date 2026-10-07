/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 0023eac8 */
void fn_0023eac8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_3 + 0xc) = param_2;
  *(int *)(param_3 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_3;
  }
  *(int *)(*(int *)(param_3 + 0xc) + 8) = param_3;
  return;
}


/* ADDR 00233cf8 */
void fn_00233cf8(int param_1)

{
  fn_00241228(param_1 + 0x24);
  return;
}


/* ADDR 00234738 */
void fn_00234738(undefined8 param_1,undefined8 param_2)

{
  fn_002345c0(param_1,param_2,1);
  return;
}


/* ADDR 0023bca0 */
void fn_0023bca0(void)

{
  fn_0023bc28();
  return;
}


/* ADDR 00231338 */
void fn_00231338(int param_1)

{
  fn_00241128(param_1 + 0x24,0);
  return;
}


/* ADDR 0023bcc0 */
bool fn_0023bcc0(void)

{
  long lVar1;
  
  lVar1 = fn_0023bc28();
  return lVar1 != 0;
}


/* ADDR 0023bce0 */
void fn_0023bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_00237c18(param_2,param_3);
  return;
}


/* ADDR 0023b468 */
void fn_0023b468(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 != 0) && (iVar1 != -0x45520ff3)) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8));
  }
  return;
}


/* ADDR 0023b4b0 */
void fn_0023b4b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else if (iVar1 == -0x45520ff3) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x18));
    iVar1 = *(int *)(param_1 + 0x44);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


/* ADDR 0023e958 */
void fn_0023e958(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(*param_1 + 8);
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar3[1];
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        fn_00386668(puVar2,0x1c);
        puVar3[1] = 0;
      }
      fn_00386698(puVar3,0x14);
    }
  }
  return;
}


/* ADDR 00232958 */
void fn_00232958(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2] + 5;
  if (puVar1 == (undefined4 *)*param_1 + param_1[4] * 5) {
    puVar1 = (undefined4 *)*param_1;
  }
  if (puVar1 != (undefined4 *)param_1[1]) {
    *(undefined4 *)param_1[2] = 1;
    *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(*(int *)(param_3 + 0x48) + 0x28);
    *(undefined4 *)(param_1[2] + 0xc) = param_2;
    *(int *)(param_1[2] + 0x10) = param_3;
    (**(code **)(*(int *)(param_3 + 4) + 0xc))(param_3 + *(short *)(*(int *)(param_3 + 4) + 8));
    *(undefined4 *)(param_1[2] + 4) = param_4;
    param_1[2] = puVar1;
  }
  return;
}
