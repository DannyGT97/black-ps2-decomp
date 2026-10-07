// ==== FUN_00197858 @ 00197858 ====

void FUN_00197858(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  float fVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  
  piVar4 = (int *)param_1;
  if (param_3 == 0) {
    FUN_00173640(0x3f800000,piVar4 + 2);
  }
  else {
    iVar2 = FUN_001830d0(*piVar4 + 0xd10);
    fVar5 = *(float *)(iVar2 + 0x30);
    if (0.0 < fVar5) {
      FUN_00181f48(0,fVar5,*piVar4 + 0xc80,0,0);
      uStack_58 = *(undefined4 *)(iVar2 + 0x28);
      uStack_54 = *(undefined4 *)(iVar2 + 0x2c);
      uStack_60 = (undefined4)*(undefined8 *)(iVar2 + 0x20);
      uStack_5c = (undefined4)((ulong)*(undefined8 *)(iVar2 + 0x20) >> 0x20);
      FUN_0017e488(uStack_54,*piVar4 + 0x650);
      FUN_00193a60(fVar5,param_1,0);
      FUN_0018ac80(*piVar4 + 0xd18,1);
    }
    else {
      if (*(int *)(*piVar4 + 0xd1c) == 0) {
        iVar2 = *piVar4;
      }
      else {
        FUN_00272488(*(undefined8 *)(iVar2 + 0x38),&uStack_60);
        FUN_00272488(**(undefined8 **)(*piVar4 + 0xd1c),auStack_50);
        FUN_001a4f70(0x3f5878,&uStack_60,auStack_50);
        iVar2 = *piVar4;
      }
      lVar3 = FUN_00183160(iVar2 + 0xd10);
      if (lVar3 == 0) {
        if ((*(char *)(*piVar4 + 0xc7d) != '\0') &&
           (lVar3 = FUN_001830f0(*piVar4 + 0xd10), lVar3 != 0)) {
          iVar2 = (int)lVar3;
          uVar1 = *(undefined8 *)(iVar2 + 0x20);
          uStack_58 = *(undefined4 *)(iVar2 + 0x28);
          uStack_54 = *(undefined4 *)(iVar2 + 0x2c);
          uStack_60 = (undefined4)uVar1;
          uStack_5c = (undefined4)((ulong)uVar1 >> 0x20);
          FUN_00180aa0(uStack_54,*piVar4 + 0xb30,uVar1,2);
        }
        FUN_00193990(param_1,1);
      }
      else {
        FUN_00193a28(param_1,0x1f,0);
      }
    }
  }
  return;
}


// ==== FUN_001979e0 @ 001979e0 ====

undefined4 FUN_001979e0(int *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  
  if (*param_2 == 0xe) {
    FUN_0018ad00(*param_1 + 0xd18);
    lVar1 = FUN_0018ad30(*param_1 + 0xd18);
    if (lVar1 == 0) {
      iVar4 = FUN_001830d0(*param_1 + 0xd10);
      FUN_0017e488(*(undefined4 *)(iVar4 + 0x2c),*param_1 + 0x650);
      uVar3 = 1;
    }
    else {
      iVar4 = *param_1;
      uVar2 = FUN_0018ad60(iVar4 + 0xd18);
      auVar5._8_8_ = in_v0_udw;
      auVar5._0_8_ = uVar2;
      auVar5 = _por(in_zero_qw,auVar5);
      FUN_0017e428(iVar4 + 0x650,auVar5._0_8_);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00197a88 @ 00197a88 ====

void FUN_00197a88(undefined8 param_1)

{
  FUN_00193980();
  FUN_00193a60(0x40000000,param_1,1);
  return;
}


// ==== FUN_00197ac0 @ 00197ac0 ====

void FUN_00197ac0(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00197ae0 @ 00197ae0 ====

void FUN_00197ae0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = FUN_00183380(*param_1 + 0x1eb0);
  iVar1 = *param_1;
  auVar5 = _qmtc2(uVar2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x7c) + 0xa0));
  auVar3 = _vsub(auVar3,auVar5);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar4 = _qmfc2(auVar5._0_4_);
  if (auVar3._0_4_ < 10.0) {
    FUN_00182380(iVar1 + 0x810,auVar4._0_8_,0);
  }
  else if (auVar3._0_4_ < 12.0) {
    FUN_001823b0(iVar1 + 0x810,auVar4._0_8_,0);
  }
  else {
    auVar3 = _qmfc2(auVar5._0_4_);
    FUN_00182410(iVar1 + 0x810,auVar3._0_8_,0,0);
  }
  return;
}


// ==== FUN_00197bb0 @ 00197bb0 ====

void FUN_00197bb0(undefined8 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00193980();
  piVar1 = (int *)param_1;
  *(undefined1 *)(*(int *)(*piVar1 + 0x694) + 0x35) = 1;
  FUN_00181f48(0,0x3f800000,*piVar1 + 0xc80,0,4);
  uVar2 = FUN_0018dd60(*piVar1 + 0xc94);
  FUN_00193a60(uVar2,param_1,0);
  return;
}


// ==== FUN_00197c20 @ 00197c20 ====

void FUN_00197c20(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_00197c40 @ 00197c40 ====

void FUN_00197c40(undefined8 param_1)

{
  FUN_00193990(param_1,1);
  return;
}


// ==== FUN_00197c60 @ 00197c60 ====

void FUN_00197c60(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if ((char)piVar2[2] == '\0') {
    *(undefined1 *)(piVar2 + 2) = 1;
  }
  else {
    lVar1 = FUN_001a7df0(*(undefined4 *)(*(int *)(*piVar2 + 0x7c) + 0x330),0,3);
    if (lVar1 == 2) {
      FUN_00193990(param_1,1);
    }
    else if (lVar1 == 3) {
      FUN_00193990(param_1,0);
    }
  }
  return;
}


// ==== FUN_00197cf0 @ 00197cf0 ====

void FUN_00197cf0(int *param_1)

{
  FUN_00193980();
  FUN_00182318(*param_1 + 0x810,0);
  FUN_00188148(*param_1 + 0x290,1);
  *(undefined4 *)(*param_1 + 0x4c) = 5;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// ==== FUN_00197d48 @ 00197d48 ====

void FUN_00197d48(int *param_1)

{
  FUN_00193988();
  FUN_00182318(*param_1 + 0x810,1);
  FUN_00188148(*param_1 + 0x290,0);
  *(undefined4 *)(*param_1 + 0x4c) = 0;
  return;
}


// ==== FUN_00197da0 @ 00197da0 ====

void FUN_00197da0(int *param_1)

{
  long lVar1;
  int iVar2;
  
  if ((char)param_1[2] == '\0') {
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
  }
  else {
    lVar1 = FUN_001829e8(*param_1 + 0x810);
    iVar2 = *param_1;
    if (lVar1 == 0) {
      lVar1 = FUN_001829a8(iVar2 + 0x810);
      if (lVar1 != 0) {
        return;
      }
      iVar2 = *param_1;
    }
    FUN_001825b0(iVar2 + 0x810);
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


// ==== FUN_00197e20 @ 00197e20 ====

void FUN_00197e20(undefined8 param_1,long param_2)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  undefined4 uVar10;
  
  piVar3 = (int *)param_2;
  FUN_00193980();
  piVar8 = (int *)param_1;
  if (param_2 == 0) {
    iVar4 = *piVar8;
  }
  else {
    if (*piVar3 == 2) {
      cVar9 = (char)piVar3[8];
      iVar4 = piVar3[4];
      iVar5 = piVar3[5];
      iVar6 = piVar3[6];
      iVar7 = piVar3[7];
      goto LAB_00197e74;
    }
    iVar4 = *piVar8;
  }
  cVar9 = '\0';
  iVar7 = *(int *)(iVar4 + 0x7c);
  iVar4 = *(int *)(iVar7 + 0xa0);
  iVar5 = *(int *)(iVar7 + 0xa4);
  iVar6 = *(int *)(iVar7 + 0xa8);
  iVar7 = *(int *)(iVar7 + 0xac);
LAB_00197e74:
  *(char *)((int)piVar8 + 9) = cVar9;
  *(undefined1 *)(*piVar8 + 0x845) = 1;
  *(undefined1 *)(*piVar8 + 0x6d8) = 1;
  FUN_00188148(*piVar8 + 0x290,1);
  *(undefined1 *)(*piVar8 + 0x849) = 1;
  FUN_00181f48(0,0x3f800000,*piVar8 + 0xc80,0,0x12);
  auVar2._4_4_ = iVar5;
  auVar2._0_4_ = iVar4;
  auVar2._8_4_ = iVar6;
  auVar2._12_4_ = iVar7;
  auVar2 = _por(in_zero_qw,auVar2);
  cVar1 = FUN_00198018(param_1,auVar2._0_8_);
  *(char *)(piVar8 + 2) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(*(int *)(*piVar8 + 0x694) + 0x30) = 1;
  }
  if (cVar9 == '\0') {
    uVar10 = FUN_0016de70(0x40400000,0x40a00000,DAT_0040f4d4);
    FUN_00193a60(uVar10,param_1,0);
  }
  else {
    uVar10 = FUN_0016de70(0x40000000,0x40200000,DAT_0040f4d4);
    FUN_00193a60(uVar10,param_1,0);
  }
  return;
}


// ==== FUN_00197f68 @ 00197f68 ====

void FUN_00197f68(int *param_1)

{
  FUN_00193988();
  FUN_001825b0(*param_1 + 0x810);
  *(undefined1 *)(*param_1 + 0x849) = 0;
  *(undefined1 *)(*param_1 + 0x845) = 0;
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  *(undefined1 *)(*param_1 + 0x6d8) = 0;
  FUN_00188148(*param_1 + 0x290,0);
  return;
}


// ==== FUN_00197fd0 @ 00197fd0 ====

void FUN_00197fd0(undefined8 param_1)

{
  FUN_00193990(param_1,1);
  return;
}


// ==== FUN_00198018 @ 00198018 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00198018(int *param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 in_a1_qw [16];
  int iVar7;
  undefined4 unaff_s3_lo;
  undefined4 unaff_s3_hi;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  uint uStack_bc;
  uint uStack_b8;
  
  auVar14 = _qmtc2(0);
  auVar16 = _qmtc2(in_a1_qw._0_4_);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _vmove(auVar13);
  iVar8 = -1;
  auVar12 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
  _vsub(auVar12,auVar16);
  auVar14 = _vaddbc(in_vf0,auVar14);
  auVar12 = _vmul(auVar14,auVar14);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar13,auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  iVar6 = *param_1;
  if (auVar12._0_4_ < 2.3283064e-10) {
    auVar12 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar6 + 0x7c) + 0x90));
    auVar14 = _vsub(in_vf0,auVar12);
  }
  iVar7 = 0;
  if (0 < *(int *)(iVar6 + 0x90)) {
    iVar3 = 0;
    fVar10 = DAT_003f5914;
    do {
      pauVar1 = *(undefined1 (**) [16])(iVar6 + iVar3 + 0x94);
      if (pauVar1 == (undefined1 (*) [16])0x0) {
        iVar6 = *param_1;
      }
      else {
        auVar13 = _lqc2(*pauVar1);
        auVar12 = _qmtc2(0);
        auVar16 = _lqc2(in_a1_qw);
        _vsub(auVar13,auVar16);
        auVar13 = _vaddbc(in_vf0,auVar12);
        auVar12 = _vmul(auVar13,auVar13);
        _vaddabc(auVar12,auVar12);
        auVar12 = _vmaddbc(auVar15,auVar12);
        auVar12 = _qmfc2(auVar12._0_4_);
        if (auVar12._0_4_ < 2.3283064e-10) {
          iVar6 = *param_1;
        }
        else {
          auVar12 = _vmul(auVar13,auVar13);
          auVar13 = _vmove(auVar13);
          _vaddabc(auVar12,auVar12);
          auVar12 = _vmaddbc(auVar15,auVar12);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar12);
          auVar12 = _qmfc2(auVar12._0_4_);
          auVar12 = _qmtc2(SQRT(auVar12._0_4_));
          uVar18 = _vwaitq();
          auVar13 = _vmulq(auVar13,uVar18);
          auVar12 = _qmfc2(auVar12._0_4_);
          fVar11 = 1.0;
          auVar13 = _vmove(auVar13);
          fVar9 = auVar12._0_4_ / 20.0;
          if (*(char *)((int)param_1 + 9) != '\0') {
            auVar13 = _vmul(auVar14,auVar13);
            auVar12 = _vaddbc(in_vf0,in_vf0);
            _vaddabc(auVar13,auVar13);
            auVar12 = _vmaddbc(auVar12,auVar13);
            auVar12 = _qmfc2(auVar12._0_4_);
            fVar11 = auVar12._0_4_ * 0.25 + 1.0;
          }
          fVar11 = (float)((int)fVar9 * (uint)(fVar9 < 1.0) | (uint)(fVar9 >= 1.0) * 0x3f800000) *
                   fVar11;
          if (fVar10 < fVar11) {
            if (*(char *)((int)param_1 + 9) == '\0') {
LAB_001982d4:
              unaff_s3_lo = *(undefined4 *)*pauVar1;
              unaff_s3_hi = *(undefined4 *)(*pauVar1 + 4);
              in_s3_udw = *(undefined4 *)(*pauVar1 + 8);
              in_register_0000013c = *(undefined4 *)(*pauVar1 + 0xc);
              fVar10 = fVar11;
              iVar8 = iVar7;
            }
            else {
              auVar13 = _lqc2(*pauVar1);
              auVar12 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
              auVar13 = _vsub(auVar12,auVar13);
              auVar12 = _qmfc2(auVar13._0_4_);
              bVar2 = true;
              if ((auVar12._0_4_ & 0x7f800000) < 0x37800001) {
                auVar12 = _sqc2(auVar13);
                uStack_bc = auVar12._4_4_;
                bVar2 = true;
                if ((uStack_bc & 0x7f800000) < 0x37800001) {
                  auVar12 = _sqc2(auVar13);
                  uStack_b8 = auVar12._8_4_;
                  bVar2 = 0x37800000 < (uStack_b8 & 0x7f800000);
                }
              }
              if (!bVar2) goto LAB_001982d4;
              auVar16 = _lqc2(_DAT_004432c0);
              auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
              auVar12 = _lqc2(*pauVar1);
              auVar17 = _vadd(auVar13,auVar16);
              auVar16 = _vadd(auVar12,auVar16);
              auVar12 = _sqc2(auVar14);
              auVar13 = _sqc2(auVar15);
              auVar14 = _qmfc2(auVar17._0_4_);
              auVar15 = _qmfc2(auVar16._0_4_);
              lVar4 = FUN_00175f50(DAT_0040f4d4 + 4000,auVar14._0_8_,auVar15._0_8_,1,0,0);
              auVar14 = _lqc2(auVar12);
              auVar15 = _lqc2(auVar13);
              if (lVar4 == 0) goto LAB_001982d4;
            }
            iVar6 = *param_1;
          }
          else {
            iVar6 = *param_1;
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar7 * 4;
    } while (iVar7 < *(int *)(iVar6 + 0x90));
  }
  if (iVar8 == -1) {
    uVar5 = 0;
  }
  else {
    auVar12._4_4_ = unaff_s3_hi;
    auVar12._0_4_ = unaff_s3_lo;
    auVar12._8_4_ = in_s3_udw;
    auVar12._12_4_ = in_register_0000013c;
    auVar12 = _por(in_zero_qw,auVar12);
    uVar5 = FUN_00182410(iVar6 + 0x810,auVar12._0_8_,0,1);
  }
  return uVar5;
}


// ==== FUN_00198350 @ 00198350 ====

void FUN_00198350(int *param_1)

{
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
  FUN_0017e428(*param_1 + 0x650,*(undefined8 *)(param_1 + 4));
  return;
}


// ==== FUN_00198388 @ 00198388 ====

void FUN_00198388(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  FUN_00193980();
  piVar7 = (int *)param_1;
  if (param_2 == 0) {
    iVar2 = *piVar7;
  }
  else {
    piVar6 = (int *)param_2;
    if (*piVar6 == 7) {
      uVar1 = *(undefined8 *)(piVar6 + 4);
      iVar2 = piVar6[6];
      iVar3 = piVar6[7];
      piVar7[4] = (int)uVar1;
      piVar7[5] = (int)((ulong)uVar1 >> 0x20);
      piVar7[6] = iVar2;
      piVar7[7] = iVar3;
      goto LAB_001983d4;
    }
    iVar2 = *piVar7;
  }
  iVar2 = *(int *)(iVar2 + 0x7c);
  iVar3 = *(int *)(iVar2 + 0xa4);
  iVar4 = *(int *)(iVar2 + 0xa8);
  iVar5 = *(int *)(iVar2 + 0xac);
  piVar7[4] = *(int *)(iVar2 + 0xa0);
  piVar7[5] = iVar3;
  piVar7[6] = iVar4;
  piVar7[7] = iVar5;
LAB_001983d4:
  uVar8 = FUN_0016de70(0x40200000,0x40400000,DAT_0040f4d4);
  FUN_00193a60(uVar8,param_1,0);
  FUN_001825b0(*piVar7 + 0x810);
  *(undefined1 *)(piVar7 + 2) = *(undefined1 *)(*(int *)(*(int *)(*piVar7 + 0x694) + 0x7c) + 0x3aa);
  *(undefined1 *)(*(int *)(*piVar7 + 0x694) + 0x30) = 1;
  FUN_00188148(*piVar7 + 0x290,1);
  return;
}


// ==== FUN_00198458 @ 00198458 ====

void FUN_00198458(int *param_1)

{
  int iVar1;
  
  FUN_00193988();
  if ((char)param_1[2] == '\0') {
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  FUN_00188148(iVar1 + 0x290,0);
  return;
}


// ==== FUN_001984a8 @ 001984a8 ====

void FUN_001984a8(undefined8 param_1)

{
  FUN_00193990(param_1,1);
  return;
}


// ==== FUN_001984f0 @ 001984f0 ====

void FUN_001984f0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_00188f10(*(int *)param_1 + 0x150);
  if (lVar2 == 0) {
    FUN_00193990(param_1,0);
  }
  else {
    cVar1 = FUN_00176f00(*(int *)param_1 + 0x1fcc);
    if ((cVar1 != '\0') && (lVar2 = FUN_001985b8(param_1), lVar2 != 0)) {
      FUN_00193990(param_1,1);
    }
  }
  return;
}


// ==== FUN_00198568 @ 00198568 ====

void FUN_00198568(void)

{
  FUN_00193980();
  return;
}


// ==== FUN_00198588 @ 00198588 ====

void FUN_00198588(int *param_1)

{
  FUN_00193988();
  FUN_001825b0(*param_1 + 0x810);
  return;
}


// ==== FUN_001985b8 @ 001985b8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001985b8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_v0_udw;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auStack_b0 [36];
  int iStack_8c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar5 = FUN_001891c0(*param_1 + 0x150);
  bVar2 = false;
  if (lVar5 != 0) {
    iVar3 = *(int *)(*param_1 + 0x7c);
    if (*(char *)(iVar3 + 0x3aa) == '\0') {
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
      auVar10 = _lqc2(_DAT_00414de0);
      auVar10 = _vadd(auVar11,auVar10);
      auStack_70 = _sqc2(auVar10);
    }
    else {
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
      auVar10 = _lqc2(_DAT_00414dd0);
      auVar10 = _vadd(auVar11,auVar10);
      auStack_70 = _sqc2(auVar10);
    }
    iVar7 = 0;
    iVar3 = *(int *)(*param_1 + 0x7c);
    uStack_50 = *(undefined4 *)(iVar3 + 0xf0);
    uStack_4c = *(undefined4 *)(iVar3 + 0xf4);
    uStack_48 = *(undefined4 *)(iVar3 + 0xf8);
    uStack_44 = *(undefined4 *)(iVar3 + 0xfc);
    uVar6 = FUN_00188f80(*param_1 + 0x150);
    lVar5 = FUN_00178f18(uVar6);
    if (lVar5 == 0) {
      auStack_60._0_8_ = FUN_00189048(*param_1 + 0x150);
      auStack_60._8_4_ = (int)extraout_v0_udw;
      auStack_60._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
    }
    else {
      iVar3 = FUN_00188f80(*param_1 + 0x150);
      iVar7 = *(int *)(iVar3 + 8);
      if (*(char *)(iVar7 + 0x3aa) == '\0') {
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0xa0));
        auVar10 = _lqc2(_DAT_00414de0);
        auVar10 = _vadd(auVar11,auVar10);
        auStack_60 = _sqc2(auVar10);
      }
      else {
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0xa0));
        auVar10 = _lqc2(_DAT_00414dd0);
        auVar10 = _vadd(auVar11,auVar10);
        auStack_60 = _sqc2(auVar10);
      }
    }
    auVar15 = _lqc2(auStack_70);
    auVar10 = _qmtc2(0);
    auVar12 = _lqc2(auStack_60);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    _vsub(auVar12,auVar15);
    auVar10 = _vaddbc(in_vf0,auVar10);
    auVar15 = _vmove(auVar11);
    auVar12 = _vmove(auVar10);
    auVar10 = _vmul(auVar12,auVar12);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    bVar2 = true;
    if (2.3283064e-10 <= auVar10._0_4_) {
      auVar11 = _vmul(auVar12,auVar12);
      auVar10._4_4_ = uStack_4c;
      auVar10._0_4_ = uStack_50;
      auVar10._8_4_ = uStack_48;
      auVar10._12_4_ = uStack_44;
      auVar13 = _lqc2(auVar10);
      _vaddabc(auVar11,auVar11);
      auVar10 = _vmaddbc(auVar15,auVar11);
      auVar11 = _vmul(auVar13,auVar13);
      auVar14 = _vmove(auVar12);
      _vaddabc(auVar11,auVar11);
      auVar12 = _vmaddbc(auVar15,auVar11);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      auVar13 = _qmtc2(SQRT(auVar10._0_4_));
      uVar16 = _vwaitq();
      auVar10 = _vmulq(auVar14,uVar16);
      auVar11._4_4_ = uStack_4c;
      auVar11._0_4_ = uStack_50;
      auVar11._8_4_ = uStack_48;
      auVar11._12_4_ = uStack_44;
      auVar14 = _lqc2(auVar11);
      auVar11 = _vmul(auVar10,auVar10);
      auVar10 = _vmove(auVar10);
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar15,auVar11);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar12);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      uVar16 = _vwaitq();
      auVar12 = _vmulq(auVar14,uVar16);
      _vmulq(auVar15,uVar16);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar11);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      uVar16 = _vwaitq();
      auVar10 = _vmulq(auVar10,uVar16);
      _vmulq(auVar11,uVar16);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar10,auVar12);
      auVar12 = _vsubbc(in_vf0,in_vf0);
      _vaddabc(auVar10,auVar10);
      auVar11 = _vmaddbc(auVar11,auVar10);
      auVar10 = _qmfc2(auVar13._0_4_);
      auVar11 = _vmax(auVar11,auVar12);
      fVar4 = auVar10._0_4_;
      auVar10 = _vminibc(auVar11,in_vf0);
      auVar10 = _qmfc2(auVar10._0_4_);
      fVar8 = (float)FUN_0029e0d8(auVar10._0_4_);
      if (5.0 < fVar4) {
        fVar9 = (float)FUN_00185438(*param_1 + 0x6f0,iVar7);
        if (fVar9 < fVar8 * 57.29578) {
          return false;
        }
        fVar8 = (float)FUN_00185350(*param_1 + 0x6f0,iVar7);
        if (fVar8 < fVar4) {
          return false;
        }
      }
      lVar5 = FUN_00175fa0(0x3d4ccccd,DAT_0040f4d4 + 4000,auStack_70._0_8_,auStack_60._0_4_,0x21);
      bVar2 = false;
      if (lVar5 == 0) {
        cVar1 = FUN_00175f78(DAT_0040f4d4 + 4000,auStack_70._0_8_,auStack_60._0_4_,4,
                             *(undefined4 *)(*param_1 + 0x7c),0,auStack_b0);
        bVar2 = true;
        if (cVar1 == '\x01') {
          uVar6 = FUN_00188f80(*param_1 + 0x150);
          lVar5 = FUN_00178f18(uVar6);
          if (lVar5 == 0) {
            bVar2 = true;
          }
          else {
            iVar3 = FUN_00188f80(*param_1 + 0x150);
            bVar2 = iStack_8c == *(int *)(iVar3 + 8);
          }
        }
      }
    }
  }
  return bVar2;
}


// ==== FUN_00198908 @ 00198908 ====

