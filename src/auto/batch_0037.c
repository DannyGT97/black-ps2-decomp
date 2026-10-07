// ==== FUN_00305190 @ 00305190 ====

bool FUN_00305190(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  cVar1 = FUN_002e27f8(*(undefined4 *)(*(int *)(iVar4 + 0x160) + 4),iVar4 + 0xf4,param_2,
                       *(undefined4 *)(*(int *)(iVar4 + 4) + 0x14),2);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    lVar3 = FUN_00302ee0(param_1,param_2);
    bVar2 = lVar3 != 1;
  }
  return bVar2;
}


// ==== FUN_00305200 @ 00305200 ====

undefined4 FUN_00305200(int *param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_1[0x3a] = param_1[0x3d];
  param_1[0x3b] = param_1[0x3e];
  param_1[0x3c] = param_1[0x3f];
  (**(code **)(*param_1 + 0x8c))((int)param_1 + (int)*(short *)(*param_1 + 0x88));
  return 1;
}


// ==== FUN_00305250 @ 00305250 ====

undefined8 FUN_00305250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x1b0);
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_00301a30(param_1,param_2);
  }
  else {
    (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_3,param_2);
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_003052a0 @ 003052a0 ====

/* WARNING: Removing unreachable block (ram,0x00305304) */

void FUN_003052a0(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xfc);
  fVar4 = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xf4);
  fVar2 = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xf8);
  *(float *)(param_1 + 0x1a8) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  uVar1 = FUN_002e91c0();
  FUN_002e9868(uVar1,*(undefined4 *)(param_1 + 0x18c),*(undefined4 *)(*(int *)(param_1 + 4) + 0x14))
  ;
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}


// ==== FUN_00305340 @ 00305340 ====

void FUN_00305340(int param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  FUN_002fb9d0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 100),param_2,
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),param_3,param_4);
  return;
}


// ==== FUN_00305378 @ 00305378 ====

undefined8 FUN_00305378(int param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x180) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_002fbc20(*(undefined4 *)(param_1 + 0x38),param_2,
                         *(undefined4 *)(*(int *)(param_1 + 4) + 0x14),*(int *)(param_1 + 0x180),
                         param_3,param_4);
  }
  return uVar1;
}


// ==== FUN_003053f0 @ 003053f0 ====

void FUN_003053f0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)param_2;
    (**(code **)(iVar1 + 0xcc))((int)(int *)param_2 + (int)*(short *)(iVar1 + 200),param_1);
  }
  return;
}


// ==== FUN_003054b8 @ 003054b8 ====

void FUN_003054b8(void)

{
  CPathFinder_003039d8(1,0xffff);
  return;
}


// ==== FUN_003054d8 @ 003054d8 ====

void FUN_003054d8(void)

{
  CPathFinder_003039d8(0,0xffff);
  return;
}


// ==== FUN_003054f8 @ 003054f8 ====
// GLOBAL DAT_004548b8 int
// GLOBAL DAT_00455ad0 int
// GLOBAL DAT_00455be8 int

undefined4 FUN_003054f8(void)

{
  if (((DAT_004548b8 != -1) && (DAT_00455ad0 != -1)) && (DAT_00455be8 != -1)) {
    return 1;
  }
  return 0;
}


// ==== FUN_00305538 @ 00305538 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_00305538(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xf0,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0xf0,uVar1);
  }
  FUN_003055e0(auStack_40[0],param_1);
  return;
}


// ==== FUN_003055e0 @ 003055e0 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003f0760 undefined

undefined8 FUN_003055e0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[1] = param_2;
  *puVar3 = &DAT_003f0760;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x30] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x34] = 0x3dcccccd;
  puVar3[0x35] = 0xbf800000;
  puVar3[0x36] = 0x41200000;
  puVar3[0x37] = 0x3f000000;
  puVar3[0x38] = 0x3e800000;
  puVar3[0x39] = 0x41c80000;
  puVar3[0x3a] = 0x3f333333;
  *(undefined1 *)(puVar3 + 0x31) = 0;
  puVar3[0x32] = 0;
  puVar3[0x33] = 0x3f000000;
  puVar3[0x3b] = 0x40a00000;
  memset(puVar3 + 0x15,0,100);
  if (puVar3[1] == 0) {
    uVar5 = 0;
    if (DAT_003c9ed4 != 0) {
      uVar5 = *(undefined4 *)(DAT_003c9ed4 + 0xc);
    }
    puVar3[2] = uVar5;
  }
  else {
    lVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(puVar3[1] + 4) + 0x14),0x450940);
    if ((lVar2 == 0) || (fVar4 = *(float *)((int)lVar2 + 4), puVar3[2] = fVar4, fVar4 == 0.0)) {
      uVar5 = 0;
      if (DAT_003c9ed4 != 0) {
        uVar5 = *(undefined4 *)(DAT_003c9ed4 + 0xc);
      }
      puVar3[2] = uVar5;
    }
    lVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(puVar3[1] + 4) + 0x14),0x450198);
    if (lVar2 == 0) {
      iVar1 = puVar3[1];
    }
    else {
      puVar3[4] = *(undefined4 *)((int)lVar2 + 4);
      iVar1 = puVar3[1];
    }
    lVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x14),0x4504e0);
    if (lVar2 != 0) {
      puVar3[5] = *(undefined4 *)((int)lVar2 + 4);
    }
  }
  return param_1;
}


// ==== FUN_003057e8 @ 003057e8 ====

/* Strings referenciadas:
     "DynDelayTime"
     "DynRatioAttrRep"
     "TimeMinTrigger"
     "TimeMaxTrigger"
     "SlowSpeedFactor"
     "VerySlowSpeedFactor"
     "DetectionDistanceRatio" */

undefined4 FUN_003057e8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar1 = FUN_002e3920(param_2);
  lVar2 = stricmp(uVar1,0x4085b0);
  if (lVar2 == 0) {
    uVar1 = FUN_002e3918(param_2);
    uVar1 = FUN_0035e730(uVar1);
    uVar3 = FUN_00291c68(uVar1);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_002e3920(param_2);
    lVar2 = stricmp(uVar1,0x4085c0);
    if (lVar2 == 0) {
      uVar1 = FUN_002e3918(param_2);
      uVar1 = FUN_0035e730(uVar1);
      uVar3 = FUN_00291c68(uVar1);
      *(undefined4 *)(param_1 + 0xcc) = uVar3;
      uVar3 = 1;
    }
    else {
      uVar1 = FUN_002e3920(param_2);
      lVar2 = stricmp(uVar1,0x4085d0);
      if (lVar2 == 0) {
        uVar1 = FUN_002e3918(param_2);
        uVar1 = FUN_0035e730(uVar1);
        uVar3 = FUN_00291c68(uVar1);
        *(undefined4 *)(param_1 + 0xd4) = uVar3;
        uVar3 = 1;
      }
      else {
        uVar1 = FUN_002e3920(param_2);
        lVar2 = stricmp(uVar1,0x4085e0);
        if (lVar2 == 0) {
          uVar1 = FUN_002e3918(param_2);
          uVar1 = FUN_0035e730(uVar1);
          uVar3 = FUN_00291c68(uVar1);
          *(undefined4 *)(param_1 + 0xd8) = uVar3;
          uVar3 = 1;
        }
        else {
          uVar1 = FUN_002e3920(param_2);
          lVar2 = stricmp(uVar1,0x4085f0);
          if (lVar2 == 0) {
            uVar1 = FUN_002e3918(param_2);
            uVar1 = FUN_0035e730(uVar1);
            uVar3 = FUN_00291c68(uVar1);
            *(undefined4 *)(param_1 + 0xdc) = uVar3;
            uVar3 = 1;
          }
          else {
            uVar1 = FUN_002e3920(param_2);
            lVar2 = stricmp(uVar1,0x408600);
            if (lVar2 == 0) {
              uVar1 = FUN_002e3918(param_2);
              uVar1 = FUN_0035e730(uVar1);
              uVar3 = FUN_00291c68(uVar1);
              *(undefined4 *)(param_1 + 0xe0) = uVar3;
              uVar3 = 1;
            }
            else {
              uVar1 = FUN_002e3920(param_2);
              lVar2 = stricmp(uVar1,0x408618);
              uVar3 = 0;
              if (lVar2 == 0) {
                uVar1 = FUN_002e3918(param_2);
                uVar1 = FUN_0035e730(uVar1);
                fVar4 = (float)FUN_00291c68(uVar1);
                uVar3 = 1;
                *(float *)(param_1 + 0xe4) = fVar4 * fVar4;
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}


// ==== FUN_003059f0 @ 003059f0 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_004549c4 uint

/* WARNING: Removing unreachable block (ram,0x00305b50) */
/* WARNING: Removing unreachable block (ram,0x00305d1c) */
/* WARNING: Removing unreachable block (ram,0x00305e48) */

undefined4 FUN_003059f0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  iVar2 = DAT_003c9ed4;
  *(undefined4 *)(param_1 + 0x4c) = 0x49742400;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 8);
  do {
    while( true ) {
      if (iVar2 == 0) {
        return 1;
      }
      iVar3 = *(int *)(iVar2 + 4);
      if ((iVar3 != iVar1) && ((*(uint *)(iVar3 + 0x1c) & DAT_004549c4) != 0)) break;
LAB_00305f58:
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    iVar5 = FUN_002e4ce0(iVar3,0x450940);
    fStack_110 = *(float *)(iVar3 + 0x30) - *(float *)(iVar1 + 0x30);
    fStack_10c = *(float *)(iVar3 + 0x34) - *(float *)(iVar1 + 0x34);
    fStack_108 = *(float *)(iVar3 + 0x38) - *(float *)(iVar1 + 0x38);
    fVar15 = *(float *)(iVar5 + 4);
    fVar14 = fStack_110 * fStack_110 + fStack_10c * fStack_10c + fStack_108 * fStack_108;
    if (*(float *)(param_1 + 8) * *(float *)(param_1 + 8) * *(float *)(param_1 + 0xe4) < fVar14)
    goto LAB_00305f58;
    fVar14 = SQRT(fVar14);
    if (0.0 < fVar14) {
      fStack_110 = fStack_110 / fVar14;
      fStack_10c = fStack_10c / fVar14;
      fStack_108 = fStack_108 / fVar14;
    }
    else {
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      fStack_108 = 0.0;
    }
    if ((*(float *)(iVar1 + 0x48) * fStack_110 + *(float *)(iVar1 + 0x4c) * fStack_10c +
         *(float *)(iVar1 + 0x50) * fStack_108 <= 0.0) && (*(float *)(param_1 + 8) <= fVar14))
    goto LAB_00305f58;
    fVar7 = *(float *)(iVar3 + 0x54);
    fVar14 = 10000.0;
    fVar9 = *(float *)(iVar1 + 0x54);
    fVar10 = fVar7 * *(float *)(iVar3 + 0x48) - fVar9 * *(float *)(iVar1 + 0x48);
    fVar8 = fVar7 * *(float *)(iVar3 + 0x4c) - fVar9 * *(float *)(iVar1 + 0x4c);
    fVar12 = fVar7 * *(float *)(iVar3 + 0x50) - fVar9 * *(float *)(iVar1 + 0x50);
    fVar11 = *(float *)(iVar3 + 0x38) - *(float *)(iVar1 + 0x38);
    fVar9 = *(float *)(iVar3 + 0x30) - *(float *)(iVar1 + 0x30);
    fVar7 = *(float *)(iVar3 + 0x34) - *(float *)(iVar1 + 0x34);
    if (*(float *)(iVar1 + 0x54) == 0.0) {
      fVar6 = *(float *)(param_1 + 8);
    }
    else {
      fStack_e0 = *(float *)(iVar1 + 0x30) - *param_2;
      fStack_dc = *(float *)(iVar1 + 0x34) - param_2[1];
      fStack_d8 = *(float *)(iVar1 + 0x38) - param_2[2];
      fVar14 = (float)FUN_00389140(&fStack_e0);
      fVar14 = SQRT(fVar14) / *(float *)(iVar1 + 0x54);
      fVar6 = *(float *)(param_1 + 8);
    }
    fVar13 = 10000.0;
    fVar15 = (fVar6 + fVar15) * 0.5 * 1.5;
    fVar6 = fVar10 * fVar10 + fVar8 * fVar8 + fVar12 * fVar12;
    fVar8 = fVar9 * fVar10 + fVar7 * fVar8 + fVar11 * fVar12;
    fVar8 = fVar8 + fVar8;
    fVar15 = (fVar9 * fVar9 + fVar7 * fVar7 + fVar11 * fVar11) - fVar15 * fVar15;
    if (fVar6 == 0.0) {
      bVar4 = false;
      fVar13 = 10000.0;
      fVar10 = 10000.0;
      if (fVar8 != 0.0) {
        bVar4 = true;
        fVar13 = -fVar15 / fVar8;
        fVar10 = fVar13;
      }
    }
    else {
      fVar15 = fVar8 * fVar8 - fVar6 * 4.0 * fVar15;
      bVar4 = false;
      fVar10 = fVar13;
      if (0.0 <= fVar15) {
        fVar15 = SQRT(fVar15);
        bVar4 = true;
        fVar13 = (-fVar8 - fVar15) / (fVar6 + fVar6);
        fVar10 = (-fVar8 + fVar15) / (fVar6 + fVar6);
      }
    }
    if (fVar13 <= fVar10) {
      fVar10 = fVar13;
    }
    fStack_e0 = fVar9;
    fStack_dc = fVar7;
    fStack_d8 = fVar11;
    if ((!bVar4) || (*(float *)(param_1 + 0xd8) <= fVar10)) goto LAB_00305f58;
    if (fVar14 <= fVar10) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      if (*(float *)(param_1 + 0xd4) < fVar10) {
        if (0x18 < *(int *)(param_1 + 0x50)) {
          return 1;
        }
        *(int *)(param_1 + *(int *)(param_1 + 0x50) * 4 + 0x54) = iVar3;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        if (fVar10 < *(float *)(param_1 + 0x4c)) {
          *(int *)(param_1 + 0x3c) = iVar3;
          *(undefined1 *)(param_1 + 0x38) = 1;
          *(float *)(param_1 + 0x4c) = fVar10;
          fStack_c8 = fVar10 * *(float *)(iVar1 + 0x50);
          fStack_d0 = fVar10 * *(float *)(iVar1 + 0x48);
          fStack_cc = fVar10 * *(float *)(iVar1 + 0x4c);
          fVar14 = *(float *)(iVar1 + 0x54);
          *(float *)(param_1 + 0x40) = fVar14 * fStack_d0;
          *(float *)(param_1 + 0x44) = fVar14 * fStack_cc;
          *(float *)(param_1 + 0x48) = fVar14 * fStack_c8;
          fStack_e0 = fVar14 * fStack_d0;
          fStack_dc = fVar14 * fStack_cc;
          fStack_d8 = fVar14 * fStack_c8;
        }
        goto LAB_00305f58;
      }
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  } while( true );
}


// ==== FUN_00305fd8 @ 00305fd8 ====
// GLOBAL DAT_00451528 float
// GLOBAL DAT_00451530 float
// GLOBAL DAT_0045152c float

/* WARNING: Removing unreachable block (ram,0x003061c8) */
/* WARNING: Removing unreachable block (ram,0x00306120) */
/* WARNING: Removing unreachable block (ram,0x00306338) */

undefined4 FUN_00305fd8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
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
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    fStack_100 = 0.0;
    iVar5 = *(int *)(param_1 + 0x50);
    fStack_fc = 0.0;
    fStack_128 = 0.0;
    fStack_f8 = 0.0;
    fStack_130 = 0.0;
    fStack_12c = 0.0;
    if (0 < iVar5) {
      piVar4 = (int *)(param_1 + 0x54);
      do {
        iVar2 = *piVar4;
        iVar5 = iVar5 + -1;
        piVar4 = piVar4 + 1;
        fStack_120 = *(float *)(iVar1 + 0x30) - *(float *)(iVar2 + 0x30);
        fStack_11c = *(float *)(iVar1 + 0x34) - *(float *)(iVar2 + 0x34);
        fStack_118 = *(float *)(iVar1 + 0x38) - *(float *)(iVar2 + 0x38);
        fStack_130 = fStack_130 + fStack_120;
        fStack_12c = fStack_12c + fStack_11c;
        fStack_128 = fStack_128 + fStack_118;
        fStack_100 = fStack_120;
        fStack_fc = fStack_11c;
        fStack_f8 = fStack_118;
      } while (iVar5 != 0);
    }
    fVar6 = (float)*(int *)(param_1 + 0x50);
    fStack_130 = fStack_130 / fVar6;
    fStack_128 = fStack_128 / fVar6;
    fStack_12c = fStack_12c / fVar6;
    fVar6 = (float)FUN_00389140(&fStack_130);
    fVar6 = SQRT(fVar6);
    fStack_130 = fStack_130 / fVar6;
    fStack_12c = fStack_12c / fVar6;
    fStack_128 = fStack_128 / fVar6;
    fVar6 = 1.0;
    fStack_120 = *param_2 - *(float *)(iVar1 + 0x30);
    fStack_118 = param_2[2] - *(float *)(iVar1 + 0x38);
    fStack_11c = param_2[1] - *(float *)(iVar1 + 0x34);
    fStack_110 = fStack_130;
    fStack_10c = fStack_12c;
    fStack_108 = fStack_128;
    fStack_100 = fStack_130;
    fStack_fc = fStack_12c;
    fStack_f8 = fStack_128;
    fStack_e0 = fStack_120;
    fStack_dc = fStack_11c;
    fStack_d8 = fStack_118;
    fStack_fc = (float)FUN_00389140(&fStack_120);
    fStack_fc = SQRT(fStack_fc);
    fStack_100 = fStack_120 / fStack_fc;
    fStack_f8 = fStack_118 / fStack_fc;
    fStack_fc = fStack_11c / fStack_fc;
    if (fStack_f8 * fStack_110 - fStack_100 * fStack_108 < 0.0) {
      fVar6 = -1.0;
    }
    fStack_b8 = *(float *)(param_1 + 0xcc);
    fStack_a8 = DAT_00451528 * fStack_fc - DAT_0045152c * fStack_100;
    fStack_b0 = DAT_0045152c * fStack_f8 - DAT_00451530 * fStack_fc;
    fStack_ac = DAT_00451530 * fStack_100 - DAT_00451528 * fStack_f8;
    fStack_128 = fVar6 * fStack_a8;
    fStack_9c = 1.0 - fStack_b8;
    fStack_130 = fVar6 * fStack_b0;
    fStack_12c = fVar6 * fStack_ac;
    fStack_98 = fStack_9c * fStack_128;
    fStack_c0 = fStack_b8 * fStack_100;
    fStack_bc = fStack_b8 * fStack_fc;
    fStack_a0 = fStack_9c * fStack_130;
    fStack_9c = fStack_9c * fStack_12c;
    fStack_b8 = fStack_b8 * fStack_f8;
    fStack_d0 = fStack_c0 + fStack_a0;
    fStack_cc = fStack_bc + fStack_9c;
    fStack_c8 = fStack_b8 + fStack_98;
    fStack_f0 = fStack_100;
    fStack_ec = fStack_fc;
    fStack_e8 = fStack_f8;
    fStack_e0 = fStack_130;
    fStack_dc = fStack_12c;
    fStack_d8 = fStack_128;
    fVar6 = (float)FUN_00389140(&fStack_d0);
    fVar6 = SQRT(fVar6);
    uVar3 = 1;
    *(float *)(param_1 + 0xb8) = fStack_d0 / fVar6;
    *(float *)(param_1 + 0xbc) = fStack_cc / fVar6;
    *(float *)(param_1 + 0xc0) = fStack_c8 / fVar6;
  }
  return uVar3;
}


// ==== CRepulsorDynamicAvoidance_003063a8 @ 003063a8 ====
// GLOBAL DAT_00455be0 undefined_*
// GLOBAL DAT_003f07a0 undefined

/* Strings referenciadas:
     "CRepulsorDynamicAvoidance" */

void CRepulsorDynamicAvoidance_003063a8(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00455be0 = &DAT_003f07a0;
    }
    else {
      FUN_0030d0e0(0x455ad0,0x408630,0x305538);
    }
  }
  return;
}


// ==== FUN_00306400 @ 00306400 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined

void FUN_00306400(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00306448 @ 00306448 ====
// GLOBAL DAT_003c958c float

void FUN_00306448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  
  FUN_003059f0();
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    if (*(char *)(iVar2 + 0xc4) == '\x01') {
      FUN_00306688(param_1,param_3);
      if (*(float *)(iVar2 + 200) < DAT_003c958c) {
        *(undefined1 *)(iVar2 + 0xc4) = 0;
      }
    }
    else {
      FUN_00301a30(*(undefined4 *)(iVar2 + 4),param_3,param_2);
    }
  }
  else {
    FUN_00305fd8(param_1,param_2);
    FUN_00306688(param_1,param_3);
    fVar1 = DAT_003c958c;
    *(undefined1 *)(iVar2 + 0xc4) = 1;
    *(float *)(iVar2 + 200) = fVar1 + *(float *)(iVar2 + 0xd0);
  }
  return;
}


// ==== FUN_00306538 @ 00306538 ====

/* WARNING: Removing unreachable block (ram,0x0030663c) */

undefined4
FUN_00306538(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *param_2;
  fVar1 = *param_3;
  fVar6 = param_2[1];
  fVar3 = param_3[1];
  fVar4 = param_2[2];
  fVar5 = param_3[2];
  fVar7 = fVar2 * fVar2 + fVar6 * fVar6 + fVar4 * fVar4;
  fVar2 = fVar1 * fVar2 + fVar3 * fVar6 + fVar5 * fVar4;
  fVar2 = fVar2 + fVar2;
  fVar1 = (fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5) - *param_4 * 1.5 * *param_4 * 1.5;
  if (fVar7 == 0.0) {
    if (fVar2 == 0.0) {
      return 0;
    }
    fVar1 = -fVar1 / fVar2;
    *param_5 = fVar1;
  }
  else {
    fVar3 = fVar2 * fVar2 - fVar7 * 4.0 * fVar1;
    if (fVar3 < 0.0) {
      return 0;
    }
    fVar3 = SQRT(fVar3);
    fVar1 = (-fVar2 - fVar3) / (fVar7 + fVar7);
    *param_5 = (-fVar2 + fVar3) / (fVar7 + fVar7);
  }
  *param_6 = fVar1;
  return 1;
}


// ==== FUN_00306688 @ 00306688 ====

void FUN_00306688(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14);
  if (iVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0xb8);
    if (*(float *)(param_1 + 0xe8) <
        *(float *)(iVar1 + 0x48) * fVar2 + *(float *)(iVar1 + 0x4c) * *(float *)(param_1 + 0xbc) +
        *(float *)(iVar1 + 0x50) * *(float *)(param_1 + 0xc0)) {
      if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0xec)) {
        param_2[1] = fVar2;
        param_2[2] = *(float *)(param_1 + 0xbc);
        param_2[3] = *(float *)(param_1 + 0xc0);
        *param_2 = *(float *)(param_1 + 0x14);
        return;
      }
      fVar2 = *(float *)(param_1 + 0xdc);
    }
    else {
      param_2[1] = fVar2;
      param_2[2] = *(float *)(param_1 + 0xbc);
      param_2[3] = *(float *)(param_1 + 0xc0);
      if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0xec)) {
        fVar2 = *(float *)(param_1 + 0xe0);
      }
      else {
        fVar2 = *(float *)(param_1 + 0xdc);
      }
    }
    *param_2 = *(float *)(param_1 + 0x14) * fVar2;
  }
  return;
}


// ==== FUN_00306760 @ 00306760 ====

void FUN_00306760(void)

{
  CRepulsorDynamicAvoidance_003063a8(1,0xffff);
  return;
}


// ==== FUN_00306780 @ 00306780 ====

void FUN_00306780(void)

{
  CRepulsorDynamicAvoidance_003063a8(0,0xffff);
  return;
}


// ==== FUN_003067a0 @ 003067a0 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_003067a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xfc,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0xfc,uVar1);
  }
  FUN_00306848(auStack_40[0],param_1);
  return;
}


// ==== FUN_00306848 @ 00306848 ====
// GLOBAL DAT_004514f8 uint
// GLOBAL DAT_004514fc uint
// GLOBAL DAT_00451500 uint
// GLOBAL DAT_0040874c uint
// GLOBAL DAT_003cd894 short
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003cd896 char
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003cd8a0 undefined2
// GLOBAL DAT_003cd8a8 undefined4
// GLOBAL DAT_003cd8a2 ushort
// GLOBAL DAT_003cd8ac undefined4_*
// GLOBAL DAT_003cd8b0 undefined4_*
// GLOBAL DAT_003cd897 char
// GLOBAL DAT_003f0930 undefined
// GLOBAL DAT_003f0948 undefined
// GLOBAL DAT_003f0960 undefined
// GLOBAL DAT_003f09a0 undefined

undefined8 FUN_00306848(undefined8 param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  uint *puStack_b8;
  undefined4 *puStack_b4;
  uint *apuStack_b0 [4];
  
  puVar10 = (undefined4 *)param_1;
  *puVar10 = &DAT_003f0960;
  puVar10[0x26] = &DAT_003f09a0;
  puVar10[0x27] = 0;
  puVar10[0x28] = 0;
  puVar10[0x29] = 0;
  puVar10[0x2a] = 0;
  puVar10[0x2b] = DAT_004514f8;
  puVar10[0x2c] = DAT_004514fc;
  puVar10[0x2d] = DAT_00451500;
  puVar10[0x2e] = DAT_0040874c;
  DAT_003cd894 = DAT_003cd894 + 1;
  puVar10[1] = (int)param_2;
  if (param_2 == 0) {
    uVar13 = 0;
    if (DAT_003c9ed4 != 0) {
      uVar13 = *(undefined4 *)(DAT_003c9ed4 + 0xc);
    }
    puVar10[2] = uVar13;
  }
  else {
    lVar3 = FUN_002e4ce0(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x14),0x450940);
    if (lVar3 == 0) {
      uVar13 = 0;
      if (DAT_003c9ed4 != 0) {
        uVar13 = *(undefined4 *)(DAT_003c9ed4 + 0xc);
      }
LAB_00306958:
      puVar10[2] = uVar13;
    }
    else {
      fVar11 = *(float *)((int)lVar3 + 4);
      puVar10[2] = fVar11;
      if (fVar11 == 0.0) {
        uVar13 = 0;
        if (DAT_003c9ed4 != 0) {
          uVar13 = *(undefined4 *)(DAT_003c9ed4 + 0xc);
        }
        goto LAB_00306958;
      }
    }
    lVar3 = FUN_002e4ce0(*(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14),0x450198);
    if (lVar3 == 0) {
      fVar11 = (float)puVar10[2];
      goto LAB_003069a4;
    }
    puVar10[4] = *(undefined4 *)((int)lVar3 + 4);
  }
  fVar11 = (float)puVar10[2];
LAB_003069a4:
  iVar9 = DAT_003c9ed4;
  puVar10[0x3a] = 0x3f4ccccd;
  puVar10[0x3b] = 0x3e4ccccd;
  fVar12 = 0.0;
  puVar10[3] = fVar11 * 0.5;
  if (iVar9 != 0) {
    fVar12 = *(float *)(iVar9 + 0xc);
  }
  puVar10[0x3d] = fVar11 * 0.5;
  puVar10[0x3e] = 0x3e800000;
  puVar10[0x3c] = fVar12 + fVar12;
  puVar10[0xc] = 0;
  puVar10[0x25] = 0;
  puVar10[0x23] = 0;
  puVar10[0x34] = 0;
  puVar10[0x30] = 0;
  puVar10[0x31] = 0;
  puVar10[0x32] = 0;
  puVar10[0x33] = 0;
  uVar8 = DAT_0040874c;
  puVar10[0x35] = DAT_004514f8;
  puVar10[0x36] = DAT_004514fc;
  puVar10[0x37] = DAT_00451500;
  puVar10[0x38] = uVar8;
  puVar10[0x39] = 0;
  if (DAT_003cd896 == '\0') {
    uStack_c0 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x14,&uStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_c0,0x14,uVar4);
    }
    DAT_003cd8a8 = FUN_0030ba58(uStack_c0,DAT_003cd8a0);
    puStack_bc = (undefined4 *)0x0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,
                       (uint)&uStack_c0 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_bc,0x1c,uVar4);
    }
    puVar10 = puStack_bc;
    uVar1 = DAT_003cd8a2;
    puStack_bc[2] = 0;
    *puStack_bc = &DAT_003f0948;
    puStack_bc[5] = 0;
    puStack_bc[6] = (uint)uVar1;
    puStack_bc[4] = 0;
    puStack_bc[1] = 0;
    puStack_bc[3] = 0;
    if (uVar1 != 0) {
      puStack_b8 = (uint *)0x0;
      iVar9 = (uint)uVar1 * 0x34 + 0x10;
      uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,
                         (uint)&uStack_c0 | 8);
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(puStack_b8,iVar9,uVar4);
      }
      iVar9 = uVar1 - 1;
      *puStack_b8 = (uint)uVar1;
      uVar8 = DAT_0040874c;
      if (uVar1 != 0) {
        puVar6 = puStack_b8 + 10;
        do {
          puVar6[-6] = (uint)&DAT_003f0930;
          iVar9 = iVar9 + -1;
          puVar6[-5] = (uint)&DAT_003f09a0;
          puVar6[-4] = 0;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = DAT_004514f8;
          puVar6[1] = DAT_004514fc;
          uVar2 = DAT_00451500;
          puVar6[3] = uVar8;
          puVar6[2] = uVar2;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(undefined1 *)(puVar6 + 6) = 0;
          puVar6 = puVar6 + 0xd;
        } while (iVar9 != -1);
      }
      puVar10[1] = puStack_b8 + 4;
      uVar8 = 1;
      puVar10[4] = puStack_b8 + 4;
      puStack_b8[0xe] = 0;
      iVar9 = 0;
      if (1 < (uint)puVar10[6]) {
        iVar7 = 0x34;
        do {
          uVar8 = uVar8 + 1;
          iVar5 = puVar10[1] + iVar9;
          iVar9 = iVar9 + 0x34;
          *(int *)(iVar7 + puVar10[1] + 0x28) = iVar5;
          *(int *)(*(int *)(iVar7 + puVar10[1] + 0x28) + 0x2c) = iVar7 + puVar10[1];
          iVar7 = iVar7 + 0x34;
        } while (uVar8 < (uint)puVar10[6]);
      }
      *(undefined4 *)(puVar10[6] * 0x34 + puVar10[1] + -8) = 0;
    }
    puStack_b4 = (undefined4 *)0x0;
    DAT_003cd8ac = puVar10;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_b4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_b4,0x1c,uVar4);
    }
    puVar10 = puStack_b4;
    uVar1 = DAT_003cd8a2;
    *puStack_b4 = &DAT_003f0948;
    puStack_b4[2] = 0;
    puStack_b4[5] = 0;
    puStack_b4[6] = (uint)uVar1;
    puStack_b4[4] = 0;
    puStack_b4[1] = 0;
    puStack_b4[3] = 0;
    if (uVar1 != 0) {
      apuStack_b0[0] = (uint *)0x0;
      iVar9 = (uint)uVar1 * 0x34 + 0x10;
      uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar9,apuStack_b0
                        );
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(apuStack_b0[0],iVar9,uVar4);
      }
      iVar9 = uVar1 - 1;
      *apuStack_b0[0] = (uint)uVar1;
      uVar8 = DAT_0040874c;
      if (uVar1 != 0) {
        puVar6 = apuStack_b0[0] + 10;
        do {
          puVar6[-6] = (uint)&DAT_003f0930;
          iVar9 = iVar9 + -1;
          puVar6[-5] = (uint)&DAT_003f09a0;
          puVar6[-4] = 0;
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = DAT_004514f8;
          puVar6[1] = DAT_004514fc;
          uVar2 = DAT_00451500;
          puVar6[3] = uVar8;
          puVar6[2] = uVar2;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(undefined1 *)(puVar6 + 6) = 0;
          puVar6 = puVar6 + 0xd;
        } while (iVar9 != -1);
      }
      puVar10[1] = apuStack_b0[0] + 4;
      uVar8 = 1;
      puVar10[4] = apuStack_b0[0] + 4;
      apuStack_b0[0][0xe] = 0;
      iVar9 = 0;
      if (1 < (uint)puVar10[6]) {
        iVar7 = 0x34;
        do {
          uVar8 = uVar8 + 1;
          iVar5 = puVar10[1] + iVar9;
          iVar9 = iVar9 + 0x34;
          *(int *)(iVar7 + puVar10[1] + 0x28) = iVar5;
          *(int *)(*(int *)(iVar7 + puVar10[1] + 0x28) + 0x2c) = iVar7 + puVar10[1];
          iVar7 = iVar7 + 0x34;
        } while (uVar8 < (uint)puVar10[6]);
      }
      *(undefined4 *)(puVar10[6] * 0x34 + puVar10[1] + -8) = 0;
    }
    DAT_003cd896 = '\x01';
    DAT_003cd8b0 = puVar10;
  }
  if ((DAT_003cd894 == 1) && (DAT_003cd897 == '\0')) {
    FUN_002e1038(DAT_003c9ed4,0x30b7a8,param_1);
    FUN_002e1078(DAT_003c9ed4,0x30b7e0,param_1);
  }
  return param_1;
}


// ==== FUN_00306fd0 @ 00306fd0 ====
// GLOBAL DAT_003cd894 short
// GLOBAL DAT_003cd896 char
// GLOBAL DAT_003cd8a8 int_*
// GLOBAL DAT_003cd8ac int_*
// GLOBAL DAT_003cd8b0 int_*
// GLOBAL DAT_003cd8b4 int_*
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003cd8a4 undefined4
// GLOBAL DAT_003cd897 char
// GLOBAL DAT_003c9ed4 undefined4
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003f0960 undefined

void FUN_00306fd0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  DAT_003cd894 = DAT_003cd894 + -1;
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003f0960;
  if ((DAT_003cd894 == 0) && (DAT_003cd896 != '\0')) {
    if (DAT_003cd8a8 != (int *)0x0) {
      (**(code **)(*DAT_003cd8a8 + 0xc))((int)DAT_003cd8a8 + (int)*(short *)(*DAT_003cd8a8 + 8),3);
    }
    if (DAT_003cd8ac != (int *)0x0) {
      (**(code **)(*DAT_003cd8ac + 0xc))((int)DAT_003cd8ac + (int)*(short *)(*DAT_003cd8ac + 8),3);
    }
    if (DAT_003cd8b0 != (int *)0x0) {
      (**(code **)(*DAT_003cd8b0 + 0xc))((int)DAT_003cd8b0 + (int)*(short *)(*DAT_003cd8b0 + 8),3);
    }
    DAT_003cd8a8 = (int *)0x0;
    DAT_003cd8ac = (int *)0x0;
    DAT_003cd8b0 = (int *)0x0;
    DAT_003cd896 = '\0';
    if (DAT_003cd8b4 != (int *)0x0) {
      piVar1 = DAT_003cd8b4 + DAT_003cd8b4[-4] * 4;
      if (DAT_003cd8b4 != piVar1) {
        do {
          piVar1 = piVar1 + -4;
          (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),0);
        } while (DAT_003cd8b4 != piVar1);
      }
      (*(code *)PTR_FUN_003c87e0)(DAT_003cd8b4 + -4);
      DAT_003cd8b4 = (int *)0x0;
      DAT_003cd8a4 = 0;
    }
    if (DAT_003cd897 == '\x01') {
      FUN_002e1058(DAT_003c9ed4,0x30b7a8,param_1);
      FUN_002e1098(DAT_003c9ed4,0x30b7e0,param_1);
      DAT_003cd897 = '\0';
    }
  }
  *puVar2 = &DAT_003e0040;
  puVar2[0x26] = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_003071a8 @ 003071a8 ====
// GLOBAL DAT_003cd8b4 int_*
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003cd8a4 uint
// GLOBAL DAT_004549c4 uint
// GLOBAL DAT_003f09b8 undefined

