// ==== FUN_0033ebb0 @ 0033ebb0 ====

void FUN_0033ebb0(void)

{
  FUN_0033e9b8(0,0xffff);
  return;
}


// ==== FUN_0033ebd0 @ 0033ebd0 ====

undefined4
FUN_0033ebd0(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_14;
  undefined4 uStack_4;
  
  pauVar1 = (undefined1 (*) [16])param_2;
  if (param_2 == 0) {
    auStack_b0 = param_1[3];
  }
  else {
    auVar3 = _lqc2(*pauVar1);
    auVar4 = _lqc2(pauVar1[1]);
    auVar2 = _lqc2(pauVar1[2]);
    auVar5 = _lqc2(*param_1);
    auVar7 = _lqc2(param_1[1]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar6 = _vmaddbc(auVar2,auVar5);
    auVar5 = _lqc2(param_1[2]);
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    auVar8 = _vmaddbc(auVar2,auVar7);
    auVar9 = _lqc2(pauVar1[3]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar7 = _vmaddbc(auVar2,auVar5);
    auVar5 = _lqc2(param_1[3]);
    _vmulabc(auVar3,auVar5);
    _vmaddabc(auVar4,auVar5);
    _vmaddabc(auVar2,auVar5);
    auVar2 = _vmaddbc(auVar9,in_vf0);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    auStack_b0 = _sqc2(auVar2);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    _sqc2(auVar2);
    _sqc2(auVar6);
    _sqc2(auVar8);
    _sqc2(auVar7);
    _sqc2(auVar2);
  }
  auVar2._8_4_ = 0x3f800000;
  auVar2._0_8_ = 0x3f8000003f800000;
  auVar2._12_4_ = uStack_14;
  auVar2 = _lqc2(auVar2);
  auVar4 = _qmtc2(*(undefined4 *)(param_1[4] + 0xc));
  auVar3 = _lqc2(auStack_b0);
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar2 = _vsub(auVar3,auVar2);
  auVar2 = _sqc2(auVar2);
  *param_4 = auVar2;
  auVar3._8_4_ = 0x3f800000;
  auVar3._0_8_ = 0x3f8000003f800000;
  auVar3._12_4_ = uStack_4;
  auVar3 = _lqc2(auVar3);
  auVar4 = _qmtc2(*(undefined4 *)(param_1[4] + 0xc));
  auVar2 = _lqc2(auStack_b0);
  auVar3 = _vmulbc(auVar3,auVar4);
  auVar2 = _vadd(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  param_4[1] = auVar2;
  return 1;
}


// ==== FUN_0033ecf8 @ 0033ecf8 ====

undefined4 FUN_0033ecf8(undefined1 (*param_1) [16],undefined4 *param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_90 [16];
  
  if (param_3 == 0) {
    auStack_90 = param_1[3];
  }
  else {
    pauVar1 = (undefined1 (*) [16])param_3;
    auVar4 = _lqc2(*pauVar1);
    auVar5 = _lqc2(pauVar1[1]);
    auVar3 = _lqc2(pauVar1[2]);
    auVar6 = _lqc2(*param_1);
    auVar8 = _lqc2(param_1[1]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar7 = _vmaddbc(auVar3,auVar6);
    auVar6 = _lqc2(param_1[2]);
    _vmulabc(auVar4,auVar8);
    _vmaddabc(auVar5,auVar8);
    auVar9 = _vmaddbc(auVar3,auVar8);
    auVar10 = _lqc2(pauVar1[3]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar8 = _vmaddbc(auVar3,auVar6);
    auVar6 = _lqc2(param_1[3]);
    _vmulabc(auVar4,auVar6);
    _vmaddabc(auVar5,auVar6);
    _vmaddabc(auVar3,auVar6);
    auVar3 = _vmaddbc(auVar10,in_vf0);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    auStack_90 = _sqc2(auVar3);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar3);
    _sqc2(auVar7);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar3);
  }
  *param_2 = auStack_90._0_4_;
  param_2[1] = auStack_90._4_4_;
  param_2[2] = auStack_90._8_4_;
  param_2[3] = auStack_90._12_4_;
  uVar2 = *(undefined4 *)(param_1[4] + 0xc);
  param_2[0x27] = &LAB_0033f228;
  param_2[0x24] = &LAB_0033f230;
  param_2[0x1f] = uVar2;
  param_2[0x25] = &LAB_0033f248;
  param_2[0x26] = &LAB_0033f278;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = param_1;
  return 1;
}


// ==== FUN_0033ee08 @ 0033ee08 ====

/* WARNING: Removing unreachable block (ram,0x0033ef30) */

undefined8
FUN_0033ee08(float param_1,float *param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
            undefined1 (*param_5) [16])

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar7 = _lqc2(*param_3);
  auVar6 = _lqc2(*param_5);
  auVar11 = _vsub(auVar6,auVar7);
  auVar9 = _vmove(auVar11);
  auVar7 = _vmul(auVar9,auVar9);
  auVar6 = _vaddbc(auVar7,auVar7);
  auVar6 = _vaddbc(auVar6,auVar7);
  auVar6 = _qmfc2(auVar6._0_4_);
  uVar3 = 1;
  if (auVar6._0_4_ < param_1 * param_1) {
    *param_2 = 0.0;
    param_2[1] = 1.0;
  }
  else {
    auVar8 = _lqc2(*param_4);
    auVar7 = _vmul(auVar9,auVar8);
    auVar6 = _vaddbc(auVar7,auVar7);
    auVar6 = _vaddbc(auVar6,auVar7);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar1 = auVar6._0_4_;
    uVar3 = 0xffffffffffffffff;
    if (0.0 < fVar1) {
      auVar10 = _vmul(auVar8,auVar8);
      _vopmula(auVar11,auVar8);
      auVar6 = _vopmsub(auVar8,auVar11);
      auVar9 = _vaddbc(auVar10,auVar10);
      auVar7 = _vmul(auVar6,auVar6);
      auVar6 = _vaddbc(auVar9,auVar10);
      auVar9 = _vaddbc(auVar7,auVar7);
      auVar6 = _qmfc2(auVar6._0_4_);
      auVar7 = _vaddbc(auVar9,auVar7);
      fVar2 = auVar6._0_4_;
      auVar6 = _qmfc2(auVar7._0_4_);
      fVar5 = -auVar6._0_4_ + fVar2 * param_1 * param_1;
      if (0.0 <= fVar5) {
        fVar4 = fVar1 - fVar2;
        if ((fVar4 <= 0.0) || (uVar3 = 0, fVar4 * fVar4 <= fVar5)) {
          param_2[1] = fVar2;
          uVar3 = 1;
          *param_2 = fVar1 - SQRT(fVar5);
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


// ==== FUN_0033ef60 @ 0033ef60 ====

undefined8
FUN_0033ef60(int param_1,undefined8 param_2,undefined1 (*param_3) [16],long param_4,int *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if (param_4 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 0x30);
  }
  else {
    pauVar3 = (undefined1 (*) [16])param_4;
    auVar9 = _lqc2(pauVar3[3]);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
    auVar8 = _lqc2(*pauVar3);
    auVar7 = _lqc2(pauVar3[1]);
    auVar5 = _lqc2(pauVar3[2]);
    _vmulabc(auVar8,auVar6);
    _vmaddabc(auVar7,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar5 = _vmaddbc(auVar9,in_vf0);
    auStack_50 = _sqc2(auVar5);
  }
  *param_5 = param_1;
  auVar5 = _lqc2(*param_3);
  fVar4 = *(float *)(param_1 + 0x4c);
  auVar6 = _lqc2(*(undefined1 (*) [16])param_2);
  auVar5 = _vsub(auVar5,auVar6);
  auStack_60 = _sqc2(auVar5);
  lVar1 = FUN_0033ee08(fVar4,&fStack_70,param_2,auStack_60,auStack_50);
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    auVar6 = _lqc2(auStack_60);
    auVar5 = _lqc2(*(undefined1 (*) [16])param_2);
    auVar8 = _lqc2(auStack_50);
    auVar7 = _qmtc2(fStack_70 / fStack_6c);
    param_5[0x10] = (int)(fStack_70 / fStack_6c);
    auVar6 = _vmulbc(auVar6,auVar7);
    auVar5 = _vadd(auVar5,auVar6);
    auVar7 = _vsub(auVar5,auVar8);
    auVar5 = _sqc2(auVar5);
    *(undefined1 (*) [16])(param_5 + 4) = auVar5;
    auVar6 = _vmove(auVar7);
    auVar5 = _sqc2(auVar6);
    *(undefined1 (*) [16])(param_5 + 8) = auVar5;
    if (0.0 < fStack_70) {
      auVar5 = _qmtc2(1.0 / fVar4);
      auVar5 = _vmulbc(auVar6,auVar5);
      auVar5 = _sqc2(auVar5);
      *(undefined1 (*) [16])(param_5 + 8) = auVar5;
    }
    else {
      auVar6 = _vmul(auVar7,auVar7);
      auVar5 = _vaddbc(auVar6,auVar6);
      auVar5 = _vaddbc(auVar5,auVar6);
      _vsqrt(auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar10 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar10);
      auVar5 = _qmfc2(auVar5._0_4_);
      if (auVar5._0_4_ <= 1.1754944e-38) {
        return 1;
      }
      auVar6 = _vmul(auVar7,auVar7);
      auVar5 = _vaddbc(auVar6,auVar6);
      auVar5 = _vaddbc(auVar5,auVar6);
      _vrsqrt(in_vf0,auVar5);
      uVar10 = _vwaitq();
      auVar5 = _vmulq(auVar7,uVar10);
      auVar5 = _sqc2(auVar5);
      *(undefined1 (*) [16])(param_5 + 8) = auVar5;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_0033f0e0 @ 0033f0e0 ====

void FUN_0033f0e0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9190,2);
      FUN_00100230(&gp0xffff9188,2);
    }
    else {
      FUN_00100228(&gp0xffff9188);
      FUN_00100258(&gp0xffff9190);
      DAT_0045e960 = 0x3fc90fdb;
      DAT_0045e964 = 0xbe22f983;
      DAT_0045e968 = 0x4b400000;
      DAT_0045e96c = uStack_44;
      DAT_0045e970 = 0xbe22f983;
      DAT_0045e974 = 0x3f000000;
      DAT_0045e978 = 0x3e800000;
      DAT_0045e97c = uStack_34;
      DAT_0045e980 = 0xc2992661;
      DAT_0045e984 = 0xc2255de0;
      DAT_0045e988 = 0x42a33457;
      DAT_0045e98c = uStack_24;
      DAT_0045e990 = 0x421ed7b7;
      DAT_0045e994 = 0x40c90fda;
      DAT_0045e998 = 0;
      DAT_0045e99c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0033f2e8 @ 0033f2e8 ====

void FUN_0033f2e8(void)

{
  FUN_0033f0e0(1,0xffff);
  return;
}


// ==== FUN_0033f308 @ 0033f308 ====

void FUN_0033f308(void)

{
  FUN_0033f0e0(0,0xffff);
  return;
}


// ==== FUN_0033f328 @ 0033f328 ====

undefined4
FUN_0033f328(undefined1 (*param_1) [16],long param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  pauVar1 = (undefined1 (*) [16])param_2;
  if (param_2 == 0) {
    auStack_40 = *param_1;
    auStack_30 = param_1[1];
    auStack_20 = param_1[2];
  }
  else {
    auVar8 = _lqc2(pauVar1[3]);
    auVar7 = _lqc2(*pauVar1);
    auVar6 = _lqc2(pauVar1[1]);
    auVar2 = _lqc2(pauVar1[2]);
    auVar3 = _lqc2(*param_1);
    auVar5 = _lqc2(param_1[1]);
    _vmulabc(auVar7,auVar3);
    _vmaddabc(auVar6,auVar3);
    _vmaddabc(auVar2,auVar3);
    auVar4 = _vmaddbc(auVar8,in_vf0);
    auVar3 = _lqc2(param_1[2]);
    _vmulabc(auVar7,auVar5);
    _vmaddabc(auVar6,auVar5);
    _vmaddabc(auVar2,auVar5);
    auVar5 = _vmaddbc(auVar8,in_vf0);
    _vmulabc(auVar7,auVar3);
    _vmaddabc(auVar6,auVar3);
    _vmaddabc(auVar2,auVar3);
    auVar3 = _vmaddbc(auVar8,in_vf0);
    auStack_40 = _sqc2(auVar4);
    auStack_30 = _sqc2(auVar5);
    auStack_20 = _sqc2(auVar3);
  }
  auVar5 = _lqc2(auStack_20);
  auVar2 = _lqc2(auStack_30);
  auVar3 = _lqc2(auStack_40);
  auVar4 = _vmax(auVar2,auVar5);
  auVar2 = _vmini(auVar2,auVar5);
  auVar4 = _vmax(auVar3,auVar4);
  auVar2 = _vmini(auVar3,auVar2);
  auVar3 = _sqc2(auVar4);
  param_4[1] = auVar3;
  auVar3 = _sqc2(auVar2);
  *param_4 = auVar3;
  auVar5 = _qmtc2(*(undefined4 *)(param_1[4] + 0xc));
  auVar3 = _qmtc2(*(undefined4 *)(param_1[4] + 0xc));
  auVar2 = _vsubbc(auVar2,auVar3);
  auVar3 = _vaddbc(auVar4,auVar5);
  auVar3 = _sqc2(auVar3);
  param_4[1] = auVar3;
  auVar3 = _sqc2(auVar2);
  *param_4 = auVar3;
  return 1;
}


// ==== FUN_0033f400 @ 0033f400 ====

/* WARNING: Removing unreachable block (ram,0x0033f988) */
/* WARNING: Removing unreachable block (ram,0x0033fa44) */

void FUN_0033f400(undefined1 (*param_1) [16],ulong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined4 uVar11;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 in_vf0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_20c [12];
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_14c [12];
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  auVar23 = _qmtc2((int)param_3);
  auVar21 = _lqc2(param_1[1]);
  auVar22 = _vmul(auVar23,auVar21);
  auVar21 = _vaddbc(auVar22,auVar22);
  auVar21 = _vaddbc(auVar21,auVar22);
  auVar21 = _qmfc2(auVar21._0_4_);
  if (0.95 < ABS(auVar21._0_4_)) {
    if (auVar21._0_4_ < 0.0 == param_2) {
      uVar16 = *(undefined4 *)param_1[7];
      uVar20 = *(undefined4 *)(*param_1 + 4);
      uVar11 = *(undefined4 *)(*param_1 + 8);
      uVar15 = *(undefined4 *)(*param_1 + 0xc);
      uVar1 = *(undefined8 *)param_1[4];
      uVar19 = *(undefined4 *)(param_1[4] + 8);
      uVar18 = *(undefined4 *)(param_1[4] + 0xc);
      param_4[4] = *(undefined4 *)*param_1;
      param_4[5] = uVar20;
      param_4[6] = uVar11;
      param_4[7] = uVar15;
      param_4[8] = (int)uVar1;
      param_4[9] = (int)((ulong)uVar1 >> 0x20);
      param_4[10] = uVar19;
      param_4[0xb] = uVar18;
      param_4[0xc] = (int)uStack_2a0;
      param_4[0xd] = (int)((ulong)uStack_2a0 >> 0x20);
      param_4[0xe] = uStack_298;
      param_4[0xf] = uStack_294;
      param_4[0x10] = uVar16;
      param_4[0x11] = uStack_28c;
      param_4[0x12] = uStack_288;
      param_4[0x13] = uStack_284;
      uVar18 = *(undefined4 *)(param_1[7] + 4);
      uVar1 = *(undefined8 *)param_1[2];
      uVar15 = *(undefined4 *)(param_1[2] + 8);
      uVar19 = *(undefined4 *)(param_1[2] + 0xc);
      uVar2 = *(undefined8 *)param_1[5];
      uVar20 = *(undefined4 *)(param_1[5] + 8);
      uVar11 = *(undefined4 *)(param_1[5] + 0xc);
      param_4[0x14] = (int)uVar1;
      param_4[0x15] = (int)((ulong)uVar1 >> 0x20);
      param_4[0x16] = uVar15;
      param_4[0x17] = uVar19;
      param_4[0x18] = (int)uVar2;
      param_4[0x19] = (int)((ulong)uVar2 >> 0x20);
      param_4[0x1a] = uVar20;
      param_4[0x1b] = uVar11;
      param_4[0x1c] = (int)uStack_260;
      param_4[0x1d] = (int)((ulong)uStack_260 >> 0x20);
      param_4[0x1e] = uStack_258;
      param_4[0x1f] = uStack_254;
      param_4[0x20] = uVar18;
      param_4[0x21] = uStack_24c;
      param_4[0x22] = uStack_248;
      param_4[0x23] = uStack_244;
      uVar17 = *(undefined4 *)(param_1[7] + 8);
      uVar20 = *(undefined4 *)(param_1[3] + 4);
      uVar11 = *(undefined4 *)(param_1[3] + 8);
      uVar15 = *(undefined4 *)(param_1[3] + 0xc);
      uVar19 = *(undefined4 *)param_1[6];
      uVar18 = *(undefined4 *)(param_1[6] + 4);
      uVar16 = *(undefined4 *)(param_1[6] + 8);
      uVar4 = *(undefined4 *)(param_1[6] + 0xc);
      param_4[0x24] = *(undefined4 *)param_1[3];
      param_4[0x25] = uVar20;
      param_4[0x26] = uVar11;
      param_4[0x27] = uVar15;
      param_4[0x28] = uVar19;
      param_4[0x29] = uVar18;
      param_4[0x2a] = uVar16;
      param_4[0x2b] = uVar4;
      param_4[0x2c] = (int)uStack_220;
      param_4[0x2d] = (int)((ulong)uStack_220 >> 0x20);
      param_4[0x2e] = uStack_218;
      param_4[0x2f] = uStack_214;
      auVar21._4_12_ = auStack_20c;
      auVar21._0_4_ = uVar17;
      *param_4 = 8;
    }
    else {
      uVar15 = *(undefined4 *)(param_1[7] + 8);
      auVar21 = _lqc2(param_1[6]);
      auVar24 = _vsub(in_vf0,auVar21);
      uVar1 = *(undefined8 *)*param_1;
      uVar20 = *(undefined4 *)(*param_1 + 8);
      uVar11 = *(undefined4 *)(*param_1 + 0xc);
      auVar21 = _sqc2(auVar24);
      *(undefined1 (*) [16])(param_4 + 8) = auVar21;
      param_4[4] = (int)uVar1;
      param_4[5] = (int)((ulong)uVar1 >> 0x20);
      param_4[6] = uVar20;
      param_4[7] = uVar11;
      param_4[0xc] = (int)uStack_1e0;
      param_4[0xd] = (int)((ulong)uStack_1e0 >> 0x20);
      param_4[0xe] = uStack_1d8;
      param_4[0xf] = uStack_1d4;
      param_4[0x10] = uVar15;
      param_4[0x11] = uStack_1cc;
      param_4[0x12] = uStack_1c8;
      param_4[0x13] = uStack_1c4;
      uVar18 = *(undefined4 *)(param_1[7] + 4);
      auVar21 = _lqc2(param_1[5]);
      auVar23 = _vsub(in_vf0,auVar21);
      uVar20 = *(undefined4 *)param_1[3];
      uVar11 = *(undefined4 *)(param_1[3] + 4);
      uVar15 = *(undefined4 *)(param_1[3] + 8);
      uVar19 = *(undefined4 *)(param_1[3] + 0xc);
      auVar21 = _sqc2(auVar23);
      *(undefined1 (*) [16])(param_4 + 0x18) = auVar21;
      param_4[0x14] = uVar20;
      param_4[0x15] = uVar11;
      param_4[0x16] = uVar15;
      param_4[0x17] = uVar19;
      param_4[0x1c] = (int)uStack_1a0;
      param_4[0x1d] = (int)((ulong)uStack_1a0 >> 0x20);
      param_4[0x1e] = uStack_198;
      param_4[0x1f] = uStack_194;
      param_4[0x20] = uVar18;
      param_4[0x21] = uStack_18c;
      param_4[0x22] = uStack_188;
      param_4[0x23] = uStack_184;
      uVar19 = *(undefined4 *)param_1[7];
      auVar21 = _lqc2(param_1[4]);
      uVar20 = *(undefined4 *)(param_1[2] + 4);
      uVar11 = *(undefined4 *)(param_1[2] + 8);
      uVar15 = *(undefined4 *)(param_1[2] + 0xc);
      auVar22 = _vsub(in_vf0,auVar21);
      param_4[0x24] = *(undefined4 *)param_1[2];
      param_4[0x25] = uVar20;
      param_4[0x26] = uVar11;
      param_4[0x27] = uVar15;
      auVar21 = _sqc2(auVar22);
      *(undefined1 (*) [16])(param_4 + 0x28) = auVar21;
      _sqc2(auVar24);
      _sqc2(auVar23);
      _sqc2(auVar22);
      param_4[0x2c] = (int)uStack_160;
      param_4[0x2d] = (int)((ulong)uStack_160 >> 0x20);
      param_4[0x2e] = uStack_158;
      param_4[0x2f] = uStack_154;
      auVar21._4_12_ = auStack_14c;
      auVar21._0_4_ = uVar19;
      *param_4 = 0;
    }
    param_4[0x30] = auVar21._0_4_;
    param_4[0x31] = auVar21._4_4_;
    param_4[0x32] = auVar21._8_4_;
    param_4[0x33] = auVar21._12_4_;
    auVar21 = param_1[1];
    param_4[0x4c] = 3;
    param_4[0x44] = auVar21._0_4_;
    param_4[0x45] = auVar21._4_4_;
    param_4[0x46] = auVar21._8_4_;
    param_4[0x47] = auVar21._12_4_;
  }
  else {
    bVar3 = false;
    uVar12 = 0;
    uVar10 = 0;
    pauVar9 = param_1 + 4;
    do {
      auVar21 = _lqc2(*pauVar9);
      auVar22 = _vmul(auVar23,auVar21);
      auVar21 = _vaddbc(auVar22,auVar22);
      auVar21 = _vaddbc(auVar21,auVar22);
      auVar21 = _qmfc2(auVar21._0_4_);
      if (ABS(auVar21._0_4_) < 0.05) {
        bVar3 = true;
        uVar12 = uVar10;
      }
      uVar10 = uVar10 + 1;
      pauVar9 = pauVar9 + 1;
    } while (uVar10 < 3);
    uVar20 = 3;
    if (bVar3) {
      if (uVar12 == 0) {
        auVar24._8_4_ = in_a2_udw;
        auVar24._0_8_ = param_3;
        auVar24._12_4_ = in_register_0000006c;
        auVar22 = _lqc2(auVar24);
        auVar25 = _lqc2(*param_1);
        auVar24 = _vmul(auVar25,auVar22);
        auVar23 = _lqc2(param_1[3]);
        auVar21 = _vaddbc(auVar24,auVar24);
        auVar23 = _vmul(auVar23,auVar22);
        auVar21 = _vaddbc(auVar21,auVar24);
        auVar22 = _vaddbc(auVar23,auVar23);
        auVar21 = _qmfc2(auVar21._0_4_);
        auVar22 = _vaddbc(auVar22,auVar23);
        auVar22 = _qmfc2(auVar22._0_4_);
        if (auVar22._0_4_ < auVar21._0_4_) {
          uVar20 = *(undefined4 *)param_1[7];
          auVar22 = param_1[4];
          auVar21 = _sqc2(auVar25);
          *(undefined1 (*) [16])(param_4 + 4) = auVar21;
          param_4[8] = auVar22._0_4_;
          param_4[9] = auVar22._4_4_;
          param_4[10] = auVar22._8_4_;
          param_4[0xb] = auVar22._12_4_;
          param_4[0xc] = (int)uStack_120;
          param_4[0xd] = (int)((ulong)uStack_120 >> 0x20);
          param_4[0xe] = uStack_118;
          param_4[0xf] = uStack_114;
          param_4[0x10] = uVar20;
          param_4[0x11] = uStack_10c;
          param_4[0x12] = uStack_108;
          param_4[0x13] = uStack_104;
          param_4[0x4c] = 1;
          *param_4 = 6;
          _sqc2(auVar25);
          goto LAB_0033f908;
        }
        param_4[0x4c] = 0;
        auVar21 = param_1[3];
      }
      else {
        auVar25._8_4_ = in_a2_udw;
        auVar25._0_8_ = param_3;
        auVar25._12_4_ = in_register_0000006c;
        auVar21 = _lqc2(auVar25);
        if (uVar12 == 1) {
          auVar25 = _lqc2(param_1[2]);
          auVar22 = _lqc2(*param_1);
          auVar24 = _vmul(auVar25,auVar21);
          auVar23 = _vmul(auVar22,auVar21);
          auVar21 = _vaddbc(auVar24,auVar24);
          auVar22 = _vaddbc(auVar23,auVar23);
          auVar21 = _vaddbc(auVar21,auVar24);
          auVar22 = _vaddbc(auVar22,auVar23);
          auVar21 = _qmfc2(auVar21._0_4_);
          auVar22 = _qmfc2(auVar22._0_4_);
          if (auVar21._0_4_ <= auVar22._0_4_) {
            param_4[0x4c] = 0;
            auVar21 = *param_1;
            *param_4 = 1;
            param_4[0x48] = auVar21._0_4_;
            param_4[0x49] = auVar21._4_4_;
            param_4[0x4a] = auVar21._8_4_;
            param_4[0x4b] = auVar21._12_4_;
          }
          else {
            uVar20 = *(undefined4 *)(param_1[7] + 4);
            auVar22 = param_1[5];
            auVar21 = _sqc2(auVar25);
            *(undefined1 (*) [16])(param_4 + 4) = auVar21;
            param_4[8] = auVar22._0_4_;
            param_4[9] = auVar22._4_4_;
            param_4[10] = auVar22._8_4_;
            param_4[0xb] = auVar22._12_4_;
            param_4[0xc] = (int)uStack_e0;
            param_4[0xd] = (int)((ulong)uStack_e0 >> 0x20);
            param_4[0xe] = uStack_d8;
            param_4[0xf] = uStack_d4;
            param_4[0x10] = uVar20;
            param_4[0x11] = uStack_cc;
            param_4[0x12] = uStack_c8;
            param_4[0x13] = uStack_c4;
            param_4[0x4c] = 1;
            *param_4 = 4;
            _sqc2(auVar25);
          }
          goto LAB_0033f908;
        }
        auVar25 = _lqc2(param_1[3]);
        auVar22 = _lqc2(param_1[2]);
        auVar24 = _vmul(auVar25,auVar21);
        auVar23 = _vmul(auVar22,auVar21);
        auVar21 = _vaddbc(auVar24,auVar24);
        auVar22 = _vaddbc(auVar23,auVar23);
        auVar21 = _vaddbc(auVar21,auVar24);
        auVar22 = _vaddbc(auVar22,auVar23);
        auVar21 = _qmfc2(auVar21._0_4_);
        auVar22 = _qmfc2(auVar22._0_4_);
        auVar23 = _qmfc2(auVar25._0_4_);
        if (auVar22._0_4_ < auVar21._0_4_) {
          uVar20 = *(undefined4 *)(param_1[7] + 8);
          auVar21 = param_1[6];
          param_4[4] = auVar23._0_4_;
          param_4[5] = auVar23._4_4_;
          param_4[6] = auVar23._8_4_;
          param_4[7] = auVar23._12_4_;
          param_4[8] = auVar21._0_4_;
          param_4[9] = auVar21._4_4_;
          param_4[10] = auVar21._8_4_;
          param_4[0xb] = auVar21._12_4_;
          param_4[0xc] = (int)uStack_a0;
          param_4[0xd] = (int)((ulong)uStack_a0 >> 0x20);
          param_4[0xe] = uStack_98;
          param_4[0xf] = uStack_94;
          param_4[0x10] = uVar20;
          param_4[0x11] = uStack_8c;
          param_4[0x12] = uStack_88;
          param_4[0x13] = uStack_84;
          param_4[0x4c] = 1;
          *param_4 = 2;
          goto LAB_0033f908;
        }
        param_4[0x4c] = 0;
        uVar20 = 5;
        auVar21 = param_1[2];
      }
      *param_4 = uVar20;
      param_4[0x48] = auVar21._0_4_;
      param_4[0x49] = auVar21._4_4_;
      param_4[0x4a] = auVar21._8_4_;
      param_4[0x4b] = auVar21._12_4_;
    }
    else {
      param_4[0x4c] = 0;
      auVar21 = _lqc2(*param_1);
      auVar22._8_4_ = in_a2_udw;
      auVar22._0_8_ = param_3;
      auVar22._12_4_ = in_register_0000006c;
      auVar22 = _lqc2(auVar22);
      auVar23 = _vmul(auVar21,auVar22);
      *param_4 = 1;
      auVar21 = _sqc2(auVar21);
      *(undefined1 (*) [16])(param_4 + 0x48) = auVar21;
      auVar21 = _vaddbc(auVar23,auVar23);
      auVar21 = _vaddbc(auVar21,auVar23);
      auVar21 = _qmfc2(auVar21._0_4_);
      auVar23 = _lqc2(param_1[2]);
      auVar22 = _vmul(auVar23,auVar22);
      fVar7 = auVar21._0_4_;
      auVar21 = _vaddbc(auVar22,auVar22);
      auVar21 = _vaddbc(auVar21,auVar22);
      auVar21 = _qmfc2(auVar21._0_4_);
      if (fVar7 < auVar21._0_4_) {
        auVar22 = _sqc2(auVar23);
        *(undefined1 (*) [16])(param_4 + 0x48) = auVar22;
        *param_4 = 5;
        fVar7 = auVar21._0_4_;
      }
      auVar22 = _lqc2(param_1[3]);
      auVar23._8_4_ = in_a2_udw;
      auVar23._0_8_ = param_3;
      auVar23._12_4_ = in_register_0000006c;
      auVar21 = _lqc2(auVar23);
      auVar23 = _vmul(auVar22,auVar21);
      auVar21 = _vaddbc(auVar23,auVar23);
      auVar22 = _qmfc2(auVar22._0_4_);
      auVar21 = _vaddbc(auVar21,auVar23);
      auVar21 = _qmfc2(auVar21._0_4_);
      if (fVar7 < auVar21._0_4_) {
        param_4[0x48] = auVar22._0_4_;
        param_4[0x49] = auVar22._4_4_;
        param_4[0x4a] = auVar22._8_4_;
        param_4[0x4b] = auVar22._12_4_;
        *param_4 = 3;
      }
    }
  }
LAB_0033f908:
  if (param_2 == 0) {
    iVar14 = 0;
    if (0 < (int)param_4[0x4c]) {
      puVar13 = param_4 + 4;
      do {
        auVar6._8_4_ = in_a2_udw;
        auVar6._0_8_ = param_3;
        auVar6._12_4_ = in_register_0000006c;
        auVar21 = _lqc2(auVar6);
        auVar21 = _vsub(in_vf0,auVar21);
        auVar22 = _lqc2(*(undefined1 (*) [16])(puVar13 + 4));
        _vopmula(auVar22,auVar21);
        auVar21 = _vopmsub(auVar21,auVar22);
        auVar22 = _vmul(auVar21,auVar21);
        auVar21 = _sqc2(auVar21);
        *(undefined1 (*) [16])(puVar13 + 8) = auVar21;
        auVar21 = _vaddbc(auVar22,auVar22);
        auVar21 = _vaddbc(auVar21,auVar22);
        auVar21 = _qmfc2(auVar21._0_4_);
        if (1.1920929e-07 < auVar21._0_4_) {
          auVar22 = _lqc2(*(undefined1 (*) [16])(puVar13 + 8));
          auVar21 = _qmtc2(1.0 / SQRT(auVar21._0_4_));
          auVar21 = _vmulbc(auVar22,auVar21);
          auVar21 = _sqc2(auVar21);
          *(undefined1 (*) [16])(puVar13 + 8) = auVar21;
          iVar8 = param_4[0x4c];
        }
        else {
          iVar8 = param_4[0x4c];
        }
        iVar14 = iVar14 + 1;
        puVar13 = puVar13 + 0x10;
      } while (iVar14 < iVar8);
    }
  }
  else {
    iVar14 = 0;
    if (0 < (int)param_4[0x4c]) {
      puVar13 = param_4 + 4;
      do {
        auVar5._8_4_ = in_a2_udw;
        auVar5._0_8_ = param_3;
        auVar5._12_4_ = in_register_0000006c;
        auVar21 = _lqc2(auVar5);
        auVar22 = _lqc2(*(undefined1 (*) [16])(puVar13 + 4));
        _vopmula(auVar22,auVar21);
        auVar21 = _vopmsub(auVar21,auVar22);
        auVar22 = _vmul(auVar21,auVar21);
        auVar21 = _sqc2(auVar21);
        *(undefined1 (*) [16])(puVar13 + 8) = auVar21;
        auVar21 = _vaddbc(auVar22,auVar22);
        auVar21 = _vaddbc(auVar21,auVar22);
        auVar21 = _qmfc2(auVar21._0_4_);
        if (1.1920929e-07 < auVar21._0_4_) {
          auVar22 = _lqc2(*(undefined1 (*) [16])(puVar13 + 8));
          auVar21 = _qmtc2(1.0 / SQRT(auVar21._0_4_));
          auVar21 = _vmulbc(auVar22,auVar21);
          auVar21 = _sqc2(auVar21);
          *(undefined1 (*) [16])(puVar13 + 8) = auVar21;
          iVar8 = param_4[0x4c];
        }
        else {
          iVar8 = param_4[0x4c];
        }
        iVar14 = iVar14 + 1;
        puVar13 = puVar13 + 0x10;
      } while (iVar14 < iVar8);
    }
  }
  return;
}


// ==== FUN_0033fb60 @ 0033fb60 ====

void FUN_0033fb60(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      auVar9 = _lqc2(*param_2);
      auVar6 = _lqc2(*param_1);
      auVar7 = _vmul(auVar9,auVar6);
      auVar8 = _lqc2(param_1[2]);
      auVar6 = _vaddbc(auVar7,auVar7);
      auVar8 = _vmul(auVar9,auVar8);
      auVar6 = _vaddbc(auVar6,auVar7);
      auVar7 = _vaddbc(auVar8,auVar8);
      auVar6 = _qmfc2(auVar6._0_4_);
      auVar7 = _vaddbc(auVar7,auVar8);
      fVar1 = auVar6._0_4_;
      auVar6 = _qmfc2(auVar7._0_4_);
      auVar7 = _lqc2(param_1[3]);
      fVar2 = auVar6._0_4_;
      auVar7 = _vmul(auVar9,auVar7);
      auVar6 = _vaddbc(auVar7,auVar7);
      auVar6 = _vaddbc(auVar6,auVar7);
      auVar6 = _qmfc2(auVar6._0_4_);
      fVar3 = auVar6._0_4_;
      fVar5 = fVar1;
      if (fVar2 <= fVar1) {
        fVar5 = fVar2;
      }
      if (fVar3 <= fVar5) {
        fVar5 = fVar3;
      }
      *param_4 = fVar5;
      if (fVar1 <= fVar2) {
        fVar1 = fVar2;
      }
      if (fVar1 <= fVar3) {
        fVar1 = fVar3;
      }
      param_4[1] = fVar1;
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 2;
      param_2 = param_2 + 1;
    } while (uVar4 < param_3);
  }
  return;
}


// ==== FUN_0033fc38 @ 0033fc38 ====

/* WARNING: Removing unreachable block (ram,0x0033fe38) */
/* WARNING: Removing unreachable block (ram,0x0033fdac) */
/* WARNING: Removing unreachable block (ram,0x0033fec4) */

undefined8 FUN_0033fc38(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  float fVar1;
  undefined1 (*pauVar2) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  fVar1 = DAT_0040e3d8;
  pauVar2 = (undefined1 (*) [16])param_3;
  if (param_3 == 0) {
    auStack_70 = *param_1;
    auStack_60 = param_1[1];
    auStack_50 = param_1[2];
  }
  else {
    auVar9 = _lqc2(pauVar2[3]);
    auVar7 = _lqc2(pauVar2[1]);
    auVar4 = _lqc2(pauVar2[2]);
    auVar5 = _lqc2(*param_1);
    auVar6 = _lqc2(param_1[1]);
    auVar3 = _lqc2(param_1[2]);
    auVar8 = _lqc2(*pauVar2);
    _vmulabc(auVar8,auVar5);
    _vmaddabc(auVar7,auVar5);
    _vmaddabc(auVar4,auVar5);
    auVar5 = _vmaddbc(auVar9,in_vf0);
    _vmulabc(auVar8,auVar6);
    _vmaddabc(auVar7,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar6 = _vmaddbc(auVar9,in_vf0);
    _vmulabc(auVar8,auVar3);
    _vmaddabc(auVar7,auVar3);
    _vmaddabc(auVar4,auVar3);
    auVar3 = _vmaddbc(auVar9,in_vf0);
    auStack_70 = _sqc2(auVar5);
    auStack_60 = _sqc2(auVar6);
    auStack_50 = _sqc2(auVar3);
  }
  auVar5 = _lqc2(auStack_70);
  auVar6 = _lqc2(auStack_60);
  auVar7 = _lqc2(auStack_50);
  auVar4 = _vsub(auVar6,auVar5);
  auVar3 = _vsub(auVar7,auVar5);
  _vopmula(auVar4,auVar3);
  auVar8 = _vopmsub(auVar3,auVar4);
  auVar4 = _vmul(auVar8,auVar8);
  *(undefined4 *)(param_2[8] + 0xc) = 3;
  auVar3 = _vaddbc(auVar4,auVar4);
  *(undefined4 *)(param_2[8] + 8) = 1;
  auVar4 = _vaddbc(auVar3,auVar4);
  auVar3 = _sqc2(auVar5);
  *param_2 = auVar3;
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar3 = _sqc2(auVar6);
  param_2[3] = auVar3;
  auVar3 = _sqc2(auVar7);
  param_2[2] = auVar3;
  *(undefined1 (**) [16])param_2[8] = param_1;
  auVar3 = _sqc2(auVar8);
  param_2[1] = auVar3;
  if (fVar1 < auVar4._0_4_) {
    auVar4 = _vmul(auVar8,auVar8);
    auVar3 = _vaddbc(auVar4,auVar4);
    auVar3 = _vaddbc(auVar3,auVar4);
    _vrsqrt(in_vf0,auVar3);
    uVar10 = _vwaitq();
    auVar3 = _vmulq(auVar8,uVar10);
    auVar3 = _sqc2(auVar3);
    param_2[1] = auVar3;
  }
  auVar3 = _lqc2(*param_2);
  auVar4 = _lqc2(param_2[2]);
  auVar3 = _vsub(auVar4,auVar3);
  auVar4 = _vmul(auVar3,auVar3);
  auVar3 = _sqc2(auVar3);
  param_2[4] = auVar3;
  auVar3 = _vaddbc(auVar4,auVar4);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar1 = auVar3._0_4_;
  *(float *)param_2[7] = fVar1;
  if (1.1920929e-07 < fVar1) {
    auVar4 = _lqc2(param_2[4]);
    *(float *)param_2[7] = SQRT(fVar1);
    auVar3 = _qmtc2(1.0 / SQRT(fVar1));
    auVar3 = _vmulbc(auVar4,auVar3);
    auVar3 = _sqc2(auVar3);
    param_2[4] = auVar3;
  }
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar3 = _vsub(auVar4,auVar3);
  auVar4 = _vmul(auVar3,auVar3);
  auVar3 = _sqc2(auVar3);
  param_2[5] = auVar3;
  auVar3 = _vaddbc(auVar4,auVar4);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar1 = auVar3._0_4_;
  *(float *)(param_2[7] + 4) = fVar1;
  if (1.1920929e-07 < fVar1) {
    auVar4 = _lqc2(param_2[5]);
    *(float *)(param_2[7] + 4) = SQRT(fVar1);
    auVar3 = _qmtc2(1.0 / SQRT(fVar1));
    auVar3 = _vmulbc(auVar4,auVar3);
    auVar3 = _sqc2(auVar3);
    param_2[5] = auVar3;
  }
  auVar3 = _lqc2(param_2[3]);
  auVar4 = _lqc2(*param_2);
  auVar3 = _vsub(auVar4,auVar3);
  auVar4 = _vmul(auVar3,auVar3);
  auVar3 = _sqc2(auVar3);
  param_2[6] = auVar3;
  auVar3 = _vaddbc(auVar4,auVar4);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar1 = auVar3._0_4_;
  *(float *)(param_2[7] + 8) = fVar1;
  if (1.1920929e-07 < fVar1) {
    auVar4 = _lqc2(param_2[6]);
    *(float *)(param_2[7] + 8) = SQRT(fVar1);
    auVar3 = _qmtc2(1.0 / SQRT(fVar1));
    auVar3 = _vmulbc(auVar4,auVar3);
    auVar3 = _sqc2(auVar3);
    param_2[6] = auVar3;
  }
  *(undefined4 *)(param_2[7] + 0xc) = *(undefined4 *)(param_1[4] + 0xc);
  *(undefined1 **)(param_2[9] + 0xc) = &LAB_00341668;
  *(code **)param_2[9] = FUN_0033f400;
  *(undefined1 **)(param_2[9] + 4) = &LAB_0033faa8;
  *(code **)(param_2[9] + 8) = FUN_0033fb60;
  return 1;
}


// ==== FUN_0033ff48 @ 0033ff48 ====

/* WARNING: Removing unreachable block (ram,0x00340090) */
/* WARNING: Removing unreachable block (ram,0x0033ffec) */
/* WARNING: Removing unreachable block (ram,0x00340134) */

undefined8
FUN_0033ff48(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar2 = 1;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  auVar7 = _lqc2(*param_1);
  auVar9 = _lqc2(param_1[1]);
  auVar4 = _vsub(auVar9,auVar7);
  auVar5 = _sqc2(auVar4);
  auVar6 = _vmul(auVar4,auVar4);
  auVar4 = _vaddbc(auVar6,auVar6);
  auVar8 = param_1[2];
  auVar6 = _vaddbc(auVar4,auVar6);
  auVar4 = _sqc2(auVar7);
  auVar3 = _qmfc2(auVar6._0_4_);
  auVar6 = _sqc2(auVar9);
  auVar7 = _sqc2(auVar7);
  if (1.1920929e-07 < auVar3._0_4_) {
    fStack_e0 = SQRT(auVar3._0_4_);
    auVar3 = _lqc2(auVar5);
    auVar5 = _qmtc2(1.0 / fStack_e0);
    auVar5 = _vmulbc(auVar3,auVar5);
    auStack_100 = _sqc2(auVar5);
  }
  auVar9 = _lqc2(auVar6);
  auVar5 = _lqc2(param_1[2]);
  auVar6 = _vsub(auVar5,auVar9);
  auVar5 = _sqc2(auVar6);
  auVar3 = _vmul(auVar6,auVar6);
  uStack_110 = auVar7._0_4_;
  uStack_10c = auVar7._4_4_;
  uStack_108 = auVar7._8_4_;
  uStack_104 = auVar7._12_4_;
  auVar6 = _vaddbc(auVar3,auVar3);
  auVar6 = _vaddbc(auVar6,auVar3);
  auVar7 = _qmfc2(auVar6._0_4_);
  *(undefined4 *)(param_4 + 0x10) = uStack_110;
  *(undefined4 *)(param_4 + 0x14) = uStack_10c;
  *(undefined4 *)(param_4 + 0x18) = uStack_108;
  *(undefined4 *)(param_4 + 0x1c) = uStack_104;
  *(undefined4 *)(param_4 + 0x20) = auStack_100._0_4_;
  *(undefined4 *)(param_4 + 0x24) = auStack_100._4_4_;
  *(undefined4 *)(param_4 + 0x28) = auStack_100._8_4_;
  *(undefined4 *)(param_4 + 0x2c) = auStack_100._12_4_;
  *(undefined4 *)(param_4 + 0x30) = uStack_f0;
  *(undefined4 *)(param_4 + 0x34) = uStack_ec;
  *(undefined4 *)(param_4 + 0x38) = uStack_e8;
  *(undefined4 *)(param_4 + 0x3c) = uStack_e4;
  *(float *)(param_4 + 0x40) = fStack_e0;
  *(undefined4 *)(param_4 + 0x44) = uStack_dc;
  *(undefined4 *)(param_4 + 0x48) = uStack_d8;
  *(undefined4 *)(param_4 + 0x4c) = uStack_d4;
  auVar6 = _sqc2(auVar9);
  if (1.1920929e-07 < auVar7._0_4_) {
    fStack_a0 = SQRT(auVar7._0_4_);
    auVar7 = _lqc2(auVar5);
    auVar5 = _qmtc2(1.0 / fStack_a0);
    auVar5 = _vmulbc(auVar7,auVar5);
    auStack_c0 = _sqc2(auVar5);
  }
  auVar8 = _lqc2(auVar8);
  auVar5 = _lqc2(auVar4);
  auVar4 = _vsub(auVar5,auVar8);
  auVar5 = _sqc2(auVar4);
  auVar7 = _vmul(auVar4,auVar4);
  uStack_d0 = auVar6._0_4_;
  uStack_cc = auVar6._4_4_;
  uStack_c8 = auVar6._8_4_;
  uStack_c4 = auVar6._12_4_;
  auVar4 = _vaddbc(auVar7,auVar7);
  auVar4 = _vaddbc(auVar4,auVar7);
  auVar6 = _qmfc2(auVar4._0_4_);
  *(undefined4 *)(param_4 + 0x50) = uStack_d0;
  *(undefined4 *)(param_4 + 0x54) = uStack_cc;
  *(undefined4 *)(param_4 + 0x58) = uStack_c8;
  *(undefined4 *)(param_4 + 0x5c) = uStack_c4;
  *(undefined4 *)(param_4 + 0x60) = auStack_c0._0_4_;
  *(undefined4 *)(param_4 + 100) = auStack_c0._4_4_;
  *(undefined4 *)(param_4 + 0x68) = auStack_c0._8_4_;
  *(undefined4 *)(param_4 + 0x6c) = auStack_c0._12_4_;
  *(undefined4 *)(param_4 + 0x70) = uStack_b0;
  *(undefined4 *)(param_4 + 0x74) = uStack_ac;
  *(undefined4 *)(param_4 + 0x78) = uStack_a8;
  *(undefined4 *)(param_4 + 0x7c) = uStack_a4;
  *(float *)(param_4 + 0x80) = fStack_a0;
  *(undefined4 *)(param_4 + 0x84) = uStack_9c;
  *(undefined4 *)(param_4 + 0x88) = uStack_98;
  *(undefined4 *)(param_4 + 0x8c) = uStack_94;
  auVar4 = _sqc2(auVar8);
  if (1.1920929e-07 < auVar6._0_4_) {
    fStack_60 = SQRT(auVar6._0_4_);
    auVar6 = _lqc2(auVar5);
    auVar5 = _qmtc2(1.0 / fStack_60);
    auVar5 = _vmulbc(auVar6,auVar5);
    auStack_80 = _sqc2(auVar5);
  }
  uStack_88 = auVar4._8_4_;
  uStack_84 = auVar4._12_4_;
  *(undefined4 *)(param_4 + 0x130) = 3;
  *(int *)(param_4 + 0x90) = auVar4._0_4_;
  *(int *)(param_4 + 0x94) = auVar4._4_4_;
  *(undefined4 *)(param_4 + 0x98) = uStack_88;
  *(undefined4 *)(param_4 + 0x9c) = uStack_84;
  *(undefined4 *)(param_4 + 0xa0) = auStack_80._0_4_;
  *(undefined4 *)(param_4 + 0xa4) = auStack_80._4_4_;
  *(undefined4 *)(param_4 + 0xa8) = auStack_80._8_4_;
  *(undefined4 *)(param_4 + 0xac) = auStack_80._12_4_;
  *(undefined4 *)(param_4 + 0xb0) = uStack_70;
  *(undefined4 *)(param_4 + 0xb4) = uStack_6c;
  *(undefined4 *)(param_4 + 0xb8) = uStack_68;
  *(undefined4 *)(param_4 + 0xbc) = uStack_64;
  *(float *)(param_4 + 0xc0) = fStack_60;
  *(undefined4 *)(param_4 + 0xc4) = uStack_5c;
  *(undefined4 *)(param_4 + 200) = uStack_58;
  *(undefined4 *)(param_4 + 0xcc) = uStack_54;
  return 1;
}


// ==== FUN_003401a0 @ 003401a0 ====

undefined4
FUN_003401a0(undefined1 (*param_1) [16],float *param_2,float *param_3,undefined1 (*param_4) [16],
            undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16])

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar15 = _lqc2(*param_5);
  auVar13 = _lqc2(*param_6);
  auVar14 = _lqc2(*param_7);
  auVar19 = _vsub(auVar13,auVar15);
  auVar20 = _vsub(auVar14,auVar15);
  auVar17 = _vmul(auVar19,auVar19);
  auVar18 = _vmul(auVar19,auVar20);
  auVar14 = _vaddbc(auVar17,auVar17);
  auVar13 = _vaddbc(auVar18,auVar18);
  auVar16 = _vaddbc(auVar14,auVar17);
  auVar13 = _vaddbc(auVar13,auVar18);
  auVar17 = _vmul(auVar20,auVar20);
  auVar13 = _qmfc2(auVar13._0_4_);
  auVar14 = _vaddbc(auVar17,auVar17);
  fVar3 = auVar13._0_4_;
  auVar17 = _vaddbc(auVar14,auVar17);
  auVar14 = _lqc2(*param_4);
  auVar13 = _qmfc2(auVar16._0_4_);
  auVar14 = _vsub(auVar15,auVar14);
  fVar4 = auVar13._0_4_;
  auVar15 = _vmul(auVar20,auVar14);
  auVar13 = _qmfc2(auVar17._0_4_);
  auVar17 = _vmul(auVar19,auVar14);
  fVar7 = auVar13._0_4_;
  auVar13 = _vaddbc(auVar17,auVar17);
  auVar14 = _vaddbc(auVar15,auVar15);
  auVar13 = _vaddbc(auVar13,auVar17);
  auVar13 = _qmfc2(auVar13._0_4_);
  fVar9 = auVar13._0_4_;
  auVar13 = _vaddbc(auVar14,auVar15);
  auVar13 = _qmfc2(auVar13._0_4_);
  fVar5 = auVar13._0_4_;
  fVar12 = fVar4 * fVar7 - fVar3 * fVar3;
  fVar10 = fVar3 * fVar5 - fVar7 * fVar9;
  fVar11 = fVar3 * fVar9 - fVar4 * fVar5;
  if (fVar12 < DAT_0040e3dc) {
    fVar8 = (fVar4 - (fVar3 + fVar3)) + fVar7;
    if (fVar7 < fVar4) {
      bVar1 = fVar8 < fVar4;
      lVar6 = 2;
code_r0x00340340:
      if (bVar1) {
        lVar6 = 0;
      }
    }
    else {
      bVar1 = fVar8 < fVar7;
code_r0x003402bc:
      lVar6 = 2;
      if (bVar1) {
        lVar6 = 1;
      }
    }
  }
  else if (fVar12 < fVar10 + fVar11) {
    lVar6 = 2;
    if (fVar10 < 0.0) {
      bVar1 = fVar7 + fVar5 < fVar3 + fVar9;
      goto code_r0x003402bc;
    }
    if (fVar11 < 0.0) {
      bVar1 = fVar4 + fVar9 < fVar3 + fVar5;
      goto code_r0x00340340;
    }
    lVar6 = 2;
  }
  else if (fVar10 < 0.0) {
    lVar6 = 1;
    if (-fVar5 <= 0.0) {
      lVar6 = 0;
    }
  }
  else {
    lVar6 = 1;
    if (fVar11 < 0.0) {
      bVar1 = 0.0 < -fVar9;
      goto code_r0x00340340;
    }
    lVar6 = 3;
  }
  if (lVar6 == 1) {
    fVar10 = 0.0;
    fVar11 = 0.0;
    if (0.0 <= fVar5) {
      uVar2 = 0;
      goto LAB_003404b4;
    }
    uVar2 = 4;
    if (-fVar5 < fVar7) {
      fVar11 = -fVar5 / fVar7;
      goto LAB_003404b4;
    }
  }
  else {
    if (lVar6 == 0) {
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
        if (fVar4 <= -fVar9) {
          fVar10 = 1.0;
        }
        else {
          fVar10 = -fVar9 / fVar4;
          uVar2 = 3;
        }
      }
      fVar11 = 0.0;
      goto LAB_003404b4;
    }
    uVar2 = 6;
    if (lVar6 != 2) {
      fVar11 = fVar11 * (1.0 / fVar12);
      fVar10 = fVar10 * (1.0 / fVar12);
      goto LAB_003404b4;
    }
    fVar9 = ((fVar7 + fVar5) - fVar3) - fVar9;
    if (0.0 < fVar9) {
      fVar7 = (fVar4 - (fVar3 + fVar3)) + fVar7;
      fVar11 = 0.0;
      if (fVar7 <= fVar9) {
        fVar10 = 1.0;
        uVar2 = 1;
      }
      else {
        fVar10 = fVar9 / fVar7;
        uVar2 = 5;
        fVar11 = 1.0 - fVar10;
      }
      goto LAB_003404b4;
    }
  }
  fVar10 = 0.0;
  fVar11 = 1.0;
  uVar2 = 2;
LAB_003404b4:
  auVar13 = _qmtc2(fVar10);
  auVar17 = _lqc2(*param_5);
  auVar13 = _vmulbc(auVar19,auVar13);
  auVar14 = _qmtc2(fVar11);
  *param_2 = fVar10;
  auVar17 = _vadd(auVar17,auVar13);
  auVar13 = _vmulbc(auVar20,auVar14);
  auVar13 = _vadd(auVar17,auVar13);
  *param_3 = fVar11;
  auVar13 = _sqc2(auVar13);
  *param_1 = auVar13;
  return uVar2;
}


// ==== FUN_003404e8 @ 003404e8 ====

undefined8
FUN_003404e8(float param_1,int param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
            undefined8 param_5,undefined1 (*param_6) [16],undefined1 (*param_7) [16])

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_190;
  float fStack_180;
  float fStack_17c;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  float fStack_f0;
  float afStack_ec [3];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  
  *(undefined4 *)(param_2 + 0x40) = 0;
  auVar16 = _lqc2(*param_3);
  pauVar5 = (undefined1 (*) [16])param_5;
  auVar14 = _lqc2(*pauVar5);
  auVar15 = _lqc2(*param_7);
  auVar19 = _vsub(auVar16,auVar14);
  fVar13 = *(float *)(param_2 + 0x40);
  auVar18 = _vsub(auVar15,auVar14);
  auStack_110 = _sqc2(auVar19);
  fVar8 = 1.0;
  auVar15 = _lqc2(*param_6);
  auVar17 = _lqc2(*param_4);
  auVar21 = _vsub(auVar15,auVar14);
  _vopmula(auVar17,auVar18);
  auVar22 = _vopmsub(auVar18,auVar17);
  auVar16 = _vmove(auVar22);
  auVar15 = _vmul(auVar21,auVar16);
  auStack_e0 = _sqc2(auVar17);
  auVar14 = _vaddbc(auVar15,auVar15);
  auVar14 = _vaddbc(auVar14,auVar15);
  auVar14 = _qmfc2(auVar14._0_4_);
  fVar12 = auVar14._0_4_;
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  if (fVar12 < fVar13) {
    fVar12 = -fVar12;
    fVar8 = -1.0;
  }
  auVar14 = _vmul(auVar14,auVar19);
  auVar15 = _vaddbc(auVar14,auVar14);
  auVar17 = _qmtc2(fVar8);
  auVar14 = _vaddbc(auVar15,auVar14);
  auVar14 = _vmulbc(auVar14,auVar17);
  auVar14 = _qmfc2(auVar14._0_4_);
  if (auVar14._0_4_ < -param_1) {
    return 0;
  }
  auVar14 = _qmfc2(auVar16._0_4_);
  auVar19 = _vmul(auVar19,auVar16);
  auVar15 = _vaddbc(auVar19,auVar19);
  auVar15 = _vaddbc(auVar15,auVar19);
  auVar15 = _vmulbc(auVar15,auVar17);
  auVar15 = _qmfc2(auVar15._0_4_);
  fStack_130 = ABS(auVar14._0_4_);
  fStack_f0 = auVar15._0_4_;
  auStack_170 = _sqc2(auVar16);
  fStack_12c = ABS((float)auStack_170._4_4_);
  auStack_160 = _sqc2(auVar16);
  fStack_128 = ABS((float)auStack_160._8_4_);
  fVar11 = param_1 * (fStack_130 + fStack_12c + fStack_128);
  if (fStack_f0 < -fVar11) {
    return 0;
  }
  fVar11 = fVar12 + fVar11;
  auVar14 = _lqc2(auStack_e0);
  if (fVar11 < fStack_f0) {
    return 0;
  }
  _vopmula(auVar21,auVar14);
  auVar20 = _vopmsub(auVar14,auVar21);
  auVar15 = _lqc2(auStack_110);
  auVar19 = _vmove(auVar20);
  auVar14 = _qmfc2(auVar19._0_4_);
  auVar16 = _vmul(auVar15,auVar19);
  auVar15 = _vaddbc(auVar16,auVar16);
  auVar15 = _vaddbc(auVar15,auVar16);
  auVar15 = _vmulbc(auVar15,auVar17);
  auVar15 = _qmfc2(auVar15._0_4_);
  afStack_ec[0] = auVar15._0_4_;
  fStack_124 = ABS(auVar14._0_4_);
  auStack_150 = _sqc2(auVar19);
  fStack_120 = ABS((float)auStack_150._4_4_);
  auStack_140 = _sqc2(auVar19);
  fStack_11c = ABS((float)auStack_140._8_4_);
  fVar7 = param_1 * (fStack_124 + fStack_120 + fStack_11c);
  if (afStack_ec[0] < -fVar7) {
    return 0;
  }
  if (fVar12 + fVar7 < afStack_ec[0]) {
    return 0;
  }
  if (fVar11 + fVar7 < fStack_f0 + afStack_ec[0]) {
    return 0;
  }
  auVar14 = _lqc2(auStack_110);
  if (DAT_0040e3e0 < fVar12) {
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
    _vopmula(auVar18,auVar21);
    auVar16 = _vopmsub(auVar21,auVar18);
    auVar15 = _qmtc2(param_1 * fVar8);
    auVar15 = _vmulbc(auVar19,auVar15);
    auVar18 = _vsub(auVar14,auVar15);
    auVar15 = _vmul(auVar18,auVar16);
    auVar14 = _vaddbc(auVar15,auVar15);
    auVar16 = _qmtc2(-fVar8);
    auVar14 = _vaddbc(auVar14,auVar15);
    auStack_100 = _sqc2(auVar18);
    auVar14 = _vmulbc(auVar14,auVar16);
    auVar14 = _qmfc2(auVar14._0_4_);
    fVar11 = auVar14._0_4_;
    if (fVar12 < fVar11) {
      return 0;
    }
    if (fVar11 < fVar13) {
      auVar14 = _lqc2(*pauVar5);
      goto LAB_00340970;
    }
    auVar15 = _vmul(auVar18,auVar22);
    auVar14 = _vaddbc(auVar15,auVar15);
    fVar7 = 1.0 / fVar12;
    auVar14 = _vaddbc(auVar14,auVar15);
    auVar14 = _vmulbc(auVar14,auVar17);
    auVar14 = _qmfc2(auVar14._0_4_);
    fStack_f0 = auVar14._0_4_;
    fVar11 = *(float *)(param_2 + 0x40) + fVar11 * fVar7;
    *(float *)(param_2 + 0x40) = fVar11;
    if (fVar13 <= fStack_f0) {
      if (fStack_f0 <= fVar12) {
        auVar15 = _vmul(auVar18,auVar20);
        auVar14 = _vaddbc(auVar15,auVar15);
        auVar14 = _vaddbc(auVar14,auVar15);
        auVar14 = _vmulbc(auVar14,auVar17);
        auVar14 = _qmfc2(auVar14._0_4_);
        afStack_ec[0] = auVar14._0_4_;
        if (afStack_ec[0] < fVar13) goto LAB_00340930;
        if (fStack_f0 + afStack_ec[0] <= fVar12) {
          _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
          auVar18 = _lqc2(*param_3);
          auVar21 = _qmtc2(fVar11);
          auVar14 = _qmtc2(fStack_f0 * fVar7);
          auVar15 = _vaddbc(in_vf0,auVar14);
          auVar16 = _qmtc2(afStack_ec[0] * fVar7);
          auVar14 = _sqc2(auVar15);
          *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
          _vmove(auVar15);
          auVar14 = _vaddbc(in_vf0,auVar16);
          auVar15 = _lqc2(auStack_e0);
          auVar16 = _qmtc2(fVar13);
          auVar14 = _sqc2(auVar14);
          *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
          auVar17 = _qmtc2(fVar8);
          auVar14 = _vmulbc(auVar15,auVar21);
          auVar17 = _vmulbc(auVar19,auVar17);
          auVar15 = _vadd(auVar18,auVar14);
          auVar14 = _vaddbc(in_vf0,auVar16);
          auVar14 = _sqc2(auVar14);
          *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
          auVar14 = _sqc2(auVar15);
          *(undefined1 (*) [16])(param_2 + 0x10) = auVar14;
          auVar14 = _sqc2(auVar17);
          *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
          return 1;
        }
        fVar8 = *(float *)(param_2 + 0x40);
      }
      else {
        fVar8 = *(float *)(param_2 + 0x40);
      }
    }
    else {
LAB_00340930:
      fVar8 = *(float *)(param_2 + 0x40);
    }
    auVar16 = _lqc2(auStack_e0);
    auVar15 = _qmtc2(fVar8);
    auVar14 = _lqc2(auStack_110);
    auVar15 = _vmulbc(auVar16,auVar15);
    auVar14 = _vadd(auVar14,auVar15);
    auVar15 = _qmtc2(1.0 - fVar8);
    auStack_110 = _sqc2(auVar14);
    auVar14 = _vmulbc(auVar16,auVar15);
    auStack_e0 = _sqc2(auVar14);
  }
  auVar14 = _lqc2(*pauVar5);
LAB_00340970:
  auVar15 = _lqc2(auStack_110);
  auVar14 = _vadd(auVar15,auVar14);
  auStack_110 = _sqc2(auVar14);
  iVar2 = FUN_003401a0(auStack_100,&fStack_f0,afStack_ec,auStack_110,param_5);
  auVar14 = _lqc2(auStack_100);
  auVar18 = _lqc2(auStack_110);
  auVar17 = _vsub(auVar18,auVar14);
  auVar15 = _vmul(auVar17,auVar17);
  auVar14 = _vaddbc(auVar15,auVar15);
  auVar16 = _qmtc2(param_1 * param_1);
  auVar14 = _vaddbc(auVar14,auVar15);
  auVar14 = _vsubbc(auVar16,auVar14);
  auVar14 = _qmfc2(auVar14._0_4_);
  if (0.0 < auVar14._0_4_) {
    auVar21 = _vmul(auVar17,auVar17);
    _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
    auVar15 = _qmtc2(fStack_f0);
    auVar16 = _vaddbc(in_vf0,auVar15);
    auVar15 = _sqc2(auVar17);
    *(undefined1 (*) [16])(param_2 + 0x20) = auVar15;
    auVar19 = _vaddbc(auVar21,auVar21);
    auVar15 = _sqc2(auVar16);
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar15;
    auVar15 = _qmtc2(afStack_ec[0]);
    auVar15 = _vaddbc(in_vf0,auVar15);
    auVar16 = _vaddbc(auVar19,auVar21);
    auVar15 = _sqc2(auVar15);
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar15;
    auVar14 = _qmtc2(auVar14._0_4_);
    _vrsqrt(in_vf0,auVar16);
    uVar10 = _vwaitq();
    auVar16 = _vmulq(auVar17,uVar10);
    auVar15 = _vaddbc(in_vf0,auVar14);
    auVar14 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar14;
    auVar14 = _sqc2(auVar15);
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
    auVar14 = _sqc2(auVar16);
    *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
  }
  else {
    if (iVar2 != 6) {
      iVar6 = 4;
      fVar8 = DAT_0040e3e0;
      do {
        if (iVar2 < 3) {
          iVar3 = FUN_0033ee08(param_1,&uStack_190,auStack_110,auStack_e0,auStack_100);
          if (iVar3 < 0) {
            return 0;
          }
          if (iVar2 == 0) {
            auVar14 = _lqc2(*pauVar5);
            auVar15 = _lqc2(*param_6);
            auVar16 = _lqc2(*param_7);
          }
          else if (iVar2 == 1) {
            auVar14 = _lqc2(*param_6);
            auVar15 = _lqc2(*pauVar5);
            auVar16 = _lqc2(*param_7);
          }
          else {
            auVar14 = _lqc2(*param_7);
            auVar15 = _lqc2(*pauVar5);
            auVar16 = _lqc2(*param_6);
          }
          auVar17 = _vsub(auVar15,auVar14);
          auVar16 = _vsub(auVar16,auVar14);
          auVar14 = _lqc2(auStack_e0);
          bVar1 = false;
          auVar15 = _vmul(auVar14,auVar17);
          auVar14 = _vaddbc(auVar15,auVar15);
          auVar14 = _vaddbc(auVar14,auVar15);
          auVar14 = _qmfc2(auVar14._0_4_);
          fVar12 = auVar14._0_4_;
          if (fVar8 < fVar12) {
            auVar14 = _lqc2(auStack_110);
            auVar15 = _lqc2(auStack_100);
            auVar14 = _vsub(auVar15,auVar14);
            auVar15 = _vmul(auVar14,auVar17);
            auVar14 = _vaddbc(auVar15,auVar15);
            auVar14 = _vaddbc(auVar14,auVar15);
            auVar14 = _qmfc2(auVar14._0_4_);
            fStack_180 = auVar14._0_4_;
            if ((0.0 < fStack_180) &&
               ((iVar3 == 0 || (fStack_180 * uStack_190._4_4_ <= (float)uStack_190 * fVar12)))) {
              bVar1 = true;
            }
          }
          if (bVar1) {
            uStack_190 = CONCAT44(fVar12,fStack_180);
            iVar3 = (iVar2 + 6) / 2;
          }
          auVar14 = _lqc2(auStack_e0);
          bVar1 = false;
          auVar15 = _vmul(auVar14,auVar16);
          auVar14 = _vaddbc(auVar15,auVar15);
          auVar14 = _vaddbc(auVar14,auVar15);
          auVar14 = _qmfc2(auVar14._0_4_);
          fStack_17c = auVar14._0_4_;
          if (fVar8 < fStack_17c) {
            auVar14 = _lqc2(auStack_110);
            auVar15 = _lqc2(auStack_100);
            auVar14 = _vsub(auVar15,auVar14);
            auVar15 = _vmul(auVar14,auVar16);
            auVar14 = _vaddbc(auVar15,auVar15);
            auVar14 = _vaddbc(auVar14,auVar15);
            auVar14 = _qmfc2(auVar14._0_4_);
            fStack_180 = auVar14._0_4_;
            if ((0.0 < fStack_180) &&
               ((iVar3 == 0 || (fStack_180 * uStack_190._4_4_ <= (float)uStack_190 * fStack_17c))))
            {
              bVar1 = true;
            }
          }
          if (bVar1) {
            uStack_190 = CONCAT44(fStack_17c,fStack_180);
            iVar3 = (iVar2 + 9) / 2;
          }
          if (iVar3 == 0) {
            return 0;
          }
          if (iVar3 < 3) {
            auVar17 = _lqc2(auStack_e0);
            auVar16 = _lqc2(auStack_110);
            auVar15 = _lqc2(auStack_100);
            uVar10 = 0;
            auVar18 = _qmtc2(1.0 / param_1);
            uStack_190._0_4_ = (float)uStack_190 * (1.0 / uStack_190._4_4_);
            auVar14 = _qmtc2((float)uStack_190);
            auVar14 = _vmulbc(auVar17,auVar14);
            auVar14 = _vadd(auVar16,auVar14);
            auVar15 = _vsub(auVar14,auVar15);
            auVar14 = _sqc2(auVar14);
            *(undefined1 (*) [16])(param_2 + 0x10) = auVar14;
            auVar14 = _sqc2(auVar15);
            *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
            auVar14 = _vmulbc(auVar15,auVar18);
            *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + (float)uStack_190;
            auVar14 = _sqc2(auVar14);
            *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
            if (iVar2 == 1) {
              uVar10 = 0x3f800000;
            }
            uVar9 = 0;
            if (iVar2 == 2) {
              uVar9 = 0x3f800000;
            }
            _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
            auVar14 = _qmtc2(uVar10);
            auVar15 = _vaddbc(in_vf0,auVar14);
            auVar14 = _qmtc2(uVar9);
            _vmove(auVar15);
            auVar16 = _vaddbc(in_vf0,auVar14);
            auVar14 = _sqc2(auVar15);
            *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
            auVar14 = _sqc2(auVar16);
            *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
            auVar14 = _qmtc2(0);
            auVar14 = _vaddbc(in_vf0,auVar14);
            auVar14 = _sqc2(auVar14);
            *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
            return 1;
          }
        }
        else {
          if (iVar2 == 3) {
            auVar15 = _lqc2(*pauVar5);
            auVar14 = _lqc2(*param_6);
LAB_00340e2c:
            auVar14 = _vsub(auVar14,auVar15);
            auStack_100 = _sqc2(auVar15);
          }
          else {
            if (iVar2 == 4) {
              auVar15 = _lqc2(*pauVar5);
              auVar14 = _lqc2(*param_7);
              goto LAB_00340e2c;
            }
            auVar15 = _lqc2(*param_6);
            auVar14 = _lqc2(*param_7);
            auVar14 = _vsub(auVar14,auVar15);
            auStack_100 = _sqc2(auVar15);
          }
          auVar16 = _vmul(auVar14,auVar14);
          auVar15 = _vaddbc(auVar16,auVar16);
          auVar15 = _vaddbc(auVar15,auVar16);
          auVar15 = _qmfc2(auVar15._0_4_);
          _qmfc2(auVar14._0_4_);
          auStack_d0 = _sqc2(auVar14);
          lVar4 = FUN_0033e060(auVar15._0_4_,param_1,&uStack_190);
          auVar14 = _lqc2(auStack_d0);
          if (lVar4 < 0) {
            return 0;
          }
          auVar15 = _lqc2(auStack_e0);
          bVar1 = false;
          auVar16 = _vmul(auVar15,auVar14);
          auVar15 = _vaddbc(auVar16,auVar16);
          auVar15 = _vaddbc(auVar15,auVar16);
          auVar15 = _qmfc2(auVar15._0_4_);
          fStack_17c = auVar15._0_4_;
          if (fVar8 < fStack_17c) {
            auVar15 = _lqc2(auStack_100);
            auVar16 = _lqc2(auStack_110);
            auVar15 = _vadd(auVar15,auVar14);
            auVar15 = _vsub(auVar15,auVar16);
            auVar15 = _vmul(auVar15,auVar14);
            auVar16 = _vaddbc(auVar15,auVar15);
            auVar15 = _vaddbc(auVar16,auVar15);
            auVar15 = _qmfc2(auVar15._0_4_);
            fStack_180 = auVar15._0_4_;
            if ((0.0 < fStack_180) &&
               ((lVar4 == 0 || (fStack_180 * uStack_190._4_4_ <= (float)uStack_190 * fStack_17c))))
            {
              bVar1 = true;
            }
          }
          auVar15 = _lqc2(auStack_100);
          if (bVar1) {
            auVar15 = _vadd(auVar15,auVar14);
            auStack_100 = _sqc2(auVar15);
            uStack_190 = CONCAT44(fStack_17c,fStack_180);
            lVar4 = 1;
            iVar3 = iVar2 / 2;
          }
          else {
            bVar1 = false;
            fStack_17c = -fStack_17c;
            if (fVar8 < fStack_17c) {
              auVar15 = _lqc2(auStack_100);
              auVar16 = _lqc2(auStack_110);
              auVar15 = _vsub(auVar16,auVar15);
              auVar16 = _vmul(auVar15,auVar14);
              auVar15 = _vaddbc(auVar16,auVar16);
              auVar15 = _vaddbc(auVar15,auVar16);
              auVar15 = _qmfc2(auVar15._0_4_);
              fStack_180 = auVar15._0_4_;
              if ((0.0 < fStack_180) &&
                 ((lVar4 == 0 || (fStack_180 * uStack_190._4_4_ <= (float)uStack_190 * fStack_17c)))
                 ) {
                bVar1 = true;
              }
            }
            iVar3 = iVar2;
            if (bVar1) {
              uStack_190 = CONCAT44(fStack_17c,fStack_180);
              lVar4 = 1;
              iVar3 = (iVar2 + -3) / 2;
            }
          }
          if (lVar4 == 0) {
            return 0;
          }
          if (2 < iVar3) {
            auVar16 = _vmul(auVar14,auVar14);
            auVar15 = _vaddbc(auVar16,auVar16);
            auVar15 = _vaddbc(auVar15,auVar16);
            auVar15 = _qmfc2(auVar15._0_4_);
            auVar17 = _lqc2(auStack_e0);
            auVar18 = _lqc2(auStack_110);
            auVar19 = _lqc2(auStack_100);
            uStack_190._0_4_ = (float)uStack_190 * (1.0 / uStack_190._4_4_);
            auVar16 = _qmtc2((float)uStack_190);
            auVar16 = _vmulbc(auVar17,auVar16);
            auVar21 = _qmtc2(1.0 / auVar15._0_4_);
            auVar17 = _vadd(auVar18,auVar16);
            auVar16 = _vsub(auVar17,auVar19);
            auVar15 = _sqc2(auVar17);
            *(undefined1 (*) [16])(param_2 + 0x10) = auVar15;
            auVar15 = _vmul(auVar16,auVar14);
            _sqc2(auVar17);
            auVar16 = _vaddbc(auVar15,auVar15);
            auVar15 = _vaddbc(auVar16,auVar15);
            auVar15 = _vmulbc(auVar15,auVar21);
            auVar15 = _qmfc2(auVar15._0_4_);
            fVar8 = auVar15._0_4_;
            auVar15 = _qmtc2(fVar8);
            auVar16 = _qmtc2(1.0 / param_1);
            auVar14 = _vmulbc(auVar14,auVar15);
            *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + (float)uStack_190;
            auVar14 = _vadd(auVar19,auVar14);
            auVar15 = _vsub(auVar17,auVar14);
            auVar14 = _sqc2(auVar15);
            *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
            auVar14 = _vmulbc(auVar15,auVar16);
            auVar14 = _sqc2(auVar14);
            *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
            if (iVar3 == 3) {
              _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
              auVar14 = _qmtc2(fVar8);
              auVar14 = _vaddbc(in_vf0,auVar14);
              auVar14 = _sqc2(auVar14);
              *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
              auVar14 = _qmtc2(0);
              auVar14 = _vaddbc(in_vf0,auVar14);
              auVar15 = _qmtc2(0);
              auVar14 = _sqc2(auVar14);
              *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
            }
            else {
              if (iVar3 != 4) {
                auVar15 = _qmtc2(fVar8);
                _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
                auVar16 = _qmtc2(0);
                auVar14 = _qmtc2(1.0 - fVar8);
                auVar14 = _vaddbc(in_vf0,auVar14);
                _vmove(auVar14);
                auVar14 = _vaddbc(in_vf0,auVar15);
                auVar14 = _sqc2(auVar14);
                *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
                auVar14 = _vaddbc(in_vf0,auVar16);
                auVar14 = _sqc2(auVar14);
                *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
                return 1;
              }
              _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
              auVar14 = _qmtc2(0);
              auVar16 = _qmtc2(fVar8);
              auVar14 = _vaddbc(in_vf0,auVar14);
              auVar15 = _qmtc2(0);
              _vmove(auVar14);
              auVar14 = _vaddbc(in_vf0,auVar16);
              auVar14 = _sqc2(auVar14);
              *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
            }
            auVar14 = _vaddbc(in_vf0,auVar15);
            auVar14 = _sqc2(auVar14);
            *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
            return 1;
          }
        }
        auVar16 = _lqc2(auStack_e0);
        auVar15 = _lqc2(auStack_110);
        fVar12 = (float)uStack_190 * (1.0 / uStack_190._4_4_);
        auVar14 = _qmtc2(fVar12);
        auVar14 = _vmulbc(auVar16,auVar14);
        auVar15 = _vadd(auVar15,auVar14);
        auVar14 = _qmtc2(1.0 - fVar12);
        auVar14 = _vmulbc(auVar16,auVar14);
        auStack_110 = _sqc2(auVar15);
        auStack_e0 = _sqc2(auVar14);
        *(float *)(param_2 + 0x40) =
             *(float *)(param_2 + 0x40) + fVar12 * (1.0 - *(float *)(param_2 + 0x40));
        if (1.0 < fVar12) {
          return 0;
        }
        iVar6 = iVar6 + -1;
        iVar2 = iVar3;
        if (iVar6 == -1) {
          return 1;
        }
      } while( true );
    }
    auVar14 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar14;
    if (fVar12 < 0.0) {
      auVar14 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
      auVar15 = _qmtc2(0xbf800000);
      auVar14 = _vmulbc(auVar14,auVar15);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(param_2 + 0x20) = auVar14;
    }
    _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
    auVar14 = _qmtc2(fStack_f0);
    auVar14 = _vaddbc(in_vf0,auVar14);
    auVar15 = _qmtc2(0);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
    auVar14 = _qmtc2(afStack_ec[0]);
    auVar14 = _vaddbc(in_vf0,auVar14);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
    auVar14 = _vaddbc(in_vf0,auVar15);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar14;
  }
  return 1;
}


// ==== FUN_003411c8 @ 003411c8 ====

long FUN_003411c8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 long param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  undefined4 uVar18;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (param_4 == 0) {
    auStack_20 = *param_1;
    auStack_50 = param_1[1];
    auStack_40 = param_1[2];
  }
  else {
    pauVar4 = (undefined1 (*) [16])param_4;
    auVar16 = _lqc2(pauVar4[3]);
    auVar15 = _lqc2(*pauVar4);
    auVar14 = _lqc2(pauVar4[1]);
    auVar10 = _lqc2(pauVar4[2]);
    auVar11 = _lqc2(*param_1);
    auVar13 = _lqc2(param_1[1]);
    _vmulabc(auVar15,auVar11);
    _vmaddabc(auVar14,auVar11);
    _vmaddabc(auVar10,auVar11);
    auVar12 = _vmaddbc(auVar16,in_vf0);
    auVar11 = _lqc2(param_1[2]);
    _vmulabc(auVar15,auVar13);
    _vmaddabc(auVar14,auVar13);
    _vmaddabc(auVar10,auVar13);
    auVar13 = _vmaddbc(auVar16,in_vf0);
    _vmulabc(auVar15,auVar11);
    _vmaddabc(auVar14,auVar11);
    _vmaddabc(auVar10,auVar11);
    auVar11 = _vmaddbc(auVar16,in_vf0);
    auStack_20 = _sqc2(auVar12);
    auStack_50 = _sqc2(auVar13);
    auStack_40 = _sqc2(auVar11);
  }
  fVar7 = *(float *)(param_1[4] + 0xc);
  puVar5 = (undefined4 *)param_5;
  *puVar5 = param_1;
  fVar8 = DAT_0040e3e4;
  if (fVar7 == 0.0) {
    auVar11 = _lqc2(*param_3);
    auVar14 = _lqc2(*param_2);
    auVar12 = _lqc2(auStack_20);
    auVar16 = _vsub(auVar11,auVar14);
    auVar11 = _lqc2(auStack_40);
    auVar17 = _vsub(auVar11,auVar12);
    auVar11 = _lqc2(auStack_50);
    _vopmula(auVar16,auVar17);
    auVar13 = _vopmsub(auVar17,auVar16);
    auVar15 = _vsub(auVar11,auVar12);
    auVar10 = _vmul(auVar15,auVar13);
    auVar11 = _vaddbc(auVar10,auVar10);
    auVar11 = _vaddbc(auVar11,auVar10);
    auVar11 = _qmfc2(auVar11._0_4_);
    fVar8 = auVar11._0_4_;
    lVar3 = 0;
    if (1e-08 < fVar8) {
      auVar12 = _vsub(auVar14,auVar12);
      auVar10 = _vmul(auVar12,auVar13);
      auVar11 = _vaddbc(auVar10,auVar10);
      auVar11 = _vaddbc(auVar11,auVar10);
      fVar6 = -fVar8 * 1e-05;
      auVar11 = _qmfc2(auVar11._0_4_);
      fVar7 = auVar11._0_4_;
      fVar9 = fVar8 - fVar6;
      if ((fVar6 <= fVar7) && (fVar7 <= fVar9)) {
        _vopmula(auVar12,auVar15);
        auVar12 = _vopmsub(auVar15,auVar12);
        auVar10 = _vmul(auVar16,auVar12);
        auVar11 = _vaddbc(auVar10,auVar10);
        auVar11 = _vaddbc(auVar11,auVar10);
        auVar11 = _qmfc2(auVar11._0_4_);
        fVar1 = auVar11._0_4_;
        if ((fVar6 <= fVar1) && (fVar7 + fVar1 <= fVar9)) {
          auVar10 = _vmul(auVar17,auVar12);
          auVar11 = _vaddbc(auVar10,auVar10);
          auVar11 = _vaddbc(auVar11,auVar10);
          auVar11 = _qmfc2(auVar11._0_4_);
          fVar2 = auVar11._0_4_;
          puVar5[0x10] = fVar2;
          if (fVar6 <= fVar2) {
            lVar3 = 1;
            if (fVar2 <= fVar9) {
              fVar8 = 1.0 / fVar8;
              auVar14 = _qmtc2(0);
              _lqc2(*(undefined1 (*) [16])(puVar5 + 0xc));
              auVar13 = _lqc2(*param_2);
              auVar11 = _qmtc2(fVar7 * fVar8);
              auVar10 = _vaddbc(in_vf0,auVar11);
              auVar11 = _qmtc2(fVar1 * fVar8);
              _vmove(auVar10);
              auVar12 = _vaddbc(in_vf0,auVar11);
              auVar11 = _sqc2(auVar10);
              *(undefined1 (*) [16])(puVar5 + 0xc) = auVar11;
              auVar10 = _qmtc2(fVar2 * fVar8);
              auVar11 = _sqc2(auVar12);
              *(undefined1 (*) [16])(puVar5 + 0xc) = auVar11;
              auVar11 = _vmulbc(auVar16,auVar10);
              auVar11 = _vadd(auVar13,auVar11);
              auVar10 = _vaddbc(in_vf0,auVar14);
              auVar11 = _sqc2(auVar11);
              *(undefined1 (*) [16])(puVar5 + 4) = auVar11;
              auVar11 = _sqc2(auVar10);
              *(undefined1 (*) [16])(puVar5 + 0xc) = auVar11;
              puVar5[0x10] = fVar2 * fVar8;
            }
            else {
              lVar3 = 0;
            }
          }
        }
      }
    }
    fVar8 = DAT_0040e3e4;
    auVar11 = _lqc2(auStack_20);
    if (lVar3 != 0) {
      auVar12 = _lqc2(auStack_50);
      auVar10 = _lqc2(auStack_40);
      auVar12 = _vsub(auVar12,auVar11);
      auVar11 = _vsub(auVar10,auVar11);
      _vopmula(auVar12,auVar11);
      auVar12 = _vopmsub(auVar11,auVar12);
      auVar10 = _vmul(auVar12,auVar12);
      auVar11 = _sqc2(auVar12);
      *(undefined1 (*) [16])(puVar5 + 8) = auVar11;
      auVar11 = _vaddbc(auVar10,auVar10);
      auVar11 = _vaddbc(auVar11,auVar10);
      auVar11 = _qmfc2(auVar11._0_4_);
      if (fVar8 < auVar11._0_4_) {
        auVar10 = _vmul(auVar12,auVar12);
        auVar11 = _vaddbc(auVar10,auVar10);
        auVar11 = _vaddbc(auVar11,auVar10);
        _vrsqrt(in_vf0,auVar11);
        uVar18 = _vwaitq();
        auVar11 = _vmulq(auVar12,uVar18);
        auVar11 = _sqc2(auVar11);
        *(undefined1 (*) [16])(puVar5 + 8) = auVar11;
      }
    }
  }
  else {
    auVar12 = _lqc2(auStack_20);
    auVar10 = _lqc2(auStack_50);
    auVar11 = _lqc2(auStack_40);
    auVar10 = _vsub(auVar10,auVar12);
    auVar11 = _vsub(auVar11,auVar12);
    _vopmula(auVar10,auVar11);
    auVar12 = _vopmsub(auVar11,auVar10);
    auVar10 = _vmul(auVar12,auVar12);
    auVar11 = _sqc2(auVar12);
    *(undefined1 (*) [16])(puVar5 + 8) = auVar11;
    auVar11 = _vaddbc(auVar10,auVar10);
    auVar11 = _vaddbc(auVar11,auVar10);
    auVar11 = _qmfc2(auVar11._0_4_);
    if (fVar8 < auVar11._0_4_) {
      auVar10 = _vmul(auVar12,auVar12);
      auVar11 = _vaddbc(auVar10,auVar10);
      auVar11 = _vaddbc(auVar11,auVar10);
      _vrsqrt(in_vf0,auVar11);
      uVar18 = _vwaitq();
      auVar11 = _vmulq(auVar12,uVar18);
      auVar11 = _sqc2(auVar11);
      *(undefined1 (*) [16])(puVar5 + 8) = auVar11;
      auVar11 = _lqc2(*param_3);
    }
    else {
      auVar11 = _lqc2(*param_3);
    }
    auVar10 = _lqc2(*param_2);
    auVar11 = _vsub(auVar11,auVar10);
    auStack_30 = _sqc2(auVar11);
    lVar3 = FUN_003404e8(*(undefined4 *)(param_1[4] + 0xc),param_5,param_2,auStack_30,auStack_20,
                         auStack_50,auStack_40);
  }
  return lVar3;
}


// ==== FUN_00341520 @ 00341520 ====

void FUN_00341520(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff91a0,2);
      FUN_00100230(&gp0xffff9198,2);
    }
    else {
      FUN_00100228(&gp0xffff9198);
      FUN_00100258(&gp0xffff91a0);
      DAT_0045e9a0 = 0x3fc90fdb;
      DAT_0045e9a4 = 0xbe22f983;
      DAT_0045e9a8 = 0x4b400000;
      DAT_0045e9ac = uStack_44;
      DAT_0045e9b0 = 0xbe22f983;
      DAT_0045e9b4 = 0x3f000000;
      DAT_0045e9b8 = 0x3e800000;
      DAT_0045e9bc = uStack_34;
      DAT_0045e9c0 = 0xc2992661;
      DAT_0045e9c4 = 0xc2255de0;
      DAT_0045e9c8 = 0x42a33457;
      DAT_0045e9cc = uStack_24;
      DAT_0045e9d0 = 0x421ed7b7;
      DAT_0045e9d4 = 0x40c90fda;
      DAT_0045e9d8 = 0;
      DAT_0045e9dc = uStack_14;
    }
  }
  return;
}


