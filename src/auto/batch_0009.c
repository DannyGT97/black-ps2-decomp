// ==== FUN_00173658 @ 00173658 ====

void FUN_00173658(void)

{
  FUN_00173640(0);
  return;
}


// ==== FUN_00173678 @ 00173678 ====

float FUN_00173678(float *param_1)

{
  return *param_1 - *(float *)(DAT_0040f4d0 + 0x20);
}


// ==== FUN_00173690 @ 00173690 ====

void FUN_00173690(undefined4 *param_1)

{
  *param_1 = 0xbf800000;
  return;
}


// ==== FUN_001736a0 @ 001736a0 ====

void FUN_001736a0(float param_1,float *param_2)

{
  *param_2 = *param_2 + param_1;
  return;
}


// ==== FUN_001736b0 @ 001736b0 ====

void FUN_001736b0(void)

{
  return;
}


// ==== FUN_001736b8 @ 001736b8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001736b8(undefined1 (*param_1) [16],int param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined4 *)(&DAT_003f6228 + param_2 * 4);
  auVar5 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)(param_1[1] + 8) = 0x3f800000;
  auVar1 = _sqc2(auVar5);
  *param_1 = auVar1;
  *(undefined4 *)(param_1[1] + 0xc) = uVar4;
  *(int *)(param_1[1] + 4) = param_2;
  *(undefined4 *)param_1[1] = 0;
  *(undefined2 *)param_1[2] = 0;
  _sqc2(auVar5);
  FUN_00173690(param_1[4] + 4);
  uVar3 = DAT_004432ac;
  uVar4 = DAT_004432a8;
  uVar2 = _DAT_004432a0;
  *(undefined4 *)(param_1[4] + 8) = 0x40400000;
  *(int *)param_1[5] = (int)uVar2;
  *(int *)(param_1[5] + 4) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_1[5] + 8) = uVar4;
  *(undefined4 *)(param_1[5] + 0xc) = uVar3;
  param_1[4][0] = 0;
  uVar3 = DAT_004432ac;
  uVar4 = DAT_004432a8;
  uVar2 = _DAT_004432a0;
  *(int *)param_1[3] = (int)_DAT_004432a0;
  *(int *)(param_1[3] + 4) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_1[3] + 8) = uVar4;
  *(undefined4 *)(param_1[3] + 0xc) = uVar3;
  return 1;
}


// ==== FUN_00173748 @ 00173748 ====

void FUN_00173748(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 in_vf0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  iVar14 = (int)param_1;
  iVar15 = *(int *)(iVar14 + 0x10);
  if (iVar15 == 0) {
    return;
  }
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x50));
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar22 = _sqc2(auVar19);
  auVar18 = _vmul(auVar18,auVar18);
  _vaddabc(auVar18,auVar18);
  auVar18 = _vmaddbc(auVar19,auVar18);
  auVar6 = _qmfc2(auVar18._0_4_);
  pauVar1 = (undefined1 (*) [16])(iVar15 + 0xa0);
  uVar7 = *(undefined4 *)*pauVar1;
  uVar8 = *(undefined4 *)(iVar15 + 0xa4);
  uVar10 = *(undefined4 *)(iVar15 + 0xa8);
  uVar12 = *(undefined4 *)(iVar15 + 0xac);
  auVar21 = *pauVar1;
  auVar19 = *pauVar1;
  auVar18 = *pauVar1;
  fVar16 = *(float *)(iVar14 + 0x1c) * 1.5;
  fVar16 = (float)((int)fVar16 * (uint)(3.0 < fVar16) | (uint)(3.0 >= fVar16) * 0x40400000);
  if (auVar6._0_4_ < 2.3283064e-10) {
    iVar15 = *(int *)(iVar14 + 0x10);
    uVar2 = *(undefined8 *)(iVar15 + 0xa0);
    uVar11 = *(undefined4 *)(iVar15 + 0xa8);
    uVar13 = *(undefined4 *)(iVar15 + 0xac);
    *(undefined1 *)(iVar14 + 0x40) = 0;
    uVar4 = (undefined4)uVar2;
    *(undefined4 *)(iVar14 + 0x30) = uVar4;
    uVar9 = (undefined4)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(iVar14 + 0x34) = uVar9;
    *(undefined4 *)(iVar14 + 0x38) = uVar11;
    *(undefined4 *)(iVar14 + 0x3c) = uVar13;
    *(undefined4 *)(iVar14 + 0x50) = uVar4;
    *(undefined4 *)(iVar14 + 0x54) = uVar9;
    *(undefined4 *)(iVar14 + 0x58) = uVar11;
    *(undefined4 *)(iVar14 + 0x5c) = uVar13;
    cVar3 = *(char *)(iVar14 + 0x40);
  }
  else {
    cVar3 = *(char *)(iVar14 + 0x40);
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(iVar14 + 0x50) = *(undefined4 *)(iVar14 + 0x30);
    *(undefined4 *)(iVar14 + 0x54) = *(undefined4 *)(iVar14 + 0x34);
    *(undefined4 *)(iVar14 + 0x58) = *(undefined4 *)(iVar14 + 0x38);
    *(undefined4 *)(iVar14 + 0x5c) = *(undefined4 *)(iVar14 + 0x3c);
  }
  else {
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x50));
    auVar20 = _qmtc2(0x3f7d70a4);
    auVar18 = _lqc2(auVar18);
    _vaddabc(auVar18,in_vf0);
    _vmsubabc(auVar18,auVar20);
    auVar18 = _vmaddbc(auVar6,auVar20);
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(iVar14 + 0x50) = auVar18;
  }
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x50));
  auVar19 = _lqc2(auVar19);
  auVar18 = _vsub(auVar18,auVar19);
  fVar17 = *(float *)(iVar14 + 0x48);
  auVar18 = _vmul(auVar18,auVar18);
  auVar19 = _lqc2(auVar22);
  _vaddabc(auVar18,auVar18);
  auVar18 = _vmaddbc(auVar19,auVar18);
  auVar18 = _qmfc2(auVar18._0_4_);
  if (fVar17 * fVar17 <= auVar18._0_4_) {
    *(undefined1 *)(iVar14 + 0x40) = 1;
    FUN_00173640(0x40a00000,iVar14 + 0x44);
    *(undefined4 *)(iVar14 + 0x48) = 0x40400000;
  }
  else {
    fVar17 = fVar17 + (*(float *)(DAT_0040f4d0 + 0x1c) / 5.0) * (fVar16 - 3.0);
    fVar17 = (float)((int)fVar17 * (uint)(3.0 < fVar17) | (uint)(3.0 >= fVar17) * 0x40400000);
    *(uint *)(iVar14 + 0x48) =
         (int)fVar17 * (uint)(fVar17 < fVar16) | (int)fVar16 * (uint)(fVar17 >= fVar16);
  }
  iVar15 = iVar14 + 0x44;
  lVar5 = FUN_00173610(iVar15);
  cVar3 = *(char *)(iVar14 + 0x40);
  if (lVar5 == 0) {
LAB_0017390c:
    if (cVar3 != '\0') goto LAB_001739c4;
  }
  else if (cVar3 != '\0') {
    *(undefined1 *)(iVar14 + 0x40) = 0;
    FUN_00173690(iVar15);
    *(undefined4 *)(iVar14 + 0x30) = uVar7;
    *(undefined4 *)(iVar14 + 0x34) = uVar8;
    *(undefined4 *)(iVar14 + 0x38) = uVar10;
    *(undefined4 *)(iVar14 + 0x3c) = uVar12;
    *(undefined4 *)(iVar14 + 0x50) = uVar7;
    *(undefined4 *)(iVar14 + 0x54) = uVar8;
    *(undefined4 *)(iVar14 + 0x58) = uVar10;
    *(undefined4 *)(iVar14 + 0x5c) = uVar12;
    cVar3 = *(char *)(iVar14 + 0x40);
    goto LAB_0017390c;
  }
  uVar4 = FUN_00173e18(param_1);
  auVar21 = _lqc2(auVar21);
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x30));
  auVar19 = _qmtc2(uVar4);
  _vsub(auVar21,auVar18);
  auVar18 = _vmul(auVar19,auVar19);
  auVar22 = _lqc2(auVar22);
  _vaddabc(auVar18,auVar18);
  auVar22 = _vmaddbc(auVar22,auVar18);
  auVar18 = _qmtc2(0);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar22);
  uVar4 = _vwaitq();
  auVar19 = _vmulq(auVar19,uVar4);
  auVar22 = _vaddbc(in_vf0,auVar18);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar22 = _vmul(auVar22,auVar19);
  _vaddabc(auVar22,auVar22);
  auVar22 = _vmaddbc(auVar18,auVar22);
  auVar22 = _qmfc2(auVar22._0_4_);
  if (7.0 < auVar22._0_4_) {
    FUN_00173640(0x40a00000,iVar15);
    *(undefined1 *)(iVar14 + 0x40) = 1;
    *(undefined4 *)(iVar14 + 0x48) = 0x40400000;
    cVar3 = *(char *)(iVar14 + 0x40);
  }
  else {
    cVar3 = *(char *)(iVar14 + 0x40);
  }
  if (cVar3 == '\0') {
    return;
  }
LAB_001739c4:
  *(undefined4 *)(iVar14 + 0x30) = uVar7;
  *(undefined4 *)(iVar14 + 0x34) = uVar8;
  *(undefined4 *)(iVar14 + 0x38) = uVar10;
  *(undefined4 *)(iVar14 + 0x3c) = uVar12;
  return;
}


// ==== FUN_001739e0 @ 001739e0 ====

void FUN_001739e0(undefined8 param_1)

{
  undefined1 auVar1 [12];
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 extraout_v0_udw_00;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined1 in_s1_qw [16];
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int aiStack_290 [3];
  char acStack_284 [20];
  int aiStack_270 [3];
  char acStack_264 [468];
  undefined8 extraout_v0_udw;
  
  piVar14 = aiStack_290;
  piVar15 = aiStack_290;
  piVar10 = aiStack_290;
  piVar12 = aiStack_290;
  piVar16 = aiStack_290;
  for (iVar5 = 0xe; iVar5 != -1; iVar5 = iVar5 + -1) {
  }
  iVar5 = 0xf;
  do {
    *piVar14 = 0;
    iVar5 = iVar5 + -1;
    *(undefined1 *)(piVar14 + 3) = 0xff;
    piVar14 = piVar14 + 8;
  } while (-1 < iVar5);
  uVar20 = 1;
  iVar19 = 0;
  auVar9._8_8_ = in_s1_qw._8_8_;
  auVar9._0_8_ = 0xffffffffffffffff;
  iVar17 = 0x2b00;
  iVar5 = 0xf;
  do {
    iVar18 = (int)param_1;
    if ((uVar20 & *(ushort *)(iVar18 + 0x20)) != 0) {
      iVar19 = iVar19 + 1;
      iVar6 = DAT_0040f4d4 + iVar17;
      *piVar15 = iVar6;
      auVar8._0_8_ = FUN_001834e8(iVar6 + 0x1eb0);
      auVar8._8_8_ = extraout_v0_udw;
      piVar15[2] = (int)auVar8._0_8_;
      auVar9 = _pmaxw(auVar9,auVar8);
      auVar9 = _pextlw(0,auVar9._0_8_);
      auVar1 = *(undefined1 (*) [12])(*piVar15 + 0x1ed0);
      iVar6 = *(int *)(*piVar15 + 0x1edc);
      piVar15[4] = auVar1._0_4_;
      piVar15[5] = auVar1._4_4_;
      piVar15[6] = auVar1._8_4_;
      piVar15[7] = iVar6;
      piVar15 = piVar15 + 8;
    }
    iVar17 = iVar17 + 0x1fd0;
    iVar5 = iVar5 + -1;
    uVar20 = (int)(uVar20 << 0x11) >> 0x10;
  } while (-1 < iVar5);
  iVar5 = iVar19;
  if (0 < iVar19) {
    do {
      iVar5 = iVar5 + -1;
      if (*(int *)((int)piVar10 + 8) < 0) {
        iVar17 = auVar9._0_4_ + 1;
        auVar9._0_8_ = (long)iVar17;
        *(int *)((int)piVar10 + 8) = iVar17;
      }
      piVar10 = (int *)((int)piVar10 + 0x20);
    } while (iVar5 != 0);
  }
  uVar20 = 0;
  if (*(int *)(iVar18 + 0x10) != 0) {
    uVar20 = (uint)(*(int *)(*(int *)(iVar18 + 0x10) + 0xc4) == 2);
  }
  uVar2 = uVar20;
  while ((int)uVar2 < (int)(iVar19 + uVar20)) {
    iVar5 = -1;
    iVar6 = 0;
    iVar17 = iVar5;
    piVar14 = aiStack_290;
    if (0 < iVar19) {
      do {
        iVar5 = iVar17;
        if (((*(char *)((int)piVar14 + 0xc) < '\0') && (iVar5 = iVar6, -1 < iVar17)) &&
           (aiStack_290[iVar17 * 8 + 2] < *(int *)((int)piVar14 + 8))) {
          iVar5 = iVar17;
        }
        iVar6 = iVar6 + 1;
        iVar17 = iVar5;
        piVar14 = (int *)((int)piVar14 + 0x20);
      } while (iVar6 < iVar19);
    }
    acStack_284[iVar5 * 0x20] = (char)uVar2;
    uVar2 = uVar2 + 1;
  }
  iVar5 = *(int *)(iVar18 + 0x10);
  iVar17 = iVar19;
  if (0 < iVar19) {
    do {
      iVar17 = iVar17 + -1;
      if ((char)piVar12[3] == '\0') {
        *(undefined4 *)(iVar18 + 0x10) = *(undefined4 *)(*piVar12 + 0x7c);
      }
      piVar12 = piVar12 + 8;
    } while (iVar17 != 0);
  }
  iVar17 = 0;
  if (0 < iVar19) {
    iVar6 = 0;
    do {
      auVar9._0_8_ = (long)((int)aiStack_290 + iVar6);
      cVar4 = FUN_00173d38(param_1,acStack_284[iVar6]);
      uVar7 = FUN_00173d80(param_1,*(undefined1 *)(auVar9._0_4_ + 0xc));
      iVar11 = auVar9._0_4_;
      *(int *)(iVar11 + 0x10) = (int)uVar7;
      *(int *)(iVar11 + 0x14) = (int)((ulong)uVar7 >> 0x20);
      *(int *)(iVar11 + 0x18) = (int)extraout_v0_udw_00;
      *(int *)(iVar11 + 0x1c) = (int)((ulong)extraout_v0_udw_00 >> 0x20);
      *(undefined4 *)(iVar11 + 4) = 0;
      if (cVar4 == '\0') {
        *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar18 + 0x10);
      }
      else if (0 < iVar19) {
        iVar13 = 1;
        if (acStack_284[0] == cVar4) {
          *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(aiStack_290[0] + 0x7c);
        }
        else {
          do {
            iVar11 = iVar13 * 0x20;
            if (iVar19 <= iVar13) goto LAB_00173c8c;
            iVar3 = iVar13 * 8;
            iVar13 = iVar13 + 1;
          } while (acStack_284[iVar11] != cVar4);
          *(undefined4 *)((int)aiStack_290 + iVar6 + 4) = *(undefined4 *)(aiStack_290[iVar3] + 0x7c)
          ;
        }
      }
LAB_00173c8c:
      iVar17 = iVar17 + 1;
      iVar6 = iVar17 * 0x20;
    } while (iVar17 < iVar19);
  }
  if (0 < iVar19) {
    do {
      iVar17 = *piVar16;
      *(int *)(iVar17 + 0x1eb8) = (int)(char)piVar16[3];
      *(int *)(iVar17 + 0x1ec0) = piVar16[1];
      iVar6 = piVar16[5];
      iVar11 = piVar16[6];
      iVar13 = piVar16[7];
      *(int *)(iVar17 + 0x1ed0) = piVar16[4];
      *(int *)(iVar17 + 0x1ed4) = iVar6;
      *(int *)(iVar17 + 0x1ed8) = iVar11;
      *(int *)(iVar17 + 0x1edc) = iVar13;
      FUN_001834d8(iVar17 + 0x1eb0,param_1);
      if ((iVar5 != *(int *)(iVar18 + 0x10)) &&
         ((*(int *)(iVar17 + 0x7c) == iVar5 || (*(int *)(iVar17 + 0x7c) == *(int *)(iVar18 + 0x10)))
         )) {
        FUN_001834b0(iVar17 + 0x1eb0);
      }
      iVar19 = iVar19 + -1;
      piVar16 = piVar16 + 8;
    } while (iVar19 != 0);
  }
  return;
}