void FUN_003071a8(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int *apiStack_b0 [4];
  
  if (DAT_003cd8b4 == (int *)0x0) {
    iVar3 = *(int *)(DAT_003c9ed4 + 0x10);
    apiStack_b0[0] = (int *)0x0;
    iVar8 = iVar3 * 0x10 + 0x10;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,apiStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(apiStack_b0[0],iVar8,uVar4);
    }
    iVar8 = iVar3 + -1;
    DAT_003cd8b4 = apiStack_b0[0] + 4;
    *apiStack_b0[0] = iVar3;
    piVar5 = DAT_003cd8b4;
    if (iVar3 != 0) {
      do {
        *piVar5 = (int)&DAT_003f09b8;
        iVar8 = iVar8 + -1;
        piVar5 = piVar5 + 4;
      } while (iVar8 != -1);
    }
  }
  piVar2 = DAT_003cd8b4;
  DAT_003cd8a4 = 0;
  uVar1 = DAT_003cd8a4;
  iVar8 = DAT_003c9ed4;
  piVar5 = DAT_003cd8b4;
  for (iVar3 = *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 8); DAT_003c9ed4 = iVar8,
      DAT_003cd8a4 = uVar1, DAT_003cd8b4 = piVar5, iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    if ((*(uint *)(*(int *)(iVar3 + 4) + 0x1c) & DAT_004549c4) != 0) {
      DAT_003cd8a4 = uVar1 + 1;
      piVar2[uVar1 * 4 + 1] = *(int *)(iVar3 + 4);
    }
    uVar1 = DAT_003cd8a4;
    iVar8 = DAT_003c9ed4;
    piVar5 = DAT_003cd8b4;
  }
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      fVar9 = 0.0;
      if (iVar8 != 0) {
        fVar9 = *(float *)(iVar8 + 0xc);
      }
      fVar10 = *(float *)(piVar5[1] + 0x30);
      if (0.0 <= fVar10) {
        iVar6 = (int)(fVar10 / (fVar9 * 20.0));
        iVar3 = piVar5[1];
      }
      else {
        iVar6 = (int)(fVar10 / (fVar9 * 20.0)) + -1;
        iVar3 = piVar5[1];
      }
      piVar5[2] = iVar6;
      fVar9 = 0.0;
      if (iVar8 != 0) {
        fVar9 = *(float *)(iVar8 + 0xc);
      }
      fVar10 = *(float *)(iVar3 + 0x38);
      if (0.0 <= fVar10) {
        piVar5[3] = (int)(fVar10 / (fVar9 * 20.0));
      }
      else {
        piVar5[3] = (int)(fVar10 / (fVar9 * 20.0)) + -1;
      }
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar7 < uVar1);
  }
  FUN_0035ec50(DAT_003cd8b4,DAT_003cd8a4,0x10,0x394270);
  return;
}


// ==== FUN_00307480 @ 00307480 ====
// GLOBAL DAT_003cd898 float
// GLOBAL DAT_003c958c float
// GLOBAL DAT_00408750 undefined4
// GLOBAL DAT_003cd8a8 undefined4
// GLOBAL DAT_003cd8ac int
// GLOBAL DAT_003cd8b0 int
// GLOBAL DAT_00451510 undefined4
// GLOBAL DAT_0045150c undefined4
// GLOBAL DAT_00451508 undefined4
// GLOBAL DAT_004514f8 undefined4
// GLOBAL DAT_004514fc undefined4
// GLOBAL DAT_00451500 undefined4

/* WARNING: Removing unreachable block (ram,0x00307634) */

void FUN_00307480(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  if (DAT_003c958c - DAT_003cd898 != 0.0) {
    DAT_003cd898 = DAT_003cd898 + (DAT_003c958c - DAT_003cd898);
    FUN_003077f0();
  }
  FUN_0030bcd0(-*(float *)(param_1 + 0xf0),*(float *)(param_1 + 0xf0),DAT_00408750,DAT_003cd8a8);
  iVar3 = DAT_003cd8ac;
  iVar1 = *(int *)(DAT_003cd8ac + 8);
  while (iVar1 != 0) {
    *(undefined1 *)(*(int *)(iVar3 + 8) + 0x30) = 0;
    iVar1 = *(int *)(*(int *)(iVar3 + 8) + 0x2c);
    *(undefined4 *)(*(int *)(iVar3 + 8) + 0x2c) = *(undefined4 *)(iVar3 + 0x10);
    uVar2 = *(undefined4 *)(iVar3 + 8);
    *(int *)(iVar3 + 8) = iVar1;
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
  }
  *(undefined4 *)(iVar3 + 0x14) = 0;
  iVar1 = DAT_003cd8b0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  else {
    do {
      *(undefined1 *)(*(int *)(iVar1 + 8) + 0x30) = 0;
      iVar3 = *(int *)(*(int *)(iVar1 + 8) + 0x2c);
      *(undefined4 *)(*(int *)(iVar1 + 8) + 0x2c) = *(undefined4 *)(iVar1 + 0x10);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar1 + 8) = iVar3;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
    } while (iVar3 != 0);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x74) = DAT_00408750;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  fStack_cc = (float)param_2[1];
  *(float *)(param_1 + 0x44) = fStack_cc;
  fStack_c8 = (float)param_2[2];
  *(float *)(param_1 + 0x48) = fStack_c8;
  fStack_c8 = fStack_c8 - *(float *)(param_1 + 0x3c);
  fStack_d0 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x34);
  fStack_cc = fStack_cc - *(float *)(param_1 + 0x38);
  fStack_b8 = (float)FUN_00389140(&fStack_d0);
  fStack_b8 = SQRT(fStack_b8);
  *(float *)(param_1 + 0x4c) = fStack_b8;
  if (0.0 < fStack_b8) {
    fStack_c0 = fStack_d0 / fStack_b8;
    fStack_bc = fStack_cc / fStack_b8;
    fStack_b8 = fStack_c8 / fStack_b8;
    fStack_b0 = fStack_c0;
    fStack_ac = fStack_bc;
    fStack_a8 = fStack_b8;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14);
    fStack_c0 = *(float *)(iVar1 + 0x48);
    fStack_bc = *(float *)(iVar1 + 0x4c);
    fStack_b8 = *(float *)(iVar1 + 0x50);
  }
  FUN_002e9f40(&fStack_b0,&fStack_c0);
  *(float *)(param_1 + 0x20) = fStack_b0;
  *(float *)(param_1 + 0x28) = fStack_a8;
  *(float *)(param_1 + 0x24) = fStack_ac;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 0x54) = fStack_bc;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(float *)(param_1 + 0x5c) = -fStack_b8;
  *(float *)(param_1 + 100) = fStack_c0;
  *(float *)(param_1 + 0x50) = fStack_c0;
  *(float *)(param_1 + 0x58) = fStack_b8;
  fVar4 = *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14) + 0x54);
  if (fVar4 == *(float *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x70) = DAT_00408750;
  }
  else {
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x4c) / fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x70);
  if (fVar4 < 10.0) {
    fVar5 = 1.0;
    if (1.0 <= fVar4) {
      fVar5 = fVar4;
    }
    *(float *)(param_1 + 0x68) = fVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0x41200000;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = DAT_004514f8;
  *(undefined4 *)(param_1 + 0x84) = DAT_004514fc;
  *(undefined4 *)(param_1 + 0x88) = DAT_00451500;
  return;
}


// ==== FUN_003077f0 @ 003077f0 ====
// GLOBAL DAT_003cd8b8 float
// GLOBAL DAT_003cd898 float
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003cd8a4 uint
// GLOBAL DAT_003cd8b4 int
// GLOBAL DAT_003cd89c float

void FUN_003077f0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = DAT_003cd8a4;
  iVar1 = DAT_003c9ed4;
  if (DAT_003cd8b8 < DAT_003cd898) {
    uVar6 = 0;
    iVar5 = DAT_003cd8b4;
    if (DAT_003cd8a4 != 0) {
      do {
        fVar7 = 0.0;
        if (iVar1 != 0) {
          fVar7 = *(float *)(iVar1 + 0xc);
        }
        fVar8 = *(float *)(*(int *)(iVar5 + 4) + 0x30);
        if (0.0 <= fVar8) {
          iVar4 = (int)(fVar8 / (fVar7 * 20.0));
          iVar3 = *(int *)(iVar5 + 4);
        }
        else {
          iVar4 = (int)(fVar8 / (fVar7 * 20.0)) + -1;
          iVar3 = *(int *)(iVar5 + 4);
        }
        *(int *)(iVar5 + 8) = iVar4;
        fVar7 = 0.0;
        if (iVar1 != 0) {
          fVar7 = *(float *)(iVar1 + 0xc);
        }
        fVar8 = *(float *)(iVar3 + 0x38);
        if (0.0 <= fVar8) {
          *(int *)(iVar5 + 0xc) = (int)(fVar8 / (fVar7 * 20.0));
        }
        else {
          *(int *)(iVar5 + 0xc) = (int)(fVar8 / (fVar7 * 20.0)) + -1;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x10;
      } while (uVar6 < uVar2);
    }
    FUN_0035ec50(DAT_003cd8b4,DAT_003cd8a4,0x10,0x394270);
    DAT_003cd8b8 = DAT_003cd898 + DAT_003cd89c;
  }
  return;
}


// ==== FUN_00307970 @ 00307970 ====
// GLOBAL DAT_003cd898 float
// GLOBAL DAT_003c9ed4 int

void FUN_00307970(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  FUN_00307480();
  iVar3 = (int)param_1;
  if ((DAT_003cd898 < *(float *)(iVar3 + 0xcc)) || (lVar1 = FUN_00307fb0(param_1), lVar1 != 0)) {
    *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar3 + 0x4c);
    *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0xb8) = 0;
    *(undefined4 *)(iVar3 + 0xa0) = 0;
    *(undefined4 *)(iVar3 + 0xa4) = 0;
    *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(iVar3 + 0xb4) = *(undefined4 *)(iVar3 + 0x48);
    if (1.0 < *(float *)(iVar3 + 0x4c)) {
      fVar4 = 0.0;
      if (DAT_003c9ed4 != 0) {
        fVar4 = *(float *)(DAT_003c9ed4 + 0xc);
      }
      fVar4 = fVar4 * 0.5;
      fVar6 = fVar4 * 0.5;
      fStack_90 = *(float *)(iVar3 + 0x34) + fVar4 * *(float *)(iVar3 + 0x50) +
                  fVar6 * *(float *)(iVar3 + 0x5c);
      fStack_8c = *(float *)(iVar3 + 0x38) + fVar4 * *(float *)(iVar3 + 0x54) +
                  fVar6 * *(float *)(iVar3 + 0x60);
      fStack_88 = *(float *)(iVar3 + 0x3c) + fVar4 * *(float *)(iVar3 + 0x58) +
                  fVar6 * *(float *)(iVar3 + 100);
      lVar1 = (**(code **)(*(int *)(iVar3 + 4) + 0x9c))(*(int *)(iVar3 + 4),&fStack_90);
      if (lVar1 == 1) {
        *(float *)(iVar3 + 0xa8) = fVar4;
        *(float *)(iVar3 + 0xa4) = fVar6;
        *(float *)(iVar3 + 0xac) = fStack_90;
        *(float *)(iVar3 + 0xb0) = fStack_8c;
        *(float *)(iVar3 + 0xb4) = fStack_88;
        goto LAB_00307ae4;
      }
      iVar2 = *(int *)(iVar3 + 4);
    }
    else {
LAB_00307ae4:
      iVar2 = *(int *)(iVar3 + 4);
    }
    fVar4 = *(float *)(*(int *)(iVar2 + 0x15c) + 4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0xac);
    *(float *)(iVar3 + 0x90) = *(float *)(iVar3 + 0xf8) * fVar4;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xb0);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0xb4);
    *(undefined4 *)(iVar3 + 0x94) = 2;
LAB_00307d68:
    fVar4 = *(float *)(iVar3 + 0x90);
  }
  else {
    if (DAT_003cd898 <= *(float *)(iVar3 + 200)) goto LAB_00307d68;
    lVar1 = FUN_003080b8(param_1);
    if ((lVar1 == 0) || (*(float *)(iVar3 + 0x78) != 0.0)) {
      if (0.0 < *(float *)(iVar3 + 0x78)) {
        fVar4 = (*(float *)(iVar3 + 0x88) - *(float *)(iVar3 + 0x3c)) * *(float *)(iVar3 + 100) +
                (*(float *)(iVar3 + 0x80) - *(float *)(iVar3 + 0x34)) * *(float *)(iVar3 + 0x5c);
        if (fVar4 < 0.0) {
          fVar4 = fVar4 + *(float *)(iVar3 + 0x7c);
        }
        else {
          fVar4 = fVar4 - *(float *)(iVar3 + 0x7c);
        }
        *(float *)(iVar3 + 0xa4) = fVar4;
        fVar4 = *(float *)(iVar3 + 0xa4);
        *(undefined4 *)(iVar3 + 0xa8) = 0;
        *(float *)(iVar3 + 0xac) = *(float *)(iVar3 + 0x34) + fVar4 * *(float *)(iVar3 + 0x5c);
        *(float *)(iVar3 + 0xb0) = *(float *)(iVar3 + 0x38) + fVar4 * *(float *)(iVar3 + 0x60);
        *(float *)(iVar3 + 0xb4) = *(float *)(iVar3 + 0x3c) + fVar4 * *(float *)(iVar3 + 100);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0xac);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xb0);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0xb4);
        *(undefined4 *)(iVar3 + 0xb8) = 0;
        *(undefined4 *)(iVar3 + 0xa0) = 0;
        fVar4 = *(float *)(*(int *)(*(int *)(iVar3 + 4) + 0x15c) + 4);
        *(undefined4 *)(iVar3 + 0x94) = 3;
        fVar4 = fVar4 * 0.25;
      }
      else {
        *(undefined4 *)(iVar3 + 0xb8) = 0;
        *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x40);
        *(undefined4 *)(iVar3 + 0xa4) = 0;
        *(undefined4 *)(iVar3 + 0xa0) = 0;
        *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(iVar3 + 0xb4) = *(undefined4 *)(iVar3 + 0x48);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0x40);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x48);
        fVar4 = *(float *)(*(int *)(*(int *)(iVar3 + 4) + 0x15c) + 4);
        *(undefined4 *)(iVar3 + 0x94) = 0;
      }
      *(float *)(iVar3 + 0x90) = fVar4;
      goto LAB_00307d68;
    }
    lVar1 = FUN_00309580(param_1);
    if (lVar1 == 0) {
      *(undefined4 *)(iVar3 + 0xb8) = 0;
      *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0xa0) = 0;
      *(undefined4 *)(iVar3 + 0xa4) = 0;
      *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(iVar3 + 0xb4) = *(undefined4 *)(iVar3 + 0x48);
      *(undefined4 *)(iVar3 + 0x90) = 0;
      uVar5 = *(undefined4 *)(iVar3 + 0xac);
    }
    else {
      uVar5 = *(undefined4 *)(iVar3 + 0xac);
    }
    *(undefined4 *)(iVar3 + 0x14) = uVar5;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xb0);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0xb4);
    *(undefined4 *)(iVar3 + 0x94) = 1;
    FUN_003052a0(*(undefined4 *)(iVar3 + 4));
    fVar4 = *(float *)(iVar3 + 0x90);
  }
  fVar6 = DAT_003cd898;
  if (fVar4 == 0.0) {
    if (DAT_003cd898 < *(float *)(iVar3 + 0xc4)) {
      *(float *)(iVar3 + 0x90) =
           *(float *)(iVar3 + 0xf8) * *(float *)(*(int *)(*(int *)(iVar3 + 4) + 0x15c) + 4);
    }
    else {
      if (*(float *)(iVar3 + 0xbc) <= 0.0) {
        uVar5 = *(undefined4 *)(iVar3 + 0x90);
        goto LAB_00307f10;
      }
      *(float *)(iVar3 + 200) = DAT_003cd898 + 0.1;
    }
  }
  else if (DAT_003cd898 < *(float *)(iVar3 + 200)) {
    *(undefined4 *)(iVar3 + 0x90) = 0;
  }
  else if (*(float *)(iVar3 + 0xbc) == 0.0) {
    fVar6 = *(float *)(iVar3 + 0xf8) * *(float *)(*(int *)(*(int *)(iVar3 + 4) + 0x15c) + 4);
    if (fVar6 < fVar4) {
      *(float *)(iVar3 + 0x90) = fVar6;
    }
    fVar4 = DAT_003cd898 + 0.1;
    *(float *)(iVar3 + 0xc0) = DAT_003cd898 + 0.5;
    *(float *)(iVar3 + 0xc4) = fVar4;
  }
  else {
    fVar8 = *(float *)(iVar3 + 0xf8) * *(float *)(*(int *)(*(int *)(iVar3 + 4) + 0x15c) + 4);
    if (fVar4 <= fVar8) {
      uVar5 = *(undefined4 *)(iVar3 + 0x90);
      goto LAB_00307f10;
    }
    if (DAT_003cd898 < *(float *)(iVar3 + 0xc0)) {
      *(float *)(iVar3 + 0x90) = fVar8;
    }
    else if (*(int *)(iVar3 + 0x94) != 0) {
      fVar9 = 0.0;
      fVar4 = *(float *)(iVar3 + 0x48) - *(float *)(iVar3 + 0x3c);
      fVar10 = *(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x34);
      if (DAT_003c9ed4 != 0) {
        fVar9 = *(float *)(DAT_003c9ed4 + 0xc);
      }
      fVar7 = 0.0;
      if (DAT_003c9ed4 != 0) {
        fVar7 = *(float *)(DAT_003c9ed4 + 0xc);
      }
      if ((fVar9 + fVar9) * fVar7 <= fVar4 * fVar4 + fVar10 * fVar10) {
        uVar5 = *(undefined4 *)(iVar3 + 0x90);
        goto LAB_00307f10;
      }
      *(float *)(iVar3 + 0x90) = fVar8;
      *(float *)(iVar3 + 0xc0) = fVar6 + 0.5;
    }
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x90);
LAB_00307f10:
  *(undefined4 *)(iVar3 + 0xbc) = uVar5;
  *param_3 = uVar5;
  fVar6 = *(float *)(iVar3 + 0x3c);
  fVar4 = *(float *)(iVar3 + 0x1c);
  fVar8 = *(float *)(iVar3 + 0x18);
  fVar10 = *(float *)(iVar3 + 0x38);
  param_3[1] = *(float *)(iVar3 + 0x14) - *(float *)(iVar3 + 0x34);
  param_3[2] = fVar8 - fVar10;
  param_3[3] = fVar4 - fVar6;
  param_3[4] = *(undefined4 *)(iVar3 + 0x20);
  param_3[5] = *(undefined4 *)(iVar3 + 0x24);
  param_3[6] = *(undefined4 *)(iVar3 + 0x28);
  *(undefined1 *)(param_3 + 7) = *(undefined1 *)(iVar3 + 0x2c);
  return;
}


// ==== FUN_00307fb0 @ 00307fb0 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003cd898 float

undefined4 FUN_00307fb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar1 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  fVar5 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar5 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  fVar3 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0xdc);
  fVar4 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0xd8);
  if (fVar1 * fVar5 < fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) {
    *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x40);
    fVar1 = DAT_003cd898;
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x48);
    *(float *)(param_1 + 0xe4) = fVar1;
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x4c);
    return 0;
  }
  if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0xe0)) {
    *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0xe4) = DAT_003cd898;
    return 0;
  }
  if (*(float *)(param_1 + 0xe8) < DAT_003cd898 - *(float *)(param_1 + 0xe4)) {
    *(float *)(param_1 + 0xcc) = DAT_003cd898 + *(float *)(param_1 + 0xec);
    return 1;
  }
  return 0;
}


// ==== FUN_003080b8 @ 003080b8 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003cd8a8 int

bool FUN_003080b8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 0x14);
  fVar6 = *(float *)(iVar4 + 0xf8) * *(float *)(*(int *)(*(int *)(iVar4 + 4) + 0x15c) + 4);
  if (fVar6 < *(float *)(iVar1 + 0x54)) {
    fVar6 = *(float *)(iVar1 + 0x54);
  }
  *(float *)(iVar4 + 0x6c) = fVar6;
  fVar6 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar6 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  fVar7 = *(float *)(iVar4 + 0x34);
  if (0.0 <= fVar7) {
    iVar5 = (int)(fVar7 / (fVar6 * 20.0));
  }
  else {
    iVar5 = (int)(fVar7 / (fVar6 * 20.0)) + -1;
  }
  fVar6 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar6 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  fVar7 = *(float *)(iVar4 + 0x3c);
  if (0.0 <= fVar7) {
    iVar2 = (int)(fVar7 / (fVar6 * 20.0));
  }
  else {
    iVar2 = (int)(fVar7 / (fVar6 * 20.0)) + -1;
  }
  FUN_00308360(param_1,iVar5,iVar2,iVar1);
  fVar6 = 0.0;
  if (DAT_003c9ed4 != 0) {
    fVar6 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  fVar6 = fVar6 * 20.0;
  fVar8 = fVar6 * 0.5;
  fVar7 = *(float *)(iVar4 + 0x3c) - (float)iVar2 * fVar6;
  if (fVar8 < *(float *)(iVar4 + 0x34) - (float)iVar5 * fVar6) {
    iVar3 = iVar5 + 1;
    FUN_00308360(param_1,iVar3,iVar2,iVar1);
    if (fVar7 <= fVar8) {
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar3 = iVar5 + -1;
    FUN_00308360(param_1,iVar3,iVar2,iVar1);
    if (fVar7 <= fVar8) {
      FUN_00308360(param_1,iVar3,iVar2 + -1,iVar1);
      FUN_00308360(param_1,iVar5,iVar2 + -1,iVar1);
      goto LAB_00308318;
    }
    iVar2 = iVar2 + 1;
  }
  FUN_00308360(param_1,iVar3,iVar2,iVar1);
  FUN_00308360(param_1,iVar5,iVar2,iVar1);
LAB_00308318:
  iVar1 = DAT_003cd8a8;
  *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(DAT_003cd8a8 + 0x10);
  return 1 < *(uint *)(*(int *)(iVar1 + 4) + 0x14);
}


// ==== FUN_00308360 @ 00308360 ====
// GLOBAL DAT_003cd8a4 uint
// GLOBAL DAT_003cd8b4 int
// GLOBAL DAT_004549c4 uint
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003cd8a8 undefined4
// GLOBAL DAT_004514f8 float
// GLOBAL DAT_00451500 float
// GLOBAL DAT_004514fc float
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003f09d0 undefined

/* WARNING: Removing unreachable block (ram,0x00308dc4) */
/* WARNING: Removing unreachable block (ram,0x00308608) */
/* WARNING: Removing unreachable block (ram,0x00309054) */
/* WARNING: Removing unreachable block (ram,0x003087b4) */
/* WARNING: Removing unreachable block (ram,0x00308e58) */
/* WARNING: Removing unreachable block (ram,0x003088ec) */
/* WARNING: Removing unreachable block (ram,0x00309160) */

void FUN_00308360(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined *puStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
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
  undefined *puStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  uint uStack_d4;
  
  uVar10 = DAT_003cd8a4 - 1;
  uVar9 = uVar10 >> 1;
  uVar11 = 0;
  uVar2 = uVar10;
joined_r0x003083c4:
  if (1 < uVar2) {
    iVar8 = uVar9 * 0x10 + DAT_003cd8b4;
    iVar7 = *(int *)(iVar8 + 8);
    if (iVar7 < param_2) {
      iVar6 = -1;
    }
    else {
      iVar6 = 1;
      if (iVar7 <= param_2) {
        iVar7 = *(int *)(iVar8 + 0xc);
        if (iVar7 < param_3) {
          iVar6 = -1;
        }
        else {
          iVar6 = 1;
          if (iVar7 <= param_3) {
            iVar6 = 0;
          }
        }
      }
    }
    if (iVar6 != -1) goto LAB_00308434;
    uVar3 = uVar9 + uVar10 + 1;
    uVar2 = uVar10;
    uVar11 = uVar9;
    goto LAB_00308464;
  }
  iVar8 = uVar11 * 0x10 + DAT_003cd8b4;
  iVar7 = *(int *)(iVar8 + 8);
  if (iVar7 < param_2) {
    uVar9 = 0xffffffff;
  }
  else if (param_2 < iVar7) {
    uVar9 = 1;
  }
  else {
    iVar7 = *(int *)(iVar8 + 0xc);
    if (iVar7 < param_3) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)(param_3 < iVar7);
    }
  }
  if (uVar9 != 0) {
    uVar11 = uVar10;
  }
  if (((DAT_003cd8a4 <= uVar11) ||
      (iVar7 = uVar11 * 0x10 + DAT_003cd8b4, *(int *)(iVar7 + 8) != param_2)) ||
     (*(int *)(iVar7 + 0xc) != param_3)) {
    return;
  }
  iVar7 = *(int *)(iVar7 + 4);
  iStack_e0 = param_3;
  iStack_dc = param_4;
  iStack_d8 = param_2;
  do {
    fVar16 = fStack_16c;
    fVar22 = fStack_168;
    fVar19 = fStack_160;
    fVar17 = fStack_15c;
    if ((iVar7 != iStack_dc) && ((*(uint *)(iVar7 + 0x1c) & DAT_004549c4) != 0)) {
      fVar12 = *(float *)(param_1 + 0x38);
      fVar13 = *(float *)(param_1 + 0x44);
      fVar24 = fVar12;
      if (fVar12 <= fVar13) {
        fVar24 = fVar13;
      }
      if (*(float *)(iVar7 + 0x34) <= fVar24 + *(float *)(param_1 + 0x10)) {
        if (fVar13 <= fVar12) {
          fVar12 = fVar13;
        }
        if (fVar12 - *(float *)(param_1 + 0x10) <= *(float *)(iVar7 + 0x34)) {
          bVar1 = true;
          lVar4 = FUN_002e4ce0(iVar7,0x450940);
          lVar5 = FUN_002e4ce0(iVar7,0x4503c8);
          if (lVar4 == 0) {
            fVar12 = 0.0;
            fVar16 = fVar12;
            fVar24 = fVar12;
            if (DAT_003c9ed4 != 0) {
              fVar12 = *(float *)(DAT_003c9ed4 + 0xc);
              fVar16 = fVar12;
              fVar24 = fVar12;
            }
          }
          else {
            fVar12 = *(float *)((int)lVar4 + 4);
            fVar16 = fVar12;
            fVar24 = fVar12;
            if ((lVar5 != 0) && (fVar16 = *(float *)((int)lVar5 + 4), fVar12 < fVar16)) {
              bVar1 = false;
              fVar24 = SQRT(fVar16 * fVar16 + fVar12 * fVar12);
            }
          }
          fVar13 = *(float *)(param_1 + 0xc) + fVar12 * 0.5;
          if (bVar1) {
            fVar13 = fVar13 * fVar13;
            fVar12 = *(float *)(iVar7 + 0x30) - *(float *)(iStack_dc + 0x30);
            fVar14 = *(float *)(iVar7 + 0x38) - *(float *)(iStack_dc + 0x38);
            fVar27 = fVar12 * fVar12 + fVar14 * fVar14;
            fVar16 = fStack_16c;
            fVar22 = fStack_168;
            fVar19 = fStack_160;
            fVar17 = fStack_15c;
            if (fVar27 < fVar13) {
              fVar12 = *(float *)(param_1 + 0x78) + 1.0;
              *(float *)(param_1 + 0x78) = fVar12;
              fVar12 = 1.0 / fVar12;
              fVar14 = *(float *)(iVar7 + 0x38);
              fVar13 = *(float *)(iVar7 + 0x34);
              *(float *)(param_1 + 0x80) =
                   *(float *)(param_1 + 0x80) +
                   fVar12 * (*(float *)(iVar7 + 0x30) - *(float *)(param_1 + 0x80));
              *(float *)(param_1 + 0x84) =
                   *(float *)(param_1 + 0x84) + fVar12 * (fVar13 - *(float *)(param_1 + 0x84));
              *(float *)(param_1 + 0x88) =
                   *(float *)(param_1 + 0x88) + fVar12 * (fVar14 - *(float *)(param_1 + 0x88));
              if (*(float *)(param_1 + 0x7c) < fVar24) {
                *(float *)(param_1 + 0x7c) = fVar24;
              }
            }
            else {
              fVar18 = *(float *)(iVar7 + 0x48) * *(float *)(iVar7 + 0x54) -
                       *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x6c);
              fVar15 = *(float *)(iVar7 + 0x50) * *(float *)(iVar7 + 0x54) -
                       *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x6c);
              fVar26 = fVar18 * fVar18 + fVar15 * fVar15;
              if (fVar27 <= fVar26 * *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x68) +
                            fVar13) {
                fStack_1a8 = SQRT(fVar27);
                if (0.0 < fStack_1a8) {
                  fStack_1b0 = fVar12 / fStack_1a8;
                  fStack_1a8 = fVar14 / fStack_1a8;
                }
                else {
                  fStack_1b0 = 0.0;
                  fStack_1a8 = 0.0;
                }
                if (0.0 <= *(float *)(param_1 + 0x58) * fStack_1a8 +
                           *(float *)(param_1 + 0x50) * fStack_1b0) {
                  fVar21 = *(float *)(param_1 + 0x68);
                  fVar14 = fVar14 * fVar15 + fVar12 * fVar18;
                  fVar12 = fVar21;
                  if (fVar26 == 0.0) {
                    bVar1 = false;
                    if (fVar14 != 0.0) {
                      bVar1 = true;
                      fVar21 = ((fVar27 - fVar13) * -2.0) / fVar14;
                      fVar12 = fVar21;
                    }
                  }
                  else {
                    fVar13 = fVar14 * fVar14 - fVar26 * (fVar27 - fVar13);
                    bVar1 = false;
                    if (0.0 <= fVar13) {
                      fVar13 = SQRT(fVar13);
                      bVar1 = true;
                      fVar21 = (-fVar14 + fVar13) / fVar26;
                      fVar12 = (-fVar14 - fVar13) / fVar26;
                    }
                  }
                  if ((((bVar1) &&
                       (fVar12 = ((fVar12 + fVar21) - fVar24 / *(float *)(param_1 + 0x6c)) * 0.5,
                       fVar12 < *(float *)(param_1 + 0x70))) &&
                      (fVar12 < *(float *)(param_1 + 0x68))) && (-0.5 < fVar12)) {
                    fVar16 = *(float *)(iVar7 + 0x54) * fVar12;
                    fVar26 = *(float *)(param_1 + 0x5c);
                    fStack_180 = fVar26 * 0.5;
                    fVar27 = *(float *)(iVar7 + 0x38) + fVar16 * *(float *)(iVar7 + 0x50);
                    fVar13 = *(float *)(iVar7 + 0x30) + fVar16 * *(float *)(iVar7 + 0x48);
                    fVar14 = *(float *)(iVar7 + 0x34) + fVar16 * *(float *)(iVar7 + 0x4c);
                    fStack_190 = fVar13 + fVar24 * fStack_180;
                    fStack_17c = *(float *)(param_1 + 0x60) * 0.5;
                    fStack_178 = *(float *)(param_1 + 100) * 0.5;
                    fVar17 = *(float *)(param_1 + 0x60) * 0.5;
                    fStack_158 = *(float *)(param_1 + 100) * 0.5;
                    fStack_18c = fVar14 + fVar24 * fVar17;
                    fStack_188 = fVar27 + fVar24 * fStack_158;
                    fVar19 = *(float *)(param_1 + 0xf0);
                    fStack_16c = -fVar19;
                    puStack_170 = (undefined *)(fStack_190 - *(float *)(param_1 + 0x34));
                    fVar22 = fStack_188 - *(float *)(param_1 + 0x3c);
                    fVar16 = fStack_18c - *(float *)(param_1 + 0x38);
                    fVar24 = ((fVar13 - fVar24 * fStack_180) - *(float *)(param_1 + 0x34)) * fVar26
                             + ((fVar14 - fVar24 * fStack_17c) - *(float *)(param_1 + 0x38)) *
                               *(float *)(param_1 + 0x60) +
                             ((fVar27 - fVar24 * fStack_178) - *(float *)(param_1 + 0x3c)) *
                             *(float *)(param_1 + 100);
                    fVar13 = (float)puStack_170 * fVar26 + fVar16 * *(float *)(param_1 + 0x60) +
                             fVar22 * *(float *)(param_1 + 100);
                    if ((fStack_16c <= fVar24) && (fStack_16c = fVar24, fVar19 < fVar24)) {
                      fStack_16c = fVar19;
                    }
                    fVar19 = *(float *)(param_1 + 0xf0);
                    fStack_168 = -fVar19;
                    if ((fStack_168 <= fVar13) && (fStack_168 = fVar13, fVar19 < fVar13)) {
                      fStack_168 = fVar19;
                    }
                    fStack_160 = fVar18 * *(float *)(param_1 + 0x5c) +
                                 *(float *)(param_1 + 0x60) * 0.0 +
                                 fVar15 * *(float *)(param_1 + 100);
                    fStack_15c = *(float *)(param_1 + 0x50) * *(float *)(iVar7 + 0x48) +
                                 *(float *)(param_1 + 0x54) * *(float *)(iVar7 + 0x4c) +
                                 *(float *)(param_1 + 0x58) * *(float *)(iVar7 + 0x50);
                    if (fStack_16c < fStack_168) {
                      puStack_170 = &DAT_003f09d0;
                      fStack_164 = fVar12;
                      FUN_0030be70(DAT_003cd8a8,&puStack_170);
                    }
                    else {
                      fVar19 = fStack_180;
                      if (fStack_16c <= fStack_168) goto LAB_003094bc;
                      puStack_170 = &DAT_003f09d0;
                      fVar16 = fStack_16c;
                      fStack_16c = fStack_168;
                      fStack_168 = fVar16;
                      fStack_164 = fVar12;
                      FUN_0030be70(DAT_003cd8a8,&puStack_170);
                    }
                    puStack_170 = &DAT_003e0040;
                    fVar16 = fStack_16c;
                    fVar22 = fStack_168;
                    fVar19 = fStack_160;
                    fVar17 = fStack_15c;
                  }
                }
              }
            }
          }
          else {
            uStack_d4 = 0;
            fVar19 = (fVar16 - fVar12 * 0.25) * 0.5;
            uVar10 = (int)((fVar16 + fVar16) / fVar12) + 1U & 0xffff;
            fVar14 = (float)uVar10 - 1.0;
            fStack_18c = *(float *)(iVar7 + 0x34) - fVar19 * *(float *)(iVar7 + 0x4c);
            fStack_188 = *(float *)(iVar7 + 0x38) - fVar19 * *(float *)(iVar7 + 0x50);
            fStack_1b0 = *(float *)(iVar7 + 0x30) - fVar19 * *(float *)(iVar7 + 0x48);
            fStack_190 = fStack_1b0 - *(float *)(param_1 + 0x34);
            fVar22 = *(float *)(iVar7 + 0x38) + fVar19 * *(float *)(iVar7 + 0x50);
            fVar16 = *(float *)(iVar7 + 0x34) + fVar19 * *(float *)(iVar7 + 0x4c);
            fVar17 = *(float *)(iVar7 + 0x30) + fVar19 * *(float *)(iVar7 + 0x48);
            fVar18 = (fVar22 - fStack_188) / fVar14;
            fVar26 = (fVar16 - fStack_18c) / fVar14;
            fVar14 = (fVar17 - fStack_1b0) / fVar14;
            fStack_1a8 = fStack_188 - fVar18;
            fStack_1ac = fStack_18c - fVar26;
            fStack_1b0 = fStack_1b0 - fVar14;
            fStack_18c = fStack_18c - *(float *)(param_1 + 0x38);
            fStack_188 = fStack_188 - *(float *)(param_1 + 0x3c);
            fVar19 = (float)FUN_00389140(&fStack_190);
            fVar24 = fStack_190 / SQRT(fVar19);
            fVar21 = *(float *)(param_1 + 0x50);
            fVar23 = fStack_188 / SQRT(fVar19);
            fStack_190 = fVar17 - *(float *)(param_1 + 0x34);
            fStack_18c = fVar16 - *(float *)(param_1 + 0x38);
            fVar27 = *(float *)(param_1 + 0x58);
            fStack_188 = fVar22 - *(float *)(param_1 + 0x3c);
            fVar15 = (float)FUN_00389140(&fStack_190);
            fVar16 = fStack_16c;
            fVar22 = fStack_168;
            fVar19 = fStack_160;
            fVar17 = fStack_15c;
            if ((0.0 <= fVar27 * fVar23 + fVar21 * fVar24) ||
               (0.0 <= *(float *)(param_1 + 0x58) * (fStack_188 / SQRT(fVar15)) +
                       *(float *)(param_1 + 0x50) * (fStack_190 / SQRT(fVar15)))) {
              fVar13 = fVar13 * fVar13;
              fVar27 = *(float *)(iVar7 + 0x48) * *(float *)(iVar7 + 0x54) -
                       *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x6c);
              fVar24 = *(float *)(iVar7 + 0x50) * *(float *)(iVar7 + 0x54) -
                       *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x6c);
              fVar15 = fVar27 * fVar27 + fVar24 * fVar24;
              fVar21 = fVar15 * *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x68) + fVar13;
              if (uVar10 != 0) {
                do {
                  fStack_1b0 = fStack_1b0 + fVar14;
                  fStack_1a8 = fStack_1a8 + fVar18;
                  fStack_190 = fStack_1b0 - *(float *)(iStack_dc + 0x30);
                  fStack_188 = fStack_1a8 - *(float *)(iStack_dc + 0x38);
                  fStack_1ac = fStack_1ac + fVar26;
                  fStack_18c = 0.0;
                  fVar23 = fStack_190 * fStack_190 + fStack_188 * fStack_188;
                  fVar16 = fStack_fc;
                  fVar22 = fStack_f8;
                  fVar19 = fStack_f0;
                  fVar17 = fStack_ec;
                  if (fVar23 < fVar13) {
                    fStack_148 = *(float *)(param_1 + 0x78) + 1.0;
                    *(float *)(param_1 + 0x78) = fStack_148;
                    fStack_148 = 1.0 / fStack_148;
                    fStack_150 = fStack_148 *
                                 (*(float *)(iVar7 + 0x30) - *(float *)(param_1 + 0x80));
                    fStack_14c = fStack_148 *
                                 (*(float *)(iVar7 + 0x34) - *(float *)(param_1 + 0x84));
                    fStack_148 = fStack_148 *
                                 (*(float *)(iVar7 + 0x38) - *(float *)(param_1 + 0x88));
                    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + fStack_150;
                    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + fStack_14c;
                    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + fStack_148;
                    if (*(float *)(param_1 + 0x7c) < fVar12) {
                      *(float *)(param_1 + 0x7c) = fVar12;
                    }
LAB_003094a0:
                    fStack_ec = fVar17;
                    fStack_f0 = fVar19;
                    fStack_f8 = fVar22;
                    fStack_fc = fVar16;
                    uVar9 = uStack_d4 + 1;
                  }
                  else {
                    if (fVar21 < fVar23) goto LAB_003094a0;
                    fStack_148 = SQRT(fVar23);
                    if (0.0 < fStack_148) {
                      fStack_150 = fStack_190 / fStack_148;
                      fStack_14c = 0.0 / fStack_148;
                      fStack_148 = fStack_188 / fStack_148;
                      fStack_140 = fStack_150;
                      fStack_13c = fStack_14c;
                      fStack_138 = fStack_148;
                    }
                    else {
                      fStack_150 = DAT_004514f8;
                      fStack_14c = DAT_004514fc;
                      fStack_148 = DAT_00451500;
                    }
                    fVar20 = *(float *)(param_1 + 0x68);
                    fVar28 = fStack_188 * fVar24 + fStack_190 * fVar27;
                    fVar25 = fVar20;
                    if (fVar15 == 0.0) {
                      bVar1 = false;
                      if (fVar28 != 0.0) {
                        bVar1 = true;
                        fVar20 = ((fVar23 - fVar13) * -2.0) / fVar28;
                        fVar25 = fVar20;
                      }
                    }
                    else {
                      fVar23 = fVar28 * fVar28 - fVar15 * (fVar23 - fVar13);
                      bVar1 = false;
                      if (0.0 <= fVar23) {
                        fVar23 = SQRT(fVar23);
                        bVar1 = true;
                        fVar20 = (-fVar28 - fVar23) / fVar15;
                        fVar25 = (-fVar28 + fVar23) / fVar15;
                      }
                    }
                    fStack_18c = 0.0;
                    if (!bVar1) goto LAB_003094a0;
                    fVar23 = ((fVar20 + fVar25) - fVar12 / *(float *)(param_1 + 0x6c)) * 0.5;
                    uVar9 = uStack_d4 + 1;
                    if ((fVar23 < *(float *)(param_1 + 0x70)) &&
                       (fVar23 < *(float *)(param_1 + 0x68))) {
                      if (-0.5 < fVar23) {
                        fVar16 = *(float *)(iVar7 + 0x54) * fVar23;
                        fVar25 = *(float *)(param_1 + 0x5c);
                        fStack_138 = fStack_1a8 + fVar16 * *(float *)(iVar7 + 0x50);
                        fStack_140 = fStack_1b0 + fVar16 * *(float *)(iVar7 + 0x48);
                        fStack_13c = fStack_1ac + fVar16 * *(float *)(iVar7 + 0x4c);
                        fStack_110 = fVar25 * 0.5;
                        fStack_10c = *(float *)(param_1 + 0x60) * 0.5;
                        fStack_108 = *(float *)(param_1 + 100) * 0.5;
                        fStack_130 = fStack_140 - fVar12 * fStack_110;
                        fStack_120 = fStack_140 + fVar12 * fStack_110;
                        fStack_12c = fStack_13c - fVar12 * fStack_10c;
                        fStack_128 = fStack_138 - fVar12 * fStack_108;
                        puStack_100 = (undefined *)(fStack_120 - *(float *)(param_1 + 0x34));
                        fVar17 = *(float *)(param_1 + 0x60) * 0.5;
                        fStack_e8 = *(float *)(param_1 + 100) * 0.5;
                        fStack_11c = fStack_13c + fVar12 * fVar17;
                        fStack_118 = fStack_138 + fVar12 * fStack_e8;
                        fVar16 = fStack_11c - *(float *)(param_1 + 0x38);
                        fVar22 = fStack_118 - *(float *)(param_1 + 0x3c);
                        fVar19 = *(float *)(param_1 + 0xf0);
                        fStack_fc = -fVar19;
                        fVar20 = (fStack_130 - *(float *)(param_1 + 0x34)) * fVar25 +
                                 (fStack_12c - *(float *)(param_1 + 0x38)) *
                                 *(float *)(param_1 + 0x60) +
                                 (fStack_128 - *(float *)(param_1 + 0x3c)) *
                                 *(float *)(param_1 + 100);
                        fVar25 = (float)puStack_100 * fVar25 + fVar16 * *(float *)(param_1 + 0x60) +
                                 fVar22 * *(float *)(param_1 + 100);
                        if ((fStack_fc <= fVar20) && (fStack_fc = fVar20, fVar19 < fVar20)) {
                          fStack_fc = fVar19;
                        }
                        fVar19 = *(float *)(param_1 + 0xf0);
                        fStack_f8 = -fVar19;
                        if ((fStack_f8 <= fVar25) && (fStack_f8 = fVar25, fVar19 < fVar25)) {
                          fStack_f8 = fVar19;
                        }
                        fStack_f0 = fVar27 * *(float *)(param_1 + 0x5c) +
                                    *(float *)(param_1 + 0x60) * 0.0 +
                                    fVar24 * *(float *)(param_1 + 100);
                        fStack_ec = *(float *)(param_1 + 0x50) * *(float *)(iVar7 + 0x48) +
                                    *(float *)(param_1 + 0x54) * *(float *)(iVar7 + 0x4c) +
                                    *(float *)(param_1 + 0x58) * *(float *)(iVar7 + 0x50);
                        if (fStack_fc < fStack_f8) {
                          puStack_100 = &DAT_003f09d0;
                          fStack_f4 = fVar23;
                          FUN_0030be70(DAT_003cd8a8,&puStack_100);
                        }
                        else {
                          fVar19 = fStack_110;
                          if (fStack_fc <= fStack_f8) goto LAB_003094a0;
                          puStack_100 = &DAT_003f09d0;
                          fVar16 = fStack_fc;
                          fStack_fc = fStack_f8;
                          fStack_f8 = fVar16;
                          fStack_f4 = fVar23;
                          FUN_0030be70(DAT_003cd8a8,&puStack_100);
                        }
                        puStack_100 = &DAT_003e0040;
                        fVar16 = fStack_fc;
                        fVar22 = fStack_f8;
                        fVar19 = fStack_f0;
                        fVar17 = fStack_ec;
                      }
                      goto LAB_003094a0;
                    }
                  }
                  uStack_d4 = uVar9 & 0xffff;
                  fVar16 = fStack_16c;
                  fVar22 = fStack_168;
                  fVar19 = fStack_160;
                  fVar17 = fStack_15c;
                } while (uStack_d4 < uVar10);
              }
            }
          }
        }
      }
    }
