// ==== FUN_00269940 @ 00269940 ====

undefined4 FUN_00269940(int *param_1,int param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_160 [256];
  
  uVar3 = (**(code **)(*(int *)(param_2 + 0x110) + 0x24))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x110) + 0x20));
  uVar4 = FUN_0027c860(param_3);
  lVar5 = FUN_0027c8b0(auStack_160,0x100,uVar3,uVar4,0x2f);
  if (lVar5 == 0) {
    uVar1 = 5;
  }
  else {
    uVar6 = param_4 & 1;
    if ((param_4 & 2) != 0) {
      uVar6 = param_4 & 1 | 2;
    }
    param_1[8] = 0;
    if ((param_4 & 4) != 0) {
      uVar6 = uVar6 | 0x600;
    }
    lVar5 = FUN_0036bd20(auStack_160,uVar6);
    param_1[0xc] = (int)lVar5;
    if (lVar5 < 0) {
      uVar1 = 2;
    }
    else {
      uVar3 = FUN_0036c128(lVar5,0,2);
      *(undefined8 *)(param_1 + 2) = uVar3;
      if ((param_4 & 8) == 0) {
        FUN_0036c128(param_1[0xc],0,0);
        param_1[4] = 0;
        param_1[5] = 0;
      }
      else {
        *(undefined8 *)(param_1 + 4) = uVar3;
      }
      if ((param_4 & 0x10) != 0) {
        FUN_0036bfb0(param_1[0xc]);
        iVar2 = FUN_0036bd20(auStack_160,uVar6 | 0x8000);
        param_1[0xc] = iVar2;
        param_1[8] = 1;
      }
      param_1[0xd] = 0x10000;
      *param_1 = param_2;
      uVar1 = 0;
      param_1[6] = 1;
      param_1[7] = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00269a90 @ 00269a90 ====

void FUN_00269a90(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_0036bfb0(*(undefined4 *)(param_1 + 0x30));
  return;
}


// ==== FUN_00269ab8 @ 00269ab8 ====

ulong FUN_00269ab8(int param_1,uint param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  param_2 = param_2 & 0xfffffff;
  if (*(long *)(param_1 + 8) < (long)(*(long *)(param_1 + 0x10) + (param_3 & 0xffffffff))) {
    param_3 = (ulong)((int)*(long *)(param_1 + 8) - (int)*(long *)(param_1 + 0x10));
  }
  uVar3 = 0;
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      uVar3 = 0;
      uVar5 = param_2;
      if (iVar1 < 0x10000) {
        uVar3 = param_3;
        if ((ulong)(long)(0x10000 - iVar1) <= param_3) {
          uVar3 = (long)(0x10000 - iVar1);
        }
        uVar5 = param_2 + (int)uVar3;
        FUN_0035c544(param_2,*(int *)(param_1 + 0x38) + iVar1,uVar3);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)uVar3;
      }
      uVar4 = (int)param_3 - (int)uVar3;
      if (param_3 != uVar3) {
        *(undefined4 *)(param_1 + 0x18) = 2;
        if (uVar4 < 0x10000) {
          FUN_0036c368(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0x10000);
          *(uint *)(param_1 + 0x34) = uVar4;
          FUN_0035c544(uVar5,*(undefined4 *)(param_1 + 0x38),uVar4);
        }
        else {
          uVar4 = FUN_0036c368(*(undefined4 *)(param_1 + 0x30),uVar5,uVar4);
        }
        uVar3 = (ulong)(int)((int)uVar3 + uVar4);
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      *(ulong *)(param_1 + 0x10) = uVar3 + *(long *)(param_1 + 0x10);
    }
    else {
      lVar2 = FUN_0036c368(*(undefined4 *)(param_1 + 0x30),param_2,param_3);
      if (lVar2 < 0) {
        uVar3 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 2;
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (param_3 & 0xffffffff);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


// ==== FUN_00269c40 @ 00269c40 ====

long FUN_00269c40(int param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  lVar1 = FUN_0036c5d8(*(undefined4 *)(param_1 + 0x30),param_2 & 0xfffffff);
  lVar2 = lVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    lVar2 = 0;
    if (-1 < lVar1) {
      lVar2 = param_3;
    }
  }
  if (lVar2 < 1) {
    lVar2 = 0;
  }
  else {
    *(long *)(param_1 + 0x10) = lVar2 + *(long *)(param_1 + 0x10);
  }
  return lVar2;
}


// ==== FUN_00269cc8 @ 00269cc8 ====

long FUN_00269cc8(int param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 == 1) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10) + param_2;
  }
  else if (param_3 < 2) {
    if (param_3 == 0) {
      lVar2 = *(long *)(param_1 + 8);
      lVar3 = param_2;
    }
    else {
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  else if (param_3 == 2) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = lVar2 - param_2;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
  }
  if ((lVar3 <= lVar2) && (lVar2 = lVar3, lVar3 < 0)) {
    lVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if ((long)iVar1 < 0x10000) {
    lVar3 = *(long *)(param_1 + 0x10) - (long)iVar1;
    if ((lVar3 <= lVar2) && (lVar2 <= (long)(*(long *)(param_1 + 0x10) + (ulong)(0x10000 - iVar1))))
    {
      *(long *)(param_1 + 0x10) = lVar2;
      *(int *)(param_1 + 0x34) = (int)lVar2 - (int)lVar3;
      return lVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0x10000;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(long *)(param_1 + 0x10) = lVar2;
  FUN_0036c128(*(undefined4 *)(param_1 + 0x30),(int)lVar2,0);
  *(undefined4 *)(param_1 + 0x18) = 1;
  return *(long *)(param_1 + 0x10);
}


// ==== FUN_00269df0 @ 00269df0 ====

int FUN_00269df0(int param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_50 [4];
  
  iVar2 = 1;
  if (*(int *)(param_1 + 0x18) == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    while( true ) {
      FUN_0036c898(uVar1,1,aiStack_50);
      iVar2 = 2;
      if (aiStack_50[0] == 0) {
        iVar2 = 1;
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      if ((param_2 == 0) || (iVar2 != 2)) break;
      uVar1 = *(undefined4 *)(param_1 + 0x30);
    }
  }
  return iVar2;
}


// ==== FUN_00269ea0 @ 00269ea0 ====

void FUN_00269ea0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,long param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_a1_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_a2_udw;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  undefined8 in_t3_udw;
  undefined8 in_t4_udw;
  undefined8 in_t5_udw;
  undefined8 in_t9_udw;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 in_vf0 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_44;
  
  uVar15 = (uint)param_5 & 0x7ff;
  uVar16 = (uint)((ulong)param_5 >> 0x20) & 0x7ff;
  param_1[0x5e] = (float)(int)(((uint)((ulong)param_5 >> 0x10) & 0x7ff) - (uVar15 - 1));
  param_1[0x5f] = (float)(int)(((ushort)((ulong)param_5 >> 0x30) & 0x7ff) - (uVar16 - 1));
  param_1[0x60] = (float)uVar15;
  param_1[0x61] = (float)uVar16;
  auVar6._4_4_ = *(undefined4 *)(param_6 + 0x28);
  auVar6._0_4_ = *(undefined4 *)(param_6 + 0x28);
  auVar6._8_8_ = in_v1_udw;
  auVar10._8_8_ = in_a0_udw;
  auVar10._0_8_ = *(undefined8 *)(param_6 + 0x20);
  auVar6 = _pcpyld(auVar6,auVar10);
  param_1[0x20] = auVar6._0_4_;
  param_1[0x21] = auVar6._4_4_;
  param_1[0x22] = auVar6._8_4_;
  param_1[0x23] = auVar6._12_4_;
  auVar24 = _qmtc2(2047.9374 - (float)param_1[0x5e] * 0.5);
  auVar26._4_4_ = *(undefined4 *)(param_6 + 0x38);
  auVar26._0_4_ = *(undefined4 *)(param_6 + 0x38);
  auVar26._8_8_ = in_v1_udw;
  auVar12._8_8_ = in_a0_udw;
  auVar12._0_8_ = *(undefined8 *)(param_6 + 0x30);
  auVar6 = _pcpyld(auVar26,auVar12);
  param_1[0x24] = auVar6._0_4_;
  param_1[0x25] = auVar6._4_4_;
  param_1[0x26] = auVar6._8_4_;
  param_1[0x27] = auVar6._12_4_;
  auVar6 = _qmtc2((float)param_1[0x5e] * 0.5 + 5.0);
  auVar26 = _vaddbc(in_vf0,auVar24);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar26 = _qmfc2(auVar26._0_4_);
  auVar7 = _qmfc2(auVar6._0_4_);
  auVar24._8_8_ = auVar26._8_8_;
  auVar24._4_4_ = *(undefined4 *)(param_6 + 0x48);
  auVar24._0_4_ = *(undefined4 *)(param_6 + 0x48);
  auVar14._8_8_ = auVar7._8_8_;
  auVar14._0_8_ = *(undefined8 *)(param_6 + 0x40);
  auVar6 = _pcpyld(auVar24,auVar14);
  param_1[0x28] = auVar6._0_4_;
  param_1[0x29] = auVar6._4_4_;
  param_1[0x2a] = auVar6._8_4_;
  param_1[0x2b] = auVar6._12_4_;
  auVar26 = _qmtc2(1.0 / auVar26._0_4_);
  auVar25 = _qmtc2(1.0 / auVar7._0_4_);
  auVar7._4_4_ = *(undefined4 *)(param_6 + 0x58);
  auVar7._0_4_ = *(undefined4 *)(param_6 + 0x58);
  auVar7._8_8_ = auVar24._8_8_;
  auVar8._4_4_ = *(undefined4 *)(param_6 + 0x54);
  auVar8._0_4_ = *(undefined4 *)(param_6 + 0x50);
  auVar8._8_8_ = auVar14._8_8_;
  auVar6 = _pcpyld(auVar7,auVar8);
  _vaddbc(in_vf0,auVar26);
  param_1[0x2c] = auVar6._0_4_;
  param_1[0x2d] = auVar6._4_4_;
  param_1[0x2e] = auVar6._8_4_;
  param_1[0x2f] = auVar6._12_4_;
  _vaddbc(in_vf0,auVar25);
  fVar23 = *(float *)(param_6 + 0x84);
  fVar22 = *(float *)(param_6 + 0x80);
  auVar6 = _qmtc2(fVar23);
  auVar24 = _qmtc2(fVar22);
  _vmulbc(in_vf0,auVar6);
  _vmulbc(in_vf0,auVar6);
  auVar6 = _qmtc2((float)param_1[0x5f] * 0.5 + 5.0);
  auVar26 = _qmtc2(2047.9374 - (float)param_1[0x5f] * 0.5);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar26 = _vaddbc(in_vf0,auVar26);
  auVar6 = _qmfc2(auVar6._0_4_);
  auVar26 = _qmfc2(auVar26._0_4_);
  fVar20 = 1.0 / (fVar23 - fVar22);
  auVar25._8_8_ = auVar26._8_8_;
  auVar6 = _qmtc2(1.0 / auVar6._0_4_);
  auVar26 = _qmtc2(1.0 / auVar26._0_4_);
  _vaddbc(in_vf0,auVar6);
  _vaddbc(in_vf0,auVar26);
  _vmulbc(in_vf0,auVar24);
  _vmulbc(in_vf0,auVar24);
  if (*(int *)(param_6 + 0x14) == 1) {
    DAT_0040e060 = bGpffff8870 & 0xf7;
    auVar6 = _qmtc2((fVar23 + fVar22) * fVar20);
    auVar24 = _vaddbc(in_vf0,auVar6);
    auVar26 = _vaddbc(in_vf0,auVar6);
    auVar6 = _qmtc2(fVar23 * -2.0 * fVar22 * fVar20);
  }
  else {
    DAT_0040e060 = bGpffff8870 | 8;
    auVar26 = _qmtc2(fVar20 + fVar20);
    auVar24 = _vaddbc(in_vf0,auVar26);
    auVar6 = _qmtc2((fVar23 + fVar22) * -fVar20);
    auVar26 = _vaddbc(in_vf0,auVar26);
  }
  auVar7 = _vaddbc(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar6);
  uVar21 = *(undefined4 *)(param_6 + 0x8c);
  uVar18 = *(undefined4 *)(param_6 + 0x84);
  fStack_90 = (float)param_1[0x60] + 2048.0;
  fStack_8c = (float)param_1[0x61] + 2048.0;
  if (param_7 != 0) {
    fStack_90 = fStack_90 + ((float)param_1[0x5e] - *(float *)param_7) * 0.5;
    fStack_8c = fStack_8c + ((float)param_1[0x5f] - ((float *)param_7)[1]) * 0.5;
  }
  auVar11._8_8_ = in_a1_udw;
  auVar11._0_8_ = 0x4c;
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = 0x4e;
  auVar25._0_8_ = 0x18;
  auVar9._8_8_ = auVar14._8_8_;
  auVar9._0_8_ = 0x40;
  uVar19 = *(undefined4 *)(param_6 + 0x90);
  auVar2._8_8_ = in_t3_udw;
  auVar2._0_8_ = param_2;
  auVar12 = _pcpyld(auVar11,auVar2);
  auVar4._8_8_ = in_t5_udw;
  auVar4._0_8_ = param_3;
  auVar14 = _pcpyld(auVar13,auVar4);
  auVar5._8_8_ = in_t9_udw;
  auVar5._0_8_ = param_4;
  auVar25 = _pcpyld(auVar25,auVar5);
  auVar3._8_8_ = in_t4_udw;
  auVar3._0_8_ = param_5;
  auVar10 = _pcpyld(auVar9,auVar3);
  uVar17 = *(undefined4 *)(param_6 + 0x88);
  auVar6 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
  param_1[0x30] = param_1[0x5e];
  param_1[0x31] = param_1[0x5f];
  param_1[0x32] = uVar21;
  param_1[0x33] = uVar18;
  param_1[0x48] = auVar12._0_4_;
  param_1[0x49] = auVar12._4_4_;
  param_1[0x4a] = auVar12._8_4_;
  param_1[0x4b] = auVar12._12_4_;
  param_1[0x4c] = auVar14._0_4_;
  param_1[0x4d] = auVar14._4_4_;
  param_1[0x4e] = auVar14._8_4_;
  param_1[0x4f] = auVar14._12_4_;
  param_1[0x50] = auVar25._0_4_;
  param_1[0x51] = auVar25._4_4_;
  param_1[0x52] = auVar25._8_4_;
  param_1[0x53] = auVar25._12_4_;
  param_1[0x54] = auVar10._0_4_;
  param_1[0x55] = auVar10._4_4_;
  param_1[0x56] = auVar10._8_4_;
  param_1[0x57] = auVar10._12_4_;
  auVar6 = _sqc2(auVar26);
  *(undefined1 (*) [16])(param_1 + 0x44) = auVar6;
  auVar6 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar6;
  auVar6 = _sqc2(auVar24);
  *(undefined1 (*) [16])(param_1 + 0x3c) = auVar6;
  param_1[0x34] = fStack_90;
  param_1[0x35] = fStack_8c;
  param_1[0x36] = uVar19;
  param_1[0x37] = uVar17;
  iVar1 = *(int *)(param_6 + 4);
  uVar21 = *(undefined4 *)(iVar1 + 0x14);
  uVar17 = *(undefined4 *)(iVar1 + 0x18);
  *param_1 = *(undefined4 *)(iVar1 + 0x10);
  param_1[1] = uVar21;
  param_1[2] = uVar17;
  param_1[3] = uVar18;
  uVar21 = *(undefined4 *)(iVar1 + 0x24);
  uVar17 = *(undefined4 *)(iVar1 + 0x28);
  param_1[4] = *(undefined4 *)(iVar1 + 0x20);
  param_1[5] = uVar21;
  param_1[6] = uVar17;
  param_1[7] = uVar18;
  uVar21 = *(undefined4 *)(iVar1 + 0x34);
  uVar17 = *(undefined4 *)(iVar1 + 0x38);
  param_1[8] = *(undefined4 *)(iVar1 + 0x30);
  param_1[9] = uVar21;
  param_1[10] = uVar17;
  param_1[0xb] = uVar18;
  uVar21 = *(undefined4 *)(iVar1 + 0x44);
  uVar17 = *(undefined4 *)(iVar1 + 0x48);
  param_1[0xc] = *(undefined4 *)(iVar1 + 0x40);
  param_1[0xd] = uVar21;
  param_1[0xe] = uVar17;
  param_1[0xf] = uVar18;
  uVar21 = *(undefined4 *)(param_6 + 0x24);
  uVar18 = *(undefined4 *)(param_6 + 0x28);
  param_1[0x10] = *(undefined4 *)(param_6 + 0x20);
  param_1[0x11] = uVar21;
  param_1[0x12] = uVar18;
  param_1[0x13] = uStack_44;
  uVar18 = *(undefined4 *)(param_6 + 0x34);
  uVar21 = *(undefined4 *)(param_6 + 0x38);
  param_1[0x14] = *(undefined4 *)(param_6 + 0x30);
  param_1[0x15] = uVar18;
  param_1[0x16] = uVar21;
  param_1[0x17] = uStack_44;
  uVar18 = *(undefined4 *)(param_6 + 0x44);
  uVar21 = *(undefined4 *)(param_6 + 0x48);
  param_1[0x18] = *(undefined4 *)(param_6 + 0x40);
  param_1[0x19] = uVar18;
  param_1[0x1a] = uVar21;
  param_1[0x1b] = uStack_44;
  uVar18 = *(undefined4 *)(param_6 + 0x54);
  uVar21 = *(undefined4 *)(param_6 + 0x58);
  param_1[0x1c] = *(undefined4 *)(param_6 + 0x50);
  param_1[0x1d] = uVar18;
  param_1[0x1e] = uVar21;
  param_1[0x1f] = uStack_44;
  param_1[0x58] = *(undefined4 *)(param_6 + 0x68);
  param_1[0x59] = *(undefined4 *)(param_6 + 0x6c);
  param_1[0x5a] = *(undefined4 *)(param_6 + 0x70);
  param_1[0x5b] = *(undefined4 *)(param_6 + 0x74);
  param_1[0x5c] = *(undefined4 *)(param_6 + 0x78);
  param_1[0x5d] = *(undefined4 *)(param_6 + 0x7c);
  return;
}


// ==== FUN_0026a450 @ 0026a450 ====

undefined4 FUN_0026a450(void)

{
  uGpffff8681 = 1;
  return 1;
}


// ==== FUN_0026a460 @ 0026a460 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026a460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6)

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
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  ulong in_v1_udw;
  undefined4 *puVar27;
  undefined8 in_a0_udw;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined8 in_a2_udw;
  
  FUN_00269ea0(&DAT_0043f710,param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x58),param_6
              );
  DAT_003bfb24 = 0.0;
  FUN_002b3d88(0,0x19);
  auVar22._8_8_ = in_v1_udw;
  auVar22._0_8_ = 0x10000000;
  auVar11._8_8_ = in_a2_udw;
  auVar11._0_8_ = 0x1100000011000000;
  auVar22 = _pcpyld(auVar11,auVar22);
  *DAT_0040e5f0 = auVar22._0_4_;
  DAT_0040e5f0[1] = auVar22._4_4_;
  DAT_0040e5f0[2] = auVar22._8_4_;
  DAT_0040e5f0[3] = auVar22._12_4_;
  puVar28 = DAT_0040e5f0 + 4;
  if (DAT_0040e064 != &DAT_003b7a70) {
    DAT_0040e064 = &DAT_003b7a70;
    auVar1._8_8_ = in_v1_udw;
    auVar1._0_8_ = 0x3b7a7050000000;
    auVar12._8_8_ = in_a2_udw;
    auVar12._0_8_ = 0x20000fc03000000;
    auVar22 = _pcpyld(auVar12,auVar1);
    *puVar28 = auVar22._0_4_;
    DAT_0040e5f0[5] = auVar22._4_4_;
    DAT_0040e5f0[6] = auVar22._8_4_;
    DAT_0040e5f0[7] = auVar22._12_4_;
    puVar28 = DAT_0040e5f0 + 8;
  }
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 0x1000000a;
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = 0x6c0a03f601000404;
  auVar22 = _pcpyld(auVar13,auVar2);
  *puVar28 = auVar22._0_4_;
  puVar28[1] = auVar22._4_4_;
  puVar28[2] = auVar22._8_4_;
  puVar28[3] = auVar22._12_4_;
  puVar27 = &DAT_0043f790;
  iVar26 = 9;
  puVar28 = puVar28 + 4;
  do {
    puVar29 = puVar28;
    uVar19 = puVar27[1];
    uVar20 = puVar27[2];
    uVar21 = puVar27[3];
    *puVar29 = *puVar27;
    puVar29[1] = uVar19;
    puVar29[2] = uVar20;
    puVar29[3] = uVar21;
    iVar26 = iVar26 + -1;
    puVar27 = puVar27 + 4;
    puVar28 = puVar29 + 4;
  } while (-1 < iVar26 >> 0x1f);
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x10000001;
  auVar14._8_8_ = in_a2_udw;
  auVar14._0_8_ = 0x6c0103f501000101;
  auVar22 = _pcpyld(auVar14,auVar3);
  puVar29[4] = auVar22._0_4_;
  puVar29[5] = auVar22._4_4_;
  puVar29[6] = auVar22._8_4_;
  puVar29[7] = auVar22._12_4_;
  auVar4[4] = uGpffff8684;
  auVar4._0_4_ = 10;
  auVar4._5_3_ = 0;
  auVar4._8_8_ = in_v1_udw;
  auVar15._8_8_ = in_a2_udw;
  auVar15._0_8_ = 0x300000000;
  auVar22 = _pcpyld(auVar15,auVar4);
  puVar29[8] = auVar22._0_4_;
  puVar29[9] = auVar22._4_4_;
  puVar29[10] = auVar22._8_4_;
  puVar29[0xb] = auVar22._12_4_;
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = 0x10000008;
  auVar16._8_8_ = in_a2_udw;
  auVar16._0_8_ = 0x5000000800000000;
  auVar22 = _pcpyld(auVar16,auVar5);
  puVar29[0xc] = auVar22._0_4_;
  puVar29[0xd] = auVar22._4_4_;
  puVar29[0xe] = auVar22._8_4_;
  puVar29[0xf] = auVar22._12_4_;
  auVar23._8_8_ = auVar22._8_8_;
  auVar23._0_8_ = 0xe;
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = 0x1000000000008007;
  auVar22 = _pcpyld(auVar23,auVar6);
  puVar29[0x10] = auVar22._0_4_;
  puVar29[0x11] = auVar22._4_4_;
  puVar29[0x12] = auVar22._8_4_;
  puVar29[0x13] = auVar22._12_4_;
  uVar21 = DAT_0043f83c;
  uVar20 = DAT_0043f838;
  uVar19 = DAT_0043f834;
  puVar29[0x14] = DAT_0043f830;
  puVar29[0x15] = uVar19;
  puVar29[0x16] = uVar20;
  puVar29[0x17] = uVar21;
  uVar21 = DAT_0043f84c;
  uVar20 = DAT_0043f848;
  uVar19 = DAT_0043f844;
  puVar29[0x18] = DAT_0043f840;
  puVar29[0x19] = uVar19;
  puVar29[0x1a] = uVar20;
  puVar29[0x1b] = uVar21;
  uVar21 = DAT_0043f85c;
  uVar20 = DAT_0043f858;
  uVar19 = DAT_0043f854;
  puVar29[0x1c] = DAT_0043f850;
  puVar29[0x1d] = uVar19;
  puVar29[0x1e] = uVar20;
  puVar29[0x1f] = uVar21;
  auVar22 = _DAT_0043f860;
  puVar29[0x20] = DAT_0043f860;
  puVar29[0x21] = auVar22._4_4_;
  puVar29[0x22] = auVar22._8_4_;
  puVar29[0x23] = auVar22._12_4_;
  auVar24._8_8_ = auVar22._8_8_;
  auVar24._0_8_ = 0x42;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x8000000044;
  auVar22 = _pcpyld(auVar24,auVar7);
  puVar29[0x24] = auVar22._0_4_;
  puVar29[0x25] = auVar22._4_4_;
  puVar29[0x26] = auVar22._8_4_;
  puVar29[0x27] = auVar22._12_4_;
  auVar8._8_8_ = in_v1_udw;
  auVar8._0_8_ = (long)(int)(DAT_003bfb24 * 128.0) << 4 | 0x5000b;
  auVar10._8_8_ = in_a0_udw;
  auVar10._0_8_ = 0x47;
  auVar22 = _pcpyld(auVar10,auVar8);
  puVar29[0x28] = auVar22._0_4_;
  puVar29[0x29] = auVar22._4_4_;
  puVar29[0x2a] = auVar22._8_4_;
  puVar29[0x2b] = auVar22._12_4_;
  auVar25._8_8_ = auVar22._8_8_;
  auVar25._0_8_ = 8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_v1_udw;
  auVar22 = _pcpyld(auVar25,auVar18 << 0x40);
  puVar29[0x2c] = auVar22._0_4_;
  puVar29[0x2d] = auVar22._4_4_;
  puVar29[0x2e] = auVar22._8_4_;
  puVar29[0x2f] = auVar22._12_4_;
  auVar9._8_8_ = in_v1_udw;
  auVar9._0_8_ = 0x10000000;
  auVar17._8_8_ = in_a2_udw;
  auVar17._0_8_ = 0x1400000000000000;
  auVar22 = _pcpyld(auVar17,auVar9);
  puVar29[0x30] = auVar22._0_4_;
  puVar29[0x31] = auVar22._4_4_;
  puVar29[0x32] = auVar22._8_4_;
  puVar29[0x33] = auVar22._12_4_;
  DAT_0040e5f0 = puVar29 + 0x34;
  uGpffff8682 = 1;
  uGpffff8683 = 1;
  return;
}


// ==== FUN_0026a6f0 @ 0026a6f0 ====

void FUN_0026a6f0(undefined8 param_1)

{
  int *piVar1;
  float fStack_20;
  float fStack_1c;
  
  piVar1 = *(int **)(*(int *)((int)param_1 + 0x58) + 0x60);
  fStack_1c = (float)*(int *)(*piVar1 + 0x10);
  fStack_20 = (float)*(int *)(*piVar1 + 0xc);
  FUN_0026a460(DAT_0040dfd0,DAT_0040dfc8,DAT_0040dfe0,
               (ulong)*(ushort *)(piVar1 + 7) & 0x7ff |
               (long)(piVar1[3] + (int)(short)*(ushort *)(piVar1 + 7) + -1) << 0x10 |
               ((ulong)*(ushort *)((int)piVar1 + 0x1e) & 0x7ff) << 0x20 |
               (long)(piVar1[4] + (int)(short)*(ushort *)((int)piVar1 + 0x1e) + -1) << 0x30,param_1,
               &fStack_20);
  return;
}


// ==== FUN_0026a7a0 @ 0026a7a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026a7a0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_v1_udw;
  
  FUN_002b3d88(0,4);
  auVar3._8_8_ = extraout_v0_udw;
  auVar3._0_8_ = 0x5000000311000000;
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0x10000003;
  auVar4 = _pcpyld(auVar3,auVar4);
  *DAT_0040e5f0 = auVar4._0_4_;
  DAT_0040e5f0[1] = auVar4._4_4_;
  DAT_0040e5f0[2] = auVar4._8_4_;
  DAT_0040e5f0[3] = auVar4._12_4_;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = 0xe;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x1000000000008002;
  auVar4 = _pcpyld(auVar5,auVar1);
  DAT_0040e5f0[4] = auVar4._0_4_;
  DAT_0040e5f0[5] = auVar4._4_4_;
  DAT_0040e5f0[6] = auVar4._8_4_;
  DAT_0040e5f0[7] = auVar4._12_4_;
  auVar4 = _DAT_0043f840;
  DAT_0040e5f0[8] = DAT_0043f840;
  DAT_0040e5f0[9] = auVar4._4_4_;
  DAT_0040e5f0[10] = auVar4._8_4_;
  DAT_0040e5f0[0xb] = auVar4._12_4_;
  auVar6._8_8_ = auVar4._8_8_;
  auVar6._0_8_ = 0x42;
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 0x8000000044;
  auVar4 = _pcpyld(auVar6,auVar2);
  DAT_0040e5f0[0xc] = auVar4._0_4_;
  DAT_0040e5f0[0xd] = auVar4._4_4_;
  DAT_0040e5f0[0xe] = auVar4._8_4_;
  DAT_0040e5f0[0xf] = auVar4._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
  uGpffff8682 = 0;
  return;
}


// ==== FUN_0026a840 @ 0026a840 ====

void FUN_0026a840(long param_1)

{
  undefined8 in_v1_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_a1_udw;
  
  if (param_1 != 0) {
    FUN_002b3d88(0,1);
    auVar1._8_8_ = in_v1_udw;
    auVar1._0_8_ = 0x1100000011000000;
    auVar2._8_8_ = in_a1_udw;
    auVar2._0_8_ = 0x10000000;
    auVar2 = _pcpyld(auVar1,auVar2);
    *DAT_0040e5f0 = auVar2._0_4_;
    DAT_0040e5f0[1] = auVar2._4_4_;
    DAT_0040e5f0[2] = auVar2._8_4_;
    DAT_0040e5f0[3] = auVar2._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 4;
    FUN_002707a8(0,0x440280,(int)param_1,1,0,0);
  }
  uGpffff8683 = param_1 != 0;
  return;
}


// ==== FUN_0026a8d0 @ 0026a8d0 ====

void FUN_0026a8d0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_a0_udw;
  undefined8 in_a2_udw;
  long lVar7;
  
  lVar7 = 1;
  if (param_1 != 0) {
    lVar7 = 2;
  }
  FUN_002b3d88(0,3);
  auVar4._8_8_ = extraout_v0_udw;
  auVar4._0_8_ = 0x5000000211000000;
  auVar1._8_8_ = in_a2_udw;
  auVar1._0_8_ = 0x10000002;
  auVar5 = _pcpyld(auVar4,auVar1);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  auVar6._8_8_ = auVar5._8_8_;
  auVar6._0_8_ = 0xe;
  auVar2._8_8_ = in_a2_udw;
  auVar2._0_8_ = 0x1000000000008001;
  auVar5 = _pcpyld(auVar6,auVar2);
  DAT_0040e5f0[4] = auVar5._0_4_;
  DAT_0040e5f0[5] = auVar5._4_4_;
  DAT_0040e5f0[6] = auVar5._8_4_;
  DAT_0040e5f0[7] = auVar5._12_4_;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x47;
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = (long)(int)(DAT_003bfb24 * 128.0) << 4 | lVar7 << 0x11 | 0x1000bU;
  auVar5 = _pcpyld(auVar5,auVar3);
  DAT_0040e5f0[8] = auVar5._0_4_;
  DAT_0040e5f0[9] = auVar5._4_4_;
  DAT_0040e5f0[10] = auVar5._8_4_;
  DAT_0040e5f0[0xb] = auVar5._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_0026a998 @ 0026a998 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026a998(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 in_a0_udw;
  
  FUN_002b3d88(0,3);
  auVar3._8_8_ = extraout_v0_udw;
  auVar3._0_8_ = 0x5000000211000000;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = 0x10000002;
  auVar4 = _pcpyld(auVar3,auVar4);
  *DAT_0040e5f0 = auVar4._0_4_;
  DAT_0040e5f0[1] = auVar4._4_4_;
  DAT_0040e5f0[2] = auVar4._8_4_;
  DAT_0040e5f0[3] = auVar4._12_4_;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = 0xe;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x1000000000008001;
  auVar4 = _pcpyld(auVar5,auVar1);
  DAT_0040e5f0[4] = auVar4._0_4_;
  DAT_0040e5f0[5] = auVar4._4_4_;
  DAT_0040e5f0[6] = auVar4._8_4_;
  DAT_0040e5f0[7] = auVar4._12_4_;
  auVar6._8_8_ = auVar4._8_8_;
  if (param_1 == 0) {
    uVar7 = _DAT_0043f840 | 0x100000000;
  }
  else {
    uVar7 = _DAT_0043f840 & 0xfffffffeffffffff;
  }
  auVar6._0_8_ = 0x4e;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = uVar7;
  auVar4 = _pcpyld(auVar6,auVar2);
  DAT_0040e5f0[8] = auVar4._0_4_;
  DAT_0040e5f0[9] = auVar4._4_4_;
  DAT_0040e5f0[10] = auVar4._8_4_;
  DAT_0040e5f0[0xb] = auVar4._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_0026aa60 @ 0026aa60 ====

void FUN_0026aa60(undefined1 param_1)

{
  uGpffff8684 = param_1;
  return;
}


// ==== FUN_0026aa68 @ 0026aa68 ====

void FUN_0026aa68(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 in_a0_udw;
  
  DAT_003bfb20 = (undefined4)param_1;
  FUN_002b3d88(0,3);
  auVar3._8_8_ = extraout_v0_udw;
  auVar3._0_8_ = 0x5000000211000000;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = 0x10000002;
  auVar4 = _pcpyld(auVar3,auVar4);
  *DAT_0040e5f0 = auVar4._0_4_;
  DAT_0040e5f0[1] = auVar4._4_4_;
  DAT_0040e5f0[2] = auVar4._8_4_;
  DAT_0040e5f0[3] = auVar4._12_4_;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = 0xe;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x1000000000008001;
  auVar6 = _pcpyld(auVar5,auVar1);
  DAT_0040e5f0[4] = auVar6._0_4_;
  DAT_0040e5f0[5] = auVar6._4_4_;
  DAT_0040e5f0[6] = auVar6._8_4_;
  DAT_0040e5f0[7] = auVar6._12_4_;
  uVar8 = 0x8000000044;
  if (param_1 != 0) {
    auVar6._0_8_ = 0x8000000048;
    if (param_1 == 1) {
      uVar8 = 0x8000000048;
    }
  }
  auVar7._8_8_ = auVar6._8_8_;
  auVar7._0_8_ = 0x42;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = uVar8;
  auVar4 = _pcpyld(auVar7,auVar2);
  DAT_0040e5f0[8] = auVar4._0_4_;
  DAT_0040e5f0[9] = auVar4._4_4_;
  DAT_0040e5f0[10] = auVar4._8_4_;
  DAT_0040e5f0[0xb] = auVar4._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_0026ab20 @ 0026ab20 ====

void FUN_0026ab20(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_v1_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_a1_udw;
  
  FUN_002b3d88(0,3);
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x5000000211000000;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0x10000002;
  auVar4 = _pcpyld(auVar3,auVar4);
  *DAT_0040e5f0 = auVar4._0_4_;
  DAT_0040e5f0[1] = auVar4._4_4_;
  DAT_0040e5f0[2] = auVar4._8_4_;
  DAT_0040e5f0[3] = auVar4._12_4_;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = 0xe;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 0x1000000000008001;
  auVar4 = _pcpyld(auVar5,auVar1);
  DAT_0040e5f0[4] = auVar4._0_4_;
  DAT_0040e5f0[5] = auVar4._4_4_;
  DAT_0040e5f0[6] = auVar4._8_4_;
  DAT_0040e5f0[7] = auVar4._12_4_;
  auVar6._8_8_ = auVar4._8_8_;
  auVar6._0_8_ = param_1 + 8;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 5;
  auVar4 = _pcpyld(auVar6,auVar2);
  DAT_0040e5f0[8] = auVar4._0_4_;
  DAT_0040e5f0[9] = auVar4._4_4_;
  DAT_0040e5f0[10] = auVar4._8_4_;
  DAT_0040e5f0[0xb] = auVar4._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_0026abb0 @ 0026abb0 ====

void FUN_0026abb0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_v1_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong in_a1_udw;
  
  FUN_002b3d88(0,3);
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x5000000211000000;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0x10000002;
  auVar4 = _pcpyld(auVar3,auVar4);
  *DAT_0040e5f0 = auVar4._0_4_;
  DAT_0040e5f0[1] = auVar4._4_4_;
  DAT_0040e5f0[2] = auVar4._8_4_;
  DAT_0040e5f0[3] = auVar4._12_4_;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = 0xe;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 0x1000000000008001;
  auVar4 = _pcpyld(auVar5,auVar1);
  DAT_0040e5f0[4] = auVar4._0_4_;
  DAT_0040e5f0[5] = auVar4._4_4_;
  DAT_0040e5f0[6] = auVar4._8_4_;
  DAT_0040e5f0[7] = auVar4._12_4_;
  auVar6._8_8_ = auVar4._8_8_;
  auVar6._0_8_ = param_1 + 8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_a1_udw;
  auVar4 = _pcpyld(auVar6,auVar2 << 0x40);
  DAT_0040e5f0[8] = auVar4._0_4_;
  DAT_0040e5f0[9] = auVar4._4_4_;
  DAT_0040e5f0[10] = auVar4._8_4_;
  DAT_0040e5f0[0xb] = auVar4._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_0026ac48 @ 0026ac48 ====

void FUN_0026ac48(undefined1 (*param_1) [16],ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 in_v1_udw;
  undefined1 auVar9 [16];
  ulong uVar10;
  ulong in_a1_udw;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined8 in_a3_udw;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_50 [16];
  
  iVar6 = (int)param_2 * 3;
  FUN_002b3d88(0,iVar6 + 6);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = in_a1_udw;
  auVar18._8_8_ = in_a3_udw;
  auVar18._0_8_ = (long)(iVar6 + 1) | 0x10000000;
  auVar8 = _pcpyld(auVar14 << 0x40,auVar18);
  *(int *)DAT_0040e5f0 = auVar8._0_4_;
  *(int *)((int)DAT_0040e5f0 + 4) = auVar8._4_4_;
  *(int *)((int)DAT_0040e5f0 + 8) = auVar8._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0xc) = auVar8._12_4_;
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = (ulong)(uint)((int)param_2 * 0x30000) << 0x20 | 0x6c00800001000303;
  auVar13._8_8_ = in_a3_udw;
  auVar13._0_8_ = 0x500000000000000;
  auVar8 = _pcpyld(auVar8,auVar13);
  *(int *)((int)DAT_0040e5f0 + 0x10) = auVar8._0_4_;
  *(int *)((int)DAT_0040e5f0 + 0x14) = auVar8._4_4_;
  *(int *)((int)DAT_0040e5f0 + 0x18) = auVar8._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0x1c) = auVar8._12_4_;
  auVar8 = _qmtc2(0x3f808000);
  _lqc2(auStack_50);
  auVar8 = _vmr32(auVar8);
  auVar18 = _vmove(auVar8);
  if (cGpffff8683 == '\0') {
    auVar18 = _pextlb(0,0xffffffff80ffffff);
    auVar18 = _pextlh(0,auVar18._0_8_);
    uVar10 = param_2;
    pauVar11 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
    do {
      _lqc2(*param_1);
      _lqc2(param_1[2]);
      auVar16 = _lqc2(param_1[4]);
      auVar14 = _vmove(auVar8);
      auVar15 = _vmove(auVar8);
      auVar13 = _pextlb(0,(long)*(int *)(param_1[1] + 8));
      auVar13 = _pextlh(0,auVar13._0_8_);
      auVar13 = _paddw(auVar13,auVar13);
      auVar13 = _pminw(auVar13,auVar18);
      *(int *)pauVar11[2] = auVar13._0_4_;
      *(int *)(pauVar11[2] + 4) = auVar13._4_4_;
      *(int *)(pauVar11[2] + 8) = auVar13._8_4_;
      *(int *)(pauVar11[2] + 0xc) = auVar13._12_4_;
      auVar13 = _pextlb(0,(long)*(int *)(param_1[3] + 8));
      auVar13 = _pextlh(0,auVar13._0_8_);
      auVar13 = _paddw(auVar13,auVar13);
      auVar13 = _pminw(auVar13,auVar18);
      *(int *)pauVar11[5] = auVar13._0_4_;
      *(int *)(pauVar11[5] + 4) = auVar13._4_4_;
      *(int *)(pauVar11[5] + 8) = auVar13._8_4_;
      *(int *)(pauVar11[5] + 0xc) = auVar13._12_4_;
      auVar13 = _pextlb(0,(long)*(int *)(param_1[5] + 8));
      auVar13 = _pextlh(0,auVar13._0_8_);
      auVar13 = _paddw(auVar13,auVar13);
      auVar9 = _pminw(auVar13,auVar18);
      *(int *)pauVar11[8] = auVar9._0_4_;
      *(int *)(pauVar11[8] + 4) = auVar9._4_4_;
      *(int *)(pauVar11[8] + 8) = auVar9._8_4_;
      *(int *)(pauVar11[8] + 0xc) = auVar9._12_4_;
      pauVar12 = pauVar11 + 9;
      param_1 = param_1 + 6;
      uVar10 = (ulong)((int)uVar10 + -3);
      auVar13 = _sqc2(auVar14);
      *pauVar11 = auVar13;
      auVar13 = _sqc2(auVar15);
      pauVar11[3] = auVar13;
      auVar13 = _sqc2(auVar16);
      pauVar11[6] = auVar13;
      pauVar11 = pauVar12;
    } while (0 < (long)uVar10);
  }
  else {
    auVar9._8_8_ = in_v1_udw;
    auVar9._0_8_ = param_2;
    pauVar11 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
    do {
      _lqc2(*param_1);
      _lqc2(param_1[2]);
      auVar14 = _lqc2(param_1[4]);
      auVar15 = _lqc2(param_1[1]);
      auVar16 = _lqc2(param_1[3]);
      auVar17 = _lqc2(param_1[5]);
      auVar8 = _pextlb(0,(long)*(int *)(param_1[1] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      *(int *)pauVar11[2] = auVar8._0_4_;
      *(int *)(pauVar11[2] + 4) = auVar8._4_4_;
      *(int *)(pauVar11[2] + 8) = auVar8._8_4_;
      *(int *)(pauVar11[2] + 0xc) = auVar8._12_4_;
      auVar8 = _pextlb(0,(long)*(int *)(param_1[3] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      *(int *)pauVar11[5] = auVar8._0_4_;
      *(int *)(pauVar11[5] + 4) = auVar8._4_4_;
      *(int *)(pauVar11[5] + 8) = auVar8._8_4_;
      *(int *)(pauVar11[5] + 0xc) = auVar8._12_4_;
      auVar8 = _pextlb(0,(long)*(int *)(param_1[5] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      *(int *)pauVar11[8] = auVar8._0_4_;
      *(int *)(pauVar11[8] + 4) = auVar8._4_4_;
      *(int *)(pauVar11[8] + 8) = auVar8._8_4_;
      *(int *)(pauVar11[8] + 0xc) = auVar8._12_4_;
      auVar8 = _vmove(auVar18);
      auVar13 = _vmove(auVar18);
      auVar15 = _vftoi12(auVar15);
      auVar16 = _vftoi12(auVar16);
      auVar17 = _vftoi12(auVar17);
      pauVar12 = pauVar11 + 9;
      param_1 = param_1 + 6;
      auVar9._0_8_ = (long)(auVar9._0_4_ + -3);
      auVar8 = _sqc2(auVar8);
      *pauVar11 = auVar8;
      auVar8 = _sqc2(auVar15);
      pauVar11[1] = auVar8;
      auVar8 = _sqc2(auVar13);
      pauVar11[3] = auVar8;
      auVar8 = _sqc2(auVar16);
      pauVar11[4] = auVar8;
      auVar8 = _sqc2(auVar14);
      pauVar11[6] = auVar8;
      auVar8 = _sqc2(auVar17);
      pauVar11[7] = auVar8;
      pauVar11 = pauVar12;
    } while (0 < auVar9._0_8_);
  }
  auVar15._8_8_ = in_a1_udw;
  auVar15._0_8_ = 0x6c0203f401000404;
  auVar16._8_8_ = in_a3_udw;
  auVar16._0_8_ = 0x10000002;
  auVar8 = _pcpyld(auVar15,auVar16);
  *(int *)*pauVar12 = auVar8._0_4_;
  *(int *)(*pauVar12 + 4) = auVar8._4_4_;
  *(int *)(*pauVar12 + 8) = auVar8._8_4_;
  *(int *)(*pauVar12 + 0xc) = auVar8._12_4_;
  auVar17._8_8_ = auVar9._8_8_;
  lVar7 = 0x4c;
  if (cGpffff8683 != '\0') {
    lVar7 = 0x5c;
  }
  auVar17._0_8_ = 0x412;
  auVar2._8_8_ = in_a3_udw;
  auVar2._0_8_ = (lVar7 << 0xf | 0x30004000U) << 0x20;
  auVar8 = _pcpyld(auVar17,auVar2);
  *(int *)pauVar12[1] = auVar8._0_4_;
  *(int *)(pauVar12[1] + 4) = auVar8._4_4_;
  *(int *)(pauVar12[1] + 8) = auVar8._8_4_;
  *(int *)(pauVar12[1] + 0xc) = auVar8._12_4_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_a1_udw;
  auVar3._8_8_ = in_a3_udw;
  auVar3._0_8_ = (ulong)bGpffff8684 << 0x20;
  auVar8 = _pcpyld(auVar5 << 0x40,auVar3);
  *(int *)pauVar12[2] = auVar8._0_4_;
  *(int *)(pauVar12[2] + 4) = auVar8._4_4_;
  *(int *)(pauVar12[2] + 8) = auVar8._8_4_;
  *(int *)(pauVar12[2] + 0xc) = auVar8._12_4_;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = param_2 & 0xffffffff | 0x1700000004000000;
  auVar4._8_8_ = in_a3_udw;
  auVar4._0_8_ = 0x10000000;
  auVar8 = _pcpyld(auVar1,auVar4);
  *(int *)pauVar12[3] = auVar8._0_4_;
  *(int *)(pauVar12[3] + 4) = auVar8._4_4_;
  *(int *)(pauVar12[3] + 8) = auVar8._8_4_;
  *(int *)(pauVar12[3] + 0xc) = auVar8._12_4_;
  DAT_0040e5f0 = pauVar12 + 4;
  return;
}


// ==== FUN_0026aef8 @ 0026aef8 ====

void FUN_0026aef8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 in_v1_udw;
  ulong uVar3;
  undefined8 in_a1_udw;
  ulong in_a2_udw;
  undefined1 (*pauVar4) [16];
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_60 [16];
  
  iVar1 = (int)param_3 * 3;
  FUN_002b3d88(0,iVar1 + 6);
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = (long)(iVar1 + 1) | 0x10000000;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = in_a2_udw;
  auVar2 = _pcpyld(auVar15 << 0x40,auVar2);
  *(int *)DAT_0040e5f0 = auVar2._0_4_;
  *(int *)((int)DAT_0040e5f0 + 4) = auVar2._4_4_;
  *(int *)((int)DAT_0040e5f0 + 8) = auVar2._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0xc) = auVar2._12_4_;
  auVar17._8_8_ = in_a1_udw;
  auVar17._0_8_ = 0x500000000000000;
  auVar14._8_8_ = in_a2_udw;
  auVar14._0_8_ = ((long)((int)param_3 * 0x30000) | 0x6c008000U) << 0x20 | 0x1000303;
  auVar2 = _pcpyld(auVar14,auVar17);
  *(int *)((int)DAT_0040e5f0 + 0x10) = auVar2._0_4_;
  *(int *)((int)DAT_0040e5f0 + 0x14) = auVar2._4_4_;
  *(int *)((int)DAT_0040e5f0 + 0x18) = auVar2._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0x1c) = auVar2._12_4_;
  auVar2 = _qmtc2(0x3f808000);
  _lqc2(auStack_60);
  auVar17 = _vmr32(auVar2);
  auVar2 = _vmove(auVar17);
  if (cGpffff8683 == '\0') {
    auVar14 = _lqc2(*param_1);
    auVar15 = _lqc2(param_1[1]);
    auVar16 = _lqc2(param_1[2]);
    auVar6 = _lqc2(param_1[3]);
    auVar2 = _pextlb(0,0xffffffff80ffffff);
    auVar2 = _pextlh(0,auVar2._0_8_);
    uVar3 = param_3;
    pauVar4 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
    do {
      auVar8 = _lqc2(*param_2);
      auVar9 = _lqc2(param_2[2]);
      auVar7 = _lqc2(param_2[4]);
      _vmulabc(auVar14,auVar8);
      _vmaddabc(auVar15,auVar8);
      _vmaddabc(auVar16,auVar8);
      _vmaddbc(auVar6,in_vf0);
      _vmulabc(auVar14,auVar9);
      _vmaddabc(auVar15,auVar9);
      _vmaddabc(auVar16,auVar9);
      _vmaddbc(auVar6,in_vf0);
      _vmulabc(auVar14,auVar7);
      _vmaddabc(auVar15,auVar7);
      _vmaddabc(auVar16,auVar7);
      auVar10 = _vmaddbc(auVar6,in_vf0);
      auVar7 = _vmove(auVar17);
      auVar11 = _vmove(auVar17);
      auVar8 = _pextlb(0,(long)*(int *)(param_2[1] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      auVar8 = _paddw(auVar8,auVar8);
      auVar8 = _pminw(auVar8,auVar2);
      *(int *)pauVar4[2] = auVar8._0_4_;
      *(int *)(pauVar4[2] + 4) = auVar8._4_4_;
      *(int *)(pauVar4[2] + 8) = auVar8._8_4_;
      *(int *)(pauVar4[2] + 0xc) = auVar8._12_4_;
      auVar8 = _pextlb(0,(long)*(int *)(param_2[3] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      auVar8 = _paddw(auVar8,auVar8);
      auVar8 = _pminw(auVar8,auVar2);
      *(int *)pauVar4[5] = auVar8._0_4_;
      *(int *)(pauVar4[5] + 4) = auVar8._4_4_;
      *(int *)(pauVar4[5] + 8) = auVar8._8_4_;
      *(int *)(pauVar4[5] + 0xc) = auVar8._12_4_;
      auVar8 = _pextlb(0,(long)*(int *)(param_2[5] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      auVar8 = _paddw(auVar8,auVar8);
      auVar9 = _pminw(auVar8,auVar2);
      *(int *)pauVar4[8] = auVar9._0_4_;
      *(int *)(pauVar4[8] + 4) = auVar9._4_4_;
      *(int *)(pauVar4[8] + 8) = auVar9._8_4_;
      *(int *)(pauVar4[8] + 0xc) = auVar9._12_4_;
      pauVar5 = pauVar4 + 9;
      param_2 = param_2 + 6;
      uVar3 = (ulong)((int)uVar3 + -3);
      auVar8 = _sqc2(auVar7);
      *pauVar4 = auVar8;
      auVar8 = _sqc2(auVar11);
      pauVar4[3] = auVar8;
      auVar8 = _sqc2(auVar10);
      pauVar4[6] = auVar8;
      pauVar4 = pauVar5;
    } while (0 < (long)uVar3);
  }
  else {
    auVar9._8_8_ = in_v1_udw;
    auVar9._0_8_ = param_3;
    auVar17 = _lqc2(*param_1);
    auVar14 = _lqc2(param_1[1]);
    auVar15 = _lqc2(param_1[2]);
    auVar16 = _lqc2(param_1[3]);
    pauVar4 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
    do {
      auVar6 = _lqc2(*param_2);
      auVar7 = _lqc2(param_2[1]);
      auVar8 = _lqc2(param_2[2]);
      auVar10 = _lqc2(param_2[3]);
      auVar11 = _lqc2(param_2[4]);
      auVar13 = _lqc2(param_2[5]);
      _vmulabc(auVar17,auVar6);
      _vmaddabc(auVar14,auVar6);
      _vmaddabc(auVar15,auVar6);
      _vmaddbc(auVar16,in_vf0);
      _vmulabc(auVar17,auVar8);
      _vmaddabc(auVar14,auVar8);
      _vmaddabc(auVar15,auVar8);
      _vmaddbc(auVar16,in_vf0);
      _vmulabc(auVar17,auVar11);
      _vmaddabc(auVar14,auVar11);
      _vmaddabc(auVar15,auVar11);
      auVar12 = _vmaddbc(auVar16,in_vf0);
      auVar8 = _vmove(auVar2);
      auVar11 = _vmove(auVar2);
      auVar6 = _pextlb(0,(long)*(int *)(param_2[1] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      *(int *)pauVar4[2] = auVar6._0_4_;
      *(int *)(pauVar4[2] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[2] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[2] + 0xc) = auVar6._12_4_;
      auVar6 = _pextlb(0,(long)*(int *)(param_2[3] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      *(int *)pauVar4[5] = auVar6._0_4_;
      *(int *)(pauVar4[5] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[5] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[5] + 0xc) = auVar6._12_4_;
      auVar6 = _pextlb(0,(long)*(int *)(param_2[3] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      *(int *)pauVar4[8] = auVar6._0_4_;
      *(int *)(pauVar4[8] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[8] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[8] + 0xc) = auVar6._12_4_;
      auVar7 = _vftoi12(auVar7);
      auVar10 = _vftoi12(auVar10);
      auVar13 = _vftoi12(auVar13);
      pauVar5 = pauVar4 + 9;
      param_2 = param_2 + 6;
      auVar9._0_8_ = (long)(auVar9._0_4_ + -3);
      auVar6 = _sqc2(auVar8);
      *pauVar4 = auVar6;
      auVar6 = _sqc2(auVar7);
      pauVar4[1] = auVar6;
      auVar6 = _sqc2(auVar11);
      pauVar4[3] = auVar6;
      auVar6 = _sqc2(auVar10);
      pauVar4[4] = auVar6;
      auVar6 = _sqc2(auVar12);
      pauVar4[6] = auVar6;
      auVar6 = _sqc2(auVar13);
      pauVar4[7] = auVar6;
      pauVar4 = pauVar5;
    } while (0 < auVar9._0_8_);
  }
  auVar16._8_8_ = in_a1_udw;
  auVar16._0_8_ = 0x10000002;
  auVar6._8_8_ = in_a2_udw;
  auVar6._0_8_ = 0x6c0203f401000404;
  auVar2 = _pcpyld(auVar6,auVar16);
  *(int *)*pauVar5 = auVar2._0_4_;
  *(int *)(*pauVar5 + 4) = auVar2._4_4_;
  *(int *)(*pauVar5 + 8) = auVar2._8_4_;
  *(int *)(*pauVar5 + 0xc) = auVar2._12_4_;
  auVar8._8_8_ = auVar9._8_8_;
  iVar1 = 0x4c;
  if (cGpffff8683 != '\0') {
    iVar1 = 0x5c;
  }
  auVar8._0_8_ = 0x412;
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = (ulong)(uint)(iVar1 << 0xf) << 0x20 | 0x3000400000000000;
  auVar2 = _pcpyld(auVar8,auVar7);
  *(int *)pauVar5[1] = auVar2._0_4_;
  *(int *)(pauVar5[1] + 4) = auVar2._4_4_;
  *(int *)(pauVar5[1] + 8) = auVar2._8_4_;
  *(int *)(pauVar5[1] + 0xc) = auVar2._12_4_;
  auVar11._8_8_ = in_a1_udw;
  auVar11._0_8_ = (ulong)bGpffff8684 << 0x20;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = in_a2_udw;
  auVar2 = _pcpyld(auVar13 << 0x40,auVar11);
  *(int *)pauVar5[2] = auVar2._0_4_;
  *(int *)(pauVar5[2] + 4) = auVar2._4_4_;
  *(int *)(pauVar5[2] + 8) = auVar2._8_4_;
  *(int *)(pauVar5[2] + 0xc) = auVar2._12_4_;
  auVar10._8_8_ = in_a1_udw;
  auVar10._0_8_ = 0x10000000;
  auVar12._8_8_ = in_a2_udw;
  auVar12._0_8_ = param_3 & 0xffffffff | 0x1700000004000000;
  auVar2 = _pcpyld(auVar12,auVar10);
  *(int *)pauVar5[3] = auVar2._0_4_;
  *(int *)(pauVar5[3] + 4) = auVar2._4_4_;
  *(int *)(pauVar5[3] + 8) = auVar2._8_4_;
  *(int *)(pauVar5[3] + 0xc) = auVar2._12_4_;
  DAT_0040e5f0 = pauVar5 + 4;
  return;
}


// ==== FUN_0026b230 @ 0026b230 ====

void FUN_0026b230(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  undefined8 in_a0_udw;
  ulong in_a1_udw;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined8 in_a3_udw;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar10 = (ulong)param_2;
  FUN_002b3d88(0,param_2 * 3 + 6);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = in_a1_udw;
  auVar14._8_8_ = in_a3_udw;
  auVar14._0_8_ = (long)(int)(param_2 * 3 + 1) | 0x10000000;
  auVar9 = _pcpyld(auVar16 << 0x40,auVar14);
  *(int *)DAT_0040e5f0 = auVar9._0_4_;
  *(int *)((int)DAT_0040e5f0 + 4) = auVar9._4_4_;
  *(int *)((int)DAT_0040e5f0 + 8) = auVar9._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0xc) = auVar9._12_4_;
  auVar9._8_8_ = in_a1_udw;
  auVar9._0_8_ = (ulong)(param_2 * 0x30000) << 0x20 | 0x6c00800001000303;
  auVar15._8_8_ = in_a3_udw;
  auVar15._0_8_ = 0x500000000000000;
  auVar9 = _pcpyld(auVar9,auVar15);
  *(int *)((int)DAT_0040e5f0 + 0x10) = auVar9._0_4_;
  *(int *)((int)DAT_0040e5f0 + 0x14) = auVar9._4_4_;
  *(int *)((int)DAT_0040e5f0 + 0x18) = auVar9._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0x1c) = auVar9._12_4_;
  pauVar12 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
  if (cGpffff8683 == '\0') {
    auVar9 = _pextlb(0,0xffffffff80ffffff);
    auVar9 = _pextlh(0,auVar9._0_8_);
    uVar11 = param_2;
    do {
      auVar15 = _lqc2(*param_1);
      auVar16 = _lqc2(param_1[2]);
      auVar14 = _pextlb(0,(long)*(int *)(param_1[1] + 8));
      auVar14 = _pextlh(0,auVar14._0_8_);
      auVar14 = _paddw(auVar14,auVar14);
      auVar14 = _pminw(auVar14,auVar9);
      *(int *)pauVar12[2] = auVar14._0_4_;
      *(int *)(pauVar12[2] + 4) = auVar14._4_4_;
      *(int *)(pauVar12[2] + 8) = auVar14._8_4_;
      *(int *)(pauVar12[2] + 0xc) = auVar14._12_4_;
      auVar14 = _pextlb(0,(long)*(int *)(param_1[3] + 8));
      auVar14 = _pextlh(0,auVar14._0_8_);
      auVar14 = _paddw(auVar14,auVar14);
      auVar14 = _pminw(auVar14,auVar9);
      *(int *)pauVar12[5] = auVar14._0_4_;
      *(int *)(pauVar12[5] + 4) = auVar14._4_4_;
      *(int *)(pauVar12[5] + 8) = auVar14._8_4_;
      *(int *)(pauVar12[5] + 0xc) = auVar14._12_4_;
      pauVar13 = pauVar12 + 6;
      param_1 = param_1 + 4;
      uVar11 = uVar11 - 2;
      auVar14 = _sqc2(auVar15);
      *pauVar12 = auVar14;
      auVar14 = _sqc2(auVar16);
      pauVar12[3] = auVar14;
      pauVar12 = pauVar13;
    } while (0 < (int)uVar11);
  }
  else {
    do {
      auVar14 = _lqc2(*param_1);
      auVar16 = _lqc2(param_1[2]);
      auVar9 = _lqc2(param_1[1]);
      auVar17 = _lqc2(param_1[3]);
      auVar15 = _vftoi12(auVar9);
      auVar17 = _vftoi12(auVar17);
      auVar9 = _pextlb(0,(long)*(int *)(param_1[1] + 8));
      auVar9 = _pextlh(0,auVar9._0_8_);
      *(int *)pauVar12[2] = auVar9._0_4_;
      *(int *)(pauVar12[2] + 4) = auVar9._4_4_;
      *(int *)(pauVar12[2] + 8) = auVar9._8_4_;
      *(int *)(pauVar12[2] + 0xc) = auVar9._12_4_;
      auVar9 = _pextlb(0,(long)*(int *)(param_1[3] + 8));
      auVar9 = _pextlh(0,auVar9._0_8_);
      *(int *)pauVar12[5] = auVar9._0_4_;
      *(int *)(pauVar12[5] + 4) = auVar9._4_4_;
      *(int *)(pauVar12[5] + 8) = auVar9._8_4_;
      *(int *)(pauVar12[5] + 0xc) = auVar9._12_4_;
      pauVar13 = pauVar12 + 6;
      param_1 = param_1 + 4;
      uVar10 = (ulong)((int)uVar10 + -2);
      auVar9 = _sqc2(auVar14);
      *pauVar12 = auVar9;
      auVar9 = _sqc2(auVar15);
      pauVar12[1] = auVar9;
      auVar9 = _sqc2(auVar16);
      pauVar12[3] = auVar9;
      auVar9 = _sqc2(auVar17);
      pauVar12[4] = auVar9;
      pauVar12 = pauVar13;
    } while (0 < (long)uVar10);
  }
  auVar17._8_8_ = in_a1_udw;
  auVar17._0_8_ = 0x6c0203f401000404;
  auVar4._8_8_ = in_a3_udw;
  auVar4._0_8_ = 0x10000002;
  auVar9 = _pcpyld(auVar17,auVar4);
  *(int *)*pauVar13 = auVar9._0_4_;
  *(int *)(*pauVar13 + 4) = auVar9._4_4_;
  *(int *)(*pauVar13 + 8) = auVar9._8_4_;
  *(int *)(*pauVar13 + 0xc) = auVar9._12_4_;
  if (cGpffff8685 == '\0') {
    uVar11 = 0x49;
    uVar8 = 0x59;
  }
  else {
    uVar11 = 0xc9;
    uVar8 = 0xd9;
  }
  if (cGpffff8683 != '\0') {
    uVar11 = uVar8;
  }
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x412;
  auVar5._8_8_ = in_a3_udw;
  auVar5._0_8_ = ((ulong)uVar11 << 0xf | 0x30004000) << 0x20;
  auVar9 = _pcpyld(auVar1,auVar5);
  *(int *)pauVar13[1] = auVar9._0_4_;
  *(int *)(pauVar13[1] + 4) = auVar9._4_4_;
  *(int *)(pauVar13[1] + 8) = auVar9._8_4_;
  *(int *)(pauVar13[1] + 0xc) = auVar9._12_4_;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 1;
  auVar6._8_8_ = in_a3_udw;
  auVar6._0_8_ = (ulong)bGpffff8684 << 0x20;
  auVar9 = _pcpyld(auVar2,auVar6);
  *(int *)pauVar13[2] = auVar9._0_4_;
  *(int *)(pauVar13[2] + 4) = auVar9._4_4_;
  *(int *)(pauVar13[2] + 8) = auVar9._8_4_;
  *(int *)(pauVar13[2] + 0xc) = auVar9._12_4_;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = (ulong)param_2 | 0x1700000004000000;
  auVar7._8_8_ = in_a3_udw;
  auVar7._0_8_ = 0x10000000;
  auVar9 = _pcpyld(auVar3,auVar7);
  *(int *)pauVar13[3] = auVar9._0_4_;
  *(int *)(pauVar13[3] + 4) = auVar9._4_4_;
  *(int *)(pauVar13[3] + 8) = auVar9._8_4_;
  *(int *)(pauVar13[3] + 0xc) = auVar9._12_4_;
  DAT_0040e5f0 = pauVar13 + 4;
  return;
}


// ==== FUN_0026b480 @ 0026b480 ====

void FUN_0026b480(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  uint uVar7;
  undefined8 in_a0_udw;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulong in_a2_udw;
  undefined8 in_a3_udw;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar6 = (ulong)param_3;
  FUN_002b3d88(0,param_3 * 3 + 6);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = in_a2_udw;
  auVar15._8_8_ = in_a3_udw;
  auVar15._0_8_ = (long)(int)(param_3 * 3 + 1) | 0x10000000;
  auVar5 = _pcpyld(auVar17 << 0x40,auVar15);
  *(int *)DAT_0040e5f0 = auVar5._0_4_;
  *(int *)((int)DAT_0040e5f0 + 4) = auVar5._4_4_;
  *(int *)((int)DAT_0040e5f0 + 8) = auVar5._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0xc) = auVar5._12_4_;
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = (ulong)(param_3 * 0x30000) << 0x20 | 0x6c00800001000303;
  auVar16._8_8_ = in_a3_udw;
  auVar16._0_8_ = 0x500000000000000;
  auVar5 = _pcpyld(auVar5,auVar16);
  *(int *)((int)DAT_0040e5f0 + 0x10) = auVar5._0_4_;
  *(int *)((int)DAT_0040e5f0 + 0x14) = auVar5._4_4_;
  *(int *)((int)DAT_0040e5f0 + 0x18) = auVar5._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0x1c) = auVar5._12_4_;
  if (cGpffff8683 == '\0') {
    auVar15 = _lqc2(*param_1);
    auVar16 = _lqc2(param_1[1]);
    auVar17 = _lqc2(param_1[2]);
    auVar10 = _lqc2(param_1[3]);
    auVar5 = _pextlb(0,0xffffffff80ffffff);
    auVar5 = _pextlh(0,auVar5._0_8_);
    uVar7 = param_3;
    pauVar8 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
    do {
      auVar11 = _lqc2(*param_2);
      auVar13 = _lqc2(param_2[2]);
      _vmulabc(auVar15,auVar11);
      _vmaddabc(auVar16,auVar11);
      _vmaddabc(auVar17,auVar11);
      auVar12 = _vmaddbc(auVar10,in_vf0);
      _vmulabc(auVar15,auVar13);
      _vmaddabc(auVar16,auVar13);
      _vmaddabc(auVar17,auVar13);
      auVar13 = _vmaddbc(auVar10,in_vf0);
      auVar11 = _pextlb(0,(long)*(int *)(param_2[1] + 8));
      auVar11 = _pextlh(0,auVar11._0_8_);
      auVar11 = _paddw(auVar11,auVar11);
      auVar11 = _pminw(auVar11,auVar5);
      *(int *)pauVar8[2] = auVar11._0_4_;
      *(int *)(pauVar8[2] + 4) = auVar11._4_4_;
      *(int *)(pauVar8[2] + 8) = auVar11._8_4_;
      *(int *)(pauVar8[2] + 0xc) = auVar11._12_4_;
      auVar11 = _pextlb(0,(long)*(int *)(param_2[3] + 8));
      auVar11 = _pextlh(0,auVar11._0_8_);
      auVar11 = _paddw(auVar11,auVar11);
      auVar11 = _pminw(auVar11,auVar5);
      *(int *)pauVar8[5] = auVar11._0_4_;
      *(int *)(pauVar8[5] + 4) = auVar11._4_4_;
      *(int *)(pauVar8[5] + 8) = auVar11._8_4_;
      *(int *)(pauVar8[5] + 0xc) = auVar11._12_4_;
      pauVar9 = pauVar8 + 6;
      param_2 = param_2 + 4;
      uVar7 = uVar7 - 2;
      auVar11 = _sqc2(auVar12);
      *pauVar8 = auVar11;
      auVar11 = _sqc2(auVar13);
      pauVar8[3] = auVar11;
      pauVar8 = pauVar9;
    } while (0 < (int)uVar7);
  }
  else {
    auVar5 = _lqc2(*param_1);
    auVar15 = _lqc2(param_1[1]);
    auVar16 = _lqc2(param_1[2]);
    auVar17 = _lqc2(param_1[3]);
    pauVar8 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
    do {
      auVar10 = _lqc2(*param_2);
      auVar13 = _lqc2(param_2[2]);
      auVar12 = _lqc2(param_2[1]);
      auVar14 = _lqc2(param_2[4]);
      _vmulabc(auVar5,auVar10);
      _vmaddabc(auVar15,auVar10);
      _vmaddabc(auVar16,auVar10);
      auVar11 = _vmaddbc(auVar17,in_vf0);
      _vmulabc(auVar5,auVar13);
      _vmaddabc(auVar15,auVar13);
      _vmaddabc(auVar16,auVar13);
      auVar13 = _vmaddbc(auVar17,in_vf0);
      auVar12 = _vftoi12(auVar12);
      auVar14 = _vftoi12(auVar14);
      auVar10 = _pextlb(0,(long)*(int *)(param_2[1] + 8));
      auVar10 = _pextlh(0,auVar10._0_8_);
      *(int *)pauVar8[2] = auVar10._0_4_;
      *(int *)(pauVar8[2] + 4) = auVar10._4_4_;
      *(int *)(pauVar8[2] + 8) = auVar10._8_4_;
      *(int *)(pauVar8[2] + 0xc) = auVar10._12_4_;
      auVar10 = _pextlb(0,(long)*(int *)(param_2[3] + 8));
      auVar10 = _pextlh(0,auVar10._0_8_);
      *(int *)pauVar8[5] = auVar10._0_4_;
      *(int *)(pauVar8[5] + 4) = auVar10._4_4_;
      *(int *)(pauVar8[5] + 8) = auVar10._8_4_;
      *(int *)(pauVar8[5] + 0xc) = auVar10._12_4_;
      pauVar9 = pauVar8 + 6;
      param_2 = param_2 + 4;
      uVar6 = (ulong)((int)uVar6 + -2);
      auVar10 = _sqc2(auVar11);
      *pauVar8 = auVar10;
      auVar10 = _sqc2(auVar12);
      pauVar8[1] = auVar10;
      auVar10 = _sqc2(auVar13);
      pauVar8[3] = auVar10;
      auVar10 = _sqc2(auVar14);
      pauVar8[4] = auVar10;
      pauVar8 = pauVar9;
    } while (0 < (long)uVar6);
  }
  auVar10._8_8_ = in_a2_udw;
  auVar10._0_8_ = 0x6c0203f401000404;
  auVar11._8_8_ = in_a3_udw;
  auVar11._0_8_ = 0x10000002;
  auVar5 = _pcpyld(auVar10,auVar11);
  *(int *)*pauVar9 = auVar5._0_4_;
  *(int *)(*pauVar9 + 4) = auVar5._4_4_;
  *(int *)(*pauVar9 + 8) = auVar5._8_4_;
  *(int *)(*pauVar9 + 0xc) = auVar5._12_4_;
  if (cGpffff8685 == '\0') {
    uVar7 = 0x49;
    uVar4 = 0x59;
  }
  else {
    uVar7 = 0xc9;
    uVar4 = 0xd9;
  }
  if (cGpffff8683 != '\0') {
    uVar7 = uVar4;
  }
  auVar12._8_8_ = in_a0_udw;
  auVar12._0_8_ = 0x412;
  auVar1._8_8_ = in_a3_udw;
  auVar1._0_8_ = ((ulong)uVar7 << 0xf | 0x30004000) << 0x20;
  auVar5 = _pcpyld(auVar12,auVar1);
  *(int *)pauVar9[1] = auVar5._0_4_;
  *(int *)(pauVar9[1] + 4) = auVar5._4_4_;
  *(int *)(pauVar9[1] + 8) = auVar5._8_4_;
  *(int *)(pauVar9[1] + 0xc) = auVar5._12_4_;
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = 1;
  auVar2._8_8_ = in_a3_udw;
  auVar2._0_8_ = (ulong)bGpffff8684 << 0x20;
  auVar5 = _pcpyld(auVar13,auVar2);
  *(int *)pauVar9[2] = auVar5._0_4_;
  *(int *)(pauVar9[2] + 4) = auVar5._4_4_;
  *(int *)(pauVar9[2] + 8) = auVar5._8_4_;
  *(int *)(pauVar9[2] + 0xc) = auVar5._12_4_;
  auVar14._8_8_ = in_a2_udw;
  auVar14._0_8_ = (ulong)param_3 | 0x1700000004000000;
  auVar3._8_8_ = in_a3_udw;
  auVar3._0_8_ = 0x10000000;
  auVar5 = _pcpyld(auVar14,auVar3);
  *(int *)pauVar9[3] = auVar5._0_4_;
  *(int *)(pauVar9[3] + 4) = auVar5._4_4_;
  *(int *)(pauVar9[3] + 8) = auVar5._8_4_;
  *(int *)(pauVar9[3] + 0xc) = auVar5._12_4_;
  DAT_0040e5f0 = pauVar9 + 4;
  return;
}


// ==== FUN_0026b738 @ 0026b738 ====

void FUN_0026b738(undefined1 (*param_1) [16],uint param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 in_v1_udw;
  ulong in_a1_udw;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined8 in_a3_udw;
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
  undefined1 auStack_50 [16];
  
  FUN_002b3d88(0,param_2 * 3 + 6);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = in_a1_udw;
  auVar17._8_8_ = in_a3_udw;
  auVar17._0_8_ = (long)(int)(param_2 * 3 + 1) | 0x10000000;
  auVar2 = _pcpyld(auVar7 << 0x40,auVar17);
  *(int *)DAT_0040e5f0 = auVar2._0_4_;
  *(int *)((int)DAT_0040e5f0 + 4) = auVar2._4_4_;
  *(int *)((int)DAT_0040e5f0 + 8) = auVar2._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0xc) = auVar2._12_4_;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = (ulong)(param_2 * 0x30000) << 0x20 | 0x6c00800001000303;
  auVar6._8_8_ = in_a3_udw;
  auVar6._0_8_ = 0x500000000000000;
  auVar2 = _pcpyld(auVar2,auVar6);
  *(int *)((int)DAT_0040e5f0 + 0x10) = auVar2._0_4_;
  *(int *)((int)DAT_0040e5f0 + 0x14) = auVar2._4_4_;
  *(int *)((int)DAT_0040e5f0 + 0x18) = auVar2._8_4_;
  *(int *)((int)DAT_0040e5f0 + 0x1c) = auVar2._12_4_;
  pauVar4 = (undefined1 (*) [16])((int)DAT_0040e5f0 + 0x20);
  auVar2 = _qmtc2(0x3f808000);
  _lqc2(auStack_50);
  auVar2 = _vmr32(auVar2);
  auVar17 = _vmove(auVar2);
  uVar3 = param_2;
  if (cGpffff8683 == '\0') {
    auVar17 = _pextlb(0,0xffffffff80ffffff);
    auVar17 = _pextlh(0,auVar17._0_8_);
    do {
      _lqc2(*param_1);
      uVar3 = uVar3 - 4;
      _lqc2(param_1[2]);
      auVar9 = _lqc2(param_1[6]);
      auVar10 = _lqc2(param_1[4]);
      auVar7 = _vmove(auVar2);
      auVar8 = _vmove(auVar2);
      auVar6 = _pextlb(0,(long)*(int *)(param_1[1] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      auVar6 = _paddw(auVar6,auVar6);
      auVar6 = _pminw(auVar6,auVar17);
      *(int *)pauVar4[2] = auVar6._0_4_;
      *(int *)(pauVar4[2] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[2] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[2] + 0xc) = auVar6._12_4_;
      auVar6 = _pextlb(0,(long)*(int *)(param_1[3] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      auVar6 = _paddw(auVar6,auVar6);
      auVar6 = _pminw(auVar6,auVar17);
      *(int *)pauVar4[5] = auVar6._0_4_;
      *(int *)(pauVar4[5] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[5] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[5] + 0xc) = auVar6._12_4_;
      auVar6 = _pextlb(0,(long)*(int *)(param_1[7] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      auVar6 = _paddw(auVar6,auVar6);
      auVar6 = _pminw(auVar6,auVar17);
      *(int *)pauVar4[8] = auVar6._0_4_;
      *(int *)(pauVar4[8] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[8] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[8] + 0xc) = auVar6._12_4_;
      auVar6 = _pextlb(0,(long)*(int *)(param_1[5] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      auVar6 = _paddw(auVar6,auVar6);
      auVar6 = _pminw(auVar6,auVar17);
      *(int *)pauVar4[0xb] = auVar6._0_4_;
      *(int *)(pauVar4[0xb] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[0xb] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[0xb] + 0xc) = auVar6._12_4_;
      pauVar5 = pauVar4 + 0xc;
      param_1 = param_1 + 8;
      auVar6 = _sqc2(auVar7);
      *pauVar4 = auVar6;
      auVar6 = _sqc2(auVar8);
      pauVar4[3] = auVar6;
      auVar6 = _sqc2(auVar9);
      pauVar4[6] = auVar6;
      auVar6 = _sqc2(auVar10);
      pauVar4[9] = auVar6;
      pauVar4 = pauVar5;
    } while (0 < (int)uVar3);
  }
  else {
    do {
      _lqc2(*param_1);
      _lqc2(param_1[2]);
      auVar11 = _lqc2(param_1[6]);
      auVar12 = _lqc2(param_1[4]);
      auVar13 = _lqc2(param_1[1]);
      auVar14 = _lqc2(param_1[3]);
      auVar15 = _lqc2(param_1[7]);
      auVar16 = _lqc2(param_1[5]);
      auVar2 = _pextlb(0,(long)*(int *)(param_1[1] + 8));
      auVar2 = _pextlh(0,auVar2._0_8_);
      auVar6 = _pextlb(0,(long)*(int *)(param_1[3] + 8));
      auVar6 = _pextlh(0,auVar6._0_8_);
      auVar7 = _pextlb(0,(long)*(int *)(param_1[7] + 8));
      auVar7 = _pextlh(0,auVar7._0_8_);
      auVar8 = _pextlb(0,(long)*(int *)(param_1[5] + 8));
      auVar8 = _pextlh(0,auVar8._0_8_);
      auVar9 = _vmove(auVar17);
      auVar10 = _vmove(auVar17);
      auVar13 = _vftoi12(auVar13);
      auVar14 = _vftoi12(auVar14);
      auVar15 = _vftoi12(auVar15);
      auVar16 = _vftoi12(auVar16);
      *(int *)pauVar4[2] = auVar2._0_4_;
      *(int *)(pauVar4[2] + 4) = auVar2._4_4_;
      *(int *)(pauVar4[2] + 8) = auVar2._8_4_;
      *(int *)(pauVar4[2] + 0xc) = auVar2._12_4_;
      *(int *)pauVar4[5] = auVar6._0_4_;
      *(int *)(pauVar4[5] + 4) = auVar6._4_4_;
      *(int *)(pauVar4[5] + 8) = auVar6._8_4_;
      *(int *)(pauVar4[5] + 0xc) = auVar6._12_4_;
      *(int *)pauVar4[8] = auVar7._0_4_;
      *(int *)(pauVar4[8] + 4) = auVar7._4_4_;
      *(int *)(pauVar4[8] + 8) = auVar7._8_4_;
      *(int *)(pauVar4[8] + 0xc) = auVar7._12_4_;
      *(int *)pauVar4[0xb] = auVar8._0_4_;
      *(int *)(pauVar4[0xb] + 4) = auVar8._4_4_;
      *(int *)(pauVar4[0xb] + 8) = auVar8._8_4_;
      *(int *)(pauVar4[0xb] + 0xc) = auVar8._12_4_;
      pauVar5 = pauVar4 + 0xc;
      param_1 = param_1 + 8;
      uVar3 = uVar3 - 4;
      auVar2 = _sqc2(auVar9);
      *pauVar4 = auVar2;
      auVar2 = _sqc2(auVar13);
      pauVar4[1] = auVar2;
      auVar2 = _sqc2(auVar10);
      pauVar4[3] = auVar2;
      auVar2 = _sqc2(auVar14);
      pauVar4[4] = auVar2;
      auVar2 = _sqc2(auVar11);
      pauVar4[6] = auVar2;
      auVar2 = _sqc2(auVar15);
      pauVar4[7] = auVar2;
      auVar2 = _sqc2(auVar12);
      pauVar4[9] = auVar2;
      auVar2 = _sqc2(auVar16);
      pauVar4[10] = auVar2;
      pauVar4 = pauVar5;
    } while (0 < (int)uVar3);
  }
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = 0x6c0203f401000404;
  auVar9._8_8_ = in_a3_udw;
  auVar9._0_8_ = 0x10000002;
  auVar2 = _pcpyld(auVar8,auVar9);
  *(int *)*pauVar5 = auVar2._0_4_;
  *(int *)(*pauVar5 + 4) = auVar2._4_4_;
  *(int *)(*pauVar5 + 8) = auVar2._8_4_;
  *(int *)(*pauVar5 + 0xc) = auVar2._12_4_;
  lVar1 = 0x4c;
  if (cGpffff8683 != '\0') {
    lVar1 = 0x5c;
  }
  auVar10._8_8_ = in_v1_udw;
  auVar10._0_8_ = 0x412;
  auVar12._8_8_ = in_a3_udw;
  auVar12._0_8_ = (lVar1 << 0xf | 0x30004000U) << 0x20;
  auVar2 = _pcpyld(auVar10,auVar12);
  *(int *)pauVar5[1] = auVar2._0_4_;
  *(int *)(pauVar5[1] + 4) = auVar2._4_4_;
  *(int *)(pauVar5[1] + 8) = auVar2._8_4_;
  *(int *)(pauVar5[1] + 0xc) = auVar2._12_4_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = in_a1_udw;
  auVar13._8_8_ = in_a3_udw;
  auVar13._0_8_ = (ulong)bGpffff8684 << 0x20;
  auVar2 = _pcpyld(auVar15 << 0x40,auVar13);
  *(int *)pauVar5[2] = auVar2._0_4_;
  *(int *)(pauVar5[2] + 4) = auVar2._4_4_;
  *(int *)(pauVar5[2] + 8) = auVar2._8_4_;
  *(int *)(pauVar5[2] + 0xc) = auVar2._12_4_;
  auVar11._8_8_ = in_a1_udw;
  auVar11._0_8_ = (ulong)param_2 | 0x1700000004000000;
  auVar14._8_8_ = in_a3_udw;
  auVar14._0_8_ = 0x10000000;
  auVar2 = _pcpyld(auVar11,auVar14);
  *(int *)pauVar5[3] = auVar2._0_4_;
  *(int *)(pauVar5[3] + 4) = auVar2._4_4_;
  *(int *)(pauVar5[3] + 8) = auVar2._8_4_;
  *(int *)(pauVar5[3] + 0xc) = auVar2._12_4_;
  DAT_0040e5f0 = pauVar5 + 4;
  return;
}


// ==== FUN_0026ba20 @ 0026ba20 ====

void FUN_0026ba20(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  puVar2 = (undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x46) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x47) = 0;
  iVar3 = 0x1b;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  do {
    puVar1[-0x1c] = 0;
    iVar3 = iVar3 + -1;
    *puVar1 = 0;
    *puVar2 = 0;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  uVar4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0xbc);
  do {
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 4);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xe4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xdc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}


// ==== FUN_0026baf0 @ 0026baf0 ====

undefined1 FUN_0026baf0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


// ==== FUN_0026baf8 @ 0026baf8 ====

undefined4 FUN_0026baf8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0xc) == '\0') {
    *(undefined1 *)(iVar4 + 0x46) = 0;
    *(undefined1 *)(iVar4 + 0x47) = 0;
    *(undefined1 *)(iVar4 + 0x48) = 0;
    *(undefined1 *)(iVar4 + 0x49) = 0;
  }
  else {
    FUN_0026bcf8(param_1,0);
    FUN_0026bc88(0,param_1);
  }
  iVar3 = 0;
  *(undefined1 *)(iVar4 + 0x4a) = 1;
  puVar2 = (undefined4 *)(iVar4 + 0x4c);
  do {
    puVar1 = (undefined1 *)(iVar4 + 0x2a + iVar3);
    *(undefined1 *)(iVar4 + 0xe + iVar3) = 0;
    iVar3 = iVar3 + 1;
    *puVar1 = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x1c);
  *(undefined4 *)(iVar4 + 4) = 3;
  return 1;
}


// ==== FUN_0026bb98 @ 0026bb98 ====

undefined4 FUN_0026bb98(int param_1,ulong param_2)

{
  if (param_2 < 0x1c) {
    return *(undefined4 *)(param_1 + (int)param_2 * 4 + 0x4c);
  }
  return 0;
}


// ==== FUN_0026bbc0 @ 0026bbc0 ====

bool FUN_0026bbc0(int param_1,ulong param_2)

{
  bool bVar1;
  
  param_1 = param_1 + (int)param_2;
  if (0x1b < param_2) {
    return false;
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x2a) != '\0') {
    bVar1 = *(char *)(param_1 + 0xe) == '\0';
  }
  return bVar1;
}


// ==== FUN_0026bbf8 @ 0026bbf8 ====

bool FUN_0026bbf8(int param_1,ulong param_2)

{
  bool bVar1;
  
  param_1 = param_1 + (int)param_2;
  if (0x1b < param_2) {
    return false;
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    bVar1 = *(char *)(param_1 + 0xe) != '\0';
  }
  return bVar1;
}


// ==== FUN_0026bc30 @ 0026bc30 ====

undefined1 FUN_0026bc30(int param_1,ulong param_2)

{
  if (param_2 < 0x1c) {
    return *(undefined1 *)(param_1 + (int)param_2 + 0x2a);
  }
  return 0;
}


// ==== FUN_0026bc50 @ 0026bc50 ====

void FUN_0026bc50(float param_1,int param_2)

{
  if (0.0 <= param_1) {
    *(float *)(param_2 + 0xcc) = param_1;
    return;
  }
  *(float *)(param_2 + 0xcc) = -param_1;
  return;
}


// ==== FUN_0026bc80 @ 0026bc80 ====

undefined4 FUN_0026bc80(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}


// ==== FUN_0026bc88 @ 0026bc88 ====

undefined4 FUN_0026bc88(float param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 < 1.0) && (0.0 <= param_1)) {
    bVar1 = true;
  }
  if ((*(char *)(param_2 + 0xc) != '\0') && (bVar1)) {
    *(char *)(param_2 + 0x47) = (char)(int)(param_1 * 255.0);
    return 1;
  }
  return 0;
}


// ==== FUN_0026bcf8 @ 0026bcf8 ====

undefined4 FUN_0026bcf8(int param_1,long param_2)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x49) = 0;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  return 1;
}


// ==== FUN_0026bec0 @ 0026bec0 ====

float FUN_0026bec0(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0xd0);
  if (fVar1 < param_1) {
    param_1 = fVar1;
  }
  param_1 = param_1 - *(float *)(param_2 + 0xd4);
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  return param_1 * (1.0 / (fVar1 - *(float *)(param_2 + 0xd4)));
}


// ==== FUN_0026bf10 @ 0026bf10 ====

float FUN_0026bf10(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0xd8);
  if (fVar1 < param_1) {
    param_1 = fVar1;
  }
  param_1 = param_1 - *(float *)(param_2 + 0xdc);
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  return param_1 * (1.0 / (fVar1 - *(float *)(param_2 + 0xdc)));
}


// ==== FUN_0026bf60 @ 0026bf60 ====

float FUN_0026bf60(float param_1,float param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0xe0);
  if (0.0 < param_1) {
    if (fVar2 < param_1) {
      param_1 = fVar2;
    }
    param_2 = *(float *)(param_3 + 0xe4) + param_2;
    param_1 = param_1 - param_2;
    bVar1 = param_1 < 0.0;
  }
  else {
    if (param_1 < -fVar2) {
      param_1 = -fVar2;
    }
    param_2 = *(float *)(param_3 + 0xe4) + param_2;
    param_1 = param_1 + param_2;
    bVar1 = 0.0 < param_1;
  }
  if (bVar1) {
    param_1 = 0.0;
  }
  return param_1 * (1.0 / (fVar2 - param_2));
}


// ==== FUN_0026bff0 @ 0026bff0 ====

bool FUN_0026bff0(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0026baf8();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 4;
  }
  return lVar1 != 0;
}


// ==== FUN_0026c030 @ 0026c030 ====

void FUN_0026c030(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0029cb50(param_4,param_5);
  uVar2 = FUN_0026bec0((float)iVar1 / 255.0,param_1);
  *(undefined4 *)((int)param_1 + param_2 * 4 + 0x4c) = uVar2;
  return;
}


// ==== FUN_0026c098 @ 0026c098 ====

void FUN_0026c098(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0029cb50(param_4,param_5);
  uVar2 = FUN_0026bf10((float)iVar1 / 255.0,param_1);
  *(undefined4 *)((int)param_1 + param_2 * 4 + 0x4c) = uVar2;
  return;
}


// ==== FUN_0026c100 @ 0026c100 ====

void FUN_0026c100(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0xe8) != 0) {
    lVar2 = FUN_0026c9c0(*(int *)(iVar7 + 0xe8),*(undefined4 *)(iVar7 + 0xec));
    *(bool *)(iVar7 + 0xc) = lVar2 == 4;
    if (lVar2 == 4) {
      uVar3 = FUN_0026c9e0(*(undefined4 *)(iVar7 + 0xe8),*(undefined4 *)(iVar7 + 0xec));
      uVar4 = FUN_0026ca00(*(undefined4 *)(iVar7 + 0xe8),*(undefined4 *)(iVar7 + 0xec));
      FUN_0026c030(param_1,0,0x18,uVar3,uVar4);
      FUN_0026c030(param_1,1,0x1b,uVar3,uVar4);
      FUN_0026c030(param_1,2,0x1a,uVar3,uVar4);
      FUN_0026c030(param_1,3,0x19,uVar3,uVar4);
      FUN_0026c030(param_1,4,0x16,uVar3,uVar4);
      FUN_0026c030(param_1,5,0x17,uVar3,uVar4);
      FUN_0026c030(param_1,6,0x15,uVar3,uVar4);
      FUN_0026c030(param_1,7,0x14,uVar3,uVar4);
      FUN_0026c030(param_1,8,0x14,uVar3,uVar4);
      iVar1 = FUN_0029cb50(uVar3,uVar4,3);
      *(float *)(iVar7 + 0x6c) = (float)iVar1;
      iVar1 = FUN_0029cb50(uVar3,uVar4,0);
      *(float *)(iVar7 + 0x70) = (float)iVar1;
      FUN_0026c098(param_1,10,0x1c,uVar3,uVar4);
      FUN_0026c098(param_1,0xb,0x1e,uVar3,uVar4);
      FUN_0026c098(param_1,0xc,0x1d,uVar3,uVar4);
      FUN_0026c098(param_1,0xd,0x1f,uVar3,uVar4);
      iVar1 = FUN_0029cb50(uVar3,uVar4,1);
      *(float *)(iVar7 + 0x84) = (float)iVar1;
      iVar1 = FUN_0029cb50(uVar3,uVar4,2);
      *(float *)(iVar7 + 0x88) = (float)iVar1;
      iVar1 = FUN_0029cb50(uVar3,uVar4,0x13);
      fVar8 = (-(float)iVar1 + 255.0) - 128.0;
      *(float *)(iVar7 + 0xb0) = fVar8;
      if (0.0 < fVar8) {
        fVar8 = fVar8 / 127.0;
        *(float *)(iVar7 + 0xb0) = fVar8;
        if ((*(char *)(iVar7 + 0xd) == '\0') && (*(float *)(iVar7 + 0xbc) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 0xbc) = 0x3e800000;
        }
        uVar9 = FUN_0026bf60(*(undefined4 *)(iVar7 + 0xb0),*(undefined4 *)(iVar7 + 0xbc),param_1);
        *(undefined4 *)(iVar7 + 0x90) = 0;
        *(undefined4 *)(iVar7 + 0x8c) = uVar9;
        *(undefined4 *)(iVar7 + 0xb0) = uVar9;
      }
      else {
        *(float *)(iVar7 + 0xb0) = fVar8 * 0.0078125;
        if ((*(char *)(iVar7 + 0xd) == '\0') &&
           (fVar8 = -(fVar8 * 0.0078125), *(float *)(iVar7 + 0xbc) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 0xbc) = 0x3e800000;
        }
        fVar8 = (float)FUN_0026bf60(*(undefined4 *)(iVar7 + 0xb0),*(undefined4 *)(iVar7 + 0xbc),
                                    param_1);
        *(undefined4 *)(iVar7 + 0x8c) = 0;
        *(float *)(iVar7 + 0xb0) = fVar8;
        *(float *)(iVar7 + 0x90) = -fVar8;
      }
      iVar1 = FUN_0029cb50(uVar3,uVar4,0x12);
      fVar8 = (float)iVar1 - 128.0;
      *(float *)(iVar7 + 0xac) = fVar8;
      if (0.0 < fVar8) {
        fVar8 = fVar8 / 127.0;
        *(float *)(iVar7 + 0xac) = fVar8;
        if ((*(char *)(iVar7 + 0xd) == '\0') && (*(float *)(iVar7 + 0xc0) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 0xc0) = 0x3e800000;
        }
        uVar9 = FUN_0026bf60(*(undefined4 *)(iVar7 + 0xac),*(undefined4 *)(iVar7 + 0xc0),param_1);
        *(undefined4 *)(iVar7 + 0x94) = 0;
        *(undefined4 *)(iVar7 + 0x98) = uVar9;
        *(undefined4 *)(iVar7 + 0xac) = uVar9;
      }
      else {
        *(float *)(iVar7 + 0xac) = fVar8 * 0.0078125;
        if ((*(char *)(iVar7 + 0xd) == '\0') &&
           (fVar8 = -(fVar8 * 0.0078125), *(float *)(iVar7 + 0xc0) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 0xc0) = 0x3e800000;
        }
        fVar8 = (float)FUN_0026bf60(*(undefined4 *)(iVar7 + 0xac),*(undefined4 *)(iVar7 + 0xc0),
                                    param_1);
        *(undefined4 *)(iVar7 + 0x98) = 0;
        *(float *)(iVar7 + 0xac) = fVar8;
        *(float *)(iVar7 + 0x94) = -fVar8;
      }
      iVar1 = FUN_0029cb50(uVar3,uVar4,0x11);
      fVar8 = (-(float)iVar1 + 255.0) - 128.0;
      *(float *)(iVar7 + 0xb8) = fVar8;
      if (0.0 < fVar8) {
        fVar8 = fVar8 / 127.0;
        *(float *)(iVar7 + 0xb8) = fVar8;
        if ((*(char *)(iVar7 + 0xd) == '\0') && (*(float *)(iVar7 + 0xc4) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 0xc4) = 0x3e800000;
        }
        uVar9 = FUN_0026bf60(*(undefined4 *)(iVar7 + 0xb8),*(undefined4 *)(iVar7 + 0xc4),param_1);
        *(undefined4 *)(iVar7 + 0xa0) = 0;
        *(undefined4 *)(iVar7 + 0x9c) = uVar9;
        *(undefined4 *)(iVar7 + 0xb8) = uVar9;
      }
      else {
        *(float *)(iVar7 + 0xb8) = fVar8 * 0.0078125;
        if ((*(char *)(iVar7 + 0xd) == '\0') &&
           (fVar8 = -(fVar8 * 0.0078125), *(float *)(iVar7 + 0xc4) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 0xc4) = 0x3e800000;
        }
        fVar8 = (float)FUN_0026bf60(*(undefined4 *)(iVar7 + 0xb8),*(undefined4 *)(iVar7 + 0xc4),
                                    param_1);
        *(undefined4 *)(iVar7 + 0x9c) = 0;
        *(float *)(iVar7 + 0xb8) = fVar8;
        *(float *)(iVar7 + 0xa0) = -fVar8;
      }
      iVar1 = FUN_0029cb50(uVar3,uVar4,0x10);
      fVar8 = (float)iVar1 - 128.0;
      *(float *)(iVar7 + 0xb4) = fVar8;
      if (0.0 < fVar8) {
        fVar8 = fVar8 / 127.0;
        *(float *)(iVar7 + 0xb4) = fVar8;
        if ((*(char *)(iVar7 + 0xd) == '\0') && (*(float *)(iVar7 + 200) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 200) = 0x3e800000;
        }
        uVar9 = FUN_0026bf60(*(undefined4 *)(iVar7 + 0xb4),*(undefined4 *)(iVar7 + 200),param_1);
        *(undefined4 *)(iVar7 + 0xa4) = 0;
        *(undefined4 *)(iVar7 + 0xa8) = uVar9;
        *(undefined4 *)(iVar7 + 0xb4) = uVar9;
      }
      else {
        *(float *)(iVar7 + 0xb4) = fVar8 * 0.0078125;
        if ((*(char *)(iVar7 + 0xd) == '\0') &&
           (fVar8 = -(fVar8 * 0.0078125), *(float *)(iVar7 + 200) = fVar8, 0.25 < fVar8)) {
          *(undefined4 *)(iVar7 + 200) = 0x3e800000;
        }
        fVar8 = (float)FUN_0026bf60(*(undefined4 *)(iVar7 + 0xb4),*(undefined4 *)(iVar7 + 200),
                                    param_1);
        *(undefined4 *)(iVar7 + 0xa8) = 0;
        *(float *)(iVar7 + 0xb4) = fVar8;
        *(float *)(iVar7 + 0xa4) = -fVar8;
      }
      iVar1 = 0;
      pfVar6 = (float *)(iVar7 + 0x4c);
      puVar5 = (undefined1 *)(iVar7 + 0x2a);
      do {
        *(undefined1 *)(iVar7 + 0xe + iVar1) = *puVar5;
        if (-1 < iVar1) {
          if (iVar1 < 0x18) {
            if (*(float *)(iVar7 + 0xcc) < *pfVar6) {
              *puVar5 = 1;
            }
            else {
              *puVar5 = 0;
            }
          }
          else if (iVar1 < 0x1c) {
            *puVar5 = 0;
          }
        }
        iVar1 = iVar1 + 1;
        pfVar6 = pfVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar1 < 0x1c);
      *(undefined1 *)(iVar7 + 0xd) = 1;
    }
    else {
      *(undefined1 *)(iVar7 + 0xd) = 0;
    }
  }
  return;
}


// ==== FUN_0026c798 @ 0026c798 ====

void FUN_0026c798(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_80 = DAT_004001d0;
  uStack_78 = DAT_004001d8;
  uStack_70 = DAT_004001e0;
  uStack_68 = DAT_004001e8;
  iVar3 = 1;
  puVar1 = (undefined4 *)(param_1 + 0x244);
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  *(undefined1 *)(param_1 + 0x2a0) = param_2;
  *(undefined4 *)(param_1 + 0x248) = 0;
  iVar3 = param_1 + 600;
  *(undefined1 *)(param_1 + 0x24c) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x250);
  iVar4 = 1;
  do {
    *puVar1 = 0;
    FUN_0035c6ec(iVar3,0,0x20);
    iVar3 = iVar3 + 0x20;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar4);
  FUN_0029b558();
  FUN_0029c6c8(0);
  uVar2 = FUN_0029c708(&uStack_80,param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x298) = uVar2;
  uVar2 = 0xffffffff;
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    uStack_80 = CONCAT44(1,(undefined4)uStack_80);
    uVar2 = FUN_0029c708(&uStack_80,param_1 + 0x140);
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar2;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  return;
}


// ==== FUN_0026c8d0 @ 0026c8d0 ====

void FUN_0026c8d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  return;
}


// ==== FUN_0026c8e0 @ 0026c8e0 ====

void FUN_0026c8e0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_0026cba8(param_1,0);
  iVar3 = (int)param_1;
  piVar2 = (int *)(iVar3 + 0x240);
  if (*(char *)(iVar3 + 0x2a0) == '\0') {
    FUN_0026cba8(param_1,1);
    piVar2 = (int *)(iVar3 + 0x240);
  }
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8));
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 2);
  if (*(int *)(iVar3 + 0x2a4) == 0) {
    iVar4 = *(int *)(iVar3 + 0x244);
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 8) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 8) + 0x10));
    }
    *(undefined4 *)(iVar3 + 0x2a4) = 1;
  }
  else {
    iVar4 = *(int *)(iVar3 + 0x240);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x2a4) = 0;
    }
    else {
      (**(code **)(*(int *)(iVar4 + 8) + 0x14))(iVar4 + *(short *)(*(int *)(iVar4 + 8) + 0x10));
      *(undefined4 *)(iVar3 + 0x2a4) = 0;
    }
  }
  return;
}