undefined4 FUN_00198908(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (((*(byte *)(*param_1 + 0xd60) >> 4 & 1) != 0) &&
     ((lVar2 = FUN_00185f00(*param_1 + 0x90), lVar2 == 0 ||
      (uVar1 = 0, *(int *)(*(int *)(*param_1 + 0x100) + 0x24) != 2)))) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00198968 @ 00198968 ====

undefined8 FUN_00198968(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar1 = FUN_00189048(*param_1 + 0x150);
  auVar7 = _qmtc2(uVar1);
  auVar6._8_4_ = in_a1_udw;
  auVar6._0_8_ = param_2;
  auVar6._12_4_ = in_register_0000005c;
  auVar6 = _lqc2(auVar6);
  auVar8 = _vsub(auVar6,auVar7);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vmul(auVar8,auVar8);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  auVar7 = _vmove(auVar7);
  auVar6 = _qmfc2(auVar6._0_4_);
  uVar3 = 1;
  if (2.3283064e-10 <= auVar6._0_4_) {
    auVar6 = _vmul(auVar8,auVar8);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    uVar1 = 0;
    auVar6 = _qmfc2(auVar6._0_4_);
    uVar3 = FUN_00188f80(*param_1 + 0x150);
    lVar4 = FUN_00178f18(uVar3);
    iVar2 = *param_1;
    if (lVar4 != 0) {
      iVar2 = FUN_00188f80(iVar2 + 0x150);
      uVar1 = *(undefined4 *)(iVar2 + 8);
      iVar2 = *param_1;
    }
    fVar5 = (float)FUN_00185350(iVar2 + 0x6f0,uVar1);
    uVar3 = 1;
    if (fVar5 * fVar5 < auVar6._0_4_) {
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ==== FUN_00198a68 @ 00198a68 ====

void FUN_00198a68(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  
  FUN_001984f0();
  lVar3 = FUN_00193a08(param_1);
  if (lVar3 == 0) {
    piVar6 = (int *)param_1;
    iVar1 = *piVar6;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(iVar1 + 0x650,auVar5._0_8_);
    iVar1 = *piVar6;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar2._8_8_ = in_v0_udw;
    auVar2._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar2);
    FUN_0017db98(iVar1 + 0x650,auVar5._0_8_);
    lVar3 = FUN_001829e8(*piVar6 + 0x810);
    if ((lVar3 != 0) || (lVar3 = FUN_001829a8(*piVar6 + 0x810), lVar3 == 0)) {
      FUN_00193990(param_1,0);
    }
  }
  return;
}


// ==== FUN_00198b10 @ 00198b10 ====

void FUN_00198b10(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_00198568();
  iVar1 = *(int *)param_1;
  puVar3 = (undefined8 *)FUN_001893a0(iVar1 + 0x150);
  FUN_00182410(iVar1 + 0x810,*puVar3,0,0);
  iVar1 = *(int *)param_1;
  puVar3 = (undefined8 *)FUN_001893a0(iVar1 + 0x150);
  lVar2 = FUN_00180b70(iVar1 + 0xb30,*puVar3);
  if (lVar2 == 0) {
    FUN_00193a60(0x3f000000,param_1,0);
  }
  else {
    FUN_00193a60(0x41200000,param_1,0);
  }
  return;
}


// ==== FUN_00198bb0 @ 00198bb0 ====

void FUN_00198bb0(undefined8 param_1)

{
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00198bd0 @ 00198bd0 ====

bool FUN_00198bd0(undefined8 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = FUN_00198908();
  bVar1 = false;
  if (lVar3 != 0) {
    lVar3 = FUN_00189208(*(int *)param_1 + 0x150);
    bVar1 = false;
    if (lVar3 != 0) {
      puVar2 = (undefined4 *)FUN_001893a0(*(int *)param_1 + 0x150);
      lVar3 = FUN_00198968(param_1,*puVar2);
      bVar1 = lVar3 != 0;
    }
  }
  return bVar1;
}


// ==== FUN_00198c40 @ 00198c40 ====

void FUN_00198c40(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  
  FUN_001984f0();
  lVar3 = FUN_00193a08(param_1);
  if (lVar3 == 0) {
    iVar1 = *(int *)param_1;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(iVar1 + 0x650,auVar5._0_8_);
    iVar1 = *(int *)param_1;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar2._8_8_ = in_v0_udw;
    auVar2._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar2);
    FUN_0017db98(iVar1 + 0x650,auVar5._0_8_);
  }
  return;
}


// ==== FUN_00198cb8 @ 00198cb8 ====

void FUN_00198cb8(undefined8 param_1)

{
  FUN_00198568();
  FUN_00193a60(0x3e4ccccd,param_1,0);
  return;
}


// ==== FUN_00198cf8 @ 00198cf8 ====

void FUN_00198cf8(undefined8 param_1)

{
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00198d18 @ 00198d18 ====

void FUN_00198d18(int *param_1)

{
  FUN_00198968(param_1,*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0xa0));
  return;
}


// ==== FUN_00198d40 @ 00198d40 ====

void FUN_00198d40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  char cVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  
  FUN_001984f0();
  lVar2 = FUN_00193a08(param_1);
  if (lVar2 != 0) {
    return;
  }
  piVar6 = (int *)param_1;
  iVar1 = *piVar6;
  uVar3 = FUN_00189048(iVar1 + 0x150);
  auVar5._8_8_ = in_v0_udw;
  auVar5._0_8_ = uVar3;
  auVar5 = _por(in_zero_qw,auVar5);
  FUN_0017e428(iVar1 + 0x650,auVar5._0_8_);
  if ((char)piVar6[8] == '\0') {
    cVar4 = FUN_00176f00(*piVar6 + 0x1fcc);
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = FUN_00198e50(param_1);
    *(char *)(piVar6 + 8) = cVar4;
    if (cVar4 != '\0') {
      FUN_00182410(*piVar6 + 0x810);
      return;
    }
  }
  else {
    lVar2 = FUN_001829e8(*piVar6 + 0x810);
    if ((lVar2 == 0) && (lVar2 = FUN_001829a8(*piVar6 + 0x810), lVar2 != 0)) {
      return;
    }
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_00198e28 @ 00198e28 ====

void FUN_00198e28(int param_1)

{
  FUN_00198568();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00198e50 @ 00198e50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00198e50(undefined8 param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_v0_udw;
  undefined1 auVar10 [16];
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_100 [16];
  
  piVar16 = (int *)param_1;
  auStack_100._0_8_ = FUN_00189048(*piVar16 + 0x150);
  auStack_100._8_4_ = (int)extraout_v0_udw;
  auStack_100._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
  uVar7 = FUN_00188f80(*piVar16 + 0x150);
  lVar8 = FUN_00178f18(uVar7);
  if (lVar8 != 0) {
    iVar6 = FUN_00188f80(*piVar16 + 0x150);
    if (*(char *)(*(int *)(iVar6 + 8) + 0x3aa) == '\0') {
      auVar18 = _lqc2(auStack_100);
      auVar10._8_4_ = DAT_00414de8;
      auVar10._0_8_ = _DAT_00414de0;
      auVar10._12_4_ = DAT_00414dec;
      auVar10 = _lqc2(auVar10);
      auVar10 = _vadd(auVar18,auVar10);
      auVar10 = _sqc2(auVar10);
      auStack_100._0_8_ = auVar10._0_8_;
    }
    else {
      auVar18 = _lqc2(auStack_100);
      auVar10 = _lqc2(_DAT_00414dd0);
      auVar10 = _vadd(auVar18,auVar10);
      auVar10 = _sqc2(auVar10);
      auStack_100._0_8_ = auVar10._0_8_;
    }
  }
  lVar8 = FUN_0017b6f8(DAT_0040f4d4 + 0x1290);
  uVar4 = DAT_00414dec;
  uVar3 = DAT_00414de8;
  uVar7 = _DAT_00414de0;
  piVar15 = (int *)lVar8;
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    bVar1 = false;
    auVar10 = _pextlw((long)piVar15[3],(long)piVar15[1]);
    auVar18 = _lqc2(_DAT_00414dc0);
    auVar10 = _pextlw((long)piVar15[2],auVar10._0_8_);
    auVar10 = _qmtc2(auVar10._0_4_);
    auVar10 = _vsub(auVar10,auVar18);
    auVar18 = _qmtc2((int)_DAT_00414de0);
    auVar10 = _vadd(auVar10,auVar18);
    auVar10 = _sqc2(auVar10);
    lVar8 = FUN_00198968(param_1);
    if (lVar8 != 0) {
      lVar8 = FUN_00175f50(DAT_0040f4d4 + 4000);
      bVar1 = lVar8 == 0;
    }
    auVar10 = _lqc2(auVar10);
    if (!bVar1) {
      uVar17 = 0;
      iVar6 = piVar15[4];
      do {
        uVar12 = 0;
        if (*(int *)(iVar6 + 0x30) != 0) {
          lVar8 = FUN_00391710(iVar6);
          if (lVar8 == 0) {
            uVar12 = 0;
            iVar13 = 0;
            uVar14 = 0;
            while (uVar5 = FUN_00391620(iVar6), uVar14 < uVar5) {
              lVar8 = FUN_00383d40(*(int *)(iVar6 + 0x34) + iVar13 * 8);
              if (lVar8 != -1) {
                uVar14 = uVar14 + 1;
                if (*(int *)(iVar13 * 4 + *(int *)(iVar6 + 0x38)) == *piVar15) {
                  uVar12 = uVar12 + 1;
                }
              }
              iVar13 = iVar13 + 1;
            }
          }
          else {
            iVar13 = *(int *)(*piVar15 * 4 + *(int *)(iVar6 + 0x24));
            uVar12 = 0;
            if (iVar13 != -1) {
              do {
                iVar13 = *(int *)(iVar13 * 4 + *(int *)(iVar6 + 0x44));
                uVar12 = uVar12 + 1;
              } while (iVar13 != -1);
            }
          }
        }
        if (uVar12 <= uVar17) {
          return 0;
        }
        iVar6 = piVar15[4];
        if (*(int *)(iVar6 + 0x24) == 0) {
          uVar14 = 0;
          iVar13 = 0;
          uVar12 = 0;
          while (uVar5 = FUN_00391620(iVar6), uVar12 < uVar5) {
            lVar8 = FUN_00383d40(*(int *)(iVar6 + 0x34) + iVar13 * 8);
            if (((lVar8 != -1) &&
                (uVar12 = uVar12 + 1, *(int *)(iVar13 * 4 + *(int *)(iVar6 + 0x38)) == *piVar15)) &&
               (bVar1 = uVar14 == uVar17, uVar14 = uVar14 + 1, bVar1)) {
              piVar11 = (int *)(*(int *)(iVar6 + 0x34) + iVar13 * 8);
              goto LAB_001991bc;
            }
            iVar13 = iVar13 + 1;
          }
          piVar11 = (int *)0x0;
        }
        else {
          uVar12 = 0;
          for (iVar13 = *(int *)(*piVar15 * 4 + *(int *)(iVar6 + 0x24)); iVar13 != -1;
              iVar13 = *(int *)(iVar13 * 4 + *(int *)(iVar6 + 0x44))) {
            if (uVar12 == uVar17) {
              piVar11 = (int *)(*(int *)(iVar6 + 0x34) + iVar13 * 8);
              goto LAB_001991bc;
            }
            uVar12 = uVar12 + 1;
          }
          piVar11 = (int *)0x0;
        }
LAB_001991bc:
        uVar4 = DAT_00414dec;
        uVar3 = DAT_00414de8;
        uVar7 = _DAT_00414de0;
        iVar6 = piVar11[1];
        if (piVar11 == (int *)(iVar6 + 0x5c)) {
          iVar6 = iVar6 + 0x78;
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x18) + *(int *)(*piVar11 * 4 + *(int *)(iVar6 + 0x3c)) * 0x14;
        }
        bVar1 = false;
        auVar18 = _lqc2(_DAT_00414dc0);
        auVar10 = _pextlw((long)*(int *)(iVar6 + 0xc),(long)*(int *)(iVar6 + 4));
        auVar10 = _pextlw((long)*(int *)(iVar6 + 8),auVar10._0_8_);
        auVar10 = _qmtc2(auVar10._0_4_);
        auVar10 = _vsub(auVar10,auVar18);
        auVar18 = _qmtc2((int)_DAT_00414de0);
        auVar10 = _vadd(auVar10,auVar18);
        auVar18 = _qmfc2(auVar10._0_4_);
        auVar10 = _sqc2(auVar10);
        lVar8 = FUN_00198968(param_1,auVar18._0_8_);
        auVar18 = _lqc2(auVar10);
        if (lVar8 != 0) {
          auVar18 = _qmfc2(auVar18._0_4_);
          lVar8 = FUN_00175f50(DAT_0040f4d4 + 4000,auVar18._0_8_,auStack_100._0_8_,0x21,
                               *(undefined4 *)(*piVar16 + 0x7c),1);
          auVar18 = _lqc2(auVar10);
          bVar1 = lVar8 == 0;
        }
        uVar17 = uVar17 + 1;
        if (bVar1) {
          auVar2._8_4_ = uVar3;
          auVar2._0_8_ = uVar7;
          auVar2._12_4_ = uVar4;
          auVar10 = _lqc2(auVar2);
          auVar10 = _vsub(auVar18,auVar10);
          auVar10 = _sqc2(auVar10);
          *(undefined1 (*) [16])(piVar16 + 4) = auVar10;
          return 1;
        }
        iVar6 = piVar15[4];
      } while( true );
    }
    uVar9 = 1;
    auVar18._8_4_ = uVar3;
    auVar18._0_8_ = uVar7;
    auVar18._12_4_ = uVar4;
    auVar18 = _lqc2(auVar18);
    auVar10 = _vsub(auVar10,auVar18);
    auVar10 = _sqc2(auVar10);
    *(undefined1 (*) [16])(piVar16 + 4) = auVar10;
  }
  return uVar9;
}


// ==== FUN_001992e0 @ 001992e0 ====

void FUN_001992e0(void)

{
  FUN_00198908();
  return;
}


// ==== FUN_00199300 @ 00199300 ====

void FUN_00199300(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  
  FUN_001984f0();
  lVar3 = FUN_00193a08(param_1);
  if (lVar3 == 0) {
    piVar6 = (int *)param_1;
    iVar1 = *piVar6;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(iVar1 + 0x650,auVar5._0_8_);
    iVar1 = *piVar6;
    uVar4 = FUN_00189048(iVar1 + 0x150);
    auVar2._8_8_ = in_v0_udw;
    auVar2._0_8_ = uVar4;
    auVar5 = _por(in_zero_qw,auVar2);
    FUN_0017db98(iVar1 + 0x650,auVar5._0_8_);
    lVar3 = FUN_001829e8(*piVar6 + 0x810);
    if ((lVar3 != 0) || (lVar3 = FUN_001829a8(*piVar6 + 0x810), lVar3 == 0)) {
      FUN_00193990(param_1,0);
    }
  }
  return;
}


// ==== FUN_001993a8 @ 001993a8 ====

void FUN_001993a8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00198568();
  iVar1 = *param_1;
  puVar2 = (undefined4 *)FUN_00189478(iVar1 + 0x150);
  FUN_00182410(iVar1 + 0x810,*puVar2,0,0);
  return;
}


// ==== FUN_001993f8 @ 001993f8 ====

bool FUN_001993f8(undefined8 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = FUN_00198908();
  bVar1 = false;
  if (lVar3 != 0) {
    lVar3 = FUN_00189208(*(int *)param_1 + 0x150);
    bVar1 = false;
    if (lVar3 != 0) {
      puVar2 = (undefined4 *)FUN_00189478(*(int *)param_1 + 0x150);
      lVar3 = FUN_00198968(param_1,*puVar2);
      bVar1 = lVar3 != 0;
    }
  }
  return bVar1;
}


// ==== FUN_00199468 @ 00199468 ====

void FUN_00199468(undefined8 param_1)

{
  long lVar1;
  
  FUN_001984f0();
  lVar1 = FUN_00193a08(param_1);
  if ((lVar1 == 0) &&
     (*(char *)(*(int *)(*(int *)(*(int *)param_1 + 0x694) + 0x7c) + 0x3aa) == '\0')) {
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_001994c0 @ 001994c0 ====

void FUN_001994c0(int *param_1)

{
  FUN_00198568();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  return;
}


// ==== FUN_00199508 @ 00199508 ====

void FUN_00199508(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_zero_qw [16];
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_v0_udw;
  undefined1 auVar7 [16];
  int *piVar8;
  undefined1 auVar9 [16];
  
  FUN_001984f0();
  lVar5 = FUN_00193a08(param_1);
  if (lVar5 == 0) {
    piVar8 = (int *)param_1;
    uVar6 = FUN_00189048(*piVar8 + 0x150);
    auVar7._8_8_ = in_v0_udw;
    auVar7._0_8_ = uVar6;
    auVar9 = _por(in_zero_qw,auVar7);
    auVar7 = _por(in_zero_qw,auVar9);
    lVar5 = FUN_00180b70(*piVar8 + 0xb30,auVar7._0_8_);
    if (lVar5 == 0) {
      FUN_00193990(param_1,0);
    }
    else {
      lVar5 = FUN_001829e8(*piVar8 + 0x810);
      if ((lVar5 == 0) && (lVar5 = FUN_001829a8(*piVar8 + 0x810), lVar5 != 0)) {
        cVar4 = FUN_00176f00(*piVar8 + 0x1fcc);
        if (cVar4 != '\0') {
          iVar1 = *piVar8;
          uVar6 = FUN_00189048(iVar1 + 0x150);
          auVar2._8_8_ = in_v0_udw;
          auVar2._0_8_ = uVar6;
          auVar7 = _por(in_zero_qw,auVar2);
          FUN_0017e428(iVar1 + 0x650,auVar7._0_8_);
          iVar1 = *piVar8;
          uVar6 = FUN_00189048(iVar1 + 0x150);
          auVar3._8_8_ = in_v0_udw;
          auVar3._0_8_ = uVar6;
          auVar7 = _por(in_zero_qw,auVar3);
          FUN_0017db98(iVar1 + 0x650,auVar7._0_8_);
          auVar7 = _por(in_zero_qw,auVar9);
          FUN_00182410(*piVar8 + 0x810,auVar7._0_8_,0,0);
        }
      }
      else {
        FUN_00193990(param_1,0);
      }
    }
  }
  return;
}


// ==== FUN_00199628 @ 00199628 ====

void FUN_00199628(int *param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar1 [16];
  
  FUN_00198568();
  auVar1._0_8_ = FUN_00189048(*param_1 + 0x150);
  auVar1._8_8_ = extraout_v0_udw;
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_00182410(*param_1 + 0x810,auVar1._0_8_,0,0);
  FUN_00181f48(0,0x40000000,*param_1 + 0xc80,0,0x1b);
  return;
}


// ==== FUN_00199690 @ 00199690 ====

bool FUN_00199690(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  long lVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  bool bVar4;
  
  bVar4 = false;
  uVar1 = FUN_00189048(*(int *)param_1 + 0x150);
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = uVar1;
  auVar3 = _por(in_zero_qw,auVar3);
  lVar2 = FUN_00198908(param_1);
  auVar3 = _por(in_zero_qw,auVar3);
  if (lVar2 != 0) {
    lVar2 = FUN_00180b70(*(int *)param_1 + 0xb30,auVar3._0_8_);
    bVar4 = lVar2 != 0;
  }
  return bVar4;
}


// ==== FUN_00199700 @ 00199700 ====

void FUN_00199700(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int iVar4;
  int *piVar5;
  
  FUN_001984f0();
  lVar1 = FUN_00193a08(param_1);
  if (lVar1 == 0) {
    piVar5 = (int *)param_1;
    lVar1 = FUN_001829e8(*piVar5 + 0x810);
    if (lVar1 == 0) {
      lVar1 = FUN_001829a8(*piVar5 + 0x810);
      if (lVar1 != 0) {
        return;
      }
      iVar4 = *piVar5;
    }
    else {
      iVar4 = *piVar5;
    }
    uVar2 = FUN_00189048(iVar4 + 0x150);
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = uVar2;
    auVar3 = _por(in_zero_qw,auVar3);
    FUN_0017e428(iVar4 + 0x650,auVar3._0_8_);
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_00199790 @ 00199790 ====

void FUN_00199790(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00198568();
  iVar1 = *param_1;
  puVar2 = (undefined4 *)FUN_00185fe8(iVar1 + 0x90);
  FUN_00182410(iVar1 + 0x810,*puVar2,0,0);
  return;
}


// ==== FUN_001997e0 @ 001997e0 ====

bool FUN_001997e0(undefined8 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = FUN_00198908();
  bVar1 = false;
  if (lVar3 != 0) {
    lVar3 = FUN_00185f18(*(int *)param_1 + 0x90);
    bVar1 = false;
    if (lVar3 != 0) {
      puVar2 = (undefined4 *)FUN_00185fe8(*(int *)param_1 + 0x90);
      lVar3 = FUN_00198968(param_1,*puVar2);
      bVar1 = lVar3 != 0;
    }
  }
  return bVar1;
}


// ==== FUN_00199850 @ 00199850 ====

void FUN_00199850(undefined8 param_1)

{
  FUN_00193980();
  *(undefined1 *)(*(int *)param_1 + 0x104) = 0;
  FUN_001998f8(param_1);
  return;
}


// ==== FUN_00199888 @ 00199888 ====

void FUN_00199888(undefined8 param_1,long param_2)

{
  if (param_2 == 0xc) {
    FUN_00193a28(param_1,0x37,0);
  }
  else {
    FUN_001998f8();
  }
  return;
}


// ==== FUN_001998c0 @ 001998c0 ====

bool FUN_001998c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 5) {
    FUN_001998f8();
  }
  return iVar1 == 5;
}


// ==== FUN_001998f8 @ 001998f8 ====

void FUN_001998f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00180bc0(*(int *)param_1 + 0xb30);
  if (lVar1 == 0) {
    FUN_00193a28(param_1,0xc,0);
  }
  else {
    FUN_00193a28(param_1,0x37,0);
  }
  return;
}


// ==== FUN_00199950 @ 00199950 ====

void FUN_00199950(int *param_1)

{
  FUN_00177f18(*param_1 + 0x1f00);
  FUN_0017b268(*param_1 + 0x1f60);
  return;
}


// ==== FUN_00199988 @ 00199988 ====

void FUN_00199988(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined1 uStack_58;
  undefined1 auStack_50 [16];
  
  FUN_00199f70();
  piVar4 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar4 + 0x150);
  if ((lVar2 != 0) && (lVar2 = FUN_0018d608(*piVar4 + 0xd10), lVar2 != 0)) {
    iVar3 = *(int *)(*piVar4 + 0x7c);
    uVar1 = FUN_00189048(*piVar4 + 0x150);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar8 = _qmtc2(uVar1);
    auVar7 = _vsub(auVar8,auVar7);
    auStack_50 = _sqc2(auVar7);
    fVar5 = (float)FUN_001891a8(*piVar4 + 0x150);
    auVar7 = _lqc2(auStack_50);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar7,auVar7);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar1 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar1);
    auVar7 = _vmul(auVar7,auVar10);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar9,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    if ((auVar7._0_4_ <= 0.8) ||
       ((lVar2 = FUN_00173610(piVar4 + 10), lVar2 == 0 ||
        (fVar6 = (float)FUN_001891a8(*piVar4 + 0x150), 3.3 < fVar6)))) {
      lVar2 = FUN_00173610(piVar4 + 0xd);
      if (lVar2 == 0) {
        iVar3 = *piVar4;
      }
      else {
        if ((char)piVar4[0xf] != '\0') {
          uStack_58 = 1;
          puStack_5c = &DAT_003de570;
          uStack_60 = 3;
          FUN_00193a28(param_1,0x3a,&uStack_60);
          return;
        }
        if (0.9 < auVar7._0_4_) {
          if (3.3 < fVar5) {
            if (fVar5 <= 5.5) {
              *(undefined1 *)(*(int *)(*piVar4 + 0x7c) + 0x3af) = 0;
              puStack_5c = &DAT_003de570;
              uStack_60 = 3;
              uStack_58 = 0;
              FUN_00193a28(param_1,0x3a,&uStack_60);
              return;
            }
            iVar3 = *piVar4;
          }
          else {
            iVar3 = *piVar4;
          }
        }
        else {
          iVar3 = *piVar4;
        }
      }
      lVar2 = FUN_001891c0(iVar3 + 0x150);
      if ((lVar2 != 0) && (lVar2 = FUN_0017e770(*piVar4 + 0x650), lVar2 == 0)) {
        fVar5 = (float)FUN_001891a8(*piVar4 + 0x150);
        fVar6 = (float)FUN_0018db58(*piVar4 + 0xc94);
        if ((fVar5 < fVar6) &&
           ((lVar2 = FUN_00173610(piVar4 + 9), lVar2 != 0 &&
            (lVar2 = FUN_00180f28(*piVar4 + 0x140), lVar2 != 0)))) {
          FUN_00193a28(param_1,0x38,0);
        }
      }
    }
    else {
      FUN_00193a28(param_1,0x39,0);
    }
  }
  return;
}


// ==== FUN_00199c40 @ 00199c40 ====

void FUN_00199c40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00193980();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x39) = 1;
  param_1[0xe] = 0;
  uVar5 = FUN_0016de70(0x3f800000,0x3fc00000,DAT_0040f4d4);
  FUN_00173640(uVar5,param_1 + 9);
  FUN_00173640(0,param_1 + 10);
  FUN_00173640(0,param_1 + 0xc);
  FUN_00173640(0,param_1 + 0xd);
  FUN_00173690(param_1 + 0xb);
  *(undefined1 *)(*(int *)(*param_1 + 0x7c) + 0x3af) = 1;
  FUN_00173690(param_1 + 8);
  iVar4 = *(int *)(*param_1 + 0x7c);
  iVar1 = *(int *)(iVar4 + 0x90);
  iVar2 = *(int *)(iVar4 + 0x94);
  iVar3 = *(int *)(iVar4 + 0x98);
  iVar4 = *(int *)(iVar4 + 0x9c);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[4] = iVar1;
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  param_1[7] = iVar4;
  return;
}


// ==== FUN_00199d20 @ 00199d20 ====

void FUN_00199d20(int *param_1)

{
  int iVar1;
  
  FUN_00193988();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x39) = 0;
  iVar1 = *param_1;
  if (param_1[0xe] != 0) {
    *(undefined1 *)(iVar1 + 0x1f50) = 0;
    FUN_00177c90(param_1[0xe],*param_1 + 0x1f00);
    param_1[0xe] = 0;
    iVar1 = *param_1;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x7c) + 0x3af) = 0;
  return;
}


