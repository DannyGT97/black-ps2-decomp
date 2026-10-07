// ==== FUN_00188b08 @ 00188b08 ====

undefined8 FUN_00188b08(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x60) + 0x3c))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x60) + 0x38));
  }
  return uVar2;
}


// ==== FUN_00188b40 @ 00188b40 ====

void FUN_00188b40(undefined4 param_1,undefined4 param_2,int param_3,ulong param_4)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_3 + 0x14) != '\0' && param_4 != 0;
  *(bool *)(param_3 + 0x14) = bVar1;
  if (param_4 == bVar1) {
    *(undefined4 *)(param_3 + 0x1c) = param_2;
    *(undefined4 *)(param_3 + 0x18) = param_1;
  }
  return;
}


// ==== FUN_00188b68 @ 00188b68 ====

void FUN_00188b68(int param_1)

{
  if (*(int *)(param_1 + 0x3a8) != 0) {
    FUN_001a2cd8();
  }
  return;
}


// ==== FUN_00188b90 @ 00188b90 ====

void FUN_00188b90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x130) = param_2;
  return;
}


// ==== FUN_00188b98 @ 00188b98 ====

undefined4 FUN_00188b98(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(char *)(puVar1 + 1) = (char)iVar2;
    *puVar1 = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x18;
  } while (iVar2 < 3);
  param_1[0x48] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  FUN_00173690(param_1 + 0x4a);
  return 1;
}


// ==== FUN_00188bf8 @ 00188bf8 ====

bool FUN_00188bf8(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(int *)(param_1 + 0x120) != -1) {
    uVar1 = FUN_00188f80();
    lVar2 = FUN_00178f28(uVar1);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}


// ==== FUN_00188c38 @ 00188c38 ====

undefined4 FUN_00188c38(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    piVar4 = param_1 + 0x48;
    iVar1 = *param_1;
    while( true ) {
      if (iVar1 != -1) {
        uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
        lVar3 = FUN_00178f18(uVar2);
        if (((lVar3 != 0) && (iVar1 = *(int *)((int)uVar2 + 8), *(int *)(iVar1 + 0xc4) == 2)) &&
           (lVar3 = FUN_00176310(DAT_0040f4d4 + 4000,iVar1,param_2), lVar3 != 0)) {
          return 1;
        }
      }
      param_1 = param_1 + 0x18;
      if ((int)piVar4 <= (int)param_1) break;
      iVar1 = *param_1;
    }
  }
  return 0;
}


// ==== FUN_00188d08 @ 00188d08 ====

void FUN_00188d08(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = FUN_00188f10();
  lVar6 = FUN_001848b8(*(int *)(param_1 + 0x130) + 0x6f0);
  if (lVar6 != 0) {
    FUN_00189740(param_1,lVar6,1);
  }
  FUN_0018a548(param_1);
  iVar9 = -1;
  iVar4 = 0;
  FUN_0018a5c0(param_1);
  fVar11 = -1.0;
  iVar8 = param_1;
  do {
    FUN_0018a118(param_1,iVar8);
    fVar10 = *(float *)(iVar8 + 0xc);
    iVar1 = iVar4;
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
      iVar1 = iVar9;
    }
    iVar9 = iVar1;
    iVar4 = iVar4 + 1;
    iVar8 = iVar8 + 0x60;
    fVar11 = fVar10;
  } while (iVar4 < 3);
  if (iVar9 == -1) {
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
    FUN_00188a40(*(int *)(param_1 + 0x130) + 0x290,0xffffffffffffffff);
    goto LAB_00188e4c;
  }
  iVar8 = *(int *)(param_1 + 0x120);
  if (iVar9 == iVar8) {
LAB_00188ddc:
    if (iVar8 != -1) goto LAB_00188e4c;
  }
  else {
    lVar6 = FUN_00173610(param_1 + 0x128);
    if (lVar6 == 0) {
      iVar8 = *(int *)(param_1 + 0x120);
      goto LAB_00188ddc;
    }
  }
  FUN_00173640(0x40000000,param_1 + 0x128);
  iVar8 = *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x120) = iVar9;
  puVar3 = (undefined4 *)FUN_00188f80(param_1);
  FUN_00188a40(iVar8 + 0x290,*puVar3);
  uVar7 = FUN_00188f80(param_1);
  lVar6 = FUN_00178f18(uVar7);
  if (lVar6 != 0) {
    FUN_0018aa18(param_1);
  }
LAB_00188e4c:
  if (lVar5 == 0) {
    lVar5 = FUN_00188f10(param_1);
    if (lVar5 == 0) {
      cVar2 = *(char *)(param_1 + 0x134);
    }
    else {
      uVar7 = FUN_00188f80(param_1);
      lVar5 = FUN_00178f18(uVar7);
      if (lVar5 != 0) {
        iVar8 = *(int *)(param_1 + 0x130);
        iVar4 = FUN_00188f80(param_1);
        FUN_00181f48(0,0x3f800000,iVar8 + 0xc80,*(undefined4 *)(iVar4 + 8),0xe);
        lVar5 = FUN_0018dcd0(*(int *)(param_1 + 0x130) + 0xc94);
        if (lVar5 != 0) {
          iVar8 = FUN_00188f80(param_1);
          FUN_0016e318(DAT_0040f4d4,*(undefined4 *)(iVar8 + 8),*(undefined4 *)(param_1 + 0x130));
        }
      }
      cVar2 = *(char *)(param_1 + 0x134);
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x134);
  }
  if (cVar2 != '\0') {
    FUN_0018a380(param_1);
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  return;
}


// ==== FUN_00188f10 @ 00188f10 ====

bool FUN_00188f10(int param_1)

{
  return *(int *)(param_1 + 0x120) != -1;
}


// ==== FUN_00188f20 @ 00188f20 ====

undefined4 FUN_00188f20(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0x48;
  iVar1 = *param_1;
  while( true ) {
    param_1 = param_1 + 0x18;
    if (iVar1 != -1) {
      return 1;
    }
    if ((int)piVar2 <= (int)param_1) break;
    iVar1 = *param_1;
  }
  return 0;
}


// ==== FUN_00188f58 @ 00188f58 ====

undefined4 FUN_00188f58(int param_1)

{
  if (*(int *)(param_1 + 0x120) < 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x120) * 0x60 + param_1);
}


// ==== FUN_00188f80 @ 00188f80 ====

void FUN_00188f80(int param_1)

{
  FUN_00179258(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(*(int *)(param_1 + 0x120) * 0x60 + param_1));
  return;
}


// ==== FUN_00188fb8 @ 00188fb8 ====

void FUN_00188fb8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = -1;
  piVar1 = param_1;
  do {
    iVar4 = iVar3;
    if (((*piVar1 != -1) && (iVar4 = iVar2, iVar3 != -1)) &&
       ((float)param_1[iVar3 * 0x18 + 6] <= (float)piVar1[6])) {
      iVar4 = iVar3;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x18;
    iVar3 = iVar4;
  } while (iVar2 < 3);
  FUN_00179258(DAT_0040f4d4 + 0xfa8,param_1[iVar4 * 0x18]);
  return;
}


// ==== FUN_00189048 @ 00189048 ====

void FUN_00189048(int param_1)

{
  FUN_00189070(param_1,*(int *)(param_1 + 0x120) * 0x60 + param_1);
  return;
}


// ==== FUN_00189070 @ 00189070 ====

undefined8 FUN_00189070(undefined8 param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*param_2);
  puVar1 = (undefined8 *)FUN_00178d30(uVar2);
  return *puVar1;
}


// ==== FUN_001890a8 @ 001890a8 ====

void FUN_001890a8(int param_1)

{
  FUN_00189178(param_1,*(int *)(param_1 + 0x120) * 0x60 + param_1);
  return;
}


// ==== FUN_001890d0 @ 001890d0 ====

void FUN_001890d0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar3 = FUN_00188f10();
  if (lVar3 != 0) {
    uVar4 = FUN_00188f80(param_2);
    lVar3 = FUN_00178f18(uVar4);
    if (lVar3 == 0) {
      FUN_00189048(param_2);
    }
    else {
      iVar1 = FUN_00188f80(param_2);
      iVar1 = *(int *)(iVar1 + 8);
      uVar2 = FUN_00189048(param_2);
      auVar6 = _qmtc2(param_1);
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x1b0));
      auVar5 = _vmulbc(auVar5,auVar6);
      auVar6 = _qmtc2(uVar2);
      auVar5 = _vadd(auVar6,auVar5);
      _qmfc2(auVar5._0_4_);
    }
  }
  return;
}


// ==== FUN_00189178 @ 00189178 ====

void FUN_00189178(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*param_2);
  FUN_00178e60(uVar1);
  return;
}


// ==== FUN_001891a8 @ 001891a8 ====

undefined4 FUN_001891a8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x18);
}


// ==== FUN_001891c0 @ 001891c0 ====

undefined1 FUN_001891c0(int param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_00188f10();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x120) * 0x60 + param_1 + 6);
  }
  return uVar1;
}


// ==== FUN_00189208 @ 00189208 ====

undefined1 FUN_00189208(int param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_00188f10();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x120) * 0x60 + param_1 + 5);
  }
  return uVar1;
}


// ==== FUN_00189250 @ 00189250 ====

undefined1 FUN_00189250(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar2 = FUN_00189bf8();
  if (lVar2 != 0) {
    piVar4 = param_1 + 0x48;
    piVar3 = param_1;
    do {
      iVar1 = *param_1;
      param_1 = param_1 + 0x18;
      if (iVar1 == param_2) {
        return *(undefined1 *)((int)piVar3 + 5);
      }
      piVar3 = piVar3 + 0x18;
    } while ((int)param_1 < (int)piVar4);
  }
  return 0;
}


// ==== FUN_001892c8 @ 001892c8 ====

undefined8 FUN_001892c8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00188f10();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_00188f80(param_1);
    uVar2 = FUN_00178fd8(uVar2);
  }
  return uVar2;
}


// ==== FUN_00189310 @ 00189310 ====

float FUN_00189310(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(char *)(*(int *)(iVar3 + 0x130) + 0xd27) == '\0') {
    iVar2 = *(int *)(iVar3 + 0x120);
  }
  else {
    lVar1 = FUN_00189208();
    if (lVar1 == 0) {
      iVar2 = *(int *)(iVar3 + 0x120);
    }
    else {
      lVar1 = FUN_001891c0(param_1);
      if (lVar1 == 0) {
        lVar1 = FUN_00189490(param_1);
        if (lVar1 == 0) {
          return 0.0;
        }
        iVar2 = *(int *)(iVar3 + 0x120);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x120);
      }
    }
  }
  return *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(iVar2 * 0x60 + iVar3 + 0x10);
}


// ==== FUN_001893a0 @ 001893a0 ====

int FUN_001893a0(int param_1)

{
  return *(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x20;
}


// ==== FUN_001893b8 @ 001893b8 ====

char FUN_001893b8(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int *piVar5;
  
  cVar4 = '\0';
  if (param_2 != 0) {
    piVar5 = param_1 + 0x48;
    iVar1 = *param_1;
    while( true ) {
      if (iVar1 != -1) {
        uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
        lVar3 = FUN_00178f18(uVar2);
        if (lVar3 != 0) {
          lVar3 = FUN_00176310(DAT_0040f4d4 + 4000,*(undefined4 *)((int)uVar2 + 8),param_2);
          if (lVar3 != 0) {
            cVar4 = cVar4 + '\x01';
          }
        }
      }
      param_1 = param_1 + 0x18;
      if ((int)piVar5 <= (int)param_1) break;
      iVar1 = *param_1;
    }
  }
  return cVar4;
}


// ==== FUN_00189478 @ 00189478 ====

int FUN_00189478(int param_1)

{
  return *(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x30;
}


// ==== FUN_00189490 @ 00189490 ====

byte FUN_00189490(int param_1)

{
  byte bVar1;
  
  bVar1 = FUN_00173610(*(int *)(param_1 + 0x120) * 0x60 + param_1 + 0x50);
  return bVar1 ^ 1;
}


// ==== FUN_001894c8 @ 001894c8 ====

void FUN_001894c8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  
  lVar1 = FUN_00188f10();
  iVar3 = (int)param_1;
  if (lVar1 == 0) {
    iVar3 = *(int *)(iVar3 + 0x130);
  }
  else {
    fVar4 = (float)FUN_001891a8(param_1);
    if (30.0 < fVar4) {
      uVar2 = FUN_00188f58(param_1);
      FUN_00189b90(param_1,uVar2);
      iVar3 = *(int *)(iVar3 + 0x130);
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x130);
    }
  }
  FUN_00181f48(0,0x3f800000,iVar3 + 0xc80,0,0x17);
  return;
}


// ==== FUN_00189550 @ 00189550 ====

void FUN_00189550(float param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00189740(param_2,param_3,0);
  if (lVar2 != -1) {
    iVar1 = (int)lVar2 * 0x60 + (int)param_2;
    *(float *)(iVar1 + 8) = *(float *)(iVar1 + 8) + param_1;
  }
  return;
}


// ==== FUN_001895a8 @ 001895a8 ====

void FUN_001895a8(undefined8 param_1,undefined8 param_2)

{
  FUN_00189740(param_1,param_2,1);
  return;
}


// ==== FUN_001895c8 @ 001895c8 ====

void FUN_001895c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar5 = _vaddbc(in_vf0,in_vf0);
  iVar2 = (int)param_1;
  auVar5 = _sqc2(auVar5);
  auVar7 = _lqc2(*(undefined1 (*) [16])((int)param_3 + 0xa0));
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar2 + 0x130) + 0x7c) + 0xa0));
  auVar6 = _vsub(auVar7,auVar6);
  auVar7 = _lqc2(auVar5);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar1 = auVar6._0_4_;
  fVar3 = (float)FUN_0018dd88(*(int *)(iVar2 + 0x130) + 0xc94);
  fVar4 = (float)FUN_0018dd88(*(int *)(iVar2 + 0x130) + 0xc94);
  if (fVar1 < fVar3 * fVar4) {
    FUN_0018a9c8(param_1,param_3,param_2);
  }
  else {
    auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)((int)param_2 + 0x7c) + 0xa0));
    auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar2 + 0x130) + 0x7c) + 0xa0));
    auVar6 = _vsub(auVar7,auVar6);
    auVar6 = _vmul(auVar6,auVar6);
    auVar5 = _lqc2(auVar5);
    _vaddabc(auVar6,auVar6);
    auVar5 = _vmaddbc(auVar5,auVar6);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (auVar5._0_4_ < 400.0) {
      FUN_0018a9c8(param_1,param_3,param_2);
    }
  }
  return;
}


// ==== FUN_001896e0 @ 001896e0 ====

void FUN_001896e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00189740(param_1,param_2,0);
  return;
}


// ==== FUN_00189700 @ 00189700 ====

void FUN_00189700(undefined8 param_1,undefined8 param_2)

{
  FUN_00189740(param_1,param_2,1);
  return;
}


// ==== FUN_00189720 @ 00189720 ====

void FUN_00189720(undefined8 param_1,int param_2)

{
  FUN_00189b90(param_1,*(undefined4 *)(param_2 + 0x380));
  return;
}


// ==== FUN_00189740 @ 00189740 ====

undefined8 FUN_00189740(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x38c) == 0) {
    iVar1 = *(int *)((int)param_1 + 300);
    if (iVar1 == 1) {
      if (*(int *)(param_2 + 0xc4) != 2) goto LAB_0018979c;
    }
    else if (((1 < iVar1) && (iVar1 == 2)) && (*(int *)(param_2 + 0xc4) == 2)) goto LAB_0018979c;
    uVar2 = FUN_001792b0(DAT_0040f4d4 + 0xfa8);
    uVar2 = FUN_001897e8(param_1,uVar2,param_3);
  }
  else {
LAB_0018979c:
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


// ==== FUN_001897e8 @ 001897e8 ====

uint FUN_001897e8(uint *param_1,uint param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  uint uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  fVar14 = DAT_003f5694;
  puVar4 = &uStack_100;
  uVar12 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (param_2 != 0xffffffff) {
    uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2);
    lVar3 = FUN_00178f18(uVar2);
    if ((lVar3 != 0) &&
       (iVar1 = FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2),
       *(int *)(*(int *)(iVar1 + 8) + 0x3a4) == *(int *)(*(int *)(param_1[0x4c] + 0x7c) + 0x3a4))) {
      return 0xffffffff;
    }
    lVar3 = FUN_0018d730(param_1[0x4c] + 0xd10,param_2);
    uVar6 = 0xffffffff;
    if (lVar3 != 0) {
      auVar15 = _vadd(in_vf0,in_vf0);
      uStack_e4 = 0xbf800000;
      uVar6 = 0;
      uStack_e8 = 0x47c35000;
      auStack_c0 = _sqc2(auVar15);
      uStack_f8 = 0;
      uStack_fa = 0;
      uStack_fb = 0;
      uStack_f9 = 0;
      uStack_f0 = 0xbf800000;
      auStack_e0 = _sqc2(auVar15);
      auStack_d0 = _sqc2(auVar15);
      auStack_a0 = _sqc2(auVar15);
      uStack_100 = param_2;
      FUN_00173690(auStack_b0);
      fStack_f4 = 0.0;
      FUN_00189c10(param_1,&uStack_100);
      puVar5 = param_1;
      do {
        if (*puVar5 == param_2) {
          if (param_3 == 0) {
            return uVar6;
          }
          FUN_00189b28(param_1);
          return uVar6;
        }
        if (param_1[0x48] != uVar6) {
          if (*puVar5 == 0xffffffff) {
            fVar13 = -1.0;
          }
          else {
            fVar13 = (float)puVar5[3];
            if (fVar14 <= fVar13) goto LAB_00189968;
          }
          fVar14 = fVar13;
          uVar12 = uVar6;
        }
LAB_00189968:
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x18;
      } while ((int)uVar6 < 3);
      uVar6 = 0xffffffff;
      if (fVar14 < fStack_f4) {
        puVar5 = param_1 + uVar12 * 0x18;
        if (*puVar5 != 0xffffffff) {
          FUN_0018a2c8(param_1,puVar5);
        }
        uStack_fc = (undefined1)puVar5[1];
        do {
          uVar2 = *(undefined8 *)puVar4;
          uVar6 = *(uint *)((int)puVar4 + 8);
          uVar7 = *(uint *)((int)puVar4 + 0xc);
          uVar8 = *(uint *)((int)puVar4 + 0x10);
          uVar9 = *(uint *)((int)puVar4 + 0x14);
          uVar10 = *(uint *)((int)puVar4 + 0x18);
          uVar11 = *(uint *)((int)puVar4 + 0x1c);
          *puVar5 = (uint)uVar2;
          puVar5[1] = (uint)((ulong)uVar2 >> 0x20);
          puVar5[2] = uVar6;
          puVar5[3] = uVar7;
          puVar5[4] = uVar8;
          puVar5[5] = uVar9;
          puVar5[6] = uVar10;
          puVar5[7] = uVar11;
          puVar4 = (uint *)((int)puVar4 + 0x20);
          puVar5 = puVar5 + 8;
        } while (puVar4 != (uint *)auStack_a0);
        param_1[0x49] = param_1[0x49] | 1 << (param_2 & 0x1f);
        uVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2);
        lVar3 = FUN_00178f28(uVar2);
        if (lVar3 == 0) {
          if (*(int *)((int)uVar2 + 4) == 1) {
            param_3 = 1;
            *(undefined1 *)((int)param_1 + uVar12 * 0x60 + 6) = 1;
            param_1[uVar12 * 0x18 + 4] = *(uint *)(DAT_0040f4d0 + 0x20);
          }
        }
        else {
          *(undefined1 *)((int)param_1 + uVar12 * 0x60 + 7) = 1;
        }
        if (param_3 != 0) {
          FUN_00189b28(param_1,param_1 + uVar12 * 0x18);
        }
        lVar3 = FUN_00178f50(uVar2);
        if (lVar3 == 0) {
          uVar6 = param_1[0x4c];
        }
        else {
          iVar1 = FUN_00135550(*(undefined4 *)((int)uVar2 + 8));
          FUN_001896e0(iVar1 + 0x150,*(undefined4 *)(param_1[0x4c] + 0x7c));
          uVar6 = param_1[0x4c];
        }
        FUN_00181ad0(uVar6 + 0xec0,2);
        uVar6 = uVar12;
      }
    }
  }
  return uVar6;
}