// ==== FUN_00173d38 @ 00173d38 ====

int FUN_00173d38(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x14) == 2) {
    puVar1 = &DAT_00415710;
  }
  else {
    if (*(int *)(param_1 + 0x14) != 3) {
      return param_2 + -1;
    }
    puVar1 = &DAT_00415790;
  }
  return puVar1[param_2 * 8];
}


// ==== FUN_00173d80 @ 00173d80 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00173d80(int param_1,long param_2)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(int *)(param_1 + 0x14) == 2) {
    puVar1 = &DAT_00415720;
  }
  else {
    if (*(int *)(param_1 + 0x14) != 3) {
      if (param_2 == 0) {
        auVar3 = _lqc2(_DAT_004432a0);
      }
      else {
        auVar3 = _pextlw(0xffffffffc0000000,0);
        auVar3 = _pextlw(0,auVar3._0_8_);
        auVar3 = _qmtc2(auVar3._0_4_);
      }
      goto LAB_00173e00;
    }
    puVar1 = &DAT_004157a0;
  }
  auVar3 = _lqc2(*(undefined1 (*) [16])(puVar1 + (int)param_2 * 8));
LAB_00173e00:
  auVar2 = _qmtc2(*(undefined4 *)(param_1 + 0x18));
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar3 = _qmfc2(auVar3._0_4_);
  return auVar3._0_8_;
}


// ==== FUN_00173e18 @ 00173e18 ====

undefined8 FUN_00173e18(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _lqc2(*param_1);
  auVar1 = _lqc2(*(undefined1 (*) [16])(*(int *)param_1[1] + 0xa0));
  auVar1 = _vsub(auVar2,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_8_;
}


// ==== FUN_00173e30 @ 00173e30 ====

void FUN_00173e30(float param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_3 != 0) && (*(int *)(param_2 + 0x14) != param_3)) {
    if (param_1 == 0.0) {
      *(float *)(param_2 + 0x1c) =
           *(float *)(param_2 + 0x18) * *(float *)(&DAT_003f6228 + param_3 * 4);
    }
    *(int *)(param_2 + 0x14) = param_3;
    bVar1 = true;
  }
  if (0.0 < param_1) {
    *(float *)(param_2 + 0x1c) = param_1;
    bVar1 = true;
    *(float *)(param_2 + 0x18) = param_1 / *(float *)(&DAT_003f6228 + *(int *)(param_2 + 0x14) * 4);
  }
  if (bVar1) {
    FUN_001739e0();
  }
  return;
}


// ==== FUN_00173ee0 @ 00173ee0 ====

void FUN_00173ee0(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x20) =
       (ushort)((uint)(0x10000 << (*(uint *)(param_2 + 0x1ef4) & 0x1f)) >> 0x10) |
       *(ushort *)(param_1 + 0x20);
  FUN_001739e0();
  return;
}


// ==== FUN_00173f18 @ 00173f18 ====

void FUN_00173f18(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x20) =
       *(ushort *)(param_1 + 0x20) &
       ~(ushort)((uint)(0x10000 << (*(uint *)(param_2 + 0x1ef4) & 0x1f)) >> 0x10);
  FUN_001739e0();
  return;
}


// ==== FUN_00173f58 @ 00173f58 ====

void FUN_00173f58(int param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  *(int *)(param_1 + 0x10) = iVar5;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0xa0);
    uVar2 = *(undefined4 *)(iVar5 + 0xa4);
    uVar3 = *(undefined4 *)(iVar5 + 0xa8);
    uVar4 = *(undefined4 *)(iVar5 + 0xac);
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  return;
}


// ==== FUN_00173f80 @ 00173f80 ====

void FUN_00173f80(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 1 << (param_2 & 0x1f);
  return;
}


// ==== FUN_00173f98 @ 00173f98 ====

void FUN_00173f98(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 & 0x1f));
  return;
}


// ==== FUN_00173fb8 @ 00173fb8 ====

bool FUN_00173fb8(uint *param_1,uint param_2)

{
  return (*param_1 & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00173fe8 @ 00173fe8 ====

undefined4 FUN_00173fe8(undefined2 *param_1)

{
  *param_1 = 0;
  return 1;
}


// ==== FUN_00173ff8 @ 00173ff8 ====

void FUN_00173ff8(ushort *param_1,int param_2)

{
  *param_1 = *param_1 | (ushort)((uint)(0x10000 << (*(uint *)(param_2 + 0x1ef4) & 0x1f)) >> 0x10);
  return;
}


// ==== FUN_00174018 @ 00174018 ====

void FUN_00174018(ushort *param_1,int param_2)

{
  *param_1 = *param_1 & ~(ushort)((uint)(0x10000 << (*(uint *)(param_2 + 0x1ef4) & 0x1f)) >> 0x10);
  return;
}


// ==== FUN_00174040 @ 00174040 ====

int FUN_00174040(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = 1;
  do {
    if ((*param_1 & uVar1) != 0) {
      return DAT_0040f4d4 + uVar2 * 0x1fd0 + 0x2b00;
    }
    uVar2 = uVar2 + 1;
    uVar1 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x10);
  return 0;
}


// ==== FUN_001740a0 @ 001740a0 ====

int FUN_001740a0(ushort *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_2 + 0x1ef4) + 1;
  if ((int)uVar3 < 0x10) {
    iVar2 = uVar3 * 0x1fd0 + 0x2b00 + DAT_0040f4d4;
    do {
      uVar1 = uVar3 & 0x1f;
      uVar3 = uVar3 + 1;
      if (((uint)*param_1 & 1 << uVar1) != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 0x1fd0;
    } while ((int)uVar3 < 0x10);
  }
  return 0;
}


// ==== FUN_00174108 @ 00174108 ====

void FUN_00174108(void)

{
  return;
}


// ==== FUN_00174110 @ 00174110 ====

void FUN_00174110(void)

{
  DAT_003bcf08 = 0;
  DAT_003bcf0c = 0;
  DAT_003bcf10 = 0;
  DAT_0040d9c4 = 1;
  return;
}


// ==== FUN_00174138 @ 00174138 ====

void FUN_00174138(void)

{
  FUN_002ecb80(0x9c4);
  return;
}


// ==== FUN_00174158 @ 00174158 ====

undefined4 FUN_00174158(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (DAT_0040d9c4 != '\0') {
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined1 *)(iVar3 + 0x20) = 0;
  }
  if (param_2 == param_3) {
    lVar2 = FUN_002ee078(*(undefined4 *)(iVar3 + 4),param_1,param_3,param_3);
    uVar1 = (uint)(lVar2 != 0);
  }
  else {
    uVar1 = FUN_002ed530(0x40a00000,0x40000000,*(undefined4 *)(iVar3 + 4),param_1,param_2,param_3,
                         param_4,0x3bcf08,0x3bcf0c,0x3bcf10);
    DAT_0040d9c4 = '\0';
  }
  return *(undefined4 *)(&DAT_003f6250 + uVar1 * 4);
}


// ==== FUN_00174210 @ 00174210 ====

void FUN_00174210(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_00174218 @ 00174218 ====

undefined4 FUN_00174218(undefined4 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0;
  return 1;
}


// ==== FUN_00174228 @ 00174228 ====

undefined4 FUN_00174228(int *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_001743c0();
  if (lVar1 == 0) {
    iVar2 = param_1[2];
    if (iVar2 == 0) {
      param_1[2] = param_2;
    }
    else if (*(int *)(iVar2 + 4) == 0) {
      *(int *)(iVar2 + 4) = param_2;
    }
    else {
      for (iVar2 = *(int *)(iVar2 + 4); *(int *)(iVar2 + 4) != 0; iVar2 = *(int *)(iVar2 + 4)) {
      }
      *(int *)(iVar2 + 4) = param_2;
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *param_1 = *param_1 + 1;
  }
  return 1;
}


// ==== FUN_001742b8 @ 001742b8 ====

void FUN_001742b8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  if (param_2 == iVar3) {
    iVar3 = *(int *)(param_2 + 4);
    *param_1 = *param_1 + -1;
    param_1[2] = iVar3;
    return;
  }
  do {
    iVar1 = *(int *)(iVar3 + 4);
    if (iVar1 == param_2) {
      uVar2 = *(undefined4 *)(iVar1 + 4);
LAB_00174308:
      *(undefined4 *)(iVar3 + 4) = uVar2;
      *param_1 = *param_1 + -1;
      return;
    }
    if (iVar1 == 0) {
      if (*(int *)(iVar3 + 4) != param_2) {
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 4) + 4);
      goto LAB_00174308;
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}


// ==== FUN_00174320 @ 00174320 ====

void FUN_00174320(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (*piVar4 != param_2) break;
    piVar4 = (int *)piVar4[1];
    *param_1 = *param_1 + -1;
    param_1[2] = (int)piVar4;
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    return;
  }
  piVar1 = (int *)piVar4[1];
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar3 = *piVar1;
  while( true ) {
    piVar2 = piVar1;
    if (iVar3 == param_2) {
      piVar4[1] = piVar1[1];
      *param_1 = *param_1 + -1;
      piVar2 = piVar4;
    }
    piVar4 = piVar2;
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) break;
    iVar3 = *piVar1;
  }
  return;
}


// ==== FUN_00174398 @ 00174398 ====

undefined4 FUN_00174398(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ==== FUN_001743a0 @ 001743a0 ====

void FUN_001743a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[2] + 4);
  *param_1 = *param_1 + -1;
  param_1[2] = iVar1;
  return;
}


// ==== FUN_001743c0 @ 001743c0 ====

undefined4 FUN_001743c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 1;
}


// ==== FUN_001743f0 @ 001743f0 ====

void FUN_001743f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00165ae0();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00174430 @ 00174430 ====