// ==== FUN_00341678 @ 00341678 ====

void FUN_00341678(void)

{
  FUN_00341520(1,0xffff);
  return;
}


// ==== FUN_00341698 @ 00341698 ====

void FUN_00341698(void)

{
  FUN_00341520(0,0xffff);
  return;
}


// ==== FUN_003416b8 @ 003416b8 ====

void FUN_003416b8(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff91b0,2);
      FUN_00100230(&gp0xffff91a8,2);
    }
    else {
      FUN_00100228(&gp0xffff91a8);
      FUN_00100258(&gp0xffff91b0);
      DAT_0045e9e0 = 0x3fc90fdb;
      DAT_0045e9e4 = 0xbe22f983;
      DAT_0045e9e8 = 0x4b400000;
      DAT_0045e9ec = uStack_44;
      DAT_0045e9f0 = 0xbe22f983;
      DAT_0045e9f4 = 0x3f000000;
      DAT_0045e9f8 = 0x3e800000;
      DAT_0045e9fc = uStack_34;
      DAT_0045ea00 = 0xc2992661;
      DAT_0045ea04 = 0xc2255de0;
      DAT_0045ea08 = 0x42a33457;
      DAT_0045ea0c = uStack_24;
      DAT_0045ea10 = 0x421ed7b7;
      DAT_0045ea14 = 0x40c90fda;
      DAT_0045ea18 = 0;
      DAT_0045ea1c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00341808 @ 00341808 ====

void FUN_00341808(void)

{
  FUN_00341b48();
  return;
}


// ==== FUN_00341828 @ 00341828 ====

void FUN_00341828(void)

{
  FUN_003416b8(1,0xffff);
  return;
}


// ==== FUN_00341848 @ 00341848 ====

void FUN_00341848(void)

{
  FUN_003416b8(0,0xffff);
  return;
}


// ==== FUN_00341868 @ 00341868 ====

void FUN_00341868(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff91c0,2);
      FUN_00100230(&gp0xffff91b8,2);
    }
    else {
      FUN_00100228(&gp0xffff91b8);
      FUN_00100258(&gp0xffff91c0);
      DAT_0045ea20 = 0x3fc90fdb;
      DAT_0045ea24 = 0xbe22f983;
      DAT_0045ea28 = 0x4b400000;
      DAT_0045ea2c = uStack_44;
      DAT_0045ea30 = 0xbe22f983;
      DAT_0045ea34 = 0x3f000000;
      DAT_0045ea38 = 0x3e800000;
      DAT_0045ea3c = uStack_34;
      DAT_0045ea40 = 0xc2992661;
      DAT_0045ea44 = 0xc2255de0;
      DAT_0045ea48 = 0x42a33457;
      DAT_0045ea4c = uStack_24;
      DAT_0045ea50 = 0x421ed7b7;
      DAT_0045ea54 = 0x40c90fda;
      DAT_0045ea58 = 0;
      DAT_0045ea5c = uStack_14;
    }
  }
  return;
}