// ==== FUN_00189ad0 @ 00189ad0 ====

undefined4 FUN_00189ad0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 0x48;
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == *(int *)(param_2 + 0x380)) {
      if (*(char *)((int)param_1 + 5) != '\0') {
        FUN_00189b28();
      }
      return 1;
    }
    param_1 = param_1 + 0x18;
    if ((int)piVar2 <= (int)param_1) break;
    iVar1 = *param_1;
  }
  return 0;
}


// ==== FUN_00189b28 @ 00189b28 ====

void FUN_00189b28(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*param_2);
  *(undefined1 *)((int)param_2 + 5) = 1;
  puVar2 = (undefined8 *)FUN_00178d30(uVar3);
  uVar3 = *puVar2;
  uVar5 = *(undefined4 *)(puVar2 + 1);
  uVar6 = *(undefined4 *)((int)puVar2 + 0xc);
  param_2[8] = (int)uVar3;
  param_2[9] = (int)((ulong)uVar3 >> 0x20);
  param_2[10] = uVar5;
  param_2[0xb] = uVar6;
  iVar1 = *(int *)(*(int *)(param_1 + 0x130) + 0x7c);
  uVar5 = *(undefined4 *)(iVar1 + 0xa4);
  uVar6 = *(undefined4 *)(iVar1 + 0xa8);
  uVar4 = *(undefined4 *)(iVar1 + 0xac);
  param_2[0xc] = *(undefined4 *)(iVar1 + 0xa0);
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar6;
  param_2[0xf] = uVar4;
  return;
}


// ==== FUN_00189b90 @ 00189b90 ====

void FUN_00189b90(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1;
  while( true ) {
    if (iVar1 == param_2) {
      FUN_0018a2c8(param_1);
      FUN_00181ad0(param_1[0x4c] + 0xec0,3);
      return;
    }
    piVar2 = piVar2 + 0x18;
    if ((int)(param_1 + 0x48) <= (int)piVar2) break;
    iVar1 = *piVar2;
  }
  return;
}


// ==== FUN_00189bf8 @ 00189bf8 ====

bool FUN_00189bf8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x124) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00189c10 @ 00189c10 ====

void FUN_00189c10(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar11 = 0.0;
  iVar6 = (int)param_1;
  piVar2 = (int *)FUN_0018e1b0(*(int *)(iVar6 + 0x130) + 0xc94);
  piVar9 = (int *)param_2;
  bVar1 = false;
  if (*piVar9 == -1) {
    piVar9[3] = *piVar2;
    return;
  }
  fVar12 = fVar11;
  if (fVar11 < (float)piVar9[2]) {
    fVar12 = (float)piVar9[2] / 100.0;
    fVar12 = (float)((int)fVar12 * (uint)(fVar11 < fVar12) | (int)fVar11 * (uint)(fVar11 >= fVar12))
    ;
    fVar12 = ((float)((int)fVar12 * (uint)(fVar12 < 1.0) | (uint)(fVar12 >= 1.0) * 0x3f800000) * 0.7
             + 0.3) * (float)piVar2[1] + fVar11;
  }
  if (*(char *)((int)piVar9 + 6) != '\0') {
    fVar12 = fVar12 + (float)piVar2[2];
  }
  if (*(char *)((int)piVar9 + 5) != '\0') {
    fVar10 = (*(float *)(DAT_0040f4d0 + 0x20) - (float)piVar9[4]) / 5.0;
    fVar10 = (float)((int)fVar10 * (uint)(fVar11 < fVar10) | (int)fVar11 * (uint)(fVar11 >= fVar10))
    ;
    fVar12 = fVar12 + ((1.0 - (float)((int)fVar10 * (uint)(fVar10 < 1.0) |
                                     (uint)(fVar10 >= 1.0) * 0x3f800000)) * 0.7 + 0.3) *
                      (float)piVar2[3];
  }
  if ((float)piVar2[10] == fVar11) {
    fVar11 = (float)piVar9[6];
  }
  else {
    fVar10 = *(float *)(DAT_0040f4d0 + 0x20) - (float)piVar9[7];
    bVar1 = 0.5 < fVar10;
    if (bVar1) {
      fVar10 = (fVar10 - 0.5) * 0.5;
      fVar11 = (float)((int)fVar10 * (uint)(fVar11 < fVar10) |
                      (int)fVar11 * (uint)(fVar11 >= fVar10));
      fVar12 = fVar12 + (float)piVar2[10] *
                        (float)((int)fVar11 * (uint)(fVar11 < 1.0) |
                               (uint)(fVar11 >= 1.0) * 0x3f800000);
      fVar11 = (float)piVar9[6];
    }
    else {
      fVar11 = (float)piVar9[6];
    }
  }
  fVar11 = (float)((int)(fVar11 / 30.0) * (uint)(0.0 < fVar11 / 30.0));
  if (bVar1) {
    fVar10 = (float)piVar2[5];
  }
  else {
    fVar10 = (float)piVar2[4];
  }
  fVar12 = fVar12 + fVar10 * (1.0 - (float)((int)fVar11 * (uint)(fVar11 < 1.0) |
                                           (uint)(fVar11 >= 1.0) * 0x3f800000));
  iVar3 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar9);
  fVar12 = fVar12 + *(float *)(&DAT_003f6580 + *(int *)(iVar3 + 4) * 4);
  if (*(int *)(iVar3 + 4) == 0) {
    iVar3 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar9);
    fVar11 = (float)piVar2[7];
    uVar4 = *(undefined4 *)(iVar3 + 8);
    if (fVar11 != 0.0) {
      iVar3 = FUN_00135550(uVar4);
      if (*(int *)(iVar3 + 0x80) != 1) {
        fVar11 = (float)piVar2[8];
        goto LAB_00189ea8;
      }
      iVar3 = FUN_00135550(uVar4);
      lVar8 = FUN_00188f10(iVar3 + 0x150);
      if (lVar8 == 0) {
        fVar11 = (float)piVar2[8];
        goto LAB_00189ea8;
      }
      iVar3 = FUN_00188f58(iVar3 + 0x150);
      if (iVar3 == *(int *)(*(int *)(*(int *)(iVar6 + 0x130) + 0x7c) + 0x380)) {
        fVar12 = fVar12 + fVar11;
      }
    }
  }
  fVar11 = (float)piVar2[8];
LAB_00189ea8:
  if (fVar11 == 0.0) {
    fVar11 = (float)piVar2[9];
  }
  else {
    uVar4 = FUN_00189070(param_1,param_2);
    auVar13 = _qmtc2(uVar4);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vmove(auVar15);
    auVar14 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(iVar6 + 0x130) + 0x7c) + 0xa0));
    auVar14 = _vsub(auVar13,auVar14);
    auVar13 = _vmul(auVar14,auVar14);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar15,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    if (auVar13._0_4_ < 2.3283064e-10) {
      fVar10 = 1.0;
    }
    else {
      auVar13 = _vmul(auVar14,auVar14);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar16,auVar13);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar13);
      uVar4 = _vwaitq();
      auVar13 = _vmulq(auVar14,uVar4);
      auVar13 = _sqc2(auVar13);
      uVar4 = FUN_0018d918(*(int *)(iVar6 + 0x130) + 0xd10);
      auVar14 = _qmtc2(uVar4);
      auVar13 = _lqc2(auVar13);
      auVar13 = _vmul(auVar14,auVar13);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      fVar10 = (float)((int)auVar13._0_4_ * (uint)(0.0 < auVar13._0_4_));
      fVar10 = (float)((int)fVar10 * (uint)(fVar10 < 1.0) | (uint)(fVar10 >= 1.0) * 0x3f800000);
    }
    fVar12 = fVar12 + fVar11 * fVar10;
    fVar11 = (float)piVar2[9];
  }
  if (fVar11 == 0.0) {
    fVar11 = (float)piVar2[0xb];
  }
  else {
    lVar8 = FUN_0018ddd8(*(int *)(iVar6 + 0x130) + 0xc94);
    if ((lVar8 != 0) &&
       (lVar8 = FUN_00173370(DAT_0040f4d4 + 0x22800,*piVar9,
                             *(undefined4 *)(*(int *)(iVar6 + 0x130) + 0x7c)), lVar8 != 0)) {
      fVar12 = fVar12 + fVar11;
    }
    fVar11 = (float)piVar2[0xb];
  }
  if (fVar11 == 0.0) {
    fVar11 = (float)piVar2[0xc];
  }
  else {
    iVar3 = FUN_00188f58(param_1);
    if (*piVar9 == iVar3) {
      fVar12 = fVar12 + fVar11;
    }
    fVar11 = (float)piVar2[0xc];
  }
  if (fVar11 == 0.0) {
    iVar6 = *(int *)(iVar6 + 300);
  }
  else {
    uVar7 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar9);
    lVar8 = FUN_00178f18(uVar7);
    if (lVar8 != 0) {
      iVar3 = *(int *)(iVar6 + 0x130);
      iVar5 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar9);
      fVar10 = (float)FUN_0018e210(iVar3 + 0xc94,*(undefined4 *)(iVar5 + 8));
      fVar12 = fVar12 + fVar11 * fVar10;
    }
    iVar6 = *(int *)(iVar6 + 300);
  }
  if (-1 < iVar6) {
    if (iVar6 < 3) {
      piVar9[3] = (int)fVar12;
      return;
    }
    if (iVar6 != 3) {
      piVar9[3] = (int)fVar12;
      return;
    }
    iVar6 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar9);
    if (*(int *)(iVar6 + 4) != 2) {
      piVar9[3] = (int)fVar12;
      return;
    }
    fVar12 = fVar12 + 100000.0;
  }
  piVar9[3] = (int)fVar12;
  return;
}


// ==== FUN_0018a118 @ 0018a118 ====

void FUN_0018a118(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int in_v0_udw;
  int in_register_0000002c;
  int *piVar3;
  
  piVar3 = (int *)param_2;
  if (*piVar3 != -1) {
    if (*(char *)((int)piVar3 + 6) != '\0') {
      piVar3[4] = *(int *)(DAT_0040f4d0 + 0x20);
      uVar1 = FUN_00189070();
      piVar3[8] = (int)uVar1;
      piVar3[9] = (int)((ulong)uVar1 >> 0x20);
      piVar3[10] = in_v0_udw;
      piVar3[0xb] = in_register_0000002c;
      *(undefined1 *)((int)piVar3 + 5) = 1;
    }
    lVar2 = FUN_0018d768(*(int *)((int)param_1 + 0x130) + 0xd10,*piVar3);
    if (lVar2 != 0) {
      piVar3[7] = *(int *)(DAT_0040f4d0 + 0x20);
    }
    FUN_0018a1c0(param_1,param_2);
    FUN_0018a238(param_1,param_2);
  }
  FUN_00189c10(param_1,param_2);
  return;
}


// ==== FUN_0018a1c0 @ 0018a1c0 ====

void FUN_0018a1c0(undefined8 param_1,int param_2)

{
  float fVar1;
  
  if (*(char *)(param_2 + 6) == '\0') {
    fVar1 = *(float *)(param_2 + 0x14) - *(float *)(DAT_0040f4d0 + 0x1c) * 0.25;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x14) + *(float *)(DAT_0040f4d0 + 0x1c) / 3.0;
  }
  *(float *)(param_2 + 0x14) = fVar1;
  fVar1 = (float)((int)*(float *)(param_2 + 0x14) * (uint)(0.0 < *(float *)(param_2 + 0x14)));
  *(uint *)(param_2 + 0x14) = (int)fVar1 * (uint)(fVar1 < 1.0) | (uint)(fVar1 >= 1.0) * 0x3f800000;
  return;
}


// ==== FUN_0018a238 @ 0018a238 ====

void FUN_0018a238(undefined8 param_1,int param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(char *)(param_2 + 6) == '\0') {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x2c);
    FUN_00173640(0x3f800000,param_2 + 0x50);
  }
  else {
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
    auVar2 = _vaddbc(in_vf0,in_vf0);
    auVar1 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x40));
    auVar1 = _vsub(auVar1,auVar3);
    auVar1 = _vmul(auVar1,auVar1);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(auVar2,auVar1);
    auVar1 = _qmfc2(auVar1._0_4_);
    if (9.0 < auVar1._0_4_) {
      auVar1 = _sqc2(auVar3);
      *(undefined1 (*) [16])(param_2 + 0x40) = auVar1;
      FUN_00173640(0x3f800000,param_2 + 0x50);
    }
  }
  return;
}


// ==== FUN_0018a2c8 @ 0018a2c8 ====

void FUN_0018a2c8(int param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar2);
  *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & ~(1 << (*param_2 & 0x1f));
  *param_2 = 0xffffffff;
  *(undefined1 *)((int)param_2 + 5) = 0;
  *(undefined1 *)((int)param_2 + 6) = 0;
  *(undefined1 *)((int)param_2 + 7) = 0;
  param_2[7] = 0xbf800000;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  param_2[3] = 0xbf800000;
  param_2[4] = 0xbf800000;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_2 + 8) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar1;
  FUN_00173690(param_2 + 0x14);
  if ((uint)(byte)param_2[1] == *(uint *)(param_1 + 0x120)) {
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
    FUN_00188a40(*(int *)(param_1 + 0x130) + 0x290,0xffffffffffffffff);
  }
  return;
}


// ==== FUN_0018a380 @ 0018a380 ====

void FUN_0018a380(int param_1)

{
  undefined1 auVar1 [12];
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  int iStack_90;
  undefined1 uStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auStack_80 = _sqc2(auVar10);
  iVar9 = 0;
  do {
    piVar8 = (int *)(iVar9 * 0x60 + param_1);
    if (*piVar8 != -1) {
      iVar4 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 == 1) {
        uVar7 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar8);
        pauVar6 = (undefined1 (*) [16])FUN_00178d30(uVar7);
        auVar10 = _lqc2(*pauVar6);
        *(undefined1 *)((int)piVar8 + 6) = 1;
        iVar4 = *(int *)(param_1 + 0x130);
LAB_0018a4a0:
        auVar11 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar4 + 0x7c) + 0xa0));
        auVar10 = _vsub(auVar11,auVar10);
        auVar11 = _lqc2(auStack_80);
        auVar10 = _vmul(auVar10,auVar10);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar11,auVar10);
        _vnop();
        _vnop();
        _vnop();
        _vsqrt(auVar10);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar12 = _vwaitq();
        auVar10 = _vmulq(auVar10,uVar12);
        auVar10 = _qmfc2(auVar10._0_4_);
        iVar4 = auVar10._0_4_;
code_r0x0018a4e4:
        piVar8[6] = iVar4;
        cVar3 = *(char *)((int)piVar8 + 6);
      }
      else if (iVar4 < 2) {
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x130);
          iVar5 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar8);
          FUN_00184b40(iVar4 + 0x6f0,*(undefined4 *)(iVar5 + 8),&iStack_90);
          *(undefined1 *)((int)piVar8 + 6) = uStack_8c;
          iVar4 = iStack_90;
          goto code_r0x0018a4e4;
        }
        cVar3 = *(char *)((int)piVar8 + 6);
      }
      else {
        if (iVar4 == 2) {
          uVar7 = FUN_00179258(DAT_0040f4d4 + 0xfa8,*piVar8);
          pauVar6 = (undefined1 (*) [16])FUN_00178d30(uVar7);
          auVar11 = _lqc2(*pauVar6);
          auVar10 = _qmfc2(auVar11._0_4_);
          auStack_70 = _sqc2(auVar11);
          uVar2 = FUN_00184d10(*(int *)(param_1 + 0x130) + 0x6f0,auVar10._0_8_);
          *(undefined1 *)((int)piVar8 + 6) = uVar2;
          iVar4 = *(int *)(param_1 + 0x130);
          auVar10 = _lqc2(auStack_70);
          goto LAB_0018a4a0;
        }
        cVar3 = *(char *)((int)piVar8 + 6);
      }
      if (cVar3 != '\0') {
        piVar8[4] = *(int *)(DAT_0040f4d0 + 0x20);
        iVar4 = *(int *)(*(int *)(param_1 + 0x130) + 0x7c);
        auVar1 = *(undefined1 (*) [12])(iVar4 + 0xa0);
        iVar4 = *(int *)(iVar4 + 0xac);
        piVar8[0xc] = auVar1._0_4_;
        piVar8[0xd] = auVar1._4_4_;
        piVar8[0xe] = auVar1._8_4_;
        piVar8[0xf] = iVar4;
      }
    }
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      return;
    }
  } while( true );
}