undefined4
FUN_00174430(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  FUN_00165af8();
  puVar3 = (undefined8 *)param_1;
  *(undefined1 *)((int)puVar3 + 0x2b) = 1;
  *(undefined4 *)((int)puVar3 + 0x2c) = 1;
  *puVar3 = param_2;
  *(undefined4 *)((int)puVar3 + 0x1c) = param_4;
  *(undefined4 *)(puVar3 + 7) = param_6;
  *(undefined4 *)(puVar3 + 4) = param_5;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined4 **)(puVar3 + 3) = param_3;
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined4 *)((int)puVar3 + 0x34) = 0;
  *(undefined4 *)((int)puVar3 + 0x3c) = 0;
  puVar3[8] = 0;
  iVar4 = 0;
  switch(*param_3) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar4 = *(int *)(*(int *)(puVar3 + 3) + 4);
  }
  uVar2 = FUN_001747d0(param_1,iVar4);
  *(undefined1 *)((int)puVar3 + 0x2a) = uVar2;
  *(bool *)(puVar3 + 5) = *(char *)(iVar4 + 0x55) != '\0';
  bVar1 = *(byte *)(iVar4 + 0x56);
  *(uint *)((int)puVar3 + 0x2c) = (uint)bVar1;
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined4 *)((int)puVar3 + 0x34) = *(undefined4 *)(iVar4 + 0x38);
  *(uint *)((int)puVar3 + 0x3c) = (uint)*(byte *)(iVar4 + 0x59);
  *(bool *)((int)puVar3 + 0x29) = *(char *)(iVar4 + 0x58) != '\0';
  if (bVar1 == 0) {
    *(undefined4 *)((int)puVar3 + 0x2c) = 0xffffffff;
  }
  *(undefined4 *)((int)puVar3 + 0x24) = 0;
  if (*(char *)(puVar3 + 5) != '\0') {
    FUN_001746c8(param_1);
  }
  return 1;
}


// ==== FUN_00174578 @ 00174578 ====

void FUN_00174578(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar3 = (int)param_1;
  if ((((((*(char *)(iVar3 + 0x28) != '\0') && (*(int *)(iVar3 + 0x2c) != 0)) &&
        (*(char *)(iVar3 + 0x2a) != '\0')) && (*(char *)(iVar3 + 0x2b) != '\0')) &&
      ((*(int *)(iVar3 + 0x24) == 0 ||
       ((iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 0x38c), iVar2 != 0 && (iVar2 != 1)))))) &&
     (fVar4 = *(float *)(iVar3 + 0x30) - *(float *)(DAT_0040f4d0 + 0x1c),
     *(float *)(iVar3 + 0x30) = fVar4, fVar4 <= 0.0)) {
    lVar1 = FUN_001746e0(param_1);
    if (lVar1 == 0) {
      uVar5 = FUN_0016de70(0,0x3f000000,DAT_0040f4d4);
      *(undefined4 *)(iVar3 + 0x30) = uVar5;
    }
    else {
      if (*(int *)(iVar3 + 0x2c) != -1) {
        *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + -1;
      }
      if (*(int *)(iVar3 + 0x2c) == 0) {
        FUN_001746d8(param_1);
        iVar2 = *(int *)(iVar3 + 0x3c);
      }
      else {
        *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x34);
        iVar2 = *(int *)(iVar3 + 0x3c);
      }
      if (((iVar2 != 0) && (iVar2 == 1)) && (*(char *)(iVar3 + 0x28) != '\0')) {
        FUN_001746d8(param_1);
      }
    }
  }
  return;
}


// ==== FUN_001746a0 @ 001746a0 ====

undefined4 FUN_001746a0(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_001746c8 @ 001746c8 ====

void FUN_001746c8(int param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}


// ==== FUN_001746d8 @ 001746d8 ====

void FUN_001746d8(int param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


// ==== FUN_001746e0 @ 001746e0 ====

bool FUN_001746e0(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_00178408(DAT_0040f4d4 + 0xfa4,*(undefined4 *)(param_1 + 0x18),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x40),
                       *(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x29));
  if (lVar1 != 0) {
    *(int *)(param_1 + 0x24) = (int)lVar1;
  }
  return lVar1 != 0;
}


// ==== FUN_00174740 @ 00174740 ====

void FUN_00174740(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_001746c8();
    }
    else {
      FUN_001746d8();
    }
  }
  else if (*(int *)(param_1 + 0x3c) == 1) {
    if (*(int *)(param_1 + 0x24) == 0) {
      cVar1 = *(char *)(param_1 + 0x28);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x38c);
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 1) {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x28);
    }
    if (cVar1 == '\0') {
      FUN_001746c8();
    }
  }
  return;
}


// ==== FUN_001747d0 @ 001747d0 ====

bool FUN_001747d0(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar1 == 1) {
    bVar2 = (*(byte *)(param_2 + 0x5b) & 2) != 0;
  }
  else if (iVar1 < 2) {
    bVar2 = false;
    if (iVar1 == 0) {
      bVar2 = (*(byte *)(param_2 + 0x5b) & 1) != 0;
    }
  }
  else if (iVar1 < 4) {
    bVar2 = (*(byte *)(param_2 + 0x5b) & 4) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// ==== FUN_00174858 @ 00174858 ====

void FUN_00174858(int *param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  if (*(byte *)(param_2 + 0x34) == 0) {
    param_1[1] = 0;
  }
  else {
    iVar2 = FUN_00107d20((uint)*(byte *)(param_2 + 0x34) << 2);
    param_1[1] = iVar2;
  }
  iVar2 = *param_1;
  iVar3 = 0;
  if (*(char *)(iVar2 + 0x34) != '\0') {
    do {
      iVar4 = 0;
      iVar5 = iVar3 + 1;
      while( true ) {
        if (param_4 <= iVar4) break;
        plVar1 = *(long **)(iVar4 * 4 + param_3);
        if (*plVar1 == *(long *)(iVar3 * 8 + *(int *)(iVar2 + 0x30))) {
          *(long **)(iVar3 * 4 + param_1[1]) = plVar1;
          break;
        }
        iVar4 = iVar4 + 1;
      }
      iVar2 = *param_1;
      iVar3 = iVar5;
    } while (iVar5 < (int)(uint)*(byte *)(iVar2 + 0x34));
  }
  return;
}


// ==== FUN_00174930 @ 00174930 ====

void FUN_00174930(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(*param_1 + 0x34) != '\0') {
    iVar1 = param_1[1];
    while( true ) {
      piVar2 = (int *)(iVar3 * 4 + iVar1);
      if (param_2 == *piVar2) {
        *(char *)(param_1 + 2) = (char)param_1[2] + '\x01';
        *piVar2 = 0;
        iVar1 = *param_1;
      }
      else {
        iVar1 = *param_1;
      }
      iVar3 = iVar3 + 1;
      if ((int)(uint)*(byte *)(iVar1 + 0x34) <= iVar3) break;
      iVar1 = param_1[1];
    }
  }
  return;
}


// ==== FUN_00174990 @ 00174990 ====

undefined4 FUN_00174990(int *param_1)

{
  if ((*(char *)((int)param_1 + 9) == '\0') &&
     (*(byte *)(*param_1 + 0x35) <= *(byte *)(param_1 + 2))) {
    *(undefined1 *)((int)param_1 + 9) = 1;
    return 1;
  }
  return 0;
}


// ==== FUN_001749c8 @ 001749c8 ====

void FUN_001749c8(void)

{
  FUN_00165ae0();
  return;
}


// ==== FUN_001749e8 @ 001749e8 ====

undefined4
FUN_001749e8(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined2 *)((int)param_1 + 0x1c) = 0;
  return 1;
}


// ==== FUN_00174a00 @ 00174a00 ====

void FUN_00174a00(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((((param_2 != 0) && (*(int *)((int)param_2 + 0xc4) == 1)) &&
      (lVar2 = FUN_00135550(param_2), lVar2 != 0)) &&
     (iVar1 = FUN_00135550(param_2), *(int *)(iVar1 + 0x80) == 1)) {
    iVar1 = FUN_00135550(param_2);
    FUN_0018d3a0(iVar1 + 0xd10,param_1);
  }
  return;
}


// ==== FUN_00174a80 @ 00174a80 ====

undefined4 FUN_00174a80(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00107bc0(0x40f0f0,param_1);
  if (iVar1 - 2U < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    if (iVar1 - 4U < 2) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_00174ad8 @ 00174ad8 ====

undefined1 FUN_00174ad8(int param_1,int param_2)

{
  return *(undefined1 *)(param_2 * 8 + *(int *)(*(int *)(param_1 + 0x18) + 0x14) + 4);
}


// ==== FUN_00174af0 @ 00174af0 ====

int FUN_00174af0(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(param_1 + 0x18) + 0xc) +
         (uint)*(ushort *)
                (param_3 * 2 + *(int *)(param_2 * 8 + *(int *)(*(int *)(param_1 + 0x18) + 0x14))) *
         0x10;
}


// ==== FUN_00174b20 @ 00174b20 ====

undefined4 FUN_00174b20(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          ((uint)*(ushort *)
                  (param_3 * 2 + *(int *)(param_2 * 8 + *(int *)(*(int *)(param_1 + 0x18) + 0x14)))
           * 4 + *(int *)(*(int *)(param_1 + 0x18) + 0x18));
}


// ==== FUN_00174b58 @ 00174b58 ====

void FUN_00174b58(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x1c) =
       (ushort)((uint)(0x10000 << (*(uint *)(param_2 + 0x1ef4) & 0x1f)) >> 0x10) |
       *(ushort *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x34))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x30));
  return;
}


// ==== FUN_00174ba0 @ 00174ba0 ====

void FUN_00174ba0(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x1c) =
       *(ushort *)(param_1 + 0x1c) &
       ~(ushort)((uint)(0x10000 << (*(uint *)(param_2 + 0x1ef4) & 0x1f)) >> 0x10);
  (**(code **)(*(int *)(param_1 + 0x10) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x38));
  return;
}


// ==== FUN_00174be8 @ 00174be8 ====

void FUN_00174be8(undefined8 param_1,undefined8 param_2)

{
  FUN_00107d20(param_2);
  return;
}


// ==== FUN_00174c08 @ 00174c08 ====

void FUN_00174c08(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar2 = param_2;
  if (0 < param_3) {
    do {
      *puVar2 = (char)iVar5;
      iVar5 = iVar5 + 1;
      puVar2 = param_2 + iVar5;
    } while (iVar5 < param_3);
  }
  if (1 < param_3) {
    iVar5 = 0x29;
    do {
      lVar3 = FUN_0016def0(DAT_0040f4d4,0,param_3 + -1);
      lVar4 = FUN_0016def0(DAT_0040f4d4,0,param_3 + -1);
      if (lVar3 != lVar4) {
        uVar1 = param_2[(int)lVar3];
        param_2[(int)lVar3] = param_2[(int)lVar4];
        param_2[(int)lVar4] = uVar1;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}


// ==== FUN_00174cd8 @ 00174cd8 ====

void FUN_00174cd8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_001749c8();
  if (*(byte *)(param_3 + 0x44) == 0xff) {
    *(undefined4 *)((int)param_1 + 0x28) = 0;
  }
  else {
    uVar1 = FUN_00174be8(param_1,*(undefined1 *)
                                  ((uint)*(byte *)(param_3 + 0x44) * 8 + *(int *)(param_2 + 0x14) +
                                  4));
    *(undefined4 *)((int)param_1 + 0x28) = uVar1;
  }
  return;
}


// ==== FUN_00174d48 @ 00174d48 ====

undefined4 FUN_00174d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_001749e8(param_1,2,param_2,param_3,param_4);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x30) = (int)param_3;
  if (*(int *)(iVar2 + 0x28) != 0) {
    bVar1 = *(byte *)((uint)*(byte *)((int)param_3 + 0x44) * 8 + *(int *)((int)param_4 + 0x14) + 4);
    *(uint *)(iVar2 + 0x2c) = (uint)bVar1;
    FUN_00174c08(param_1,*(int *)(iVar2 + 0x28),bVar1);
  }
  return 1;
}


// ==== FUN_00174dd0 @ 00174dd0 ====

void FUN_00174dd0(void)

{
  FUN_001749c8();
  return;
}


// ==== FUN_00174df0 @ 00174df0 ====

undefined4 FUN_00174df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_001749e8(param_1,1,param_2,param_3,param_4);
  iVar6 = (int)param_1;
  *(int *)(iVar6 + 0x94) = (int)param_3;
  cVar1 = *(char *)((int)param_3 + 0x21);
  if (cVar1 == -1) {
    *(undefined4 *)(iVar6 + 0x98) = 0;
  }
  else {
    lVar3 = FUN_00174ad8(param_1,cVar1);
    iVar5 = (int)lVar3;
    *(int *)(iVar6 + 0x98) = iVar5;
    iVar2 = FUN_00107d20(iVar5 * 0x60);
    iVar5 = iVar5 + -1;
    iVar4 = iVar2;
    if (lVar3 != 0) {
      do {
        *(undefined **)(iVar4 + 0x30) = &DAT_003dffc8;
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + 0x60;
      } while (iVar5 != -1);
    }
    *(int *)(iVar6 + 0x9c) = iVar2;
  }
  FUN_001736b8(iVar6 + 0x30,7);
  FUN_00173e30(*(undefined4 *)(*(int *)(iVar6 + 0x94) + 0x18),iVar6 + 0x30,
               *(undefined1 *)(*(int *)(iVar6 + 0x94) + 0x20));
  *(undefined4 *)(iVar6 + 0x90) = 0;
  return 1;
}


// ==== FUN_00174ee0 @ 00174ee0 ====

void FUN_00174ee0(int param_1,undefined8 param_2)

{
  FUN_00183238((int)param_2 + 0x1eb0);
  FUN_00173f18(*(undefined4 *)(param_1 + 0x90),param_2);
  return;
}


// ==== FUN_00174f20 @ 00174f20 ====

void FUN_00174f20(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_00183238((int)param_2 + 0x1eb0);
  if (*(int *)(param_1 + 0x90) == 0) {
    lVar2 = FUN_0018ddd8((int)param_2 + 0xc94);
    if (lVar2 == 0) {
      *(int *)(param_1 + 0x90) = param_1 + 0x30;
    }
    else {
      *(int *)(param_1 + 0x90) = DAT_0040f4d4 + 0x22a30;
    }
    iVar1 = *(int *)(param_1 + 0x94);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  FUN_00173e30(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0x90),
               *(undefined1 *)(iVar1 + 0x20));
  FUN_00173ee0(*(undefined4 *)(param_1 + 0x90),param_2);
  return;
}