LAB_003094bc:
    fStack_15c = fVar17;
    fStack_160 = fVar19;
    fStack_168 = fVar22;
    fStack_16c = fVar16;
    uVar11 = uVar11 + 1;
    if (DAT_003cd8a4 <= uVar11) {
      return;
    }
    iVar7 = uVar11 * 0x10 + DAT_003cd8b4;
    if (*(int *)(iVar7 + 8) != iStack_d8) {
      return;
    }
    if (*(int *)(iVar7 + 0xc) != iStack_e0) {
      return;
    }
    iVar7 = *(int *)(iVar7 + 4);
  } while( true );
LAB_00308434:
  uVar2 = uVar10 - uVar11;
  if (-2 < iVar6) {
    uVar3 = uVar9 + uVar11;
    uVar2 = uVar9;
    if (iVar6 < 2) {
LAB_00308464:
      uVar9 = uVar3 >> 1;
      uVar10 = uVar2;
    }
    uVar2 = uVar10 - uVar11;
  }
  goto joined_r0x003083c4;
}


// ==== FUN_00309580 @ 00309580 ====
// GLOBAL DAT_003cd8b0 int
// GLOBAL DAT_0045124c undefined_*
// GLOBAL DAT_003cd898 float
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003e8d20 undefined

undefined4 FUN_00309580(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined *puStack_70;
  float fStack_6c;
  
  lVar3 = FUN_00309b10();
  if (lVar3 != 0) {
    FUN_0030b038(param_1);
    lVar3 = FUN_0030b270(param_1);
    if (lVar3 != 0) {
      for (iVar1 = *(int *)(DAT_003cd8b0 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
        iVar5 = (int)param_1;
        fVar7 = DAT_003cd898;
        switch(*(undefined4 *)(iVar5 + 0x8c)) {
        case 1:
          if (*(float *)(iVar1 + 0x10) < *(float *)(*(int *)(iVar1 + 0xc) + 4)) {
            fVar6 = *(float *)(iVar5 + 0xd0);
            goto LAB_003096cc;
          }
          break;
        case 2:
          bVar2 = *(float *)(iVar1 + 0x10) < *(float *)(*(int *)(iVar1 + 0xc) + 4);
          goto code_r0x003096d4;
        case 3:
          if (*(float *)(*(int *)(iVar1 + 0xc) + 8) < *(float *)(iVar1 + 0x10)) {
            fVar6 = *(float *)(iVar5 + 0xd0);
            goto LAB_003096cc;
          }
          break;
        case 4:
          fVar6 = *(float *)(iVar1 + 0x10);
          fVar7 = *(float *)(*(int *)(iVar1 + 0xc) + 8);
LAB_003096cc:
          bVar2 = fVar7 < fVar6;
code_r0x003096d4:
          if (!bVar2) break;
          goto LAB_00309aac;
        }
        if ((0.0 <= *(float *)(iVar5 + 0xa4)) || (*(float *)(iVar1 + 0x10) <= 0.0)) {
          if (0.0 < *(float *)(iVar5 + 0xa4)) {
            if (*(float *)(iVar1 + 0x10) < 0.0) goto LAB_00309aac;
            iVar4 = *(int *)(iVar5 + 4);
          }
          else {
            iVar4 = *(int *)(iVar5 + 4);
          }
          lVar3 = (**(code **)(iVar4 + 0x9c))(iVar4,iVar1 + 0x18);
          if (lVar3 == 0) goto LAB_00309aac;
          puStack_70 = &DAT_003e8d20;
          (*DAT_0045124c)(iVar1 + 0x18,iVar5 + 0x40,
                          *(undefined4 *)(*(int *)(*(int *)(iVar5 + 4) + 4) + 0x14),&puStack_70,2);
          if (fStack_6c < 1.0) {
            puStack_70 = &DAT_003e0040;
            goto LAB_00309aac;
          }
          fVar7 = *(float *)(*(int *)(iVar1 + 0xc) + 0xc);
          if (0.2 < *(float *)(*(int *)(iVar1 + 0xc) + 0x14)) {
            if (0.0 < fVar7) {
              if (2.0 <= fVar7) {
                if (2.0 <= *(float *)(*(int *)(iVar1 + 8) + 0xc)) {
                  iVar4 = *(int *)(iVar5 + 4);
                  goto LAB_003098f8;
                }
                iVar4 = *(int *)(iVar5 + 4);
              }
              else {
                iVar4 = *(int *)(iVar5 + 4);
              }
              fVar6 = *(float *)(iVar5 + 0xf8) * *(float *)(*(int *)(iVar4 + 0x15c) + 4);
              goto LAB_00309838;
            }
            *(undefined4 *)(iVar5 + 0x90) = 0;
          }
          else if (fVar7 <= 0.0) {
            *(undefined4 *)(iVar5 + 0x90) = 0;
          }
          else {
            if (fVar7 < 2.0) {
              fVar6 = *(float *)(iVar5 + 0xf8) *
                      *(float *)(*(int *)(*(int *)(iVar5 + 4) + 0x15c) + 4);
              if (fVar7 * 0.5 < 0.5) {
                fVar6 = fVar6 * 0.5;
              }
              else {
                fVar6 = fVar6 * fVar7 * 0.5;
              }
            }
            else {
              fVar7 = *(float *)(*(int *)(iVar1 + 8) + 0xc);
              if (2.0 <= fVar7) {
                iVar4 = *(int *)(iVar5 + 4);
LAB_003098f8:
                *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(*(int *)(iVar4 + 0x15c) + 4);
                goto LAB_00309904;
              }
              fVar7 = fVar7 * 0.5;
              fVar6 = *(float *)(iVar5 + 0xf8) *
                      *(float *)(*(int *)(*(int *)(iVar5 + 4) + 0x15c) + 4);
              if (fVar7 < 0.5) {
                fVar6 = fVar6 * 0.5;
              }
              else {
                fVar6 = fVar6 * fVar7;
              }
            }
LAB_00309838:
            *(float *)(iVar5 + 0x90) = fVar6;
          }
LAB_00309904:
          *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar1 + 8);
          *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar5 + 0xa8) = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)(iVar5 + 0xb4) = *(undefined4 *)(iVar1 + 0x20);
          *(undefined4 *)(iVar5 + 0xb8) = *(undefined4 *)(iVar1 + 0x24);
          fVar7 = DAT_003cd898;
          switch(*(undefined4 *)(iVar5 + 0x8c)) {
          case 0:
            if (*(float *)(iVar1 + 0x10) < *(float *)(*(int *)(iVar1 + 0xc) + 4)) {
              *(undefined4 *)(iVar5 + 0x8c) = 3;
              fVar7 = fVar7 + 0.2;
            }
            else {
              if (*(float *)(iVar1 + 0x10) <= *(float *)(*(int *)(iVar1 + 0xc) + 8)) {
                return 1;
              }
              *(undefined4 *)(iVar5 + 0x8c) = 1;
              fVar7 = fVar7 + 0.5;
            }
            goto LAB_00309a94;
          case 1:
            if (*(float *)(*(int *)(iVar1 + 0xc) + 4) <= *(float *)(iVar1 + 0x10)) {
              return 1;
            }
            if (DAT_003cd898 <= *(float *)(iVar5 + 0xd0)) {
              return 1;
            }
            fVar6 = 0.2;
            *(undefined4 *)(iVar5 + 0x8c) = 3;
            break;
          default:
            goto switchD_00309980_caseD_2;
          case 3:
            if (*(float *)(iVar1 + 0x10) <= *(float *)(*(int *)(iVar1 + 0xc) + 8)) {
              return 1;
            }
            if (DAT_003cd898 <= *(float *)(iVar5 + 0xd0)) {
              return 1;
            }
            fVar6 = 0.5;
            *(undefined4 *)(iVar5 + 0x8c) = 2;
          }
          fVar7 = fVar7 + fVar6;
LAB_00309a94:
          *(float *)(iVar5 + 0xd0) = fVar7;
switchD_00309980_caseD_2:
          return 1;
        }
LAB_00309aac:
      }
    }
  }
  return 0;
}


// ==== FUN_00309b10 @ 00309b10 ====
// GLOBAL DAT_003cd8a8 int
// GLOBAL DAT_00408794 float
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_004514f8 undefined4
// GLOBAL DAT_00451500 undefined4
// GLOBAL DAT_004514fc undefined4
// GLOBAL DAT_003cd8ac int

bool FUN_00309b10(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_t2_lo;
  uint uVar5;
  uint uVar6;
  int unaff_s0_lo;
  long unaff_s3;
  int in_t9_lo;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStack_dc;
  int iStack_cc;
  float fStack_a4;
  float fStack_9c;
  float fStack_94;
  
  iVar4 = DAT_003cd8ac;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 0:
    unaff_s3 = 1;
    break;
  case 1:
    unaff_s3 = 1;
    break;
  case 2:
    unaff_s3 = 1;
    in_t9_lo = 0;
    goto LAB_00309b7c;
  case 3:
    unaff_s3 = 1;
    break;
  case 4:
    unaff_s3 = 0;
    break;
  default:
    goto switchD_00309b48_default;
  }
  in_t9_lo = 1;
LAB_00309b7c:
  in_t2_lo = 1;
switchD_00309b48_default:
  iStack_cc = 0;
  fVar21 = DAT_00408794;
  for (iVar3 = *(int *)(*(int *)(DAT_003cd8a8 + 4) + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20))
  {
    iVar2 = iVar3 + 4;
    if (-*(float *)(param_1 + 0xc) < *(float *)(iVar3 + 0xc)) {
      if (*(float *)(param_1 + 0xc) < *(float *)(iVar3 + 8)) break;
      fVar8 = *(float *)(iVar3 + 0x10);
      if (fVar21 < fVar8) {
        fVar8 = fVar21;
        iVar2 = unaff_s0_lo;
      }
      fVar21 = fVar8;
      unaff_s0_lo = iVar2;
      if ((*(float *)(iVar3 + 8) <= 0.0) && (0.0 < *(float *)(iVar3 + 0xc))) {
        iStack_cc = iVar3;
      }
    }
  }
  if (*(float *)(param_1 + 0x68) < fVar21) {
    fVar21 = *(float *)(param_1 + 0x68);
  }
  if (iStack_cc == 0) {
    return false;
  }
  if (unaff_s0_lo == 0) {
    return false;
  }
  fVar18 = 0.0;
  fVar8 = *(float *)(param_1 + 0xc);
  if (DAT_003c9ed4 != 0) {
    fVar18 = *(float *)(DAT_003c9ed4 + 0xc);
  }
  fVar20 = *(float *)(iStack_cc + 0xc) - *(float *)(iStack_cc + 8);
  fVar18 = fVar18 * 0.25;
  if (*(float *)(param_1 + 0x6c) * 0.2 <= *(float *)(param_1 + 0x4c)) {
    if (*(float *)(unaff_s0_lo + 8) < 0.0) {
      fVar7 = *(float *)(iStack_cc + 0x18);
    }
    else {
      fVar7 = *(float *)(unaff_s0_lo + 0x14);
    }
    bVar1 = true;
    if (0.2 <= fVar7) goto LAB_00309d74;
  }
  bVar1 = false;
LAB_00309d74:
  if (bVar1) {
    fVar9 = *(float *)(param_1 + 0x50);
    fVar17 = *(float *)(param_1 + 0x6c) * 0.5;
    fVar14 = *(float *)(param_1 + 0x54);
    fVar11 = *(float *)(param_1 + 0x58);
    fVar15 = *(float *)(param_1 + 0x34);
    fVar16 = *(float *)(param_1 + 0x5c);
    fVar12 = *(float *)(param_1 + 0x6c) * 0.25;
    fVar13 = *(float *)(param_1 + 0x38);
    fVar19 = *(float *)(param_1 + 0x60);
    fVar7 = *(float *)(param_1 + 0x3c);
    fVar10 = *(float *)(param_1 + 100);
    iVar3 = *(int *)(DAT_003cd8ac + 0x10);
    if (iVar3 != 0) {
      *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar3 + 8) = iStack_cc + 4;
      *(int *)(iVar3 + 0xc) = unaff_s0_lo;
      *(float *)(iVar3 + 0x10) = fVar12;
      *(float *)(iVar3 + 0x14) = fVar17;
      *(float *)(iVar3 + 0x18) = fVar15 + fVar17 * fVar9 + fVar12 * fVar16;
      *(float *)(iVar3 + 0x1c) = fVar13 + fVar17 * fVar14 + fVar12 * fVar19;
      *(float *)(iVar3 + 0x20) = fVar7 + fVar17 * fVar11 + fVar12 * fVar10;
      *(undefined4 *)(iVar3 + 0x24) = 0x501502f9;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      if (*(int *)(iVar4 + 0xc) == 0) {
        *(int *)(iVar4 + 0xc) = iVar3;
        *(int *)(iVar4 + 8) = iVar3;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
      }
      else {
        *(int *)(iVar3 + 0x28) = *(int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar3;
        *(int *)(iVar4 + 0xc) = iVar3;
      }
    }
  }
  iVar4 = DAT_003cd8ac;
  if (in_t2_lo != 0) {
    iVar3 = iStack_cc + 4;
    fVar7 = *(float *)(iStack_cc + 0x10);
    if (5.0 < fVar7) {
      if (fVar7 <= fVar21) {
        fVar8 = -*(float *)(param_1 + 0xc);
        fVar7 = *(float *)(param_1 + 0x6c);
      }
      else {
        fVar7 = *(float *)(param_1 + 0x6c);
      }
      fVar8 = fVar21 * fVar7 + fVar8;
      if ((fVar18 < fVar8) && (*(float *)(param_1 + 8) < fVar20)) {
        if (*(float *)(iStack_cc + 8) + *(float *)(param_1 + 0xc) <= 0.0) {
          if (0.0 <= *(float *)(iStack_cc + 0xc) - *(float *)(param_1 + 0xc)) {
            fVar12 = *(float *)(param_1 + 0x50);
            fVar10 = *(float *)(param_1 + 0x54);
            fVar13 = *(float *)(param_1 + 0x58);
            fVar11 = *(float *)(param_1 + 0x34);
            fVar9 = *(float *)(param_1 + 0x38);
            fVar7 = *(float *)(param_1 + 0x3c);
            iVar2 = *(int *)(DAT_003cd8ac + 0x10);
            if (iVar2 != 0) {
              *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
              *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
              *(int *)(iVar2 + 8) = iVar3;
              *(int *)(iVar2 + 0xc) = unaff_s0_lo;
              *(undefined4 *)(iVar2 + 0x10) = 0;
              *(float *)(iVar2 + 0x14) = fVar8;
              *(float *)(iVar2 + 0x18) = fVar11 + fVar8 * fVar12;
              *(float *)(iVar2 + 0x1c) = fVar9 + fVar8 * fVar10;
              *(float *)(iVar2 + 0x20) = fVar7 + fVar8 * fVar13;
              *(undefined4 *)(iVar2 + 0x24) = 0;
              *(undefined1 *)(iVar2 + 0x30) = 1;
              if (*(int *)(iVar4 + 0xc) == 0) {
                *(int *)(iVar4 + 0xc) = iVar2;
                *(int *)(iVar4 + 8) = iVar2;
                *(undefined4 *)(iVar2 + 0x2c) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
              }
              else {
                *(int *)(iVar2 + 0x28) = *(int *)(iVar4 + 0xc);
                *(undefined4 *)(iVar2 + 0x2c) = 0;
                *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar2;
                *(int *)(iVar4 + 0xc) = iVar2;
              }
            }
          }
          fVar7 = *(float *)(param_1 + 0xf4);
        }
        else {
          fVar7 = *(float *)(param_1 + 0xf4);
        }
        uVar5 = 0;
        fVar10 = *(float *)(param_1 + 100);
        fVar12 = *(float *)(param_1 + 0x5c);
        fVar11 = *(float *)(param_1 + 0x54);
        uVar6 = (int)(fVar20 / fVar7) + 1U & 0xffff;
        fVar9 = *(float *)(param_1 + 0x38);
        fStack_a4 = *(float *)(iStack_cc + 8) + (fVar20 - (float)(int)(uVar6 - 1) * fVar7) * 0.5;
        fStack_94 = *(float *)(param_1 + 0x3c) + fVar8 * *(float *)(param_1 + 0x58) +
                    fStack_a4 * fVar10;
        fStack_9c = *(float *)(param_1 + 0x34) + fVar8 * *(float *)(param_1 + 0x50) +
                    fStack_a4 * fVar12;
        if (uVar6 != 0) {
          do {
            iVar4 = DAT_003cd8ac;
            fStack_9c = fStack_9c + fVar7 * fVar12;
            fStack_a4 = fStack_a4 + *(float *)(param_1 + 0xf4);
            fStack_94 = fStack_94 + fVar7 * fVar10;
            fVar13 = 0.0;
            fVar20 = 1.0 - ((float)uVar5 + (float)uVar5) / (float)uVar6;
            if (DAT_003c9ed4 != 0) {
              fVar13 = *(float *)(DAT_003c9ed4 + 0xc);
            }
            iVar2 = *(int *)(DAT_003cd8ac + 0x10);
            if (iVar2 != 0) {
              *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
              *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
              *(int *)(iVar2 + 8) = iVar3;
              *(int *)(iVar2 + 0xc) = unaff_s0_lo;
              *(float *)(iVar2 + 0x10) = fStack_a4;
              *(float *)(iVar2 + 0x14) = fVar8;
              *(float *)(iVar2 + 0x18) = fStack_9c;
              *(float *)(iVar2 + 0x1c) = fVar9 + fVar8 * fVar11;
              *(float *)(iVar2 + 0x20) = fStack_94;
              *(float *)(iVar2 + 0x24) = fVar20 * fVar20 * fVar13;
              *(undefined1 *)(iVar2 + 0x30) = 1;
              if (*(int *)(iVar4 + 0xc) == 0) {
                *(int *)(iVar4 + 0xc) = iVar2;
                *(int *)(iVar4 + 8) = iVar2;
                *(undefined4 *)(iVar2 + 0x2c) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
              }
              else {
                *(int *)(iVar2 + 0x28) = *(int *)(iVar4 + 0xc);
                *(undefined4 *)(iVar2 + 0x2c) = 0;
                *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar2;
                *(int *)(iVar4 + 0xc) = iVar2;
              }
            }
            uVar5 = uVar5 + 1 & 0xffff;
          } while (uVar5 < uVar6);
        }
      }
    }
    else if (((0.2 < *(float *)(iStack_cc + 0x18)) && (25.0 < fVar7)) &&
            (fVar8 = fVar21 * *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 8), 0.0 < fVar8)) {
      fVar12 = *(float *)(param_1 + 0x50);
      fVar14 = *(float *)(param_1 + 0x58);
      fVar13 = *(float *)(param_1 + 0x34);
      fVar15 = *(float *)(param_1 + 0x5c);
      fVar11 = *(float *)(param_1 + 0x54);
      fVar7 = (*(float *)(iStack_cc + 8) + *(float *)(iStack_cc + 0xc)) * 0.5 -
              *(float *)(iStack_cc + 0x14) * fVar21;
      fVar10 = *(float *)(param_1 + 0x3c);
      fVar9 = *(float *)(param_1 + 100);
      fVar20 = *(float *)(param_1 + 0x38);
      iVar2 = *(int *)(DAT_003cd8ac + 0x10);
      if (iVar2 != 0) {
        *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
        *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
        *(int *)(iVar2 + 8) = iVar3;
        *(int *)(iVar2 + 0xc) = unaff_s0_lo;
        *(float *)(iVar2 + 0x10) = fVar7;
        *(float *)(iVar2 + 0x14) = fVar8;
        *(float *)(iVar2 + 0x18) = fVar13 + fVar8 * fVar12 + fVar7 * fVar15;
        *(float *)(iVar2 + 0x1c) = fVar20 + fVar8 * fVar11;
        *(float *)(iVar2 + 0x20) = fVar10 + fVar8 * fVar14 + fVar7 * fVar9;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        *(undefined1 *)(iVar2 + 0x30) = 1;
        if (*(int *)(iVar4 + 0xc) == 0) {
          *(int *)(iVar4 + 0xc) = iVar2;
          *(int *)(iVar4 + 8) = iVar2;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
          *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
          *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
        }
        else {
          *(int *)(iVar2 + 0x28) = *(int *)(iVar4 + 0xc);
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar2;
          *(int *)(iVar4 + 0xc) = iVar2;
        }
      }
    }
  }
  if ((in_t9_lo != 0) && (iStack_dc = *(int *)(iStack_cc + 0x1c), iStack_dc != 0)) {
    fVar20 = *(float *)(iStack_dc + 0x10);
    bVar1 = fVar20 <= fVar21;
    fVar8 = fVar21;
    iVar4 = unaff_s0_lo;
    do {
      iVar3 = DAT_003cd8ac;
      if (bVar1) {
        if (fVar20 < 5.0) break;
        iVar4 = iStack_dc + 4;
        fVar20 = -*(float *)(param_1 + 0xc);
        fVar8 = *(float *)(iStack_dc + 0x10);
      }
      else {
        fVar20 = *(float *)(param_1 + 0xc);
      }
      fVar7 = fVar8 * *(float *)(param_1 + 0x6c);
      fVar20 = fVar7 + fVar20;
      if (fVar18 <= fVar20) {
        fStack_a4 = *(float *)(iStack_dc + 0xc);
        fVar9 = fStack_a4 - *(float *)(iStack_dc + 8);
        uVar5 = 0;
        if (*(float *)(param_1 + 8) < fVar9) {
          fVar11 = *(float *)(param_1 + 0xf4);
          fVar13 = *(float *)(param_1 + 0x5c);
          fVar12 = *(float *)(param_1 + 100);
          fVar10 = *(float *)(param_1 + 0x54);
          fVar7 = *(float *)(param_1 + 0x38);
          uVar6 = (int)(fVar9 / fVar11) + 1U & 0xffff;
          fStack_a4 = fStack_a4 - (fVar9 - (float)(int)(uVar6 - 1) * fVar11) * 0.5;
          fStack_94 = *(float *)(param_1 + 0x3c) + fVar20 * *(float *)(param_1 + 0x58) +
                      fStack_a4 * fVar12;
          fStack_9c = *(float *)(param_1 + 0x34) + fVar20 * *(float *)(param_1 + 0x50) +
                      fStack_a4 * fVar13;
          if (uVar6 != 0) {
            do {
              iVar3 = DAT_003cd8ac;
              fStack_9c = fStack_9c + -fVar11 * fVar13;
              fStack_a4 = fStack_a4 - *(float *)(param_1 + 0xf4);
              fStack_94 = fStack_94 + -fVar11 * fVar12;
              fVar14 = 0.0;
              fVar9 = 1.0 - ((float)uVar5 + (float)uVar5) / (float)uVar6;
              if (DAT_003c9ed4 != 0) {
                fVar14 = *(float *)(DAT_003c9ed4 + 0xc);
              }
              iVar2 = *(int *)(DAT_003cd8ac + 0x10);
              if (iVar2 != 0) {
                *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
                *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
                *(int *)(iVar2 + 8) = iStack_dc + 4;
                *(int *)(iVar2 + 0xc) = iVar4;
                *(float *)(iVar2 + 0x10) = fStack_a4;
                *(float *)(iVar2 + 0x14) = fVar20;
                *(float *)(iVar2 + 0x18) = fStack_9c;
                *(float *)(iVar2 + 0x1c) = fVar7 + fVar20 * fVar10;
                *(float *)(iVar2 + 0x20) = fStack_94;
                *(float *)(iVar2 + 0x24) = fVar9 * fVar9 * fVar14;
                *(undefined1 *)(iVar2 + 0x30) = 1;
                if (*(int *)(iVar3 + 0xc) == 0) {
                  *(int *)(iVar3 + 0xc) = iVar2;
                  *(int *)(iVar3 + 8) = iVar2;
                  *(undefined4 *)(iVar2 + 0x2c) = 0;
                  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x28) = 0;
                  *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x28) = 0;
                  *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x2c) = 0;
                }
                else {
                  *(int *)(iVar2 + 0x28) = *(int *)(iVar3 + 0xc);
                  *(undefined4 *)(iVar2 + 0x2c) = 0;
                  *(int *)(*(int *)(iVar3 + 0xc) + 0x2c) = iVar2;
                  *(int *)(iVar3 + 0xc) = iVar2;
                }
              }
              uVar5 = uVar5 + 1 & 0xffff;
            } while (uVar5 < uVar6);
          }
        }
        else if ((0.2 < *(float *)(iStack_dc + 0x18)) && (25.0 < *(float *)(iStack_dc + 0x10))) {
          fVar7 = fVar7 - *(float *)(param_1 + 8);
          fVar20 = (*(float *)(iStack_dc + 8) + fStack_a4) * 0.5 -
                   *(float *)(iStack_dc + 0x14) * fVar8;
          if (0.0 < fVar7) {
            fVar12 = *(float *)(param_1 + 0x50);
            fVar15 = *(float *)(param_1 + 0x58);
            fVar11 = *(float *)(param_1 + 0x34);
            fVar14 = *(float *)(param_1 + 0x5c);
            fVar16 = *(float *)(param_1 + 0x54);
            fVar9 = *(float *)(param_1 + 0x3c);
            fVar10 = *(float *)(param_1 + 100);
            fVar13 = *(float *)(param_1 + 0x38);
            iVar2 = *(int *)(DAT_003cd8ac + 0x10);
            if (iVar2 != 0) {
              *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
              *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
              *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
              *(int *)(iVar2 + 8) = iStack_dc + 4;
              *(int *)(iVar2 + 0xc) = iVar4;
              *(float *)(iVar2 + 0x10) = fVar20;
              *(float *)(iVar2 + 0x14) = fVar7;
              *(float *)(iVar2 + 0x18) = fVar11 + fVar7 * fVar12 + fVar20 * fVar14;
              *(float *)(iVar2 + 0x1c) = fVar13 + fVar7 * fVar16;
              *(float *)(iVar2 + 0x20) = fVar9 + fVar7 * fVar15 + fVar20 * fVar10;
              *(undefined4 *)(iVar2 + 0x24) = 0;
              *(undefined1 *)(iVar2 + 0x30) = 1;
              if (*(int *)(iVar3 + 0xc) == 0) {
                *(int *)(iVar3 + 0xc) = iVar2;
                *(int *)(iVar3 + 8) = iVar2;
                *(undefined4 *)(iVar2 + 0x2c) = 0;
                *(undefined4 *)(*(int *)(iVar3 + 8) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x2c) = 0;
              }
              else {
                *(int *)(iVar2 + 0x28) = *(int *)(iVar3 + 0xc);
                *(undefined4 *)(iVar2 + 0x2c) = 0;
                *(int *)(*(int *)(iVar3 + 0xc) + 0x2c) = iVar2;
                *(int *)(iVar3 + 0xc) = iVar2;
              }
            }
          }
        }
      }
      iStack_dc = *(int *)(iStack_dc + 0x1c);
      if (iStack_dc == 0) break;
      fVar20 = *(float *)(iStack_dc + 0x10);
      bVar1 = fVar20 <= fVar8;
    } while( true );
  }
  if (unaff_s3 != 0) {
    while (iVar4 = DAT_003cd8ac, iStack_cc = *(int *)(iStack_cc + 0x20), iStack_cc != 0) {
      if (*(float *)(iStack_cc + 0x10) <= fVar21) {
        if (*(float *)(iStack_cc + 0x10) < 5.0) break;
        unaff_s0_lo = iStack_cc + 4;
        fVar8 = -*(float *)(param_1 + 0xc);
        fVar21 = *(float *)(iStack_cc + 0x10);
      }
      else {
        fVar8 = *(float *)(param_1 + 0xc);
      }
      fVar20 = fVar21 * *(float *)(param_1 + 0x6c);
      fVar8 = fVar20 + fVar8;
      if (fVar18 <= fVar8) {
        fStack_a4 = *(float *)(iStack_cc + 8);
        fVar7 = *(float *)(iStack_cc + 0xc) - fStack_a4;
        uVar5 = 0;
        if (*(float *)(param_1 + 8) < fVar7) {
          fVar10 = *(float *)(param_1 + 0xf4);
          fVar11 = *(float *)(param_1 + 100);
          fVar12 = *(float *)(param_1 + 0x5c);
          fVar9 = *(float *)(param_1 + 0x54);
          fVar20 = *(float *)(param_1 + 0x38);
          uVar6 = (int)(fVar7 / fVar10) + 1U & 0xffff;
          fStack_a4 = fStack_a4 + (fVar7 - (float)(int)(uVar6 - 1) * fVar10) * 0.5;
          fStack_94 = *(float *)(param_1 + 0x3c) + fVar8 * *(float *)(param_1 + 0x58) +
                      fStack_a4 * fVar11;
          fStack_9c = *(float *)(param_1 + 0x34) + fVar8 * *(float *)(param_1 + 0x50) +
                      fStack_a4 * fVar12;
          if (uVar6 != 0) {
            do {
              iVar4 = DAT_003cd8ac;
              fStack_9c = fStack_9c + fVar10 * fVar12;
              fStack_a4 = fStack_a4 + *(float *)(param_1 + 0xf4);
              fStack_94 = fStack_94 + fVar10 * fVar11;
              fVar13 = 0.0;
              fVar7 = 1.0 - ((float)uVar5 + (float)uVar5) / (float)uVar6;
              if (DAT_003c9ed4 != 0) {
                fVar13 = *(float *)(DAT_003c9ed4 + 0xc);
              }
              iVar3 = *(int *)(DAT_003cd8ac + 0x10);
              if (iVar3 != 0) {
                *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
                *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x2c);
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
                *(int *)(iVar3 + 8) = iStack_cc + 4;
                *(int *)(iVar3 + 0xc) = unaff_s0_lo;
                *(float *)(iVar3 + 0x10) = fStack_a4;
                *(float *)(iVar3 + 0x14) = fVar8;
                *(float *)(iVar3 + 0x18) = fStack_9c;
                *(float *)(iVar3 + 0x1c) = fVar20 + fVar8 * fVar9;
                *(float *)(iVar3 + 0x20) = fStack_94;
                *(float *)(iVar3 + 0x24) = fVar7 * fVar7 * fVar13;
                *(undefined1 *)(iVar3 + 0x30) = 1;
                if (*(int *)(iVar4 + 0xc) == 0) {
                  *(int *)(iVar4 + 0xc) = iVar3;
                  *(int *)(iVar4 + 8) = iVar3;
                  *(undefined4 *)(iVar3 + 0x2c) = 0;
                  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
                  *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
                  *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
                }
                else {
                  *(int *)(iVar3 + 0x28) = *(int *)(iVar4 + 0xc);
                  *(undefined4 *)(iVar3 + 0x2c) = 0;
                  *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar3;
                  *(int *)(iVar4 + 0xc) = iVar3;
                }
              }
              uVar5 = uVar5 + 1 & 0xffff;
            } while (uVar5 < uVar6);
          }
        }
        else if ((0.2 < *(float *)(iStack_cc + 0x18)) && (25.0 < *(float *)(iStack_cc + 0x10))) {
          fVar20 = fVar20 - *(float *)(param_1 + 8);
          fVar8 = (fStack_a4 + *(float *)(iStack_cc + 0xc)) * 0.5 -
                  *(float *)(iStack_cc + 0x14) * fVar21;
          if (0.0 < fVar20) {
            fVar11 = *(float *)(param_1 + 0x50);
            fVar14 = *(float *)(param_1 + 0x58);
            fVar10 = *(float *)(param_1 + 0x34);
            fVar13 = *(float *)(param_1 + 0x5c);
            fVar15 = *(float *)(param_1 + 0x54);
            fVar7 = *(float *)(param_1 + 0x3c);
            fVar9 = *(float *)(param_1 + 100);
            fVar12 = *(float *)(param_1 + 0x38);
            iVar3 = *(int *)(DAT_003cd8ac + 0x10);
            if (iVar3 != 0) {
              *(int *)(DAT_003cd8ac + 0x14) = *(int *)(DAT_003cd8ac + 0x14) + 1;
              *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x2c);
              *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
              *(int *)(iVar3 + 8) = iStack_cc + 4;
              *(int *)(iVar3 + 0xc) = unaff_s0_lo;
              *(float *)(iVar3 + 0x10) = fVar8;
              *(float *)(iVar3 + 0x14) = fVar20;
              *(float *)(iVar3 + 0x18) = fVar10 + fVar20 * fVar11 + fVar8 * fVar13;
              *(float *)(iVar3 + 0x1c) = fVar12 + fVar20 * fVar15;
              *(float *)(iVar3 + 0x20) = fVar7 + fVar20 * fVar14 + fVar8 * fVar9;
              *(undefined4 *)(iVar3 + 0x24) = 0;
              *(undefined1 *)(iVar3 + 0x30) = 1;
              if (*(int *)(iVar4 + 0xc) == 0) {
                *(int *)(iVar4 + 0xc) = iVar3;
                *(int *)(iVar4 + 8) = iVar3;
                *(undefined4 *)(iVar3 + 0x2c) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
                *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
              }
              else {
                *(int *)(iVar3 + 0x28) = *(int *)(iVar4 + 0xc);
                *(undefined4 *)(iVar3 + 0x2c) = 0;
                *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar3;
                *(int *)(iVar4 + 0xc) = iVar3;
              }
            }
          }
        }
      }
    }
  }
  return *(int *)(DAT_003cd8ac + 0x14) != 0;
}


