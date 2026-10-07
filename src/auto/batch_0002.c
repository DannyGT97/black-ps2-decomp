// ==== FUN_0011afb0 @ 0011afb0 ====

undefined8 FUN_0011afb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_vf20 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 in_vuI;
  undefined4 uVar33;
  undefined1 auStack_430 [16];
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [16];
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined1 auStack_3b0 [8];
  float fStack_3a8;
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_1a0 [8];
  float fStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_170 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  
  iVar3 = (int)param_2;
  iVar1 = *(int *)(iVar3 + 400);
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
  auVar9 = _sqc2(auVar13);
  fVar5 = *(float *)(iVar1 + 0x7c0) * 2.6;
  fVar6 = *(float *)(iVar1 + 0x7c4) * 2.6;
  fVar5 = (float)((int)fVar5 * (uint)(-0.4 < fVar5) | (uint)(-0.4 >= fVar5) * -0x41333333);
  fVar6 = (float)((int)fVar6 * (uint)(-0.4 < fVar6) | (uint)(-0.4 >= fVar6) * -0x41333333);
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xe0));
  auVar8 = _qmtc2((int)fVar6 * (uint)(fVar6 < 0.4) | (uint)(fVar6 >= 0.4) * 0x3ecccccd);
  auVar14 = _vmulbc(auVar13,auVar8);
  auVar8 = _sqc2(auVar10);
  auVar13 = _qmtc2((int)fVar5 * (uint)(fVar5 < 0.4) | (uint)(fVar5 >= 0.4) * 0x3ecccccd);
  auVar11 = _vmulbc(auVar10,auVar13);
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x100));
  auStack_f0 = _sqc2(in_vf20);
  auVar13 = _vmove(auVar10);
  auVar13 = _vadd(auVar13,auVar14);
  _sqc2(auVar10);
  _sqc2(auVar13);
  auVar13 = _vadd(auVar13,auVar11);
  auVar13 = _sqc2(auVar13);
  lVar2 = FUN_0011af50(param_2,&uStack_190);
  auVar10 = _lqc2(auStack_f0);
  if (lVar2 == 0) {
    auVar14 = _lqc2(auVar13);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar11._4_4_ = uStack_18c;
    auVar11._0_4_ = uStack_190;
    auVar11._8_4_ = uStack_188;
    auVar11._12_4_ = uStack_184;
    auVar11 = _lqc2(auVar11);
    auVar11 = _vsub(auVar11,auVar14);
    auVar8 = _lqc2(auVar8);
    auVar14 = _lqc2(auVar9);
    auVar9 = _vmul(auVar8,auVar11);
    auVar8 = _vmul(auVar14,auVar11);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar15,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar15,auVar8);
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (0.09 < auVar9._0_4_ * auVar9._0_4_ + auVar8._0_4_ * auVar8._0_4_) {
      iVar1 = *(int *)(iVar3 + 400);
      *(undefined4 *)(iVar3 + 0x144) = 4;
      auStack_f0 = _sqc2(auVar10);
      FUN_001357b8(auStack_3b0,*(undefined4 *)(iVar3 + 0x194));
      FUN_0013dc00(0x40700000,0x3f000000,iVar1 + 2000,CONCAT44(uStack_37c,uStack_380),0);
      FUN_001354e0(*(int *)(iVar3 + 400),*(int *)(iVar3 + 400) + 2000);
      auVar10 = _lqc2(auStack_f0);
    }
    else {
      *(undefined4 *)(iVar3 + 0x144) = 2;
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 0x194) + 0x10);
    auStack_f0 = _sqc2(auVar10);
    (**(code **)(iVar1 + 0xa4))(auStack_3b0,*(int *)(iVar3 + 0x194) + (int)*(short *)(iVar1 + 0xa0))
    ;
    auVar10 = _lqc2(auStack_f0);
    uStack_190 = uStack_380;
    uStack_18c = uStack_37c;
    uStack_188 = uStack_378;
    uStack_184 = uStack_374;
  }
  auVar8 = _lqc2(auVar13);
  auVar27 = _vaddbc(in_vf0,in_vf0);
  auVar9._4_4_ = uStack_18c;
  auVar9._0_4_ = uStack_190;
  auVar9._8_4_ = uStack_188;
  auVar9._12_4_ = uStack_184;
  auVar9 = _lqc2(auVar9);
  auVar32 = _vmove(auVar8);
  auVar11 = _vsub(auVar9,auVar8);
  auVar9 = _vmul(auVar11,auVar11);
  _vaddabc(auVar9,auVar9);
  auVar8 = _vmaddbc(auVar27,auVar9);
  auVar9 = _pextlw(0,0);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  uVar33 = _vwaitq();
  auVar16 = _vmulq(auVar11,uVar33);
  auVar9 = _pextlw(0x3f800000,auVar9._0_8_);
  uStack_370 = auVar9._0_4_;
  auVar8 = _qmtc2(uStack_370);
  _vopmula(auVar8,auVar16);
  auVar11 = _vopmsub(auVar16,auVar8);
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x150));
  auVar8 = _vmul(auVar11,auVar11);
  _sqc2(auVar11);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar27,auVar8);
  uStack_36c = auVar9._4_4_;
  uStack_368 = auVar9._8_4_;
  uStack_364 = auVar9._12_4_;
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  uVar33 = _vwaitq();
  auVar17 = _vmulq(auVar11,uVar33);
  _sqc2(auVar12);
  _vopmula(auVar16,auVar17);
  auVar19 = _vopmsub(auVar17,auVar16);
  auStack_340 = _sqc2(auVar16);
  auStack_360 = _sqc2(auVar17);
  _auStack_3b0 = _sqc2(auVar17);
  auStack_390 = _sqc2(auVar16);
  _sqc2(auVar17);
  _sqc2(auVar16);
  auVar9 = _sqc2(auVar17);
  auVar8 = _sqc2(auVar16);
  auStack_350 = _sqc2(auVar19);
  auStack_3a0 = _sqc2(auVar19);
  _sqc2(auVar19);
  _sqc2(auVar32);
  auVar11 = _sqc2(auVar19);
  uStack_380 = (undefined4)uStack_330;
  uStack_37c = (undefined4)((ulong)uStack_330 >> 0x20);
  uStack_378 = uStack_328;
  uStack_374 = uStack_324;
  _vmove(auVar12);
  auVar31 = _vmove(auVar27);
  auVar30 = _qmtc2(0x3f800000);
  auVar15 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x160));
  auVar23 = _vaddbc(in_vf0,auVar15);
  _vmove(auVar23);
  _sqc2(auVar15);
  _vmove(auVar15);
  auVar20 = _vaddbc(in_vf0,auVar12);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x170));
  _vmove(auVar20);
  auVar21 = _vaddbc(in_vf0,auVar14);
  auVar22 = _vaddbc(in_vf0,auVar14);
  _sqc2(auVar14);
  _vmulabc(auVar17,auVar21);
  _vmaddabc(auVar19,auVar21);
  auVar24 = _vmaddbc(auVar16,auVar21);
  _vmulabc(auVar17,auVar22);
  _vmaddabc(auVar19,auVar22);
  auVar25 = _vmaddbc(auVar16,auVar22);
  _vmove(auVar14);
  auVar28 = _vsubbc(auVar24,auVar25);
  auVar29 = _vaddbc(in_vf0,auVar12);
  auVar18 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x180));
  _vmove(auVar29);
  auVar14 = _vmulbc(auVar22,auVar18);
  auVar26 = _vaddbc(in_vf0,auVar15);
  auVar15 = _vmulbc(auVar21,auVar18);
  auVar15 = _vadd(auVar15,auVar14);
  auVar14 = _vmulbc(auVar26,auVar18);
  auVar14 = _vadd(auVar15,auVar14);
  _sqc2(auVar23);
  auVar12 = _vsub(in_vf0,auVar14);
  _sqc2(auVar20);
  _vmulabc(auVar17,auVar26);
  _vmaddabc(auVar19,auVar26);
  auVar20 = _vmaddbc(auVar16,auVar26);
  _vmulabc(auVar17,auVar12);
  _vmaddabc(auVar19,auVar12);
  _vmaddabc(auVar16,auVar12);
  auVar17 = _vmaddbc(auVar32,in_vf0);
  auVar15 = _vaddbc(auVar24,auVar25);
  auVar14 = _vsubbc(auVar25,auVar20);
  _lqc2(auStack_140);
  _vaddbc(in_vf0,auVar14);
  auVar14 = _vsubbc(auVar20,auVar24);
  _vaddbc(in_vf0,auVar14);
  auVar15 = _vaddbc(auVar15,auVar20);
  auVar16 = _vaddbc(in_vf0,auVar28);
  _sqc2(auVar18);
  auVar14 = _vmul(auVar16,auVar16);
  _sqc2(auVar21);
  _vaddabc(auVar14,auVar14);
  auVar14 = _vmaddbc(auVar27,auVar14);
  _sqc2(auVar22);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar14);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  uVar33 = _vwaitq();
  auVar14 = _vmulq(auVar14,uVar33);
  _sqc2(auVar29);
  auVar14 = _qmfc2(auVar14._0_4_);
  auVar15 = _vsubbc(auVar15,auVar30);
  fVar5 = auVar14._0_4_;
  auVar14 = _qmfc2(auVar15._0_4_);
  _sqc2(auVar26);
  _sqc2(auVar12);
  fVar6 = auVar14._0_4_;
  auStack_2b0 = _sqc2(auVar17);
  auStack_260 = _sqc2(auVar24);
  auStack_250 = _sqc2(auVar25);
  auStack_240 = _sqc2(auVar20);
  auStack_230 = _sqc2(auVar17);
  auStack_2a0 = _sqc2(auVar24);
  auStack_290 = _sqc2(auVar25);
  auStack_280 = _sqc2(auVar20);
  auStack_270 = _sqc2(auVar17);
  auStack_2e0 = _sqc2(auVar24);
  auStack_2d0 = _sqc2(auVar25);
  auStack_2c0 = _sqc2(auVar20);
  if (0.0 < fVar5) {
    auVar14 = _qmtc2(1.0 / fVar5);
    auVar14 = _vmulbc(auVar16,auVar14);
    auStack_170 = _sqc2(auVar14);
  }
  else {
    auVar14 = _vadd(in_vf0,in_vf0);
    auStack_170 = _sqc2(auVar14);
    _auStack_1a0 = _sqc2(auVar14);
  }
  auStack_f0 = _sqc2(auVar10);
  auStack_e0 = _sqc2(auVar31);
  auStack_d0 = _sqc2(auVar32);
  fVar7 = (float)atan2f(fVar5,fVar6);
  _lqc2(auStack_f0);
  auVar10 = _lqc2(auStack_e0);
  auVar14 = _lqc2(auStack_d0);
  if ((fVar5 <= 0.01) && (auVar15 = _lqc2(auStack_2d0), fVar6 <= 0.0)) {
    auVar17 = _lqc2(auStack_2e0);
    auVar16 = _qmfc2(auVar17._0_4_);
    auVar12 = _sqc2(auVar15);
    auStack_1a0._4_4_ = auVar12._4_4_;
    auVar12 = _lqc2(auStack_2c0);
    if (auVar16._0_4_ <= (float)auStack_1a0._4_4_) {
      auVar16 = _sqc2(auVar15);
      auVar12 = _lqc2(auStack_2c0);
      auStack_1a0._4_4_ = auVar16._4_4_;
      auVar16 = _sqc2(auVar12);
      fStack_198 = auVar16._8_4_;
      if ((float)auStack_1a0._4_4_ <= fStack_198) goto LAB_0011b568;
      auVar16 = _qmtc2(0x3f800000);
      auVar18 = _vaddbc(auVar15,auVar12);
      auVar12 = _vaddbc(auVar15,auVar16);
      auVar16 = _vaddbc(in_vf0,auVar12);
      auVar12 = _vaddbc(auVar15,auVar17);
      auVar15 = _vaddbc(auVar16,auVar16);
      _vaddbc(in_vf0,auVar15);
      _vaddbc(in_vf0,auVar18);
      auVar15 = _vaddbc(in_vf0,auVar12);
    }
    else {
      auVar18 = _sqc2(auVar12);
      fStack_198 = auVar18._8_4_;
      if (auVar16._0_4_ <= fStack_198) {
LAB_0011b568:
        auVar16 = _qmtc2(0x3f800000);
        auVar17 = _vaddbc(auVar12,auVar17);
        auVar16 = _vaddbc(auVar12,auVar16);
        auVar12 = _vaddbc(auVar12,auVar15);
        auVar15 = _vaddbc(in_vf0,auVar16);
        auVar15 = _vaddbc(auVar15,auVar15);
        _vaddbc(in_vf0,auVar15);
        _vaddbc(in_vf0,auVar17);
        auVar15 = _vaddbc(in_vf0,auVar12);
      }
      else {
        auVar16 = _qmtc2(0x3f800000);
        auVar18 = _vaddbc(auVar17,auVar15);
        auVar15 = _vaddbc(auVar17,auVar16);
        auVar12 = _vaddbc(auVar17,auVar12);
        auVar15 = _vaddbc(in_vf0,auVar15);
        auVar15 = _vaddbc(auVar15,auVar15);
        _vaddbc(in_vf0,auVar15);
        _vaddbc(in_vf0,auVar18);
        auVar15 = _vaddbc(in_vf0,auVar12);
      }
    }
    auVar12 = _vmul(auVar15,auVar15);
    auVar16 = _vmove(auVar15);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar10,auVar12);
    _sqc2(auVar15);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar12);
    auVar15 = _qmfc2(auVar12._0_4_);
    _qmtc2(SQRT(auVar15._0_4_));
    uVar33 = _vwaitq();
    auVar15 = _vmulq(auVar16,uVar33);
    auStack_170 = _sqc2(auVar15);
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar23 = _vsub(in_vf0,in_vf0);
  auVar28 = _vaddbc(in_vf0,in_vf0);
  auVar29 = _vaddbc(in_vf0,in_vf0);
  auVar30 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _lqc2(auStack_2e0);
  auVar16 = _vmove(auVar28);
  auVar15 = _lqc2(auStack_2d0);
  auVar21 = _vsub(auVar16,auVar12);
  auVar12 = _vmove(auVar29);
  auVar22 = _vsub(auVar12,auVar15);
  auVar15 = _lqc2(auStack_2c0);
  auVar12 = _vmove(auVar30);
  auVar19 = _vsub(auVar12,auVar15);
  _vmove(auVar21);
  _vmove(auVar22);
  auVar17 = _vaddbc(in_vf0,auVar22);
  auVar18 = _vaddbc(in_vf0,auVar21);
  _vmove(auVar19);
  auVar24 = _vaddbc(in_vf0,auVar21);
  _vmove(auVar17);
  _vmove(auVar18);
  auVar25 = _vaddbc(in_vf0,auVar19);
  auVar26 = _vaddbc(in_vf0,auVar19);
  _vmove(auVar24);
  auVar27 = _vaddbc(in_vf0,auVar22);
  auVar15 = _vmulbc(auVar26,auVar23);
  auVar12 = _vmulbc(auVar25,auVar23);
  auVar16 = _vmulbc(auVar27,auVar23);
  auVar15 = _vadd(auVar12,auVar15);
  _sqc2(auVar21);
  _sqc2(auVar22);
  auVar15 = _vadd(auVar15,auVar16);
  _sqc2(auVar19);
  auVar20 = _vsub(in_vf0,auVar15);
  _sqc2(auVar17);
  _sqc2(auVar18);
  _sqc2(auVar24);
  _sqc2(auVar28);
  _sqc2(auVar29);
  _sqc2(auVar30);
  _sqc2(auVar23);
  auVar15 = _sqc2(auVar25);
  auVar12 = _sqc2(auVar26);
  auVar16 = _sqc2(auVar27);
  _sqc2(auVar20);
  _sqc2(auVar23);
  auVar17 = _sqc2(auVar21);
  auVar18 = _sqc2(auVar22);
  auVar19 = _sqc2(auVar19);
  _sqc2(auVar20);
  auVar21 = _lqc2(auStack_2b0);
  auVar15 = _lqc2(auVar15);
  auVar15 = _vmulbc(auVar15,auVar21);
  auVar20 = _vadd(auVar20,auVar15);
  _sqc2(auVar20);
  auVar21 = _lqc2(auStack_2b0);
  auVar15 = _lqc2(auVar12);
  auVar15 = _vmulbc(auVar15,auVar21);
  auVar12 = _vadd(auVar20,auVar15);
  _sqc2(auVar12);
  auVar20 = _lqc2(auStack_2b0);
  auVar15 = _lqc2(auVar16);
  auVar15 = _vmulbc(auVar15,auVar20);
  auVar15 = _vadd(auVar12,auVar15);
  _sqc2(auVar15);
  if (fVar7 * 57.295776 < 2.0) {
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x150));
    auVar17 = _qmtc2(0x3dcccccd);
    auVar9 = _lqc2(auVar9);
    auVar9 = _vsub(auVar9,auVar12);
    _sqc2(auVar9);
    auVar15 = _vmulbc(auVar9,auVar17);
    auVar16 = _vadd(auVar12,auVar15);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x160));
    auVar12 = _vmul(auVar16,auVar16);
    auVar11 = _lqc2(auVar11);
    _vaddabc(auVar12,auVar12);
    auVar18 = _vmaddbc(auVar10,auVar12);
    auVar9 = _vsub(auVar11,auVar9);
    _sqc2(auVar9);
    auVar11 = _vmulbc(auVar9,auVar17);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x170));
    auVar8 = _lqc2(auVar8);
    auVar9 = _vsub(auVar8,auVar9);
    _sqc2(auVar9);
    auVar12 = _vmulbc(auVar9,auVar17);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x180));
    auVar9 = _lqc2(auVar13);
    auVar9 = _vsub(auVar9,auVar8);
    _sqc2(auVar16);
    auVar8 = _vmove(auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar18);
    uVar33 = _vwaitq();
    auVar16 = _vmulq(auVar16,uVar33);
    _sqc2(auVar9);
    auVar17 = _vmulbc(auVar8,auVar17);
    _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar17);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x160));
    auVar8 = _vadd(auVar9,auVar11);
    _sqc2(auVar8);
    auVar9 = _vmul(auVar8,auVar8);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    uVar33 = _vwaitq();
    auVar13 = _vmulq(auVar8,uVar33);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x170));
    auVar8 = _vadd(auVar9,auVar12);
    _sqc2(auVar8);
    auVar9 = _vmul(auVar8,auVar8);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    uVar33 = _vwaitq();
    auVar9 = _vmulq(auVar8,uVar33);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x180));
    auVar8 = _vadd(auVar8,auVar17);
    auStack_320 = _sqc2(auVar16);
    _sqc2(auVar8);
    auStack_310 = _sqc2(auVar13);
    auStack_300 = _sqc2(auVar9);
  }
  else {
    auVar8 = _vmaxbc(in_vf0,in_vf0);
    auVar9 = _qmtc2(fVar7 * 57.295776 * 0.1 * 0.017453292);
    auVar9 = _vaddbc(in_vf0,auVar9);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar9 = _vsubi(auVar9,in_vuI);
    auVar23 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x150));
    auVar9 = _vabs(auVar9);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar9,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar8,in_vuI);
    _vmaddai(auVar8,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar9,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar9 = _vmsubi(auVar8,in_vuI);
    auVar24 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x180));
    auVar9 = _vabs(auVar9);
    auVar8 = _lqc2(auStack_170);
    _ctc2(0x3e800000);
    _vnop();
    auVar9 = _vsubi(auVar9,in_vuI);
    auVar11 = _vmul(auVar8,auVar8);
    auVar12 = _vmul(auVar9,auVar9);
    _vaddabc(auVar11,auVar11);
    auVar11 = _vmaddbc(auVar10,auVar11);
    _ctc2(0xc2992661);
    _vnop();
    auVar15 = _vmuli(auVar9,in_vuI);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar11);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar33);
    auVar21 = _vmul(auVar12,auVar12);
    auVar22 = _lqc2(auVar13);
    _ctc2(0xc2255de0);
    _vnop();
    auVar20 = _vmuli(auVar9,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar16 = _vmuli(auVar9,in_vuI);
    auVar13 = _vmul(auVar21,auVar21);
    auVar11 = _vmul(auVar15,auVar12);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar15 = _vmuli(auVar9,in_vuI);
    _sqc2(auVar23);
    _vmula(auVar20,auVar12);
    _vmadda(auVar11,auVar21);
    _ctc2(0x40c90fda);
    _vmadda(auVar16,auVar21);
    _vmaddai(auVar9,in_vuI);
    auVar9 = _vmadd(auVar15,auVar13);
    auVar13 = _vmulbc(auVar8,auVar8);
    _lqc2(auStack_120);
    auVar11 = _qmtc2(0x3f800000);
    _vaddbc(in_vf0,auVar13);
    auVar13 = _vmulbc(auVar8,auVar8);
    _lqc2(auStack_130);
    auVar12 = _vaddbc(in_vf0,auVar11);
    auVar11 = _vmul(auVar8,auVar8);
    _vaddbc(in_vf0,auVar13);
    auVar9 = _vsubbc(auVar12,auVar9);
    auVar13 = _vmulbc(auVar8,auVar8);
    auVar15 = _vsub(in_vf0,auVar11);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar11 = _vaddbc(in_vf0,auVar13);
    auVar15 = _vaddbc(auVar15,auVar12);
    auVar13 = _vmulbc(auVar8,auVar9);
    auVar11 = _vmulbc(auVar11,auVar9);
    auVar15 = _vmulbc(auVar15,auVar9);
    _lqc2(auVar17);
    auVar8 = _vsubbc(auVar12,auVar15);
    _lqc2(auVar19);
    auVar9 = _vaddbc(auVar11,auVar13);
    _lqc2(auVar18);
    auVar17 = _vaddbc(in_vf0,auVar9);
    auVar9 = _vsubbc(auVar11,auVar13);
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar16 = _vaddbc(in_vf0,auVar9);
    auVar9 = _vaddbc(auVar11,auVar13);
    _vmove(auVar8);
    auVar18 = _vaddbc(in_vf0,auVar9);
    auVar9 = _vsubbc(auVar12,auVar15);
    auVar20 = _vsubbc(auVar11,auVar13);
    _vmove(auVar16);
    _vmove(auVar17);
    auVar19 = _vaddbc(in_vf0,auVar9);
    _sqc2(auVar8);
    auVar8 = _vsubbc(auVar11,auVar13);
    auVar20 = _vaddbc(in_vf0,auVar20);
    auVar12 = _vsubbc(auVar12,auVar15);
    auVar9 = _pextlw(0,0);
    _sqc2(auVar16);
    _sqc2(auVar17);
    auVar9 = _pextlw(0,auVar9._0_8_);
    auVar13 = _vaddbc(auVar11,auVar13);
    _vmove(auVar18);
    _vmove(auVar19);
    auVar15 = _vaddbc(in_vf0,auVar8);
    _vmove(auVar20);
    auVar11 = _vaddbc(in_vf0,auVar13);
    auVar13 = _vaddbc(in_vf0,auVar12);
    auVar16 = _vadd(in_vf0,in_vf0);
    auVar21 = _vsub(auVar22,auVar24);
    _sqc2(auVar18);
    auVar8 = _qmtc2(0x3dcccccd);
    _sqc2(auVar19);
    auVar12 = _vmove(auVar21);
    _sqc2(auVar20);
    auVar18 = _vmulbc(auVar12,auVar8);
    _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar13);
    _sqc2(auVar16);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar13);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar13);
    _sqc2(auVar16);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x160));
    _vmulabc(auVar15,auVar23);
    _vmaddabc(auVar11,auVar23);
    auVar12 = _vmaddbc(auVar13,auVar23);
    _vmulabc(auVar15,auVar8);
    _vmaddabc(auVar11,auVar8);
    auVar17 = _vmaddbc(auVar13,auVar8);
    _sqc2(auVar12);
    _sqc2(auVar17);
    auVar8 = _lqc2(auVar9);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x170));
    _vmulabc(auVar15,auVar9);
    _vmaddabc(auVar11,auVar9);
    auVar9 = _vmaddbc(auVar13,auVar9);
    _vmulabc(auVar15,auVar8);
    _vmaddabc(auVar11,auVar8);
    _vmaddabc(auVar13,auVar8);
    auVar8 = _vmaddbc(auVar16,in_vf0);
    auStack_320 = _sqc2(auVar12);
    _sqc2(auVar8);
    _sqc2(auVar21);
    _sqc2(auVar18);
    auVar13 = _vadd(auVar18,auVar24);
    auStack_310 = _sqc2(auVar17);
    auStack_300 = _sqc2(auVar9);
    _sqc2(auVar13);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar12);
    _sqc2(auVar17);
    _sqc2(auVar9);
    _sqc2(auVar8);
  }
  auVar11 = _lqc2(auStack_320);
  auVar15 = _lqc2(auStack_310);
  auVar9 = _vmul(auVar11,auVar11);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar10,auVar9);
  auVar8 = _vmul(auVar15,auVar15);
  auVar13 = _vmove(auVar11);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar10,auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  auVar16 = _qmtc2(SQRT(auVar9._0_4_));
  uVar33 = _vwaitq();
  auVar18 = _vmulq(auVar13,uVar33);
  auVar13 = _vmove(auVar15);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  auVar9 = _qmfc2(auVar8._0_4_);
  auVar12 = _qmtc2(SQRT(auVar9._0_4_));
  uVar33 = _vwaitq();
  auVar17 = _vmulq(auVar13,uVar33);
  auVar13 = _lqc2(auStack_300);
  _lqc2(auStack_110);
  auVar9 = _vmul(auVar13,auVar13);
  auVar8 = _vaddbc(in_vf0,auVar16);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar10,auVar9);
  _vmove(auVar8);
  _vaddbc(in_vf0,auVar12);
  auVar8 = _vmove(auVar13);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  auVar9 = _qmtc2(SQRT(auVar9._0_4_));
  uVar33 = _vwaitq();
  auVar12 = _vmulq(auVar8,uVar33);
  _sqc2(auVar11);
  auVar16 = _vaddbc(in_vf0,auVar9);
  _sqc2(auVar15);
  auVar8 = _qmfc2(auVar16._0_4_);
  _sqc2(auVar13);
  auVar9 = _sqc2(auVar14);
  _sqc2(auVar11);
  _sqc2(auVar15);
  _sqc2(auVar13);
  auStack_430 = _sqc2(auVar18);
  auStack_420 = _sqc2(auVar17);
  auStack_410 = _sqc2(auVar12);
  if (auVar8._0_4_ <= 0.0) {
LAB_0011be48:
    _vopmula(auVar17,auVar12);
    auVar13 = _vopmsub(auVar12,auVar17);
    auVar8 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar13,uVar33);
    _vopmula(auVar8,auVar17);
    auVar13 = _vopmsub(auVar17,auVar8);
    auStack_430 = _sqc2(auVar8);
    auVar8 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar13,uVar33);
    auStack_410 = _sqc2(auVar8);
    goto LAB_0011beb0;
  }
  auVar8 = _sqc2(auVar16);
  auStack_3b0._4_4_ = auVar8._4_4_;
  if (0.0 < (float)auStack_3b0._4_4_) {
    auVar8 = _sqc2(auVar16);
    fStack_3a8 = auVar8._8_4_;
    if (0.0 < fStack_3a8) {
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar8 = _vmul(auVar17,auVar12);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar11,auVar8);
      _lqc2(auStack_100);
      _vaddbc(in_vf0,auVar8);
      auVar8 = _vmul(auVar12,auVar18);
      _vaddabc(auVar8,auVar8);
      auVar13 = _vmaddbc(auVar11,auVar8);
      auVar8 = _vmul(auVar18,auVar17);
      _vaddbc(in_vf0,auVar13);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar11,auVar8);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar14 = _vabs(auVar8);
      auVar11 = _vmove(auVar14);
      auVar13 = _qmfc2(auVar11._0_4_);
      auVar8 = _sqc2(auVar11);
      auStack_3b0._4_4_ = auVar8._4_4_;
      if ((float)auStack_3b0._4_4_ <= auVar13._0_4_) {
        auVar8 = _sqc2(auVar14);
        auStack_3b0._4_4_ = auVar8._4_4_;
        auVar8 = _sqc2(auVar14);
        fStack_3a8 = auVar8._8_4_;
        if ((float)auStack_3b0._4_4_ < fStack_3a8) goto LAB_0011bddc;
      }
      else {
        auVar8 = _sqc2(auVar11);
        fStack_3a8 = auVar8._8_4_;
        if (auVar13._0_4_ < fStack_3a8) goto LAB_0011be48;
      }
    }
    _vopmula(auVar18,auVar17);
    auVar13 = _vopmsub(auVar17,auVar18);
    auVar8 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar13,uVar33);
    _vopmula(auVar8,auVar18);
    auVar13 = _vopmsub(auVar18,auVar8);
    auStack_410 = _sqc2(auVar8);
    auVar8 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar13,uVar33);
    auStack_420 = _sqc2(auVar8);
  }
  else {
LAB_0011bddc:
    _vopmula(auVar12,auVar18);
    auVar13 = _vopmsub(auVar18,auVar12);
    auVar8 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar13,uVar33);
    _vopmula(auVar8,auVar12);
    auVar13 = _vopmsub(auVar12,auVar8);
    auStack_420 = _sqc2(auVar8);
    auVar8 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar33 = _vwaitq();
    auVar8 = _vmulq(auVar13,uVar33);
    auStack_430 = _sqc2(auVar8);
  }