// ==== FUN_00174fb0 @ 00174fb0 ====

undefined4 FUN_00174fb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    iVar2 = *(int *)(param_1 + 0x9c);
    do {
      iVar1 = iVar1 + 1;
      if (param_2 == iVar2) {
        return 1;
      }
      iVar2 = iVar2 + 0x60;
    } while (iVar1 < *(int *)(param_1 + 0x98));
  }
  return 0;
}


// ==== FUN_00174ff0 @ 00174ff0 ====

void FUN_00174ff0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  if (0 < *(int *)(iVar3 + 0x98)) {
    iVar5 = 0;
    iVar1 = *(int *)(iVar3 + 0x94);
    iVar4 = 0;
    while( true ) {
      iVar1 = FUN_00174af0(param_1,*(undefined1 *)(iVar1 + 0x21),iVar4);
      FUN_00178398(*(int *)(iVar3 + 0x9c) + iVar5);
      iVar2 = *(int *)(iVar3 + 0x9c) + iVar5;
      iVar5 = iVar5 + 0x60;
      FUN_00178350(*(undefined4 *)(iVar1 + 0xc),iVar2);
      if (*(int *)(iVar3 + 0x98) <= iVar4 + 1) break;
      iVar1 = *(int *)(iVar3 + 0x94);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}


// ==== FUN_00175090 @ 00175090 ====

void FUN_00175090(int param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001749c8();
  *(int *)(param_1 + 0x48) = (int)param_3;
  FUN_00183618(param_1 + 0x28,param_2,param_3);
  FUN_001736b0(param_1 + 0x50);
  return;
}


// ==== FUN_001750e8 @ 001750e8 ====

undefined4 FUN_001750e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  FUN_001749e8(param_1,3,param_2,param_3,param_4);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x48) = (int)param_3;
  FUN_00183688(iVar1 + 0x28,param_2,param_3);
  FUN_001736b8(iVar1 + 0x50,7);
  return 1;
}


// ==== FUN_00175160 @ 00175160 ====

void FUN_00175160(int param_1,undefined8 param_2)

{
  FUN_00183238((int)param_2 + 0x1eb0);
  FUN_00173f18(param_1 + 0x50,param_2);
  return;
}


// ==== FUN_001751a0 @ 001751a0 ====

void FUN_001751a0(int param_1,undefined8 param_2)

{
  FUN_00183238((int)param_2 + 0x1eb0);
  FUN_00173ee0(param_1 + 0x50,param_2);
  return;
}


// ==== FUN_001751e0 @ 001751e0 ====

void FUN_001751e0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_001749c8();
  if (*(byte *)(param_3 + 0x27) == 0xff) {
    *(undefined4 *)((int)param_1 + 0x28) = 0;
  }
  else {
    uVar1 = FUN_00174be8(param_1,*(undefined1 *)
                                  ((uint)*(byte *)(param_3 + 0x27) * 8 + *(int *)(param_2 + 0x14) +
                                  4));
    *(undefined4 *)((int)param_1 + 0x28) = uVar1;
  }
  return;
}


// ==== FUN_00175250 @ 00175250 ====

undefined4 FUN_00175250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_001749e8(param_1,4,param_2,param_3,param_4);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x30) = (int)param_3;
  if (*(int *)(iVar2 + 0x28) != 0) {
    bVar1 = *(byte *)((uint)*(byte *)((int)param_3 + 0x27) * 8 + *(int *)((int)param_4 + 0x14) + 4);
    *(uint *)(iVar2 + 0x2c) = (uint)bVar1;
    FUN_00174c08(param_1,*(int *)(iVar2 + 0x28),bVar1);
  }
  return 1;
}


// ==== FUN_001752d8 @ 001752d8 ====

void FUN_001752d8(void)

{
  FUN_001749c8();
  return;
}


// ==== FUN_001752f8 @ 001752f8 ====

undefined4 FUN_001752f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_001749e8(param_1,5,param_2,param_3,param_4);
  *(int *)((int)param_1 + 0x28) = (int)param_3;
  return 1;
}


// ==== FUN_00175348 @ 00175348 ====

void FUN_00175348(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_001749c8();
  if (*(byte *)(param_3 + 0x33) == 0xff) {
    *(undefined4 *)((int)param_1 + 0x28) = 0;
  }
  else {
    uVar1 = FUN_00174be8(param_1,*(undefined1 *)
                                  ((uint)*(byte *)(param_3 + 0x33) * 8 + *(int *)(param_2 + 0x14) +
                                  4));
    *(undefined4 *)((int)param_1 + 0x28) = uVar1;
  }
  return;
}


// ==== FUN_001753b8 @ 001753b8 ====

undefined4 FUN_001753b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_001749e8(param_1,6,param_2,param_3,param_4);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x30) = (int)param_3;
  if (*(int *)(iVar2 + 0x28) != 0) {
    bVar1 = *(byte *)((uint)*(byte *)((int)param_3 + 0x33) * 8 + *(int *)((int)param_4 + 0x14) + 4);
    *(uint *)(iVar2 + 0x2c) = (uint)bVar1;
    FUN_00174c08(param_1,*(int *)(iVar2 + 0x28),bVar1);
  }
  return 1;
}


// ==== FUN_00175440 @ 00175440 ====

void FUN_00175440(void)

{
  FUN_001749c8();
  return;
}


// ==== FUN_00175460 @ 00175460 ====

undefined4 FUN_00175460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_001749e8(param_1,7,param_2,param_3,param_4);
  *(int *)((int)param_1 + 0x28) = (int)param_3;
  return 1;
}


// ==== FUN_001754b0 @ 001754b0 ====

void FUN_001754b0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_001749c8();
  if (*(byte *)(param_3 + 0x2e) == 0xff) {
    *(undefined4 *)((int)param_1 + 0x28) = 0;
  }
  else {
    uVar1 = FUN_00174be8(param_1,*(undefined1 *)
                                  ((uint)*(byte *)(param_3 + 0x2e) * 8 + *(int *)(param_2 + 0x14) +
                                  4));
    *(undefined4 *)((int)param_1 + 0x28) = uVar1;
  }
  return;
}


// ==== FUN_00175520 @ 00175520 ====

undefined4 FUN_00175520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  
  FUN_001749e8(param_1,8,param_2,param_3,param_4);
  iVar2 = (int)param_1;
  *(int *)(iVar2 + 0x30) = (int)param_3;
  if (*(int *)(iVar2 + 0x28) != 0) {
    bVar1 = *(byte *)((uint)*(byte *)((int)param_3 + 0x2e) * 8 + *(int *)((int)param_4 + 0x14) + 4);
    *(uint *)(iVar2 + 0x2c) = (uint)bVar1;
    FUN_00174c08(param_1,*(int *)(iVar2 + 0x28),bVar1);
  }
  return 1;
}


// ==== FUN_001755a8 @ 001755a8 ====

void FUN_001755a8(void)

{
  FUN_001749c8();
  return;
}


// ==== FUN_001755c8 @ 001755c8 ====

undefined4 FUN_001755c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  FUN_001749e8(param_1,9,param_2,param_3,param_4);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x2c) = (int)param_3;
  *(undefined1 *)(iVar1 + 0x29) = 0xff;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  return 1;
}


// ==== FUN_00175648 @ 00175648 ====

void FUN_00175648(void)

{
  FUN_001749c8();
  return;
}


// ==== FUN_00175668 @ 00175668 ====

undefined4 FUN_00175668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_001749e8(param_1,10,param_2,param_3,param_4);
  *(int *)((int)param_1 + 0x28) = (int)param_3;
  return 1;
}


// ==== FUN_001756b8 @ 001756b8 ====

void FUN_001756b8(void)

{
  return;
}


// ==== FUN_001756c0 @ 001756c0 ====

undefined4 FUN_001756c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0xf;
  puVar2 = param_1;
  do {
    uVar1 = *param_2;
    iVar3 = iVar3 + -1;
    param_2 = param_2 + 1;
    *puVar2 = uVar1;
    FUN_00170740(uVar1);
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  puVar2 = param_1 + 0x10;
  iVar3 = 0x2f;
  do {
    iVar3 = iVar3 + -1;
    FUN_00175ef8(puVar2);
    puVar2 = puVar2 + 3;
  } while (-1 < iVar3);
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  return 1;
}


// ==== FUN_00175750 @ 00175750 ====

void FUN_00175750(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = -1;
  if (((*(int *)(DAT_0040f4d4 + 11000) - *(int *)(DAT_0040f4d4 + 0x2af4)) + 1U & 0x1f) == 0) {
    FUN_0017bc18(DAT_0040f4d4 + 0xcd4);
    iVar5 = 0xf;
    iVar2 = *param_1;
    piVar4 = param_1;
    while( true ) {
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + 1;
      FUN_00170838(iVar2);
      if (iVar5 < 0) break;
      iVar2 = *piVar4;
    }
    iVar2 = 0;
    piVar4 = param_1;
    do {
      iVar5 = *(int *)(*piVar4 + 0x7c);
      if (iVar5 == 2) {
        return;
      }
      iVar1 = iVar6;
      if (((iVar5 == 1) && (iVar1 = iVar2, iVar6 != -1)) &&
         (*(float *)(param_1[iVar6] + 0x74) <= *(float *)(*piVar4 + 0x74))) {
        iVar1 = iVar6;
      }
      iVar6 = iVar1;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < 0x10);
    if (iVar6 == -1) {
      iVar2 = 0;
      iVar6 = -1;
      pfVar3 = (float *)(param_1 + 0x12);
      do {
        iVar5 = iVar6;
        if (((*(char *)(pfVar3 + -2) != '\0') && (iVar5 = iVar2, iVar6 != -1)) &&
           ((float)(param_1 + 0x12)[iVar6 * 3] <= *pfVar3)) {
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 3;
      } while (iVar2 < 0x30);
      if (iVar6 != -1) {
        iVar2 = FUN_00175c60(param_1,param_1[iVar6 * 3 + 0x11]);
        FUN_001707d8(param_1[iVar2],param_1[iVar6 * 3 + 0x11],
                     *(undefined1 *)((int)param_1 + iVar6 * 0xc + 0x41));
        FUN_00175ef8(param_1 + iVar6 * 3 + 0x10);
      }
    }
    else {
      FUN_00171918(param_1[iVar6],0);
    }
  }
  else {
    FUN_00289f78(DAT_0040f4d4 + 0x13d0,0x14);
  }
  return;
}


// ==== FUN_00175930 @ 00175930 ====

undefined4 FUN_00175930(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0xf;
  uVar1 = *param_1;
  while( true ) {
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 1;
    FUN_00170c90(uVar1);
    if (iVar2 < 0) break;
    uVar1 = *param_1;
  }
  return 1;
}


// ==== FUN_00175980 @ 00175980 ====

/* Strings referenciadas:
     "Message to Level Designer Physics object %s tagged for Pathfinding collision has been removed
   without reexporting the world view Reexport the world view and save it to get rid of that
   message" */

void FUN_00175980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [16];
  
  lVar1 = FUN_00129160(DAT_0040f4d0);
  if (lVar1 == 0) {
    FUN_00272488(param_2,auStack_50);
    FUN_001a4f70(0x3f54a0,auStack_50);
  }
  else {
    FUN_00175a00(param_1,lVar1,param_3);
  }
  return;
}


// ==== FUN_00175a00 @ 00175a00 ====

void FUN_00175a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_00175bb0();
  if (lVar1 != -1) {
    puVar2 = (undefined4 *)((int)param_1 + (int)lVar1 * 4);
    lVar1 = FUN_00170d20(*puVar2);
    if (lVar1 != 0) {
      return;
    }
    FUN_00170740(*puVar2);
  }
  lVar1 = FUN_00175bf0(param_1,param_2);
  if ((lVar1 == -1) && (lVar1 = FUN_00175c30(param_1,param_2), lVar1 != -1)) {
    FUN_00175f10((int)param_1 + (int)lVar1 * 0xc + 0x40,param_2,param_3);
  }
  return;
}


// ==== FUN_00175ab8 @ 00175ab8 ====

undefined4 FUN_00175ab8(int *param_1,int param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1 + 0x10;
  piVar1 = param_1 + 0x11;
  do {
    iVar3 = iVar3 + 1;
    if (*piVar1 == param_2) {
      FUN_00175ef8(piVar2);
      return 1;
    }
    piVar2 = piVar2 + 3;
    piVar1 = piVar1 + 3;
  } while (iVar3 < 0x30);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    if (*(int *)(*param_1 + 0x70) == param_2) {
      if (param_3 != 0) {
        FUN_00170740();
        return 1;
      }
      FUN_00170cd8();
      return 1;
    }
    param_1 = param_1 + 1;
  } while (iVar3 < 0x10);
  return 0;
}


// ==== FUN_00175b60 @ 00175b60 ====

undefined4 FUN_00175b60(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(*param_1 + 0x70) == param_2) {
      FUN_001718d0();
      return 1;
    }
    param_1 = param_1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}


// ==== FUN_00175bb0 @ 00175bb0 ====