// ==== FUN_0018a548 @ 0018a548 ====

void FUN_0018a548(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(int *)(*(int *)((int)param_1 + 0x130) + 0x1ee0) != 0) &&
      (((lVar2 = FUN_00188f10(), lVar2 == 0 || (lVar2 = FUN_0018ab08(param_1), lVar2 == 0)) &&
       (lVar2 = FUN_0013d400(*(undefined4 *)((int)param_1 + 0x130)), lVar2 != 0)))) &&
     (iVar1 = *(int *)((int)lVar2 + 0x1c), iVar1 != -1)) {
    FUN_001897e8(param_1,iVar1,0);
  }
  return;
}


// ==== FUN_0018a5c0 @ 0018a5c0 ====

void FUN_0018a5c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = FUN_00188f10();
  if (lVar3 == 0) {
    iVar6 = (int)param_1;
    lVar3 = FUN_00174040(*(int *)(iVar6 + 0x130) + 0x1ef8);
    if (lVar3 != 0) {
      cVar1 = *(char *)((int)lVar3 + 0x78);
      while( true ) {
        iVar5 = *(int *)(iVar6 + 0x130);
        if (cVar1 != '\0') {
          iVar2 = *(int *)((int)lVar3 + 0x7c);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3a4) == *(int *)(*(int *)(iVar5 + 0x7c) + 0x3a4)))
          {
            lVar4 = FUN_00188f10((int)lVar3 + 0x150,lVar3);
            if (lVar4 != 0) {
              FUN_0018a790(param_1,lVar3);
              return;
            }
            iVar5 = *(int *)(iVar6 + 0x130);
          }
        }
        lVar3 = FUN_001740a0(iVar5 + 0x1ef8,lVar3);
        if (lVar3 == 0) break;
        cVar1 = *(char *)((int)lVar3 + 0x78);
      }
      return;
    }
  }
  return;
}


// ==== FUN_0018a678 @ 0018a678 ====

void FUN_0018a678(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00188f10();
  if (lVar3 == 0) {
    lVar3 = FUN_0018ddd8(*(int *)((int)param_1 + 0x130) + 0xc94);
    if (lVar3 == 0) {
      uVar1 = *(undefined4 *)(DAT_0040f4d0 + 0x3b0);
    }
    else {
      iVar2 = FUN_0013d400(*(undefined4 *)((int)param_1 + 0x130));
      uVar1 = *(undefined4 *)(iVar2 + 0x30);
    }
    FUN_00179258(DAT_0040f4d4 + 0xfa8,uVar1);
  }
  else {
    FUN_00188f80(param_1);
  }
  return;
}


// ==== FUN_0018a6f0 @ 0018a6f0 ====

void FUN_0018a6f0(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 extraout_v0_udw;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  fVar3 = (float)FUN_0018dae8(*(int *)((int)param_1 + 0x130) + 0xc94);
  uVar2 = FUN_00189048(param_1);
  pauVar1 = (undefined1 (*) [16])FUN_001893a0(param_1);
  auVar5 = _lqc2(*pauVar1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar6._8_4_ = (int)extraout_v0_udw;
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
  auVar6 = _lqc2(auVar6);
  auVar6 = _vsub(auVar6,auVar5);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar4,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (fVar3 * fVar3 <= auVar6._0_4_) {
    _qmfc2(auVar5._0_4_);
  }
  return;
}


// ==== FUN_0018a790 @ 0018a790 ====

void FUN_0018a790(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  piVar4 = (int *)((int)param_2 + 0x150);
  iVar5 = 2;
  do {
    if (*piVar4 != -1) {
      FUN_0018a8d8(param_1,*piVar4,param_2);
    }
    iVar5 = iVar5 + -1;
    piVar4 = piVar4 + 0x18;
  } while (-1 < iVar5);
  if (param_1[0x48] == -1) {
    iVar2 = 0;
    fVar6 = -1.0;
    iVar5 = -1;
    piVar4 = param_1;
    do {
      fVar7 = fVar6;
      iVar3 = iVar5;
      if ((fVar6 < (float)piVar4[3]) && (fVar7 = (float)piVar4[3], iVar3 = iVar2, *piVar4 == -1)) {
        fVar7 = fVar6;
        iVar3 = iVar5;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x18;
      fVar6 = fVar7;
      iVar5 = iVar3;
    } while (iVar2 < 3);
    if (iVar3 != -1) {
      iVar5 = param_1[0x4c];
      param_1[0x48] = iVar3;
      puVar1 = (undefined4 *)FUN_00188f80(param_1);
      FUN_00188a40(iVar5 + 0x290,*puVar1);
    }
  }
  return;
}


// ==== FUN_0018a890 @ 0018a890 ====

void FUN_0018a890(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00188f10();
  if (lVar1 == 0) {
    FUN_00189740(param_1,DAT_0040f4d0 + 0x30,1);
  }
  return;
}


// ==== FUN_0018a8d8 @ 0018a8d8 ====

void FUN_0018a8d8(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar1 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
  lVar2 = FUN_00178f18(uVar1);
  if ((lVar2 != 0) && (lVar2 = FUN_001897e8(param_1,param_2,0), lVar2 != -1)) {
    piVar6 = (int *)(param_3 + 0x150);
    iVar4 = 0;
    iVar5 = (int)lVar2 * 0x60 + (int)param_1;
    do {
      iVar4 = iVar4 + 1;
      if (*piVar6 == param_2) {
        *(undefined1 *)(iVar5 + 5) = *(undefined1 *)((int)piVar6 + 5);
        uVar1 = *(undefined8 *)(piVar6 + 8);
        iVar4 = piVar6[10];
        iVar3 = piVar6[0xb];
        *(int *)(iVar5 + 0x20) = (int)uVar1;
        *(int *)(iVar5 + 0x24) = (int)((ulong)uVar1 >> 0x20);
        *(int *)(iVar5 + 0x28) = iVar4;
        *(int *)(iVar5 + 0x2c) = iVar3;
        uVar1 = *(undefined8 *)(piVar6 + 0x10);
        iVar4 = piVar6[0x12];
        iVar3 = piVar6[0x13];
        *(int *)(iVar5 + 0x40) = (int)uVar1;
        *(int *)(iVar5 + 0x44) = (int)((ulong)uVar1 >> 0x20);
        *(int *)(iVar5 + 0x48) = iVar4;
        *(int *)(iVar5 + 0x4c) = iVar3;
        *(int *)(iVar5 + 0x50) = piVar6[0x14];
        uVar1 = *(undefined8 *)(piVar6 + 0xc);
        iVar4 = piVar6[0xe];
        iVar3 = piVar6[0xf];
        *(int *)(iVar5 + 0x30) = (int)uVar1;
        *(int *)(iVar5 + 0x34) = (int)((ulong)uVar1 >> 0x20);
        *(int *)(iVar5 + 0x38) = iVar4;
        *(int *)(iVar5 + 0x3c) = iVar3;
        iVar4 = piVar6[4];
        *(undefined4 *)(iVar5 + 0x1c) = 0xbf800000;
        *(int *)(iVar5 + 0x10) = iVar4;
        *(undefined1 *)(iVar5 + 7) = *(undefined1 *)((int)piVar6 + 7);
        *(int *)(iVar5 + 0xc) = piVar6[3];
        return;
      }
      piVar6 = piVar6 + 0x18;
    } while (iVar4 < 3);
  }
  return;
}


// ==== FUN_0018a9c8 @ 0018a9c8 ====

void FUN_0018a9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001792b0(DAT_0040f4d4 + 0xfa8);
  FUN_0018a8d8(param_1,uVar1,param_3);
  return;
}


// ==== FUN_0018aa18 @ 0018aa18 ====

void FUN_0018aa18(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_00188f80();
  cVar1 = **(char **)(*(int *)(iVar4 + 8) + 0x2a4);
  if (cVar1 == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(cVar1 * 4 + DAT_00414d54);
  }
  if (iVar4 == 3) {
    iVar2 = *(int *)((int)param_1 + 0x130);
    iVar4 = FUN_00188f80(param_1);
    uVar3 = *(undefined4 *)(iVar4 + 8);
    uVar5 = 8;
  }
  else {
    iVar2 = *(int *)((int)param_1 + 0x130);
    if (iVar4 != 10) {
      iVar4 = FUN_00188f80(param_1);
      FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,*(undefined4 *)(iVar4 + 8),6);
      return;
    }
    iVar4 = FUN_00188f80(param_1);
    uVar3 = *(undefined4 *)(iVar4 + 8);
    uVar5 = 7;
  }
  FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,uVar3,uVar5);
  return;
}


// ==== FUN_0018ab08 @ 0018ab08 ====

undefined8 FUN_0018ab08(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00188f10();
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_00188f80(param_1);
    lVar2 = FUN_00178f18(uVar3);
    if (lVar2 == 0) {
      uVar3 = FUN_001891c0(param_1);
    }
    else {
      iVar1 = *(int *)((int)param_1 + 0x130);
      uVar3 = FUN_00188f58(param_1);
      uVar3 = FUN_00185c38(iVar1 + 0x6f0,uVar3);
    }
  }
  return uVar3;
}


// ==== FUN_0018ab80 @ 0018ab80 ====

void FUN_0018ab80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_0018ab88 @ 0018ab88 ====

undefined4 FUN_0018ab88(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return 1;
}


// ==== FUN_0018ab98 @ 0018ab98 ====

void FUN_0018ab98(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_1[1] != 0) {
    FUN_00163fd0(param_1[1],*param_1);
    *(undefined4 *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = 0;
    param_1[1] = 0;
  }
  return;
}


// ==== FUN_0018abe8 @ 0018abe8 ====

void FUN_0018abe8(int *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (param_2 == 0) {
    if (param_1[1] == 0) {
      param_1[1] = 0;
      return;
    }
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      return;
    }
    FUN_00163fd0(param_1[1],*param_1);
    *(undefined4 *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = 0;
    param_1[1] = 0;
  }
  else {
    if ((char)param_1[2] == '\0') {
      param_1[1] = iVar1;
      return;
    }
    FUN_00163f30(param_2,*param_1);
    *(int *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = iVar1 + 0x5c;
  }
  param_1[1] = iVar1;
  return;
}


// ==== FUN_0018ac80 @ 0018ac80 ====

void FUN_0018ac80(int *param_1,long param_2)

{
  *(char *)(param_1 + 2) = (char)param_2;
  if (param_2 == 0) {
    if (param_1[1] != 0) {
      FUN_00163fd0(param_1[1],*param_1);
      *(undefined4 *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = 0;
      param_1[1] = 0;
    }
  }
  else if (param_1[1] != 0) {
    FUN_00163f30(param_1[1],*param_1);
    *(int *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = param_1[1] + 0x5c;
  }
  return;
}


// ==== FUN_0018ad00 @ 0018ad00 ====

void FUN_0018ad00(int *param_1)

{
  if ((param_1[1] != 0) && ((char)param_1[2] != '\0')) {
    *(int *)(*(int *)(*(int *)(*param_1 + 0x7c) + 0x330) + 0xcc) = param_1[1] + 0x5c;
  }
  return;
}


// ==== FUN_0018ad30 @ 0018ad30 ====

bool FUN_0018ad30(int param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(int *)(param_1 + 4) != 0) {
    lVar2 = FUN_00164238();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


// ==== FUN_0018ad60 @ 0018ad60 ====

void FUN_0018ad60(undefined4 *param_1)

{
  FUN_001640d0(param_1[1],*param_1);
  return;
}


// ==== FUN_0018ad80 @ 0018ad80 ====

void FUN_0018ad80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}


// ==== FUN_0018ad88 @ 0018ad88 ====

undefined4 FUN_0018ad88(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _vadd(in_vf0,in_vf0);
  iVar3 = 3;
  puVar2 = param_1;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (-1 < iVar3);
  auVar1 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar1;
  _sqc2(auVar4);
  param_1[0x10] = 0;
  FUN_00173690(param_1 + 8);
  return 1;
}


// ==== FUN_0018ade0 @ 0018ade0 ====

void FUN_0018ade0(void)

{
  FUN_0018ae00();
  return;
}


// ==== FUN_0018ae00 @ 0018ae00 ====

void FUN_0018ae00(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_d0 [16];
  float afStack_c0 [4];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  cVar3 = FUN_00176f00(param_1[0x11] + 0x1fcc);
  if (cVar3 == '\0') {
    iVar7 = param_1[0x11];
  }
  else {
    FUN_0018b190(param_1);
    iVar7 = param_1[0x11];
  }
  auVar13 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar13);
  iVar8 = 0;
  auStack_b0 = _sqc2(auVar13);
  fVar12 = 0.0;
  bVar2 = true;
  if (*(int *)(iVar7 + 0x850) != 0) {
    uVar4 = FUN_00182968();
    auVar15 = _qmtc2(uVar4);
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1[0x11] + 0x7c) + 0xa0));
    auVar13 = _vsub(auVar13,auVar15);
    auVar13 = _vmul(auVar13,auVar13);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar14,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    if (auVar13._0_4_ < 0.25) {
      bVar2 = false;
    }
  }
  piVar9 = param_1 + 8;
  if (bVar2) {
    iVar7 = 3;
    piVar6 = param_1;
    do {
      if ((*piVar6 != 0) && (lVar5 = FUN_0018b4c0(param_1,piVar6,auStack_d0,afStack_c0), lVar5 != 0)
         ) {
        iVar8 = iVar8 + 1;
        auVar13 = _qmtc2(afStack_c0[0]);
        auVar14 = _lqc2(auStack_d0);
        auVar15 = _lqc2(auStack_b0);
        auVar13 = _vmulbc(auVar14,auVar13);
        iVar1 = *piVar6;
        auVar13 = _vadd(auVar15,auVar13);
        auStack_b0 = _sqc2(auVar13);
        fVar12 = fVar12 + afStack_c0[0];
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) == 2)) {
          auVar13 = _vsub(in_vf0,auVar14);
          auVar13 = _qmfc2(auVar13._0_4_);
          FUN_0016e7a8(DAT_0040f4d4,iVar1,auVar13._0_8_);
        }
      }
      iVar7 = iVar7 + -1;
      piVar6 = piVar6 + 2;
    } while (-1 < iVar7);
    _lqc2(auStack_b0);
    if (((iVar8 < 1) || (iVar7 = param_1[0x11], *(int *)(iVar7 + 0x850) == 0)) ||
       (*(float *)(iVar7 + 0x838) <= 0.0)) goto LAB_0018afb0;
    fVar10 = *(float *)(iVar7 + 0x834) / *(float *)(iVar7 + 0x838);
    fVar10 = (float)((int)fVar10 * (uint)(0.0 < fVar10));
    fVar12 = fVar12 * (float)((int)fVar10 * (uint)(fVar10 < 1.0) |
                             (uint)(fVar10 >= 1.0) * 0x3f800000);
  }
  _lqc2(auStack_b0);
LAB_0018afb0:
  auVar13 = _qmtc2(0);
  auVar13 = _vaddbc(in_vf0,auVar13);
  auStack_b0 = _sqc2(auVar13);
  auVar14 = _lqc2(auStack_b0);
  if ((iVar8 != 0) && (0.0 < fVar12)) {
    auVar13 = _vmul(auVar13,auVar13);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar15,auVar13);
    auVar15 = _vmove(auVar15);
    auVar13 = _qmfc2(auVar13._0_4_);
    if (2.3283064e-10 <= auVar13._0_4_) {
      auVar13 = _vmul(auVar14,auVar14);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar15,auVar13);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar13);
      uVar4 = _vwaitq();
      auVar13 = _vmulq(auVar14,uVar4);
      fVar12 = fVar12 / (float)iVar8;
      auStack_a0 = _sqc2(auVar13);
      lVar5 = FUN_001735e0(piVar9);
      if (lVar5 == 0) {
        param_1[0x10] = (int)fVar12;
        param_1[0xc] = auStack_a0._0_4_;
        param_1[0xd] = auStack_a0._4_4_;
        param_1[0xe] = auStack_a0._8_4_;
        param_1[0xf] = auStack_a0._12_4_;
      }
      uVar11 = 0x3f800000;
      FUN_00173640(0x3f800000,piVar9);
      if (0.0 < fVar12) {
        iVar7 = param_1[0x11];
        if (0.0 < *(float *)(iVar7 + 0x10)) {
          fVar10 = *(float *)(*(int *)(iVar7 + 0x7c) + 0x2e0) / *(float *)(iVar7 + 0x10);
          fVar10 = (float)((int)fVar10 * (uint)(0.1 < fVar10) | (uint)(0.1 >= fVar10) * 0x3dcccccd);
          uVar11 = (int)fVar10 * (uint)(fVar10 < 1.0) | (uint)(fVar10 >= 1.0) * 0x3f800000;
        }
        auVar15 = _lqc2(auStack_a0);
        auVar14 = _qmtc2(uVar11);
        auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xc));
        _vaddabc(auVar13,in_vf0);
        _vmsubabc(auVar13,auVar14);
        auVar13 = _vmaddbc(auVar15,auVar14);
        param_1[0x10] = (int)fVar12;
        auVar14 = _qmfc2(auVar13._0_4_);
        auVar13 = _sqc2(auVar13);
        *(undefined1 (*) [16])(param_1 + 0xc) = auVar13;
        FUN_00182510(fVar12,iVar7 + 0x810,auVar14._0_8_);
      }
    }
  }
  lVar5 = FUN_001735e0(piVar9);
  if ((lVar5 != 0) && (lVar5 = FUN_00173610(piVar9), lVar5 != 0)) {
    FUN_00173690(piVar9);
  }
  return;
}


// ==== FUN_0018b168 @ 0018b168 ====

byte FUN_0018b168(int param_1)

{
  byte bVar1;
  
  bVar1 = FUN_00173610(param_1 + 0x20);
  return bVar1 ^ 1;
}


// ==== FUN_0018b190 @ 0018b190 ====