LAB_0011beb0:
  uStack_400 = auVar9._0_4_;
  uStack_3fc = auVar9._4_4_;
  uStack_3f8 = auVar9._8_4_;
  uStack_3f4 = auVar9._12_4_;
  *(int *)(iVar3 + 0x150) = auStack_430._0_4_;
  *(int *)(iVar3 + 0x154) = auStack_430._4_4_;
  *(undefined4 *)(iVar3 + 0x158) = auStack_430._8_4_;
  *(undefined4 *)(iVar3 + 0x15c) = auStack_430._12_4_;
  *(undefined4 *)(iVar3 + 0x180) = uStack_400;
  *(undefined4 *)(iVar3 + 0x184) = uStack_3fc;
  *(undefined4 *)(iVar3 + 0x188) = uStack_3f8;
  *(undefined4 *)(iVar3 + 0x18c) = uStack_3f4;
  *(int *)(iVar3 + 0x160) = auStack_420._0_4_;
  *(int *)(iVar3 + 0x164) = auStack_420._4_4_;
  *(undefined4 *)(iVar3 + 0x168) = auStack_420._8_4_;
  *(undefined4 *)(iVar3 + 0x16c) = auStack_420._12_4_;
  *(undefined4 *)(iVar3 + 0x170) = auStack_410._0_4_;
  *(undefined4 *)(iVar3 + 0x174) = auStack_410._4_4_;
  *(undefined4 *)(iVar3 + 0x178) = auStack_410._8_4_;
  *(undefined4 *)(iVar3 + 0x17c) = auStack_410._12_4_;
  puVar4 = (undefined4 *)param_1;
  *puVar4 = auStack_430._0_4_;
  puVar4[1] = auStack_430._4_4_;
  puVar4[2] = auStack_430._8_4_;
  puVar4[3] = auStack_430._12_4_;
  puVar4[4] = auStack_420._0_4_;
  puVar4[5] = auStack_420._4_4_;
  puVar4[6] = auStack_420._8_4_;
  puVar4[7] = auStack_420._12_4_;
  puVar4[8] = auStack_410._0_4_;
  puVar4[9] = auStack_410._4_4_;
  puVar4[10] = auStack_410._8_4_;
  puVar4[0xb] = auStack_410._12_4_;
  puVar4[0xc] = uStack_400;
  puVar4[0xd] = uStack_3fc;
  puVar4[0xe] = uStack_3f8;
  puVar4[0xf] = uStack_3f4;
  return param_1;
}


// ==== FUN_0011bf20 @ 0011bf20 ====

void FUN_0011bf20(void)

{
  return;
}


// ==== FUN_0011bf28 @ 0011bf28 ====

undefined4 FUN_0011bf28(undefined1 *param_1)

{
  undefined1 auStack_80 [64];
  undefined8 uStack_40;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x15c] = 0;
  uStack_40 = 0x5446127adda936c0;
  FUN_0014a8f8(param_1 + 0x30);
  FUN_0014a938(param_1 + 0x30,auStack_80);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  param_1[0x15d] = 0;
  return 1;
}


// ==== FUN_0011bfb0 @ 0011bfb0 ====
// GLOBAL DAT_0040f0e0 undefined4

undefined8
FUN_0011bfb0(char *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*param_1 != '\0') {
    (**(code **)(*(int *)(param_4 + 0x10) + 0xa4))
              (auStack_a0,param_4 + *(short *)(*(int *)(param_4 + 0x10) + 0xa0));
    *(undefined4 *)(param_1 + 0x10) = uStack_70;
    *(undefined4 *)(param_1 + 0x14) = uStack_6c;
    *(undefined4 *)(param_1 + 0x18) = uStack_68;
    *(undefined4 *)(param_1 + 0x1c) = uStack_64;
    FUN_00135940(auStack_a0,param_2,param_3);
    auVar2._4_4_ = uStack_6c;
    auVar2._0_4_ = uStack_70;
    auVar2._8_4_ = uStack_68;
    auVar2._12_4_ = uStack_64;
    auVar4 = _lqc2(auVar2);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar2 = _vsub(auVar4,auVar2);
    auVar3 = _vmul(auVar2,auVar2);
    auVar2 = _sqc2(auVar4);
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
    _vaddabc(auVar3,auVar3);
    auVar2 = _vmaddbc(auVar5,auVar3);
    auVar2 = _qmfc2(auVar2._0_4_);
    if (36.0 <= auVar2._0_4_) {
      *(int *)(param_1 + 0x154) = param_4;
      *(int *)(param_1 + 0x150) = (int)param_2;
      *(undefined4 *)(param_1 + 0x160) = param_5;
      *(undefined1 *)(param_4 + 0x8b2) = 1;
      param_1[0x15c] = '\0';
      param_1[0x158] = '\0';
      param_1[0x159] = '\0';
      param_1[0x15a] = '\0';
      param_1[0x15b] = '\0';
      param_1[0x15d] = '\x01';
      param_1[4] = '\x01';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      iVar1 = FUN_00135550(*(undefined4 *)(param_1 + 0x154));
      *(undefined1 *)(iVar1 + 0x31) = 0;
      FUN_0013dc38(*(int *)(param_1 + 0x154) + 2000);
      FUN_001354e0(*(int *)(param_1 + 0x154),*(int *)(param_1 + 0x154) + 2000);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x154) + 0x330) + 0x234) = 0;
      FUN_00103918(DAT_0040f0e0,2);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0011c0f0 @ 0011c0f0 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4d0 int

void FUN_0011c0f0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_a0 [64];
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x15d) == '\0') {
    return;
  }
  switch(*(undefined4 *)(iVar4 + 4)) {
  case 1:
    fVar5 = *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar4 + 0x158) = *(float *)(iVar4 + 0x158) + fVar5;
    FUN_0013bac8(fVar5,*(undefined4 *)(iVar4 + 0x154));
    iVar1 = *(int *)(*(int *)(iVar4 + 0x154) + 0x10);
    (**(code **)(iVar1 + 0xc))(fVar5,*(int *)(iVar4 + 0x154) + (int)*(short *)(iVar1 + 8));
    iVar1 = *(int *)(*(int *)(iVar4 + 0x154) + 0x10);
    (**(code **)(iVar1 + 0x2c))(fVar5,*(int *)(iVar4 + 0x154) + (int)*(short *)(iVar1 + 0x28));
    iVar1 = *(int *)(*(int *)(iVar4 + 0x154) + 0x10);
    (**(code **)(iVar1 + 0xa4))(auStack_a0,*(int *)(iVar4 + 0x154) + (int)*(short *)(iVar1 + 0xa0));
    (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
              (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),5,auStack_a0);
    FUN_0027f9c0(DAT_0040f4d0,5);
    uVar2 = 2;
    goto LAB_0011c390;
  case 2:
    fVar5 = *(float *)(iVar4 + 0x158) + *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar4 + 0x158) = fVar5;
    if (0.5 < fVar5) {
      FUN_0011c5a8(param_1);
      (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
                (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),10,iVar4 + 0x30);
      *(undefined4 *)(iVar4 + 4) = 3;
    }
    break;
  case 3:
    FUN_0014aa60(*(undefined4 *)(DAT_0040f4d0 + 0x1c),iVar4 + 0x30);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x10));
    auVar9 = _qmtc2(0x3f828f5c);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x20));
    auVar6 = _vsub(auVar6,auVar8);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
    auVar9 = _vmulbc(auVar6,auVar9);
    auVar6 = _vsub(auVar7,auVar8);
    if (*(char *)(iVar4 + 0x145) == '\0') {
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _vmul(auVar6,auVar6);
      auVar7 = _vmul(auVar9,auVar9);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar8,auVar6);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar8,auVar7);
      auVar6 = _qmfc2(auVar6._0_4_);
      auVar7 = _qmfc2(auVar7._0_4_);
      if (auVar6._0_4_ <= auVar7._0_4_) break;
    }
    (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
              (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),0xc,
               *(undefined4 *)(iVar4 + 0x150));
    FUN_0012a280(DAT_0040f4d0,iVar4 + 0x30);
    *(undefined1 *)(iVar4 + 0x15c) = 1;
    FUN_0027f9c0(DAT_0040f4d0,1);
    *(undefined1 *)(*(int *)(*(int *)(iVar4 + 0x154) + 0x330) + 0x234) = 1;
    uVar3 = FUN_00135550(*(undefined4 *)(iVar4 + 0x150));
    iVar1 = FUN_001412c0(uVar3);
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x44))(iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x40));
    uVar2 = 4;
LAB_0011c390:
    *(undefined4 *)(iVar4 + 0x158) = 0;
    *(undefined4 *)(iVar4 + 4) = uVar2;
    break;
  case 4:
    if (*(int *)(*(int *)(iVar4 + 0x150) + 0x350) == 0) {
      return;
    }
    uVar2 = FUN_0025dd08();
    auVar6 = _qmtc2(uVar2);
    auVar6 = _vmul(auVar6,auVar6);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if ((auVar6._0_4_ < 0.5) &&
       (fVar5 = *(float *)(iVar4 + 0x158) + *(float *)(DAT_0040f0e0 + 0x2013c),
       *(float *)(iVar4 + 0x158) = fVar5, 2.0 <= fVar5)) {
      FUN_0011c4a8(param_1);
      return;
    }
    break;
  case 5:
    break;
  case 6:
    if (*(int *)(*(int *)(iVar4 + 0x150) + 0x38c) != 2) {
      return;
    }
    fVar5 = *(float *)(iVar4 + 0x158) + *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar4 + 0x158) = fVar5;
    if (fVar5 < 1.0) {
      return;
    }
    FUN_0011c4a8(param_1);
    break;
  default:
    goto switchD_0011c140_default;
  }
switchD_0011c140_default:
  return;
}


// ==== FUN_0011c4a8 @ 0011c4a8 ====
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f0e0 undefined4

void FUN_0011c4a8(int param_1)

{
  if (*(char *)(param_1 + 0x15d) != '\0') {
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(*(int *)(param_1 + 0x150) + 0x38c) == 2) {
      (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
                (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),0xb,0);
      FUN_001354e0(*(int *)(param_1 + 0x154),*(int *)(param_1 + 0x154) + 0x4f0);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x154) + 0x8b2) = 0;
      *(undefined1 *)(param_1 + 0x15c) = 0;
      FUN_0027f9c0(DAT_0040f4d0,1);
      FUN_00103918(DAT_0040f0e0,0);
      *(undefined1 *)(param_1 + 0x15d) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 6;
    }
  }
  return;
}


// ==== FUN_0011c558 @ 0011c558 ====

undefined4 FUN_0011c558(int param_1)

{
  FUN_0014ba58(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x15d) = 0;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  return 1;
}


// ==== FUN_0011c5a8 @ 0011c5a8 ====
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f510 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011c5a8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auStack_50 = _sqc2(auVar3);
  auVar5 = _lqc2(auStack_50);
  auStack_70 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar4 = _qmtc2(*(undefined4 *)*(undefined1 (*) [16])(param_1 + 0x10));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar4 = _vsub(auVar3,auVar4);
  _sqc2(auVar4);
  auVar3 = _vmul(auVar4,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar9 = _vwaitq();
  auVar3 = _vmulq(auVar4,uVar9);
  auStack_40 = _qmfc2(auVar3._0_4_);
  auStack_60 = _sqc2(auVar3);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x154) + 0x2a4) + 0x108) != '\0') {
    uVar2 = FUN_00136b30();
    iVar1 = FUN_0015d210(DAT_0040f4e0,uVar2);
    auVar3 = _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x48));
    auVar4 = _lqc2(auStack_60);
    auVar5 = _lqc2(auStack_70);
    auVar3 = _vmulbc(auVar4,auVar3);
    auVar3 = _vadd(auVar5,auVar3);
    auStack_70 = _sqc2(auVar3);
  }
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
  auVar3 = _vsub(auVar3,auVar4);
  auVar8 = _lqc2(auStack_40);
  auVar4 = _lqc2(auStack_50);
  auVar3 = _vmul(auVar3,auVar3);
  auVar7 = _lqc2(_DAT_004432c0);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  _vopmula(auVar7,auVar8);
  auVar6 = _vopmsub(auVar8,auVar7);
  auVar5 = _lqc2(auStack_50);
  auVar4 = _vmul(auVar6,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  uVar9 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar9);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar5 = _vmove(auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  uVar9 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar9);
  auVar4 = _qmtc2(auVar3._0_4_ + auVar3._0_4_);
  _sqc2(auVar6);
  auStack_150 = _qmfc2(auVar8._0_4_);
  _vopmula(auVar8,auVar5);
  auVar3 = _vopmsub(auVar5,auVar8);
  uStack_110 = auStack_150._0_4_;
  uStack_10c = auStack_150._4_4_;
  uStack_108 = auStack_150._8_4_;
  uStack_104 = auStack_150._12_4_;
  auVar6 = _qmtc2(uStack_110);
  iVar1 = param_1 + 0x30;
  auVar4 = _vmulbc(auVar6,auVar4);
  _sqc2(auVar7);
  auStack_170 = _sqc2(auVar5);
  auStack_40 = _sqc2(auVar4);
  auStack_160 = _sqc2(auVar3);
  uStack_140 = auStack_70._0_4_;
  uStack_13c = auStack_70._4_4_;
  uStack_138 = auStack_70._8_4_;
  uStack_134 = auStack_70._12_4_;
  auStack_b0 = _sqc2(auVar5);
  auStack_a0 = _sqc2(auVar3);
  auStack_f0 = _sqc2(auVar5);
  auStack_e0 = _sqc2(auVar3);
  uStack_c0 = auStack_70._0_4_;
  uStack_bc = auStack_70._4_4_;
  uStack_b8 = auStack_70._8_4_;
  uStack_b4 = auStack_70._12_4_;
  auStack_130 = _sqc2(auVar5);
  auStack_120 = _sqc2(auVar3);
  uStack_100 = auStack_70._0_4_;
  uStack_fc = auStack_70._4_4_;
  uStack_f8 = auStack_70._8_4_;
  uStack_f4 = auStack_70._12_4_;
  uStack_d0 = uStack_110;
  uStack_cc = uStack_10c;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  uStack_90 = uStack_110;
  uStack_8c = uStack_10c;
  uStack_88 = uStack_108;
  uStack_84 = uStack_104;
  FUN_0012a158(DAT_0040f4d0,iVar1);
  auVar7 = _qmtc2(0x40200000);
  auVar3 = _lqc2(auStack_160);
  auVar4 = _lqc2(auStack_170);
  auVar6 = _qmtc2(0x40400000);
  auVar5 = _lqc2(auStack_150);
  auVar4 = _vmulbc(auVar4,auVar7);
  auVar5 = _vmulbc(auVar5,auVar6);
  auVar3 = _vmulbc(auVar3,auVar7);
  auStack_160 = _sqc2(auVar3);
  auStack_170 = _sqc2(auVar4);
  auStack_150 = _sqc2(auVar5);
  FUN_00125f88(iVar1,auStack_170);
  FUN_0014a978(iVar1,auStack_40._0_8_);
  FUN_0014aa60(0,iVar1);
  if (*(int *)(param_1 + 0x154) != 0) {
    uVar2 = FUN_00136b30();
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x154) + 0x2a4) + 0x108) == '\0') {
      iVar1 = FUN_0015d288(DAT_0040f4e0,uVar2);
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,*(undefined8 *)(iVar1 + 8),
                   *(undefined4 *)(param_1 + 0x154),1,5);
    }
    else {
      iVar1 = FUN_0015d288(DAT_0040f4e0,uVar2);
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,*(undefined8 *)(iVar1 + 0x18),
                   *(undefined4 *)(param_1 + 0x154),1,5);
    }
    FUN_001d6f90(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  }
  return;
}


// ==== FUN_0011c878 @ 0011c878 ====

void FUN_0011c878(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x20;
  iVar1 = 7;
  do {
    iVar1 = iVar1 + -1;
    FUN_00140ad0(param_1);
    param_1 = param_1 + 0x4f0;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_0011c8c0 @ 0011c8c0 ====

undefined4 FUN_0011c8c0(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 7;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = param_1 + 0x20;
  puVar1 = (undefined4 *)(param_1 + 0xb0);
  do {
    iVar3 = iVar3 + -1;
    *puVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 **)(param_1 + 0x18) = puVar2;
    puVar1 = puVar1 + 0x13c;
    puVar2 = puVar2 + 0x4f0;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00382348(param_1 + 0x10,0x2b9d6f8);
  *param_1 = 0;
  return 1;
}


// ==== FUN_0011c930 @ 0011c930 ====
// GLOBAL DAT_0040f504 int
// GLOBAL DAT_0040f0e0 undefined4
// GLOBAL null char

void FUN_0011c930(char *param_1)

{
  int iVar1;
  
  if ((*param_1 == '\0') || (cGpffff81b3 == '\0')) {
    param_1 = param_1 + 0x20;
    iVar1 = 7;
    do {
      if (param_1[0x78] != '\0') {
        (**(code **)(*(int *)(param_1 + 0x84) + 0xc))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x84) + 8));
      }
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 0x4f0;
    } while (-1 < iVar1);
  }
  else if (*(char *)(DAT_0040f504 + 0x15c) != '\0') {
    FUN_00103918(DAT_0040f0e0,0);
    *param_1 = '\0';
  }
  return;
}


// ==== FUN_0011c9c8 @ 0011c9c8 ====

undefined4 FUN_0011c9c8(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x20;
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
    FUN_00140f88(puVar1);
    puVar1 = puVar1 + 0x4f0;
  } while (-1 < iVar2);
  *param_1 = 0;
  return 1;
}


// ==== FUN_0011ca28 @ 0011ca28 ====
// GLOBAL DAT_00414d54 int
// GLOBAL DAT_0040f514 undefined4
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f504 char_*
// GLOBAL DAT_00414d40 undefined1
// GLOBAL null char
// GLOBAL null char

void FUN_0011ca28(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 in_zero_qw [16];
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 in_t0_udw;
  int iVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  
  auVar9._8_8_ = in_t0_udw;
  auVar9._0_8_ = param_6;
  auVar9 = _por(in_zero_qw,auVar9);
  iVar4 = 0;
  pcVar2 = *(char **)((int)param_3 + 0x2a4);
  if ((pcVar2 != (char *)0x0) && (cVar3 = *pcVar2, cVar3 != -1)) {
    iVar4 = *(int *)(cVar3 * 4 + DAT_00414d54);
  }
  lVar5 = FUN_0011d090(param_2,param_3);
  if (lVar5 == 0) {
    FUN_00135b80(param_3,2);
    FUN_00139060(DAT_0040f514,param_3);
  }
  else {
    iVar7 = (int)lVar5;
    FUN_0011d3c8(iVar7 + 0xa0,0);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    uVar1 = (&DAT_00414d40)[(int)param_4];
    *(int *)(iVar7 + 0xb0) = auVar9._0_4_;
    *(int *)(iVar7 + 0xb4) = auVar9._4_4_;
    *(int *)(iVar7 + 0xb8) = auVar9._8_4_;
    *(int *)(iVar7 + 0xbc) = auVar9._12_4_;
    *(undefined1 *)(iVar7 + 0xd0) = uVar1;
    *(undefined4 *)(iVar7 + 0xc0) = param_1;
    *(int *)(iVar7 + 200) = (int)param_5;
    *(int *)(iVar7 + 0xd8) = (int)param_7;
    auVar10 = _lqc2(*(undefined1 (*) [16])((int)param_7 + 0xa0));
    auVar9 = _lqc2(*(undefined1 (*) [16])((int)param_3 + 0xa0));
    auVar9 = _vsub(auVar9,auVar10);
    auVar9 = _vmul(auVar9,auVar9);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar11,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar12);
    auVar9 = _qmfc2(auVar9._0_4_);
    *(int *)(iVar7 + 0xc4) = auVar9._0_4_;
    if (cGpffff81b4 != '\0') {
      FUN_001412e8(lVar5,8);
    }
    if (iVar4 == 10) {
      FUN_001412e8(lVar5,7);
    }
    FUN_001412e8(lVar5,3);
    FUN_001412e8(lVar5,4);
    if ((param_4 == 2) ||
       (iVar4 = FUN_0015d248(DAT_0040f4e0,(&DAT_00414d40)[(int)param_4],0),
       *(int *)(iVar4 + 0x90) == 5)) {
      FUN_001412e8(lVar5,1);
    }
    FUN_001412e8(lVar5,0);
    FUN_00141308(lVar5);
    if (((cGpffff81b3 != '\0') && (*DAT_0040f504 != '\0')) &&
       ((lVar8 = (long)*(int *)(iVar7 + 0x4b4), lVar8 == 3 || (lVar8 == 7)))) {
      lVar6 = FUN_00136b30(param_7);
      if (lVar6 == -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)lVar6 * 4 + DAT_00414d54);
      }
      if (((((iVar4 == 1) || (iVar4 == 3)) || (iVar4 == 4)) || ((iVar4 == 5 || (iVar4 == 0xf)))) ||
         ((iVar4 == 0x10 || ((iVar4 == 0x12 || (iVar4 == 6)))))) {
        cVar3 = FUN_0011bfb0(DAT_0040f504,param_3,param_5,param_7,lVar8);
        *(char *)param_2 = cVar3;
        if (cVar3 != '\0') {
          return;
        }
      }
    }
    iVar4 = FUN_001412c0(lVar5);
    (**(code **)(*(int *)(iVar4 + 0x4c) + 0x44))(iVar4 + *(short *)(*(int *)(iVar4 + 0x4c) + 0x40));
  }
  return;
}


// ==== FUN_0011cd00 @ 0011cd00 ====
// GLOBAL DAT_0040f514 undefined4

void FUN_0011cd00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0011d090();
  if (lVar2 == 0) {
    FUN_00135b80(param_3,2);
    FUN_00139060(DAT_0040f514,param_3);
  }
  else {
    FUN_0011d3c8((int)lVar2 + 0xa0,3);
    *(undefined4 *)((int)lVar2 + 0xc4) = param_1;
    FUN_001412e8(lVar2,5);
    FUN_00141308(lVar2);
    iVar1 = FUN_001412c0(lVar2);
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x44))(iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x40));
  }
  return;
}


// ==== FUN_0011cda8 @ 0011cda8 ====
// GLOBAL DAT_0040f514 undefined4

void FUN_0011cda8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  long lVar2;
  undefined1 in_t0_qw [16];
  undefined1 auVar3 [16];
  
  auVar3 = _por(in_zero_qw,in_t0_qw);
  lVar2 = FUN_0011d090();
  if (lVar2 == 0) {
    FUN_00135b80(param_3,2);
    FUN_00139060(DAT_0040f514,param_3);
  }
  else {
    iVar1 = (int)lVar2;
    FUN_0011d3c8(iVar1 + 0xa0,1);
    *(undefined4 *)(iVar1 + 0xd4) = param_4;
    *(undefined4 *)(iVar1 + 200) = param_5;
    *(int *)(iVar1 + 0xb0) = auVar3._0_4_;
    *(int *)(iVar1 + 0xb4) = auVar3._4_4_;
    *(int *)(iVar1 + 0xb8) = auVar3._8_4_;
    *(int *)(iVar1 + 0xbc) = auVar3._12_4_;
    *(undefined4 *)(iVar1 + 0xc0) = param_1;
    FUN_001412e8(lVar2,6);
    FUN_001412e8(lVar2,3);
    FUN_001412e8(lVar2,0);
    FUN_00141308(lVar2);
    iVar1 = FUN_001412c0(lVar2);
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x44))(iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x40));
  }
  return;
}


// ==== FUN_0011ce98 @ 0011ce98 ====
// GLOBAL DAT_0040f514 undefined4

void FUN_0011ce98(undefined4 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  long lVar2;
  undefined1 in_a3_qw [16];
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  undefined1 auVar3 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  auVar3 = _por(in_zero_qw,in_a3_qw);
  lVar2 = FUN_0011d090();
  if (lVar2 == 0) {
    FUN_00135b80(param_4,2);
    FUN_00139060(DAT_0040f514,param_4);
  }
  else {
    iVar1 = (int)lVar2;
    FUN_0011d3c8(iVar1 + 0xa0,2);
    *(int *)(iVar1 + 0xb0) = auVar3._0_4_;
    *(int *)(iVar1 + 0xb4) = auVar3._4_4_;
    *(int *)(iVar1 + 0xb8) = auVar3._8_4_;
    *(int *)(iVar1 + 0xbc) = auVar3._12_4_;
    auVar5 = _vaddbc(in_vf0,in_vf0);
    *(undefined4 *)(iVar1 + 0xc0) = param_1;
    *(float *)(iVar1 + 0xc4) = param_2;
    *(int *)(iVar1 + 0xa0) = (int)param_6;
    *(int *)(iVar1 + 0xa4) = (int)((ulong)param_6 >> 0x20);
    *(undefined4 *)(iVar1 + 0xa8) = in_t0_udw;
    *(undefined4 *)(iVar1 + 0xac) = in_register_0000008c;
    auVar4 = _lqc2(*(undefined1 (*) [16])((int)param_4 + 0xa0));
    auVar3._8_4_ = in_t0_udw;
    auVar3._0_8_ = param_6;
    auVar3._12_4_ = in_register_0000008c;
    auVar3 = _lqc2(auVar3);
    auVar3 = _vsub(auVar4,auVar3);
    auVar3 = _vmul(auVar3,auVar3);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar5,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar3);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    uVar6 = _vwaitq();
    auVar3 = _vmulq(auVar3,uVar6);
    auVar3 = _qmfc2(auVar3._0_4_);
    if (auVar3._0_4_ < param_2 * 0.75) {
      FUN_001412e8(lVar2,2);
    }
    FUN_001412e8(lVar2,0);
    FUN_00141308(lVar2);
    iVar1 = FUN_001412c0(lVar2);
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x44))(iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x40));
  }
  return;
}


// ==== FUN_0011cfd8 @ 0011cfd8 ====
// GLOBAL DAT_0040f514 undefined4

void FUN_0011cfd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar3 = FUN_0011d090();
  if (lVar3 == 0) {
    FUN_00135b80(param_2,2);
    FUN_00139060(DAT_0040f514,param_2);
  }
  else {
    iVar2 = (int)lVar3;
    FUN_0011d3c8(iVar2 + 0xa0,4);
    *(undefined4 *)(iVar2 + 200) = 2;
    *(undefined1 *)(iVar2 + 0xd0) = 0xff;
    iVar6 = (int)param_2;
    uVar1 = *(undefined8 *)(iVar6 + 0x90);
    uVar4 = *(undefined4 *)(iVar6 + 0x98);
    uVar5 = *(undefined4 *)(iVar6 + 0x9c);
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xd8) = 0;
    *(int *)(iVar2 + 0xb0) = (int)uVar1;
    *(int *)(iVar2 + 0xb4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar2 + 0xb8) = uVar4;
    *(undefined4 *)(iVar2 + 0xbc) = uVar5;
    FUN_001412e8(lVar3,0);
    FUN_00141308(lVar3);
    iVar2 = FUN_001412c0(lVar3);
    (**(code **)(*(int *)(iVar2 + 0x4c) + 0x44))(iVar2 + *(short *)(*(int *)(iVar2 + 0x4c) + 0x40));
  }
  return;
}


// ==== FUN_0011d090 @ 0011d090 ====
// GLOBAL DAT_0040f514 undefined4

long FUN_0011d090(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = FUN_0011d1d0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_0011d200(param_1,param_2);
    iVar3 = (int)param_2;
    if (lVar2 != 0) {
      *(int *)((int)param_1 + 4) = iVar3;
    }
    FUN_00136f10(param_2,1);
    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xb4) + 0x34) + 0x18) = 7;
    FUN_00140bb8(lVar1,param_2);
    FUN_001354e0(param_2,lVar1);
    FUN_00138f08(DAT_0040f514,param_2);
    FUN_001a6e58(*(undefined4 *)(iVar3 + 0x330));
    if (lVar2 != 0) {
      FUN_00141418(lVar1);
    }
  }
  return lVar1;
}


// ==== FUN_0011d158 @ 0011d158 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f514 undefined4
// GLOBAL DAT_0040f504 undefined4

void FUN_0011d158(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x7c);
  FUN_001e31a8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14));
  if (iVar1 == *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_00138fa0(DAT_0040f514,iVar1);
  FUN_0011c4a8(DAT_0040f504);
  return;
}


// ==== FUN_0011d1d0 @ 0011d1d0 ====

int FUN_0011d1d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x90);
  }
  return iVar1;
}


// ==== FUN_0011d1f0 @ 0011d1f0 ====

void FUN_0011d1f0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  return;
}


// ==== FUN_0011d200 @ 0011d200 ====