// ==== FUN_003419e0 @ 003419e0 ====

void FUN_003419e0(void)

{
  FUN_00341868(0,0xffff);
  return;
}


// ==== FUN_00341a00 @ 00341a00 ====

void FUN_00341a00(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff91d0,2);
      FUN_00100230(&gp0xffff91c8,2);
    }
    else {
      FUN_00100228(&gp0xffff91c8);
      FUN_00100258(&gp0xffff91d0);
      DAT_0045ea60 = 0x3fc90fdb;
      DAT_0045ea64 = 0xbe22f983;
      DAT_0045ea68 = 0x4b400000;
      DAT_0045ea6c = uStack_44;
      DAT_0045ea70 = 0xbe22f983;
      DAT_0045ea74 = 0x3f000000;
      DAT_0045ea78 = 0x3e800000;
      DAT_0045ea7c = uStack_34;
      DAT_0045ea80 = 0xc2992661;
      DAT_0045ea84 = 0xc2255de0;
      DAT_0045ea88 = 0x42a33457;
      DAT_0045ea8c = uStack_24;
      DAT_0045ea90 = 0x421ed7b7;
      DAT_0045ea94 = 0x40c90fda;
      DAT_0045ea98 = 0;
      DAT_0045ea9c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00341b48 @ 00341b48 ====

undefined4 FUN_00341b48(void)

{
  return 1;
}


// ==== FUN_00341b78 @ 00341b78 ====

void FUN_00341b78(void)

{
  FUN_00341a00(0,0xffff);
  return;
}


// ==== FUN_00341b98 @ 00341b98 ====

void FUN_00341b98(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff91e0,2);
      FUN_00100230(&gp0xffff91d8,2);
    }
    else {
      FUN_00100228(&gp0xffff91d8);
      FUN_00100258(&gp0xffff91e0);
      DAT_0045eaa0 = 0x3fc90fdb;
      DAT_0045eaa4 = 0xbe22f983;
      DAT_0045eaa8 = 0x4b400000;
      DAT_0045eaac = uStack_44;
      DAT_0045eab0 = 0xbe22f983;
      DAT_0045eab4 = 0x3f000000;
      DAT_0045eab8 = 0x3e800000;
      DAT_0045eabc = uStack_34;
      DAT_0045eac0 = 0xc2992661;
      DAT_0045eac4 = 0xc2255de0;
      DAT_0045eac8 = 0x42a33457;
      DAT_0045eacc = uStack_24;
      DAT_0045ead0 = 0x421ed7b7;
      DAT_0045ead4 = 0x40c90fda;
      DAT_0045ead8 = 0;
      DAT_0045eadc = uStack_14;
    }
  }
  return;
}


// ==== FUN_00341ce0 @ 00341ce0 ====

void FUN_00341ce0(void)

{
  FUN_00341b98(1,0xffff);
  return;
}


// ==== FUN_00341d00 @ 00341d00 ====

void FUN_00341d00(void)

{
  FUN_00341b98(0,0xffff);
  return;
}


// ==== FUN_00341d20 @ 00341d20 ====

void FUN_00341d20(long param_1,long param_2)

{
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff91f0,2);
      FUN_00100230(&gp0xffff91e8,2);
    }
    else {
      FUN_00100228(&gp0xffff91e8);
      FUN_00100258(&gp0xffff91f0);
      DAT_0045eae0 = 0;
      DAT_0045eaf0 = 0x3f800000;
      DAT_0045eaf8 = 0x3f80000000000000;
      DAT_0045eb00 = 0;
      DAT_0045eaec = 0;
      DAT_0045eb08 = 0x3f800000;
      DAT_0045eb10 = 0;
      DAT_0045eb14 = 0x3f80000000000000;
      DAT_0045eb1c = 0;
      DAT_0045eae4 = 0;
      DAT_0045eae8 = 0;
      DAT_0045eb20 = 0;
      DAT_0045eb28 = 0x3f800000;
      DAT_0045eb2c = 0;
      DAT_0045eb34 = 0;
      DAT_0045eb80 = 0;
      DAT_0045eb98 = 0;
      DAT_0045eb88 = 0;
      DAT_0045eb90 = 0;
      DAT_0045eb40 = 0x3f800000;
      DAT_0045eb44 = 0;
      DAT_0045eb48 = 0;
      DAT_0045eb4c = 0;
      DAT_0045eb50 = 0;
      DAT_0045eb54 = 0x3f800000;
      DAT_0045eb58 = 0;
      DAT_0045eb5c = 0;
      DAT_0045eb60 = 0;
      DAT_0045eb64 = 0;
      DAT_0045eb68 = 0x3f800000;
      DAT_0045eb6c = 0;
      DAT_0045eb70 = 0;
      DAT_0045eb74 = 0;
      DAT_0045eb78 = 0;
      DAT_0045eb7c = 0x3f800000;
      DAT_0045eba0 = 0x3ff0000000000000;
      DAT_0045ebc8 = 0;
      DAT_0045ebd0 = 0x3ff0000000000000;
      DAT_0045ebb8 = 0x3ff0000000000000;
      DAT_0045ebc0 = 0;
      DAT_0045ebd8 = 0;
      DAT_0045ebe0 = 0;
      DAT_0045ebe8 = 0;
      DAT_0045eba8 = 0;
      DAT_0045ebb0 = 0;
      uGpffff91f4 = uGpffff8ce0;
      DAT_0045ec28 = 0;
      DAT_0045ec10 = 0x3ff0000000000000;
      DAT_0045ec18 = 0;
      DAT_0045ec20 = 0;
      DAT_0045ec30 = 0;
      DAT_0045ec34 = 0x3ff00000;
      DAT_0045ec38 = 0;
      DAT_0045ec3c = 0;
      DAT_0045ebf0 = 0x3ff0000000000000;
      DAT_0045ebf8 = 0;
      DAT_0045ec00 = 0;
      DAT_0045ec08 = 0;
      DAT_0045ec40 = 0;
      DAT_0045ec44 = 0;
      DAT_0045ec48 = 0;
      DAT_0045ec4c = 0;
      DAT_0045ec50 = 0;
      DAT_0045ec54 = 0;
      DAT_0045ec58 = 0;
      DAT_0045ec5c = 0x3ff00000;
      DAT_0045ec60 = 0;
      DAT_0045ec64 = 0;
      DAT_0045ec68 = 0;
      DAT_0045ec6c = 0;
      DAT_0045ec70 = 0;
      DAT_0045ec74 = 0;
      DAT_0045ec78 = 0;
      DAT_0045ec7c = 0;
      DAT_0045ec80 = 0;
      DAT_0045ec84 = 0x3ff00000;
      DAT_0045ec88 = 0;
      DAT_0045ec8c = 0;
      DAT_0045ec90 = 0;
      DAT_0045ec94 = 0;
      DAT_0045ec98 = 0;
      DAT_0045ec9c = 0;
      DAT_0045eca0 = 0;
      DAT_0045eca4 = 0;
      DAT_0045eca8 = 0;
      DAT_0045ecac = 0x3ff00000;
    }
  }
  return;
}


// ==== FUN_003420a8 @ 003420a8 ====

void FUN_003420a8(void)

{
  FUN_00341d20(1,0xffff);
  return;
}


// ==== FUN_003420c8 @ 003420c8 ====

void FUN_003420c8(void)

{
  FUN_00341d20(0,0xffff);
  return;
}


// ==== FUN_003420e8 @ 003420e8 ====

undefined8 FUN_003420e8(undefined8 param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  puVar8 = (undefined4 *)param_1;
  *puVar8 = &DAT_003f15d0;
  DAT_003f15b4 = puVar8;
  puVar8[2] = param_3;
  *puVar8 = &DAT_003f15b8;
  puVar8[1] = param_2;
  (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  puVar8[5] = 0;
  puVar8[6] = 0;
  iVar1 = *(int *)puVar8[1];
  uStack_c0 = 0;
  uStack_b8 = 0;
  iVar1 = (**(code **)(iVar1 + 0xc))
                    ((int)puVar8[1] + (int)*(short *)(iVar1 + 8),puVar8[2] * 0x28 + 4,&uStack_c0);
  puVar8[3] = iVar1;
  puVar4 = puVar8 + 0xc;
  if ((iVar1 != 0) && (iVar7 = puVar8[2] + -1, iVar6 = iVar1, puVar8[2] != 0)) {
    do {
      FUN_003429b0(iVar6);
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + 0x28;
    } while (iVar7 != -1);
  }
  uVar5 = 0;
  puVar8[4] = iVar1;
  puVar8[7] = puVar8[2];
  if (puVar8[2] != 0) {
    iVar6 = 0;
    iVar1 = 0;
    do {
      if (uVar5 == 0) {
        iVar7 = puVar8[2];
      }
      else {
        *(int *)(iVar1 + puVar8[4] + 4) = iVar1 + puVar8[4] + -0x28;
        iVar7 = puVar8[2];
      }
      if (uVar5 < iVar7 - 1U) {
        *(int *)(iVar6 + puVar8[4]) = (int)((int *)(iVar6 + puVar8[4]) + 10);
        uVar2 = puVar8[2];
      }
      else {
        uVar2 = puVar8[2];
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x28;
      iVar1 = iVar1 + 0x28;
    } while (uVar5 < uVar2);
  }
  uVar5 = 0;
  do {
    *puVar4 = 0;
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 < 0x400);
  uStack_b0 = 2;
  puVar8[9] = (int)param_4;
  uStack_ac = 0x10;
  uStack_a8 = 0;
  uStack_c0 = 0x1000000002;
  uStack_b8 = 0;
  iVar1 = *(int *)puVar8[1];
  uVar3 = (**(code **)(iVar1 + 0xc))((int)puVar8[1] + (int)*(short *)(iVar1 + 8),param_4,&uStack_c0)
  ;
  puVar8[8] = uVar3;
  FUN_003425e0(param_1);
  return param_1;
}


// ==== FUN_00342390 @ 00342390 ====

void FUN_00342390(undefined8 param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003f15b8;
  iVar1 = *(int *)puVar4[1];
  (**(code **)(iVar1 + 0x14))((int)puVar4[1] + (int)*(short *)(iVar1 + 0x10),puVar4[8],0);
  puVar4[8] = 0;
  if (puVar4[2] != 0) {
    uVar3 = 1;
    do {
      bVar2 = uVar3 < (uint)puVar4[2];
      uVar3 = uVar3 + 1;
    } while (bVar2);
  }
  iVar1 = *(int *)puVar4[1];
  (**(code **)(iVar1 + 0x14))((int)puVar4[1] + (int)*(short *)(iVar1 + 0x10),puVar4[3],0);
  puVar4[3] = 0;
  iVar1 = *(int *)puVar4[1];
  (**(code **)(iVar1 + 0x24))((int)puVar4[1] + (int)*(short *)(iVar1 + 0x20));
  *puVar4 = &DAT_003f15d0;
  DAT_003f15b4 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_00342478 @ 00342478 ====

bool FUN_00342478(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 *param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  
  iVar6 = (int)param_1;
  *(int *)(iVar6 + 0x1034) = *(int *)(iVar6 + 0x1034) + 1;
  uStack_80 = param_2;
  uStack_7c = param_3;
  uStack_78 = param_4;
  iStack_74 = param_5;
  uVar4 = FUN_003426a8(param_1,&uStack_80);
  puVar2 = (undefined4 *)FUN_003426c8(param_1,uVar4,&uStack_80);
  bVar1 = puVar2 != (undefined4 *)0x0;
  if (bVar1) {
    *(int *)(iVar6 + 0x1038) = *(int *)(iVar6 + 0x1038) + 1;
  }
  else {
    iVar5 = (0x32 - param_5) * -0x20 + 0x670;
    *(int *)(iVar6 + 0x103c) = *(int *)(iVar6 + 0x103c) + 1;
    iVar3 = FUN_00342788(param_1,iVar5);
    puVar2 = *(undefined4 **)(iVar6 + 0x10);
    puVar2[6] = *(int *)(iVar6 + 0x20) + iVar3;
    puVar2[7] = iVar5;
    *(ulong *)(puVar2 + 2) = CONCAT44(uStack_7c,uStack_80);
    *(ulong *)(puVar2 + 4) = CONCAT44(iStack_74,uStack_78);
    *(undefined4 *)(iVar6 + 0x10) = *puVar2;
    *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + -1;
    *puVar2 = 0;
    puVar2[1] = *(undefined4 *)(iVar6 + 0x18);
    if (*(int *)(iVar6 + 0x14) == 0) {
      *(undefined4 **)(iVar6 + 0x14) = puVar2;
    }
    else {
      **(undefined4 **)(iVar6 + 0x18) = puVar2;
    }
    *(undefined4 **)(iVar6 + 0x18) = puVar2;
    *(int *)(iVar6 + 0x1030) = *(int *)(iVar6 + 0x1030) + 1;
    FUN_00342758(param_1,puVar2,uVar4);
  }
  *param_6 = puVar2[6];
  return bVar1;
}


// ==== FUN_003425e0 @ 003425e0 ====

void FUN_003425e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = 0;
  do {
    iVar3 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    iVar4 = *(int *)(param_1 + 0x30 + iVar3);
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x20);
      while( true ) {
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x20) = 0;
        if (iVar1 == 0) break;
        iVar4 = iVar1;
        iVar1 = *(int *)(iVar1 + 0x20);
      }
    }
    *(undefined4 *)(param_1 + 0x30 + iVar3) = 0;
  } while (uVar5 < 0x400);
  piVar6 = *(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    do {
      piVar6[1] = 0;
      piVar2 = (int *)*piVar6;
      *piVar6 = *(int *)(param_1 + 0x10);
      *(int **)(*(int *)(param_1 + 0x10) + 4) = piVar6;
      *(int **)(param_1 + 0x10) = piVar6;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      piVar6 = piVar2;
    } while (piVar2 != (int *)0x0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1040) = 0;
  *(undefined4 *)(param_1 + 0x103c) = 0;
  *(undefined4 *)(param_1 + 0x1038) = 0;
  *(undefined4 *)(param_1 + 0x1034) = 0;
  *(undefined4 *)(param_1 + 0x1030) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


// ==== FUN_003426a8 @ 003426a8 ====

uint FUN_003426a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_003429e8(param_2);
  return uVar1 >> 0x16;
}


// ==== FUN_003426c8 @ 003426c8 ====

int FUN_003426c8(int param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + param_2 * 4 + 0x30);
  bVar1 = false;
  if (iVar4 != 0) {
    do {
      lVar3 = FUN_00394e90(iVar4 + 8,param_3);
      if (lVar3 == 0) {
        *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + 1;
        iVar4 = *(int *)(iVar4 + 0x20);
      }
      else {
        bVar1 = true;
      }
    } while ((iVar4 != 0) && (!bVar1));
  }
  iVar2 = 0;
  if (bVar1) {
    iVar2 = iVar4;
  }
  return iVar2;
}


// ==== FUN_00342758 @ 00342758 ====

void FUN_00342758(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x30 + param_3 * 4);
  iVar1 = *piVar2;
  *piVar2 = param_2;
  *(undefined4 *)(param_2 + 0x24) = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x24) = param_2;
    *(int *)(param_2 + 0x20) = iVar1;
    return;
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}


// ==== FUN_00342788 @ 00342788 ====

void FUN_00342788(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  if (*(uint *)(iVar4 + 0x24) < *(int *)(iVar4 + 0x28) + param_2) {
    piVar3 = *(int **)(iVar4 + 0x14);
    if ((uint)piVar3[6] < (uint)(*(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x28))) {
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
    else {
      iVar5 = *piVar3;
      while( true ) {
        *(int *)(iVar4 + 0x14) = iVar5;
        *(undefined4 *)(iVar5 + 4) = 0;
        piVar3[1] = *(int *)(iVar4 + 0x18);
        **(undefined4 **)(iVar4 + 0x18) = piVar3;
        *piVar3 = 0;
        *(int **)(iVar4 + 0x18) = piVar3;
        piVar3 = *(int **)(iVar4 + 0x14);
        if ((uint)piVar3[6] < (uint)(*(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x28))) break;
        iVar5 = *piVar3;
      }
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar4 + 0x28) = 0;
    uVar2 = *(uint *)(iVar4 + 0x2c);
  }
  else {
    uVar2 = *(uint *)(iVar4 + 0x2c);
  }
  iVar5 = 0;
  if (uVar2 < param_2) {
    while( true ) {
      if (((param_2 <= (uint)(iVar5 + *(int *)(iVar4 + 0x2c))) || (*(int *)(iVar4 + 0x14) == 0)) ||
         (*(uint *)(*(int *)(iVar4 + 0x14) + 0x18) <
          (uint)(*(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x28)))) break;
      iVar1 = FUN_003428c8(param_1);
      iVar5 = iVar5 + iVar1;
    }
    if (iVar5 == 0) goto LAB_003428a0;
    iVar5 = *(int *)(iVar4 + 0x2c) + (iVar5 - param_2);
  }
  else {
    iVar5 = uVar2 - param_2;
  }
  *(int *)(iVar4 + 0x2c) = iVar5;
LAB_003428a0:
  *(uint *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + param_2;
  return;
}


// ==== FUN_003428c8 @ 003428c8 ====

int FUN_003428c8(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  piVar1 = *(int **)(iVar3 + 0x14);
  iVar2 = *piVar1;
  *(int *)(iVar3 + 0x14) = iVar2;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar3 + 0x1030) = *(int *)(iVar3 + 0x1030) + -1;
  piVar1[1] = 0;
  *piVar1 = *(int *)(iVar3 + 0x10);
  *(int **)(*(int *)(iVar3 + 0x10) + 4) = piVar1;
  *(int **)(iVar3 + 0x10) = piVar1;
  *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
  FUN_00342938(param_1,piVar1);
  return piVar1[7];
}


// ==== FUN_00342938 @ 00342938 ====

void FUN_00342938(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_003426a8(param_1,param_2 + 8);
  piVar3 = (int *)((int)param_1 + 0x30 + iVar1 * 4);
  if (*piVar3 == param_2) {
    *piVar3 = *(int *)(param_2 + 0x20);
  }
  else {
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x20);
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x24) = *(undefined4 *)(param_2 + 0x24);
      uVar2 = *(undefined4 *)(param_2 + 0x20);
    }
    *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x20) = uVar2;
  }
  return;
}


// ==== FUN_003429b0 @ 003429b0 ====

undefined8 FUN_003429b0(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return param_1;
}


// ==== FUN_003429e8 @ 003429e8 ====

void FUN_003429e8(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0035c6ec(&uStack_30,0,0xc);
  uStack_30 = *(undefined4 *)param_1;
  uStack_2c = *(undefined4 *)((int)param_1 + 4);
  uStack_40 = *param_1;
  uStack_28 = CONCAT22(*(undefined2 *)((int)param_1 + 0xc),*(undefined2 *)(param_1 + 1));
  uStack_38 = uStack_28;
  FUN_00352a90(&uStack_40,0xc);
  return;
}


// ==== FUN_00342a60 @ 00342a60 ====

void FUN_00342a60(void)

{
  FUN_00352a30();
  return;
}


// ==== FUN_00342a80 @ 00342a80 ====

void FUN_00342a80(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int aiStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  piVar8 = (int *)param_2;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lVar3 = (**(code **)(*piVar8 + 0xc))((int)piVar8 + (int)*(short *)(*piVar8 + 8),0x14,&uStack_a0);
  if (lVar3 != 0) {
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    FUN_00394ee0(lVar3,param_2,&uStack_90);
    *(int *)(param_1 + 0x24) = (int)lVar3;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lVar3 = (**(code **)(*piVar8 + 0xc))((int)piVar8 + (int)*(short *)(*piVar8 + 8),0x14,&uStack_a0);
  if (lVar3 != 0) {
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    FUN_003951d8(lVar3,param_2,&uStack_a0);
    *(int *)(param_1 + 0x28) = (int)lVar3;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lVar3 = (**(code **)(*piVar8 + 0xc))((int)piVar8 + (int)*(short *)(*piVar8 + 8),0x14,&uStack_a0);
  if (lVar3 != 0) {
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    FUN_003954d0(lVar3,param_2,&uStack_a0);
    *(int *)(param_1 + 0x2c) = (int)lVar3;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lVar3 = (**(code **)(*piVar8 + 0xc))((int)piVar8 + (int)*(short *)(*piVar8 + 8),0x18,&uStack_a0);
  puVar7 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    aiStack_80[0] = 0;
    aiStack_80[1] = 0;
    piVar6 = aiStack_80;
    aiStack_80[2] = 0;
    puVar7[5] = piVar8;
    (**(code **)(*piVar8 + 0x1c))((int)piVar8 + (int)*(short *)(*piVar8 + 0x18));
    if ((aiStack_80[0] == 0) && (aiStack_80[2] == 0)) {
      puVar7[4] = 0;
    }
    else {
      iVar1 = 0;
      piVar5 = piVar6;
      do {
        piVar5 = (int *)piVar5[2];
        iVar1 = iVar1 + 1;
      } while (piVar5 != (int *)0x0);
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      puVar2 = (undefined8 *)
               (**(code **)(*piVar8 + 0xc))
                         ((int)piVar8 + (int)*(short *)(*piVar8 + 8),iVar1 * 0xc,&uStack_70);
      puVar4 = puVar2;
      while( true ) {
        iVar1 = piVar6[2];
        *puVar4 = *(undefined8 *)piVar6;
        *(int *)(puVar4 + 1) = iVar1;
        piVar6 = (int *)piVar6[2];
        if (piVar6 == (int *)0x0) break;
        *(undefined8 **)(puVar4 + 1) = (undefined8 *)((int)puVar4 + 0xc);
        puVar4 = (undefined8 *)((int)puVar4 + 0xc);
      }
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar7[4] = puVar2;
    }
    puVar7[3] = piVar8;
    (**(code **)(*piVar8 + 0x1c))((int)piVar8 + (int)*(short *)(*piVar8 + 0x18));
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[2] = 0;
    *(undefined4 **)(param_1 + 0x20) = puVar7;
  }
  return;
}


// ==== FUN_00342d48 @ 00342d48 ====

void FUN_00342d48(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_00395130(*(undefined4 *)(param_1 + 0x24),2);
  FUN_00395428(*(undefined4 *)(param_1 + 0x28),2);
  FUN_00395720(*(undefined4 *)(param_1 + 0x2c),2);
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 == 0) {
    piVar1[1] = 0;
  }
  else {
    do {
      piVar1[1] = *(int *)(*piVar1 + 4);
      iVar2 = *(int *)piVar1[3];
      (**(code **)(iVar2 + 0x14))(piVar1[3] + (int)*(short *)(iVar2 + 0x10),*piVar1,0);
      *piVar1 = piVar1[1];
    } while (piVar1[1] != 0);
    piVar1[1] = 0;
  }
  *piVar1 = 0;
  piVar1[2] = 0;
  iVar2 = *(int *)piVar1[3];
  (**(code **)(iVar2 + 0x24))(piVar1[3] + (int)*(short *)(iVar2 + 0x20));
  if (piVar1[4] != 0) {
    iVar2 = *(int *)piVar1[5];
    (**(code **)(iVar2 + 0x14))(piVar1[5] + (int)*(short *)(iVar2 + 0x10),piVar1[4],0);
  }
  iVar2 = *(int *)piVar1[5];
  (**(code **)(iVar2 + 0x24))(piVar1[5] + (int)*(short *)(iVar2 + 0x20));
  (**(code **)(*param_2 + 0x14))
            ((int)param_2 + (int)*(short *)(*param_2 + 0x10),*(undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  (**(code **)(*param_2 + 0x14))
            ((int)param_2 + (int)*(short *)(*param_2 + 0x10),*(undefined4 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  (**(code **)(*param_2 + 0x14))
            ((int)param_2 + (int)*(short *)(*param_2 + 0x10),*(undefined4 *)(param_1 + 0x2c),0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  (**(code **)(*param_2 + 0x14))
            ((int)param_2 + (int)*(short *)(*param_2 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00342ed8 @ 00342ed8 ====

void FUN_00342ed8(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [16];
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  
  uStack_4c = (undefined4)param_2;
  auStack_48[0] = param_3;
  iStack_50 = FUN_00342a60(param_2);
  iVar2 = **(int **)(param_1 + 0x24);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    iVar3 = iVar4;
    while( true ) {
      if (iStack_50 < iVar1) {
        iVar2 = *(int *)(iVar2 + 8);
        iVar4 = iVar3;
      }
      else {
        iVar4 = iVar2;
        if (iVar1 < iStack_50) {
          iVar2 = *(int *)(iVar2 + 0xc);
          iVar4 = iVar3;
        }
      }
      if ((iVar2 == 0) || (iVar4 != 0)) break;
      iVar1 = *(int *)(iVar2 + 0x10);
      iVar3 = iVar4;
    }
  }
  if (iVar4 == 0) {
    FUN_00395c18(auStack_60,*(undefined4 *)(param_1 + 0x28),&iStack_50,&uStack_4c);
    FUN_00396098(auStack_60,*(undefined4 *)(param_1 + 0x24),&iStack_50,auStack_48);
  }
  return;
}


// ==== FUN_00342fa8 @ 00342fa8 ====

void FUN_00342fa8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [16];
  int iStack_20;
  undefined4 auStack_1c [3];
  
  iVar5 = 0;
  iVar2 = **(int **)(param_1 + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x10);
    iVar4 = iVar5;
    while( true ) {
      if (param_2 < iVar3) {
        iVar2 = *(int *)(iVar2 + 8);
        iVar5 = iVar4;
      }
      else {
        iVar5 = iVar2;
        if (iVar3 < param_2) {
          iVar2 = *(int *)(iVar2 + 0xc);
          iVar5 = iVar4;
        }
      }
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        goto LAB_00343004;
      }
      if (iVar5 != 0) break;
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar4 = iVar5;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
LAB_00343004:
  if (iVar5 == 0) {
    iStack_20 = param_2;
    auStack_1c[0] = param_3;
    FUN_00396518(auStack_30,uVar1,&iStack_20,auStack_1c);
  }
  return;
}


// ==== FUN_00343030 @ 00343030 ====

void FUN_00343030(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x20);
  puVar4 = (undefined4 *)piVar1[4];
  iVar2 = *(int *)piVar1[3];
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_0046c608;
  }
  lVar3 = (**(code **)(iVar2 + 0xc))(piVar1[3] + (int)*(short *)(iVar2 + 8),0xc,puVar4);
  puVar4 = (undefined4 *)lVar3;
  if (lVar3 != 0) {
    puVar4[2] = 0;
    *puVar4 = param_2;
    puVar4[1] = 0;
  }
  if (piVar1[1] == 0) {
    *piVar1 = (int)puVar4;
    piVar1[1] = (int)puVar4;
  }
  else {
    *(undefined4 **)(piVar1[1] + 4) = puVar4;
    *(int *)(*(int *)(piVar1[1] + 4) + 8) = piVar1[1];
    piVar1[1] = *(int *)(piVar1[1] + 4);
  }
  piVar1[2] = piVar1[2] + 1;
  return;
}


// ==== FUN_003430d8 @ 003430d8 ====

void FUN_003430d8(int param_1,undefined8 param_2)

{
  undefined4 auStack_30 [4];
  
  auStack_30[0] = FUN_00342a60(param_2);
  FUN_00396548(*(undefined4 *)(param_1 + 0x28),auStack_30);
  FUN_00396858(*(undefined4 *)(param_1 + 0x24),auStack_30);
  return;
}


// ==== FUN_00343120 @ 00343120 ====

void FUN_00343120(int param_1,undefined4 param_2)

{
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_2;
  FUN_00396b68(*(undefined4 *)(param_1 + 0x2c),auStack_20);
  return;
}


// ==== FUN_00343148 @ 00343148 ====

void FUN_00343148(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = FUN_003433c8();
  piVar1 = *(int **)(param_1 + 0x20);
  piVar5 = (int *)*piVar1;
  while (piVar3 = piVar5, piVar3 != (int *)0x0) {
    if (iVar4 == *piVar3) {
      piVar5 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        piVar5 = (int *)piVar3[1];
      }
      if (piVar3 == (int *)*piVar1) {
        if (piVar3 == (int *)piVar1[1]) {
          piVar1[1] = 0;
          *piVar1 = 0;
        }
        else {
          iVar2 = piVar3[1];
          *piVar1 = iVar2;
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 8) = 0;
          }
        }
      }
      else if (piVar3 == (int *)piVar1[1]) {
        iVar2 = piVar3[2];
        piVar1[1] = iVar2;
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      else {
        *(int *)(piVar3[2] + 4) = piVar3[1];
        *(int *)(piVar3[1] + 8) = piVar3[2];
      }
      iVar2 = *(int *)piVar1[3];
      (**(code **)(iVar2 + 0x14))(piVar1[3] + (int)*(short *)(iVar2 + 0x10),piVar3,0);
      piVar1[2] = piVar1[2] + -1;
    }
    else {
      piVar5 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        piVar5 = (int *)piVar3[1];
      }
    }
  }
  return;
}


// ==== FUN_00343278 @ 00343278 ====

undefined4 FUN_00343278(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = **(int **)(param_1 + 0x28);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
    iVar4 = iVar5;
    while( true ) {
      if (param_2 < iVar1) {
        iVar3 = *(int *)(iVar3 + 8);
        iVar5 = iVar4;
      }
      else {
        iVar5 = iVar3;
        if (iVar1 < param_2) {
          iVar3 = *(int *)(iVar3 + 0xc);
          iVar5 = iVar4;
        }
      }
      if ((iVar3 == 0) || (iVar5 != 0)) break;
      iVar1 = *(int *)(iVar3 + 0x10);
      iVar4 = iVar5;
    }
  }
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = *(undefined4 *)(iVar5 + 0x14);
  }
  return uVar2;
}


