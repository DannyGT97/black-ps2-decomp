// ==== FUN_002d77a0 @ 002d77a0 ====

void FUN_002d77a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_0035f630();
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = iVar3 % *(int *)(iVar2 + 0x14);
  if (*(int *)(iVar2 + 0x14) == 0) {
    trap(7);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (uVar1 < *(uint *)(iVar2 + 0xc)) {
    piVar4 = (int *)(uVar1 * 0x14 + *(int *)(iVar2 + 0x18));
    if (*piVar4 == -1) {
      piVar4 = (int *)0x0;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  *(int *)(param_1 + 0x10) = piVar4[1];
  *(int *)(param_1 + 0x14) = piVar4[2];
  *(int *)(param_1 + 0x18) = piVar4[3];
  return;
}


// ==== FUN_002d7840 @ 002d7840 ====
// GLOBAL DAT_003c9ed4 undefined4

void FUN_002d7840(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar1 = DAT_003c9ed4;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  lVar2 = FUN_002ec058(uVar1,0x452158);
  if ((lVar2 != 0) && (lVar3 = FUN_002ec058(DAT_003c9ed4,0x450fd8), lVar3 != 0)) {
    iVar6 = (int)lVar2;
    uVar5 = 0;
    if (*(uint *)(iVar6 + 8) != 0) {
      iVar4 = *(int *)(iVar6 + 4);
      while( true ) {
        iVar4 = *(int *)(uVar5 * 4 + iVar4);
        uVar5 = uVar5 + 1;
        if (*(int *)(iVar4 + 0x84) == *(int *)(param_1 + 0x28)) break;
        if (*(uint *)(iVar6 + 8) <= uVar5) {
          return;
        }
        iVar4 = *(int *)(iVar6 + 4);
      }
      iVar6 = *(int *)lVar3;
      lVar2 = (**(code **)(iVar6 + 0x3c))
                        ((int)(int *)lVar3 + (int)*(short *)(iVar6 + 0x38),iVar4 + 4,param_1 + 0xc);
      if (lVar2 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      }
    }
  }
  return;
}


// ==== FUN_002d7930 @ 002d7930 ====

void FUN_002d7930(void)

{
  CWanderAgent_002d74a0(1,0xffff);
  return;
}


// ==== FUN_002d7950 @ 002d7950 ====

void FUN_002d7950(void)

{
  CWanderAgent_002d74a0(0,0xffff);
  return;
}


// ==== FUN_002d7970 @ 002d7970 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e3d10 undefined

undefined4 * FUN_002d7970(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e3d10;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionAcceleration_002d79e0 @ 002d79e0 ====
// GLOBAL DAT_0044f588 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionAcceleration" */

void CActionAcceleration_002d79e0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f588 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44f478,0x4047b8,0x2d7970);
    }
  }
  return;
}


// ==== FUN_002d7a38 @ 002d7a38 ====

undefined8 FUN_002d7a38(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
  }
  return param_1;
}


// ==== FUN_002d7ab8 @ 002d7ab8 ====

void FUN_002d7ab8(void)

{
  CActionAcceleration_002d79e0(1,0xffff);
  return;
}


// ==== FUN_002d7ad8 @ 002d7ad8 ====

void FUN_002d7ad8(void)

{
  CActionAcceleration_002d79e0(0,0xffff);
  return;
}


// ==== FUN_002d7af8 @ 002d7af8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e3f30 undefined

undefined4 * FUN_002d7af8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e3f30;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionCrouch_002d7b68 @ 002d7b68 ====
// GLOBAL DAT_0044f6a0 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionCrouch" */

void CActionCrouch_002d7b68(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f6a0 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44f590,0x404880,0x2d7af8);
    }
  }
  return;
}


// ==== FUN_002d7bc0 @ 002d7bc0 ====

undefined8 FUN_002d7bc0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar2 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar4 = (int *)param_1;
  lVar3 = (**(code **)(*piVar4 + 0x1c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x18));
  if (lVar2 == lVar3) {
    iVar1 = param_2[2];
    *(undefined1 *)(piVar4 + 1) = 1;
    *(char *)(piVar4 + 2) = (char)iVar1;
  }
  return param_1;
}


// ==== FUN_002d7c40 @ 002d7c40 ====

void FUN_002d7c40(void)

{
  CActionCrouch_002d7b68(1,0xffff);
  return;
}


// ==== FUN_002d7c60 @ 002d7c60 ====

void FUN_002d7c60(void)

{
  CActionCrouch_002d7b68(0,0xffff);
  return;
}


// ==== FUN_002d7c80 @ 002d7c80 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4070 undefined

undefined4 * FUN_002d7c80(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4070;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionJump_002d7cf0 @ 002d7cf0 ====
// GLOBAL DAT_0044f7b8 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionJump" */

void CActionJump_002d7cf0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f7b8 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44f6a8,0x404938,0x2d7c80);
    }
  }
  return;
}


// ==== FUN_002d7d48 @ 002d7d48 ====

undefined8 FUN_002d7d48(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar2 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar4 = (int *)param_1;
  lVar3 = (**(code **)(*piVar4 + 0x1c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x18));
  if (lVar2 == lVar3) {
    iVar1 = param_2[2];
    *(undefined1 *)(piVar4 + 1) = 1;
    *(char *)(piVar4 + 2) = (char)iVar1;
  }
  return param_1;
}


// ==== FUN_002d7dc8 @ 002d7dc8 ====

void FUN_002d7dc8(void)

{
  CActionJump_002d7cf0(1,0xffff);
  return;
}


// ==== FUN_002d7de8 @ 002d7de8 ====

void FUN_002d7de8(void)

{
  CActionJump_002d7cf0(0,0xffff);
  return;
}


// ==== FUN_002d7e08 @ 002d7e08 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e41b0 undefined

undefined4 * FUN_002d7e08(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e41b0;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionRotate_002d7e78 @ 002d7e78 ====
// GLOBAL DAT_0044f8d0 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionRotate" */

void CActionRotate_002d7e78(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f8d0 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44f7c0,0x4049f0,0x2d7e08);
    }
  }
  return;
}


// ==== FUN_002d7ed0 @ 002d7ed0 ====

undefined8 FUN_002d7ed0(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
  }
  return param_1;
}


// ==== FUN_002d7f50 @ 002d7f50 ====

void FUN_002d7f50(void)

{
  CActionRotate_002d7e78(1,0xffff);
  return;
}


// ==== FUN_002d7f70 @ 002d7f70 ====

void FUN_002d7f70(void)

{
  CActionRotate_002d7e78(0,0xffff);
  return;
}


// ==== FUN_002d7f90 @ 002d7f90 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e42f0 undefined

undefined4 * FUN_002d7f90(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x18,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x18,uVar1);
  }
  *apuStack_20[0] = &DAT_003e42f0;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionShoot_002d8000 @ 002d8000 ====
// GLOBAL DAT_0044f9e8 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionShoot" */

void CActionShoot_002d8000(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044f9e8 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44f8d8,0x404aa8,0x2d7f90);
    }
  }
  return;
}


// ==== FUN_002d8058 @ 002d8058 ====

undefined8 FUN_002d8058(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[2] = param_2[2];
    piVar3[3] = param_2[3];
    piVar3[4] = param_2[4];
    *(undefined1 *)(piVar3 + 1) = 1;
    *(char *)(piVar3 + 5) = (char)param_2[5];
  }
  return param_1;
}


// ==== FUN_002d80f8 @ 002d80f8 ====

void FUN_002d80f8(void)

{
  CActionShoot_002d8000(1,0xffff);
  return;
}


// ==== FUN_002d8118 @ 002d8118 ====

void FUN_002d8118(void)

{
  CActionShoot_002d8000(0,0xffff);
  return;
}


// ==== FUN_002d8138 @ 002d8138 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4480 undefined

undefined4 * FUN_002d8138(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4480;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionSpeed_002d81a8 @ 002d81a8 ====
// GLOBAL DAT_0044fb00 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionSpeed" */

void CActionSpeed_002d81a8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044fb00 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44f9f0,0x404b60,0x2d8138);
    }
  }
  return;
}


// ==== FUN_002d8200 @ 002d8200 ====

undefined8 FUN_002d8200(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
  }
  return param_1;
}


// ==== FUN_002d8280 @ 002d8280 ====

void FUN_002d8280(void)

{
  CActionSpeed_002d81a8(1,0xffff);
  return;
}


// ==== FUN_002d82a0 @ 002d82a0 ====

void FUN_002d82a0(void)

{
  CActionSpeed_002d81a8(0,0xffff);
  return;
}


// ==== FUN_002d82c0 @ 002d82c0 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e45c0 undefined

undefined4 * FUN_002d82c0(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e45c0;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionSteering_002d8330 @ 002d8330 ====
// GLOBAL DAT_0044fc18 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionSteering" */

void CActionSteering_002d8330(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044fc18 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x44fb08,0x404c18,0x2d82c0);
    }
  }
  return;
}


// ==== FUN_002d8388 @ 002d8388 ====

undefined8 FUN_002d8388(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
  }
  return param_1;
}


// ==== FUN_002d8408 @ 002d8408 ====

void FUN_002d8408(void)

{
  CActionSteering_002d8330(1,0xffff);
  return;
}


// ==== FUN_002d8428 @ 002d8428 ====

void FUN_002d8428(void)

{
  CActionSteering_002d8330(0,0xffff);
  return;
}


// ==== FUN_002d8448 @ 002d8448 ====
// GLOBAL DAT_0044f478 int
// GLOBAL DAT_00450a58 int
// GLOBAL DAT_0044f590 int
// GLOBAL DAT_00450b70 int
// GLOBAL DAT_00450c88 int
// GLOBAL DAT_0044f6a8 int
// GLOBAL DAT_0044f7c0 int
// GLOBAL DAT_0044f8d8 int
// GLOBAL DAT_0044f9f0 int
// GLOBAL DAT_0044fb08 int
// GLOBAL DAT_00450da0 int
// GLOBAL DAT_0044fd38 int
// GLOBAL DAT_0044ff68 int
// GLOBAL DAT_0044fe50 int
// GLOBAL DAT_00450080 int
// GLOBAL DAT_00450198 int
// GLOBAL DAT_004502b0 int
// GLOBAL DAT_004504e0 int
// GLOBAL DAT_004505f8 int
// GLOBAL DAT_00450828 int
// GLOBAL DAT_00450710 int
// GLOBAL DAT_00450940 int
// GLOBAL DAT_0044fc20 int

undefined4 FUN_002d8448(void)

{
  if ((((((DAT_0044f478 != -1) && (DAT_00450a58 != -1)) && (DAT_0044f590 != -1)) &&
       (((DAT_00450b70 != -1 && (DAT_00450c88 != -1)) &&
        ((DAT_0044f6a8 != -1 && ((DAT_0044f7c0 != -1 && (DAT_0044f8d8 != -1)))))))) &&
      ((DAT_0044f9f0 != -1 &&
       ((((((DAT_0044fb08 != -1 && (DAT_00450da0 != -1)) && (DAT_0044fd38 != -1)) &&
          ((DAT_0044ff68 != -1 && (DAT_0044fe50 != -1)))) &&
         ((DAT_00450080 != -1 && ((DAT_00450198 != -1 && (DAT_004502b0 != -1)))))) &&
        (DAT_004504e0 != -1)))))) &&
     ((((DAT_004505f8 != -1 && (DAT_00450828 != -1)) && (DAT_00450710 != -1)) &&
      ((DAT_00450940 != -1 && (DAT_0044fc20 != -1)))))) {
    return 1;
  }
  return 0;
}


// ==== FUN_002d8578 @ 002d8578 ====

undefined8 FUN_002d8578(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = 0x43340000;
    lVar3 = FUN_002e4ce0(param_2,0x450828);
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)((int)lVar3 + 8);
    }
    iVar1 = (int)param_2;
    uStack_70 = *(undefined4 *)(iVar1 + 0x30);
    uStack_60 = *(undefined4 *)(iVar1 + 0x48);
    uStack_6c = *(undefined4 *)(iVar1 + 0x34);
    uStack_68 = *(undefined4 *)(iVar1 + 0x38);
    uStack_5c = *(undefined4 *)(iVar1 + 0x4c);
    uStack_58 = *(undefined4 *)(iVar1 + 0x50);
    lVar3 = FUN_002e4ce0(param_2,0x44fd38);
    if (lVar3 != 0) {
      iVar1 = (int)lVar3;
      uStack_70 = *(undefined4 *)(iVar1 + 4);
      uStack_6c = *(undefined4 *)(iVar1 + 8);
      uStack_68 = *(undefined4 *)(iVar1 + 0xc);
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      uStack_48 = uStack_68;
    }
    lVar3 = FUN_002e4ce0(param_2,0x44ff68);
    if (lVar3 != 0) {
      iVar1 = (int)lVar3;
      uStack_60 = *(undefined4 *)(iVar1 + 4);
      uStack_5c = *(undefined4 *)(iVar1 + 8);
      uStack_58 = *(undefined4 *)(iVar1 + 0xc);
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      uStack_48 = uStack_58;
    }
    uVar2 = FUN_002e4e28(uVar4,0xbf800000,param_1,&uStack_70,&uStack_60);
  }
  return uVar2;
}


// ==== FUN_002d86a8 @ 002d86a8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4700 undefined

undefined4 * FUN_002d86a8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4700;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CEntityCanFly_002d8718 @ 002d8718 ====
// GLOBAL DAT_0044fd30 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityCanFly" */

void CEntityCanFly_002d8718(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044fd30 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x44fc20,0x404ce8,0x2d86a8);
    }
  }
  return;
}


// ==== FUN_002d8770 @ 002d8770 ====

undefined8 FUN_002d8770(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    *(char *)(piVar3 + 1) = (char)param_2[1];
  }
  return param_1;
}


// ==== FUN_002d87e8 @ 002d87e8 ====

void FUN_002d87e8(void)

{
  CEntityCanFly_002d8718(1,0xffff);
  return;
}


// ==== FUN_002d8808 @ 002d8808 ====

void FUN_002d8808(void)

{
  CEntityCanFly_002d8718(0,0xffff);
  return;
}


// ==== FUN_002d8828 @ 002d8828 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4920 undefined

void FUN_002d8828(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4920;
  return;
}


// ==== CEntityEyePosition_002d8890 @ 002d8890 ====
// GLOBAL DAT_0044fe48 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityEyePosition" */

void CEntityEyePosition_002d8890(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044fe48 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x44fd38,0x404da0,0x2d8828);
    }
  }
  return;
}


// ==== FUN_002d88e8 @ 002d88e8 ====

undefined8 FUN_002d88e8(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
    piVar3[2] = param_2[2];
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002d8978 @ 002d8978 ====

void FUN_002d8978(void)

{
  CEntityEyePosition_002d8890(1,0xffff);
  return;
}


// ==== FUN_002d8998 @ 002d8998 ====

void FUN_002d8998(void)

{
  CEntityEyePosition_002d8890(0,0xffff);
  return;
}


// ==== FUN_002d89b8 @ 002d89b8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4a60 undefined

void FUN_002d89b8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4a60;
  return;
}


// ==== CEntityGunPosition_002d8a20 @ 002d8a20 ====
// GLOBAL DAT_0044ff60 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityGunPosition" */

void CEntityGunPosition_002d8a20(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_0044ff60 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x44fe50,0x404e68,0x2d89b8);
    }
  }
  return;
}


// ==== FUN_002d8a78 @ 002d8a78 ====

undefined8 FUN_002d8a78(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
    piVar3[2] = param_2[2];
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002d8b08 @ 002d8b08 ====

void FUN_002d8b08(void)

{
  CEntityGunPosition_002d8a20(1,0xffff);
  return;
}


// ==== FUN_002d8b28 @ 002d8b28 ====

void FUN_002d8b28(void)

{
  CEntityGunPosition_002d8a20(0,0xffff);
  return;
}


// ==== FUN_002d8b48 @ 002d8b48 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4ba0 undefined

void FUN_002d8b48(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4ba0;
  return;
}


// ==== CEntityHeadDirection_002d8bb0 @ 002d8bb0 ====
// GLOBAL DAT_00450078 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityHeadDirection" */

void CEntityHeadDirection_002d8bb0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450078 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x44ff68,0x404f30,0x2d8b48);
    }
  }
  return;
}


// ==== FUN_002d8c08 @ 002d8c08 ====