// ==== FUN_00199d90 @ 00199d90 ====

void FUN_00199d90(int *param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0x39) {
    uVar4 = FUN_0016de70(0x40000000,0x40400000,DAT_0040f4d4);
    FUN_00173640(uVar4,param_1 + 10);
    FUN_00173640(0,param_1 + 9);
  }
  else if (param_2 < 0x3a) {
    if (param_2 == 0x38) {
      uVar4 = FUN_0016de70(0x3f800000,0x3fc00000,DAT_0040f4d4);
      FUN_00173640(uVar4,param_1 + 9);
      iVar3 = *param_1;
      if (param_3 == 0) {
        lVar2 = FUN_0017ea70(iVar3 + 0x650);
        if (lVar2 == 0) {
          return;
        }
        iVar3 = *param_1;
      }
      FUN_0017db18(iVar3 + 0x650);
    }
  }
  else if (param_2 == 0x3a) {
    uVar4 = FUN_0016de70(0x40000000,0x40800000,DAT_0040f4d4);
    FUN_00173640(uVar4,param_1 + 0xd);
    FUN_00173640(0,param_1 + 10);
    if (param_3 == 0) {
      FUN_00173640(0,param_1 + 9);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xf);
      *(byte *)(param_1 + 0xf) = bVar1 ^ 1;
      if ((bVar1 ^ 1) != 0) {
        FUN_00173640(0x3f800000,param_1 + 0xd);
      }
    }
  }
  return;
}


// ==== FUN_00199f08 @ 00199f08 ====

void FUN_00199f08(int *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_00177c90(param_1[0xe],*param_1 + 0x1f00);
    param_1[0xe] = 0;
  }
  return;
}


// ==== FUN_00199f48 @ 00199f48 ====

void FUN_00199f48(int *param_1)

{
  param_1[0xe] = 0;
  FUN_0017b358(*param_1 + 0x1f60);
  return;
}


// ==== FUN_00199f70 @ 00199f70 ====

undefined8 FUN_00199f70(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_v0_udw;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  uVar8 = 0;
  iVar6 = *(int *)(*param_1 + 0x7c);
  FUN_00177f60(*param_1 + 0x1f00,*(undefined8 *)(iVar6 + 0xa0),*(undefined4 *)(iVar6 + 0x90));
  if (param_1[0xe] == 0) {
    iVar1 = *(int *)(*param_1 + 0x1f84);
    if (iVar1 - 1U < 2) {
      if (iVar1 == 3) {
        lVar4 = FUN_0017b388();
        param_1[0xe] = (int)lVar4;
        if (lVar4 != 0) {
          *(undefined1 *)(*param_1 + 0x1f50) = 1;
          FUN_00177c78(param_1[0xe],*param_1 + 0x1f00);
        }
        iVar6 = *param_1;
      }
      else {
        iVar6 = *param_1;
      }
    }
    else {
      FUN_0017b290(*param_1 + 0x1f60,*(undefined8 *)(iVar6 + 0xa0));
      iVar6 = *param_1;
    }
  }
  else {
    iVar6 = *param_1;
  }
  lVar4 = FUN_00188f10(iVar6 + 0x150);
  bVar3 = false;
  if (lVar4 != 0) {
    uVar5 = FUN_0018a6f0(*param_1 + 0x150);
    uStack_d0 = (undefined4)uVar5;
    uStack_cc = (undefined4)((ulong)uVar5 >> 0x20);
    uStack_c8 = (undefined4)extraout_v0_udw;
    uStack_c4 = (undefined4)((ulong)extraout_v0_udw >> 0x20);
    auVar12 = _qmtc2(0);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar10._8_4_ = uStack_c8;
    auVar10._0_8_ = uVar5;
    auVar10._12_4_ = uStack_c4;
    auVar13 = _lqc2(auVar10);
    auStack_80 = _sqc2(auVar11);
    auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
    auVar10 = _vsub(auVar13,auVar10);
    _sqc2(auVar10);
    auVar12 = _vaddbc(in_vf0,auVar12);
    auVar10 = _vmul(auVar12,auVar12);
    auStack_c0 = _sqc2(auVar12);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    piVar7 = param_1 + 0xb;
    if (2.3283064e-10 <= auVar10._0_4_) {
      lVar4 = FUN_001891c0(*param_1 + 0x150);
      if (lVar4 == 0) {
        lVar4 = FUN_001735e0(piVar7);
        if (lVar4 == 0) {
          uVar14 = FUN_0016de70(0x40000000,0x40400000,DAT_0040f4d4);
          FUN_00173640(uVar14,piVar7);
        }
      }
      else {
        auVar10 = _vaddbc(in_vf0,in_vf0);
        auStack_90 = _sqc2(auVar10);
        FUN_00173690(piVar7);
        auVar10 = _lqc2(auStack_c0);
        auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
        auVar10 = _vmul(auVar10,auVar10);
        auVar12 = _lqc2(auStack_80);
        auVar11 = _vmul(auVar13,auVar13);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar12,auVar10);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar12,auVar11);
        auVar12 = _lqc2(auStack_c0);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar11);
        auVar11 = _vaddbc(in_vf0,in_vf0);
        uVar14 = _vwaitq();
        auVar13 = _vmulq(auVar13,uVar14);
        _vmulq(auVar11,uVar14);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar10);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar14 = _vwaitq();
        auVar11 = _vmulq(auVar12,uVar14);
        _vmulq(auVar10,uVar14);
        auStack_a0 = _sqc2(auVar13);
        auVar10 = _vmul(auVar11,auVar13);
        auVar12 = _lqc2(auStack_90);
        auVar13 = _vsubbc(in_vf0,in_vf0);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar12,auVar10);
        auVar10 = _vmax(auVar10,auVar13);
        auStack_70 = _sqc2(auVar11);
        auVar10 = _vminibc(auVar10,in_vf0);
        uStack_b0 = DAT_004432c0;
        uStack_ac = DAT_004432c4;
        uStack_a8 = DAT_004432c8;
        uStack_a4 = DAT_004432cc;
        auVar10 = _qmfc2(auVar10._0_4_);
        fVar9 = (float)FUN_0029e0d8(auVar10._0_4_);
        auVar11 = _lqc2(auStack_70);
        auVar10 = _lqc2(auStack_a0);
        _vopmula(auVar11,auVar10);
        auVar12 = _vopmsub(auVar10,auVar11);
        auVar11._4_4_ = uStack_ac;
        auVar11._0_4_ = uStack_b0;
        auVar11._8_4_ = uStack_a8;
        auVar11._12_4_ = uStack_a4;
        auVar10 = _lqc2(auVar11);
        auVar10 = _vmul(auVar12,auVar10);
        auVar11 = _lqc2(auStack_90);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar11,auVar10);
        auVar10 = _qmfc2(auVar10._0_4_);
        fVar9 = fVar9 * 57.29578;
        if (0.0 < auVar10._0_4_) {
          fVar9 = -fVar9;
        }
        piVar7 = param_1 + 8;
        if (30.0 < ABS(fVar9)) {
          lVar4 = FUN_001735e0(piVar7);
          if (lVar4 == 0) {
            uVar14 = FUN_0016de70(0x3f800000,0x40000000,DAT_0040f4d4);
            FUN_00173640(uVar14,piVar7);
          }
          else {
            lVar4 = FUN_00173610(piVar7);
            if (lVar4 != 0) {
              bVar3 = true;
              auVar2 = *(undefined1 (*) [12])(*(int *)(*param_1 + 0x7c) + 0x90);
              iVar6 = *(int *)(*(int *)(*param_1 + 0x7c) + 0x9c);
              param_1[4] = auVar2._0_4_;
              param_1[5] = auVar2._4_4_;
              param_1[6] = auVar2._8_4_;
              param_1[7] = iVar6;
            }
          }
        }
        else {
          bVar3 = true;
        }
      }
    }
    piVar7 = param_1 + 0xb;
    lVar4 = FUN_001735e0(piVar7);
    if (((lVar4 != 0) && (lVar4 = FUN_00173610(piVar7), lVar4 != 0)) &&
       (lVar4 = FUN_00189208(*param_1 + 0x150), lVar4 != 0)) {
      uStack_ec = 0;
      uStack_f0 = 0x15;
      FUN_001a6330(*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x330),&uStack_f0);
      uVar14 = FUN_0016de70(0x40c00000,0x41200000,DAT_0040f4d4);
      FUN_00173640(uVar14,piVar7);
    }
    if (bVar3) {
      uVar8 = 1;
      FUN_0017e428(*param_1 + 0x650,CONCAT44(uStack_cc,uStack_d0));
      FUN_00173690(param_1 + 8);
    }
  }
  return uVar8;
}


// ==== FUN_0019a350 @ 0019a350 ====

undefined4 FUN_0019a350(int *param_1,int *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*param_2 == 0x13) {
    lVar2 = FUN_00173610(param_1 + 0xc);
    uVar1 = 0;
    if (lVar2 != 0) {
      lVar2 = FUN_00188f10(*param_1 + 0x150);
      if (lVar2 == 0) {
        FUN_0017e428(*param_1 + 0x650,*(undefined4 *)(param_2[2] + 0xa0));
        FUN_00173640(0x40400000,param_1 + 0xc);
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0019a3e8 @ 0019a3e8 ====

void FUN_0019a3e8(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar2 + 0x150);
  if ((((lVar1 == 0) || (fVar3 = (float)FUN_00189310(*piVar2 + 0x150), 3.0 < fVar3)) ||
      (lVar1 = FUN_0017e860(*piVar2 + 0x650), lVar1 == 0)) ||
     (lVar1 = FUN_00188350(*piVar2 + 0x290), lVar1 != 0)) {
LAB_0019a47c:
    FUN_00193990(param_1,0);
  }
  else {
    if (*(char *)(*piVar2 + 0x291) == '\0') {
      lVar1 = FUN_0018d608(*piVar2 + 0xd10);
      if (lVar1 == 0) goto LAB_0019a47c;
      lVar1 = FUN_00199f70(piVar2[2]);
      if (lVar1 != 0) {
        fVar3 = (float)FUN_001891a8(*piVar2 + 0x150);
        if (3.3 <= fVar3) {
          return;
        }
        FUN_00193990(param_1,1);
        return;
      }
    }
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_0019a4f0 @ 0019a4f0 ====

void FUN_0019a4f0(int *param_1)

{
  int iVar1;
  
  FUN_00193980();
  FUN_00187fe0(*param_1 + 0x290,0);
  iVar1 = FUN_00181a90(*param_1 + 0xec0,0x37);
  param_1[2] = iVar1;
  return;
}


// ==== FUN_0019a538 @ 0019a538 ====

void FUN_0019a538(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  param_1[2] = 0;
  return;
}


// ==== FUN_0019a578 @ 0019a578 ====

void FUN_0019a578(undefined8 param_1)

{
  long lVar1;
  
  if (*(char *)(*(int *)(*(int *)param_1 + 0x694) + 0x3b) == '\x01') {
    lVar1 = FUN_00199f70(((int *)param_1)[2]);
    if (lVar1 == 0) {
      FUN_00193990(param_1,0);
    }
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_0019a5e0 @ 0019a5e0 ====

void FUN_0019a5e0(int *param_1)

{
  int iVar1;
  
  FUN_00193980();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x3b) = 1;
  iVar1 = FUN_00181a90(*param_1 + 0xec0,0x37);
  param_1[2] = iVar1;
  FUN_00181f48(0,0x3f800000,*param_1 + 0xc80,0,0x16);
  return;
}


// ==== FUN_0019a648 @ 0019a648 ====

void FUN_0019a648(int param_1)

{
  FUN_00193988();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ==== FUN_0019a670 @ 0019a670 ====

void FUN_0019a670(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 extraout_v0_udw;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  piVar3 = (int *)param_1;
  iVar2 = *piVar3;
  if ((char)piVar3[0xb] == '\0') {
    fVar4 = (float)FUN_001891a8(iVar2 + 0x150);
    iVar2 = *piVar3;
    if (fVar4 < 3.3) {
      FUN_001825b0(iVar2 + 0x810);
      FUN_00193990(param_1,1);
      iVar2 = *piVar3;
    }
  }
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(*(undefined1 (*) [16])(piVar3 + 4));
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x7c) + 0xa0));
  auVar5 = _vsub(auVar5,auVar6);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (auVar5._0_4_ < (float)piVar3[8]) {
    FUN_001825b0(iVar2 + 0x810);
    FUN_00193990(param_1,1);
  }
  lVar1 = FUN_00173610(piVar3 + 10);
  if (lVar1 != 0) {
    FUN_001825b0(*piVar3 + 0x810);
    FUN_00193990(param_1,1);
  }
  lVar1 = FUN_00199f70(piVar3[9]);
  if (lVar1 == 0) {
    FUN_00193990(param_1,1);
  }
  else {
    iVar2 = *piVar3;
    auVar5._0_8_ = FUN_00189048(iVar2 + 0x150);
    auVar5._8_8_ = extraout_v0_udw;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(iVar2 + 0x650,auVar5._0_8_);
  }
  return;
}


// ==== FUN_0019a798 @ 0019a798 ====

void FUN_0019a798(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int in_v0_udw;
  int in_register_0000002c;
  int *piVar5;
  
  FUN_00193980();
  piVar5 = (int *)param_1;
  *(undefined1 *)(piVar5 + 0xb) = 0;
  if (param_2 == 0) {
LAB_0019a7d4:
    iVar2 = *piVar5;
  }
  else {
    if (*(int *)param_2 == 3) {
      *(char *)(piVar5 + 0xb) = (char)((int *)param_2)[2];
      goto LAB_0019a7d4;
    }
    iVar2 = *piVar5;
  }
  iVar2 = FUN_00181a90(iVar2 + 0xec0,0x37);
  piVar5[9] = iVar2;
  if ((char)piVar5[0xb] == '\0') {
    lVar4 = FUN_00188f10(*piVar5 + 0x150);
    if (lVar4 == 0) goto LAB_0019a8bc;
    uVar3 = FUN_00189048(*piVar5 + 0x150);
    piVar5[4] = (int)uVar3;
    piVar5[5] = (int)((ulong)uVar3 >> 0x20);
    piVar5[6] = in_v0_udw;
    piVar5[7] = in_register_0000002c;
    piVar5[8] = 0x412e3d70;
    FUN_001825b0(*piVar5 + 0x810);
    iVar2 = *piVar5;
  }
  else {
    uVar3 = FUN_00180a00(*piVar5 + 0xb30);
    piVar5[4] = (int)uVar3;
    piVar5[5] = (int)((ulong)uVar3 >> 0x20);
    piVar5[6] = in_v0_udw;
    piVar5[7] = in_register_0000002c;
    piVar5[8] = 0x3f800000;
    FUN_001825b0(*piVar5 + 0x810);
    iVar2 = *piVar5;
  }
  cVar1 = FUN_00182ba0(iVar2 + 0x810,*(undefined8 *)(piVar5 + 4));
  if (cVar1 == '\x01') {
    FUN_00173640(0x41200000,piVar5 + 10);
    if ((char)piVar5[0xb] == '\0') {
      cVar1 = FUN_001823b0(*piVar5 + 0x810,*(undefined8 *)(piVar5 + 4),1);
      if (cVar1 == '\x01') {
        return;
      }
      FUN_00193990(param_1,0);
      return;
    }
    cVar1 = FUN_00182320(*piVar5 + 0x810,*(undefined8 *)(piVar5 + 4));
    if (cVar1 == '\x01') {
      return;
    }
  }
LAB_0019a8bc:
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_0019a908 @ 0019a908 ====

void FUN_0019a908(int param_1)

{
  FUN_00193988();
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// ==== FUN_0019a930 @ 0019a930 ====

void FUN_0019a930(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  FUN_00193980();
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  puVar2 = (undefined4 *)FUN_00193b98(param_1);
  *puVar2 = 2;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 100) = 0x40000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  piVar3 = (int *)param_1;
  *(undefined1 *)(*piVar3 + 0x104) = 1;
  *(undefined1 *)(*piVar3 + 0x110) = 1;
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x35) = 1;
  *(undefined1 *)(piVar3 + 2) = 0;
  FUN_0019acb8(param_1);
  return;
}


// ==== FUN_0019a9c0 @ 0019a9c0 ====

void FUN_0019a9c0(int *param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_00193988();
  lVar1 = FUN_00181028(*param_1 + 0x140);
  if (lVar1 == 0) {
    iVar2 = *param_1;
  }
  else {
    FUN_00180fe0(*param_1 + 0x140);
    iVar2 = *param_1;
  }
  if (*(char *)(iVar2 + 0x290) != '\0') {
    FUN_001880d8(iVar2 + 0x290);
  }
  return;
}


// ==== FUN_0019aa20 @ 0019aa20 ====

void FUN_0019aa20(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  switch(param_2) {
  default:
    return;
  case 10:
    uVar2 = 3;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    lVar1 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar3 + 0x7c) + 0x2a4));
    if ((lVar1 < 3) || (param_3 != 0)) {
      FUN_0019ac18(param_1);
      return;
    }
    lVar1 = FUN_00188f10(*piVar3 + 0x150);
    if (lVar1 == 0) {
      uVar2 = 0x16;
    }
    else {
      uVar2 = 0x3b;
    }
    break;
  case 0x1a:
    *(undefined1 *)(piVar3 + 2) = 0;
  case 7:
  case 8:
  case 0xd:
  case 0x16:
    FUN_0019acb8(param_1);
    return;
  case 0x3b:
    if (param_3 == 0) {
      uVar2 = 0x16;
      break;
    }
  case 3:
    FUN_0019acb8(param_1);
    return;
  }
  FUN_00193a28(param_1,uVar2,0);
  return;
}


// ==== FUN_0019ab10 @ 0019ab10 ====

undefined8 FUN_0019ab10(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  switch(*param_2) {
  case 1:
  case 10:
    FUN_00193a28(param_1,0x16,0);
    return 1;
  case 4:
  case 0x13:
    piVar3 = (int *)param_1;
    lVar1 = FUN_0018d608(*piVar3 + 0xd10);
    if (lVar1 == 0) {
      return 0;
    }
    if ((char)piVar3[2] != '\0') {
      return 0;
    }
    lVar1 = FUN_00185f00(*piVar3 + 0x90);
    if (lVar1 != 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      FUN_00193a28(param_1,0x1a,0);
      return 0;
    }
    break;
  case 0x14:
    auVar2 = _pextlw((long)(int)param_2[4],(long)(int)param_2[2]);
    uStack_60 = 2;
    auVar2 = _pextlw((long)(int)param_2[3],auVar2._0_8_);
    puStack_5c = &DAT_003df4b8;
    uStack_50 = auVar2._0_4_;
    uStack_4c = auVar2._4_4_;
    uStack_48 = auVar2._8_4_;
    uStack_44 = auVar2._12_4_;
    uStack_40 = 0;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_00193a28(param_1,8,&uStack_60);
  }
  return 0;
}


// ==== FUN_0019ac18 @ 0019ac18 ====

void FUN_0019ac18(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (*(char *)(*piVar3 + 0x290) != '\0') {
    FUN_001880d8(*piVar3 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar3 + 0x140);
  iVar2 = *piVar3;
  if (lVar1 != 0) {
    FUN_00180fe0(iVar2 + 0x140);
    iVar2 = *piVar3;
  }
  if (((*(byte *)(iVar2 + 0xd60) >> 4 & 1) == 0) || (lVar1 = FUN_00185f00(iVar2 + 0x90), lVar1 == 0)
     ) {
    FUN_00193a28(param_1,3,0);
  }
  else {
    FUN_00193a28(param_1,10,0);
  }
  return;
}


// ==== FUN_0019acb8 @ 0019acb8 ====

void FUN_0019acb8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if (lVar1 == 0) {
    FUN_00193a28(param_1,0x16,0);
    return;
  }
  lVar1 = FUN_0018ab08(*piVar4 + 0x150);
  iVar2 = *piVar4;
  if (lVar1 == 0) {
    if ((*(char *)(iVar2 + 0xd27) == '\0') || (lVar1 = FUN_00189208(iVar2 + 0x150), lVar1 != 0)) {
      uVar3 = 0x3b;
    }
    else {
      uVar3 = 0x11;
    }
  }
  else {
    lVar1 = FUN_00185f00(iVar2 + 0x90);
    uVar3 = 2;
    if (lVar1 == 0) {
      iVar2 = *piVar4;
    }
    else {
      iVar2 = *piVar4;
      uVar3 = 0x11;
      if (*(int *)(*(int *)(iVar2 + 0x100) + 0x24) == 2) goto LAB_0019add8;
    }
    lVar1 = FUN_00185f18(iVar2 + 0x90,uVar3);
    if (lVar1 == 0) {
      iVar2 = *piVar4;
    }
    else {
      if ((*(byte *)(*piVar4 + 0xd60) >> 4 & 1) != 0) {
        uVar3 = 0x14;
        goto LAB_0019add8;
      }
      iVar2 = *piVar4;
    }
    if ((*(byte *)(iVar2 + 0xd60) >> 4 & 1) != 0) {
      uVar3 = FUN_00188f80(iVar2 + 0x150);
      lVar1 = FUN_00178f18(uVar3);
      if (lVar1 != 0) {
        uVar3 = 0x13;
        if ((*(char *)(*piVar4 + 0x105) != '\0') &&
           (uVar3 = 0x11, *(char *)(*piVar4 + 0x130) == '\0')) {
          uVar3 = 0x13;
        }
        goto LAB_0019add8;
      }
    }
    uVar3 = 0x11;
  }
LAB_0019add8:
  FUN_00193a28(param_1,uVar3,0);
  return;
}


// ==== FUN_0019ae08 @ 0019ae08 ====

void FUN_0019ae08(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00193980();
  uVar3 = 0x40000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x44) = 0x3f000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x3c) = 0x3f000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x68) = 0x3e800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 100) = uVar3;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x60) = 0x3dcccccd;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0x41200000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 8) = 0xc1200000;
  piVar2 = (int *)param_1;
  *(undefined1 *)(*piVar2 + 0x104) = 1;
  *(undefined1 *)(*piVar2 + 0x110) = 1;
  *(undefined1 *)(*(int *)(*piVar2 + 0x694) + 0x35) = 1;
  FUN_0019b0c0(param_1);
  return;
}


// ==== FUN_0019af20 @ 0019af20 ====

void FUN_0019af20(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_0019af40 @ 0019af40 ====

void FUN_0019af40(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != 0x16) {
    if (0x16 < param_2) {
      if (param_2 == 0x23) {
        if (param_3 == 0) {
          FUN_00193a60(0x41200000,param_1,0);
          goto LAB_0019afa8;
        }
      }
      else {
        if (param_2 != 0x24) {
          return;
        }
        if (param_3 == 0) {
          FUN_0019b0c0(param_1);
          return;
        }
      }
      FUN_00193a28(param_1,0x16,0);
      return;
    }
    if (param_2 != 8) {
      return;
    }
  }
LAB_0019afa8:
  FUN_0019b0c0(param_1);
  return;
}


// ==== FUN_0019aff0 @ 0019aff0 ====

undefined8 FUN_0019aff0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = *param_2;
  if (iVar1 != 10) {
    if (10 < iVar1) {
      if (iVar1 != 0x14) {
        return 0;
      }
      auVar2 = _pextlw((long)param_2[4],(long)param_2[2]);
      uStack_60 = 2;
      auVar2 = _pextlw((long)param_2[3],auVar2._0_8_);
      puStack_5c = &DAT_003df4b8;
      uStack_50 = auVar2._0_4_;
      uStack_4c = auVar2._4_4_;
      uStack_48 = auVar2._8_4_;
      uStack_44 = auVar2._12_4_;
      uStack_40 = 0;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      FUN_00193a28(param_1,8,&uStack_60);
      return 0;
    }
    if (iVar1 != 1) {
      return 0;
    }
  }
  FUN_00193ac8(param_1);
  FUN_00193a28(param_1,0x16,0);
  return 1;
}


// ==== FUN_0019b0c0 @ 0019b0c0 ====

void FUN_0019b0c0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00188f10(*(int *)param_1 + 0x150);
  if (lVar1 == 0) {
    FUN_00193a28(param_1,0x16,0);
  }
  else {
    lVar1 = FUN_00193af8(param_1);
    if (lVar1 == 0) {
      uVar2 = 0x24;
    }
    else {
      uVar2 = 0x23;
    }
    FUN_00193a28(param_1,uVar2,0);
  }
  return;
}


// ==== FUN_0019b130 @ 0019b130 ====

void FUN_0019b130(void)

{
  FUN_0019b0c0();
  return;
}


// ==== FUN_0019b150 @ 0019b150 ====

void FUN_0019b150(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00193980();
  puVar1 = (undefined4 *)FUN_00193b98(param_1);
  *puVar1 = 2;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x7c) = 1;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x80) = 0x41700000;
  *(undefined1 *)(*(int *)param_1 + 0x104) = 1;
  *(undefined1 *)(*(int *)param_1 + 0x110) = 1;
  FUN_00193a60(0x3f800000,param_1,1);
  FUN_00193a28(param_1,0x25,0);
  return;
}


// ==== FUN_0019b1e8 @ 0019b1e8 ====

void FUN_0019b1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00193990(param_1,param_3);
  return;
}


// ==== FUN_0019b208 @ 0019b208 ====