undefined4 FUN_0011d200(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = (int)param_2;
    bVar1 = false;
    if ((*(int *)(*(int *)(iVar2 + 0x25c) + (uint)*(byte *)(*(int *)(iVar2 + 0x25c) + 0x19) * 4 +
                 0xc) != 0) && (bVar1 = true, *(int *)(iVar2 + 0x2a4) == 0)) {
      bVar1 = false;
    }
    if (!bVar1) {
      return 0;
    }
    lVar4 = FUN_00156f00(*(undefined4 *)(iVar2 + 0x2a4));
    if (lVar4 != 0) {
      return 0;
    }
    lVar4 = FUN_001580c0(*(undefined4 *)(iVar2 + 0x2a4));
    if (lVar4 != 0) {
      return 0;
    }
    iVar2 = FUN_00135550(param_2);
    if (*(int *)(iVar2 + 0x80) == 1) {
      iVar2 = FUN_00135550(param_2);
      lVar4 = FUN_00185c58(iVar2 + 0x6f0);
      if (lVar4 != 0) goto LAB_0011d2a8;
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    iVar2 = iVar2 * 0x10000 + (iVar2 >> 0x10);
    *(int *)(param_1 + 0x10) = iVar2;
    iVar2 = iVar2 + *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar2;
    uVar3 = 1;
    if (0.1 < (float)*(uint *)(param_1 + 0x10) * 2.3283064e-10) {
      uVar3 = 0;
    }
  }
  else {
LAB_0011d2a8:
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_0011d358 @ 0011d358 ====
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_003f4150 undefined

bool FUN_0011d358(float param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((param_1 <= 100.0) && (bVar1 = false, (&DAT_003f4150)[param_4] != '\0')) {
    iVar2 = FUN_0015d210(DAT_0040f4e0,param_3);
    bVar1 = *(char *)(*(int *)(iVar2 + 0xc) + 0x15) != '\0';
  }
  return bVar1;
}


// ==== FUN_0011d3c8 @ 0011d3c8 ====
// GLOBAL DAT_0040f4d0 int

void FUN_0011d3c8(undefined1 (*param_1) [16],undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar2);
  param_1[1] = auVar1;
  auVar1 = _sqc2(auVar2);
  *param_1 = auVar1;
  *(undefined4 *)(param_1[2] + 0xc) = param_2;
  *(undefined4 *)(param_1[2] + 8) = 0xb;
  param_1[3][0] = 0xff;
  *(undefined4 *)(param_1[3] + 0xc) = 0x40400000;
  *(undefined4 *)param_1[4] = 0x3fc00000;
  *(undefined4 *)param_1[2] = 0;
  *(undefined4 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[3] + 4) = 0;
  *(undefined4 *)(param_1[3] + 8) = 0;
  _sqc2(auVar2);
  *(undefined4 *)(param_1[4] + 4) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  return;
}


// ==== FUN_0011d430 @ 0011d430 ====

void FUN_0011d430(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x11] = param_2;
  *param_1 = 0;
  return;
}


// ==== FUN_0011d450 @ 0011d450 ====

void FUN_0011d450(undefined8 param_1)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 0x48) = 0;
  iVar1 = FUN_0011d498();
  *(undefined1 *)(iVar1 + 0x3af) = 0;
  iVar1 = FUN_0011d498(param_1);
  FUN_001a7188(*(undefined4 *)(iVar1 + 0x330));
  return;
}


// ==== FUN_0011d490 @ 0011d490 ====

void FUN_0011d490(void)

{
  return;
}


// ==== FUN_0011d498 @ 0011d498 ====

undefined4 FUN_0011d498(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x7c);
}


// ==== FUN_0011d4a8 @ 0011d4a8 ====

int FUN_0011d4a8(int *param_1)

{
  return *param_1 + 0xa0;
}


// ==== FUN_0011d4b8 @ 0011d4b8 ====

undefined8
FUN_0011d4b8(undefined1 (*param_1) [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  auVar7 = _qmtc2(param_2);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _qmtc2(param_3);
  auVar6 = _vsub(auVar3,auVar7);
  auVar3 = _vmul(auVar6,auVar6);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  uVar8 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar8);
  auVar4 = _qmtc2(param_4);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar1 = auVar3._0_4_;
  if (0x37800000 < ((uint)fVar1 & 0x7f800000)) {
    auVar4 = _vsub(auVar4,auVar7);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _qmtc2(1.0 / fVar1);
    auVar6 = _vmulbc(auVar6,auVar3);
    auVar3 = _vmul(auVar4,auVar6);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar5,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    fVar2 = auVar3._0_4_;
    if ((0.25 <= fVar2) && (fVar2 <= fVar1 - 0.25)) {
      auVar3 = _qmtc2(fVar2);
      auVar3 = _vmulbc(auVar6,auVar3);
      auVar3 = _vadd(auVar3,auVar7);
      auVar3 = _sqc2(auVar3);
      *param_1 = auVar3;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0011d5a8 @ 0011d5a8 ====
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0011d5a8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  long lVar1;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 *puVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  float fStack_dc;
  int iStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  uStack_7c = (undefined4)((ulong)param_5 >> 0x20);
  uStack_80 = (undefined4)param_5;
  uStack_9c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_a0 = (undefined4)param_4;
  uStack_ac = (undefined4)((ulong)param_3 >> 0x20);
  uStack_b0 = (undefined4)param_3;
  uStack_c0 = (undefined4)param_2;
  uStack_bc = (undefined4)((ulong)param_2 >> 0x20);
  uStack_b8 = in_a0_udw;
  uStack_b4 = in_register_0000004c;
  uStack_a8 = in_a1_udw;
  uStack_a4 = in_register_0000005c;
  uStack_98 = in_a2_udw;
  uStack_94 = in_register_0000006c;
  uStack_78 = in_a3_udw;
  uStack_74 = in_register_0000007c;
  lVar1 = FUN_0011d4b8(&uStack_d0,uStack_c0,uStack_b0,uStack_a0);
  auVar4._8_4_ = uStack_c8;
  auVar4._0_8_ = uStack_d0;
  auVar4._12_4_ = uStack_c4;
  auVar4 = _lqc2(auVar4);
  if (lVar1 != 0) {
    auVar8._4_4_ = uStack_9c;
    auVar8._0_4_ = uStack_a0;
    auVar8._8_4_ = uStack_98;
    auVar8._12_4_ = uStack_94;
    auVar5 = _lqc2(auVar8);
    auVar8 = _vsub(auVar4,auVar5);
    auVar4 = _vmulbc(auVar8,auVar8);
    auVar4 = _sqc2(auVar4);
    fStack_dc = auVar4._4_4_;
    auVar5._4_4_ = uStack_ac;
    auVar5._0_4_ = uStack_b0;
    auVar5._8_4_ = uStack_a8;
    auVar5._12_4_ = uStack_a4;
    auVar4 = _lqc2(auVar5);
    if (fStack_dc < 0.0625) {
      auVar6._4_4_ = uStack_bc;
      auVar6._0_4_ = uStack_c0;
      auVar6._8_4_ = uStack_b8;
      auVar6._12_4_ = uStack_b4;
      auVar5 = _lqc2(auVar6);
      auVar6 = _vsub(auVar4,auVar5);
      _vmove(auVar8);
      auVar4 = _vsub(in_vf0,auVar6);
      auVar7 = _qmtc2(0);
      auVar4 = _sqc2(auVar4);
      auVar5 = _qmfc2(auVar6._0_4_);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar9 = _vaddbc(in_vf0,auVar7);
      iStack_d8 = auVar4._8_4_;
      auVar4 = _sqc2(auVar6);
      auVar5 = _pextlw((long)auVar5._0_4_,(long)iStack_d8);
      auStack_90 = _sqc2(auVar8);
      fStack_dc = auVar4._4_4_;
      auVar4 = _pextlw((long)(int)fStack_dc,auVar5._0_8_);
      auVar5 = _lqc2(auStack_90);
      auVar4 = _qmtc2(auVar4._0_4_);
      auVar4 = _vmul(auVar9,auVar4);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar5,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar7._4_4_ = uStack_7c;
      auVar7._0_4_ = uStack_80;
      auVar7._8_4_ = uStack_78;
      auVar7._12_4_ = uStack_74;
      auVar5 = _lqc2(auVar7);
      if (0.0 < auVar4._0_4_) {
        auVar8 = _vmul(auVar9,auVar9);
        auVar5 = _vsub(in_vf0,auVar5);
        auVar6 = _vaddbc(in_vf0,in_vf0);
        auVar4 = _vmul(auVar5,auVar5);
        _vaddabc(auVar8,auVar8);
        auVar8 = _vmaddbc(auVar6,auVar8);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar6,auVar4);
        auStack_60 = _sqc2(auVar8);
        auVar5 = _vmove(auVar5);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar4);
        auVar4 = _vaddbc(in_vf0,in_vf0);
        uVar10 = _vwaitq();
        auVar5 = _vmulq(auVar5,uVar10);
        _vmulq(auVar4,uVar10);
        auVar8 = _vsubbc(in_vf0,in_vf0);
        auVar4 = _lqc2(auStack_60);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar4);
        auVar4 = _vaddbc(in_vf0,in_vf0);
        uVar10 = _vwaitq();
        auVar6 = _vmulq(auVar9,uVar10);
        _vmulq(auVar4,uVar10);
        auStack_40 = _sqc2(auVar5);
        auVar4 = _vmul(auVar5,auVar6);
        auVar5 = _lqc2(auStack_90);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar5,auVar4);
        auStack_50 = _sqc2(auVar6);
        auVar4 = _vmax(auVar4,auVar8);
        uStack_70 = (undefined4)_DAT_004432c0;
        uStack_6c = (undefined4)((ulong)_DAT_004432c0 >> 0x20);
        uStack_68 = DAT_004432c8;
        uStack_64 = DAT_004432cc;
        auVar4 = _vminibc(auVar4,in_vf0);
        auVar4 = _qmfc2(auVar4._0_4_);
        fVar3 = (float)acosf(auVar4._0_4_);
        auVar4 = _lqc2(auStack_40);
        auVar5 = _lqc2(auStack_50);
        _vopmula(auVar4,auVar5);
        auVar5 = _vopmsub(auVar5,auVar4);
        auVar9._4_4_ = uStack_6c;
        auVar9._0_4_ = uStack_70;
        auVar9._8_4_ = uStack_68;
        auVar9._12_4_ = uStack_64;
        auVar4 = _lqc2(auVar9);
        auVar4 = _vmul(auVar5,auVar4);
        auVar5 = _lqc2(auStack_90);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar5,auVar4);
        fVar3 = fVar3 * 57.29578;
        auVar4 = _qmfc2(auVar4._0_4_);
        if (0.0 < auVar4._0_4_) {
          fVar3 = -fVar3;
        }
        if (fVar3 < -75.0) {
          return 0;
        }
        auVar4 = _lqc2(auStack_60);
        if (75.0 < fVar3) {
          return 0;
        }
        _vnop();
        _vnop();
        _vnop();
        _vsqrt(auVar4);
        auVar4 = _vaddbc(in_vf0,in_vf0);
        uVar10 = _vwaitq();
        auVar4 = _vmulq(auVar4,uVar10);
        auVar4 = _qmfc2(auVar4._0_4_);
        if (param_1 <= auVar4._0_4_) {
          return 0;
        }
        if (param_6 != 0) {
          puVar2 = (undefined4 *)param_6;
          *puVar2 = (int)uStack_d0;
          puVar2[1] = (int)((ulong)uStack_d0 >> 0x20);
          puVar2[2] = uStack_c8;
          puVar2[3] = uStack_c4;
        }
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_0011d848 @ 0011d848 ====

undefined4
FUN_0011d848(undefined4 param_1,long param_2,undefined8 param_3,undefined1 *param_4,
            undefined1 *param_5,undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 in_a2_qw [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8 = _por(in_zero_qw,in_a2_qw);
  auVar9._8_4_ = in_a1_udw;
  auVar9._0_8_ = param_3;
  auVar9._12_4_ = in_register_0000005c;
  auVar9 = _por(in_zero_qw,auVar9);
  if (param_2 != 0) {
    puVar7 = (uint *)param_2;
    uVar6 = 0;
    if (*puVar7 != 0) {
      uVar1 = puVar7[1];
      while( true ) {
        piVar3 = (int *)(uVar1 + uVar6 * 0x40);
        if (*piVar3 == 3) {
          auVar4 = _por(in_zero_qw,auVar9);
          auVar5 = _por(in_zero_qw,auVar8);
          *param_4 = (char)piVar3[0xc];
          *param_5 = *(undefined1 *)((int)piVar3 + 0x31);
          lVar2 = FUN_0011d5a8(param_1,*(undefined8 *)(piVar3 + 4),piVar3[8],auVar4._0_8_,
                               auVar5._0_8_,param_6);
          if (lVar2 != 0) {
            return 1;
          }
          uVar1 = *puVar7;
        }
        else {
          uVar1 = *puVar7;
        }
        uVar6 = uVar6 + 1;
        if (uVar1 <= uVar6) break;
        uVar1 = puVar7[1];
      }
    }
  }
  return 0;
}


// ==== FUN_0011d948 @ 0011d948 ====
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_0011d948(undefined4 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 in_a1_qw [16];
  undefined1 auVar2 [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar3 [16];
  undefined8 in_a3;
  undefined8 in_t0;
  undefined8 in_t1;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4 = _por(in_zero_qw,in_a2_qw);
  auVar5 = _por(in_zero_qw,in_a1_qw);
  lVar1 = FUN_0012bd98(DAT_0040f4d0,*(undefined4 *)(DAT_0040f4d0 + 0x5ab0));
  if (lVar1 != 0) {
    auVar3 = _por(in_zero_qw,auVar4);
    if (*(char *)((int)lVar1 + 0x38) != '\0') {
      auVar2 = _por(in_zero_qw,auVar5);
      lVar1 = FUN_0011d848(param_1,*(undefined4 *)(*(int *)((int)lVar1 + 0xc) + 0x38),auVar2._0_8_,
                           auVar3._0_8_,in_t0,in_t1,in_a3);
      if (lVar1 != 0) {
        return 1;
      }
    }
  }
  lVar1 = FUN_0012bd98(DAT_0040f4d0,*(int *)(DAT_0040f4d0 + 0x5ab0) + 1);
  if (lVar1 != 0) {
    auVar5 = _por(in_zero_qw,auVar5);
    if (*(char *)((int)lVar1 + 0x38) != '\0') {
      auVar4 = _por(in_zero_qw,auVar4);
      lVar1 = FUN_0011d848(param_1,*(undefined4 *)(*(int *)((int)lVar1 + 0xc) + 0x38),auVar5._0_8_,
                           auVar4._0_8_,in_t0,in_t1,in_a3);
      if (lVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_0011da58 @ 0011da58 ====

undefined8
FUN_0011da58(undefined1 (*param_1) [16],undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 (*param_5) [16])

{
  long lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float fStack_7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _qmtc2(param_2);
  auVar2 = _qmfc2(auVar7._0_4_);
  auVar4 = _lqc2(*param_1);
  auVar5 = _lqc2(param_1[1]);
  auVar6 = _vsub(auVar5,auVar4);
  auVar5 = _vmul(auVar6,auVar6);
  auVar4 = _sqc2(auVar6);
  *param_5 = auVar4;
  _vaddabc(auVar5,auVar5);
  auVar4 = _vmaddbc(auVar8,auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  uVar9 = _vwaitq();
  auVar5 = _vmulq(auVar6,uVar9);
  auVar4 = _sqc2(auVar5);
  *param_5 = auVar4;
  auVar4 = _lqc2(param_1[1]);
  auVar4 = _vsub(auVar4,auVar5);
  auStack_60 = _sqc2(auVar7);
  auStack_50 = _sqc2(auVar8);
  auVar4 = _qmfc2(auVar4._0_4_);
  lVar1 = FUN_0011d4b8(auStack_70,*(undefined4 *)*param_1,auVar4._0_8_,auVar2._0_8_);
  auVar4 = _lqc2(auStack_60);
  auVar2 = _lqc2(auStack_50);
  if (lVar1 == 0) {
    auVar6 = _lqc2(*param_1);
    auVar5 = _vsubbc(auVar6,auVar4);
    auVar5 = _sqc2(auVar5);
    fStack_7c = auVar5._4_4_;
    if (0.5 <= ABS(fStack_7c)) {
      return 0;
    }
    auVar5 = _vsub(auVar6,auVar4);
    auVar5 = _vmul(auVar5,auVar5);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar2,auVar5);
    fVar3 = *(float *)param_1[2] * 0.3;
    auVar5 = _qmfc2(auVar5._0_4_);
    if (fVar3 * fVar3 <= auVar5._0_4_) {
      return 0;
    }
    auVar5 = _lqc2(param_1[1]);
    auVar7 = _qmtc2(0);
    _vsub(auVar4,auVar5);
    auVar4 = _vsubbc(auVar5,auVar6);
    auVar5 = _vaddbc(in_vf0,auVar7);
    auVar4 = _sqc2(auVar4);
    fStack_7c = auVar4._4_4_;
    auVar4 = _vmul(auVar5,auVar5);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar2,auVar4);
  }
  else {
    auVar6 = _lqc2(auStack_70);
    auVar5 = _vsub(auVar6,auVar4);
    auVar5 = _vmul(auVar5,auVar5);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar2,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (*(float *)param_1[2] * *(float *)param_1[2] <= auVar5._0_4_) {
      return 0;
    }
    auVar4 = _vsubbc(auVar6,auVar4);
    auVar4 = _sqc2(auVar4);
    fStack_7c = auVar4._4_4_;
    if (0.5 <= ABS(fStack_7c)) {
      return 0;
    }
    auVar4 = _lqc2(param_1[1]);
    auVar7 = _qmtc2(0);
    auVar5 = _lqc2(*param_1);
    _vsub(auVar6,auVar4);
    auVar4 = _vsubbc(auVar4,auVar5);
    auVar5 = _vaddbc(in_vf0,auVar7);
    auVar4 = _sqc2(auVar4);
    fStack_7c = auVar4._4_4_;
    auVar4 = _vmul(auVar5,auVar5);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar2,auVar4);
  }
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar4);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  uVar9 = _vwaitq();
  auVar4 = _vmulq(auVar4,uVar9);
  auVar4 = _qmfc2(auVar4._0_4_);
  *param_3 = fStack_7c;
  *param_4 = auVar4._0_4_;
  return 1;
}


// ==== FUN_0011dc80 @ 0011dc80 ====

undefined4 FUN_0011dc80(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_zero_qw [16];
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined1 in_a1_qw [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = 0;
  auVar6 = _por(in_zero_qw,in_a1_qw);
  if (*param_1 != 0) {
    uVar1 = param_1[1];
    while( true ) {
      piVar2 = (int *)(uVar1 + uVar5 * 0x40);
      if (*piVar2 == 4) {
        auVar4 = _por(in_zero_qw,auVar6);
        lVar3 = FUN_0011da58(piVar2 + 4,auVar4._0_8_,param_2,param_3,param_4);
        if (lVar3 != 0) {
          return 1;
        }
        uVar1 = *param_1;
      }
      else {
        uVar1 = *param_1;
      }
      uVar5 = uVar5 + 1;
      if (uVar1 <= uVar5) break;
      uVar1 = param_1[1];
    }
  }
  return 0;
}


// ==== FUN_0011dd48 @ 0011dd48 ====
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_0011dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 in_a1_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _por(in_zero_qw,in_a1_qw);
  lVar1 = FUN_0012bd98(DAT_0040f4d0,*(undefined4 *)(DAT_0040f4d0 + 0x5ab0));
  if ((lVar1 != 0) && (*(char *)((int)lVar1 + 0x38) != '\0')) {
    auVar2 = _por(in_zero_qw,auVar3);
    lVar1 = FUN_0011dc80(*(undefined4 *)(*(int *)((int)lVar1 + 0xc) + 0x38),auVar2._0_8_,param_2,
                         param_3,param_4);
    if (lVar1 != 0) {
      return 1;
    }
  }
  lVar1 = FUN_0012bd98(DAT_0040f4d0,*(int *)(DAT_0040f4d0 + 0x5ab0) + 1);
  if (lVar1 != 0) {
    auVar3 = _por(in_zero_qw,auVar3);
    if ((*(char *)((int)lVar1 + 0x38) != '\0') &&
       (lVar1 = FUN_0011dc80(*(undefined4 *)(*(int *)((int)lVar1 + 0xc) + 0x38),auVar3._0_8_,param_2
                             ,param_3,param_4), lVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0011de40 @ 0011de40 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f510 int

void FUN_0011de40(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 auStack_460 [696];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  
  uVar4 = FUN_0011d498();
  iVar6 = (int)uVar4;
  uStack_498 = *(undefined4 *)(iVar6 + 0x78);
  uStack_494 = *(undefined4 *)(iVar6 + 0x7c);
  uStack_4a0 = (undefined4)*(undefined8 *)(iVar6 + 0x70);
  uStack_49c = (undefined4)((ulong)*(undefined8 *)(iVar6 + 0x70) >> 0x20);
  uStack_490 = *(undefined4 *)(iVar6 + 0x80);
  uStack_48c = *(undefined4 *)(iVar6 + 0x84);
  uStack_488 = *(undefined4 *)(iVar6 + 0x88);
  uStack_484 = *(undefined4 *)(iVar6 + 0x8c);
  uStack_480 = *(undefined4 *)(iVar6 + 0x90);
  uStack_47c = *(undefined4 *)(iVar6 + 0x94);
  uStack_478 = *(undefined4 *)(iVar6 + 0x98);
  uStack_474 = *(undefined4 *)(iVar6 + 0x9c);
  uStack_470 = *(undefined4 *)(iVar6 + 0xa0);
  uStack_46c = *(undefined4 *)(iVar6 + 0xa4);
  uStack_468 = *(undefined4 *)(iVar6 + 0xa8);
  uStack_464 = *(undefined4 *)(iVar6 + 0xac);
  for (iVar5 = 2; iVar5 != -1; iVar5 = iVar5 + -1) {
  }
  iVar5 = 2;
  do {
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  iVar5 = 6;
  do {
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  iVar5 = 6;
  do {
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  cVar2 = FUN_0012b950(DAT_0040f4d0,*(undefined4 *)(iVar6 + 0xbc),&uStack_4a0,0x401,auStack_460,
                       param_1 + 0x40);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x20) = (int)auStack_460._688_8_;
    *(int *)(param_1 + 0x24) = SUB84(auStack_460._688_8_,4);
    *(undefined4 *)(param_1 + 0x28) = uStack_1a8;
    *(undefined4 *)(param_1 + 0x2c) = uStack_1a4;
    *(int *)(param_1 + 0x10) = (int)uStack_1a0;
    *(int *)(param_1 + 0x14) = (int)((ulong)uStack_1a0 >> 0x20);
    *(undefined4 *)(param_1 + 0x18) = uStack_198;
    *(undefined4 *)(param_1 + 0x1c) = uStack_194;
    if (*(int *)(param_1 + 0x40) == 3) {
      FUN_0016ba18(uVar4);
    }
    FUN_001dfed0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),uVar4,
                 *(undefined8 *)(param_1 + 0x10));
  }
  uVar3 = FUN_0012b720(DAT_0040f4d0,*(undefined4 *)(iVar6 + 0xbc),&uStack_4a0,2);
  *(undefined1 *)(param_1 + 5) = uVar3;
  return;
}


// ==== FUN_0011dfc0 @ 0011dfc0 ====
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4

void FUN_0011dfc0(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  uVar2 = FUN_0011d498();
  FUN_00135940(auStack_70,uVar2,2);
  iVar4 = (int)uVar2;
  uStack_38 = *(undefined4 *)(iVar4 + 0xa8);
  uStack_34 = *(undefined4 *)(iVar4 + 0xac);
  uStack_40 = (undefined4)*(undefined8 *)(iVar4 + 0xa0);
  uStack_3c = (undefined4)((ulong)*(undefined8 *)(iVar4 + 0xa0) >> 0x20);
  uStack_60 = DAT_004432c0;
  uStack_5c = DAT_004432c4;
  uStack_58 = DAT_004432c8;
  uStack_54 = DAT_004432cc;
  bVar1 = false;
  if ((1.0 - ABS((float)auStack_50._4_4_) <= 0.1) &&
     (bVar1 = false, -0.1 <= 1.0 - ABS((float)auStack_50._4_4_))) {
    bVar1 = true;
  }
  auVar5 = _lqc2(auStack_70);
  if (bVar1) {
    auVar6 = _vsub(in_vf0,auVar5);
    auVar3 = _qmfc2(auVar5._0_4_);
    auVar5 = _sqc2(auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auStack_30._8_4_ = auVar5._8_4_;
    auVar5 = _pextlw((long)auVar3._0_4_,(long)(int)auStack_30._8_4_);
    auVar5 = _pextlw(0,auVar5._0_8_);
    auVar5 = _qmtc2(auVar5._0_4_);
    auVar3 = _vmul(auVar5,auVar5);
    _sqc2(auVar5);
    _sqc2(auVar5);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar7 = _vwaitq();
    auVar3 = _vmulq(auVar5,uVar7);
    auVar5 = _sqc2(auVar3);
    auVar6 = _vsub(in_vf0,auVar3);
    auStack_50 = _sqc2(auVar3);
    auVar3 = _qmfc2(auVar6._0_4_);
    auStack_30._8_4_ = auVar5._8_4_;
    auVar5 = _pextlw((long)auVar3._0_4_,(long)(int)auStack_30._8_4_);
    auStack_30 = _pextlw(0,auVar5._0_8_);
    auStack_70 = auStack_30;
  }
  else {
    auVar5 = _lqc2(auStack_50);
    auVar6 = _vsub(in_vf0,auVar5);
    auVar3 = _qmfc2(auVar5._0_4_);
    auVar5 = _sqc2(auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auStack_30._8_4_ = auVar5._8_4_;
    auVar5 = _pextlw((long)auVar3._0_4_,(long)(int)auStack_30._8_4_);
    auVar5 = _pextlw(0,auVar5._0_8_);
    auVar5 = _qmtc2(auVar5._0_4_);
    auVar3 = _vmul(auVar5,auVar5);
    _sqc2(auVar5);
    _sqc2(auVar5);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar7 = _vwaitq();
    auVar3 = _vmulq(auVar5,uVar7);
    auVar5 = _sqc2(auVar3);
    auVar6 = _vsub(in_vf0,auVar3);
    auStack_70 = _sqc2(auVar3);
    auVar3 = _qmfc2(auVar6._0_4_);
    auStack_30._8_4_ = auVar5._8_4_;
    auVar5 = _pextlw((long)auVar3._0_4_,(long)(int)auStack_30._8_4_);
    auStack_30 = _pextlw(0,auVar5._0_8_);
    auStack_50 = auStack_30;
  }
  FUN_00125f88(uVar2,auStack_70);
  return;
}


// ==== FUN_0011e1b8 @ 0011e1b8 ====
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_0040f4d0 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0011e1b8(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  
  uVar1 = FUN_0011d498();
  FUN_00135940(auStack_60,uVar1,2);
  auVar3 = _qmtc2(0x42480000);
  auVar4 = _lqc2(_DAT_004432c0);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar3 = _qmtc2((int)uStack_30);
  auVar3 = _vsub(auVar3,auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  lVar2 = FUN_0012ae58(DAT_0040f4d0,uStack_30,auVar3._0_8_,0x21,0,0,auStack_a0);
  if (lVar2 != 0) {
    *param_2 = auStack_a0._0_4_;
    param_2[1] = auStack_a0._4_4_;
    param_2[2] = uStack_98;
    param_2[3] = uStack_94;
  }
  return 0;
}


// ==== FUN_0011e240 @ 0011e240 ====

undefined4 FUN_0011e240(int param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fStack_2c;
  
  if ((*(int *)(param_1 + 0x40) != 3) &&
     (fStack_2c = SUB124(*(undefined1 (*) [12])param_2[1],4), 0.99 < fStack_2c)) {
    iVar1 = FUN_0011d498();
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar2 = _lqc2(*param_2);
    auVar2 = _vsubbc(auVar2,auVar3);
    auVar2 = _sqc2(auVar2);
    fStack_2c = auVar2._4_4_;
    if (ABS(fStack_2c) < 0.01) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0011e2e0 @ 0011e2e0 ====

void FUN_0011e2e0(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_0011e1b8(param_1,auStack_20);
  return;
}


// ==== FUN_0011e300 @ 0011e300 ====

void FUN_0011e300(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  
  uVar3 = FUN_0011d498();
  iVar4 = (int)uVar3;
  uVar1 = *(undefined4 *)(iVar4 + 0x330);
  iVar2 = *(int *)(iVar4 + 0xb4);
  FUN_0011dfc0(param_1);
  FUN_00136f10(uVar3,1);
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar4 + 0x3ab) = 1;
  uStack_80 = 1;
  uStack_78 = 0x3f800000;
  uStack_74 = 0xb;
  uStack_7c = param_2;
  uStack_70 = param_3;
  FUN_001a6330(uVar1,&uStack_80);
  return;
}


// ==== FUN_0011e3a8 @ 0011e3a8 ====

void FUN_0011e3a8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_0011d498();
  lVar3 = FUN_001a7df0(*(undefined4 *)(iVar2 + 0x330),0,7);
  puVar4 = (undefined4 *)param_1;
  if (lVar3 == 2) {
    if (param_2 != 0) {
      FUN_001412e8(*puVar4,8);
    }
    *(undefined1 *)(puVar4 + 0x12) = 1;
  }
  else if (param_2 != 0) {
    if (*(char *)(iVar2 + 0x3b1) == '\0') {
      FUN_0011de40(param_1);
      if (*(char *)((int)puVar4 + 5) == '\0') {
        if (*(char *)(puVar4 + 1) == '\0') {
          return;
        }
        lVar3 = FUN_0011e240(param_1,puVar4 + 4);
        if (lVar3 != 0) {
          return;
        }
        uVar1 = *puVar4;
      }
      else {
        uVar1 = *puVar4;
      }
      FUN_001412e8(uVar1,8);
    }
    else {
      FUN_001412e8(*puVar4,8);
    }
  }
  return;
}


// ==== FUN_0011e488 @ 0011e488 ====

void FUN_0011e488(undefined8 param_1)

{
  FUN_0011d430(param_1,2);
  FUN_00382348(0x40eaf0,0x2b9d6f8);
  return;
}


// ==== FUN_0011e4b8 @ 0011e4b8 ====

void FUN_0011e4b8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  
  uVar3 = FUN_0011d498();
  puVar5 = (undefined4 *)param_1;
  iVar2 = puVar5[0x14];
  iVar6 = (int)uVar3;
  uVar1 = *(undefined4 *)(iVar6 + 0x330);
  if (iVar2 == 1) {
    FUN_0011e3a8(param_1,1);
  }
  else if (iVar2 < 2) {
    if (iVar2 == 0) {
      uStack_7c = 0xc;
      uStack_78 = 0x3f800000;
      uStack_74 = 0xb;
      uStack_80 = 2;
      uStack_70 = FUN_00135cc8(uVar3);
      FUN_001a6330(uVar1,&uStack_80);
      FUN_0011de40(param_1);
      if ((*(char *)(puVar5 + 1) != '\0') || (*(char *)((int)puVar5 + 5) != '\0')) {
        if (*(char *)((int)puVar5 + 5) == '\0') {
          lVar4 = FUN_0011e240(param_1,puVar5 + 4);
          if (lVar4 != 0) {
            iVar2 = FUN_0011d4a8(param_1);
            auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
            auVar9 = _vaddbc(in_vf0,in_vf0);
            auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
            auVar7 = _vmul(auVar7,auVar8);
            _vaddabc(auVar7,auVar7);
            auVar7 = _vmaddbc(auVar9,auVar7);
            auVar7 = _qmfc2(auVar7._0_4_);
            FUN_0011e300(param_1,3,0.0 < auVar7._0_4_);
            puVar5[0x14] = 1;
            return;
          }
          uVar1 = *puVar5;
        }
        else {
          uVar1 = *puVar5;
        }
        FUN_001412e8(uVar1,8);
        puVar5[0x14] = 2;
      }
    }
  }
  else if (iVar2 == 2) {
    lVar4 = FUN_00141498(*puVar5);
    if (lVar4 == 0) {
      FUN_00141460(*puVar5);
    }
    else {
      lVar4 = FUN_00141490(*puVar5);
      if (lVar4 != 0) {
        iVar2 = FUN_0011d4a8(param_1);
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
        auVar9 = _vaddbc(in_vf0,in_vf0);
        auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
        auVar7 = _vmul(auVar7,auVar8);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar9,auVar7);
        auVar7 = _qmfc2(auVar7._0_4_);
        FUN_0011e300(param_1,3,0.0 < auVar7._0_4_);
        puVar5[0x14] = 3;
      }
    }
  }
  else if (iVar2 == 3) {
    FUN_0011e3a8(param_1,0);
  }
  return;
}


// ==== FUN_0011e6d0 @ 0011e6d0 ====
// GLOBAL DAT_0040eaf0 uint
// GLOBAL DAT_0040eaf4 int
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e6d0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_0011d450();
  iVar4 = FUN_0011d498(param_1);
  iVar5 = *(int *)(iVar4 + 0xb4);
  *(undefined1 *)(iVar5 + 0x3c) = 1;
  *(undefined1 *)(iVar4 + 0x3ab) = 0;
  iVar4 = FUN_0011d4a8(param_1);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x10));
  DAT_0040eaf0 = DAT_0040eaf0 * 0x10000 + ((int)DAT_0040eaf0 >> 0x10) + DAT_0040eaf4;
  DAT_0040eaf4 = DAT_0040eaf4 + DAT_0040eaf0;
  auVar9 = _vaddbc(in_vf0,in_vf0);
  _vmove(auVar8);
  auVar8 = _sqc2(auVar9);
  auVar9 = _qmtc2((float)DAT_0040eaf0 * 2.3283064e-10 * 0.4 + 0.6);
  auVar11 = _vaddbc(in_vf0,auVar9);
  auVar10 = _lqc2(auVar8);
  auVar9 = _vmul(auVar11,auVar11);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar10,auVar9);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar9);
  uVar14 = _vwaitq();
  auVar9 = _vmulq(auVar11,uVar14);
  auVar9 = _sqc2(auVar9);
  iVar4 = FUN_0011d4a8(param_1);
  fVar7 = *(float *)(iVar4 + 0x20) * 0.075;
  fVar7 = (float)((int)fVar7 * (uint)(8.0 < fVar7) | (uint)(8.0 >= fVar7) * 0x41000000);
  auVar10 = _lqc2(auVar9);
  auVar9 = _qmtc2((int)fVar7 * (uint)(fVar7 < 12.0) | (uint)(fVar7 >= 12.0) * 0x41400000);
  auVar9 = _vmulbc(auVar10,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  FUN_0025d860(iVar5,auVar9._0_8_);
  iVar5 = FUN_0011d4a8(param_1);
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar1 = DAT_004432c4;
  uVar14 = DAT_004432c0;
  _lqc2(*(undefined1 (*) [16])(iVar5 + 0x10));
  auVar9 = _qmtc2(0);
  auVar10 = _lqc2(auVar8);
  auVar9 = _vaddbc(in_vf0,auVar9);
  auVar8 = _vmul(auVar9,auVar9);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar10,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  piVar6 = (int *)param_1;
  if (auVar8._0_4_ < 2.3283064e-10) {
    iVar5 = *piVar6;
  }
  else {
    auVar8 = _vmul(auVar9,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar9 = _vmove(auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar15 = _vwaitq();
    auVar13 = _vmulq(auVar9,uVar15);
    auVar11 = _lqc2(_DAT_004432d0);
    auVar8 = _vmul(auVar11,auVar11);
    auVar9 = _vmul(auVar13,auVar13);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    uVar15 = _vwaitq();
    auVar8 = _vmulq(auVar11,uVar15);
    _vmulq(auVar10,uVar15);
    auVar10 = _vmove(auVar13);
    auVar8 = _sqc2(auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar15 = _vwaitq();
    auVar12 = _vmulq(auVar10,uVar15);
    _vmulq(auVar9,uVar15);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _sqc2(auVar11);
    auVar10 = _lqc2(auVar8);
    auVar10 = _vmul(auVar12,auVar10);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    auVar11 = _vsubbc(in_vf0,in_vf0);
    auVar10 = _vmax(auVar10,auVar11);
    auVar11 = _vminibc(auVar10,in_vf0);
    auVar10 = _sqc2(auVar12);
    auVar12 = _qmfc2(auVar11._0_4_);
    auVar11 = _sqc2(auVar13);
    fVar7 = (float)acosf(auVar12._0_4_);
    auVar10 = _lqc2(auVar10);
    auVar8 = _lqc2(auVar8);
    _vopmula(auVar10,auVar8);
    auVar10 = _vopmsub(auVar8,auVar10);
    auVar8._4_4_ = uVar1;
    auVar8._0_4_ = uVar14;
    auVar8._8_4_ = uVar2;
    auVar8._12_4_ = uVar3;
    auVar8 = _lqc2(auVar8);
    auVar10 = _vmul(auVar10,auVar8);
    auVar8 = _lqc2(auVar9);
    _vaddabc(auVar10,auVar10);
    auVar8 = _vmaddbc(auVar8,auVar10);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar7 = fVar7 * 57.29578;
    auVar9 = _lqc2(auVar11);
    if (0.0 < auVar8._0_4_) {
      fVar7 = -fVar7;
    }
    auVar8 = _qmfc2(auVar9._0_4_);
    FUN_0013ef10(*piVar6,auVar8._0_8_,1);
    *(float *)*piVar6 = fVar7;
    *(float *)(*piVar6 + 4) = fVar7;
    *(float *)(*piVar6 + 8) = fVar7;
    iVar5 = *piVar6;
  }
  *(undefined1 *)(iVar5 + 0x37) = 1;
  piVar6[0x14] = 0;
  return;
}


// ==== FUN_0011ea10 @ 0011ea10 ====

void FUN_0011ea10(int param_1)

{
  FUN_0011d490();
  *(undefined4 *)(param_1 + 0x50) = 4;
  return;
}


// ==== FUN_0011ea48 @ 0011ea48 ====

void FUN_0011ea48(undefined8 param_1)

{
  FUN_0011d430(param_1,6);
  return;
}


// ==== FUN_0011ea68 @ 0011ea68 ====

void FUN_0011ea68(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  
  uVar1 = FUN_0011d498();
  lVar2 = FUN_001a7df0(*(undefined4 *)((int)uVar1 + 0x330),0,7);
  if (lVar2 == 2) {
    uStack_5c = 4;
    uStack_58 = 0x3f800000;
    uStack_54 = 0xb;
    uStack_60 = 1;
    uStack_50 = FUN_00135cc8(uVar1);
    FUN_001a6330(*(undefined4 *)((int)uVar1 + 0x330),&uStack_60);
    FUN_001412e8(*param_1,8);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}


// ==== FUN_0011eb08 @ 0011eb08 ====

undefined4 FUN_0011eb08(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_0011d4a8();
  fVar2 = (float)FUN_0025d9c0(*(undefined4 *)(*(int *)(iVar1 + 0x34) + 0xb4));
  if ((100.0 <= fVar2) &&
     (iVar1 = FUN_0011d4a8(param_1), 0.5 < (float)((ulong)*(undefined8 *)(iVar1 + 0x10) >> 0x20))) {
    return 1;
  }
  return 0;
}


// ==== FUN_0011eb88 @ 0011eb88 ====

void FUN_0011eb88(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_0011d450();
  iVar1 = FUN_0011d498(param_1);
  uStack_4c = 0xb;
  uStack_50 = 1;
  uStack_44 = 0;
  iVar2 = FUN_0011d4a8(param_1);
  uStack_48 = *(undefined4 *)(iVar2 + 0x20);
  FUN_001a6330(*(undefined4 *)(iVar1 + 0x330),&uStack_50);
  return;
}


// ==== FUN_0011ebf0 @ 0011ebf0 ====

void FUN_0011ebf0(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_0011ec10 @ 0011ec10 ====

void FUN_0011ec10(undefined8 param_1)

{
  FUN_0011d430(param_1,5);
  return;
}


// ==== FUN_0011ec30 @ 0011ec30 ====

void FUN_0011ec30(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  
  uVar1 = FUN_0011d498();
  lVar2 = FUN_00141490(*param_1);
  if (lVar2 == 0) {
    uStack_54 = 0xb;
    uStack_60 = 3;
    uStack_5c = 0x1c;
    uStack_58 = 0x3f800000;
    uStack_50 = FUN_00135cc8(uVar1);
    FUN_001a6330(*(undefined4 *)((int)uVar1 + 0x330),&uStack_60);
  }
  else {
    FUN_001412e8(*param_1,8);
    uStack_5c = 4;
    uStack_58 = 0x3f800000;
    uStack_54 = 0xb;
    uStack_60 = 1;
    uStack_50 = FUN_00135cc8(uVar1);
    FUN_001a6330(*(undefined4 *)((int)uVar1 + 0x330),&uStack_60);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}


// ==== FUN_0011ed08 @ 0011ed08 ====
// GLOBAL DAT_0040f510 int

void FUN_0011ed08(undefined8 param_1)

{
  int iVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  
  FUN_0011d450();
  iVar1 = FUN_0011d498(param_1);
  uStack_50 = 3;
  uStack_44 = 1;
  uStack_4c = 9;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_001a6330(*(undefined4 *)(iVar1 + 0x330),&uStack_50);
  FUN_001e3098(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),*(undefined8 *)(iVar1 + 0xa0)
              );
  FUN_00141460(*(undefined4 *)param_1);
  return;
}


// ==== FUN_0011ed98 @ 0011ed98 ====

void FUN_0011ed98(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_0011edb8 @ 0011edb8 ====

void FUN_0011edb8(undefined8 param_1)

{
  FUN_0011d430(param_1,7);
  return;
}


// ==== FUN_0011edd8 @ 0011edd8 ====

void FUN_0011edd8(undefined4 *param_1)

{
  FUN_001412e8(*param_1,2);
  return;
}


// ==== FUN_0011ee00 @ 0011ee00 ====
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_0040f4d0 undefined4

void FUN_0011ee00(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  FUN_0011d450();
  iVar1 = FUN_0011d498(param_1);
  FUN_0012c428(0x40800000,0x42c80000,DAT_0040f4d0,*(undefined4 *)(iVar1 + 0xa0),DAT_004432c0,
               0x6855dd9ad0643000,2,0,0,1);
  iVar1 = FUN_0011d4a8(param_1);
  *(undefined4 *)(iVar1 + 0x20) = 0x43fa0000;
  iVar1 = FUN_0011d4a8(param_1);
  iVar2 = FUN_0011d4a8(param_1);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
  auVar3 = _vsub(in_vf0,auVar3);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(iVar1 + 0x10) = auVar3;
  return;
}


// ==== FUN_0011eec8 @ 0011eec8 ====

void FUN_0011eec8(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_0011eee8 @ 0011eee8 ====

void FUN_0011eee8(undefined8 param_1)

{
  FUN_0011d430(param_1,0);
  return;
}


// ==== FUN_0011ef08 @ 0011ef08 ====

void FUN_0011ef08(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  char cVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  
  lVar5 = FUN_0011e2e0();
  piVar9 = (int *)param_1;
  if (lVar5 != 0) {
    *(undefined1 *)(piVar9 + 0x12) = 1;
  }
  if (*(char *)((int)piVar9 + 0x5b) == '\0') {
    *(undefined1 *)((int)piVar9 + 0x5b) = 1;
    iVar10 = FUN_0011d4a8(param_1);
    uVar3 = *(undefined8 *)(iVar10 + 0x10);
    uVar7 = *(undefined4 *)(iVar10 + 0x18);
    uVar8 = *(undefined4 *)(iVar10 + 0x1c);
    iVar10 = FUN_0011d4a8(param_1);
    uVar2 = *(undefined1 *)(iVar10 + 0x28);
    iVar10 = FUN_0011d4a8(param_1);
    uVar1 = *(undefined1 *)(iVar10 + 0x30);
    iVar10 = FUN_0011d4a8(param_1);
    auVar6._8_4_ = uVar7;
    auVar6._0_8_ = uVar3;
    auVar6._12_4_ = uVar8;
    auVar6 = _por(in_zero_qw,auVar6);
    cVar4 = FUN_0011f370(param_1,auVar6._0_8_,uVar2,uVar1,*(undefined4 *)(iVar10 + 0x38));
    if (cVar4 != '\x01') {
      FUN_0011f808(param_1);
    }
  }
  else {
    if ((char)piVar9[0x16] == '\0') {
      FUN_0011e3a8(param_1,*(int *)(*piVar9 + 0xcc) != 4);
      iVar10 = piVar9[0x15];
    }
    else {
      FUN_0011f000(param_1);
      iVar10 = piVar9[0x15];
    }
    *(int *)*piVar9 = iVar10;
  }
  return;
}


// ==== FUN_0011f000 @ 0011f000 ====

void FUN_0011f000(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_001735e0(iVar2 + 0x50);
  if (((lVar1 != 0) && (*(char *)(iVar2 + 0x58) != '\0')) &&
     (lVar1 = FUN_00173610(iVar2 + 0x50), lVar1 != 0)) {
    *(undefined1 *)(iVar2 + 0x58) = 0;
    *(undefined1 *)(iVar2 + 0x5a) = 0;
    FUN_0011f808(param_1);
  }
  return;
}


// ==== FUN_0011f070 @ 0011f070 ====
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011f070(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
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
  
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _sqc2(auVar10);
  FUN_0011d450();
  piVar7 = (int *)param_1;
  *(undefined1 *)(piVar7 + 0x16) = 0;
  *(undefined1 *)((int)piVar7 + 0x59) = 0;
  *(undefined1 *)((int)piVar7 + 0x5b) = 0;
  *(undefined1 *)((int)piVar7 + 0x5a) = 1;
  FUN_00173690(piVar7 + 0x14);
  fVar9 = 0.0;
  iVar6 = FUN_0011d4a8(param_1);
  *(undefined4 *)(iVar6 + 0x3c) = 0x3f800000;
  iVar6 = FUN_0011d4a8(param_1);
  *(undefined4 *)(iVar6 + 0x40) = 0x3f800000;
  iVar6 = FUN_0011d4a8(param_1);
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x10));
  auVar12 = _sqc2(auVar12);
  iVar6 = FUN_0011d498(param_1);
  uVar5 = DAT_004432cc;
  uVar4 = DAT_004432c8;
  uVar3 = DAT_004432c4;
  uVar2 = DAT_004432c0;
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xf0));
  auVar13 = _lqc2(auVar12);
  auVar12 = _vmul(auVar13,auVar11);
  auVar11 = _lqc2(auVar10);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar11,auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  bVar1 = fVar9 <= auVar12._0_4_;
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmul(auVar13,auVar13);
  auVar14 = _lqc2(_DAT_004432d0);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar15,auVar12);
  auVar11 = _vmul(auVar14,auVar14);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar12);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  uVar16 = _vwaitq();
  auVar13 = _vmulq(auVar13,uVar16);
  _vmulq(auVar12,uVar16);
  _vaddabc(auVar11,auVar11);
  auVar12 = _vmaddbc(auVar15,auVar11);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar12);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  uVar16 = _vwaitq();
  auVar14 = _vmulq(auVar14,uVar16);
  _vmulq(auVar12,uVar16);
  auVar12 = _vmul(auVar13,auVar14);
  auVar11 = _lqc2(auVar10);
  _vaddabc(auVar12,auVar12);
  auVar11 = _vmaddbc(auVar11,auVar12);
  auVar15 = _vsubbc(in_vf0,in_vf0);
  auVar12 = _sqc2(auVar13);
  auVar11 = _vmax(auVar11,auVar15);
  auVar13 = _vminibc(auVar11,in_vf0);
  auVar11 = _sqc2(auVar14);
  auVar13 = _qmfc2(auVar13._0_4_);
  fVar8 = (float)acosf(auVar13._0_4_);
  auVar11 = _lqc2(auVar11);
  auVar12 = _lqc2(auVar12);
  _vopmula(auVar12,auVar11);
  auVar11 = _vopmsub(auVar11,auVar12);
  auVar12._4_4_ = uVar3;
  auVar12._0_4_ = uVar2;
  auVar12._8_4_ = uVar4;
  auVar12._12_4_ = uVar5;
  auVar12 = _lqc2(auVar12);
  auVar12 = _vmul(auVar11,auVar12);
  auVar10 = _lqc2(auVar10);
  _vaddabc(auVar12,auVar12);
  auVar10 = _vmaddbc(auVar10,auVar12);
  fVar8 = fVar8 * 57.29578;
  auVar10 = _qmfc2(auVar10._0_4_);
  if (fVar9 < auVar10._0_4_) {
    fVar8 = -fVar8;
  }
  if (bVar1) {
    iVar6 = *piVar7;
  }
  else {
    fVar8 = fVar8 + 180.0;
    if (fVar8 < fVar9) {
      fVar8 = -(-fVar8 - (float)(int)(-fVar8 / 360.0) * 360.0);
    }
    else {
      fVar8 = fVar8 - (float)(int)(fVar8 / 360.0) * 360.0;
    }
    if (fVar8 < -180.0) {
      fVar8 = fVar8 + 360.0;
    }
    else if (180.0 < fVar8) {
      fVar8 = fVar8 - 360.0;
    }
    iVar6 = *piVar7;
  }
  *(float *)(iVar6 + 8) = fVar8;
  *(float *)(*piVar7 + 4) = fVar8;
  *(float *)*piVar7 = fVar8;
  piVar7[0x15] = *(int *)*piVar7;
  return;
}


// ==== FUN_0011f350 @ 0011f350 ====

void FUN_0011f350(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_0011f370 @ 0011f370 ====
// GLOBAL DAT_0040f508 undefined4
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0011f370(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,int param_5
            )

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  
  piVar9 = (int *)param_1;
  if (*(char *)((int)piVar9 + 0x5a) == '\0') {
    return 0;
  }
  lVar6 = FUN_001735e0();
  if (lVar6 == 0) {
    iVar8 = *piVar9;
  }
  else {
    lVar6 = FUN_00173610(piVar9 + 0x14);
    if (lVar6 != 0) {
      *(undefined1 *)((int)piVar9 + 0x5a) = 0;
      return 0;
    }
    iVar8 = *piVar9;
  }
  if (*(int *)(iVar8 + 0xcc) != 0) {
    *(undefined1 *)((int)piVar9 + 0x5a) = 0;
    return 0;
  }
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _lqc2(*(undefined1 (*) [16])(param_5 + 0xa0));
  auVar14 = _sqc2(auVar16);
  auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar8 + 0x7c) + 0xa0));
  auVar13 = _vsub(auVar13,auVar15);
  auVar13 = _vmul(auVar13,auVar13);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar16,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  lVar6 = FUN_0011d358(auVar13._0_4_,DAT_0040f508,param_4,param_3);
  if (lVar6 == 0) {
    *(undefined1 *)((int)piVar9 + 0x5a) = 0;
    return 0;
  }
  FUN_00173640(0x3e19999a,piVar9 + 0x14);
  if ((char)piVar9[0x16] == '\0') {
    *(undefined1 *)((int)piVar9 + 0x59) = 1;
    *(undefined1 *)(piVar9 + 0x16) = 1;
  }
  uVar7 = FUN_0011d498(param_1);
  FUN_00136f10(uVar7,0);
  FUN_0011f808(param_1);
  uVar5 = DAT_004432cc;
  uVar4 = DAT_004432c8;
  uVar3 = DAT_004432c4;
  uVar2 = DAT_004432c0;
  auVar13._8_4_ = in_a1_udw;
  auVar13._0_8_ = param_2;
  auVar13._12_4_ = in_register_0000005c;
  auVar13 = _lqc2(auVar13);
  _vsub(in_vf0,auVar13);
  auVar16 = _lqc2(auVar14);
  auVar13 = _qmtc2(0);
  auVar15 = _vaddbc(in_vf0,auVar13);
  auVar13 = _vmul(auVar15,auVar15);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar16,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  if (auVar13._0_4_ < 2.3283064e-10) {
    return 1;
  }
  auVar13 = _vmul(auVar15,auVar15);
  auVar16 = _lqc2(auVar14);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar16,auVar13);
  auVar15 = _vmove(auVar15);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar13);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  uVar19 = _vwaitq();
  auVar17 = _vmulq(auVar15,uVar19);
  _vmulq(auVar13,uVar19);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _lqc2(_DAT_004432d0);
  auVar18 = _vsubbc(in_vf0,in_vf0);
  auVar13 = _sqc2(auVar13);
  auVar15 = _vmul(auVar16,auVar16);
  auVar14 = _lqc2(auVar14);
  _vaddabc(auVar15,auVar15);
  auVar14 = _vmaddbc(auVar14,auVar15);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar14);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  uVar19 = _vwaitq();
  auVar16 = _vmulq(auVar16,uVar19);
  _vmulq(auVar14,uVar19);
  auVar14 = _vmul(auVar17,auVar16);
  auVar15 = _lqc2(auVar13);
  _vaddabc(auVar14,auVar14);
  auVar14 = _vmaddbc(auVar15,auVar14);
  auVar15 = _vmax(auVar14,auVar18);
  auVar14 = _sqc2(auVar16);
  auVar16 = _vminibc(auVar15,in_vf0);
  auVar15 = _sqc2(auVar17);
  auVar16 = _qmfc2(auVar16._0_4_);
  fVar11 = (float)acosf(auVar16._0_4_);
  auVar15 = _lqc2(auVar15);
  auVar14 = _lqc2(auVar14);
  _vopmula(auVar15,auVar14);
  auVar15 = _vopmsub(auVar14,auVar15);
  auVar14._4_4_ = uVar3;
  auVar14._0_4_ = uVar2;
  auVar14._8_4_ = uVar4;
  auVar14._12_4_ = uVar5;
  auVar14 = _lqc2(auVar14);
  auVar15 = _vmul(auVar15,auVar14);
  auVar14 = _lqc2(auVar13);
  _vaddabc(auVar15,auVar15);
  auVar14 = _vmaddbc(auVar14,auVar15);
  auVar14 = _qmfc2(auVar14._0_4_);
  fVar11 = fVar11 * 57.29578;
  if (0.0 < auVar14._0_4_) {
    fVar11 = -fVar11;
  }
  pfVar1 = (float *)*piVar9;
  fVar12 = fVar11 - *pfVar1;
  if (fVar12 < 0.0) {
    fVar12 = -(-fVar12 - (float)(int)(-fVar12 / 360.0) * 360.0);
  }
  else {
    fVar12 = fVar12 - (float)(int)(fVar12 / 360.0) * 360.0;
  }
  if (fVar12 < -180.0) {
    fVar12 = fVar12 + 360.0;
  }
  else {
    if (fVar12 <= 180.0) {
      fVar10 = *pfVar1;
      goto LAB_0011f6cc;
    }
    fVar12 = fVar12 - 360.0;
  }
  fVar10 = *pfVar1;