// ==== FUN_0026c9c0 @ 0026c9c0 ====

undefined4 FUN_0026c9c0(int param_1,ulong param_2)

{
  if (param_2 < 2) {
    return *(undefined4 *)(param_1 + (int)param_2 * 4 + 0x250);
  }
  return 0;
}


// ==== FUN_0026c9e0 @ 0026c9e0 ====

undefined4 FUN_0026c9e0(int param_1,ulong param_2)

{
  if (param_2 < 2) {
    return *(undefined4 *)(param_1 + (int)param_2 * 4 + 0x298);
  }
  return 0;
}


// ==== FUN_0026ca00 @ 0026ca00 ====

int FUN_0026ca00(int param_1,ulong param_2)

{
  if (param_2 < 2) {
    return param_1 + (int)param_2 * 0x20 + 600;
  }
  return 0;
}


// ==== FUN_0026ca20 @ 0026ca20 ====

void FUN_0026ca20(int param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x240);
  if (param_2 != *(byte *)(param_1 + 0x24c)) {
    *(char *)(param_1 + 0x24c) = (char)param_2;
    iVar3 = 1;
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 8) + 0x1c))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0x18),*(undefined1 *)(param_1 + 0x24c));
      }
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + 1;
    } while (-1 < iVar3);
  }
  return;
}