void FUN_0018b190(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int aiStack_e0 [20];
  
  iVar11 = 0;
  lVar4 = FUN_0018b458();
  piVar8 = (int *)param_1;
  if ((*(int *)(piVar8[0x11] + 0xc9c) != 4) &&
     (lVar5 = FUN_0018b400(param_1,DAT_0040f4d0 + 0x30), lVar5 != 0)) {
    iVar11 = 1;
    aiStack_e0[0] = DAT_0040f4d0 + 0x30;
  }
  piVar9 = aiStack_e0 + iVar11;
  iVar10 = 0x2b00;
  iVar2 = 0xf;
  do {
    iVar6 = DAT_0040f4d4 + iVar10;
    if ((((iVar6 != piVar8[0x11]) && (*(char *)(iVar6 + 0x78) != '\0')) &&
        (lVar5 = FUN_0018b458(iVar6 + 0xcc0), lVar4 <= lVar5)) &&
       (lVar5 = FUN_0018b400(param_1,*(undefined4 *)(iVar6 + 0x7c)), lVar5 != 0)) {
      iVar11 = iVar11 + 1;
      *piVar9 = *(int *)(iVar6 + 0x7c);
      piVar9 = piVar9 + 1;
    }
    iVar2 = iVar2 + -1;
    iVar10 = iVar10 + 0x1fd0;
  } while (-1 < iVar2);
  iVar10 = 0;
  iVar2 = 0;
  do {
    iVar10 = iVar10 + 1;
    if (*(int *)((int)piVar8 + iVar2) != 0) {
      bVar1 = false;
      if (0 < iVar11) {
        if (aiStack_e0[0] == *(int *)((int)piVar8 + iVar2)) {
          bVar1 = true;
        }
        else {
          for (iVar6 = 1; iVar6 < iVar11; iVar6 = iVar6 + 1) {
            if (aiStack_e0[iVar6] == *(int *)((int)piVar8 + iVar2)) {
              bVar1 = true;
              break;
            }
          }
        }
      }
      if (!bVar1) {
        *(undefined4 *)((int)piVar8 + iVar2) = 0;
      }
    }
    iVar2 = iVar10 * 8;
  } while (iVar10 < 4);
  iVar2 = 0;
  if (0 < iVar11) {
    iVar10 = 0;
    do {
      iVar2 = iVar2 + 1;
      bVar1 = false;
      iVar6 = -1;
      iVar7 = 0;
      if (*(int *)((int)aiStack_e0 + iVar10) != *piVar8) {
        iVar3 = 0;
        do {
          if (*(int *)((int)piVar8 + iVar3) == 0) {
            iVar6 = iVar7;
          }
          iVar7 = iVar7 + 1;
          if (3 < iVar7) goto LAB_0018b388;
          iVar3 = iVar7 * 8;
        } while (*(int *)((int)aiStack_e0 + iVar10) != piVar8[iVar7 * 2]);
      }
      bVar1 = true;
LAB_0018b388:
      if ((!bVar1) && (iVar6 != -1)) {
        iVar10 = *(int *)((int)aiStack_e0 + iVar10);
        piVar8[iVar6 * 2] = iVar10;
        if (*(int *)(iVar10 + 0xc4) == 2) {
          piVar8[iVar6 * 2 + 1] = 0x40400000;
        }
        else {
          piVar8[iVar6 * 2 + 1] = 0x40000000;
        }
      }
      iVar10 = iVar2 * 4;
    } while (iVar2 < iVar11);
  }
  return;
}


// ==== FUN_0018b400 @ 0018b400 ====

bool FUN_0018b400(int param_1,int param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  auVar2 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 0x44) + 0x7c) + 0xa0));
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar3,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_4_ <= 16.0;
}


// ==== FUN_0018b458 @ 0018b458 ====

int FUN_0018b458(int param_1)

{
  int iVar1;
  
  iVar1 = 10000;
  if (*(int *)(*(int *)(param_1 + 0x44) + 0xc9c) != 4) {
    iVar1 = 0;
  }
  if (*(float *)(*(int *)(param_1 + 0x44) + 0x834) == 0.0) {
    iVar1 = iVar1 + 100;
  }
  return iVar1;
}


// ==== FUN_0018b490 @ 0018b490 ====

void FUN_0018b490(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*param_1 == param_2) {
      *param_1 = 0;
      return;
    }
    param_1 = param_1 + 2;
  } while (iVar1 < 4);
  return;
}


// ==== FUN_0018b4c0 @ 0018b4c0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0018b4c0(int param_1,int *param_2,undefined1 (*param_3) [16],float *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 in_vuI;
  undefined4 uVar20;
  float fStack_13c;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  
  iVar5 = *(int *)(param_1 + 0x44);
  if (*(int *)(iVar5 + 0x754) < 2) {
    if (*(int *)(*param_2 + 0x3a4) != *(int *)(*(int *)(iVar5 + 0x7c) + 0x3a4)) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x44);
  }
  bVar1 = *(int *)(iVar5 + 0x850) != 0;
  if (bVar1) {
    auVar12 = _vmaxbc(in_vf0,in_vf0);
    auVar11 = _qmtc2(*(float *)(iVar5 + 0x830) * 0.017453292);
    auVar11 = _vaddbc(in_vf0,auVar11);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar11 = _vsubi(auVar11,in_vuI);
    auVar11 = _vabs(auVar11);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar11,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar12,in_vuI);
    _vmaddai(auVar12,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar11,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar11 = _vmsubi(auVar12,in_vuI);
    auVar11 = _vabs(auVar11);
    _ctc2(0x3e800000);
    _vnop();
    auVar11 = _vsubi(auVar11,in_vuI);
    auVar15 = _vmul(auVar11,auVar11);
    _ctc2(0xc2992661);
    _vnop();
    auVar12 = _vmuli(auVar11,in_vuI);
    auVar19 = _vmul(auVar15,auVar15);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar16 = _vmuli(auVar11,in_vuI);
    _ctc2(0xc2255de0);
    _vnop();
    auVar18 = _vmuli(auVar11,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar17 = _vmuli(auVar11,in_vuI);
    auVar12 = _vmul(auVar12,auVar15);
    auVar13 = _vmul(auVar19,auVar19);
    _vmula(auVar18,auVar15);
    _vmadda(auVar12,auVar19);
    _ctc2(0x40c90fda);
    _vmadda(auVar17,auVar19);
    _vmaddai(auVar11,in_vuI);
    auVar11 = _vmadd(auVar16,auVar13);
    auVar11 = _sqc2(auVar11);
    auVar12 = _qmtc2(0);
    _lqc2(auVar11);
    auVar11 = _lqc2(auVar11);
    _vaddbc(in_vf0,auVar11);
    auVar11 = _vaddbc(in_vf0,auVar12);
    auStack_130 = _sqc2(auVar11);
  }
  bVar2 = false;
  auVar11 = *(undefined1 (*) [16])(*param_2 + 0xa0);
  auStack_110 = *(undefined1 (*) [16])(*param_2 + 0xa0);
  lVar7 = FUN_00135550();
  if (lVar7 == 0) {
    iVar5 = *param_2;
LAB_0018b81c:
    auStack_120 = *(undefined1 (*) [16])(iVar5 + 0x1b0);
    bVar2 = 0.0 < *(float *)(iVar5 + 0x2e0);
    if (*(int *)(iVar5 + 0xc4) != 2) {
      iVar5 = *(int *)(param_1 + 0x44);
      goto LAB_0018b89c;
    }
    lVar7 = FUN_00135550();
    if (lVar7 == 0) {
      iVar5 = *(int *)(param_1 + 0x44);
      goto LAB_0018b89c;
    }
    iVar5 = FUN_00135550(*param_2);
    if (*(int *)(iVar5 + 0x80) != 0) {
      iVar5 = *(int *)(param_1 + 0x44);
      goto LAB_0018b89c;
    }
    iVar5 = FUN_00135550(*param_2);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x50));
    auVar13 = _qmtc2(0x3f000000);
    auVar12 = _vmulbc(auVar12,auVar13);
    auVar11 = _lqc2(auVar11);
    auVar11 = _vadd(auVar11,auVar12);
    auStack_110 = _sqc2(auVar11);
  }
  else {
    iVar5 = FUN_00135550(*param_2);
    if (*(int *)(iVar5 + 0x80) != 1) {
      iVar5 = *param_2;
      goto LAB_0018b81c;
    }
    iVar5 = FUN_00135550(*param_2);
    if (*(int *)(iVar5 + 0x850) != 0) {
      auVar12 = _vmaxbc(in_vf0,in_vf0);
      auVar11 = _qmtc2(*(float *)(iVar5 + 0x830) * 0.017453292);
      auVar11 = _vaddbc(in_vf0,auVar11);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar11 = _vsubi(auVar11,in_vuI);
      auVar11 = _vabs(auVar11);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar11,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar12,in_vuI);
      _vmaddai(auVar12,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar11,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar11 = _vmsubi(auVar12,in_vuI);
      auVar11 = _vabs(auVar11);
      _ctc2(0x3e800000);
      _vnop();
      auVar11 = _vsubi(auVar11,in_vuI);
      auVar15 = _vmul(auVar11,auVar11);
      _ctc2(0xc2992661);
      _vnop();
      auVar12 = _vmuli(auVar11,in_vuI);
      auVar19 = _vmul(auVar15,auVar15);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar16 = _vmuli(auVar11,in_vuI);
      _ctc2(0xc2255de0);
      _vnop();
      auVar18 = _vmuli(auVar11,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar17 = _vmuli(auVar11,in_vuI);
      auVar12 = _vmul(auVar12,auVar15);
      auVar13 = _vmul(auVar19,auVar19);
      _vmula(auVar18,auVar15);
      _vmadda(auVar12,auVar19);
      _ctc2(0x40c90fda);
      _vmadda(auVar17,auVar19);
      _vmaddai(auVar11,in_vuI);
      auVar11 = _vmadd(auVar16,auVar13);
      bVar2 = true;
      auVar11 = _sqc2(auVar11);
      auVar12 = _qmtc2(0);
      _lqc2(auVar11);
      auVar11 = _lqc2(auVar11);
      _vaddbc(in_vf0,auVar11);
      auVar11 = _vaddbc(in_vf0,auVar12);
      auStack_120 = _sqc2(auVar11);
    }
  }
  iVar5 = *(int *)(param_1 + 0x44);
LAB_0018b89c:
  auVar12 = _lqc2(auStack_110);
  auVar11 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar5 + 0x7c) + 0xa0));
  auVar11 = _vsub(auVar11,auVar12);
  auVar11 = _sqc2(auVar11);
  fStack_13c = auVar11._4_4_;
  if (ABS(fStack_13c) <= 0.5) {
    auVar11 = _qmtc2(0);
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _vaddbc(in_vf0,auVar11);
    auVar13 = _vmove(auVar11);
    auVar11 = _vmul(auVar13,auVar13);
    auVar15 = _vmove(auVar12);
    _vaddabc(auVar11,auVar11);
    auVar11 = _vmaddbc(auVar12,auVar11);
    auVar11 = _qmfc2(auVar11._0_4_);
    if (2.3283064e-10 <= auVar11._0_4_) {
      auVar11 = _vmul(auVar13,auVar13);
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar15,auVar11);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar11);
      auVar11 = _qmfc2(auVar11._0_4_);
      auVar11 = _qmtc2(SQRT(auVar11._0_4_));
      uVar20 = _vwaitq();
      auVar13 = _vmulq(auVar13,uVar20);
      auVar12 = _qmfc2(auVar11._0_4_);
      auVar11 = _sqc2(auVar13);
      fVar10 = auVar12._0_4_;
      auVar12 = _lqc2(auVar11);
      if (0x37800000 < ((uint)fVar10 & 0x7f800000)) {
        if ((float)param_2[1] < fVar10) {
          return 0;
        }
        if (bVar1) {
          auVar12 = _sqc2(auVar12);
          auVar13 = _sqc2(auVar15);
          uVar6 = FUN_00182968(*(int *)(param_1 + 0x44) + 0x810);
          uVar4 = DAT_004432cc;
          uVar20 = DAT_004432c8;
          uVar3 = _DAT_004432c0;
          auVar15 = _lqc2(auStack_110);
          auVar16 = _qmtc2(uVar6);
          auVar16 = _vsub(auVar15,auVar16);
          auVar15 = _lqc2(auVar13);
          auVar13 = _vmul(auVar16,auVar16);
          auVar12 = _lqc2(auVar12);
          _vaddabc(auVar13,auVar13);
          auVar13 = _vmaddbc(auVar15,auVar13);
          auVar13 = _qmfc2(auVar13._0_4_);
          if (2.3283064e-10 <= auVar13._0_4_) {
            auVar13 = _vmul(auVar16,auVar16);
            _vaddabc(auVar13,auVar13);
            auVar13 = _vmaddbc(auVar15,auVar13);
            fVar8 = *(float *)(*param_2 + 0x318);
            auVar13 = _qmfc2(auVar13._0_4_);
            if (auVar13._0_4_ < fVar8 * fVar8) {
              if (*(int *)(*param_2 + 0xc4) == 2) {
                FUN_00182ea8(*(int *)(param_1 + 0x44) + 0x810);
                return 0;
              }
              return 0;
            }
            auVar13 = _lqc2(auVar11);
            auVar18 = _vsub(in_vf0,auVar13);
            auVar13 = _lqc2(auStack_130);
            auVar13 = _vmul(auVar13,auVar13);
            auVar17 = _lqc2(auStack_130);
            auVar16 = _vmul(auVar18,auVar18);
            _vaddabc(auVar13,auVar13);
            auVar13 = _vmaddbc(auVar15,auVar13);
            _vaddabc(auVar16,auVar16);
            auVar16 = _vmaddbc(auVar15,auVar16);
            _vnop();
            _vnop();
            _vnop();
            _vrsqrt(in_vf0,auVar13);
            auVar13 = _vaddbc(in_vf0,in_vf0);
            uVar6 = _vwaitq();
            auVar19 = _vmulq(auVar17,uVar6);
            _vmulq(auVar13,uVar6);
            _vnop();
            _vnop();
            _vnop();
            _vrsqrt(in_vf0,auVar16);
            auVar16 = _vaddbc(in_vf0,in_vf0);
            uVar6 = _vwaitq();
            auVar13 = _vmulq(auVar18,uVar6);
            _vmulq(auVar16,uVar6);
            auVar13 = _sqc2(auVar13);
            auVar14 = _vaddbc(in_vf0,in_vf0);
            auVar16 = _sqc2(auVar14);
            auVar17 = _lqc2(auVar13);
            auVar18 = _vmul(auVar19,auVar17);
            auVar17 = _sqc2(auVar19);
            auVar19 = _vsubbc(in_vf0,in_vf0);
            _vaddabc(auVar18,auVar18);
            auVar18 = _vmaddbc(auVar14,auVar18);
            auVar18 = _vmax(auVar18,auVar19);
            auVar12 = _sqc2(auVar12);
            auVar18 = _vminibc(auVar18,in_vf0);
            auVar15 = _sqc2(auVar15);
            auVar18 = _qmfc2(auVar18._0_4_);
            fVar8 = (float)acosf(auVar18._0_4_);
            auVar17 = _lqc2(auVar17);
            auVar13 = _lqc2(auVar13);
            _vopmula(auVar17,auVar13);
            auVar17 = _vopmsub(auVar13,auVar17);
            auVar13._8_4_ = uVar20;
            auVar13._0_8_ = uVar3;
            auVar13._12_4_ = uVar4;
            auVar13 = _lqc2(auVar13);
            auVar17 = _vmul(auVar17,auVar13);
            auVar13 = _lqc2(auVar16);
            _vaddabc(auVar17,auVar17);
            auVar13 = _vmaddbc(auVar13,auVar17);
            auVar13 = _qmfc2(auVar13._0_4_);
            fVar8 = fVar8 * 57.29578;
            auVar12 = _lqc2(auVar12);
            auVar15 = _lqc2(auVar15);
            if (0.0 < auVar13._0_4_) {
              fVar8 = -fVar8;
            }
            fVar9 = ABS(fVar8);
            if (fVar9 < 10.0) {
              if (fVar9 < 0.5) {
                auVar12 = _lqc2(auVar11);
                if (0.0 <= fVar8) {
                  auVar11._8_4_ = uVar20;
                  auVar11._0_8_ = uVar3;
                  auVar11._12_4_ = uVar4;
                  auVar11 = _lqc2(auVar11);
                  _vopmula(auVar12,auVar11);
                  auVar12 = _vopmsub(auVar11,auVar12);
                }
                else {
                  auVar12._8_4_ = uVar20;
                  auVar12._0_8_ = uVar3;
                  auVar12._12_4_ = uVar4;
                  auVar12 = _lqc2(auVar12);
                  auVar12 = _vsub(in_vf0,auVar12);
                  auVar11 = _lqc2(auVar11);
                  _vopmula(auVar11,auVar12);
                  auVar12 = _vopmsub(auVar12,auVar11);
                }
              }
              fVar10 = (1.0 - fVar9 / 10.0) * -0.5 * fVar10 + fVar10;
            }
          }
        }
        auVar11 = _lqc2(auStack_120);
        if (bVar2) {
          auVar11 = _vmul(auVar11,auVar11);
          _vaddabc(auVar11,auVar11);
          auVar11 = _vmaddbc(auVar15,auVar11);
          auVar11 = _qmfc2(auVar11._0_4_);
          if (2.3283064e-10 <= auVar11._0_4_) {
            auVar11 = _vmul(auVar12,auVar12);
            _vaddabc(auVar11,auVar11);
            auVar11 = _vmaddbc(auVar15,auVar11);
            auVar11 = _qmfc2(auVar11._0_4_);
            if (2.3283064e-10 <= auVar11._0_4_) {
              auVar11 = _lqc2(auStack_120);
              auVar16 = _vmul(auVar12,auVar12);
              auVar13 = _vmul(auVar11,auVar11);
              _vaddabc(auVar16,auVar16);
              auVar16 = _vmaddbc(auVar15,auVar16);
              _vaddabc(auVar13,auVar13);
              auVar13 = _vmaddbc(auVar15,auVar13);
              auVar15 = _vmove(auVar12);
              _vnop();
              _vnop();
              _vnop();
              _vrsqrt(in_vf0,auVar13);
              auVar13 = _vaddbc(in_vf0,in_vf0);
              uVar20 = _vwaitq();
              auVar11 = _vmulq(auVar11,uVar20);
              _vmulq(auVar13,uVar20);
              _vnop();
              _vnop();
              _vnop();
              _vrsqrt(in_vf0,auVar16);
              auVar16 = _vaddbc(in_vf0,in_vf0);
              uVar20 = _vwaitq();
              auVar13 = _vmulq(auVar15,uVar20);
              _vmulq(auVar16,uVar20);
              auVar11 = _vmul(auVar11,auVar13);
              auVar13 = _vaddbc(in_vf0,in_vf0);
              _vaddabc(auVar11,auVar11);
              auVar11 = _vmaddbc(auVar13,auVar11);
              auVar13 = _vsubbc(in_vf0,in_vf0);
              auVar13 = _vmax(auVar11,auVar13);
              auVar11 = _sqc2(auVar12);
              auVar12 = _vminibc(auVar13,in_vf0);
              auVar12 = _qmfc2(auVar12._0_4_);
              fVar8 = (float)acosf(auVar12._0_4_);
              auVar12 = _lqc2(auVar11);
              if (fVar8 * 57.29578 < 10.0) {
                fVar10 = fVar10 * 0.5;
              }
            }
          }
        }
        if (0x37800000 < ((uint)fVar10 & 0x7f800000)) {
          fVar8 = (1.0 / fVar10 - 1.0 / (float)param_2[1]) * 0.5;
          if (fVar10 < *(float *)(*param_2 + 0x318) * 0.3) {
            fVar10 = (1.0 - fVar10 / *(float *)(*param_2 + 0x318)) * 0.37 + 0.38;
          }
          else {
            fVar10 = 0.38;
          }
          fVar10 = (float)((int)fVar8 * (uint)(fVar8 < fVar10) |
                          (int)fVar10 * (uint)(fVar8 >= fVar10));
          auVar11 = _sqc2(auVar12);
          *param_3 = auVar11;
          *param_4 = fVar10;
          if (fVar10 <= 0.0) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


// ==== FUN_0018be60 @ 0018be60 ====

undefined4 FUN_0018be60(int *param_1,int *param_2)

{
  if (*param_1 < 0x12) {
    *param_2 = *param_1;
    param_2[1] = *param_1;
    return 1;
  }
  return 0;
}


// ==== FUN_0018be88 @ 0018be88 ====

void FUN_0018be88(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_0018be90 @ 0018be90 ====

undefined4 FUN_0018be90(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_2 + 1) = *param_1;
  *param_2 = *(undefined4 *)param_1;
  return 1;
}


// ==== FUN_0018beb0 @ 0018beb0 ====

void FUN_0018beb0(undefined8 param_1,undefined4 param_2)

{
  FUN_0018be88(param_1,0x13);
  *(undefined4 *)((int)param_1 + 4) = param_2;
  return;
}


// ==== FUN_0018bee8 @ 0018bee8 ====

undefined4 FUN_0018bee8(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined8 *)(param_2 + 1) = *param_1;
  *(undefined8 *)(param_2 + 3) = uVar1;
  *(undefined8 *)(param_2 + 5) = uVar2;
  *param_2 = *(undefined4 *)param_1;
  return 1;
}


// ==== FUN_0018bf28 @ 0018bf28 ====

void FUN_0018bf28(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  
  FUN_0018be88(param_2,0x14);
  auVar3 = _qmtc2((int)param_3);
  iVar2 = (int)param_2;
  *(undefined1 *)(iVar2 + 0x14) = param_4;
  auVar1 = _qmfc2(auVar3._0_4_);
  auVar3 = _qmfc2(auVar3._0_4_);
  *(int *)(iVar2 + 4) = auVar1._0_4_;
  *(undefined4 *)(iVar2 + 0x10) = param_1;
  *(int *)(iVar2 + 8) = (int)((ulong)param_3 >> 0x20);
  *(int *)(iVar2 + 0xc) = auVar3._8_4_;
  return;
}


// ==== FUN_0018bfa8 @ 0018bfa8 ====

undefined4 FUN_0018bfa8(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined8 *)(param_2 + 1) = *param_1;
  *(undefined8 *)(param_2 + 3) = uVar1;
  *(undefined8 *)(param_2 + 5) = uVar2;
  *param_2 = *(undefined4 *)param_1;
  return 1;
}