// ==== FUN_003432e8 @ 003432e8 ====

undefined4 FUN_003432e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = **(int **)(param_1 + 0x24);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
    iVar4 = iVar5;
    while( true ) {
      if (param_2 < iVar1) {
        iVar3 = *(int *)(iVar3 + 8);
        iVar5 = iVar4;
      }
      else {
        iVar5 = iVar3;
        if (iVar1 < param_2) {
          iVar3 = *(int *)(iVar3 + 0xc);
          iVar5 = iVar4;
        }
      }
      if ((iVar3 == 0) || (iVar5 != 0)) break;
      iVar1 = *(int *)(iVar3 + 0x10);
      iVar4 = iVar5;
    }
  }
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = *(undefined4 *)(iVar5 + 0x14);
  }
  return uVar2;
}


// ==== FUN_00343358 @ 00343358 ====

undefined4 FUN_00343358(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = **(int **)(param_1 + 0x2c);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
    iVar4 = iVar5;
    while( true ) {
      if (param_2 < iVar1) {
        iVar3 = *(int *)(iVar3 + 8);
        iVar5 = iVar4;
      }
      else {
        iVar5 = iVar3;
        if (iVar1 < param_2) {
          iVar3 = *(int *)(iVar3 + 0xc);
          iVar5 = iVar4;
        }
      }
      if ((iVar3 == 0) || (iVar5 != 0)) break;
      iVar1 = *(int *)(iVar3 + 0x10);
      iVar4 = iVar5;
    }
  }
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = *(undefined4 *)(iVar5 + 0x14);
  }
  return uVar2;
}


// ==== FUN_003433c8 @ 003433c8 ====

undefined4 FUN_003433c8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((param_2 < 0) || (iVar2 = FUN_00343508(), iVar2 <= param_2)) {
    uVar3 = 0;
  }
  else {
    iVar2 = 0;
    puVar4 = (undefined4 *)**(int **)(param_1 + 0x20);
    if ((puVar4 != (undefined4 *)0x0) && (0 < param_2)) {
      do {
        puVar1 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar4[1];
        }
        puVar4 = puVar1;
        iVar2 = iVar2 + 1;
      } while ((puVar4 != (undefined4 *)0x0) && (iVar2 < param_2));
    }
    uVar3 = *puVar4;
  }
  return uVar3;
}


// ==== FUN_00343470 @ 00343470 ====

bool FUN_00343470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = **(int **)(param_1 + 0x24);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    iVar3 = iVar4;
    while( true ) {
      if (param_2 < iVar1) {
        iVar2 = *(int *)(iVar2 + 8);
        iVar4 = iVar3;
      }
      else {
        iVar4 = iVar2;
        if (iVar1 < param_2) {
          iVar2 = *(int *)(iVar2 + 0xc);
          iVar4 = iVar3;
        }
      }
      if ((iVar2 == 0) || (iVar4 != 0)) break;
      iVar1 = *(int *)(iVar2 + 0x10);
      iVar3 = iVar4;
    }
  }
  return iVar4 != 0;
}


// ==== FUN_00343508 @ 00343508 ====

undefined4 FUN_00343508(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
}


// ==== FUN_00343518 @ 00343518 ====

void FUN_00343518(int param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iStack_50;
  
  iVar1 = **(int **)(param_1 + 0x28);
  iVar3 = 0;
  if ((iVar1 != 0) && (iVar3 = iVar1, *(int *)(iVar1 + 8) != 0)) {
    for (iVar3 = *(int *)(iVar1 + 8); *(int *)(iVar3 + 8) != 0; iVar3 = *(int *)(iVar3 + 8)) {
    }
  }
LAB_00343620:
  do {
    do {
      while( true ) {
        while( true ) {
          do {
            iStack_50 = iVar3;
            if ((iStack_50 == 0) ||
               (lVar2 = (*param_2)(*(undefined4 *)(iStack_50 + 0x10),
                                   *(undefined4 *)(iStack_50 + 0x14),param_3), lVar2 == 0)) {
              return;
            }
            iVar3 = iStack_50;
          } while (iStack_50 == 0);
          iVar3 = *(int *)(iStack_50 + 0xc);
          if (iVar3 == 0) break;
          iVar1 = *(int *)(iVar3 + 8);
          while (iVar1 != 0) {
            iVar3 = *(int *)(iVar3 + 8);
            iVar1 = *(int *)(iVar3 + 8);
          }
        }
        iVar3 = *(int *)(iStack_50 + 4);
        if (iVar3 != 0) break;
        iStack_50 = 0;
        iVar3 = iStack_50;
      }
    } while ((*(int *)(iVar3 + 8) == iStack_50) ||
            (*(int *)(iStack_50 + 0x10) <= *(int *)(iVar3 + 0x10)));
    for (iVar3 = *(int *)(iVar3 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if (*(int *)(iStack_50 + 0x10) <= *(int *)(iVar3 + 0x10)) goto LAB_00343620;
    }
    iStack_50 = 0;
    iVar3 = iStack_50;
  } while( true );
}


// ==== FUN_00343658 @ 00343658 ====

void FUN_00343658(int param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iStack_50;
  
  iVar1 = **(int **)(param_1 + 0x24);
  iVar3 = 0;
  if ((iVar1 != 0) && (iVar3 = iVar1, *(int *)(iVar1 + 8) != 0)) {
    for (iVar3 = *(int *)(iVar1 + 8); *(int *)(iVar3 + 8) != 0; iVar3 = *(int *)(iVar3 + 8)) {
    }
  }
LAB_00343760:
  do {
    do {
      while( true ) {
        while( true ) {
          do {
            iStack_50 = iVar3;
            if ((iStack_50 == 0) ||
               (lVar2 = (*param_2)(*(undefined4 *)(iStack_50 + 0x10),
                                   *(undefined4 *)(iStack_50 + 0x14),param_3), lVar2 == 0)) {
              return;
            }
            iVar3 = iStack_50;
          } while (iStack_50 == 0);
          iVar3 = *(int *)(iStack_50 + 0xc);
          if (iVar3 == 0) break;
          iVar1 = *(int *)(iVar3 + 8);
          while (iVar1 != 0) {
            iVar3 = *(int *)(iVar3 + 8);
            iVar1 = *(int *)(iVar3 + 8);
          }
        }
        iVar3 = *(int *)(iStack_50 + 4);
        if (iVar3 != 0) break;
        iStack_50 = 0;
        iVar3 = iStack_50;
      }
    } while ((*(int *)(iVar3 + 8) == iStack_50) ||
            (*(int *)(iStack_50 + 0x10) <= *(int *)(iVar3 + 0x10)));
    for (iVar3 = *(int *)(iVar3 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if (*(int *)(iStack_50 + 0x10) <= *(int *)(iVar3 + 0x10)) goto LAB_00343760;
    }
    iStack_50 = 0;
    iVar3 = iStack_50;
  } while( true );
}


// ==== FUN_00343798 @ 00343798 ====

void FUN_00343798(int param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iStack_50;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  iVar3 = 0;
  if ((iVar1 != 0) && (iVar3 = iVar1, *(int *)(iVar1 + 8) != 0)) {
    for (iVar3 = *(int *)(iVar1 + 8); *(int *)(iVar3 + 8) != 0; iVar3 = *(int *)(iVar3 + 8)) {
    }
  }
LAB_003438a0:
  do {
    do {
      while( true ) {
        while( true ) {
          do {
            iStack_50 = iVar3;
            if ((iStack_50 == 0) ||
               (lVar2 = (*param_2)(*(undefined4 *)(iStack_50 + 0x10),
                                   *(undefined4 *)(iStack_50 + 0x14),param_3), lVar2 == 0)) {
              return;
            }
            iVar3 = iStack_50;
          } while (iStack_50 == 0);
          iVar3 = *(int *)(iStack_50 + 0xc);
          if (iVar3 == 0) break;
          iVar1 = *(int *)(iVar3 + 8);
          while (iVar1 != 0) {
            iVar3 = *(int *)(iVar3 + 8);
            iVar1 = *(int *)(iVar3 + 8);
          }
        }
        iVar3 = *(int *)(iStack_50 + 4);
        if (iVar3 != 0) break;
        iStack_50 = 0;
        iVar3 = iStack_50;
      }
    } while ((*(int *)(iVar3 + 8) == iStack_50) ||
            (*(int *)(iStack_50 + 0x10) <= *(int *)(iVar3 + 0x10)));
    for (iVar3 = *(int *)(iVar3 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if (*(int *)(iStack_50 + 0x10) <= *(int *)(iVar3 + 0x10)) goto LAB_003438a0;
    }
    iStack_50 = 0;
    iVar3 = iStack_50;
  } while( true );
}


// ==== FUN_003438d8 @ 003438d8 ====

void FUN_003438d8(void)

{
  return;
}


// ==== FUN_003438e0 @ 003438e0 ====

undefined8 FUN_003438e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 in_zero_qw [16];
  undefined1 in_t1_qw [16];
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [64];
  undefined4 auStack_60 [4];
  
  auStack_60[0] = param_4;
  FUN_00343fe0(auStack_b0,param_3);
  pauVar1 = (undefined1 (*) [16])((int)param_1 + 0x10);
  FUN_00343c60(param_1,param_2,auStack_b0,auStack_60);
  FUN_00343e08(pauVar1,(int)param_2 + 0x10,auStack_a0,auStack_60);
  auVar3 = _lqc2(auStack_b0);
  auVar4 = _lqc2(auStack_b0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar3 = _qmtc2(auVar3._0_4_);
  _vdiv(in_vf0,0,auVar3,0);
  auVar3 = _lqc2(auStack_b0);
  auVar3 = _vsub(in_vf0,auVar3);
  uVar6 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar6);
  auVar3 = _sqc2(auVar3);
  auVar4 = _pcpyld(in_zero_qw,in_t1_qw);
  auVar4._0_8_ = 0xffffffff80000000;
  auVar5 = _ppacw(auVar4,auVar4);
  auVar4 = _ppacw(auVar4,auVar5);
  auVar4 = _pxor(auVar3,auVar4);
  auVar3 = _lqc2(auVar3);
  auVar5 = _lqc2(*pauVar1);
  auVar2 = _vmul(auVar3,auVar5);
  _vsubabc(auVar2,auVar2);
  _vmsubabc(in_vf0,auVar2);
  _vmsubbc(in_vf0,auVar2);
  _vopmula(auVar3,auVar5);
  auVar2 = _vopmsub(auVar5,auVar3);
  _vmulabc(auVar5,auVar3);
  _vmaddabc(auVar3,auVar5);
  auVar3 = _vmaddbc(auVar2,in_vf0);
  auVar3 = _sqc2(auVar3);
  auVar3 = _lqc2(auVar3);
  auVar4 = _lqc2(auVar4);
  auVar5 = _vmul(auVar3,auVar4);
  _vsubabc(auVar5,auVar5);
  _vmsubabc(in_vf0,auVar5);
  _vmsubbc(in_vf0,auVar5);
  _vopmula(auVar3,auVar4);
  auVar5 = _vopmsub(auVar4,auVar3);
  _vmulabc(auVar4,auVar3);
  _vmaddabc(auVar3,auVar4);
  auVar3 = _vmaddbc(auVar5,in_vf0);
  auVar3 = _sqc2(auVar3);
  *pauVar1 = auVar3;
  return param_1;
}


// ==== FUN_00343a30 @ 00343a30 ====

undefined8 FUN_00343a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar1) [16];
  undefined1 in_t1_qw [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  
  if (in_t1_qw._0_8_ == 0) {
    FUN_00344118(param_1,param_2,param_3);
  }
  else {
    FUN_00343fc8(auStack_b0);
    FUN_00343fc8(auStack_90);
    FUN_00344118(auStack_b0);
    FUN_00344118(auStack_90,param_2,param_4);
    FUN_003440b8(param_1,auStack_b0,auStack_90);
  }
  pauVar1 = (undefined1 (*) [16])param_3;
  auVar3 = _lqc2(*pauVar1);
  auVar4 = _lqc2(*pauVar1);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar3 = _qmtc2(auVar3._0_4_);
  _vdiv(in_vf0,0,auVar3,0);
  auVar3 = _lqc2(*pauVar1);
  auVar3 = _vsub(in_vf0,auVar3);
  uVar6 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar6);
  auVar3 = _sqc2(auVar3);
  pauVar1 = (undefined1 (*) [16])((int)param_1 + 0x10);
  auVar4 = _pcpyld(in_zero_qw,in_t1_qw);
  auVar4._0_8_ = 0xffffffff80000000;
  auVar5 = _ppacw(auVar4,auVar4);
  auVar4 = _ppacw(auVar4,auVar5);
  auVar4 = _pxor(auVar3,auVar4);
  auVar3 = _lqc2(auVar3);
  auVar5 = _lqc2(*pauVar1);
  auVar2 = _vmul(auVar3,auVar5);
  _vsubabc(auVar2,auVar2);
  _vmsubabc(in_vf0,auVar2);
  _vmsubbc(in_vf0,auVar2);
  _vopmula(auVar3,auVar5);
  auVar2 = _vopmsub(auVar5,auVar3);
  _vmulabc(auVar5,auVar3);
  _vmaddabc(auVar3,auVar5);
  auVar3 = _vmaddbc(auVar2,in_vf0);
  auVar3 = _sqc2(auVar3);
  auVar3 = _lqc2(auVar3);
  auVar4 = _lqc2(auVar4);
  auVar5 = _vmul(auVar3,auVar4);
  _vsubabc(auVar5,auVar5);
  _vmsubabc(in_vf0,auVar5);
  _vmsubbc(in_vf0,auVar5);
  _vopmula(auVar3,auVar4);
  auVar5 = _vopmsub(auVar4,auVar3);
  _vmulabc(auVar4,auVar3);
  _vmaddabc(auVar3,auVar4);
  auVar3 = _vmaddbc(auVar5,in_vf0);
  auVar3 = _sqc2(auVar3);
  *pauVar1 = auVar3;
  return param_1;
}


// ==== FUN_00343bc0 @ 00343bc0 ====

undefined8 FUN_00343bc0(float param_1,float param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4;
  *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) * param_1;
  *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) * param_2;
  *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) * param_3;
  return param_4;
}


// ==== FUN_00343c28 @ 00343c28 ====

long FUN_00343c28(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00344020();
  }
  return param_1;
}


// ==== FUN_00343c60 @ 00343c60 ====

void FUN_00343c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  undefined4 *puVar1;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [2];
  float fStack_60;
  float fStack_5c;
  float afStack_58 [2];
  
  if ((*param_4 & 0x38) == 0) {
    puVar1 = (undefined4 *)param_1;
    *puVar1 = 0;
    puVar1[3] = 0x3f800000;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = (undefined4 *)param_3;
    puVar1[3] = 0x3f800000;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    FUN_00352210(param_3,&fStack_5c,&fStack_60,afStack_58);
    FUN_00352210(param_2,&fStack_6c,&fStack_70,afStack_68);
    if (((ulong)(long)(int)*param_4 >> 3 & 1) == 0) {
      fStack_80 = 0.0;
    }
    else {
      fStack_80 = fStack_70 - fStack_60;
      fStack_70 = fStack_60;
    }
    if ((*param_4 & 0x1000) == 0) {
      fStack_60 = 0.0;
    }
    else {
      fStack_70 = 0.0;
    }
    if (((ulong)(long)(int)*param_4 >> 4 & 1) == 0) {
      fStack_7c = 0.0;
    }
    else {
      fStack_7c = fStack_6c - fStack_5c;
      fStack_6c = fStack_5c;
    }
    if ((*param_4 & 0x2000) == 0) {
      fStack_5c = 0.0;
    }
    else {
      fStack_6c = 0.0;
    }
    if (((ulong)(long)(int)*param_4 >> 5 & 1) == 0) {
      fStack_78 = 0.0;
    }
    else {
      fStack_78 = afStack_68[0] - afStack_58[0];
      afStack_68[0] = afStack_58[0];
    }
    if ((*param_4 & 0x4000) == 0) {
      afStack_58[0] = 0.0;
    }
    else {
      afStack_68[0] = 0.0;
    }
    FUN_00352098(fStack_7c,fStack_80,fStack_78,param_1);
    FUN_00352098(fStack_6c,fStack_70,afStack_68[0],param_2);
    FUN_00352098(fStack_5c,fStack_60,afStack_58[0],param_3);
  }
  return;
}


// ==== FUN_00343e08 @ 00343e08 ====

void FUN_00343e08(float *param_1,float *param_2,float *param_3,uint *param_4)

{
  if ((*param_4 & 1) == 0) {
    *param_1 = 0.0;
  }
  else {
    *param_1 = *param_2 - *param_3;
    *param_2 = *param_3;
  }
  if (((ulong)(long)(int)*param_4 >> 1 & 1) == 0) {
    param_1[1] = 0.0;
  }
  else {
    param_1[1] = param_2[1] - param_3[1];
    param_2[1] = param_3[1];
  }
  if (((ulong)(long)(int)*param_4 >> 2 & 1) == 0) {
    param_1[2] = 0.0;
  }
  else {
    param_1[2] = param_2[2] - param_3[2];
    param_2[2] = param_3[2];
  }
  if ((*param_4 & 0x200) == 0) {
    *param_3 = 0.0;
  }
  else {
    *param_2 = 0.0;
  }
  if ((*param_4 & 0x400) == 0) {
    param_3[1] = 0.0;
  }
  else {
    param_2[1] = 0.0;
  }
  if ((*param_4 & 0x800) != 0) {
    param_2[2] = 0.0;
    return;
  }
  param_3[2] = 0.0;
  return;
}


// ==== FUN_00343ed0 @ 00343ed0 ====

void FUN_00343ed0(long param_1)

{
  if (DAT_003d1b7c != (int *)0x0) {
    (**(code **)(*DAT_003d1b7c + 0x24))((int)DAT_003d1b7c + (int)*(short *)(*DAT_003d1b7c + 0x20));
  }
  DAT_003d1b7c = (int *)param_1;
  if (param_1 != 0) {
    (**(code **)(*DAT_003d1b7c + 0x1c))((int)DAT_003d1b7c + (int)*(short *)(*DAT_003d1b7c + 0x18));
  }
  return;
}


// ==== FUN_00343f38 @ 00343f38 ====

undefined4 FUN_00343f38(void)

{
  return DAT_003d1b7c;
}


// ==== FUN_00343f48 @ 00343f48 ====

void FUN_00343f48(undefined8 param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  (**(code **)(*DAT_003d1b7c + 0xc))
            ((int)DAT_003d1b7c + (int)*(short *)(*DAT_003d1b7c + 8),param_1,&uStack_20);
  return;
}


// ==== FUN_00343f90 @ 00343f90 ====

void FUN_00343f90(undefined8 param_1)

{
  (**(code **)(*DAT_003d1b7c + 0x14))
            ((int)DAT_003d1b7c + (int)*(short *)(*DAT_003d1b7c + 0x10),param_1,0);
  return;
}


// ==== FUN_00343fc8 @ 00343fc8 ====

void FUN_00343fc8(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  
  auVar1 = _sqc2(in_vf0);
  *param_1 = auVar1;
  auVar1 = _sqc2(in_vf0);
  param_1[1] = auVar1;
  return;
}


// ==== FUN_00343fe0 @ 00343fe0 ====

void FUN_00343fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}


// ==== FUN_00344008 @ 00344008 ====

void FUN_00344008(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  
  auVar1 = _sqc2(in_vf0);
  *param_1 = auVar1;
  auVar1 = _sqc2(in_vf0);
  param_1[1] = auVar1;
  return;
}


// ==== FUN_00344020 @ 00344020 ====

undefined8 FUN_00344020(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar2 = param_2[6];
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  puVar1[6] = uVar2;
  puVar1[7] = 0x3f800000;
  return param_1;
}


// ==== FUN_00344050 @ 00344050 ====

undefined4 FUN_00344050(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_2);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _vmul(auVar1,auVar2);
  _vaddabc(auVar1,auVar1);
  _vmaddabc(auVar3,auVar1);
  auVar1 = _vmaddbc(auVar3,auVar1);
  auVar2 = _qmfc2(auVar1._0_4_);
  auVar1 = _qmtc2(auVar2._0_4_);
  _vdiv(in_vf0,0,auVar1,0);
  auVar1 = _lqc2(*param_2);
  auVar1 = _vsub(in_vf0,auVar1);
  uVar4 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar4);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _lqc2(param_2[1]);
  _lqc2(param_1[1]);
  auVar1 = _vsub(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  param_1[1] = auVar1;
  return auVar2._0_4_;
}


// ==== FUN_003440b8 @ 003440b8 ====

void FUN_003440b8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar3 = _vmul(auVar1,auVar2);
  _vsubabc(auVar3,auVar3);
  _vmsubabc(in_vf0,auVar3);
  _vmsubbc(in_vf0,auVar3);
  _vopmula(auVar1,auVar2);
  auVar3 = _vopmsub(auVar2,auVar1);
  _vmulabc(auVar2,auVar1);
  _vmaddabc(auVar1,auVar2);
  auVar1 = _vmaddbc(auVar3,in_vf0);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _lqc2(param_2[1]);
  auVar2 = _lqc2(param_3[1]);
  _lqc2(param_1[1]);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  param_1[1] = auVar1;
  return;
}


// ==== FUN_00344118 @ 00344118 ====

undefined8 FUN_00344118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [32];
  
  FUN_00343fc8(auStack_60);
  FUN_00344050(auStack_60,param_3);
  FUN_003440b8(param_1,param_2,auStack_60);
  return param_1;
}


// ==== FUN_00344178 @ 00344178 ====

void FUN_00344178(undefined4 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vf20 [16];
  
  _lqc2(*param_3);
  _lqc2(*param_4);
  _qmtc2(param_1);
  _vcallms(0x330);
  _vnop();
  auVar1 = _sqc2(in_vf20);
  *param_2 = auVar1;
  auVar1 = _lqc2(param_3[1]);
  auVar2 = _lqc2(param_4[1]);
  auVar2 = _vsub(auVar2,auVar1);
  auVar3 = _qmtc2(param_1);
  _lqc2(param_2[1]);
  _vaddabc(auVar1,in_vf0);
  auVar1 = _vmaddbc(auVar2,auVar3);
  auVar1 = _sqc2(auVar1);
  param_2[1] = auVar1;
  return;
}


// ==== FUN_003441d0 @ 003441d0 ====

uint * FUN_003441d0(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  *param_2 = uVar1 << 8;
  uVar2 = param_1[1];
  param_2[1] = uVar1 >> 0x10 & 0xff00 | uVar2 << 0x10;
  uVar1 = param_1[2];
  param_2[3] = uVar1 & 0xffffff00;
  param_2[2] = (uVar2 & 0xffff0000) >> 8 | uVar1 << 0x18;
  return param_1 + 3;
}


// ==== FUN_00344240 @ 00344240 ====