int FUN_00175bb0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(int *)(*param_1 + 0x7c) != 4 || (*(int *)(*param_1 + 0x70) != param_2))) {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
    if (0xf < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== FUN_00175bf0 @ 00175bf0 ====

int FUN_00175bf0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x44);
  iVar1 = 0;
  while (((char)piVar2[-1] == '\0' || (*piVar2 != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 3;
    if (0x2f < iVar1) {
      return -1;
    }
  }
  return iVar1;
}


// ==== FUN_00175c30 @ 00175c30 ====

int FUN_00175c30(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x40);
  iVar1 = 0;
  do {
    if (*pcVar2 == '\0') {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0xc;
  } while (iVar1 < 0x30);
  return -1;
}


// ==== FUN_00175c60 @ 00175c60 ====

int FUN_00175c60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = 0;
  piVar2 = param_1;
  do {
    if (*(int *)(*piVar2 + 0x7c) == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  piVar2 = param_1;
  do {
    iVar1 = iVar4;
    if (((*(int *)(*piVar2 + 0x7c) == 4) && (iVar1 = iVar3, iVar4 != -1)) &&
       (*(float *)(param_1[iVar4] + 0x74) <= *(float *)(*piVar2 + 0x74))) {
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  piVar2 = param_1;
  if (iVar4 == -1) {
    do {
      iVar1 = iVar4;
      if (((*(char *)(*piVar2 + 0x78) == '\0') && (iVar1 = iVar3, iVar4 != -1)) &&
         (*(float *)(param_1[iVar4] + 0x74) <= *(float *)(*piVar2 + 0x74))) {
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    if (iVar4 == -1) {
      iVar4 = -1;
      piVar2 = param_1;
      do {
        iVar1 = iVar3;
        if ((iVar4 != -1) && (*(float *)(param_1[iVar4] + 0x74) <= *(float *)(*piVar2 + 0x74))) {
          iVar1 = iVar4;
        }
        iVar4 = iVar1;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < 0x10);
      return iVar4;
    }
  }
  return iVar4;
}


// ==== FUN_00175db8 @ 00175db8 ====

void FUN_00175db8(int *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0xf;
  piVar2 = param_1;
  do {
    if ((*(int *)(*piVar2 + 0x70) != 0) && (lVar1 = FUN_0014c570(), param_2 == lVar1)) {
      FUN_00170740(*piVar2);
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  piVar4 = param_1 + 0x10;
  piVar2 = param_1 + 0x11;
  do {
    if ((*piVar2 != 0) && (lVar1 = FUN_0014c570(), param_2 == lVar1)) {
      FUN_00175ef8(piVar4);
    }
    piVar2 = piVar2 + 3;
    piVar4 = piVar4 + 3;
  } while ((int)piVar2 < (int)(param_1 + 0xa1));
  return;
}


// ==== FUN_00175e80 @ 00175e80 ====

void FUN_00175e80(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0xf;
  iVar1 = *param_1;
  piVar3 = param_1;
  while( true ) {
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 1;
    iVar2 = *(int *)(iVar1 + 0x70);
    if (iVar2 != 0) {
      FUN_00170740(iVar1);
      FUN_00175a00(param_1,iVar2,0);
    }
    if (iVar4 < 0) break;
    iVar1 = *piVar3;
  }
  return;
}


// ==== FUN_00175ef8 @ 00175ef8 ====

undefined4 FUN_00175ef8(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}


// ==== FUN_00175f10 @ 00175f10 ====

void FUN_00175f10(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[1] = param_3;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  return;
}


// ==== FUN_00175f38 @ 00175f38 ====

void FUN_00175f38(void)

{
  return;
}


// ==== FUN_00175f40 @ 00175f40 ====

undefined4 FUN_00175f40(void)

{
  return 1;
}


// ==== FUN_00175f48 @ 00175f48 ====

undefined4 FUN_00175f48(void)

{
  return 1;
}


// ==== FUN_00175f50 @ 00175f50 ====

bool FUN_00175f50(void)

{
  long lVar1;
  
  lVar1 = FUN_0012a7c0(DAT_0040f4d0);
  return lVar1 != 0;
}


// ==== FUN_00175f78 @ 00175f78 ====

bool FUN_00175f78(void)

{
  long lVar1;
  
  lVar1 = FUN_0012ae58(DAT_0040f4d0);
  return lVar1 != 0;
}


// ==== FUN_00175fa0 @ 00175fa0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00175fa0(float param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [12];
  float fVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  auVar11 = _qmtc2(param_3);
  auVar6 = _qmtc2(param_4);
  if (param_1 == 0.0) {
    uVar4 = FUN_00175f50();
  }
  else {
    auVar8 = _vsub(auVar6,auVar11);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _vmove(auVar8);
    auVar6 = _vmul(auVar7,auVar7);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar10,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar12);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar2 = auVar6._0_4_;
    uVar4 = 0;
    if (0x37800000 < ((uint)fVar2 & 0x7f800000)) {
      fVar5 = fVar2 * 0.5;
      if (fVar5 < param_1) {
        auVar6 = _qmtc2(0x40000000);
        auVar6 = _vmulbc(auVar7,auVar6);
        auVar6 = _vadd(auVar11,auVar6);
        auVar6 = _qmfc2(auVar6._0_4_);
        uVar4 = FUN_00176258(param_2,auVar6._0_8_,param_5);
      }
      else {
        uStack_e4 = 1;
        uStack_e8 = DAT_0048f6f8;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_140 = *(undefined4 *)PTR_DAT_0040e438;
        uStack_13c = *(undefined4 *)(PTR_DAT_0040e438 + 4);
        uStack_138 = *(undefined4 *)(PTR_DAT_0040e438 + 8);
        uStack_134 = *(undefined4 *)(PTR_DAT_0040e438 + 0xc);
        fStack_100 = fVar5 - param_1;
        uStack_130 = *(undefined4 *)(PTR_DAT_0040e438 + 0x10);
        uStack_12c = *(undefined4 *)(PTR_DAT_0040e438 + 0x14);
        uStack_128 = *(undefined4 *)(PTR_DAT_0040e438 + 0x18);
        uStack_124 = *(undefined4 *)(PTR_DAT_0040e438 + 0x1c);
        auVar6 = _qmtc2(1.0 / fVar2);
        auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x20);
        uStack_114 = *(undefined4 *)(PTR_DAT_0040e438 + 0x2c);
        auVar6 = _vmulbc(auVar8,auVar6);
        uStack_120 = auVar1._0_4_;
        uStack_11c = auVar1._4_4_;
        uStack_118 = auVar1._8_4_;
        uStack_110 = *(undefined4 *)(PTR_DAT_0040e438 + 0x30);
        uStack_10c = *(undefined4 *)(PTR_DAT_0040e438 + 0x34);
        uStack_108 = *(undefined4 *)(PTR_DAT_0040e438 + 0x38);
        uStack_104 = *(undefined4 *)(PTR_DAT_0040e438 + 0x3c);
        auStack_a0 = _sqc2(auVar6);
        uStack_60 = (undefined4)uStack_20;
        uStack_5c = (undefined4)((ulong)uStack_20 >> 0x20);
        if (((uint)(1.0 - ABS((float)auStack_a0._4_4_)) & 0x7f800000) < 0x37800001) {
          auStack_30 = _sqc2(auVar6);
          auVar9 = _lqc2(_DAT_004432b0);
          _vopmula(auVar9,auVar6);
          auVar7 = _vopmsub(auVar6,auVar9);
          auVar8 = _vmul(auVar7,auVar7);
          _sqc2(auVar7);
          _vaddabc(auVar8,auVar8);
          auVar8 = _vmaddbc(auVar10,auVar8);
          _sqc2(auVar9);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar8);
          uVar12 = _vwaitq();
          auVar7 = _vmulq(auVar7,uVar12);
          auStack_70 = _sqc2(auVar6);
          _vopmula(auVar6,auVar7);
          auVar8 = _vopmsub(auVar7,auVar6);
          auStack_e0 = _sqc2(auVar7);
          auStack_d0 = _sqc2(auVar8);
          auStack_50 = _sqc2(auVar7);
          auStack_40 = _sqc2(auVar8);
          auStack_90 = _sqc2(auVar7);
          auStack_80 = _sqc2(auVar8);
          uStack_58 = uStack_18;
          uStack_54 = uStack_14;
          auStack_c0 = _sqc2(auVar6);
        }
        else {
          auVar7 = _pextlw(0,0);
          auVar7 = _pextlw(0x3f800000,auVar7._0_8_);
          auStack_30 = _sqc2(auVar6);
          uStack_60 = auVar7._0_4_;
          auVar8 = _qmtc2(uStack_60);
          uStack_5c = auVar7._4_4_;
          uStack_58 = auVar7._8_4_;
          uStack_54 = auVar7._12_4_;
          _vopmula(auVar8,auVar6);
          auVar7 = _vopmsub(auVar6,auVar8);
          auStack_80 = _sqc2(auVar6);
          auVar8 = _vmul(auVar7,auVar7);
          _sqc2(auVar7);
          _vaddabc(auVar8,auVar8);
          auVar8 = _vmaddbc(auVar10,auVar8);
          auStack_c0 = _sqc2(auVar6);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar8);
          uVar12 = _vwaitq();
          auVar7 = _vmulq(auVar7,uVar12);
          _vopmula(auVar6,auVar7);
          auVar8 = _vopmsub(auVar7,auVar6);
          auStack_e0 = _sqc2(auVar7);
          auStack_d0 = _sqc2(auVar8);
          auStack_50 = _sqc2(auVar7);
          auStack_40 = _sqc2(auVar8);
          auStack_a0 = _sqc2(auVar7);
          auStack_90 = _sqc2(auVar8);
          auStack_70._8_4_ = uStack_18;
          auStack_70._0_8_ = uStack_20;
          auStack_70._12_4_ = uStack_14;
        }
        auVar7 = _qmtc2(fVar5);
        auVar6 = _vmulbc(auVar6,auVar7);
        auVar6 = _vadd(auVar11,auVar6);
        auStack_b0 = _sqc2(auVar6);
        fStack_f4 = param_1;
        lVar3 = FUN_0012b720(DAT_0040f4d0,&uStack_140,auStack_e0,param_5);
        uVar4 = (ulong)(lVar3 != 0);
      }
    }
  }
  return uVar4;
}


// ==== FUN_00176258 @ 00176258 ====

bool FUN_00176258(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_68 = DAT_0048f6f4;
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  uStack_64 = 1;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_b8 = *(undefined4 *)(PTR_DAT_0040e438 + 8);
  uStack_b4 = *(undefined4 *)(PTR_DAT_0040e438 + 0xc);
  uStack_c0 = (undefined4)*(undefined8 *)PTR_DAT_0040e438;
  uStack_bc = (undefined4)((ulong)*(undefined8 *)PTR_DAT_0040e438 >> 0x20);
  uStack_a8 = *(undefined4 *)(PTR_DAT_0040e438 + 0x18);
  uStack_a4 = *(undefined4 *)(PTR_DAT_0040e438 + 0x1c);
  uStack_b0 = (undefined4)*(undefined8 *)(PTR_DAT_0040e438 + 0x10);
  uStack_ac = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_0040e438 + 0x10) >> 0x20);
  uStack_98 = *(undefined4 *)(PTR_DAT_0040e438 + 0x28);
  uStack_94 = *(undefined4 *)(PTR_DAT_0040e438 + 0x2c);
  uStack_a0 = (undefined4)*(undefined8 *)(PTR_DAT_0040e438 + 0x20);
  uStack_9c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_0040e438 + 0x20) >> 0x20);
  uStack_88 = *(undefined4 *)(PTR_DAT_0040e438 + 0x38);
  uStack_84 = *(undefined4 *)(PTR_DAT_0040e438 + 0x3c);
  uStack_30 = (undefined4)param_3;
  uStack_2c = (undefined4)((ulong)param_3 >> 0x20);
  uStack_90 = (undefined4)*(undefined8 *)(PTR_DAT_0040e438 + 0x30);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_0040e438 + 0x30) >> 0x20);
  auStack_60 = _sqc2(auVar2);
  auStack_50 = _sqc2(auVar3);
  auStack_40 = _sqc2(auVar4);
  uStack_74 = param_1;
  lVar1 = FUN_0012b720(DAT_0040f4d0,&uStack_c0,auStack_60,param_4);
  return lVar1 != 0;
}


// ==== FUN_00176310 @ 00176310 ====