LAB_0011f6cc:
  fVar10 = -fVar11 - fVar10;
  if (fVar10 < 0.0) {
    fVar10 = -(-fVar10 - (float)(int)(-fVar10 / 360.0) * 360.0);
  }
  else {
    fVar10 = fVar10 - (float)(int)(fVar10 / 360.0) * 360.0;
  }
  if (fVar10 < -180.0) {
    fVar10 = fVar10 + 360.0;
  }
  else if (180.0 < fVar10) {
    fVar10 = fVar10 - 360.0;
  }
  if (ABS(fVar10) < ABS(fVar12)) {
    piVar9[0x15] = (int)-fVar11;
  }
  else {
    piVar9[0x15] = (int)fVar11;
  }
  return 1;
}


// ==== FUN_0011f808 @ 0011f808 ====

void FUN_0011f808(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar1 = FUN_0011d498();
  if (*(int *)(*(int *)param_1 + 0xcc) == 2) {
    iVar2 = FUN_0011d4a8(param_1);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
    auVar3 = _vmul(auVar3,auVar4);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar5,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    FUN_0011e300(param_1,2,auVar3._0_4_ < 0.0);
  }
  else {
    iVar2 = FUN_0011d4a8(param_1);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
    auVar3 = _vmul(auVar3,auVar4);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar5,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    FUN_0011e300(param_1,1,auVar3._0_4_ < 0.0);
  }
  return;
}


// ==== FUN_0011f8f8 @ 0011f8f8 ====

void FUN_0011f8f8(undefined8 param_1)

{
  FUN_0011d430(param_1,8);
  return;
}


// ==== FUN_0011f918 @ 0011f918 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4cc undefined4