// ==== FUN_0026ca98 @ 0026ca98 ====

undefined4 FUN_0026ca98(undefined8 param_1,long param_2,ulong param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_2 != 0;
  iVar4 = (int)param_2;
  iVar3 = (int)param_1;
  if (param_3 < 2) {
    if (!bVar1) {
      return 0;
    }
    bVar1 = *(int *)(iVar4 + 4) == *(int *)(iVar3 + (int)param_3 * 4 + 0x250);
  }
  if (!bVar1) {
    return 0;
  }
  if (param_3 >= 2) {
    return 0;
  }
  piVar2 = (int *)(iVar3 + 0x240 + (int)param_3 * 4);
  if (*piVar2 == 0) {
    *piVar2 = iVar4;
    *(int *)(iVar3 + 0x248) = *(int *)(iVar3 + 0x248) + 1;
    (**(code **)(*(int *)(iVar4 + 8) + 0x24))
              (iVar4 + *(short *)(*(int *)(iVar4 + 8) + 0x20),param_1);
    return 1;
  }
  return 0;
}


// ==== FUN_0026cb38 @ 0026cb38 ====

void FUN_0026cb38(int param_1,int param_2,ulong param_3)

{
  bool bVar1;
  
  bVar1 = param_2 != 0;
  if (param_3 < 2) {
    if (!bVar1) {
      return;
    }
    bVar1 = *(int *)(param_1 + (int)param_3 * 4 + 0x240) == param_2;
  }
  if ((bVar1) && (param_3 < 2)) {
    *(undefined4 *)(param_1 + (int)param_3 * 4 + 0x240) = 0;
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + -1;
    (**(code **)(*(int *)(param_2 + 8) + 0x2c))(param_2 + *(short *)(*(int *)(param_2 + 8) + 0x28));
  }
  return;
}


// ==== FUN_0026cba8 @ 0026cba8 ====

void FUN_0026cba8(int param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int aiStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = DAT_004001d8;
  uStack_60 = DAT_004001e0;
  uStack_58 = DAT_004001e8;
  if (param_2 == 0) {
    uStack_70 = DAT_004001d0 & 0xffffffff;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uStack_70 = CONCAT44(1,(int)DAT_004001d0);
  }
  iVar3 = param_2 * 4;
  piVar2 = (int *)(param_1 + 0x298 + iVar3);
  if (*piVar2 < 0) {
    iVar3 = FUN_0029c708(&uStack_70,param_1 + param_2 * 0x100 + 0x40);
    *piVar2 = iVar3;
  }
  else {
    lVar1 = FUN_0029ca10();
    if (lVar1 == 1) {
      piVar4 = (int *)(param_1 + 0x250 + iVar3);
      if (*piVar4 == 0) {
        lVar1 = FUN_0029c940(*piVar2,aiStack_80);
        if (0 < lVar1) {
          if (aiStack_80[0] == -1) {
            *piVar4 = 4;
          }
          else if (aiStack_80[0] == -0xf100) {
            *piVar4 = 3;
          }
        }
      }
      else {
        FUN_0029c868(*piVar2,param_1 + param_2 * 0x20 + 600);
      }
    }
    else if (lVar1 == 0) {
      FUN_0029c810(*piVar2);
      *piVar2 = -1;
      *(undefined4 *)(param_1 + iVar3 + 0x250) = 0;
    }
  }
  return;
}


// ==== FUN_0026cd28 @ 0026cd28 ====

/* WARNING: Removing unreachable block (ram,0x0026cdec) */

undefined8 FUN_0026cd28(undefined1 (*param_1) [16],undefined4 *param_2,undefined1 (*param_3) [16])

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 *puVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 in_a2_udw;
  undefined1 auVar22 [16];
  byte *pbVar23;
  undefined8 in_t1_udw;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 in_t3_qw [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 in_t4_udw;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  byte *pbVar37;
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 in_vi1;
  undefined4 in_vi2;
  undefined1 in_vf0 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 in_vf8w;
  undefined4 extraout_vf8w;
  undefined4 in_vf24w;
  undefined4 extraout_vf24w;
  undefined4 in_vf26w;
  undefined4 extraout_vf26w;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  
  pbVar36 = (byte *)0x0;
  uVar39 = 0;
  uVar40 = 0;
  bVar1 = *(byte *)(param_2 + 3);
  pbVar33 = (byte *)*param_2;
  iVar2 = param_2[1];
  pbVar37 = pbVar33 + (uint)bVar1 * (uint)*(byte *)((int)param_2 + 0xd);
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    do {
      uVar13 = FUN_0029c210(0);
      lVar14 = FUN_0029c5e8(uVar13,1,0);
      in_vf24w = extraout_vf24w;
      in_vf26w = extraout_vf26w;
      in_vf8w = extraout_vf8w;
    } while (lVar14 != 0);
  }
  puVar16 = (undefined8 *)((uint)*pbVar33 * 0xc + iVar2);
  puVar19 = (undefined8 *)((uint)pbVar33[1] * 0xc + iVar2);
  puVar12 = (undefined8 *)((uint)pbVar33[2] * 0xc + iVar2);
  _ctc2(puVar16);
  _lqc2(*param_1);
  _lqc2(param_1[1]);
  auVar15._8_8_ = in_t1_udw;
  auVar15._0_8_ = *puVar16;
  auVar48._4_4_ = 0;
  auVar48._0_4_ = *(uint *)(puVar16 + 1);
  auVar48._8_8_ = in_a2_udw;
  auVar22 = _pcpyld(auVar48,auVar15);
  auVar48 = _qmtc2(auVar22._0_4_);
  uVar42 = auVar48._0_4_;
  auVar24._8_8_ = in_t1_udw;
  auVar24._0_8_ = *puVar19;
  auVar22._4_4_ = 0;
  auVar22._0_4_ = *(uint *)(puVar19 + 1);
  auVar22 = _pcpyld(auVar22,auVar24);
  _qmtc2(auVar22._0_4_);
  auVar47._8_8_ = auVar22._8_8_;
  auVar25._8_8_ = in_t1_udw;
  auVar25._0_8_ = *puVar12;
  auVar47._4_4_ = 0;
  auVar47._0_4_ = *(uint *)(puVar12 + 1);
  auVar22 = _pcpyld(auVar47,auVar25);
  _qmtc2(auVar22._0_4_);
  _vcallms(0x3d8);
  if (0xfe < pbVar33[3]) {
    iVar20 = 0;
    iVar21 = 2;
    pbVar34 = pbVar33 + bVar1;
  }
  else {
    iVar20 = 2;
    iVar21 = 3;
    pbVar34 = pbVar33;
  }
  uVar46 = 0;
  fVar44 = 1.0;
  uVar11 = (uint)(0xfe >= pbVar33[3]);
  uVar26 = 0;
  while (bVar10 = false, pbVar35 = pbVar36, pbVar23 = pbVar33, uVar38 = uVar39, pbVar34 < pbVar37) {
    uVar42 = auVar48._0_4_;
    puVar16 = (undefined8 *)((uint)pbVar34[iVar20] * 0xc + iVar2);
    puVar19 = (undefined8 *)((uint)pbVar34[iVar21] * 0xc + iVar2);
    puVar12 = (undefined8 *)((uint)pbVar34[1] * 0xc + iVar2);
    auVar27._8_8_ = in_t3_qw._8_8_;
    auVar27._4_4_ = 0;
    auVar27._0_4_ = *(uint *)(puVar16 + 1);
    auVar3._8_8_ = in_t4_udw;
    auVar3._0_8_ = *puVar16;
    auVar48 = _pcpyld(auVar27,auVar3);
    auVar22 = _qmtc2(auVar48._0_4_);
    in_vf8w = auVar22._0_4_;
    auVar28._8_8_ = auVar48._8_8_;
    auVar28._4_4_ = 0;
    auVar28._0_4_ = *(uint *)(puVar12 + 1);
    auVar4._8_8_ = in_t4_udw;
    auVar4._0_8_ = *puVar12;
    auVar48 = _pcpyld(auVar28,auVar4);
    _qmtc2(auVar48._0_4_);
    auVar29._8_8_ = auVar48._8_8_;
    auVar29._4_4_ = 0;
    auVar29._0_4_ = *(uint *)(puVar19 + 1);
    auVar5._8_8_ = in_t4_udw;
    auVar5._0_8_ = *puVar19;
    auVar22 = _pcpyld(auVar29,auVar5);
    _qmtc2(auVar22._0_4_);
    _vcallms(0x598);
    uVar18 = _cfc2(in_vi1);
    auVar48 = _qmfc2(in_vf24w);
    bVar10 = true;
    uVar41 = uVar40;
    fVar43 = fVar44;
    uVar45 = uVar46;
    if (((uVar18 & 0xffff) != 0) &&
       (uVar41 = auVar48._8_4_, fVar43 = auVar48._0_4_, uVar45 = auVar48._4_4_, pbVar35 = pbVar33,
       uVar38 = uVar26, fVar44 <= auVar48._0_4_)) {
      uVar41 = uVar40;
      fVar43 = fVar44;
      uVar45 = uVar46;
      pbVar35 = pbVar36;
      uVar38 = uVar39;
    }
    uVar46 = uVar45;
    fVar44 = fVar43;
    uVar40 = uVar41;
    if ((uVar11 == 0) && (bVar9 = true, pbVar34[3] != 0xff)) {
      iVar21 = 2;
      iVar20 = 3;
      pbVar33 = pbVar34;
    }
    else {
      bVar9 = false;
      iVar21 = 0;
      iVar20 = 2;
      pbVar33 = pbVar34 + bVar1;
    }
    pbVar23 = pbVar34;
    uVar26 = uVar11;
    if (pbVar37 <= pbVar33) break;
    puVar16 = (undefined8 *)((uint)pbVar33[iVar21] * 0xc + iVar2);
    puVar19 = (undefined8 *)((uint)pbVar33[iVar20] * 0xc + iVar2);
    puVar12 = (undefined8 *)((uint)pbVar33[1] * 0xc + iVar2);
    auVar30._8_8_ = auVar22._8_8_;
    auVar30._4_4_ = 0;
    auVar30._0_4_ = *(uint *)(puVar16 + 1);
    auVar6._8_8_ = in_t4_udw;
    auVar6._0_8_ = *puVar16;
    auVar22 = _pcpyld(auVar30,auVar6);
    auVar48 = _qmtc2(auVar22._0_4_);
    uVar42 = auVar48._0_4_;
    auVar31._8_8_ = auVar22._8_8_;
    auVar31._4_4_ = 0;
    auVar31._0_4_ = *(uint *)(puVar12 + 1);
    auVar7._8_8_ = in_t4_udw;
    auVar7._0_8_ = *puVar12;
    auVar22 = _pcpyld(auVar31,auVar7);
    _qmtc2(auVar22._0_4_);
    auVar32._8_8_ = auVar22._8_8_;
    auVar32._4_4_ = 0;
    auVar32._0_4_ = *(uint *)(puVar19 + 1);
    auVar8._8_8_ = in_t4_udw;
    auVar8._0_8_ = *puVar19;
    in_t3_qw = _pcpyld(auVar32,auVar8);
    _qmtc2(in_t3_qw._0_4_);
    _vcallms(0x3e0);
    uVar18 = _cfc2(in_vi2);
    auVar22 = _qmfc2(in_vf26w);
    uVar41 = uVar40;
    fVar43 = fVar44;
    uVar45 = uVar46;
    pbVar36 = pbVar35;
    uVar39 = uVar38;
    if (((uVar18 & 0xffff) != 0) &&
       (uVar41 = auVar22._8_4_, fVar43 = auVar22._0_4_, uVar45 = auVar22._4_4_, pbVar36 = pbVar34,
       uVar39 = uVar11, fVar44 <= auVar22._0_4_)) {
      uVar41 = uVar40;
      fVar43 = fVar44;
      uVar45 = uVar46;
      pbVar36 = pbVar35;
      uVar39 = uVar38;
    }
    uVar46 = uVar45;
    uVar40 = uVar41;
    fVar44 = fVar43;
    if ((bVar9) || (pbVar33[3] == 0xff)) {
      iVar20 = 0;
      iVar21 = 2;
      pbVar34 = pbVar33 + bVar1;
      uVar11 = 0;
    }
    else {
      iVar20 = 2;
      iVar21 = 3;
      pbVar34 = pbVar33;
      uVar11 = 1;
    }
  }
  if (bVar10) {
    uVar18 = _cfc2(in_vi2);
    auVar48 = _qmfc2(in_vf8w);
    fStack_140 = auVar48._0_4_;
    uStack_13c = auVar48._4_4_;
    uStack_138 = auVar48._8_4_;
  }
  else {
    uVar18 = _cfc2(in_vi1);
    auVar48 = _qmfc2(uVar42);
    fStack_140 = auVar48._0_4_;
    uStack_13c = auVar48._4_4_;
    uStack_138 = auVar48._8_4_;
  }
  uVar42 = uVar40;
  fVar43 = fVar44;
  uVar41 = uVar46;
  pbVar33 = pbVar35;
  uVar39 = uVar38;
  if (((uVar18 & 0xffff) != 0) &&
     (uVar42 = uStack_138, fVar43 = fStack_140, uVar41 = uStack_13c, pbVar33 = pbVar23,
     uVar39 = uVar26, fVar44 <= fStack_140)) {
    uVar42 = uVar40;
    fVar43 = fVar44;
    uVar41 = uVar46;
    pbVar33 = pbVar35;
    uVar39 = uVar38;
  }
  if (pbVar33 == (byte *)0x0) {
    uVar13 = 0;
  }
  else {
    auVar47 = _lqc2(param_1[1]);
    auVar22 = _qmtc2(fVar43);
    auVar48 = _lqc2(*param_1);
    _vaddabc(auVar48,in_vf0);
    _vmsubabc(auVar48,auVar22);
    auVar48 = _vmaddbc(auVar47,auVar22);
    auVar48 = _sqc2(auVar48);
    *param_3 = auVar48;
    if (uVar39 == 0) {
      auVar47 = _vaddbc(in_vf0,in_vf0);
      piVar17 = (int *)((uint)*pbVar33 * 0xc + iVar2);
      auVar48 = _pextlw((long)piVar17[2],(long)*piVar17);
      auVar48 = _pextlw((long)piVar17[1],auVar48._0_8_);
      auVar22 = _qmtc2(auVar48._0_4_);
      _sqc2(auVar22);
      piVar17 = (int *)((uint)pbVar33[1] * 0xc + iVar2);
      auVar48 = _pextlw((long)piVar17[2],(long)*piVar17);
      auVar48 = _pextlw((long)piVar17[1],auVar48._0_8_);
      auVar48 = _qmtc2(auVar48._0_4_);
      auVar48 = _vsub(auVar48,auVar22);
      bVar1 = pbVar33[2];
    }
    else {
      auVar47 = _vaddbc(in_vf0,in_vf0);
      piVar17 = (int *)((uint)pbVar33[2] * 0xc + iVar2);
      auVar48 = _pextlw((long)piVar17[2],(long)*piVar17);
      auVar48 = _pextlw((long)piVar17[1],auVar48._0_8_);
      auVar22 = _qmtc2(auVar48._0_4_);
      _sqc2(auVar22);
      piVar17 = (int *)((uint)pbVar33[1] * 0xc + iVar2);
      auVar48 = _pextlw((long)piVar17[2],(long)*piVar17);
      auVar48 = _pextlw((long)piVar17[1],auVar48._0_8_);
      auVar48 = _qmtc2(auVar48._0_4_);
      auVar48 = _vsub(auVar48,auVar22);
      bVar1 = pbVar33[3];
    }
    piVar17 = (int *)((uint)bVar1 * 0xc + iVar2);
    auVar15 = _pextlw((long)piVar17[2],(long)*piVar17);
    auVar15 = _pextlw((long)piVar17[1],auVar15._0_8_);
    auVar15 = _qmtc2(auVar15._0_4_);
    auVar22 = _vsub(auVar15,auVar22);
    _vopmula(auVar48,auVar22);
    auVar22 = _vopmsub(auVar22,auVar48);
    auVar48 = _vmul(auVar22,auVar22);
    _vaddabc(auVar48,auVar48);
    auVar48 = _vmaddbc(auVar47,auVar48);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar48);
    uVar40 = _vwaitq();
    auVar48 = _vmulq(auVar22,uVar40);
    auVar48 = _sqc2(auVar48);
    param_3[1] = auVar48;
    *(undefined4 *)(param_3[5] + 8) = uVar42;
    uVar13 = 1;
    *(float *)param_3[5] = fVar43;
    *(byte **)param_3[6] = pbVar33;
    *(int *)(param_3[6] + 8) = iVar2;
    *(uint *)(param_3[6] + 4) = uVar39;
    *(undefined4 *)(param_3[5] + 4) = uVar41;
  }
  return uVar13;
}


// ==== FUN_0026d378 @ 0026d378 ====

/* WARNING: Removing unreachable block (ram,0x0026d458) */