undefined1 * FUN_00344240(undefined1 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  switch(*param_1) {
  case 0:
    uVar1 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 4;
    goto LAB_00344380;
  case 1:
    puVar2 = param_1 + 4;
    for (iVar3 = (uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100; iVar3 != 0;
        iVar3 = iVar3 + -1) {
      puVar2 = (undefined1 *)FUN_00344240(puVar2);
    }
    break;
  case 2:
  case 10:
    puVar2 = param_1 + 0x10;
    break;
  case 3:
  case 0xb:
    puVar2 = param_1 + 0x1c;
    break;
  case 4:
  case 0xc:
    puVar2 = param_1 + 0x28;
    break;
  case 5:
  case 0xd:
    puVar2 = param_1 + 0x34;
    break;
  case 6:
    uVar1 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 0xc;
    goto LAB_00344380;
  case 7:
    iVar3 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 3;
    goto LAB_00344378;
  case 8:
    iVar3 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 6;
    goto LAB_00344378;
  case 9:
  case 0x11:
    puVar2 = param_1 + 4;
    break;
  case 0xe:
    uVar1 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 0xc;
    goto LAB_00344380;
  case 0xf:
    iVar3 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 4;
    goto LAB_00344378;
  case 0x10:
    iVar3 = ((uint)(byte)param_1[1] + (uint)(byte)param_1[2] * 0x100) * 8;
LAB_00344378:
    uVar1 = iVar3 + 0x1bU & 0xfffffffc;
LAB_00344380:
    puVar2 = param_1 + uVar1 + 4;
    break;
  default:
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}


// ==== FUN_003443e0 @ 003443e0 ====

void FUN_003443e0(float param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [12];
  uint uVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 in_vf0 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 (*apauStack_90 [4]) [12];
  
  puVar1 = (undefined1 *)*param_2;
  apauStack_90[0] = (undefined1 (*) [12])(puVar1 + 4);
  pauVar22 = (undefined1 (*) [16])param_3;
  switch(*puVar1) {
  case 0:
    fVar26 = param_1 - (float)(int)param_1;
    fVar27 = *(float *)(*apauStack_90[0] + (int)param_1 * 4);
    if (fVar26 < 0.01) {
      *(float *)*pauVar22 = fVar27;
    }
    else {
      *(float *)*pauVar22 =
           fVar27 + fVar26 * (*(float *)((int)(*apauStack_90[0] + (int)param_1 * 4) + 4) - fVar27);
    }
    iVar25 = ((uint)(byte)puVar1[1] + (uint)(byte)puVar1[2] * 0x100) * 4;
    goto LAB_00345250;
  case 1:
    iVar24 = (uint)(byte)puVar1[1] + (uint)(byte)puVar1[2] * 0x100;
    iVar25 = 0;
    if (iVar24 != 0) {
      do {
        fVar27 = (float)((uint)(byte)(*apauStack_90[0])[1] +
                        (uint)(byte)(*apauStack_90[0])[2] * 0x100) - 1.0;
        if (param_1 <= fVar27) {
          FUN_003443e0(param_1,apauStack_90,param_3);
          iVar21 = iVar24 - (iVar25 + 1);
          if (iVar25 + 1 < iVar24) {
            do {
              iVar21 = iVar21 + -1;
              apauStack_90[0] = (undefined1 (*) [12])FUN_00344240(apauStack_90[0]);
            } while (iVar21 != 0);
          }
          break;
        }
        iVar25 = iVar25 + 1;
        apauStack_90[0] = (undefined1 (*) [12])FUN_00344240();
        param_1 = param_1 - fVar27;
      } while (iVar25 < iVar24);
    }
    break;
  case 2:
    puVar17 = *apauStack_90[0];
    apauStack_90[0] = (undefined1 (*) [12])(puVar1 + 0x10);
    *(undefined4 *)*pauVar22 = *(undefined4 *)puVar17;
    *(undefined4 *)(*pauVar22 + 4) = *(undefined4 *)(puVar1 + 8);
    *(undefined4 *)(*pauVar22 + 8) = *(undefined4 *)(puVar1 + 0xc);
    break;
  case 3:
    auStack_c0._0_12_ = *(undefined1 (*) [12])(puVar1 + 0x10);
    auVar28 = _lqc2(auStack_c0);
    auVar2._12_4_ = uStack_c4;
    auVar2._0_12_ = *apauStack_90[0];
    auVar29 = _lqc2(auVar2);
    _lqc2(*pauVar22);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar28,in_vf0);
    auVar28 = _vmaddbc(auVar29,auVar30);
    auVar28 = _sqc2(auVar28);
    *pauVar22 = auVar28;
    apauStack_90[0] = (undefined1 (*) [12])(puVar1 + 0x1c);
    break;
  case 4:
    auStack_c0._0_12_ = *(undefined1 (*) [12])(puVar1 + 0x10);
    _auStack_b0 = *(undefined1 (*) [12])(puVar1 + 0x1c);
    auVar28 = _lqc2(auStack_c0);
    auVar3._12_4_ = uStack_c4;
    auVar3._0_12_ = *apauStack_90[0];
    auVar29 = _lqc2(auVar3);
    _lqc2(auStack_c0);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar28,in_vf0);
    auVar28 = _vmaddbc(auVar29,auVar30);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(_auStack_b0);
    auVar28 = _lqc2(auVar28);
    _lqc2(*pauVar22);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar29,in_vf0);
    auVar28 = _vmaddbc(auVar28,auVar30);
    auVar28 = _sqc2(auVar28);
    *pauVar22 = auVar28;
    apauStack_90[0] = (undefined1 (*) [12])(puVar1 + 0x28);
    break;
  case 5:
    auStack_c0._0_12_ = *(undefined1 (*) [12])(puVar1 + 0x10);
    _auStack_b0 = *(undefined1 (*) [12])(puVar1 + 0x1c);
    _auStack_a0 = *(undefined1 (*) [12])(puVar1 + 0x28);
    auVar28 = _lqc2(auStack_c0);
    auVar4._12_4_ = uStack_c4;
    auVar4._0_12_ = *apauStack_90[0];
    auVar29 = _lqc2(auVar4);
    _lqc2(auStack_c0);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar28,in_vf0);
    auVar28 = _vmaddbc(auVar29,auVar30);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(_auStack_b0);
    auVar28 = _lqc2(auVar28);
    _lqc2(_auStack_b0);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar29,in_vf0);
    auVar28 = _vmaddbc(auVar28,auVar30);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(_auStack_a0);
    auVar28 = _lqc2(auVar28);
    _lqc2(*pauVar22);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar29,in_vf0);
    auVar28 = _vmaddbc(auVar28,auVar30);
    auVar28 = _sqc2(auVar28);
    *pauVar22 = auVar28;
    apauStack_90[0] = (undefined1 (*) [12])(puVar1 + 0x34);
    break;
  case 6:
    fVar27 = param_1 - (float)(int)param_1;
    pauVar19 = apauStack_90[0] + (int)param_1;
    uVar23 = *(undefined4 *)(*pauVar19 + 8);
    if (fVar27 < 0.01) {
      *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar19;
      *(undefined4 *)(*pauVar22 + 8) = uVar23;
LAB_00344e84:
      uVar20 = (uint)(byte)puVar1[2];
    }
    else {
      auStack_c0._0_12_ = pauVar19[1];
      auVar28 = _lqc2(auStack_c0);
      auVar5._12_4_ = uStack_c4;
      auVar5._0_12_ = *pauVar19;
      auVar29 = _lqc2(auVar5);
      _lqc2(auStack_c0);
      auVar28 = _vsub(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar6._12_4_ = uStack_c4;
      auVar6._0_12_ = *pauVar19;
      auVar29 = _lqc2(auVar6);
      auVar28 = _lqc2(auVar28);
      _lqc2(*pauVar22);
      auVar30 = _qmtc2(fVar27);
      _vaddabc(auVar29,in_vf0);
      auVar28 = _vmaddbc(auVar28,auVar30);
      auVar28 = _sqc2(auVar28);
      *pauVar22 = auVar28;
      uVar20 = (uint)(byte)puVar1[2];
    }
    goto LAB_00344e88;
  case 7:
    iVar25 = (int)param_1 * 3;
    param_1 = param_1 - (float)(int)param_1;
    auStack_c0._0_12_ = *(undefined1 (*) [12])(puVar1 + 0x10);
    auStack_b0._4_4_ = (float)(byte)puVar1[iVar25 + 0x1d];
    auStack_b0._0_4_ = (float)(byte)puVar1[iVar25 + 0x1c];
    fStack_a8 = (float)(byte)puVar1[iVar25 + 0x1e];
    auVar28 = _lqc2(_auStack_b0);
    auVar29 = _lqc2(auStack_c0);
    _lqc2(_auStack_b0);
    auVar28 = _vmul(auVar28,auVar29);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(auVar28);
    auVar7._12_4_ = uStack_c4;
    auVar7._0_12_ = *apauStack_90[0];
    auVar30 = _lqc2(auVar7);
    _lqc2(auVar28);
    auVar28 = _vadd(auVar29,auVar30);
    _auStack_b0 = _sqc2(auVar28);
    if (0.01 <= param_1) {
      auStack_a0._4_4_ = (float)(byte)puVar1[iVar25 + 0x20];
      auStack_a0._0_4_ = (float)(byte)puVar1[iVar25 + 0x1f];
      fStack_98 = (float)(byte)puVar1[iVar25 + 0x21];
      auVar28 = _lqc2(_auStack_a0);
      auVar29 = _lqc2(auStack_c0);
      _lqc2(_auStack_a0);
      auVar28 = _vmul(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar29 = _lqc2(auVar28);
      auVar8._12_4_ = uStack_c4;
      auVar8._0_12_ = *apauStack_90[0];
      auVar30 = _lqc2(auVar8);
      _lqc2(auVar28);
      auVar28 = _vadd(auVar29,auVar30);
      auVar28 = _sqc2(auVar28);
      auVar29 = _lqc2(_auStack_b0);
      auVar28 = _lqc2(auVar28);
      auVar28 = _vsub(auVar28,auVar29);
      auVar30 = _qmtc2(param_1);
      _lqc2(_auStack_b0);
      _vaddabc(auVar29,in_vf0);
      auVar28 = _vmaddbc(auVar28,auVar30);
      _auStack_b0 = _sqc2(auVar28);
    }
    else {
    }
    *(undefined1 (*) [8])*pauVar22 = auStack_b0;
    *(float *)(*pauVar22 + 8) = fStack_a8;
    iVar25 = ((uint)(byte)puVar1[1] + (uint)(byte)puVar1[2] * 0x100) * 3;
    goto LAB_00344c58;
  case 8:
    iVar24 = (int)param_1;
    iVar25 = iVar24 * 3;
    auStack_c0._0_12_ = *(undefined1 (*) [12])(puVar1 + 0x10);
    auStack_b0._4_4_ = (float)*(ushort *)(puVar1 + (iVar25 + 1) * 2 + 0x1c);
    auStack_b0._0_4_ = (float)*(ushort *)(puVar1 + iVar24 * 6 + 0x1c);
    fStack_a8 = (float)*(ushort *)(puVar1 + (iVar25 + 2) * 2 + 0x1c);
    auVar28 = _lqc2(_auStack_b0);
    auVar29 = _lqc2(auStack_c0);
    _lqc2(_auStack_b0);
    auVar28 = _vmul(auVar28,auVar29);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(auVar28);
    auVar9._12_4_ = uStack_c4;
    auVar9._0_12_ = *apauStack_90[0];
    auVar30 = _lqc2(auVar9);
    _lqc2(auVar28);
    auVar28 = _vadd(auVar29,auVar30);
    _auStack_b0 = _sqc2(auVar28);
    if (0.01 <= param_1 - (float)iVar24) {
      auStack_a0._4_4_ = (float)*(ushort *)(puVar1 + (iVar25 + 4) * 2 + 0x1c);
      auStack_a0._0_4_ = (float)*(ushort *)(puVar1 + (iVar25 + 3) * 2 + 0x1c);
      fStack_98 = (float)*(ushort *)(puVar1 + (iVar25 + 5) * 2 + 0x1c);
      auVar28 = _lqc2(_auStack_a0);
      auVar29 = _lqc2(auStack_c0);
      _lqc2(_auStack_a0);
      auVar28 = _vmul(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar29 = _lqc2(auVar28);
      auVar10._12_4_ = uStack_c4;
      auVar10._0_12_ = *apauStack_90[0];
      auVar30 = _lqc2(auVar10);
      _lqc2(auVar28);
      auVar28 = _vadd(auVar29,auVar30);
      auVar28 = _sqc2(auVar28);
      auVar29 = _lqc2(_auStack_b0);
      auVar28 = _lqc2(auVar28);
      auVar28 = _vsub(auVar28,auVar29);
      auVar30 = _qmtc2(param_1 - (float)iVar24);
      _lqc2(_auStack_b0);
      _vaddabc(auVar29,in_vf0);
      auVar28 = _vmaddbc(auVar28,auVar30);
      _auStack_b0 = _sqc2(auVar28);
    }
    *(undefined1 (*) [8])*pauVar22 = auStack_b0;
    *(float *)(*pauVar22 + 8) = fStack_a8;
    iVar25 = ((uint)(byte)puVar1[1] + (uint)(byte)puVar1[2] * 0x100) * 6;
LAB_00344c58:
    apauStack_90[0] = (undefined1 (*) [12])(puVar1 + (iVar25 + 3U & 0xfffffffc) + 0x1c);
    break;
  case 9:
    *(undefined4 *)(*pauVar22 + 8) = 0;
    *(undefined4 *)*pauVar22 = 0;
    *(undefined4 *)(*pauVar22 + 4) = 0;
    break;
  case 10:
    apauStack_90[0] = (undefined1 (*) [12])FUN_003441d0(apauStack_90[0],param_3);
    break;
  case 0xb:
    uVar18 = FUN_003441d0(apauStack_90[0],&uStack_d0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    apauStack_90[0] = (undefined1 (*) [12])FUN_003441d0(uVar18,auStack_c0);
    auVar28 = _lqc2(auStack_c0);
    auVar11._4_4_ = uStack_cc;
    auVar11._0_4_ = uStack_d0;
    auVar11._8_4_ = uStack_c8;
    auVar11._12_4_ = uStack_c4;
    auVar29 = _lqc2(auVar11);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar28,in_vf0);
    auVar28 = _vmaddbc(auVar29,auVar30);
    auVar28 = _sqc2(auVar28);
    *pauVar22 = auVar28;
    break;
  case 0xc:
    uVar18 = FUN_003441d0(apauStack_90[0],&uStack_d0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    uVar18 = FUN_003441d0(uVar18,auStack_c0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    apauStack_90[0] = (undefined1 (*) [12])FUN_003441d0(uVar18,auStack_b0);
    auVar28 = _lqc2(auStack_c0);
    auVar12._4_4_ = uStack_cc;
    auVar12._0_4_ = uStack_d0;
    auVar12._8_4_ = uStack_c8;
    auVar12._12_4_ = uStack_c4;
    auVar29 = _lqc2(auVar12);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar28,in_vf0);
    auVar28 = _vmaddbc(auVar29,auVar30);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(_auStack_b0);
    auVar28 = _lqc2(auVar28);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar29,in_vf0);
    auVar28 = _vmaddbc(auVar28,auVar30);
    auVar28 = _sqc2(auVar28);
    *pauVar22 = auVar28;
    break;
  case 0xd:
    uVar18 = FUN_003441d0(apauStack_90[0],&uStack_d0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    uVar18 = FUN_003441d0(uVar18,auStack_c0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    uVar18 = FUN_003441d0(uVar18,auStack_b0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    apauStack_90[0] = (undefined1 (*) [12])FUN_003441d0(uVar18,auStack_a0);
    auVar28 = _lqc2(auStack_c0);
    auVar13._4_4_ = uStack_cc;
    auVar13._0_4_ = uStack_d0;
    auVar13._8_4_ = uStack_c8;
    auVar13._12_4_ = uStack_c4;
    auVar29 = _lqc2(auVar13);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar28,in_vf0);
    auVar28 = _vmaddbc(auVar29,auVar30);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(_auStack_b0);
    auVar28 = _lqc2(auVar28);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar29,in_vf0);
    auVar28 = _vmaddbc(auVar28,auVar30);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(_auStack_a0);
    auVar28 = _lqc2(auVar28);
    auVar30 = _qmtc2(param_1);
    _vaddabc(auVar29,in_vf0);
    auVar28 = _vmaddbc(auVar28,auVar30);
    auVar28 = _sqc2(auVar28);
    *pauVar22 = auVar28;
    break;
  case 0xe:
    fVar27 = param_1 - (float)(int)param_1;
    uVar18 = FUN_003441d0((undefined1 *)((int)apauStack_90[0] + (int)param_1 * 0x10),&uStack_d0);
    if (0.01 <= fVar27) {
      FUN_003441d0(uVar18,auStack_c0);
      auVar28 = _lqc2(auStack_c0);
      auVar14._4_4_ = uStack_cc;
      auVar14._0_4_ = uStack_d0;
      auVar14._8_4_ = uStack_c8;
      auVar14._12_4_ = uStack_c4;
      auVar29 = _lqc2(auVar14);
      auVar28 = _vsub(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar15._4_4_ = uStack_cc;
      auVar15._0_4_ = uStack_d0;
      auVar15._8_4_ = uStack_c8;
      auVar15._12_4_ = uStack_c4;
      auVar29 = _lqc2(auVar15);
      auVar28 = _lqc2(auVar28);
      auVar30 = _qmtc2(fVar27);
      _vaddabc(auVar29,in_vf0);
      auVar28 = _vmaddbc(auVar28,auVar30);
      auVar28 = _sqc2(auVar28);
      *pauVar22 = auVar28;
      goto LAB_00344e84;
    }
    *(undefined4 *)*pauVar22 = uStack_d0;
    *(undefined4 *)(*pauVar22 + 4) = uStack_cc;
    *(undefined4 *)(*pauVar22 + 8) = uStack_c8;
    *(undefined4 *)(*pauVar22 + 0xc) = uStack_c4;
    uVar20 = (uint)(byte)puVar1[2];
LAB_00344e88:
    apauStack_90[0] = apauStack_90[0] + (uint)(byte)puVar1[1] + uVar20 * 0x100;
    break;
  case 0xf:
    uVar18 = FUN_003441d0(apauStack_90[0],&uStack_d0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    apauStack_90[0] = (undefined1 (*) [12])FUN_003441d0(uVar18,auStack_c0);
    iVar25 = (int)param_1 * 4;
    auStack_b0._4_4_ = (float)(byte)(*apauStack_90[0])[iVar25 + 1];
    auStack_b0._0_4_ = (float)(byte)(*apauStack_90[0])[iVar25];
    fStack_a8 = (float)(byte)(*apauStack_90[0])[iVar25 + 2];
    fStack_a4 = (float)(byte)(*apauStack_90[0])[iVar25 + 3];
    auVar28 = _lqc2(_auStack_b0);
    auVar29 = _lqc2(auStack_c0);
    auVar28 = _vmul(auVar28,auVar29);
    auVar28 = _sqc2(auVar28);
    auVar28 = _lqc2(auVar28);
    auVar30._4_4_ = uStack_cc;
    auVar30._0_4_ = uStack_d0;
    auVar30._8_4_ = uStack_c8;
    auVar30._12_4_ = uStack_c4;
    auVar29 = _lqc2(auVar30);
    auVar28 = _vadd(auVar28,auVar29);
    _auStack_b0 = _sqc2(auVar28);
    param_1 = param_1 - (float)(int)param_1;
    if (0.01 <= param_1) {
      auStack_a0._4_4_ = (float)(byte)(*apauStack_90[0])[iVar25 + 5];
      auStack_a0._0_4_ = (float)(byte)(*apauStack_90[0])[iVar25 + 4];
      fStack_98 = (float)(byte)(*apauStack_90[0])[iVar25 + 6];
      fStack_94 = (float)(byte)(*apauStack_90[0])[iVar25 + 7];
      auVar28 = _lqc2(_auStack_a0);
      auVar29 = _lqc2(auStack_c0);
      auVar28 = _vmul(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar28 = _lqc2(auVar28);
      auVar16._4_4_ = uStack_cc;
      auVar16._0_4_ = uStack_d0;
      auVar16._8_4_ = uStack_c8;
      auVar16._12_4_ = uStack_c4;
      auVar29 = _lqc2(auVar16);
      auVar28 = _vadd(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar29 = _lqc2(_auStack_b0);
      auVar28 = _lqc2(auVar28);
      auVar28 = _vsub(auVar28,auVar29);
      auVar30 = _qmtc2(param_1);
      _vaddabc(auVar29,in_vf0);
      auVar28 = _vmaddbc(auVar28,auVar30);
      _auStack_b0 = _sqc2(auVar28);
    }
    *(int *)*pauVar22 = auStack_b0._0_4_;
    *(int *)(*pauVar22 + 4) = auStack_b0._4_4_;
    *(float *)(*pauVar22 + 8) = fStack_a8;
    *(float *)(*pauVar22 + 0xc) = fStack_a4;
    iVar25 = ((uint)(byte)puVar1[1] + (uint)(byte)puVar1[2] * 0x100) * 4;
    goto LAB_00345250;
  case 0x10:
    uVar18 = FUN_003441d0(apauStack_90[0],&uStack_d0);
    apauStack_90[0] = (undefined1 (*) [12])uVar18;
    apauStack_90[0] = (undefined1 (*) [12])FUN_003441d0(uVar18,auStack_c0);
    iVar25 = (int)param_1;
    auStack_b0._4_4_ = (float)*(ushort *)(*apauStack_90[0] + iVar25 * 8 + 2);
    auStack_b0._0_4_ = (float)*(ushort *)(*apauStack_90[0] + iVar25 * 8);
    fStack_a8 = (float)*(ushort *)(*apauStack_90[0] + iVar25 * 8 + 4);
    fStack_a4 = (float)*(ushort *)(*apauStack_90[0] + iVar25 * 8 + 6);
    auVar28 = _lqc2(_auStack_b0);
    auVar29 = _lqc2(auStack_c0);
    auVar28 = _vmul(auVar28,auVar29);
    auVar28 = _sqc2(auVar28);
    auVar29 = _lqc2(auVar28);
    auVar28._4_4_ = uStack_cc;
    auVar28._0_4_ = uStack_d0;
    auVar28._8_4_ = uStack_c8;
    auVar28._12_4_ = uStack_c4;
    auVar28 = _lqc2(auVar28);
    auVar28 = _vadd(auVar29,auVar28);
    _auStack_b0 = _sqc2(auVar28);
    if (0.01 <= param_1 - (float)iVar25) {
      auStack_a0._4_4_ = (float)*(ushort *)(*apauStack_90[0] + iVar25 * 8 + 10);
      auStack_a0._0_4_ = (float)*(ushort *)(*apauStack_90[0] + iVar25 * 8 + 8);
      fStack_98 = (float)*(ushort *)(apauStack_90[0][1] + iVar25 * 8);
      fStack_94 = (float)*(ushort *)(apauStack_90[0][1] + iVar25 * 8 + 2);
      auVar28 = _lqc2(_auStack_a0);
      auVar29 = _lqc2(auStack_c0);
      auVar28 = _vmul(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar28 = _lqc2(auVar28);
      auVar29._4_4_ = uStack_cc;
      auVar29._0_4_ = uStack_d0;
      auVar29._8_4_ = uStack_c8;
      auVar29._12_4_ = uStack_c4;
      auVar29 = _lqc2(auVar29);
      auVar28 = _vadd(auVar28,auVar29);
      auVar28 = _sqc2(auVar28);
      auVar29 = _lqc2(_auStack_b0);
      auVar28 = _lqc2(auVar28);
      auVar28 = _vsub(auVar28,auVar29);
      auVar30 = _qmtc2(param_1 - (float)iVar25);
      _vaddabc(auVar29,in_vf0);
      auVar28 = _vmaddbc(auVar28,auVar30);
      _auStack_b0 = _sqc2(auVar28);
    }
    *(int *)*pauVar22 = auStack_b0._0_4_;
    *(int *)(*pauVar22 + 4) = auStack_b0._4_4_;
    *(float *)(*pauVar22 + 8) = fStack_a8;
    *(float *)(*pauVar22 + 0xc) = fStack_a4;
    iVar25 = ((uint)(byte)puVar1[1] + (uint)(byte)puVar1[2] * 0x100) * 8;
LAB_00345250:
    apauStack_90[0] = (undefined1 (*) [12])(*apauStack_90[0] + iVar25);
    break;
  case 0x11:
    *(undefined4 *)*pauVar22 = 0;
    *(undefined4 *)(*pauVar22 + 0xc) = 0x3f800000;
    *(undefined4 *)(*pauVar22 + 4) = 0;
    *(undefined4 *)(*pauVar22 + 8) = 0;
    break;
  default:
    *(undefined4 *)*pauVar22 = 0;
  }
  *param_2 = apauStack_90[0];
  return;
}


// ==== FUN_003452b0 @ 003452b0 ====

void FUN_003452b0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 auStack_a0 [4];
  
  auStack_a0[0] = param_3;
  if (DAT_003d20d8 == 0) {
    if (0 < param_4) {
      iVar2 = param_2 + 0x30;
      do {
        param_2 = param_2 + 0x20;
        FUN_003443e0(param_1,auStack_a0,param_2);
        param_4 = param_4 + -1;
        FUN_003443e0(param_1,auStack_a0,iVar2);
        iVar2 = iVar2 + 0x20;
      } while (param_4 != 0);
    }
  }
  else {
    iVar2 = DAT_003d20dc;
    if (param_4 <= DAT_003d20dc) {
      iVar2 = param_4;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      uVar6 = 0x3f800000;
      puVar3 = (undefined4 *)(param_2 + 0x30);
      iVar5 = param_2;
      do {
        iVar5 = iVar5 + 0x20;
        if (*(char *)(DAT_003d20d8 + iVar4) == '\0') {
          uVar1 = FUN_00344240(auStack_a0[0]);
          auStack_a0[0] = (undefined4)uVar1;
          auStack_a0[0] = FUN_00344240(uVar1);
          puVar3[-4] = 0;
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          puVar3[-1] = uVar6;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
        }
        else {
          FUN_003443e0(param_1,auStack_a0,iVar5);
          FUN_003443e0(param_1,auStack_a0,puVar3);
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 8;
      } while (iVar4 < iVar2);
    }
    if (iVar4 < param_4) {
      param_4 = param_4 - iVar4;
      puVar3 = (undefined4 *)(iVar4 * 0x20 + 0x30 + param_2);
      do {
        puVar3[-4] = 0;
        param_4 = param_4 + -1;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0x3f800000;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 8;
      } while (param_4 != 0);
    }
  }
  return;
}


// ==== FUN_00345480 @ 00345480 ====

void FUN_00345480(undefined4 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 auStack_50 [4];
  
  auStack_50[0] = param_3;
  if (0 < param_4) {
    do {
      param_4 = param_4 + -1;
      uVar1 = FUN_00344240(auStack_50[0]);
      auStack_50[0] = (undefined4)uVar1;
      auStack_50[0] = FUN_00344240(uVar1);
    } while (param_4 != 0);
  }
  FUN_003443e0(param_1,auStack_50,param_2);
  FUN_003443e0(param_1,auStack_50,(int)param_2 + 0x10);
  return;
}


// ==== FUN_00345510 @ 00345510 ====

undefined4 FUN_00345510(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  short sVar1;
  float *pfVar2;
  undefined1 in_zero_qw [16];
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint *puVar18;
  float fVar19;
  undefined1 extraout_vf9 [16];
  undefined1 extraout_vf10 [16];
  undefined1 extraout_vf11 [16];
  undefined1 extraout_vf12 [16];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar12 = 0xb;
  puVar18 = (uint *)param_1;
  puVar3 = puVar18 + 0x22c;
  puVar18[0x26b] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  do {
    *puVar3 = 0;
    iVar12 = iVar12 + -1;
    puVar3 = puVar3 + -0x28;
  } while (-1 < iVar12);
  FUN_0034eae0(param_1,param_3,param_2);
  uVar10 = FUN_00343f38();
  lVar11 = FUN_0034eb88(param_1,uVar10);
  FUN_00350140(param_1);
  if (lVar11 == 0) {
    puVar18[0x1a] = 0;
    puVar18[0x15] = 0;
    puVar18[0x14] = 0;
    return 0;
  }
  uVar4 = FUN_00348a28();
  if ((uVar4 & 0x1fffffff) == 0) {
    puVar18[0x26c] = 0;
  }
  else {
    uVar6 = FUN_00343f48();
    puVar18[0x26c] = uVar6;
    iVar12 = 0;
    if (0 < (int)uVar4) {
      do {
        iVar14 = iVar12 * 8;
        iVar12 = iVar12 + 1;
        *(undefined4 *)(iVar14 + puVar18[0x26c]) = 0;
      } while (iVar12 < (int)uVar4);
    }
  }
  iVar12 = FUN_00343508(param_3);
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
    piVar5 = (int *)FUN_003433c8(param_3,iVar12);
    if ((*piVar5 != -1) && (lVar11 = FUN_003432e8(param_3), lVar11 == 0)) {
      FUN_00343148(param_3,iVar12);
    }
  }
  uVar10 = FUN_00343f48(0x78);
  puVar18[0x16] = (uint)uVar10;
  FUN_0035c6ec(uVar10,0,0x78);
  uVar4 = puVar18[1];
  *(undefined2 *)(puVar18 + 2) = 0;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  *(undefined2 *)((int)puVar18 + 0x5e) = 0;
  fVar19 = *(float *)(uVar4 + 0x30);
  *(undefined2 *)(puVar18 + 0x1b) = 0;
  puVar18[0x18] = (uint)fVar19;
  puVar18[0x19] = (uint)(1.0 / fVar19);
  if (*(int *)(uVar4 + 0x1c) == 0) {
    puVar18[0x15] = 0;
    puVar18[0x14] = 0;
    puVar18[0x1a] = 0;
  }
  else {
    iVar12 = 0;
    if (0 < *(int *)(uVar4 + 0x18)) {
      iVar14 = *(int *)(uVar4 + 0x1c);
      while( true ) {
        piVar5 = (int *)(iVar12 * 0x10 + iVar14);
        if ((long)*(short *)((int)puVar18 + 0x5e) < (long)*piVar5) {
          *(short *)((int)puVar18 + 0x5e) = (short)*piVar5;
          iVar14 = *(int *)(uVar4 + 0x18);
        }
        else {
          iVar14 = *(int *)(uVar4 + 0x18);
        }
        iVar12 = iVar12 + 1;
        if (iVar14 <= iVar12) break;
        iVar14 = *(int *)(uVar4 + 0x1c);
      }
    }
    uVar6 = FUN_00343f48((int)*(short *)((int)puVar18 + 0x5e) << 7);
    uVar4 = puVar18[1];
    puVar18[0x14] = uVar6;
    puVar18[0x15] = uVar6;
    iVar12 = 0;
    if (0 < *(int *)(uVar4 + 0x18)) {
      do {
        iVar14 = iVar12 * 0x10;
        iVar15 = 1;
        iVar12 = iVar12 + 1;
        if (1 < *(int *)(iVar14 + *(int *)(uVar4 + 0x1c))) {
          iVar7 = *(int *)(uVar4 + 0x1c);
          while (iVar15 = iVar15 + 1, iVar15 < *(int *)(iVar14 + iVar7)) {
            iVar7 = *(int *)(uVar4 + 0x1c);
          }
        }
      } while (iVar12 < *(int *)(uVar4 + 0x18));
    }
    if (param_4 == 0) {
      puVar18[0x1a] = 0;
LAB_003457d4:
      uVar4 = puVar18[0x15];
    }
    else {
      *puVar18 = *puVar18 | 0x100000;
      lVar11 = FUN_00343f48(*(short *)((int)puVar18 + 0x5e) * 0x80 + 0x140);
      puVar18[0x1a] = (uint)lVar11;
      if (lVar11 == 0) goto LAB_003457d4;
      FUN_00349c38(lVar11,*(undefined2 *)((int)puVar18 + 0x5e));
      uVar4 = puVar18[0x15];
    }
    if (uVar4 == 0) {
      uVar4 = *puVar18;
      goto LAB_00345850;
    }
    iVar12 = 0;
    if (0 < (int)*(short *)((int)puVar18 + 0x5e) << 1) {
      uVar4 = puVar18[0x15];
      while( true ) {
        puVar13 = (undefined4 *)(iVar12 * 0x40 + uVar4);
        auVar16 = _pand(in_zero_qw,in_zero_qw);
        *puVar13 = 0x3f800000;
        puVar13[1] = 0;
        puVar13[2] = auVar16._8_4_;
        puVar13[3] = auVar16._12_4_;
        auVar16 = _pextlw(0x3f800000,0);
        puVar13[4] = auVar16._0_4_;
        puVar13[5] = auVar16._4_4_;
        puVar13[6] = auVar16._8_4_;
        puVar13[7] = auVar16._12_4_;
        auVar17 = _pextlw(0,auVar16._0_8_);
        puVar13[8] = auVar17._0_4_;
        puVar13[9] = auVar17._4_4_;
        puVar13[10] = auVar17._8_4_;
        puVar13[0xb] = auVar17._12_4_;
        auVar16 = _pextlw(auVar16._0_8_,0);
        puVar13[0xc] = auVar16._0_4_;
        puVar13[0xd] = auVar16._4_4_;
        puVar13[0xe] = auVar16._8_4_;
        puVar13[0xf] = auVar16._12_4_;
        iVar12 = iVar12 + 1;
        if ((int)*(short *)((int)puVar18 + 0x5e) << 1 <= iVar12) break;
        uVar4 = puVar18[0x15];
      }
      uVar4 = *puVar18;
      goto LAB_00345850;
    }
  }
  uVar4 = *puVar18;
LAB_00345850:
  *puVar18 = uVar4 | 0x200;
  if (puVar18[0x15] == 0) {
    uVar8 = 0;
  }
  else {
    uVar10 = FUN_00343f48((int)*(short *)((int)puVar18 + 0x5e) << 2);
    puVar18[0x1c] = (uint)uVar10;
    FUN_0035c6ec(uVar10,0,(int)*(short *)((int)puVar18 + 0x5e) << 2);
    if (puVar18[0x1c] != 0) {
      lVar11 = 0;
      iVar12 = FUN_003489a8(param_1);
      if (0 < *(short *)((int)puVar18 + 0x5e)) {
        iVar14 = *(int *)(iVar12 + 4);
        while( true ) {
          iVar15 = (int)lVar11;
          piVar5 = (int *)(iVar14 + iVar15 * 8);
          if ((piVar5[1] & 0xcU) == 0) {
            sVar1 = *(short *)((int)puVar18 + 0x5e);
          }
          else {
            uVar8 = FUN_00343f48(0x50);
            *(undefined4 *)(iVar15 * 4 + puVar18[0x1c]) = uVar8;
            pfVar2 = *(float **)(iVar15 * 4 + puVar18[0x1c]);
            FUN_00352770(*(int *)(iVar12 + 8) + iVar15 * 0x40,auStack_c0);
            iVar14 = *piVar5;
            if (-1 < iVar14) {
              pauVar9 = (undefined1 (*) [16])(iVar14 * 0x40 + *(int *)(iVar12 + 8));
              _lqc2(_auStack_c0);
              _lqc2(_auStack_b0);
              _lqc2(_auStack_a0);
              _lqc2(auStack_90);
              _lqc2(*pauVar9);
              _lqc2(pauVar9[1]);
              _lqc2(pauVar9[2]);
              _lqc2(pauVar9[3]);
              _vcallms(0);
              _vnop();
              _auStack_c0 = _sqc2(extraout_vf9);
              _auStack_b0 = _sqc2(extraout_vf10);
              _auStack_a0 = _sqc2(extraout_vf11);
              auStack_90 = _sqc2(extraout_vf12);
            }
            *pfVar2 = (float)auStack_c0._0_4_;
            pfVar2[1] = (float)auStack_c0._4_4_;
            pfVar2[2] = fStack_b8;
            pfVar2[3] = fStack_b4;
            pfVar2[4] = (float)auStack_b0._0_4_;
            pfVar2[5] = (float)auStack_b0._4_4_;
            pfVar2[6] = fStack_a8;
            pfVar2[7] = fStack_a4;
            pfVar2[8] = (float)auStack_a0._0_4_;
            pfVar2[9] = (float)auStack_a0._4_4_;
            pfVar2[10] = fStack_98;
            pfVar2[0xb] = fStack_94;
            pfVar2[0xc] = auStack_90._0_4_;
            pfVar2[0xd] = auStack_90._4_4_;
            pfVar2[0xe] = auStack_90._8_4_;
            pfVar2[0xf] = auStack_90._12_4_;
            fStack_80 = (float)auStack_c0._0_4_ * (float)auStack_c0._0_4_ +
                        (float)auStack_c0._4_4_ * (float)auStack_c0._4_4_ + fStack_b8 * fStack_b8 +
                        fStack_b4 * fStack_b4;
            fStack_7c = (float)auStack_b0._0_4_ * (float)auStack_b0._0_4_ +
                        (float)auStack_b0._4_4_ * (float)auStack_b0._4_4_ + fStack_a8 * fStack_a8 +
                        fStack_a4 * fStack_a4;
            fStack_78 = (float)auStack_a0._0_4_ * (float)auStack_a0._0_4_ +
                        (float)auStack_a0._4_4_ * (float)auStack_a0._4_4_ + fStack_98 * fStack_98 +
                        fStack_94 * fStack_94;
            if (0.0 < fStack_80) {
              fStack_80 = SQRT(fStack_80);
            }
            if (0.0 < fStack_7c) {
              fStack_7c = SQRT(fStack_7c);
            }
            if (0.0 < fStack_78) {
              fStack_78 = SQRT(fStack_78);
            }
            fStack_74 = ABS(auStack_90._12_4_);
            pfVar2[0x10] = fStack_80;
            pfVar2[0x11] = fStack_7c;
            pfVar2[0x12] = fStack_78;
            pfVar2[0x13] = fStack_74;
            sVar1 = *(short *)((int)puVar18 + 0x5e);
          }
          lVar11 = (long)(iVar15 + 1);
          if (sVar1 <= lVar11) break;
          iVar14 = *(int *)(iVar12 + 4);
        }
      }
    }
    FUN_00347a28(param_1);
    *(undefined1 *)(puVar18 + 0x26f) = 0;
    uVar8 = 1;
  }
  return uVar8;
}


// ==== FUN_00345ac8 @ 00345ac8 ====

void FUN_00345ac8(undefined8 param_1)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  
  uVar2 = FUN_00343f38();
  FUN_0034ecd8(param_1,uVar2);
  puVar5 = (uint *)param_1;
  if (puVar5[0x1c] == 0) {
    uVar3 = puVar5[0x16];
  }
  else {
    lVar4 = 0;
    if (0 < *(short *)((int)puVar5 + 0x5e)) {
      uVar3 = puVar5[0x1c];
      while( true ) {
        if (*(int *)((int)lVar4 * 4 + uVar3) == 0) {
          sVar1 = *(short *)((int)puVar5 + 0x5e);
        }
        else {
          FUN_00343f90();
          sVar1 = *(short *)((int)puVar5 + 0x5e);
        }
        lVar4 = (long)((int)lVar4 + 1);
        if (sVar1 <= lVar4) break;
        uVar3 = puVar5[0x1c];
      }
    }
    FUN_00343f90(puVar5[0x1c]);
    uVar3 = puVar5[0x16];
  }
  if (uVar3 == 0) {
    uVar3 = puVar5[0x26c];
  }
  else {
    FUN_00343f90();
    puVar5[0x16] = 0;
    uVar3 = puVar5[0x26c];
  }
  if (uVar3 == 0) {
    uVar3 = *puVar5;
  }
  else {
    FUN_00343f90();
    uVar3 = *puVar5;
  }
  if ((uVar3 & 0x80000) == 0) {
    if (puVar5[0x1a] == 0) {
      uVar3 = puVar5[0x15];
    }
    else {
      FUN_00343f90();
      puVar5[0x1a] = 0;
      uVar3 = puVar5[0x15];
    }
    if (uVar3 != 0) {
      FUN_00343f90();
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
    }
  }
  return;
}


// ==== FUN_00345bc8 @ 00345bc8 ====

void FUN_00345bc8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*param_1 & 0x480000) != 0) {
    lVar2 = FUN_00343f48((int)*(short *)((int)param_1 + 0x5e) << 7);
    param_1[0x15] = (uint)lVar2;
    param_1[0x14] = (uint)lVar2;
    if (lVar2 != 0) {
      uVar1 = *param_1;
      *param_1 = uVar1 | 0x4000000;
      if ((uVar1 & 0x100000) != 0) {
        lVar2 = FUN_00343f48(*(short *)((int)param_1 + 0x5e) * 0x80 + 0xc0);
        param_1[0x1a] = (uint)lVar2;
        if (lVar2 == 0) {
          FUN_00343f90(param_1[0x15]);
          return;
        }
        FUN_00349c38(lVar2,*(undefined2 *)((int)param_1 + 0x5e));
      }
      *param_1 = *param_1 & 0xfff7ffff;
    }
  }
  return;
}


// ==== FUN_00345c78 @ 00345c78 ====

void FUN_00345c78(uint *param_1)

{
  *param_1 = *param_1 & 0xffbfffff | 0x80000;
  if (param_1[0x1a] != 0) {
    FUN_00343f90(param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  if (param_1[0x15] != 0) {
    FUN_00343f90();
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  return;
}


// ==== FUN_00345ce8 @ 00345ce8 ====

void FUN_00345ce8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(&DAT_0045ecb8 + DAT_0045ecb0 * 4)) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      FUN_00345c78(*(undefined4 *)(iVar1 + DAT_0045ecb0 * 0x200 + 0x45ecc0));
    } while (iVar2 < *(int *)(&DAT_0045ecb8 + DAT_0045ecb0 * 4));
  }
  iVar2 = DAT_0045ecb0 * 4;
  DAT_0045ecb0 = DAT_0045ecb0 ^ 1;
  *(undefined4 *)(&DAT_0045ecb8 + iVar2) = 0;
  return;
}


// ==== FUN_00345e30 @ 00345e30 ====

void FUN_00345e30(uint *param_1)

{
  if ((*param_1 & 0x480000) == 0) {
    FUN_00345c78();
  }
  return;
}


// ==== FUN_00345e60 @ 00345e60 ====

/* Strings referenciadas:
     "null animViewInfo" */

undefined8 FUN_00345e60(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x3d1e18;
  }
  else {
    uVar1 = FUN_00345e90(*(undefined4 *)((int)param_1 + 0x10));
  }
  return uVar1;
}


// ==== FUN_00345e90 @ 00345e90 ====

long FUN_00345e90(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (((param_2 == 0) || (iVar1 = *(int *)((int)param_2 + 4), iVar1 == 0)) ||
     (lVar2 = FUN_00343278(iVar1,param_1), lVar2 == 0)) {
    lVar2 = 0x3d1e30;
  }
  return lVar2;
}


// ==== FUN_00345ed0 @ 00345ed0 ====

undefined4 FUN_00345ed0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)param_1 + *param_1);
  if (*piVar2 == 0) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = *piVar2;
    while( true ) {
      piVar2 = piVar2 + 1;
      *(int *)((int)param_1 + iVar1) = *(int *)((int)param_1 + iVar1) + (int)param_1;
      if (*piVar2 == 0) break;
      iVar1 = *piVar2;
    }
    iVar1 = *param_1;
  }
  *(undefined4 *)((int)param_1 + iVar1) = 0;
  return 1;
}


// ==== FUN_00345f28 @ 00345f28 ====

undefined4 FUN_00345f28(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if (*(int *)((int)param_2 + 4) == 0) {
      return 0;
    }
    uVar1 = FUN_00352a30();
    lVar2 = FUN_00343470(*(undefined4 *)((int)param_2 + 4),uVar1);
    if (lVar2 != 0) {
      *param_3 = (int)uVar1;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00345f98 @ 00345f98 ====

undefined4 FUN_00345f98(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    *(int *)(param_1 + 0x20) = param_1 + 0x30;
    return 1;
  }
  return 0;
}


// ==== FUN_00345fb8 @ 00345fb8 ====

undefined4 FUN_00345fb8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 1;
  }
  return 0;
}


// ==== FUN_00345fd8 @ 00345fd8 ====

void FUN_00345fd8(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = (int)param_1;
  if (0 < *(int *)(iVar6 + 0x24)) {
    iVar5 = *(int *)(iVar6 + 0x28);
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      puVar1 = *(undefined4 **)(iVar2 + iVar5);
      FUN_00342ed8(param_2,*puVar1,puVar1[1]);
      if (*(int *)(iVar6 + 0x24) <= iVar4) break;
      iVar5 = *(int *)(iVar6 + 0x28);
    }
    iVar4 = 0;
  }
  do {
    if (*(int *)(iVar6 + 0x2c) <= iVar4) {
      iVar4 = *(int *)(iVar6 + 0x34);
      goto LAB_00346090;
    }
    FUN_00342fa8(param_2,**(undefined4 **)(iVar4 * 4 + *(int *)(iVar6 + 0x30)));
    lVar3 = FUN_00345f98(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar6 + 0x30)),param_1,param_2);
    iVar4 = iVar4 + 1;
  } while (lVar3 != 0);
  iVar4 = *(int *)(iVar6 + 0x34);
LAB_00346090:
  iVar5 = 0;
  if (0 < iVar4) {
    iVar4 = *(int *)(iVar6 + 0x38);
    while( true ) {
      iVar2 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      FUN_00343030(param_2,*(undefined4 *)(iVar2 + iVar4));
      if (*(int *)(iVar6 + 0x34) <= iVar5) break;
      iVar4 = *(int *)(iVar6 + 0x38);
    }
  }
  return;
}


// ==== FUN_003460e8 @ 003460e8 ====

void FUN_003460e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1;
  if (0 < *(int *)(iVar5 + 0x2c)) {
    iVar3 = *(int *)(iVar5 + 0x30);
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      FUN_00343120(param_2,**(undefined4 **)(iVar2 + iVar3));
      if (*(int *)(iVar5 + 0x2c) <= iVar4) break;
      iVar3 = *(int *)(iVar5 + 0x30);
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x24)) {
    iVar3 = *(int *)(iVar5 + 0x28);
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      FUN_003430d8(param_2,**(undefined4 **)(iVar2 + iVar3));
      if (*(int *)(iVar5 + 0x24) <= iVar4) break;
      iVar3 = *(int *)(iVar5 + 0x28);
    }
  }
  iVar4 = 0;
  do {
    if (*(int *)(iVar5 + 0x2c) <= iVar4) {
      return;
    }
    lVar1 = FUN_00345fb8(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar5 + 0x30)),param_1,param_2);
    iVar4 = iVar4 + 1;
  } while (lVar1 != 0);
  return;
}


// ==== FUN_003461d0 @ 003461d0 ====

void FUN_003461d0(undefined1 param_1)

{
  DAT_003d20d0 = param_1;
  return;
}


// ==== FUN_003461e0 @ 003461e0 ====

void FUN_003461e0(void)

{
  DAT_0046a500 = 0;
  return;
}


// ==== FUN_003461f0 @ 003461f0 ====

undefined * FUN_003461f0(void)

{
  int iVar1;
  
  if (DAT_0046a500 < DAT_003d20d4) {
    iVar1 = DAT_0046a500 * 0x670;
    DAT_0046a500 = DAT_0046a500 + 1;
    return &DAT_0045f0c0 + iVar1;
  }
  return (undefined *)0x0;
}


// ==== FUN_00346230 @ 00346230 ====

undefined *
FUN_00346230(float param_1,int param_2,undefined *param_3,undefined *param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 extraout_vf20 [16];
  undefined1 extraout_vf20_00 [16];
  undefined1 auVar13 [16];
  
  if ((param_3 == (undefined *)0x0) || (param_4 == (undefined *)0x0)) {
    puVar9 = (undefined *)0x0;
  }
  else if (DAT_0046a500 < DAT_003d20d4) {
    iVar8 = DAT_0046a500 * 0x670;
    DAT_0046a500 = DAT_0046a500 + 1;
    puVar9 = &DAT_0045f0c0 + iVar8;
    if ((param_5 & 0x80) == 0) {
      FUN_00344178(param_1,puVar9,param_3,param_4);
      auVar13 = extraout_vf20_00;
    }
    else {
      FUN_00344020(puVar9,param_4);
      auVar13 = extraout_vf20;
    }
    if ((param_5 & 4) == 0) {
      pauVar4 = (undefined1 (*) [16])(param_3 + 0x20);
      pauVar5 = (undefined1 (*) [16])(param_4 + 0x20);
      pauVar6 = (undefined1 (*) [16])(&DAT_0045f0e0 + iVar8);
      iVar8 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 0x1c) + *(short *)(param_2 + 8) * 0x10);
      if (DAT_003d20d8 == 0) {
        if (0 < iVar8) {
          do {
            if (1.5 < *(float *)(*pauVar5 + 0xc)) {
              uVar1 = *(undefined8 *)*pauVar4;
              uVar2 = *(undefined4 *)(*pauVar4 + 8);
              uVar3 = *(undefined4 *)(*pauVar4 + 0xc);
              *(int *)*pauVar6 = (int)uVar1;
              *(int *)(*pauVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)(*pauVar6 + 8) = uVar2;
              *(undefined4 *)(*pauVar6 + 0xc) = uVar3;
              uVar1 = *(undefined8 *)pauVar4[1];
              uVar2 = *(undefined4 *)(pauVar4[1] + 8);
              uVar3 = *(undefined4 *)(pauVar4[1] + 0xc);
              *(int *)pauVar6[1] = (int)uVar1;
              *(int *)(pauVar6[1] + 4) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)(pauVar6[1] + 8) = uVar2;
              *(undefined4 *)(pauVar6[1] + 0xc) = uVar3;
            }
            else if (1.5 < *(float *)(*pauVar4 + 0xc)) {
              uVar1 = *(undefined8 *)*pauVar5;
              uVar2 = *(undefined4 *)(*pauVar5 + 8);
              uVar3 = *(undefined4 *)(*pauVar5 + 0xc);
              *(int *)*pauVar6 = (int)uVar1;
              *(int *)(*pauVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)(*pauVar6 + 8) = uVar2;
              *(undefined4 *)(*pauVar6 + 0xc) = uVar3;
              uVar1 = *(undefined8 *)pauVar5[1];
              uVar2 = *(undefined4 *)(pauVar5[1] + 8);
              uVar3 = *(undefined4 *)(pauVar5[1] + 0xc);
              *(int *)pauVar6[1] = (int)uVar1;
              *(int *)(pauVar6[1] + 4) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)(pauVar6[1] + 8) = uVar2;
              *(undefined4 *)(pauVar6[1] + 0xc) = uVar3;
            }
            else {
              _lqc2(*pauVar4);
              _lqc2(*pauVar5);
              _qmtc2(param_1);
              _vcallms(0x330);
              _vnop();
              auVar10 = _sqc2(auVar13);
              *pauVar6 = auVar10;
              auVar10 = _lqc2(pauVar4[1]);
              auVar11 = _lqc2(pauVar5[1]);
              auVar11 = _vsub(auVar11,auVar10);
              auVar12 = _qmtc2(param_1);
              _vaddabc(auVar10,in_vf0);
              auVar10 = _vmaddbc(auVar11,auVar12);
              auVar10 = _sqc2(auVar10);
              pauVar6[1] = auVar10;
            }
            *(undefined4 *)(pauVar6[1] + 0xc) = 0;
            pauVar4 = pauVar4 + 2;
            pauVar5 = pauVar5 + 2;
            iVar8 = iVar8 + -1;
            pauVar6 = pauVar6 + 2;
          } while (iVar8 != 0);
        }
      }
      else {
        iVar7 = 0;
        if (0 < iVar8) {
          do {
            if (*(char *)(DAT_003d20d8 + iVar7) == '\0') {
              uVar1 = *(undefined8 *)*pauVar4;
              uVar2 = *(undefined4 *)(*pauVar4 + 8);
              uVar3 = *(undefined4 *)(*pauVar4 + 0xc);
LAB_003463f0:
              *(int *)*pauVar6 = (int)uVar1;
              *(int *)(*pauVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)(*pauVar6 + 8) = uVar2;
              *(undefined4 *)(*pauVar6 + 0xc) = uVar3;
              uVar1 = *(undefined8 *)pauVar4[1];
              uVar2 = *(undefined4 *)(pauVar4[1] + 8);
              uVar3 = *(undefined4 *)(pauVar4[1] + 0xc);
LAB_003463f8:
              *(int *)pauVar6[1] = (int)uVar1;
              *(int *)(pauVar6[1] + 4) = (int)((ulong)uVar1 >> 0x20);
              *(undefined4 *)(pauVar6[1] + 8) = uVar2;
              *(undefined4 *)(pauVar6[1] + 0xc) = uVar3;
              *(undefined4 *)(pauVar6[1] + 0xc) = 0;
            }
            else {
              if (1.5 < *(float *)(*pauVar5 + 0xc)) {
                uVar1 = *(undefined8 *)*pauVar4;
                uVar2 = *(undefined4 *)(*pauVar4 + 8);
                uVar3 = *(undefined4 *)(*pauVar4 + 0xc);
                goto LAB_003463f0;
              }
              if (1.5 < *(float *)(*pauVar4 + 0xc)) {
                uVar1 = *(undefined8 *)*pauVar5;
                uVar2 = *(undefined4 *)(*pauVar5 + 8);
                uVar3 = *(undefined4 *)(*pauVar5 + 0xc);
                *(int *)*pauVar6 = (int)uVar1;
                *(int *)(*pauVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
                *(undefined4 *)(*pauVar6 + 8) = uVar2;
                *(undefined4 *)(*pauVar6 + 0xc) = uVar3;
                uVar1 = *(undefined8 *)pauVar5[1];
                uVar2 = *(undefined4 *)(pauVar5[1] + 8);
                uVar3 = *(undefined4 *)(pauVar5[1] + 0xc);
                goto LAB_003463f8;
              }
              _lqc2(*pauVar4);
              _lqc2(*pauVar5);
              _qmtc2(param_1);
              _vcallms(0x330);
              _vnop();
              auVar10 = _sqc2(auVar13);
              *pauVar6 = auVar10;
              auVar10 = _lqc2(pauVar4[1]);
              auVar11 = _lqc2(pauVar5[1]);
              auVar11 = _vsub(auVar11,auVar10);
              auVar12 = _qmtc2(param_1);
              _vaddabc(auVar10,in_vf0);
              auVar10 = _vmaddbc(auVar11,auVar12);
              auVar10 = _sqc2(auVar10);
              pauVar6[1] = auVar10;
              *(undefined4 *)(pauVar6[1] + 0xc) = 0;
            }
            iVar7 = iVar7 + 1;
            pauVar4 = pauVar4 + 2;
            pauVar5 = pauVar5 + 2;
            pauVar6 = pauVar6 + 2;
          } while (iVar7 < iVar8);
        }
      }
    }
  }
  else {
    puVar9 = param_4;
    if (param_1 < 0.5) {
      puVar9 = param_3;
    }
  }
  return puVar9;
}