undefined8 FUN_00176310(undefined8 param_1,int param_2,long param_3)

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
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar5 = _qmtc2(*(float *)(param_2 + 0x2e8) * 0.5);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    _vmulabc(auVar8,auVar6);
    _vmaddabc(auVar7,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar6 = _vmaddbc(auVar9,in_vf0);
    auVar4 = _vaddbc(auVar6,auVar5);
    _vmove(auVar6);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x140));
    auVar6 = _vaddbc(in_vf0,auVar4);
    auVar5 = _qmfc2(auVar7._0_4_);
    auVar4 = _qmfc2(auVar6._0_4_);
    if (auVar5._0_4_ <= auVar4._0_4_) {
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
      auVar5 = _qmfc2(auVar8._0_4_);
      if (auVar4._0_4_ <= auVar5._0_4_) {
        auVar4 = _sqc2(auVar6);
        fStack_8 = auVar4._8_4_;
        fVar1 = fStack_8;
        auVar4 = _sqc2(auVar7);
        fStack_8 = auVar4._8_4_;
        if (fStack_8 <= fVar1) {
          auVar4 = _sqc2(auVar6);
          fStack_8 = auVar4._8_4_;
          fVar1 = fStack_8;
          auVar4 = _sqc2(auVar8);
          fStack_8 = auVar4._8_4_;
          if (fVar1 <= fStack_8) {
            auVar4 = _sqc2(auVar6);
            fStack_c = auVar4._4_4_;
            fVar1 = fStack_c;
            auVar4 = _sqc2(auVar7);
            fStack_c = auVar4._4_4_;
            if (fStack_c <= fVar1) {
              auVar4 = _sqc2(auVar6);
              fStack_c = auVar4._4_4_;
              fVar1 = fStack_c;
              auVar4 = _sqc2(auVar8);
              fStack_c = auVar4._4_4_;
              if (fVar1 <= fStack_c) {
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


// ==== FUN_00176448 @ 00176448 ====

void FUN_00176448(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0x2a;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_00176460 @ 00176460 ====

void FUN_00176460(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = 0x2a;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


// ==== FUN_00176488 @ 00176488 ====

void FUN_00176488(undefined1 *param_1)

{
  bool bVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[0x240] = 0;
  iVar2 = 6;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 6;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xca] = 1;
  param_1[0xc9] = 0;
  param_1[0xcb] = 0;
  return;
}


// ==== FUN_001764e8 @ 001764e8 ====

undefined4 FUN_001764e8(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*param_1 != '\0') {
    FUN_001766d0();
  }
  param_1[0x240] = '\0';
  param_1[0xc] = '*';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  pcVar5 = param_1 + 0x20;
  pcVar4 = param_1 + 0x74;
  iVar3 = 0x1000000;
  pcVar2 = param_1 + 0xd0;
  do {
    FUN_00176460(pcVar2);
    pcVar2 = pcVar2 + 0x1c;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 8);
  iVar3 = 0x1000000;
  pcVar2 = param_1 + 0x1b0;
  do {
    FUN_00176448(pcVar2);
    pcVar2 = pcVar2 + 0x10;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 8);
  iVar3 = 0x1000000;
  do {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    iVar1 = iVar3 >> 0x18;
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    iVar3 = iVar3 + 0x1000000;
    pcVar4 = pcVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (iVar1 < 0x2a);
  pcVar5 = param_1 + 0x23c;
  iVar3 = 3;
  do {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar5 + -4;
  } while (-1 < iVar3);
  param_1[200] = '\0';
  *param_1 = '\x01';
  return 1;
}


// ==== FUN_00176628 @ 00176628 ====

void FUN_00176628(undefined8 param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = 0;
  iVar3 = 0x1000000;
  pfVar2 = (float *)((int)param_1 + 0xe0);
  fVar4 = *(float *)(DAT_0040f4d0 + 0x20);
  do {
    if ((*(char *)(pfVar2 + 2) != '\0') && (*pfVar2 <= fVar4)) {
      FUN_00176730(param_1,iVar1);
    }
    pfVar2 = pfVar2 + 7;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 8);
  FUN_00176bb0(param_1);
  return;
}


// ==== FUN_001766d0 @ 001766d0 ====

undefined4 FUN_001766d0(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 != '\0') {
    iVar2 = 6;
    do {
      bVar1 = -1 < iVar2;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    iVar2 = 6;
    do {
      bVar1 = -1 < iVar2;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    *param_1 = '\0';
  }
  return 1;
}


// ==== FUN_00176730 @ 00176730 ====

void FUN_00176730(int param_1,char param_2)

{
  *(undefined1 *)(param_1 + param_2 * 0x1c + 0xe8) = 0;
  FUN_00176460(param_1 + param_2 * 0x1c + 0xd0);
  return;
}


// ==== FUN_00176770 @ 00176770 ====

undefined4 FUN_00176770(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  short *psVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar2 = param_2 * 0x1c;
  iVar6 = (int)param_1;
  iVar7 = iVar6 + iVar2;
  iVar1 = *(int *)(iVar7 + 0xd0);
  if (*(char *)(iVar7 + 0xe8) == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(int *)(*(int *)(iVar1 + 0x7c) + 0x348) != 0) {
      if (*(char *)(iVar6 + 0xca) != '\0') {
        FUN_001e6150(*(undefined4 *)(iVar7 + 0xe0),
                     *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),*(int *)(iVar1 + 0x7c),
                     *(undefined4 *)(iVar6 + 0xd8 + iVar2),0);
      }
      psVar4 = (short *)(iVar6 + 0x20 + *(int *)(iVar6 + 0xd8 + iVar2) * 2);
      *psVar4 = *psVar4 + 1;
      uVar3 = *(undefined8 *)(iVar7 + 0xd8);
      uVar5 = *(undefined8 *)(iVar7 + 0xe0);
      uVar8 = *(undefined4 *)(iVar7 + 0xe8);
      *(undefined8 *)(iVar6 + 4) = *(undefined8 *)(iVar7 + 0xd0);
      *(undefined8 *)(iVar6 + 0xc) = uVar3;
      *(undefined8 *)(iVar6 + 0x14) = uVar5;
      *(undefined4 *)(iVar6 + 0x1c) = uVar8;
      *(undefined4 *)(iVar1 + 0xc84) = *(undefined4 *)(iVar6 + 0xc);
      uVar8 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
      *(int *)(iVar1 + 0xc90) = *(int *)(iVar1 + 0xc90) + 1;
      *(undefined4 *)(iVar1 + 0xc88) = uVar8;
      FUN_00176ea0(param_1,*(undefined4 *)(iVar6 + iVar2 + 0xd4));
      FUN_00176730(param_1,(int)param_2);
      uVar8 = 1;
    }
  }
  return uVar8;
}


// ==== FUN_001768d0 @ 001768d0 ====

undefined8 FUN_001768d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = 0;
  lVar1 = FUN_00176978();
  if ((lVar1 != 0) && (fVar3 = (float)FUN_00176ae0(param_1,param_2,param_3,param_4), -1.0 < fVar3))
  {
    uVar2 = FUN_00176a78(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}


// ==== FUN_00176978 @ 00176978 ====

bool FUN_00176978(float param_1,float param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  long lVar2;
  short *psVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  fStack_64 = *(float *)(DAT_0040f4d0 + 0x20) + param_1;
  uStack_5c = 0xbf800000;
  fStack_60 = fStack_64 + param_2;
  uStack_58 = 1;
  uStack_70 = param_4;
  uStack_6c = param_5;
  iStack_68 = param_6;
  FUN_00176af0(param_3,&uStack_70);
  lVar2 = FUN_00176b50(uStack_5c,param_3);
  if (-1 < lVar2) {
    psVar3 = (short *)((int)param_3 + 0x74 + param_6 * 2);
    iVar1 = (int)param_3 + (int)lVar2 * 0x1c;
    *(int *)(iVar1 + 0xd8) = iStack_68;
    *(undefined4 *)(iVar1 + 0xd0) = uStack_70;
    *(undefined4 *)(iVar1 + 0xd4) = uStack_6c;
    *(float *)(iVar1 + 0xdc) = fStack_64;
    *(float *)(iVar1 + 0xe0) = fStack_60;
    *(undefined4 *)(iVar1 + 0xe4) = uStack_5c;
    *(undefined1 *)(iVar1 + 0xe8) = 1;
    *psVar3 = *psVar3 + 1;
  }
  return -1 < lVar2;
}


// ==== FUN_00176a78 @ 00176a78 ====

bool FUN_00176a78(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x240);
  if (cVar1 < '\b') {
    *(undefined4 *)(param_2 + cVar1 * 0x10 + 0x1b8) = param_5;
    *(undefined4 *)(param_2 + *(char *)(param_2 + 0x240) * 0x10 + 0x1b0) = param_3;
    *(undefined4 *)(param_2 + *(char *)(param_2 + 0x240) * 0x10 + 0x1b4) = param_4;
    *(undefined4 *)(param_2 + *(char *)(param_2 + 0x240) * 0x10 + 0x1bc) = param_1;
    *(char *)(param_2 + 0x240) = *(char *)(param_2 + 0x240) + '\x01';
  }
  return cVar1 < '\b';
}


// ==== FUN_00176ae0 @ 00176ae0 ====

undefined4 FUN_00176ae0(void)

{
  return 0;
}


// ==== FUN_00176af0 @ 00176af0 ====

void FUN_00176af0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00176d18();
  FUN_00176dd0(param_1,param_2);
  fVar2 = (float)FUN_00176d90(param_1,param_2);
  *(float *)((int)param_2 + 0x14) = fVar1 * fVar2;
  return;
}


// ==== FUN_00176b50 @ 00176b50 ====

int FUN_00176b50(float param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  pfVar2 = (float *)(param_2 + 0xe4);
  iVar4 = -1;
  iVar1 = 0;
  iVar3 = 0x1000000;
  do {
    if (*(char *)(pfVar2 + 1) == '\0') {
      return iVar1;
    }
    fVar5 = *pfVar2;
    if (param_1 <= fVar5) {
      fVar5 = param_1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
    pfVar2 = pfVar2 + 7;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    param_1 = fVar5;
  } while (iVar1 < 8);
  return iVar4;
}


// ==== FUN_00176bb0 @ 00176bb0 ====

void FUN_00176bb0(undefined8 param_1)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  pfVar2 = (float *)((int)param_1 + 0xe4);
  iVar3 = 0;
  iVar4 = 0x1000000;
  iVar5 = -1;
  fVar6 = 0.0;
  do {
    if ((fVar6 <= *pfVar2) && (lVar1 = FUN_00176c70(param_1,iVar3), lVar1 != 0)) {
      fVar6 = *pfVar2;
      iVar5 = iVar3;
    }
    pfVar2 = pfVar2 + 7;
    iVar3 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
  } while (iVar3 < 8);
  if (-1 < iVar5) {
    FUN_00176770(param_1,iVar5);
  }
  return;
}


// ==== FUN_00176c70 @ 00176c70 ====

undefined4 FUN_00176c70(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0x1c;
  if ((*(char *)(iVar1 + 0xe8) == '\0') ||
     (iVar1 = *(int *)(*(int *)(iVar1 + 0xd0) + 0x7c),
     *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(iVar1 + 0x2f4) < 3.0)) {
    return 0;
  }
  if (((*(int *)(iVar1 + 0x38c) != 0) &&
      (iVar1 = *(int *)(param_1 + param_2 * 0x1c + 0xd8), iVar1 != 0x20)) && (iVar1 != 0x21)) {
    return 0;
  }
  return 1;
}


// ==== FUN_00176d00 @ 00176d00 ====

void FUN_00176d00(void)

{
  return;
}


// ==== FUN_00176d08 @ 00176d08 ====

void FUN_00176d08(void)

{
  return;
}


// ==== FUN_00176d10 @ 00176d10 ====

void FUN_00176d10(void)

{
  return;
}


// ==== FUN_00176d18 @ 00176d18 ====

float FUN_00176d18(undefined8 param_1,int *param_2)

{
  float fVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(int *)(*(int *)(*param_2 + 0x7c) + 0x3a4) == 0) {
    return 1.0;
  }
  auVar2 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_2 + 0x7c) + 0xa0));
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar2 = _vsub(auVar2,auVar3);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar4,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  fVar1 = auVar2._0_4_;
  return 1.0 - (float)((int)fVar1 * (uint)(fVar1 < 2500.0) | (uint)(fVar1 >= 2500.0) * 0x451c4000) /
               2500.0;
}


// ==== FUN_00176d90 @ 00176d90 ====

undefined4 FUN_00176d90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2[2];
  uVar2 = 0;
  if ((iVar1 != *(int *)(param_1 + 0xc)) && (iVar1 != *(int *)(*param_2 + 0xc84))) {
    uVar2 = *(undefined4 *)(&DAT_003f6260 + iVar1 * 4);
  }
  return uVar2;
}


// ==== FUN_00176dd0 @ 00176dd0 ====

float FUN_00176dd0(undefined8 param_1,int param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (*(int *)(param_2 + 4) != 0) {
    lVar1 = FUN_00176e40();
    fVar2 = 1.0;
    if (lVar1 != -1) {
      fVar2 = 1.0 - ((float)(int)lVar1 + 1.0) * 0.25;
    }
  }
  return fVar2;
}


// ==== FUN_00176e40 @ 00176e40 ====

int FUN_00176e40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 0x230) == param_2) {
    iVar2 = 0;
  }
  else {
    iVar1 = 1;
    do {
      iVar2 = (int)(char)iVar1;
      if (3 < iVar2) {
        return -1;
      }
      iVar1 = iVar2 + 1;
    } while (*(int *)(param_1 + iVar2 * 4 + 0x230) != param_2);
  }
  return iVar2;
}


// ==== FUN_00176ea0 @ 00176ea0 ====

void FUN_00176ea0(int param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x1000000;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x230);
    do {
      iVar1 = iVar3 >> 0x18;
      iVar3 = iVar3 + 0x1000000;
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
    } while (iVar1 < 3);
    *(int *)(param_1 + 0x23c) = (int)param_2;
  }
  return;
}


// ==== FUN_00176ee0 @ 00176ee0 ====

void FUN_00176ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0040f4d4;
  iVar1 = *(int *)(DAT_0040f4d4 + 0xa40);
  *param_1 = iVar1;
  *(int *)(iVar2 + 0xa40) = iVar1 + 1;
  return;
}


// ==== FUN_00176f00 @ 00176f00 ====

bool FUN_00176f00(int *param_1)

{
  return *param_1 == *(int *)(DAT_0040f4d4 + 0xa44);
}


// ==== FUN_00176f20 @ 00176f20 ====

void FUN_00176f20(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_00176f30 @ 00176f30 ====

void FUN_00176f30(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00176f38 @ 00176f38 ====

void FUN_00176f38(int *param_1)

{
  if (0 < *param_1) {
    param_1[1] = (param_1[1] + 1) % *param_1;
  }
  return;
}


// ==== FUN_00176f60 @ 00176f60 ====

void FUN_00176f60(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00176f70 @ 00176f70 ====

void FUN_00176f70(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}


// ==== FUN_00176f88 @ 00176f88 ====

undefined4 FUN_00176f88(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return 1;
}


// ==== FUN_00176fb0 @ 00176fb0 ====

void FUN_00176fb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 4) != '\0') {
    param_1[1] = param_2;
    param_1[3] = param_3;
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[2] = param_3;
  return;
}


// ==== FUN_00176fe8 @ 00176fe8 ====

void FUN_00176fe8(void)

{
  return;
}


// ==== FUN_00176ff0 @ 00176ff0 ====

undefined4 FUN_00176ff0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = 1;
  param_1 = param_1 + 7;
  do {
    param_1[-6] = 0x3f800000;
    iVar1 = iVar1 + -1;
    param_1[-4] = 0x3f800000;
    param_1[-2] = 0x3f800000;
    *param_1 = 0x3f800000;
    param_1 = param_1 + 1;
  } while (-1 < iVar1);
  return 1;
}