undefined4
FUN_0026d378(undefined1 (*param_1) [16],undefined4 *param_2,code *param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte *pbVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  undefined4 in_vi1;
  undefined1 in_vf0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 in_vf24w;
  undefined4 extraout_vf24w;
  undefined4 extraout_vf24w_00;
  undefined4 uVar24;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  byte *pbStack_f0;
  undefined4 uStack_ec;
  undefined2 uStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  code *pcStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uStack_a8 = 0;
  iVar3 = 1;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  bVar2 = *(byte *)(param_2 + 3);
  auVar13._8_8_ = in_a2_udw;
  auVar13._0_8_ = 0x3ba100;
  pbVar5 = (byte *)*param_2;
  iVar18 = 2;
  iVar3 = param_2[1];
  bVar1 = false;
  pbVar20 = pbVar5 + (uint)bVar2 * (uint)*(byte *)((int)param_2 + 0xd);
  pbVar17 = pbVar5;
  pcStack_b0 = param_3;
  uStack_ac = param_4;
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    do {
      uVar6 = FUN_0029c210(0);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = auVar13._8_8_;
      auVar13 = auVar16 << 0x40;
      lVar7 = FUN_0029c5e8(uVar6,1,0);
      in_vf24w = extraout_vf24w;
    } while (lVar7 != 0);
  }
  do {
    if (pbVar20 <= pbVar17) {
      return uStack_a8;
    }
    puVar8 = (undefined8 *)((uint)*pbVar5 * 0xc + iVar3);
    puVar11 = (undefined8 *)((uint)pbVar17[iVar18] * 0xc + iVar3);
    puVar4 = (undefined8 *)((uint)pbVar17[1] * 0xc + iVar3);
    _ctc2(puVar8);
    _lqc2(*param_1);
    _lqc2(param_1[1]);
    auVar12._8_8_ = auVar13._8_8_;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = *(uint *)(puVar8 + 1);
    auVar21._8_8_ = in_a1_udw;
    auVar21._0_8_ = *puVar8;
    auVar13 = _pcpyld(auVar12,auVar21);
    _qmtc2(auVar13._0_4_);
    auVar14._8_8_ = auVar13._8_8_;
    auVar14._4_4_ = 0;
    auVar14._0_4_ = *(uint *)(puVar4 + 1);
    auVar22._8_8_ = in_a1_udw;
    auVar22._0_8_ = *puVar4;
    auVar13 = _pcpyld(auVar14,auVar22);
    _qmtc2(auVar13._0_4_);
    auVar15._8_8_ = auVar13._8_8_;
    auVar15._4_4_ = 0;
    auVar15._0_4_ = *(uint *)(puVar11 + 1);
    auVar23._8_8_ = in_a1_udw;
    auVar23._0_8_ = *puVar11;
    auVar13 = _pcpyld(auVar15,auVar23);
    _qmtc2(auVar13._0_4_);
    _vcallms(0x3d8);
    uVar10 = _cfc2(in_vi1);
    auVar16 = _qmfc2(in_vf24w);
    uStack_e0 = (undefined2)uVar10;
    uStack_100 = auVar16._0_4_;
    uStack_fc = auVar16._4_4_;
    uStack_f8 = auVar16._8_4_;
    uStack_c4 = auVar16._12_4_;
    if ((uVar10 & 0xffff) != 0) {
      auVar21 = _lqc2(param_1[1]);
      auVar22 = _qmtc2(uStack_100);
      auVar16 = _lqc2(*param_1);
      auVar23 = _vaddbc(in_vf0,in_vf0);
      _vaddabc(auVar16,in_vf0);
      _vmsubabc(auVar16,auVar22);
      auVar16 = _vmaddbc(auVar21,auVar22);
      auStack_150 = _sqc2(auVar16);
      piVar9 = (int *)((uint)*pbVar17 * 0xc + iVar3);
      auVar16 = _pextlw((long)piVar9[2],(long)*piVar9);
      auVar16 = _pextlw((long)piVar9[1],auVar16._0_8_);
      auVar21 = _qmtc2(auVar16._0_4_);
      _sqc2(auVar21);
      piVar9 = (int *)((uint)pbVar17[1] * 0xc + iVar3);
      auVar16 = _pextlw((long)piVar9[2],(long)*piVar9);
      auVar16 = _pextlw((long)piVar9[1],auVar16._0_8_);
      auVar16 = _qmtc2(auVar16._0_4_);
      auVar22 = _vsub(auVar16,auVar21);
      piVar9 = (int *)((uint)pbVar17[2] * 0xc + iVar3);
      auVar13._0_8_ = (long)*piVar9;
      auVar16 = _pextlw((long)piVar9[2],auVar13._0_8_);
      auStack_c0 = _pextlw((long)piVar9[1],auVar16._0_8_);
      auVar16 = _qmtc2(auStack_c0._0_4_);
      auVar16 = _vsub(auVar16,auVar21);
      _vopmula(auVar22,auVar16);
      auVar21 = _vopmsub(auVar16,auVar22);
      auVar16 = _vmul(auVar21,auVar21);
      _vaddabc(auVar16,auVar16);
      auVar16 = _vmaddbc(auVar23,auVar16);
      uStack_ec = 0;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar16);
      uVar24 = _vwaitq();
      auVar16 = _vmulq(auVar21,uVar24);
      auStack_140 = _sqc2(auVar16);
      pbStack_f0 = pbVar17;
      uStack_d0 = uStack_100;
      uStack_cc = uStack_fc;
      uStack_c8 = uStack_f8;
      lVar7 = (*pcStack_b0)(auStack_150,uStack_ac);
      if (lVar7 == 0) {
        return 0;
      }
      uStack_a8 = 1;
      in_vf24w = extraout_vf24w_00;
    }
    if ((bVar1) || (bVar1 = true, pbVar17[3] == 0xff)) {
      bVar1 = false;
      iVar19 = 0;
      iVar18 = 2;
      pbVar17 = pbVar17 + bVar2;
    }
    else {
      iVar19 = 2;
      iVar18 = 3;
    }
    pbVar5 = pbVar17 + iVar19;
  } while( true );
}


// ==== FUN_0026d6f0 @ 0026d6f0 ====

/* WARNING: Removing unreachable block (ram,0x0026d7c4) */

undefined4 FUN_0026d6f0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  undefined4 *puVar18;
  undefined1 in_a1_qw [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 in_t0_udw;
  byte *pbVar25;
  byte *pbVar26;
  undefined4 in_vi1;
  undefined1 in_vf0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 in_vf8w;
  undefined4 extraout_vf8w;
  undefined4 extraout_vf8w_00;
  undefined4 extraout_vf8w_01;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  byte *pbStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined1 auStack_f0 [16];
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  
  uStack_d0 = (undefined4)param_1;
  uStack_cc = (undefined4)((ulong)param_1 >> 0x20);
  uStack_b0 = 0;
  iVar11 = 1;
  do {
    bVar1 = iVar11 != -1;
    iVar11 = iVar11 + -1;
  } while (bVar1);
  puVar18 = in_a1_qw._0_4_;
  bVar2 = *(byte *)(puVar18 + 3);
  pbVar25 = (byte *)*puVar18;
  iVar11 = puVar18[1];
  pbVar26 = pbVar25 + (uint)bVar2 * (uint)*(byte *)((int)puVar18 + 0xd);
  uStack_c8 = in_a0_udw;
  uStack_c4 = in_register_0000004c;
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    auVar27._8_4_ = in_a0_udw;
    auVar27._0_8_ = param_1;
    auVar27._12_4_ = in_register_0000004c;
    _lqc2(auVar27);
    do {
      uVar13 = FUN_0029c210(0);
      in_a1_qw._0_8_ = 1;
      lVar14 = FUN_0029c5e8(uVar13,1,0);
      in_vf8w = extraout_vf8w;
    } while (lVar14 != 0);
  }
  auVar28._4_4_ = uStack_cc;
  auVar28._0_4_ = uStack_d0;
  auVar28._8_4_ = uStack_c8;
  auVar28._12_4_ = uStack_c4;
  auVar27 = _lqc2(auVar28);
  auVar27 = _vmulbc(auVar27,auVar27);
  _lqc2(auStack_c0);
  auStack_f0 = _sqc2(auVar27);
  auVar29 = _qmtc2(auStack_f0._12_4_);
  auVar28 = _vaddbc(in_vf0,auVar29);
  _vmove(auVar28);
  auVar27 = _vaddbc(in_vf0,auVar29);
  _sqc2(auVar28);
  _sqc2(auVar27);
  auVar27 = _vaddbc(in_vf0,auVar29);
  auStack_c0 = _sqc2(auVar27);
  if (pbVar25 < pbVar26) {
    bVar3 = *pbVar25;
    while( true ) {
      auVar19._8_8_ = in_a1_qw._8_8_;
      puVar16 = (undefined8 *)((uint)bVar3 * 0xc + iVar11);
      puVar15 = (undefined8 *)((uint)pbVar25[1] * 0xc + iVar11);
      puVar12 = (undefined8 *)((uint)pbVar25[2] * 0xc + iVar11);
      auVar9._4_4_ = uStack_cc;
      auVar9._0_4_ = uStack_d0;
      auVar9._8_4_ = uStack_c8;
      auVar9._12_4_ = uStack_c4;
      _lqc2(auVar9);
      _lqc2(auStack_c0);
      auVar19._4_4_ = 0;
      auVar19._0_4_ = *(uint *)(puVar16 + 1);
      auVar29._8_8_ = in_t0_udw;
      auVar29._0_8_ = *puVar16;
      auVar27 = _pcpyld(auVar19,auVar29);
      _qmtc2(auVar27._0_4_);
      auVar20._8_8_ = auVar27._8_8_;
      auVar20._4_4_ = 0;
      auVar20._0_4_ = *(uint *)(puVar15 + 1);
      auVar4._8_8_ = in_t0_udw;
      auVar4._0_8_ = *puVar15;
      auVar27 = _pcpyld(auVar20,auVar4);
      _qmtc2(auVar27._0_4_);
      auVar21._8_8_ = auVar27._8_8_;
      auVar21._4_4_ = 0;
      auVar21._0_4_ = *(uint *)(puVar12 + 1);
      auVar5._8_8_ = in_t0_udw;
      auVar5._0_8_ = *puVar12;
      in_a1_qw = _pcpyld(auVar21,auVar5);
      _qmtc2(in_a1_qw._0_4_);
      _vcallms(0x60);
      uVar17 = _cfc2(in_vi1);
      auVar27 = _qmfc2(in_vf8w);
      uStack_e0 = (undefined2)uVar17;
      if ((uVar17 & 0xffff) != 0) break;
LAB_0026d904:
      if (pbVar25[3] != 0xff) {
        auVar22._8_8_ = in_a1_qw._8_8_;
        puVar16 = (undefined8 *)((uint)pbVar25[2] * 0xc + iVar11);
        puVar15 = (undefined8 *)((uint)pbVar25[1] * 0xc + iVar11);
        puVar12 = (undefined8 *)((uint)pbVar25[3] * 0xc + iVar11);
        auVar10._4_4_ = uStack_cc;
        auVar10._0_4_ = uStack_d0;
        auVar10._8_4_ = uStack_c8;
        auVar10._12_4_ = uStack_c4;
        _lqc2(auVar10);
        _lqc2(auStack_c0);
        auVar22._4_4_ = 0;
        auVar22._0_4_ = *(uint *)(puVar16 + 1);
        auVar6._8_8_ = in_t0_udw;
        auVar6._0_8_ = *puVar16;
        auVar27 = _pcpyld(auVar22,auVar6);
        _qmtc2(auVar27._0_4_);
        auVar23._8_8_ = auVar27._8_8_;
        auVar23._4_4_ = 0;
        auVar23._0_4_ = *(uint *)(puVar15 + 1);
        auVar7._8_8_ = in_t0_udw;
        auVar7._0_8_ = *puVar15;
        auVar27 = _pcpyld(auVar23,auVar7);
        _qmtc2(auVar27._0_4_);
        auVar24._8_8_ = auVar27._8_8_;
        auVar24._4_4_ = 0;
        auVar24._0_4_ = *(uint *)(puVar12 + 1);
        auVar8._8_8_ = in_t0_udw;
        auVar8._0_8_ = *puVar12;
        in_a1_qw = _pcpyld(auVar24,auVar8);
        _qmtc2(in_a1_qw._0_4_);
        _vcallms(0x60);
        uVar17 = _cfc2(in_vi1);
        auVar27 = _qmfc2(in_vf8w);
        uStack_de = (undefined2)uVar17;
        if ((uVar17 & 0xffff) != 0) {
          uStack_150 = auVar27._0_4_;
          uStack_14c = auVar27._4_4_;
          uStack_148 = auVar27._8_4_;
          uStack_144 = auVar27._12_4_;
          uVar13 = in_a1_qw._8_8_;
          uStack_fc = 1;
          pbStack_100 = pbVar25;
          iStack_f8 = iVar11;
          lVar14 = (*param_2)(auStack_160,param_3,auVar27._0_8_,*(undefined4 *)puVar12,*puVar12);
          in_a1_qw._8_8_ = uVar13;
          in_a1_qw._0_8_ = 1;
          if (lVar14 == 0) goto LAB_0026d7bc;
          uStack_b0 = 1;
          in_vf8w = extraout_vf8w_01;
        }
      }
      pbVar25 = pbVar25 + bVar2;
      if (pbVar26 <= pbVar25) {
        return uStack_b0;
      }
      bVar3 = *pbVar25;
    }
    uStack_150 = auVar27._0_4_;
    uStack_14c = auVar27._4_4_;
    uStack_148 = auVar27._8_4_;
    uStack_144 = auVar27._12_4_;
    in_a1_qw._0_8_ = param_3;
    uStack_fc = 0;
    pbStack_100 = pbVar25;
    iStack_f8 = iVar11;
    lVar14 = (*param_2)(auStack_160,param_3,auVar27._0_8_,*(undefined4 *)puVar12,*puVar12);
    if (lVar14 != 0) {
      uStack_b0 = 1;
      in_vf8w = extraout_vf8w_00;
      goto LAB_0026d904;
    }
LAB_0026d7bc:
    uStack_b0 = 0;
  }
  return uStack_b0;
}


// ==== FUN_0026da20 @ 0026da20 ====

undefined8 FUN_0026da20(undefined4 param_1,undefined1 (*param_2) [16])

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
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
  float fStack_4;
  
  auVar10 = _qmtc2(param_1);
  auVar9 = _vadd(in_vf0,in_vf0);
  auVar3 = _lqc2(param_2[1]);
  auVar5 = _qmtc2(0x7f7fffff);
  auVar2 = _lqc2(*param_2);
  auVar12 = _vsub(auVar10,auVar3);
  auVar11 = _vsub(auVar10,auVar2);
  auVar4 = _vmove(auVar12);
  auVar3 = _vmini(auVar4,auVar9);
  auVar2 = _pextlw(0x3f800000,0x3f800000);
  auVar6 = _vmove(auVar11);
  auVar2 = _pextlw(0x3f800000,auVar2._0_8_);
  auVar3 = _vabs(auVar3);
  auVar8 = _qmtc2(auVar2._0_4_);
  auVar7 = _vmax(auVar6,auVar9);
  auVar2 = _vmulbc(auVar3,auVar5);
  auVar5 = _vmulbc(auVar7,auVar5);
  auVar2 = _vmini(auVar2,auVar8);
  auVar3 = _vmul(auVar4,auVar4);
  auVar2 = _vmul(auVar3,auVar2);
  auVar3 = _vmove(auVar9);
  auVar3 = _vadd(auVar3,auVar2);
  auVar4 = _vmini(auVar5,auVar8);
  auVar2 = _vmul(auVar6,auVar6);
  _sqc2(auVar9);
  auVar4 = _vmul(auVar2,auVar4);
  auVar2 = _vmulbc(auVar10,auVar10);
  auVar4 = _vadd(auVar3,auVar4);
  auVar2 = _sqc2(auVar2);
  auVar3 = _vaddbc(auVar4,auVar4);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar3 = _qmfc2(auVar3._0_4_);
  fStack_4 = auVar2._12_4_;
  uVar1 = 0;
  if (auVar3._0_4_ < fStack_4) {
    _vsubbc(auVar12,auVar10);
    auVar5 = _vsub(in_vf0,in_vf0);
    auVar2 = _vaddbc(in_vf0,in_vf0);
    _vaddbc(auVar11,auVar10);
    auVar4 = _vsubbc(auVar5,in_vf0);
    auVar2 = _qmfc2(auVar2._0_4_);
    auVar3 = _psraw(auVar2,0x1f);
    auVar2 = _qmfc2(auVar4._0_4_);
    auVar2 = _psraw(auVar2,0x1f);
    _sqc2(auVar5);
    auVar4 = _pcpyud(auVar3,in_zero_qw);
    auVar5 = _pcpyud(auVar2,in_zero_qw);
    uVar1 = 1;
    if (((auVar2._0_8_ & auVar5._0_8_) != 0) && (uVar1 = 2, auVar3._0_8_ != 0 || auVar4._0_8_ != 0))
    {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_0026db20 @ 0026db20 ====

/* WARNING: Removing unreachable block (ram,0x0026db88) */
/* WARNING: Removing unreachable block (ram,0x0026db90) */

ulong FUN_0026db20(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 in_vi1;
  
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    do {
      uVar1 = FUN_0029c210(0);
      lVar2 = FUN_0029c5e8(uVar1,1,0);
    } while (lVar2 != 0);
  }
  _lqc2(*param_2);
  _lqc2(param_2[1]);
  _lqc2(param_2[2]);
  _lqc2(param_2[3]);
  _lqc2(param_2[4]);
  _lqc2(param_2[5]);
  _lqc2(param_2[6]);
  _lqc2(param_2[7]);
  _qmtc2(param_1[8]);
  _qmtc2(param_1[0xc]);
  _qmtc2(param_1[0x10]);
  _qmtc2(param_1[0x14]);
  _qmtc2(*param_1);
  _qmtc2(param_1[4]);
  _vcallms(0x880);
  uVar3 = _cfc2(in_vi1);
  return uVar3 & 0xffff;
}


// ==== FUN_0026dc88 @ 0026dc88 ====

/* WARNING: Removing unreachable block (ram,0x0026ddd4) */

bool FUN_0026dc88(undefined1 (*param_1) [16],undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_zero_qw [16];
  int iVar10;
  ushort *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  ushort *puVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte *pbVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined1 in_s5_qw [16];
  byte *pbVar33;
  byte *pbVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 in_vi1;
  undefined4 in_vi2;
  undefined1 in_vf0 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_vf8 [16];
  undefined1 extraout_vf8 [16];
  undefined1 in_vf9 [16];
  undefined1 extraout_vf9 [16];
  undefined1 in_vf10 [16];
  undefined1 extraout_vf10 [16];
  undefined1 in_vf24 [16];
  undefined1 extraout_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 extraout_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 extraout_vf26 [16];
  undefined1 in_vf27 [16];
  undefined1 extraout_vf27 [16];
  undefined4 uVar44;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [12];
  undefined1 auStack_140 [16];
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
  int iStack_e8;
  undefined1 auStack_d0 [16];
  
  iVar10 = 1;
  do {
    bVar1 = iVar10 != -1;
    iVar10 = iVar10 + -1;
  } while (bVar1);
  auVar38 = _qmtc2(0x43fa0000);
  bVar2 = *(byte *)((int)param_2 + 0xd);
  iStack_e8 = 0;
  auStack_150._8_4_ = 0;
  pbVar34 = (byte *)0x0;
  auStack_150._4_4_ = 0;
  pbVar31 = (byte *)*param_2;
  pbVar33 = pbVar31 + (uint)bVar2 * (uint)*(byte *)((int)param_2 + 0xe);
  auVar15 = _pextlw((long)(int)(float)(int)*(char *)(param_2 + 3),
                    (long)(int)(float)(int)*(char *)((int)param_2 + 10));
  auVar15 = _pextlw((long)(int)(float)(int)*(char *)((int)param_2 + 0xb),auVar15._0_8_);
  auVar15 = _qmtc2(auVar15._0_4_);
  auVar15 = _vmulbc(auVar15,auVar38);
  auVar15 = _sqc2(auVar15);
  fVar36 = (float)param_3[0x14];
  iVar10 = param_2[1];
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    do {
      uVar12 = FUN_0029c210(0);
      lVar13 = FUN_0029c5e8(uVar12,1,0);
      in_vf8 = extraout_vf8;
      in_vf9 = extraout_vf9;
      in_vf10 = extraout_vf10;
      in_vf24 = extraout_vf24;
      in_vf25 = extraout_vf25;
      in_vf26 = extraout_vf26;
      in_vf27 = extraout_vf27;
    } while (lVar13 != 0);
  }
  _lqc2(auStack_d0);
  auVar15 = _lqc2(auVar15);
  iVar29 = 0;
  auVar15 = _vadd(in_vf0,auVar15);
  auVar15 = _sqc2(auVar15);
  auVar38 = _qmtc2(0x3c7a0000);
  _lqc2(auVar15);
  auVar15 = _vmr32(auVar38);
  auVar15 = _sqc2(auVar15);
  puVar19 = (ushort *)(iVar10 + (uint)pbVar31[1] * 6);
  puVar11 = (ushort *)(iVar10 + (uint)*pbVar31 * 6);
  puVar16 = (ushort *)(iVar10 + (uint)pbVar31[2] * 6);
  _ctc2(puVar11);
  _lqc2(*param_1);
  _lqc2(param_1[1]);
  _qmtc2(auVar15._0_4_);
  auVar38._2_2_ = 0;
  auVar38._0_2_ = *puVar11;
  auVar40._2_6_ = 0;
  auVar40._0_2_ = puVar11[2];
  auVar40._8_8_ = in_a3_udw;
  auVar38._4_2_ = puVar11[1];
  auVar38._6_2_ = 0;
  auVar38._8_8_ = in_a2_udw;
  auVar38 = _pcpyld(auVar40,auVar38);
  auVar40 = _qmtc2(auVar38._0_4_);
  auVar41._8_8_ = auVar38._8_8_;
  auVar42._2_2_ = 0;
  auVar42._0_2_ = *puVar19;
  auVar41._2_6_ = 0;
  auVar41._0_2_ = puVar19[2];
  auVar42._4_2_ = puVar19[1];
  auVar42._6_2_ = 0;
  auVar42._8_8_ = in_a2_udw;
  auVar38 = _pcpyld(auVar41,auVar42);
  auVar42 = _qmtc2(auVar38._0_4_);
  auVar43._8_8_ = auVar38._8_8_;
  auVar39._2_2_ = 0;
  auVar39._0_2_ = *puVar16;
  auVar43._2_6_ = 0;
  auVar43._0_2_ = puVar16[2];
  auVar39._4_2_ = puVar16[1];
  auVar39._6_2_ = 0;
  auVar39._8_8_ = in_a2_udw;
  auVar38 = _pcpyld(auVar43,auVar39);
  auVar38 = _qmtc2(auVar38._0_4_);
  _vcallms(0x388);
  if (pbVar31[3] != 0xff) goto LAB_0026e194;
  iVar28 = 0;
  iVar18 = 0;
  iVar17 = 2;
  pbVar32 = pbVar31 + bVar2;
  while( true ) {
    bVar1 = false;
    uVar35 = auStack_150._8_4_;
    uVar37 = auStack_150._4_4_;
    pbVar27 = pbVar31;
    iVar30 = iVar29;
    if (pbVar33 <= pbVar32) break;
    auVar20._8_8_ = auVar15._8_8_;
    puVar19 = (ushort *)(iVar10 + (uint)pbVar32[1] * 6);
    puVar11 = (ushort *)(iVar10 + (uint)pbVar32[iVar18] * 6);
    puVar16 = (ushort *)(iVar10 + (uint)pbVar32[iVar17] * 6);
    auVar15._2_2_ = 0;
    auVar15._0_2_ = *puVar11;
    auVar20._2_6_ = 0;
    auVar20._0_2_ = puVar11[2];
    auVar15._4_2_ = puVar11[1];
    auVar15._6_2_ = 0;
    auVar15._8_8_ = in_a2_udw;
    auVar15 = _pcpyld(auVar20,auVar15);
    in_vf8 = _qmtc2(auVar15._0_4_);
    auVar21._8_8_ = auVar15._8_8_;
    auVar3._2_2_ = 0;
    auVar3._0_2_ = *puVar19;
    auVar21._2_6_ = 0;
    auVar21._0_2_ = puVar19[2];
    auVar3._4_2_ = puVar19[1];
    auVar3._6_2_ = 0;
    auVar3._8_8_ = in_a2_udw;
    auVar15 = _pcpyld(auVar21,auVar3);
    in_vf9 = _qmtc2(auVar15._0_4_);
    auVar22._8_8_ = auVar15._8_8_;
    auVar23._2_2_ = 0;
    auVar23._0_2_ = *puVar16;
    auVar22._2_6_ = 0;
    auVar22._0_2_ = puVar16[2];
    auVar23._4_2_ = puVar16[1];
    auVar23._6_2_ = 0;
    auVar23._8_8_ = in_a2_udw;
    auVar23 = _pcpyld(auVar22,auVar23);
    in_vf10 = _qmtc2(auVar23._0_4_);
    _vcallms(0x550);
    uVar12 = _cfc2(in_vi1);
    auVar15 = _sqc2(auVar40);
    auVar39 = _sqc2(auVar42);
    auVar41 = _sqc2(auVar38);
    auVar43 = _sqc2(in_vf24);
    auVar3 = _sqc2(in_vf25);
    auStack_150._0_4_ = auVar43._0_4_;
    bVar1 = true;
    if (((short)uVar12 != 0) && ((float)auStack_150._0_4_ < fVar36)) {
      auStack_180._8_4_ = auVar15._8_4_;
      auStack_180._12_4_ = auVar15._12_4_;
      auStack_170._0_4_ = auVar39._0_4_;
      auStack_170._4_4_ = auVar39._4_4_;
      auStack_170._8_4_ = auVar39._8_4_;
      auStack_170._12_4_ = auVar39._12_4_;
      auStack_160._0_4_ = auVar41._0_4_;
      auStack_160._4_4_ = auVar41._4_4_;
      auStack_160._8_4_ = auVar41._8_4_;
      auStack_160._12_4_ = auVar41._12_4_;
      auStack_150._4_4_ = auVar43._4_4_;
      auStack_150._8_4_ = auVar43._8_4_;
      uStack_130 = auVar15._0_4_;
      uStack_12c = auVar15._4_4_;
      uStack_128 = auStack_180._8_4_;
      uStack_124 = auStack_180._12_4_;
      in_s5_qw = _por(in_zero_qw,auVar3);
      uStack_120 = auStack_170._0_4_;
      uStack_11c = auStack_170._4_4_;
      uStack_118 = auStack_170._8_4_;
      uStack_114 = auStack_170._12_4_;
      uStack_110 = auStack_160._0_4_;
      uStack_10c = auStack_160._4_4_;
      uStack_108 = auStack_160._8_4_;
      uStack_104 = auStack_160._12_4_;
      fVar36 = (float)auStack_150._0_4_;
      pbVar34 = pbVar31;
      iStack_e8 = iVar29;
    }
    if ((iVar28 == 0) && (iVar29 = 1, pbVar32[3] != 0xff)) {
      iVar18 = 2;
      iVar17 = 3;
      pbVar31 = pbVar32;
    }
    else {
      iVar29 = 0;
      iVar18 = 0;
      iVar17 = 2;
      pbVar31 = pbVar32 + bVar2;
    }
    uVar35 = auStack_150._8_4_;
    uVar37 = auStack_150._4_4_;
    pbVar27 = pbVar32;
    iVar30 = iVar28;
    if (pbVar33 <= pbVar31) break;
    auVar24._8_8_ = auVar23._8_8_;
    puVar19 = (ushort *)(iVar10 + (uint)pbVar31[1] * 6);
    puVar11 = (ushort *)(iVar10 + (uint)pbVar31[iVar18] * 6);
    puVar16 = (ushort *)(iVar10 + (uint)pbVar31[iVar17] * 6);
    auVar4._2_2_ = 0;
    auVar4._0_2_ = *puVar11;
    auVar24._2_6_ = 0;
    auVar24._0_2_ = puVar11[2];
    auVar4._4_2_ = puVar11[1];
    auVar4._6_2_ = 0;
    auVar4._8_8_ = in_a2_udw;
    auVar15 = _pcpyld(auVar24,auVar4);
    auVar40 = _qmtc2(auVar15._0_4_);
    auVar25._8_8_ = auVar15._8_8_;
    auVar5._2_2_ = 0;
    auVar5._0_2_ = *puVar19;
    auVar25._2_6_ = 0;
    auVar25._0_2_ = puVar19[2];
    auVar5._4_2_ = puVar19[1];
    auVar5._6_2_ = 0;
    auVar5._8_8_ = in_a2_udw;
    auVar15 = _pcpyld(auVar25,auVar5);
    auVar42 = _qmtc2(auVar15._0_4_);
    auVar26._8_8_ = auVar15._8_8_;
    auVar6._2_2_ = 0;
    auVar6._0_2_ = *puVar16;
    auVar26._2_6_ = 0;
    auVar26._0_2_ = puVar16[2];
    auVar6._4_2_ = puVar16[1];
    auVar6._6_2_ = 0;
    auVar6._8_8_ = in_a2_udw;
    auVar15 = _pcpyld(auVar26,auVar6);
    auVar38 = _qmtc2(auVar15._0_4_);
    _vcallms(0x390);
    uVar14 = _cfc2(in_vi2);
    auVar39 = _sqc2(in_vf8);
    auVar41 = _sqc2(in_vf9);
    auVar43 = _sqc2(in_vf10);
    auVar3 = _sqc2(in_vf26);
    auVar23 = _sqc2(in_vf27);
    auStack_150._0_4_ = auVar3._0_4_;
    if (((uVar14 & 0xffff) != 0) && ((float)auStack_150._0_4_ < fVar36)) {
      auStack_180._8_4_ = auVar39._8_4_;
      auStack_180._12_4_ = auVar39._12_4_;
      auStack_170._0_4_ = auVar41._0_4_;
      auStack_170._4_4_ = auVar41._4_4_;
      auStack_170._8_4_ = auVar41._8_4_;
      auStack_170._12_4_ = auVar41._12_4_;
      auStack_160._0_4_ = auVar43._0_4_;
      auStack_160._4_4_ = auVar43._4_4_;
      auStack_160._8_4_ = auVar43._8_4_;
      auStack_160._12_4_ = auVar43._12_4_;
      auStack_150._4_4_ = auVar3._4_4_;
      auStack_150._8_4_ = auVar3._8_4_;
      uStack_130 = auVar39._0_4_;
      uStack_12c = auVar39._4_4_;
      uStack_128 = auStack_180._8_4_;
      uStack_124 = auStack_180._12_4_;
      in_s5_qw = _por(in_zero_qw,auVar23);
      uStack_120 = auStack_170._0_4_;
      uStack_11c = auStack_170._4_4_;
      uStack_118 = auStack_170._8_4_;
      uStack_114 = auStack_170._12_4_;
      uStack_110 = auStack_160._0_4_;
      uStack_10c = auStack_160._4_4_;
      uStack_108 = auStack_160._8_4_;
      uStack_104 = auStack_160._12_4_;
      fVar36 = (float)auStack_150._0_4_;
      pbVar34 = pbVar32;
      iStack_e8 = iVar28;
    }
    if ((iVar29 == 0) && (pbVar31[3] != 0xff)) {
LAB_0026e194:
      iVar28 = 1;
      iVar18 = 2;
      iVar17 = 3;
      pbVar32 = pbVar31;
    }
    else {
      iVar28 = 0;
      iVar18 = 0;
      iVar17 = 2;
      pbVar32 = pbVar31 + bVar2;
    }
  }
  if (bVar1) {
    uVar14 = _cfc2(in_vi2);
    auStack_180 = _sqc2(in_vf8);
    auStack_170 = _sqc2(in_vf9);
    auStack_160 = _sqc2(in_vf10);
    auVar15 = _sqc2(in_vf26);
    auStack_150 = auVar15._0_12_;
    auStack_140 = _sqc2(in_vf27);
  }
  else {
    uVar14 = _cfc2(in_vi1);
    auStack_180 = _sqc2(auVar40);
    auStack_170 = _sqc2(auVar42);
    auStack_160 = _sqc2(auVar38);
    auVar15 = _sqc2(in_vf24);
    auStack_150 = auVar15._0_12_;
    auStack_140 = _sqc2(in_vf25);
  }
  if (((uVar14 & 0xffff) != 0) && ((float)auStack_150._0_4_ < fVar36)) {
    uStack_130 = auStack_180._0_4_;
    uStack_12c = auStack_180._4_4_;
    uStack_128 = auStack_180._8_4_;
    uStack_124 = auStack_180._12_4_;
    in_s5_qw = _por(in_zero_qw,auStack_140);
    uStack_120 = auStack_170._0_4_;
    uStack_11c = auStack_170._4_4_;
    uStack_118 = auStack_170._8_4_;
    uStack_114 = auStack_170._12_4_;
    uStack_110 = auStack_160._0_4_;
    uStack_10c = auStack_160._4_4_;
    uStack_108 = auStack_160._8_4_;
    uStack_104 = auStack_160._12_4_;
    uVar35 = auStack_150._8_4_;
    fVar36 = (float)auStack_150._0_4_;
    uVar37 = auStack_150._4_4_;
    pbVar34 = pbVar27;
    iStack_e8 = iVar30;
  }
  auVar7._4_4_ = uStack_12c;
  auVar7._0_4_ = uStack_130;
  auVar7._8_4_ = uStack_128;
  auVar7._12_4_ = uStack_124;
  auVar15 = _lqc2(auVar7);
  if (pbVar34 != (byte *)0x0) {
    auVar41 = _vaddbc(in_vf0,in_vf0);
    auVar8._4_4_ = uStack_11c;
    auVar8._0_4_ = uStack_120;
    auVar8._8_4_ = uStack_118;
    auVar8._12_4_ = uStack_114;
    auVar43 = _lqc2(auVar8);
    auVar9._4_4_ = uStack_10c;
    auVar9._0_4_ = uStack_110;
    auVar9._8_4_ = uStack_108;
    auVar9._12_4_ = uStack_104;
    auVar40 = _lqc2(auVar9);
    auVar42 = _vsub(auVar43,auVar15);
    auVar38 = _vsub(auVar40,auVar15);
    *param_3 = in_s5_qw._0_4_;
    param_3[1] = in_s5_qw._4_4_;
    param_3[2] = in_s5_qw._8_4_;
    param_3[3] = in_s5_qw._12_4_;
    _vopmula(auVar42,auVar38);
    auVar39 = _vopmsub(auVar38,auVar42);
    param_3[0x14] = fVar36;
    auVar42 = _vmul(auVar39,auVar39);
    auVar38 = _sqc2(auVar40);
    *(undefined1 (*) [16])(param_3 + 0x10) = auVar38;
    _vaddabc(auVar42,auVar42);
    auVar38 = _vmaddbc(auVar41,auVar42);
    param_3[0x18] = pbVar34;
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar38);
    uVar44 = _vwaitq();
    auVar38 = _vmulq(auVar39,uVar44);
    param_3[0x1a] = iVar10;
    auVar38 = _sqc2(auVar38);
    *(undefined1 (*) [16])(param_3 + 4) = auVar38;
    param_3[0x15] = uVar37;
    param_3[0x19] = iStack_e8;
    param_3[0x16] = uVar35;
    auVar15 = _sqc2(auVar15);
    *(undefined1 (*) [16])(param_3 + 8) = auVar15;
    auVar15 = _sqc2(auVar43);
    *(undefined1 (*) [16])(param_3 + 0xc) = auVar15;
  }
  return pbVar34 != (byte *)0x0;
}


// ==== FUN_0026e318 @ 0026e318 ====

/* WARNING: Removing unreachable block (ram,0x0026e40c) */