undefined8 FUN_002d8c08(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
    piVar3[2] = param_2[2];
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002d8c98 @ 002d8c98 ====

void FUN_002d8c98(void)

{
  CEntityHeadDirection_002d8bb0(1,0xffff);
  return;
}


// ==== FUN_002d8cb8 @ 002d8cb8 ====

void FUN_002d8cb8(void)

{
  CEntityHeadDirection_002d8bb0(0,0xffff);
  return;
}


// ==== FUN_002d8cd8 @ 002d8cd8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4ce0 undefined

void FUN_002d8cd8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4ce0;
  return;
}


// ==== CEntityHearingAcuteness_002d8d40 @ 002d8d40 ====
// GLOBAL DAT_00450190 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityHearingAcuteness" */

void CEntityHearingAcuteness_002d8d40(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450190 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x450080,0x404ff8,0x2d8cd8);
    }
  }
  return;
}


// ==== FUN_002d8d98 @ 002d8d98 ====

undefined8 FUN_002d8d98(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    if (0.0 <= (float)param_2[1]) {
      piVar3[1] = param_2[1];
    }
    else {
      piVar3[1] = 0;
    }
  }
  return param_1;
}


// ==== FUN_002d8e20 @ 002d8e20 ====

void FUN_002d8e20(void)

{
  CEntityHearingAcuteness_002d8d40(1,0xffff);
  return;
}


// ==== FUN_002d8e40 @ 002d8e40 ====

void FUN_002d8e40(void)

{
  CEntityHearingAcuteness_002d8d40(0,0xffff);
  return;
}


// ==== FUN_002d8e60 @ 002d8e60 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003e4e20 undefined

undefined4 * FUN_002d8e60(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar3);
  }
  iVar2 = DAT_003c9ed4;
  fVar4 = 0.0;
  bVar1 = DAT_003c9ed4 != 0;
  *apuStack_20[0] = &DAT_003e4e20;
  if (bVar1) {
    fVar4 = *(float *)(iVar2 + 0xc);
  }
  apuStack_20[0][1] = fVar4 * 1.8;
  return apuStack_20[0];
}


// ==== CEntityHeight_002d8ef8 @ 002d8ef8 ====
// GLOBAL DAT_004502a8 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityHeight" */

void CEntityHeight_002d8ef8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004502a8 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x450198,0x4050c8,0x2d8e60);
    }
  }
  return;
}


// ==== FUN_002d8f50 @ 002d8f50 ====

undefined8 FUN_002d8f50(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
  }
  return param_1;
}


// ==== FUN_002d8fc0 @ 002d8fc0 ====

void FUN_002d8fc0(void)

{
  CEntityHeight_002d8ef8(1,0xffff);
  return;
}


// ==== FUN_002d8fe0 @ 002d8fe0 ====

void FUN_002d8fe0(void)

{
  CEntityHeight_002d8ef8(0,0xffff);
  return;
}


// ==== FUN_002d9000 @ 002d9000 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e4f60 undefined

void FUN_002d9000(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e4f60;
  return;
}


// ==== CEntityKneePosition_002d9068 @ 002d9068 ====
// GLOBAL DAT_004503c0 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityKneePosition" */

void CEntityKneePosition_002d9068(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004503c0 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x4502b0,0x405180,0x2d9000);
    }
  }
  return;
}


// ==== FUN_002d90c0 @ 002d90c0 ====

undefined8 FUN_002d90c0(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
    piVar3[2] = param_2[2];
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002d9150 @ 002d9150 ====

void FUN_002d9150(void)

{
  CEntityKneePosition_002d9068(1,0xffff);
  return;
}


// ==== FUN_002d9170 @ 002d9170 ====

void FUN_002d9170(void)

{
  CEntityKneePosition_002d9068(0,0xffff);
  return;
}


// ==== FUN_002d9190 @ 002d9190 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003e50a0 undefined

undefined4 * FUN_002d9190(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar3);
  }
  iVar2 = DAT_003c9ed4;
  fVar4 = 0.0;
  bVar1 = DAT_003c9ed4 != 0;
  *apuStack_20[0] = &DAT_003e50a0;
  if (bVar1) {
    fVar4 = *(float *)(iVar2 + 0xc);
  }
  apuStack_20[0][1] = fVar4 * 0.7;
  return apuStack_20[0];
}


// ==== CEntityLength_002d9228 @ 002d9228 ====
// GLOBAL DAT_004504d8 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityLength" */

void CEntityLength_002d9228(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004504d8 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x4503c8,0x405248,0x2d9190);
    }
  }
  return;
}


// ==== FUN_002d9280 @ 002d9280 ====

undefined8 FUN_002d9280(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
  }
  return param_1;
}


// ==== FUN_002d92f0 @ 002d92f0 ====

void FUN_002d92f0(void)

{
  CEntityLength_002d9228(1,0xffff);
  return;
}


// ==== FUN_002d9310 @ 002d9310 ====

void FUN_002d9310(void)

{
  CEntityLength_002d9228(0,0xffff);
  return;
}


// ==== FUN_002d9330 @ 002d9330 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003e51e0 undefined

undefined4 * FUN_002d9330(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar3);
  }
  iVar2 = DAT_003c9ed4;
  fVar4 = 0.0;
  bVar1 = DAT_003c9ed4 != 0;
  *apuStack_20[0] = &DAT_003e51e0;
  if (bVar1) {
    fVar4 = *(float *)(iVar2 + 0xc);
  }
  apuStack_20[0][1] = fVar4 * 0.5;
  return apuStack_20[0];
}


// ==== CEntityMaxSpeed_002d93c0 @ 002d93c0 ====
// GLOBAL DAT_004505f0 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityMaxSpeed" */

void CEntityMaxSpeed_002d93c0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004505f0 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x4504e0,0x405300,0x2d9330);
    }
  }
  return;
}


// ==== FUN_002d9418 @ 002d9418 ====

undefined8 FUN_002d9418(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
  }
  return param_1;
}


// ==== FUN_002d9488 @ 002d9488 ====

void FUN_002d9488(void)

{
  CEntityMaxSpeed_002d93c0(1,0xffff);
  return;
}


// ==== FUN_002d94a8 @ 002d94a8 ====

void FUN_002d94a8(void)

{
  CEntityMaxSpeed_002d93c0(0,0xffff);
  return;
}


// ==== FUN_002d94c8 @ 002d94c8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5320 undefined

undefined4 * FUN_002d94c8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar1);
  }
  *apuStack_20[0] = &DAT_003e5320;
  apuStack_20[0][1] = 0xffffffff;
  return apuStack_20[0];
}


// ==== CEntityTeamSide_002d9540 @ 002d9540 ====
// GLOBAL DAT_00450708 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityTeamSide" */

void CEntityTeamSide_002d9540(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450708 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x4505f8,0x4053c0,0x2d94c8);
    }
  }
  return;
}


// ==== FUN_002d9598 @ 002d9598 ====

undefined8 FUN_002d9598(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
  }
  return param_1;
}


// ==== FUN_002d9610 @ 002d9610 ====

void FUN_002d9610(void)

{
  CEntityTeamSide_002d9540(1,0xffff);
  return;
}


// ==== FUN_002d9630 @ 002d9630 ====

void FUN_002d9630(void)

{
  CEntityTeamSide_002d9540(0,0xffff);
  return;
}


// ==== FUN_002d9650 @ 002d9650 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5460 undefined

void FUN_002d9650(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e5460;
  return;
}


// ==== CEntityTorsoOrientation_002d96b8 @ 002d96b8 ====
// GLOBAL DAT_00450820 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityTorsoOrientation" */

void CEntityTorsoOrientation_002d96b8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450820 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x450710,0x405480,0x2d9650);
    }
  }
  return;
}


// ==== FUN_002d9710 @ 002d9710 ====

undefined8 FUN_002d9710(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
    piVar3[2] = param_2[2];
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002d97a0 @ 002d97a0 ====

void FUN_002d97a0(void)

{
  CEntityTorsoOrientation_002d96b8(1,0xffff);
  return;
}


// ==== FUN_002d97c0 @ 002d97c0 ====

void FUN_002d97c0(void)

{
  CEntityTorsoOrientation_002d96b8(0,0xffff);
  return;
}


// ==== FUN_002d97e0 @ 002d97e0 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003e55a0 undefined

undefined4 * FUN_002d97e0(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar3);
  }
  iVar2 = DAT_003c9ed4;
  fVar4 = 0.0;
  bVar1 = DAT_003c9ed4 != 0;
  *apuStack_20[0] = &DAT_003e55a0;
  if (bVar1) {
    fVar4 = *(float *)(iVar2 + 0xc);
  }
  apuStack_20[0][2] = 0x42700000;
  apuStack_20[0][1] = fVar4 * 100.0;
  return apuStack_20[0];
}


// ==== CEntityVisualAcuteness_002d9880 @ 002d9880 ====
// GLOBAL DAT_00450938 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityVisualAcuteness" */

void CEntityVisualAcuteness_002d9880(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450938 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x450828,0x405550,0x2d97e0);
    }
  }
  return;
}


// ==== FUN_002d98d8 @ 002d98d8 ====

undefined8 FUN_002d98d8(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    if (0.0 <= (float)param_2[1]) {
      piVar3[1] = param_2[1];
    }
    else {
      piVar3[1] = 0;
    }
    FUN_002d9970(param_2[2],param_1);
  }
  return param_1;
}


// ==== FUN_002d9970 @ 002d9970 ====

void FUN_002d9970(float param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0.0 <= param_1) && (uVar1 = 0x43b40000, param_1 <= 360.0)) {
    *(float *)(param_2 + 8) = param_1;
    return;
  }
  *(undefined4 *)(param_2 + 8) = uVar1;
  return;
}


// ==== FUN_002d99b8 @ 002d99b8 ====

void FUN_002d99b8(void)

{
  CEntityVisualAcuteness_002d9880(1,0xffff);
  return;
}


// ==== FUN_002d99d8 @ 002d99d8 ====

void FUN_002d99d8(void)

{
  CEntityVisualAcuteness_002d9880(0,0xffff);
  return;
}


// ==== FUN_002d99f8 @ 002d99f8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003e5708 undefined

undefined4 * FUN_002d99f8(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar3);
  }
  iVar2 = DAT_003c9ed4;
  fVar4 = 0.0;
  bVar1 = DAT_003c9ed4 != 0;
  *apuStack_20[0] = &DAT_003e5708;
  if (bVar1) {
    fVar4 = *(float *)(iVar2 + 0xc);
  }
  apuStack_20[0][1] = fVar4 * 0.7;
  return apuStack_20[0];
}


// ==== CEntityWidth_002d9a90 @ 002d9a90 ====
// GLOBAL DAT_00450a50 undefined_*
// GLOBAL DAT_003e4728 undefined

/* Strings referenciadas:
     "CEntityWidth" */

void CEntityWidth_002d9a90(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450a50 = &DAT_003e4728;
    }
    else {
      FUN_002e4dc8(0x450940,0x405618,0x2d99f8);
    }
  }
  return;
}


// ==== FUN_002d9ae8 @ 002d9ae8 ====

undefined8 FUN_002d9ae8(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    piVar3[1] = param_2[1];
  }
  return param_1;
}


// ==== FUN_002d9b58 @ 002d9b58 ====

void FUN_002d9b58(void)

{
  CEntityWidth_002d9a90(1,0xffff);
  return;
}


// ==== FUN_002d9b78 @ 002d9b78 ====

void FUN_002d9b78(void)

{
  CEntityWidth_002d9a90(0,0xffff);
  return;
}


// ==== FUN_002d9b98 @ 002d9b98 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5848 undefined

undefined4 * FUN_002d9b98(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e5848;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionActivate_002d9c08 @ 002d9c08 ====
// GLOBAL DAT_00450b68 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionActivate" */

void CActionActivate_002d9c08(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450b68 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x450a58,0x4056d0,0x2d9b98);
    }
  }
  return;
}


// ==== FUN_002d9c60 @ 002d9c60 ====

undefined8 FUN_002d9c60(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar2 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar4 = (int *)param_1;
  lVar3 = (**(code **)(*piVar4 + 0x1c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x18));
  if (lVar2 == lVar3) {
    iVar1 = param_2[2];
    *(undefined1 *)(piVar4 + 1) = 1;
    *(char *)(piVar4 + 2) = (char)iVar1;
  }
  return param_1;
}


// ==== FUN_002d9ce0 @ 002d9ce0 ====

void FUN_002d9ce0(void)

{
  CActionActivate_002d9c08(1,0xffff);
  return;
}


// ==== FUN_002d9d00 @ 002d9d00 ====

void FUN_002d9d00(void)

{
  CActionActivate_002d9c08(0,0xffff);
  return;
}


// ==== FUN_002d9d20 @ 002d9d20 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5988 undefined

undefined4 * FUN_002d9d20(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e5988;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionHeadRotate_002d9d90 @ 002d9d90 ====
// GLOBAL DAT_00450c80 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionHeadRotate" */

void CActionHeadRotate_002d9d90(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450c80 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x450b70,0x405790,0x2d9d20);
    }
  }
  return;
}


// ==== FUN_002d9de8 @ 002d9de8 ====

undefined8 FUN_002d9de8(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002d9e70 @ 002d9e70 ====

void FUN_002d9e70(void)

{
  CActionHeadRotate_002d9d90(1,0xffff);
  return;
}


// ==== FUN_002d9e90 @ 002d9e90 ====

void FUN_002d9e90(void)

{
  CActionHeadRotate_002d9d90(0,0xffff);
  return;
}


// ==== FUN_002d9eb0 @ 002d9eb0 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5b18 undefined

undefined4 * FUN_002d9eb0(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x10,uVar1);
  }
  *apuStack_20[0] = &DAT_003e5b18;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionTorsoRotate_002d9f20 @ 002d9f20 ====
// GLOBAL DAT_00450d98 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionTorsoRotate" */

void CActionTorsoRotate_002d9f20(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450d98 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x450c88,0x405858,0x2d9eb0);
    }
  }
  return;
}


// ==== FUN_002d9f78 @ 002d9f78 ====

undefined8 FUN_002d9f78(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
    piVar3[3] = param_2[3];
  }
  return param_1;
}


// ==== FUN_002da000 @ 002da000 ====

void FUN_002da000(void)

{
  CActionTorsoRotate_002d9f20(1,0xffff);
  return;
}


// ==== FUN_002da020 @ 002da020 ====

void FUN_002da020(void)

{
  CActionTorsoRotate_002d9f20(0,0xffff);
  return;
}


// ==== FUN_002da040 @ 002da040 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5ca8 undefined

undefined4 * FUN_002da040(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0xc,uVar1);
  }
  *apuStack_20[0] = &DAT_003e5ca8;
  *(undefined1 *)(apuStack_20[0] + 1) = 0;
  return apuStack_20[0];
}


// ==== CActionVerticalSpeed_002da0b0 @ 002da0b0 ====
// GLOBAL DAT_00450eb0 undefined_*
// GLOBAL DAT_003e3d38 undefined

/* Strings referenciadas:
     "CActionVerticalSpeed" */

void CActionVerticalSpeed_002da0b0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450eb0 = &DAT_003e3d38;
    }
    else {
      FUN_002dfeb0(0x450da0,0x405920,0x2da040);
    }
  }
  return;
}


// ==== FUN_002da108 @ 002da108 ====

undefined8 FUN_002da108(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  piVar3 = (int *)param_1;
  lVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18));
  if (lVar1 == lVar2) {
    iVar4 = param_2[2];
    *(undefined1 *)(piVar3 + 1) = 1;
    piVar3[2] = iVar4;
  }
  return param_1;
}


// ==== FUN_002da188 @ 002da188 ====

void FUN_002da188(void)

{
  CActionVerticalSpeed_002da0b0(1,0xffff);
  return;
}


// ==== FUN_002da1a8 @ 002da1a8 ====

void FUN_002da1a8(void)

{
  CActionVerticalSpeed_002da0b0(0,0xffff);
  return;
}


// ==== FUN_002da1c8 @ 002da1c8 ====
// GLOBAL DAT_00450eb8 int
// GLOBAL DAT_00450fd8 int
// GLOBAL DAT_004510f0 int

undefined4 FUN_002da1c8(void)

{
  if (((DAT_00450eb8 != -1) && (DAT_00450fd8 != -1)) && (DAT_004510f0 != -1)) {
    return 1;
  }
  return 0;
}


// ==== FUN_002da208 @ 002da208 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_002da208(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x10,uVar1);
  }
  FUN_002da2a0(auStack_30[0]);
  return;
}


// ==== FUN_002da2a0 @ 002da2a0 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e5de8 undefined

undefined8 FUN_002da2a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [4];
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e5de8;
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x20,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x20,uVar1);
  }
  puVar2[3] = 8;
  puVar2[1] = auStack_30[0];
  puVar2[2] = 0;
  return param_1;
}