void FUN_0019b208(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00188f10(*(int *)param_1 + 0x150);
  if ((lVar1 == 0) || (fVar2 = (float)FUN_001891a8(*(int *)param_1 + 0x150), fVar2 < 6.0)) {
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_0019b270 @ 0019b270 ====

undefined8 FUN_0019b270(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  
  if (*param_2 == 4) {
    iVar1 = *(int *)param_1;
    bVar3 = false;
    if (*(char *)(iVar1 + 0x105) != '\0') {
      if (*(char *)(iVar1 + 0x130) == '\0') {
        if (*(char *)(iVar1 + 0x131) != '\0') {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
    }
    if (((!bVar3) && (lVar2 = FUN_00188f10(iVar1 + 0x150), lVar2 != 0)) &&
       (fVar4 = (float)FUN_001891a8(*(int *)param_1 + 0x150), fVar4 < 10.0)) {
      FUN_00193990(param_1,0);
    }
  }
  return 0;
}


// ==== FUN_0019b320 @ 0019b320 ====

void FUN_0019b320(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00193980();
  puVar1 = (undefined4 *)FUN_00193b98(param_1);
  *puVar1 = 3;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x7c) = 3;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x80) = 0x41a00000;
  *(undefined1 *)(*(int *)param_1 + 0x104) = 1;
  FUN_00193a28(param_1,0x25,0);
  return;
}


// ==== FUN_0019b398 @ 0019b398 ====

void FUN_0019b398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00193990(param_1,param_3);
  return;
}


// ==== FUN_0019b3b8 @ 0019b3b8 ====

void FUN_0019b3b8(undefined8 param_1)

{
  FUN_00193980();
  *(undefined1 *)(*(int *)(*(int *)param_1 + 0x694) + 0x35) = 1;
  FUN_0019b6d8(param_1);
  return;
}


// ==== FUN_0019b3f8 @ 0019b3f8 ====

void FUN_0019b3f8(int *param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_00193988();
  lVar1 = FUN_00181028(*param_1 + 0x140);
  if (lVar1 == 0) {
    iVar2 = *param_1;
  }
  else {
    FUN_00180fe0(*param_1 + 0x140);
    iVar2 = *param_1;
  }
  if (*(char *)(iVar2 + 0x290) != '\0') {
    FUN_001880d8(iVar2 + 0x290);
  }
  return;
}


// ==== FUN_0019b458 @ 0019b458 ====

void FUN_0019b458(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  switch(param_2) {
  default:
    return;
  case 7:
  case 8:
  case 0xd:
  case 0x16:
  case 0x1a:
    FUN_0019b6d8(param_1);
    return;
  case 10:
    uVar2 = 3;
    break;
  case 0xf:
    lVar1 = FUN_00188f10(*piVar3 + 0x150);
    if (lVar1 == 0) {
LAB_0019b50c:
      FUN_00193990(param_1,1);
      return;
    }
    lVar1 = FUN_00185f18(*piVar3 + 0x90);
    if (lVar1 == 0) {
      uVar2 = 0x3b;
    }
    else {
      uVar2 = 0x14;
    }
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    lVar1 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar3 + 0x7c) + 0x2a4));
    if ((lVar1 < 3) || (param_3 != 0)) {
      FUN_0019b638(param_1);
      return;
    }
    lVar1 = FUN_00188f10(*piVar3 + 0x150);
    if (lVar1 == 0) goto LAB_0019b50c;
    uVar2 = 0x3b;
    break;
  case 0x3b:
    if (param_3 == 0) goto LAB_0019b50c;
  case 3:
    FUN_0019b6d8(param_1);
    return;
  }
  FUN_00193a28(param_1,uVar2,0);
  return;
}


// ==== FUN_0019b580 @ 0019b580 ====

undefined8 FUN_0019b580(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  piVar3 = (int *)param_1;
  if (iVar1 != 4) {
    if (iVar1 < 5) {
      if (iVar1 != 3) {
        return 0;
      }
      lVar2 = FUN_00188f10(*piVar3 + 0x150);
      if (lVar2 != 0) {
        return 0;
      }
      FUN_00193990(param_1,1);
      return 0;
    }
    if (iVar1 != 0x13) {
      return 0;
    }
  }
  lVar2 = FUN_0018d608(*piVar3 + 0xd10);
  if ((lVar2 != 0) && (lVar2 = FUN_00185f00(*piVar3 + 0x90), lVar2 != 0)) {
    FUN_00193a28(param_1,0x1a,0);
  }
  return 0;
}


// ==== FUN_0019b638 @ 0019b638 ====

void FUN_0019b638(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if (*(char *)(*piVar3 + 0x290) != '\0') {
    FUN_001880d8(*piVar3 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar3 + 0x140);
  iVar2 = *piVar3;
  if (lVar1 != 0) {
    FUN_00180fe0(iVar2 + 0x140);
    iVar2 = *piVar3;
  }
  if (((*(byte *)(iVar2 + 0xd60) >> 4 & 1) == 0) || (lVar1 = FUN_00185f00(iVar2 + 0x90), lVar1 == 0)
     ) {
    FUN_00193a28(param_1,3,0);
  }
  else {
    FUN_00193a28(param_1,10,0);
  }
  return;
}


// ==== FUN_0019b6d8 @ 0019b6d8 ====

void FUN_0019b6d8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if (lVar1 == 0) {
    FUN_00193990(param_1,1);
    return;
  }
  lVar1 = FUN_0018ab08(*piVar4 + 0x150);
  iVar2 = *piVar4;
  if (lVar1 == 0) {
    if (*(char *)(iVar2 + 0xd27) == '\0') {
      iVar2 = *piVar4;
    }
    else {
      lVar1 = FUN_00189208(iVar2 + 0x150);
      if (lVar1 == 0) {
        uVar3 = 0x11;
        goto LAB_0019b83c;
      }
      iVar2 = *piVar4;
    }
    lVar1 = FUN_00185f18(iVar2 + 0x90);
    if (lVar1 == 0) {
      uVar3 = 0x3b;
    }
    else {
      uVar3 = 0x3b;
      if (((*(byte *)(*piVar4 + 0xd60) >> 4 & 1) != 0) && (*(char *)(*piVar4 + 0x111) == '\0')) {
        uVar3 = 0xf;
      }
    }
  }
  else {
    lVar1 = FUN_00185f00(iVar2 + 0x90);
    uVar3 = 2;
    if (lVar1 == 0) {
      iVar2 = *piVar4;
    }
    else {
      iVar2 = *piVar4;
      uVar3 = 0x11;
      if (*(int *)(*(int *)(iVar2 + 0x100) + 0x24) == 2) goto LAB_0019b83c;
    }
    lVar1 = FUN_00185f18(iVar2 + 0x90,uVar3);
    if (lVar1 == 0) {
      iVar2 = *piVar4;
    }
    else {
      if ((*(byte *)(*piVar4 + 0xd60) >> 4 & 1) != 0) {
        uVar3 = 0xf;
        goto LAB_0019b83c;
      }
      iVar2 = *piVar4;
    }
    if ((*(byte *)(iVar2 + 0xd60) >> 4 & 1) != 0) {
      uVar3 = FUN_00188f80(iVar2 + 0x150);
      lVar1 = FUN_00178f18(uVar3);
      if (lVar1 != 0) {
        uVar3 = 0x13;
        if ((*(char *)(*piVar4 + 0x105) != '\0') &&
           (uVar3 = 0x11, *(char *)(*piVar4 + 0x130) == '\0')) {
          uVar3 = 0x13;
        }
        goto LAB_0019b83c;
      }
    }
    uVar3 = 0x11;
  }
LAB_0019b83c:
  FUN_00193a28(param_1,uVar3,0);
  return;
}


// ==== FUN_0019b868 @ 0019b868 ====

void FUN_0019b868(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  FUN_00193980();
  iVar1 = FUN_00193b98(param_1);
  *(float *)(iVar1 + 0x30) = *(float *)(iVar1 + 0x30) + *(float *)(iVar1 + 0x30);
  iVar1 = FUN_00193b98(param_1);
  *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * 1.8;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x28) = 0xc1c80000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0x3f000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x60) = 0x3f800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x68) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 4) = 0x3f800000;
  puVar2 = (undefined4 *)FUN_00193b98(param_1);
  *puVar2 = 2;
  iVar1 = FUN_00193b98(param_1);
  *(undefined1 *)(iVar1 + 0x78) = 1;
  piVar3 = (int *)param_1;
  *(undefined1 *)(*piVar3 + 0x104) = 0;
  *(undefined1 *)(*piVar3 + 0x110) = 1;
  piVar3[2] = 0;
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x35) = 1;
  FUN_00193a28(param_1,0x16,0);
  return;
}


// ==== FUN_0019b998 @ 0019b998 ====

void FUN_0019b998(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  switch(param_2) {
  case 3:
    lVar1 = FUN_00188f10(*piVar3 + 0x150);
    if (lVar1 != 0) {
      param_3 = FUN_00180f28(*piVar3 + 0x140);
      goto joined_r0x0019b9d8;
    }
    break;
  default:
    FUN_00193a28(param_1,0x16,0);
    return;
  case 0xd:
  case 0xe:
  case 0x16:
  case 0x28:
  case 0x29:
    goto LAB_0019ba8c;
  case 0x10:
  case 0x27:
    FUN_0019bc90(param_1,param_3);
    return;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    lVar1 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar3 + 0x7c) + 0x2a4));
    if ((lVar1 < 3) || (param_3 != 0)) {
      FUN_0019bc28(param_1);
      return;
    }
    lVar1 = FUN_00188f10(*piVar3 + 0x150);
    if (lVar1 != 0) {
      uVar2 = 0x3b;
      goto LAB_0019ba64;
    }
    break;
  case 0x3b:
joined_r0x0019b9d8:
    if (param_3 != 0) {
LAB_0019ba8c:
      FUN_0019bc90(param_1,1);
      return;
    }
  }
  uVar2 = 0x16;
LAB_0019ba64:
  FUN_00193a28(param_1,uVar2,0);
  return;
}


// ==== FUN_0019bac0 @ 0019bac0 ====

void FUN_0019bac0(int *param_1)

{
  FUN_00193988();
  FUN_001880d8(*param_1 + 0x290);
  return;
}


// ==== FUN_0019baf0 @ 0019baf0 ====

undefined8 FUN_0019baf0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  undefined4 uStack_70;
  undefined *puStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  switch(*param_2) {
  case 1:
  case 10:
    FUN_00193a28(param_1,0x16,0);
    return 1;
  case 2:
    iVar1 = FUN_00193b98(param_1);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    break;
  case 4:
    piVar4 = (int *)param_1;
    if (*(float *)(DAT_0040f4d0 + 0x20) - (float)piVar4[2] <= 10.0) {
      return 0;
    }
    lVar2 = FUN_00188f10(*piVar4 + 0x150);
    if (lVar2 != 0) {
      FUN_00193a28(param_1,0x29,0);
      piVar4[2] = *(int *)(DAT_0040f4d0 + 0x20);
      return 1;
    }
    break;
  case 0x14:
    auVar3 = _pextlw((long)(int)param_2[4],(long)(int)param_2[2]);
    uStack_70 = 2;
    auVar3 = _pextlw((long)(int)param_2[3],auVar3._0_8_);
    puStack_6c = &DAT_003df4b8;
    uStack_60 = auVar3._0_4_;
    uStack_5c = auVar3._4_4_;
    uStack_58 = auVar3._8_4_;
    uStack_54 = auVar3._12_4_;
    uStack_50 = 0;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    FUN_00193a28(param_1,8,&uStack_70);
    return 0;
  }
  return 0;
}


// ==== FUN_0019bc28 @ 0019bc28 ====

void FUN_0019bc28(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*(char *)(*piVar2 + 0x290) != '\0') {
    FUN_001880d8(*piVar2 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar2 + 0x140);
  if (lVar1 != 0) {
    FUN_00180fe0(*piVar2 + 0x140);
  }
  FUN_00193a28(param_1,3,0);
  return;
}


// ==== FUN_0019bc90 @ 0019bc90 ====

void FUN_0019bc90(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  piVar5 = (int *)param_1;
  lVar3 = FUN_00188f10(*piVar5 + 0x150);
  if (lVar3 == 0) {
    FUN_00193a28(param_1,0x16,0);
  }
  else {
    lVar3 = FUN_0018ab08(*piVar5 + 0x150);
    if (lVar3 == 0) {
      uVar4 = 0x3b;
    }
    else {
      fVar7 = (float)FUN_001891a8(*piVar5 + 0x150);
      lVar3 = FUN_00185f18(*piVar5 + 0x90);
      if (lVar3 == 0) {
        fVar6 = 16.0;
      }
      else {
        puVar1 = (undefined4 *)FUN_00185fe8(*piVar5 + 0x90);
        uStack_50 = *puVar1;
        uStack_4c = puVar1[1];
        uStack_48 = puVar1[2];
        uStack_44 = puVar1[3];
        uVar4 = FUN_00188f80(*piVar5 + 0x150);
        pauVar2 = (undefined1 (*) [16])FUN_00178d30(uVar4);
        auVar8 = _lqc2(*pauVar2);
        auVar9 = _vaddbc(in_vf0,in_vf0);
        auVar10._4_4_ = uStack_4c;
        auVar10._0_4_ = uStack_50;
        auVar10._8_4_ = uStack_48;
        auVar10._12_4_ = uStack_44;
        auVar10 = _lqc2(auVar10);
        auVar10 = _vsub(auVar10,auVar8);
        auVar10 = _vmul(auVar10,auVar10);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar9,auVar10);
        auVar10 = _qmfc2(auVar10._0_4_);
        fVar6 = auVar10._0_4_;
        fVar6 = (float)((uint)(fVar6 < 16.0) * 0x41800000 | (int)fVar6 * (uint)(fVar6 >= 16.0));
      }
      if (param_2 == 0) {
        lVar3 = FUN_00185f18(*piVar5 + 0x90);
        if ((lVar3 == 0) || (uVar4 = 0x28, (*(byte *)(*piVar5 + 0xd60) >> 4 & 1) == 0)) {
          uVar4 = 0x13;
        }
      }
      else {
        if (10.0 < fVar7) {
          uStack_60 = 1;
          puStack_5c = &DAT_003df5b0;
          uStack_58 = 0x41200000;
          FUN_00193a28(param_1,0x10,&uStack_60);
          return;
        }
        uVar4 = 0x27;
        if ((fVar7 * fVar7 <= fVar6) &&
           ((lVar3 = FUN_00185f18(*piVar5 + 0x90,0x27), lVar3 == 0 ||
            (uVar4 = 0x28, (*(byte *)(*piVar5 + 0xd60) >> 4 & 1) == 0)))) {
          uVar4 = 0x13;
        }
      }
    }
    FUN_00193a28(param_1,uVar4,0);
  }
  return;
}


// ==== FUN_0019be70 @ 0019be70 ====

void FUN_0019be70(undefined8 param_1)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  char cVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  piVar7 = (int *)param_1;
  lVar4 = FUN_00188f10(*piVar7 + 0x150);
  if ((lVar4 != 0) && (fVar8 = (float)FUN_00189310(*piVar7 + 0x150), fVar8 <= 3.0)) {
    fVar8 = (float)FUN_001891a8(*piVar7 + 0x150);
    fVar8 = fVar8 * fVar8;
    lVar4 = FUN_00185f18(*piVar7 + 0x90);
    if (lVar4 == 0) {
      fVar9 = 16.0;
    }
    else {
      pauVar3 = (undefined1 (*) [16])FUN_00185fe8(*piVar7 + 0x90);
      auVar13 = *pauVar3;
      uVar5 = FUN_00188f80(*piVar7 + 0x150);
      pauVar3 = (undefined1 (*) [16])FUN_00178d30(uVar5);
      auVar10 = _lqc2(*pauVar3);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _lqc2(auVar13);
      auVar13 = _vsub(auVar13,auVar10);
      auVar13 = _vmul(auVar13,auVar13);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar12,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      fVar9 = auVar13._0_4_;
      fVar9 = (float)((uint)(fVar9 < 16.0) * 0x41800000 | (int)fVar9 * (uint)(fVar9 >= 16.0));
    }
    if (fVar8 < fVar9) {
      FUN_00193990(param_1,1);
      return;
    }
    if (fVar8 <= 144.0) {
      if (*(char *)(*piVar7 + 0x291) != '\0') {
        FUN_001880d8();
        FUN_00193a28(param_1,3,0);
        return;
      }
      auVar10._0_8_ = FUN_0018a6f0(*piVar7 + 0x150);
      auVar10._8_8_ = extraout_v0_udw;
      auVar13 = _por(in_zero_qw,auVar10);
      FUN_0017e428(*piVar7 + 0x650,auVar13._0_8_);
      auVar13 = *(undefined1 (*) [16])(*(int *)(*piVar7 + 0x7c) + 0xa0);
      piVar7[8] = (int)((float)piVar7[8] + *(float *)(DAT_0040f4d0 + 0x1c));
      cVar2 = FUN_00176f00(*piVar7 + 0x1fcc);
      auVar13 = _lqc2(auVar13);
      if (cVar2 == '\0') {
        return;
      }
      auVar11 = _lqc2(*(undefined1 (*) [16])(piVar7 + 4));
      auVar12._8_4_ = (int)extraout_v0_udw;
      auVar12._0_8_ = auVar10._0_8_;
      auVar12._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
      auVar12 = _lqc2(auVar12);
      auVar10 = _vsub(auVar11,auVar13);
      auVar13 = _vsub(auVar12,auVar13);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _vmul(auVar13,auVar10);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar12,auVar13);
      auVar10 = _vmul(auVar10,auVar10);
      auVar13 = _qmfc2(auVar13._0_4_);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar12,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      if ((auVar13._0_4_ <= 0.0) || (bVar1 = false, auVar10._0_4_ < fVar9)) {
        bVar1 = true;
      }
      iVar6 = *piVar7;
      if (bVar1) {
        uVar5 = FUN_001890d0(piVar7[8],iVar6 + 0x150);
        piVar7[4] = (int)uVar5;
        piVar7[5] = (int)((ulong)uVar5 >> 0x20);
        piVar7[6] = (int)extraout_v0_udw_00;
        piVar7[7] = (int)((ulong)extraout_v0_udw_00 >> 0x20);
        iVar6 = *piVar7;
      }
      FUN_00182ba0(iVar6 + 0x810);
      cVar2 = FUN_00182320(*piVar7 + 0x810);
      if (cVar2 == '\x01') {
        piVar7[8] = 0;
        return;
      }
    }
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_0019c100 @ 0019c100 ====

void FUN_0019c100(int *param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  int in_v0_udw;
  int in_register_0000002c;
  int iVar2;
  undefined1 auVar3 [16];
  
  FUN_00193980();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x290) == '\0') {
    FUN_00187fe0(iVar2 + 0x290,0);
    iVar2 = *param_1;
  }
  FUN_00188148(iVar2 + 0x290,0);
  FUN_00173690(param_1 + 2);
  param_1[8] = 0;
  uVar1 = FUN_001890d0(*(float *)(DAT_0040f4d0 + 0x1c) * 8.0,*param_1 + 0x150);
  auVar3._8_4_ = in_v0_udw;
  auVar3._0_8_ = uVar1;
  auVar3._12_4_ = in_register_0000002c;
  auVar3 = _por(in_zero_qw,auVar3);
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_1[6] = in_v0_udw;
  param_1[7] = in_register_0000002c;
  FUN_00182320(*param_1 + 0x810,auVar3._0_8_,0);
  return;
}


// ==== FUN_0019c1a8 @ 0019c1a8 ====

void FUN_0019c1a8(int *param_1)

{
  FUN_00193988();
  FUN_00188148(*param_1 + 0x290,1);
  return;
}


// ==== FUN_0019c1e0 @ 0019c1e0 ====

void FUN_0019c1e0(int *param_1,int param_2)

{
  if (param_2 == 3) {
    FUN_00187fe0(*param_1 + 0x290,0);
  }
  return;
}


// ==== FUN_0019c210 @ 0019c210 ====

void FUN_0019c210(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  long lVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  
  piVar4 = (int *)param_1;
  uVar1 = FUN_00189048(*piVar4 + 0x150);
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = uVar1;
  auVar3 = _por(in_zero_qw,auVar3);
  FUN_0017e428(*piVar4 + 0x650,auVar3._0_8_);
  lVar2 = FUN_001829e8(*piVar4 + 0x810);
  if ((lVar2 != 0) || (lVar2 = FUN_001829a8(*piVar4 + 0x810), lVar2 == 0)) {
    FUN_00193990(param_1,1);
  }
  lVar2 = FUN_00173610(piVar4 + 2);
  if (lVar2 != 0) {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_0019c298 @ 0019c298 ====

void FUN_0019c298(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00193980();
  piVar2 = (int *)param_1;
  iVar1 = *piVar2;
  if (*(char *)(iVar1 + 0x290) != '\0') {
    FUN_00188148(iVar1 + 0x290,1);
    iVar1 = *piVar2;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x694) + 0x30) = 0;
  FUN_0019c330(param_1);
  FUN_00173640(0x40000000,piVar2 + 2);
  return;
}


// ==== FUN_0019c2f8 @ 0019c2f8 ====

void FUN_0019c2f8(int *param_1)

{
  FUN_00193988();
  FUN_00188148(*param_1 + 0x290,0);
  return;
}


// ==== FUN_0019c330 @ 0019c330 ====

void FUN_0019c330(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_40 [16];
  
  piVar4 = (int *)param_1;
  *(undefined1 *)(*piVar4 + 0x6cd) = 0;
  uVar1 = FUN_00189048(*piVar4 + 0x150);
  auVar6 = _qmtc2(uVar1);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  iVar3 = *(int *)(*piVar4 + 0x7c);
  auVar10 = _vmove(auVar8);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
  auVar7 = _vsub(auVar6,auVar7);
  auVar6 = _vmul(auVar7,auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (2.3283064e-10 <= auVar6._0_4_) {
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    auVar6 = _vmul(auVar7,auVar7);
    _vaddabc(auVar6,auVar6);
    auVar8 = _vmaddbc(auVar10,auVar6);
    auVar6 = _vmul(auVar9,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar1 = _vwaitq();
    auVar8 = _vmulq(auVar7,uVar1);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar10,auVar6);
    auVar9 = _vmove(auVar9);
    auVar7 = _vmul(auVar8,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    uVar1 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar1);
    _vmulq(auVar6,uVar1);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar10,auVar7);
    auVar6 = _vmove(auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar1 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar1);
    _vmulq(auVar7,uVar1);
    auVar7 = _vsubbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar9);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _vmax(auVar6,auVar7);
    auVar6 = _vminibc(auVar6,in_vf0);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar5 = (float)FUN_0029e0d8(auVar6._0_4_);
    if (fVar5 * 57.29578 <= 35.0) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
      auVar7 = _qmtc2(0x40000000);
      auVar6 = _vmulbc(auVar6,auVar7);
      auStack_40 = _sqc2(auVar6);
      lVar2 = FUN_0016dfb0(0x3f000000,DAT_0040f4d4);
      auVar6 = _lqc2(auStack_40);
      if (lVar2 != 0) {
        auVar6 = _vsub(in_vf0,auVar6);
        auStack_40 = _sqc2(auVar6);
      }
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
      auVar7 = _lqc2(auStack_40);
      auVar6 = _vadd(auVar6,auVar7);
      auVar7 = _qmfc2(auVar6._0_4_);
      auVar6 = _sqc2(auVar6);
      *(undefined1 (*) [16])(piVar4 + 4) = auVar6;
      lVar2 = FUN_00182ba0(*piVar4 + 0x810,auVar7._0_8_);
      if (lVar2 == 0) {
        auVar7 = _lqc2(auStack_40);
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
        auVar7 = _vsub(in_vf0,auVar7);
        auVar6 = _vadd(auVar6,auVar7);
        auVar7 = _qmfc2(auVar6._0_4_);
        auVar6 = _sqc2(auVar6);
        *(undefined1 (*) [16])(piVar4 + 4) = auVar6;
        lVar2 = FUN_00182ba0(*piVar4 + 0x810,auVar7._0_8_);
        if (lVar2 == 0) {
          FUN_00193990(param_1,0);
          return;
        }
        iVar3 = *piVar4;
      }
      else {
        iVar3 = *piVar4;
      }
      FUN_00182320(iVar3 + 0x810);
    }
  }
  return;
}


// ==== FUN_0019c558 @ 0019c558 ====