bool FUN_0026e318(undefined1 (*param_1) [16],undefined4 *param_2)

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
  bool bVar10;
  bool bVar11;
  ushort *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  int iVar17;
  ulong in_v1_udw;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ushort *puVar22;
  int iVar23;
  ushort *puVar24;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 in_t0_udw;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte *pbVar31;
  byte *pbVar32;
  undefined4 in_vi1;
  undefined4 in_vi2;
  undefined1 in_vf0 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_90 [16];
  
  auVar33 = _qmtc2(0x43fa0000);
  bVar1 = *(byte *)((int)param_2 + 0xd);
  pbVar31 = (byte *)*param_2;
  iVar2 = param_2[1];
  pbVar32 = pbVar31 + (uint)bVar1 * (uint)*(byte *)((int)param_2 + 0xe);
  auVar16 = _pextlw((long)(int)(float)(int)*(char *)(param_2 + 3),
                    (long)(int)(float)(int)*(char *)((int)param_2 + 10));
  auVar16 = _pextlw((long)(int)(float)(int)*(char *)((int)param_2 + 0xb),auVar16._0_8_);
  auVar16 = _qmtc2(auVar16._0_4_);
  auVar16 = _vmulbc(auVar16,auVar33);
  auVar16 = _sqc2(auVar16);
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    _lqc2(auStack_90);
    do {
      uVar13 = FUN_0029c210(0);
      lVar14 = FUN_0029c5e8(uVar13,1,0);
    } while (lVar14 != 0);
  }
  _lqc2(auStack_90);
  auVar16 = _lqc2(auVar16);
  auVar16 = _vadd(in_vf0,auVar16);
  auVar16 = _sqc2(auVar16);
  auVar33 = _qmtc2(0x3c7a0000);
  _lqc2(auVar16);
  auVar16 = _vmr32(auVar33);
  auVar16 = _sqc2(auVar16);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = in_v1_udw;
  auVar21 = auVar21 << 0x40;
  puVar24 = (ushort *)(iVar2 + (uint)*pbVar31 * 6);
  puVar12 = (ushort *)(iVar2 + (uint)pbVar31[1] * 6);
  puVar22 = (ushort *)(iVar2 + (uint)pbVar31[2] * 6);
  auStack_90._0_4_ = auVar16._0_4_;
  _ctc2(puVar24);
  _lqc2(*param_1);
  _lqc2(param_1[1]);
  _qmtc2(auStack_90._0_4_);
  auVar16._2_2_ = 0;
  auVar16._0_2_ = *puVar24;
  auVar28._2_6_ = 0;
  auVar28._0_2_ = puVar24[2];
  auVar28._8_8_ = in_t0_udw;
  auVar16._4_2_ = puVar24[1];
  auVar16._6_2_ = 0;
  auVar16._8_8_ = in_a2_udw;
  auVar16 = _pcpyld(auVar28,auVar16);
  _qmtc2(auVar16._0_4_);
  auVar29._8_8_ = auVar16._8_8_;
  auVar33._2_2_ = 0;
  auVar33._0_2_ = *puVar12;
  auVar29._2_6_ = 0;
  auVar29._0_2_ = puVar12[2];
  auVar33._4_2_ = puVar12[1];
  auVar33._6_2_ = 0;
  auVar33._8_8_ = in_a2_udw;
  auVar16 = _pcpyld(auVar29,auVar33);
  _qmtc2(auVar16._0_4_);
  auVar30._8_8_ = auVar16._8_8_;
  auVar3._2_2_ = 0;
  auVar3._0_2_ = *puVar22;
  auVar30._2_6_ = 0;
  auVar30._0_2_ = puVar22[2];
  auVar3._4_2_ = puVar22[1];
  auVar3._6_2_ = 0;
  auVar3._8_8_ = in_a2_udw;
  auVar16 = _pcpyld(auVar30,auVar3);
  _qmtc2(auVar16._0_4_);
  _vcallms(0x388);
  if (pbVar31[3] != 0xff) goto LAB_0026e6f0;
  pbVar31 = pbVar31 + bVar1;
  bVar10 = false;
  iVar23 = 0;
  iVar17 = 2;
  while( true ) {
    bVar11 = false;
    if (pbVar32 <= pbVar31) break;
    puVar24 = (ushort *)(iVar2 + (uint)pbVar31[iVar23] * 6);
    puVar22 = (ushort *)(iVar2 + (uint)pbVar31[iVar17] * 6);
    puVar12 = (ushort *)(iVar2 + (uint)pbVar31[1] * 6);
    auVar4._2_2_ = 0;
    auVar4._0_2_ = *puVar24;
    auVar25._2_6_ = 0;
    auVar25._0_2_ = puVar24[2];
    auVar25._8_8_ = in_a3_udw;
    auVar4._4_2_ = puVar24[1];
    auVar4._6_2_ = 0;
    auVar4._8_8_ = in_a2_udw;
    auVar16 = _pcpyld(auVar25,auVar4);
    _qmtc2(auVar16._0_4_);
    auVar26._8_8_ = auVar16._8_8_;
    auVar5._2_2_ = 0;
    auVar5._0_2_ = *puVar12;
    auVar26._2_6_ = 0;
    auVar26._0_2_ = puVar12[2];
    auVar5._4_2_ = puVar12[1];
    auVar5._6_2_ = 0;
    auVar5._8_8_ = in_a2_udw;
    auVar16 = _pcpyld(auVar26,auVar5);
    _qmtc2(auVar16._0_4_);
    auVar27._8_8_ = auVar16._8_8_;
    auVar6._2_2_ = 0;
    auVar6._0_2_ = *puVar22;
    auVar27._2_6_ = 0;
    auVar27._0_2_ = puVar22[2];
    auVar6._4_2_ = puVar22[1];
    auVar6._6_2_ = 0;
    auVar6._8_8_ = in_a2_udw;
    auVar16 = _pcpyld(auVar27,auVar6);
    _qmtc2(auVar16._0_4_);
    _vcallms(0x550);
    uVar15 = _cfc2(in_vi1);
    bVar11 = true;
    if ((uVar15 & 0xffff) != 0) {
      return true;
    }
    if ((bVar10) || (bVar10 = true, pbVar31[3] == 0xff)) {
      bVar10 = false;
      iVar23 = 0;
      iVar17 = 2;
      pbVar31 = pbVar31 + bVar1;
    }
    else {
      iVar23 = 2;
      iVar17 = 3;
    }
    if (pbVar32 <= pbVar31) break;
    in_a3_udw = auVar16._8_8_;
    puVar24 = (ushort *)(iVar2 + (uint)pbVar31[iVar23] * 6);
    puVar22 = (ushort *)(iVar2 + (uint)pbVar31[iVar17] * 6);
    puVar12 = (ushort *)(iVar2 + (uint)pbVar31[1] * 6);
    auVar7._2_2_ = 0;
    auVar7._0_2_ = *puVar24;
    auVar18._2_6_ = 0;
    auVar18._0_2_ = puVar24[2];
    auVar18._8_8_ = in_v1_udw;
    auVar7._4_2_ = puVar24[1];
    auVar7._6_2_ = 0;
    auVar7._8_8_ = in_a2_udw;
    auVar16 = _pcpyld(auVar18,auVar7);
    _qmtc2(auVar16._0_4_);
    auVar19._8_8_ = auVar16._8_8_;
    auVar8._2_2_ = 0;
    auVar8._0_2_ = *puVar12;
    auVar19._2_6_ = 0;
    auVar19._0_2_ = puVar12[2];
    auVar8._4_2_ = puVar12[1];
    auVar8._6_2_ = 0;
    auVar8._8_8_ = in_a2_udw;
    auVar16 = _pcpyld(auVar19,auVar8);
    _qmtc2(auVar16._0_4_);
    auVar20._8_8_ = auVar16._8_8_;
    auVar9._2_2_ = 0;
    auVar9._0_2_ = *puVar22;
    auVar20._2_6_ = 0;
    auVar20._0_2_ = puVar22[2];
    auVar9._4_2_ = puVar22[1];
    auVar9._6_2_ = 0;
    auVar9._8_8_ = in_a2_udw;
    auVar21 = _pcpyld(auVar20,auVar9);
    _qmtc2(auVar21._0_4_);
    _vcallms(0x390);
    uVar15 = _cfc2(in_vi2);
    if ((uVar15 & 0xffff) != 0) {
      return true;
    }
    if ((bVar10) || (pbVar31[3] == 0xff)) {
      bVar10 = false;
      iVar23 = 0;
      in_v1_udw = auVar21._8_8_;
      iVar17 = 2;
      pbVar31 = pbVar31 + bVar1;
    }
    else {
LAB_0026e6f0:
      bVar10 = true;
      iVar23 = 2;
      in_v1_udw = auVar21._8_8_;
      iVar17 = 3;
    }
  }
  if (bVar11) {
    uVar15 = _cfc2(in_vi2);
  }
  else {
    uVar15 = _cfc2(in_vi1);
  }
  return (uVar15 & 0xffff) != 0;
}


// ==== FUN_0026e770 @ 0026e770 ====

/* WARNING: Removing unreachable block (ram,0x0026e8b8) */

undefined4
FUN_0026e770(undefined1 (*param_1) [16],undefined4 *param_2,code *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined1 auVar12 [16];
  byte *pbVar13;
  int iVar14;
  undefined4 in_vi1;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  byte *pbStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  code *pcStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  byte *pbStack_100;
  int iStack_fc;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  uStack_108 = 0;
  iVar2 = 1;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar11 = 2;
  uStack_104 = (uint)*(byte *)((int)param_2 + 0xd);
  auVar15 = _qmtc2(0x43fa0000);
  auVar12._8_8_ = in_a2_udw;
  auVar12._0_8_ = 0x3ba100;
  pbVar13 = (byte *)*param_2;
  pbStack_100 = pbVar13 + uStack_104 * *(byte *)((int)param_2 + 0xe);
  auVar7 = _pextlw((long)(int)(float)(int)*(char *)(param_2 + 3),
                   (long)(int)(float)(int)*(char *)((int)param_2 + 10));
  auVar7 = _pextlw((long)(int)(float)(int)*(char *)((int)param_2 + 0xb),auVar7._0_8_);
  uStack_140 = auVar7._0_4_;
  auVar16 = _qmtc2(uStack_140);
  auVar15 = _vmulbc(auVar16,auVar15);
  auStack_f0 = _sqc2(auVar15);
  iVar2 = param_2[1];
  iStack_fc = 0;
  uStack_13c = auVar7._4_4_;
  uStack_138 = auVar7._8_4_;
  uStack_134 = auVar7._12_4_;
  pcStack_110 = param_3;
  uStack_10c = param_4;
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    _lqc2(auStack_f0);
    do {
      auStack_d0 = _sqc2(in_vf24);
      auStack_c0 = _sqc2(in_vf25);
      auStack_b0 = _sqc2(in_vf26);
      uVar5 = FUN_0029c210(0);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar12._8_8_;
      auVar12 = auVar7 << 0x40;
      lVar6 = FUN_0029c5e8(uVar5,1,0);
      in_vf24 = _lqc2(auStack_d0);
      in_vf25 = _lqc2(auStack_c0);
      in_vf26 = _lqc2(auStack_b0);
    } while (lVar6 != 0);
  }
  auVar7 = _lqc2(auStack_f0);
  _lqc2(auStack_e0);
  auVar7 = _vadd(in_vf0,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  _qmtc2(auVar7._0_4_);
  auVar7 = _qmtc2(0x3c7a0000);
  auVar7 = _vmr32(auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (pbVar13 < pbStack_100) {
    pbVar4 = pbVar13;
    do {
      puVar8 = (ushort *)((uint)*pbVar4 * 6 + iVar2);
      puVar10 = (ushort *)((uint)pbVar13[iVar11] * 6 + iVar2);
      puVar3 = (ushort *)((uint)pbVar13[1] * 6 + iVar2);
      _ctc2(puVar8);
      _lqc2(*param_1);
      _lqc2(param_1[1]);
      _qmtc2(auVar7._0_4_);
      auVar18._8_8_ = auVar12._8_8_;
      auVar15._2_2_ = 0;
      auVar15._0_2_ = *puVar8;
      auVar18._2_6_ = 0;
      auVar18._0_2_ = puVar8[2];
      auVar15._4_2_ = puVar8[1];
      auVar15._6_2_ = 0;
      auVar15._8_8_ = in_a1_udw;
      auVar12 = _pcpyld(auVar18,auVar15);
      _qmtc2(auVar12._0_4_);
      auVar19._8_8_ = auVar12._8_8_;
      auVar16._2_2_ = 0;
      auVar16._0_2_ = *puVar3;
      auVar19._2_6_ = 0;
      auVar19._0_2_ = puVar3[2];
      auVar16._4_2_ = puVar3[1];
      auVar16._6_2_ = 0;
      auVar16._8_8_ = in_a1_udw;
      auVar12 = _pcpyld(auVar19,auVar16);
      _qmtc2(auVar12._0_4_);
      auVar20._8_8_ = auVar12._8_8_;
      auVar17._2_2_ = 0;
      auVar17._0_2_ = *puVar10;
      auVar20._2_6_ = 0;
      auVar20._0_2_ = puVar10[2];
      auVar17._4_2_ = puVar10[1];
      auVar17._6_2_ = 0;
      auVar17._8_8_ = in_a1_udw;
      auVar12 = _pcpyld(auVar20,auVar17);
      _qmtc2(auVar12._0_4_);
      _vcallms(0x388);
      uVar9 = _cfc2(in_vi1);
      auVar15 = _qmfc2(in_vf24._0_4_);
      uStack_130 = (undefined2)uVar9;
      uStack_160 = auVar15._0_4_;
      uStack_15c = auVar15._4_4_;
      uStack_158 = auVar15._8_4_;
      uStack_114 = auVar15._12_4_;
      iVar11 = iStack_fc >> 0x1f;
      if ((uVar9 & 0xffff) != 0) {
        auVar20 = _qmtc2(0x447a0000);
        auVar16 = _qmtc2(0x43fa0000);
        iVar14 = param_2[1];
        auVar21 = _vaddbc(in_vf0,in_vf0);
        auVar15 = _pextlw((long)(int)(float)(int)*(char *)(param_2 + 3),
                          (long)(int)(float)(int)*(char *)((int)param_2 + 10));
        auVar15 = _pextlw((long)(int)(float)(int)*(char *)((int)param_2 + 0xb),auVar15._0_8_);
        uStack_140 = auVar15._0_4_;
        uStack_13c = auVar15._4_4_;
        uStack_138 = auVar15._8_4_;
        uStack_134 = auVar15._12_4_;
        puVar3 = (ushort *)((uint)*pbVar13 * 6 + iVar14);
        auVar15 = _qmtc2(uStack_140);
        auVar18 = _qmtc2(0x37800000);
        auVar19 = _vmulbc(auVar15,auVar16);
        auVar15 = _qmtc2((float)*puVar3);
        _vaddbc(in_vf0,auVar15);
        auVar16 = _qmtc2((float)puVar3[2]);
        puVar8 = (ushort *)((uint)pbVar13[1] * 6 + iVar14);
        auVar15 = _qmtc2((float)puVar3[1]);
        _vaddbc(in_vf0,auVar15);
        auVar15 = _vaddbc(in_vf0,auVar16);
        auVar15 = _vmulbc(auVar15,auVar18);
        puVar3 = (ushort *)((uint)pbVar13[2] * 6 + iVar14);
        auVar12._0_8_ = (long)(int)puVar3;
        auVar15 = _vmulbc(auVar15,auVar20);
        auVar15 = _vadd(auVar15,auVar19);
        in_vf24 = _vmove(auVar15);
        auVar15 = _qmtc2((float)*puVar8);
        auVar16 = _qmtc2((float)puVar8[1]);
        _vaddbc(in_vf0,auVar15);
        _vaddbc(in_vf0,auVar16);
        auVar15 = _qmtc2((float)*puVar3);
        auVar17 = _qmtc2((float)puVar3[1]);
        _vaddbc(in_vf0,auVar15);
        auVar16 = _qmtc2((float)puVar8[2]);
        auVar15 = _qmtc2((float)puVar3[2]);
        _vaddbc(in_vf0,auVar17);
        auVar16 = _vaddbc(in_vf0,auVar16);
        auVar22 = _vaddbc(in_vf0,auVar15);
        auVar15 = _vmulbc(auVar16,auVar18);
        auVar17 = _vmove(in_vf24);
        auVar16 = _vmulbc(auVar22,auVar18);
        auVar15 = _vmulbc(auVar15,auVar20);
        auVar16 = _vmulbc(auVar16,auVar20);
        auVar15 = _vadd(auVar15,auVar19);
        auVar18 = _vadd(auVar16,auVar19);
        auVar22 = _vmove(auVar15);
        auVar23 = _vmove(auVar18);
        auVar19 = _vmove(auVar22);
        auVar15 = _vsub(auVar19,auVar17);
        auVar16 = _vsub(auVar18,auVar17);
        auVar20 = _vmove(auVar21);
        _vopmula(auVar15,auVar16);
        auVar15 = _vopmsub(auVar16,auVar15);
        auVar15 = _vmul(auVar15,auVar15);
        _vaddabc(auVar15,auVar15);
        auVar15 = _vmaddbc(auVar21,auVar15);
        auVar15 = _qmfc2(auVar15._0_4_);
        if (2.3283064e-10 <= auVar15._0_4_) {
          auVar15 = _vsub(auVar18,auVar17);
          auVar17 = _vsub(auVar19,auVar17);
          auVar16 = _lqc2(*param_1);
          _vopmula(auVar17,auVar15);
          auVar17 = _vopmsub(auVar15,auVar17);
          auVar18 = _lqc2(param_1[1]);
          auVar15 = _vmul(auVar17,auVar17);
          auVar19 = _qmtc2(uStack_160);
          _vaddabc(auVar15,auVar15);
          auVar15 = _vmaddbc(auVar20,auVar15);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar15);
          uVar24 = _vwaitq();
          auVar17 = _vmulq(auVar17,uVar24);
          _vaddabc(auVar16,in_vf0);
          _vmsubabc(auVar16,auVar19);
          auVar15 = _vmaddbc(auVar18,auVar19);
          auStack_d0 = _sqc2(in_vf24);
          auStack_c0 = _sqc2(auVar22);
          auStack_b0 = _sqc2(auVar23);
          auStack_1b0 = _sqc2(auVar15);
          auStack_1a0 = _sqc2(auVar17);
          uStack_14c = 0;
          pbStack_150 = pbVar13;
          uStack_120 = uStack_160;
          uStack_11c = uStack_15c;
          uStack_118 = uStack_158;
          lVar6 = (*pcStack_110)(auStack_1b0,uStack_10c,auVar12._0_8_,puVar8[1]);
          in_vf24 = _lqc2(auStack_d0);
          _lqc2(auStack_c0);
          _lqc2(auStack_b0);
          if (lVar6 == 0) {
            return 0;
          }
          uStack_108 = 1;
          iVar11 = iStack_fc >> 0x1f;
        }
      }
      if ((CONCAT44(iVar11,iStack_fc) == 0) && (auVar12._0_8_ = 1, pbVar13[3] != 0xff)) {
        iVar14 = 2;
        iStack_fc = 1;
        iVar11 = 3;
      }
      else {
        iVar14 = 0;
        iStack_fc = 0;
        iVar11 = 2;
        pbVar13 = pbVar13 + uStack_104;
      }
      pbVar4 = pbVar13 + iVar14;
    } while (pbVar13 < pbStack_100);
  }
  return uStack_108;
}


// ==== FUN_0026ed40 @ 0026ed40 ====

/* WARNING: Removing unreachable block (ram,0x0026ee20) */

undefined8 FUN_0026ed40(undefined8 param_1,undefined4 *param_2,code *param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  ushort *puVar11;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  ushort *puVar12;
  undefined8 in_a1_udw;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 in_a2_udw;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *pbVar20;
  int iVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined4 in_vi1;
  undefined1 in_vf0 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_vf8 [16];
  undefined1 extraout_vf8 [16];
  undefined1 extraout_vf8_00 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  byte *pbStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined1 auStack_e0 [16];
  undefined2 uStack_d0;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  code *pcStack_b0;
  int iStack_ac;
  
  uStack_bc = (undefined4)((ulong)param_1 >> 0x20);
  uStack_c0 = (undefined4)param_1;
  uVar23 = 0;
  iVar5 = 1;
  do {
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  bVar2 = *(byte *)((int)param_2 + 0xd);
  pbVar20 = (byte *)*param_2;
  iVar21 = 0;
  iVar5 = param_2[1];
  pbVar22 = pbVar20 + (uint)bVar2 * (uint)*(byte *)((int)param_2 + 0xe);
  uStack_b8 = in_a0_udw;
  uStack_b4 = in_register_0000004c;
  pcStack_b0 = param_3;
  iStack_ac = param_4;
  if (DAT_003bfb28 != &DAT_003ba100) {
    DAT_003bfb28 = &DAT_003ba100;
    REG_DMAC_0_VIF0_QWC = 0;
    REG_DMAC_0_VIF0_TADR = 0x3ba100;
    REG_DMAC_0_VIF0_CHCR = 0x145;
    do {
      uVar6 = FUN_0029c210(0);
      lVar8 = FUN_0029c5e8(uVar6,1,0);
      in_vf8 = extraout_vf8;
    } while (lVar8 != 0);
  }
  auVar25 = _qmtc2(0x43fa0000);
  auVar14._0_8_ = CONCAT71(0,pbVar20 < pbVar22);
  auVar14._8_8_ = in_a1_udw;
  auVar24._4_4_ = uStack_bc;
  auVar24._0_4_ = uStack_c0;
  auVar24._8_4_ = uStack_b8;
  auVar24._12_4_ = uStack_b4;
  auVar24 = _lqc2(auVar24);
  auVar24 = _vmulbc(auVar24,auVar24);
  auVar24 = _sqc2(auVar24);
  auVar15._0_8_ = (long)(int)(float)(int)*(char *)(param_2 + 3);
  auVar15._8_8_ = in_a2_udw;
  auVar9 = _pextlw(auVar15._0_8_,(long)(int)(float)(int)*(char *)((int)param_2 + 10));
  auVar17 = _pextlw((long)(int)(float)(int)*(char *)((int)param_2 + 0xb),auVar9._0_8_);
  auStack_e0._12_4_ = auVar24._12_4_;
  auVar24 = _qmtc2(auVar17._0_4_);
  auVar26 = _qmtc2(auStack_e0._12_4_);
  _lqc2(auStack_170);
  auStack_e0 = _sqc2(auVar24);
  auVar9 = _vaddbc(in_vf0,auVar26);
  auVar24 = _vmulbc(auVar24,auVar25);
  _lqc2(auStack_160);
  _vmove(auVar9);
  auVar24 = _vadd(in_vf0,auVar24);
  auVar25 = _vaddbc(in_vf0,auVar26);
  _sqc2(auVar9);
  _sqc2(auVar25);
  auVar9 = _qmtc2(0x3c7a0000);
  _sqc2(auVar24);
  auVar24 = _vaddbc(in_vf0,auVar26);
  auVar9 = _vmr32(auVar9);
  auVar24 = _sqc2(auVar24);
  auVar9 = _sqc2(auVar9);
  if (auVar14._0_8_ != 0) {
    do {
      if (iVar21 == 0) {
        puVar12 = (ushort *)((uint)*pbVar20 * 6 + iVar5);
        auVar14._0_8_ = (ulong)(int)puVar12;
        puVar11 = (ushort *)((uint)pbVar20[1] * 6 + iVar5);
        puVar7 = (ushort *)((uint)pbVar20[2] * 6 + iVar5);
        _ctc2(puVar12);
        auVar25._4_4_ = uStack_bc;
        auVar25._0_4_ = uStack_c0;
        auVar25._8_4_ = uStack_b8;
        auVar25._12_4_ = uStack_b4;
        _lqc2(auVar25);
        _lqc2(auVar24);
        _lqc2(auVar9);
        auVar26._8_8_ = auVar15._8_8_;
        auVar18._8_8_ = auVar17._8_8_;
        auVar18._0_8_ = (ulong)puVar12[1] << 0x20 | (ulong)*puVar12;
        auVar26._2_6_ = 0;
        auVar26._0_2_ = puVar12[2];
        auVar15 = _pcpyld(auVar26,auVar18);
        auVar25 = _qmtc2(auVar15._0_4_);
        auVar27._8_8_ = auVar15._8_8_;
        auVar19._0_8_ = (ulong)puVar11[1] << 0x20 | (ulong)*puVar11;
        auVar19._8_8_ = auVar18._8_8_;
        auVar27._2_6_ = 0;
        auVar27._0_2_ = puVar11[2];
        auVar15 = _pcpyld(auVar27,auVar19);
        auVar26 = _qmtc2(auVar15._0_4_);
        auVar16._8_8_ = auVar15._8_8_;
        auVar17._0_8_ = (ulong)puVar7[1] << 0x20 | (ulong)*puVar7;
        auVar17._8_8_ = auVar18._8_8_;
        auVar16._2_6_ = 0;
        auVar16._0_2_ = puVar7[2];
        auVar15 = _pcpyld(auVar16,auVar17);
        auVar27 = _qmtc2(auVar15._0_4_);
        _vcallms(0x28);
        uVar10 = _cfc2(in_vi1);
        auStack_140 = _sqc2(in_vf8);
        auStack_130 = _sqc2(auVar25);
        auStack_120 = _sqc2(auVar26);
        auStack_110 = _sqc2(auVar27);
        uStack_d0 = (undefined2)uVar10;
      }
      else {
        puVar7 = (ushort *)((uint)pbVar20[3] * 6 + iVar5);
        auVar4._4_4_ = uStack_bc;
        auVar4._0_4_ = uStack_c0;
        auVar4._8_4_ = uStack_b8;
        auVar4._12_4_ = uStack_b4;
        _lqc2(auVar4);
        _lqc2(auVar24);
        _lqc2(auVar9);
        auVar25 = _lqc2(auStack_110);
        auVar3._2_2_ = 0;
        auVar3._0_2_ = *puVar7;
        auVar26 = _lqc2(auStack_120);
        auVar13._2_6_ = 0;
        auVar13._0_2_ = puVar7[2];
        auVar13._8_8_ = auVar14._8_8_;
        auVar3._4_2_ = puVar7[1];
        auVar3._6_2_ = 0;
        auVar3._8_4_ = in_a0_udw;
        auVar3._12_4_ = in_register_0000004c;
        auVar14 = _pcpyld(auVar13,auVar3);
        auVar27 = _qmtc2(auVar14._0_4_);
        _vcallms(0);
        uVar10 = _cfc2(in_vi1);
        auStack_140 = _sqc2(in_vf8);
        auStack_130 = _sqc2(auVar25);
        auStack_120 = _sqc2(auVar26);
        auStack_110 = _sqc2(auVar27);
        uStack_d0 = (undefined2)uVar10;
      }
      if ((uVar10 & 0xffff) != 0) {
        auVar14._0_8_ = (ulong)iStack_ac;
        auVar15._0_8_ = (long)(int)pcStack_b0;
        pbStack_f0 = pbVar20;
        iStack_ec = iVar21;
        iStack_e8 = iVar5;
        lVar8 = (*pcStack_b0)(auStack_150,auVar14._0_8_);
        uVar23 = 1;
        in_vf8 = extraout_vf8_00;
        if (lVar8 == 0) {
          return 0;
        }
      }
      if ((pbVar20[3] == 0xff) || (iVar21 != 0)) {
        pbVar20 = pbVar20 + bVar2;
        iVar21 = 0;
      }
      else {
        iVar21 = 1;
      }
    } while (pbVar20 < pbVar22);
  }
  return uVar23;
}


// ==== FUN_0026f0b0 @ 0026f0b0 ====

undefined8 FUN_0026f0b0(undefined4 param_1,undefined1 (*param_2) [16])

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9 = _qmtc2(param_1);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vmove(auVar9);
  auVar8 = _lqc2(*param_2);
  auVar5 = _lqc2(param_2[1]);
  auVar4 = _vmul(auVar7,auVar8);
  auVar6 = _vmul(auVar7,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar3,auVar4);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar3,auVar6);
  auVar3 = _vsubbc(auVar4,auVar8);
  auVar4 = _vsubbc(auVar6,auVar5);
  _vaddbc(in_vf0,auVar3);
  auVar3 = _vaddbc(in_vf0,auVar4);
  auVar4 = _vsub(in_vf0,in_vf0);
  auVar4 = _vsub(auVar4,auVar3);
  _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmove(in_vf0);
  auVar3 = _vsubbc(auVar4,auVar7);
  auVar4 = _vaddbc(auVar4,auVar7);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar3 = _psraw(auVar3,0x1f);
  auVar4 = _psraw(auVar4,0x1f);
  if (auVar4._0_8_ != 0) {
    return 0;
  }
  auVar6 = _lqc2(param_2[5]);
  auVar4 = _lqc2(param_2[2]);
  uVar1 = 2;
  if (auVar3._0_8_ != 0) {
    uVar1 = 1;
  }
  auVar7 = _lqc2(param_2[3]);
  auVar3 = _lqc2(param_2[4]);
  _vaddabc(auVar6,in_vf0);
  _vmsubabc(auVar4,auVar9);
  _vmsubabc(auVar7,auVar9);
  _vmsubabc(auVar3,auVar9);
  auVar3 = _vmaddbc(auVar5,auVar9);
  auVar5 = _vmsubbc(auVar5,auVar9);
  auVar4 = _qmfc2(auVar3._0_4_);
  auVar3 = _qmfc2(auVar5._0_4_);
  auVar4 = _psraw(auVar4,0x1f);
  auVar3 = _psraw(auVar3,0x1f);
  auVar6 = _pcpyud(auVar4,in_zero_qw);
  auVar5 = _pcpyud(auVar3,in_zero_qw);
  uVar2 = 1;
  if (auVar3._0_8_ == 0 && auVar5._0_8_ == 0) {
    uVar2 = uVar1;
  }
  if (auVar4._0_8_ == 0 && auVar6._0_8_ == 0) {
    return uVar2;
  }
  return 0;
}


// ==== FUN_0026f190 @ 0026f190 ====

char FUN_0026f190(undefined1 (*param_1) [16],undefined4 param_2)

{
  char cVar1;
  long lVar2;
  undefined1 in_vf0 [16];
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
  
  auVar4 = _lqc2(param_1[1]);
  auVar3 = _lqc2(*param_1);
  auVar6 = _qmtc2(param_2);
  auVar12 = _vsub(auVar6,auVar4);
  auVar10 = _vsub(auVar6,auVar3);
  auVar4 = _vsub(auVar4,auVar3);
  _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar12,auVar12);
  auVar5 = _vmul(auVar10,auVar10);
  auVar7 = _vmulbc(auVar6,auVar6);
  auVar8 = _vmul(auVar4,auVar10);
  auVar13 = _vmul(auVar12,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar11 = _vmaddbc(auVar7,auVar3);
  _vaddabc(auVar5,auVar5);
  auVar3 = _qmfc2(auVar7._0_4_);
  auVar12 = _vmaddbc(auVar7,auVar5);
  auVar3 = _pcpyud(auVar3,auVar3);
  auVar9 = _vmulbc(auVar4,auVar6);
  lVar2 = auVar3._0_8_ >> 0x20;
  _vopmula(auVar4,auVar10);
  auVar3 = _qmfc2(auVar11._0_4_);
  auVar5 = _vopmsub(auVar10,auVar4);
  _vaddabc(auVar8,auVar8);
  auVar6 = _vmaddbc(auVar7,auVar8);
  auVar4 = _qmfc2(auVar12._0_4_);
  _vmula(auVar5,auVar5);
  cVar1 = (auVar3._0_8_ >> 0x20 < lVar2) + (auVar4._0_8_ >> 0x20 < lVar2);
  auVar4 = _vmsub(auVar9,auVar9);
  auVar3 = _qmfc2(auVar6._0_4_);
  if (cVar1 == '\0') {
    _vaddabc(auVar13,auVar13);
    auVar5 = _vmaddbc(auVar7,auVar13);
    if (0 < auVar3._0_8_ >> 0x20) {
      _vaddabc(auVar4,auVar4);
      auVar3 = _vmaddbc(auVar7,auVar4);
      auVar4 = _qmfc2(auVar5._0_4_);
      auVar3 = _qmfc2(auVar3._0_4_);
      if (auVar4._0_8_ >> 0x20 < 0) {
        cVar1 = auVar3._0_8_ >> 0x20 < 0;
      }
    }
  }
  return cVar1;
}


// ==== FUN_0026f258 @ 0026f258 ====

undefined4 FUN_0026f258(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0029cf98();
  switch(uVar2) {
  case 0:
    uVar1 = 2;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 4;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 10;
    break;
  case 7:
    uVar1 = 9;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0026f2e0 @ 0026f2e0 ====

uint FUN_0026f2e0(void)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = DAT_003c0e00;
  if (DAT_0040deb2 == '\0') {
    lVar2 = FUN_0029d000();
    uVar1 = (uint)(lVar2 == 2);
  }
  return uVar1;
}


// ==== FUN_0026f320 @ 0026f320 ====

int FUN_0026f320(uint param_1)

{
  return (param_1 & 0xf) + ((param_1 & 0xff) >> 4) * 10;
}


// ==== FUN_0026f340 @ 0026f340 ====

void FUN_0026f340(short *param_1)

{
  short sVar1;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  FUN_002a5038(&uStack_30);
  FUN_0029d478(&uStack_30);
  sVar1 = FUN_0026f320(uStack_29);
  *param_1 = sVar1 + 2000;
  sVar1 = FUN_0026f320(uStack_2a);
  param_1[1] = sVar1;
  sVar1 = FUN_0026f320(uStack_2b);
  param_1[2] = sVar1;
  sVar1 = FUN_0026f320(uStack_2d);
  param_1[3] = sVar1;
  sVar1 = FUN_0026f320(uStack_2e);
  param_1[4] = sVar1;
  sVar1 = FUN_0026f320(uStack_2f);
  param_1[5] = sVar1;
  return;
}


// ==== FUN_0026f3c0 @ 0026f3c0 ====

void FUN_0026f3c0(short *param_1)

{
  short sVar1;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  FUN_002a5038(&uStack_30);
  FUN_0029d470(&uStack_30);
  sVar1 = FUN_0026f320(uStack_29);
  *param_1 = sVar1 + 2000;
  sVar1 = FUN_0026f320(uStack_2a);
  param_1[1] = sVar1;
  sVar1 = FUN_0026f320(uStack_2b);
  param_1[2] = sVar1;
  sVar1 = FUN_0026f320(uStack_2d);
  param_1[3] = sVar1;
  sVar1 = FUN_0026f320(uStack_2e);
  param_1[4] = sVar1;
  sVar1 = FUN_0026f320(uStack_2f);
  param_1[5] = sVar1;
  return;
}


// ==== FUN_0026f440 @ 0026f440 ====

bool FUN_0026f440(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *(undefined4 *)param_1 = 0;
  FUN_0026f908(param_1,0);
  lVar2 = FUN_00355278(0);
  if (lVar2 == 0) {
    uStack_3c = 2;
    uStack_40 = 2;
    uStack_38 = 0;
    lVar2 = FUN_003554f8(&uStack_40,0x4405c0);
    bVar1 = -1 < lVar2;
    ((undefined4 *)param_1)[0x15] = (int)lVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ==== FUN_0026f4a8 @ 0026f4a8 ====

undefined4 FUN_0026f4a8(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_0026f4b0 @ 0026f4b0 ====

void FUN_0026f4b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_0026f4b8 @ 0026f4b8 ====

undefined4 FUN_0026f4b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}


// ==== FUN_0026f4c0 @ 0026f4c0 ====

bool FUN_0026f4c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00355708(*(undefined4 *)((int)param_1 + 0x54),param_2,(int)param_1 + 0x5c);
  if (lVar1 != 0) {
    FUN_0026f908(param_1,0xd);
  }
  return lVar1 == 0;
}


// ==== FUN_0026f508 @ 0026f508 ====

bool FUN_0026f508(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_00355b40(*(undefined4 *)(iVar2 + 0x54),param_2,0,1,iVar2 + 0x94,iVar2 + 0xcc);
  if (lVar1 != 0) {
    FUN_0026f908(param_1,0xd);
  }
  return lVar1 == 0;
}


// ==== FUN_0026f560 @ 0026f560 ====

int FUN_0026f560(int param_1)

{
  if (*(int *)(param_1 + 0xd8) < 0) {
    return -1;
  }
  return *(int *)(param_1 + 0xd8) << 10;
}


// ==== FUN_0026f580 @ 0026f580 ====

undefined4 FUN_0026f580(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (((*(int *)(iVar3 + 0x4c) == 0) && (lVar2 = FUN_0035ccd8(param_2), lVar2 < 0x45)) &&
     (param_3 != 0)) {
    if ((param_3 & 4) == 0) {
      lVar2 = FUN_0026f508(param_1,param_2);
      if (lVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(iVar3 + 0x50) = 4;
    }
    else {
      lVar2 = FUN_00355a48(*(undefined4 *)(iVar3 + 0x54),param_2);
      if (lVar2 != 0) goto LAB_0026f5e4;
    }
    FUN_0035cbc0(iVar3 + 4,param_2);
    *(int *)(iVar3 + 0x4c) = (int)param_3;
    uVar1 = 1;
  }
  else {
LAB_0026f5e4:
    FUN_0026f908(param_1,0xd);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0026f640 @ 0026f640 ====

bool FUN_0026f640(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x4c) == 0;
  if (bVar1) {
    FUN_0026f908(param_1,0xd);
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 5;
  }
  return !bVar1;
}


// ==== FUN_0026f688 @ 0026f688 ====

undefined4 FUN_0026f688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((((*(byte *)(iVar3 + 0x4c) ^ 1) & 1) == 0) &&
     (lVar2 = FUN_00355808(*(undefined4 *)(iVar3 + 0x54),iVar3 + 4,param_2,param_4,param_3),
     lVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    FUN_0026f908(param_1,0xd);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0026f6e8 @ 0026f6e8 ====

undefined4 FUN_0026f6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (((*(uint *)(iVar3 + 0x4c) & 2) == 0) ||
     (lVar2 = FUN_00355928(*(undefined4 *)(iVar3 + 0x54),iVar3 + 4,param_2,param_4,param_3),
     lVar2 != 0)) {
    FUN_0026f908(param_1,0xd);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_0026f748 @ 0026f748 ====

undefined4 FUN_0026f748(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(int *)((int)param_1 + 0xd4) == 0) &&
     (lVar2 = FUN_00355598(*(undefined4 *)((int)param_1 + 0x54)), lVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    FUN_0026f908(param_1,0xd);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0026f798 @ 0026f798 ====

bool FUN_0026f798(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00355c70(*(undefined4 *)((int)param_1 + 0x54));
  if (lVar1 != 0) {
    FUN_0026f908(param_1,0xd);
  }
  return lVar1 == 0;
}


// ==== FUN_0026f7e0 @ 0026f7e0 ====

void FUN_0026f7e0(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)((int)param_1 + 0x50) == 5) {
    *(undefined4 *)((int)param_1 + 0x50) = 0xe;
    uVar2 = 0;
    goto LAB_0026f8e0;
  }
  if (param_2 == 0) {
    lVar1 = FUN_00356030(&uStack_40,(uint)&uStack_40 | 4);
LAB_0026f850:
    if (lVar1 == 0) {
      uVar2 = FUN_0026f948(param_1,uStack_40);
      goto LAB_0026f8e0;
    }
    if (lVar1 < 1) {
      if (lVar1 == -1) {
        lVar1 = FUN_002700b8(param_1);
        uVar2 = 1;
        if (lVar1 != 0) goto LAB_0026f8e0;
      }
    }
    else if (lVar1 == 1) {
      uVar2 = FUN_0026ffc0(param_1,uStack_40,uStack_3c,param_3);
      goto LAB_0026f8e0;
    }
  }
  else if (param_2 == 1) {
    lVar1 = FUN_00356058(&uStack_40,(uint)&uStack_40 | 4);
    goto LAB_0026f850;
  }
  FUN_0026f908(param_1,0xd);
  uVar2 = 0xd;
LAB_0026f8e0:
  FUN_0026f4b0(param_1,uVar2);
  FUN_0026f4a8(param_1);
  return;
}


// ==== FUN_0026f908 @ 0026f908 ====

void FUN_0026f908(int param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x50) = 0xe;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(int *)(param_1 + 0x58) = (int)param_2;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xd4) = 1;
  return;
}


// ==== FUN_0026f948 @ 0026f948 ====

undefined4 FUN_0026f948(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  default:
    return 1;
  case 3:
    return 9;
  case 5:
    return 7;
  case 6:
    return 8;
  case 7:
    return 4;
  case 8:
    return 6;
  case 10:
    break;
  case 0xb:
    return 10;
  case 0xe:
    return 0xc;
  }
  uVar1 = 0xb;
  if (*(int *)(param_1 + 0x50) == 4) {
    uVar1 = 4;
  }
  return uVar1;
}


// ==== FUN_0026f9d0 @ 0026f9d0 ====

undefined4 FUN_0026f9d0(undefined8 param_1,ushort param_2)

{
  if (param_2 == 0x17) {
    FUN_0026f908(param_1,0xc);
    return 0xd;
  }
  if (param_2 < 0x18) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 0x13) {
LAB_0026fa28:
      FUN_0026f908(param_1,1);
      return 0xd;
    }
  }
  else {
    if (param_2 == 0x1c) {
      FUN_0026f908(param_1,0xb);
      return 0xd;
    }
    if (param_2 == 0x6f) goto LAB_0026fa28;
  }
  FUN_0026f908(param_1,0xd);
  return 0xd;
}


// ==== FUN_0026fa70 @ 0026fa70 ====

undefined4 FUN_0026fa70(undefined8 param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  
  if ((int)param_2 < 0) {
    if (((param_2 & 0xffff) == 0x13) || ((param_2 & 0xffff) == 0x6f)) {
      FUN_0026f908(param_1,1);
      uVar1 = 0xd;
    }
    else {
      FUN_0026f908(param_1,0xd);
      uVar1 = 0xd;
    }
  }
  else {
    if (param_3 != 0) {
      *(uint *)param_3 = param_2;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_0026fad0 @ 0026fad0 ====

undefined4 FUN_0026fad0(undefined8 param_1,uint param_2,long param_3)

{
  if (-1 < (int)param_2) {
    if (param_3 != 0) {
      *(uint *)param_3 = param_2;
    }
    return 0;
  }
  param_2 = param_2 & 0xffff;
  if (param_2 == 0x1c) {
    FUN_0026f908(param_1,0xb);
    return 0xd;
  }
  if (param_2 < 0x1d) {
    if (param_2 == 0x13) {
LAB_0026fb38:
      FUN_0026f908(param_1,1);
      return 0xd;
    }
  }
  else if (param_2 == 0x6f) goto LAB_0026fb38;
  FUN_0026f908(param_1,0xd);
  return 0xd;
}


// ==== FUN_0026fb60 @ 0026fb60 ====

undefined4 FUN_0026fb60(undefined8 param_1,ushort param_2)

{
  if (param_2 == 0x13) {
LAB_0026fb98:
    FUN_0026f908(param_1,1);
  }
  else {
    if (param_2 < 0x14) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else if (param_2 == 0x6f) goto LAB_0026fb98;
    FUN_0026f908(param_1,0xd);
  }
  return 0xd;
}


// ==== FUN_0026fbc0 @ 0026fbc0 ====

undefined4 FUN_0026fbc0(undefined8 param_1,ushort param_2)

{
  if (param_2 == 0x13) {
LAB_0026fc18:
    FUN_0026f908(param_1,1);
  }
  else {
    if (param_2 < 0x14) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      if (param_2 == 0x1c) {
        FUN_0026f908(param_1,0xb);
        return 0xd;
      }
      if (param_2 == 0x6f) goto LAB_0026fc18;
    }
    FUN_0026f908(param_1,0xd);
  }
  return 0xd;
}


// ==== FUN_0026fc40 @ 0026fc40 ====

undefined4 FUN_0026fc40(undefined8 param_1,ushort param_2)

{
  long lVar1;
  
  if (param_2 == 0x2f) {
LAB_0026fd48:
    FUN_0026f908(param_1,3);
    return 0xd;
  }
  if (param_2 < 0x30) {
    if (param_2 == 0) {
      if (*(int *)((int)param_1 + 0xd0) == 2) {
        if (*(int *)((int)param_1 + 0xd4) != 0) {
          lVar1 = FUN_0026f4b8(param_1);
          if ((lVar1 != 3) && (lVar1 = FUN_0026f4b8(param_1), lVar1 != 1)) {
            return 0;
          }
          FUN_0026f908(param_1,0);
          return 0;
        }
        goto LAB_0026fd48;
      }
    }
    else if (param_2 != 0x13) goto LAB_0026fd58;
LAB_0026fd20:
    FUN_0026f908(param_1,1);
  }
  else {
    if (param_2 == 0x9001) {
      FUN_0026f908(param_1,6);
      return 0xd;
    }
    if (param_2 < 0x9002) {
      if (param_2 == 0x6f) goto LAB_0026fd20;
    }
    else if (param_2 == 0x9003) {
      FUN_0026f908(param_1,2);
      return 0xd;
    }
LAB_0026fd58:
    FUN_0026f908(param_1,0xd);
  }
  return 0xd;
}


// ==== FUN_0026fd78 @ 0026fd78 ====

undefined4 FUN_0026fd78(int param_1,ushort param_2,long param_3)

{
  if (param_2 != 0x13) {
    if (param_2 < 0x14) {
      if (param_2 == 0) {
        if (*(int *)(param_1 + 0xcc) == 1) {
          if (*(int *)(param_1 + 0x50) == 4) {
            *(undefined4 *)(param_1 + 0x50) = 0xe;
          }
          else {
            if (param_3 == 0) {
              return 0;
            }
            if ((*(ushort *)(param_1 + 0xa8) & 0x20) == 0) {
              *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0xa4);
            }
            else {
              *(undefined4 *)param_3 = 0;
            }
          }
          return 0;
        }
      }
      else if (param_2 != 2) goto LAB_0026fe64;
LAB_0026fe44:
      FUN_0026f908(param_1,9);
      return 0xd;
    }
    if (param_2 != 0x6f) {
      if (param_2 < 0x70) {
        if (param_2 == 0x14) goto LAB_0026fe44;
      }
      else if (param_2 == 0x9002) {
        FUN_0026f908(param_1,10);
        return 0xd;
      }
LAB_0026fe64:
      FUN_0026f908(param_1,0xd);
      return 0xd;
    }
  }
  FUN_0026f908(param_1,1);
  return 0xd;
}


// ==== FUN_0026fe80 @ 0026fe80 ====

undefined4 FUN_0026fe80(undefined8 param_1,ushort param_2)

{
  if (param_2 == 0x14) {
LAB_0026fed8:
    FUN_0026f908(param_1,9);
  }
  else {
    if (param_2 < 0x15) {
      if (param_2 == 0) {
        return 0;
      }
      if (param_2 == 0x13) {
LAB_0026fee8:
        FUN_0026f908(param_1,1);
        return 0xd;
      }
    }
    else {
      if (param_2 == 0x16) goto LAB_0026fed8;
      if (param_2 == 0x6f) goto LAB_0026fee8;
    }
    FUN_0026f908(param_1,0xd);
  }
  return 0xd;
}


// ==== FUN_0026ff10 @ 0026ff10 ====

undefined4 FUN_0026ff10(undefined8 param_1,ushort param_2)

{
  if (param_2 == 0x13) {
LAB_0026ff94:
    FUN_0026f908(param_1,1);
    return 0xd;
  }
  if (param_2 < 0x14) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 2) goto LAB_0026ffa4;
  }
  else if (param_2 != 0x16) {
    if (param_2 < 0x17) {
      if (param_2 == 0x14) goto LAB_0026ff84;
    }
    else if (param_2 == 0x6f) goto LAB_0026ff94;
LAB_0026ffa4:
    FUN_0026f908(param_1,0xd);
    return 0xd;
  }
LAB_0026ff84:
  FUN_0026f908(param_1,9);
  return 0xd;
}


