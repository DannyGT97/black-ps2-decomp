// ==== FUN_002ec5b8 @ 002ec5b8 ====

undefined4 FUN_002ec5b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)param_1 + 8);
  if (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 0x18)) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *(int *)(iVar2 + 4) = (int)param_2;
      if (*(int *)(iVar1 + 0xc) == 0) {
        *(int *)(iVar1 + 0xc) = iVar2;
        *(int *)(iVar1 + 8) = iVar2;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
        *(undefined4 *)(*(int *)(iVar1 + 0xc) + 8) = 0;
        *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc) = 0;
      }
      else {
        *(int *)(iVar2 + 8) = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(*(int *)(iVar1 + 0xc) + 0xc) = iVar2;
        *(int *)(iVar1 + 0xc) = iVar2;
      }
    }
    FUN_002e4860(param_2,param_1);
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_002ec6d8 @ 002ec6d8 ====

void FUN_002ec6d8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_002e4b98(param_2,param_1);
  iVar1 = *(int *)(*(int *)((int)param_1 + 8) + 8);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  iVar2 = *(int *)((int)param_1 + 8);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  if (iVar1 == *(int *)(iVar2 + 8)) {
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  else {
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (iVar3 == 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
  return;
}


// ==== CTeam_002ec8a0 @ 002ec8a0 ====

/* Strings referenciadas:
     "CTeam" */

void CTeam_002ec8a0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00451650 = &DAT_003ebb48;
    }
    else {
      FUN_0038f000(0x451540,0x406f88,0x2ec918,0,0,0);
      DAT_00451650 = &DAT_003ebb30;
    }
  }
  return;
}


// ==== FUN_002ec918 @ 002ec918 ====

void FUN_002ec918(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_50 [4];
  
  auStack_50[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x18,auStack_50);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_50[0],0x18,uVar1);
  }
  FUN_002ec1b8(auStack_50[0],param_1,param_2);
  return;
}


// ==== FUN_002ec9d0 @ 002ec9d0 ====

/* Strings referenciadas:
     "Class" */

undefined4 FUN_002ec9d0(int *param_1,long param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 != 0) {
    iVar7 = (int)param_2;
    uVar6 = 0;
    if (*(int *)(iVar7 + 0x20) != 0) {
      do {
        uVar4 = FUN_002e33e0(param_2,uVar6);
        uVar4 = FUN_002e3920(uVar4);
        lVar5 = stricmp(uVar4,0x406f80);
        if (lVar5 == 0) {
          uVar3 = *(uint *)(iVar7 + 0x20);
        }
        else {
          iVar2 = *param_1;
          sVar1 = *(short *)(iVar2 + 0x38);
          uVar4 = FUN_002e33e0(param_2,uVar6);
          lVar5 = (**(code **)(iVar2 + 0x3c))((int)param_1 + (int)sVar1,uVar4);
          if (lVar5 == 0) {
            return 0;
          }
          uVar3 = *(uint *)(iVar7 + 0x20);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  return 1;
}


// ==== FUN_002ecaa8 @ 002ecaa8 ====

/* WARNING: Removing unreachable block (ram,0x002ecabc) */

int FUN_002ecaa8(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return -1;
  }
  return (*(int *)(param_1 + 0x10) - *(int *)(*(int *)(DAT_003c9ed4 + 0x1c) + 4)) / 0x14;
}


// ==== FUN_002ecaf0 @ 002ecaf0 ====

undefined8 FUN_002ecaf0(undefined8 param_1)

{
  FUN_0038f000();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003ebb30;
  return param_1;
}


// ==== FUN_002ecb40 @ 002ecb40 ====

void FUN_002ecb40(void)

{
  CTeam_002ec8a0(1,0xffff);
  return;
}


// ==== FUN_002ecb60 @ 002ecb60 ====

void FUN_002ecb60(void)

{
  CTeam_002ec8a0(0,0xffff);
  return;
}


// ==== FUN_002ecb80 @ 002ecb80 ====

/* Strings referenciadas:
     "AstarLoop" */

undefined4 FUN_002ecb80(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined4 *puStack_c8;
  int *piStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  
  DAT_003ca548 = 0;
  FUN_002ed1e8();
  if (param_1 == 0) {
    DAT_003ca520 = 0;
    DAT_003ca524 = (undefined4 *)0x0;
    DAT_003ca528 = (undefined4 *)0x0;
    DAT_003ca52c = (int *)0x0;
    DAT_003ca530 = (int *)0x0;
    DAT_003ca534 = 0;
    DAT_003ca538 = 0;
  }
  else {
    DAT_003ca520 = (int)param_1;
    puStack_d0 = (undefined4 *)0x0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_d0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_d0,0x1c,uVar2);
    }
    puVar1 = puStack_d0;
    iVar7 = DAT_003ca520;
    puStack_b0 = puStack_d0;
    puStack_d0[2] = 0;
    *puStack_d0 = &DAT_003ebe60;
    puStack_d0[5] = 0;
    puStack_ac = &uStack_b4;
    puStack_d0[6] = iVar7;
    puStack_d0[4] = 0;
    puStack_d0[1] = 0;
    puStack_d0[3] = 0;
    if (iVar7 != 0) {
      piStack_cc = (int *)0x0;
      iVar8 = iVar7 * 0x14 + 0x10;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                         (uint)&puStack_d0 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_cc,iVar8,uVar2);
      }
      iVar8 = iVar7 + -1;
      piVar5 = piStack_cc + 4;
      *piStack_cc = iVar7;
      piVar3 = piVar5;
      if (iVar7 != 0) {
        do {
          *piVar3 = (int)&DAT_003ebe48;
          iVar8 = iVar8 + -1;
          piVar3[2] = 0;
          piVar3[3] = 0;
          *(undefined1 *)(piVar3 + 4) = 0;
          piVar3 = piVar3 + 5;
        } while (iVar8 != -1);
      }
      puVar1[1] = piVar5;
      uVar6 = 1;
      puVar1[4] = piVar5;
      piStack_cc[6] = 0;
      iVar7 = 0;
      if (1 < (uint)puVar1[6]) {
        iVar8 = 0x14;
        do {
          uVar6 = uVar6 + 1;
          iVar4 = puVar1[1] + iVar7;
          iVar7 = iVar7 + 0x14;
          *(int *)(iVar8 + puVar1[1] + 8) = iVar4;
          *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
          iVar8 = iVar8 + 0x14;
        } while (uVar6 < (uint)puVar1[6]);
      }
      *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
    }
    DAT_003ca524 = puStack_b0;
    puStack_c8 = (undefined4 *)0x0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_c8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_c8,0x1c,uVar2);
    }
    puVar1 = puStack_c8;
    iVar7 = DAT_003ca520;
    *puStack_c8 = &DAT_003ebe60;
    puStack_c8[2] = 0;
    puStack_c8[5] = 0;
    puStack_c8[6] = iVar7;
    puStack_c8[4] = 0;
    puStack_c8[1] = 0;
    puStack_c8[3] = 0;
    if (iVar7 != 0) {
      piStack_c4 = (int *)0x0;
      iVar8 = iVar7 * 0x14 + 0x10;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                         (uint)&puStack_d0 | 0xc);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_c4,iVar8,uVar2);
      }
      iVar8 = iVar7 + -1;
      piVar5 = piStack_c4 + 4;
      *piStack_c4 = iVar7;
      piVar3 = piVar5;
      if (iVar7 != 0) {
        do {
          *piVar3 = (int)&DAT_003ebe48;
          iVar8 = iVar8 + -1;
          piVar3[2] = 0;
          piVar3[3] = 0;
          *(undefined1 *)(piVar3 + 4) = 0;
          piVar3 = piVar3 + 5;
        } while (iVar8 != -1);
      }
      puVar1[1] = piVar5;
      uVar6 = 1;
      puVar1[4] = piVar5;
      piStack_c4[6] = 0;
      iVar7 = 0;
      if (1 < (uint)puVar1[6]) {
        iVar8 = 0x14;
        do {
          uVar6 = uVar6 + 1;
          iVar4 = puVar1[1] + iVar7;
          iVar7 = iVar7 + 0x14;
          *(int *)(iVar8 + puVar1[1] + 8) = iVar4;
          *(int *)(*(int *)(iVar8 + puVar1[1] + 8) + 0xc) = iVar8 + puVar1[1];
          iVar8 = iVar8 + 0x14;
        } while (uVar6 < (uint)puVar1[6]);
      }
      *(undefined4 *)(puVar1[6] * 0x14 + puVar1[1] + -8) = 0;
    }
    iVar7 = DAT_003ca520;
    piStack_c0 = (int *)0x0;
    iVar8 = DAT_003ca520 * 8 + 0x10;
    DAT_003ca528 = puVar1;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,&piStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_c0,iVar8,uVar2);
    }
    iVar8 = iVar7 + -1;
    DAT_003ca52c = piStack_c0 + 4;
    *piStack_c0 = iVar7;
    piVar3 = DAT_003ca52c;
    if (iVar7 != 0) {
      do {
        *piVar3 = (int)&DAT_003ebe30;
        iVar8 = iVar8 + -1;
        piVar3[1] = 0;
        piVar3 = piVar3 + 2;
      } while (iVar8 != -1);
    }
    iVar7 = DAT_003ca520;
    piStack_bc = (int *)0x0;
    iVar8 = DAT_003ca520 * 8 + 0x10;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,&piStack_bc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_bc,iVar8,uVar2);
    }
    iVar8 = iVar7 + -1;
    DAT_003ca530 = piStack_bc + 4;
    *piStack_bc = iVar7;
    piVar3 = DAT_003ca530;
    if (iVar7 != 0) {
      do {
        *piVar3 = (int)&DAT_003ebe30;
        iVar8 = iVar8 + -1;
        piVar3[1] = 0;
        piVar3 = piVar3 + 2;
      } while (iVar8 != -1);
    }
    uStack_b8 = 0;
    iVar7 = DAT_003ca520 << 2;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&uStack_b8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b8,iVar7,uVar2);
    }
    iVar7 = DAT_003ca520 << 2;
    DAT_003ca534 = uStack_b8;
    uStack_b4 = 0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,puStack_ac);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b4,iVar7,uVar2);
    }
    DAT_003ca538 = uStack_b4;
  }
  uVar2 = FUN_002e91c0();
  DAT_003ca544 = FUN_002e94b8(uVar2,0x4070d0);
  return 1;
}


// ==== FUN_002ed1e8 @ 002ed1e8 ====

void FUN_002ed1e8(void)

{
  int *piVar1;
  
  if (DAT_003ca524 != (int *)0x0) {
    (**(code **)(*DAT_003ca524 + 0xc))((int)DAT_003ca524 + (int)*(short *)(*DAT_003ca524 + 8),3);
  }
  if (DAT_003ca528 != (int *)0x0) {
    (**(code **)(*DAT_003ca528 + 0xc))((int)DAT_003ca528 + (int)*(short *)(*DAT_003ca528 + 8),3);
  }
  if (DAT_003ca52c != (int *)0x0) {
    piVar1 = DAT_003ca52c + DAT_003ca52c[-4] * 2;
    if (DAT_003ca52c != piVar1) {
      do {
        piVar1 = piVar1 + -2;
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),0);
      } while (DAT_003ca52c != piVar1);
    }
    (*(code *)PTR_FUN_003c87e0)(DAT_003ca52c + -4);
  }
  if (DAT_003ca530 != (int *)0x0) {
    piVar1 = DAT_003ca530 + DAT_003ca530[-4] * 2;
    if (DAT_003ca530 != piVar1) {
      do {
        piVar1 = piVar1 + -2;
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),0);
      } while (DAT_003ca530 != piVar1);
    }
    (*(code *)PTR_FUN_003c87e0)(DAT_003ca530 + -4);
  }
  if (DAT_003ca534 != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (DAT_003ca538 != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  DAT_003ca520 = 0;
  DAT_003ca524 = (int *)0x0;
  DAT_003ca528 = (int *)0x0;
  DAT_003ca52c = (int *)0x0;
  DAT_003ca530 = (int *)0x0;
  DAT_003ca534 = 0;
  DAT_003ca538 = 0;
  return;
}


// ==== FUN_002ed3a8 @ 002ed3a8 ====

undefined8 FUN_002ed3a8(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_2c;
  
  iStack_2c = *(int *)(param_2 + 8);
  if (iStack_2c != 0) {
    do {
      if (*(float *)(*param_3 * 4 + DAT_003ca538) <
          *(float *)(**(int **)(iStack_2c + 4) * 4 + DAT_003ca538)) break;
      iStack_2c = *(int *)(iStack_2c + 0xc);
    } while (iStack_2c != 0);
  }
  iVar1 = *(int *)(param_2 + 0x10);
  puVar3 = (undefined4 *)param_1;
  if (iVar1 == 0) {
    *puVar3 = &DAT_003ebe30;
    puVar3[1] = 0;
  }
  else {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
    *(int **)(iVar1 + 4) = param_3;
    *(undefined1 *)(iVar1 + 0x10) = 1;
    if (iStack_2c == 0) {
      if (*(int *)(param_2 + 0xc) == 0) {
        *(int *)(param_2 + 0xc) = iVar1;
        *(int *)(param_2 + 8) = iVar1;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(*(int *)(param_2 + 8) + 8) = 0;
        *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = 0;
        *(undefined4 *)(*(int *)(param_2 + 0xc) + 0xc) = 0;
      }
      else {
        *(int *)(iVar1 + 8) = *(int *)(param_2 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(*(int *)(param_2 + 0xc) + 0xc) = iVar1;
        *(int *)(param_2 + 0xc) = iVar1;
      }
    }
    else {
      iVar2 = *(int *)(iStack_2c + 8);
      *(int *)(iVar1 + 0xc) = iStack_2c;
      *(int *)(iStack_2c + 8) = iVar1;
      *(int *)(iVar1 + 8) = iVar2;
      if (iVar2 == 0) {
        *(int *)(param_2 + 8) = iVar1;
      }
      else {
        *(int *)(iVar2 + 0xc) = iVar1;
      }
    }
    *puVar3 = &DAT_003ebe30;
    puVar3[1] = iVar1;
  }
  return param_1;
}


// ==== FUN_002ed530 @ 002ed530 ====

undefined1
FUN_002ed530(float param_1,float param_2,undefined8 param_3,undefined4 param_4,int *param_5,
            int *param_6,int param_7,uint *param_8,float *param_9,float *param_10,char param_11)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined *puStack_100;
  int iStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int iStack_e0;
  
  iVar12 = (int)param_3;
  if ((((*(uint *)(iVar12 + 4) & 1) == 0) || (*(int *)(iVar12 + 0x58) == 0)) ||
     (*(int *)(iVar12 + 0x54) == 0)) {
LAB_002ed5b4:
    uVar2 = 0;
  }
  else {
    fVar14 = param_2;
    uStack_ec = param_4;
    piStack_e8 = param_5;
    piStack_e4 = param_6;
    iStack_e0 = param_7;
    if (DAT_00451230 == (code *)0x0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = (float)(*DAT_00451230)();
    }
    iVar9 = DAT_003ca528;
    fVar15 = 1.0;
    fVar18 = *param_9 + param_1 * *param_10;
    if (fVar18 != 0.0) {
      fVar15 = param_2 / fVar18;
    }
    if (param_11 == '\0') {
      if (DAT_003ca54c == '\0') {
        if (DAT_003ca53c == piStack_e8) {
          if (((DAT_003ca550 != piStack_e8) || (DAT_003ca554 != piStack_e4)) ||
             ((DAT_003ca558 != iStack_e0 ||
              ((DAT_003ca55c != *(int *)(iVar12 + 0x58) || (DAT_003ca560 != *(int *)(iVar12 + 0x54))
               ))))) {
            DAT_003ca54c = '\x01';
          }
        }
        else {
          DAT_003ca540 = -1;
          DAT_003ca54c = '\x01';
        }
      }
    }
    else {
      DAT_003ca54c = '\x01';
    }
    if (DAT_003ca54c == '\x01') {
      iVar10 = *(int *)(DAT_003ca528 + 8);
      while (iVar10 != 0) {
        *(undefined1 *)(*(int *)(iVar9 + 8) + 0x10) = 0;
        iVar10 = *(int *)(*(int *)(iVar9 + 8) + 0xc);
        *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = *(undefined4 *)(iVar9 + 0x10);
        uVar7 = *(undefined4 *)(iVar9 + 8);
        *(int *)(iVar9 + 8) = iVar10;
        *(undefined4 *)(iVar9 + 0x10) = uVar7;
      }
      *(undefined4 *)(iVar9 + 0x14) = 0;
      *(undefined4 *)(iVar9 + 0xc) = 0;
      iVar9 = DAT_003ca524;
      if (*(int *)(DAT_003ca524 + 8) == 0) {
        *(undefined4 *)(DAT_003ca524 + 0x14) = 0;
      }
      else {
        do {
          *(undefined1 *)(*(int *)(iVar9 + 8) + 0x10) = 0;
          iVar10 = *(int *)(*(int *)(iVar9 + 8) + 0xc);
          *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = *(undefined4 *)(iVar9 + 0x10);
          uVar7 = *(undefined4 *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar10;
          *(undefined4 *)(iVar9 + 0x10) = uVar7;
        } while (iVar10 != 0);
        *(undefined4 *)(iVar9 + 0x14) = 0;
      }
      *(undefined4 *)(iVar9 + 0xc) = 0;
      iVar9 = *(int *)(iVar12 + 0x14);
      uVar11 = 0;
      if (0 < iVar9) {
        iVar10 = 0;
        do {
          if (uVar11 < *(uint *)(iVar12 + 0xc)) {
            piVar5 = (int *)(iVar10 + *(int *)(iVar12 + 0x18));
            piVar8 = (int *)0x0;
            if (*piVar5 != -1) {
              piVar8 = piVar5;
            }
          }
          else {
            piVar8 = (int *)0x0;
          }
          if (piVar8 != (int *)0x0) {
            iVar9 = iVar9 + -1;
            *(undefined4 *)(*piVar8 * 8 + DAT_003ca52c + 4) = 0;
            iStack_fc = 0;
            *(undefined4 *)(*piVar8 * 8 + DAT_003ca530 + 4) = 0;
            puStack_100 = &DAT_003e0040;
          }
          iVar10 = iVar10 + 0x14;
          uVar11 = uVar11 + 1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(*piStack_e8 * 4 + DAT_003ca534) = 0;
      iVar9 = **(int **)(iVar12 + 0x58);
      lVar4 = (**(code **)(iVar9 + 0x14))
                        ((int)*(int **)(iVar12 + 0x58) + (int)*(short *)(iVar9 + 0x10),iStack_e0,
                         piStack_e8,piStack_e4,&uStack_f0);
      if (lVar4 == 0) goto LAB_002ed5b4;
      *(undefined4 *)(*piStack_e8 * 4 + DAT_003ca538) = uStack_f0;
      DAT_003ca53c = piStack_e8;
      iVar9 = *piStack_e8;
      DAT_003ca540 = iVar9;
      FUN_002ed3a8(&puStack_100,DAT_003ca524);
      *(int *)(iVar9 * 8 + DAT_003ca52c + 4) = iStack_fc;
    }
    while( true ) {
      uVar11 = 0;
      do {
        if (*(int *)(DAT_003ca524 + 8) == 0) {
          DAT_003ca53c = (int *)0x0;
          DAT_003ca540 = 0xffffffff;
          DAT_003ca54c = 1;
          return false;
        }
        iStack_fc = *(int *)(DAT_003ca524 + 8);
        piVar8 = *(int **)(iStack_fc + 4);
        puStack_100 = &DAT_003e0040;
        if (*piVar8 == *piStack_e4) {
          lVar4 = FUN_002eea28(param_3,uStack_ec);
          DAT_003ca54c = lVar4 != 0;
          if (DAT_00451230 == (code *)0x0) {
            uVar1 = *param_8;
            fVar14 = 0.0;
          }
          else {
            fVar14 = (float)(*DAT_00451230)();
            uVar1 = *param_8;
          }
          if ((int)uVar1 < 0) {
            fVar15 = *param_9;
          }
          else {
            fVar15 = *param_9;
          }
          *param_9 = ((float)uVar1 * fVar15 + (fVar14 - fVar13)) / (float)(*param_8 + uVar11);
          if ((int)*param_8 < 0) {
            fVar15 = *param_10;
          }
          else {
            fVar15 = *param_10;
          }
          if ((int)uVar11 < 0) {
            fVar18 = *param_9;
          }
          else {
            fVar18 = *param_9;
          }
          *param_10 = ((float)*param_8 * fVar15 + ABS((float)uVar11 * fVar18 - (fVar14 - fVar13))) /
                      (float)(*param_8 + uVar11);
          *param_8 = *param_8 + uVar11;
          return DAT_003ca54c != '\0';
        }
        FUN_002ee688(param_3,piVar8,piStack_e4,piStack_e8,iStack_e0);
        iVar10 = DAT_003ca524;
        iVar9 = *(int *)(*piVar8 * 8 + DAT_003ca52c + 4);
        *(undefined1 *)(iVar9 + 0x10) = 0;
        if (iVar9 == *(int *)(iVar10 + 8)) {
          *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar9 + 0xc);
          iVar6 = *(int *)(iVar10 + 0xc);
        }
        else {
          iVar6 = *(int *)(iVar10 + 0xc);
        }
        if (iVar9 == iVar6) {
          *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar9 + 8);
          iVar6 = *(int *)(iVar9 + 8);
        }
        else {
          iVar6 = *(int *)(iVar9 + 8);
        }
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar9 + 0xc);
        }
        else {
          *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar9 + 0xc);
          iVar6 = *(int *)(iVar9 + 0xc);
        }
        if (iVar6 == 0) {
          uVar7 = *(undefined4 *)(iVar10 + 0x10);
        }
        else {
          *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 8);
          uVar7 = *(undefined4 *)(iVar10 + 0x10);
        }
        iVar6 = DAT_003ca528;
        *(undefined4 *)(iVar9 + 0xc) = uVar7;
        *(int *)(iVar10 + 0x10) = iVar9;
        uVar11 = uVar11 + 1;
        *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + -1;
        iStack_fc = 0;
        *(undefined4 *)(*piVar8 * 8 + DAT_003ca52c + 4) = 0;
        puStack_100 = &DAT_003e0040;
        iVar9 = *piVar8;
        FUN_002ed3a8(&puStack_100,iVar6,piVar8);
        *(int *)(iVar9 * 8 + DAT_003ca530 + 4) = iStack_fc;
        puStack_100 = &DAT_003e0040;
      } while ((float)uVar11 < fVar15);
      if (DAT_00451230 == (code *)0x0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = (float)(*DAT_00451230)();
      }
      fVar13 = fVar18 - fVar13;
      uVar1 = *param_8;
      if (fVar14 <= fVar13) break;
      if ((int)uVar1 < 0) {
        fVar15 = *param_9;
        uVar3 = *param_8;
      }
      else {
        fVar15 = *param_9;
        uVar3 = uVar1;
      }
      *param_9 = ((float)uVar1 * fVar15 + fVar13) / (float)(uVar3 + uVar11);
      if ((int)*param_8 < 0) {
        fVar16 = *param_10;
      }
      else {
        fVar16 = *param_10;
      }
      if ((int)uVar11 < 0) {
        fVar17 = *param_9;
      }
      else {
        fVar17 = *param_9;
      }
      fVar15 = 1.0;
      fVar14 = fVar14 - fVar13;
      *param_10 = ((float)*param_8 * fVar16 + ABS((float)uVar11 * fVar17 - fVar13)) /
                  (float)(*param_8 + uVar11);
      *param_8 = *param_8 + uVar11;
      fVar16 = *param_9 + param_1 * *param_10;
      fVar13 = fVar18;
      if (fVar16 != 0.0) {
        fVar15 = fVar14 / fVar16;
      }
    }
    if ((int)uVar1 < 0) {
      fVar14 = *param_9;
      uVar3 = *param_8;
    }
    else {
      fVar14 = *param_9;
      uVar3 = uVar1;
    }
    *param_9 = ((float)uVar1 * fVar14 + fVar13) / (float)(uVar3 + uVar11);
    if ((int)*param_8 < 0) {
      fVar14 = *param_10;
    }
    else {
      fVar14 = *param_10;
    }
    if ((int)uVar11 < 0) {
      fVar15 = *param_9;
    }
    else {
      fVar15 = *param_9;
    }
    uVar2 = 2;
    *param_10 = ((float)*param_8 * fVar14 + ABS((float)uVar11 * fVar15 - fVar13)) /
                (float)(*param_8 + uVar11);
    *param_8 = *param_8 + uVar11;
    DAT_003ca550 = piStack_e8;
    DAT_003ca560 = *(int *)(iVar12 + 0x54);
    DAT_003ca554 = piStack_e4;
    DAT_003ca55c = *(int *)(iVar12 + 0x58);
    DAT_003ca558 = iStack_e0;
    DAT_003ca54c = '\0';
  }
  return uVar2;
}


// ==== FUN_002ee078 @ 002ee078 ====

undefined8
FUN_002ee078(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined *puStack_c0;
  int iStack_bc;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  iVar12 = (int)param_1;
  if ((((*(uint *)(iVar12 + 4) & 1) != 0) && (*(int *)(iVar12 + 0x58) != 0)) &&
     (*(int *)(iVar12 + 0x54) != 0)) {
    piVar14 = (int *)param_4;
    uStack_ac = param_2;
    uStack_a8 = param_5;
    if ((*(uint *)(iVar12 + 4) & 0x10) == 0) {
      uVar11 = *(uint *)(iVar12 + 4);
    }
    else {
      iVar3 = piVar14[4];
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar9 = 0;
        iVar10 = 0;
        uVar11 = 0;
        while (uVar2 = FUN_00391620(iVar3), uVar11 < uVar2) {
          lVar5 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar10 * 8);
          if (((lVar5 != -1) &&
              (uVar11 = uVar11 + 1, *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x3c)) == *piVar14)) &&
             (bVar1 = iVar9 == 0, iVar9 = iVar9 + 1, bVar1)) {
            iVar3 = *(int *)(iVar3 + 0x34) + iVar10 * 8;
            goto LAB_002ee1dc;
          }
          iVar10 = iVar10 + 1;
        }
        iVar3 = 0;
      }
      else {
        iVar9 = 0;
        for (iVar10 = *(int *)(*piVar14 * 4 + *(int *)(iVar3 + 0x20)); iVar10 != -1;
            iVar10 = *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x40))) {
          if (iVar9 == 0) {
            iVar3 = *(int *)(iVar3 + 0x34) + iVar10 * 8;
            goto LAB_002ee1dc;
          }
          iVar9 = iVar9 + 1;
        }
        iVar3 = 0;
      }
LAB_002ee1dc:
      if (iVar3 == 0) {
        return 0;
      }
      uVar11 = *(uint *)(iVar12 + 4);
    }
    piVar13 = (int *)param_3;
    if ((uVar11 & 8) != 0) {
      iVar3 = piVar13[4];
      if (*(int *)(iVar3 + 0x24) == 0) {
        iVar9 = 0;
        iVar10 = 0;
        uVar11 = 0;
        while (uVar2 = FUN_00391620(iVar3), uVar11 < uVar2) {
          lVar5 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar10 * 8);
          if (((lVar5 != -1) &&
              (uVar11 = uVar11 + 1, *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x38)) == *piVar13)) &&
             (bVar1 = iVar9 == 0, iVar9 = iVar9 + 1, bVar1)) {
            iVar3 = *(int *)(iVar3 + 0x34) + iVar10 * 8;
            goto LAB_002ee2e4;
          }
          iVar10 = iVar10 + 1;
        }
        iVar3 = 0;
      }
      else {
        iVar9 = 0;
        for (iVar10 = *(int *)(*piVar13 * 4 + *(int *)(iVar3 + 0x24)); iVar10 != -1;
            iVar10 = *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x44))) {
          if (iVar9 == 0) {
            iVar3 = *(int *)(iVar3 + 0x34) + iVar10 * 8;
            goto LAB_002ee2e4;
          }
          iVar9 = iVar9 + 1;
        }
        iVar3 = 0;
      }
LAB_002ee2e4:
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar10 = DAT_003ca528;
    iVar3 = *(int *)(DAT_003ca528 + 8);
    while (iVar3 != 0) {
      *(undefined1 *)(*(int *)(iVar10 + 8) + 0x10) = 0;
      iVar3 = *(int *)(*(int *)(iVar10 + 8) + 0xc);
      *(undefined4 *)(*(int *)(iVar10 + 8) + 0xc) = *(undefined4 *)(iVar10 + 0x10);
      uVar4 = *(undefined4 *)(iVar10 + 8);
      *(int *)(iVar10 + 8) = iVar3;
      *(undefined4 *)(iVar10 + 0x10) = uVar4;
    }
    *(undefined4 *)(iVar10 + 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc) = 0;
    iVar3 = DAT_003ca524;
    if (*(int *)(DAT_003ca524 + 8) == 0) {
      *(undefined4 *)(DAT_003ca524 + 0x14) = 0;
    }
    else {
      do {
        *(undefined1 *)(*(int *)(iVar3 + 8) + 0x10) = 0;
        iVar10 = *(int *)(*(int *)(iVar3 + 8) + 0xc);
        *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = *(undefined4 *)(iVar3 + 0x10);
        uVar4 = *(undefined4 *)(iVar3 + 8);
        *(int *)(iVar3 + 8) = iVar10;
        *(undefined4 *)(iVar3 + 0x10) = uVar4;
      } while (iVar10 != 0);
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
    iVar3 = *(int *)(iVar12 + 0x14);
    uVar11 = 0;
    if (0 < iVar3) {
      iVar10 = 0;
      do {
        if (uVar11 < *(uint *)(iVar12 + 0xc)) {
          piVar7 = (int *)(iVar10 + *(int *)(iVar12 + 0x18));
          piVar8 = (int *)0x0;
          if (*piVar7 != -1) {
            piVar8 = piVar7;
          }
        }
        else {
          piVar8 = (int *)0x0;
        }
        if (piVar8 != (int *)0x0) {
          iVar3 = iVar3 + -1;
          *(undefined4 *)(*piVar8 * 8 + DAT_003ca52c + 4) = 0;
          iStack_bc = 0;
          *(undefined4 *)(*piVar8 * 8 + DAT_003ca530 + 4) = 0;
          puStack_c0 = &DAT_003e0040;
        }
        iVar10 = iVar10 + 0x14;
        uVar11 = uVar11 + 1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(*piVar13 * 4 + DAT_003ca534) = 0;
    iVar3 = **(int **)(iVar12 + 0x58);
    lVar5 = (**(code **)(iVar3 + 0x14))
                      ((int)*(int **)(iVar12 + 0x58) + (int)*(short *)(iVar3 + 0x10),uStack_a8,
                       param_3,param_4,&fStack_b0);
    if (lVar5 != 0) {
      *(float *)(*piVar13 * 4 + DAT_003ca538) = *(float *)(*piVar13 * 4 + DAT_003ca534) + fStack_b0;
      iVar12 = *piVar13;
      DAT_003ca540 = iVar12;
      FUN_002ed3a8(&puStack_c0,DAT_003ca524,param_3);
      *(int *)(iVar12 * 8 + DAT_003ca52c + 4) = iStack_bc;
      while (*(int *)(DAT_003ca524 + 8) != 0) {
        iStack_bc = *(int *)(DAT_003ca524 + 8);
        piVar13 = *(int **)(iStack_bc + 4);
        puStack_c0 = &DAT_003e0040;
        if (*piVar13 == *piVar14) {
          uVar6 = FUN_002eea28(param_1,uStack_ac,param_4);
          return uVar6;
        }
        FUN_002ee688(param_1,piVar13,param_4,param_3);
        iVar3 = DAT_003ca524;
        iVar12 = *(int *)(*piVar13 * 8 + DAT_003ca52c + 4);
        *(undefined1 *)(iVar12 + 0x10) = 0;
        if (iVar12 == *(int *)(iVar3 + 8)) {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar12 + 0xc);
          iVar10 = *(int *)(iVar3 + 0xc);
        }
        else {
          iVar10 = *(int *)(iVar3 + 0xc);
        }
        if (iVar12 == iVar10) {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar12 + 8);
          iVar10 = *(int *)(iVar12 + 8);
        }
        else {
          iVar10 = *(int *)(iVar12 + 8);
        }
        if (iVar10 == 0) {
          iVar10 = *(int *)(iVar12 + 0xc);
        }
        else {
          *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar12 + 0xc);
          iVar10 = *(int *)(iVar12 + 0xc);
        }
        if (iVar10 == 0) {
          uVar4 = *(undefined4 *)(iVar3 + 0x10);
        }
        else {
          *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar12 + 8);
          uVar4 = *(undefined4 *)(iVar3 + 0x10);
        }
        iVar10 = DAT_003ca528;
        *(undefined4 *)(iVar12 + 0xc) = uVar4;
        *(int *)(iVar3 + 0x10) = iVar12;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
        iStack_bc = 0;
        *(undefined4 *)(*piVar13 * 8 + DAT_003ca52c + 4) = 0;
        puStack_c0 = &DAT_003e0040;
        iVar12 = *piVar13;
        FUN_002ed3a8(&puStack_c0,iVar10,piVar13);
        *(int *)(iVar12 * 8 + DAT_003ca530 + 4) = iStack_bc;
      }
      DAT_003ca540 = 0xffffffff;
    }
  }
  return 0;
}


// ==== FUN_002ee688 @ 002ee688 ====

void FUN_002ee688(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  puStack_c0 = &DAT_003ebdf8;
  piStack_bc = param_2;
  uStack_b8 = param_3;
  uStack_b4 = param_4;
  uStack_b0 = param_1;
  uStack_ac = param_5;
  (*(code *)PTR_FUN_003ebe14)((int)&puStack_c0 + (int)DAT_003ebe10);
  iVar10 = param_2[4];
  if (*(int *)(iVar10 + 0x24) == 0) {
    iVar8 = 0;
    iVar6 = 0;
    uVar7 = 0;
    while (uVar2 = FUN_00391620(iVar10), uVar7 < uVar2) {
      lVar4 = FUN_00383d40(*(int *)(iVar10 + 0x34) + iVar6 * 8);
      if (((lVar4 != -1) &&
          (uVar7 = uVar7 + 1, *(int *)(iVar6 * 4 + *(int *)(iVar10 + 0x38)) == *param_2)) &&
         (bVar1 = iVar8 == 0, iVar8 = iVar8 + 1, bVar1)) {
        piVar5 = (int *)(iVar10 + 0x34);
        iVar10 = param_2[4];
        piVar5 = (int *)(*piVar5 + iVar6 * 8);
        goto LAB_002ee7dc;
      }
      iVar6 = iVar6 + 1;
    }
    piVar5 = (int *)0x0;
    iVar10 = param_2[4];
  }
  else {
    iVar8 = 0;
    for (iVar6 = *(int *)(*param_2 * 4 + *(int *)(iVar10 + 0x24)); iVar6 != -1;
        iVar6 = *(int *)(iVar6 * 4 + *(int *)(iVar10 + 0x44))) {
      if (iVar8 == 0) {
        piVar5 = (int *)(*(int *)(iVar10 + 0x34) + iVar6 * 8);
        goto LAB_002ee7dc;
      }
      iVar8 = iVar8 + 1;
    }
    piVar5 = (int *)0x0;
  }
LAB_002ee7dc:
  iVar10 = *(int *)(iVar10 + 0x44);
  if (iVar10 != 0) {
    while( true ) {
      if (piVar5 == (int *)0x0) {
        return;
      }
      iVar6 = piVar5[1];
      if (piVar5 == (int *)(iVar6 + 0x5c)) {
        piVar3 = (int *)(iVar6 + 100);
      }
      else {
        piVar3 = (int *)(*(int *)(iVar6 + 0x18) +
                        *(int *)(*piVar5 * 4 + *(int *)(iVar6 + 0x38)) * 0x14);
      }
      if (piVar3 != param_2) break;
      lVar4 = (**(code **)(puStack_c0 + 0x2c))
                        ((int)&puStack_c0 + (int)*(short *)(puStack_c0 + 0x28),piVar5);
      if (lVar4 == 0) {
        return;
      }
      uVar7 = *(uint *)(*piVar5 * 4 + iVar10);
      if (uVar7 < *(uint *)(param_2[4] + 0x28)) {
        piVar3 = (int *)(uVar7 * 8 + *(int *)(param_2[4] + 0x34));
        piVar5 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar5 = piVar3;
        }
      }
      else {
        piVar5 = (int *)0x0;
      }
    }
    return;
  }
  iVar10 = 0;
joined_r0x002ee8a8:
  do {
    if (piVar5 == (int *)0x0) {
      return;
    }
    lVar4 = (**(code **)(puStack_c0 + 0x2c))
                      ((int)&puStack_c0 + (int)*(short *)(puStack_c0 + 0x28),piVar5);
    if (lVar4 == 0) {
      return;
    }
    iVar6 = param_2[4];
    iVar10 = iVar10 + 1;
    if (*(int *)(iVar6 + 0x24) == 0) {
      iVar9 = 0;
      iVar8 = 0;
      uVar7 = 0;
      while (uVar2 = FUN_00391620(iVar6), uVar7 < uVar2) {
        lVar4 = FUN_00383d40(*(int *)(iVar6 + 0x34) + iVar8 * 8);
        if (((lVar4 != -1) &&
            (uVar7 = uVar7 + 1, *(int *)(iVar8 * 4 + *(int *)(iVar6 + 0x38)) == *param_2)) &&
           (bVar1 = iVar9 == iVar10, iVar9 = iVar9 + 1, bVar1)) {
          piVar5 = (int *)(*(int *)(iVar6 + 0x34) + iVar8 * 8);
          goto joined_r0x002ee8a8;
        }
        iVar8 = iVar8 + 1;
      }
      piVar5 = (int *)0x0;
      goto joined_r0x002ee8a8;
    }
    iVar9 = 0;
    for (iVar8 = *(int *)(*param_2 * 4 + *(int *)(iVar6 + 0x24)); iVar8 != -1;
        iVar8 = *(int *)(iVar8 * 4 + *(int *)(iVar6 + 0x44))) {
      if (iVar9 == iVar10) {
        piVar5 = (int *)(*(int *)(iVar6 + 0x34) + iVar8 * 8);
        goto joined_r0x002ee8a8;
      }
      iVar9 = iVar9 + 1;
    }
    piVar5 = (int *)0x0;
  } while( true );
}


// ==== FUN_002eea28 @ 002eea28 ====

/* WARNING: Removing unreachable block (ram,0x002eec88) */

undefined4 FUN_002eea28(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar9 = 0;
  *(int *)(param_2 + 4) = param_1;
  if (*param_3 != DAT_003ca540) {
    iVar7 = param_3[4];
    piVar8 = param_3;
    while( true ) {
      if (*(int *)(iVar7 + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*piVar8 * 4 + *(int *)(iVar7 + 0x1c));
      }
      iVar7 = piVar8[1];
      if (piVar8 == (int *)(iVar7 + 0x5c)) {
        piVar8 = (int *)(iVar7 + 100);
      }
      else {
        piVar8 = (int *)(*(int *)(iVar7 + 0x18) +
                        *(int *)(*piVar8 * 4 + *(int *)(iVar7 + 0x38)) * 0x14);
      }
      iVar9 = iVar9 + 1;
      if (*(int *)(param_1 + 0x14) <= iVar9) {
        *(undefined4 *)(param_2 + 8) = 0;
        return 0;
      }
      if (*piVar8 == DAT_003ca540) break;
      iVar7 = piVar8[4];
    }
  }
  if (*(int *)(param_2 + 0x1c) < iVar9 + 1) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 0x1c);
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  else {
    *(int *)(param_2 + 8) = iVar9 + 1;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0x1c);
  if (uVar1 != 0) {
    if (uVar2 < uVar1) {
      uVar2 = *(uint *)(param_2 + 0x1c);
    }
    else {
      *(int *)(uVar1 * 4 + *(int *)(param_2 + 0xc) + -4) = *param_3;
      *(undefined4 *)(*(int *)(param_2 + 8) * 4 + *(int *)(param_2 + 0x10) + -4) = 0xffffffff;
      iVar7 = *(int *)(param_2 + 8) * 0xc + *(int *)(param_2 + 0x14);
      *(int *)(iVar7 + -0xc) = param_3[1];
      *(int *)(iVar7 + -8) = param_3[2];
      *(int *)(iVar7 + -4) = param_3[3];
      *(undefined4 *)(*(int *)(param_2 + 8) * 4 + *(int *)(param_2 + 0x18) + -4) = 0;
      uVar2 = *(uint *)(param_2 + 0x1c);
    }
  }
  if ((int)uVar2 < iVar9) {
    if (*param_3 == DAT_003ca540) {
      DAT_003ca53c = 0;
      DAT_003ca540 = 0xffffffff;
      return 1;
    }
    iVar7 = param_3[4];
    while( true ) {
      if (*(int *)(iVar7 + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*param_3 * 4 + *(int *)(iVar7 + 0x1c));
      }
      iVar7 = piVar8[1];
      if (piVar8 == (int *)(iVar7 + 0x5c)) {
        fVar10 = *(float *)(iVar7 + 0x8c);
      }
      else if (*(int *)(iVar7 + 0x48) == 0) {
        iVar7 = FUN_0038f2b0(piVar8);
        iVar6 = FUN_0038f2f0(piVar8);
        fVar12 = *(float *)(iVar6 + 4) - *(float *)(iVar7 + 4);
        fVar11 = *(float *)(iVar6 + 0xc) - *(float *)(iVar7 + 0xc);
        fVar10 = *(float *)(iVar6 + 8) - *(float *)(iVar7 + 8);
        fVar10 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10);
      }
      else {
        fVar10 = *(float *)(*piVar8 * 4 + *(int *)(iVar7 + 0x48));
      }
      *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) + fVar10;
      if (*(int *)(param_3[4] + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*param_3 * 4 + *(int *)(param_3[4] + 0x1c));
      }
      iVar7 = piVar8[1];
      if (piVar8 == (int *)(iVar7 + 0x5c)) {
        param_3 = (int *)(iVar7 + 100);
      }
      else {
        param_3 = (int *)(*(int *)(iVar7 + 0x18) +
                         *(int *)(*piVar8 * 4 + *(int *)(iVar7 + 0x38)) * 0x14);
      }
      iVar9 = iVar9 + -1;
      if ((iVar9 <= *(int *)(param_2 + 0x1c)) || (*param_3 == DAT_003ca540)) break;
      iVar7 = param_3[4];
    }
  }
  if (*param_3 != DAT_003ca540) {
    iVar7 = iVar9 << 2;
    do {
      if (*(int *)(param_3[4] + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*param_3 * 4 + *(int *)(param_3[4] + 0x1c));
      }
      iVar6 = piVar8[1];
      if (piVar8 == (int *)(iVar6 + 0x5c)) {
        puVar3 = (undefined4 *)(iVar6 + 100);
      }
      else {
        puVar3 = (undefined4 *)
                 (*(int *)(iVar6 + 0x18) + *(int *)(*piVar8 * 4 + *(int *)(iVar6 + 0x38)) * 0x14);
      }
      *(undefined4 *)(iVar7 + *(int *)(param_2 + 0xc) + -4) = *puVar3;
      if (*(int *)(param_3[4] + 0x1c) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = *(undefined4 **)(*param_3 * 4 + *(int *)(param_3[4] + 0x1c));
      }
      *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x10) + -4) = *puVar3;
      if (*(int *)(param_3[4] + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*param_3 * 4 + *(int *)(param_3[4] + 0x1c));
      }
      iVar6 = piVar8[1];
      if (piVar8 == (int *)(iVar6 + 0x5c)) {
        uVar4 = *(undefined4 *)(iVar6 + 0x94);
      }
      else if (*(int *)(iVar6 + 0x50) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*piVar8 * 4 + *(int *)(iVar6 + 0x50));
      }
      *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x18) + -4) = uVar4;
      if (*(int *)(param_3[4] + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*param_3 * 4 + *(int *)(param_3[4] + 0x1c));
      }
      iVar6 = piVar8[1];
      if (piVar8 == (int *)(iVar6 + 0x5c)) {
        iVar6 = iVar6 + 100;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x18) + *(int *)(*piVar8 * 4 + *(int *)(iVar6 + 0x38)) * 0x14;
      }
      iVar5 = iVar9 * 0xc + *(int *)(param_2 + 0x14);
      *(undefined4 *)(iVar5 + -0xc) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(iVar5 + -8) = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)(iVar5 + -4) = *(undefined4 *)(iVar6 + 0xc);
      if (*(int *)(param_3[4] + 0x1c) == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(*param_3 * 4 + *(int *)(param_3[4] + 0x1c));
      }
      iVar6 = piVar8[1];
      if (piVar8 == (int *)(iVar6 + 0x5c)) {
        param_3 = (int *)(iVar6 + 100);
      }
      else {
        param_3 = (int *)(*(int *)(iVar6 + 0x18) +
                         *(int *)(*piVar8 * 4 + *(int *)(iVar6 + 0x38)) * 0x14);
      }
      iVar7 = iVar7 + -4;
      iVar9 = iVar9 + -1;
    } while (*param_3 != DAT_003ca540);
  }
  DAT_003ca540 = 0xffffffff;
  DAT_003ca53c = 0;
  return 1;
}


// ==== FUN_002eef88 @ 002eef88 ====

void FUN_002eef88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x1c,uVar1);
  }
  FUN_002f0a00(auStack_40[0],param_1);
  return;
}


// ==== FUN_002ef030 @ 002ef030 ====

/* Strings referenciadas:
     "RawData" */

undefined8 FUN_002ef030(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  iVar6 = (int)param_1;
  if (0 < *(int *)(iVar6 + 8)) {
    uStack_70 = 0;
    iVar4 = *(int *)(iVar6 + 8) * 0xc;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4,&uStack_70);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_70,iVar4,uVar2);
    }
    piVar1 = DAT_003c87e8;
    *(undefined4 *)(iVar6 + 0xc) = uStack_70;
    iVar4 = *piVar1;
    uStack_6c = 0;
    iVar5 = *(int *)(iVar6 + 8) * 0xc;
    uVar2 = (**(code **)(iVar4 + 0x34))
                      ((int)piVar1 + (int)*(short *)(iVar4 + 0x30),iVar5,(uint)&uStack_70 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_6c,iVar5,uVar2);
    }
    piVar1 = DAT_003c87e8;
    *(undefined4 *)(iVar6 + 0x10) = uStack_6c;
    iVar4 = *piVar1;
    uStack_68 = 0;
    iVar5 = *(int *)(iVar6 + 8) << 2;
    uVar2 = (**(code **)(iVar4 + 0x34))
                      ((int)piVar1 + (int)*(short *)(iVar4 + 0x30),iVar5,(uint)&uStack_70 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_68,iVar5,uVar2);
    }
    *(undefined4 *)(iVar6 + 0x14) = uStack_68;
    lVar3 = FUN_002e31e0(param_2,0x407210);
    if (lVar3 != 0) {
      uVar2 = FUN_002ef1a0(param_1,lVar3);
      return uVar2;
    }
  }
  return 0;
}


// ==== FUN_002ef1a0 @ 002ef1a0 ====

/* Strings referenciadas:
     "Kynogon FindNearest Data" */

undefined4 FUN_002ef1a0(int param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  int aiStack_70 [4];
  
  piVar1 = *(int **)(DAT_003c9ed4 + 4);
  if ((piVar1 != (int *)0x0) &&
     (lVar4 = (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_2),
     lVar4 != 0)) {
    uStack_b0 = DAT_00407218;
    uStack_ac = DAT_0040721c;
    aiStack_70[0] = 0;
    lVar4 = strlen(0x407268);
    lVar5 = (**(code **)(*piVar1 + 0x24))
                      ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2,&uStack_b0,lVar4);
    if (lVar5 == lVar4) {
      lVar5 = strlen(0x407268);
      if (lVar4 == lVar5) {
        lVar5 = (**(code **)(*piVar1 + 0x24))
                          ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2,aiStack_70,4);
        if (lVar5 == 4) {
          *(undefined1 *)((int)&uStack_b0 + (int)lVar4) = 0;
          lVar4 = stricmp(0x407268,&uStack_b0);
          if (lVar4 == 0) {
            if (aiStack_70[0] == 1) {
              iVar6 = *(int *)(param_1 + 8) * 0xc;
              iVar3 = (**(code **)(*piVar1 + 0x24))
                                ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2,
                                 *(undefined4 *)(param_1 + 0xc),iVar6);
              if (iVar3 == iVar6) {
                iVar6 = *(int *)(param_1 + 8);
                iVar3 = 0;
                if (0 < iVar6 * 3) {
                  iVar6 = *(int *)(param_1 + 8);
                  do {
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < iVar6 * 3);
                }
                iVar3 = (**(code **)(*piVar1 + 0x24))
                                  ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2,
                                   *(undefined4 *)(param_1 + 0x10),iVar6 * 0xc);
                if (iVar3 == iVar6 * 0xc) {
                  if (0 < *(int *)(param_1 + 8) * 3) {
                    iVar6 = 1;
                    do {
                      bVar2 = iVar6 < *(int *)(param_1 + 8) * 3;
                      iVar6 = iVar6 + 1;
                    } while (bVar2);
                  }
                  (**(code **)(*piVar1 + 0x2c))
                            ((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),param_2);
                  return 1;
                }
                iVar6 = *piVar1;
              }
              else {
                iVar6 = *piVar1;
              }
            }
            else {
              iVar6 = *piVar1;
            }
          }
          else {
            iVar6 = *piVar1;
          }
        }
        else {
          iVar6 = *piVar1;
        }
      }
      else {
        iVar6 = *piVar1;
      }
    }
    else {
      iVar6 = *piVar1;
    }
    (**(code **)(iVar6 + 0x2c))((int)piVar1 + (int)*(short *)(iVar6 + 0x28),param_2);
  }
  return 0;
}


// ==== FUN_002ef3d8 @ 002ef3d8 ====

/* Strings referenciadas:
     "Kynogon FindNearest Data" */

undefined4 FUN_002ef3d8(int param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_d0 [64];
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  lVar4 = (*DAT_0045127c)(param_2,0x407220);
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = strlen(0x407268);
  lVar6 = (*DAT_00451290)(auStack_d0,1,uVar5,lVar4);
  lVar7 = strlen(0x407268);
  if ((lVar6 == lVar7) && (lVar7 = (*DAT_00451290)(&iStack_90,4,1,lVar4), lVar7 == 1)) {
    auStack_d0[(int)lVar6] = 0;
    lVar6 = stricmp(0x407268,auStack_d0);
    if ((lVar6 == 0) && (iStack_90 == 1)) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x14);
      *(int *)(param_1 + 8) = iVar3;
      if (iVar3 < 1) {
LAB_002ef6b0:
        (*DAT_00451280)(lVar4);
        return 1;
      }
      uStack_8c = 0;
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3 * 0xc,
                         &uStack_8c);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_8c,iVar3 * 0xc,uVar5);
      }
      piVar2 = DAT_003c87e8;
      *(undefined4 *)(param_1 + 0xc) = uStack_8c;
      iVar3 = *piVar2;
      uStack_88 = 0;
      iVar8 = *(int *)(param_1 + 8) * 0xc;
      uVar5 = (**(code **)(iVar3 + 0x34))
                        ((int)piVar2 + (int)*(short *)(iVar3 + 0x30),iVar8,&uStack_88);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_88,iVar8,uVar5);
      }
      piVar2 = DAT_003c87e8;
      *(undefined4 *)(param_1 + 0x10) = uStack_88;
      iVar3 = *piVar2;
      uStack_84 = 0;
      iVar8 = *(int *)(param_1 + 8) << 2;
      uVar5 = (**(code **)(iVar3 + 0x34))
                        ((int)piVar2 + (int)*(short *)(iVar3 + 0x30),iVar8,&uStack_84);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_84,iVar8,uVar5);
      }
      *(undefined4 *)(param_1 + 0x14) = uStack_84;
      iVar3 = (*DAT_00451290)(*(undefined4 *)(param_1 + 0xc),4,*(int *)(param_1 + 8) * 3,lVar4);
      if (iVar3 == *(int *)(param_1 + 8) * 3) {
        if (0 < iVar3) {
          iVar3 = 1;
          do {
            bVar1 = iVar3 < *(int *)(param_1 + 8) * 3;
            iVar3 = iVar3 + 1;
          } while (bVar1);
        }
        iVar3 = (*DAT_00451290)(*(undefined4 *)(param_1 + 0x10),4,*(int *)(param_1 + 8) * 3,lVar4);
        if (iVar3 == *(int *)(param_1 + 8) * 3) {
          if (0 < iVar3) {
            iVar3 = 1;
            do {
              bVar1 = iVar3 < *(int *)(param_1 + 8) * 3;
              iVar3 = iVar3 + 1;
            } while (bVar1);
          }
          goto LAB_002ef6b0;
        }
      }
    }
  }
  (*DAT_00451280)(lVar4);
  return 0;
}


// ==== FUN_002ef900 @ 002ef900 ====

undefined4 FUN_002ef900(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  piVar1 = DAT_003c87e8;
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  uStack_70 = 0;
  *(int *)(param_1 + 8) = iVar7;
  iVar8 = *piVar1;
  iVar7 = iVar7 * 0xc;
  uVar3 = (**(code **)(iVar8 + 0x34))((int)piVar1 + (int)*(short *)(iVar8 + 0x30),iVar7,&uStack_70);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_70,iVar7,uVar3);
  }
  piVar1 = DAT_003c87e8;
  *(undefined4 *)(param_1 + 0xc) = uStack_70;
  iVar7 = *piVar1;
  uStack_6c = 0;
  iVar8 = *(int *)(param_1 + 8) * 0xc;
  uVar3 = (**(code **)(iVar7 + 0x34))
                    ((int)piVar1 + (int)*(short *)(iVar7 + 0x30),iVar8,(uint)&uStack_70 | 4);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_6c,iVar8,uVar3);
  }
  piVar1 = DAT_003c87e8;
  *(undefined4 *)(param_1 + 0x10) = uStack_6c;
  iVar7 = *piVar1;
  uStack_68 = 0;
  iVar8 = *(int *)(param_1 + 8) << 2;
  uVar3 = (**(code **)(iVar7 + 0x34))
                    ((int)piVar1 + (int)*(short *)(iVar7 + 0x30),iVar8,(uint)&uStack_70 | 8);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_68,iVar8,uVar3);
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x14) = uStack_68;
  if (0 < *(int *)(param_1 + 8)) {
    iVar8 = *(int *)(param_1 + 0xc);
    while( true ) {
      *(int *)(iVar7 * 4 + iVar8) = iVar7;
      *(int *)((iVar7 + *(int *)(param_1 + 8)) * 4 + *(int *)(param_1 + 0xc)) = iVar7;
      *(int *)((*(int *)(param_1 + 8) * 2 + iVar7) * 4 + *(int *)(param_1 + 0xc)) = iVar7;
      iVar7 = iVar7 + 1;
      if (*(int *)(param_1 + 8) <= iVar7) break;
      iVar8 = *(int *)(param_1 + 0xc);
    }
  }
  DAT_003ca804 = *(undefined4 *)(param_1 + 4);
  FUN_0035ec50(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),4,0x2ef6f0);
  FUN_0035ec50(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4,*(int *)(param_1 + 8),4,0x2ef7a0)
  ;
  FUN_0035ec50(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 8,*(int *)(param_1 + 8),4,0x2ef850)
  ;
  iVar7 = *(int *)(param_1 + 8);
  iVar8 = 0;
  do {
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        iVar6 = 0;
        iVar9 = iVar5 + 1;
        if (0 < iVar7) {
          iVar2 = iVar8 * iVar7;
          if (*(int *)((iVar5 + iVar2) * 4 + *(int *)(param_1 + 0xc)) == 0) {
            iVar4 = *(int *)(param_1 + 0x10);
LAB_002efbc4:
            *(int *)(iVar2 * 4 + iVar4) = iVar5;
          }
          else {
            iVar6 = 1;
            while( true ) {
              if (iVar7 <= iVar6) break;
              if (*(int *)((iVar5 + iVar8 * iVar7) * 4 + *(int *)(param_1 + 0xc)) == iVar6) {
                iVar4 = *(int *)(param_1 + 0x10);
                iVar2 = iVar6 + iVar8 * iVar7;
                goto LAB_002efbc4;
              }
              iVar6 = iVar6 + 1;
            }
          }
        }
        if (*(code **)(param_1 + 0x18) == (code *)0x0) {
          iVar7 = *(int *)(param_1 + 8);
        }
        else {
          iVar7 = *(int *)(param_1 + 8);
          if (iVar7 * iVar7 == 0) {
            trap(7);
          }
          (**(code **)(param_1 + 0x18))
                    (iVar8 * 0x21 + ((iVar5 * iVar7 + iVar6) * 0x21) / (iVar7 * iVar7));
          iVar7 = *(int *)(param_1 + 8);
        }
        iVar5 = iVar9;
      } while (iVar9 < iVar7);
    }
    if (2 < iVar8 + 1) {
      return 1;
    }
    iVar7 = *(int *)(param_1 + 8);
    iVar8 = iVar8 + 1;
  } while( true );
}


// ==== FUN_002efc50 @ 002efc50 ====

/* Strings referenciadas:
     "Kynogon FindNearest Data" */

undefined4 FUN_002efc50(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 8)) {
      lVar2 = (*DAT_0045127c)(param_2,0x407228);
      if (lVar2 == 0) {
        return 0;
      }
      uStack_80 = DAT_00407284;
      uVar3 = strlen(0x407268);
      lVar4 = (*DAT_0045128c)(0x407268,1,uVar3,lVar2);
      lVar5 = strlen(0x407268);
      if (lVar4 != lVar5) {
        return 0;
      }
      lVar4 = (*DAT_0045128c)(&uStack_80,4,1,lVar2);
      if (lVar4 != 1) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 8);
      puVar9 = (undefined4 *)0x0;
      if (0 < iVar1) {
        puStack_7c = (undefined4 *)0x0;
        uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 * 0xc,
                           (uint)&uStack_80 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_7c,iVar1 * 0xc,uVar3);
        }
        iVar1 = *(int *)(param_1 + 8);
        puVar9 = puStack_7c;
      }
      iVar6 = 0;
      puVar8 = puVar9;
      if (0 < iVar1 * 3) {
        do {
          iVar1 = iVar6 * 4;
          iVar6 = iVar6 + 1;
          *puVar8 = *(undefined4 *)(iVar1 + *(int *)(param_1 + 0xc));
          puVar8 = puVar8 + 1;
        } while (iVar6 < *(int *)(param_1 + 8) * 3);
      }
      iVar6 = (*DAT_0045128c)(puVar9,4,*(int *)(param_1 + 8) * 3,lVar2);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar6 == iVar1 * 3) {
        iVar7 = 0;
        puVar8 = puVar9;
        if (0 < iVar6) {
          do {
            iVar1 = iVar7 * 4;
            iVar7 = iVar7 + 1;
            *puVar8 = *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x10));
            puVar8 = puVar8 + 1;
          } while (iVar7 < *(int *)(param_1 + 8) * 3);
          iVar1 = *(int *)(param_1 + 8);
        }
        iVar1 = (*DAT_0045128c)(puVar9,4,iVar1 * 3,lVar2);
        if (iVar1 == *(int *)(param_1 + 8) * 3) {
          if (puVar9 != (undefined4 *)0x0) {
            (*(code *)PTR_FUN_003c87e0)(puVar9);
          }
          (*DAT_00451280)(lVar2);
          return 1;
        }
      }
      (*DAT_00451280)(lVar2);
      if (puVar9 != (undefined4 *)0x0) {
        (*(code *)PTR_FUN_003c87e0)(puVar9);
      }
    }
  }
  return 0;
}


// ==== FUN_002eff00 @ 002eff00 ====

int FUN_002eff00(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iStack_e0;
  undefined1 auStack_dc [12];
  int aiStack_d0 [4];
  undefined4 *puStack_c0;
  
  piVar11 = &iStack_e0;
  iVar8 = 0;
  piVar12 = aiStack_d0;
  iVar14 = 0;
  iVar10 = (int)param_2;
  uVar16 = *(undefined4 *)(*(int *)(iVar10 + 4) + 8);
  lVar13 = -1;
  iVar7 = -1;
  puStack_c0 = param_4;
  do {
    uVar15 = uVar16;
    piVar3 = piVar12;
    puVar4 = (undefined1 *)piVar11;
    iVar6 = iVar8;
    if (iVar8 == 1) {
      uVar15 = param_1;
      piVar3 = aiStack_d0 + 1;
      puVar4 = auStack_dc;
      iVar6 = 1;
    }
    lVar5 = FUN_002f0ad8(uVar15,param_2,param_3,iVar6,puVar4,piVar3);
    if (lVar5 == 0) {
      return 0;
    }
    iVar6 = iVar8;
    if ((iVar7 != -1) && (lVar13 <= lVar5)) {
      lVar5 = lVar13;
      iVar6 = iVar7;
    }
    iVar8 = iVar8 + 1;
    piVar12 = piVar12 + 1;
    piVar11 = (int *)((int)piVar11 + 4);
    lVar13 = lVar5;
    iVar7 = iVar6;
  } while (iVar8 < 3);
  piVar11 = aiStack_d0 + iVar6;
  iVar7 = *(int *)(auStack_dc + iVar6 * 4 + -4);
  if (iVar7 <= *piVar11) {
    iVar8 = *(int *)(iVar10 + 8);
    do {
      iVar9 = 0;
      iVar1 = *(int *)((iVar6 * iVar8 + iVar7) * 4 + *(int *)(iVar10 + 0xc));
      iVar7 = iVar7 + 1;
      while (iVar9 < 3) {
        if (iVar9 == iVar6) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar2 = *(int *)((iVar9 * iVar8 + iVar1) * 4 + *(int *)(iVar10 + 0x10));
          if ((iVar2 < *(int *)(auStack_dc + iVar9 * 4 + -4)) || (aiStack_d0[iVar9] < iVar2)) break;
          iVar9 = iVar9 + 1;
        }
      }
      if (iVar9 == 3) {
        iVar8 = iVar14 * 4;
        iVar14 = iVar14 + 1;
        *(int *)(iVar8 + *(int *)(iVar10 + 0x14)) = iVar1;
        iVar8 = *piVar11;
      }
      else {
        iVar8 = *piVar11;
      }
      if (iVar8 < iVar7) goto code_r0x002f00c4;
      iVar8 = *(int *)(iVar10 + 8);
    } while( true );
  }
  uVar16 = *(undefined4 *)(iVar10 + 0x14);
LAB_002f00c8:
  *puStack_c0 = uVar16;
  return iVar14;
code_r0x002f00c4:
  uVar16 = *(undefined4 *)(iVar10 + 0x14);
  goto LAB_002f00c8;
}


// ==== FUN_002f0110 @ 002f0110 ====

int FUN_002f0110(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  undefined4 *puStack_c0;
  
  piVar9 = aiStack_e0;
  iVar7 = 0;
  iVar13 = 0;
  lVar12 = -1;
  piVar10 = aiStack_d0;
  iVar6 = -1;
  puStack_c0 = param_4;
  do {
    lVar4 = FUN_002f0ad8(param_1,param_2,param_3,iVar7,piVar9,piVar10);
    if (lVar4 == 0) {
      return 0;
    }
    iVar11 = iVar7;
    if ((iVar6 != -1) && (lVar12 <= lVar4)) {
      lVar4 = lVar12;
      iVar11 = iVar6;
    }
    iVar7 = iVar7 + 1;
    piVar10 = piVar10 + 1;
    piVar9 = (int *)((int)piVar9 + 4);
    lVar12 = lVar4;
    iVar6 = iVar11;
  } while (iVar7 < 3);
  piVar9 = aiStack_d0 + iVar11;
  iVar6 = aiStack_e0[iVar11];
  iVar7 = (int)param_2;
  if (iVar6 <= *piVar9) {
    iVar3 = *(int *)(iVar7 + 8);
    do {
      iVar8 = 0;
      iVar1 = *(int *)((iVar11 * iVar3 + iVar6) * 4 + *(int *)(iVar7 + 0xc));
      iVar6 = iVar6 + 1;
      while (iVar8 < 3) {
        if (iVar8 == iVar11) {
          iVar8 = iVar8 + 1;
        }
        else {
          iVar2 = *(int *)((iVar8 * iVar3 + iVar1) * 4 + *(int *)(iVar7 + 0x10));
          if ((iVar2 < aiStack_e0[iVar8]) || (aiStack_d0[iVar8] < iVar2)) break;
          iVar8 = iVar8 + 1;
        }
      }
      if (iVar8 == 3) {
        iVar3 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        *(int *)(iVar3 + *(int *)(iVar7 + 0x14)) = iVar1;
        iVar3 = *piVar9;
      }
      else {
        iVar3 = *piVar9;
      }
      if (iVar3 < iVar6) goto code_r0x002f02a4;
      iVar3 = *(int *)(iVar7 + 8);
    } while( true );
  }
  uVar5 = *(undefined4 *)(iVar7 + 0x14);
LAB_002f02a8:
  *puStack_c0 = uVar5;
  return iVar13;
code_r0x002f02a4:
  uVar5 = *(undefined4 *)(iVar7 + 0x14);
  goto LAB_002f02a8;
}


// ==== FUN_002f02e8 @ 002f02e8 ====

int FUN_002f02e8(float param_1,undefined8 param_2,int param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  iVar7 = (int)param_2;
  iVar8 = (int)param_4;
  if (param_5 == '\0') {
    iVar5 = *(int *)(iVar7 + 4);
    if (param_3 == *(int *)(iVar5 + 0x14) + -1) {
      return param_3;
    }
    uVar1 = *(uint *)((iVar8 * *(int *)(iVar7 + 8) + param_3 + 1) * 4 + *(int *)(iVar7 + 0xc));
    if (uVar1 < *(uint *)(iVar5 + 0xc)) {
      piVar3 = (int *)(uVar1 * 0x14 + *(int *)(iVar5 + 0x18));
      if (*piVar3 == -1) {
        piVar3 = (int *)0x0;
      }
    }
    else {
      piVar3 = (int *)0x0;
    }
    fVar10 = (float)FUN_00390038(param_2,piVar3 + 1,param_4);
    iVar5 = param_3 + -1;
    if (fVar10 != param_1) {
      return param_3;
    }
    iVar2 = *(int *)(iVar7 + 4);
    iVar4 = *(int *)(iVar2 + 0x14) + -1;
    iVar9 = iVar4;
    if (iVar5 < *(int *)(iVar2 + 0x14) + -2) {
      do {
        iVar6 = (iVar5 + iVar9) / 2;
        uVar1 = *(uint *)((iVar8 * *(int *)(iVar7 + 8) + iVar6) * 4 + *(int *)(iVar7 + 0xc));
        if (uVar1 < *(uint *)(iVar2 + 0xc)) {
          piVar3 = (int *)(uVar1 * 0x14 + *(int *)(iVar2 + 0x18));
          if (*piVar3 == -1) {
            piVar3 = (int *)0x0;
          }
        }
        else {
          piVar3 = (int *)0x0;
        }
        fVar10 = (float)FUN_00390038(param_2,piVar3 + 1,param_4);
        if (fVar10 < param_1) {
          return param_3;
        }
        iVar4 = iVar6;
        if (fVar10 <= param_1) {
          iVar4 = iVar9;
          iVar5 = iVar6;
        }
        iVar2 = *(int *)(iVar7 + 4);
        iVar9 = iVar4;
      } while (iVar5 < iVar4 + -1);
    }
    uVar1 = *(uint *)((iVar8 * *(int *)(iVar7 + 8) + iVar5) * 4 + *(int *)(iVar7 + 0xc));
    if ((uVar1 < *(uint *)(iVar2 + 0xc)) &&
       (piVar3 = (int *)(uVar1 * 0x14 + *(int *)(iVar2 + 0x18)), *piVar3 != -1)) goto LAB_002f066c;
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    iVar4 = param_3 + -1;
    uVar1 = *(uint *)((iVar8 * *(int *)(iVar7 + 8) + iVar4) * 4 + *(int *)(iVar7 + 0xc));
    if (uVar1 < *(uint *)(*(int *)(iVar7 + 4) + 0xc)) {
      piVar3 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar7 + 4) + 0x18));
      if (*piVar3 == -1) {
        piVar3 = (int *)0x0;
      }
    }
    else {
      piVar3 = (int *)0x0;
    }
    fVar10 = (float)FUN_00390038(param_2,piVar3 + 1,param_4);
    if (fVar10 != param_1) {
      return param_3;
    }
    iVar5 = 0;
    if (0 < param_3 + -2) {
      iVar2 = *(int *)(iVar7 + 8);
      iVar9 = iVar5;
      while( true ) {
        iVar5 = (iVar9 + iVar4) / 2;
        uVar1 = *(uint *)((iVar8 * iVar2 + iVar5) * 4 + *(int *)(iVar7 + 0xc));
        if (uVar1 < *(uint *)(*(int *)(iVar7 + 4) + 0xc)) {
          piVar3 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar7 + 4) + 0x18));
          if (*piVar3 == -1) {
            piVar3 = (int *)0x0;
          }
        }
        else {
          piVar3 = (int *)0x0;
        }
        fVar10 = (float)FUN_00390038(param_2,piVar3 + 1,param_4);
        if (param_1 < fVar10) {
          return param_3;
        }
        if (param_1 <= fVar10) {
          iVar4 = iVar5;
          iVar5 = iVar9;
        }
        if (iVar4 + -1 <= iVar5) break;
        iVar2 = *(int *)(iVar7 + 8);
        iVar9 = iVar5;
      }
    }
    uVar1 = *(uint *)((iVar8 * *(int *)(iVar7 + 8) + iVar5) * 4 + *(int *)(iVar7 + 0xc));
    if (uVar1 < *(uint *)(*(int *)(iVar7 + 4) + 0xc)) {
      piVar3 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar7 + 4) + 0x18));
      if (*piVar3 == -1) {
        piVar3 = (int *)0x0;
      }
      goto LAB_002f066c;
    }
  }
  piVar3 = (int *)0x0;
LAB_002f066c:
  fVar10 = (float)FUN_00390038(param_2,piVar3 + 1,param_4);
  if (fVar10 == param_1) {
    iVar4 = iVar5;
  }
  return iVar4;
}


// ==== FUN_002f06c0 @ 002f06c0 ====

undefined8 FUN_002f06c0(float param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  iVar9 = 0;
  iVar6 = (int)param_2;
  iVar2 = *(int *)(*(int *)(iVar6 + 4) + 0x14);
  iVar8 = iVar2 + -1;
  iVar7 = (int)param_3;
  iVar5 = iVar9;
  if (0 < iVar2 + -2) {
    iVar2 = *(int *)(iVar6 + 8);
    while( true ) {
      iVar5 = (iVar9 + iVar8) / 2;
      uVar1 = *(uint *)((iVar7 * iVar2 + iVar5) * 4 + *(int *)(iVar6 + 0xc));
      if (uVar1 < *(uint *)(*(int *)(iVar6 + 4) + 0xc)) {
        piVar4 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar6 + 4) + 0x18));
        if (*piVar4 == -1) {
          piVar4 = (int *)0x0;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      fVar10 = (float)FUN_00390038(param_2,piVar4 + 1,param_3);
      iVar2 = iVar5;
      if ((fVar10 <= param_1) && (iVar2 = iVar8, iVar9 = iVar5, param_1 <= fVar10))
      goto LAB_002f096c;
      iVar8 = iVar2;
      iVar5 = iVar9;
      if (iVar8 + -1 <= iVar9) break;
      iVar2 = *(int *)(iVar6 + 8);
    }
  }
  uVar1 = *(uint *)((iVar7 * *(int *)(iVar6 + 8) + iVar5) * 4 + *(int *)(iVar6 + 0xc));
  if (uVar1 < *(uint *)(*(int *)(iVar6 + 4) + 0xc)) {
    piVar4 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar6 + 4) + 0x18));
    if (*piVar4 == -1) {
      piVar4 = (int *)0x0;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  fVar10 = (float)FUN_00390038(param_2,piVar4 + 1,param_3);
  uVar1 = *(uint *)((iVar7 * *(int *)(iVar6 + 8) + iVar8) * 4 + *(int *)(iVar6 + 0xc));
  if (uVar1 < *(uint *)(*(int *)(iVar6 + 4) + 0xc)) {
    piVar4 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)(iVar6 + 4) + 0x18));
    if (*piVar4 == -1) {
      piVar4 = (int *)0x0;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  fVar11 = (float)FUN_00390038(param_2,piVar4 + 1,param_3);
  if (param_4 == '\0') {
LAB_002f08c8:
    if ((param_1 < fVar10) && (param_1 < fVar11)) {
      return 0xffffffffffffffff;
    }
    if (param_4 == '\0') {
      if (fVar11 <= param_1) {
        fVar10 = fVar11;
        iVar5 = iVar8;
      }
      param_4 = '\0';
      goto LAB_002f096c;
    }
  }
  else {
    if ((fVar10 < param_1) && (fVar11 < param_1)) {
      return 0xffffffffffffffff;
    }
    if (param_4 == '\0') goto LAB_002f08c8;
  }
  if (fVar10 < param_1) {
    fVar10 = fVar11;
    iVar5 = iVar8;
  }
LAB_002f096c:
  uVar3 = FUN_002f02e8(fVar10,param_2,iVar5,param_3,param_4);
  return uVar3;
}


// ==== CFindNearestData_002f09a8 @ 002f09a8 ====

/* Strings referenciadas:
     "CFindNearestData" */

void CFindNearestData_002f09a8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00451768 = &DAT_003ec200;
    }
    else {
      FUN_002f35b0(0x451658,0x407230,0x2eef88);
    }
  }
  return;
}


// ==== FUN_002f0a00 @ 002f0a00 ====

undefined8 FUN_002f0a00(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  puVar2[1] = param_2;
  *puVar2 = &DAT_003ec1c8;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  puVar2[3] = 0;
  puVar2[2] = uVar1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  return param_1;
}


// ==== FUN_002f0a30 @ 002f0a30 ====

void FUN_002f0a30(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003ec1c8;
  if (puVar1[3] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[4] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[5] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002f0ad8 @ 002f0ad8 ====

int FUN_002f0ad8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5
                ,int *param_6)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00390038();
  lVar1 = FUN_002f06c0(fVar2 - param_1,param_2,param_4,1);
  *param_5 = (int)lVar1;
  if (lVar1 != -1) {
    lVar1 = FUN_002f06c0(fVar2 + param_1,param_2,param_4,0);
    *param_6 = (int)lVar1;
    if (lVar1 != -1) {
      return ((int)lVar1 - *param_5) + 1;
    }
  }
  return 0;
}


// ==== FUN_002f0b98 @ 002f0b98 ====

void FUN_002f0b98(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_50 [4];
  
  if ((*(int *)(param_1 + 0x10) == 0) && (0 < *(int *)(param_1 + 8))) {
    auStack_50[0] = 0;
    iVar3 = *(int *)(param_1 + 8) * 0xc;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3,auStack_50);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_50[0],iVar3,uVar2);
    }
    *(undefined4 *)(param_1 + 0x10) = auStack_50[0];
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8) * 3) {
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x10)) = *param_2;
      param_2 = param_2 + 1;
    } while (iVar3 < *(int *)(param_1 + 8) * 3);
  }
  return;
}


// ==== FUN_002f0c80 @ 002f0c80 ====

void FUN_002f0c80(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_50 [4];
  
  if ((*(int *)(param_1 + 0xc) == 0) && (0 < *(int *)(param_1 + 8))) {
    auStack_50[0] = 0;
    iVar3 = *(int *)(param_1 + 8) * 0xc;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar3,auStack_50);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_50[0],iVar3,uVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = auStack_50[0];
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8) * 3) {
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0xc)) = *param_2;
      param_2 = param_2 + 1;
    } while (iVar3 < *(int *)(param_1 + 8) * 3);
  }
  return;
}


// ==== FUN_002f0d68 @ 002f0d68 ====

void FUN_002f0d68(void)

{
  CFindNearestData_002f09a8(1,0xffff);
  return;
}


// ==== FUN_002f0d88 @ 002f0d88 ====

void FUN_002f0d88(void)

{
  CFindNearestData_002f09a8(0,0xffff);
  return;
}


// ==== FUN_002f0da8 @ 002f0da8 ====

undefined4 FUN_002f0da8(void)

{
  if (((((DAT_00454788 != -1) && (DAT_00454670 != -1)) && (DAT_00451658 != -1)) &&
      (((DAT_00452388 != -1 && (DAT_00451e08 != -1)) &&
       ((DAT_00452038 != -1 && ((DAT_00451f20 != -1 && (DAT_00451778 != -1)))))))) &&
     ((DAT_00451ac0 != -1 &&
      (((((DAT_00451bd8 != -1 && (DAT_00451890 != -1)) && (DAT_004519a8 != -1)) &&
        ((DAT_004524a0 != -1 && (DAT_00452270 != -1)))) &&
       ((DAT_004525b8 != -1 && (DAT_00452158 != -1)))))))) {
    return 1;
  }
  return 0;
}


// ==== FUN_002f0e80 @ 002f0e80 ====

void FUN_002f0e80(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],4,uVar1);
  }
  *apuStack_20[0] = &DAT_003eca50;
  return;
}


// ==== FUN_002f0ee8 @ 002f0ee8 ====

void FUN_002f0ee8(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x154,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x154,uVar1);
  }
  FUN_002f0f80(auStack_30[0]);
  return;
}


// ==== FUN_002f0f80 @ 002f0f80 ====

undefined8 FUN_002f0f80(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003eca20;
  iVar2 = DAT_003c9ed4;
  iVar3 = 0x12;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  fVar5 = 0.0;
  puVar4[0x51] = 0;
  puVar4[0x52] = 0;
  if (iVar2 != 0) {
    fVar5 = *(float *)(iVar2 + 0xc);
  }
  puVar4[0x53] = fVar5 * 100.0;
  puVar4[0x54] = *(float *)(iVar2 + 0xc) * 20.0;
  return param_1;
}


// ==== FUN_002f0ff8 @ 002f0ff8 ====

/* WARNING: Removing unreachable block (ram,0x002f10b8) */

undefined4 FUN_002f0ff8(int param_1,undefined8 param_2,int *param_3,float *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = param_3[1];
  if (param_3 == (int *)(iVar3 + 0x5c)) {
    fVar12 = *(float *)(iVar3 + 0x8c);
  }
  else if (*(int *)(iVar3 + 0x48) == 0) {
    iVar3 = FUN_0038f2b0(param_3);
    iVar2 = FUN_0038f2f0(param_3);
    fVar10 = *(float *)(iVar2 + 4) - *(float *)(iVar3 + 4);
    fVar9 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar12 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
    fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12);
  }
  else {
    fVar12 = *(float *)(*param_3 * 4 + *(int *)(iVar3 + 0x48));
  }
  iVar3 = param_3[1];
  if (param_3 == (int *)(iVar3 + 0x5c)) {
    iVar3 = iVar3 + 0x78;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x18) + *(int *)(*param_3 * 4 + *(int *)(iVar3 + 0x3c)) * 0x14;
  }
  *param_4 = 0.0;
  pfVar7 = (float *)(iVar3 + 4);
  uVar8 = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    piVar5 = (int *)(param_1 + 0xf4);
    do {
      iVar2 = *piVar5;
      fVar10 = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0x38);
      fVar11 = *pfVar7 - *(float *)(iVar2 + 0x30);
      fVar9 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 0x34);
      if (fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9 <=
          *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150)) {
        cVar1 = (*DAT_00451250)(pfVar7,iVar2 + 0x30,param_2,1);
        if (cVar1 == '\0') {
          uVar4 = *(uint *)(param_1 + 0x148);
        }
        else {
          *param_4 = *param_4 + *(float *)(param_1 + 0x14c);
          uVar4 = *(uint *)(param_1 + 0x148);
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x148);
      }
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar8 < uVar4);
  }
  uVar8 = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    pfVar6 = (float *)(param_1 + 4);
    do {
      fVar9 = *(float *)(iVar3 + 0xc) - pfVar6[2];
      fVar10 = *(float *)(iVar3 + 8) - pfVar6[1];
      if (fVar9 * fVar9 + (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) + fVar10 * fVar10 <=
          *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150)) {
        cVar1 = (*DAT_00451250)(pfVar7,pfVar6,param_2,1);
        if (cVar1 == '\0') {
          uVar4 = *(uint *)(param_1 + 0x144);
        }
        else {
          *param_4 = *param_4 + *(float *)(param_1 + 0x14c);
          uVar4 = *(uint *)(param_1 + 0x144);
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x144);
      }
      uVar8 = uVar8 + 1;
      pfVar6 = pfVar6 + 3;
    } while (uVar8 < uVar4);
  }
  *param_4 = *param_4 + fVar12;
  return 1;
}


// ==== FUN_002f12c0 @ 002f12c0 ====

void FUN_002f12c0(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x60,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x60,uVar1);
  }
  FUN_002f1358(auStack_30[0]);
  return;
}


// ==== FUN_002f1358 @ 002f1358 ====

undefined8 FUN_002f1358(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = DAT_003c9ed4;
  puVar2 = (undefined4 *)param_1;
  puVar2[0x15] = 0;
  fVar3 = 0.0;
  *puVar2 = &DAT_003ec9f0;
  if (iVar1 != 0) {
    fVar3 = *(float *)(iVar1 + 0xc);
  }
  fVar4 = 0.0;
  puVar2[0x16] = fVar3 * 100.0;
  if (iVar1 != 0) {
    fVar4 = *(float *)(iVar1 + 0xc);
  }
  puVar2[0x17] = fVar4 * 20.0;
  return param_1;
}


// ==== FUN_002f13b0 @ 002f13b0 ====

/* WARNING: Removing unreachable block (ram,0x002f1468) */

undefined4 FUN_002f13b0(int *param_1,undefined8 param_2,int *param_3,float *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar3 = param_3[1];
  if (param_3 == (int *)(iVar3 + 0x5c)) {
    fVar11 = *(float *)(iVar3 + 0x8c);
  }
  else if (*(int *)(iVar3 + 0x48) == 0) {
    iVar3 = FUN_0038f2b0(param_3);
    iVar2 = FUN_0038f2f0(param_3);
    fVar9 = *(float *)(iVar2 + 4) - *(float *)(iVar3 + 4);
    fVar8 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar11 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
    fVar11 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11);
  }
  else {
    fVar11 = *(float *)(*param_3 * 4 + *(int *)(iVar3 + 0x48));
  }
  iVar3 = param_3[1];
  if (param_3 == (int *)(iVar3 + 0x5c)) {
    iVar3 = iVar3 + 0x78;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x18) + *(int *)(*param_3 * 4 + *(int *)(iVar3 + 0x3c)) * 0x14;
  }
  fStack_90 = *(float *)(iVar3 + 4);
  fStack_8c = *(float *)(iVar3 + 8);
  fStack_88 = *(float *)(iVar3 + 0xc);
  *param_4 = 0.0;
  uVar7 = 0;
  piVar6 = param_1;
  if (param_1[0x15] != 0) {
    do {
      piVar6 = piVar6 + 1;
      iVar3 = *piVar6;
      fVar9 = fStack_88 - *(float *)(iVar3 + 0x38);
      fVar10 = fStack_90 - *(float *)(iVar3 + 0x30);
      fVar8 = fStack_8c - *(float *)(iVar3 + 0x34);
      if (fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8 <=
          (float)param_1[0x17] * (float)param_1[0x17]) {
        lVar5 = FUN_002d8578(&fStack_90);
        if (lVar5 != 0) {
          cVar1 = (*DAT_00451250)(&fStack_90,iVar3 + 0x30,*piVar6,1);
          if (cVar1 == '\0') {
            uVar4 = param_1[0x15];
            goto LAB_002f1594;
          }
          *param_4 = *param_4 + (float)param_1[0x16];
        }
        uVar4 = param_1[0x15];
      }
      else {
        uVar4 = param_1[0x15];
      }
LAB_002f1594:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  *param_4 = *param_4 + fVar11;
  return 1;
}


// ==== FUN_002f15e0 @ 002f15e0 ====

void FUN_002f15e0(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x154,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x154,uVar1);
  }
  FUN_002f1678(auStack_30[0]);
  return;
}


// ==== FUN_002f1678 @ 002f1678 ====

undefined8 FUN_002f1678(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  
  puVar3 = (undefined4 *)param_1;
  *puVar3 = &DAT_003ec9c0;
  iVar1 = DAT_003c9ed4;
  for (iVar2 = 0x12; iVar2 != -1; iVar2 = iVar2 + -1) {
  }
  puVar3[0x51] = 0;
  puVar3[0x52] = 0;
  fVar4 = 0.0;
  puVar3[0x53] = 0x41a00000;
  if (iVar1 != 0) {
    fVar4 = *(float *)(iVar1 + 0xc);
  }
  puVar3[0x54] = fVar4 * 20.0;
  return param_1;
}


// ==== FUN_002f16e0 @ 002f16e0 ====

/* WARNING: Removing unreachable block (ram,0x002f187c) */

float FUN_002f16e0(float param_1,int param_2,undefined8 param_3,int *param_4,float *param_5,
                  float *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = param_4[1];
  if (param_4 == (int *)(iVar1 + 0x5c)) {
    iVar1 = iVar1 + 100;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x18) + *(int *)(*param_4 * 4 + *(int *)(iVar1 + 0x38)) * 0x14;
  }
  fVar2 = (*param_6 * (*param_5 - *(float *)(iVar1 + 4)) +
           param_6[1] * (param_5[1] - *(float *)(iVar1 + 8)) +
          param_6[2] * (param_5[2] - *(float *)(iVar1 + 0xc))) / param_1;
  fVar3 = param_1;
  if ((fVar2 <= param_1) && (fVar3 = fVar2, fVar2 < 0.0)) {
    fVar3 = 0.0;
  }
  iVar1 = param_4[1];
  if (param_4 == (int *)(iVar1 + 0x5c)) {
    iVar1 = iVar1 + 100;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x18) + *(int *)(*param_4 * 4 + *(int *)(iVar1 + 0x38)) * 0x14;
  }
  fVar3 = fVar3 / param_1;
  fVar4 = *param_5 - (*(float *)(iVar1 + 4) + fVar3 * *param_6);
  fVar2 = param_5[2] - (*(float *)(iVar1 + 0xc) + fVar3 * param_6[2]);
  fVar3 = param_5[1] - (*(float *)(iVar1 + 8) + fVar3 * param_6[1]);
  fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar3 = *(float *)(param_2 + 0x150);
  if (fVar2 <= fVar3) {
    fVar3 = (fVar3 - fVar2) / fVar3;
    fVar3 = *(float *)(param_2 + 0x14c) * fVar3 * fVar3 * fVar3 + 1.0;
  }
  else {
    fVar3 = 1.0;
  }
  return fVar3;
}


// ==== FUN_002f18d8 @ 002f18d8 ====

/* WARNING: Removing unreachable block (ram,0x002f1994) */
/* WARNING: Removing unreachable block (ram,0x002f1a78) */

undefined4 FUN_002f18d8(undefined8 param_1,undefined8 param_2,int *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar2 = param_3[1];
  if (param_3 == (int *)(iVar2 + 0x5c)) {
    fVar5 = *(float *)(iVar2 + 0x8c);
  }
  else {
    if (*(int *)(iVar2 + 0x48) == 0) {
      iVar2 = FUN_0038f2b0(param_3);
      iVar1 = FUN_0038f2f0(param_3);
      fVar7 = *(float *)(iVar1 + 4) - *(float *)(iVar2 + 4);
      fVar6 = *(float *)(iVar1 + 0xc) - *(float *)(iVar2 + 0xc);
      fVar5 = *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8);
      *param_4 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
      goto LAB_002f19b4;
    }
    fVar5 = *(float *)(*param_3 * 4 + *(int *)(iVar2 + 0x48));
  }
  *param_4 = fVar5;
LAB_002f19b4:
  iVar2 = param_3[1];
  if (param_3 == (int *)(iVar2 + 0x5c)) {
    iVar1 = iVar2 + 0x78;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x18) + *(int *)(*param_3 * 4 + *(int *)(iVar2 + 0x3c)) * 0x14;
    iVar2 = param_3[1];
  }
  if (param_3 == (int *)(iVar2 + 0x5c)) {
    iVar2 = iVar2 + 100;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x18) + *(int *)(*param_3 * 4 + *(int *)(iVar2 + 0x38)) * 0x14;
  }
  fStack_88 = *(float *)(iVar1 + 0xc) - *(float *)(iVar2 + 0xc);
  fStack_90 = *(float *)(iVar1 + 4) - *(float *)(iVar2 + 4);
  fStack_8c = *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8);
  fVar5 = (float)FUN_00389140(&fStack_90);
  iVar2 = (int)param_1;
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x144) != 0) {
    iVar1 = iVar2 + 4;
    do {
      fVar6 = (float)FUN_002f16e0(SQRT(fVar5),param_1,param_2,param_3,iVar1,&fStack_90);
      uVar3 = uVar3 + 1;
      *param_4 = *param_4 * fVar6;
      iVar1 = iVar1 + 0xc;
    } while (uVar3 < *(uint *)(iVar2 + 0x144));
  }
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x148) != 0) {
    piVar4 = (int *)(iVar2 + 0xf4);
    do {
      uVar3 = uVar3 + 1;
      fVar6 = (float)FUN_002f16e0(SQRT(fVar5),param_1,param_2,param_3,*piVar4 + 0x30,&fStack_90);
      *param_4 = *param_4 * fVar6;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(iVar2 + 0x148));
  }
  return 1;
}


// ==== FUN_002f1b58 @ 002f1b58 ====

undefined4 * FUN_002f1b58(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x14,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],0x14,uVar1);
  }
  *apuStack_20[0] = &DAT_003ec990;
  apuStack_20[0][1] = 0;
  apuStack_20[0][3] = 0;
  apuStack_20[0][2] = 0;
  apuStack_20[0][4] = 0;
  return apuStack_20[0];
}


// ==== FUN_002f1bd8 @ 002f1bd8 ====

/* WARNING: Removing unreachable block (ram,0x002f1d34) */

undefined4 FUN_002f1bd8(int param_1,undefined8 param_2,int *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x10) == 0.0) {
    return 0;
  }
  iVar2 = param_3[1];
  if (param_3 == (int *)(iVar2 + 0x5c)) {
    iVar2 = iVar2 + 0x78;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x18) + *(int *)(*param_3 * 4 + *(int *)(iVar2 + 0x3c)) * 0x14;
  }
  fVar3 = *(float *)(iVar2 + 8) - *(float *)(param_1 + 8);
  fVar4 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 4);
  fVar5 = *(float *)(iVar2 + 0xc) - *(float *)(param_1 + 0xc);
  if (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 <=
      *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10)) {
    iVar2 = param_3[1];
    if (param_3 == (int *)(iVar2 + 0x5c)) {
      fVar3 = *(float *)(iVar2 + 0x8c);
    }
    else {
      if (*(int *)(iVar2 + 0x48) == 0) {
        iVar2 = FUN_0038f2b0(param_3);
        iVar1 = FUN_0038f2f0(param_3);
        fVar5 = *(float *)(iVar1 + 4) - *(float *)(iVar2 + 4);
        fVar4 = *(float *)(iVar1 + 0xc) - *(float *)(iVar2 + 0xc);
        fVar3 = *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8);
        *param_4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
        return 1;
      }
      fVar3 = *(float *)(*param_3 * 4 + *(int *)(iVar2 + 0x48));
    }
    *param_4 = fVar3;
    return 1;
  }
  return 0;
}


// ==== FUN_002f1d70 @ 002f1d70 ====

void FUN_002f1d70(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],4,uVar1);
  }
  *apuStack_20[0] = &DAT_003ec960;
  return;
}


// ==== FUN_002f1dd8 @ 002f1dd8 ====

void FUN_002f1dd8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],4,uVar1);
  }
  *apuStack_20[0] = &DAT_003ec930;
  return;
}


// ==== FUN_002f1e40 @ 002f1e40 ====

undefined4 * FUN_002f1e40(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar1);
  }
  *apuStack_20[0] = &DAT_003ec900;
  apuStack_20[0][1] = 0;
  return apuStack_20[0];
}


// ==== FUN_002f1eb0 @ 002f1eb0 ====

/* Strings referenciadas:
     "CConstraint"
     "CConstraintShortestPath"
     "CConstraintStealthPath"
     "CConstraintConeVisionStealthPath"
     "CConstraintPointToFleePath"
     "CSphereConstraint"
     "CHeuristicEuclidianDistance"
     "CZeroHeuristic"
     "CPathCostHeuristic" */

void FUN_002f1eb0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00451f18 = &DAT_003e00b0;
      DAT_00451888 = &DAT_003e00c8;
      DAT_00452148 = &DAT_003e00b0;
      DAT_00452030 = &DAT_003e00b0;
      DAT_00451e00 = &DAT_003e00c8;
      DAT_00451ce8 = &DAT_003e00c8;
      DAT_00451bd0 = &DAT_003e00c8;
      DAT_00451ab8 = &DAT_003e00c8;
      DAT_004519a0 = &DAT_003e00c8;
    }
    else {
      FUN_002e51d8(0x451778,0x407330,0,0);
      FUN_002e51d8(0x451890,0x407340,0x2f0e80,0x451778);
      FUN_002e51d8(0x4519a8,0x407358,0x2f0ee8,0x451778);
      FUN_002e51d8(0x451ac0,0x407370,0x2f12c0,0x451778);
      FUN_002e51d8(0x451bd8,0x407398,0x2f15e0,0x451778);
      FUN_002e51d8(0x451cf0,0x4073b8,0x2f1b58,0x451890);
      FUN_00390818(0x451e08,0x4073d0,0x2f1d70,0,0,0);
      DAT_00451f18 = &DAT_003eca80;
      FUN_00390818(0x451f20,0x4073f0,0x2f1dd8,0,0,0);
      DAT_00452030 = &DAT_003eca80;
      FUN_00390818(0x452038,0x407400,0x2f1e40,0,0,0);
      DAT_00452148 = &DAT_003eca80;
    }
  }
  return;
}


// ==== FUN_002f20a0 @ 002f20a0 ====

/* WARNING: Removing unreachable block (ram,0x002f2144) */

undefined4 FUN_002f20a0(undefined8 param_1,undefined8 param_2,int *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = param_3[1];
  if (param_3 == (int *)(iVar1 + 0x5c)) {
    fVar3 = *(float *)(iVar1 + 0x8c);
  }
  else {
    if (*(int *)(iVar1 + 0x48) == 0) {
      iVar1 = FUN_0038f2b0(param_3);
      iVar2 = FUN_0038f2f0(param_3);
      fVar5 = *(float *)(iVar2 + 4) - *(float *)(iVar1 + 4);
      fVar4 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
      fVar3 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
      *param_4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
      return 1;
    }
    fVar3 = *(float *)(*param_3 * 4 + *(int *)(iVar1 + 0x48));
  }
  *param_4 = fVar3;
  return 1;
}


// ==== FUN_002f22d8 @ 002f22d8 ====

undefined8 FUN_002f22d8(undefined8 param_1)

{
  FUN_00390818();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003eca80;
  return param_1;
}


// ==== FUN_002f2380 @ 002f2380 ====

void FUN_002f2380(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_002ec058(DAT_003c9ed4,0x452158);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar1 = FUN_002f30e8(lVar2,param_2,0x452388);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}


// ==== FUN_002f23f8 @ 002f23f8 ====

void FUN_002f23f8(void)

{
  FUN_002f1eb0(1,0xffff);
  return;
}


// ==== FUN_002f2418 @ 002f2418 ====

void FUN_002f2418(void)

{
  FUN_002f1eb0(0,0xffff);
  return;
}


// ==== FUN_002f2438 @ 002f2438 ====

void FUN_002f2438(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x14,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x14,uVar1);
  }
  FUN_002f24d0(auStack_30[0]);
  return;
}


// ==== FUN_002f24d0 @ 002f24d0 ====

undefined8 FUN_002f24d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [4];
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003eda30;
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


// ==== FUN_002f2578 @ 002f2578 ====

void FUN_002f2578(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar3 = 0;
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003eda30;
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
  FUN_002ed1e8();
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002f2660 @ 002f2660 ====

/* Strings referenciadas:
     "Graph"
     "UpdateWithPathObjects"
     "RawData"
     "CoverageDistance"
     "AdditionalData"
     "Class"
     "AstarMemory" */

undefined4 FUN_002f2660(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  
  if (param_2 != 0) {
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x407650);
    if (lVar5 != 0) {
      uVar4 = FUN_002e3920(param_2);
      lVar5 = stricmp(uVar4,0x4076a8);
      if (lVar5 == 0) {
        uVar4 = FUN_002e3918(param_2);
        uVar4 = atoi(uVar4);
        FUN_002ecb80(uVar4);
        *(undefined1 *)((int)param_1 + 0x10) = 1;
      }
      else {
        lVar5 = FUN_002e3920(param_2);
        if (lVar5 == 0) {
          return 0;
        }
        pcVar3 = (char *)FUN_002e3920(param_2);
        if (*pcVar3 != '_') {
          return 0;
        }
      }
      return 1;
    }
    iVar10 = (int)param_2;
    iVar11 = *(int *)(iVar10 + 0xc);
    if (iVar11 != 0) {
      bVar9 = false;
      lVar5 = FUN_002e3330(param_2,0x407658);
      if (lVar5 != 0) {
        lVar5 = atoi(lVar5);
        bVar9 = lVar5 != 0;
      }
      lVar5 = FUN_002e31e0(param_2,0x407670);
      if ((lVar5 != 0) && (lVar5 = FUN_002f28f8(param_1,iVar11,lVar5,bVar9), lVar5 != 0)) {
        lVar6 = FUN_002e3330(param_2,0x407678);
        iVar11 = (int)lVar5;
        if (lVar6 == 0) {
          iVar1 = *(int *)(iVar10 + 0x20);
        }
        else {
          uVar4 = FUN_0035e730(lVar6);
          uVar7 = FUN_00291f58(*(undefined4 *)(DAT_003c9ed4 + 0xc));
          uVar4 = FUN_002914d0(uVar4,uVar7);
          uVar13 = FUN_00291c68(uVar4);
          *(undefined4 *)(*(int *)(iVar11 + 0x84) + 8) = uVar13;
          iVar1 = *(int *)(iVar10 + 0x20);
        }
        uVar12 = 0;
        if (iVar1 == 0) {
          return 1;
        }
        do {
          uVar4 = FUN_002e33e0(param_2,uVar12);
          uVar7 = FUN_002e3920(uVar4);
          lVar5 = stricmp(uVar7,0x407690);
          if (lVar5 == 0) {
            lVar5 = FUN_002e31e0(uVar4,0x4076a0);
            if (lVar5 == 0) {
              uVar2 = *(uint *)(iVar10 + 0x20);
            }
            else {
              uVar7 = FUN_002e3918(lVar5);
              lVar5 = FUN_00390cf8(uVar7);
              if (lVar5 == 0) {
                uVar2 = *(uint *)(iVar10 + 0x20);
              }
              else {
                lVar5 = (**(code **)((int)lVar5 + 4))(*(undefined4 *)(iVar11 + 0x84));
                piVar8 = (int *)lVar5;
                lVar6 = (**(code **)(*piVar8 + 0x14))
                                  ((int)piVar8 + (int)*(short *)(*piVar8 + 0x10),uVar4);
                if (lVar6 == 0) {
                  if (lVar5 != 0) {
                    (**(code **)(*piVar8 + 0xc))((int)piVar8 + (int)*(short *)(*piVar8 + 8),3);
                    uVar2 = *(uint *)(iVar10 + 0x20);
                    goto LAB_002f2844;
                  }
                }
                else {
                  *(int **)(iVar11 + *(int *)(iVar11 + 0x10c) * 4 + 0x8c) = piVar8;
                  *(int *)(iVar11 + 0x10c) = *(int *)(iVar11 + 0x10c) + 1;
                }
                uVar2 = *(uint *)(iVar10 + 0x20);
              }
            }
          }
          else {
            uVar2 = *(uint *)(iVar10 + 0x20);
          }
LAB_002f2844:
          uVar12 = uVar12 + 1;
          if (uVar2 <= uVar12) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}


// ==== FUN_002f28f8 @ 002f28f8 ====

undefined4 FUN_002f28f8(int param_1,long param_2,undefined8 param_3,undefined1 param_4)

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
  int *piVar11;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  undefined4 auStack_a8 [2];
  
  if (param_2 != 0) {
    uVar9 = 0;
    if (*(int *)(param_1 + 8) == 0) {
LAB_002f2998:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      while( true ) {
        iVar10 = uVar9 * 4;
        lVar5 = stricmp(param_2,*(int *)(iVar10 + iVar3) + 4);
        uVar9 = uVar9 + 1;
        if (lVar5 == 0) break;
        if (*(uint *)(param_1 + 8) <= uVar9) goto LAB_002f2998;
        iVar3 = *(int *)(param_1 + 4);
      }
      iVar3 = *(int *)(*(int *)(iVar10 + *(int *)(param_1 + 4)) + 0x84);
    }
    if (iVar3 != 0) {
      return 0;
    }
    uStack_b0 = 0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x98,&uStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b0,0x98,uVar6);
    }
    lVar5 = FUN_002f5c10(uStack_b0);
    piVar11 = (int *)lVar5;
    lVar7 = (**(code **)(*piVar11 + 0x1c))((int)piVar11 + (int)*(short *)(*piVar11 + 0x18),param_3);
    piVar1 = DAT_003c87e8;
    if (lVar7 != 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar3 << 1;
        puStack_ac = (undefined4 *)0x0;
        iVar10 = *piVar1;
        uVar6 = (**(code **)(iVar10 + 0x34))
                          ((int)piVar1 + (int)*(short *)(iVar10 + 0x30),iVar3 << 3,
                           (uint)&uStack_b0 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_ac,iVar3 << 3,uVar6);
        }
        puVar2 = puStack_ac;
        uVar9 = 0;
        puVar8 = puStack_ac;
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
      auStack_a8[0] = 0;
      uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x110,auStack_a8)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_a8[0],0x110,uVar6);
      }
      uVar4 = FUN_002f3250(auStack_a8[0],param_2,lVar5,param_4);
      *(undefined4 *)(iVar3 * 4 + iVar10) = uVar4;
      iVar3 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar3;
      return *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 4) + -4);
    }
    if (lVar5 != 0) {
      (**(code **)(*piVar11 + 0xc))((int)piVar11 + (int)*(short *)(*piVar11 + 8),3);
      return 0;
    }
  }
  return 0;
}


// ==== FUN_002f2bf8 @ 002f2bf8 ====

undefined4 FUN_002f2bf8(int param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puStack_a0;
  undefined4 auStack_9c [3];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_1 + 8) == 0) {
LAB_002f2c98:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      while( true ) {
        iVar8 = uVar7 * 4;
        lVar4 = stricmp(param_2,*(int *)(iVar8 + iVar2) + 4);
        uVar7 = uVar7 + 1;
        if (lVar4 == 0) break;
        if (*(uint *)(param_1 + 8) <= uVar7) goto LAB_002f2c98;
        iVar2 = *(int *)(param_1 + 4);
      }
      iVar2 = *(int *)(*(int *)(iVar8 + *(int *)(param_1 + 4)) + 0x84);
    }
    uVar3 = 0;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == *(int *)(param_1 + 0xc)) {
        puStack_a0 = (undefined4 *)0x0;
        *(int *)(param_1 + 0xc) = iVar2 << 1;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 << 3,
                           &puStack_a0);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_a0,iVar2 << 3,uVar5);
        }
        puVar1 = puStack_a0;
        uVar7 = 0;
        puVar6 = puStack_a0;
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
      auStack_9c[0] = 0;
      iVar2 = *(int *)(param_1 + 8);
      iVar8 = *(int *)(param_1 + 4);
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x110,auStack_9c)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(auStack_9c[0],0x110,uVar5);
      }
      uVar3 = FUN_002f3250(auStack_9c[0],param_2,param_3,param_4);
      *(undefined4 *)(iVar2 * 4 + iVar8) = uVar3;
      uVar3 = 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return uVar3;
}


// ==== CGraphManager_002f2e28 @ 002f2e28 ====

/* Strings referenciadas:
     "CGraphManager" */

void CGraphManager_002f2e28(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00452268 = &DAT_003e5e40;
    }
    else {
      FUN_002e7610(0x452158,0x4076b8,0x2f2438,0,0,0);
    }
  }
  return;
}


// ==== FUN_002f2e88 @ 002f2e88 ====

undefined4 FUN_002f2e88(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar6 = (int)param_1;
    *(undefined1 *)(iVar6 + 0x10) = 0;
    lVar2 = FUN_002e74e0(param_1);
    if (lVar2 != 0) {
      if (*(char *)(iVar6 + 0x10) != '\0') {
        return 1;
      }
      uVar5 = 0;
      uVar4 = 0;
      if (*(uint *)(iVar6 + 8) != 0) {
        piVar3 = *(int **)(iVar6 + 4);
        do {
          if (((*(uint *)(*(int *)(*piVar3 + 0x84) + 4) & 1) != 0) &&
             (uVar1 = *(uint *)(*(int *)(*piVar3 + 0x84) + 0x14), uVar4 < uVar1)) {
            uVar4 = uVar1;
          }
          uVar5 = uVar5 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar5 < *(uint *)(iVar6 + 8));
      }
      if (uVar4 == 0) {
        return 1;
      }
      lVar2 = FUN_002ecb80(uVar4);
      if (lVar2 == 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002f2f58 @ 002f2f58 ====

undefined4 FUN_002f2f58(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002f2fcc:
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      lVar3 = stricmp(param_2,*(int *)(uVar4 * 4 + iVar1) + 4);
      if (lVar3 == 0) break;
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 8) <= uVar4) goto LAB_002f2fcc;
      iVar1 = *(int *)(param_1 + 4);
    }
    uVar2 = *(undefined4 *)(*(int *)(uVar4 * 4 + *(int *)(param_1 + 4)) + 0x84);
  }
  return uVar2;
}


// ==== FUN_002f2ff0 @ 002f2ff0 ====

undefined4 FUN_002f2ff0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (*(int *)(param_1 + 8) == 0) {
LAB_002f30c4:
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    while( true ) {
      lVar5 = stricmp(param_2,*(int *)(uVar8 * 4 + iVar2) + 4);
      if (lVar5 == 0) break;
      uVar8 = uVar8 + 1;
      if (*(uint *)(param_1 + 8) <= uVar8) goto LAB_002f30c4;
      iVar2 = *(int *)(param_1 + 4);
    }
    piVar1 = *(int **)(*(int *)(uVar8 * 4 + *(int *)(param_1 + 4)) + 0x84);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
    }
    uVar3 = *(int *)(param_1 + 8) - 1;
    *(uint *)(param_1 + 8) = uVar3;
    if (uVar8 < uVar3) {
      iVar2 = *(int *)(param_1 + 4);
      while( true ) {
        iVar6 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        puVar7 = (undefined4 *)(iVar6 + iVar2);
        *puVar7 = puVar7[1];
        if (*(uint *)(param_1 + 8) <= uVar8) break;
        iVar2 = *(int *)(param_1 + 4);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


// ==== FUN_002f30e8 @ 002f30e8 ====

undefined4 FUN_002f30e8(int param_1,int param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if ((*(int *)(*(int *)(iVar5 + iVar1) + 0x84) == param_2) &&
         (uVar4 = 0, *(int *)(*(int *)(iVar5 + iVar1) + 0x10c) != 0)) {
        do {
          piVar2 = *(int **)(*(int *)(iVar5 + iVar1) + uVar4 * 4 + 0x8c);
          iVar1 = *piVar2;
          lVar3 = (**(code **)(iVar1 + 0x1c))((int)piVar2 + (int)*(short *)(iVar1 + 0x18));
          if (param_3 == lVar3) {
            return *(undefined4 *)(*(int *)(iVar5 + *(int *)(param_1 + 4)) + uVar4 * 4 + 0x8c);
          }
          iVar1 = *(int *)(param_1 + 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(*(int *)(iVar5 + iVar1) + 0x10c));
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  return 0;
}


// ==== FUN_002f3208 @ 002f3208 ====

undefined4 FUN_002f3208(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    do {
      uVar2 = uVar2 + 1;
      if (*(int *)(*piVar1 + 0x84) == param_2) {
        return 1;
      }
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0;
}


// ==== FUN_002f3250 @ 002f3250 ====

undefined8 FUN_002f3250(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0x21] = param_3;
  puVar1[0x43] = 0;
  *puVar1 = &DAT_003eda70;
  *(undefined1 *)(puVar1 + 0x22) = param_4;
  FUN_0035d1a0(puVar1 + 1,param_2,0x80);
  *(undefined1 *)((int)puVar1 + 0x83) = 0;
  return param_1;
}


// ==== FUN_002f32c0 @ 002f32c0 ====

void FUN_002f32c0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003eda70;
  if (puVar4[0x43] != 0) {
    piVar2 = puVar4 + 0x23;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < (uint)puVar4[0x43]);
  }
  piVar2 = (int *)puVar4[0x21];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),3);
  }
  puVar4[0x21] = 0;
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002f33a8 @ 002f33a8 ====

void FUN_002f33a8(void)

{
  CGraphManager_002f2e28(1,0xffff);
  return;
}


// ==== FUN_002f33c8 @ 002f33c8 ====

void FUN_002f33c8(void)

{
  CGraphManager_002f2e28(0,0xffff);
  return;
}


// ==== FUN_002f33e8 @ 002f33e8 ====

undefined4 * FUN_002f33e8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],8,uVar1);
  }
  *apuStack_20[0] = &DAT_003edc38;
  apuStack_20[0][1] = 0;
  return apuStack_20[0];
}


// ==== CGraphWrapper_002f3458 @ 002f3458 ====

/* Strings referenciadas:
     "CGraphWrapper" */

void CGraphWrapper_002f3458(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00452380 = &DAT_003ea7e8;
    }
    else {
      FUN_002e7400(0x452270,0x407790,0x2f33e8,0);
    }
  }
  return;
}


// ==== FUN_002f34b0 @ 002f34b0 ====

bool FUN_002f34b0(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)((int)param_2 + 0xc);
    if (iVar1 == 0) {
      return false;
    }
    lVar2 = FUN_002ec058(DAT_003c9ed4,0x452158);
    if (lVar2 != 0) {
      lVar2 = FUN_002f2f58(lVar2,iVar1);
      *(int *)(param_1 + 4) = (int)lVar2;
      return lVar2 != 0;
    }
  }
  return false;
}


// ==== FUN_002f3570 @ 002f3570 ====

void FUN_002f3570(void)

{
  CGraphWrapper_002f3458(1,0xffff);
  return;
}


// ==== FUN_002f3590 @ 002f3590 ====

void FUN_002f3590(void)

{
  CGraphWrapper_002f3458(0,0xffff);
  return;
}


// ==== FUN_002f35b0 @ 002f35b0 ====

undefined8 FUN_002f35b0(undefined8 param_1)

{
  FUN_00390f40();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003edd88;
  return param_1;
}


// ==== FUN_002f3600 @ 002f3600 ====

void FUN_002f3600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x18,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x18,uVar1);
  }
  FUN_002f36a8(auStack_40[0],param_1);
  return;
}


// ==== FUN_002f36a8 @ 002f36a8 ====

undefined8 FUN_002f36a8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 auStack_40 [4];
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = param_2;
  puVar3[4] = 0;
  *puVar3 = &DAT_003ede90;
  puVar3[5] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  puVar3[3] = iVar1;
  if (iVar1 == 0) {
    puVar3[2] = 0;
  }
  else {
    auStack_40[0] = 0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 * iVar1,
                       auStack_40);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_40[0],iVar1 * iVar1,uVar2);
    }
    puVar3[2] = auStack_40[0];
  }
  return param_1;
}


// ==== FUN_002f3770 @ 002f3770 ====

/* Strings referenciadas:
     "RawData"
     "Kynogon PathCost Data" */

undefined4 FUN_002f3770(int param_1,undefined8 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_d0 [64];
  int aiStack_90 [4];
  
  lVar5 = FUN_002e31e0(param_2,0x4078e8);
  if (((lVar5 != 0) && (piVar2 = *(int **)(DAT_003c9ed4 + 4), piVar2 != (int *)0x0)) &&
     (lVar6 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),lVar5),
     lVar6 != 0)) {
    iVar4 = *piVar2;
    sVar1 = *(short *)(iVar4 + 0x20);
    uVar7 = strlen(0x407950);
    lVar6 = (**(code **)(iVar4 + 0x24))((int)piVar2 + (int)sVar1,lVar5,auStack_d0,uVar7);
    lVar8 = strlen(0x407950);
    if (lVar6 == lVar8) {
      lVar8 = (**(code **)(*piVar2 + 0x24))
                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),lVar5,aiStack_90,4);
      if (lVar8 == 4) {
        auStack_d0[(int)lVar6] = 0;
        lVar6 = stricmp(0x407950,auStack_d0);
        if (lVar6 == 0) {
          if (aiStack_90[0] == 1) {
            lVar6 = (**(code **)(*piVar2 + 0x24))
                              ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),lVar5,param_1 + 0x10,4)
            ;
            if (lVar6 == 4) {
              iVar3 = (**(code **)(*piVar2 + 0x24))
                                ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),lVar5,
                                 *(undefined4 *)(param_1 + 8),
                                 *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc));
              iVar4 = *piVar2;
              if (iVar3 == *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc)) {
                (**(code **)(iVar4 + 0x2c))((int)piVar2 + (int)*(short *)(iVar4 + 0x28),lVar5);
                return 1;
              }
            }
            else {
              iVar4 = *piVar2;
            }
          }
          else {
            iVar4 = *piVar2;
          }
        }
        else {
          iVar4 = *piVar2;
        }
      }
      else {
        iVar4 = *piVar2;
      }
    }
    else {
      iVar4 = *piVar2;
    }
    (**(code **)(iVar4 + 0x2c))((int)piVar2 + (int)*(short *)(iVar4 + 0x28),param_2);
  }
  return 0;
}


// ==== FUN_002f3948 @ 002f3948 ====

/* Strings referenciadas:
     "Kynogon PathCost Data" */

undefined4 FUN_002f3948(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c0 [64];
  int aiStack_80 [4];
  
  lVar3 = (*DAT_0045127c)(param_2,0x4078f0);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar4 = strlen(0x407950);
    lVar5 = (*DAT_00451290)(auStack_c0,1,uVar4,lVar3);
    lVar6 = strlen(0x407950);
    uVar2 = 0;
    if (lVar5 == lVar6) {
      lVar6 = (*DAT_00451290)(aiStack_80,4,1,lVar3);
      uVar2 = 0;
      if (lVar6 == 1) {
        auStack_c0[(int)lVar5] = 0;
        lVar5 = stricmp(0x407950,auStack_c0);
        uVar2 = 0;
        if ((lVar5 == 0) && (aiStack_80[0] == 1)) {
          lVar5 = (*DAT_00451290)(param_1 + 0x10,4,1,lVar3);
          if ((lVar5 == 1) &&
             (iVar1 = (*DAT_00451290)(*(undefined4 *)(param_1 + 8),1,
                                      *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc),lVar3),
             iVar1 == *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc))) {
            (*DAT_00451280)(lVar3);
            uVar2 = 1;
          }
          else {
            (*DAT_00451280)(lVar3);
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}


// ==== FUN_002f3ab0 @ 002f3ab0 ====

undefined4 FUN_002f3ab0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_120 [8];
  int iStack_118;
  uint *puStack_110;
  undefined4 uStack_fc;
  undefined *apuStack_f0 [4];
  undefined *apuStack_e0 [4];
  undefined4 uStack_d0;
  float *pfStack_cc;
  float *pfStack_c8;
  int iStack_c4;
  int iStack_c0;
  uint uStack_bc;
  
  fVar19 = 0.0;
  pfStack_c8 = (float *)0x0;
  FUN_002fb558(auStack_120);
  FUN_002fb1c8(auStack_120,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  apuStack_f0[0] = &DAT_003ec930;
  apuStack_e0[0] = &DAT_003eca50;
  iStack_c4 = *(int *)(*(int *)(param_1 + 4) + 0x58);
  if (iStack_c4 == 0) {
    *(undefined ***)(*(int *)(param_1 + 4) + 0x58) = apuStack_f0;
  }
  iStack_c0 = *(int *)(*(int *)(param_1 + 4) + 0x54);
  if (iStack_c0 == 0) {
    *(undefined ***)(*(int *)(param_1 + 4) + 0x54) = apuStack_e0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  iVar12 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  *(int *)(param_1 + 0xc) = iVar12;
  if (iVar12 < 1) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uStack_d0 = 0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12 * iVar12,
                       &uStack_d0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d0,iVar12 * iVar12,uVar2);
    }
    *(undefined4 *)(param_1 + 8) = uStack_d0;
    pfStack_cc = (float *)0x0;
    iVar12 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc) * 4;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12,&pfStack_cc)
    ;
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(pfStack_cc,iVar12,uVar2);
    }
    pfStack_c8 = pfStack_cc;
  }
  iVar12 = *(int *)(param_1 + 0xc);
  uVar15 = 0;
  iVar7 = 0;
  iVar16 = 0;
  if (0 < iVar12) {
    uVar8 = 1;
    uVar14 = 0;
    while( true ) {
      uVar13 = 0;
      uStack_bc = uVar8;
      if (0 < iVar12) {
        fVar18 = fVar19;
        do {
          iVar12 = uVar14 * iVar12 + uVar13;
          if (uVar14 == uVar13) {
            pfStack_c8[iVar12] = 0.0;
            fVar19 = fVar18;
            uVar8 = uVar14 + 1;
          }
          else {
            iVar11 = *(int *)(param_1 + 4);
            if (uVar14 < *(uint *)(iVar11 + 0xc)) {
              piVar4 = (int *)(uVar14 * 0x14 + *(int *)(iVar11 + 0x18));
              piVar9 = (int *)0x0;
              if (*piVar4 != -1) {
                piVar9 = piVar4;
              }
            }
            else {
              piVar9 = (int *)0x0;
            }
            if (uVar13 < *(uint *)(iVar11 + 0xc)) {
              piVar5 = (int *)(uVar13 * 0x14 + *(int *)(iVar11 + 0x18));
              piVar4 = (int *)0x0;
              if (*piVar5 != -1) {
                piVar4 = piVar5;
              }
            }
            else {
              piVar4 = (int *)0x0;
            }
            iStack_118 = 0;
            uStack_fc = 0;
            lVar3 = FUN_002ee078(*(undefined4 *)(param_1 + 4),auStack_120,piVar9,piVar4,0);
            if (lVar3 == 0) {
              fVar19 = -1.0;
              iVar16 = iVar16 + 1;
            }
            else {
              fVar19 = 0.0;
              if (1 < iStack_118) {
                puVar10 = puStack_110;
                iVar11 = 0;
                do {
                  if (*puVar10 < *(uint *)(*(int *)(param_1 + 4) + 0x28)) {
                    piVar4 = (int *)(*puVar10 * 8 + *(int *)(*(int *)(param_1 + 4) + 0x34));
                    piVar9 = (int *)0x0;
                    if (*piVar4 != -1) {
                      piVar9 = piVar4;
                    }
                  }
                  else {
                    piVar9 = (int *)0x0;
                  }
                  iVar1 = piVar9[1];
                  if (piVar9 == (int *)(iVar1 + 0x5c)) {
                    fVar17 = *(float *)(iVar1 + 0x90);
                  }
                  else if (*(int *)(iVar1 + 0x4c) == 0) {
                    fVar17 = 0.0;
                  }
                  else {
                    fVar17 = *(float *)(*piVar9 * 4 + *(int *)(iVar1 + 0x4c));
                  }
                  fVar19 = fVar19 + fVar17;
                  iVar1 = iVar11 + 2;
                  puVar10 = puVar10 + 1;
                  iVar11 = iVar11 + 1;
                } while (iVar1 < iStack_118);
              }
              uVar15 = uVar15 + iStack_118;
            }
            iVar7 = iVar7 + 1;
            pfStack_c8[iVar12] = fVar19;
            if (fVar19 <= fVar18) {
              fVar19 = fVar18;
            }
            uVar8 = uVar13 + 1;
            if (*(code **)(param_1 + 0x14) != (code *)0x0) {
              iVar12 = *(int *)(param_1 + 0xc);
              if (iVar12 * iVar12 == 0) {
                trap(7);
              }
              if (iVar7 == iVar16) {
                fVar18 = 0.0;
              }
              else {
                fVar18 = (float)uVar15 / (float)(uint)(iVar7 - iVar16);
              }
              (**(code **)(param_1 + 0x14))
                        (fVar18,(int)((uVar14 * iVar12 + uVar13) * 100) / (iVar12 * iVar12),iVar7,
                         iVar16);
            }
          }
          uVar13 = uVar8;
          iVar12 = *(int *)(param_1 + 0xc);
          fVar18 = fVar19;
        } while ((int)uVar13 < iVar12);
      }
      if (iVar12 <= (int)uStack_bc) break;
      uVar8 = uStack_bc + 1;
      uVar14 = uStack_bc;
    }
  }
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    if (iVar7 == iVar16) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = (float)uVar15 / (float)(uint)(iVar7 - iVar16);
    }
    (**(code **)(param_1 + 0x14))(fVar18,100,iVar7,iVar16);
  }
  iVar12 = 0;
  *(float *)(param_1 + 0x10) = 254.0 / fVar19;
  pfVar6 = pfStack_c8;
  if (0 < *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc)) {
    do {
      if (0.0 <= *pfVar6) {
        *(char *)(*(int *)(param_1 + 8) + iVar12) =
             (char)(int)(*(float *)(param_1 + 0x10) * *pfVar6);
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 8) + iVar12) = 0xff;
      }
      iVar12 = iVar12 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar12 < *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc));
  }
  if (pfStack_c8 != (float *)0x0) {
    (*(code *)PTR_FUN_003c87e0)(pfStack_c8);
  }
  *(int *)(*(int *)(param_1 + 4) + 0x58) = iStack_c4;
  *(int *)(*(int *)(param_1 + 4) + 0x54) = iStack_c0;
  apuStack_f0[0] = &DAT_003e0040;
  apuStack_e0[0] = &DAT_003e0040;
  FUN_002fb590(auStack_120,2);
  return 1;
}


// ==== FUN_002f4100 @ 002f4100 ====

/* Strings referenciadas:
     "Kynogon PathCost Data" */

undefined4 FUN_002f4100(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if ((*(int *)(param_1 + 8) != 0) && (0 < *(int *)(param_1 + 0xc))) {
    lVar2 = (*DAT_0045127c)(param_2,0x4078f8);
    if (lVar2 == 0) {
      return 0;
    }
    uStack_6c = *(undefined4 *)(param_1 + 0x10);
    uStack_70 = DAT_00407968;
    uVar3 = strlen(0x407950);
    lVar4 = (*DAT_0045128c)(0x407950,1,uVar3,lVar2);
    lVar5 = strlen(0x407950);
    if (lVar4 != lVar5) {
      return 0;
    }
    lVar4 = (*DAT_0045128c)(&uStack_70,4,1,lVar2);
    if (lVar4 != 1) {
      return 0;
    }
    lVar4 = (*DAT_0045128c)((uint)&uStack_70 | 4,4,1,lVar2);
    if (lVar4 != 1) {
      return 0;
    }
    iVar1 = (*DAT_0045128c)(*(undefined4 *)(param_1 + 8),1,
                            *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc),lVar2);
    if (iVar1 == *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0xc)) {
      (*DAT_00451280)(lVar2);
      return 1;
    }
    (*DAT_00451280)(lVar2);
  }
  return 0;
}


// ==== CPathCostData_002f4260 @ 002f4260 ====

/* Strings referenciadas:
     "CPathCostData" */

void CPathCostData_002f4260(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00452498 = &DAT_003ec200;
    }
    else {
      FUN_002f35b0(0x452388,0x407900,0x2f3600);
    }
  }
  return;
}


// ==== FUN_002f42b8 @ 002f42b8 ====

void FUN_002f42b8(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003ede90;
  if (puVar1[2] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002f4350 @ 002f4350 ====

void FUN_002f4350(void)

{
  CPathCostData_002f4260(1,0xffff);
  return;
}


// ==== FUN_002f4370 @ 002f4370 ====

void FUN_002f4370(void)

{
  CPathCostData_002f4260(0,0xffff);
  return;
}


// ==== FUN_002f4390 @ 002f4390 ====

/* Strings referenciadas:
     "LinkedEdgeMax" */

undefined4 FUN_002f4390(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int *apiStack_50 [4];
  
  lVar4 = FUN_002e3330(param_2,0x407a10);
  if (lVar4 == 0) {
    iVar2 = param_1[0x1b];
  }
  else {
    iVar2 = atoi(lVar4);
    param_1[0x1b] = iVar2;
    iVar2 = param_1[0x1b];
  }
  if (iVar2 == 0) {
    param_1[0x1b] = 1;
    iVar2 = param_1[0x1b];
  }
  else {
    iVar2 = param_1[0x1b];
  }
  apiStack_50[0] = (int *)0x0;
  iVar7 = iVar2 * 0x10 + 0x10;
  uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,apiStack_50);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apiStack_50[0],iVar7,uVar5);
  }
  iVar7 = iVar2 + -1;
  *apiStack_50[0] = iVar2;
  piVar6 = apiStack_50[0] + 4;
  if (iVar2 != 0) {
    do {
      *piVar6 = (int)&DAT_003ee138;
      iVar7 = iVar7 + -1;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6 = piVar6 + 4;
    } while (iVar7 != -1);
  }
  uVar1 = DAT_003c9ed4;
  param_1[0x18] = (int)(apiStack_50[0] + 4);
  iVar2 = FUN_002ec058(uVar1,0x4525b8);
  param_1[0x1a] = iVar2;
  puVar3 = (undefined4 *)
           (**(code **)(*param_1 + 0x24))((int)param_1 + (int)*(short *)(*param_1 + 0x20));
  do {
    if (puVar3 == &DAT_004524a0) {
      return 1;
    }
    puVar3 = (undefined4 *)puVar3[0x42];
  } while (puVar3 != (undefined4 *)0x0);
  return 0;
}


// ==== FUN_002f44e8 @ 002f44e8 ====

void FUN_002f44e8(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  lVar3 = FUN_002ec058(DAT_003c9ed4,0x452158);
  if (lVar3 != 0) {
    iVar6 = (int)lVar3;
    uVar7 = 0;
    if (*(int *)(iVar6 + 8) != 0) {
      iVar5 = *(int *)(iVar6 + 4);
      while( true ) {
        uVar1 = *(undefined4 *)(*(int *)(uVar7 * 4 + iVar5) + 0x84);
        lVar4 = FUN_002f3208(lVar3,uVar1);
        if (lVar4 == 0) {
          uVar2 = *(uint *)(iVar6 + 8);
        }
        else {
          if (*(char *)(*(int *)(uVar7 * 4 + *(int *)(iVar6 + 4)) + 0x88) != '\0') {
            (**(code **)(*param_1 + 0x9c))((int)param_1 + (int)*(short *)(*param_1 + 0x98),uVar1);
          }
          uVar2 = *(uint *)(iVar6 + 8);
        }
        uVar7 = uVar7 + 1;
        if (uVar2 <= uVar7) break;
        iVar5 = *(int *)(iVar6 + 4);
      }
    }
    uVar7 = 0;
    if (param_1[0x19] != 0) {
      iVar6 = param_1[0x18];
      while( true ) {
        iVar6 = iVar6 + uVar7 * 0x10;
        lVar4 = FUN_002f3208(lVar3,*(undefined4 *)(iVar6 + 4));
        if (lVar4 == 0) {
          uVar2 = param_1[0x19];
        }
        else {
          (**(code **)(*param_1 + 0x84))
                    ((int)param_1 + (int)*(short *)(*param_1 + 0x80),*(undefined4 *)(iVar6 + 4),
                     *(undefined4 *)(iVar6 + 8));
          uVar2 = param_1[0x19];
        }
        uVar7 = uVar7 + 1;
        if (uVar2 <= uVar7) break;
        iVar6 = param_1[0x18];
      }
    }
    param_1[0x19] = 0;
  }
  return;
}


// ==== FUN_002f4620 @ 002f4620 ====

undefined4 FUN_002f4620(int param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    return 0;
  }
  iVar4 = param_3[1];
  if (param_3 == (int *)(iVar4 + 0x5c)) {
    iVar2 = *(int *)(iVar4 + 0x94);
  }
  else {
    iVar2 = 0;
    if (*(int *)(iVar4 + 0x50) != 0) {
      iVar2 = *(int *)(*param_3 * 4 + *(int *)(iVar4 + 0x50));
    }
  }
  uVar1 = *(uint *)(param_1 + 100);
  if ((iVar2 != 0) && (uVar5 = 0, uVar1 != 0)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x60) + 8);
    do {
      uVar5 = uVar5 + 1;
      if ((int *)*puVar3 == param_3) {
        return 1;
      }
      puVar3 = puVar3 + 4;
    } while (uVar5 < uVar1);
  }
  if (*(uint *)(param_1 + 0x6c) <= uVar1) {
    return 0;
  }
  if (param_3 == (int *)(iVar4 + 0x5c)) {
    iVar2 = *(int *)(iVar4 + 0x94);
  }
  else {
    iVar2 = 0;
    if (*(int *)(iVar4 + 0x50) != 0) {
      iVar2 = *(int *)(*param_3 * 4 + *(int *)(iVar4 + 0x50));
    }
  }
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 100) * 0x10 + *(int *)(param_1 + 0x60) + 0xc) = 0;
  }
  else {
    iVar4 = param_3[1];
    if (param_3 == (int *)(iVar4 + 0x5c)) {
      uVar6 = *(undefined4 *)(iVar4 + 0x94);
    }
    else if (*(int *)(iVar4 + 0x50) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*param_3 * 4 + *(int *)(iVar4 + 0x50));
    }
    *(undefined4 *)(*(int *)(param_1 + 100) * 0x10 + *(int *)(param_1 + 0x60) + 0xc) = uVar6;
  }
  iVar4 = param_3[1];
  if (param_3 == (int *)(iVar4 + 0x5c)) {
    *(int *)(iVar4 + 0x94) = param_1;
  }
  else {
    if (*(int *)(iVar4 + 0x50) == 0) {
      iVar4 = *(int *)(param_1 + 100);
      goto LAB_002f4778;
    }
    *(int *)(*param_3 * 4 + *(int *)(iVar4 + 0x50)) = param_1;
  }
  iVar4 = *(int *)(param_1 + 100);
LAB_002f4778:
  *(int **)(iVar4 * 0x10 + *(int *)(param_1 + 0x60) + 8) = param_3;
  *(int *)(*(int *)(param_1 + 100) * 0x10 + *(int *)(param_1 + 0x60) + 4) = (int)param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return 1;
}


// ==== FUN_002f47b0 @ 002f47b0 ====

undefined4 FUN_002f47b0(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_2 != 0) && (uVar6 = 0, param_3 != (int *)0x0)) {
    uVar5 = param_1[0x19];
    if ((uVar5 != 0) && (*(int **)(param_1[0x18] + 8) != param_3)) {
      piVar3 = (int *)(param_1[0x18] + 8);
      uVar6 = 1;
      while ((piVar3 = piVar3 + 4, uVar6 < uVar5 && ((int *)*piVar3 != param_3))) {
        uVar6 = uVar6 + 1;
      }
    }
    if (uVar6 != uVar5) {
      iVar7 = param_1[0x18];
      (**(code **)(*param_1 + 0x94))
                ((int)param_1 + (int)*(short *)(*param_1 + 0x90),param_2,param_3);
      iVar1 = param_3[1];
      if (param_3 == (int *)(iVar1 + 0x5c)) {
        piVar3 = *(int **)(iVar1 + 0x94);
      }
      else {
        piVar3 = (int *)0x0;
        if (*(int *)(iVar1 + 0x50) != 0) {
          piVar3 = *(int **)(*param_3 * 4 + *(int *)(iVar1 + 0x50));
        }
      }
      if (piVar3 == param_1) {
        iVar1 = param_3[1];
        uVar2 = *(undefined4 *)(iVar7 + uVar6 * 0x10 + 0xc);
        if (param_3 == (int *)(iVar1 + 0x5c)) {
          *(undefined4 *)(iVar1 + 0x94) = uVar2;
        }
        else {
          if (*(int *)(iVar1 + 0x50) == 0) {
            return 1;
          }
          *(undefined4 *)(*param_3 * 4 + *(int *)(iVar1 + 0x50)) = uVar2;
        }
        return 1;
      }
      iVar7 = param_3[1];
      if (param_3 == (int *)(iVar7 + 0x5c)) {
        piVar3 = *(int **)(iVar7 + 0x94);
      }
      else if (*(int *)(iVar7 + 0x50) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(*param_3 * 4 + *(int *)(iVar7 + 0x50));
      }
      iVar7 = 0;
      if (piVar3 != param_1) {
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        uVar6 = piVar3[0x19];
        while( true ) {
          uVar5 = 0;
          if ((uVar6 != 0) && (*(int **)(piVar3[0x18] + 8) != param_3)) {
            puVar4 = (undefined4 *)(piVar3[0x18] + 8);
            uVar5 = 1;
            while ((puVar4 = puVar4 + 4, uVar5 < uVar6 && ((int *)*puVar4 != param_3))) {
              uVar5 = uVar5 + 1;
            }
          }
          if (uVar5 == uVar6) {
            return 0;
          }
          iVar7 = piVar3[0x18] + uVar5 * 0x10;
          piVar3 = *(int **)(iVar7 + 0xc);
          if ((piVar3 == param_1) || (piVar3 == (int *)0x0)) break;
          uVar6 = piVar3[0x19];
        }
      }
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      uVar6 = 0;
      if (iVar7 == 0) {
        return 0;
      }
      uVar5 = piVar3[0x19];
      if ((uVar5 != 0) && (*(int **)(piVar3[0x18] + 8) != param_3)) {
        puVar4 = (undefined4 *)(piVar3[0x18] + 8);
        uVar6 = 1;
        while ((puVar4 = puVar4 + 4, uVar6 < uVar5 && ((int *)*puVar4 != param_3))) {
          uVar6 = uVar6 + 1;
        }
      }
      if (uVar6 != uVar5) {
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(uVar6 * 0x10 + piVar3[0x18] + 0xc);
        return 1;
      }
    }
  }
  return 0;
}


// ==== CPathObject_002f49f0 @ 002f49f0 ====

/* Strings referenciadas:
     "CPathObject" */

void CPathObject_002f49f0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004525b0 = &DAT_003e00f8;
    }
    else {
      FUN_002e4d88(0x4524a0,0x407a20,0,0);
    }
  }
  return;
}


// ==== FUN_002f4a48 @ 002f4a48 ====

undefined8 FUN_002f4a48(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002e41d8();
  puVar1 = (undefined4 *)param_1;
  puVar1[0x1b] = 0x19;
  *puVar1 = &DAT_003ee090;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  return param_1;
}


// ==== FUN_002f4a90 @ 002f4a90 ====

void FUN_002f4a90(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003ee090;
  piVar1 = (int *)puVar4[0x18];
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + piVar1[-4] * 4;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[0x18];
    }
    else {
      do {
        piVar3 = piVar3 + -4;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[0x18] != piVar3);
      iVar2 = puVar4[0x18];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  FUN_002e45f8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002f4b50 @ 002f4b50 ====

void FUN_002f4b50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x68);
  if (iVar1 != 0) {
    FUN_002f5ae0(iVar1,param_1,param_2);
  }
  return;
}


// ==== FUN_002f4b80 @ 002f4b80 ====

void FUN_002f4b80(void)

{
  CPathObject_002f49f0(1,0xffff);
  return;
}


// ==== FUN_002f4ba0 @ 002f4ba0 ====

void FUN_002f4ba0(void)

{
  CPathObject_002f49f0(0,0xffff);
  return;
}


// ==== FUN_002f4bc0 @ 002f4bc0 ====

void FUN_002f4bc0(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x1c,uVar1);
  }
  FUN_002f4c58(auStack_30[0]);
  return;
}


// ==== FUN_002f4c58 @ 002f4c58 ====

undefined8 FUN_002f4c58(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_003c9ed4;
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003ee398;
  FUN_002e1038(uVar1,0x2f5868,param_1);
  FUN_002e1078(DAT_003c9ed4,0x2f58e8,param_1);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = 0;
  return param_1;
}


// ==== FUN_002f4cf8 @ 002f4cf8 ====

void FUN_002f4cf8(undefined8 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  piVar1 = (int *)puVar4[5];
  *puVar4 = &DAT_003ee398;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + piVar1[-4] * 7;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[5];
    }
    else {
      do {
        piVar3 = piVar3 + -7;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[5] != piVar3);
      iVar2 = puVar4[5];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  if (puVar4[1] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (DAT_003cba50 != 0) {
    (*(code *)PTR_FUN_003c87e0)(DAT_003cba40);
    (*(code *)PTR_FUN_003c87e0)(DAT_003cba44);
    (*(code *)PTR_FUN_003c87e0)(DAT_003cba48);
    DAT_003cba40 = 0;
    DAT_003cba44 = 0;
    DAT_003cba48 = 0;
    DAT_003cba4c = 0;
    DAT_003cba50 = 0;
  }
  FUN_002e1058(DAT_003c9ed4,0x2f5868,param_1);
  FUN_002e1098(DAT_003c9ed4,0x2f58e8,param_1);
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002f4e90 @ 002f4e90 ====

undefined4 FUN_002f4e90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_40 [4];
  
  uVar1 = DAT_003c9ed4;
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x10) = 0x14;
  uVar1 = FUN_002ec058(uVar1,0x452158);
  *(undefined4 *)(iVar7 + 0xc) = uVar1;
  lVar2 = FUN_002e74e0(param_1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    auStack_40[0] = 0;
    iVar6 = *(int *)(iVar7 + 0x10) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,auStack_40);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_40[0],iVar6,uVar3);
    }
    uVar5 = 0;
    *(undefined4 *)(iVar7 + 4) = auStack_40[0];
    if (*(int *)(iVar7 + 0x10) != 0) {
      iVar6 = *(int *)(iVar7 + 4);
      while( true ) {
        iVar4 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar4 + iVar6) = 0;
        if (*(uint *)(iVar7 + 0x10) <= uVar5) break;
        iVar6 = *(int *)(iVar7 + 4);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_002f4f80 @ 002f4f80 ====

undefined4 FUN_002f4f80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *apiStack_a0 [4];
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar1 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        piVar5 = *(int **)(iVar1 + *(int *)(param_1 + 4));
        iVar1 = *piVar5;
        iVar1 = (**(code **)(iVar1 + 100))((int)piVar5 + (int)*(short *)(iVar1 + 0x60));
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
      } while (uVar7 < *(uint *)(param_1 + 8));
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      apiStack_a0[0] = (int *)0x0;
      iVar8 = iVar1 * 0x1c + 0x10;
      uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,apiStack_a0
                        );
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(apiStack_a0[0],iVar8,uVar4);
      }
      iVar8 = iVar1 + -1;
      *apiStack_a0[0] = iVar1;
      piVar5 = apiStack_a0[0] + 4;
      if (iVar1 != 0) {
        do {
          *piVar5 = (int)&DAT_003ee3d8;
          iVar8 = iVar8 + -1;
          piVar5 = piVar5 + 7;
        } while (iVar8 != -1);
      }
      *(int **)(param_1 + 0x14) = apiStack_a0[0] + 4;
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar8 = 0;
      iVar1 = *(int *)(param_1 + 4);
      while( true ) {
        uVar9 = 0;
        piVar5 = *(int **)(uVar7 * 4 + iVar1);
        iVar1 = (**(code **)(*piVar5 + 0x6c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x68));
        uVar7 = uVar7 + 1;
        while( true ) {
          uVar3 = (**(code **)(*piVar5 + 100))((int)piVar5 + (int)*(short *)(*piVar5 + 0x60));
          iVar6 = uVar9 * 0x1c;
          if (uVar3 <= uVar9) break;
          uVar9 = uVar9 + 1;
          iVar6 = iVar6 + iVar1;
          iVar2 = iVar8 + *(int *)(param_1 + 0x14);
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar6 + 4);
          iVar8 = iVar8 + 0x1c;
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 8);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
          *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
        }
        if (*(uint *)(param_1 + 8) <= uVar7) break;
        iVar1 = *(int *)(param_1 + 4);
      }
    }
    iVar1 = *(int *)(param_1 + 0x14);
  }
  *param_2 = iVar1;
  return *(undefined4 *)(param_1 + 0x18);
}


// ==== FUN_002f51b0 @ 002f51b0 ====

undefined4 FUN_002f51b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x10)) {
    *(int **)(*(uint *)(param_1 + 8) * 4 + *(int *)(param_1 + 4)) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    if (*(int *)(param_1 + 0xc) == 0) {
      lVar4 = FUN_002ec058(DAT_003c9ed4,0x452158);
      *(int *)(param_1 + 0xc) = (int)lVar4;
      if (lVar4 == 0) goto LAB_002f5220;
      uVar8 = 0;
      if (*(int *)((int)lVar4 + 8) != 0) {
        iVar6 = *(int *)(param_1 + 0xc);
        while( true ) {
          iVar6 = *(int *)(uVar8 * 4 + *(int *)(iVar6 + 4));
          uVar8 = uVar8 + 1;
          if ((*(char *)(iVar6 + 0x88) != '\0') && (uVar7 = 0, *(int *)(param_1 + 8) != 0)) {
            iVar5 = *(int *)(param_1 + 4);
            while( true ) {
              iVar2 = uVar7 * 4;
              uVar7 = uVar7 + 1;
              piVar1 = *(int **)(iVar2 + iVar5);
              iVar5 = *piVar1;
              (**(code **)(iVar5 + 0x74))
                        ((int)piVar1 + (int)*(short *)(iVar5 + 0x70),*(undefined4 *)(iVar6 + 0x84));
              if (*(uint *)(param_1 + 8) <= uVar7) break;
              iVar5 = *(int *)(param_1 + 4);
            }
          }
          if (*(uint *)(*(int *)(param_1 + 0xc) + 8) <= uVar8) break;
          iVar6 = *(int *)(param_1 + 0xc);
        }
        return 1;
      }
    }
    else {
      uVar8 = 0;
      if (*(int *)(*(int *)(param_1 + 0xc) + 8) != 0) {
        iVar6 = *(int *)(param_1 + 0xc);
        while( true ) {
          iVar6 = *(int *)(uVar8 * 4 + *(int *)(iVar6 + 4));
          if (*(char *)(iVar6 + 0x88) == '\0') {
            iVar6 = *(int *)(param_1 + 0xc);
          }
          else {
            (**(code **)(*param_2 + 0x74))
                      ((int)param_2 + (int)*(short *)(*param_2 + 0x70),*(undefined4 *)(iVar6 + 0x84)
                      );
            iVar6 = *(int *)(param_1 + 0xc);
          }
          uVar8 = uVar8 + 1;
          if (*(uint *)(iVar6 + 8) <= uVar8) break;
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
    }
    uVar3 = 1;
  }
  else {
LAB_002f5220:
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_002f5348 @ 002f5348 ====

void FUN_002f5348(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  puVar2 = DAT_003cba48;
  puVar1 = DAT_003cba44;
  piVar5 = DAT_003cba40;
  uVar6 = 0;
  if ((DAT_003cba50 != 0) && (*DAT_003cba40 != 0)) {
    uVar6 = 1;
    piVar4 = DAT_003cba40;
    while ((piVar4 = piVar4 + 1, uVar6 < DAT_003cba50 && (*piVar4 != 0))) {
      uVar6 = uVar6 + 1;
    }
  }
  if (uVar6 == DAT_003cba50) {
    if (DAT_003cba4c == uVar6) {
      DAT_003cba50 = uVar6 << 1;
      if (uVar6 == 0) {
        DAT_003cba50 = *(uint *)(DAT_003c9ed4 + 0x10);
      }
      iVar10 = DAT_003cba50 << 2;
      piStack_c0 = (int *)0x0;
      uStack_b4 = param_3;
      uStack_b0 = param_4;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10,
                         &piStack_c0);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_c0,iVar10,uVar3);
      }
      iVar10 = DAT_003cba50 << 2;
      DAT_003cba40 = piStack_c0;
      puStack_bc = (undefined4 *)0x0;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10,
                         (uint)&piStack_c0 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(puStack_bc,iVar10,uVar3);
      }
      iVar10 = DAT_003cba50 << 2;
      DAT_003cba44 = puStack_bc;
      puStack_b8 = (undefined4 *)0x0;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10,
                         (uint)&piStack_c0 | 8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(puStack_b8,iVar10,uVar3);
      }
      DAT_003cba48 = puStack_b8;
      uVar6 = 0;
      puVar8 = puVar1;
      piVar4 = piVar5;
      puVar9 = puVar2;
      if (DAT_003cba4c != 0) {
        do {
          uVar7 = uVar6 + 1;
          DAT_003cba40[uVar6] = *piVar4;
          DAT_003cba44[uVar6] = *puVar8;
          DAT_003cba48[uVar6] = *puVar9;
          uVar6 = uVar7;
          puVar8 = puVar8 + 1;
          piVar4 = piVar4 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar7 < DAT_003cba4c);
      }
      uVar6 = DAT_003cba4c;
      if (DAT_003cba4c < DAT_003cba50) {
        do {
          uVar7 = uVar6 + 1;
          DAT_003cba40[uVar6] = 0;
          DAT_003cba44[uVar6] = 0;
          DAT_003cba48[uVar6] = 0;
          uVar6 = uVar7;
        } while (uVar7 < DAT_003cba50);
      }
      if (piVar5 != (int *)0x0) {
        (*(code *)PTR_FUN_003c87e0)(piVar5);
      }
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)PTR_FUN_003c87e0)(puVar1);
      }
      if (puVar2 != (undefined4 *)0x0) {
        (*(code *)PTR_FUN_003c87e0)(puVar2);
      }
      DAT_003cba40[DAT_003cba4c] = param_2;
      DAT_003cba44[DAT_003cba4c] = uStack_b4;
      DAT_003cba48[DAT_003cba4c] = uStack_b0;
LAB_002f56e4:
      DAT_003cba4c = DAT_003cba4c + 1;
    }
    else {
      uVar6 = 0;
      piVar4 = DAT_003cba40;
      if (DAT_003cba50 != 0) {
        do {
          if (*piVar4 == 0) {
            *piVar5 = param_2;
            DAT_003cba44[uVar6] = param_3;
            DAT_003cba48[uVar6] = param_4;
            goto LAB_002f56e4;
          }
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar6 < DAT_003cba50);
      }
    }
  }
  else {
    DAT_003cba40[uVar6] = param_2;
    DAT_003cba44[uVar6] = param_3;
    DAT_003cba48[uVar6] = param_4;
  }
  return;
}


// ==== CPathObjectManager_002f5760 @ 002f5760 ====

/* Strings referenciadas:
     "CPathObjectManager" */

void CPathObjectManager_002f5760(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004526c8 = &DAT_003e5e40;
    }
    else {
      FUN_002e7610(0x4525b8,0x407ae8,0x2f4bc0,0,0,0);
    }
  }
  return;
}


// ==== FUN_002f57c0 @ 002f57c0 ====

/* Strings referenciadas:
     "MaxNbPathObjects" */

undefined4 FUN_002f57c0(int param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_002e3920(param_2);
    lVar4 = stricmp(uVar3,0x407ad0);
    if (lVar4 == 0) {
      lVar4 = FUN_002e3918(param_2);
      if (lVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = atoi(lVar4);
        *(undefined4 *)(param_1 + 0x10) = uVar1;
        uVar1 = 1;
      }
    }
    else {
      lVar4 = FUN_002e3920(param_2);
      uVar1 = 0;
      if (lVar4 != 0) {
        pcVar2 = (char *)FUN_002e3920(param_2);
        uVar1 = 0;
        if (*pcVar2 == '_') {
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}


// ==== FUN_002f5868 @ 002f5868 ====

void FUN_002f5868(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)param_1;
  puVar3 = (undefined4 *)
           (**(code **)(iVar1 + 0x24))((int)(int *)param_1 + (int)*(short *)(iVar1 + 0x20));
  do {
    if (puVar3 == &DAT_004524a0) {
      bVar2 = true;
      goto LAB_002f58bc;
    }
    puVar3 = (undefined4 *)puVar3[0x42];
  } while (puVar3 != (undefined4 *)0x0);
  bVar2 = false;
LAB_002f58bc:
  if (bVar2) {
    FUN_002f51b0(param_2,param_1);
  }
  return;
}


// ==== FUN_002f58e8 @ 002f58e8 ====

void FUN_002f58e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)param_1;
  puVar3 = (undefined4 *)
           (**(code **)(iVar1 + 0x24))((int)(int *)param_1 + (int)*(short *)(iVar1 + 0x20));
  do {
    if (puVar3 == &DAT_004524a0) {
      bVar2 = true;
      goto LAB_002f593c;
    }
    puVar3 = (undefined4 *)puVar3[0x42];
  } while (puVar3 != (undefined4 *)0x0);
  bVar2 = false;
LAB_002f593c:
  if (bVar2) {
    FUN_002f5968(param_2,param_1);
  }
  return;
}


// ==== FUN_002f5968 @ 002f5968 ====

undefined4 FUN_002f5968(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  (**(code **)(*param_2 + 0x8c))((int)param_2 + (int)*(short *)(*param_2 + 0x88));
  bVar1 = false;
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    if ((int *)**(undefined4 **)(param_1 + 4) == param_2) {
LAB_002f59d8:
      bVar1 = true;
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      while( true ) {
        uVar6 = uVar6 + 1;
        if (uVar2 <= uVar6) break;
        if ((int *)(*(undefined4 **)(param_1 + 4))[uVar6] == param_2) goto LAB_002f59d8;
        uVar2 = *(uint *)(param_1 + 8);
      }
    }
  }
  uVar4 = 0;
  if (bVar1) {
    iVar3 = *(int *)(param_1 + 8);
    for (; uVar6 < iVar3 - 1U; uVar6 = uVar6 + 1) {
      puVar5 = (undefined4 *)(uVar6 * 4 + *(int *)(param_1 + 4));
      *puVar5 = puVar5[1];
      iVar3 = *(int *)(param_1 + 8);
    }
    uVar4 = 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  return uVar4;
}


// ==== FUN_002f5a40 @ 002f5a40 ====

void FUN_002f5a40(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_003cba50 != 0) {
    do {
      iVar1 = uVar2 * 4;
      if (((*(int *)(iVar1 + DAT_003cba40) == param_2) &&
          (*(int *)(iVar1 + DAT_003cba44) == param_3)) &&
         (*(int *)(iVar1 + DAT_003cba48) == param_4)) {
        *(int *)(iVar1 + DAT_003cba40) = 0;
        *(undefined4 *)(iVar1 + DAT_003cba44) = 0;
        *(undefined4 *)(iVar1 + DAT_003cba48) = 0;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_003cba50);
  }
  return;
}


// ==== FUN_002f5ae0 @ 002f5ae0 ====

void FUN_002f5ae0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_003cba50 != 0) {
    iVar1 = 0;
    do {
      if ((*(int *)(iVar1 + DAT_003cba40) != 0) &&
         (((*(int *)(iVar1 + DAT_003cba48) == param_3 || (*(int *)(iVar1 + DAT_003cba48) == 0)) ||
          (param_3 == 0)))) {
        (**(code **)(iVar1 + DAT_003cba40))(param_2,*(undefined4 *)(iVar1 + DAT_003cba44));
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar2 < DAT_003cba50);
  }
  return;
}


// ==== FUN_002f5bd0 @ 002f5bd0 ====

void FUN_002f5bd0(void)

{
  CPathObjectManager_002f5760(1,0xffff);
  return;
}


// ==== FUN_002f5bf0 @ 002f5bf0 ====

void FUN_002f5bf0(void)

{
  CPathObjectManager_002f5760(0,0xffff);
  return;
}


// ==== FUN_002f5c10 @ 002f5c10 ====

undefined8 FUN_002f5c10(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = 0x1f;
  *puVar3 = &DAT_003ee538;
  puVar3[0x17] = 0xffffffff;
  puVar1 = puVar3 + 0x19;
  puVar3[2] = 0xbf800000;
  iVar2 = 1;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x18] = 0;
  do {
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
  } while (iVar2 != -1);
  puVar3[0x18] = puVar3;
  puVar3[0x1e] = 0xffffffff;
  puVar3[0x17] = 0xffffffff;
  puVar3[0x19] = 0xffffffff;
  puVar3[0x1d] = puVar3;
  puVar3[0x22] = puVar3;
  puVar3[0x23] = 0;
  puVar3[0x24] = 0;
  puVar3[0x25] = 0;
  return param_1;
}


// ==== FUN_002f5cf8 @ 002f5cf8 ====

undefined8 FUN_002f5cf8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = 0x1f;
  *puVar3 = &DAT_003ee538;
  puVar3[0x17] = 0xffffffff;
  puVar3[2] = 0xbf800000;
  puVar1 = puVar3 + 0x19;
  puVar3[3] = 0;
  iVar2 = 1;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x18] = 0;
  do {
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
  } while (iVar2 != -1);
  puVar3[0x18] = puVar3;
  puVar3[0x1d] = puVar3;
  puVar3[0x22] = puVar3;
  puVar3[0x23] = 0;
  puVar3[0x24] = 0;
  puVar3[0x25] = 0;
  puVar3[0x1e] = 0xffffffff;
  puVar3[0x17] = 0xffffffff;
  puVar3[0x19] = 0xffffffff;
  FUN_002f5e20(param_1);
  return param_1;
}


// ==== FUN_002f5e20 @ 002f5e20 ====

long FUN_002f5e20(long param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  if (param_1 != param_2) {
    piVar7 = (int *)param_1;
    (**(code **)(*piVar7 + 0x3c))((int)piVar7 + (int)*(short *)(*piVar7 + 0x38));
    piVar1 = DAT_003c87e8;
    iVar8 = (int)param_2;
    piVar7[1] = *(int *)(iVar8 + 4);
    piStack_d0 = (int *)0x0;
    piVar7[2] = *(int *)(iVar8 + 8);
    piVar7[3] = *(int *)(iVar8 + 0xc);
    iVar4 = *(int *)(iVar8 + 0x10);
    piVar7[4] = iVar4;
    piVar7[5] = *(int *)(iVar8 + 0x14);
    iVar6 = iVar4 * 0x14 + 0x10;
    iVar3 = *piVar1;
    uVar2 = (**(code **)(iVar3 + 0x34))
                      ((int)piVar1 + (int)*(short *)(iVar3 + 0x30),iVar6,&piStack_d0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_d0,iVar6,uVar2);
    }
    iVar3 = iVar4 + -1;
    *piStack_d0 = iVar4;
    piVar1 = piStack_d0 + 4;
    if (iVar4 != 0) {
      do {
        *piVar1 = -1;
        iVar3 = iVar3 + -1;
        piVar1[4] = 0;
        piVar1 = piVar1 + 5;
      } while (iVar3 != -1);
    }
    uVar5 = 0;
    piVar7[6] = (int)(piStack_d0 + 4);
    if (piVar7[4] != 0) {
      iVar4 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar4 + piVar7[6]) = *(undefined4 *)(iVar4 + *(int *)(iVar8 + 0x18));
        iVar3 = iVar4 + *(int *)(iVar8 + 0x18);
        iVar6 = iVar4 + piVar7[6];
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
        *(int **)(iVar4 + piVar7[6] + 0x10) = piVar7;
        iVar4 = iVar4 + 0x14;
      } while (uVar5 < (uint)piVar7[4]);
    }
    if ((piVar7[1] & 1U) == 0) {
      uVar5 = piVar7[1];
    }
    else {
      iVar4 = piVar7[4];
      iStack_cc = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         (uint)&piStack_d0 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_cc,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[7] = iStack_cc;
      if (piVar7[4] != 0) {
        iVar4 = piVar7[7];
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + iVar4) = 0;
          if ((uint)piVar7[4] <= uVar5) break;
          iVar4 = piVar7[7];
        }
      }
      uVar5 = piVar7[1];
    }
    if ((uVar5 & 0x10) != 0) {
      iVar4 = piVar7[4];
      iStack_c8 = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         (uint)&piStack_d0 | 8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_c8,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[8] = iStack_c8;
      if (piVar7[4] != 0) {
        iVar4 = *(int *)(iVar8 + 0x20);
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + piVar7[8]) = *(undefined4 *)(iVar3 + iVar4);
          if ((uint)piVar7[4] <= uVar5) break;
          iVar4 = *(int *)(iVar8 + 0x20);
        }
      }
    }
    if ((piVar7[1] & 8U) != 0) {
      iVar4 = piVar7[4];
      iStack_c4 = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         (uint)&piStack_d0 | 0xc);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_c4,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[9] = iStack_c4;
      if (piVar7[4] != 0) {
        iVar4 = *(int *)(iVar8 + 0x24);
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + piVar7[9]) = *(undefined4 *)(iVar3 + iVar4);
          if ((uint)piVar7[4] <= uVar5) break;
          iVar4 = *(int *)(iVar8 + 0x24);
        }
      }
    }
    piVar1 = DAT_003c87e8;
    piVar7[10] = *(int *)(iVar8 + 0x28);
    piStack_c0 = (int *)0x0;
    iVar4 = *(int *)(iVar8 + 0x2c);
    piVar7[0xb] = iVar4;
    iVar6 = iVar4 * 8 + 0x10;
    piVar7[0xc] = *(int *)(iVar8 + 0x30);
    iVar3 = *piVar1;
    uVar2 = (**(code **)(iVar3 + 0x34))
                      ((int)piVar1 + (int)*(short *)(iVar3 + 0x30),iVar6,&piStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_c0,iVar6,uVar2);
    }
    iVar3 = iVar4 + -1;
    *piStack_c0 = iVar4;
    piVar1 = piStack_c0 + 4;
    if (iVar4 != 0) {
      do {
        *piVar1 = -1;
        iVar3 = iVar3 + -1;
        piVar1[1] = 0;
        piVar1 = piVar1 + 2;
      } while (iVar3 != -1);
    }
    piVar7[0xd] = (int)(piStack_c0 + 4);
    iVar4 = piVar7[0xb];
    iStack_bc = 0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                       &iStack_bc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(iStack_bc,iVar4 << 2,uVar2);
    }
    piVar1 = DAT_003c87e8;
    piVar7[0xe] = iStack_bc;
    iVar4 = piVar7[0xb];
    iVar3 = *piVar1;
    iStack_b8 = 0;
    uVar2 = (**(code **)(iVar3 + 0x34))
                      ((int)piVar1 + (int)*(short *)(iVar3 + 0x30),iVar4 << 2,&iStack_b8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(iStack_b8,iVar4 << 2,uVar2);
    }
    uVar5 = 0;
    piVar7[0xf] = iStack_b8;
    if (piVar7[0xb] != 0) {
      iVar4 = *(int *)(iVar8 + 0x34);
      while( true ) {
        iVar3 = uVar5 * 8;
        iVar6 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar3 + piVar7[0xd]) = *(undefined4 *)(iVar3 + iVar4);
        *(int **)(iVar3 + piVar7[0xd] + 4) = piVar7;
        *(undefined4 *)(iVar6 + piVar7[0xe]) = *(undefined4 *)(iVar6 + *(int *)(iVar8 + 0x38));
        *(undefined4 *)(iVar6 + piVar7[0xf]) = *(undefined4 *)(iVar6 + *(int *)(iVar8 + 0x3c));
        if ((uint)piVar7[0xb] <= uVar5) break;
        iVar4 = *(int *)(iVar8 + 0x34);
      }
    }
    if ((piVar7[1] & 0x10U) != 0) {
      iVar4 = piVar7[0xb];
      iStack_b4 = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         &iStack_b4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_b4,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[0x10] = iStack_b4;
      if (piVar7[0xb] != 0) {
        iVar4 = *(int *)(iVar8 + 0x40);
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + piVar7[0x10]) = *(undefined4 *)(iVar3 + iVar4);
          if ((uint)piVar7[0xb] <= uVar5) break;
          iVar4 = *(int *)(iVar8 + 0x40);
        }
      }
    }
    if ((piVar7[1] & 8U) != 0) {
      iVar4 = piVar7[0xb];
      iStack_b0 = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         &iStack_b0);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_b0,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[0x11] = iStack_b0;
      if (piVar7[0xb] != 0) {
        iVar4 = *(int *)(iVar8 + 0x44);
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + piVar7[0x11]) = *(undefined4 *)(iVar3 + iVar4);
          if ((uint)piVar7[0xb] <= uVar5) break;
          iVar4 = *(int *)(iVar8 + 0x44);
        }
      }
    }
    if ((piVar7[1] & 4U) != 0) {
      iVar4 = piVar7[0xb];
      iStack_ac = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         &iStack_ac);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_ac,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[0x12] = iStack_ac;
      if (piVar7[0xb] != 0) {
        iVar4 = *(int *)(iVar8 + 0x48);
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + piVar7[0x12]) = *(undefined4 *)(iVar3 + iVar4);
          if ((uint)piVar7[0xb] <= uVar5) break;
          iVar4 = *(int *)(iVar8 + 0x48);
        }
      }
    }
    if ((piVar7[1] & 1U) != 0) {
      iVar4 = piVar7[0xb];
      iStack_a8 = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         &iStack_a8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_a8,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[0x13] = iStack_a8;
      if (piVar7[0xb] != 0) {
        iVar4 = *(int *)(iVar8 + 0x4c);
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + piVar7[0x13]) = *(undefined4 *)(iVar3 + iVar4);
          if ((uint)piVar7[0xb] <= uVar5) break;
          iVar4 = *(int *)(iVar8 + 0x4c);
        }
      }
    }
    if ((piVar7[1] & 2U) != 0) {
      iVar4 = piVar7[0xb];
      iStack_a4 = 0;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar4 << 2,
                         &iStack_a4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(iStack_a4,iVar4 << 2,uVar2);
      }
      uVar5 = 0;
      piVar7[0x14] = iStack_a4;
      if (piVar7[0xc] != 0) {
        iVar4 = piVar7[0x14];
        while( true ) {
          iVar3 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar3 + iVar4) = 0;
          if ((uint)piVar7[0xc] <= uVar5) break;
          iVar4 = piVar7[0x14];
        }
      }
    }
  }
  return param_1;
}


// ==== FUN_002f66d0 @ 002f66d0 ====

int * FUN_002f66d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if ((*(uint *)(param_1 + 4) & 8) == 0) {
      uVar5 = *(uint *)(param_1 + 0x30);
      uVar7 = 0;
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          if (uVar7 < *(uint *)(param_1 + 0x28)) {
            piVar4 = (int *)(uVar7 * 8 + *(int *)(param_1 + 0x34));
            piVar3 = (int *)0x0;
            if (*piVar4 != -1) {
              piVar3 = piVar4;
            }
          }
          else {
            piVar3 = (int *)0x0;
          }
          bVar2 = uVar6 < uVar5;
          if (piVar3 != (int *)0x0) {
            iVar1 = piVar3[1];
            uVar6 = uVar6 + 1;
            if (piVar3 == (int *)(iVar1 + 0x5c)) {
              piVar4 = (int *)(iVar1 + 100);
            }
            else {
              piVar4 = (int *)(*(int *)(iVar1 + 0x18) +
                              *(int *)(*piVar3 * 4 + *(int *)(iVar1 + 0x38)) * 0x14);
            }
            bVar2 = uVar6 < uVar5;
            if (*piVar4 == param_2) {
              if (piVar3 == (int *)(iVar1 + 0x5c)) {
                piVar4 = (int *)(iVar1 + 0x78);
              }
              else {
                piVar4 = (int *)(*(int *)(iVar1 + 0x18) +
                                *(int *)(*piVar3 * 4 + *(int *)(iVar1 + 0x3c)) * 0x14);
              }
              bVar2 = uVar6 < uVar5;
              if (*piVar4 == param_3) {
                return piVar3;
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (bVar2);
      }
      return (int *)0x0;
    }
    uVar5 = *(uint *)(param_2 * 4 + *(int *)(param_1 + 0x24));
    if (uVar5 != 0xffffffff) {
      do {
        if (*(int *)(uVar5 * 4 + *(int *)(param_1 + 0x3c)) == param_3) {
          if (*(uint *)(param_1 + 0x28) <= uVar5) {
            return (int *)0x0;
          }
          piVar3 = (int *)(uVar5 * 8 + *(int *)(param_1 + 0x34));
          if (*piVar3 == -1) {
            piVar3 = (int *)0x0;
          }
          return piVar3;
        }
        uVar5 = *(uint *)(uVar5 * 4 + *(int *)(param_1 + 0x44));
      } while (uVar5 != 0xffffffff);
    }
  }
  return (int *)0x0;
}


// ==== FUN_002f6880 @ 002f6880 ====

/* WARNING: Removing unreachable block (ram,0x002f6958) */

undefined4 FUN_002f6880(undefined8 param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_7f30 [8];
  undefined4 auStack_7f28 [3998];
  undefined4 auStack_40b0 [4096];
  int *piStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar11 = (int)param_1;
  lVar4 = (**(code **)(*param_2 + 0x24))
                    ((int)param_2 + (int)*(short *)(*param_2 + 0x20),param_3,iVar11 + 8,4);
  if (lVar4 == 4) {
    iVar6 = 1;
    do {
      bVar1 = iVar6 == 0;
      iVar6 = iVar6 + 1;
    } while (bVar1);
    lVar4 = (**(code **)(*param_2 + 0x24))
                      ((int)param_2 + (int)*(short *)(*param_2 + 0x20),param_3,iVar11 + 0x14,4);
    if (lVar4 == 4) {
      iVar6 = *(int *)(iVar11 + 0x14);
      if (iVar6 == 0) {
        (**(code **)(*param_2 + 0x2c))((int)param_2 + (int)*(short *)(*param_2 + 0x28),param_3);
        return 1;
      }
      *(undefined4 *)(iVar11 + 0xc) = 0;
      *(int *)(iVar11 + 0x10) = iVar6;
      piStack_b0 = (int *)0x0;
      iVar10 = iVar6 * 0x14 + 0x10;
      uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10,
                         &piStack_b0);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(piStack_b0,iVar10,uVar5);
      }
      iVar10 = iVar6 + -1;
      *piStack_b0 = iVar6;
      piVar3 = piStack_b0 + 4;
      if (iVar6 != 0) {
        do {
          *piVar3 = -1;
          iVar10 = iVar10 + -1;
          piVar3[4] = 0;
          piVar3 = piVar3 + 5;
        } while (iVar10 != -1);
      }
      uVar12 = *(uint *)(iVar11 + 0x14);
      *(int **)(iVar11 + 0x18) = piStack_b0 + 4;
      while (uVar12 != 0) {
        uVar7 = 800;
        if (uVar12 < 0x321) {
          uVar7 = uVar12;
        }
        iVar6 = (**(code **)(*param_2 + 0x24))
                          ((int)param_2 + (int)*(short *)(*param_2 + 0x20),param_3,auStack_7f30,
                           uVar7 * 0x14);
        uVar12 = uVar12 - uVar7;
        if (iVar6 != uVar7 * 0x14) goto LAB_002f6b74;
        uVar9 = 0;
        if (uVar7 != 0) {
          puVar8 = auStack_7f28;
          do {
            uVar9 = uVar9 + 1;
            *(int *)(*(int *)(iVar11 + 0xc) * 0x14 + *(int *)(iVar11 + 0x18)) =
                 *(int *)(iVar11 + 0xc);
            *(int *)(*(int *)(iVar11 + 0xc) * 0x14 + *(int *)(iVar11 + 0x18) + 0x10) = iVar11;
            iVar6 = *(int *)(iVar11 + 0x18) + *(int *)(iVar11 + 0xc) * 0x14;
            *(undefined4 *)(iVar6 + 4) = puVar8[-2];
            *(undefined4 *)(iVar6 + 8) = puVar8[-1];
            uVar2 = *puVar8;
            puVar8 = puVar8 + 5;
            *(undefined4 *)(iVar6 + 0xc) = uVar2;
            *(int *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + 1;
          } while (uVar9 < uVar7);
        }
      }
      lVar4 = (**(code **)(*param_2 + 0x24))
                        ((int)param_2 + (int)*(short *)(*param_2 + 0x20),param_3,iVar11 + 0x30,4);
      if (lVar4 == 4) {
        iVar6 = 1;
        do {
          bVar1 = iVar6 == 0;
          iVar6 = iVar6 + 1;
        } while (bVar1);
        iVar6 = *(int *)(iVar11 + 0x30);
        if (iVar6 == 0) {
          (**(code **)(*param_2 + 0x2c))((int)param_2 + (int)*(short *)(*param_2 + 0x28),param_3);
          return 1;
        }
        *(undefined4 *)(iVar11 + 0x28) = 0;
        iVar10 = iVar6 * 8 + 0x10;
        *(int *)(iVar11 + 0x2c) = iVar6;
        piStack_ac = (int *)0x0;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10,
                           &piStack_ac);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(piStack_ac,iVar10,uVar5);
        }
        iVar10 = iVar6 + -1;
        *piStack_ac = iVar6;
        piVar3 = piStack_ac + 4;
        if (iVar6 != 0) {
          do {
            *piVar3 = -1;
            iVar10 = iVar10 + -1;
            piVar3[1] = 0;
            piVar3 = piVar3 + 2;
          } while (iVar10 != -1);
        }
        *(int **)(iVar11 + 0x34) = piStack_ac + 4;
        uStack_a8 = 0;
        iVar6 = *(int *)(iVar11 + 0x2c) << 2;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                           &uStack_a8);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_a8,iVar6,uVar5);
        }
        piVar3 = DAT_003c87e8;
        *(undefined4 *)(iVar11 + 0x38) = uStack_a8;
        iVar6 = *piVar3;
        uStack_a4 = 0;
        iVar10 = *(int *)(iVar11 + 0x2c) << 2;
        uVar5 = (**(code **)(iVar6 + 0x34))
                          ((int)piVar3 + (int)*(short *)(iVar6 + 0x30),iVar10,&uStack_a4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_a4,iVar10,uVar5);
        }
        uVar12 = *(uint *)(iVar11 + 0x30);
        *(undefined4 *)(iVar11 + 0x3c) = uStack_a4;
        if (uVar12 != 0) {
          iVar6 = *param_2;
          while( true ) {
            uVar7 = 0x800;
            if (uVar12 < 0x801) {
              uVar7 = uVar12;
            }
            iVar6 = (**(code **)(iVar6 + 0x24))
                              ((int)param_2 + (int)*(short *)(iVar6 + 0x20),param_3,auStack_40b0,
                               uVar7 << 3);
            uVar9 = uVar7 << 1;
            if (iVar6 != uVar7 << 3) goto LAB_002f6b74;
            uVar12 = uVar12 - uVar7;
            if (uVar9 != 0) {
              for (uVar7 = 1; uVar7 < uVar9; uVar7 = uVar7 + 1) {
              }
            }
            uVar7 = 0;
            puVar8 = auStack_40b0;
            if (uVar9 != 0) {
              do {
                uVar7 = uVar7 + 2;
                *(int *)(*(int *)(iVar11 + 0x28) * 8 + *(int *)(iVar11 + 0x34)) =
                     *(int *)(iVar11 + 0x28);
                *(int *)(*(int *)(iVar11 + 0x28) * 8 + *(int *)(iVar11 + 0x34) + 4) = iVar11;
                uVar2 = puVar8[1];
                *(undefined4 *)(*(int *)(iVar11 + 0x28) * 4 + *(int *)(iVar11 + 0x38)) = *puVar8;
                *(undefined4 *)(*(int *)(iVar11 + 0x28) * 4 + *(int *)(iVar11 + 0x3c)) = uVar2;
                *(int *)(iVar11 + 0x28) = *(int *)(iVar11 + 0x28) + 1;
                puVar8 = puVar8 + 2;
              } while (uVar7 < uVar9);
            }
            if (uVar12 == 0) break;
            iVar6 = *param_2;
          }
        }
        FUN_002fa930(param_1,*(undefined4 *)(iVar11 + 4));
        return 1;
      }
      iVar11 = *param_2;
    }
    else {
      iVar11 = *param_2;
    }
  }
  else {
    iVar11 = *param_2;
  }
LAB_002f6b78:
  (**(code **)(iVar11 + 0x2c))((int)param_2 + (int)*(short *)(iVar11 + 0x28),param_3);
  return 0;
LAB_002f6b74:
  iVar11 = *param_2;
  goto LAB_002f6b78;
}


// ==== FUN_002f6e08 @ 002f6e08 ====

/* WARNING: Removing unreachable block (ram,0x002f7768) */
/* WARNING: Removing unreachable block (ram,0x002f7630) */
/* WARNING: Removing unreachable block (ram,0x002f71e0) */
/* WARNING: Removing unreachable block (ram,0x002f7040) */
/* WARNING: Removing unreachable block (ram,0x002f6ff0) */
/* WARNING: Removing unreachable block (ram,0x002f7090) */
/* WARNING: Removing unreachable block (ram,0x002f7300) */
/* WARNING: Removing unreachable block (ram,0x002f7680) */
/* WARNING: Removing unreachable block (ram,0x002f77b0) */
/* Strings referenciadas:
     "Kynogon Spatial graph" */

undefined4 FUN_002f6e08(int *param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_120 [64];
  int iStack_e0;
  int *piStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int *piStack_c8;
  undefined1 auStack_c4 [4];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [2];
  
  (**(code **)(*param_1 + 0x3c))((int)param_1 + (int)*(short *)(*param_1 + 0x38));
  piVar3 = *(int **)(DAT_003c9ed4 + 4);
  lVar6 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18),param_2);
  if (lVar6 == 0) {
    return 0;
  }
  iVar10 = *piVar3;
  sVar2 = *(short *)(iVar10 + 0x20);
  uVar7 = strlen(0x407c28);
  lVar6 = (**(code **)(iVar10 + 0x24))((int)piVar3 + (int)sVar2,param_2,auStack_120,uVar7);
  lVar8 = (**(code **)(*piVar3 + 0x24))
                    ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,&iStack_e0,4);
  lVar9 = strlen(0x407c28);
  if (lVar6 == lVar9) {
    if (lVar8 == 4) {
      auStack_120[(int)lVar6] = 0;
      lVar6 = stricmp(auStack_120,0x407c28);
      if (lVar6 == 0) {
        if (iStack_e0 == 1) {
          lVar6 = (**(code **)(*param_1 + 0x14))
                            ((int)param_1 + (int)*(short *)(*param_1 + 0x10),piVar3,param_2);
          if (lVar6 == 0) {
            return 0;
          }
          iVar10 = *piVar3;
LAB_002f7d34:
          (**(code **)(iVar10 + 0x2c))((int)piVar3 + (int)*(short *)(iVar10 + 0x28),param_2);
          return 1;
        }
        if (iStack_e0 == 2) {
          lVar6 = (**(code **)(*piVar3 + 0x24))
                            ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,param_1 + 1,4);
          if (lVar6 == 4) {
            iVar10 = 1;
            do {
              bVar1 = iVar10 == 0;
              iVar10 = iVar10 + 1;
            } while (bVar1);
            lVar6 = (**(code **)(*piVar3 + 0x24))
                              ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,param_1 + 2,4);
            if (lVar6 == 4) {
              lVar6 = (**(code **)(*piVar3 + 0x24))
                                ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,param_1 + 3,4
                                );
              if (lVar6 == 4) {
                lVar6 = (**(code **)(*piVar3 + 0x24))
                                  ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,param_1 + 4
                                   ,4);
                if (lVar6 == 4) {
                  lVar6 = (**(code **)(*piVar3 + 0x24))
                                    ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                     param_1 + 5,4);
                  if (lVar6 == 4) {
                    iVar10 = 1;
                    do {
                      bVar1 = iVar10 == 0;
                      iVar10 = iVar10 + 1;
                    } while (bVar1);
                    iVar10 = param_1[4];
                    piStack_dc = (int *)0x0;
                    iVar12 = iVar10 * 0x14 + 0x10;
                    uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                       iVar12,&piStack_dc);
                    if (DAT_003c87ec != (code *)0x0) {
                      (*DAT_003c87ec)(piStack_dc,iVar12,uVar7);
                    }
                    iVar12 = iVar10 + -1;
                    *piStack_dc = iVar10;
                    piVar4 = piStack_dc + 4;
                    if (iVar10 != 0) {
                      do {
                        *piVar4 = -1;
                        iVar12 = iVar12 + -1;
                        piVar4[4] = 0;
                        piVar4 = piVar4 + 5;
                      } while (iVar12 != -1);
                    }
                    uVar11 = 0;
                    param_1[6] = (int)(piStack_dc + 4);
                    if (param_1[5] != 0) {
                      do {
                        iVar10 = param_1[6] + uVar11 * 0x14;
                        lVar6 = (**(code **)(*piVar3 + 0x24))
                                          ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                           iVar10,4);
                        if ((lVar6 != 4) ||
                           (lVar6 = (**(code **)(*piVar3 + 0x24))
                                              ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2
                                               ,iVar10 + 4,4), lVar6 != 4)) goto LAB_002f7d10;
                        iVar12 = 1;
                        do {
                          bVar1 = iVar12 == 0;
                          iVar12 = iVar12 + 1;
                        } while (bVar1);
                        lVar6 = (**(code **)(*piVar3 + 0x24))
                                          ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                           iVar10 + 8,4);
                        if (lVar6 != 4) goto LAB_002f7d10;
                        iVar12 = 1;
                        do {
                          bVar1 = iVar12 == 0;
                          iVar12 = iVar12 + 1;
                        } while (bVar1);
                        lVar6 = (**(code **)(*piVar3 + 0x24))
                                          ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                           iVar10 + 0xc,4);
                        if (lVar6 != 4) goto LAB_002f7d10;
                        iVar12 = 1;
                        do {
                          bVar1 = iVar12 == 0;
                          iVar12 = iVar12 + 1;
                        } while (bVar1);
                        lVar6 = (**(code **)(*piVar3 + 0x24))
                                          ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                           auStack_d8,4);
                        uVar11 = uVar11 + 1;
                        if (lVar6 != 4) goto LAB_002f7d10;
                        *(int **)(iVar10 + 0x10) = param_1;
                      } while (uVar11 < (uint)param_1[5]);
                    }
                    if ((param_1[1] & 1U) != 0) {
                      iVar10 = param_1[4];
                      iStack_d4 = 0;
                      uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                         iVar10 << 2,&iStack_d4);
                      if (DAT_003c87ec != (code *)0x0) {
                        (*DAT_003c87ec)(iStack_d4,iVar10 << 2,uVar7);
                      }
                      param_1[7] = iStack_d4;
                      iVar10 = (**(code **)(*piVar3 + 0x24))
                                         ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                          iStack_d4,param_1[4] << 2);
                      if (iVar10 != param_1[4] << 2) {
                        iVar10 = *piVar3;
                        goto LAB_002f7d14;
                      }
                      uVar11 = 0;
                      if (param_1[4] != 0) {
                        uVar5 = param_1[4];
                        while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                          uVar5 = param_1[4];
                        }
                      }
                      uVar11 = 0;
                      if (param_1[5] != 0) {
                        iVar10 = param_1[7];
                        while( true ) {
                          iVar12 = uVar11 * 4;
                          uVar11 = uVar11 + 1;
                          *(undefined4 *)(iVar12 + iVar10) = 0;
                          if ((uint)param_1[5] <= uVar11) break;
                          iVar10 = param_1[7];
                        }
                      }
                    }
                    if ((param_1[1] & 0x10U) != 0) {
                      iVar10 = param_1[4];
                      iStack_d0 = 0;
                      uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                         iVar10 << 2,&iStack_d0);
                      if (DAT_003c87ec != (code *)0x0) {
                        (*DAT_003c87ec)(iStack_d0,iVar10 << 2,uVar7);
                      }
                      param_1[8] = iStack_d0;
                      iVar10 = (**(code **)(*piVar3 + 0x24))
                                         ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                          iStack_d0,param_1[4] << 2);
                      if (iVar10 != param_1[4] << 2) {
                        iVar10 = *piVar3;
                        goto LAB_002f7d14;
                      }
                      uVar11 = 0;
                      if (param_1[4] != 0) {
                        uVar5 = param_1[4];
                        while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                          uVar5 = param_1[4];
                        }
                      }
                    }
                    if ((param_1[1] & 8U) != 0) {
                      iVar10 = param_1[4];
                      iStack_cc = 0;
                      uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                         iVar10 << 2,&iStack_cc);
                      if (DAT_003c87ec != (code *)0x0) {
                        (*DAT_003c87ec)(iStack_cc,iVar10 << 2,uVar7);
                      }
                      param_1[9] = iStack_cc;
                      iVar10 = (**(code **)(*piVar3 + 0x24))
                                         ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                          iStack_cc,param_1[4] << 2);
                      if (iVar10 != param_1[4] << 2) {
                        iVar10 = *piVar3;
                        goto LAB_002f7d14;
                      }
                      uVar11 = 0;
                      if (param_1[4] != 0) {
                        uVar5 = param_1[4];
                        while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                          uVar5 = param_1[4];
                        }
                      }
                    }
                    lVar6 = (**(code **)(*piVar3 + 0x24))
                                      ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                       param_1 + 10,4);
                    if (lVar6 == 4) {
                      iVar10 = 1;
                      do {
                        bVar1 = iVar10 == 0;
                        iVar10 = iVar10 + 1;
                      } while (bVar1);
                      lVar6 = (**(code **)(*piVar3 + 0x24))
                                        ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                         param_1 + 0xb,4);
                      if (lVar6 == 4) {
                        lVar6 = (**(code **)(*piVar3 + 0x24))
                                          ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),param_2,
                                           param_1 + 0xc,4);
                        if (lVar6 == 4) {
                          iVar10 = param_1[0xb];
                          piStack_c8 = (int *)0x0;
                          iVar12 = iVar10 * 8 + 0x10;
                          uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                            ((int)DAT_003c87e8 +
                                             (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12,
                                             &piStack_c8);
                          if (DAT_003c87ec != (code *)0x0) {
                            (*DAT_003c87ec)(piStack_c8,iVar12,uVar7);
                          }
                          iVar12 = iVar10 + -1;
                          *piStack_c8 = iVar10;
                          piVar4 = piStack_c8 + 4;
                          if (iVar10 != 0) {
                            do {
                              *piVar4 = -1;
                              iVar12 = iVar12 + -1;
                              piVar4[1] = 0;
                              piVar4 = piVar4 + 2;
                            } while (iVar12 != -1);
                          }
                          uVar11 = 0;
                          param_1[0xd] = (int)(piStack_c8 + 4);
                          if (param_1[0xb] == 0) {
LAB_002f77d0:
                            iVar10 = param_1[0xb];
                            iStack_c0 = 0;
                            uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                              ((int)DAT_003c87e8 +
                                               (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10 << 2,
                                               &iStack_c0);
                            if (DAT_003c87ec != (code *)0x0) {
                              (*DAT_003c87ec)(iStack_c0,iVar10 << 2,uVar7);
                            }
                            param_1[0xe] = iStack_c0;
                            iVar10 = (**(code **)(*piVar3 + 0x24))
                                               ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                param_2,iStack_c0,param_1[0xc] << 2);
                            if (iVar10 == param_1[0xc] << 2) {
                              uVar11 = 0;
                              if (param_1[0xc] != 0) {
                                uVar5 = param_1[0xc];
                                while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                  uVar5 = param_1[0xc];
                                }
                              }
                              iVar10 = param_1[0xb];
                              iStack_bc = 0;
                              uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                                ((int)DAT_003c87e8 +
                                                 (int)*(short *)(*DAT_003c87e8 + 0x30),iVar10 << 2,
                                                 &iStack_bc);
                              if (DAT_003c87ec != (code *)0x0) {
                                (*DAT_003c87ec)(iStack_bc,iVar10 << 2,uVar7);
                              }
                              param_1[0xf] = iStack_bc;
                              iVar10 = (**(code **)(*piVar3 + 0x24))
                                                 ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                  param_2,iStack_bc,param_1[0xc] << 2);
                              if (iVar10 == param_1[0xc] << 2) {
                                uVar11 = 0;
                                if (param_1[0xc] != 0) {
                                  uVar5 = param_1[0xc];
                                  while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                    uVar5 = param_1[0xc];
                                  }
                                }
                                if ((param_1[1] & 0x10U) != 0) {
                                  iVar10 = param_1[0xb];
                                  iStack_b8 = 0;
                                  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                                    ((int)DAT_003c87e8 +
                                                     (int)*(short *)(*DAT_003c87e8 + 0x30),
                                                     iVar10 << 2,&iStack_b8);
                                  if (DAT_003c87ec != (code *)0x0) {
                                    (*DAT_003c87ec)(iStack_b8,iVar10 << 2,uVar7);
                                  }
                                  param_1[0x10] = iStack_b8;
                                  iVar10 = (**(code **)(*piVar3 + 0x24))
                                                     ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                      param_2,iStack_b8,param_1[0xc] << 2);
                                  if (iVar10 != param_1[0xc] << 2) {
                                    iVar10 = *piVar3;
                                    goto LAB_002f7d14;
                                  }
                                  uVar11 = 0;
                                  if (param_1[0xc] != 0) {
                                    uVar5 = param_1[0xc];
                                    while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                      uVar5 = param_1[0xc];
                                    }
                                  }
                                }
                                if ((param_1[1] & 8U) != 0) {
                                  iVar10 = param_1[0xb];
                                  iStack_b4 = 0;
                                  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                                    ((int)DAT_003c87e8 +
                                                     (int)*(short *)(*DAT_003c87e8 + 0x30),
                                                     iVar10 << 2,&iStack_b4);
                                  if (DAT_003c87ec != (code *)0x0) {
                                    (*DAT_003c87ec)(iStack_b4,iVar10 << 2,uVar7);
                                  }
                                  param_1[0x11] = iStack_b4;
                                  iVar10 = (**(code **)(*piVar3 + 0x24))
                                                     ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                      param_2,iStack_b4,param_1[0xc] << 2);
                                  if (iVar10 != param_1[0xc] << 2) {
                                    iVar10 = *piVar3;
                                    goto LAB_002f7d14;
                                  }
                                  uVar11 = 0;
                                  if (param_1[0xc] != 0) {
                                    uVar5 = param_1[0xc];
                                    while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                      uVar5 = param_1[0xc];
                                    }
                                  }
                                }
                                if ((param_1[1] & 4U) != 0) {
                                  iVar10 = param_1[0xb];
                                  iStack_b0 = 0;
                                  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                                    ((int)DAT_003c87e8 +
                                                     (int)*(short *)(*DAT_003c87e8 + 0x30),
                                                     iVar10 << 2,&iStack_b0);
                                  if (DAT_003c87ec != (code *)0x0) {
                                    (*DAT_003c87ec)(iStack_b0,iVar10 << 2,uVar7);
                                  }
                                  param_1[0x12] = iStack_b0;
                                  iVar10 = (**(code **)(*piVar3 + 0x24))
                                                     ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                      param_2,iStack_b0,param_1[0xc] << 2);
                                  if (iVar10 != param_1[0xc] << 2) {
                                    iVar10 = *piVar3;
                                    goto LAB_002f7d14;
                                  }
                                  uVar11 = 0;
                                  if (param_1[0xc] != 0) {
                                    uVar5 = param_1[0xc];
                                    while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                      uVar5 = param_1[0xc];
                                    }
                                  }
                                }
                                if ((param_1[1] & 1U) != 0) {
                                  iVar10 = param_1[0xb];
                                  iStack_ac = 0;
                                  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                                    ((int)DAT_003c87e8 +
                                                     (int)*(short *)(*DAT_003c87e8 + 0x30),
                                                     iVar10 << 2,&iStack_ac);
                                  if (DAT_003c87ec != (code *)0x0) {
                                    (*DAT_003c87ec)(iStack_ac,iVar10 << 2,uVar7);
                                  }
                                  param_1[0x13] = iStack_ac;
                                  iVar10 = (**(code **)(*piVar3 + 0x24))
                                                     ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                      param_2,iStack_ac,param_1[0xc] << 2);
                                  if (iVar10 != param_1[0xc] << 2) {
                                    iVar10 = *piVar3;
                                    goto LAB_002f7d14;
                                  }
                                  uVar11 = 0;
                                  if (param_1[0xc] != 0) {
                                    uVar5 = param_1[0xc];
                                    while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                      uVar5 = param_1[0xc];
                                    }
                                  }
                                }
                                if ((param_1[1] & 2U) != 0) {
                                  iVar10 = param_1[0xb];
                                  aiStack_a8[0] = 0;
                                  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                                                    ((int)DAT_003c87e8 +
                                                     (int)*(short *)(*DAT_003c87e8 + 0x30),
                                                     iVar10 << 2,aiStack_a8);
                                  if (DAT_003c87ec != (code *)0x0) {
                                    (*DAT_003c87ec)(aiStack_a8[0],iVar10 << 2,uVar7);
                                  }
                                  param_1[0x14] = aiStack_a8[0];
                                  iVar10 = (**(code **)(*piVar3 + 0x24))
                                                     ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                      param_2,aiStack_a8[0],param_1[0xc] << 2);
                                  if (iVar10 != param_1[0xc] << 2) {
                                    iVar10 = *piVar3;
                                    goto LAB_002f7d14;
                                  }
                                  uVar11 = 0;
                                  if (param_1[0xc] != 0) {
                                    uVar5 = param_1[0xc];
                                    while (uVar11 = uVar11 + 1, uVar11 < uVar5) {
                                      uVar5 = param_1[0xc];
                                    }
                                  }
                                  uVar11 = 0;
                                  if (param_1[0xc] != 0) {
                                    iVar10 = param_1[0x14];
                                    while( true ) {
                                      iVar12 = uVar11 * 4;
                                      uVar11 = uVar11 + 1;
                                      *(undefined4 *)(iVar12 + iVar10) = 0;
                                      if ((uint)param_1[0xc] <= uVar11) break;
                                      iVar10 = param_1[0x14];
                                    }
                                    iVar10 = *piVar3;
                                    goto LAB_002f7d34;
                                  }
                                }
                                iVar10 = *piVar3;
                                goto LAB_002f7d34;
                              }
                              iVar10 = *piVar3;
                            }
                            else {
                              iVar10 = *piVar3;
                            }
                          }
                          else {
                            iVar10 = *piVar3;
                            while( true ) {
                              iVar12 = param_1[0xd] + uVar11 * 8;
                              lVar6 = (**(code **)(iVar10 + 0x24))
                                                ((int)piVar3 + (int)*(short *)(iVar10 + 0x20),
                                                 param_2,iVar12,4);
                              if (lVar6 != 4) break;
                              lVar6 = (**(code **)(*piVar3 + 0x24))
                                                ((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),
                                                 param_2,auStack_c4,4);
                              uVar11 = uVar11 + 1;
                              if (lVar6 != 4) break;
                              *(int **)(iVar12 + 4) = param_1;
                              if ((uint)param_1[0xb] <= uVar11) goto LAB_002f77d0;
                              iVar10 = *piVar3;
                            }
LAB_002f7d10:
                            iVar10 = *piVar3;
                          }
                        }
                        else {
                          iVar10 = *piVar3;
                        }
                      }
                      else {
                        iVar10 = *piVar3;
                      }
                    }
                    else {
                      iVar10 = *piVar3;
                    }
                  }
                  else {
                    iVar10 = *piVar3;
                  }
                }
                else {
                  iVar10 = *piVar3;
                }
              }
              else {
                iVar10 = *piVar3;
              }
            }
            else {
              iVar10 = *piVar3;
            }
          }
          else {
            iVar10 = *piVar3;
          }
        }
        else {
          iVar10 = *piVar3;
        }
      }
      else {
        iVar10 = *piVar3;
      }
    }
    else {
      iVar10 = *piVar3;
    }
  }
  else {
    iVar10 = *piVar3;
  }
LAB_002f7d14:
  (**(code **)(iVar10 + 0x2c))((int)piVar3 + (int)*(short *)(iVar10 + 0x28),param_2);
  return 0;
}


// ==== FUN_002f7d80 @ 002f7d80 ====

/* Strings referenciadas:
     "RawData" */

undefined8 FUN_002f7d80(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_10c0 [4096];
  int aiStack_c0 [8];
  undefined1 auStack_a0 [16];
  undefined4 auStack_90 [4];
  
  uVar2 = DAT_003c87e8;
  FUN_002e5c38(aiStack_c0,auStack_10c0,0x1000,0,0);
  auStack_90[0] = 0;
  DAT_003c87e8 = aiStack_c0;
  uVar3 = (**(code **)(aiStack_c0[0] + 0x34))
                    ((int)aiStack_c0 + (int)*(short *)(aiStack_c0[0] + 0x30),0x24,auStack_90);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_90[0],0x24,uVar3);
  }
  uVar3 = FUN_002e3408(auStack_90[0]);
  FUN_002e3630(uVar3,0x407bc0);
  FUN_002e36e8(uVar3,param_2);
  uVar1 = *(undefined4 *)(DAT_003c9ed4 + 4);
  DAT_003c87e8 = (int *)uVar2;
  FUN_00373250(auStack_a0);
  *(undefined1 **)(DAT_003c9ed4 + 4) = auStack_a0;
  uVar3 = (**(code **)(*param_1 + 0x1c))((int)param_1 + (int)*(short *)(*param_1 + 0x18),uVar3);
  *(undefined4 *)(DAT_003c9ed4 + 4) = uVar1;
  FUN_00373268(auStack_a0,2);
  FUN_002e5d90(aiStack_c0,2);
  return uVar3;
}


// ==== FUN_002f7f48 @ 002f7f48 ====

/* Strings referenciadas:
     "Kynogon Spatial graph" */

undefined4 FUN_002f7f48(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  lVar3 = (*DAT_0045127c)(param_2,0x407bc8);
  uVar2 = 0;
  if (lVar3 != 0) {
    FUN_002fa4c8(param_1);
    uVar4 = strlen(0x407c28);
    lVar5 = (*DAT_0045128c)(0x407c28,1,uVar4,lVar3);
    lVar6 = strlen(0x407c28);
    uVar2 = 0;
    if (lVar5 == lVar6) {
      uStack_b0 = 1;
      lVar5 = (*DAT_0045128c)(&uStack_b0,4,1,lVar3);
      uVar2 = 0;
      if (lVar5 == 1) {
        iVar10 = (int)param_1;
        uStack_ac = *(undefined4 *)(iVar10 + 8);
        (*DAT_0045128c)(&uStack_ac,4,1,lVar3);
        uStack_a8 = *(undefined4 *)(iVar10 + 0x14);
        (*DAT_0045128c)(&uStack_a8,4,1,lVar3);
        puStack_c0 = &DAT_003ee500;
        uStack_bc = (undefined4)lVar3;
        uStack_b8 = 0;
        (*(code *)PTR_FUN_003ee514)((int)&puStack_c0 + (int)DAT_003ee510,param_1);
        uVar12 = 0;
        uVar9 = 0;
        if (*(int *)(iVar10 + 0x14) != 0) {
          iVar11 = 0;
          do {
            if (uVar12 < *(uint *)(iVar10 + 0xc)) {
              piVar7 = (int *)(iVar11 + *(int *)(iVar10 + 0x18));
              piVar8 = (int *)0x0;
              if (*piVar7 != -1) {
                piVar8 = piVar7;
              }
            }
            else {
              piVar8 = (int *)0x0;
            }
            if (piVar8 == (int *)0x0) {
              uVar1 = *(uint *)(iVar10 + 0x14);
            }
            else {
              uVar9 = uVar9 + 1;
              lVar5 = (**(code **)(puStack_c0 + 0x24))
                                ((int)&puStack_c0 + (int)*(short *)(puStack_c0 + 0x20));
              if (lVar5 == 0) break;
              uVar1 = *(uint *)(iVar10 + 0x14);
            }
            iVar11 = iVar11 + 0x14;
            uVar12 = uVar12 + 1;
          } while (uVar9 < uVar1);
        }
        uStack_a4 = *(undefined4 *)(iVar10 + 0x30);
        (*DAT_0045128c)(&uStack_a4,4,1,lVar3);
        (**(code **)(puStack_c0 + 0x1c))
                  ((int)&puStack_c0 + (int)*(short *)(puStack_c0 + 0x18),param_1);
        uVar12 = 0;
        uVar9 = 0;
        if (*(int *)(iVar10 + 0x30) != 0) {
          do {
            if (uVar12 < *(uint *)(iVar10 + 0x28)) {
              piVar7 = (int *)(uVar12 * 8 + *(int *)(iVar10 + 0x34));
              piVar8 = (int *)0x0;
              if (*piVar7 != -1) {
                piVar8 = piVar7;
              }
            }
            else {
              piVar8 = (int *)0x0;
            }
            if (piVar8 == (int *)0x0) {
              uVar1 = *(uint *)(iVar10 + 0x30);
            }
            else {
              uVar9 = uVar9 + 1;
              lVar5 = (**(code **)(puStack_c0 + 0x2c))
                                ((int)&puStack_c0 + (int)*(short *)(puStack_c0 + 0x28));
              if (lVar5 == 0) break;
              uVar1 = *(uint *)(iVar10 + 0x30);
            }
            uVar12 = uVar12 + 1;
          } while (uVar9 < uVar1);
        }
        (*DAT_00451280)(lVar3);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// ==== FUN_002f8238 @ 002f8238 ====

/* WARNING: Type propagation algorithm not settling */
/* Strings referenciadas:
     "Kynogon Spatial graph" */

undefined4 FUN_002f8238(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int aiStack_fc [4];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int aiStack_dc [3];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  
  iVar10 = (int)param_1;
  if (*(int *)(iVar10 + 0x10) == 0) {
LAB_002f8290:
    iVar11 = *(int *)(iVar10 + 0x2c);
  }
  else {
    if ((param_3 & 1) != 0) {
      if (*(int *)(iVar10 + 0x1c) == 0) {
        return 0;
      }
      goto LAB_002f8290;
    }
    iVar11 = *(int *)(iVar10 + 0x2c);
  }
  if (iVar11 != 0) {
    if (((param_3 & 2) != 0) && (*(int *)(iVar10 + 0x50) == 0)) {
      return 0;
    }
    if (iVar11 != 0) {
      if ((param_3 & 4) == 0) {
        iVar6 = *(int *)(iVar10 + 0x10);
        goto LAB_002f82d0;
      }
      if (*(int *)(iVar10 + 0x48) == 0) {
        return 0;
      }
    }
  }
  iVar6 = *(int *)(iVar10 + 0x10);
LAB_002f82d0:
  if ((((((iVar6 == 0) || ((param_3 & 8) == 0)) || (*(int *)(iVar10 + 0x24) != 0)) &&
       (((iVar11 == 0 || ((param_3 & 8) == 0)) || (*(int *)(iVar10 + 0x44) != 0)))) &&
      (((iVar6 == 0 || ((param_3 & 0x10) == 0)) || (*(int *)(iVar10 + 0x20) != 0)))) &&
     (((iVar11 == 0 || ((param_3 & 0x10) == 0)) || (*(int *)(iVar10 + 0x40) != 0)))) {
    FUN_002fa4c8(param_1);
    lVar1 = (*DAT_0045127c)(param_2,0x407bc8);
    if (lVar1 != 0) {
      uVar2 = strlen(0x407c28);
      lVar3 = (*DAT_0045128c)(0x407c28,1,uVar2,lVar1);
      lVar4 = strlen(0x407c28);
      if (lVar3 != lVar4) {
        return 0;
      }
      uStack_120 = 2;
      lVar3 = (*DAT_0045128c)(&uStack_120,4,1,lVar1);
      if ((lVar3 == 1) &&
         (uStack_11c = param_3, lVar3 = (*DAT_0045128c)((uint)&uStack_120 | 4,4,1,lVar1), lVar3 == 1
         )) {
        uStack_118 = *(undefined4 *)(iVar10 + 8);
        lVar3 = (*DAT_0045128c)((uint)&uStack_120 | 8,4,1,lVar1);
        if (lVar3 == 1) {
          uStack_114 = *(undefined4 *)(iVar10 + 0x14);
          lVar3 = (*DAT_0045128c)((uint)&uStack_120 | 0xc,4,1,lVar1);
          if (lVar3 == 1) {
            uStack_110 = *(undefined4 *)(iVar10 + 0x14);
            lVar3 = (*DAT_0045128c)(&uStack_110,4,1,lVar1);
            if (lVar3 == 1) {
              uStack_10c = *(undefined4 *)(iVar10 + 0x14);
              lVar3 = (*DAT_0045128c)(&uStack_10c,4,1,lVar1);
              if (lVar3 == 1) {
                uVar7 = 0;
                uVar5 = 0;
                if (*(int *)(iVar10 + 0x14) != 0) {
                  do {
                    piVar9 = (int *)(*(int *)(iVar10 + 0x18) + uVar7 * 0x14);
                    if (*piVar9 != -1) {
                      iStack_108 = *piVar9;
                      lVar3 = (*DAT_0045128c)(&iStack_108,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                      iStack_104 = piVar9[1];
                      lVar3 = (*DAT_0045128c)(&iStack_104,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                      iStack_100 = piVar9[2];
                      lVar3 = (*DAT_0045128c)(&iStack_100,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                      aiStack_fc[0] = piVar9[3];
                      lVar3 = (*DAT_0045128c)(aiStack_fc,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                      aiStack_fc[1] = 0;
                      lVar3 = (*DAT_0045128c)(aiStack_fc + 1,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                    }
                    uVar5 = *(uint *)(iVar10 + 0x14);
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < uVar5);
                }
                uStack_b8 = param_3 & 1;
                if ((uStack_b8 != 0) && (uVar7 = 0, uVar5 != 0)) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(iVar11 + *(int *)(iVar10 + 0x18)) != -1) {
                      aiStack_fc[2] = 0;
                      lVar3 = (*DAT_0045128c)(aiStack_fc + 2,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                    }
                    uVar5 = *(uint *)(iVar10 + 0x14);
                    uVar7 = uVar7 + 1;
                    iVar11 = iVar11 + 0x14;
                  } while (uVar7 < uVar5);
                }
                uStack_b0 = param_3 & 0x10;
                if ((uStack_b0 != 0) && (uVar7 = 0, uVar5 != 0)) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(iVar11 + *(int *)(iVar10 + 0x18)) != -1) {
                      aiStack_fc[3] = *(undefined4 *)(uVar7 * 4 + *(int *)(iVar10 + 0x20));
                      lVar3 = (*DAT_0045128c)(aiStack_fc + 3,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                    }
                    uVar5 = *(uint *)(iVar10 + 0x14);
                    uVar7 = uVar7 + 1;
                    iVar11 = iVar11 + 0x14;
                  } while (uVar7 < uVar5);
                }
                uStack_b4 = param_3 & 8;
                if ((uStack_b4 != 0) && (uVar7 = 0, uVar5 != 0)) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(iVar11 + *(int *)(iVar10 + 0x18)) != -1) {
                      uStack_ec = *(undefined4 *)(uVar7 * 4 + *(int *)(iVar10 + 0x24));
                      lVar3 = (*DAT_0045128c)(&uStack_ec,4,1,lVar1);
                      if (lVar3 != 1) goto LAB_002f8820;
                    }
                    uVar7 = uVar7 + 1;
                    iVar11 = iVar11 + 0x14;
                  } while (uVar7 < *(uint *)(iVar10 + 0x14));
                }
                uStack_e8 = *(undefined4 *)(iVar10 + 0x30);
                lVar3 = (*DAT_0045128c)(&uStack_e8,4,1,lVar1);
                if (lVar3 == 1) {
                  uStack_e4 = *(undefined4 *)(iVar10 + 0x30);
                  lVar3 = (*DAT_0045128c)(&uStack_e4,4,1,lVar1);
                  if (lVar3 == 1) {
                    uStack_e0 = *(undefined4 *)(iVar10 + 0x30);
                    lVar3 = (*DAT_0045128c)(&uStack_e0,4,1,lVar1);
                    if (lVar3 == 1) {
                      uVar7 = 0;
                      uVar5 = 0;
                      if (*(int *)(iVar10 + 0x30) != 0) {
                        iVar11 = *(int *)(iVar10 + 0x34);
                        while( true ) {
                          iVar11 = *(int *)(iVar11 + uVar7 * 8);
                          if (iVar11 != -1) {
                            aiStack_dc[0] = iVar11;
                            lVar3 = (*DAT_0045128c)(aiStack_dc,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                            aiStack_dc[1] = 0;
                            lVar3 = (*DAT_0045128c)(aiStack_dc + 1,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar5 = *(uint *)(iVar10 + 0x30);
                          uVar7 = uVar7 + 1;
                          if (uVar5 <= uVar7) break;
                          iVar11 = *(int *)(iVar10 + 0x34);
                        }
                      }
                      uVar8 = 0;
                      uVar7 = 0;
                      if (uVar5 != 0) {
                        iVar11 = *(int *)(iVar10 + 0x34);
                        while( true ) {
                          if (*(int *)(uVar8 * 8 + iVar11) != -1) {
                            aiStack_dc[2] = *(undefined4 *)(uVar8 * 4 + *(int *)(iVar10 + 0x38));
                            lVar3 = (*DAT_0045128c)(aiStack_dc + 2,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar7 = *(uint *)(iVar10 + 0x30);
                          uVar8 = uVar8 + 1;
                          if (uVar7 <= uVar8) break;
                          iVar11 = *(int *)(iVar10 + 0x34);
                        }
                      }
                      uVar8 = 0;
                      uVar5 = 0;
                      if (uVar7 != 0) {
                        iVar11 = *(int *)(iVar10 + 0x34);
                        while( true ) {
                          if (*(int *)(uVar8 * 8 + iVar11) != -1) {
                            uStack_d0 = *(undefined4 *)(uVar8 * 4 + *(int *)(iVar10 + 0x3c));
                            lVar3 = (*DAT_0045128c)(&uStack_d0,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar5 = *(uint *)(iVar10 + 0x30);
                          uVar8 = uVar8 + 1;
                          if (uVar5 <= uVar8) break;
                          iVar11 = *(int *)(iVar10 + 0x34);
                        }
                      }
                      uVar8 = 0;
                      uVar7 = 0;
                      if (uVar5 != 0) {
                        iVar11 = *(int *)(iVar10 + 0x34);
                        while( true ) {
                          if ((*(int *)(uVar8 * 8 + iVar11) != -1) && (uStack_b0 != 0)) {
                            uStack_cc = *(undefined4 *)(uVar8 * 4 + *(int *)(iVar10 + 0x40));
                            lVar3 = (*DAT_0045128c)(&uStack_cc,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar7 = *(uint *)(iVar10 + 0x30);
                          uVar8 = uVar8 + 1;
                          if (uVar7 <= uVar8) break;
                          iVar11 = *(int *)(iVar10 + 0x34);
                        }
                      }
                      uVar8 = 0;
                      uVar5 = 0;
                      if (uVar7 != 0) {
                        iVar11 = *(int *)(iVar10 + 0x34);
                        while( true ) {
                          if ((*(int *)(uVar8 * 8 + iVar11) != -1) && (uStack_b4 != 0)) {
                            uStack_c8 = *(undefined4 *)(uVar8 * 4 + *(int *)(iVar10 + 0x44));
                            lVar3 = (*DAT_0045128c)(&uStack_c8,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar5 = *(uint *)(iVar10 + 0x30);
                          uVar8 = uVar8 + 1;
                          if (uVar5 <= uVar8) break;
                          iVar11 = *(int *)(iVar10 + 0x34);
                        }
                      }
                      uVar8 = 0;
                      uVar7 = 0;
                      if (uVar5 != 0) {
                        do {
                          if ((param_3 & 4) != 0) {
                            uStack_c4 = *(undefined4 *)(uVar8 * 4 + *(int *)(iVar10 + 0x48));
                            lVar3 = (*DAT_0045128c)(&uStack_c4,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar7 = *(uint *)(iVar10 + 0x30);
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < uVar7);
                      }
                      uVar8 = 0;
                      uVar5 = 0;
                      if (uVar7 != 0) {
                        do {
                          if (uStack_b8 != 0) {
                            uStack_c0 = *(undefined4 *)(uVar8 * 4 + *(int *)(iVar10 + 0x4c));
                            lVar3 = (*DAT_0045128c)(&uStack_c0,4,1,lVar1);
                            if (lVar3 != 1) goto LAB_002f8820;
                          }
                          uVar5 = *(uint *)(iVar10 + 0x30);
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < uVar5);
                      }
                      uVar7 = 0;
                      if (uVar5 != 0) {
                        iVar11 = *(int *)(iVar10 + 0x34);
                        while( true ) {
                          if (*(int *)(uVar7 * 8 + iVar11) == -1) {
                            uVar5 = *(uint *)(iVar10 + 0x30);
                          }
                          else {
                            if ((param_3 & 2) != 0) {
                              uStack_bc = 0;
                              lVar3 = (*DAT_0045128c)(&uStack_bc,4,1,lVar1);
                              if (lVar3 != 1) goto LAB_002f8820;
                            }
                            uVar5 = *(uint *)(iVar10 + 0x30);
                          }
                          uVar7 = uVar7 + 1;
                          if (uVar5 <= uVar7) break;
                          iVar11 = *(int *)(iVar10 + 0x34);
                        }
                      }
                      (*DAT_00451280)(lVar1);
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_002f8820:
      (*DAT_00451280)(lVar1);
    }
  }
  return 0;
}


// ==== FUN_002f8c38 @ 002f8c38 ====

void FUN_002f8c38(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_FUN_003c87e0)(*(int *)(param_1 + 0x18) + -0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (*(code *)PTR_FUN_003c87e0)(*(int *)(param_1 + 0x34) + -0x10);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ==== FUN_002f8dc0 @ 002f8dc0 ====

int FUN_002f8dc0(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *puStack_94;
  
  iVar12 = *(int *)(param_1 + 0xc);
  if (iVar12 == *(int *)(param_1 + 0x10)) {
    iVar7 = 8;
    if (iVar12 != 0) {
      iVar7 = iVar12 << 1;
    }
    *(int *)(param_1 + 0x10) = iVar7;
    piStack_a0 = (int *)0x0;
    iVar12 = iVar7 * 0x14 + 0x10;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12,&piStack_a0)
    ;
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_a0,iVar12,uVar2);
    }
    piVar1 = piStack_a0;
    iVar12 = iVar7 + -1;
    piVar16 = piStack_a0 + 4;
    *piStack_a0 = iVar7;
    piVar3 = piVar16;
    if (iVar7 != 0) {
      do {
        *piVar3 = -1;
        iVar12 = iVar12 + -1;
        piVar3[4] = 0;
        piVar3 = piVar3 + 5;
      } while (iVar12 != -1);
    }
    uVar6 = *(uint *)(param_1 + 4);
    puVar15 = (undefined4 *)0x0;
    if ((uVar6 & 1) != 0) {
      puStack_9c = (undefined4 *)0x0;
      iVar12 = *(int *)(param_1 + 0x10) << 2;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12,
                         (uint)&piStack_a0 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(puStack_9c,iVar12,uVar2);
      }
      uVar6 = *(uint *)(param_1 + 4);
      puVar15 = puStack_9c;
    }
    puVar14 = (undefined4 *)0x0;
    if ((uVar6 & 8) != 0) {
      puStack_98 = (undefined4 *)0x0;
      iVar12 = *(int *)(param_1 + 0x10) << 2;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12,
                         (uint)&piStack_a0 | 8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(puStack_98,iVar12,uVar2);
      }
      uVar6 = *(uint *)(param_1 + 4);
      puVar14 = puStack_98;
    }
    puVar13 = (undefined4 *)0x0;
    if ((uVar6 & 0x10) != 0) {
      puStack_94 = (undefined4 *)0x0;
      iVar12 = *(int *)(param_1 + 0x10) << 2;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar12,
                         (uint)&piStack_a0 | 0xc);
      puVar13 = puStack_94;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(puStack_94,iVar12,uVar2);
        puVar13 = puStack_94;
      }
    }
    uVar6 = *(uint *)(param_1 + 0xc);
    uVar5 = 0;
    if (uVar6 == 0) {
LAB_002f90cc:
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x18);
      if (iVar12 != 0) {
        iVar7 = 0;
        iVar11 = 0;
        puVar8 = puVar15;
        puVar9 = puVar14;
        puVar10 = puVar13;
        do {
          piVar3 = (int *)(iVar11 + iVar12);
          piVar1[4] = *piVar3;
          piVar1[5] = piVar3[1];
          piVar1[6] = piVar3[2];
          piVar1[7] = piVar3[3];
          piVar1[8] = piVar3[4];
          if (puVar15 != (undefined4 *)0x0) {
            *puVar8 = *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x1c));
          }
          if (puVar14 != (undefined4 *)0x0) {
            *puVar9 = *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x24));
          }
          if (puVar13 == (undefined4 *)0x0) {
            uVar6 = *(uint *)(param_1 + 0xc);
          }
          else {
            *puVar10 = *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x20));
            uVar6 = *(uint *)(param_1 + 0xc);
          }
          uVar5 = uVar5 + 1;
          puVar10 = puVar10 + 1;
          iVar7 = iVar7 + 4;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
          iVar11 = iVar11 + 0x14;
        } while ((uVar5 < uVar6) &&
                (iVar12 = *(int *)(param_1 + 0x18), piVar1 = piVar1 + 5, iVar12 != 0));
        goto LAB_002f90cc;
      }
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    if (uVar6 < uVar5) {
      puVar10 = puVar15 + uVar6;
      puVar9 = puVar13 + uVar6;
      puVar4 = (uint *)(piVar16 + uVar6 * 5);
      puVar8 = puVar14 + uVar6;
      do {
        *puVar4 = uVar6;
        puVar4[4] = param_1;
        if (puVar15 != (undefined4 *)0x0) {
          *puVar10 = 0;
        }
        if (puVar14 != (undefined4 *)0x0) {
          *puVar8 = 0xffffffff;
        }
        if (puVar13 != (undefined4 *)0x0) {
          *puVar9 = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        puVar4 = puVar4 + 5;
      } while (uVar6 < *(uint *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      (*(code *)PTR_FUN_003c87e0)(*(int *)(param_1 + 0x18) + -0x10);
    }
    *(int **)(param_1 + 0x18) = piVar16;
    if ((*(uint *)(param_1 + 4) & 1) == 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        (*(code *)PTR_FUN_003c87e0)();
      }
      *(undefined4 **)(param_1 + 0x1c) = puVar15;
      uVar6 = *(uint *)(param_1 + 4);
    }
    if ((uVar6 & 8) == 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        (*(code *)PTR_FUN_003c87e0)();
      }
      *(undefined4 **)(param_1 + 0x24) = puVar14;
      uVar6 = *(uint *)(param_1 + 4);
    }
    if ((uVar6 & 0x10) == 0) {
      iVar12 = *(int *)(param_1 + 0xc);
      goto LAB_002f9218;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    *(undefined4 **)(param_1 + 0x20) = puVar13;
  }
  iVar12 = *(int *)(param_1 + 0xc);
LAB_002f9218:
  iVar12 = *(int *)(param_1 + 0x18) + iVar12 * 0x14;
  *(undefined4 *)(iVar12 + 4) = *param_2;
  *(undefined4 *)(iVar12 + 8) = param_2[1];
  *(undefined4 *)(iVar12 + 0xc) = param_2[2];
  if ((*(uint *)(param_1 + 4) & 0x10) == 0) {
    uVar6 = *(uint *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x20)) = 0xffffffff;
    uVar6 = *(uint *)(param_1 + 4);
  }
  if ((uVar6 & 8) == 0) {
    uVar6 = *(uint *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x24)) = 0xffffffff;
    uVar6 = *(uint *)(param_1 + 4);
  }
  if ((uVar6 & 1) == 0) {
    iVar7 = *(int *)(param_1 + 0x14);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x1c)) = 0;
    iVar7 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x14) = iVar7 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return iVar12;
}


// ==== FUN_002f9338 @ 002f9338 ====

undefined4 FUN_002f9338(undefined8 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  
  iVar12 = (int)param_1;
  if (param_2 < *(uint *)(iVar12 + 0xc)) {
    piVar7 = (int *)(param_2 * 0x14 + *(int *)(iVar12 + 0x18));
    piVar11 = (int *)0x0;
    if (*piVar7 != -1) {
      piVar11 = piVar7;
    }
  }
  else {
    piVar11 = (int *)0x0;
  }
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  iVar2 = piVar11[4];
  if (*(int *)(iVar2 + 0x24) == 0) {
    iVar8 = 0;
    iVar9 = 0;
    uVar10 = 0;
    while (uVar5 = FUN_00391620(iVar2), uVar10 < uVar5) {
      lVar6 = FUN_00383d40(*(int *)(iVar2 + 0x34) + iVar9 * 8);
      if (((lVar6 != -1) &&
          (uVar10 = uVar10 + 1, *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x38)) == *piVar11)) &&
         (bVar1 = iVar8 == 0, iVar8 = iVar8 + 1, bVar1)) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
        goto LAB_002f9484;
      }
      iVar9 = iVar9 + 1;
    }
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar8 = 0;
    for (iVar9 = *(int *)(*piVar11 * 4 + *(int *)(iVar2 + 0x24)); iVar9 != -1;
        iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x44))) {
      if (iVar8 == 0) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
        goto LAB_002f9484;
      }
      iVar8 = iVar8 + 1;
    }
    puVar4 = (undefined4 *)0x0;
  }
LAB_002f9484:
  if (puVar4 != (undefined4 *)0x0) {
    uVar3 = *puVar4;
    do {
      FUN_002fa030(param_1,uVar3);
      iVar2 = piVar11[4];
      if (*(int *)(iVar2 + 0x24) == 0) {
        iVar8 = 0;
        iVar9 = 0;
        uVar10 = 0;
        while (uVar5 = FUN_00391620(iVar2), uVar10 < uVar5) {
          lVar6 = FUN_00383d40(*(int *)(iVar2 + 0x34) + iVar9 * 8);
          if (((lVar6 != -1) &&
              (uVar10 = uVar10 + 1, *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x38)) == *piVar11)) &&
             (bVar1 = iVar8 == 0, iVar8 = iVar8 + 1, bVar1)) {
            puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
            goto LAB_002f9574;
          }
          iVar9 = iVar9 + 1;
        }
        puVar4 = (undefined4 *)0x0;
      }
      else {
        iVar8 = 0;
        for (iVar9 = *(int *)(*piVar11 * 4 + *(int *)(iVar2 + 0x24)); iVar9 != -1;
            iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x44))) {
          if (iVar8 == 0) {
            puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
            goto LAB_002f9574;
          }
          iVar8 = iVar8 + 1;
        }
        puVar4 = (undefined4 *)0x0;
      }
LAB_002f9574:
      if (puVar4 == (undefined4 *)0x0) goto code_r0x002f957c;
      uVar3 = *puVar4;
    } while( true );
  }
  iVar2 = piVar11[4];
LAB_002f9580:
  if (*(int *)(iVar2 + 0x20) == 0) {
    iVar8 = 0;
    iVar9 = 0;
    uVar10 = 0;
    while (uVar5 = FUN_00391620(iVar2), uVar10 < uVar5) {
      lVar6 = FUN_00383d40(*(int *)(iVar2 + 0x34) + iVar9 * 8);
      if (((lVar6 != -1) &&
          (uVar10 = uVar10 + 1, *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x3c)) == *piVar11)) &&
         (bVar1 = iVar8 == 0, iVar8 = iVar8 + 1, bVar1)) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
        goto LAB_002f965c;
      }
      iVar9 = iVar9 + 1;
    }
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar8 = 0;
    for (iVar9 = *(int *)(*piVar11 * 4 + *(int *)(iVar2 + 0x20)); iVar9 != -1;
        iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x40))) {
      if (iVar8 == 0) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
        goto LAB_002f965c;
      }
      iVar8 = iVar8 + 1;
    }
    puVar4 = (undefined4 *)0x0;
  }
LAB_002f965c:
  if (puVar4 == (undefined4 *)0x0) {
LAB_002f9754:
    *piVar11 = -1;
    *(int *)(iVar12 + 0x14) = *(int *)(iVar12 + 0x14) + -1;
    return 1;
  }
  uVar3 = *puVar4;
  do {
    FUN_002fa030(param_1,uVar3);
    iVar2 = piVar11[4];
    if (*(int *)(iVar2 + 0x20) == 0) {
      iVar8 = 0;
      iVar9 = 0;
      uVar10 = 0;
      while (uVar5 = FUN_00391620(iVar2), uVar10 < uVar5) {
        lVar6 = FUN_00383d40(*(int *)(iVar2 + 0x34) + iVar9 * 8);
        if (((lVar6 != -1) &&
            (uVar10 = uVar10 + 1, *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x3c)) == *piVar11)) &&
           (bVar1 = iVar8 == 0, iVar8 = iVar8 + 1, bVar1)) {
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
          goto LAB_002f974c;
        }
        iVar9 = iVar9 + 1;
      }
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar8 = 0;
      for (iVar9 = *(int *)(*piVar11 * 4 + *(int *)(iVar2 + 0x20)); iVar9 != -1;
          iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar2 + 0x40))) {
        if (iVar8 == 0) {
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar9 * 8);
          goto LAB_002f974c;
        }
        iVar8 = iVar8 + 1;
      }
      puVar4 = (undefined4 *)0x0;
    }
LAB_002f974c:
    if (puVar4 == (undefined4 *)0x0) goto LAB_002f9754;
    uVar3 = *puVar4;
  } while( true );
code_r0x002f957c:
  iVar2 = piVar11[4];
  goto LAB_002f9580;
}


// ==== FUN_002f97a0 @ 002f97a0 ====

/* WARNING: Removing unreachable block (ram,0x002f9ef4) */

int FUN_002f97a0(uint param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  int *piStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a4;
  
  iVar17 = *(int *)(param_1 + 0x28);
  piStack_b0 = param_2;
  piStack_ac = param_3;
  if (iVar17 != *(int *)(param_1 + 0x2c)) goto LAB_002f9e5c;
  iVar5 = 8;
  if (iVar17 != 0) {
    iVar5 = iVar17 << 1;
  }
  *(int *)(param_1 + 0x2c) = iVar5;
  piStack_d0 = (int *)0x0;
  iVar17 = iVar5 * 8 + 0x10;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&piStack_d0);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(piStack_d0,iVar17,uVar3);
  }
  iVar17 = iVar5 + -1;
  piVar21 = piStack_d0 + 4;
  *piStack_d0 = iVar5;
  piVar9 = piVar21;
  if (iVar5 != 0) {
    do {
      *piVar9 = -1;
      iVar17 = iVar17 + -1;
      piVar9[1] = 0;
      piVar9 = piVar9 + 2;
    } while (iVar17 != -1);
  }
  puStack_cc = (undefined4 *)0x0;
  iVar17 = *(int *)(param_1 + 0x2c) << 2;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&puStack_cc);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(puStack_cc,iVar17,uVar3);
  }
  iVar17 = *(int *)(param_1 + 0x2c) << 2;
  puStack_a8 = puStack_cc;
  puStack_c8 = (undefined4 *)0x0;
  uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&puStack_c8);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(puStack_c8,iVar17,uVar3);
  }
  puVar2 = puStack_c8;
  uVar8 = *(uint *)(param_1 + 4);
  puVar20 = (undefined4 *)0x0;
  if ((uVar8 & 4) != 0) {
    puStack_c4 = (undefined4 *)0x0;
    iVar17 = *(int *)(param_1 + 0x2c) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,
                       (uint)&piStack_d0 | 0xc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_c4,iVar17,uVar3);
    }
    uVar8 = *(uint *)(param_1 + 4);
    puVar20 = puStack_c4;
  }
  uStack_a4 = 0;
  if ((uVar8 & 1) != 0) {
    uStack_c0 = 0;
    iVar17 = *(int *)(param_1 + 0x2c) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&uStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_c0,iVar17,uVar3);
    }
    uStack_a4 = uStack_c0;
    uVar8 = *(uint *)(param_1 + 4);
  }
  puVar19 = (undefined4 *)0x0;
  if ((uVar8 & 2) != 0) {
    puStack_bc = (undefined4 *)0x0;
    iVar17 = *(int *)(param_1 + 0x2c) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&puStack_bc)
    ;
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_bc,iVar17,uVar3);
    }
    uVar8 = *(uint *)(param_1 + 4);
    puVar19 = puStack_bc;
  }
  puVar18 = (undefined4 *)0x0;
  if ((uVar8 & 0x10) != 0) {
    puStack_b8 = (undefined4 *)0x0;
    iVar17 = *(int *)(param_1 + 0x2c) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&puStack_b8)
    ;
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_b8,iVar17,uVar3);
    }
    uVar8 = *(uint *)(param_1 + 4);
    puVar18 = puStack_b8;
  }
  puVar16 = (undefined4 *)0x0;
  if ((uVar8 & 8) != 0) {
    puStack_b4 = (undefined4 *)0x0;
    iVar17 = *(int *)(param_1 + 0x2c) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar17,&puStack_b4)
    ;
    puVar16 = puStack_b4;
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_b4,iVar17,uVar3);
      puVar16 = puStack_b4;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x28);
  uVar7 = 0;
  if (uVar8 == 0) {
LAB_002f9c54:
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x34);
    piVar9 = piVar21;
    puVar11 = puVar2;
    puVar12 = puVar20;
    puVar13 = puVar19;
    puVar14 = puVar18;
    puVar15 = puVar16;
    puVar10 = puStack_a8;
    if (iVar17 != 0) {
      do {
        iVar5 = uVar7 * 4;
        piVar4 = (int *)(uVar7 * 8 + iVar17);
        *piVar9 = *piVar4;
        piVar9[1] = piVar4[1];
        *puVar10 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x38));
        *puVar11 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x3c));
        if (puVar20 != (undefined4 *)0x0) {
          *puVar12 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x48));
        }
        if (puVar19 != (undefined4 *)0x0) {
          *puVar13 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x50));
        }
        if (puVar18 != (undefined4 *)0x0) {
          *puVar14 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x40));
        }
        if (puVar16 == (undefined4 *)0x0) {
          uVar8 = *(uint *)(param_1 + 0x28);
        }
        else {
          *puVar15 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x44));
          uVar8 = *(uint *)(param_1 + 0x28);
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 < uVar8) &&
              (iVar17 = *(int *)(param_1 + 0x34), piVar9 = piVar9 + 2, puVar11 = puVar11 + 1,
              puVar12 = puVar12 + 1, puVar13 = puVar13 + 1, puVar14 = puVar14 + 1,
              puVar15 = puVar15 + 1, puVar10 = puVar10 + 1, iVar17 != 0));
      goto LAB_002f9c54;
    }
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  uVar1 = DAT_00407bcc;
  if (uVar8 < uVar7) {
    puVar10 = puStack_a8 + uVar8;
    puVar15 = puVar16 + uVar8;
    puVar14 = puVar18 + uVar8;
    puVar13 = puVar19 + uVar8;
    puVar12 = puVar20 + uVar8;
    puVar6 = (uint *)(piVar21 + uVar8 * 2);
    puVar11 = puVar2 + uVar8;
    do {
      *puVar6 = uVar8;
      puVar6[1] = param_1;
      *puVar10 = 0xffffffff;
      *puVar11 = 0xffffffff;
      if (puVar20 != (undefined4 *)0x0) {
        *puVar12 = uVar1;
      }
      if (puVar19 != (undefined4 *)0x0) {
        *puVar13 = 0;
      }
      if (puVar18 != (undefined4 *)0x0) {
        *puVar14 = 0xffffffff;
      }
      if (puVar16 != (undefined4 *)0x0) {
        *puVar15 = 0xffffffff;
      }
      uVar8 = uVar8 + 1;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar8 < *(uint *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (*(code *)PTR_FUN_003c87e0)(*(int *)(param_1 + 0x34) + -0x10);
  }
  *(int **)(param_1 + 0x34) = piVar21;
  if (*(int *)(param_1 + 0x38) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *(undefined4 **)(param_1 + 0x38) = puStack_a8;
  if (*(int *)(param_1 + 0x3c) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *(undefined4 **)(param_1 + 0x3c) = puVar2;
  if ((*(uint *)(param_1 + 4) & 4) == 0) {
    uVar8 = *(uint *)(param_1 + 4);
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    *(undefined4 **)(param_1 + 0x48) = puVar20;
    uVar8 = *(uint *)(param_1 + 4);
  }
  if ((uVar8 & 1) == 0) {
    uVar8 = *(uint *)(param_1 + 4);
  }
  else {
    if (*(int *)(param_1 + 0x4c) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    *(undefined4 *)(param_1 + 0x4c) = uStack_a4;
    uVar8 = *(uint *)(param_1 + 4);
  }
  if ((uVar8 & 2) != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    *(undefined4 **)(param_1 + 0x50) = puVar19;
  }
  if (puVar18 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    *(undefined4 **)(param_1 + 0x40) = puVar18;
  }
  if (puVar16 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
    }
    *(undefined4 **)(param_1 + 0x44) = puVar16;
  }
LAB_002f9e5c:
  *(int *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x38)) = *piStack_b0;
  *(int *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x3c)) = *piStack_ac;
  if (*(int *)(param_1 + 0x48) != 0) {
    *(float *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x48)) =
         SQRT(((float)piStack_ac[3] - (float)piStack_b0[3]) *
              ((float)piStack_ac[3] - (float)piStack_b0[3]) +
              ((float)piStack_ac[1] - (float)piStack_b0[1]) *
              ((float)piStack_ac[1] - (float)piStack_b0[1]) +
              ((float)piStack_ac[2] - (float)piStack_b0[2]) *
              ((float)piStack_ac[2] - (float)piStack_b0[2]));
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar8 = *(uint *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x50)) = 0;
    uVar8 = *(uint *)(param_1 + 4);
  }
  if ((uVar8 & 8) != 0) {
    iVar17 = *piStack_b0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x44)) =
         *(undefined4 *)(iVar17 * 4 + *(int *)(param_1 + 0x24));
    *(undefined4 *)(iVar17 * 4 + *(int *)(param_1 + 0x24)) = *(undefined4 *)(param_1 + 0x28);
  }
  if ((*(uint *)(param_1 + 4) & 0x10) != 0) {
    iVar17 = *piStack_ac;
    *(undefined4 *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x40)) =
         *(undefined4 *)(iVar17 * 4 + *(int *)(param_1 + 0x20));
    *(undefined4 *)(iVar17 * 4 + *(int *)(param_1 + 0x20)) = *(undefined4 *)(param_1 + 0x28);
  }
  iVar17 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar17 + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return *(int *)(param_1 + 0x34) + iVar17 * 8;
}


// ==== FUN_002fa030 @ 002fa030 ====

undefined4 FUN_002fa030(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piStack_b0;
  int *piStack_ac;
  
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    piVar7 = (int *)(param_2 * 8 + *(int *)(param_1 + 0x34));
    piVar13 = (int *)0x0;
    if (*piVar7 != -1) {
      piVar13 = piVar7;
    }
  }
  else {
    piVar13 = (int *)0x0;
  }
  if (piVar13 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar3 = piVar13[1];
      if (piVar13 == (int *)(iVar3 + 0x5c)) {
        piVar7 = (int *)(iVar3 + 100);
      }
      else {
        piVar7 = (int *)(*(int *)(iVar3 + 0x18) +
                        *(int *)(*piVar13 * 4 + *(int *)(iVar3 + 0x38)) * 0x14);
      }
      iVar3 = piVar7[4];
      piStack_b0 = (int *)0x0;
      if (*(int *)(iVar3 + 0x24) == 0) {
        iVar10 = 0;
        iVar12 = 0;
        uVar11 = 0;
        while (uVar4 = FUN_00391620(iVar3), uVar11 < uVar4) {
          lVar6 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar12 * 8);
          if (((lVar6 != -1) &&
              (uVar11 = uVar11 + 1, *(int *)(iVar12 * 4 + *(int *)(iVar3 + 0x38)) == *piVar7)) &&
             (bVar1 = iVar10 == 0, iVar10 = iVar10 + 1, bVar1)) {
            iVar10 = *(int *)(param_1 + 0x44);
            piVar8 = (int *)(*(int *)(iVar3 + 0x34) + iVar12 * 8);
            iVar12 = *piVar13;
            goto LAB_002fa1dc;
          }
          iVar12 = iVar12 + 1;
        }
        piVar8 = (int *)0x0;
        iVar10 = *(int *)(param_1 + 0x44);
        iVar12 = *piVar13;
      }
      else {
        iVar9 = 0;
        iVar12 = *piVar13;
        for (iVar2 = *(int *)(*piVar7 * 4 + *(int *)(iVar3 + 0x24)); iVar2 != -1;
            iVar2 = *(int *)(iVar2 * 4 + *(int *)(iVar3 + 0x44))) {
          if (iVar9 == 0) {
            piVar8 = (int *)(*(int *)(iVar3 + 0x34) + iVar2 * 8);
            goto LAB_002fa1dc;
          }
          iVar9 = iVar9 + 1;
        }
        piVar8 = (int *)0x0;
      }
LAB_002fa1dc:
      if ((piVar8 != piVar13) && (iVar3 = *(int *)(*piVar8 * 4 + iVar10), iVar3 != -1)) {
        do {
          piStack_b0 = piVar8;
          piVar8 = (int *)(*(int *)(param_1 + 0x34) + iVar3 * 8);
          if (piVar8 == piVar13) break;
          iVar3 = *(int *)(*piVar8 * 4 + iVar10);
        } while (iVar3 != -1);
      }
      if (piStack_b0 == (int *)0x0) {
        *(undefined4 *)(*piVar7 * 4 + *(int *)(param_1 + 0x24)) =
             *(undefined4 *)(iVar12 * 4 + iVar10);
      }
      else {
        *(undefined4 *)(*piStack_b0 * 4 + iVar10) = *(undefined4 *)(iVar12 * 4 + iVar10);
      }
      iVar10 = *(int *)(param_1 + 0x40);
    }
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x30);
    }
    else {
      iVar3 = piVar13[1];
      if (piVar13 == (int *)(iVar3 + 0x5c)) {
        piVar7 = (int *)(iVar3 + 0x78);
      }
      else {
        piVar7 = (int *)(*(int *)(iVar3 + 0x18) +
                        *(int *)(*piVar13 * 4 + *(int *)(iVar3 + 0x3c)) * 0x14);
      }
      iVar3 = piVar7[4];
      piStack_ac = (int *)0x0;
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar12 = 0;
        iVar10 = 0;
        uVar11 = 0;
        while (uVar4 = FUN_00391620(iVar3), uVar11 < uVar4) {
          lVar6 = FUN_00383d40(*(int *)(iVar3 + 0x34) + iVar10 * 8);
          if (((lVar6 != -1) &&
              (uVar11 = uVar11 + 1, *(int *)(iVar10 * 4 + *(int *)(iVar3 + 0x3c)) == *piVar7)) &&
             (bVar1 = iVar12 == 0, iVar12 = iVar12 + 1, bVar1)) {
            iVar12 = *piVar13;
            piVar8 = (int *)(*(int *)(iVar3 + 0x34) + iVar10 * 8);
            iVar10 = *(int *)(param_1 + 0x40);
            goto LAB_002fa3cc;
          }
          iVar10 = iVar10 + 1;
        }
        piVar8 = (int *)0x0;
        iVar12 = *piVar13;
        iVar10 = *(int *)(param_1 + 0x40);
      }
      else {
        iVar9 = 0;
        iVar12 = *piVar13;
        for (iVar2 = *(int *)(*piVar7 * 4 + *(int *)(iVar3 + 0x20)); iVar2 != -1;
            iVar2 = *(int *)(iVar2 * 4 + *(int *)(iVar3 + 0x40))) {
          if (iVar9 == 0) {
            piVar8 = (int *)(*(int *)(iVar3 + 0x34) + iVar2 * 8);
            goto LAB_002fa3cc;
          }
          iVar9 = iVar9 + 1;
        }
        piVar8 = (int *)0x0;
      }
LAB_002fa3cc:
      if ((piVar8 != piVar13) && (iVar3 = *(int *)(*piVar8 * 4 + iVar10), iVar3 != -1)) {
        do {
          piStack_ac = piVar8;
          piVar8 = (int *)(*(int *)(param_1 + 0x34) + iVar3 * 8);
          if (piVar8 == piVar13) break;
          iVar3 = *(int *)(*piVar8 * 4 + iVar10);
        } while (iVar3 != -1);
      }
      if (piStack_ac == (int *)0x0) {
        *(undefined4 *)(*piVar7 * 4 + *(int *)(param_1 + 0x20)) =
             *(undefined4 *)(iVar12 * 4 + iVar10);
      }
      else {
        *(undefined4 *)(*piStack_ac * 4 + iVar10) = *(undefined4 *)(iVar12 * 4 + iVar10);
      }
      iVar10 = *(int *)(param_1 + 0x30);
    }
    uVar5 = 1;
    *(int *)(param_1 + 0x30) = iVar10 + -1;
    *piVar13 = -1;
  }
  return uVar5;
}


// ==== FUN_002fa4c8 @ 002fa4c8 ====

void FUN_002fa4c8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piStack_60;
  int *piStack_5c;
  
  piStack_60 = (int *)0x0;
  iVar14 = *(int *)(param_1 + 0xc) << 2;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar14,&piStack_60);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(piStack_60,iVar14,uVar7);
  }
  piVar4 = piStack_60;
  iVar14 = *(int *)(param_1 + 0x28) << 2;
  piStack_5c = (int *)0x0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar14,
                     (uint)&piStack_60 | 4);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(piStack_5c,iVar14,uVar7);
  }
  piVar5 = piStack_5c;
  uVar11 = 0;
  piVar8 = piVar4;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      *piVar8 = -1;
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0xc));
  }
  uVar11 = 0;
  piVar8 = piStack_5c;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      *piVar8 = -1;
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x28));
  }
  uVar11 = 0;
  iVar14 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar13 = 0;
    iVar12 = 0;
    piVar8 = piVar4;
    do {
      piVar10 = (int *)(iVar13 + *(int *)(param_1 + 0x18));
      piVar9 = (int *)(iVar12 + *(int *)(param_1 + 0x18));
      if (*piVar10 != -1) {
        *piVar9 = *piVar10;
        piVar9[1] = piVar10[1];
        piVar9[2] = piVar10[2];
        piVar9[3] = piVar10[3];
        piVar9[4] = piVar10[4];
        *(int *)(iVar12 + *(int *)(param_1 + 0x18)) = iVar14;
        iVar12 = iVar12 + 0x14;
        *piVar8 = iVar14;
        iVar14 = iVar14 + 1;
      }
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 1;
      iVar13 = iVar13 + 0x14;
    } while (uVar11 < *(uint *)(param_1 + 0xc));
  }
  uVar11 = 0;
  iVar12 = 0;
  piVar8 = piStack_5c;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      piVar9 = (int *)(uVar11 * 8 + *(int *)(param_1 + 0x34));
      iVar13 = *piVar9;
      if (iVar13 != -1) {
        piVar10 = (int *)(iVar12 * 8 + *(int *)(param_1 + 0x34));
        *piVar10 = iVar13;
        piVar10[1] = piVar9[1];
        *(int *)(iVar12 * 8 + *(int *)(param_1 + 0x34)) = iVar12;
        *piVar8 = iVar12;
        iVar12 = iVar12 + 1;
      }
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x28));
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar13 = 0;
    piVar8 = piVar4;
    do {
      iVar1 = *piVar8;
      if (iVar1 == -1) {
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 != 0) {
          if (*(int *)(iVar13 + iVar2) == -1) {
            *(undefined4 *)(iVar1 * 4 + iVar2) = 0xffffffff;
          }
          else {
            *(int *)(iVar1 * 4 + iVar2) = piStack_5c[*(int *)(iVar13 + iVar2)];
          }
        }
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 != 0) {
          if (*(int *)(iVar13 + iVar1) == -1) {
            *(undefined4 *)(*piVar8 * 4 + iVar1) = 0xffffffff;
          }
          else {
            *(int *)(*piVar8 * 4 + iVar1) = piStack_5c[*(int *)(iVar13 + iVar1)];
          }
        }
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar11 < uVar6);
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar13 = 0;
    piVar8 = piStack_5c;
    do {
      if (*piVar8 == -1) {
        uVar6 = *(uint *)(param_1 + 0x28);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 != 0) {
          *(int *)(*piVar8 * 4 + iVar1) = piVar4[*(int *)(iVar13 + iVar1)];
        }
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 != 0) {
          *(int *)(*piVar8 * 4 + iVar1) = piVar4[*(int *)(iVar13 + iVar1)];
        }
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 != 0) {
          if (*(int *)(iVar13 + iVar1) == -1) {
            *(undefined4 *)(*piVar8 * 4 + iVar1) = 0xffffffff;
          }
          else {
            *(int *)(*piVar8 * 4 + iVar1) = piStack_5c[*(int *)(iVar13 + iVar1)];
          }
        }
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 != 0) {
          if (*(int *)(iVar13 + iVar1) == -1) {
            *(undefined4 *)(*piVar8 * 4 + iVar1) = 0xffffffff;
          }
          else {
            *(int *)(*piVar8 * 4 + iVar1) = piStack_5c[*(int *)(iVar13 + iVar1)];
          }
        }
        iVar1 = *(int *)(param_1 + 0x48);
        if (iVar1 != 0) {
          *(undefined4 *)(*piVar8 * 4 + iVar1) = *(undefined4 *)(iVar13 + iVar1);
        }
        uVar6 = *(uint *)(param_1 + 0x28);
      }
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + 4;
      piVar8 = piVar8 + 1;
    } while (uVar11 < uVar6);
  }
  puVar3 = PTR_FUN_003c87e0;
  *(int *)(param_1 + 0x28) = iVar12;
  *(int *)(param_1 + 0xc) = iVar14;
  *(int *)(param_1 + 0x14) = iVar14;
  *(int *)(param_1 + 0x30) = iVar12;
  (*(code *)puVar3)(piVar4);
  (*(code *)PTR_FUN_003c87e0)(piVar5);
  return;
}


// ==== FUN_002fa930 @ 002fa930 ====

/* WARNING: Removing unreachable block (ram,0x002facc0) */

void FUN_002fa930(int param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  *(uint *)(param_1 + 4) = param_2;
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
LAB_002faa68:
    uVar4 = *(uint *)(param_1 + 4);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uStack_70 = 0;
      iVar6 = *(int *)(param_1 + 0x10) << 2;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_70)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_70,iVar6,uVar2);
      }
      *(undefined4 *)(param_1 + 0x1c) = uStack_70;
      iVar6 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x4c);
    }
    if (iVar6 == 0) {
      uStack_6c = 0;
      iVar6 = *(int *)(param_1 + 0x2c) << 2;
      uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                         (uint)&uStack_70 | 4);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_6c,iVar6,uVar2);
      }
      *(undefined4 *)(param_1 + 0x4c) = uStack_6c;
      goto LAB_002faa68;
    }
    uVar4 = *(uint *)(param_1 + 4);
  }
  if ((uVar4 & 2) == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
LAB_002fab38:
    uVar4 = *(uint *)(param_1 + 4);
  }
  else if (*(int *)(param_1 + 0x50) == 0) {
    uStack_68 = 0;
    iVar6 = *(int *)(param_1 + 0x2c) << 2;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                       (uint)&uStack_70 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_68,iVar6,uVar2);
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x50) = uStack_68;
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_002fab38;
    iVar6 = *(int *)(param_1 + 0x50);
    while( true ) {
      iVar7 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar7 + iVar6) = 0;
      if (*(uint *)(param_1 + 0x2c) <= uVar4) break;
      iVar6 = *(int *)(param_1 + 0x50);
    }
    uVar4 = *(uint *)(param_1 + 4);
  }
  else {
    uVar4 = *(uint *)(param_1 + 4);
  }
  if ((uVar4 & 4) == 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
LAB_002fad0c:
    uVar4 = *(uint *)(param_1 + 4);
  }
  else if (*(int *)(param_1 + 0x48) == 0) {
    uStack_64 = 0;
    iVar6 = *(int *)(param_1 + 0x2c) << 2;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                       (uint)&uStack_70 | 0xc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_64,iVar6,uVar2);
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x48) = uStack_64;
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_002fad0c;
    uVar1 = *(uint *)(param_1 + 0x28);
    while( true ) {
      if (uVar4 < uVar1) {
        piVar3 = (int *)(uVar4 * 8 + *(int *)(param_1 + 0x34));
        piVar5 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar5 = piVar3;
        }
      }
      else {
        piVar5 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) {
        uVar1 = *(uint *)(param_1 + 0x2c);
      }
      else {
        iVar6 = piVar5[1];
        if (piVar5 == (int *)(iVar6 + 0x5c)) {
          iVar7 = iVar6 + 100;
        }
        else {
          iVar7 = *(int *)(iVar6 + 0x18) + *(int *)(*piVar5 * 4 + *(int *)(iVar6 + 0x38)) * 0x14;
        }
        if (piVar5 == (int *)(iVar6 + 0x5c)) {
          iVar6 = iVar6 + 0x78;
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x18) + *(int *)(*piVar5 * 4 + *(int *)(iVar6 + 0x3c)) * 0x14;
        }
        fVar10 = *(float *)(iVar6 + 4) - *(float *)(iVar7 + 4);
        fVar9 = *(float *)(iVar6 + 0xc) - *(float *)(iVar7 + 0xc);
        fVar8 = *(float *)(iVar6 + 8) - *(float *)(iVar7 + 8);
        *(float *)(uVar4 * 4 + *(int *)(param_1 + 0x48)) =
             SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
        uVar1 = *(uint *)(param_1 + 0x2c);
      }
      uVar4 = uVar4 + 1;
      if (uVar1 <= uVar4) break;
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    uVar4 = *(uint *)(param_1 + 4);
  }
  else {
    uVar4 = *(uint *)(param_1 + 4);
  }
  if ((uVar4 & 8) == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar4 = *(uint *)(param_1 + 4);
      goto LAB_002faf60;
    }
    uStack_60 = 0;
    iVar6 = *(int *)(param_1 + 0x10) << 2;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_60);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_60,iVar6,uVar2);
    }
    piVar5 = DAT_003c87e8;
    *(undefined4 *)(param_1 + 0x24) = uStack_60;
    iVar6 = *piVar5;
    uStack_5c = 0;
    iVar7 = *(int *)(param_1 + 0x2c) << 2;
    uVar2 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar5 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_5c);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_5c,iVar7,uVar2);
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x44) = uStack_5c;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar6 = *(int *)(param_1 + 0x24);
      while( true ) {
        iVar7 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar7 + iVar6) = 0xffffffff;
        if (*(uint *)(param_1 + 0x10) <= uVar4) break;
        iVar6 = *(int *)(param_1 + 0x24);
      }
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar6 = *(int *)(param_1 + 0x44);
      while( true ) {
        iVar7 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar7 + iVar6) = 0xffffffff;
        if (*(uint *)(param_1 + 0x2c) <= uVar4) break;
        iVar6 = *(int *)(param_1 + 0x44);
      }
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    uVar4 = 0;
    if (iVar6 != 0) {
      do {
        if (iVar6 - 1U < *(uint *)(param_1 + 0x28)) {
          piVar3 = (int *)((iVar6 - 1U) * 8 + *(int *)(param_1 + 0x34));
          piVar5 = (int *)0x0;
          if (*piVar3 != -1) {
            piVar5 = piVar3;
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
        if (piVar5 == (int *)0x0) {
          uVar1 = *(uint *)(param_1 + 0x2c);
        }
        else {
          iVar6 = piVar5[1];
          if (piVar5 == (int *)(iVar6 + 0x5c)) {
            iVar7 = *(int *)(iVar6 + 0x5c);
            piVar3 = (int *)(iVar6 + 100);
          }
          else {
            iVar7 = *piVar5;
            piVar3 = (int *)(*(int *)(iVar6 + 0x18) +
                            *(int *)(iVar7 * 4 + *(int *)(iVar6 + 0x38)) * 0x14);
          }
          piVar3 = (int *)(*piVar3 * 4 + *(int *)(param_1 + 0x24));
          iVar6 = *piVar3;
          *piVar3 = iVar7;
          *(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x44)) = iVar6;
          uVar1 = *(uint *)(param_1 + 0x2c);
        }
        uVar4 = uVar4 + 1;
        iVar6 = uVar1 - uVar4;
      } while (uVar4 < uVar1);
      uVar4 = *(uint *)(param_1 + 4);
      goto LAB_002faf60;
    }
  }
  uVar4 = *(uint *)(param_1 + 4);
LAB_002faf60:
  if ((uVar4 & 0x10) == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    uStack_58 = 0;
    iVar6 = *(int *)(param_1 + 0x10) << 2;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_58);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_58,iVar6,uVar2);
    }
    piVar5 = DAT_003c87e8;
    *(undefined4 *)(param_1 + 0x20) = uStack_58;
    iVar6 = *piVar5;
    uStack_54 = 0;
    iVar7 = *(int *)(param_1 + 0x2c) << 2;
    uVar2 = (**(code **)(iVar6 + 0x34))
                      ((int)piVar5 + (int)*(short *)(iVar6 + 0x30),iVar7,&uStack_54);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_54,iVar7,uVar2);
    }
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x40) = uStack_54;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar6 = *(int *)(param_1 + 0x20);
      while( true ) {
        iVar7 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar7 + iVar6) = 0xffffffff;
        if (*(uint *)(param_1 + 0x10) <= uVar4) break;
        iVar6 = *(int *)(param_1 + 0x20);
      }
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar6 = *(int *)(param_1 + 0x40);
      while( true ) {
        iVar7 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar7 + iVar6) = 0xffffffff;
        if (*(uint *)(param_1 + 0x2c) <= uVar4) break;
        iVar6 = *(int *)(param_1 + 0x40);
      }
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    uVar4 = 0;
    if (iVar6 != 0) {
      do {
        if (iVar6 - 1U < *(uint *)(param_1 + 0x28)) {
          piVar3 = (int *)((iVar6 - 1U) * 8 + *(int *)(param_1 + 0x34));
          piVar5 = (int *)0x0;
          if (*piVar3 != -1) {
            piVar5 = piVar3;
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
        if (piVar5 == (int *)0x0) {
          uVar1 = *(uint *)(param_1 + 0x2c);
        }
        else {
          iVar6 = piVar5[1];
          if (piVar5 == (int *)(iVar6 + 0x5c)) {
            iVar7 = *(int *)(iVar6 + 0x5c);
            piVar3 = (int *)(iVar6 + 0x78);
          }
          else {
            iVar7 = *piVar5;
            piVar3 = (int *)(*(int *)(iVar6 + 0x18) +
                            *(int *)(iVar7 * 4 + *(int *)(iVar6 + 0x3c)) * 0x14);
          }
          piVar3 = (int *)(*piVar3 * 4 + *(int *)(param_1 + 0x20));
          iVar6 = *piVar3;
          *piVar3 = iVar7;
          *(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x40)) = iVar6;
          uVar1 = *(uint *)(param_1 + 0x2c);
        }
        uVar4 = uVar4 + 1;
        iVar6 = uVar1 - uVar4;
      } while (uVar4 < uVar1);
    }
  }
  return;
}


// ==== FUN_002fb1c8 @ 002fb1c8 ====

void FUN_002fb1c8(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    (*(code *)PTR_FUN_003c87e0)(*(int *)(param_1 + 0x14) + -0x10);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  iVar5 = (int)param_2;
  *(int *)(param_1 + 0x1c) = iVar5;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    uStack_80 = 0;
    iVar6 = iVar5 << 2;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_80);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_80,iVar6,uVar4);
    }
    piVar3 = DAT_003c87e8;
    *(undefined4 *)(param_1 + 0xc) = uStack_80;
    uStack_7c = 0;
    iVar2 = *piVar3;
    uVar4 = (**(code **)(iVar2 + 0x34))
                      ((int)piVar3 + (int)*(short *)(iVar2 + 0x30),iVar6,(uint)&uStack_80 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_7c,iVar6,uVar4);
    }
    piVar3 = DAT_003c87e8;
    *(undefined4 *)(param_1 + 0x10) = uStack_7c;
    piStack_78 = (int *)0x0;
    iVar2 = *piVar3;
    iVar7 = iVar5 * 0xc + 0x10;
    uVar4 = (**(code **)(iVar2 + 0x34))
                      ((int)piVar3 + (int)*(short *)(iVar2 + 0x30),iVar7,(uint)&uStack_80 | 8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_78,iVar7,uVar4);
    }
    *piStack_78 = iVar5;
    if (param_2 != 0) {
      iVar5 = iVar5 + -2;
      do {
        bVar1 = iVar5 != -1;
        iVar5 = iVar5 + -1;
      } while (bVar1);
    }
    *(int **)(param_1 + 0x14) = piStack_78 + 4;
    uStack_74 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&uStack_74);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_74,iVar6,uVar4);
    }
    *(undefined4 *)(param_1 + 0x18) = uStack_74;
  }
  return;
}


// ==== FUN_002fb3c8 @ 002fb3c8 ====

uint FUN_002fb3c8(int param_1,float *param_2)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    pfVar2 = *(float **)(param_1 + 0x14);
    uVar3 = 1;
    uVar5 = 0;
    fVar6 = pfVar2[2] - param_2[2];
    fVar8 = *pfVar2 - *param_2;
    fVar7 = pfVar2[1] - param_2[1];
    fVar6 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 * 10.0;
    uVar4 = uVar5;
    if (1 < uVar1) {
      do {
        fVar7 = pfVar2[3] - *param_2;
        fVar9 = pfVar2[4] - param_2[1];
        fVar8 = pfVar2[5] - param_2[2];
        fVar7 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9 * 10.0;
        uVar5 = uVar3;
        if (fVar6 <= fVar7) {
          fVar7 = fVar6;
          uVar5 = uVar4;
        }
        uVar3 = uVar3 + 1;
        fVar6 = fVar7;
        uVar4 = uVar5;
        pfVar2 = pfVar2 + 3;
      } while (uVar3 < uVar1);
    }
  }
  return uVar5;
}


// ==== FUN_002fb4d8 @ 002fb4d8 ====

void FUN_002fb4d8(undefined8 param_1,ulong param_2)

{
  *(undefined4 *)param_1 = &DAT_003ee538;
  FUN_002f8c38();
  *(undefined4 *)param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002fb538 @ 002fb538 ====

void FUN_002fb538(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_002f66d0(param_1,*param_2,*param_3);
  return;
}


// ==== FUN_002fb558 @ 002fb558 ====

undefined8 FUN_002fb558(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[2] = 0;
  *puVar1 = &DAT_003ee580;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return param_1;
}


// ==== FUN_002fb590 @ 002fb590 ====

void FUN_002fb590(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_003ee580;
  if (puVar1[3] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[4] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  if (puVar1[5] != 0) {
    (*(code *)PTR_FUN_003c87e0)(puVar1[5] + -0x10);
  }
  if (puVar1[6] != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  *puVar1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002fb650 @ 002fb650 ====

uint FUN_002fb650(int param_1,float *param_2)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    pfVar3 = *(float **)(param_1 + 0x14);
    do {
      bVar1 = false;
      if (((*pfVar3 == *param_2) && (pfVar3[1] == param_2[1])) && (pfVar3[2] == param_2[2])) {
        bVar1 = true;
      }
      if (bVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 3;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0xffffffff;
}


// ==== FUN_002fb6d8 @ 002fb6d8 ====

undefined4
FUN_002fb6d8(undefined8 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (DAT_004526f8 == 0) {
    DAT_004526d0 = &DAT_003eed38;
    DAT_004526f8 = 1;
    FUN_0035e690(0x2fca20);
  }
  DAT_004526e4 = *param_2;
  uVar8 = 0;
  DAT_004526e8 = param_2[1];
  uVar6 = 0;
  DAT_004526ec = param_2[2];
  DAT_004526f0 = param_3;
  DAT_004526f1 = param_4;
  (**(code **)(DAT_004526d0 + 0x14))
            ((int)&DAT_004526d0 + (int)*(short *)(DAT_004526d0 + 0x10),param_1);
  iVar5 = (int)param_1;
  iVar7 = 0;
  if (*(int *)(iVar5 + 0x14) != 0) {
    do {
      if (uVar8 < *(uint *)(iVar5 + 0xc)) {
        piVar3 = (int *)(iVar7 + *(int *)(iVar5 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4 == (int *)0x0) {
        uVar1 = *(uint *)(iVar5 + 0x14);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar2 = (**(code **)(DAT_004526d0 + 0x24))
                          ((int)&DAT_004526d0 + (int)*(short *)(DAT_004526d0 + 0x20));
        if (lVar2 == 0) {
          return DAT_004526e0;
        }
        uVar1 = *(uint *)(iVar5 + 0x14);
      }
      iVar7 = iVar7 + 0x14;
      uVar8 = uVar8 + 1;
    } while (uVar6 < uVar1);
  }
  return DAT_004526e0;
}


// ==== FUN_002fb850 @ 002fb850 ====

undefined4
FUN_002fb850(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4,
            undefined1 param_5)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *apuStack_a0 [5];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  
  apuStack_a0[0] = &DAT_003eed00;
  uStack_88 = *param_2;
  uStack_80 = param_2[2];
  uStack_84 = param_2[1];
  lVar2 = FUN_002e4ce0(param_3,0x450940);
  if (lVar2 == 0) {
    uStack_7c = 0;
  }
  else {
    uStack_7c = *(undefined4 *)((int)lVar2 + 4);
  }
  uStack_78 = (undefined4)param_3;
  uStack_74 = param_4;
  uStack_73 = param_5;
  (**(code **)(apuStack_a0[0] + 0x14))
            ((int)apuStack_a0 + (int)*(short *)(apuStack_a0[0] + 0x10),param_1);
  iVar6 = (int)param_1;
  uVar8 = 0;
  uVar5 = 0;
  if (*(int *)(iVar6 + 0x14) != 0) {
    iVar7 = 0;
    do {
      if (uVar8 < *(uint *)(iVar6 + 0xc)) {
        piVar3 = (int *)(iVar7 + *(int *)(iVar6 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4 == (int *)0x0) {
        uVar1 = *(uint *)(iVar6 + 0x14);
      }
      else {
        uVar5 = uVar5 + 1;
        lVar2 = (**(code **)(apuStack_a0[0] + 0x24))
                          ((int)apuStack_a0 + (int)*(short *)(apuStack_a0[0] + 0x20));
        if (lVar2 == 0) {
          return uStack_8c;
        }
        uVar1 = *(uint *)(iVar6 + 0x14);
      }
      iVar7 = iVar7 + 0x14;
      uVar8 = uVar8 + 1;
    } while (uVar5 < uVar1);
  }
  return uStack_8c;
}


// ==== FUN_002fb9d0 @ 002fb9d0 ====

int FUN_002fb9d0(undefined4 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                undefined1 param_5,undefined1 param_6)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *apuStack_c0 [4];
  undefined4 uStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  float fStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_87;
  
  apuStack_c0[0] = &DAT_003eecc8;
  uStack_a4 = *param_3;
  iVar5 = (int)param_2;
  uStack_9c = param_3[2];
  fStack_8c = *(float *)(iVar5 + 8) * *(float *)(iVar5 + 8);
  uStack_a0 = param_3[1];
  uStack_8f = 1;
  uStack_90 = 1;
  lVar2 = FUN_002e4ce0(param_4,0x450940);
  if (lVar2 == 0) {
    uStack_98 = 0;
  }
  else {
    uStack_98 = *(undefined4 *)((int)lVar2 + 4);
  }
  uStack_94 = (undefined4)param_4;
  uStack_b0 = param_1;
  uStack_88 = param_5;
  uStack_87 = param_6;
  (**(code **)(apuStack_c0[0] + 0x14))
            ((int)apuStack_c0 + (int)*(short *)(apuStack_c0[0] + 0x10),param_2);
  uVar8 = 0;
  uVar6 = 0;
  if (*(int *)(iVar5 + 0x14) != 0) {
    iVar7 = 0;
    do {
      if (uVar8 < *(uint *)(iVar5 + 0xc)) {
        piVar3 = (int *)(iVar7 + *(int *)(iVar5 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4 == (int *)0x0) {
        uVar1 = *(uint *)(iVar5 + 0x14);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar2 = (**(code **)(apuStack_c0[0] + 0x24))
                          ((int)apuStack_c0 + (int)*(short *)(apuStack_c0[0] + 0x20));
        if (lVar2 == 0) break;
        uVar1 = *(uint *)(iVar5 + 0x14);
      }
      iVar7 = iVar7 + 0x14;
      uVar8 = uVar8 + 1;
    } while (uVar6 < uVar1);
  }
  if (iStack_a8 == 0) {
    uStack_8f = 0;
    (**(code **)(apuStack_c0[0] + 0x14))
              ((int)apuStack_c0 + (int)*(short *)(apuStack_c0[0] + 0x10),param_2);
    uVar8 = 0;
    uVar6 = 0;
    if (*(int *)(iVar5 + 0x14) != 0) {
      iVar7 = 0;
      do {
        if (uVar8 < *(uint *)(iVar5 + 0xc)) {
          piVar3 = (int *)(iVar7 + *(int *)(iVar5 + 0x18));
          piVar4 = (int *)0x0;
          if (*piVar3 != -1) {
            piVar4 = piVar3;
          }
        }
        else {
          piVar4 = (int *)0x0;
        }
        if (piVar4 == (int *)0x0) {
          uVar1 = *(uint *)(iVar5 + 0x14);
        }
        else {
          uVar6 = uVar6 + 1;
          lVar2 = (**(code **)(apuStack_c0[0] + 0x24))
                            ((int)apuStack_c0 + (int)*(short *)(apuStack_c0[0] + 0x20));
          if (lVar2 == 0) {
            return iStack_a8;
          }
          uVar1 = *(uint *)(iVar5 + 0x14);
        }
        iVar7 = iVar7 + 0x14;
        uVar8 = uVar8 + 1;
      } while (uVar6 < uVar1);
    }
  }
  return iStack_a8;
}


// ==== FUN_002fbc20 @ 002fbc20 ====

int * FUN_002fbc20(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  undefined4 uVar15;
  uint *puStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  
  iStack_c8 = (int)param_3;
  uStack_c4 = param_4 & 0xff;
  uStack_c0 = param_5 & 0xff;
  uVar13 = 0;
  uStack_bc = 1000;
  uStack_cc = param_2;
  uVar2 = FUN_002eff00(param_3,param_1,&puStack_d0);
  if (uVar2 < 0x3e9) {
    uStack_bc = uVar2;
  }
  if (uStack_bc != 0) {
    pfVar11 = (float *)&DAT_004536d0;
    puVar10 = &DAT_00452730;
    puVar8 = puStack_d0;
    do {
      if (*puVar8 < *(uint *)(*(int *)(iStack_c8 + 4) + 0xc)) {
        piVar7 = (int *)(*puVar8 * 0x14 + *(int *)(*(int *)(iStack_c8 + 4) + 0x18));
        if (*piVar7 == -1) {
          piVar7 = (int *)0x0;
        }
      }
      else {
        piVar7 = (int *)0x0;
      }
      *puVar10 = uVar13;
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      pfVar14 = (float *)param_1;
      *pfVar11 = (*pfVar14 - (float)piVar7[1]) * (*pfVar14 - (float)piVar7[1]) +
                 (pfVar14[1] - (float)piVar7[2]) * (pfVar14[1] - (float)piVar7[2]) +
                 (pfVar14[2] - (float)piVar7[3]) * (pfVar14[2] - (float)piVar7[3]);
      pfVar11 = pfVar11 + 1;
    } while (uVar13 < uStack_bc);
  }
  FUN_0035ec50(0x452730,uStack_bc,4,0x2fca38);
  lVar5 = FUN_002e4ce0(uStack_cc,0x450940);
  uVar15 = 0;
  if (lVar5 != 0) {
    uVar15 = *(undefined4 *)((int)lVar5 + 4);
  }
  uVar2 = 0;
  if (uStack_bc != 0) {
    do {
      uVar13 = puStack_d0[(&DAT_00452730)[uVar2]];
      if (uVar13 < *(uint *)(*(int *)(iStack_c8 + 4) + 0xc)) {
        piVar6 = (int *)(uVar13 * 0x14 + *(int *)(*(int *)(iStack_c8 + 4) + 0x18));
        piVar7 = (int *)0x0;
        if (*piVar6 != -1) {
          piVar7 = piVar6;
        }
      }
      else {
        piVar7 = (int *)0x0;
      }
      if (uStack_c4 == 0) {
LAB_002fbef0:
        if (uStack_c0 != 0) {
          iVar1 = piVar7[4];
          lVar5 = FUN_00391720(iVar1,uVar13,uStack_cc);
          if (lVar5 == 0) {
            iVar9 = 0;
            iVar12 = 0;
            uVar13 = 0;
            while (uVar4 = FUN_00391620(iVar1), uVar13 < uVar4) {
              lVar5 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar12 * 8);
              if (lVar5 != -1) {
                uVar13 = uVar13 + 1;
                if (*(int *)(iVar12 * 4 + *(int *)(iVar1 + 0x3c)) == *piVar7) {
                  iVar9 = iVar9 + 1;
                }
              }
              iVar12 = iVar12 + 1;
            }
          }
          else {
            iVar12 = *(int *)(*piVar7 * 4 + *(int *)(iVar1 + 0x20));
            iVar9 = 0;
            if (iVar12 != -1) {
              do {
                iVar12 = *(int *)(iVar12 * 4 + *(int *)(iVar1 + 0x40));
                iVar9 = iVar9 + 1;
              } while (iVar12 != -1);
            }
          }
          if (iVar9 == 0) goto LAB_002fbfdc;
        }
        lVar5 = FUN_002e27f8(uVar15,param_1,piVar7 + 1,uStack_cc,2);
        if (lVar5 != 0) {
          return piVar7;
        }
      }
      else {
        iVar1 = piVar7[4];
        uVar13 = 0;
        if (*(int *)(iVar1 + 0x30) != 0) {
          lVar5 = FUN_00391710(iVar1);
          if (lVar5 == 0) {
            uVar13 = 0;
            iVar9 = 0;
            uVar4 = 0;
            while (uVar3 = FUN_00391620(iVar1), uVar4 < uVar3) {
              lVar5 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar9 * 8);
              if (lVar5 != -1) {
                uVar4 = uVar4 + 1;
                if (*(int *)(iVar9 * 4 + *(int *)(iVar1 + 0x38)) == *piVar7) {
                  uVar13 = uVar13 + 1;
                }
              }
              iVar9 = iVar9 + 1;
            }
          }
          else {
            iVar9 = *(int *)(*piVar7 * 4 + *(int *)(iVar1 + 0x24));
            uVar13 = 0;
            if (iVar9 != -1) {
              do {
                iVar9 = *(int *)(iVar9 * 4 + *(int *)(iVar1 + 0x44));
                uVar13 = uVar13 + 1;
              } while (iVar9 != -1);
            }
          }
        }
        if (uVar13 != 0) goto LAB_002fbef0;
      }
LAB_002fbfdc:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_bc);
  }
  uVar2 = 0;
  if (uStack_bc != 0) {
    do {
      if (puStack_d0[(&DAT_00452730)[uVar2]] < *(uint *)(*(int *)(iStack_c8 + 4) + 0xc)) {
        piVar6 = (int *)(puStack_d0[(&DAT_00452730)[uVar2]] * 0x14 +
                        *(int *)(*(int *)(iStack_c8 + 4) + 0x18));
        piVar7 = (int *)0x0;
        if (*piVar6 != -1) {
          piVar7 = piVar6;
        }
      }
      else {
        piVar7 = (int *)0x0;
      }
      if (uStack_c4 == 0) {
LAB_002fc140:
        if (uStack_c0 == 0) {
          return piVar7;
        }
        iVar1 = piVar7[4];
        lVar5 = FUN_00391720(iVar1);
        if (lVar5 == 0) {
          iVar9 = 0;
          iVar12 = 0;
          uVar13 = 0;
          while (uVar4 = FUN_00391620(iVar1), uVar13 < uVar4) {
            lVar5 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar12 * 8);
            if (lVar5 != -1) {
              uVar13 = uVar13 + 1;
              if (*(int *)(iVar12 * 4 + *(int *)(iVar1 + 0x3c)) == *piVar7) {
                iVar9 = iVar9 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          }
        }
        else {
          iVar12 = *(int *)(*piVar7 * 4 + *(int *)(iVar1 + 0x20));
          iVar9 = 0;
          if (iVar12 != -1) {
            do {
              iVar12 = *(int *)(iVar12 * 4 + *(int *)(iVar1 + 0x40));
              iVar9 = iVar9 + 1;
            } while (iVar12 != -1);
          }
        }
        if (iVar9 != 0) {
          return piVar7;
        }
      }
      else {
        iVar1 = piVar7[4];
        iVar9 = 0;
        if (*(int *)(iVar1 + 0x30) != 0) {
          lVar5 = FUN_00391710(iVar1);
          if (lVar5 == 0) {
            iVar9 = 0;
            iVar12 = 0;
            uVar13 = 0;
            while (uVar4 = FUN_00391620(iVar1), uVar13 < uVar4) {
              lVar5 = FUN_00383d40(*(int *)(iVar1 + 0x34) + iVar12 * 8);
              if (lVar5 != -1) {
                uVar13 = uVar13 + 1;
                if (*(int *)(iVar12 * 4 + *(int *)(iVar1 + 0x38)) == *piVar7) {
                  iVar9 = iVar9 + 1;
                }
              }
              iVar12 = iVar12 + 1;
            }
          }
          else {
            iVar12 = *(int *)(*piVar7 * 4 + *(int *)(iVar1 + 0x24));
            iVar9 = 0;
            if (iVar12 != -1) {
              do {
                iVar12 = *(int *)(iVar12 * 4 + *(int *)(iVar1 + 0x44));
                iVar9 = iVar9 + 1;
              } while (iVar12 != -1);
            }
          }
        }
        if (iVar9 != 0) goto LAB_002fc140;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_bc);
  }
  return (int *)0x0;
}


// ==== FUN_002fc260 @ 002fc260 ====

undefined4 FUN_002fc260(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (DAT_00452728 == 0) {
    DAT_00452700 = &DAT_003eec90;
    DAT_00452728 = 1;
    FUN_0035e690(0x2fca90);
  }
  DAT_00452718 = *param_3;
  uVar7 = 0;
  DAT_0045271c = param_3[1];
  uVar6 = 0;
  DAT_00452720 = param_3[2];
  DAT_00452710 = param_1;
  (**(code **)(DAT_00452700 + 0x1c))
            ((int)&DAT_00452700 + (int)*(short *)(DAT_00452700 + 0x18),param_2);
  iVar5 = (int)param_2;
  if (*(int *)(iVar5 + 0x30) != 0) {
    do {
      if (uVar7 < *(uint *)(iVar5 + 0x28)) {
        piVar3 = (int *)(uVar7 * 8 + *(int *)(iVar5 + 0x34));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4 == (int *)0x0) {
        uVar1 = *(uint *)(iVar5 + 0x30);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar2 = (**(code **)(DAT_00452700 + 0x2c))
                          ((int)&DAT_00452700 + (int)*(short *)(DAT_00452700 + 0x28));
        if (lVar2 == 0) {
          return DAT_00452714;
        }
        uVar1 = *(uint *)(iVar5 + 0x30);
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 < uVar1);
  }
  return DAT_00452714;
}


// ==== FUN_002fc3c8 @ 002fc3c8 ====

/* WARNING: Removing unreachable block (ram,0x002fc500) */

void FUN_002fc3c8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    while( true ) {
      if (uVar5 < uVar1) {
        piVar3 = (int *)(uVar5 * 8 + *(int *)(param_1 + 0x34));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      iVar2 = piVar4[1];
      if (piVar4 == (int *)(iVar2 + 0x5c)) {
        iVar6 = iVar2 + 100;
      }
      else {
        iVar6 = *(int *)(iVar2 + 0x18) + *(int *)(*piVar4 * 4 + *(int *)(iVar2 + 0x38)) * 0x14;
      }
      if (piVar4 == (int *)(iVar2 + 0x5c)) {
        iVar2 = iVar2 + 0x78;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x18) + *(int *)(*piVar4 * 4 + *(int *)(iVar2 + 0x3c)) * 0x14;
      }
      fStack_d0 = *(float *)(iVar2 + 4) - *(float *)(iVar6 + 4);
      fStack_cc = *(float *)(iVar2 + 8) - *(float *)(iVar6 + 8);
      fStack_c8 = *(float *)(iVar2 + 0xc) - *(float *)(iVar6 + 0xc);
      fVar8 = (float)FUN_00389140(&fStack_d0);
      fVar7 = 0.0;
      if (DAT_003c9ed4 != 0) {
        fVar7 = *(float *)(DAT_003c9ed4 + 0xc);
      }
      fStack_ac = (fVar7 * 0.4) / SQRT(fVar8);
      fStack_a8 = fStack_ac * fStack_c8;
      fStack_b0 = fStack_ac * fStack_d0;
      fStack_ac = fStack_ac * fStack_cc;
      fStack_c0 = *(float *)(iVar6 + 4) + fStack_b0;
      fStack_b8 = *(float *)(iVar6 + 0xc) + fStack_a8;
      fStack_bc = *(float *)(iVar6 + 8) + fStack_ac;
      if (DAT_00451274 != (code *)0x0) {
        (*DAT_00451274)(&fStack_c0,iVar2 + 4,param_2,param_3,param_4);
      }
      uVar5 = uVar5 + 1;
      if (*(uint *)(param_1 + 0x30) <= uVar5) break;
      uVar1 = *(uint *)(param_1 + 0x28);
    }
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = 0;
    do {
      if (uVar5 < *(uint *)(param_1 + 0xc)) {
        piVar3 = (int *)(iVar2 + *(int *)(param_1 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (DAT_00451278 != (code *)0x0) {
        (*DAT_00451278)(piVar4 + 1,param_2,param_3,param_4);
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar5 < *(uint *)(param_1 + 0x14));
  }
  return;
}


// ==== FUN_002fc668 @ 002fc668 ====

/* WARNING: Removing unreachable block (ram,0x002fc798) */

void FUN_002fc668(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    while( true ) {
      if (uVar5 < uVar1) {
        piVar3 = (int *)(uVar5 * 8 + *(int *)(param_1 + 0x34));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      iVar2 = piVar4[1];
      if (piVar4 == (int *)(iVar2 + 0x5c)) {
        iVar6 = iVar2 + 100;
      }
      else {
        iVar6 = *(int *)(iVar2 + 0x18) + *(int *)(*piVar4 * 4 + *(int *)(iVar2 + 0x38)) * 0x14;
      }
      if (piVar4 == (int *)(iVar2 + 0x5c)) {
        iVar2 = iVar2 + 0x78;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x18) + *(int *)(*piVar4 * 4 + *(int *)(iVar2 + 0x3c)) * 0x14;
      }
      fStack_b0 = *(float *)(iVar2 + 4) - *(float *)(iVar6 + 4);
      fStack_ac = *(float *)(iVar2 + 8) - *(float *)(iVar6 + 8);
      fStack_a8 = *(float *)(iVar2 + 0xc) - *(float *)(iVar6 + 0xc);
      fVar8 = (float)FUN_00389140(&fStack_b0);
      fVar7 = 0.0;
      if (DAT_003c9ed4 != 0) {
        fVar7 = *(float *)(DAT_003c9ed4 + 0xc);
      }
      fStack_8c = (fVar7 * 0.4) / SQRT(fVar8);
      fStack_88 = fStack_8c * fStack_a8;
      fStack_90 = fStack_8c * fStack_b0;
      fStack_8c = fStack_8c * fStack_ac;
      fStack_a0 = *(float *)(iVar6 + 4) + fStack_90;
      fStack_98 = *(float *)(iVar6 + 0xc) + fStack_88;
      fStack_9c = *(float *)(iVar6 + 8) + fStack_8c;
      if (DAT_00451274 != (code *)0x0) {
        (*DAT_00451274)(&fStack_a0,iVar2 + 4,0,0,0xff);
      }
      uVar5 = uVar5 + 1;
      if (*(uint *)(param_1 + 0x30) <= uVar5) break;
      uVar1 = *(uint *)(param_1 + 0x28);
    }
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = 0;
    do {
      if (uVar5 < *(uint *)(param_1 + 0xc)) {
        piVar3 = (int *)(iVar2 + *(int *)(param_1 + 0x18));
        piVar4 = (int *)0x0;
        if (*piVar3 != -1) {
          piVar4 = piVar3;
        }
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (DAT_00451278 != (code *)0x0) {
        (*DAT_00451278)(piVar4 + 1,0,0xff,0);
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar5 < *(uint *)(param_1 + 0x14));
  }
  return;
}


// ==== FUN_002fc8f0 @ 002fc8f0 ====

void FUN_002fc8f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (1 < *(int *)(param_1 + 8)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      if (DAT_00451278 != (code *)0x0) {
        (*DAT_00451278)(iVar2 + *(int *)(param_1 + 0x14),0,0xff,0xff);
      }
      if (*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x18)) == 0) {
        iVar1 = iVar2 + *(int *)(param_1 + 0x14);
        if (DAT_00451274 != (code *)0x0) {
          (*DAT_00451274)(iVar1,iVar1 + 0xc,0xff,0xff,0xff);
        }
      }
      else {
        iVar1 = iVar2 + *(int *)(param_1 + 0x14);
        if (DAT_00451274 != (code *)0x0) {
          (*DAT_00451274)(iVar1,iVar1 + 0xc,0x32,0xaf,0x32);
        }
      }
      iVar1 = iVar3 + 2;
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if ((*(int *)(param_1 + 8) != 0) && (DAT_00451278 != (code *)0x0)) {
    (*DAT_00451278)(*(int *)(param_1 + 8) * 0xc + *(int *)(param_1 + 0x14) + -0xc,0,0xff,0);
  }
  return;
}


// ==== FUN_002fcaa8 @ 002fcaa8 ====

void FUN_002fcaa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x18,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x18,uVar1);
  }
  FUN_002fd7d8(auStack_40[0],param_1);
  return;
}


// ==== FUN_002fcb50 @ 002fcb50 ====

/* Strings referenciadas:
     "Kynogon AccessWays Data" */

undefined4 FUN_002fcb50(int param_1,undefined8 param_2)

{
  int *piVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  lVar3 = (*DAT_0045127c)(param_2,0x407d40);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = strlen(0x407db8);
  lVar5 = (*DAT_00451290)(auStack_f0,1,uVar4,lVar3);
  lVar6 = strlen(0x407db8);
  if ((lVar5 == lVar6) && (lVar6 = (*DAT_00451290)(auStack_b0,4,1,lVar3), lVar6 == 1)) {
    auStack_f0[(int)lVar5] = 0;
    lVar5 = stricmp(0x407db8,auStack_f0);
    if ((lVar5 == 0) && (lVar5 = (*DAT_00451290)(param_1 + 0x10,2,1,lVar3), lVar5 == 1)) {
      if ((long)(int)*(short *)(param_1 + 0x10) != (long)*(short *)(*(int *)(param_1 + 4) + 0x14)) {
        return 0;
      }
      uStack_ac = 0;
      iVar7 = (int)*(short *)(param_1 + 0x10) << 1;
      uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&uStack_ac)
      ;
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_ac,iVar7,uVar4);
      }
      piVar1 = DAT_003c87e8;
      *(undefined4 *)(param_1 + 0xc) = uStack_ac;
      iVar7 = *piVar1;
      uStack_a8 = 0;
      iVar8 = (int)*(short *)(param_1 + 0x10) << 2;
      uVar4 = (**(code **)(iVar7 + 0x34))
                        ((int)piVar1 + (int)*(short *)(iVar7 + 0x30),iVar8,&uStack_a8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(uStack_a8,iVar8,uVar4);
      }
      *(undefined4 *)(param_1 + 8) = uStack_a8;
      sVar2 = (*DAT_00451290)(*(undefined4 *)(param_1 + 0xc),2,*(undefined2 *)(param_1 + 0x10),lVar3
                             );
      if (sVar2 == *(short *)(param_1 + 0x10)) {
        lVar5 = 0;
        if (0 < sVar2) {
          sVar2 = *(short *)(param_1 + 0x10);
          while (lVar5 = (long)((int)lVar5 + 1), lVar5 < sVar2) {
            sVar2 = *(short *)(param_1 + 0x10);
          }
        }
        lVar5 = 0;
        if (0 < *(short *)(param_1 + 0x10)) {
          do {
            iVar9 = (int)lVar5;
            iVar10 = iVar9 * 2;
            iVar7 = *(int *)(param_1 + 8);
            iVar8 = (int)*(short *)(iVar10 + *(int *)(param_1 + 0xc)) << 1;
            uStack_a4 = 0;
            uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                              ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                               &uStack_a4);
            if (DAT_003c87ec != (code *)0x0) {
              (*DAT_003c87ec)(uStack_a4,iVar8,uVar4);
            }
            *(undefined4 *)(iVar9 * 4 + iVar7) = uStack_a4;
            sVar2 = (*DAT_00451290)(*(undefined4 *)(iVar9 * 4 + *(int *)(param_1 + 8)),2,
                                    *(undefined2 *)(iVar10 + *(int *)(param_1 + 0xc)),lVar3);
            lVar5 = (long)(iVar9 + 1);
            if (sVar2 != *(short *)(iVar10 + *(int *)(param_1 + 0xc))) goto LAB_002fcd4c;
            lVar6 = 0;
            if (0 < sVar2) {
              iVar7 = *(int *)(param_1 + 0xc);
              while (lVar6 = (long)((int)lVar6 + 1), lVar6 < *(short *)(iVar10 + iVar7)) {
                iVar7 = *(int *)(param_1 + 0xc);
              }
            }
          } while (lVar5 < *(short *)(param_1 + 0x10));
        }
        (*DAT_00451280)(lVar3);
        return 1;
      }
    }
  }
LAB_002fcd4c:
  (*DAT_00451280)(lVar3);
  return 0;
}


// ==== FUN_002fcec0 @ 002fcec0 ====

/* Strings referenciadas:
     "Kynogon AccessWays Data" */

undefined4 FUN_002fcec0(int param_1,undefined8 param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  uStack_f0 = DAT_00407d48;
  uStack_ec = DAT_00407d4c;
  iStack_b0 = 0;
  piVar2 = *(int **)(DAT_003c9ed4 + 4);
  if ((piVar2 != (int *)0x0) &&
     (lVar4 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),param_2),
     lVar4 != 0)) {
    lVar4 = strlen(0x407db8);
    lVar5 = (**(code **)(*piVar2 + 0x24))
                      ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,&uStack_f0,lVar4);
    if (lVar5 == lVar4) {
      lVar4 = (**(code **)(*piVar2 + 0x24))
                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,&iStack_b0,4);
      if (lVar4 == 4) {
        *(undefined1 *)((int)&uStack_f0 + (int)lVar5) = 0;
        lVar4 = stricmp(0x407db8,&uStack_f0);
        if (lVar4 == 0) {
          if (iStack_b0 == 1) {
            lVar4 = (**(code **)(*piVar2 + 0x24))
                              ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,param_1 + 0x10,
                               2);
            if (lVar4 == 2) {
              if ((long)(int)*(short *)(param_1 + 0x10) ==
                  (long)*(short *)(*(int *)(param_1 + 4) + 0x14)) {
                uStack_ac = 0;
                iVar7 = (int)*(short *)(param_1 + 0x10) << 1;
                uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                                  ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,
                                   &uStack_ac);
                if (DAT_003c87ec != (code *)0x0) {
                  (*DAT_003c87ec)(uStack_ac,iVar7,uVar6);
                }
                piVar3 = DAT_003c87e8;
                *(undefined4 *)(param_1 + 0xc) = uStack_ac;
                iVar7 = *piVar3;
                uStack_a8 = 0;
                iVar8 = (int)*(short *)(param_1 + 0x10) << 2;
                uVar6 = (**(code **)(iVar7 + 0x34))
                                  ((int)piVar3 + (int)*(short *)(iVar7 + 0x30),iVar8,&uStack_a8);
                if (DAT_003c87ec != (code *)0x0) {
                  (*DAT_003c87ec)(uStack_a8,iVar8,uVar6);
                }
                *(undefined4 *)(param_1 + 8) = uStack_a8;
                iVar7 = (**(code **)(*piVar2 + 0x24))
                                  ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                   *(undefined4 *)(param_1 + 0xc),
                                   (int)*(short *)(param_1 + 0x10) << 1);
                if (iVar7 == (int)*(short *)(param_1 + 0x10) << 1) {
                  lVar4 = 0;
                  if (0 < *(short *)(param_1 + 0x10)) {
                    sVar1 = *(short *)(param_1 + 0x10);
                    while (lVar4 = (long)((int)lVar4 + 1), lVar4 < sVar1) {
                      sVar1 = *(short *)(param_1 + 0x10);
                    }
                  }
                  lVar4 = 0;
                  if (0 < *(short *)(param_1 + 0x10)) {
                    do {
                      iVar9 = (int)lVar4;
                      iVar10 = iVar9 * 2;
                      iVar7 = *(int *)(param_1 + 8);
                      iVar8 = (int)*(short *)(iVar10 + *(int *)(param_1 + 0xc)) << 1;
                      uStack_a4 = 0;
                      uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),
                                         iVar8,&uStack_a4);
                      if (DAT_003c87ec != (code *)0x0) {
                        (*DAT_003c87ec)(uStack_a4,iVar8,uVar6);
                      }
                      *(undefined4 *)(iVar9 * 4 + iVar7) = uStack_a4;
                      iVar7 = (**(code **)(*piVar2 + 0x24))
                                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,
                                         *(undefined4 *)(iVar9 * 4 + *(int *)(param_1 + 8)),
                                         (int)*(short *)(iVar10 + *(int *)(param_1 + 0xc)) << 1);
                      sVar1 = *(short *)(iVar10 + *(int *)(param_1 + 0xc));
                      lVar4 = (long)(iVar9 + 1);
                      if (iVar7 != (int)sVar1 << 1) goto LAB_002fd0f8;
                      lVar5 = 0;
                      if (0 < sVar1) {
                        iVar7 = *(int *)(param_1 + 0xc);
                        while (lVar5 = (long)((int)lVar5 + 1), lVar5 < *(short *)(iVar10 + iVar7)) {
                          iVar7 = *(int *)(param_1 + 0xc);
                        }
                      }
                    } while (lVar4 < *(short *)(param_1 + 0x10));
                  }
                  (**(code **)(*piVar2 + 0x2c))
                            ((int)piVar2 + (int)*(short *)(*piVar2 + 0x28),param_2);
                  return 1;
                }
LAB_002fd0f8:
                iVar7 = *piVar2;
              }
              else {
                iVar7 = *piVar2;
              }
            }
            else {
              iVar7 = *piVar2;
            }
          }
          else {
            iVar7 = *piVar2;
          }
        }
        else {
          iVar7 = *piVar2;
        }
      }
      else {
        iVar7 = *piVar2;
      }
    }
    else {
      iVar7 = *piVar2;
    }
    (**(code **)(iVar7 + 0x2c))((int)piVar2 + (int)*(short *)(iVar7 + 0x28),param_2);
  }
  return 0;
}


// ==== FUN_002fd288 @ 002fd288 ====

undefined4 FUN_002fd288(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *apuStack_90 [2];
  int iStack_88;
  undefined4 uStack_80;
  undefined4 auStack_7c [3];
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  if (iVar7 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 4) + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    *(short *)(param_1 + 0x10) = (short)iVar7;
    uStack_80 = 0;
    iVar7 = (iVar7 << 0x10) >> 0xf;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,&uStack_80);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_80,iVar7,uVar3);
    }
    *(undefined4 *)(param_1 + 0xc) = uStack_80;
    memset(uStack_80,0,(int)*(short *)(param_1 + 0x10) << 1);
    auStack_7c[0] = 0;
    iVar7 = (int)*(short *)(param_1 + 0x10) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar7,auStack_7c);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(auStack_7c[0],iVar7,uVar3);
    }
    *(undefined4 *)(param_1 + 8) = auStack_7c[0];
    memset(auStack_7c[0],0,(int)*(short *)(param_1 + 0x10) << 2);
    apuStack_90[0] = &DAT_003ef330;
    iVar7 = *(int *)(param_1 + 4);
    iStack_88 = param_1;
    (*(code *)PTR_FUN_003ef344)((int)apuStack_90 + (int)DAT_003ef340,iVar7);
    uVar10 = 0;
    uVar8 = 0;
    if (*(int *)(iVar7 + 0x14) != 0) {
      iVar9 = 0;
      do {
        if (uVar10 < *(uint *)(iVar7 + 0xc)) {
          piVar5 = (int *)(iVar9 + *(int *)(iVar7 + 0x18));
          piVar6 = (int *)0x0;
          if (*piVar5 != -1) {
            piVar6 = piVar5;
          }
        }
        else {
          piVar6 = (int *)0x0;
        }
        if (piVar6 == (int *)0x0) {
          uVar1 = *(uint *)(iVar7 + 0x14);
        }
        else {
          uVar8 = uVar8 + 1;
          lVar4 = (**(code **)(apuStack_90[0] + 0x24))
                            ((int)apuStack_90 + (int)*(short *)(apuStack_90[0] + 0x20));
          if (lVar4 == 0) break;
          uVar1 = *(uint *)(iVar7 + 0x14);
        }
        iVar9 = iVar9 + 0x14;
        uVar10 = uVar10 + 1;
      } while (uVar8 < uVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_002fd4a0 @ 002fd4a0 ====

/* Strings referenciadas:
     "Kynogon AccessWays Data" */

undefined4 FUN_002fd4a0(int param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 auStack_a0 [2];
  undefined4 uStack_9c;
  undefined2 *puStack_98;
  
  lVar3 = (*DAT_0045127c)(param_2,0x407d50);
  if (lVar3 != 0) {
    uStack_9c = DAT_00407dd0;
    uVar4 = strlen(0x407db8);
    lVar5 = (*DAT_0045128c)(0x407db8,1,uVar4,lVar3);
    lVar6 = strlen(0x407db8);
    if ((lVar5 == lVar6) && (lVar5 = (*DAT_0045128c)(&uStack_9c,4,1,lVar3), lVar5 == 1)) {
      auStack_a0[0] = *(undefined2 *)(param_1 + 0x10);
      lVar5 = (*DAT_0045128c)(auStack_a0,2,1,lVar3);
      if (lVar5 == 1) {
        puStack_98 = (undefined2 *)0x0;
        iVar9 = (int)*(short *)(param_1 + 0x10) << 1;
        uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,
                           (uint)auStack_a0 | 8);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_98,iVar9,uVar4);
        }
        puVar1 = puStack_98;
        lVar5 = 0;
        puVar8 = puStack_98;
        if (0 < *(short *)(param_1 + 0x10)) {
          do {
            iVar9 = (int)lVar5;
            lVar5 = (long)(iVar9 + 1);
            *puVar8 = *(undefined2 *)(iVar9 * 2 + *(int *)(param_1 + 0xc));
            puVar8 = puVar8 + 1;
          } while (lVar5 < *(short *)(param_1 + 0x10));
        }
        sVar2 = (*DAT_0045128c)(puStack_98,2,*(undefined2 *)(param_1 + 0x10),lVar3);
        if (sVar2 == *(short *)(param_1 + 0x10)) {
          lVar5 = 0;
          if (0 < sVar2) {
            iVar9 = 0;
            do {
              lVar6 = 0;
              if (0 < *(short *)(iVar9 + *(int *)(param_1 + 0xc))) {
                puVar8 = puVar1;
                do {
                  iVar7 = (int)lVar6;
                  lVar6 = (long)(iVar7 + 1);
                  *puVar8 = *(undefined2 *)
                             (iVar7 * 2 + *(int *)((int)lVar5 * 4 + *(int *)(param_1 + 8)));
                  puVar8 = puVar8 + 1;
                } while (lVar6 < *(short *)(iVar9 + *(int *)(param_1 + 0xc)));
              }
              sVar2 = (*DAT_0045128c)(puVar1,2,*(undefined2 *)(iVar9 + *(int *)(param_1 + 0xc)),
                                      lVar3);
              lVar5 = (long)((int)lVar5 + 1);
              if (sVar2 != *(short *)(iVar9 + *(int *)(param_1 + 0xc))) {
                (*(code *)PTR_FUN_003c87e0)(puVar1);
                goto LAB_002fd674;
              }
              iVar9 = iVar9 + 2;
            } while (lVar5 < *(short *)(param_1 + 0x10));
          }
          (*(code *)PTR_FUN_003c87e0)(puVar1);
          (*DAT_00451280)(lVar3);
          return 1;
        }
        (*(code *)PTR_FUN_003c87e0)(puVar1);
      }
    }
LAB_002fd674:
    (*DAT_00451280)(lVar3);
  }
  return 0;
}


// ==== CAccessWaysData_002fd780 @ 002fd780 ====

/* Strings referenciadas:
     "CAccessWaysData" */

void CAccessWaysData_002fd780(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00454780 = &DAT_003ec200;
    }
    else {
      FUN_002f35b0(0x454670,0x407d58,0x2fcaa8);
    }
  }
  return;
}


// ==== FUN_002fd7d8 @ 002fd7d8 ====

undefined8 FUN_002fd7d8(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  *puVar1 = &DAT_003ef368;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  return param_1;
}


// ==== FUN_002fd800 @ 002fd800 ====

void FUN_002fd800(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = 0;
  puVar3 = (undefined4 *)param_1;
  *puVar3 = &DAT_003ef368;
  if (0 < *(short *)(puVar3 + 4)) {
    iVar1 = puVar3[2];
    while( true ) {
      if (*(int *)((int)lVar2 * 4 + iVar1) != 0) {
        (*(code *)PTR_FUN_003c87e0)();
      }
      lVar2 = (long)((int)lVar2 + 1);
      if (*(short *)(puVar3 + 4) <= lVar2) break;
      iVar1 = puVar3[2];
    }
  }
  (*(code *)PTR_FUN_003c87e0)(puVar3[2]);
  (*(code *)PTR_FUN_003c87e0)(puVar3[3]);
  *puVar3 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002fd8c8 @ 002fd8c8 ====

/* Strings referenciadas:
     "RawData" */

void FUN_002fd8c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_002e31e0(param_2,0x407d38);
  FUN_002fcec0(param_1,uVar1);
  return;
}


// ==== FUN_002fd958 @ 002fd958 ====

void FUN_002fd958(void)

{
  CAccessWaysData_002fd780(1,0xffff);
  return;
}


// ==== FUN_002fd978 @ 002fd978 ====

void FUN_002fd978(void)

{
  CAccessWaysData_002fd780(0,0xffff);
  return;
}


// ==== FUN_002fd998 @ 002fd998 ====

void FUN_002fd998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x14,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x14,uVar1);
  }
  FUN_002feae0(auStack_40[0],param_1);
  return;
}


// ==== FUN_002fda40 @ 002fda40 ====

/* Strings referenciadas:
     "RawData" */

undefined8 FUN_002fda40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 8) < 1) {
    *(undefined4 *)(iVar7 + 0xc) = 0;
  }
  else {
    uStack_90 = 0;
    iVar5 = *(int *)(iVar7 + 8) << 2;
    uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar5,&uStack_90);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_90,iVar5,uVar3);
    }
    iVar6 = 0;
    iVar5 = *(int *)(iVar7 + 8);
    *(undefined4 *)(iVar7 + 0xc) = uStack_90;
    if (0 < iVar5) {
      do {
        iVar2 = iVar6 * 4;
        iVar1 = *(int *)(iVar7 + 0xc);
        auStack_8c[0] = 0;
        uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar5 << 2,
                           auStack_8c);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(auStack_8c[0],iVar5 << 2,uVar3);
        }
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar2 + iVar1) = auStack_8c[0];
        iVar5 = *(int *)(iVar7 + 8);
      } while (iVar6 < iVar5);
    }
    lVar4 = FUN_002e31e0(param_2,0x407ea0);
    if (lVar4 != 0) {
      uVar3 = FUN_002fdba8(param_1,lVar4);
      return uVar3;
    }
  }
  return 0;
}


// ==== FUN_002fdba8 @ 002fdba8 ====

/* Strings referenciadas:
     "Kynogon Astar Data" */

undefined4 FUN_002fdba8(int param_1,undefined8 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c0 [64];
  int aiStack_80 [4];
  
  piVar2 = *(int **)(DAT_003c9ed4 + 4);
  if ((piVar2 != (int *)0x0) &&
     (lVar4 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),param_2),
     lVar4 != 0)) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    uVar5 = strlen(0x407f08);
    lVar4 = (**(code **)(iVar3 + 0x24))((int)piVar2 + (int)sVar1,param_2,auStack_c0,uVar5);
    lVar6 = strlen(0x407f08);
    if (lVar4 == lVar6) {
      lVar6 = (**(code **)(*piVar2 + 0x24))
                        ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2,aiStack_80,4);
      if (lVar6 == 4) {
        auStack_c0[(int)lVar4] = 0;
        lVar4 = stricmp(0x407f08,auStack_c0);
        if (lVar4 == 0) {
          if (aiStack_80[0] == 1) {
            iVar3 = *(int *)(param_1 + 8);
            iVar8 = 0;
            if (iVar3 < 1) {
LAB_002fdd44:
              (**(code **)(*piVar2 + 0x2c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x28),param_2);
              return 1;
            }
            iVar7 = *piVar2;
            while( true ) {
              iVar3 = (**(code **)(iVar7 + 0x24))
                                ((int)piVar2 + (int)*(short *)(iVar7 + 0x20),param_2,
                                 *(undefined4 *)(iVar8 * 4 + *(int *)(param_1 + 0xc)),iVar3 << 2);
              iVar8 = iVar8 + 1;
              if (iVar3 != *(int *)(param_1 + 8) << 2) break;
              iVar3 = 0;
              if (0 < *(int *)(param_1 + 8)) {
                iVar7 = *(int *)(param_1 + 8);
                while (iVar3 = iVar3 + 1, iVar3 < iVar7) {
                  iVar7 = *(int *)(param_1 + 8);
                }
              }
              iVar3 = *(int *)(param_1 + 8);
              if (iVar3 <= iVar8) goto LAB_002fdd44;
              iVar7 = *piVar2;
            }
          }
          iVar3 = *piVar2;
        }
        else {
          iVar3 = *piVar2;
        }
      }
      else {
        iVar3 = *piVar2;
      }
    }
    else {
      iVar3 = *piVar2;
    }
    (**(code **)(iVar3 + 0x2c))((int)piVar2 + (int)*(short *)(iVar3 + 0x28),param_2);
  }
  return 0;
}


// ==== FUN_002fdd88 @ 002fdd88 ====

/* Strings referenciadas:
     "Kynogon Astar Data" */

undefined4 FUN_002fdd88(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_d0 [64];
  int aiStack_90 [4];
  
  lVar2 = (*DAT_0045127c)(param_2,0x407ea8);
  if (lVar2 != 0) {
    uVar3 = strlen(0x407f08);
    lVar4 = (*DAT_00451290)(auStack_d0,1,uVar3,lVar2);
    lVar5 = strlen(0x407f08);
    if ((lVar4 == lVar5) && (lVar5 = (*DAT_00451290)(aiStack_90,4,1,lVar2), lVar5 == 1)) {
      auStack_d0[(int)lVar4] = 0;
      lVar4 = stricmp(0x407f08,auStack_d0);
      if ((lVar4 == 0) && (aiStack_90[0] == 1)) {
        iVar1 = *(int *)(param_1 + 8);
        iVar7 = 0;
        if (iVar1 < 1) {
LAB_002fdf04:
          (*DAT_00451280)(lVar2);
          return 1;
        }
        iVar6 = *(int *)(param_1 + 0xc);
        while( true ) {
          iVar1 = (*DAT_00451290)(*(undefined4 *)(iVar7 * 4 + iVar6),4,iVar1,lVar2);
          iVar7 = iVar7 + 1;
          if (iVar1 != *(int *)(param_1 + 8)) break;
          iVar6 = 0;
          if (0 < iVar1) {
            iVar1 = *(int *)(param_1 + 8);
            while (iVar6 = iVar6 + 1, iVar6 < iVar1) {
              iVar1 = *(int *)(param_1 + 8);
            }
          }
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 <= iVar7) goto LAB_002fdf04;
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
    }
    (*DAT_00451280)(lVar2);
  }
  return 0;
}


// ==== FUN_002fdf40 @ 002fdf40 ====

undefined4 FUN_002fdf40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_100 [8];
  undefined4 uStack_f8;
  uint *puStack_f0;
  undefined4 uStack_dc;
  undefined *apuStack_d0 [4];
  undefined *apuStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  FUN_002fb558(auStack_100);
  FUN_002fb1c8(auStack_100,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  apuStack_d0[0] = &DAT_003ec930;
  apuStack_c0[0] = &DAT_003eca50;
  iStack_a8 = *(int *)(*(int *)(param_1 + 4) + 0x58);
  if (iStack_a8 == 0) {
    *(undefined ***)(*(int *)(param_1 + 4) + 0x58) = apuStack_d0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x54);
  if (iVar1 == 0) {
    *(undefined ***)(*(int *)(param_1 + 4) + 0x54) = apuStack_c0;
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
  }
  else {
    uVar9 = 0;
    if (*(int *)(*(int *)(param_1 + 4) + 0x14) != 0) {
      do {
        (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(uVar9 * 4 + *(int *)(param_1 + 0xc)));
        uVar9 = uVar9 + 1;
        iVar2 = *(int *)(param_1 + 0xc);
      } while (uVar9 < *(uint *)(*(int *)(param_1 + 4) + 0x14));
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2);
    iVar2 = *(int *)(param_1 + 4);
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    uStack_b0 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 << 2,
                       &uStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_b0,iVar2 << 2,uVar4);
    }
    iVar10 = 0;
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xc) = uStack_b0;
    if (0 < iVar2) {
      do {
        iVar3 = iVar10 * 4;
        iVar12 = *(int *)(param_1 + 0xc);
        uStack_ac = 0;
        uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar2 << 2,
                           &uStack_ac);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_ac,iVar2 << 2,uVar4);
        }
        iVar10 = iVar10 + 1;
        *(undefined4 *)(iVar3 + iVar12) = uStack_ac;
        iVar2 = *(int *)(param_1 + 8);
      } while (iVar10 < iVar2);
      iVar2 = *(int *)(param_1 + 8);
      goto LAB_002fe11c;
    }
  }
  iVar2 = *(int *)(param_1 + 8);
LAB_002fe11c:
  uVar9 = 0;
  if (0 < iVar2) {
    do {
      uVar11 = 0;
      uVar13 = uVar9 + 1;
      if (0 < iVar2) {
        iVar10 = uVar9 * 4;
        iVar12 = 0;
        do {
          if (uVar9 == uVar11) {
            *(uint *)(iVar10 + *(int *)(iVar10 + *(int *)(param_1 + 0xc))) = uVar9;
          }
          else {
            iVar2 = *(int *)(param_1 + 4);
            if (uVar9 < *(uint *)(iVar2 + 0xc)) {
              piVar6 = (int *)(uVar9 * 0x14 + *(int *)(iVar2 + 0x18));
              piVar8 = (int *)0x0;
              if (*piVar6 != -1) {
                piVar8 = piVar6;
              }
            }
            else {
              piVar8 = (int *)0x0;
            }
            if (uVar11 < *(uint *)(iVar2 + 0xc)) {
              piVar7 = (int *)(iVar12 + *(int *)(iVar2 + 0x18));
              piVar6 = (int *)0x0;
              if (*piVar7 != -1) {
                piVar6 = piVar7;
              }
            }
            else {
              piVar6 = (int *)0x0;
            }
            uStack_f8 = 0;
            uStack_dc = 0;
            lVar5 = FUN_002ee078(*(undefined4 *)(param_1 + 4),auStack_100,piVar8,piVar6,0);
            if (lVar5 == 0) {
              iVar2 = *(int *)(param_1 + 0xc);
              iVar3 = -1;
            }
            else {
              if (*puStack_f0 < *(uint *)(*(int *)(param_1 + 4) + 0x28)) {
                piVar8 = (int *)(*puStack_f0 * 8 + *(int *)(*(int *)(param_1 + 4) + 0x34));
                if (*piVar8 == -1) {
                  piVar8 = (int *)0x0;
                }
              }
              else {
                piVar8 = (int *)0x0;
              }
              iVar2 = *(int *)(param_1 + 0xc);
              iVar3 = *piVar8;
            }
            *(int *)(uVar11 * 4 + *(int *)(iVar10 + iVar2)) = iVar3;
            if (*(code **)(param_1 + 0x10) != (code *)0x0) {
              iVar2 = *(int *)(param_1 + 8);
              if (iVar2 * iVar2 == 0) {
                trap(7);
              }
              (**(code **)(param_1 + 0x10))((int)((uVar9 * iVar2 + uVar11) * 100) / (iVar2 * iVar2))
              ;
            }
          }
          iVar2 = *(int *)(param_1 + 8);
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 0x14;
        } while ((int)uVar11 < iVar2);
      }
      uVar9 = uVar13;
    } while ((int)uVar13 < iVar2);
  }
  *(int *)(*(int *)(param_1 + 4) + 0x58) = iStack_a8;
  *(int *)(*(int *)(param_1 + 4) + 0x54) = iVar1;
  apuStack_d0[0] = &DAT_003e0040;
  apuStack_c0[0] = &DAT_003e0040;
  FUN_002fb590(auStack_100,2);
  return 1;
}


// ==== FUN_002fe370 @ 002fe370 ====

/* Strings referenciadas:
     "Kynogon Astar Data" */

undefined4 FUN_002fe370(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  
  if ((0 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 0xc) != 0)) {
    lVar1 = (*DAT_0045127c)(param_2,0x407eb0);
    if (lVar1 == 0) {
      return 0;
    }
    uStack_80 = DAT_00407f1c;
    uVar2 = strlen(0x407f08);
    lVar3 = (*DAT_0045128c)(0x407f08,1,uVar2,lVar1);
    lVar4 = strlen(0x407f08);
    if (lVar3 != lVar4) {
      return 0;
    }
    lVar3 = (*DAT_0045128c)(&uStack_80,4,1,lVar1);
    if (lVar3 == 1) {
      iVar6 = *(int *)(param_1 + 8);
      puVar10 = (undefined4 *)0x0;
      if (0 < iVar6) {
        puStack_7c = (undefined4 *)0x0;
        uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6 << 2,
                           (uint)&uStack_80 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(puStack_7c,iVar6 << 2,uVar2);
        }
        iVar6 = *(int *)(param_1 + 8);
        puVar10 = puStack_7c;
      }
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          iVar8 = 0;
          iVar9 = iVar5 + 1;
          if (0 < iVar6) {
            puVar7 = puVar10;
            do {
              iVar6 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              *puVar7 = *(undefined4 *)(iVar6 + *(int *)(iVar5 * 4 + *(int *)(param_1 + 0xc)));
              puVar7 = puVar7 + 1;
            } while (iVar8 < *(int *)(param_1 + 8));
          }
          (*DAT_0045128c)(puVar10,4,*(undefined4 *)(param_1 + 8),lVar1);
          iVar6 = *(int *)(param_1 + 8);
          iVar5 = iVar9;
        } while (iVar9 < iVar6);
      }
      if (puVar10 != (undefined4 *)0x0) {
        (*(code *)PTR_FUN_003c87e0)(puVar10);
      }
      (*DAT_00451280)(lVar1);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002fe570 @ 002fe570 ====

/* WARNING: Removing unreachable block (ram,0x002fe888) */

undefined4 FUN_002fe570(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0x24) = 0;
  if (param_3 == param_2) {
    if (param_3 < *(uint *)(*(int *)(param_1 + 4) + 0xc)) {
      piVar5 = (int *)(param_3 * 0x14 + *(int *)(*(int *)(param_1 + 4) + 0x18));
      if (*piVar5 == -1) {
        piVar5 = (int *)0x0;
      }
    }
    else {
      piVar5 = (int *)0x0;
    }
    piVar6 = *(int **)(param_4 + 0x14);
    *piVar6 = piVar5[1];
    piVar6[1] = piVar5[2];
    piVar6[2] = piVar5[3];
    **(undefined4 **)(param_4 + 0x18) = 0;
    if (param_2 < *(uint *)(*(int *)(param_1 + 4) + 0xc)) {
      piVar5 = (int *)(param_2 * 0x14 + *(int *)(*(int *)(param_1 + 4) + 0x18));
      if (*piVar5 == -1) {
        piVar5 = (int *)0x0;
      }
    }
    else {
      piVar5 = (int *)0x0;
    }
    **(int **)(param_4 + 0xc) = *piVar5;
    *(undefined4 *)(param_4 + 8) = 1;
    return 1;
  }
  iVar10 = 0;
  piVar5 = (int *)0x0;
  if ((param_2 < *(uint *)(*(int *)(param_1 + 4) + 0xc)) &&
     (piVar5 = (int *)(param_2 * 0x14 + *(int *)(*(int *)(param_1 + 4) + 0x18)), *piVar5 == -1)) {
    piVar5 = (int *)0x0;
  }
  piVar6 = *(int **)(param_4 + 0x14);
  iVar8 = 0;
  *piVar6 = piVar5[1];
  piVar6[1] = piVar5[2];
  piVar6[2] = piVar5[3];
  **(undefined4 **)(param_4 + 0x18) = 0;
  if ((*(uint *)(*(int *)(param_1 + 4) + 0xc) <= param_2) ||
     (piVar5 = (int *)(param_2 * 0x14 + *(int *)(*(int *)(param_1 + 4) + 0x18)), *piVar5 == -1)) {
    piVar5 = (int *)0x0;
  }
  **(int **)(param_4 + 0xc) = *piVar5;
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  while( true ) {
    iVar8 = iVar8 + 4;
    iVar10 = iVar10 + 1;
    if (*(int *)(param_4 + 8) == *(int *)(param_4 + 0x1c)) {
      if (param_2 == param_3) {
        return 1;
      }
      do {
        uVar1 = *(uint *)(param_3 * 4 + *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)));
        if (uVar1 == 0xffffffff) {
          return 0;
        }
        if (uVar1 < *(uint *)(*(int *)(param_1 + 4) + 0x28)) {
          piVar6 = (int *)(uVar1 * 8 + *(int *)(*(int *)(param_1 + 4) + 0x34));
          piVar5 = (int *)0x0;
          if (*piVar6 != -1) {
            piVar5 = piVar6;
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
        iVar10 = piVar5[1];
        if (piVar5 == (int *)(iVar10 + 0x5c)) {
          puVar4 = (uint *)(iVar10 + 0x78);
        }
        else {
          puVar4 = (uint *)(*(int *)(iVar10 + 0x18) +
                           *(int *)(*piVar5 * 4 + *(int *)(iVar10 + 0x3c)) * 0x14);
        }
        param_2 = *puVar4;
        if (piVar5 == (int *)(iVar10 + 0x5c)) {
          fVar11 = *(float *)(iVar10 + 0x8c);
        }
        else if (*(int *)(iVar10 + 0x48) == 0) {
          iVar10 = FUN_0038f2b0(piVar5);
          iVar8 = FUN_0038f2f0(piVar5);
          fVar13 = *(float *)(iVar8 + 4) - *(float *)(iVar10 + 4);
          fVar11 = *(float *)(iVar8 + 0xc) - *(float *)(iVar10 + 0xc);
          fVar12 = *(float *)(iVar8 + 8) - *(float *)(iVar10 + 8);
          fVar11 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12);
        }
        else {
          fVar11 = *(float *)(*piVar5 * 4 + *(int *)(iVar10 + 0x48));
        }
        *(float *)(param_4 + 0x24) = *(float *)(param_4 + 0x24) + fVar11;
      } while (param_2 != param_3);
      return 1;
    }
    uVar1 = *(uint *)(param_3 * 4 + *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)));
    if (uVar1 == 0xffffffff) break;
    iVar2 = *(int *)(param_1 + 4);
    if (uVar1 < *(uint *)(iVar2 + 0x28)) {
      piVar6 = (int *)(uVar1 * 8 + *(int *)(iVar2 + 0x34));
      piVar5 = (int *)0x0;
      if (*piVar6 != -1) {
        piVar5 = piVar6;
      }
    }
    else {
      piVar5 = (int *)0x0;
    }
    iVar3 = piVar5[1];
    if (piVar5 == (int *)(iVar3 + 0x5c)) {
      puVar4 = (uint *)(iVar3 + 0x78);
    }
    else {
      puVar4 = (uint *)(*(int *)(iVar3 + 0x18) +
                       *(int *)(*piVar5 * 4 + *(int *)(iVar3 + 0x3c)) * 0x14);
    }
    param_2 = *puVar4;
    if (param_2 < *(uint *)(iVar2 + 0xc)) {
      piVar9 = (int *)(param_2 * 0x14 + *(int *)(iVar2 + 0x18));
      piVar6 = (int *)0x0;
      if (*piVar9 != -1) {
        piVar6 = piVar9;
      }
    }
    else {
      piVar6 = (int *)0x0;
    }
    piVar9 = (int *)(iVar10 * 0xc + *(int *)(param_4 + 0x14));
    *piVar9 = piVar6[1];
    piVar9[1] = piVar6[2];
    piVar9[2] = piVar6[3];
    piVar6 = (int *)0x0;
    if ((param_2 < *(uint *)(*(int *)(param_1 + 4) + 0xc)) &&
       (piVar6 = (int *)(param_2 * 0x14 + *(int *)(*(int *)(param_1 + 4) + 0x18)), *piVar6 == -1)) {
      piVar6 = (int *)0x0;
    }
    *(int *)(iVar8 + *(int *)(param_4 + 0xc)) = *piVar6;
    *(undefined4 *)(iVar8 + *(int *)(param_4 + 0x18)) = 0;
    *(uint *)(iVar8 + *(int *)(param_4 + 0x10) + -4) = uVar1;
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    iVar2 = piVar5[1];
    if (piVar5 == (int *)(iVar2 + 0x5c)) {
      uVar7 = *(undefined4 *)(iVar2 + 0x94);
    }
    else if (*(int *)(iVar2 + 0x50) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*piVar5 * 4 + *(int *)(iVar2 + 0x50));
    }
    *(undefined4 *)(iVar8 + *(int *)(param_4 + 0x18) + -4) = uVar7;
    if (param_2 == param_3) {
      return 1;
    }
  }
  return 0;
}


// ==== CAstarData_002fea88 @ 002fea88 ====

/* Strings referenciadas:
     "CAstarData" */

void CAstarData_002fea88(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00454898 = &DAT_003ec200;
    }
    else {
      FUN_002f35b0(0x454788,0x407eb8,0x2fd998);
    }
  }
  return;
}


// ==== FUN_002feae0 @ 002feae0 ====

undefined8 FUN_002feae0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  puVar2[1] = param_2;
  *puVar2 = &DAT_003ef7b0;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  puVar2[3] = 0;
  puVar2[2] = uVar1;
  puVar2[4] = 0;
  return param_1;
}


// ==== FUN_002feb08 @ 002feb08 ====

void FUN_002feb08(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003ef7b0;
  if (puVar4[3] != 0) {
    iVar3 = 0;
    if (0 < (int)puVar4[2]) {
      iVar2 = puVar4[3];
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        (*(code *)PTR_FUN_003c87e0)(*(undefined4 *)(iVar1 + iVar2));
        if ((int)puVar4[2] <= iVar3) break;
        iVar2 = puVar4[3];
      }
    }
    (*(code *)PTR_FUN_003c87e0)(puVar4[3]);
  }
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002febd0 @ 002febd0 ====

void FUN_002febd0(void)

{
  CAstarData_002fea88(1,0xffff);
  return;
}


// ==== FUN_002febf0 @ 002febf0 ====

void FUN_002febf0(void)

{
  CAstarData_002fea88(0,0xffff);
  return;
}


// ==== FUN_002fec10 @ 002fec10 ====

void FUN_002fec10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1b8,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x1b8,uVar1);
  }
  FUN_002fecb8(auStack_40[0],param_1);
  return;
}


// ==== FUN_002fecb8 @ 002fecb8 ====

undefined8 FUN_002fecb8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piStack_70;
  undefined4 uStack_6c;
  
  FUN_002e4f58();
  puVar5 = (undefined4 *)param_1;
  *puVar5 = &DAT_003efe10;
  FUN_002fb558(puVar5 + 0x1b);
  *(undefined1 *)(puVar5 + 0x2c) = 1;
  puVar5[0x50] = 0xffffffff;
  *(undefined1 *)((int)puVar5 + 0x1b5) = 0;
  *(undefined1 *)((int)puVar5 + 0xb3) = 0;
  puVar5[0x5f] = 0;
  puVar5[0x60] = 0;
  *(undefined1 *)((int)puVar5 + 0xb2) = 0;
  *(undefined1 *)((int)puVar5 + 0xb1) = 0;
  puVar5[0x4f] = 0;
  puVar5[0x4e] = 0;
  puVar5[0x37] = DAT_004514f8;
  puVar5[0x38] = DAT_004514fc;
  puVar5[0x39] = DAT_00451500;
  puVar5[0x34] = DAT_004514f8;
  puVar5[0x35] = DAT_004514fc;
  puVar5[0x36] = DAT_00451500;
  puVar5[0x3a] = DAT_004514f8;
  puVar5[0x3b] = DAT_004514fc;
  puVar5[0x3c] = DAT_00451500;
  puVar5[0x51] = 0;
  puVar5[0x52] = DAT_004514f8;
  puVar5[0x53] = DAT_004514fc;
  puVar5[0x54] = DAT_00451500;
  iVar1 = puVar5[4];
  puVar5[0x55] = 0;
  puVar5[0x56] = 0;
  if (iVar1 == 0) {
    puVar5[0x6b] = 0;
  }
  else {
    piStack_70 = (int *)0x0;
    iVar6 = iVar1 * 0x14 + 0x10;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&piStack_70);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_70,iVar6,uVar2);
    }
    iVar6 = iVar1 + -1;
    *piStack_70 = iVar1;
    piVar3 = piStack_70 + 4;
    if (iVar1 != 0) {
      do {
        *piVar3 = (int)&DAT_003efee8;
        iVar6 = iVar6 + -1;
        piVar3[1] = 0;
        piVar3[2] = 0x3a03126f;
        piVar3[3] = 0;
        piVar3[4] = 0x3e4ccccd;
        piVar3 = piVar3 + 5;
      } while (iVar6 != -1);
    }
    puVar5[0x6b] = piStack_70 + 4;
  }
  puVar5[7] = 0;
  iVar1 = FUN_00390168();
  iVar1 = *(int *)(iVar1 + 0x400);
  puVar5[8] = iVar1;
  if (iVar1 == 0) {
    puVar5[6] = 0;
  }
  else {
    uStack_6c = 0;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar1 << 2,
                       (uint)&piStack_70 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_6c,iVar1 << 2,uVar2);
    }
    uVar4 = 0;
    puVar5[6] = uStack_6c;
    if (puVar5[8] != 0) {
      iVar1 = puVar5[6];
      while( true ) {
        iVar6 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar6 + iVar1) = 0;
        if ((uint)puVar5[8] <= uVar4) break;
        iVar1 = puVar5[6];
      }
    }
  }
  puVar5[0x67] = DAT_004514f8;
  puVar5[0x68] = DAT_004514fc;
  puVar5[0x69] = DAT_00451500;
  puVar5[0x6a] = 0xbf800000;
  puVar5[0x6c] = 0;
  return param_1;
}


// ==== FUN_002fefb0 @ 002fefb0 ====

void FUN_002fefb0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar2 = DAT_003c9ed4;
  puVar7 = (undefined4 *)param_1;
  *puVar7 = &DAT_003efe10;
  lVar3 = FUN_002ec058(uVar2,0x4525b8);
  if (lVar3 != 0) {
    FUN_002f5a40(lVar3,0x3053f0,param_1,*(undefined4 *)(puVar7[1] + 0x14));
  }
  piVar1 = (int *)puVar7[0x6b];
  if (piVar1 != (int *)0x0) {
    piVar5 = piVar1 + piVar1[-4] * 5;
    if (piVar1 != piVar5) {
      do {
        piVar5 = piVar5 + -5;
        (**(code **)(*piVar5 + 0xc))((int)piVar5 + (int)*(short *)(*piVar5 + 8),0);
      } while ((int *)puVar7[0x6b] != piVar5);
    }
    (*(code *)PTR_FUN_003c87e0)(puVar7[0x6b] + -0x10);
  }
  iVar4 = puVar7[6];
  if (iVar4 == 0) {
    piVar1 = (int *)puVar7[0x6c];
  }
  else {
    uVar6 = 0;
    if (puVar7[8] != 0) {
      do {
        piVar1 = *(int **)(uVar6 * 4 + puVar7[6]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
        }
        uVar6 = uVar6 + 1;
        iVar4 = puVar7[6];
      } while (uVar6 < (uint)puVar7[8]);
    }
    (*(code *)PTR_FUN_003c87e0)(iVar4);
    piVar1 = (int *)puVar7[0x6c];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  FUN_002fb590(puVar7 + 0x1b,2);
  FUN_002e5088(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_002ff250 @ 002ff250 ====

/* Strings referenciadas:
     "DisableDA"
     "DynamicAvoidanceClass"
     "CPathFinder::FindNextMove::CheckAccident"
     "CPathFinder::FindNextMove::ASTAR"
     "CPathFinder::FindNextMove::NewSubGoal"
     "CPathFinder::FindNextMove::Goto" */

undefined4 FUN_002ff250(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (param_2 != 0) {
    piVar6 = (int *)param_1;
    piVar6[0x26] = (int)FUN_00305340;
    piVar6[0x27] = (int)&LAB_00305188;
    piVar6[0x28] = (int)FUN_00302198;
    piVar6[0x29] = (int)&LAB_00305148;
    piVar6[0x25] = (int)FUN_00305010;
    piVar6[0x2b] = (int)FUN_00301a30;
    piVar6[0x2a] = (int)FUN_00301a30;
    (**(code **)(*piVar6 + 0x54))((int)piVar6 + (int)*(short *)(*piVar6 + 0x50),0x451890);
    (**(code **)(*piVar6 + 0x7c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x78),0x451e08);
    iVar2 = DAT_003c9ed4;
    piVar6[9] = (int)(*(float *)(DAT_003c9ed4 + 0xc) * 0.5);
    iVar8 = 0;
    piVar6[10] = (int)(*(float *)(iVar2 + 0xc) * 0.75);
    piVar6[0xb] = (int)(*(float *)(iVar2 + 0xc) * 0.75);
    piVar6[0xc] = *(int *)(iVar2 + 0xc);
    piVar6[0xd] = (int)(*(float *)(iVar2 + 0xc) * 3.0);
    piVar6[0xe] = *(int *)(iVar2 + 0xc);
    fVar7 = *(float *)(iVar2 + 0xc);
    piVar6[0x11] = 0x43b38000;
    piVar6[0x12] = 0x43b40000;
    piVar6[0x13] = 1;
    piVar6[0x10] = (int)(fVar7 * 100.0);
    fVar7 = *(float *)(iVar2 + 0xc);
    piVar6[0x16] = 0x3f800000;
    piVar6[0x14] = (int)(fVar7 * 0.5);
    if (iVar2 != 0) {
      iVar8 = *(int *)(iVar2 + 0xc);
    }
    *(undefined1 *)(piVar6 + 0x2d) = 1;
    *(undefined1 *)(piVar6 + 0x18) = 0;
    *(undefined1 *)((int)piVar6 + 0x61) = 0;
    bVar1 = true;
    *(undefined1 *)((int)piVar6 + 0x62) = 0;
    iVar2 = DAT_003c9ed4;
    piVar6[0x19] = 0;
    piVar6[0x15] = iVar8;
    piVar6[0x17] = 0x3e4ccccd;
    iVar2 = FUN_002ec058(iVar2,0x450fd8);
    piVar6[0x61] = iVar2;
    lVar3 = FUN_002e31e0(param_2,0x407fc0);
    if ((lVar3 != 0) && (lVar3 = FUN_002e3918(lVar3), lVar3 != 0)) {
      lVar4 = stricmp(lVar3,0x407fd0);
      if (lVar4 == 0) {
        bVar1 = false;
      }
      else {
        stricmp(lVar3,0x407fd8);
      }
    }
    if (bVar1) {
      lVar3 = FUN_002e31e0(param_2,0x407fe0);
      if (lVar3 == 0) {
        uStack_68 = 0;
        uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xfc,
                           (uint)&uStack_70 | 8);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_68,0xfc,uVar5);
        }
        iVar2 = FUN_00306848(uStack_68,param_1);
        piVar6[0x6c] = iVar2;
      }
      else {
        lVar3 = FUN_002e3918(lVar3);
        if (lVar3 == 0) {
          uStack_70 = 0;
          uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                            ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xfc);
          if (DAT_003c87ec != (code *)0x0) {
            (*DAT_003c87ec)(uStack_70,0xfc,uVar5);
          }
          iVar2 = FUN_00306848(uStack_70,param_1);
          piVar6[0x6c] = iVar2;
        }
        else {
          lVar3 = FUN_00393978(lVar3);
          if (lVar3 == 0) {
            uStack_6c = 0;
            uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                              ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xfc,
                               (uint)&uStack_70 | 4);
            if (DAT_003c87ec != (code *)0x0) {
              (*DAT_003c87ec)(uStack_6c,0xfc,uVar5);
            }
            iVar2 = FUN_00306848(uStack_6c,param_1);
            piVar6[0x6c] = iVar2;
          }
          else {
            iVar2 = (**(code **)((int)lVar3 + 4))(param_1);
            piVar6[0x6c] = iVar2;
          }
        }
      }
    }
    lVar3 = FUN_002e74e0(param_1,param_2);
    if (lVar3 != 0) {
      iVar2 = FUN_002e4ce0(*(undefined4 *)(piVar6[1] + 0x14),0x4504e0);
      piVar6[0x57] = iVar2;
      iVar2 = FUN_002e4ce0(*(undefined4 *)(piVar6[1] + 0x14),0x450940);
      piVar6[0x58] = iVar2;
      iVar2 = FUN_002e4ce0(*(undefined4 *)(piVar6[1] + 0x14),0x44fc20);
      piVar6[0x59] = iVar2;
      iVar2 = FUN_002dfe08(piVar6[2],0x44f7c0);
      piVar6[0x5a] = iVar2;
      iVar2 = FUN_002dfe08(piVar6[2],0x44fb08);
      piVar6[0x5b] = iVar2;
      iVar2 = FUN_002dfe08(piVar6[2],0x44f478);
      piVar6[0x5c] = iVar2;
      iVar2 = FUN_002dfe08(piVar6[2],0x44f9f0);
      piVar6[0x5d] = iVar2;
      iVar8 = FUN_002dfe08(piVar6[2],0x450da0);
      iVar2 = piVar6[0x5a];
      piVar6[0x5e] = iVar8;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined1 *)(iVar2 + 4) = 1;
      }
      iVar2 = piVar6[0x5b];
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined1 *)(iVar2 + 4) = 1;
      }
      iVar2 = piVar6[0x5c];
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined1 *)(iVar2 + 4) = 1;
      }
      iVar2 = piVar6[0x5d];
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined1 *)(iVar2 + 4) = 1;
      }
      iVar2 = piVar6[0x5e];
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined1 *)(iVar2 + 4) = 1;
      }
      uVar5 = FUN_002e91c0();
      iVar2 = FUN_002e9438(uVar5,0x407ff8);
      piVar6[99] = iVar2;
      iVar2 = FUN_002e93b8(uVar5,0x408028);
      piVar6[0x62] = iVar2;
      iVar2 = FUN_002e9438(uVar5,0x408050);
      piVar6[100] = iVar2;
      iVar2 = FUN_002e9438(uVar5,0x408078);
      piVar6[0x65] = iVar2;
      lVar3 = (**(code **)(*piVar6 + 0x94))((int)piVar6 + (int)*(short *)(*piVar6 + 0x90));
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = (**(code **)(*piVar6 + 0x9c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x98));
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = (**(code **)(*piVar6 + 0xa4))((int)piVar6 + (int)*(short *)(*piVar6 + 0xa0));
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = (**(code **)(*piVar6 + 0xac))((int)piVar6 + (int)*(short *)(*piVar6 + 0xa8));
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = (**(code **)(*piVar6 + 0xb4))((int)piVar6 + (int)*(short *)(*piVar6 + 0xb0));
      if (lVar3 == 0) {
        return 0;
      }
      if (piVar6[0x22] == 0) {
        FUN_002fb1c8(piVar6 + 0x1b,0x32);
      }
      lVar3 = FUN_002ec058(DAT_003c9ed4,0x4525b8);
      if (lVar3 != 0) {
        FUN_002f5348(lVar3,0x3053f0,param_1,*(undefined4 *)(piVar6[1] + 0x14));
      }
      return 1;
    }
  }
  return 0;
}


// ==== FUN_002ff890 @ 002ff890 ====

/* Strings referenciadas:
     "DynamicAvoidanceClass"
     "Graph"
     "DistMinNewGoal"
     "DistGoal"
     "DistStop"
     "DistGoalSlowDown"
     "DistSlowDown"
     "MaxDeltaHeight"
     "DistSubgoalMax"
     "MaxDeltaAngle"
     "MaxYawSpeed"
     "NbMaxSubgoal"
     ... */

undefined8 FUN_002ff890(int *param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  
  if (param_2 == 0) {
LAB_003001d8:
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x408098);
    if (lVar5 == 0) {
      uVar4 = FUN_002e3918(param_2);
      uVar4 = (**(code **)(*param_1 + 0x6c))((int)param_1 + (int)*(short *)(*param_1 + 0x68),uVar4);
      return uVar4;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4080a0);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[9] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4080b0);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[10] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4080c0);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[0xb] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4080d0);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[0xd] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4080e8);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[0xc] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x4080f8);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[0xe] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x408108);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      param_1[0x10] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
      return 1;
    }
    uVar4 = FUN_002e3920(param_2);
    lVar5 = stricmp(uVar4,0x408118);
    if (lVar5 == 0) {
      lVar5 = FUN_002e3918(param_2);
      if (lVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_0035e730(lVar5);
      fVar7 = (float)FUN_00291c68(uVar4);
      if (360.0 < fVar7) {
        fVar7 = fVar7 - 360.0;
      }
      else if (fVar7 < 0.0) {
        fVar7 = fVar7 + 360.0;
      }
      param_1[0x11] = (int)fVar7;
    }
    else {
      uVar4 = FUN_002e3920(param_2);
      lVar5 = stricmp(uVar4,0x408128);
      if (lVar5 == 0) {
        lVar5 = FUN_002e3918(param_2);
        if (lVar5 == 0) {
          return 0;
        }
        uVar4 = FUN_0035e730(lVar5);
        iVar8 = FUN_00291c68(uVar4);
        param_1[0x12] = iVar8;
      }
      else {
        uVar4 = FUN_002e3920(param_2);
        lVar5 = stricmp(uVar4,0x408138);
        if (lVar5 == 0) {
          lVar5 = FUN_002e3918(param_2);
          if (lVar5 == 0) {
            return 0;
          }
          iVar8 = atoi(lVar5);
          param_1[0x13] = iVar8;
        }
        else {
          uVar4 = FUN_002e3920(param_2);
          lVar5 = stricmp(uVar4,0x408148);
          if (lVar5 == 0) {
            lVar5 = FUN_002e3918(param_2);
            if (lVar5 == 0) {
              return 0;
            }
            uVar4 = FUN_0035e730(lVar5);
            fVar7 = (float)FUN_00291c68(uVar4);
            param_1[0x14] = (int)(fVar7 * *(float *)(DAT_003c9ed4 + 0xc));
            return 1;
          }
          uVar4 = FUN_002e3920(param_2);
          lVar5 = stricmp(uVar4,0x408158);
          if (lVar5 == 0) {
            lVar5 = FUN_002e3918(param_2);
            if (lVar5 == 0) {
              return 0;
            }
            uVar4 = FUN_0035e730(lVar5);
            iVar8 = FUN_00291c68(uVar4);
            param_1[0x16] = iVar8;
          }
          else {
            uVar4 = FUN_002e3920(param_2);
            lVar5 = stricmp(uVar4,0x408178);
            if (lVar5 == 0) {
              lVar5 = FUN_002e3918(param_2);
              if (lVar5 == 0) {
                return 0;
              }
              fVar7 = 0.0;
              uVar4 = FUN_0035e730(lVar5);
              if (DAT_003c9ed4 != 0) {
                fVar7 = *(float *)(DAT_003c9ed4 + 0xc);
              }
              fVar9 = (float)FUN_00291c68(uVar4);
              param_1[0x15] = (int)(fVar9 * fVar7);
              return 1;
            }
            uVar4 = FUN_002e3920(param_2);
            lVar5 = stricmp(uVar4,0x408188);
            if (lVar5 == 0) {
              lVar5 = FUN_002e3918(param_2);
              if (lVar5 == 0) {
                return 0;
              }
              uVar4 = FUN_0035e730(lVar5);
              iVar8 = FUN_00291c68(uVar4);
              uVar6 = 0;
              param_1[0x17] = iVar8;
              if (param_1[4] != 0) {
                iVar8 = 0;
                do {
                  uVar6 = uVar6 + 1;
                  *(int *)(iVar8 + param_1[0x6b] + 0x10) = param_1[0x17];
                  iVar8 = iVar8 + 0x14;
                } while (uVar6 < (uint)param_1[4]);
                return 1;
              }
            }
            else {
              uVar4 = FUN_002e3920(param_2);
              lVar5 = stricmp(uVar4,0x408198);
              if (lVar5 == 0) {
                lVar5 = FUN_002e3918(param_2);
                if (lVar5 == 0) {
                  return 0;
                }
                iVar8 = atoi(lVar5);
                *(bool *)(param_1 + 0x18) = (float)iVar8 != 0.0;
              }
              else {
                uVar4 = FUN_002e3920(param_2);
                lVar5 = stricmp(uVar4,0x4081a8);
                if (lVar5 == 0) {
                  uVar4 = FUN_002e3918(param_2);
                  lVar5 = FUN_00393a18(uVar4);
                  if (lVar5 == 0) {
                    return 0;
                  }
                  param_1[0x25] = (int)lVar5;
                }
                else {
                  uVar4 = FUN_002e3920(param_2);
                  lVar5 = stricmp(uVar4,0x4081b8);
                  if (lVar5 == 0) {
                    uVar4 = FUN_002e3918(param_2);
                    lVar5 = FUN_00393ac0(uVar4);
                    if (lVar5 == 0) {
                      return 0;
                    }
                    param_1[0x26] = (int)lVar5;
                  }
                  else {
                    uVar4 = FUN_002e3920(param_2);
                    lVar5 = stricmp(uVar4,0x4081c8);
                    if (lVar5 == 0) {
                      uVar4 = FUN_002e3918(param_2);
                      lVar5 = FUN_00393b68(uVar4);
                      if (lVar5 == 0) {
                        return 0;
                      }
                      param_1[0x29] = (int)lVar5;
                    }
                    else {
                      uVar4 = FUN_002e3920(param_2);
                      lVar5 = stricmp(uVar4,0x4081d8);
                      if (lVar5 == 0) {
                        uVar4 = FUN_002e3918(param_2);
                        lVar5 = FUN_00393c10(uVar4);
                        if (lVar5 == 0) {
                          return 0;
                        }
                        param_1[0x2a] = (int)lVar5;
                      }
                      else {
                        uVar4 = FUN_002e3920(param_2);
                        lVar5 = stricmp(uVar4,0x4081e8);
                        if (lVar5 == 0) {
                          uVar4 = FUN_002e3918(param_2);
                          lVar5 = FUN_00393c10(uVar4);
                          if (lVar5 == 0) {
                            return 0;
                          }
                          param_1[0x2b] = (int)lVar5;
                        }
                        else {
                          uVar4 = FUN_002e3920(param_2);
                          lVar5 = stricmp(uVar4,0x4081f8);
                          if (lVar5 == 0) {
                            uVar4 = FUN_002e3918(param_2);
                            lVar5 = FUN_00393a18(uVar4);
                            if (lVar5 == 0) {
                              return 0;
                            }
                            param_1[0x28] = (int)lVar5;
                          }
                          else {
                            uVar4 = FUN_002e3920(param_2);
                            lVar5 = stricmp(uVar4,0x408208);
                            if (lVar5 == 0) {
                              uVar4 = FUN_002e3918(param_2);
                              lVar5 = FUN_00393b68(uVar4);
                              if (lVar5 == 0) {
                                return 0;
                              }
                              param_1[0x27] = (int)lVar5;
                            }
                            else {
                              uVar4 = FUN_002e3920(param_2);
                              lVar5 = stricmp(uVar4,0x408210);
                              if (lVar5 == 0) {
                                uVar4 = FUN_002e3918(param_2);
                                uVar4 = atoi(uVar4);
                                FUN_002fb1c8(param_1 + 0x1b,uVar4);
                                return 1;
                              }
                              uVar4 = FUN_002e3920(param_2);
                              lVar5 = stricmp(uVar4,0x408220);
                              if (lVar5 == 0) {
                                uVar4 = FUN_002e3918(param_2);
                                uVar2 = atoi(uVar4);
                                if (uVar2 < 3) {
                                  *(bool *)((int)param_1 + 0x62) = uVar2 != 0;
                                  return 1;
                                }
                                goto LAB_003001d8;
                              }
                              uVar4 = FUN_002e3920(param_2);
                              lVar5 = stricmp(uVar4,0x408230);
                              if (lVar5 == 0) {
                                uVar4 = FUN_002e3918(param_2);
                                lVar5 = stricmp(uVar4,0x408248);
                                if (((lVar5 == 0) || (lVar5 = stricmp(uVar4,0x408250), lVar5 == 0))
                                   || (lVar5 = stricmp(uVar4,0x407fd0), lVar5 == 0)) {
                                  *(undefined1 *)((int)param_1 + 0x61) = 1;
                                }
                                else {
                                  lVar5 = stricmp(uVar4,0x408258);
                                  if (((lVar5 != 0) && (lVar5 = stricmp(uVar4,0x408260), lVar5 != 0)
                                      ) && (lVar5 = stricmp(uVar4,0x407fd8), lVar5 != 0)) {
                                    return 0;
                                  }
                                  *(undefined1 *)((int)param_1 + 0x61) = 0;
                                }
                              }
                              else {
                                uVar4 = FUN_002e3920(param_2);
                                lVar5 = stricmp(uVar4,0x407fe0);
                                if (lVar5 == 0) {
                                  return 1;
                                }
                                piVar1 = (int *)param_1[0x6c];
                                if ((piVar1 != (int *)0x0) &&
                                   (lVar5 = (**(code **)(*piVar1 + 0x24))
                                                      ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20)
                                                       ,param_2), lVar5 == 1)) {
                                  return 1;
                                }
                                if (param_2 == 0) {
                                  return 0;
                                }
                                lVar5 = FUN_002e3920(param_2);
                                if (lVar5 == 0) {
                                  return 0;
                                }
                                pcVar3 = (char *)FUN_002e3920(param_2);
                                if (*pcVar3 != '_') {
                                  return 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


// ==== FUN_00300278 @ 00300278 ====

int * FUN_00300278(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  
  iVar5 = (int)param_1;
  piVar4 = (int *)param_2;
  if (((*(int *)(iVar5 + 0x184) == 0) || (*(int *)(iVar5 + 0x68) == -1)) ||
     (lVar2 = (**(code **)(*piVar4 + 0x1c))
                        ((int)piVar4 + (int)*(short *)(*piVar4 + 0x18),&uStack_40,
                         (uint)&uStack_40 | 4), lVar2 == 0)) {
LAB_00300370:
    uVar3 = (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10));
    piVar4 = (int *)(**(code **)(iVar5 + 0x98))(param_1,uVar3,0,0);
  }
  else {
    if (iStack_3c == *(int *)(iVar5 + 0x68)) {
      if (uStack_40 < *(uint *)(*(int *)(iVar5 + 100) + 0xc)) {
        piVar4 = (int *)(uStack_40 * 0x14 + *(int *)(*(int *)(iVar5 + 100) + 0x18));
        if (*piVar4 != -1) {
          return piVar4;
        }
        return (int *)0x0;
      }
    }
    else {
      iVar1 = **(int **)(iVar5 + 0x184);
      lVar2 = (**(code **)(iVar1 + 0x44))
                        ((int)*(int **)(iVar5 + 0x184) + (int)*(short *)(iVar1 + 0x40),param_2,
                         *(int *)(iVar5 + 0x68),(uint)&uStack_40 | 8);
      if (lVar2 == 0) goto LAB_00300370;
      if (uStack_38 < *(uint *)(*(int *)(iVar5 + 100) + 0xc)) {
        piVar4 = (int *)(uStack_38 * 0x14 + *(int *)(*(int *)(iVar5 + 100) + 0x18));
        if (*piVar4 != -1) {
          return piVar4;
        }
        return (int *)0x0;
      }
    }
    piVar4 = (int *)0x0;
  }
  return piVar4;
}


// ==== FUN_003003b0 @ 003003b0 ====

/* WARNING: Removing unreachable block (ram,0x00300600) */

undefined4 FUN_003003b0(int param_1,float *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  if (*(char *)(param_1 + 0xb2) != '\0') {
    iVar5 = *(int *)(param_1 + 0x170);
    if ((iVar5 == 0) && (iVar5 = *(int *)(param_1 + 0x174), iVar5 == 0)) {
      iVar5 = *(int *)(param_1 + 0x168);
    }
    else {
      *(undefined1 *)(iVar5 + 4) = 1;
      iVar5 = *(int *)(param_1 + 0x168);
    }
    if ((iVar5 == 0) && (iVar5 = *(int *)(param_1 + 0x16c), iVar5 == 0)) {
      iVar5 = *(int *)(param_1 + 0x178);
    }
    else {
      *(undefined1 *)(iVar5 + 4) = 1;
      iVar5 = *(int *)(param_1 + 0x178);
    }
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 4) = 1;
    }
  }
  fStack_70 = param_2[1];
  bVar2 = false;
  if (fStack_70 == DAT_004514f8) {
    if (param_2[2] == DAT_004514fc) {
      if (param_2[3] != DAT_00451500) goto LAB_0030047c;
    }
    else {
      bVar2 = true;
    }
  }
  else {
LAB_0030047c:
    bVar2 = true;
  }
  if (bVar2) {
    fVar9 = *(float *)(param_1 + 0x48) * DAT_003c95ac;
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_002e9f40(&fStack_70);
      fStack_6c = fStack_6c - *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x40);
      if (180.0 < fStack_6c) {
        fStack_6c = fStack_6c - 360.0;
LAB_0030050c:
        cVar1 = *(char *)(param_1 + 0x62);
      }
      else {
        if (fStack_6c < -180.0) {
          fStack_6c = fStack_6c + 360.0;
          goto LAB_0030050c;
        }
        cVar1 = *(char *)(param_1 + 0x62);
      }
      fVar6 = fStack_6c;
      if (((cVar1 != '\0') && (fVar6 = -fVar9, fVar6 <= fStack_6c)) &&
         (fVar6 = fStack_6c, fVar9 < fStack_6c)) {
        fVar6 = fVar9;
      }
      if (ABS(fVar6) < *(float *)(param_1 + 0x44)) {
        fVar6 = fVar6 / *(float *)(param_1 + 0x44);
        iVar5 = *(int *)(param_1 + 0x16c);
        *(undefined1 *)(iVar5 + 4) = 1;
        goto LAB_0030092c;
      }
      if (0.0 < fVar6) {
        uVar8 = 0x3f800000;
        iVar5 = *(int *)(param_1 + 0x16c);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x16c);
        uVar8 = 0xbf800000;
      }
      *(undefined1 *)(iVar5 + 4) = 1;
      *(undefined4 *)(iVar5 + 8) = uVar8;
      goto LAB_00300930;
    }
    if (*(int *)(param_1 + 0x168) != 0) {
      fStack_68 = param_2[3];
      fStack_6c = 0.0;
      fVar6 = (float)FUN_00389140(&fStack_70);
      fVar6 = SQRT(fVar6);
      fStack_70 = fStack_70 / fVar6;
      fStack_6c = fStack_6c / fVar6;
      fStack_68 = fStack_68 / fVar6;
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x14);
      fVar6 = fStack_70 * *(float *)(iVar5 + 0x48) + fStack_6c * *(float *)(iVar5 + 0x4c) +
              fStack_68 * *(float *)(iVar5 + 0x50);
      fStack_60 = fStack_70;
      fStack_5c = fStack_6c;
      fStack_58 = fStack_68;
      if (1.0 <= fVar6) {
        fVar6 = 0.0;
        iVar5 = *(int *)(param_1 + 4);
      }
      else if (fVar6 <= -1.0) {
        fVar6 = 3.1415927;
        iVar5 = *(int *)(param_1 + 4);
      }
      else {
        fVar6 = (float)acosf();
        iVar5 = *(int *)(param_1 + 4);
      }
      if (0.0 < *(float *)(*(int *)(iVar5 + 0x14) + 0x50) * fStack_70 -
                *(float *)(*(int *)(iVar5 + 0x14) + 0x48) * fStack_68) {
        cVar1 = *(char *)(param_1 + 0x62);
      }
      else {
        fVar6 = -fVar6;
        cVar1 = *(char *)(param_1 + 0x62);
      }
      fVar6 = fVar6 / 0.017453292;
      if (cVar1 == '\0') {
        iVar3 = *(int *)(iVar5 + 0x14);
        fVar7 = fVar6;
      }
      else {
        fVar7 = -fVar9;
        if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar9 < fVar6)) {
          fVar7 = fVar9;
        }
        iVar3 = *(int *)(iVar5 + 0x14);
      }
      fVar9 = *(float *)(iVar3 + 0x40) + fVar7;
      if (180.0 < fVar9) {
        fVar9 = fVar9 - 360.0;
LAB_003007cc:
        cVar1 = *(char *)(param_2 + 7);
      }
      else {
        if (fVar9 < -180.0) {
          fVar9 = fVar9 + 360.0;
          goto LAB_003007cc;
        }
        cVar1 = *(char *)(param_2 + 7);
      }
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0x61) == '\0') {
          fVar6 = *(float *)(param_1 + 0x44);
          goto LAB_0030086c;
        }
        lVar4 = FUN_002dfe08(*(undefined4 *)(iVar5 + 0x18),0x450c88);
        if (lVar4 != 0) {
          fVar6 = param_2[5];
          if (180.0 < fVar6) {
            fVar6 = fVar6 - 360.0;
          }
          else if (fVar6 < -180.0) {
            fVar6 = fVar6 + 360.0;
          }
          *(float *)((int)lVar4 + 0xc) = fVar6;
          *(undefined1 *)((int)lVar4 + 4) = 1;
          goto LAB_0030087c;
        }
        iVar5 = *(int *)(param_1 + 0x168);
LAB_00300880:
        *(undefined1 *)(iVar5 + 4) = 1;
        *(float *)(iVar5 + 8) = fVar9;
        goto LAB_00300930;
      }
      fVar6 = *(float *)(param_1 + 0x44);
LAB_0030086c:
      if (ABS(fVar7) < fVar6) {
LAB_0030087c:
        iVar5 = *(int *)(param_1 + 0x168);
        goto LAB_00300880;
      }
      lVar4 = FUN_002e4ce0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0x450710);
      if (lVar4 == 0) {
        *param_2 = *param_2 * (*(float *)(param_1 + 0x44) / ABS(fVar7));
      }
      else {
        *param_2 = *(float *)(*(int *)(param_1 + 0x15c) + 4) * 0.1;
      }
      if (0.0 < fVar7) {
        fVar9 = *(float *)(param_1 + 0x44);
        iVar5 = *(int *)(param_1 + 0x168);
        fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x40);
        *(undefined1 *)(iVar5 + 4) = 1;
        fVar6 = fVar6 + fVar9;
      }
      else {
        fVar9 = *(float *)(param_1 + 0x44);
        iVar5 = *(int *)(param_1 + 0x168);
        fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x40);
        *(undefined1 *)(iVar5 + 4) = 1;
        fVar6 = fVar6 - fVar9;
      }
LAB_0030092c:
      *(float *)(iVar5 + 8) = fVar6;
      goto LAB_00300930;
    }
LAB_003009a4:
    uVar8 = 0;
  }
  else {
LAB_00300930:
    iVar5 = *(int *)(param_1 + 0x170);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x174);
      if (iVar5 == 0) goto LAB_003009a4;
      fVar9 = *param_2;
      *(undefined1 *)(iVar5 + 4) = 1;
      *(float *)(iVar5 + 8) = fVar9;
    }
    else {
      fVar9 = *(float *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x54);
      if (fVar9 < *param_2) {
        uVar8 = 0x3f800000;
        *(undefined1 *)(iVar5 + 4) = 1;
      }
      else {
        if (fVar9 <= *param_2) {
          *(undefined4 *)(iVar5 + 8) = 0;
          *(undefined1 *)(iVar5 + 4) = 1;
          goto LAB_003009b8;
        }
        uVar8 = 0xbf800000;
        *(undefined1 *)(iVar5 + 4) = 1;
      }
      *(undefined4 *)(iVar5 + 8) = uVar8;
    }
LAB_003009b8:
    if (*(int *)(param_1 + 0x164) == 0) {
      uVar8 = 1;
    }
    else if (*(char *)(*(int *)(param_1 + 0x164) + 4) == '\0') {
      uVar8 = 1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x178);
      uVar8 = 0;
      if (iVar5 != 0) {
        fVar9 = param_2[2];
        if (0.0 <= fVar9) {
          *(undefined1 *)(iVar5 + 4) = 1;
          fVar9 = fVar9 * 2.5;
        }
        else {
          fVar9 = fVar9 + fVar9;
          *(undefined1 *)(iVar5 + 4) = 1;
        }
        *(float *)(iVar5 + 8) = fVar9;
        uVar8 = 1;
      }
    }
  }
  return uVar8;
}


// ==== FUN_00300a40 @ 00300a40 ====

undefined4 FUN_00300a40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char acStack_d0 [16];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  char acStack_b0 [4];
  undefined4 uStack_ac;
  int *piStack_a8;
  long lVar10;
  
  piVar18 = (int *)param_1;
  if (*(char *)((int)piVar18 + 0xb2) == '\0') {
    piVar18[0x31] = (int)((float)piVar18[0x3d] - (float)piVar18[0x34]);
    piVar18[0x32] = (int)((float)piVar18[0x3e] - (float)piVar18[0x35]);
    piVar18[0x33] = (int)((float)piVar18[0x3f] - (float)piVar18[0x36]);
    *(undefined1 *)(piVar18 + 0x2d) = 1;
  }
  else {
    piVar18[0x31] = (int)((float)piVar18[0x3d] - (float)piVar18[0x52]);
    piVar18[0x32] = (int)((float)piVar18[0x3e] - (float)piVar18[0x53]);
    piVar18[0x33] = (int)((float)piVar18[0x3f] - (float)piVar18[0x54]);
    *(undefined1 *)(piVar18 + 0x2d) = 0;
  }
  piStack_a8 = piVar18 + 0x3d;
  piVar19 = (int *)param_2;
  *piVar19 = 0;
  piVar15 = piVar18 + 0x3a;
  iVar17 = *(int *)(piVar18[1] + 0x14);
  piVar19[1] = *(int *)(iVar17 + 0x48);
  piVar19[2] = *(int *)(iVar17 + 0x4c);
  piVar19[3] = *(int *)(iVar17 + 0x50);
  *(undefined1 *)(piVar19 + 7) = 0;
  fVar21 = (float)piVar18[0x3a];
  piVar8 = (int *)piVar18[0x6c];
  fVar20 = (float)piVar18[0x3b];
  fVar22 = (float)piVar18[0x3c];
  uStack_ac = param_3;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0x2c))((int)piVar8 + (int)*(short *)(*piVar8 + 0x28));
  }
  iVar17 = piVar18[0x50];
  piVar8 = (int *)0x0;
  if ((iVar17 != 0) && (iVar17 != -1)) {
    piVar8 = *(int **)(iVar17 * 4 + piVar18[0x21] + -4);
  }
  if (piVar8 == (int *)0x0) {
    pcVar7 = (code *)piVar18[0x25];
LAB_00300bf8:
    lVar10 = (*pcVar7)(param_1);
    if (lVar10 != 0) {
      *piVar19 = piVar18[0x46];
      piVar19[1] = piVar18[0x47];
      piVar19[2] = piVar18[0x48];
      piVar19[3] = piVar18[0x49];
      piVar19[4] = piVar18[0x4a];
      piVar19[5] = piVar18[0x4b];
      piVar19[6] = piVar18[0x4c];
      *(char *)(piVar19 + 7) = (char)piVar18[0x4d];
      uVar5 = *(undefined1 *)((int)piVar18 + 0x135);
      *piVar19 = 0;
      *(undefined1 *)((int)piVar19 + 0x1d) = uVar5;
      *(undefined1 *)(piVar18 + 0x2c) = 1;
      *(undefined1 *)((int)piVar18 + 0xb2) = 0;
      return 1;
    }
  }
  else {
    lVar10 = (**(code **)(*piVar8 + 0x4c))
                       ((int)piVar8 + (int)*(short *)(*piVar8 + 0x48),
                        *(undefined4 *)(piVar18[1] + 0x14));
    if (lVar10 != 0) {
      pcVar7 = (code *)piVar18[0x25];
      goto LAB_00300bf8;
    }
  }
  cVar6 = '\0';
  uVar11 = FUN_002e91c0();
  if (*(char *)((int)piVar18 + 0x1b5) == '\0') {
    if (*(char *)((int)piVar18 + 0xb3) != '\0') {
      cVar6 = '\x01';
      goto LAB_00300ddc;
    }
    if ((float)piVar18[9] * (float)piVar18[9] <
        ((float)piVar18[0x36] - (float)piVar18[0x39]) *
        ((float)piVar18[0x36] - (float)piVar18[0x39]) +
        ((float)piVar18[0x34] - (float)piVar18[0x37]) *
        ((float)piVar18[0x34] - (float)piVar18[0x37]) +
        ((float)piVar18[0x35] - (float)piVar18[0x38]) *
        ((float)piVar18[0x35] - (float)piVar18[0x38])) {
      if (piVar8 == (int *)0x0) {
        cVar6 = '\x01';
      }
      else {
        lVar10 = (**(code **)(*piVar8 + 0x4c))
                           ((int)piVar8 + (int)*(short *)(*piVar8 + 0x48),
                            *(undefined4 *)(piVar18[1] + 0x14));
        if (lVar10 == 1) {
          cVar6 = '\x01';
        }
      }
    }
    if (cVar6 == '\0') {
      if (((char)piVar18[0x23] == '\x01') && ((uint)piVar18[0x1d] <= piVar18[0x50] + 2U)) {
        cVar6 = '\x01';
        *(undefined1 *)((int)piVar18 + 0x1b5) = 1;
      }
      if (cVar6 == '\0') {
        if (piVar8 == (int *)0x0) {
          (**(code **)(*piVar18 + 0xc4))((int)piVar18 + (int)*(short *)(*piVar18 + 0xc0));
          cVar6 = (char)piVar18[0x66];
        }
        else {
          uVar5 = (**(code **)(*piVar8 + 0x54))
                            ((int)piVar8 + (int)*(short *)(*piVar8 + 0x50),
                             *(undefined4 *)(piVar18[1] + 0x14));
          *(undefined1 *)(piVar18 + 0x66) = uVar5;
          cVar6 = (char)piVar18[0x66];
        }
        goto LAB_00300ddc;
      }
      iVar17 = piVar18[1];
    }
    else {
      iVar17 = piVar18[1];
    }
LAB_00300de8:
    lVar10 = FUN_002e8ab8(uVar11,piVar18[0x62],*(undefined4 *)(iVar17 + 0x14));
    *(bool *)((int)piVar18 + 0xb2) = lVar10 == 0;
    if (lVar10 == 0) {
      piVar18[0x34] = piVar18[0x52];
      piVar18[0x35] = piVar18[0x53];
      piVar18[0x36] = piVar18[0x54];
      piVar18[0x4e] = piVar18[0x55];
      piVar18[0x4f] = piVar18[0x56];
      if (*(char *)((int)piVar18 + 0xb3) != '\0') {
        FUN_002e9d10(uVar11,*(undefined4 *)(piVar18[1] + 0x14));
      }
    }
    cVar1 = *(char *)((int)piVar18 + 0xb2);
  }
  else {
    if ((piVar8 == (int *)0x0) ||
       (lVar10 = (**(code **)(*piVar8 + 0x4c))
                           ((int)piVar8 + (int)*(short *)(*piVar8 + 0x48),
                            *(undefined4 *)(piVar18[1] + 0x14)), lVar10 == 1)) {
      cVar6 = '\x01';
      piVar18[0x46] = 0;
    }
    else {
      piVar18[0x46] = 0;
    }
LAB_00300ddc:
    if (cVar6 != '\0') {
      iVar17 = piVar18[1];
      goto LAB_00300de8;
    }
    cVar1 = *(char *)((int)piVar18 + 0xb2);
  }
  bVar4 = false;
  if ((cVar1 == '\0') && (cVar6 != '\0')) {
    *(undefined1 *)(piVar18 + 0x2c) = 0;
    piVar18[0x37] = piVar18[0x34];
    bVar4 = true;
    piVar18[0x38] = piVar18[0x35];
    piVar18[0x39] = piVar18[0x36];
    uVar5 = FUN_00301418(param_1,(char)piVar18[0x66],acStack_d0,uStack_ac);
    *(undefined1 *)((int)piVar18 + 0xb1) = uVar5;
    *(undefined1 *)((int)piVar18 + 0x1b5) = 0;
    FUN_002e9978(uVar11,piVar18[0x62],*(undefined4 *)(piVar18[1] + 0x14));
    piVar18[0x40] = piVar18[0x3d];
    piVar18[0x41] = piStack_a8[1];
    piVar18[0x42] = piStack_a8[2];
    piVar18[0x52] = piVar18[0x34];
    piVar18[0x53] = piVar18[0x35];
    piVar18[0x54] = piVar18[0x36];
    piVar18[0x55] = piVar18[0x4e];
    piVar18[0x56] = piVar18[0x4f];
    if (*(char *)((int)piVar18 + 0xb3) != '\0') {
      *(undefined1 *)((int)piVar18 + 0xb1) = 0;
      return 1;
    }
    if (*(char *)((int)piVar18 + 0xb1) == '\0') goto LAB_00300fbc;
    if ((acStack_d0[0] == '\0') && ((char)piVar18[0x66] == '\0')) {
      cVar6 = *(char *)((int)piVar18 + 0xb3);
    }
    else {
      bVar3 = false;
      if (((char)piVar18[0x66] == '\0') &&
         (lVar10 = FUN_002fb650(piVar18 + 0x1b,piVar15), lVar10 != -1)) {
        piVar18[0x50] = (int)lVar10;
        bVar3 = true;
      }
      if (!bVar3) {
        if (piVar18[0x1d] == 0) {
          piVar18[0x50] = -1;
          piVar18[0x3a] = piVar18[0x34];
          piVar18[0x3b] = piVar18[0x35];
          piVar18[0x3c] = piVar18[0x36];
        }
        else {
          piVar18[0x50] = 0;
          piVar2 = (int *)piVar18[0x20];
          piVar18[0x3a] = *piVar2;
          piVar18[0x3b] = piVar2[1];
          piVar18[0x3c] = piVar2[2];
        }
        goto LAB_00300fbc;
      }
      cVar6 = *(char *)((int)piVar18 + 0xb3);
    }
  }
  else {
LAB_00300fbc:
    cVar6 = *(char *)((int)piVar18 + 0xb3);
  }
  if (cVar6 != '\0') {
    *(undefined1 *)((int)piVar18 + 0xb1) = 0;
    return 1;
  }
  if (*(char *)((int)piVar18 + 0xb1) == '\0') {
    return 0;
  }
  if (bVar4) {
LAB_00300ff4:
    if (piVar8 == (int *)0x0) {
      if (piVar18[0x51] == 0) {
        (*(code *)piVar18[0x28])(param_1);
        iVar17 = piVar18[1];
      }
      else {
        iVar17 = piVar18[0x50];
        if (piVar18[0x51] == 2) {
          (*(code *)piVar18[0x28])(param_1);
          iVar13 = piVar18[0x50];
        }
        else {
          FUN_00302198(param_1);
          iVar13 = piVar18[0x50];
        }
        if (iVar17 == iVar13) {
          iVar17 = piVar18[1];
        }
        else {
          piVar18[0x51] = piVar18[0x51] + -1;
          iVar17 = piVar18[1];
        }
      }
      bVar4 = true;
      FUN_002e9868(uVar11,piVar18[100],*(undefined4 *)(iVar17 + 0x14));
      goto LAB_00301070;
    }
    iStack_c0 = piVar18[0x3a];
  }
  else {
    lVar10 = FUN_002e96f8(uVar11,piVar18[100],*(undefined4 *)(piVar18[1] + 0x14));
    bVar4 = false;
    if (lVar10 != 0) goto LAB_00300ff4;
LAB_00301070:
    if (piVar8 == (int *)0x0) {
      iVar17 = piVar18[1];
      if (!bVar4) {
        lVar10 = FUN_002e96f8(uVar11,piVar18[0x65],*(undefined4 *)(iVar17 + 0x14));
        if (lVar10 == 0) {
          *(undefined1 *)(piVar18 + 0x2c) = 0;
          *piVar19 = piVar18[0x46];
          piVar19[1] = piVar18[0x47];
          piVar19[2] = piVar18[0x48];
          piVar19[3] = piVar18[0x49];
          piVar19[4] = piVar18[0x4a];
          piVar19[5] = piVar18[0x4b];
          piVar19[6] = piVar18[0x4c];
          *(char *)(piVar19 + 7) = (char)piVar18[0x4d];
          *(undefined1 *)((int)piVar19 + 0x1d) = *(undefined1 *)((int)piVar18 + 0x135);
          goto LAB_00301390;
        }
        iVar17 = piVar18[1];
      }
      FUN_002e9868(uVar11,piVar18[0x65],*(undefined4 *)(iVar17 + 0x14));
      lVar10 = (*(code *)piVar18[0x29])(param_1,piVar15);
      if (lVar10 == 0) {
        (*(code *)piVar18[0x2b])(param_1,param_2,piVar15);
      }
      else {
        (*(code *)piVar18[0x2a])(param_1,param_2,piVar15);
      }
      FUN_00305090(param_1,param_2);
      piVar18[0x46] = *piVar19;
      piVar18[0x47] = piVar19[1];
      piVar18[0x48] = piVar19[2];
      piVar18[0x49] = piVar19[3];
      piVar18[0x4a] = piVar19[4];
      piVar18[0x4b] = piVar19[5];
      piVar18[0x4c] = piVar19[6];
      *(char *)(piVar18 + 0x4d) = (char)piVar19[7];
      *(undefined1 *)((int)piVar18 + 0x135) = *(undefined1 *)((int)piVar19 + 0x1d);
      goto LAB_00301390;
    }
    iStack_c0 = piVar18[0x3a];
  }
  iStack_bc = piVar18[0x3b];
  iStack_b8 = piVar18[0x3c];
  acStack_b0[0] = '\0';
  lVar10 = (**(code **)(*piVar8 + 0x44))
                     ((int)piVar8 + (int)*(short *)(*piVar8 + 0x40),
                      *(undefined4 *)(piVar18[1] + 0x14),piVar18[0x20] + piVar18[0x50] * 0xc,
                      piVar18[2],acStack_b0,&iStack_c0);
  if (lVar10 == 1) {
    *(undefined1 *)(piVar18 + 0x6d) = 0;
  }
  else {
    (*(code *)piVar18[0x2a])(param_1,param_2,&iStack_c0);
  }
  if (acStack_b0[0] == '\0') {
    iVar17 = piVar18[1];
  }
  else {
    uVar14 = piVar18[0x50] + 1;
    if (uVar14 < (uint)piVar18[0x1d]) {
      piVar18[0x50] = uVar14;
      piVar8 = (int *)(uVar14 * 0xc + piVar18[0x20]);
      piVar18[0x3a] = *piVar8;
      piVar18[0x3b] = piVar8[1];
      piVar18[0x3c] = piVar8[2];
    }
    else {
      piVar18[0x3a] = piVar18[0x34];
      piVar18[0x3b] = piVar18[0x35];
      piVar18[0x3c] = piVar18[0x36];
    }
    uVar14 = piVar18[0x50];
    if (uVar14 < (uint)piVar18[0x1d]) {
      iVar17 = uVar14 * 0xc;
      do {
        iVar16 = uVar14 * 4;
        puVar12 = (undefined4 *)(iVar17 + piVar18[0x20]);
        puVar9 = (undefined4 *)((uVar14 - piVar18[0x50]) * 0xc + piVar18[0x20]);
        *puVar9 = *puVar12;
        puVar9[1] = puVar12[1];
        puVar9[2] = puVar12[2];
        *(undefined4 *)((uVar14 - piVar18[0x50]) * 4 + piVar18[0x1e]) =
             *(undefined4 *)(iVar16 + piVar18[0x1e]);
        *(undefined4 *)((uVar14 - piVar18[0x50]) * 4 + piVar18[0x1f]) =
             *(undefined4 *)(iVar16 + piVar18[0x1f]);
        iVar13 = uVar14 - piVar18[0x50];
        uVar14 = uVar14 + 1;
        *(undefined4 *)(iVar13 * 4 + piVar18[0x21]) = *(undefined4 *)(iVar16 + piVar18[0x21]);
        iVar17 = iVar17 + 0xc;
      } while (uVar14 < (uint)piVar18[0x1d]);
    }
    iVar17 = piVar18[0x50];
    piVar18[0x50] = 0;
    piVar18[0x1d] = piVar18[0x1d] - iVar17;
    iVar17 = piVar18[1];
  }
  FUN_002e9868(uVar11,piVar18[0x65],*(undefined4 *)(iVar17 + 0x14));
LAB_00301390:
  bVar4 = false;
  if (((fVar21 != (float)piVar18[0x3a]) || (fVar20 != (float)piVar18[0x3b])) ||
     (fVar22 != (float)piVar18[0x3c])) {
    bVar4 = true;
  }
  if (bVar4) {
    FUN_003052a0(param_1);
    return 1;
  }
  return 1;
}


// ==== FUN_00301418 @ 00301418 ====

void FUN_00301418(undefined8 param_1,char param_2,undefined1 *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  float fVar11;
  
  piVar10 = (int *)param_1;
  iVar3 = (*(code *)piVar10[0x26])(param_1,piVar10 + 0x3d,1,0);
  iVar4 = 0;
  if (param_4 != 0) {
    iVar4 = FUN_00300278(param_1,param_4);
  }
  if (iVar4 == 0) {
    iVar4 = (*(code *)piVar10[0x26])(param_1,piVar10 + 0x34,0,1);
    cVar1 = *(char *)((int)piVar10 + 0xb3);
  }
  else {
    cVar1 = *(char *)((int)piVar10 + 0xb3);
  }
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      iVar2 = piVar10[0x4f];
    }
    else {
      if (iVar3 != piVar10[0x4e]) goto LAB_003014e0;
      iVar2 = piVar10[0x4f];
    }
    if ((iVar4 == iVar2) && (*(char *)((int)piVar10 + 0x1b5) == '\0')) {
      *param_3 = 0;
      return;
    }
  }
LAB_003014e0:
  *param_3 = 1;
  piVar10[0x4e] = iVar3;
  piVar10[0x4f] = iVar4;
  if ((iVar3 != 0) && (piVar5 = piVar10 + 0x1b, iVar4 != 0)) {
    piVar10[0x1d] = 0;
    piVar10[0x24] = 0;
    if (piVar10[0x5f] == 0) {
      iVar3 = *piVar10;
    }
    else {
      iVar3 = *(int *)piVar10[5];
      lVar8 = (**(code **)(iVar3 + 0x14))(piVar10[5] + (int)*(short *)(iVar3 + 0x10));
      if (lVar8 == 0x451890) {
        FUN_002fe570(piVar10[0x5f],*(undefined4 *)piVar10[0x4e],*(undefined4 *)piVar10[0x4f],piVar5)
        ;
        return;
      }
      iVar3 = *piVar10;
    }
    uVar6 = (**(code **)(iVar3 + 0x4c))((int)piVar10 + (int)*(short *)(iVar3 + 0x48));
    *(undefined4 *)(piVar10[0x19] + 0x54) = uVar6;
    uVar6 = (**(code **)(*piVar10 + 0x84))((int)piVar10 + (int)*(short *)(*piVar10 + 0x80));
    *(undefined4 *)(piVar10[0x19] + 0x58) = uVar6;
    if ((char)piVar10[0x18] == '\0') {
      FUN_002ee078(piVar10[0x19],piVar5,piVar10[0x4e],piVar10[0x4f],
                   *(undefined4 *)(piVar10[1] + 0x14));
    }
    else {
      iVar3 = *(int *)piVar10[5];
      piVar7 = (int *)(**(code **)(iVar3 + 0x14))(piVar10[5] + (int)*(short *)(iVar3 + 0x10));
      iVar3 = *piVar7;
      uVar9 = FUN_002e91c0();
      fVar11 = (float)FUN_002e9bc8(uVar9,piVar10[0x62]);
      if (fVar11 < 0.0005) {
        fVar11 = 0.0005;
      }
      *(undefined1 *)((int)piVar10 + 0xb3) = 0;
      iVar3 = piVar10[0x6b] + iVar3 * 0x14;
      lVar8 = FUN_002ed530(*(undefined4 *)(iVar3 + 0x10),fVar11,piVar10[0x19],piVar5,piVar10[0x4e],
                           piVar10[0x4f],*(undefined4 *)(piVar10[1] + 0x14),iVar3 + 4,iVar3 + 8,
                           iVar3 + 0xc);
      if (((lVar8 != 1) && (1 < lVar8)) && (lVar8 == 2)) {
        *(undefined1 *)((int)piVar10 + 0xb3) = 1;
        FUN_002e9d10(uVar9,*(undefined4 *)(piVar10[1] + 0x14));
      }
    }
  }
  return;
}


// ==== FUN_003016e8 @ 003016e8 ====

/* WARNING: Removing unreachable block (ram,0x003018d8) */

bool FUN_003016e8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  bVar2 = false;
  iVar10 = (int)param_1;
  if (((*(float *)(iVar10 + 0xe8) == *(float *)(iVar10 + 0xd0)) &&
      (*(float *)(iVar10 + 0xec) == *(float *)(iVar10 + 0xd4))) &&
     (*(float *)(iVar10 + 0xf0) == *(float *)(iVar10 + 0xd8))) {
    bVar2 = true;
  }
  if (bVar2) {
    return true;
  }
  iVar4 = *(int *)(iVar10 + 0x140);
  if (iVar4 == 0) {
    return true;
  }
  if (iVar4 == -1) {
    return true;
  }
  pfVar8 = (float *)(*(int *)(iVar10 + 0x80) + iVar4 * 0xc);
  fVar11 = *pfVar8;
  pfVar7 = (float *)(*(int *)(iVar10 + 0x80) + iVar4 * 0xc + -0xc);
  fVar17 = pfVar8[1];
  fVar15 = *pfVar7;
  fVar19 = pfVar7[1];
  fVar13 = pfVar8[2];
  fVar16 = pfVar7[2];
  uVar1 = *(uint *)(iVar4 * 4 + *(int *)(iVar10 + 0x7c) + -4);
  if (uVar1 < *(uint *)(*(int *)(iVar10 + 100) + 0x28)) {
    piVar6 = (int *)(uVar1 * 8 + *(int *)(*(int *)(iVar10 + 100) + 0x34));
    piVar9 = (int *)0x0;
    if (*piVar6 != -1) {
      piVar9 = piVar6;
    }
  }
  else {
    piVar9 = (int *)0x0;
  }
  if (piVar9 == (int *)0x0) {
    fVar14 = (pfVar8[2] - pfVar7[2]) * (pfVar8[2] - pfVar7[2]);
    fVar12 = pfVar8[1] - pfVar7[1];
    fVar18 = (*pfVar8 - *pfVar7) * (*pfVar8 - *pfVar7);
  }
  else {
    iVar4 = piVar9[1];
    if (piVar9 == (int *)(iVar4 + 0x5c)) {
      fVar12 = *(float *)(iVar4 + 0x8c);
      goto LAB_003018e4;
    }
    if (*(int *)(iVar4 + 0x48) != 0) {
      fVar12 = *(float *)(*piVar9 * 4 + *(int *)(iVar4 + 0x48));
      goto LAB_003018e4;
    }
    iVar4 = FUN_0038f2b0(piVar9);
    iVar3 = FUN_0038f2f0(piVar9);
    fVar18 = *(float *)(iVar3 + 4) - *(float *)(iVar4 + 4);
    fVar14 = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
    fVar18 = fVar18 * fVar18;
    fVar12 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
    fVar14 = fVar14 * fVar14;
  }
  fVar12 = SQRT(fVar14 + fVar18 + fVar12 * fVar12);
LAB_003018e4:
  if (fVar12 != 0.0) {
    iVar4 = *(int *)(iVar10 + 0x140) * 0xc + *(int *)(iVar10 + 0x80);
    fVar18 = *(float *)(iVar10 + 0xf4) - *(float *)(iVar4 + -0xc);
    fVar14 = *(float *)(iVar10 + 0xfc) - *(float *)(iVar4 + -4);
    fVar17 = ((fVar11 - fVar15) * fVar18 +
              (fVar17 - fVar19) * (*(float *)(iVar10 + 0xf8) - *(float *)(iVar4 + -8)) +
             (fVar13 - fVar16) * fVar14) / fVar12;
    if ((-*(float *)(iVar10 + 0x2c) <= fVar17) && (fVar17 <= fVar12)) {
      fVar12 = ((fVar13 - fVar16) * fVar18 - (fVar11 - fVar15) * fVar14) / fVar12;
      if (fVar12 < 0.0) {
        fVar12 = -fVar12;
      }
      if (fVar12 < *(float *)(iVar10 + 0x54)) {
        return true;
      }
    }
  }
  lVar5 = FUN_00302ee0(param_1,param_2);
  if (lVar5 != 0) {
    *(undefined4 *)(iVar10 + 0x144) = 2;
  }
  return lVar5 == 0;
}


// ==== FUN_00301a30 @ 00301a30 ====

/* WARNING: Removing unreachable block (ram,0x00301abc) */
/* WARNING: Removing unreachable block (ram,0x00301ae4) */

undefined4 FUN_00301a30(int param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0xfc);
  fVar5 = *(float *)(param_1 + 0xf8);
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  param_2[1] = *param_3 - *(float *)(param_1 + 0xf4);
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar4;
  fVar2 = (float)FUN_00389140(param_2 + 1);
  fVar2 = SQRT(fVar2);
  fVar3 = (float)FUN_00393810(param_2 + 1);
  param_2[1] = param_2[1] / fVar2;
  param_2[2] = param_2[2] / fVar2;
  param_2[3] = param_2[3] / fVar2;
  if (*(int *)(param_1 + 0x164) == 0) {
    param_2[2] = 0.0;
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x164) + 4) != '\0') {
      fVar4 = *param_3;
      goto LAB_00301b44;
    }
    param_2[2] = 0.0;
  }
  fVar4 = *param_3;
LAB_00301b44:
  bVar1 = false;
  if (((fVar4 == *(float *)(param_1 + 0xd0)) && (param_3[1] == *(float *)(param_1 + 0xd4))) &&
     (param_3[2] == *(float *)(param_1 + 0xd8))) {
    bVar1 = true;
  }
  if (bVar1) {
    fVar4 = *(float *)(param_1 + 0x34);
  }
  else {
    fVar4 = *(float *)(param_1 + 0x30);
  }
  if (fVar4 < fVar2) {
    fVar2 = *(float *)(*(int *)(param_1 + 0x15c) + 4);
  }
  else {
    fVar2 = *(float *)(*(int *)(param_1 + 0x15c) + 4) * 0.5;
  }
  *param_2 = fVar2;
  if ((*(int *)(param_1 + 0x164) != 0) && (*(char *)(*(int *)(param_1 + 0x164) + 4) == '\x01')) {
    bVar1 = false;
    if ((*param_3 == *(float *)(param_1 + 0xd0)) &&
       ((param_3[1] == *(float *)(param_1 + 0xd4) && (param_3[2] == *(float *)(param_1 + 0xd8))))) {
      bVar1 = true;
    }
    if (bVar1) {
      fVar2 = *(float *)(param_1 + 0x28);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2c);
    }
    if (SQRT(fVar3) < fVar2) {
      *param_2 = 0.0;
    }
  }
  return 1;
}


// ==== FUN_00301c68 @ 00301c68 ====

/* WARNING: Removing unreachable block (ram,0x00301cb0) */

undefined4 FUN_00301c68(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_00301e78(param_1,iVar2 + 0xf4,param_3,&fStack_60);
  if (lVar1 == 0) {
    param_2[1] = fStack_60;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[2] = fStack_5c;
    param_2[3] = fStack_58;
    *param_2 = 0;
  }
  else {
    fVar3 = (float)FUN_00389140(&fStack_60);
    fVar3 = SQRT(fVar3);
    param_2[1] = fStack_60 / fVar3;
    param_2[2] = fStack_5c / fVar3;
    param_2[3] = fStack_58 / fVar3;
    *param_2 = *(undefined4 *)(*(int *)(iVar2 + 0x15c) + 4);
  }
  *(undefined4 *)(iVar2 + 0x100) = *(undefined4 *)(iVar2 + 0xf4);
  *(undefined4 *)(iVar2 + 0x104) = *(undefined4 *)(iVar2 + 0xf8);
  *(undefined4 *)(iVar2 + 0x108) = *(undefined4 *)(iVar2 + 0xfc);
  return 1;
}


// ==== FUN_00301d60 @ 00301d60 ====

/* WARNING: Removing unreachable block (ram,0x00301df4) */

void FUN_00301d60(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    uVar1 = FUN_002e91c0();
    lVar2 = FUN_002e96f8(uVar1,*(undefined4 *)(param_1 + 0x18c),
                         *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
    if (lVar2 != 0) {
      fVar4 = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xfc);
      fVar5 = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xf4);
      fVar3 = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xf8);
      fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
      if ((*(float *)(param_1 + 0x1a8) < 0.0) || (*(float *)(param_1 + 0x1a8) * 0.95 < fVar3)) {
        *(undefined1 *)(param_1 + 0x198) = 1;
        uVar1 = FUN_002e91c0();
        FUN_002e9868(uVar1,*(undefined4 *)(param_1 + 0x18c),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
        *(float *)(param_1 + 0x1a8) = fVar3;
      }
      else {
        *(float *)(param_1 + 0x1a8) = fVar3;
      }
    }
  }
  return;
}


// ==== FUN_00301e78 @ 00301e78 ====

/* WARNING: Removing unreachable block (ram,0x00301f18) */

undefined4 FUN_00301e78(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined *puStack_150;
  float fStack_14c;
  undefined *puStack_130;
  float fStack_12c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  puStack_150 = &DAT_003e8d20;
  puStack_130 = &DAT_003e8d20;
  fStack_110 = *param_3 - *param_2;
  fStack_10c = param_3[1] - param_2[1];
  fStack_108 = param_3[2] - param_2[2];
  fStack_f8 = (float)FUN_00389140(&fStack_110);
  fStack_f8 = SQRT(fStack_f8);
  fStack_100 = fStack_110 / fStack_f8;
  fStack_fc = fStack_10c / fStack_f8;
  fStack_e8 = param_2[2];
  fStack_f8 = fStack_108 / fStack_f8;
  fStack_f0 = *param_2;
  fStack_ec = param_2[1];
  uStack_c8 = 0;
  fVar1 = *(float *)(DAT_003c9ed4 + 0xc) * 5.0;
  fStack_8c = fVar1 / 3.0;
  uStack_cc = 0x3f800000;
  uStack_d0 = 0;
  fStack_b8 = fStack_100 - fStack_fc * 0.0;
  fStack_c0 = fStack_fc * 0.0 - fStack_f8;
  fStack_bc = fStack_f8 * 0.0 - fStack_100 * 0.0;
  fStack_e0 = fStack_f0 + fVar1 * fStack_100;
  fStack_88 = fStack_8c * fStack_b8;
  fStack_90 = fStack_8c * fStack_c0;
  fStack_dc = fStack_ec + fVar1 * fStack_fc;
  fStack_d8 = fStack_e8 + fVar1 * fStack_f8;
  fStack_8c = fStack_8c * fStack_bc;
  fStack_a0 = fStack_e0 - fStack_90;
  fStack_98 = fStack_d8 - fStack_88;
  fStack_9c = fStack_dc - fStack_8c;
  fStack_b0 = fStack_e0 + fStack_90;
  fStack_ac = fStack_dc + fStack_8c;
  fStack_a8 = fStack_d8 + fStack_88;
  (*DAT_0045124c)(&fStack_f0,&fStack_b0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),&puStack_150,2
                 );
  if (fStack_14c == 1.0) {
    fStack_a0 = fStack_b0 - fStack_f0;
    fStack_9c = fStack_ac;
    fStack_98 = fStack_a8;
  }
  else {
    (*DAT_0045124c)(&fStack_f0,&fStack_a0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),&puStack_130
                    ,2);
    if ((fStack_12c == 1.0) || (fStack_14c <= fStack_12c)) {
      fStack_a0 = fStack_a0 - fStack_f0;
    }
    else {
      fStack_a0 = fStack_b0 - fStack_f0;
      fStack_9c = fStack_ac;
      fStack_98 = fStack_a8;
    }
  }
  *param_4 = fStack_a0;
  param_4[1] = fStack_9c - fStack_ec;
  param_4[2] = fStack_98 - fStack_e8;
  return 1;
}


// ==== FUN_00302198 @ 00302198 ====

/* WARNING: Removing unreachable block (ram,0x003022d0) */

undefined4 FUN_00302198(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  bVar3 = false;
  if (((*(float *)(param_1 + 0xe8) == *(float *)(param_1 + 0xd0)) &&
      (*(float *)(param_1 + 0xec) == *(float *)(param_1 + 0xd4))) &&
     (*(float *)(param_1 + 0xf0) == *(float *)(param_1 + 0xd8))) {
    bVar3 = true;
  }
  uVar4 = 1;
  if (!bVar3) {
    iVar1 = *(int *)(param_1 + 0x140);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2 = *(int **)(iVar1 * 4 + *(int *)(param_1 + 0x84) + -4);
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
      if ((piVar2 != (int *)0x0) &&
         (lVar6 = (**(code **)(*piVar2 + 0x3c))
                            ((int)piVar2 + (int)*(short *)(*piVar2 + 0x38),iVar1,iVar1 + 0x30,
                             param_1 + 0xe8), lVar6 == 0)) {
        return 1;
      }
    }
    lVar6 = FUN_002fb3c8(param_1 + 0x6c,param_1 + 0xe8);
    *(int *)(param_1 + 0x140) = (int)lVar6;
    if (lVar6 == -1) {
      uVar4 = 0;
    }
    else {
      fVar9 = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xfc);
      fVar11 = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xf4);
      fVar10 = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xf8);
      uVar4 = 1;
      if (SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10) < *(float *)(param_1 + 0x2c)) {
        uVar8 = *(int *)(param_1 + 0x140) + 1;
        if (uVar8 < *(uint *)(param_1 + 0x74)) {
          *(uint *)(param_1 + 0x140) = uVar8;
          puVar5 = (undefined4 *)(uVar8 * 0xc + *(int *)(param_1 + 0x80));
          *(undefined4 *)(param_1 + 0xe8) = *puVar5;
          *(undefined4 *)(param_1 + 0xec) = puVar5[1];
          *(undefined4 *)(param_1 + 0xf0) = puVar5[2];
        }
        else {
          *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xd0);
          *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xd4);
          *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xd8);
        }
        uVar7 = FUN_002e91c0();
        FUN_002e9868(uVar7,*(undefined4 *)(param_1 + 400),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// ==== FUN_00302388 @ 00302388 ====

/* WARNING: Removing unreachable block (ram,0x00302bcc) */
/* WARNING: Removing unreachable block (ram,0x003028c0) */
/* WARNING: Removing unreachable block (ram,0x003026dc) */
/* WARNING: Removing unreachable block (ram,0x00302adc) */
/* WARNING: Removing unreachable block (ram,0x00302cb0) */
/* WARNING: Removing unreachable block (ram,0x003027cc) */

undefined8 FUN_00302388(undefined8 param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  int *piStack_bc;
  int iStack_b8;
  int iStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int iStack_a8;
  
  piVar11 = (int *)param_1;
  if (*(char *)((int)piVar11 + 0xb2) != '\0') {
    uVar5 = FUN_00302198();
    return uVar5;
  }
  piStack_ac = piVar11 + 0x3a;
  piStack_b0 = piVar11 + 0x34;
  bVar1 = false;
  if ((((float)piVar11[0x3a] == (float)piVar11[0x34]) &&
      ((float)piVar11[0x3b] == (float)piVar11[0x35])) &&
     ((float)piVar11[0x3c] == (float)piVar11[0x36])) {
    bVar1 = true;
  }
  if (bVar1) {
    return 1;
  }
  if (piVar11[0x4f] == 0) {
    return 1;
  }
  if (piVar11[0x4e] == 0) {
    return 1;
  }
  lVar6 = FUN_002fb3c8(piVar11 + 0x1b,piStack_ac);
  piVar11[0x50] = (int)lVar6;
  if (lVar6 == -1) {
    return 1;
  }
  piVar2 = (int *)((int)lVar6 * 0xc + piVar11[0x20]);
  piVar11[0x3a] = *piVar2;
  piStack_ac[1] = piVar2[1];
  piStack_ac[2] = piVar2[2];
  uStack_c8 = FUN_002e91c0();
  iVar8 = piVar11[0x19];
  piVar2 = (int *)(iVar8 + 0x5c);
  if ((*(uint *)(iVar8 + 4) & 2) == 0) {
    uVar12 = piVar11[0x50];
  }
  else {
    iVar7 = *(int *)(iVar8 + 0x60);
    if (piVar2 == (int *)(iVar7 + 0x5c)) {
      *(undefined4 *)(iVar7 + 0x94) = 0;
    }
    else {
      if (*(int *)(iVar7 + 0x50) == 0) {
        uVar12 = piVar11[0x50];
        goto LAB_003024fc;
      }
      *(undefined4 *)(*piVar2 * 4 + *(int *)(iVar7 + 0x50)) = 0;
    }
    uVar12 = piVar11[0x50];
  }
LAB_003024fc:
  uStack_c4 = 0;
  if (uVar12 != piVar11[0x1d] - 1U) {
    piStack_bc = piVar11 + 0x3d;
    iStack_b8 = iVar8 + 0x68;
    iStack_b4 = iVar8 + 0x7c;
    while( true ) {
      if (uVar12 != 0) {
        piVar3 = *(int **)(uVar12 * 4 + piVar11[0x21] + -4);
        if ((piVar3 != (int *)0x0) &&
           (lVar6 = (**(code **)(*piVar3 + 0x3c))
                              ((int)piVar3 + (int)*(short *)(*piVar3 + 0x38),
                               *(int *)(piVar11[1] + 0x14),*(int *)(piVar11[1] + 0x14) + 0x30,
                               piVar11[0x20] + uVar12 * 0xc), lVar6 == 0)) {
          return 1;
        }
      }
      uStack_c0 = uVar12 + 1;
      iVar7 = uStack_c0 * 0xc;
      pfVar9 = (float *)(iVar7 + piVar11[0x20]);
      fVar14 = (float)piStack_bc[1] - pfVar9[1];
      if ((float)piVar11[0x10] * (float)piVar11[0x10] <
          ((float)piStack_bc[2] - pfVar9[2]) * ((float)piStack_bc[2] - pfVar9[2]) +
          ((float)piVar11[0x3d] - *pfVar9) * ((float)piVar11[0x3d] - *pfVar9) + fVar14 * fVar14) {
        uVar10 = piVar11[0x13];
        goto LAB_0030296c;
      }
      fVar14 = pfVar9[1] - (float)piVar11[0x3e];
      if (fVar14 < 0.0) {
        fVar14 = -fVar14;
      }
      if ((float)piVar11[0xe] < fVar14) {
        uVar10 = piVar11[0x13];
        goto LAB_0030296c;
      }
      lVar6 = (*(code *)piVar11[0x27])(param_1);
      if (lVar6 == 0) break;
      iStack_a8 = iVar8 + 0x7c;
      piVar3 = (int *)(**(code **)(*piVar11 + 0x4c))
                                ((int)piVar11 + (int)*(short *)(*piVar11 + 0x48));
      puVar4 = (undefined4 *)(uVar12 * 0xc + piVar11[0x20]);
      *(undefined4 *)(iVar8 + 0x68) = *puVar4;
      *(undefined4 *)(iStack_b8 + 4) = puVar4[1];
      *(undefined4 *)(iStack_b8 + 8) = puVar4[2];
      puVar4 = (undefined4 *)(iVar7 + piVar11[0x20]);
      *(undefined4 *)(iVar8 + 0x7c) = *puVar4;
      fVar15 = (float)puVar4[1];
      *(float *)(iStack_b4 + 4) = fVar15;
      fVar13 = (float)puVar4[2];
      *(float *)(iStack_b4 + 8) = fVar13;
      fVar13 = fVar13 - *(float *)(iStack_b8 + 8);
      fVar14 = *(float *)(iVar8 + 0x7c) - *(float *)(iVar8 + 0x68);
      fVar15 = fVar15 - *(float *)(iStack_b8 + 4);
      fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
      iVar7 = *(int *)(iVar8 + 0x60);
      if (piVar2 == (int *)(iVar7 + 0x5c)) {
        *(float *)(iVar7 + 0x8c) = fVar14;
LAB_00302714:
        iVar7 = *piVar3;
      }
      else {
        if (*(int *)(iVar7 + 0x48) != 0) {
          *(float *)(*piVar2 * 4 + *(int *)(iVar7 + 0x48)) = fVar14;
          goto LAB_00302714;
        }
        iVar7 = *piVar3;
      }
      (**(code **)(iVar7 + 0x1c))
                ((int)piVar3 + (int)*(short *)(iVar7 + 0x18),*(undefined4 *)(piVar11[1] + 0x14),
                 piVar2,&fStack_e0);
      iVar7 = *(int *)(piVar11[1] + 0x14);
      *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar7 + 0x30);
      *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar7 + 0x34);
      *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar7 + 0x38);
      puVar4 = (undefined4 *)(uVar12 * 0xc + piVar11[0x20]);
      *(undefined4 *)(iVar8 + 0x7c) = *puVar4;
      fVar15 = (float)puVar4[1];
      *(float *)(iStack_a8 + 4) = fVar15;
      fVar13 = (float)puVar4[2];
      *(float *)(iStack_a8 + 8) = fVar13;
      fVar13 = fVar13 - *(float *)(iVar8 + 0x70);
      fVar14 = *(float *)(iVar8 + 0x7c) - *(float *)(iVar8 + 0x68);
      fVar15 = fVar15 - *(float *)(iVar8 + 0x6c);
      fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
      iVar7 = *(int *)(iVar8 + 0x60);
      if (piVar2 == (int *)(iVar7 + 0x5c)) {
        *(float *)(iVar7 + 0x8c) = fVar14;
LAB_00302804:
        iVar7 = *piVar3;
      }
      else {
        if (*(int *)(iVar7 + 0x48) != 0) {
          *(float *)(*piVar2 * 4 + *(int *)(iVar7 + 0x48)) = fVar14;
          goto LAB_00302804;
        }
        iVar7 = *piVar3;
      }
      (**(code **)(iVar7 + 0x1c))
                ((int)piVar3 + (int)*(short *)(iVar7 + 0x18),*(undefined4 *)(piVar11[1] + 0x14),
                 piVar2,&fStack_dc);
      iVar7 = *(int *)(piVar11[1] + 0x14);
      *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar7 + 0x30);
      *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar7 + 0x34);
      *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar7 + 0x38);
      puVar4 = (undefined4 *)(uStack_c0 * 0xc + piVar11[0x20]);
      *(undefined4 *)(iVar8 + 0x7c) = *puVar4;
      fVar15 = (float)puVar4[1];
      *(float *)(iStack_a8 + 4) = fVar15;
      fVar13 = (float)puVar4[2];
      *(float *)(iStack_a8 + 8) = fVar13;
      fVar13 = fVar13 - *(float *)(iVar8 + 0x70);
      fVar14 = *(float *)(iVar8 + 0x7c) - *(float *)(iVar8 + 0x68);
      fVar15 = fVar15 - *(float *)(iVar8 + 0x6c);
      fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
      iVar7 = *(int *)(iVar8 + 0x60);
      if (piVar2 == (int *)(iVar7 + 0x5c)) {
        *(float *)(iVar7 + 0x8c) = fVar14;
LAB_003028f8:
        iVar7 = *piVar3;
      }
      else {
        if (*(int *)(iVar7 + 0x48) != 0) {
          *(float *)(*piVar2 * 4 + *(int *)(iVar7 + 0x48)) = fVar14;
          goto LAB_003028f8;
        }
        iVar7 = *piVar3;
      }
      lVar6 = (**(code **)(iVar7 + 0x1c))
                        ((int)piVar3 + (int)*(short *)(iVar7 + 0x18),
                         *(undefined4 *)(piVar11[1] + 0x14),piVar2,&fStack_d8);
      if (lVar6 == 0) break;
      uVar10 = piVar11[0x13];
      if (fStack_e0 + fStack_dc < fStack_d8) goto LAB_0030296c;
      uStack_c4 = uStack_c4 + 1;
      uVar12 = uStack_c0;
      if ((uVar10 <= uStack_c4) || (uStack_c0 == piVar11[0x1d] - 1U)) break;
    }
  }
  uVar10 = piVar11[0x13];
LAB_0030296c:
  bVar1 = false;
  if (uVar10 <= uStack_c4) goto LAB_00302de0;
  if (uVar12 + 1 != piVar11[0x1d]) {
    uVar10 = piVar11[0x50];
    goto LAB_00302de4;
  }
  if ((float)piVar11[0x10] * (float)piVar11[0x10] <
      ((float)piVar11[0x3f] - (float)piStack_b0[2]) * ((float)piVar11[0x3f] - (float)piStack_b0[2])
      + ((float)piVar11[0x3d] - (float)piVar11[0x34]) *
        ((float)piVar11[0x3d] - (float)piVar11[0x34]) +
      ((float)piVar11[0x3e] - (float)piStack_b0[1]) * ((float)piVar11[0x3e] - (float)piStack_b0[1]))
  {
    uVar10 = piVar11[0x50];
    goto LAB_00302de4;
  }
  fVar14 = (float)piVar11[0x35] - (float)piVar11[0x3e];
  if (fVar14 < 0.0) {
    fVar14 = -fVar14;
  }
  if (fVar14 <= (float)piVar11[0xe]) {
    lVar6 = (*(code *)piVar11[0x27])(param_1,piStack_b0);
    if (lVar6 == 1) {
      piVar3 = (int *)(**(code **)(*piVar11 + 0x4c))
                                ((int)piVar11 + (int)*(short *)(*piVar11 + 0x48));
      iStack_a8 = iVar8 + 0x7c;
      puVar4 = (undefined4 *)(uVar12 * 0xc + piVar11[0x20]);
      *(undefined4 *)(iVar8 + 0x68) = *puVar4;
      *(undefined4 *)(iVar8 + 0x6c) = puVar4[1];
      *(undefined4 *)(iVar8 + 0x70) = puVar4[2];
      *(int *)(iVar8 + 0x7c) = piVar11[0x34];
      fVar15 = (float)piStack_b0[1];
      *(float *)(iVar8 + 0x80) = fVar15;
      fVar13 = (float)piStack_b0[2];
      *(float *)(iVar8 + 0x84) = fVar13;
      fVar13 = fVar13 - *(float *)(iVar8 + 0x70);
      fVar14 = *(float *)(iVar8 + 0x7c) - *(float *)(iVar8 + 0x68);
      fVar15 = fVar15 - *(float *)(iVar8 + 0x6c);
      fVar14 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
      iVar7 = *(int *)(iVar8 + 0x60);
      if (piVar2 == (int *)(iVar7 + 0x5c)) {
        *(float *)(iVar7 + 0x8c) = fVar14;
LAB_00302b14:
        iVar7 = *piVar3;
      }
      else {
        if (*(int *)(iVar7 + 0x48) != 0) {
          *(float *)(*piVar2 * 4 + *(int *)(iVar7 + 0x48)) = fVar14;
          goto LAB_00302b14;
        }
        iVar7 = *piVar3;
      }
      (**(code **)(iVar7 + 0x1c))
                ((int)piVar3 + (int)*(short *)(iVar7 + 0x18),*(undefined4 *)(piVar11[1] + 0x14),
                 piVar2,(uint)&fStack_e0 | 0xc);
      iVar7 = *(int *)(piVar11[1] + 0x14);
      *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar7 + 0x30);
      *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar7 + 0x34);
      *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar7 + 0x38);
      puVar4 = (undefined4 *)(uVar12 * 0xc + piVar11[0x20]);
      *(undefined4 *)(iVar8 + 0x7c) = *puVar4;
      fVar14 = (float)puVar4[1];
      *(float *)(iStack_a8 + 4) = fVar14;
      fVar13 = (float)puVar4[2];
      *(float *)(iStack_a8 + 8) = fVar13;
      fVar13 = fVar13 - *(float *)(iVar8 + 0x70);
      fVar15 = *(float *)(iVar8 + 0x7c) - *(float *)(iVar8 + 0x68);
      fVar14 = fVar14 - *(float *)(iVar8 + 0x6c);
      fVar14 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14);
      iVar7 = *(int *)(iVar8 + 0x60);
      if (piVar2 == (int *)(iVar7 + 0x5c)) {
        *(float *)(iVar7 + 0x8c) = fVar14;
LAB_00302c04:
        iVar7 = *piVar3;
      }
      else {
        if (*(int *)(iVar7 + 0x48) != 0) {
          *(float *)(*piVar2 * 4 + *(int *)(iVar7 + 0x48)) = fVar14;
          goto LAB_00302c04;
        }
        iVar7 = *piVar3;
      }
      (**(code **)(iVar7 + 0x1c))
                ((int)piVar3 + (int)*(short *)(iVar7 + 0x18),*(undefined4 *)(piVar11[1] + 0x14),
                 piVar2,&fStack_d0);
      iVar7 = *(int *)(piVar11[1] + 0x14);
      *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar7 + 0x30);
      *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar7 + 0x34);
      *(undefined4 *)(iVar8 + 0x70) = *(undefined4 *)(iVar7 + 0x38);
      *(int *)(iVar8 + 0x7c) = piVar11[0x34];
      fVar14 = (float)piStack_b0[1];
      *(float *)(iStack_a8 + 4) = fVar14;
      fVar13 = (float)piStack_b0[2];
      *(float *)(iStack_a8 + 8) = fVar13;
      fVar15 = *(float *)(iVar8 + 0x7c) - *(float *)(iVar8 + 0x68);
      fVar13 = fVar13 - *(float *)(iVar8 + 0x70);
      fVar14 = fVar14 - *(float *)(iVar8 + 0x6c);
      fVar14 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14);
      iVar8 = *(int *)(iVar8 + 0x60);
      if (piVar2 == (int *)(iVar8 + 0x5c)) {
        *(float *)(iVar8 + 0x8c) = fVar14;
LAB_00302ce8:
        iVar8 = *piVar3;
      }
      else {
        if (*(int *)(iVar8 + 0x48) != 0) {
          *(float *)(*piVar2 * 4 + *(int *)(iVar8 + 0x48)) = fVar14;
          goto LAB_00302ce8;
        }
        iVar8 = *piVar3;
      }
      lVar6 = (**(code **)(iVar8 + 0x1c))
                        ((int)piVar3 + (int)*(short *)(iVar8 + 0x18),
                         *(undefined4 *)(piVar11[1] + 0x14),piVar2,&fStack_cc);
      if (lVar6 != 1) {
        uVar10 = piVar11[0x50];
        goto LAB_00302de4;
      }
      if (fStack_d4 + fStack_d0 <= fStack_cc) {
        uVar10 = piVar11[0x50];
        goto LAB_00302de4;
      }
      bVar1 = true;
      piVar11[0x3a] = piVar11[0x34];
      piStack_ac[1] = piStack_b0[1];
      piStack_ac[2] = piStack_b0[2];
    }
    else {
      pfVar9 = (float *)(piVar11[0x20] + uVar12 * 0xc);
      if ((float)piVar11[0xb] * (float)piVar11[0xb] <
          ((float)piVar11[0x3f] - pfVar9[2]) * ((float)piVar11[0x3f] - pfVar9[2]) +
          ((float)piVar11[0x3d] - *pfVar9) * ((float)piVar11[0x3d] - *pfVar9) +
          ((float)piVar11[0x3e] - pfVar9[1]) * ((float)piVar11[0x3e] - pfVar9[1])) {
        uVar10 = piVar11[0x50];
        goto LAB_00302de4;
      }
      bVar1 = true;
      piVar11[0x3a] = piVar11[0x34];
      piStack_ac[1] = piStack_b0[1];
      piStack_ac[2] = piStack_b0[2];
    }
  }
LAB_00302de0:
  uVar10 = piVar11[0x50];
LAB_00302de4:
  if (uVar12 == uVar10) {
    if ((uVar12 + 1 < (uint)piVar11[0x1d]) &&
       (pfVar9 = (float *)(piVar11[0x20] + uVar12 * 0xc),
       (pfVar9[2] - (float)piVar11[0x3f]) * (pfVar9[2] - (float)piVar11[0x3f]) +
       (*pfVar9 - (float)piVar11[0x3d]) * (*pfVar9 - (float)piVar11[0x3d]) +
       (pfVar9[1] - (float)piVar11[0x3e]) * (pfVar9[1] - (float)piVar11[0x3e]) <
       (float)piVar11[0xb] * (float)piVar11[0xb])) {
      uVar12 = uVar12 + 1;
    }
    if (uVar12 == uVar10) {
      return 1;
    }
  }
  piVar11[0x50] = uVar12;
  if (!bVar1) {
    piVar2 = (int *)(uVar12 * 0xc + piVar11[0x20]);
    piVar11[0x3a] = *piVar2;
    piStack_ac[1] = piVar2[1];
    piStack_ac[2] = piVar2[2];
  }
  FUN_002e9868(uStack_c8,piVar11[100],*(undefined4 *)(piVar11[1] + 0x14));
  return 1;
}


// ==== FUN_00302ee0 @ 00302ee0 ====

/* WARNING: Removing unreachable block (ram,0x00302fbc) */
/* WARNING: Removing unreachable block (ram,0x00303164) */

undefined4 FUN_00302ee0(int param_1,float *param_2)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  fVar8 = *param_2 - *(float *)(param_1 + 0xf4);
  fVar6 = param_2[1] - *(float *)(param_1 + 0xf8);
  fVar5 = param_2[2] - *(float *)(param_1 + 0xfc);
  fStack_138 = fVar8 * DAT_0045152c - fVar6 * DAT_00451528;
  fStack_13c = fVar5 * DAT_00451528 - fVar8 * DAT_00451530;
  fStack_140 = fVar6 * DAT_00451530 - fVar5 * DAT_0045152c;
  fStack_130 = fStack_140;
  fStack_12c = fStack_13c;
  fStack_128 = fStack_138;
  fVar5 = (float)FUN_00389140(&fStack_140);
  if (SQRT(fVar5) != 0.0) {
    fVar5 = (*(float *)(*(int *)(param_1 + 0x160) + 4) * *(float *)(param_1 + 0x58)) / SQRT(fVar5);
    fStack_138 = fStack_138 * fVar5;
    fStack_140 = fStack_140 * fVar5;
    fStack_13c = fStack_13c * fVar5;
    lVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0x450198);
    if (lVar2 == 0) {
      fVar5 = 0.0;
      if (DAT_003c9ed4 != 0) {
        fVar5 = *(float *)(DAT_003c9ed4 + 0xc);
      }
    }
    else {
      fVar5 = *(float *)((int)lVar2 + 4) * 0.5;
    }
    fVar6 = *(float *)(param_1 + 0x50);
    iVar4 = 0;
    while( true ) {
      if (iVar4 == 0) {
        fStack_100 = *param_2 + fStack_140;
        fStack_fc = param_2[1] + fStack_13c;
        fStack_f8 = param_2[2] + fStack_138;
        fStack_10c = *(float *)(param_1 + 0xf8) + fStack_13c;
        fStack_108 = *(float *)(param_1 + 0xfc) + fStack_138;
        fStack_110 = *(float *)(param_1 + 0xf4) + fStack_140;
      }
      else {
        fStack_100 = *param_2 - fStack_140;
        fStack_fc = param_2[1] - fStack_13c;
        fStack_f8 = param_2[2] - fStack_138;
        fStack_10c = *(float *)(param_1 + 0xf8) - fStack_13c;
        fStack_108 = *(float *)(param_1 + 0xfc) - fStack_138;
        fStack_110 = *(float *)(param_1 + 0xf4) - fStack_140;
      }
      fStack_f0 = fStack_100 - fStack_110;
      fStack_ec = fStack_fc - fStack_10c;
      fStack_e8 = fStack_f8 - fStack_108;
      fVar8 = (float)FUN_00389140(&fStack_f0);
      fVar8 = SQRT(fVar8);
      if (fVar8 == 0.0) break;
      fStack_e0 = fStack_f0 / fVar8;
      fStack_dc = fStack_ec / fVar8;
      fVar9 = 0.0;
      fStack_d8 = fStack_e8 / fVar8;
      uVar3 = 0;
      do {
        if (fVar8 < fVar9) {
          return 0;
        }
        fStack_bc = fVar9 * fStack_dc;
        fStack_c0 = fVar9 * fStack_e0;
        fStack_b8 = fVar9 * fStack_d8;
        fStack_12c = fStack_10c + fStack_bc;
        fStack_130 = fStack_110 + fStack_c0;
        fStack_128 = fStack_108 + fStack_b8;
        fStack_11c = fStack_12c - (fVar6 + fVar5);
        fStack_120 = fStack_130;
        fStack_118 = fStack_128;
        fStack_d0 = fStack_130;
        fStack_cc = fStack_12c;
        fStack_c8 = fStack_128;
        cVar1 = (*DAT_00451250)(&fStack_130,&fStack_120,
                                *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),2);
        if (cVar1 != '\0') {
          return 1;
        }
        fVar7 = 0.0;
        uVar3 = uVar3 + 1;
        if (DAT_003c9ed4 != 0) {
          fVar7 = *(float *)(DAT_003c9ed4 + 0xc);
        }
        fVar9 = fVar9 + fVar7;
      } while (uVar3 < 2);
      if (fVar8 < fVar9) {
        return 0;
      }
      fVar9 = fVar9 + (fVar8 - fVar9) * 0.5;
      fStack_ac = fVar9 * fStack_dc;
      fStack_a8 = fVar9 * fStack_d8;
      fStack_b0 = fVar9 * fStack_e0;
      fStack_12c = fStack_10c + fStack_ac;
      fStack_128 = fStack_108 + fStack_a8;
      fStack_130 = fStack_110 + fStack_b0;
      fStack_11c = fStack_12c - (fVar6 * 1.2 + fVar5);
      fStack_120 = fStack_130;
      fStack_118 = fStack_128;
      fStack_d0 = fStack_130;
      fStack_cc = fStack_12c;
      fStack_c8 = fStack_128;
      cVar1 = (*DAT_00451250)(&fStack_130,&fStack_120,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),
                              2);
      iVar4 = iVar4 + 1;
      if (cVar1 != '\0') {
        return 1;
      }
      if (1 < iVar4) {
        return 0;
      }
    }
  }
  return 0;
}


// ==== FUN_00303388 @ 00303388 ====

/* WARNING: Removing unreachable block (ram,0x00303578) */
/* WARNING: Removing unreachable block (ram,0x0030348c) */
/* WARNING: Removing unreachable block (ram,0x00303600) */
/* WARNING: Removing unreachable block (ram,0x00303424) */

float FUN_00303388(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = (**(code **)(*param_1 + 0x5c))((int)param_1 + (int)*(short *)(*param_1 + 0x58));
  if (lVar5 == 1) {
    iVar4 = *(int *)(param_1[1] + 0x14);
    fVar9 = *(float *)(iVar4 + 0x30) - (float)param_1[0x34];
    fVar8 = *(float *)(iVar4 + 0x38) - (float)param_1[0x36];
    fVar10 = *(float *)(iVar4 + 0x34) - (float)param_1[0x35];
    return SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
  }
  iVar4 = *(int *)(param_1[1] + 0x14);
  fVar9 = *(float *)(iVar4 + 0x30) - (float)param_1[0x3a];
  fVar8 = *(float *)(iVar4 + 0x38) - (float)param_1[0x3c];
  fVar10 = *(float *)(iVar4 + 0x34) - (float)param_1[0x3b];
  fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) + 0.0;
  bVar1 = false;
  if ((float)param_1[0x3a] == (float)param_1[0x34]) {
    if ((float)param_1[0x3b] != (float)param_1[0x35]) {
      bVar1 = true;
      goto LAB_003034e8;
    }
    if ((float)param_1[0x3c] == (float)param_1[0x36]) goto LAB_003034e8;
  }
  bVar1 = true;
LAB_003034e8:
  if (bVar1) {
    iVar4 = param_1[0x50];
    uVar6 = param_1[0x1d];
    if ((iVar4 != -1) && (iVar4 + 1U < uVar6)) {
      iVar7 = iVar4 * 0xc;
      do {
        pfVar2 = (float *)(iVar7 + param_1[0x20]);
        uVar6 = param_1[0x1d];
        uVar3 = iVar4 + 2;
        fVar8 = fVar8 + SQRT((pfVar2[5] - pfVar2[2]) * (pfVar2[5] - pfVar2[2]) +
                             (pfVar2[3] - *pfVar2) * (pfVar2[3] - *pfVar2) +
                             (pfVar2[4] - pfVar2[1]) * (pfVar2[4] - pfVar2[1]));
        iVar7 = iVar7 + 0xc;
        iVar4 = iVar4 + 1;
      } while (uVar3 < uVar6);
    }
    iVar4 = uVar6 * 0xc + param_1[0x20];
    fVar10 = *(float *)(iVar4 + -4) - (float)param_1[0x36];
    fVar11 = *(float *)(iVar4 + -0xc) - (float)param_1[0x34];
    fVar9 = *(float *)(iVar4 + -8) - (float)param_1[0x35];
    fVar8 = fVar8 + SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9);
  }
  return fVar8;
}


// ==== FUN_00303630 @ 00303630 ====

undefined4 FUN_00303630(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  
  lVar4 = FUN_002ec058(DAT_003c9ed4,0x452158);
  if ((lVar4 == 0) || (lVar5 = FUN_002f2f58(lVar4,param_2), lVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x184);
    *(int *)(param_1 + 100) = (int)lVar5;
    if ((piVar1 == (int *)0x0) ||
       (lVar6 = (**(code **)(*piVar1 + 0x3c))
                          ((int)piVar1 + (int)*(short *)(*piVar1 + 0x38),param_2,param_1 + 0x68),
       lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    }
    uVar2 = FUN_002f30e8(lVar4,lVar5,0x454788);
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
    uVar2 = FUN_002f30e8(lVar4,lVar5,0x451658);
    *(undefined4 *)(param_1 + 0x180) = uVar2;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar7 = *(int *)(param_1 + 0x18);
      while( true ) {
        piVar1 = *(int **)(uVar8 * 4 + iVar7);
        if (piVar1 == (int *)0x0) {
          uVar3 = *(uint *)(param_1 + 0x20);
        }
        else {
          (**(code **)(*piVar1 + 0x1c))
                    ((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),*(undefined4 *)(param_1 + 100));
          uVar3 = *(uint *)(param_1 + 0x20);
        }
        uVar8 = uVar8 + 1;
        if (uVar3 <= uVar8) break;
        iVar7 = *(int *)(param_1 + 0x18);
      }
    }
    uVar8 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar7 = *(int *)(param_1 + 0xc);
      while( true ) {
        piVar1 = *(int **)(uVar8 * 4 + iVar7);
        if (piVar1 == (int *)0x0) {
          uVar3 = *(uint *)(param_1 + 0x10);
        }
        else {
          (**(code **)(*piVar1 + 0x24))
                    ((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),*(undefined4 *)(param_1 + 100));
          uVar3 = *(uint *)(param_1 + 0x10);
        }
        uVar8 = uVar8 + 1;
        if (uVar3 <= uVar8) break;
        iVar7 = *(int *)(param_1 + 0xc);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_003037b8 @ 003037b8 ====

undefined4 FUN_003037b8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x180) = 0;
    goto LAB_0030390c;
  }
  lVar4 = FUN_002ec058(DAT_003c9ed4,0x452158);
  if (lVar4 == 0) {
    return 0;
  }
  *(int *)(param_1 + 100) = param_2;
  if (*(int *)(param_1 + 0x184) == 0) {
LAB_003038e0:
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  else {
    uVar8 = *(uint *)((int)lVar4 + 8);
    iVar6 = 0;
    if (uVar8 != 0) {
      piVar2 = *(int **)((int)lVar4 + 4);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x84) == param_2) {
        iVar6 = iVar1 + 4;
      }
      else {
        for (uVar7 = 1; uVar7 < uVar8; uVar7 = uVar7 + 1) {
          iVar1 = piVar2[uVar7];
          if (*(int *)(iVar1 + 0x84) == *(int *)(param_1 + 100)) {
            iVar6 = iVar1 + 4;
            break;
          }
        }
      }
    }
    if ((iVar6 == 0) ||
       (iVar1 = **(int **)(param_1 + 0x184),
       lVar5 = (**(code **)(iVar1 + 0x3c))
                         ((int)*(int **)(param_1 + 0x184) + (int)*(short *)(iVar1 + 0x38),iVar6,
                          param_1 + 0x68), lVar5 == 0)) goto LAB_003038e0;
  }
  uVar3 = FUN_002f30e8(lVar4,param_2,0x454788);
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  uVar3 = FUN_002f30e8(lVar4,param_2,0x451658);
  *(undefined4 *)(param_1 + 0x180) = uVar3;
LAB_0030390c:
  uVar8 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    while( true ) {
      piVar2 = *(int **)(uVar8 * 4 + iVar6);
      if (piVar2 == (int *)0x0) {
        uVar7 = *(uint *)(param_1 + 0x20);
      }
      else {
        (**(code **)(*piVar2 + 0x1c))
                  ((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),*(undefined4 *)(param_1 + 100));
        uVar7 = *(uint *)(param_1 + 0x20);
      }
      uVar8 = uVar8 + 1;
      if (uVar7 <= uVar8) break;
      iVar6 = *(int *)(param_1 + 0x18);
    }
  }
  uVar8 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    while( true ) {
      piVar2 = *(int **)(uVar8 * 4 + iVar6);
      if (piVar2 == (int *)0x0) {
        uVar7 = *(uint *)(param_1 + 0x10);
      }
      else {
        (**(code **)(*piVar2 + 0x24))
                  ((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),*(undefined4 *)(param_1 + 100));
        uVar7 = *(uint *)(param_1 + 0x10);
      }
      uVar8 = uVar8 + 1;
      if (uVar7 <= uVar8) break;
      iVar6 = *(int *)(param_1 + 0xc);
    }
  }
  return 1;
}


// ==== CPathFinder_003039d8 @ 003039d8 ====

/* Strings referenciadas:
     "CPathFinder"
     "SimpleStopCondition"
     "NearestVertex"
     "LocallyVisibleVertex"
     "NearestVertexOpt"
     "VisibleGo"
     "AlwaysGo"
     "VisibleWithoutHoleGo"
     "SimpleCheck"
     "ComplexCheck"
     "VisibilityCheck"
     "HoleCheck"
     ... */

void CPathFinder_003039d8(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_004549d0 = &DAT_003e0040;
      DAT_004549c8 = &DAT_003e00e0;
      DAT_004559c0 = &DAT_003e0040;
      DAT_004558b0 = &DAT_003e0040;
      DAT_004557a0 = &DAT_003e0040;
      DAT_00455690 = &DAT_003e0040;
      DAT_00455580 = &DAT_003e0040;
      DAT_00455470 = &DAT_003e0040;
      DAT_00455360 = &DAT_003e0040;
      DAT_00455250 = &DAT_003e0040;
      DAT_00455140 = &DAT_003e0040;
      DAT_00455030 = &DAT_003e0040;
      DAT_00454f20 = &DAT_003e0040;
      DAT_00454e10 = &DAT_003e0040;
      DAT_00454d00 = &DAT_003e0040;
      DAT_00454bf0 = &DAT_003e0040;
      DAT_00454ae0 = &DAT_003e0040;
    }
    else {
      FUN_002e75d0(0x4548b8,0x408268,0x2fec10,0x4512b0,1,1);
      DAT_004549d0 = &DAT_003eff48;
      strcpy(0x4549d4,0x408278);
      DAT_00454ad4 = FUN_00305010;
      piVar1 = (int *)FUN_00393650();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x4549d4);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_004549d0;
            bVar3 = true;
            goto LAB_00303b0c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_004549d0;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_00303b0c:
      if (bVar3) {
        iVar6 = FUN_00393650();
        DAT_00454ad8 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00454ad8 = -1;
      }
      DAT_00454ae0 = &DAT_003eff30;
      strcpy(0x454ae4,0x408290);
      DAT_00454be4 = FUN_00393950;
      piVar1 = (int *)FUN_003936c8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x454ae4);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00454ae0;
            bVar3 = true;
            goto LAB_00303c0c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00454ae0;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_00303c0c:
      if (bVar3) {
        iVar6 = FUN_003936c8();
        DAT_00454be8 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00454be8 = -1;
      }
      DAT_00454bf0 = &DAT_003eff30;
      strcpy(0x454bf4,0x4082a0);
      DAT_00454cf4 = FUN_00305340;
      piVar1 = (int *)FUN_003936c8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x454bf4);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00454bf0;
            bVar3 = true;
            goto LAB_00303d14;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00454bf0;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_00303d14:
      if (bVar3) {
        iVar6 = FUN_003936c8();
        DAT_00454cf8 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00454cf8 = -1;
      }
      DAT_00454d00 = &DAT_003eff30;
      strcpy(0x454d04,0x4082b8);
      DAT_00454e04 = FUN_00305378;
      piVar1 = (int *)FUN_003936c8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x454d04);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00454d00;
            bVar3 = true;
            goto LAB_00303e1c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00454d00;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_00303e1c:
      if (bVar3) {
        iVar6 = FUN_003936c8();
        DAT_00454e08 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00454e08 = -1;
      }
      DAT_00454e10 = &DAT_003eff18;
      strcpy(0x454e14,0x4082d0);
      DAT_00454f14 = FUN_00305150;
      piVar1 = (int *)FUN_00393740();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x454e14);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00454e10;
            bVar3 = true;
            goto LAB_00303f2c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00454e10;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_00303f2c:
      if (bVar3) {
        iVar6 = FUN_00393740();
        DAT_00454f18 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00454f18 = -1;
      }
      DAT_00454f20 = &DAT_003eff18;
      strcpy(0x454f24,0x4082e0);
      DAT_00455024 = &LAB_00305188;
      piVar1 = (int *)FUN_00393740();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x454f24);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00454f20;
            bVar3 = true;
            goto LAB_0030403c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00454f20;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030403c:
      if (bVar3) {
        iVar6 = FUN_00393740();
        DAT_00455028 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455028 = -1;
      }
      DAT_00455030 = &DAT_003eff18;
      strcpy(0x455034,0x4082f0);
      DAT_00455134 = FUN_00305190;
      piVar1 = (int *)FUN_00393740();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455034);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455030;
            bVar3 = true;
            goto LAB_0030414c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455030;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030414c:
      if (bVar3) {
        iVar6 = FUN_00393740();
        DAT_00455138 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455138 = -1;
      }
      DAT_00455140 = &DAT_003eff48;
      strcpy(0x455144,0x408308);
      DAT_00455244 = FUN_00302198;
      piVar1 = (int *)FUN_00393650();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455144);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455140;
            bVar3 = true;
            goto LAB_0030425c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455140;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030425c:
      if (bVar3) {
        iVar6 = FUN_00393650();
        DAT_00455248 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455248 = -1;
      }
      DAT_00455250 = &DAT_003eff48;
      strcpy(0x455254,0x408318);
      DAT_00455354 = FUN_00302388;
      piVar1 = (int *)FUN_00393650();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455254);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455250;
            bVar3 = true;
            goto LAB_0030436c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455250;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030436c:
      if (bVar3) {
        iVar6 = FUN_00393650();
        DAT_00455358 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455358 = -1;
      }
      DAT_00455360 = &DAT_003eff18;
      strcpy(0x455364,0x408328);
      DAT_00455464 = FUN_00305110;
      piVar1 = (int *)FUN_00393740();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455364);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455360;
            bVar3 = true;
            goto LAB_0030447c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455360;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030447c:
      if (bVar3) {
        iVar6 = FUN_00393740();
        DAT_00455468 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455468 = -1;
      }
      DAT_00455470 = &DAT_003eff18;
      strcpy(0x455474,0x408338);
      DAT_00455574 = FUN_003016e8;
      piVar1 = (int *)FUN_00393740();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455474);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455470;
            bVar3 = true;
            goto LAB_0030458c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455470;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030458c:
      if (bVar3) {
        iVar6 = FUN_00393740();
        DAT_00455578 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455578 = -1;
      }
      DAT_00455580 = &DAT_003eff18;
      strcpy(0x455584,0x408348);
      DAT_00455684 = &LAB_00305148;
      piVar1 = (int *)FUN_00393740();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455584);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455580;
            bVar3 = true;
            goto LAB_0030469c;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455580;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_0030469c:
      if (bVar3) {
        iVar6 = FUN_00393740();
        DAT_00455688 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455688 = -1;
      }
      DAT_00455690 = &DAT_003eff00;
      strcpy(0x455694,0x408350);
      DAT_00455794 = FUN_00301a30;
      piVar1 = (int *)FUN_003937b8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x455694);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_00455690;
            bVar3 = true;
            goto LAB_003047ac;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_00455690;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_003047ac:
      if (bVar3) {
        iVar6 = FUN_003937b8();
        DAT_00455798 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455798 = -1;
      }
      DAT_004557a0 = &DAT_003eff00;
      strcpy(0x4557a4,0x408360);
      DAT_004558a4 = FUN_00301c68;
      piVar1 = (int *)FUN_003937b8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x4557a4);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_004557a0;
            bVar3 = true;
            goto LAB_003048bc;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_004557a0;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_003048bc:
      if (bVar3) {
        iVar6 = FUN_003937b8();
        DAT_004558a8 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_004558a8 = -1;
      }
      DAT_004558b0 = &DAT_003eff00;
      strcpy(0x4558b4,0x408370);
      DAT_004559b4 = FUN_00305250;
      piVar1 = (int *)FUN_003937b8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x4558b4);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_004558b0;
            bVar3 = true;
            goto LAB_003049cc;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_004558b0;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_003049cc:
      if (bVar3) {
        iVar6 = FUN_003937b8();
        DAT_004559b8 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_004559b8 = -1;
      }
      DAT_004559c0 = &DAT_003eff00;
      strcpy(0x4559c4,0x408388);
      DAT_00455ac4 = FUN_00305200;
      piVar1 = (int *)FUN_003937b8();
      iVar6 = 0;
      piVar5 = piVar1;
      piVar4 = piVar1;
      if (0 < piVar1[0x10]) {
        do {
          lVar2 = strcmp(*piVar4 + 4,0x4559c4);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) {
            *piVar5 = (int)&DAT_004559c0;
            bVar3 = true;
            goto LAB_00304adc;
          }
          piVar5 = piVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < piVar1[0x10]);
      }
      if (piVar1[0x10] == 0x10) {
        bVar3 = false;
        *(undefined1 *)(piVar1 + 0x11) = 1;
      }
      else {
        bVar3 = true;
        piVar1[piVar1[0x10]] = (int)&DAT_004559c0;
        piVar1[0x10] = piVar1[0x10] + 1;
      }
LAB_00304adc:
      if (bVar3) {
        iVar6 = FUN_003937b8();
        DAT_00455ac8 = *(int *)(iVar6 + 0x40) + -1;
      }
      else {
        DAT_00455ac8 = -1;
      }
    }
  }
  return;
}


// ==== FUN_00304be8 @ 00304be8 ====

undefined4 FUN_00304be8(undefined8 param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_2;
  do {
    if (piVar4 == &DAT_00451778) {
      bVar2 = true;
      goto LAB_00304c2c;
    }
    piVar4 = (int *)piVar4[0x42];
  } while (piVar4 != (int *)0x0);
  bVar2 = false;
LAB_00304c2c:
  if (bVar2) {
    iVar5 = (int)param_1;
    iVar1 = *(int *)(*param_2 * 4 + *(int *)(iVar5 + 0xc));
    FUN_002e5218(param_1,param_2);
    if (iVar1 == 0) {
      piVar4 = *(int **)(*param_2 * 4 + *(int *)(iVar5 + 0xc));
      iVar1 = *piVar4;
      (**(code **)(iVar1 + 0x24))
                ((int)piVar4 + (int)*(short *)(iVar1 + 0x20),*(undefined4 *)(iVar5 + 100));
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00304cb0 @ 00304cb0 ====

void FUN_00304cb0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x18) + *param_2 * 4);
  if (*piVar3 == 0) {
    piVar1 = (int *)(*(code *)param_2[1])();
    *piVar3 = (int)piVar1;
    (**(code **)(*piVar1 + 0x1c))
              ((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),*(undefined4 *)(param_1 + 100));
    iVar2 = *piVar3;
  }
  else {
    iVar2 = *piVar3;
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  return;
}


// ==== FUN_00304de8 @ 00304de8 ====

void FUN_00304de8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)param_2;
  uVar2 = (**(code **)(iVar1 + 0x14))((int)(int *)param_2 + (int)*(short *)(iVar1 + 0x10));
  FUN_00304f08(param_1,uVar2,param_2);
  return;
}


// ==== FUN_00304e38 @ 00304e38 ====

undefined8 FUN_00304e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  lVar2 = FUN_00300278(param_1,param_3);
  lVar3 = FUN_00300278(param_1,param_4);
  if ((lVar2 == 0) || (lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    piVar5 = (int *)param_1;
    piVar1 = (int *)(**(code **)(*piVar5 + 0x84))((int)piVar5 + (int)*(short *)(*piVar5 + 0x80));
    uVar4 = (**(code **)(*piVar1 + 0x14))
                      ((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),
                       *(undefined4 *)(piVar5[1] + 0x14),lVar2,lVar3,param_2);
  }
  return uVar4;
}


// ==== FUN_00304ee8 @ 00304ee8 ====

void FUN_00304ee8(undefined8 param_1,undefined8 param_2)

{
  FUN_00304f08(param_1,param_2,0);
  return;
}


// ==== FUN_00304f08 @ 00304f08 ====

undefined4 FUN_00304f08(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  undefined1 auStack_60 [32];
  
  piVar4 = (int *)param_1;
  *(undefined1 *)(piVar4 + 0x2c) = 0;
  FUN_002dfbf8(piVar4[2]);
  iVar1 = *(int *)(piVar4[1] + 0x14);
  piVar4[0x3d] = *(int *)(iVar1 + 0x30);
  piVar4[0x3e] = *(int *)(iVar1 + 0x34);
  piVar4[0x3f] = *(int *)(iVar1 + 0x38);
  *(undefined1 *)(piVar4 + 0x6d) = 1;
  piVar4[0x34] = *param_2;
  piVar4[0x35] = param_2[1];
  piVar4[0x36] = param_2[2];
  piVar4[0x2e] = piVar4[0x34];
  piVar4[0x2f] = piVar4[0x35];
  piVar4[0x30] = piVar4[0x36];
  lVar3 = FUN_00300a40(param_1,auStack_60,param_3);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if ((char)piVar4[0x2c] == '\0') {
      if (((char)piVar4[0x6d] != '\0') &&
         (lVar3 = (**(code **)(*piVar4 + 0xbc))
                            ((int)piVar4 + (int)*(short *)(*piVar4 + 0xb8),auStack_60), lVar3 == 0))
      {
        return 0;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_00305010 @ 00305010 ====

/* WARNING: Removing unreachable block (ram,0x0030503c) */

undefined4 FUN_00305010(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00393810(param_1 + 0xc4);
  uVar1 = 0;
  if ((SQRT(fVar2) < *(float *)(param_1 + 0x28)) &&
     (uVar1 = 1, *(float *)(param_1 + 0x38) <= ABS(*(float *)(param_1 + 200)))) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_00305090 @ 00305090 ====

void FUN_00305090(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2[3];
  fVar2 = *param_2 / 10.0;
  fVar1 = param_2[2];
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0xf4) + fVar2 * param_2[1];
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0xf8) + fVar2 * fVar1;
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0xfc) + fVar2 * fVar3;
  return;
}


// ==== FUN_00305110 @ 00305110 ====

void FUN_00305110(int param_1,undefined8 param_2)

{
  FUN_002e27f8(*(undefined4 *)(*(int *)(param_1 + 0x160) + 4),param_1 + 0xf4,param_2,
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),2);
  return;
}


// ==== FUN_00305150 @ 00305150 ====

void FUN_00305150(int param_1,undefined8 param_2)

{
  FUN_002e27f8(*(undefined4 *)(*(int *)(param_1 + 0x160) + 4),param_1 + 0xf4,param_2,
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),2);
  return;
}


