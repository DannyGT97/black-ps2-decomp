/* Funciones reconstruidas automaticamente (AutoMatch.ps1) a partir del pseudo-C de Ghidra; verificadas byte a byte. */
#include "auto_types.h"


/* ADDR 002e95a0 */
void fn_002e95a0(int param_1,uint param_2,undefined4 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 8))) {
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x24)) = param_3;
  }
  return;
}


/* ADDR 002e1038 */
void fn_002e1038(void)

{
  fn_002ea388();
  return;
}


/* ADDR 002e1058 */
void fn_002e1058(void)

{
  fn_002ebe90();
  return;
}


/* ADDR 002e1078 */
void fn_002e1078(void)

{
  fn_002ea610();
  return;
}


/* ADDR 002e1098 */
void fn_002e1098(void)

{
  fn_002ebf58();
  return;
}


/* ADDR 002e10d8 */
void fn_002e10d8(void)

{
  fn_002e3928();
  return;
}


/* ADDR 002e10f8 */
void fn_002e10f8(void)

{
  fn_002e3d28();
  return;
}


/* ADDR 002ea218 */
void fn_002ea218(void)

{
  fn_0029da28();
  return;
}


/* ADDR 002ea238 */
void fn_002ea238(void)

{
  fn_0029dc18();
  return;
}


/* ADDR 002e1208 */
void fn_002e1208(long param_1)

{
  if (param_1 != 0) {
    fn_002ea898();
  }
  return;
}


/* ADDR 002e1228 */
void fn_002e1228(long param_1)

{
  if (param_1 != 0) {
    fn_002eaac8();
  }
  return;
}


/* ADDR 002e4198 */
void fn_002e4198(void)

{
  fn_002e3f28(1,0xffff);
  return;
}


/* ADDR 002e41b8 */
void fn_002e41b8(void)

{
  fn_002e3f28(0,0xffff);
  return;
}


/* ADDR 002e5288 */
void fn_002e5288(void)

{
  fn_002e5178(1,0xffff);
  return;
}


/* ADDR 002e52a8 */
void fn_002e52a8(void)

{
  fn_002e5178(0,0xffff);
  return;
}


/* ADDR 002e6f90 */
void fn_002e6f90(int param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}


/* ADDR 002e7008 */
void fn_002e7008(int param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x14))(param_2);
  return;
}


/* ADDR 002e72d0 */
void fn_002e72d0(void)

{
  fn_002e6cf0(1,0xffff);
  return;
}


/* ADDR 002e74a0 */
void fn_002e74a0(void)

{
  CNearestPoint_002e72f0(1,0xffff);
  return;
}


/* ADDR 002e74c0 */
void fn_002e74c0(void)

{
  CNearestPoint_002e72f0(0,0xffff);
  return;
}


/* ADDR 002ea368 */
void fn_002ea368(void)

{
  fn_002ea2f8(1,0xffff);
  return;
}


/* ADDR 002ecb40 */
void fn_002ecb40(void)

{
  CTeam_002ec8a0(1,0xffff);
  return;
}


/* ADDR 002ecb60 */
void fn_002ecb60(void)

{
  CTeam_002ec8a0(0,0xffff);
  return;
}


/* ADDR 002e4048 */
undefined8 fn_002e4048(undefined8 param_1)

{
  fn_002e4070();
  return param_1;
}


/* ADDR 002e4ca8 */
void fn_002e4ca8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  }
  return;
}

extern int DAT_003c9594;
extern int DAT_003c9ed4;
/* ADDR 002e9d10 */
void fn_002e9d10(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = fn_002e4c60(param_2);
  if (uVar1 < *(uint *)(DAT_003c9ed4 + 0x10)) {
    DAT_003c9594 = uVar1;
  }
  return;
}


/* ADDR 002e71e0 */
long fn_002e71e0(int param_1)

{
  long lVar1;
  
  lVar1 = fn_002e5e58();
  if (lVar1 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return lVar1;
}


/* ADDR 002e13b8 */
undefined8 fn_002e13b8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = fn_002e2d40();
  if (param_2 != 0) {
    fn_002e3578(uVar1,param_2);
  }
  if (param_3 != 0) {
    fn_002e3630(uVar1,param_3);
  }
  if (param_4 != 0) {
    fn_002e36e8(uVar1,param_4);
  }
  return uVar1;
}