// ==== FUN_002da348 @ 002da348 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e5de8 undefined

void FUN_002da348(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar3 = 0;
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e5de8;
  if (puVar4[2] != 0) {
    iVar2 = puVar4[1];
    while( true ) {
      iVar5 = uVar3 * 4;
      piVar1 = *(int **)(iVar5 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar5 + puVar4[1]) = 0;
      if ((uint)puVar4[2] <= uVar3) break;
      iVar2 = puVar4[1];
    }
  }
  (*(code *)PTR_FUN_003c87e0)(puVar4[1]);
  puVar4[1] = 0;
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002da428 @ 002da428 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*

undefined4 FUN_002da428(int param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_a0;
  undefined4 *puStack_9c;
  undefined4 auStack_98 [2];
  
  if (param_2 != 0) {
    uVar9 = 0;
    if (*(int *)(param_1 + 8) == 0) {
LAB_002da4c0:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      while( true ) {
        iVar10 = uVar9 * 4;
        lVar5 = stricmp(param_2,*(int *)(iVar10 + iVar3) + 4);
        uVar9 = uVar9 + 1;
        if (lVar5 == 0) break;
        if (*(uint *)(param_1 + 8) <= uVar9) goto LAB_002da4c0;
        iVar3 = *(int *)(param_1 + 4);
      }
      iVar3 = *(int *)(*(int *)(iVar10 + *(int *)(param_1 + 4)) + 0x84);
    }
    if (iVar3 != 0) {
      return 0;
    }
    uStack_a0 = 0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x114,&uStack_a0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_a0,0x114,uVar6);
    }
    lVar5 = FUN_002df230(uStack_a0);
    lVar7 = FUN_002dd778(lVar5,param_3);
    piVar1 = DAT_003c87e8;
    if (lVar7 != 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar3 << 1;
        puStack_9c = (undefined4 *)0x0;
        iVar10 = *piVar1;
        uVar6 = (**(code **)(iVar10 + 0x34))
                          ((int)piVar1 + (int)*(short *)(iVar10 + 0x30),iVar3 << 3,
                           (uint)&uStack_a0 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_9c,iVar3 << 3,uVar6);
        }
        puVar2 = puStack_9c;
        uVar9 = 0;
        puVar8 = puStack_9c;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            iVar3 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *puVar8 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 4));
            puVar8 = puVar8 + 1;
          } while (uVar9 < *(uint *)(param_1 + 8));
        }
        (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 4));
        *(undefined4 **)(param_1 + 4) = puVar2;
      }
      iVar3 = *(int *)(param_1 + 8);
      iVar10 = *(int *)(param_1 + 4);
      auStack_98[0] = 0;
      uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x88,auStack_98);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_98[0],0x88,uVar6);
      }
      uVar4 = FUN_002dabf0(auStack_98[0],param_2,lVar5);
      *(undefined4 *)(iVar3 * 4 + iVar10) = uVar4;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return 1;
    }
    if (lVar5 != 0) {
      iVar3 = *(int *)lVar5;
      (**(code **)(iVar3 + 0xc))((int)(int *)lVar5 + (int)*(short *)(iVar3 + 8),3);
      return 0;
    }
  }
  return 0;
}


// ==== FUN_002da700 @ 002da700 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*

undefined4 FUN_002da700(int param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puStack_90;
  undefined4 auStack_8c [3];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_1 + 8) == 0) {
LAB_002da798:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      while( true ) {
        iVar8 = uVar7 * 4;
        lVar4 = stricmp(param_2,*(int *)(iVar8 + iVar2) + 4);
        uVar7 = uVar7 + 1;
        if (lVar4 == 0) break;
        if (*(uint *)(param_1 + 8) <= uVar7) goto LAB_002da798;
        iVar2 = *(int *)(param_1 + 4);
      }
      iVar2 = *(int *)(*(int *)(iVar8 + *(int *)(param_1 + 4)) + 0x84);
    }
    uVar3 = 0;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == *(int *)(param_1 + 0xc)) {
        puStack_90 = (undefined4 *)0x0;
        *(int *)(param_1 + 0xc) = iVar2 << 1;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 << 3,
                           &puStack_90);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_90,iVar2 << 3,uVar5);
        }
        puVar1 = puStack_90;
        uVar7 = 0;
        puVar6 = puStack_90;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            iVar2 = uVar7 * 4;
            uVar7 = uVar7 + 1;
            *puVar6 = *(undefined4 *)(iVar2 + *(int *)(param_1 + 4));
            puVar6 = puVar6 + 1;
          } while (uVar7 < *(uint *)(param_1 + 8));
        }
        (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 4));
        *(undefined4 **)(param_1 + 4) = puVar1;
      }
      auStack_8c[0] = 0;
      iVar2 = *(int *)(param_1 + 8);
      iVar8 = *(int *)(param_1 + 4);
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x88,auStack_8c);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_8c[0],0x88,uVar5);
      }
      uVar3 = FUN_002dabf0(auStack_8c[0],param_2,param_3);
      *(undefined4 *)(iVar2 * 4 + iVar8) = uVar3;
      uVar3 = 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return uVar3;
}


// ==== CPathWayManager_002da920 @ 002da920 ====
// GLOBAL DAT_00450fc8 undefined_*
// GLOBAL DAT_003e5e40 undefined

/* Strings referenciadas:
     "CPathWayManager" */

void CPathWayManager_002da920(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00450fc8 = &DAT_003e5e40;
    }
    else {
      FUN_002e7610(0x450eb8,0x405a08,0x2da208,0,0,0);
    }
  }
  return;
}


// ==== FUN_002da980 @ 002da980 ====

bool FUN_002da980(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_002e74e0();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


// ==== FUN_002da9b0 @ 002da9b0 ====

/* Strings referenciadas:
     "PathWay"
     "RawData" */

undefined4 FUN_002da9b0(undefined8 param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar3 = FUN_002e3920(param_2);
    lVar4 = stricmp(uVar3,0x4059f8);
    if (lVar4 != 0) {
      lVar4 = FUN_002e3920(param_2);
      if (lVar4 == 0) {
        return 0;
      }
      pcVar2 = (char *)FUN_002e3920(param_2);
      if (*pcVar2 != '_') {
        return 0;
      }
      return 1;
    }
    iVar1 = *(int *)((int)param_2 + 0xc);
    if (((iVar1 != 0) && (lVar4 = FUN_002e31e0(param_2,0x405a00), lVar4 != 0)) &&
       (lVar4 = FUN_002da428(param_1,iVar1,lVar4), lVar4 != 0)) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002daa70 @ 002daa70 ====

undefined4 FUN_002daa70(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002daae4:
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      lVar3 = stricmp(param_2,*(int *)(uVar4 * 4 + iVar1) + 4);
      if (lVar3 == 0) break;
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 8) <= uVar4) goto LAB_002daae4;
      iVar1 = *(int *)(param_1 + 4);
    }
    uVar2 = *(undefined4 *)(*(int *)(uVar4 * 4 + *(int *)(param_1 + 4)) + 0x84);
  }
  return uVar2;
}


// ==== FUN_002dab08 @ 002dab08 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

undefined4 FUN_002dab08(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002dabcc:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      lVar4 = stricmp(param_2,*(int *)(uVar7 * 4 + iVar1) + 4);
      if (lVar4 == 0) break;
      uVar7 = uVar7 + 1;
      if (*(uint *)(param_1 + 8) <= uVar7) goto LAB_002dabcc;
      iVar1 = *(int *)(param_1 + 4);
    }
    (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(uVar7 * 4 + *(int *)(param_1 + 4)));
    uVar2 = *(int *)(param_1 + 8) - 1;
    *(uint *)(param_1 + 8) = uVar2;
    if (uVar7 < uVar2) {
      iVar1 = *(int *)(param_1 + 4);
      while( true ) {
        iVar5 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        puVar6 = (undefined4 *)(iVar5 + iVar1);
        *puVar6 = puVar6[1];
        if (*(uint *)(param_1 + 8) <= uVar7) break;
        iVar1 = *(int *)(param_1 + 4);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_002dabf0 @ 002dabf0 ====
// GLOBAL DAT_003e5e28 undefined

undefined8 FUN_002dabf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0x21] = param_3;
  *puVar1 = &DAT_003e5e28;
  strcpy(puVar1 + 1);
  return param_1;
}


// ==== FUN_002dac50 @ 002dac50 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e5e28 undefined

void FUN_002dac50(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e5e28;
  piVar1 = (int *)puVar2[0x21];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  puVar2[0x21] = 0;
  *puVar2 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002dacd0 @ 002dacd0 ====

void FUN_002dacd0(void)

{
  CPathWayManager_002da920(1,0xffff);
  return;
}


// ==== FUN_002dacf0 @ 002dacf0 ====

void FUN_002dacf0(void)

{
  CPathWayManager_002da920(0,0xffff);
  return;
}


// ==== FUN_002dad10 @ 002dad10 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_002dad10(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x1c,uVar1);
  }
  FUN_002dada8(auStack_30[0]);
  return;
}


// ==== FUN_002dada8 @ 002dada8 ====
// GLOBAL DAT_003e6438 undefined

undefined8 FUN_002dada8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[3] = 0;
  *puVar1 = &DAT_003e6438;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return param_1;
}


// ==== FUN_002dadd0 @ 002dadd0 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_002dadd0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      while( true ) {
        if (*(int *)(uVar3 * 4 + iVar2) != 0) {
          (*(code *)PTR_FUN_003c87e0)();
        }
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 0xc) <= uVar3) break;
        iVar2 = *(int *)(param_1 + 0x14);
      }
    }
    (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 0x14));
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar5 = 0;
    if (uVar3 != 0) {
      iVar2 = 0;
      do {
        uVar5 = uVar5 + 1;
        if (*(int *)(iVar2 + *(int *)(param_1 + 0x18)) != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            iVar1 = *(int *)(param_1 + 0x18);
            while( true ) {
              if (*(int *)(uVar4 * 4 + *(int *)(iVar2 + iVar1)) != 0) {
                (*(code *)PTR_FUN_003c87e0)();
              }
              uVar4 = uVar4 + 1;
              if (*(uint *)(param_1 + 0xc) <= uVar4) break;
              iVar1 = *(int *)(param_1 + 0x18);
            }
          }
          (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x18)));
        }
        uVar3 = *(uint *)(param_1 + 0xc);
        iVar2 = uVar5 * 4;
      } while (uVar5 < uVar3);
    }
    (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// ==== FUN_002daf40 @ 002daf40 ====
// GLOBAL DAT_003c9ed4 int

/* Strings referenciadas:
     "MaxDeltaUp"
     "EntityWidth"
     "ForceRebuild"
     "RawData"
     "OutputFile" */

undefined4 FUN_002daf40(int *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_440 [1024];
  
  if (param_2 == 0) {
    return 0;
  }
  fVar6 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar6 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  param_1[1] = (int)(fVar6 * 1.5);
  lVar2 = FUN_002e3330(param_2,0x405ae8);
  if (lVar2 != 0) {
    uVar3 = FUN_0035e730(lVar2);
    fVar6 = (float)FUN_00291c68(uVar3);
    if (0.0 <= fVar6) {
      param_1[1] = (int)fVar6;
    }
  }
  fVar6 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar6 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  param_1[2] = (int)(fVar6 * 0.6);
  lVar2 = FUN_002e3330(param_2,0x405af8);
  if (lVar2 != 0) {
    uVar3 = FUN_0035e730(lVar2);
    fVar6 = (float)FUN_00291c68(uVar3);
    if (0.0 <= fVar6) {
      param_1[2] = (int)fVar6;
    }
  }
  lVar2 = FUN_002e3330(param_2,0x405b08);
  if (lVar2 == 0) {
LAB_002db090:
    lVar2 = FUN_002e31e0(param_2,0x405b30);
    if ((lVar2 != 0) &&
       (lVar2 = (**(code **)(*param_1 + 0x5c))
                          ((int)param_1 + (int)*(short *)(*param_1 + 0x58),lVar2), lVar2 != 0)) {
      return 1;
    }
  }
  else {
    lVar4 = stricmp(lVar2,0x405b18);
    if ((lVar4 != 0) && (lVar4 = stricmp(lVar2,0x405b20), lVar4 != 0)) {
      lVar2 = stricmp(lVar2,0x405b28);
      if (lVar2 == 0) {
        iVar5 = *param_1;
        goto LAB_002db0c8;
      }
      goto LAB_002db090;
    }
  }
  iVar5 = *param_1;
LAB_002db0c8:
  lVar2 = (**(code **)(iVar5 + 0x4c))((int)param_1 + (int)*(short *)(iVar5 + 0x48),param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_002e3330(param_2,0x405b38);
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      FUN_002e52c8(lVar2,auStack_440);
      (**(code **)(*param_1 + 100))((int)param_1 + (int)*(short *)(*param_1 + 0x60),auStack_440);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_002db140 @ 002db140 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*

/* Strings referenciadas:
     "Container"
     "Class" */

undefined4 FUN_002db140(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int *piStack_b0;
  uint uStack_ac;
  int iStack_a8;
  
  param_1[3] = 0;
  uVar14 = 0;
  iStack_b4 = param_2;
  if (*(int *)(param_2 + 0x20) != 0) {
    do {
      uVar6 = FUN_002e33e0(iStack_b4,uVar14);
      uVar6 = FUN_002e3920(uVar6);
      lVar7 = stricmp(uVar6,0x405b48);
      if (lVar7 == 0) {
        param_1[3] = param_1[3] + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(iStack_b4 + 0x20));
  }
  uVar3 = 1;
  if (param_1[3] != 0) {
    iStack_d0 = 0;
    iVar11 = param_1[3] << 2;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar11,&iStack_d0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(iStack_d0,iVar11,uVar6);
    }
    piVar17 = DAT_003c87e8;
    param_1[5] = iStack_d0;
    iVar11 = param_1[3];
    iVar9 = *piVar17;
    iStack_cc = 0;
    uVar6 = (**(code **)(iVar9 + 0x34))
                      ((int)piVar17 + (int)*(short *)(iVar9 + 0x30),iVar11 << 2,(uint)&iStack_d0 | 4
                      );
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(iStack_cc,iVar11 << 2,uVar6);
    }
    piVar17 = DAT_003c87e8;
    param_1[4] = iStack_cc;
    iVar11 = param_1[3];
    iVar9 = *piVar17;
    iStack_c8 = 0;
    uVar6 = (**(code **)(iVar9 + 0x34))
                      ((int)piVar17 + (int)*(short *)(iVar9 + 0x30),iVar11 << 2,(uint)&iStack_d0 | 8
                      );
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(iStack_c8,iVar11 << 2,uVar6);
    }
    uVar14 = 0;
    param_1[6] = iStack_c8;
    if (param_1[3] != 0) {
      iVar11 = param_1[4];
      while( true ) {
        iVar10 = uVar14 * 4;
        *(undefined4 *)(iVar10 + iVar11) = 0;
        *(undefined4 *)(iVar10 + param_1[5]) = 0;
        uStack_c4 = 0;
        iVar11 = param_1[3];
        iVar9 = param_1[6];
        uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar11 << 2,
                           &uStack_c4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_c4,iVar11 << 2,uVar6);
        }
        uVar14 = uVar14 + 1;
        *(undefined4 *)(iVar10 + iVar9) = uStack_c4;
        uVar13 = 0;
        uVar15 = 0;
        if (param_1[3] != 0) {
          iVar11 = param_1[6];
          while( true ) {
            iVar9 = uVar13 * 4;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(iVar9 + *(int *)(iVar10 + iVar11)) = 0;
            if ((uint)param_1[3] <= uVar13) break;
            iVar11 = param_1[6];
          }
          uVar15 = param_1[3];
        }
        if (uVar15 <= uVar14) break;
        iVar11 = param_1[4];
      }
    }
    iVar11 = param_1[3];
    piStack_c0 = (int *)0x0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar11 << 2,
                       &piStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_c0,iVar11 << 2,uVar6);
    }
    uVar15 = 0;
    uVar14 = 0;
    piStack_b0 = piStack_c0;
    piVar17 = piStack_c0;
    if (*(int *)(iStack_b4 + 0x20) == 0) {
LAB_002db61c:
      uVar14 = 0;
      uVar15 = 0;
      if (param_1[3] != 0) {
        do {
          iVar9 = uVar15 * 4;
          piVar2 = piStack_b0 + uVar15;
          uVar13 = uVar15 + 1;
          piVar17 = (int *)*piVar2;
          iVar11 = *piVar17;
          uVar3 = (**(code **)(iVar11 + 0x1c))((int)piVar17 + (int)*(short *)(iVar11 + 0x18));
          *(undefined4 *)(iVar9 + param_1[4]) = uVar3;
          piVar2 = (int *)*piVar2;
          uVar14 = 0;
          if (param_1[3] != 0) {
            uVar14 = 1;
            uStack_ac = 0;
            do {
              if (uVar15 != uStack_ac) {
                iVar12 = uStack_ac * 4;
                iVar11 = piStack_b0[uStack_ac];
                uStack_ac = uVar14;
                iStack_a8 = iVar12;
                iVar4 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18))
                ;
                iVar10 = *(int *)(iVar9 + param_1[6]);
                uStack_b8 = 0;
                uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                                  ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                   iVar4 << 2,&uStack_b8);
                if (DAT_003c87ec != (code *)0x0) {
                  (*DAT_003c87ec)(uStack_b8,iVar4 << 2,uVar6);
                }
                *(undefined4 *)(iVar12 + iVar10) = uStack_b8;
                for (uVar16 = 0;
                    uVar5 = (**(code **)(*piVar2 + 0x1c))
                                      ((int)piVar2 + (int)*(short *)(*piVar2 + 0x18)),
                    uVar14 = uStack_ac, uVar16 < uVar5; uVar16 = uVar16 + 1) {
                  iVar10 = *param_1;
                  sVar1 = *(short *)(iVar10 + 0x50);
                  uVar6 = (**(code **)(*piVar2 + 0x24))
                                    ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),uVar16);
                  uVar3 = (**(code **)(iVar10 + 0x54))
                                    ((int)param_1 + (int)sVar1,piVar2,iVar11,uVar6);
                  *(undefined4 *)(uVar16 * 4 + *(int *)(iStack_a8 + *(int *)(iVar9 + param_1[6]))) =
                       uVar3;
                }
              }
              uStack_ac = uVar14;
              uVar14 = uStack_ac + 1;
            } while (uStack_ac < (uint)param_1[3]);
            uVar14 = param_1[3];
          }
          uVar15 = uVar13;
        } while (uVar13 < uVar14);
      }
      uVar15 = 0;
      piVar17 = piStack_b0;
      if (uVar14 != 0) {
        do {
          piVar2 = (int *)*piVar17;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
          }
          uVar15 = uVar15 + 1;
          piVar17 = piVar17 + 1;
        } while (uVar15 < (uint)param_1[3]);
      }
      (*(code *)PTR_FUN_003c87e0)(piStack_b0);
      uVar3 = 1;
    }
    else {
LAB_002db438:
      uVar6 = FUN_002e33e0(iStack_b4,uVar14);
      uVar8 = FUN_002e3920(uVar6);
      lVar7 = stricmp(uVar8,0x405b48);
      if (lVar7 != 0) {
LAB_002db608:
        uVar14 = uVar14 + 1;
        if (*(uint *)(iStack_b4 + 0x20) <= uVar14) goto LAB_002db61c;
        goto LAB_002db438;
      }
      lVar7 = FUN_002e3330(uVar6,0x405b58);
      if (lVar7 == 0) {
        uVar14 = 0;
        piVar17 = piStack_b0;
        if (uVar15 == 0) {
LAB_002db580:
          uVar3 = 0;
        }
        else {
          do {
            piVar2 = (int *)*piVar17;
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
            }
            uVar14 = uVar14 + 1;
            piVar17 = piVar17 + 1;
          } while (uVar14 < uVar15);
          uVar3 = 0;
        }
      }
      else {
        lVar7 = FUN_0038b150(lVar7);
        if (lVar7 != 0) {
          iVar11 = uVar15 * 4;
          piVar2 = (int *)(**(code **)((int)lVar7 + 4))();
          *piVar17 = (int)piVar2;
          lVar7 = (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10),uVar6)
          ;
          if (lVar7 == 0) {
            uVar14 = 0;
            piVar17 = piStack_b0;
            if (uVar15 != 0) {
              do {
                piVar2 = (int *)*piVar17;
                if (piVar2 != (int *)0x0) {
                  (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
                }
                uVar14 = uVar14 + 1;
                piVar17 = piVar17 + 1;
              } while (uVar14 < uVar15);
            }
            goto LAB_002db580;
          }
          uVar3 = *(undefined4 *)((int)uVar6 + 0xc);
          iVar9 = param_1[5];
          iVar10 = strlen(uVar3);
          uStack_bc = 0;
          uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                            ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10 + 1,
                             &uStack_bc);
          if (DAT_003c87ec != (code *)0x0) {
            (*DAT_003c87ec)(uStack_bc,iVar10 + 1,uVar6);
          }
          piVar17 = piVar17 + 1;
          uVar15 = uVar15 + 1;
          *(undefined4 *)(iVar11 + iVar9) = uStack_bc;
          strcpy(*(undefined4 *)(iVar11 + param_1[5]),uVar3);
          goto LAB_002db608;
        }
        uVar14 = 0;
        piVar17 = piStack_b0;
        if (uVar15 == 0) goto LAB_002db580;
        do {
          piVar2 = (int *)*piVar17;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
          }
          uVar14 = uVar14 + 1;
          piVar17 = piVar17 + 1;
        } while (uVar14 < uVar15);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