// ==== FUN_0026ffc0 @ 0026ffc0 ====

undefined8 FUN_0026ffc0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    *(undefined4 *)param_4 = 0xffffffff;
  }
  switch(param_2) {
  case 2:
    uVar1 = FUN_0026fc40(param_1);
    break;
  case 3:
    uVar1 = FUN_0026fb60(param_1);
    break;
  default:
    FUN_0026f908(param_1,0xd);
    uVar1 = 0xd;
    break;
  case 5:
    uVar1 = FUN_0026fa70(param_1);
    break;
  case 6:
    uVar1 = FUN_0026fad0(param_1);
    break;
  case 7:
    uVar1 = FUN_0026f9d0(param_1);
    break;
  case 8:
    uVar1 = FUN_0026fe80(param_1);
    break;
  case 10:
    uVar1 = FUN_0026fd78(param_1);
    break;
  case 0xb:
    uVar1 = FUN_0026fbc0(param_1);
    break;
  case 0xe:
    uVar1 = FUN_0026ff10(param_1,param_3);
  }
  return uVar1;
}


// ==== FUN_002700b8 @ 002700b8 ====

undefined4 FUN_002700b8(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00355648(*(undefined4 *)((int)param_1 + 0x54),(int)param_1 + 0xd0);
  if (uVar1 != 0x13) {
    if (uVar1 < 0x14) {
      if (uVar1 == 0) {
        return 1;
      }
      uVar2 = 0xd;
      goto LAB_0027011c;
    }
    if (uVar1 != 0x6f) {
      uVar2 = 0xd;
      goto LAB_0027011c;
    }
  }
  uVar2 = 1;
LAB_0027011c:
  FUN_0026f908(param_1,uVar2);
  return 0;
}


// ==== FUN_00270188 @ 00270188 ====

bool FUN_00270188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_002703d0(0x440280);
  lVar1 = (*DAT_003bfb2c)(param_1,param_2,param_3);
  return lVar1 != 0;
}


// ==== FUN_002701e8 @ 002701e8 ====

void FUN_002701e8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2f0);
  *(int *)(param_1 + 0x2e0) = iVar1;
  uVar2 = 0x100000 - (iVar1 + *(int *)(param_1 + 0x300));
  *(uint *)(param_1 + 0x2ec) = uVar2;
  uVar2 = uVar2 >> 1 & 0xfffff800;
  *(uint *)(param_1 + 0x2dc) = uVar2;
  *(uint *)(param_1 + 0x2e4) = iVar1 + uVar2;
  return;
}


// ==== FUN_00270228 @ 00270228 ====

void FUN_00270228(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0x100000;
  param_1[0xba] = param_3;
  param_1[0xbd] = param_4;
  param_1[0xbc] = param_2;
  FUN_002701e8();
  puVar2 = param_1 + 0x72;
  iVar3 = 0x3d;
  do {
    puVar2[-0x40] = 0;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  param_1[0x30] = 0;
  iVar3 = 7;
  param_1[0x70] = 0;
  puVar2 = param_1 + 0xc9;
  param_1[0x31] = 0;
  param_1[0x71] = 0;
  param_1[0xb0] = 0;
  param_1[0xbf] = 0;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  FUN_002ce0f8(0x270138);
  FUN_002ce110(0x270160);
  pcVar1 = DAT_004494d0;
  if (DAT_003bfb2c == (code *)0x0) {
    DAT_004494d0 = FUN_00270188;
    DAT_003bfb2c = pcVar1;
  }
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 1;
  param_1[0xb2] = 0;
  *(undefined1 *)((int)param_1 + 0x2c5) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)((int)param_1 + 0x329) = 0;
  *param_1 = 0;
  param_1[0xb5] = 0;
  return;
}


// ==== FUN_00270338 @ 00270338 ====

void FUN_00270338(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = (int)param_2 + DAT_0040e688;
    if (*(undefined4 **)(iVar2 + 0x58) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar2 + 0x58) = 0;
      *(undefined4 *)(iVar2 + 0x58) = 0;
      uVar1 = (long)*(int *)(iVar2 + 8) & 0x3fff;
      uVar1 = uVar1 | uVar1 << 0x14 | uVar1 << 0x28;
      *(ulong *)(iVar2 + 0x18) = *(long *)(iVar2 + 0x18) - uVar1;
      *(ulong *)(iVar2 + 0x20) = *(long *)(iVar2 + 0x20) - uVar1;
    }
  }
  return;
}


// ==== FUN_002703d0 @ 002703d0 ====

void FUN_002703d0(int param_1)

{
  FUN_002710d8(0x440280);
  FUN_002ce010();
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  return;
}


// ==== FUN_00270408 @ 00270408 ====

void FUN_00270408(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint in_v0_udw;
  uint uVar11;
  uint in_register_0000002c;
  uint uVar12;
  undefined8 in_v1_udw;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 in_a0_udw;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  
  auVar14._0_8_ = (long)DAT_0040e688;
  auVar14._8_8_ = in_v1_udw;
  puVar1 = *(undefined4 **)(param_1 + 0x2c8);
  piVar21 = (int *)(param_2 + DAT_0040e688);
  if (puVar1 != (undefined4 *)0x0) {
    auVar13._8_8_ = in_v1_udw;
    auVar13._0_8_ = 0x1000000000000001;
    auVar4._8_4_ = in_v0_udw;
    auVar4._0_8_ = 0xe;
    auVar4._12_4_ = in_register_0000002c;
    auVar14 = _pcpyld(auVar4,auVar13);
    *puVar1 = auVar14._0_4_;
    puVar1[1] = auVar14._4_4_;
    puVar1[2] = auVar14._8_4_;
    puVar1[3] = auVar14._12_4_;
  }
  puVar19 = *(uint **)(param_2 + 0x24);
  auVar16._8_8_ = auVar14._8_8_;
  auVar16._0_8_ = (long)(int)puVar19;
  uVar20 = 0;
  uVar2 = *puVar19;
  puVar19 = puVar19 + 4;
  if (uVar2 != 0) {
    do {
      uVar10 = puVar19[1];
      uVar11 = puVar19[2];
      uVar12 = puVar19[3];
      *DAT_0040e5f4 = *puVar19;
      DAT_0040e5f4[1] = uVar10;
      DAT_0040e5f4[2] = uVar11;
      DAT_0040e5f4[3] = uVar12;
      uVar10 = puVar19[5];
      uVar11 = puVar19[6];
      uVar12 = puVar19[7];
      DAT_0040e5f4[4] = puVar19[4];
      DAT_0040e5f4[5] = uVar10;
      DAT_0040e5f4[6] = uVar11;
      DAT_0040e5f4[7] = uVar12;
      auVar15._8_8_ = auVar16._8_8_;
      auVar15._0_8_ = *(long *)(puVar19 + 8) + ((ulong)param_3 & 0xffffffc0) * 0x4000000;
      auVar5._8_4_ = uVar11;
      auVar5._0_8_ = *(undefined8 *)(puVar19 + 10);
      auVar5._12_4_ = uVar12;
      auVar16 = _pcpyld(auVar5,auVar15);
      DAT_0040e5f4[8] = auVar16._0_4_;
      DAT_0040e5f4[9] = auVar16._4_4_;
      DAT_0040e5f4[10] = auVar16._8_4_;
      DAT_0040e5f4[0xb] = auVar16._12_4_;
      uVar10 = puVar19[0xd];
      in_v0_udw = puVar19[0xe];
      in_register_0000002c = puVar19[0xf];
      DAT_0040e5f4[0xc] = puVar19[0xc];
      DAT_0040e5f4[0xd] = uVar10;
      DAT_0040e5f4[0xe] = in_v0_udw;
      DAT_0040e5f4[0xf] = in_register_0000002c;
      DAT_0040e5f4 = DAT_0040e5f4 + 0x10;
      uVar20 = uVar20 + 1;
      puVar19 = puVar19 + 0x10;
    } while (uVar20 < uVar2);
  }
  auVar17._8_8_ = auVar16._8_8_;
  auVar17._0_8_ = 0x10000002;
  auVar6._8_4_ = in_v0_udw;
  auVar6._0_8_ = 0x5000000200000000;
  auVar6._12_4_ = in_register_0000002c;
  auVar14 = _pcpyld(auVar6,auVar17);
  *DAT_0040e5f4 = auVar14._0_4_;
  DAT_0040e5f4[1] = auVar14._4_4_;
  DAT_0040e5f4[2] = auVar14._8_4_;
  DAT_0040e5f4[3] = auVar14._12_4_;
  DAT_0040e5f4 = DAT_0040e5f4 + 4;
  *(uint **)(param_1 + 0x2c8) = DAT_0040e5f4;
  auVar18._8_8_ = auVar14._8_8_;
  auVar18._0_8_ = 0x1000000000008001;
  auVar7._8_4_ = in_v0_udw;
  auVar7._0_8_ = 0xe;
  auVar7._12_4_ = in_register_0000002c;
  auVar14 = _pcpyld(auVar7,auVar18);
  *DAT_0040e5f4 = auVar14._0_4_;
  DAT_0040e5f4[1] = auVar14._4_4_;
  DAT_0040e5f4[2] = auVar14._8_4_;
  DAT_0040e5f4[3] = auVar14._12_4_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar14._8_8_;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = 0x7f;
  auVar14 = _pcpyld(auVar8,auVar9 << 0x40);
  DAT_0040e5f4[4] = auVar14._0_4_;
  DAT_0040e5f4[5] = auVar14._4_4_;
  DAT_0040e5f4[6] = auVar14._8_4_;
  DAT_0040e5f4[7] = auVar14._12_4_;
  DAT_0040e5f4 = DAT_0040e5f4 + 8;
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  *piVar21 = *piVar21 + 1;
  EI();
  iVar3 = piVar21[1];
  piVar21[1] = iVar3 + 1;
  if (iVar3 + 1 == 1) {
    FUN_002b4de0(piVar21);
  }
  return;
}


// ==== FUN_002705a8 @ 002705a8 ====

void FUN_002705a8(float param_1,undefined4 *param_2,int param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong in_v0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined8 in_a3_udw;
  ulong uVar14;
  undefined8 in_t3_udw;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (param_4 < 1) {
    uVar14 = (ulong)CONCAT24(*(ushort *)(param_3 + 0x14),(uint)*(byte *)(param_3 + 0x16)) &
             0xfffffffffff | ((ulong)(*(ushort *)(param_3 + 0x14) >> 0xc) & 3) << 0x13;
  }
  else {
    auVar15._0_8_ =
         (long)(((int)((uint)*(ushort *)(param_3 + 0x14) << 0x14) >> 0x14) + (int)(param_1 * 16.0));
    auVar15._8_8_ = in_v0_udw;
    auVar9._8_8_ = in_a3_udw;
    auVar9._0_8_ = 0xfffffffffffff800;
    auVar9 = _pmaxw(auVar15,auVar9);
    auVar10._8_8_ = in_a2_udw;
    auVar10._0_8_ = 0x7ff;
    auVar10 = _pminw(auVar9,auVar10);
    auVar10 = _pextlw(0,auVar10._0_8_);
    in_v0_udw = auVar10._8_8_;
    uVar14 = CONCAT44(auVar10._0_4_,(uint)*(byte *)(param_3 + 0x16)) & 0xfffffffffff |
             ((ulong)(*(ushort *)(param_3 + 0x14) >> 0xc) & 3) << 0x13;
  }
  if (param_5 != 0) {
    uVar8 = 0x120;
    if (param_5 == 2) {
      uVar8 = 0x160;
    }
    uVar14 = uVar14 | uVar8;
  }
  auVar11._8_8_ = in_v0_udw;
  auVar11._0_8_ = 0x5000000600000000;
  auVar18._8_8_ = in_a3_udw;
  auVar18._0_8_ = 0x10000006;
  auVar18 = _pcpyld(auVar11,auVar18);
  auVar12._8_8_ = in_v0_udw;
  auVar12._0_8_ = 0xe;
  auVar19._8_8_ = in_a3_udw;
  auVar19._0_8_ = 0x1000000000008005;
  auVar19 = _pcpyld(auVar12,auVar19);
  auVar16._8_8_ = in_a0_udw;
  auVar16._0_8_ = param_6 + 6;
  auVar3._8_8_ = in_a3_udw;
  auVar3._0_8_ = *(undefined8 *)(param_3 + 8);
  auVar16 = _pcpyld(auVar16,auVar3);
  auVar17._8_8_ = in_a0_udw;
  auVar17._0_8_ = param_6 + 0x34;
  auVar4._8_8_ = in_a3_udw;
  auVar4._0_8_ = *(undefined8 *)(param_3 + 0x18);
  auVar17 = _pcpyld(auVar17,auVar4);
  auVar13._0_8_ = param_6 + 0x36;
  auVar13._8_8_ = in_v0_udw;
  auVar5._8_8_ = in_a3_udw;
  auVar5._0_8_ = *(undefined8 *)(param_3 + 0x20);
  auVar15 = _pcpyld(auVar13,auVar5);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = in_v0_udw;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x3f;
  auVar10 = _pcpyld(auVar1,auVar7 << 0x40);
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_6 + 0x14;
  auVar6._8_8_ = in_t3_udw;
  auVar6._0_8_ = uVar14;
  auVar9 = _pcpyld(auVar2,auVar6);
  if (param_7 == 0) {
    FUN_002b3d88(0,7);
    *DAT_0040e5f0 = auVar18._0_4_;
    DAT_0040e5f0[1] = auVar18._4_4_;
    DAT_0040e5f0[2] = auVar18._8_4_;
    DAT_0040e5f0[3] = auVar18._12_4_;
    DAT_0040e5f0[4] = auVar19._0_4_;
    DAT_0040e5f0[5] = auVar19._4_4_;
    DAT_0040e5f0[6] = auVar19._8_4_;
    DAT_0040e5f0[7] = auVar19._12_4_;
    DAT_0040e5f0[8] = auVar10._0_4_;
    DAT_0040e5f0[9] = auVar10._4_4_;
    DAT_0040e5f0[10] = auVar10._8_4_;
    DAT_0040e5f0[0xb] = auVar10._12_4_;
    DAT_0040e5f0[0xc] = auVar16._0_4_;
    DAT_0040e5f0[0xd] = auVar16._4_4_;
    DAT_0040e5f0[0xe] = auVar16._8_4_;
    DAT_0040e5f0[0xf] = auVar16._12_4_;
    DAT_0040e5f0[0x10] = auVar9._0_4_;
    DAT_0040e5f0[0x11] = auVar9._4_4_;
    DAT_0040e5f0[0x12] = auVar9._8_4_;
    DAT_0040e5f0[0x13] = auVar9._12_4_;
    DAT_0040e5f0[0x14] = auVar17._0_4_;
    DAT_0040e5f0[0x15] = auVar17._4_4_;
    DAT_0040e5f0[0x16] = auVar17._8_4_;
    DAT_0040e5f0[0x17] = auVar17._12_4_;
    DAT_0040e5f0[0x18] = auVar15._0_4_;
    DAT_0040e5f0[0x19] = auVar15._4_4_;
    DAT_0040e5f0[0x1a] = auVar15._8_4_;
    DAT_0040e5f0[0x1b] = auVar15._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  else {
    param_2[4] = auVar18._0_4_;
    param_2[5] = auVar18._4_4_;
    param_2[6] = auVar18._8_4_;
    param_2[7] = auVar18._12_4_;
    *param_2 = 7;
    param_2[8] = auVar19._0_4_;
    param_2[9] = auVar19._4_4_;
    param_2[10] = auVar19._8_4_;
    param_2[0xb] = auVar19._12_4_;
    param_2[0xc] = auVar10._0_4_;
    param_2[0xd] = auVar10._4_4_;
    param_2[0xe] = auVar10._8_4_;
    param_2[0xf] = auVar10._12_4_;
    param_2[0x10] = auVar16._0_4_;
    param_2[0x11] = auVar16._4_4_;
    param_2[0x12] = auVar16._8_4_;
    param_2[0x13] = auVar16._12_4_;
    param_2[0x14] = auVar9._0_4_;
    param_2[0x15] = auVar9._4_4_;
    param_2[0x16] = auVar9._8_4_;
    param_2[0x17] = auVar9._12_4_;
    param_2[0x18] = auVar17._0_4_;
    param_2[0x19] = auVar17._4_4_;
    param_2[0x1a] = auVar17._8_4_;
    param_2[0x1b] = auVar17._12_4_;
    param_2[0x1c] = auVar15._0_4_;
    param_2[0x1d] = auVar15._4_4_;
    param_2[0x1e] = auVar15._8_4_;
    param_2[0x1f] = auVar15._12_4_;
  }
  return;
}


// ==== FUN_002707a8 @ 002707a8 ====

void FUN_002707a8(void)

{
  long in_a3;
  
  if (in_a3 == 0) {
    FUN_002707d8();
  }
  else {
    FUN_002707d8();
  }
  return;
}


// ==== FUN_002707d8 @ 002707d8 ====

void FUN_002707d8(undefined4 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = false;
  if (param_3 == (int *)0x0) {
    *(undefined4 *)((int)param_2 + (int)param_5 * 4 + 0x2cc) = 0;
  }
  else {
    iVar4 = (int)param_2 + 0x2cc;
    iVar3 = (int)param_5 * 4;
    if ((((param_3 != *(int **)(iVar4 + iVar3)) &&
         (bVar2 = true, (*(byte *)(param_3 + 8) & 0x80) == 0)) && (param_3[1] != 0)) &&
       (param_3[0x23] == 0)) {
      FUN_00270d80(param_2,param_3,1);
      bVar2 = true;
    }
    *(int **)(iVar4 + iVar3) = param_3;
    if (((*(byte *)(param_3 + 8) & 7) == 2) || (param_3[0x23] != 0)) {
      if (bVar2) {
        bVar1 = *(byte *)((int)param_3 + 0x4a);
      }
      else {
        if ((*(byte *)(param_3 + 8) & 7) != 2) {
          return;
        }
        if ((int *)*param_3 == param_3) {
          return;
        }
        bVar1 = *(byte *)((int)param_3 + 0x4a);
      }
      FUN_002705a8(param_1,param_2,param_3 + 0xd,bVar1 >> 2,param_4,param_5,param_6);
    }
  }
  return;
}


// ==== FUN_00270938 @ 00270938 ====

void FUN_00270938(undefined4 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if ((param_3 == 0) || (param_4 == 0)) {
    *(undefined4 *)(iVar4 + 0x2d0) = 0;
    *(undefined4 *)(iVar4 + 0x2cc) = 0;
    return;
  }
  if ((*(int *)(param_3 + 0x8c) != 0) && (*(int *)(param_4 + 0x8c) != 0)) goto LAB_00270b08;
  bVar3 = false;
  if (*(int *)(param_3 + 0x8c) == 0) {
    iVar2 = param_3;
    if (*(int *)(param_4 + 0x8c) == 0) {
      iVar1 = iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100;
      if (((uint)(*(int *)(iVar1 + 0xc4) + *(int *)(param_3 + 100) + *(int *)(param_4 + 100)) <=
           *(uint *)(iVar4 + 0x2dc)) && (*(int *)(iVar1 + 0xc0) < *(int *)(iVar4 + 0x2e8))) {
        FUN_00270d80(param_2,param_4,1);
        goto LAB_00270aa4;
      }
    }
    else {
      iVar1 = iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100;
      if (((uint)(*(int *)(iVar1 + 0xc4) + *(int *)(param_3 + 100)) <= *(uint *)(iVar4 + 0x2dc)) &&
         (*(int *)(iVar1 + 0xc0) < *(int *)(iVar4 + 0x2e8))) {
LAB_00270aa4:
        FUN_00270d80(param_2,iVar2,1);
        bVar3 = true;
      }
    }
  }
  else if (((*(int *)(param_4 + 0x8c) == 0) &&
           (iVar1 = iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100,
           (uint)(*(int *)(iVar1 + 0xc4) + *(int *)(param_4 + 100)) <= *(uint *)(iVar4 + 0x2dc))) &&
          (iVar2 = param_4, *(int *)(iVar1 + 0xc0) < *(int *)(iVar4 + 0x2e8))) goto LAB_00270aa4;
  if ((!bVar3) &&
     ((uint)(*(int *)(param_3 + 100) + *(int *)(param_4 + 100)) <= *(uint *)(iVar4 + 0x2dc))) {
    FUN_00270fd8(param_2);
    FUN_00270d80(param_2,param_4,1);
    FUN_00270d80(param_2,param_3,1);
  }
LAB_00270b08:
  if (param_4 != *(int *)(iVar4 + 0x2d0)) {
    FUN_002705a8(param_1,param_2,param_4 + 0x34,*(byte *)(param_4 + 0x4a) >> 2,param_5,1,0);
  }
  if (param_3 != *(int *)(iVar4 + 0x2cc)) {
    FUN_002705a8(param_1,param_2,param_3 + 0x34,*(byte *)(param_3 + 0x4a) >> 2,param_5,0,0);
  }
  *(int *)(iVar4 + 0x2cc) = param_3;
  *(int *)(iVar4 + 0x2d0) = param_4;
  return;
}


// ==== FUN_00270b98 @ 00270b98 ====

void FUN_00270b98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100 + 0xc0);
  iVar7 = (int)param_2 + DAT_0040e688;
  if ((iVar1 == 0) || (DAT_0040e5f4 == 0)) {
    if (DAT_0040e5f4 == 0) {
      *(undefined4 *)(iVar4 + 0x2c8) = 0;
    }
    iVar5 = *(int *)(iVar4 + 0x2e8) * 0x18;
    *(undefined4 *)(iVar4 + 0x2d4) = 0;
    if (*(int *)(iVar4 + 0x2f8) == 0) {
      iVar5 = *(int *)(iVar4 + 0x2f4) * 0x18 + iVar5;
    }
    FUN_002b4578(*(undefined1 *)(iVar4 + 0x2c5),iVar5);
    iVar5 = *(int *)(iVar4 + 0x2c0);
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x2c0);
  }
  iVar1 = iVar1 * 4;
  *(int *)(iVar4 + iVar1 + iVar5 * 0x100 + 200) = (int)param_2;
  *(int *)(iVar7 + 0x58) = iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100 + iVar1 + 200;
  uVar6 = *(int *)(iVar4 + *(int *)(iVar4 + 0x2c0) * 4 + 0x2e0) +
          *(int *)(iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100 + 0xc4);
  FUN_00270408(param_1,param_2,uVar6);
  uVar6 = uVar6 >> 6;
  uVar2 = (long)(int)uVar6 & 0x3fff;
  uVar3 = uVar2 | uVar2 << 0x14 | uVar2 << 0x28;
  *(uint *)(iVar7 + 0xc) =
       *(uint *)(iVar7 + 0xc) & 0xfff8001f | (uVar6 + *(int *)(iVar7 + 0x10) & 0x3fff) << 5;
  *(ulong *)(iVar7 + 0x18) = *(long *)(iVar7 + 0x18) + uVar3;
  *(ulong *)(iVar7 + 0x20) = *(long *)(iVar7 + 0x20) + uVar3;
  *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffc000 | (uint)uVar2;
  iVar1 = iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100;
  *(int *)(iVar1 + 0xc4) = *(int *)(iVar1 + 0xc4) + *(int *)(iVar7 + 0x30);
  iVar4 = iVar4 + *(int *)(iVar4 + 0x2c0) * 0x100;
  *(int *)(iVar4 + 0xc0) = *(int *)(iVar4 + 0xc0) + 1;
  return;
}


// ==== FUN_00270d80 @ 00270d80 ====

undefined4 FUN_00270d80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar3 = (int)param_2 + DAT_0040e688;
  iVar2 = iVar7 + *(int *)(iVar7 + 0x2c0) * 0x100;
  if (*(uint *)(iVar7 + 0x2dc) < (uint)(*(int *)(iVar2 + 0xc4) + *(int *)(iVar3 + 0x30))) {
    uVar1 = *(uint *)(iVar3 + 0x30);
LAB_00270e00:
    if (uVar1 <= *(uint *)(iVar7 + 0x2dc)) {
      iVar2 = *(int *)(iVar7 + 0x2c0);
      iVar3 = 0;
      if (0 < *(int *)(iVar7 + iVar2 * 0x100 + 0xc0)) {
        do {
          iVar4 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          FUN_00270338(param_1,*(undefined4 *)(iVar7 + 200 + iVar4 + iVar2 * 0x100));
          *(undefined4 *)(iVar7 + 200 + iVar4 + *(int *)(iVar7 + 0x2c0) * 0x100) = 0;
          iVar2 = *(int *)(iVar7 + 0x2c0);
        } while (iVar3 < *(int *)(iVar7 + iVar2 * 0x100 + 0xc0));
      }
      *(undefined4 *)(iVar7 + *(int *)(iVar7 + 0x2c0) * 0x100 + 0xc0) = 0;
      *(undefined4 *)(iVar7 + *(int *)(iVar7 + 0x2c0) * 0x100 + 0xc4) = 0;
      if (*(char *)(iVar7 + 0x329) == '\0') {
        *(int *)(iVar7 + 0x2c0) = 1 - *(int *)(iVar7 + 0x2c0);
        *(undefined4 *)(iVar7 + 0x2c8) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x2c8) = 0;
      }
      goto LAB_00270ec0;
    }
    if (*(uint *)(iVar7 + 0x2dc) << 1 < uVar1) {
      return 0;
    }
    if (*(char *)(iVar7 + 0x329) != '\0') {
      return 0;
    }
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 0x100;
      iVar2 = iVar2 + 1;
      iVar4 = 0;
      if (0 < *(int *)(iVar7 + iVar3 + 0xc0)) {
        iVar5 = 0;
        do {
          puVar6 = (undefined4 *)(iVar7 + 200 + iVar5 + iVar3);
          iVar4 = iVar4 + 1;
          FUN_00270338(param_1,*puVar6);
          *puVar6 = 0;
          iVar5 = iVar4 * 4;
        } while (iVar4 < *(int *)(iVar7 + iVar3 + 0xc0));
      }
      *(undefined4 *)(iVar7 + iVar3 + 0xc4) = 0;
      *(undefined4 *)(iVar7 + iVar3 + 0xc0) = 0;
    } while (iVar2 < 2);
    *(undefined4 *)(iVar7 + 0x2c0) = 0;
    *(undefined4 *)(iVar7 + 0x2c8) = 0;
    *(undefined1 *)(iVar7 + 0x2c5) = 0;
    FUN_00270b98(param_1,param_2);
    DAT_0040e5f8 = 0;
  }
  else {
    if (*(int *)(iVar7 + 0x2e8) <= *(int *)(iVar2 + 0xc0)) {
      uVar1 = *(uint *)(iVar3 + 0x30);
      goto LAB_00270e00;
    }
LAB_00270ec0:
    FUN_00270b98(param_1,param_2);
    if (*(char *)(iVar7 + 0x329) != '\0') {
      iVar2 = *(int *)(iVar7 + 0x2f8);
      goto LAB_00270f98;
    }
    *(undefined1 *)(iVar7 + 0x2c5) = 1;
  }
  iVar2 = *(int *)(iVar7 + 0x2f8);
LAB_00270f98:
  *(undefined1 *)(iVar7 + 0x2c4) = 0;
  *(int *)(iVar7 + 0x2f8) = iVar2 + 1;
  return 1;
}


// ==== FUN_00270fd8 @ 00270fd8 ====

void FUN_00270fd8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x2c0);
  iVar2 = *(int *)(iVar3 + iVar1 * 0x100 + 0xc0);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        FUN_00270338(param_1,*(undefined4 *)(iVar3 + 200 + iVar2 + iVar1 * 0x100));
        *(undefined4 *)(iVar3 + 200 + iVar2 + *(int *)(iVar3 + 0x2c0) * 0x100) = 0;
        iVar1 = *(int *)(iVar3 + 0x2c0);
      } while (iVar4 < *(int *)(iVar3 + iVar1 * 0x100 + 0xc0));
    }
    *(undefined4 *)(iVar3 + *(int *)(iVar3 + 0x2c0) * 0x100 + 0xc0) = 0;
    *(undefined4 *)(iVar3 + *(int *)(iVar3 + 0x2c0) * 0x100 + 0xc4) = 0;
    *(undefined4 *)(iVar3 + 0x2c8) = 0;
    *(int *)(iVar3 + 0x2c0) = 1 - *(int *)(iVar3 + 0x2c0);
  }
  DAT_0040e690 = 0;
  *(undefined4 *)(iVar3 + 0x2d0) = 0;
  *(undefined4 *)(iVar3 + 0x2cc) = 0;
  return;
}


// ==== FUN_002710d8 @ 002710d8 ====

void FUN_002710d8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x2c4) == '\0') {
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc0)) {
      puVar1 = (undefined4 *)(iVar2 + 200);
      do {
        iVar3 = iVar3 + 1;
        FUN_00270338(param_1,*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0xc0));
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 0x1c0)) {
      puVar1 = (undefined4 *)(iVar2 + 0x1c8);
      do {
        iVar3 = iVar3 + 1;
        FUN_00270338(param_1,*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      } while (iVar3 < *(int *)(iVar2 + 0x1c0));
    }
    *(undefined1 *)(iVar2 + 0x2c4) = 1;
    *(undefined4 *)(iVar2 + 0x2d0) = 0;
    *(int *)(iVar2 + 0x2c0) = 1 - *(int *)(iVar2 + 0x2c0);
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0x1c0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
    *(undefined4 *)(iVar2 + 0x1c4) = 0;
    *(undefined4 *)(iVar2 + 0x2c8) = 0;
    *(undefined4 *)(iVar2 + 0x2cc) = 0;
  }
  DAT_0040e690 = 0;
  return;
}


// ==== FUN_002711c0 @ 002711c0 ====

undefined4 FUN_002711c0(int param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x2c5) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  else {
    FUN_002710d8();
    if (param_3 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x2f0);
    }
    else {
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2ec);
      uVar1 = *(undefined4 *)(param_1 + 0x2f0);
    }
  }
  *(char *)(param_1 + 0x328) = (char)param_2;
  return uVar1;
}


// ==== FUN_00271230 @ 00271230 ====

undefined4 FUN_00271230(undefined8 param_1,undefined1 param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (int)param_1;
  if (0 < *(int *)(iVar2 + 0xc0)) {
    puVar1 = (undefined4 *)(iVar2 + 200);
    do {
      iVar3 = iVar3 + 1;
      FUN_00270338(param_1,*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0xc0));
  }
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x1c0)) {
    puVar1 = (undefined4 *)(iVar2 + 0x1c8);
    do {
      iVar3 = iVar3 + 1;
      FUN_00270338(param_1,*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x1c0));
  }
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined1 *)(iVar2 + 0x2c4) = 1;
  *(undefined4 *)(iVar2 + 0x1c0) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(undefined4 *)(iVar2 + 0x1c4) = 0;
  *(undefined4 *)(iVar2 + 0x2cc) = 0;
  *(undefined4 *)(iVar2 + 0x2d0) = 0;
  DAT_0040e690 = 0;
  *(undefined1 *)(iVar2 + 0x329) = param_2;
  *(undefined1 *)(iVar2 + 0x2c5) = 0;
  *(undefined4 *)(iVar2 + 0x2c8) = 0;
  if (param_3 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(iVar2 + 0x2dc);
  }
  return *(undefined4 *)(iVar2 + 0x2e0 + (1 - *(int *)(iVar2 + 0x2c0)) * 4);
}


// ==== FUN_00271348 @ 00271348 ====

void FUN_00271348(void)

{
  GetThreadId();
  return;
}


// ==== FUN_00271368 @ 00271368 ====

void FUN_00271368(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  ChangeThreadPriority(uVar1,param_1 + 1);
  return;
}


// ==== FUN_00271398 @ 00271398 ====

undefined8
FUN_00271398(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined8 uVar1;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  int iStack_4c;
  
  iStack_4c = param_5 + 1;
  puStack_50 = &_mips_gp0_value;
  uStack_5c = param_1;
  uStack_58 = param_3;
  uStack_54 = param_4;
  uVar1 = CreateThread(auStack_60);
  FUN_00368738(uVar1,param_2);
  return uVar1;
}


// ==== FUN_00271408 @ 00271408 ====

void FUN_00271408(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_004406c0;
  iVar3 = 0;
  do {
    puVar1 = &DAT_004406e0 + iVar3;
    *puVar2 = 0xffffffff;
    iVar3 = iVar3 + 1;
    *puVar1 = 0;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 8);
  DAT_003bfb30 = AddIntcHandler(2,0x271558,0);
  FUN_003682d0(2);
  return;
}


// ==== FUN_00271480 @ 00271480 ====