void FUN_0019c558(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_v0_udw;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  piVar7 = (int *)param_1;
  lVar3 = FUN_00188f10(*piVar7 + 0x150);
  if (((lVar3 != 0) && (fVar8 = (float)FUN_00189310(*piVar7 + 0x150), fVar8 <= 3.0)) &&
     (lVar3 = FUN_00188350(*piVar7 + 0x290), lVar3 == 0)) {
    if (*(char *)(*piVar7 + 0x291) != '\0') {
      FUN_001880d8();
      FUN_0019c7d8(param_1);
      FUN_00193a28(param_1,3,0);
      return;
    }
    fVar8 = (float)FUN_001891a8(*piVar7 + 0x150);
    uVar4 = FUN_00188f80(*piVar7 + 0x150);
    pauVar1 = (undefined1 (*) [16])FUN_00178d30(uVar4);
    auVar10 = _lqc2(*pauVar1);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _lqc2(*(undefined1 (*) [16])(piVar7 + 4));
    auVar9 = _vsub(auVar9,auVar10);
    auVar9 = _vmul(auVar9,auVar9);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar11,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    if (fVar8 * fVar8 <= auVar9._0_4_ + 1.0) {
      lVar3 = FUN_00189490(*piVar7 + 0x150);
      if ((lVar3 != 0) && (lVar3 = FUN_00185f18(*piVar7 + 0x90), lVar3 != 0)) {
        puVar2 = (undefined8 *)FUN_00185fe8(*piVar7 + 0x90);
        uVar4 = *puVar2;
        iVar5 = *(int *)(puVar2 + 1);
        iVar6 = *(int *)((int)puVar2 + 0xc);
        piVar7[4] = (int)uVar4;
        piVar7[5] = (int)((ulong)uVar4 >> 0x20);
        piVar7[6] = iVar5;
        piVar7[7] = iVar6;
      }
      FUN_0019c7d8(param_1);
      iVar5 = *piVar7;
      auVar9._0_8_ = FUN_0018a6f0(iVar5 + 0x150);
      auVar9._8_8_ = extraout_v0_udw;
      auVar9 = _por(in_zero_qw,auVar9);
      FUN_0017e428(iVar5 + 0x650,auVar9._0_8_);
      return;
    }
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_0019c6e8 @ 0019c6e8 ====

void FUN_0019c6e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_00193980();
  piVar5 = (int *)param_1;
  if (*(char *)(*piVar5 + 0x290) == '\0') {
    FUN_00187fe0(*piVar5 + 0x290,0);
  }
  FUN_00188148(*piVar5 + 0x290,0);
  *(undefined1 *)(*(int *)(*piVar5 + 0x694) + 0x30) = 0;
  puVar2 = (undefined8 *)FUN_00185fe8(*piVar5 + 0x90);
  uVar1 = *puVar2;
  iVar3 = *(int *)(puVar2 + 1);
  iVar4 = *(int *)((int)puVar2 + 0xc);
  piVar5[4] = (int)uVar1;
  piVar5[5] = (int)((ulong)uVar1 >> 0x20);
  piVar5[6] = iVar3;
  piVar5[7] = iVar4;
  FUN_0019c7d8(param_1);
  return;
}


// ==== FUN_0019c760 @ 0019c760 ====

void FUN_0019c760(int *param_1)

{
  FUN_00193988();
  FUN_00188148(*param_1 + 0x290,1);
  return;
}


// ==== FUN_0019c798 @ 0019c798 ====

void FUN_0019c798(int *param_1,long param_2)

{
  if (param_2 == 3) {
    FUN_0019c7d8();
    FUN_00187fe0(*param_1 + 0x290,0);
  }
  return;
}


// ==== FUN_0019c7d8 @ 0019c7d8 ====

undefined8 FUN_0019c7d8(int *param_1)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uStack_2c;
  uint uStack_28;
  
  lVar4 = FUN_00185f18(*param_1 + 0x90);
  uVar5 = 1;
  if (lVar4 != 0) {
    pauVar2 = (undefined1 (*) [16])FUN_00185fe8(*param_1 + 0x90);
    auVar9 = _lqc2(*pauVar2);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
    auVar7 = _vsub(auVar9,auVar6);
    auVar6 = _qmfc2(auVar7._0_4_);
    bVar1 = true;
    if ((auVar6._0_4_ & 0x7f800000) < 0x37800001) {
      auVar6 = _sqc2(auVar7);
      uStack_2c = auVar6._4_4_;
      bVar1 = true;
      if ((uStack_2c & 0x7f800000) < 0x37800001) {
        auVar6 = _sqc2(auVar7);
        uStack_28 = auVar6._8_4_;
        bVar1 = 0x37800000 < (uStack_28 & 0x7f800000);
      }
    }
    if (bVar1) {
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 4));
      auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
      auVar6 = _vsub(auVar6,auVar7);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar8,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      if (auVar6._0_4_ < 1.0) {
        auVar6 = _sqc2(auVar9);
        *(undefined1 (*) [16])(param_1 + 4) = auVar6;
      }
      iVar3 = *param_1;
    }
    else {
      iVar3 = *param_1;
    }
    *(undefined1 *)(*(int *)(iVar3 + 0x694) + 0x30) = 0;
    lVar4 = FUN_0018ab08(*param_1 + 0x150);
    if (lVar4 == 0) {
      lVar4 = FUN_00182410(*param_1 + 0x810,*(undefined8 *)(param_1 + 4),0,0);
    }
    else {
      lVar4 = FUN_00182320(*param_1 + 0x810,*(undefined8 *)(param_1 + 4));
    }
    uVar5 = 1;
    if (lVar4 != 0) {
      lVar4 = FUN_001829a8(*param_1 + 0x810);
      if (lVar4 == 0) {
        uVar5 = 1;
      }
      else {
        lVar4 = FUN_001829e8(*param_1 + 0x810);
        uVar5 = 0;
        if (lVar4 != 0) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}


// ==== FUN_0019c968 @ 0019c968 ====

void FUN_0019c968(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  FUN_00193980();
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x34) = 0x42c80000;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x24) = 0xc1c80000;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x20) = 0x40000000;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x68) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x58) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x70) = 0;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x6c) = 0x40a00000;
  iVar2 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar2 + 0x60) = 0x40000000;
  puVar3 = (undefined4 *)FUN_00193b98(param_1);
  piVar4 = (int *)param_1;
  *puVar3 = 1;
  *(undefined1 *)(*piVar4 + 0x104) = 0;
  *(undefined1 *)(*piVar4 + 0x110) = 1;
  FUN_00173690(piVar4 + 3);
  FUN_00173690(piVar4 + 4);
  cVar1 = **(char **)(*(int *)(*piVar4 + 0x7c) + 0x2a4);
  if (cVar1 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(cVar1 * 4 + DAT_00414d54);
  }
  piVar4[5] = iVar2;
  *(undefined1 *)(piVar4 + 6) = 1;
  *(undefined1 *)((int)piVar4 + 0x1a) = 0;
  piVar4[2] = 0;
  *(undefined1 *)((int)piVar4 + 0x19) = 0;
  return;
}


// ==== FUN_0019cac0 @ 0019cac0 ====

void FUN_0019cac0(undefined8 param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  bool bVar7;
  float fVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  
  piVar6 = (int *)param_1;
  if (*(char *)((int)piVar6 + 0x19) == '\0') {
    FUN_0019cd90(param_1);
    if ((piVar6[2] != 0) && (lVar2 = FUN_001829e8(*piVar6 + 0x810), lVar2 != 0)) {
      lVar2 = FUN_00188b08(*piVar6 + 0x290);
      bVar7 = lVar2 == 0;
      lVar2 = FUN_00188f10(*piVar6 + 0x150);
      if (lVar2 == 0) {
        iVar4 = piVar6[2];
        if (*(int *)(iVar4 + 0x24) == 3) {
          FUN_0017e488(*(undefined4 *)(iVar4 + 0x68),*piVar6 + 0x650);
          iVar4 = *(int *)(iVar4 + 0x60);
          if (iVar4 == 2) {
            iVar4 = FUN_00188b08(*piVar6 + 0x290);
          }
          bVar7 = iVar4 == 0;
        }
      }
      else {
        uVar3 = FUN_001890a8(*piVar6 + 0x150);
        auVar5._8_8_ = in_v0_udw;
        auVar5._0_8_ = uVar3;
        auVar5 = _por(in_zero_qw,auVar5);
        FUN_0017e428(*piVar6 + 0x650,auVar5._0_8_);
      }
      lVar2 = FUN_001735e0(piVar6 + 3);
      if (lVar2 == 0) {
        iVar4 = *piVar6;
      }
      else {
        fVar8 = (float)FUN_00173678(piVar6 + 3);
        if (0.7 < fVar8) {
          bVar7 = true;
        }
        iVar4 = *piVar6;
      }
      *(bool *)(*(int *)(iVar4 + 0x694) + 0x30) = bVar7;
    }
  }
  else {
    uStack_50 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_60 = 0x16;
    FUN_001a6330(*(undefined4 *)(*(int *)(*piVar6 + 0x7c) + 0x330),&uStack_60);
    piVar1 = *(int **)(*(int *)(*(int *)(*piVar6 + 0x7c) + 0x330) + 0x90);
    iVar4 = 0;
    if (piVar1 != (int *)0x0) {
      iVar4 = *piVar1;
    }
    lVar2 = FUN_001a7df0(*(undefined4 *)(*(int *)(*piVar6 + 0x7c) + 0x330),0,0xc);
    if ((iVar4 == 0xc) && (lVar2 == 2)) {
      FUN_0013d430(*piVar6,0x29);
    }
  }
  return;
}


// ==== FUN_0019cc80 @ 0019cc80 ====

void FUN_0019cc80(undefined8 param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == 0x34) {
    piVar3 = (int *)param_1;
    if (((piVar3[2] != 0) && (*(int *)(piVar3[2] + 0x24) == 3)) &&
       (lVar1 = FUN_0018d330(*piVar3 + 0xd10), lVar1 != 0)) {
      FUN_00177e70(piVar3[2],*piVar3);
      piVar3[2] = 0;
    }
    lVar1 = FUN_0019d1f0(param_1);
    if (lVar1 == 0) {
      lVar1 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar3 + 0x7c) + 0x2a4));
      if (lVar1 < 2) {
        FUN_00193a28(param_1,3,0);
      }
      if ((char)piVar3[6] == '\0') {
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 6) = 1;
        iVar2 = piVar3[5];
      }
      else {
        iVar2 = piVar3[5];
      }
      if ((iVar2 == 10) || (iVar2 == 0x11)) {
        FUN_00173640(*(undefined4 *)(*piVar3 + 0x640),piVar3 + 3);
      }
      else if (iVar2 == 3) {
        FUN_00173690(piVar3 + 3);
      }
      else {
        FUN_00173690(piVar3 + 3);
      }
    }
    else {
      *(undefined1 *)((int)piVar3 + 0x19) = 1;
    }
  }
  return;
}


// ==== FUN_0019cd90 @ 0019cd90 ====

void FUN_0019cd90(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  bVar1 = false;
  piVar7 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar7 + 0x150);
  lVar3 = FUN_001829e8(*piVar7 + 0x810);
  if (lVar3 == 0) {
    if ((*(byte *)(*piVar7 + 0xd60) >> 4 & 1) == 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  lVar3 = FUN_0019d1f0(param_1);
  if (lVar3 != 0) {
    *(undefined1 *)((int)piVar7 + 0x19) = 1;
    return;
  }
  if (bVar1) {
    if ((piVar7[2] != 0) || ((*(byte *)(*piVar7 + 0xd60) >> 4 & 1) == 0)) {
      lVar3 = FUN_001735e0(piVar7 + 3);
      if ((lVar3 != 0) && (lVar3 = FUN_00173610(piVar7 + 3), lVar3 == 0)) {
        return;
      }
      if (lVar2 != 0) {
        lVar2 = FUN_0018ab08(*piVar7 + 0x150);
        uVar4 = FUN_00188f80(*piVar7 + 0x150);
        lVar3 = FUN_00178f18(uVar4);
        if (lVar3 == 0) {
          lVar2 = 1;
        }
        if (lVar2 == 0) {
          if (piVar7[5] != 3) goto LAB_0019cee8;
          iVar6 = *piVar7;
        }
        else {
          iVar6 = *piVar7;
        }
        uVar4 = FUN_00188f58(iVar6 + 0x150);
        lVar2 = FUN_0018d768(iVar6 + 0xd10,uVar4);
        if ((lVar2 != 0) && (*(char *)(*piVar7 + 0xd26) != '\0')) {
          FUN_00193a28(param_1,0x34,0);
          return;
        }
      }
LAB_0019cee8:
      piVar5 = piVar7 + 4;
      lVar2 = FUN_001735e0();
      if (lVar2 == 0) {
        FUN_00173640(0x400ccccd,piVar5);
      }
      lVar2 = FUN_00173610(piVar5);
      if (lVar2 == 0) {
        return;
      }
      if (((piVar7[2] != 0) && (*(int *)(piVar7[2] + 0x24) == 3)) &&
         (lVar2 = FUN_0018d330(*piVar7 + 0xd10), lVar2 != 0)) {
        FUN_00177e70(piVar7[2],*piVar7);
      }
      piVar7[2] = 0;
      *(undefined1 *)(piVar7 + 6) = 1;
      FUN_00173690(piVar5);
      return;
    }
    iVar6 = *piVar7;
  }
  else {
    iVar6 = *piVar7;
  }
  lVar2 = FUN_00185f18(iVar6 + 0x90);
  if (lVar2 != 0) {
    if ((char)piVar7[6] == '\0') {
      iVar6 = piVar7[2];
    }
    else {
      iVar6 = *(int *)(*piVar7 + 0x10c);
      *(undefined1 *)(piVar7 + 6) = 0;
      piVar7[2] = iVar6;
      iVar6 = piVar7[2];
    }
    if (iVar6 != 0) {
      FUN_0019cfc8(param_1);
    }
  }
  return;
}


// ==== FUN_0019cfc8 @ 0019cfc8 ====

undefined4 FUN_0019cfc8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_00185f18(*param_1 + 0x90);
  uVar2 = 1;
  if (lVar3 != 0) {
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x754) < 1) {
      lVar3 = FUN_00182320(iVar1 + 0x810,*(undefined4 *)param_1[2],0);
    }
    else {
      lVar3 = FUN_00182410(iVar1 + 0x810,*(undefined4 *)param_1[2],0,0);
    }
    uVar2 = 1;
    if (lVar3 != 0) {
      lVar3 = FUN_001829a8(*param_1 + 0x810);
      if (lVar3 == 0) {
        uVar2 = 1;
      }
      else {
        lVar3 = FUN_001829e8(*param_1 + 0x810);
        uVar2 = 0;
        if (lVar3 != 0) {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


// ==== FUN_0019d080 @ 0019d080 ====

undefined8 FUN_0019d080(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar4 = (int *)param_1;
  if (*(char *)((int)piVar4 + 0x19) != '\0') {
    return 0;
  }
  switch(*param_2) {
  case 4:
    if (piVar4[2] == 0) {
      return 0;
    }
    if (*(int *)(piVar4[2] + 0x24) != 3) {
      return 0;
    }
    lVar2 = FUN_0018d330(*piVar4 + 0xd10);
    if (lVar2 == 0) {
      return 0;
    }
    FUN_00177e70(piVar4[2],*piVar4);
    uVar1 = 1;
    break;
  default:
    goto LAB_0019d1dc;
  case 7:
    if (piVar4[2] != 0) {
      return 0;
    }
    if (*(char *)((int)piVar4 + 0x1a) != '\0') {
      *(char *)((int)piVar4 + 0x1a) = *(char *)((int)piVar4 + 0x1a) + -1;
      return 0;
    }
    *(undefined1 *)(piVar4 + 6) = 1;
    return 0;
  case 10:
    FUN_00193a28(param_1,0x16,0);
    return 1;
  case 0xb:
    uVar1 = 2;
    break;
  case 0x13:
    lVar2 = FUN_0019d1f0(param_1);
    if (lVar2 != 0) {
      FUN_001939e0(param_1);
      *(undefined1 *)((int)piVar4 + 0x19) = 1;
      return 1;
    }
    return 0;
  case 0x14:
    auVar3 = _pextlw((long)(int)param_2[4],(long)(int)param_2[2]);
    uStack_60 = 2;
    auVar3 = _pextlw((long)(int)param_2[3],auVar3._0_8_);
    puStack_5c = &DAT_003df4b8;
    uStack_50 = auVar3._0_4_;
    uStack_4c = auVar3._4_4_;
    uStack_48 = auVar3._8_4_;
    uStack_44 = auVar3._12_4_;
    uStack_40 = 0;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_00193a28(param_1,8,&uStack_60);
    return 0;
  }
  piVar4[2] = 0;
  *(undefined1 *)((int)piVar4 + 0x1a) = uVar1;
LAB_0019d1dc:
  return 0;
}


// ==== FUN_0019d1f0 @ 0019d1f0 ====

undefined4 FUN_0019d1f0(int *param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  lVar2 = FUN_00188f20(*param_1 + 0x150);
  if (lVar2 != 0) {
    uVar3 = FUN_00188fb8(*param_1 + 0x150);
    lVar2 = FUN_00178f18(uVar3);
    if (lVar2 != 0) {
      auVar4 = _pextlw(0x3f800000,0x3f800000);
      auVar4 = _pextlw(0x40400000,auVar4._0_8_);
      fVar5 = (float)FUN_0018e208(*param_1 + 0xc94);
      pauVar1 = (undefined1 (*) [16])FUN_00178d30(uVar3);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _lqc2(*pauVar1);
      auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
      auVar6 = _vsub(auVar6,auVar7);
      auVar4 = _qmtc2(auVar4._0_4_);
      auVar4 = _vmul(auVar6,auVar4);
      auVar4 = _vmul(auVar4,auVar4);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar8,auVar4);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar4);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      uVar9 = _vwaitq();
      auVar4 = _vmulq(auVar4,uVar9);
      auVar4 = _qmfc2(auVar4._0_4_);
      if (auVar4._0_4_ < fVar5) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_0019d300 @ 0019d300 ====

void FUN_0019d300(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  piVar9 = (int *)param_1;
  lVar4 = FUN_00188f10(*piVar9 + 0x150);
  if (lVar4 != 0) {
    lVar4 = (long)(*piVar9 + 0xd10);
    uVar5 = FUN_00188f58(*piVar9 + 0x150);
    lVar4 = FUN_0018d768(lVar4,uVar5);
    if (lVar4 == 0) goto LAB_0019d4e8;
    cVar1 = **(char **)(*(int *)(*piVar9 + 0x7c) + 0x2a4);
    if (cVar1 == -1) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(cVar1 * 4 + DAT_00414d54);
    }
    if (iVar7 == 3) {
      iVar7 = *piVar9;
    }
    else {
      piVar10 = piVar9 + 2;
      lVar4 = FUN_0018ab08(*piVar9 + 0x150);
      uVar5 = FUN_00188f80(*piVar9 + 0x150);
      lVar6 = FUN_00178f18(uVar5);
      if (lVar6 == 0) {
        lVar4 = 1;
      }
      lVar6 = FUN_001735e0(piVar10);
      if (lVar6 == 0) {
        if (lVar4 == 0) {
          FUN_00173640(0x3f800000,piVar10);
          iVar7 = *piVar9;
        }
        else {
          iVar7 = *piVar9;
        }
      }
      else if (lVar4 == 0) {
        lVar4 = FUN_00173610(piVar10);
        if (lVar4 != 0) goto LAB_0019d4e8;
        iVar7 = *piVar9;
      }
      else {
        FUN_00173690(piVar10);
        iVar7 = *piVar9;
      }
    }
    uVar5 = FUN_00188f80(iVar7 + 0x150);
    lVar4 = FUN_00178f18(uVar5);
    if (lVar4 == 0) {
      iVar7 = *piVar9;
    }
    else {
      auVar8 = _pextlw(0x3f800000,0x3f800000);
      auVar8 = _pextlw(0x40400000,auVar8._0_8_);
      fVar11 = (float)FUN_0018e208(*piVar9 + 0xc94);
      uVar3 = FUN_00189048(*piVar9 + 0x150);
      auVar12 = _qmtc2(uVar3);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar9 + 0x7c) + 0xa0));
      auVar12 = _vsub(auVar12,auVar13);
      auVar8 = _qmtc2(auVar8._0_4_);
      auVar8 = _vmul(auVar12,auVar8);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar14,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar3 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar3);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (auVar8._0_4_ < fVar11) goto LAB_0019d518;
      iVar7 = *piVar9;
    }
    lVar4 = FUN_00188350(iVar7 + 0x290);
    if (lVar4 == 0) {
      sVar2 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar9 + 0x7c) + 0x2a4));
      if ((short)piVar9[3] < sVar2) {
        if (*(char *)(*piVar9 + 0x291) == '\0') {
          return;
        }
        FUN_00193990(param_1,1);
        return;
      }
LAB_0019d518:
      FUN_00193990(param_1,1);
      return;
    }
  }
LAB_0019d4e8:
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_0019d558 @ 0019d558 ====

void FUN_0019d558(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 in_v1_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  int *piVar9;
  
  FUN_00193980();
  piVar9 = (int *)param_1;
  lVar4 = FUN_00188f10(*piVar9 + 0x150);
  if (lVar4 == 0) {
    FUN_00193990(param_1,0);
    iVar2 = *piVar9;
  }
  else {
    FUN_00187fe0(*piVar9 + 0x290,0);
    iVar2 = *piVar9;
  }
  cVar1 = **(char **)(*(int *)(iVar2 + 0x7c) + 0x2a4);
  if (cVar1 == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(cVar1 * 4 + DAT_00414d54);
  }
  if (iVar6 == 3) {
    uVar5 = FUN_001580e0(*(undefined4 *)(*(int *)(iVar2 + 0x7c) + 0x2a4));
    sVar3 = FUN_0016def0(DAT_0040f4d4,2,5);
    *(short *)(piVar9 + 3) = sVar3;
    auVar7._0_8_ = (long)(int)sVar3;
    auVar7._8_8_ = in_v1_udw;
    auVar8._8_4_ = in_s0_udw;
    auVar8._0_8_ = uVar5;
    auVar8._12_4_ = in_register_0000010c;
    auVar8 = _pminw(auVar7,auVar8);
    auVar8 = _pextlw(0,auVar8._0_8_);
    *(short *)(piVar9 + 3) = (short)uVar5 - auVar8._0_2_;
  }
  else {
    *(undefined2 *)(piVar9 + 3) = 0;
  }
  FUN_00173690(piVar9 + 2);
  return;
}


// ==== FUN_0019d648 @ 0019d648 ====

void FUN_0019d648(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_0019d688 @ 0019d688 ====

undefined8 FUN_0019d688(undefined8 param_1,int *param_2)

{
  if (*param_2 == 4) {
    FUN_00193990(param_1,1);
  }
  return 0;
}


// ==== FUN_0019d6b8 @ 0019d6b8 ====

void FUN_0019d6b8(undefined8 param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar1 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)param_1 + 0x7c) + 0xa0));
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _vmul(auVar1,auVar1);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar3,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  if (100.0 < auVar1._0_4_) {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_0019d728 @ 0019d728 ====

void FUN_0019d728(void)

{
  FUN_00193980();
  return;
}


// ==== FUN_0019d748 @ 0019d748 ====

void FUN_0019d748(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_0019d768 @ 0019d768 ====

void FUN_0019d768(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_00193980();
  uVar4 = 0x3f800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x34) = 0xbf800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x30) = 0xbf800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x28) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x60) = 0x40200000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x74) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (undefined4 *)FUN_00193b98(param_1);
  *puVar2 = 1;
  piVar3 = (int *)param_1;
  *(undefined1 *)(*piVar3 + 0x104) = 0;
  *(undefined1 *)(*piVar3 + 0x110) = 1;
  *(undefined1 *)(*piVar3 + 0x112) = 1;
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x35) = 1;
  FUN_00193a28(param_1,0x16,0);
  return;
}


// ==== FUN_0019d870 @ 0019d870 ====

void FUN_0019d870(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  switch(param_2) {
  case 3:
    lVar1 = FUN_00188f10(*piVar4 + 0x150);
    if ((lVar1 != 0) && (lVar1 = FUN_00180f28(*piVar4 + 0x140), lVar1 != 0))
    goto switchD_0019d8a8_caseD_d;
    break;
  default:
    FUN_00193a28(param_1,0x16,0);
    return;
  case 0xd:
  case 0xe:
    goto switchD_0019d8a8_caseD_d;
  case 0x11:
  case 0x32:
    lVar1 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar4 + 0x7c) + 0x2a4));
    if (lVar1 < 3) {
      FUN_0019daa0(param_1);
      return;
    }
    if (param_3 != 0) goto switchD_0019d8a8_caseD_d;
    lVar1 = FUN_00188f10(*piVar4 + 0x150);
    if (lVar1 != 0) {
      uVar3 = 0x3b;
      goto LAB_0019d940;
    }
    break;
  case 0x16:
    iVar2 = *piVar4;
LAB_0019d954:
    FUN_001863a0(iVar2 + 0x90);
switchD_0019d8a8_caseD_d:
    FUN_0019db08(param_1);
    return;
  case 0x3b:
    if (param_3 != 0) {
      iVar2 = *piVar4;
      goto LAB_0019d954;
    }
  }
  uVar3 = 0x16;
LAB_0019d940:
  FUN_00193a28(param_1,uVar3,0);
  return;
}


// ==== FUN_0019d990 @ 0019d990 ====

undefined8 FUN_0019d990(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar5 = &uStack_60;
  iVar1 = *param_2;
  if (iVar1 == 4) {
    lVar2 = FUN_0018d608(*(int *)param_1 + 0xd10);
    if (lVar2 == 0) {
      return 0;
    }
    FUN_001863a0(*(int *)param_1 + 0x90);
    return 1;
  }
  if (iVar1 < 5) {
    if (iVar1 != 1) {
      return 0;
    }
    uVar4 = 0x16;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (iVar1 == 10) {
      FUN_00193a28(param_1,0x16,0);
      return 1;
    }
    if (iVar1 != 0x14) {
      return 0;
    }
    auVar3 = _pextlw((long)param_2[4],(long)param_2[2]);
    uStack_60 = 2;
    uVar4 = 8;
    auVar3 = _pextlw((long)param_2[3],auVar3._0_8_);
    puStack_5c = &DAT_003df4b8;
    uStack_50 = auVar3._0_4_;
    uStack_4c = auVar3._4_4_;
    uStack_48 = auVar3._8_4_;
    uStack_44 = auVar3._12_4_;
    uStack_40 = 0;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
  }
  FUN_00193a28(param_1,uVar4,puVar5);
  return 0;
}