void FUN_0011f918(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar2 = FUN_0011d498();
  uVar1 = FUN_0025dd08(*(undefined4 *)(param_1 + 0x50));
  auVar6 = _qmtc2(uVar1);
  auVar6 = _vmul(auVar6,auVar6);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar1 = _vwaitq();
  auVar6 = _vmulq(auVar6,uVar1);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (auVar6._0_4_ < 0.3) {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - *(float *)(DAT_0040f4d0 + 0x1c);
    if (*(char *)(param_1 + 0x58) == '\0') {
      FUN_001dfed0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),uVar2,
                   *(undefined4 *)((int)uVar2 + 0xa0));
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x40a00000;
  }
  fVar4 = *(float *)(DAT_0040f4d0 + 0x20);
  fVar5 = *(float *)(*(int *)(param_1 + 0x50) + 0x14);
  lVar3 = FUN_0025dc98();
  if (((lVar3 != 0) || (15.0 < fVar4 - fVar5)) || (*(float *)(param_1 + 0x54) <= 0.0)) {
    FUN_00136e88(uVar2,0);
    FUN_0025c4c8(DAT_0040f4cc,*(undefined4 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}


// ==== FUN_0011fa90 @ 0011fa90 ====
// GLOBAL DAT_0040f4cc undefined4

bool FUN_0011fa90(int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_0011d498();
  if (*(char *)(*(int *)(iVar2 + 0x330) + 0x235) == '\0') {
    bVar1 = false;
  }
  else {
    lVar3 = FUN_0025c320(DAT_0040f4cc);
    *(int *)(param_1 + 0x50) = (int)lVar3;
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


// ==== FUN_0011fae0 @ 0011fae0 ====
// GLOBAL DAT_0040f4cc undefined4
// GLOBAL DAT_0040f4d0 int

void FUN_0011fae0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uStack_50;
  
  FUN_0011d450();
  uVar3 = FUN_0011d498(param_1);
  FUN_00135ea8(0,0,uVar3);
  iVar1 = (int)uVar3;
  *(undefined1 *)(*(int *)(iVar1 + 0x330) + 0x234) = 0;
  *(undefined1 *)(iVar1 + 0x3af) = 1;
  *(undefined1 *)(iVar1 + 0x3ab) = 0;
  iVar4 = (int)param_1;
  FUN_0025c3b8(DAT_0040f4cc,*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar1 + 0xb4));
  FUN_00136e88(uVar3,*(undefined4 *)(iVar4 + 0x50));
  fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
  iVar1 = FUN_0011d4a8(param_1);
  fVar5 = (fVar5 - *(float *)(iVar1 + 0x44)) / 0.33333334;
  if (fVar5 < 1.0) {
    iVar1 = FUN_0011d4a8(param_1);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _vmove(auVar7);
    auVar8 = _qmtc2(*(undefined4 *)(iVar1 + 0x10));
    auVar6 = _vmul(auVar8,auVar8);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (2.3283064e-10 <= auVar6._0_4_) {
      auVar6 = _vmul(auVar8,auVar8);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar9,auVar6);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      uVar10 = _vwaitq();
      auVar6 = _vmulq(auVar8,uVar10);
      auVar6 = _sqc2(auVar6);
      iVar1 = FUN_0011d4a8(param_1);
      puVar2 = (undefined8 *)FUN_0011d4a8(param_1);
      uStack_50 = auVar6._0_4_;
      FUN_00260fb0((1.0 - fVar5) * 12.5,*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar1 + 0x28),
                   *puVar2,uStack_50);
    }
  }
  *(undefined1 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0x40a00000;
  return;
}


// ==== FUN_0011fc80 @ 0011fc80 ====
// GLOBAL DAT_0040f4cc undefined4

void FUN_0011fc80(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_0011d490();
  uVar1 = FUN_0011d498(param_1);
  iVar2 = (int)param_1;
  if (*(int *)((int)uVar1 + 0x350) == 0) {
    *(undefined1 *)(iVar2 + 0x58) = 0;
  }
  else {
    FUN_00136e88(uVar1,0);
    FUN_0025c4c8(DAT_0040f4cc,*(undefined4 *)(iVar2 + 0x50));
    *(undefined1 *)(iVar2 + 0x58) = 0;
  }
  return;
}


// ==== FUN_0011fcd8 @ 0011fcd8 ====

void FUN_0011fcd8(undefined8 param_1)

{
  FUN_0011d430(param_1,3);
  return;
}


// ==== FUN_0011fcf8 @ 0011fcf8 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int

void FUN_0011fcf8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  float extraout_v0_hi;
  undefined1 auVar4 [16];
  int *piVar5;
  float fVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar2 = FUN_0011d498();
  piVar5 = (int *)param_1;
  uVar1 = *(undefined4 *)(iVar2 + 0x330);
  iVar7 = *(int *)(iVar2 + 0xb4);
  switch(piVar5[0x15]) {
  case 1:
    goto switchD_0011fd48_caseD_1;
  case 2:
    goto switchD_0011fd48_caseD_2;
  case 3:
    goto switchD_0011fd48_caseD_3;
  case 4:
    FUN_001a6930(uVar1);
    FUN_0011e300(param_1,4,0.0 < extraout_v0_hi);
    piVar5[0x15] = 5;
    break;
  case 5:
    FUN_0011e3a8(param_1,0);
    break;
  case 6:
    piVar5[0x15] = 0;
    FUN_0013ef10(*piVar5);
    *(int *)(*piVar5 + 0x10) = piVar5[0x20];
  case 0:
    if (0.0 < (float)piVar5[0x22]) {
      piVar5[0x22] = (int)((float)piVar5[0x22] - *(float *)(DAT_0040f4d0 + 0x1c));
      FUN_0013ef10(*piVar5);
      iVar7 = piVar5[0x20];
    }
    else {
      piVar5[0x15] = 1;
      FUN_0013ef10(*piVar5);
      *(int *)(*piVar5 + 0x10) = piVar5[0x21];
      auVar4 = _pextlw(0,0);
      auVar4 = _pextlw(0x3f99999a,auVar4._0_8_);
      auVar8 = _qmtc2(auVar4._0_4_);
      auVar4 = _qmtc2(*(undefined4 *)(iVar2 + 0xa0));
      auVar4 = _vadd(auVar4,auVar8);
      auVar4 = _qmfc2(auVar4._0_4_);
      FUN_0012c428(0x3f400000,0x43480000,DAT_0040f4d0,auVar4._0_8_,*(undefined8 *)(piVar5 + 0x1c),0,
                   0xd,0,0,1);
      FUN_001e3098(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14));
switchD_0011fd48_caseD_1:
      if ((float)piVar5[0x23] <= 0.0) {
        piVar5[0x15] = 2;
        *(undefined1 *)(iVar2 + 0x3b3) = 0;
        *(undefined4 *)(*piVar5 + 0x10) = 0;
switchD_0011fd48_caseD_2:
        if (*(char *)(iVar2 + 0x3b3) == '\0') {
          fVar6 = (float)piVar5[0x24];
        }
        else {
          FUN_001412e8(*piVar5,8);
          fVar6 = (float)piVar5[0x24];
        }
        if (0.0 < fVar6) {
          piVar5[0x24] = (int)(fVar6 - *(float *)(DAT_0040f4d0 + 0x1c));
          *(undefined4 *)(*piVar5 + 0x10) = 0;
          return;
        }
        piVar5[0x15] = 3;
switchD_0011fd48_caseD_3:
        if ((float)piVar5[0x25] < 0.0) {
          *(undefined1 *)(piVar5 + 0x12) = 1;
          return;
        }
        piVar5[0x25] = (int)((float)piVar5[0x25] - *(float *)(DAT_0040f4d0 + 0x1c));
        if ((*(char *)(iVar7 + 0x3c) == '\0') && (lVar3 = FUN_001a7df0(uVar1,0,7), lVar3 == 2)) {
          *(undefined1 *)(iVar2 + 0x3af) = 0;
          *(undefined1 *)(iVar7 + 0x3c) = 1;
          FUN_0025d860(iVar7);
          auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
          auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x330) + 0x1a0));
          auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
          auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
          _vmulabc(auVar8,auVar9);
          _vmaddabc(auVar4,auVar9);
          auVar4 = _vmaddbc(auVar10,auVar9);
          auVar4 = _qmfc2(auVar4._0_4_);
          FUN_0025d910(iVar7,auVar4._0_8_);
        }
        FUN_0011de40(param_1);
        if ((char)piVar5[1] == '\0') {
          if (*(char *)((int)piVar5 + 5) == '\0') {
            return;
          }
          *(undefined1 *)(iVar2 + 0x3af) = 0;
        }
        else {
          *(undefined1 *)(iVar2 + 0x3af) = 0;
        }
        FUN_001412e8(*piVar5,8);
        piVar5[0x15] = 4;
        return;
      }
      piVar5[0x23] = (int)((float)piVar5[0x23] - *(float *)(DAT_0040f4d0 + 0x1c));
      FUN_0013ef10(*piVar5);
      iVar7 = piVar5[0x21];
    }
    *(int *)(*piVar5 + 0x10) = iVar7;
  }
  return;
}


// ==== FUN_00120068 @ 00120068 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_003f4180 undefined
// GLOBAL UNK_003f41a0 undefined
// GLOBAL UNK_003f41c0 undefined
// GLOBAL UNK_003f41e0 undefined
// GLOBAL UNK_003f4200 undefined

undefined8 FUN_00120068(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  char cStack_c0;
  char acStack_bf [19];
  float fStack_ac;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  iVar1 = FUN_0011d498();
  uStack_80 = *(undefined4 *)(iVar1 + 0xa0);
  uStack_7c = *(undefined4 *)(iVar1 + 0xa4);
  uStack_78 = *(undefined4 *)(iVar1 + 0xa8);
  uStack_74 = *(undefined4 *)(iVar1 + 0xac);
  iVar1 = FUN_0011d4a8(param_1);
  _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _qmtc2(0);
  auVar7 = _vaddbc(in_vf0,auVar7);
  auStack_60 = _sqc2(auVar9);
  auVar8 = _vmove(auVar7);
  auVar7 = _vmul(auVar8,auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (auVar7._0_4_ < 2.3283064e-10) {
    return 0;
  }
  auVar7 = _vmul(auVar8,auVar8);
  auVar9 = _lqc2(auStack_60);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar9,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  uVar10 = _vwaitq();
  auVar7 = _vmulq(auVar8,uVar10);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x50) = 7;
  auStack_90 = _sqc2(auVar7);
  iVar1 = FUN_0011d4a8(param_1);
  lVar2 = FUN_0011d948(*(undefined4 *)(iVar1 + 0x40),param_1,CONCAT44(uStack_7c,uStack_80),
                       auStack_90._0_8_,auStack_a0,&cStack_c0,acStack_bf);
  auVar7._4_4_ = uStack_7c;
  auVar7._0_4_ = uStack_80;
  auVar7._8_4_ = uStack_78;
  auVar7._12_4_ = uStack_74;
  auVar7 = _lqc2(auVar7);
  if (lVar2 == 0) {
    auVar7 = _lqc2(auStack_90);
    auVar7 = _vsub(in_vf0,auVar7);
    auStack_70 = _sqc2(auVar7);
    iVar1 = FUN_0011d4a8(param_1);
    lVar2 = FUN_0011d948(*(undefined4 *)(iVar1 + 0x40),param_1,CONCAT44(uStack_7c,uStack_80),
                         auStack_70._0_8_,auStack_a0,&cStack_c0,acStack_bf);
    auVar8._4_4_ = uStack_7c;
    auVar8._0_4_ = uStack_80;
    auVar8._8_4_ = uStack_78;
    auVar8._12_4_ = uStack_74;
    auVar7 = _lqc2(auVar8);
    if (lVar2 == 0) {
      return 0;
    }
    auVar8 = _qmtc2(0);
    auVar9 = _lqc2(auStack_a0);
    auVar7 = _vsub(auVar9,auVar7);
    _vmove(auVar7);
    auVar9 = _vaddbc(in_vf0,auVar8);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(iVar3 + 0x70) = auVar7;
    auVar8 = _lqc2(auStack_60);
    auVar7 = _vmul(auVar9,auVar9);
    _vaddabc(auVar7,auVar7);
    auVar8 = _vmaddbc(auVar8,auVar7);
    auVar7 = _sqc2(auVar9);
    *(undefined1 (*) [16])(iVar3 + 0x70) = auVar7;
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar8);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar10 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar10);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar5 = auVar7._0_4_;
    if (((uint)fVar5 & 0x7f800000) < 0x37800001) {
      return 0;
    }
    auVar7 = _qmtc2(1.0 / fVar5);
    auVar7 = _vmulbc(auVar9,auVar7);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(iVar3 + 0x70) = auVar7;
    if (cStack_c0 == '\0') {
      *(undefined4 *)(iVar3 + 0x50) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x50) = 5;
    }
  }
  else {
    auVar8 = _qmtc2(0);
    auVar9 = _lqc2(auStack_a0);
    auVar7 = _vsub(auVar9,auVar7);
    _vmove(auVar7);
    auVar9 = _vaddbc(in_vf0,auVar8);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(iVar3 + 0x70) = auVar7;
    auVar8 = _lqc2(auStack_60);
    auVar7 = _vmul(auVar9,auVar9);
    _vaddabc(auVar7,auVar7);
    auVar8 = _vmaddbc(auVar8,auVar7);
    auVar7 = _sqc2(auVar9);
    *(undefined1 (*) [16])(iVar3 + 0x70) = auVar7;
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar8);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar10 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar10);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar5 = auVar7._0_4_;
    if (((uint)fVar5 & 0x7f800000) < 0x37800001) {
      return 0;
    }
    auVar7 = _qmtc2(1.0 / fVar5);
    auVar7 = _vmulbc(auVar9,auVar7);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(iVar3 + 0x70) = auVar7;
    if (cStack_c0 == '\0') {
      if (acStack_bf[0] == '\0') {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
      }
      else {
        lVar2 = FUN_0012d158(DAT_0040f4d0,0,1);
        if (lVar2 == 0) {
          lVar2 = FUN_0012d158(DAT_0040f4d0,0,1);
          if (lVar2 == 0) {
            *(undefined4 *)(iVar3 + 0x50) = 1;
          }
          else {
            *(undefined4 *)(iVar3 + 0x50) = 2;
          }
          goto LAB_00120390;
        }
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
      }
      auVar8 = _lqc2(auStack_90);
      _vopmula(auVar8,auVar7);
      auVar7 = _vopmsub(auVar7,auVar8);
      auVar7 = _sqc2(auVar7);
      fStack_ac = auVar7._4_4_;
      if (0.0 <= fStack_ac) {
        *(undefined4 *)(iVar3 + 0x50) = 3;
      }
      else {
        *(undefined4 *)(iVar3 + 0x50) = 4;
      }
    }
    else {
      *(undefined4 *)(iVar3 + 0x50) = 6;
    }
  }
LAB_00120390:
  iVar1 = *(int *)(iVar3 + 0x50) * 4;
  fVar6 = *(float *)(&DAT_003f4180 + iVar1);
  *(int *)(iVar3 + 0x60) = (int)*(undefined8 *)(iVar3 + 0x70);
  *(int *)(iVar3 + 100) = (int)((ulong)*(undefined8 *)(iVar3 + 0x70) >> 0x20);
  *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(iVar3 + 0x78);
  *(undefined4 *)(iVar3 + 0x6c) = *(undefined4 *)(iVar3 + 0x7c);
  *(float *)(iVar3 + 0x88) = fVar6;
  if (((uint)fVar6 & 0x7f800000) < 0x37800001) {
    *(undefined4 *)(iVar3 + 0x80) = 0;
    fVar4 = fVar5;
  }
  else {
    fVar4 = *(float *)(&UNK_003f41c0 + iVar1);
    *(float *)(iVar3 + 0x80) = ((fVar5 - fVar4) - *(float *)(&UNK_003f41a0 + iVar1)) / fVar6;
  }
  iVar1 = *(int *)(iVar3 + 0x50) * 4;
  fVar5 = *(float *)(&UNK_003f41e0 + iVar1);
  *(float *)(iVar3 + 0x8c) = fVar5;
  if (((uint)fVar5 & 0x7f800000) < 0x37800001) {
    *(undefined4 *)(iVar3 + 0x84) = 0;
  }
  else {
    *(float *)(iVar3 + 0x84) = (fVar4 - *(float *)(&UNK_003f41c0 + iVar1)) / fVar5;
  }
  *(undefined4 *)(iVar3 + 0x94) = 0x41200000;
  *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(&UNK_003f4200 + *(int *)(iVar3 + 0x50) * 4);
  return 1;
}


// ==== FUN_001204b0 @ 001204b0 ====
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4
// GLOBAL DAT_003f4160 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001204b0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  FUN_0011d450();
  uVar2 = FUN_0011d498(param_1);
  piVar3 = (int *)param_1;
  if ((piVar3[0x14] == 0) || (piVar3[0x14] == 5)) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(piVar3 + 0x1c));
    auVar7 = _vsub(in_vf0,auVar6);
    auVar8 = _lqc2(_DAT_004432d0);
    auVar5 = _vmul(auVar7,auVar7);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar8,auVar8);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar9,auVar5);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar9,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    uVar10 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar10);
    _vmulq(auVar6,uVar10);
    auVar7 = _vmove(auVar7);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar10 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar10);
    _vmulq(auVar5,uVar10);
    auStack_90 = _sqc2(auVar6);
    auVar6 = _vmul(auVar7,auVar8);
    auVar5 = _lqc2(auStack_90);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar5,auVar6);
    uStack_b0 = DAT_004432c0;
    uStack_ac = DAT_004432c4;
    uStack_a8 = DAT_004432c8;
    uStack_a4 = DAT_004432cc;
    auVar5 = _vsubbc(in_vf0,in_vf0);
    auStack_50 = _sqc2(auVar7);
    auVar6 = _vmax(auVar6,auVar5);
    auStack_a0 = _sqc2(auVar8);
    auVar6 = _vminibc(auVar6,in_vf0);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar4 = (float)acosf(auVar6._0_4_);
    auVar6 = _lqc2(auStack_50);
    auVar5 = _lqc2(auStack_a0);
    _vopmula(auVar6,auVar5);
    auVar7 = _vopmsub(auVar5,auVar6);
    auVar5._4_4_ = uStack_ac;
    auVar5._0_4_ = uStack_b0;
    auVar5._8_4_ = uStack_a8;
    auVar5._12_4_ = uStack_a4;
    auVar6 = _lqc2(auVar5);
    auVar5 = _vmul(auVar7,auVar6);
    auVar6 = _lqc2(auStack_90);
  }
  else {
    auVar7 = _lqc2(*(undefined1 (*) [16])(piVar3 + 0x1c));
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _lqc2(_DAT_004432d0);
    auVar5 = _vmul(auVar7,auVar7);
    auVar6 = _vmul(auVar8,auVar8);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar9,auVar5);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar9,auVar6);
    auVar7 = _vmove(auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar10 = _vwaitq();
    auVar6 = _vmulq(auVar8,uVar10);
    _vmulq(auVar9,uVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar10 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar10);
    _vmulq(auVar5,uVar10);
    auStack_70 = _sqc2(auVar6);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(auStack_70);
    auVar6 = _vmul(auVar7,auVar6);
    auStack_60 = _sqc2(auVar8);
    auVar5 = _vsubbc(in_vf0,in_vf0);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _vmax(auVar6,auVar5);
    auStack_50 = _sqc2(auVar7);
    auVar6 = _vminibc(auVar6,in_vf0);
    uStack_80 = DAT_004432c0;
    uStack_7c = DAT_004432c4;
    uStack_78 = DAT_004432c8;
    uStack_74 = DAT_004432cc;
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar4 = (float)acosf(auVar6._0_4_);
    auVar6 = _lqc2(auStack_50);
    auVar5 = _lqc2(auStack_70);
    _vopmula(auVar6,auVar5);
    auVar5 = _vopmsub(auVar5,auVar6);
    auVar6._4_4_ = uStack_7c;
    auVar6._0_4_ = uStack_80;
    auVar6._8_4_ = uStack_78;
    auVar6._12_4_ = uStack_74;
    auVar6 = _lqc2(auVar6);
    auVar5 = _vmul(auVar5,auVar6);
    auVar6 = _lqc2(auStack_60);
  }
  _vaddabc(auVar5,auVar5);
  auVar6 = _vmaddbc(auVar6,auVar5);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar4 = fVar4 * 57.29578;
  if (0.0 < auVar6._0_4_) {
    fVar4 = -fVar4;
  }
  *(float *)(*piVar3 + 8) = fVar4;
  *(float *)(*piVar3 + 4) = fVar4;
  *(float *)*piVar3 = fVar4;
  uStack_d0 = 3;
  uStack_c4 = 1;
  uStack_cc = *(undefined4 *)(&DAT_003f4160 + piVar3[0x14] * 4);
  iVar1 = FUN_0011d4a8(param_1);
  uStack_c8 = *(undefined4 *)(iVar1 + 0x20);
  uStack_c0 = piVar3[0x14] == 4;
  iVar1 = (int)uVar2;
  FUN_001a6330(*(undefined4 *)(iVar1 + 0x330),&uStack_d0);
  *(undefined1 *)(iVar1 + 0x3af) = 1;
  *(undefined1 *)(iVar1 + 0x3ab) = 0;
  FUN_001a7450(*(undefined4 *)(iVar1 + 0x330));
  FUN_00136f10(uVar2,0);
  iVar1 = piVar3[0x14];
  if (-1 < iVar1) {
    if (iVar1 < 4) {
      piVar3[0x15] = 6;
    }
    else if (iVar1 < 7) {
      piVar3[0x15] = 0;
    }
  }
  return;
}


// ==== FUN_001207b8 @ 001207b8 ====

void FUN_001207b8(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_001207d8 @ 001207d8 ====

void FUN_001207d8(undefined8 param_1)

{
  FUN_0011d430(param_1,4);
  return;
}


// ==== FUN_001207f8 @ 001207f8 ====
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_003f3e80 undefined

void FUN_001207f8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined1 aauStack_d0 [4] [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  uVar2 = FUN_0011d498();
  auVar6 = _qmtc2(0);
  iVar4 = (int)uVar2;
  uStack_80 = DAT_004432c0;
  uStack_7c = DAT_004432c4;
  uStack_78 = DAT_004432c8;
  uStack_74 = DAT_004432cc;
  _qmtc2(param_1[0x1c]);
  auVar7 = _vaddbc(in_vf0,auVar6);
  _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
  auStack_90 = _sqc2(auVar7);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auStack_70 = _sqc2(auVar6);
  FUN_0013ef10(*param_1);
  auVar7 = _lqc2(auStack_90);
  auVar6 = _lqc2(auStack_70);
  auVar6 = _vsub(auVar6,auVar7);
  *(undefined4 *)(*param_1 + 0x10) = 0;
  auVar6 = _vmul(auVar6,auVar6);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  iVar1 = param_1[0x21];
  auVar6 = _qmfc2(auVar6._0_4_);
  if (iVar1 == 1) {
    uStack_130 = *(undefined4 *)(iVar4 + 0x70);
    uStack_12c = *(undefined4 *)(iVar4 + 0x74);
    uStack_128 = *(undefined4 *)(iVar4 + 0x78);
    uStack_124 = *(undefined4 *)(iVar4 + 0x7c);
    auVar7 = _qmtc2(0x40a00000);
    auVar6._4_4_ = uStack_7c;
    auVar6._0_4_ = uStack_80;
    auVar6._8_4_ = uStack_78;
    auVar6._12_4_ = uStack_74;
    auVar6 = _lqc2(auVar6);
    auVar6 = _vmulbc(auVar6,auVar7);
    uStack_120 = *(undefined4 *)(iVar4 + 0x80);
    uStack_11c = *(undefined4 *)(iVar4 + 0x84);
    uStack_118 = *(undefined4 *)(iVar4 + 0x88);
    uStack_114 = *(undefined4 *)(iVar4 + 0x8c);
    uStack_108 = *(undefined4 *)(iVar4 + 0x98);
    uStack_104 = *(undefined4 *)(iVar4 + 0x9c);
    uStack_110 = (undefined4)*(undefined8 *)(iVar4 + 0x90);
    uStack_10c = (undefined4)((ulong)*(undefined8 *)(iVar4 + 0x90) >> 0x20);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
    auVar8 = _vsub(auVar5,auVar6);
    auVar7._4_4_ = uStack_7c;
    auVar7._0_4_ = uStack_80;
    auVar7._8_4_ = uStack_78;
    auVar7._12_4_ = uStack_74;
    auVar6 = _lqc2(auVar7);
    auVar6 = _vadd(auVar5,auVar6);
    auVar7 = _qmfc2(auVar8._0_4_);
    auVar6 = _qmfc2(auVar6._0_4_);
    auStack_100 = _sqc2(auVar5);
    lVar3 = FUN_0012ae58(DAT_0040f4d0,auVar6._0_8_,auVar7._0_8_,0x21,0,0,aauStack_d0);
    if (lVar3 != 0) {
      auVar7 = _lqc2(aauStack_d0[0]);
      auVar6 = _qmtc2(*(undefined4 *)(&DAT_003f3e80 + param_1[0x20] * 4));
      auVar6 = _vaddbc(auVar7,auVar6);
      auStack_100 = _sqc2(auVar6);
    }
    FUN_00125f88(uVar2,&uStack_130);
    uStack_f0 = 1;
    if (param_1[0x20] == 0) {
      uStack_ec = 6;
    }
    else {
      uStack_ec = 7;
    }
    uStack_e4 = 0xb;
    uStack_e8 = 0x3f800000;
    uStack_e0 = 0;
    FUN_001a6330(*(undefined4 *)(iVar4 + 0x330),&uStack_f0);
    param_1[0x21] = 2;
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      if (auVar6._0_4_ < (float)param_1[0x14] * (float)param_1[0x14]) {
        if (auVar6._0_4_ <= 2.0) {
          return;
        }
        lVar3 = FUN_001a6840(*(undefined4 *)(iVar4 + 0x330),0,0);
        if (lVar3 == 0) {
          return;
        }
        iVar1 = *param_1;
      }
      else {
        iVar1 = *param_1;
      }
      FUN_001412e8(iVar1,8);
      param_1[0x21] = 1;
    }
  }
  else if ((iVar1 == 2) && (lVar3 = FUN_001a7df0(*(undefined4 *)(iVar4 + 0x330),0,7), lVar3 == 2)) {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}


// ==== FUN_00120a48 @ 00120a48 ====

long FUN_00120a48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar2 = FUN_0011d498();
  uVar1 = *(undefined8 *)*(undefined1 (*) [16])(iVar2 + 0xa0);
  uVar4 = *(undefined4 *)(iVar2 + 0xa8);
  uVar5 = *(undefined4 *)(iVar2 + 0xac);
  iVar7 = (int)param_1;
  auVar6 = _por(in_zero_qw,*(undefined1 (*) [16])(iVar2 + 0xa0));
  *(int *)(iVar7 + 0x70) = (int)uVar1;
  *(int *)(iVar7 + 0x74) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar7 + 0x78) = uVar4;
  *(undefined4 *)(iVar7 + 0x7c) = uVar5;
  lVar3 = FUN_0011dd48(param_1,auVar6._0_8_,iVar7 + 0x54,iVar7 + 0x50,iVar7 + 0x60);
  if (lVar3 != 0) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x60));
    auVar6 = _vmul(auVar6,auVar8);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar9,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (0.0 < auVar6._0_4_) {
      *(undefined4 *)(iVar7 + 0x80) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x80) = 1;
    }
  }
  return lVar3;
}


// ==== FUN_00120af0 @ 00120af0 ====
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120af0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auStack_60 = _sqc2(auVar5);
  FUN_0011d450();
  iVar1 = FUN_0011d498(param_1);
  piVar3 = (int *)param_1;
  auVar7 = _lqc2(*(undefined1 (*) [16])(piVar3 + 0x18));
  auVar5 = _vmul(auVar7,auVar7);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _lqc2(_DAT_004432d0);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar9,auVar5);
  auVar6 = _vmul(auVar8,auVar8);
  auVar7 = _vmove(auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar9,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar5);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  uVar10 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar10);
  _vmulq(auVar5,uVar10);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  uVar10 = _vwaitq();
  auVar9 = _vmulq(auVar8,uVar10);
  _vmulq(auVar5,uVar10);
  auVar8 = _lqc2(auStack_60);
  auVar5 = _vmul(auVar7,auVar9);
  auVar6 = _vsubbc(in_vf0,in_vf0);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar8,auVar5);
  auVar5 = _vmax(auVar5,auVar6);
  auVar5 = _vminibc(auVar5,in_vf0);
  auVar5 = _qmfc2(auVar5._0_4_);
  auStack_50 = _sqc2(auVar7);
  auStack_70 = _sqc2(auVar9);
  uStack_80 = (undefined4)_DAT_004432c0;
  uStack_7c = (undefined4)((ulong)_DAT_004432c0 >> 0x20);
  uStack_78 = DAT_004432c8;
  uStack_74 = DAT_004432cc;
  fVar4 = (float)acosf(auVar5._0_4_);
  auVar6 = _lqc2(auStack_50);
  auVar5 = _lqc2(auStack_70);
  _vopmula(auVar6,auVar5);
  auVar6 = _vopmsub(auVar5,auVar6);
  auVar5._4_4_ = uStack_7c;
  auVar5._0_4_ = uStack_80;
  auVar5._8_4_ = uStack_78;
  auVar5._12_4_ = uStack_74;
  auVar5 = _lqc2(auVar5);
  auVar5 = _vmul(auVar6,auVar5);
  auVar6 = _lqc2(auStack_60);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  fVar4 = fVar4 * 57.29578;
  if (0.0 < auVar5._0_4_) {
    fVar4 = -fVar4;
  }
  *(float *)(*piVar3 + 8) = fVar4;
  *(float *)(*piVar3 + 4) = fVar4;
  *(float *)*piVar3 = fVar4;
  *(undefined1 *)(iVar1 + 0x3ab) = 0;
  *(undefined1 *)(iVar1 + 0x3af) = 1;
  FUN_001a7450(*(undefined4 *)(iVar1 + 0x330));
  uStack_a0 = 3;
  uStack_9c = 0x1a;
  if (piVar3[0x20] == 0) {
    uStack_9c = 0x19;
  }
  uStack_94 = 1;
  iVar2 = FUN_0011d4a8(param_1);
  uStack_98 = *(undefined4 *)(iVar2 + 0x20);
  uStack_90 = 1;
  FUN_001a6330(*(undefined4 *)(iVar1 + 0x330),&uStack_a0);
  piVar3[0x21] = 0;
  return;
}


// ==== FUN_00120cb0 @ 00120cb0 ====

void FUN_00120cb0(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_00120cd0 @ 00120cd0 ====

void FUN_00120cd0(undefined8 param_1)

{
  FUN_0011d430(param_1,1);
  return;
}


// ==== FUN_00120cf0 @ 00120cf0 ====

void FUN_00120cf0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar2 = FUN_0011d498();
  puVar5 = (undefined4 *)param_1;
  iVar3 = puVar5[0x14];
  if (iVar3 == 1) {
    FUN_0011e3a8(param_1,1);
  }
  else if (iVar3 < 2) {
    if (iVar3 == 0) {
      FUN_0011de40(param_1);
      if ((*(char *)(puVar5 + 1) != '\0') || (*(char *)((int)puVar5 + 5) != '\0')) {
        if (*(char *)((int)puVar5 + 5) == '\0') {
          lVar4 = FUN_0011e240(param_1,puVar5 + 4);
          if (lVar4 != 0) {
            iVar3 = FUN_0011d4a8(param_1);
            auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
            auVar8 = _vaddbc(in_vf0,in_vf0);
            auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
            auVar6 = _vmul(auVar6,auVar7);
            _vaddabc(auVar6,auVar6);
            auVar6 = _vmaddbc(auVar8,auVar6);
            auVar6 = _qmfc2(auVar6._0_4_);
            FUN_0011e300(param_1,10,0.0 < auVar6._0_4_);
            puVar5[0x14] = 1;
            return;
          }
          uVar1 = *puVar5;
        }
        else {
          uVar1 = *puVar5;
        }
        FUN_001412e8(uVar1,8);
        puVar5[0x14] = 2;
      }
    }
  }
  else if (iVar3 == 2) {
    lVar4 = FUN_00141498(*puVar5);
    if (lVar4 == 0) {
      FUN_00141460(*puVar5);
    }
    else {
      lVar4 = FUN_00141490(*puVar5);
      if (lVar4 != 0) {
        iVar3 = FUN_0011d4a8(param_1);
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
        auVar8 = _vaddbc(in_vf0,in_vf0);
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
        auVar6 = _vmul(auVar6,auVar7);
        _vaddabc(auVar6,auVar6);
        auVar6 = _vmaddbc(auVar8,auVar6);
        auVar6 = _qmfc2(auVar6._0_4_);
        FUN_0011e300(param_1,10,0.0 < auVar6._0_4_);
        puVar5[0x14] = 3;
      }
    }
  }
  else if (iVar3 == 3) {
    FUN_0011e3a8(param_1,0);
  }
  return;
}