// ==== FUN_002db848 @ 002db848 ====
// GLOBAL DAT_00405b60 float
// GLOBAL DAT_00451254 undefined_*

uint FUN_002db848(int param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = DAT_00405b60;
  uVar2 = 0;
  uVar7 = 0xffffffff;
  while (uVar6 = uVar2,
        uVar2 = (**(code **)(*param_3 + 0x1c))((int)param_3 + (int)*(short *)(*param_3 + 0x18)),
        uVar6 < uVar2) {
    uVar3 = (**(code **)(*param_3 + 0x24))((int)param_3 + (int)*(short *)(*param_3 + 0x20),uVar6);
    pfVar5 = (float *)param_4;
    pfVar4 = (float *)uVar3;
    fVar8 = pfVar4[1] - pfVar5[1];
    if (fVar8 < 0.0) {
      fVar8 = -fVar8;
    }
    if (fVar8 <= *(float *)(param_1 + 4)) {
      fVar8 = pfVar4[1] - pfVar5[1];
      fVar8 = (pfVar4[2] - pfVar5[2]) * (pfVar4[2] - pfVar5[2]) +
              (*pfVar4 - *pfVar5) * (*pfVar4 - *pfVar5) + fVar8 * fVar8;
      if (fVar8 <= fVar9) {
        cVar1 = (*DAT_00451254)(*(undefined4 *)(param_1 + 8),param_4,uVar3,0,2);
        if (cVar1 == '\0') {
          uVar2 = uVar6 + 1;
        }
        else if (fVar8 < fVar9) {
          fVar9 = fVar8;
          uVar2 = uVar6 + 1;
          uVar7 = uVar6;
        }
        else {
          uVar2 = uVar6 + 1;
        }
      }
      else {
        uVar2 = uVar6 + 1;
      }
    }
    else {
      uVar2 = uVar6 + 1;
    }
  }
  return uVar7;
}


// ==== FUN_002db9c8 @ 002db9c8 ====
// GLOBAL DAT_0045127c undefined_*
// GLOBAL DAT_00405bb4 undefined4
// GLOBAL DAT_0045128c undefined_*
// GLOBAL DAT_00451280 undefined_*
// GLOBAL DAT_00450000 undefined

/* Strings referenciadas:
     "Kynogon Point mapping data" */

undefined4 FUN_002db9c8(int param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_e0;
  undefined4 auStack_dc [3];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *puStack_b0;
  undefined4 uStack_ac;
  
  lVar4 = (*DAT_0045127c)(param_2,0x405b68);
  if (lVar4 != 0) {
    uStack_e0 = DAT_00405bb4;
    uVar5 = strlen(0x405b98);
    lVar6 = (*DAT_0045128c)(0x405b98,1,uVar5,lVar4);
    lVar7 = strlen(0x405b98);
    pcVar1 = DAT_00451280;
    if ((lVar6 == lVar7) &&
       (lVar6 = (*DAT_0045128c)(&uStack_e0,4,1,lVar4), pcVar1 = DAT_00451280, lVar6 == 1)) {
      auStack_dc[0] = *(undefined4 *)(param_1 + 0xc);
      lVar6 = (*DAT_0045128c)(auStack_dc,4,1,lVar4);
      pcVar1 = DAT_00451280;
      if (lVar6 == 1) {
        uVar12 = 0;
        uVar14 = 0;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_002dbb44:
          uVar13 = 0;
          uVar12 = 0;
          if (uVar14 == 0) {
LAB_002dbba8:
            uVar14 = 0;
            if (uVar12 != 0) {
              lVar6 = 0;
              do {
                uVar13 = 0;
                iVar2 = (int)lVar6;
                if (uVar12 != 0) {
                  uVar11 = 0;
                  puVar9 = &DAT_00450000;
                  do {
                    puVar10 = puVar9;
                    if (uVar14 == uVar13) {
                      uVar12 = *(uint *)(param_1 + 0xc);
                    }
                    else {
                      uVar12 = 0;
                      if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x10)) != 0) {
                        lVar7 = 1;
                        iVar3 = *(int *)(param_1 + 0x18);
                        puStack_b0 = puVar9;
                        uStack_ac = uVar11;
                        while( true ) {
                          auStack_dc[0] =
                               *(undefined4 *)
                                (uVar12 * 4 + *(int *)(uVar13 * 4 + *(int *)(iVar2 + iVar3)));
                          uStack_d0 = (undefined4)lVar7;
                          uStack_cc = (undefined4)((ulong)lVar7 >> 0x20);
                          uStack_c0 = (undefined4)lVar6;
                          uStack_bc = (undefined4)((ulong)lVar6 >> 0x20);
                          lVar8 = (**(code **)(puVar9 + 0x128c))(auStack_dc,4,1,lVar4);
                          lVar7 = CONCAT44(uStack_cc,uStack_d0);
                          lVar6 = CONCAT44(uStack_bc,uStack_c0);
                          if (lVar8 != lVar7) {
                            pcVar1 = *(code **)(puVar9 + 0x1280);
                            goto LAB_002dbad8;
                          }
                          uVar12 = uVar12 + 1;
                          puVar10 = puStack_b0;
                          uVar11 = uStack_ac;
                          if (*(uint *)(iVar2 + *(int *)(param_1 + 0x10)) <= uVar12) break;
                          iVar3 = *(int *)(param_1 + 0x18);
                        }
                      }
                      uVar12 = *(uint *)(param_1 + 0xc);
                    }
                    uVar13 = uVar13 + 1;
                    puVar9 = puVar10;
                  } while (uVar13 < uVar12);
                }
                uVar14 = uVar14 + 1;
                lVar6 = (long)(iVar2 + 4);
              } while (uVar14 < uVar12);
            }
            (*DAT_00451280)(lVar4);
            return 1;
          }
          iVar2 = *(int *)(param_1 + 0x14);
          while( true ) {
            iVar2 = strlen(*(undefined4 *)(uVar13 * 4 + iVar2));
            iVar3 = (*DAT_0045128c)(*(undefined4 *)(uVar13 * 4 + *(int *)(param_1 + 0x14)),1,
                                    iVar2 + 1,lVar4);
            uVar13 = uVar13 + 1;
            pcVar1 = DAT_00451280;
            if (iVar3 != iVar2 + 1) break;
            uVar12 = *(uint *)(param_1 + 0xc);
            if (uVar12 <= uVar13) goto LAB_002dbba8;
            iVar2 = *(int *)(param_1 + 0x14);
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x10);
          while( true ) {
            auStack_dc[0] = *(undefined4 *)(uVar12 * 4 + iVar2);
            lVar6 = (*DAT_0045128c)(auStack_dc,4,1,lVar4);
            uVar12 = uVar12 + 1;
            pcVar1 = DAT_00451280;
            if (lVar6 != 1) break;
            uVar14 = *(uint *)(param_1 + 0xc);
            if (uVar14 <= uVar12) goto LAB_002dbb44;
            iVar2 = *(int *)(param_1 + 0x10);
          }
        }
      }
    }
LAB_002dbad8:
    (*pcVar1)(lVar4);
  }
  return 0;
}


// ==== FUN_002dbce0 @ 002dbce0 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

undefined4 FUN_002dbce0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort auStack_4f0 [7];
  char acStack_4e1 [1025];
  ushort auStack_e0 [2];
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uStack_c4 = (undefined4)param_2;
  piVar1 = *(int **)(DAT_003c9ed4 + 4);
  auStack_4f0[0] = 0;
  lVar4 = (**(code **)(*piVar1 + 0x24))
                    ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2,auStack_4f0,2);
  if (lVar4 == 2) {
    *(uint *)(param_1 + 0xc) = (uint)auStack_4f0[0];
    if (auStack_4f0[0] != 0) {
      uStack_dc = 0;
      iVar9 = (uint)auStack_4f0[0] << 2;
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,&uStack_dc)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_dc,iVar9,uVar5);
      }
      uVar12 = 0;
      *(undefined4 *)(param_1 + 0x10) = uStack_dc;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar9 = *piVar1;
        while (lVar4 = (**(code **)(iVar9 + 0x24))
                                 ((int)piVar1 + (int)*(short *)(iVar9 + 0x20),uStack_c4,auStack_4f0,
                                  2), lVar4 == 2) {
          iVar9 = uVar12 * 4;
          uVar12 = uVar12 + 1 & 0xffff;
          *(uint *)(iVar9 + *(int *)(param_1 + 0x10)) = (uint)auStack_4f0[0];
          if (*(uint *)(param_1 + 0xc) <= uVar12) goto LAB_002dbe30;
          iVar9 = *piVar1;
        }
        goto LAB_002dbd4c;
      }