// ==== FUN_0019daa0 @ 0019daa0 ====

void FUN_0019daa0(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*(char *)(*piVar2 + 0x290) != '\0') {
    FUN_001880d8(*piVar2 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar2 + 0x140);
  if (lVar1 != 0) {
    FUN_00180fe0(*piVar2 + 0x140);
  }
  FUN_00193a28(param_1,3,0);
  return;
}


// ==== FUN_0019db08 @ 0019db08 ====

void FUN_0019db08(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar4 + 0x150);
  iVar1 = *piVar4;
  if (lVar2 == 0) {
    if ((*(char *)(iVar1 + 0xd27) == '\0') || (lVar2 = FUN_00189208(iVar1 + 0x150), lVar2 != 0)) {
      FUN_00193a28(param_1,0x16,0);
      return;
    }
  }
  else {
    lVar2 = FUN_0018ab08(iVar1 + 0x150);
    if (lVar2 == 0) {
      uVar3 = 0x3b;
      goto LAB_0019dba0;
    }
    if ((*(byte *)(*piVar4 + 0xd60) >> 4 & 1) != 0) {
      uVar3 = FUN_00188f80(*piVar4 + 0x150);
      lVar2 = FUN_00178f18(uVar3);
      if (lVar2 != 0) {
        uVar3 = 0x32;
        goto LAB_0019dba0;
      }
    }
  }
  uVar3 = 0x11;
LAB_0019dba0:
  FUN_00193a28(param_1,uVar3,0);
  return;
}


// ==== FUN_0019dbd0 @ 0019dbd0 ====

void FUN_0019dbd0(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  int iVar4;
  int *piVar5;
  float fVar6;
  
  piVar5 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar5 + 0x150);
  if (lVar1 == 0) {
LAB_0019dc2c:
    FUN_00193990(param_1,0);
    return;
  }
  lVar1 = FUN_0018ab08(*piVar5 + 0x150);
  iVar4 = *piVar5;
  if (lVar1 == 0) {
    fVar6 = (float)FUN_00189310(iVar4 + 0x150);
    if (6.0 < fVar6) goto LAB_0019dc2c;
    iVar4 = *piVar5;
  }
  if (*(char *)(iVar4 + 0x291) != '\0') {
    FUN_0019e380(param_1);
    return;
  }
  lVar1 = FUN_0018ab08(iVar4 + 0x150);
  if (lVar1 == 0) {
    fVar6 = (float)FUN_00189310(*piVar5 + 0x150);
    if (1.98 <= fVar6) {
      FUN_001880d8(*piVar5 + 0x290);
      goto LAB_0019dce8;
    }
    FUN_001893a0(*piVar5 + 0x150);
    iVar4 = *piVar5;
  }
  else {
    uVar3 = FUN_00189048(*piVar5 + 0x150);
    iVar4 = *piVar5;
    auVar2._8_8_ = in_v0_udw;
    auVar2._0_8_ = uVar3;
    _por(in_zero_qw,auVar2);
  }
  FUN_0017e428(iVar4 + 0x650);
  if (*(char *)(*piVar5 + 0x290) == '\0') {
    FUN_00187fe0(*piVar5 + 0x290,0);
  }
LAB_0019dce8:
  FUN_0019ec00(param_1);
  FUN_0019e510(param_1);
  return;
}


// ==== FUN_0019dd08 @ 0019dd08 ====

void FUN_0019dd08(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)param_1;
  FUN_00193980();
  uVar4 = 0xbf800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0xc0a00000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x60) = 0x40a00000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x74) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x18) = 0x3f800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 8) = 0xc0000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x10) = 0x40800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0x40000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x14) = 0xc0400000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 4) = uVar4;
  *(undefined1 *)(*piVar3 + 0x104) = 1;
  puVar2 = (undefined4 *)FUN_00193b98(param_1);
  *puVar2 = 2;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  FUN_00187fe0(*piVar3 + 0x290,0);
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x30) = 0;
  piVar3[0x10] = 2;
  uVar4 = FUN_0016de70(0x3f800000,0x40000000,DAT_0040f4d4);
  uVar4 = FUN_0019eea0(uVar4,param_1);
  FUN_00173640(uVar4,piVar3 + 0xc);
  FUN_00173658(piVar3 + 0xd);
  FUN_00173658(piVar3 + 0xf);
  FUN_00173640(0x41200000,piVar3 + 0xe);
  *(undefined1 *)((int)piVar3 + 0x46) = 0;
  *(undefined1 *)((int)piVar3 + 0x45) = 0;
  FUN_0019ee30(param_1);
  return;
}


// ==== FUN_0019df10 @ 0019df10 ====

void FUN_0019df10(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_0019df50 @ 0019df50 ====

undefined4 FUN_0019df50(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if ((char)param_1[0x11] == '\0') {
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
    lVar2 = FUN_001823b0(*param_1 + 0x810,param_1[4],0);
    if (((lVar2 == 0) || (lVar2 = FUN_001829a8(*param_1 + 0x810), lVar2 == 0)) ||
       (lVar2 = FUN_001829e8(*param_1 + 0x810), lVar2 != 0)) {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
      *(undefined1 *)(param_1 + 0x11) = 1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x45) = 0;
  }
  return uVar1;
}


// ==== FUN_0019dfe8 @ 0019dfe8 ====

undefined4 FUN_0019dfe8(int *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    lVar3 = FUN_00185f18(*param_1 + 0x90);
    if (lVar3 == 0) {
      iVar6 = *(int *)(*param_1 + 0x7c);
      uVar4 = *(undefined8 *)(iVar6 + 0xa0);
      iVar5 = *(int *)(iVar6 + 0xa8);
      iVar6 = *(int *)(iVar6 + 0xac);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    else {
      puVar1 = (undefined8 *)FUN_00185fe8(*param_1 + 0x90);
      uVar4 = *puVar1;
      iVar5 = *(int *)(puVar1 + 1);
      iVar6 = *(int *)((int)puVar1 + 0xc);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    param_1[4] = (int)uVar4;
    param_1[5] = (int)((ulong)uVar4 >> 0x20);
    param_1[6] = iVar5;
    param_1[7] = iVar6;
    uVar2 = 1;
    *(undefined1 *)((int)param_1 + 0x45) = 1;
  }
  return uVar2;
}


// ==== FUN_0019e060 @ 0019e060 ====

undefined8 FUN_0019e060(int *param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar2 = FUN_00189048(*param_1 + 0x150);
  auVar7 = _qmtc2(uVar2);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  iVar1 = *(int *)(*param_1 + 0x7c);
  auVar13 = _vmove(auVar9);
  pauVar5 = (undefined1 (*) [16])(iVar1 + 0x70);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar8 = _vsub(auVar7,auVar8);
  auVar7 = _vmul(auVar8,auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  uVar4 = 0;
  if (2.3283064e-10 <= auVar7._0_4_) {
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
    auVar7 = _vmul(auVar8,auVar8);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar13,auVar7);
    auVar9 = _vmul(auVar10,auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    auVar12 = _qmtc2(SQRT(auVar7._0_4_));
    uVar2 = _vwaitq();
    auVar11 = _vmulq(auVar8,uVar2);
    _vaddabc(auVar9,auVar9);
    auVar7 = _vmaddbc(auVar13,auVar9);
    auVar9 = _vmove(auVar10);
    auVar8 = _vmul(auVar11,auVar11);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar2 = _vwaitq();
    auVar10 = _vmulq(auVar9,uVar2);
    _vmulq(auVar7,uVar2);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar13,auVar8);
    auVar7 = _vmove(auVar11);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar2 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar2);
    _vmulq(auVar8,uVar2);
    auVar13 = _vsubbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar7,auVar10);
    auVar7 = _qmfc2(auVar12._0_4_);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    auVar8 = _vmax(auVar8,auVar13);
    auVar8 = _vminibc(auVar8,in_vf0);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar6 = (float)FUN_0029e0d8(auVar8._0_4_);
    uVar4 = 0;
    if (fVar6 * 57.29578 <= 35.0) {
      auVar9 = _qmtc2(0x40600000);
      auVar8 = _lqc2(*pauVar5);
      auVar8 = _vmulbc(auVar8,auVar9);
      if (param_1[0x10] == 1) {
        auVar8 = _vsub(in_vf0,auVar8);
      }
      if (4.0 < auVar7._0_4_) {
        auVar9 = _qmtc2(0x403e6667);
        auVar7 = _lqc2(pauVar5[2]);
        auVar7 = _vmulbc(auVar7,auVar9);
        auVar8 = _vadd(auVar8,auVar7);
        auVar7 = _lqc2(pauVar5[3]);
      }
      else {
        auVar9 = _qmtc2(0x3eb33333);
        auVar7 = _lqc2(pauVar5[2]);
        auVar7 = _vmulbc(auVar7,auVar9);
        auVar8 = _vsub(auVar8,auVar7);
        auVar7 = _lqc2(pauVar5[3]);
      }
      auVar7 = _vadd(auVar7,auVar8);
      auVar8 = _qmfc2(auVar7._0_4_);
      auVar7 = _por(in_zero_qw,auVar8);
      lVar3 = FUN_00182ba0(*param_1 + 0x810,auVar7._0_8_);
      if (lVar3 == 0) {
        param_1[0x10] = 3 - param_1[0x10];
        lVar3 = (long)(int)(param_1 + 0xc);
        uVar2 = FUN_0016de70(0x3f800000,0x40000000,DAT_0040f4d4);
        FUN_00173640(uVar2,lVar3);
        uVar4 = 0;
      }
      else {
        auVar7 = _por(in_zero_qw,auVar8);
        FUN_001823b0(*param_1 + 0x810,auVar7._0_8_,1);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// ==== FUN_0019e2e8 @ 0019e2e8 ====

undefined8 FUN_0019e2e8(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 4) {
    uVar1 = FUN_0019e3e8();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0019e318 @ 0019e318 ====

void FUN_0019e318(int *param_1,long param_2)

{
  if (param_2 == 3) {
    if (*(char *)(*param_1 + 0x290) == '\0') {
      FUN_00187fe0(*param_1 + 0x290,0);
    }
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
  }
  else if (param_2 == 0x11) {
    FUN_0019e380();
  }
  return;
}


// ==== FUN_0019e380 @ 0019e380 ====

void FUN_0019e380(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*(char *)(*piVar2 + 0x290) != '\0') {
    FUN_001880d8(*piVar2 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar2 + 0x140);
  if (lVar1 != 0) {
    FUN_00180fe0(*piVar2 + 0x140);
  }
  FUN_00193a28(param_1,3,0);
  return;
}


// ==== FUN_0019e3e8 @ 0019e3e8 ====

undefined4 FUN_0019e3e8(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)param_1;
  lVar1 = FUN_0018d608(*piVar2 + 0xd10);
  if (lVar1 == 0) {
switchD_0019e444_caseD_4:
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_00173610();
    if (lVar1 == 0) {
      return 0;
    }
    switch(piVar2[0x10]) {
    case 0:
      uVar3 = FUN_0016de70(0x40a00000,0x40e00000,DAT_0040f4d4);
      uVar3 = FUN_0019ef08(uVar3,param_1);
      FUN_00173640(uVar3,piVar2 + 0xc);
      piVar2[0x10] = 1;
      break;
    case 1:
      uVar3 = FUN_0016de70(0x40a00000,0x40e00000,DAT_0040f4d4);
      uVar3 = FUN_0019ef08(uVar3,param_1);
      FUN_00173640(uVar3,piVar2 + 0xc);
      piVar2[0x10] = 0;
      break;
    default:
      *(undefined1 *)((int)piVar2 + 0x45) = 0;
      *(undefined1 *)((int)piVar2 + 0x46) = 1;
      break;
    case 4:
      goto switchD_0019e444_caseD_4;
    }
    FUN_00173640(0x40000000,piVar2 + 0xd);
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_0019e510 @ 0019e510 ====

void FUN_0019e510(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  piVar9 = (int *)param_1;
  FUN_00186358(*piVar9 + 0x90);
  uVar6 = FUN_00188f58(*piVar9 + 0x150);
  lVar7 = FUN_00173610(piVar9 + 0xe);
  bVar2 = false;
  if (lVar7 != 0) {
    fVar10 = (float)FUN_001891a8(*piVar9 + 0x150);
    if (6.0 < fVar10) {
      lVar7 = FUN_00185f00(*piVar9 + 0x90);
      if ((((lVar7 != 0) &&
           (lVar7 = FUN_00177b48(*(undefined4 *)(*piVar9 + 0x100),uVar6), lVar7 == 0)) &&
          (lVar7 = FUN_00177b20(*(undefined4 *)(*piVar9 + 0x100),uVar6), lVar7 == 0)) &&
         (fVar10 = (float)FUN_001891a8(*piVar9 + 0x150), 5.0 < fVar10)) {
        bVar2 = true;
        piVar3 = (int *)FUN_00185f10(*piVar9 + 0x90);
        iStack_b0 = *piVar3;
        iStack_ac = piVar3[1];
        iStack_a8 = piVar3[2];
        iStack_a4 = piVar3[3];
      }
    }
    else {
      uVar4 = FUN_00189048(*piVar9 + 0x150);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _sqc2(auVar13);
      auVar15 = _qmtc2(uVar4);
      auVar12 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar9 + 0x7c) + 0xa0));
      auVar15 = _vsub(auVar15,auVar12);
      auVar12 = _vmul(auVar15,auVar15);
      _sqc2(auVar15);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar13,auVar12);
      auVar12 = _qmfc2(auVar12._0_4_);
      auVar13 = _lqc2(auVar14);
      if (2.3283064e-10 <= auVar12._0_4_) {
        auVar12 = _vmul(auVar15,auVar15);
        _vaddabc(auVar12,auVar12);
        auVar12 = _vmaddbc(auVar13,auVar12);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar12);
        uVar4 = _vwaitq();
        auVar12 = _vmulq(auVar15,uVar4);
        auVar12 = _sqc2(auVar12);
        uVar6 = FUN_00188f80(*piVar9 + 0x150);
        pauVar5 = (undefined1 (*) [16])FUN_00178de0(uVar6);
        auVar15 = _lqc2(*pauVar5);
        auVar12 = _lqc2(auVar12);
        auVar13 = _vmul(auVar15,auVar15);
        auVar17 = _lqc2(auVar14);
        auVar14 = _vmul(auVar12,auVar12);
        _vaddabc(auVar14,auVar14);
        auVar14 = _vmaddbc(auVar17,auVar14);
        _vaddabc(auVar13,auVar13);
        auVar13 = _vmaddbc(auVar17,auVar13);
        auVar15 = _vmove(auVar15);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar14);
        auVar17 = _vaddbc(in_vf0,in_vf0);
        uVar4 = _vwaitq();
        auVar14 = _vmulq(auVar12,uVar4);
        _vmulq(auVar17,uVar4);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar13);
        auVar13 = _vaddbc(in_vf0,in_vf0);
        uVar4 = _vwaitq();
        auVar12 = _vmulq(auVar15,uVar4);
        _vmulq(auVar13,uVar4);
        auVar13 = _vaddbc(in_vf0,in_vf0);
        auVar14 = _vmul(auVar14,auVar12);
        auVar12 = _vsubbc(in_vf0,in_vf0);
        _vaddabc(auVar14,auVar14);
        auVar14 = _vmaddbc(auVar13,auVar14);
        auVar14 = _vmax(auVar14,auVar12);
        auVar14 = _vminibc(auVar14,in_vf0);
        auVar14 = _qmfc2(auVar14._0_4_);
        FUN_0029e0d8(auVar14._0_4_);
      }
    }
    if (bVar2) {
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar9 + 8));
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auVar14._4_4_ = iStack_ac;
      auVar14._0_4_ = iStack_b0;
      auVar14._8_4_ = iStack_a8;
      auVar14._12_4_ = iStack_a4;
      auVar14 = _lqc2(auVar14);
      auVar14 = _vsub(auVar14,auVar12);
      auVar12 = _vmul(auVar14,auVar14);
      auVar14 = _sqc2(auVar13);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar13,auVar12);
      auVar12 = _qmfc2(auVar12._0_4_);
      if (auVar12._0_4_ <= 25.0) {
        lVar7 = FUN_00173610(piVar9 + 0xf);
        if (lVar7 == 0) goto LAB_0019e998;
        iVar8 = *piVar9;
      }
      else {
        iVar8 = *piVar9;
      }
      auVar12._4_4_ = iStack_ac;
      auVar12._0_4_ = iStack_b0;
      auVar12._8_4_ = iStack_a8;
      auVar12._12_4_ = iStack_a4;
      auVar13 = _lqc2(auVar12);
      iVar1 = *(int *)(iVar8 + 0x7c);
      uVar4 = 0x3f800000;
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar15 = _vsub(auVar13,auVar12);
      auVar13 = _vmul(auVar15,auVar15);
      auVar12 = _lqc2(auVar14);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar12,auVar13);
      auVar12 = _qmfc2(auVar13._0_4_);
      _sqc2(auVar13);
      fVar10 = auVar12._0_4_;
      if ((1.0 < fVar10) && (fVar10 < 49.0)) {
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar13);
        uVar19 = _vwaitq();
        auVar12 = _vmulq(auVar15,uVar19);
        auVar12 = _sqc2(auVar12);
        uVar19 = FUN_00189048(iVar8 + 0x150);
        auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
        auVar15 = _qmtc2(uVar19);
        auVar16 = _lqc2(auVar12);
        auVar17 = _vsub(auVar15,auVar13);
        auVar13 = _lqc2(auVar14);
        auVar12 = _vmul(auVar16,auVar16);
        _vaddabc(auVar12,auVar12);
        auVar12 = _vmaddbc(auVar13,auVar12);
        auVar15 = _vmul(auVar17,auVar17);
        auVar13 = _vmove(auVar16);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar12);
        auVar12 = _vaddbc(in_vf0,in_vf0);
        uVar19 = _vwaitq();
        auVar13 = _vmulq(auVar13,uVar19);
        _vmulq(auVar12,uVar19);
        auVar16 = _vsubbc(in_vf0,in_vf0);
        auVar12 = _lqc2(auVar14);
        auVar18 = _vaddbc(in_vf0,in_vf0);
        _vaddabc(auVar15,auVar15);
        auVar12 = _vmaddbc(auVar12,auVar15);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar12);
        uVar19 = _vwaitq();
        auVar15 = _vmulq(auVar17,uVar19);
        auVar12 = _lqc2(auVar14);
        auVar14 = _vmul(auVar15,auVar15);
        _vaddabc(auVar14,auVar14);
        auVar14 = _vmaddbc(auVar12,auVar14);
        auVar12 = _vmove(auVar15);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar14);
        auVar15 = _vaddbc(in_vf0,in_vf0);
        uVar19 = _vwaitq();
        auVar14 = _vmulq(auVar12,uVar19);
        _vmulq(auVar15,uVar19);
        auVar14 = _vmul(auVar13,auVar14);
        _vaddabc(auVar14,auVar14);
        auVar14 = _vmaddbc(auVar18,auVar14);
        auVar14 = _vmax(auVar14,auVar16);
        auVar14 = _vminibc(auVar14,in_vf0);
        auVar14 = _qmfc2(auVar14._0_4_);
        fVar11 = (float)FUN_0029e0d8(auVar14._0_4_);
        if ((fVar11 * 57.29578 < 35.0) || (fVar10 < 4.0)) {
          piVar9[0x10] = 4;
          piVar9[4] = iStack_b0;
          piVar9[5] = iStack_ac;
          piVar9[6] = iStack_a8;
          piVar9[7] = iStack_a4;
          *(undefined1 *)(piVar9 + 0x11) = 0;
          uVar4 = FUN_0016de70(uVar4,0x40000000,DAT_0040f4d4);
          FUN_00173640(uVar4,piVar9 + 0xc);
          FUN_00173640(0x40a00000,piVar9 + 0xe);
          piVar9[8] = iStack_b0;
          piVar9[9] = iStack_ac;
          piVar9[10] = iStack_a8;
          piVar9[0xb] = iStack_a4;
          FUN_00173640(0x41a00000,piVar9 + 0xf);
        }
      }
    }
  }
LAB_0019e998:
  piVar3 = piVar9 + 0xc;
  lVar7 = FUN_00173610();
  if (lVar7 != 0) {
    FUN_0019ea58(param_1);
    if ((*(char *)(*piVar9 + 0x290) == '\0') && ((uint)piVar9[0x10] < 2)) {
      FUN_0019ea58(param_1);
    }
    else {
      fVar10 = (float)FUN_00173678(piVar3);
      if (fVar10 < 0.75) {
        FUN_0019ea58(param_1);
      }
    }
    fVar10 = (float)FUN_00173678(piVar3);
    if (fVar10 < 0.75) {
      FUN_00173640(piVar3);
    }
  }
  return;
}


// ==== FUN_0019ea58 @ 0019ea58 ====

void FUN_0019ea58(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)param_1;
  switch(piVar3[0x10]) {
  case 0:
    lVar2 = FUN_001829e8(*piVar3 + 0x810);
    iVar1 = 3;
    goto joined_r0x0019eac0;
  case 1:
    lVar2 = FUN_001829e8(*piVar3 + 0x810);
    iVar1 = 2;
joined_r0x0019eac0:
    if (lVar2 != 0) {
      piVar3[0x10] = iVar1;
      uVar4 = FUN_0016de70(0x3f800000,0x40000000,DAT_0040f4d4);
      uVar4 = FUN_0019eea0(uVar4,param_1);
      FUN_00173640(uVar4,piVar3 + 0xc);
    }
    break;
  case 2:
    uVar4 = FUN_0016de70(0x40a00000,0x40e00000,DAT_0040f4d4);
    uVar4 = FUN_0019ef08(uVar4,param_1);
    FUN_00173640(uVar4,piVar3 + 0xc);
    piVar3[0x10] = 0;
    break;
  case 3:
    uVar4 = FUN_0016de70(0x40a00000,0x40e00000,DAT_0040f4d4);
    uVar4 = FUN_0019ef08(uVar4,param_1);
    FUN_00173640(uVar4,piVar3 + 0xc);
    piVar3[0x10] = 1;
    break;
  case 4:
    uVar4 = FUN_0016de70(0x40a00000,0x40e00000,DAT_0040f4d4);
    uVar4 = FUN_0019eea0(uVar4,param_1);
    FUN_00173640(uVar4,piVar3 + 0xc);
    lVar2 = FUN_0016dfb0(0x3f000000,DAT_0040f4d4);
    iVar1 = 3;
    if (lVar2 != 0) {
      iVar1 = 2;
    }
    piVar3[0x10] = iVar1;
  }
  return;
}


// ==== FUN_0019ec00 @ 0019ec00 ====

void FUN_0019ec00(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)param_1;
  switch(piVar5[0x10]) {
  case 0:
  case 1:
    lVar2 = FUN_0018ab08(*piVar5 + 0x150);
    if ((lVar2 != 0) && (lVar2 = FUN_001892c8(*piVar5 + 0x150), lVar2 != 0)) {
      fVar6 = (float)FUN_001891a8(*piVar5 + 0x150);
      if (fVar6 < 2.0) {
        piVar5[0x10] = 3 - piVar5[0x10];
        uVar7 = FUN_0016de70(0x3f800000,DAT_0040f4d4);
        FUN_00173640(uVar7,piVar5 + 0xc);
      }
      cVar1 = FUN_00176f00(*piVar5 + 0x1fcc);
      if (cVar1 == '\0') {
        lVar2 = FUN_001829e8(*piVar5 + 0x810);
        if (lVar2 != 0) {
          FUN_0019ee30(param_1);
          FUN_001736a0(*(undefined4 *)(DAT_0040f4d0 + 0x1c),piVar5 + 0xc);
        }
      }
      else {
        lVar2 = FUN_00173610(piVar5 + 0xc);
        if (lVar2 == 0) {
          FUN_0019e060(param_1);
        }
      }
    }
    break;
  case 2:
  case 3:
    FUN_0019ee30(param_1);
    break;
  case 4:
    lVar2 = FUN_0019df50(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_00188f58(*piVar5 + 0x150);
      lVar2 = FUN_00177b48(*(undefined4 *)(*piVar5 + 0x100),uVar3);
      if ((lVar2 == 0) && (lVar2 = FUN_00177b20(*(undefined4 *)(*piVar5 + 0x100),uVar3), lVar2 == 0)
         ) {
        if (*(char *)(*piVar5 + 0x131) == '\x01') {
          FUN_0019e380(param_1,0x11);
        }
        else {
          FUN_00193a28(param_1,0x11,0);
        }
      }
      uVar7 = FUN_0016de70(0x40a00000,0x40e00000,DAT_0040f4d4);
      uVar7 = FUN_0019eea0(uVar7,param_1);
      FUN_00173640(uVar7,piVar5 + 0xc);
      lVar2 = FUN_0016dfb0(0x3f000000,DAT_0040f4d4);
      iVar4 = 3;
      if (lVar2 != 0) {
        iVar4 = 2;
      }
      piVar5[0x10] = iVar4;
    }
  }
  return;
}


// ==== FUN_0019ee30 @ 0019ee30 ====

void FUN_0019ee30(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = (int *)param_1;
  iVar1 = *piVar2;
  if (*(char *)((int)piVar2 + 0x45) != '\0') {
    fVar3 = (float)FUN_001891a8(iVar1 + 0x150);
    if (2.0 <= fVar3) goto LAB_0019ee84;
    iVar1 = *piVar2;
  }
  FUN_001863a0(iVar1 + 0x90);
  FUN_0019dfe8(param_1);
LAB_0019ee84:
  FUN_0019df50(param_1);
  return;
}