// ==== FUN_0018bfe8 @ 0018bfe8 ====

void FUN_0018bfe8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  
  FUN_0018be88(param_1,0x15);
  auVar3 = _qmtc2((int)param_3);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x14) = param_4;
  auVar1 = _qmfc2(auVar3._0_4_);
  auVar3 = _qmfc2(auVar3._0_4_);
  *(undefined1 *)(iVar2 + 4) = param_2;
  *(int *)(iVar2 + 8) = auVar1._0_4_;
  *(int *)(iVar2 + 0xc) = (int)((ulong)param_3 >> 0x20);
  *(int *)(iVar2 + 0x10) = auVar3._8_4_;
  return;
}


// ==== FUN_0018c068 @ 0018c068 ====

undefined4 FUN_0018c068(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_2 + 1) = *param_1;
  *param_2 = *(undefined4 *)param_1;
  return 1;
}


// ==== FUN_0018c088 @ 0018c088 ====

void FUN_0018c088(undefined8 param_1,undefined4 param_2)

{
  FUN_0018be88(param_1,0x16);
  *(undefined4 *)((int)param_1 + 4) = param_2;
  return;
}


// ==== FUN_0018c0c0 @ 0018c0c0 ====

undefined8 FUN_0018c0c0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < 0x12) {
    uVar2 = FUN_0018be60();
  }
  else if (iVar1 == 0x14) {
    uVar2 = FUN_0018bee8();
  }
  else if (iVar1 < 0x15) {
    uVar2 = 0;
    if (iVar1 == 0x13) {
      uVar2 = FUN_0018be90();
    }
  }
  else if (iVar1 == 0x15) {
    uVar2 = FUN_0018bfa8();
  }
  else {
    uVar2 = 0;
    if (iVar1 == 0x16) {
      uVar2 = FUN_0018c068();
    }
  }
  return uVar2;
}


// ==== FUN_0018c168 @ 0018c168 ====

void FUN_0018c168(undefined4 *param_1)

{
  param_1[1] = 0x17;
  *param_1 = 0x17;
  return;
}


// ==== FUN_0018c178 @ 0018c178 ====

void FUN_0018c178(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  uVar3 = 0;
  puVar2 = puVar1;
  do {
    *puVar2 = 0;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 2);
  *(int *)(param_1 + 0xf0) = param_1;
  *(int *)(param_1 + 0xf4) = param_1 + 0x70;
  uVar3 = 0;
  do {
    puVar2 = (undefined4 *)*puVar1;
    uVar3 = uVar3 + 1;
    puVar1 = puVar1 + 1;
    *puVar2 = param_2;
  } while (uVar3 < 2);
  *(undefined4 *)(param_1 + 0xf8) = 2;
  return;
}


// ==== FUN_0018c1e0 @ 0018c1e0 ====

undefined4 FUN_0018c1e0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)(param_1 + 0xf0);
  uVar3 = 0;
  iVar1 = *piVar2;
  while( true ) {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8));
    if (1 < uVar3) break;
    iVar1 = *piVar2;
  }
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 2;
  return 1;
}


// ==== FUN_0018c260 @ 0018c260 ====

void FUN_0018c260(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((int)param_1 + 0xf8);
  if (iVar1 < 2) {
    iVar1 = *(int *)((int)param_1 + iVar1 * 4 + 0xf0);
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
    lVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x34))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x30));
    if (lVar2 != 0) {
      FUN_0018c368(param_1);
    }
  }
  return;
}


// ==== FUN_0018c2e0 @ 0018c2e0 ====

void FUN_0018c2e0(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_0018c3c0();
  if (lVar2 != 0) {
    iVar3 = (int)param_1;
    if (*param_2 == 0) {
      FUN_0018c688(param_1,param_2 + 4);
      iVar1 = *param_2;
    }
    else if (*param_2 == 1) {
      FUN_0018cc20(iVar3 + 0x70,param_2 + 4);
      iVar1 = *param_2;
    }
    else {
      iVar1 = *param_2;
    }
    *(undefined4 *)(iVar3 + 0x100) = param_3;
    *(int *)(iVar3 + 0xf8) = iVar1;
  }
  return;
}


// ==== FUN_0018c368 @ 0018c368 ====

void FUN_0018c368(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xf8) < 2) {
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0xf8) * 4 + 0xf0);
    iVar2 = *(int *)(iVar1 + 4);
    (**(code **)(iVar2 + 0x2c))(iVar1 + *(short *)(iVar2 + 0x28));
    *(undefined4 *)(param_1 + 0xf8) = 2;
  }
  return;
}


// ==== FUN_0018c3c0 @ 0018c3c0 ====

undefined8 FUN_0018c3c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0xf8) == 2) {
    uVar3 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0xf8) * 4 + 0xf0);
    iVar2 = *(int *)(iVar1 + 4);
    uVar3 = (**(code **)(iVar2 + 0x34))(iVar1 + *(short *)(iVar2 + 0x30));
  }
  return uVar3;
}


// ==== FUN_0018c408 @ 0018c408 ====

void FUN_0018c408(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0xf8) * 4 + 0xf0);
  iVar2 = *(int *)(iVar1 + 4);
  (**(code **)(iVar2 + 0x3c))(iVar1 + *(short *)(iVar2 + 0x38));
  return;
}


// ==== FUN_0018c440 @ 0018c440 ====

void FUN_0018c440(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  iVar4 = *param_1;
  iVar1 = param_1[0xd];
  iVar2 = *(int *)(iVar4 + 0x7c);
  iVar3 = *(int *)(iVar2 + 0x330);
  if (iVar1 == 1) {
    *(int *)(iVar4 + 8) = param_1[0x14];
    *(int *)(*param_1 + 4) = param_1[0x14];
    *(int *)*param_1 = param_1[0x14];
    *(int *)(*param_1 + 0x10) = param_1[0xf];
    FUN_0013ef10(*param_1,*(undefined8 *)(param_1 + 0x10),1);
    fVar6 = (float)param_1[0xe] - *(float *)(DAT_0040f4d0 + 0x1c);
    param_1[0xe] = (int)fVar6;
    if (0.0 < fVar6) {
      return;
    }
    iVar4 = 2;
  }
  else if (iVar1 < 2) {
    if (iVar1 != 0) {
      return;
    }
    *(int *)(iVar4 + 8) = param_1[0x14];
    *(int *)(*param_1 + 4) = param_1[0x14];
    *(int *)*param_1 = param_1[0x14];
    *(undefined4 *)(*param_1 + 0x10) = 0;
    FUN_0013ef10(*param_1,*(undefined8 *)(param_1 + 0x18),1);
    if (*(undefined4 **)(iVar3 + 0x90) == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined4 **)(iVar3 + 0x90);
    }
    lVar5 = FUN_001a7df0(iVar3,0,uVar11);
    if (lVar5 != 2) {
      return;
    }
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
    auVar9 = _vsub(auVar7,auVar8);
    auVar8 = _vmul(auVar9,auVar9);
    auVar7 = _sqc2(auVar9);
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
    _vaddabc(auVar8,auVar8);
    auVar7 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar11 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar11);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar6 = auVar7._0_4_;
    param_1[0xf] = (int)fVar6;
    if (0x37800000 < ((uint)fVar6 & 0x7f800000)) {
      auVar7 = _qmtc2(1.0 / fVar6);
      param_1[0xf] = (int)(fVar6 / 0.33333334);
      auVar7 = _vmulbc(auVar9,auVar7);
      auVar7 = _sqc2(auVar7);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
    }
    FUN_001a7450(iVar3);
    FUN_001a7188(iVar3);
    FUN_001a61d0(iVar3,param_1[0xc]);
    iVar4 = 1;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    *(int *)(iVar4 + 8) = param_1[0x14];
    *(int *)(*param_1 + 4) = param_1[0x14];
    *(int *)*param_1 = param_1[0x14];
    *(undefined4 *)(*param_1 + 0x10) = 0;
    FUN_0013ef10(*param_1,*(undefined8 *)(param_1 + 0x18),1);
    lVar5 = FUN_001a6840(iVar3,0,0);
    iVar4 = 3;
    if (lVar5 == 0) {
      return;
    }
  }
  param_1[0xd] = iVar4;
  return;
}


// ==== FUN_0018c688 @ 0018c688 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018c688(int *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  
  auVar8 = _qmtc2(0);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _lqc2(*param_2);
  auVar9 = _lqc2(_DAT_004432d0);
  auVar6 = _vmul(auVar9,auVar9);
  auVar7 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 4) = auVar7;
  _vaddabc(auVar6,auVar6);
  auVar7 = _vmaddbc(auVar14,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar7 = _vmulq(auVar9,uVar15);
  _vmulq(auVar6,uVar15);
  auVar6 = _lqc2(param_2[1]);
  auVar12 = _vsub(auVar6,auVar11);
  auVar7 = _sqc2(auVar7);
  _vmove(auVar12);
  param_1[0xc] = (int)(param_2 + 3);
  auVar13 = _vaddbc(in_vf0,auVar8);
  auVar6 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 8) = auVar6;
  auVar6 = _vmul(auVar13,auVar13);
  auVar8 = _vmove(auVar13);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar14,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar10 = _vmulq(auVar8,uVar15);
  _vmulq(auVar6,uVar15);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmul(auVar10,auVar10);
  auVar6 = _sqc2(auVar6);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar14,auVar8);
  auVar9 = _vmove(auVar10);
  auVar14 = _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar11 = _vmulq(auVar9,uVar15);
  _vmulq(auVar8,uVar15);
  iVar1 = *(int *)(*param_1 + 0x7c);
  auVar9 = _lqc2(auVar7);
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar8;
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar15 = DAT_004432c0;
  auVar8 = _vmul(auVar11,auVar9);
  auVar9 = _lqc2(auVar6);
  _vaddabc(auVar8,auVar8);
  auVar9 = _vmaddbc(auVar9,auVar8);
  auVar8 = _sqc2(auVar13);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar8;
  auVar8 = _vmax(auVar9,auVar14);
  auVar8 = _vminibc(auVar8,in_vf0);
  auVar9 = _qmfc2(auVar8._0_4_);
  param_1[0xe] = 0x3eaaaaab;
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar8;
  auVar8 = _sqc2(auVar11);
  fVar5 = (float)acosf(auVar9._0_4_);
  auVar8 = _lqc2(auVar8);
  auVar7 = _lqc2(auVar7);
  _vopmula(auVar8,auVar7);
  auVar8 = _vopmsub(auVar7,auVar8);
  auVar7._4_4_ = uVar2;
  auVar7._0_4_ = uVar15;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar4;
  auVar7 = _lqc2(auVar7);
  auVar7 = _vmul(auVar8,auVar7);
  auVar6 = _lqc2(auVar6);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar6,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar5 = fVar5 * 57.29578;
  if (0.0 < auVar7._0_4_) {
    fVar5 = -fVar5;
  }
  param_1[0xd] = 0;
  param_1[0x14] = (int)fVar5;
  FUN_00182318(*param_1 + 0x810,0);
  FUN_00188148(*param_1 + 0x290,1);
  *(undefined1 *)(iVar1 + 0x3b3) = 0;
  *(undefined1 *)(iVar1 + 0x3af) = 1;
  *(undefined1 *)(iVar1 + 0x3ab) = 0;
  return;
}


// ==== FUN_0018c878 @ 0018c878 ====

void FUN_0018c878(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x7c);
  *(undefined1 *)(iVar1 + 0x3ab) = 1;
  *(undefined1 *)(iVar1 + 0x3af) = 0;
  FUN_001a73f0(*(undefined4 *)(iVar1 + 0x330));
  FUN_00182318(*param_1 + 0x810,1);
  FUN_00188148(*param_1 + 0x290,0);
  return;
}


// ==== FUN_0018c8e8 @ 0018c8e8 ====

bool FUN_0018c8e8(int param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x34) < 3) {
    if (*(int *)(param_1 + 0x34) < 1) {
      bVar1 = false;
    }
    else {
      lVar2 = strcmp(param_2,*(undefined4 *)(param_1 + 0x30));
      bVar1 = lVar2 == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ==== FUN_0018c938 @ 0018c938 ====

void FUN_0018c938(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  iVar4 = *param_1;
  iVar1 = param_1[0xe];
  iVar2 = *(int *)(iVar4 + 0x7c);
  iVar3 = *(int *)(iVar2 + 0x330);
  if (iVar1 == 1) {
    *(int *)(iVar4 + 8) = param_1[0x18];
    *(int *)(*param_1 + 4) = param_1[0x18];
    *(int *)*param_1 = param_1[0x18];
    *(int *)(*param_1 + 0x10) = param_1[0x10];
    FUN_0013ef10(*param_1);
    fVar6 = (float)param_1[0xf] - *(float *)(DAT_0040f4d0 + 0x1c);
    param_1[0xf] = (int)fVar6;
    if (0.0 < fVar6) {
      return;
    }
    iVar4 = 2;
  }
  else if (iVar1 < 2) {
    if (iVar1 != 0) {
      return;
    }
    *(int *)(iVar4 + 8) = param_1[0x18];
    *(int *)(*param_1 + 4) = param_1[0x18];
    *(int *)*param_1 = param_1[0x18];
    *(undefined4 *)(*param_1 + 0x10) = 0;
    FUN_0013ef10(*param_1);
    if (*(undefined4 **)(iVar3 + 0x90) == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined4 **)(iVar3 + 0x90);
    }
    lVar5 = FUN_001a7df0(iVar3,0,uVar11);
    if (lVar5 != 2) {
      return;
    }
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
    auVar8 = _vsub(auVar9,auVar7);
    auVar7 = _vmul(auVar8,auVar8);
    auVar9 = _sqc2(auVar8);
    *(undefined1 (*) [16])(param_1 + 0x14) = auVar9;
    _vaddabc(auVar7,auVar7);
    auVar9 = _vmaddbc(auVar10,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar11 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar11);
    auVar9 = _qmfc2(auVar9._0_4_);
    fVar6 = auVar9._0_4_;
    param_1[0x10] = (int)fVar6;
    if (0x37800000 < ((uint)fVar6 & 0x7f800000)) {
      auVar9 = _qmtc2(1.0 / fVar6);
      param_1[0x10] = (int)(fVar6 / 0.33333334);
      auVar9 = _vmulbc(auVar8,auVar9);
      auVar9 = _sqc2(auVar9);
      *(undefined1 (*) [16])(param_1 + 0x14) = auVar9;
    }
    FUN_001a7450(iVar3);
    FUN_001a7188(iVar3);
    FUN_001a61d0(iVar3,param_1[0xc]);
    iVar4 = 1;
  }
  else if (iVar1 == 2) {
    *(int *)(iVar4 + 8) = param_1[0x18];
    *(int *)(*param_1 + 4) = param_1[0x18];
    *(int *)*param_1 = param_1[0x18];
    *(undefined4 *)(*param_1 + 0x10) = 0;
    FUN_0013ef10(*param_1);
    fVar6 = *(float *)(iVar2 + 0xa4);
    auVar9 = *(undefined1 (*) [16])(iVar2 + 0xa0);
    lVar5 = FUN_001a6840(iVar3,0,0);
    if (lVar5 == 0) {
      if (SUB124(*(undefined1 (*) [12])(param_1 + 8),4) < fVar6) {
        return;
      }
      auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
    }
    else {
      auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 8));
    }
    _lqc2(auVar9);
    auVar9 = _vaddbc(in_vf0,auVar7);
    auVar9 = _qmfc2(auVar9._0_4_);
    FUN_00126030(iVar2,auVar9._0_8_);
    *(undefined1 *)(iVar2 + 0x3af) = 0;
    *(undefined1 *)(iVar2 + 0x3ab) = 1;
    FUN_001a61d0(iVar3,param_1[0xd]);
    iVar4 = 3;
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    lVar5 = FUN_001a6840(iVar3,0,0);
    iVar4 = 4;
    if (lVar5 == 0) {
      return;
    }
  }
  param_1[0xe] = iVar4;
  return;
}