LAB_002dbe30:
      uStack_d8 = 0;
      iVar9 = *(int *)(param_1 + 0xc) << 2;
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,&uStack_d8)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_d8,iVar9,uVar5);
      }
      uVar12 = 0;
      *(undefined4 *)(param_1 + 0x14) = uStack_d8;
      if (*(int *)(param_1 + 0xc) != 0) {
        do {
          acStack_4e1[1] = 0;
          uVar13 = 0;
          iVar9 = *piVar1;
          while( true ) {
            lVar4 = (**(code **)(iVar9 + 0x24))
                              ((int)piVar1 + (int)*(short *)(iVar9 + 0x20),uStack_c4,
                               acStack_4e1 + 1 + uVar13,1);
            if (lVar4 != 1) {
              iVar9 = *piVar1;
              goto LAB_002dbd50;
            }
            uVar13 = uVar13 + 1 & 0xffff;
            if (acStack_4e1[uVar13] == '\0') break;
            iVar9 = *piVar1;
          }
          iVar9 = *(int *)(param_1 + 0x14);
          uStack_d4 = 0;
          uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                            ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),uVar13,
                             &uStack_d4);
          if (DAT_003c87ec != (code *)0x0) {
            (*DAT_003c87ec)(uStack_d4,uVar13,uVar5);
          }
          *(undefined4 *)(uVar12 * 4 + iVar9) = uStack_d4;
          strcpy(*(undefined4 *)(uVar12 * 4 + *(int *)(param_1 + 0x14)),acStack_4e1 + 1);
          uVar12 = uVar12 + 1 & 0xffff;
        } while (uVar12 < *(uint *)(param_1 + 0xc));
      }
      uStack_d0 = 0;
      iVar9 = *(int *)(param_1 + 0xc) << 2;
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,&uStack_d0)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_d0,iVar9,uVar5);
      }
      uVar13 = 0;
      uVar12 = *(uint *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x18) = uStack_d0;
      if (uVar12 != 0) {
        do {
          iVar9 = *(int *)(param_1 + 0x18);
          iVar2 = uVar13 * 4;
          uStack_cc = 0;
          uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                            ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),uVar12 << 2,
                             &uStack_cc);
          if (DAT_003c87ec != (code *)0x0) {
            (*DAT_003c87ec)(uStack_cc,uVar12 << 2,uVar5);
          }
          *(undefined4 *)(iVar2 + iVar9) = uStack_cc;
          uVar12 = 0;
          if (*(int *)(param_1 + 0xc) != 0) {
            do {
              if (uVar13 == uVar12) {
                *(undefined4 *)(iVar2 + *(int *)(iVar2 + *(int *)(param_1 + 0x18))) = 0;
              }
              else {
                iVar7 = uVar12 * 4;
                iVar9 = *(int *)(iVar2 + *(int *)(param_1 + 0x18));
                iVar10 = *(int *)(iVar2 + *(int *)(param_1 + 0x10)) << 2;
                uStack_c8 = 0;
                uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                  ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10,
                                   &uStack_c8);
                if (DAT_003c87ec != (code *)0x0) {
                  (*DAT_003c87ec)(uStack_c8,iVar10,uVar5);
                }
                *(undefined4 *)(iVar7 + iVar9) = uStack_c8;
                uVar11 = 0;
                if (*(int *)(iVar2 + *(int *)(param_1 + 0x10)) != 0) {
                  lVar4 = 2;
                  uVar8 = 0xffff;
                  iVar9 = *piVar1;
                  while( true ) {
                    auStack_e0[0] = 0;
                    uStack_c0 = (undefined4)uVar8;
                    uStack_bc = (undefined4)(uVar8 >> 0x20);
                    uStack_b0 = (undefined4)lVar4;
                    uStack_ac = (undefined4)((ulong)lVar4 >> 0x20);
                    lVar6 = (**(code **)(iVar9 + 0x24))
                                      ((int)piVar1 + (int)*(short *)(iVar9 + 0x20),uStack_c4,
                                       auStack_e0,2);
                    lVar4 = CONCAT44(uStack_ac,uStack_b0);
                    uVar8 = CONCAT44(uStack_bc,uStack_c0);
                    if (lVar6 != lVar4) goto LAB_002dbd4c;
                    iVar9 = uVar11 * 4;
                    *(uint *)(iVar9 + *(int *)(iVar7 + *(int *)(iVar2 + *(int *)(param_1 + 0x18))))
                         = (uint)auStack_e0[0];
                    if (auStack_e0[0] == uVar8) {
                      *(undefined4 *)
                       (iVar9 + *(int *)(iVar7 + *(int *)(iVar2 + *(int *)(param_1 + 0x18)))) =
                           0xffffffff;
                    }
                    else {
                      *(uint *)(iVar9 + *(int *)(iVar7 + *(int *)(iVar2 + *(int *)(param_1 + 0x18)))
                               ) = (uint)auStack_e0[0];
                    }
                    uVar11 = uVar11 + 1 & 0xffff;
                    if (*(uint *)(iVar2 + *(int *)(param_1 + 0x10)) <= uVar11) break;
                    iVar9 = *piVar1;
                  }
                }
              }
              uVar12 = uVar12 + 1 & 0xffff;
            } while (uVar12 < *(uint *)(param_1 + 0xc));
          }
          uVar12 = *(uint *)(param_1 + 0xc);
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar13 < uVar12);
      }
    }
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),uStack_c4);
    uVar3 = 1;
  }
  else {
LAB_002dbd4c:
    iVar9 = *piVar1;
LAB_002dbd50:
    (**(code **)(iVar9 + 0x2c))((int)piVar1 + (int)*(short *)(iVar9 + 0x28),uStack_c4);
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_002dc238 @ 002dc238 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

/* Strings referenciadas:
     "Kynogon Point mapping data" */

undefined8 FUN_002dc238(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_520 [63];
  char acStack_4e1 [1025];
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uStack_c4 = param_2;
  FUN_002dadd0();
  piVar2 = *(int **)(DAT_003c9ed4 + 4);
  if ((piVar2 != (int *)0x0) &&
     (lVar4 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),uStack_c4)
     , lVar4 != 0)) {
    iVar13 = *piVar2;
    sVar1 = *(short *)(iVar13 + 0x20);
    uVar5 = strlen(0x405b98);
    lVar4 = (**(code **)(iVar13 + 0x24))((int)piVar2 + (int)sVar1,uStack_c4,auStack_520,uVar5);
    lVar6 = strlen(0x405b98);
    if (lVar4 == lVar6) {
      lVar6 = (**(code **)(*piVar2 + 0x24))
                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),uStack_c4,&iStack_e0,4);
      if (lVar6 == 4) {
        auStack_520[(int)lVar4] = 0;
        lVar4 = stricmp(0x405b98,auStack_520);
        if (lVar4 == 0) {
          if (iStack_e0 == 1) {
            uVar5 = FUN_002dbce0(param_1,uStack_c4,1);
            return uVar5;
          }
          if (iStack_e0 == 2) {
            iVar13 = (int)param_1;
            lVar4 = (**(code **)(*piVar2 + 0x24))
                              ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),uStack_c4,iVar13 + 0xc,
                               4);
            if (lVar4 == 4) {
              if (*(int *)(iVar13 + 0xc) == 0) {
LAB_002dc794:
                (**(code **)(*piVar2 + 0x2c))
                          ((int)piVar2 + (int)*(short *)(*piVar2 + 0x28),uStack_c4);
                return 1;
              }
              uStack_dc = 0;
              iVar8 = *(int *)(iVar13 + 0xc) << 2;
              uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                                 &uStack_dc);
              if (DAT_003c87ec != (code *)0x0) {
                (*DAT_003c87ec)(uStack_dc,iVar8,uVar5);
              }
              uVar14 = 0;
              *(undefined4 *)(iVar13 + 0x10) = uStack_dc;
              if (*(int *)(iVar13 + 0xc) == 0) {
LAB_002dc454:
                uStack_d8 = 0;
                iVar8 = *(int *)(iVar13 + 0xc) << 2;
                uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                  ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                                   &uStack_d8);
                if (DAT_003c87ec != (code *)0x0) {
                  (*DAT_003c87ec)(uStack_d8,iVar8,uVar5);
                }
                uVar14 = 0;
                *(undefined4 *)(iVar13 + 0x14) = uStack_d8;
                if (*(int *)(iVar13 + 0xc) != 0) {
                  do {
                    acStack_4e1[1] = 0;
                    iVar8 = 0;
                    pcVar9 = acStack_4e1;
                    do {
                      lVar4 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),uStack_c4,
                                         acStack_4e1 + 1 + iVar8,1);
                      pcVar9 = pcVar9 + 1;
                      if (lVar4 != 1) goto LAB_002dc38c;
                      iVar8 = iVar8 + 1;
                    } while (*pcVar9 != '\0');
                    iVar10 = uVar14 * 4;
                    iVar3 = *(int *)(iVar13 + 0x14);
                    uStack_d4 = 0;
                    uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                       iVar8,&uStack_d4);
                    if (DAT_003c87ec != (code *)0x0) {
                      (*DAT_003c87ec)(uStack_d4,iVar8,uVar5);
                    }
                    uVar14 = uVar14 + 1;
                    *(undefined4 *)(iVar10 + iVar3) = uStack_d4;
                    strcpy(*(undefined4 *)(iVar10 + *(int *)(iVar13 + 0x14)),acStack_4e1 + 1);
                  } while (uVar14 < *(uint *)(iVar13 + 0xc));
                }
                uStack_d0 = 0;
                iVar8 = *(int *)(iVar13 + 0xc) << 2;
                uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                  ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                                   &uStack_d0);
                if (DAT_003c87ec != (code *)0x0) {
                  (*DAT_003c87ec)(uStack_d0,iVar8,uVar5);
                }
                uVar15 = 0;
                uVar14 = *(uint *)(iVar13 + 0xc);
                *(undefined4 *)(iVar13 + 0x18) = uStack_d0;
                if (uVar14 != 0) {
                  iVar8 = 0;
                  do {
                    iVar3 = *(int *)(iVar13 + 0x18);
                    uStack_cc = 0;
                    uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                       uVar14 << 2,&uStack_cc);
                    if (DAT_003c87ec != (code *)0x0) {
                      (*DAT_003c87ec)(uStack_cc,uVar14 << 2,uVar5);
                    }
                    *(undefined4 *)(iVar8 + iVar3) = uStack_cc;
                    uVar14 = 0;
                    if (*(int *)(iVar13 + 0xc) != 0) {
                      lVar4 = 0;
                      do {
                        if (uVar15 == uVar14) {
                          *(undefined4 *)(iVar8 + *(int *)(iVar8 + *(int *)(iVar13 + 0x18))) = 0;
                        }
                        else {
                          iVar3 = *(int *)(iVar8 + *(int *)(iVar13 + 0x18));
                          iVar11 = *(int *)(iVar8 + *(int *)(iVar13 + 0x10)) << 2;
                          iVar10 = (int)lVar4;
                          uStack_bc = (undefined4)((ulong)lVar4 >> 0x20);
                          uStack_c8 = 0;
                          iStack_c0 = iVar10;
                          uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                                            ((int)DAT_003c87e8 +
                                             (int)*(short *)(*DAT_003c87e8 + 0x30),iVar11,&uStack_c8
                                            );
                          lVar4 = CONCAT44(uStack_bc,iStack_c0);
                          if (DAT_003c87ec != (code *)0x0) {
                            (*DAT_003c87ec)(uStack_c8,iVar11,uVar5);
                            lVar4 = CONCAT44(uStack_bc,iStack_c0);
                          }
                          *(undefined4 *)(iVar10 + iVar3) = uStack_c8;
                          uVar12 = 0;
                          if (*(int *)(iVar8 + *(int *)(iVar13 + 0x10)) != 0) {
                            lVar6 = 4;
                            iVar3 = *(int *)(iVar13 + 0x18);
                            while( true ) {
                              iStack_c0 = (int)lVar4;
                              uStack_bc = (undefined4)((ulong)lVar4 >> 0x20);
                              uStack_b0 = (undefined4)lVar6;
                              uStack_ac = (undefined4)((ulong)lVar6 >> 0x20);
                              lVar7 = (**(code **)(*piVar2 + 0x24))
                                                ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),
                                                 uStack_c4,
                                                 *(int *)(iVar10 + *(int *)(iVar8 + iVar3)) +
                                                 uVar12 * 4,4);
                              lVar6 = CONCAT44(uStack_ac,uStack_b0);
                              lVar4 = CONCAT44(uStack_bc,iStack_c0);
                              if (lVar7 != lVar6) goto LAB_002dc38c;
                              uVar12 = uVar12 + 1;
                              if (*(uint *)(iVar8 + *(int *)(iVar13 + 0x10)) <= uVar12) break;
                              iVar3 = *(int *)(iVar13 + 0x18);
                            }
                          }
                        }
                        uVar14 = uVar14 + 1;
                        lVar4 = (long)((int)lVar4 + 4);
                      } while (uVar14 < *(uint *)(iVar13 + 0xc));
                    }
                    uVar14 = *(uint *)(iVar13 + 0xc);
                    uVar15 = uVar15 + 1;
                    iVar8 = iVar8 + 4;
                  } while (uVar15 < uVar14);
                }
                goto LAB_002dc794;
              }
              iVar8 = *piVar2;
              while( true ) {
                lVar4 = (**(code **)(iVar8 + 0x24))
                                  ((int)piVar2 + (int)*(short *)(iVar8 + 0x20),uStack_c4,
                                   *(int *)(iVar13 + 0x10) + uVar14 * 4,4);
                uVar14 = uVar14 + 1;
                if (lVar4 != 4) break;
                if (*(uint *)(iVar13 + 0xc) <= uVar14) goto LAB_002dc454;
                iVar8 = *piVar2;
              }
            }
LAB_002dc38c:
            iVar13 = *piVar2;
          }
          else {
            iVar13 = *piVar2;
          }
        }
        else {
          iVar13 = *piVar2;
        }
      }
      else {
        iVar13 = *piVar2;
      }
    }
    else {
      iVar13 = *piVar2;
    }
    (**(code **)(iVar13 + 0x2c))((int)piVar2 + (int)*(short *)(iVar13 + 0x28),uStack_c4);
  }
  return 0;
}


// ==== CPointMapper_002dc7e0 @ 002dc7e0 ====
// GLOBAL DAT_004510e8 undefined_*
// GLOBAL DAT_003e5e40 undefined

/* Strings referenciadas:
     "CPointMapper" */

void CPointMapper_002dc7e0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004510e8 = &DAT_003e5e40;
    }
    else {
      FUN_002e7610(0x450fd8,0x405b70,0x2dad10,0,0,0);
    }
  }
  return;
}


// ==== FUN_002dc840 @ 002dc840 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e6438 undefined

void FUN_002dc840(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003e6438;
  FUN_002dadd0();
  *(undefined4 *)param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002dc8a0 @ 002dc8a0 ====

undefined4 FUN_002dc8a0(int param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_002dc910:
    uVar2 = 0;
  }
  else {
    uVar1 = *param_3;
    while (lVar3 = stricmp(param_2,*(undefined4 *)(uVar1 * 4 + *(int *)(param_1 + 0x14))),
          lVar3 != 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      if (*(uint *)(param_1 + 0xc) <= uVar1 + 1) goto LAB_002dc910;
      uVar1 = *param_3;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_002dc930 @ 002dc930 ====

undefined4 FUN_002dc930(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iStack_50;
  int iStack_4c;
  
  lVar3 = (**(code **)(*param_2 + 0x1c))
                    ((int)param_2 + (int)*(short *)(*param_2 + 0x18),&iStack_50,(uint)&iStack_50 | 4
                    );
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (iStack_4c == param_3) {
      *param_4 = iStack_50;
    }
    else {
      iVar1 = *(int *)(iStack_50 * 4 +
                      *(int *)(param_3 * 4 + *(int *)(iStack_4c * 4 + *(int *)(param_1 + 0x18))));
      *param_4 = iVar1;
      if (iVar1 == -1) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_002dca00 @ 002dca00 ====

void FUN_002dca00(void)

{
  CPointMapper_002dc7e0(1,0xffff);
  return;
}


// ==== FUN_002dca20 @ 002dca20 ====

void FUN_002dca20(void)

{
  CPointMapper_002dc7e0(0,0xffff);
  return;
}


// ==== FUN_002dca40 @ 002dca40 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_002dca40(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x10,uVar1);
  }
  FUN_002dcad8(auStack_30[0]);
  return;
}


// ==== FUN_002dcad8 @ 002dcad8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e6608 undefined

undefined8 FUN_002dcad8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [4];
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e6608;
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x20,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x20,uVar1);
  }
  puVar2[3] = 8;
  puVar2[1] = auStack_30[0];
  puVar2[2] = 0;
  return param_1;
}


// ==== FUN_002dcb80 @ 002dcb80 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e6608 undefined

void FUN_002dcb80(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar3 = 0;
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e6608;
  if (puVar4[2] != 0) {
    iVar2 = puVar4[1];
    while( true ) {
      iVar5 = uVar3 * 4;
      piVar1 = *(int **)(iVar5 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(iVar5 + puVar4[1]) = 0;
      if ((uint)puVar4[2] <= uVar3) break;
      iVar2 = puVar4[1];
    }
  }
  (*(code *)PTR_FUN_003c87e0)(puVar4[1]);
  puVar4[1] = 0;
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002dcc60 @ 002dcc60 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*

undefined4 FUN_002dcc60(int param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_a0;
  undefined4 *puStack_9c;
  undefined4 auStack_98 [2];
  
  if (param_2 != 0) {
    uVar9 = 0;
    if (*(int *)(param_1 + 8) == 0) {
LAB_002dccf8:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      while( true ) {
        iVar10 = uVar9 * 4;
        lVar5 = stricmp(param_2,*(int *)(iVar10 + iVar3) + 4);
        uVar9 = uVar9 + 1;
        if (lVar5 == 0) break;
        if (*(uint *)(param_1 + 8) <= uVar9) goto LAB_002dccf8;
        iVar3 = *(int *)(param_1 + 4);
      }
      iVar3 = *(int *)(*(int *)(iVar10 + *(int *)(param_1 + 4)) + 0x84);
    }
    if (iVar3 != 0) {
      return 0;
    }
    uStack_a0 = 0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xc,&uStack_a0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_a0,0xc,uVar6);
    }
    lVar5 = FUN_002df8c8(uStack_a0);
    lVar7 = FUN_002df658(lVar5,param_3);
    piVar1 = DAT_003c87e8;
    if (lVar7 != 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar3 << 1;
        puStack_9c = (undefined4 *)0x0;
        iVar10 = *piVar1;
        uVar6 = (**(code **)(iVar10 + 0x34))
                          ((int)piVar1 + (int)*(short *)(iVar10 + 0x30),iVar3 << 3,
                           (uint)&uStack_a0 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_9c,iVar3 << 3,uVar6);
        }
        puVar2 = puStack_9c;
        uVar9 = 0;
        puVar8 = puStack_9c;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            iVar3 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *puVar8 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 4));
            puVar8 = puVar8 + 1;
          } while (uVar9 < *(uint *)(param_1 + 8));
        }
        (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 4));
        *(undefined4 **)(param_1 + 4) = puVar2;
      }
      iVar3 = *(int *)(param_1 + 8);
      iVar10 = *(int *)(param_1 + 4);
      auStack_98[0] = 0;
      uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x88,auStack_98);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_98[0],0x88,uVar6);
      }
      uVar4 = FUN_002dd428(auStack_98[0],param_2,lVar5);
      *(undefined4 *)(iVar3 * 4 + iVar10) = uVar4;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return 1;
    }
    if (lVar5 != 0) {
      iVar3 = *(int *)lVar5;
      (**(code **)(iVar3 + 0xc))((int)(int *)lVar5 + (int)*(short *)(iVar3 + 8),3);
      return 0;
    }
  }
  return 0;
}