// ==== FUN_0019eea0 @ 0019eea0 ====

float FUN_0019eea0(float param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_001891a8(*param_2 + 0x150);
  fVar1 = (fVar1 - 12.0) * (fVar1 - 12.0);
  return param_1 * ((float)((int)fVar1 * (uint)(0.0 < fVar1)) * 0.008 + 0.1);
}


// ==== FUN_0019ef08 @ 0019ef08 ====

float FUN_0019ef08(float param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_001891a8(*param_2 + 0x150);
  fVar1 = fVar1 - 17.0;
  fVar1 = (float)((int)fVar1 * (uint)(fVar1 < 10.0) | (uint)(fVar1 >= 10.0) * 0x41200000);
  fVar1 = 1.0 - fVar1 * fVar1 * 0.005;
  return param_1 * (float)((int)fVar1 * (uint)(0.2 < fVar1) | (uint)(0.2 >= fVar1) * 0x3e4ccccd);
}


// ==== FUN_0019ef80 @ 0019ef80 ====

void FUN_0019ef80(undefined8 param_1)

{
  FUN_0019f470(param_1,1);
  return;
}


// ==== FUN_0019efa0 @ 0019efa0 ====

void FUN_0019efa0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_00193980();
  piVar3 = (int *)param_1;
  FUN_00188b40(0,0x40a00000,*piVar3 + 0x290,1);
  uVar4 = 0x3f800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x34) = 0xbf800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x30) = 0xbf800000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x28) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x60) = 0x40200000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x74) = uVar4;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (undefined4 *)FUN_00193b98(param_1);
  *puVar2 = 1;
  *(undefined1 *)(*piVar3 + 0x104) = 0;
  *(undefined1 *)(*piVar3 + 0x110) = 1;
  *(undefined1 *)(*piVar3 + 0x112) = 1;
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x35) = 1;
  FUN_00173640(0,piVar3 + 2);
  FUN_00173640(0,piVar3 + 3);
  FUN_00193a28(param_1,0x16,0);
  return;
}


// ==== FUN_0019f0e8 @ 0019f0e8 ====

void FUN_0019f0e8(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  switch(param_2) {
  case 3:
    lVar1 = FUN_00188f10(*piVar4 + 0x150);
    if ((lVar1 == 0) || (lVar1 = FUN_00180f28(*piVar4 + 0x140), lVar1 == 0)) {
LAB_0019f1cc:
      uVar3 = 0x16;
      goto LAB_0019f1d0;
    }
    goto LAB_0019f1f0;
  default:
    FUN_00193a28(param_1,0x16,0);
    break;
  case 0xd:
  case 0xe:
    goto switchD_0019f120_caseD_d;
  case 0x11:
  case 0x2b:
  case 0x2c:
    lVar1 = FUN_001580e0(*(undefined4 *)(*(int *)(*piVar4 + 0x7c) + 0x2a4));
    if ((lVar1 < 3) || (param_3 != 0)) {
      FUN_0019f408(param_1);
      return;
    }
    lVar1 = FUN_00188f10(*piVar4 + 0x150);
    if (lVar1 == 0) goto LAB_0019f1cc;
    uVar3 = 0x3b;
LAB_0019f1d0:
    FUN_00193a28(param_1,uVar3,0);
    break;
  case 0x16:
  case 0x39:
    iVar2 = *piVar4;
    goto LAB_0019f1e4;
  case 0x2f:
    if (param_3 == 0) {
      FUN_0019f470(param_1,0);
    }
    break;
  case 0x3b:
    if (param_3 == 0) goto LAB_0019f1cc;
    iVar2 = *piVar4;
LAB_0019f1e4:
    FUN_001863a0(iVar2 + 0x90);
switchD_0019f120_caseD_d:
LAB_0019f1f0:
    FUN_0019f470(param_1,1);
  }
  return;
}


// ==== FUN_0019f228 @ 0019f228 ====

undefined8 FUN_0019f228(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  undefined4 uStack_70;
  undefined *puStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = *param_2;
  piVar5 = (int *)param_1;
  if (iVar1 == 4) {
    lVar3 = FUN_00173610(piVar5 + 3);
    if (lVar3 == 0) {
      lVar3 = FUN_0018d608(*piVar5 + 0xd10,0x30);
      uVar2 = 0;
      if (lVar3 != 0) {
        FUN_001863a0(*piVar5 + 0x90);
        uVar2 = 1;
      }
    }
    else {
      FUN_00193a28(param_1,0x30,0);
      FUN_00173640(0x41000000,piVar5 + 3);
      uVar2 = 1;
    }
  }
  else if (iVar1 < 5) {
    uVar2 = 0;
    if (iVar1 == 1) {
      FUN_00193a28(param_1,0x16,0);
      uVar2 = 0;
    }
  }
  else if (iVar1 == 10) {
    FUN_00193a28(param_1,0x16,0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (iVar1 == 0x14) {
      lVar3 = FUN_00184238(*piVar5 + 0x6f0,1);
      uVar2 = 1;
      if (lVar3 == 0) {
        if (1.0 < (float)param_2[5]) {
          auVar4 = _pextlw((long)param_2[4],(long)param_2[2]);
          puStack_6c = &DAT_003df430;
          auVar4 = _pextlw((long)param_2[3],auVar4._0_8_);
          uStack_70 = 7;
          uStack_60 = auVar4._0_4_;
          uStack_5c = auVar4._4_4_;
          uStack_58 = auVar4._8_4_;
          uStack_54 = auVar4._12_4_;
          uStack_50 = uStack_60;
          uStack_4c = uStack_5c;
          uStack_48 = uStack_58;
          uStack_44 = uStack_54;
          FUN_00193a28(param_1,9,&uStack_70);
          uVar2 = 1;
        }
        else {
          auVar4 = _pextlw((long)param_2[4],(long)param_2[2]);
          puStack_6c = &DAT_003df4b8;
          auVar4 = _pextlw((long)param_2[3],auVar4._0_8_);
          uStack_50 = uStack_50 & 0xffffff00;
          uStack_60 = auVar4._0_4_;
          uStack_5c = auVar4._4_4_;
          uStack_58 = auVar4._8_4_;
          uStack_54 = auVar4._12_4_;
          uStack_70 = 2;
          uStack_40 = uStack_60;
          uStack_3c = uStack_5c;
          uStack_38 = uStack_58;
          uStack_34 = uStack_54;
          FUN_00193a28(param_1,8,&uStack_70);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


// ==== FUN_0019f408 @ 0019f408 ====

void FUN_0019f408(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*(char *)(*piVar2 + 0x290) != '\0') {
    FUN_001880d8(*piVar2 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar2 + 0x140);
  if (lVar1 != 0) {
    FUN_00180fe0(*piVar2 + 0x140);
  }
  FUN_00193a28(param_1,3,0);
  return;
}


// ==== FUN_0019f470 @ 0019f470 ====

void FUN_0019f470(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  float fVar5;
  undefined4 uStack_40;
  undefined *puStack_3c;
  undefined4 uStack_38;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if (lVar1 == 0) {
    FUN_00193a28(param_1,0x16,0);
  }
  else {
    lVar1 = FUN_0018ab08(*piVar4 + 0x150);
    iVar2 = *piVar4;
    if (lVar1 == 0) {
      if ((*(char *)(iVar2 + 0xd27) == '\0') || (lVar1 = FUN_00189208(iVar2 + 0x150), lVar1 != 0)) {
        uVar3 = 0x3b;
      }
      else {
        uVar3 = 0x11;
      }
    }
    else {
      fVar5 = (float)FUN_001891a8(iVar2 + 0x150);
      if (10.0 < fVar5) {
        if (param_2 != 0) {
          puStack_3c = &DAT_003de328;
          uStack_40 = 6;
          uStack_38 = 0x40a00000;
          FUN_00193a28(param_1,0x2f,&uStack_40);
          return;
        }
        iVar2 = *piVar4;
      }
      else {
        iVar2 = *piVar4;
      }
      if ((*(byte *)(iVar2 + 0xd60) >> 4 & 1) == 0) {
        uVar3 = 0x11;
      }
      else {
        uVar3 = 0x2c;
      }
    }
    FUN_00193a28(param_1,uVar3,0);
  }
  return;
}


// ==== FUN_0019f590 @ 0019f590 ====

void FUN_0019f590(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 uVar2;
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int *piVar4;
  float fVar5;
  
  piVar4 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar4 + 0x150);
  if (((lVar1 == 0) || (fVar5 = (float)FUN_00189310(*piVar4 + 0x150), 3.0 < fVar5)) ||
     (lVar1 = FUN_00188350(*piVar4 + 0x290), lVar1 != 0)) {
    FUN_00193990(param_1,0);
  }
  else if (*(char *)(*piVar4 + 0x291) == '\0') {
    uVar2 = FUN_00189048(*piVar4 + 0x150);
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = uVar2;
    auVar3 = _por(in_zero_qw,auVar3);
    FUN_0017e428(*piVar4 + 0x650,auVar3._0_8_);
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_0019f650 @ 0019f650 ====

void FUN_0019f650(int *param_1)

{
  FUN_00193980();
  FUN_00187fe0(*param_1 + 0x290,2);
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 1;
  FUN_001825b0(*param_1 + 0x810);
  return;
}


// ==== FUN_0019f6a0 @ 0019f6a0 ====

void FUN_0019f6a0(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_0019f6e0 @ 0019f6e0 ====

void FUN_0019f6e0(undefined8 param_1)

{
  char cVar1;
  undefined1 in_zero_qw [16];
  undefined4 uVar2;
  long lVar3;
  undefined8 extraout_v0_udw;
  int iVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  piVar6 = (int *)param_1;
  lVar3 = FUN_00188f10(*piVar6 + 0x150);
  if ((lVar3 == 0) || (fVar7 = (float)FUN_00189310(*piVar6 + 0x150), 6.0 < fVar7)) {
LAB_0019f7b4:
    FUN_00193990(param_1,0);
    return;
  }
  if (*(char *)(*piVar6 + 0x291) != '\0') {
    FUN_00193990(param_1,1);
    return;
  }
  lVar3 = FUN_00188f10(*piVar6 + 0x150);
  if (lVar3 == 0) {
    cVar1 = *(char *)((int)piVar6 + 0x21);
  }
  else {
    uVar2 = FUN_0018a6f0(*piVar6 + 0x150);
    auVar9 = _qmtc2(uVar2);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar6 + 0x7c) + 0xa0));
    auVar5 = _vsub(auVar9,auVar5);
    auVar5 = _vmul(auVar5,auVar5);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar8,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (121.0 < auVar5._0_4_) goto LAB_0019f7b4;
    cVar1 = *(char *)((int)piVar6 + 0x21);
  }
  if (cVar1 == '\0') {
    iVar4 = *piVar6;
    if ((char)piVar6[10] == '\0') {
      lVar3 = FUN_00189490(iVar4 + 0x150);
      iVar4 = *piVar6;
      if (lVar3 == 0) {
        fVar7 = (float)FUN_001891a8(iVar4 + 0x150);
        iVar4 = *piVar6;
        if (2.0 <= fVar7) {
          lVar3 = FUN_00188350(iVar4 + 0x290);
          if (lVar3 == 0) goto LAB_0019f834;
          iVar4 = *piVar6;
        }
      }
    }
    FUN_001863a0(iVar4 + 0x90);
    FUN_0019fa98(param_1);
  }
LAB_0019f834:
  lVar3 = FUN_0019f9d8(param_1);
  if (lVar3 == 0) {
    iVar4 = *piVar6;
  }
  else {
    FUN_0019f930(param_1);
    iVar4 = *piVar6;
  }
  lVar3 = FUN_0018ab08(iVar4 + 0x150);
  if (lVar3 != 0) {
    auVar5._0_8_ = FUN_00189048(*piVar6 + 0x150);
    auVar5._8_8_ = extraout_v0_udw;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_0017e428(*piVar6 + 0x650,auVar5._0_8_);
  }
  return;
}


// ==== FUN_0019f890 @ 0019f890 ====

void FUN_0019f890(undefined8 param_1)

{
  int *piVar1;
  
  FUN_00193980();
  piVar1 = (int *)param_1;
  FUN_00187fe0(*piVar1 + 0x290,0);
  *(undefined1 *)(*(int *)(*piVar1 + 0x694) + 0x30) = 0;
  FUN_00173690(piVar1 + 9);
  *(undefined1 *)(piVar1 + 10) = 0;
  *(undefined1 *)((int)piVar1 + 0x21) = 0;
  FUN_0019fa98(param_1);
  FUN_0019f9d8(param_1);
  return;
}


// ==== FUN_0019f8f0 @ 0019f8f0 ====

void FUN_0019f8f0(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  return;
}


// ==== FUN_0019f930 @ 0019f930 ====

void FUN_0019f930(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)param_1;
  cVar1 = FUN_00176f00(*piVar3 + 0x1fcc);
  if ((cVar1 != '\0') && (lVar2 = FUN_0018ab08(*piVar3 + 0x150), lVar2 != 0)) {
    lVar2 = FUN_001892c8(*piVar3 + 0x150);
    if ((lVar2 != 0) && (lVar2 = FUN_00173610(piVar3 + 9), lVar2 != 0)) {
      FUN_0019fb20(param_1);
      uVar4 = FUN_0016de70(0x3f800000,0x40800000,DAT_0040f4d4);
      FUN_00173640(uVar4,piVar3 + 9);
    }
  }
  return;
}


// ==== FUN_0019f9d8 @ 0019f9d8 ====

undefined4 FUN_0019f9d8(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if ((char)param_1[8] == '\0') {
    *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x30) = 0;
    lVar2 = FUN_0018ab08(*param_1 + 0x150);
    if (lVar2 == 0) {
      lVar2 = FUN_00182410(*param_1 + 0x810,param_1[4],0,0);
    }
    else {
      lVar2 = FUN_001823b0(*param_1 + 0x810,param_1[4]);
    }
    if (((lVar2 == 0) || (lVar2 = FUN_001829a8(*param_1 + 0x810), lVar2 == 0)) ||
       (lVar2 = FUN_001829e8(*param_1 + 0x810), lVar2 != 0)) {
      uVar1 = 1;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x21) = 0;
  }
  return uVar1;
}


// ==== FUN_0019fa98 @ 0019fa98 ====

undefined4 FUN_0019fa98(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *(undefined1 *)(param_1 + 10) = 0;
  uVar3 = 0;
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    lVar4 = FUN_00185f18(*param_1 + 0x90);
    if (lVar4 == 0) {
      iVar6 = *(int *)(*param_1 + 0x7c);
      iVar8 = *(int *)(iVar6 + 0xa0);
      iVar5 = *(int *)(iVar6 + 0xa4);
      iVar7 = *(int *)(iVar6 + 0xa8);
      iVar6 = *(int *)(iVar6 + 0xac);
      *(undefined1 *)(param_1 + 8) = 1;
      param_1[4] = iVar8;
      param_1[5] = iVar5;
      param_1[6] = iVar7;
      param_1[7] = iVar6;
    }
    else {
      puVar2 = (undefined8 *)FUN_00185fe8(*param_1 + 0x90);
      uVar1 = *puVar2;
      iVar6 = *(int *)(puVar2 + 1);
      iVar8 = *(int *)((int)puVar2 + 0xc);
      param_1[4] = (int)uVar1;
      param_1[5] = (int)((ulong)uVar1 >> 0x20);
      param_1[6] = iVar6;
      param_1[7] = iVar8;
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(*param_1 + 0x111);
    }
    uVar3 = 1;
    *(undefined1 *)((int)param_1 + 0x21) = 1;
  }
  return uVar3;
}


// ==== FUN_0019fb20 @ 0019fb20 ====

void FUN_0019fb20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  
  uVar2 = FUN_00189048(*param_1 + 0x150);
  auVar5 = _qmtc2(uVar2);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  iVar1 = *(int *)(*param_1 + 0x7c);
  auVar9 = _vmove(auVar7);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar6 = _vsub(auVar5,auVar6);
  auVar5 = _vmul(auVar6,auVar6);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (2.3283064e-10 <= auVar5._0_4_) {
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
    auVar5 = _vmul(auVar6,auVar6);
    _vaddabc(auVar5,auVar5);
    auVar7 = _vmaddbc(auVar9,auVar5);
    auVar5 = _vmul(auVar8,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    uVar2 = _vwaitq();
    auVar7 = _vmulq(auVar6,uVar2);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar9,auVar5);
    auVar8 = _vmove(auVar8);
    auVar6 = _vmul(auVar7,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar2 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar2);
    _vmulq(auVar5,uVar2);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar9,auVar6);
    auVar5 = _vmove(auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    uVar2 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar2);
    _vmulq(auVar6,uVar2);
    auVar6 = _vsubbc(in_vf0,in_vf0);
    auVar5 = _vmul(auVar5,auVar8);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    auVar5 = _vmax(auVar5,auVar6);
    auVar5 = _vminibc(auVar5,in_vf0);
    auVar5 = _qmfc2(auVar5._0_4_);
    fVar4 = (float)FUN_0029e0d8(auVar5._0_4_);
    if (fVar4 * 57.29578 <= 35.0) {
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar6 = _qmtc2(0x3f800000);
      auVar5 = _vmulbc(auVar5,auVar6);
      auStack_50 = _sqc2(auVar5);
      lVar3 = FUN_0016dfb0(0x3f000000,DAT_0040f4d4);
      auVar5 = _lqc2(auStack_50);
      if (lVar3 != 0) {
        auVar5 = _vsub(in_vf0,auVar5);
        auStack_50 = _sqc2(auVar5);
      }
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar6 = _lqc2(auStack_50);
      auVar5 = _vadd(auVar5,auVar6);
      auVar5 = _sqc2(auVar5);
      uStack_40 = auVar5._0_4_;
      lVar3 = FUN_00182ba0(*param_1 + 0x810,uStack_40);
      if (lVar3 == 0) {
        auVar6 = _lqc2(auStack_50);
        auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
        auVar6 = _vsub(in_vf0,auVar6);
        auVar5 = _vadd(auVar5,auVar6);
        auVar5 = _sqc2(auVar5);
        uStack_40 = auVar5._0_4_;
        lVar3 = FUN_00182ba0(*param_1 + 0x810,uStack_40,1);
        if (lVar3 != 0) {
          FUN_00182320(*param_1 + 0x810,uStack_40,1);
        }
      }
      else {
        FUN_00182320(*param_1 + 0x810,uStack_40);
      }
    }
  }
  return;
}


// ==== FUN_0019fd48 @ 0019fd48 ====

undefined8 FUN_0019fd48(int *param_1,int *param_2)

{
  long lVar1;
  
  if ((*param_2 == 4) && (lVar1 = FUN_0018d608(*param_1 + 0xd10), lVar1 != 0)) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return 0;
}


// ==== FUN_0019fd98 @ 0019fd98 ====

void FUN_0019fd98(undefined8 param_1)

{
  if (*(char *)(*(int *)(*(int *)param_1 + 0x694) + 0x3b) != '\x01') {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_0019fdd0 @ 0019fdd0 ====

void FUN_0019fdd0(int *param_1)

{
  FUN_00193980();
  *(undefined1 *)(*(int *)(*param_1 + 0x694) + 0x3b) = 1;
  return;
}


// ==== FUN_0019fe08 @ 0019fe08 ====

void FUN_0019fe08(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_0019fe28 @ 0019fe28 ====

void FUN_0019fe28(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined8 extraout_v0_udw;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  piVar3 = (int *)param_1;
  fVar4 = (float)FUN_001891a8(*piVar3 + 0x150);
  iVar2 = *piVar3;
  if (fVar4 < 1.0) {
    FUN_001825b0(iVar2 + 0x810);
    FUN_00193990(param_1,1);
    iVar2 = *piVar3;
  }
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(*(undefined1 (*) [16])(piVar3 + 4));
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x7c) + 0xa0));
  auVar5 = _vsub(auVar5,auVar6);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (auVar5._0_4_ < 1.0) {
    FUN_001825b0(iVar2 + 0x810);
    FUN_00193990(param_1,1);
  }
  lVar1 = FUN_00173610(piVar3 + 9);
  if (lVar1 == 0) {
    iVar2 = *piVar3;
  }
  else {
    FUN_001825b0(*piVar3 + 0x810);
    FUN_00193990(param_1,1);
    iVar2 = *piVar3;
  }
  auVar5._0_8_ = FUN_00189048(iVar2 + 0x150);
  auVar5._8_8_ = extraout_v0_udw;
  auVar5 = _por(in_zero_qw,auVar5);
  FUN_0017e428(iVar2 + 0x650,auVar5._0_8_);
  return;
}


// ==== FUN_0019ff20 @ 0019ff20 ====

void FUN_0019ff20(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int in_v0_udw;
  int in_register_0000002c;
  int *piVar4;
  
  FUN_00193980();
  piVar4 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar4 + 0x150);
  if (lVar2 == 0) {
    FUN_00193990(param_1,0);
  }
  else {
    uVar3 = FUN_00189048(*piVar4 + 0x150);
    piVar4[4] = (int)uVar3;
    piVar4[5] = (int)((ulong)uVar3 >> 0x20);
    piVar4[6] = in_v0_udw;
    piVar4[7] = in_register_0000002c;
    piVar4[8] = 0x3f800000;
    FUN_001825b0(*piVar4 + 0x810);
    cVar1 = FUN_00182ba0(*piVar4 + 0x810,*(undefined8 *)(piVar4 + 4));
    if (cVar1 == '\x01') {
      FUN_00173640(0x41200000,piVar4 + 9);
      FUN_001823b0(*piVar4 + 0x810,*(undefined8 *)(piVar4 + 4),1);
    }
    else {
      FUN_00193990(param_1,0);
      FUN_00173640(0x41200000,piVar4 + 9);
    }
  }
  return;
}


// ==== FUN_0019fff8 @ 0019fff8 ====