// ==== FUN_00346510 @ 00346510 ====

undefined8 * FUN_00346510(int param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((param_2 == (undefined8 *)0x0) || (param_3 == 0)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = param_2;
    if (DAT_0046a500 < DAT_003d20d4) {
      puVar7 = (undefined8 *)param_3;
      puVar8 = (undefined8 *)(&DAT_0045f0c0 + DAT_0046a500 * 0x670);
      if (1.5 < *(float *)((int)puVar7 + 0xc)) {
        DAT_0046a500 = DAT_0046a500 + 1;
        FUN_00344020(puVar8,param_2);
      }
      else {
        DAT_0046a500 = DAT_0046a500 + 1;
        FUN_00344020(puVar8,param_3);
      }
      if (((param_4 & 4) == 0) &&
         (iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + *(short *)(param_1 + 8) * 0x10),
         puVar1 = puVar8, 0 < iVar5)) {
        do {
          puVar6 = puVar1 + 4;
          if (1.5 < *(float *)((int)puVar7 + 0x2c)) {
            uVar4 = param_2[4];
            uVar2 = *(undefined4 *)(param_2 + 5);
            uVar3 = *(undefined4 *)((int)param_2 + 0x2c);
            *(int *)puVar6 = (int)uVar4;
            *(int *)((int)puVar1 + 0x24) = (int)((ulong)uVar4 >> 0x20);
            *(undefined4 *)(puVar1 + 5) = uVar2;
            *(undefined4 *)((int)puVar1 + 0x2c) = uVar3;
            uVar4 = param_2[6];
            uVar2 = *(undefined4 *)(param_2 + 7);
            uVar3 = *(undefined4 *)((int)param_2 + 0x3c);
          }
          else {
            uVar4 = puVar7[4];
            uVar2 = *(undefined4 *)(puVar7 + 5);
            uVar3 = *(undefined4 *)((int)puVar7 + 0x2c);
            *(int *)puVar6 = (int)uVar4;
            *(int *)((int)puVar1 + 0x24) = (int)((ulong)uVar4 >> 0x20);
            *(undefined4 *)(puVar1 + 5) = uVar2;
            *(undefined4 *)((int)puVar1 + 0x2c) = uVar3;
            uVar4 = puVar7[6];
            uVar2 = *(undefined4 *)(puVar7 + 7);
            uVar3 = *(undefined4 *)((int)puVar7 + 0x3c);
          }
          *(int *)(puVar1 + 6) = (int)uVar4;
          *(int *)((int)puVar1 + 0x34) = (int)((ulong)uVar4 >> 0x20);
          *(undefined4 *)(puVar1 + 7) = uVar2;
          *(undefined4 *)((int)puVar1 + 0x3c) = uVar3;
          iVar5 = iVar5 + -1;
          param_2 = param_2 + 4;
          puVar7 = puVar7 + 4;
          puVar1 = puVar6;
        } while (iVar5 != 0);
      }
    }
  }
  return puVar8;
}


// ==== FUN_00346668 @ 00346668 ====

undefined * FUN_00346668(int param_1,undefined *param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  int iVar8;
  undefined *puVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    iVar1 = DAT_0046a500 + 1;
    puVar9 = param_2;
    if (DAT_0046a500 < DAT_003d20d4) {
      iVar8 = DAT_0046a500 * 0x670;
      puVar9 = &DAT_0045f0c0 + iVar8;
      DAT_0046a500 = iVar1;
      if (1.5 < *(float *)((int)param_3 + 0xc)) {
        FUN_00344020(puVar9,param_2);
      }
      else if (1.5 < *(float *)(param_2 + 0xc)) {
        FUN_00344020(puVar9,param_3);
      }
      else {
        FUN_003440b8(puVar9,param_2,param_3);
      }
      if ((param_4 & 4) == 0) {
        pauVar5 = (undefined1 (*) [16])(param_2 + 0x20);
        pauVar6 = (undefined1 (*) [16])((int)param_3 + 0x20);
        pauVar7 = (undefined1 (*) [16])(&DAT_0045f0e0 + iVar8);
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + *(short *)(param_1 + 8) * 0x10);
        if (DAT_003d20d8 == 0) {
          if (0 < iVar1) {
            do {
              if (1.5 < *(float *)(*pauVar6 + 0xc)) {
                uVar2 = *(undefined8 *)*pauVar5;
                uVar3 = *(undefined4 *)(*pauVar5 + 8);
                uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)pauVar5[1];
                uVar3 = *(undefined4 *)(pauVar5[1] + 8);
                uVar4 = *(undefined4 *)(pauVar5[1] + 0xc);
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else if (1.5 < *(float *)(*pauVar5 + 0xc)) {
                uVar2 = *(undefined8 *)*pauVar6;
                uVar3 = *(undefined4 *)(*pauVar6 + 8);
                uVar4 = *(undefined4 *)(*pauVar6 + 0xc);
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)pauVar6[1];
                uVar3 = *(undefined4 *)(pauVar6[1] + 8);
                uVar4 = *(undefined4 *)(pauVar6[1] + 0xc);
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else {
                auVar10 = _lqc2(*pauVar5);
                auVar11 = _lqc2(*pauVar6);
                auVar12 = _vmul(auVar10,auVar11);
                _vsubabc(auVar12,auVar12);
                _vmsubabc(in_vf0,auVar12);
                _vmsubbc(in_vf0,auVar12);
                _vopmula(auVar10,auVar11);
                auVar12 = _vopmsub(auVar11,auVar10);
                _vmulabc(auVar11,auVar10);
                _vmaddabc(auVar10,auVar11);
                auVar10 = _vmaddbc(auVar12,in_vf0);
                auVar10 = _sqc2(auVar10);
                *pauVar7 = auVar10;
                auVar10 = _lqc2(pauVar5[1]);
                auVar11 = _lqc2(pauVar6[1]);
                auVar10 = _vadd(auVar10,auVar11);
                auVar10 = _sqc2(auVar10);
                pauVar7[1] = auVar10;
              }
              pauVar5 = pauVar5 + 2;
              pauVar6 = pauVar6 + 2;
              iVar1 = iVar1 + -1;
              pauVar7 = pauVar7 + 2;
            } while (iVar1 != 0);
          }
        }
        else {
          iVar8 = 0;
          if (0 < iVar1) {
            do {
              if (*(char *)(DAT_003d20d8 + iVar8) == '\0') {
                uVar2 = *(undefined8 *)*pauVar5;
                uVar3 = *(undefined4 *)(*pauVar5 + 8);
                uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
LAB_0034682c:
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)pauVar5[1];
                uVar3 = *(undefined4 *)(pauVar5[1] + 8);
                uVar4 = *(undefined4 *)(pauVar5[1] + 0xc);
LAB_00346834:
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else {
                if (1.5 < *(float *)(*pauVar6 + 0xc)) {
                  uVar2 = *(undefined8 *)*pauVar5;
                  uVar3 = *(undefined4 *)(*pauVar5 + 8);
                  uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
                  goto LAB_0034682c;
                }
                if (1.5 < *(float *)(*pauVar5 + 0xc)) {
                  uVar2 = *(undefined8 *)*pauVar6;
                  uVar3 = *(undefined4 *)(*pauVar6 + 8);
                  uVar4 = *(undefined4 *)(*pauVar6 + 0xc);
                  *(int *)*pauVar7 = (int)uVar2;
                  *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                  *(undefined4 *)(*pauVar7 + 8) = uVar3;
                  *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                  uVar2 = *(undefined8 *)pauVar6[1];
                  uVar3 = *(undefined4 *)(pauVar6[1] + 8);
                  uVar4 = *(undefined4 *)(pauVar6[1] + 0xc);
                  goto LAB_00346834;
                }
                auVar10 = _lqc2(*pauVar5);
                auVar11 = _lqc2(*pauVar6);
                auVar12 = _vmul(auVar10,auVar11);
                _vsubabc(auVar12,auVar12);
                _vmsubabc(in_vf0,auVar12);
                _vmsubbc(in_vf0,auVar12);
                _vopmula(auVar10,auVar11);
                auVar12 = _vopmsub(auVar11,auVar10);
                _vmulabc(auVar11,auVar10);
                _vmaddabc(auVar10,auVar11);
                auVar10 = _vmaddbc(auVar12,in_vf0);
                auVar10 = _sqc2(auVar10);
                *pauVar7 = auVar10;
                auVar10 = _lqc2(pauVar5[1]);
                auVar11 = _lqc2(pauVar6[1]);
                auVar10 = _vadd(auVar10,auVar11);
                auVar10 = _sqc2(auVar10);
                pauVar7[1] = auVar10;
              }
              iVar8 = iVar8 + 1;
              pauVar5 = pauVar5 + 2;
              pauVar6 = pauVar6 + 2;
              pauVar7 = pauVar7 + 2;
            } while (iVar8 < iVar1);
          }
        }
      }
    }
  }
  return puVar9;
}


// ==== FUN_00346940 @ 00346940 ====

undefined * FUN_00346940(int param_1,undefined *param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  int iVar8;
  undefined *puVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    iVar1 = DAT_0046a500 + 1;
    puVar9 = param_2;
    if (DAT_0046a500 < DAT_003d20d4) {
      iVar8 = DAT_0046a500 * 0x670;
      puVar9 = &DAT_0045f0c0 + iVar8;
      DAT_0046a500 = iVar1;
      if (1.5 < *(float *)((int)param_3 + 0xc)) {
        FUN_00344020(puVar9,param_2);
      }
      else if (1.5 < *(float *)(param_2 + 0xc)) {
        FUN_00344020(puVar9,param_3);
      }
      else {
        FUN_00344118(puVar9,param_2,param_3);
      }
      if ((param_4 & 4) == 0) {
        pauVar6 = (undefined1 (*) [16])(param_2 + 0x20);
        pauVar5 = (undefined1 (*) [16])((int)param_3 + 0x20);
        pauVar7 = (undefined1 (*) [16])(&DAT_0045f0e0 + iVar8);
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + *(short *)(param_1 + 8) * 0x10);
        if (DAT_003d20d8 == 0) {
          if (0 < iVar1) {
            do {
              if (1.5 < *(float *)(*pauVar5 + 0xc)) {
                uVar2 = *(undefined8 *)*pauVar6;
                uVar3 = *(undefined4 *)(*pauVar6 + 8);
                uVar4 = *(undefined4 *)(*pauVar6 + 0xc);
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)pauVar6[1];
                uVar3 = *(undefined4 *)(pauVar6[1] + 8);
                uVar4 = *(undefined4 *)(pauVar6[1] + 0xc);
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else if (1.5 < *(float *)(*pauVar6 + 0xc)) {
                uVar2 = *(undefined8 *)*pauVar5;
                uVar3 = *(undefined4 *)(*pauVar5 + 8);
                uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)pauVar5[1];
                uVar3 = *(undefined4 *)(pauVar5[1] + 8);
                uVar4 = *(undefined4 *)(pauVar5[1] + 0xc);
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else {
                auVar10 = _lqc2(*pauVar5);
                auVar11 = _lqc2(*pauVar5);
                auVar12 = _vaddbc(in_vf0,in_vf0);
                auVar10 = _vmul(auVar10,auVar11);
                _vaddabc(auVar10,auVar10);
                _vmaddabc(auVar12,auVar10);
                auVar10 = _vmaddbc(auVar12,auVar10);
                auVar10 = _qmfc2(auVar10._0_4_);
                auVar10 = _qmtc2(auVar10._0_4_);
                _vdiv(in_vf0,0,auVar10,0);
                auVar10 = _lqc2(*pauVar5);
                auVar10 = _vsub(in_vf0,auVar10);
                uVar3 = _vwaitq();
                auVar10 = _vmulq(auVar10,uVar3);
                auVar10 = _sqc2(auVar10);
                auVar10 = _lqc2(auVar10);
                auVar11 = _lqc2(*pauVar6);
                auVar12 = _vmul(auVar10,auVar11);
                _vsubabc(auVar12,auVar12);
                _vmsubabc(in_vf0,auVar12);
                _vmsubbc(in_vf0,auVar12);
                _vopmula(auVar10,auVar11);
                auVar12 = _vopmsub(auVar11,auVar10);
                _vmulabc(auVar11,auVar10);
                _vmaddabc(auVar10,auVar11);
                auVar10 = _vmaddbc(auVar12,in_vf0);
                auVar10 = _sqc2(auVar10);
                *pauVar7 = auVar10;
                auVar10 = _lqc2(pauVar6[1]);
                auVar11 = _lqc2(pauVar5[1]);
                auVar10 = _vsub(auVar10,auVar11);
                auVar10 = _sqc2(auVar10);
                pauVar7[1] = auVar10;
              }
              pauVar6 = pauVar6 + 2;
              pauVar5 = pauVar5 + 2;
              iVar1 = iVar1 + -1;
              pauVar7 = pauVar7 + 2;
            } while (iVar1 != 0);
          }
        }
        else {
          iVar8 = 0;
          if (0 < iVar1) {
            do {
              if (*(char *)(DAT_003d20d8 + iVar8) == '\0') {
                uVar2 = *(undefined8 *)*pauVar6;
                uVar3 = *(undefined4 *)(*pauVar6 + 8);
                uVar4 = *(undefined4 *)(*pauVar6 + 0xc);
LAB_00346b50:
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)pauVar6[1];
                uVar3 = *(undefined4 *)(pauVar6[1] + 8);
                uVar4 = *(undefined4 *)(pauVar6[1] + 0xc);
LAB_00346b58:
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else {
                if (1.5 < *(float *)(*pauVar5 + 0xc)) {
                  uVar2 = *(undefined8 *)*pauVar6;
                  uVar3 = *(undefined4 *)(*pauVar6 + 8);
                  uVar4 = *(undefined4 *)(*pauVar6 + 0xc);
                  goto LAB_00346b50;
                }
                if (1.5 < *(float *)(*pauVar6 + 0xc)) {
                  uVar2 = *(undefined8 *)*pauVar5;
                  uVar3 = *(undefined4 *)(*pauVar5 + 8);
                  uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
                  *(int *)*pauVar7 = (int)uVar2;
                  *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                  *(undefined4 *)(*pauVar7 + 8) = uVar3;
                  *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                  uVar2 = *(undefined8 *)pauVar5[1];
                  uVar3 = *(undefined4 *)(pauVar5[1] + 8);
                  uVar4 = *(undefined4 *)(pauVar5[1] + 0xc);
                  goto LAB_00346b58;
                }
                auVar10 = _lqc2(*pauVar5);
                auVar11 = _lqc2(*pauVar5);
                auVar12 = _vaddbc(in_vf0,in_vf0);
                auVar10 = _vmul(auVar10,auVar11);
                _vaddabc(auVar10,auVar10);
                _vmaddabc(auVar12,auVar10);
                auVar10 = _vmaddbc(auVar12,auVar10);
                auVar10 = _qmfc2(auVar10._0_4_);
                auVar10 = _qmtc2(auVar10._0_4_);
                _vdiv(in_vf0,0,auVar10,0);
                auVar10 = _lqc2(*pauVar5);
                auVar10 = _vsub(in_vf0,auVar10);
                uVar3 = _vwaitq();
                auVar10 = _vmulq(auVar10,uVar3);
                auVar10 = _sqc2(auVar10);
                auVar10 = _lqc2(auVar10);
                auVar11 = _lqc2(*pauVar6);
                auVar12 = _vmul(auVar10,auVar11);
                _vsubabc(auVar12,auVar12);
                _vmsubabc(in_vf0,auVar12);
                _vmsubbc(in_vf0,auVar12);
                _vopmula(auVar10,auVar11);
                auVar12 = _vopmsub(auVar11,auVar10);
                _vmulabc(auVar11,auVar10);
                _vmaddabc(auVar10,auVar11);
                auVar10 = _vmaddbc(auVar12,in_vf0);
                auVar10 = _sqc2(auVar10);
                *pauVar7 = auVar10;
                auVar10 = _lqc2(pauVar6[1]);
                auVar11 = _lqc2(pauVar5[1]);
                auVar10 = _vsub(auVar10,auVar11);
                auVar10 = _sqc2(auVar10);
                pauVar7[1] = auVar10;
              }
              iVar8 = iVar8 + 1;
              pauVar6 = pauVar6 + 2;
              pauVar5 = pauVar5 + 2;
              pauVar7 = pauVar7 + 2;
            } while (iVar8 < iVar1);
          }
        }
      }
    }
  }
  return puVar9;
}


// ==== FUN_00346cb0 @ 00346cb0 ====

undefined1 (*) [16]
FUN_00346cb0(undefined4 param_1,int param_2,undefined1 (*param_3) [16],ulong param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vf20 [16];
  undefined1 extraout_vf20 [16];
  
  if (param_3 == (undefined1 (*) [16])0x0) {
    pauVar8 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar8 = param_3;
    if (DAT_0046a500 < DAT_003d20d4) {
      iVar6 = DAT_0046a500 * 0x670;
      pauVar8 = (undefined1 (*) [16])(&DAT_0045f0c0 + iVar6);
      if (1.5 < *(float *)(*param_3 + 0xc)) {
        DAT_0046a500 = DAT_0046a500 + 1;
        FUN_00344020(pauVar8,param_3);
        in_vf20 = extraout_vf20;
      }
      else {
        auVar9._12_4_ = 0x3f800000;
        auVar9._0_12_ = ZEXT812(0);
        _lqc2(auVar9);
        _lqc2(*param_3);
        _qmtc2(param_1);
        _vcallms(0x330);
        _vnop();
        auVar9 = _sqc2(in_vf20);
        DAT_0046a500 = DAT_0046a500 + 1;
        *pauVar8 = auVar9;
        auVar9 = _lqc2(param_3[1]);
        auVar10 = _qmtc2(param_1);
        auVar9 = _vmulbc(auVar9,auVar10);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(&DAT_0045f0d0 + iVar6) = auVar9;
      }
      if ((param_4 & 4) == 0) {
        param_3 = param_3 + 2;
        pauVar7 = (undefined1 (*) [16])(&DAT_0045f0e0 + iVar6);
        iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 0x1c) + *(short *)(param_2 + 8) * 0x10);
        if (DAT_003d20d8 == 0) {
          if (0 < iVar6) {
            do {
              if (1.5 < *(float *)(*param_3 + 0xc)) {
                uVar2 = *(undefined8 *)*param_3;
                uVar3 = *(undefined4 *)(*param_3 + 8);
                uVar4 = *(undefined4 *)(*param_3 + 0xc);
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)param_3[1];
                uVar3 = *(undefined4 *)(param_3[1] + 8);
                uVar4 = *(undefined4 *)(param_3[1] + 0xc);
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else {
                auVar10._12_4_ = 0x3f800000;
                auVar10._0_12_ = ZEXT812(0);
                _lqc2(auVar10);
                _lqc2(*param_3);
                _qmtc2(param_1);
                _vcallms(0x330);
                _vnop();
                auVar9 = _sqc2(in_vf20);
                *pauVar7 = auVar9;
                auVar9 = _lqc2(param_3[1]);
                auVar10 = _qmtc2(param_1);
                auVar9 = _vmulbc(auVar9,auVar10);
                auVar9 = _sqc2(auVar9);
                pauVar7[1] = auVar9;
              }
              param_3 = param_3 + 2;
              iVar6 = iVar6 + -1;
              pauVar7 = pauVar7 + 2;
            } while (iVar6 != 0);
          }
        }
        else {
          iVar5 = 0;
          if (0 < iVar6) {
            do {
              if (*(char *)(DAT_003d20d8 + iVar5) == '\0') {
                uVar2 = *(undefined8 *)*param_3;
                uVar3 = *(undefined4 *)(*param_3 + 8);
                uVar4 = *(undefined4 *)(*param_3 + 0xc);
LAB_00346e60:
                *(int *)*pauVar7 = (int)uVar2;
                *(int *)(*pauVar7 + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(*pauVar7 + 8) = uVar3;
                *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
                uVar2 = *(undefined8 *)param_3[1];
                uVar3 = *(undefined4 *)(param_3[1] + 8);
                uVar4 = *(undefined4 *)(param_3[1] + 0xc);
                *(int *)pauVar7[1] = (int)uVar2;
                *(int *)(pauVar7[1] + 4) = (int)((ulong)uVar2 >> 0x20);
                *(undefined4 *)(pauVar7[1] + 8) = uVar3;
                *(undefined4 *)(pauVar7[1] + 0xc) = uVar4;
              }
              else {
                if (1.5 < *(float *)(*param_3 + 0xc)) {
                  uVar2 = *(undefined8 *)*param_3;
                  uVar3 = *(undefined4 *)(*param_3 + 8);
                  uVar4 = *(undefined4 *)(*param_3 + 0xc);
                  goto LAB_00346e60;
                }
                auVar1._12_4_ = 0x3f800000;
                auVar1._0_12_ = ZEXT812(0);
                _lqc2(auVar1);
                _lqc2(*param_3);
                _qmtc2(param_1);
                _vcallms(0x330);
                _vnop();
                auVar9 = _sqc2(in_vf20);
                *pauVar7 = auVar9;
                auVar9 = _lqc2(param_3[1]);
                auVar10 = _qmtc2(param_1);
                auVar9 = _vmulbc(auVar9,auVar10);
                auVar9 = _sqc2(auVar9);
                pauVar7[1] = auVar9;
              }
              iVar5 = iVar5 + 1;
              param_3 = param_3 + 2;
              pauVar7 = pauVar7 + 2;
            } while (iVar5 < iVar6);
          }
        }
      }
    }
  }
  return pauVar8;
}


// ==== FUN_00346f58 @ 00346f58 ====

undefined * FUN_00346f58(float param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  float fVar15;
  undefined *apuStack_a0 [4];
  
  lVar2 = FUN_003487e8(param_3);
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  if (param_4 == 0) {
    return (undefined *)0x0;
  }
  if (DAT_003d20d4 <= DAT_0046a500) {
    return (undefined *)0x0;
  }
  iVar11 = DAT_0046a500 * 0x670;
  puVar13 = (undefined4 *)param_3;
  DAT_0046a500 = DAT_0046a500 + 1;
  *(undefined4 **)(param_2 + 0x984) = puVar13;
  apuStack_a0[0] = &DAT_0045f0c0 + iVar11;
  *(uint *)(param_2 + 0x998) = *(uint *)(param_2 + 0x998) | puVar13[2];
  piVar14 = (int *)lVar2;
  if (puVar13[2] == 0) {
    fVar15 = (float)(*piVar14 + -1);
    if (param_1 < fVar15) {
      iVar11 = piVar14[3];
      fVar15 = param_1;
      goto LAB_0034704c;
    }
  }
  else {
    fVar15 = (float)FUN_0034b498(param_1,(float)*piVar14);
  }
  iVar11 = piVar14[3];
LAB_0034704c:
  puVar7 = apuStack_a0[0];
  if (iVar11 == 0) {
    return (undefined *)0x0;
  }
  lVar2 = 0;
  piVar12 = (int *)param_4;
  if (DAT_003d20d0 != '\0') {
    lVar2 = FUN_00342478(DAT_003f15b4,*puVar13,iVar11,(int)fVar15,*piVar12,apuStack_a0);
  }
  if (lVar2 == 0) {
    uVar6 = puVar13[7] & 0x7fffffff;
    if (uVar6 == 3) {
      iVar11 = 0;
      puVar9 = (undefined8 *)(piVar14[3] + *piVar12 * (int)fVar15 * 0x20);
      if (0 < *piVar12) {
        do {
          iVar10 = iVar11 * 0x20;
          uVar8 = puVar9[2];
          *(undefined4 *)(apuStack_a0[0] + iVar10 + 0x38) = *(undefined4 *)(puVar9 + 3);
          *(undefined8 *)(apuStack_a0[0] + iVar10 + 0x30) = uVar8;
          uVar8 = *puVar9;
          uVar3 = *(undefined4 *)(puVar9 + 1);
          uVar4 = *(undefined4 *)((int)puVar9 + 0xc);
          *(int *)(apuStack_a0[0] + iVar10 + 0x20) = (int)uVar8;
          *(int *)(apuStack_a0[0] + iVar10 + 0x24) = (int)((ulong)uVar8 >> 0x20);
          *(undefined4 *)(apuStack_a0[0] + iVar10 + 0x28) = uVar3;
          *(undefined4 *)(apuStack_a0[0] + iVar10 + 0x2c) = uVar4;
          iVar11 = iVar11 + 1;
          puVar9 = puVar9 + 4;
        } while (iVar11 < *piVar12);
      }
    }
    else if ((3 < uVar6) && (uVar6 == 4)) {
      FUN_003452b0(fVar15,apuStack_a0[0],piVar14[3],*piVar12,*(undefined2 *)(param_2 + 0x6c));
    }
  }
  puVar1 = apuStack_a0[0];
  if ((DAT_003d20d0 != '\0') && (iVar11 = 0, puVar1 = puVar7, 0 < *piVar12)) {
    do {
      iVar10 = iVar11 + 1;
      uVar3 = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x24);
      uVar4 = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x28);
      uVar5 = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x2c);
      *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x20);
      *(undefined4 *)(puVar7 + 0x24) = uVar3;
      *(undefined4 *)(puVar7 + 0x28) = uVar4;
      *(undefined4 *)(puVar7 + 0x2c) = uVar5;
      uVar3 = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x34);
      uVar4 = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x38);
      uVar5 = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x3c);
      *(undefined4 *)(puVar7 + 0x30) = *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x30);
      *(undefined4 *)(puVar7 + 0x34) = uVar3;
      *(undefined4 *)(puVar7 + 0x38) = uVar4;
      *(undefined4 *)(puVar7 + 0x3c) = uVar5;
      puVar7 = puVar7 + 0x20;
      iVar11 = iVar10;
    } while (iVar10 < *piVar12);
  }
  apuStack_a0[0] = puVar1;
  iVar11 = DAT_003d20e0;
  if (DAT_003d20e0 != -1) {
    iVar10 = DAT_003d20e0 * 0x20;
    *(undefined4 *)(apuStack_a0[0] + DAT_003d20e0 * 0x20 + 0x2c) = 0x3f800000;
    *(undefined4 *)(apuStack_a0[0] + iVar10 + 0x20) = 0;
    *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x24) = 0;
    *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x28) = 0;
    iVar11 = DAT_003d20e0;
    iVar10 = DAT_003d20e0 * 0x20;
    *(undefined4 *)(apuStack_a0[0] + DAT_003d20e0 * 0x20 + 0x3c) = 0x3f800000;
    *(undefined4 *)(apuStack_a0[0] + iVar10 + 0x30) = 0;
    *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x34) = 0;
    *(undefined4 *)(apuStack_a0[0] + iVar11 * 0x20 + 0x38) = 0;
    return apuStack_a0[0];
  }
  return apuStack_a0[0];
}


// ==== FUN_00347238 @ 00347238 ====

void FUN_00347238(float param_1,float param_2,float param_3,float param_4)

{
  FUN_0034d960(param_1 / param_3,param_2 / param_3,param_4 / param_3,0x3f800000);
  return;
}


// ==== FUN_00347280 @ 00347280 ====

long FUN_00347280(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  pfVar1 = (float *)FUN_003500e0(param_7,*(undefined2 *)((int)param_6 + 2));
  fVar7 = *pfVar1;
  fVar6 = param_1 / param_3;
  if (param_1 == param_2) {
    fVar4 = (float)FUN_0029db30(fVar6);
  }
  else {
    fVar4 = (param_2 + param_3) / param_3 - 1.0;
  }
  uVar5 = 0x3f800000;
  FUN_0034fe70(auStack_c0);
  FUN_0034fe88(fVar6,fVar7,uVar5,auStack_c0,(int)fVar7);
  lVar2 = FUN_0034d9b0(fVar4,param_4 / param_3,uVar5,param_5,param_6,param_7,auStack_c0,param_8);
  if (lVar2 != 0) {
    FUN_0034fe70(auStack_b0);
    FUN_0034ffa0(fVar6,fVar7,uVar5,auStack_b0,(int)fVar7);
    lVar3 = FUN_0034d9b0(fVar4,param_4 / param_3,uVar5,param_5,param_6,param_7,auStack_b0,4);
    if (lVar3 != 0) {
      FUN_00344020(lVar2,lVar3);
      return lVar2;
    }
  }
  return 0;
}


// ==== FUN_00347430 @ 00347430 ====

undefined8 FUN_00347430(int param_1,undefined8 param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  int *piVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar2 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x44);
  piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x48);
  if (0 < iVar4) {
    do {
      if (*piVar5 == **(int **)(param_3 + 8)) {
        iVar4 = 0;
        pauVar3 = (undefined1 (*) [16])piVar5[2];
        if (0 < piVar5[1]) {
          do {
            pauVar1 = (undefined1 (*) [16])((int)param_2 + *(int *)(pauVar3[1] + 0xc) * 0x20 + 0x20)
            ;
            auVar6 = _lqc2(*pauVar3);
            auVar7 = _lqc2(*pauVar1);
            auVar8 = _vmul(auVar6,auVar7);
            _vsubabc(auVar8,auVar8);
            _vmsubabc(in_vf0,auVar8);
            _vmsubbc(in_vf0,auVar8);
            _vopmula(auVar6,auVar7);
            auVar8 = _vopmsub(auVar7,auVar6);
            _vmulabc(auVar7,auVar6);
            _vmaddabc(auVar6,auVar7);
            auVar6 = _vmaddbc(auVar8,in_vf0);
            auVar6 = _sqc2(auVar6);
            *pauVar1 = auVar6;
            pauVar1 = pauVar1 + 1;
            auVar6 = _lqc2(pauVar3[1]);
            auVar7 = _lqc2(*pauVar1);
            _lqc2(*pauVar1);
            auVar6 = _vadd(auVar6,auVar7);
            auVar6 = _sqc2(auVar6);
            *pauVar1 = auVar6;
            iVar4 = iVar4 + 1;
            pauVar3 = pauVar3 + 2;
          } while (iVar4 < piVar5[1]);
        }
        return param_2;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 3;
    } while (iVar2 < iVar4);
  }
  return param_2;
}


// ==== FUN_003474f8 @ 003474f8 ====

void FUN_003474f8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003489a8();
  FUN_00346f58(param_1,param_2,param_3,uVar1,param_4);
  return;
}


// ==== FUN_00347558 @ 00347558 ====

undefined8
FUN_00347558(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  if (param_3 != 0) {
    iVar1 = *(int *)((int)param_3 + 0x20);
    if (iVar1 != 0) {
      uVar4 = *(uint *)((int)param_3 + 0x1c) & 0x7fffffff;
      puVar8 = (undefined4 *)param_1;
      if (uVar4 == 3) {
        puVar2 = (undefined4 *)((int)param_5 * 0x20 + iVar1);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar8 = *puVar2;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        uVar3 = *(undefined8 *)(puVar2 + 4);
        puVar8[6] = puVar2[6];
        *(undefined8 *)(puVar8 + 4) = uVar3;
      }
      else if ((3 < uVar4) && (uVar4 == 4)) {
        FUN_00345480(param_1,iVar1,param_5);
      }
      puVar8[7] = 0x3f800000;
      return param_1;
    }
  }
  return 0;
}


// ==== FUN_00347600 @ 00347600 ====

undefined1 (*) [16]
FUN_00347600(undefined4 param_1,int param_2,undefined1 (*param_3) [16],long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  int iVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_vf20 [16];
  
  if ((param_3 != (undefined1 (*) [16])0x0) && (param_4 != 0)) {
    iVar5 = DAT_0046a500 + 1;
    if (DAT_003d20d4 <= DAT_0046a500) {
      return param_3;
    }
    iVar1 = DAT_0046a500 * 0x670;
    piVar8 = (int *)(*(int *)(*(int *)(param_2 + 4) + 0x1c) + *(short *)(param_2 + 8) * 0x10);
    iVar14 = 0;
    DAT_0046a500 = iVar5;
    if (0 < *piVar8) {
      pauVar9 = param_3 + 3;
      pauVar10 = (undefined1 (*) [16])param_4 + 3;
      pauVar13 = (undefined1 (*) [16])(&DAT_0045f0f0 + iVar1);
      pauVar3 = (undefined1 (*) [16])param_4;
      pauVar4 = (undefined1 (*) [16])(&DAT_0045f0c0 + iVar1);
      do {
        pauVar12 = pauVar4 + 2;
        pauVar11 = param_3 + 2;
        if (1.5 < *(float *)(pauVar3[2] + 0xc)) {
          uVar2 = *(undefined8 *)*pauVar11;
          uVar6 = *(undefined4 *)(param_3[2] + 8);
          uVar7 = *(undefined4 *)(param_3[2] + 0xc);
          *(int *)*pauVar12 = (int)uVar2;
          *(int *)(pauVar4[2] + 4) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(pauVar4[2] + 8) = uVar6;
          *(undefined4 *)(pauVar4[2] + 0xc) = uVar7;
          uVar2 = *(undefined8 *)param_3[3];
          uVar6 = *(undefined4 *)(param_3[3] + 8);
          uVar7 = *(undefined4 *)(param_3[3] + 0xc);
          *(int *)pauVar4[3] = (int)uVar2;
          *(int *)(pauVar4[3] + 4) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(pauVar4[3] + 8) = uVar6;
          *(undefined4 *)(pauVar4[3] + 0xc) = uVar7;
        }
        else {
          _lqc2(*pauVar11);
          _lqc2(pauVar3[2]);
          _qmtc2(param_1);
          _vcallms(0x330);
          _vnop();
          auVar15 = _sqc2(in_vf20);
          *pauVar12 = auVar15;
          auVar15 = _lqc2(*pauVar9);
          auVar16 = _lqc2(*pauVar10);
          auVar16 = _vsub(auVar16,auVar15);
          auVar17 = _qmtc2(param_1);
          _vaddabc(auVar15,in_vf0);
          auVar15 = _vmaddbc(auVar16,auVar17);
          auVar15 = _sqc2(auVar15);
          *pauVar13 = auVar15;
        }
        iVar14 = iVar14 + 1;
        pauVar13 = pauVar13 + 2;
        pauVar10 = pauVar10 + 2;
        pauVar9 = pauVar9 + 2;
        param_3 = pauVar11;
        pauVar3 = pauVar3 + 2;
        pauVar4 = pauVar12;
      } while (iVar14 < *piVar8);
    }
    return (undefined1 (*) [16])(&DAT_0045f0c0 + iVar1);
  }
  return (undefined1 (*) [16])0x0;
}


// ==== FUN_00347738 @ 00347738 ====

void FUN_00347738(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    iVar3 = 0x1b;
    puVar1 = &DAT_0045f0c0;
    do {
      puVar4 = puVar1 + 0x670;
      iVar3 = iVar3 + -1;
      FUN_00343fc8(puVar1);
      iVar2 = 0x31;
      do {
        puVar1 = puVar1 + 0x20;
        iVar2 = iVar2 + -1;
        FUN_00343fc8(puVar1);
      } while (iVar2 != -1);
      puVar1 = puVar4;
    } while (iVar3 != -1);
  }
  return;
}


// ==== FUN_003477d0 @ 003477d0 ====

void FUN_003477d0(void)

{
  FUN_00347738(1,0xffff);
  return;
}


// ==== FUN_003477f0 @ 003477f0 ====

void FUN_003477f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x5c) < 9) {
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58)) = param_2;
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58) + 4) = param_3;
    *(undefined4 *)(*(short *)(param_1 + 0x5c) * 0xc + *(int *)(param_1 + 0x58) + 8) = param_4;
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + 1;
  }
  return;
}


// ==== FUN_00347858 @ 00347858 ====