// ==== FUN_002dcf38 @ 002dcf38 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*

undefined4 FUN_002dcf38(int param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puStack_90;
  undefined4 auStack_8c [3];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_1 + 8) == 0) {
LAB_002dcfd0:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      while( true ) {
        iVar8 = uVar7 * 4;
        lVar4 = stricmp(param_2,*(int *)(iVar8 + iVar2) + 4);
        uVar7 = uVar7 + 1;
        if (lVar4 == 0) break;
        if (*(uint *)(param_1 + 8) <= uVar7) goto LAB_002dcfd0;
        iVar2 = *(int *)(param_1 + 4);
      }
      iVar2 = *(int *)(*(int *)(iVar8 + *(int *)(param_1 + 4)) + 0x84);
    }
    uVar3 = 0;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == *(int *)(param_1 + 0xc)) {
        puStack_90 = (undefined4 *)0x0;
        *(int *)(param_1 + 0xc) = iVar2 << 1;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 << 3,
                           &puStack_90);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_90,iVar2 << 3,uVar5);
        }
        puVar1 = puStack_90;
        uVar7 = 0;
        puVar6 = puStack_90;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            iVar2 = uVar7 * 4;
            uVar7 = uVar7 + 1;
            *puVar6 = *(undefined4 *)(iVar2 + *(int *)(param_1 + 4));
            puVar6 = puVar6 + 1;
          } while (uVar7 < *(uint *)(param_1 + 8));
        }
        (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(param_1 + 4));
        *(undefined4 **)(param_1 + 4) = puVar1;
      }
      auStack_8c[0] = 0;
      iVar2 = *(int *)(param_1 + 8);
      iVar8 = *(int *)(param_1 + 4);
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x88,auStack_8c);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_8c[0],0x88,uVar5);
      }
      uVar3 = FUN_002dd428(auStack_8c[0],param_2,param_3);
      *(undefined4 *)(iVar2 * 4 + iVar8) = uVar3;
      uVar3 = 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return uVar3;
}


// ==== CScriptManager_002dd158 @ 002dd158 ====
// GLOBAL DAT_00451200 undefined_*
// GLOBAL DAT_003e5e40 undefined

/* Strings referenciadas:
     "CScriptManager" */

void CScriptManager_002dd158(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00451200 = &DAT_003e5e40;
    }
    else {
      FUN_002e7610(0x4510f0,0x405c50,0x2dca40,0,0,0);
    }
  }
  return;
}


// ==== FUN_002dd1b8 @ 002dd1b8 ====

bool FUN_002dd1b8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_002e74e0();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


// ==== FUN_002dd1e8 @ 002dd1e8 ====

/* Strings referenciadas:
     "Script"
     "RawData" */

undefined4 FUN_002dd1e8(undefined8 param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar3 = FUN_002e3920(param_2);
    lVar4 = stricmp(uVar3,0x405c40);
    if (lVar4 != 0) {
      lVar4 = FUN_002e3920(param_2);
      if (lVar4 == 0) {
        return 0;
      }
      pcVar2 = (char *)FUN_002e3920(param_2);
      if (*pcVar2 != '_') {
        return 0;
      }
      return 1;
    }
    iVar1 = *(int *)((int)param_2 + 0xc);
    if (((iVar1 != 0) && (lVar4 = FUN_002e31e0(param_2,0x405c48), lVar4 != 0)) &&
       (lVar4 = FUN_002dcc60(param_1,iVar1,lVar4), lVar4 != 0)) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002dd2a8 @ 002dd2a8 ====

undefined4 FUN_002dd2a8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002dd31c:
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      lVar3 = stricmp(param_2,*(int *)(uVar4 * 4 + iVar1) + 4);
      if (lVar3 == 0) break;
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 8) <= uVar4) goto LAB_002dd31c;
      iVar1 = *(int *)(param_1 + 4);
    }
    uVar2 = *(undefined4 *)(*(int *)(uVar4 * 4 + *(int *)(param_1 + 4)) + 0x84);
  }
  return uVar2;
}


// ==== FUN_002dd340 @ 002dd340 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

undefined4 FUN_002dd340(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002dd404:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      lVar4 = stricmp(param_2,*(int *)(uVar7 * 4 + iVar1) + 4);
      if (lVar4 == 0) break;
      uVar7 = uVar7 + 1;
      if (*(uint *)(param_1 + 8) <= uVar7) goto LAB_002dd404;
      iVar1 = *(int *)(param_1 + 4);
    }
    (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(uVar7 * 4 + *(int *)(param_1 + 4)));
    uVar2 = *(int *)(param_1 + 8) - 1;
    *(uint *)(param_1 + 8) = uVar2;
    if (uVar7 < uVar2) {
      iVar1 = *(int *)(param_1 + 4);
      while( true ) {
        iVar5 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        puVar6 = (undefined4 *)(iVar5 + iVar1);
        *puVar6 = puVar6[1];
        if (*(uint *)(param_1 + 8) <= uVar7) break;
        iVar1 = *(int *)(param_1 + 4);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_002dd428 @ 002dd428 ====
// GLOBAL DAT_003e6648 undefined

undefined8 FUN_002dd428(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0x21] = param_3;
  *puVar1 = &DAT_003e6648;
  strcpy(puVar1 + 1);
  return param_1;
}


// ==== FUN_002dd488 @ 002dd488 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e6648 undefined

void FUN_002dd488(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e6648;
  piVar1 = (int *)puVar2[0x21];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  puVar2[0x21] = 0;
  *puVar2 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002dd508 @ 002dd508 ====

void FUN_002dd508(void)

{
  CScriptManager_002dd158(1,0xffff);
  return;
}


// ==== FUN_002dd528 @ 002dd528 ====

void FUN_002dd528(void)

{
  CScriptManager_002dd158(0,0xffff);
  return;
}


// ==== FUN_002dd548 @ 002dd548 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_004514f8 int
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL DAT_004514fc int
// GLOBAL DAT_00451500 int
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL DAT_003e6758 undefined

long FUN_002dd548(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *apiStack_a0 [4];
  
  if (param_1 != param_2) {
    iVar8 = (int)param_2;
    iVar7 = (int)param_1;
    *(undefined1 *)(iVar7 + 0xc) = *(undefined1 *)(iVar8 + 0xc);
    strcpy(iVar7 + 0xd,iVar8 + 0xd);
    iVar1 = *(int *)(iVar8 + 8);
    *(int *)(iVar7 + 8) = iVar1;
    *(int *)(iVar7 + 0x110) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar7 + 4) = 0;
    }
    else {
      apiStack_a0[0] = (int *)0x0;
      iVar4 = iVar1 * 0x58 + 0x10;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4,apiStack_a0
                        );
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(apiStack_a0[0],iVar4,uVar3);
      }
      piVar6 = apiStack_a0[0] + 4;
      *apiStack_a0[0] = iVar1;
      iVar4 = iVar1 + -1;
      piVar5 = piVar6;
      if (iVar1 == 0) {
        *(int **)(iVar7 + 4) = piVar6;
      }
      else {
        do {
          *piVar5 = (int)&DAT_003e6758;
          puVar2 = PTR_DAT_003c71f8;
          piVar5[1] = DAT_004514f8;
          piVar5[2] = DAT_004514fc;
          piVar5[3] = DAT_00451500;
          strcpy(piVar5 + 4,puVar2);
          strcpy(piVar5 + 6,PTR_DAT_003c7208);
          iVar4 = iVar4 + -1;
          piVar5 = piVar5 + 0x16;
        } while (iVar4 != -1);
        *(int **)(iVar7 + 4) = piVar6;
      }
      memcpy(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar8 + 4),*(int *)(iVar7 + 0x110) * 0x58);
    }
  }
  return param_1;
}


// ==== FUN_002dd778 @ 002dd778 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_004514f8 undefined4
// GLOBAL DAT_00451500 undefined4
// GLOBAL DAT_004514fc undefined4
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL PTR_DAT_003c71f4 undefined_*
// GLOBAL PTR_DAT_003c71fc undefined_*
// GLOBAL PTR_DAT_003c7200 undefined_*
// GLOBAL PTR_s_crouch_003c7204 undefined_*
// GLOBAL DAT_003e6758 undefined

/* Strings referenciadas:
     "crouch"
     "pause %f "
     "rotate %f "
     "orient %f "
     "Kynogon Path Way" */

undefined4 FUN_002dd778(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_160 [64];
  undefined *puStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [72];
  char acStack_c0 [4];
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  char *pcStack_a4;
  
  iVar10 = (int)param_1;
  *(undefined1 *)(iVar10 + 0xc) = 0;
  *(undefined4 *)(iVar10 + 8) = 0;
  piVar2 = *(int **)(DAT_003c9ed4 + 4);
  if ((piVar2 != (int *)0x0) &&
     (lVar5 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),param_2),
     lVar5 != 0)) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    uVar6 = strlen(0x405e88);
    lVar5 = (**(code **)(iVar3 + 0x24))((int)piVar2 + (int)sVar1,param_2,auStack_160,uVar6);
    lVar7 = strlen(0x405e88);
    if (lVar5 == lVar7) {
      lVar7 = (**(code **)(*piVar2 + 0x24))
                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,&iStack_bc,4);
      if (lVar7 == 4) {
        auStack_160[(int)lVar5] = 0;
        lVar5 = stricmp(0x405e88,auStack_160);
        if (lVar5 == 0) {
          if (iStack_bc - 1U < 2) {
            puStack_120 = &DAT_003e6758;
            uStack_11c = DAT_004514f8;
            uStack_118 = DAT_004514fc;
            uStack_114 = DAT_00451500;
            strcpy(auStack_110,PTR_DAT_003c71f8);
            strcpy(auStack_108,PTR_DAT_003c7208);
            uStack_114 = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            strcpy(auStack_110,PTR_DAT_003c71f4);
            strcpy(auStack_108,PTR_DAT_003c7208);
            acStack_c0[0] = '\0';
            iStack_b8 = 0;
            lVar5 = (**(code **)(*piVar2 + 0x24))
                              ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,&iStack_b8,4);
            if (lVar5 == 4) {
              if (iStack_b8 < 0x100) {
                iVar3 = (**(code **)(*piVar2 + 0x24))
                                  ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                   iVar10 + 0xd);
                if (iVar3 == iStack_b8) {
                  *(undefined1 *)(iVar10 + 0xd + iVar3) = 0;
                  lVar5 = (**(code **)(*piVar2 + 0x24))
                                    ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                     iVar10 + 0xc,1);
                  if (lVar5 == 1) {
                    pcStack_a4 = acStack_c0;
                    iVar10 = *piVar2;
LAB_002dd9f8:
                    uStack_ac = 0x461c4000;
                    uStack_b4 = 0x461c4000;
                    uStack_b0 = 0x461c4000;
                    lVar5 = (**(code **)(iVar10 + 0x24))
                                      ((int)piVar2 + (int)*(short *)(iVar10 + 0x20),param_2,
                                       pcStack_a4,1);
                    if (lVar5 != 1) {
LAB_002dddd4:
                      iVar10 = *piVar2;
LAB_002dddd8:
                      (**(code **)(iVar10 + 0x2c))
                                ((int)piVar2 + (int)*(short *)(iVar10 + 0x28),param_2);
                      return 0;
                    }
                    switch(acStack_c0[0]) {
                    case '\x01':
                    case '\x02':
                    case '\x03':
                    case '\x04':
                      lVar5 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         &uStack_b4,4);
                      if (lVar5 != 4) {
                        iVar10 = *piVar2;
                        goto LAB_002ddcd0;
                      }
                      lVar5 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         &uStack_b0,4);
                      if (lVar5 != 4) {
                        iVar10 = *piVar2;
                        goto LAB_002ddcd0;
                      }
                      lVar5 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         &uStack_ac,4);
                      if (lVar5 != 4) {
                        iVar10 = *piVar2;
                        goto LAB_002ddcd0;
                      }
                      lVar5 = strcmp(auStack_110,PTR_DAT_003c71f4);
                      if (lVar5 != 0) {
                        FUN_002dea40(param_1,&puStack_120,0xfffffffffffffffe);
                        uStack_114 = 0;
                        uStack_118 = 0;
                        uStack_11c = 0;
                        strcpy(auStack_110,PTR_DAT_003c71f4);
                        strcpy(auStack_108,PTR_DAT_003c7208);
                      }
                      uStack_11c = uStack_b4;
                      uStack_118 = uStack_b0;
                      uStack_114 = uStack_ac;
                      if (acStack_c0[0] == '\x01') {
                        strcpy(auStack_110,PTR_DAT_003c71f8);
                      }
                      else if (acStack_c0[0] == '\x02') {
                        strcpy(auStack_110,PTR_DAT_003c71fc);
                      }
                      else if (acStack_c0[0] == '\x03') {
                        strcpy(auStack_110,PTR_DAT_003c7200);
                      }
                      else if (acStack_c0[0] == '\x04') {
                        strcpy(auStack_110,PTR_s_crouch_003c7204);
                      }
                      break;
                    case '\v':
                      lVar5 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         &uStack_b4,4);
                      if (lVar5 == 4) {
                        uVar6 = 0x405d60;
                        goto LAB_002ddc74;
                      }
                      goto LAB_002dddd4;
                    case '\f':
                      lVar5 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         &uStack_b4,4);
                      if (lVar5 == 4) {
                        uVar6 = 0x405d70;
                        goto LAB_002ddc74;
                      }
                      goto LAB_002dddd4;
                    case '\r':
                      lVar5 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         &uStack_b4,4);
                      if (lVar5 != 4) goto LAB_002dddd4;
                      uVar6 = 0x405d80;
LAB_002ddc74:
                      uVar8 = FUN_00291f58(uStack_b4);
                      sprintf(auStack_108,uVar6,uVar8);
                      break;
                    case '\x0e':
                      iVar10 = *piVar2;
                      if (iStack_bc == 1) {
                        lVar5 = (**(code **)(iVar10 + 0x24))
                                          ((int)piVar2 + (int)*(short *)(iVar10 + 0x20),param_2,
                                           auStack_108,0x40);
                        if (lVar5 != 0x40) goto LAB_002ddccc;
                        break;
                      }
                      iStack_a8 = 0;
                      lVar5 = (**(code **)(iVar10 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(iVar10 + 0x20),param_2,
                                         &iStack_a8,4);
                      if (lVar5 != 4) goto LAB_002dddd4;
                      uVar9 = iStack_a8 + 1;
                      if (iStack_a8 == 0) goto switchD_002dda54_caseD_0;
                      if (0x40 < uVar9) {
                        uVar9 = 0x40;
                      }
                      uVar4 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         auStack_108,uVar9);
                      if (uVar4 != uVar9) {
                        iVar10 = *piVar2;
                        goto LAB_002dddd8;
                      }
                    default:
switchD_002dda54_caseD_0:
                    }
                    if (acStack_c0[0] == '\0') {
                      lVar5 = strcmp(PTR_DAT_003c71f4,auStack_110);
                      if (lVar5 != 0) {
                        FUN_002dea40(param_1,&puStack_120,0xfffffffffffffffe);
                      }
                      (**(code **)(*piVar2 + 0x2c))
                                ((int)piVar2 + (int)*(short *)(*piVar2 + 0x28),param_2);
                      return 1;
                    }
                    iVar10 = *piVar2;
                    goto LAB_002dd9f8;
                  }
                  iVar10 = *piVar2;
                }
                else {
                  iVar10 = *piVar2;
                }
              }
              else {
LAB_002ddccc:
                iVar10 = *piVar2;
              }
            }
            else {
              iVar10 = *piVar2;
            }
LAB_002ddcd0:
            (**(code **)(iVar10 + 0x2c))((int)piVar2 + (int)*(short *)(iVar10 + 0x28),param_2);
            return 0;
          }
          iVar10 = *piVar2;
        }
        else {
          iVar10 = *piVar2;
        }
      }
      else {
        iVar10 = *piVar2;
      }
    }
    else {
      iVar10 = *piVar2;
    }
    (**(code **)(iVar10 + 0x2c))((int)piVar2 + (int)*(short *)(iVar10 + 0x28),param_2);
  }
  return 0;
}