// ==== FUN_00120ec0 @ 00120ec0 ====
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120ec0(undefined8 param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  char cStack_1c0;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  FUN_0011d450();
  uVar4 = FUN_0011d498(param_1);
  iVar7 = (int)uVar4;
  uVar8 = *(undefined4 *)(iVar7 + 0x330);
  iVar3 = *(int *)(iVar7 + 0xb4);
  iVar1 = FUN_0011d4a8(param_1);
  piVar6 = (int *)param_1;
  if (*(int *)(iVar1 + 0x28) - 7U < 4) {
    iVar3 = 1;
    uStack_1cc = 10;
    uStack_1c8 = 0x3f800000;
    uStack_1c4 = 0xb;
    uStack_1d0 = 1;
    cStack_1c0 = FUN_00135cc8(uVar4);
    FUN_001a6330(uVar8,&uStack_1d0);
    piVar6[0x14] = iVar3;
  }
  else {
    uStack_1cc = 0x11;
    uStack_1d0 = 2;
    uStack_1c4 = 1;
    iVar1 = FUN_0011d4a8(param_1);
    uStack_1c8 = *(undefined4 *)(iVar1 + 0x20);
    iVar1 = FUN_0011d4a8(param_1);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x90));
    auVar10 = _vmul(auVar10,auVar11);
    auStack_d0 = _sqc2(auVar13);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar13,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    cStack_1c0 = 0.0 < auVar10._0_4_;
    FUN_001a6330(uVar8,&uStack_1d0);
    uVar8 = 0x3e060aa6;
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auStack_160 = _sqc2(auVar10);
    iVar1 = FUN_0011d4a8(param_1);
    uStack_170 = *(undefined4 *)(iVar1 + 0x10);
    uStack_16c = *(undefined4 *)(iVar1 + 0x14);
    uStack_168 = *(undefined4 *)(iVar1 + 0x18);
    uStack_164 = *(undefined4 *)(iVar1 + 0x1c);
    pauVar2 = (undefined1 (*) [16])FUN_0011d4a8(param_1);
    auVar11._4_4_ = uStack_16c;
    auVar11._0_4_ = uStack_170;
    auVar11._8_4_ = uStack_168;
    auVar11._12_4_ = uStack_164;
    auVar11 = _lqc2(auVar11);
    auVar10 = _lqc2(*pauVar2);
    auVar10 = _vsub(auVar10,auVar11);
    auStack_c0 = _sqc2(auVar10);
    pauVar2 = (undefined1 (*) [16])FUN_0011d4a8(param_1);
    auVar13 = _qmtc2(0x3ea8f5c3);
    auVar10._4_4_ = DAT_004432c4;
    auVar10._0_4_ = DAT_004432c0;
    auVar10._8_4_ = DAT_004432c8;
    auVar10._12_4_ = DAT_004432cc;
    auVar10 = _lqc2(auVar10);
    auVar11 = _lqc2(auStack_c0);
    auVar10 = _vmulbc(auVar10,auVar13);
    auVar13 = _lqc2(*pauVar2);
    auVar10 = _vsub(auVar11,auVar10);
    auVar13 = _vsub(auVar13,auVar10);
    auVar11 = _lqc2(auStack_160);
    auVar10 = _vmul(auVar13,auVar13);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar10);
    uVar20 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar20);
    auVar10 = _vsub(in_vf0,auVar13);
    auVar11 = _qmfc2(auVar13._0_4_);
    auVar10 = _sqc2(auVar10);
    iStack_180 = auVar11._0_4_;
    auStack_1b0._8_4_ = auVar10._8_4_;
    auVar10 = _sqc2(auVar13);
    auVar11 = _pextlw((long)iStack_180,(long)(int)auStack_1b0._8_4_);
    auStack_1b0._4_4_ = auVar10._4_4_;
    auStack_1a0 = _sqc2(auVar13);
    auVar10 = _pextlw((long)(int)auStack_1b0._4_4_,auVar11._0_8_);
    auStack_190 = _sqc2(auVar13);
    uStack_17c = auStack_1a0._4_4_;
    uStack_178 = auStack_190._8_4_;
    uStack_174 = 0;
    auStack_a0 = _sqc2(auVar13);
    uStack_13c = auStack_1a0._4_4_;
    uStack_138 = auStack_190._8_4_;
    uStack_134 = 0;
    auStack_1b0 = auVar10;
    iStack_140 = iStack_180;
    uVar20 = FUN_0029dc18(uVar8);
    uVar8 = FUN_0029da28(uVar8);
    auVar11 = _qmtc2(uVar20);
    auVar10 = _qmtc2(auVar10._0_4_);
    auVar10 = _vmulbc(auVar10,auVar11);
    _lqc2(auStack_150);
    auVar11 = _qmtc2(uVar8);
    _vaddbc(in_vf0,auVar10);
    _lqc2(auStack_130);
    _vaddbc(in_vf0,auVar10);
    auVar11 = _vaddbc(in_vf0,auVar11);
    _vaddbc(in_vf0,auVar10);
    auVar13._4_4_ = uStack_13c;
    auVar13._0_4_ = iStack_140;
    auVar13._8_4_ = uStack_138;
    auVar13._12_4_ = uStack_134;
    auVar18 = _lqc2(auVar13);
    auVar12 = _vmulbc(in_vf0,auVar11);
    auVar11 = _qmfc2(auVar18._0_4_);
    auVar10 = _sqc2(auVar12);
    auVar13 = _qmfc2(auVar12._0_4_);
    auVar5 = _qmfc2(auVar18._0_4_);
    auVar14 = _vsub(in_vf0,in_vf0);
    auStack_1b0._4_4_ = auVar10._4_4_;
    auVar17 = _qmtc2(0x41000000);
    auVar10 = _sqc2(auVar12);
    auVar14 = _vsub(auVar14,auVar12);
    auVar14 = _vsubbc(in_vf0,auVar14);
    auVar15 = _vmulbc(in_vf0,auVar14);
    auStack_1b0._8_4_ = auVar10._8_4_;
    auVar16 = _vmulbc(auVar12,auVar18);
    _vmove(auVar12);
    auVar10 = _pextlw((long)(int)auStack_1b0._8_4_,(long)auVar13._0_4_);
    _lqc2(auStack_a0);
    auVar10 = _pextlw((long)(int)auStack_1b0._4_4_,auVar10._0_8_);
    auVar13 = _qmfc2(auVar15._0_4_);
    auVar14 = _qmtc2(auVar10._0_4_);
    _sqc2(auVar14);
    auVar18 = _vmulbc(auVar14,auVar18);
    auVar19 = _lqc2(auStack_d0);
    auVar10 = _pextlw((long)auVar5._8_4_,(long)auVar11._0_4_);
    auVar10 = _pextlw((long)auVar5._4_4_,auVar10._0_8_);
    auVar5 = _qmtc2(auVar10._0_4_);
    auVar10 = _vmul(auVar14,auVar5);
    _sqc2(auVar5);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar19,auVar10);
    auVar11 = _vmulbc(auVar5,auVar12);
    auVar10 = _vsubbc(auVar16,auVar10);
    _vopmula(auVar14,auVar5);
    auVar5 = _vopmsub(auVar5,auVar14);
    auVar10 = _sqc2(auVar10);
    auVar11 = _vadd(auVar11,auVar18);
    auVar11 = _vadd(auVar11,auVar5);
    _vadd(in_vf0,auVar11);
    auStack_1b0._12_4_ = auVar10._12_4_;
    auVar10 = _qmtc2(auStack_1b0._12_4_);
    auVar5 = _vmr32(auVar10);
    auVar10 = _sqc2(auVar5);
    auVar11 = _qmfc2(auVar5._0_4_);
    auVar12 = _vmulbc(auVar5,auVar15);
    auStack_1b0._4_4_ = auVar10._4_4_;
    auVar10 = _sqc2(auVar5);
    auStack_1b0._8_4_ = auVar10._8_4_;
    auVar10 = _pextlw((long)(int)auStack_1b0._8_4_,(long)auVar11._0_4_);
    auVar10 = _pextlw((long)(int)auStack_1b0._4_4_,auVar10._0_8_);
    auVar14 = _qmtc2(auVar10._0_4_);
    _sqc2(auVar14);
    auVar16 = _vmulbc(auVar14,auVar15);
    auVar10 = _sqc2(auVar15);
    auStack_1b0._4_4_ = auVar10._4_4_;
    auVar10 = _sqc2(auVar15);
    auStack_1b0._8_4_ = auVar10._8_4_;
    auVar10 = _pextlw((long)(int)auStack_1b0._8_4_,(long)auVar13._0_4_);
    auVar10 = _pextlw((long)(int)auStack_1b0._4_4_,auVar10._0_8_);
    auVar13 = _qmtc2(auVar10._0_4_);
    auVar10 = _vmul(auVar14,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar19,auVar10);
    auVar11 = _vmulbc(auVar13,auVar5);
    auVar5 = _vsubbc(auVar12,auVar10);
    auVar10 = _vadd(auVar11,auVar16);
    auStack_1b0 = _sqc2(auVar5);
    _vopmula(auVar14,auVar13);
    auVar11 = _vopmsub(auVar13,auVar14);
    auVar10 = _vadd(auVar10,auVar11);
    _vadd(in_vf0,auVar10);
    auVar10 = _qmtc2(auStack_1b0._12_4_);
    auVar10 = _vmr32(auVar10);
    _vaddbc(in_vf0,auVar10);
    _vaddbc(in_vf0,auVar10);
    auVar10 = _vaddbc(in_vf0,auVar10);
    auVar10 = _vmulbc(auVar10,auVar17);
    auVar10 = _qmfc2(auVar10._0_4_);
    FUN_0025d860(iVar3,auVar10._0_8_);
    *(undefined1 *)(iVar3 + 0x3c) = 1;
    *(undefined1 *)(iVar7 + 0x3ab) = 0;
    iVar3 = FUN_0011d4a8(param_1);
    _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
    auVar10 = _qmtc2(0);
    auVar13 = _lqc2(auStack_160);
    auVar11 = _vaddbc(in_vf0,auVar10);
    auVar10 = _vmul(auVar11,auVar11);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar13,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    if (2.3283064e-10 <= auVar10._0_4_) {
      auVar10 = _vmul(auVar11,auVar11);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar13,auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar10);
      uVar8 = _vwaitq();
      auVar10 = _vmulq(auVar11,uVar8);
      auStack_120 = _sqc2(auVar10);
      if (cStack_1c0 == '\0') {
        auVar10 = _lqc2(auStack_120);
        auVar5 = _vsub(in_vf0,auVar10);
        auVar14 = _lqc2(_DAT_004432d0);
        auVar10 = _vmul(auVar5,auVar5);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar13,auVar10);
        auVar11 = _vmul(auVar14,auVar14);
        auVar5 = _vmove(auVar5);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar13,auVar11);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar10);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar8 = _vwaitq();
        auVar13 = _vmulq(auVar5,uVar8);
        _vmulq(auVar10,uVar8);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar11);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar8 = _vwaitq();
        auVar5 = _vmulq(auVar14,uVar8);
        _vmulq(auVar10,uVar8);
        auVar14 = _lqc2(auStack_d0);
        auVar10 = _vmul(auVar13,auVar5);
        auVar11 = _vsubbc(in_vf0,in_vf0);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar14,auVar10);
        auVar10 = _vmax(auVar10,auVar11);
        uStack_f0 = DAT_004432c0;
        uStack_ec = DAT_004432c4;
        uStack_e8 = DAT_004432c8;
        uStack_e4 = DAT_004432cc;
        auVar10 = _vminibc(auVar10,in_vf0);
        auStack_b0 = _sqc2(auVar13);
        auVar10 = _qmfc2(auVar10._0_4_);
        auStack_e0 = _sqc2(auVar5);
        fVar9 = (float)acosf(auVar10._0_4_);
        auVar11 = _lqc2(auStack_b0);
        auVar10 = _lqc2(auStack_e0);
        _vopmula(auVar11,auVar10);
        auVar11 = _vopmsub(auVar10,auVar11);
        auVar5._4_4_ = uStack_ec;
        auVar5._0_4_ = uStack_f0;
        auVar5._8_4_ = uStack_e8;
        auVar5._12_4_ = uStack_e4;
        auVar10 = _lqc2(auVar5);
        auVar10 = _vmul(auVar11,auVar10);
        auVar11 = _lqc2(auStack_d0);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar11,auVar10);
        uVar8 = auVar10._0_4_;
      }
      else {
        auVar11 = _vmul(auVar10,auVar10);
        auVar5 = _vmove(auVar10);
        auVar14 = _lqc2(_DAT_004432d0);
        _vaddabc(auVar11,auVar11);
        auVar10 = _vmaddbc(auVar13,auVar11);
        auVar11 = _vmul(auVar14,auVar14);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar10);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar8 = _vwaitq();
        auVar5 = _vmulq(auVar5,uVar8);
        _vmulq(auVar10,uVar8);
        _vaddabc(auVar11,auVar11);
        auVar10 = _vmaddbc(auVar13,auVar11);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar10);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        uVar8 = _vwaitq();
        auVar13 = _vmulq(auVar14,uVar8);
        _vmulq(auVar10,uVar8);
        auVar10 = _vmul(auVar5,auVar13);
        auVar11 = _lqc2(auStack_d0);
        auVar14 = _vsubbc(in_vf0,in_vf0);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar11,auVar10);
        auVar10 = _vmax(auVar10,auVar14);
        uStack_110 = DAT_004432c0;
        uStack_10c = DAT_004432c4;
        uStack_108 = DAT_004432c8;
        uStack_104 = DAT_004432cc;
        auVar10 = _vminibc(auVar10,in_vf0);
        auStack_100 = _sqc2(auVar13);
        auVar10 = _qmfc2(auVar10._0_4_);
        auStack_b0 = _sqc2(auVar5);
        fVar9 = (float)acosf(auVar10._0_4_);
        auVar10 = _lqc2(auStack_b0);
        auVar11 = _lqc2(auStack_100);
        _vopmula(auVar10,auVar11);
        auVar10 = _vopmsub(auVar11,auVar10);
        auVar14._4_4_ = uStack_10c;
        auVar14._0_4_ = uStack_110;
        auVar14._8_4_ = uStack_108;
        auVar14._12_4_ = uStack_104;
        auVar11 = _lqc2(auVar14);
        auVar11 = _vmul(auVar10,auVar11);
        auVar10 = _lqc2(auStack_d0);
        _vaddabc(auVar11,auVar11);
        auVar10 = _vmaddbc(auVar10,auVar11);
        uVar8 = auVar10._0_4_;
      }
      auVar10 = _qmfc2(uVar8);
      fVar9 = fVar9 * 57.29578;
      if (0.0 < auVar10._0_4_) {
        fVar9 = -fVar9;
      }
      FUN_0013ef10(*piVar6);
      *(float *)*piVar6 = fVar9;
      *(float *)(*piVar6 + 4) = fVar9;
      *(float *)(*piVar6 + 8) = fVar9;
    }
    FUN_0011de40(param_1);
    if (*(char *)((int)piVar6 + 5) == '\0') {
      if ((char)piVar6[1] == '\0') {
        piVar6[0x14] = 0;
        return;
      }
      iVar3 = *piVar6;
    }
    else {
      iVar3 = *piVar6;
    }
    FUN_001412e8(iVar3,8);
    piVar6[0x14] = 0;
  }
  return;
}


// ==== FUN_001215e0 @ 001215e0 ====

void FUN_001215e0(void)

{
  FUN_0011d490();
  return;
}


// ==== FUN_00121600 @ 00121600 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f51c undefined4

undefined4 FUN_00121600(void)

{
  FUN_0013c950(DAT_0040f4d0 + 0x30,1);
  FUN_001f2838(DAT_0040f51c,0,5);
  return 1;
}


// ==== FUN_00121648 @ 00121648 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f51c undefined4

undefined4 FUN_00121648(void)

{
  FUN_0013c950(DAT_0040f4d0 + 0x30,0);
  FUN_001f2838(DAT_0040f51c,0,1);
  return 1;
}


// ==== FUN_00121688 @ 00121688 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f528 undefined4
// GLOBAL DAT_0040f544 undefined4

/* Strings referenciadas:
     "MissionFailed" */

undefined4 FUN_00121688(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0012bd98(DAT_0040f4d0,*(undefined4 *)(DAT_0040f4d0 + 0x5ab0));
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 4);
  *(undefined1 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30) + 0x291) = 1;
  if (*(int *)(iVar1 + 0x1c) != -1) {
    *(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34) + 100) = 1;
    FUN_001d8bc0(0x3f800000,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34),
                 *(undefined4 *)(iVar1 + 0x1c),1,0);
  }
  FUN_00212388(param_1 + 0xc);
  *(float *)(param_1 + 8) = *(float *)(DAT_0040f0e0 + 0x20140) + 4.0;
  *(undefined4 *)(DAT_0040f0e0 + 0x210c0) = 3;
  *(undefined1 *)(DAT_0040f4d0 + 0x8e2) = 1;
  FUN_001f2838(DAT_0040f51c,0,0);
  FUN_0016b590(DAT_0040f528,0x40f0c0);
  FUN_0020b678(DAT_0040f544,0x3f3e90,4);
  return 1;
}


// ==== FUN_001217d0 @ 001217d0 ====
// GLOBAL DAT_0040f4c0 int

undefined4 FUN_001217d0(int param_1)

{
  FUN_002123f0(param_1 + 0xc);
  FUN_001b0a20(DAT_0040f4c0 + 0xd290);
  return 1;
}


// ==== FUN_00121808 @ 00121808 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f51c undefined4

undefined4 FUN_00121808(int param_1)

{
  FUN_001218b8();
  *(float *)(param_1 + 8) = *(float *)(DAT_0040f0e0 + 0x20140) + 3.0;
  *(undefined4 *)(DAT_0040f0e0 + 0x210c0) = 3;
  FUN_0013dc38(DAT_0040f4d0 + 0x800);
  FUN_001354e0(DAT_0040f4d0 + 0x30,DAT_0040f4d0 + 0x800);
  *(undefined1 *)(DAT_0040f4d0 + 0x8e2) = 1;
  FUN_001f2838(DAT_0040f51c,0,0);
  return 1;
}


// ==== FUN_001218b8 @ 001218b8 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int

void FUN_001218b8(void)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_110 [48];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_64;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_6c = 0;
  _uStack_60 = CONCAT35(uStack_5b,0x3e26b0);
  uStack_38 = *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x260);
  lVar1 = FUN_00280200(DAT_0040f510,&uStack_38,0);
  if (lVar1 != 0) {
    auVar2 = _pextlw(0,0);
    uStack_e0 = *(undefined4 *)(DAT_0040f4d0 + 0xd0);
    uStack_dc = *(undefined4 *)(DAT_0040f4d0 + 0xd4);
    uStack_d8 = *(undefined4 *)(DAT_0040f4d0 + 0xd8);
    uStack_d4 = *(undefined4 *)(DAT_0040f4d0 + 0xdc);
    auVar2 = _pextlw(0,auVar2._0_8_);
    uStack_64 = 1;
    uStack_d0 = auVar2._0_4_;
    uStack_cc = auVar2._4_4_;
    uStack_c8 = auVar2._8_4_;
    uStack_c4 = auVar2._12_4_;
    uStack_c0 = (undefined4)lVar1;
    uStack_bc = 0x3f800000;
    uStack_6c = 0x40080f;
    uStack_40 = (undefined4)uStack_60;
    uStack_68 = 0;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    uStack_48 = uStack_c8;
    uStack_44 = uStack_c4;
    FUN_00285748(&uStack_50,DAT_0040f510 + 0xb308,auStack_110);
  }
  return;
}


// ==== FUN_001219b0 @ 001219b0 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f544 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_0040f510 int

void FUN_001219b0(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 8) < *(float *)(DAT_0040f0e0 + 0x20140)) {
    FUN_00105228(DAT_0040f0e0 + 0x20220,3);
    iVar1 = DAT_0040f544;
    *(undefined4 *)(DAT_0040f544 + 0x3948) = 0xbf800000;
    *(undefined1 *)(iVar1 + 0x394c) = 0;
  }
  else {
    fVar2 = 3.0;
    if (*(float *)(param_1 + 8) == *(float *)(DAT_0040f0e0 + 0x20140) + 3.0) {
      FUN_001c2838(0x3f800000,0x40400000,0,DAT_0040f4d8 + 0x83ca0);
    }
    fVar2 = (*(float *)(param_1 + 8) - *(float *)(DAT_0040f0e0 + 0x20140)) / fVar2;
    FUN_001aebd0(fVar2,DAT_0040f4c0);
    *(float *)(DAT_0040f510 + 0xcbc4) = *(float *)(DAT_0040f510 + 0xcbcc) * fVar2;
    FUN_00384700(*(float *)(DAT_0040f510 + 0xcbd0) * fVar2,
                 *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34));
  }
  return;
}


// ==== FUN_00121af8 @ 00121af8 ====
// GLOBAL DAT_0040f0e0 int

undefined4 FUN_00121af8(int param_1)

{
  *(undefined4 *)(DAT_0040f0e0 + 0x210c0) = 0;
  fe_FEDiffMode_0020f6c8(param_1 + 8);
  fe_FEInvertLookFlag_00210450(param_1 + 0xc);
  return 1;
}


// ==== FUN_00121b40 @ 00121b40 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4bc int

void FUN_00121b40(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(DAT_0040f0e0 + 0x21060);
  uVar3 = FUN_001249f8(iVar1,0x19);
  cVar2 = FUN_0026bbc0(*(undefined4 *)(iVar1 + 0xc),uVar3);
  if (((cVar2 != '\0') && (lVar4 = FUN_00103870(DAT_0040f0e0), lVar4 == 0)) &&
     (*(char *)(DAT_0040f4bc + 0x1678) == '\0')) {
    FUN_00103800(DAT_0040f0e0,1);
  }
  return;
}


// ==== FUN_00121bd0 @ 00121bd0 ====

undefined4 FUN_00121bd0(int param_1)

{
  fe_FEDiffMode_0020f920(param_1 + 8);
  fe_FEInvertLookFlag_002105f8(param_1 + 0xc);
  return 1;
}


// ==== FUN_00121c08 @ 00121c08 ====

void FUN_00121c08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00107d20(0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}


// ==== FUN_00121c38 @ 00121c38 ====

undefined4 FUN_00121c38(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 1;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  do {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x3c) + iVar2);
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
  } while (iVar2 < 0x40);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}


// ==== FUN_00121ce8 @ 00121ce8 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4dc undefined4

long FUN_00121ce8(int param_1)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)FUN_001033a0(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
                               *(undefined1 *)(DAT_0040f0e0 + 0x2020e));
  if (*piVar1 == 1) {
    if (piVar1[1] != 1) {
      lVar2 = FUN_00122368(DAT_0040f4dc,0x20);
      return lVar2;
    }
  }
  else if (*piVar1 == 2) {
    return (long)*(short *)(param_1 + 0x44);
  }
  return (long)((int)(((uint)*(ushort *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x1e)) *
                     0x10000) >> 0x10);
}


// ==== FUN_00121d78 @ 00121d78 ====
// GLOBAL DAT_0040f4e0 int_*

undefined1 FUN_00121d78(int param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
  iVar3 = 0;
  if (uVar4 != 0) {
    plVar2 = *(long **)(*DAT_0040f4e0 + 4);
    iVar5 = 0x1000000;
    do {
      cVar1 = (char)iVar3;
      if (*plVar2 == param_2) goto LAB_00121dcc;
      plVar2 = plVar2 + 4;
      iVar3 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
    } while (iVar3 < (int)uVar4);
  }
  cVar1 = -1;
LAB_00121dcc:
  return *(undefined1 *)(*(int *)(param_1 + 0x3c) + (int)cVar1);
}


// ==== FUN_00121de8 @ 00121de8 ====

void FUN_00121de8(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00107cf8(0x50);
  *param_1 = (int)uVar1;
  FUN_00121c08(uVar1);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  return;
}


// ==== FUN_00121e28 @ 00121e28 ====
// GLOBAL DAT_0040f4d0 int

void FUN_00121e28(float param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  
  pcVar2 = (char *)*param_2;
  if (*pcVar2 == '\0') {
    return;
  }
  *(float *)(pcVar2 + 4) = *(float *)(pcVar2 + 4) + param_1;
  iVar3 = *param_2;
  if (*(float *)(DAT_0040f4d0 + 0x514) < 1.0) {
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  else {
    *(float *)(iVar3 + 8) = *(float *)(iVar3 + 8) + param_1;
    iVar3 = *param_2;
    if (*(float *)(iVar3 + 8) <= *(float *)(iVar3 + 0xc)) {
      cVar1 = (char)param_2[3];
      goto LAB_00121eac;
    }
    *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 8);
  }
  cVar1 = (char)param_2[3];
LAB_00121eac:
  if ((cVar1 != '\0') &&
     (fVar4 = (float)param_2[2], param_2[2] = (int)(fVar4 + param_1), 0.3 < fVar4 + param_1)) {
    *(undefined2 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    param_2[2] = 0;
  }
  return;
}


// ==== FUN_00121ef0 @ 00121ef0 ====

void FUN_00121ef0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_2;
  return;
}


// ==== FUN_00121f00 @ 00121f00 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f51c undefined4

void FUN_00121f00(undefined8 param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  
  piVar3 = (int *)param_1;
  if (*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20fa0) {
    FUN_00106698();
    sVar2 = *(short *)((int)piVar3 + 0xe);
  }
  else {
    sVar2 = *(short *)((int)piVar3 + 0xe);
  }
  *(undefined1 *)(piVar3 + 3) = 1;
  sVar2 = sVar2 + 1;
  *(short *)((int)piVar3 + 0xe) = sVar2;
  if (sVar2 < 4) {
    if (sVar2 == 3) {
      FUN_00121ef0(param_1,0x800);
    }
    else if (sVar2 == 2) {
      FUN_00121ef0(param_1,0x400);
    }
  }
  else {
    FUN_00121ef0(param_1,0x1000);
    if (*(short *)(*piVar3 + 0x12) < *(short *)((int)piVar3 + 0xe)) {
      *(undefined2 *)(*piVar3 + 0x12) = *(undefined2 *)((int)piVar3 + 0xe);
    }
  }
  fVar4 = (float)FUN_0013c980(DAT_0040f4d0 + 0x30);
  if (1.6 < fVar4) {
    FUN_00121ef0(param_1,0x100);
  }
  if (piVar3[1] == 0) {
    *(short *)(*piVar3 + 0x1c) = *(short *)(*piVar3 + 0x1c) + 1;
    iVar1 = DAT_0040f4d0;
    if (1.0 <= *(float *)(DAT_0040f4d0 + 0x514)) {
      fVar4 = *(float *)(DAT_0040f4d0 + 0x514) + 0.0;
      *(float *)(DAT_0040f4d0 + 0x514) = fVar4;
      if (1.0 <= fVar4) {
        if (fVar4 < 1.0) {
          *(undefined4 *)(iVar1 + 0x514) = 0x3fa66666;
          goto LAB_001220f8;
        }
        fVar4 = *(float *)(iVar1 + 0x514);
      }
      else {
        fVar4 = *(float *)(iVar1 + 0x514);
      }
      if (((2.0 <= fVar4) &&
          (*(undefined4 *)(iVar1 + 0x514) = 0x40000000, *(char *)(iVar1 + 0x8e1) == '\0')) &&
         (*(byte *)(iVar1 + 0x8d0) < 3)) {
        *(byte *)(iVar1 + 0x8d0) = *(byte *)(iVar1 + 0x8d0) + 1;
        *(undefined4 *)(iVar1 + 0x514) = 0x3fa66666;
        *(undefined1 *)(iVar1 + 0x8e1) = 1;
      }
    }
  }
  else {
    FUN_00122120(param_1);
  }
LAB_001220f8:
  FUN_001f2918(DAT_0040f51c,0,piVar3[1]);
  piVar3[1] = 0;
  return;
}


// ==== FUN_00122120 @ 00122120 ====
// GLOBAL DAT_0040f4d0 int

void FUN_00122120(int *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  *(short *)(*param_1 + 0x1e) = *(short *)(*param_1 + 0x1e) + 1;
  if ((param_1[1] & 2U) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x22) = *(short *)(*param_1 + 0x22) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 4) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x24) = *(short *)(*param_1 + 0x24) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 8) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x26) = *(short *)(*param_1 + 0x26) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x10) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x28) = *(short *)(*param_1 + 0x28) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x20) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x2a) = *(short *)(*param_1 + 0x2a) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x40) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x2c) = *(short *)(*param_1 + 0x2c) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x80) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x2e) = *(short *)(*param_1 + 0x2e) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x100) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x30) = *(short *)(*param_1 + 0x30) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x200) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x32) = *(short *)(*param_1 + 0x32) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x400) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x34) = *(short *)(*param_1 + 0x34) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x800) == 0) {
    uVar2 = param_1[1];
  }
  else {
    *(short *)(*param_1 + 0x36) = *(short *)(*param_1 + 0x36) + 1;
    uVar2 = param_1[1];
  }
  if ((uVar2 & 0x1000) != 0) {
    *(short *)(*param_1 + 0x38) = *(short *)(*param_1 + 0x38) + 1;
  }
  iVar1 = DAT_0040f4d0;
  fVar3 = *(float *)(DAT_0040f4d0 + 0x514) + 0.0;
  *(float *)(DAT_0040f4d0 + 0x514) = fVar3;
  if (1.0 <= fVar3) {
    if (fVar3 < 1.0) {
      *(undefined4 *)(iVar1 + 0x514) = 0x3fa66666;
      return;
    }
    fVar3 = *(float *)(iVar1 + 0x514);
  }
  else {
    fVar3 = *(float *)(iVar1 + 0x514);
  }
  if (((2.0 <= fVar3) &&
      (*(undefined4 *)(iVar1 + 0x514) = 0x40000000, *(char *)(iVar1 + 0x8e1) == '\0')) &&
     (*(byte *)(iVar1 + 0x8d0) < 3)) {
    *(byte *)(iVar1 + 0x8d0) = *(byte *)(iVar1 + 0x8d0) + 1;
    *(undefined4 *)(iVar1 + 0x514) = 0x3fa66666;
    *(undefined1 *)(iVar1 + 0x8e1) = 1;
  }
  return;
}