// ==== FUN_0030b038 @ 0030b038 ====
// GLOBAL DAT_003cd898 float
// GLOBAL DAT_003cd8ac int
// GLOBAL DAT_003c9ed4 int

void FUN_0030b038(undefined8 param_1)

{
  int iVar1;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [2];
  
  iVar1 = (int)param_1;
  if (*(float *)(iVar1 + 0xd0) < DAT_003cd898) {
    *(undefined4 *)(iVar1 + 0x8c) = 0;
  }
  switch(*(undefined4 *)(iVar1 + 0x8c)) {
  case 0:
    afStack_38[0] = 0.0;
    fStack_3c = 0.0;
    if (DAT_003c9ed4 != 0) {
      fStack_3c = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_40 = 0.0;
    fStack_3c = fStack_3c * 100.0;
    break;
  case 1:
    afStack_38[0] = 0.0;
    if (DAT_003c9ed4 != 0) {
      afStack_38[0] = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_3c = 0.0;
    afStack_38[0] = afStack_38[0] * 50.0;
    if (DAT_003c9ed4 != 0) {
      fStack_3c = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_40 = 0.0;
    fStack_3c = fStack_3c * 100.0;
    break;
  case 2:
    fStack_3c = 0.0;
    afStack_38[0] = 1e+12;
    if (DAT_003c9ed4 != 0) {
      fStack_3c = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_40 = 0.0;
    fStack_3c = fStack_3c * 100.0;
    break;
  case 3:
    fStack_40 = 0.0;
    afStack_38[0] = 0.0;
    fStack_3c = 0.0;
    if (DAT_003c9ed4 != 0) {
      fStack_3c = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_3c = fStack_3c * 100.0;
    if (DAT_003c9ed4 != 0) {
      fStack_40 = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_40 = fStack_40 * 50.0;
    break;
  case 4:
    fStack_3c = 0.0;
    afStack_38[0] = 0.0;
    if (DAT_003c9ed4 != 0) {
      fStack_3c = *(float *)(DAT_003c9ed4 + 0xc);
    }
    fStack_3c = fStack_3c * 100.0;
    fStack_40 = 1e+12;
  }
  for (iVar1 = *(int *)(DAT_003cd8ac + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    FUN_0030b988(param_1,iVar1 + 4,&fStack_40,&fStack_3c,afStack_38);
  }
  return;
}


// ==== FUN_0030b270 @ 0030b270 ====
// GLOBAL DAT_003cd8ac int
// GLOBAL DAT_004087d4 float
// GLOBAL DAT_003cd8b0 int

bool FUN_0030b270(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = DAT_004087d4;
  iVar4 = DAT_003cd8b0;
  for (iVar1 = *(int *)(DAT_003cd8ac + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    DAT_003cd8b0 = iVar4;
    if (*(float *)(iVar1 + 0x24) < fVar5) {
      for (iVar6 = *(int *)(iVar4 + 8);
          (iVar6 != 0 && (*(float *)(iVar6 + 0x24) <= *(float *)(iVar1 + 0x24)));
          iVar6 = *(int *)(iVar6 + 0x2c)) {
      }
      iVar2 = *(int *)(iVar4 + 0x10);
      if (iVar2 != 0) {
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
        *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
        *(undefined1 *)(iVar2 + 0x30) = 1;
        if (iVar6 == 0) {
          if (*(int *)(iVar4 + 0xc) == 0) {
            *(int *)(iVar4 + 0xc) = iVar2;
            *(int *)(iVar4 + 8) = iVar2;
            *(undefined4 *)(iVar2 + 0x2c) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 8) + 0x28) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x28) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x2c) = 0;
          }
          else {
            *(int *)(iVar2 + 0x28) = *(int *)(iVar4 + 0xc);
            *(undefined4 *)(iVar2 + 0x2c) = 0;
            *(int *)(*(int *)(iVar4 + 0xc) + 0x2c) = iVar2;
            *(int *)(iVar4 + 0xc) = iVar2;
          }
        }
        else {
          iVar3 = *(int *)(iVar6 + 0x28);
          *(int *)(iVar2 + 0x2c) = iVar6;
          *(int *)(iVar6 + 0x28) = iVar2;
          *(int *)(iVar2 + 0x28) = iVar3;
          if (iVar3 == 0) {
            *(int *)(iVar4 + 8) = iVar2;
          }
          else {
            *(int *)(iVar3 + 0x2c) = iVar2;
          }
        }
      }
    }
    iVar4 = DAT_003cd8b0;
  }
  DAT_003cd8b0 = iVar4;
  return *(int *)(iVar4 + 0x14) != 0;
}


// ==== FUN_0030b4a8 @ 0030b4a8 ====
// GLOBAL DAT_003cd89c float
// GLOBAL DAT_003c9ed4 int

/* Strings referenciadas:
     "TrackingUpdatePeriod"
     "ForcedModeTimerThreshold"
     "ForcedModeTimerDelay"
     "CollisionDiagrammWidth"
     "AvoidanceCandidateSpacing"
     "SlowSpeedFactor" */

undefined4 FUN_0030b4a8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_002e3920(param_2);
  lVar2 = stricmp(uVar1,0x4087d8);
  if (lVar2 == 0) {
    uVar1 = FUN_002e3918(param_2);
    uVar1 = FUN_0035e730(uVar1);
    fVar4 = (float)FUN_00291c68(uVar1);
    if (fVar4 < 0.0) {
      return 0;
    }
    if (fVar4 < 0.0) {
      fVar4 = DAT_003cd89c;
    }
  }
  else {
    uVar1 = FUN_002e3920(param_2);
    lVar2 = stricmp(uVar1,0x4087f0);
    if (lVar2 == 0) {
      uVar1 = FUN_002e3918(param_2);
      uVar1 = FUN_0035e730(uVar1);
      fVar4 = (float)FUN_00291c68(uVar1);
      if (fVar4 < 0.0) {
        return 0;
      }
      if (fVar4 < 0.0) {
        return 1;
      }
      *(float *)(param_1 + 0xe8) = fVar4;
      fVar4 = DAT_003cd89c;
    }
    else {
      uVar1 = FUN_002e3920(param_2);
      lVar2 = stricmp(uVar1,0x408810);
      if (lVar2 == 0) {
        uVar1 = FUN_002e3918(param_2);
        uVar1 = FUN_0035e730(uVar1);
        fVar4 = (float)FUN_00291c68(uVar1);
        if (fVar4 < 0.0) {
          return 0;
        }
        if (fVar4 < 0.0) {
          return 1;
        }
        *(float *)(param_1 + 0xec) = fVar4;
        fVar4 = DAT_003cd89c;
      }
      else {
        uVar1 = FUN_002e3920(param_2);
        lVar2 = stricmp(uVar1,0x408828);
        if (lVar2 == 0) {
          uVar1 = FUN_002e3918(param_2);
          uVar1 = FUN_0035e730(uVar1);
          fVar4 = (float)FUN_00291c68(uVar1);
          if (fVar4 <= 0.0) {
            return 0;
          }
          fVar3 = 0.0;
          if (DAT_003c9ed4 != 0) {
            fVar3 = *(float *)(DAT_003c9ed4 + 0xc);
          }
          if (fVar4 * fVar3 <= 0.0) {
            return 1;
          }
          *(float *)(param_1 + 0xf0) = fVar4 * fVar3 * 0.5;
          return 1;
        }
        uVar1 = FUN_002e3920(param_2);
        lVar2 = stricmp(uVar1,0x408840);
        if (lVar2 == 0) {
          uVar1 = FUN_002e3918(param_2);
          uVar1 = FUN_0035e730(uVar1);
          fVar4 = (float)FUN_00291c68(uVar1);
          if (fVar4 <= 0.0) {
            return 0;
          }
          if (fVar4 <= 0.0) {
            return 1;
          }
          *(float *)(param_1 + 0xf4) = fVar4 * *(float *)(param_1 + 8);
          return 1;
        }
        uVar1 = FUN_002e3920(param_2);
        lVar2 = stricmp(uVar1,0x408860);
        if (lVar2 != 0) {
          return 0;
        }
        uVar1 = FUN_002e3918(param_2);
        uVar1 = FUN_0035e730(uVar1);
        uVar5 = FUN_00291c68(uVar1);
        *(undefined4 *)(param_1 + 0xf8) = uVar5;
        fVar4 = DAT_003cd89c;
      }
    }
  }
  DAT_003cd89c = fVar4;
  return 1;
}


// ==== CGapDynamicAvoidance_0030b750 @ 0030b750 ====
// GLOBAL DAT_00455cf8 undefined_*
// GLOBAL DAT_003f07a0 undefined

/* Strings referenciadas:
     "CGapDynamicAvoidance" */

void CGapDynamicAvoidance_0030b750(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00455cf8 = &DAT_003f07a0;
    }
    else {
      FUN_0030d0e0(0x455be8,0x408870,0x3067a0);
    }
  }
  return;
}


// ==== FUN_0030b7a8 @ 0030b7a8 ====
// GLOBAL DAT_004549c4 uint

void FUN_0030b7a8(int param_1)

{
  if ((*(uint *)(param_1 + 0x1c) & DAT_004549c4) != 0) {
    FUN_003071a8();
  }
  return;
}


// ==== FUN_0030b898 @ 0030b898 ====

void FUN_0030b898(void)

{
  FUN_003071a8();
  return;
}


// ==== FUN_0030b988 @ 0030b988 ====

void FUN_0030b988(int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0xc);
  if (*(float *)(iVar1 + 0xc) < *(float *)(param_1 + 0x70)) {
    if (*(float *)(iVar1 + 8) < fVar2) {
      fVar2 = *param_3;
    }
    else if (fVar2 < *(float *)(iVar1 + 4)) {
      fVar2 = *param_5;
    }
    else {
      fVar2 = *param_4;
    }
    fVar3 = *(float *)(param_2 + 0x20);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x20);
    if (fVar2 < 0.0) {
      *(float *)(param_2 + 0x20) = fVar3 - fVar2;
      return;
    }
  }
  *(float *)(param_2 + 0x20) = fVar3 + fVar2;
  return;
}


// ==== FUN_0030ba18 @ 0030ba18 ====

void FUN_0030ba18(void)

{
  CGapDynamicAvoidance_0030b750(1,0xffff);
  return;
}


// ==== FUN_0030ba38 @ 0030ba38 ====

void FUN_0030ba38(void)

{
  CGapDynamicAvoidance_0030b750(0,0xffff);
  return;
}


// ==== FUN_0030ba58 @ 0030ba58 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_00408b0c undefined4
// GLOBAL DAT_003f09d0 undefined
// GLOBAL DAT_003f0ee8 undefined
// GLOBAL DAT_003f0f00 undefined
// GLOBAL DAT_003f0f18 undefined

undefined8 FUN_0030ba58(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_90;
  int *piStack_8c;
  
  *(undefined4 *)param_1 = &DAT_003f0f00;
  puStack_90 = (undefined4 *)0x0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&puStack_90);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(puStack_90,0x1c,uVar2);
  }
  puVar1 = puStack_90;
  puStack_90[2] = 0;
  *puStack_90 = &DAT_003f0f18;
  puStack_90[5] = 0;
  iVar7 = (int)param_2;
  puStack_90[6] = iVar7;
  puStack_90[4] = 0;
  puStack_90[1] = 0;
  puStack_90[3] = 0;
  if (param_2 != 0) {
    piStack_8c = (int *)0x0;
    iVar8 = iVar7 * 0x28 + 0x10;
    uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar8,
                       (uint)&puStack_90 | 4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_8c,iVar8,uVar2);
    }
    iVar8 = iVar7 + -1;
    piVar6 = piStack_8c + 4;
    *piStack_8c = iVar7;
    piVar4 = piVar6;
    if (param_2 != 0) {
      do {
        *piVar4 = (int)&DAT_003f0ee8;
        iVar8 = iVar8 + -1;
        piVar4[1] = (int)&DAT_003f09d0;
        piVar4[7] = 0;
        piVar4[8] = 0;
        *(undefined1 *)(piVar4 + 9) = 0;
        piVar4 = piVar4 + 10;
      } while (iVar8 != -1);
    }
    puVar1[1] = piVar6;
    uVar5 = 1;
    puVar1[4] = piVar6;
    piStack_8c[0xb] = 0;
    iVar7 = 0;
    if (1 < (uint)puVar1[6]) {
      iVar8 = 0x28;
      do {
        uVar5 = uVar5 + 1;
        iVar3 = puVar1[1] + iVar7;
        iVar7 = iVar7 + 0x28;
        *(int *)(iVar8 + puVar1[1] + 0x1c) = iVar3;
        *(int *)(*(int *)(iVar8 + puVar1[1] + 0x1c) + 0x20) = iVar8 + puVar1[1];
        iVar8 = iVar8 + 0x28;
      } while (uVar5 < (uint)puVar1[6]);
    }
    *(undefined4 *)(puVar1[6] * 0x28 + puVar1[1] + -8) = 0;
  }
  ((undefined4 *)param_1)[1] = puVar1;
  FUN_0030bcd0(0xbf800000,0x3f800000,DAT_00408b0c,param_1);
  return param_1;
}


// ==== FUN_0030bcd0 @ 0030bcd0 ====
// GLOBAL DAT_00408b10 undefined4
// GLOBAL DAT_003f09d0 undefined

void FUN_0030bcd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_4 + 4);
  *(undefined4 *)(param_4 + 0x10) = DAT_00408b10;
  iVar2 = *(int *)(iVar1 + 8);
  while (iVar2 != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x24) = 0;
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x20);
    *(undefined4 *)(*(int *)(iVar1 + 8) + 0x20) = *(undefined4 *)(iVar1 + 0x10);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *(int *)(iVar1 + 8) = iVar2;
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar1 = *(int *)(param_4 + 4);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0x20);
    uVar3 = *(undefined4 *)(iVar2 + 4);
    *(ulong *)(iVar2 + 4) = CONCAT44(param_1,&DAT_003f09d0);
    *(ulong *)(iVar2 + 0xc) = CONCAT44(param_3,param_2);
    *(undefined8 *)(iVar2 + 0x14) = 0x3f80000000000000;
    *(undefined1 *)(iVar2 + 0x24) = 1;
    *(undefined4 *)(iVar2 + 4) = uVar3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(int *)(iVar1 + 0xc) = iVar2;
      *(int *)(iVar1 + 8) = iVar2;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 8) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x20) = 0;
    }
    else {
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(int *)(*(int *)(iVar1 + 0xc) + 0x20) = iVar2;
      *(int *)(iVar1 + 0xc) = iVar2;
    }
  }
  *(undefined4 *)(param_4 + 0xc) = param_2;
  *(undefined4 *)(param_4 + 8) = param_1;
  return;
}


// ==== FUN_0030be70 @ 0030be70 ====
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003f0900 undefined
// GLOBAL DAT_003f09d0 undefined

undefined4 FUN_0030be70(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined *puStack_1e0;
  int iStack_1dc;
  undefined *puStack_1d0;
  int iStack_1cc;
  undefined *puStack_1c0;
  int iStack_1bc;
  undefined *puStack_1b0;
  int iStack_1ac;
  undefined *puStack_170;
  int iStack_16c;
  undefined *puStack_160;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *puStack_140;
  int iStack_13c;
  undefined4 uStack_130;
  float fStack_100;
  float fStack_fc;
  int iStack_f8;
  undefined **ppuStack_f4;
  undefined **ppuStack_f0;
  float *pfStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  fVar16 = *(float *)(param_2 + 4);
  iVar11 = (int)param_1;
  uVar19 = *(undefined4 *)(param_2 + 0x14);
  fVar15 = *(float *)(param_2 + 8);
  fVar18 = *(float *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar17 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (fVar16 < *(float *)(iVar11 + 8)) {
    return 0;
  }
  if (fVar15 <= fVar16) {
    return 0;
  }
  if (*(float *)(iVar11 + 0xc) < fVar15) {
    return 0;
  }
  iVar1 = *(int *)(iVar11 + 4);
  uStack_e0 = 0x3f0000;
  uStack_dc = 0;
  if (*(int *)(iVar1 + 0x18) - 3U < *(uint *)(iVar1 + 0x14)) {
    return 0;
  }
  for (iStack_1cc = *(int *)(iVar1 + 8);
      (iStack_1cc != 0 && (*(float *)(iStack_1cc + 0xc) <= fVar16));
      iStack_1cc = *(int *)(iStack_1cc + 0x20)) {
  }
  if (iStack_1cc == 0) {
    return 0;
  }
  fVar13 = *(float *)(iStack_1cc + 0xc);
  iVar1 = iStack_1cc;
  while (fVar13 < fVar15) {
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      return 0;
    }
    fVar13 = *(float *)(iVar1 + 0xc);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (iStack_1cc == iVar1) {
    fVar13 = *(float *)(iStack_1cc + 0x10);
    if (fVar13 <= fVar18) {
      fVar15 = *(float *)(iVar11 + 0x10);
      goto LAB_0030ceb0;
    }
    fVar14 = *(float *)(iStack_1cc + 8);
    if (fVar14 != fVar16) {
      uVar3 = *(undefined8 *)(iStack_1cc + 0x14);
      iVar10 = *(int *)(iVar11 + 4);
      iVar7 = *(int *)(iVar10 + 0x10);
      if (iVar7 != 0) {
        *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
        uVar12 = *(undefined4 *)(iVar7 + 4);
        *(ulong *)(iVar7 + 4) = CONCAT44(fVar14,&DAT_003f09d0);
        *(ulong *)(iVar7 + 0xc) = CONCAT44(fVar13,fVar16);
        *(undefined8 *)(iVar7 + 0x14) = uVar3;
        *(undefined1 *)(iVar7 + 0x24) = 1;
        *(undefined4 *)(iVar7 + 4) = uVar12;
        iVar8 = *(int *)(iVar1 + 0x1c);
        *(int *)(iVar7 + 0x20) = iVar1;
        *(int *)(iVar1 + 0x1c) = iVar7;
        *(int *)(iVar7 + 0x1c) = iVar8;
        if (iVar8 == 0) {
          *(int *)(iVar10 + 8) = iVar7;
        }
        else {
          *(int *)(iVar8 + 0x20) = iVar7;
        }
      }
    }
    if (*(float *)(iVar1 + 0xc) == fVar15) {
      *(float *)(iVar1 + 8) = fVar16;
      *(float *)(iVar1 + 0x10) = fVar18;
      *(undefined4 *)(iVar1 + 0x14) = uVar17;
      *(undefined4 *)(iVar1 + 0x18) = uVar19;
    }
    else {
      iVar10 = *(int *)(iVar11 + 4);
      iVar7 = *(int *)(iVar10 + 0x10);
      if (iVar7 != 0) {
        *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
        uVar17 = *(undefined4 *)(iVar7 + 4);
        *(ulong *)(iVar7 + 4) = CONCAT44(fVar16,&DAT_003f09d0);
        *(undefined8 *)(iVar7 + 0xc) = uVar4;
        *(undefined8 *)(iVar7 + 0x14) = uVar5;
        *(undefined1 *)(iVar7 + 0x24) = 1;
        *(undefined4 *)(iVar7 + 4) = uVar17;
        if (iVar1 == 0) {
          if (*(int *)(iVar10 + 0xc) == 0) {
            *(int *)(iVar10 + 0xc) = iVar7;
            *(int *)(iVar10 + 8) = iVar7;
            *(undefined4 *)(iVar7 + 0x20) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 8) + 0x1c) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x1c) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x20) = 0;
          }
          else {
            *(int *)(iVar7 + 0x1c) = *(int *)(iVar10 + 0xc);
            *(undefined4 *)(iVar7 + 0x20) = 0;
            *(int *)(*(int *)(iVar10 + 0xc) + 0x20) = iVar7;
            *(int *)(iVar10 + 0xc) = iVar7;
          }
        }
        else {
          iVar8 = *(int *)(iVar1 + 0x1c);
          *(int *)(iVar7 + 0x20) = iVar1;
          *(int *)(iVar1 + 0x1c) = iVar7;
          *(int *)(iVar7 + 0x1c) = iVar8;
          if (iVar8 == 0) {
            *(int *)(iVar10 + 8) = iVar7;
          }
          else {
            *(int *)(iVar8 + 0x20) = iVar7;
          }
        }
      }
      *(float *)(iVar1 + 8) = fVar15;
    }
  }
  else {
    puStack_1e0 = &DAT_003f0900;
    iStack_1dc = 0;
    puStack_1d0 = &DAT_003f0900;
    ppuStack_f0 = &puStack_170;
    pfStack_ec = &fStack_100;
    ppuStack_f4 = &puStack_1e0;
    while( true ) {
      iStack_f8 = 0;
      iStack_1bc = iStack_1cc;
      puStack_1c0 = &DAT_003f0900;
      puStack_170 = &DAT_003f0900;
      iStack_16c = iVar1;
      lVar9 = FUN_0030cf90(fVar16,fVar15,fVar18,param_1,&puStack_1c0,ppuStack_f0,pfStack_ec,
                           ppuStack_f4);
      if (lVar9 == 0) break;
      iStack_f8 = 1;
      iStack_1bc = iStack_1dc;
      puStack_1c0 = &DAT_003f0900;
      puStack_1b0 = &DAT_003f0900;
      iStack_1ac = iVar1;
      lVar9 = FUN_0030d038(fVar16,fVar15,fVar18,param_1,&puStack_1c0,&puStack_1b0,&fStack_fc,
                           &puStack_1d0);
      if (lVar9 == 0) break;
      iStack_f8 = 0;
      if (iStack_1dc == iVar1) {
        fVar16 = *(float *)(iVar1 + 8);
        if (fStack_100 != fVar16) {
          uVar12 = *(undefined4 *)(iVar1 + 0x10);
          uVar4 = *(undefined8 *)(iVar1 + 0x14);
          iVar10 = *(int *)(iVar11 + 4);
          iVar7 = *(int *)(iVar10 + 0x10);
          if (iVar7 != 0) {
            *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
            *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
            uVar2 = *(undefined4 *)(iVar7 + 4);
            *(ulong *)(iVar7 + 4) = CONCAT44(fVar16,&DAT_003f09d0);
            *(ulong *)(iVar7 + 0xc) = CONCAT44(uVar12,fStack_100);
            *(undefined8 *)(iVar7 + 0x14) = uVar4;
            *(undefined1 *)(iVar7 + 0x24) = 1;
            *(undefined4 *)(iVar7 + 4) = uVar2;
            if (iVar1 == 0) {
              if (*(int *)(iVar10 + 0xc) == 0) {
                *(int *)(iVar10 + 0xc) = iVar7;
                *(int *)(iVar10 + 8) = iVar7;
                *(undefined4 *)(iVar7 + 0x20) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 8) + 0x1c) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x1c) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x20) = 0;
              }
              else {
                *(int *)(iVar7 + 0x1c) = *(int *)(iVar10 + 0xc);
                *(undefined4 *)(iVar7 + 0x20) = 0;
                *(int *)(*(int *)(iVar10 + 0xc) + 0x20) = iVar7;
                *(int *)(iVar10 + 0xc) = iVar7;
              }
            }
            else {
              iVar8 = *(int *)(iVar1 + 0x1c);
              *(int *)(iVar7 + 0x20) = iVar1;
              *(int *)(iVar1 + 0x1c) = iVar7;
              *(int *)(iVar7 + 0x1c) = iVar8;
              if (iVar8 == 0) {
                *(int *)(iVar10 + 8) = iVar7;
              }
              else {
                *(int *)(iVar8 + 0x20) = iVar7;
              }
            }
          }
        }
        iVar10 = *(int *)(iVar11 + 4);
        iVar7 = *(int *)(iVar10 + 0x10);
        if (iVar7 != 0) {
          *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
          *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
          uVar12 = *(undefined4 *)(iVar7 + 4);
          *(ulong *)(iVar7 + 4) = CONCAT44(fStack_100,&DAT_003f09d0);
          *(ulong *)(iVar7 + 0xc) = CONCAT44(fVar18,fStack_fc);
          *(ulong *)(iVar7 + 0x14) = CONCAT44(uVar19,uVar17);
          *(undefined1 *)(iVar7 + 0x24) = 1;
          *(undefined4 *)(iVar7 + 4) = uVar12;
          if (iStack_1cc == 0) {
            if (*(int *)(iVar10 + 0xc) == 0) {
              *(int *)(iVar10 + 0xc) = iVar7;
              *(int *)(iVar10 + 8) = iVar7;
              *(undefined4 *)(iVar7 + 0x20) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 8) + 0x1c) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x1c) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x20) = 0;
            }
            else {
              *(int *)(iVar7 + 0x1c) = *(int *)(iVar10 + 0xc);
              *(undefined4 *)(iVar7 + 0x20) = 0;
              *(int *)(*(int *)(iVar10 + 0xc) + 0x20) = iVar7;
              *(int *)(iVar10 + 0xc) = iVar7;
            }
          }
          else {
            iVar8 = *(int *)(iStack_1cc + 0x1c);
            *(int *)(iVar7 + 0x20) = iStack_1cc;
            *(int *)(iStack_1cc + 0x1c) = iVar7;
            *(int *)(iVar7 + 0x1c) = iVar8;
            if (iVar8 == 0) {
              *(int *)(iVar10 + 8) = iVar7;
            }
            else {
              *(int *)(iVar8 + 0x20) = iVar7;
            }
          }
        }
        break;
      }
      if (fStack_100 < *(float *)(iStack_1dc + 0xc)) {
        *(float *)(iStack_1dc + 0xc) = fStack_100;
      }
      if (*(float *)(iStack_1cc + 8) < fStack_fc) {
        *(float *)(iStack_1cc + 8) = fStack_fc;
      }
      iVar10 = *(int *)(iStack_1dc + 0x20);
      while ((iVar7 = *(int *)(iVar10 + 0x20), iVar10 != 0 && (iVar10 != iStack_1cc))) {
        iVar8 = *(int *)(iVar11 + 4);
        *(undefined1 *)(iVar10 + 0x24) = 0;
        if (iVar10 == *(int *)(iVar8 + 8)) {
          *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar10 + 0x20);
          iVar6 = *(int *)(iVar8 + 0xc);
        }
        else {
          iVar6 = *(int *)(iVar8 + 0xc);
        }
        if (iVar10 == iVar6) {
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar10 + 0x1c);
          iVar6 = *(int *)(iVar10 + 0x1c);
        }
        else {
          iVar6 = *(int *)(iVar10 + 0x1c);
        }
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar10 + 0x20);
        }
        else {
          *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar10 + 0x20);
          iVar6 = *(int *)(iVar10 + 0x20);
        }
        if (iVar6 == 0) {
          uVar12 = *(undefined4 *)(iVar8 + 0x10);
        }
        else {
          *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar10 + 0x1c);
          uVar12 = *(undefined4 *)(iVar8 + 0x10);
        }
        *(undefined4 *)(iVar10 + 0x20) = uVar12;
        *(int *)(iVar8 + 0x10) = iVar10;
        *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + -1;
        iVar10 = iVar7;
      }
      iStack_1ac = iStack_1cc;
      iVar10 = *(int *)(iVar11 + 4);
      iStack_13c = *(int *)(iVar10 + 0x10);
      if (iStack_13c == 0) {
        iStack_13c = 0;
      }
      else {
        *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iStack_13c + 0x20);
        uStack_130 = *(undefined4 *)(iStack_13c + 4);
        *(ulong *)(iStack_13c + 4) = CONCAT44(fStack_100,&DAT_003f09d0);
        *(ulong *)(iStack_13c + 0xc) = CONCAT44(fVar18,fStack_fc);
        *(ulong *)(iStack_13c + 0x14) = CONCAT44(uVar19,uVar17);
        *(undefined1 *)(iStack_13c + 0x24) = 1;
        *(undefined4 *)(iStack_13c + 4) = uStack_130;
        if (iStack_1cc == 0) {
          if (*(int *)(iVar10 + 0xc) == 0) {
            *(int *)(iVar10 + 0xc) = iStack_13c;
            *(int *)(iVar10 + 8) = iStack_13c;
            *(undefined4 *)(iStack_13c + 0x20) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 8) + 0x1c) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x1c) = 0;
            *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x20) = 0;
          }
          else {
            *(int *)(iStack_13c + 0x1c) = *(int *)(iVar10 + 0xc);
            *(undefined4 *)(iStack_13c + 0x20) = 0;
            *(int *)(*(int *)(iVar10 + 0xc) + 0x20) = iStack_13c;
            *(int *)(iVar10 + 0xc) = iStack_13c;
          }
        }
        else {
          iVar7 = *(int *)(iStack_1cc + 0x1c);
          *(int *)(iStack_13c + 0x20) = iStack_1cc;
          *(int *)(iStack_1cc + 0x1c) = iStack_13c;
          *(int *)(iStack_13c + 0x1c) = iVar7;
          if (iVar7 == 0) {
            *(int *)(iVar10 + 8) = iStack_13c;
          }
          else {
            *(int *)(iVar7 + 0x20) = iStack_13c;
          }
        }
      }
      puStack_140 = &DAT_003e0040;
      puStack_1b0 = &DAT_003e0040;
      puStack_160 = &DAT_003e0040;
      if (iStack_1cc == iVar1) break;
      iStack_1cc = *(int *)(iStack_1cc + 0x20);
      fStack_154 = fVar18;
      uStack_150 = uVar17;
      uStack_14c = uVar19;
    }
    if (iStack_f8 != 0) {
      if (iStack_1dc == iVar1) {
        fVar16 = *(float *)(iVar1 + 8);
        if (fVar16 < fStack_100) {
          uVar12 = *(undefined4 *)(iVar1 + 0x10);
          uVar4 = *(undefined8 *)(iVar1 + 0x14);
          iVar10 = *(int *)(iVar11 + 4);
          iVar7 = *(int *)(iVar10 + 0x10);
          if (iVar7 != 0) {
            *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
            *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
            uVar2 = *(undefined4 *)(iVar7 + 4);
            *(ulong *)(iVar7 + 4) = CONCAT44(fVar16,&DAT_003f09d0);
            *(ulong *)(iVar7 + 0xc) = CONCAT44(uVar12,fStack_100);
            *(undefined8 *)(iVar7 + 0x14) = uVar4;
            *(undefined1 *)(iVar7 + 0x24) = 1;
            *(undefined4 *)(iVar7 + 4) = uVar2;
            if (iVar1 == 0) {
              if (*(int *)(iVar10 + 0xc) == 0) {
                *(int *)(iVar10 + 0xc) = iVar7;
                *(int *)(iVar10 + 8) = iVar7;
                *(undefined4 *)(iVar7 + 0x20) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 8) + 0x1c) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x1c) = 0;
                *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x20) = 0;
              }
              else {
                *(int *)(iVar7 + 0x1c) = *(int *)(iVar10 + 0xc);
                *(undefined4 *)(iVar7 + 0x20) = 0;
                *(int *)(*(int *)(iVar10 + 0xc) + 0x20) = iVar7;
                *(int *)(iVar10 + 0xc) = iVar7;
              }
            }
            else {
              iVar8 = *(int *)(iVar1 + 0x1c);
              *(int *)(iVar7 + 0x20) = iVar1;
              *(int *)(iVar1 + 0x1c) = iVar7;
              *(int *)(iVar7 + 0x1c) = iVar8;
              if (iVar8 == 0) {
                *(int *)(iVar10 + 8) = iVar7;
              }
              else {
                *(int *)(iVar8 + 0x20) = iVar7;
              }
            }
          }
        }
        if (*(float *)(iVar1 + 0xc) <= fVar15) goto LAB_0030ce40;
        *(float *)(iVar1 + 8) = fVar15;
        iVar10 = *(int *)(iVar11 + 4);
        iVar7 = *(int *)(iVar10 + 0x10);
        if (iVar7 != 0) {
          *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
          *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
          uVar12 = *(undefined4 *)(iVar7 + 4);
          *(ulong *)(iVar7 + 4) = CONCAT44(fStack_100,&DAT_003f09d0);
          *(ulong *)(iVar7 + 0xc) = CONCAT44(fVar18,fVar15);
          *(ulong *)(iVar7 + 0x14) = CONCAT44(uVar19,uVar17);
          *(undefined1 *)(iVar7 + 0x24) = 1;
          *(undefined4 *)(iVar7 + 4) = uVar12;
          if (iVar1 == 0) {
            if (*(int *)(iVar10 + 0xc) == 0) {
              *(int *)(iVar10 + 0xc) = iVar7;
              goto LAB_0030cda4;
            }
            *(int *)(iVar7 + 0x1c) = *(int *)(iVar10 + 0xc);
LAB_0030cdc8:
            *(undefined4 *)(iVar7 + 0x20) = 0;
            *(int *)(*(int *)(iVar10 + 0xc) + 0x20) = iVar7;
            *(int *)(iVar10 + 0xc) = iVar7;
          }
          else {
            iVar8 = *(int *)(iVar1 + 0x1c);
            *(int *)(iVar7 + 0x20) = iVar1;
            *(int *)(iVar1 + 0x1c) = iVar7;
            *(int *)(iVar7 + 0x1c) = iVar8;
            if (iVar8 != 0) goto LAB_0030cdf0;
            *(int *)(iVar10 + 8) = iVar7;
          }
        }
      }
      else {
        iVar7 = *(int *)(*(int *)(iStack_1dc + 0x20) + 0x20);
        iVar10 = *(int *)(iStack_1dc + 0x20);
        while ((iVar8 = iVar7, iVar10 != 0 && (iVar10 != iVar1))) {
          iVar7 = *(int *)(iVar11 + 4);
          *(undefined1 *)(iVar10 + 0x24) = 0;
          if (iVar10 == *(int *)(iVar7 + 8)) {
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar10 + 0x20);
            iVar6 = *(int *)(iVar7 + 0xc);
          }
          else {
            iVar6 = *(int *)(iVar7 + 0xc);
          }
          if (iVar10 == iVar6) {
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar10 + 0x1c);
            iVar6 = *(int *)(iVar10 + 0x1c);
          }
          else {
            iVar6 = *(int *)(iVar10 + 0x1c);
          }
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar10 + 0x20);
          }
          else {
            *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar10 + 0x20);
            iVar6 = *(int *)(iVar10 + 0x20);
          }
          if (iVar6 == 0) {
            uVar12 = *(undefined4 *)(iVar7 + 0x10);
          }
          else {
            *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar10 + 0x1c);
            uVar12 = *(undefined4 *)(iVar7 + 0x10);
          }
          *(undefined4 *)(iVar10 + 0x20) = uVar12;
          *(int *)(iVar7 + 0x10) = iVar10;
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + -1;
          iVar7 = *(int *)(iVar8 + 0x20);
          iVar10 = iVar8;
        }
        if (*(float *)(iStack_1dc + 8) < fStack_100) {
          *(float *)(iStack_1dc + 0xc) = fStack_100;
        }
        else {
          iVar10 = *(int *)(iVar11 + 4);
          *(undefined1 *)(iStack_1dc + 0x24) = 0;
          if (iStack_1dc == *(int *)(iVar10 + 8)) {
            *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iStack_1dc + 0x20);
            iVar7 = *(int *)(iVar10 + 0xc);
          }
          else {
            iVar7 = *(int *)(iVar10 + 0xc);
          }
          if (iStack_1dc == iVar7) {
            *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iStack_1dc + 0x1c);
            iVar7 = *(int *)(iStack_1dc + 0x1c);
          }
          else {
            iVar7 = *(int *)(iStack_1dc + 0x1c);
          }
          if (iVar7 == 0) {
            iVar7 = *(int *)(iStack_1dc + 0x20);
          }
          else {
            *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iStack_1dc + 0x20);
            iVar7 = *(int *)(iStack_1dc + 0x20);
          }
          if (iVar7 == 0) {
            uVar12 = *(undefined4 *)(iVar10 + 0x10);
          }
          else {
            *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iStack_1dc + 0x1c);
            uVar12 = *(undefined4 *)(iVar10 + 0x10);
          }
          *(undefined4 *)(iStack_1dc + 0x20) = uVar12;
          *(int *)(iVar10 + 0x10) = iStack_1dc;
          *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + -1;
        }
        if (*(float *)(iVar1 + 0xc) <= fVar15) {
LAB_0030ce40:
          *(float *)(iVar1 + 8) = fStack_100;
          *(float *)(iVar1 + 0x10) = fVar18;
          *(undefined4 *)(iVar1 + 0x14) = uVar17;
          *(undefined4 *)(iVar1 + 0x18) = uVar19;
        }
        else {
          *(float *)(iVar1 + 8) = fVar15;
          iVar10 = *(int *)(iVar11 + 4);
          iVar7 = *(int *)(iVar10 + 0x10);
          if (iVar7 != 0) {
            *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
            *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar7 + 0x20);
            uVar12 = *(undefined4 *)(iVar7 + 4);
            *(ulong *)(iVar7 + 4) = CONCAT44(fStack_100,&DAT_003f09d0);
            *(ulong *)(iVar7 + 0xc) = CONCAT44(fVar18,fVar15);
            *(ulong *)(iVar7 + 0x14) = CONCAT44(uVar19,uVar17);
            *(undefined1 *)(iVar7 + 0x24) = 1;
            *(undefined4 *)(iVar7 + 4) = uVar12;
            if (iVar1 == 0) {
              if (*(int *)(iVar10 + 0xc) != 0) {
                *(int *)(iVar7 + 0x1c) = *(int *)(iVar10 + 0xc);
                goto LAB_0030cdc8;
              }
              *(int *)(iVar10 + 0xc) = iVar7;
LAB_0030cda4:
              *(int *)(iVar10 + 8) = iVar7;
              *(undefined4 *)(iVar7 + 0x20) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 8) + 0x1c) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x1c) = 0;
              *(undefined4 *)(*(int *)(iVar10 + 0xc) + 0x20) = 0;
            }
            else {
              iVar8 = *(int *)(iVar1 + 0x1c);
              *(int *)(iVar7 + 0x20) = iVar1;
              *(int *)(iVar1 + 0x1c) = iVar7;
              *(int *)(iVar7 + 0x1c) = iVar8;
              if (iVar8 == 0) {
                *(int *)(iVar10 + 8) = iVar7;
              }
              else {
LAB_0030cdf0:
                *(int *)(iVar8 + 0x20) = iVar7;
              }
            }
          }
        }
      }
    }
  }
  fVar15 = *(float *)(iVar11 + 0x10);