// ==== FUN_002dde28 @ 002dde28 ====
// GLOBAL DAT_0045127c undefined_*
// GLOBAL DAT_00451290 undefined_*
// GLOBAL DAT_00451280 undefined_*
// GLOBAL DAT_004514f8 undefined4
// GLOBAL DAT_00451500 undefined4
// GLOBAL DAT_004514fc undefined4
// GLOBAL PTR_DAT_003c720c undefined_*
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL PTR_DAT_003c71f4 undefined_*
// GLOBAL PTR_DAT_003c71fc undefined_*
// GLOBAL PTR_DAT_003c7200 undefined_*
// GLOBAL PTR_s_crouch_003c7204 undefined_*
// GLOBAL DAT_00451288 undefined_*
// GLOBAL DAT_003e6758 undefined

/* Strings referenciadas:
     "crouch"
     "pause %f "
     "rotate %f "
     "orient %f "
     "Kynogon Path Way" */

undefined4 FUN_002dde28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined1 auStack_160 [64];
  undefined *puStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [72];
  char acStack_c0 [4];
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int aiStack_a8 [2];
  
  iVar9 = (int)param_1;
  strcpy(iVar9 + 0xd,PTR_DAT_003c720c);
  *(undefined1 *)(iVar9 + 0xc) = 0;
  *(undefined4 *)(iVar9 + 8) = 0;
  lVar1 = (*DAT_0045127c)(param_2,0x405dd0);
  if (lVar1 != 0) {
    uVar2 = strlen(0x405e88);
    lVar3 = (*DAT_00451290)(auStack_160,1,uVar2,lVar1);
    lVar4 = strlen(0x405e88);
    if ((lVar3 == lVar4) && (lVar4 = (*DAT_00451290)(&iStack_bc,4,1,lVar1), lVar4 == 1)) {
      auStack_160[(int)lVar3] = 0;
      lVar3 = stricmp(0x405e88,auStack_160);
      if ((lVar3 == 0) && (iStack_bc - 1U < 2)) {
        puStack_120 = &DAT_003e6758;
        uStack_11c = DAT_004514f8;
        uStack_118 = DAT_004514fc;
        uStack_114 = DAT_00451500;
        strcpy(auStack_110,PTR_DAT_003c71f8);
        strcpy(auStack_108,PTR_DAT_003c7208);
        uStack_114 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        strcpy(auStack_110,PTR_DAT_003c71f4);
        strcpy(auStack_108,PTR_DAT_003c7208);
        acStack_c0[0] = '\0';
        uStack_b8 = 0;
        (*DAT_00451290)(&uStack_b8,4,1,lVar1);
        if (0xff < uStack_b8) {
          (*DAT_00451280)(lVar1);
          return 0;
        }
        if (uStack_b8 != 0) {
          (*DAT_00451290)(iVar9 + 0xd,uStack_b8,1,lVar1);
        }
        *(undefined1 *)(iVar9 + 0xd + uStack_b8) = 0;
        (*DAT_00451290)(iVar9 + 0xc,1,1,lVar1);
        do {
          uStack_ac = 0x461c4000;
          uStack_b4 = 0x461c4000;
          uStack_b0 = 0x461c4000;
          (*DAT_00451290)(acStack_c0,1,1,lVar1);
          switch(acStack_c0[0]) {
          default:
switchD_002de0cc_caseD_0:
            break;
          case '\x01':
          case '\x02':
          case '\x03':
          case '\x04':
            (*DAT_00451290)(&uStack_b4,4,1,lVar1);
            (*DAT_00451290)(&uStack_b0,4,1,lVar1);
            (*DAT_00451290)(&uStack_ac,4,1,lVar1);
            lVar3 = strcmp(auStack_110,PTR_DAT_003c71f4);
            if (lVar3 != 0) {
              FUN_002dea40(param_1,&puStack_120,0xfffffffffffffffe);
              uStack_114 = 0;
              uStack_118 = 0;
              uStack_11c = 0;
              strcpy(auStack_110,PTR_DAT_003c71f4);
              strcpy(auStack_108,PTR_DAT_003c7208);
            }
            uStack_11c = uStack_b4;
            uStack_118 = uStack_b0;
            uStack_114 = uStack_ac;
            puVar6 = auStack_110;
            puVar8 = PTR_DAT_003c71f8;
            if ((((acStack_c0[0] == '\x01') || (puVar8 = PTR_DAT_003c71fc, acStack_c0[0] == '\x02'))
                || (puVar8 = PTR_DAT_003c7200, acStack_c0[0] == '\x03')) ||
               (puVar8 = PTR_s_crouch_003c7204, acStack_c0[0] == '\x04')) {
LAB_002de318:
              strcpy(puVar6,puVar8);
              goto switchD_002de0cc_caseD_0;
            }
            break;
          case '\v':
            (*DAT_00451290)(&uStack_b4,4,1,lVar1);
            uVar2 = 0x405d60;
            goto LAB_002de26c;
          case '\f':
            (*DAT_00451290)(&uStack_b4,4,1,lVar1);
            uVar2 = 0x405d70;
            goto LAB_002de26c;
          case '\r':
            (*DAT_00451290)(&uStack_b4,4,1,lVar1);
            uVar2 = 0x405d80;
LAB_002de26c:
            uVar5 = FUN_00291f58(uStack_b4);
            sprintf(auStack_108,uVar2,uVar5);
            break;
          case '\x0e':
            if (iStack_bc == 1) {
              (*DAT_00451290)(auStack_108,1,0x40,lVar1);
            }
            else {
              aiStack_a8[0] = 0;
              (*DAT_00451290)(aiStack_a8,4,1,lVar1);
              puVar6 = auStack_108;
              puVar8 = PTR_DAT_003c7208;
              if (aiStack_a8[0] == 0) goto LAB_002de318;
              uVar7 = 0x40;
              if (aiStack_a8[0] + 1U < 0x41) {
                uVar7 = aiStack_a8[0] + 1U;
              }
              (*DAT_00451288)(auStack_108,uVar7,lVar1);
            }
          }
          if (acStack_c0[0] == '\0') {
            lVar3 = strcmp(PTR_DAT_003c71f4,auStack_110);
            if (lVar3 != 0) {
              FUN_002dea40(param_1,&puStack_120,0xfffffffffffffffe);
            }
            (*DAT_00451280)(lVar1);
            return 1;
          }
        } while( true );
      }
    }
    (*DAT_00451280)(lVar1);
  }
  return 0;
}


// ==== FUN_002de3c0 @ 002de3c0 ====
// GLOBAL DAT_0045127c undefined_*
// GLOBAL DAT_00405e9c int
// GLOBAL DAT_0045128c undefined_*
// GLOBAL DAT_004514f8 undefined4
// GLOBAL DAT_00451500 undefined4
// GLOBAL DAT_004514fc undefined4
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL PTR_DAT_003c71f4 undefined_*
// GLOBAL PTR_DAT_003c71fc undefined_*
// GLOBAL PTR_DAT_003c7200 undefined_*
// GLOBAL PTR_s_crouch_003c7204 undefined_*
// GLOBAL DAT_00451280 undefined_*

/* Strings referenciadas:
     "crouch"
     "%s %f"
     "pause"
     "rotate"
     "orient"
     "Kynogon Path Way" */

undefined4 FUN_002de3c0(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [72];
  undefined1 auStack_1d0 [256];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 auStack_c8 [2];
  undefined1 uStack_c0;
  undefined1 auStack_bf [3];
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 auStack_ac [3];
  
  lVar4 = (*DAT_0045127c)(param_2,0x405e20);
  uVar3 = 0;
  if (lVar4 != 0) {
    iStack_bc = DAT_00405e9c;
    uVar5 = strlen(0x405e88);
    lVar6 = (*DAT_0045128c)(0x405e88,1,uVar5,lVar4);
    lVar7 = strlen(0x405e88);
    uVar3 = 0;
    if (lVar6 == lVar7) {
      lVar6 = (*DAT_0045128c)(&iStack_bc,4,1,lVar4);
      if (lVar6 == 1) {
        strcpy(auStack_220,PTR_DAT_003c71f8);
        strcpy(auStack_218,PTR_DAT_003c7208);
        strcpy(auStack_220,PTR_DAT_003c71f4);
        strcpy(auStack_218,PTR_DAT_003c7208);
        auStack_bf[0] = 0;
        uVar8 = strlen(param_1 + 0xd);
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        uStack_b8 = (undefined4)uVar8;
        (*DAT_0045128c)(&uStack_b8,4,1,lVar4);
        (*DAT_0045128c)(param_1 + 0xd,uVar8,1,lVar4);
        (*DAT_0045128c)(param_1 + 0xc,1,1,lVar4);
        uVar11 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          iVar10 = 0;
          do {
            uStack_c0 = 0;
            iVar2 = iVar10 + *(int *)(param_1 + 4);
            uStack_d0 = *(undefined4 *)(iVar2 + 4);
            uStack_cc = *(undefined4 *)(iVar2 + 8);
            auStack_c8[0] = *(undefined4 *)(iVar2 + 0xc);
            lVar6 = stricmp(*(int *)(param_1 + 4) + iVar10 + 0x10,PTR_DAT_003c71f8);
            if (lVar6 == 0) {
              uVar9 = 1;
            }
            else {
              lVar6 = stricmp(*(int *)(param_1 + 4) + iVar10 + 0x10,PTR_DAT_003c71fc);
              if (lVar6 == 0) {
                uVar9 = 2;
              }
              else {
                lVar6 = stricmp(*(int *)(param_1 + 4) + iVar10 + 0x10,PTR_DAT_003c7200);
                if (lVar6 == 0) {
                  uVar9 = 3;
                }
                else {
                  lVar6 = stricmp(*(int *)(param_1 + 4) + iVar10 + 0x10,PTR_s_crouch_003c7204);
                  uVar9 = 4;
                  if (lVar6 != 0) {
                    (*DAT_00451280)(lVar4);
                    return 0;
                  }
                }
              }
            }
            uStack_c0 = uVar9;
            (*DAT_0045128c)(&uStack_c0,1,1,lVar4);
            (*DAT_0045128c)(&uStack_d0,4,1,lVar4);
            (*DAT_0045128c)(&uStack_cc,4,1,lVar4);
            (*DAT_0045128c)(auStack_c8,4,1,lVar4);
            bVar1 = true;
            lVar6 = FUN_0035d7b0(*(int *)(param_1 + 4) + iVar10 + 0x18,0x405e28,auStack_1d0,
                                 &uStack_b4);
            if (lVar6 == 2) {
              uStack_b0 = uStack_b4;
              lVar6 = stricmp(auStack_1d0,0x405e30);
              if (lVar6 == 0) {
                uVar9 = 0xb;
              }
              else {
                lVar6 = stricmp(auStack_1d0,0x405e38);
                if (lVar6 == 0) {
                  uVar9 = 0xc;
                }
                else {
                  lVar6 = stricmp(auStack_1d0,0x405e40);
                  uVar9 = 0xd;
                  if (lVar6 != 0) goto LAB_002de784;
                }
              }
              uStack_c0 = uVar9;
              (*DAT_0045128c)(&uStack_c0,1,1,lVar4);
              (*DAT_0045128c)(&uStack_b0,4,1,lVar4);
              bVar1 = false;
            }
LAB_002de784:
            if (bVar1) {
              if (iStack_bc == 1) {
                uStack_c0 = 0xe;
                (*DAT_0045128c)(&uStack_c0,1,1,lVar4);
                iVar2 = *(int *)(param_1 + 4);
                uVar3 = 0x40;
              }
              else {
                uStack_c0 = 0xe;
                (*DAT_0045128c)(&uStack_c0,1,1,lVar4);
                auStack_ac[0] = strlen(*(int *)(param_1 + 4) + iVar10 + 0x18);
                (*DAT_0045128c)(auStack_ac,4,1,lVar4);
                iVar2 = *(int *)(param_1 + 4);
                uVar3 = auStack_ac[0];
              }
              (*DAT_0045128c)(iVar10 + iVar2 + 0x18,1,uVar3,lVar4);
            }
            uVar11 = uVar11 + 1;
            iVar10 = iVar10 + 0x58;
          } while (uVar11 < *(uint *)(param_1 + 8));
        }
        auStack_bf[0] = 0;
        (*DAT_0045128c)(auStack_bf,1,1,lVar4);
        (*DAT_00451280)(lVar4);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


// ==== FUN_002de8f8 @ 002de8f8 ====
// GLOBAL DAT_004514f8 undefined4
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL DAT_00451500 undefined4
// GLOBAL DAT_004514fc undefined4
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL DAT_003e6758 undefined

void FUN_002de8f8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [72];
  
  puStack_f0 = &DAT_003e6758;
  uStack_ec = DAT_004514f8;
  uStack_e4 = DAT_00451500;
  uStack_e8 = DAT_004514fc;
  strcpy(auStack_e0,PTR_DAT_003c71f8);
  strcpy(auStack_d8,PTR_DAT_003c7208);
  uStack_e4 = param_2[2];
  uStack_ec = *param_2;
  uStack_e8 = param_2[1];
  strcpy(auStack_d8,PTR_DAT_003c7208);
  strcpy(auStack_e0,param_3);
  FUN_002dea40(param_1,&puStack_f0,param_4);
  return;
}


// ==== FUN_002dea40 @ 002dea40 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_004514f8 int
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL DAT_004514fc int
// GLOBAL DAT_00451500 int
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e6758 undefined

undefined4 FUN_002dea40(int *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piStack_b0;
  int iStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  
  piVar5 = DAT_003c87e8;
  if (param_3 == 0xfffffffe) {
    param_3 = param_1[2];
  }
  uVar11 = param_1[2];
  uVar3 = 0;
  if (param_3 <= uVar11) {
    if (uVar11 == param_1[0x44]) {
      iVar14 = uVar11 + 5;
      param_1[0x44] = iVar14;
      piStack_b0 = (int *)0x0;
      iVar12 = *piVar5;
      iVar9 = iVar14 * 0x58 + 0x10;
      uVar4 = (**(code **)(iVar12 + 0x34))
                        ((int)piVar5 + (int)*(short *)(iVar12 + 0x30),iVar9,&piStack_b0);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_b0,iVar9,uVar4);
      }
      piVar13 = piStack_b0 + 4;
      *piStack_b0 = iVar14;
      iStack_ac = param_2 + 4;
      puStack_a8 = (undefined1 *)(param_2 + 0x10);
      puStack_a4 = (undefined1 *)(param_2 + 0x18);
      piVar5 = piVar13;
      for (iVar12 = uVar11 + 4; iVar12 != -1; iVar12 = iVar12 + -1) {
        *piVar5 = (int)&DAT_003e6758;
        puVar2 = PTR_DAT_003c71f8;
        piVar5[1] = DAT_004514f8;
        piVar5[2] = DAT_004514fc;
        piVar5[3] = DAT_00451500;
        strcpy(piVar5 + 4,puVar2);
        strcpy(piVar5 + 6,PTR_DAT_003c7208);
        piVar5 = piVar5 + 0x16;
      }
      memcpy(piVar13,param_1[1],param_3 * 0x58);
      piVar5 = piVar13 + param_3 * 0x16;
      piVar6 = piVar5 + 4;
      iVar12 = 7;
      *piVar5 = *piVar5;
      piVar5[1] = *(int *)(param_2 + 4);
      piVar5[2] = *(int *)(iStack_ac + 4);
      piVar5[3] = *(int *)(iStack_ac + 8);
      puVar7 = puStack_a8;
      do {
        uVar1 = *puVar7;
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 1;
        *(undefined1 *)piVar6 = uVar1;
        piVar6 = (int *)((int)piVar6 + 1);
      } while (iVar12 != -1);
      piVar5 = piVar5 + 6;
      iVar12 = 0x3f;
      puVar7 = puStack_a4;
      do {
        uVar1 = *puVar7;
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 1;
        *(undefined1 *)piVar5 = uVar1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (iVar12 != -1);
      memcpy(piVar13 + param_3 * 0x16 + 0x16,param_3 * 0x58 + param_1[1],
             (param_1[2] - param_3) * 0x58);
      piVar5 = (int *)param_1[1];
      if (piVar5 == (int *)0x0) {
        param_1[1] = (int)piVar13;
      }
      else {
        piVar6 = piVar5 + piVar5[-4] * 0x16;
        if (piVar5 == piVar6) {
          iVar12 = param_1[1];
        }
        else {
          do {
            piVar6 = piVar6 + -0x16;
            (**(code **)(*piVar6 + 0xc))((int)piVar6 + (int)*(short *)(*piVar6 + 8),0);
          } while ((int *)param_1[1] != piVar6);
          iVar12 = param_1[1];
        }
        (*(code *)PTR_FUN_003c87e0)(iVar12 + -0x10);
        param_1[1] = (int)piVar13;
      }
    }
    else {
      puStack_a4 = (undefined1 *)(param_2 + 0x18);
      iVar12 = param_1[1] + param_3 * 0x58;
      FUN_0035c5f0(iVar12 + 0x58,iVar12,(uVar11 - param_3) * 0x58);
      iVar12 = 7;
      puVar10 = (undefined4 *)(param_3 * 0x58 + param_1[1]);
      puVar7 = (undefined1 *)(param_2 + 0x10);
      puVar8 = puVar10 + 4;
      *puVar10 = *puVar10;
      puVar10[1] = *(undefined4 *)(param_2 + 4);
      puVar10[2] = *(undefined4 *)(param_2 + 8);
      puVar10[3] = *(undefined4 *)(param_2 + 0xc);
      do {
        uVar1 = *puVar7;
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 1;
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (iVar12 != -1);
      puVar10 = puVar10 + 6;
      iVar12 = 0x3f;
      puVar7 = puStack_a4;
      do {
        uVar1 = *puVar7;
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 1;
        *(undefined1 *)puVar10 = uVar1;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      } while (iVar12 != -1);
    }
    uVar11 = param_1[2];
    if (param_3 < uVar11) {
      iVar12 = *param_1;
      while( true ) {
        uVar11 = uVar11 - 1;
        (**(code **)(iVar12 + 0x14))((int)param_1 + (int)*(short *)(iVar12 + 0x10),uVar11);
        if (uVar11 <= param_3) break;
        iVar12 = *param_1;
      }
      iVar12 = param_1[2];
    }
    else {
      iVar12 = param_1[2];
    }
    uVar3 = 1;
    param_1[2] = iVar12 + 1;
  }
  return uVar3;
}


// ==== FUN_002dee98 @ 002dee98 ====
// GLOBAL DAT_003e6758 undefined

undefined4 FUN_002dee98(undefined8 param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  piVar8 = (int *)param_1;
  if ((param_2 < (uint)piVar8[2]) && (param_3 < (uint)piVar8[2])) {
    puStack_b0 = &DAT_003e6758;
    puVar5 = auStack_a0;
    iVar6 = 7;
    iVar3 = param_2 * 0x58 + piVar8[1];
    uStack_ac = *(undefined4 *)(iVar3 + 4);
    puVar4 = (undefined1 *)(iVar3 + 0x10);
    uStack_a8 = *(undefined4 *)(iVar3 + 8);
    uStack_a4 = *(undefined4 *)(iVar3 + 0xc);
    do {
      uVar1 = *puVar4;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar6 != -1);
    puVar5 = auStack_98;
    puVar4 = (undefined1 *)(iVar3 + 0x18);
    iVar3 = 0x3f;
    do {
      uVar1 = *puVar4;
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != -1);
    if (param_2 < (uint)piVar8[2]) {
      iVar3 = piVar8[1] + param_2 * 0x58;
      FUN_0035c5f0(iVar3,iVar3 + 0x58,((piVar8[2] - param_2) + -1) * 0x58);
      iVar3 = piVar8[2];
      uVar7 = param_2 + 1;
      piVar8[2] = iVar3 - 1U;
      if (uVar7 <= iVar3 - 1U) {
        iVar3 = *piVar8;
        while( true ) {
          (**(code **)(iVar3 + 0x14))((int)piVar8 + (int)*(short *)(iVar3 + 0x10),uVar7,uVar7 - 1);
          uVar7 = uVar7 + 1;
          if ((uint)piVar8[2] < uVar7) break;
          iVar3 = *piVar8;
        }
      }
    }
    FUN_002dea40(param_1,&puStack_b0,param_3);
    (**(code **)(*piVar8 + 0x14))((int)piVar8 + (int)*(short *)(*piVar8 + 0x10),param_2,param_3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_002df060 @ 002df060 ====
// GLOBAL DAT_00451278 undefined_*
// GLOBAL DAT_00451274 undefined_*

void FUN_002df060(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8) + -1) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if (DAT_00451278 != (code *)0x0) {
        (*DAT_00451278)(iVar2 + iVar1 + 4,0,0xff,0xff);
        iVar1 = *(int *)(param_1 + 4);
      }
      if (DAT_00451274 != (code *)0x0) {
        (*DAT_00451274)(iVar2 + iVar1 + 4,iVar2 + iVar1 + 0x5c,0xff,0xff,0xff);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x58;
    } while (iVar3 < *(int *)(param_1 + 8) + -1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (DAT_00451278 != (code *)0x0) {
      (*DAT_00451278)(*(int *)(param_1 + 8) * 0x58 + *(int *)(param_1 + 4) + -0x54,0,0xff,0xff);
    }
    if (*(char *)(param_1 + 0xc) == '\x01') {
      if (DAT_00451274 != (code *)0x0) {
        (*DAT_00451274)(*(int *)(param_1 + 8) * 0x58 + *(int *)(param_1 + 4) + -0x54,
                        *(int *)(param_1 + 4) + 4,0xff,0xff,0xff);
      }
    }
  }
  return;
}


// ==== FUN_002df198 @ 002df198 ====
// GLOBAL DAT_004514f8 undefined4
// GLOBAL PTR_DAT_003c71f8 undefined_*
// GLOBAL DAT_004514fc undefined4
// GLOBAL DAT_00451500 undefined4
// GLOBAL PTR_DAT_003c7208 undefined_*
// GLOBAL DAT_003e6758 undefined

undefined8 FUN_002df198(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003e6758;
  puVar1 = PTR_DAT_003c71f8;
  puVar2[1] = DAT_004514f8;
  puVar2[2] = DAT_004514fc;
  puVar2[3] = DAT_00451500;
  strcpy(puVar2 + 4,puVar1);
  strcpy(puVar2 + 6,PTR_DAT_003c7208);
  return param_1;
}


// ==== FUN_002df230 @ 002df230 ====
// GLOBAL PTR_DAT_003c720c undefined_*
// GLOBAL DAT_003e6730 undefined

undefined8 FUN_002df230(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar1 = PTR_DAT_003c720c;
  *puVar2 = &DAT_003e6730;
  strcpy((int)puVar2 + 0xd,puVar1);
  puVar2[2] = 0;
  puVar2[0x44] = 0;
  puVar2[1] = 0;
  return param_1;
}


// ==== FUN_002df2a0 @ 002df2a0 ====
// GLOBAL PTR_DAT_003c720c undefined_*
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e6730 undefined

void FUN_002df2a0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar2 = PTR_DAT_003c720c;
  puVar5 = (undefined4 *)param_1;
  *puVar5 = &DAT_003e6730;
  strcpy((int)puVar5 + 0xd,puVar2);
  piVar1 = (int *)puVar5[1];
  *(undefined1 *)(puVar5 + 3) = 0;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1 + piVar1[-4] * 0x16;
    if (piVar1 == piVar4) {
      iVar3 = puVar5[1];
    }
    else {
      do {
        piVar4 = piVar4 + -0x16;
        (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8),0);
      } while ((int *)puVar5[1] != piVar4);
      iVar3 = puVar5[1];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar3 + -0x10);
    puVar5[1] = 0;
  }
  *puVar5 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002df380 @ 002df380 ====
// GLOBAL DAT_003e6730 undefined

undefined8 FUN_002df380(undefined8 param_1)

{
  *(undefined4 *)param_1 = &DAT_003e6730;
  FUN_002dd548();
  return param_1;
}


// ==== FUN_002df3d8 @ 002df3d8 ====

undefined4 FUN_002df3d8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 < (uint)param_1[2]) {
    iVar2 = param_1[1] + param_2 * 0x58;
    FUN_0035c5f0(iVar2,iVar2 + 0x58,((param_1[2] - param_2) + -1) * 0x58);
    iVar2 = param_1[2];
    param_1[2] = iVar2 - 1U;
    if (param_2 + 1 <= iVar2 - 1U) {
      iVar2 = *param_1;
      uVar3 = param_2 + 1;
      while( true ) {
        (**(code **)(iVar2 + 0x14))((int)param_1 + (int)*(short *)(iVar2 + 0x10),uVar3,uVar3 - 1);
        if ((uint)param_1[2] < uVar3 + 1) break;
        iVar2 = *param_1;
        uVar3 = uVar3 + 1;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_002df658 @ 002df658 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

undefined4 FUN_002df658(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 auStack_60 [4];
  
  piVar1 = *(int **)(DAT_003c9ed4 + 4);
  if ((piVar1 == (int *)0x0) ||
     (lVar3 = (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_2),
     lVar3 == 0)) {
LAB_002df75c:
    uVar2 = 0;
  }
  else {
    lVar3 = (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_2);
    *(int *)(param_1 + 8) = (int)lVar3;
    if (lVar3 != 0) {
      auStack_60[0] = 0;
      iVar5 = (int)lVar3 + 1;
      uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar5,auStack_60)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_60[0],iVar5,uVar4);
      }
      *(undefined4 *)(param_1 + 4) = auStack_60[0];
      iVar5 = (**(code **)(*piVar1 + 0x24))
                        ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2,auStack_60[0],
                         *(undefined4 *)(param_1 + 8));
      if (iVar5 != *(int *)(param_1 + 8)) {
        (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),param_2);
        goto LAB_002df75c;
      }
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = 0;
    }
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),param_2);
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_002df7a8 @ 002df7a8 ====
// GLOBAL DAT_0045127c undefined_*
// GLOBAL DAT_00451294 undefined_*
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_00451290 undefined_*
// GLOBAL DAT_00451280 undefined_*