// ==== FUN_0018cc20 @ 0018cc20 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018cc20(int *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  
  auVar8 = _qmtc2(0);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _lqc2(*param_2);
  auVar9 = _lqc2(_DAT_004432d0);
  auVar6 = _vmul(auVar9,auVar9);
  auVar7 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 4) = auVar7;
  _vaddabc(auVar6,auVar6);
  auVar7 = _vmaddbc(auVar10,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar14 = _vwaitq();
  auVar7 = _vmulq(auVar9,uVar14);
  _vmulq(auVar6,uVar14);
  auVar9 = _lqc2(param_2[1]);
  auVar13 = _vsub(auVar9,auVar12);
  auVar7 = _sqc2(auVar7);
  _vmove(auVar13);
  auVar11 = _vaddbc(in_vf0,auVar8);
  param_1[0xd] = (int)(param_2 + 4);
  auVar6 = _vmul(auVar11,auVar11);
  auVar8 = _vmove(auVar11);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar10,auVar6);
  param_1[0xc] = (int)(param_2 + 3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar14 = _vwaitq();
  auVar12 = _vmulq(auVar8,uVar14);
  _vmulq(auVar6,uVar14);
  auVar6 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 8) = auVar6;
  auVar6 = _vmul(auVar12,auVar12);
  auVar8 = _vmove(auVar12);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar10,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar14 = _vwaitq();
  auVar10 = _vmulq(auVar8,uVar14);
  _vmulq(auVar6,uVar14);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _lqc2(auVar7);
  auVar6 = _sqc2(auVar6);
  auVar8 = _vmul(auVar10,auVar8);
  iVar1 = *(int *)(*param_1 + 0x7c);
  auVar9 = _lqc2(auVar6);
  _vaddabc(auVar8,auVar8);
  auVar9 = _vmaddbc(auVar9,auVar8);
  auVar8 = _sqc2(auVar13);
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar8;
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar14 = DAT_004432c0;
  auVar8 = _vsubbc(in_vf0,in_vf0);
  auVar9 = _vmax(auVar9,auVar8);
  auVar8 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar8;
  auVar8 = _vminibc(auVar9,in_vf0);
  auVar9 = _qmfc2(auVar8._0_4_);
  param_1[0xf] = 0x3eaaaaab;
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar8;
  auVar8 = _sqc2(auVar10);
  fVar5 = (float)acosf(auVar9._0_4_);
  auVar7 = _lqc2(auVar7);
  auVar8 = _lqc2(auVar8);
  _vopmula(auVar8,auVar7);
  auVar8 = _vopmsub(auVar7,auVar8);
  auVar7._4_4_ = uVar2;
  auVar7._0_4_ = uVar14;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar4;
  auVar7 = _lqc2(auVar7);
  auVar8 = _vmul(auVar8,auVar7);
  auVar7 = _lqc2(auVar6);
  _vaddabc(auVar8,auVar8);
  auVar7 = _vmaddbc(auVar7,auVar8);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar5 = fVar5 * 57.29578;
  if (0.0 < auVar7._0_4_) {
    fVar5 = -fVar5;
  }
  param_1[0xe] = 0;
  param_1[0x18] = (int)fVar5;
  FUN_00182318(*param_1 + 0x810,0);
  FUN_00188148(*param_1 + 0x290,1);
  *(undefined1 *)(iVar1 + 0x3b3) = 0;
  *(undefined1 *)(iVar1 + 0x3af) = 1;
  *(undefined1 *)(iVar1 + 0x3ab) = 0;
  return;
}


// ==== FUN_0018ce18 @ 0018ce18 ====

void FUN_0018ce18(int *param_1)

{
  FUN_001a73f0(*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x330));
  FUN_00182318(*param_1 + 0x810,1);
  FUN_00188148(*param_1 + 0x290,0);
  return;
}


// ==== FUN_0018ce78 @ 0018ce78 ====

bool FUN_0018ce78(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0x38)) {
  default:
    return false;
  case 1:
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  lVar2 = strcmp(param_2,uVar1);
  return lVar2 == 0;
}


// ==== FUN_0018cee0 @ 0018cee0 ====

void FUN_0018cee0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 10;
  FUN_00183080();
  *(int *)(param_1 + 0x1c) = (int)param_2;
  FUN_0018ab80(param_1 + 8,param_2);
  puVar3 = (undefined4 *)(param_1 + 0x24);
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  do {
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  *(int *)(param_1 + 0x24) = param_1 + 0x54;
  *(int *)(param_1 + 0x4c) = param_1 + 400;
  *(int *)(param_1 + 0x30) = param_1 + 0x68;
  iVar4 = 10;
  *(int *)(param_1 + 0x2c) = param_1 + 0x7c;
  *(int *)(param_1 + 0x28) = param_1 + 0x94;
  *(int *)(param_1 + 0x34) = param_1 + 0xa8;
  *(int *)(param_1 + 0x38) = param_1 + 0xc0;
  *(int *)(param_1 + 0x3c) = param_1 + 0x104;
  *(int *)(param_1 + 0x40) = param_1 + 0x120;
  *(int *)(param_1 + 0x44) = param_1 + 0x13c;
  *(int *)(param_1 + 0x48) = param_1 + 0x160;
  uVar1 = *puVar3;
  while( true ) {
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
    FUN_0018e2e8(uVar1,param_2);
    if (iVar4 < 0) break;
    uVar1 = *puVar3;
  }
  return;
}


// ==== FUN_0018cfd8 @ 0018cfd8 ====

undefined4 FUN_0018cfd8(int param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 10;
  piVar5 = (int *)(param_1 + 0x24);
  FUN_001830a0();
  FUN_0018ab88(param_1 + 8);
  *(undefined1 *)(param_1 + 0x50) = 0x10;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = *piVar5;
  piVar3 = piVar5;
  while( true ) {
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 1;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 8));
    if (iVar4 < 0) break;
    iVar1 = *piVar3;
  }
  lVar2 = FUN_0018df28(*(int *)(param_1 + 0x1c) + 0xc94);
  *(int *)(param_1 + 0x20) = (int)lVar2;
  if ((lVar2 == 1) && (lVar2 = FUN_0018ddd8(*(int *)(param_1 + 0x1c) + 0xc94), lVar2 != 0)) {
    iVar1 = *(int *)(piVar5[*(int *)(param_1 + 0x20)] + 0x10);
    (**(code **)(iVar1 + 0x2c))
              (piVar5[*(int *)(param_1 + 0x20)] + (int)*(short *)(iVar1 + 0x28),
               DAT_0040f4d4 + 0x22a00);
  }
  else {
    iVar1 = *(int *)(piVar5[*(int *)(param_1 + 0x20)] + 0x10);
    (**(code **)(iVar1 + 0x2c))(piVar5[*(int *)(param_1 + 0x20)] + (int)*(short *)(iVar1 + 0x28),0);
  }
  return 1;
}


// ==== FUN_0018d108 @ 0018d108 ====

void FUN_0018d108(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
  return;
}


// ==== FUN_0018d148 @ 0018d148 ====

void FUN_0018d148(undefined8 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = FUN_0018d1f0();
  if (((lVar3 != 0) && (*(int *)lVar3 != 0)) && (cVar2 = FUN_00174a80(), cVar2 == param_2)) {
    bVar1 = false;
    if ((*(int *)((int)param_1 + 0x20) == 1) &&
       (lVar3 = FUN_0018ddd8(*(int *)((int)param_1 + 0x1c) + 0xc94), lVar3 != 0)) {
      bVar1 = true;
    }
    FUN_0018d4c8(param_1);
    if (bVar1) {
      FUN_0018d3a0(param_1,DAT_0040f4d4 + 0x22a00);
    }
  }
  return;
}


// ==== FUN_0018d1f0 @ 0018d1f0 ====

undefined4 FUN_0018d1f0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  }
  return 0;
}


// ==== FUN_0018d210 @ 0018d210 ====

void FUN_0018d210(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)param_2;
  iVar3 = (int)param_1;
  if (iVar2 == 5) {
    if ((*(byte *)(iVar3 + 0x50) & 2) == 0) {
      bVar1 = *(byte *)(iVar3 + 0x50);
    }
    else {
      FUN_0018d818(param_1);
      bVar1 = *(byte *)(iVar3 + 0x50);
    }
    if ((bVar1 & 1) == 0) {
      iVar2 = *(int *)(iVar3 + 0x20);
    }
    else {
      FUN_0018d858(param_1);
      iVar2 = *(int *)(iVar3 + 0x20);
    }
  }
  else {
    if (iVar2 < 6) {
      if (iVar2 != 4) {
        iVar2 = *(int *)(iVar3 + 0x20);
        goto LAB_0018d2c0;
      }
      if ((*(byte *)(iVar3 + 0x50) & 8) == 0) {
        iVar2 = *(int *)(iVar3 + 0x1c);
      }
      else {
        FUN_0018d818(param_1);
        iVar2 = *(int *)(iVar3 + 0x1c);
      }
    }
    else {
      if (iVar2 != 0x14) {
        iVar2 = *(int *)(iVar3 + 0x20);
        goto LAB_0018d2c0;
      }
      iVar2 = *(int *)(iVar3 + 0x1c);
    }
    *(undefined1 *)(iVar2 + 0xd26) = 1;
    iVar2 = *(int *)(iVar3 + 0x20);
  }
LAB_0018d2c0:
  iVar2 = *(int *)(iVar3 + iVar2 * 4 + 0x24);
  iVar3 = *(int *)(iVar2 + 0x10);
  (**(code **)(iVar3 + 0x3c))(iVar2 + *(short *)(iVar3 + 0x38),param_2);
  return;
}


// ==== FUN_0018d2f8 @ 0018d2f8 ====

void FUN_0018d2f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x44))(iVar1 + *(short *)(iVar2 + 0x40));
  return;
}


// ==== FUN_0018d330 @ 0018d330 ====

void FUN_0018d330(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x4c))(iVar1 + *(short *)(iVar2 + 0x48));
  return;
}


// ==== FUN_0018d368 @ 0018d368 ====

void FUN_0018d368(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x54))(iVar1 + *(short *)(iVar2 + 0x50));
  return;
}


// ==== FUN_0018d3a0 @ 0018d3a0 ====

void FUN_0018d3a0(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0018d4c8();
  if (param_2 != 0) {
    iVar1 = *(int *)((int)param_2 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1;
    iVar1 = *(int *)(param_1 + iVar1 * 4 + 0x24);
    iVar2 = *(int *)(iVar1 + 0x10);
    (**(code **)(iVar2 + 0x2c))(iVar1 + *(short *)(iVar2 + 0x28),param_2);
    FUN_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,0xc);
  }
  return;
}


// ==== FUN_0018d410 @ 0018d410 ====

void FUN_0018d410(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = 0;
  if (param_2 != 0) {
    iVar4 = 0;
    iVar1 = 0;
    do {
      piVar2 = (int *)(DAT_0040f4d0 + (iVar1 >> 0x18) * 0x880 + 0x4990);
      if (((piVar2 != (int *)0x0) && (*piVar2 == 0x1c)) &&
         (lVar3 = FUN_00160458(piVar2 + 0x10,param_2), lVar3 != 0)) break;
      iVar4 = iVar4 + 1;
      iVar1 = iVar4 * 0x1000000;
    } while (iVar4 < 2);
  }
  FUN_0018d3a0(param_1,lVar3);
  return;
}


// ==== FUN_0018d4c8 @ 0018d4c8 ====

void FUN_0018d4c8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x20) != 0) {
    iVar2 = *(int *)(iVar3 + *(int *)(iVar3 + 0x20) * 4 + 0x24);
    iVar1 = *(int *)(iVar2 + 0x10);
    (**(code **)(iVar1 + 0x34))(iVar2 + *(short *)(iVar1 + 0x30));
  }
  *(undefined4 *)(iVar3 + 0x20) = 0;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 0x10);
  (**(code **)(iVar2 + 0x2c))(*(int *)(iVar3 + 0x24) + (int)*(short *)(iVar2 + 0x28),0);
  if ((*(byte *)(iVar3 + 0x50) & 3) == 0) {
    iVar2 = *(int *)(iVar3 + 0x1c);
  }
  else {
    FUN_0018d818(param_1);
    iVar2 = *(int *)(iVar3 + 0x1c);
  }
  *(undefined1 *)(iVar3 + 0x17) = 0;
  *(undefined1 *)(iVar3 + 0x14) = 1;
  FUN_00188b40(0,0x40a00000,iVar2 + 0x290,1);
  *(undefined1 *)(*(int *)(iVar3 + 0x1c) + 0xc7e) = 1;
  return;
}


// ==== FUN_0018d580 @ 0018d580 ====

void FUN_0018d580(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0018ab98(param_1 + 8);
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x34))(iVar1 + *(short *)(iVar2 + 0x30));
  return;
}


// ==== FUN_0018d5d0 @ 0018d5d0 ====

void FUN_0018d5d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x5c))(iVar1 + *(short *)(iVar2 + 0x58));
  return;
}


// ==== FUN_0018d608 @ 0018d608 ====

undefined1 FUN_0018d608(int param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}


// ==== FUN_0018d610 @ 0018d610 ====

void FUN_0018d610(int param_1)

{
  if (*(char *)(param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(*(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24) + 0xc) = 0;
    FUN_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,10);
  }
  return;
}


// ==== FUN_0018d658 @ 0018d658 ====

void FUN_0018d658(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    *(undefined1 *)(param_1 + 0x15) = 1;
    FUN_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,9);
  }
  return;
}


// ==== FUN_0018d698 @ 0018d698 ====

void FUN_0018d698(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  FUN_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,0xb);
  return;
}


// ==== FUN_0018d6c0 @ 0018d6c0 ====

void FUN_0018d6c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 100))(iVar1 + *(short *)(iVar2 + 0x60));
  return;
}


// ==== FUN_0018d6f8 @ 0018d6f8 ====

void FUN_0018d6f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x6c))(iVar1 + *(short *)(iVar2 + 0x68));
  return;
}


// ==== FUN_0018d730 @ 0018d730 ====

void FUN_0018d730(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x74))(iVar1 + *(short *)(iVar2 + 0x70));
  return;
}


// ==== FUN_0018d768 @ 0018d768 ====

void FUN_0018d768(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x7c))(iVar1 + *(short *)(iVar2 + 0x78));
  return;
}


// ==== FUN_0018d7a0 @ 0018d7a0 ====

void FUN_0018d7a0(int param_1,char param_2)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = (ulong)(int)param_2;
  bVar2 = false;
  if (uVar1 != (long)*(char *)(param_1 + 0x50)) {
    if ((uVar1 & 0x10) == 0) {
      if ((*(byte *)(param_1 + 0x50) & 0x10) != 0) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if ((uVar1 & 0x10) == 0) {
    *(char *)(param_1 + 0x50) = param_2;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0x10;
  }
  if (bVar2) {
    FUN_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,0xd);
  }
  return;
}


// ==== FUN_0018d818 @ 0018d818 ====

void FUN_0018d818(int param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 0xef) != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0x10;
    FUN_00181ad0(*(int *)(param_1 + 0x1c) + 0xec0,0xd);
  }
  return;
}


// ==== FUN_0018d858 @ 0018d858 ====

void FUN_0018d858(int param_1)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe | 2;
  return;
}


// ==== FUN_0018d870 @ 0018d870 ====

void FUN_0018d870(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x84))(iVar1 + *(short *)(iVar2 + 0x80));
  return;
}


// ==== FUN_0018d8a8 @ 0018d8a8 ====

void FUN_0018d8a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x8c))(iVar1 + *(short *)(iVar2 + 0x88));
  return;
}


// ==== FUN_0018d8e0 @ 0018d8e0 ====

void FUN_0018d8e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x94))(iVar1 + *(short *)(iVar2 + 0x90));
  return;
}


// ==== FUN_0018d918 @ 0018d918 ====

void FUN_0018d918(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (**(code **)(iVar2 + 0x9c))(iVar1 + *(short *)(iVar2 + 0x98));
  return;
}


// ==== FUN_0018d950 @ 0018d950 ====

void FUN_0018d950(int param_1)

{
  FUN_0018eb78(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x20) * 4 + 0x24));
  return;
}


// ==== FUN_0018d978 @ 0018d978 ====

void FUN_0018d978(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[4] = 0xbf800000;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


// ==== FUN_0018d9a0 @ 0018d9a0 ====

void FUN_0018d9a0(int param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_0018d9e8();
  *(undefined1 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}


// ==== FUN_0018d9e8 @ 0018d9e8 ====

void FUN_0018d9e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_0018d9f0 @ 0018d9f0 ====

void FUN_0018d9f0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}


// ==== FUN_0018d9f8 @ 0018d9f8 ====

undefined4 FUN_0018d9f8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((0x1c < iVar1) && ((iVar1 < 0x20 || (iVar1 == 0x2a)))) {
    return 0x40900000;
  }
  return 0x40d0a3c2;
}


// ==== FUN_0018da40 @ 0018da40 ====