// ==== FUN_00122368 @ 00122368 ====

undefined2 FUN_00122368(int *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return *(undefined2 *)(*param_1 + 0x1c);
  }
  if ((param_2 & 2) != 0) {
    return *(undefined2 *)(*param_1 + 0x22);
  }
  if ((param_2 & 4) != 0) {
    return *(undefined2 *)(*param_1 + 0x24);
  }
  if ((param_2 & 8) != 0) {
    return *(undefined2 *)(*param_1 + 0x26);
  }
  if ((param_2 & 0x10) != 0) {
    return *(undefined2 *)(*param_1 + 0x28);
  }
  if ((param_2 & 0x20) != 0) {
    return *(undefined2 *)(*param_1 + 0x2a);
  }
  if ((param_2 & 0x40) != 0) {
    return *(undefined2 *)(*param_1 + 0x2c);
  }
  if ((param_2 & 0x80) != 0) {
    return *(undefined2 *)(*param_1 + 0x2e);
  }
  if ((param_2 & 0x100) != 0) {
    return *(undefined2 *)(*param_1 + 0x30);
  }
  if ((param_2 & 0x200) != 0) {
    return *(undefined2 *)(*param_1 + 0x32);
  }
  if ((param_2 & 0x400) != 0) {
    return *(undefined2 *)(*param_1 + 0x34);
  }
  if ((param_2 & 0x800) != 0) {
    return *(undefined2 *)(*param_1 + 0x36);
  }
  if ((param_2 & 0x1000) != 0) {
    return *(undefined2 *)(*param_1 + 0x38);
  }
  return 0;
}


// ==== FUN_00122478 @ 00122478 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4e0 int_*

void FUN_00122478(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = 0;
  cVar1 = *(char *)(DAT_0040f4d0 + 0x2f2);
  if (0 < (long)cVar1) {
    do {
      pcVar2 = *(char **)((int)lVar3 * 4 + *(int *)(DAT_0040f4d0 + 0x2d0));
      if (pcVar2 != (char *)0x0) {
        FUN_00122520(param_1,*(undefined8 *)(*pcVar2 * 0x20 + *(int *)(*DAT_0040f4e0 + 4)));
      }
      lVar3 = (long)((int)lVar3 + 1);
    } while (lVar3 < cVar1);
  }
  return;
}


// ==== FUN_00122520 @ 00122520 ====
// GLOBAL DAT_0040f4e0 int_*

void FUN_00122520(int *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
  iVar4 = 0;
  if (uVar5 != 0) {
    plVar1 = *(long **)(*DAT_0040f4e0 + 4);
    iVar6 = 0x1000000;
    do {
      cVar3 = (char)iVar4;
      if (*plVar1 == param_2) goto LAB_0012257c;
      plVar1 = plVar1 + 4;
      iVar4 = iVar6 >> 0x18;
      iVar6 = iVar6 + 0x1000000;
    } while (iVar4 < (int)uVar5);
  }
  cVar3 = -1;
LAB_0012257c:
  pcVar2 = (char *)(*(int *)(*param_1 + 0x3c) + (int)cVar3);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    *(short *)(*param_1 + 0x3a) = *(short *)(*param_1 + 0x3a) + 1;
  }
  return;
}


// ==== FUN_001225b8 @ 001225b8 ====

void FUN_001225b8(int *param_1,ulong param_2)

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


// ==== FUN_00122660 @ 00122660 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4dc int_*

int FUN_00122660(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar1 < 3) {
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = *DAT_0040f4dc;
    return (int)*(char *)(iVar1 + 0x17) + (int)*(char *)(iVar1 + 0x18) +
           (int)*(char *)(iVar1 + 0x19) + (int)*(char *)(iVar1 + 0x1a);
  }
  if (iVar1 != 3) {
    return 0;
  }
  iVar1 = *DAT_0040f4dc;
  return (int)*(char *)(iVar1 + 0x17) + (int)*(char *)(iVar1 + 0x18) + (int)*(char *)(iVar1 + 0x19)
         + (int)*(char *)(iVar1 + 0x1a) + (int)*(char *)(iVar1 + 0x16);
}


// ==== FUN_00122708 @ 00122708 ====

void FUN_00122708(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00107d20(0x280);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


// ==== FUN_00122738 @ 00122738 ====

undefined4 FUN_00122738(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0x43960000;
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x1c) = 0x1e;
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x1e) = 0x1e;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0x41a00000;
  return 1;
}


// ==== FUN_00122780 @ 00122780 ====

int FUN_00122780(int param_1,char param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return param_2 * 0x50 + *(int *)(param_1 + 4);
}


// ==== FUN_001227a8 @ 001227a8 ====
// GLOBAL DAT_0040f4dc undefined4_*

void FUN_001227a8(undefined4 *param_1)

{
  *param_1 = *DAT_0040f4dc;
  return;
}


// ==== FUN_001227c0 @ 001227c0 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4e8 int_*
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_001227c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int aiStack_60 [4];
  
  FUN_001227a8();
  FUN_001033a0(DAT_0040f0e0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
               *(undefined1 *)(DAT_0040f0e0 + 0x2020e));
  uVar4 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  FUN_00123c90(0x48efa8,uVar4,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
  iVar1 = *DAT_0040f4e8;
  iVar5 = DAT_0040f4d0 + 0x910;
  iVar2 = *(int *)(DAT_0040f0e0 + 0x2014c);
  iVar6 = (int)*(char *)(iVar1 + 0x18) + (int)*(char *)(iVar1 + 0x17) +
          (uint)(*(char *)(iVar1 + 0x19) != '\0') + (uint)(*(char *)(iVar1 + 0x1a) != '\0');
  if (iVar2 == 3) {
    iVar6 = iVar6 + *(char *)(iVar1 + 0x16);
  }
  uVar4 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac));
  FUN_0012f880(iVar5,uVar4,iVar2,aiStack_60);
  if (*(char *)(iVar1 + 0x14) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (aiStack_60[0] <= iVar6) {
      uVar3 = 2;
    }
  }
  return uVar3;
}


// ==== FUN_001228e0 @ 001228e0 ====
// GLOBAL DAT_003f4220 undefined

undefined1 FUN_001228e0(undefined8 param_1,char param_2)

{
  return (&DAT_003f4220)[param_2];
}


// ==== FUN_00122900 @ 00122900 ====

undefined1 FUN_00122900(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = FUN_001229f8(param_1);
    uVar1 = (undefined1)iVar4;
    if (iVar2 <= iVar4) {
      return 0xff;
    }
    lVar3 = FUN_001228e0(param_1,uVar1);
    iVar4 = iVar4 + 1;
  } while (lVar3 != param_2);
  return uVar1;
}


// ==== FUN_00122980 @ 00122980 ====

undefined4 FUN_00122980(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_001229f8(param_1);
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = FUN_001228e0(param_1,(char)iVar3);
    iVar3 = iVar3 + 1;
  } while (lVar2 != param_2);
  return 1;
}


// ==== FUN_001229f8 @ 001229f8 ====

undefined4 FUN_001229f8(void)

{
  return 8;
}


// ==== FUN_00122a00 @ 00122a00 ====
// GLOBAL DAT_003f4228 undefined

undefined4 FUN_00122a00(undefined8 param_1,int param_2)

{
  return *(undefined4 *)(&DAT_003f4228 + ((param_2 << 0x18) >> 0x16));
}


// ==== FUN_00122a20 @ 00122a20 ====
// GLOBAL DAT_0040f53c undefined4_*

void FUN_00122a20(void)

{
  FUN_00122bb0(*DAT_0040f53c);
  return;
}


// ==== FUN_00122a48 @ 00122a48 ====
// GLOBAL DAT_0040f53c undefined4_*

void FUN_00122a48(void)

{
  FUN_00122bd0(*DAT_0040f53c);
  return;
}


// ==== FUN_00122a70 @ 00122a70 ====
// GLOBAL DAT_0040f53c undefined4_*

void FUN_00122a70(void)

{
  FUN_00122bf0(*DAT_0040f53c);
  return;
}


// ==== FUN_00122a98 @ 00122a98 ====
// GLOBAL DAT_0040f53c undefined4_*

void FUN_00122a98(void)

{
  FUN_00122c20(*DAT_0040f53c);
  return;
}


// ==== FUN_00122ac0 @ 00122ac0 ====
// GLOBAL DAT_0040f53c undefined4_*

void FUN_00122ac0(void)

{
  FUN_00122c50(*DAT_0040f53c);
  return;
}


// ==== FUN_00122af0 @ 00122af0 ====

void FUN_00122af0(void)

{
  FUN_00122df0(0x48efa8);
  return;
}


// ==== FUN_00122b10 @ 00122b10 ====

bool FUN_00122b10(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = FUN_00123e70();
  bVar2 = false;
  if (lVar1 != 0) {
    lVar1 = FUN_00122df8(0x48efa8);
    bVar2 = lVar1 != 0;
  }
  FUN_00122b60(param_1);
  return bVar2;
}


// ==== FUN_00122b60 @ 00122b60 ====

void FUN_00122b60(undefined8 param_1)

{
  FUN_00122e38(0x48efa8,param_1);
  return;
}


// ==== FUN_00122b88 @ 00122b88 ====

void FUN_00122b88(undefined8 param_1)

{
  FUN_00123020(0x48efa8,param_1);
  return;
}


// ==== FUN_00122bb0 @ 00122bb0 ====

void FUN_00122bb0(void)

{
  FUN_00123248(0x48efa8);
  return;
}


// ==== FUN_00122bd0 @ 00122bd0 ====

void FUN_00122bd0(void)

{
  FUN_00123960(0x48efa8);
  return;
}


// ==== FUN_00122bf0 @ 00122bf0 ====

void FUN_00122bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00123980(0x48efa8,1,param_2,param_3);
  return;
}


// ==== FUN_00122c20 @ 00122c20 ====

void FUN_00122c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00123980(0x48efa8,0,param_2,param_3);
  return;
}


// ==== FUN_00122c50 @ 00122c50 ====

void FUN_00122c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00123980(0x48efa8,2,param_2,param_3);
  return;
}


// ==== FUN_00122c80 @ 00122c80 ====

undefined4 FUN_00122c80(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  iVar2 = 3;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x1bb);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1b5) = 0;
  *(undefined1 *)(param_1 + 0x1b6) = 0;
  do {
    puVar1[-4] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  return 1;
}


// ==== FUN_00122cc8 @ 00122cc8 ====

undefined4 FUN_00122cc8(int param_1,undefined8 param_2,undefined1 param_3)

{
  if (0x11 < *(int *)(param_1 + 0x1a4)) {
    return 0;
  }
  *(undefined8 *)(param_1 + *(int *)(param_1 + 0x1a4) * 0x10 + 0x28) = param_2;
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x1a4) * 0x10 + 0x30) = param_3;
  *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
  return 1;
}


// ==== FUN_00122d10 @ 00122d10 ====

undefined4 FUN_00122d10(int param_1,undefined4 param_2)

{
  if (0x11 < *(int *)(param_1 + 0x1ac)) {
    return 0;
  }
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x1ac) * 4 + 0x158) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  return 1;
}


// ==== FUN_00122d48 @ 00122d48 ====

undefined4 FUN_00122d48(int param_1,undefined1 param_2,undefined1 param_3)

{
  if (7 < *(int *)(param_1 + 0x1a8)) {
    return 0;
  }
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x1a8) * 2 + 0x148) = param_2;
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x1a8) * 2 + 0x149) = param_3;
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  return 1;
}


// ==== FUN_00122d98 @ 00122d98 ====

undefined4 FUN_00122d98(int param_1,undefined1 param_2,undefined1 param_3)

{
  if (3 < *(int *)(param_1 + 0x1b0)) {
    return 0;
  }
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x1b0) * 2 + 0x198) = param_2;
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x1b0) * 2 + 0x199) = param_3;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  return 1;
}


// ==== FUN_00122df0 @ 00122df0 ====

void FUN_00122df0(void)

{
  return;
}


// ==== FUN_00122df8 @ 00122df8 ====

undefined4 FUN_00122df8(int param_1)

{
  *(undefined1 *)(param_1 + 0x52e) = 0;
  FUN_00123ce0();
  FUN_00122c80(0x48f4e0);
  *(undefined1 *)(param_1 + 0x52d) = 0;
  return 1;
}


// ==== FUN_00122e38 @ 00122e38 ====

undefined4 FUN_00122e38(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  
  iVar11 = (int)param_1;
  puVar13 = (undefined8 *)(iVar11 + 0x418);
  *(int *)(iVar11 + 0x530) = param_2;
  iVar1 = 0;
  iVar10 = 0;
  do {
    iVar9 = 0;
    iVar1 = iVar1 + 0x5c;
    iVar12 = iVar10 + 1;
    do {
      puVar2 = (undefined8 *)FUN_00123c90(param_1,iVar9,iVar10);
      puVar4 = (undefined8 *)(*(int *)(iVar11 + 0x530) + iVar1);
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
      *puVar2 = *puVar4;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar3 = FUN_00123c90(param_1,iVar9,iVar10);
      if (*(char *)(iVar3 + 0x1a) == '\x01') {
        *(char *)(iVar11 + iVar10) = (char)iVar9;
      }
      iVar9 = iVar9 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar9 < 8);
    iVar1 = iVar12 * 0x100;
    iVar10 = iVar12;
  } while (iVar12 < 4);
  iVar10 = 0;
  do {
    puVar5 = (undefined1 *)(iVar11 + 0x528 + iVar10);
    iVar1 = *(int *)(iVar11 + 0x530) + iVar10;
    iVar10 = iVar10 + 1;
    *puVar5 = *(undefined1 *)(iVar1 + 0x6a0);
  } while (iVar10 < 4);
  iVar10 = *(int *)(iVar11 + 0x530);
  iVar1 = 0;
  *(undefined1 *)(iVar11 + 0x52c) = *(undefined1 *)(iVar10 + 0x6a4);
  *(undefined4 *)(iVar11 + 0x404) = *(undefined4 *)(iVar10 + 0x57c);
  *(undefined4 *)(iVar11 + 0x408) = *(undefined4 *)(iVar10 + 0x580);
  *(undefined4 *)(iVar11 + 0x40c) = *(undefined4 *)(iVar10 + 0x584);
  *(undefined8 *)(iVar11 + 0x410) = *(undefined8 *)(iVar10 + 0x588);
  *(undefined8 *)(iVar11 + 0x518) = *(undefined8 *)(iVar10 + 0x690);
  do {
    iVar10 = iVar1 * 8;
    iVar1 = iVar1 + 1;
    *puVar13 = *(undefined8 *)(*(int *)(iVar11 + 0x530) + iVar10 + 0x590);
    puVar13 = puVar13 + 1;
  } while (iVar1 < 0x20);
  *(undefined1 *)(iVar11 + 0x52e) = 1;
  FUN_00122c80(0x48f4e0);
  *(undefined1 *)(iVar11 + 0x52d) = *(undefined1 *)(param_2 + 0x6a6);
  *(undefined8 *)(iVar11 + 0x520) = *(undefined8 *)(*(int *)(iVar11 + 0x530) + 0x698);
  return 1;
}


// ==== FUN_00123020 @ 00123020 ====

void FUN_00123020(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  
  iVar11 = (int)param_1;
  puVar13 = (undefined8 *)(iVar11 + 0x418);
  iVar1 = 0;
  iVar10 = 0;
  do {
    iVar1 = iVar1 + 0x5c;
    iVar12 = iVar10 + 1;
    iVar8 = 0;
    do {
      iVar9 = iVar8 + 1;
      puVar2 = (undefined8 *)FUN_00123c90(param_1,iVar8,iVar10);
      puVar4 = (undefined8 *)(*(int *)(iVar11 + 0x530) + iVar1);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *puVar4 = *puVar2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      iVar1 = iVar1 + 0x20;
      puVar4[3] = uVar7;
      iVar8 = iVar9;
    } while (iVar9 < 8);
    iVar1 = iVar12 * 0x100;
    iVar10 = iVar12;
  } while (iVar12 < 4);
  iVar10 = 0;
  do {
    puVar3 = (undefined1 *)(iVar11 + 0x528 + iVar10);
    iVar1 = *(int *)(iVar11 + 0x530) + iVar10;
    iVar10 = iVar10 + 1;
    *(undefined1 *)(iVar1 + 0x6a0) = *puVar3;
  } while (iVar10 < 4);
  iVar10 = 0;
  *(undefined1 *)(*(int *)(iVar11 + 0x530) + 0x6a4) = *(undefined1 *)(iVar11 + 0x52c);
  *(undefined4 *)(*(int *)(iVar11 + 0x530) + 0x57c) = *(undefined4 *)(iVar11 + 0x404);
  *(undefined4 *)(*(int *)(iVar11 + 0x530) + 0x580) = *(undefined4 *)(iVar11 + 0x408);
  *(undefined4 *)(*(int *)(iVar11 + 0x530) + 0x584) = *(undefined4 *)(iVar11 + 0x40c);
  *(undefined8 *)(*(int *)(iVar11 + 0x530) + 0x588) = *(undefined8 *)(iVar11 + 0x410);
  do {
    iVar1 = iVar10 * 8;
    uVar5 = *puVar13;
    iVar10 = iVar10 + 1;
    puVar13 = puVar13 + 1;
    *(undefined8 *)(*(int *)(iVar11 + 0x530) + iVar1 + 0x590) = uVar5;
  } while (iVar10 < 0x20);
  *(undefined1 *)(*(int *)(iVar11 + 0x530) + 0x6a6) = *(undefined1 *)(iVar11 + 0x52d);
  *(undefined8 *)(*(int *)(iVar11 + 0x530) + 0x698) = *(undefined8 *)(iVar11 + 0x520);
  FUN_001240b8(*(undefined4 *)(iVar11 + 0x530));
  return;
}


// ==== FUN_001231c0 @ 001231c0 ====

undefined4 FUN_001231c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00123c90();
  uVar2 = 0;
  if ((((*(char *)(iVar1 + 0x10) <= *(char *)(iVar1 + 0x11)) &&
       (uVar2 = 0, *(char *)(iVar1 + 0x12) <= *(char *)(iVar1 + 0x13))) &&
      (uVar2 = 0, *(char *)(iVar1 + 0x14) <= *(char *)(iVar1 + 0x15))) &&
     ((uVar2 = 0, *(char *)(iVar1 + 0x16) <= *(char *)(iVar1 + 0x17) &&
      (uVar2 = 1, *(short *)(iVar1 + 0x18) != 0x101)))) {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_00123248 @ 00123248 ====
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f4e8 undefined4
// GLOBAL DAT_0040f4e0 int_*
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040ddfb undefined1
// GLOBAL DAT_0048f697 undefined1
// GLOBAL DAT_0048f698 undefined1
// GLOBAL DAT_0048f699 undefined1
// GLOBAL DAT_0048f69e undefined1
// GLOBAL null undefined1

/* Strings referenciadas:
     "_PMO_" */

void FUN_00123248(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_c0 [16];
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  
  iVar14 = 0;
  iStack_ac = 0;
  *(undefined1 *)*DAT_0040f4dc = 0;
  FUN_001227a8(DAT_0040f4e8);
  FUN_00122c80(0x48f4e0);
  piStack_a8 = &iStack_b0;
  if (*(char *)(*DAT_0040f4e0 + 1) != '\0') {
    do {
      uVar13 = *(undefined8 *)(((iVar14 << 0x18) >> 0x13) + *(int *)(*DAT_0040f4e0 + 4));
      cVar3 = FUN_00121d78(*DAT_0040f4dc,uVar13);
      if ((cVar3 != '\0') && (lVar9 = FUN_00123cd0(param_1,uVar13), lVar9 == 1)) {
        FUN_00122cc8(0x48f4e0,uVar13,0);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)(uint)*(byte *)(*DAT_0040f4e0 + 1));
  }
  bVar4 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
  uVar17 = (uint)bVar4;
  piVar6 = (int *)FUN_00123c90(param_1,uVar17,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
  iVar14 = ((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) + (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)) *
           0x10000;
  lVar9 = (long)(iVar14 >> 0x10);
  if ((short)piVar6[1] < lVar9) {
    *(short *)(piVar6 + 1) = (short)((uint)iVar14 >> 0x10);
    lVar10 = FUN_00122a00(DAT_0040f4e8,bVar4);
    if (lVar10 < lVar9) {
      uVar5 = FUN_00122a00(DAT_0040f4e8,bVar4);
      *(undefined2 *)(piVar6 + 1) = uVar5;
    }
  }
  if (*(short *)((int)piVar6 + 6) < *(short *)(*DAT_0040f4dc + 0x2a)) {
    *(undefined2 *)((int)piVar6 + 6) = *(undefined2 *)(*DAT_0040f4dc + 0x2a);
  }
  if (((float)piVar6[3] == 0.0) || (*(float *)(*DAT_0040f4dc + 4) < (float)piVar6[3])) {
    piVar6[3] = *(int *)(*DAT_0040f4dc + 4);
  }
  uStack_a4 = uVar17 + 1;
  iVar14 = *(int *)(DAT_0040f4d0 + 0x8f4);
  *(undefined1 *)(piVar6 + 4) = 0;
  *(undefined1 *)((int)piVar6 + 0x12) = 0;
  *(undefined1 *)(piVar6 + 5) = 0;
  *(undefined1 *)((int)piVar6 + 0x16) = 0;
  piVar8 = *(int **)(DAT_0040f4d0 + 0x8f0);
  if (0 < iVar14) {
    do {
      puVar1 = (undefined8 *)*piVar8;
      bVar4 = *(byte *)((int)puVar1 + 0x15);
      if ((bVar4 & 2) == 0) {
        if ((bVar4 & 4) == 0) {
          if ((bVar4 & 8) == 0) {
            if (((bVar4 & 0x10) == 0) && ((bVar4 & 0x20) == 0)) {
              FUN_00272488(*puVar1,auStack_c0);
              lVar9 = FUN_00360a50(auStack_c0,0x3f3ed0);
              if (lVar9 == 0) {
                *(char *)(piVar6 + 4) = (char)piVar6[4] + '\x01';
              }
            }
          }
          else {
            *(char *)((int)piVar6 + 0x16) =
                 *(char *)((int)piVar6 + 0x16) + *(char *)((int)puVar1 + 0x14);
          }
        }
        else {
          *(char *)(piVar6 + 5) = (char)piVar6[5] + *(char *)((int)puVar1 + 0x14);
        }
      }
      else {
        *(char *)((int)piVar6 + 0x12) =
             *(char *)((int)piVar6 + 0x12) + *(char *)((int)puVar1 + 0x14);
      }
      iVar14 = iVar14 + -1;
      piVar8 = piVar8 + 3;
    } while (iVar14 != 0);
  }
  uVar2 = uStack_a4;
  if (*(char *)((int)piVar6 + 0x11) < *(char *)(*DAT_0040f4dc + 0x15)) {
    *(undefined1 *)((int)piVar6 + 0x11) = *(undefined1 *)(*DAT_0040f4dc + 0x15);
  }
  if (*(char *)((int)piVar6 + 0x13) < *(char *)(*DAT_0040f4dc + 0x16)) {
    *(undefined1 *)((int)piVar6 + 0x13) = *(undefined1 *)(*DAT_0040f4dc + 0x16);
  }
  if (*(char *)((int)piVar6 + 0x15) < *(char *)(*DAT_0040f4dc + 0x17)) {
    *(undefined1 *)((int)piVar6 + 0x15) = *(undefined1 *)(*DAT_0040f4dc + 0x17);
  }
  if (*(char *)((int)piVar6 + 0x17) < *(char *)(*DAT_0040f4dc + 0x18)) {
    *(undefined1 *)((int)piVar6 + 0x17) = *(undefined1 *)(*DAT_0040f4dc + 0x18);
  }
  if ('\0' < *(char *)(*DAT_0040f4dc + 0x19)) {
    *(undefined1 *)(piVar6 + 6) = 1;
  }
  if ('\0' < *(char *)(*DAT_0040f4dc + 0x1a)) {
    *(undefined1 *)((int)piVar6 + 0x19) = 1;
  }
  iVar14 = *DAT_0040f4dc;
  uVar15 = uStack_a4 & 0xff;
  iVar12 = (int)*(char *)(iVar14 + 0x17) + (int)*(char *)(iVar14 + 0x18) +
           (int)*(char *)(iVar14 + 0x19) + (int)*(char *)(iVar14 + 0x1a);
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 3) {
    iVar12 = iVar12 + *(char *)(iVar14 + 0x16);
  }
  lVar9 = FUN_0012f880(DAT_0040f4d0 + 0x910,uVar17,*(int *)(DAT_0040f0e0 + 0x2014c),piStack_a8);
  if ((lVar9 == 0) &&
     (iStack_b0 = *(int *)(DAT_0040f4d0 + 0x8fc) + *(int *)(DAT_0040f4d0 + 0x900) +
                  *(int *)(DAT_0040f4d0 + 0x904) + *(int *)(DAT_0040f4d0 + 0x908),
     *(int *)(DAT_0040f0e0 + 0x2014c) == 3)) {
    iStack_b0 = iStack_b0 + *(int *)(DAT_0040f4d0 + 0x8f8);
  }
  if ((lVar9 == 1) || (iVar14 = 0, iStack_b0 <= iVar12)) {
    iVar14 = 1;
  }
  if (iVar14 == 0) {
    iVar12 = -1;
    if (0 < *(int *)(DAT_0040f0e0 + 0x2014c)) {
      iVar12 = *(int *)(DAT_0040f0e0 + 0x2014c) + -1;
    }
  }
  else {
    iVar12 = *(int *)(DAT_0040f0e0 + 0x2014c);
  }
  iVar16 = (int)param_1;
  iVar7 = iStack_ac;
  if ((iVar12 != -1) && (iVar7 = iVar14, uVar15 < 8)) {
    iVar14 = FUN_00123c90(param_1,uVar15,iVar12);
    if (*(char *)(iVar14 + 0x1a) == '\0') {
      FUN_00122d48(0x48f4e0,(char)uVar2,0);
      DAT_0040ddfb = 1;
    }
    iVar14 = 0;
    if (-1 < iVar12) {
      do {
        iVar7 = FUN_00123c90(param_1,uVar15,iVar14);
        puVar11 = (undefined1 *)(iVar16 + iVar14);
        *(undefined1 *)(iVar7 + 0x1a) = 1;
        iVar14 = iVar14 + 1;
        *puVar11 = (char)uVar2;
      } while (iVar14 <= iVar12);
    }
    iStack_ac = 0;
    iVar7 = iStack_ac;
  }
  iStack_ac = iVar7;
  if (iStack_ac != 0) {
    cVar3 = FUN_00123bf0(0x48efa8,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
    if (cVar3 != '\0') {
      cVar3 = *(char *)(iVar16 + 0x52c);
      goto LAB_00123874;
    }
    iVar14 = *(int *)(DAT_0040f0e0 + 0x2014c);
    if (iVar14 == 1) {
      DAT_0048f697 = 1;
      DAT_0048f698 = 1;
    }
    else {
      if (iVar14 < 2) {
        cVar3 = *(char *)(iVar16 + 0x52c);
        goto LAB_00123874;
      }
      if (iVar14 == 2) {
        DAT_0048f698 = 1;
        DAT_0048f697 = 1;
        DAT_0048f699 = 1;
        FUN_00122d98(0x48f4e0,3,1);
        iVar14 = FUN_00123c90(param_1,0,3);
        *(undefined1 *)(iVar14 + 0x1a) = 1;
        uGpffff860a = 1;
      }
      else {
        if (iVar14 != 3) {
          cVar3 = *(char *)(iVar16 + 0x52c);
          goto LAB_00123874;
        }
        iVar14 = 3;
        puVar11 = &DAT_0048f69e;
        do {
          *puVar11 = 1;
          iVar14 = iVar14 + -1;
          puVar11 = puVar11 + -1;
        } while (-1 < iVar14);
      }
    }
  }
  cVar3 = *(char *)(iVar16 + 0x52c);
LAB_00123874:
  if (cVar3 == '\0') {
    iVar14 = 0;
    if (*(int *)(DAT_0040f0e0 + 0x2014c) == 2) {
      iVar12 = 0;
      do {
        piVar8 = (int *)FUN_00123c90(param_1,iVar12,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
        if (*piVar8 != -1) {
          lVar9 = FUN_001231c0(param_1,iVar12,*(undefined4 *)(DAT_0040f0e0 + 0x2014c));
          if (lVar9 == 1) {
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 8);
    }
    if (7 < iVar14) {
      *(undefined1 *)(iVar16 + 0x52c) = 1;
    }
  }
  FUN_00123988(param_1);
  iVar14 = FUN_001227c0(DAT_0040f4e8);
  if (*piVar6 < iVar14) {
    *piVar6 = iVar14;
  }
  return;
}


// ==== FUN_00123960 @ 00123960 ====

void FUN_00123960(void)

{
  FUN_00123988();
  return;
}


// ==== FUN_00123980 @ 00123980 ====

undefined8 FUN_00123980(void)

{
  return 0;
}


// ==== FUN_00123988 @ 00123988 ====
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f4d0 int

void FUN_00123988(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0x408) =
       *(int *)(iVar3 + 0x408) +
       ((int)(((uint)*(ushort *)(*DAT_0040f4dc + 0x1c) + (uint)*(ushort *)(*DAT_0040f4dc + 0x1e)) *
             0x10000) >> 0x10);
  *(int *)(iVar3 + 0x40c) = *(int *)(iVar3 + 0x40c) + (int)*(short *)(*DAT_0040f4dc + 0x2a);
  lVar1 = FUN_002902f8(*(undefined4 *)(DAT_0040f4d0 + 0x20));
  *(long *)(iVar3 + 0x520) = *(long *)(iVar3 + 0x520) + lVar1;
  lVar1 = FUN_00122368(DAT_0040f4dc,0x20);
  if (0 < lVar1) {
    FUN_00123b80(param_1,0);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,0x200);
  if (0 < lVar1) {
    FUN_00123b80(param_1,1);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,0x10);
  if (0 < lVar1) {
    FUN_00123b80(param_1,2);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,0x400);
  if (0 < lVar1) {
    FUN_00123b80(param_1,3);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,0x800);
  if (0 < lVar1) {
    FUN_00123b80(param_1,4);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,0x1000);
  if (0 < lVar1) {
    FUN_00123b80(param_1,5);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,4);
  if (0 < lVar1) {
    FUN_00123b80(param_1,6);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,2);
  if ((0 < lVar1) || (lVar1 = FUN_00122368(DAT_0040f4dc,8), 0 < lVar1)) {
    FUN_00123b80(param_1,7);
  }
  lVar1 = FUN_00122368(DAT_0040f4dc,0x40);
  if (0 < lVar1) {
    FUN_00123b80(param_1,8);
  }
  uVar2 = *(long *)(iVar3 + 0x410) + (ulong)*(uint *)(*DAT_0040f4dc + 0x48);
  *(ulong *)(iVar3 + 0x410) = uVar2;
  if (9999999 < uVar2) {
    *(undefined8 *)(iVar3 + 0x410) = 9999999;
  }
  uVar2 = *(long *)(iVar3 + 0x518) + (ulong)*(uint *)(*DAT_0040f4dc + 0x4c);
  *(ulong *)(iVar3 + 0x518) = uVar2;
  if (9999999 < uVar2) {
    *(undefined8 *)(iVar3 + 0x518) = 9999999;
  }
  return;
}


// ==== FUN_00123b80 @ 00123b80 ====

void FUN_00123b80(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if ((*(uint *)(param_1 + 0x404) & uVar1) == 0) {
    *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) | uVar1;
    FUN_00122d10(0x48f4e0);
  }
  return;
}


// ==== FUN_00123bc8 @ 00123bc8 ====

undefined8 FUN_00123bc8(void)

{
  return 0;
}


// ==== FUN_00123bd0 @ 00123bd0 ====

undefined1 FUN_00123bd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00123c90();
  return *(undefined1 *)(iVar1 + 0x1a);
}


// ==== FUN_00123bf0 @ 00123bf0 ====

bool FUN_00123bf0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00123c90(param_1,7,param_2);
  return 1 < *piVar1;
}


// ==== FUN_00123c20 @ 00123c20 ====

int FUN_00123c20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    lVar1 = FUN_00123bd0(param_1,param_2,iVar2);
    if (lVar1 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  return -1;
}


// ==== FUN_00123c90 @ 00123c90 ====

int FUN_00123c90(int param_1,int param_2,int param_3)

{
  return param_1 + (param_2 + param_3 * 8) * 0x20 + 4;
}


// ==== FUN_00123ca8 @ 00123ca8 ====

undefined8 FUN_00123ca8(void)

{
  return 0;
}


// ==== FUN_00123cb0 @ 00123cb0 ====

undefined8 FUN_00123cb0(void)

{
  return 0;
}


// ==== FUN_00123cb8 @ 00123cb8 ====

undefined8 FUN_00123cb8(void)

{
  return 0;
}


// ==== FUN_00123cc8 @ 00123cc8 ====

undefined8 FUN_00123cc8(void)

{
  return 0;
}


// ==== FUN_00123cd0 @ 00123cd0 ====

undefined8 FUN_00123cd0(void)

{
  return 0;
}


// ==== FUN_00123ce0 @ 00123ce0 ====

void FUN_00123ce0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  
  puVar8 = (undefined1 *)param_1;
  iVar7 = 0;
  do {
    iVar9 = iVar7 + 1;
    iVar5 = 0;
    do {
      uVar3 = FUN_00123c90(param_1,iVar5,iVar7);
      memset(uVar3,0,0x20);
      iVar6 = iVar5 + 1;
      puVar1 = (undefined4 *)FUN_00123c90(param_1,iVar5,iVar7);
      *puVar1 = 0xffffffff;
      iVar5 = iVar6;
    } while (iVar6 < 8);
    iVar7 = iVar9;
  } while (iVar9 < 4);
  puVar2 = puVar8 + 0x52b;
  iVar7 = 3;
  do {
    *puVar2 = 0;
    iVar7 = iVar7 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar7);
  puVar8[0x52c] = 0;
  puVar8[0x52a] = 1;
  puVar4 = (undefined8 *)(puVar8 + 0x510);
  puVar8[0x528] = 1;
  iVar7 = 0x1f;
  puVar8[0x529] = 1;
  *(undefined4 *)(puVar8 + 0x404) = 0;
  *(undefined4 *)(puVar8 + 0x408) = 0;
  *(undefined4 *)(puVar8 + 0x40c) = 0;
  *(undefined8 *)(puVar8 + 0x410) = 0;
  do {
    *puVar4 = 0;
    iVar7 = iVar7 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar7);
  iVar7 = FUN_00123c90(param_1,0,0);
  *(undefined1 *)(iVar7 + 0x1a) = 1;
  iVar7 = FUN_00123c90(param_1,0,1);
  *(undefined1 *)(iVar7 + 0x1a) = 1;
  iVar7 = FUN_00123c90(param_1,0,2);
  *(undefined1 *)(iVar7 + 0x1a) = 1;
  iVar7 = FUN_00123c90(param_1,0,3);
  *(undefined1 *)(iVar7 + 0x1a) = 0;
  *(undefined8 *)(puVar8 + 0x520) = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  return;
}