undefined4 FUN_002df7a8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 auStack_70 [4];
  
  lVar3 = (*DAT_0045127c)(param_2,0x405eb0);
  uVar2 = 0;
  if (lVar3 != 0) {
    lVar4 = (*DAT_00451294)(lVar3,0,2);
    *(int *)(param_1 + 8) = (int)lVar4;
    if (lVar4 != 0) {
      auStack_70[0] = 0;
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),lVar4,auStack_70)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_70[0],lVar4,uVar5);
      }
      *(undefined4 *)(param_1 + 4) = auStack_70[0];
      iVar1 = (*DAT_00451290)(auStack_70[0],1,*(undefined4 *)(param_1 + 8),lVar3);
      if (iVar1 != *(int *)(param_1 + 8)) {
        (*DAT_00451280)(lVar3);
        return 0;
      }
    }
    (*DAT_00451280)(lVar3);
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_002df8c8 @ 002df8c8 ====
// GLOBAL DAT_003e6888 undefined

undefined8 FUN_002df8c8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[2] = 0;
  *puVar1 = &DAT_003e6888;
  puVar1[1] = 0;
  return param_1;
}


// ==== FUN_002df8e8 @ 002df8e8 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e6888 undefined

void FUN_002df8e8(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003e6888;
  if (puVar1[1] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    puVar1[1] = 0;
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002df960 @ 002df960 ====
// GLOBAL DAT_003e6888 undefined

undefined8 FUN_002df960(undefined8 param_1)

{
  *(undefined4 *)param_1 = &DAT_003e6888;
  FUN_002df9b8();
  return param_1;
}


// ==== FUN_002df9b8 @ 002df9b8 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

long FUN_002df9b8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_50 [4];
  
  if (param_1 != param_2) {
    iVar1 = *(int *)((int)param_2 + 8);
    iVar3 = (int)param_1;
    *(int *)(iVar3 + 8) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    else {
      auStack_50[0] = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1,auStack_50)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_50[0],iVar1,uVar2);
      }
      *(undefined4 *)(iVar3 + 4) = auStack_50[0];
      memcpy(auStack_50[0],*(undefined4 *)((int)param_2 + 4),*(undefined4 *)(iVar3 + 8));
    }
  }
  return param_1;
}


// ==== FUN_002dfa68 @ 002dfa68 ====
// GLOBAL DAT_0045127c undefined_*
// GLOBAL DAT_0045128c undefined_*
// GLOBAL DAT_00451280 undefined_*

undefined4 FUN_002dfa68(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = (*DAT_0045127c)(param_2,0x405eb8);
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = (*DAT_0045128c)(*(undefined4 *)(param_1 + 4),1,*(undefined4 *)(param_1 + 8),lVar3);
    if (iVar1 == *(int *)(param_1 + 8)) {
      (*DAT_00451280)(lVar3);
      uVar2 = 1;
    }
    else {
      (*DAT_00451280)(lVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_002dfb00 @ 002dfb00 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003e6cf8 undefined

undefined8 FUN_002dfb00(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_40 [4];
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = &DAT_003e6cf8;
  iVar1 = FUN_0038b538();
  iVar1 = *(int *)(iVar1 + 0x400);
  puVar5[1] = iVar1;
  if (iVar1 == 0) {
    puVar5[2] = 0;
  }
  else {
    auStack_40[0] = 0;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 << 2,
                       auStack_40);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_40[0],iVar1 << 2,uVar3);
    }
    iVar1 = 0;
    puVar5[2] = auStack_40[0];
    if (0 < (int)puVar5[1]) {
      iVar2 = puVar5[2];
      while( true ) {
        iVar4 = iVar1 * 4;
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar4 + iVar2) = 0;
        if ((int)puVar5[1] <= iVar1) break;
        iVar2 = puVar5[2];
      }
    }
  }
  return param_1;
}


// ==== FUN_002dfbf8 @ 002dfbf8 ====

void FUN_002dfbf8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 8);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 4) = 0;
      }
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 4) <= iVar2) break;
      iVar1 = *(int *)(param_1 + 8);
    }
  }
  return;
}


// ==== FUN_002dfc38 @ 002dfc38 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e6cf8 undefined

void FUN_002dfc38(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e6cf8;
  if (puVar4[1] != 0) {
    iVar3 = 0;
    if (0 < (int)puVar4[1]) {
      iVar2 = puVar4[2];
      while( true ) {
        piVar1 = *(int **)(iVar3 * 4 + iVar2);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        iVar3 = iVar3 + 1;
        if ((int)puVar4[1] <= iVar3) break;
        iVar2 = puVar4[2];
      }
    }
    (*(code *)PTR_FUN_003c87e0)(puVar4[2]);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002dfd08 @ 002dfd08 ====

undefined8 FUN_002dfd08(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1;
  if (0 < *(int *)(iVar5 + 4)) {
    iVar2 = *(int *)(param_2 + 8);
    while( true ) {
      iVar3 = iVar4 * 4;
      if (*(int *)(iVar3 + iVar2) == 0) {
        iVar2 = *(int *)(iVar5 + 4);
      }
      else if (*(char *)(*(int *)(iVar3 + iVar2) + 4) == '\0') {
        iVar2 = *(int *)(iVar5 + 4);
      }
      else {
        piVar1 = *(int **)(iVar3 + *(int *)(iVar5 + 8));
        iVar2 = *piVar1;
        (**(code **)(iVar2 + 0x14))((int)piVar1 + (int)*(short *)(iVar2 + 0x10));
        *(undefined1 *)(*(int *)(iVar3 + *(int *)(iVar5 + 8)) + 4) = 1;
        iVar2 = *(int *)(iVar5 + 4);
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      iVar2 = *(int *)(param_2 + 8);
    }
  }
  return param_1;
}


// ==== FUN_002dfdc8 @ 002dfdc8 ====
// GLOBAL DAT_003e6d40 undefined

undefined8 FUN_002dfdc8(undefined8 param_1)

{
  FUN_0038b6b0();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e6d40;
  return param_1;
}


// ==== FUN_002dfe08 @ 002dfe08 ====

undefined4 FUN_002dfe08(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 4))) {
    return *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 8));
  }
  return 0;
}


// ==== FUN_002dfe40 @ 002dfe40 ====

undefined8 FUN_002dfe40(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (iVar1 < *(int *)(param_1 + 4)) {
      if ((code *)param_2[1] != (code *)0x0) {
        uVar2 = (*(code *)param_2[1])();
        *(int *)(iVar1 * 4 + *(int *)(param_1 + 8)) = (int)uVar2;
      }
    }
  }
  return uVar2;
}


// ==== FUN_002dfeb0 @ 002dfeb0 ====
// GLOBAL DAT_003e6d28 undefined

undefined8 FUN_002dfeb0(undefined8 param_1)

{
  FUN_0038b840();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003e6d28;
  return param_1;
}


// ==== FUN_002dff10 @ 002dff10 ====
// GLOBAL DAT_003e7558 undefined

undefined8 FUN_002dff10(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  *puVar3 = &DAT_003e7558;
  iVar1 = **(int **)(param_2 + 0x18);
  iVar1 = (**(code **)(iVar1 + 0x1c))
                    ((int)*(int **)(param_2 + 0x18) + (int)*(short *)(iVar1 + 0x18));
  uVar2 = (**(code **)(iVar1 + 4))();
  puVar3[1] = uVar2;
  puVar3[2] = param_2;
  return param_1;
}