undefined4 FUN_0018da40(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0x2a) && (*(int *)(param_1 + 4) != 0x26)) {
    return 0x3fd851ec;
  }
  return 0x40200000;
}


// ==== FUN_0018da88 @ 0018da88 ====

undefined4 FUN_0018da88(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x40900000;
  if (*(int *)(param_1 + 4) != 0x2a) {
    uVar1 = 0x40333333;
  }
  return uVar1;
}


// ==== FUN_0018dab8 @ 0018dab8 ====

undefined4 FUN_0018dab8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f28f5c3;
  if (*(int *)(param_1 + 4) != 0x28) {
    uVar1 = 0x3f800000;
  }
  return uVar1;
}


// ==== FUN_0018dae8 @ 0018dae8 ====

undefined4 FUN_0018dae8(void)

{
  return 0x40400000;
}


// ==== FUN_0018daf8 @ 0018daf8 ====

undefined4 FUN_0018daf8(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0x2a) && (*(int *)(param_1 + 4) != 0x26)) {
    return 1;
  }
  return 0;
}


// ==== FUN_0018db20 @ 0018db20 ====

undefined4 FUN_0018db20(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0x26) && (*(int *)(param_1 + 4) != 0x29)) {
    return 0x41200000;
  }
  return 0x40400000;
}


// ==== FUN_0018db58 @ 0018db58 ====

undefined4 FUN_0018db58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x28) {
    return 0x42200000;
  }
  if ((iVar1 != 0x26) && (iVar1 != 0x29)) {
    uVar2 = 0x41500000;
    if (1 < iVar1 - 0x24U) {
      uVar2 = 0x42480000;
    }
    return uVar2;
  }
  return 0x40e00000;
}


// ==== FUN_0018dbc0 @ 0018dbc0 ====

undefined4 FUN_0018dbc0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar2 = *(char **)(*(int *)(*param_1 + 0x7c) + 0x2a4);
  bVar3 = false;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(cVar1 * 4 + DAT_00414d54);
    }
    bVar3 = iVar4 == 3;
  }
  if (bVar3) {
    uVar5 = 0x447a0000;
  }
  else {
    uVar5 = 0x42480000;
    if (param_1[1] != 0x27) {
      return 0x41a00000;
    }
  }
  return uVar5;
}


// ==== FUN_0018dc48 @ 0018dc48 ====

undefined4 FUN_0018dc48(int *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar2 = *(char **)(*(int *)(*param_1 + 0x7c) + 0x2a4);
  bVar3 = false;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(cVar1 * 4 + DAT_00414d54);
    }
    bVar3 = iVar4 == 3;
  }
  if (bVar3) {
    uVar5 = 0x447a0000;
  }
  else {
    uVar5 = 0x42c80000;
    if (param_1[1] != 0x27) {
      return 0x42480000;
    }
  }
  return uVar5;
}


// ==== FUN_0018dcd0 @ 0018dcd0 ====

bool FUN_0018dcd0(int param_1)

{
  return *(int *)(param_1 + 4) != 0x27;
}


// ==== FUN_0018dce0 @ 0018dce0 ====

undefined4 FUN_0018dce0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0x1d:
    return 0x46;
  case 0x1e:
    return 0x47;
  case 0x1f:
    return 0x48;
  default:
    return 0;
  case 0x24:
  case 0x25:
    return 0x22;
  case 0x26:
    return 0x26;
  case 0x27:
    return 0x33;
  case 0x28:
    return 0x36;
  case 0x29:
    return 0x31;
  case 0x2a:
    return 0x2a;
  }
}


// ==== FUN_0018dd60 @ 0018dd60 ====

undefined4 FUN_0018dd60(void)

{
  return 0x3dcccccd;
}


// ==== FUN_0018dd78 @ 0018dd78 ====

undefined4 FUN_0018dd78(void)

{
  return 0x40000000;
}


// ==== FUN_0018dd88 @ 0018dd88 ====

float FUN_0018dd88(int *param_1)

{
  float fVar1;
  
  if (*(int *)(*param_1 + 0x754) < 1) {
    fVar1 = (float)FUN_0018e0f0();
  }
  else {
    fVar1 = (float)FUN_0018e0d0();
  }
  return fVar1 * 30.0;
}


// ==== FUN_0018ddd8 @ 0018ddd8 ====

bool FUN_0018ddd8(int param_1)

{
  return *(int *)(param_1 + 4) - 0x1dU < 3;
}


// ==== FUN_0018dde8 @ 0018dde8 ====

undefined4 FUN_0018dde8(int param_1,int param_2)

{
  if ((2 < *(int *)(param_1 + 4) - 0x1dU) && (param_2 != 1)) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        return 0x17;
      }
    }
    else if (param_2 < 4) {
      return 0x18;
    }
    return 0x17;
  }
  return 0x17;
}


// ==== FUN_0018de48 @ 0018de48 ====

undefined4 FUN_0018de48(int param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((2 < *(int *)(param_1 + 4) - 0x1dU) && (param_2 != 0)) {
    if (param_3 == 1) {
      return 0x1b;
    }
    if (0 < param_3) {
      uVar1 = 0x1a;
      if (3 < param_3) {
        uVar1 = 0x4a;
      }
      return uVar1;
    }
  }
  return 0x4a;
}


// ==== FUN_0018dea0 @ 0018dea0 ====

undefined4 FUN_0018dea0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    return 0x41f00000;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 == 2) {
      return 0x41200000;
    }
    if (param_2 == 3) {
      return 0x42200000;
    }
  }
  return 0;
}


// ==== FUN_0018df28 @ 0018df28 ====

bool FUN_0018df28(void)

{
  long lVar1;
  
  lVar1 = FUN_0018ddd8();
  return lVar1 != 0;
}


// ==== FUN_0018df48 @ 0018df48 ====

undefined1 FUN_0018df48(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar5 = *param_1;
  iVar3 = FUN_0015d2a8(DAT_0040f4e0,**(undefined1 **)(*(int *)(iVar5 + 0x7c) + 0x2a4));
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar5 + 0x7c) + 0xa0));
  auVar6 = _sqc2(auVar6);
  uVar4 = FUN_00189048(iVar5 + 0x150);
  auVar7 = _qmtc2(uVar4);
  auVar6 = _lqc2(auVar6);
  auVar6 = _vsub(auVar6,auVar7);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _qmfc2(auVar6._0_4_);
  cVar1 = **(char **)(*(int *)(iVar5 + 0x7c) + 0x2a4);
  if (cVar1 == -1) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(cVar1 * 4 + DAT_00414d54);
  }
  uVar2 = 3;
  if (iVar5 != 3) {
    if (iVar5 == 10) {
      uVar2 = 2;
    }
    else {
      uVar2 = *(char *)(iVar3 + 0x10) == '\0';
    }
  }
  return uVar2;
}


// ==== FUN_0018e020 @ 0018e020 ====

undefined4 FUN_0018e020(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x24) {
    return 0x3e4ccccd;
  }
  if (iVar1 < 0x25) {
    if ((0x1f < iVar1) || (iVar1 < 0x1d)) {
      return 0x3dcccccd;
    }
  }
  else if (iVar1 != 0x2a) {
    return 0x3dcccccd;
  }
  return 0x3c23d70a;
}


// ==== FUN_0018e0a0 @ 0018e0a0 ====

undefined4 FUN_0018e0a0(int param_1)

{
  undefined4 uVar1;
  
  if ((0x1f < *(int *)(param_1 + 4)) || (uVar1 = 0x3f666666, *(int *)(param_1 + 4) < 0x1d)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0018e0d0 @ 0018e0d0 ====

undefined4 FUN_0018e0d0(int param_1)

{
  return *(undefined4 *)(DAT_0040f4d4 + *(char *)(param_1 + 0xc) * 4 + 0xa30);
}


// ==== FUN_0018e0f0 @ 0018e0f0 ====

undefined4 FUN_0018e0f0(int param_1)

{
  return *(undefined4 *)(DAT_0040f4d4 + *(char *)(param_1 + 0xc) * 4 + 0xa20);
}


// ==== FUN_0018e110 @ 0018e110 ====

undefined4 FUN_0018e110(int param_1)

{
  return *(undefined4 *)(DAT_0040f4d4 + *(char *)(param_1 + 0xc) * 4 + 0xa38);
}


// ==== FUN_0018e130 @ 0018e130 ====

undefined4 FUN_0018e130(int param_1)

{
  return *(undefined4 *)(DAT_0040f4d4 + *(char *)(param_1 + 0xc) * 4 + 0xa28);
}


// ==== FUN_0018e150 @ 0018e150 ====

undefined4 FUN_0018e150(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x43100000;
  if (2 < *(int *)(param_1 + 4) - 0x1dU) {
    uVar1 = 0x41c80000;
  }
  return uVar1;
}


// ==== FUN_0018e180 @ 0018e180 ====

undefined4 FUN_0018e180(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x42440000;
  if (2 < *(int *)(param_1 + 4) - 0x1dU) {
    uVar1 = 0x40800000;
  }
  return uVar1;
}


// ==== FUN_0018e1b0 @ 0018e1b0 ====

undefined * FUN_0018e1b0(int param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_0018ddd8();
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 4) == 0x27) {
      puVar1 = &DAT_003f6600;
    }
    else {
      puVar1 = &DAT_003f65c8;
    }
  }
  else {
    puVar1 = &DAT_003f6590;
  }
  return puVar1;
}


// ==== FUN_0018e208 @ 0018e208 ====

undefined4 FUN_0018e208(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ==== FUN_0018e210 @ 0018e210 ====

undefined4 FUN_0018e210(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_2 + 0xc4) == 2) {
    iVar1 = *(int *)(param_1 + 4);
    if (0x1c < iVar1) {
      if (iVar1 < 0x20) goto LAB_0018e2cc;
      if (iVar1 == 0x27) {
        return 0x42c80000;
      }
    }
    uVar3 = 0x42960000;
  }
  else {
    lVar2 = FUN_00135550(param_2);
    if ((((lVar2 != 0) && (iVar1 = FUN_00135550(param_2), *(int *)(iVar1 + 0x80) == 1)) &&
        (*(int *)(param_1 + 4) < 0x20)) &&
       ((0x1c < *(int *)(param_1 + 4) &&
        (iVar1 = FUN_00135550(param_2), *(int *)(iVar1 + 0xc98) == 0x27)))) {
      return 0xc2960000;
    }
LAB_0018e2cc:
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_0018e2e8 @ 0018e2e8 ====

void FUN_0018e2e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_0018e2f0 @ 0018e2f0 ====

undefined4 FUN_0018e2f0(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0018ddd8(*(int *)(param_1 + 4) + 0xc94);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return 1;
}


// ==== FUN_0018e338 @ 0018e338 ====

void FUN_0018e338(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if (*(char *)(iVar6 + 0xc) == '\0') {
    lVar4 = FUN_0018ab08(*(int *)(iVar6 + 4) + 0x150);
    if (lVar4 == 0) {
      cVar1 = *(char *)(iVar6 + 0xc);
    }
    else {
      FUN_00384290(param_1);
      cVar1 = *(char *)(iVar6 + 0xc);
    }
    if (cVar1 == '\0') {
      return;
    }
    iVar3 = *(int *)(iVar6 + 4);
  }
  else {
    iVar3 = *(int *)(iVar6 + 4);
  }
  if ((((*(char *)(iVar3 + 0xd26) != '\0') && (lVar4 = FUN_0018d608(), lVar4 == 0)) &&
      (lVar4 = FUN_00188f10(*(int *)(iVar6 + 4) + 0x150), lVar4 != 0)) &&
     (lVar4 = FUN_0018ab08(*(int *)(iVar6 + 4) + 0x150), lVar4 != 0)) {
    iVar3 = *(int *)(iVar6 + 0x10);
    sVar2 = *(short *)(iVar3 + 0x78);
    uVar5 = FUN_00188f58(*(int *)(iVar6 + 4) + 0x150);
    lVar4 = (**(code **)(iVar3 + 0x7c))(iVar6 + sVar2,uVar5);
    if ((lVar4 != 0) &&
       (lVar4 = (**(code **)(*(int *)(iVar6 + 0x10) + 0xac))
                          (iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0xa8)), lVar4 != 0)) {
      FUN_0018d658(*(int *)(iVar6 + 4) + 0xd10);
    }
  }
  return;
}


// ==== FUN_0018e458 @ 0018e458 ====

void FUN_0018e458(undefined4 *param_1,long param_2)

{
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (int)param_2;
  if (param_2 != 0) {
    FUN_00174b58(param_2,param_1[1]);
  }
  return;
}


// ==== FUN_0018e488 @ 0018e488 ====

void FUN_0018e488(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00174ba0(*param_1,param_1[1]);
    *param_1 = 0;
  }
  return;
}


// ==== FUN_0018e4c0 @ 0018e4c0 ====

undefined8 FUN_0018e4c0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  switch(*param_2) {
  case 2:
    lVar1 = FUN_0018ab08(*(int *)(iVar4 + 4) + 0x150);
    if (lVar1 == 0) {
      return 0;
    }
    FUN_00384290(param_1);
    iVar2 = *(int *)(iVar4 + 0x10);
    uVar3 = 3;
    break;
  case 3:
    lVar1 = FUN_00188f10(*(int *)(iVar4 + 4) + 0x150);
    if (lVar1 != 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar4 + 0x10);
    uVar3 = 5;
    break;
  case 4:
  case 0x13:
  case 0x14:
    FUN_00384290(param_1);
    iVar2 = *(int *)(iVar4 + 0x10);
    uVar3 = 4;
    break;
  default:
    goto LAB_0018e568;
  }
  (**(code **)(iVar2 + 0x84))(iVar4 + *(short *)(iVar2 + 0x80),uVar3);
LAB_0018e568:
  return 0;
}


// ==== FUN_0018e590 @ 0018e590 ====

void FUN_0018e590(int param_1)

{
  FUN_0018dde8(*(int *)(param_1 + 4) + 0xc94,*(undefined4 *)(*(int *)(param_1 + 4) + 0x754));
  return;
}


// ==== FUN_0018e5b8 @ 0018e5b8 ====

void FUN_0018e5b8(int param_1,undefined8 param_2)

{
  FUN_0018de48(*(int *)(param_1 + 4) + 0xc94,param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x754))
  ;
  return;
}


// ==== FUN_0018e5e0 @ 0018e5e0 ====

bool FUN_0018e5e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = _qmtc2(param_2);
  auVar5 = _sqc2(auVar5);
  uVar1 = FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  auVar5 = _lqc2(auVar5);
  auVar6 = _qmtc2(uVar1);
  auVar5 = _vsub(auVar5,auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  fVar2 = auVar5._0_4_;
  fVar3 = (float)FUN_00180a30(*(int *)(param_1 + 4) + 0xb30);
  fVar4 = (float)FUN_00180a30(*(int *)(param_1 + 4) + 0xb30);
  return fVar2 < fVar3 * fVar4;
}


// ==== FUN_0018e680 @ 0018e680 ====