LAB_0030ceb0:
  if (fVar18 < fVar15) {
    *(float *)(iVar11 + 0x10) = fVar18;
  }
  return 1;
}


// ==== FUN_0030cf90 @ 0030cf90 ====
// GLOBAL DAT_003e0040 undefined

undefined4
FUN_0030cf90(float param_1,undefined4 param_2,float param_3,undefined8 param_4,undefined4 *param_5,
            undefined4 *param_6,float *param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  for (iVar1 = param_5[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (param_3 < *(float *)(iVar1 + 0x10)) {
      fVar3 = *(float *)(iVar1 + 8);
      if (fVar3 <= param_1) {
        fVar3 = param_1;
      }
      *param_7 = fVar3;
      *(int *)(param_8 + 4) = iVar1;
      uVar2 = 1;
      goto LAB_0030d020;
    }
    if (iVar1 == param_6[1]) break;
  }
  uVar2 = 0;
LAB_0030d020:
  *param_5 = &DAT_003e0040;
  *param_6 = &DAT_003e0040;
  return uVar2;
}


// ==== FUN_0030d038 @ 0030d038 ====
// GLOBAL DAT_003e0040 undefined

undefined4
FUN_0030d038(undefined4 param_1,float param_2,float param_3,undefined8 param_4,undefined4 *param_5,
            undefined4 *param_6,float *param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  for (iVar1 = param_5[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (*(float *)(iVar1 + 0x10) < param_3) {
      fVar3 = *(float *)(iVar1 + 8);
      if (param_2 <= fVar3) {
        fVar3 = param_2;
      }
      *param_7 = fVar3;
      *(int *)(param_8 + 4) = iVar1;
      uVar2 = 1;
      goto LAB_0030d0c8;
    }
    if (iVar1 == param_6[1]) break;
  }
  uVar2 = 0;
LAB_0030d0c8:
  *param_5 = &DAT_003e0040;
  *param_6 = &DAT_003e0040;
  return uVar2;
}


// ==== FUN_0030d0e0 @ 0030d0e0 ====
// GLOBAL DAT_003f1118 undefined

undefined8 FUN_0030d0e0(undefined8 param_1)

{
  FUN_003949a0();
  *(undefined **)((int)param_1 + 0x110) = &DAT_003f1118;
  return param_1;
}


// ==== FUN_0030d130 @ 0030d130 ====
// GLOBAL DAT_00455e18 int
// GLOBAL DAT_00455d00 int

undefined4 FUN_0030d130(void)

{
  if ((DAT_00455e18 != -1) && (DAT_00455d00 != -1)) {
    return 1;
  }
  return 0;
}


// ==== FUN_0030d160 @ 0030d160 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_0030d160(void)

{
  undefined8 uVar1;
  undefined4 auStack_30 [4];
  
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x50,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x50,uVar1);
  }
  FUN_0030d1f8(auStack_30[0]);
  return;
}


// ==== FUN_0030d1f8 @ 0030d1f8 ====
// GLOBAL DAT_003f1220 undefined

undefined8 FUN_0030d1f8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[0x12] = 0xffffffff;
  *puVar1 = &DAT_003f1220;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[0x11] = 0xffffffff;
  puVar1[0x13] = 0;
  return param_1;
}


// ==== FUN_0030d228 @ 0030d228 ====
// GLOBAL DAT_003c958c int
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003cdfbc int_*
// GLOBAL DAT_003f1268 undefined

undefined4 FUN_0030d228(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *apiStack_50 [4];
  
  iVar1 = DAT_003c958c;
  piVar5 = (int *)param_1;
  piVar5[2] = 0x40;
  piVar5[9] = 1;
  piVar5[0x13] = iVar1;
  piVar5[3] = 1;
  piVar5[4] = 1;
  piVar5[5] = 1;
  piVar5[6] = 1;
  piVar5[7] = 1;
  piVar5[8] = 1;
  if (param_2 != 0) {
    lVar2 = FUN_002e74e0(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = (**(code **)(*piVar5 + 0x3c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x38));
    if (lVar2 != 0) {
      iVar1 = piVar5[2];
      apiStack_50[0] = (int *)0x0;
      iVar6 = iVar1 * 0x24 + 0x10;
      uVar3 = (**(code **)(*DAT_003c87e8 + 0x34))
                        ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,apiStack_50
                        );
      if (DAT_003c87ec != (code *)0x0) {
        (*DAT_003c87ec)(apiStack_50[0],iVar6,uVar3);
      }
      iVar6 = iVar1 + -1;
      *apiStack_50[0] = iVar1;
      piVar4 = apiStack_50[0] + 4;
      if (iVar1 != 0) {
        do {
          *piVar4 = (int)&DAT_003f1268;
          iVar6 = iVar6 + -1;
          piVar4[4] = 0;
          piVar4 = piVar4 + 9;
        } while (iVar6 != -1);
      }
      piVar5[1] = (int)(apiStack_50[0] + 4);
      lVar2 = FUN_0030e400(param_1);
      if (lVar2 != 0) {
        DAT_003cdfbc = piVar5;
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_0030d370 @ 0030d370 ====

/* Strings referenciadas:
     "MaxWorldSounds"
     "NbReservedSoundsCombat"
     "NbReservedSoundsWorld"
     "NbReservedSoundsPlayer"
     "NbReservedSoundsDanger"
     "NbReservedSoundsCarcass"
     "NbReservedSoundsMeat"
     "NbReservedSoundsGarbage" */

undefined4 FUN_0030d370(int param_1,long param_2)

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
    lVar4 = stricmp(uVar3,0x408c80);
    if (lVar4 == 0) {
      lVar4 = FUN_002e3918(param_2);
      if (lVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = atoi(lVar4);
        *(undefined4 *)(param_1 + 8) = uVar1;
        uVar1 = 1;
      }
    }
    else {
      uVar3 = FUN_002e3920(param_2);
      lVar4 = stricmp(uVar3,0x408c90);
      if (lVar4 == 0) {
        lVar4 = FUN_002e3918(param_2);
        if (lVar4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = atoi(lVar4);
          *(undefined4 *)(param_1 + 0xc) = uVar1;
          uVar1 = 1;
        }
      }
      else {
        uVar3 = FUN_002e3920(param_2);
        lVar4 = stricmp(uVar3,0x408ca8);
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
          uVar3 = FUN_002e3920(param_2);
          lVar4 = stricmp(uVar3,0x408cc0);
          if (lVar4 == 0) {
            lVar4 = FUN_002e3918(param_2);
            if (lVar4 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = atoi(lVar4);
              *(undefined4 *)(param_1 + 0x14) = uVar1;
              uVar1 = 1;
            }
          }
          else {
            uVar3 = FUN_002e3920(param_2);
            lVar4 = stricmp(uVar3,0x408cd8);
            if (lVar4 == 0) {
              lVar4 = FUN_002e3918(param_2);
              if (lVar4 == 0) {
                uVar1 = 0;
              }
              else {
                uVar1 = atoi(lVar4);
                *(undefined4 *)(param_1 + 0x18) = uVar1;
                uVar1 = 1;
              }
            }
            else {
              uVar3 = FUN_002e3920(param_2);
              lVar4 = stricmp(uVar3,0x408cf0);
              if (lVar4 == 0) {
                lVar4 = FUN_002e3918(param_2);
                if (lVar4 == 0) {
                  uVar1 = 0;
                }
                else {
                  uVar1 = atoi(lVar4);
                  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                  uVar1 = 1;
                }
              }
              else {
                uVar3 = FUN_002e3920(param_2);
                lVar4 = stricmp(uVar3,0x408d08);
                if (lVar4 == 0) {
                  lVar4 = FUN_002e3918(param_2);
                  if (lVar4 == 0) {
                    uVar1 = 0;
                  }
                  else {
                    uVar1 = atoi(lVar4);
                    *(undefined4 *)(param_1 + 0x20) = uVar1;
                    uVar1 = 1;
                  }
                }
                else {
                  uVar3 = FUN_002e3920(param_2);
                  lVar4 = stricmp(uVar3,0x408d20);
                  if (lVar4 == 0) {
                    lVar4 = FUN_002e3918(param_2);
                    if (lVar4 == 0) {
                      uVar1 = 0;
                    }
                    else {
                      uVar1 = atoi(lVar4);
                      *(undefined4 *)(param_1 + 0x24) = uVar1;
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
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}


// ==== FUN_0030d5f8 @ 0030d5f8 ====

int FUN_0030d5f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  piVar11 = (int *)param_1;
  (**(code **)(*piVar11 + 0x2c))((int)piVar11 + (int)*(short *)(*piVar11 + 0x28));
  iVar1 = -1;
  if (piVar11[0x11] != -1) {
    lVar2 = FUN_0030e728(param_1,param_2);
    lVar3 = FUN_0030e6b8(param_1,param_2);
    if (lVar2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = -1;
      if (lVar3 != 0) {
        piVar10 = (int *)lVar3;
        if (*(int *)lVar2 <= *piVar10) {
          iVar1 = piVar11[10];
          if (piVar11[10] < piVar11[3]) {
            iVar1 = piVar11[3];
          }
          iVar4 = piVar11[0xb];
          if (piVar11[0xb] < piVar11[4]) {
            iVar4 = piVar11[4];
          }
          iVar8 = piVar11[0xc];
          if (piVar11[0xc] < piVar11[5]) {
            iVar8 = piVar11[5];
          }
          iVar9 = piVar11[0xd];
          if (piVar11[0xd] < piVar11[6]) {
            iVar9 = piVar11[6];
          }
          iVar6 = piVar11[0xe];
          if (piVar11[0xe] < piVar11[7]) {
            iVar6 = piVar11[7];
          }
          iVar7 = piVar11[0xf];
          if (piVar11[0xf] < piVar11[8]) {
            iVar7 = piVar11[8];
          }
          iVar5 = piVar11[0x10];
          if (piVar11[0x10] < piVar11[9]) {
            iVar5 = piVar11[9];
          }
          if (piVar11[2] <= iVar1 + iVar4 + iVar8 + iVar9 + iVar6 + iVar7 + iVar5) {
            return -1;
          }
        }
        iVar1 = piVar11[0x11];
        iVar4 = iVar1 * 0x24 + piVar11[1];
        piVar11[0x11] = *(int *)(iVar4 + 0x20);
        *(int *)(iVar4 + 0x20) = piVar11[0x12];
        piVar11[0x12] = iVar1;
        *piVar10 = *piVar10 + 1;
      }
    }
  }
  return iVar1;
}


// ==== FUN_0030d770 @ 0030d770 ====

int FUN_0030d770(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = 0;
  fVar10 = 0.0;
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  iVar4 = param_1[0x12];
  if (iVar4 != -1) {
    do {
      iVar3 = iVar4 * 0x24 + param_1[1];
      iVar1 = *(int *)(iVar3 + 0x10);
      if ((iVar1 != 0) &&
         ((fVar7 = fVar10, iVar5 = iVar6, iVar1 == param_2 ||
          (fVar7 = *(float *)(iVar3 + 0xc) - *(float *)(param_2 + 0x38),
          fVar8 = *(float *)(iVar3 + 4) - *(float *)(param_2 + 0x30),
          fVar9 = *(float *)(iVar3 + 8) - *(float *)(param_2 + 0x34),
          fVar7 = (float)(*(int *)(iVar3 + 0x18) * *(int *)(iVar3 + 0x18)) /
                  (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9), iVar5 = iVar1, fVar10 < fVar7))))
      {
        fVar10 = fVar7;
        iVar6 = iVar5;
      }
      iVar4 = *(int *)(iVar4 * 0x24 + param_1[1] + 0x20);
    } while (iVar4 != -1);
  }
  lVar2 = FUN_002e4ce0(param_2,0x450080);
  if ((lVar2 != 0) && (fVar7 = *(float *)((int)lVar2 + 4), fVar7 * fVar7 <= 1.0 / fVar10)) {
    iVar6 = 0;
  }
  return iVar6;
}


// ==== FUN_0030d8d0 @ 0030d8d0 ====

undefined4 FUN_0030d8d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = 0;
  fVar11 = 0.0;
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  lVar2 = FUN_002e4ce0(param_2,0x4505f8);
  if (lVar2 != 0) {
    if (*(int *)((int)lVar2 + 4) == -1) {
      return 0;
    }
    iVar5 = param_1[0x12];
    if (iVar5 != -1) {
      iVar6 = (int)param_2;
      do {
        iVar4 = param_1[1] + iVar5 * 0x24;
        if ((((*(int *)(iVar4 + 0x10) != 0) &&
             (lVar3 = FUN_002e4ce0(*(int *)(iVar4 + 0x10),0x4505f8), lVar3 != 0)) &&
            (iVar1 = *(int *)((int)lVar3 + 4), iVar1 != *(int *)((int)lVar2 + 4))) &&
           ((iVar1 != -1 &&
            (fVar8 = *(float *)(iVar4 + 0xc) - *(float *)(iVar6 + 0x38),
            fVar9 = *(float *)(iVar4 + 4) - *(float *)(iVar6 + 0x30),
            fVar10 = *(float *)(iVar4 + 8) - *(float *)(iVar6 + 0x34),
            fVar8 = (float)(*(int *)(iVar4 + 0x18) * *(int *)(iVar4 + 0x18)) /
                    (fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10), fVar11 < fVar8)))) {
          uVar7 = *(undefined4 *)(iVar4 + 0x10);
          fVar11 = fVar8;
        }
        iVar5 = *(int *)(iVar5 * 0x24 + param_1[1] + 0x20);
      } while (iVar5 != -1);
    }
    lVar2 = FUN_002e4ce0(param_2,0x450080);
    if (lVar2 == 0) {
      return uVar7;
    }
    fVar8 = *(float *)((int)lVar2 + 4);
    if (1.0 / fVar11 < fVar8 * fVar8) {
      return uVar7;
    }
  }
  return 0;
}


// ==== FUN_0030daa8 @ 0030daa8 ====

int FUN_0030daa8(int *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  iVar4 = param_1[0x12];
  iVar6 = 0;
  bVar1 = false;
  if (iVar4 != -1) {
    fVar10 = 0.0;
    iVar5 = iVar6;
    do {
      iVar3 = iVar4 * 0x24 + param_1[1];
      if (bVar1) {
        bVar2 = false;
        if (((*(float *)(iVar3 + 4) == *param_2) && (*(float *)(iVar3 + 8) == param_2[1])) &&
           (*(float *)(iVar3 + 0xc) == param_2[2])) {
          bVar2 = true;
        }
        fVar7 = fVar10;
        iVar6 = iVar5;
        if (bVar2) {
          fVar7 = (float)*(int *)(iVar3 + 0x18);
LAB_0030dbe0:
          iVar6 = iVar3;
          if (fVar7 <= fVar10) {
            fVar7 = fVar10;
            iVar6 = iVar5;
          }
        }
      }
      else {
        fVar8 = *(float *)(iVar3 + 0xc) - param_2[2];
        fVar9 = *(float *)(iVar3 + 4) - *param_2;
        fVar7 = *(float *)(iVar3 + 8) - param_2[1];
        fVar7 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
        if (fVar7 != 0.0) {
          fVar7 = (float)(*(int *)(iVar3 + 0x18) * *(int *)(iVar3 + 0x18)) / fVar7;
          goto LAB_0030dbe0;
        }
        bVar1 = true;
        fVar7 = (float)*(int *)(iVar3 + 0x18);
        iVar6 = iVar3;
      }
      iVar4 = *(int *)(iVar4 * 0x24 + param_1[1] + 0x20);
      fVar10 = fVar7;
      iVar5 = iVar6;
    } while (iVar4 != -1);
  }
  return iVar6;
}


// ==== FUN_0030dc28 @ 0030dc28 ====
// GLOBAL DAT_003c958c float

undefined4 FUN_0030dc28(int *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  iVar5 = param_1[0x12];
  if (iVar5 != -1) {
    iVar6 = (int)param_2;
    do {
      iVar4 = param_1[1] + iVar5 * 0x24;
      if (*(int *)(iVar4 + 0x10) == param_3) {
        if (DAT_003c958c < *(float *)(iVar4 + 0x1c)) {
          fVar8 = *(float *)(iVar4 + 0xc) - *(float *)(iVar6 + 0x38);
          fVar9 = *(float *)(iVar4 + 4) - *(float *)(iVar6 + 0x30);
          fVar7 = *(float *)(iVar4 + 8) - *(float *)(iVar6 + 0x34);
          fVar10 = 0.0;
          fVar7 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
          iVar4 = *(int *)(iVar4 + 0x18);
          if (fVar7 == 0.0) {
            if (iVar4 < 1) goto LAB_0030dd88;
            bVar2 = true;
          }
          else {
            fVar7 = (float)(iVar4 * iVar4) / fVar7;
            lVar3 = FUN_002e4ce0(param_2,0x450080);
            if (lVar3 == 0) {
              bVar1 = fVar10 < fVar7;
            }
            else {
              fVar8 = *(float *)((int)lVar3 + 4);
              if (fVar7 <= fVar10) goto LAB_0030dd88;
              bVar1 = 1.0 / fVar7 < fVar8 * fVar8;
            }
            bVar2 = true;
            if (!bVar1) goto LAB_0030dd88;
          }
        }
        else {
LAB_0030dd88:
          bVar2 = false;
        }
        if (bVar2) {
          return 1;
        }
      }
      iVar5 = *(int *)(iVar5 * 0x24 + param_1[1] + 0x20);
    } while (iVar5 != -1);
  }
  return 0;
}


// ==== FUN_0030dde8 @ 0030dde8 ====

int FUN_0030dde8(int *param_1,undefined8 param_2,int *param_3,int param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  iVar6 = 0;
  if ((0 < param_4) && (param_3 != (int *)0x0)) {
    lVar3 = FUN_002e4ce0(param_2,0x450080);
    iVar5 = param_1[0x12];
    iVar6 = 0;
    if (iVar5 != -1) {
      iVar7 = (int)param_2;
      iVar4 = param_1[1];
      iVar6 = 0;
      do {
        iVar4 = iVar4 + iVar5 * 0x24;
        if ((*(uint *)(iVar4 + 0x14) & param_5) != 0) {
          fVar9 = *(float *)(iVar4 + 0xc) - *(float *)(iVar7 + 0x38);
          fVar10 = *(float *)(iVar4 + 4) - *(float *)(iVar7 + 0x30);
          fVar8 = *(float *)(iVar4 + 8) - *(float *)(iVar7 + 0x34);
          fVar8 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
          bVar1 = false;
          if (fVar8 == 0.0) {
            bVar1 = 0 < *(int *)(iVar4 + 0x18);
          }
          else {
            if (lVar3 == 0) {
              bVar2 = 0.0 < (float)*(int *)(iVar4 + 0x18);
            }
            else {
              fVar8 = (float)(*(int *)(iVar4 + 0x18) * *(int *)(iVar4 + 0x18)) / fVar8;
              fVar9 = *(float *)((int)lVar3 + 4);
              if (fVar8 <= 0.0) goto LAB_0030df68;
              bVar2 = 1.0 / fVar8 < fVar9 * fVar9;
            }
            if (bVar2) {
              bVar1 = true;
            }
          }
LAB_0030df68:
          if (bVar1) {
            *param_3 = iVar4;
            iVar6 = iVar6 + 1;
            param_3 = param_3 + 1;
            if (iVar6 == param_4) {
              return iVar6;
            }
          }
        }
        iVar4 = param_1[1];
        iVar5 = *(int *)(iVar5 * 0x24 + iVar4 + 0x20);
      } while (iVar5 != -1);
    }
  }
  return iVar6;
}


// ==== CSoundManager_0030dfc0 @ 0030dfc0 ====
// GLOBAL DAT_00455e10 undefined_*
// GLOBAL DAT_003e5e40 undefined

/* Strings referenciadas:
     "CSoundManager" */

void CSoundManager_0030dfc0(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00455e10 = &DAT_003e5e40;
    }
    else {
      FUN_002e7610(0x455d00,0x408d38,0x30d160,0,1,0);
    }
  }
  return;
}


// ==== FUN_0030e020 @ 0030e020 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003cdfbc undefined4
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003f1220 undefined

void FUN_0030e020(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003f1220;
  piVar1 = (int *)puVar4[1];
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + piVar1[-4] * 9;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[1];
    }
    else {
      do {
        piVar3 = piVar3 + -9;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[1] != piVar3);
      iVar2 = puVar4[1];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  puVar4[1] = 0;
  DAT_003cdfbc = 0;
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_0030e100 @ 0030e100 ====
// GLOBAL DAT_003c958c undefined4

void FUN_0030e100(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = DAT_003c958c;
  FUN_0030e400();
  return;
}


// ==== FUN_0030e180 @ 0030e180 ====
// GLOBAL DAT_003c958c float

void FUN_0030e180(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = (int)param_1;
  if (*(float *)(iVar4 + 0x4c) != DAT_003c958c) {
    iVar3 = *(int *)(iVar4 + 0x48);
    iVar2 = -1;
    while (iVar1 = iVar3, iVar1 != -1) {
      iVar3 = iVar1 * 0x24 + *(int *)(iVar4 + 4);
      fVar5 = *(float *)(iVar3 + 0x1c);
      if ((DAT_003c958c < fVar5) || (fVar5 == -1.0)) {
        iVar3 = *(int *)(iVar1 * 0x24 + *(int *)(iVar4 + 4) + 0x20);
        iVar2 = iVar1;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x20);
        FUN_0030e278(param_1,iVar1,iVar2);
      }
    }
    *(float *)(iVar4 + 0x4c) = DAT_003c958c;
  }
  return;
}


// ==== FUN_0030e278 @ 0030e278 ====

void FUN_0030e278(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (param_3 == -1) {
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_2 * 0x24 + *(int *)(iVar2 + 4) + 0x20);
  }
  else {
    *(undefined4 *)((int)param_3 * 0x24 + *(int *)(iVar2 + 4) + 0x20) =
         *(undefined4 *)(param_2 * 0x24 + *(int *)(iVar2 + 4) + 0x20);
  }
  *(undefined4 *)(param_2 * 0x24 + *(int *)(iVar2 + 4) + 0x20) = *(undefined4 *)(iVar2 + 0x44);
  *(int *)(iVar2 + 0x44) = param_2;
  lVar1 = FUN_0030e6b8(param_1,*(undefined4 *)(param_2 * 0x24 + *(int *)(iVar2 + 4) + 0x14));
  if (lVar1 != 0) {
    *(int *)lVar1 = *(int *)lVar1 + -1;
  }
  return;
}


// ==== FUN_0030e320 @ 0030e320 ====
// GLOBAL DAT_003c958c float

bool FUN_0030e320(float param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_0030d5f8();
  if (lVar2 != -1) {
    iVar1 = (int)lVar2 * 0x24;
    iVar3 = iVar1 + *(int *)(param_2 + 4);
    param_1 = DAT_003c958c + param_1;
    *(undefined4 *)(iVar3 + 4) = *param_4;
    *(undefined4 *)(iVar3 + 8) = param_4[1];
    *(undefined4 *)(iVar3 + 0xc) = param_4[2];
    *(undefined4 *)(iVar1 + *(int *)(param_2 + 4) + 0x10) = param_6;
    *(undefined4 *)(iVar1 + *(int *)(param_2 + 4) + 0x14) = param_3;
    *(undefined4 *)(iVar1 + *(int *)(param_2 + 4) + 0x18) = param_5;
    *(float *)(iVar1 + *(int *)(param_2 + 4) + 0x1c) = param_1;
  }
  return lVar2 != -1;
}


// ==== FUN_0030e400 @ 0030e400 ====

undefined4 FUN_0030e400(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar2 = 0;
    do {
      FUN_0030e9c8(*(int *)(param_1 + 4) + iVar2);
      iVar1 = iVar1 + 1;
      *(int *)(iVar2 + *(int *)(param_1 + 4) + 0x20) = iVar1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(iVar1 * 0x24 + *(int *)(param_1 + 4) + -4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}


// ==== FUN_0030e4b8 @ 0030e4b8 ====

int FUN_0030e4b8(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  iVar2 = param_1[10] + param_1[0xb] + param_1[0xc] + param_1[0xd] + param_1[0xe] + param_1[0xf] +
          param_1[0x10];
  if (param_2 == 1) {
    iVar1 = param_1[2] - iVar2;
  }
  else {
    iVar1 = 0;
    if (param_2 == 2) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// ==== FUN_0030e5a0 @ 0030e5a0 ====
// GLOBAL DAT_003c958c float

undefined4 FUN_0030e5a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_003c958c < *(float *)(param_3 + 0x1c)) {
    iVar2 = (int)param_2;
    fVar4 = *(float *)(param_3 + 0xc) - *(float *)(iVar2 + 0x38);
    fVar5 = *(float *)(param_3 + 4) - *(float *)(iVar2 + 0x30);
    fVar3 = *(float *)(param_3 + 8) - *(float *)(iVar2 + 0x34);
    fVar6 = 0.0;
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
    iVar2 = *(int *)(param_3 + 0x18);
    if (fVar3 == 0.0) {
      if (0 < iVar2) {
        return 1;
      }
    }
    else {
      fVar3 = (float)(iVar2 * iVar2) / fVar3;
      lVar1 = FUN_002e4ce0(param_2,0x450080);
      if (lVar1 == 0) {
        if (fVar6 < fVar3) {
          return 1;
        }
      }
      else {
        fVar4 = *(float *)((int)lVar1 + 4);
        if ((fVar6 < fVar3) && (1.0 / fVar3 < fVar4 * fVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


// ==== FUN_0030e6b8 @ 0030e6b8 ====

int FUN_0030e6b8(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    return param_1 + 0x28;
  case 2:
    return param_1 + 0x2c;
  default:
    return 0;
  case 4:
    return param_1 + 0x30;
  case 8:
    return param_1 + 0x38;
  case 0x10:
    return param_1 + 0x3c;
  case 0x20:
    return param_1 + 0x34;
  case 0x40:
    return param_1 + 0x40;
  }
}


// ==== FUN_0030e728 @ 0030e728 ====

int FUN_0030e728(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    return param_1 + 0xc;
  case 2:
    return param_1 + 0x10;
  default:
    return 0;
  case 4:
    return param_1 + 0x14;
  case 8:
    return param_1 + 0x1c;
  case 0x10:
    return param_1 + 0x20;
  case 0x20:
    return param_1 + 0x18;
  case 0x40:
    return param_1 + 0x24;
  }
}


// ==== FUN_0030e798 @ 0030e798 ====
// GLOBAL DAT_003cdfbc int
// GLOBAL DAT_003c9ed4 undefined4
// GLOBAL DAT_003c958c float

bool FUN_0030e798(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined8 param_5,undefined4 param_6,long param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  
  if (DAT_003cdfbc == 0) {
    bVar3 = false;
  }
  else {
    uVar4 = 0;
    if (param_7 != 0) {
      uVar4 = FUN_002eb398(DAT_003c9ed4);
    }
    iVar2 = DAT_003cdfbc;
    lVar5 = FUN_0030d5f8(DAT_003cdfbc,param_5);
    bVar3 = lVar5 != -1;
    if (bVar3) {
      iVar1 = (int)lVar5 * 0x24;
      iVar6 = iVar1 + *(int *)(iVar2 + 4);
      param_4 = DAT_003c958c + param_4;
      *(undefined4 *)(iVar6 + 4) = param_1;
      *(undefined4 *)(iVar6 + 8) = param_2;
      *(undefined4 *)(iVar6 + 0xc) = param_3;
      *(undefined4 *)(iVar1 + *(int *)(iVar2 + 4) + 0x10) = uVar4;
      *(int *)(iVar1 + *(int *)(iVar2 + 4) + 0x14) = (int)param_5;
      *(undefined4 *)(iVar1 + *(int *)(iVar2 + 4) + 0x18) = param_6;
      *(float *)(iVar1 + *(int *)(iVar2 + 4) + 0x1c) = param_4;
    }
  }
  return bVar3;
}


// ==== FUN_0030e8d8 @ 0030e8d8 ====
// GLOBAL DAT_00451278 undefined_*

void FUN_0030e8d8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x2c))((int)param_1 + (int)*(short *)(*param_1 + 0x28));
  for (iVar1 = param_1[0x12]; iVar1 != -1; iVar1 = *(int *)(iVar1 * 0x24 + iVar2 + 0x20)) {
    iVar2 = param_1[1];
    if (DAT_00451278 != (code *)0x0) {
      (*DAT_00451278)(iVar1 * 0x24 + iVar2 + 4,0xff,0xff,0);
      iVar2 = param_1[1];
    }
  }
  return;
}


// ==== FUN_0030e988 @ 0030e988 ====

void FUN_0030e988(void)

{
  CSoundManager_0030dfc0(1,0xffff);
  return;
}


// ==== FUN_0030e9a8 @ 0030e9a8 ====

void FUN_0030e9a8(void)

{
  CSoundManager_0030dfc0(0,0xffff);
  return;
}


// ==== FUN_0030e9c8 @ 0030e9c8 ====

void FUN_0030e9c8(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// ==== FUN_0030ea38 @ 0030ea38 ====
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*

void FUN_0030ea38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x54,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x54,uVar1);
  }
  FUN_0030fdf8(auStack_40[0],param_1);
  return;
}


// ==== FUN_0030eae0 @ 0030eae0 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003ce5ac int
// GLOBAL DAT_003ce59c int
// GLOBAL DAT_003ce5a4 int
// GLOBAL DAT_003ce5a8 int
// GLOBAL DAT_003ce5a0 int
// GLOBAL DAT_003c9ed4 undefined4
// GLOBAL DAT_003e0040 undefined
// GLOBAL DAT_003f13f8 undefined

void FUN_0030eae0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003f13f8;
  piVar1 = (int *)puVar4[0xc];
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1 + piVar1[-4] * 5;
    if (piVar1 == piVar3) {
      iVar2 = puVar4[0xc];
    }
    else {
      do {
        piVar3 = piVar3 + -5;
        (**(code **)(*piVar3 + 0xc))((int)piVar3 + (int)*(short *)(*piVar3 + 8),0);
      } while ((int *)puVar4[0xc] != piVar3);
      iVar2 = puVar4[0xc];
    }
    (*(code *)PTR_FUN_003c87e0)(iVar2 + -0x10);
  }
  puVar4[1] = 0;
  DAT_003ce5ac = DAT_003ce5ac + -1;
  puVar4[0xc] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  if (DAT_003ce5ac == 0) {
    if (DAT_003ce59c != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      DAT_003ce59c = 0;
    }
    if (DAT_003ce5a4 != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      DAT_003ce5a4 = 0;
    }
    if (DAT_003ce5a8 != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      DAT_003ce5a8 = 0;
    }
    if (DAT_003ce5a0 != 0) {
      (*(code *)PTR_FUN_003c87e0)();
      DAT_003ce5a0 = 0;
    }
  }
  FUN_002e1098(DAT_003c9ed4,0x310190,param_1);
  *puVar4 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_0030eca8 @ 0030eca8 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003c87e8 int_*
// GLOBAL DAT_003c87ec undefined_*
// GLOBAL DAT_003ce59c int
// GLOBAL DAT_003ce5a4 undefined4
// GLOBAL DAT_003ce5a8 undefined4
// GLOBAL DAT_003ce5a0 undefined4
// GLOBAL DAT_003f1430 undefined

/* Strings referenciadas:
     "Kaim::CEntityManager::ComputeCommonInfo" */

undefined4 FUN_0030eca8(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [4];
  
  lVar3 = FUN_002e74e0();
  if (lVar3 != 0) {
    iVar8 = *(int *)(DAT_003c9ed4 + 0x10);
    piStack_a0 = (int *)0x0;
    iVar6 = iVar8 * 0x14 + 0x10;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,&piStack_a0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_a0,iVar6,uVar4);
    }
    iVar6 = iVar8 + -1;
    *piStack_a0 = iVar8;
    piVar5 = piStack_a0 + 4;
    if (iVar8 != 0) {
      do {
        *piVar5 = (int)&DAT_003f1430;
        iVar6 = iVar6 + -1;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[3] = 0;
        *(undefined1 *)(piVar5 + 4) = 0;
        *(undefined1 *)((int)piVar5 + 0x11) = 0;
        *(undefined1 *)((int)piVar5 + 0x12) = 0;
        *(undefined1 *)((int)piVar5 + 0x13) = 0;
        piVar5 = piVar5 + 5;
      } while (iVar6 != -1);
    }
    bVar1 = DAT_003ce59c == 0;
    iVar8 = (int)param_1;
    *(int **)(iVar8 + 0x30) = piStack_a0 + 4;
    if (bVar1) {
      uVar7 = (uint)(*(int *)(DAT_003c9ed4 + 0x10) * (*(int *)(DAT_003c9ed4 + 0x10) + -1)) >> 1;
      if (uVar7 != 0) {
        iStack_9c = 0;
        uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),uVar7,
                           (uint)&piStack_a0 | 4);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(iStack_9c,uVar7,uVar4);
        }
        DAT_003ce59c = iStack_9c;
        iVar6 = uVar7 << 2;
        memset(iStack_9c,0,uVar7);
        uStack_98 = 0;
        uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                           (uint)&piStack_a0 | 8);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_98,iVar6,uVar4);
        }
        DAT_003ce5a4 = uStack_98;
        memset(uStack_98,0,iVar6);
        uStack_94 = 0;
        uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                           (uint)&piStack_a0 | 0xc);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(uStack_94,iVar6,uVar4);
        }
        DAT_003ce5a8 = uStack_94;
        memset(uStack_94,0,iVar6);
        auStack_90[0] = 0;
        uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                          ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),iVar6,
                           auStack_90);
        if (DAT_003c87ec != (code *)0x0) {
          (*DAT_003c87ec)(auStack_90[0],iVar6,uVar4);
        }
        DAT_003ce5a0 = auStack_90[0];
        memset(auStack_90[0],0,iVar6);
      }
    }
    uVar2 = FUN_002ec058(DAT_003c9ed4,0x455d00);
    *(undefined4 *)(iVar8 + 0x34) = uVar2;
    uVar4 = FUN_002e91c0();
    lVar3 = FUN_002e93b8(uVar4,0x409010);
    *(int *)(iVar8 + 0x4c) = (int)lVar3;
    if (lVar3 != -1) {
      uVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x14),0x44fd38);
      *(undefined4 *)(iVar8 + 0x38) = uVar2;
      uVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x14),0x44ff68);
      *(undefined4 *)(iVar8 + 0x3c) = uVar2;
      uVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x14),0x4505f8);
      *(undefined4 *)(iVar8 + 0x40) = uVar2;
      uVar2 = FUN_002e4ce0(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x14),0x450828);
      *(undefined1 *)(iVar8 + 0x52) = 1;
      *(undefined1 *)(iVar8 + 0x50) = 1;
      *(undefined1 *)(iVar8 + 0x51) = 1;
      *(undefined4 *)(iVar8 + 0x44) = uVar2;
      FUN_002e1078(DAT_003c9ed4,0x310190,param_1);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0030f000 @ 0030f000 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003ce59c undefined4