void FUN_00347858(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  lVar3 = 0;
  sVar1 = *(short *)(param_1 + 0x5c);
  if (0 < *(short *)(param_1 + 0x5c)) {
    iVar5 = 0;
    do {
      piVar4 = (int *)(iVar5 + *(int *)(param_1 + 0x58));
      if (*piVar4 == param_2) {
        iVar5 = (int)sVar1;
        if (iVar5 < 2) {
          sVar1 = *(short *)(param_1 + 0x5c);
        }
        else {
          if (lVar3 != iVar5 + -1) {
            iVar2 = iVar5 * 0xc + *(int *)(param_1 + 0x58);
            iVar5 = *(int *)(iVar2 + -4);
            *(undefined8 *)piVar4 = *(undefined8 *)(iVar2 + -0xc);
            piVar4[2] = iVar5;
          }
          sVar1 = *(short *)(param_1 + 0x5c);
        }
        *(short *)(param_1 + 0x5c) = sVar1 + -1;
        return;
      }
      lVar3 = (long)((int)lVar3 + 1);
      iVar5 = iVar5 + 0xc;
      sVar1 = *(short *)(param_1 + 0x5c);
    } while (lVar3 < *(short *)(param_1 + 0x5c));
  }
  return;
}


// ==== FUN_003478f0 @ 003478f0 ====

void FUN_003478f0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  if (0 < *(short *)(param_1 + 0x5c)) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(iVar3 + *(int *)(param_1 + 0x58));
      if (puVar1[1] == param_2) {
        *param_3 = *puVar1;
        *param_4 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x58) + 8);
        return;
      }
      lVar2 = (long)((int)lVar2 + 1);
      iVar3 = iVar3 + 0xc;
    } while (lVar2 < *(short *)(param_1 + 0x5c));
  }
  *param_3 = 0;
  return;
}


// ==== FUN_00347948 @ 00347948 ====

void FUN_00347948(undefined4 param_1)

{
  DAT_003d24c4 = param_1;
  return;
}


// ==== FUN_00347958 @ 00347958 ====

void FUN_00347958(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x84) != 0) {
    if ((-1 < *(char *)(param_2 + 10)) &&
       (bVar1 = true,
       *(float *)(param_1 + *(char *)(param_2 + 10) * 4 + 0x74) <= *(float *)(param_1 + 0x20))) {
      bVar1 = false;
    }
    if (!bVar1) {
      if (-1 < *(char *)(param_2 + 9)) {
        fVar2 = *(float *)(*(char *)(param_2 + 9) * 8 + *(int *)(param_2 + 0xc) + 4);
        if (1.1920929e-07 < fVar2) {
          *(float *)(((int)((uint)*(byte *)(param_2 + 10) << 0x18) >> 0x16) + param_1 + 0x74) =
               *(float *)(param_1 + 0x20) + fVar2 / 59.94;
        }
      }
      if (DAT_003d24c4 != (code *)0x0) {
        (*DAT_003d24c4)();
      }
    }
  }
  return;
}


// ==== FUN_00347a28 @ 00347a28 ====

void FUN_00347a28(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x80);
  iVar1 = 3;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_00347a50 @ 00347a50 ====

bool FUN_00347a50(uint *param_1)

{
  return (*param_1 & 0x2000001) != 0 || (float)param_1[7] <= 1.0;
}


// ==== FUN_00347a90 @ 00347a90 ====

undefined4
FUN_00347a90(undefined4 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  puVar4 = (uint *)param_2;
  if (param_3 != -1) {
    if ((param_4 == 0) || (lVar2 = FUN_00350890(param_2,param_3,param_5), lVar2 == 0)) {
      FUN_00350570(param_1,param_2,param_3,param_5);
      uVar1 = *puVar4;
    }
    else {
      uVar1 = *puVar4;
    }
    uVar3 = 1;
    *puVar4 = uVar1 & 0xffdfffff;
  }
  *puVar4 = *puVar4 & 0xedfffffe;
  return uVar3;
}


// ==== FUN_00347b40 @ 00347b40 ====

undefined8 FUN_00347b40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)param_1;
    if (param_4 == 0) {
      uVar1 = uVar1 & 0xfffff7ff;
    }
    else {
      uVar1 = uVar1 | 0x800;
    }
    *(uint *)param_1 = uVar1;
    uVar2 = FUN_00347a90(0);
  }
  return uVar2;
}


// ==== FUN_00347b90 @ 00347b90 ====

bool FUN_00347b90(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = false;
  if (param_3 != 0) {
    bVar2 = param_4 != -1;
    puVar3 = (uint *)param_3;
    if (bVar2) {
      FUN_003509e0(param_1,0,param_2,param_3);
      *puVar3 = *puVar3 & 0xffdfffff;
      uVar1 = *puVar3;
    }
    else {
      uVar1 = *puVar3;
    }
    *puVar3 = uVar1 & 0xedfffffe;
  }
  return bVar2;
}


// ==== FUN_00347c08 @ 00347c08 ====

bool FUN_00347c08(uint *param_1,long param_2)

{
  if (param_2 != -1) {
    FUN_00350570();
    *param_1 = *param_1 & 0xffdfffff;
  }
  *param_1 = *param_1 & 0xedfffffe;
  return param_2 != -1;
}


// ==== FUN_00347c70 @ 00347c70 ====

undefined8 FUN_00347c70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00347c08(0,param_1,param_2,0);
  }
  return uVar1;
}


// ==== FUN_00347ca0 @ 00347ca0 ====

undefined8 FUN_00347ca0(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 auStack_60 [4];
  
  uVar2 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    auStack_60[0] = 0xffffffff;
    lVar1 = FUN_00345f28(param_3,param_2,auStack_60);
    if (lVar1 != 0) {
      uVar2 = FUN_00347c08(param_1,param_2,auStack_60[0],param_4);
    }
  }
  return uVar2;
}


// ==== FUN_00347d28 @ 00347d28 ====

void FUN_00347d28(undefined8 param_1,undefined8 param_2)

{
  FUN_00347ca0(0,param_1,param_2,0);
  return;
}


// ==== FUN_00347d48 @ 00347d48 ====

void FUN_00347d48(undefined8 param_1,undefined8 param_2)

{
  FUN_00347ca0(param_1,param_2,1);
  return;
}


// ==== FUN_00347d68 @ 00347d68 ====

void FUN_00347d68(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  puVar3 = (uint *)param_1;
  if (puVar3[3] != 0) {
    *puVar3 = *puVar3 | 0x800000;
    FUN_003461e0();
    lVar1 = FUN_0034f080(param_1,0);
    *puVar3 = *puVar3 & 0xff7fffff;
    if (lVar1 != 0) {
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0x3f800000;
      puVar3[0x13] = 0x3f800000;
      lVar2 = FUN_003489a8(param_1);
      if (lVar2 != 0) {
        FUN_003511d0(param_1,lVar1);
      }
    }
  }
  return;
}


// ==== FUN_00347e18 @ 00347e18 ====

void FUN_00347e18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_003489a8();
  if (lVar2 != 0) {
    iVar3 = (int)param_1;
    iVar1 = *(int *)(iVar3 + 0x54);
    if (*(int *)(iVar3 + 0x50) == iVar1) {
      *(int *)(iVar3 + 0x50) = iVar1 + *(int *)lVar2 * 0x40;
    }
    else {
      *(int *)(iVar3 + 0x50) = iVar1;
    }
    FUN_003511d0(param_1,param_2);
  }
  return;
}


// ==== FUN_00347e80 @ 00347e80 ====

long FUN_00347e80(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  iVar3 = (int)param_1;
  lVar5 = 0;
  if (*(int *)(iVar3 + 0xc) != 0) {
    FUN_003461e0();
    FUN_00343fc8(&uStack_90);
    *(undefined4 *)(iVar3 + 0x998) = 0;
    lVar5 = FUN_0034f080(param_1,&uStack_90);
    iVar3 = *(int *)(iVar3 + 0x9ac);
    if (iVar3 == 0) {
LAB_00347fd0:
      if (lVar5 != 0) {
        puVar4 = (undefined4 *)lVar5;
        *puVar4 = uStack_90;
        puVar4[1] = uStack_8c;
        puVar4[2] = uStack_88;
        puVar4[3] = uStack_84;
        *(undefined8 *)(puVar4 + 4) = uStack_80;
        puVar4[6] = uStack_78;
      }
    }
    else if (lVar5 != 0) {
      iVar1 = *(int *)(iVar3 + 0x10);
      do {
        if (iVar1 == -1) {
          iVar3 = *(int *)(iVar3 + 0x9ac);
        }
        else {
          *(undefined4 *)(iVar3 + 0x998) = 0;
          if ((*(int *)(iVar3 + 0x9a8) == 1) && (*(int *)(iVar3 + 0x99c) == 1)) {
            *(undefined4 *)(iVar3 + 0x14) = 0;
          }
          lVar2 = FUN_0034f080(iVar3,0);
          if (lVar2 == 0) {
            iVar3 = *(int *)(iVar3 + 0x9ac);
          }
          else {
            uVar6 = FUN_00348d00(0x3e99999a,iVar3);
            if (*(int *)(iVar3 + 0x10) == -1) {
              iVar3 = *(int *)(iVar3 + 0x9ac);
            }
            else {
              if (*(char *)(*(int *)(iVar3 + 0xc) + 1) == '\0') {
                iVar1 = *(int *)(iVar3 + 0x99c);
LAB_00347f88:
                if (iVar1 == 0) {
                  lVar5 = FUN_00346510(iVar3,lVar5,lVar2,0);
                }
                else {
                  lVar5 = FUN_00347600(uVar6,iVar3,lVar5,lVar2);
                }
              }
              else {
                if ((**(byte **)(*(int *)(iVar3 + 0xc) + 0x10) & 0x3f) != 0xe) {
                  iVar1 = *(int *)(iVar3 + 0x99c);
                  goto LAB_00347f88;
                }
                lVar5 = FUN_00346668(iVar3,lVar5,lVar2,0);
              }
              iVar3 = *(int *)(iVar3 + 0x9ac);
            }
          }
        }
        if ((iVar3 == 0) || (lVar5 == 0)) goto LAB_00347fd0;
        iVar1 = *(int *)(iVar3 + 0x10);
      } while( true );
    }
  }
  return lVar5;
}


// ==== FUN_00348018 @ 00348018 ====

void FUN_00348018(uint *param_1)

{
  uint uVar1;
  
  if (((param_1[0x266] == 0) && (uVar1 = *param_1, (uVar1 & 1) != 0)) && ((uVar1 & 0x10000000) != 0)
     ) {
    *param_1 = uVar1 & 0xefffffff;
    FUN_00349278();
  }
  return;
}


// ==== FUN_00348070 @ 00348070 ====

undefined4 FUN_00348070(float param_1,uint *param_2,float *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = 0;
  puVar2 = param_2;
  do {
    if (param_1 < 0.0) {
      *puVar2 = *puVar2 | 0x40000;
    }
    else {
      *puVar2 = *puVar2 & 0xfffbffff;
      if ((puVar2[3] != 0) && ((float)puVar2[5] == 0.0)) {
        FUN_0034f080(puVar2,0);
      }
    }
    if (param_2 == puVar2) {
      uVar1 = *puVar2;
    }
    else {
      FUN_00348018(puVar2);
      uVar1 = *puVar2;
    }
    if ((uVar1 & 0x200000) == 0) {
      fVar5 = (float)FUN_0034f2e0(puVar2);
      FUN_0034ee90(fVar5 * param_1,puVar2);
LAB_003481bc:
      fVar5 = (float)puVar2[5];
    }
    else {
      fVar5 = 1.0;
      fVar4 = (float)FUN_0034f2e0(puVar2);
      if ((float)puVar2[7] - fVar5 <= (float)puVar2[5] + fVar4 * param_1) {
        uVar3 = 1;
        FUN_0034ee90(((float)puVar2[7] - fVar5) - (float)puVar2[5],puVar2);
        *param_3 = ((float)puVar2[7] - fVar5) - (float)puVar2[5];
        goto LAB_003481bc;
      }
      fVar5 = (float)FUN_0034f2e0(puVar2);
      FUN_0034ee90(fVar5 * param_1,puVar2);
      fVar5 = (float)puVar2[5];
    }
    if (0.0 < fVar5) {
      fVar5 = (float)FUN_0034f2e0(puVar2);
      if ((float)puVar2[7] - 1.0 <= (float)puVar2[5] + fVar5 * param_1) {
        if ((float)puVar2[7] == 1.0) {
          *puVar2 = *puVar2 | 0x200000;
          uVar1 = puVar2[0x267];
        }
        else {
          uVar1 = puVar2[0x267];
        }
      }
      else {
        uVar1 = puVar2[0x267];
      }
    }
    else {
      uVar1 = puVar2[0x267];
    }
    if (uVar1 == 0) {
      fVar5 = (float)puVar2[8];
    }
    else {
      puVar2[0x268] = (uint)((float)puVar2[0x268] + param_1);
      fVar5 = (float)puVar2[8];
    }
    puVar2[9] = (uint)fVar5;
    puVar2[8] = (uint)(fVar5 + param_1);
    puVar2 = (uint *)puVar2[0x26b];
    if (puVar2 == (uint *)0x0) {
      return uVar3;
    }
  } while( true );
}


// ==== FUN_00348288 @ 00348288 ====

long FUN_00348288(float param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint *puVar3;
  long lVar4;
  undefined1 in_vf0 [16];
  undefined4 auStack_40 [4];
  
  lVar4 = 0;
  puVar3 = (uint *)param_2;
  uVar1 = *puVar3;
  auStack_40[0] = 0;
  *puVar3 = uVar1 & 0xfbffffff;
  if (param_1 == 0.0) {
    if (puVar3[3] != 0) {
      *puVar3 = uVar1 & 0xfbffffff | 0x800000;
      lVar4 = FUN_00347e80();
      *puVar3 = *puVar3 & 0xff7fffff;
      if (lVar4 != 0) {
        auVar2 = _sqc2(in_vf0);
        *(undefined1 (*) [16])(puVar3 + 0x10) = auVar2;
        auVar2 = _sqc2(in_vf0);
        *(undefined1 (*) [16])(puVar3 + 0xc) = auVar2;
        FUN_00347e18(param_2,lVar4);
      }
    }
    *puVar3 = *puVar3 & 0xfffffff7;
  }
  else {
    FUN_00348070(param_2,auStack_40);
    lVar4 = FUN_00347e80(param_2);
    if (lVar4 != 0) {
      FUN_00343c28(puVar3 + 0xc,lVar4);
      FUN_00347e18(param_2,lVar4);
    }
  }
  return lVar4;
}


// ==== FUN_003483a0 @ 003483a0 ====

void FUN_003483a0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(short *)(param_1 + 8) * 0x10 + *(int *)(*(int *)(param_1 + 4) + 0x1c));
  FUN_003486e0(param_2,puVar1[3],*puVar1);
  return;
}


// ==== FUN_003483e0 @ 003483e0 ====

undefined8 FUN_003483e0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)param_1 + 4);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(*(short *)((int)param_1 + 8) * 0x10 + *(int *)(iVar1 + 0x1c));
      uVar3 = FUN_003486e0(param_2,puVar2[3],*puVar2);
      return uVar3;
    }
  }
  return 0xffffffffffffffff;
}


// ==== FUN_00348430 @ 00348430 ====

void FUN_00348430(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(short *)(param_1 + 8) * 0x10 + *(int *)(*(int *)(param_1 + 4) + 0x1c));
  FUN_00348738(param_2,puVar1[3],*puVar1);
  return;
}


// ==== FUN_00348470 @ 00348470 ====

undefined8 FUN_00348470(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)param_1 + 4);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(*(short *)((int)param_1 + 8) * 0x10 + *(int *)(iVar1 + 0x1c));
      uVar3 = FUN_00348738(param_2,puVar2[3],*puVar2);
      return uVar3;
    }
  }
  return 0xffffffffffffffff;
}


// ==== FUN_00348560 @ 00348560 ====

void FUN_00348560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0xffffffff;
  lVar1 = FUN_00345f28(param_2,param_1,auStack_40);
  if (lVar1 != 0) {
    FUN_00348470(param_1,param_3);
  }
  return;
}


// ==== FUN_003485c8 @ 003485c8 ====

void FUN_003485c8(int param_1)

{
  FUN_00343278(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  return;
}


// ==== FUN_003485e8 @ 003485e8 ====

undefined4 FUN_003485e8(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 <= *param_2) {
    uVar1 = 0xffffffff;
    if (*param_2 <= *param_1) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 1;
}


// ==== FUN_00348610 @ 00348610 ====

int FUN_00348610(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar4 = param_3;
  if (param_3 != 0) {
    iVar2 = param_3 + -1;
    do {
      iVar2 = iVar2 >> 1;
      lVar3 = FUN_003485e8(iVar2 * 0x14 + param_2,param_1);
      iVar1 = iVar2;
      if (-1 < lVar3) {
        iVar1 = iVar5;
        iVar4 = iVar2;
      }
      iVar5 = iVar1;
      iVar2 = iVar5 + iVar4;
    } while (iVar5 + 1 != iVar4);
  }
  iVar5 = -1;
  if ((iVar4 < param_3) && (lVar3 = FUN_003485e8(iVar4 * 0x14 + param_2,param_1), lVar3 == 0)) {
    iVar5 = iVar4;
  }
  return iVar5;
}


// ==== FUN_003486e0 @ 003486e0 ====

undefined4 FUN_003486e0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_30 = param_1;
  lVar2 = FUN_00348610(&uStack_30);
  uVar1 = 0xffffffff;
  if (lVar2 != -1) {
    uVar1 = *(undefined4 *)((int)lVar2 * 0x14 + param_2 + 0x10);
  }
  return uVar1;
}


// ==== FUN_00348738 @ 00348738 ====

void FUN_00348738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00352a30();
  FUN_003486e0(uVar1,param_2,param_3);
  return;
}


// ==== FUN_003487d0 @ 003487d0 ====

float FUN_003487d0(int param_1)

{
  return (float)*(int *)(param_1 + 0x14);
}


// ==== FUN_003487e0 @ 003487e0 ====

undefined4 FUN_003487e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ==== FUN_003487e8 @ 003487e8 ====

int FUN_003487e8(int param_1)

{
  return param_1 + 0x14;
}


// ==== FUN_003487f0 @ 003487f0 ====

void FUN_003487f0(float param_1,float param_2,float param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (((*(uint *)param_5 & 0x800000) != 0) || (iVar3 = 0, *(int *)(param_4 + 0x24) < 1)) {
    return;
  }
  iVar1 = *(int *)(param_4 + 0x28);
  do {
    pfVar2 = (float *)(iVar1 + iVar3 * 0x10);
    if ((*(uint *)param_5 & 0x40000) == 0) {
      fVar5 = *pfVar2;
      fVar4 = fVar5 - 1.0;
      if ((param_2 <= fVar4) && (fVar4 < param_1)) goto LAB_0034890c;
      if (param_2 < 0.0) {
        fVar5 = fVar5 - 1.0;
        if (param_3 + param_2 <= fVar5) {
          if (param_3 + 1.0 <= fVar5) {
            iVar1 = *(int *)(param_4 + 0x24);
            goto LAB_00348960;
          }
          FUN_00347958(param_5);
        }
LAB_0034895c:
        iVar1 = *(int *)(param_4 + 0x24);
      }
      else {
        iVar1 = *(int *)(param_4 + 0x24);
      }
    }
    else {
      fVar5 = *pfVar2;
      fVar4 = fVar5 - 1.0;
      if ((fVar4 < param_1) || (param_2 <= fVar4)) {
        if (param_3 < param_2) {
          fVar5 = fVar5 - 1.0;
          if (fVar5 < -1.0) goto LAB_0034895c;
          if (fVar5 < param_2 - param_3) goto LAB_0034890c;
          iVar1 = *(int *)(param_4 + 0x24);
        }
        else {
          iVar1 = *(int *)(param_4 + 0x24);
        }
        goto LAB_00348960;
      }
LAB_0034890c:
      FUN_00347958(param_5);
      iVar1 = *(int *)(param_4 + 0x24);
    }
LAB_00348960:
    iVar3 = iVar3 + 1;
    if (iVar1 <= iVar3) {
      return;
    }
    iVar1 = *(int *)(param_4 + 0x28);
  } while( true );
}


// ==== FUN_003489a8 @ 003489a8 ====

int FUN_003489a8(long param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)((int)param_1 + 4);
    if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
       (sVar1 = *(short *)((int)param_1 + 8), sVar1 != -1)) {
      iVar3 = iVar2 + sVar1 * 0x10;
    }
  }
  return iVar3;
}


// ==== FUN_003489e0 @ 003489e0 ====

undefined4 FUN_003489e0(void)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  lVar1 = FUN_003489a8();
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)lVar1;
  }
  return uVar2;
}


// ==== FUN_00348a10 @ 00348a10 ====

void FUN_00348a10(undefined4 param_1,undefined4 param_2)

{
  DAT_003d2b00 = param_1;
  DAT_003d2b04 = param_2;
  return;
}


// ==== FUN_00348a28 @ 00348a28 ====

undefined4 FUN_00348a28(void)

{
  return DAT_003d2b04;
}


// ==== FUN_00348a38 @ 00348a38 ====

undefined4 FUN_00348a38(int param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((-1 < param_1) && (param_1 < DAT_003d2b04)) &&
     (pcVar1 = *(code **)(param_1 * 8 + DAT_003d2b00 + 4), pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)(param_2,param_1);
  }
  return uVar2;
}


// ==== FUN_00348a90 @ 00348a90 ====

int FUN_00348a90(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  bVar1 = false;
  piVar3 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x38) + *(short *)(param_1 + 8) * 8);
  piVar5 = (int *)piVar3[1];
  iVar4 = 0;
  if (0 < *piVar3) {
    iVar2 = *piVar5;
    while( true ) {
      if (iVar2 == param_2) {
        bVar1 = true;
      }
      else {
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0xc;
      }
      if ((bVar1) || (*piVar3 <= iVar4)) break;
      iVar2 = *piVar5;
    }
  }
  iVar2 = -1;
  if (bVar1) {
    iVar2 = iVar4;
  }
  return iVar2;
}


// ==== FUN_00348b18 @ 00348b18 ====

void FUN_00348b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00352a30(param_2);
  FUN_00348a90(param_1,uVar1);
  return;
}


// ==== FUN_00348c08 @ 00348c08 ====

undefined4 FUN_00348c08(int param_1,int param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined1 in_vf0 [16];
  undefined1 in_vf2 [16];
  undefined1 in_vf3 [16];
  undefined1 in_vf4 [16];
  undefined1 in_vf9 [16];
  undefined1 in_vf10 [16];
  undefined1 in_vf11 [16];
  undefined1 in_vf12 [16];
  undefined1 auStack_10 [16];
  
  uVar6 = 0;
  if (-1 < param_2) {
    piVar8 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x38) + *(short *)(param_1 + 8) * 8);
    if (param_2 < *piVar8) {
      iVar7 = piVar8[1] + param_2 * 0x30;
      _lqc2(*(undefined1 (*) [16])(iVar7 + 0x10));
      _vcallms(0x1a8);
      _vnop();
      auVar1 = _sqc2(in_vf2);
      auVar2 = _sqc2(in_vf3);
      auVar3 = _sqc2(in_vf4);
      auVar4 = _sqc2(in_vf0);
      auStack_10._12_4_ = auVar4._12_4_;
      auStack_10._0_12_ = *(undefined1 (*) [12])(iVar7 + 0x20);
      pauVar5 = (undefined1 (*) [16])(*(int *)(iVar7 + 0x2c) * 0x40 + *(int *)(param_1 + 0x50));
      _lqc2(auVar1);
      _lqc2(auVar2);
      _lqc2(auVar3);
      _lqc2(auStack_10);
      _lqc2(*pauVar5);
      _lqc2(pauVar5[1]);
      _lqc2(pauVar5[2]);
      _lqc2(pauVar5[3]);
      _vcallms(0);
      _vnop();
      auVar1 = _sqc2(in_vf9);
      *param_3 = auVar1;
      auVar1 = _sqc2(in_vf10);
      param_3[1] = auVar1;
      auVar1 = _sqc2(in_vf11);
      param_3[2] = auVar1;
      auVar1 = _sqc2(in_vf12);
      param_3[3] = auVar1;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}


// ==== FUN_00348d00 @ 00348d00 ====

float FUN_00348d00(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)param_2;
  fVar2 = 0.0;
  if (*(int *)(iVar1 + 0x99c) != 0) {
    if (*(int *)(iVar1 + 0x99c) < 1) {
      fVar2 = 0.0;
      if ((0.0 < param_1) && (fVar2 = 1.0 - *(float *)(iVar1 + 0x9a0) / param_1, 0.0 < fVar2)) {
        fVar2 = (float)FUN_003527e8(fVar2 * 3.1415927 * 0.5);
      }
      if (fVar2 <= 0.0) {
        FUN_003492e0(param_2);
      }
    }
    else {
      fVar3 = 1.0;
      fVar2 = *(float *)(iVar1 + 0x9a0) / *(float *)(iVar1 + 0x9a4);
      if (fVar2 < 1.0) {
        fVar2 = (float)FUN_003527e8(fVar2 * 3.1415927 * 0.5);
      }
      if (fVar3 <= fVar2) {
        *(undefined4 *)(iVar1 + 0x99c) = 0;
      }
    }
  }
  return fVar2;
}


// ==== FUN_00348e30 @ 00348e30 ====

int FUN_00348e30(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (-1 < param_2)) {
    iVar2 = *(int *)((int)param_1 + 0x9ac);
    iVar1 = 0;
    if (0 < param_2) {
      iVar2 = *(int *)(iVar2 + 0x9ac);
      while ((iVar1 = iVar1 + 1, iVar2 != 0 && (iVar1 < param_2))) {
        iVar2 = *(int *)(iVar2 + 0x9ac);
      }
    }
    return iVar2;
  }
  return 0;
}


// ==== FUN_00348e88 @ 00348e88 ====

bool FUN_00348e88(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_2;
  if (param_3 != -1) {
    uVar1 = FUN_00348e30(param_2,param_5);
    FUN_00350570(param_1,uVar1,param_3,param_4);
    *puVar2 = *puVar2 & 0xffdfffff;
  }
  *puVar2 = *puVar2 & 0xedfffffe;
  return param_3 != -1;
}


// ==== FUN_00348f28 @ 00348f28 ====

undefined4
FUN_00348f28(undefined4 param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = 0;
  lVar2 = FUN_00348e30(param_2,param_6);
  if (lVar2 != 0) {
    puVar3 = (uint *)lVar2;
    if (param_3 != 0xffffffff) {
      FUN_00350570(param_1,lVar2,param_3,param_5);
      uVar4 = 1;
      *puVar3 = *puVar3 & 0xffffff7f;
      puVar3[6] = 0xbf800000;
      if (param_4 != 0) {
        uVar1 = puVar3[0x267];
        puVar3[0x267] = 1;
        fVar5 = (float)puVar3[0x268];
        lVar2 = FUN_003507c0(lVar2,param_3);
        if (lVar2 == 0) {
          puVar3[0x26a] = 0;
          puVar3[0x269] = 0x3e99999a;
        }
        else {
          puVar3[0x269] = (uint)(*(float *)((int)lVar2 + 0x20) / 59.94);
          puVar3[0x26a] = *(uint *)((int)lVar2 + 0x28);
        }
        if (param_3 == puVar3[4]) {
          if ((int)uVar1 < 0) {
            fVar5 = (float)puVar3[0x269] * (1.0 - fVar5 / 0.3);
            puVar3[0x268] = (uint)fVar5;
            if (fVar5 < 0.0) {
              puVar3[0x268] = 0;
            }
          }
          else {
            puVar3[0x268] = 0;
          }
        }
        else {
          puVar3[0x268] = 0;
        }
      }
      *puVar3 = *puVar3 & 0xffdfffff;
    }
    *puVar3 = *puVar3 & 0xedfffffe;
  }
  return uVar4;
}


// ==== FUN_003490a8 @ 003490a8 ====

undefined8 FUN_003490a8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 auStack_50 [4];
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    auStack_50[0] = 0xffffffff;
    lVar1 = FUN_00345f28(param_2,param_1,auStack_50);
    if (lVar1 != 0) {
      uVar2 = FUN_00348e88(0,param_1,auStack_50[0],0,param_3);
    }
  }
  return uVar2;
}


// ==== FUN_00349128 @ 00349128 ====

undefined8 FUN_00349128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00348e88(0,param_1,param_2,0,param_3);
  }
  return uVar1;
}


// ==== FUN_00349158 @ 00349158 ====

undefined8 FUN_00349158(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 auStack_60 [4];
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    auStack_60[0] = 0xffffffff;
    lVar1 = FUN_00345f28(param_2,param_1,auStack_60);
    if (lVar1 != 0) {
      uVar2 = FUN_00348f28(0,param_1,auStack_60[0],param_4,0,param_3);
    }
  }
  return uVar2;
}


// ==== FUN_003491e8 @ 003491e8 ====

undefined8
FUN_003491e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00348f28(0,param_1,param_2,param_5,0,param_3);
  }
  return uVar1;
}


// ==== FUN_00349220 @ 00349220 ====

bool FUN_00349220(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00348e30();
  return (*puVar1 & 0x2000001) != 0 || (float)puVar1[7] <= 1.0;
}


// ==== FUN_00349278 @ 00349278 ====

void FUN_00349278(int param_1)

{
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0xffffffff;
  return;
}


// ==== FUN_00349288 @ 00349288 ====

void FUN_00349288(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  while (lVar1 = FUN_00348e30(param_1,iVar2), lVar1 != 0) {
    iVar2 = iVar2 + 1;
    FUN_00349278(lVar1);
  }
  return;
}


// ==== FUN_003492e0 @ 003492e0 ====

void FUN_003492e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x99c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


// ==== FUN_003492f0 @ 003492f0 ====

void FUN_003492f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  while (lVar1 = FUN_00348e30(param_1,iVar2), lVar1 != 0) {
    iVar2 = iVar2 + 1;
    FUN_003492e0(lVar1);
  }
  return;
}


// ==== FUN_00349348 @ 00349348 ====

undefined4 FUN_00349348(void)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  lVar1 = FUN_00348e30();
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)((int)lVar1 + 0x10);
  }
  return uVar2;
}


// ==== FUN_00349378 @ 00349378 ====

void FUN_00349378(void)

{
  long lVar1;
  
  lVar1 = FUN_00348e30();
  if (lVar1 != 0) {
    FUN_00349278(lVar1);
  }
  return;
}


// ==== FUN_003493a8 @ 003493a8 ====

bool FUN_003493a8(void)

{
  long lVar1;
  
  lVar1 = FUN_00348e30();
  if (lVar1 != 0) {
    *(uint *)lVar1 = *(uint *)lVar1 | 0x10000000;
  }
  return lVar1 != 0;
}


// ==== FUN_003493f0 @ 003493f0 ====

void FUN_003493f0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (DAT_003d2e9c != (int *)0x0) {
    (**(code **)(*DAT_003d2e9c + 0x24))((int)DAT_003d2e9c + (int)*(short *)(*DAT_003d2e9c + 0x20));
  }
  iVar3 = 3;
  DAT_003d2e9c = param_1;
  (**(code **)(*param_1 + 0x1c))((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  DAT_0046a510 = 0;
  puVar2 = &DAT_0046a520;
  do {
    puVar2[-3] = 0;
    puVar2[-2] = 0xffffffff;
    puVar2[-1] = 0;
    iVar3 = iVar3 + -1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uVar1 = (**(code **)(*param_1 + 0xc))
                      ((int)param_1 + (int)*(short *)(*param_1 + 8),0x1f60,&uStack_60);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 0xb;
  } while (-1 < iVar3);
  return;
}


// ==== FUN_003494d0 @ 003494d0 ====

void FUN_003494d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0046a520;
  iVar2 = 3;
  do {
    iVar2 = iVar2 + -1;
    (**(code **)(*DAT_003d2e9c + 0x14))
              ((int)DAT_003d2e9c + (int)*(short *)(*DAT_003d2e9c + 0x10),*puVar1,0);
    *puVar1 = 0;
    puVar1 = puVar1 + 0xb;
  } while (-1 < iVar2);
  (**(code **)(*DAT_003d2e9c + 0x24))((int)DAT_003d2e9c + (int)*(short *)(*DAT_003d2e9c + 0x20));
  DAT_003d2e9c = (int *)0x0;
  return;
}


// ==== FUN_00349560 @ 00349560 ====

undefined4 FUN_00349560(float param_1,long param_2,uint param_3,undefined4 *param_4)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  ulong in_hi;
  
  uVar12 = (undefined4)(in_hi >> 0x20);
  if (param_2 == 0) {
    param_2 = 0x46a510;
  }
  sVar1 = *(short *)(param_3 + 0xe);
  puVar15 = (uint *)param_2;
  *puVar15 = *puVar15 + 1;
  lVar4 = (long)(int)param_1;
  if ((long)sVar1 < (long)(int)param_1) {
    lVar4 = (long)sVar1;
  }
  if (puVar15[3] == param_3) {
    iVar18 = 1;
    if ((int)puVar15[2] == lVar4) {
      iVar21 = 0;
      goto LAB_00349648;
    }
  }
  else {
    iVar18 = 1;
  }
  while (uVar12 = (undefined4)(in_hi >> 0x20), iVar21 = -1, iVar18 < 4) {
    in_hi = in_hi & 0xffffffff00000000;
    if (puVar15[iVar18 * 0xb + 3] == param_3) {
      iVar21 = iVar18;
      if ((int)puVar15[iVar18 * 0xb + 2] == lVar4) break;
      iVar18 = iVar18 + 1;
    }
    else {
      iVar18 = iVar18 + 1;
    }
  }
LAB_00349648:
  if (iVar21 == -1) {
    iVar19 = 0;
    iVar18 = 0;
    puVar8 = puVar15 + 1;
    uVar5 = 0xffffffff;
    do {
      uVar11 = *puVar8;
      iVar21 = iVar19;
      if (uVar5 <= uVar11) {
        iVar21 = iVar18;
        uVar11 = uVar5;
      }
      iVar19 = iVar19 + 1;
      puVar8 = puVar8 + 0xb;
      iVar18 = iVar21;
      uVar5 = uVar11;
    } while (iVar19 < 4);
    puVar8 = puVar15 + iVar21 * 0xb + 4;
    (puVar15 + 1)[iVar21 * 0xb] = *puVar15;
    puVar15[iVar21 * 0xb + 2] = (uint)lVar4;
    puVar15[iVar21 * 0xb + 3] = param_3;
    puVar15[iVar21 * 0xb + 5] = *puVar8;
    if (*(int *)(param_3 + 0xb0) == 0) {
      puVar15[iVar21 * 0xb + 6] = *puVar8;
    }
    else {
      FUN_0034ae80(*(int *)(param_3 + 0xb0),*puVar8,*(undefined2 *)(param_3 + 0x2c));
      puVar15[iVar21 * 0xb + 6] = *puVar8 + *(short *)(param_3 + 0x2c) * 0x10;
    }
    uVar5 = puVar15[iVar21 * 0xb + 6] + *(short *)(param_3 + 0x2e) * 0x10;
    puVar15[iVar21 * 0xb + 7] = uVar5;
    uVar5 = uVar5 + *(short *)(param_3 + 10) * 0x10;
    puVar15[iVar21 * 0xb + 8] = uVar5;
    lVar2 = ((long)(int)uVar5 | CONCAT44(uVar12,iVar21 * 0x2c >> 0x1f)) +
            (long)(*(short *)(param_3 + 0x72) * 0xc);
    uVar5 = (uint)lVar2;
    puVar15[iVar21 * 0xb + 9] = uVar5;
    lVar2 = (long)(int)(uVar5 | (uint)((ulong)lVar2 >> 0x20)) +
            (long)(*(short *)(param_3 + 0x74) * 0xc);
    uVar5 = (uint)lVar2;
    puVar15[iVar21 * 0xb + 10] = uVar5;
    puVar15[iVar21 * 0xb + 0xb] =
         (uVar5 | (uint)((ulong)lVar2 >> 0x20)) + *(short *)(param_3 + 0x76) * 0xc;
    lVar4 = FUN_0034ae60(param_3,lVar4,puVar15[iVar21 * 0xb + 6],puVar15[iVar21 * 0xb + 7],
                         puVar15[iVar21 * 0xb + 10],puVar15[iVar21 * 0xb + 9],
                         puVar15[iVar21 * 0xb + 8]);
    if (lVar4 == 0) {
      return 0;
    }
  }
  iVar18 = 0;
  puVar20 = *(undefined4 **)(param_3 + 0xb8);
  puVar16 = (undefined8 *)puVar15[iVar21 * 0xb + 5];
  puVar6 = (undefined8 *)puVar15[iVar21 * 0xb + 6];
  puVar7 = (undefined8 *)puVar15[iVar21 * 0xb + 7];
  puVar17 = (undefined4 *)puVar15[iVar21 * 0xb + 8];
  puVar14 = (undefined4 *)puVar15[iVar21 * 0xb + 9];
  puVar10 = (undefined4 *)puVar15[iVar21 * 0xb + 10];
  if (0 < *(int *)(param_3 + 0x1c)) {
    puVar9 = param_4 + 4;
    do {
      puVar15 = (uint *)(*(int *)(param_3 + 0x9c) + iVar18 * 8);
      uVar5 = *puVar15;
      if ((uVar5 & 0x10) == 0) {
        if ((uVar5 & 0x20) != 0) {
          if (0 < (short)puVar15[1]) {
            if ((uVar5 & 0x200) == 0) {
              uVar3 = *puVar7;
              uVar12 = *(undefined4 *)(puVar7 + 1);
              uVar13 = *(undefined4 *)((int)puVar7 + 0xc);
              *param_4 = (int)uVar3;
              param_4[1] = (int)((ulong)uVar3 >> 0x20);
              param_4[2] = uVar12;
              param_4[3] = uVar13;
              puVar7 = puVar7 + 2;
            }
            else {
              uVar3 = *puVar6;
              uVar12 = *(undefined4 *)(puVar6 + 1);
              uVar13 = *(undefined4 *)((int)puVar6 + 0xc);
              *param_4 = (int)uVar3;
              param_4[1] = (int)((ulong)uVar3 >> 0x20);
              param_4[2] = uVar12;
              param_4[3] = uVar13;
              puVar6 = puVar6 + 2;
            }
          }
          goto LAB_00349884;
        }
        uVar5 = *puVar15;
      }
      else {
        uVar3 = *puVar16;
        uVar12 = *(undefined4 *)(puVar16 + 1);
        uVar13 = *(undefined4 *)((int)puVar16 + 0xc);
        *param_4 = (int)uVar3;
        param_4[1] = (int)((ulong)uVar3 >> 0x20);
        param_4[2] = uVar12;
        param_4[3] = uVar13;
        puVar16 = puVar16 + 2;
LAB_00349884:
        uVar5 = *puVar15;
      }
      if ((uVar5 & 0x40) == 0) {
        if ((uVar5 & 0x80) == 0) {
          if ((uVar5 & 0x100) == 0) {
            *puVar9 = *puVar20;
            puVar9[1] = puVar20[1];
            uVar12 = puVar20[2];
            puVar20 = puVar20 + 3;
          }
          else {
            *puVar9 = *puVar10;
            puVar9[1] = puVar10[1];
            uVar12 = puVar10[2];
            puVar10 = puVar10 + 3;
          }
        }
        else {
          *puVar9 = *puVar14;
          puVar9[1] = puVar14[1];
          uVar12 = puVar14[2];
          puVar14 = puVar14 + 3;
        }
      }
      else {
        *puVar9 = *puVar17;
        puVar9[1] = puVar17[1];
        uVar12 = puVar17[2];
        puVar17 = puVar17 + 3;
      }
      puVar9[2] = uVar12;
      iVar18 = iVar18 + 1;
      puVar9 = puVar9 + 8;
      param_4 = param_4 + 8;
    } while (iVar18 < *(int *)(param_3 + 0x1c));
  }
  return 1;
}