void FUN_00271480(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_0036d518();
  do {
    if (7 < iVar3) {
LAB_002714ec:
      FUN_0036d568();
      cVar1 = (&DAT_004406e0)[iVar3];
      while (cVar1 == '\0') {
        SleepThread();
        cVar1 = (&DAT_004406e0)[iVar3];
      }
      (&DAT_004406c0)[iVar3] = 0xffffffff;
      return;
    }
    if ((&DAT_004406c0)[iVar3] == -1) {
      (&DAT_004406e0)[iVar3] = 0;
      iVar2 = GetThreadId();
      (&DAT_004406c0)[iVar3] = iVar2;
      goto LAB_002714ec;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


// ==== FUN_00271558 @ 00271558 ====

undefined8 FUN_00271558(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_004406c0;
  do {
    if (*piVar2 != -1) {
      FUN_003685d0(*piVar2);
      (&DAT_004406e0)[iVar1] = 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 8);
  SYNC(0);
  EI();
  return 0;
}


// ==== FUN_002715f0 @ 002715f0 ====

void FUN_002715f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003685d0(param_3);
  return;
}


// ==== FUN_00271610 @ 00271610 ====

void FUN_00271610(undefined2 param_1)

{
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  SetAlarm(param_1,0x2715f0,uVar1);
  SleepThread();
  return;
}


// ==== FUN_00271650 @ 00271650 ====

void FUN_00271650(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}


// ==== FUN_00271668 @ 00271668 ====

undefined4
FUN_00271668(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 + 3;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  iVar2 = param_4 + 3;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  iVar3 = iVar3 >> 2;
  param_1[5] = param_5;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = iVar3;
  param_1[2] = iVar2 >> 2;
  if (param_3 != iVar3 << 2) {
    param_1[1] = iVar3 + 1;
  }
  if (param_4 == (iVar2 >> 2) << 2) {
    iVar3 = param_1[3];
  }
  else {
    param_1[2] = param_1[2] + 1;
    iVar3 = param_1[3];
  }
  uVar1 = FUN_00274f80(param_2,iVar3 * param_1[4] * 0x400);
  *param_1 = uVar1;
  return 1;
}


// ==== FUN_00271710 @ 00271710 ====

void FUN_00271710(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}


// ==== FUN_00271728 @ 00271728 ====

void FUN_00271728(int *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined4 *puVar8;
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
  undefined8 in_v1_udw;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 in_a0_udw;
  int iVar27;
  undefined8 in_a2_udw;
  undefined1 auVar28 [16];
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  undefined4 *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong in_t5_udw;
  int iVar32;
  
  iVar32 = *param_1 + param_2 * 4 * param_1[4] * 0x400 + param_3 * 0x1000;
  FUN_002b3d88(0,0x20);
  auVar30._8_8_ = in_a3_udw;
  auVar30._0_8_ = 0x5000000400000000;
  auVar31._8_8_ = in_t0_udw;
  auVar31._0_8_ = 0x10000004;
  auVar9 = _pcpyld(auVar30,auVar31);
  *DAT_0040e5f0 = auVar9._0_4_;
  DAT_0040e5f0[1] = auVar9._4_4_;
  DAT_0040e5f0[2] = auVar9._8_4_;
  DAT_0040e5f0[3] = auVar9._12_4_;
  auVar10._8_8_ = auVar9._8_8_;
  auVar10._0_8_ = 0x1000000000008003;
  auVar28._8_8_ = in_a2_udw;
  auVar28._0_8_ = 0xe;
  auVar9 = _pcpyld(auVar28,auVar10);
  DAT_0040e5f0[4] = auVar9._0_4_;
  DAT_0040e5f0[5] = auVar9._4_4_;
  DAT_0040e5f0[6] = auVar9._8_4_;
  DAT_0040e5f0[7] = auVar9._12_4_;
  auVar11._8_8_ = auVar9._8_8_;
  auVar11._0_8_ = 0x50;
  auVar21._0_8_ = (long)param_1[5] << 0x20 | 0x1000000000000;
  auVar21._8_8_ = in_v1_udw;
  auVar9 = _pcpyld(auVar11,auVar21);
  DAT_0040e5f0[8] = auVar9._0_4_;
  DAT_0040e5f0[9] = auVar9._4_4_;
  DAT_0040e5f0[10] = auVar9._8_4_;
  DAT_0040e5f0[0xb] = auVar9._12_4_;
  auVar12._8_8_ = auVar9._8_8_;
  auVar12._0_8_ = 0x52;
  auVar22._8_8_ = in_v1_udw;
  auVar22._0_8_ = 0x4000000010;
  auVar9 = _pcpyld(auVar12,auVar22);
  DAT_0040e5f0[0xc] = auVar9._0_4_;
  DAT_0040e5f0[0xd] = auVar9._4_4_;
  DAT_0040e5f0[0xe] = auVar9._8_4_;
  DAT_0040e5f0[0xf] = auVar9._12_4_;
  auVar23._8_8_ = in_v1_udw;
  auVar23._0_8_ = 6;
  auVar13._8_8_ = auVar9._8_8_;
  auVar9._8_8_ = in_a0_udw;
  auVar9._0_8_ = (long)param_1[5] | 0x198004000;
  auVar9 = _pcpyld(auVar23,auVar9);
  DAT_0040e5f0[0x10] = auVar9._0_4_;
  DAT_0040e5f0[0x11] = auVar9._4_4_;
  DAT_0040e5f0[0x12] = auVar9._8_4_;
  DAT_0040e5f0[0x13] = auVar9._12_4_;
  iVar27 = 0;
  auVar13._0_8_ = 0x1000000000008002;
  auVar24._8_8_ = auVar9._8_8_;
  auVar24._0_8_ = 0x53;
  auVar31 = _pcpyld(auVar28,auVar13);
  auVar15._8_8_ = in_a3_udw;
  auVar15._0_8_ = 0x5000000400000000;
  auVar1._8_8_ = in_t0_udw;
  auVar1._0_8_ = 0x10000004;
  auVar9 = _pcpyld(auVar15,auVar1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_t5_udw;
  auVar30 = _pcpyld(auVar24,auVar4 << 0x40);
  puVar8 = DAT_0040e5f0 + 0x14;
  do {
    puVar29 = puVar8;
    *puVar29 = auVar9._0_4_;
    puVar29[1] = auVar9._4_4_;
    puVar29[2] = auVar9._8_4_;
    puVar29[3] = auVar9._12_4_;
    puVar29[4] = auVar31._0_4_;
    puVar29[5] = auVar31._4_4_;
    puVar29[6] = auVar31._8_4_;
    puVar29[7] = auVar31._12_4_;
    auVar14._8_8_ = auVar13._8_8_;
    auVar14._0_8_ = (long)(iVar27 << 4) << 0x20;
    auVar3._8_8_ = in_t1_udw;
    auVar3._0_8_ = 0x51;
    auVar15 = _pcpyld(auVar3,auVar14);
    puVar29[8] = auVar15._0_4_;
    puVar29[9] = auVar15._4_4_;
    puVar29[10] = auVar15._8_4_;
    puVar29[0xb] = auVar15._12_4_;
    puVar29[0xc] = auVar30._0_4_;
    puVar29[0xd] = auVar30._4_4_;
    puVar29[0xe] = auVar30._8_4_;
    puVar29[0xf] = auVar30._12_4_;
    auVar16._8_8_ = auVar15._8_8_;
    uVar6 = 0x800000000000000;
    if (iVar27 == 3) {
      uVar6 = 0x800000000008000;
    }
    auVar16._0_8_ = uVar6 | 0x100;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = in_t5_udw;
    auVar15 = _pcpyld(auVar5 << 0x40,auVar16);
    puVar29[0x10] = auVar15._0_4_;
    puVar29[0x11] = auVar15._4_4_;
    puVar29[0x12] = auVar15._8_4_;
    puVar29[0x13] = auVar15._12_4_;
    auVar17._8_8_ = auVar15._8_8_;
    auVar17._0_8_ = (long)iVar32 << 0x20 | 0x30000100;
    auVar2._8_8_ = in_t0_udw;
    auVar2._0_8_ = 0x5000010000000000;
    auVar15 = _pcpyld(auVar2,auVar17);
    puVar29[0x14] = auVar15._0_4_;
    puVar29[0x15] = auVar15._4_4_;
    puVar29[0x16] = auVar15._8_4_;
    puVar29[0x17] = auVar15._12_4_;
    auVar13._8_8_ = auVar15._8_8_;
    auVar13._0_8_ = (long)(param_1[4] * 0x400);
    iVar27 = iVar27 + 1;
    auVar24._0_8_ = CONCAT71(0,iVar27 < 4);
    iVar32 = iVar32 + param_1[4] * 0x400;
    puVar8 = puVar29 + 0x18;
  } while (auVar24._0_8_ != 0);
  auVar25._8_8_ = auVar24._8_8_;
  auVar25._0_8_ = 0x10000002;
  auVar18._8_8_ = auVar13._8_8_;
  auVar18._0_8_ = 0x5000000200000000;
  auVar9 = _pcpyld(auVar18,auVar25);
  puVar29[0x18] = auVar9._0_4_;
  puVar29[0x19] = auVar9._4_4_;
  puVar29[0x1a] = auVar9._8_4_;
  puVar29[0x1b] = auVar9._12_4_;
  auVar26._8_8_ = auVar24._8_8_;
  auVar26._0_8_ = 0x1000000000008001;
  auVar19._8_8_ = auVar9._8_8_;
  auVar19._0_8_ = 0xe;
  auVar9 = _pcpyld(auVar19,auVar26);
  puVar29[0x1c] = auVar9._0_4_;
  puVar29[0x1d] = auVar9._4_4_;
  puVar29[0x1e] = auVar9._8_4_;
  puVar29[0x1f] = auVar9._12_4_;
  auVar20._8_8_ = auVar9._8_8_;
  auVar20._0_8_ = 0x3f;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar24._8_8_;
  auVar9 = _pcpyld(auVar20,auVar7 << 0x40);
  puVar29[0x20] = auVar9._0_4_;
  puVar29[0x21] = auVar9._4_4_;
  puVar29[0x22] = auVar9._8_4_;
  puVar29[0x23] = auVar9._12_4_;
  DAT_0040e5f0 = puVar29 + 0x24;
  return;
}


// ==== FUN_00271968 @ 00271968 ====

undefined4 FUN_00271968(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_0028f618(param_3 + 0xb8);
  return 1;
}


// ==== FUN_00271988 @ 00271988 ====

undefined4 FUN_00271988(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_0028f718(param_3 + 0xb8);
  return 1;
}


// ==== FUN_002719a8 @ 002719a8 ====

bool FUN_002719a8(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0028fa60(param_1 + 0xb8);
  return lVar1 < 0x10000;
}


// ==== FUN_002719d0 @ 002719d0 ====

void FUN_002719d0(int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  
  if (((*(int *)(param_1 + 0x68) == 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x28),
      lVar2 = (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 100) + (int)*(short *)(iVar1 + 0x40)),
      lVar2 == 1)) && (*(char *)(param_1 + 0x44) != '\x01')) {
    FUN_0028f2c0(param_1 + 0xb8,&uStack_50,(uint)&uStack_50 | 4,(uint)&uStack_50 | 8,
                 (uint)&uStack_50 | 0xc);
    uStack_50 = uStack_50 & 0xfffffff | 0x20000000;
    param_2 = param_2 << 0x10;
    uStack_48 = uStack_48 & 0xfffffff | 0x20000000;
    if (param_2 <= iStack_4c) {
      iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x28);
      lVar2 = (**(code **)(iVar1 + 0x1c))
                        (*(int *)(param_1 + 100) + (int)*(short *)(iVar1 + 0x18),uStack_50,param_2);
      if (lVar2 < 1) {
        *(undefined1 *)(param_1 + 0x44) = 1;
        if (*(char *)(param_1 + 0x43) != '\0') {
          iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x28);
          (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 100) + (int)*(short *)(iVar1 + 0x28),0,0);
        }
        *(int *)(param_1 + 0x68) = param_2;
      }
      else {
        *(int *)(param_1 + 0x68) = param_2;
      }
    }
  }
  return;
}


// ==== FUN_00271af0 @ 00271af0 ====

void FUN_00271af0(int param_1)

{
  int iVar1;
  long lVar2;
  
  if ((0 < *(int *)(param_1 + 0x68)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x28),
     lVar2 = (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 100) + (int)*(short *)(iVar1 + 0x40)),
     lVar2 == 1)) {
    FUN_0028f3b0(param_1 + 0xb8,*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}


// ==== FUN_00271b50 @ 00271b50 ====

undefined4 FUN_00271b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_002719a8(param_3);
  iVar2 = (int)param_3;
  if (lVar1 == 0) {
    FUN_0028f408(iVar2 + 0xb8);
  }
  else if (*(char *)(iVar2 + 0x44) == '\0') {
    FUN_00271af0(param_3);
    FUN_0028f408(iVar2 + 0xb8);
    FUN_002719d0(param_3,1);
  }
  else {
    *(undefined1 *)(iVar2 + 0x45) = 1;
    FUN_0028f3b0(iVar2 + 0xb8,0x10000);
    FUN_0028f408(iVar2 + 0xb8);
  }
  return 1;
}


// ==== FUN_00271be8 @ 00271be8 ====

void FUN_00271be8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  do {
    FUN_00271650(iVar1);
    iVar1 = iVar1 + 0x18;
  } while (iVar1 < param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 1;
  FUN_00294a08();
  return;
}


// ==== FUN_00271c50 @ 00271c50 ====

undefined4
FUN_00271c50(undefined4 param_1,int param_2,undefined8 param_3,int param_4,int param_5,
            undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_2 + 0x120);
  if (iVar5 != 2) {
    if (iVar5 < 3) {
      if (iVar5 != 1) {
        return 1;
      }
    }
    else if (iVar5 != 0x38) {
      return 1;
    }
    uVar3 = FUN_0027c778(param_6);
    lVar4 = FUN_0027cab8(uVar3,param_6,0x11);
    *(int *)(param_2 + 100) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)((int)param_3 + 0x14);
    iVar7 = param_2 + 0x70;
    FUN_00274f58(param_3,0x80);
    iVar5 = param_4 + 0xf;
    if (-1 < param_4) {
      iVar5 = param_4;
    }
    iVar6 = param_5 + 0xf;
    if (-1 < param_5) {
      iVar6 = param_5;
    }
    *(undefined4 *)(param_2 + 0x3c) = param_1;
    *(undefined4 *)(param_2 + 0x38) = param_1;
    *(int *)(param_2 + 0x48) = iVar5 >> 4;
    *(int *)(param_2 + 0x50) = (iVar5 >> 4) * (iVar6 >> 4);
    iVar8 = (param_4 * param_5 * 9) / 2 + 0x2800;
    *(int *)(param_2 + 0x4c) = iVar6 >> 4;
    uVar2 = FUN_00274f80(param_3,iVar8);
    *(undefined4 *)(param_2 + 0x5c) = uVar2;
    uVar2 = FUN_00274f80(param_3,0x100000);
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    uVar2 = FUN_00274f80(param_3,0x110);
    *(undefined4 *)(param_2 + 0x60) = uVar2;
    uVar2 = *(undefined4 *)(param_2 + 0x48);
    iVar5 = param_2;
    while( true ) {
      FUN_00271668(iVar5,param_3,uVar2,*(undefined4 *)(param_2 + 0x4c),
                   *(undefined4 *)(param_2 + 0x118));
      if (param_2 + 0x30 <= iVar5 + 0x18) break;
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      iVar5 = iVar5 + 0x18;
    }
    FUN_00274f58(param_3,uVar1);
    FUN_00293f60(iVar7,*(undefined4 *)(param_2 + 0x5c),iVar8);
    FUN_00294bb0(iVar7,1,0x271b50,param_2);
    FUN_00294bb0(iVar7,2,0x271968,param_2);
    FUN_00294bb0(iVar7,3,0x271988,param_2);
    FUN_0028f0e8(param_2 + 0xb8,*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x60),0x10
                 ,0,0);
    *(undefined4 *)(param_2 + 0x54) = param_7;
    *(byte *)(param_2 + 0x43) = (byte)param_7 & 1;
    *(undefined1 *)(param_2 + 0x11c) = 0;
    *(undefined1 *)(param_2 + 0x41) = 0;
    *(undefined1 *)(param_2 + 0x42) = 0;
    *(undefined1 *)(param_2 + 0x44) = 0;
    *(undefined1 *)(param_2 + 0x45) = 0;
    *(undefined1 *)(param_2 + 0x46) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x11d) = 0xff;
    *(undefined1 *)(param_2 + 0x40) = 1;
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    FUN_0028f160(param_2 + 0xb8);
    FUN_00294b18(iVar7);
    FUN_002719d0(param_2,8);
    *(undefined4 *)(param_2 + 0x120) = 2;
  }
  FUN_00271af0(param_2);
  lVar4 = FUN_0028fa60(param_2 + 0xb8);
  if (lVar4 < 0x10001) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x120) = 0x1c;
  return 1;
}


// ==== FUN_00271f10 @ 00271f10 ====

void FUN_00271f10(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar5 = (int)param_1;
  if (*(char *)(iVar5 + 0x40) == '\0') {
    return;
  }
  if ((*(char *)(iVar5 + 0x46) != '\0') && (*(char *)(iVar5 + 0x42) == '\0')) {
    return;
  }
  if (*(char *)(iVar5 + 0x42) != '\0') {
    iVar6 = *(int *)(*(int *)(iVar5 + 100) + 0x28);
    lVar1 = (**(code **)(iVar6 + 0x44))(*(int *)(iVar5 + 100) + (int)*(short *)(iVar6 + 0x40));
    if (lVar1 == 0) {
      *(undefined1 *)(iVar5 + 0x42) = 0;
      *(undefined1 *)(iVar5 + 0x41) = 1;
      *(undefined4 *)(iVar5 + 100) = 0;
      *(undefined1 *)(iVar5 + 0x40) = 0;
      *(undefined1 *)(iVar5 + 0x43) = 0;
      return;
    }
    if (lVar1 != 1) {
      return;
    }
    iVar6 = *(int *)(*(int *)(iVar5 + 100) + 0x28);
    (**(code **)(iVar6 + 0x14))(*(int *)(iVar5 + 100) + (int)*(short *)(iVar6 + 0x10));
    return;
  }
  fVar8 = (float)FUN_0029d950(*(float *)(iVar5 + 0x34) / *(float *)(iVar5 + 0x38));
  FUN_00271af0(param_1);
  FUN_002719d0(param_1,1);
  if (*(int *)(iVar5 + 0x30) < (int)fVar8) {
    lVar1 = FUN_0028fa60();
    if (lVar1 < 0x10001) {
      if (*(char *)(iVar5 + 0x44) != '\x01') {
        uVar2 = *(uint *)(iVar5 + 0x54);
        goto LAB_00272194;
      }
      iVar6 = *(int *)(iVar5 + 0x30);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x30);
    }
    iVar7 = iVar5 + 0x70;
    iVar6 = (int)fVar8 - iVar6;
    if (2 < iVar6) {
      iVar6 = 2;
    }
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      FUN_00294ac8(iVar7,*(undefined4 *)(*(char *)(iVar5 + 0x11c) * 0x18 + iVar5),
                   *(undefined4 *)(iVar5 + 0x50));
      *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
      lVar1 = FUN_00294b98(iVar7);
    } while (lVar1 == 0);
    uVar3 = *(byte *)(iVar5 + 0x11c) + 1;
    uVar2 = *(byte *)(iVar5 + 0x11d) + 1;
    iVar4 = uVar3 * 0x1000000;
    iVar6 = uVar2 * 0x1000000;
    *(char *)(iVar5 + 0x11c) =
         (char)((uint)iVar4 >> 0x18) +
         (char)((int)((iVar4 >> 0x18) + ((uVar3 & 0xff) >> 7)) >> 1) * -2;
    *(char *)(iVar5 + 0x11d) =
         (char)((uint)iVar6 >> 0x18) +
         (char)((int)((iVar6 >> 0x18) + ((uVar2 & 0xff) >> 7)) >> 1) * -2;
    lVar1 = FUN_00294b98(iVar7);
    if ((lVar1 == 0) && (*(char *)(iVar5 + 0x45) == '\0')) {
      uVar2 = *(uint *)(iVar5 + 0x54);
      goto LAB_00272194;
    }
    FUN_0028f160(iVar5 + 0xb8);
    FUN_00294b18(iVar7);
    if (*(char *)(iVar5 + 0x43) == '\0') {
      *(undefined1 *)(iVar5 + 0x42) = 1;
    }
    else {
      *(undefined4 *)(iVar5 + 0x30) = 0xffffffff;
      *(undefined1 *)(iVar5 + 0x45) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0;
      if (*(char *)(iVar5 + 0x44) == '\0') {
        iVar6 = *(int *)(iVar5 + 100);
        while (lVar1 = (**(code **)(*(int *)(iVar6 + 0x28) + 0x44))
                                 (iVar6 + *(short *)(*(int *)(iVar6 + 0x28) + 0x40)), lVar1 != 1) {
          iVar6 = *(int *)(iVar5 + 100);
        }
        iVar6 = *(int *)(*(int *)(iVar5 + 100) + 0x28);
        (**(code **)(iVar6 + 0x2c))(*(int *)(iVar5 + 100) + (int)*(short *)(iVar6 + 0x28),0,0);
      }
      else {
        *(undefined1 *)(iVar5 + 0x44) = 0;
      }
      FUN_002719d0(param_1,8);
    }
  }
  uVar2 = *(uint *)(iVar5 + 0x54);
LAB_00272194:
  if ((uVar2 & 2) == 0) {
    *(float *)(iVar5 + 0x34) = *(float *)(iVar5 + 0x34) + *(float *)(iVar5 + 0x3c);
  }
  return;
}


// ==== FUN_002721d8 @ 002721d8 ====

void FUN_002721d8(int param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    FUN_00271710(iVar2);
    iVar2 = iVar2 + 0x18;
  } while (iVar2 < param_1 + 0x30);
  FUN_0028fa08(param_1 + 0xb8);
  FUN_00294ab8(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    iVar2 = *(int *)(param_1 + 100);
    do {
      lVar1 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x44))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x28) + 0x40));
      iVar2 = *(int *)(param_1 + 100);
    } while (lVar1 == 2);
    lVar1 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x44))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x28) + 0x40));
    if (lVar1 == 1) {
      iVar2 = *(int *)(*(int *)(param_1 + 100) + 0x28);
      (**(code **)(iVar2 + 0x14))(*(int *)(param_1 + 100) + (int)*(short *)(iVar2 + 0x10));
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x120) = 0x38;
  return;
}


// ==== FUN_002722b8 @ 002722b8 ====

void FUN_002722b8(int param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0x39;
  return;
}


// ==== FUN_002722c8 @ 002722c8 ====

void FUN_002722c8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}


// ==== FUN_002722d0 @ 002722d0 ====

int FUN_002722d0(int param_1)

{
  if ((*(int *)(param_1 + 0x120) == 0x1c) && (-1 < *(char *)(param_1 + 0x11d))) {
    return *(char *)(param_1 + 0x11d) * 0x18 + param_1;
  }
  return 0;
}


// ==== FUN_00272308 @ 00272308 ====

undefined1 FUN_00272308(int param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}


// ==== FUN_00272310 @ 00272310 ====

void FUN_00272310(int param_1)

{
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}


// ==== FUN_00272328 @ 00272328 ====

void FUN_00272328(int param_1)

{
  *(undefined1 *)(param_1 + 0x46) = 0;
  return;
}


// ==== FUN_00272340 @ 00272340 ====

void FUN_00272340(float param_1)

{
  FUN_002e91c0();
  DAT_003c95a8 = DAT_003c95a8 + param_1;
  return;
}


// ==== FUN_00272378 @ 00272378 ====

void FUN_00272378(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_002e91c0();
  FUN_002e9630(uVar1,param_1);
  return;
}


// ==== FUN_002723b0 @ 002723b0 ====

long FUN_002723b0(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = 0;
  iVar4 = 0;
  if (*param_1 != '\0') {
    lVar2 = 0;
    do {
      cVar1 = *param_1;
      lVar3 = (lVar2 + lVar3) * 8;
      if (cVar1 == '_') {
        lVar3 = lVar3 + 0x27;
      }
      else if (cVar1 < 'a') {
        if (cVar1 < 'A') {
          if (cVar1 < '0') {
            if (cVar1 == '/') {
              lVar3 = lVar3 + 2;
            }
            else if (cVar1 == '-') {
              lVar3 = lVar3 + 1;
            }
          }
          else {
            lVar3 = lVar3 + (cVar1 + -0x2d);
          }
        }
        else {
          lVar3 = lVar3 + (cVar1 + -0x34);
        }
      }
      else {
        lVar3 = lVar3 + (cVar1 + -0x54);
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
      if (0xb < iVar4) {
        return lVar3;
      }
      lVar2 = lVar3 << 2;
    } while (*param_1 != '\0');
  }
  for (; iVar4 < 0xc; iVar4 = iVar4 + 1) {
    lVar3 = lVar3 * 0x28;
  }
  return lVar3;
}


// ==== FUN_00272488 @ 00272488 ====

void FUN_00272488(undefined8 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0xb;
  do {
    cVar1 = FUN_00290ac0(param_1,0x28);
    if (cVar1 == '\'') {
      cVar2 = '_';
    }
    else if (cVar1 < '\r') {
      if (cVar1 < '\x03') {
        if (cVar1 == '\x02') {
          cVar2 = '/';
        }
        else if (cVar1 == '\x01') {
          cVar2 = '-';
        }
        else {
          cVar2 = '\0';
          if (cVar1 == '\0') {
            cVar2 = ' ';
          }
        }
      }
      else {
        cVar2 = cVar1 + '-';
      }
    }
    else {
      cVar2 = cVar1 + '4';
    }
    *(char *)(param_2 + iVar3) = cVar2;
    param_1 = FUN_002904f0(param_1,0x28);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined1 *)(param_2 + 0xc) = 0;
  return;
}


// ==== FUN_00272580 @ 00272580 ====

long FUN_00272580(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (0 < param_2) {
    param_1 = FUN_00290ac0(param_1,*(undefined8 *)(&UNK_00400510 + (0xc - (int)param_2) * 8));
  }
  if (param_3 < 0xb) {
    lVar1 = FUN_00290ac0(param_1,*(undefined8 *)(&UNK_00400510 + (0xb - (int)param_3) * 8));
    param_1 = param_1 - lVar1;
  }
  return param_1;
}


// ==== FUN_00272610 @ 00272610 ====

long FUN_00272610(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    if (0xb < iVar3) break;
    lVar2 = FUN_00290ac0(param_1,*(undefined8 *)(&UNK_00400510 + (iVar3 + 1) * 8));
    iVar1 = iVar3 + 1;
  } while (lVar2 == 0);
  lVar2 = param_1;
  if ((iVar3 != 0) && (lVar2 = param_2, iVar3 != 0xc)) {
    lVar2 = FUN_002904f0(param_2,*(undefined8 *)(&UNK_00400510 + (0xc - iVar3) * 8));
    lVar2 = param_1 + lVar2;
  }
  return lVar2;
}


// ==== FUN_002726d0 @ 002726d0 ====

void FUN_002726d0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  FUN_00272488();
  pcVar1 = param_2 + 0xb;
  if ((param_2[0xb] == ' ') && (param_2 <= pcVar1)) {
    *pcVar1 = '\0';
    while( true ) {
      pcVar1 = pcVar1 + -1;
      if ((*pcVar1 != ' ') || (pcVar1 < param_2)) break;
      *pcVar1 = '\0';
    }
  }
  return;
}


// ==== FUN_00272730 @ 00272730 ====

void FUN_00272730(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_1;
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      piVar2 = (int *)(iVar3 * 4 + iVar1);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        *piVar2 = iVar1 + param_1;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 8) <= iVar3) break;
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


// ==== FUN_00272788 @ 00272788 ====

void FUN_00272788(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 == 0.0) {
    *param_4 = param_3;
    *param_5 = param_3;
    *param_6 = param_3;
  }
  else {
    fVar1 = (float)FUN_0029db30(param_1 * 6.0);
    fVar2 = param_1 * 6.0 - fVar1;
    fVar3 = param_3 * (1.0 - param_2);
    fVar4 = param_3 * (1.0 - param_2 * fVar2);
    fVar2 = param_3 * (1.0 - param_2 * (1.0 - fVar2));
    switch((int)fVar1) {
    case 0:
      *param_4 = param_3;
      *param_5 = fVar2;
      *param_6 = fVar3;
      break;
    case 1:
      *param_4 = fVar4;
      *param_5 = param_3;
      *param_6 = fVar3;
      break;
    case 2:
      *param_4 = fVar3;
      *param_5 = param_3;
      *param_6 = fVar2;
      break;
    case 3:
      *param_4 = fVar3;
      *param_5 = fVar4;
      *param_6 = param_3;
      break;
    case 4:
      *param_4 = fVar2;
      *param_5 = fVar3;
      *param_6 = param_3;
      break;
    case 5:
      *param_4 = param_3;
      *param_5 = fVar3;
      *param_6 = fVar4;
    }
  }
  return;
}


// ==== FUN_002728d0 @ 002728d0 ====

void FUN_002728d0(undefined1 (*param_1) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00272788(&uStack_30,(uint)&uStack_30 | 4,(uint)&uStack_30 | 8);
  _lqc2(*param_1);
  auVar1 = _qmtc2(uStack_30);
  auVar1 = _vaddbc(in_vf0,auVar1);
  auVar2 = _qmtc2(uStack_2c);
  _vmove(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _vaddbc(in_vf0,auVar2);
  auVar2 = _qmtc2(uStack_28);
  _vmove(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _vaddbc(in_vf0,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _qmtc2(0x3f800000);
  auVar1 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}


// ==== FUN_00272960 @ 00272960 ====

void FUN_00272960(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)((int)param_1 * (uint)(param_2 < param_1) |
                 (int)param_2 * (uint)(param_2 >= param_1));
  fVar1 = (float)((int)param_1 * (uint)(param_1 < param_2) |
                 (int)param_2 * (uint)(param_1 >= param_2));
  fVar2 = (float)((int)fVar2 * (uint)(param_3 < fVar2) | (int)param_3 * (uint)(param_3 >= fVar2));
  fVar3 = 0.0;
  fVar1 = fVar2 - (float)((int)fVar1 * (uint)(fVar1 < param_3) |
                         (int)param_3 * (uint)(fVar1 >= param_3));
  if (fVar2 != 0.0) {
    fVar3 = fVar1 / fVar2;
  }
  if (fVar3 == 0.0) {
    fVar4 = 0.0;
  }
  else if (param_1 == fVar2) {
    fVar4 = (param_2 - param_3) / fVar1;
  }
  else {
    if (param_2 == fVar2) {
      param_1 = param_3 - param_1;
      fVar4 = 2.0;
    }
    else {
      param_1 = param_1 - param_2;
      fVar4 = 4.0;
    }
    fVar4 = param_1 / fVar1 + fVar4;
  }
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 6.0;
  }
  *param_4 = fVar4 / 6.0;
  *param_5 = fVar3;
  *param_6 = fVar2;
  return;
}


// ==== FUN_00272a60 @ 00272a60 ====

void FUN_00272a60(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  auVar3 = _qmtc2(param_1);
  auVar1 = _sqc2(auVar3);
  auVar2 = _qmfc2(auVar3._0_4_);
  uStack_1c = auVar1._4_4_;
  auVar1 = _sqc2(auVar3);
  uStack_18 = auVar1._8_4_;
  FUN_00272960(auVar2._0_4_,uStack_1c,uStack_18,param_2,param_3,param_4);
  return;
}


// ==== FUN_00272aa8 @ 00272aa8 ====

void FUN_00272aa8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_1;
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar2 = iVar3 * 0x10;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + iVar1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_1;
      if (*(int *)(param_1 + 8) <= iVar3) break;
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


// ==== FUN_00272af8 @ 00272af8 ====

void FUN_00272af8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_2 + 0x34) = param_3;
  *(undefined4 *)(param_2 + 0x38) = param_4;
  *(undefined4 *)(param_2 + 0x40) = param_5;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  *(undefined4 *)(param_2 + 0x24) = 0x43960000;
  *(undefined4 *)(param_2 + 0x28) = 0x43160000;
  *(undefined4 *)(param_2 + 0x2c) = 0x42960000;
  *(undefined4 *)(param_2 + 0x30) = 0x41200000;
  FUN_00272b78();
  return;
}


// ==== FUN_00272b58 @ 00272b58 ====

void FUN_00272b58(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00272b78 @ 00272b78 ====

undefined4 FUN_00272b78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = param_1 + 0x18;
  *(int *)(param_1 + 0xc) = param_1 + 8;
  *(int *)(param_1 + 0x14) = param_1 + 0x10;
  *(int *)(param_1 + 8) = param_1 + 8;
  *(int *)(param_1 + 0x10) = param_1 + 0x10;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int *)(param_1 + 0x18) = iVar4;
  *(int *)(param_1 + 0x1c) = iVar4;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar3 = *(int *)(param_1 + 0x40);
    while( true ) {
      iVar2 = iVar5 * 0x40;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + iVar2;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(int *)(iVar3 + 0x2c) = iVar3 + 0x28;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(int *)(iVar3 + 0x28) = iVar3 + 0x28;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(int *)(iVar3 + 0x18) = iVar4;
      *(undefined4 *)(iVar3 + 0x14) = uVar1;
      *(int *)(*(int *)(param_1 + 0x18) + 4) = iVar3 + 0x14;
      *(int *)(param_1 + 0x18) = iVar3 + 0x14;
      if (*(int *)(param_1 + 0x38) <= iVar5) break;
      iVar3 = *(int *)(param_1 + 0x40);
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return 1;
}


// ==== FUN_00272c18 @ 00272c18 ====

void FUN_00272c18(undefined4 param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_2 + param_3 * 4 + 0x24) = param_1;
  return;
}


// ==== FUN_00272c28 @ 00272c28 ====

void FUN_00272c28(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  
  *param_2 = (int)param_3;
  param_2[1] = (int)((ulong)param_3 >> 0x20);
  param_2[2] = in_a2_udw;
  param_2[3] = in_register_0000006c;
  param_2[0xd] = param_4;
  param_2[4] = 0;
  param_2[9] = 0;
  FUN_002732e0();
  return;
}


// ==== FUN_00272c58 @ 00272c58 ====

void FUN_00272c58(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x10) == 0) {
    **(undefined4 **)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 4) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  else {
    FUN_002734b8();
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  return;
}


// ==== FUN_00272cc0 @ 00272cc0 ====

void FUN_00272cc0(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  piVar1 = *(int **)(iVar3 + 0xc);
  while (piVar2 = piVar1, piVar2 != (int *)(iVar3 + 8)) {
    piVar1 = (int *)piVar2[1];
    if ((float)piVar2[-2] < *(float *)(iVar3 + 0x24 + (*(int *)(iVar3 + 0x34) + -1) * 4)) {
      if (*(int *)(iVar3 + 0x3c) < *(int *)(iVar3 + 0x34)) break;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_00272de8(param_1,0,param_1,piVar2 + -5,1);
    }
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  while (piVar1 != (int *)(iVar3 + 0x10)) {
    FUN_002730a0(param_1,piVar1 + -7);
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1 = *(int **)(iVar3 + 0x14);
  }
  return;
}


// ==== FUN_00272de8 @ 00272de8 ====

void FUN_00272de8(int param_1,long param_2,int *param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  long lVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_vf3 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  
  pauVar3 = (undefined1 (*) [16])0x0;
  fVar7 = *(float *)(param_1 + (param_5 + -1) * 4 + 0x24);
  bVar2 = false;
  fVar9 = *(float *)(*(undefined1 (*) [16])param_4 + 0xc) +
          *(float *)(param_1 + 0x20) + (float)(*(int *)(param_1 + 0x34) - param_5) * 0.001;
  if ((int *)*param_3 != param_3) {
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _sqc2(auVar10);
    piVar6 = (int *)*param_3;
    do {
      auVar11 = _lqc2(*(undefined1 (*) [16])param_4);
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar6 + -5));
      auVar11 = _vsub(auVar12,auVar11);
      auVar13 = _lqc2(auVar10);
      auVar11 = _vmul(auVar11,auVar11);
      piVar1 = (int *)*piVar6;
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar13,auVar11);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar11);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar11 = _vmulq(auVar11,uVar14);
      auVar11 = _qmfc2(auVar11._0_4_);
      fVar8 = auVar11._0_4_ + fVar9;
      if (fVar8 < fVar7) {
        _vmove(in_vf3);
        if (param_2 != 0) {
          _vadd(in_vf0,auVar12);
          auVar12 = _qmtc2(fVar8);
          auVar11 = _vsubbc(in_vf0,in_vf0);
          auVar11 = _vaddbc(auVar11,auVar12);
          auVar11 = _vmove(auVar11);
          auVar12 = _qmfc2(auVar11._0_4_);
          auVar11 = _sqc2(auVar11);
          lVar5 = FUN_0027efe8(auVar12._0_8_,*(undefined8 *)piVar6[-1]);
          in_vf3 = _lqc2(auVar11);
          if (lVar5 != 2) goto LAB_00272f40;
        }
        fVar7 = fVar8;
        pauVar3 = (undefined1 (*) [16])(piVar6 + -5);
      }
LAB_00272f40:
      piVar6 = piVar1;
    } while (piVar1 != param_3);
  }
  if (pauVar3 == (undefined1 (*) [16])0x0) {
    pauVar3 = (undefined1 (*) [16])FUN_00273378(fVar9);
    if (param_2 != 0) {
      FUN_00273430(param_2,pauVar3);
      if (*(int *)((int)param_2 + 0x24) < 2) {
        iVar4 = *(int *)(param_1 + 0x34);
      }
      else {
        FUN_00273340();
        iVar4 = *(int *)(param_1 + 0x34);
      }
      goto LAB_00273008;
    }
    iVar4 = *param_3;
    *(int **)((int)pauVar3[1] + 8) = param_3;
    *(int *)((int)pauVar3[1] + 4) = iVar4;
    *(int **)(*param_3 + 4) = (int *)((int)pauVar3[1] + 4);
    *param_3 = (int)pauVar3[1] + 4;
  }
  else {
    if (fVar7 <= *(float *)((int)*pauVar3 + 0xc)) {
      iVar4 = *(int *)(param_1 + 0x34);
      goto LAB_00273008;
    }
    auVar12 = _qmtc2(fVar7);
    _lqc2(*pauVar3);
    auVar11 = _vsubbc(in_vf0,in_vf0);
    bVar2 = true;
    auVar10 = _sqc2(auVar11);
    *pauVar3 = auVar10;
    auVar10 = _vaddbc(auVar11,auVar12);
    auVar10 = _sqc2(auVar10);
    *pauVar3 = auVar10;
  }
  iVar4 = *(int *)(param_1 + 0x34);
LAB_00273008:
  if (param_5 == iVar4) {
    FUN_00273430(pauVar3,param_4);
    if ((bVar2) && (1 < *(int *)((int)pauVar3[2] + 4))) {
      FUN_00273340();
    }
  }
  else {
    FUN_00272de8();
  }
  return;
}


// ==== FUN_002730a0 @ 002730a0 ====

void FUN_002730a0(int param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  int *piVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  float fStack_64;
  
  fVar5 = 0.0;
  auVar2 = _pextlw(0,0);
  auVar2 = _pextlw(0,auVar2._0_8_);
  auVar2 = _qmtc2(auVar2._0_4_);
  piVar3 = *(int **)(param_2[2] + 8);
  if (piVar3 != (int *)(param_2[2] + 8)) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(piVar3 + -5));
    while( true ) {
      piVar3 = (int *)*piVar3;
      auVar2 = _vadd(auVar2,auVar6);
      if (piVar3 == (int *)(param_2[2] + 8)) break;
      auVar6 = _lqc2(*(undefined1 (*) [16])(piVar3 + -5));
    }
  }
  piVar3 = *(int **)(param_2[2] + 8);
  piVar4 = (int *)(param_2[2] + 8);
  auVar6 = _qmtc2(1.0 / (float)*(int *)(param_2[2] + 4));
  auVar2 = _vmulbc(auVar2,auVar6);
  auVar2 = _sqc2(auVar2);
  if (piVar3 != piVar4) {
    auVar10 = _lqc2(auVar2);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(piVar3 + -5));
    while( true ) {
      auVar8 = _qmtc2(*(undefined4 *)(param_1 + 0x20));
      auVar7 = _vsub(auVar10,auVar6);
      auVar7 = _vmul(auVar7,auVar7);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar9,auVar7);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar7);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar11);
      auVar7 = _qmfc2(auVar7._0_4_);
      auVar7 = _qmtc2(auVar7._0_4_);
      auVar6 = _vaddbc(auVar6,auVar7);
      auVar6 = _vaddbc(auVar6,auVar8);
      auVar6 = _sqc2(auVar6);
      fStack_64 = auVar6._12_4_;
      if ((fVar5 < fStack_64) && (fVar5 = fStack_64, SUB164(*param_2,0xc) < fStack_64)) {
        return;
      }
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar4) break;
      auVar6 = _lqc2(*(undefined1 (*) [16])(piVar3 + -5));
    }
  }
  auVar9 = _qmtc2(fVar5);
  auVar6 = _sqc2(auVar9);
  if (*(undefined8 **)param_2[1] != (undefined8 *)0x0) {
    auVar10 = _lqc2(auVar2);
    _vadd(in_vf0,auVar10);
    auVar10 = _vsubbc(in_vf0,in_vf0);
    auVar9 = _vaddbc(auVar10,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    lVar1 = FUN_0027efe8(auVar9._0_8_,**(undefined8 **)param_2[1]);
    if (lVar1 != 2) {
      return;
    }
    FUN_00273340();
  }
  auVar2 = _lqc2(auVar2);
  _lqc2(*param_2);
  auVar2 = _vadd(in_vf0,auVar2);
  piVar3 = *(int **)(param_2[2] + 8);
  _vmove(auVar2);
  auVar9 = _vsubbc(in_vf0,in_vf0);
  auVar2 = _sqc2(auVar9);
  *param_2 = auVar2;
  auVar2 = _lqc2(auVar6);
  auVar2 = _vaddbc(auVar9,auVar2);
  auVar2 = _sqc2(auVar2);
  *param_2 = auVar2;
  for (; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(piVar3 + -5));
    auVar2 = _lqc2(*(undefined1 (*) [16])piVar3[-1]);
    auVar2 = _vsubbc(auVar2,auVar6);
    auVar2 = _sqc2(auVar2);
    fStack_64 = auVar2._12_4_;
    piVar3[7] = (int)fStack_64;
    if (((uint)fStack_64 & 0x7f800000) < 0x37800001) {
      piVar3[7] = 0;
    }
    piVar3[7] = (int)((float)piVar3[7] * (float)piVar3[7]);
  }
  return;
}