// GLOBAL DAT_003ce5a4 undefined4
// GLOBAL DAT_003ce5a8 undefined4
// GLOBAL DAT_003ce5a0 undefined4

void FUN_0030f000(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)(*(int *)(DAT_003c9ed4 + 0x10) * (*(int *)(DAT_003c9ed4 + 0x10) + -1)) >> 1;
  if (uVar4 != 0) {
    iVar5 = uVar4 << 2;
    memset(DAT_003ce59c,0,uVar4);
    memset(DAT_003ce5a4,0,iVar5);
    memset(DAT_003ce5a8,0,iVar5);
    memset(DAT_003ce5a0,0,iVar5);
  }
  uVar4 = 0;
  if (*(int *)(DAT_003c9ed4 + 0x10) != 0) {
    iVar5 = 0;
    do {
      uVar4 = uVar4 + 1;
      puVar3 = (undefined8 *)(iVar5 + *(int *)(param_1 + 0x30));
      uVar1 = *(undefined4 *)puVar3;
      *puVar3 = 0x3f1430;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      iVar2 = DAT_003c9ed4;
      *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x30)) = uVar1;
      iVar5 = iVar5 + 0x14;
    } while (uVar4 < *(uint *)(iVar2 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  return;
}


// ==== FUN_0030f160 @ 0030f160 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_00455f24 uint
// GLOBAL DAT_003c958c float
// GLOBAL DAT_003ce5a0 int
// GLOBAL DAT_003ce59c int
// GLOBAL DAT_003e0040 undefined

/* WARNING: Removing unreachable block (ram,0x0030f2fc) */

undefined4 FUN_0030f160(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *puStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c0;
  int iStack_bc;
  
  iVar13 = (int)param_1;
  iVar7 = *(int *)(*(int *)(iVar13 + 4) + 0x14);
  if (param_2 < *(uint *)(*(int *)(DAT_003c9ed4 + 0x14) + 0x18)) {
    iStack_fc = param_2 * 0x14 + *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 4);
  }
  else {
    iStack_fc = 0;
  }
  puStack_100 = &DAT_003e0040;
  if ((iStack_fc == 0) || (iVar2 = *(int *)(iStack_fc + 4), iVar2 == iVar7)) {
    return 0;
  }
  if ((*(uint *)(iVar2 + 0x1c) & DAT_00455f24) == 0) {
    return 0;
  }
  iVar12 = *(int *)(iVar13 + 0x30) + param_2 * 0x14;
  uVar8 = FUN_002e91c0();
  uStack_c0 = 0;
  if (*(char *)(iVar13 + 0x48) == '\0') {
    if (*(char *)(iVar12 + 0x13) == '\0') goto LAB_0030f2d8;
    if (*(char *)(iVar13 + 0x49) != '\0') goto LAB_0030f2b4;
    fVar14 = *(float *)(iVar12 + 8);
  }
  else {
LAB_0030f2b4:
    uStack_c0 = (uint)(*(float *)(iVar12 + 4) < DAT_003c958c);
LAB_0030f2d8:
    fVar14 = *(float *)(iVar12 + 8);
  }
  bVar4 = DAT_003c958c <= fVar14;
  iVar3 = *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 4);
  iVar10 = (*(int *)(iVar2 + 0x14) - iVar3) / 0x14;
  iVar3 = (*(int *)(iVar7 + 0x14) - iVar3) / 0x14;
  iStack_bc = iVar3;
  lVar9 = FUN_002e8ab8(uVar8,*(undefined4 *)(iVar13 + 0x4c),iVar7);
  if (lVar9 != 0) {
    FUN_0030f940(param_1,iVar3,iVar10,uStack_c0);
    FUN_002e9978(uVar8,*(undefined4 *)(iVar13 + 0x4c),iVar7);
  }
  uVar15 = 0;
  if (bVar4) goto LAB_0030f454;
  iVar6 = -1;
  iVar11 = -1;
  if (*(int *)(iVar13 + 0x40) != 0) {
    iVar6 = *(int *)(*(int *)(iVar13 + 0x40) + 4);
  }
  lVar9 = FUN_002e4ce0(iVar2,0x4505f8);
  if (lVar9 != 0) {
    iVar11 = *(int *)((int)lVar9 + 4);
  }
  bVar4 = false;
  if (iVar6 == -1) {
LAB_0030f3c0:
    *(bool *)(iVar12 + 0x13) = bVar4;
  }
  else {
    if (iVar11 != -1) {
      bVar4 = iVar11 != iVar6;
      goto LAB_0030f3c0;
    }
    *(undefined1 *)(iVar12 + 0x13) = 0;
  }
  if (iVar10 < iVar3) {
    iVar6 = (iStack_bc * (iVar3 + -1)) / 2 + iVar10;
  }
  else {
    iVar6 = (iVar10 * (iVar10 + -1)) / 2 + iVar3;
  }
  *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar6 * 4 + DAT_003ce5a0);
  if (*(int *)(iVar13 + 0x34) == 0) {
    *(undefined1 *)(iVar12 + 0x12) = 0;
  }
  else {
    uVar5 = FUN_0030dc28(*(int *)(iVar13 + 0x34),iVar7,iVar2);
    *(undefined1 *)(iVar12 + 0x12) = uVar5;
  }
  uVar15 = 1;
  *(float *)(iVar12 + 8) = DAT_003c958c + *(float *)(iVar13 + 8);
LAB_0030f454:
  if (uStack_c0 != 0) {
    if (iVar10 < iVar3) {
      iVar10 = (iStack_bc * (iVar3 + -1)) / 2 + iVar10;
    }
    else {
      iVar10 = (iVar10 * (iVar10 + -1)) / 2 + iVar3;
    }
    cVar1 = *(char *)(DAT_003ce59c + iVar10);
    *(char *)(iVar12 + 0x11) = cVar1;
    iVar10 = *(int *)(iVar13 + 0x44);
    if (iVar10 == 0) {
      *(bool *)(iVar12 + 0x10) = cVar1 == '\0';
    }
    else {
      puStack_100 = *(undefined **)(iVar7 + 0x30);
      uVar15 = *(undefined4 *)(iVar10 + 8);
      uVar16 = *(undefined4 *)(iVar10 + 4);
      iStack_fc = *(undefined4 *)(iVar7 + 0x34);
      iVar10 = *(int *)(iVar13 + 0x38);
      uStack_f8 = *(undefined4 *)(iVar7 + 0x38);
      puStack_f0 = *(undefined **)(iVar2 + 0x30);
      uStack_ec = *(undefined4 *)(iVar2 + 0x34);
      uStack_e8 = *(undefined4 *)(iVar2 + 0x38);
      puStack_e0 = *(undefined **)(iVar7 + 0x48);
      uStack_dc = *(undefined4 *)(iVar7 + 0x4c);
      uStack_d8 = *(undefined4 *)(iVar7 + 0x50);
      if (iVar10 != 0) {
        puStack_100 = *(undefined **)(iVar10 + 4);
        iStack_fc = *(undefined4 *)(iVar10 + 8);
        uStack_f8 = *(undefined4 *)(iVar10 + 0xc);
        puStack_d0 = puStack_100;
        uStack_cc = iStack_fc;
        uStack_c8 = uStack_f8;
      }
      lVar9 = FUN_002e4ce0(iVar2,0x44fd38);
      if (lVar9 == 0) {
        iVar7 = *(int *)(iVar13 + 0x3c);
      }
      else {
        iVar7 = (int)lVar9;
        puStack_f0 = *(undefined **)(iVar7 + 4);
        uStack_ec = *(undefined4 *)(iVar7 + 8);
        uStack_e8 = *(undefined4 *)(iVar7 + 0xc);
        iVar7 = *(int *)(iVar13 + 0x3c);
        puStack_d0 = puStack_f0;
        uStack_cc = uStack_ec;
        uStack_c8 = uStack_e8;
      }
      if (iVar7 == 0) {
        cVar1 = *(char *)(iVar12 + 0x11);
      }
      else {
        puStack_e0 = *(undefined **)(iVar7 + 4);
        uStack_dc = *(undefined4 *)(iVar7 + 8);
        uStack_d8 = *(undefined4 *)(iVar7 + 0xc);
        cVar1 = *(char *)(iVar12 + 0x11);
        puStack_d0 = puStack_e0;
        uStack_cc = uStack_dc;
        uStack_c8 = uStack_d8;
      }
      bVar4 = false;
      if (cVar1 == '\0') {
        lVar9 = FUN_002e4e28(uVar15,uVar16,&puStack_f0,&puStack_100,&puStack_e0);
        bVar4 = lVar9 != 0;
      }
      *(bool *)(iVar12 + 0x10) = bVar4;
    }
    uVar15 = 1;
    *(float *)(iVar12 + 4) = DAT_003c958c + *(float *)(iVar13 + 8);
  }
  return uVar15;
}


// ==== FUN_0030f678 @ 0030f678 ====
// GLOBAL DAT_00409068 float
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_00455f24 uint

void FUN_0030f678(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 8);
  iVar8 = (int)param_1;
  fVar9 = DAT_00409068;
  fVar10 = DAT_00409068;
  fVar11 = DAT_00409068;
  fVar12 = DAT_00409068;
  fVar13 = DAT_00409068;
  fVar14 = DAT_00409068;
  do {
    if (iVar1 == 0) {
      *(undefined1 *)(iVar8 + 0x50) = 0;
      if (*(char *)(iVar8 + 0x48) != '\0') {
        *(undefined1 *)(iVar8 + 0x51) = 0;
      }
      if (*(char *)(iVar8 + 0x49) != '\0') {
        *(undefined1 *)(iVar8 + 0x52) = 0;
      }
      return;
    }
    iVar2 = *(int *)(iVar1 + 4);
    uVar5 = FUN_002e4c60(iVar2);
    if ((((iVar1 != 0) && (iVar2 != *(int *)(*(int *)(iVar8 + 4) + 0x14))) &&
        ((*(uint *)(iVar2 + 0x1c) & DAT_00455f24) != 0)) &&
       ((lVar6 = FUN_0030f160(param_1,uVar5), lVar6 != 0 ||
        ((*(uint *)(iVar8 + 0x50) & 0xffffff) != 0)))) {
      iVar7 = *(int *)(iVar8 + 0x30) + (int)uVar5 * 0x14;
      if (*(char *)(iVar7 + 0x10) == '\0') {
        cVar3 = *(char *)(iVar7 + 0x11);
      }
      else {
        if (*(int *)(iVar8 + 0x18) == 0) {
          *(int *)(iVar8 + 0x18) = iVar2;
LAB_0030f7b4:
          fVar13 = *(float *)(iVar7 + 0xc);
          cVar3 = *(char *)(iVar7 + 0x13);
        }
        else {
          if (*(float *)(iVar7 + 0xc) < fVar13) {
            *(int *)(iVar8 + 0x18) = iVar2;
            goto LAB_0030f7b4;
          }
          cVar3 = *(char *)(iVar7 + 0x13);
        }
        if (cVar3 == '\0') {
          cVar3 = *(char *)(iVar7 + 0x11);
        }
        else {
          if (*(int *)(iVar8 + 0x24) == 0) {
            *(int *)(iVar8 + 0x24) = iVar2;
          }
          else {
            if (fVar14 <= *(float *)(iVar7 + 0xc)) {
              cVar3 = *(char *)(iVar7 + 0x11);
              goto LAB_0030f7f0;
            }
            *(int *)(iVar8 + 0x24) = iVar2;
          }
          fVar14 = *(float *)(iVar7 + 0xc);
          cVar3 = *(char *)(iVar7 + 0x11);
        }
      }
LAB_0030f7f0:
      if (cVar3 == '\0') {
        if (*(int *)(iVar8 + 0x1c) == 0) {
          *(int *)(iVar8 + 0x1c) = iVar2;
LAB_0030f81c:
          fVar11 = *(float *)(iVar7 + 0xc);
          cVar3 = *(char *)(iVar7 + 0x13);
        }
        else {
          if (*(float *)(iVar7 + 0xc) < fVar11) {
            *(int *)(iVar8 + 0x1c) = iVar2;
            goto LAB_0030f81c;
          }
          cVar3 = *(char *)(iVar7 + 0x13);
        }
        if (cVar3 == '\0') {
          iVar4 = *(int *)(iVar8 + 0x20);
        }
        else {
          if (*(int *)(iVar8 + 0x28) == 0) {
            *(int *)(iVar8 + 0x28) = iVar2;
          }
          else {
            if (fVar12 <= *(float *)(iVar7 + 0xc)) {
              iVar4 = *(int *)(iVar8 + 0x20);
              goto LAB_0030f858;
            }
            *(int *)(iVar8 + 0x28) = iVar2;
          }
          fVar12 = *(float *)(iVar7 + 0xc);
          iVar4 = *(int *)(iVar8 + 0x20);
        }
      }
      else {
        iVar4 = *(int *)(iVar8 + 0x20);
      }
LAB_0030f858:
      if (iVar4 == 0) {
        *(int *)(iVar8 + 0x20) = iVar2;
LAB_0030f878:
        fVar10 = *(float *)(iVar7 + 0xc);
        cVar3 = *(char *)(iVar7 + 0x13);
      }
      else {
        if (*(float *)(iVar7 + 0xc) < fVar10) {
          *(int *)(iVar8 + 0x20) = iVar2;
          goto LAB_0030f878;
        }
        cVar3 = *(char *)(iVar7 + 0x13);
      }
      if (cVar3 != '\0') {
        if (*(int *)(iVar8 + 0x2c) == 0) {
          *(int *)(iVar8 + 0x2c) = iVar2;
        }
        else {
          if (fVar9 <= *(float *)(iVar7 + 0xc)) goto LAB_0030f8b4;
          *(int *)(iVar8 + 0x2c) = iVar2;
        }
        fVar9 = *(float *)(iVar7 + 0xc);
      }
    }
LAB_0030f8b4:
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}


// ==== FUN_0030f940 @ 0030f940 ====
// GLOBAL DAT_003c9ed4 int
// GLOBAL DAT_003ce5a4 int
// GLOBAL DAT_003c958c float
// GLOBAL DAT_003ce5a0 int
// GLOBAL DAT_003ce5a8 int
// GLOBAL DAT_003ce59c int

/* WARNING: Removing unreachable block (ram,0x0030fbc0) */

void FUN_0030f940(int param_1,uint param_2,uint param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(DAT_003c9ed4 + 0x10))) &&
      (-1 < (int)param_3)) &&
     (((int)param_3 < *(int *)(DAT_003c9ed4 + 0x10) && (param_2 != param_3)))) {
    if (param_2 < *(uint *)(*(int *)(DAT_003c9ed4 + 0x14) + 0x18)) {
      iVar1 = param_2 * 0x14 + *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 4);
    }
    else {
      iVar1 = 0;
    }
    if (param_3 < *(uint *)(*(int *)(DAT_003c9ed4 + 0x14) + 0x18)) {
      iVar2 = param_3 * 0x14 + *(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 4);
    }
    else {
      iVar2 = 0;
    }
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x10) != '\0')) &&
       ((iVar2 != 0 && (*(char *)(iVar2 + 0x10) != '\0')))) {
      if ((int)param_3 < (int)param_2) {
        iVar6 = (int)(param_2 * (param_2 - 1)) / 2 + param_3;
      }
      else {
        iVar6 = (int)(param_3 * (param_3 - 1)) / 2 + param_2;
      }
      iVar3 = *(int *)(iVar1 + 4);
      iVar5 = iVar6 * 4;
      fStack_c0 = *(float *)(iVar3 + 0x30);
      fStack_bc = *(float *)(iVar3 + 0x34);
      fStack_b8 = *(float *)(iVar3 + 0x38);
      iVar3 = *(int *)(iVar2 + 4);
      fStack_b0 = *(float *)(iVar3 + 0x30);
      fStack_ac = *(float *)(iVar3 + 0x34);
      fStack_a8 = *(float *)(iVar3 + 0x38);
      if (*(float *)(iVar5 + DAT_003ce5a4) < DAT_003c958c) {
        *(float *)(iVar5 + DAT_003ce5a0) =
             SQRT((fStack_a8 - fStack_b8) * (fStack_a8 - fStack_b8) +
                  (fStack_b0 - fStack_c0) * (fStack_b0 - fStack_c0) +
                  (fStack_ac - fStack_bc) * (fStack_ac - fStack_bc));
        *(float *)(iVar5 + DAT_003ce5a4) = DAT_003c958c + *(float *)(param_1 + 0xc);
      }
      if ((param_4 != '\0') && (*(float *)(iVar5 + DAT_003ce5a8) < DAT_003c958c)) {
        lVar4 = FUN_002e4ce0(*(undefined4 *)(iVar1 + 4),0x44fd38);
        if (lVar4 != 0) {
          iVar3 = (int)lVar4;
          fStack_c0 = *(float *)(iVar3 + 4);
          fStack_bc = *(float *)(iVar3 + 8);
          fStack_b8 = *(float *)(iVar3 + 0xc);
          fStack_a0 = fStack_c0;
          fStack_9c = fStack_bc;
          fStack_98 = fStack_b8;
        }
        lVar4 = FUN_002e4ce0(*(undefined4 *)(iVar2 + 4),0x44fd38);
        if (lVar4 != 0) {
          iVar2 = (int)lVar4;
          fStack_b0 = *(float *)(iVar2 + 4);
          fStack_ac = *(float *)(iVar2 + 8);
          fStack_a8 = *(float *)(iVar2 + 0xc);
          fStack_a0 = fStack_b0;
          fStack_9c = fStack_ac;
          fStack_98 = fStack_a8;
        }
        lVar4 = FUN_002e27d0(&fStack_c0,&fStack_b0,*(undefined4 *)(iVar1 + 4),1);
        if (lVar4 == 0) {
          *(undefined1 *)(DAT_003ce59c + iVar6) = 1;
        }
        else {
          *(undefined1 *)(DAT_003ce59c + iVar6) = 0;
        }
        *(float *)(iVar5 + DAT_003ce5a8) = DAT_003c958c + *(float *)(param_1 + 0xc);
      }
    }
  }
  return;
}


// ==== CEntityManager_0030fd68 @ 0030fd68 ====
// GLOBAL DAT_00455f28 undefined_*
// GLOBAL DAT_003e00e0 undefined

/* Strings referenciadas:
     "CEntityManager" */

void CEntityManager_0030fd68(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      DAT_00455f28 = &DAT_003e00e0;
    }
    else {
      FUN_002e75d0(0x455e18,0x409070,0x30ea38,0,1,1);
    }
  }
  return;
}


// ==== FUN_0030fdf8 @ 0030fdf8 ====
// GLOBAL DAT_003ce5ac int
// GLOBAL DAT_003f13f8 undefined

undefined8 FUN_0030fdf8(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_002e75b8();
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = param_2;
  *puVar1 = &DAT_003f13f8;
  puVar1[3] = 0x3f000000;
  puVar1[2] = 0x3dcccccd;
  puVar1[0xc] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0xf] = 0;
  DAT_003ce5ac = DAT_003ce5ac + 1;
  return param_1;
}


// ==== FUN_0030fe98 @ 0030fe98 ====

/* Strings referenciadas:
     "ComputeInfoDelay"
     "ComputeCommonInfoDelay" */

undefined4 FUN_0030fe98(int param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_002e3920(param_2);
  lVar3 = stricmp(uVar2,0x409038);
  if (lVar3 == 0) {
    lVar3 = FUN_002e3918(param_2);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_0035e730(lVar3);
      uVar4 = FUN_00291c68(uVar2);
      *(undefined4 *)(param_1 + 8) = uVar4;
      uVar4 = 1;
    }
  }
  else {
    uVar2 = FUN_002e3920(param_2);
    lVar3 = stricmp(uVar2,0x409050);
    if (lVar3 == 0) {
      lVar3 = FUN_002e3918(param_2);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = FUN_0035e730(lVar3);
        uVar4 = FUN_00291c68(uVar2);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
      if (param_2 != 0) {
        lVar3 = FUN_002e3920(param_2);
        uVar4 = 0;
        if (lVar3 != 0) {
          pcVar1 = (char *)FUN_002e3920(param_2);
          uVar4 = 0;
          if (*pcVar1 == '_') {
            uVar4 = 1;
          }
        }
      }
    }
  }
  return uVar4;
}


// ==== FUN_0030ffa0 @ 0030ffa0 ====

undefined4 FUN_0030ffa0(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  FUN_0030f678();
  return *(undefined4 *)(param_1 + 0x18);
}


// ==== FUN_0030ffe0 @ 0030ffe0 ====

undefined4 FUN_0030ffe0(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  FUN_0030f678();
  return *(undefined4 *)(param_1 + 0x1c);
}


// ==== FUN_00310020 @ 00310020 ====

undefined4 FUN_00310020(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_0030f678();
  return *(undefined4 *)(param_1 + 0x20);
}


// ==== FUN_00310060 @ 00310060 ====

undefined4 FUN_00310060(int param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_0030f678();
  return *(undefined4 *)(param_1 + 0x24);
}


// ==== FUN_003100a0 @ 003100a0 ====

undefined4 FUN_003100a0(int param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_0030f678();
  return *(undefined4 *)(param_1 + 0x28);
}


// ==== FUN_003100e0 @ 003100e0 ====

undefined4 FUN_003100e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_0030f678();
  return *(undefined4 *)(param_1 + 0x2c);
}


// ==== FUN_00310120 @ 00310120 ====

int FUN_00310120(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(iVar1 + 0x49) = 1;
  *(undefined1 *)(iVar1 + 0x48) = 1;
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar1 + 0x30);
  }
  else {
    uVar2 = FUN_002e4c60();
    FUN_0030f160(param_1,uVar2);
    iVar1 = *(int *)(iVar1 + 0x30) + (int)uVar2 * 0x14;
  }
  return iVar1;
}


// ==== FUN_00310228 @ 00310228 ====

void FUN_00310228(void)

{
  CEntityManager_0030fd68(1,0xffff);
  return;
}


// ==== FUN_00310248 @ 00310248 ====

void FUN_00310248(void)

{
  CEntityManager_0030fd68(0,0xffff);
  return;
}


// ==== FUN_003102d8 @ 003102d8 ====
// GLOBAL DAT_0040e718 undefined4
// GLOBAL DAT_0040e0e4 undefined4

void FUN_003102d8(void)

{
  if ((undefined4 **)DAT_0040e718 != &DAT_0040e718) {
    do {
      FUN_00310478(DAT_0040e718 + -2,0);
    } while ((undefined4 **)DAT_0040e718 != &DAT_0040e718);
  }
  FUN_00317fc0(0x455f30);
  DAT_0040e0e4 = 0;
  return;
}


// ==== FUN_00310338 @ 00310338 ====
// GLOBAL DAT_0040e718 undefined4

long FUN_00310338(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (param_3 == (undefined4 *)0x0) {
    uStack_60 = 0;
    uStack_70 = 2;
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_6c = 0;
    uStack_5c = 0;
    param_3 = &uStack_70;
  }
  lVar2 = FUN_003108f0(param_3);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    puVar5 = (undefined4 *)lVar2;
    *puVar5 = param_1;
    puVar5[1] = 0;
    puVar5[5] = 0;
    puVar5[4] = puVar5[4] | 2;
    if ((param_2 == 0) && (param_2 = **(int **)(*param_1 + 0x4c), param_2 == 0)) {
      piVar4 = (int *)*puVar5;
    }
    else {
      lVar3 = FUN_00311568(param_2,*param_1,*(undefined4 *)((int)param_3 + 0xc),
                           *(undefined4 *)((int)param_3 + 0x10));
      puVar5[1] = (int)lVar3;
      if (lVar3 == 0) {
        FUN_00310940(lVar2);
        return 0;
      }
      piVar4 = (int *)*puVar5;
    }
    if (piVar4[8] == 0) {
      piVar4 = piVar4 + 10;
    }
    else {
      piVar4 = (int *)(piVar4[8] + (*(uint *)(*piVar4 + 0x40) & 0xfffffff));
    }
    *piVar4 = *piVar4 + 1;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar1 = DAT_0040e718;
    puVar5[3] = &DAT_0040e718;
    puVar5[2] = puVar1;
    DAT_0040e718[1] = puVar5 + 2;
    DAT_0040e718 = puVar5 + 2;
  }
  return lVar2;
}


// ==== FUN_00310478 @ 00310478 ====

void FUN_00310478(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 auStack_40 [4];
  
  memset(auStack_40,0,0x10);
  puVar6 = (undefined4 *)param_1;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_40;
  }
  if (puVar6[5] != 0) {
    puVar6[5] = puVar6[5] + -1;
    return;
  }
  if (puVar6[1] == 0) {
    piVar5 = (int *)*puVar6;
  }
  else {
    lVar2 = FUN_00311b50();
    if (lVar2 == 1) {
      param_2[3] = puVar6[1];
      piVar5 = (int *)*puVar6;
    }
    else {
      piVar5 = (int *)*puVar6;
    }
  }
  if (piVar5[8] == 0) {
    piVar3 = piVar5 + 10;
  }
  else {
    piVar3 = (int *)(piVar5[8] + (*(uint *)(*piVar5 + 0x40) & 0xfffffff));
  }
  iVar1 = *piVar3;
  *piVar3 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if ((puVar6[4] & 2) != 0) {
      puVar4 = (undefined4 *)puVar6[3];
      goto LAB_00310540;
    }
    FUN_003110b0(piVar5,*param_2,param_2[1]);
  }
  puVar4 = (undefined4 *)puVar6[3];
LAB_00310540:
  *puVar4 = puVar6[2];
  *(undefined4 *)(puVar6[2] + 4) = puVar6[3];
  if ((puVar6[4] & 1) == 0) {
    FUN_00317c20(0x455f30,param_1);
    param_2[2] = puVar6;
  }
  else {
    param_2[2] = puVar6;
  }
  return;
}


// ==== FUN_00310590 @ 00310590 ====

undefined8 FUN_00310590(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 4) + param_2 * 8);
  lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),param_4);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_003105e8 @ 003105e8 ====

long FUN_003105e8(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 auStack_30 [4];
  
  lVar3 = 0;
  if ((param_1 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 4) + param_2 * 8),
     auStack_30[0] = param_4,
     lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),auStack_30),
     lVar3 = param_1, lVar1 == 0)) {
    lVar3 = 0;
  }
  return lVar3;
}


// ==== FUN_00310640 @ 00310640 ====

long FUN_00310640(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 auStack_30 [4];
  
  lVar3 = 0;
  if ((param_1 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 4) + param_2 * 8),
     auStack_30[0] = param_4,
     lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),auStack_30),
     lVar3 = param_1, lVar1 == 0)) {
    lVar3 = 0;
  }
  return lVar3;
}


// ==== FUN_00310698 @ 00310698 ====

long FUN_00310698(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_1 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 4) + param_2 * 8),
     lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),param_4),
     lVar3 = param_1, lVar1 == 0)) {
    lVar3 = 0;
  }
  return lVar3;
}


// ==== FUN_003106f0 @ 003106f0 ====

long FUN_003106f0(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 auStack_30 [4];
  
  lVar3 = 0;
  if ((param_2 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_2)[1] + 4) + param_3 * 8),
     auStack_30[0] = param_1,
     lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_2,*(undefined2 *)(puVar2 + 1),auStack_30),
     lVar3 = param_2, lVar1 == 0)) {
    lVar3 = 0;
  }
  return lVar3;
}


// ==== FUN_00310768 @ 00310768 ====

undefined4 FUN_00310768(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [4];
  
  puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 8) + param_2 * 8);
  lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),auStack_40);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  if (param_4 != 0) {
    if (param_1 == 0) {
      *(undefined4 *)param_4 = 0;
    }
    else {
      *(undefined4 *)param_4 = 1;
    }
  }
  return auStack_40[0];
}


// ==== FUN_003107e0 @ 003107e0 ====

undefined4 FUN_003107e0(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [4];
  
  puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 8) + param_2 * 8);
  lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),auStack_40);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  if (param_4 != 0) {
    if (param_1 == 0) {
      *(undefined4 *)param_4 = 0;
    }
    else {
      *(undefined4 *)param_4 = 1;
    }
  }
  return auStack_40[0];
}


// ==== FUN_00310870 @ 00310870 ====

undefined4 FUN_00310870(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [4];
  
  puVar2 = (undefined4 *)(*(int *)(((undefined4 *)param_1)[1] + 8) + param_2 * 8);
  lVar1 = (*(code *)*puVar2)(*(undefined4 *)param_1,*(undefined2 *)(puVar2 + 1),auStack_40);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  if (param_4 != 0) {
    if (param_1 == 0) {
      *(undefined4 *)param_4 = 0;
    }
    else {
      *(undefined4 *)param_4 = 1;
    }
  }
  return auStack_40[0];
}


// ==== FUN_003108f0 @ 003108f0 ====

int FUN_003108f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = FUN_00317a78(0x455f30,0x3080c);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  return iVar1;
}


// ==== FUN_00310940 @ 00310940 ====

void FUN_00310940(int param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    FUN_00317c20(0x455f30);
  }
  return;
}


// ==== FUN_00310978 @ 00310978 ====
// GLOBAL DAT_00409160 undefined8
// GLOBAL DAT_00409168 undefined8
// GLOBAL null int
// GLOBAL null undefined