// ==== FUN_00349c38 @ 00349c38 ====

void FUN_00349c38(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  puVar1 = param_1 + 4;
  param_1 = param_1 + 0x30;
  iVar2 = 3;
  do {
    *puVar1 = param_1;
    iVar2 = iVar2 + -1;
    puVar1[-3] = 0;
    param_1 = param_1 + param_2 * 8;
    puVar1[-2] = 0xffffffff;
    puVar1[-1] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1 = puVar1 + 0xb;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_00349c90 @ 00349c90 ====

void FUN_00349c90(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  
  iVar11 = 0;
  iVar7 = 0;
  iVar20 = 0;
  iVar10 = 0;
  iStack_e4 = 0;
  iStack_e0 = 0;
  iStack_dc = 0;
  iVar15 = (int)param_1;
  if (0 < param_3) {
    puVar12 = *(uint **)(iVar15 + 0x9c);
    iVar6 = param_3;
    do {
      uVar4 = *puVar12;
      if ((uVar4 & 0x10) == 0) {
        if ((uVar4 & 0x20) != 0) {
          if (0 < (short)puVar12[1]) {
            if ((uVar4 & 0x200) == 0) {
              iStack_e0 = iStack_e0 + 1;
            }
            else {
              iStack_e4 = iStack_e4 + 1;
            }
          }
          goto LAB_00349d44;
        }
        uVar4 = *puVar12;
      }
      else {
        iVar11 = iVar11 + 1;
LAB_00349d44:
        uVar4 = *puVar12;
      }
      if ((uVar4 & 0x40) == 0) {
        if ((uVar4 & 0x80) == 0) {
          if ((uVar4 & 0x100) == 0) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar10 = iVar10 + 1;
          }
        }
        else {
          iVar20 = iVar20 + 1;
        }
      }
      else {
        iStack_dc = iStack_dc + 1;
      }
      iVar6 = iVar6 + -1;
      puVar12 = puVar12 + 2;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(iVar15 + 0xb0);
  if (iVar6 == 0) {
    puVar18 = &DAT_0046a5d0;
  }
  else {
    puVar18 = &DAT_0046a5d0 + *(short *)(iVar15 + 0x2c) * 4;
  }
  iVar5 = (int)*(short *)(iVar15 + 10);
  iVar3 = (int)*(short *)(iVar15 + 0x2e);
  puVar21 = (undefined4 *)(iVar7 * 0xc + *(int *)(iVar15 + 0xb8));
  puVar19 = (undefined8 *)(puVar18 + iStack_e4 * 4);
  puVar13 = puVar18 + iVar3 * 4 + iVar5 * 4 + iStack_dc * 3;
  puVar17 = (undefined8 *)(puVar18 + *(short *)(iVar15 + 0x2e) * 4 + iStack_e0 * 4);
  puVar14 = puVar18 + iVar3 * 4 + iVar5 * 4 + *(short *)(iVar15 + 0x72) * 3 + iVar20 * 3;
  puVar18 = puVar18 + iVar3 * 4 +
                      iVar5 * 4 +
                      *(short *)(iVar15 + 0x72) * 3 + *(short *)(iVar15 + 0x74) * 3 + iVar10 * 3;
  if (iVar6 != 0) {
    FUN_0034ad48(iVar6,&DAT_0046a5d0 + iVar11 * 4,iVar11);
  }
  lVar2 = FUN_0034a950(param_1,param_2,puVar19,iStack_e4,puVar17,iStack_e0,puVar18,iVar10);
  if (lVar2 == 0) {
    return;
  }
  puVar12 = (uint *)(*(int *)(iVar15 + 0x9c) + param_3 * 8);
  FUN_00344008(param_4);
  uVar4 = *puVar12;
  puVar16 = (undefined4 *)param_4;
  if ((uVar4 & 0x10) == 0) {
    if ((uVar4 & 0x20) == 0) {
      uVar4 = *puVar12;
    }
    else {
      if (0 < (short)puVar12[1]) {
        if ((uVar4 & 0x200) != 0) {
          uVar1 = *puVar19;
          uVar8 = *(undefined4 *)(puVar19 + 1);
          uVar9 = *(undefined4 *)((int)puVar19 + 0xc);
          *puVar16 = (int)uVar1;
          puVar16[1] = (int)((ulong)uVar1 >> 0x20);
          puVar16[2] = uVar8;
          puVar16[3] = uVar9;
          uVar4 = *puVar12;
          goto LAB_00349f44;
        }
        uVar1 = *puVar17;
        uVar8 = *(undefined4 *)(puVar17 + 1);
        uVar9 = *(undefined4 *)((int)puVar17 + 0xc);
        *puVar16 = (int)uVar1;
        puVar16[1] = (int)((ulong)uVar1 >> 0x20);
        puVar16[2] = uVar8;
        puVar16[3] = uVar9;
      }
      uVar4 = *puVar12;
    }
  }
  else {
    uVar1 = *(undefined8 *)(&DAT_0046a5d0 + iVar11 * 4);
    uVar8 = (&DAT_0046a5d8)[iVar11 * 4];
    uVar9 = (&DAT_0046a5dc)[iVar11 * 4];
    *puVar16 = (int)uVar1;
    puVar16[1] = (int)((ulong)uVar1 >> 0x20);
    puVar16[2] = uVar8;
    puVar16[3] = uVar9;
    uVar4 = *puVar12;
  }
LAB_00349f44:
  if ((uVar4 & 0x40) == 0) {
    if ((uVar4 & 0x80) == 0) {
      if ((uVar4 & 0x100) == 0) {
        if (puVar21 == (undefined4 *)0x0) {
          return;
        }
        puVar16[4] = *puVar21;
        puVar16[5] = puVar21[1];
        uVar8 = puVar21[2];
      }
      else {
        puVar16[4] = *puVar18;
        puVar16[5] = puVar18[1];
        uVar8 = puVar18[2];
      }
    }
    else {
      puVar16[4] = *puVar14;
      puVar16[5] = puVar14[1];
      uVar8 = puVar14[2];
    }
  }
  else {
    puVar16[4] = *puVar13;
    puVar16[5] = puVar13[1];
    uVar8 = puVar13[2];
  }
  puVar16[6] = uVar8;
  return;
}


// ==== FUN_0034a000 @ 0034a000 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034a000(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 in_vf0 [16];
  
  *(undefined4 *)(param_3[1] + 4) = 0;
  *(undefined4 *)(param_3[1] + 8) = 0;
  *(undefined4 *)param_3[1] = 0;
  auVar3 = _sqc2(in_vf0);
  *param_3 = auVar3;
  iVar7 = (int)param_1;
  puVar12 = (undefined8 *)&DAT_0046a5d0;
  if (*(int *)(iVar7 + 0xb0) != 0) {
    FUN_0034add8(*(int *)(iVar7 + 0xb0),0x46a5d0);
    puVar12 = (undefined8 *)(&DAT_0046a5d0 + *(int *)(iVar7 + 0x54) * 4);
  }
  puVar10 = puVar12 + *(short *)(iVar7 + 0x2e) * 2;
  puVar8 = puVar10 + *(short *)(iVar7 + 10) * 2;
  puVar9 = (undefined4 *)((int)puVar8 + *(short *)(iVar7 + 0x72) * 0xc);
  puVar11 = puVar9 + *(short *)(iVar7 + 0x74) * 3;
  lVar5 = FUN_0034ab18(param_1,param_2,puVar12,puVar10,puVar11,puVar9,puVar8);
  uVar6 = DAT_0046a5dc;
  uVar13 = DAT_0046a5d8;
  uVar4 = _DAT_0046a5d0;
  if (lVar5 != 0) {
    uVar1 = **(ushort **)(iVar7 + 0x9c);
    puVar2 = *(undefined4 **)(iVar7 + 0xb8);
    if ((uVar1 & 0x10) == 0) {
      if (((uVar1 & 0x20) != 0) && (0 < (short)(*(ushort **)(iVar7 + 0x9c))[2])) {
        if ((uVar1 & 0x200) == 0) {
          uVar4 = *puVar10;
          uVar13 = *(undefined4 *)(puVar10 + 1);
          uVar6 = *(undefined4 *)((int)puVar10 + 0xc);
          *(int *)*param_3 = (int)uVar4;
          *(int *)(*param_3 + 4) = (int)((ulong)uVar4 >> 0x20);
          *(undefined4 *)(*param_3 + 8) = uVar13;
          *(undefined4 *)(*param_3 + 0xc) = uVar6;
        }
        else {
          uVar4 = *puVar12;
          uVar13 = *(undefined4 *)(puVar12 + 1);
          uVar6 = *(undefined4 *)((int)puVar12 + 0xc);
          *(int *)*param_3 = (int)uVar4;
          *(int *)(*param_3 + 4) = (int)((ulong)uVar4 >> 0x20);
          *(undefined4 *)(*param_3 + 8) = uVar13;
          *(undefined4 *)(*param_3 + 0xc) = uVar6;
        }
      }
    }
    else {
      *(int *)*param_3 = (int)_DAT_0046a5d0;
      *(int *)(*param_3 + 4) = (int)((ulong)uVar4 >> 0x20);
      *(undefined4 *)(*param_3 + 8) = uVar13;
      *(undefined4 *)(*param_3 + 0xc) = uVar6;
    }
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if (puVar2 == (undefined4 *)0x0) {
            return;
          }
          *(undefined4 *)param_3[1] = *puVar2;
          *(undefined4 *)(param_3[1] + 4) = puVar2[1];
          uVar13 = puVar2[2];
        }
        else {
          *(undefined4 *)param_3[1] = *puVar11;
          *(undefined4 *)(param_3[1] + 4) = puVar11[1];
          uVar13 = puVar11[2];
        }
      }
      else {
        *(undefined4 *)param_3[1] = *puVar9;
        *(undefined4 *)(param_3[1] + 4) = puVar9[1];
        uVar13 = puVar9[2];
      }
    }
    else {
      *(undefined4 *)param_3[1] = *(undefined4 *)puVar8;
      *(undefined4 *)(param_3[1] + 4) = *(undefined4 *)((int)puVar8 + 4);
      uVar13 = *(undefined4 *)(puVar8 + 1);
    }
    *(undefined4 *)(param_3[1] + 8) = uVar13;
  }
  return;
}


// ==== FUN_0034a1e8 @ 0034a1e8 ====

void FUN_0034a1e8(byte *param_1,float *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  if (0 < (int)param_4) {
    iVar2 = 0;
    do {
      uVar3 = *(ulong *)(iVar2 * 8 + param_6) >> (long)(int)((uVar6 & 0x1f) << 1) & 3;
      if (uVar3 == 0) {
        param_1 = param_1 + 3;
      }
      else if (uVar3 < 4) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = param_1 + 3;
      }
      uVar6 = uVar6 + 1;
      iVar2 = (int)uVar6 >> 5;
    } while ((int)uVar6 < (int)param_4);
  }
  if ((int)param_4 < param_5) {
    pfVar5 = (float *)(param_4 * 0xc + param_3);
    do {
      uVar3 = *(ulong *)(((int)param_4 >> 5) * 8 + param_6) >> (long)(int)((param_4 & 0x1f) << 1) &
              3;
      if (uVar3 == 1) {
        *param_2 = *pfVar5 + (float)*param_1 * 0.0009765625;
        param_2[1] = pfVar5[1];
        fVar7 = pfVar5[2];
LAB_0034a39c:
        param_2[2] = fVar7;
      }
      else {
        if (uVar3 == 0) {
          bVar1 = *param_1;
LAB_0034a338:
          pbVar4 = param_1 + 1;
          *param_2 = *pfVar5 + (float)bVar1 * 0.0009765625;
          param_1 = param_1 + 2;
          fVar7 = pfVar5[1] + (float)*pbVar4 * 0.0009765625;
LAB_0034a378:
          param_2[1] = fVar7;
          fVar7 = pfVar5[2] + (float)*param_1 * 0.0009765625;
          goto LAB_0034a39c;
        }
        if (uVar3 != 2) {
          if (uVar3 != 3) {
            bVar1 = *param_1;
            goto LAB_0034a338;
          }
          *param_2 = *pfVar5;
          fVar7 = pfVar5[1];
          goto LAB_0034a378;
        }
        *param_2 = *pfVar5;
        param_2[1] = pfVar5[1] + (float)*param_1 * 0.0009765625;
        param_2[2] = pfVar5[2];
      }
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
      pfVar5 = pfVar5 + 3;
      param_2 = param_2 + 3;
    } while ((int)param_4 < param_5);
  }
  return;
}


// ==== FUN_0034a3c0 @ 0034a3c0 ====

void FUN_0034a3c0(ushort *param_1,float *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  ushort *puVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  if (0 < (int)param_4) {
    iVar2 = 0;
    do {
      uVar3 = *(ulong *)(iVar2 * 8 + param_6) >> (long)(int)((uVar6 & 0x1f) << 1) & 3;
      if (uVar3 == 0) {
        param_1 = param_1 + 3;
      }
      else if (uVar3 < 4) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = param_1 + 3;
      }
      uVar6 = uVar6 + 1;
      iVar2 = (int)uVar6 >> 5;
    } while ((int)uVar6 < (int)param_4);
  }
  if ((int)param_4 < param_5) {
    pfVar5 = (float *)(param_4 * 0xc + param_3);
    do {
      uVar3 = *(ulong *)(((int)param_4 >> 5) * 8 + param_6) >> (long)(int)((param_4 & 0x1f) << 1) &
              3;
      if (uVar3 == 1) {
        *param_2 = *pfVar5 + (float)*param_1 * 0.0009765625;
        param_2[1] = pfVar5[1];
        fVar7 = pfVar5[2];
LAB_0034a574:
        param_2[2] = fVar7;
      }
      else {
        if (uVar3 == 0) {
          uVar1 = *param_1;
LAB_0034a510:
          puVar4 = param_1 + 1;
          *param_2 = *pfVar5 + (float)uVar1 * 0.0009765625;
          param_1 = param_1 + 2;
          fVar7 = pfVar5[1] + (float)*puVar4 * 0.0009765625;
LAB_0034a550:
          param_2[1] = fVar7;
          fVar7 = pfVar5[2] + (float)*param_1 * 0.0009765625;
          goto LAB_0034a574;
        }
        if (uVar3 != 2) {
          if (uVar3 != 3) {
            uVar1 = *param_1;
            goto LAB_0034a510;
          }
          *param_2 = *pfVar5;
          fVar7 = pfVar5[1];
          goto LAB_0034a550;
        }
        *param_2 = *pfVar5;
        param_2[1] = pfVar5[1] + (float)*param_1 * 0.0009765625;
        param_2[2] = pfVar5[2];
      }
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
      pfVar5 = pfVar5 + 3;
      param_2 = param_2 + 3;
    } while ((int)param_4 < param_5);
  }
  return;
}


// ==== FUN_0034a598 @ 0034a598 ====

void FUN_0034a598(ushort *param_1,float *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  ushort *puVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  if (0 < (int)param_4) {
    iVar2 = 0;
    do {
      uVar3 = *(ulong *)(iVar2 * 8 + param_6) >> (long)(int)((uVar6 & 0x1f) << 1) & 3;
      if (uVar3 == 0) {
        param_1 = param_1 + 3;
      }
      else if (uVar3 < 4) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = param_1 + 3;
      }
      uVar6 = uVar6 + 1;
      iVar2 = (int)uVar6 >> 5;
    } while ((int)uVar6 < (int)param_4);
  }
  if ((int)param_4 < param_5) {
    pfVar5 = (float *)(param_4 * 0xc + param_3);
    do {
      uVar3 = *(ulong *)(((int)param_4 >> 5) * 8 + param_6) >> (long)(int)((param_4 & 0x1f) << 1) &
              3;
      if (uVar3 == 1) {
        *param_2 = *pfVar5 + (float)*param_1 * 0.0009765625;
        param_2[1] = pfVar5[1];
        fVar7 = pfVar5[2];
LAB_0034a74c:
        param_2[2] = fVar7;
      }
      else {
        if (uVar3 == 0) {
          uVar1 = *param_1;
LAB_0034a6e8:
          puVar4 = param_1 + 1;
          *param_2 = *pfVar5 + (float)uVar1 * 0.0009765625;
          param_1 = param_1 + 2;
          fVar7 = pfVar5[1] + (float)*puVar4 * 0.0009765625;
LAB_0034a728:
          param_2[1] = fVar7;
          fVar7 = pfVar5[2] + (float)*param_1 * 0.0009765625;
          goto LAB_0034a74c;
        }
        if (uVar3 != 2) {
          if (uVar3 != 3) {
            uVar1 = *param_1;
            goto LAB_0034a6e8;
          }
          *param_2 = *pfVar5;
          fVar7 = pfVar5[1];
          goto LAB_0034a728;
        }
        *param_2 = *pfVar5;
        param_2[1] = pfVar5[1] + (float)*param_1 * 0.0009765625;
        param_2[2] = pfVar5[2];
      }
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
      pfVar5 = pfVar5 + 3;
      param_2 = param_2 + 3;
    } while ((int)param_4 < param_5);
  }
  return;
}


// ==== FUN_0034a770 @ 0034a770 ====

void FUN_0034a770(undefined4 *param_1,int param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_3 < param_4) {
    iVar3 = (int)param_4 - (int)param_3;
    puVar2 = (undefined4 *)((int)param_3 * 0xc + param_2);
    do {
      iVar3 = iVar3 + -1;
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      puVar1 = param_1 + 2;
      param_1 = param_1 + 3;
      puVar2[2] = *puVar1;
      puVar2 = puVar2 + 3;
    } while (iVar3 != 0);
  }
  return;
}


// ==== FUN_0034a7c8 @ 0034a7c8 ====

undefined4
FUN_0034a7c8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (*(short *)(param_1 + 0x2e) != 0) {
    FUN_0034b128(*(int *)(param_1 + 0xac) + *(short *)(param_1 + 0x5a) * param_2,param_3,0,
                 *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0xcc),
                 *(undefined4 *)(param_1 + 0xa8));
  }
  if (*(short *)(param_1 + 10) != 0) {
    FUN_0034aea0(*(int *)(param_1 + 0xa0) + *(short *)(param_1 + 0x58) * param_2 * 2,param_4,0,
                 *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0xd0),
                 *(undefined4 *)(param_1 + 0xa4));
  }
  if (*(short *)(param_1 + 0x76) != 0) {
    FUN_0034a1e8(*(int *)(param_1 + 0xc0) + *(short *)(param_1 + 0x7a) * param_2,param_5,
                 *(undefined4 *)(param_1 + 200),0,*(short *)(param_1 + 0x76),
                 *(undefined4 *)(param_1 + 0xd4));
  }
  if (*(short *)(param_1 + 0x74) != 0) {
    FUN_0034a3c0(*(int *)(param_1 + 0xbc) + *(short *)(param_1 + 0x78) * param_2 * 2,param_6,
                 *(undefined4 *)(param_1 + 0xc4),0,*(short *)(param_1 + 0x74),
                 *(undefined4 *)(param_1 + 0xd8));
  }
  if (*(short *)(param_1 + 0x72) != 0) {
    FUN_0034a770(*(int *)(param_1 + 0xb4) + *(short *)(param_1 + 0x72) * param_2 * 0xc,param_7,0);
  }
  if (*(short *)(param_1 + 0x8a) != 0) {
    FUN_0034a598(*(int *)(param_1 + 0xe0) + (uint)*(byte *)(param_1 + 0x89) * param_2 * 2,param_8,
                 *(undefined4 *)(param_1 + 0xe4),0,*(short *)(param_1 + 0x8a),
                 *(undefined4 *)(param_1 + 0xe8));
  }
  return 1;
}


// ==== FUN_0034a950 @ 0034a950 ====

undefined4
FUN_0034a950(int param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6
            ,undefined8 param_7,long param_8,undefined4 param_9,int param_10,undefined4 param_11,
            int param_12,undefined4 param_13,int param_14)

{
  if (param_4 < *(short *)(param_1 + 0x2e)) {
    FUN_0034b128(*(int *)(param_1 + 0xac) + *(short *)(param_1 + 0x5a) * param_2,param_3,param_4,
                 (int)param_4 + 1,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xa8));
  }
  if (param_6 < *(short *)(param_1 + 10)) {
    FUN_0034aea0(*(int *)(param_1 + 0xa0) + *(short *)(param_1 + 0x58) * param_2 * 2,param_5,param_6
                 ,(int)param_6 + 1,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xa4));
  }
  if (param_8 < *(short *)(param_1 + 0x76)) {
    FUN_0034a1e8(*(int *)(param_1 + 0xc0) + *(short *)(param_1 + 0x7a) * param_2,param_7,
                 *(undefined4 *)(param_1 + 200),param_8,(int)param_8 + 1,
                 *(undefined4 *)(param_1 + 0xd4));
  }
  if ((long)param_10 < (long)*(short *)(param_1 + 0x74)) {
    FUN_0034a3c0(*(int *)(param_1 + 0xbc) + *(short *)(param_1 + 0x78) * param_2 * 2,param_9,
                 *(undefined4 *)(param_1 + 0xc4),(long)param_10,param_10 + 1,
                 *(undefined4 *)(param_1 + 0xd8));
  }
  if ((long)param_12 < (long)*(short *)(param_1 + 0x72)) {
    FUN_0034a770(*(int *)(param_1 + 0xb4) + *(short *)(param_1 + 0x72) * param_2 * 0xc,param_11,
                 (long)param_12,param_12 + 1);
  }
  if ((long)param_14 < (long)*(short *)(param_1 + 0x8a)) {
    FUN_0034a598(*(int *)(param_1 + 0xe0) + (uint)*(byte *)(param_1 + 0x89) * param_2 * 2,param_13,
                 *(undefined4 *)(param_1 + 0xe4),(long)param_14,param_14 + 1,
                 *(undefined4 *)(param_1 + 0xe8));
  }
  return 1;
}


// ==== FUN_0034ab18 @ 0034ab18 ====

undefined4
FUN_0034ab18(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  if (*(short *)(param_1 + 0x2e) != 0) {
    FUN_0034b128(*(int *)(param_1 + 0xac) + *(short *)(param_1 + 0x5a) * param_2,param_3,0,1,
                 *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(short *)(param_1 + 10) != 0) {
    FUN_0034aea0(*(int *)(param_1 + 0xa0) + *(short *)(param_1 + 0x58) * param_2 * 2,param_4,0,1,
                 *(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(short *)(param_1 + 0x76) != 0) {
    FUN_0034a1e8(*(int *)(param_1 + 0xc0) + *(short *)(param_1 + 0x7a) * param_2,param_5,
                 *(undefined4 *)(param_1 + 200),0,1,*(undefined4 *)(param_1 + 0xd4));
  }
  if (*(short *)(param_1 + 0x74) != 0) {
    FUN_0034a3c0(*(int *)(param_1 + 0xbc) + *(short *)(param_1 + 0x78) * param_2 * 2,param_6,
                 *(undefined4 *)(param_1 + 0xc4),0,1,*(undefined4 *)(param_1 + 0xd8));
  }
  if (*(short *)(param_1 + 0x72) != 0) {
    FUN_0034a770(*(int *)(param_1 + 0xb4) + *(short *)(param_1 + 0x72) * param_2 * 0xc,param_7,0,1);
  }
  return 1;
}


// ==== FUN_0034ac70 @ 0034ac70 ====

void FUN_0034ac70(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  float fVar2;
  
  if (0 < param_3) {
    fVar2 = 6.2831855;
    uVar1 = param_1[1];
    while( true ) {
      param_3 = param_3 + -1;
      FUN_00352958(-((float)uVar1 * fVar2) * 1.5258789e-05,
                   -((float)param_1[2] * fVar2) * 1.5258789e-05,
                   -((float)*param_1 * fVar2) * 1.5258789e-05,param_2);
      if (param_3 == 0) break;
      uVar1 = param_1[4];
      param_1 = param_1 + 3;
      param_2 = param_2 + 0x10;
    }
  }
  return;
}


// ==== FUN_0034ad48 @ 0034ad48 ====

void FUN_0034ad48(int param_1,undefined8 param_2,int param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(param_3 * 6 + param_1);
  FUN_00352958(-((float)puVar1[1] * 6.2831855) * 1.5258789e-05,
               -((float)puVar1[2] * 6.2831855) * 1.5258789e-05,
               -((float)*puVar1 * 6.2831855) * 1.5258789e-05,param_2);
  return;
}


// ==== FUN_0034add8 @ 0034add8 ====

void FUN_0034add8(ushort *param_1,undefined8 param_2)

{
  FUN_00352958(-((float)param_1[1] * 6.2831855) * 1.5258789e-05,
               -((float)param_1[2] * 6.2831855) * 1.5258789e-05,
               -((float)*param_1 * 6.2831855) * 1.5258789e-05,param_2);
  return;
}


// ==== FUN_0034ae60 @ 0034ae60 ====

void FUN_0034ae60(void)

{
  FUN_0034a7c8();
  return;
}


// ==== FUN_0034ae80 @ 0034ae80 ====

void FUN_0034ae80(void)

{
  FUN_0034ac70();
  return;
}


// ==== FUN_0034aea0 @ 0034aea0 ====

void FUN_0034aea0(ushort *param_1,int param_2,long param_3,long param_4,undefined8 param_5,
                 ushort *param_6)

{
  undefined1 in_zero_qw [16];
  ulong uVar1;
  undefined1 in_t2_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar9 = 0;
  if (0 < param_3) {
    do {
      uVar8 = (uint)lVar9;
      uVar1 = *(ulong *)(((int)uVar8 >> 5) * 8 + (int)param_5) >> (long)(int)((uVar8 & 0x1f) << 1) &
              3;
      if (uVar1 == 0) {
        param_1 = param_1 + 3;
      }
      else if (uVar1 < 4) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = param_1 + 3;
      }
      lVar9 = (long)(int)(uVar8 + 1);
      param_6 = param_6 + 3;
    } while (lVar9 < param_3);
  }
  if (param_3 < param_4) {
    do {
      uVar8 = (uint)param_3;
      uVar1 = *(ulong *)(((int)uVar8 >> 5) * 8 + (int)param_5) >> (long)(int)((uVar8 & 0x1f) << 1) &
              3;
      auVar6._8_8_ = in_t2_qw._8_8_;
      if (uVar1 == 1) {
        auVar11 = _qmtc2(0xb8c90fdb);
        auVar10 = _vaddbc(auVar11,auVar11);
        auVar6._2_6_ = 0;
        auVar6._0_2_ = param_6[2];
        auVar6 = _qfsrv(auVar6,auVar6);
        auVar11._8_8_ = auVar6._8_8_;
        auVar11._2_6_ = 0;
        auVar11._0_2_ = param_6[1];
        _qfsrv(auVar11,auVar11);
        auVar6 = _qmtc2((uint)*param_1);
        auVar6 = _vitof0(auVar6);
        auVar6 = _vmul(auVar6,auVar10);
        auVar6 = _qmfc2(auVar6._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar6);
        auVar11 = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(auVar11._0_4_,in_t2_qw._0_4_,auVar6._0_4_,param_2);
        param_1 = param_1 + 1;
      }
      else if (uVar1 == 0) {
LAB_0034b0a0:
        auVar11 = _qmtc2(0xb8c90fdb);
        auVar11 = _vaddbc(auVar11,auVar11);
        auVar5._2_6_ = 0;
        auVar5._0_2_ = param_1[2];
        auVar5._8_8_ = auVar6._8_8_;
        auVar6 = _qfsrv(auVar5,auVar5);
        auVar7._8_8_ = auVar6._8_8_;
        auVar7._2_6_ = 0;
        auVar7._0_2_ = param_1[1];
        _qfsrv(auVar7,auVar7);
        auVar6 = _qmtc2((uint)*param_1);
        auVar6 = _vitof0(auVar6);
        auVar6 = _vmul(auVar6,auVar11);
        auVar6 = _qmfc2(auVar6._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar6);
        auVar11 = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(auVar11._0_4_,in_t2_qw._0_4_,auVar6._0_4_,param_2);
        param_1 = param_1 + 3;
      }
      else if (uVar1 == 2) {
        auVar11 = _qmtc2(0xb8c90fdb);
        auVar11 = _vaddbc(auVar11,auVar11);
        auVar10._2_6_ = 0;
        auVar10._0_2_ = *param_1;
        auVar10._8_8_ = auVar6._8_8_;
        auVar6 = _qfsrv(auVar10,auVar10);
        auVar4._8_8_ = auVar6._8_8_;
        auVar4._2_6_ = 0;
        auVar4._0_2_ = param_6[1];
        _qfsrv(auVar4,auVar4);
        auVar6 = _qmtc2((uint)*param_6);
        auVar6 = _vitof0(auVar6);
        auVar6 = _vmul(auVar6,auVar11);
        auVar6 = _qmfc2(auVar6._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar6);
        auVar11 = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(auVar11._0_4_,in_t2_qw._0_4_,auVar6._0_4_,param_2);
        param_1 = param_1 + 1;
      }
      else {
        if (uVar1 != 3) goto LAB_0034b0a0;
        auVar11 = _qmtc2(0xb8c90fdb);
        auVar11 = _vaddbc(auVar11,auVar11);
        auVar2._2_6_ = 0;
        auVar2._0_2_ = param_6[2];
        auVar2._8_8_ = auVar6._8_8_;
        auVar6 = _qfsrv(auVar2,auVar2);
        auVar3._8_8_ = auVar6._8_8_;
        auVar3._2_6_ = 0;
        auVar3._0_2_ = *param_1;
        _qfsrv(auVar3,auVar3);
        auVar6 = _qmtc2((uint)*param_6);
        auVar6 = _vitof0(auVar6);
        auVar6 = _vmul(auVar6,auVar11);
        auVar6 = _qmfc2(auVar6._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar6);
        auVar11 = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(auVar11._0_4_,in_t2_qw._0_4_,auVar6._0_4_,param_2);
        param_1 = param_1 + 1;
      }
      param_3 = (long)(int)(uVar8 + 1);
      param_6 = param_6 + 3;
      param_2 = param_2 + 0x10;
    } while (param_3 < param_4);
  }
  return;
}


// ==== FUN_0034b128 @ 0034b128 ====

void FUN_0034b128(byte *param_1,int param_2,long param_3,long param_4,undefined8 param_5,
                 ushort *param_6)

{
  undefined1 in_zero_qw [16];
  ulong uVar1;
  undefined1 in_t2_qw [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_t3_qw [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar9 = 0;
  if (0 < param_3) {
    do {
      uVar8 = (uint)lVar9;
      uVar1 = *(ulong *)(((int)uVar8 >> 5) * 8 + (int)param_5) >> (long)(int)((uVar8 & 0x1f) << 1) &
              3;
      if (uVar1 == 0) {
        param_1 = param_1 + 3;
      }
      else if (uVar1 < 4) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = param_1 + 3;
      }
      lVar9 = (long)(int)(uVar8 + 1);
      param_6 = param_6 + 3;
    } while (lVar9 < param_3);
  }
  if (param_3 < param_4) {
    do {
      uVar8 = (uint)param_3;
      uVar1 = *(ulong *)(((int)uVar8 >> 5) * 8 + (int)param_5) >> (long)(int)((uVar8 & 0x1f) << 1) &
              3;
      auVar4._8_8_ = in_t2_qw._8_8_;
      auVar12._8_8_ = in_t3_qw._8_8_;
      if (uVar1 == 1) {
        auVar12 = _qmtc2(0xb8c90fdb);
        auVar15 = _vaddbc(auVar12,auVar12);
        auVar12 = _qmtc2(0x41800000);
        auVar11 = _vaddbc(auVar12,auVar12);
        auVar4._2_6_ = 0;
        auVar4._0_2_ = param_6[2];
        auVar4 = _qfsrv(auVar4,auVar4);
        auVar14._8_8_ = auVar4._8_8_;
        auVar14._2_6_ = 0;
        auVar14._0_2_ = param_6[1];
        _qfsrv(auVar14,auVar14);
        auVar4 = _qmtc2((uint)*param_6);
        auVar12 = _vitof0(auVar4);
        auVar4 = _pextlw(0,(ulong)*param_1);
        auVar4 = _qmtc2(auVar4._0_4_);
        auVar4 = _vitof0(auVar4);
        _vsubabc(auVar12,in_vf0);
        auVar4 = _vmsub(auVar4,auVar11);
        auVar4 = _vmul(auVar4,auVar15);
        auVar4 = _qmfc2(auVar4._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar4);
        in_t3_qw = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(in_t3_qw._0_4_,in_t2_qw._0_4_,auVar4._0_4_,param_2);
        param_1 = param_1 + 1;
      }
      else if (uVar1 == 0) {
LAB_0034b3a0:
        auVar14 = _qmtc2(0xb8c90fdb);
        auVar15 = _vaddbc(auVar14,auVar14);
        auVar14 = _qmtc2(0x41800000);
        auVar11 = _vaddbc(auVar14,auVar14);
        auVar10._2_6_ = 0;
        auVar10._0_2_ = param_6[2];
        auVar10._8_8_ = auVar4._8_8_;
        auVar4 = _qfsrv(auVar10,auVar10);
        auVar13._8_8_ = auVar4._8_8_;
        auVar13._2_6_ = 0;
        auVar13._0_2_ = param_6[1];
        _qfsrv(auVar13,auVar13);
        auVar4 = _qmtc2((uint)*param_6);
        auVar14 = _vitof0(auVar4);
        auVar6._1_7_ = 0;
        auVar6[0] = param_1[2];
        auVar6._8_8_ = auVar12._8_8_;
        auVar4 = _qfsrv(auVar6,auVar6);
        auVar7._8_8_ = auVar4._8_8_;
        auVar7._1_7_ = 0;
        auVar7[0] = param_1[1];
        _qfsrv(auVar7,auVar7);
        auVar4 = _qmtc2((uint)*param_1);
        auVar4 = _vitof0(auVar4);
        _vsubabc(auVar14,in_vf0);
        auVar4 = _vmsub(auVar4,auVar11);
        auVar4 = _vmul(auVar4,auVar15);
        auVar4 = _qmfc2(auVar4._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar4);
        in_t3_qw = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(in_t3_qw._0_4_,in_t2_qw._0_4_,auVar4._0_4_,param_2);
        param_1 = param_1 + 3;
      }
      else if (uVar1 == 2) {
        auVar14 = _qmtc2(0xb8c90fdb);
        auVar13 = _vaddbc(auVar14,auVar14);
        auVar14 = _qmtc2(0x41800000);
        auVar10 = _vaddbc(auVar14,auVar14);
        auVar11._2_6_ = 0;
        auVar11._0_2_ = param_6[2];
        auVar11._8_8_ = auVar4._8_8_;
        auVar4 = _qfsrv(auVar11,auVar11);
        auVar15._8_8_ = auVar4._8_8_;
        auVar15._2_6_ = 0;
        auVar15._0_2_ = param_6[1];
        _qfsrv(auVar15,auVar15);
        auVar4 = _qmtc2((uint)*param_6);
        auVar14 = _vitof0(auVar4);
        auVar5._1_7_ = 0;
        auVar5[0] = *param_1;
        auVar5._8_8_ = auVar12._8_8_;
        auVar4 = _pcpyld(auVar5,in_zero_qw);
        auVar4 = _qmtc2(auVar4._0_4_);
        auVar4 = _vitof0(auVar4);
        _vsubabc(auVar14,in_vf0);
        auVar4 = _vmsub(auVar4,auVar10);
        auVar4 = _vmul(auVar4,auVar13);
        auVar4 = _qmfc2(auVar4._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar4);
        in_t3_qw = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(in_t3_qw._0_4_,in_t2_qw._0_4_,auVar4._0_4_,param_2);
        param_1 = param_1 + 1;
      }
      else {
        if (uVar1 != 3) goto LAB_0034b3a0;
        auVar14 = _qmtc2(0xb8c90fdb);
        auVar15 = _vaddbc(auVar14,auVar14);
        auVar14 = _qmtc2(0x41800000);
        auVar11 = _vaddbc(auVar14,auVar14);
        auVar2._2_6_ = 0;
        auVar2._0_2_ = param_6[2];
        auVar2._8_8_ = auVar4._8_8_;
        auVar4 = _qfsrv(auVar2,auVar2);
        auVar3._8_8_ = auVar4._8_8_;
        auVar3._2_6_ = 0;
        auVar3._0_2_ = param_6[1];
        _qfsrv(auVar3,auVar3);
        auVar4 = _qmtc2((uint)*param_6);
        auVar14 = _vitof0(auVar4);
        auVar12._1_7_ = 0;
        auVar12[0] = *param_1;
        auVar4 = _qfsrv(auVar12,in_zero_qw);
        auVar4 = _qmtc2(auVar4._0_4_);
        auVar4 = _vitof0(auVar4);
        _vsubabc(auVar14,in_vf0);
        auVar4 = _vmsub(auVar4,auVar11);
        auVar4 = _vmul(auVar4,auVar15);
        auVar4 = _qmfc2(auVar4._0_4_);
        in_t2_qw = _pextuw(in_zero_qw,auVar4);
        in_t3_qw = _pextuw(in_zero_qw,in_t2_qw);
        FUN_00352958(in_t3_qw._0_4_,in_t2_qw._0_4_,auVar4._0_4_,param_2);
        param_1 = param_1 + 1;
      }
      param_3 = (long)(int)(uVar8 + 1);
      param_6 = param_6 + 3;
      param_2 = param_2 + 0x10;
    } while (param_3 < param_4);
  }
  return;
}


// ==== FUN_0034b460 @ 0034b460 ====

undefined4 FUN_0034b460(undefined8 param_1,undefined8 param_2)

{
  FUN_00343ed0();
  FUN_00347948(param_2);
  return 1;
}


// ==== FUN_0034b498 @ 0034b498 ====

float FUN_0034b498(float param_1,float param_2)

{
  if (param_2 - 1.0 < param_1) {
    param_1 = param_1 - param_2 * (float)(int)(param_1 / param_2);
  }
  return param_1;
}


