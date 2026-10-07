// ==== FUN_001b8798 @ 001b8798 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b8798(undefined8 param_1,undefined1 (*param_2) [16],int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  auVar9 = _lqc2(param_2[1]);
  DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  auVar8 = _lqc2(param_2[3]);
  DAT_00418594 = DAT_00418594 + DAT_00418590;
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar7 = _lqc2(*param_2);
  auVar3 = _qmtc2((float)DAT_00418590 * 2.3283064e-10 * 0.8 + 0.1);
  _vaddabc(auVar9,in_vf0);
  _vmsubabc(auVar9,auVar3);
  auVar3 = _vmaddbc(auVar8,auVar3);
  auVar5 = _vsub(auVar3,auVar5);
  auStack_50 = _sqc2(auVar3);
  auVar3 = _vmul(auVar5,auVar5);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar10 = _vwaitq();
  auVar3 = _vmulq(auVar5,uVar10);
  auVar4 = _vmove(auVar3);
  auVar3 = _vmul(auVar7,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar6,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  if (0.0 < auVar3._0_4_) {
    auVar7 = _vsub(in_vf0,auVar7);
  }
  _qmfc2(auVar4._0_4_);
  auStack_40 = _sqc2(auVar7);
  FUN_001bb190(param_1);
  iVar1 = param_4 + 7;
  if (-1 < param_4) {
    iVar1 = param_4;
  }
  auVar3 = _lqc2(auStack_40);
  pbVar2 = (byte *)(*(int *)(param_3 + 8) + (iVar1 >> 3));
  auVar3 = _qmfc2(auVar3._0_4_);
  *pbVar2 = *pbVar2 & ~(byte)(1 << (param_4 + (iVar1 >> 3) * -8 & 0x1fU));
  FUN_001b1728(auStack_50._0_8_,auVar3._0_8_,auStack_a0);
  FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_a0,0x7e048c4b7c69a424,1);
  FUN_001ded60(auStack_60);
  return;
}


// ==== FUN_001b89c8 @ 001b89c8 ====

void FUN_001b89c8(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 in_vf0 [16];
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
  undefined4 in_vuI;
  undefined4 uVar29;
  undefined4 uStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if (DAT_004159d0 == 0) {
    auVar7 = _pextlw(0,0);
    auVar7 = _pextlw(0xffffffffbc23d70a,auVar7._0_8_);
    DAT_004159c0 = auVar7._0_4_;
    DAT_004159c4 = auVar7._4_4_;
    DAT_004159c8 = auVar7._8_4_;
    DAT_004159cc = auVar7._12_4_;
    DAT_004159d0 = 1;
    uStack_160 = DAT_004159c0;
    fStack_15c = DAT_004159c4;
    uStack_158 = DAT_004159c8;
    uStack_154 = DAT_004159cc;
  }
  iVar9 = 0;
  FUN_001b8138(param_1 + 0x4459);
  if (0 < *param_1) {
    auVar7 = _vadd(in_vf0,in_vf0);
    auStack_90 = _sqc2(auVar7);
    iVar10 = 0;
    do {
      iVar13 = (int)param_1 + iVar10 + 0x10;
      iVar5 = *(ushort *)(iVar13 + 0x10a) - 1;
      *(short *)(iVar13 + 0x10a) = (short)iVar5;
      if (iVar5 * 0x10000 < 1) {
        iVar5 = iVar9 + -1;
        iVar13 = *param_1 + -1;
        *param_1 = iVar13;
        if (iVar9 != iVar13) {
          pauVar6 = (undefined1 (*) [16])(param_1 + iVar13 * 0x44 + 4);
          puVar4 = (undefined4 *)((int)param_1 + iVar10 + 0x10);
          do {
            puVar8 = puVar4;
            uVar1 = *(undefined8 *)*pauVar6;
            iVar9 = *(int *)((int)*pauVar6 + 8);
            iVar10 = *(int *)((int)*pauVar6 + 0xc);
            uVar2 = *(undefined8 *)pauVar6[1];
            iVar11 = *(int *)((int)pauVar6[1] + 8);
            iVar12 = *(int *)((int)pauVar6[1] + 0xc);
            *puVar8 = (int)uVar1;
            puVar8[1] = (int)((ulong)uVar1 >> 0x20);
            puVar8[2] = iVar9;
            puVar8[3] = iVar10;
            puVar8[4] = (int)uVar2;
            puVar8[5] = (int)((ulong)uVar2 >> 0x20);
            puVar8[6] = iVar11;
            puVar8[7] = iVar12;
            pauVar6 = pauVar6 + 2;
            puVar4 = puVar8 + 8;
          } while (pauVar6 != (undefined1 (*) [16])(param_1 + iVar13 * 0x44 + 0x44));
          auVar7 = *pauVar6;
          puVar8[8] = auVar7._0_4_;
          puVar8[9] = auVar7._4_4_;
          puVar8[10] = auVar7._8_4_;
          puVar8[0xb] = auVar7._12_4_;
        }
LAB_001b8f6c:
        iVar13 = *param_1;
        iVar9 = iVar5;
      }
      else {
        if (*(short *)(iVar13 + 0x108) < 1) {
          uStack_160 = *(undefined4 *)(iVar13 + 0xa0);
          fStack_15c = *(float *)(iVar13 + 0xa4);
          uStack_158 = *(undefined4 *)(iVar13 + 0xa8);
          uStack_154 = *(undefined4 *)(iVar13 + 0xac);
          if (*(float *)(iVar13 + 0x100) < fStack_15c) {
LAB_001b8cb0:
            fVar16 = *(float *)(iVar13 + 0xf8);
          }
          else {
            uStack_160 = *(undefined4 *)(iVar13 + 0xb0);
            fStack_15c = *(float *)(iVar13 + 0xb4);
            uStack_158 = *(undefined4 *)(iVar13 + 0xb8);
            uStack_154 = *(undefined4 *)(iVar13 + 0xbc);
            if ((fStack_15c < 0.0) || (bVar3 = false, 90.0 < *(float *)(iVar13 + 0xf4))) {
              bVar3 = true;
            }
            if (bVar3) {
              fVar16 = *(float *)(iVar13 + 0x104) * 10.0;
              *(undefined2 *)(iVar13 + 0x10a) = 0;
              fVar16 = (float)((int)fVar16 * (uint)(1.0 < fVar16) |
                              (uint)(1.0 >= fVar16) * 0x3f800000);
              if (1.0 <= (float)((int)fVar16 * (uint)(fVar16 < 3.0) |
                                (uint)(fVar16 >= 3.0) * 0x40400000)) {
                auVar18 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x10));
                auVar19 = _vaddbc(in_vf0,in_vf0);
                auVar7 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0x30));
                auVar7 = _vsub(auVar7,auVar18);
                auVar7 = _vmul(auVar7,auVar7);
                auVar18 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0xa0));
                _vaddabc(auVar7,auVar7);
                auVar7 = _vmaddbc(auVar19,auVar7);
                _vnop();
                _vnop();
                _vnop();
                _vsqrt(auVar7);
                auVar7 = _vaddbc(in_vf0,in_vf0);
                uVar29 = _vwaitq();
                auVar7 = _vmulq(auVar7,uVar29);
                auVar7 = _qmfc2(auVar7._0_4_);
                fVar16 = auVar7._0_4_;
                auVar7 = _qmtc2(fVar16 * 0.2);
                auVar7 = _vaddbc(auVar18,auVar7);
                _qmfc2(auVar7._0_4_);
                FUN_001bc548(fVar16,fVar16);
                FUN_001df080(auStack_c0);
                goto LAB_001b8c4c;
              }
              uVar15 = *(uint *)(iVar13 + 0xf8);
            }
            else {
              uVar15 = *(uint *)(iVar13 + 0xf8);
            }
            if ((uVar15 & 0x7f800000) < 0x37800001) {
              auVar18 = _qmtc2(0);
              _lqc2(*(undefined1 (*) [16])(iVar13 + 0xb0));
              _lqc2(*(undefined1 (*) [16])(iVar13 + 0xc0));
              auVar7 = _vaddbc(in_vf0,auVar18);
              auVar18 = _vaddbc(in_vf0,auVar18);
              auVar7 = _sqc2(auVar7);
              *(undefined1 (*) [16])(iVar13 + 0xb0) = auVar7;
              auVar7 = _sqc2(auVar18);
              *(undefined1 (*) [16])(iVar13 + 0xc0) = auVar7;
              *(undefined4 *)(iVar13 + 0xfc) = 0x3dcccccd;
              *(undefined4 *)(iVar13 + 0xf8) = 0;
              goto LAB_001b8cb0;
            }
            fVar16 = *(float *)(iVar13 + 0xf8);
          }
          fVar16 = fVar16 + *(float *)(iVar13 + 0xfc);
          auVar19 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0xe0));
          auVar20 = _vmaxbc(in_vf0,in_vf0);
          auVar18 = _vmul(auVar19,auVar19);
          auVar7 = _vaddbc(in_vf0,in_vf0);
          fVar17 = *(float *)(iVar13 + 0xf4) + fVar16;
          _vaddabc(auVar18,auVar18);
          auVar7 = _vmaddbc(auVar7,auVar18);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar7);
          uVar29 = _vwaitq();
          auVar21 = _vmulq(auVar19,uVar29);
          auVar7 = _qmtc2(fVar17 * 0.017453292);
          _lqc2(auStack_b0);
          auVar7 = _vaddbc(in_vf0,auVar7);
          auVar19 = _qmtc2(0x3f800000);
          _ctc2(0x3fc90fdb);
          _vnop();
          auVar7 = _vsubi(auVar7,in_vuI);
          auVar18 = _vabs(auVar7);
          auVar7 = _vaddbc(in_vf0,auVar19);
          _ctc2(0xbe22f983);
          _vnop();
          _vmulai(auVar18,in_vuI);
          _ctc2(0x4b400000);
          _vnop();
          _vmsubai(auVar20,in_vuI);
          _vmaddai(auVar20,in_vuI);
          _ctc2(0xbe22f983);
          _vnop();
          _vmsubai(auVar18,in_vuI);
          _ctc2(0x3f000000);
          _vnop();
          auVar18 = _vmsubi(auVar20,in_vuI);
          auVar18 = _vabs(auVar18);
          _ctc2(0x3e800000);
          _vnop();
          auVar18 = _vsubi(auVar18,in_vuI);
          auVar20 = _vmul(auVar18,auVar18);
          auStack_b0 = _sqc2(auVar7);
          auVar26 = _vmul(auVar20,auVar20);
          _ctc2(0xc2992661);
          _vnop();
          auVar19 = _vmuli(auVar18,in_vuI);
          _ctc2(0xc2255de0);
          _vnop();
          auVar24 = _vmuli(auVar18,in_vuI);
          auVar7 = _vmul(auVar26,auVar26);
          auVar19 = _vmul(auVar19,auVar20);
          _ctc2(0x42a33457);
          _vnop();
          auVar23 = _vmuli(auVar18,in_vuI);
          _ctc2(0x421ed7b7);
          _vnop();
          auVar22 = _vmuli(auVar18,in_vuI);
          _lqc2(auStack_a0);
          _vmula(auVar24,auVar20);
          _vmadda(auVar19,auVar26);
          _ctc2(0x40c90fda);
          _vmadda(auVar23,auVar26);
          _vmaddai(auVar18,in_vuI);
          auVar18 = _vmadd(auVar22,auVar7);
          auVar7 = _vmulbc(auVar21,auVar21);
          _vaddbc(in_vf0,auVar7);
          auVar7 = _vmulbc(auVar21,auVar21);
          _vaddbc(in_vf0,auVar7);
          auVar19 = _vmul(auVar21,auVar21);
          auVar7 = _lqc2(auStack_b0);
          auVar19 = _vsub(in_vf0,auVar19);
          auVar18 = _vsubbc(auVar7,auVar18);
          auVar20 = _lqc2(auStack_b0);
          auVar7 = _vmulbc(auVar21,auVar21);
          auVar18 = _vaddbc(in_vf0,auVar18);
          auVar7 = _vaddbc(in_vf0,auVar7);
          auVar19 = _vaddbc(auVar19,auVar20);
          auVar7 = _vmulbc(auVar7,auVar18);
          auVar21 = _vmulbc(auVar21,auVar18);
          auStack_a0 = _sqc2(auVar7);
          auVar22 = _vmulbc(auVar19,auVar18);
          _lqc2(auStack_100);
          auVar18 = _vsubbc(auVar20,auVar22);
          _lqc2(auStack_110);
          auVar7 = _lqc2(auStack_a0);
          auVar20 = _vaddbc(in_vf0,auVar18);
          auVar18 = _vsubbc(auVar7,auVar21);
          _lqc2(auStack_f0);
          auVar23 = _vaddbc(in_vf0,auVar18);
          auVar7 = _vaddbc(auVar7,auVar21);
          auVar18 = _lqc2(auStack_a0);
          auVar24 = _vaddbc(in_vf0,auVar7);
          auVar19 = _lqc2(auStack_b0);
          auVar26 = _vsubbc(auVar18,auVar21);
          auVar7 = _vaddbc(auVar18,auVar21);
          auVar27 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0xb0));
          auVar18 = _vsubbc(auVar19,auVar22);
          _vmove(auVar20);
          auVar19 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0xc0));
          auVar25 = _vaddbc(in_vf0,auVar7);
          auVar28 = _vadd(auVar27,auVar19);
          _vmove(auVar23);
          auVar19 = _lqc2(auStack_a0);
          auVar27 = _vaddbc(in_vf0,auVar18);
          auVar7 = _vsubbc(auVar19,auVar21);
          _vmove(auVar24);
          auVar21 = _vaddbc(auVar19,auVar21);
          auVar18 = _lqc2(*(undefined1 (*) [16])(iVar13 + 0xa0));
          auVar26 = _vaddbc(in_vf0,auVar26);
          _vmove(auVar25);
          _sqc2(auVar20);
          auVar20 = _vaddbc(in_vf0,auVar7);
          auVar7 = _lqc2(auStack_b0);
          auVar19 = _vadd(auVar18,auVar28);
          _sqc2(auVar23);
          auVar7 = _vsubbc(auVar7,auVar22);
          _sqc2(auVar24);
          _vmove(auVar27);
          _vmove(auVar26);
          auVar21 = _vaddbc(in_vf0,auVar21);
          _sqc2(auVar25);
          auVar18 = _vaddbc(in_vf0,auVar7);
          _sqc2(auVar27);
          _sqc2(auVar26);
          auVar7 = _sqc2(auVar20);
          *(undefined1 (*) [16])(iVar13 + 0x70) = auVar7;
          auVar7 = _sqc2(auVar21);
          *(undefined1 (*) [16])(iVar13 + 0x80) = auVar7;
          auVar7 = _sqc2(auVar18);
          *(undefined1 (*) [16])(iVar13 + 0x90) = auVar7;
          auVar7 = _sqc2(auVar19);
          *(undefined1 (*) [16])(iVar13 + 0xa0) = auVar7;
          *(float *)(iVar13 + 0xf8) = fVar16;
          *(float *)(iVar13 + 0xf4) = fVar17;
          auStack_110 = _sqc2(auVar20);
          auStack_100 = _sqc2(auVar21);
          auStack_f0 = _sqc2(auVar18);
          uStack_d0 = auStack_90._0_4_;
          uStack_cc = auStack_90._4_4_;
          uStack_c8 = auStack_90._8_4_;
          uStack_c4 = auStack_90._12_4_;
          uStack_e0 = auStack_90._0_4_;
          uStack_dc = auStack_90._4_4_;
          uStack_d8 = auStack_90._8_4_;
          uStack_d4 = auStack_90._12_4_;
          auStack_150 = _sqc2(auVar20);
          auStack_140 = _sqc2(auVar21);
          auStack_130 = _sqc2(auVar18);
          uStack_120 = auStack_90._0_4_;
          uStack_11c = auStack_90._4_4_;
          uStack_118 = auStack_90._8_4_;
          uStack_114 = auStack_90._12_4_;
          auVar7 = _sqc2(auVar28);
          *(undefined1 (*) [16])(iVar13 + 0xb0) = auVar7;
          FUN_001b8180(param_1 + 0x4459,iVar13,0x42a33457,0xffffffffbe22f983,0x4b400000,0x3e800000,
                       0x3f000000);
          iVar5 = iVar9;
          goto LAB_001b8f6c;
        }
        *(short *)(iVar13 + 0x108) = *(short *)(iVar13 + 0x108) + -1;
LAB_001b8c4c:
        FUN_001b8180(param_1 + 0x4459,iVar13);
        iVar13 = *param_1;
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar9 * 0x110;
    } while (iVar9 < iVar13);
  }
  iVar9 = 0;
  piVar14 = param_1 + 0x43c0;
  do {
    if ((*piVar14 != 0) &&
       (fVar16 = (float)param_1[iVar9 + 0x4430] - *(float *)(DAT_0040f4d0 + 0x1c),
       param_1[iVar9 + 0x4430] = (int)fVar16, fVar16 <= 0.0)) {
      FUN_001b8798(param_1[iVar9 + 0x4400]);
      auVar18 = _lqc2(*(undefined1 (*) [16])(*piVar14 + 0x10));
      auVar7 = _lqc2(*(undefined1 (*) [16])(*piVar14 + 0x30));
      auVar19 = _qmtc2(0x3f000000);
      auVar7 = _vsub(auVar7,auVar18);
      auVar7 = _vmulbc(auVar7,auVar19);
      auVar7 = _vadd(auVar7,auVar18);
      auVar7 = _qmfc2(auVar7._0_4_);
      FUN_001b1728(auVar7._0_8_);
      FUN_001b7a00(DAT_0040f4d8 + 0x696f0,&uStack_160,0x6855dd9f6b702000,1);
      FUN_001eaac8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x28));
      *piVar14 = 0;
    }
    iVar9 = iVar9 + 1;
    piVar14 = piVar14 + 1;
  } while (iVar9 < 0x20);
  return;
}


// ==== FUN_001b90d0 @ 001b90d0 ====

undefined4 FUN_001b90d0(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = 0;
  FUN_001b7f08(param_1 + 0x4581);
  FUN_001b8138(param_1 + 0x4459);
  FUN_001c3e08();
  uVar1 = 0;
  do {
    param_1[uVar1 + 0x43c0] = 0;
    param_1[uVar1 + 0x43e0] = 0;
    *(undefined2 *)((int)param_1 + uVar1 * 2 + 0x11080) = 0xffff;
    param_1[uVar1 + 0x4430] = 0;
    param_1[uVar1 + 0x4400] = 0;
    *(undefined1 *)((int)param_1 + uVar1 + 0x11140) = 0;
    uVar1 = uVar1 + 1 & 0xffff;
    *(undefined1 *)(param_1 + 0x4458) = 0;
  } while (uVar1 < 0x20);
  return 1;
}


// ==== FUN_001b9198 @ 001b9198 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b9198(undefined4 param_1,uint param_2,undefined1 (*param_3) [16],undefined4 param_4,
                 undefined8 param_5,char param_6,undefined2 param_7,undefined4 param_8,
                 undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  
  lVar7 = (long)DAT_003f7220;
  auVar9 = _pextlw(lVar7,lVar7);
  auVar9 = _pextlw(lVar7,auVar9._0_8_);
  auVar15 = _qmtc2(param_4);
  auVar9 = _qmtc2(auVar9._0_4_);
  if (DAT_004159f0 == 0) {
    auVar8 = _pextlw(0,0);
    auVar8 = _pextlw(0xffffffffbc23d70a,auVar8._0_8_);
    DAT_004159e0 = auVar8._0_4_;
    DAT_004159e4 = auVar8._4_4_;
    DAT_004159e8 = auVar8._8_4_;
    DAT_004159ec = auVar8._12_4_;
    DAT_004159f0 = 1;
  }
  *(undefined4 *)param_3[0xf] = param_8;
  param_3[0x10][0xd] = param_9;
  auVar8 = _vadd(in_vf0,in_vf0);
  param_3[0x10][0xe] = param_10;
  param_3[0x10][0xc] = param_6;
  if (param_6 == '\x03') {
    *(undefined4 *)(param_3[6] + 8) = 0;
    *(undefined4 *)(param_3[6] + 0xc) = 0;
    _sqc2(auVar8);
    auVar14 = _sqc2(auVar8);
    param_3[4] = auVar14;
  }
  lVar7 = (long)(char)param_3[0x10][0xc];
  auVar14 = _vmove(auVar8);
  _sqc2(auVar8);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  pauVar5 = param_3;
  if (0 < lVar7) {
    do {
      auVar10 = _lqc2(pauVar5[1]);
      lVar7 = (long)((int)lVar7 + -1);
      auVar9 = _vmini(auVar9,auVar10);
      auVar14 = _vadd(auVar14,auVar10);
      pauVar5 = pauVar5 + 1;
    } while (lVar7 != 0);
  }
  cVar1 = param_3[0x10][0xc];
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar11 = _vsub(in_vf0,in_vf0);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  lVar7 = 0;
  auVar10 = _sqc2(auVar10);
  param_3[7] = auVar10;
  auVar10 = _sqc2(auVar11);
  param_3[10] = auVar10;
  auVar10 = _sqc2(auVar12);
  param_3[8] = auVar10;
  auVar10 = _sqc2(auVar13);
  param_3[9] = auVar10;
  auVar10 = _qmtc2(1.0 / (float)(int)cVar1);
  auVar14 = _vmulbc(auVar14,auVar10);
  cVar1 = param_3[0x10][0xc];
  auVar14 = _sqc2(auVar14);
  param_3[10] = auVar14;
  auVar9 = _vaddbc(in_vf0,auVar9);
  auVar9 = _sqc2(auVar9);
  param_3[10] = auVar9;
  pauVar5 = param_3;
  if ('\0' < cVar1) {
    do {
      pauVar5 = pauVar5 + 1;
      auVar9 = _lqc2(*pauVar5);
      lVar7 = (long)((int)lVar7 + 1);
      auVar14 = _lqc2(param_3[10]);
      auVar9 = _vsub(auVar9,auVar14);
      auVar9 = _sqc2(auVar9);
      *pauVar5 = auVar9;
    } while (lVar7 < (char)param_3[0x10][0xc]);
  }
  auVar14 = _vsub(in_vf0,auVar15);
  *(undefined4 *)param_3[0x10] = param_1;
  auVar9 = _lqc2(_DAT_004432c0);
  _vopmula(auVar9,auVar14);
  auVar10 = _vopmsub(auVar14,auVar9);
  *(int *)param_3[0xb] = (int)param_5;
  *(int *)(param_3[0xb] + 4) = (int)((ulong)param_5 >> 0x20);
  *(undefined4 *)(param_3[0xb] + 8) = in_a2_udw;
  *(undefined4 *)(param_3[0xb] + 0xc) = in_register_0000006c;
  uVar4 = DAT_004159ec;
  uVar3 = DAT_004159e8;
  uVar2 = DAT_004159e4;
  uVar16 = DAT_004159e0;
  auVar9 = _vmul(auVar10,auVar10);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar8,auVar9);
  auVar15 = _qmfc2(auVar9._0_4_);
  *(undefined2 *)(param_3[0x10] + 8) = param_7;
  _lqc2(*param_3);
  auVar9 = _vadd(in_vf0,auVar14);
  *(undefined4 *)param_3[0xc] = uVar16;
  *(undefined4 *)(param_3[0xc] + 4) = uVar2;
  *(undefined4 *)(param_3[0xc] + 8) = uVar3;
  *(undefined4 *)(param_3[0xc] + 0xc) = uVar4;
  *(undefined2 *)(param_3[0x10] + 10) = 0x50;
  auVar9 = _sqc2(auVar9);
  *param_3 = auVar9;
  *(undefined4 *)(param_3[0xf] + 4) = 0;
  *(undefined4 *)(param_3[0xf] + 0xc) = 0;
  if (auVar15._0_4_ < 2.3283064e-10) {
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    *(float *)(param_3[0xf] + 8) = ((float)DAT_00418590 * 2.3283064e-10 + 1.0) * 10.0;
    uVar6 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    DAT_00418590 = uVar6 * 0x10000 + ((int)uVar6 >> 0x10) + DAT_00418594 + uVar6;
    DAT_00418594 = DAT_00418594 + uVar6 + DAT_00418590;
    auVar9 = _pextlw((long)(int)(1.0 - ((float)DAT_00418590 * 2.3283064e-10 +
                                       (float)DAT_00418590 * 2.3283064e-10)),
                     (long)(int)(1.0 - ((float)uVar6 * 2.3283064e-10 + (float)uVar6 * 2.3283064e-10)
                                ));
    auVar9 = _pextlw(0x3e800000,auVar9._0_8_);
    auVar15 = _qmtc2(auVar9._0_4_);
    auVar9 = _sqc2(auVar15);
    param_3[0xe] = auVar9;
    auVar9 = _vmul(auVar15,auVar15);
    _sqc2(auVar15);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar8,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    uVar16 = _vwaitq();
    auVar9 = _vmulq(auVar15,uVar16);
    auVar9 = _sqc2(auVar9);
    param_3[0xe] = auVar9;
  }
  else if ((param_2 & 0x7f800000) < 0x37800001) {
    auVar9 = _sqc2(auVar10);
    param_3[0xe] = auVar9;
    *(undefined4 *)(param_3[0xf] + 8) = 0;
  }
  else {
    *(uint *)(param_3[0xf] + 8) = param_2;
    *(int *)param_3[0xe] = (int)param_11;
    *(int *)(param_3[0xe] + 4) = (int)((ulong)param_11 >> 0x20);
    *(undefined4 *)(param_3[0xe] + 8) = (undefined4)param_12;
    *(undefined4 *)(param_3[0xe] + 0xc) = param_12._4_4_;
  }
  if (param_3[0x10][0xc] == '\x03') {
    auVar14 = _lqc2(param_3[1]);
    auVar10 = _qmtc2(0x3f000000);
    auVar9 = _lqc2(param_3[3]);
    auVar15 = _lqc2(param_3[2]);
    auVar9 = _vsub(auVar9,auVar14);
    auVar15 = _vsub(auVar15,auVar14);
    _vopmula(auVar9,auVar15);
    auVar9 = _vopmsub(auVar15,auVar9);
    auVar9 = _vmul(auVar9,auVar9);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar8,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar16 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar16);
    auVar9 = _vmulbc(auVar9,auVar10);
    uVar16 = auVar9._0_4_;
  }
  else {
    if (param_3[0x10][0xc] != '\x04') {
      return;
    }
    auVar10 = _lqc2(param_3[1]);
    auVar12 = _qmtc2(0x3f000000);
    auVar14 = _lqc2(param_3[3]);
    auVar9 = _vsub(auVar14,auVar10);
    auVar15 = _lqc2(param_3[2]);
    auVar11 = _lqc2(param_3[4]);
    auVar10 = _vsub(auVar15,auVar10);
    auVar14 = _vsub(auVar14,auVar11);
    auVar15 = _vsub(auVar15,auVar11);
    _vopmula(auVar9,auVar10);
    auVar9 = _vopmsub(auVar10,auVar9);
    _vopmula(auVar15,auVar14);
    auVar15 = _vopmsub(auVar14,auVar15);
    auVar9 = _vmul(auVar9,auVar9);
    auVar15 = _vmul(auVar15,auVar15);
    _vaddabc(auVar15,auVar15);
    auVar15 = _vmaddbc(auVar8,auVar15);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar8,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar16 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar16);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar15);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    uVar16 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar16);
    auVar9 = _vaddbc(auVar9,auVar15);
    auVar9 = _vmulbc(auVar9,auVar12);
    uVar16 = auVar9._0_4_;
  }
  auVar9 = _qmfc2(uVar16);
  *(int *)(param_3[0x10] + 4) = auVar9._0_4_;
  return;
}


// ==== FUN_001b96b8 @ 001b96b8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b96b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 (*pauVar5) [16];
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
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [16];
  
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vmove(auVar12);
  pauVar5 = (undefined1 (*) [16])param_2;
  auVar6 = _lqc2(pauVar5[1]);
  auVar13 = _lqc2(pauVar5[4]);
  auVar7 = _lqc2(pauVar5[2]);
  auVar11 = _vsub(auVar13,auVar6);
  auVar10 = _lqc2(pauVar5[3]);
  auVar6 = _vsub(auVar7,auVar6);
  auVar8 = _vsub(auVar10,auVar7);
  auVar7 = _vmul(auVar11,auVar6);
  auVar6 = _vmul(auVar8,auVar6);
  _vaddabc(auVar7,auVar7);
  auVar9 = _vmaddbc(auVar12,auVar7);
  _vaddabc(auVar6,auVar6);
  auVar7 = _vmaddbc(auVar12,auVar6);
  auVar10 = _vsub(auVar10,auVar13);
  auVar6 = _qmfc2(auVar9._0_4_);
  auVar9 = _qmfc2(auVar7._0_4_);
  auVar7 = _vmul(auVar8,auVar10);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar12,auVar7);
  auVar8 = _vmul(auVar11,auVar10);
  auVar7 = _qmfc2(auVar7._0_4_);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar12,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  uStack_50 = (undefined4)param_3;
  uStack_4c = (undefined4)((ulong)param_3 >> 0x20);
  bVar2 = 0.01 < ABS(auVar6._0_4_ + auVar9._0_4_ + auVar7._0_4_ + auVar8._0_4_);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar6._8_4_ = in_a2_udw;
  auVar6._0_8_ = param_3;
  auVar6._12_4_ = in_register_0000006c;
  auVar6 = _lqc2(auVar6);
  auVar7 = _vsub(auVar6,auVar7);
  auVar8 = _lqc2(*pauVar5);
  DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  auVar6 = _vmul(auVar7,auVar7);
  DAT_00418594 = DAT_00418594 + DAT_00418590;
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar9,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar15 = _vwaitq();
  auVar6 = _vmulq(auVar7,uVar15);
  auVar6 = _vmove(auVar6);
  auStack_40 = _sqc2(auVar8);
  if ((float)DAT_00418590 * 2.3283064e-10 < 0.5) {
    auVar6 = _vmul(auVar8,auVar6);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar14,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (0.0 < auVar6._0_4_) {
      auVar6 = _vsub(in_vf0,auVar8);
      auStack_40 = _sqc2(auVar6);
    }
  }
  if (param_5 == 0) {
    if (bVar2) {
      FUN_001bb190(0x3e4ccccd,param_1,param_2,param_3,param_4,param_6,param_7,param_8);
      uVar4 = CONCAT44(uStack_4c,uStack_50);
      goto LAB_001b998c;
    }
    uVar15 = 0x40400000;
  }
  else {
    cVar1 = *(char *)param_5;
    if (cVar1 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(cVar1 * 4 + DAT_00414d54);
    }
    if ((iVar3 == 1) || (iVar3 == 3)) {
      uVar15 = 0x3d4ccccd;
    }
    else if (iVar3 - 4U < 2) {
      uVar15 = 0x3dcccccd;
    }
    else {
      uVar15 = 0x3f000000;
      if (iVar3 == 2) {
        uVar15 = 0x3e800000;
      }
    }
    if ((bVar2) || (iVar3 == 2)) {
      FUN_001bb190(uVar15,param_1,param_2,param_3,param_4,param_6,param_7,param_8);
      uVar4 = CONCAT44(uStack_4c,uStack_50);
      goto LAB_001b998c;
    }
  }
  FUN_001b9b58(uVar15,param_1,param_2,param_3);
  uVar4 = CONCAT44(uStack_4c,uStack_50);
LAB_001b998c:
  FUN_001b1728(uVar4,auStack_40._0_8_,auStack_a0);
  FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_a0,0x7e048c4b7c69a424,1);
  FUN_001dec08(auStack_60,uStack_70);
  FUN_001ded60(auStack_60,uStack_70,_DAT_004432e0);
  if (param_5 == 0) {
    FUN_0016e250(DAT_0040f4d4,uStack_70,0);
  }
  else {
    FUN_0016e250(DAT_0040f4d4,uStack_70,*(undefined4 *)((char *)param_5 + 0xf0));
  }
  return;
}


// ==== FUN_001b9a40 @ 001b9a40 ====

void FUN_001b9a40(float param_1,float param_2,int param_3,undefined1 (*param_4) [16],int param_5,
                 undefined2 param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  if (0.15 < param_1) {
    if (((*(ushort *)(param_5 + 6) & 1) == 0) || (*(float *)(*param_4 + 0xc) < 0.8)) {
      FUN_001b8798();
    }
    else {
      iVar2 = param_3 + 0x10000;
      *(undefined1 (**) [16])(iVar2 + (uint)*(byte *)(param_3 + 0x11160) * 4 + 0xf00) = param_4;
      *(float *)(iVar2 + (uint)*(byte *)(param_3 + 0x11160) * 4 + 0x10c0) = param_2 * 0.15;
      *(int *)(iVar2 + (uint)*(byte *)(param_3 + 0x11160) * 4 + 0xf80) = param_5;
      *(undefined2 *)(iVar2 + (uint)*(byte *)(param_3 + 0x11160) * 2 + 0x1080) = param_6;
      *(float *)(iVar2 + (uint)*(byte *)(param_3 + 0x11160) * 4 + 0x1000) = param_1;
      *(undefined1 *)(iVar2 + (uint)*(byte *)(param_3 + 0x11160) + 0x1140) = param_7;
      cVar1 = *(char *)(param_3 + 0x11160) + '\x01';
      *(char *)(param_3 + 0x11160) = cVar1;
      if (cVar1 == ' ') {
        *(undefined1 *)(param_3 + 0x11160) = 0;
      }
      _lqc2(*param_4);
      auVar3 = _qmtc2(0xc479f99a);
      auVar3 = _vmr32(auVar3);
      auVar3 = _sqc2(auVar3);
      *param_4 = auVar3;
    }
  }
  return;
}


// ==== FUN_001b9b58 @ 001b9b58 ====

void FUN_001b9b58(float param_1,undefined8 param_2,undefined1 (*param_3) [16],undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 in_a1_udw;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_vf0 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  int aiStack_3a0 [68];
  float afStack_290 [16];
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  float afStack_230 [16];
  undefined8 auStack_1f0 [2];
  uint auStack_1e0 [12];
  undefined8 uStack_1b0;
  float fStack_1a0;
  float fStack_19c;
  uint auStack_190 [8];
  undefined1 auStack_170 [8];
  float fStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  auVar29 = _qmtc2(param_4);
  auVar27 = _qmtc2(param_5);
  uStack_e0 = param_6;
  uStack_dc = param_7;
  uStack_d8 = param_8;
  iVar4 = 0x13;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  piVar19 = (int *)param_2;
  auVar28 = *param_3;
  for (iVar4 = 0x13; iVar4 != -1; iVar4 = iVar4 + -1) {
  }
  if (*piVar19 < 0xfe) {
    auVar25 = _vaddbc(in_vf0,in_vf0);
    auVar23 = _vmul(auVar27,auVar27);
    _vaddabc(auVar23,auVar23);
    auVar23 = _vmaddbc(auVar25,auVar23);
    auStack_c0 = _sqc2(auVar25);
    auVar25 = _qmtc2(auVar28._0_4_);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar23);
    uVar30 = _vwaitq();
    auVar27 = _vmulq(auVar27,uVar30);
    auStack_d0 = auVar28;
    auVar27 = _vmul(auVar25,auVar27);
    auVar23 = _vaddbc(in_vf0,in_vf0);
    _vaddabc(auVar27,auVar27);
    auVar27 = _vmaddbc(auVar23,auVar27);
    auVar27 = _qmfc2(auVar27._0_4_);
    auVar23 = _qmtc2(auVar28._0_4_);
    if (0.0 < auVar27._0_4_) {
      auVar27 = _vsub(in_vf0,auVar23);
      auStack_d0 = _sqc2(auVar27);
    }
    auVar23 = _lqc2(param_3[1]);
    auVar25 = _vsub(auVar29,auVar23);
    auVar27 = _lqc2(param_3[3]);
    auVar23 = _vsub(auVar27,auVar23);
    uVar5 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    auVar27 = _qmtc2(0x40400000);
    auVar29 = _vsubbc(auVar29,auVar27);
    auVar27 = _qmtc2((float)uVar5 * 2.3283064e-10 * 12.0);
    auVar27 = _vsubbc(auVar29,auVar27);
    auVar27 = _sqc2(auVar27);
    auStack_170._4_4_ = auVar27._4_4_;
    uVar30 = auStack_170._4_4_;
    auVar27 = _sqc2(auVar23);
    auStack_170._4_4_ = auVar27._4_4_;
    if ((auStack_170._4_4_ & 0x7f800000) < 0x37800001) {
      auVar27 = _sqc2(auVar25);
      auVar29 = _qmfc2(auVar25._0_4_);
      auVar25 = _qmfc2(auVar23._0_4_);
      fStack_168 = auVar27._8_4_;
      fVar22 = fStack_168;
      _auStack_170 = _sqc2(auVar23);
      fStack_1a0 = auVar29._0_4_ / auVar25._0_4_;
      fStack_19c = fVar22 / fStack_168;
    }
    else {
      auVar27 = _qmfc2(auVar23._0_4_);
      if (((uint)auVar27._0_4_ & 0x7f800000) < 0x37800001) {
        auVar27 = _sqc2(auVar25);
        fStack_168 = auVar27._8_4_;
        fStack_1a0 = fStack_168;
        auVar27 = _sqc2(auVar23);
        fStack_168 = auVar27._8_4_;
        auVar27 = _sqc2(auVar25);
        fStack_1a0 = fStack_1a0 / fStack_168;
        auStack_170._4_4_ = auVar27._4_4_;
        uVar31 = auStack_170._4_4_;
        _auStack_170 = _sqc2(auVar23);
        fStack_19c = (float)uVar31 / (float)auStack_170._4_4_;
      }
      else {
        auVar29 = _sqc2(auVar25);
        auVar25 = _qmfc2(auVar25._0_4_);
        auStack_170._4_4_ = auVar29._4_4_;
        uVar31 = auStack_170._4_4_;
        _auStack_170 = _sqc2(auVar23);
        fStack_1a0 = auVar25._0_4_ / auVar27._0_4_;
        fStack_19c = (float)uVar31 / (float)auStack_170._4_4_;
      }
    }
    uVar6 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + DAT_00418594 + uVar5;
    iVar4 = DAT_00418594 + uVar5 + uVar6;
    uStack_1b0 = CONCAT44(fStack_19c,fStack_1a0);
    uStack_23c = 0x3f800000;
    uStack_250._0_4_ = 0;
    uStack_250._4_4_ = 0;
    uStack_238 = 0x3f800000;
    uStack_234 = 0;
    uStack_248 = 0;
    uStack_244 = 0x3f800000;
    uStack_240 = 0x3f800000;
    afStack_230[1] = 0.0;
    uVar5 = uVar6 * 0x10000 + ((int)uVar6 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar5;
    afStack_230[0] = ((float)uVar6 * 2.3283064e-10 * 0.8 + 0.1) * fStack_1a0;
    afStack_230[3] = 0.0;
    uVar6 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar6;
    afStack_230[2] = fStack_1a0 + ((float)uVar5 * 2.3283064e-10 * 0.8 + 0.1) * (1.0 - fStack_1a0);
    uVar5 = uVar6 * 0x10000 + ((int)uVar6 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar5;
    afStack_230[4] = 1.0;
    afStack_230[5] = ((float)uVar6 * 2.3283064e-10 * 0.8 + 0.1) * fStack_19c;
    afStack_230[6] = 1.0;
    uVar6 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar6;
    afStack_230[7] = fStack_19c + ((float)uVar5 * 2.3283064e-10 * 0.8 + 0.1) * (1.0 - fStack_19c);
    afStack_230[9] = 1.0;
    uVar5 = uVar6 * 0x10000 + ((int)uVar6 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar5;
    afStack_230[8] = fStack_1a0 + ((float)uVar6 * 2.3283064e-10 * 0.8 + 0.1) * (1.0 - fStack_1a0);
    uVar6 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar6;
    afStack_230[0xb] = 1.0;
    afStack_230[10] = ((float)uVar5 * 2.3283064e-10 * 0.8 + 0.1) * fStack_1a0;
    afStack_230[0xc] = 0.0;
    uVar5 = uVar6 * 0x10000 + ((int)uVar6 >> 0x10) + iVar4;
    iVar4 = iVar4 + uVar5;
    afStack_230[0xd] = fStack_19c + ((float)uVar6 * 2.3283064e-10 * 0.8 + 0.1) * (1.0 - fStack_19c);
    afStack_230[0xe] = 0.0;
    DAT_00418590 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + iVar4;
    DAT_00418594 = iVar4 + DAT_00418590;
    afStack_230[0xf] = ((float)uVar5 * 2.3283064e-10 * 0.8 + 0.1) * fStack_19c;
    iVar4 = 0xc;
    param_1 = (float)DAT_00418590 * 2.3283064e-10 * param_1;
    puVar12 = auStack_1f0;
    fVar22 = param_1 * 0.6 + (1.0 - param_1) * 0.3;
    do {
      iVar17 = iVar4 * 2;
      iVar8 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      uStack_130 = CONCAT44(afStack_290[iVar8 + 1] - uStack_1b0._4_4_,
                            afStack_290[iVar17] - (float)uStack_1b0);
      uStack_140 = uStack_130;
      fVar21 = (afStack_290[iVar17] - (float)uStack_1b0) * fVar22;
      fVar20 = (afStack_290[iVar8 + 1] - uStack_1b0._4_4_) * fVar22;
      uStack_130 = CONCAT44(fVar20,fVar21);
      uStack_150 = uStack_130;
      uStack_130 = CONCAT44(uStack_1b0._4_4_ + fVar20,(float)uStack_1b0 + fVar21);
      uStack_160 = uStack_130;
      auStack_170 = (undefined1  [8])uStack_130;
      *puVar12 = uStack_130;
      puVar12 = puVar12 + 1;
    } while (iVar4 < 0x14);
    auVar23 = _lqc2(param_3[1]);
    auVar27._8_8_ = in_a1_udw;
    auVar27._0_8_ = (long)(int)aiStack_3a0;
    auVar29 = _lqc2(param_3[4]);
    puVar12 = &uStack_250;
    auVar25 = _vsub(auVar29,auVar23);
    auVar29 = _lqc2(param_3[2]);
    auVar23 = _vmove(auVar23);
    auVar28._0_8_ = 0x14;
    auVar29 = _vsub(auVar29,auVar23);
    do {
      auVar24 = _qmtc2(*(undefined4 *)puVar12);
      auVar26 = _qmtc2(*(undefined4 *)((int)puVar12 + 4));
      auVar24 = _vmulbc(auVar25,auVar24);
      auVar26 = _vmulbc(auVar29,auVar26);
      auVar24 = _vadd(auVar23,auVar24);
      puVar12 = puVar12 + 1;
      auVar24 = _vadd(auVar24,auVar26);
      auVar28._0_8_ = (long)(auVar28._0_4_ + -1);
      auVar24 = _sqc2(auVar24);
      *auVar27._0_4_ = auVar24;
      auVar27._0_8_ = (long)(int)(auVar27._0_4_ + 1);
    } while (-1 < auVar28._0_8_);
    uVar11 = *(undefined8 *)param_3[5];
    auStack_170 = (undefined1  [8])uVar11;
    auVar27 = _auStack_170;
    auStack_170._0_4_ = (undefined4)uVar11;
    auStack_170._4_4_ = (undefined4)((ulong)uVar11 >> 0x20);
    uStack_140 = CONCAT44(*(float *)(param_3[5] + 0xc) - (float)auStack_170._4_4_,
                          *(float *)(param_3[5] + 8) - (float)auStack_170._0_4_);
    uStack_150 = CONCAT44(*(float *)(param_3[6] + 0xc) - (float)auStack_170._4_4_,
                          *(float *)(param_3[6] + 8) - (float)auStack_170._0_4_);
    uStack_160 = uStack_150;
    uStack_150 = uStack_140;
    iVar4 = *piVar19;
    iVar17 = 0x13;
    _auStack_170 = auVar27;
    while( true ) {
      if (iVar4 < 0xfe) {
        *piVar19 = iVar4 + 1;
        piVar18 = piVar19 + iVar4 * 0x44 + 4;
      }
      else {
        piVar18 = (int *)0x0;
      }
      if (piVar18 == (int *)0x0) break;
      pcVar14 = &UNK_003f7490 + iVar17 * 5;
      piVar13 = piVar18 + 0x14;
      iVar4 = 3;
      piVar9 = piVar18;
      do {
        cVar2 = *pcVar14;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar14 + 1;
        iVar15 = (int)cVar2;
        iVar8 = aiStack_3a0[iVar15 * 4 + 1];
        iVar7 = aiStack_3a0[iVar15 * 4 + 2];
        iVar3 = aiStack_3a0[iVar15 * 4 + 3];
        piVar9[4] = aiStack_3a0[iVar15 * 4];
        piVar9[5] = iVar8;
        piVar9[6] = iVar7;
        piVar9[7] = iVar3;
        uStack_140 = (&uStack_250)[iVar15];
        uVar11 = uStack_140;
        uStack_140._4_4_ = (float)((ulong)uStack_140 >> 0x20);
        uStack_100 = CONCAT44(uStack_160._4_4_ * (float)uStack_140,
                              (float)uStack_160 * (float)uStack_140);
        uStack_110 = uStack_100;
        fStack_f0 = (float)auStack_170._0_4_ + (float)uStack_160 * (float)uStack_140;
        fStack_ec = (float)auStack_170._4_4_ + uStack_160._4_4_ * (float)uStack_140;
        uStack_100 = CONCAT44(fStack_ec,fStack_f0);
        uStack_120 = uStack_100;
        uStack_100 = CONCAT44(uStack_150._4_4_ * uStack_140._4_4_,
                              (float)uStack_150 * uStack_140._4_4_);
        fStack_f0 = fStack_f0 + (float)uStack_150 * uStack_140._4_4_;
        fStack_ec = fStack_ec + uStack_150._4_4_ * uStack_140._4_4_;
        uStack_130 = CONCAT44(fStack_ec,fStack_f0);
        *(undefined8 *)piVar13 = uStack_130;
        piVar13 = piVar13 + 2;
        piVar9 = piVar9 + 4;
      } while (-1 < iVar4);
      uVar6 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      iVar4 = DAT_00418594 + uVar6;
      uVar5 = (int)uVar6 >> 2;
      iVar8 = (int)uVar6 >> 0x10;
      uStack_140 = uVar11;
      if (iVar17 < 0xc) {
        if (iVar17 < 4) {
          DAT_00418590 = uVar6 * 0x10000 + iVar8 + iVar4;
          DAT_00418594 = iVar4 + DAT_00418590;
          FUN_001b9198(uVar30,0,piVar18);
          fVar22 = (float)piVar18[0x41];
        }
        else {
          iVar7 = iVar17 + 7;
          if ((uVar6 & 7) == 0) {
            if (-1 < iVar17) {
              iVar7 = iVar17;
            }
            uVar5 = uVar5 & 0xf;
          }
          else {
            if (-1 < iVar17) {
              iVar7 = iVar17;
            }
            uVar5 = uVar5 & 3;
          }
          auStack_190[iVar17 + (iVar7 >> 3) * -8] = auStack_190[iVar17 + (iVar7 >> 3) * -8] + uVar5;
          DAT_00418590 = uVar6 * 0x10000 + iVar8 + iVar4;
          DAT_00418594 = iVar4 + DAT_00418590;
          FUN_001b9198(uVar30,0,piVar18);
          fVar22 = (float)piVar18[0x41];
        }
      }
      else {
        iVar7 = iVar17 + 7;
        if ((uVar6 & 0xf) == 0) {
          if (-1 < iVar17) {
            iVar7 = iVar17;
          }
          uVar5 = uVar5 & 10;
        }
        else {
          if (-1 < iVar17) {
            iVar7 = iVar17;
          }
          uVar5 = uVar5 & 5;
        }
        auStack_190[iVar17 + (iVar7 >> 3) * -8] = uVar5;
        auVar23 = _qmtc2(0x3cf5c28f);
        auVar27 = _lqc2(*(undefined1 (*) [16])(piVar18 + 4));
        auVar28 = _qmtc2(0x3c23d70a);
        auVar29 = _lqc2(*(undefined1 (*) [16])(piVar18 + 8));
        auVar29 = _vsub(auVar29,auVar27);
        auVar25 = _lqc2(auStack_c0);
        auVar27 = _vmul(auVar29,auVar29);
        _vaddabc(auVar27,auVar27);
        auVar27 = _vmaddbc(auVar25,auVar27);
        auVar25 = _lqc2(auStack_d0);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar27);
        uVar31 = _vwaitq();
        auVar29 = _vmulq(auVar29,uVar31);
        DAT_00418590 = uVar6 * 0x10000 + iVar8 + iVar4;
        _vopmula(auVar25,auVar29);
        auVar27 = _vopmsub(auVar29,auVar25);
        DAT_00418594 = iVar4 + DAT_00418590;
        auVar27 = _vmulbc(auVar27,auVar23);
        auVar27 = _vaddbc(auVar27,auVar28);
        auVar27 = _vaddbc(in_vf0,auVar27);
        _qmfc2(auVar27._0_4_);
        _sqc2(auVar29);
        FUN_001b9198(uVar30,0x41000000,piVar18);
        fVar22 = (float)piVar18[0x41];
      }
      if (fVar22 < 0.007) {
        iVar4 = *piVar19;
        iVar8 = iVar4 + -1;
        *piVar19 = iVar8;
        if (iVar4 != iVar8) {
          pauVar10 = (undefined1 (*) [16])(piVar19 + iVar8 * 0x44 + 4);
          piVar18 = piVar19 + iVar4 * 0x44 + 4;
          do {
            piVar9 = piVar18;
            iVar4 = *(int *)((int)*pauVar10 + 4);
            iVar7 = *(int *)((int)*pauVar10 + 8);
            iVar3 = *(int *)((int)*pauVar10 + 0xc);
            uVar11 = *(undefined8 *)pauVar10[1];
            iVar15 = *(int *)((int)pauVar10[1] + 8);
            iVar16 = *(int *)((int)pauVar10[1] + 0xc);
            *piVar9 = *(int *)*pauVar10;
            piVar9[1] = iVar4;
            piVar9[2] = iVar7;
            piVar9[3] = iVar3;
            piVar9[4] = (int)uVar11;
            piVar9[5] = (int)((ulong)uVar11 >> 0x20);
            piVar9[6] = iVar15;
            piVar9[7] = iVar16;
            pauVar10 = pauVar10 + 2;
            piVar18 = piVar9 + 8;
          } while (pauVar10 != (undefined1 (*) [16])(piVar19 + iVar8 * 0x44 + 0x44));
          auVar27 = *pauVar10;
          piVar9[8] = auVar27._0_4_;
          piVar9[9] = auVar27._4_4_;
          piVar9[10] = auVar27._8_4_;
          piVar9[0xb] = auVar27._12_4_;
        }
      }
      if (iVar17 + -1 < 0) {
        return;
      }
      iVar4 = *piVar19;
      iVar17 = iVar17 + -1;
    }
  }
  else {
    auVar27 = _qmfc2(auVar29._0_4_);
    FUN_001bc548(0x3e99999a,0x3e99999a,param_2,auVar27._0_8_);
  }
  return;
}


// ==== FUN_001bab90 @ 001bab90 ====

void FUN_001bab90(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_4c;
  
  fVar9 = *(float *)((int)param_4 + 0xc);
  auVar14 = _lqc2(*param_3);
  fVar7 = *(float *)(param_4 + 2);
  fVar3 = *(float *)((int)param_4 + 0x14);
  fVar5 = *(float *)(param_4 + 1);
  fStack_80 = (float)*param_4;
  fStack_7c = (float)((ulong)*param_4 >> 0x20);
  auVar10 = _lqc2(param_3[2]);
  auVar11 = _vsub(auVar10,auVar14);
  auVar10 = _sqc2(auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar12 = _lqc2(param_3[1]);
  fStack_4c = auVar10._4_4_;
  fVar1 = fStack_4c;
  auVar12 = _vsub(auVar12,auVar14);
  auVar10 = _sqc2(auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  fVar4 = fStack_4c * auVar12._0_4_;
  fStack_4c = auVar10._4_4_;
  fVar2 = fStack_4c;
  fVar4 = fVar4 - auVar11._0_4_ * fStack_4c;
  if (((uint)fVar4 & 0x7f800000) < 0x37800001) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
  }
  if (0 < param_5) {
    do {
      auVar10 = _lqc2(*param_2);
      param_5 = param_5 + -1;
      auVar13 = _vsub(auVar10,auVar14);
      param_2 = param_2 + 1;
      auVar10 = _sqc2(auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      fStack_4c = auVar10._4_4_;
      fVar8 = fStack_4c * auVar12._0_4_ - auVar13._0_4_ * fVar2;
      fVar6 = auVar13._0_4_ * fVar1 - fStack_4c * auVar11._0_4_;
      *param_1 = CONCAT44(fStack_7c + (fVar3 - fStack_7c) * fVar4 * fVar8 +
                          (fVar9 - fStack_7c) * fVar4 * fVar6,
                          fStack_80 + (fVar7 - fStack_80) * fVar4 * fVar8 +
                          (fVar5 - fStack_80) * fVar4 * fVar6);
      param_1 = param_1 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ==== FUN_001bad90 @ 001bad90 ====

void FUN_001bad90(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_48;
  
  fVar9 = *(float *)((int)param_4 + 0xc);
  auVar14 = _lqc2(*param_3);
  fVar7 = *(float *)(param_4 + 2);
  fVar3 = *(float *)((int)param_4 + 0x14);
  fVar5 = *(float *)(param_4 + 1);
  fStack_80 = (float)*param_4;
  fStack_7c = (float)((ulong)*param_4 >> 0x20);
  auVar10 = _lqc2(param_3[2]);
  auVar11 = _vsub(auVar10,auVar14);
  auVar10 = _sqc2(auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar12 = _lqc2(param_3[1]);
  fStack_48 = auVar10._8_4_;
  fVar1 = fStack_48;
  auVar12 = _vsub(auVar12,auVar14);
  auVar10 = _sqc2(auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  fVar4 = fStack_48 * auVar12._0_4_;
  fStack_48 = auVar10._8_4_;
  fVar2 = fStack_48;
  fVar4 = fVar4 - auVar11._0_4_ * fStack_48;
  if (((uint)fVar4 & 0x7f800000) < 0x37800001) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
  }
  if (0 < param_5) {
    do {
      auVar10 = _lqc2(*param_2);
      param_5 = param_5 + -1;
      auVar13 = _vsub(auVar10,auVar14);
      param_2 = param_2 + 1;
      auVar10 = _sqc2(auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      fStack_48 = auVar10._8_4_;
      fVar8 = fStack_48 * auVar12._0_4_ - auVar13._0_4_ * fVar2;
      fVar6 = auVar13._0_4_ * fVar1 - fStack_48 * auVar11._0_4_;
      *param_1 = CONCAT44(fStack_7c + (fVar3 - fStack_7c) * fVar4 * fVar8 +
                          (fVar9 - fStack_7c) * fVar4 * fVar6,
                          fStack_80 + (fVar7 - fStack_80) * fVar4 * fVar8 +
                          (fVar5 - fStack_80) * fVar4 * fVar6);
      param_1 = param_1 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ==== FUN_001baf90 @ 001baf90 ====

void FUN_001baf90(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined8 *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_4c;
  float fStack_48;
  
  fVar11 = *(float *)((int)param_4 + 0xc);
  auVar15 = _lqc2(*param_3);
  fVar9 = *(float *)(param_4 + 2);
  fVar5 = *(float *)((int)param_4 + 0x14);
  fVar7 = *(float *)(param_4 + 1);
  fStack_80 = (float)*param_4;
  fStack_7c = (float)((ulong)*param_4 >> 0x20);
  auVar13 = _lqc2(param_3[2]);
  auVar14 = _vsub(auVar13,auVar15);
  auVar13 = _sqc2(auVar14);
  fStack_4c = auVar13._4_4_;
  fVar1 = fStack_4c;
  auVar12 = _lqc2(param_3[1]);
  auVar13 = _sqc2(auVar14);
  auVar12 = _vsub(auVar12,auVar15);
  fStack_48 = auVar13._8_4_;
  fVar3 = fStack_48;
  auVar13 = _sqc2(auVar12);
  fStack_4c = auVar13._4_4_;
  fVar2 = fStack_4c;
  auVar13 = _sqc2(auVar12);
  fStack_4c = fStack_48 * fStack_4c;
  fStack_48 = auVar13._8_4_;
  fVar4 = fStack_48;
  fStack_4c = fStack_4c - fVar1 * fStack_48;
  if (((uint)fStack_4c & 0x7f800000) < 0x37800001) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = 1.0 / fStack_4c;
  }
  if (0 < param_5) {
    auVar13 = _vmove(auVar15);
    do {
      auVar12 = _lqc2(*param_2);
      param_5 = param_5 + -1;
      auVar14 = _vsub(auVar12,auVar13);
      param_2 = param_2 + 1;
      auVar12 = _sqc2(auVar14);
      fStack_4c = auVar12._4_4_;
      auVar12 = _sqc2(auVar14);
      fStack_48 = auVar12._8_4_;
      fVar10 = fStack_48 * fVar2 - fStack_4c * fVar4;
      fVar6 = fStack_4c * fVar3 - fStack_48 * fVar1;
      *param_1 = CONCAT44(fStack_7c + (fVar5 - fStack_7c) * fVar8 * fVar10 +
                          (fVar11 - fStack_7c) * fVar8 * fVar6,
                          fStack_80 + (fVar9 - fStack_80) * fVar8 * fVar10 +
                          (fVar7 - fStack_80) * fVar8 * fVar6);
      param_1 = param_1 + 1;
    } while (param_5 != 0);
  }
  return;
}


// ==== FUN_001bb190 @ 001bb190 ====

void FUN_001bb190(float param_1,undefined8 param_2,undefined1 (*param_3) [16],undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 in_zero_qw [16];
  byte bVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  undefined8 extraout_v0_udw_01;
  undefined8 extraout_v0_udw_02;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined1 in_s1_qw [16];
  undefined1 *puVar22;
  int *piVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined1 in_vf0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined1 auStack_330 [16];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [64];
  int aiStack_280 [16];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [64];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  undefined1 auStack_f0 [16];
  int iStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined8 extraout_v0_udw_03;
  undefined8 extraout_v0_udw_04;
  undefined8 extraout_v0_udw_05;
  
  uStack_12c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_130 = (undefined4)param_4;
  auVar27 = _qmtc2(param_5);
  piVar23 = (int *)param_2;
  uStack_140 = param_6;
  uStack_13c = param_7;
  uStack_138 = param_8;
  if (*piVar23 < 0xfe) {
    lVar16 = (long)DAT_003f7224;
    auVar12 = _pextlw(0,0);
    auVar8 = _pextlw(lVar16,lVar16);
    _pextlw(0,auVar12._0_8_);
    _pextlw(lVar16,auVar8._0_8_);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    puStack_fc = auStack_200;
    puStack_d4 = auStack_2c0;
    puStack_100 = auStack_240;
    puStack_f8 = auStack_1c0;
    puStack_f4 = auStack_1a0;
    puStack_dc = auStack_180;
    puStack_d8 = auStack_160;
    auStack_f0 = _sqc2(auVar8);
    auVar12 = _vaddbc(in_vf0,in_vf0);
    puVar22 = auStack_330;
    auVar8._8_8_ = in_s1_qw._8_8_;
    auVar8._0_8_ = (long)(int)&uStack_2e0;
    for (iVar13 = 2; iVar13 != -1; iVar13 = iVar13 + -1) {
    }
    uStack_318 = *(undefined4 *)(param_3[1] + 8);
    uStack_314 = *(undefined4 *)(param_3[1] + 0xc);
    iVar13 = 2;
    do {
      bVar1 = iVar13 != -1;
      iVar13 = iVar13 + -1;
    } while (bVar1);
    bVar6 = 1;
    do {
      bVar1 = bVar6 < 4;
      bVar6 = bVar6 + 1;
    } while (bVar1);
    auStack_120 = *param_3;
    auVar29 = _qmtc2(*(undefined4 *)*param_3);
    auVar27 = _vmul(auVar29,auVar27);
    _vaddabc(auVar27,auVar27);
    auVar27 = _vmaddbc(auVar12,auVar27);
    uStack_308 = *(undefined4 *)(param_3[2] + 8);
    uStack_304 = *(undefined4 *)(param_3[2] + 0xc);
    auVar27 = _qmfc2(auVar27._0_4_);
    uStack_2f8 = *(undefined4 *)(param_3[4] + 8);
    uStack_2f4 = *(undefined4 *)(param_3[4] + 0xc);
    uStack_2f0 = *(undefined4 *)param_3[3];
    uStack_2ec = *(undefined4 *)(param_3[3] + 4);
    uStack_2e8 = *(undefined4 *)(param_3[3] + 8);
    uStack_2e4 = *(undefined4 *)(param_3[3] + 0xc);
    uStack_2e0 = *(undefined8 *)param_3[5];
    uStack_2d8 = *(undefined8 *)(param_3[5] + 8);
    uStack_2d0 = *(undefined8 *)(param_3[6] + 8);
    uStack_2c8 = *(undefined8 *)param_3[6];
    uStack_320 = (undefined4)*(undefined8 *)param_3[1];
    uStack_31c = (undefined4)((ulong)*(undefined8 *)param_3[1] >> 0x20);
    uStack_310 = (undefined4)*(undefined8 *)param_3[2];
    uStack_30c = (undefined4)((ulong)*(undefined8 *)param_3[2] >> 0x20);
    uStack_300 = (undefined4)*(undefined8 *)param_3[4];
    uStack_2fc = (undefined4)((ulong)*(undefined8 *)param_3[4] >> 0x20);
    if (0.0 < auVar27._0_4_) {
      auVar27 = _vsub(in_vf0,auVar29);
      auStack_120 = _sqc2(auVar27);
    }
    auVar29 = _qmtc2(0x40400000);
    auVar27 = _lqc2(auStack_120);
    auVar12 = _qmtc2(param_1 / 1.8);
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    auVar12 = _vmulbc(auVar27,auVar12);
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    auVar27 = _qmtc2(param_1 * 0.3);
    auVar27 = _vaddbc(auVar12,auVar27);
    auVar27 = _vaddbc(in_vf0,auVar27);
    auStack_110 = _sqc2(auVar27);
    auVar27._8_4_ = in_a2_udw;
    auVar27._0_8_ = param_4;
    auVar27._12_4_ = in_register_0000006c;
    auVar27 = _lqc2(auVar27);
    auVar12 = _vsubbc(auVar27,auVar29);
    auVar27 = _qmtc2((float)DAT_00418590 * 2.3283064e-10 * 12.0);
    param_1 = param_1 * 2.5;
    auVar27 = _vsubbc(auVar12,auVar27);
    auStack_330 = _sqc2(auVar27);
    uVar5 = auStack_330._4_4_;
    uStack_128 = in_a2_udw;
    uStack_124 = in_register_0000006c;
    FUN_001bca30(param_1,param_2,auStack_110._0_8_);
    iVar13 = 0xe;
    do {
      bVar1 = iVar13 != -1;
      iVar13 = iVar13 + -1;
    } while (bVar1);
    auVar12._4_4_ = uStack_12c;
    auVar12._0_4_ = uStack_130;
    auVar12._8_4_ = uStack_128;
    auVar12._12_4_ = uStack_124;
    auVar27 = _lqc2(auVar12);
    auVar12 = _lqc2(auStack_f0);
    uVar24 = 0;
    do {
      iVar13 = uVar24 * 0x10;
      auVar29 = _lqc2(*(undefined1 (*) [16])(puVar22 + iVar13 + 0x10));
      auVar28 = _vsub(auVar29,auVar27);
      auVar29 = _vmul(auVar28,auVar28);
      _vaddabc(auVar29,auVar29);
      auVar29 = _vmaddbc(auVar12,auVar29);
      uVar14 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar29);
      auVar29 = _qmfc2(auVar29._0_4_);
      auVar29 = _qmtc2(SQRT(auVar29._0_4_));
      uVar32 = _vwaitq();
      auVar28 = _vmulq(auVar28,uVar32);
      auVar29 = _qmfc2(auVar29._0_4_);
      fVar25 = auVar29._0_4_ * 0.8;
      auVar28 = _vmove(auVar28);
      fVar26 = auVar29._0_4_ * 0.1;
      fVar26 = (float)((int)fVar26 * (uint)(0.1 < fVar26) | (uint)(0.1 >= fVar26) * 0x3dcccccd);
      uVar7 = uVar14 * 0x10000 + ((int)uVar14 >> 0x10) + DAT_00418594 + uVar14;
      DAT_00418594 = DAT_00418594 + uVar14 + uVar7;
      auVar29 = _qmtc2(fVar26 + (float)uVar14 * 2.3283064e-10 *
                                ((float)((int)fVar25 * (uint)(fVar25 < 0.5) |
                                        (uint)(fVar25 >= 0.5) * 0x3f000000) - fVar26));
      auVar29 = _vmulbc(auVar28,auVar29);
      auVar28 = _vadd(auVar27,auVar29);
      auVar29 = _sqc2(auVar28);
      *(undefined1 (*) [16])(puStack_d4 + iVar13) = auVar29;
      fVar25 = (float)uVar7 * 2.3283064e-10 * 0.2 + 0.4;
      auVar31 = _qmtc2(fVar25);
      auVar30 = _lqc2(*(undefined1 (*) [16])(puVar22 + iVar13 + 0x10));
      DAT_00418590 = uVar7 * 0x10000 + ((int)uVar7 >> 0x10) + DAT_00418594;
      auVar29 = _qmtc2(1.0 - fVar25);
      auVar28 = _vmulbc(auVar28,auVar31);
      DAT_00418594 = DAT_00418594 + DAT_00418590;
      auVar29 = _vmulbc(auVar30,auVar29);
      auVar29 = _vadd(auVar28,auVar29);
      auVar29 = _sqc2(auVar29);
      *(undefined1 (*) [16])(aiStack_280 + uVar24 * 4) = auVar29;
      iVar13 = uVar24 * 0x10;
      auVar28 = _lqc2(*(undefined1 (*) [16])
                       (puVar22 + *(int *)(&DAT_003f7470 + uVar24 * 8) * 0x10 + 0x10));
      fVar25 = (float)DAT_00418590 * 2.3283064e-10 * 0.2 + 0.4;
      auVar30 = _lqc2(*(undefined1 (*) [16])
                       (puVar22 + *(int *)(&DAT_003f7474 + uVar24 * 8) * 0x10 + 0x10));
      auVar29 = _qmtc2(fVar25);
      auVar28 = _vmulbc(auVar28,auVar29);
      uVar24 = uVar24 + 1 & 0xff;
      auVar29 = _qmtc2(1.0 - fVar25);
      auVar29 = _vmulbc(auVar30,auVar29);
      auVar29 = _vadd(auVar28,auVar29);
      auVar29 = _sqc2(auVar29);
      *(undefined1 (*) [16])(puStack_100 + iVar13) = auVar29;
    } while (uVar24 < 4);
    uVar24 = 0;
    do {
      DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      DAT_00418594 = DAT_00418594 + DAT_00418590;
      if ((int)DAT_00418590 < 0) {
        iVar13 = *(int *)(&DAT_003f7470 + uVar24 * 8);
      }
      else {
        iVar13 = *(int *)(&DAT_003f7470 + uVar24 * 8);
      }
      iVar15 = uVar24 * 0x10;
      auVar12 = _lqc2(*(undefined1 (*) [16])(aiStack_280 + iVar13 * 4));
      fVar25 = (float)DAT_00418590 * 2.3283064e-10 * 0.2 + 0.4;
      auVar29 = _lqc2(*(undefined1 (*) [16])(aiStack_280 + *(int *)(&DAT_003f7474 + uVar24 * 8) * 4)
                     );
      uVar24 = uVar24 + 1 & 0xff;
      auVar27 = _qmtc2(fVar25);
      auVar12 = _vmulbc(auVar12,auVar27);
      auVar27 = _qmtc2(1.0 - fVar25);
      auVar27 = _vmulbc(auVar29,auVar27);
      auVar27 = _vadd(auVar12,auVar27);
      auVar27 = _sqc2(auVar27);
      *(undefined1 (*) [16])(puStack_fc + iVar15) = auVar27;
    } while (uVar24 < 4);
    iVar13 = 0xe;
    do {
      bVar1 = iVar13 != -1;
      iVar13 = iVar13 + -1;
    } while (bVar1);
    auVar27 = _lqc2(auStack_120);
    auVar27 = _qmfc2(auVar27._0_4_);
    uVar21 = auVar8._0_8_;
    if (0.577 <= ABS(auVar27._0_4_)) {
      FUN_001baf90(puStack_f8,puStack_d4,&uStack_320,uVar21,0x10);
      iVar13 = *piVar23;
    }
    else {
      auStack_330 = auStack_120;
      auVar27 = auStack_330;
      auStack_330._4_4_ = auStack_120._4_4_;
      auStack_330 = auVar27;
      if (0.577 <= ABS((float)auStack_330._4_4_)) {
        FUN_001bad90(puStack_f8,puStack_d4,&uStack_320,uVar21,0x10);
        iVar13 = *piVar23;
      }
      else {
        FUN_001bab90(puStack_f8,puStack_d4,&uStack_320,uVar21,0x10);
        iVar13 = *piVar23;
      }
    }
    uVar24 = 0;
    if (iVar13 < 0xff) {
      fVar25 = 2.3283064e-10;
      do {
        iStack_e0 = uVar24 * 8;
        piVar20 = (int *)(&DAT_003f7470 + iStack_e0);
        if ((uVar24 & 1) == 0) {
          if (iVar13 < 0xfe) {
            *piVar23 = iVar13 + 1;
            piVar19 = piVar23 + iVar13 * 0x44 + 4;
          }
          else {
            piVar19 = (int *)0x0;
          }
          iVar13 = uVar24 * 0x10;
          if (piVar19 == (int *)0x0) {
            return;
          }
          iVar15 = *piVar20;
          piVar18 = (int *)(puStack_100 + iVar13);
          iVar2 = *(int *)(puVar22 + iVar15 * 0x10 + 0x14);
          iVar3 = *(int *)(puVar22 + iVar15 * 0x10 + 0x18);
          iVar4 = *(int *)(puVar22 + iVar15 * 0x10 + 0x1c);
          piVar19[4] = *(int *)(puVar22 + iVar15 * 0x10 + 0x10);
          piVar19[5] = iVar2;
          piVar19[6] = iVar3;
          piVar19[7] = iVar4;
          iVar15 = piVar18[1];
          iVar2 = piVar18[2];
          iVar3 = piVar18[3];
          piVar19[8] = *piVar18;
          piVar19[9] = iVar15;
          piVar19[10] = iVar2;
          piVar19[0xb] = iVar3;
          iVar15 = *piVar20;
          iVar2 = aiStack_280[iVar15 * 4 + 1];
          iVar3 = aiStack_280[iVar15 * 4 + 2];
          iVar4 = aiStack_280[iVar15 * 4 + 3];
          piVar19[0xc] = aiStack_280[iVar15 * 4];
          piVar19[0xd] = iVar2;
          piVar19[0xe] = iVar3;
          piVar19[0xf] = iVar4;
          *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puVar22 + *piVar20 * 8 + 0x50);
          *(undefined8 *)(piVar19 + 0x16) = *(undefined8 *)(puStack_dc + iStack_e0);
          *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f4 + *piVar20 * 8);
          auVar29._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
          auVar29._8_8_ = extraout_v0_udw_00;
          auVar27 = _por(in_zero_qw,auVar29);
          DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
          DAT_00418594 = DAT_00418594 + DAT_00418590;
          fVar26 = (float)DAT_00418590 * fVar25;
          FUN_001bc880(param_2);
          auVar27 = _por(in_zero_qw,auVar27);
          FUN_001b9198(uVar5,fVar26 * 5.0,piVar19,auStack_120._0_8_,auVar27._0_8_,3,0,uStack_140,
                       uStack_13c,uStack_138);
          iVar15 = *piVar23;
          if (iVar15 < 0xfe) {
            *piVar23 = iVar15 + 1;
            piVar19 = piVar23 + iVar15 * 0x44 + 4;
          }
          else {
            piVar19 = (int *)0x0;
          }
          if (piVar19 == (int *)0x0) {
            return;
          }
          iVar15 = piVar20[1];
          piVar18 = (int *)(puStack_100 + iVar13);
          iVar2 = *(int *)(puVar22 + iVar15 * 0x10 + 0x14);
          iVar3 = *(int *)(puVar22 + iVar15 * 0x10 + 0x18);
          iVar4 = *(int *)(puVar22 + iVar15 * 0x10 + 0x1c);
          piVar19[4] = *(int *)(puVar22 + iVar15 * 0x10 + 0x10);
          piVar19[5] = iVar2;
          piVar19[6] = iVar3;
          piVar19[7] = iVar4;
          iVar15 = piVar18[1];
          iVar2 = piVar18[2];
          iVar3 = piVar18[3];
          piVar19[8] = *piVar18;
          piVar19[9] = iVar15;
          piVar19[10] = iVar2;
          piVar19[0xb] = iVar3;
          iVar15 = piVar20[1];
          iVar2 = aiStack_280[iVar15 * 4 + 1];
          iVar3 = aiStack_280[iVar15 * 4 + 2];
          iVar4 = aiStack_280[iVar15 * 4 + 3];
          piVar19[0xc] = aiStack_280[iVar15 * 4];
          piVar19[0xd] = iVar2;
          piVar19[0xe] = iVar3;
          piVar19[0xf] = iVar4;
          *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puVar22 + piVar20[1] * 8 + 0x50);
          *(undefined8 *)(piVar19 + 0x16) = *(undefined8 *)(puStack_dc + iStack_e0);
          *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f4 + piVar20[1] * 8);
          auVar28._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
          auVar28._8_8_ = extraout_v0_udw_01;
          auVar27 = _por(in_zero_qw,auVar28);
          DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
          DAT_00418594 = DAT_00418594 + DAT_00418590;
          fVar26 = (float)DAT_00418590 * fVar25;
          FUN_001bc880(param_2);
          auVar27 = _por(in_zero_qw,auVar27);
          FUN_001b9198(uVar5,fVar26 * 5.0,piVar19,auStack_120._0_8_,auVar27._0_8_,3,0,uStack_140,
                       uStack_13c,uStack_138);
          iVar15 = *piVar23;
          if (iVar15 < 0xfe) {
            *piVar23 = iVar15 + 1;
            piVar19 = piVar23 + iVar15 * 0x44 + 4;
          }
          else {
            piVar19 = (int *)0x0;
          }
          if (piVar19 == (int *)0x0) {
            return;
          }
          iVar15 = piVar20[1];
          piVar18 = (int *)(puStack_100 + iVar13);
          iVar13 = aiStack_280[iVar15 * 4 + 1];
          iVar2 = aiStack_280[iVar15 * 4 + 2];
          iVar3 = aiStack_280[iVar15 * 4 + 3];
          piVar19[4] = aiStack_280[iVar15 * 4];
          piVar19[5] = iVar13;
          piVar19[6] = iVar2;
          piVar19[7] = iVar3;
          iVar13 = piVar18[1];
          iVar15 = piVar18[2];
          iVar2 = piVar18[3];
          piVar19[8] = *piVar18;
          piVar19[9] = iVar13;
          piVar19[10] = iVar15;
          piVar19[0xb] = iVar2;
          iVar13 = *piVar20;
          iVar15 = aiStack_280[iVar13 * 4 + 1];
          iVar2 = aiStack_280[iVar13 * 4 + 2];
          iVar3 = aiStack_280[iVar13 * 4 + 3];
          piVar19[0xc] = aiStack_280[iVar13 * 4];
          piVar19[0xd] = iVar15;
          piVar19[0xe] = iVar2;
          piVar19[0xf] = iVar3;
          *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puStack_f4 + piVar20[1] * 8);
          *(undefined8 *)(piVar19 + 0x16) = *(undefined8 *)(puStack_dc + iStack_e0);
          *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f4 + *piVar20 * 8);
          auVar30._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
          auVar30._8_8_ = extraout_v0_udw_02;
          auVar27 = _por(in_zero_qw,auVar30);
          DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
          DAT_00418594 = DAT_00418594 + DAT_00418590;
          fVar26 = (float)DAT_00418590 * fVar25;
          FUN_001bc880(param_2);
          auVar27 = _por(in_zero_qw,auVar27);
          FUN_001b9198(uVar5,fVar26 * 5.0,piVar19,auStack_120._0_8_,auVar27._0_8_,3,0,uStack_140,
                       uStack_13c,uStack_138);
          iVar13 = *piVar23;
        }
        else {
          if (iVar13 < 0xfe) {
            *piVar23 = iVar13 + 1;
            piVar19 = piVar23 + iVar13 * 0x44 + 4;
          }
          else {
            piVar19 = (int *)0x0;
          }
          if (piVar19 == (int *)0x0) {
            return;
          }
          iVar13 = *piVar20;
          iVar15 = *(int *)(puVar22 + iVar13 * 0x10 + 0x14);
          iVar2 = *(int *)(puVar22 + iVar13 * 0x10 + 0x18);
          iVar3 = *(int *)(puVar22 + iVar13 * 0x10 + 0x1c);
          piVar19[4] = *(int *)(puVar22 + iVar13 * 0x10 + 0x10);
          piVar19[5] = iVar15;
          piVar19[6] = iVar2;
          piVar19[7] = iVar3;
          iVar13 = *(int *)(&DAT_003f7474 + iStack_e0);
          iVar15 = *(int *)(puVar22 + iVar13 * 0x10 + 0x14);
          iVar2 = *(int *)(puVar22 + iVar13 * 0x10 + 0x18);
          iVar3 = *(int *)(puVar22 + iVar13 * 0x10 + 0x1c);
          piVar19[8] = *(int *)(puVar22 + iVar13 * 0x10 + 0x10);
          piVar19[9] = iVar15;
          piVar19[10] = iVar2;
          piVar19[0xb] = iVar3;
          iVar13 = *piVar20;
          iVar15 = aiStack_280[iVar13 * 4 + 1];
          iVar2 = aiStack_280[iVar13 * 4 + 2];
          iVar3 = aiStack_280[iVar13 * 4 + 3];
          piVar19[0xc] = aiStack_280[iVar13 * 4];
          piVar19[0xd] = iVar15;
          piVar19[0xe] = iVar2;
          piVar19[0xf] = iVar3;
          iVar13 = *(int *)(&DAT_003f7474 + iStack_e0);
          iVar15 = aiStack_280[iVar13 * 4 + 1];
          iVar2 = aiStack_280[iVar13 * 4 + 2];
          iVar3 = aiStack_280[iVar13 * 4 + 3];
          piVar19[0x10] = aiStack_280[iVar13 * 4];
          piVar19[0x11] = iVar15;
          piVar19[0x12] = iVar2;
          piVar19[0x13] = iVar3;
          *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puVar22 + *piVar20 * 8 + 0x50);
          *(undefined8 *)(piVar19 + 0x16) =
               *(undefined8 *)(puVar22 + *(int *)(&DAT_003f7474 + iStack_e0) * 8 + 0x50);
          *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f4 + *piVar20 * 8);
          *(undefined8 *)(piVar19 + 0x1a) =
               *(undefined8 *)(puStack_f4 + *(int *)(&DAT_003f7474 + iStack_e0) * 8);
          auVar31._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
          auVar31._8_8_ = extraout_v0_udw;
          auVar27 = _por(in_zero_qw,auVar31);
          DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
          DAT_00418594 = DAT_00418594 + DAT_00418590;
          fVar26 = (float)DAT_00418590 * fVar25;
          FUN_001bc880(param_2);
          auVar27 = _por(in_zero_qw,auVar27);
          FUN_001b9198(uVar5,fVar26 * 5.0,piVar19,auStack_120._0_8_,auVar27._0_8_,4,0,uStack_140,
                       uStack_13c,uStack_138);
          iVar13 = *piVar23;
        }
        if (iVar13 < 0xfe) {
          *piVar23 = iVar13 + 1;
          piVar19 = piVar23 + iVar13 * 0x44 + 4;
        }
        else {
          piVar19 = (int *)0x0;
        }
        iVar13 = uVar24 * 0x10;
        if (piVar19 == (int *)0x0) {
          return;
        }
        iVar15 = *piVar20;
        piVar18 = (int *)(puStack_fc + iVar13);
        iVar2 = aiStack_280[iVar15 * 4 + 1];
        iVar3 = aiStack_280[iVar15 * 4 + 2];
        iVar4 = aiStack_280[iVar15 * 4 + 3];
        piVar19[4] = aiStack_280[iVar15 * 4];
        piVar19[5] = iVar2;
        piVar19[6] = iVar3;
        piVar19[7] = iVar4;
        iVar15 = piVar18[1];
        iVar2 = piVar18[2];
        iVar3 = piVar18[3];
        piVar19[8] = *piVar18;
        piVar19[9] = iVar15;
        piVar19[10] = iVar2;
        piVar19[0xb] = iVar3;
        piVar18 = (int *)(puStack_d4 + *piVar20 * 0x10);
        iVar15 = piVar18[1];
        iVar2 = piVar18[2];
        iVar3 = piVar18[3];
        piVar19[0xc] = *piVar18;
        piVar19[0xd] = iVar15;
        piVar19[0xe] = iVar2;
        piVar19[0xf] = iVar3;
        *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puStack_f4 + *piVar20 * 8);
        *(undefined8 *)(piVar19 + 0x16) = *(undefined8 *)(puStack_d8 + iStack_e0);
        *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f8 + *piVar20 * 8);
        auVar9._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
        auVar9._8_8_ = extraout_v0_udw_03;
        auVar27 = _por(in_zero_qw,auVar9);
        DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
        DAT_00418594 = DAT_00418594 + DAT_00418590;
        fVar26 = (float)DAT_00418590 * fVar25 * 5.0;
        FUN_001bc880(param_2);
        auVar27 = _por(in_zero_qw,auVar27);
        FUN_001b9198(uVar5,fVar26 + fVar26,piVar19,auStack_120._0_8_,auVar27._0_8_,3,0,uStack_140,
                     uStack_13c,uStack_138);
        iVar15 = *piVar23;
        if (iVar15 < 0xfe) {
          *piVar23 = iVar15 + 1;
          piVar19 = piVar23 + iVar15 * 0x44 + 4;
        }
        else {
          piVar19 = (int *)0x0;
        }
        if (piVar19 == (int *)0x0) {
          return;
        }
        iVar15 = piVar20[1];
        piVar18 = (int *)(puStack_fc + iVar13);
        iVar2 = aiStack_280[iVar15 * 4 + 1];
        iVar3 = aiStack_280[iVar15 * 4 + 2];
        iVar4 = aiStack_280[iVar15 * 4 + 3];
        piVar19[4] = aiStack_280[iVar15 * 4];
        piVar19[5] = iVar2;
        piVar19[6] = iVar3;
        piVar19[7] = iVar4;
        iVar15 = piVar18[1];
        iVar2 = piVar18[2];
        iVar3 = piVar18[3];
        piVar19[8] = *piVar18;
        piVar19[9] = iVar15;
        piVar19[10] = iVar2;
        piVar19[0xb] = iVar3;
        piVar18 = (int *)(puStack_d4 + piVar20[1] * 0x10);
        iVar15 = piVar18[1];
        iVar2 = piVar18[2];
        iVar3 = piVar18[3];
        piVar19[0xc] = *piVar18;
        piVar19[0xd] = iVar15;
        piVar19[0xe] = iVar2;
        piVar19[0xf] = iVar3;
        *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puStack_f4 + piVar20[1] * 8);
        *(undefined8 *)(piVar19 + 0x16) = *(undefined8 *)(puStack_d8 + iStack_e0);
        *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f8 + piVar20[1] * 8);
        auVar10._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
        auVar10._8_8_ = extraout_v0_udw_04;
        auVar27 = _por(in_zero_qw,auVar10);
        DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
        DAT_00418594 = DAT_00418594 + DAT_00418590;
        fVar26 = (float)DAT_00418590 * fVar25 * 5.0;
        FUN_001bc880(param_2);
        auVar27 = _por(in_zero_qw,auVar27);
        FUN_001b9198(uVar5,fVar26 + fVar26,piVar19,auStack_120._0_8_,auVar27._0_8_,3,0,uStack_140,
                     uStack_13c,uStack_138);
        iVar15 = *piVar23;
        if (iVar15 < 0xfe) {
          *piVar23 = iVar15 + 1;
          piVar19 = piVar23 + iVar15 * 0x44 + 4;
        }
        else {
          piVar19 = (int *)0x0;
        }
        if (piVar19 == (int *)0x0) {
          return;
        }
        piVar17 = (int *)(puStack_fc + iVar13);
        piVar18 = (int *)(puStack_d4 + *piVar20 * 0x10);
        iVar13 = piVar18[1];
        iVar15 = piVar18[2];
        iVar2 = piVar18[3];
        piVar19[4] = *piVar18;
        piVar19[5] = iVar13;
        piVar19[6] = iVar15;
        piVar19[7] = iVar2;
        iVar13 = piVar17[1];
        iVar15 = piVar17[2];
        iVar2 = piVar17[3];
        piVar19[8] = *piVar17;
        piVar19[9] = iVar13;
        piVar19[10] = iVar15;
        piVar19[0xb] = iVar2;
        piVar18 = (int *)(puStack_d4 + piVar20[1] * 0x10);
        iVar13 = piVar18[1];
        iVar15 = piVar18[2];
        iVar2 = piVar18[3];
        piVar19[0xc] = *piVar18;
        piVar19[0xd] = iVar13;
        piVar19[0xe] = iVar15;
        piVar19[0xf] = iVar2;
        *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(puStack_f8 + *piVar20 * 8);
        *(undefined8 *)(piVar19 + 0x16) = *(undefined8 *)(puStack_d8 + iStack_e0);
        *(undefined8 *)(piVar19 + 0x18) = *(undefined8 *)(puStack_f8 + piVar20[1] * 8);
        auVar11._0_8_ = FUN_001bca30(param_1,param_2,auStack_110._0_8_);
        auVar11._8_8_ = extraout_v0_udw_05;
        auVar27 = _por(in_zero_qw,auVar11);
        DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
        DAT_00418594 = DAT_00418594 + DAT_00418590;
        fVar26 = (float)DAT_00418590 * fVar25 * 5.0;
        FUN_001bc880(param_2);
        auVar27 = _por(in_zero_qw,auVar27);
        FUN_001b9198(uVar5,fVar26 + fVar26,piVar19,auStack_120._0_8_,auVar27._0_8_,3,0,uStack_140,
                     uStack_13c,uStack_138);
        uVar24 = uVar24 + 1 & 0xff;
        if (3 < uVar24) {
          return;
        }
        iVar13 = *piVar23;
      } while (iVar13 < 0xff);
      return;
    }
  }
  else {
    FUN_001bc548(0x3e99999a,0x3e99999a,param_2,param_4);
  }
  return;
}


// ==== FUN_001bc428 @ 001bc428 ====

void FUN_001bc428(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar1 = *(int *)((int)param_2 + 0x24);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) - 3U < 2)) {
    uVar3 = *param_2;
    uVar2 = *param_2;
    uVar7 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined4 *)((int)param_2 + 0xc);
    if (*(int *)(iVar1 + 0xc4) == 4) {
      pauVar4 = (undefined1 (*) [16])FUN_00148498(iVar1,*(undefined1 *)((int)param_2 + 0x2c));
      pauVar5 = (undefined1 (*) [16])
                FUN_00147988(*(undefined4 *)((int)param_2 + 0x24),
                             *(undefined1 *)((int)param_2 + 0x2c));
      auVar9 = _lqc2(pauVar4[1]);
    }
    else {
      pauVar4 = (undefined1 (*) [16])FUN_001528b8();
      pauVar5 = (undefined1 (*) [16])(*(int *)((int)param_2 + 0x24) + 0x70);
      auVar9 = _lqc2(pauVar4[1]);
    }
    auVar10 = _lqc2(*pauVar4);
    auVar6._8_4_ = uVar7;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = uVar8;
    auVar6 = _por(in_zero_qw,auVar6);
    auVar10 = _vsub(auVar10,auVar9);
    auVar13 = _lqc2(pauVar5[3]);
    auVar11 = _lqc2(pauVar5[1]);
    auVar9 = _lqc2(pauVar5[2]);
    auVar12 = _lqc2(*pauVar5);
    _vmulabc(auVar12,auVar10);
    _vmaddabc(auVar11,auVar10);
    _vmaddabc(auVar9,auVar10);
    auVar10 = _vmaddbc(auVar13,in_vf0);
    auVar9 = _qmtc2(0x3f000000);
    auVar10 = _vsub(auVar10,auVar13);
    auVar9 = _vmulbc(auVar10,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    FUN_001bc548(0x3fc00000,0x3f800000,param_1,auVar6._0_8_,auVar9._0_8_,4);
    auVar9._8_4_ = uVar7;
    auVar9._0_8_ = uVar3;
    auVar9._12_4_ = uVar8;
    auVar9 = _por(in_zero_qw,auVar9);
    FUN_0016e250(DAT_0040f4d4,auVar9._0_8_);
  }
  return;
}


// ==== FUN_001bc548 @ 001bc548 ====

void FUN_001bc548(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  uStack_9c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_a0 = (undefined4)param_4;
  auVar10 = _qmtc2(param_5);
  auVar2 = _sqc2(auVar10);
  auStack_d0._4_4_ = auVar2._4_4_;
  if (0.9 < (float)auStack_d0._4_4_) {
    iVar4 = 0x3f800000;
  }
  else {
    auVar2 = _sqc2(auVar10);
    auStack_d0._4_4_ = auVar2._4_4_;
    if (-0.9 <= (float)auStack_d0._4_4_) {
      auVar2 = _pextlw(0,0);
      auStack_d0 = _pextlw(0x3f800000,auVar2._0_8_);
      auVar2 = _qmtc2(auStack_d0._0_4_);
      goto LAB_001bc620;
    }
    iVar4 = -0x40800000;
  }
  auVar2 = _pextlw(0,(long)iVar4);
  auStack_d0 = _pextlw(0,auVar2._0_8_);
  auVar2 = _qmtc2(auStack_d0._0_4_);
LAB_001bc620:
  _vopmula(auVar2,auVar10);
  auVar7 = _vopmsub(auVar10,auVar2);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _vmul(auVar7,auVar7);
  auStack_90 = _sqc2(auVar6);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar6,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar2);
  uVar11 = _vwaitq();
  auVar6 = _vmulq(auVar7,uVar11);
  _vopmula(auVar10,auVar6);
  auVar2 = _vopmsub(auVar6,auVar10);
  auStack_c0 = _sqc2(auVar6);
  auStack_b0 = _sqc2(auVar2);
  if (0 < param_6) {
    fVar5 = 2.3283064e-10;
    uStack_98 = in_a1_udw;
    uStack_94 = in_register_0000005c;
    do {
      uVar1 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      fVar3 = (float)uVar1 * fVar5 - 0.5;
      DAT_00418590 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + DAT_00418594 + uVar1;
      DAT_00418594 = DAT_00418594 + uVar1 + DAT_00418590;
      auVar9 = _qmtc2(0x3f333333);
      auVar6 = _lqc2(auStack_b0);
      auVar2 = _qmtc2(fVar3);
      auVar7 = _vmulbc(auVar6,auVar9);
      auVar8 = _qmtc2(fVar3 * param_1);
      auVar7 = _vmulbc(auVar7,auVar2);
      fVar3 = (float)DAT_00418590 * fVar5 - 0.5;
      auVar8 = _vmulbc(auVar6,auVar8);
      auVar2 = _qmtc2(fVar3);
      auVar6 = _lqc2(auStack_c0);
      auVar7 = _vadd(auVar10,auVar7);
      auVar2 = _vmulbc(auVar6,auVar2);
      auVar2 = _vmulbc(auVar2,auVar9);
      auVar9 = _qmtc2(0);
      auVar7 = _vadd(auVar7,auVar2);
      auVar6 = _qmtc2(fVar3 * param_2);
      auVar2 = _lqc2(auStack_c0);
      auVar9 = _vmulbc(auVar10,auVar9);
      auVar2 = _vmulbc(auVar2,auVar6);
      auVar8 = _vadd(auVar8,auVar2);
      auVar2 = _vmul(auVar7,auVar7);
      auVar6 = _lqc2(auStack_90);
      auVar8 = _vadd(auVar8,auVar9);
      _vaddabc(auVar2,auVar2);
      auVar2 = _vmaddbc(auVar6,auVar2);
      auStack_80 = _sqc2(auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar2);
      uVar11 = _vwaitq();
      auVar10 = _vmulq(auVar7,uVar11);
      param_6 = param_6 + -1;
      auVar2._4_4_ = uStack_9c;
      auVar2._0_4_ = uStack_a0;
      auVar2._8_4_ = uStack_98;
      auVar2._12_4_ = uStack_94;
      auVar2 = _lqc2(auVar2);
      auVar2 = _vadd(auVar8,auVar2);
      auVar10 = _qmfc2(auVar10._0_4_);
      auVar2 = _qmfc2(auVar2._0_4_);
      FUN_001b1728(auVar2._0_8_,auVar10._0_8_,auStack_110);
      FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_110,0x7e048c4b7c69a423,1);
      auVar10 = _lqc2(auStack_80);
    } while (param_6 != 0);
  }
  return;
}


// ==== FUN_001bc880 @ 001bc880 ====

undefined8 FUN_001bc880(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  
  uVar1 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  uVar2 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + DAT_00418594 + uVar1;
  iVar4 = DAT_00418594 + uVar1 + uVar2;
  DAT_00418590 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + iVar4;
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _pextlw((long)(int)((float)DAT_00418590 * 2.3283064e-10),
                   (long)(int)((float)uVar1 * 2.3283064e-10 + 0.01));
  auVar3 = _pextlw((long)(int)((float)uVar2 * 2.3283064e-10),auVar3._0_8_);
  auVar5 = _qmtc2(auVar3._0_4_);
  auVar3 = _vmul(auVar5,auVar5);
  _sqc2(auVar5);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar6,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar7 = _vwaitq();
  auVar3 = _vmulq(auVar5,uVar7);
  auVar3 = _qmfc2(auVar3._0_4_);
  DAT_00418594 = iVar4 + DAT_00418590;
  return auVar3._0_8_;
}


// ==== FUN_001bca30 @ 001bca30 ====

undefined8 FUN_001bca30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  uint uVar1;
  int iVar2;
  undefined8 in_a1_udw;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iStack_c;
  int iStack_8;
  
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = param_3;
  auVar5 = _por(in_zero_qw,auVar5);
  uVar4 = auVar5._0_4_;
  auVar5 = _qmtc2(uVar4);
  uVar1 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  if ((int)uVar1 >> 0x1f < 0) {
    fVar6 = (float)uVar1;
  }
  else {
    fVar6 = (float)(int)uVar1;
  }
  auVar8 = _qmtc2(param_1);
  auVar7 = _qmtc2(fVar6 * 2.3283064e-10);
  uVar3 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + DAT_00418594 + uVar1;
  auVar5 = _vmulbc(auVar5,auVar7);
  auVar5 = _vmulbc(auVar5,auVar8);
  iVar2 = DAT_00418594 + uVar1 + uVar3;
  auVar7 = _qmfc2(auVar5._0_4_);
  auVar9 = _qmtc2(uVar4);
  auVar8 = _qmtc2(param_1);
  auVar5 = _qmtc2((float)uVar3 * 2.3283064e-10);
  auVar5 = _vmulbc(auVar9,auVar5);
  auVar5 = _vmulbc(auVar5,auVar8);
  auVar5 = _sqc2(auVar5);
  DAT_00418590 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10) + iVar2;
  auVar9 = _qmtc2(uVar4);
  iStack_c = auVar5._4_4_;
  auVar8 = _qmtc2(param_1);
  auVar5 = _qmtc2((float)DAT_00418590 * 2.3283064e-10);
  auVar5 = _vmulbc(auVar9,auVar5);
  auVar5 = _vmulbc(auVar5,auVar8);
  auVar5 = _sqc2(auVar5);
  iStack_8 = auVar5._8_4_;
  auVar5 = _pextlw((long)iStack_8,(long)auVar7._0_4_);
  auVar5 = _pextlw((long)iStack_c,auVar5._0_8_);
  auVar5 = _por(in_zero_qw,auVar5);
  DAT_00418594 = iVar2 + DAT_00418590;
  return auVar5._0_8_;
}


// ==== FUN_001bcc18 @ 001bcc18 ====

void FUN_001bcc18(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 3;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}


// ==== FUN_001bcc30 @ 001bcc30 ====

undefined8 FUN_001bcc30(undefined1 (*param_1) [16])

{
  undefined1 in_zero_qw [16];
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_10 [16];
  
  auVar4 = _pextlh(0,0x8000ff00ff00ff);
  auVar2 = _pextlw(0,0xffffffffbf800000);
  auVar3 = _pextlw(0,0x3f800000);
  auVar5 = _pextlw(0xffffffffbf800000,auVar2._0_8_);
  auVar6 = _pextlw(0xffffffffbf800000,auVar3._0_8_);
  auVar8 = _qmtc2(auVar6._0_4_);
  auVar2 = _pextlw(0x3f800000,auVar2._0_8_);
  _sqc2(auVar8);
  auVar6 = _qmtc2(auVar2._0_4_);
  auVar3 = _pextlw(0x3f800000,auVar3._0_8_);
  _sqc2(auVar6);
  _sqc2(auVar8);
  auVar9 = _qmtc2(auVar5._0_4_);
  auStack_10._8_4_ = 0x3f800000;
  auStack_10._0_8_ = 0x3f8000003f800000;
  auStack_10._12_4_ = 0x3f800000;
  auVar2 = _lqc2(auStack_10);
  auVar5 = _qmtc2(0x43000000);
  _lqc2(*param_1);
  auVar2 = _vmulbc(auVar2,auVar5);
  auVar7 = _vadd(in_vf0,auVar9);
  auVar2 = _vftoi0(auVar2);
  _lqc2(param_1[2]);
  auVar2 = _qmfc2(auVar2._0_4_);
  auVar9 = _vadd(in_vf0,auVar8);
  auVar2 = _pminw(auVar2,auVar4);
  _lqc2(param_1[4]);
  auVar2 = _ppach(in_zero_qw,auVar2);
  _lqc2(param_1[6]);
  _lqc2(param_1[8]);
  auVar2 = _ppacb(in_zero_qw,auVar2);
  _lqc2(param_1[10]);
  auVar5 = _vadd(in_vf0,auVar6);
  auVar3 = _qmtc2(auVar3._0_4_);
  uVar1 = auVar2._0_4_;
  auVar4 = _vadd(in_vf0,auVar8);
  auVar3 = _vadd(in_vf0,auVar3);
  auVar6 = _vadd(in_vf0,auVar6);
  auVar2 = _sqc2(auVar7);
  *param_1 = auVar2;
  auVar2 = _sqc2(auVar9);
  param_1[2] = auVar2;
  auVar2 = _sqc2(auVar6);
  param_1[4] = auVar2;
  auVar2 = _sqc2(auVar5);
  param_1[6] = auVar2;
  auVar2 = _sqc2(auVar4);
  param_1[8] = auVar2;
  auVar2 = _sqc2(auVar3);
  param_1[10] = auVar2;
  *(undefined4 *)(param_1[1] + 8) = uVar1;
  *(undefined4 *)(param_1[3] + 8) = uVar1;
  *(undefined4 *)(param_1[5] + 8) = uVar1;
  *(undefined4 *)(param_1[7] + 8) = uVar1;
  *(undefined4 *)(param_1[9] + 8) = uVar1;
  *(undefined4 *)(param_1[0xb] + 8) = uVar1;
  *(undefined4 *)(param_1[0xb] + 4) = 0x3f800000;
  *(undefined4 *)(param_1[9] + 4) = 0;
  *(undefined4 *)param_1[1] = 0;
  *(undefined4 *)(param_1[1] + 4) = 0;
  *(undefined4 *)param_1[3] = 0x3f800000;
  *(undefined4 *)(param_1[3] + 4) = 0;
  *(undefined4 *)param_1[5] = 0;
  *(undefined4 *)(param_1[5] + 4) = 0x3f800000;
  *(undefined4 *)param_1[7] = 0;
  *(undefined4 *)(param_1[7] + 4) = 0x3f800000;
  *(undefined4 *)param_1[9] = 0x3f800000;
  *(undefined4 *)param_1[0xb] = 0x3f800000;
  return 1;
}


// ==== FUN_001bcdd8 @ 001bcdd8 ====

undefined4 FUN_001bcdd8(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 3;
  return 1;
}


// ==== FUN_001bcdf8 @ 001bcdf8 ====

void FUN_001bcdf8(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xc9) < '\x03') {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0xc4) + 0x10) + 0x50) == '\0') {
      DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      DAT_00418594 = DAT_00418594 + DAT_00418590;
      if ((int)DAT_00418590 < 0) {
        iVar2 = *(int *)(param_1 + 0xc4);
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc4);
      }
      *(float *)(param_1 + 0xc0) =
           *(float *)(*(int *)(iVar2 + 0x10) + 0x4c) * (float)DAT_00418590 * 2.3283064e-10;
      DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      DAT_00418594 = DAT_00418594 + DAT_00418590;
      if ((float)DAT_00418590 * 2.3283064e-10 < 0.5) {
        *(float *)(param_1 + 0xc0) = -*(float *)(param_1 + 0xc0);
        cVar1 = *(char *)(param_1 + 0xc9);
      }
      else {
        cVar1 = *(char *)(param_1 + 0xc9);
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0xc9);
    }
    *(char *)(param_1 + 0xc9) = cVar1 + '\x01';
  }
  return;
}


// ==== FUN_001bcf50 @ 001bcf50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bcf50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
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
  undefined1 auVar20 [16];
  undefined4 in_vuI;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar8 = 0;
  cVar1 = *(char *)(param_1 + 0xc9);
  fVar9 = 0.0;
  uVar2 = *(undefined4 *)(DAT_0040f4c0 + 0xd540);
  if ('\x02' < cVar1) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0xc4) + 0x10);
  if (*(int *)(iVar6 + 0x20) == 0) {
    return;
  }
  if (cVar1 == '\x01') {
    fVar9 = *(float *)(iVar6 + 0x40);
    iVar8 = *(int *)(iVar6 + 0x34);
  }
  else if (cVar1 < '\x02') {
    if (cVar1 != '\0') goto LAB_001bd028;
    fVar9 = *(float *)(iVar6 + 0x3c);
    iVar8 = *(int *)(iVar6 + 0x30);
  }
  else {
    if (cVar1 != '\x02') goto LAB_001bd028;
    fVar9 = *(float *)(iVar6 + 0x44);
    iVar8 = *(int *)(iVar6 + 0x38);
  }
  fVar9 = fVar9 * 0.2;
LAB_001bd028:
  if ((fVar9 != 0.0) && (iVar8 != 0)) {
    auVar5 = _pextlw(0,(long)(int)fVar9);
    auVar4 = _pextlw(0,0);
    auStack_230 = _pextlw(0,auVar5._0_8_);
    auStack_220 = _pextlw((long)(int)fVar9,auVar4._0_8_);
    auVar4 = _pextlw((long)(int)fVar9,0);
    auStack_210 = _pextlw(0,auVar4._0_8_);
    auStack_200._8_4_ = DAT_004432a8;
    auStack_200._0_8_ = _DAT_004432a0;
    auStack_200._12_4_ = DAT_004432ac;
    auStack_1f0 = auStack_210;
    pauVar3 = (undefined1 (*) [16])FUN_001a68e0(*(undefined4 *)(DAT_0040f4d0 + 0x360),5);
    auVar13 = _lqc2(*pauVar3);
    auStack_270 = _sqc2(auVar13);
    auVar5 = _lqc2(pauVar3[1]);
    auStack_260 = _sqc2(auVar5);
    auVar4 = _lqc2(pauVar3[2]);
    auStack_250 = _sqc2(auVar4);
    auVar16 = _lqc2(pauVar3[3]);
    auStack_240 = _sqc2(auVar16);
    if (*(char *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0x108) == '\0') {
      fVar9 = *(float *)(param_1 + 0xc0);
    }
    else {
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar12 = _vsub(in_vf0,in_vf0);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      _sqc2(auVar12);
      _vmulabc(auVar13,auVar10);
      _vmaddabc(auVar5,auVar10);
      auVar12 = _vmaddbc(auVar4,auVar10);
      _vmulabc(auVar13,auVar11);
      _vmaddabc(auVar5,auVar11);
      auVar15 = _vmaddbc(auVar4,auVar11);
      _sqc2(auVar11);
      _sqc2(auVar10);
      _sqc2(auVar14);
      auVar10 = _qmtc2(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc4) + 0x10) + 0x48));
      auVar11 = _vaddbc(in_vf0,auVar10);
      auStack_270 = _sqc2(auVar12);
      _vmulabc(auVar13,auVar14);
      _vmaddabc(auVar5,auVar14);
      auVar10 = _vmaddbc(auVar4,auVar14);
      _vmulabc(auVar13,auVar11);
      _vmaddabc(auVar5,auVar11);
      _vmaddabc(auVar4,auVar11);
      auVar4 = _vmaddbc(auVar16,in_vf0);
      auStack_260 = _sqc2(auVar15);
      auStack_250 = _sqc2(auVar10);
      auStack_240 = _sqc2(auVar4);
      _sqc2(auVar11);
      auStack_160 = _sqc2(auVar12);
      _sqc2(auVar15);
      _sqc2(auVar10);
      _sqc2(auVar4);
      _sqc2(auVar12);
      _sqc2(auVar15);
      _sqc2(auVar10);
      auStack_170 = _sqc2(auVar4);
      fVar9 = *(float *)(param_1 + 0xc0);
    }
    auVar5 = _vmaxbc(in_vf0,in_vf0);
    auVar4 = _qmtc2(fVar9 * 0.017453292);
    auVar4 = _vaddbc(in_vf0,auVar4);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar4 = _vsubi(auVar4,in_vuI);
    auVar4 = _vabs(auVar4);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar4,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar5,in_vuI);
    _vmaddai(auVar5,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar4,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar4 = _vmsubi(auVar5,in_vuI);
    auVar4 = _vabs(auVar4);
    _ctc2(0x3e800000);
    _vnop();
    auVar4 = _vsubi(auVar4,in_vuI);
    auVar16 = _vmul(auVar4,auVar4);
    _ctc2(0xc2992661);
    _vnop();
    auVar5 = _vmuli(auVar4,in_vuI);
    auVar14 = _vmul(auVar16,auVar16);
    _ctc2(0xc2255de0);
    _vnop();
    auVar12 = _vmuli(auVar4,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar11 = _vmuli(auVar4,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar10 = _vmuli(auVar4,in_vuI);
    auVar13 = _vmul(auVar14,auVar14);
    auVar5 = _vmul(auVar5,auVar16);
    _vmula(auVar12,auVar16);
    _vmadda(auVar5,auVar14);
    _ctc2(0x40c90fda);
    _vmadda(auVar11,auVar14);
    _vmaddai(auVar4,in_vuI);
    auVar4 = _vmadd(auVar10,auVar13);
    _lqc2(auStack_170);
    _lqc2(auStack_160);
    auVar5 = _vsub(in_vf0,auVar4);
    auVar16 = _vaddbc(in_vf0,auVar5);
    auVar13 = _vaddbc(in_vf0,auVar4);
    _vmove(auVar16);
    _vmove(auVar13);
    auVar20 = _vaddbc(in_vf0,auVar4);
    auVar19 = _vaddbc(in_vf0,auVar4);
    auVar5 = _qmtc2(0);
    auVar4 = _pextlw(0x3f800000,0);
    _vmove(auVar20);
    auVar4 = _pextlw(0,auVar4._0_8_);
    _vmove(auVar19);
    auVar17 = _vaddbc(in_vf0,auVar5);
    auVar10 = _vaddbc(in_vf0,auVar5);
    _sqc2(auVar13);
    _sqc2(auVar16);
    auVar18 = _vadd(in_vf0,in_vf0);
    auVar16 = _qmtc2(auVar4._0_4_);
    auVar13 = _lqc2(auStack_230);
    auVar4 = _lqc2(auStack_220);
    iVar7 = 5;
    auVar5 = _lqc2(auStack_210);
    _vmulabc(auVar10,auVar13);
    _vmaddabc(auVar17,auVar13);
    auVar11 = _vmaddbc(auVar16,auVar13);
    _vmulabc(auVar10,auVar4);
    _vmaddabc(auVar17,auVar4);
    auVar14 = _vmaddbc(auVar16,auVar4);
    auVar4 = _lqc2(auStack_200);
    _vmulabc(auVar10,auVar5);
    _vmaddabc(auVar17,auVar5);
    auVar12 = _vmaddbc(auVar16,auVar5);
    _vmulabc(auVar10,auVar4);
    _vmaddabc(auVar17,auVar4);
    _vmaddabc(auVar16,auVar4);
    auVar15 = _vmaddbc(auVar18,in_vf0);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar10);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar18);
    _sqc2(auVar18);
    _sqc2(auVar10);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar18);
    auStack_a0 = _sqc2(auVar11);
    auStack_90 = _sqc2(auVar14);
    auStack_80 = _sqc2(auVar12);
    auStack_70 = _sqc2(auVar15);
    auStack_e0 = _sqc2(auVar11);
    auStack_d0 = _sqc2(auVar14);
    auStack_c0 = _sqc2(auVar12);
    auStack_b0 = _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar14);
    _sqc2(auVar12);
    auStack_f0 = _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar14);
    auVar13 = _lqc2(auStack_270);
    auVar5 = _lqc2(auStack_260);
    auVar4 = _lqc2(auStack_250);
    auVar16 = _lqc2(auStack_240);
    _vmulabc(auVar13,auVar11);
    _vmaddabc(auVar5,auVar11);
    auVar10 = _vmaddbc(auVar4,auVar11);
    _vmulabc(auVar13,auVar14);
    _vmaddabc(auVar5,auVar14);
    auVar17 = _vmaddbc(auVar4,auVar14);
    _vmulabc(auVar13,auVar12);
    _vmaddabc(auVar5,auVar12);
    auVar18 = _vmaddbc(auVar4,auVar12);
    _vmulabc(auVar13,auVar15);
    _vmaddabc(auVar5,auVar15);
    _vmaddabc(auVar4,auVar15);
    auVar4 = _vmaddbc(auVar16,in_vf0);
    _sqc2(auVar12);
    _sqc2(auVar15);
    _sqc2(auVar11);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar15);
    auStack_1f0 = _sqc2(auVar10);
    auStack_1e0 = _sqc2(auVar17);
    auStack_1d0 = _sqc2(auVar18);
    auStack_1c0 = _sqc2(auVar4);
    auStack_130 = _sqc2(auVar10);
    auStack_120 = _sqc2(auVar17);
    auStack_110 = _sqc2(auVar18);
    auStack_100 = _sqc2(auVar4);
    auStack_170 = _sqc2(auVar10);
    auStack_160 = _sqc2(auVar17);
    auStack_150 = _sqc2(auVar18);
    auStack_140 = _sqc2(auVar4);
    auStack_1b0 = _sqc2(auVar10);
    auStack_1a0 = _sqc2(auVar17);
    auStack_190 = _sqc2(auVar18);
    auStack_180 = _sqc2(auVar4);
    auStack_230 = _sqc2(auVar10);
    auStack_220 = _sqc2(auVar17);
    auStack_210 = _sqc2(auVar18);
    auStack_200 = _sqc2(auVar4);
    iVar6 = param_1;
    do {
      iVar7 = iVar7 + -1;
      *(undefined4 *)(iVar6 + 0x18) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc4) + 0x10) + 0x2c);
      *(char *)(iVar6 + 0x1b) = (char)iVar8;
      iVar6 = iVar6 + 0x20;
    } while (-1 < iVar7);
    FUN_0026a6f0(uVar2,iVar7,0x3e800000);
    FUN_0026aa68(1);
    FUN_0026a998(0);
    FUN_0026a840(*(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 0xc4) + 0x10) + *(char *)(param_1 + 200) * 4 + 0x20))
    ;
    FUN_0026a8d0(1);
    FUN_0026aef8(auStack_230);
    FUN_0026a7a0();
  }
  return;
}


// ==== FUN_001bd508 @ 001bd508 ====

void FUN_001bd508(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ('\x02' < *(char *)(param_1 + 0xc9)) {
    DAT_00418590 = DAT_00418590 * 0x10000 + (DAT_00418590 >> 0x10) + DAT_00418594;
    iVar2 = DAT_00418590 % 3;
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    *(int *)(param_1 + 0xc4) = param_2;
    *(char *)(param_1 + 200) = (char)iVar2;
    if (*(char *)(*(int *)(param_2 + 0x10) + 0x50) != '\0') {
      DAT_00418590 = DAT_00418590 * 0x10000 + (DAT_00418590 >> 0x10) + DAT_00418594;
      DAT_00418594 = DAT_00418594 + DAT_00418590;
      uVar1 = DAT_00418590 %
              (int)((int)(360.0 / *(float *)(*(int *)(param_2 + 0x10) + 0x4c)) & 0xffffU);
      if ((int)uVar1 < 0) {
        iVar2 = *(int *)(param_1 + 0xc4);
      }
      else {
        iVar2 = *(int *)(param_1 + 0xc4);
      }
      *(float *)(param_1 + 0xc0) = (float)uVar1 * *(float *)(*(int *)(iVar2 + 0x10) + 0x4c);
    }
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  return;
}


// ==== FUN_001bd610 @ 001bd610 ====

bool FUN_001bd610(int param_1)

{
  return *(char *)(param_1 + 0xc9) < '\x03';
}


// ==== FUN_001bd620 @ 001bd620 ====

void FUN_001bd620(int param_1)

{
  *(undefined1 *)(param_1 + 0x13e1) = 0;
  *(undefined4 *)(param_1 + 0x23f4) = 0;
  *(undefined4 *)(param_1 + 0x23f8) = 0;
  *(undefined4 *)(param_1 + 0x23fc) = 0;
  *(undefined1 *)(param_1 + 0x13e0) = 0;
  return;
}


// ==== FUN_001bd638 @ 001bd638 ====

/* Strings referenciadas:
     "TR_G_ASR"
     "TR_M_ASR"
     "LSR_SGHT" */

undefined8 FUN_001bd638(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_zero_qw [16];
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (DAT_00415a10 == 0) {
    DAT_00415a10 = 1;
    DAT_00415a00 = 0x3f666666;
    DAT_00415a04 = 0;
    DAT_00415a08 = 0;
    DAT_00415a0c = 0x3e99999a;
  }
  uVar4 = FUN_00108328(DAT_0040f4c4,0x3f7228);
  *(undefined4 *)(param_1 + 0x23f4) = uVar4;
  uVar4 = FUN_00108328(DAT_0040f4c4,0x3f7238);
  *(undefined4 *)(param_1 + 0x23f8) = uVar4;
  uVar4 = FUN_00108328(DAT_0040f4c4,0x3f7248);
  *(undefined4 *)(param_1 + 0x23fc) = uVar4;
  iVar7 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x1214);
  do {
    *(undefined1 *)(param_1 + 0x1200 + iVar7) = 0xff;
    iVar7 = iVar7 + 1;
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  } while (iVar7 < 0x12);
  *(undefined4 *)(param_1 + 0x1270) = 0;
  *(undefined4 *)(param_1 + 0x1274) = 0;
  *(undefined4 *)(param_1 + 0x1290) = 0;
  auVar6 = _pextlh(0,0x8000ff00ff00ff);
  *(undefined4 *)(param_1 + 0x1294) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12b0) = 0x3f800000;
  iVar7 = param_1 + 0x1450;
  *(undefined4 *)(param_1 + 0x12b4) = 0x3f800000;
  iVar8 = 0x7c;
  *(undefined4 *)(param_1 + 0x12d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12d4) = 0;
  *(undefined4 *)(param_1 + 0x12f0) = 0;
  *(undefined4 *)(param_1 + 0x12f4) = 0;
  *(undefined4 *)(param_1 + 0x1310) = 0;
  *(undefined4 *)(param_1 + 0x1314) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1330) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1350) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1354) = 0;
  *(undefined4 *)(param_1 + 0x1370) = 0;
  *(undefined4 *)(param_1 + 0x1374) = 0;
  *(undefined4 *)(param_1 + 0x1390) = 0;
  *(undefined4 *)(param_1 + 0x1394) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13d4) = 0;
  *(undefined1 *)(param_1 + 0x13e0) = 0;
  *(undefined1 *)(param_1 + 0x13e1) = 0;
  auVar10 = _qmtc2(0x43000000);
  do {
    *(undefined4 *)(iVar7 + -0x50) = 0;
    iVar8 = iVar8 + -4;
    *(undefined4 *)(iVar7 + -0x4c) = 0;
    auVar9._4_4_ = DAT_00415a04;
    auVar9._0_4_ = DAT_00415a00;
    auVar9._8_4_ = DAT_00415a08;
    auVar9._12_4_ = DAT_00415a0c;
    auVar9 = _lqc2(auVar9);
    auVar9 = _vmulbc(auVar9,auVar10);
    *(undefined4 *)(iVar7 + -0x30) = 0;
    auVar9 = _vftoi0(auVar9);
    *(undefined4 *)(iVar7 + -0x2c) = 0x3f800000;
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar9 = _pminw(auVar9,auVar6);
    auVar9 = _ppach(in_zero_qw,auVar9);
    auVar9 = _ppacb(in_zero_qw,auVar9);
    *(int *)(iVar7 + -0x48) = auVar9._0_4_;
    auVar1._4_4_ = DAT_00415a04;
    auVar1._0_4_ = DAT_00415a00;
    auVar1._8_4_ = DAT_00415a08;
    auVar1._12_4_ = DAT_00415a0c;
    auVar9 = _lqc2(auVar1);
    auVar9 = _vmulbc(auVar9,auVar10);
    *(undefined4 *)(iVar7 + -0x10) = 0x3f800000;
    auVar9 = _vftoi0(auVar9);
    *(undefined4 *)(iVar7 + -0xc) = 0x3f800000;
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar9 = _pminw(auVar9,auVar6);
    auVar9 = _ppach(in_zero_qw,auVar9);
    auVar9 = _ppacb(in_zero_qw,auVar9);
    *(int *)(iVar7 + -0x28) = auVar9._0_4_;
    auVar2._4_4_ = DAT_00415a04;
    auVar2._0_4_ = DAT_00415a00;
    auVar2._8_4_ = DAT_00415a08;
    auVar2._12_4_ = DAT_00415a0c;
    auVar9 = _lqc2(auVar2);
    auVar9 = _vmulbc(auVar9,auVar10);
    *(undefined4 *)(iVar7 + 0x10) = 0x3f800000;
    auVar9 = _vftoi0(auVar9);
    *(undefined4 *)(iVar7 + 0x14) = 0;
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar9 = _pminw(auVar9,auVar6);
    auVar9 = _ppach(in_zero_qw,auVar9);
    auVar9 = _ppacb(in_zero_qw,auVar9);
    *(int *)(iVar7 + -8) = auVar9._0_4_;
    auVar3._4_4_ = DAT_00415a04;
    auVar3._0_4_ = DAT_00415a00;
    auVar3._8_4_ = DAT_00415a08;
    auVar3._12_4_ = DAT_00415a0c;
    auVar9 = _lqc2(auVar3);
    auVar9 = _vmulbc(auVar9,auVar10);
    auVar9 = _vftoi0(auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar9 = _pminw(auVar9,auVar6);
    auVar9 = _ppach(in_zero_qw,auVar9);
    auVar9 = _ppacb(in_zero_qw,auVar9);
    *(int *)(iVar7 + 0x18) = auVar9._0_4_;
    iVar7 = iVar7 + 0x80;
  } while (-1 < iVar8);
  *(undefined1 *)(param_1 + 0x23f0) = 0;
  return 1;
}


// ==== FUN_001bd8d0 @ 001bd8d0 ====

void FUN_001bd8d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 in_a2_qw [16];
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar5 = _por(in_zero_qw,in_a2_qw);
  if (param_3 == 0) {
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    uVar3 = 1;
    if ((float)DAT_00418590 * 2.3283064e-10 < 0.8) goto LAB_001bda10;
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    if (0.8 <= (float)DAT_00418590 * 2.3283064e-10) {
      return;
    }
  }
  uVar3 = 0;
LAB_001bda10:
  auVar6 = _qmtc2(auVar5._0_4_);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar8._8_4_ = in_a1_udw;
  auVar8._0_8_ = param_2;
  auVar8._12_4_ = in_register_0000005c;
  auVar8 = _lqc2(auVar8);
  auVar8 = _vsub(auVar6,auVar8);
  auVar8 = _vmul(auVar8,auVar8);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar7,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  if (2.0 <= auVar8._0_4_) {
    iVar4 = (int)param_1;
    iVar1 = 0;
    iVar2 = 0;
    if (*(char *)(iVar4 + 0x1200) != -1) {
      for (iVar1 = 1; (iVar2 = iVar2 + 8, iVar1 < 0x12 && (*(char *)(iVar4 + 0x1200 + iVar1) != -1))
          ; iVar1 = iVar1 + 1) {
      }
    }
    if (iVar1 != 0x12) {
      *(undefined1 *)(iVar4 + iVar1 + 0x1200) = 3;
      *(undefined4 *)(iVar4 + iVar1 * 4 + 0x1214) = uVar3;
      auVar8 = _por(in_zero_qw,auVar5);
      FUN_001bdb08(param_1,param_2,auVar8._0_8_,iVar4 + iVar2 * 0x20,uVar3,1);
      if (param_3 == 0) {
        auVar5 = _por(in_zero_qw,auVar5);
        FUN_001e3ff8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),param_2,auVar5._0_8_);
      }
    }
  }
  return;
}


// ==== FUN_001bdb08 @ 001bdb08 ====

void FUN_001bdb08(undefined8 param_1,undefined4 param_2,undefined4 param_3,
                 undefined1 (*param_4) [16],long param_5,long param_6)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
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
  undefined1 auVar15 [16];
  undefined4 uVar16;
  float fStack_c;
  
  auVar13 = _qmtc2(param_2);
  auVar14 = _qmtc2(param_3);
  if (DAT_00415a30 == 0) {
    DAT_00415a30 = 1;
    DAT_00415a20 = 0x3f800000;
    DAT_00415a24 = 0x3f800000;
    DAT_00415a28 = 0x3f800000;
    DAT_00415a2c = 0x3f19999a;
  }
  if (DAT_00415a50 == 0) {
    DAT_00415a50 = 1;
    DAT_00415a40 = 0x3f333333;
    DAT_00415a44 = 0x3f333333;
    DAT_00415a48 = 0x3f333333;
    DAT_00415a4c = 0x3e99999a;
  }
  auVar10 = _vsub(auVar13,auVar14);
  if (param_5 == 1) {
    uVar5 = 0x3d23d70a;
    pauVar2 = (undefined1 (*) [16])&DAT_00415a40;
  }
  else {
    if (param_5 < 2) {
      if (param_5 != 0) {
        return;
      }
      uVar5 = 0x3cf5c28f;
    }
    else {
      if (param_5 != 2) {
        return;
      }
      uVar5 = 0x3c23d70a;
    }
    pauVar2 = (undefined1 (*) [16])&DAT_00415a20;
  }
  auVar12 = _lqc2(*pauVar2);
  auVar6 = _vmul(auVar10,auVar10);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar10 = _vmove(auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar16 = _vwaitq();
  auVar6 = _vmulq(auVar10,uVar16);
  auVar10 = _sqc2(auVar6);
  auVar8 = _vmove(auVar6);
  fStack_c = auVar10._4_4_;
  if (fStack_c <= 0.9) {
    auVar10 = _sqc2(auVar6);
    fStack_c = auVar10._4_4_;
    bVar1 = false;
    if (-0.9 <= fStack_c) goto LAB_001bdca4;
  }
  bVar1 = true;
LAB_001bdca4:
  if (!bVar1) {
    pauVar2 = (undefined1 (*) [16])&DAT_004432c0;
  }
  else {
    pauVar2 = (undefined1 (*) [16])&DAT_004432b0;
  }
  auVar10 = _lqc2(*pauVar2);
  _vopmula(auVar8,auVar10);
  auVar6 = _vopmsub(auVar10,auVar8);
  auVar10 = _qmtc2(uVar5);
  auVar10 = _vmulbc(auVar6,auVar10);
  if (param_6 != 0) {
    auVar4 = _pextlh(0,0x8000ff00ff00ff);
    auVar6 = _qmtc2(0x43000000);
    _lqc2(*param_4);
    auVar11 = _vmulbc(auVar12,auVar6);
    auVar6 = _vadd(auVar13,auVar10);
    auVar15 = _vftoi0(auVar11);
    auVar7 = _vadd(in_vf0,auVar6);
    auVar6 = _qmfc2(auVar15._0_4_);
    auVar9 = _vsub(auVar13,auVar10);
    auVar3 = _pminw(auVar6,auVar4);
    auVar6 = _sqc2(auVar7);
    *param_4 = auVar6;
    auVar6 = _ppach(in_zero_qw,auVar3);
    auVar3 = _vftoi0(auVar11);
    auVar6 = _ppacb(in_zero_qw,auVar6);
    auVar3 = _qmfc2(auVar3._0_4_);
    *(int *)(param_4[1] + 8) = auVar6._0_4_;
    auVar6 = _pminw(auVar3,auVar4);
    auVar6 = _ppach(in_zero_qw,auVar6);
    _lqc2(param_4[2]);
    auVar6 = _ppacb(in_zero_qw,auVar6);
    auVar3 = _vadd(in_vf0,auVar9);
    *(int *)(param_4[3] + 8) = auVar6._0_4_;
    auVar6 = _sqc2(auVar3);
    param_4[2] = auVar6;
    auVar6 = _vftoi0(auVar11);
    auVar6 = _qmfc2(auVar6._0_4_);
    auVar6 = _pminw(auVar6,auVar4);
    auVar3 = _vsub(auVar14,auVar10);
    _lqc2(param_4[4]);
    auVar6 = _ppach(in_zero_qw,auVar6);
    auVar3 = _vadd(in_vf0,auVar3);
    auVar6 = _ppacb(in_zero_qw,auVar6);
    *(int *)(param_4[5] + 8) = auVar6._0_4_;
    auVar6 = _vadd(auVar14,auVar10);
    auVar10 = _sqc2(auVar3);
    param_4[4] = auVar10;
    auVar10 = _qmfc2(auVar15._0_4_);
    auVar10 = _pminw(auVar10,auVar4);
    _lqc2(param_4[6]);
    auVar10 = _ppach(in_zero_qw,auVar10);
    auVar10 = _ppacb(in_zero_qw,auVar10);
    auVar6 = _vadd(in_vf0,auVar6);
    *(int *)(param_4[7] + 8) = auVar10._0_4_;
    auVar10 = _sqc2(auVar6);
    param_4[6] = auVar10;
    param_4 = param_4 + 8;
  }
  if (!bVar1) {
    pauVar2 = (undefined1 (*) [16])&DAT_004432c0;
  }
  else {
    pauVar2 = (undefined1 (*) [16])&DAT_004432b0;
  }
  auVar10 = _lqc2(*pauVar2);
  _vopmula(auVar8,auVar10);
  auVar3 = _vopmsub(auVar10,auVar8);
  auVar10 = _qmtc2(uVar5);
  auVar6 = _qmtc2(0x43000000);
  _vopmula(auVar3,auVar8);
  auVar8 = _vopmsub(auVar8,auVar3);
  auVar3 = _vmulbc(auVar12,auVar6);
  auVar4 = _vmulbc(auVar8,auVar10);
  auVar10 = _vftoi0(auVar3);
  auVar8 = _pextlh(0,0x8000ff00ff00ff);
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar7 = _vftoi0(auVar3);
  _lqc2(*param_4);
  auVar6 = _vadd(auVar13,auVar4);
  auVar10 = _pminw(auVar10,auVar8);
  auVar12 = _vadd(in_vf0,auVar6);
  auVar6 = _ppach(in_zero_qw,auVar10);
  auVar10 = _sqc2(auVar12);
  *param_4 = auVar10;
  auVar10 = _ppacb(in_zero_qw,auVar6);
  auVar6 = _qmfc2(auVar7._0_4_);
  *(int *)(param_4[1] + 8) = auVar10._0_4_;
  auVar10 = _vsub(auVar13,auVar4);
  auVar13 = _pminw(auVar6,auVar8);
  _lqc2(param_4[2]);
  auVar13 = _ppach(in_zero_qw,auVar13);
  auVar6 = _vadd(in_vf0,auVar10);
  auVar10 = _ppacb(in_zero_qw,auVar13);
  auVar13 = _sqc2(auVar6);
  param_4[2] = auVar13;
  auVar6 = _vsub(auVar14,auVar4);
  auVar13 = _vftoi0(auVar3);
  *(int *)(param_4[3] + 8) = auVar10._0_4_;
  auVar13 = _qmfc2(auVar13._0_4_);
  _lqc2(param_4[4]);
  auVar13 = _pminw(auVar13,auVar8);
  auVar6 = _vadd(in_vf0,auVar6);
  auVar10 = _ppach(in_zero_qw,auVar13);
  auVar13 = _sqc2(auVar6);
  param_4[4] = auVar13;
  auVar13 = _ppacb(in_zero_qw,auVar10);
  auVar10 = _vftoi0(auVar3);
  *(int *)(param_4[5] + 8) = auVar13._0_4_;
  auVar13 = _qmfc2(auVar10._0_4_);
  _lqc2(param_4[6]);
  auVar13 = _pminw(auVar13,auVar8);
  auVar14 = _vadd(auVar14,auVar4);
  auVar13 = _ppach(in_zero_qw,auVar13);
  auVar10 = _vadd(in_vf0,auVar14);
  auVar14 = _ppacb(in_zero_qw,auVar13);
  auVar13 = _sqc2(auVar10);
  param_4[6] = auVar13;
  *(int *)(param_4[7] + 8) = auVar14._0_4_;
  return;
}


// ==== FUN_001bdee8 @ 001bdee8 ====

void FUN_001bdee8(int param_1)

{
  char cVar1;
  float *pfVar2;
  char *pcVar3;
  
  if (DAT_00415a60 == 0) {
    DAT_00415a58 = -0.25;
    DAT_00415a60 = 1;
    DAT_00415a5c = 0.0;
  }
  pfVar2 = (float *)(param_1 + 0x10);
  pcVar3 = (char *)(param_1 + 0x1200);
  cVar1 = *pcVar3;
  while( true ) {
    if (-1 < cVar1) {
      if (cVar1 == '\x03') {
        *pfVar2 = 0.0;
        pfVar2[1] = 0.0;
        pfVar2[8] = 0.0;
        pfVar2[9] = 1.0;
        pfVar2[0x10] = 0.6667;
        pfVar2[0x11] = 1.0;
        pfVar2[0x18] = 0.6667;
        pfVar2[0x19] = 0.0;
        pfVar2[0x20] = 0.0;
        pfVar2[0x21] = 0.0;
        pfVar2[0x28] = 0.0;
        pfVar2[0x29] = 1.0;
        pfVar2[0x30] = 0.6667;
        pfVar2[0x31] = 1.0;
        pfVar2[0x38] = 0.6667;
        pfVar2[0x39] = 0.0;
      }
      else {
        *pfVar2 = *pfVar2 + DAT_00415a58;
        pfVar2[1] = pfVar2[1] + DAT_00415a5c;
        pfVar2[8] = pfVar2[8] + DAT_00415a58;
        pfVar2[9] = pfVar2[9] + DAT_00415a5c;
        pfVar2[0x10] = pfVar2[0x10] + DAT_00415a58;
        pfVar2[0x11] = pfVar2[0x11] + DAT_00415a5c;
        pfVar2[0x18] = pfVar2[0x18] + DAT_00415a58;
        pfVar2[0x19] = pfVar2[0x19] + DAT_00415a5c;
        pfVar2[0x20] = pfVar2[0x20] + DAT_00415a58;
        pfVar2[0x21] = pfVar2[0x21] + DAT_00415a5c;
        pfVar2[0x28] = pfVar2[0x28] + DAT_00415a58;
        pfVar2[0x29] = pfVar2[0x29] + DAT_00415a5c;
        pfVar2[0x30] = pfVar2[0x30] + DAT_00415a58;
        pfVar2[0x31] = pfVar2[0x31] + DAT_00415a5c;
        pfVar2[0x38] = pfVar2[0x38] + DAT_00415a58;
        pfVar2[0x39] = pfVar2[0x39] + DAT_00415a5c;
      }
      pfVar2 = pfVar2 + 0x40;
      *pcVar3 = *pcVar3 + -1;
    }
    pcVar3 = pcVar3 + 1;
    if (param_1 + 0x1212 <= (int)pcVar3) break;
    cVar1 = *pcVar3;
  }
  return;
}


// ==== FUN_001be108 @ 001be108 ====

void FUN_001be108(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = (int *)(param_1 + 0x1214);
  FUN_0026a6f0(*(undefined4 *)(DAT_0040f4c0 + 0xd540));
  FUN_0026a8d0(1);
  FUN_0026a998(0);
  FUN_0026aa60(0);
  FUN_0026aa68(1);
  FUN_0026a840(*(undefined4 *)(param_1 + 0x23f4));
  iVar3 = param_1;
  do {
    if ((-1 < *(char *)(param_1 + 0x1200 + iVar4)) && (*piVar2 == 0)) {
      FUN_0026b738(iVar3,8);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x100;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x12);
  iVar4 = 0;
  FUN_0026a840(*(undefined4 *)(param_1 + 0x23f8));
  piVar2 = (int *)(param_1 + 0x1214);
  iVar3 = param_1;
  do {
    if (('\0' < *(char *)(param_1 + 0x1200 + iVar4)) && (*piVar2 == 1)) {
      FUN_0026b738(iVar3,8);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x100;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 0x12);
  if (*(char *)(param_1 + 0x13e0) == '\0') {
    cVar1 = *(char *)(param_1 + 0x23f0);
  }
  else {
    FUN_0026a840(*(undefined4 *)(param_1 + 0x23fc));
    FUN_0026b738(param_1 + 0x1260,4);
    if (*(char *)(param_1 + 0x13e1) != '\0') {
      FUN_0026b738(param_1 + 0x12e0,8);
    }
    *(undefined1 *)(param_1 + 0x13e0) = 0;
    cVar1 = *(char *)(param_1 + 0x23f0);
  }
  if ('\0' < cVar1) {
    FUN_0026a840(*(undefined4 *)(param_1 + 0x23fc));
    FUN_0026b738(param_1 + 0x13f0,*(undefined1 *)(param_1 + 0x23f0));
    *(undefined1 *)(param_1 + 0x23f0) = 0;
  }
  FUN_0026a7a0();
  return;
}


// ==== FUN_001be2a0 @ 001be2a0 ====

undefined4 FUN_001be2a0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x11;
  puVar1 = (undefined1 *)(param_1 + 0x1211);
  do {
    *puVar1 = 0xff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x23fc) = 0;
  *(undefined1 *)(param_1 + 0x13e0) = 0;
  *(undefined4 *)(param_1 + 0x23f4) = 0;
  *(undefined4 *)(param_1 + 0x23f8) = 0;
  return 1;
}


// ==== FUN_001be2e0 @ 001be2e0 ====

void FUN_001be2e0(void)

{
  return;
}


// ==== FUN_001be2f0 @ 001be2f0 ====

undefined4 FUN_001be2f0(void)

{
  FUN_001be890();
  return 1;
}


// ==== FUN_001be310 @ 001be310 ====

undefined4 FUN_001be310(void)

{
  FUN_001be890();
  return 1;
}


// ==== FUN_001be330 @ 001be330 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001be330(int param_1)

{
  undefined8 in_v0_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  undefined1 auVar19 [16];
  
  fVar12 = *(float *)(DAT_0040f4d0 + 0x20);
  pauVar5 = (undefined1 (*) [16])(param_1 + 0x10);
  lVar6 = 0x10000;
  do {
    fVar10 = *(float *)(pauVar5[8] + 0xc);
    auVar1._8_8_ = in_v0_udw;
    auVar1._0_8_ = lVar6;
    if (fVar12 < fVar10) {
      fVar11 = *(float *)(pauVar5[8] + 8);
      auVar4 = _pextlw(0,0);
      fVar8 = *(float *)(pauVar5[8] + 4);
      fVar9 = fVar12 - fVar11;
      fVar7 = *(float *)pauVar5[8];
      auVar17 = _lqc2(_DAT_004432a0);
      auVar15 = _lqc2(*pauVar5);
      auVar14 = _lqc2(pauVar5[1]);
      auVar13 = _lqc2(pauVar5[2]);
      auVar19 = _lqc2(pauVar5[3]);
      auVar1 = _sqc2(auVar17);
      pauVar5[7] = auVar1;
      lVar3 = (long)(int)(fVar9 * fVar8 + fVar7);
      auVar2 = _pextlw(lVar3,0);
      auVar1 = _pextlw(0,lVar3);
      auVar2 = _pextlw(0,auVar2._0_8_);
      auVar1 = _pextlw(0,auVar1._0_8_);
      auVar16 = _qmtc2(auVar2._0_4_);
      _vmulabc(auVar15,auVar16);
      _vmaddabc(auVar14,auVar16);
      auVar18 = _vmaddbc(auVar13,auVar16);
      _vmulabc(auVar15,auVar17);
      _vmaddabc(auVar14,auVar17);
      _vmaddabc(auVar13,auVar17);
      auVar19 = _vmaddbc(auVar19,in_vf0);
      auVar4 = _pextlw(lVar3,auVar4._0_8_);
      auVar16 = _qmtc2(auVar1._0_4_);
      auVar17 = _qmtc2(auVar4._0_4_);
      *(int *)pauVar5[4] = auVar1._0_4_;
      *(int *)(pauVar5[4] + 4) = auVar1._4_4_;
      *(int *)(pauVar5[4] + 8) = auVar1._8_4_;
      *(int *)(pauVar5[4] + 0xc) = auVar1._12_4_;
      *(int *)pauVar5[5] = auVar4._0_4_;
      *(int *)(pauVar5[5] + 4) = auVar4._4_4_;
      *(int *)(pauVar5[5] + 8) = auVar4._8_4_;
      *(int *)(pauVar5[5] + 0xc) = auVar4._12_4_;
      _vmulabc(auVar15,auVar16);
      _vmaddabc(auVar14,auVar16);
      auVar4 = _vmaddbc(auVar13,auVar16);
      _vmulabc(auVar15,auVar17);
      _vmaddabc(auVar14,auVar17);
      auVar13 = _vmaddbc(auVar13,auVar17);
      *(int *)pauVar5[6] = auVar2._0_4_;
      *(int *)(pauVar5[6] + 4) = auVar2._4_4_;
      *(int *)(pauVar5[6] + 8) = auVar2._8_4_;
      *(int *)(pauVar5[6] + 0xc) = auVar2._12_4_;
      _sqc2(auVar4);
      _sqc2(auVar13);
      _sqc2(auVar4);
      _sqc2(auVar13);
      _sqc2(auVar18);
      _sqc2(auVar19);
      _sqc2(auVar4);
      _sqc2(auVar13);
      _sqc2(auVar18);
      _sqc2(auVar19);
      _sqc2(auVar4);
      _sqc2(auVar13);
      _sqc2(auVar18);
      _sqc2(auVar19);
      auVar2 = _sqc2(auVar4);
      pauVar5[4] = auVar2;
      auVar2 = _sqc2(auVar13);
      pauVar5[5] = auVar2;
      auVar2 = _sqc2(auVar18);
      pauVar5[6] = auVar2;
      auVar2 = _sqc2(auVar19);
      pauVar5[7] = auVar2;
      _sqc2(auVar18);
      _sqc2(auVar19);
      if (*(float *)pauVar5[9] < 1.0) {
        fVar9 = fVar9 / (fVar10 - fVar11);
        fVar10 = (float)((int)fVar9 * (uint)(fVar9 < 1.0) | (uint)(fVar9 >= 1.0) * 0x3f800000);
        if (fVar10 < *(float *)pauVar5[9]) goto LAB_001be4a4;
        *(float *)(pauVar5[9] + 8) = 1.0 - fVar10;
      }
    }
LAB_001be4a4:
    pauVar5 = pauVar5 + 0xb;
    in_v0_udw = auVar1._8_8_;
    lVar6 = (long)((int)lVar6 + 0x10000);
    if (7 < auVar1._0_4_ >> 0x10) {
      return;
    }
  } while( true );
}


// ==== FUN_001be4c0 @ 001be4c0 ====

void FUN_001be4c0(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_vf9 [16];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar2 = DAT_0040f4c0;
  iVar10 = 0;
  fVar12 = *(float *)(DAT_0040f4d0 + 0x20);
  pauVar9 = (undefined1 (*) [16])(DAT_0040f4c0 + 0xcfd0);
  do {
    piVar7 = (int *)(iVar10 * 0xb0 + param_1);
    iVar10 = iVar10 + 1;
    if (((float)piVar7[0x26] <= fVar12) && (fVar12 < (float)piVar7[0x27])) {
      _vmove(in_vf9);
      auVar18 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0x10));
      auVar15 = _lqc2(*(undefined1 (*) [16])*piVar7);
      iVar6 = 1;
      auVar17 = _lqc2(*(undefined1 (*) [16])(piVar7 + 8));
      iVar5 = 0;
      auVar16 = _lqc2(*(undefined1 (*) [16])(piVar7 + 0xc));
      auVar13 = _qmtc2((fVar12 - (float)piVar7[0x26]) * (float)piVar7[0x25] + (float)piVar7[0x24]);
      auVar14 = _lqc2(*(undefined1 (*) [16])(piVar7 + 4));
      auVar13 = _vmulbc(auVar15,auVar13);
      auVar19 = _vaddbc(in_vf0,in_vf0);
      _vmulabc(auVar14,auVar15);
      _vmaddabc(auVar17,auVar15);
      _vmaddabc(auVar16,auVar15);
      auVar14 = _vmaddbc(auVar18,in_vf0);
      _vmove(auVar13);
      auVar13 = _vadd(in_vf0,auVar14);
      in_vf9 = _vmove(auVar13);
      auVar15 = _vmove(in_vf9);
      auVar13 = _sqc2(auVar15);
      auVar14 = _vmove(auVar15);
      fStack_84 = auVar13._12_4_;
      fVar3 = fStack_84;
      fVar11 = -fStack_84;
      auVar13 = _lqc2(*pauVar9);
      pauVar4 = pauVar9;
      while( true ) {
        iVar5 = iVar5 + 1;
        auVar16 = _vmul(auVar14,auVar13);
        pauVar4 = pauVar4 + 1;
        _vaddabc(auVar16,auVar16);
        auVar16 = _vmaddbc(auVar19,auVar16);
        auVar13 = _vsubbc(auVar16,auVar13);
        auVar13 = _qmfc2(auVar13._0_4_);
        iVar8 = 0;
        if (fStack_84 < auVar13._0_4_) break;
        if (fVar11 < auVar13._0_4_) {
          iVar6 = 3;
        }
        if (1 < iVar5) {
          auVar14 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xcff0));
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd000));
          auVar16 = _vmulbc(auVar14,auVar15);
          auVar14 = _vmulbc(auVar13,auVar15);
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd010));
          auVar14 = _vadd(auVar16,auVar14);
          auVar13 = _vmulbc(auVar13,auVar15);
          auVar14 = _vadd(auVar14,auVar13);
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd020));
          auVar14 = _vsub(auVar14,auVar13);
          auVar13 = _qmfc2(auVar14._0_4_);
          if (auVar13._0_4_ <= fStack_84) {
            auVar13 = _sqc2(auVar14);
            fStack_8c = auVar13._4_4_;
            if (fStack_84 < fStack_8c) goto LAB_001be6a4;
            auVar13 = _sqc2(auVar14);
            fStack_88 = auVar13._8_4_;
            if (fStack_84 < fStack_88) goto LAB_001be6a4;
            auVar13 = _sqc2(auVar14);
            fStack_84 = auVar13._12_4_;
            bVar1 = false;
            if (fVar3 < fStack_84) goto LAB_001be6a4;
          }
          else {
LAB_001be6a4:
            bVar1 = true;
          }
          iVar8 = 0;
          if (!bVar1) {
            if (iVar6 == 3) {
              iVar8 = 3;
            }
            else {
              auVar14 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd030));
              bVar1 = false;
              auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd040));
              auVar16 = _vmulbc(auVar14,auVar15);
              auVar14 = _vmulbc(auVar13,auVar15);
              auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd050));
              auVar14 = _vadd(auVar16,auVar14);
              auVar13 = _vmulbc(auVar13,auVar15);
              auVar14 = _vadd(auVar14,auVar13);
              auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd060));
              auVar14 = _vsub(auVar14,auVar13);
              auVar13 = _qmfc2(auVar14._0_4_);
              if (auVar13._0_4_ <= fVar11) {
                auVar13 = _sqc2(auVar14);
                fStack_8c = auVar13._4_4_;
                if (fVar11 < fStack_8c) goto LAB_001be750;
                auVar13 = _sqc2(auVar14);
                fStack_88 = auVar13._8_4_;
                if (fVar11 < fStack_88) goto LAB_001be750;
                auVar13 = _sqc2(auVar14);
                fStack_84 = auVar13._12_4_;
                if (fVar11 < fStack_84) goto LAB_001be750;
              }
              else {
LAB_001be750:
                bVar1 = true;
              }
              iVar8 = 1;
              if (bVar1) {
                iVar8 = 3;
              }
            }
          }
          break;
        }
        auVar13 = _lqc2(*pauVar4);
      }
      if ((iVar8 != 0) && (0x37800000 < (piVar7[0x2a] & 0x7f800000U))) {
        iVar5 = *piVar7;
        auVar13 = _sqc2(in_vf9);
        FUN_001af738(0,DAT_0040f4c0 + 0x14,*(undefined4 *)(iVar5 + 0x1c),
                     *(undefined4 *)(iVar5 + 0x38),*(undefined4 *)(iVar5 + 0x40),piVar7 + 0x29,
                     piVar7 + 0x14,iVar8 == 1,1);
        in_vf9 = _lqc2(auVar13);
      }
    }
    if (7 < iVar10) {
      return;
    }
  } while( true );
}


// ==== FUN_001be7f0 @ 001be7f0 ====

void FUN_001be7f0(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 *param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  
  fVar6 = *(float *)(DAT_0040f4d0 + 0x20);
  iVar5 = 0x10000;
  do {
    if ((float)param_6[0x27] < fVar6) {
      *param_6 = param_7;
      fVar6 = fVar6 + param_2;
      uVar1 = *param_8;
      uVar3 = *(undefined4 *)(param_8 + 1);
      uVar4 = *(undefined4 *)((int)param_8 + 0xc);
      param_6[4] = (int)uVar1;
      param_6[5] = (int)((ulong)uVar1 >> 0x20);
      param_6[6] = uVar3;
      param_6[7] = uVar4;
      uVar1 = param_8[2];
      uVar3 = *(undefined4 *)(param_8 + 3);
      uVar4 = *(undefined4 *)((int)param_8 + 0x1c);
      param_6[8] = (int)uVar1;
      param_6[9] = (int)((ulong)uVar1 >> 0x20);
      param_6[10] = uVar3;
      param_6[0xb] = uVar4;
      uVar1 = param_8[4];
      uVar3 = *(undefined4 *)(param_8 + 5);
      uVar4 = *(undefined4 *)((int)param_8 + 0x2c);
      param_6[0xc] = (int)uVar1;
      param_6[0xd] = (int)((ulong)uVar1 >> 0x20);
      param_6[0xe] = uVar3;
      param_6[0xf] = uVar4;
      uVar1 = param_8[6];
      uVar3 = *(undefined4 *)(param_8 + 7);
      uVar4 = *(undefined4 *)((int)param_8 + 0x3c);
      param_6[0x2a] = 0x3f800000;
      param_6[0x10] = (int)uVar1;
      param_6[0x11] = (int)((ulong)uVar1 >> 0x20);
      param_6[0x12] = uVar3;
      param_6[0x13] = uVar4;
      param_6[0x25] = (param_4 - param_3) / param_1;
      param_6[0x24] = param_3;
      param_6[0x27] = fVar6 + param_1;
      param_6[0x28] = param_5;
      param_6[0x26] = fVar6;
      return;
    }
    param_6 = param_6 + 0x2c;
    iVar2 = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x10000;
  } while (iVar2 < 8);
  return;
}


// ==== FUN_001be890 @ 001be890 ====

void FUN_001be890(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pauVar4 = (undefined1 (*) [16])(param_1 + 0x50);
  iVar3 = 0x10000;
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar8 = _vsub(in_vf0,in_vf0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  do {
    auVar1 = _sqc2(auVar5);
    *pauVar4 = auVar1;
    iVar2 = iVar3 >> 0x10;
    auVar1 = _sqc2(auVar6);
    pauVar4[1] = auVar1;
    auVar1 = _sqc2(auVar7);
    pauVar4[2] = auVar1;
    iVar3 = iVar3 + 0x10000;
    auVar1 = _sqc2(auVar8);
    pauVar4[3] = auVar1;
    *(undefined4 *)pauVar4[-5] = 0;
    *(undefined4 *)(pauVar4[4] + 0xc) = 0xbf800000;
    *(undefined4 *)(pauVar4[4] + 8) = 0x4e6e6b28;
    *(undefined4 *)(pauVar4[4] + 4) = 0;
    *(undefined4 *)pauVar4[4] = 0;
    *(undefined4 *)pauVar4[5] = 0x3f800000;
    *(undefined4 *)(pauVar4[5] + 8) = 0x3f800000;
    auVar1 = _sqc2(auVar5);
    pauVar4[-4] = auVar1;
    auVar1 = _sqc2(auVar6);
    pauVar4[-3] = auVar1;
    auVar1 = _sqc2(auVar7);
    pauVar4[-2] = auVar1;
    auVar1 = _sqc2(auVar8);
    pauVar4[-1] = auVar1;
    pauVar4 = pauVar4 + 0xb;
  } while (iVar2 < 8);
  return;
}


// ==== FUN_001be938 @ 001be938 ====

void FUN_001be938(void)

{
  return;
}


// ==== FUN_001be940 @ 001be940 ====

undefined4 FUN_001be940(void)

{
  FUN_001beb50();
  return 1;
}


// ==== FUN_001be960 @ 001be960 ====

void FUN_001be960(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  auVar9 = _qmtc2(0x3f000000);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  iVar3 = 0x10000;
  fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
  uStack_88 = *(undefined4 *)(DAT_0040f4d0 + 0xd8);
  uStack_84 = *(undefined4 *)(DAT_0040f4d0 + 0xdc);
  iVar4 = 0x4e6e6b28;
  uStack_90 = (undefined4)*(undefined8 *)(DAT_0040f4d0 + 0xd0);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(DAT_0040f4d0 + 0xd0) >> 0x20);
  auVar11 = _qmtc2(uStack_90);
  auVar10 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0));
  auStack_70 = _sqc2(auVar6);
  auVar6 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xa0));
  auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x90));
  auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xb0));
  _vmulabc(auVar6,auVar8);
  _vmaddabc(auVar7,auVar8);
  _vmaddabc(auVar10,auVar8);
  auVar6 = _vmaddbc(auVar11,in_vf0);
  _vadd(in_vf0,auVar6);
  auVar6 = _vmove(auVar8);
  auVar6 = _vmulbc(auVar6,auVar9);
  auVar6 = _vmove(auVar6);
  auStack_80 = _sqc2(auVar6);
  do {
    if (((float)param_1[2] <= fVar5) && (fVar5 <= (float)param_1[3])) {
      if (*(int *)(*param_1 + 0x60) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = iVar4;
        param_1[3] = 0;
        param_1[4] = 0;
      }
      else {
        FUN_001b1318(auStack_d0);
        auVar7 = _lqc2(auStack_a0);
        auVar6._4_4_ = uStack_8c;
        auVar6._0_4_ = uStack_90;
        auVar6._8_4_ = uStack_88;
        auVar6._12_4_ = uStack_84;
        auVar6 = _lqc2(auVar6);
        auVar6 = _vsub(auVar6,auVar7);
        auVar6 = _vmul(auVar6,auVar6);
        auVar8 = _lqc2(auStack_70);
        auStack_e0 = _sqc2(auVar7);
        _vaddabc(auVar6,auVar6);
        auVar6 = _vmaddbc(auVar8,auVar6);
        uStack_110 = auStack_d0._0_4_;
        uStack_10c = auStack_d0._4_4_;
        uStack_108 = uStack_c8;
        uStack_104 = uStack_c4;
        auVar6 = _qmfc2(auVar6._0_4_);
        uStack_100 = (undefined4)uStack_c0;
        uStack_fc = (undefined4)((ulong)uStack_c0 >> 0x20);
        uStack_f8 = uStack_b8;
        uStack_f4 = uStack_b4;
        uStack_f0 = (undefined4)uStack_b0;
        uStack_ec = (undefined4)((ulong)uStack_b0 >> 0x20);
        uStack_e8 = uStack_a8;
        uStack_e4 = uStack_a4;
        iVar1 = param_1[1];
        if (auVar6._0_4_ <= *(float *)(iVar1 + 0x28c)) {
          auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x260));
          auVar6 = _vadd(auVar6,auVar7);
          auStack_120 = _sqc2(auVar6);
          auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x250));
          auVar6 = _vadd(auVar6,auVar7);
          auStack_130 = _sqc2(auVar6);
          lVar2 = FUN_0026da20(auStack_80._0_8_,auStack_130);
          if (0 < lVar2) {
            FUN_0013c778(param_1[4],DAT_0040f4d0 + 0x30,auStack_e0._0_8_);
          }
        }
      }
    }
    param_1 = param_1 + 5;
    iVar1 = iVar3 >> 0x10;
    iVar3 = iVar3 + 0x10000;
  } while (iVar1 < 0x20);
  return;
}


// ==== FUN_001beb28 @ 001beb28 ====

undefined4 FUN_001beb28(void)

{
  FUN_001beb50();
  return 1;
}


// ==== FUN_001beb50 @ 001beb50 ====

void FUN_001beb50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x10000;
  do {
    *param_1 = 0;
    iVar1 = iVar2 >> 0x10;
    param_1[1] = 0;
    param_1[2] = 0x4e6e6b28;
    param_1[3] = 0;
    iVar2 = iVar2 + 0x10000;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  } while (iVar1 < 0x20);
  return;
}


// ==== FUN_001beba0 @ 001beba0 ====

void FUN_001beba0(float param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(DAT_0040f4d0 + 0x20);
  iVar2 = 0x10000;
  do {
    if ((float)param_3[3] <= fVar3) {
      *param_3 = param_4;
      param_3[1] = param_5;
      fVar4 = fVar3 + param_1 + *(float *)(param_5 + 0x244);
      param_3[2] = fVar4;
      fVar3 = *(float *)(param_5 + 0x248);
      param_3[4] = param_2;
      param_3[3] = fVar4 + fVar3;
      return;
    }
    param_3 = param_3 + 5;
    iVar1 = iVar2 >> 0x10;
    iVar2 = iVar2 + 0x10000;
  } while (iVar1 < 0x20);
  return;
}


// ==== FUN_001bec18 @ 001bec18 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bec18(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = _pextlw(0x3dcccccd,0x3dcccccd);
  auVar2 = _pextlw(0x3f8ccccd,0x3f8ccccd);
  auVar1 = _pextlw(0x3dcccccd,auVar1._0_8_);
  auVar2 = _pextlw(0x3f8ccccd,auVar2._0_8_);
  auVar3 = _qmtc2(auVar1._0_4_);
  auVar1 = _qmtc2(auVar2._0_4_);
  auVar1 = _vsub(auVar1,auVar3);
  _DAT_00415b90 = _sqc2(auVar1);
  DAT_00415b80 = auVar2._0_4_;
  DAT_00415b84 = auVar2._4_4_;
  DAT_00415b88 = auVar2._8_4_;
  DAT_00415b8c = auVar2._12_4_;
  return;
}


// ==== FUN_001bec68 @ 001bec68 ====

undefined4 FUN_001bec68(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    iVar1 = uVar3 * 0x130 + param_1;
    *(undefined1 *)(iVar1 + 0x124) = 0;
    uVar4 = 0;
    do {
      iVar2 = uVar4 * 4;
      uVar4 = uVar4 + 1 & 0xffff;
      *(undefined4 *)(iVar1 + 0xb0 + iVar2) = 0;
    } while (uVar4 < 8);
    uVar3 = uVar3 + 1 & 0xffff;
    *(undefined4 *)(iVar1 + 0x110) = 0;
  } while (uVar3 < 0x2c);
  return 1;
}


// ==== FUN_001becc8 @ 001becc8 ====

undefined4 FUN_001becc8(void)

{
  return 1;
}


// ==== FUN_001becd0 @ 001becd0 ====

void FUN_001becd0(int param_1)

{
  char cVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
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
  
  uVar5 = 0;
  fVar7 = *(float *)(DAT_0040f4d0 + 0x20);
  fVar6 = fVar7 - *(float *)(DAT_0040f4d0 + 0x1c);
  do {
    pauVar3 = (undefined1 (*) [16])(uVar5 * 0x130 + param_1);
    if (pauVar3[0x12][4] != '\0') {
      auVar8 = _qmtc2(fVar7);
      auVar12 = _lqc2(pauVar3[8]);
      auVar8 = _vsubbc(auVar8,auVar12);
      auVar8 = _qmfc2(auVar8._0_4_);
      pauVar4 = pauVar3 + 0xb;
      if (*(float *)pauVar3[0x12] < auVar8._0_4_) {
        pauVar3[0x12][4] = 0;
        if (*(int *)pauVar3[0x11] != 0) {
          FUN_001b15a0(pauVar4);
          FUN_001b1518(pauVar4);
        }
      }
      else if (*(int *)pauVar3[0x11] == 0) {
        pauVar3[0x12][4] = 0;
      }
      else {
        auVar10 = _lqc2(pauVar3[9]);
        auVar9 = _qmtc2(0x3f000000);
        auVar11 = _qmtc2(auVar8._0_4_);
        auVar8 = _vmulbc(auVar10,auVar9);
        auVar8 = _vmulbc(auVar8,auVar11);
        auVar9 = _vmulbc(auVar10,auVar11);
        auVar12 = _vadd(auVar12,auVar9);
        auVar8 = _vmulbc(auVar8,auVar11);
        auVar8 = _vaddbc(auVar12,auVar8);
        cVar1 = pauVar3[0x12][5];
        auVar8 = _vaddbc(in_vf0,auVar8);
        auVar8 = _sqc2(auVar8);
        pauVar3[7] = auVar8;
        if (cVar1 != '\0') {
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          auVar16 = _vaddbc(in_vf0,in_vf0);
          auVar18 = _vaddbc(in_vf0,in_vf0);
          auVar21 = _vaddbc(in_vf0,in_vf0);
          auVar14 = _lqc2(pauVar3[5]);
          auVar10 = _lqc2(pauVar3[6]);
          auVar13 = _lqc2(pauVar3[5]);
          auVar9 = _lqc2(pauVar3[6]);
          auVar12 = _lqc2(pauVar3[7]);
          auVar8 = _lqc2(pauVar3[4]);
          auVar15 = _lqc2(pauVar3[10]);
          _vmulabc(auVar8,auVar16);
          _vmaddabc(auVar14,auVar16);
          auVar11 = _vmaddbc(auVar10,auVar16);
          _vmulabc(auVar8,auVar18);
          _vmaddabc(auVar14,auVar18);
          auVar14 = _vmaddbc(auVar10,auVar18);
          _vmulabc(auVar8,auVar21);
          _vmaddabc(auVar13,auVar21);
          auVar17 = _vmaddbc(auVar9,auVar21);
          _vmulabc(auVar8,auVar15);
          _vmaddabc(auVar13,auVar15);
          _vmaddabc(auVar9,auVar15);
          auVar19 = _vmaddbc(auVar12,in_vf0);
          auVar8 = _sqc2(auVar14);
          pauVar3[5] = auVar8;
          auVar8 = _sqc2(auVar17);
          pauVar3[6] = auVar8;
          auVar8 = _sqc2(auVar19);
          pauVar3[7] = auVar8;
          auVar8 = _sqc2(auVar11);
          pauVar3[4] = auVar8;
          auVar10 = _lqc2(*pauVar3);
          auVar9 = _lqc2(pauVar3[1]);
          auVar12 = _lqc2(pauVar3[5]);
          auVar8 = _lqc2(pauVar3[6]);
          _sqc2(auVar11);
          _vmulabc(auVar11,auVar10);
          _vmaddabc(auVar12,auVar10);
          auVar20 = _vmaddbc(auVar8,auVar10);
          _vmulabc(auVar11,auVar9);
          _vmaddabc(auVar12,auVar9);
          auVar22 = _vmaddbc(auVar8,auVar9);
          _sqc2(auVar14);
          auVar13 = _lqc2(pauVar3[2]);
          auVar10 = _lqc2(pauVar3[3]);
          auVar9 = _lqc2(pauVar3[5]);
          auVar12 = _lqc2(pauVar3[6]);
          auVar8 = _lqc2(pauVar3[7]);
          _sqc2(auVar16);
          _vmulabc(auVar11,auVar13);
          _vmaddabc(auVar9,auVar13);
          auVar13 = _vmaddbc(auVar12,auVar13);
          _vmulabc(auVar11,auVar10);
          _vmaddabc(auVar9,auVar10);
          _vmaddabc(auVar12,auVar10);
          auVar12 = _vmaddbc(auVar8,in_vf0);
          _sqc2(auVar18);
          _sqc2(auVar21);
          _sqc2(auVar15);
          _sqc2(auVar17);
          _sqc2(auVar19);
          _sqc2(auVar11);
          _sqc2(auVar14);
          _sqc2(auVar17);
          _sqc2(auVar19);
          _sqc2(auVar20);
          _sqc2(auVar22);
          _sqc2(auVar13);
          auVar8 = _sqc2(auVar12);
          pauVar3[7] = auVar8;
          auVar8 = _sqc2(auVar20);
          pauVar3[4] = auVar8;
          auVar8 = _sqc2(auVar22);
          pauVar3[5] = auVar8;
          auVar8 = _sqc2(auVar13);
          pauVar3[6] = auVar8;
          _sqc2(auVar12);
          _sqc2(auVar20);
          _sqc2(auVar22);
          _sqc2(auVar13);
          _sqc2(auVar12);
        }
        FUN_001b11a0(pauVar4);
        lVar2 = FUN_001b1340(fVar7,fVar6,pauVar4,DAT_0040f4d8);
        if (lVar2 == 0) {
          FUN_001b1518(pauVar4);
        }
      }
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 0x2c);
  return;
}


// ==== FUN_001bef70 @ 001bef70 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001bef70(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  long *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong in_hi;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 in_vf0 [16];
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
  undefined1 in_vf9 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_vf16 [16];
  undefined1 auVar37 [16];
  undefined1 in_vf18 [16];
  undefined1 auVar38 [16];
  undefined1 in_vf21 [16];
  undefined4 uVar39;
  undefined4 in_vuI;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [8];
  float fStack_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined1 (*pauStack_160) [16];
  undefined4 uStack_15c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lVar3;
  
  auVar28 = _qmtc2(param_2);
  uVar19 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  uVar18 = *(undefined4 *)(param_3 + 0x18);
  uVar12 = (ulong)*(byte *)(param_3 + 0x44);
  DAT_00418594 = DAT_00418594 + DAT_00418590;
  auVar20 = _qmtc2((float)DAT_00418590 * 2.3283064e-10);
  uVar39 = _vrinit(auVar20);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar27 = _vsub(in_vf0,in_vf0);
  auVar22 = _vaddbc(in_vf0,in_vf0);
  auVar23 = _vaddbc(in_vf0,in_vf0);
  auVar25 = _vaddbc(in_vf0,in_vf0);
  _vmove(in_vf9);
  auStack_230._4_4_ = *(float *)(param_3 + 0x2c) * *(float *)(DAT_0040f4d0 + 0x1c);
  auStack_230._0_4_ = (float)*(int *)(param_3 + 0x3c) * 0.017453292;
  _vadd(in_vf0,auVar28);
  fStack_228 = (float)*(int *)(param_3 + 0x34) * 0.017453292;
  uStack_224 = *(undefined4 *)(param_3 + 0x24);
  auVar21 = _lqc2(_auStack_230);
  uVar17 = *(undefined4 *)(param_3 + 0x14);
  auStack_230._4_4_ = *(float *)(param_3 + 0x30) * *(float *)(DAT_0040f4d0 + 0x1c);
  auStack_230._0_4_ = (float)*(int *)(param_3 + 0x40) * 0.017453292;
  fStack_228 = (float)*(int *)(param_3 + 0x38) * 0.017453292;
  auVar20 = _qmtc2(uVar17);
  uStack_224 = *(undefined4 *)(param_3 + 0x28);
  _vmr32(auVar20);
  auStack_290 = _sqc2(auVar22);
  auVar20 = _lqc2(_auStack_230);
  auVar21 = _vsub(auVar20,auVar21);
  auStack_280 = _sqc2(auVar23);
  auStack_240 = _sqc2(auVar21);
  auVar21 = _qmtc2(uVar19);
  auStack_270 = _sqc2(auVar25);
  auVar21 = _vmr32(auVar21);
  _sqc2(auVar27);
  auStack_250 = _sqc2(auVar20);
  iVar5 = *(int *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 8);
  iVar1 = *(int *)(iVar5 + 8);
  iVar6 = 0;
  if (0 < iVar1) {
    plVar8 = *(long **)(iVar5 + 0xc);
    plVar4 = plVar8;
    do {
      iVar6 = iVar6 + 1;
      if (*plVar4 == *(long *)(param_3 + 8)) {
        uStack_18c = (undefined4)plVar8[1];
        goto LAB_001bf190;
      }
      plVar4 = plVar4 + 2;
      plVar8 = plVar8 + 2;
    } while (iVar6 < iVar1);
  }
  uStack_18c = 0;
LAB_001bf190:
  uVar10 = (ulong)*(ushort *)(param_3 + 0x1c);
  uVar11 = 0x415b80;
  auVar20 = _qmfc2(auVar28._0_4_);
  uVar16 = 0;
  uVar9 = 0x3fc90fdb;
  uVar15 = 0x3f000000;
  uVar14 = 0x4b400000;
  uVar13 = 0x3e800000;
  auVar22 = _vadd(in_vf0,in_vf0);
  iStack_190 = param_1;
  do {
    lVar3 = ((long)iStack_190 | in_hi) + (long)(int)(uVar16 * 0x130);
    pauVar2 = (undefined1 (*) [16])lVar3;
    in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
    if (pauVar2[0x12][4] == '\0') {
      uStack_170 = (int)uVar10 - 1U & 0xffff;
      pauVar2[0x12][4] = 1;
      pauVar2[0x12][5] = (char)uVar12;
      auVar23 = _vrnext(uVar39);
      pauStack_160 = (undefined1 (*) [16])uVar11;
      if (uVar12 != 0) {
        _vmove(auVar23);
        _vrnext(uVar39);
        auVar27 = _lqc2(_DAT_00415b40);
        auVar23 = _vrnext(uVar39);
        auVar28 = _lqc2(_DAT_00415b50);
        auVar23 = _vmul(auVar27,auVar23);
        auVar24 = _lqc2(*pauStack_160);
        auVar25 = _lqc2(pauStack_160[1]);
        _vadda(0,auVar23,auVar28);
        _vmsubabc(auVar28,in_vf0);
        auVar23 = _vmsubbc(auVar23,in_vf0);
        auVar27 = _vmr32(auVar27);
        _vaddabc(auVar24,in_vf0);
        auVar23 = _vmadd(auVar25,auVar23);
        _DAT_00415b40 = _sqc2(auVar27);
        auVar23 = _sqc2(auVar23);
        pauVar2[10] = auVar23;
      }
      auVar23 = _sqc2(auVar21);
      pauVar2[8] = auVar23;
      _vrnext(uVar39);
      *(undefined4 *)pauVar2[0x12] = uVar18;
      _vrnext(uVar39);
      _vrnext(uVar39);
      auVar24 = _lqc2(_DAT_00415b40);
      auVar23 = _vrnext(uVar39);
      auVar27 = _lqc2(_DAT_00415b50);
      auVar23 = _vmul(auVar24,auVar23);
      auVar25 = _lqc2(auStack_250);
      _vadda(0,auVar23,auVar27);
      _vmsubabc(auVar27,in_vf0);
      auVar28 = _vmsubbc(auVar23,in_vf0);
      auVar23 = _lqc2(auStack_240);
      _vrnext(uVar39);
      _vaddabc(auVar25,in_vf0);
      auVar32 = _vmadd(auVar23,auVar28);
      _auStack_230 = _sqc2(auVar32);
      auVar36 = _vmr32(auVar24);
      auVar23 = _vrnext(uVar39);
      auVar24 = _vmaxbc(in_vf0,in_vf0);
      auVar25 = _vmul(auVar36,auVar23);
      auVar23 = _vmove(auVar32);
      _vadda(0,auVar25,auVar27);
      _vmsubabc(auVar27,in_vf0);
      auVar26 = _vmsubbc(auVar25,in_vf0);
      auVar27 = _lqc2(*pauStack_160);
      auVar28 = _vaddbc(in_vf0,auVar23);
      auVar23 = _lqc2(pauStack_160[1]);
      auVar25 = _qmtc2((float)auStack_230._4_4_ * 0.017453292);
      _vaddabc(auVar27,in_vf0);
      auVar26 = _vmadd(auVar23,auVar26);
      auVar25 = _vaddbc(in_vf0,auVar25);
      auVar23 = _vmul(auVar26,auVar26);
      uStack_180 = (undefined4)uVar9;
      _ctc2(uStack_180);
      _vnop();
      auVar25 = _vsubi(auVar25,in_vuI);
      auVar27 = _vaddbc(in_vf0,in_vf0);
      auVar25 = _vabs(auVar25);
      _vaddabc(auVar23,auVar23);
      auVar23 = _vmaddbc(auVar27,auVar23);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar25,in_vuI);
      uStack_130 = (undefined4)uVar14;
      _ctc2(uStack_130);
      _vnop();
      _vmsubai(auVar24,in_vuI);
      _vmaddai(auVar24,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar25,in_vuI);
      uStack_120 = (undefined4)uVar15;
      _ctc2(uStack_120);
      _vnop();
      auVar25 = _vmsubi(auVar24,in_vuI);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar23);
      uVar17 = _vwaitq();
      auVar26 = _vmulq(auVar26,uVar17);
      auVar23 = _vabs(auVar25);
      auVar27 = _vmulbc(in_vf0,auVar28);
      uStack_140 = (undefined4)uVar13;
      _ctc2(uStack_140);
      _vnop();
      auVar25 = _vsubi(auVar23,in_vuI);
      auVar23 = _qmtc2(0x3f800000);
      auVar31 = _vmul(auVar25,auVar25);
      _vmove(in_vf18);
      _ctc2(uStack_180);
      _vnop();
      auVar27 = _vsubi(auVar27,in_vuI);
      auVar34 = _vmul(auVar31,auVar31);
      auVar23 = _vaddbc(in_vf0,auVar23);
      auVar28 = _vmaxbc(in_vf0,in_vf0);
      _ctc2(0xc2992661);
      _vnop();
      auVar24 = _vmuli(auVar25,in_vuI);
      auVar27 = _vabs(auVar27);
      auVar38 = _vmove(auVar23);
      auVar33 = _vmul(auVar34,auVar34);
      auVar29 = _vmul(auVar24,auVar31);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar27,in_vuI);
      _ctc2(uStack_130);
      _vnop();
      _vmsubai(auVar28,in_vuI);
      _vmaddai(auVar28,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar27,in_vuI);
      _ctc2(uStack_120);
      _vnop();
      auVar28 = _vmsubi(auVar28,in_vuI);
      _ctc2(0xc2255de0);
      _vnop();
      auVar30 = _vmuli(auVar25,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar24 = _vmuli(auVar25,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar23 = _vmuli(auVar25,in_vuI);
      auVar27 = _vmulbc(auVar26,auVar26);
      _vmula(auVar30,auVar31);
      _vmadda(auVar29,auVar34);
      _ctc2(0x40c90fda);
      _vmadda(auVar24,auVar34);
      _vmaddai(auVar25,in_vuI);
      auVar25 = _vmadd(auVar23,auVar33);
      _vmove(in_vf16);
      _vaddbc(in_vf0,auVar27);
      auVar23 = _vmulbc(auVar26,auVar26);
      auVar27 = _vabs(auVar28);
      _vaddbc(in_vf0,auVar23);
      _ctc2(uStack_140);
      _vnop();
      auVar28 = _vsubi(auVar27,in_vuI);
      auVar27 = _vmulbc(auVar26,auVar26);
      auVar33 = _vmul(auVar28,auVar28);
      auVar23 = _vsubbc(auVar38,auVar25);
      auVar25 = _vaddbc(in_vf0,auVar23);
      auVar35 = _vmul(auVar33,auVar33);
      _ctc2(0xc2992661);
      _vnop();
      auVar24 = _vmuli(auVar28,in_vuI);
      auVar23 = _vaddbc(in_vf0,auVar27);
      auVar34 = _vmul(auVar35,auVar35);
      auVar31 = _vmul(auVar24,auVar33);
      auVar24 = _vmulbc(auVar23,auVar25);
      auVar29 = _vmul(auVar26,auVar26);
      _ctc2(0xc2255de0);
      _vnop();
      auVar30 = _vmuli(auVar28,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar27 = _vmuli(auVar28,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar23 = _vmuli(auVar28,in_vuI);
      auVar37 = _vmove(auVar24);
      _vmula(auVar30,auVar33);
      _vmadda(auVar31,auVar35);
      _ctc2(0x40c90fda);
      _vmadda(auVar27,auVar35);
      _vmaddai(auVar28,in_vuI);
      auVar28 = _vmadd(auVar23,auVar34);
      auVar27 = _vsub(in_vf0,auVar29);
      auVar23 = _vmulbc(auVar28,auVar28);
      _vmove(in_vf21);
      auVar27 = _vaddbc(auVar27,auVar38);
      auVar26 = _vmulbc(auVar26,auVar25);
      auVar29 = _vmulbc(auVar27,auVar25);
      _vaddbc(in_vf0,auVar23);
      _lqc2(auStack_1e0);
      auVar27 = _vsubbc(auVar38,auVar29);
      _lqc2(auStack_1d0);
      auVar23 = _vsubbc(auVar37,auVar26);
      _lqc2(auStack_1c0);
      auVar25 = _vaddbc(auVar37,auVar26);
      auVar27 = _vaddbc(in_vf0,auVar27);
      auVar31 = _vaddbc(in_vf0,auVar23);
      auVar30 = _vaddbc(in_vf0,auVar25);
      auVar33 = _vmulbc(auVar28,auVar28);
      _vaddbc(in_vf0,auVar28);
      auVar23 = _vaddbc(auVar37,auVar26);
      auVar25 = _vsubbc(auVar38,auVar29);
      _vmove(auVar27);
      _vmove(auVar31);
      auVar34 = _vaddbc(in_vf0,auVar23);
      auVar24 = _vaddbc(in_vf0,auVar25);
      _sqc2(auVar36);
      auVar25 = _vsubbc(auVar37,auVar26);
      auVar23 = _vsubbc(auVar37,auVar26);
      _vmove(auVar30);
      auVar28 = _vmr32(auVar36);
      _vmove(auVar34);
      auVar35 = _vaddbc(in_vf0,auVar25);
      _sqc2(auVar27);
      auVar27 = _vaddbc(in_vf0,auVar23);
      _sqc2(auVar31);
      auVar25 = _vsubbc(auVar38,auVar29);
      _sqc2(auVar30);
      auVar23 = _vaddbc(auVar37,auVar26);
      _DAT_00415b40 = _sqc2(auVar28);
      auVar26 = _vaddbc(in_vf0,auVar33);
      _vmove(auVar24);
      _vmove(auVar35);
      auVar28 = _vaddbc(in_vf0,auVar23);
      _sqc2(auVar34);
      auVar25 = _vaddbc(in_vf0,auVar25);
      _sqc2(auVar24);
      _sqc2(auVar35);
      uVar7 = 0;
      auVar23 = _sqc2(auVar27);
      *pauVar2 = auVar23;
      auVar23 = _sqc2(auVar28);
      pauVar2[1] = auVar23;
      auVar23 = _sqc2(auVar25);
      pauVar2[2] = auVar23;
      auVar26 = _vmove(auVar26);
      auVar23 = _vmulbc(auVar26,auVar32);
      auStack_1e0 = _sqc2(auVar27);
      auStack_1d0 = _sqc2(auVar28);
      auVar24 = _vadd(in_vf0,auVar23);
      auStack_1c0 = _sqc2(auVar25);
      auStack_1a0 = _sqc2(auVar22);
      auStack_1b0 = _sqc2(auVar22);
      auStack_220 = _sqc2(auVar27);
      auStack_210 = _sqc2(auVar28);
      auStack_200 = _sqc2(auVar25);
      auStack_1f0 = _sqc2(auVar22);
      auVar23 = _sqc2(auVar22);
      pauVar2[3] = auVar23;
      auVar23 = _sqc2(auVar24);
      pauVar2[9] = auVar23;
      do {
        iVar5 = uVar7 * 4;
        uVar7 = uVar7 + 1 & 0xffff;
        *(undefined4 *)(pauVar2[0xb] + iVar5) = 0;
      } while (uVar7 < 8);
      *(undefined4 *)pauVar2[0x11] = 0;
      *(int *)pauVar2[7] = auVar20._0_4_;
      *(int *)(pauVar2[7] + 4) = auVar20._4_4_;
      *(int *)(pauVar2[7] + 8) = auVar20._8_4_;
      *(int *)(pauVar2[7] + 0xc) = auVar20._12_4_;
      *(int *)pauVar2[4] = auStack_290._0_4_;
      *(int *)(pauVar2[4] + 4) = auStack_290._4_4_;
      *(undefined4 *)(pauVar2[4] + 8) = auStack_290._8_4_;
      *(undefined4 *)(pauVar2[4] + 0xc) = auStack_290._12_4_;
      *(int *)pauVar2[5] = auStack_280._0_4_;
      *(int *)(pauVar2[5] + 4) = auStack_280._4_4_;
      *(undefined4 *)(pauVar2[5] + 8) = auStack_280._8_4_;
      *(undefined4 *)(pauVar2[5] + 0xc) = auStack_280._12_4_;
      *(int *)pauVar2[6] = auStack_270._0_4_;
      *(int *)(pauVar2[6] + 4) = auStack_270._4_4_;
      *(undefined4 *)(pauVar2[6] + 8) = auStack_270._8_4_;
      *(undefined4 *)(pauVar2[6] + 0xc) = auStack_270._12_4_;
      uStack_17c = (undefined4)((ulong)uVar9 >> 0x20);
      uStack_16c = 0;
      uStack_15c = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_150 = (undefined4)uVar12;
      uStack_14c = (undefined4)(uVar12 >> 0x20);
      uStack_13c = (undefined4)((ulong)uVar13 >> 0x20);
      uStack_12c = (undefined4)((ulong)uVar14 >> 0x20);
      uStack_11c = (undefined4)((ulong)uVar15 >> 0x20);
      auStack_110 = _sqc2(auVar37);
      auStack_100 = _sqc2(auVar22);
      auStack_f0 = _sqc2(auVar38);
      auStack_e0 = _sqc2(auVar24);
      auStack_d0 = _sqc2(auVar21);
      auStack_c0 = _sqc2(auVar26);
      auStack_260 = auVar20;
      uVar17 = FUN_001b1168(uVar19,pauVar2 + 0xb,auStack_290,uStack_18c,1);
      uVar10 = CONCAT44(uStack_16c,uStack_170);
      uVar9 = CONCAT44(uStack_17c,uStack_180);
      uVar11 = CONCAT44(uStack_15c,pauStack_160);
      uVar12 = CONCAT44(uStack_14c,uStack_150);
      uVar13 = CONCAT44(uStack_13c,uStack_140);
      uVar14 = CONCAT44(uStack_12c,uStack_130);
      uVar15 = CONCAT44(uStack_11c,uStack_120);
      in_vf16 = _lqc2(auStack_110);
      auVar22 = _lqc2(auStack_100);
      in_vf18 = _lqc2(auStack_f0);
      _lqc2(auStack_e0);
      auVar21 = _lqc2(auStack_d0);
      in_vf21 = _lqc2(auStack_c0);
      if (uVar10 == 0) {
        return uVar17;
      }
    }
    uVar16 = uVar16 + 1 & 0xffff;
    if (0x2b < uVar16) {
      return uVar17;
    }
  } while( true );
}


// ==== FUN_001bf720 @ 001bf720 ====

void FUN_001bf720(int param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_001b0ff8();
  return;
}


// ==== FUN_001bf740 @ 001bf740 ====

undefined4 FUN_001bf740(int param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vf7 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  auVar7 = _sqc2(in_vf7);
  FUN_001b1038();
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = param_4;
  uVar5 = *(undefined4 *)(param_1 + 0xac);
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  uVar3 = *(undefined4 *)(param_5 + 0x38);
  uVar4 = *(undefined4 *)(param_5 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x40);
  auVar10 = _qmtc2(uVar5);
  *(int *)(param_1 + 0x90) = (int)uVar2;
  *(int *)(param_1 + 0x94) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  auVar9 = _qmtc2(0x40c90fdb);
  auVar6 = _qmtc2(*(undefined4 *)(iVar1 + 0x1c));
  auVar8 = _qmtc2(*(undefined4 *)(iVar1 + 0x20));
  _lqc2(auStack_90);
  _lqc2(auStack_80);
  _vaddbc(in_vf0,auVar6);
  _vaddbc(in_vf0,auVar8);
  auVar6 = _qmtc2(*(undefined4 *)(iVar1 + 0xc));
  auVar8 = _qmtc2(*(undefined4 *)(iVar1 + 0x10));
  _vaddbc(in_vf0,auVar6);
  _vaddbc(in_vf0,auVar8);
  _vaddbc(in_vf0,auVar10);
  _vaddbc(in_vf0,auVar9);
  _lqc2(auVar7);
  uVar3 = uVar5;
  if (*(char *)(iVar1 + 0x30) != '\0') {
    uVar3 = 0xbf800000;
  }
  auVar7 = _qmtc2(uVar3);
  auVar6 = _qmtc2(0x3f800000);
  auVar8 = _vmulbc(in_vf0,auVar7);
  auVar6 = _vmulbc(in_vf0,auVar6);
  auVar7 = _sqc2(auVar6);
  auVar6 = _vsub(auVar6,auVar8);
  auStack_80._0_4_ = auVar7._0_4_;
  auStack_80._4_4_ = auVar7._4_4_;
  auStack_80._8_4_ = auVar7._8_4_;
  auStack_80._12_4_ = auVar7._12_4_;
  auVar7 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar7;
  *(undefined4 *)(param_1 + 0x50) = auStack_80._0_4_;
  *(undefined4 *)(param_1 + 0x54) = auStack_80._4_4_;
  *(undefined4 *)(param_1 + 0x58) = auStack_80._8_4_;
  *(undefined4 *)(param_1 + 0x5c) = auStack_80._12_4_;
  iVar1 = *(int *)(param_1 + 0x40);
  auVar7 = _qmtc2(*(undefined4 *)(iVar1 + 0x18));
  _lqc2(auStack_70);
  auVar6 = _qmtc2(*(undefined4 *)(iVar1 + 0x14));
  _vaddbc(in_vf0,auVar7);
  _vaddbc(in_vf0,auVar6);
  auVar7 = _qmtc2(*(float *)(iVar1 + 0x28) + 1.0);
  auVar6 = _vaddbc(in_vf0,auVar7);
  auVar8 = _qmtc2(1.0 - *(float *)(iVar1 + 0x28));
  auVar7 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar7;
  auVar7 = _vaddbc(in_vf0,auVar8);
  auVar7 = _vsub(auVar6,auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar7;
  if (*(char *)(param_3 + 0x68) == '\0') {
    *(float *)(param_1 + 0xa0) = 8.0 / *(float *)(*(int *)(param_1 + 0x40) + 4);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
  }
  *(float *)(param_1 + 0xa4) =
       *(float *)(*(int *)(param_1 + 0x40) + 8) + *(float *)(**(int **)(param_1 + 0xa8) + 100);
  if (DAT_003bd1c8 == -1) {
    DAT_003bd1c8 = 0;
  }
  return 1;
}


// ==== FUN_001bf918 @ 001bf918 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001bf918(float param_1,undefined1 (*param_2) [16],int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  ulong in_a0_udw;
  int *piVar3;
  undefined1 in_s3_qw [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
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
  undefined1 in_vf16 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 in_vuI;
  undefined4 uStack_14c;
  float fStack_144;
  
  fVar8 = 1.0;
  auVar19 = _lqc2(param_2[3]);
  auVar9 = _lqc2(param_2[9]);
  iVar1 = *(int *)param_2[4];
  _vsub(auVar19,auVar9);
  auVar9 = _sqc2(auVar19);
  param_2[9] = auVar9;
  param_1 = param_1 + *(float *)param_2[10];
  fVar7 = *(float *)(param_2[4] + 0xc);
  fVar5 = *(float *)(param_2[4] + 8) + *(float *)(iVar1 + 8);
  fVar6 = param_1 - fVar7;
  if (fVar5 < param_1) {
    fVar6 = (float)((int)(fVar5 - fVar7) * (uint)(0.0 < fVar5 - fVar7));
  }
  if (*(float *)(iVar1 + 0x2c) < 0.99) {
    fVar8 = (fVar5 - param_1) / (*(float *)(iVar1 + 8) * (1.0 - *(float *)(iVar1 + 0x2c)));
    fVar8 = (float)((int)fVar8 * (uint)(fVar8 < 1.0) | (uint)(fVar8 >= 1.0) * 0x3f800000);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = in_a0_udw;
  fVar5 = fVar6 * *(float *)(iVar1 + 4) + *(float *)(param_2[10] + 0xc);
  auVar14._8_8_ = in_s3_qw._8_8_;
  auVar14._0_8_ = (long)(int)(float)(int)(fVar5 + (float)((uint)fVar5 & 0x80000000 | 0x3f000000));
  auVar9 = _pmaxw(auVar14,auVar9 << 0x40);
  auVar4 = _pextlw(0,auVar9._0_8_);
  *(float *)(param_2[10] + 0xc) = fVar5 - (float)auVar4._0_4_;
  if ((0.001 < fVar8) && (0 < auVar4._0_8_)) {
    _vmove(auVar19);
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    auVar9 = _qmtc2(fVar6);
    auVar12 = _qmtc2(*(undefined4 *)(iVar1 + 0x24));
    auVar15 = _vmulbc(in_vf0,auVar9);
    auVar14 = _qmtc2(0);
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    auVar10 = param_2[1];
    auVar19 = _qmtc2(fVar7);
    _qmtc2(auVar10._0_4_);
    auVar9 = _vmulbc(in_vf0,auVar14);
    auVar29 = _vmulbc(in_vf0,auVar19);
    auVar9 = _sqc2(auVar9);
    auVar19 = _qmtc2(1.0 / (float)auVar4._0_4_);
    auVar19 = _vmulbc(auVar15,auVar19);
    auVar19 = _sqc2(auVar19);
    _qmtc2(SUB164(*param_2,0));
    auVar14 = _vmulbc(in_vf0,auVar14);
    auVar15 = _lqc2(auVar9);
    auVar9 = _vmulbc(auVar14,auVar12);
    auVar14 = _vmulbc(auVar15,auVar12);
    auVar9 = _sqc2(auVar9);
    auVar14 = _sqc2(auVar14);
    if ((long)(int)DAT_00418590 < 0) {
      auVar10._0_8_ = (long)(int)DAT_00418590 & 1U | (long)(int)(DAT_00418590 >> 1);
      fVar6 = (float)(int)auVar10._0_8_ + (float)(int)auVar10._0_8_;
    }
    else {
      fVar6 = (float)(int)DAT_00418590;
    }
    uVar2 = auVar10._8_8_;
    auVar10 = _qmtc2(fVar6 * 2.3283064e-10);
    uVar31 = _vrinit(auVar10);
    piVar3 = *(int **)(*(int *)(param_2[10] + 8) + 4);
    do {
      if ((piVar3 == (int *)0x0) || (iVar1 = *(int *)((int)piVar3 + 8), iVar1 == 0x3c)) {
        piVar3 = (int *)*param_3;
        if (piVar3 == (int *)0x0) {
          return 1;
        }
        *param_3 = *piVar3;
        auVar10 = _sqc2(auVar29);
        auVar12 = _sqc2(in_vf16);
        FUN_001c0840(*(undefined4 *)(param_2[10] + 8),piVar3);
        in_vf16 = _lqc2(auVar12);
        auVar29 = _lqc2(auVar10);
        iVar1 = piVar3[2];
        uVar2 = extraout_v0_udw;
      }
      auVar12._0_8_ = (long)(0x3c - iVar1);
      auVar12._8_8_ = uVar2;
      auVar10 = _pminw(auVar4,auVar12);
      auVar30 = _vrnext(uVar31);
      auVar15 = _pextlw(0,auVar10._0_8_);
      auVar4._0_8_ = (long)(auVar4._0_4_ - auVar15._0_4_);
      auVar12 = _vrnext(uVar31);
      auVar10 = _vmaxbc(in_vf0,in_vf0);
      do {
        _vmove(auVar30);
        _vrnext(uVar31);
        auVar11 = _lqc2(_DAT_00415b40);
        _vrnext(uVar31);
        auVar25 = _lqc2(_DAT_00415b50);
        auVar16 = _vrnext(uVar31);
        auVar13 = _lqc2(param_2[5]);
        auVar17 = _vmul(auVar11,auVar16);
        auVar16 = _lqc2(param_2[6]);
        _vadda(0,auVar17,auVar25);
        _vmsubabc(auVar25,in_vf0);
        auVar17 = _vmsubbc(auVar17,in_vf0);
        _vaddabc(auVar13,in_vf0);
        auVar18 = _vmadd(auVar16,auVar17);
        auVar13 = _vmr32(auVar11);
        auVar16 = _vmove(auVar18);
        auVar16 = _vaddbc(in_vf0,auVar16);
        _sqc2(auVar13);
        auVar16 = _vmulbc(in_vf0,auVar16);
        _ctc2(0x3fc90fdb);
        _vnop();
        auVar16 = _vsubi(auVar16,in_vuI);
        auVar16 = _vabs(auVar16);
        auVar11 = _vmove(auVar12);
        _ctc2(0xbe22f983);
        _vnop();
        _vmulai(auVar16,in_vuI);
        _ctc2(0x4b400000);
        _vnop();
        _vmsubai(auVar10,in_vuI);
        _vmaddai(auVar10,in_vuI);
        _ctc2(0xbe22f983);
        _vnop();
        _vmsubai(auVar16,in_vuI);
        _ctc2(0x3f000000);
        _vnop();
        auVar16 = _vmsubi(auVar10,in_vuI);
        auVar28 = _vmulbc(auVar13,auVar11);
        auVar16 = _vabs(auVar16);
        _ctc2(0x3e800000);
        _vnop();
        auVar11 = _vsubi(auVar16,in_vuI);
        auVar27 = _lqc2(param_2[7]);
        auVar26 = _lqc2(param_2[8]);
        auVar16 = _vmr32(auVar13);
        _DAT_00415b40 = _sqc2(auVar16);
        auVar24 = _vmul(auVar11,auVar11);
        _ctc2(0xc2992661);
        _vnop();
        auVar20 = _vmuli(auVar11,in_vuI);
        auVar16 = _sqc2(auVar18);
        auVar22 = _vmul(auVar24,auVar24);
        _ctc2(0x42a33457);
        _vnop();
        auVar21 = _vmuli(auVar11,in_vuI);
        _ctc2(0x421ed7b7);
        _vnop();
        auVar17 = _vmuli(auVar11,in_vuI);
        auVar13 = _vmul(auVar22,auVar22);
        auVar20 = _vmul(auVar20,auVar24);
        _ctc2(0xc2255de0);
        _vnop();
        auVar23 = _vmuli(auVar11,in_vuI);
        _vmula(auVar23,auVar24);
        _vmadda(auVar20,auVar22);
        _ctc2(0x40c90fda);
        _vmadda(auVar21,auVar22);
        _vmaddai(auVar11,in_vuI);
        auVar11 = _vmadd(auVar17,auVar13);
        auVar17 = _lqc2(param_2[2]);
        auVar21 = _vmulbc(auVar11,auVar11);
        auVar20 = _lqc2(*param_2);
        auVar13 = _lqc2(param_2[1]);
        auVar20 = _vmulbc(auVar20,auVar21);
        auVar17 = _vmulbc(auVar17,auVar11);
        auVar13 = _vmulbc(auVar13,auVar21);
        fStack_144 = auVar16._12_4_;
        auVar16 = _vadd(auVar17,auVar20);
        auVar13 = _vsub(auVar16,auVar13);
        auVar16 = _lqc2(auVar9);
        _vaddabc(auVar25,auVar28);
        _vmsubabc(auVar25,in_vf0);
        auVar21 = _vmsubbc(auVar28,in_vf0);
        auVar16 = _vmulbc(auVar16,auVar11);
        auVar20 = _lqc2(auVar14);
        auVar17 = _vadd(auVar29,auVar16);
        auVar16 = _vmulbc(auVar20,auVar11);
        _vaddabc(auVar27,in_vf0);
        auVar20 = _vmaddbc(auVar26,auVar21);
        auVar11 = _vsub(auVar17,auVar16);
        auVar16 = _vmulbc(auVar13,auVar18);
        _vmove(in_vf16);
        if (fStack_144 < 0.0) {
          auVar13 = _vsub(in_vf0,auVar20);
          auVar20 = _vaddbc(in_vf0,auVar13);
          _vmove(in_vf16);
        }
        _vadd(in_vf0,auVar16);
        auVar16 = _sqc2(auVar20);
        auVar13 = _vmr32(auVar20);
        auVar29 = _sqc2(auVar29);
        auVar17 = _vmove(auVar13);
        uStack_14c = auVar16._4_4_;
        auVar11 = _qmfc2(auVar11._0_4_);
        auVar13 = _qmfc2(auVar17._0_4_);
        auVar15._0_8_ = (long)(auVar15._0_4_ + -1);
        auVar16 = _sqc2(auVar17);
        auVar10 = _sqc2(auVar10);
        auVar12 = _sqc2(auVar12);
        auVar30 = _sqc2(auVar30);
        FUN_001cfe50(uStack_14c,fVar8,piVar3,auVar11._0_8_,auVar13._0_8_);
        auVar11 = _lqc2(auVar29);
        auVar29 = _lqc2(auVar19);
        auVar29 = _vadd(auVar11,auVar29);
        in_vf16 = _lqc2(auVar16);
        auVar10 = _lqc2(auVar10);
        auVar12 = _lqc2(auVar12);
        auVar30 = _lqc2(auVar30);
      } while (auVar15._0_8_ != 0);
      piVar3 = (int *)0x0;
      uVar2 = extraout_v0_udw_00;
    } while (auVar4._0_8_ != 0);
  }
  uVar2 = FUN_001b1070(param_1);
  return uVar2;
}


// ==== FUN_001bfea0 @ 001bfea0 ====

undefined4 FUN_001bfea0(int param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_001b1080();
  return 1;
}


// ==== FUN_001bfed0 @ 001bfed0 ====

void FUN_001bfed0(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar3 = param_1;
  do {
    FUN_001bf720(uVar3);
    uVar3 = uVar3 + 0xb0;
  } while (uVar3 < param_1 + 0x2c000);
  uVar3 = 0;
  iVar4 = param_1 + 0x2c004;
  do {
    uVar3 = uVar3 + 1;
    FUN_001cfdc0(iVar4);
    iVar4 = iVar4 + 0x1c;
  } while (uVar3 < 0x100);
  puVar5 = &DAT_00418598;
  do {
    FUN_001c0730(puVar5);
    puVar5 = puVar5 + 0xc;
  } while (puVar5 < (undefined *)0x4199d8);
  puVar1 = (undefined4 *)(param_1 + 0x2dc0c);
  *(undefined4 *)(param_1 + 0x2dc10) = 0;
  iVar4 = 1;
  *(undefined4 *)(param_1 + 0x2dc04) = 0;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  uVar2 = FUN_00107d20(0x800);
  *(undefined4 *)(param_1 + 0x2dc14) = uVar2;
  uVar2 = FUN_00107d20(0x800);
  *(undefined2 *)(param_1 + 0x2dc1e) = 0x400;
  *(undefined4 *)(param_1 + 0x2dc18) = uVar2;
  *(undefined2 *)(param_1 + 0x2dc1c) = 0;
  return;
}


// ==== FUN_001bffe0 @ 001bffe0 ====

undefined4 FUN_001bffe0(uint param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  FUN_001cff78();
  *(int *)(param_1 + 0x2c000) = param_2;
  sVar1 = *(short *)(param_2 + 0x36);
  *(undefined **)(param_1 + 0x2dc10) = &DAT_00418598;
  *(short *)(param_1 + 0x2dc20) = sVar1;
  if (sVar1 != 0) {
    iVar3 = 0;
    do {
      FUN_001c0740(*(int *)(param_1 + 0x2dc10) + iVar3,*(int *)(param_2 + 0x28) + uVar4 * 0xf0);
      uVar4 = uVar4 + 1 & 0xffff;
      iVar3 = uVar4 * 0xc;
    } while (uVar4 < *(ushort *)(param_1 + 0x2dc20));
  }
  uVar4 = 0;
  iVar3 = param_1 + 0x2c004;
  do {
    uVar4 = uVar4 + 1;
    FUN_001c08b0(iVar3);
    iVar3 = iVar3 + 0x1c;
  } while (uVar4 < 0x100);
  uVar4 = 0;
  iVar3 = param_1 + 0x2c020;
  do {
    *(int *)(iVar3 + -0x1c) = iVar3;
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x1c;
  } while (uVar4 < 0xff);
  *(undefined4 *)(param_1 + 0x2dbe8) = 0;
  *(uint *)(param_1 + 0x2dc04) = param_1 + 0x2c004;
  iVar3 = 1;
  puVar2 = (undefined4 *)(param_1 + 0x2dc0c);
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  iVar3 = *(int *)(param_1 + 0x40);
  uVar4 = param_1;
  while( true ) {
    if (iVar3 != 0) {
      FUN_001bfea0(uVar4);
    }
    if (param_1 + 0x2c000 <= uVar4 + 0xb0) break;
    iVar3 = *(int *)(uVar4 + 0xf0);
    uVar4 = uVar4 + 0xb0;
  }
  uVar4 = 0;
  if (*(short *)(param_1 + 0x2dc1e) != 0) {
    iVar3 = *(int *)(param_1 + 0x2dc14);
    while( true ) {
      *(short *)(uVar4 * 2 + iVar3) = (short)uVar4;
      *(short *)(uVar4 * 2 + *(int *)(param_1 + 0x2dc18)) = (short)uVar4;
      uVar4 = uVar4 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x2dc1e) <= uVar4) break;
      iVar3 = *(int *)(param_1 + 0x2dc14);
    }
  }
  *(undefined2 *)(param_1 + 0x2dc1c) = 0;
  return 1;
}


// ==== FUN_001c01e0 @ 001c01e0 ====

int FUN_001c01e0(int param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x2dc1c);
  if (*(ushort *)(param_1 + 0x2dc1e) == uVar1) {
    iVar3 = 0;
  }
  else {
    *(ushort *)(param_1 + 0x2dc1c) = uVar1 + 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c000) + 0x10) + (param_3 & 0xffff) * 0x34;
    iVar3 = (uint)*(ushort *)((uint)uVar1 * 2 + *(int *)(param_1 + 0x2dc14)) * 0xb0 + param_1;
    FUN_001bf740(iVar3,iVar2,param_2,
                 *(int *)(param_1 + 0x2dc10) + (uint)*(ushort *)(iVar2 + 2) * 0xc,param_4);
  }
  return iVar3;
}


// ==== FUN_001c02a0 @ 001c02a0 ====

void FUN_001c02a0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ushort uVar10;
  int *piVar11;
  short sVar12;
  ushort *puVar13;
  float fVar14;
  
  fVar14 = *(float *)(DAT_0040f4d0 + 0x20);
  piVar11 = *(int **)(param_1 + 0x2dc08);
  if (*(int **)(param_1 + 0x2dc08) != (int *)0x0) {
    do {
      piVar9 = piVar11;
      piVar11 = (int *)*piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
    if (piVar9 != (int *)0x0) {
      *piVar9 = *(int *)(param_1 + 0x2dc04);
      *(undefined4 *)(param_1 + 0x2dc04) = *(undefined4 *)(param_1 + 0x2dc08);
    }
  }
  uVar8 = 1;
  do {
    iVar5 = uVar8 * 4;
    iVar7 = uVar8 - 1;
    uVar8 = uVar8 + 1 & 0xff;
    *(undefined4 *)(param_1 + 0x2dc08 + iVar7 * 4) = *(undefined4 *)(param_1 + 0x2dc08 + iVar5);
  } while (uVar8 < 2);
  uVar8 = 0;
  uVar6 = 0;
  if (*(short *)(param_1 + 0x2dc20) != 0) {
    do {
      uVar6 = FUN_001c0760(fVar14,*(int *)(param_1 + 0x2dc10) + uVar8 * 0xc);
      uVar8 = uVar8 + 1 & 0xffff;
    } while (uVar8 < *(ushort *)(param_1 + 0x2dc20));
  }
  piVar11 = (int *)(param_1 + 0x2dc14);
  *(undefined4 *)(param_1 + 0x2dc0c) = uVar6;
  sVar12 = *(short *)(param_1 + 0x2dc1c);
  puVar13 = (ushort *)*piVar11;
  if (sVar12 != 0) {
    DAT_0040d9f1 = 1;
    uVar1 = *puVar13;
    while( true ) {
      iVar5 = (uint)uVar1 * 0xb0 + param_1;
      cVar4 = '\0';
      if ((fVar14 <= *(float *)(iVar5 + 0x48) + *(float *)(iVar5 + 0xa4)) &&
         (cVar4 = '\x01', *(float *)(iVar5 + 0x4c) < fVar14)) {
        cVar4 = FUN_001bf918(fVar14,iVar5,param_1 + 0x2dc04);
      }
      if (cVar4 == '\0') {
        FUN_001bfea0(iVar5);
        iVar7 = (uint)uVar1 * 2;
        uVar10 = *(short *)(param_1 + 0x2dc1c) - 1;
        uVar2 = *(ushort *)(iVar7 + *(int *)(param_1 + 0x2dc18));
        iVar5 = (uint)uVar10 * 2;
        uVar3 = *(ushort *)(iVar5 + *piVar11);
        *(ushort *)((uint)uVar2 * 2 + *piVar11) = uVar3;
        *(ushort *)(iVar7 + *(int *)(param_1 + 0x2dc18)) = uVar10;
        *(ushort *)(iVar5 + *piVar11) = uVar1;
        *(ushort *)((uint)uVar3 * 2 + *(int *)(param_1 + 0x2dc18)) = uVar2;
        *(short *)(param_1 + 0x2dc1c) = *(short *)(param_1 + 0x2dc1c) + -1;
      }
      else {
        puVar13 = puVar13 + 1;
      }
      sVar12 = sVar12 + -1;
      if (sVar12 == 0) break;
      uVar1 = *puVar13;
    }
    DAT_0040d9f1 = 0;
  }
  return;
}


// ==== FUN_001c0518 @ 001c0518 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c0518(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  FUN_001cff90(*(undefined4 *)(DAT_0040f4d0 + 0x20),_DAT_004432a0);
  if (*(short *)(param_1 + 0x2dc20) != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + *(int *)(param_1 + 0x2dc10) + 4) != 0) {
        piVar2 = (int *)(*(int *)(param_1 + 0x2dc10) + uVar3 * 0xc);
        FUN_001cffb8(piVar2,*(undefined1 *)(*piVar2 + 0xe6));
      }
      uVar3 = uVar3 + 1 & 0xffff;
      iVar1 = uVar3 * 0xc;
    } while (uVar3 < *(ushort *)(param_1 + 0x2dc20));
  }
  return;
}


// ==== FUN_001c05d8 @ 001c05d8 ====

void FUN_001c05d8(undefined8 param_1,undefined8 param_2)

{
  FUN_001d0010(param_2);
  return;
}


// ==== FUN_001c05f8 @ 001c05f8 ====

void FUN_001c05f8(void)

{
  return;
}


// ==== FUN_001c0600 @ 001c0600 ====

undefined4 FUN_001c0600(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = *(ushort *)(param_1 + 0x2dc1c);
  iVar3 = *(int *)(param_1 + 0x2dc14);
  if (uVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_001bfea0((uint)*(ushort *)(iVar2 + iVar3) * 0xb0 + param_1);
      uVar4 = uVar4 + 1 & 0xffff;
      iVar2 = uVar4 << 1;
    } while (uVar4 < uVar1);
  }
  *(undefined2 *)(param_1 + 0x2dc1c) = 0;
  uVar4 = 0;
  if (*(short *)(param_1 + 0x2dc20) != 0) {
    iVar3 = 0;
    do {
      FUN_001c0750(*(int *)(param_1 + 0x2dc10) + iVar3);
      uVar4 = uVar4 + 1 & 0xffff;
      iVar3 = uVar4 * 0xc;
    } while (uVar4 < *(ushort *)(param_1 + 0x2dc20));
  }
  uVar4 = 0;
  iVar3 = 0;
  do {
    FUN_001c08d0(param_1 + iVar3 + 0x2c004);
    uVar4 = uVar4 + 1 & 0xffff;
    iVar3 = uVar4 * 0x1c;
  } while (uVar4 < 0x100);
  return 1;
}


// ==== FUN_001c0730 @ 001c0730 ====

void FUN_001c0730(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_001c0740 @ 001c0740 ====

void FUN_001c0740(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_001c0750 @ 001c0750 ====

void FUN_001c0750(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_001c0760 @ 001c0760 ====

int * FUN_001c0760(float param_1,int *param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  
  piVar4 = (int *)param_2[1];
  fVar2 = *(float *)(*param_2 + 100);
  if (piVar4 != (int *)0x0) {
    fVar5 = (float)piVar4[1];
    piVar3 = (int *)0x0;
    while( true ) {
      piVar1 = (int *)*piVar4;
      if (fVar5 + fVar2 <= param_1) {
        if (piVar3 == (int *)0x0) {
          param_2[1] = (int)piVar1;
        }
        else {
          *piVar3 = (int)piVar1;
        }
        FUN_001c08d0(piVar4);
        *piVar4 = (int)param_3;
        *(short *)(param_2 + 2) = (short)param_2[2] + -1;
        param_3 = piVar4;
        piVar4 = piVar3;
      }
      if (piVar1 == (int *)0x0) break;
      fVar5 = (float)piVar1[1];
      piVar3 = piVar4;
      piVar4 = piVar1;
    }
  }
  return param_3;
}


// ==== FUN_001c0840 @ 001c0840 ====

void FUN_001c0840(int param_1,undefined8 param_2)

{
  FUN_001c08b0(param_2);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = (undefined4 *)param_2;
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  return;
}


// ==== FUN_001c0890 @ 001c0890 ====

void FUN_001c0890(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0xc61c3c00;
  *param_1 = 0;
  return;
}


// ==== FUN_001c08b0 @ 001c08b0 ====

void FUN_001c08b0(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0xc61c3c00;
  *param_1 = 0;
  return;
}


// ==== FUN_001c08d0 @ 001c08d0 ====

void FUN_001c08d0(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0xc61c3c00;
  *param_1 = 0;
  return;
}


// ==== FUN_001c08f0 @ 001c08f0 ====

void FUN_001c08f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_001b0ff8();
  return;
}


// ==== FUN_001c0910 @ 001c0910 ====

undefined8
FUN_001c0910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5
            )

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_ac;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  
  if (DAT_00415a80 == 0) {
    auVar2 = _pextlw(0,0);
    auVar2 = _pextlw(0x3e4ccccd,auVar2._0_8_);
    DAT_00415a70 = auVar2._0_4_;
    DAT_00415a74 = auVar2._4_4_;
    DAT_00415a78 = auVar2._8_4_;
    DAT_00415a7c = auVar2._12_4_;
    DAT_00415a80 = 1;
  }
  if (DAT_00415aa0 == 0) {
    auVar2 = _pextlw(0,0);
    auVar2 = _pextlw(0xffffffffc2c80000,auVar2._0_8_);
    DAT_00415a90 = auVar2._0_4_;
    DAT_00415a94 = auVar2._4_4_;
    DAT_00415a98 = auVar2._8_4_;
    DAT_00415a9c = auVar2._12_4_;
    DAT_00415aa0 = 1;
  }
  FUN_001b1038(param_1);
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  auVar7 = _qmtc2(0x3f000000);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x30));
  auVar5._4_4_ = DAT_00415a94;
  auVar5._0_4_ = DAT_00415a90;
  auVar5._8_4_ = DAT_00415a98;
  auVar5._12_4_ = DAT_00415a9c;
  auVar5 = _lqc2(auVar5);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x20));
  auVar6 = _vadd(auVar4,auVar5);
  auVar5 = _vmulbc(auVar2,auVar7);
  auVar2._4_4_ = DAT_00415a74;
  auVar2._0_4_ = DAT_00415a70;
  auVar2._8_4_ = DAT_00415a78;
  auVar2._12_4_ = DAT_00415a7c;
  auVar2 = _lqc2(auVar2);
  auVar6 = _vadd(auVar6,auVar5);
  auVar2 = _vadd(auVar4,auVar2);
  auVar2 = _vadd(auVar2,auVar5);
  auVar5 = _qmfc2(auVar6._0_4_);
  auVar2 = _qmfc2(auVar2._0_4_);
  lVar1 = FUN_0012ae58(DAT_0040f4d0,auVar2._0_8_,auVar5._0_8_,1,0,1,auStack_a0);
  if (lVar1 == 0) {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_5 + 0x30));
    auVar5 = _qmtc2(0x40400000);
    auVar2 = _vsubbc(auVar2,auVar5);
    auVar2 = _sqc2(auVar2);
    uStack_ac = auVar2._4_4_;
  }
  else {
    uStack_ac = uStack_9c;
  }
  *(undefined4 *)(iVar3 + 0x58) = uStack_ac;
  *(undefined4 *)(iVar3 + 0x50) = param_4;
  return 1;
}


// ==== FUN_001c0a78 @ 001c0a78 ====

undefined8 FUN_001c0a78(float param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong in_a0_udw;
  undefined1 auVar5 [16];
  int iVar6;
  long lVar7;
  undefined1 in_s2_qw [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_vf15 [16];
  undefined1 auVar24 [16];
  undefined1 in_vf16 [16];
  undefined1 in_vf17 [16];
  undefined1 auVar25 [16];
  undefined1 in_vf18 [16];
  undefined1 auVar26 [16];
  undefined1 in_vf19 [16];
  undefined1 auVar27 [16];
  undefined1 in_vf20 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 in_vuI;
  undefined4 uVar30;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  
  fVar8 = *(float *)(param_2[4] + 8) + *(float *)(*(int *)param_2[4] + 8);
  uVar3 = 0;
  if (param_1 <= fVar8 + **(float **)param_2[5]) {
    fVar9 = param_1 - *(float *)(param_2[4] + 0xc);
    if (fVar8 < param_1) {
      fVar8 = fVar8 - *(float *)(param_2[4] + 0xc);
      fVar9 = (float)((int)fVar8 * (uint)(0.0 < fVar8));
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = in_a0_udw;
    fVar8 = fVar9 * *(float *)(*(int *)param_2[4] + 4) + *(float *)(param_2[5] + 4);
    auVar10._8_8_ = in_s2_qw._8_8_;
    auVar10._0_8_ = (long)(int)(float)(int)(fVar8 + (float)((uint)fVar8 & 0x80000000 | 0x3f000000));
    auVar5 = _pmaxw(auVar10,auVar5 << 0x40);
    auVar5 = _pextlw(0,auVar5._0_8_);
    iVar6 = auVar5._0_4_;
    lVar7 = auVar5._0_8_;
    *(float *)(param_2[5] + 4) = fVar8 - (float)iVar6;
    while (0 < lVar7) {
      lVar7 = (long)(iVar6 + -1);
      auVar5 = _lqc2(param_2[2]);
      iVar6 = *(int *)param_2[4];
      uVar1 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
      if ((int)uVar1 < 0) {
        fVar8 = *(float *)(iVar6 + 0x1c);
      }
      else {
        fVar8 = *(float *)(iVar6 + 0x1c);
      }
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _qmtc2(0x3f800000);
      auVar14 = _lqc2(*param_2);
      auVar11 = _vmul(auVar14,auVar14);
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar10,auVar11);
      auVar22 = _vmove(auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar11);
      uVar30 = _vwaitq();
      auVar15 = _vmulq(auVar14,uVar30);
      _vmove(in_vf18);
      auVar14 = _vmaxbc(in_vf0,in_vf0);
      auVar10 = _vaddbc(in_vf0,auVar12);
      auVar26 = _vmove(auVar10);
      auVar10 = _vmulbc(auVar15,auVar15);
      _vmove(in_vf15);
      _vaddbc(in_vf0,auVar10);
      auVar23 = _vmove(auVar14);
      auVar11 = _vmulbc(auVar15,auVar15);
      auVar10 = _qmtc2((fVar8 + (*(float *)(iVar6 + 0x20) - fVar8) * (float)uVar1 * 2.3283064e-10) *
                       57.29578 * 0.017453292);
      auVar10 = _vaddbc(in_vf0,auVar10);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar10 = _vsubi(auVar10,in_vuI);
      auVar10 = _vabs(auVar10);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar10,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar14,in_vuI);
      _vmaddai(auVar14,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar10,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar10 = _vmsubi(auVar14,in_vuI);
      _vaddbc(in_vf0,auVar11);
      auVar10 = _vabs(auVar10);
      _ctc2(0x3e800000);
      _vnop();
      auVar10 = _vsubi(auVar10,in_vuI);
      auVar14 = _vmul(auVar10,auVar10);
      _ctc2(0xc2992661);
      _vnop();
      auVar12 = _vmuli(auVar10,in_vuI);
      auVar16 = _vmul(auVar14,auVar14);
      _ctc2(0xc2255de0);
      _vnop();
      auVar19 = _vmuli(auVar10,in_vuI);
      auVar11 = _vmul(auVar16,auVar16);
      auVar12 = _vmul(auVar12,auVar14);
      _ctc2(0x42a33457);
      _vnop();
      auVar17 = _vmuli(auVar10,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar13 = _vmuli(auVar10,in_vuI);
      _vmula(auVar19,auVar14);
      _vmadda(auVar12,auVar16);
      _ctc2(0x40c90fda);
      _vmadda(auVar17,auVar16);
      _vmaddai(auVar10,in_vuI);
      auVar10 = _vmadd(auVar13,auVar11);
      auVar12 = _vmul(auVar15,auVar15);
      auVar11 = _vmulbc(auVar15,auVar15);
      auVar10 = _vsubbc(auVar26,auVar10);
      auVar10 = _vaddbc(in_vf0,auVar10);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar12 = _vsub(in_vf0,auVar12);
      auVar11 = _vmulbc(auVar11,auVar10);
      auVar12 = _vaddbc(auVar12,auVar26);
      auVar24 = _vmove(auVar11);
      auVar15 = _vmulbc(auVar15,auVar10);
      auVar16 = _vmulbc(auVar12,auVar10);
      _lqc2(auStack_150);
      _lqc2(auStack_140);
      auVar11 = _vsubbc(auVar26,auVar16);
      _lqc2(auStack_130);
      auVar12 = _vsubbc(auVar24,auVar15);
      auVar10 = _vaddbc(auVar24,auVar15);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auVar14 = _vaddbc(in_vf0,auVar10);
      auVar13 = _vaddbc(in_vf0,auVar11);
      auVar10 = _vaddbc(auVar24,auVar15);
      auVar11 = _vsubbc(auVar26,auVar16);
      _vmove(auVar12);
      _vmove(auVar13);
      auVar19 = _vaddbc(in_vf0,auVar11);
      auVar17 = _vaddbc(in_vf0,auVar10);
      auVar10 = _vsubbc(auVar24,auVar15);
      _vmove(auVar14);
      _sqc2(auVar12);
      uVar2 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + DAT_00418594 + uVar1;
      _sqc2(auVar14);
      auVar12 = _vaddbc(in_vf0,auVar10);
      _sqc2(auVar13);
      auVar10 = _vsubbc(auVar24,auVar15);
      _vmove(auVar17);
      auVar11 = _vsubbc(auVar26,auVar16);
      auVar14 = _vaddbc(in_vf0,auVar10);
      _sqc2(auVar17);
      _sqc2(auVar19);
      auVar10 = _vaddbc(auVar24,auVar15);
      _sqc2(auVar12);
      iVar4 = DAT_00418594 + uVar1 + uVar2;
      _vmove(auVar19);
      _vmove(auVar12);
      auVar12 = _vadd(in_vf0,in_vf0);
      auVar13 = _vaddbc(in_vf0,auVar10);
      auVar15 = _vaddbc(in_vf0,auVar11);
      _vmulabc(auVar14,auVar5);
      _vmaddabc(auVar13,auVar5);
      auVar21 = _vmaddbc(auVar15,auVar5);
      _qmfc2(auVar12._0_4_);
      auVar5 = _sqc2(auVar14);
      auVar10 = _sqc2(auVar13);
      auVar11 = _sqc2(auVar15);
      _sqc2(auVar12);
      _sqc2(auVar12);
      _sqc2(auVar14);
      _sqc2(auVar13);
      _sqc2(auVar15);
      _sqc2(auVar12);
      fVar8 = (float)uVar2 * 2.3283064e-10 * 6.2831855;
      auVar14 = _lqc2(param_2[2]);
      auVar12 = _vmul(auVar14,auVar14);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar22,auVar12);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar12);
      uVar30 = _vwaitq();
      auVar15 = _vmulq(auVar14,uVar30);
      auVar14 = _qmtc2(0x3f800000);
      _vmove(in_vf19);
      auVar12 = _qmtc2(fVar8 * 57.29578 * 0.017453292);
      auVar12 = _vaddbc(in_vf0,auVar12);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar12 = _vsubi(auVar12,in_vuI);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar12 = _vabs(auVar12);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar12,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar23,in_vuI);
      _vmaddai(auVar23,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar12,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar12 = _vmsubi(auVar23,in_vuI);
      auVar12 = _vabs(auVar12);
      _ctc2(0x3e800000);
      _vnop();
      auVar12 = _vsubi(auVar12,in_vuI);
      auVar16 = _vmul(auVar12,auVar12);
      _ctc2(0xc2992661);
      _vnop();
      auVar13 = _vmuli(auVar12,in_vuI);
      auVar19 = _vmul(auVar16,auVar16);
      auVar27 = _vmove(auVar14);
      auVar17 = _vmul(auVar19,auVar19);
      auVar14 = _vmul(auVar13,auVar16);
      _ctc2(0xc2255de0);
      _vnop();
      auVar20 = _vmuli(auVar12,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar18 = _vmuli(auVar12,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar13 = _vmuli(auVar12,in_vuI);
      _vmula(auVar20,auVar16);
      _vmadda(auVar14,auVar19);
      _ctc2(0x40c90fda);
      _vmadda(auVar18,auVar19);
      _vmaddai(auVar12,in_vuI);
      auVar12 = _vmadd(auVar13,auVar17);
      auVar14 = _vmulbc(auVar15,auVar15);
      _vmove(in_vf17);
      auVar13 = _vmulbc(auVar15,auVar15);
      _vaddbc(in_vf0,auVar14);
      auVar12 = _vsubbc(auVar27,auVar12);
      auVar14 = _vmulbc(auVar15,auVar15);
      _vaddbc(in_vf0,auVar13);
      auVar13 = _vmul(auVar15,auVar15);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar13 = _vsub(in_vf0,auVar13);
      auVar14 = _vmulbc(auVar14,auVar12);
      auVar16 = _vaddbc(auVar13,auVar27);
      auVar13 = _vmulbc(auVar15,auVar12);
      auVar25 = _vmove(auVar14);
      auVar15 = _vmulbc(auVar16,auVar12);
      _lqc2(auVar5);
      _lqc2(auVar10);
      auVar5 = _vsubbc(auVar27,auVar15);
      _lqc2(auVar11);
      auVar10 = _vsubbc(auVar25,auVar13);
      auVar14 = _vaddbc(auVar25,auVar13);
      auVar11 = _vaddbc(in_vf0,auVar5);
      auVar12 = _vaddbc(in_vf0,auVar10);
      auVar14 = _vaddbc(in_vf0,auVar14);
      _sqc2(auVar11);
      _sqc2(auVar12);
      auVar5 = _vaddbc(auVar25,auVar13);
      _sqc2(auVar14);
      auVar10 = _vsubbc(auVar27,auVar15);
      _vmove(auVar11);
      _vmove(auVar12);
      auVar11 = _vaddbc(in_vf0,auVar5);
      auVar12 = _vaddbc(in_vf0,auVar10);
      auVar5 = _vsubbc(auVar25,auVar13);
      auVar10 = _vsubbc(auVar25,auVar13);
      _vmove(auVar14);
      iVar6 = *(int *)param_2[4];
      _vmove(auVar11);
      uVar1 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + iVar4;
      auVar14 = _vaddbc(in_vf0,auVar5);
      auVar16 = _vaddbc(in_vf0,auVar10);
      _sqc2(auVar11);
      auVar10 = _vsubbc(auVar27,auVar15);
      _sqc2(auVar12);
      auVar5 = _vaddbc(auVar25,auVar13);
      _sqc2(auVar16);
      iVar4 = iVar4 + uVar1;
      _vmove(auVar12);
      _vmove(auVar16);
      auVar13 = _vaddbc(in_vf0,auVar5);
      auVar12 = _vaddbc(in_vf0,auVar10);
      _vmulabc(auVar14,auVar21);
      _vmaddabc(auVar13,auVar21);
      auVar29 = _vmaddbc(auVar12,auVar21);
      auVar5 = _sqc2(auVar14);
      auVar10 = _sqc2(auVar13);
      auVar11 = _sqc2(auVar12);
      _sqc2(auVar14);
      _sqc2(auVar13);
      _sqc2(auVar12);
      auVar14 = _lqc2(param_2[2]);
      auVar12 = _vmul(auVar14,auVar14);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar22,auVar12);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar12);
      uVar30 = _vwaitq();
      auVar15 = _vmulq(auVar14,uVar30);
      auVar12 = _qmtc2(fVar8 * 57.29578 * 0.017453292);
      _vmove(in_vf20);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auVar13 = _qmtc2(0x3f800000);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar14 = _vsubi(auVar12,in_vuI);
      auVar12 = _vaddbc(in_vf0,auVar13);
      auVar14 = _vabs(auVar14);
      auVar28 = _vmove(auVar12);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar14,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar23,in_vuI);
      _vmaddai(auVar23,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar14,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar12 = _vmsubi(auVar23,in_vuI);
      auVar14 = _vabs(auVar12);
      auVar12 = _vmulbc(auVar15,auVar15);
      _ctc2(0x3e800000);
      _vnop();
      auVar14 = _vsubi(auVar14,in_vuI);
      auVar17 = _vmul(auVar14,auVar14);
      _vmove(in_vf16);
      auVar21 = _vmul(auVar17,auVar17);
      _ctc2(0xc2992661);
      _vnop();
      auVar16 = _vmuli(auVar14,in_vuI);
      _vaddbc(in_vf0,auVar12);
      _ctc2(0xc2255de0);
      _vnop();
      auVar20 = _vmuli(auVar14,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar18 = _vmuli(auVar14,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar19 = _vmuli(auVar14,in_vuI);
      auVar13 = _vmul(auVar21,auVar21);
      auVar16 = _vmul(auVar16,auVar17);
      auVar12 = _vmulbc(auVar15,auVar15);
      _vaddbc(in_vf0,auVar12);
      _vmula(auVar20,auVar17);
      _vmadda(auVar16,auVar21);
      _ctc2(0x40c90fda);
      _vmadda(auVar18,auVar21);
      _vmaddai(auVar14,in_vuI);
      auVar14 = _vmadd(auVar19,auVar13);
      auVar12 = _vmulbc(auVar15,auVar15);
      auVar14 = _vsubbc(auVar28,auVar14);
      auVar13 = _vmul(auVar15,auVar15);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auVar13 = _vsub(in_vf0,auVar13);
      auVar12 = _vmulbc(auVar12,auVar14);
      auVar16 = _vaddbc(auVar13,auVar28);
      auVar22 = _vmove(auVar12);
      auVar13 = _vmulbc(auVar15,auVar14);
      auVar15 = _vmulbc(auVar16,auVar14);
      _lqc2(auVar10);
      auVar12 = _vsubbc(auVar22,auVar13);
      _lqc2(auVar11);
      auVar10 = _vaddbc(auVar22,auVar13);
      _lqc2(auVar5);
      auVar14 = _vaddbc(in_vf0,auVar12);
      auVar16 = _vaddbc(in_vf0,auVar10);
      auVar5 = _vsubbc(auVar28,auVar15);
      auVar17 = _vaddbc(in_vf0,auVar5);
      auVar5 = _vsubbc(auVar28,auVar15);
      _vmove(auVar14);
      auVar10 = _vsubbc(auVar22,auVar13);
      auVar20 = _vaddbc(in_vf0,auVar5);
      auVar5 = _vaddbc(auVar22,auVar13);
      _vmove(auVar17);
      _vmove(auVar16);
      auVar21 = _vaddbc(in_vf0,auVar10);
      auVar18 = _vaddbc(in_vf0,auVar5);
      auVar5 = _vsubbc(auVar22,auVar13);
      auVar19 = _qmtc2(*(undefined4 *)(*(int *)param_2[4] + 0x24));
      auVar11 = _lqc2(param_2[1]);
      auVar12 = _vaddbc(auVar22,auVar13);
      _vmove(auVar18);
      _vmove(auVar20);
      auVar10 = _vaddbc(in_vf0,auVar5);
      auVar12 = _vaddbc(in_vf0,auVar12);
      _sqc2(auVar17);
      _sqc2(auVar14);
      _sqc2(auVar16);
      auVar5 = _qmtc2(*(float *)(iVar6 + 0xc) +
                      (*(float *)(iVar6 + 0x10) - *(float *)(iVar6 + 0xc)) *
                      (float)uVar1 * 2.3283064e-10);
      auVar14 = _vmove(auVar29);
      auVar16 = _vmulbc(auVar14,auVar5);
      auVar5 = _lqc2(param_2[3]);
      DAT_00418590 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + iVar4;
      auVar11 = _vsub(in_vf0,auVar11);
      auVar14 = _vsubbc(auVar28,auVar15);
      _vmove(auVar21);
      auVar11 = _vmulbc(auVar11,auVar19);
      auVar14 = _vaddbc(in_vf0,auVar14);
      _sqc2(auVar18);
      _sqc2(auVar20);
      DAT_00418594 = iVar4 + DAT_00418590;
      _sqc2(auVar21);
      _vmulabc(auVar10,auVar11);
      _vmaddabc(auVar12,auVar11);
      auVar11 = _vmaddbc(auVar14,auVar11);
      auVar5 = _vadd(auVar11,auVar5);
      auStack_150 = _sqc2(auVar10);
      auStack_140 = _sqc2(auVar12);
      auStack_130 = _sqc2(auVar14);
      _sqc2(auVar10);
      _sqc2(auVar12);
      _sqc2(auVar14);
      auVar15 = _qmfc2(auVar5._0_4_);
      auVar5 = _sqc2(auVar24);
      auVar10 = _sqc2(auVar22);
      auVar11 = _sqc2(auVar25);
      auVar12 = _sqc2(auVar26);
      auVar14 = _sqc2(auVar27);
      auVar13 = _sqc2(auVar28);
      auVar16 = _qmfc2(auVar16._0_4_);
      FUN_001d1b40(param_1 - (float)DAT_00418590 * 2.3283064e-10 * fVar9,
                   *(undefined4 *)(param_2[5] + 8),*(undefined4 *)param_2[5],auVar15._0_8_,
                   auVar16._0_8_,0x4b400000,0x3e800000,iVar6,0x3e800000);
      in_vf15 = _lqc2(auVar5);
      iVar6 = (int)lVar7;
      in_vf16 = _lqc2(auVar10);
      in_vf17 = _lqc2(auVar11);
      in_vf18 = _lqc2(auVar12);
      in_vf19 = _lqc2(auVar14);
      in_vf20 = _lqc2(auVar13);
    }
    uVar3 = FUN_001b1070(param_1);
  }
  return uVar3;
}


// ==== FUN_001c1548 @ 001c1548 ====

undefined4 FUN_001c1548(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_001b1080();
  return 1;
}


// ==== FUN_001c1578 @ 001c1578 ====

void FUN_001c1578(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  do {
    FUN_001c08f0(uVar1);
    uVar1 = uVar1 + 0x60;
  } while (uVar1 < param_1 + 0x6000);
  *(undefined4 *)(param_1 + 0x6008) = 0;
  *(undefined4 *)(param_1 + 0x6004) = 0;
  return;
}


// ==== FUN_001c15d0 @ 001c15d0 ====

undefined4 FUN_001c15d0(uint param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  FUN_001d0a68();
  FUN_001d0aa8();
  *(int *)(param_1 + 0x6000) = param_2;
  *(undefined **)(param_1 + 0x6004) = &DAT_00415ba0;
  sVar1 = *(short *)(param_2 + 0x38);
  *(short *)(param_1 + 0x600c) = sVar1;
  if (sVar1 == 0) {
LAB_001c16dc:
    iVar6 = *(int *)(param_1 + 0x40);
    uVar8 = param_1;
    while( true ) {
      if (iVar6 != 0) {
        FUN_001c1548(uVar8);
      }
      if (param_1 + 0x6000 <= uVar8 + 0x60) break;
      iVar6 = *(int *)(uVar8 + 0xa0);
      uVar8 = uVar8 + 0x60;
    }
    *(undefined4 *)(param_1 + 0x6008) = 0;
    return 1;
  }
  iVar6 = 0;
  do {
    iVar2 = *(int *)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 0x2c);
    iVar7 = 0;
    if (*(int *)(iVar2 + 8) < 1) {
LAB_001c1698:
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0xc);
      while( true ) {
        iVar5 = *(int *)(iVar7 * 0x10 + iVar5 + 8);
        lVar4 = FUN_00360838(iVar5 + 0xa8,iVar6 + iVar3);
        if (lVar4 == 0) break;
        iVar7 = iVar7 + 1;
        if (*(int *)(iVar2 + 8) <= iVar7) goto LAB_001c1698;
        iVar5 = *(int *)(iVar2 + 0xc);
      }
    }
    iVar6 = uVar8 * 0xc0;
    iVar2 = uVar8 * 0x90;
    uVar8 = uVar8 + 1 & 0xffff;
    FUN_001d14e0(*(int *)(param_1 + 0x6004) + iVar2,*(int *)(param_2 + 0x2c) + iVar6,iVar5);
    FUN_001d1a30(*(int *)(param_1 + 0x6004) + iVar2);
    if (*(ushort *)(param_1 + 0x600c) <= uVar8) goto LAB_001c16dc;
    iVar6 = uVar8 * 0xc0;
  } while( true );
}


// ==== FUN_001c1740 @ 001c1740 ====

int FUN_001c1740(int param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x6008) != 0x100) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar1 = 1;
      iVar2 = param_1;
      while ((uVar1 < 0x100 && (*(int *)(iVar2 + 0xa0) != 0))) {
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x60;
      }
    }
    if (uVar1 != 0x100) {
      iVar2 = (param_3 & 0xffff) * 0x34 + *(int *)(*(int *)(param_1 + 0x6000) + 0x10);
      iVar3 = uVar1 * 0x60 + param_1;
      FUN_001c0910(iVar3,iVar2,param_2,
                   *(int *)(param_1 + 0x6004) + (uint)*(ushort *)(iVar2 + 2) * 0x90,param_4);
      *(int *)(param_1 + 0x6008) = *(int *)(param_1 + 0x6008) + 1;
      return iVar3;
    }
  }
  return 0;
}


// ==== FUN_001c1810 @ 001c1810 ====

void FUN_001c1810(uint param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  if (*(int *)(param_1 + 0x6008) != 0) {
    uVar3 = 0;
    if (*(short *)(param_1 + 0x600c) != 0) {
      iVar1 = 0;
      do {
        FUN_001d1b38(uVar4,*(int *)(param_1 + 0x6004) + iVar1);
        uVar3 = uVar3 + 1 & 0xffff;
        iVar1 = uVar3 * 0x90;
      } while (uVar3 < *(ushort *)(param_1 + 0x600c));
    }
    iVar1 = *(int *)(param_1 + 0x40);
    uVar3 = param_1;
    while( true ) {
      if ((iVar1 != 0) && (lVar2 = FUN_001c0a78(uVar4,uVar3), lVar2 == 0)) {
        FUN_001c1548(uVar3);
        *(int *)(param_1 + 0x6008) = *(int *)(param_1 + 0x6008) + -1;
      }
      if (param_1 + 0x6000 <= uVar3 + 0x60) break;
      iVar1 = *(int *)(uVar3 + 0xa0);
      uVar3 = uVar3 + 0x60;
    }
    uVar3 = 0;
    if (*(short *)(param_1 + 0x600c) != 0) {
      iVar1 = 0;
      do {
        FUN_001d1d18(uVar4,*(int *)(param_1 + 0x6004) + iVar1);
        uVar3 = uVar3 + 1 & 0xffff;
        iVar1 = uVar3 * 0x90;
      } while (uVar3 < *(ushort *)(param_1 + 0x600c));
    }
  }
  return;
}


// ==== FUN_001c1930 @ 001c1930 ====

void FUN_001c1930(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  FUN_001d0b20(0,0);
  if (*(short *)(param_1 + 0x600c) != 0) {
    iVar1 = 0;
    do {
      FUN_001d0d10(*(int *)(param_1 + 0x6004) + iVar1);
      uVar2 = uVar2 + 1 & 0xffff;
      iVar1 = uVar2 * 0x90;
    } while (uVar2 < *(ushort *)(param_1 + 0x600c));
  }
  FUN_001d0d80();
  return;
}


// ==== FUN_001c19b0 @ 001c19b0 ====

undefined4 FUN_001c19b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = param_1;
  while( true ) {
    if (iVar1 != 0) {
      FUN_001c1548(uVar2);
    }
    if (param_1 + 0x6000 <= uVar2 + 0x60) break;
    iVar1 = *(int *)(uVar2 + 0xa0);
    uVar2 = uVar2 + 0x60;
  }
  uVar2 = 0;
  if (*(short *)(param_1 + 0x600c) != 0) {
    iVar1 = 0;
    do {
      FUN_001d1b28(*(int *)(param_1 + 0x6004) + iVar1);
      FUN_001d1b30(*(int *)(param_1 + 0x6004) + iVar1);
      uVar2 = uVar2 + 1 & 0xffff;
      iVar1 = uVar2 * 0x90;
    } while (uVar2 < *(ushort *)(param_1 + 0x600c));
  }
  return 1;
}


// ==== FUN_001c1a68 @ 001c1a68 ====

void FUN_001c1a68(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1[2] = param_3;
  param_1[1] = param_2;
  fVar1 = *(float *)((int)param_2 + 0x84);
  fVar2 = *(float *)((int)param_2 + 0x80);
  fVar3 = *(float *)((int)param_2 + 0x88);
  fVar1 = (float)((int)fVar2 * (uint)(fVar1 < fVar2) | (int)fVar1 * (uint)(fVar1 >= fVar2));
  fVar2 = (float)((int)fVar1 * (uint)(fVar3 < fVar1) | (int)fVar3 * (uint)(fVar3 >= fVar1));
  *param_1 = fVar2;
  fVar1 = *(float *)((int)param_2 + 0x8c);
  *param_1 = (float)((int)fVar2 * (uint)(fVar1 < fVar2) | (int)fVar1 * (uint)(fVar1 >= fVar2));
  return;
}


// ==== FUN_001c1a98 @ 001c1a98 ====

void FUN_001c1a98(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_001c1bb8();
  iVar1 = *(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x58);
  iVar2 = *(int *)(iVar1 + 0x60);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = *param_2;
  uVar4 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10) = param_2[1];
  FUN_001c88c8(DAT_0040f4c0 + 0xcfd0,iVar1);
  FUN_001af768(DAT_0040f4c0 + 0x14,3);
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc) = uVar3;
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10) = uVar4;
  FUN_001c88c8(DAT_0040f4c0 + 0xcfd0,iVar1);
  FUN_001c1c10(param_1);
  return;
}


// ==== FUN_001c1b78 @ 001c1b78 ====

void FUN_001c1b78(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_001c1b88 @ 001c1b88 ====

undefined4 FUN_001c1b88(void)

{
  DAT_003bd1cc = 0x3f800000;
  return 1;
}


// ==== FUN_001c1ba0 @ 001c1ba0 ====

undefined4 FUN_001c1ba0(void)

{
  return 1;
}


// ==== FUN_001c1bb8 @ 001c1bb8 ====

void FUN_001c1bb8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_0040f4c0 + 0xd540);
  param_1[1] = param_2;
  *param_1 = uVar1;
  FUN_001d3fc0();
  FUN_0026aa68(1);
  FUN_0026aa60(0);
  FUN_0026a998(0);
  FUN_0026a840(0);
  return;
}


// ==== FUN_001c1c10 @ 001c1c10 ====

void FUN_001c1c10(undefined4 *param_1)

{
  FUN_001d4030();
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_001c1c40 @ 001c1c40 ====

void FUN_001c1c40(void)

{
  return;
}


// ==== FUN_001c1c48 @ 001c1c48 ====

undefined4 FUN_001c1c48(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _vadd(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar3);
  *param_1 = auVar1;
  *(undefined4 *)(param_1[1] + 0xc) = 0x3f7ff972;
  *(undefined4 *)(param_1[1] + 8) = 0x3f7ff972;
  *(undefined4 *)(param_1[1] + 4) = 0x3f000000;
  *(undefined4 *)param_1[1] = 0x3f000000;
  *(undefined4 *)param_1[2] = 0;
  _sqc2(auVar3);
  uVar2 = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  *(undefined4 *)(param_1[2] + 8) = 0x3f800000;
  *(undefined4 *)(param_1[2] + 4) = uVar2;
  *(undefined4 *)(param_1[2] + 0xc) = 0x42480000;
  param_1[3][0] = 0;
  return 1;
}


// ==== FUN_001c1cc8 @ 001c1cc8 ====

undefined4 FUN_001c1cc8(void)

{
  return 1;
}


// ==== FUN_001c1cd0 @ 001c1cd0 ====

void FUN_001c1cd0(undefined1 (*param_1) [16])

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
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
  undefined4 uVar24;
  float fStack_d0;
  float fStack_cc;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  auVar10 = _qmtc2(0x3fb504f3);
  iVar1 = *(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x68);
  fVar7 = *(float *)(DAT_0040f0e0 + 0x20140);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
  auVar9 = _vmulbc(auVar8,auVar10);
  auVar8 = _vmulbc(auVar9,auVar9);
  auVar11 = _vmulbc(auVar9,auVar9);
  auVar8 = _sqc2(auVar8);
  auVar12 = _vmulbc(auVar9,auVar9);
  auVar13 = _vmulbc(auVar9,auVar9);
  auVar14 = _vmulbc(auVar9,auVar9);
  auVar10 = _vmulbc(auVar9,auVar9);
  auVar15 = _vmulbc(auVar9,auVar9);
  fStack_c = auVar8._4_4_;
  fVar4 = fStack_c;
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar8 = _sqc2(auVar11);
  fVar3 = 1.0 - fStack_c;
  auVar11 = _vmulbc(auVar9,auVar9);
  fVar5 = 1.0 - auVar10._0_4_;
  auVar10 = _vmulbc(auVar9,auVar9);
  fStack_c = auVar8._4_4_;
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar8 = _sqc2(auVar12);
  auVar9 = _qmfc2(auVar11._0_4_);
  _lqc2(auStack_40);
  _lqc2(auStack_30);
  fStack_8 = auVar8._8_4_;
  lVar2 = 0x6d6123044330fccf;
  auVar8 = _sqc2(auVar13);
  auVar23 = _lqc2(*param_1);
  auVar11 = _qmtc2(fVar3 - fStack_8);
  fStack_4 = auVar8._12_4_;
  auVar8 = _sqc2(auVar14);
  _lqc2(auStack_50);
  fVar6 = fStack_c - fStack_4;
  auVar12 = _vaddbc(in_vf0,auVar11);
  fStack_c = fStack_c + fStack_4;
  fStack_4 = auVar8._12_4_;
  _vmove(auVar12);
  auVar8 = _sqc2(auVar15);
  auVar11 = _qmtc2(auVar10._0_4_ + fStack_4);
  fVar3 = auVar10._0_4_ - fStack_4;
  fStack_4 = auVar8._12_4_;
  auVar11 = _vaddbc(in_vf0,auVar11);
  _vmove(auVar11);
  _sqc2(auVar12);
  auVar8 = _qmtc2(auVar9._0_4_ - fStack_4);
  auVar12 = _vaddbc(in_vf0,auVar8);
  auVar10 = _qmtc2(auVar9._0_4_ + fStack_4);
  auVar8 = _qmtc2(fVar5 - fStack_8);
  auVar9 = _qmtc2(fVar6);
  _vmove(auVar12);
  auVar13 = _vaddbc(in_vf0,auVar10);
  _sqc2(auVar12);
  auVar12 = _vaddbc(in_vf0,auVar8);
  auVar14 = _vaddbc(in_vf0,auVar9);
  _sqc2(auVar11);
  _sqc2(auVar13);
  auVar10 = _qmtc2(fVar3);
  _sqc2(auVar12);
  auVar8 = _qmtc2(fVar5 - fVar4);
  _sqc2(auVar14);
  auVar9 = _qmtc2(fStack_c);
  _vmove(auVar14);
  _vmove(auVar13);
  auVar13 = _vaddbc(in_vf0,auVar8);
  _vmove(auVar12);
  auVar12 = _vaddbc(in_vf0,auVar10);
  auVar9 = _vaddbc(in_vf0,auVar9);
  fVar4 = *(float *)(param_1[2] + 4);
  _sqc2(auVar12);
  auVar8 = _qmtc2(0x41000000);
  _sqc2(auVar9);
  auVar8 = _vmulbc(auVar13,auVar8);
  _sqc2(auVar13);
  _sqc2(auVar12);
  _sqc2(auVar9);
  _sqc2(auVar13);
  _sqc2(auVar12);
  _sqc2(auVar9);
  _sqc2(auVar13);
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar8 = _vadd(auVar11,auVar8);
  *(float *)(param_1[2] + 4) = fVar7;
  auVar8 = _sqc2(auVar8);
  *param_1 = auVar8;
  *(undefined4 *)param_1[2] = 0;
  auVar8 = _sqc2(auVar12);
  auVar10 = _sqc2(auVar9);
  _sqc2(auVar11);
  _sqc2(auVar12);
  _sqc2(auVar9);
  _sqc2(auVar13);
  _sqc2(auVar11);
  auVar9 = _sqc2(auVar13);
  auVar11 = _sqc2(auVar11);
  if ((long *)*DAT_0040f4bc != (long *)0x0) {
    lVar2 = *(long *)*DAT_0040f4bc;
  }
  if (((param_1[3][0] != '\0') && (lVar2 == 0x594c3b3ed729e1c6)) || (lVar2 != 0x594c3b3ed729e1c6)) {
    fVar7 = fVar7 - fVar4;
    auVar8 = _lqc2(auVar8);
    if (0.0 < fVar7) {
      auVar13 = _qmtc2(0x41000000);
      auVar15 = _lqc2(auVar10);
      auVar22 = _vaddbc(in_vf0,in_vf0);
      auVar14 = _lqc2(auVar9);
      _vmove(auVar8);
      _vmove(auVar15);
      auVar17 = _vaddbc(in_vf0,auVar15);
      auVar16 = _vaddbc(in_vf0,auVar8);
      _vmove(auVar14);
      auVar21 = _vaddbc(in_vf0,auVar8);
      _vmove(auVar17);
      _vmove(auVar16);
      auVar18 = _vaddbc(in_vf0,auVar14);
      auVar12 = _lqc2(auVar11);
      auVar19 = _vaddbc(in_vf0,auVar14);
      _vmove(auVar21);
      auVar20 = _vaddbc(in_vf0,auVar15);
      auVar10 = _vmulbc(auVar19,auVar12);
      auVar11 = _vmulbc(auVar18,auVar12);
      auVar9 = _vmulbc(auVar20,auVar12);
      auVar10 = _vadd(auVar11,auVar10);
      auVar10 = _vadd(auVar10,auVar9);
      auVar9 = _vsub(in_vf0,auVar10);
      _vmulabc(auVar18,auVar23);
      _vmaddabc(auVar19,auVar23);
      _vmaddabc(auVar20,auVar23);
      auVar10 = _vmaddbc(auVar9,in_vf0);
      auVar11 = _vsubbc(auVar10,auVar13);
      auVar10 = _qmtc2(1.0 / fVar7);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar10 = _vmulbc(auVar11,auVar10);
      _sqc2(auVar8);
      auVar8 = _vmul(auVar10,auVar10);
      _sqc2(auVar15);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar22,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar24 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar24);
      _sqc2(auVar14);
      auVar8 = _qmfc2(auVar8._0_4_);
      _sqc2(auVar12);
      _sqc2(auVar17);
      _sqc2(auVar16);
      _sqc2(auVar21);
      _sqc2(auVar18);
      fVar4 = (auVar8._0_4_ - *(float *)(param_1[2] + 8)) *
              (1.0 / (*(float *)(param_1[2] + 0xc) - *(float *)(param_1[2] + 8)));
      _sqc2(auVar19);
      _sqc2(auVar20);
      _sqc2(auVar9);
      if (fVar4 < 0.007843138) {
        *(undefined4 *)param_1[2] = 0;
      }
      else {
        if (1.0 < fVar4) {
          fVar4 = 1.0;
        }
        auVar8 = _sqc2(auVar10);
        fStack_a8 = auVar8._8_4_;
        if (fStack_a8 < 0.0) {
          auVar10 = _vsub(in_vf0,auVar10);
        }
        auVar8 = _sqc2(auVar10);
        auVar10 = _vmove(auVar10);
        fStack_a8 = auVar8._8_4_;
        auVar8 = _qmtc2(0.9984 / (float)((int)fStack_a8 * (uint)(0.01 < fStack_a8) |
                                        (uint)(0.01 >= fStack_a8) * 0x3c23d70a));
        auVar10 = _vmulbc(auVar10,auVar8);
        auVar8 = _qmfc2(auVar10._0_4_);
        if (0.0 < auVar8._0_4_) {
          fStack_d0 = 0.0;
        }
        else {
          fStack_d0 = 1.0;
        }
        auVar8 = _sqc2(auVar10);
        fStack_ac = auVar8._4_4_;
        if (0.0 < fStack_ac) {
          fStack_cc = 0.0;
        }
        else {
          fStack_cc = 1.0;
        }
        auVar8 = _qmtc2(0x3f000000);
        auVar9 = _vaddbc(auVar10,auVar8);
        auVar9 = _qmfc2(auVar9._0_4_);
        auVar8 = _vaddbc(auVar10,auVar8);
        auVar8 = _sqc2(auVar8);
        *(float *)param_1[1] = auVar9._0_4_;
        fStack_d0 = auVar9._0_4_ - fStack_d0;
        fStack_ac = auVar8._4_4_;
        *(float *)param_1[2] = fVar4;
        *(float *)(param_1[1] + 4) = fStack_ac;
        fVar4 = 1.0 - ((fVar4 * 0.5 + 0.5) * 0.012) /
                      SQRT(fStack_d0 * fStack_d0 + (fStack_ac - fStack_cc) * (fStack_ac - fStack_cc)
                          );
        *(float *)(param_1[1] + 0xc) = fVar4;
        *(float *)(param_1[1] + 8) = fVar4;
      }
    }
  }
  return;
}


// ==== FUN_001c2210 @ 001c2210 ====

void FUN_001c2210(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  return;
}


// ==== FUN_001c2248 @ 001c2248 ====

undefined4 FUN_001c2248(void)

{
  return 1;
}


// ==== FUN_001c2250 @ 001c2250 ====

undefined4 FUN_001c2250(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[4] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar4 = DAT_004164ac;
  uVar3 = DAT_004164a8;
  uVar2 = DAT_004164a4;
  uVar1 = DAT_004164a0;
  param_1[0xc] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return 1;
}


// ==== FUN_001c22a0 @ 001c22a0 ====

void FUN_001c22a0(float param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pauVar8 = (undefined1 (*) [16])param_2;
  iVar1 = *(int *)(pauVar8[3] + 4);
  if (iVar1 == 1) {
    FUN_001c25b0();
  }
  else if (iVar1 == 2) {
    FUN_001c2688(param_2);
  }
  else {
    if (iVar1 != 0) {
      iVar7 = iVar1 * 4;
      param_1 = *(float *)(pauVar8[1] + 4) + param_1;
      fVar11 = *(float *)(&DAT_003f7420 + iVar7);
      *(float *)(pauVar8[1] + 4) = param_1;
      if (param_1 < fVar11) {
        fVar11 = (float)((int)(param_1 / fVar11) * (uint)(0.0 < param_1 / fVar11));
        iVar2 = *(int *)(pauVar8[3] + 8);
        fVar11 = (float)((int)fVar11 * (uint)(fVar11 < 1.0) | (uint)(fVar11 >= 1.0) * 0x3f800000);
        if (iVar2 == 0) {
          fVar9 = *(float *)(&DAT_003f73f8 + iVar7);
          auVar13 = _lqc2(*(undefined1 (*) [16])(&DAT_004164a0 + iVar1 * 4));
          fVar10 = (float)(&DAT_003f73d0)[iVar1];
          auVar13 = _sqc2(auVar13);
          *pauVar8 = auVar13;
          auVar13 = _qmtc2(fVar9 * fVar11);
          auVar13 = _vmulbc(in_vf0,auVar13);
          auVar13 = _sqc2(auVar13);
          *pauVar8 = auVar13;
          *(float *)pauVar8[1] = fVar10 * fVar11;
        }
        else {
          auVar13 = _lqc2(*(undefined1 (*) [16])(&DAT_004164a0 + iVar2 * 4));
          auVar12 = _lqc2(*(undefined1 (*) [16])(&DAT_004164a0 + iVar1 * 4));
          auVar13 = _qmfc2(auVar13._0_4_);
          auVar12 = _qmfc2(auVar12._0_4_);
          _lqc2(*pauVar8);
          auVar13 = _qmtc2(auVar13._0_4_ + (auVar12._0_4_ - auVar13._0_4_) * fVar11);
          auVar13 = _vaddbc(in_vf0,auVar13);
          auVar13 = _sqc2(auVar13);
          *pauVar8 = auVar13;
          auVar13 = _qmtc2((float)(&DAT_004164a4)[iVar2 * 4] +
                           ((float)(&DAT_004164a4)[iVar1 * 4] - (float)(&DAT_004164a4)[iVar2 * 4]) *
                           fVar11);
          auVar13 = _vaddbc(in_vf0,auVar13);
          auVar13 = _sqc2(auVar13);
          *pauVar8 = auVar13;
          auVar13 = _qmtc2((float)(&DAT_004164a8)[iVar2 * 4] +
                           ((float)(&DAT_004164a8)[iVar1 * 4] - (float)(&DAT_004164a8)[iVar2 * 4]) *
                           fVar11);
          auVar13 = _vaddbc(in_vf0,auVar13);
          auVar13 = _sqc2(auVar13);
          *pauVar8 = auVar13;
          auVar13 = _qmtc2(*(float *)(&DAT_003f73f8 + iVar2 * 4) +
                           (*(float *)(&DAT_003f73f8 + iVar7) -
                           *(float *)(&DAT_003f73f8 + iVar2 * 4)) * fVar11);
          auVar13 = _vmulbc(in_vf0,auVar13);
          auVar13 = _sqc2(auVar13);
          *pauVar8 = auVar13;
          *(float *)pauVar8[1] =
               (float)(&DAT_003f73d0)[iVar2] +
               ((float)(&DAT_003f73d0)[iVar1] - (float)(&DAT_003f73d0)[iVar2]) * fVar11;
        }
        goto LAB_001c258c;
      }
      auVar13 = _lqc2(*(undefined1 (*) [16])(&DAT_004164a0 + iVar1 * 4));
      auVar13 = _sqc2(auVar13);
      *pauVar8 = auVar13;
      if (iVar1 == 9) goto LAB_001c258c;
      if (param_1 - fVar11 < *(float *)(&DAT_003f7448 + iVar7)) {
        fVar11 = (param_1 - fVar11) / *(float *)(&DAT_003f7448 + iVar7);
        fVar11 = (float)((int)fVar11 * (uint)(0.0 < fVar11));
        fVar10 = 1.0 - (float)((int)fVar11 * (uint)(fVar11 < 1.0) |
                              (uint)(fVar11 >= 1.0) * 0x3f800000);
        fVar11 = (float)(&DAT_003f73d0)[iVar1];
        auVar13 = _qmtc2(fVar10 * *(float *)(&DAT_003f73f8 + iVar7));
        auVar13 = _vmulbc(in_vf0,auVar13);
        auVar13 = _sqc2(auVar13);
        *pauVar8 = auVar13;
        *(float *)pauVar8[1] = fVar11 * fVar10;
        goto LAB_001c258c;
      }
      *(undefined4 *)(pauVar8[3] + 4) = 0;
    }
    uVar6 = DAT_004164ac;
    uVar5 = DAT_004164a8;
    uVar4 = DAT_004164a4;
    uVar3 = DAT_004164a0;
    *(undefined4 *)pauVar8[1] = DAT_003f73d0;
    *(undefined4 *)*pauVar8 = uVar3;
    *(undefined4 *)(*pauVar8 + 4) = uVar4;
    *(undefined4 *)(*pauVar8 + 8) = uVar5;
    *(undefined4 *)(*pauVar8 + 0xc) = uVar6;
  }
LAB_001c258c:
  FUN_001b0d80(DAT_0040f4c0 + 0xd290,*(undefined8 *)*pauVar8);
  return;
}


// ==== FUN_001c25b0 @ 001c25b0 ====

void FUN_001c25b0(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = (float)param_2[7];
  param_1 = (float)param_2[5] + param_1;
  param_2[5] = param_1;
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = 0;
  if (param_1 < fVar4) {
    fVar4 = (float)((int)(param_1 / fVar4) * (uint)(0.0 < param_1 / fVar4));
    param_2[4] = (int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000;
  }
  else if (param_1 < fVar4 + (float)param_2[8]) {
    param_2[4] = 0x3f800000;
  }
  else {
    param_1 = param_1 - (fVar4 + (float)param_2[8]);
    if (param_1 < (float)param_2[9]) {
      param_1 = param_1 / (float)param_2[9];
      param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
      fVar4 = 1.0 - (float)((int)param_1 * (uint)(param_1 < 1.0) |
                           (uint)(param_1 >= 1.0) * 0x3f800000);
    }
    else {
      param_2[0xd] = 0;
      uVar3 = DAT_004164ac;
      uVar2 = DAT_004164a8;
      uVar1 = DAT_004164a4;
      fVar4 = DAT_003f73d0;
      *param_2 = DAT_004164a0;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
    }
    param_2[4] = fVar4;
  }
  return;
}


// ==== FUN_001c2688 @ 001c2688 ====

void FUN_001c2688(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = (float)param_2[10];
  param_1 = (float)param_2[5] + param_1;
  param_2[5] = param_1;
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = 0;
  if (param_1 < fVar4) {
    fVar4 = (float)((int)(param_1 / fVar4) * (uint)(0.0 < param_1 / fVar4));
    param_2[4] = (int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000;
  }
  else if (param_1 < fVar4 + (float)param_2[0xb]) {
    param_2[4] = 0x3f800000;
  }
  else {
    param_1 = param_1 - (fVar4 + (float)param_2[0xb]);
    if (param_1 < (float)param_2[0xc]) {
      param_1 = param_1 / (float)param_2[0xc];
      param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
      fVar4 = 1.0 - (float)((int)param_1 * (uint)(param_1 < 1.0) |
                           (uint)(param_1 >= 1.0) * 0x3f800000);
    }
    else {
      param_2[0xd] = 0;
      uVar3 = DAT_004164ac;
      uVar2 = DAT_004164a8;
      uVar1 = DAT_004164a4;
      fVar4 = DAT_003f73d0;
      *param_2 = DAT_004164a0;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
    }
    param_2[4] = fVar4;
  }
  return;
}


// ==== FUN_001c2760 @ 001c2760 ====

void FUN_001c2760(undefined4 param_1,int param_2,int param_3)

{
  if (*(int *)(param_2 + 0x34) <= param_3) {
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x34);
    *(int *)(param_2 + 0x34) = param_3;
    *(undefined4 *)(param_2 + 0x18) = param_1;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  return;
}


// ==== FUN_001c2798 @ 001c2798 ====

void FUN_001c2798(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_4 + 0x34) == 0) {
    *(undefined4 *)(param_4 + 0x24) = param_3;
    *(undefined4 *)(param_4 + 0x34) = 1;
    *(undefined4 *)(param_4 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_4 + 0x1c) = param_1;
    *(undefined4 *)(param_4 + 0x20) = param_2;
    *(undefined4 *)(param_4 + 0x38) = 0;
    *(undefined4 *)(param_4 + 0x14) = 0;
  }
  return;
}


// ==== FUN_001c27d0 @ 001c27d0 ====

void FUN_001c27d0(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x34) == 1) {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x1c);
    if (fVar2 < fVar1) {
      fVar2 = fVar2 + *(float *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x14) =
           (int)fVar1 * (uint)(fVar2 < fVar1) | (int)fVar2 * (uint)(fVar2 >= fVar1);
      return;
    }
    *(float *)(param_1 + 0x14) =
         (fVar2 + *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x24)) -
         (fVar1 / fVar2) * *(float *)(param_1 + 0x24);
  }
  return;
}


// ==== FUN_001c2838 @ 001c2838 ====

void FUN_001c2838(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_4 + 0x34) != 9) {
    *(undefined4 *)(param_4 + 0x30) = param_3;
    *(int *)(param_4 + 0x38) = *(int *)(param_4 + 0x34);
    *(undefined4 *)(param_4 + 0x34) = 2;
    *(undefined4 *)(param_4 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_4 + 0x28) = param_1;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x14) = 0;
  }
  return;
}


// ==== FUN_001c2878 @ 001c2878 ====

void FUN_001c2878(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[0xd] = 0;
  uVar4 = DAT_004164ac;
  uVar3 = DAT_004164a8;
  uVar2 = DAT_004164a4;
  uVar1 = DAT_003f73d0;
  *param_1 = DAT_004164a0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  return;
}


// ==== FUN_001c28a0 @ 001c28a0 ====

bool FUN_001c28a0(int param_1)

{
  return *(int *)(param_1 + 0x34) == 1;
}


// ==== FUN_001c28b0 @ 001c28b0 ====

void FUN_001c28b0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_001c29c0();
  iVar1 = *(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x58);
  iVar2 = *(int *)(iVar1 + 0x60);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = *param_2;
  uVar4 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10) = param_2[1];
  FUN_001c88c8(DAT_0040f4c0 + 0xcfd0,iVar1);
  FUN_001af768(DAT_0040f4c0 + 0x14,4);
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc) = uVar3;
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10) = uVar4;
  FUN_001c88c8(DAT_0040f4c0 + 0xcfd0,iVar1);
  FUN_001c2a18(param_1);
  return;
}


// ==== FUN_001c2990 @ 001c2990 ====

void FUN_001c2990(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_001c29a0 @ 001c29a0 ====

undefined4 FUN_001c29a0(void)

{
  return 1;
}


// ==== FUN_001c29a8 @ 001c29a8 ====

undefined4 FUN_001c29a8(void)

{
  return 1;
}


// ==== FUN_001c29c0 @ 001c29c0 ====

void FUN_001c29c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_0040f4c0 + 0xd540);
  param_1[1] = param_2;
  *param_1 = uVar1;
  FUN_001cfa58();
  FUN_0026aa68(1);
  FUN_0026aa60(0);
  FUN_0026a998(0);
  FUN_0026a840(0);
  return;
}


// ==== FUN_001c2a18 @ 001c2a18 ====

void FUN_001c2a18(undefined4 *param_1)

{
  FUN_001cfac8();
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_001c2a48 @ 001c2a48 ====

void FUN_001c2a48(undefined4 *param_1)

{
  *param_1 = &DAT_70002000;
  param_1[1] = &DAT_70002800;
  param_1[2] = 0;
  return;
}


// ==== FUN_001c2a68 @ 001c2a68 ====

undefined4 FUN_001c2a68(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 8) + 1) % 2;
  *(int *)(param_1 + 8) = iVar1;
  return *(undefined4 *)(param_1 + iVar1 * 4);
}


// ==== FUN_001c2a98 @ 001c2a98 ====

undefined4 FUN_001c2a98(int param_1)

{
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 4);
}


// ==== FUN_001c2ab0 @ 001c2ab0 ====

void FUN_001c2ab0(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  *param_1 = iVar5;
  FUN_001d5028(param_1 + 4);
  param_1[0x11c] = 0x3e99999a;
  param_1[4] = 0x3c449ba6;
  param_1[5] = 0;
  param_1[6] = 0x3c03126f;
  param_1[7] = 0x3c48cd64;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && (0 < *(int *)(iVar5 + 4))) {
    iVar4 = 0;
    iVar1 = FUN_00107d20(*(int *)(iVar5 + 4) << 2);
    param_1[1] = iVar1;
    if (0 < *(int *)(iVar5 + 4)) {
      iVar1 = param_1[1];
      while( true ) {
        iVar2 = iVar4 * 4;
        iVar3 = iVar4 * 0x20;
        iVar4 = iVar4 + 1;
        FUN_001c2ea8(iVar1 + iVar2,*(int *)(iVar5 + 8) + iVar3);
        if (*(int *)(iVar5 + 4) <= iVar4) break;
        iVar1 = param_1[1];
      }
    }
  }
  return;
}


// ==== FUN_001c2bc0 @ 001c2bc0 ====

undefined4 FUN_001c2bc0(int param_1)

{
  FUN_001d5048(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0x3c449ba6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3c03126f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3c48cd64;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}


// ==== FUN_001c2c50 @ 001c2c50 ====

void FUN_001c2c50(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  fVar6 = *(float *)(DAT_0040f4d0 + 0x20) * (float)param_1[0x11c] * 360.0;
  fVar6 = (fVar6 - (float)(int)(fVar6 / 360.0) * 360.0) * 0.017453292;
  iVar4 = FUN_0029da28(fVar6);
  iVar5 = FUN_0029dc18(fVar6);
  param_1[8] = iVar4;
  param_1[9] = 0;
  param_1[10] = iVar5;
  param_1[0xb] = 0;
  if (*param_1 != 0) {
    piVar1 = param_1 + 4;
    iVar4 = 0;
    iVar5 = DAT_0040f4c0 + 0xcfd0;
    DAT_003bd1d0 = piVar1;
    if (0 < *(int *)(*param_1 + 4)) {
      puVar2 = (undefined4 *)*param_1;
      while( true ) {
        iVar3 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        FUN_001c2eb0(*puVar2,param_1[1] + iVar3,iVar5,piVar1);
        if (*(int *)(*param_1 + 4) <= iVar4) break;
        puVar2 = (undefined4 *)*param_1;
      }
    }
    FUN_001d5068(piVar1);
  }
  return;
}


// ==== FUN_001c2d90 @ 001c2d90 ====

void FUN_001c2d90(int param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  if (param_2 != 0) {
    iVar2 = (int)param_2;
    puVar1 = *(undefined1 **)(iVar2 + 0x14);
    *(undefined1 **)(param_1 + 0x43c) = puVar1;
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(iVar2 + 0x10);
    *puVar1 = 0xe;
    *(undefined1 *)(*(int *)(param_1 + 0x43c) + 1) = 0x32;
    **(undefined1 **)(param_1 + 0x440) = 0xe;
    *(int *)(param_1 + 0x438) = iVar2 + 0x20;
    iVar2 = *(int *)(param_1 + 0x43c);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(iVar2 + 0x10);
    *(uint *)(param_1 + 0x444) = (uint)*(ushort *)(iVar2 + 0xc);
  }
  return;
}


// ==== FUN_001c2e30 @ 001c2e30 ====

undefined4 FUN_001c2e30(int param_1)

{
  *(undefined4 *)(param_1 + 0x428) = 0;
  return 1;
}


// ==== FUN_001c2e68 @ 001c2e68 ====

void FUN_001c2e68(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_3 + 0x428) < 0x3f) {
    puVar1 = (undefined4 *)(param_3 + *(int *)(param_3 + 0x428) * 0x10 + 0x28);
    *(undefined1 *)((int)puVar1 + 0xd) = param_6;
    *puVar1 = param_4;
    puVar1[1] = param_1;
    *(undefined1 *)(puVar1 + 3) = param_5;
    puVar1[2] = param_2;
    *(int *)(param_3 + 0x428) = *(int *)(param_3 + 0x428) + 1;
  }
  return;
}


// ==== FUN_001c2ea8 @ 001c2ea8 ====

void FUN_001c2ea8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_001c2eb0 @ 001c2eb0 ====

void FUN_001c2eb0(undefined4 param_1,int *param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  long lVar3;
  undefined8 in_v1_udw;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  auVar6 = _qmtc2(param_1);
  auVar5 = _lqc2(*(undefined1 (*) [16])*param_2);
  _vadd(in_vf0,auVar5);
  auVar5 = _vsubbc(in_vf0,in_vf0);
  auVar5 = _vaddbc(auVar5,auVar6);
  auVar5 = _qmfc2(auVar5._0_4_);
  lVar3 = FUN_0026f0b0(auVar5._0_8_);
  if (lVar3 != 0) {
    pauVar1 = (undefined1 (*) [16])*param_2;
    auVar5 = _lqc2(*pauVar1);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4bc + 2000));
    auVar5 = _vsub(auVar5,auVar6);
    auVar5 = _vmul(auVar5,auVar5);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar8 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar8);
    auVar5 = _qmfc2(auVar5._0_4_);
    fVar4 = ((auVar5._0_4_ - *(float *)(DAT_003bd1d0 + 0x430)) / *(float *)(DAT_003bd1d0 + 0x434)) *
            *(float *)(DAT_0040f4bc + 0x1660);
    fVar4 = (float)((int)fVar4 * (uint)(0.0 < fVar4));
    fVar4 = 1.0 - (float)((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
    if (fVar4 < 1.0) {
      iVar2 = *(int *)(pauVar1[1] + 4);
      auVar7._8_8_ = auVar5._8_8_;
      fVar4 = (float)((int)((float)iVar2 * 0.25) + iVar2) * fVar4;
      auVar7._0_8_ = (long)(int)fVar4;
      auVar6._8_8_ = in_v1_udw;
      auVar6._0_8_ = (long)iVar2;
      auVar6 = _pminw(auVar7,auVar6);
      auVar6 = _pextlw(0,auVar6._0_8_);
      lVar3 = auVar6._0_8_;
    }
    else {
      lVar3 = (long)*(int *)(pauVar1[1] + 4);
      fVar4 = (float)*(int *)(pauVar1[1] + 4) * 1.25;
    }
    if (0 < lVar3) {
      FUN_001c2e68(auVar5._0_4_,fVar4);
    }
  }
  return;
}


// ==== FUN_001c3020 @ 001c3020 ====

/* WARNING: Removing unreachable block (ram,0x001c3104) */
/* WARNING: Removing unreachable block (ram,0x001c30a4) */
/* WARNING: Removing unreachable block (ram,0x001c3188) */

void FUN_001c3020(float param_1,int *param_2,undefined1 (*param_3) [16],int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar3 = *(uint **)(*param_2 + 0x10);
  fVar5 = DAT_003bd1d8 / 255.0;
  if (0 < param_4) {
    auVar8 = _qmtc2(param_1);
    do {
      uVar1 = *puVar3;
      uVar2 = (uVar1 & 0xff00) >> 8;
      if ((int)uVar2 < 0) {
        fVar4 = (float)(uVar2 & 1 | (uVar1 & 0xff00) >> 9);
        fVar4 = fVar4 + fVar4;
      }
      else {
        fVar4 = (float)uVar2;
      }
      auVar7 = _qmtc2(param_1 / 127.0);
      auVar6._4_4_ = fVar4;
      auVar6._0_4_ = (float)(uVar1 & 0xff);
      auVar6._8_4_ = (float)((uVar1 & 0xff0000) >> 0x10);
      auVar6._12_4_ = 0;
      auVar6 = _lqc2(auVar6);
      auVar6 = _vmove(auVar6);
      auVar7 = _vmulbc(auVar6,auVar7);
      auVar6 = _sqc2(auVar7);
      *param_3 = auVar6;
      auVar6 = _vsub(auVar7,auVar8);
      auVar6 = _sqc2(auVar6);
      *param_3 = auVar6;
      _lqc2(*param_3);
      puVar3 = puVar3 + 1;
      param_4 = param_4 + -1;
      auVar6 = _qmtc2((float)(uVar1 >> 0x18) * fVar5 + DAT_003bd1d4);
      auVar6 = _vmulbc(in_vf0,auVar6);
      auVar6 = _sqc2(auVar6);
      *param_3 = auVar6;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}


// ==== FUN_001c31e0 @ 001c31e0 ====

undefined8 FUN_001c31e0(undefined4 *param_1)

{
  return *(undefined8 *)*param_1;
}


// ==== FUN_001c31f8 @ 001c31f8 ====

void FUN_001c31f8(undefined1 (*param_1) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = _vadd(in_vf0,in_vf0);
  param_1[2][0] = 1;
  _sqc2(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  *(undefined4 *)param_1[1] = 0;
  *(undefined4 *)(param_1[1] + 4) = 0;
  *(undefined4 *)(param_1[1] + 8) = 0;
  return;
}


// ==== FUN_001c3228 @ 001c3228 ====

void FUN_001c3228(undefined4 param_1,undefined8 param_2,int param_3)

{
  undefined4 auStack_30 [4];
  
  *(undefined4 *)((int)param_2 + 0x10) = param_1;
  FUN_001c3dc0(param_2,auStack_30,(uint)auStack_30 | 4);
  *(undefined4 *)(param_3 + 0x84) = auStack_30[0];
  FUN_002a9240(auStack_30[0],*(undefined4 *)(param_3 + 0x58));
  return;
}


// ==== FUN_001c3278 @ 001c3278 ====

void FUN_001c3278(float param_1,float param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  if (((float)param_3[5] == param_1) && ((float)param_3[6] == param_2)) {
    param_3[6] = param_2;
  }
  else {
    *(undefined1 *)(param_3 + 8) = 1;
    param_3[6] = param_2;
  }
  *param_3 = (int)param_4;
  param_3[1] = (int)((ulong)param_4 >> 0x20);
  param_3[2] = in_a1_udw;
  param_3[3] = in_register_0000005c;
  param_3[5] = param_1;
  return;
}


// ==== FUN_001c32b8 @ 001c32b8 ====

void FUN_001c32b8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  iVar6 = *(int *)(DAT_0040f4c0 + 0xd540);
  uVar3 = (uint)*(undefined8 *)(DAT_0040f4c0 + 0xd5c0);
  uStack_ac = (float)((ulong)*(undefined8 *)(iVar6 + 0x40) >> 0x20);
  uVar4 = uVar3 >> 0x10 & 0x3f;
  uStack_b0 = (float)*(undefined8 *)(iVar6 + 0x40);
  iVar8 = (int)uStack_ac;
  iVar1 = *(int *)(iVar6 + 0x7c);
  iVar7 = (int)uStack_b0;
  uVar2 = *(undefined4 *)(iVar6 + 0x78);
  iVar6 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar6 = iVar8;
  }
  iVar5 = uVar4 * (iVar6 >> 5);
  iVar8 = iVar8 + (iVar6 >> 5) * -0x20;
  iVar6 = ((uint)*(undefined8 *)(DAT_0040f4c0 + 0xd5c8) & 0x1ff) + iVar5;
  iVar5 = (uVar3 & 0x1ff) + iVar5;
  FUN_001c3d50();
  if (iVar8 + iVar1 < 0x200) {
    FUN_001c3470(param_1,iVar5,uVar4,iVar6,iVar7,iVar8,uVar2,iVar1);
  }
  else {
    FUN_001c3470(param_1,iVar5,uVar4,iVar6,iVar7,iVar8,uVar2,0x1e0 - iVar8);
    FUN_001c3470(param_1,iVar5 + uVar4 * 0xf,uVar4,iVar6 + uVar4 * 0xf,iVar7,0,uVar2,
                 iVar8 + iVar1 + -0x1e0);
  }
  FUN_001c3740(param_1);
  FUN_001c3a28(param_1,*(undefined8 *)param_1,iVar7,iVar8,uVar2,iVar1,iVar5,uVar4);
  FUN_001c5f48(DAT_0040f4c0);
  return;
}


// ==== FUN_001c3470 @ 001c3470 ====

void FUN_001c3470(undefined8 param_1,uint param_2,ulong param_3,int param_4,uint param_5,int param_6
                 ,int param_7,int param_8)

{
  undefined1 auVar1 [16];
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
  undefined8 extraout_v0_udw;
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
  undefined8 in_v1_udw;
  ulong uVar28;
  ulong in_a1_udw;
  undefined8 in_t0_udw;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  
  uVar31 = param_5 & 0xfffffff0;
  uVar33 = (param_5 + param_7 + 0xf & 0xfffffff0) - uVar31 >> 4;
  FUN_002b3d88(0xffffffff80000000,uVar33 * 2 + 0xb);
  auVar14._8_8_ = extraout_v0_udw;
  auVar14._0_8_ = 0xe;
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = 0x10ab400000000009;
  auVar15 = _pcpyld(auVar14,auVar1);
  *DAT_0040e5f0 = auVar15._0_4_;
  DAT_0040e5f0[1] = auVar15._4_4_;
  DAT_0040e5f0[2] = auVar15._8_4_;
  DAT_0040e5f0[3] = auVar15._12_4_;
  auVar16._8_8_ = auVar15._8_8_;
  auVar16._0_8_ = 0x3f;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = in_a1_udw;
  auVar15 = _pcpyld(auVar16,auVar12 << 0x40);
  DAT_0040e5f0[4] = auVar15._0_4_;
  DAT_0040e5f0[5] = auVar15._4_4_;
  DAT_0040e5f0[6] = auVar15._8_4_;
  DAT_0040e5f0[7] = auVar15._12_4_;
  auVar15._8_8_ = in_v1_udw;
  auVar15._0_8_ = 0x4c;
  auVar2._8_8_ = in_t0_udw;
  auVar2._0_8_ = (ulong)param_2 | (param_3 & 0xffffffff) << 0x10 | 0x3fff02000000;
  auVar15 = _pcpyld(auVar15,auVar2);
  DAT_0040e5f0[8] = auVar15._0_4_;
  DAT_0040e5f0[9] = auVar15._4_4_;
  DAT_0040e5f0[10] = auVar15._8_4_;
  DAT_0040e5f0[0xb] = auVar15._12_4_;
  auVar17._8_8_ = auVar15._8_8_;
  auVar17._0_8_ = 6;
  auVar3._8_8_ = in_t0_udw;
  auVar3._0_8_ = (ulong)(uint)(param_4 << 5) | (param_3 & 0xffffffff) << 0xe | 0xeab200000;
  auVar15 = _pcpyld(auVar17,auVar3);
  DAT_0040e5f0[0xc] = auVar15._0_4_;
  DAT_0040e5f0[0xd] = auVar15._4_4_;
  DAT_0040e5f0[0xe] = auVar15._8_4_;
  DAT_0040e5f0[0xf] = auVar15._12_4_;
  auVar18._8_8_ = auVar15._8_8_;
  auVar18._0_8_ = 0x3b;
  auVar4._8_8_ = in_t0_udw;
  auVar4._0_8_ = 0x8000000000;
  auVar15 = _pcpyld(auVar18,auVar4);
  DAT_0040e5f0[0x10] = auVar15._0_4_;
  DAT_0040e5f0[0x11] = auVar15._4_4_;
  DAT_0040e5f0[0x12] = auVar15._8_4_;
  DAT_0040e5f0[0x13] = auVar15._12_4_;
  auVar19._8_8_ = auVar15._8_8_;
  auVar19._0_8_ = 0x47;
  auVar5._8_8_ = in_t0_udw;
  auVar5._0_8_ = 0x31001;
  auVar15 = _pcpyld(auVar19,auVar5);
  DAT_0040e5f0[0x14] = auVar15._0_4_;
  DAT_0040e5f0[0x15] = auVar15._4_4_;
  DAT_0040e5f0[0x16] = auVar15._8_4_;
  DAT_0040e5f0[0x17] = auVar15._12_4_;
  auVar20._8_8_ = auVar15._8_8_;
  auVar20._0_8_ = 0x45;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = in_a1_udw;
  auVar15 = _pcpyld(auVar20,auVar13 << 0x40);
  DAT_0040e5f0[0x18] = auVar15._0_4_;
  DAT_0040e5f0[0x19] = auVar15._4_4_;
  DAT_0040e5f0[0x1a] = auVar15._8_4_;
  DAT_0040e5f0[0x1b] = auVar15._12_4_;
  auVar21._8_8_ = auVar15._8_8_;
  auVar21._0_8_ = 0x40;
  auVar6._8_8_ = in_t0_udw;
  auVar6._0_8_ = (ulong)param_5 | (ulong)((param_5 + param_7) - 1) << 0x10 |
                 (long)(param_6 << 1) << 0x20 | (long)((param_6 + param_8) * 2 + -1) << 0x30;
  auVar15 = _pcpyld(auVar21,auVar6);
  DAT_0040e5f0[0x1c] = auVar15._0_4_;
  DAT_0040e5f0[0x1d] = auVar15._4_4_;
  DAT_0040e5f0[0x1e] = auVar15._8_4_;
  DAT_0040e5f0[0x1f] = auVar15._12_4_;
  auVar22._8_8_ = auVar15._8_8_;
  auVar22._0_8_ = 0x42;
  auVar7._8_8_ = in_t0_udw;
  auVar7._0_8_ = 0x2a;
  auVar15 = _pcpyld(auVar22,auVar7);
  DAT_0040e5f0[0x20] = auVar15._0_4_;
  DAT_0040e5f0[0x21] = auVar15._4_4_;
  DAT_0040e5f0[0x22] = auVar15._8_4_;
  DAT_0040e5f0[0x23] = auVar15._12_4_;
  auVar23._8_8_ = auVar15._8_8_;
  auVar23._0_8_ = 1;
  auVar8._8_8_ = in_t0_udw;
  auVar8._0_8_ = 0x3f80000080ffffff;
  auVar15 = _pcpyld(auVar23,auVar8);
  DAT_0040e5f0[0x24] = auVar15._0_4_;
  DAT_0040e5f0[0x25] = auVar15._4_4_;
  DAT_0040e5f0[0x26] = auVar15._8_4_;
  DAT_0040e5f0[0x27] = auVar15._12_4_;
  auVar24._8_8_ = auVar15._8_8_;
  auVar24._0_8_ = 0x5353;
  auVar9._4_4_ = 0x44000000;
  auVar9._0_4_ = uVar33 | 0x8000;
  auVar9._8_8_ = in_t0_udw;
  auVar15 = _pcpyld(auVar24,auVar9);
  DAT_0040e5f0[0x28] = auVar15._0_4_;
  DAT_0040e5f0[0x29] = auVar15._4_4_;
  DAT_0040e5f0[0x2a] = auVar15._8_4_;
  DAT_0040e5f0[0x2b] = auVar15._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x2c;
  uVar30 = (param_6 + param_8) * 0x20;
  auVar27._8_8_ = auVar15._8_8_;
  uVar28 = (ulong)(int)(uVar31 * 0x10 + 8);
  uVar32 = (ulong)(int)((uVar31 + 8) * 0x10);
  auVar27._0_8_ = CONCAT44(0,param_6 * 0x20 + 8);
  if (uVar33 != 0) {
    uVar29 = auVar27._0_8_ << 0x10;
    do {
      auVar25._8_8_ = auVar27._8_8_;
      auVar25._0_8_ = uVar32 | (ulong)(uint)(param_6 * 0x20) << 0x10;
      auVar10._8_8_ = in_t0_udw;
      auVar10._0_8_ = uVar28 | uVar29;
      auVar15 = _pcpyld(auVar25,auVar10);
      *DAT_0040e5f0 = auVar15._0_4_;
      DAT_0040e5f0[1] = auVar15._4_4_;
      DAT_0040e5f0[2] = auVar15._8_4_;
      DAT_0040e5f0[3] = auVar15._12_4_;
      auVar26._8_8_ = auVar15._8_8_;
      auVar26._0_8_ = uVar32 + 0x80 | (ulong)uVar30 << 0x10;
      auVar11._8_8_ = in_t0_udw;
      auVar11._0_8_ = uVar28 + 0x80 | (ulong)(uVar30 + 8) << 0x10;
      auVar27 = _pcpyld(auVar26,auVar11);
      DAT_0040e5f0[4] = auVar27._0_4_;
      DAT_0040e5f0[5] = auVar27._4_4_;
      DAT_0040e5f0[6] = auVar27._8_4_;
      DAT_0040e5f0[7] = auVar27._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 8;
      uVar32 = uVar32 + 0x100;
      uVar33 = uVar33 - 1;
      uVar28 = uVar28 + 0x100;
    } while (uVar33 != 0);
  }
  return;
}


// ==== FUN_001c3740 @ 001c3740 ====

void FUN_001c3740(int param_1)

{
  undefined1 auVar1 [16];
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
  undefined8 extraout_v0_udw;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_v1_udw;
  undefined8 in_a1_udw;
  ulong uVar17;
  uint uVar18;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  uint uVar19;
  uint uVar20;
  float fVar21;
  int iVar22;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar18 = *(int *)(DAT_0040f4c0 + 0xd5e4) + 0x17c;
    uVar20 = (uVar18 & 1) * 0x80 + (uVar18 & 4) * 0x40 + (uVar18 & 0x10) * 0x20;
    uVar19 = (uVar18 & 2) * 0x40 + (uVar18 & 8) * 0x20;
    FUN_002b3d88(0xffffffff80000000,0x106);
    auVar12._8_8_ = extraout_v0_udw;
    auVar12._0_8_ = 0xe;
    auVar1._8_8_ = in_a1_udw;
    auVar1._0_8_ = 0x1000400000000004;
    auVar13 = _pcpyld(auVar12,auVar1);
    *DAT_0040e5f0 = auVar13._0_4_;
    DAT_0040e5f0[1] = auVar13._4_4_;
    DAT_0040e5f0[2] = auVar13._8_4_;
    DAT_0040e5f0[3] = auVar13._12_4_;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = uVar18 >> 5 | 0x10000;
    auVar13._8_8_ = in_v1_udw;
    auVar13._0_8_ = 0x4c;
    auVar2._8_8_ = in_a1_udw;
    auVar13 = _pcpyld(auVar13,auVar2);
    DAT_0040e5f0[4] = auVar13._0_4_;
    DAT_0040e5f0[5] = auVar13._4_4_;
    DAT_0040e5f0[6] = auVar13._8_4_;
    DAT_0040e5f0[7] = auVar13._12_4_;
    auVar14._8_8_ = auVar13._8_8_;
    auVar14._0_8_ = 0x40;
    auVar3._8_8_ = in_a1_udw;
    auVar3._0_8_ = CONCAT44(uVar19 >> 4,uVar20 >> 4 | ((uVar20 >> 4) + 0xf) * 0x10000) |
                   (long)(int)((uVar19 >> 4) + 0xf) << 0x30;
    auVar13 = _pcpyld(auVar14,auVar3);
    DAT_0040e5f0[8] = auVar13._0_4_;
    DAT_0040e5f0[9] = auVar13._4_4_;
    DAT_0040e5f0[10] = auVar13._8_4_;
    DAT_0040e5f0[0xb] = auVar13._12_4_;
    auVar15._8_8_ = auVar13._8_8_;
    auVar15._0_8_ = 0x47;
    auVar4._8_8_ = in_a1_udw;
    auVar4._0_8_ = 0x31001;
    auVar13 = _pcpyld(auVar15,auVar4);
    DAT_0040e5f0[0xc] = auVar13._0_4_;
    DAT_0040e5f0[0xd] = auVar13._4_4_;
    DAT_0040e5f0[0xe] = auVar13._8_4_;
    DAT_0040e5f0[0xf] = auVar13._12_4_;
    auVar16._8_8_ = auVar13._8_8_;
    auVar16._0_8_ = 0x42;
    auVar5._8_8_ = in_a1_udw;
    auVar5._0_8_ = 0x2a;
    auVar13 = _pcpyld(auVar16,auVar5);
    DAT_0040e5f0[0x10] = auVar13._0_4_;
    DAT_0040e5f0[0x11] = auVar13._4_4_;
    DAT_0040e5f0[0x12] = auVar13._8_4_;
    DAT_0040e5f0[0x13] = auVar13._12_4_;
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = 0x2400000000008100;
    auVar9._8_4_ = in_s0_udw;
    auVar9._0_8_ = 0x51;
    auVar9._12_4_ = in_register_0000010c;
    auVar13 = _pcpyld(auVar9,auVar6);
    DAT_0040e5f0[0x14] = auVar13._0_4_;
    DAT_0040e5f0[0x15] = auVar13._4_4_;
    DAT_0040e5f0[0x16] = auVar13._8_4_;
    DAT_0040e5f0[0x17] = auVar13._12_4_;
    iVar22 = (int)(*(float *)(param_1 + 0x18) * 255.0 + 0.5);
    auVar7._8_8_ = in_a1_udw;
    auVar7._0_8_ = CONCAT44((int)(int3)((uint)iVar22 >> 8),iVar22 << 0x18) | 0xffffff;
    auVar10._4_4_ = 0;
    auVar10._0_4_ = uVar20 | uVar19 * 0x10000;
    auVar10._8_4_ = in_s0_udw;
    auVar10._12_4_ = in_register_0000010c;
    auVar13 = _pcpyld(auVar10,auVar7);
    DAT_0040e5f0[0x18] = auVar13._0_4_;
    DAT_0040e5f0[0x19] = auVar13._4_4_;
    DAT_0040e5f0[0x1a] = auVar13._8_4_;
    DAT_0040e5f0[0x1b] = auVar13._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
    uVar17 = 1;
    do {
      uVar18 = (uint)uVar17;
      if ((long)uVar17 < 0xc) {
        fVar21 = *(float *)(param_1 + 0x14);
      }
      else {
        fVar21 = (1.4 / ((float)(int)(uVar18 - 0xc) / 243.0 + 0.4) - 1.0) / 2.5;
        if (fVar21 < 0.75) {
          fVar21 = fVar21 * fVar21 * 1.3333334;
        }
        else {
          fVar21 = 1.0 - (1.0 - fVar21) * (1.0 - fVar21) * 4.0;
        }
        fVar21 = fVar21 * *(float *)(param_1 + 0x14);
      }
      iVar22 = (int)(fVar21 * 255.0 + 0.5);
      auVar8._8_8_ = in_a1_udw;
      auVar8._0_8_ = CONCAT44((int)(int3)((uint)iVar22 >> 8),iVar22 << 0x18) | 0xffffff;
      auVar11._4_4_ = 0;
      auVar11._0_4_ =
           uVar20 | (uVar18 & 7) << 4 | (uVar18 & 0x10) << 3 |
           (uint)(((long)(int)(uVar19 | (uVar18 & 8) << 1) | uVar17 & 0xe0) << 0x10);
      auVar11._8_4_ = in_s0_udw;
      auVar11._12_4_ = in_register_0000010c;
      auVar13 = _pcpyld(auVar11,auVar8);
      *DAT_0040e5f0 = auVar13._0_4_;
      DAT_0040e5f0[1] = auVar13._4_4_;
      DAT_0040e5f0[2] = auVar13._8_4_;
      DAT_0040e5f0[3] = auVar13._12_4_;
      uVar17 = (ulong)(int)(uVar18 + 1);
      DAT_0040e5f0 = DAT_0040e5f0 + 4;
    } while ((long)uVar17 < 0x100);
  }
  return;
}


// ==== FUN_001c3a28 @ 001c3a28 ====

void FUN_001c3a28(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 int param_6,uint param_7,ulong param_8,uint param_9)

{
  undefined1 auVar1 [16];
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
  undefined8 extraout_v0_udw;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fStack_ac;
  float fStack_a8;
  
  auVar27 = _qmtc2(param_2);
  param_5 = param_3 + param_5;
  iVar24 = (param_5 + 0x1fU >> 5) - (param_3 >> 5);
  auVar27 = _sqc2(auVar27);
  FUN_002b3d88(0x80000000,iVar24 * 2 + 10);
  auVar17._8_8_ = extraout_v0_udw;
  auVar17._0_8_ = 0xe;
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = 0x10ab400000000008;
  auVar18 = _pcpyld(auVar17,auVar5);
  *DAT_0040e5f0 = auVar18._0_4_;
  DAT_0040e5f0[1] = auVar18._4_4_;
  DAT_0040e5f0[2] = auVar18._8_4_;
  DAT_0040e5f0[3] = auVar18._12_4_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar18._8_8_;
  auVar18._8_8_ = in_v1_udw;
  auVar18._0_8_ = 0x3f;
  auVar18 = _pcpyld(auVar18,auVar16 << 0x40);
  DAT_0040e5f0[4] = auVar18._0_4_;
  DAT_0040e5f0[5] = auVar18._4_4_;
  DAT_0040e5f0[6] = auVar18._8_4_;
  DAT_0040e5f0[7] = auVar18._12_4_;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x4c;
  auVar6._8_8_ = in_a2_udw;
  auVar6._0_8_ = (ulong)param_7 |
                 (ulong)CONCAT24((short)(param_8 >> 0x10),(int)((param_8 & 0xffffffff) << 0x10)) |
                 0xff00000000000000;
  auVar18 = _pcpyld(auVar1,auVar6);
  DAT_0040e5f0[8] = auVar18._0_4_;
  DAT_0040e5f0[9] = auVar18._4_4_;
  DAT_0040e5f0[10] = auVar18._8_4_;
  DAT_0040e5f0[0xb] = auVar18._12_4_;
  auVar25._8_8_ = in_v1_udw;
  auVar25._0_8_ = 0x4e;
  auVar7._8_8_ = in_a2_udw;
  auVar7._0_8_ = (ulong)param_9 | 0x1000000;
  auVar18 = _pcpyld(auVar25,auVar7);
  DAT_0040e5f0[0xc] = auVar18._0_4_;
  DAT_0040e5f0[0xd] = auVar18._4_4_;
  DAT_0040e5f0[0xe] = auVar18._8_4_;
  DAT_0040e5f0[0xf] = auVar18._12_4_;
  auVar26._8_8_ = in_v1_udw;
  auVar26._0_8_ = 0x40;
  auVar8._8_8_ = in_a2_udw;
  auVar8._0_8_ = (ulong)param_3 |
                 (ulong)CONCAT24((short)(param_5 - 1U >> 0x10),
                                 (int)(((ulong)(param_5 - 1U) << 0x20) >> 0x10)) |
                 (ulong)param_4 << 0x20 | (long)(int)(param_4 + param_6 + -1) << 0x30;
  auVar18 = _pcpyld(auVar26,auVar8);
  DAT_0040e5f0[0x10] = auVar18._0_4_;
  DAT_0040e5f0[0x11] = auVar18._4_4_;
  DAT_0040e5f0[0x12] = auVar18._8_4_;
  DAT_0040e5f0[0x13] = auVar18._12_4_;
  auVar28._8_8_ = in_v1_udw;
  auVar28._0_8_ = 6;
  auVar9._8_8_ = in_a2_udw;
  auVar9._0_8_ = (ulong)(param_7 << 5) | (param_8 & 0xffffffff) << 0xe |
                 (long)(*(int *)(DAT_0040f4c0 + 0xd5e4) + 0x17c) << 0x25 | 0x6a9b00000U |
                 0x2000000000000000;
  auVar18 = _pcpyld(auVar28,auVar9);
  DAT_0040e5f0[0x14] = auVar18._0_4_;
  DAT_0040e5f0[0x15] = auVar18._4_4_;
  DAT_0040e5f0[0x16] = auVar18._8_4_;
  DAT_0040e5f0[0x17] = auVar18._12_4_;
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_8_ = 0x47;
  auVar10._8_8_ = in_a2_udw;
  auVar10._0_8_ = 0x71001;
  auVar18 = _pcpyld(auVar19,auVar10);
  DAT_0040e5f0[0x18] = auVar18._0_4_;
  DAT_0040e5f0[0x19] = auVar18._4_4_;
  DAT_0040e5f0[0x1a] = auVar18._8_4_;
  DAT_0040e5f0[0x1b] = auVar18._12_4_;
  auVar20._8_8_ = auVar18._8_8_;
  auVar20._0_8_ = 0x42;
  auVar11._8_8_ = in_a2_udw;
  auVar11._0_8_ = 0x44;
  auVar18 = _pcpyld(auVar20,auVar11);
  DAT_0040e5f0[0x1c] = auVar18._0_4_;
  DAT_0040e5f0[0x1d] = auVar18._4_4_;
  DAT_0040e5f0[0x1e] = auVar18._8_4_;
  DAT_0040e5f0[0x1f] = auVar18._12_4_;
  auVar18 = _qmtc2(0x43000000);
  auVar28 = _lqc2(auVar27);
  auVar26 = _qmtc2(0x3f000000);
  auVar27 = _vmulbc(auVar28,auVar18);
  auVar25 = _vmulbc(auVar28,auVar18);
  auVar27 = _vaddbc(auVar27,auVar26);
  auVar25 = _vaddbc(auVar25,auVar26);
  auVar27 = _sqc2(auVar27);
  auVar18 = _vmulbc(auVar28,auVar18);
  auVar18 = _vaddbc(auVar18,auVar26);
  auVar18 = _qmfc2(auVar18._0_4_);
  fStack_ac = auVar27._4_4_;
  auVar27 = _sqc2(auVar25);
  fStack_a8 = auVar27._8_4_;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 1;
  auVar12._8_8_ = in_a2_udw;
  auVar12._0_8_ =
       (long)(int)auVar18._0_4_ |
       CONCAT44((int)(char)((uint)(int)fStack_ac >> 0x18),(int)fStack_ac << 8) |
       (long)(int)fStack_a8 << 0x10 | 0x3f80000080000000;
  auVar27 = _pcpyld(auVar4,auVar12);
  DAT_0040e5f0[0x20] = auVar27._0_4_;
  DAT_0040e5f0[0x21] = auVar27._4_4_;
  DAT_0040e5f0[0x22] = auVar27._8_4_;
  DAT_0040e5f0[0x23] = auVar27._12_4_;
  auVar27._8_8_ = in_a0_udw;
  auVar27._0_8_ = 0x5353;
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = (long)iVar24 | 0x4400000000008000;
  auVar27 = _pcpyld(auVar27,auVar13);
  DAT_0040e5f0[0x24] = auVar27._0_4_;
  DAT_0040e5f0[0x25] = auVar27._4_4_;
  DAT_0040e5f0[0x26] = auVar27._8_4_;
  DAT_0040e5f0[0x27] = auVar27._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x28;
  uVar23 = (ulong)(int)(param_3 << 4);
  iVar21 = (param_4 + param_6) * 0x10;
  do {
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = uVar23 | (long)(int)(param_4 * 0x10) << 0x10 | 0xffff00000000;
    auVar14._8_8_ = in_a2_udw;
    auVar14._0_8_ = (long)((int)uVar23 + 8) | (long)(int)(param_4 * 0x10 + 8) << 0x10;
    auVar27 = _pcpyld(auVar2,auVar14);
    *DAT_0040e5f0 = auVar27._0_4_;
    DAT_0040e5f0[1] = auVar27._4_4_;
    DAT_0040e5f0[2] = auVar27._8_4_;
    DAT_0040e5f0[3] = auVar27._12_4_;
    iVar24 = iVar24 + -1;
    if (iVar24 == 0) {
      uVar22 = param_5 * 0x10;
    }
    else {
      uVar22 = (int)uVar23 + 0x200U & 0xfffffe00;
    }
    uVar23 = (ulong)(int)uVar22;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = uVar23 | (long)iVar21 << 0x10 | 0xffff00000000;
    auVar15._8_8_ = in_a2_udw;
    auVar15._0_8_ = (long)(int)(uVar22 + 8) | (long)(iVar21 + 8) << 0x10;
    auVar27 = _pcpyld(auVar3,auVar15);
    DAT_0040e5f0[4] = auVar27._0_4_;
    DAT_0040e5f0[5] = auVar27._4_4_;
    DAT_0040e5f0[6] = auVar27._8_4_;
    DAT_0040e5f0[7] = auVar27._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
  } while (iVar24 != 0);
  return;
}


// ==== FUN_001c3d50 @ 001c3d50 ====

void FUN_001c3d50(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_a0_udw;
  
  FUN_002b3d88(0x80000000,3);
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0xe;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x1000000000008002;
  auVar5 = _pcpyld(auVar4,auVar5);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  auVar6._8_8_ = auVar5._8_8_;
  auVar6._0_8_ = 0x14;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 1;
  auVar5 = _pcpyld(auVar6,auVar1);
  DAT_0040e5f0[4] = auVar5._0_4_;
  DAT_0040e5f0[5] = auVar5._4_4_;
  DAT_0040e5f0[6] = auVar5._8_4_;
  DAT_0040e5f0[7] = auVar5._12_4_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auVar5._8_8_;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 0x18;
  auVar5 = _pcpyld(auVar2,auVar3 << 0x40);
  DAT_0040e5f0[8] = auVar5._0_4_;
  DAT_0040e5f0[9] = auVar5._4_4_;
  DAT_0040e5f0[10] = auVar5._8_4_;
  DAT_0040e5f0[0xb] = auVar5._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_001c3dc0 @ 001c3dc0 ====

void FUN_001c3dc0(float param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  float fVar1;
  
  param_1 = param_1 * 0.0003;
  fVar1 = (float)((int)param_1 * (uint)(0.003 < param_1) | (uint)(0.003 >= param_1) * 0x3b449ba6);
  *param_3 = (int)fVar1 * (uint)(fVar1 < 0.4) | (uint)(fVar1 >= 0.4) * 0x3ecccccd;
  *param_4 = 0x459c4000;
  return;
}


// ==== FUN_001c3e08 @ 001c3e08 ====

undefined4 FUN_001c3e08(void)

{
  return 1;
}


// ==== FUN_001c3e10 @ 001c3e10 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c3e10(void)

{
  int iVar1;
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
  ulong in_a2_udw;
  ulong in_a3_udw;
  undefined1 in_vf0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  DAT_004173e0 = 0;
  FUN_002b3d88(0,7);
  auVar21._8_8_ = in_a2_udw;
  auVar21._0_8_ = 0x10000000;
  auVar27._8_8_ = in_a3_udw;
  auVar27._0_8_ = 0x1100000011000000;
  auVar21 = _pcpyld(auVar27,auVar21);
  *DAT_0040e5f0 = auVar21._0_4_;
  DAT_0040e5f0[1] = auVar21._4_4_;
  DAT_0040e5f0[2] = auVar21._8_4_;
  DAT_0040e5f0[3] = auVar21._12_4_;
  if (DAT_0040e064 == &DAT_003ab600) {
    auVar28._8_8_ = in_a2_udw;
    auVar28._0_8_ = 0x10000000;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = in_a3_udw;
    auVar21 = _pcpyld(auVar18 << 0x40,auVar28);
    DAT_0040e5f0[4] = auVar21._0_4_;
    DAT_0040e5f0[5] = auVar21._4_4_;
    DAT_0040e5f0[6] = auVar21._8_4_;
    DAT_0040e5f0[7] = auVar21._12_4_;
  }
  else {
    DAT_0040e064 = &DAT_003ab600;
    auVar2._8_8_ = in_a2_udw;
    auVar2._0_8_ = 0x3ab60050000000;
    auVar12._8_8_ = in_a3_udw;
    auVar12._0_8_ = 0x20000f003000000;
    auVar21 = _pcpyld(auVar12,auVar2);
    DAT_0040e5f0[4] = auVar21._0_4_;
    DAT_0040e5f0[5] = auVar21._4_4_;
    DAT_0040e5f0[6] = auVar21._8_4_;
    DAT_0040e5f0[7] = auVar21._12_4_;
  }
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = 0x10000004;
  auVar13._8_8_ = in_a3_udw;
  auVar13._0_8_ = 0x5000000400000000;
  auVar21 = _pcpyld(auVar13,auVar3);
  DAT_0040e5f0[8] = auVar21._0_4_;
  DAT_0040e5f0[9] = auVar21._4_4_;
  DAT_0040e5f0[10] = auVar21._8_4_;
  DAT_0040e5f0[0xb] = auVar21._12_4_;
  auVar22._8_8_ = auVar21._8_8_;
  auVar22._0_8_ = 0xe;
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = 0x1000000000008003;
  auVar21 = _pcpyld(auVar22,auVar4);
  DAT_0040e5f0[0xc] = auVar21._0_4_;
  DAT_0040e5f0[0xd] = auVar21._4_4_;
  DAT_0040e5f0[0xe] = auVar21._8_4_;
  DAT_0040e5f0[0xf] = auVar21._12_4_;
  auVar23._8_8_ = auVar21._8_8_;
  auVar23._0_8_ = 0x42;
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = 0x44;
  auVar21 = _pcpyld(auVar23,auVar5);
  DAT_0040e5f0[0x10] = auVar21._0_4_;
  DAT_0040e5f0[0x11] = auVar21._4_4_;
  DAT_0040e5f0[0x12] = auVar21._8_4_;
  DAT_0040e5f0[0x13] = auVar21._12_4_;
  auVar24._8_8_ = auVar21._8_8_;
  auVar24._0_8_ = 0x47;
  auVar6._8_8_ = in_a2_udw;
  auVar6._0_8_ = 0x51001;
  auVar21 = _pcpyld(auVar24,auVar6);
  DAT_0040e5f0[0x14] = auVar21._0_4_;
  DAT_0040e5f0[0x15] = auVar21._4_4_;
  DAT_0040e5f0[0x16] = auVar21._8_4_;
  DAT_0040e5f0[0x17] = auVar21._12_4_;
  auVar25._8_8_ = auVar21._8_8_;
  auVar25._0_8_ = 8;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = in_a2_udw;
  auVar21 = _pcpyld(auVar25,auVar19 << 0x40);
  DAT_0040e5f0[0x18] = auVar21._0_4_;
  DAT_0040e5f0[0x19] = auVar21._4_4_;
  DAT_0040e5f0[0x1a] = auVar21._8_4_;
  DAT_0040e5f0[0x1b] = auVar21._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,0);
  FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
  FUN_002b3d88(0,9);
  auVar7._8_8_ = in_a2_udw;
  auVar7._0_8_ = 0x10000001;
  auVar14._8_8_ = in_a3_udw;
  auVar14._0_8_ = 0x6c0103f501000101;
  auVar21 = _pcpyld(auVar14,auVar7);
  *DAT_0040e5f0 = auVar21._0_4_;
  DAT_0040e5f0[1] = auVar21._4_4_;
  DAT_0040e5f0[2] = auVar21._8_4_;
  DAT_0040e5f0[3] = auVar21._12_4_;
  auVar8._8_8_ = in_a2_udw;
  auVar8._0_8_ = 10;
  auVar15._8_8_ = in_a3_udw;
  auVar15._0_8_ = 0x300000000;
  auVar21 = _pcpyld(auVar15,auVar8);
  DAT_0040e5f0[4] = auVar21._0_4_;
  DAT_0040e5f0[5] = auVar21._4_4_;
  DAT_0040e5f0[6] = auVar21._8_4_;
  DAT_0040e5f0[7] = auVar21._12_4_;
  auVar27 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  _lqc2(auStack_60);
  auVar21 = _lqc2(_DAT_00416540);
  _vadd(in_vf0,auVar27);
  auVar27 = _qmtc2(DAT_003bd1e0);
  _lqc2(auStack_50);
  _vadd(in_vf0,auVar21);
  auVar21 = _qmtc2(DAT_003bd1e4);
  auVar27 = _vmr32(auVar27);
  auVar28 = _vmr32(auVar21);
  auVar9._8_8_ = in_a2_udw;
  auVar9._0_8_ = 0x10000005;
  auVar16._8_8_ = in_a3_udw;
  auVar16._0_8_ = 0x6c0503f001000101;
  auVar21 = _pcpyld(auVar16,auVar9);
  DAT_0040e5f0[8] = auVar21._0_4_;
  DAT_0040e5f0[9] = auVar21._4_4_;
  DAT_0040e5f0[10] = auVar21._8_4_;
  DAT_0040e5f0[0xb] = auVar21._12_4_;
  auVar21 = _sqc2(auVar27);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0xc) = auVar21;
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x58) + 4);
  auVar21 = _pextlw(0,(long)*(int *)(iVar1 + 0x50));
  auVar21 = _pextlw((long)*(int *)(iVar1 + 0x58),auVar21._0_8_);
  DAT_0040e5f0[0x10] = auVar21._0_4_;
  DAT_0040e5f0[0x11] = auVar21._4_4_;
  DAT_0040e5f0[0x12] = auVar21._8_4_;
  DAT_0040e5f0[0x13] = auVar21._12_4_;
  auVar21 = _sqc2(auVar28);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0x14) = auVar21;
  auVar20._8_4_ = 0x43000000;
  auVar20._0_8_ = 0x4300000043000000;
  auVar20._12_4_ = 0x42800000;
  auVar21 = _lqc2(auVar20);
  auVar21 = _vftoi0(auVar21);
  auVar21 = _qmfc2(auVar21._0_4_);
  DAT_0040e5f0[0x18] = auVar21._0_4_;
  DAT_0040e5f0[0x19] = auVar21._4_4_;
  DAT_0040e5f0[0x1a] = auVar21._8_4_;
  DAT_0040e5f0[0x1b] = auVar21._12_4_;
  auVar26._8_8_ = auVar21._8_8_;
  auVar26._0_8_ = 0x412;
  auVar10._8_8_ = in_a2_udw;
  auVar10._0_8_ = 0x302e400000000000;
  auVar21 = _pcpyld(auVar26,auVar10);
  DAT_0040e5f0[0x1c] = auVar21._0_4_;
  DAT_0040e5f0[0x1d] = auVar21._4_4_;
  DAT_0040e5f0[0x1e] = auVar21._8_4_;
  DAT_0040e5f0[0x1f] = auVar21._12_4_;
  auVar11._8_8_ = in_a2_udw;
  auVar11._0_8_ = 0x10000000;
  auVar17._8_8_ = in_a3_udw;
  auVar17._0_8_ = 0x1400000000000000;
  auVar21 = _pcpyld(auVar17,auVar11);
  DAT_0040e5f0[0x20] = auVar21._0_4_;
  DAT_0040e5f0[0x21] = auVar21._4_4_;
  DAT_0040e5f0[0x22] = auVar21._8_4_;
  DAT_0040e5f0[0x23] = auVar21._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x24;
  return;
}


// ==== FUN_001c4130 @ 001c4130 ====

void FUN_001c4130(long param_1)

{
  DAT_003bd1dc = 0x200;
  if (param_1 != 0) {
    DAT_003bd1dc = 0;
  }
  return;
}


// ==== FUN_001c4148 @ 001c4148 ====

void FUN_001c4148(int param_1)

{
  long lVar1;
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_a1_udw;
  
  FUN_002b3d88(0,1);
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 0x11000000;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x10000000;
  auVar3 = _pcpyld(auVar2,auVar3);
  *DAT_0040e5f0 = auVar3._0_4_;
  DAT_0040e5f0[1] = auVar3._4_4_;
  DAT_0040e5f0[2] = auVar3._8_4_;
  DAT_0040e5f0[3] = auVar3._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  if (DAT_0040e690 != param_1) {
    FUN_002cdea0(param_1);
    lVar1 = FUN_002cd230(param_1,0);
    if (lVar1 != 0) {
      DAT_0040e690 = param_1;
    }
  }
  return;
}


// ==== FUN_001c41d0 @ 001c41d0 ====

void FUN_001c41d0(undefined1 (*param_1) [16])

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 in_zero_qw [16];
  uint uVar4;
  uint *puVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  if (0x4c < DAT_004173e0) {
    FUN_001c4628(0x4173e0);
  }
  iVar3 = DAT_004173e0;
  iVar2 = DAT_003bd1dc;
  auVar8 = _vsub(in_vf0,in_vf0);
  _lqc2(auStack_90);
  auVar6 = _qmtc2(0x3f808000);
  auVar7 = _vmr32(auVar6);
  auVar10 = _lqc2(param_1[1]);
  _lqc2(auStack_80);
  _vmove(auVar7);
  auVar6 = _vmr32(auVar6);
  auVar12 = _vadd(in_vf0,auVar10);
  auVar11 = _lqc2(param_1[2]);
  iVar1 = DAT_004173e0 * 4;
  auVar10 = _lqc2(param_1[4]);
  auVar9 = _lqc2(param_1[3]);
  _vmove(auVar8);
  _vmove(auVar6);
  auVar10 = _vadd(in_vf0,auVar10);
  _vmove(auVar8);
  auVar11 = _vadd(in_vf0,auVar11);
  _sqc2(auVar7);
  auVar7 = _vadd(in_vf0,auVar9);
  _sqc2(auVar6);
  _sqc2(auVar8);
  puVar5 = &DAT_004178f0 + DAT_004173e0;
  _sqc2(auVar8);
  auVar6 = _sqc2(auVar7);
  *(undefined1 (*) [16])(&DAT_00417420 + DAT_004173e0 * 4) = auVar6;
  auVar6 = _sqc2(auVar12);
  *(undefined1 (*) [16])(&DAT_004173f0 + iVar1) = auVar6;
  auVar6 = _sqc2(auVar11);
  *(undefined1 (*) [16])(&DAT_00417400 + iVar3 * 4) = auVar6;
  auVar6 = _sqc2(auVar10);
  *(undefined1 (*) [16])(&DAT_00417410 + iVar3 * 4) = auVar6;
  _sqc2(auVar8);
  _sqc2(auVar12);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar7);
  if (iVar2 == 0x200) {
    *puVar5 = (int)(short)(int)(*(float *)param_1[5] * 4096.0) |
              (int)(*(float *)(param_1[5] + 4) * 4096.0) << 0x10;
    (&DAT_004178f4)[iVar3] =
         (int)(short)(int)(*(float *)(param_1[5] + 8) * 4096.0) |
         (int)(*(float *)(param_1[5] + 0xc) * 4096.0) << 0x10;
    (&DAT_004178f8)[iVar3] =
         (int)(short)(int)(*(float *)(param_1[6] + 8) * 4096.0) |
         (int)(*(float *)(param_1[6] + 0xc) * 4096.0) << 0x10;
    (&DAT_004178fc)[iVar3] =
         (int)(short)(int)(*(float *)param_1[6] * 4096.0) |
         (int)(*(float *)(param_1[6] + 4) * 4096.0) << 0x10;
  }
  else {
    auVar6 = _lqc2(*param_1);
    auVar10 = _qmtc2(0x42fe0000);
    auVar6 = _vmulbc(auVar6,auVar10);
    auVar6 = _vftoi0(auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    auVar6 = _ppach(in_zero_qw,auVar6);
    auVar6 = _ppacb(in_zero_qw,auVar6);
    uVar4 = auVar6._0_4_;
    (&DAT_004178fc)[iVar3] = uVar4;
    *puVar5 = uVar4;
    (&DAT_004178f4)[iVar3] = uVar4;
    (&DAT_004178f8)[iVar3] = uVar4;
  }
  DAT_004173e0 = DAT_004173e0 + 4;
  return;
}


// ==== FUN_001c43f0 @ 001c43f0 ====

void FUN_001c43f0(undefined1 (*param_1) [16])

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 in_zero_qw [16];
  uint uVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if (0x4d < DAT_004173e0) {
    FUN_001c4628(0x4173e0);
  }
  iVar3 = DAT_004173e0;
  iVar2 = DAT_003bd1dc;
  auVar9 = _vsub(in_vf0,in_vf0);
  _lqc2(auStack_80);
  auVar5 = _qmtc2(0x3f808000);
  auVar6 = _vmr32(auVar5);
  auVar8 = _lqc2(param_1[1]);
  _lqc2(auStack_70);
  _vmove(auVar6);
  auVar7 = _vmr32(auVar5);
  auVar10 = _vadd(in_vf0,auVar8);
  auVar8 = _lqc2(param_1[2]);
  iVar1 = DAT_004173e0 * 4;
  auVar5 = _lqc2(param_1[3]);
  _vmove(auVar7);
  _vmove(auVar9);
  auVar8 = _vadd(in_vf0,auVar8);
  _sqc2(auVar6);
  auVar6 = _vadd(in_vf0,auVar5);
  _sqc2(auVar7);
  _sqc2(auVar9);
  auVar5 = _sqc2(auVar6);
  *(undefined1 (*) [16])(&DAT_00417410 + DAT_004173e0 * 4) = auVar5;
  auVar5 = _sqc2(auVar10);
  *(undefined1 (*) [16])(&DAT_004173f0 + iVar1) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(&DAT_00417400 + iVar3 * 4) = auVar5;
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar8);
  _sqc2(auVar6);
  if (iVar2 == 0x200) {
    (&DAT_004178f0)[iVar3] =
         (int)(short)(int)(*(float *)param_1[4] * 4096.0) |
         (int)(*(float *)(param_1[4] + 4) * 4096.0) << 0x10;
    (&DAT_004178f4)[iVar3] =
         (int)(short)(int)(*(float *)(param_1[4] + 8) * 4096.0) |
         (int)(*(float *)(param_1[4] + 0xc) * 4096.0) << 0x10;
    (&DAT_004178f8)[iVar3] =
         (int)(short)(int)(*(float *)param_1[5] * 4096.0) |
         (int)(*(float *)(param_1[5] + 4) * 4096.0) << 0x10;
  }
  else {
    auVar5 = _lqc2(*param_1);
    auVar6 = _qmtc2(0x42fe0000);
    auVar5 = _vmulbc(auVar5,auVar6);
    auVar5 = _vftoi0(auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    auVar5 = _ppach(in_zero_qw,auVar5);
    auVar5 = _ppacb(in_zero_qw,auVar5);
    uVar4 = auVar5._0_4_;
    (&DAT_004178f8)[iVar3] = uVar4;
    (&DAT_004178f0)[iVar3] = uVar4;
    (&DAT_004178f4)[iVar3] = uVar4;
  }
  DAT_004173e0 = DAT_004173e0 + 3;
  return;
}


// ==== FUN_001c45c0 @ 001c45c0 ====

void FUN_001c45c0(void)

{
  FUN_001c4628(0x4173e0);
  return;
}


// ==== FUN_001c45e0 @ 001c45e0 ====

void FUN_001c45e0(void)

{
  undefined8 in_v1_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_a1_udw;
  
  FUN_001c45c0();
  FUN_002b3d88(0,1);
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x11000000;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 0x10000000;
  auVar2 = _pcpyld(auVar1,auVar2);
  *DAT_0040e5f0 = auVar2._0_4_;
  DAT_0040e5f0[1] = auVar2._4_4_;
  DAT_0040e5f0[2] = auVar2._8_4_;
  DAT_0040e5f0[3] = auVar2._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  return;
}


// ==== FUN_001c4628 @ 001c4628 ====

void FUN_001c4628(uint *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 in_zero_qw [16];
  undefined1 auVar10 [16];
  ulong in_v1_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 (*pauVar20) [16];
  int iVar21;
  uint uVar22;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  uint uVar23;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar23 = uVar1 + 3 & 0xfffffffc;
    iVar21 = uVar23 + 6;
    if (-1 < (int)(uVar23 + 3)) {
      iVar21 = uVar23 + 3;
    }
    iVar21 = uVar1 + (iVar21 >> 2) + 2;
    FUN_002b3d88(0,iVar21 + 2);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = in_v1_udw;
    auVar10._8_4_ = in_s0_udw;
    auVar10._0_8_ = (long)iVar21 | 0x10000000;
    auVar10._12_4_ = in_register_0000010c;
    auVar10 = _pcpyld(auVar17 << 0x40,auVar10);
    *DAT_0040e5f0 = auVar10._0_4_;
    DAT_0040e5f0[1] = auVar10._4_4_;
    DAT_0040e5f0[2] = auVar10._8_4_;
    DAT_0040e5f0[3] = auVar10._12_4_;
    auVar11._0_8_ = ((long)(int)(uVar1 << 0x10) | 0x6c008000U) << 0x20 | 0x1000103;
    auVar11._8_8_ = in_v1_udw;
    auVar14._8_4_ = in_s0_udw;
    auVar14._0_8_ = 0x500000000000000;
    auVar14._12_4_ = in_register_0000010c;
    auVar10 = _pcpyld(auVar11,auVar14);
    DAT_0040e5f0[4] = auVar10._0_4_;
    DAT_0040e5f0[5] = auVar10._4_4_;
    DAT_0040e5f0[6] = auVar10._8_4_;
    DAT_0040e5f0[7] = auVar10._12_4_;
    puVar18 = DAT_0040e5f0 + 8;
    iVar21 = uVar1 + 0xe;
    if (-1 < (int)(uVar1 + 7)) {
      iVar21 = uVar1 + 7;
    }
    puVar19 = &DAT_004173f0;
    iVar21 = iVar21 >> 3;
    switch(uVar1 & 7) {
    case 0:
      do {
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_7:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_6:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_5:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_4:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_3:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_2:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar18 = puVar18 + 4;
switchD_001c4724_caseD_1:
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        puVar19 = puVar19 + 4;
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        iVar21 = iVar21 + -1;
        puVar18 = puVar18 + 4;
      } while (iVar21 != 0);
      break;
    case 1:
      goto switchD_001c4724_caseD_1;
    case 2:
      goto switchD_001c4724_caseD_2;
    case 3:
      goto switchD_001c4724_caseD_3;
    case 4:
      goto switchD_001c4724_caseD_4;
    case 5:
      goto switchD_001c4724_caseD_5;
    case 6:
      goto switchD_001c4724_caseD_6;
    case 7:
      goto switchD_001c4724_caseD_7;
    }
    uVar22 = (int)(uVar1 + 3) >> 2;
    if (DAT_003bd1dc == 0x200) {
      auVar12._0_8_ = ((long)(int)(uVar23 << 0x10) | 0x65008001U) << 0x20 | 0x1000103;
      auVar12._8_8_ = in_v1_udw;
      auVar2._8_4_ = in_s0_udw;
      auVar2._0_8_ = 0x500000000000000;
      auVar2._12_4_ = in_register_0000010c;
      auVar10 = _pcpyld(auVar12,auVar2);
      *puVar18 = auVar10._0_4_;
      puVar18[1] = auVar10._4_4_;
      puVar18[2] = auVar10._8_4_;
      puVar18[3] = auVar10._12_4_;
      puVar18 = puVar18 + 4;
      puVar19 = &DAT_004178f0;
      auVar15._0_8_ = CONCAT71(0,-1 < (int)(uVar22 + 7));
      auVar15._8_8_ = in_v1_udw;
      iVar21 = uVar22 + 0xe;
      if (auVar15._0_8_ != 0) {
        iVar21 = uVar22 + 7;
      }
      iVar21 = iVar21 >> 3;
      if ((uVar22 & 7) < 8) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = in_v1_udw;
        auVar15 = auVar9 << 0x40;
        switch(uVar22 & 7) {
        case 1:
          goto switchD_001c4844_caseD_1;
        case 2:
          goto switchD_001c4844_caseD_2;
        case 3:
          goto switchD_001c4844_caseD_3;
        case 4:
          goto switchD_001c4844_caseD_4;
        case 5:
          goto switchD_001c4844_caseD_5;
        case 6:
          goto switchD_001c4844_caseD_6;
        case 7:
          goto switchD_001c4844_caseD_7;
        }
        do {
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_7:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_6:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_5:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_4:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_3:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_2:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          puVar18 = puVar18 + 4;
switchD_001c4844_caseD_1:
          uVar5 = *puVar19;
          uVar6 = puVar19[1];
          uVar7 = puVar19[2];
          uVar8 = puVar19[3];
          puVar19 = puVar19 + 4;
          *puVar18 = uVar5;
          puVar18[1] = uVar6;
          puVar18[2] = uVar7;
          puVar18[3] = uVar8;
          iVar21 = iVar21 + -1;
          puVar18 = puVar18 + 4;
        } while (iVar21 != 0);
      }
    }
    else {
      auVar13._0_8_ = ((long)(int)(uVar23 << 0x10) | 0x6e008001U) << 0x20 | 0x1000103;
      auVar13._8_8_ = in_v1_udw;
      auVar4._8_4_ = in_s0_udw;
      auVar4._0_8_ = 0x500000000000000;
      auVar4._12_4_ = in_register_0000010c;
      auVar10 = _pcpyld(auVar13,auVar4);
      *puVar18 = auVar10._0_4_;
      puVar18[1] = auVar10._4_4_;
      puVar18[2] = auVar10._8_4_;
      puVar18[3] = auVar10._12_4_;
      puVar18 = puVar18 + 4;
      pauVar20 = (undefined1 (*) [16])&DAT_004178f0;
      auVar15._8_8_ = in_v1_udw;
      auVar15._0_8_ = 0x4178f0;
      if (0 < (int)uVar22) {
        do {
          auVar10 = _pextub(in_zero_qw,*pauVar20);
          auVar14 = _pextlb(0,SUB168(*pauVar20,0));
          auVar17 = _pextuh(auVar10,auVar14);
          auVar10 = _pextlh(auVar10._0_8_,auVar14._0_8_);
          auVar14 = _pextuh(auVar17,auVar10);
          auVar10 = _pextlh(auVar17._0_8_,auVar10._0_8_);
          auVar15 = _ppacb(auVar14,auVar10);
          *puVar18 = auVar15._0_4_;
          puVar18[1] = auVar15._4_4_;
          puVar18[2] = auVar15._8_4_;
          puVar18[3] = auVar15._12_4_;
          puVar18 = puVar18 + 4;
          uVar22 = uVar22 - 1;
          pauVar20 = pauVar20 + 1;
        } while (uVar22 != 0);
      }
    }
    auVar16._8_8_ = auVar15._8_8_;
    auVar16._0_8_ = (ulong)(uVar1 | DAT_003bd1dc) | 0x1700000004000000;
    auVar3._8_4_ = in_s0_udw;
    auVar3._0_8_ = 0x10000000;
    auVar3._12_4_ = in_register_0000010c;
    auVar10 = _pcpyld(auVar16,auVar3);
    *puVar18 = auVar10._0_4_;
    puVar18[1] = auVar10._4_4_;
    puVar18[2] = auVar10._8_4_;
    puVar18[3] = auVar10._12_4_;
    DAT_0040e5f0 = puVar18 + 4;
    *param_1 = 0;
  }
  return;
}


// ==== FUN_001c49e0 @ 001c49e0 ====

ulong FUN_001c49e0(ulong param_1,int param_2,long param_3,long param_4,ulong param_5,ulong param_6,
                  long param_7,uint param_8,uint param_9,uint param_10,undefined8 param_11,
                  char param_12)

{
  ulong uVar1;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 in_v0_udw;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  uint uVar36;
  undefined8 in_a1_udw;
  uint uVar37;
  int iVar38;
  uint uVar39;
  undefined4 *puVar40;
  ulong in_t5_udw;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong in_t6_udw;
  uint uVar45;
  
  puVar40 = (undefined4 *)param_1;
  uVar45 = param_2 + 0x1fU >> 5;
  uVar39 = param_2 + 0x3fU >> 6;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = in_t5_udw;
  auVar17._4_4_ = 0;
  auVar17._0_4_ = uVar45 * 2 + 0x10 | 0x70000000;
  auVar17._8_8_ = in_t6_udw;
  auVar41 = _pcpyld(auVar33 << 0x40,auVar17);
  *puVar40 = auVar41._0_4_;
  puVar40[1] = auVar41._4_4_;
  puVar40[2] = auVar41._8_4_;
  puVar40[3] = auVar41._12_4_;
  auVar41._8_8_ = in_v0_udw;
  auVar41._0_8_ = 0xe;
  auVar18._8_8_ = in_t6_udw;
  auVar18._0_8_ = 0x11ab40000000000c;
  auVar41 = _pcpyld(auVar41,auVar18);
  puVar40[4] = auVar41._0_4_;
  puVar40[5] = auVar41._4_4_;
  puVar40[6] = auVar41._8_4_;
  puVar40[7] = auVar41._12_4_;
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x4d;
  auVar19._6_2_ = 0;
  auVar19._0_6_ =
       CONCAT24((ushort)(param_2 + 0x3fU >> 0x16),(int)((long)(int)uVar39 << 0x10)) | 0xa000000;
  auVar19._8_8_ = in_t6_udw;
  auVar41 = _pcpyld(auVar2,auVar19);
  puVar40[8] = auVar41._0_4_;
  puVar40[9] = auVar41._4_4_;
  puVar40[10] = auVar41._8_4_;
  puVar40[0xb] = auVar41._12_4_;
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 7;
  auVar20._8_8_ = in_t6_udw;
  auVar20._0_8_ =
       (ulong)(uVar39 * ((int)param_4 + 0x3fU >> 6) * 0x20) | (long)(int)uVar39 << 0xe | 0x6a8100000
  ;
  auVar41 = _pcpyld(auVar3,auVar20);
  puVar40[0xc] = auVar41._0_4_;
  puVar40[0xd] = auVar41._4_4_;
  puVar40[0xe] = auVar41._8_4_;
  puVar40[0xf] = auVar41._12_4_;
  auVar13._8_8_ = in_v1_udw;
  auVar13._0_8_ = 0x3b;
  auVar21._8_8_ = in_t6_udw;
  auVar21._0_8_ = 0x80;
  auVar41 = _pcpyld(auVar13,auVar21);
  puVar40[0x10] = auVar41._0_4_;
  puVar40[0x11] = auVar41._4_4_;
  puVar40[0x12] = auVar41._8_4_;
  puVar40[0x13] = auVar41._12_4_;
  auVar4._8_8_ = in_v0_udw;
  auVar4._0_8_ = 0x19;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = in_t6_udw;
  auVar41 = _pcpyld(auVar4,auVar34 << 0x40);
  puVar40[0x14] = auVar41._0_4_;
  puVar40[0x15] = auVar41._4_4_;
  puVar40[0x16] = auVar41._8_4_;
  puVar40[0x17] = auVar41._12_4_;
  auVar5._8_8_ = in_v0_udw;
  auVar5._0_8_ = 0x41;
  auVar22._8_8_ = in_t6_udw;
  auVar22._0_8_ = 0x7ff000007ff0000;
  auVar41 = _pcpyld(auVar5,auVar22);
  puVar40[0x18] = auVar41._0_4_;
  puVar40[0x19] = auVar41._4_4_;
  puVar40[0x1a] = auVar41._8_4_;
  puVar40[0x1b] = auVar41._12_4_;
  auVar6._8_8_ = in_v0_udw;
  auVar6._0_8_ = 9;
  auVar23._8_8_ = in_t6_udw;
  auVar23._0_8_ =
       CONCAT44(param_2 - 1U >> 0x12,(param_2 - 1U) * 0x4000) |
       (long)((int)param_3 + -1) << 0x22 | 10U;
  auVar41 = _pcpyld(auVar6,auVar23);
  puVar40[0x1c] = auVar41._0_4_;
  puVar40[0x1d] = auVar41._4_4_;
  puVar40[0x1e] = auVar41._8_4_;
  puVar40[0x1f] = auVar41._12_4_;
  auVar7._8_8_ = in_v0_udw;
  auVar7._0_8_ = 0x48;
  auVar24._8_8_ = in_t6_udw;
  auVar24._0_8_ = 0x31001;
  auVar41 = _pcpyld(auVar7,auVar24);
  puVar40[0x20] = auVar41._0_4_;
  puVar40[0x21] = auVar41._4_4_;
  puVar40[0x22] = auVar41._8_4_;
  puVar40[0x23] = auVar41._12_4_;
  uVar39 = 0x61;
  if ((((param_10 & 0xf) == 8) && ((param_9 & 0xf) == 8)) && (param_3 == param_4)) {
    uVar39 = 1;
  }
  auVar8._8_8_ = in_v0_udw;
  auVar8._0_8_ = 0x15;
  auVar25._4_4_ = 0;
  auVar25._0_4_ = uVar39;
  auVar25._8_8_ = in_t6_udw;
  auVar41 = _pcpyld(auVar8,auVar25);
  puVar40[0x24] = auVar41._0_4_;
  puVar40[0x25] = auVar41._4_4_;
  puVar40[0x26] = auVar41._8_4_;
  puVar40[0x27] = auVar41._12_4_;
  auVar15._8_8_ = in_a0_udw;
  auVar15._0_8_ = 0x45;
  auVar26._8_8_ = in_t6_udw;
  auVar26._0_8_ = 1;
  auVar41 = _pcpyld(auVar15,auVar26);
  puVar40[0x28] = auVar41._0_4_;
  puVar40[0x29] = auVar41._4_4_;
  puVar40[0x2a] = auVar41._8_4_;
  puVar40[0x2b] = auVar41._12_4_;
  auVar9._8_8_ = in_v0_udw;
  auVar9._0_8_ = param_11;
  auVar16._8_8_ = in_a1_udw;
  auVar16._0_8_ = 0x44;
  auVar41 = _pcpyld(auVar16,auVar9);
  puVar40[0x2c] = auVar41._0_4_;
  puVar40[0x2d] = auVar41._4_4_;
  puVar40[0x2e] = auVar41._8_4_;
  puVar40[0x2f] = auVar41._12_4_;
  auVar10._8_8_ = in_v0_udw;
  auVar10._0_8_ = 0x43;
  auVar27._8_8_ = in_t6_udw;
  auVar27._0_8_ = 0x44;
  auVar41 = _pcpyld(auVar10,auVar27);
  puVar40[0x30] = auVar41._0_4_;
  puVar40[0x31] = auVar41._4_4_;
  puVar40[0x32] = auVar41._8_4_;
  puVar40[0x33] = auVar41._12_4_;
  auVar11._8_8_ = in_v0_udw;
  auVar11._0_8_ = 1;
  auVar28._8_8_ = in_t6_udw;
  auVar28._0_8_ =
       param_5 & 0xffffffff | (param_6 & 0xffffffff) << 8 |
       (ulong)CONCAT24((short)((ulong)param_7 >> 0x10),(int)((ulong)(param_7 << 0x20) >> 0x10)) |
       CONCAT44(param_8 >> 8,(int)(((ulong)param_8 << 0x20) >> 8)) | 0x3f80000000000000;
  auVar41 = _pcpyld(auVar11,auVar28);
  puVar40[0x34] = auVar41._0_4_;
  puVar40[0x35] = auVar41._4_4_;
  puVar40[0x36] = auVar41._8_4_;
  puVar40[0x37] = auVar41._12_4_;
  auVar42._8_8_ = auVar41._8_8_;
  auVar42._0_8_ = 0x5353;
  auVar29._8_8_ = in_t6_udw;
  auVar29._0_8_ = (ulong)uVar45 | 0x4400000000000000;
  auVar41 = _pcpyld(auVar42,auVar29);
  puVar40[0x38] = auVar41._0_4_;
  puVar40[0x39] = auVar41._4_4_;
  puVar40[0x3a] = auVar41._8_4_;
  puVar40[0x3b] = auVar41._12_4_;
  uVar39 = (int)param_4 << 4;
  puVar40 = puVar40 + 0x3c;
  if (param_12 == '\0') {
    uVar36 = 0;
    iVar38 = 0x200;
  }
  else {
    uVar36 = uVar45 << 9;
    iVar38 = -0x200;
  }
  uVar37 = 0;
  if (uVar45 != 0) {
    do {
      auVar43._8_8_ = auVar41._8_8_;
      auVar43._4_4_ = 0;
      auVar43._0_4_ = uVar36;
      uVar1 = (ulong)param_9;
      param_9 = param_9 + 0x200;
      uVar36 = uVar36 + iVar38;
      auVar30._8_8_ = in_t6_udw;
      auVar30._0_8_ = uVar1 | (ulong)param_10 << 0x10;
      auVar41 = _pcpyld(auVar43,auVar30);
      *puVar40 = auVar41._0_4_;
      puVar40[1] = auVar41._4_4_;
      puVar40[2] = auVar41._8_4_;
      puVar40[3] = auVar41._12_4_;
      auVar44._8_8_ = auVar41._8_8_;
      auVar44._0_8_ =
           (ulong)uVar36 |
           (ulong)CONCAT24((short)(uVar39 >> 0x10),(int)(((ulong)uVar39 << 0x20) >> 0x10));
      auVar31._8_8_ = in_t6_udw;
      auVar31._0_8_ = (ulong)param_9 | (ulong)((int)param_3 * 0x10 + param_10) << 0x10;
      auVar41 = _pcpyld(auVar44,auVar31);
      uVar37 = uVar37 + 1;
      puVar40[4] = auVar41._0_4_;
      puVar40[5] = auVar41._4_4_;
      puVar40[6] = auVar41._8_4_;
      puVar40[7] = auVar41._12_4_;
      puVar40 = puVar40 + 8;
    } while (uVar37 < uVar45);
  }
  auVar12._8_8_ = in_v0_udw;
  auVar12._0_8_ = 0xe;
  auVar32._8_8_ = in_t6_udw;
  auVar32._0_8_ = 0x1000000000008001;
  auVar41 = _pcpyld(auVar12,auVar32);
  *puVar40 = auVar41._0_4_;
  puVar40[1] = auVar41._4_4_;
  puVar40[2] = auVar41._8_4_;
  puVar40[3] = auVar41._12_4_;
  auVar14._8_8_ = in_v1_udw;
  auVar14._0_8_ = 0x45;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = in_t6_udw;
  auVar41 = _pcpyld(auVar14,auVar35 << 0x40);
  puVar40[4] = auVar41._0_4_;
  puVar40[5] = auVar41._4_4_;
  puVar40[6] = auVar41._8_4_;
  puVar40[7] = auVar41._12_4_;
  SYNC(0);
  return param_1 & 0xffffffffcfffffff;
}


// ==== FUN_001c4d00 @ 001c4d00 ====

void FUN_001c4d00(void)

{
  FUN_001c4f08(DAT_0040f4c0);
  return;
}


// ==== FUN_001c4d28 @ 001c4d28 ====

void FUN_001c4d28(undefined8 param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fStack_9c;
  float fStack_98;
  
  auVar9 = _qmtc2(0x3f000000);
  puVar6 = (undefined4 *)param_1;
  pauVar5 = (undefined1 (*) [16])(puVar6 + 0x3554);
  auVar9 = _sqc2(auVar9);
  auVar10 = _lqc2(*pauVar5);
  fVar8 = 0.0;
  auVar11 = _lqc2(auVar9);
  auVar10 = _vmulbc(auVar10,auVar11);
  auVar11 = _qmtc2((float)puVar6[0x3559] * 128.0);
  auVar10 = _vaddbc(auVar10,auVar11);
  auVar10 = _qmfc2(auVar10._0_4_);
  fVar7 = (float)((int)auVar10._0_4_ * (uint)(0.0 < auVar10._0_4_));
  uVar2 = FUN_00291e90((float)puVar6[0x3558] *
                       (float)((int)fVar7 * (uint)(fVar7 < 255.0) |
                              (uint)(fVar7 >= 255.0) * 0x437f0000));
  auVar10 = _lqc2(*pauVar5);
  auVar11 = _lqc2(auVar9);
  auVar10 = _vmulbc(auVar10,auVar11);
  auVar11 = _qmtc2((float)puVar6[0x3559] * 128.0);
  auVar10 = _vaddbc(auVar10,auVar11);
  auVar10 = _sqc2(auVar10);
  fStack_9c = auVar10._4_4_;
  fVar7 = (float)((int)fStack_9c * (uint)(fVar8 < fStack_9c) |
                 (int)fVar8 * (uint)(fVar8 >= fStack_9c));
  uVar3 = FUN_00291e90((float)puVar6[0x3558] *
                       (float)((int)fVar7 * (uint)(fVar7 < 255.0) |
                              (uint)(fVar7 >= 255.0) * 0x437f0000));
  auVar10 = _lqc2(*pauVar5);
  auVar9 = _lqc2(auVar9);
  auVar9 = _vmulbc(auVar10,auVar9);
  auVar10 = _qmtc2((float)puVar6[0x3559] * 128.0);
  auVar9 = _vaddbc(auVar9,auVar10);
  auVar9 = _sqc2(auVar9);
  fStack_98 = auVar9._8_4_;
  fVar7 = (float)((int)fStack_98 * (uint)(fVar8 < fStack_98) |
                 (int)fVar8 * (uint)(fVar8 >= fStack_98));
  uVar4 = FUN_00291e90((float)puVar6[0x3558] *
                       (float)((int)fVar7 * (uint)(fVar7 < 255.0) |
                              (uint)(fVar7 >= 255.0) * 0x437f0000));
  puVar1 = &DAT_00418580 + DAT_003bd1ec;
  DAT_003bd1ec = (DAT_003bd1ec + 1) % 3;
  DAT_0044e0f0 = FUN_001c49e0(*puVar1 | 0x30000000,*puVar6,puVar6[1],puVar6[0x356d],uVar2,uVar3,
                              uVar4,0x80);
  DAT_0044e0f4 = DAT_0044e0f0;
  DAT_0044e0f8 = DAT_0044e0f0;
  DAT_0044e0fc = DAT_0044e0f0;
  FUN_001ae570(param_1);
  return;
}


// ==== FUN_001c4f08 @ 001c4f08 ====

void FUN_001c4f08(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xd5f0) = param_2;
  if (param_2 < *(uint *)(param_1 + 0xd5f4)) {
    *(uint *)(param_1 + 0xd5f4) = param_2;
  }
  return;
}


// ==== FUN_001c4f30 @ 001c4f30 ====

void FUN_001c4f30(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_0026f2e0();
  iVar2 = (int)param_1;
  *(bool *)(iVar2 + 0xc) = lVar1 == 1;
  *(undefined4 *)(iVar2 + 0xd5ac) = 8;
  *(undefined4 *)(iVar2 + 0xd5a8) = 8;
  FUN_001c59f8(param_1);
  FUN_001c5eb8(param_1);
  FUN_001ae2e8(param_1);
  DAT_00418588 = &DAT_004181c0;
  DAT_00418580 = &DAT_00417a40;
  DAT_00418584 = &DAT_00417e00;
  return;
}


// ==== FUN_001c4fb0 @ 001c4fb0 ====

/* Strings referenciadas:
     "GunReflectMap" */

void FUN_001c4fb0(int param_1)

{
  int iVar1;
  float fVar2;
  
  FUN_001ae420();
  fVar2 = *(float *)(*(int *)(param_1 + 0xd540) + 0x6c);
  if (0.0 < fVar2) {
    fVar2 = (float)FUN_0029e540(fVar2 * 0.011111111);
    *(float *)(param_1 + 0xd5a0) = fVar2 / 0.6931472;
  }
  else {
    *(undefined4 *)(param_1 + 0xd5a0) = 0;
  }
  *(undefined8 *)(param_1 + 0xd5c0) = DAT_0040dfd0;
  *(undefined8 *)(param_1 + 0xd5c8) = DAT_0040dfc8;
  *(undefined8 *)(param_1 + 0xd5d0) = DAT_0040dfe0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xd540) + 0x58) + 0x60);
  *(ulong *)(param_1 + 0xd5d8) =
       (ulong)*(ushort *)(iVar1 + 0x1c) & 0x7ff |
       (long)(*(int *)(iVar1 + 0xc) + (int)(short)*(ushort *)(iVar1 + 0x1c) + -1) << 0x10 |
       ((ulong)*(ushort *)(iVar1 + 0x1e) & 0x7ff) << 0x20 |
       (long)(*(int *)(iVar1 + 0x10) + (int)(short)*(ushort *)(iVar1 + 0x1e) + -1) << 0x30;
  if (DAT_003bd1e8 == 0) {
    DAT_003bd1e8 = FUN_00108328(DAT_0040f4c4,0x3f72a0);
  }
  return;
}


// ==== FUN_001c50e0 @ 001c50e0 ====

void FUN_001c50e0(void)

{
  FUN_001ae538();
  return;
}


// ==== FUN_001c5100 @ 001c5100 ====

undefined8 FUN_001c5100(int param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined4 *puVar15;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar16 [16];
  undefined8 extraout_v0_udw;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong in_v1_udw;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar45;
  int iVar46;
  uint uVar47;
  ulong uVar48;
  ulong uVar49;
  undefined8 in_a3_udw;
  undefined1 auVar50 [16];
  undefined8 in_t0_udw;
  undefined1 auVar51 [16];
  undefined8 in_t1_udw;
  undefined1 auVar52 [16];
  undefined8 in_t2_udw;
  undefined1 auVar53 [16];
  undefined8 in_t3_udw;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ulong in_t4_udw;
  undefined4 *puVar56;
  undefined8 in_t6_udw;
  undefined *puVar57;
  undefined1 in_s0_qw [16];
  undefined8 uVar59;
  undefined1 auVar58 [16];
  int iVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar63;
  uint uVar64;
  float fVar65;
  float fVar66;
  
  iVar60 = (int)param_2;
  if (param_5 == 0) {
    iVar45 = *(int *)(iVar60 + 0xc) + 0x3f;
    iVar46 = *(int *)(iVar60 + 0xc) + 0x7e;
    if (-1 < iVar45) {
      iVar46 = iVar45;
    }
    param_5 = (ulong)(iVar46 >> 6);
  }
  else {
    param_5 = param_5 & 0xffffffff;
  }
  uVar47 = *(int *)(param_1 + 0xd5e4) + (param_4 & 4) * 0x18 + 0x110 + (param_4 & 3) * 4;
  auVar54._8_8_ = in_t3_udw;
  auVar54._0_8_ = 0x4d;
  uVar64 = (uVar47 & 1) * 0x80 + (uVar47 & 4) * 0x40 + (uVar47 & 0x10) * 0x20;
  uVar63 = (uVar47 & 2) * 0x40 + (uVar47 & 8) * 0x20;
  auVar18._8_8_ = in_t6_udw;
  auVar18._0_8_ = (long)(int)(uVar47 >> 5) | 0x10000;
  auVar62 = _pcpyld(auVar54,auVar18);
  iVar45 = (param_3 & 1) * 0x80 + (param_3 & 4) * 0x40 + (param_3 & 0x10) * 0x20;
  auVar16._8_8_ = in_v0_udw;
  auVar16._0_8_ = 0x41;
  iVar46 = (param_3 & 2) * 0x40 + (param_3 & 8) * 0x20;
  auVar61._8_8_ = in_t6_udw;
  auVar61._0_8_ =
       (long)(int)(uVar64 >> 4) | (long)(int)((uVar64 >> 4) + 0xf) << 0x10 |
       (long)(int)(uVar63 >> 4) << 0x20 | (long)(int)((uVar63 >> 4) + 0xf) << 0x30;
  auVar61 = _pcpyld(auVar16,auVar61);
  uVar48 = (long)(int)uVar47 << 0x25 | 0x2000000000000000;
  FUN_001b0948(param_1 + 0xd360);
  uVar59 = in_s0_qw._8_8_;
  puVar57 = &DAT_00440000;
  FUN_002707d8(0,0x440280,param_2,0,1,0);
  uVar47 = *(uint *)(iVar60 + 0x40);
  uVar14 = *(ulong *)(iVar60 + 0x3c);
  FUN_002b3d88(0xffffffff80000000,0x11c);
  auVar39._8_8_ = in_v1_udw;
  auVar39._0_8_ = 0x1120400000000005;
  auVar17._8_8_ = extraout_v0_udw;
  auVar17._0_8_ = 0xe;
  auVar18 = _pcpyld(auVar17,auVar39);
  *DAT_0040e5f0 = auVar18._0_4_;
  DAT_0040e5f0[1] = auVar18._4_4_;
  DAT_0040e5f0[2] = auVar18._8_4_;
  DAT_0040e5f0[3] = auVar18._12_4_;
  DAT_0040e5f0[4] = auVar62._0_4_;
  DAT_0040e5f0[5] = auVar62._4_4_;
  DAT_0040e5f0[6] = auVar62._8_4_;
  DAT_0040e5f0[7] = auVar62._12_4_;
  DAT_0040e5f0[8] = auVar61._0_4_;
  DAT_0040e5f0[9] = auVar61._4_4_;
  DAT_0040e5f0[10] = auVar61._8_4_;
  DAT_0040e5f0[0xb] = auVar61._12_4_;
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_8_ = 0x19;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = in_v1_udw;
  auVar18 = _pcpyld(auVar19,auVar13 << 0x40);
  DAT_0040e5f0[0xc] = auVar18._0_4_;
  DAT_0040e5f0[0xd] = auVar18._4_4_;
  DAT_0040e5f0[0xe] = auVar18._8_4_;
  DAT_0040e5f0[0xf] = auVar18._12_4_;
  auVar20._8_8_ = auVar18._8_8_;
  auVar20._0_8_ = 0x43;
  auVar1._8_8_ = in_t6_udw;
  auVar1._0_8_ = 0x2a;
  auVar18 = _pcpyld(auVar20,auVar1);
  DAT_0040e5f0[0x10] = auVar18._0_4_;
  DAT_0040e5f0[0x11] = auVar18._4_4_;
  DAT_0040e5f0[0x12] = auVar18._8_4_;
  DAT_0040e5f0[0x13] = auVar18._12_4_;
  auVar21._8_8_ = auVar18._8_8_;
  auVar21._0_8_ = 0x48;
  auVar2._8_8_ = in_t6_udw;
  auVar2._0_8_ = 0x31001;
  auVar18 = _pcpyld(auVar21,auVar2);
  DAT_0040e5f0[0x14] = auVar18._0_4_;
  DAT_0040e5f0[0x15] = auVar18._4_4_;
  DAT_0040e5f0[0x16] = auVar18._8_4_;
  DAT_0040e5f0[0x17] = auVar18._12_4_;
  auVar40._8_8_ = in_v1_udw;
  auVar40._0_8_ = 0x2400000000000100;
  auVar22._8_8_ = auVar18._8_8_;
  auVar22._0_8_ = 0x51;
  auVar23 = _pcpyld(auVar22,auVar40);
  DAT_0040e5f0[0x18] = auVar23._0_4_;
  DAT_0040e5f0[0x19] = auVar23._4_4_;
  DAT_0040e5f0[0x1a] = auVar23._8_4_;
  DAT_0040e5f0[0x1b] = auVar23._12_4_;
  uVar49 = 0;
  puVar15 = DAT_0040e5f0 + 0x1c;
  do {
    puVar56 = puVar15;
    uVar10 = (uint)uVar49;
    auVar24._8_8_ = auVar23._8_8_;
    auVar24._0_8_ =
         (long)(int)(uVar64 + (uVar10 & 7) * 0x10 + (uVar10 & 0x10) * 8) |
         ((long)(int)(uVar63 + (uVar10 & 8) * 2) + (uVar49 & 0xe0)) * 0x10000;
    auVar40._0_8_ = (uVar49 & 0xffffffff) << 0x18 | 0x3f80000000000000;
    auVar18 = _pcpyld(auVar24,auVar40);
    *puVar56 = auVar18._0_4_;
    puVar56[1] = auVar18._4_4_;
    puVar56[2] = auVar18._8_4_;
    puVar56[3] = auVar18._12_4_;
    uVar49 = (ulong)(int)(uVar10 + 1);
    auVar23._8_8_ = auVar18._8_8_;
    auVar23._0_8_ = CONCAT71(0,uVar49 < 0x100);
    puVar15 = puVar56 + 4;
  } while (auVar23._0_8_ != 0);
  auVar25._8_8_ = auVar23._8_8_;
  auVar25._0_8_ = 0x112b40000000000b;
  auVar55._8_8_ = auVar54._8_8_;
  auVar55._0_8_ = 0xe;
  auVar18 = _pcpyld(auVar55,auVar25);
  puVar56[4] = auVar18._0_4_;
  puVar56[5] = auVar18._4_4_;
  puVar56[6] = auVar18._8_4_;
  puVar56[7] = auVar18._12_4_;
  auVar53._8_8_ = in_t2_udw;
  auVar53._0_8_ = 0x3f;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = in_t4_udw;
  auVar18 = _pcpyld(auVar53,auVar11 << 0x40);
  puVar56[8] = auVar18._0_4_;
  puVar56[9] = auVar18._4_4_;
  puVar56[10] = auVar18._8_4_;
  puVar56[0xb] = auVar18._12_4_;
  auVar26._8_8_ = auVar18._8_8_;
  auVar26._0_8_ = 0x4d;
  auVar3._8_8_ = in_t6_udw;
  auVar3._0_8_ = CONCAT44((int)(param_5 >> 0x10),param_3 >> 5 | (uint)(param_5 << 0x10)) |
                 0xffffff00000000;
  auVar18 = _pcpyld(auVar26,auVar3);
  puVar56[0xc] = auVar18._0_4_;
  puVar56[0xd] = auVar18._4_4_;
  puVar56[0xe] = auVar18._8_4_;
  puVar56[0xf] = auVar18._12_4_;
  auVar41._8_8_ = auVar40._8_8_;
  auVar41._0_8_ = 0x41;
  auVar27._8_8_ = auVar18._8_8_;
  auVar4._8_8_ = in_t6_udw;
  auVar4._0_8_ = (long)(*(int *)(iVar60 + 0xc) + -1) << 0x10 |
                 (long)(*(int *)(iVar60 + 0x10) + -1) << 0x30;
  auVar18 = _pcpyld(auVar41,auVar4);
  puVar56[0x10] = auVar18._0_4_;
  puVar56[0x11] = auVar18._4_4_;
  puVar56[0x12] = auVar18._8_4_;
  puVar56[0x13] = auVar18._12_4_;
  auVar52._8_8_ = in_t1_udw;
  auVar52._0_8_ = 7;
  auVar42._8_8_ = auVar18._8_8_;
  auVar27._0_8_ = uVar14 & 0x1fffffffff | uVar48;
  auVar18 = _pcpyld(auVar52,auVar27);
  puVar56[0x14] = auVar18._0_4_;
  puVar56[0x15] = auVar18._4_4_;
  puVar56[0x16] = auVar18._8_4_;
  puVar56[0x17] = auVar18._12_4_;
  auVar28._8_8_ = auVar18._8_8_;
  auVar28._0_8_ = 0x15;
  auVar5._8_8_ = in_t6_udw;
  auVar5._0_8_ = 1;
  auVar18 = _pcpyld(auVar28,auVar5);
  puVar56[0x18] = auVar18._0_4_;
  puVar56[0x19] = auVar18._4_4_;
  puVar56[0x1a] = auVar18._8_4_;
  puVar56[0x1b] = auVar18._12_4_;
  auVar29._8_8_ = auVar18._8_8_;
  auVar29._0_8_ = 9;
  auVar6._8_8_ = in_t6_udw;
  auVar6._0_8_ = 5;
  auVar18 = _pcpyld(auVar29,auVar6);
  puVar56[0x1c] = auVar18._0_4_;
  puVar56[0x1d] = auVar18._4_4_;
  puVar56[0x1e] = auVar18._8_4_;
  puVar56[0x1f] = auVar18._12_4_;
  auVar30._8_8_ = auVar18._8_8_;
  auVar30._0_8_ = 1;
  auVar42._0_8_ = 0x3f80000080808080;
  auVar18 = _pcpyld(auVar30,auVar42);
  puVar56[0x20] = auVar18._0_4_;
  puVar56[0x21] = auVar18._4_4_;
  puVar56[0x22] = auVar18._8_4_;
  puVar56[0x23] = auVar18._12_4_;
  auVar50._8_8_ = in_a3_udw;
  auVar50._0_8_ = 2;
  fVar66 = 0.5 / (float)*(int *)(iVar60 + 0xc);
  fVar65 = 0.5 / (float)*(int *)(iVar60 + 0x10);
  auVar31._8_8_ = auVar18._8_8_;
  auVar31._4_4_ = fVar65;
  auVar31._0_4_ = fVar66;
  auVar18 = _pcpyld(auVar50,auVar31);
  puVar56[0x24] = auVar18._0_4_;
  puVar56[0x25] = auVar18._4_4_;
  puVar56[0x26] = auVar18._8_4_;
  puVar56[0x27] = auVar18._12_4_;
  auVar51._8_8_ = in_t0_udw;
  auVar51._0_8_ = 5;
  auVar32._8_8_ = auVar18._8_8_;
  auVar32._0_8_ = (long)iVar45 | (long)iVar46 << 0x10;
  auVar7._8_8_ = in_t6_udw;
  auVar7._0_8_ = 5;
  auVar18 = _pcpyld(auVar7,auVar32);
  puVar56[0x28] = auVar18._0_4_;
  puVar56[0x29] = auVar18._4_4_;
  puVar56[0x2a] = auVar18._8_4_;
  puVar56[0x2b] = auVar18._12_4_;
  auVar33._8_8_ = auVar18._8_8_;
  auVar33._4_4_ = fVar65 + 1.0;
  auVar33._0_4_ = fVar66 + 1.0;
  auVar18 = _pcpyld(auVar50,auVar33);
  puVar56[0x2c] = auVar18._0_4_;
  puVar56[0x2d] = auVar18._4_4_;
  puVar56[0x2e] = auVar18._8_4_;
  puVar56[0x2f] = auVar18._12_4_;
  auVar34._0_8_ =
       (ulong)(uint)(iVar45 + *(int *)(iVar60 + 0xc) * 0x10) |
       (ulong)(uint)(iVar46 + *(int *)(iVar60 + 0x10) * 0x10) << 0x10;
  auVar34._8_8_ = auVar33._8_8_;
  auVar8._8_8_ = in_t6_udw;
  auVar8._0_8_ = 5;
  auVar18 = _pcpyld(auVar8,auVar34);
  puVar56[0x30] = auVar18._0_4_;
  puVar56[0x31] = auVar18._4_4_;
  puVar56[0x32] = auVar18._8_4_;
  puVar56[0x33] = auVar18._12_4_;
  auVar35._8_8_ = auVar18._8_8_;
  auVar35._0_8_ = 0x11ab400000000008;
  auVar18 = _pcpyld(auVar55,auVar35);
  puVar56[0x34] = auVar18._0_4_;
  puVar56[0x35] = auVar18._4_4_;
  puVar56[0x36] = auVar18._8_4_;
  puVar56[0x37] = auVar18._12_4_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = in_t4_udw;
  auVar18 = _pcpyld(auVar53,auVar12 << 0x40);
  puVar56[0x38] = auVar18._0_4_;
  puVar56[0x39] = auVar18._4_4_;
  puVar56[0x3a] = auVar18._8_4_;
  puVar56[0x3b] = auVar18._12_4_;
  puVar56[0x3c] = auVar62._0_4_;
  puVar56[0x3d] = auVar62._4_4_;
  puVar56[0x3e] = auVar62._8_4_;
  puVar56[0x3f] = auVar62._12_4_;
  puVar56[0x40] = auVar61._0_4_;
  puVar56[0x41] = auVar61._4_4_;
  puVar56[0x42] = auVar61._8_4_;
  puVar56[0x43] = auVar61._12_4_;
  auVar62._4_4_ = 5;
  auVar62._0_4_ = uVar47 >> 5 & 0x3fff | 0x10004000;
  auVar62._8_8_ = in_t6_udw;
  auVar18 = _pcpyld(auVar52,auVar62);
  puVar56[0x44] = auVar18._0_4_;
  puVar56[0x45] = auVar18._4_4_;
  puVar56[0x46] = auVar18._8_4_;
  puVar56[0x47] = auVar18._12_4_;
  auVar43._8_8_ = auVar42._8_8_;
  auVar43._0_8_ = 3;
  auVar36._8_8_ = auVar35._8_8_;
  auVar36._0_8_ = 0x80008;
  auVar18 = _pcpyld(auVar43,auVar36);
  puVar56[0x48] = auVar18._0_4_;
  puVar56[0x49] = auVar18._4_4_;
  puVar56[0x4a] = auVar18._8_4_;
  puVar56[0x4b] = auVar18._12_4_;
  auVar37._8_8_ = auVar18._8_8_;
  auVar37._0_8_ = (long)(int)uVar64 | (long)(int)uVar63 << 0x10;
  auVar18 = _pcpyld(auVar51,auVar37);
  puVar56[0x4c] = auVar18._0_4_;
  puVar56[0x4d] = auVar18._4_4_;
  puVar56[0x4e] = auVar18._8_4_;
  puVar56[0x4f] = auVar18._12_4_;
  auVar38._8_8_ = auVar18._8_8_;
  auVar38._0_8_ = 0x1080108;
  auVar18 = _pcpyld(auVar43,auVar38);
  puVar56[0x50] = auVar18._0_4_;
  puVar56[0x51] = auVar18._4_4_;
  puVar56[0x52] = auVar18._8_4_;
  puVar56[0x53] = auVar18._12_4_;
  auVar44._8_8_ = auVar18._8_8_;
  auVar44._0_8_ = (long)(int)(uVar64 + 0x100) | (long)(int)(uVar63 + 0x100) << 0x10;
  auVar18 = _pcpyld(auVar51,auVar44);
  puVar56[0x54] = auVar18._0_4_;
  puVar56[0x55] = auVar18._4_4_;
  puVar56[0x56] = auVar18._8_4_;
  puVar56[0x57] = auVar18._12_4_;
  DAT_0040e5f0 = puVar56 + 0x58;
  auVar58._8_8_ = uVar59;
  auVar58._0_8_ = 6;
  auVar9._8_8_ = in_t6_udw;
  auVar9._0_8_ = uVar14 & 0x1ffc000000 | (ulong)param_3 | param_5 << 0xe | 0x1b00000 | uVar48;
  auVar18 = _pcpyld(auVar58,auVar9);
  FUN_00270338(puVar57 + 0x280,param_2);
  FUN_002a90e8(*(undefined4 *)(param_1 + 0xd3b8));
  auVar18 = _por(in_zero_qw,auVar18);
  return auVar18._0_8_;
}


// ==== FUN_001c56f0 @ 001c56f0 ====

undefined8 FUN_001c56f0(int param_1,int param_2,uint param_3,ulong param_4)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_zero_qw [16];
  int iVar20;
  undefined8 extraout_v0_udw;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  ulong in_t1_udw;
  uint uVar30;
  undefined1 in_s0_qw [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  
  if (param_4 == 0) {
    iVar29 = *(int *)(param_2 + 0xc) + 0x3f;
    iVar20 = *(int *)(param_2 + 0xc) + 0x7e;
    if (-1 < iVar29) {
      iVar20 = iVar29;
    }
    param_4 = (ulong)(iVar20 >> 6);
  }
  else {
    param_4 = param_4 & 0xffffffff;
  }
  FUN_001b0948(param_1 + 0xd360);
  FUN_002707d8(0,&DAT_00440280,param_2,0,1,0);
  auVar31._8_8_ = in_s0_qw._8_8_;
  auVar31._0_8_ = (long)(int)((param_3 & 1) * 0x80 + (param_3 & 4) * 0x40 + (param_3 & 0x10) * 0x20)
  ;
  uVar33 = (param_3 & 2) * 0x40 + (param_3 & 8) * 0x20;
  FUN_002b3d88(0x80000000,0xd);
  auVar21._8_8_ = extraout_v0_udw;
  auVar21._0_8_ = 0xe;
  auVar6._8_8_ = in_t1_udw;
  auVar6._0_8_ = 0x11ab40000000800c;
  auVar22 = _pcpyld(auVar21,auVar6);
  *DAT_0040e5f0 = auVar22._0_4_;
  DAT_0040e5f0[1] = auVar22._4_4_;
  DAT_0040e5f0[2] = auVar22._8_4_;
  DAT_0040e5f0[3] = auVar22._12_4_;
  auVar22._8_8_ = in_a0_udw;
  auVar22._0_8_ = 0x4d;
  auVar7._8_8_ = in_t1_udw;
  auVar7._0_8_ = (long)(int)(param_3 >> 5) | CONCAT44((int)(param_4 >> 0x10),(int)(param_4 << 0x10))
  ;
  auVar22 = _pcpyld(auVar22,auVar7);
  DAT_0040e5f0[4] = auVar22._0_4_;
  DAT_0040e5f0[5] = auVar22._4_4_;
  DAT_0040e5f0[6] = auVar22._8_4_;
  DAT_0040e5f0[7] = auVar22._12_4_;
  auVar23._8_8_ = auVar22._8_8_;
  auVar23._0_8_ = 0x19;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = in_t1_udw;
  auVar22 = _pcpyld(auVar23,auVar19 << 0x40);
  DAT_0040e5f0[8] = auVar22._0_4_;
  DAT_0040e5f0[9] = auVar22._4_4_;
  DAT_0040e5f0[10] = auVar22._8_4_;
  DAT_0040e5f0[0xb] = auVar22._12_4_;
  uVar30 = auVar31._0_4_;
  iVar20 = (uVar30 >> 4) + *(int *)(param_2 + 0xc) + -1;
  auVar5._8_8_ = in_a3_udw;
  auVar5._0_8_ = 0x41;
  auVar8._8_8_ = in_t1_udw;
  auVar8._0_8_ = (ulong)CONCAT24((short)((uint)iVar20 >> 0x10),
                                 uVar30 >> 4 | (uint)((ulong)((long)iVar20 << 0x20) >> 0x10)) |
                 (ulong)(uVar33 >> 4) << 0x20 |
                 (long)(int)((uVar33 >> 4) + *(int *)(param_2 + 0x10) + -1) << 0x30;
  auVar22 = _pcpyld(auVar5,auVar8);
  DAT_0040e5f0[0xc] = auVar22._0_4_;
  DAT_0040e5f0[0xd] = auVar22._4_4_;
  DAT_0040e5f0[0xe] = auVar22._8_4_;
  DAT_0040e5f0[0xf] = auVar22._12_4_;
  auVar24._8_8_ = auVar22._8_8_;
  auVar24._0_8_ = 0x48;
  auVar9._8_8_ = in_t1_udw;
  auVar9._0_8_ = 0x31001;
  auVar22 = _pcpyld(auVar24,auVar9);
  DAT_0040e5f0[0x10] = auVar22._0_4_;
  DAT_0040e5f0[0x11] = auVar22._4_4_;
  DAT_0040e5f0[0x12] = auVar22._8_4_;
  DAT_0040e5f0[0x13] = auVar22._12_4_;
  auVar25._8_8_ = auVar22._8_8_;
  auVar25._0_8_ = 0x15;
  auVar10._8_8_ = in_t1_udw;
  auVar10._0_8_ = 1;
  auVar22 = _pcpyld(auVar25,auVar10);
  DAT_0040e5f0[0x14] = auVar22._0_4_;
  DAT_0040e5f0[0x15] = auVar22._4_4_;
  DAT_0040e5f0[0x16] = auVar22._8_4_;
  DAT_0040e5f0[0x17] = auVar22._12_4_;
  auVar26._8_8_ = auVar22._8_8_;
  auVar26._0_8_ = 9;
  auVar11._8_8_ = in_t1_udw;
  auVar11._0_8_ = 5;
  auVar22 = _pcpyld(auVar26,auVar11);
  DAT_0040e5f0[0x18] = auVar22._0_4_;
  DAT_0040e5f0[0x19] = auVar22._4_4_;
  DAT_0040e5f0[0x1a] = auVar22._8_4_;
  DAT_0040e5f0[0x1b] = auVar22._12_4_;
  auVar27._8_8_ = auVar22._8_8_;
  auVar27._0_8_ = 0x43;
  auVar12._8_8_ = in_t1_udw;
  auVar12._0_8_ = 0x2a;
  auVar22 = _pcpyld(auVar27,auVar12);
  DAT_0040e5f0[0x1c] = auVar22._0_4_;
  DAT_0040e5f0[0x1d] = auVar22._4_4_;
  DAT_0040e5f0[0x1e] = auVar22._8_4_;
  DAT_0040e5f0[0x1f] = auVar22._12_4_;
  auVar28._8_8_ = auVar22._8_8_;
  auVar28._0_8_ = 1;
  auVar13._8_8_ = in_t1_udw;
  auVar13._0_8_ = 0x3f80000080808080;
  auVar22 = _pcpyld(auVar28,auVar13);
  DAT_0040e5f0[0x20] = auVar22._0_4_;
  DAT_0040e5f0[0x21] = auVar22._4_4_;
  DAT_0040e5f0[0x22] = auVar22._8_4_;
  DAT_0040e5f0[0x23] = auVar22._12_4_;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 3;
  auVar14._8_8_ = in_t1_udw;
  auVar14._0_8_ = 0x80008;
  auVar22 = _pcpyld(auVar1,auVar14);
  DAT_0040e5f0[0x24] = auVar22._0_4_;
  DAT_0040e5f0[0x25] = auVar22._4_4_;
  DAT_0040e5f0[0x26] = auVar22._8_4_;
  DAT_0040e5f0[0x27] = auVar22._12_4_;
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = 5;
  auVar15._4_4_ = auVar31._4_4_;
  auVar15._0_4_ = uVar30 | uVar33 * 0x10000;
  auVar15._8_8_ = in_t1_udw;
  auVar22 = _pcpyld(auVar3,auVar15);
  DAT_0040e5f0[0x28] = auVar22._0_4_;
  DAT_0040e5f0[0x29] = auVar22._4_4_;
  DAT_0040e5f0[0x2a] = auVar22._8_4_;
  DAT_0040e5f0[0x2b] = auVar22._12_4_;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 3;
  auVar16._8_8_ = in_t1_udw;
  auVar16._0_8_ =
       (long)(*(int *)(param_2 + 0xc) * 0x10 + 8) |
       (long)(*(int *)(param_2 + 0x10) * 0x10 + 8) << 0x10;
  auVar22 = _pcpyld(auVar2,auVar16);
  DAT_0040e5f0[0x2c] = auVar22._0_4_;
  DAT_0040e5f0[0x2d] = auVar22._4_4_;
  DAT_0040e5f0[0x2e] = auVar22._8_4_;
  DAT_0040e5f0[0x2f] = auVar22._12_4_;
  auVar32._8_8_ = auVar31._8_8_;
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = 5;
  auVar17._8_8_ = in_t1_udw;
  auVar17._0_8_ =
       (ulong)(uVar30 + *(int *)(param_2 + 0xc) * 0x10) |
       (ulong)(uVar33 + *(int *)(param_2 + 0x10) * 0x10) << 0x10;
  auVar22 = _pcpyld(auVar4,auVar17);
  DAT_0040e5f0[0x30] = auVar22._0_4_;
  DAT_0040e5f0[0x31] = auVar22._4_4_;
  DAT_0040e5f0[0x32] = auVar22._8_4_;
  DAT_0040e5f0[0x33] = auVar22._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x34;
  auVar32._0_8_ = 6;
  auVar18._8_8_ = in_t1_udw;
  auVar18._0_8_ = *(ulong *)(param_2 + 0x3c) & 0x1ffc000000 | (ulong)param_3 | param_4 << 0xe;
  auVar22 = _pcpyld(auVar32,auVar18);
  FUN_00270338(&DAT_00440280,param_2);
  FUN_002a90e8(*(undefined4 *)(param_1 + 0xd3b8));
  auVar22 = _por(in_zero_qw,auVar22);
  return auVar22._0_8_;
}


// ==== FUN_001c59f8 @ 001c59f8 ====

void FUN_001c59f8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 auStack_50 [4];
  
  lVar1 = FUN_002a9cb8(0,1,0x100);
  if ((lVar1 != 0) && (lVar1 = FUN_0028ee98(), lVar1 != 0)) {
    auStack_50[0] = 0;
    lVar1 = FUN_002a9b70(auStack_50);
    if (lVar1 == 0) {
      FUN_002a9e38();
    }
    else {
      FUN_002bff70(1);
      FUN_002bff10(1);
      uVar2 = FUN_002bfec0();
      FUN_001c5d08(param_1,uVar2);
      FUN_002a98a8(0xffffffffffffffff);
      uVar3 = FUN_00107c80(0x40f0f0,0x12);
      iVar4 = (int)param_1;
      *(undefined4 *)(iVar4 + 0xd5a4) = uVar3;
      uVar2 = FUN_00107b98(0x40f0f0,0x12);
      FUN_002b4fb0(uVar2,0x200,*(undefined4 *)(iVar4 + 0xd5a4));
      FUN_002b4dc8(0x1c4d00);
      uVar3 = FUN_00107b98(0x40f0f0,0x12);
      *(undefined4 *)(iVar4 + 0xd5f4) = uVar3;
      FUN_002ce0b8(1);
      lVar1 = FUN_002a99d8();
      if (lVar1 == 0) {
        FUN_002a9ae8();
        FUN_002a9e38();
      }
      else {
        FUN_002b4dd0(2);
        DAT_003bd1f4 = AddIntcHandler(2,0x1c49c0,0);
      }
    }
  }
  return;
}


// ==== FUN_001c5b48 @ 001c5b48 ====

void FUN_001c5b48(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0xd544) != param_2) {
    *(int *)(iVar4 + 0xd544) = param_2;
    FUN_001ae8f0();
    FUN_002cdf70();
    FUN_002ce010();
    if (DAT_003bd1f4 != -1) {
      RemoveIntcHandler(2);
      DAT_003bd1f4 = -1;
    }
    iVar3 = 1;
    (*DAT_0044944c)(0x12,0,0,0);
    (*DAT_0044944c)(3,0,0,0);
    uVar2 = FUN_002bfec0();
    FUN_001c5d08(param_1,uVar2);
    FUN_002a98a8(0xffffffffffffffff);
    do {
      iVar3 = iVar3 + -1;
      FUN_0029b2c8(0);
    } while (-1 < iVar3);
    FUN_002ce0b8(1);
    uVar2 = FUN_00107b98(0x40f0f0,0x12);
    FUN_002b4fb0(uVar2,0x200,*(undefined4 *)(iVar4 + 0xd5a4));
    FUN_002b4dc8(0x1c4d00);
    uVar1 = FUN_00107b98(0x40f0f0,0x12);
    *(undefined4 *)(iVar4 + 0xd5f0) = uVar1;
    (*DAT_0044944c)(2,0,0,0);
    (*DAT_0044944c)(0x11,0,0,0);
    DAT_003bd1f4 = AddIntcHandler(2,0x1c49c0,0);
    FUN_001ae860(param_1);
    FUN_001ae9f8(param_1);
    FUN_001c5eb8(param_1);
    FUN_001d4d00();
    FUN_001c6608(iVar4 + 0xd170);
  }
  return;
}


// ==== FUN_001c5d08 @ 001c5d08 ====

void FUN_001c5d08(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar2 = 2;
  if (DAT_0040ead8 == '\0') {
    uVar2 = 0;
  }
  if (DAT_0040eae8 != '\0') {
    uVar2 = 1;
  }
  uVar4 = 0;
  uVar3 = 0;
  if (uVar2 == 1) {
    param_1[0x356a] = 8;
    param_1[0x356b] = 0;
    param_1[1] = 0x1c0;
    param_1[2] = 0x20;
    *param_1 = 0x280;
    uVar4 = 1;
    param_1[0x356e] = 0x10;
    uVar3 = 0x50;
    param_1[0x356c] = 0x280;
    param_1[0x356d] = 0x1e0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar1 = *param_1;
      goto LAB_001c5e4c;
    }
    param_1[0x356b] = 8;
    param_1[0x356a] = 8;
    param_1[2] = 0x20;
    *param_1 = 0x280;
    uVar4 = 0x303;
    param_1[1] = 0x1c0;
    uVar3 = 2;
    param_1[0x356e] = 0x10;
    param_1[0x356c] = 0x280;
    param_1[0x356d] = 0x1c0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
    if (uVar2 != 2) {
      uVar1 = *param_1;
      goto LAB_001c5e4c;
    }
    param_1[0x356b] = 8;
    param_1[0x356a] = 8;
    param_1[2] = 0x20;
    *param_1 = 0x280;
    uVar4 = 0x303;
    param_1[1] = 0x200;
    uVar3 = 3;
    param_1[0x356e] = 0x10;
    param_1[0x356c] = 0x280;
    param_1[0x356d] = 0x200;
    *(undefined1 *)((int)param_1 + 0xd) = 1;
  }
  uVar1 = *param_1;
LAB_001c5e4c:
  *param_2 = uVar1;
  param_2[1] = param_1[1];
  uVar1 = param_1[2];
  param_2[5] = 0x500;
  param_2[2] = uVar1;
  param_2[3] = 0;
  param_2[6] = param_1[0x356c];
  param_2[7] = param_1[0x356d];
  uVar1 = param_1[0x356e];
  param_2[9] = uVar4;
  param_2[8] = uVar1;
  param_2[0xb] = 0x100;
  *(undefined1 *)((int)param_2 + 0x31) = 1;
  *(undefined1 *)((int)param_2 + 0x32) = uVar3;
  *(undefined1 *)((int)param_2 + 0x33) = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  param_1[0x3551] = uVar2;
  return;
}


// ==== FUN_001c5eb8 @ 001c5eb8 ====

void FUN_001c5eb8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_002ce140();
  *(uint *)(param_1 + 0xd5e4) = (uint)uVar1 >> 6;
  *(uint *)(param_1 + 0xd5e0) = (uint)uVar1;
  FUN_001c8e30(param_1 + 0xd258,0xa0,0x80,0,uVar1);
  iVar2 = *(int *)(param_1 + 0xd5e0) + 0x6800;
  *(int *)(param_1 + 0xd5ec) = iVar2;
  *(int *)(param_1 + 0xd5e8) = *(int *)(param_1 + 0xd5e0) + 0x6000;
  FUN_002cdd70(iVar2);
  FUN_00270228(0x440280,*(undefined4 *)(param_1 + 0xd5ec),0x3e,0x200);
  return;
}


// ==== FUN_001c5f48 @ 001c5f48 ====

void FUN_001c5f48(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_v1_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  
  FUN_002b3d88(0x80000000,6);
  auVar8._8_8_ = in_v1_udw;
  auVar8._0_8_ = 0xe;
  auVar9._8_8_ = in_a0_udw;
  auVar9._0_8_ = 0x1000000000008005;
  auVar9 = _pcpyld(auVar8,auVar9);
  *DAT_0040e5f0 = auVar9._0_4_;
  DAT_0040e5f0[1] = auVar9._4_4_;
  DAT_0040e5f0[2] = auVar9._8_4_;
  DAT_0040e5f0[3] = auVar9._12_4_;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0xd5c0);
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = 0x4c;
  auVar9 = _pcpyld(auVar6,auVar1);
  DAT_0040e5f0[4] = auVar9._0_4_;
  DAT_0040e5f0[5] = auVar9._4_4_;
  DAT_0040e5f0[6] = auVar9._8_4_;
  DAT_0040e5f0[7] = auVar9._12_4_;
  auVar10._8_8_ = auVar9._8_8_;
  auVar10._0_8_ = *(undefined8 *)(param_1 + 0xd5d0);
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 0x18;
  auVar9 = _pcpyld(auVar2,auVar10);
  DAT_0040e5f0[8] = auVar9._0_4_;
  DAT_0040e5f0[9] = auVar9._4_4_;
  DAT_0040e5f0[10] = auVar9._8_4_;
  DAT_0040e5f0[0xb] = auVar9._12_4_;
  auVar11._8_8_ = auVar9._8_8_;
  auVar11._0_8_ = *(undefined8 *)(param_1 + 0xd5c8);
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 0x4e;
  auVar9 = _pcpyld(auVar3,auVar11);
  DAT_0040e5f0[0xc] = auVar9._0_4_;
  DAT_0040e5f0[0xd] = auVar9._4_4_;
  DAT_0040e5f0[0xe] = auVar9._8_4_;
  DAT_0040e5f0[0xf] = auVar9._12_4_;
  auVar12._8_8_ = auVar9._8_8_;
  auVar12._0_8_ = *(undefined8 *)(param_1 + 0xd5d8);
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = 0x40;
  auVar9 = _pcpyld(auVar4,auVar12);
  DAT_0040e5f0[0x10] = auVar9._0_4_;
  DAT_0040e5f0[0x11] = auVar9._4_4_;
  DAT_0040e5f0[0x12] = auVar9._8_4_;
  DAT_0040e5f0[0x13] = auVar9._12_4_;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = DAT_0040dfd8;
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = 0x47;
  auVar9 = _pcpyld(auVar7,auVar5);
  DAT_0040e5f0[0x14] = auVar9._0_4_;
  DAT_0040e5f0[0x15] = auVar9._4_4_;
  DAT_0040e5f0[0x16] = auVar9._8_4_;
  DAT_0040e5f0[0x17] = auVar9._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x18;
  return;
}


// ==== FUN_001c6010 @ 001c6010 ====

void FUN_001c6010(int param_1)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  ulong in_a2_udw;
  
  FUN_002b3d88(0x80000000,0x21);
  auVar33._8_8_ = extraout_v0_udw;
  auVar33._0_8_ = 0xe;
  auVar34._8_8_ = in_a0_udw;
  auVar34._0_8_ = 0x1000000000008020;
  auVar34 = _pcpyld(auVar33,auVar34);
  *DAT_0040e5f0 = auVar34._0_4_;
  DAT_0040e5f0[1] = auVar34._4_4_;
  DAT_0040e5f0[2] = auVar34._8_4_;
  DAT_0040e5f0[3] = auVar34._12_4_;
  auVar35._8_8_ = auVar34._8_8_;
  auVar35._0_8_ = 0x42;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x80000000a8;
  auVar34 = _pcpyld(auVar35,auVar1);
  DAT_0040e5f0[4] = auVar34._0_4_;
  DAT_0040e5f0[5] = auVar34._4_4_;
  DAT_0040e5f0[6] = auVar34._8_4_;
  DAT_0040e5f0[7] = auVar34._12_4_;
  auVar36._8_8_ = auVar34._8_8_;
  auVar36._0_8_ = 0x43;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 0x80000000a8;
  auVar34 = _pcpyld(auVar36,auVar2);
  DAT_0040e5f0[8] = auVar34._0_4_;
  DAT_0040e5f0[9] = auVar34._4_4_;
  DAT_0040e5f0[10] = auVar34._8_4_;
  DAT_0040e5f0[0xb] = auVar34._12_4_;
  auVar37._8_8_ = auVar34._8_8_;
  auVar37._0_8_ = 0x50;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar37,auVar13 << 0x40);
  DAT_0040e5f0[0xc] = auVar34._0_4_;
  DAT_0040e5f0[0xd] = auVar34._4_4_;
  DAT_0040e5f0[0xe] = auVar34._8_4_;
  DAT_0040e5f0[0xf] = auVar34._12_4_;
  auVar38._8_8_ = auVar34._8_8_;
  auVar38._0_8_ = 8;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar38,auVar14 << 0x40);
  DAT_0040e5f0[0x10] = auVar34._0_4_;
  DAT_0040e5f0[0x11] = auVar34._4_4_;
  DAT_0040e5f0[0x12] = auVar34._8_4_;
  DAT_0040e5f0[0x13] = auVar34._12_4_;
  auVar39._8_8_ = auVar34._8_8_;
  auVar39._0_8_ = 0x46;
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 1;
  auVar34 = _pcpyld(auVar39,auVar3);
  DAT_0040e5f0[0x14] = auVar34._0_4_;
  DAT_0040e5f0[0x15] = auVar34._4_4_;
  DAT_0040e5f0[0x16] = auVar34._8_4_;
  DAT_0040e5f0[0x17] = auVar34._12_4_;
  auVar40._8_8_ = auVar34._8_8_;
  auVar40._0_8_ = 0x44;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar40,auVar15 << 0x40);
  DAT_0040e5f0[0x18] = auVar34._0_4_;
  DAT_0040e5f0[0x19] = auVar34._4_4_;
  DAT_0040e5f0[0x1a] = auVar34._8_4_;
  DAT_0040e5f0[0x1b] = auVar34._12_4_;
  auVar41._8_8_ = auVar34._8_8_;
  auVar41._0_8_ = 0x4a;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar41,auVar16 << 0x40);
  DAT_0040e5f0[0x1c] = auVar34._0_4_;
  DAT_0040e5f0[0x1d] = auVar34._4_4_;
  DAT_0040e5f0[0x1e] = auVar34._8_4_;
  DAT_0040e5f0[0x1f] = auVar34._12_4_;
  auVar42._8_8_ = auVar34._8_8_;
  auVar42._0_8_ = 0x4b;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar42,auVar17 << 0x40);
  DAT_0040e5f0[0x20] = auVar34._0_4_;
  DAT_0040e5f0[0x21] = auVar34._4_4_;
  DAT_0040e5f0[0x22] = auVar34._8_4_;
  DAT_0040e5f0[0x23] = auVar34._12_4_;
  auVar43._8_8_ = auVar34._8_8_;
  auVar43._0_8_ = 10;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar43,auVar18 << 0x40);
  DAT_0040e5f0[0x24] = auVar34._0_4_;
  DAT_0040e5f0[0x25] = auVar34._4_4_;
  DAT_0040e5f0[0x26] = auVar34._8_4_;
  DAT_0040e5f0[0x27] = auVar34._12_4_;
  auVar44._8_8_ = auVar34._8_8_;
  auVar44._0_8_ = 0x3d;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar44,auVar19 << 0x40);
  DAT_0040e5f0[0x28] = auVar34._0_4_;
  DAT_0040e5f0[0x29] = auVar34._4_4_;
  DAT_0040e5f0[0x2a] = auVar34._8_4_;
  DAT_0040e5f0[0x2b] = auVar34._12_4_;
  auVar45._8_8_ = auVar34._8_8_;
  auVar45._0_8_ = 0x4c;
  auVar12._8_8_ = in_a1_udw;
  auVar12._0_8_ = *(undefined8 *)(param_1 + 0xd5c0);
  auVar34 = _pcpyld(auVar45,auVar12);
  DAT_0040e5f0[0x2c] = auVar34._0_4_;
  DAT_0040e5f0[0x2d] = auVar34._4_4_;
  DAT_0040e5f0[0x2e] = auVar34._8_4_;
  DAT_0040e5f0[0x2f] = auVar34._12_4_;
  auVar46._8_8_ = auVar34._8_8_;
  auVar46._0_8_ = 0x34;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar46,auVar20 << 0x40);
  DAT_0040e5f0[0x30] = auVar34._0_4_;
  DAT_0040e5f0[0x31] = auVar34._4_4_;
  DAT_0040e5f0[0x32] = auVar34._8_4_;
  DAT_0040e5f0[0x33] = auVar34._12_4_;
  auVar47._8_8_ = auVar34._8_8_;
  auVar47._0_8_ = 0x35;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar47,auVar21 << 0x40);
  DAT_0040e5f0[0x34] = auVar34._0_4_;
  DAT_0040e5f0[0x35] = auVar34._4_4_;
  DAT_0040e5f0[0x36] = auVar34._8_4_;
  DAT_0040e5f0[0x37] = auVar34._12_4_;
  auVar48._8_8_ = auVar34._8_8_;
  auVar48._0_8_ = 0x36;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar48,auVar22 << 0x40);
  DAT_0040e5f0[0x38] = auVar34._0_4_;
  DAT_0040e5f0[0x39] = auVar34._4_4_;
  DAT_0040e5f0[0x3a] = auVar34._8_4_;
  DAT_0040e5f0[0x3b] = auVar34._12_4_;
  auVar49._8_8_ = auVar34._8_8_;
  auVar49._0_8_ = 0x37;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar49,auVar23 << 0x40);
  DAT_0040e5f0[0x3c] = auVar34._0_4_;
  DAT_0040e5f0[0x3d] = auVar34._4_4_;
  DAT_0040e5f0[0x3e] = auVar34._8_4_;
  DAT_0040e5f0[0x3f] = auVar34._12_4_;
  auVar50._8_8_ = auVar34._8_8_;
  auVar50._0_8_ = 0x49;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar50,auVar24 << 0x40);
  DAT_0040e5f0[0x40] = auVar34._0_4_;
  DAT_0040e5f0[0x41] = auVar34._4_4_;
  DAT_0040e5f0[0x42] = auVar34._8_4_;
  DAT_0040e5f0[0x43] = auVar34._12_4_;
  auVar51._8_8_ = auVar34._8_8_;
  auVar51._0_8_ = 0x40;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = *(undefined8 *)(param_1 + 0xd5d8);
  auVar34 = _pcpyld(auVar51,auVar4);
  DAT_0040e5f0[0x44] = auVar34._0_4_;
  DAT_0040e5f0[0x45] = auVar34._4_4_;
  DAT_0040e5f0[0x46] = auVar34._8_4_;
  DAT_0040e5f0[0x47] = auVar34._12_4_;
  auVar52._8_8_ = auVar34._8_8_;
  auVar52._0_8_ = 0x41;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = *(undefined8 *)(param_1 + 0xd5d8);
  auVar34 = _pcpyld(auVar52,auVar5);
  DAT_0040e5f0[0x48] = auVar34._0_4_;
  DAT_0040e5f0[0x49] = auVar34._4_4_;
  DAT_0040e5f0[0x4a] = auVar34._8_4_;
  DAT_0040e5f0[0x4b] = auVar34._12_4_;
  auVar53._8_8_ = auVar34._8_8_;
  auVar53._0_8_ = 0x47;
  auVar6._8_8_ = in_a0_udw;
  auVar6._0_8_ = 0x50000;
  auVar34 = _pcpyld(auVar53,auVar6);
  DAT_0040e5f0[0x4c] = auVar34._0_4_;
  DAT_0040e5f0[0x4d] = auVar34._4_4_;
  DAT_0040e5f0[0x4e] = auVar34._8_4_;
  DAT_0040e5f0[0x4f] = auVar34._12_4_;
  auVar54._8_8_ = auVar34._8_8_;
  auVar54._0_8_ = 0x48;
  auVar7._8_8_ = in_a0_udw;
  auVar7._0_8_ = 0x50000;
  auVar34 = _pcpyld(auVar54,auVar7);
  DAT_0040e5f0[0x50] = auVar34._0_4_;
  DAT_0040e5f0[0x51] = auVar34._4_4_;
  DAT_0040e5f0[0x52] = auVar34._8_4_;
  DAT_0040e5f0[0x53] = auVar34._12_4_;
  auVar55._8_8_ = auVar34._8_8_;
  auVar55._0_8_ = 6;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar55,auVar25 << 0x40);
  DAT_0040e5f0[0x54] = auVar34._0_4_;
  DAT_0040e5f0[0x55] = auVar34._4_4_;
  DAT_0040e5f0[0x56] = auVar34._8_4_;
  DAT_0040e5f0[0x57] = auVar34._12_4_;
  auVar56._8_8_ = auVar34._8_8_;
  auVar56._0_8_ = 7;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar56,auVar26 << 0x40);
  DAT_0040e5f0[0x58] = auVar34._0_4_;
  DAT_0040e5f0[0x59] = auVar34._4_4_;
  DAT_0040e5f0[0x5a] = auVar34._8_4_;
  DAT_0040e5f0[0x5b] = auVar34._12_4_;
  auVar57._8_8_ = auVar34._8_8_;
  auVar57._0_8_ = 0x14;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar57,auVar27 << 0x40);
  DAT_0040e5f0[0x5c] = auVar34._0_4_;
  DAT_0040e5f0[0x5d] = auVar34._4_4_;
  DAT_0040e5f0[0x5e] = auVar34._8_4_;
  DAT_0040e5f0[0x5f] = auVar34._12_4_;
  auVar58._8_8_ = auVar34._8_8_;
  auVar58._0_8_ = 0x15;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar58,auVar28 << 0x40);
  DAT_0040e5f0[0x60] = auVar34._0_4_;
  DAT_0040e5f0[0x61] = auVar34._4_4_;
  DAT_0040e5f0[0x62] = auVar34._8_4_;
  DAT_0040e5f0[99] = auVar34._12_4_;
  auVar59._8_8_ = auVar34._8_8_;
  auVar59._0_8_ = 0x16;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar59,auVar29 << 0x40);
  DAT_0040e5f0[100] = auVar34._0_4_;
  DAT_0040e5f0[0x65] = auVar34._4_4_;
  DAT_0040e5f0[0x66] = auVar34._8_4_;
  DAT_0040e5f0[0x67] = auVar34._12_4_;
  auVar60._8_8_ = auVar34._8_8_;
  auVar60._0_8_ = 0x17;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar60,auVar30 << 0x40);
  DAT_0040e5f0[0x68] = auVar34._0_4_;
  DAT_0040e5f0[0x69] = auVar34._4_4_;
  DAT_0040e5f0[0x6a] = auVar34._8_4_;
  DAT_0040e5f0[0x6b] = auVar34._12_4_;
  auVar61._8_8_ = auVar34._8_8_;
  auVar61._0_8_ = 0x3b;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar61,auVar31 << 0x40);
  DAT_0040e5f0[0x6c] = auVar34._0_4_;
  DAT_0040e5f0[0x6d] = auVar34._4_4_;
  DAT_0040e5f0[0x6e] = auVar34._8_4_;
  DAT_0040e5f0[0x6f] = auVar34._12_4_;
  auVar62._8_8_ = auVar34._8_8_;
  auVar62._0_8_ = 0x1c;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = in_a2_udw;
  auVar34 = _pcpyld(auVar62,auVar32 << 0x40);
  DAT_0040e5f0[0x70] = auVar34._0_4_;
  DAT_0040e5f0[0x71] = auVar34._4_4_;
  DAT_0040e5f0[0x72] = auVar34._8_4_;
  DAT_0040e5f0[0x73] = auVar34._12_4_;
  auVar63._8_8_ = auVar34._8_8_;
  auVar63._0_8_ = 0x18;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = *(undefined8 *)(param_1 + 0xd5d0);
  auVar34 = _pcpyld(auVar63,auVar8);
  DAT_0040e5f0[0x74] = auVar34._0_4_;
  DAT_0040e5f0[0x75] = auVar34._4_4_;
  DAT_0040e5f0[0x76] = auVar34._8_4_;
  DAT_0040e5f0[0x77] = auVar34._12_4_;
  auVar64._8_8_ = auVar34._8_8_;
  auVar64._0_8_ = 0x19;
  auVar9._8_8_ = in_a0_udw;
  auVar9._0_8_ = *(undefined8 *)(param_1 + 0xd5d0);
  auVar34 = _pcpyld(auVar64,auVar9);
  DAT_0040e5f0[0x78] = auVar34._0_4_;
  DAT_0040e5f0[0x79] = auVar34._4_4_;
  DAT_0040e5f0[0x7a] = auVar34._8_4_;
  DAT_0040e5f0[0x7b] = auVar34._12_4_;
  auVar65._8_8_ = auVar34._8_8_;
  auVar65._0_8_ = 0x4e;
  auVar10._8_8_ = in_a0_udw;
  auVar10._0_8_ = *(undefined8 *)(param_1 + 0xd5c8);
  auVar34 = _pcpyld(auVar65,auVar10);
  DAT_0040e5f0[0x7c] = auVar34._0_4_;
  DAT_0040e5f0[0x7d] = auVar34._4_4_;
  DAT_0040e5f0[0x7e] = auVar34._8_4_;
  DAT_0040e5f0[0x7f] = auVar34._12_4_;
  auVar66._8_8_ = auVar34._8_8_;
  auVar66._0_8_ = 0x4f;
  auVar11._8_8_ = in_a0_udw;
  auVar11._0_8_ = *(undefined8 *)(param_1 + 0xd5c8);
  auVar34 = _pcpyld(auVar66,auVar11);
  DAT_0040e5f0[0x80] = auVar34._0_4_;
  DAT_0040e5f0[0x81] = auVar34._4_4_;
  DAT_0040e5f0[0x82] = auVar34._8_4_;
  DAT_0040e5f0[0x83] = auVar34._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x84;
  return;
}


// ==== FUN_001c62a8 @ 001c62a8 ====

void FUN_001c62a8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  return;
}


// ==== FUN_001c62d8 @ 001c62d8 ====

int FUN_001c62d8(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x30;
}


// ==== FUN_001c62f0 @ 001c62f0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c62f0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,long param_7)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 extraout_v0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  ulong in_a0_udw;
  int iVar14;
  int iVar15;
  
  piVar1 = *(int **)(DAT_0040f4c0 + 0xcf84 + *(char *)param_3 * 4);
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18));
  (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),param_3,param_2);
  uVar13 = 0;
  if ((param_6 == 0) && (uVar13 = 10, param_7 != 0)) {
    uVar13 = 2;
  }
  iVar14 = 0;
  if (0 < param_1[1]) {
    iVar15 = 0;
    do {
      iVar2 = *param_1;
      FUN_002b3d88(0,2);
      auVar9._0_8_ = (long)*(int *)(iVar2 + iVar15 + 0x20) << 0x20 | 0x50000000;
      auVar9._8_8_ = extraout_v0_udw;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = in_a0_udw;
      auVar10 = _pcpyld(auVar4 << 0x40,auVar9);
      *DAT_0040e5f0 = auVar10._0_4_;
      DAT_0040e5f0[1] = auVar10._4_4_;
      DAT_0040e5f0[2] = auVar10._8_4_;
      DAT_0040e5f0[3] = auVar10._12_4_;
      uVar7 = DAT_003bd20c;
      uVar6 = DAT_003bd208;
      uVar5 = DAT_003bd204;
      DAT_0040e5f0[4] = DAT_003bd200;
      DAT_0040e5f0[5] = uVar5;
      DAT_0040e5f0[6] = uVar6;
      DAT_0040e5f0[7] = uVar7;
      DAT_0040e5f0 = DAT_0040e5f0 + 8;
      (**(code **)(*piVar1 + 0x14))
                ((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_4,iVar14,param_5);
      FUN_002b3d88(0,3);
      auVar10 = _DAT_003bd210;
      *DAT_0040e5f0 = DAT_003bd210;
      DAT_0040e5f0[1] = auVar10._4_4_;
      DAT_0040e5f0[2] = auVar10._8_4_;
      DAT_0040e5f0[3] = auVar10._12_4_;
      auVar11._8_8_ = auVar10._8_8_;
      auVar11._0_8_ = (ulong)uVar13 | 0x100000000;
      auVar10._8_8_ = in_a0_udw;
      auVar10._0_8_ = 0x100000000;
      auVar10 = _pcpyld(auVar10,auVar11);
      DAT_0040e5f0[4] = auVar10._0_4_;
      DAT_0040e5f0[5] = auVar10._4_4_;
      DAT_0040e5f0[6] = auVar10._8_4_;
      DAT_0040e5f0[7] = auVar10._12_4_;
      uVar7 = DAT_003bd22c;
      uVar6 = DAT_003bd228;
      uVar5 = DAT_003bd224;
      auVar12._8_8_ = auVar10._8_8_;
      lVar8 = (long)*(int *)(iVar2 + iVar15 + 0x24);
      if (lVar8 == 0) {
        DAT_0040e5f0[8] = DAT_003bd220;
        DAT_0040e5f0[9] = uVar5;
        DAT_0040e5f0[10] = uVar6;
        DAT_0040e5f0[0xb] = uVar7;
      }
      else {
        auVar12._0_8_ = lVar8 << 0x20 | 0x50000000;
        auVar3._8_8_ = in_a0_udw;
        auVar3._0_8_ = 0x17000000;
        auVar10 = _pcpyld(auVar3,auVar12);
        DAT_0040e5f0[8] = auVar10._0_4_;
        DAT_0040e5f0[9] = auVar10._4_4_;
        DAT_0040e5f0[10] = auVar10._8_4_;
        DAT_0040e5f0[0xb] = auVar10._12_4_;
      }
      DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 0x30;
    } while (iVar14 < param_1[1]);
  }
  return;
}


// ==== FUN_001c64e8 @ 001c64e8 ====

void FUN_001c64e8(int *param_1)

{
  undefined1 auVar1 [16];
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_t0_udw;
  int iVar7;
  int iVar8;
  
  if (0 < param_1[1]) {
    if (*param_1 != 0) {
      *param_1 = *param_1 + (int)param_1;
    }
    iVar7 = 0;
    if (0 < param_1[1]) {
      iVar8 = 0;
      do {
        iVar7 = iVar7 + 1;
        FUN_001c62a8(*param_1 + iVar8);
        iVar8 = iVar8 + 0x30;
        in_v0_udw = extraout_v0_udw;
      } while (iVar7 < param_1[1]);
    }
  }
  auVar5._8_8_ = in_v0_udw;
  auVar5._0_8_ = 0x10000000;
  auVar6 = _pcpyld(auVar5,auVar5);
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x10000001;
  auVar4._8_8_ = in_t0_udw;
  auVar4._0_8_ = 0x6c0103f501000404;
  auVar5 = _pcpyld(auVar4,auVar2);
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 0x10000000;
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = 0x17000000;
  auVar4 = _pcpyld(auVar1,auVar3);
  DAT_003bd200 = auVar6._0_4_;
  DAT_003bd204 = auVar6._4_4_;
  DAT_003bd208 = auVar6._8_4_;
  DAT_003bd20c = auVar6._12_4_;
  DAT_003bd210 = auVar5._0_4_;
  DAT_003bd214 = auVar5._4_4_;
  DAT_003bd218 = auVar5._8_4_;
  DAT_003bd21c = auVar5._12_4_;
  DAT_003bd220 = auVar4._0_4_;
  DAT_003bd224 = auVar4._4_4_;
  DAT_003bd228 = auVar4._8_4_;
  DAT_003bd22c = auVar4._12_4_;
  return;
}


// ==== FUN_001c65e8 @ 001c65e8 ====

void FUN_001c65e8(void)

{
  FUN_001afde0();
  return;
}


// ==== FUN_001c6608 @ 001c6608 ====

undefined4 FUN_001c6608(int param_1)

{
  FUN_001afe38();
  FUN_001c6f10(param_1 + 0x70,*(uint *)(DAT_0040f4c0 + 0xd5e0) >> 0xb,0,0xc);
  return 1;
}


// ==== FUN_001c6668 @ 001c6668 ====

void FUN_001c6668(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  
  iVar12 = 1;
  iVar5 = **(int **)(*(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x58) + 0x60);
  uVar6 = *(undefined4 *)(iVar5 + 0x10);
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  uVar8 = FUN_00271230(0x440280,1,param_1 + 0x2b);
  param_1[0x2a] = uVar8;
  uVar10 = *(undefined8 *)(DAT_0040f4c0 + 0xd5d8);
  uVar9 = FUN_001afdb8(0);
  uVar9 = FUN_001c6ac8(param_1,DAT_0040dfd0,DAT_0040dfc8,uVar10,uVar7,uVar6,uVar9,param_1[0x2a]);
  puVar11 = param_1;
  do {
    param_1 = param_1 + 0xe;
    uVar10 = FUN_001afdb8(iVar12);
    iVar12 = iVar12 + 1;
    puVar1 = (undefined8 *)(puVar11 + 2);
    puVar2 = (undefined8 *)(puVar11 + 4);
    puVar3 = (undefined8 *)(puVar11 + 6);
    uVar6 = *puVar11;
    puVar4 = puVar11 + 1;
    puVar11 = puVar11 + 0xe;
    uVar9 = FUN_001c6ac8(param_1,*puVar1,*puVar2,*puVar3,uVar6,*puVar4,uVar10,uVar9);
  } while (iVar12 < 2);
  FUN_001c5f48(DAT_0040f4c0);
  return;
}


// ==== FUN_001c67c0 @ 001c67c0 ====

void FUN_001c67c0(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x70;
  do {
    FUN_001c6fa0(param_1,param_2);
    param_1 = param_1 + 0x38;
  } while (param_1 < iVar1);
  FUN_001c5f48(DAT_0040f4c0);
  return;
}


// ==== FUN_001c6828 @ 001c6828 ====

void FUN_001c6828(int param_1,int param_2,undefined8 param_3)

{
  FUN_001c6fa0(param_2 * 0x38 + param_1,param_3);
  FUN_001c5f48(DAT_0040f4c0);
  return;
}


// ==== FUN_001c6860 @ 001c6860 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c6860(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  undefined1 in_zero_qw [16];
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (int)param_1;
  iVar3 = 0;
  iVar5 = 1;
  do {
    iVar11 = iVar3;
    uVar2 = _DAT_00416590;
    uVar8 = DAT_00416598;
    uVar9 = DAT_0041659c;
    uVar4 = FUN_001afdb8();
    auVar6._8_4_ = uVar8;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = uVar9;
    auVar6 = _por(in_zero_qw,auVar6);
    FUN_001c7438(iVar5 * 0x38 + iVar12,*(undefined8 *)(iVar12 + 8 + iVar11 * 0x38),
                 *(undefined8 *)(iVar12 + 0x18 + iVar11 * 0x38),0x8000000068,auVar6._0_8_,uVar4);
    iVar3 = iVar11 + -1;
    iVar5 = iVar11;
  } while (0 < iVar11);
  FUN_001c7438(param_1,*(undefined8 *)(iVar12 + 0x78),*(undefined8 *)(iVar12 + 0x88),0x3300000029);
  uVar2 = _DAT_00416590;
  uVar10 = *(undefined8 *)(DAT_0040f4c0 + 0xd5d8);
  uVar7 = *(undefined8 *)(DAT_0040f4c0 + 0xd5c0);
  uVar8 = DAT_00416598;
  uVar9 = DAT_0041659c;
  uVar4 = FUN_001afdb8(0);
  auVar1._8_4_ = uVar8;
  auVar1._0_8_ = uVar2;
  auVar1._12_4_ = uVar9;
  auVar6 = _por(in_zero_qw,auVar1);
  FUN_001c7438(iVar12 + 0x70,uVar7,uVar10,0x8000000068,auVar6._0_8_,uVar4);
  FUN_001d2f18(DAT_0040f4d8 + 0x83ca0);
  if (cGpffff8202 != '\0') {
    FUN_001c7748(param_1,*(undefined8 *)(DAT_0040f4c0 + 0xd5c0),
                 *(undefined8 *)(DAT_0040f4c0 + 0xd5d8),0);
    FUN_001c7748(iVar12 + 0x38,*(undefined8 *)(DAT_0040f4c0 + 0xd5c0),
                 *(undefined8 *)(DAT_0040f4c0 + 0xd5d8),6);
  }
  FUN_001d1e08(DAT_0040f4d8 + 0x83ce0,*(undefined4 *)(iVar12 + 0xa8),*(undefined4 *)(iVar12 + 0xac))
  ;
  FUN_001c5f48(DAT_0040f4c0);
  FUN_00271230(0x440280,0,0);
  return;
}


// ==== FUN_001c6a68 @ 001c6a68 ====

void FUN_001c6a68(void)

{
  FUN_001c5f48(DAT_0040f4c0);
  FUN_00271230(0x440280,0,0);
  return;
}


// ==== FUN_001c6aa0 @ 001c6aa0 ====

void FUN_001c6aa0(int param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_001c6ab8 @ 001c6ab8 ====

undefined4 FUN_001c6ab8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_001c6ac8 @ 001c6ac8 ====

int FUN_001c6ac8(int *param_1,uint param_2,uint param_3,ulong param_4,undefined8 param_5,
                undefined8 param_6,int param_7,uint param_8,undefined8 param_9,uint param_10)

{
  int iVar1;
  uint uVar2;
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulong in_v1_udw;
  undefined8 in_a1_udw;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined4 *puVar43;
  undefined4 in_s5_udw;
  undefined4 in_register_0000015c;
  uint uVar44;
  
  iVar1 = *param_1;
  uVar41 = iVar1 + 0x3fU >> 6;
  uVar44 = param_1[1] + 0x1fU >> 5;
  *(char *)(param_1 + 0xc) = (char)uVar41;
  *(char *)((int)param_1 + 0x31) = (char)uVar44;
  iVar22 = uVar41 * uVar44 * 0x800;
  uVar39 = param_8 + iVar22;
  uVar40 = uVar39 >> 0xb;
  uVar23 = FUN_002904f0(param_4 & 0x7ff,param_7);
  lVar24 = FUN_002904f0((param_4 >> 0x10 & 0x7ff) + (ulong)(param_7 - 1),param_7);
  lVar25 = FUN_002904f0(param_4 >> 0x20 & 0x7ff,param_7);
  lVar26 = FUN_002904f0((param_4 >> 0x30 & 0x7ff) + (ulong)(param_7 - 1),param_7);
  uVar2 = uVar41 * param_7;
  *(ulong *)(param_1 + 6) = uVar23 | (lVar24 + -1) * 0x10000 | lVar25 << 0x20 | lVar26 + -1 << 0x30;
  uVar42 = (long)(int)uVar41 << 0x10;
  *(ulong *)(param_1 + 10) =
       uVar23 << 4 | (lVar24 + -1) * 0x4000 | 10U | lVar25 << 0x18 | lVar26 + -1 << 0x22;
  *(ulong *)(param_1 + 2) = (long)(int)(param_8 >> 0xb) | uVar42;
  *(ulong *)(param_1 + 4) = (long)(int)uVar40 | 0x1000000;
  *(ulong *)(param_1 + 8) = (long)(int)(param_8 >> 6) | (long)(int)uVar41 << 0xe | 0x2a8000000;
  FUN_002b3d88(0,uVar2 * 2 + 0xd);
  puVar43 = DAT_0040e5f0;
  uVar41 = uVar2 * 2 + 0xc;
  auVar27._8_8_ = in_v1_udw;
  auVar27._0_8_ = (long)(int)uVar41 | 0x10000000;
  auVar21._4_8_ = in_a1_udw;
  auVar21._0_4_ = uVar41 | 0x50000000;
  auVar21._12_4_ = 0;
  auVar27 = _pcpyld(auVar21 << 0x20,auVar27);
  *DAT_0040e5f0 = auVar27._0_4_;
  puVar43[1] = auVar27._4_4_;
  puVar43[2] = auVar27._8_4_;
  puVar43[3] = auVar27._12_4_;
  auVar28._8_8_ = auVar27._8_8_;
  auVar28._0_8_ = 0xe;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x108b40000000000a;
  auVar27 = _pcpyld(auVar28,auVar3);
  puVar43[4] = auVar27._0_4_;
  puVar43[5] = auVar27._4_4_;
  puVar43[6] = auVar27._8_4_;
  puVar43[7] = auVar27._12_4_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar27._8_8_;
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0x3f;
  auVar27 = _pcpyld(auVar4,auVar19 << 0x40);
  puVar43[8] = auVar27._0_4_;
  puVar43[9] = auVar27._4_4_;
  puVar43[10] = auVar27._8_4_;
  puVar43[0xb] = auVar27._12_4_;
  auVar29._8_8_ = auVar27._8_8_;
  auVar29._0_8_ = 0x4c;
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = CONCAT44((int)(short)(ushort)(iVar1 + 0x3fU >> 0x16),uVar40 | (uint)uVar42) |
                 0x31000000;
  auVar27 = _pcpyld(auVar29,auVar5);
  puVar43[0xc] = auVar27._0_4_;
  puVar43[0xd] = auVar27._4_4_;
  puVar43[0xe] = auVar27._8_4_;
  puVar43[0xf] = auVar27._12_4_;
  auVar30._8_8_ = auVar27._8_8_;
  auVar30._0_8_ = 0x4e;
  auVar18._8_4_ = in_s5_udw;
  auVar18._0_8_ = (long)(int)(param_8 >> 0xb);
  auVar18._12_4_ = in_register_0000015c;
  auVar27 = _pcpyld(auVar30,auVar18);
  puVar43[0x10] = auVar27._0_4_;
  puVar43[0x11] = auVar27._4_4_;
  puVar43[0x12] = auVar27._8_4_;
  puVar43[0x13] = auVar27._12_4_;
  auVar31._8_8_ = auVar27._8_8_;
  auVar31._0_8_ = 0x47;
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = 0x30000;
  auVar27 = _pcpyld(auVar31,auVar6);
  puVar43[0x14] = auVar27._0_4_;
  puVar43[0x15] = auVar27._4_4_;
  puVar43[0x16] = auVar27._8_4_;
  puVar43[0x17] = auVar27._12_4_;
  auVar32._8_8_ = auVar27._8_8_;
  auVar32._0_8_ = 6;
  auVar7._4_4_ = 2;
  auVar7._0_4_ = (param_3 & 0x1ff) << 5 | (uint)((((ulong)param_2 & 0x3f0000) >> 0x10) << 0xe) |
                 0xab100000;
  auVar7._8_8_ = in_v1_udw;
  auVar27 = _pcpyld(auVar32,auVar7);
  puVar43[0x18] = auVar27._0_4_;
  puVar43[0x19] = auVar27._4_4_;
  puVar43[0x1a] = auVar27._8_4_;
  puVar43[0x1b] = auVar27._12_4_;
  auVar33._8_8_ = auVar27._8_8_;
  auVar33._0_8_ = 0x14;
  auVar8._8_8_ = in_v1_udw;
  auVar8._0_8_ = 1;
  auVar27 = _pcpyld(auVar33,auVar8);
  puVar43[0x1c] = auVar27._0_4_;
  puVar43[0x1d] = auVar27._4_4_;
  puVar43[0x1e] = auVar27._8_4_;
  puVar43[0x1f] = auVar27._12_4_;
  auVar34._8_8_ = auVar27._8_8_;
  auVar34._0_8_ = 8;
  auVar9._8_8_ = in_v1_udw;
  auVar9._0_8_ = 0xffc00ffc00a;
  auVar27 = _pcpyld(auVar34,auVar9);
  puVar43[0x20] = auVar27._0_4_;
  puVar43[0x21] = auVar27._4_4_;
  puVar43[0x22] = auVar27._8_4_;
  puVar43[0x23] = auVar27._12_4_;
  auVar35._8_8_ = auVar27._8_8_;
  auVar35._0_8_ = 0x40;
  auVar10._8_8_ = in_v1_udw;
  auVar10._0_8_ = 0x7ff000007ff0000;
  auVar27 = _pcpyld(auVar35,auVar10);
  puVar43[0x24] = auVar27._0_4_;
  puVar43[0x25] = auVar27._4_4_;
  puVar43[0x26] = auVar27._8_4_;
  puVar43[0x27] = auVar27._12_4_;
  auVar36._8_8_ = auVar27._8_8_;
  auVar36._0_8_ = 0x18;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = in_v1_udw;
  auVar27 = _pcpyld(auVar36,auVar20 << 0x40);
  puVar43[0x28] = auVar27._0_4_;
  puVar43[0x29] = auVar27._4_4_;
  puVar43[0x2a] = auVar27._8_4_;
  puVar43[0x2b] = auVar27._12_4_;
  auVar37._8_8_ = auVar27._8_8_;
  auVar37._0_8_ = 1;
  auVar11._8_8_ = in_v1_udw;
  auVar11._0_8_ = 0x3f80000080808080;
  auVar27 = _pcpyld(auVar37,auVar11);
  puVar43[0x2c] = auVar27._0_4_;
  puVar43[0x2d] = auVar27._4_4_;
  puVar43[0x2e] = auVar27._8_4_;
  puVar43[0x2f] = auVar27._12_4_;
  auVar12._8_8_ = in_v1_udw;
  auVar12._0_8_ = (ulong)uVar2 | 0x4400000000008000;
  auVar15._8_8_ = in_a1_udw;
  auVar15._0_8_ = 0x5353;
  auVar27 = _pcpyld(auVar15,auVar12);
  puVar43[0x30] = auVar27._0_4_;
  puVar43[0x31] = auVar27._4_4_;
  puVar43[0x32] = auVar27._8_4_;
  puVar43[0x33] = auVar27._12_4_;
  puVar43 = puVar43 + 0x34;
  uVar42 = 0;
  uVar23 = (ulong)(uint)(param_7 << 3);
  lVar24 = FUN_00290488((ulong)(uVar44 << 9),param_7);
  lVar24 = uVar23 + lVar24;
  uVar41 = 0;
  if (uVar2 != 0) {
    uVar38 = uVar23 << 0x10;
    do {
      auVar13._8_8_ = in_v1_udw;
      auVar13._0_8_ = uVar23 | uVar38;
      auVar16._8_8_ = in_a1_udw;
      auVar16._0_8_ = uVar42 | (ulong)param_10 << 0x20;
      auVar27 = _pcpyld(auVar16,auVar13);
      *puVar43 = auVar27._0_4_;
      puVar43[1] = auVar27._4_4_;
      puVar43[2] = auVar27._8_4_;
      puVar43[3] = auVar27._12_4_;
      uVar23 = uVar23 + 0x400;
      uVar42 = uVar42 + (long)(0x400 / param_7);
      auVar14._8_8_ = in_v1_udw;
      auVar14._0_8_ = uVar23 | lVar24 * 0x10000;
      auVar17._8_8_ = in_a1_udw;
      auVar17._0_8_ = uVar42 | (ulong)(uVar44 << 9) << 0x10 | (ulong)param_10 << 0x20;
      auVar27 = _pcpyld(auVar17,auVar14);
      puVar43[4] = auVar27._0_4_;
      puVar43[5] = auVar27._4_4_;
      puVar43[6] = auVar27._8_4_;
      puVar43[7] = auVar27._12_4_;
      uVar41 = uVar41 + 1;
      puVar43 = puVar43 + 8;
    } while (uVar41 < uVar2);
  }
  DAT_0040e5f0 = puVar43;
  return uVar39 + iVar22;
}


// ==== FUN_001c6f10 @ 001c6f10 ====

void FUN_001c6f10(int *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)(int)(*param_1 + 0x3fU >> 6);
  uVar2 = (ulong)(*param_1 - 1);
  *(ulong *)(param_1 + 10) = uVar2 << 0xe | (ulong)(param_1[1] - 1) << 0x22 | 10;
  *(ulong *)(param_1 + 2) = param_2 | lVar1 << 0x10;
  *(ulong *)(param_1 + 4) = param_3 | 0x1000000;
  *(ulong *)(param_1 + 6) = uVar2 << 0x10 | (ulong)(param_1[1] - 1) << 0x30;
  *(ulong *)(param_1 + 8) = param_2 << 5 | lVar1 << 0xe | 0x2a8000000;
  return;
}


// ==== FUN_001c6fa0 @ 001c6fa0 ====

void FUN_001c6fa0(int *param_1,long param_2)

{
  int iVar1;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined2 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong in_v0_udw;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar49;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined4 *puVar50;
  undefined8 in_a2_udw;
  ulong in_a3_udw;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  uint uVar54;
  undefined4 uVar56;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 auVar57 [16];
  undefined4 uVar60;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auVar61 [16];
  undefined4 uVar64;
  ulong uVar65;
  ulong uVar66;
  undefined4 uVar67;
  undefined4 in_s7_udw;
  undefined4 in_register_0000017c;
  undefined4 in_s8_udw;
  undefined4 in_register_000001ec;
  ulong uVar55;
  
  iVar1 = param_1[1];
  uVar66 = (ulong)(uint)(*param_1 << 4);
  uVar65 = (ulong)(uint)(iVar1 << 4);
  if (param_2 == 0) {
    uVar67 = 0x808080;
    uVar62 = 0x56;
    iVar49 = *param_1;
  }
  else {
    uVar67 = 0xffffff;
    uVar62 = 0x41;
    iVar49 = *param_1;
  }
  auVar37._8_8_ = 0;
  auVar37._0_8_ = in_v0_udw;
  auVar61._8_8_ = in_a0_udw;
  auVar61._0_8_ = 0x3f;
  auVar57 = _pcpyld(auVar61,auVar37 << 0x40);
  uVar54 = iVar49 + 0x1fU >> 5;
  uVar55 = (ulong)(int)uVar54;
  auVar16._8_8_ = in_a3_udw;
  auVar16._0_8_ = 0x1000000000000001;
  auVar32._8_4_ = in_s0_udw;
  auVar32._0_8_ = 0xe;
  auVar32._12_4_ = in_register_0000010c;
  auVar61 = _pcpyld(auVar32,auVar16);
  FUN_002b3d88(0x80000000,uVar54 * 8 + 0x15);
  auVar17._8_8_ = in_a3_udw;
  auVar17._0_8_ = 0x10ab40000000000a;
  auVar33._8_4_ = in_s0_udw;
  auVar33._0_8_ = 0xe;
  auVar33._12_4_ = in_register_0000010c;
  auVar39 = _pcpyld(auVar33,auVar17);
  *DAT_0040e5f0 = auVar39._0_4_;
  DAT_0040e5f0[1] = auVar39._4_4_;
  DAT_0040e5f0[2] = auVar39._8_4_;
  DAT_0040e5f0[3] = auVar39._12_4_;
  uVar56 = auVar57._0_4_;
  DAT_0040e5f0[4] = uVar56;
  uVar58 = auVar57._4_4_;
  DAT_0040e5f0[5] = uVar58;
  uVar59 = auVar57._8_4_;
  DAT_0040e5f0[6] = uVar59;
  uVar60 = auVar57._12_4_;
  DAT_0040e5f0[7] = uVar60;
  auVar40._8_8_ = auVar39._8_8_;
  auVar40._0_8_ = *(undefined8 *)(param_1 + 2);
  auVar39._8_8_ = in_v1_udw;
  auVar39._0_8_ = 0x4c;
  auVar39 = _pcpyld(auVar39,auVar40);
  DAT_0040e5f0[8] = auVar39._0_4_;
  DAT_0040e5f0[9] = auVar39._4_4_;
  DAT_0040e5f0[10] = auVar39._8_4_;
  DAT_0040e5f0[0xb] = auVar39._12_4_;
  auVar41._8_8_ = auVar39._8_8_;
  auVar41._0_8_ = 0x18;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = in_a3_udw;
  auVar39 = _pcpyld(auVar41,auVar38 << 0x40);
  DAT_0040e5f0[0xc] = auVar39._0_4_;
  DAT_0040e5f0[0xd] = auVar39._4_4_;
  DAT_0040e5f0[0xe] = auVar39._8_4_;
  DAT_0040e5f0[0xf] = auVar39._12_4_;
  auVar42._8_8_ = auVar39._8_8_;
  auVar42._0_8_ = *(undefined8 *)(param_1 + 6);
  auVar57._8_8_ = in_v1_udw;
  auVar57._0_8_ = 0x40;
  auVar39 = _pcpyld(auVar57,auVar42);
  DAT_0040e5f0[0x10] = auVar39._0_4_;
  DAT_0040e5f0[0x11] = auVar39._4_4_;
  DAT_0040e5f0[0x12] = auVar39._8_4_;
  DAT_0040e5f0[0x13] = auVar39._12_4_;
  auVar43._8_8_ = auVar39._8_8_;
  auVar43._0_8_ = *(undefined8 *)(param_1 + 8);
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 6;
  auVar39 = _pcpyld(auVar2,auVar43);
  DAT_0040e5f0[0x14] = auVar39._0_4_;
  DAT_0040e5f0[0x15] = auVar39._4_4_;
  DAT_0040e5f0[0x16] = auVar39._8_4_;
  DAT_0040e5f0[0x17] = auVar39._12_4_;
  auVar44._8_8_ = auVar39._8_8_;
  auVar44._0_8_ = *(undefined8 *)(param_1 + 10);
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 8;
  auVar39 = _pcpyld(auVar3,auVar44);
  DAT_0040e5f0[0x18] = auVar39._0_4_;
  DAT_0040e5f0[0x19] = auVar39._4_4_;
  DAT_0040e5f0[0x1a] = auVar39._8_4_;
  DAT_0040e5f0[0x1b] = auVar39._12_4_;
  auVar45._8_8_ = auVar39._8_8_;
  auVar45._0_8_ = 1;
  auVar34._4_4_ = 0x3f800000;
  auVar34._0_4_ = uVar67;
  auVar34._8_4_ = in_s7_udw;
  auVar34._12_4_ = in_register_0000017c;
  auVar39 = _pcpyld(auVar45,auVar34);
  DAT_0040e5f0[0x1c] = auVar39._0_4_;
  DAT_0040e5f0[0x1d] = auVar39._4_4_;
  DAT_0040e5f0[0x1e] = auVar39._8_4_;
  DAT_0040e5f0[0x1f] = auVar39._12_4_;
  auVar46._8_8_ = auVar39._8_8_;
  auVar46._0_8_ = 0x42;
  auVar35._4_4_ = uVar62;
  auVar35._0_4_ = 100;
  auVar35._8_4_ = in_s8_udw;
  auVar35._12_4_ = in_register_000001ec;
  auVar39 = _pcpyld(auVar46,auVar35);
  DAT_0040e5f0[0x20] = auVar39._0_4_;
  DAT_0040e5f0[0x21] = auVar39._4_4_;
  DAT_0040e5f0[0x22] = auVar39._8_4_;
  DAT_0040e5f0[0x23] = auVar39._12_4_;
  auVar47._8_8_ = auVar39._8_8_;
  auVar47._0_8_ = 0x14;
  auVar18._8_8_ = in_a3_udw;
  auVar18._0_8_ = 0x61;
  auVar39 = _pcpyld(auVar47,auVar18);
  DAT_0040e5f0[0x24] = auVar39._0_4_;
  DAT_0040e5f0[0x25] = auVar39._4_4_;
  DAT_0040e5f0[0x26] = auVar39._8_4_;
  DAT_0040e5f0[0x27] = auVar39._12_4_;
  auVar48._8_8_ = auVar39._8_8_;
  auVar48._0_8_ = 0x47;
  auVar19._8_8_ = in_a3_udw;
  auVar19._0_8_ = 0x31001;
  auVar39 = _pcpyld(auVar48,auVar19);
  DAT_0040e5f0[0x28] = auVar39._0_4_;
  DAT_0040e5f0[0x29] = auVar39._4_4_;
  DAT_0040e5f0[0x2a] = auVar39._8_4_;
  DAT_0040e5f0[0x2b] = auVar39._12_4_;
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = 0x5353;
  auVar20._8_8_ = in_a3_udw;
  auVar20._0_8_ = uVar55 | 0x4400000000000000;
  auVar39 = _pcpyld(auVar4,auVar20);
  DAT_0040e5f0[0x2c] = auVar39._0_4_;
  DAT_0040e5f0[0x2d] = auVar39._4_4_;
  DAT_0040e5f0[0x2e] = auVar39._8_4_;
  DAT_0040e5f0[0x2f] = auVar39._12_4_;
  puVar50 = DAT_0040e5f0 + 0x30;
  uVar52 = 0;
  uVar53 = 0x20;
  uVar51 = 0;
  uVar36 = (undefined2)((uint)(iVar1 << 4) >> 0x10);
  if (uVar55 != 0) {
    do {
      auVar5._8_8_ = in_a2_udw;
      auVar5._0_8_ = uVar52;
      auVar21._8_8_ = in_a3_udw;
      auVar21._0_8_ = uVar53 | 0x80000;
      auVar39 = _pcpyld(auVar5,auVar21);
      *puVar50 = auVar39._0_4_;
      puVar50[1] = auVar39._4_4_;
      puVar50[2] = auVar39._8_4_;
      puVar50[3] = auVar39._12_4_;
      if (uVar51 < (ulong)(long)(int)(uVar54 - 1)) {
        uVar52 = uVar52 + 0x200;
        uVar53 = uVar53 + 0x200;
      }
      else {
        uVar52 = uVar66 - 0x20;
        uVar53 = uVar66;
      }
      auVar6._8_8_ = in_a2_udw;
      auVar6._0_8_ = uVar52 | CONCAT24(uVar36,iVar1 << 0x14);
      auVar22._8_8_ = in_a3_udw;
      auVar22._0_8_ = uVar53 | (uVar65 + 8) * 0x10000;
      auVar39 = _pcpyld(auVar6,auVar22);
      puVar50[4] = auVar39._0_4_;
      puVar50[5] = auVar39._4_4_;
      puVar50[6] = auVar39._8_4_;
      puVar50[7] = auVar39._12_4_;
      uVar51 = (ulong)((int)uVar51 + 1);
      puVar50 = puVar50 + 8;
    } while (uVar51 < uVar55);
  }
  uVar67 = auVar61._0_4_;
  *puVar50 = uVar67;
  uVar62 = auVar61._4_4_;
  puVar50[1] = uVar62;
  uVar63 = auVar61._8_4_;
  puVar50[2] = uVar63;
  uVar64 = auVar61._12_4_;
  puVar50[3] = uVar64;
  puVar50[4] = uVar56;
  puVar50[5] = uVar58;
  puVar50[6] = uVar59;
  puVar50[7] = uVar60;
  auVar7._8_8_ = in_a2_udw;
  auVar7._0_8_ = 0x5353;
  auVar23._8_8_ = in_a3_udw;
  auVar23._0_8_ = (ulong)uVar54 | 0x4400000000000000;
  auVar39 = _pcpyld(auVar7,auVar23);
  puVar50[8] = auVar39._0_4_;
  puVar50[9] = auVar39._4_4_;
  puVar50[10] = auVar39._8_4_;
  puVar50[0xb] = auVar39._12_4_;
  puVar50 = puVar50 + 0xc;
  uVar51 = uVar66 - 0x10;
  uVar53 = 0;
  if (uVar55 != 0) {
    uVar52 = uVar66;
    do {
      auVar8._8_8_ = in_a2_udw;
      auVar8._0_8_ = uVar52;
      auVar24._8_8_ = in_a3_udw;
      auVar24._0_8_ = uVar51 | 0x80000;
      auVar39 = _pcpyld(auVar8,auVar24);
      *puVar50 = auVar39._0_4_;
      puVar50[1] = auVar39._4_4_;
      puVar50[2] = auVar39._8_4_;
      puVar50[3] = auVar39._12_4_;
      if (uVar53 < (ulong)(long)(int)(uVar54 - 1)) {
        uVar52 = uVar52 - 1 & 0xfffffffffffffe00;
        uVar51 = uVar52 - 0x10;
      }
      else {
        uVar52 = 0x20;
        uVar51 = 0x10;
      }
      auVar9._8_8_ = in_a2_udw;
      auVar9._0_8_ = uVar52 | uVar65 << 0x10;
      auVar25._8_8_ = in_a3_udw;
      auVar25._0_8_ = uVar51 | (uVar65 + 8) * 0x10000;
      auVar39 = _pcpyld(auVar9,auVar25);
      puVar50[4] = auVar39._0_4_;
      puVar50[5] = auVar39._4_4_;
      puVar50[6] = auVar39._8_4_;
      puVar50[7] = auVar39._12_4_;
      uVar53 = (ulong)((int)uVar53 + 1);
      puVar50 = puVar50 + 8;
    } while (uVar53 < uVar55);
  }
  *puVar50 = uVar67;
  puVar50[1] = uVar62;
  puVar50[2] = uVar63;
  puVar50[3] = uVar64;
  puVar50[4] = uVar56;
  puVar50[5] = uVar58;
  puVar50[6] = uVar59;
  puVar50[7] = uVar60;
  auVar10._8_8_ = in_a2_udw;
  auVar10._0_8_ = 0x5353;
  auVar26._8_8_ = in_a3_udw;
  auVar26._0_8_ = (ulong)uVar54 | 0x4400000000000000;
  auVar39 = _pcpyld(auVar10,auVar26);
  puVar50[8] = auVar39._0_4_;
  puVar50[9] = auVar39._4_4_;
  puVar50[10] = auVar39._8_4_;
  puVar50[0xb] = auVar39._12_4_;
  puVar50 = puVar50 + 0xc;
  uVar53 = 0;
  uVar52 = 8;
  uVar51 = 0;
  if (uVar55 != 0) {
    do {
      auVar11._8_8_ = in_a2_udw;
      auVar11._0_8_ = uVar53;
      auVar27._8_8_ = in_a3_udw;
      auVar27._0_8_ = uVar52 | 0x200000;
      auVar39 = _pcpyld(auVar11,auVar27);
      *puVar50 = auVar39._0_4_;
      puVar50[1] = auVar39._4_4_;
      puVar50[2] = auVar39._8_4_;
      puVar50[3] = auVar39._12_4_;
      if (uVar51 < (ulong)(long)(int)(uVar54 - 1)) {
        uVar52 = uVar52 + 0x200;
        uVar53 = uVar53 + 0x200;
      }
      else {
        uVar52 = uVar66 + 8;
        uVar53 = uVar66;
      }
      auVar12._8_8_ = in_a2_udw;
      auVar12._0_8_ = uVar53 | (uVar65 - 0x20) * 0x10000;
      auVar28._8_8_ = in_a3_udw;
      auVar28._0_8_ = uVar52 | CONCAT24(uVar36,iVar1 << 0x14);
      auVar39 = _pcpyld(auVar12,auVar28);
      puVar50[4] = auVar39._0_4_;
      puVar50[5] = auVar39._4_4_;
      puVar50[6] = auVar39._8_4_;
      puVar50[7] = auVar39._12_4_;
      uVar51 = (ulong)((int)uVar51 + 1);
      puVar50 = puVar50 + 8;
    } while (uVar51 < uVar55);
  }
  *puVar50 = uVar67;
  puVar50[1] = uVar62;
  puVar50[2] = uVar63;
  puVar50[3] = uVar64;
  puVar50[4] = uVar56;
  puVar50[5] = uVar58;
  puVar50[6] = uVar59;
  puVar50[7] = uVar60;
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = 0x5353;
  auVar29._8_8_ = in_a3_udw;
  auVar29._0_8_ = uVar55 | 0x4400000000008000;
  auVar39 = _pcpyld(auVar13,auVar29);
  puVar50[8] = auVar39._0_4_;
  puVar50[9] = auVar39._4_4_;
  puVar50[10] = auVar39._8_4_;
  puVar50[0xb] = auVar39._12_4_;
  DAT_0040e5f0 = puVar50 + 0xc;
  uVar53 = 0;
  uVar52 = 8;
  uVar51 = 0;
  if (uVar55 != 0) {
    do {
      auVar14._8_8_ = in_a2_udw;
      auVar14._0_8_ = uVar53 | CONCAT24(uVar36,iVar1 << 0x14);
      auVar30._8_8_ = in_a3_udw;
      auVar30._0_8_ = uVar52 | (uVar65 - 0x10) * 0x10000;
      auVar39 = _pcpyld(auVar14,auVar30);
      *DAT_0040e5f0 = auVar39._0_4_;
      DAT_0040e5f0[1] = auVar39._4_4_;
      DAT_0040e5f0[2] = auVar39._8_4_;
      DAT_0040e5f0[3] = auVar39._12_4_;
      if (uVar51 < (ulong)(long)(int)(uVar54 - 1)) {
        uVar52 = uVar52 + 0x200;
        uVar53 = uVar53 + 0x200;
      }
      else {
        uVar52 = uVar66 + 8;
        uVar53 = uVar66;
      }
      auVar15._8_8_ = in_a2_udw;
      auVar15._0_8_ = uVar53 | 0x200000;
      auVar31._8_8_ = in_a3_udw;
      auVar31._0_8_ = uVar52 | 0x100000;
      auVar39 = _pcpyld(auVar15,auVar31);
      DAT_0040e5f0[4] = auVar39._0_4_;
      DAT_0040e5f0[5] = auVar39._4_4_;
      DAT_0040e5f0[6] = auVar39._8_4_;
      DAT_0040e5f0[7] = auVar39._12_4_;
      uVar51 = (ulong)((int)uVar51 + 1);
      DAT_0040e5f0 = DAT_0040e5f0 + 8;
    } while (uVar51 < uVar55);
  }
  return;
}


// ==== FUN_001c7438 @ 001c7438 ====

void FUN_001c7438(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
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
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar19;
  long lVar20;
  undefined8 extraout_v0_udw;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong in_v1_udw;
  undefined8 in_a0_udw;
  ulong uVar30;
  undefined8 in_a2_udw;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined4 in_s1_udw;
  undefined4 in_register_0000011c;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  undefined4 *puVar31;
  ulong uVar32;
  uint uVar33;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  ulong uVar34;
  
  auVar35 = _qmtc2(param_5);
  auVar35 = _sqc2(auVar35);
  uVar33 = *param_1 * param_6 + 0x1fU >> 5;
  uVar34 = (ulong)(int)uVar33;
  FUN_002b3d88(0x80000000,uVar33 * 2 + 0xc);
  puVar31 = DAT_0040e5f0;
  auVar36 = _lqc2(auVar35);
  auVar35 = _qmtc2(0x43000000);
  auVar37 = _vmulbc(auVar36,auVar35);
  auVar21._8_8_ = extraout_v0_udw;
  auVar21._0_8_ = 0xe;
  auVar35._8_8_ = in_v1_udw;
  auVar35._0_8_ = 0x10ab40000000000a;
  auVar35 = _pcpyld(auVar21,auVar35);
  *DAT_0040e5f0 = auVar35._0_4_;
  puVar31[1] = auVar35._4_4_;
  puVar31[2] = auVar35._8_4_;
  puVar31[3] = auVar35._12_4_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar35._8_8_;
  auVar36._8_8_ = in_v1_udw;
  auVar36._0_8_ = 0x3f;
  auVar35 = _pcpyld(auVar36,auVar17 << 0x40);
  puVar31[4] = auVar35._0_4_;
  puVar31[5] = auVar35._4_4_;
  puVar31[6] = auVar35._8_4_;
  puVar31[7] = auVar35._12_4_;
  auVar22._8_8_ = auVar35._8_8_;
  auVar22._0_8_ = *(undefined8 *)(param_1 + 8);
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 6;
  auVar35 = _pcpyld(auVar2,auVar22);
  puVar31[8] = auVar35._0_4_;
  puVar31[9] = auVar35._4_4_;
  puVar31[10] = auVar35._8_4_;
  puVar31[0xb] = auVar35._12_4_;
  auVar23._8_8_ = auVar35._8_8_;
  auVar23._0_8_ = 0x14;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x61;
  auVar35 = _pcpyld(auVar23,auVar3);
  puVar31[0xc] = auVar35._0_4_;
  puVar31[0xd] = auVar35._4_4_;
  puVar31[0xe] = auVar35._8_4_;
  puVar31[0xf] = auVar35._12_4_;
  auVar24._8_8_ = auVar35._8_8_;
  auVar24._0_8_ = *(undefined8 *)(param_1 + 10);
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 8;
  auVar35 = _pcpyld(auVar4,auVar24);
  puVar31[0x10] = auVar35._0_4_;
  puVar31[0x11] = auVar35._4_4_;
  puVar31[0x12] = auVar35._8_4_;
  puVar31[0x13] = auVar35._12_4_;
  auVar25._8_8_ = auVar35._8_8_;
  auVar25._0_8_ = 0x4c;
  auVar13._8_4_ = in_s0_udw;
  auVar13._0_8_ = param_2;
  auVar13._12_4_ = in_register_0000010c;
  auVar35 = _pcpyld(auVar25,auVar13);
  puVar31[0x14] = auVar35._0_4_;
  puVar31[0x15] = auVar35._4_4_;
  puVar31[0x16] = auVar35._8_4_;
  puVar31[0x17] = auVar35._12_4_;
  auVar26._8_8_ = auVar35._8_8_;
  auVar26._0_8_ = 0x18;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_v1_udw;
  auVar35 = _pcpyld(auVar26,auVar18 << 0x40);
  puVar31[0x18] = auVar35._0_4_;
  puVar31[0x19] = auVar35._4_4_;
  puVar31[0x1a] = auVar35._8_4_;
  puVar31[0x1b] = auVar35._12_4_;
  auVar27._8_8_ = auVar35._8_8_;
  auVar27._0_8_ = 0x40;
  auVar14._8_4_ = in_s1_udw;
  auVar14._0_8_ = param_3;
  auVar14._12_4_ = in_register_0000011c;
  auVar35 = _pcpyld(auVar27,auVar14);
  puVar31[0x1c] = auVar35._0_4_;
  puVar31[0x1d] = auVar35._4_4_;
  puVar31[0x1e] = auVar35._8_4_;
  puVar31[0x1f] = auVar35._12_4_;
  auVar28._8_8_ = auVar35._8_8_;
  auVar28._0_8_ = 0x42;
  auVar15._8_4_ = in_s3_udw;
  auVar15._0_8_ = param_4;
  auVar15._12_4_ = in_register_0000013c;
  auVar35 = _pcpyld(auVar28,auVar15);
  puVar31[0x20] = auVar35._0_4_;
  puVar31[0x21] = auVar35._4_4_;
  puVar31[0x22] = auVar35._8_4_;
  puVar31[0x23] = auVar35._12_4_;
  auVar36 = _qmfc2(auVar37._0_4_);
  auVar35 = _sqc2(auVar37);
  fStack_bc = auVar35._4_4_;
  auVar35 = _sqc2(auVar37);
  fStack_b8 = auVar35._8_4_;
  auVar35 = _sqc2(auVar37);
  fStack_b4 = auVar35._12_4_;
  auVar37._8_8_ = in_v1_udw;
  auVar37._0_8_ =
       (long)(int)auVar36._0_4_ | (long)(int)fStack_bc << 8 |
       CONCAT44((int)(short)((uint)(int)fStack_b8 >> 0x10),(int)fStack_b8 << 0x10) |
       CONCAT44((int)(int3)((uint)(int)fStack_b4 >> 8),(int)fStack_b4 << 0x18) | 0x3f80000000000000;
  auVar12._8_8_ = in_a2_udw;
  auVar12._0_8_ = 1;
  auVar35 = _pcpyld(auVar12,auVar37);
  puVar31[0x24] = auVar35._0_4_;
  puVar31[0x25] = auVar35._4_4_;
  puVar31[0x26] = auVar35._8_4_;
  puVar31[0x27] = auVar35._12_4_;
  auVar29._8_8_ = auVar35._8_8_;
  auVar29._0_8_ = 0x47;
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = 0x31001;
  auVar35 = _pcpyld(auVar29,auVar5);
  puVar31[0x28] = auVar35._0_4_;
  puVar31[0x29] = auVar35._4_4_;
  puVar31[0x2a] = auVar35._8_4_;
  puVar31[0x2b] = auVar35._12_4_;
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = uVar34 | 0x4400000000008000;
  auVar9._8_8_ = in_a0_udw;
  auVar9._0_8_ = 0x5353;
  auVar35 = _pcpyld(auVar9,auVar6);
  puVar31[0x2c] = auVar35._0_4_;
  puVar31[0x2d] = auVar35._4_4_;
  puVar31[0x2e] = auVar35._8_4_;
  puVar31[0x2f] = auVar35._12_4_;
  puVar31 = puVar31 + 0x30;
  uVar32 = 0;
  iVar1 = param_1[1];
  uVar19 = FUN_002904f0(8,param_6);
  lVar20 = FUN_002904f0(0x200,param_6);
  uVar30 = 0;
  if (uVar34 != 0) {
    uVar16 = uVar19;
    do {
      auVar7._8_8_ = in_v1_udw;
      auVar7._0_8_ = uVar16 | uVar19 << 0x10;
      auVar10._8_8_ = in_a0_udw;
      auVar10._0_8_ = uVar32;
      auVar35 = _pcpyld(auVar10,auVar7);
      *puVar31 = auVar35._0_4_;
      puVar31[1] = auVar35._4_4_;
      puVar31[2] = auVar35._8_4_;
      puVar31[3] = auVar35._12_4_;
      if (uVar30 < (ulong)(long)(int)(uVar33 - 1)) {
        uVar32 = uVar32 + 0x200;
        uVar16 = uVar16 + lVar20;
      }
      else {
        uVar16 = (uint)(*param_1 << 4) + uVar19;
        uVar32 = (ulong)(uint)(*param_1 * param_6 * 0x10);
      }
      auVar8._8_8_ = in_v1_udw;
      auVar8._0_8_ = uVar16 | (uVar19 + (uint)(iVar1 << 4)) * 0x10000;
      auVar11._8_8_ = in_a0_udw;
      auVar11._0_8_ = uVar32 | (ulong)(uint)(iVar1 * param_6) << 0x14;
      auVar35 = _pcpyld(auVar11,auVar8);
      puVar31[4] = auVar35._0_4_;
      puVar31[5] = auVar35._4_4_;
      puVar31[6] = auVar35._8_4_;
      puVar31[7] = auVar35._12_4_;
      uVar30 = (ulong)((int)uVar30 + 1);
      puVar31 = puVar31 + 8;
    } while (uVar30 < uVar34);
  }
  DAT_0040e5f0 = puVar31;
  return;
}


// ==== FUN_001c7748 @ 001c7748 ====

void FUN_001c7748(int *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined1 auVar1 [16];
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
  undefined8 in_v1_udw;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong in_a0_udw;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  
  FUN_002b3d88(0x80000000,0x13);
  auVar28._8_8_ = in_v1_udw;
  auVar28._0_8_ = 0xe;
  auVar29._8_8_ = in_a0_udw;
  auVar29._0_8_ = 0x10ab400000008012;
  auVar29 = _pcpyld(auVar28,auVar29);
  *DAT_0040e5f0 = auVar29._0_4_;
  DAT_0040e5f0[1] = auVar29._4_4_;
  DAT_0040e5f0[2] = auVar29._8_4_;
  DAT_0040e5f0[3] = auVar29._12_4_;
  auVar30._8_8_ = auVar29._8_8_;
  auVar30._0_8_ = 0x4c;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = param_2 + (ulong)param_4;
  auVar29 = _pcpyld(auVar30,auVar1);
  DAT_0040e5f0[4] = auVar29._0_4_;
  DAT_0040e5f0[5] = auVar29._4_4_;
  DAT_0040e5f0[6] = auVar29._8_4_;
  DAT_0040e5f0[7] = auVar29._12_4_;
  auVar31._8_8_ = auVar29._8_8_;
  auVar31._0_8_ = 0x18;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = in_a0_udw;
  auVar29 = _pcpyld(auVar31,auVar24 << 0x40);
  DAT_0040e5f0[8] = auVar29._0_4_;
  DAT_0040e5f0[9] = auVar29._4_4_;
  DAT_0040e5f0[10] = auVar29._8_4_;
  DAT_0040e5f0[0xb] = auVar29._12_4_;
  auVar32._8_8_ = auVar29._8_8_;
  auVar32._0_8_ = 0x40;
  auVar23._8_4_ = in_s3_udw;
  auVar23._0_8_ = param_3;
  auVar23._12_4_ = in_register_0000013c;
  auVar29 = _pcpyld(auVar32,auVar23);
  DAT_0040e5f0[0xc] = auVar29._0_4_;
  DAT_0040e5f0[0xd] = auVar29._4_4_;
  DAT_0040e5f0[0xe] = auVar29._8_4_;
  DAT_0040e5f0[0xf] = auVar29._12_4_;
  auVar33._8_8_ = auVar29._8_8_;
  auVar33._0_8_ = *(undefined8 *)(param_1 + 8);
  auVar21._8_8_ = in_t0_udw;
  auVar21._0_8_ = 6;
  auVar29 = _pcpyld(auVar21,auVar33);
  DAT_0040e5f0[0x10] = auVar29._0_4_;
  DAT_0040e5f0[0x11] = auVar29._4_4_;
  DAT_0040e5f0[0x12] = auVar29._8_4_;
  DAT_0040e5f0[0x13] = auVar29._12_4_;
  auVar34._8_8_ = auVar29._8_8_;
  auVar34._0_8_ = *(undefined8 *)(param_1 + 10);
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 8;
  auVar29 = _pcpyld(auVar2,auVar34);
  DAT_0040e5f0[0x14] = auVar29._0_4_;
  DAT_0040e5f0[0x15] = auVar29._4_4_;
  DAT_0040e5f0[0x16] = auVar29._8_4_;
  DAT_0040e5f0[0x17] = auVar29._12_4_;
  auVar35._8_8_ = auVar29._8_8_;
  auVar35._0_8_ = 0x42;
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 0x2a;
  auVar29 = _pcpyld(auVar35,auVar3);
  DAT_0040e5f0[0x18] = auVar29._0_4_;
  DAT_0040e5f0[0x19] = auVar29._4_4_;
  DAT_0040e5f0[0x1a] = auVar29._8_4_;
  DAT_0040e5f0[0x1b] = auVar29._12_4_;
  auVar36._8_8_ = auVar29._8_8_;
  auVar36._0_8_ = 0x16;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = 1;
  auVar29 = _pcpyld(auVar36,auVar4);
  DAT_0040e5f0[0x1c] = auVar29._0_4_;
  DAT_0040e5f0[0x1d] = auVar29._4_4_;
  DAT_0040e5f0[0x1e] = auVar29._8_4_;
  DAT_0040e5f0[0x1f] = auVar29._12_4_;
  auVar37._8_8_ = auVar29._8_8_;
  auVar37._0_8_ = 0x47;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x31001;
  auVar29 = _pcpyld(auVar37,auVar5);
  DAT_0040e5f0[0x20] = auVar29._0_4_;
  DAT_0040e5f0[0x21] = auVar29._4_4_;
  DAT_0040e5f0[0x22] = auVar29._8_4_;
  DAT_0040e5f0[0x23] = auVar29._12_4_;
  auVar38._8_8_ = auVar29._8_8_;
  auVar38._0_8_ = 1;
  auVar6._8_8_ = in_a0_udw;
  auVar6._0_8_ = 0x3f80000080808080;
  auVar29 = _pcpyld(auVar38,auVar6);
  DAT_0040e5f0[0x24] = auVar29._0_4_;
  DAT_0040e5f0[0x25] = auVar29._4_4_;
  DAT_0040e5f0[0x26] = auVar29._8_4_;
  DAT_0040e5f0[0x27] = auVar29._12_4_;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = in_a0_udw;
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = 3;
  auVar29 = _pcpyld(auVar13,auVar25 << 0x40);
  DAT_0040e5f0[0x28] = auVar29._0_4_;
  DAT_0040e5f0[0x29] = auVar29._4_4_;
  DAT_0040e5f0[0x2a] = auVar29._8_4_;
  DAT_0040e5f0[0x2b] = auVar29._12_4_;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = in_a0_udw;
  auVar17._8_8_ = in_a3_udw;
  auVar17._0_8_ = 5;
  auVar29 = _pcpyld(auVar17,auVar26 << 0x40);
  DAT_0040e5f0[0x2c] = auVar29._0_4_;
  DAT_0040e5f0[0x2d] = auVar29._4_4_;
  DAT_0040e5f0[0x2e] = auVar29._8_4_;
  DAT_0040e5f0[0x2f] = auVar29._12_4_;
  auVar7._8_8_ = in_a0_udw;
  auVar7._0_8_ = (ulong)(uint)(*param_1 << 4) | (ulong)(uint)(param_1[1] << 4) << 0x10;
  auVar14._8_8_ = in_a2_udw;
  auVar14._0_8_ = 3;
  auVar29 = _pcpyld(auVar14,auVar7);
  DAT_0040e5f0[0x30] = auVar29._0_4_;
  DAT_0040e5f0[0x31] = auVar29._4_4_;
  DAT_0040e5f0[0x32] = auVar29._8_4_;
  DAT_0040e5f0[0x33] = auVar29._12_4_;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = (ulong)(uint)(*param_1 << 4) | (ulong)(uint)(param_1[1] << 4) << 0x10;
  auVar18._8_8_ = in_a3_udw;
  auVar18._0_8_ = 5;
  auVar29 = _pcpyld(auVar18,auVar8);
  DAT_0040e5f0[0x34] = auVar29._0_4_;
  DAT_0040e5f0[0x35] = auVar29._4_4_;
  DAT_0040e5f0[0x36] = auVar29._8_4_;
  DAT_0040e5f0[0x37] = auVar29._12_4_;
  auVar9._4_4_ = 2;
  auVar9._0_4_ = (uint)((*(ulong *)(param_1 + 4) & 0x1ff) << 5) |
                 (uint)*(byte *)(param_1 + 0xc) << 0xe | 0xab100000;
  auVar9._8_8_ = in_a0_udw;
  auVar22._8_8_ = in_t0_udw;
  auVar22._0_8_ = 6;
  auVar29 = _pcpyld(auVar22,auVar9);
  DAT_0040e5f0[0x38] = auVar29._0_4_;
  DAT_0040e5f0[0x39] = auVar29._4_4_;
  DAT_0040e5f0[0x3a] = auVar29._8_4_;
  DAT_0040e5f0[0x3b] = auVar29._12_4_;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = in_a0_udw;
  auVar15._8_8_ = in_a2_udw;
  auVar15._0_8_ = 3;
  auVar29 = _pcpyld(auVar15,auVar27 << 0x40);
  DAT_0040e5f0[0x3c] = auVar29._0_4_;
  DAT_0040e5f0[0x3d] = auVar29._4_4_;
  DAT_0040e5f0[0x3e] = auVar29._8_4_;
  DAT_0040e5f0[0x3f] = auVar29._12_4_;
  auVar10._8_8_ = in_a0_udw;
  auVar10._0_8_ = (long)(int)((uint)*(byte *)(param_1 + 0xc) << 10);
  auVar19._8_8_ = in_a3_udw;
  auVar19._0_8_ = 5;
  auVar29 = _pcpyld(auVar19,auVar10);
  DAT_0040e5f0[0x40] = auVar29._0_4_;
  DAT_0040e5f0[0x41] = auVar29._4_4_;
  DAT_0040e5f0[0x42] = auVar29._8_4_;
  DAT_0040e5f0[0x43] = auVar29._12_4_;
  auVar11._8_8_ = in_a0_udw;
  auVar11._0_8_ = (ulong)(uint)(*param_1 << 4) | (ulong)(uint)(param_1[1] << 4) << 0x10;
  auVar16._8_8_ = in_a2_udw;
  auVar16._0_8_ = 3;
  auVar29 = _pcpyld(auVar16,auVar11);
  DAT_0040e5f0[0x44] = auVar29._0_4_;
  DAT_0040e5f0[0x45] = auVar29._4_4_;
  DAT_0040e5f0[0x46] = auVar29._8_4_;
  DAT_0040e5f0[0x47] = auVar29._12_4_;
  auVar12._8_8_ = in_a0_udw;
  auVar12._0_8_ =
       (ulong)((uint)*(byte *)(param_1 + 0xc) * 0x400 + *param_1 * 0x10) |
       (ulong)(uint)(param_1[1] << 4) << 0x10;
  auVar20._8_8_ = in_a3_udw;
  auVar20._0_8_ = 5;
  auVar29 = _pcpyld(auVar20,auVar12);
  DAT_0040e5f0[0x48] = auVar29._0_4_;
  DAT_0040e5f0[0x49] = auVar29._4_4_;
  DAT_0040e5f0[0x4a] = auVar29._8_4_;
  DAT_0040e5f0[0x4b] = auVar29._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x4c;
  return;
}


// ==== FUN_001c79d0 @ 001c79d0 ====

void FUN_001c79d0(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                 undefined8 param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
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
  ulong uVar13;
  undefined1 auVar14 [16];
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar19;
  long lVar20;
  undefined8 extraout_v0_udw;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong in_v1_udw;
  uint uVar30;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  uint uVar31;
  undefined4 uVar32;
  ulong uVar33;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  undefined4 in_s4_udw;
  undefined4 in_register_0000014c;
  undefined4 in_s6_udw;
  undefined4 in_register_0000016c;
  uint uVar34;
  undefined4 *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  
  uVar30 = (uint)(param_2 >> 0x20);
  auVar38 = _qmtc2(param_7);
  uVar34 = ((uint)(param_1 >> 10) & 0xfc0) >> 5;
  auVar36 = _qmtc2(0x43000000);
  auVar36 = _vmulbc(auVar38,auVar36);
  uVar33 = (((param_2 & 0x3ff0000) >> 0x10) - (param_2 & 0x3ff)) + 1;
  uVar32 = (undefined4)uVar33;
  auVar36 = _sqc2(auVar36);
  FUN_002b3d88(0xffffffff80000000,uVar34 * 2 + 0xc);
  puVar35 = DAT_0040e5f0;
  auVar21._8_8_ = extraout_v0_udw;
  auVar21._0_8_ = 0xe;
  auVar38._8_8_ = in_v1_udw;
  auVar38._0_8_ = 0x10ab40000000000a;
  auVar38 = _pcpyld(auVar21,auVar38);
  *DAT_0040e5f0 = auVar38._0_4_;
  puVar35[1] = auVar38._4_4_;
  puVar35[2] = auVar38._8_4_;
  puVar35[3] = auVar38._12_4_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar38._8_8_;
  auVar37._8_8_ = in_v1_udw;
  auVar37._0_8_ = 0x3f;
  auVar38 = _pcpyld(auVar37,auVar17 << 0x40);
  puVar35[4] = auVar38._0_4_;
  puVar35[5] = auVar38._4_4_;
  puVar35[6] = auVar38._8_4_;
  puVar35[7] = auVar38._12_4_;
  auVar22._8_8_ = auVar38._8_8_;
  auVar22._0_8_ = 6;
  auVar16._8_4_ = in_s6_udw;
  auVar16._0_8_ = param_3;
  auVar16._12_4_ = in_register_0000016c;
  auVar38 = _pcpyld(auVar22,auVar16);
  puVar35[8] = auVar38._0_4_;
  puVar35[9] = auVar38._4_4_;
  puVar35[10] = auVar38._8_4_;
  puVar35[0xb] = auVar38._12_4_;
  auVar23._8_8_ = auVar38._8_8_;
  auVar23._0_8_ = 0x14;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x61;
  auVar38 = _pcpyld(auVar23,auVar1);
  puVar35[0xc] = auVar38._0_4_;
  puVar35[0xd] = auVar38._4_4_;
  puVar35[0xe] = auVar38._8_4_;
  puVar35[0xf] = auVar38._12_4_;
  auVar24._8_8_ = auVar38._8_8_;
  auVar24._0_8_ = 0x4c;
  auVar14._8_4_ = in_s4_udw;
  auVar14._0_8_ = param_1;
  auVar14._12_4_ = in_register_0000014c;
  auVar38 = _pcpyld(auVar24,auVar14);
  puVar35[0x10] = auVar38._0_4_;
  puVar35[0x11] = auVar38._4_4_;
  puVar35[0x12] = auVar38._8_4_;
  puVar35[0x13] = auVar38._12_4_;
  auVar25._8_8_ = auVar38._8_8_;
  auVar25._0_8_ = 0x47;
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 0x33001;
  auVar38 = _pcpyld(auVar25,auVar2);
  puVar35[0x14] = auVar38._0_4_;
  puVar35[0x15] = auVar38._4_4_;
  puVar35[0x16] = auVar38._8_4_;
  puVar35[0x17] = auVar38._12_4_;
  auVar26._8_8_ = auVar38._8_8_;
  auVar26._0_8_ = 8;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0xffc00ffc00a;
  auVar38 = _pcpyld(auVar26,auVar3);
  puVar35[0x18] = auVar38._0_4_;
  puVar35[0x19] = auVar38._4_4_;
  puVar35[0x1a] = auVar38._8_4_;
  puVar35[0x1b] = auVar38._12_4_;
  auVar27._8_8_ = auVar38._8_8_;
  auVar27._0_8_ = 0x18;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_v1_udw;
  auVar38 = _pcpyld(auVar27,auVar18 << 0x40);
  puVar35[0x1c] = auVar38._0_4_;
  puVar35[0x1d] = auVar38._4_4_;
  puVar35[0x1e] = auVar38._8_4_;
  puVar35[0x1f] = auVar38._12_4_;
  auVar28._8_8_ = auVar38._8_8_;
  auVar28._0_8_ = 0x40;
  auVar12._8_4_ = in_s3_udw;
  auVar12._0_8_ = param_2;
  auVar12._12_4_ = in_register_0000013c;
  auVar38 = _pcpyld(auVar28,auVar12);
  puVar35[0x20] = auVar38._0_4_;
  puVar35[0x21] = auVar38._4_4_;
  puVar35[0x22] = auVar38._8_4_;
  puVar35[0x23] = auVar38._12_4_;
  auVar29._8_8_ = auVar38._8_8_;
  auVar29._0_8_ = 0x42;
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = param_6;
  auVar38 = _pcpyld(auVar29,auVar7);
  puVar35[0x24] = auVar38._0_4_;
  puVar35[0x25] = auVar38._4_4_;
  puVar35[0x26] = auVar38._8_4_;
  puVar35[0x27] = auVar38._12_4_;
  auVar37 = _lqc2(auVar36);
  auVar38 = _qmfc2(auVar37._0_4_);
  auVar36 = _sqc2(auVar37);
  fStack_cc = auVar36._4_4_;
  auVar36 = _sqc2(auVar37);
  fStack_c8 = auVar36._8_4_;
  auVar36 = _sqc2(auVar37);
  fStack_c4 = auVar36._12_4_;
  auVar36._8_8_ = in_v1_udw;
  auVar36._0_8_ =
       (long)(int)auVar38._0_4_ | (long)(int)fStack_cc << 8 | (long)(int)fStack_c8 << 0x10 |
       CONCAT44((int)(int3)((uint)(int)fStack_c4 >> 8),(int)fStack_c4 << 0x18) | 0x3f80000000000000;
  auVar8._8_8_ = in_a2_udw;
  auVar8._0_8_ = 1;
  auVar36 = _pcpyld(auVar8,auVar36);
  puVar35[0x28] = auVar36._0_4_;
  puVar35[0x29] = auVar36._4_4_;
  puVar35[0x2a] = auVar36._8_4_;
  puVar35[0x2b] = auVar36._12_4_;
  auVar4._4_4_ = 0x44000000;
  auVar4._0_4_ = uVar34 | 0x8000;
  auVar4._8_8_ = in_v1_udw;
  auVar9._8_8_ = in_a2_udw;
  auVar9._0_8_ = 0x5353;
  auVar36 = _pcpyld(auVar9,auVar4);
  puVar35[0x2c] = auVar36._0_4_;
  puVar35[0x2d] = auVar36._4_4_;
  puVar35[0x2e] = auVar36._8_4_;
  puVar35[0x2f] = auVar36._12_4_;
  puVar35 = puVar35 + 0x30;
  uVar15 = 0;
  param_4 = param_4 & 0xffffffff;
  uVar19 = FUN_0028fbd8(param_4 << 3,uVar32);
  lVar20 = FUN_0028fbd8(param_4 << 5,uVar32);
  uVar31 = 0;
  if (uVar34 != 0) {
    uVar13 = uVar19;
    do {
      auVar5._8_8_ = in_v1_udw;
      auVar5._0_8_ = uVar13 | uVar19 << 0x10;
      auVar10._8_8_ = in_a2_udw;
      auVar10._0_8_ = uVar15;
      auVar36 = _pcpyld(auVar10,auVar5);
      *puVar35 = auVar36._0_4_;
      puVar35[1] = auVar36._4_4_;
      puVar35[2] = auVar36._8_4_;
      puVar35[3] = auVar36._12_4_;
      if (uVar31 < uVar34 - 1) {
        uVar15 = uVar15 + 0x200;
        uVar13 = uVar13 + lVar20 * 0x10;
      }
      else {
        uVar15 = (uVar33 & 0xffffffff) << 4;
        uVar13 = param_4 * 0x10 + uVar19;
      }
      auVar6._8_8_ = in_v1_udw;
      auVar6._0_8_ = uVar13 | (uVar19 + (param_5 & 0xffffffff) * 0x10) * 0x10000;
      auVar11._8_8_ = in_a2_udw;
      auVar11._0_8_ =
           uVar15 | (((((ulong)uVar30 & 0x3ff0000) >> 0x10) - ((ulong)uVar30 & 0x3ff)) + 1 &
                    0xffffffff) << 0x14;
      auVar36 = _pcpyld(auVar11,auVar6);
      puVar35[4] = auVar36._0_4_;
      puVar35[5] = auVar36._4_4_;
      puVar35[6] = auVar36._8_4_;
      puVar35[7] = auVar36._12_4_;
      uVar31 = uVar31 + 1;
      puVar35 = puVar35 + 8;
    } while (uVar31 < uVar34);
  }
  DAT_0040e5f0 = puVar35;
  return;
}


// ==== FUN_001c7d08 @ 001c7d08 ====

void FUN_001c7d08(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  undefined8 in_t1_udw;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = in_t1_udw;
  auVar1._0_8_ = param_6;
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_001c79d0(param_1,param_2,
               (long)(int)(uint)(((param_3 & 0x1ff) << 0x2b) >> 0x26) |
               (long)(int)(((uint)(param_3 >> 10) & 0xfc0) >> 6) << 0xe |
               (long)(int)((uint)(param_3 >> 0x18) & 0x3f) << 0x14 | 0x2a8000000,
               (((uint)((ulong)param_4 >> 0x10) & 0x3ff) - ((uint)param_4 & 0x3ff)) + 1,
               (((ushort)((ulong)param_4 >> 0x30) & 0x3ff) -
               ((uint)((ulong)param_4 >> 0x20) & 0x3ff)) + 1,param_5,auVar1._0_8_);
  return;
}


// ==== FUN_001c7db8 @ 001c7db8 ====

ulong FUN_001c7db8(uint param_1,uint param_2,int param_3,ulong param_4,long param_5)

{
  undefined1 auVar1 [16];
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
  uint uVar29;
  undefined8 in_v0_udw;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 in_a0_udw;
  ulong in_a1_udw;
  ulong in_t1_udw;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  
  lVar39 = (long)(((ulong)param_1 & 0x3f000000) << 8) >> 0x20;
  lVar40 = (long)(((ulong)param_2 & 0x3f000000) << 8) >> 0x20;
  if (lVar40 == 0) {
    lVar40 = 2;
  }
  else if ((int)(((ulong)param_2 & 0x3f000000) >> 0x18) == 0x31) {
    lVar40 = 0x32;
  }
  if (lVar39 == 0) {
    lVar39 = 2;
  }
  else if ((int)(((ulong)param_1 & 0x3f000000) >> 0x18) == 0x31) {
    lVar39 = 0x32;
  }
  if (0x1ff < param_4) {
    param_4 = 0x1fe;
  }
  lVar37 = (long)(int)((uint)(((ulong)param_2 & 0x3f0000) >> 10) >> 6);
  uVar41 = param_3 + 0xfU >> 4;
  uVar42 = (uint)((((ulong)param_1 & 0x1ff) << 0x2b) >> 0x20);
  uVar38 = lVar37 << 0xe;
  FUN_002b3d88(0x80000000,uVar41 * 2 + 0xe);
  auVar31._8_8_ = in_v0_udw;
  auVar31._0_8_ = 0xe;
  auVar13._8_8_ = in_t1_udw;
  auVar13._0_8_ = 0x10ab40000000000c;
  auVar31 = _pcpyld(auVar31,auVar13);
  *DAT_0040e5f0 = auVar31._0_4_;
  DAT_0040e5f0[1] = auVar31._4_4_;
  DAT_0040e5f0[2] = auVar31._8_4_;
  DAT_0040e5f0[3] = auVar31._12_4_;
  auVar1._8_8_ = in_v0_udw;
  auVar1._0_8_ = 0x3f;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = in_a1_udw;
  auVar31 = _pcpyld(auVar1,auVar25 << 0x40);
  DAT_0040e5f0[4] = auVar31._0_4_;
  DAT_0040e5f0[5] = auVar31._4_4_;
  DAT_0040e5f0[6] = auVar31._8_4_;
  DAT_0040e5f0[7] = auVar31._12_4_;
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x4c;
  auVar14._8_8_ = in_t1_udw;
  auVar14._0_8_ = (ulong)(uVar42 >> 0xb | (uint)(lVar37 << 0x10)) | lVar39 << 0x18 | 0x3fff00000000;
  auVar31 = _pcpyld(auVar2,auVar14);
  DAT_0040e5f0[8] = auVar31._0_4_;
  DAT_0040e5f0[9] = auVar31._4_4_;
  DAT_0040e5f0[10] = auVar31._8_4_;
  DAT_0040e5f0[0xb] = auVar31._12_4_;
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 0x14;
  auVar15._8_8_ = in_t1_udw;
  auVar15._0_8_ = 1;
  auVar31 = _pcpyld(auVar3,auVar15);
  DAT_0040e5f0[0xc] = auVar31._0_4_;
  DAT_0040e5f0[0xd] = auVar31._4_4_;
  DAT_0040e5f0[0xe] = auVar31._8_4_;
  DAT_0040e5f0[0xf] = auVar31._12_4_;
  auVar4._8_8_ = in_v0_udw;
  auVar4._0_8_ = 0x18;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = in_a1_udw;
  auVar31 = _pcpyld(auVar4,auVar26 << 0x40);
  DAT_0040e5f0[0x10] = auVar31._0_4_;
  DAT_0040e5f0[0x11] = auVar31._4_4_;
  DAT_0040e5f0[0x12] = auVar31._8_4_;
  DAT_0040e5f0[0x13] = auVar31._12_4_;
  auVar11._8_8_ = in_a0_udw;
  auVar11._0_8_ = 6;
  auVar16._8_8_ = in_t1_udw;
  auVar16._0_8_ =
       (long)(int)(uint)((((ulong)param_2 & 0x1ff) << 0x2b) >> 0x26) | uVar38 | lVar40 << 0x14 |
       0xea8000000;
  auVar31 = _pcpyld(auVar11,auVar16);
  DAT_0040e5f0[0x14] = auVar31._0_4_;
  DAT_0040e5f0[0x15] = auVar31._4_4_;
  DAT_0040e5f0[0x16] = auVar31._8_4_;
  DAT_0040e5f0[0x17] = auVar31._12_4_;
  auVar5._8_8_ = in_v0_udw;
  auVar5._0_8_ = 0x3b;
  auVar17._8_8_ = in_t1_udw;
  auVar17._0_8_ = 0x8000000000;
  auVar31 = _pcpyld(auVar5,auVar17);
  DAT_0040e5f0[0x18] = auVar31._0_4_;
  DAT_0040e5f0[0x19] = auVar31._4_4_;
  DAT_0040e5f0[0x1a] = auVar31._8_4_;
  DAT_0040e5f0[0x1b] = auVar31._12_4_;
  auVar6._8_8_ = in_v0_udw;
  auVar6._0_8_ = 0x47;
  auVar18._8_8_ = in_t1_udw;
  auVar18._0_8_ = 0x31001;
  auVar31 = _pcpyld(auVar6,auVar18);
  DAT_0040e5f0[0x1c] = auVar31._0_4_;
  DAT_0040e5f0[0x1d] = auVar31._4_4_;
  DAT_0040e5f0[0x1e] = auVar31._8_4_;
  DAT_0040e5f0[0x1f] = auVar31._12_4_;
  auVar7._8_8_ = in_v0_udw;
  auVar7._0_8_ = 8;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = in_t1_udw;
  auVar31 = _pcpyld(auVar7,auVar27 << 0x40);
  DAT_0040e5f0[0x20] = auVar31._0_4_;
  DAT_0040e5f0[0x21] = auVar31._4_4_;
  DAT_0040e5f0[0x22] = auVar31._8_4_;
  DAT_0040e5f0[0x23] = auVar31._12_4_;
  auVar8._8_8_ = in_v0_udw;
  auVar8._0_8_ = 0x45;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = in_t1_udw;
  auVar31 = _pcpyld(auVar8,auVar28 << 0x40);
  DAT_0040e5f0[0x24] = auVar31._0_4_;
  DAT_0040e5f0[0x25] = auVar31._4_4_;
  DAT_0040e5f0[0x26] = auVar31._8_4_;
  DAT_0040e5f0[0x27] = auVar31._12_4_;
  auVar12._8_8_ = in_a0_udw;
  auVar12._0_8_ = 0x40;
  auVar19._8_8_ = in_t1_udw;
  auVar19._0_8_ = (ulong)(param_3 - 1) << 0x10 | (long)((int)param_4 * 2 + -1) << 0x30;
  auVar31 = _pcpyld(auVar12,auVar19);
  DAT_0040e5f0[0x28] = auVar31._0_4_;
  DAT_0040e5f0[0x29] = auVar31._4_4_;
  DAT_0040e5f0[0x2a] = auVar31._8_4_;
  DAT_0040e5f0[0x2b] = auVar31._12_4_;
  auVar9._8_8_ = in_v0_udw;
  auVar9._0_8_ = 0x42;
  auVar20._8_8_ = in_t1_udw;
  auVar20._0_8_ = 0x2a;
  auVar31 = _pcpyld(auVar9,auVar20);
  DAT_0040e5f0[0x2c] = auVar31._0_4_;
  DAT_0040e5f0[0x2d] = auVar31._4_4_;
  DAT_0040e5f0[0x2e] = auVar31._8_4_;
  DAT_0040e5f0[0x2f] = auVar31._12_4_;
  auVar10._8_8_ = in_v0_udw;
  auVar10._0_8_ = 1;
  auVar21._8_8_ = in_t1_udw;
  auVar21._0_8_ = 0x3f80000080ffffff;
  auVar31 = _pcpyld(auVar10,auVar21);
  DAT_0040e5f0[0x30] = auVar31._0_4_;
  DAT_0040e5f0[0x31] = auVar31._4_4_;
  DAT_0040e5f0[0x32] = auVar31._8_4_;
  DAT_0040e5f0[0x33] = auVar31._12_4_;
  auVar32._8_8_ = auVar31._8_8_;
  auVar32._0_8_ = 0x5353;
  auVar22._4_4_ = 0x44000000;
  auVar22._0_4_ = uVar41 | 0x8000;
  auVar22._8_8_ = in_t1_udw;
  auVar31 = _pcpyld(auVar32,auVar22);
  DAT_0040e5f0[0x34] = auVar31._0_4_;
  DAT_0040e5f0[0x35] = auVar31._4_4_;
  DAT_0040e5f0[0x36] = auVar31._8_4_;
  DAT_0040e5f0[0x37] = auVar31._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x38;
  uVar36 = 8;
  uVar29 = (int)param_4 * 0x20;
  iVar30 = uVar29 + 8;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar31._8_8_;
  auVar35 = auVar35 << 0x40;
  lVar39 = 0x80;
  if (uVar41 != 0) {
    do {
      auVar33._8_8_ = auVar35._8_8_;
      auVar33._0_8_ = lVar39;
      auVar23._8_8_ = in_t1_udw;
      auVar23._0_8_ = uVar36 | 0x80000;
      auVar31 = _pcpyld(auVar33,auVar23);
      *DAT_0040e5f0 = auVar31._0_4_;
      DAT_0040e5f0[1] = auVar31._4_4_;
      DAT_0040e5f0[2] = auVar31._8_4_;
      DAT_0040e5f0[3] = auVar31._12_4_;
      auVar34._8_8_ = auVar31._8_8_;
      auVar34._0_8_ = lVar39 + 0x80U | (ulong)uVar29 << 0x10;
      auVar24._8_8_ = in_t1_udw;
      auVar24._0_8_ =
           uVar36 + 0x80 | (ulong)CONCAT24((short)((uint)iVar30 >> 0x10),iVar30 * 0x10000);
      auVar35 = _pcpyld(auVar34,auVar24);
      DAT_0040e5f0[4] = auVar35._0_4_;
      DAT_0040e5f0[5] = auVar35._4_4_;
      DAT_0040e5f0[6] = auVar35._8_4_;
      DAT_0040e5f0[7] = auVar35._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 8;
      lVar39 = lVar39 + 0x100;
      uVar41 = uVar41 - 1;
      uVar36 = uVar36 + 0x100;
    } while (uVar41 != 0);
  }
  return (ulong)(uVar42 >> 6 | (uint)uVar38) | param_5 << 0x25 | 0x6a9b00000U | 0x2000000000000000;
}


// ==== FUN_001c8108 @ 001c8108 ====

undefined8
FUN_001c8108(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_4 < 0x200) {
    uVar2 = FUN_001c7db8(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = FUN_001c7db8();
    iVar1 = ((uint)param_2 >> 0x10 & 0x3f) * 0xf;
    FUN_001c7db8(param_1 & 0xfffffffffffffe00 | (ulong)(((uint)param_1 & 0x1ff) + iVar1),
                 param_2 & 0xfffffffffffffe00 | (ulong)(((uint)param_2 & 0x1ff) + iVar1),param_3,
                 (int)param_4 + -0x1e0,param_5);
  }
  return uVar2;
}


// ==== FUN_001c81f0 @ 001c81f0 ====

void FUN_001c81f0(float param_1,float param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined8 extraout_v0_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  undefined8 in_v1_udw;
  uint uVar17;
  undefined8 in_a1_udw;
  ulong uVar18;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  uint uVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  
  uVar20 = (param_3 & 1) * 0x80 + (param_3 & 4) * 0x40 + (param_3 & 0x10) * 0x20;
  uVar19 = (param_3 & 2) * 0x40 + (param_3 & 8) * 0x20;
  FUN_002b3d88(0xffffffff80000000,0x106);
  auVar11._8_8_ = extraout_v0_udw;
  auVar11._0_8_ = 0xe;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 0x1000400000000004;
  auVar12 = _pcpyld(auVar11,auVar1);
  *DAT_0040e5f0 = auVar12._0_4_;
  DAT_0040e5f0[1] = auVar12._4_4_;
  DAT_0040e5f0[2] = auVar12._8_4_;
  DAT_0040e5f0[3] = auVar12._12_4_;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = param_3 >> 5 | 0x10000;
  auVar12._8_8_ = in_v1_udw;
  auVar12._0_8_ = 0x4c;
  auVar2._8_8_ = in_a1_udw;
  auVar12 = _pcpyld(auVar12,auVar2);
  DAT_0040e5f0[4] = auVar12._0_4_;
  DAT_0040e5f0[5] = auVar12._4_4_;
  DAT_0040e5f0[6] = auVar12._8_4_;
  DAT_0040e5f0[7] = auVar12._12_4_;
  uVar17 = uVar20 >> 4;
  auVar13._8_8_ = auVar12._8_8_;
  uVar16 = uVar19 >> 4;
  auVar13._0_8_ = 0x40;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = CONCAT44(uVar16,uVar17 | (uVar17 + 0xf) * 0x10000) |
                 (long)(int)(uVar16 + 0xf) << 0x30;
  auVar12 = _pcpyld(auVar13,auVar3);
  DAT_0040e5f0[8] = auVar12._0_4_;
  DAT_0040e5f0[9] = auVar12._4_4_;
  DAT_0040e5f0[10] = auVar12._8_4_;
  DAT_0040e5f0[0xb] = auVar12._12_4_;
  auVar14._8_8_ = auVar12._8_8_;
  auVar14._0_8_ = 0x47;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0x31001;
  auVar12 = _pcpyld(auVar14,auVar4);
  DAT_0040e5f0[0xc] = auVar12._0_4_;
  DAT_0040e5f0[0xd] = auVar12._4_4_;
  DAT_0040e5f0[0xe] = auVar12._8_4_;
  DAT_0040e5f0[0xf] = auVar12._12_4_;
  auVar15._8_8_ = auVar12._8_8_;
  auVar15._0_8_ = 0x42;
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 0x2a;
  auVar12 = _pcpyld(auVar15,auVar5);
  DAT_0040e5f0[0x10] = auVar12._0_4_;
  DAT_0040e5f0[0x11] = auVar12._4_4_;
  DAT_0040e5f0[0x12] = auVar12._8_4_;
  DAT_0040e5f0[0x13] = auVar12._12_4_;
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = 0x2400000000008100;
  auVar8._8_4_ = in_s0_udw;
  auVar8._0_8_ = 0x51;
  auVar8._12_4_ = in_register_0000010c;
  auVar12 = _pcpyld(auVar8,auVar6);
  DAT_0040e5f0[0x14] = auVar12._0_4_;
  DAT_0040e5f0[0x15] = auVar12._4_4_;
  DAT_0040e5f0[0x16] = auVar12._8_4_;
  DAT_0040e5f0[0x17] = auVar12._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x18;
  uVar18 = 0;
  fVar23 = 0.5 - param_1 * 0.25;
  fVar23 = (float)((int)fVar23 * (uint)(0.0 < fVar23));
  fVar23 = (float)((int)fVar23 * (uint)(fVar23 < 1.0) | (uint)(fVar23 >= 1.0) * 0x3f800000);
  do {
    uVar16 = (uint)uVar18;
    fVar22 = param_2 * ((float)(int)uVar16 / 255.0 - fVar23) + fVar23;
    fVar22 = (float)((int)fVar22 * (uint)(0.0 < fVar22));
    iVar21 = (int)((float)((int)fVar22 * (uint)(fVar22 < 1.0) | (uint)(fVar22 >= 1.0) * 0x3f800000)
                  * 255.0);
    uVar10 = (ulong)iVar21;
    auVar7._8_8_ = in_a1_udw;
    auVar7._0_8_ = uVar10 | CONCAT44((int)(char)((uint)iVar21 >> 0x18),(int)(uVar10 << 8)) |
                   uVar10 << 0x10 | 0x80000000;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = uVar20 | (uVar16 & 7) << 4 | (uVar16 & 0x10) << 3 |
                   (uint)(((long)(int)(uVar19 | (uVar16 & 8) << 1) | uVar18 & 0xe0) << 0x10);
    auVar9._8_4_ = in_s0_udw;
    auVar9._12_4_ = in_register_0000010c;
    auVar12 = _pcpyld(auVar9,auVar7);
    *DAT_0040e5f0 = auVar12._0_4_;
    DAT_0040e5f0[1] = auVar12._4_4_;
    DAT_0040e5f0[2] = auVar12._8_4_;
    DAT_0040e5f0[3] = auVar12._12_4_;
    uVar18 = (ulong)(int)(uVar16 + 1);
    DAT_0040e5f0 = DAT_0040e5f0 + 4;
  } while ((long)uVar18 < 0x100);
  return;
}


// ==== FUN_001c8420 @ 001c8420 ====

void FUN_001c8420(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar1 = param_1 + 2;
    do {
      iVar2 = iVar2 + 1;
      if (*piVar1 == param_2) {
        return;
      }
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  iVar2 = *param_1;
  param_1[iVar2 + 2] = param_2;
  *param_1 = iVar2 + 1;
  param_1[1] = param_1[1] + *(int *)(param_2 + 100);
  return;
}


// ==== FUN_001c8478 @ 001c8478 ====

void FUN_001c8478(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((DAT_0044055c - *(int *)(&DAT_00440344 + DAT_00440540 * 0x100) < param_1[1]) ||
     (DAT_00440568 - *(int *)(&DAT_00440340 + DAT_00440540 * 0x100) < *param_1)) {
    FUN_00270fd8(0x440280);
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = param_1 + 2;
    do {
      FUN_002707d8(0,0x440280,*piVar2,1,0,1);
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return;
}


// ==== FUN_001c8560 @ 001c8560 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c8560(int param_1)

{
  undefined1 auVar1 [12];
  int iVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_v1_udw;
  int iVar3;
  undefined8 in_a0_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = DAT_00449438;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = *(undefined8 *)(DAT_00449438 + 0x20);
  auVar4._4_4_ = *(undefined4 *)(DAT_00449438 + 0x28);
  auVar4._0_4_ = *(undefined4 *)(DAT_00449438 + 0x28);
  auVar4._8_8_ = in_v1_udw;
  auVar4 = _pcpyld(auVar4,auVar8);
  auVar8 = _por(in_zero_qw,auVar4);
  *(int *)(param_1 + 0x150) = auVar8._0_4_;
  *(int *)(param_1 + 0x154) = auVar8._4_4_;
  *(int *)(param_1 + 0x158) = auVar8._8_4_;
  *(int *)(param_1 + 0x15c) = auVar8._12_4_;
  auVar21._8_8_ = auVar4._8_8_;
  auVar21._0_8_ = *(undefined8 *)(iVar2 + 0x30);
  auVar6._4_4_ = *(undefined4 *)(iVar2 + 0x38);
  auVar6._0_4_ = *(undefined4 *)(iVar2 + 0x38);
  auVar6._8_8_ = in_v1_udw;
  auVar4 = _pcpyld(auVar6,auVar21);
  auVar7 = _por(in_zero_qw,auVar4);
  *(int *)(param_1 + 0x160) = auVar7._0_4_;
  *(int *)(param_1 + 0x164) = auVar7._4_4_;
  *(int *)(param_1 + 0x168) = auVar7._8_4_;
  *(int *)(param_1 + 0x16c) = auVar7._12_4_;
  auVar22._8_8_ = auVar4._8_8_;
  auVar22._0_8_ = *(undefined8 *)(iVar2 + 0x40);
  auVar20._4_4_ = *(undefined4 *)(iVar2 + 0x48);
  auVar20._0_4_ = *(undefined4 *)(iVar2 + 0x48);
  auVar20._8_8_ = in_v1_udw;
  auVar4 = _pcpyld(auVar20,auVar22);
  auVar6 = _por(in_zero_qw,auVar4);
  *(int *)(param_1 + 0x170) = auVar6._0_4_;
  *(int *)(param_1 + 0x174) = auVar6._4_4_;
  *(int *)(param_1 + 0x178) = auVar6._8_4_;
  *(int *)(param_1 + 0x17c) = auVar6._12_4_;
  uVar13 = *(undefined4 *)(iVar2 + 0x58);
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = *(undefined8 *)(iVar2 + 0x50);
  *(int *)(param_1 + 0xc0) = auVar7._0_4_;
  *(int *)(param_1 + 0xc4) = auVar7._4_4_;
  *(int *)(param_1 + 200) = auVar7._8_4_;
  *(int *)(param_1 + 0xcc) = auVar7._12_4_;
  auVar7._4_4_ = uVar13;
  auVar7._0_4_ = uVar13;
  auVar7._8_8_ = in_v1_udw;
  auVar4 = _pcpyld(auVar7,auVar5);
  *(int *)(param_1 + 0xd0) = auVar6._0_4_;
  *(int *)(param_1 + 0xd4) = auVar6._4_4_;
  *(int *)(param_1 + 0xd8) = auVar6._8_4_;
  *(int *)(param_1 + 0xdc) = auVar6._12_4_;
  *(int *)(param_1 + 0xe0) = auVar4._0_4_;
  *(int *)(param_1 + 0xe4) = auVar4._4_4_;
  *(int *)(param_1 + 0xe8) = auVar4._8_4_;
  *(int *)(param_1 + 0xec) = auVar4._12_4_;
  *(int *)(param_1 + 0x180) = auVar4._0_4_;
  *(int *)(param_1 + 0x184) = auVar4._4_4_;
  *(int *)(param_1 + 0x188) = auVar4._8_4_;
  *(int *)(param_1 + 0x18c) = auVar4._12_4_;
  *(int *)(param_1 + 0xb0) = auVar8._0_4_;
  *(int *)(param_1 + 0xb4) = auVar8._4_4_;
  *(int *)(param_1 + 0xb8) = auVar8._8_4_;
  *(int *)(param_1 + 0xbc) = auVar8._12_4_;
  fVar16 = *(float *)(iVar2 + 0x84);
  uVar19 = *(undefined4 *)(iVar2 + 0x90);
  uVar13 = *(undefined4 *)(iVar2 + 0x8c);
  iVar10 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  *(float *)(param_1 + 0xf0) = (float)*(int *)(*(int *)(iVar2 + 0x60) + 0xc);
  *(float *)(param_1 + 0xf4) = (float)iVar10;
  *(undefined4 *)(param_1 + 0xf8) = uVar13;
  *(float *)(param_1 + 0xfc) = -255.0 / (fVar16 - 0.0);
  auVar6 = _lqc2(_DAT_003c3fa0);
  auVar4 = _lqc2(_DAT_003c3f90);
  auVar20 = _vaddbc(auVar4,auVar6);
  auVar6 = _vaddbc(auVar4,auVar6);
  auVar4 = _sqc2(auVar20);
  auVar6 = _qmfc2(auVar6._0_4_);
  uStack_3c = auVar4._4_4_;
  *(int *)(param_1 + 0x100) = auVar6._0_4_;
  *(undefined4 *)(param_1 + 0x104) = uStack_3c;
  *(undefined4 *)(param_1 + 0x108) = uVar19;
  *(float *)(param_1 + 0x10c) = fVar16;
  fVar15 = *(float *)(iVar2 + 0x84);
  fVar17 = *(float *)(iVar2 + 0x80);
  auVar22 = _qmtc2(fVar15);
  auVar21 = _qmtc2(fVar17);
  iVar3 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10) >> 1;
  fVar18 = 1.0 / (fVar15 - fVar17);
  iVar10 = *(int *)(*(int *)(iVar2 + 0x60) + 0xc) >> 1;
  fVar11 = 2047.9374 - (float)iVar3;
  fVar12 = 2047.9374 - (float)iVar10;
  fVar9 = (float)(iVar3 + 5);
  auVar4 = _qmtc2(fVar11);
  fVar14 = (float)(iVar10 + 5);
  auVar6 = _qmtc2(fVar12);
  _vaddbc(in_vf0,auVar6);
  _vaddbc(in_vf0,auVar4);
  auVar4 = _qmtc2(fVar14);
  auVar8 = _qmtc2(fVar9);
  auVar20 = _qmtc2(1.0 / fVar11);
  auVar7 = _qmtc2(1.0 / fVar12);
  _vaddbc(in_vf0,auVar4);
  auVar6 = _qmtc2(1.0 / fVar14);
  _vaddbc(in_vf0,auVar8);
  auVar4 = _qmtc2(1.0 / fVar9);
  _vaddbc(in_vf0,auVar7);
  _vaddbc(in_vf0,auVar20);
  _vaddbc(in_vf0,auVar6);
  _vaddbc(in_vf0,auVar4);
  _vmulbc(in_vf0,auVar22);
  _vmulbc(in_vf0,auVar21);
  _vmulbc(in_vf0,auVar22);
  _vmulbc(in_vf0,auVar21);
  if (*(int *)(iVar2 + 0x14) == 1) {
    DAT_0040e060 = DAT_0040e060 & 0xf7;
    auVar4 = _qmtc2((fVar15 + fVar17) * fVar18);
    auVar20 = _vaddbc(in_vf0,auVar4);
    auVar6 = _vaddbc(in_vf0,auVar4);
    auVar4 = _qmtc2(fVar15 * -2.0 * fVar17 * fVar18);
  }
  else {
    DAT_0040e060 = DAT_0040e060 | 8;
    auVar6 = _qmtc2(fVar18 + fVar18);
    auVar20 = _vaddbc(in_vf0,auVar6);
    auVar4 = _qmtc2((fVar15 + fVar17) * -fVar18);
    auVar6 = _vaddbc(in_vf0,auVar6);
  }
  auVar7 = _vaddbc(in_vf0,auVar4);
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar4;
  auVar4 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x140) = auVar4;
  auVar4 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x110) = auVar4;
  auVar4 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar4;
  FUN_00268ac8();
  auVar1 = *(undefined1 (*) [12])(*(int *)(iVar2 + 4) + 0x40);
  uStack_40 = auVar1._0_4_;
  uStack_3c = auVar1._4_4_;
  uStack_38 = auVar1._8_4_;
  *(undefined4 *)(param_1 + 400) = uStack_40;
  *(undefined4 *)(param_1 + 0x194) = uStack_3c;
  *(undefined4 *)(param_1 + 0x198) = uStack_38;
  *(float *)(param_1 + 0x19c) = fVar16;
  return;
}


// ==== FUN_001c88c8 @ 001c88c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c88c8(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 in_zero_qw [16];
  undefined8 in_v1_udw;
  int iVar2;
  undefined8 in_a0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 in_vf0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  auVar7._8_8_ = in_a0_udw;
  auVar7._0_8_ = *(undefined8 *)(param_2 + 0x20);
  auVar3._4_4_ = *(undefined4 *)(param_2 + 0x28);
  auVar3._0_4_ = *(undefined4 *)(param_2 + 0x28);
  auVar3._8_8_ = in_v1_udw;
  auVar3 = _pcpyld(auVar3,auVar7);
  auVar7 = _por(in_zero_qw,auVar3);
  *(int *)(param_1 + 0x150) = auVar7._0_4_;
  *(int *)(param_1 + 0x154) = auVar7._4_4_;
  *(int *)(param_1 + 0x158) = auVar7._8_4_;
  *(int *)(param_1 + 0x15c) = auVar7._12_4_;
  auVar20._8_8_ = auVar3._8_8_;
  auVar20._0_8_ = *(undefined8 *)(param_2 + 0x30);
  auVar5._4_4_ = *(undefined4 *)(param_2 + 0x38);
  auVar5._0_4_ = *(undefined4 *)(param_2 + 0x38);
  auVar5._8_8_ = in_v1_udw;
  auVar3 = _pcpyld(auVar5,auVar20);
  auVar6 = _por(in_zero_qw,auVar3);
  *(int *)(param_1 + 0x160) = auVar6._0_4_;
  *(int *)(param_1 + 0x164) = auVar6._4_4_;
  *(int *)(param_1 + 0x168) = auVar6._8_4_;
  *(int *)(param_1 + 0x16c) = auVar6._12_4_;
  auVar21._8_8_ = auVar3._8_8_;
  auVar21._0_8_ = *(undefined8 *)(param_2 + 0x40);
  auVar19._4_4_ = *(undefined4 *)(param_2 + 0x48);
  auVar19._0_4_ = *(undefined4 *)(param_2 + 0x48);
  auVar19._8_8_ = in_v1_udw;
  auVar3 = _pcpyld(auVar19,auVar21);
  auVar5 = _por(in_zero_qw,auVar3);
  *(int *)(param_1 + 0x170) = auVar5._0_4_;
  *(int *)(param_1 + 0x174) = auVar5._4_4_;
  *(int *)(param_1 + 0x178) = auVar5._8_4_;
  *(int *)(param_1 + 0x17c) = auVar5._12_4_;
  uVar11 = *(undefined4 *)(param_2 + 0x58);
  auVar4._8_8_ = auVar3._8_8_;
  auVar4._0_8_ = *(undefined8 *)(param_2 + 0x50);
  *(int *)(param_1 + 0xc0) = auVar6._0_4_;
  *(int *)(param_1 + 0xc4) = auVar6._4_4_;
  *(int *)(param_1 + 200) = auVar6._8_4_;
  *(int *)(param_1 + 0xcc) = auVar6._12_4_;
  auVar6._4_4_ = uVar11;
  auVar6._0_4_ = uVar11;
  auVar6._8_8_ = in_v1_udw;
  auVar3 = _pcpyld(auVar6,auVar4);
  *(int *)(param_1 + 0xd0) = auVar5._0_4_;
  *(int *)(param_1 + 0xd4) = auVar5._4_4_;
  *(int *)(param_1 + 0xd8) = auVar5._8_4_;
  *(int *)(param_1 + 0xdc) = auVar5._12_4_;
  *(int *)(param_1 + 0xe0) = auVar3._0_4_;
  *(int *)(param_1 + 0xe4) = auVar3._4_4_;
  *(int *)(param_1 + 0xe8) = auVar3._8_4_;
  *(int *)(param_1 + 0xec) = auVar3._12_4_;
  *(int *)(param_1 + 0x180) = auVar3._0_4_;
  *(int *)(param_1 + 0x184) = auVar3._4_4_;
  *(int *)(param_1 + 0x188) = auVar3._8_4_;
  *(int *)(param_1 + 0x18c) = auVar3._12_4_;
  *(int *)(param_1 + 0xb0) = auVar7._0_4_;
  *(int *)(param_1 + 0xb4) = auVar7._4_4_;
  *(int *)(param_1 + 0xb8) = auVar7._8_4_;
  *(int *)(param_1 + 0xbc) = auVar7._12_4_;
  fVar15 = *(float *)(param_2 + 0x84);
  uVar11 = *(undefined4 *)(param_2 + 0x8c);
  uVar18 = *(undefined4 *)(param_2 + 0x90);
  iVar9 = *(int *)(*(int *)(param_2 + 0x60) + 0x10);
  *(float *)(param_1 + 0xf0) = (float)*(int *)(*(int *)(param_2 + 0x60) + 0xc);
  *(float *)(param_1 + 0xf4) = (float)iVar9;
  *(undefined4 *)(param_1 + 0xf8) = uVar11;
  *(float *)(param_1 + 0xfc) = -255.0 / (fVar15 - 0.0);
  auVar5 = _lqc2(_DAT_003c3fa0);
  auVar3 = _lqc2(_DAT_003c3f90);
  auVar19 = _vaddbc(auVar3,auVar5);
  auVar5 = _vaddbc(auVar3,auVar5);
  auVar3 = _sqc2(auVar19);
  auVar5 = _qmfc2(auVar5._0_4_);
  uStack_3c = auVar3._4_4_;
  *(int *)(param_1 + 0x100) = auVar5._0_4_;
  *(undefined4 *)(param_1 + 0x104) = uStack_3c;
  *(undefined4 *)(param_1 + 0x108) = uVar18;
  *(float *)(param_1 + 0x10c) = fVar15;
  fVar13 = *(float *)(param_2 + 0x84);
  fVar16 = *(float *)(param_2 + 0x80);
  auVar21 = _qmtc2(fVar13);
  auVar20 = _qmtc2(fVar16);
  iVar2 = *(int *)(*(int *)(param_2 + 0x60) + 0x10) >> 1;
  fVar17 = 1.0 / (fVar13 - fVar16);
  iVar9 = *(int *)(*(int *)(param_2 + 0x60) + 0xc) >> 1;
  fVar10 = 2047.9374 - (float)iVar2;
  fVar14 = 2047.9374 - (float)iVar9;
  fVar8 = (float)(iVar2 + 5);
  auVar3 = _qmtc2(fVar10);
  fVar12 = (float)(iVar9 + 5);
  auVar5 = _qmtc2(fVar14);
  _vaddbc(in_vf0,auVar5);
  _vaddbc(in_vf0,auVar3);
  auVar3 = _qmtc2(fVar12);
  auVar7 = _qmtc2(fVar8);
  auVar19 = _qmtc2(1.0 / fVar10);
  auVar6 = _qmtc2(1.0 / fVar14);
  _vaddbc(in_vf0,auVar3);
  auVar5 = _qmtc2(1.0 / fVar12);
  _vaddbc(in_vf0,auVar7);
  auVar3 = _qmtc2(1.0 / fVar8);
  _vaddbc(in_vf0,auVar6);
  _vaddbc(in_vf0,auVar19);
  _vaddbc(in_vf0,auVar5);
  _vaddbc(in_vf0,auVar3);
  _vmulbc(in_vf0,auVar21);
  _vmulbc(in_vf0,auVar20);
  _vmulbc(in_vf0,auVar21);
  _vmulbc(in_vf0,auVar20);
  if (*(int *)(param_2 + 0x14) == 1) {
    DAT_0040e060 = bGpffff8870 & 0xf7;
    auVar3 = _qmtc2((fVar13 + fVar16) * fVar17);
    auVar19 = _vaddbc(in_vf0,auVar3);
    auVar5 = _vaddbc(in_vf0,auVar3);
    auVar3 = _qmtc2(fVar13 * -2.0 * fVar16 * fVar17);
  }
  else {
    DAT_0040e060 = bGpffff8870 | 8;
    auVar5 = _qmtc2(fVar17 + fVar17);
    auVar19 = _vaddbc(in_vf0,auVar5);
    auVar3 = _qmtc2((fVar13 + fVar16) * -fVar17);
    auVar5 = _vaddbc(in_vf0,auVar5);
  }
  auVar6 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar3;
  auVar3 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0x140) = auVar3;
  auVar3 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x110) = auVar3;
  auVar3 = _sqc2(auVar19);
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar3;
  FUN_00268ac8();
  auVar1 = *(undefined1 (*) [12])(*(int *)(param_2 + 4) + 0x40);
  uStack_40 = auVar1._0_4_;
  uStack_3c = auVar1._4_4_;
  uStack_38 = auVar1._8_4_;
  *(undefined4 *)(param_1 + 400) = uStack_40;
  *(undefined4 *)(param_1 + 0x194) = uStack_3c;
  *(undefined4 *)(param_1 + 0x198) = uStack_38;
  *(float *)(param_1 + 0x19c) = fVar15;
  return;
}


// ==== FUN_001c8c38 @ 001c8c38 ====

void FUN_001c8c38(int param_1)

{
  undefined4 uVar1;
  undefined4 in_v0_udw;
  undefined4 uVar2;
  undefined4 in_register_0000002c;
  undefined4 uVar3;
  undefined1 in_s0_qw [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4._8_8_ = in_s0_qw._8_8_;
  auVar4._0_8_ = 0x6c0a03f601000404;
  auVar5._8_4_ = in_v0_udw;
  auVar5._0_8_ = 0x1000000a;
  auVar5._12_4_ = in_register_0000002c;
  auVar5 = _pcpyld(auVar4,auVar5);
  FUN_002b3d88(0,0xb);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  DAT_0040e5f0[4] = *(undefined4 *)(param_1 + 0xb0);
  DAT_0040e5f0[5] = uVar1;
  DAT_0040e5f0[6] = uVar2;
  DAT_0040e5f0[7] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  uVar2 = *(undefined4 *)(param_1 + 200);
  uVar3 = *(undefined4 *)(param_1 + 0xcc);
  DAT_0040e5f0[8] = *(undefined4 *)(param_1 + 0xc0);
  DAT_0040e5f0[9] = uVar1;
  DAT_0040e5f0[10] = uVar2;
  DAT_0040e5f0[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xd4);
  uVar2 = *(undefined4 *)(param_1 + 0xd8);
  uVar3 = *(undefined4 *)(param_1 + 0xdc);
  DAT_0040e5f0[0xc] = *(undefined4 *)(param_1 + 0xd0);
  DAT_0040e5f0[0xd] = uVar1;
  DAT_0040e5f0[0xe] = uVar2;
  DAT_0040e5f0[0xf] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  DAT_0040e5f0[0x10] = *(undefined4 *)(param_1 + 0xe0);
  DAT_0040e5f0[0x11] = uVar1;
  DAT_0040e5f0[0x12] = uVar2;
  DAT_0040e5f0[0x13] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  DAT_0040e5f0[0x14] = *(undefined4 *)(param_1 + 0xf0);
  DAT_0040e5f0[0x15] = uVar1;
  DAT_0040e5f0[0x16] = uVar2;
  DAT_0040e5f0[0x17] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  uVar2 = *(undefined4 *)(param_1 + 0x108);
  uVar3 = *(undefined4 *)(param_1 + 0x10c);
  DAT_0040e5f0[0x18] = *(undefined4 *)(param_1 + 0x100);
  DAT_0040e5f0[0x19] = uVar1;
  DAT_0040e5f0[0x1a] = uVar2;
  DAT_0040e5f0[0x1b] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  uVar2 = *(undefined4 *)(param_1 + 0x118);
  uVar3 = *(undefined4 *)(param_1 + 0x11c);
  DAT_0040e5f0[0x1c] = *(undefined4 *)(param_1 + 0x110);
  DAT_0040e5f0[0x1d] = uVar1;
  DAT_0040e5f0[0x1e] = uVar2;
  DAT_0040e5f0[0x1f] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x124);
  uVar2 = *(undefined4 *)(param_1 + 0x128);
  uVar3 = *(undefined4 *)(param_1 + 300);
  DAT_0040e5f0[0x20] = *(undefined4 *)(param_1 + 0x120);
  DAT_0040e5f0[0x21] = uVar1;
  DAT_0040e5f0[0x22] = uVar2;
  DAT_0040e5f0[0x23] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x134);
  uVar2 = *(undefined4 *)(param_1 + 0x138);
  uVar3 = *(undefined4 *)(param_1 + 0x13c);
  DAT_0040e5f0[0x24] = *(undefined4 *)(param_1 + 0x130);
  DAT_0040e5f0[0x25] = uVar1;
  DAT_0040e5f0[0x26] = uVar2;
  DAT_0040e5f0[0x27] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x144);
  uVar2 = *(undefined4 *)(param_1 + 0x148);
  uVar3 = *(undefined4 *)(param_1 + 0x14c);
  DAT_0040e5f0[0x28] = *(undefined4 *)(param_1 + 0x140);
  DAT_0040e5f0[0x29] = uVar1;
  DAT_0040e5f0[0x2a] = uVar2;
  DAT_0040e5f0[0x2b] = uVar3;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x2c;
  return;
}


// ==== FUN_001c8d20 @ 001c8d20 ====

void FUN_001c8d20(int param_1,long param_2)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  pauVar1 = (undefined1 (*) [16])param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x15c);
    *(int *)(param_1 + 0xe0) = (int)*(undefined8 *)(param_1 + 0x180);
    *(int *)(param_1 + 0xe4) = (int)((ulong)*(undefined8 *)(param_1 + 0x180) >> 0x20);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x17c);
  }
  else {
    auVar7 = _vsub(in_vf0,in_vf0);
    _sqc2(auVar7);
    auVar6 = _lqc2(*pauVar1);
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x160));
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x170));
    auVar2 = _lqc2(pauVar1[1]);
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x150));
    auVar10 = _lqc2(pauVar1[3]);
    _vmulabc(auVar5,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar8 = _vmaddbc(auVar3,auVar6);
    _vmulabc(auVar5,auVar2);
    _vmaddabc(auVar4,auVar2);
    auVar9 = _vmaddbc(auVar3,auVar2);
    _sqc2(auVar8);
    _sqc2(auVar9);
    auVar3 = _vmove(auVar8);
    auVar2 = _vmove(auVar9);
    auVar12 = _vaddbc(auVar7,auVar3);
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x160));
    auVar11 = _vaddbc(auVar7,auVar2);
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x170));
    auVar6 = _lqc2(pauVar1[2]);
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x180));
    _vmulabc(auVar5,auVar6);
    _vmaddabc(auVar3,auVar6);
    auVar6 = _vmaddbc(auVar2,auVar6);
    _vmulabc(auVar5,auVar10);
    _vmaddabc(auVar3,auVar10);
    _vmaddabc(auVar2,auVar10);
    auVar5 = _vmaddbc(auVar4,in_vf0);
    _sqc2(auVar8);
    auVar3 = _vmove(auVar5);
    auVar2 = _vmove(auVar6);
    auVar4 = _vaddbc(auVar7,auVar3);
    _sqc2(auVar9);
    auVar3 = _vaddbc(auVar7,auVar2);
    _sqc2(auVar6);
    _sqc2(auVar5);
    auVar2 = _sqc2(auVar4);
    *(undefined1 (*) [16])(param_1 + 0xe0) = auVar2;
    auVar2 = _sqc2(auVar12);
    *(undefined1 (*) [16])(param_1 + 0xb0) = auVar2;
    auVar2 = _sqc2(auVar11);
    *(undefined1 (*) [16])(param_1 + 0xc0) = auVar2;
    auVar2 = _sqc2(auVar3);
    *(undefined1 (*) [16])(param_1 + 0xd0) = auVar2;
    _sqc2(auVar6);
    _sqc2(auVar5);
    _sqc2(auVar8);
    _sqc2(auVar9);
    _sqc2(auVar6);
    _sqc2(auVar5);
    _sqc2(auVar12);
    _sqc2(auVar11);
    _sqc2(auVar3);
    _sqc2(auVar4);
  }
  return;
}


// ==== FUN_001c8e30 @ 001c8e30 ====

void FUN_001c8e30(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 + 0x7e;
  if (-1 < param_2 + 0x3f) {
    iVar2 = param_2 + 0x3f;
  }
  uVar1 = *(uint *)(&DAT_003f72b0 + param_4 * 4);
  *(ulong *)(param_1 + 8) =
       (long)(int)(param_5 >> 6) | (ulong)(uint)(iVar2 >> 6) << 0xe | (ulong)uVar1 << 0x14 |
       0x1dc000000;
  param_1[1] = param_3;
  *(ulong *)(param_1 + 4) =
       (long)(int)(param_5 >> 0xb) | (ulong)(uint)(iVar2 >> 6) << 0x10 | (ulong)uVar1 << 0x18;
  param_1[6] = 0x7f0000;
  param_1[7] = 0x7f0000;
  *param_1 = param_2;
  param_1[2] = param_4;
  return;
}


// ==== FUN_001c8f08 @ 001c8f08 ====

void FUN_001c8f08(ulong param_1)

{
  undefined1 auVar1 [16];
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
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined8 in_v1_udw;
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
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  
  FUN_002b3d88(0x80000000,0xd);
  auVar17._8_8_ = in_v1_udw;
  auVar17._0_8_ = 0xe;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x100000000000800c;
  auVar18 = _pcpyld(auVar17,auVar3);
  *DAT_0040e5f0 = auVar18._0_4_;
  DAT_0040e5f0[1] = auVar18._4_4_;
  DAT_0040e5f0[2] = auVar18._8_4_;
  DAT_0040e5f0[3] = auVar18._12_4_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar18._8_8_;
  auVar18._8_8_ = in_a0_udw;
  auVar18._0_8_ = 0x3f;
  auVar18 = _pcpyld(auVar18,auVar16 << 0x40);
  DAT_0040e5f0[4] = auVar18._0_4_;
  DAT_0040e5f0[5] = auVar18._4_4_;
  DAT_0040e5f0[6] = auVar18._8_4_;
  DAT_0040e5f0[7] = auVar18._12_4_;
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_8_ = 0x3b;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0x8000000080;
  auVar18 = _pcpyld(auVar19,auVar4);
  DAT_0040e5f0[8] = auVar18._0_4_;
  DAT_0040e5f0[9] = auVar18._4_4_;
  DAT_0040e5f0[10] = auVar18._8_4_;
  DAT_0040e5f0[0xb] = auVar18._12_4_;
  auVar20._8_8_ = auVar18._8_8_;
  auVar20._0_8_ = 0x14;
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 0x60;
  auVar18 = _pcpyld(auVar20,auVar5);
  DAT_0040e5f0[0xc] = auVar18._0_4_;
  DAT_0040e5f0[0xd] = auVar18._4_4_;
  DAT_0040e5f0[0xe] = auVar18._8_4_;
  DAT_0040e5f0[0xf] = auVar18._12_4_;
  auVar21._8_8_ = auVar18._8_8_;
  auVar21._0_8_ = 0x15;
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = 0x60;
  auVar18 = _pcpyld(auVar21,auVar6);
  DAT_0040e5f0[0x10] = auVar18._0_4_;
  DAT_0040e5f0[0x11] = auVar18._4_4_;
  DAT_0040e5f0[0x12] = auVar18._8_4_;
  DAT_0040e5f0[0x13] = auVar18._12_4_;
  param_1 = param_1 >> 6;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 6;
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = param_1 | 0x1e000c000;
  auVar18 = _pcpyld(auVar1,auVar7);
  DAT_0040e5f0[0x14] = auVar18._0_4_;
  DAT_0040e5f0[0x15] = auVar18._4_4_;
  DAT_0040e5f0[0x16] = auVar18._8_4_;
  DAT_0040e5f0[0x17] = auVar18._12_4_;
  auVar22._8_8_ = auVar18._8_8_;
  auVar22._0_8_ = 7;
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = param_1 | 0x1e000c000;
  auVar18 = _pcpyld(auVar22,auVar8);
  DAT_0040e5f0[0x18] = auVar18._0_4_;
  DAT_0040e5f0[0x19] = auVar18._4_4_;
  DAT_0040e5f0[0x1a] = auVar18._8_4_;
  DAT_0040e5f0[0x1b] = auVar18._12_4_;
  uVar15 = param_1 | param_1 << 0x14 | 0xc000 | param_1 << 0x28 | 0xc00000000 | 0xc0000000000000;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 0x34;
  auVar9._8_8_ = in_a1_udw;
  auVar9._0_8_ = uVar15;
  auVar18 = _pcpyld(auVar2,auVar9);
  DAT_0040e5f0[0x1c] = auVar18._0_4_;
  DAT_0040e5f0[0x1d] = auVar18._4_4_;
  DAT_0040e5f0[0x1e] = auVar18._8_4_;
  DAT_0040e5f0[0x1f] = auVar18._12_4_;
  auVar23._8_8_ = auVar18._8_8_;
  auVar23._0_8_ = 0x35;
  auVar10._8_8_ = in_a1_udw;
  auVar10._0_8_ = uVar15;
  auVar18 = _pcpyld(auVar23,auVar10);
  DAT_0040e5f0[0x20] = auVar18._0_4_;
  DAT_0040e5f0[0x21] = auVar18._4_4_;
  DAT_0040e5f0[0x22] = auVar18._8_4_;
  DAT_0040e5f0[0x23] = auVar18._12_4_;
  auVar24._8_8_ = auVar18._8_8_;
  auVar24._0_8_ = 0x36;
  auVar11._8_8_ = in_a1_udw;
  auVar11._0_8_ = uVar15;
  auVar18 = _pcpyld(auVar24,auVar11);
  DAT_0040e5f0[0x24] = auVar18._0_4_;
  DAT_0040e5f0[0x25] = auVar18._4_4_;
  DAT_0040e5f0[0x26] = auVar18._8_4_;
  DAT_0040e5f0[0x27] = auVar18._12_4_;
  auVar25._8_8_ = auVar18._8_8_;
  auVar25._0_8_ = 0x37;
  auVar12._8_8_ = in_a1_udw;
  auVar12._0_8_ = uVar15;
  auVar18 = _pcpyld(auVar25,auVar12);
  DAT_0040e5f0[0x28] = auVar18._0_4_;
  DAT_0040e5f0[0x29] = auVar18._4_4_;
  DAT_0040e5f0[0x2a] = auVar18._8_4_;
  DAT_0040e5f0[0x2b] = auVar18._12_4_;
  auVar26._8_8_ = auVar18._8_8_;
  auVar26._0_8_ = 8;
  auVar13._8_8_ = in_a1_udw;
  auVar13._0_8_ = 0xffc00ffc00a;
  auVar18 = _pcpyld(auVar26,auVar13);
  DAT_0040e5f0[0x2c] = auVar18._0_4_;
  DAT_0040e5f0[0x2d] = auVar18._4_4_;
  DAT_0040e5f0[0x2e] = auVar18._8_4_;
  DAT_0040e5f0[0x2f] = auVar18._12_4_;
  auVar27._8_8_ = auVar18._8_8_;
  auVar27._0_8_ = 9;
  auVar14._8_8_ = in_a1_udw;
  auVar14._0_8_ = 0xffc00ffc00a;
  auVar18 = _pcpyld(auVar27,auVar14);
  DAT_0040e5f0[0x30] = auVar18._0_4_;
  DAT_0040e5f0[0x31] = auVar18._4_4_;
  DAT_0040e5f0[0x32] = auVar18._8_4_;
  DAT_0040e5f0[0x33] = auVar18._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x34;
  return;
}


// ==== FUN_001c9088 @ 001c9088 ====

void FUN_001c9088(undefined8 param_1)

{
  if ((*(int *)((int)param_1 + 0x40) != 0) && (*(char *)((int)param_1 + 0x178) != '\0')) {
    FUN_001c9110();
    FUN_001ca0f0(param_1);
    FUN_001ca200(param_1);
  }
  return;
}


// ==== FUN_001c90d8 @ 001c90d8 ====

void FUN_001c90d8(int param_1)

{
  undefined1 auVar1 [16];
  
  FUN_001b0d88();
  auVar1 = _pextlw(0x3f800000,0x3f800000);
  auVar1 = _pextlw(0x3f800000,auVar1._0_8_);
  *(int *)(param_1 + 0xc0) = auVar1._0_4_;
  *(int *)(param_1 + 0xc4) = auVar1._4_4_;
  *(int *)(param_1 + 200) = auVar1._8_4_;
  *(int *)(param_1 + 0xcc) = auVar1._12_4_;
  return;
}


// ==== FUN_001c9110 @ 001c9110 ====

void FUN_001c9110(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_v0_udw;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  int *piVar20;
  int iVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 in_vf0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [8];
  float fStack_358;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [8];
  float fStack_2a8;
  float fStack_2a4;
  undefined8 auStack_2a0 [48];
  undefined8 auStack_120 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b4;
  undefined1 auStack_b0 [16];
  
  uVar18 = DAT_004432ac;
  uVar17 = DAT_004432a8;
  uVar7 = DAT_004432a4;
  if (DAT_00415ac0 == 0) {
    DAT_00415ac0 = 1;
    DAT_00415ab0 = DAT_004432c0;
    DAT_00415ab4 = DAT_004432c4;
    DAT_00415ab8 = DAT_004432c8;
    DAT_00415abc = DAT_004432cc;
  }
  auVar27 = _vaddbc(in_vf0,in_vf0);
  auStack_b0 = _sqc2(auVar27);
  iVar21 = (int)param_1;
  *(undefined4 *)(iVar21 + 0x90) = DAT_004432a0;
  *(undefined4 *)(iVar21 + 0x94) = uVar7;
  *(undefined4 *)(iVar21 + 0x98) = uVar17;
  *(undefined4 *)(iVar21 + 0x9c) = uVar18;
  iVar4 = FUN_00110650(DAT_0040f4bc);
  puStack_b8 = auStack_2a0;
  puStack_b4 = auStack_120;
  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x10));
  auVar29 = _qmtc2(0x3fb504f3);
  auVar28 = _vmulbc(auVar27,auVar29);
  auVar27 = _vmulbc(auVar28,auVar28);
  auVar30 = _vmulbc(auVar28,auVar28);
  auVar27 = _sqc2(auVar27);
  auVar31 = _vmulbc(auVar28,auVar28);
  auVar32 = _vmulbc(auVar28,auVar28);
  auVar33 = _vmulbc(auVar28,auVar28);
  auVar29 = _vmulbc(auVar28,auVar28);
  auVar34 = _vmulbc(auVar28,auVar28);
  auStack_2b0._4_4_ = auVar27._4_4_;
  uVar7 = auStack_2b0._4_4_;
  auVar29 = _qmfc2(auVar29._0_4_);
  auVar27 = _sqc2(auVar30);
  fVar24 = 1.0 - (float)auStack_2b0._4_4_;
  auVar30 = _vmulbc(auVar28,auVar28);
  fVar23 = 1.0 - auVar29._0_4_;
  auVar29 = _qmfc2(auVar30._0_4_);
  auStack_2b0._4_4_ = auVar27._4_4_;
  auVar28 = _vmulbc(auVar28,auVar28);
  auVar27 = _sqc2(auVar31);
  auVar28 = _qmfc2(auVar28._0_4_);
  _lqc2(auStack_2f0);
  fStack_2a8 = auVar27._8_4_;
  auVar27 = _sqc2(auVar32);
  _lqc2(auStack_2e0);
  auVar30 = _qmtc2(fVar24 - fStack_2a8);
  fStack_2a4 = auVar27._12_4_;
  auVar27 = _sqc2(auVar33);
  auVar31 = _vaddbc(in_vf0,auVar30);
  _lqc2(auStack_2d0);
  fVar26 = (float)auStack_2b0._4_4_ - fStack_2a4;
  fVar25 = (float)auStack_2b0._4_4_ + fStack_2a4;
  fStack_2a4 = auVar27._12_4_;
  auVar27 = _sqc2(auVar34);
  _vmove(auVar31);
  auVar30 = _qmtc2(auVar28._0_4_ + fStack_2a4);
  fVar24 = auVar28._0_4_ - fStack_2a4;
  fStack_2a4 = auVar27._12_4_;
  auVar30 = _vaddbc(in_vf0,auVar30);
  _sqc2(auVar31);
  uVar10 = auVar28._8_8_;
  auVar31 = _qmtc2(fVar23 - fStack_2a8);
  _vmove(auVar30);
  auVar28 = _qmtc2(auVar29._0_4_ - fStack_2a4);
  auVar28 = _vaddbc(in_vf0,auVar28);
  _sqc2(auVar30);
  auVar29 = _qmtc2(auVar29._0_4_ + fStack_2a4);
  _vmove(auVar28);
  auVar32 = _vaddbc(in_vf0,auVar29);
  auVar29 = _qmtc2(fVar26);
  auVar34 = _vaddbc(in_vf0,auVar29);
  auVar29 = _qmtc2(fVar24);
  _vmove(auVar32);
  auVar33 = _vaddbc(in_vf0,auVar31);
  auVar31 = _vaddbc(in_vf0,auVar29);
  _sqc2(auVar28);
  auVar28 = _qmtc2(fVar23 - (float)uVar7);
  auVar29 = _qmtc2(fVar25);
  _vmove(auVar33);
  _vmove(auVar34);
  auVar30 = _vaddbc(in_vf0,auVar29);
  auVar28 = _vaddbc(in_vf0,auVar28);
  _sqc2(auVar32);
  _sqc2(auVar33);
  iVar16 = 0;
  _sqc2(auVar34);
  auStack_300 = auStack_2c0;
  auStack_2f0 = _sqc2(auVar31);
  auStack_2e0 = _sqc2(auVar30);
  auStack_2d0 = _sqc2(auVar28);
  auStack_330 = _sqc2(auVar31);
  auStack_320 = _sqc2(auVar30);
  auStack_310 = _sqc2(auVar28);
  auStack_370 = _sqc2(auVar31);
  _auStack_360 = _sqc2(auVar30);
  auStack_350 = _sqc2(auVar28);
  auStack_340 = *(undefined1 (*) [16])(iVar4 + 0x20);
  auVar29 = _sqc2(auVar31);
  *(undefined1 (*) [16])(iVar21 + 0x50) = auVar29;
  auVar29 = _sqc2(auVar30);
  *(undefined1 (*) [16])(iVar21 + 0x60) = auVar29;
  auVar29 = _sqc2(auVar28);
  *(undefined1 (*) [16])(iVar21 + 0x70) = auVar29;
  uStack_380 = auStack_340._0_4_;
  *(undefined4 *)(iVar21 + 0x80) = uStack_380;
  uStack_37c = auStack_340._4_4_;
  *(undefined4 *)(iVar21 + 0x84) = uStack_37c;
  uStack_378 = auStack_340._8_4_;
  *(undefined4 *)(iVar21 + 0x88) = uStack_378;
  uStack_374 = auStack_340._12_4_;
  *(undefined4 *)(iVar21 + 0x8c) = uStack_374;
  auStack_3b0 = _sqc2(auVar31);
  auStack_3a0 = _sqc2(auVar30);
  auStack_390 = _sqc2(auVar28);
  _auStack_2b0 = auVar27;
  if (0 < *(int *)(iVar21 + 0x40)) {
    auVar27._8_8_ = auStack_340._8_8_;
    auVar27._0_8_ = param_1;
    do {
      iVar4 = *auVar27._0_4_;
      iVar16 = iVar16 + 1;
      if (0 < *(int *)(iVar4 + 4)) {
        pauVar5 = (undefined1 (*) [16])FUN_001c62d8(iVar4,0);
        auVar27 = _lqc2(*pauVar5);
        auVar28 = _qmtc2(0x3f000000);
        auVar29 = _lqc2(pauVar5[1]);
        auVar27 = _vadd(auVar27,auVar29);
        auVar27 = _vmulbc(auVar27,auVar28);
        auVar27 = _sqc2(auVar27);
        *(undefined1 (*) [16])(iVar21 + 0x90) = auVar27;
        break;
      }
      auVar27._0_8_ = (long)(int)(auVar27._0_4_ + 1);
    } while (iVar16 < *(int *)(iVar21 + 0x40));
  }
  auVar34 = _lqc2(*(undefined1 (*) [16])(iVar21 + 0x50));
  auVar29._4_4_ = DAT_00415ab4;
  auVar29._0_4_ = DAT_00415ab0;
  auVar29._8_4_ = DAT_00415ab8;
  auVar29._12_4_ = DAT_00415abc;
  auVar30 = _lqc2(auVar29);
  auVar31 = _qmtc2(0x40000000);
  auVar33 = _lqc2(*(undefined1 (*) [16])(iVar21 + 0x70));
  auVar28 = _vmul(auVar34,auVar30);
  auVar32 = _lqc2(*(undefined1 (*) [16])(iVar21 + 0x80));
  auVar29 = _vmul(auVar33,auVar30);
  auVar27 = _lqc2(*(undefined1 (*) [16])(iVar21 + 0x90));
  auVar35 = _lqc2(auStack_b0);
  auVar27 = _vsub(auVar32,auVar27);
  _vaddabc(auVar28,auVar28);
  auVar28 = _vmaddbc(auVar35,auVar28);
  _vaddabc(auVar29,auVar29);
  auVar29 = _vmaddbc(auVar35,auVar29);
  auVar27 = _vmul(auVar27,auVar30);
  auVar28 = _vmulbc(auVar28,auVar31);
  auVar29 = _vmulbc(auVar29,auVar31);
  _vaddabc(auVar27,auVar27);
  auVar27 = _vmaddbc(auVar35,auVar27);
  auVar28 = _vmulbc(auVar30,auVar28);
  auVar27 = _vmulbc(auVar27,auVar31);
  auVar29 = _vmulbc(auVar30,auVar29);
  auVar28 = _vsub(auVar34,auVar28);
  auVar27 = _vmulbc(auVar30,auVar27);
  auVar30 = _vsub(auVar33,auVar29);
  auVar27 = _vsub(auVar32,auVar27);
  _vopmula(auVar30,auVar28);
  auVar29 = _vopmsub(auVar28,auVar30);
  auVar27 = _sqc2(auVar27);
  auVar29 = _sqc2(auVar29);
  auStack_370._0_4_ = &DAT_003e2540;
  auVar28 = _sqc2(auVar28);
  auVar30 = _sqc2(auVar30);
  FUN_0027a798(auStack_3b0);
  FUN_0027a838(auStack_3b0);
  auVar33 = _lqc2(auVar28);
  auVar34 = _lqc2(auVar29);
  auVar32 = _lqc2(auVar30);
  auVar31 = _vaddbc(auVar33,auVar34);
  auVar31 = _vaddbc(auVar31,auVar32);
  auVar31 = _qmfc2(auVar31._0_4_);
  _lqc2(auStack_3a0);
  if (0.0 < auVar31._0_4_) {
    auVar35 = _vsubbc(auVar34,auVar32);
    auVar35 = _vaddbc(in_vf0,auVar35);
    auVar32 = _vsubbc(auVar32,auVar33);
    _vmove(auVar35);
    auVar32 = _vaddbc(in_vf0,auVar32);
    fVar23 = SQRT(auVar31._0_4_ + 1.0);
    auVar31 = _vsubbc(auVar33,auVar34);
    _vmove(auVar32);
    _sqc2(auVar35);
    auVar33 = _vaddbc(in_vf0,auVar31);
    _sqc2(auVar32);
    auVar32 = _qmtc2(0.5 / fVar23);
    auVar31 = _vmove(auVar33);
    auVar31 = _vmulbc(auVar31,auVar32);
    _sqc2(auVar33);
    _sqc2(auVar31);
    auVar31 = _qmtc2(fVar23 * 0.5);
    auVar31 = _vmulbc(in_vf0,auVar31);
    auStack_3a0 = _sqc2(auVar31);
  }
  else {
    auVar31 = _sqc2(auVar34);
    auVar33 = _qmfc2(auVar33._0_4_);
    auStack_360._4_4_ = auVar31._4_4_;
    if ((float)auStack_360._4_4_ <= auVar33._0_4_) {
      _auStack_360 = _sqc2(auVar32);
      uVar11 = (uint)(auVar33._0_4_ < fStack_358) << 1;
    }
    else {
      auVar31 = _sqc2(auVar32);
      fStack_358 = auVar31._8_4_;
      auVar31 = _sqc2(auVar34);
      auStack_360._4_4_ = auVar31._4_4_;
      bVar3 = (float)auStack_360._4_4_ < fStack_358;
      uVar11 = 1;
      _auStack_360 = auVar31;
      if (bVar3) {
        uVar11 = 2;
      }
    }
    if (uVar11 == 1) {
      auVar32 = _lqc2(auVar28);
      auVar34 = _qmtc2(0x3f800000);
      auVar33 = _lqc2(auVar30);
      auVar31 = _lqc2(auVar29);
      auVar32 = _vaddbc(auVar33,auVar32);
      auVar31 = _vsubbc(auVar31,auVar32);
      auVar31 = _vaddbc(auVar31,auVar34);
      _auStack_360 = _sqc2(auVar31);
      _lqc2(auStack_3a0);
      auVar31 = _qmtc2(SQRT((float)auStack_360._4_4_) * 0.5);
      auVar33 = _qmtc2(0.5 / SQRT((float)auStack_360._4_4_));
      auVar31 = _vaddbc(in_vf0,auVar31);
      _sqc2(auVar31);
      auVar32 = _lqc2(auVar28);
      auVar31 = _lqc2(auVar30);
      auVar31 = _vsubbc(auVar31,auVar32);
      auVar31 = _vmulbc(auVar31,auVar33);
      auVar31 = _vmulbc(in_vf0,auVar31);
      _sqc2(auVar31);
      auVar32 = _lqc2(auVar30);
      auVar31 = _lqc2(auVar29);
      auVar31 = _vaddbc(auVar31,auVar32);
      auVar31 = _vmulbc(auVar31,auVar33);
      auVar31 = _vaddbc(in_vf0,auVar31);
      _sqc2(auVar31);
      auVar31 = _lqc2(auVar29);
      auVar32 = _lqc2(auVar28);
      auVar31 = _vaddbc(auVar31,auVar32);
      auVar31 = _vmulbc(auVar31,auVar33);
      auVar31 = _vaddbc(in_vf0,auVar31);
      auStack_3a0 = _sqc2(auVar31);
    }
    else if (uVar11 < 2) {
      if (uVar11 == 0) {
        auVar32 = _lqc2(auVar30);
        auVar34 = _qmtc2(0x3f800000);
        auVar33 = _lqc2(auVar29);
        auVar31 = _lqc2(auVar28);
        auVar32 = _vaddbc(auVar33,auVar32);
        auVar31 = _vsubbc(auVar31,auVar32);
        auVar31 = _vaddbc(auVar31,auVar34);
        _lqc2(auStack_3a0);
        auVar31 = _qmfc2(auVar31._0_4_);
        auVar32 = _qmtc2(SQRT(auVar31._0_4_) * 0.5);
        auVar33 = _qmtc2(0.5 / SQRT(auVar31._0_4_));
        auVar31 = _vaddbc(in_vf0,auVar32);
        _sqc2(auVar31);
        auVar32 = _lqc2(auVar30);
        auVar31 = _lqc2(auVar29);
        auVar31 = _vsubbc(auVar31,auVar32);
        auVar31 = _vmulbc(auVar31,auVar33);
        auVar31 = _vmulbc(in_vf0,auVar31);
        _sqc2(auVar31);
        auVar32 = _lqc2(auVar29);
        auVar31 = _lqc2(auVar28);
        auVar31 = _vaddbc(auVar31,auVar32);
        auVar31 = _vmulbc(auVar31,auVar33);
        auVar31 = _vaddbc(in_vf0,auVar31);
        _sqc2(auVar31);
        auVar31 = _lqc2(auVar28);
        auVar32 = _lqc2(auVar30);
        auVar31 = _vaddbc(auVar31,auVar32);
        auVar31 = _vmulbc(auVar31,auVar33);
        auVar31 = _vaddbc(in_vf0,auVar31);
        auStack_3a0 = _sqc2(auVar31);
      }
    }
    else if (uVar11 == 2) {
      auVar32 = _lqc2(auVar29);
      auVar34 = _qmtc2(0x3f800000);
      auVar33 = _lqc2(auVar28);
      auVar31 = _lqc2(auVar30);
      auVar32 = _vaddbc(auVar33,auVar32);
      auVar31 = _vsubbc(auVar31,auVar32);
      auVar31 = _vaddbc(auVar31,auVar34);
      _auStack_360 = _sqc2(auVar31);
      _lqc2(auStack_3a0);
      auVar31 = _qmtc2(SQRT(fStack_358) * 0.5);
      auVar33 = _qmtc2(0.5 / SQRT(fStack_358));
      auVar31 = _vaddbc(in_vf0,auVar31);
      _sqc2(auVar31);
      auVar32 = _lqc2(auVar29);
      auVar31 = _lqc2(auVar28);
      auVar31 = _vsubbc(auVar31,auVar32);
      auVar31 = _vmulbc(auVar31,auVar33);
      auVar31 = _vmulbc(in_vf0,auVar31);
      _sqc2(auVar31);
      auVar32 = _lqc2(auVar28);
      auVar31 = _lqc2(auVar30);
      auVar31 = _vaddbc(auVar31,auVar32);
      auVar31 = _vmulbc(auVar31,auVar33);
      auVar31 = _vaddbc(in_vf0,auVar31);
      _sqc2(auVar31);
      auVar31 = _lqc2(auVar30);
      auVar32 = _lqc2(auVar29);
      auVar31 = _vaddbc(auVar31,auVar32);
      auVar31 = _vmulbc(auVar31,auVar33);
      auVar31 = _vaddbc(in_vf0,auVar31);
      auStack_3a0 = _sqc2(auVar31);
    }
  }
  auStack_390 = auVar27;
  puVar6 = (undefined4 *)FUN_00110650(DAT_0040f4bc);
  auStack_3b0._0_4_ = *puVar6;
  iVar4 = FUN_00110650(DAT_0040f4bc);
  auStack_3b0._4_4_ = *(undefined4 *)(iVar4 + 4);
  FUN_001ae938(DAT_0040f4c0,1,auStack_3b0);
  FUN_001ae998(DAT_0040f4c0,1);
  uVar9 = FUN_001aeb50(DAT_0040f4c0,1);
  FUN_001b0948(uVar9);
  iVar4 = *(int *)(DAT_0040f4c0 + 0xd540);
  uVar7 = FUN_001aeb50(DAT_0040f4c0,1);
  *(undefined4 *)(DAT_0040f4c0 + 0xd540) = uVar7;
  iVar16 = DAT_0040f4c0;
  piVar20 = (int *)(DAT_0040f4c0 + 0xd170);
  FUN_001c6668(piVar20);
  if ((int)*(uint *)(iVar21 + 0x16c) < 0) {
    uVar11 = *(uint *)(iVar21 + 0x170);
  }
  else {
    uVar11 = *(uint *)(iVar21 + 0x170);
  }
  auVar31 = _pextlw((long)(int)((float)uVar11 / 255.0),
                    (long)(int)((float)*(uint *)(iVar21 + 0x168) / 255.0));
  _auStack_360 = _pextlw((long)(int)((float)*(uint *)(iVar21 + 0x16c) / 255.0),auVar31._0_8_);
  auVar31 = _por(in_zero_qw,_auStack_360);
  FUN_0016b118(DAT_0040f528,auVar31._0_8_);
  puVar8 = DAT_00449438 + 0x30;
  puVar15 = puStack_b8;
  puVar13 = DAT_00449438;
  do {
    puVar12 = puVar13;
    puVar14 = puVar15;
    uVar9 = *puVar12;
    uVar7 = *(undefined4 *)(puVar12 + 1);
    uVar17 = *(undefined4 *)((int)puVar12 + 0xc);
    uVar22 = puVar12[2];
    uVar18 = *(undefined4 *)(puVar12 + 3);
    uVar19 = *(undefined4 *)((int)puVar12 + 0x1c);
    *(int *)puVar14 = (int)uVar9;
    *(int *)((int)puVar14 + 4) = (int)((ulong)uVar9 >> 0x20);
    *(undefined4 *)(puVar14 + 1) = uVar7;
    *(undefined4 *)((int)puVar14 + 0xc) = uVar17;
    *(int *)(puVar14 + 2) = (int)uVar22;
    *(int *)((int)puVar14 + 0x14) = (int)((ulong)uVar22 >> 0x20);
    *(undefined4 *)(puVar14 + 3) = uVar18;
    *(undefined4 *)((int)puVar14 + 0x1c) = uVar19;
    iVar1 = DAT_0040f4c0;
    puVar13 = puVar12 + 4;
    puVar15 = puVar14 + 4;
  } while (puVar13 != puVar8);
  uVar9 = *puVar13;
  uVar7 = *(undefined4 *)(puVar12 + 5);
  uVar17 = *(undefined4 *)((int)puVar12 + 0x2c);
  *(int *)(puVar14 + 4) = (int)uVar9;
  *(int *)((int)puVar14 + 0x24) = (int)((ulong)uVar9 >> 0x20);
  *(undefined4 *)(puVar14 + 5) = uVar7;
  *(undefined4 *)((int)puVar14 + 0x2c) = uVar17;
  uStack_10c = *(undefined4 *)(*(int *)(iVar1 + 0xd540) + 0x7c);
  uStack_110 = *(undefined4 *)(*(int *)(iVar1 + 0xd540) + 0x78);
  uVar7 = *(undefined4 *)(iVar16 + 0xd174);
  *(int *)(iVar4 + 0x78) = *piVar20;
  *(undefined4 *)(iVar4 + 0x7c) = uVar7;
  puVar15 = DAT_00449438;
  auVar31 = _pextlw(0,0xffffffffbf000000);
  _lqc2(auStack_f0);
  auVar31 = _pextlw(0x3f000000,auVar31._0_8_);
  auVar37 = _qmtc2(auVar31._0_4_);
  uVar9 = *(undefined8 *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x50);
  auStack_360 = (undefined1  [8])uVar9;
  auVar32 = _auStack_360;
  auStack_360._0_4_ = (undefined4)uVar9;
  auVar33 = _qmtc2(auStack_360._0_4_);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = auStack_350._8_8_;
  auStack_350 = auVar31 << 0x40;
  auStack_360._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
  auVar31 = _qmtc2(auStack_360._4_4_);
  _vaddbc(in_vf0,auVar33);
  auVar35 = _vaddbc(in_vf0,auVar31);
  auVar33 = _qmtc2(0);
  _lqc2(auStack_100);
  auVar34 = _qmtc2(0);
  auVar31 = _vmulbc(auVar35,auVar37);
  _lqc2(auStack_e0);
  _vaddbc(in_vf0,auVar33);
  auVar33 = _vaddbc(in_vf0,auVar31);
  auVar31 = _vaddbc(in_vf0,auVar34);
  auVar38 = _lqc2(auVar30);
  auVar30 = _lqc2(auVar28);
  auVar28 = _vmulbc(auVar33,auVar31);
  auVar28 = _vsubbc(auVar37,auVar28);
  auVar30 = _vmulbc(auVar30,auVar33);
  auVar34 = _vaddbc(in_vf0,auVar28);
  _lqc2(auStack_300);
  auVar28 = _vmulbc(auVar38,auVar34);
  _lqc2(auStack_2f0);
  auVar33 = _vadd(auVar30,auVar28);
  _lqc2(auStack_2e0);
  auVar28 = _vmulbc(auVar35,auVar37);
  _vmove(auVar34);
  _sqc2(auVar37);
  auVar36 = _vaddbc(in_vf0,auVar28);
  auVar28 = _vaddbc(in_vf0,auVar33);
  auVar30 = _vaddbc(in_vf0,auVar33);
  _sqc2(auVar28);
  auVar28 = _vmulbc(auVar36,auVar31);
  _sqc2(auVar30);
  auVar30 = _vaddbc(in_vf0,auVar33);
  _sqc2(auVar30);
  auVar28 = _vaddbc(auVar37,auVar28);
  _vmove(auVar36);
  auVar30 = _lqc2(auVar29);
  auVar35 = _vaddbc(in_vf0,auVar28);
  auVar29 = _vmulbc(auVar38,auVar35);
  auVar30 = _vmulbc(auVar30,auVar36);
  auVar28 = _lqc2(auVar27);
  auVar30 = _vadd(auVar30,auVar29);
  auVar27 = _lqc2(auStack_b0);
  auVar29 = _vmul(auVar28,auVar33);
  _vaddabc(auVar29,auVar29);
  auVar27 = _vmaddbc(auVar27,auVar29);
  auVar36 = _vaddbc(in_vf0,auVar30);
  auVar33 = _vaddbc(auVar34,auVar27);
  auVar27 = _vmul(auVar28,auVar30);
  auVar31 = _lqc2(auStack_b0);
  auVar29 = _vmul(auVar28,auVar38);
  _vaddabc(auVar27,auVar27);
  auVar27 = _vmaddbc(auVar31,auVar27);
  auVar28 = _vsubbc(auVar37,auVar33);
  auVar27 = _vaddbc(auVar35,auVar27);
  _vaddabc(auVar29,auVar29);
  auVar29 = _vmaddbc(auVar31,auVar29);
  _lqc2(auStack_2d0);
  auVar31 = _vsubbc(auVar37,auVar27);
  auVar27 = _vaddbc(in_vf0,auVar28);
  auVar29 = _vsub(in_vf0,auVar29);
  _vmove(auVar27);
  auVar28 = _vaddbc(in_vf0,auVar30);
  auVar31 = _vaddbc(in_vf0,auVar31);
  _sqc2(auVar27);
  _vmove(auVar31);
  auVar33 = _vaddbc(in_vf0,auVar30);
  auVar30 = _vaddbc(in_vf0,auVar29);
  _vmove(auVar36);
  _vmove(auVar28);
  _vmove(auVar33);
  auVar27 = _vaddbc(in_vf0,auVar38);
  _sqc2(auVar36);
  auVar29 = _vaddbc(in_vf0,auVar38);
  _sqc2(auVar28);
  auVar28 = _vaddbc(in_vf0,auVar38);
  _sqc2(auVar33);
  _sqc2(auVar31);
  auStack_340 = _sqc2(auVar27);
  auStack_330 = _sqc2(auVar29);
  auStack_320 = _sqc2(auVar28);
  auStack_310 = _sqc2(auVar30);
  _sqc2(auVar27);
  _sqc2(auVar29);
  _sqc2(auVar28);
  _sqc2(auVar30);
  auStack_300._0_8_ = DAT_00449438[4];
  auStack_300._8_8_ = DAT_00449438[5];
  auStack_2f0._0_8_ = DAT_00449438[6];
  auStack_2f0._8_8_ = DAT_00449438[7];
  auStack_2e0._0_8_ = DAT_00449438[8];
  auStack_2e0._8_8_ = DAT_00449438[9];
  auStack_2d0._0_8_ = DAT_00449438[10];
  auStack_2d0._8_8_ = DAT_00449438[0xb];
  auStack_2c0._0_4_ = auStack_340._0_4_;
  *(undefined4 *)(DAT_00449438 + 4) = auStack_2c0._0_4_;
  auStack_2c0._4_4_ = auStack_340._4_4_;
  *(undefined4 *)((int)puVar15 + 0x24) = auStack_2c0._4_4_;
  auStack_2c0._8_4_ = auStack_340._8_4_;
  *(undefined4 *)(puVar15 + 5) = auStack_2c0._8_4_;
  auStack_2c0._0_4_ = auStack_330._0_4_;
  *(undefined4 *)(puVar15 + 6) = auStack_2c0._0_4_;
  auStack_2c0._4_4_ = auStack_330._4_4_;
  *(undefined4 *)((int)puVar15 + 0x34) = auStack_2c0._4_4_;
  auStack_2c0._8_4_ = auStack_330._8_4_;
  *(undefined4 *)(puVar15 + 7) = auStack_2c0._8_4_;
  auStack_2c0._0_4_ = auStack_320._0_4_;
  *(undefined4 *)(puVar15 + 8) = auStack_2c0._0_4_;
  auStack_2c0._4_4_ = auStack_320._4_4_;
  *(undefined4 *)((int)puVar15 + 0x44) = auStack_2c0._4_4_;
  auStack_2c0._8_4_ = auStack_320._8_4_;
  *(undefined4 *)(puVar15 + 9) = auStack_2c0._8_4_;
  auStack_2c0._0_4_ = auStack_310._0_4_;
  *(undefined4 *)(puVar15 + 10) = auStack_2c0._0_4_;
  auStack_2c0._4_4_ = auStack_310._4_4_;
  *(undefined4 *)((int)puVar15 + 0x54) = auStack_2c0._4_4_;
  auStack_2c0._8_4_ = auStack_310._8_4_;
  *(undefined4 *)(puVar15 + 0xb) = auStack_2c0._8_4_;
  *(undefined4 *)((int)puVar15 + 0x2c) = 3;
  uStack_d0 = *(undefined8 *)(DAT_0040f4c0 + 0xd5c8);
  uVar22 = *(undefined8 *)(DAT_0040f4c0 + 0xd5c0);
  uStack_c8 = *(undefined8 *)(DAT_0040f4c0 + 0xd5d0);
  uStack_c0 = *(undefined8 *)(DAT_0040f4c0 + 0xd5d8);
  *(undefined8 *)(DAT_0040f4c0 + 0xd5c0) = *(undefined8 *)(iVar16 + 0xd178);
  *(undefined8 *)(DAT_0040f4c0 + 0xd5c8) = *(undefined8 *)(iVar16 + 0xd180);
  *(ulong *)(DAT_0040f4c0 + 0xd5d0) =
       CONCAT44(*(int *)(iVar16 + 0xd174) * -8 + 0x8000,*piVar20 * -8 + 0x8000);
  *(undefined8 *)(DAT_0040f4c0 + 0xd5d8) = *(undefined8 *)(iVar16 + 0xd188);
  iVar1 = *(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x58);
  iVar2 = *(int *)(iVar1 + 0x60);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  *(int *)(iVar2 + 0xc) = *piVar20;
  uVar17 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10) = *(undefined4 *)(iVar16 + 0xd174);
  _auStack_360 = auVar32;
  auStack_2c0 = auStack_310;
  FUN_001c88c8(DAT_0040f4c0 + 0xcfd0,iVar1);
  uVar9 = *(undefined8 *)(iVar16 + 0xd180);
  FUN_002b3d88(0,4);
  auVar35._8_8_ = uVar10;
  auVar35._0_8_ = 0x10000000;
  auVar30._8_8_ = extraout_v0_udw;
  auVar30._0_8_ = 0x1100000011000000;
  auVar27 = _pcpyld(auVar30,auVar35);
  *DAT_0040e5f0 = auVar27._0_4_;
  DAT_0040e5f0[1] = auVar27._4_4_;
  DAT_0040e5f0[2] = auVar27._8_4_;
  DAT_0040e5f0[3] = auVar27._12_4_;
  auVar36._8_8_ = uVar10;
  auVar36._0_8_ = 0x10000002;
  auVar32._8_8_ = auVar27._8_8_;
  auVar32._0_8_ = 0x5000000200000000;
  auVar27 = _pcpyld(auVar32,auVar36);
  DAT_0040e5f0[4] = auVar27._0_4_;
  DAT_0040e5f0[5] = auVar27._4_4_;
  DAT_0040e5f0[6] = auVar27._8_4_;
  DAT_0040e5f0[7] = auVar27._12_4_;
  auVar37._8_8_ = uVar10;
  auVar37._0_8_ = 0x1000000000008001;
  auVar33._8_8_ = auVar27._8_8_;
  auVar33._0_8_ = 0xe;
  auVar27 = _pcpyld(auVar33,auVar37);
  DAT_0040e5f0[8] = auVar27._0_4_;
  DAT_0040e5f0[9] = auVar27._4_4_;
  DAT_0040e5f0[10] = auVar27._8_4_;
  DAT_0040e5f0[0xb] = auVar27._12_4_;
  auVar34._8_8_ = auVar27._8_8_;
  auVar34._0_8_ = 0x4e;
  auVar28._8_4_ = in_s0_udw;
  auVar28._0_8_ = uVar9;
  auVar28._12_4_ = in_register_0000010c;
  auVar27 = _pcpyld(auVar34,auVar28);
  DAT_0040e5f0[0xc] = auVar27._0_4_;
  DAT_0040e5f0[0xd] = auVar27._4_4_;
  DAT_0040e5f0[0xe] = auVar27._8_4_;
  DAT_0040e5f0[0xf] = auVar27._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
  if ((int)*(uint *)(iVar21 + 0x16c) < 0) {
    uVar11 = *(uint *)(iVar21 + 0x170);
  }
  else {
    uVar11 = *(uint *)(iVar21 + 0x170);
  }
  auVar27 = _pextlw((long)(int)((float)uVar11 / 255.0),
                    (long)(int)((float)*(uint *)(iVar21 + 0x168) / 255.0));
  auStack_2c0 = _pextlw((long)(int)((float)*(uint *)(iVar21 + 0x16c) / 255.0),auVar27._0_8_);
  auVar27 = _por(in_zero_qw,auStack_2c0);
  FUN_0016b4f8(DAT_0040f528,auVar27._0_8_);
  *(undefined8 *)(DAT_0040f4c0 + 0xd5c0) = uVar22;
  *(undefined8 *)(DAT_0040f4c0 + 0xd5c8) = uStack_d0;
  *(undefined8 *)(DAT_0040f4c0 + 0xd5d0) = uStack_c8;
  *(undefined8 *)(DAT_0040f4c0 + 0xd5d8) = uStack_c0;
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc) = uVar7;
  *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x10) = uVar17;
  FUN_001c88c8(DAT_0040f4c0 + 0xcfd0,iVar1);
  DAT_003bd1cc = *(undefined4 *)(iVar21 + 0x174);
  FUN_001c1a98(DAT_0040f4d8 + 0x66280,piVar20);
  DAT_003bd1cc = 0x3f800000;
  FUN_001c28b0(DAT_0040f4d8 + 0x66288,piVar20);
  puVar15 = DAT_00449438;
  DAT_00449438[4] = auStack_300._0_8_;
  puVar15[5] = auStack_300._8_8_;
  puVar15[6] = auStack_2f0._0_8_;
  puVar15[7] = auStack_2f0._8_8_;
  puVar15[8] = auStack_2e0._0_8_;
  puVar15[9] = auStack_2e0._8_8_;
  puVar15[10] = auStack_2d0._0_8_;
  puVar15[0xb] = auStack_2d0._8_8_;
  *(int *)(DAT_0040f4c0 + 0xd540) = iVar4;
  *(undefined4 *)(iVar4 + 0x7c) = uStack_10c;
  *(undefined4 *)(iVar4 + 0x78) = uStack_110;
  puVar15 = puStack_b8;
  puVar13 = DAT_00449438;
  do {
    puVar8 = puVar13;
    puVar12 = puVar15;
    uVar10 = *puVar12;
    uVar7 = *(undefined4 *)(puVar12 + 1);
    uVar17 = *(undefined4 *)((int)puVar12 + 0xc);
    uVar9 = puVar12[2];
    uVar18 = *(undefined4 *)(puVar12 + 3);
    uVar19 = *(undefined4 *)((int)puVar12 + 0x1c);
    *(int *)puVar8 = (int)uVar10;
    *(int *)((int)puVar8 + 4) = (int)((ulong)uVar10 >> 0x20);
    *(undefined4 *)(puVar8 + 1) = uVar7;
    *(undefined4 *)((int)puVar8 + 0xc) = uVar17;
    *(int *)(puVar8 + 2) = (int)uVar9;
    *(int *)((int)puVar8 + 0x14) = (int)((ulong)uVar9 >> 0x20);
    *(undefined4 *)(puVar8 + 3) = uVar18;
    *(undefined4 *)((int)puVar8 + 0x1c) = uVar19;
    puVar15 = puVar12 + 4;
    puVar13 = puVar8 + 4;
  } while (puVar15 != puStack_b4);
  uVar7 = *(undefined4 *)((int)puVar12 + 0x24);
  uVar17 = *(undefined4 *)(puVar12 + 5);
  uVar18 = *(undefined4 *)((int)puVar12 + 0x2c);
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)puVar15;
  *(undefined4 *)((int)puVar8 + 0x24) = uVar7;
  *(undefined4 *)(puVar8 + 5) = uVar17;
  *(undefined4 *)((int)puVar8 + 0x2c) = uVar18;
  FUN_001c05d8(DAT_0040f4d8,1);
  FUN_001c67c0(piVar20,0);
  FUN_001c6a68(piVar20);
  FUN_00110670(DAT_0040f4bc);
  FUN_001ae998(DAT_0040f4c0,1);
  uVar10 = FUN_001aeb50(DAT_0040f4c0,1);
  FUN_001b0948(uVar10);
  return;
}


// ==== FUN_001ca0f0 @ 001ca0f0 ====

void FUN_001ca0f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_001c8f08((*(ulong *)(DAT_0040f4c0 + 0xd190) & 0x3fff) << 6,
               *(undefined8 *)(DAT_0040f4c0 + 0xd198));
  *(undefined1 *)((int)param_1 + 0xa1) = 1;
  *(undefined1 *)(param_1 + 0x28) = 0xc;
  param_1[0x29] = 0;
  puVar2 = param_1;
  if (0 < (int)param_1[0x10]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_001c62f0(*puVar2,0,param_1 + 0x28,param_1 + 0x2c,0,0,0);
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[0x10]);
  }
  iVar3 = 0;
  uVar1 = FUN_001b0f70(param_1);
  param_1[0x29] = uVar1;
  *(undefined1 *)((int)param_1 + 0xa1) = 2;
  *(undefined1 *)(param_1 + 0x28) = 0xd;
  puVar2 = param_1;
  if (0 < (int)param_1[0x10]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_001c62f0(*puVar2,0,param_1 + 0x28,param_1 + 0x2c,0,0,0);
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[0x10]);
  }
  return;
}


// ==== FUN_001ca200 @ 001ca200 ====

void FUN_001ca200(void)

{
  return;
}


// ==== FUN_001ca290 @ 001ca290 ====

void FUN_001ca290(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_v1_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_a1_udw;
  undefined1 auVar8 [16];
  
  if (DAT_0040e064 != &DAT_003acc20) {
    DAT_0040e064 = &DAT_003acc20;
    FUN_002b3d88(0,2);
    auVar5._8_8_ = in_v1_udw;
    auVar5._0_8_ = 0x3acc2050000000;
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = 0x300000011000000;
    auVar6 = _pcpyld(auVar6,auVar5);
    *DAT_0040e5f0 = auVar6._0_4_;
    DAT_0040e5f0[1] = auVar6._4_4_;
    DAT_0040e5f0[2] = auVar6._8_4_;
    DAT_0040e5f0[3] = auVar6._12_4_;
    auVar7._8_8_ = auVar6._8_8_;
    auVar7._0_8_ = 0x10000000;
    auVar8._8_8_ = in_a1_udw;
    auVar8._0_8_ = 0x14000000020000f0;
    auVar6 = _pcpyld(auVar8,auVar7);
    DAT_0040e5f0[4] = auVar6._0_4_;
    DAT_0040e5f0[5] = auVar6._4_4_;
    DAT_0040e5f0[6] = auVar6._8_4_;
    DAT_0040e5f0[7] = auVar6._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
  }
  auVar8 = _qmtc2(0x3c000000);
  auVar6 = _lqc2(*DAT_003bd1d0);
  auVar6 = _vmulbc(auVar6,auVar8);
  auVar6 = _sqc2(auVar6);
  *(undefined1 (*) [16])PTR_DAT_003bd230 = auVar6;
  puVar2 = PTR_DAT_003bd230;
  uVar1 = *(undefined8 *)DAT_003bd1d0[1];
  uVar3 = *(undefined4 *)(DAT_003bd1d0[1] + 8);
  uVar4 = *(undefined4 *)(DAT_003bd1d0[1] + 0xc);
  *(int *)(PTR_DAT_003bd230 + 0x10) = (int)uVar1;
  *(int *)(puVar2 + 0x14) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar2 + 0x18) = uVar3;
  *(undefined4 *)(puVar2 + 0x1c) = uVar4;
  puVar2 = PTR_DAT_003bd230;
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(PTR_DAT_003bd230 + 0x20) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(puVar2 + 0x24) = uVar3;
  *(undefined4 *)(puVar2 + 0x28) = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0;
  *(undefined4 *)(PTR_DAT_003bd230 + 0x30) = *(undefined4 *)(param_2 + 8);
  *(uint *)(PTR_DAT_003bd230 + 0x34) = (uint)*(ushort *)(param_2 + 0xc);
  return;
}


// ==== FUN_001ca3b0 @ 001ca3b0 ====

void FUN_001ca3b0(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined8 extraout_v0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_v1_udw;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 in_a1_udw;
  undefined8 uVar16;
  undefined8 uVar17;
  
  FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
  iVar1 = *(int *)(PTR_DAT_003bd230 + 0x34);
  if (0 < iVar1) {
    FUN_002b3d88(0,0x81);
    uVar16 = 0;
    uVar17 = 0;
    auVar9._8_8_ = extraout_v0_udw;
    auVar9._0_8_ = 0x6c80036e01000404;
    auVar10._8_8_ = in_a1_udw;
    auVar10._0_8_ = 0x10000080;
    auVar10 = _pcpyld(auVar9,auVar10);
    *DAT_0040e5f0 = auVar10._0_4_;
    DAT_0040e5f0[1] = auVar10._4_4_;
    DAT_0040e5f0[2] = auVar10._8_4_;
    DAT_0040e5f0[3] = auVar10._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 4;
    iVar15 = 0;
    puVar8 = *(undefined8 **)(PTR_DAT_003bd230 + 0x30);
    iVar14 = 0;
    iVar13 = iVar1;
    if (0 < iVar1) {
      do {
        uVar16 = *puVar8;
        uVar17 = puVar8[1];
        puVar8 = puVar8 + 2;
        *DAT_0040e5f0 = (int)uVar16;
        DAT_0040e5f0[1] = (int)((ulong)uVar16 >> 0x20);
        DAT_0040e5f0[2] = (int)uVar17;
        DAT_0040e5f0[3] = (int)((ulong)uVar17 >> 0x20);
        iVar13 = iVar13 + -1;
        DAT_0040e5f0 = DAT_0040e5f0 + 4;
      } while (iVar13 != 0);
      iVar15 = iVar1 >> 0x1f;
      iVar14 = iVar1;
    }
    while (CONCAT44(iVar15,iVar14) < 0x80) {
      *DAT_0040e5f0 = (int)uVar16;
      DAT_0040e5f0[1] = (int)((ulong)uVar16 >> 0x20);
      DAT_0040e5f0[2] = (int)uVar17;
      DAT_0040e5f0[3] = (int)((ulong)uVar17 >> 0x20);
      DAT_0040e5f0 = DAT_0040e5f0 + 4;
      iVar14 = iVar14 + 1;
      iVar15 = iVar14 >> 0x1f;
    }
    FUN_002b3d88(0,7);
    auVar11._8_8_ = extraout_v0_udw_00;
    auVar11._0_8_ = 0x6c0603ee01000404;
    auVar3._8_8_ = in_a1_udw;
    auVar3._0_8_ = 0x10000006;
    auVar10 = _pcpyld(auVar11,auVar3);
    *DAT_0040e5f0 = auVar10._0_4_;
    DAT_0040e5f0[1] = auVar10._4_4_;
    DAT_0040e5f0[2] = auVar10._8_4_;
    DAT_0040e5f0[3] = auVar10._12_4_;
    DAT_0040e5f0[4] = *(int *)(PTR_DAT_003bd230 + 0x34) + -1;
    DAT_0040e5f0[5] = 0;
    DAT_0040e5f0[6] = 0;
    DAT_0040e5f0[7] = 0xffff8000;
    uVar4 = *(undefined4 *)(PTR_DAT_003bd230 + 4);
    uVar5 = *(undefined4 *)(PTR_DAT_003bd230 + 8);
    uVar6 = *(undefined4 *)(PTR_DAT_003bd230 + 0xc);
    DAT_0040e5f0[8] = *(undefined4 *)PTR_DAT_003bd230;
    DAT_0040e5f0[9] = uVar4;
    DAT_0040e5f0[10] = uVar5;
    DAT_0040e5f0[0xb] = uVar6;
    uVar4 = *(undefined4 *)(PTR_DAT_003bd230 + 0x14);
    uVar5 = *(undefined4 *)(PTR_DAT_003bd230 + 0x18);
    uVar6 = *(undefined4 *)(PTR_DAT_003bd230 + 0x1c);
    DAT_0040e5f0[0xc] = *(undefined4 *)(PTR_DAT_003bd230 + 0x10);
    DAT_0040e5f0[0xd] = uVar4;
    DAT_0040e5f0[0xe] = uVar5;
    DAT_0040e5f0[0xf] = uVar6;
    uVar4 = *(undefined4 *)(PTR_DAT_003bd230 + 0x24);
    uVar5 = *(undefined4 *)(PTR_DAT_003bd230 + 0x28);
    uVar6 = *(undefined4 *)(PTR_DAT_003bd230 + 0x2c);
    DAT_0040e5f0[0x10] = *(undefined4 *)(PTR_DAT_003bd230 + 0x20);
    DAT_0040e5f0[0x11] = uVar4;
    DAT_0040e5f0[0x12] = uVar5;
    DAT_0040e5f0[0x13] = uVar6;
    auVar7._12_4_ = 0xffff8000;
    auVar7._0_12_ = ZEXT812(0);
    DAT_0040e5f0[0x14] = 0;
    DAT_0040e5f0[0x15] = 0;
    DAT_0040e5f0[0x16] = 0;
    DAT_0040e5f0[0x17] = 0xffff8000;
    auVar12._8_8_ = auVar7._8_8_;
    auVar12._0_8_ = 0x302e400000000000;
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x412;
    auVar10 = _pcpyld(auVar2,auVar12);
    DAT_0040e5f0[0x18] = auVar10._0_4_;
    DAT_0040e5f0[0x19] = auVar10._4_4_;
    DAT_0040e5f0[0x1a] = auVar10._8_4_;
    DAT_0040e5f0[0x1b] = auVar10._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  return;
}


// ==== FUN_001ca590 @ 001ca590 ====

void FUN_001ca590(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001ca5e0 @ 001ca5e0 ====

void FUN_001ca5e0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  undefined8 uStack_58;
  
  DAT_0040e064 = &DAT_0039a380;
  FUN_002b3d88(0,8);
  auVar10._8_8_ = extraout_v0_udw;
  auVar10._0_8_ = 0x300000011000000;
  auVar4._8_4_ = in_s0_udw;
  auVar4._0_8_ = 0x39a38050000000;
  auVar4._12_4_ = in_register_0000010c;
  auVar11 = _pcpyld(auVar10,auVar4);
  *DAT_0040e5f0 = auVar11._0_4_;
  DAT_0040e5f0[1] = auVar11._4_4_;
  DAT_0040e5f0[2] = auVar11._8_4_;
  DAT_0040e5f0[3] = auVar11._12_4_;
  auVar12._8_8_ = auVar11._8_8_;
  auVar12._0_8_ = 0x14000000020000f0;
  auVar5._8_4_ = in_s0_udw;
  auVar5._0_8_ = 0x10000000;
  auVar5._12_4_ = in_register_0000010c;
  auVar11 = _pcpyld(auVar12,auVar5);
  DAT_0040e5f0[4] = auVar11._0_4_;
  DAT_0040e5f0[5] = auVar11._4_4_;
  DAT_0040e5f0[6] = auVar11._8_4_;
  DAT_0040e5f0[7] = auVar11._12_4_;
  auVar13._8_8_ = auVar11._8_8_;
  auVar13._0_8_ = 0x6c0203eb01000404;
  auVar6._8_4_ = in_s0_udw;
  auVar6._0_8_ = 0x10000002;
  auVar6._12_4_ = in_register_0000010c;
  auVar11 = _pcpyld(auVar13,auVar6);
  DAT_0040e5f0[8] = auVar11._0_4_;
  DAT_0040e5f0[9] = auVar11._4_4_;
  DAT_0040e5f0[10] = auVar11._8_4_;
  DAT_0040e5f0[0xb] = auVar11._12_4_;
  DAT_0040e5f0[0xc] = 0;
  DAT_0040e5f0[0xd] = 0;
  DAT_0040e5f0[0xe] = (int)uStack_58;
  DAT_0040e5f0[0xf] = (int)((ulong)uStack_58 >> 0x20);
  auVar14._8_8_ = uStack_58;
  auVar14._0_8_ = 0x302e400000000000;
  auVar11._8_8_ = in_a0_udw;
  auVar11._0_8_ = 0x412;
  auVar11 = _pcpyld(auVar11,auVar14);
  DAT_0040e5f0[0x10] = auVar11._0_4_;
  DAT_0040e5f0[0x11] = auVar11._4_4_;
  DAT_0040e5f0[0x12] = auVar11._8_4_;
  DAT_0040e5f0[0x13] = auVar11._12_4_;
  auVar15._8_8_ = auVar11._8_8_;
  auVar15._0_8_ = 0x5000000210000000;
  auVar7._8_4_ = in_s0_udw;
  auVar7._0_8_ = 0x10000002;
  auVar7._12_4_ = in_register_0000010c;
  auVar11 = _pcpyld(auVar15,auVar7);
  DAT_0040e5f0[0x14] = auVar11._0_4_;
  DAT_0040e5f0[0x15] = auVar11._4_4_;
  DAT_0040e5f0[0x16] = auVar11._8_4_;
  DAT_0040e5f0[0x17] = auVar11._12_4_;
  auVar16._8_8_ = auVar11._8_8_;
  auVar16._0_8_ = 0xe;
  auVar8._8_4_ = in_s0_udw;
  auVar8._0_8_ = 0x1000000000008001;
  auVar8._12_4_ = in_register_0000010c;
  auVar11 = _pcpyld(auVar16,auVar8);
  DAT_0040e5f0[0x18] = auVar11._0_4_;
  DAT_0040e5f0[0x19] = auVar11._4_4_;
  DAT_0040e5f0[0x1a] = auVar11._8_4_;
  DAT_0040e5f0[0x1b] = auVar11._12_4_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar11._8_8_;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 8;
  auVar11 = _pcpyld(auVar1,auVar9 << 0x40);
  DAT_0040e5f0[0x1c] = auVar11._0_4_;
  DAT_0040e5f0[0x1d] = auVar11._4_4_;
  DAT_0040e5f0[0x1e] = auVar11._8_4_;
  DAT_0040e5f0[0x1f] = auVar11._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
  auVar17._8_8_ = auVar11._8_8_;
  auVar17._0_8_ = 0x10000004;
  DAT_700020f4._0_1_ = 0;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 0x6c0403ee01000404;
  auVar11 = _pcpyld(auVar2,auVar17);
  DAT_70002000 = auVar11._0_4_;
  DAT_70002004 = auVar11._4_4_;
  DAT_70002008 = auVar11._8_4_;
  DAT_7000200c = auVar11._12_4_;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x6c0403f601000404;
  auVar11 = _pcpyld(auVar3,auVar17);
  DAT_700020f4._2_1_ = 0xff;
  DAT_70002050 = auVar11._0_4_;
  DAT_70002054 = auVar11._4_4_;
  DAT_70002058 = auVar11._8_4_;
  DAT_7000205c = auVar11._12_4_;
  DAT_700020a0 = *(undefined4 *)(DAT_0040f4c0 + 0xd120);
  DAT_700020a4 = *(undefined4 *)(DAT_0040f4c0 + 0xd124);
  DAT_700020a8 = *(undefined4 *)(DAT_0040f4c0 + 0xd128);
  DAT_700020ac = *(undefined4 *)(DAT_0040f4c0 + 0xd12c);
  DAT_700020b0 = *(undefined4 *)(DAT_0040f4c0 + 0xd130);
  DAT_700020b4 = *(undefined4 *)(DAT_0040f4c0 + 0xd134);
  DAT_700020b8 = *(undefined4 *)(DAT_0040f4c0 + 0xd138);
  DAT_700020bc = *(undefined4 *)(DAT_0040f4c0 + 0xd13c);
  DAT_700020c0 = *(undefined4 *)(DAT_0040f4c0 + 0xd140);
  DAT_700020c4 = *(undefined4 *)(DAT_0040f4c0 + 0xd144);
  DAT_700020c8 = *(undefined4 *)(DAT_0040f4c0 + 0xd148);
  DAT_700020cc = *(undefined4 *)(DAT_0040f4c0 + 0xd14c);
  DAT_700020d0 = *(undefined4 *)(DAT_0040f4c0 + 0xd150);
  DAT_700020d4 = *(undefined4 *)(DAT_0040f4c0 + 0xd154);
  DAT_700020d8 = *(undefined4 *)(DAT_0040f4c0 + 0xd158);
  DAT_700020dc = *(undefined4 *)(DAT_0040f4c0 + 0xd15c);
  DAT_700020e8 = 0;
  DAT_700020ec = 0;
  DAT_700020e0 = 0;
  DAT_700020e4 = 0;
  FUN_001c8c38();
  return;
}


// ==== FUN_001ca7e0 @ 001ca7e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ca7e0(undefined8 param_1,int param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 extraout_v0_udw;
  undefined1 auVar11 [16];
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 (*pauVar15) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  if (DAT_0040e064 != &DAT_0039a380) {
    FUN_00270fd8(0x440280);
    FUN_001ca5e0(param_1);
  }
  if ((long)*(char *)(param_2 + 1) == (long)(int)DAT_700020f4._2_1_) goto LAB_001ca9c8;
  FUN_002b3d88(0,6);
  auVar17._8_8_ = extraout_v0_udw;
  auVar17._0_8_ = 0x5000000310000000;
  auVar11._8_4_ = in_a1_udw;
  auVar11._0_8_ = 0x10000003;
  auVar11._12_4_ = in_register_0000005c;
  auVar11 = _pcpyld(auVar17,auVar11);
  *DAT_0040e5f0 = auVar11._0_4_;
  DAT_0040e5f0[1] = auVar11._4_4_;
  DAT_0040e5f0[2] = auVar11._8_4_;
  DAT_0040e5f0[3] = auVar11._12_4_;
  auVar18._8_8_ = auVar11._8_8_;
  auVar18._0_8_ = 0xe;
  auVar16._8_4_ = in_a1_udw;
  auVar16._0_8_ = 0x1000000000008002;
  auVar16._12_4_ = in_register_0000005c;
  auVar11 = _pcpyld(auVar18,auVar16);
  DAT_0040e5f0[4] = auVar11._0_4_;
  DAT_0040e5f0[5] = auVar11._4_4_;
  DAT_0040e5f0[6] = auVar11._8_4_;
  DAT_0040e5f0[7] = auVar11._12_4_;
  auVar19._8_8_ = auVar11._8_8_;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    uVar12 = 0x50003;
    if ((*(byte *)(param_2 + 1) & 0x20) != 0) {
      uVar12 = 0x5340d;
    }
  }
  else {
    uVar12 = 0x51001;
  }
  auVar19._0_8_ = 0x47;
  auVar20._4_4_ = 0;
  auVar20._0_4_ = uVar12;
  auVar20._8_4_ = in_a1_udw;
  auVar20._12_4_ = in_register_0000005c;
  auVar11 = _pcpyld(auVar19,auVar20);
  DAT_0040e5f0[8] = auVar11._0_4_;
  DAT_0040e5f0[9] = auVar11._4_4_;
  DAT_0040e5f0[10] = auVar11._8_4_;
  DAT_0040e5f0[0xb] = auVar11._12_4_;
  bVar1 = *(byte *)(param_2 + 1);
  auVar21._8_8_ = auVar11._8_8_;
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) == 0) {
      uVar13 = 0xa8;
      uVar10 = 0x44;
      goto LAB_001ca94c;
    }
    uVar13 = 0x62;
    if ((bVar1 & 2) != 0) {
      uVar13 = 0x42;
    }
    uVar14 = 0x80;
  }
  else {
    uVar13 = 0x68;
    uVar10 = 0x8000000048;
LAB_001ca94c:
    uVar14 = 0x80;
    if ((bVar1 & 2) != 0) {
      uVar13 = (undefined4)uVar10;
      uVar14 = (undefined4)((ulong)uVar10 >> 0x20);
    }
  }
  auVar21._0_8_ = 0x42;
  auVar22._4_4_ = uVar14;
  auVar22._0_4_ = uVar13;
  auVar22._8_4_ = in_a1_udw;
  auVar22._12_4_ = in_register_0000005c;
  auVar11 = _pcpyld(auVar21,auVar22);
  DAT_0040e5f0[0xc] = auVar11._0_4_;
  DAT_0040e5f0[0xd] = auVar11._4_4_;
  DAT_0040e5f0[0xe] = auVar11._8_4_;
  DAT_0040e5f0[0xf] = auVar11._12_4_;
  auVar24._8_8_ = auVar11._8_8_;
  auVar24._0_8_ = 0x6c0103ed01000404;
  auVar23._8_4_ = in_a1_udw;
  auVar23._0_8_ = 0x10000001;
  auVar23._12_4_ = in_register_0000005c;
  auVar11 = _pcpyld(auVar24,auVar23);
  DAT_0040e5f0[0x10] = auVar11._0_4_;
  DAT_0040e5f0[0x11] = auVar11._4_4_;
  DAT_0040e5f0[0x12] = auVar11._8_4_;
  DAT_0040e5f0[0x13] = auVar11._12_4_;
  uVar13 = 0;
  if ((*(byte *)(param_2 + 1) & 0x10) != 0) {
    uVar13 = 0xffffffff;
  }
  DAT_0040e5f0[0x14] = uVar13;
  DAT_0040e5f0[0x15] = 0;
  DAT_0040e5f0[0x16] = 0;
  DAT_0040e5f0[0x17] = 0;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x18;
  DAT_700020f4._2_1_ = *(char *)(param_2 + 1);
LAB_001ca9c8:
  DAT_700020f4._1_1_ = 1;
  iVar2 = *(int *)(param_2 + 4);
  DAT_700020f4._0_1_ = DAT_700020f0 != iVar2;
  if ((bool)(undefined1)DAT_700020f4) {
    DAT_700020f0 = iVar2;
  }
  if (param_3 == 0) {
    DAT_70002068 = (int)_DAT_700020a8;
    _DAT_70002060 = _DAT_700020a0;
    DAT_7000206c = (int)((ulong)_DAT_700020a8 >> 0x20);
    DAT_70002090 = DAT_700020d0;
    DAT_70002094 = DAT_700020d4;
    DAT_70002098 = DAT_700020d8;
    DAT_7000209c = DAT_700020dc;
    DAT_70002070 = (undefined4)_DAT_700020b0;
    DAT_70002074 = (undefined4)((ulong)_DAT_700020b0 >> 0x20);
    DAT_70002078 = DAT_700020b8;
    DAT_7000207c = DAT_700020bc;
    DAT_70002080 = DAT_700020c0;
    DAT_70002084 = DAT_700020c4;
    DAT_70002088 = DAT_700020c8;
    DAT_7000208c = DAT_700020cc;
  }
  else {
    pauVar15 = (undefined1 (*) [16])param_3;
    auVar18 = _lqc2(*pauVar15);
    auVar11 = _lqc2(pauVar15[1]);
    auVar5._8_4_ = DAT_700020b8;
    auVar5._0_8_ = _DAT_700020b0;
    auVar5._12_4_ = DAT_700020bc;
    auVar17 = _lqc2(auVar5);
    auVar7._4_4_ = DAT_700020c4;
    auVar7._0_4_ = DAT_700020c0;
    auVar7._8_4_ = DAT_700020c8;
    auVar7._12_4_ = DAT_700020cc;
    auVar16 = _lqc2(auVar7);
    auVar3._8_8_ = _DAT_700020a8;
    auVar3._0_8_ = _DAT_700020a0;
    auVar19 = _lqc2(auVar3);
    auVar22 = _lqc2(_DAT_700020e0);
    _vmulabc(auVar19,auVar18);
    _vmaddabc(auVar17,auVar18);
    auVar23 = _vmaddbc(auVar16,auVar18);
    _vmulabc(auVar19,auVar11);
    _vmaddabc(auVar17,auVar11);
    auVar20 = _vmaddbc(auVar16,auVar11);
    _sqc2(auVar20);
    _sqc2(auVar23);
    auVar11 = _vmove(auVar23);
    auVar24 = _vaddbc(auVar22,auVar11);
    auVar9._4_4_ = DAT_700020d4;
    auVar9._0_4_ = DAT_700020d0;
    auVar9._8_4_ = DAT_700020d8;
    auVar9._12_4_ = DAT_700020dc;
    auVar19 = _lqc2(auVar9);
    auVar6._8_4_ = DAT_700020b8;
    auVar6._0_8_ = _DAT_700020b0;
    auVar6._12_4_ = DAT_700020bc;
    auVar18 = _lqc2(auVar6);
    auVar8._4_4_ = DAT_700020c4;
    auVar8._0_4_ = DAT_700020c0;
    auVar8._8_4_ = DAT_700020c8;
    auVar8._12_4_ = DAT_700020cc;
    auVar17 = _lqc2(auVar8);
    auVar21 = _lqc2(pauVar15[3]);
    auVar11 = _lqc2(pauVar15[2]);
    auVar4._8_8_ = _DAT_700020a8;
    auVar4._0_8_ = _DAT_700020a0;
    auVar16 = _lqc2(auVar4);
    _vmulabc(auVar16,auVar11);
    _vmaddabc(auVar18,auVar11);
    auVar11 = _vmaddbc(auVar17,auVar11);
    _vmulabc(auVar16,auVar21);
    _vmaddabc(auVar18,auVar21);
    _vmaddabc(auVar17,auVar21);
    auVar17 = _vmaddbc(auVar19,in_vf0);
    _sqc2(auVar20);
    _sqc2(auVar11);
    _sqc2(auVar17);
    _sqc2(auVar11);
    _sqc2(auVar17);
    _sqc2(auVar20);
    _sqc2(auVar11);
    auVar18 = _vaddbc(auVar22,auVar20);
    _sqc2(auVar17);
    auVar16 = _vaddbc(auVar22,auVar11);
    _sqc2(auVar23);
    auVar17 = _vaddbc(auVar22,auVar17);
    auVar11 = _sqc2(auVar18);
    auVar16 = _sqc2(auVar16);
    auVar17 = _sqc2(auVar17);
    _sqc2(auVar23);
    _sqc2(auVar24);
    _DAT_70002060 = _sqc2(auVar24);
    uStack_e8 = auVar11._8_4_;
    DAT_70002078 = uStack_e8;
    uStack_e4 = auVar11._12_4_;
    DAT_7000207c = uStack_e4;
    DAT_70002070 = auVar11._0_4_;
    DAT_70002074 = auVar11._4_4_;
    uStack_e0 = auVar16._0_4_;
    DAT_70002080 = uStack_e0;
    uStack_dc = auVar16._4_4_;
    DAT_70002084 = uStack_dc;
    DAT_70002088 = auVar16._8_4_;
    DAT_7000208c = auVar16._12_4_;
    uStack_c8 = auVar17._8_4_;
    DAT_70002098 = uStack_c8;
    uStack_c4 = auVar17._12_4_;
    DAT_7000209c = uStack_c4;
    DAT_70002090 = auVar17._0_4_;
    DAT_70002094 = auVar17._4_4_;
  }
  return;
}


// ==== FUN_001cab20 @ 001cab20 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cab20(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  byte *pbVar8;
  char cVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  
  if ((char)DAT_700020f4 != '\0') {
    FUN_002707a8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,0x440280,DAT_700020f0,1,0,0);
    DAT_700020f4._0_1_ = '\0';
  }
  if (DAT_700020f4._1_1_ != '\0') {
    iVar7 = (int)param_4;
    puVar6 = (undefined *)(iVar7 + 1);
    if (param_4 == 0) {
      puVar6 = &DAT_003bcb08;
      pbVar8 = &DAT_003f42f0;
      cVar9 = '\0';
    }
    else {
      cVar9 = *(char *)(iVar7 + 0xd);
      pbVar8 = (byte *)(iVar7 + 10);
    }
    if (cVar9 == '\0') {
      auVar11 = _qmtc2(0x3b80841f);
      auVar10._4_4_ = (float)pbVar8[1];
      auVar10._0_4_ = (float)*pbVar8;
      auVar10._8_4_ = (float)pbVar8[2];
      auVar10._12_4_ = 0;
      auVar10 = _lqc2(auVar10);
    }
    else {
      auVar12 = _lqc2(_DAT_00415b60);
      auVar11 = _qmtc2(0x3b80841f);
      auVar2._4_4_ = (float)pbVar8[1];
      auVar2._0_4_ = (float)*pbVar8;
      auVar2._8_4_ = (float)pbVar8[2];
      auVar2._12_4_ = 0;
      auVar10 = _lqc2(auVar2);
      auVar10 = _vmul(auVar10,auVar12);
    }
    auVar10 = _vmulbc(auVar10,auVar11);
    auStack_50 = _sqc2(auVar10);
    FUN_001aebf8(param_1 + 0x10,puVar6,&uStack_80,&uStack_70,&uStack_60);
    DAT_70002010 = uStack_80;
    DAT_70002014 = uStack_7c;
    DAT_70002018 = uStack_78;
    DAT_7000201c = uStack_74;
    DAT_70002030 = uStack_70;
    DAT_70002034 = uStack_6c;
    DAT_70002038 = uStack_68;
    DAT_7000203c = uStack_64;
    DAT_70002020 = auStack_50._0_4_;
    DAT_70002024 = auStack_50._4_4_;
    DAT_70002028 = auStack_50._8_4_;
    DAT_7000202c = auStack_50._12_4_;
    DAT_70002040 = uStack_60;
    DAT_70002044 = uStack_5c;
    DAT_70002048 = uStack_58;
    DAT_7000204c = uStack_54;
    FUN_002b3d88(0,10);
    puVar5 = (undefined8 *)&DAT_70002000;
    iVar7 = 9;
    do {
      uVar1 = *puVar5;
      uVar3 = *(undefined4 *)(puVar5 + 1);
      uVar4 = *(undefined4 *)((int)puVar5 + 0xc);
      puVar5 = puVar5 + 2;
      *DAT_0040e5f0 = (int)uVar1;
      DAT_0040e5f0[1] = (int)((ulong)uVar1 >> 0x20);
      DAT_0040e5f0[2] = uVar3;
      DAT_0040e5f0[3] = uVar4;
      iVar7 = iVar7 + -1;
      DAT_0040e5f0 = DAT_0040e5f0 + 4;
    } while (-1 < iVar7);
    DAT_700020f4._1_1_ = '\0';
  }
  return;
}


// ==== FUN_001cad88 @ 001cad88 ====

void FUN_001cad88(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cadd8 @ 001cadd8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cadd8(undefined8 param_1,int param_2,long param_3)

{
  undefined1 auVar1 [16];
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
  undefined *puVar17;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar18 [16];
  undefined4 in_v1_udw;
  undefined4 in_register_0000003c;
  undefined8 in_a0_udw;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 in_a2_udw;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 in_t0_udw;
  undefined1 (*pauVar23) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  pauVar23 = (undefined1 (*) [16])param_3;
  if (param_3 != 0) {
    auVar27 = _lqc2(*pauVar23);
    auVar28 = _lqc2(pauVar23[1]);
    auVar29 = _lqc2(pauVar23[2]);
    _vmove(auVar27);
    _vmove(auVar28);
    auVar31 = _vaddbc(in_vf0,auVar28);
    auVar30 = _vaddbc(in_vf0,auVar27);
    _vmove(auVar29);
    auVar32 = _vaddbc(in_vf0,auVar27);
    _vmove(auVar31);
    _vmove(auVar30);
    auVar34 = _vaddbc(in_vf0,auVar29);
    auVar26 = _lqc2(pauVar23[3]);
    auVar35 = _vaddbc(in_vf0,auVar29);
    _vmove(auVar32);
    auVar25 = _vmulbc(auVar34,auVar26);
    auVar33 = _vaddbc(in_vf0,auVar28);
    auVar24 = _vmulbc(auVar35,auVar26);
    auVar25 = _vadd(auVar25,auVar24);
    auVar24 = _vmulbc(auVar33,auVar26);
    _sqc2(auVar27);
    auVar24 = _vadd(auVar25,auVar24);
    _sqc2(auVar28);
    auVar24 = _vsub(in_vf0,auVar24);
    _sqc2(auVar29);
    _sqc2(auVar26);
    _sqc2(auVar31);
    _sqc2(auVar30);
    _sqc2(auVar32);
    auStack_180 = _sqc2(auVar24);
    auStack_1b0 = _sqc2(auVar34);
    auStack_1a0 = _sqc2(auVar35);
    auStack_190 = _sqc2(auVar33);
  }
  if (DAT_0040e064 != &DAT_0039cc20) {
    FUN_00270fd8(0x440280);
    DAT_0040e064 = &DAT_0039cc20;
    FUN_002b3d88(0,0x13);
    auVar19._8_8_ = in_a0_udw;
    auVar19._0_8_ = 0x39cc2050000000;
    auVar24._8_4_ = in_v1_udw;
    auVar24._0_8_ = 0x300000011000000;
    auVar24._12_4_ = in_register_0000003c;
    auVar24 = _pcpyld(auVar24,auVar19);
    *DAT_0040e5f0 = auVar24._0_4_;
    DAT_0040e5f0[1] = auVar24._4_4_;
    DAT_0040e5f0[2] = auVar24._8_4_;
    DAT_0040e5f0[3] = auVar24._12_4_;
    auVar20._8_8_ = auVar24._8_8_;
    auVar20._0_8_ = 0x10000000;
    auVar25._8_4_ = in_v1_udw;
    auVar25._0_8_ = 0x14000000020000c0;
    auVar25._12_4_ = in_register_0000003c;
    auVar24 = _pcpyld(auVar25,auVar20);
    DAT_0040e5f0[4] = auVar24._0_4_;
    DAT_0040e5f0[5] = auVar24._4_4_;
    DAT_0040e5f0[6] = auVar24._8_4_;
    DAT_0040e5f0[7] = auVar24._12_4_;
    auVar26._8_4_ = in_v1_udw;
    auVar26._0_8_ = 0x6c0203db01000404;
    auVar26._12_4_ = in_register_0000003c;
    auVar5._8_8_ = in_t0_udw;
    auVar5._0_8_ = 0x10000002;
    auVar25 = _pcpyld(auVar26,auVar5);
    DAT_0040e5f0[8] = auVar25._0_4_;
    DAT_0040e5f0[9] = auVar25._4_4_;
    DAT_0040e5f0[10] = auVar25._8_4_;
    DAT_0040e5f0[0xb] = auVar25._12_4_;
    DAT_0040e5f0[0xc] = 0x3f800000;
    DAT_0040e5f0[0xd] = 0x3f800000;
    DAT_0040e5f0[0xe] = 0x3f800000;
    DAT_0040e5f0[0xf] = 0x3f800000;
    DAT_0040e5f0[0x10] = 0x3f800000;
    DAT_0040e5f0[0x11] = 0x3f800000;
    DAT_0040e5f0[0x12] = 0x3f800000;
    DAT_0040e5f0[0x13] = 0x3f800000;
    auVar27._8_4_ = 0x3f800000;
    auVar27._0_8_ = 0x6c0203e201000404;
    auVar27._12_4_ = 0x3f800000;
    auVar6._8_8_ = in_t0_udw;
    auVar6._0_8_ = 0x10000002;
    auVar25 = _pcpyld(auVar27,auVar6);
    DAT_0040e5f0[0x14] = auVar25._0_4_;
    DAT_0040e5f0[0x15] = auVar25._4_4_;
    DAT_0040e5f0[0x16] = auVar25._8_4_;
    DAT_0040e5f0[0x17] = auVar25._12_4_;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar24._8_8_;
    auVar28._8_4_ = 0x3f800000;
    auVar28._0_8_ = 0x412;
    auVar28._12_4_ = 0x3f800000;
    auVar7._8_8_ = in_t0_udw;
    auVar7._0_8_ = 0x302e400000000000;
    auVar24 = _pcpyld(auVar28,auVar7);
    DAT_0040e5f0[0x18] = auVar24._0_4_;
    DAT_0040e5f0[0x19] = auVar24._4_4_;
    DAT_0040e5f0[0x1a] = auVar24._8_4_;
    DAT_0040e5f0[0x1b] = auVar24._12_4_;
    auVar29._8_4_ = 0x3f800000;
    auVar29._0_8_ = 0x412;
    auVar29._12_4_ = 0x3f800000;
    auVar8._8_8_ = in_t0_udw;
    auVar8._0_8_ = 0x312e400000000000;
    auVar24 = _pcpyld(auVar29,auVar8);
    DAT_0040e5f0[0x1c] = auVar24._0_4_;
    DAT_0040e5f0[0x1d] = auVar24._4_4_;
    DAT_0040e5f0[0x1e] = auVar24._8_4_;
    DAT_0040e5f0[0x1f] = auVar24._12_4_;
    auVar30._8_4_ = 0x3f800000;
    auVar30._0_8_ = 0x6c0103e801000404;
    auVar30._12_4_ = 0x3f800000;
    auVar9._8_8_ = in_t0_udw;
    auVar9._0_8_ = 0x10000001;
    auVar24 = _pcpyld(auVar30,auVar9);
    DAT_0040e5f0[0x20] = auVar24._0_4_;
    DAT_0040e5f0[0x21] = auVar24._4_4_;
    DAT_0040e5f0[0x22] = auVar24._8_4_;
    DAT_0040e5f0[0x23] = auVar24._12_4_;
    in_v1_udw = 0;
    in_register_0000003c = 0;
    DAT_0040e5f0[0x24] = 0;
    DAT_0040e5f0[0x25] = 0;
    DAT_0040e5f0[0x26] = 0;
    DAT_0040e5f0[0x27] = 0;
    auVar10._8_8_ = in_t0_udw;
    auVar10._0_8_ = 0x10000007;
    auVar24 = _pcpyld(ZEXT816(0x5000000700000000),auVar10);
    DAT_0040e5f0[0x28] = auVar24._0_4_;
    DAT_0040e5f0[0x29] = auVar24._4_4_;
    DAT_0040e5f0[0x2a] = auVar24._8_4_;
    DAT_0040e5f0[0x2b] = auVar24._12_4_;
    auVar31._12_4_ = 0;
    auVar31._0_12_ = ZEXT812(0xe);
    auVar11._8_8_ = in_t0_udw;
    auVar11._0_8_ = 0x1000000000008006;
    auVar24 = _pcpyld(auVar31,auVar11);
    DAT_0040e5f0[0x2c] = auVar24._0_4_;
    DAT_0040e5f0[0x2d] = auVar24._4_4_;
    DAT_0040e5f0[0x2e] = auVar24._8_4_;
    DAT_0040e5f0[0x2f] = auVar24._12_4_;
    auVar32._12_4_ = 0;
    auVar32._0_12_ = ZEXT812(0x47);
    auVar12._8_8_ = in_t0_udw;
    auVar12._0_8_ = 0x50003;
    auVar24 = _pcpyld(auVar32,auVar12);
    DAT_0040e5f0[0x30] = auVar24._0_4_;
    DAT_0040e5f0[0x31] = auVar24._4_4_;
    DAT_0040e5f0[0x32] = auVar24._8_4_;
    DAT_0040e5f0[0x33] = auVar24._12_4_;
    auVar33._12_4_ = 0;
    auVar33._0_12_ = ZEXT812(0x48);
    auVar13._8_8_ = in_t0_udw;
    auVar13._0_8_ = 0x51001;
    auVar24 = _pcpyld(auVar33,auVar13);
    DAT_0040e5f0[0x34] = auVar24._0_4_;
    DAT_0040e5f0[0x35] = auVar24._4_4_;
    DAT_0040e5f0[0x36] = auVar24._8_4_;
    DAT_0040e5f0[0x37] = auVar24._12_4_;
    auVar34._12_4_ = 0;
    auVar34._0_12_ = ZEXT812(0x42);
    auVar14._8_8_ = in_t0_udw;
    auVar14._0_8_ = 0x80000000a8;
    auVar24 = _pcpyld(auVar34,auVar14);
    DAT_0040e5f0[0x38] = auVar24._0_4_;
    DAT_0040e5f0[0x39] = auVar24._4_4_;
    DAT_0040e5f0[0x3a] = auVar24._8_4_;
    DAT_0040e5f0[0x3b] = auVar24._12_4_;
    auVar35._12_4_ = 0;
    auVar35._0_12_ = ZEXT812(0x43);
    auVar15._8_8_ = in_t0_udw;
    auVar15._0_8_ = 0x8000000058;
    auVar24 = _pcpyld(auVar35,auVar15);
    DAT_0040e5f0[0x3c] = auVar24._0_4_;
    DAT_0040e5f0[0x3d] = auVar24._4_4_;
    DAT_0040e5f0[0x3e] = auVar24._8_4_;
    DAT_0040e5f0[0x3f] = auVar24._12_4_;
    auVar1._12_4_ = 0;
    auVar1._0_12_ = ZEXT812(8);
    auVar24 = _pcpyld(auVar1,auVar16 << 0x40);
    DAT_0040e5f0[0x40] = auVar24._0_4_;
    DAT_0040e5f0[0x41] = auVar24._4_4_;
    DAT_0040e5f0[0x42] = auVar24._8_4_;
    DAT_0040e5f0[0x43] = auVar24._12_4_;
    auVar2._12_4_ = 0;
    auVar2._0_12_ = ZEXT812(9);
    auVar24 = _pcpyld(auVar2,auVar16 << 0x40);
    DAT_0040e5f0[0x44] = auVar24._0_4_;
    DAT_0040e5f0[0x45] = auVar24._4_4_;
    DAT_0040e5f0[0x46] = auVar24._8_4_;
    DAT_0040e5f0[0x47] = auVar24._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x48;
    FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,0);
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    in_v0_udw = extraout_v0_udw;
  }
  auVar21._8_8_ = in_a2_udw;
  auVar21._0_8_ = 0x10000003;
  *(undefined4 *)(PTR_DAT_003bd234 + 0xe0) = *(undefined4 *)(param_2 + 4);
  auVar3._8_4_ = in_v1_udw;
  auVar3._0_8_ = 0x6c0303e901000404;
  auVar3._12_4_ = in_register_0000003c;
  auVar24 = _pcpyld(auVar3,auVar21);
  *(undefined4 *)(PTR_DAT_003bd234 + 0xe4) = DAT_003bd1e8;
  puVar17 = PTR_DAT_003bd234;
  *(int *)(PTR_DAT_003bd234 + 0x50) = auVar24._0_4_;
  *(int *)(puVar17 + 0x54) = auVar24._4_4_;
  *(int *)(puVar17 + 0x58) = auVar24._8_4_;
  *(int *)(puVar17 + 0x5c) = auVar24._12_4_;
  puVar17 = PTR_DAT_003bd234;
  auVar28 = _lqc2(_DAT_00416580);
  auVar27 = _lqc2(_DAT_00416550);
  auVar26 = _lqc2(_DAT_00416560);
  auVar25 = _lqc2(_DAT_00416570);
  auStack_160 = _sqc2(auVar27);
  auStack_150 = _sqc2(auVar26);
  auStack_140 = _sqc2(auVar25);
  _sqc2(auVar28);
  auVar29 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  if (param_3 != 0) {
    auVar31 = _lqc2(*pauVar23);
    auVar30 = _lqc2(pauVar23[1]);
    auVar32 = _lqc2(pauVar23[2]);
    _vmulabc(auVar27,auVar31);
    _vmaddabc(auVar26,auVar31);
    auVar33 = _vmaddbc(auVar25,auVar31);
    _vmulabc(auVar27,auVar30);
    _vmaddabc(auVar26,auVar30);
    auVar34 = _vmaddbc(auVar25,auVar30);
    auVar30 = _lqc2(pauVar23[3]);
    _vmulabc(auVar27,auVar32);
    _vmaddabc(auVar26,auVar32);
    auVar31 = _vmaddbc(auVar25,auVar32);
    _vmulabc(auVar27,auVar30);
    _vmaddabc(auVar26,auVar30);
    _vmaddabc(auVar25,auVar30);
    auVar25 = _vmaddbc(auVar28,in_vf0);
    auStack_160 = _sqc2(auVar33);
    auStack_150 = _sqc2(auVar34);
    auStack_140 = _sqc2(auVar31);
    _sqc2(auVar25);
    _sqc2(auVar33);
    _sqc2(auVar34);
    _sqc2(auVar31);
    _sqc2(auVar25);
    _sqc2(auVar33);
    _sqc2(auVar34);
    _sqc2(auVar31);
    _sqc2(auVar25);
    auVar28 = _lqc2(auStack_1b0);
    auVar27 = _lqc2(auStack_1a0);
    auVar26 = _lqc2(auStack_190);
    auVar25 = _lqc2(auStack_180);
    _vmulabc(auVar28,auVar29);
    _vmaddabc(auVar27,auVar29);
    _vmaddabc(auVar26,auVar29);
    auVar29 = _vmaddbc(auVar25,in_vf0);
  }
  auVar25 = _lqc2(auStack_160);
  auVar26 = _vsubbc(in_vf0,in_vf0);
  _lqc2(auStack_90);
  auVar22._8_8_ = auVar24._8_8_;
  auVar22._0_8_ = 0x10000004;
  _vadd(in_vf0,auVar25);
  auVar24 = _vmr32(auVar29);
  auVar25 = _lqc2(auStack_150);
  auVar24 = _sqc2(auVar24);
  auVar27 = _lqc2(auStack_140);
  _lqc2(auStack_80);
  auStack_90._0_4_ = auVar24._0_4_;
  auStack_90._4_4_ = auVar24._4_4_;
  auStack_90._8_4_ = auVar24._8_4_;
  auStack_90._12_4_ = auVar24._12_4_;
  _vadd(in_vf0,auVar25);
  auVar24 = _vaddbc(auVar26,auVar29);
  *(undefined4 *)(PTR_DAT_003bd234 + 0x60) = auStack_90._0_4_;
  *(undefined4 *)(puVar17 + 100) = auStack_90._4_4_;
  *(undefined4 *)(puVar17 + 0x68) = auStack_90._8_4_;
  *(undefined4 *)(puVar17 + 0x6c) = auStack_90._12_4_;
  puVar17 = PTR_DAT_003bd234;
  auVar25 = _qmfc2(auVar24._0_4_);
  _lqc2(auStack_70);
  auVar4._8_4_ = auStack_90._8_4_;
  auVar4._0_8_ = 0x6c0403ee01000404;
  auVar4._12_4_ = auStack_90._12_4_;
  auVar26 = _pcpyld(auVar4,auVar22);
  auVar24 = _vadd(in_vf0,auVar27);
  auVar24 = _sqc2(auVar24);
  auVar27 = _vsubbc(in_vf0,in_vf0);
  _lqc2(auVar24);
  *(int *)(PTR_DAT_003bd234 + 0x70) = auVar25._0_4_;
  *(int *)(puVar17 + 0x74) = auVar25._4_4_;
  *(int *)(puVar17 + 0x78) = auVar25._8_4_;
  *(int *)(puVar17 + 0x7c) = auVar25._12_4_;
  puVar17 = PTR_DAT_003bd234;
  auVar24 = _vaddbc(auVar27,auVar29);
  auVar25 = _qmfc2(auVar24._0_4_);
  auVar18._8_8_ = in_v0_udw;
  auVar18._0_8_ = 0x6c0403e401000404;
  auVar24 = _pcpyld(auVar18,auVar22);
  *(int *)(PTR_DAT_003bd234 + 0x80) = auVar25._0_4_;
  *(int *)(puVar17 + 0x84) = auVar25._4_4_;
  *(int *)(puVar17 + 0x88) = auVar25._8_4_;
  *(int *)(puVar17 + 0x8c) = auVar25._12_4_;
  puVar17 = PTR_DAT_003bd234;
  *(int *)PTR_DAT_003bd234 = auVar26._0_4_;
  *(int *)(puVar17 + 4) = auVar26._4_4_;
  *(int *)(puVar17 + 8) = auVar26._8_4_;
  *(int *)(puVar17 + 0xc) = auVar26._12_4_;
  puVar17 = PTR_DAT_003bd234;
  *(int *)(PTR_DAT_003bd234 + 0x90) = auVar24._0_4_;
  *(int *)(puVar17 + 0x94) = auVar24._4_4_;
  *(int *)(puVar17 + 0x98) = auVar24._8_4_;
  *(int *)(puVar17 + 0x9c) = auVar24._12_4_;
  if (param_3 == 0) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar26 = _vmove(in_vf0);
    auVar27 = _vaddbc(in_vf0,in_vf0);
    auVar24 = _vaddbc(in_vf0,in_vf0);
    auVar25 = _vaddbc(in_vf0,in_vf0);
    auVar24 = _sqc2(auVar24);
    auVar25 = _sqc2(auVar25);
    _sqc2(auVar26);
    _sqc2(auVar27);
    auVar26 = _sqc2(auVar27);
    *(undefined1 (*) [16])(PTR_DAT_003bd234 + 0xa0) = auVar26;
    puVar17 = PTR_DAT_003bd234;
    auStack_160._8_4_ = auVar24._8_4_;
    auStack_160._12_4_ = auVar24._12_4_;
    *(int *)(PTR_DAT_003bd234 + 0xb0) = auVar24._0_4_;
    *(int *)(puVar17 + 0xb4) = auVar24._4_4_;
    *(undefined4 *)(puVar17 + 0xb8) = auStack_160._8_4_;
    *(undefined4 *)(puVar17 + 0xbc) = auStack_160._12_4_;
    puVar17 = PTR_DAT_003bd234;
    auStack_150._8_4_ = auVar25._8_4_;
    auStack_150._12_4_ = auVar25._12_4_;
    *(int *)(PTR_DAT_003bd234 + 0xc0) = auVar25._0_4_;
    *(int *)(puVar17 + 0xc4) = auVar25._4_4_;
    *(undefined4 *)(puVar17 + 200) = auStack_150._8_4_;
    *(undefined4 *)(puVar17 + 0xcc) = auStack_150._12_4_;
    puVar17 = PTR_DAT_003bd234;
    *(undefined4 *)(PTR_DAT_003bd234 + 0xd0) = 0;
    *(undefined4 *)(puVar17 + 0xd4) = 0;
    *(undefined4 *)(puVar17 + 0xd8) = 0;
    *(undefined4 *)(puVar17 + 0xdc) = 0;
  }
  else {
    auVar27 = _lqc2(*pauVar23);
    auVar26 = _lqc2(pauVar23[3]);
    auVar24 = _lqc2(pauVar23[1]);
    auVar25 = _lqc2(pauVar23[2]);
    _sqc2(auVar26);
    _sqc2(auVar24);
    auVar26 = _vmulbc(in_vf0,in_vf0);
    _sqc2(auVar25);
    auVar24 = _vmulbc(in_vf0,in_vf0);
    _vmove(auVar27);
    _sqc2(auVar27);
    auVar27 = _vmulbc(in_vf0,in_vf0);
    auVar25 = _vmulbc(in_vf0,in_vf0);
    auVar24 = _sqc2(auVar24);
    auVar25 = _sqc2(auVar25);
    auVar26 = _sqc2(auVar26);
    _sqc2(auVar27);
    auVar27 = _sqc2(auVar27);
    *(undefined1 (*) [16])(PTR_DAT_003bd234 + 0xa0) = auVar27;
    puVar17 = PTR_DAT_003bd234;
    auStack_160._8_4_ = auVar24._8_4_;
    auStack_160._12_4_ = auVar24._12_4_;
    *(int *)(PTR_DAT_003bd234 + 0xb0) = auVar24._0_4_;
    *(int *)(puVar17 + 0xb4) = auVar24._4_4_;
    *(undefined4 *)(puVar17 + 0xb8) = auStack_160._8_4_;
    *(undefined4 *)(puVar17 + 0xbc) = auStack_160._12_4_;
    puVar17 = PTR_DAT_003bd234;
    auStack_150._8_4_ = auVar25._8_4_;
    auStack_150._12_4_ = auVar25._12_4_;
    *(int *)(PTR_DAT_003bd234 + 0xc0) = auVar25._0_4_;
    *(int *)(puVar17 + 0xc4) = auVar25._4_4_;
    *(undefined4 *)(puVar17 + 200) = auStack_150._8_4_;
    *(undefined4 *)(puVar17 + 0xcc) = auStack_150._12_4_;
    puVar17 = PTR_DAT_003bd234;
    auStack_140._0_4_ = auVar26._0_4_;
    auStack_140._4_4_ = auVar26._4_4_;
    auStack_140._8_4_ = auVar26._8_4_;
    auStack_140._12_4_ = auVar26._12_4_;
    *(undefined4 *)(PTR_DAT_003bd234 + 0xd0) = auStack_140._0_4_;
    *(undefined4 *)(puVar17 + 0xd4) = auStack_140._4_4_;
    *(undefined4 *)(puVar17 + 0xd8) = auStack_140._8_4_;
    *(undefined4 *)(puVar17 + 0xdc) = auStack_140._12_4_;
  }
  PTR_DAT_003bd234[0xe8] = 1;
  return;
}


// ==== FUN_001cb3e8 @ 001cb3e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cb3e8(int param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 in_a1_udw;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined *puVar24;
  undefined8 in_a2_udw;
  byte *pbVar25;
  undefined4 *puVar26;
  char cVar27;
  undefined1 in_vf0 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if (param_3 < 1) {
    iVar17 = (int)param_4;
    puVar24 = (undefined *)(iVar17 + 1);
    if (param_4 == 0) {
      puVar24 = &DAT_003bcb08;
      pbVar25 = &DAT_003f42f0;
      cVar27 = '\0';
    }
    else {
      cVar27 = *(char *)(iVar17 + 0xd);
      pbVar25 = (byte *)(iVar17 + 10);
    }
    if (cVar27 == '\0') {
      fStack_68 = (float)pbVar25[2];
      auVar29 = _qmtc2(0x3b80841f);
      auVar28._4_4_ = (float)pbVar25[1];
      auVar28._0_4_ = (float)*pbVar25;
      auVar28._8_4_ = fStack_68;
      auVar28._12_4_ = 0;
      auVar28 = _lqc2(auVar28);
    }
    else {
      auVar30 = _lqc2(_DAT_00415b60);
      fStack_68 = (float)pbVar25[2];
      auVar29 = _qmtc2(0x3b80841f);
      auVar31._4_4_ = (float)pbVar25[1];
      auVar31._0_4_ = (float)*pbVar25;
      auVar31._8_4_ = fStack_68;
      auVar31._12_4_ = 0;
      auVar28 = _lqc2(auVar31);
      auVar28 = _vmul(auVar28,auVar30);
    }
    auVar28 = _vmulbc(auVar28,auVar29);
    auStack_30 = _sqc2(auVar28);
    FUN_001aebf8(param_1 + 0x10,puVar24,&uStack_60,auStack_50,auStack_40);
    puVar24 = PTR_DAT_003bd234;
    auVar28 = _lqc2(auStack_40);
    if (cGpffff8200 != '\0') {
      auVar31 = _qmtc2(0x3fa00000);
      auVar28 = _vaddbc(auVar28,auVar31);
      auVar30 = _lqc2(auStack_50);
      auVar28 = _vaddbc(in_vf0,auVar28);
      auVar29 = _qmtc2(0x3f000000);
      _sqc2(auVar28);
      auVar28 = _vaddbc(auVar28,auVar29);
      auVar29 = _vaddbc(auVar30,auVar31);
      auVar28 = _vaddbc(in_vf0,auVar28);
      auVar29 = _vaddbc(in_vf0,auVar29);
      auStack_40 = _sqc2(auVar28);
      auStack_50 = _sqc2(auVar29);
    }
    *(undefined4 *)(PTR_DAT_003bd234 + 0x10) = uStack_60;
    *(undefined4 *)(puVar24 + 0x14) = uStack_5c;
    *(undefined4 *)(puVar24 + 0x18) = uStack_58;
    *(undefined4 *)(puVar24 + 0x1c) = uStack_54;
    puVar24 = PTR_DAT_003bd234;
    *(undefined4 *)(PTR_DAT_003bd234 + 0x30) = auStack_50._0_4_;
    *(undefined4 *)(puVar24 + 0x34) = auStack_50._4_4_;
    *(undefined4 *)(puVar24 + 0x38) = auStack_50._8_4_;
    *(undefined4 *)(puVar24 + 0x3c) = auStack_50._12_4_;
    puVar24 = PTR_DAT_003bd234;
    *(undefined4 *)(PTR_DAT_003bd234 + 0x40) = auStack_40._0_4_;
    *(undefined4 *)(puVar24 + 0x44) = auStack_40._4_4_;
    *(undefined4 *)(puVar24 + 0x48) = auStack_40._8_4_;
    *(undefined4 *)(puVar24 + 0x4c) = auStack_40._12_4_;
    puVar24 = PTR_DAT_003bd234;
    *(undefined4 *)(PTR_DAT_003bd234 + 0x20) = auStack_30._0_4_;
    *(undefined4 *)(puVar24 + 0x24) = auStack_30._4_4_;
    *(undefined4 *)(puVar24 + 0x28) = auStack_30._8_4_;
    *(undefined4 *)(puVar24 + 0x2c) = auStack_30._12_4_;
    uVar15 = auStack_50._8_4_;
    uVar16 = auStack_50._12_4_;
    uVar18 = auStack_40._8_4_;
    uVar19 = auStack_40._12_4_;
    if (PTR_DAT_003bd234[0xe8] != '\0') {
      FUN_00270938(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                   *(undefined4 *)(PTR_DAT_003bd234 + 0xe0),*(undefined4 *)(PTR_DAT_003bd234 + 0xe4)
                   ,1);
      PTR_DAT_003bd234[0xe8] = 0;
    }
    FUN_002b3d88(0,0x16);
    iVar17 = 0xd;
    puVar14 = (undefined4 *)PTR_DAT_003bd234;
    do {
      puVar26 = DAT_0040e5f0;
      uVar10 = *puVar14;
      uVar11 = puVar14[1];
      uVar12 = (undefined4)*(ulong *)(puVar14 + 2);
      uVar13 = puVar14[3];
      uVar8 = *(ulong *)(puVar14 + 2);
      puVar14 = puVar14 + 4;
      *puVar26 = uVar10;
      puVar26[1] = uVar11;
      puVar26[2] = uVar12;
      puVar26[3] = uVar13;
      iVar17 = iVar17 + -1;
      DAT_0040e5f0 = puVar26 + 4;
    } while (-1 < iVar17 >> 0x1f);
    auVar20._8_8_ = in_a1_udw;
    auVar20._0_8_ = 0x6c0503dd01000404;
    auVar1._8_4_ = uVar15;
    auVar1._0_8_ = 0x10000005;
    auVar1._12_4_ = uVar16;
    auVar28 = _pcpyld(auVar20,auVar1);
    puVar26[4] = auVar28._0_4_;
    puVar26[5] = auVar28._4_4_;
    puVar26[6] = auVar28._8_4_;
    puVar26[7] = auVar28._12_4_;
    auVar29._8_4_ = uVar12;
    auVar29._0_8_ = 0xee;
    auVar29._12_4_ = uVar13;
    auVar2._8_4_ = uVar15;
    auVar2._0_8_ = 0x2000000000000001;
    auVar2._12_4_ = uVar16;
    auVar28 = _pcpyld(auVar29,auVar2);
    puVar26[8] = auVar28._0_4_;
    puVar26[9] = auVar28._4_4_;
    puVar26[10] = auVar28._8_4_;
    puVar26[0xb] = auVar28._12_4_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar8;
    auVar6._8_8_ = in_a2_udw;
    auVar6._0_8_ = 0x3d;
    auVar28 = _pcpyld(auVar6,auVar9 << 0x40);
    puVar26[0xc] = auVar28._0_4_;
    puVar26[0xd] = auVar28._4_4_;
    puVar26[0xe] = auVar28._8_4_;
    puVar26[0xf] = auVar28._12_4_;
    auVar21._8_8_ = auVar28._8_8_;
    auVar21._0_8_ = 7;
    auVar4._8_4_ = uVar18;
    auVar4._0_8_ = *(undefined8 *)(*(int *)(PTR_DAT_003bd234 + 0xe4) + 0x3c);
    auVar4._12_4_ = uVar19;
    auVar28 = _pcpyld(auVar21,auVar4);
    puVar26[0x10] = auVar28._0_4_;
    puVar26[0x11] = auVar28._4_4_;
    puVar26[0x12] = auVar28._8_4_;
    puVar26[0x13] = auVar28._12_4_;
    auVar30._8_4_ = uVar12;
    auVar30._0_8_ = DAT_0040dfe8;
    auVar30._12_4_ = uVar13;
    auVar7._8_8_ = in_a2_udw;
    auVar7._0_8_ = 0x3d;
    auVar28 = _pcpyld(auVar7,auVar30);
    puVar26[0x14] = auVar28._0_4_;
    puVar26[0x15] = auVar28._4_4_;
    puVar26[0x16] = auVar28._8_4_;
    puVar26[0x17] = auVar28._12_4_;
    auVar22._8_8_ = auVar28._8_8_;
    auVar22._0_8_ = 6;
    auVar5._8_4_ = uVar18;
    auVar5._0_8_ = *(undefined8 *)(*(int *)(PTR_DAT_003bd234 + 0xe0) + 0x3c);
    auVar5._12_4_ = uVar19;
    auVar28 = _pcpyld(auVar22,auVar5);
    puVar26[0x18] = auVar28._0_4_;
    puVar26[0x19] = auVar28._4_4_;
    puVar26[0x1a] = auVar28._8_4_;
    puVar26[0x1b] = auVar28._12_4_;
    auVar23._8_8_ = auVar28._8_8_;
    auVar23._0_8_ = 0x6c0103ec01000404;
    auVar3._8_4_ = uVar15;
    auVar3._0_8_ = 0x10000001;
    auVar3._12_4_ = uVar16;
    auVar28 = _pcpyld(auVar23,auVar3);
    puVar26[0x1c] = auVar28._0_4_;
    puVar26[0x1d] = auVar28._4_4_;
    puVar26[0x1e] = auVar28._8_4_;
    puVar26[0x1f] = auVar28._12_4_;
    puVar26[0x20] = 0;
    puVar26[0x21] = 0;
    puVar26[0x22] = fStack_68;
    puVar26[0x23] = 0;
    DAT_0040e5f0 = puVar26 + 0x24;
  }
  return;
}


// ==== FUN_001cb780 @ 001cb780 ====

void FUN_001cb780(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cb7d0 @ 001cb7d0 ====

void FUN_001cb7d0(undefined8 param_1,char *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar5 [16];
  undefined8 in_v1_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_a0_udw;
  int iVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  undefined1 in_vf0 [16];
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
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  
  lVar14 = 0;
  if (*param_2 == '\x05') {
    lVar14 = 0x39eb60;
  }
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = 0x410000;
  if (*param_2 == '\x06') {
    lVar14 = 0x3a3710;
  }
  if (DAT_0040e064 != lVar14) {
    DAT_0040e064 = (int)lVar14;
    FUN_002b3d88(0,7);
    auVar23._8_8_ = auVar6._8_8_;
    auVar23._0_8_ = lVar14 << 0x20 | 0x50000000;
    auVar28._8_8_ = in_a0_udw;
    auVar28._0_8_ = 0x300000011000000;
    auVar6 = _pcpyld(auVar28,auVar23);
    *DAT_0040e5f0 = auVar6._0_4_;
    DAT_0040e5f0[1] = auVar6._4_4_;
    DAT_0040e5f0[2] = auVar6._8_4_;
    DAT_0040e5f0[3] = auVar6._12_4_;
    auVar24._8_8_ = auVar6._8_8_;
    auVar24._0_8_ = 0x10000000;
    auVar16._8_8_ = in_a0_udw;
    auVar16._0_8_ = 0x14000000020000e0;
    auVar6 = _pcpyld(auVar16,auVar24);
    DAT_0040e5f0[4] = auVar6._0_4_;
    DAT_0040e5f0[5] = auVar6._4_4_;
    DAT_0040e5f0[6] = auVar6._8_4_;
    DAT_0040e5f0[7] = auVar6._12_4_;
    auVar25._8_8_ = auVar6._8_8_;
    auVar25._0_8_ = 0x10000004;
    auVar17._8_8_ = in_a0_udw;
    auVar17._0_8_ = 0x5000000400000000;
    auVar6 = _pcpyld(auVar17,auVar25);
    DAT_0040e5f0[8] = auVar6._0_4_;
    DAT_0040e5f0[9] = auVar6._4_4_;
    DAT_0040e5f0[10] = auVar6._8_4_;
    DAT_0040e5f0[0xb] = auVar6._12_4_;
    auVar26._8_8_ = auVar6._8_8_;
    auVar26._0_8_ = 0x1000000000008003;
    auVar18._8_8_ = in_a0_udw;
    auVar18._0_8_ = 0xe;
    auVar6 = _pcpyld(auVar18,auVar26);
    DAT_0040e5f0[0xc] = auVar6._0_4_;
    DAT_0040e5f0[0xd] = auVar6._4_4_;
    DAT_0040e5f0[0xe] = auVar6._8_4_;
    DAT_0040e5f0[0xf] = auVar6._12_4_;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar6._8_8_;
    auVar19._8_8_ = in_a0_udw;
    auVar19._0_8_ = 8;
    auVar6 = _pcpyld(auVar19,auVar22 << 0x40);
    DAT_0040e5f0[0x10] = auVar6._0_4_;
    DAT_0040e5f0[0x11] = auVar6._4_4_;
    DAT_0040e5f0[0x12] = auVar6._8_4_;
    DAT_0040e5f0[0x13] = auVar6._12_4_;
    auVar27._8_8_ = auVar6._8_8_;
    auVar27._0_8_ = 0x50003;
    auVar20._8_8_ = in_a0_udw;
    auVar20._0_8_ = 0x47;
    auVar6 = _pcpyld(auVar20,auVar27);
    DAT_0040e5f0[0x14] = auVar6._0_4_;
    DAT_0040e5f0[0x15] = auVar6._4_4_;
    DAT_0040e5f0[0x16] = auVar6._8_4_;
    DAT_0040e5f0[0x17] = auVar6._12_4_;
    auVar7._8_8_ = auVar6._8_8_;
    auVar7._0_8_ = 0x80000000a8;
    auVar21._8_8_ = in_a0_udw;
    auVar21._0_8_ = 0x42;
    auVar6 = _pcpyld(auVar21,auVar7);
    DAT_0040e5f0[0x18] = auVar6._0_4_;
    DAT_0040e5f0[0x19] = auVar6._4_4_;
    DAT_0040e5f0[0x1a] = auVar6._8_4_;
    DAT_0040e5f0[0x1b] = auVar6._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  uVar10 = auVar6._8_8_;
  *(undefined4 *)(PTR_DAT_003bd238 + 0xc80) = 0;
  iVar3 = FUN_00110650(DAT_0040f4bc);
  puVar2 = PTR_DAT_003bd238;
  auVar28 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x20));
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = 0x6c0603ee01000404;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x10000006;
  auVar6 = _pcpyld(auVar8,auVar1);
  *(int *)PTR_DAT_003bd238 = auVar6._0_4_;
  *(int *)(puVar2 + 4) = auVar6._4_4_;
  *(int *)(puVar2 + 8) = auVar6._8_4_;
  *(int *)(puVar2 + 0xc) = auVar6._12_4_;
  if (param_3 != 0) {
    pauVar15 = (undefined1 (*) [16])param_3;
    auVar19 = _lqc2(*pauVar15);
    auVar20 = _lqc2(pauVar15[1]);
    auVar21 = _lqc2(pauVar15[2]);
    _vmove(auVar19);
    _vmove(auVar20);
    auVar23 = _vaddbc(in_vf0,auVar20);
    auVar22 = _vaddbc(in_vf0,auVar19);
    _vmove(auVar21);
    auVar27 = _vaddbc(in_vf0,auVar19);
    _vmove(auVar23);
    _vmove(auVar22);
    auVar25 = _vaddbc(in_vf0,auVar21);
    auVar18 = _lqc2(pauVar15[3]);
    auVar26 = _vaddbc(in_vf0,auVar21);
    _vmove(auVar27);
    auVar17 = _vmulbc(auVar25,auVar18);
    auVar24 = _vaddbc(in_vf0,auVar20);
    auVar16 = _vmulbc(auVar26,auVar18);
    auVar17 = _vadd(auVar17,auVar16);
    auVar16 = _vmulbc(auVar24,auVar18);
    _sqc2(auVar19);
    auVar16 = _vadd(auVar17,auVar16);
    _sqc2(auVar20);
    auVar16 = _vsub(in_vf0,auVar16);
    _sqc2(auVar21);
    _vmulabc(auVar25,auVar28);
    _vmaddabc(auVar26,auVar28);
    _vmaddabc(auVar24,auVar28);
    auVar28 = _vmaddbc(auVar16,in_vf0);
    _sqc2(auVar18);
    _sqc2(auVar23);
    _sqc2(auVar22);
    _sqc2(auVar27);
    _sqc2(auVar25);
    _sqc2(auVar26);
    _sqc2(auVar24);
    _sqc2(auVar16);
  }
  uVar10 = auVar6._8_8_;
  auVar6 = _sqc2(auVar28);
  *(undefined1 (*) [16])(PTR_DAT_003bd238 + 0x40) = auVar6;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  lVar14 = (long)param_2[0x18];
  if (lVar14 != 0) {
    piVar13 = *(int **)(param_2 + 0xc);
    pauVar15 = *(undefined1 (**) [16])(param_2 + 0x10);
    iVar3 = *(int *)(param_2 + 8);
    *(int *)(PTR_DAT_003bd238 + 0xc80) = (int)param_2[0x18] << 2;
    puVar2 = PTR_DAT_003bd238;
    lVar12 = 0;
    auVar9._0_8_ = (long)*(int *)(PTR_DAT_003bd238 + 0xc80) | 0x10000000;
    auVar9._8_8_ = uVar10;
    auVar5._0_8_ = ((long)(*(int *)(PTR_DAT_003bd238 + 0xc80) << 0x10) | 0x6c00032cU) << 0x20 |
                   0x1000404;
    auVar5._8_8_ = extraout_v0_udw;
    auVar6 = _pcpyld(auVar5,auVar9);
    *(int *)(PTR_DAT_003bd238 + 0x70) = auVar6._0_4_;
    *(int *)(puVar2 + 0x74) = auVar6._4_4_;
    *(int *)(puVar2 + 0x78) = auVar6._8_4_;
    *(int *)(puVar2 + 0x7c) = auVar6._12_4_;
    if (0 < lVar14) {
      do {
        puVar2 = PTR_DAT_003bd238;
        iVar11 = (int)lVar12;
        auVar18 = _lqc2(*pauVar15);
        lVar12 = (long)(iVar11 + 1);
        auVar17 = _lqc2(pauVar15[1]);
        pauVar4 = (undefined1 (*) [16])(*piVar13 * 0x40 + iVar3);
        auVar16 = _lqc2(*pauVar4);
        piVar13 = piVar13 + 1;
        auVar28 = _lqc2(pauVar4[1]);
        auVar6 = _lqc2(pauVar4[2]);
        _vmulabc(auVar16,auVar18);
        _vmaddabc(auVar28,auVar18);
        auVar20 = _vmaddbc(auVar6,auVar18);
        _vmulabc(auVar16,auVar17);
        _vmaddabc(auVar28,auVar17);
        auVar21 = _vmaddbc(auVar6,auVar17);
        _sqc2(auVar20);
        _sqc2(auVar21);
        auVar19 = _lqc2(pauVar4[3]);
        auVar17 = _lqc2(pauVar15[2]);
        auVar18 = _lqc2(pauVar15[3]);
        auVar16 = _lqc2(*pauVar4);
        pauVar15 = pauVar15 + 4;
        auVar28 = _lqc2(pauVar4[1]);
        auVar6 = _lqc2(pauVar4[2]);
        _vmulabc(auVar16,auVar17);
        _vmaddabc(auVar28,auVar17);
        auVar17 = _vmaddbc(auVar6,auVar17);
        _vmulabc(auVar16,auVar18);
        _vmaddabc(auVar28,auVar18);
        _vmaddabc(auVar6,auVar18);
        auVar18 = _vmaddbc(auVar19,in_vf0);
        auVar6 = _sqc2(auVar21);
        auVar28 = _sqc2(auVar17);
        auVar16 = _sqc2(auVar18);
        _sqc2(auVar17);
        _sqc2(auVar18);
        _sqc2(auVar20);
        _sqc2(auVar21);
        _sqc2(auVar17);
        _sqc2(auVar18);
        _sqc2(auVar20);
        auVar17 = _sqc2(auVar20);
        *(undefined1 (*) [16])(PTR_DAT_003bd238 + iVar11 * 0x40 + 0x80) = auVar17;
        uStack_108 = auVar6._8_4_;
        uStack_104 = auVar6._12_4_;
        *(int *)(puVar2 + iVar11 * 0x40 + 0x90) = auVar6._0_4_;
        *(int *)(puVar2 + iVar11 * 0x40 + 0x94) = auVar6._4_4_;
        *(undefined4 *)(puVar2 + iVar11 * 0x40 + 0x98) = uStack_108;
        *(undefined4 *)(puVar2 + iVar11 * 0x40 + 0x9c) = uStack_104;
        uStack_f8 = auVar28._8_4_;
        uStack_f4 = auVar28._12_4_;
        *(int *)(puVar2 + iVar11 * 0x40 + 0xa0) = auVar28._0_4_;
        *(int *)(puVar2 + iVar11 * 0x40 + 0xa4) = auVar28._4_4_;
        *(undefined4 *)(puVar2 + iVar11 * 0x40 + 0xa8) = uStack_f8;
        *(undefined4 *)(puVar2 + iVar11 * 0x40 + 0xac) = uStack_f4;
        uStack_e8 = auVar16._8_4_;
        uStack_e4 = auVar16._12_4_;
        *(int *)(puVar2 + iVar11 * 0x40 + 0xb0) = auVar16._0_4_;
        *(int *)(puVar2 + iVar11 * 0x40 + 0xb4) = auVar16._4_4_;
        *(undefined4 *)(puVar2 + iVar11 * 0x40 + 0xb8) = uStack_e8;
        *(undefined4 *)(puVar2 + iVar11 * 0x40 + 0xbc) = uStack_e4;
      } while (lVar12 < lVar14);
    }
  }
  *(undefined4 *)(PTR_DAT_003bd238 + 0xc84) = *(undefined4 *)(param_2 + 4);
  return;
}


// ==== FUN_001cbba0 @ 001cbba0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cbba0(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 extraout_v0_udw;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  undefined1 in_vf0 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if (param_4 == 0) {
    puVar19 = &DAT_003bcb08;
    pbVar22 = &DAT_003f42f0;
    uVar27 = 0;
  }
  else {
    iVar33 = (int)param_4;
    uVar27 = *(undefined1 *)(iVar33 + 0xd);
    puVar19 = (undefined *)(iVar33 + 1);
    pbVar22 = (byte *)(iVar33 + 10);
  }
  auVar38 = _lqc2(_DAT_00415b60);
  fVar35 = (float)pbVar22[2];
  auVar37 = _qmtc2(0x3b80841f);
  auVar36._4_4_ = (float)pbVar22[1];
  auVar36._0_4_ = (float)*pbVar22;
  auVar36._8_4_ = fVar35;
  auVar36._12_4_ = 0;
  auVar36 = _lqc2(auVar36);
  auVar36 = _vmul(auVar36,auVar38);
  auVar36 = _vmulbc(auVar36,auVar37);
  auStack_60 = _sqc2(auVar36);
  FUN_001aebf8(param_1 + 0x10,puVar19,&uStack_90,auStack_80,auStack_70,uVar27);
  puVar19 = PTR_DAT_003bd238;
  auVar36 = _lqc2(auStack_70);
  if (cGpffff8200 != '\0') {
    auVar38 = _qmtc2(0x3fa00000);
    auVar36 = _vaddbc(auVar36,auVar38);
    auVar39 = _lqc2(auStack_80);
    auVar36 = _vaddbc(in_vf0,auVar36);
    auVar37 = _qmtc2(0x3f000000);
    _sqc2(auVar36);
    auVar36 = _vaddbc(auVar36,auVar37);
    auVar37 = _vaddbc(auVar39,auVar38);
    auVar36 = _vaddbc(in_vf0,auVar36);
    auVar37 = _vaddbc(in_vf0,auVar37);
    auStack_70 = _sqc2(auVar36);
    auStack_80 = _sqc2(auVar37);
  }
  *(undefined4 *)(PTR_DAT_003bd238 + 0x10) = uStack_90;
  *(undefined4 *)(puVar19 + 0x14) = uStack_8c;
  *(undefined4 *)(puVar19 + 0x18) = uStack_88;
  *(undefined4 *)(puVar19 + 0x1c) = uStack_84;
  puVar19 = PTR_DAT_003bd238;
  *(int *)(PTR_DAT_003bd238 + 0x30) = auStack_80._0_4_;
  *(int *)(puVar19 + 0x34) = auStack_80._4_4_;
  *(undefined4 *)(puVar19 + 0x38) = auStack_80._8_4_;
  *(undefined4 *)(puVar19 + 0x3c) = auStack_80._12_4_;
  puVar19 = PTR_DAT_003bd238;
  *(undefined4 *)(PTR_DAT_003bd238 + 0x50) = auStack_70._0_4_;
  *(undefined4 *)(puVar19 + 0x54) = auStack_70._4_4_;
  *(undefined4 *)(puVar19 + 0x58) = auStack_70._8_4_;
  *(undefined4 *)(puVar19 + 0x5c) = auStack_70._12_4_;
  puVar19 = PTR_DAT_003bd238;
  *(int *)(PTR_DAT_003bd238 + 0x20) = auStack_60._0_4_;
  *(int *)(puVar19 + 0x24) = auStack_60._4_4_;
  *(undefined4 *)(puVar19 + 0x28) = auStack_60._8_4_;
  *(undefined4 *)(puVar19 + 0x2c) = auStack_60._12_4_;
  uVar15 = auStack_70._8_4_;
  uVar16 = auStack_70._12_4_;
  if (*(int *)(PTR_DAT_003bd238 + 0xc84) != 0) {
    FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                 *(int *)(PTR_DAT_003bd238 + 0xc84),1,0,0);
  }
  FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
  iVar33 = *(int *)(PTR_DAT_003bd238 + 0xc80);
  iVar34 = iVar33 + 8;
  FUN_002b3d88(0,iVar33 + 0xc);
  if (iVar34 != 0) {
    iVar32 = 0;
    puVar30 = (undefined4 *)PTR_DAT_003bd238;
    puVar31 = (undefined4 *)PTR_DAT_003bd238;
    if (0 < iVar33 + 1) {
      do {
        uVar1 = *(undefined8 *)(puVar30 + 4);
        uVar11 = puVar30[6];
        uVar12 = puVar30[7];
        uVar13 = puVar30[8];
        uVar14 = puVar30[9];
        uVar15 = puVar30[10];
        uVar16 = puVar30[0xb];
        uVar2 = *(undefined8 *)(puVar30 + 0xc);
        uVar17 = puVar30[0xe];
        uVar18 = puVar30[0xf];
        uVar3 = *(undefined8 *)(puVar30 + 0x10);
        uVar20 = puVar30[0x12];
        uVar21 = puVar30[0x13];
        uVar4 = *(undefined8 *)(puVar30 + 0x14);
        uVar23 = puVar30[0x16];
        uVar24 = puVar30[0x17];
        uVar5 = *(undefined8 *)(puVar30 + 0x18);
        uVar25 = puVar30[0x1a];
        uVar26 = puVar30[0x1b];
        uVar6 = *(undefined8 *)(puVar30 + 0x1c);
        uVar28 = puVar30[0x1e];
        uVar29 = puVar30[0x1f];
        uVar7 = puVar30[1];
        uVar8 = puVar30[2];
        uVar9 = puVar30[3];
        puVar31 = puVar30 + 0x20;
        *DAT_0040e5f0 = *puVar30;
        DAT_0040e5f0[1] = uVar7;
        DAT_0040e5f0[2] = uVar8;
        DAT_0040e5f0[3] = uVar9;
        DAT_0040e5f0[4] = (int)uVar1;
        DAT_0040e5f0[5] = (int)((ulong)uVar1 >> 0x20);
        DAT_0040e5f0[6] = uVar11;
        DAT_0040e5f0[7] = uVar12;
        DAT_0040e5f0[8] = uVar13;
        DAT_0040e5f0[9] = uVar14;
        DAT_0040e5f0[10] = uVar15;
        DAT_0040e5f0[0xb] = uVar16;
        DAT_0040e5f0[0xc] = (int)uVar2;
        DAT_0040e5f0[0xd] = (int)((ulong)uVar2 >> 0x20);
        DAT_0040e5f0[0xe] = uVar17;
        DAT_0040e5f0[0xf] = uVar18;
        DAT_0040e5f0[0x10] = (int)uVar3;
        DAT_0040e5f0[0x11] = (int)((ulong)uVar3 >> 0x20);
        DAT_0040e5f0[0x12] = uVar20;
        DAT_0040e5f0[0x13] = uVar21;
        DAT_0040e5f0[0x14] = (int)uVar4;
        DAT_0040e5f0[0x15] = (int)((ulong)uVar4 >> 0x20);
        DAT_0040e5f0[0x16] = uVar23;
        DAT_0040e5f0[0x17] = uVar24;
        DAT_0040e5f0[0x18] = (int)uVar5;
        DAT_0040e5f0[0x19] = (int)((ulong)uVar5 >> 0x20);
        DAT_0040e5f0[0x1a] = uVar25;
        DAT_0040e5f0[0x1b] = uVar26;
        DAT_0040e5f0[0x1c] = (int)uVar6;
        DAT_0040e5f0[0x1d] = (int)((ulong)uVar6 >> 0x20);
        DAT_0040e5f0[0x1e] = uVar28;
        DAT_0040e5f0[0x1f] = uVar29;
        iVar32 = iVar32 + 8;
        DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
        puVar30 = puVar31;
      } while (iVar32 < iVar33 + 1);
    }
    iVar33 = iVar34 - iVar32;
    if (iVar32 < iVar34) {
      do {
        uVar7 = *puVar31;
        uVar8 = puVar31[1];
        uVar9 = puVar31[2];
        uVar11 = puVar31[3];
        puVar31 = puVar31 + 4;
        *DAT_0040e5f0 = uVar7;
        DAT_0040e5f0[1] = uVar8;
        DAT_0040e5f0[2] = uVar9;
        DAT_0040e5f0[3] = uVar11;
        iVar33 = iVar33 + -1;
        DAT_0040e5f0 = DAT_0040e5f0 + 4;
      } while (iVar33 != 0);
    }
    *(undefined4 *)(PTR_DAT_003bd238 + 0xc80) = 0;
  }
  FUN_002b3d88(0,3);
  auVar39._8_8_ = extraout_v0_udw;
  auVar39._0_8_ = 0x6c0203ec01000404;
  auVar37._8_4_ = uVar15;
  auVar37._0_8_ = 0x10000002;
  auVar37._12_4_ = uVar16;
  auVar36 = _pcpyld(auVar39,auVar37);
  *DAT_0040e5f0 = auVar36._0_4_;
  DAT_0040e5f0[1] = auVar36._4_4_;
  DAT_0040e5f0[2] = auVar36._8_4_;
  DAT_0040e5f0[3] = auVar36._12_4_;
  DAT_0040e5f0[4] = 0;
  DAT_0040e5f0[5] = 0;
  DAT_0040e5f0[6] = fVar35;
  DAT_0040e5f0[7] = 0;
  auVar10._12_4_ = 0;
  auVar10._8_4_ = fVar35;
  auVar10._0_8_ = 0x302e400000000000;
  auVar38._8_4_ = uVar15;
  auVar38._0_8_ = 0x412;
  auVar38._12_4_ = uVar16;
  auVar36 = _pcpyld(auVar38,auVar10);
  DAT_0040e5f0[8] = auVar36._0_4_;
  DAT_0040e5f0[9] = auVar36._4_4_;
  DAT_0040e5f0[10] = auVar36._8_4_;
  DAT_0040e5f0[0xb] = auVar36._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