int * FUN_00310978(undefined8 param_1,long param_2,uint param_3,undefined1 *param_4,long param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 auStack_2c0 [512];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint auStack_ac [3];
  
  puVar3 = auStack_2c0;
  auStack_ac[0] = param_3 & 7;
  piVar5 = (int *)0x0;
  if (iGpffff88f8 != 0) {
    if (param_2 == 0) {
      param_2 = FUN_00311430();
      uVar1 = *(undefined4 *)param_2;
    }
    else {
      uVar1 = *(undefined4 *)param_2;
    }
    lVar6 = FUN_0031df28(uVar1,param_1);
    if (lVar6 == 0) {
      return (int *)0x0;
    }
  }
  puVar10 = (undefined1 *)0x0;
  puVar8 = (undefined4 *)param_1;
  if (param_4 == (undefined1 *)0x0) {
    if ((0x200 < *(ushort *)(puVar8 + 0x11)) &&
       (puVar3 = (undefined1 *)FUN_00312c48(*(undefined2 *)(puVar8 + 0x11),0x1080c),
       puVar10 = puVar3, puVar3 == (undefined1 *)0x0)) {
      return (int *)0x0;
    }
    if ((code *)puVar8[0xf] == (code *)0x0) {
      param_4 = (undefined1 *)0x0;
    }
    else {
      (*(code *)puVar8[0xf])(0,puVar3);
      param_4 = puVar3;
    }
  }
  iVar4 = FUN_003111a8(param_1,auStack_ac[0],&uStack_b0);
  uVar9 = 1 << ((uint)puVar8[0x10] >> 0x1c);
  if (0x40 < uVar9) {
    iVar4 = iVar4 + -0x40 + uVar9;
  }
  if (param_5 == 0) {
LAB_00310aa8:
    if (piVar5 != (int *)0x0) goto LAB_00310acc;
  }
  else {
    piVar5 = (int *)(*(code *)param_5)(param_1,param_6,param_4,iVar4);
    if (piVar5 != (int *)0x0) {
      auStack_ac[0] = auStack_ac[0] | 0x20;
      goto LAB_00310aa8;
    }
  }
  piVar5 = (int *)FUN_00311048(param_1,auStack_ac,param_4,iVar4);
LAB_00310acc:
  uStack_c0 = DAT_00409160;
  uStack_b8 = DAT_00409168;
  lVar6 = FUN_00316400(&uStack_c0,*puVar8);
  piVar7 = piVar5;
  if ((lVar6 == 0) && (((uint)piVar5 & uVar9 - 1) != 0)) {
    piVar7 = (int *)((int)piVar5 + (uVar9 - 1) & ~(uVar9 - 1));
    if ((uint)((int)piVar7 - (int)piVar5) < 4) {
      *(int **)((int)piVar7 + iVar4) = piVar5;
      auStack_ac[0] = auStack_ac[0] | 0x10;
    }
    else {
      piVar7[-1] = (int)piVar5;
      auStack_ac[0] = auStack_ac[0] | 8;
    }
  }
  if (piVar7 != (int *)0x0) {
    iVar4 = (int)param_2;
    piVar7[9] = iVar4;
    FUN_00310c88(piVar7,param_1,auStack_ac[0],uStack_b0);
    if (iGpffff88f8 != 0) {
      iVar2 = *(int *)(iVar4 + 0xc);
      piVar7[6] = iVar4 + 0xc;
      piVar7[5] = iVar2;
      *(int **)(*(int *)(iVar4 + 0xc) + 4) = piVar7 + 5;
      *(int **)(iVar4 + 0xc) = piVar7 + 5;
    }
    if ((*(code **)(*piVar7 + 0x28) != (code *)0x0) &&
       (lVar6 = (**(code **)(*piVar7 + 0x28))(piVar7,param_2,param_4,param_5,param_6), lVar6 == 0))
    {
      if (puVar10 != (undefined1 *)0x0) {
        FUN_00312c70(puVar10);
      }
      if (iGpffff88f8 != 0) {
        *(int *)piVar7[6] = piVar7[5];
        *(int *)(piVar7[5] + 4) = piVar7[6];
      }
      FUN_0031e320(piVar7,0,0);
      return (int *)0x0;
    }
    if (puVar10 != (undefined1 *)0x0) {
      FUN_00312c70(puVar10);
    }
    piVar7[2] = (int)&piGpffff8f30;
    piVar7[1] = (int)piGpffff8f30;
    *(int **)((int)piGpffff8f30 + 4) = piVar7 + 1;
    piGpffff8f30 = piVar7 + 1;
    return piVar7;
  }
  if (puVar10 != (undefined1 *)0x0) {
    FUN_00312c70(puVar10);
    return (int *)0x0;
  }
  return (int *)0x0;
}


// ==== FUN_00310c88 @ 00310c88 ====

void FUN_00310c88(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  *param_1 = param_2;
  param_1[7] = param_3;
  param_4 = (int)param_1 + param_4;
  param_1[8] = param_4;
  if ((param_3 & 1) != 0) {
    if (param_4 == 0) {
      piVar3 = param_1 + 10;
      if ((param_3 & 2) != 0) {
        piVar3 = param_1 + 0xb;
      }
    }
    else if ((param_3 & 2) == 0) {
      piVar3 = (int *)(param_4 + (*(uint *)(param_2 + 0x40) & 0xfffffff));
    }
    else {
      piVar3 = (int *)(param_4 + (*(uint *)(param_2 + 0x40) & 0xfffffff) + 4);
    }
    piVar7 = piVar3 + 2;
    *piVar3 = (int)piVar7;
    piVar3[1] = (int)(piVar7 + (uint)*(ushort *)(*(int *)(param_2 + 0x4c) + 0xc) * 3);
    uVar5 = (uint)*(ushort *)(*(int *)(param_2 + 0x4c) + 0xc);
    uVar6 = 0;
    if (uVar5 != 0) {
      do {
        piVar2 = piVar7 + uVar6 * 3;
        piVar2[2] = (int)piVar2;
        uVar6 = uVar6 + 1 & 0xffff;
        *piVar2 = (int)piVar2;
        piVar2[1] = (int)piVar2;
      } while (uVar6 < uVar5);
    }
    uVar6 = 0;
    uVar5 = (uint)*(ushort *)(*(int *)(param_2 + 0x4c) + 0xe);
    iVar1 = piVar3[1];
    if (uVar5 != 0) {
      do {
        iVar4 = uVar6 * 8 + iVar1;
        uVar6 = uVar6 + 1 & 0xffff;
        *(int *)(iVar4 + 4) = iVar4;
        *(int *)iVar4 = iVar4;
      } while (uVar6 < uVar5);
    }
  }
  if ((param_1[7] & 2U) != 0) {
    if (param_1[8] == 0) {
      piVar3 = param_1 + 10;
    }
    else {
      piVar3 = (int *)(param_1[8] + (*(uint *)(*param_1 + 0x40) & 0xfffffff));
    }
    *piVar3 = 0;
  }
  param_1[5] = 0;
  param_1[4] = (int)(param_1 + 3);
  param_1[3] = (int)(param_1 + 3);
  param_1[6] = 0;
  return;
}


// ==== FUN_00310de8 @ 00310de8 ====

undefined8 FUN_00310de8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar1 = piVar5[8];
  if (iVar1 == 0) {
    piVar4 = piVar5 + 10;
    if ((piVar5[7] & 2U) != 0) {
      piVar4 = piVar5 + 0xb;
    }
  }
  else if ((piVar5[7] & 2U) == 0) {
    piVar4 = (int *)(iVar1 + (*(uint *)(*piVar5 + 0x40) & 0xfffffff));
  }
  else {
    piVar4 = (int *)(iVar1 + (*(uint *)(*piVar5 + 0x40) & 0xfffffff) + 4);
  }
  if (param_3 == 1) {
    puVar3 = (undefined4 *)(*piVar4 + param_2 * 0xc);
    piVar5 = (int *)puVar3[1];
    piVar4 = (int *)*puVar3;
    while (piVar4 != piVar5) {
      piVar2 = (int *)*piVar4;
      *(int *)piVar4[-1] = piVar4[-2];
      *(int *)(piVar4[-2] + 4) = piVar4[-1];
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      FUN_00317c20(0x455f80,piVar4 + -5);
      piVar4 = piVar2;
    }
  }
  else {
    puVar3 = (undefined4 *)(piVar4[1] + param_2 * 8);
    piVar5 = (int *)puVar3[1];
    piVar4 = (int *)*puVar3;
    while (piVar4 != piVar5) {
      piVar2 = (int *)*piVar4;
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      *(int *)piVar4[3] = piVar4[2];
      *(int *)(piVar4[2] + 4) = piVar4[3];
      FUN_00317c20(0x455f80,piVar4 + -3);
      piVar4 = piVar2;
    }
  }
  return param_1;
}


// ==== FUN_00310f68 @ 00310f68 ====
// GLOBAL null undefined4
// GLOBAL null undefined4
// GLOBAL null undefined
// GLOBAL null undefined1_*
// GLOBAL null undefined4
// GLOBAL null undefined4

undefined4 FUN_00310f68(void)

{
  long lVar1;
  
  puGpffff8f30 = (undefined1 *)&puGpffff8f30;
  uGpffff8f38 = 0;
  puGpffff8f34 = puGpffff8f30;
  lVar1 = FUN_00317e40(0x1c,0x10,0x40,0,0x455f80,0x4080c);
  if (lVar1 != 0) {
    uGpffff88fc = 1;
    lVar1 = FUN_00310978(uGpffff8fe0,0,0,0,0x311558,0);
    uGpffff88f8 = (undefined4)lVar1;
    if (lVar1 != 0) {
      return 1;
    }
    FUN_00317fc0(0x455f80);
  }
  uGpffff88fc = 0;
  return 0;
}


// ==== FUN_00311008 @ 00311008 ====
// GLOBAL null undefined4
// GLOBAL null undefined4
// GLOBAL null undefined4

void FUN_00311008(void)

{
  uGpffff8f38 = 1;
  FUN_003110b0(uGpffff88f8,0,0);
  uGpffff88f8 = 0;
  FUN_00317fc0(0x455f80);
  uGpffff88fc = 0;
  return;
}


// ==== FUN_00311048 @ 00311048 ====

undefined8 FUN_00311048(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(int *)((int)param_1 + 0x48) == 0) &&
     (lVar1 = FUN_0031e1f8(param_1,param_4,*param_2 >> 2 & 1), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0031e2c0(param_1,param_4);
  }
  return uVar2;
}


// ==== FUN_003110b0 @ 003110b0 ====

void FUN_003110b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  if (*(code **)(*piVar4 + 0x34) != (code *)0x0) {
    (**(code **)(*piVar4 + 0x34))();
  }
  if (piVar4[5] == 0) {
    piVar3 = (int *)piVar4[3];
  }
  else {
    *(int *)piVar4[6] = piVar4[5];
    *(int *)(piVar4[5] + 4) = piVar4[6];
    piVar4[6] = 0;
    piVar4[5] = 0;
    piVar3 = (int *)piVar4[3];
  }
  if (piVar3 == piVar4 + 3) {
    uVar2 = piVar4[7];
  }
  else {
    do {
      piVar1 = (int *)*piVar3;
      *(int **)piVar3[1] = piVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      piVar3 = piVar1;
    } while (piVar1 != piVar4 + 3);
    uVar2 = piVar4[7];
  }
  if ((uVar2 & 1) != 0) {
    FUN_003114d0(param_1,1);
    FUN_003114d0(param_1,2);
  }
  *(int *)piVar4[2] = piVar4[1];
  *(int *)(piVar4[1] + 4) = piVar4[2];
  FUN_0031e320(param_1,param_2,param_3);
  return;
}


// ==== FUN_003111a8 @ 003111a8 ====

int FUN_003111a8(int param_1,ulong param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint auStack_10 [4];
  
  puVar3 = auStack_10;
  if (param_3 != (uint *)0x0) {
    puVar3 = param_3;
  }
  iVar1 = 0x28;
  if ((*(uint *)(param_1 + 0x40) & 0xfffffff) == 0) {
    *puVar3 = 0;
  }
  else {
    iVar1 = 1 << (*(uint *)(param_1 + 0x40) >> 0x1c);
    uVar2 = iVar1 + 0x27U & -iVar1;
    *puVar3 = uVar2;
    iVar1 = uVar2 + (*(uint *)(param_1 + 0x40) & 0xfffffff);
  }
  if ((param_2 & 2) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_2 & 1) != 0) {
    iVar1 = iVar1 + 8 + (uint)*(ushort *)(*(int *)(param_1 + 0x4c) + 0xc) * 0xc +
            (uint)*(ushort *)(*(int *)(param_1 + 0x4c) + 0xe) * 8;
  }
  return iVar1;
}


// ==== FUN_00311248 @ 00311248 ====

undefined4 FUN_00311248(undefined4 param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  uStack_20 = param_1;
  FUN_00311278(0x311498,&uStack_20);
  return uStack_1c;
}


// ==== FUN_00311278 @ 00311278 ====
// GLOBAL null undefined

void FUN_00311278(code *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = puGpffff8f30;
  while (((undefined4 **)puVar1 != &puGpffff8f30 &&
         (lVar2 = (*param_1)(puVar1 + -1,param_2), lVar2 != 0))) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}


// ==== FUN_00311300 @ 00311300 ====

undefined8 FUN_00311300(undefined8 param_1,long param_2)

{
  int *piVar1;
  long in_v1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (param_2 == 0) {
    if (*(code **)(*piVar3 + 0x2c) == (code *)0x0) {
      if (in_v1 == 0) {
        param_1 = 0;
      }
    }
    else {
      in_v1 = (**(code **)(*piVar3 + 0x2c))(param_1);
      if (in_v1 == 0) {
        param_1 = 0;
      }
    }
  }
  piVar1 = (int *)piVar3[3];
  while (piVar1 != piVar3 + 3) {
    piVar2 = piVar1 + -5;
    piVar1 = (int *)*piVar1;
    if (*(code **)(*piVar2 + 0x2c) != (code *)0x0) {
      in_v1 = (**(code **)(*piVar2 + 0x2c))();
    }
    if (in_v1 == 0) {
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_00311398 @ 00311398 ====

undefined8 FUN_00311398(undefined8 param_1,long param_2)

{
  int *piVar1;
  long in_v1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (param_2 == 0) {
    if (*(code **)(*piVar3 + 0x30) == (code *)0x0) {
      if (in_v1 == 0) {
        param_1 = 0;
      }
    }
    else {
      in_v1 = (**(code **)(*piVar3 + 0x30))(param_1);
      if (in_v1 == 0) {
        param_1 = 0;
      }
    }
  }
  piVar1 = (int *)piVar3[3];
  while (piVar1 != piVar3 + 3) {
    piVar2 = piVar1 + -5;
    piVar1 = (int *)*piVar1;
    if (*(code **)(*piVar2 + 0x30) != (code *)0x0) {
      in_v1 = (**(code **)(*piVar2 + 0x30))();
    }
    if (in_v1 == 0) {
      param_1 = 0;
    }
  }
  return param_1;
}


// ==== FUN_00311430 @ 00311430 ====
// GLOBAL null undefined4

undefined4 FUN_00311430(void)

{
  return uGpffff88f8;
}


// ==== FUN_003114d0 @ 003114d0 ====

void FUN_003114d0(undefined8 param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 1) {
    uVar1 = *(ushort *)(*(int *)(*(int *)param_1 + 0x4c) + 0xc);
  }
  else {
    uVar1 = *(ushort *)(*(int *)(*(int *)param_1 + 0x4c) + 0xe);
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = uVar2 + 1;
      FUN_00310de8(param_1,uVar2,param_2);
      uVar2 = uVar3;
    } while (uVar3 < uVar1);
  }
  return;
}


// ==== FUN_00311568 @ 00311568 ====

int * FUN_00311568(int param_1,int param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_2 + 0x4c);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != (int *)(iVar2 + 4)) {
    iVar5 = piVar3[-5];
    while( true ) {
      if (iVar5 == param_1) {
        piVar3[-2] = piVar3[-2] + 1;
        return piVar3 + -5;
      }
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)(iVar2 + 4)) break;
      iVar5 = piVar3[-5];
    }
  }
  lVar4 = FUN_00311848(param_1,param_2,1);
  if (lVar4 == 0) {
    return (int *)0x0;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x14) * 8 + (uint)*(ushort *)(param_1 + 0x16) * 8 + 0x1c;
  if (param_3 == 0) {
    piVar3 = (int *)FUN_00312c48(iVar5,0x3080b);
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar3[4] = 0;
  }
  else {
    piVar3 = (int *)(*(code *)param_3)(iVar5,param_4);
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar3[4] = 1;
  }
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3[1] = (int)(piVar3 + 7);
  uVar6 = 0;
  uVar1 = *(ushort *)(param_1 + 0x14);
  *piVar3 = param_1;
  piVar3[3] = 0;
  piVar3[2] = (int)(piVar3 + 7 + (uint)uVar1 * 2);
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar8 = (uint)*(ushort *)(*(int *)(param_2 + 0x4c) + 0xc);
  if (uVar1 != 0) {
    do {
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar5 = 0;
        do {
          lVar4 = FUN_00316400(*(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x10)),
                               *(undefined4 *)(uVar6 * 0x14 + *(int *)(param_1 + 0x10)));
          if (lVar4 == 0) {
            *(short *)(uVar6 * 8 + piVar3[1] + 4) = (short)uVar7;
            *(undefined4 *)(uVar6 * 8 + piVar3[1]) =
                 *(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x10) + 0x14);
          }
          uVar7 = uVar7 + 1 & 0xffff;
          iVar5 = uVar7 * 0x18;
        } while (uVar7 < uVar8);
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < uVar1);
  }
  uVar1 = *(ushort *)(param_1 + 0x16);
  uVar6 = 0;
  uVar8 = (uint)*(ushort *)(*(int *)(param_2 + 0x4c) + 0xe);
  if (uVar1 != 0) {
    do {
      uVar7 = 0;
      if (uVar8 != 0) {
        iVar5 = 0;
        do {
          lVar4 = FUN_00316400(*(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x14)),
                               *(undefined4 *)(uVar6 * 0x14 + *(int *)(param_1 + 0xc)));
          if (lVar4 == 0) {
            *(short *)(uVar6 * 8 + piVar3[2] + 4) = (short)uVar7;
            *(undefined4 *)(uVar6 * 8 + piVar3[2]) =
                 *(undefined4 *)(iVar5 + *(int *)(iVar2 + 0x14) + 0x14);
          }
          uVar7 = uVar7 + 1 & 0xffff;
          iVar5 = uVar7 * 0x18;
        } while (uVar7 < uVar8);
      }
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < uVar1);
  }
  piVar3[5] = *(int *)(iVar2 + 4);
  piVar3[6] = iVar2 + 4;
  *(int **)(*(int *)(iVar2 + 4) + 4) = piVar3 + 5;
  *(int **)(iVar2 + 4) = piVar3 + 5;
  return piVar3;
}


// ==== FUN_00311848 @ 00311848 ====

undefined8 FUN_00311848(undefined8 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  bVar5 = true;
  iVar3 = *(int *)(param_2 + 0x4c);
  iVar11 = (int)param_1;
  uVar1 = *(ushort *)(iVar11 + 0x14);
  uVar2 = *(ushort *)(iVar3 + 0xc);
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      bVar4 = false;
      uVar10 = uVar9 + 1;
      for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
        lVar6 = FUN_00316400(*(undefined4 *)(uVar8 * 0x18 + *(int *)(iVar3 + 0x10)),
                             *(undefined4 *)(uVar9 * 0x14 + *(int *)(iVar11 + 0x10)));
        if (lVar6 == 0) {
          bVar4 = true;
          break;
        }
      }
      if (!bVar4) {
        bVar5 = false;
      }
      uVar9 = uVar10;
    } while (uVar10 < uVar1);
  }
  uVar1 = *(ushort *)(iVar11 + 0x16);
  uVar2 = *(ushort *)(*(int *)(param_2 + 0x4c) + 0xe);
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      bVar4 = false;
      uVar8 = 0;
      uVar10 = uVar9 + 1;
      do {
        if (uVar2 <= uVar8) goto LAB_00311960;
        lVar6 = FUN_00316400(*(undefined4 *)(uVar8 * 0x18 + *(int *)(iVar3 + 0x14)),
                             *(undefined4 *)(uVar9 * 0x14 + *(int *)(iVar11 + 0xc)));
        uVar8 = uVar8 + 1;
      } while (lVar6 != 0);
      bVar4 = true;
LAB_00311960:
      if (!bVar4) {
        bVar5 = false;
      }
      uVar9 = uVar10;
    } while (uVar10 < uVar1);
  }
  uVar7 = 0;
  if (bVar5) {
    uVar7 = param_1;
  }
  return uVar7;
}


// ==== FUN_00311a10 @ 00311a10 ====
// GLOBAL null undefined4
// GLOBAL null undefined
// GLOBAL null undefined1_*

void FUN_00311a10(void)

{
  while ((undefined1 **)puGpffff8f40 != &puGpffff8f40) {
    FUN_00311ca0(puGpffff8f40 + -0x20);
  }
  puGpffff8f40 = (undefined1 *)&puGpffff8f40;
  puGpffff8f44 = (undefined1 *)&puGpffff8f40;
  FUN_00317fc0(0x455fa8);
  uGpffff8904 = 0;
  return;
}


// ==== FUN_00311a70 @ 00311a70 ====

undefined4 FUN_00311a70(undefined4 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      lVar1 = (*(code *)*param_1)();
      uVar2 = uVar2 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}


// ==== FUN_00311ae0 @ 00311ae0 ====

undefined4 FUN_00311ae0(undefined4 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      lVar1 = (*(code *)*param_1)();
      uVar2 = uVar2 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}


// ==== FUN_00311b50 @ 00311b50 ====

undefined4 FUN_00311b50(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xc) == 0) {
    **(undefined4 **)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(*(int *)(iVar2 + 0x14) + 4) = *(undefined4 *)(iVar2 + 0x18);
    uVar1 = 1;
    if ((*(uint *)(iVar2 + 0x10) & 1) == 0) {
      FUN_00312c70(param_1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
  }
  return uVar1;
}


// ==== FUN_00311bb8 @ 00311bb8 ====

undefined8 FUN_00311bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00316618();
  FUN_003165c8(param_1,param_3);
  return param_1;
}


// ==== FUN_00311bf8 @ 00311bf8 ====
// GLOBAL null undefined

long FUN_00311bf8(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_00317a78(0x455fa8,0x3080b);
    if (param_1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x18) = 2;
  }
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    iVar1 = (int)param_1;
    *(undefined2 *)(iVar1 + 0x14) = 0;
    *(undefined2 *)(iVar1 + 0x16) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_00316758(param_1);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(int **)(iVar1 + 0x24) = &iGpffff8f40;
    *(int *)(iVar1 + 0x20) = iGpffff8f40;
    *(int *)(iGpffff8f40 + 4) = iVar1 + 0x20;
    iGpffff8f40 = iVar1 + 0x20;
  }
  return param_1;
}


// ==== FUN_00311ca0 @ 00311ca0 ====

undefined4 FUN_00311ca0(undefined8 param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  if (*(code **)(iVar4 + 0x1c) != (code *)0x0) {
    (**(code **)(iVar4 + 0x1c))();
  }
  uVar3 = 0;
  FUN_00316668(param_1);
  uVar1 = *(ushort *)(iVar4 + 0x14);
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(iVar4 + 0x16);
  }
  else {
    iVar5 = 0;
    do {
      uVar3 = uVar3 + 1;
      FUN_00316668(*(int *)(iVar4 + 0x10) + iVar5);
      iVar5 = iVar5 + 0x14;
    } while (uVar3 < uVar1);
    uVar1 = *(ushort *)(iVar4 + 0x16);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      uVar3 = uVar3 + 1;
      FUN_00316668(*(int *)(iVar4 + 0xc) + iVar5);
      iVar5 = iVar5 + 0x14;
    } while (uVar3 < uVar1);
  }
  if ((*(uint *)(iVar4 + 0x18) & 1) == 0) {
    FUN_00312c70(*(undefined4 *)(iVar4 + 0x10));
    puVar2 = *(undefined4 **)(iVar4 + 0x24);
  }
  else {
    puVar2 = *(undefined4 **)(iVar4 + 0x24);
  }
  *puVar2 = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(*(int *)(iVar4 + 0x20) + 4) = *(undefined4 *)(iVar4 + 0x24);
  if ((*(uint *)(iVar4 + 0x18) & 2) == 0) {
    FUN_00317c20(0x455fa8,param_1);
  }
  return 1;
}


// ==== FUN_00311db8 @ 00311db8 ====
// GLOBAL null undefined

int * FUN_00311db8(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)0x0;
    if ((int **)piGpffff8f40 != &piGpffff8f40) {
      iVar1 = piGpffff8f40[-8];
      piVar4 = piGpffff8f40;
      while( true ) {
        piVar2 = piVar4 + -8;
        lVar3 = FUN_00316400(iVar1,param_1);
        if (lVar3 == 0) break;
        piVar4 = (int *)*piVar4;
        if ((int **)piVar4 == &piGpffff8f40) {
          return (int *)0x0;
        }
        iVar1 = piVar4[-8];
      }
    }
  }
  return piVar2;
}


// ==== FUN_00311e60 @ 00311e60 ====

undefined8 FUN_00311e60(undefined8 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if ((*(int *)(iVar5 + 0x10) != 0) && (*(int *)(iVar5 + 0xc) != 0)) {
    if ((*(uint *)(iVar5 + 0x18) & 1) == 0) {
      FUN_00312c70();
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    *(undefined4 *)(iVar5 + 0xc) = 0;
  }
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar3 = (param_3 + param_5) * 0x14;
    lVar1 = FUN_00312c48(iVar3,0x3080b);
    *(int *)(iVar5 + 0x10) = (int)lVar1;
    if (lVar1 == 0) {
LAB_00311f90:
      param_1 = 0;
    }
    else {
      *(uint *)(iVar5 + 0xc) = param_3 * 0x14 + (int)lVar1;
      memset(lVar1,0,iVar3);
      *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) & 0xfffffffe;
    }
  }
  else {
    uVar2 = 0;
    if (param_3 != 0) {
      iVar4 = param_2 + 0xc;
      iVar3 = param_2;
      do {
        *(undefined4 *)(iVar3 + 8) = 0;
        lVar1 = FUN_00312880(iVar4);
        uVar2 = uVar2 + 1;
        if (lVar1 == 0) goto LAB_00311f90;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + 0x14;
      } while (uVar2 < param_3);
    }
    uVar2 = 0;
    if (param_5 != 0) {
      iVar4 = param_4 + 0xc;
      iVar3 = param_4;
      do {
        *(undefined4 *)(iVar3 + 8) = 0;
        lVar1 = FUN_00312880(iVar4);
        uVar2 = uVar2 + 1;
        if (lVar1 == 0) goto LAB_00311f90;
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + 0x14;
      } while (uVar2 < param_5);
    }
    *(int *)(iVar5 + 0x10) = param_2;
    *(int *)(iVar5 + 0xc) = param_4;
    *(short *)(iVar5 + 0x14) = (short)param_3;
    *(short *)(iVar5 + 0x16) = (short)param_5;
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | 1;
  }
  return param_1;
}


// ==== FUN_00312000 @ 00312000 ====
// GLOBAL PTR_DAT_003cea60 pointer
// GLOBAL DAT_003cea64 undefined4

long FUN_00312000(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar3 = FUN_00312db8();
  if (param_4 == 0) {
    param_4 = FUN_00317a78(0x455fe0,0x30803);
    *(undefined4 *)((int)param_4 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)((int)param_4 + 0x1c) = 1;
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    iVar7 = (int)param_4;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(undefined4 *)(iVar7 + 0x10) = 0;
    if (param_5 == 0) {
      if (param_2 != 0) {
        iVar2 = FUN_00312db8(param_1);
        uVar5 = 0;
        piVar6 = &DAT_003cea64;
        do {
          if (*piVar6 == iVar2) {
            lVar4 = FUN_00317a78((&PTR_DAT_003cea60)[uVar5 * 2],0x30803);
            *(int *)(iVar7 + 0xc) = (int)lVar4;
            goto LAB_00312144;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 < 5);
        lVar4 = 0;
        *(undefined4 *)(iVar7 + 0xc) = 0;
LAB_00312144:
        if (lVar4 == 0) {
          FUN_00312938(param_4);
        }
      }
      if (param_3 != 0) {
        iVar2 = FUN_00312db8(param_1);
        uVar5 = 0;
        piVar6 = &DAT_003cea64;
        do {
          if (*piVar6 == iVar2) {
            lVar4 = FUN_00317a78((&PTR_DAT_003cea60)[uVar5 * 2],0x30803);
            *(int *)(iVar7 + 0x10) = (int)lVar4;
            goto LAB_0031219c;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 < 5);
        lVar4 = 0;
        *(undefined4 *)(iVar7 + 0x10) = 0;
LAB_0031219c:
        if (lVar4 == 0) {
          FUN_00312900(param_4);
          FUN_00312938(param_4);
        }
      }
    }
    else {
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 2;
      iVar2 = (int)param_5;
      if (param_2 == 0) {
        if (param_3 != 0) {
          *(int *)(iVar7 + 0x10) = iVar2;
        }
      }
      else {
        *(int *)(iVar7 + 0xc) = iVar2;
        if (param_3 != 0) {
          iVar1 = FUN_00312db8(param_1);
          *(int *)(iVar7 + 0x10) = iVar2 + iVar1;
        }
      }
    }
    if (param_2 != 0) {
      memcpy(*(undefined4 *)(iVar7 + 0xc),param_2,uVar3);
    }
    if (param_3 != 0) {
      memcpy(*(undefined4 *)(iVar7 + 0x10),param_3,uVar3);
    }
    FUN_00316758(param_4);
    *(int *)(iVar7 + 0x14) = (int)param_1;
    *(undefined4 *)(iVar7 + 0x18) = 0;
    FUN_00312a40(0x455fd0,param_4);
  }
  return param_4;
}


// ==== FUN_00312228 @ 00312228 ====
// GLOBAL PTR_DAT_003cea60 pointer
// GLOBAL DAT_003cea64 undefined4

void FUN_00312228(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  while (lVar3 = FUN_00312b40(0x455fd0,param_1), lVar3 != 0) {
    if (param_2 == 1) {
      FUN_00312228(lVar3,1);
    }
  }
  iVar2 = (int)param_1;
  if ((*(uint *)(iVar2 + 0x14) & 0x1000) == 0) {
    uVar4 = *(uint *)(iVar2 + 0x1c);
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x1c);
  }
  if ((uVar4 & 1) == 0) {
    FUN_00317c20(0x455fe0,param_1);
  }
  FUN_00312a80(0x455fd0,param_1);
  FUN_00316668(param_1);
  if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
    iVar6 = *(int *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar2 + 0x10);
    }
    else {
      iVar1 = FUN_00312db8(*(undefined4 *)(iVar2 + 0x14));
      uVar4 = 0;
      piVar5 = &DAT_003cea64;
      do {
        if (*piVar5 == iVar1) {
          FUN_00317c20((&PTR_DAT_003cea60)[uVar4 * 2],iVar6);
          iVar6 = *(int *)(iVar2 + 0x10);
          goto LAB_00312358;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 < 5);
      iVar6 = *(int *)(iVar2 + 0x10);
    }
LAB_00312358:
    if (iVar6 != 0) {
      iVar2 = FUN_00312db8(*(undefined4 *)(iVar2 + 0x14));
      uVar4 = 0;
      piVar5 = &DAT_003cea64;
      do {
        if (*piVar5 == iVar2) {
          FUN_00317c20((&PTR_DAT_003cea60)[uVar4 * 2],iVar6);
          return;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 < 5);
    }
  }
  return;
}


// ==== FUN_003123b8 @ 003123b8 ====
// GLOBAL PTR_DAT_003cea60 pointer
// GLOBAL DAT_003cea64 undefined4
// GLOBAL null undefined4
// GLOBAL null undefined4

undefined4 FUN_003123b8(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 0;
  FUN_00312a10(0x455fd0);
  iVar1 = 0;
  do {
    lVar3 = FUN_00317e40(*(undefined4 *)((int)&DAT_003cea64 + iVar1),8,0x40,0,
                         *(undefined4 *)((int)&PTR_DAT_003cea60 + iVar1),0x40803);
    if (lVar3 == 0) {
      uVar2 = uVar4;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      else {
        do {
          uVar4 = uVar2;
          uVar2 = uVar4 - 1;
          FUN_00317fc0((&PTR_DAT_003cea60)[uVar2 * 2]);
        } while (uVar2 != 0);
      }
    }
    else {
      uVar4 = uVar4 + 1;
    }
    iVar1 = uVar4 << 3;
  } while (uVar4 < 5);
  uGpffff8f48 = 0;
  uGpffff8908 = 1;
  lVar3 = FUN_00317e40(0x28,0x10,0x40,0,0x455fe0,0x40803);
  if (lVar3 != 0) {
    lVar3 = FUN_003128d8();
    if (lVar3 == 1) {
      return 1;
    }
    FUN_00317fc0(0x455fe0);
  }
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    FUN_00317fc0((&PTR_DAT_003cea60)[uVar4 * 2]);
  }
  uGpffff8908 = 0;
  return 0;
}


// ==== FUN_00312510 @ 00312510 ====

undefined8 FUN_00312510(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uStack_b0;
  undefined4 auStack_ac [3];
  
  uVar13 = 0;
  if (param_2 != 0) {
    iVar14 = -0x10;
    iVar3 = 0;
    do {
      puVar11 = (undefined4 *)((int)param_1 + iVar3);
      iVar3 = puVar11[1];
      if (iVar3 == 0x2000) {
        uVar12 = 0x2000;
        lVar6 = FUN_00312ad0(0x455fd0,puVar11[5]);
        auStack_ac[0] = puVar11[2];
        uStack_b0 = 0;
        lVar7 = FUN_00312000(0x2000,&uStack_b0,auStack_ac,puVar11[6],puVar11[7]);
        lVar8 = 0;
        if (lVar7 != 0) {
          iVar3 = (int)lVar7;
          if (lVar6 == 0) {
            uVar1 = *(uint *)(iVar3 + 0x14);
          }
          else {
            uVar12 = *(uint *)((int)lVar6 + 0x14);
            *(int *)(iVar3 + 0x18) = (int)lVar6;
            uVar12 = uVar12 | 0x4000;
            uVar1 = *(uint *)(iVar3 + 0x14);
          }
          *(uint *)(iVar3 + 0x14) = uVar1 | uVar12;
          lVar8 = lVar7;
        }
      }
      else if (iVar3 == 0x4000) {
        iVar4 = FUN_00312ad0(0x455fd0,puVar11[5]);
        iVar5 = FUN_00312db8(*(undefined4 *)(iVar4 + 0x14));
        iVar3 = puVar11[3];
        iVar5 = iVar3 + iVar5;
        iVar10 = puVar11[6];
        if ((iVar3 == 0) && (iVar10 != 0)) {
          iVar3 = *(int *)(iVar4 + 0xc);
          iVar10 = *(int *)(iVar4 + 0x18);
          do {
            if (iVar3 != 0) break;
          } while (iVar10 != 0);
        }
        if ((iVar5 == 0) && (iVar10 != 0)) {
          iVar5 = *(int *)(iVar4 + 0x10);
          iVar10 = *(int *)(iVar4 + 0x18);
          do {
            if (iVar5 != 0) break;
          } while (iVar10 != 0);
        }
        lVar8 = FUN_00312000(*(undefined4 *)(iVar4 + 0x14),iVar3,iVar5,iVar10,puVar11[7]);
        if (lVar8 == 0) {
LAB_003126d4:
          lVar8 = 0;
        }
        else {
          iVar3 = (int)lVar8;
          *(int *)(iVar3 + 0x18) = iVar4;
          *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 0x4000;
        }
      }
      else if (iVar3 == 0x1000) {
        lVar8 = 0;
        if (puVar11[5] != 0) {
          lVar8 = FUN_00312ad0(0x455fd0);
        }
        if (lVar8 == 0) {
          lVar8 = FUN_00312000(0x1000,0,0,puVar11[6],puVar11[7]);
        }
        else {
          iVar3 = (int)lVar8;
          lVar8 = FUN_00312000(0x1000,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                               puVar11[6],puVar11[7]);
          if (lVar8 == 0) goto LAB_003126d4;
          *(int *)((int)lVar8 + 0x18) = iVar3;
        }
      }
      else {
        lVar8 = FUN_00312000(iVar3,puVar11[3],puVar11[3] + puVar11[2],puVar11[6],puVar11[7]);
      }
      if (lVar8 == 0) {
        if (uVar13 != 0) {
          puVar11 = (undefined4 *)(iVar14 + (int)param_1);
          uVar2 = *puVar11;
          while( true ) {
            puVar11 = puVar11 + -8;
            uVar13 = uVar13 - 1;
            uVar9 = FUN_00312ad0(0x455fd0,uVar2);
            FUN_00312228(uVar9,1);
            if (uVar13 == 0) break;
            uVar2 = *puVar11;
          }
        }
        return 0;
      }
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + 0x20;
      FUN_00316618(lVar8,puVar11[4]);
      FUN_003165c8(lVar8,*puVar11);
      iVar3 = uVar13 * 0x20;
    } while (uVar13 < param_2);
  }
  return param_1;
}


// ==== FUN_00312880 @ 00312880 ====

undefined8 FUN_00312880(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  if (puVar2[1] == 1) {
    lVar1 = FUN_00312ad0(0x455fd0,*puVar2);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      *puVar2 = (int)lVar1;
      puVar2[1] = 0;
    }
  }
  return param_1;
}


// ==== FUN_003128d8 @ 003128d8 ====

bool FUN_003128d8(void)

{
  long lVar1;
  
  lVar1 = FUN_00312510(0x3cea88,0xf);
  return lVar1 != 0;
}


// ==== FUN_00312900 @ 00312900 ====