// ==== FUN_00177030 @ 00177030 ====

void FUN_00177030(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar3 = iVar3 + -1;
    iVar1 = DAT_0040f4d4 + *param_1 * 0x1fd0 + 0x2b00;
    if (*(char *)(iVar1 + 0x78) != '\0') {
      FUN_00184d78(iVar1 + 0x6f0);
    }
    iVar2 = *param_1 + 1;
    iVar1 = *param_1 + 0x10;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *param_1 = iVar2 + (iVar1 >> 4) * -0x10;
  } while (iVar3 != -1);
  return;
}


// ==== FUN_001770d8 @ 001770d8 ====

undefined4 FUN_001770d8(void)

{
  return 1;
}


// ==== FUN_001770e0 @ 001770e0 ====

void FUN_001770e0(int param_1,char param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 4;
  iVar1 = *(int *)(*(int *)(param_2 * 0x880 + DAT_0040f4d0 + 0x49a0) + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x98);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x94);
  return;
}


// ==== FUN_00177140 @ 00177140 ====

void FUN_00177140(int param_1)

{
  *(undefined4 *)(param_1 + 0x978) = 0;
  return;
}


// ==== FUN_00177148 @ 00177148 ====

undefined4 FUN_00177148(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x978) = 0;
  FUN_001777d0();
  *(undefined4 *)(param_1 + 0x96c) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x980);
  *(undefined4 *)(param_1 + 0x970) = 0;
  iVar2 = 4;
  *(undefined4 *)(param_1 + 0x974) = 0;
  do {
    puVar1[-1] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  return 1;
}


// ==== FUN_001771a8 @ 001771a8 ====

void FUN_001771a8(undefined8 param_1)

{
  FUN_00177350();
  *(int *)((int)param_1 + 0x978) = *(int *)((int)param_1 + 0x978) + 1;
  FUN_00177780(param_1);
  return;
}


// ==== FUN_001771e0 @ 001771e0 ====

undefined4 FUN_001771e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x978) = 0;
  return 1;
}


// ==== FUN_001771f0 @ 001771f0 ====

void FUN_001771f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_001777d0();
  puVar2 = (undefined4 *)(param_1 + 0x980);
  iVar1 = 4;
  do {
    puVar2[-1] = 0;
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_00177238 @ 00177238 ====

void FUN_00177238(void)

{
  FUN_00177800();
  return;
}


// ==== FUN_00177258 @ 00177258 ====

undefined8 FUN_00177258(float param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined1 auStack_60 [20];
  float fStack_4c;
  
  auVar7 = _qmtc2(param_3);
  auVar4 = _qmtc2(param_4);
  if (param_1 < DAT_003f5560) {
    auVar5 = _vsub(auVar4,auVar7);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar5,auVar5);
    auVar5 = _vmove(auVar5);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    auVar4 = _qmtc2(SQRT(auVar4._0_4_));
    uVar8 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar8);
    auVar4 = _qmfc2(auVar4._0_4_);
    fVar1 = auVar4._0_4_;
    auVar4 = _qmtc2((int)param_1 * (uint)(param_1 < fVar1) | (int)fVar1 * (uint)(param_1 >= fVar1));
    auVar4 = _vmulbc(auVar5,auVar4);
    auVar4 = _vadd(auVar7,auVar4);
  }
  auVar7 = _qmfc2(auVar7._0_4_);
  auVar4 = _qmfc2(auVar4._0_4_);
  lVar2 = FUN_00175f78(DAT_0040f4d4 + 4000,auVar7._0_8_,auVar4._0_8_,3,0,0,auStack_60);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (fStack_4c <= 0.4) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_00177350 @ 00177350 ====

void FUN_00177350(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 2;
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x96c);
  while( true ) {
    if (iVar2 == 0) {
      lVar3 = FUN_001779d0(param_1);
      if (lVar3 != 0) {
        return;
      }
      puVar1 = (undefined4 *)FUN_00177930(param_1);
      *(undefined4 *)(iVar5 + 0x96c) = *puVar1;
      *(undefined4 *)(iVar5 + 0x974) = puVar1[1];
      iVar2 = FUN_001779e0(param_1);
      FUN_00177c10((float)iVar2 / 60.0,*(undefined4 *)(iVar5 + 0x96c));
      *(undefined4 *)(iVar5 + 0x970) = 0;
    }
    lVar3 = FUN_00179238(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(iVar5 + 0x970));
    if (lVar3 == 0) {
      iVar2 = *(int *)(iVar5 + 0x970);
    }
    else if ((1 << (*(uint *)(iVar5 + 0x970) & 0x1f) & *(uint *)(iVar5 + 0x974)) == 0) {
      iVar2 = *(int *)(iVar5 + 0x970);
    }
    else {
      iVar6 = iVar6 + -1;
      uVar4 = FUN_00179258(DAT_0040f4d4 + 0xfa8);
      FUN_00177470(param_1,*(undefined4 *)(iVar5 + 0x96c),uVar4);
      iVar2 = *(int *)(iVar5 + 0x970);
    }
    *(int *)(iVar5 + 0x970) = iVar2 + 1;
    if (0x1f < iVar2 + 1) {
      *(undefined4 *)(iVar5 + 0x96c) = 0;
    }
    if (iVar6 < 1) break;
    iVar2 = *(int *)(iVar5 + 0x96c);
  }
  return;
}


// ==== FUN_00177470 @ 00177470 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00177470(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined1 auStack_90 [16];
  
  if (*(int *)(param_2[2] + 4) == 2) {
    FUN_001780b8();
  }
  else {
    uVar14 = 0x40a00000;
    pauVar5 = (undefined1 (*) [16])FUN_00178d30();
    auStack_90 = *pauVar5;
    fVar7 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    _lqc2(*pauVar5);
    auVar8 = _qmtc2(fVar7 + (*(float *)(*pauVar5 + 4) - fVar7) * 0.5);
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar8 = _sqc2(auVar8);
    lVar6 = FUN_00178fc8();
    uVar4 = DAT_00414dfc;
    uVar3 = DAT_00414df8;
    uVar2 = DAT_00414df4;
    uVar1 = DAT_00414df0;
    if (lVar6 != 0) {
      auVar11 = _lqc2(*param_2);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      _lqc2(auStack_90);
      auVar10 = _vaddbc(in_vf0,auVar11);
      auVar12 = _vsub(auVar10,auVar11);
      auVar13 = _vmove(auVar9);
      auVar10 = _vmove(auVar12);
      auVar11 = _vmul(auVar10,auVar10);
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar9,auVar11);
      auVar11 = _qmfc2(auVar11._0_4_);
      if (2.3283064e-10 <= auVar11._0_4_) {
        auVar11 = _vmul(auVar12,auVar12);
        auVar9 = _vmove(auVar12);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar13,auVar11);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar11);
        uVar14 = _vwaitq();
        auVar10 = _vmulq(auVar9,uVar14);
      }
      auVar11 = _qmtc2(0x40600000);
      auVar9 = _lqc2(*param_2);
      auVar11 = _vmulbc(auVar10,auVar11);
      uVar14 = 0x40200000;
      auVar11 = _vadd(auVar9,auVar11);
      auStack_90 = _sqc2(auVar11);
    }
    auVar8 = _lqc2(auVar8);
    auVar9 = _lqc2(_DAT_00414dd0);
    auVar11 = _qmtc2(DAT_00414df0);
    auVar8 = _vadd(auVar8,auVar11);
    auVar11 = _qmfc2(auVar8._0_4_);
    auVar8 = _lqc2(*param_2);
    auVar8 = _vadd(auVar8,auVar9);
    auVar8 = _qmfc2(auVar8._0_4_);
    FUN_00177258(uVar14,param_1,auVar8._0_8_,auVar11._0_8_);
    auVar8._4_4_ = uVar2;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar4;
    auVar11 = _lqc2(auVar8);
    auVar8 = _lqc2(auStack_90);
    auVar8 = _vadd(auVar8,auVar11);
    auVar11 = _qmfc2(auVar8._0_4_);
    auVar9 = _lqc2(_DAT_00414de0);
    auVar8 = _lqc2(*param_2);
    auVar8 = _vadd(auVar8,auVar9);
    auVar8 = _qmfc2(auVar8._0_4_);
    FUN_00175f50(DAT_0040f4d4 + 4000,auVar8._0_8_,auVar11._0_8_,0x121,0,0);
  }
  FUN_00177ba0();
  return;
}


// ==== FUN_001776a0 @ 001776a0 ====

void FUN_001776a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = -1;
  iVar1 = 0;
  fVar4 = DAT_003f5564;
  if (*(int *)(param_1 + 0x97c) == 0) {
    iVar3 = 0;
  }
  else {
    do {
      fVar5 = *(float *)(param_1 + 0x980 + iVar1 * 8);
      iVar3 = iVar1;
      if (fVar4 <= fVar5) {
        fVar5 = fVar4;
        iVar3 = iVar2;
      }
      iVar2 = iVar3;
      iVar1 = iVar1 + 1;
      iVar3 = iVar2;
    } while ((iVar1 < 5) &&
            (fVar4 = fVar5, iVar3 = iVar1, *(int *)(param_1 + 0x97c + iVar1 * 8) != 0));
  }
  *(undefined4 *)(param_1 + 0x97c + iVar3 * 8) = param_2;
  *(float *)(param_1 + 0x980 + iVar3 * 8) = *(float *)(DAT_0040f4d0 + 0x20) + 10.0;
  return;
}


// ==== FUN_00177750 @ 00177750 ====

undefined4 FUN_00177750(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x97c);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*piVar2 == param_2) {
      return 1;
    }
    piVar2 = piVar2 + 2;
  } while (iVar1 < 5);
  return 0;
}


// ==== FUN_00177780 @ 00177780 ====

void FUN_00177780(int param_1)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(param_1 + 0x980);
  iVar1 = 4;
  do {
    if ((pfVar2[-1] != 0.0) && (*pfVar2 < *(float *)(DAT_0040f4d0 + 0x20))) {
      pfVar2[-1] = 0.0;
      *pfVar2 = 0.0;
    }
    iVar1 = iVar1 + -1;
    pfVar2 = pfVar2 + 2;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_001777d0 @ 001777d0 ====

void FUN_001777d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 299;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  param_1[0x25a] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  return;
}


// ==== FUN_00177800 @ 00177800 ====

undefined4 FUN_00177800(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00177c48(param_2);
  if (lVar2 == 0) {
    if ((*(uint *)((int)param_2 + 0x1c) & param_3) != 0) {
      return 0;
    }
  }
  else {
    FUN_00177c08(param_2);
  }
  lVar2 = FUN_001779e8(param_1,param_2);
  if (lVar2 == 0) {
    lVar2 = FUN_001778a8(param_1,param_2);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = *(uint *)((int)lVar2 + 4);
  }
  else {
    uVar1 = *(uint *)((int)lVar2 + 4);
  }
  *(uint *)((int)lVar2 + 4) = uVar1 | param_3;
  return 1;
}


// ==== FUN_001778a8 @ 001778a8 ====

undefined4 * FUN_001778a8(int param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_001779c0();
  puVar3 = (undefined4 *)0x0;
  if (lVar2 == 0) {
    iVar1 = (*(int *)(param_1 + 0x964) + 1) % 300;
    puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x964) * 8);
    *(int *)(param_1 + 0x968) = *(int *)(param_1 + 0x968) + 1;
    *(int *)(param_1 + 0x964) = iVar1;
    if (iVar1 == *(int *)(param_1 + 0x960)) {
      *(int *)(param_1 + 0x960) = (iVar1 + 1) % 300;
    }
    *puVar3 = param_2;
    puVar3[1] = 0;
  }
  return puVar3;
}


// ==== FUN_00177930 @ 00177930 ====

long FUN_00177930(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_00177988();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x968) = *(int *)(param_1 + 0x968) + -1;
    *(int *)(param_1 + 0x960) = (*(int *)(param_1 + 0x960) + 1) % 300;
  }
  return lVar1;
}


// ==== FUN_00177988 @ 00177988 ====

int FUN_00177988(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_001779d0();
  if (lVar1 == 0) {
    param_1 = param_1 + *(int *)(param_1 + 0x960) * 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


// ==== FUN_001779c0 @ 001779c0 ====

bool FUN_001779c0(int param_1)

{
  return *(int *)(param_1 + 0x968) == 300;
}


// ==== FUN_001779d0 @ 001779d0 ====

bool FUN_001779d0(int param_1)

{
  return *(int *)(param_1 + 0x968) == 0;
}


// ==== FUN_001779e0 @ 001779e0 ====

undefined4 FUN_001779e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x968);
}


// ==== FUN_001779e8 @ 001779e8 ====

int * FUN_001779e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = FUN_001779d0();
  if (lVar4 == 0) {
    iVar1 = *(int *)(param_1 + 0x968);
    iVar2 = *(int *)(param_1 + 0x960);
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      piVar3 = (int *)(param_1 + iVar2 * 8);
      if (*piVar3 == param_2) {
        return piVar3;
      }
      iVar2 = (iVar2 + 1) % 300;
    }
  }
  return (int *)0x0;
}