undefined8 FUN_0018e680(undefined8 param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_c;
  float fStack_8;
  
  iVar3 = (int)param_3;
  auVar9 = _qmtc2(param_2);
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    auVar4 = _qmtc2(*(float *)(DAT_0040f4d0 + 0x318) * 0.5);
    _vmulabc(auVar5,auVar9);
    _vmaddabc(auVar7,auVar9);
    _vmaddabc(auVar6,auVar9);
    auVar9 = _vmaddbc(auVar8,in_vf0);
    auVar9 = _vaddbc(auVar9,auVar4);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x140));
    auVar5 = _vaddbc(in_vf0,auVar9);
    auVar4 = _qmfc2(auVar6._0_4_);
    auVar9 = _qmfc2(auVar5._0_4_);
    if (auVar4._0_4_ <= auVar9._0_4_) {
      auVar4 = _sqc2(auVar5);
      fStack_c = auVar4._4_4_;
      fVar1 = fStack_c;
      auVar4 = _sqc2(auVar6);
      fStack_c = auVar4._4_4_;
      if (fStack_c <= fVar1) {
        auVar4 = _sqc2(auVar5);
        fStack_8 = auVar4._8_4_;
        fVar1 = fStack_8;
        auVar4 = _sqc2(auVar6);
        fStack_8 = auVar4._8_4_;
        if (fStack_8 <= fVar1) {
          auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
          auVar4 = _qmfc2(auVar6._0_4_);
          if (auVar9._0_4_ <= auVar4._0_4_) {
            auVar9 = _sqc2(auVar5);
            fStack_c = auVar9._4_4_;
            fVar1 = fStack_c;
            auVar9 = _sqc2(auVar6);
            fStack_c = auVar9._4_4_;
            if (fVar1 <= fStack_c) {
              auVar9 = _sqc2(auVar5);
              fStack_8 = auVar9._8_4_;
              fVar1 = fStack_8;
              auVar9 = _sqc2(auVar6);
              fStack_8 = auVar9._8_4_;
              if (fVar1 <= fStack_8) {
                return 1;
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0018e7c0 @ 0018e7c0 ====

undefined8 FUN_0018e7c0(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  bVar1 = false;
  iVar3 = 0;
  if (param_2 != -1) {
    uVar5 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
    lVar6 = FUN_00178f18(uVar5);
    if (lVar6 == 0) {
      return 1;
    }
    iVar2 = FUN_00135550(*(undefined4 *)((int)uVar5 + 8));
    if (*(int *)(iVar2 + 0x80) == 1) {
      iVar3 = FUN_00135550(*(undefined4 *)((int)uVar5 + 8));
      iVar3 = *(int *)(iVar3 + 0x754);
    }
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _sqc2(auVar8);
    pauVar4 = (undefined1 (*) [16])FUN_00178d30(uVar5);
    auVar9 = _lqc2(*pauVar4);
    auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0xa0));
    auVar9 = _vsub(auVar9,auVar10);
    auVar9 = _vmul(auVar9,auVar9);
    auVar10 = _lqc2(auVar8);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    bVar1 = auVar9._0_4_ < 25.0;
    if (*(float *)(*(int *)(param_1 + 4) + 0x70c) < 0.0) {
      iVar2 = *(int *)(param_1 + 8);
      goto LAB_0018e90c;
    }
    pauVar4 = (undefined1 (*) [16])FUN_00178d30(uVar5);
    auVar9 = _lqc2(*pauVar4);
    fVar7 = *(float *)(*(int *)(param_1 + 4) + 0x70c);
    auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1 + 4) + 0x7c) + 0xa0));
    auVar9 = _vsub(auVar9,auVar10);
    auVar9 = _vmul(auVar9,auVar9);
    auVar8 = _lqc2(auVar8);
    _vaddabc(auVar9,auVar9);
    auVar8 = _vmaddbc(auVar8,auVar9);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (fVar7 * fVar7 < auVar8._0_4_) {
      return 0;
    }
  }
  iVar2 = *(int *)(param_1 + 8);
LAB_0018e90c:
  if (iVar2 == 1) {
    uVar5 = 1;
    if ((!bVar1) && (uVar5 = 0, 1 < iVar3)) {
      uVar5 = 0;
      lVar6 = FUN_00184238(*(int *)(param_1 + 4) + 0x6f0,0);
      if (lVar6 == 0) {
        lVar6 = FUN_00183500(*(int *)(param_1 + 4) + 0x1eb0);
        if (lVar6 != 0) {
          lVar6 = FUN_00184238(*(int *)(param_1 + 4) + 0x6f0,2);
          uVar5 = 0;
          if (lVar6 != 0) {
            uVar5 = 1;
          }
        }
      }
      else {
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = 1;
    if (1 < iVar2) {
      uVar5 = 1;
      if (((iVar2 == 2) && (uVar5 = 1, !bVar1)) && (uVar5 = 0, 1 < iVar3)) {
        lVar6 = FUN_00183500(*(int *)(param_1 + 4) + 0x1eb0);
        iVar3 = *(int *)(param_1 + 4);
        if (lVar6 != 0) {
          iVar3 = FUN_00183500(iVar3 + 0x1eb0);
          if (iVar3 != *(int *)(*(int *)(param_1 + 4) + 0x7c)) {
            uVar5 = FUN_00184238(*(int *)(param_1 + 4) + 0x6f0,2);
            return uVar5;
          }
          iVar3 = *(int *)(param_1 + 4);
        }
        uVar5 = FUN_00184238(iVar3 + 0x6f0,0);
      }
    }
  }
  return uVar5;
}


// ==== FUN_0018ea20 @ 0018ea20 ====

undefined8 FUN_0018ea20(int param_1)

{
  float fVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_vuI;
  
  fVar1 = (float)FUN_00180a10(*(int *)(param_1 + 4) + 0xb30);
  auVar3 = _vmaxbc(in_vf0,in_vf0);
  auVar2 = _qmtc2(fVar1 * 0.017453292);
  auVar2 = _vaddbc(in_vf0,auVar2);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar2,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar3,in_vuI);
  _vmaddai(auVar3,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar2 = _vmsubi(auVar3,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0x3e800000);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar5 = _vmul(auVar2,auVar2);
  _ctc2(0xc2992661);
  _vnop();
  auVar3 = _vmuli(auVar2,in_vuI);
  auVar10 = _vmul(auVar5,auVar5);
  _ctc2(0x42a33457);
  _vnop();
  auVar8 = _vmuli(auVar2,in_vuI);
  _ctc2(0xc2255de0);
  _vnop();
  auVar9 = _vmuli(auVar2,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar7 = _vmuli(auVar2,in_vuI);
  auVar6 = _vmul(auVar10,auVar10);
  auVar4 = _vmul(auVar3,auVar5);
  auVar3 = _qmtc2(0);
  _vmula(auVar9,auVar5);
  _vmadda(auVar4,auVar10);
  _ctc2(0x40c90fda);
  _vmadda(auVar8,auVar10);
  _vmaddai(auVar2,in_vuI);
  auVar2 = _vmadd(auVar7,auVar6);
  _vaddbc(in_vf0,auVar2);
  auVar2 = _vaddbc(in_vf0,auVar3);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_0018eb78 @ 0018eb78 ====

undefined8 FUN_0018eb78(int param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar4 [16];
  
  auVar4 = _por(in_zero_qw,in_a1_qw);
  lVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x54))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x50));
  auVar3 = _por(in_zero_qw,auVar4);
  uVar2 = auVar3._0_8_;
  if (lVar1 == 0) {
    auVar3 = _por(in_zero_qw,auVar4);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0xa0),auVar3._0_8_);
  }
  return uVar2;
}


// ==== FUN_0018ebe0 @ 0018ebe0 ====

undefined8 FUN_0018ebe0(int param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 extraout_v0_udw;
  int iVar1;
  undefined4 *puVar2;
  undefined1 in_a1_qw [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar5 = DAT_003f574c;
  auVar4 = _por(in_zero_qw,in_a1_qw);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x90);
  auVar3._0_8_ = FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  auVar3._8_8_ = extraout_v0_udw;
  auVar3 = _por(in_zero_qw,auVar3);
  if (0 < iVar1) {
    auVar8 = _qmtc2(auVar4._0_4_);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + 0x94);
    do {
      auVar7 = _lqc2(*(undefined1 (*) [16])*puVar2);
      auVar6 = _vsub(auVar7,auVar8);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar4,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      iVar1 = iVar1 + -1;
      if (auVar6._0_4_ < fVar5) {
        auVar3 = _qmfc2(auVar7._0_4_);
        fVar5 = auVar6._0_4_;
      }
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  auVar3 = _por(in_zero_qw,auVar3);
  return auVar3._0_8_;
}


// ==== FUN_0018eca0 @ 0018eca0 ====

void FUN_0018eca0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  
  FUN_0018e338();
  piVar5 = (int *)param_1;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    uVar3 = FUN_0013d400(piVar5[1]);
    lVar4 = FUN_001726a0(uVar3,piVar5[1]);
    if (lVar4 != 0) {
      FUN_0018ee00(param_1);
    }
  }
  else {
    iVar1 = *(int *)(*piVar5 + 0x30);
    if (((char)piVar5[5] == '\0') && (*(char *)(iVar1 + 0x40) != '\0')) {
      cVar2 = FUN_00180bc0(piVar5[1] + 0xb30);
      *(char *)(piVar5 + 5) = cVar2;
      if (cVar2 != '\0') {
        FUN_0016aba8(piVar5[1] + 0x1f90,*(undefined4 *)(iVar1 + 0x20),*(undefined1 *)(iVar1 + 0x40),
                     *(undefined4 *)(piVar5[1] + 0x7c));
      }
    }
  }
  return;
}


// ==== FUN_0018ed50 @ 0018ed50 ====

void FUN_0018ed50(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_0018e458();
  iVar1 = *(int *)(param_2 + 0x30);
  iVar4 = (int)param_1;
  if (*(char *)(iVar1 + 0x43) != '\0') {
    FUN_00188b40(0x3f800000,0x40a00000,*(int *)(iVar4 + 4) + 0x290,1);
  }
  if (*(char *)(iVar1 + 0x42) != '\0') {
    FUN_0018d7a0(*(int *)(iVar4 + 4) + 0xd10,1);
  }
  *(undefined1 *)(iVar4 + 0x15) = 0;
  lVar2 = FUN_0018ddd8(*(int *)(iVar4 + 4) + 0xc94);
  if (lVar2 != 0) {
    uVar3 = FUN_0013d400(*(undefined4 *)(iVar4 + 4));
    lVar2 = FUN_001726a0(uVar3,*(undefined4 *)(iVar4 + 4));
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_0018ee00(param_1);
  return;
}


// ==== FUN_0018ee00 @ 0018ee00 ====

void FUN_0018ee00(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  iVar5 = *param_1;
  iVar2 = *(int *)(iVar5 + 0x30);
  uVar8 = *(undefined4 *)(iVar2 + 0x10);
  uVar9 = *(undefined4 *)(iVar2 + 0x14);
  uVar10 = *(undefined4 *)(iVar2 + 0x18);
  uVar11 = *(undefined4 *)(iVar2 + 0x1c);
  uVar13 = *(undefined4 *)(iVar2 + 0x38);
  uVar6 = uVar11;
  if (*(char *)(iVar2 + 0x44) != -1) {
    iVar3 = FUN_00174ad8(iVar5,*(char *)(iVar2 + 0x44));
    iVar3 = DAT_003bcf14 % iVar3;
    DAT_003bcf14 = DAT_003bcf14 + 1;
    uVar1 = *(undefined1 *)(*(int *)(iVar5 + 0x28) + (int)(char)iVar3);
    puVar4 = (undefined4 *)FUN_00174af0(*param_1,*(undefined1 *)(iVar2 + 0x44),uVar1);
    uVar8 = *puVar4;
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    iVar5 = FUN_00174af0(*param_1,*(undefined1 *)(iVar2 + 0x44),uVar1);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    fVar12 = (float)FUN_00174b20(*param_1,*(undefined1 *)(iVar2 + 0x44),uVar1);
    if (fVar12 == -1.0) {
      iVar5 = param_1[1];
      goto LAB_0018eef8;
    }
    uVar13 = FUN_00174b20(*param_1,*(undefined1 *)(iVar2 + 0x44),uVar1);
  }
  iVar5 = param_1[1];
LAB_0018eef8:
  auVar7._4_4_ = uVar9;
  auVar7._0_4_ = uVar8;
  auVar7._8_4_ = uVar10;
  auVar7._12_4_ = uVar11;
  auVar7 = _por(in_zero_qw,auVar7);
  FUN_00180aa0(uVar6,iVar5 + 0xb30,auVar7._0_8_,*(undefined1 *)(iVar2 + 0x45));
  FUN_00180b38(uVar13,param_1[1] + 0xb30);
  FUN_00181f48(0,0x40000000,param_1[1] + 0xc80,0,0x26);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  return;
}


// ==== FUN_0018ef70 @ 0018ef70 ====

void FUN_0018ef70(int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
  if (lVar2 == 0) {
    FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  }
  else {
    iVar1 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
    auVar3 = _pextlw((long)*(int *)(iVar1 + 0xc),(long)*(int *)(iVar1 + 4));
    _pextlw((long)*(int *)(iVar1 + 8),auVar3._0_8_);
  }
  return;
}


// ==== FUN_0018efe8 @ 0018efe8 ====

void FUN_0018efe8(void)

{
  FUN_0018e5e0();
  return;
}


// ==== FUN_0018f008 @ 0018f008 ====

undefined4 FUN_0018f008(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(*param_1 + 0x30);
  if (param_2 == 1) {
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x3d);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0x2c);
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
      return 0;
    }
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x3c);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0x28);
  }
  else if (param_2 == 3) {
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x3e);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0x30);
  }
  else {
    if (param_2 != 4) {
      return 0;
    }
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x3f);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0x34);
  }
  FUN_0016aba8(iVar2 + 0x1f90,uVar3,uVar4,uVar5);
  return 1;
}


// ==== FUN_0018f0b8 @ 0018f0b8 ====

void FUN_0018f0b8(int param_1)

{
  FUN_0018e458();
  FUN_00181f48(0,0x40000000,*(int *)(param_1 + 4) + 0xc80,0,0x24);
  return;
}


// ==== FUN_0018f100 @ 0018f100 ====

void FUN_0018f100(int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
  if (lVar2 == 0) {
    FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  }
  else {
    iVar1 = FUN_001809f0(*(int *)(param_1 + 4) + 0xb30);
    auVar3 = _pextlw((long)*(int *)(iVar1 + 0xc),(long)*(int *)(iVar1 + 4));
    _pextlw((long)*(int *)(iVar1 + 8),auVar3._0_8_);
  }
  return;
}


// ==== FUN_0018f180 @ 0018f180 ====

undefined4 FUN_0018f180(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(*param_1 + 0x94);
  if (param_2 == 1) {
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x1d);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
      return 0;
    }
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x1c);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  else if (param_2 == 3) {
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x1e);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
  }
  else {
    if (param_2 != 4) {
      return 0;
    }
    iVar2 = param_1[1];
    uVar4 = *(undefined1 *)(iVar1 + 0x1f);
    uVar5 = *(undefined4 *)(iVar2 + 0x7c);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
  }
  FUN_0016aba8(iVar2 + 0x1f90,uVar3,uVar4,uVar5);
  return 1;
}


// ==== FUN_0018f230 @ 0018f230 ====

bool FUN_0018f230(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = _qmtc2(param_2);
  auVar2 = _sqc2(auVar2);
  uVar1 = FUN_00180a00(*(int *)(param_1 + 4) + 0xb30);
  auVar3 = _qmtc2(uVar1);
  auVar2 = _lqc2(auVar2);
  auVar2 = _vsub(auVar2,auVar3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_4_ < 49.0;
}


// ==== FUN_0018f2a0 @ 0018f2a0 ====

undefined4 FUN_0018f2a0(undefined4 *param_1,int param_2)

{
  long lVar1;
  
  if ((*(int *)(param_2 + 0x24) == 4) && (lVar1 = FUN_00174fb0(*param_1), lVar1 != 0)) {
    return 0x3f800000;
  }
  return 0;
}


// ==== FUN_0018f2e0 @ 0018f2e0 ====

void FUN_0018f2e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001830a0(*(int *)(iVar1 + 4) + 0xd10);
  FUN_0018e458(param_1,param_2);
  FUN_001830c0(*(int *)(iVar1 + 4) + 0xd10,(int)param_2 + 0x28);
  FUN_00181f48(0,0x40000000,*(int *)(iVar1 + 4) + 0xc80,0,0);
  return;
}


// ==== FUN_0018f358 @ 0018f358 ====

void FUN_0018f358(void)

{
  FUN_0018e488();
  return;
}


// ==== FUN_0018f378 @ 0018f378 ====

undefined8 FUN_0018f378(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar1 = FUN_001829a8(*(int *)(iVar3 + 4) + 0x810);
  if (lVar1 == 0) {
    lVar1 = FUN_001829a0(*(int *)(iVar3 + 4) + 0x810);
    if (lVar1 != 0) goto LAB_0018f3c4;
    iVar3 = *(int *)(iVar3 + 4);
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  if (*(int *)(iVar3 + 0x754) < 2) {
    return 0x1e;
  }
LAB_0018f3c4:
  uVar2 = FUN_0018e590(param_1);
  return uVar2;
}


// ==== FUN_0018f408 @ 0018f408 ====

void FUN_0018f408(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  
  FUN_0018e338();
  piVar6 = (int *)param_1;
  if (*(char *)((int)piVar6 + 0x16) == '\0') {
    uVar4 = FUN_0013d400(piVar6[1]);
    lVar5 = FUN_001726a0(uVar4,piVar6[1]);
    if (lVar5 != 0) {
      FUN_0018f548(param_1);
    }
  }
  else {
    iVar1 = *(int *)(*piVar6 + 0x30);
    if ((char)piVar6[5] == '\0') {
      cVar2 = FUN_00180bc0(piVar6[1] + 0xb30);
      *(char *)(piVar6 + 5) = cVar2;
      if ((cVar2 != '\0') && (cVar2 = *(char *)(iVar1 + 0x24), cVar2 != '\0')) {
        FUN_0016aba8(piVar6[1] + 0x1f90,*(undefined4 *)(iVar1 + 0x20),cVar2,
                     *(undefined4 *)(piVar6[1] + 0x7c));
      }
      cVar2 = *(char *)((int)piVar6 + 0x15);
      bVar3 = FUN_00173610(piVar6[1] + 0xc78);
      *(byte *)((int)piVar6 + 0x15) = bVar3 ^ 1;
      if ((cVar2 != '\0') && ((bVar3 ^ 1) == 0)) {
        FUN_00181ad0(piVar6[1] + 0xec0,10);
      }
    }
  }
  return;
}


// ==== FUN_0018f4e8 @ 0018f4e8 ====

void FUN_0018f4e8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_0018e458();
  iVar3 = (int)param_1;
  *(undefined1 *)(iVar3 + 0x16) = 0;
  lVar1 = FUN_0018ddd8(*(int *)(iVar3 + 4) + 0xc94);
  if (lVar1 != 0) {
    uVar2 = FUN_0013d400(*(undefined4 *)(iVar3 + 4));
    lVar1 = FUN_001726a0(uVar2,*(undefined4 *)(iVar3 + 4));
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_0018f548(param_1);
  return;
}


// ==== FUN_0018f548 @ 0018f548 ====

void FUN_0018f548(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  iVar5 = *param_1;
  iVar2 = *(int *)(iVar5 + 0x30);
  uVar8 = *(undefined4 *)(iVar2 + 0x10);
  uVar9 = *(undefined4 *)(iVar2 + 0x14);
  uVar10 = *(undefined4 *)(iVar2 + 0x18);
  uVar11 = *(undefined4 *)(iVar2 + 0x1c);
  uVar13 = *(undefined4 *)(iVar2 + 0x2c);
  uVar6 = uVar11;
  if (*(char *)(iVar2 + 0x27) != -1) {
    iVar3 = FUN_00174ad8(iVar5,*(char *)(iVar2 + 0x27));
    iVar3 = DAT_003bcf18 % iVar3;
    DAT_003bcf18 = DAT_003bcf18 + 1;
    uVar1 = *(undefined1 *)(*(int *)(iVar5 + 0x28) + (int)(char)iVar3);
    puVar4 = (undefined4 *)FUN_00174af0(*param_1,*(undefined1 *)(iVar2 + 0x27),uVar1);
    uVar8 = *puVar4;
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    iVar5 = FUN_00174af0(*param_1,*(undefined1 *)(iVar2 + 0x27),uVar1);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    fVar12 = (float)FUN_00174b20(*param_1,*(undefined1 *)(iVar2 + 0x27),uVar1);
    if (fVar12 == -1.0) {
      iVar5 = param_1[1];
      goto LAB_0018f640;
    }
    uVar13 = FUN_00174b20(*param_1,*(undefined1 *)(iVar2 + 0x27),uVar1);
  }
  iVar5 = param_1[1];
LAB_0018f640:
  auVar7._4_4_ = uVar9;
  auVar7._0_4_ = uVar8;
  auVar7._8_4_ = uVar10;
  auVar7._12_4_ = uVar11;
  auVar7 = _por(in_zero_qw,auVar7);
  FUN_00180aa0(uVar6,iVar5 + 0xb30,auVar7._0_8_,*(undefined1 *)(iVar2 + 0x28));
  FUN_00180b38(uVar13,param_1[1] + 0xb30);
  FUN_0018d610(param_1[1] + 0xd10);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}


// ==== FUN_0018f6d0 @ 0018f6d0 ====

undefined8 FUN_0018f6d0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x17;
  if (*(char *)(param_1 + 0x14) != '\0') {
    uVar1 = FUN_0018e590();
  }
  return uVar1;
}