// ==== FUN_00123e70 @ 00123e70 ====
// GLOBAL PTR_s_KELLAR_J._003bc848 undefined_*

/* Strings referenciadas:
     "KELLAR J." */

undefined4 FUN_00123e70(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0035d1a0(param_1 + 8,PTR_s_KELLAR_J__003bc848,0x50);
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar4 + 1;
    puVar3 = (undefined4 *)(iVar1 + param_1 + 0x5c);
    iVar1 = 7;
    do {
      iVar1 = iVar1 + -1;
      memset(puVar3,0,0x20);
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 8;
    } while (-1 < iVar1);
    iVar1 = iVar4 * 0x100;
  } while (iVar4 < 4);
  puVar5 = (undefined1 *)(param_1 + 0x474);
  iVar4 = 7;
  iVar1 = param_1 + 0x45c;
  do {
    memset(iVar1,0,0x1c);
    iVar4 = iVar4 + -1;
    *puVar5 = 3;
    puVar5 = puVar5 + 0x1c;
    iVar1 = iVar1 + 0x1c;
  } while (-1 < iVar4);
  puVar5 = (undefined1 *)(param_1 + 0x57b);
  iVar1 = 0x3f;
  do {
    *puVar5 = 0;
    iVar1 = iVar1 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar1);
  puVar2 = (undefined8 *)(param_1 + 0x688);
  iVar1 = 0x1f;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 0x57c) = 0;
  iVar1 = 3;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  puVar5 = (undefined1 *)(param_1 + 0x6a3);
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  do {
    *puVar5 = 0;
    iVar1 = iVar1 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar1);
  *(undefined1 *)(param_1 + 0x6a4) = 0;
  *(undefined1 *)(param_1 + 0x6a0) = 1;
  *(undefined1 *)(param_1 + 0x6a1) = 1;
  *(undefined1 *)(param_1 + 0x6a2) = 1;
  *(undefined1 *)(param_1 + 0x6a5) = 1;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined1 *)(param_1 + 0x176) = 1;
  *(undefined1 *)(param_1 + 0x276) = 1;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined1 *)(param_1 + 0x6a6) = 0;
  return 1;
}


// ==== FUN_00124048 @ 00124048 ====

void FUN_00124048(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_0026f340(auStack_30);
  uVar1 = FUN_0027f640(auStack_30);
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 0x6a5) = 0;
  return;
}


// ==== FUN_00124080 @ 00124080 ====

void FUN_00124080(float param_1,int param_2)

{
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + param_1;
  return;
}


// ==== FUN_00124090 @ 00124090 ====

void FUN_00124090(int param_1,undefined8 param_2)

{
  FUN_0035d1a0(param_1 + 8,param_2,0x50);
  return;
}


// ==== FUN_001240b0 @ 001240b0 ====

void FUN_001240b0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6a5) = param_2;
  return;
}


// ==== FUN_001240b8 @ 001240b8 ====

void FUN_001240b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00123bc8(0x48efa8);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}


// ==== FUN_001240e8 @ 001240e8 ====

void FUN_001240e8(float param_1,float param_2,undefined2 *param_3,long param_4)

{
  float fVar1;
  
  *param_3 = 0;
  if (param_3[1] == 0) {
    if ((ABS(*(float *)(param_3 + 2)) < 0.03) && (0.03 <= ABS(param_1))) {
      param_3[1] = 1;
      *(undefined4 *)(param_3 + 4) = 0x3f666666;
      *param_3 = 1;
    }
  }
  else {
    fVar1 = ABS(param_1);
    if (0.01 < fVar1) {
      if (param_4 != 0) {
        if (fVar1 <= 0.4) {
          *(float *)(param_3 + 4) = *(float *)(param_3 + 4) - param_2;
        }
        else if (0.9 <= fVar1) {
          *(float *)(param_3 + 4) = *(float *)(param_3 + 4) - param_2 * 3.0;
        }
        else {
          fVar1 = (fVar1 - 0.4) / 0.49999997;
          *(float *)(param_3 + 4) = *(float *)(param_3 + 4) - ((fVar1 + fVar1) * param_2 + param_2);
        }
        if (*(float *)(param_3 + 4) < 0.0) {
          *param_3 = 1;
          fVar1 = *(float *)(param_3 + 4) + 0.45;
          *(float *)(param_3 + 4) = fVar1;
          if (fVar1 < 0.0) {
            *(undefined4 *)(param_3 + 4) = 0;
          }
        }
      }
    }
    else {
      param_3[1] = 0;
    }
  }
  *(float *)(param_3 + 2) = param_1;
  return;
}


// ==== FUN_00124258 @ 00124258 ====

void FUN_00124258(void)

{
  return;
}


// ==== FUN_00124260 @ 00124260 ====

undefined4 FUN_00124260(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar1 = param_1;
  while( true ) {
    *(undefined2 *)((int)puVar1 + 10) = 0;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0;
    if ((int)(param_1 + 0x54) <= (int)(puVar1 + 3)) break;
    *(undefined2 *)(puVar1 + 5) = 0;
    puVar1 = puVar1 + 3;
  }
  return 1;
}


// ==== FUN_001242a8 @ 001242a8 ====
// GLOBAL UNK_003f4288 undefined
// GLOBAL UNK_003f42a8 undefined

void FUN_001242a8(undefined4 param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = 0;
  param_2 = param_2 + 8;
  fVar6 = -0.75;
  fVar5 = -1.0;
  do {
    fVar4 = (float)FUN_00124768(param_3,iVar3,0);
    if ((&UNK_003f42a8)[iVar3] != '\0') {
      if (fVar4 < fVar6) {
        fVar4 = (fVar4 + 0.75) * 4.0;
        fVar1 = 0.0 - fVar4 * fVar4;
      }
      else {
        fVar1 = 0.0;
        if (0.75 < fVar4) {
          fVar4 = (fVar4 - 0.75) * 4.0;
          fVar1 = fVar4 * fVar4 + 0.0;
        }
      }
      fVar4 = fVar1;
      if (fVar4 < fVar5) {
        fVar4 = -1.0;
      }
      else if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
    }
    puVar2 = &UNK_003f4288 + iVar3;
    iVar3 = iVar3 + 1;
    FUN_001240e8(fVar4,param_1,param_2,*puVar2);
    param_2 = param_2 + 0xc;
  } while (iVar3 < 0x1c);
  return;
}


// ==== FUN_00124438 @ 00124438 ====
// GLOBAL DAT_003f4260 undefined

ulong FUN_00124438(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 < 2) {
    uVar2 = 0;
  }
  else {
    if (1 < (int)param_2 - 2U) {
      return (ulong)(*(short *)(*(int *)(&DAT_003f4260 + (int)param_2 * 4) * 0xc + (int)param_1 + 8)
                    != 0);
    }
    uVar2 = 1;
  }
  uVar1 = FUN_001244b0(param_1,uVar2,param_2);
  return uVar1;
}


// ==== FUN_001244b0 @ 001244b0 ====
// GLOBAL DAT_003f4260 undefined

bool FUN_001244b0(int param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_10;
  float afStack_c [3];
  
  pfVar3 = &fStack_10;
  if (param_2 == 0) {
    iVar4 = 0;
    iVar2 = 1;
    pfVar3 = afStack_c;
  }
  else {
    iVar4 = 3;
    iVar2 = 2;
  }
  afStack_c[0] = *(float *)(param_1 + 300);
  fStack_10 = *(float *)(param_1 + 0x138);
  fVar7 = *(float *)(param_1 + 0xc + *(int *)(&DAT_003f4260 + iVar4 * 4) * 0xc);
  fVar5 = *(float *)(param_1 + 0xc + *(int *)(&DAT_003f4260 + iVar2 * 4) * 0xc);
  if (*(short *)(param_1 + 0x128) == 0) {
    afStack_c[0] = 0.0;
  }
  if (*(short *)(param_1 + 0x134) == 0) {
    fStack_10 = 0.0;
  }
  if (*(short *)(param_1 + *(int *)(&DAT_003f4260 + iVar4 * 4) * 0xc + 8) == 0) {
    fVar7 = 0.0;
  }
  if (*(short *)(param_1 + *(int *)(&DAT_003f4260 + iVar2 * 4) * 0xc + 8) == 0) {
    fVar5 = 0.0;
  }
  if (ABS(fStack_10) < ABS(afStack_c[0])) {
    fStack_10 = 0.0;
  }
  else {
    afStack_c[0] = 0.0;
  }
  fVar6 = *pfVar3;
  if (fVar6 == 0.0) {
    fVar5 = fVar5 - fVar7;
    if (fVar6 < -0.75) {
      fVar7 = (fVar6 + 0.75) * 4.0;
      fVar5 = fVar5 - fVar7 * fVar7;
    }
    else if (0.75 < fVar6) {
      fVar7 = (fVar6 - 0.75) * 4.0;
      fVar5 = fVar5 + fVar7 * fVar7;
    }
    fVar7 = -1.0;
    if (-1.0 <= fVar5) {
      if (fVar5 <= 1.0) {
        *pfVar3 = fVar5;
        goto LAB_0012465c;
      }
      fVar7 = 1.0;
    }
    *pfVar3 = fVar7;
  }
LAB_0012465c:
  if (param_3 == iVar4) {
    bVar1 = *pfVar3 < 0.0;
  }
  else {
    bVar1 = 0.0 < *pfVar3;
  }
  return bVar1;
}


// ==== FUN_001246a0 @ 001246a0 ====
// GLOBAL DAT_0040f0e8 int
// GLOBAL DAT_0040f0e0 int

void FUN_001246a0(int *param_1,int param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = DAT_0040f0e8 + param_2 * 0xf0 + 0x2c0;
  FUN_00124258(param_1 + 4);
  param_1[0x5a] = *(int *)(DAT_0040f0e0 + 0x20140);
  return;
}


// ==== FUN_00124708 @ 00124708 ====

undefined4 FUN_00124708(int param_1)

{
  FUN_00124260(param_1 + 0x10);
  return 1;
}


// ==== FUN_00124728 @ 00124728 ====

void FUN_00124728(void)

{
  return;
}


// ==== FUN_00124730 @ 00124730 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00124730(undefined8 param_1)

{
  FUN_001242a8(*(undefined4 *)(DAT_0040f0e0 + 0x2013c),(int)param_1 + 0x10,param_1);
  return;
}


// ==== FUN_00124768 @ 00124768 ====
// GLOBAL DAT_0040f0e0 int

float FUN_00124768(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  lVar1 = FUN_0026baf0(*(undefined4 *)(param_1 + 0xc));
  if (((lVar1 != 0) &&
      (fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),param_2), param_3 != 0)) &&
     (lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),param_2), lVar1 == 0)) {
    fVar2 = 0.0;
  }
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 != 0.0) {
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  }
  return fVar2;
}


// ==== FUN_00124840 @ 00124840 ====
// GLOBAL DAT_003bcac8 int

float FUN_00124840(int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = false;
  switch(param_2) {
  case 0xb:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x24:
    break;
  default:
    fVar6 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),
                                *(undefined4 *)(param_2 * 4 + DAT_003bcac8));
    if (0.0 <= fVar6) {
      return fVar6;
    }
    goto LAB_001249b4;
  case 0xe:
  case 0xf:
  case 0x1e:
  case 0x21:
  case 0x23:
    fVar6 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_003bcac8 + 0x38))
    ;
    fVar3 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_003bcac8 + 0x3c))
    ;
    fVar4 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_003bcac8 + 0x84))
    ;
    fVar5 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_003bcac8 + 0x78))
    ;
    bVar1 = 1.5 < fVar6 + fVar3 + fVar4 + fVar5;
  }
  fVar6 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),
                              *(undefined4 *)(param_2 * 4 + DAT_003bcac8));
  lVar2 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 * 4 + DAT_003bcac8));
  if (lVar2 == 0) {
    fVar6 = 0.0;
  }
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  if (bVar1) {
LAB_001249b4:
    fVar6 = 0.0;
  }
  return fVar6;
}


// ==== FUN_001249f8 @ 001249f8 ====
// GLOBAL DAT_003bcac8 int

undefined4 FUN_001249f8(undefined8 param_1,long param_2)

{
  if (param_2 != 0x25) {
    return *(undefined4 *)((int)param_2 * 4 + DAT_003bcac8);
  }
  return 2;
}


// ==== FUN_00124a20 @ 00124a20 ====
// GLOBAL DAT_003bcac8 int_*

int FUN_00124a20(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  piVar1 = DAT_003bcac8;
  do {
    piVar1 = piVar1 + 1;
    if (*piVar1 == param_2) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x25);
  return iVar2;
}


// ==== FUN_00124a58 @ 00124a58 ====
// GLOBAL DAT_003bcac8 int

void FUN_00124a58(undefined8 param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + DAT_003bcac8) = param_3;
  return;
}


// ==== FUN_00124a70 @ 00124a70 ====

bool FUN_00124a70(int param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),2);
  lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),2);
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  return 0.0 < fVar2;
}


// ==== FUN_00124ae8 @ 00124ae8 ====

bool FUN_00124ae8(int param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),4);
  lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),4);
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  return 0.0 < fVar2;
}


// ==== FUN_00124b58 @ 00124b58 ====

bool FUN_00124b58(int param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),5);
  lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),5);
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  return 0.0 < fVar2;
}


// ==== FUN_00124bc8 @ 00124bc8 ====

bool FUN_00124bc8(int param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),6);
  lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),6);
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  return 0.0 < fVar2;
}


// ==== FUN_00124c38 @ 00124c38 ====

bool FUN_00124c38(int param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),7);
  lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),7);
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  return 0.0 < fVar2;
}


// ==== FUN_00124ca8 @ 00124ca8 ====

bool FUN_00124ca8(int param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0026bb98(*(undefined4 *)(param_1 + 0xc),8);
  lVar1 = FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),8);
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  return 0.0 < fVar2;
}


// ==== FUN_00124d20 @ 00124d20 ====

undefined4 FUN_00124d20(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  lVar2 = FUN_0026baf0(*(undefined4 *)(param_1 + 0xc));
  iVar3 = 0;
  if (lVar2 == 0) {
LAB_00124d78:
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    while( true ) {
      fVar4 = (float)FUN_0026bb98(uVar1,iVar3);
      uVar1 = 1;
      if (0.0 < fVar4) break;
      iVar3 = iVar3 + 1;
      if (0x1b < iVar3) goto LAB_00124d78;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}


// ==== FUN_00124d98 @ 00124d98 ====
// GLOBAL DAT_003bcac8 undefined4

void FUN_00124d98(undefined8 param_1,undefined4 param_2)

{
  DAT_003bcac8 = param_2;
  return;
}


// ==== FUN_00124da8 @ 00124da8 ====
// GLOBAL DAT_003bcac8 int
// GLOBAL DAT_003bc850 undefined

void FUN_00124da8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = (undefined4 *)(&DAT_003bc850 + param_2 * 0x94);
  do {
    iVar2 = iVar4 * 4;
    uVar1 = *puVar3;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(iVar2 + DAT_003bcac8) = uVar1;
  } while (iVar4 < 0x25);
  return;
}


// ==== FUN_00124e00 @ 00124e00 ====
// GLOBAL DAT_003bcac8 int
// GLOBAL DAT_003bcaa0 undefined4

int FUN_00124e00(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_003bcaa0;
  iVar1 = 0;
  do {
    if (*(int *)(param_2 * 4 + DAT_003bcac8) == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return 10;
}


// ==== FUN_00124e48 @ 00124e48 ====
// GLOBAL DAT_003bcaa0 undefined4

void FUN_00124e48(int param_1,int param_2)

{
  FUN_0026bbc0(*(undefined4 *)(param_1 + 0xc),(&DAT_003bcaa0)[param_2]);
  return;
}


// ==== FUN_00124e78 @ 00124e78 ====
// GLOBAL DAT_003bc850 undefined

undefined * FUN_00124e78(int param_1)

{
  return &DAT_003bc850 + param_1 * 0x94;
}


// ==== FUN_00124e90 @ 00124e90 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f0e0 int

void FUN_00124e90(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_0040f4d0 != 0) {
    bVar3 = false;
    if (*(int *)(DAT_0040f4d0 + 0x5aa0) == 0x1c) {
      iVar1 = *(int *)(DAT_0040f4d0 + 0x4990);
      bVar3 = false;
      if ((iVar1 != 0x1c) && (iVar1 != 1)) {
        bVar3 = iVar1 != 0x37;
      }
      if (!bVar3) {
        iVar1 = *(int *)(DAT_0040f4d0 + 0x5210);
        bVar2 = false;
        if ((iVar1 != 0x1c) && (iVar1 != 1)) {
          bVar2 = iVar1 != 0x37;
        }
        bVar3 = false;
        if (!bVar2) goto LAB_00124f1c;
      }
      bVar3 = true;
    }
LAB_00124f1c:
    if (bVar3) {
      lVar4 = FUN_00103860();
      fVar6 = 6.0;
      if (lVar4 != 0) {
        fVar6 = 16.0;
      }
      goto LAB_00124f60;
    }
  }
  fVar6 = 0.2;
LAB_00124f60:
  fVar5 = *(float *)(DAT_0040f0e0 + 0x2013c);
  if (fVar5 == 0.05) {
    fVar6 = (fVar6 + fVar6) * 15.625;
  }
  else if (fVar5 == 0.04) {
    fVar6 = (fVar6 + fVar6) * 15.625;
  }
  else if (fVar5 == 0.033333335) {
    fVar6 = (fVar6 + fVar6) * 15.734;
  }
  else if (fVar5 == 0.02) {
    fVar6 = fVar6 * 15.625;
  }
  else {
    fVar6 = fVar6 * 15.734;
  }
  FUN_00271610((int)fVar6);
  return;
}


// ==== FUN_00125060 @ 00125060 ====
// GLOBAL DAT_0040ead8 char

void FUN_00125060(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1e;
  if (DAT_0040ead8 != '\0') {
    uVar1 = 0x19;
  }
  FUN_002b4dd0(2);
  FUN_0027f730(uVar1);
  FUN_0027f7d0(param_1 + 0x20120);
  FUN_0027f818(param_1 + 0x20120);
  return;
}


// ==== FUN_001250c8 @ 001250c8 ====

void FUN_001250c8(void)

{
  return;
}


// ==== FUN_001250d0 @ 001250d0 ====
// GLOBAL DAT_003bcaf8 undefined4

/* Strings referenciadas:
     "cdrom0:\IOP\IOPRP300.IMG;1" */

void FUN_001250d0(undefined4 *param_1)

{
  long lVar1;
  
  *param_1 = 1;
  FUN_0036a8d8(0);
  FUN_002a4840(0);
  do {
    lVar1 = FUN_0036d408(0x3f4020);
  } while (lVar1 == 0);
  do {
    lVar1 = FUN_0036d3b8();
  } while (lVar1 == 0);
  FUN_0036a8d8(0);
  FUN_0036cfa8();
  FUN_0036bce8();
  FUN_002a4840(0);
  FUN_002a4f60(2);
  FUN_002a4d40(0);
  FUN_0036cc80();
  DAT_003bcaf8 = 0;
  return;
}


// ==== FUN_00125178 @ 00125178 ====
// GLOBAL DAT_003bcaf8 int
// GLOBAL PTR_s_\IOP\SIO2MAN.IRX;1_003bcad0 undefined_*

/* Strings referenciadas:
     "cdrom0:" */

bool FUN_00125178(undefined4 *param_1)

{
  bool bVar1;
  undefined1 auStack_120 [256];
  
  bVar1 = DAT_003bcaf8 < 10;
  if (bVar1) {
    sprintf(auStack_120,0x3f4040,0x3f4048,(&PTR_s__IOP_SIO2MAN_IRX_1_003bcad0)[DAT_003bcaf8]);
    FUN_0036d218(auStack_120,0,0);
    DAT_003bcaf8 = DAT_003bcaf8 + 1;
  }
  else {
    *param_1 = 0x1c;
  }
  return !bVar1;
}


// ==== FUN_00125208 @ 00125208 ====

void FUN_00125208(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x3b0) = 0xffffffff;
  lVar2 = FUN_0035e7d8(0x1a883ff);
  *(int *)(iVar3 + 0x3bc) = (int)lVar2;
  if (lVar2 == 0) {
    *(undefined1 *)(iVar3 + 0x3c4) = 1;
    uVar1 = FUN_0035e7d8(0x19883ff);
    *(undefined4 *)(iVar3 + 0x3bc) = uVar1;
  }
  else {
    *(undefined1 *)(iVar3 + 0x3c4) = 0;
  }
  uVar4 = *(int *)(iVar3 + 0x3bc) + 0x7ffU & 0xfffff800;
  *(uint *)(iVar3 + 0x3c0) = uVar4;
  FUN_00107a08(iVar3 + 4,uVar4,0xffffffffffffffff,0x283000);
  FUN_00107a08(iVar3 + 0x28,uVar4 + 0x1258400,0xffffffffffffffff,0x16b000);
  FUN_00107a08(iVar3 + 0x4c,uVar4 + 0x283000,0xffffffffffffffff,0x934000);
  FUN_00107a08(iVar3 + 0x70,uVar4 + 0xbb7000,0xffffffffffffffff,0x113000);
  FUN_00107a08(iVar3 + 0x94,uVar4 + 0xcca000,0xffffffffffffffff,0xc1800);
  FUN_00107a08(iVar3 + 0xb8,uVar4 + 0xd8b800,0xffffffffffffffff,0x4800);
  FUN_00107a08(iVar3 + 0xdc,uVar4 + 0xd90000,0xffffffffffffffff,0x110000);
  FUN_00107a08(iVar3 + 0x100,uVar4 + 0xea0000,0xffffffffffffffff,0xd6400);
  FUN_00107a08(iVar3 + 0x124,uVar4 + 0xf76400,0xffffffffffffffff,0x2e1800);
  FUN_00107a08(iVar3 + 0x1d8,uVar4 + 0x1586400,0xffffffffffffffff,0xb2000);
  FUN_00107a08(iVar3 + 0x1fc,uVar4 + 0x1638400,0xffffffffffffffff,0xb2000);
  FUN_00107a08(iVar3 + 0x16c,uVar4 + 0x1257c00,0xffffffffffffffff,0x800);
  FUN_00107a08(iVar3 + 0x220,uVar4 + 0x16ea400,0xffffffffffffffff,0x113400);
  FUN_00107a08(iVar3 + 0x148,uVar4 + 0x13c3400,0xffffffffffffffff,0x28800);
  FUN_00107a08(iVar3 + 400,uVar4 + 0x13ebc00,0xffffffffffffffff,0xac800);
  FUN_00107a08(iVar3 + 0x1b4,uVar4 + 0x1498400,0xffffffffffffffff,0xee000);
  FUN_00107a08(iVar3 + 0x244,uVar4 + 0x17fdc00,0xffffffffffffffff,0x800);
  FUN_00107a08(iVar3 + 0x268,uVar4 + 0x17fe400,0xffffffffffffffff,0);
  FUN_00107a08(iVar3 + 0x2f8,uVar4 + 0x17fd800,0xffffffffffffffff,0x400);
  FUN_00107a08(iVar3 + 0x2b0,uVar4 + 0x17fe400,0xffffffffffffffff,0x9000);
  FUN_00107a08(iVar3 + 0x364,uVar4 + 0x1807400,0xffffffffffffffff,0x25800);
  FUN_00107a08(iVar3 + 0x388,uVar4 + 0x182cc00,0xffffffffffffffff,0x4b000);
  FUN_00107a08(iVar3 + 0x2d4,uVar4 + 0x1877c00,0xffffffffffffffff,0x10000);
  if (*(char *)(iVar3 + 0x3c4) == '\0') {
    FUN_00107a08(iVar3 + 0x28c,uVar4 + 0x1887c00,0xffffffffffffffff,0x200000);
  }
  else {
    FUN_00107a08(iVar3 + 0x28c,uVar4 + 0x1887c00,0xffffffffffffffff,0x100000);
  }
  FUN_00107a40(param_1);
  return;
}


// ==== FUN_00125588 @ 00125588 ====

void FUN_00125588(int param_1)

{
  FUN_0035e828(*(undefined4 *)(param_1 + 0x3bc));
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  return;
}