void FUN_00312900(int param_1)

{
  if ((*(uint *)(param_1 + 0x1c) & 1) == 0) {
    FUN_00317c20(0x455fe0);
  }
  return;
}


// ==== FUN_00312938 @ 00312938 ====
// GLOBAL PTR_DAT_003cea60 pointer

void FUN_00312938(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x1c) & 2) == 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      puVar1 = (undefined *)FUN_00312db8(*(undefined4 *)(param_1 + 0x14));
      uVar2 = 0;
      ppuVar3 = &PTR_DAT_003cea60;
      do {
        uVar2 = uVar2 + 1;
        if (ppuVar3[1] == puVar1) {
          FUN_00317c20(*ppuVar3,iVar4);
          iVar4 = *(int *)(param_1 + 0x10);
          goto LAB_003129b0;
        }
        ppuVar3 = ppuVar3 + 2;
      } while (uVar2 < 5);
      iVar4 = *(int *)(param_1 + 0x10);
    }
LAB_003129b0:
    if (iVar4 != 0) {
      puVar1 = (undefined *)FUN_00312db8(*(undefined4 *)(param_1 + 0x14));
      uVar2 = 0;
      ppuVar3 = &PTR_DAT_003cea60;
      do {
        uVar2 = uVar2 + 1;
        if (ppuVar3[1] == puVar1) {
          FUN_00317c20(*ppuVar3,iVar4);
          return;
        }
        ppuVar3 = ppuVar3 + 2;
      } while (uVar2 < 5);
    }
  }
  return;
}


// ==== FUN_00312a10 @ 00312a10 ====

void FUN_00312a10(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  return;
}


// ==== FUN_00312a28 @ 00312a28 ====

void FUN_00312a28(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  return;
}


// ==== FUN_00312a40 @ 00312a40 ====

undefined8 FUN_00312a40(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  iVar1 = piVar2[1];
  *(int **)(param_2 + 0x24) = piVar2 + 1;
  *(int *)(param_2 + 0x20) = iVar1;
  *(int *)(piVar2[1] + 4) = param_2 + 0x20;
  piVar2[1] = param_2 + 0x20;
  *piVar2 = *piVar2 + 1;
  return param_1;
}


// ==== FUN_00312a80 @ 00312a80 ====

undefined8 FUN_00312a80(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  for (piVar1 = (int *)piVar2[1]; (piVar1 != piVar2 + 1 && (piVar1 + -8 != param_2));
      piVar1 = (int *)*piVar1) {
  }
  *piVar2 = *piVar2 + -1;
  *(int *)param_2[9] = param_2[8];
  *(int *)(param_2[8] + 4) = param_2[9];
  return param_1;
}


// ==== FUN_00312ad0 @ 00312ad0 ====

int * FUN_00312ad0(int param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    lVar1 = FUN_00316400(piVar2[-8],param_2);
    if (lVar1 == 0) {
      return piVar2 + -8;
    }
    piVar2 = (int *)*piVar2;
  } while (piVar2 != (int *)(param_1 + 4));
  return (int *)0x0;
}


// ==== FUN_00312b40 @ 00312b40 ====

int * FUN_00312b40(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  do {
    if (piVar1[-2] == param_2) {
      return piVar1 + -8;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)(param_1 + 4));
  return (int *)0x0;
}


// ==== FUN_00312b78 @ 00312b78 ====

int * FUN_00312b78(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 <= *param_1) && (*param_1 != 0)) {
    piVar1 = (int *)param_1[1];
    iVar2 = 0;
    if (0 < param_2) {
      do {
        piVar1 = (int *)*piVar1;
        iVar2 = iVar2 + 1;
        if (piVar1 == param_1 + 1) {
          return (int *)0x0;
        }
      } while (iVar2 < param_2);
    }
    return piVar1 + -8;
  }
  return (int *)0x0;
}


// ==== FUN_00312bc8 @ 00312bc8 ====

void FUN_00312bc8(void)

{
  return;
}


// ==== FUN_00312bd0 @ 00312bd0 ====
// GLOBAL DAT_003cec68 undefined
// GLOBAL FUN_00312d28 undefined
// GLOBAL DAT_003cec70 undefined8
// GLOBAL FUN_00312d48 undefined
// GLOBAL DAT_0044954c undefined_*
// GLOBAL FUN_00312d68 undefined
// GLOBAL DAT_00449540 undefined_*
// GLOBAL DAT_00449544 undefined_*
// GLOBAL FUN_0035e828 undefined
// GLOBAL DAT_00449548 undefined_*

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00312bd0(long param_1)

{
  if (param_1 != 0) {
    _DAT_003cec68 = *(undefined8 *)param_1;
    DAT_003cec70 = ((undefined8 *)param_1)[1];
    return 1;
  }
  DAT_0044954c = FUN_00312d68;
  DAT_00449540 = FUN_00312d28;
  DAT_00449544 = FUN_0035e828;
  DAT_00449548 = FUN_00312d48;
  return 1;
}


// ==== FUN_00312c48 @ 00312c48 ====
// GLOBAL DAT_003cec68 undefined_*

void FUN_00312c48(int param_1)

{
  (*DAT_003cec68)(param_1 + 0x40);
  return;
}


// ==== FUN_00312c70 @ 00312c70 ====
// GLOBAL DAT_003cec6c undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00312c70(void)

{
  (*_DAT_003cec6c)();
  return;
}


// ==== FUN_00312ca0 @ 00312ca0 ====
// GLOBAL DAT_003cec70 undefined

void FUN_00312ca0(void)

{
  (*DAT_003cec70._4_4_)();
  return;
}


// ==== FUN_00312cc8 @ 00312cc8 ====
// GLOBAL DAT_003cec68 undefined_*

uint FUN_00312cc8(int param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = (*DAT_003cec68)(param_1 + 0x80);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = (int)lVar2 + 0x40U & 0xffffffc0;
    *(int *)(uVar1 - 4) = (int)lVar2;
  }
  return uVar1;
}


// ==== FUN_00312d08 @ 00312d08 ====

void FUN_00312d08(int param_1)

{
  FUN_00312c70(*(undefined4 *)(param_1 + -4));
  return;
}


// ==== FUN_00312d28 @ 00312d28 ====

void FUN_00312d28(void)

{
  FUN_0035e7d8();
  return;
}


// ==== FUN_00312d48 @ 00312d48 ====

void FUN_00312d48(void)

{
  FUN_0035f660();
  return;
}


// ==== FUN_00312d68 @ 00312d68 ====

long FUN_00312d68(int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0035e7d8(param_1 * param_2);
  if (lVar1 != 0) {
    memset(lVar1,0,param_1 * param_2);
  }
  return lVar1;
}


// ==== FUN_00312db8 @ 00312db8 ====

undefined4 FUN_00312db8(uint param_1)

{
  if (param_1 == 0x40) {
    return 8;
  }
  if (param_1 < 0x41) {
    if (param_1 == 4) {
      return 2;
    }
    if (param_1 < 5) {
      if ((param_1 == 1) || (param_1 == 2)) {
        return 1;
      }
    }
    else {
      if (param_1 == 0x10) {
        return 4;
      }
      if (param_1 < 0x11) {
        if (param_1 == 8) {
          return 2;
        }
      }
      else if (param_1 == 0x20) {
        return 4;
      }
    }
    return 0;
  }
  if (param_1 == 0x400) {
    return 4;
  }
  if (0x400 < param_1) {
    if (param_1 == 0x1000) {
      return 4;
    }
    if (param_1 < 0x1001) {
      if (param_1 != 0x800) {
        return 0;
      }
      return 4;
    }
    if (param_1 != 0x2000) {
      return 0;
    }
    return 4;
  }
  if (param_1 == 0x100) {
    return 0x10;
  }
  if (param_1 < 0x101) {
    if (param_1 != 0x80) {
      return 0;
    }
    return 8;
  }
  if (param_1 != 0x200) {
    return 0;
  }
  return 0x10;
}


// ==== FUN_00312ee0 @ 00312ee0 ====
// GLOBAL DAT_003cec70 undefined8
// GLOBAL PTR_FUN_003cec78 undefined_*
// GLOBAL null int
// GLOBAL null undefined4
// GLOBAL null undefined4
// GLOBAL null undefined4
// GLOBAL null undefined4

bool FUN_00312ee0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  FUN_00313120(0x10);
  iVar1 = 0;
  uGpffff8958 = param_1;
  uGpffff8968 = param_2;
  do {
    lVar2 = (**(code **)((int)&PTR_FUN_003cec78 + iVar1))();
    if (lVar2 == 0) {
LAB_00312f68:
      iVar1 = 0;
      if (uVar4 != 0) {
        do {
          uVar3 = uVar4 - 1;
          (**(code **)((int)&DAT_003cec70 + uVar4 * 8 + 4))();
          FUN_00313248(&DAT_003cec70 + uVar4,uVar3);
          uVar4 = uVar3;
        } while (uVar3 != 0);
        iVar1 = 0;
      }
      goto LAB_00312fc0;
    }
    lVar2 = FUN_003131f8((undefined4 *)((int)&PTR_FUN_003cec78 + iVar1),uVar4);
    uVar4 = uVar4 + 1;
    if (lVar2 == 0) goto LAB_00312f68;
    iVar1 = uVar4 * 8;
  } while (uVar4 < 0x11);
  iVar1 = 1;
LAB_00312fc0:
  if (iVar1 == 1) {
    uGpffff8964 = 0;
    uGpffff8960 = 0;
    iGpffff8950 = iVar1;
    FUN_0031ce58(0x2000);
  }
  return iVar1 == 1;
}


// ==== FUN_00313008 @ 00313008 ====
// GLOBAL null undefined4

void FUN_00313008(void)

{
  undefined8 uVar1;
  
  uGpffff8964 = 1;
  FUN_003174f0();
  uVar1 = FUN_00311430();
  FUN_00311300(uVar1,0);
  FUN_003168c8();
  return;
}


// ==== FUN_00313048 @ 00313048 ====
// GLOBAL null int
// GLOBAL null undefined4

void FUN_00313048(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00311430();
  FUN_00311398(uVar1,0);
  uGpffff8964 = 0;
  iGpffff8960 = iGpffff8960 + 1;
  return;
}


// ==== FUN_00313098 @ 00313098 ====
// GLOBAL null undefined4

undefined4 FUN_00313098(void)

{
  return uGpffff8960;
}


// ==== FUN_003130a0 @ 003130a0 ====

undefined4 FUN_003130a0(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00311a70(0x3ced08,3);
  uVar1 = 0;
  if (lVar2 == 1) {
    lVar2 = FUN_0031e000(0x3ced00,1);
    if (lVar2 == 1) {
      lVar2 = FUN_003155e0(0x3ced18,1);
      uVar1 = 1;
      if (lVar2 != 1) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00313120 @ 00313120 ====
// GLOBAL null undefined4

ulong FUN_00313120(ulong param_1)

{
  if (0xf < param_1) {
    uGpffff8f80 = (int)param_1;
    return param_1;
  }
  uGpffff8f80 = 0x10;
  return 0x10;
}


// ==== FUN_00313148 @ 00313148 ====
// GLOBAL null undefined4
// GLOBAL null int

undefined4 FUN_00313148(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 auStack_20 [4];
  
  if (iGpffff8968 == 0) {
    lVar2 = FUN_002a9cb8(uGpffff8958,0,0x400);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      auStack_20[0] = 0;
      lVar2 = FUN_002a9b70(auStack_20);
      if (lVar2 != 0) {
        lVar2 = FUN_002a99d8();
        if (lVar2 != 0) {
          return 1;
        }
        FUN_002a9ae8();
      }
      FUN_002a9e38();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_003131c0 @ 003131c0 ====
// GLOBAL null int

void FUN_003131c0(void)

{
  if (iGpffff8968 == 0) {
    FUN_002a9910();
    FUN_002a9ae8();
    FUN_002a9e38();
  }
  return;
}


// ==== FUN_003131f8 @ 003131f8 ====
// GLOBAL null int
// GLOBAL FUN_00313148 undefined

bool FUN_003131f8(int *param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = true;
  if ((code *)*param_1 == FUN_00313148) {
    if (iGpffff8958 == 0) {
      iGpffff8958 = FUN_002a65e0();
    }
    lVar2 = FUN_00312bd0(iGpffff8958);
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}


// ==== FUN_00313248 @ 00313248 ====
// GLOBAL FUN_003131c0 undefined

void FUN_00313248(int param_1)

{
  if (*(code **)(param_1 + 4) == FUN_003131c0) {
    FUN_00312bc8();
  }
  return;
}


// ==== FUN_00313278 @ 00313278 ====
// GLOBAL null undefined4

undefined8 FUN_00313278(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  piVar5 = (int *)param_1;
  iVar6 = piVar5[1];
  bVar7 = false;
  if ((iVar6 == 0) || (lVar4 = FUN_00313ea8(iVar6), lVar4 != 0)) {
    iVar3 = piVar5[4];
    if (piVar5[0xb] == 0x30) {
      bVar7 = *(char *)(iVar3 + 4) != '\0';
      if (bVar7) {
        FUN_00313650(iVar3);
      }
      uVar1 = *(uint *)(iVar3 + 8);
      if ((uint)piVar5[9] < uVar1) {
        if ((piVar5[6] & 0x20U) == 0) {
          iVar3 = FUN_00312cc8(uVar1,0x30808);
          memcpy(iVar3,piVar5[4],piVar5[5]);
          FUN_00312d08(piVar5[4]);
          piVar5[4] = iVar3;
          piVar5[5] = *(int *)(iVar3 + 8);
        }
        else if ((uint)piVar5[5] < uVar1) {
          piVar5[0xb] = 0x2000;
          return param_1;
        }
        FUN_00324ba0(iVar6,piVar5[4] + piVar5[9],*(int *)(iVar3 + 8) - piVar5[9],0,0,0);
        piVar5[0xb] = 0x50;
        piVar5[9] = piVar5[5];
        return param_1;
      }
      iVar6 = *(int *)(iVar3 + 0xc);
    }
    else {
      if (piVar5[0xb] != 0x50) {
        return param_1;
      }
      iVar6 = *(int *)(iVar3 + 0xc);
    }
    iVar6 = piVar5[4] + iVar6;
    piVar5[2] = piVar5[9];
    *piVar5 = iVar6;
    piVar5[3] = *(int *)(iVar3 + 0x14);
    iVar2 = *(int *)(iVar3 + 0x14);
    piVar5[0xe] = 0;
    piVar5[10] = iVar2;
    piVar5[0xf] = 0;
    uStack_60 = *(undefined4 *)(iVar6 + 0xc);
    uStack_5c = *(undefined4 *)(iVar6 + 0x10);
    uStack_58 = *(undefined4 *)(iVar6 + 0x14);
    FUN_00314278(iVar6);
    *(char *)(iVar6 + 0x1b) = (char)piVar5[6];
    *(undefined4 *)(iVar6 + 0xc) = uStack_60;
    *(undefined4 *)(iVar6 + 0x10) = uStack_5c;
    *(undefined4 *)(iVar6 + 0x14) = uStack_58;
    *(int *)(iVar6 + 0x24) = piVar5[4];
    FUN_003137d8(iVar6,piVar5[4],bVar7);
    FUN_00316400(uGpffff896c,iVar3 + 0x18);
    iStack_6c = piVar5[0xc];
    uStack_70 = 1;
    FUN_003143d8(iVar6,0x313f00,&uStack_70);
    if ((piVar5[0xc] & 4U) == 0) {
      piVar5[0xb] = 0x70;
      if (piVar5[7] == 0) {
        iVar3 = FUN_00313c90(iVar6,piVar5[3]);
        piVar5[7] = iVar3;
        *(byte *)(iVar6 + 0x1b) = *(byte *)(iVar6 + 0x1b) | 0x40;
      }
      else {
        *(int *)(iVar6 + 0x28) = piVar5[7];
        *(int *)(iVar6 + 0x2c) = piVar5[8];
      }
      FUN_003134e0(param_1);
    }
    else {
      piVar5[0xb] = 0x300;
    }
  }
  return param_1;
}


// ==== FUN_003134e0 @ 003134e0 ====
// GLOBAL null uint

undefined8 FUN_003134e0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar2 = 0;
  puVar5 = (undefined4 *)param_1;
  uVar4 = puVar5[10];
  lVar3 = FUN_00313ea8(puVar5[1]);
  if (lVar3 == 0) {
    return param_1;
  }
  uVar6 = puVar5[0x11];
  if (uVar6 == 2) {
    uVar6 = puVar5[0xd];
    if (uVar4 < (uint)puVar5[0xd]) {
      uVar6 = uVar4;
    }
    lVar3 = FUN_00324d98(puVar5[1],0);
    if (lVar3 != 0) {
      FUN_00324a88(puVar5[1],puVar5[7],puVar5[9],puVar5[3],0,0,0);
      uVar2 = uVar6;
    }
  }
  else {
    if (uVar6 < 3) {
      if (uVar6 == 1) {
        uVar2 = puVar5[0xd];
        if (uVar4 < (uint)puVar5[0xd]) {
          uVar2 = uVar4;
        }
        FUN_00324ba0(puVar5[1],puVar5[7],uVar2,0,0,0);
        iVar1 = puVar5[9];
      }
      else {
        iVar1 = puVar5[9];
      }
      goto LAB_0031360c;
    }
    if (uVar6 != 3) {
      iVar1 = puVar5[9];
      goto LAB_0031360c;
    }
    iVar1 = FUN_00314488(*puVar5,0);
    uVar2 = uGpffff8974;
    if ((uint)puVar5[0xd] <= uGpffff8974) {
      uVar2 = puVar5[0xd];
    }
    if (uVar2 <= uVar4) {
      uVar4 = uVar2;
    }
    uVar2 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x28))(puVar5[1],puVar5[7],puVar5[0x10],uVar4);
  }
  iVar1 = puVar5[9];
LAB_0031360c:
  puVar5[9] = iVar1 + uVar2;
  puVar5[0x10] = puVar5[0x10] + uVar2;
  puVar5[10] = puVar5[10] - uVar2;
  return param_1;
}


// ==== FUN_00313650 @ 00313650 ====

void FUN_00313650(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 *apuStack_40 [4];
  
  apuStack_40[0] = &uStack_70;
  FUN_00318600(apuStack_40,param_1,4);
  puVar2 = (undefined8 *)param_1;
  *(undefined1 *)apuStack_40[0] = *(undefined1 *)((int)puVar2 + 4);
  *(undefined1 *)((int)apuStack_40[0] + 1) = *(undefined1 *)((int)puVar2 + 5);
  *(undefined1 *)((int)apuStack_40[0] + 2) = *(undefined1 *)((int)puVar2 + 6);
  *(undefined1 *)((int)apuStack_40[0] + 3) = *(undefined1 *)((int)puVar2 + 7);
  apuStack_40[0] = (undefined8 *)((int)apuStack_40[0] + 4);
  FUN_00318600(apuStack_40,puVar2 + 1,4);
  FUN_00318600(apuStack_40,(int)puVar2 + 0xc,4);
  FUN_00318600(apuStack_40,puVar2 + 2,4);
  FUN_00318600(apuStack_40,(int)puVar2 + 0x14,4);
  FUN_00316438(puVar2 + 3);
  uVar1 = puVar2[4];
  *apuStack_40[0] = puVar2[3];
  apuStack_40[0][1] = uVar1;
  apuStack_40[0] = apuStack_40[0] + 2;
  FUN_00318600(apuStack_40,puVar2 + 5,4);
  *puVar2 = uStack_70;
  puVar2[1] = uStack_68;
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_58;
  puVar2[4] = uStack_50;
  *(undefined4 *)(puVar2 + 5) = uStack_48;
  return;
}


// ==== FUN_003137d8 @ 003137d8 ====

void FUN_003137d8(int param_1,int param_2,long param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_3 != 0) {
    FUN_003164d0();
    FUN_003182c8(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  piVar3 = *(int **)(param_1 + 0x10);
  do {
    if (param_3 != 0) {
      FUN_003182c8(piVar3);
    }
    if (piVar3[2] != 0) {
      piVar3[2] = piVar3[2] + param_2;
    }
    if (piVar3[1] != 0) {
      piVar3[1] = piVar3[1] + param_2;
    }
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + param_2;
    }
    piVar4 = (int *)piVar3[1];
    piVar5 = (int *)piVar3[2];
    if (param_3 != 0) {
      FUN_00315b60(piVar5);
    }
    if (*piVar5 != 0) {
      *piVar5 = *piVar5 + param_2;
    }
    if (piVar5[1] != 0) {
      piVar5[1] = piVar5[1] + param_2;
    }
    if (piVar5[0x14] != 0) {
      piVar5[0x14] = piVar5[0x14] + param_2;
    }
    if (piVar5[8] != 0) {
      piVar5[8] = piVar5[8] + param_2;
    }
    if (piVar5[0xf] != 0) {
      piVar5[0xf] = piVar5[0xf] + param_2;
    }
    iVar6 = FUN_00315168(piVar5[5]);
    piVar5[5] = iVar6;
    iVar6 = FUN_00315168(piVar5[0xc]);
    bVar1 = piVar3 != piVar2;
    piVar5[0xc] = iVar6;
    piVar3 = piVar4;
  } while (bVar1);
  return;
}


// ==== FUN_00313948 @ 00313948 ====

void FUN_00313948(int param_1)

{
  FUN_003143d8(param_1,0x313f50,*(undefined4 *)(param_1 + 0x28));
  return;
}


// ==== FUN_00313970 @ 00313970 ====

void FUN_00313970(undefined8 param_1)

{
  FUN_003143d8(param_1,0x313f90,*(undefined4 *)((int)param_1 + 0x28));
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  return;
}


// ==== FUN_003139a8 @ 003139a8 ====

long FUN_003139a8(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7,long param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  if (param_8 == 0) {
    param_8 = FUN_00312c48(0x48,0x30808);
    *(undefined4 *)((int)param_8 + 0x30) = 2;
    FUN_00313c48(param_8);
    if (param_8 != 0) goto LAB_00313a18;
LAB_00313a28:
    uVar2 = FUN_00324990(param_1);
    *(undefined4 *)((int)param_8 + 4) = uVar2;
    iVar1 = *(int *)((int)param_8 + 4);
  }
  else {
LAB_00313a18:
    if (*(int *)((int)param_8 + 0x2c) != 2) goto LAB_00313a28;
    iVar1 = *(int *)((int)param_8 + 4);
  }
  if (iVar1 == 0) {
    return param_8;
  }
  lVar3 = FUN_00324d98(iVar1,0);
  uVar2 = 2;
  iVar4 = (int)param_8;
  if (lVar3 == 0) {
LAB_00313a8c:
    *(undefined4 *)(iVar4 + 0x2c) = uVar2;
  }
  else {
    if (param_2 == 0) {
      param_3 = 0x800;
      param_2 = FUN_00312cc8(0x800,0x30808);
      *(undefined4 *)(iVar4 + 0x18) = 0x10;
    }
    else {
      uVar2 = 0x2000;
      if (param_3 < 0x800) goto LAB_00313a8c;
      *(undefined4 *)(iVar4 + 0x18) = 0x20;
    }
    FUN_00324ba0(iVar1,param_2,0x800,0,0,0);
    *(undefined4 *)(iVar4 + 0x24) = 0x800;
    *(undefined4 *)(iVar4 + 0x2c) = 0x30;
    *(int *)(iVar4 + 0x10) = (int)param_2;
    *(undefined4 *)(iVar4 + 0x1c) = param_4;
    *(int *)(iVar4 + 0x14) = (int)param_3;
    *(undefined4 *)(iVar4 + 0x20) = param_5;
    *(undefined4 *)(iVar4 + 0x34) = param_7;
    *(undefined4 *)(iVar4 + 0x44) = 3;
  }
  return param_8;
}


// ==== FUN_00313b18 @ 00313b18 ====

undefined4 FUN_00313b18(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  uVar1 = puVar4[0xb];
  if ((uVar1 == 0x100) || (0x100 < uVar1)) {
LAB_00313bd4:
    uVar2 = puVar4[0xb];
  }
  else {
    if (uVar1 != 0x30) {
      if (uVar1 < 0x31) {
        return puVar4[0xb];
      }
      if (uVar1 != 0x50) {
        if (uVar1 != 0x70) {
          return puVar4[0xb];
        }
        if (puVar4[10] != 0) {
          FUN_003134e0(param_1);
          return puVar4[0xb];
        }
        lVar3 = FUN_00313ea8(puVar4[1]);
        if (lVar3 == 0) {
          return puVar4[0xb];
        }
        if ((puVar4[0xc] & 4) == 0) {
          FUN_00313948(*puVar4);
          FUN_003249e8(puVar4[1]);
          puVar4[0xb] = 0x100;
        }
        else {
          puVar4[0xb] = 0x500;
        }
        goto LAB_00313bd4;
      }
    }
    FUN_00313278(param_1);
    uVar2 = puVar4[0xb];
  }
  return uVar2;
}


// ==== FUN_00313bf0 @ 00313bf0 ====

long FUN_00313bf0(long param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_00312c48(0x48,0x30808);
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)((int)param_1 + 0x30) = uVar1;
  FUN_00313c48(param_1);
  return param_1;
}


// ==== FUN_00313c48 @ 00313c48 ====

void FUN_00313c48(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xb] = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x10] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  return;
}


// ==== FUN_00313c90 @ 00313c90 ====

long FUN_00313c90(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  int iStack_84;
  undefined4 uStack_5c;
  
  puVar5 = &uStack_90;
  puVar2 = (undefined8 *)FUN_00314488(param_1,0);
  if (((uint)puVar2 & 7) == 0) {
    puVar3 = puVar2 + 8;
    puVar5 = &uStack_90;
    do {
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *puVar5 = *puVar2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar2 = puVar2 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar2 != puVar3);
  }
  else {
    puVar3 = puVar2 + 8;
    do {
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *puVar5 = *puVar2;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar2 = puVar2 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar2 != puVar3);
  }
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar1 = *(undefined4 *)(puVar2 + 3);
  *puVar5 = *puVar2;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  *(undefined4 *)(puVar5 + 3) = uVar1;
  uStack_5c = param_2;
  lVar4 = (**(code **)(iStack_84 + 0x20))(&uStack_90);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    *(int *)((int)param_1 + 0x28) = (int)lVar4;
    *(undefined4 *)((int)param_1 + 0x2c) = uStack_5c;
  }
  return lVar4;
}


// ==== FUN_00313dc8 @ 00313dc8 ====

void FUN_00313dc8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_90 [41];
  undefined1 uStack_67;
  undefined4 uStack_5c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar2 = (int)param_1;
  if ((*(byte *)(iVar2 + 0x1a) & 1) == 0) {
    iVar1 = FUN_00314488(param_1,0);
    uStack_44 = *(undefined4 *)(iVar2 + 0x28);
    uStack_5c = *(undefined4 *)(iVar2 + 0x2c);
    uStack_67 = 0;
    uStack_40 = 0;
    FUN_00313970(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x24))(auStack_90);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  else {
    FUN_003143d8(param_1,0x313ec8,0);
  }
  return;
}


// ==== FUN_00313e60 @ 00313e60 ====

void FUN_00313e60(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | *(byte *)(param_2 + 2);
  return;
}


// ==== FUN_00313e88 @ 00313e88 ====

void FUN_00313e88(void)

{
  FUN_00324e38();
  return;
}


// ==== FUN_00313ea8 @ 00313ea8 ====

void FUN_00313ea8(undefined8 param_1)

{
  FUN_00324d98(param_1,0);
  return;
}


// ==== FUN_00313ec8 @ 00313ec8 ====

undefined8 FUN_00313ec8(undefined8 param_1)

{
  (**(code **)(*(int *)((int)param_1 + 0xc) + 0x24))();
  return param_1;
}


// ==== FUN_00313f00 @ 00313f00 ====

void FUN_00313f00(undefined8 param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 == 0) {
    *(undefined4 *)((int)param_1 + 0x50) = 0;
  }
  uVar1 = param_2[1];
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)((int)param_1 + 0x54);
  }
  FUN_00315de8(0,0,0,0,uVar1 & 2,param_1);
  return;
}


// ==== FUN_00313f50 @ 00313f50 ====

undefined8 FUN_00313f50(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(int *)((int)param_1 + 0xc) + 0x2c))(param_1,param_2,1);
  FUN_00315ee8(param_1,1);
  return param_1;
}


// ==== FUN_00313f90 @ 00313f90 ====

undefined8 FUN_00313f90(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(int *)((int)param_1 + 0xc) + 0x2c))(param_1,param_2,0);
  FUN_00315ee8(param_1,0);
  return param_1;
}


// ==== FUN_00313fd0 @ 00313fd0 ====
// GLOBAL null int
// GLOBAL null int
// GLOBAL null undefined

void FUN_00313fd0(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  **(undefined4 **)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = *(undefined4 *)(param_1 + 0x20);
  if (param_1 == iGpffff8988) {
    iGpffff8988 = iGpffff8984;
    bVar4 = *(byte *)(param_1 + 0x1b);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x1b);
  }
  if ((bVar4 & 0x40) == 0) {
    bVar4 = *(byte *)(param_1 + 0x1b);
  }
  else if ((*(int *)(param_1 + 0x28) == 0) && ((*(byte *)(param_1 + 0x1a) & 1) == 0)) {
    bVar4 = *(byte *)(param_1 + 0x1b);
  }
  else {
    FUN_00313dc8(param_1);
    bVar4 = *(byte *)(param_1 + 0x1b);
  }
  if ((bVar4 & 0x20) == 0) {
    iVar7 = param_1 + 0xc;
    if ((bVar4 & 0x10) == 0) {
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 != iVar7) {
        do {
          puVar5 = puGpffff8f88;
          bVar2 = false;
          uVar1 = *(undefined4 *)(iVar6 + 8);
          if ((undefined4 **)puGpffff8f88 == &puGpffff8f88) {
            FUN_00315f28(uVar1);
          }
          for (; (undefined4 **)puVar5 != &puGpffff8f88; puVar5 = (undefined4 *)*puVar5) {
            lVar3 = FUN_00314440(puVar5 + -7,uVar1);
            if (lVar3 != 0) {
              bVar2 = true;
              break;
            }
          }
          if (bVar2) {
            iVar6 = *(int *)(iVar6 + 4);
          }
          else {
            FUN_00315f28(uVar1);
            iVar6 = *(int *)(iVar6 + 4);
          }
        } while (iVar6 != iVar7);
      }
      FUN_00318340(iVar7);
      FUN_003145d0(param_1);
    }
    else {
      FUN_00312d08(*(undefined4 *)(param_1 + 0x24));
    }
  }
  return;
}


// ==== FUN_00314130 @ 00314130 ====
// GLOBAL DAT_0040e77c undefined4_*
// GLOBAL DAT_0040e778 undefined4
// GLOBAL DAT_0040e16c undefined4
// GLOBAL DAT_0040e174 undefined4
// GLOBAL DAT_0040e178 undefined4

undefined4 FUN_00314130(void)

{
  long lVar1;
  
  DAT_0040e77c = &DAT_0040e778;
  DAT_0040e778 = &DAT_0040e778;
  DAT_0040e16c = 1;
  lVar1 = FUN_00317e40(0x30,8,0x40,0,0x456358,0x40808);
  if (lVar1 != 0) {
    lVar1 = FUN_00314278(0x456328);
    DAT_0040e174 = (undefined4)lVar1;
    DAT_0040e178 = DAT_0040e174;
    if (lVar1 != 0) {
      FUN_00314330(lVar1,0x4092c0,0x40e180);
      return 1;
    }
    FUN_00317fc0(0x456358);
  }
  DAT_0040e178 = 0;
  DAT_0040e174 = 0;
  DAT_0040e16c = 0;
  return 0;
}


// ==== FUN_003141e0 @ 003141e0 ====
// GLOBAL DAT_0040e778 undefined4
// GLOBAL DAT_0040e170 undefined4
// GLOBAL DAT_0040e160 int
// GLOBAL DAT_0040e77c undefined4_*
// GLOBAL DAT_0040e168 int
// GLOBAL DAT_0040e174 undefined4
// GLOBAL DAT_0040e178 undefined4
// GLOBAL DAT_0040e16c undefined4

void FUN_003141e0(void)

{
  DAT_0040e170 = 1;
  if ((undefined4 **)DAT_0040e778 != &DAT_0040e778) {
    do {
      FUN_00313fd0(DAT_0040e778 + -7);
    } while ((undefined4 **)DAT_0040e778 != &DAT_0040e778);
  }
  FUN_00317fc0(0x456358);
  DAT_0040e77c = &DAT_0040e778;
  DAT_0040e778 = &DAT_0040e778;
  if ((DAT_0040e160 != 0) && (DAT_0040e168 == 1)) {
    FUN_00314548();
    DAT_0040e168 = 0;
  }
  DAT_0040e174 = 0;
  DAT_0040e178 = 0;
  DAT_0040e16c = 0;
  DAT_0040e170 = 0;
  return;
}


// ==== FUN_00314278 @ 00314278 ====
// GLOBAL DAT_0040e778 undefined4

long FUN_00314278(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    param_1 = FUN_00317a78(0x456358,0x30808);
    uVar2 = 1;
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = 4;
  }
  iVar3 = (int)param_1;
  *(undefined1 *)(iVar3 + 0x1b) = uVar2;
  FUN_00316758(param_1);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  iVar1 = DAT_0040e778;
  *(int **)(iVar3 + 0x20) = &DAT_0040e778;
  *(int *)(iVar3 + 0x1c) = iVar1;
  *(int *)(DAT_0040e778 + 4) = iVar3 + 0x1c;
  DAT_0040e778 = iVar3 + 0x1c;
  *(int *)(iVar3 + 0x10) = iVar3 + 0xc;
  *(int *)(iVar3 + 0xc) = iVar3 + 0xc;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined1 *)(iVar3 + 0x1a) = 0;
  return param_1;
}


// ==== FUN_00314330 @ 00314330 ====

undefined8 FUN_00314330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00316618();
  FUN_003165c8(param_1,param_3);
  return param_1;
}


// ==== FUN_00314370 @ 00314370 ====
// GLOBAL DAT_0040e778 undefined4

int FUN_00314370(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((undefined4 **)DAT_0040e778 != &DAT_0040e778) {
    puVar2 = (undefined4 *)DAT_0040e778[-3];
    puVar3 = DAT_0040e778;
    while( true ) {
      if (puVar2 == puVar3 + -4) {
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        iVar1 = puVar2[2];
        while( true ) {
          if (*(int *)(iVar1 + 0xc) == param_1) {
            return param_1;
          }
          puVar2 = (undefined4 *)puVar2[1];
          if (puVar2 == puVar3 + -4) break;
          iVar1 = puVar2[2];
        }
        puVar3 = (undefined4 *)*puVar3;
      }
      if ((undefined4 **)puVar3 == &DAT_0040e778) break;
      puVar2 = (undefined4 *)puVar3[-3];
    }
  }
  return 0;
}


// ==== FUN_003143d8 @ 003143d8 ====

void FUN_003143d8(int param_1,code *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != param_1 + 0xc) {
    uVar1 = *(undefined4 *)(iVar3 + 8);
    while( true ) {
      iVar3 = *(int *)(iVar3 + 4);
      lVar2 = (*param_2)(uVar1,param_3);
      if ((lVar2 == 0) || (iVar3 == param_1 + 0xc)) break;
      uVar1 = *(undefined4 *)(iVar3 + 8);
    }
  }
  return;
}


// ==== FUN_00314440 @ 00314440 ====

undefined8 FUN_00314440(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00318250((int)param_1 + 0xc);
  if (lVar1 == -1) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_00314488 @ 00314488 ====

void FUN_00314488(int param_1)

{
  FUN_00318288(param_1 + 0xc);
  return;
}


// ==== FUN_003144a8 @ 003144a8 ====

void FUN_003144a8(int param_1)

{
  FUN_003183c0(param_1 + 0xc);
  return;
}


// ==== FUN_003144c8 @ 003144c8 ====

long FUN_003144c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1 + 0xc;
  lVar1 = FUN_00318250(iVar3);
  lVar2 = 0;
  if (lVar1 != -1) {
    lVar2 = param_1;
  }
  if ((lVar2 == 0) && (lVar2 = FUN_00318120(iVar3,param_2), lVar2 == 0)) {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_00314538 @ 00314538 ====
// GLOBAL DAT_0040e178 undefined4

undefined4 FUN_00314538(void)

{
  return DAT_0040e178;
}