void FUN_0019fff8(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_001a0018 @ 001a0018 ====

void FUN_001a0018(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 in_zero_qw [16];
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 extraout_v0_udw;
  undefined4 uVar9;
  undefined8 extraout_v0_udw_00;
  undefined8 extraout_v0_udw_01;
  int iVar10;
  int *piVar11;
  int *piVar12;
  float fVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_50 [16];
  
  bVar2 = false;
  piVar11 = (int *)param_1;
  lVar5 = FUN_00188f10(*piVar11 + 0x150);
  if ((lVar5 == 0) || (fVar13 = (float)FUN_00189310(*piVar11 + 0x150), 3.0 < fVar13))
  goto LAB_001a01e4;
  uVar6 = FUN_00189048(*piVar11 + 0x150);
  uVar8 = (undefined4)extraout_v0_udw;
  uVar9 = (undefined4)((ulong)extraout_v0_udw >> 0x20);
  pauVar1 = (undefined1 (*) [16])(*(int *)(*piVar11 + 0x7c) + 0xa0);
  auVar3 = *pauVar1;
  auVar15 = *pauVar1;
  auVar17 = *pauVar1;
  if ((char)piVar11[0xf] == '\0') {
LAB_001a00d0:
    piVar11[0xe] = (int)((float)piVar11[0xe] + *(float *)(DAT_0040f4d0 + 0x1c));
    cVar4 = FUN_00176f00(*piVar11 + 0x1fcc);
    auVar17 = _lqc2(auVar17);
    if (cVar4 == '\0') {
      auVar17 = _vaddbc(in_vf0,in_vf0);
      auStack_50 = _sqc2(auVar17);
      if (bVar2) {
        auVar17 = _lqc2(auVar15);
        goto LAB_001a0110;
      }
    }
    else {
LAB_001a0110:
      auVar14 = _lqc2(*(undefined1 (*) [16])(piVar11 + 4));
      auVar15._8_4_ = uVar8;
      auVar15._0_8_ = uVar6;
      auVar15._12_4_ = uVar9;
      auVar16 = _lqc2(auVar15);
      auVar15 = _vsub(auVar14,auVar17);
      auVar17 = _vsub(auVar16,auVar17);
      auVar17 = _vmul(auVar17,auVar15);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      _vaddabc(auVar17,auVar17);
      auVar17 = _vmaddbc(auVar14,auVar17);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar17 = _qmfc2(auVar17._0_4_);
      auVar15 = _vmul(auVar15,auVar15);
      _vaddabc(auVar15,auVar15);
      auVar15 = _vmaddbc(auVar14,auVar15);
      auVar15 = _qmfc2(auVar15._0_4_);
      auStack_50 = _sqc2(auVar14);
      if ((auVar17._0_4_ <= 0.0) || (bVar2 = false, auVar15._0_4_ < (float)piVar11[0xd])) {
        bVar2 = true;
      }
      iVar10 = *piVar11;
      if (bVar2) {
        auVar17._0_8_ = FUN_001890d0(piVar11[0xe],iVar10 + 0x150);
        auVar17._8_8_ = extraout_v0_udw_00;
        auVar15 = _por(in_zero_qw,auVar17);
        piVar11[4] = (int)auVar17._0_8_;
        piVar11[5] = (int)((ulong)auVar17._0_8_ >> 0x20);
        piVar11[6] = (int)extraout_v0_udw_00;
        piVar11[7] = (int)((ulong)extraout_v0_udw_00 >> 0x20);
        uVar7 = FUN_0018d950(*piVar11 + 0xd10,auVar15._0_8_);
        piVar11[4] = (int)uVar7;
        piVar11[5] = (int)((ulong)uVar7 >> 0x20);
        piVar11[6] = (int)extraout_v0_udw_01;
        piVar11[7] = (int)((ulong)extraout_v0_udw_01 >> 0x20);
        iVar10 = *piVar11;
      }
      FUN_00182ba0(iVar10 + 0x810);
      cVar4 = FUN_00182410(*piVar11 + 0x810);
      if (cVar4 != '\x01') {
LAB_001a01e4:
        FUN_00193990(param_1,0);
        return;
      }
      piVar11[0xe] = 0;
    }
    piVar12 = piVar11 + 0xc;
    lVar5 = FUN_00173610(piVar12);
    auVar14._8_4_ = uVar8;
    auVar14._0_8_ = uVar6;
    auVar14._12_4_ = uVar9;
    auVar17 = _lqc2(auVar14);
    if (lVar5 != 0) {
      FUN_00173640(0x3f000000,piVar12);
      cVar4 = FUN_001a04a8(param_1);
      *(char *)(piVar11 + 0xf) = cVar4;
      if (cVar4 == '\0') {
        FUN_00173640(0x40800000,piVar12);
      }
      goto LAB_001a0240;
    }
  }
  else {
    lVar5 = FUN_00173610(piVar11 + 0xc);
    bVar2 = lVar5 != 0;
    if (bVar2) {
      FUN_00173640(0x40800000,piVar11 + 0xc);
      *(undefined1 *)(piVar11 + 0xf) = 0;
    }
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auStack_50 = _sqc2(auVar14);
    if ((char)piVar11[0xf] == '\0') goto LAB_001a00d0;
LAB_001a0240:
    auVar16._8_4_ = uVar8;
    auVar16._0_8_ = uVar6;
    auVar16._12_4_ = uVar9;
    auVar17 = _lqc2(auVar16);
  }
  auVar15 = _lqc2(auVar3);
  auVar17 = _vsub(auVar17,auVar15);
  auVar15 = _lqc2(auStack_50);
  auVar17 = _vmul(auVar17,auVar17);
  _vaddabc(auVar17,auVar17);
  auVar17 = _vmaddbc(auVar15,auVar17);
  auVar17 = _qmfc2(auVar17._0_4_);
  if (auVar17._0_4_ < (float)piVar11[0xd]) {
    FUN_00193990(param_1,1);
    return;
  }
  if (*(char *)(*piVar11 + 0x291) == '\0') {
    iVar10 = *piVar11;
  }
  else {
    FUN_001880d8();
    iVar10 = *piVar11;
  }
  if (*(char *)(iVar10 + 0x290) == '\0') {
    lVar5 = FUN_00188f10(iVar10 + 0x150);
    iVar10 = *piVar11;
    if (lVar5 != 0) {
      lVar5 = FUN_001891c0(iVar10 + 0x150);
      iVar10 = *piVar11;
      if (lVar5 != 0) {
        lVar5 = FUN_0018ab08(iVar10 + 0x150);
        if (lVar5 != 0) {
          FUN_00187fe0(*piVar11 + 0x290,0);
        }
        iVar10 = *piVar11;
      }
    }
  }
  else {
    lVar5 = FUN_00188f10(iVar10 + 0x150);
    iVar10 = *piVar11;
    if (lVar5 != 0) {
      lVar5 = FUN_001891c0(iVar10 + 0x150);
      iVar10 = *piVar11;
      if (lVar5 != 0) {
        lVar5 = FUN_0018ab08(iVar10 + 0x150);
        iVar10 = *piVar11;
        if (lVar5 != 0) goto LAB_001a0338;
      }
    }
    FUN_001880d8(iVar10 + 0x290);
    iVar10 = *piVar11;
  }
LAB_001a0338:
  FUN_0017e428(iVar10 + 0x650);
  return;
}


// ==== FUN_001a0360 @ 001a0360 ====

void FUN_001a0360(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  char cVar2;
  undefined8 uVar3;
  int in_v0_udw;
  int in_register_0000002c;
  undefined1 auVar4 [16];
  int *piVar5;
  float fVar6;
  
  FUN_00193980();
  if ((param_2 == 0) || (*(int *)param_2 != 6)) {
    fVar6 = 5.0;
  }
  else {
    fVar6 = (float)((int *)param_2)[2];
    fVar6 = fVar6 * fVar6;
  }
  piVar5 = (int *)param_1;
  piVar5[0xd] = (int)fVar6;
  FUN_00173640(0x40800000,piVar5 + 0xc);
  piVar5[0xe] = 0;
  uVar3 = FUN_001890d0(*(float *)(DAT_0040f4d0 + 0x1c) * 8.0,*piVar5 + 0x150);
  auVar4._8_4_ = in_v0_udw;
  auVar4._0_8_ = uVar3;
  auVar4._12_4_ = in_register_0000002c;
  auVar4 = _por(in_zero_qw,auVar4);
  *(undefined8 *)(piVar5 + 4) = uVar3;
  piVar5[6] = in_v0_udw;
  piVar5[7] = in_register_0000002c;
  uVar3 = FUN_0018d950(*piVar5 + 0xd10,auVar4._0_8_);
  auVar1._8_4_ = in_v0_udw;
  auVar1._0_8_ = uVar3;
  auVar1._12_4_ = in_register_0000002c;
  auVar4 = _por(in_zero_qw,auVar1);
  *(undefined8 *)(piVar5 + 4) = uVar3;
  piVar5[6] = in_v0_udw;
  piVar5[7] = in_register_0000002c;
  cVar2 = FUN_00182410(*piVar5 + 0x810,auVar4._0_8_,0,0);
  if (cVar2 == '\x01') {
    *(undefined1 *)(*(int *)(*piVar5 + 0x694) + 0x30) = 0;
    FUN_001825b0(*piVar5 + 0x810);
    *(undefined1 *)(piVar5 + 0xf) = 0;
  }
  else {
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_001a0468 @ 001a0468 ====

void FUN_001a0468(undefined8 param_1)

{
  if (*(char *)(*(int *)param_1 + 0x290) != '\0') {
    FUN_001880d8(*(int *)param_1 + 0x290);
  }
  FUN_00193988(param_1);
  return;
}


// ==== FUN_001a04a8 @ 001a04a8 ====

undefined8 FUN_001a04a8(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  
  uVar1 = FUN_00189048(*param_1 + 0x150);
  auVar6 = _qmtc2(uVar1);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  iVar4 = *(int *)(*param_1 + 0x7c);
  auVar10 = _vmove(auVar8);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
  auVar7 = _vsub(auVar6,auVar7);
  auVar6 = _vmul(auVar7,auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  uVar3 = 0;
  if (2.3283064e-10 <= auVar6._0_4_) {
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x90));
    auVar6 = _vmul(auVar7,auVar7);
    _vaddabc(auVar6,auVar6);
    auVar8 = _vmaddbc(auVar10,auVar6);
    auVar6 = _vmul(auVar9,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar1 = _vwaitq();
    auVar8 = _vmulq(auVar7,uVar1);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar10,auVar6);
    auVar9 = _vmove(auVar9);
    auVar7 = _vmul(auVar8,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    uVar1 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar1);
    _vmulq(auVar6,uVar1);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar10,auVar7);
    auVar6 = _vmove(auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar1 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar1);
    _vmulq(auVar7,uVar1);
    auVar7 = _vsubbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar9);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _vmax(auVar6,auVar7);
    auVar6 = _vminibc(auVar6,in_vf0);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar5 = (float)FUN_0029e0d8(auVar6._0_4_);
    uVar3 = 0;
    if (fVar5 * 57.29578 <= 35.0) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x70));
      auVar7 = _qmtc2(0x3f800000);
      auVar6 = _vmulbc(auVar6,auVar7);
      auStack_50 = _sqc2(auVar6);
      lVar2 = FUN_0016dfb0(0x3f000000,DAT_0040f4d4);
      auVar6 = _lqc2(auStack_50);
      if (lVar2 != 0) {
        auVar6 = _vsub(in_vf0,auVar6);
        auStack_50 = _sqc2(auVar6);
      }
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
      auVar7 = _lqc2(auStack_50);
      auVar6 = _vadd(auVar6,auVar7);
      auVar6 = _sqc2(auVar6);
      uStack_40 = auVar6._0_4_;
      lVar2 = FUN_00182ba0(*param_1 + 0x810,uStack_40);
      if (lVar2 == 0) {
        auVar7 = _lqc2(auStack_50);
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
        auVar7 = _vsub(in_vf0,auVar7);
        auVar6 = _vadd(auVar6,auVar7);
        auVar6 = _sqc2(auVar6);
        uStack_40 = auVar6._0_4_;
        lVar2 = FUN_00182ba0(*param_1 + 0x810,uStack_40);
        if (lVar2 == 0) {
          return 0;
        }
        iVar4 = *param_1;
      }
      else {
        iVar4 = *param_1;
      }
      FUN_00182320(iVar4 + 0x810,uStack_40,1);
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_001a06c8 @ 001a06c8 ====

void FUN_001a06c8(undefined8 param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  int *piVar5;
  
  piVar5 = (int *)param_1;
  lVar2 = FUN_00173610(piVar5 + 2);
  if (lVar2 == 0) {
    lVar2 = FUN_00188f10(*piVar5 + 0x150);
    if (lVar2 != 0) {
      iVar1 = *piVar5;
      uVar3 = FUN_00189048(iVar1 + 0x150);
      auVar4._8_8_ = in_v0_udw;
      auVar4._0_8_ = uVar3;
      auVar4 = _por(in_zero_qw,auVar4);
      FUN_0017e428(iVar1 + 0x650,auVar4._0_8_);
    }
  }
  else {
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_001a0738 @ 001a0738 ====

void FUN_001a0738(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar4 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  FUN_00193980();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  if (*(int *)(*param_1 + 0x850) != 0) {
    FUN_001825b0();
  }
  uStack_4c = 0;
  uStack_50 = 0x17;
  FUN_001a6330(*(undefined4 *)(*(int *)(*param_1 + 0x7c) + 0x330),&uStack_50);
  lVar2 = FUN_00188f10(*param_1 + 0x150);
  if (lVar2 != 0) {
    iVar1 = *param_1;
    uVar3 = FUN_00189048(iVar1 + 0x150);
    auVar4._8_8_ = in_v0_udw;
    auVar4._0_8_ = uVar3;
    auVar4 = _por(in_zero_qw,auVar4);
    FUN_0017e428(iVar1 + 0x650,auVar4._0_8_);
  }
  FUN_00173640(0x40133333,param_1 + 2);
  return;
}


// ==== FUN_001a0800 @ 001a0800 ====

void FUN_001a0800(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_001a0820 @ 001a0820 ====

void FUN_001a0820(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00193980();
  piVar2 = (int *)param_1;
  FUN_0018d610(*piVar2 + 0xd10);
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  piVar2[2] = 0;
  FUN_001a7188(*(undefined4 *)(*(int *)(*piVar2 + 0x7c) + 0x330));
  *(undefined1 *)(*piVar2 + 0x104) = 1;
  *(undefined1 *)(*piVar2 + 0x110) = 1;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x44) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x3c) = 0x40000000;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x68) = 0;
  iVar1 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar1 + 0x5c) = 0x40000000;
  FUN_001a0a30(param_1);
  return;
}


// ==== FUN_001a08e8 @ 001a08e8 ====

void FUN_001a08e8(void)

{
  FUN_001a0a30();
  return;
}


// ==== FUN_001a0908 @ 001a0908 ====

undefined4 FUN_001a0908(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)param_2;
  iVar1 = *piVar5;
  if (iVar1 < 0xe) {
    if (iVar1 < 0xc) {
      if (iVar1 != 9) {
        return 0;
      }
      FUN_00193990(param_1,1);
    }
    else {
      FUN_001a0a30(param_1);
    }
  }
  else {
    if (iVar1 != 0x15) {
      return 0;
    }
    piVar4 = (int *)param_1;
    if ((char)piVar5[2] == '\0') {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x754) == 2) {
        if (piVar4[2] == 0) {
          iVar1 = piVar5[6];
        }
        else if (*(int *)(piVar4[2] + 0x3a4) == *(int *)(*(int *)(iVar1 + 0x7c) + 0x3a4)) {
          iVar1 = piVar5[6];
        }
        else {
          FUN_001895a8(iVar1 + 0x150);
          iVar1 = piVar5[6];
        }
      }
      else {
        iVar1 = piVar5[6];
      }
    }
    else {
      iVar1 = piVar5[6];
    }
    piVar4[2] = iVar1;
    uVar2 = *(undefined8 *)(piVar5 + 2);
    uVar3 = *(undefined8 *)(piVar5 + 4);
    iVar1 = piVar5[6];
    *(undefined8 *)(piVar4 + 3) = *(undefined8 *)piVar5;
    *(undefined8 *)(piVar4 + 5) = uVar2;
    *(undefined8 *)(piVar4 + 7) = uVar3;
    piVar4[9] = iVar1;
    FUN_001a0af0(param_1,param_2);
  }
  return 1;
}


// ==== FUN_001a0a30 @ 001a0a30 ====

void FUN_001a0a30(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uStack_30;
  undefined *puStack_2c;
  int *piStack_28;
  
  piVar4 = (int *)param_1;
  lVar2 = FUN_0017e770(*piVar4 + 0x650);
  if (lVar2 == 0) {
    lVar2 = FUN_001580c0(*(undefined4 *)(*(int *)(*piVar4 + 0x7c) + 0x2a4));
    if (lVar2 != 0) {
      FUN_00193a28(param_1,3,0);
      return;
    }
    iVar1 = piVar4[2];
  }
  else {
    iVar1 = piVar4[2];
  }
  if (iVar1 == 0) {
    uVar3 = FUN_0018d6c0(*piVar4 + 0xd10);
    FUN_00193a28(param_1,uVar3,0);
  }
  else {
    piStack_28 = piVar4 + 3;
    puStack_2c = &DAT_003dff80;
    uStack_30 = 0;
    uVar3 = FUN_0018d6c0(*piVar4 + 0xd10);
    FUN_00193a28(param_1,uVar3,&uStack_30);
  }
  return;
}


// ==== FUN_001a0af0 @ 001a0af0 ====

void FUN_001a0af0(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined4 uStack_40;
  undefined *puStack_3c;
  int iStack_38;
  
  lVar1 = FUN_0018d6f8(*(int *)param_1 + 0xd10,*(undefined1 *)(param_2 + 8));
  if (lVar1 == 0x4a) {
    FUN_001a0a30(param_1);
  }
  else {
    puStack_3c = &DAT_003dff80;
    uStack_40 = 0;
    iStack_38 = param_2;
    FUN_00193a28(param_1,lVar1,&uStack_40);
  }
  return;
}


// ==== FUN_001a0b88 @ 001a0b88 ====

void FUN_001a0b88(undefined8 param_1)

{
  FUN_00193980();
  *(undefined4 *)((int)param_1 + 8) = 2;
  FUN_001a0c18(param_1);
  return;
}


// ==== FUN_001a0bc0 @ 001a0bc0 ====

void FUN_001a0bc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (0 < param_2) {
    if (param_2 < 3) {
      FUN_00193990(param_1,param_3);
      return;
    }
    if (param_2 == 0xc) {
      FUN_001a0c18();
      return;
    }
  }
  FUN_001a0c18();
  return;
}


// ==== FUN_001a0c18 @ 001a0c18 ====

void FUN_001a0c18(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = (int *)param_1;
  lVar2 = FUN_00180bc0(*piVar5 + 0xb30);
  iVar3 = *piVar5;
  if (lVar2 == 0) {
    cVar1 = FUN_00173610(iVar3 + 0xc78);
    uVar4 = 0xc;
    if (cVar1 != '\0') {
      piVar5[2] = 0;
      goto LAB_001a0cc4;
    }
    iVar3 = *piVar5;
  }
  lVar2 = FUN_00188f10(iVar3 + 0x150);
  if ((lVar2 == 0) ||
     ((lVar2 = FUN_0018ddd8(*piVar5 + 0xc94), lVar2 != 0 &&
      (lVar2 = FUN_0018ab08(*piVar5 + 0x150), lVar2 == 0)))) {
    piVar5[2] = 1;
    FUN_00193a60(0x40000000,param_1,1);
    FUN_001a0dc8(param_1);
    lVar2 = FUN_0018ad30(*piVar5 + 0xd18);
    if (lVar2 == 0) {
      iVar3 = *piVar5;
      uVar6 = FUN_00180a10(iVar3 + 0xb30);
      FUN_0017e488(uVar6,iVar3 + 0x650);
    }
    FUN_00193a28(param_1,1,0);
    return;
  }
  piVar5[2] = 1;
  FUN_00193a60(0x40000000,param_1,1);
  FUN_001a0dc8(param_1);
  uVar4 = 2;
LAB_001a0cc4:
  FUN_00193a28(param_1,uVar4,0);
  return;
}


// ==== FUN_001a0d48 @ 001a0d48 ====

bool FUN_001a0d48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 5) {
    FUN_001a0c18();
  }
  return iVar1 == 5;
}


// ==== FUN_001a0d80 @ 001a0d80 ====

void FUN_001a0d80(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00193ac8();
  }
  else if (*(int *)(param_1 + 8) == 1) {
    FUN_001a0c18();
  }
  return;
}


// ==== FUN_001a0dc8 @ 001a0dc8 ====

void FUN_001a0dc8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc30) + 0x74);
  if (iVar2 == 1) {
    *(undefined1 *)(*(int *)(iVar1 + 0x694) + 0x30) = 0;
  }
  else if ((iVar2 < 2) && (iVar2 == 0)) {
    *(undefined1 *)(*(int *)(iVar1 + 0x694) + 0x30) = 1;
    return;
  }
  return;
}


// ==== FUN_001a0e10 @ 001a0e10 ====

void FUN_001a0e10(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 in_v1_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_a3_udw;
  int *piVar5;
  
  FUN_00193980();
  piVar5 = (int *)param_1;
  piVar5[3] = 0;
  if (((param_2 != 0) && (*(int *)param_2 == 0)) &&
     (piVar1 = (int *)((int *)param_2)[2], *piVar1 == 0x15)) {
    piVar5[3] = piVar1[6];
  }
  iVar2 = FUN_00193b98(param_1);
  auVar3._0_8_ = (long)*(int *)(*piVar5 + 0x754);
  auVar3._8_8_ = in_v1_udw;
  auVar4._8_8_ = in_a3_udw;
  auVar4._0_8_ = 2;
  auVar4 = _pminw(auVar3,auVar4);
  auVar4 = _pextlw(0,auVar4._0_8_);
  *(int *)(iVar2 + 0x84) = auVar4._0_4_;
  *(undefined1 *)(*piVar5 + 0x104) = 1;
  FUN_00181f48(0,0x3f800000,*piVar5 + 0xc80,0,4);
  *(undefined1 *)(piVar5 + 2) = 0;
  *(undefined1 *)((int)piVar5 + 10) = 0;
  *(undefined1 *)((int)piVar5 + 9) = 1;
  FUN_001a0f48(param_1);
  return;
}


// ==== FUN_001a0ed0 @ 001a0ed0 ====

void FUN_001a0ed0(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0xe:
  case 0x19:
  case 0x3f:
    FUN_00193a60(0x40400000,param_1,1);
    FUN_001a0f48(param_1);
    break;
  default:
    FUN_001a0f48(param_1);
  }
  return;
}


// ==== FUN_001a0f48 @ 001a0f48 ====

void FUN_001a0f48(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  if ((*(byte *)(*piVar6 + 0xd60) >> 4 & 1) == 0) {
LAB_001a1048:
    iVar3 = FUN_00193b98(param_1);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    FUN_00193a28(param_1,0x17,0);
  }
  else {
    if (*(char *)((int)piVar6 + 9) == '\0') {
      *(undefined1 *)((int)piVar6 + 9) = 1;
      FUN_00193a28(param_1,0x1a,0);
      return;
    }
    if (*(char *)((int)piVar6 + 10) == '\0') {
      lVar4 = FUN_00188f10(*piVar6 + 0x150);
      if (lVar4 == 0) {
        cVar1 = (char)piVar6[2];
        goto LAB_001a101c;
      }
      lVar4 = FUN_00189208(*piVar6 + 0x150);
      if (lVar4 == 0) {
LAB_001a1018:
        cVar1 = (char)piVar6[2];
        goto LAB_001a101c;
      }
      iVar3 = *piVar6;
      *(undefined1 *)((int)piVar6 + 10) = 1;
      puVar2 = (undefined8 *)FUN_001893a0(iVar3 + 0x150);
      lVar4 = FUN_0018d368(iVar3 + 0xd10,*puVar2);
      uVar5 = 0x3f;
      if (lVar4 == 0) {
        lVar4 = FUN_00185f28(*piVar6 + 0x90,0x3f);
        if (lVar4 == 0) goto LAB_001a1018;
        uVar5 = 0xe;
      }
    }
    else {
      cVar1 = (char)piVar6[2];
LAB_001a101c:
      if (cVar1 != '\0') goto LAB_001a1048;
      *(undefined1 *)(piVar6 + 2) = 1;
      uVar5 = 0x19;
    }
    FUN_00193a28(param_1,uVar5,0);
    FUN_00193ac8(param_1);
  }
  return;
}


// ==== FUN_001a1078 @ 001a1078 ====

bool FUN_001a1078(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0x13) {
    *(undefined1 *)((int)param_1 + 9) = 0;
    FUN_001a0f48(param_1);
  }
  return iVar1 == 0x13;
}


// ==== FUN_001a10b8 @ 001a10b8 ====

void FUN_001a10b8(int param_1)

{
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_001a0f48();
  return;
}


// ==== FUN_001a1100 @ 001a1100 ====

void FUN_001a1100(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  piVar3 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar3 + 0x150);
  if (lVar2 != 0) {
    FUN_00193990(param_1,1);
    return;
  }
  if ((*(byte *)(*piVar3 + 0xd60) >> 4 & 1) == 0) goto LAB_001a11e8;
  lVar2 = FUN_0018d368(*piVar3 + 0xd10,*(undefined8 *)(piVar3 + 4));
  if (lVar2 == 0) {
LAB_001a11c8:
    bVar1 = true;
  }
  else {
    lVar2 = FUN_00182d28(*piVar3 + 0x810);
    bVar1 = false;
    if (lVar2 != 0) {
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _lqc2(*(undefined1 (*) [16])(piVar3 + 4));
      auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(*piVar3 + 0x7c) + 0xa0));
      auVar4 = _vsub(auVar4,auVar5);
      auVar4 = _vmul(auVar4,auVar4);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar6,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      bVar1 = false;
      if (auVar4._0_4_ < 25.0) goto LAB_001a11c8;
    }
  }
  if (!bVar1) {
    lVar2 = FUN_001829a8(*piVar3 + 0x810);
    if ((lVar2 != 0) && (lVar2 = FUN_001829e8(*piVar3 + 0x810), lVar2 == 0)) {
      return;
    }
    lVar2 = FUN_001a12e0(param_1);
    if (lVar2 != 0) {
      return;
    }
    FUN_00193990(param_1,0);
    return;
  }
  lVar2 = FUN_001a12e0(param_1);
  if (lVar2 != 0) {
    return;
  }
LAB_001a11e8:
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_001a1250 @ 001a1250 ====

void FUN_001a1250(undefined8 param_1)

{
  long lVar1;
  
  FUN_00193980();
  *(undefined4 *)((int)param_1 + 8) = 0xffffffff;
  lVar1 = FUN_001a12e0(param_1);
  if (lVar1 == 0) {
    FUN_00193990(param_1,0);
  }
  return;
}


// ==== FUN_001a1298 @ 001a1298 ====

void FUN_001a1298(int *param_1)

{
  long lVar1;
  
  FUN_00193988();
  lVar1 = FUN_001829a8(*param_1 + 0x810);
  if (lVar1 == 0) {
    FUN_00182550(*param_1 + 0x810,0);
  }
  return;
}


// ==== FUN_001a12e0 @ 001a12e0 ====

undefined4 FUN_001a12e0(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar4 = param_1[2];
    while( true ) {
      if (iVar4 != -1) {
        FUN_00185b80(*param_1 + 0x6f0);
      }
      lVar2 = FUN_00185a70(0x40a00000,*(float *)(DAT_0040f4d0 + 0x20) - 5.0,*param_1 + 0x6f0,
                           *(undefined8 *)(*(int *)(*param_1 + 0x7c) + 0xa0));
      param_1[2] = (int)lVar2;
      if (lVar2 == -1) {
        return 0;
      }
      lVar2 = FUN_00185b50(*param_1 + 0x6f0,lVar2);
      if (lVar2 != 0) break;
      iVar4 = param_1[2];
    }
    iVar4 = (int)lVar2;
    if (*(int *)(iVar4 + 0x3a4) != *(int *)(*(int *)(*param_1 + 0x7c) + 0x3a4)) {
      uVar1 = *(undefined8 *)(iVar4 + 0xa0);
      iVar3 = *(int *)(iVar4 + 0xa8);
      iVar4 = *(int *)(iVar4 + 0xac);
      param_1[4] = (int)uVar1;
      param_1[5] = (int)((ulong)uVar1 >> 0x20);
      param_1[6] = iVar3;
      param_1[7] = iVar4;
      FUN_00182410(*param_1 + 0x810,uVar1,0,0);
      return 1;
    }
  } while( true );
}


// ==== FUN_001a13b8 @ 001a13b8 ====

void FUN_001a13b8(int *param_1)

{
  FUN_0017db98(*param_1 + 0x650,*(undefined8 *)(param_1 + 4));
  FUN_00182318(*param_1 + 0x810,0);
  return;
}