// ==== FUN_00177a70 @ 00177a70 ====

void FUN_00177a70(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = DAT_003f5568;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00177a98 @ 00177a98 ====

undefined4 FUN_00177a98(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ==== FUN_00177aa0 @ 00177aa0 ====

undefined4 FUN_00177aa0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) == param_2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(int *)(param_1 + 0x28) = param_2;
    return 1;
  }
  return 0;
}


// ==== FUN_00177ad0 @ 00177ad0 ====

void FUN_00177ad0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ==== FUN_00177ad8 @ 00177ad8 ====

bool FUN_00177ad8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x14) & ~*(uint *)(param_1 + 0x18) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00177b00 @ 00177b00 ====

bool FUN_00177b00(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x14) & *(uint *)(param_1 + 0x18) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00177b20 @ 00177b20 ====

bool FUN_00177b20(int param_1,uint param_2)

{
  return (~*(uint *)(param_1 + 0x14) & *(uint *)(param_1 + 0x18) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00177b48 @ 00177b48 ====

bool FUN_00177b48(int param_1,uint param_2)

{
  return (~(*(uint *)(param_1 + 0x18) | *(uint *)(param_1 + 0x14)) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00177b68 @ 00177b68 ====

bool FUN_00177b68(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x14) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00177b80 @ 00177b80 ====

bool FUN_00177b80(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x18) & 1 << (param_2 & 0x1f)) != 0;
}


// ==== FUN_00177ba0 @ 00177ba0 ====

void FUN_00177ba0(int param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (param_2 & 0x1f);
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x18) & ~uVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18) | uVar2;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  if (param_4 == 0) {
    uVar1 = *(uint *)(param_1 + 0x14) & ~uVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14) | uVar2;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar2;
  return;
}


// ==== FUN_00177c08 @ 00177c08 ====

void FUN_00177c08(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// ==== FUN_00177c10 @ 00177c10 ====

void FUN_00177c10(float param_1,int param_2)

{
  if (param_1 < 1.0) {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x10) = *(float *)(DAT_0040f4d0 + 0x20) + param_1;
  return;
}


// ==== FUN_00177c48 @ 00177c48 ====

bool FUN_00177c48(int param_1)

{
  return *(float *)(param_1 + 0x10) < *(float *)(DAT_0040f4d0 + 0x20);
}


// ==== FUN_00177c78 @ 00177c78 ====

void FUN_00177c78(int param_1,int param_2)

{
  *(int *)(param_2 + 0x40) = param_1;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}


// ==== FUN_00177c90 @ 00177c90 ====

void FUN_00177c90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (param_2 == iVar2) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    uVar1 = uRam0000002c;
  }
  else {
    for (; uVar1 = *(undefined4 *)(param_2 + 0x2c), iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
      if (*(int *)(iVar2 + 0x2c) == param_2) {
        *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        uVar1 = uRam0000002c;
        break;
      }
    }
  }
  uRam0000002c = uVar1;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}


// ==== FUN_00177cd8 @ 00177cd8 ====

undefined4 FUN_00177cd8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    return 0;
  }
  if ((-1 < iVar1) && (iVar1 < 5)) {
    return 1;
  }
  return 0;
}


// ==== FUN_00177d10 @ 00177d10 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00177d10(undefined1 (*param_1) [16],int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1[2] + 4) = 0;
  FUN_00177a70();
  *(int *)param_1[4] = param_2;
  auVar1 = _pextlw((long)*(int *)(param_2 + 0xc),(long)*(int *)(param_2 + 4));
  auVar1 = _pextlw((long)*(int *)(param_2 + 8),auVar1._0_8_);
  auVar2 = _lqc2(_DAT_00414dc0);
  auVar1 = _qmtc2(auVar1._0_4_);
  *(undefined4 *)(param_1[4] + 4) = 0xffffffff;
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}


// ==== FUN_00177d90 @ 00177d90 ====

void FUN_00177d90(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


// ==== FUN_00177d98 @ 00177d98 ====

void FUN_00177d98(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  FUN_00177d90();
  *(undefined4 *)(((undefined1 (*) [16])param_1)[2] + 4) = 1;
  FUN_00177a70(param_1);
  auVar2 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])param_1 = auVar1;
  _sqc2(auVar2);
  return;
}


// ==== FUN_00177dd8 @ 00177dd8 ====

void FUN_00177dd8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *param_1 = (int)param_2;
  param_1[1] = (int)((ulong)param_2 >> 0x20);
  param_1[2] = in_a1_udw;
  param_1[3] = in_register_0000005c;
  return;
}


// ==== FUN_00177de0 @ 00177de0 ====

void FUN_00177de0(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  FUN_00177d90();
  pauVar2 = (undefined1 (*) [16])param_1;
  *(int *)(pauVar2[5] + 4) = param_2;
  *(undefined4 *)(pauVar2[2] + 4) = 3;
  *(undefined4 *)pauVar2[5] = 0xffffffff;
  *(undefined4 *)(pauVar2[6] + 8) = *(undefined4 *)(*(int *)(param_2 + 0x94) + 0x1c);
  FUN_00173690(pauVar2[5] + 0xc);
  FUN_00177a70(param_1);
  auVar3 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar3);
  *pauVar2 = auVar1;
  *(undefined4 *)pauVar2[6] = 2;
  *(undefined4 *)(pauVar2[6] + 4) = 0;
  _sqc2(auVar3);
  return;
}


// ==== FUN_00177e60 @ 00177e60 ====

void FUN_00177e60(undefined4 *param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *param_1 = (int)param_2;
  param_1[1] = (int)((ulong)param_2 >> 0x20);
  param_1[2] = in_a1_udw;
  param_1[3] = in_register_0000005c;
  return;
}


// ==== FUN_00177e68 @ 00177e68 ====

void FUN_00177e68(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}


// ==== FUN_00177e70 @ 00177e70 ====

void FUN_00177e70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  FUN_00173640(0x40a00000,param_1 + 0x5c);
  return;
}


// ==== FUN_00177e98 @ 00177e98 ====

undefined4 FUN_00177e98(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_001735e0(param_1 + 0x5c);
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_00173610(param_1 + 0x5c);
    uVar1 = 0;
    if (lVar2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  return uVar1;
}


// ==== FUN_00177ee8 @ 00177ee8 ====

void FUN_00177ee8(int param_1,uint param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 != 0) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | uVar1;
    return;
  }
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & ~uVar1;
  return;
}


// ==== FUN_00177f18 @ 00177f18 ====

void FUN_00177f18(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  FUN_00177d90();
  pauVar2 = (undefined1 (*) [16])param_1;
  *(undefined4 *)(pauVar2[2] + 4) = 2;
  FUN_00177a70(param_1);
  auVar3 = _vadd(in_vf0,in_vf0);
  pauVar2[5][0] = 0;
  auVar1 = _sqc2(auVar3);
  *pauVar2 = auVar1;
  _sqc2(auVar3);
  *(undefined4 *)(pauVar2[5] + 4) = 0;
  return;
}


// ==== FUN_00177f60 @ 00177f60 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00177f60(undefined1 (*param_1) [16],undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar12 = _qmtc2(param_3);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar12,auVar12);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar11,auVar6);
  auVar9 = _vmove(auVar12);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar10 = _vmulq(auVar9,uVar13);
  _vmulq(auVar6,uVar13);
  auVar7 = _lqc2(_DAT_004432d0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vmul(auVar7,auVar7);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar11,auVar9);
  auVar6 = _sqc2(auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar9);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar9 = _vmulq(auVar7,uVar13);
  _vmulq(auVar11,uVar13);
  auVar7 = _vmul(auVar10,auVar9);
  auVar9 = _sqc2(auVar9);
  auVar8 = _lqc2(auVar6);
  auVar11 = _vsubbc(in_vf0,in_vf0);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar8,auVar7);
  auVar7 = _vmax(auVar7,auVar11);
  auVar11 = _vminibc(auVar7,in_vf0);
  auVar7 = _sqc2(auVar10);
  auVar8 = _qmfc2(auVar11._0_4_);
  auVar11 = _sqc2(auVar12);
  fVar5 = (float)acosf(auVar8._0_4_);
  auVar7 = _lqc2(auVar7);
  auVar9 = _lqc2(auVar9);
  _vopmula(auVar7,auVar9);
  auVar7 = _vopmsub(auVar9,auVar7);
  auVar9._4_4_ = uVar2;
  auVar9._0_4_ = uVar1;
  auVar9._8_4_ = uVar3;
  auVar9._12_4_ = uVar4;
  auVar9 = _lqc2(auVar9);
  auVar9 = _vmul(auVar7,auVar9);
  auVar6 = _lqc2(auVar6);
  _vaddabc(auVar9,auVar9);
  auVar6 = _vmaddbc(auVar6,auVar9);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar5 = fVar5 * 57.29578;
  auVar9 = _lqc2(auVar11);
  if (0.0 < auVar6._0_4_) {
    fVar5 = -fVar5;
  }
  *(float *)(param_1[5] + 4) = fVar5;
  auVar6 = _qmtc2(0x3fc00000);
  auVar9 = _vmulbc(auVar9,auVar6);
  auVar6._8_4_ = in_a1_udw;
  auVar6._0_8_ = param_2;
  auVar6._12_4_ = in_register_0000005c;
  auVar6 = _lqc2(auVar6);
  auVar6 = _vsub(auVar6,auVar9);
  auVar6 = _sqc2(auVar6);
  *param_1 = auVar6;
  return;
}


// ==== FUN_001780b8 @ 001780b8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001780b8(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  if (param_1[5][0] != '\0') {
    pauVar5 = (undefined1 (*) [16])FUN_00178d30(param_2);
    uVar4 = DAT_004432cc;
    uVar3 = DAT_004432c8;
    uVar2 = DAT_004432c4;
    uVar1 = DAT_004432c0;
    auVar8 = _lqc2(*pauVar5);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _lqc2(*param_1);
    auVar11 = _qmtc2(0);
    _vsub(auVar8,auVar7);
    auVar8 = _vaddbc(in_vf0,auVar11);
    auVar11 = _vmove(auVar9);
    auVar7 = _vmul(auVar8,auVar8);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar9,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    if (auVar7._0_4_ < 2.3283064e-10) {
      return 0;
    }
    auVar7 = _vmul(auVar8,auVar8);
    auVar8 = _vmove(auVar8);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar11,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar12 = _vmulq(auVar8,uVar13);
    _vmulq(auVar7,uVar13);
    auVar9 = _lqc2(_DAT_004432d0);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar9,auVar9);
    auVar7 = _sqc2(auVar7);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar11,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar10 = _vmulq(auVar9,uVar13);
    _vmulq(auVar8,uVar13);
    auVar8 = _vmul(auVar12,auVar10);
    auVar9 = _lqc2(auVar7);
    _vaddabc(auVar8,auVar8);
    auVar9 = _vmaddbc(auVar9,auVar8);
    auVar11 = _vsubbc(in_vf0,in_vf0);
    auVar8 = _sqc2(auVar12);
    auVar9 = _vmax(auVar9,auVar11);
    auVar11 = _vminibc(auVar9,in_vf0);
    auVar9 = _sqc2(auVar10);
    auVar11 = _qmfc2(auVar11._0_4_);
    fVar6 = (float)acosf(auVar11._0_4_);
    auVar9 = _lqc2(auVar9);
    auVar8 = _lqc2(auVar8);
    _vopmula(auVar8,auVar9);
    auVar9 = _vopmsub(auVar9,auVar8);
    auVar8._4_4_ = uVar2;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar4;
    auVar8 = _lqc2(auVar8);
    auVar8 = _vmul(auVar9,auVar8);
    auVar7 = _lqc2(auVar7);
    _vaddabc(auVar8,auVar8);
    auVar7 = _vmaddbc(auVar7,auVar8);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar6 = fVar6 * 57.29578;
    if (0.0 < auVar7._0_4_) {
      fVar6 = -fVar6;
    }
    fVar6 = fVar6 - *(float *)(param_1[5] + 4);
    if (fVar6 < 0.0) {
      fVar6 = -(-fVar6 - (float)(int)(-fVar6 / 360.0) * 360.0);
    }
    else {
      fVar6 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
    }
    if (fVar6 < -180.0) {
      fVar6 = fVar6 + 360.0;
    }
    else if (180.0 < fVar6) {
      fVar6 = fVar6 - 360.0;
    }
    if (ABS(fVar6) < 45.0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00178350 @ 00178350 ====

void FUN_00178350(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_2;
  puVar2[0x14] = param_1;
  *puVar2 = (int)param_3;
  puVar2[1] = (int)((ulong)param_3 >> 0x20);
  puVar2[2] = in_a1_udw;
  puVar2[3] = in_register_0000005c;
  lVar1 = FUN_0017b8a8(DAT_0040f4d4 + 0x1290);
  if (lVar1 != 0) {
    FUN_00177c78(lVar1,param_2);
  }
  return;
}


// ==== FUN_00178398 @ 00178398 ====

void FUN_00178398(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  FUN_00177d90();
  pauVar2 = (undefined1 (*) [16])param_1;
  *(undefined4 *)(pauVar2[2] + 4) = 4;
  FUN_00177a70(param_1);
  auVar3 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)pauVar2[5] = 0;
  auVar1 = _sqc2(auVar3);
  *pauVar2 = auVar1;
  _sqc2(auVar3);
  return;
}


// ==== FUN_001783e0 @ 001783e0 ====

void FUN_001783e0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