// ==== FUN_002732e0 @ 002732e0 ====

void FUN_002732e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_002734b8();
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(int *)(param_2 + 0x18) = param_1 + 8;
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(int *)(*(int *)(param_1 + 8) + 4) = param_2 + 0x14;
  *(int *)(param_1 + 8) = param_2 + 0x14;
  return;
}


// ==== FUN_00273340 @ 00273340 ====

void FUN_00273340(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_2 + 0x20) = param_1 + 0x10;
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(int *)(*(int *)(param_1 + 0x10) + 4) = param_2 + 0x1c;
    *(int *)(param_1 + 0x10) = param_2 + 0x1c;
  }
  return;
}


// ==== FUN_00273378 @ 00273378 ====

int * FUN_00273378(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  piVar1 = *(int **)(param_2 + 0x18);
  auVar2 = _qmtc2(param_3);
  auVar4 = _qmtc2(param_1);
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  _lqc2(*(undefined1 (*) [16])(piVar1 + -5));
  auVar2 = _vadd(in_vf0,auVar2);
  _vmove(auVar2);
  auVar3 = _vsubbc(in_vf0,in_vf0);
  auVar2 = _sqc2(auVar3);
  *(undefined1 (*) [16])(piVar1 + -5) = auVar2;
  auVar2 = _vaddbc(auVar3,auVar4);
  auVar2 = _sqc2(auVar2);
  *(undefined1 (*) [16])(piVar1 + -5) = auVar2;
  piVar1[3] = 0;
  piVar1[2] = 0;
  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -1;
  return piVar1 + -5;
}


// ==== FUN_002733e0 @ 002733e0 ====

void FUN_002733e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    **(int **)(param_2 + 0x20) = *(int *)(param_2 + 0x1c);
    *(undefined4 *)(*(int *)(param_2 + 0x1c) + 4) = *(undefined4 *)(param_2 + 0x20);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_2 + 0x18) = param_1 + 0x18;
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(int *)(*(int *)(param_1 + 0x18) + 4) = param_2 + 0x14;
  *(int *)(param_1 + 0x18) = param_2 + 0x14;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}


// ==== FUN_00273430 @ 00273430 ====

void FUN_00273430(int param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uStack_4;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  *(int *)param_2[1] = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(int *)(param_2[1] + 8) = param_1 + 0x28;
  *(undefined4 *)(param_2[1] + 4) = uVar1;
  *(undefined1 **)(*(int *)(param_1 + 0x28) + 4) = param_2[1] + 4;
  *(undefined1 **)(param_1 + 0x28) = param_2[1] + 4;
  auVar3 = _lqc2(*param_2);
  auVar2 = _lqc2(**(undefined1 (**) [16])param_2[1]);
  auVar2 = _vsubbc(auVar2,auVar3);
  auVar2 = _sqc2(auVar2);
  uStack_4 = auVar2._12_4_;
  *(uint *)param_2[3] = uStack_4;
  if ((uStack_4 & 0x7f800000) < 0x37800001) {
    *(undefined4 *)param_2[3] = 0;
  }
  *(float *)param_2[3] = *(float *)param_2[3] * *(float *)param_2[3];
  return;
}


// ==== FUN_002734b8 @ 002734b8 ====

void FUN_002734b8(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  **(undefined4 **)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(*(int *)(param_2 + 0x14) + 4) = *(undefined4 *)(param_2 + 0x18);
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (*(int *)(iVar1 + 0x24) == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      **(undefined4 **)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x14);
      *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4) = *(undefined4 *)(iVar1 + 0x18);
    }
    else {
      FUN_002734b8(param_1,iVar1);
    }
    FUN_002733e0(param_1,iVar1);
  }
  else {
    FUN_00273340(param_1,iVar1);
  }
  return;
}


// ==== FUN_00273568 @ 00273568 ====

void FUN_00273568(undefined4 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  puVar2 = (undefined4 *)*param_1;
  uStack_80 = (undefined4)param_2;
  uStack_7c = (undefined4)((ulong)param_2 >> 0x20);
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = &uStack_80;
  param_1[0x16] = param_3;
  param_1[0x19] = (int)param_4;
  for (; puVar2 != param_1; puVar2 = (undefined4 *)*puVar2) {
    lVar1 = FUN_00273648(param_1,puVar2 + -5,1);
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      return;
    }
  }
  puVar2 = (undefined4 *)param_1[2];
  while (puVar2 != param_1 + 2) {
    lVar1 = FUN_0027efe8(*(undefined8 *)(puVar2 + -5),CONCAT44(uStack_7c,uStack_80));
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      lVar1 = (*param_3)(puVar2 + -5,lVar1,param_4);
      if (lVar1 == 0) break;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}


// ==== FUN_00273648 @ 00273648 ====

undefined8 FUN_00273648(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  puVar5 = (undefined8 *)param_2;
  if ((param_3 == 1) &&
     (param_3 = FUN_0027efe8(*puVar5,**(undefined8 **)(iVar6 + 0x48)), param_3 == 0)) {
    return 1;
  }
  if (*(int *)((int)puVar5 + 0x24) == 0) {
    uVar1 = (**(code **)(iVar6 + 0x58))(param_2,param_3,*(undefined4 *)(iVar6 + 100));
  }
  else {
    piVar4 = *(int **)(puVar5 + 5);
    uVar1 = 1;
    if (piVar4 != (int *)(puVar5 + 5)) {
      do {
        piVar3 = piVar4 + -5;
        piVar4 = (int *)*piVar4;
        lVar2 = FUN_00273648(param_1,piVar3,param_3);
        if (lVar2 == 0) {
          return 0;
        }
      } while (piVar4 != (int *)(puVar5 + 5));
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_00273708 @ 00273708 ====

void FUN_00273708(undefined4 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x13] = (int)param_2;
  param_1[0x16] = param_3;
  param_1[0x19] = (int)param_4;
  for (; puVar2 != param_1; puVar2 = (undefined4 *)*puVar2) {
    lVar1 = FUN_002737e8(param_1,puVar2 + -5);
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      return;
    }
  }
  puVar2 = (undefined4 *)param_1[2];
  while (puVar2 != param_1 + 2) {
    lVar1 = FUN_0026f190(param_2,*(undefined8 *)(puVar2 + -5));
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      lVar1 = (*param_3)(puVar2 + -5,lVar1,param_4);
      if (lVar1 == 0) break;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}


// ==== FUN_002737e8 @ 002737e8 ====

undefined8 FUN_002737e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)param_2;
  iVar6 = (int)param_1;
  lVar1 = FUN_0026f190(*(undefined4 *)(iVar6 + 0x4c),*puVar5);
  uVar2 = 1;
  if (lVar1 != 0) {
    if (*(int *)((int)puVar5 + 0x24) == 0) {
      uVar2 = (**(code **)(iVar6 + 0x58))(param_2,lVar1,*(undefined4 *)(iVar6 + 100));
    }
    else {
      piVar4 = *(int **)(puVar5 + 5);
      uVar2 = 1;
      if (piVar4 != (int *)(puVar5 + 5)) {
        do {
          piVar3 = piVar4 + -5;
          piVar4 = (int *)*piVar4;
          lVar1 = FUN_002737e8(param_1,piVar3);
          if (lVar1 == 0) {
            return 0;
          }
        } while (piVar4 != (int *)(puVar5 + 5));
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// ==== FUN_00273888 @ 00273888 ====

void FUN_00273888(undefined4 *param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x14] = param_2;
  param_1[0x16] = param_3;
  param_1[0x19] = (int)param_4;
  for (; puVar3 != param_1; puVar3 = (undefined4 *)*puVar3) {
    FUN_00273960(param_1,puVar3 + -5,1);
  }
  puVar3 = (undefined4 *)param_1[2];
  if (puVar3 == param_1 + 2) {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(puVar3 + -5);
    while( true ) {
      lVar1 = FUN_0026f0b0(uVar2,param_1[0x14]);
      if (lVar1 != 0) {
        (*param_3)(puVar3 + -5,lVar1,param_4);
      }
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3 == param_1 + 2) break;
      uVar2 = *(undefined8 *)(puVar3 + -5);
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}


// ==== FUN_00273960 @ 00273960 ====

void FUN_00273960(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)param_2;
  iVar4 = (int)param_1;
  if ((param_3 != 1) ||
     (param_3 = FUN_0026f0b0(*puVar3,*(undefined4 *)(iVar4 + 0x50)), param_3 != 0)) {
    if (*(int *)((int)puVar3 + 0x24) == 0) {
      (**(code **)(iVar4 + 0x58))(param_2,param_3,*(undefined4 *)(iVar4 + 100));
    }
    else {
      puVar1 = *(undefined8 **)(puVar3 + 5);
      while (puVar1 != puVar3 + 5) {
        puVar2 = (undefined4 *)((int)puVar1 + -0x14);
        puVar1 = *(undefined8 **)puVar1;
        FUN_00273960(param_1,puVar2,param_3);
      }
    }
  }
  return;
}


// ==== FUN_00273a18 @ 00273a18 ====

void FUN_00273a18(undefined4 *param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  float fVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  puVar7 = (undefined4 *)*param_1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x15] = param_2;
  param_1[0x18] = param_3;
  param_1[0x19] = (int)param_4;
  for (; puVar7 != param_1; puVar7 = (undefined4 *)*puVar7) {
    FUN_00273cb0(param_1,puVar7 + -5,3);
  }
  puVar7 = (undefined4 *)param_1[2];
  if (puVar7 == param_1 + 2) {
    *(undefined1 *)(param_1 + 0x11) = 0;
    return;
  }
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _sqc2(auVar9);
  auVar13 = _lqc2(*(undefined1 (*) [16])(puVar7 + -5));
  do {
    pauVar1 = (undefined1 (*) [16])param_1[0x15];
    lVar6 = 1;
    iVar5 = 0;
    auVar10 = _sqc2(auVar13);
    auVar12 = _vmove(auVar13);
    fStack_84 = auVar10._12_4_;
    fVar3 = fStack_84;
    fVar8 = -fStack_84;
    pauVar4 = pauVar1;
    do {
      auVar10 = _lqc2(*pauVar4);
      auVar11 = _vmul(auVar12,auVar10);
      auVar14 = _lqc2(auVar9);
      _vaddabc(auVar11,auVar11);
      auVar11 = _vmaddbc(auVar14,auVar11);
      auVar10 = _vsubbc(auVar11,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      if (fStack_84 < auVar10._0_4_) {
        lVar6 = 0;
        goto LAB_00273c6c;
      }
      if (fVar8 < auVar10._0_4_) {
        lVar6 = 3;
      }
      iVar5 = iVar5 + 1;
      pauVar4 = pauVar4 + 1;
    } while (iVar5 < 2);
    auVar12 = _lqc2(pauVar1[2]);
    auVar10 = _lqc2(pauVar1[3]);
    auVar11 = _vmulbc(auVar12,auVar13);
    auVar12 = _vmulbc(auVar10,auVar13);
    auVar10 = _lqc2(pauVar1[4]);
    auVar12 = _vadd(auVar11,auVar12);
    auVar10 = _vmulbc(auVar10,auVar13);
    auVar12 = _vadd(auVar12,auVar10);
    auVar10 = _lqc2(pauVar1[5]);
    auVar12 = _vsub(auVar12,auVar10);
    auVar10 = _qmfc2(auVar12._0_4_);
    if (auVar10._0_4_ <= fStack_84) {
      auVar10 = _sqc2(auVar12);
      fStack_8c = auVar10._4_4_;
      if (fStack_84 < fStack_8c) goto LAB_00273bb0;
      auVar10 = _sqc2(auVar12);
      fStack_88 = auVar10._8_4_;
      if (fStack_84 < fStack_88) goto LAB_00273bb0;
      auVar10 = _sqc2(auVar12);
      fStack_84 = auVar10._12_4_;
      bVar2 = false;
      if (fVar3 < fStack_84) goto LAB_00273bb0;
    }
    else {
LAB_00273bb0:
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = 0;
    }
    else if (lVar6 == 3) {
      lVar6 = 3;
    }
    else {
      auVar12 = _lqc2(pauVar1[6]);
      bVar2 = false;
      auVar10 = _lqc2(pauVar1[7]);
      auVar11 = _vmulbc(auVar12,auVar13);
      auVar12 = _vmulbc(auVar10,auVar13);
      auVar10 = _lqc2(pauVar1[8]);
      auVar12 = _vadd(auVar11,auVar12);
      auVar13 = _vmulbc(auVar10,auVar13);
      auVar10 = _vadd(auVar12,auVar13);
      auVar13 = _lqc2(pauVar1[9]);
      auVar10 = _vsub(auVar10,auVar13);
      auVar13 = _qmfc2(auVar10._0_4_);
      if (auVar13._0_4_ <= fVar8) {
        auVar13 = _sqc2(auVar10);
        fStack_8c = auVar13._4_4_;
        if (fVar8 < fStack_8c) goto LAB_00273c64;
        auVar13 = _sqc2(auVar10);
        fStack_88 = auVar13._8_4_;
        if (fVar8 < fStack_88) goto LAB_00273c64;
        auVar13 = _sqc2(auVar10);
        fStack_84 = auVar13._12_4_;
        if (fVar8 < fStack_84) goto LAB_00273c64;
      }
      else {
LAB_00273c64:
        bVar2 = true;
      }
      lVar6 = 1;
      if (bVar2) {
        lVar6 = 3;
      }
    }
LAB_00273c6c:
    if (lVar6 == 0) {
      puVar7 = (undefined4 *)*puVar7;
    }
    else {
      (*param_3)(puVar7 + -5,lVar6,param_4);
      puVar7 = (undefined4 *)*puVar7;
    }
    if (puVar7 == param_1 + 2) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      return;
    }
    auVar13 = _lqc2(*(undefined1 (*) [16])(puVar7 + -5));
  } while( true );
}


// ==== FUN_00273cb0 @ 00273cb0 ====

void FUN_00273cb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  bool bVar3;
  float fVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  pauVar6 = (undefined1 (*) [16])param_2;
  iVar10 = (int)param_1;
  if (param_3 != 3) goto LAB_00273eb8;
  auVar15 = _lqc2(*pauVar6);
  lVar8 = 1;
  pauVar1 = *(undefined1 (**) [16])(iVar10 + 0x54);
  iVar9 = 0;
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _sqc2(auVar15);
  auVar16 = _vmove(auVar15);
  fStack_54 = auVar12._12_4_;
  fVar4 = fStack_54;
  fVar11 = -fStack_54;
  pauVar5 = pauVar1;
  do {
    auVar12 = _lqc2(*pauVar5);
    auVar13 = _vmul(auVar16,auVar12);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar14,auVar13);
    auVar12 = _vsubbc(auVar13,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    if (fStack_54 < auVar12._0_4_) {
      param_3 = 0;
      goto LAB_00273eac;
    }
    if (fVar11 < auVar12._0_4_) {
      lVar8 = 3;
    }
    iVar9 = iVar9 + 1;
    pauVar5 = pauVar5 + 1;
  } while (iVar9 < 2);
  auVar12 = _lqc2(pauVar1[2]);
  auVar16 = _lqc2(pauVar1[3]);
  auVar14 = _vmulbc(auVar12,auVar15);
  auVar16 = _vmulbc(auVar16,auVar15);
  auVar12 = _lqc2(pauVar1[4]);
  auVar14 = _vadd(auVar14,auVar16);
  auVar12 = _vmulbc(auVar12,auVar15);
  auVar12 = _vadd(auVar14,auVar12);
  auVar14 = _lqc2(pauVar1[5]);
  auVar14 = _vsub(auVar12,auVar14);
  auVar12 = _qmfc2(auVar14._0_4_);
  if (auVar12._0_4_ <= fStack_54) {
    auVar12 = _sqc2(auVar14);
    fStack_5c = auVar12._4_4_;
    if (fStack_54 < fStack_5c) goto LAB_00273dec;
    auVar12 = _sqc2(auVar14);
    fStack_58 = auVar12._8_4_;
    if (fStack_54 < fStack_58) goto LAB_00273dec;
    auVar12 = _sqc2(auVar14);
    fStack_54 = auVar12._12_4_;
    bVar3 = false;
    if (fVar4 < fStack_54) goto LAB_00273dec;
  }
  else {
LAB_00273dec:
    bVar3 = true;
  }
  if (bVar3) {
    param_3 = 0;
  }
  else if (lVar8 == 3) {
    param_3 = 3;
  }
  else {
    auVar12 = _lqc2(pauVar1[6]);
    bVar3 = false;
    auVar16 = _lqc2(pauVar1[7]);
    auVar14 = _vmulbc(auVar12,auVar15);
    auVar16 = _vmulbc(auVar16,auVar15);
    auVar12 = _lqc2(pauVar1[8]);
    auVar14 = _vadd(auVar14,auVar16);
    auVar12 = _vmulbc(auVar12,auVar15);
    auVar12 = _vadd(auVar14,auVar12);
    auVar14 = _lqc2(pauVar1[9]);
    auVar14 = _vsub(auVar12,auVar14);
    auVar12 = _qmfc2(auVar14._0_4_);
    if (auVar12._0_4_ <= fVar11) {
      auVar12 = _sqc2(auVar14);
      fStack_5c = auVar12._4_4_;
      if (fVar11 < fStack_5c) goto LAB_00273ea0;
      auVar12 = _sqc2(auVar14);
      fStack_58 = auVar12._8_4_;
      if (fVar11 < fStack_58) goto LAB_00273ea0;
      auVar12 = _sqc2(auVar14);
      fStack_54 = auVar12._12_4_;
      if (fVar11 < fStack_54) goto LAB_00273ea0;
    }
    else {
LAB_00273ea0:
      bVar3 = true;
    }
    param_3 = 1;
    if (bVar3) {
      param_3 = 3;
    }
  }
LAB_00273eac:
  if (param_3 == 0) {
    return;
  }
LAB_00273eb8:
  if (*(int *)(pauVar6[2] + 4) == 0) {
    (**(code **)(iVar10 + 0x60))(param_2,param_3,*(undefined4 *)(iVar10 + 100));
  }
  else {
    puVar2 = *(undefined4 **)(pauVar6[2] + 8);
    while (puVar2 != (undefined4 *)(pauVar6[2] + 8)) {
      puVar7 = puVar2 + -5;
      puVar2 = (undefined4 *)*puVar2;
      FUN_00273cb0(param_1,puVar7,param_3);
    }
  }
  return;
}


// ==== FUN_00273f30 @ 00273f30 ====

void FUN_00273f30(undefined4 *param_1,uint param_2,int param_3,long param_4,undefined1 *param_5,
                 int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    param_1[3] = 1;
  }
  else {
    param_1[3] = (int)param_4;
  }
  if (param_2 == 0) {
    param_1[1] = param_3;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    return;
  }
  iVar6 = param_1[3];
  uVar10 = 1;
  uVar2 = iVar6 + param_6 + 7U & -iVar6;
  puVar3 = (undefined4 *)(uVar2 - 8);
  uVar4 = param_3 + iVar6 + 7U & -iVar6;
  *param_1 = puVar3;
  param_1[4] = puVar3;
  *(undefined4 *)(uVar2 - 4) = 0;
  puVar5 = puVar3;
  if (1 < param_2) {
    do {
      uVar10 = uVar10 + 1;
      puVar3 = (undefined4 *)((int)puVar5 + uVar4);
      *puVar5 = puVar3;
      puVar3[1] = puVar5;
      puVar5 = puVar3;
    } while (uVar10 < param_2);
  }
  *puVar3 = 0;
  if (param_5 != (undefined1 *)0x0) {
    piVar8 = (int *)param_1[4];
    do {
      piVar9 = piVar8 + 2;
      puVar7 = param_5;
      for (iVar6 = param_3; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *(undefined1 *)piVar9 = uVar1;
        piVar9 = (int *)((int)piVar9 + 1);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
  }
  param_1[2] = param_2;
  param_1[1] = uVar4;
  return;
}


// ==== FUN_00274018 @ 00274018 ====

int FUN_00274018(int param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  uVar1 = param_2 + 8;
  if (param_3 != 0) {
    uVar1 = (uVar1 + iVar2) - 1 & -iVar2;
  }
  return uVar1 * param_1 + iVar2;
}


// ==== FUN_00274040 @ 00274040 ====

void FUN_00274040(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((*param_1 == 0) || (piVar2 = (int *)param_1[4], piVar2 == (int *)0x0)) {
    return;
  }
  iVar5 = 0;
  do {
    piVar2[1] = 1;
    piVar2 = (int *)*piVar2;
    iVar5 = iVar5 + 1;
  } while (piVar2 != (int *)0x0);
  puVar3 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)0x0;
  do {
    if (puVar3[1] == 1) {
      if (puVar4 == (undefined4 *)0x0) {
        param_1[4] = (int)puVar3;
        puVar3[1] = 0;
      }
      else {
        *puVar4 = puVar3;
        puVar3[1] = puVar4;
      }
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        *puVar3 = 0;
        return;
      }
      iVar1 = param_1[1];
      puVar4 = puVar3;
    }
    else {
      iVar1 = param_1[1];
    }
    puVar3 = (undefined4 *)((int)puVar3 + iVar1);
  } while( true );
}


// ==== FUN_002740d8 @ 002740d8 ====

void FUN_002740d8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}


// ==== FUN_002740e8 @ 002740e8 ====

int * FUN_002740e8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    *(int *)(*param_1 + 0x10) = *piVar1;
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 4) = 0;
    }
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
    }
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}


// ==== FUN_00274138 @ 00274138 ====

void FUN_00274138(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 == 0) {
    piVar2 = (int *)param_2[1];
  }
  else {
    *(int *)(*param_2 + 4) = param_2[1];
    piVar2 = (int *)param_2[1];
  }
  iVar1 = *param_2;
  if (piVar2 == (int *)0x0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
    }
    else {
      param_1[1] = iVar1;
    }
  }
  else {
    *piVar2 = iVar1;
    param_2[1] = 0;
  }
  iVar1 = *(int *)(*param_1 + 0x10);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  *(int **)(*param_1 + 0x10) = param_2;
  return;
}


// ==== FUN_00274190 @ 00274190 ====

void FUN_00274190(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    if (*piVar1 != 0) {
      for (piVar3 = (int *)*piVar1; *piVar3 != 0; piVar3 = (int *)*piVar3) {
      }
    }
    iVar2 = *(int *)(*param_1 + 0x10);
    *piVar3 = iVar2;
    if (iVar2 != 0) {
      *(int **)(iVar2 + 4) = piVar3;
    }
    *(int **)(*param_1 + 0x10) = piVar1;
    param_1[1] = 0;
  }
  return;
}


// ==== FUN_002741f0 @ 002741f0 ====

void FUN_002741f0(long param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_003bfb40 = (int)param_1;
  if (0 < param_1) {
    DAT_0040eb74 = param_2;
    DAT_0040eb78 = param_3;
    return;
  }
  DAT_0040eb74 = 0;
  DAT_0040eb78 = 0;
  return;
}


// ==== FUN_00274228 @ 00274228 ====

void FUN_00274228(void)

{
  DAT_0040eb7c = &DAT_00492850;
  DAT_0040eb80 = 0x100;
  DAT_0040eb84 = 0xffffffff;
  DAT_00492950 = 0;
  DAT_0040eb88 = 0;
  DAT_0040de76 = 0;
  DAT_0040de77 = 0;
  return;
}


// ==== FUN_00274270 @ 00274270 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00274270(int param_1)

{
  undefined4 auStack_60 [4];
  undefined8 auStack_50 [2];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  
  DAT_0040eb8c = param_1;
  FUN_002741f0(0,0,0);
  if (DAT_0040eb8c != 0) {
    FUN_00274d40();
    auStack_60[0] = DAT_00400358;
    auStack_50[0] = _DAT_00400360;
    FUN_002749c8(0x492a50,DAT_0040eb8c,auStack_60,auStack_50);
  }
  uStack_2c = 0;
  uStack_3c = 1;
  uStack_38 = 1;
  DAT_0040eb84 = CreateSema(auStack_40);
  DAT_0040de77 = 1;
  if (DAT_0040de76 != '\0') {
    FUN_002743d8(DAT_0040eb90,DAT_0040eb94,DAT_0040eb98);
    DAT_0040de76 = '\0';
  }
  return;
}


// ==== FUN_00274350 @ 00274350 ====

void FUN_00274350(undefined4 param_1)

{
  DAT_003bfb3c = param_1;
  return;
}


// ==== FUN_00274360 @ 00274360 ====

void FUN_00274360(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0040de76 == '\0') {
    DAT_0040de76 = '\x01';
    FUN_0035d1a0(0x492950,param_1,0xff);
    DAT_0040eb90 = &DAT_00492950;
    DAT_00492a4f = 0;
    DAT_0040eb94 = param_2;
    DAT_0040eb98 = param_3;
  }
  return;
}


// ==== FUN_002743d8 @ 002743d8 ====

void FUN_002743d8(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a0 [16];
  
  if (DAT_0040de77 == '\0') {
    FUN_00274360();
  }
  else {
    if (DAT_0040eb84 != -1) {
      WaitSema();
    }
    bVar1 = DAT_0040eb88 != '\0';
    if (!bVar1) {
      FUN_0035d1a0(0x492950,param_1,0xff);
      DAT_0040eb90 = &DAT_00492950;
      DAT_0040eb98 = (undefined4)param_3;
      DAT_00492a4f = 0;
      DAT_0040eb94 = param_2;
      uVar2 = FUN_00101fb0();
      FUN_0035d1a0(0x49a760,uVar2,0x20);
      DAT_0040eb88 = '\x01';
    }
    if (DAT_0040eb84 != -1) {
      SignalSema();
    }
    if (bVar1) {
      FUN_0035d728(auStack_a0,0x400368,param_3);
    }
    lVar3 = FUN_00101f90();
    if (lVar3 == 0) {
      while ((char)PTR_DAT_0040de78 != '\0') {
        FUN_00271480();
      }
    }
    else {
      FUN_00274540();
    }
  }
  return;
}


// ==== FUN_00274540 @ 00274540 ====

/* WARNING: Removing unreachable block (ram,0x00274834) */
/* Strings referenciadas:
     "GTASSERT: (Thread %s)"
     "Line %d" */

void FUN_00274540(void)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 in_zero_qw [16];
  byte bVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [16];
  undefined4 auStack_f0 [4];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  
  if (DAT_0040eb88 == '\0') {
    return;
  }
  FUN_0035d728(auStack_200,0x400370,0x49a760);
  FUN_0035d728(auStack_180,0x400388,DAT_0040eb94);
  FUN_0035d728(auStack_100,0x400390,DAT_0040eb98);
  if (((0 < DAT_003bfb40) && (DAT_0040eb74 != 0)) && (DAT_0040eb78 != 0)) {
    iVar8 = 0;
    FUN_00360b90(auStack_180);
    if (0 < DAT_003bfb40) {
      do {
        iVar13 = iVar8 * 4;
        lVar9 = FUN_00360a50(auStack_180,*(undefined4 *)(iVar13 + DAT_0040eb74));
        if (lVar9 != 0) {
          iVar8 = FUN_0035ccd8(*(undefined4 *)(iVar13 + DAT_0040eb74));
          FUN_0035d728(auStack_180,0x400398,*(undefined4 *)(iVar13 + DAT_0040eb78),
                       DAT_0040eb94 + ((int)lVar9 - (int)auStack_180) + iVar8);
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < DAT_003bfb40);
    }
  }
  if (DAT_00449438 != 0) {
    FUN_002a90e8();
  }
  uVar14 = 0x3f800000;
  uVar16 = 0x42200000;
  uVar19 = 0x41a00000;
  while( true ) {
    do {
    } while (DAT_0040eb8c == 0);
    auStack_f0[0] = DAT_004003a0;
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = uVar14;
    auVar4._4_4_ = uVar14;
    auVar4._0_4_ = uVar14;
    auVar3._4_4_ = uVar14;
    auVar3._0_4_ = uVar14;
    auVar11._4_4_ = uVar14;
    auVar11._0_4_ = uVar14;
    uVar15 = uVar14;
    uVar18 = uVar14;
    uStack_e0 = uVar14;
    uStack_dc = uVar14;
    uStack_d8 = uVar14;
    uStack_d4 = uVar14;
    FUN_002a9108(DAT_0040eb8c,auStack_f0,3);
    FUN_002a90c8(DAT_0040eb8c);
    bVar2 = DAT_003bfb3c != 0;
    if (bVar2) {
      FUN_00266088(auStack_200);
    }
    auVar11._8_4_ = uVar14;
    auVar11._12_4_ = uVar15;
    auVar11 = _por(in_zero_qw,auVar11);
    FUN_00274928(uVar16,uVar16,uVar19,auStack_200,auVar11._0_8_,bVar2);
    fVar17 = 0.0;
    auVar3._8_4_ = uVar14;
    auVar3._12_4_ = uVar15;
    auVar11 = _por(in_zero_qw,auVar3);
    FUN_00274928(uVar16,0x42700000,0x41700000,auStack_180,auVar11._0_8_,bVar2);
    bVar7 = 0;
    auVar4._8_4_ = uVar14;
    auVar4._12_4_ = uVar15;
    auVar11 = _por(in_zero_qw,auVar4);
    FUN_00274928(uVar16,0x42a00000,uVar19,auStack_100,auVar11._0_8_,bVar2);
    if (*DAT_0040eb90 != '\0') break;
LAB_0027489c:
    uVar14 = uVar18;
    if (bVar2) {
      FUN_002662a8();
      uVar14 = uVar18;
    }
    FUN_002a90e8(DAT_0040eb8c);
    FUN_002a9140(DAT_0040eb8c,0,1);
  }
  cVar1 = *DAT_0040eb90;
  pcVar10 = DAT_0040eb90;
  do {
    bVar6 = true;
    pcVar12 = pcVar10;
    if ((cVar1 != '\0') && (bVar7 < 4)) {
      if (cVar1 == '\n') {
        *pcVar10 = '\0';
      }
      else {
        do {
          pcVar12 = pcVar12 + 1;
          if (*pcVar12 == '\0') goto LAB_00274850;
        } while (*pcVar12 != '\n');
        *pcVar12 = '\0';
      }
      bVar6 = false;
    }
LAB_00274850:
    auVar5._8_4_ = uVar14;
    auVar5._12_4_ = uVar15;
    auVar11 = _por(in_zero_qw,auVar5);
    FUN_00274928(0x42200000,fVar17 + 105.0,0x41b80000,pcVar10,auVar11._0_8_,bVar2);
    pcVar10 = pcVar12 + 1;
    if (bVar6) goto LAB_0027489c;
    *pcVar12 = '\n';
    bVar7 = bVar7 + 1;
    fVar17 = fVar17 + 17.0;
    if ((*pcVar10 == '\0') || (4 < bVar7)) goto LAB_0027489c;
    cVar1 = *pcVar10;
  } while( true );
}


// ==== FUN_00274920 @ 00274920 ====

void FUN_00274920(void)

{
  return;
}


// ==== FUN_00274928 @ 00274928 ====

void FUN_00274928(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined1 in_zero_qw [16];
  undefined8 in_a1_udw;
  undefined1 auVar1 [16];
  undefined1 auStack_140 [256];
  
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = param_5;
  auVar1 = _por(in_zero_qw,auVar1);
  if (param_6 == 0) {
    FUN_00274aa8(param_1,param_2,0x492a50,param_4);
  }
  else {
    FUN_00275260(param_4,auStack_140,0x80);
    auVar1 = _por(in_zero_qw,auVar1);
    FUN_00275dc0(param_1,param_2,param_3,DAT_003bfb3c,auStack_140,auVar1._0_8_);
  }
  return;
}


// ==== FUN_002749c8 @ 002749c8 ====

undefined4 FUN_002749c8(float *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  
  *param_1 = *param_4 * 0.0052083335;
  param_1[1] = param_4[1] * 0.0052083335;
  param_1[2] = *param_3;
  uVar2 = 0;
  pfVar1 = param_1 + 4;
  param_1[3] = 1.0 / *(float *)(param_2 + 0x80);
  do {
    pfVar1[2] = DAT_00449450;
    fVar3 = param_1[3];
    pfVar1[4] = 0.0;
    pfVar1[6] = fVar3;
    pfVar1[5] = 0.0;
    pfVar1[8] = (float)*(byte *)(param_1 + 2);
    pfVar1[9] = (float)*(byte *)((int)param_1 + 9);
    pfVar1[10] = (float)*(byte *)((int)param_1 + 10);
    pfVar1[0xb] = (float)*(byte *)((int)param_1 + 0xb);
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 0x10;
  } while (uVar2 < 500);
  return 1;
}


// ==== FUN_00274aa8 @ 00274aa8 ====

float FUN_00274aa8(float param_1,float param_2,float *param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fStack_80;
  float fStack_7c;
  
  iVar7 = 0;
  cVar1 = *param_4;
  pcVar8 = param_4;
  while (cVar1 != '\0') {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    iVar7 = iVar7 + (&DAT_004406e8)[cVar1];
    cVar1 = *pcVar8;
  }
  iVar10 = 0;
  fStack_7c = param_2;
  if (*param_4 != '\0') {
    cVar1 = *param_4;
    pfVar9 = param_3 + 4;
    fStack_80 = param_1;
    while( true ) {
      if (cVar1 == '\n') {
        fStack_7c = fStack_7c + param_3[1] * 200.0;
        fStack_80 = param_1;
      }
      else {
        iVar5 = (&DAT_004406e8)[cVar1];
        pbVar6 = *(byte **)(&DAT_00440ae8 + cVar1 * 4);
        while (iVar5 = iVar5 + -1, iVar5 != -1) {
          fVar11 = *param_3;
          fVar12 = param_3[1];
          bVar2 = pbVar6[1];
          bVar3 = pbVar6[2];
          bVar4 = pbVar6[3];
          *pfVar9 = fStack_80 + (float)*pbVar6 * fVar11;
          pbVar6 = pbVar6 + 4;
          pfVar9[1] = fStack_7c + (float)(int)(0x80 - (uint)bVar2) * fVar12;
          pfVar9[0x10] = fStack_80 + (float)bVar3 * fVar11;
          pfVar9[0x11] = fStack_7c + (float)(int)(0x80 - (uint)bVar4) * fVar12;
          pfVar9 = pfVar9 + 0x20;
        }
        fStack_80 = fStack_80 + *param_3 * 192.0;
      }
      iVar10 = iVar10 + 1;
      if (param_4[iVar10] == '\0') break;
      cVar1 = param_4[iVar10];
    }
  }
  (*DAT_00449458)(1,0);
  (*DAT_00449468)(1,param_3 + 4,iVar7 << 1);
  return fStack_7c + param_3[1] * 200.0;
}


// ==== FUN_00274cd8 @ 00274cd8 ====

void FUN_00274cd8(int param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = &DAT_004406e8 + param_1;
  *(char **)(&DAT_00440ae8 + param_1 * 4) = param_2;
  *piVar1 = 0;
  for (; param_2[3] != '\0' || (param_2[2] != '\0' || (*param_2 != '\0' || param_2[1] != '\0'));
      param_2 = param_2 + 4) {
    *piVar1 = *piVar1 + 1;
  }
  return;
}


// ==== FUN_00274d40 @ 00274d40 ====

undefined4 FUN_00274d40(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_004406e8;
  uVar2 = 0;
  do {
    *puVar1 = 0;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x100);
  uVar2 = 0;
  puVar3 = &DAT_003bfb60;
  do {
    FUN_00274cd8(uVar2 + 0x21,puVar3);
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x40;
  } while (uVar2 < 0xf);
  uVar2 = 0;
  puVar3 = &DAT_003c00e0;
  do {
    FUN_00274cd8(uVar2 + 0x30,puVar3);
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x40;
  } while (uVar2 < 10);
  uVar2 = 0;
  puVar3 = &DAT_003bff20;
  do {
    FUN_00274cd8(uVar2 + 0x3a,puVar3);
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x40;
  } while (uVar2 < 7);
  uVar2 = 0;
  puVar3 = &DAT_003c0360;
  do {
    FUN_00274cd8(uVar2 + 0x61,puVar3);
    FUN_00274cd8(uVar2 + 0x41,puVar3);
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x40;
  } while (uVar2 < 0x1a);
  return 1;
}


// ==== FUN_00274e40 @ 00274e40 ====

void FUN_00274e40(undefined8 param_1)

{
  *(undefined4 *)((undefined1 *)param_1 + 4) = 0;
  *(undefined1 *)param_1 = 0;
  FUN_00274f58(param_1,4);
  return;
}


// ==== FUN_00274e68 @ 00274e68 ====

void FUN_00274e68(undefined8 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)param_1;
  *(int *)(puVar1 + 0x10) = param_2;
  *(int *)(puVar1 + 8) = param_2;
  *(int *)(puVar1 + 0xc) = param_2 + param_3;
  FUN_00274f58(param_1,4);
  *puVar1 = 1;
  return;
}


// ==== FUN_00274ea8 @ 00274ea8 ====

void FUN_00274ea8(undefined1 *param_1)

{
  if (param_1 == DAT_003c09e0) {
    FUN_00274f08();
  }
  if (*(int *)(param_1 + 4) != 0) {
    (*DAT_00449544)();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// ==== FUN_00274f08 @ 00274f08 ====

void FUN_00274f08(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_002a65e0();
  uVar1 = DAT_0049a788;
  *puVar2 = DAT_0049a780;
  puVar2[1] = uVar1;
  DAT_003c09e0 = 0;
  return;
}


// ==== FUN_00274f58 @ 00274f58 ====

void FUN_00274f58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ==== FUN_00274f60 @ 00274f60 ====

int FUN_00274f60(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
}


