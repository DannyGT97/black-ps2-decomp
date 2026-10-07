// ==== FUN_001255b8 @ 001255b8 ====

void FUN_001255b8(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined *puVar6;
  undefined4 uStack_a4;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_0040ee40 = 0x3fc90fdb;
    DAT_0040ee44 = 0xbe22f983;
    DAT_0040ee48 = 0x4b400000;
    DAT_0040ee4c = uStack_a4;
    DAT_0040ee50 = 0xbe22f983;
    DAT_0040ee54 = 0x3f000000;
    DAT_0040ee58 = 0x3e800000;
    DAT_0040ee5c = uStack_a4;
    puVar6 = &DAT_0040eff0;
    DAT_0040ee60 = 0xc2992661;
    DAT_0040ee64 = 0xc2255de0;
    DAT_0040ee68 = 0x42a33457;
    DAT_0040ee6c = uStack_a4;
    iVar5 = 1;
    auVar2 = _pextlw(0,0);
    DAT_0040ee70 = 0x421ed7b7;
    DAT_0040ee74 = 0x40c90fda;
    DAT_0040ee78 = 0;
    DAT_0040ee7c = uStack_a4;
    DAT_0040ee90 = 0x43f59407;
    DAT_0040ee94 = 0x44345569;
    DAT_0040ee98 = 0x4409ee8c;
    DAT_0040ee9c = 0x43968fcd;
    DAT_0040eea8 = 0x4b000000;
    DAT_0040eeac = 0x4b000000;
    DAT_0040ee80 = 0x3f800000;
    DAT_0040ee84 = 0x3faaaaab;
    auVar1 = _pextlw(0x3dcccccd,0x3dcccccd);
    auVar1 = _pextlw(0x3dcccccd,auVar1._0_8_);
    DAT_0040eea0 = 0x4b000000;
    DAT_0040eea4 = 0x4b000000;
    DAT_0040eeb0 = auVar1._0_4_;
    DAT_0040eeb4 = auVar1._4_4_;
    DAT_0040eeb8 = auVar1._8_4_;
    DAT_0040eebc = auVar1._12_4_;
    auVar1 = _pextlw(0xffffffffc1a00000,auVar2._0_8_);
    DAT_0040eec0 = auVar1._0_4_;
    DAT_0040eec4 = auVar1._4_4_;
    DAT_0040eec8 = auVar1._8_4_;
    DAT_0040eecc = auVar1._12_4_;
    DAT_0040efe0 = &DAT_003e2600;
    do {
      *(undefined **)(puVar6 + 0x28) = &DAT_003e2628;
      iVar5 = iVar5 + -1;
      puVar6 = puVar6 + 0x40;
    } while (iVar5 != -1);
    auVar1 = _pextlw(0,0);
    uVar3 = auVar1._0_8_;
    auVar4 = _pextlw(0,uVar3);
    auVar1 = _pextlw(0xffffffffbfcccccd,0xffffffffc1400000);
    auVar2 = _pextlw(0x41700000,auVar1._0_8_);
    auVar1 = _pextlw(0xffffffffbf800000,0xffffffffc1200000);
    DAT_0040f070 = auVar4._0_4_;
    DAT_0040f074 = auVar4._4_4_;
    DAT_0040f078 = auVar4._8_4_;
    DAT_0040f07c = auVar4._12_4_;
    auVar1 = _pextlw(0xffffffffc0a00000,auVar1._0_8_);
    DAT_0040f080 = auVar2._0_4_;
    DAT_0040f084 = auVar2._4_4_;
    DAT_0040f088 = auVar2._8_4_;
    DAT_0040f08c = auVar2._12_4_;
    DAT_0040f090 = auVar1._0_4_;
    DAT_0040f094 = auVar1._4_4_;
    DAT_0040f098 = auVar1._8_4_;
    DAT_0040f09c = auVar1._12_4_;
    auVar1 = _pextlw(0x3d4ccccd,uVar3);
    DAT_0040f0a0 = auVar1._0_4_;
    DAT_0040f0a4 = auVar1._4_4_;
    DAT_0040f0a8 = auVar1._8_4_;
    DAT_0040f0ac = auVar1._12_4_;
    auVar1 = _pextlw(0x3dcccccd,uVar3);
    DAT_0040f0b0 = auVar1._0_4_;
    DAT_0040f0b4 = auVar1._4_4_;
    DAT_0040f0b8 = auVar1._8_4_;
    DAT_0040f0bc = auVar1._12_4_;
    memset(0x40f0c0,0,0x20);
    auVar1 = _pextlw(0x3e800000,0x3f800000);
    auVar1 = _pextlw(0x3e800000,auVar1._0_8_);
    DAT_0040f0d0 = 0x40000000;
    DAT_0040f0c0 = auVar1._0_4_;
    DAT_0040f0c4 = auVar1._4_4_;
    DAT_0040f0c8 = auVar1._8_4_;
    DAT_0040f0cc = auVar1._12_4_;
  }
  return;
}


// ==== FUN_00125950 @ 00125950 ====

void FUN_00125950(void)

{
  FUN_001255b8(1,0xffff);
  return;
}


// ==== FUN_00125970 @ 00125970 ====

void FUN_00125970(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x79c) == '\0') {
    pcVar5 = (char *)(iVar4 + 0x77d);
    pcVar3 = (char *)(iVar4 + 0x77e);
    fVar7 = 0.9999;
    FUN_00107470(param_1,0);
    if (((*pcVar5 != '\0') || (*pcVar3 != '\0')) &&
       (*(int **)(DAT_0040f0e0 + 0x21060) != (int *)0x0)) {
      iVar1 = **(int **)(DAT_0040f0e0 + 0x21060);
      lVar2 = FUN_0026baf0(iVar4 + iVar1 * 0xf0 + 0x2c0);
      if (lVar2 != 0) {
        if ((*pcVar3 != '\0') &&
           (fVar6 = *(float *)(iVar4 + 0x784) * DAT_003bcb00,
           fVar6 = (float)((int)fVar6 * (uint)(0.0 < fVar6)),
           lVar2 = FUN_0026bc88((int)fVar6 * (uint)(fVar6 < fVar7) |
                                (int)fVar7 * (uint)(fVar6 >= fVar7),
                                *(undefined4 *)(iVar1 * 0x16c + iVar4 + 0x4ac)), lVar2 != 0)) {
          *pcVar3 = '\0';
        }
        if ((*pcVar5 != '\0') &&
           (fVar6 = *(float *)(iVar4 + 0x780) * DAT_003bcb04,
           fVar6 = (float)((int)fVar6 * (uint)(0.0 < fVar6)),
           lVar2 = FUN_0026bcf8(*(undefined4 *)(iVar1 * 0x16c + iVar4 + 0x4ac),
                                (float)((int)fVar6 * (uint)(fVar6 < fVar7) |
                                       (int)fVar7 * (uint)(fVar6 >= fVar7)) != 0.0), lVar2 != 0)) {
          *pcVar5 = '\0';
        }
      }
    }
  }
  return;
}


// ==== FUN_00125b18 @ 00125b18 ====

void FUN_00125b18(long param_1,long param_2)

{
  undefined4 uStack_4;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_00414680 = 0x3fc90fdb;
    DAT_00414684 = 0xbe22f983;
    DAT_00414688 = 0x4b400000;
    DAT_0041468c = uStack_4;
    DAT_00414690 = 0xbe22f983;
    DAT_00414694 = 0x3f000000;
    DAT_00414698 = 0x3e800000;
    DAT_0041469c = uStack_4;
    DAT_004146a0 = 0xc2992661;
    DAT_004146a4 = 0xc2255de0;
    DAT_004146a8 = 0x42a33457;
    DAT_004146ac = uStack_4;
    DAT_004146b8 = 0;
    DAT_004146bc = uStack_4;
    DAT_004146b0 = 0x421ed7b7;
    DAT_004146b4 = 0x40c90fda;
    DAT_004146c0 = 0x3f800000;
    DAT_004146c4 = 0x3faaaaab;
  }
  return;
}


// ==== FUN_00125c38 @ 00125c38 ====

void FUN_00125c38(void)

{
  FUN_00125b18(1,0xffff);
  return;
}


// ==== FUN_00125c58 @ 00125c58 ====

void FUN_00125c58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}


// ==== FUN_00125c60 @ 00125c60 ====

void FUN_00125c60(int param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_00165ae0();
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_00272b58(param_1 + 0x20);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar1;
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar1;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar1;
  auVar1 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  *(undefined4 *)(param_1 + 0xc4) = 10;
  return;
}


// ==== FUN_00125cd8 @ 00125cd8 ====

undefined4 FUN_00125cd8(int param_1)

{
  FUN_00165af8();
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return 1;
}


// ==== FUN_00125d10 @ 00125d10 ====

void FUN_00125d10(void)

{
  return;
}


// ==== FUN_00125d18 @ 00125d18 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00125d18(int param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  if (param_2[2][1] != '\0') {
    if (param_2[2][0] == '\0') {
      auVar4 = _lqc2(*param_2);
    }
    else {
      cVar1 = param_2[2][0] + -1;
      param_2[2][0] = cVar1;
      if (cVar1 != '\0') {
        return;
      }
      auVar4 = _lqc2(*param_2);
    }
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar7 = _vsub(auVar5,auVar4);
    auVar3 = _qmfc2(auVar4._0_4_);
    auVar4 = _vmul(auVar7,auVar7);
    auVar8 = _vmove(auVar6);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar5 = _qmfc2(auVar5._0_4_);
    auVar4 = _qmfc2(auVar4._0_4_);
    if (auVar4._0_4_ < 2.3283064e-10) {
      auVar4 = _lqc2(_DAT_004432c0);
      uVar9 = auVar4._0_4_;
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      auVar4 = _vmul(auVar7,auVar7);
      auVar6 = _vmove(auVar7);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar8,auVar4);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar4);
      uVar9 = _vwaitq();
      auVar4 = _vmulq(auVar6,uVar9);
      uVar9 = auVar4._0_4_;
      iVar2 = *(int *)(param_1 + 0x10);
    }
    auVar4 = _qmfc2(uVar9);
    (**(code **)(iVar2 + 100))
              (*(undefined4 *)param_2[1],*(undefined4 *)(param_2[1] + 4),
               param_1 + *(short *)(iVar2 + 0x60),auVar5._0_8_,auVar4._0_8_,auVar3._0_8_,
               *(undefined4 *)(param_2[1] + 8),*(undefined4 *)(param_2[1] + 0xc));
    param_2[2][1] = 0;
  }
  return;
}


// ==== FUN_00125e40 @ 00125e40 ====

undefined4 FUN_00125e40(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_00125e60 @ 00125e60 ====

void FUN_00125e60(int param_1)

{
  FUN_00165bb0();
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00125e60();
  }
  return;
}


// ==== FUN_00125e98 @ 00125e98 ====

void FUN_00125e98(int param_1,int param_2)

{
  byte bVar1;
  undefined8 in_v1_udw;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  bVar1 = *(byte *)(param_2 + 0x6b);
  auVar6 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4bc + 0x720));
  auVar5 = _vsub(auVar5,auVar6);
  *(undefined1 *)(param_1 + 200) = 0;
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
  *(float *)(param_1 + 0xc0) = auVar5._0_4_;
  if (1 < bVar1) {
    if (-1 < *(int *)(DAT_0040f4d0 + 0x5ae4) >> 0x1f) {
      auVar5._0_8_ = (long)(int)(bVar1 - 1);
      auVar6._8_8_ = in_v1_udw;
      auVar6._0_8_ = (long)*(int *)(DAT_0040f4d0 + 0x5ae4);
      auVar5 = _pminw(auVar6,auVar5);
      auVar5 = _pextlw(0,auVar5._0_8_);
      *(char *)(param_1 + 200) = auVar5[0];
      return;
    }
    fVar4 = auVar5._0_4_ * *(float *)(DAT_0040f4bc + 0x1660);
    if (bVar1 != 0) {
      iVar3 = bVar1 - 1;
      uVar2 = (uint)bVar1;
      if (*(float *)(param_2 + 0x28 + iVar3 * 4) < fVar4) {
        *(char *)(param_1 + 200) = (char)iVar3;
        return;
      }
      do {
        iVar3 = uVar2 - 2;
        if ((int)(uVar2 - 1) < 1) {
          return;
        }
        uVar2 = uVar2 - 1;
      } while (fVar4 <= *(float *)(param_2 + 0x28 + iVar3 * 4));
      *(char *)(param_1 + 200) = (char)iVar3;
    }
  }
  return;
}


// ==== FUN_00125f88 @ 00125f88 ====

void FUN_00125f88(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xc4) == 4) {
    if (*(int *)(iVar5 + 0x1f0) == 0) {
      uVar2 = *param_2;
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((int)param_2 + 0xc);
      goto LAB_00125ff4;
    }
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 6));
    auVar6 = _vsub(auVar6,auVar7);
    auVar6 = _vmul(auVar6,auVar6);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (2500.0 < auVar6._0_4_) {
      return;
    }
  }
  uVar2 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((int)param_2 + 0xc);
LAB_00125ff4:
  *(int *)(iVar5 + 0x70) = (int)uVar2;
  *(int *)(iVar5 + 0x74) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0x78) = uVar3;
  *(undefined4 *)(iVar5 + 0x7c) = uVar4;
  uVar3 = *(undefined4 *)((int)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar1 = *(undefined4 *)((int)param_2 + 0x1c);
  *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(iVar5 + 0x84) = uVar3;
  *(undefined4 *)(iVar5 + 0x88) = uVar4;
  *(undefined4 *)(iVar5 + 0x8c) = uVar1;
  uVar2 = param_2[4];
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((int)param_2 + 0x2c);
  *(int *)(iVar5 + 0x90) = (int)uVar2;
  *(int *)(iVar5 + 0x94) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0x98) = uVar3;
  *(undefined4 *)(iVar5 + 0x9c) = uVar4;
  uVar3 = *(undefined4 *)((int)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar1 = *(undefined4 *)((int)param_2 + 0x3c);
  *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(iVar5 + 0xa4) = uVar3;
  *(undefined4 *)(iVar5 + 0xa8) = uVar4;
  *(undefined4 *)(iVar5 + 0xac) = uVar1;
  FUN_0012a1e0(DAT_0040f4d0,param_1);
  return;
}


// ==== FUN_00126030 @ 00126030 ====

void FUN_00126030(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0xa0) = (int)param_2;
  *(int *)(iVar1 + 0xa4) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(iVar1 + 0xa8) = in_a1_udw;
  *(undefined4 *)(iVar1 + 0xac) = in_register_0000005c;
  FUN_0012a1e0(DAT_0040f4d0,param_1);
  return;
}


// ==== FUN_00126058 @ 00126058 ====

void FUN_00126058(undefined8 param_1,undefined4 param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = _qmtc2(param_2);
  _lqc2(*(undefined1 (*) [16])((int)param_1 + 0x60));
  auVar1 = _vadd(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])((int)param_1 + 0x60) = auVar1;
  FUN_0012a1e0(DAT_0040f4d0,param_1);
  return;
}


// ==== FUN_00126098 @ 00126098 ====

void FUN_00126098(float param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar3 = (undefined4)((ulong)param_6 >> 0x20);
  lVar1 = (**(code **)(*(int *)(param_3 + 0x10) + 0x84))
                    (param_3 + *(short *)(*(int *)(param_3 + 0x10) + 0x80));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xa0));
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar7._8_4_ = in_a3_udw;
    auVar7._0_8_ = param_6;
    auVar7._12_4_ = in_register_0000007c;
    auVar7 = _lqc2(auVar7);
    auVar7 = _vsub(auVar5,auVar7);
    auVar7 = _vmul(auVar7,auVar7);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar6,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar4 = (float)(**(code **)(*(int *)(param_3 + 0x10) + 0x8c))
                             (param_3 + *(short *)(*(int *)(param_3 + 0x10) + 0x88));
    uVar2 = (int)((SQRT(auVar7._0_4_) * (1.0 / fVar4)) / *(float *)(DAT_0040f4d0 + 0x1c)) & 0xff;
  }
  if (*(char *)((int)param_9 + 0x21) == '\0') {
    param_9[7] = param_8;
    *(undefined1 *)((int)param_9 + 0x21) = 1;
    param_9[5] = param_2;
    *param_9 = (int)param_6;
    param_9[1] = uVar3;
    param_9[2] = in_a3_udw;
    param_9[3] = in_register_0000007c;
    *(char *)(param_9 + 8) = (char)uVar2;
    param_9[4] = param_1;
    param_9[6] = param_7;
  }
  else {
    if (uVar2 < *(byte *)(param_9 + 8)) {
      *(char *)(param_9 + 8) = (char)uVar2;
    }
    fVar4 = (float)param_9[4];
    if (fVar4 < param_1) {
      param_9[5] = param_2;
      *param_9 = (int)param_6;
      param_9[1] = uVar3;
      param_9[2] = in_a3_udw;
      param_9[3] = in_register_0000007c;
      param_9[6] = param_7;
      param_9[7] = param_8;
      fVar4 = (float)param_9[4];
    }
    param_9[4] = fVar4 + param_1;
  }
  return;
}


// ==== FUN_00126200 @ 00126200 ====

void FUN_00126200(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0x1000000;
  iVar3 = 0;
  iVar4 = param_1 + 0x5804;
  *(undefined1 *)(param_1 + 0x5850) = 0;
  do {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x94))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x90));
    param_1 = param_1 + 0x160;
    puVar1 = (undefined1 *)(iVar4 + iVar3);
    iVar3 = iVar2 >> 0x18;
    *puVar1 = 0;
    iVar2 = iVar2 + 0x1000000;
  } while (iVar3 < 0x40);
  return;
}


// ==== FUN_00126290 @ 00126290 ====

undefined4 FUN_00126290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x5848) = 0;
  *(undefined1 *)(param_1 + 0x5850) = 0;
  iVar3 = 0x1000000;
  iVar1 = param_1;
  do {
    *(undefined1 *)(param_1 + 0x5804 + iVar2) = 0;
    iVar2 = iVar3 >> 0x18;
    *(undefined1 *)(iVar1 + 0x152) = 0;
    iVar3 = iVar3 + 0x1000000;
    *(undefined1 *)(iVar1 + 0x13c) = 0;
    iVar1 = iVar1 + 0x160;
  } while (iVar2 < 0x40);
  iVar1 = 0;
  if (**(char **)(param_1 + 0x5844) != '\0') {
    iVar2 = 0x1000000;
    do {
      iVar3 = iVar1 * 4;
      iVar1 = iVar2 >> 0x18;
      *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x5800)) = 0;
      iVar2 = iVar2 + 0x1000000;
    } while (iVar1 < (int)(uint)**(byte **)(param_1 + 0x5844));
  }
  return 1;
}


// ==== FUN_00126328 @ 00126328 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126328(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_80 [16];
  
  *(undefined4 *)(param_1 + 0x5848) = 0;
  if ((*(uint *)(DAT_0040f0e0 + 0x210c0) & 2) == 0) {
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar1 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0);
    auVar8 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0);
    auVar5 = _sqc2(auVar5);
    iVar4 = 0x1000000;
    do {
      if (((*(byte *)(param_1 + 0x152) & 4) == 0) &&
         (auVar7 = _lqc2(auVar8), (*(byte *)(param_1 + 0x152) & 8) != 0)) {
        auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
        auVar7 = _vsub(auVar7,auVar6);
        auVar7 = _vmul(auVar7,auVar7);
        auVar6 = _lqc2(auVar5);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar6,auVar7);
        auVar7 = _qmfc2(auVar7._0_4_);
        if ((auVar7._0_4_ < 400.0) && (lVar3 = FUN_00126f80(DAT_0040f4e4,param_1), lVar3 != 0)) {
          FUN_00129108(DAT_0040f4d0,param_1,0,0,0xffffffffffffffff);
          *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) | 4;
        }
      }
      param_1 = param_1 + 0x160;
      iVar2 = iVar4 >> 0x18;
      iVar4 = iVar4 + 0x1000000;
    } while (iVar2 < 0x40);
    auVar8 = _lqc2(auVar1);
    auVar5 = _lqc2(_DAT_00414750);
    auVar5 = _vadd(auVar8,auVar5);
    _lqc2(auStack_80);
    auVar5 = _vadd(in_vf0,auVar5);
    auVar5 = _sqc2(auVar5);
    auVar8 = _qmtc2(0x3fbd70a4);
    _lqc2(auVar5);
    auVar5 = _vsubbc(in_vf0,in_vf0);
    auVar5 = _vaddbc(auVar5,auVar8);
    auVar5 = _qmfc2(auVar5._0_4_);
    FUN_00273568(DAT_0040f4d0 + 0x4920,auVar5._0_8_,0x127118,0);
  }
  return;
}


// ==== FUN_001264c0 @ 001264c0 ====

undefined4 FUN_001264c0(void)

{
  return 1;
}


// ==== FUN_001264c8 @ 001264c8 ====

void FUN_001264c8(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = 0;
  *(byte **)(param_1 + 0x5844) = param_2;
  uVar2 = FUN_00107d20(((uint)*param_2 + (uint)param_2[1] + (uint)param_2[2] + (uint)param_2[3] +
                       (uint)param_2[4]) * 4);
  *(undefined4 *)(param_1 + 0x5800) = uVar2;
  pbVar3 = *(byte **)(param_1 + 0x5844);
  if (*pbVar3 == 0) {
    bVar1 = pbVar3[1];
  }
  else {
    do {
      uVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(uVar5 * 0x18 + *(int *)(pbVar3 + 8) + 8));
      uVar5 = uVar5 + 1 & 0xff;
      *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x5800)) = uVar2;
      pbVar3 = *(byte **)(param_1 + 0x5844);
      iVar6 = iVar6 + 1;
    } while (uVar5 < *pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x5844);
    bVar1 = pbVar3[1];
  }
  uVar5 = 0;
  if (bVar1 != 0) {
    do {
      uVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(uVar5 * 0x18 + *(int *)(pbVar3 + 0xc) + 8));
      uVar5 = uVar5 + 1 & 0xff;
      *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x5800)) = uVar2;
      pbVar3 = *(byte **)(param_1 + 0x5844);
      iVar6 = iVar6 + 1;
    } while (uVar5 < pbVar3[1]);
  }
  iVar4 = *(int *)(param_1 + 0x5844);
  uVar5 = 0;
  if (*(char *)(iVar4 + 2) != '\0') {
    do {
      uVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(uVar5 * 0x10 + *(int *)(iVar4 + 0x10)));
      uVar5 = uVar5 + 1 & 0xff;
      *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x5800)) = uVar2;
      iVar4 = *(int *)(param_1 + 0x5844);
      iVar6 = iVar6 + 1;
    } while (uVar5 < *(byte *)(iVar4 + 2));
    iVar4 = *(int *)(param_1 + 0x5844);
  }
  uVar5 = 0;
  if (*(char *)(iVar4 + 3) != '\0') {
    do {
      uVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(uVar5 * 8 + *(int *)(iVar4 + 0x14)));
      uVar5 = uVar5 + 1 & 0xff;
      *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x5800)) = uVar2;
      iVar4 = *(int *)(param_1 + 0x5844);
      iVar6 = iVar6 + 1;
    } while (uVar5 < *(byte *)(iVar4 + 3));
  }
  iVar4 = *(int *)(param_1 + 0x5844);
  uVar5 = 0;
  if (*(char *)(iVar4 + 4) != '\0') {
    do {
      uVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(uVar5 * 0x10 + *(int *)(iVar4 + 0x18) + 8));
      uVar5 = uVar5 + 1 & 0xff;
      *(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0x5800)) = uVar2;
      iVar4 = *(int *)(param_1 + 0x5844);
      iVar6 = iVar6 + 1;
    } while (uVar5 < *(byte *)(iVar4 + 4));
  }
  return;
}


// ==== FUN_00126710 @ 00126710 ====

void FUN_00126710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar13 = _vsub(in_vf0,in_vf0);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  _sqc2(auVar12);
  uVar11 = 0;
  iVar8 = (int)param_3;
  cVar1 = *(char *)(iVar8 + 0x55);
  auStack_d0 = *(undefined1 (*) [16])(iVar8 + 0x10);
  auStack_c0 = *(undefined1 (*) [16])(iVar8 + 0x20);
  auStack_b0 = *(undefined1 (*) [16])(iVar8 + 0x30);
  auStack_a0 = *(undefined1 (*) [16])(iVar8 + 0x40);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar15);
  lVar2 = FUN_00127550(param_1);
  if (lVar2 == 0) {
    return;
  }
  iVar7 = *(int *)(iVar8 + 0x50);
  uVar10 = 0;
  iVar9 = (int)param_1;
  if (iVar7 != 1) {
    if (iVar7 < 2) {
      if (iVar7 != 0) {
        uVar3 = (uint)*(byte *)(iVar8 + 0x54);
        goto LAB_00126844;
      }
      iVar4 = *(int *)(iVar9 + 0x5844);
    }
    else {
      if (iVar7 == 3) {
        iVar4 = *(int *)(iVar9 + 0x5844);
      }
      else {
        if (iVar7 != 4) {
          uVar3 = (uint)*(byte *)(iVar8 + 0x54);
          goto LAB_00126844;
        }
        uVar10 = (uint)*(byte *)(*(int *)(iVar9 + 0x5844) + 3);
        iVar4 = *(int *)(iVar9 + 0x5844);
      }
      uVar10 = uVar10 + *(byte *)(iVar4 + 2) & 0xff;
      iVar4 = *(int *)(iVar9 + 0x5844);
    }
    uVar10 = uVar10 + *(byte *)(iVar4 + 1) & 0xff;
  }
  uVar10 = uVar10 + **(byte **)(iVar9 + 0x5844) & 0xff;
  uVar3 = (uint)*(byte *)(iVar8 + 0x54);
LAB_00126844:
  uVar10 = uVar10 + uVar3 & 0xff;
  if (iVar7 == 2) {
    FUN_001276b8(param_1,uVar10);
    iVar7 = 0;
    uVar3 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    if (uVar3 != 0) {
      plVar6 = *(long **)(*DAT_0040f4e0 + 4);
      iVar4 = 0x1000000;
      do {
        if (*plVar6 ==
            *(long *)((uint)*(byte *)(iVar8 + 0x54) * 0x18 + *(int *)(*(int *)(iVar9 + 0x5844) + 8))
           ) {
          uVar5 = (undefined1)iVar7;
          goto LAB_001268d4;
        }
        plVar6 = plVar6 + 4;
        iVar7 = iVar4 >> 0x18;
        iVar4 = iVar4 + 0x1000000;
      } while (iVar7 < (int)uVar3);
    }
    uVar5 = 0xff;
LAB_001268d4:
    iVar7 = FUN_0015d248(DAT_0040f4e0,uVar5,0);
    uVar11 = *(undefined2 *)(iVar7 + 0x60);
  }
  FUN_0014eef0(lVar2,param_2,param_3,*(undefined4 *)(iVar8 + 0x50),*(undefined1 *)(iVar8 + 0x54),
               *(undefined4 *)(uVar10 * 4 + *(int *)(iVar9 + 0x5800)),auStack_d0,uVar11);
  if (cVar1 != '\0') {
    FUN_00129108(DAT_0040f4d0,lVar2,0,0,0xffffffffffffffff);
  }
  return;
}


// ==== FUN_00126980 @ 00126980 ====

void FUN_00126980(undefined8 param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  long *plVar6;
  int iVar7;
  undefined8 in_t0_udw;
  undefined8 in_t1_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  auVar8._8_8_ = in_t0_udw;
  auVar8._0_8_ = param_5;
  auVar8 = _por(in_zero_qw,auVar8);
  auVar9._8_8_ = in_t1_udw;
  auVar9._0_8_ = param_6;
  auVar9 = _por(in_zero_qw,auVar9);
  uStack_ac = param_4;
  lVar1 = FUN_0025cda0(DAT_0040f4cc,&uStack_b0,2);
  iStack_a8 = 0;
  lVar2 = FUN_00127550(param_1);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      FUN_0025ce28(DAT_0040f4cc);
    }
  }
  else {
    if (param_2 == 2) {
      iVar7 = 0;
      uVar4 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
      if (uVar4 != 0) {
        plVar6 = *(long **)(*DAT_0040f4e0 + 4);
        iVar3 = 0x1000000;
        do {
          uVar5 = (undefined1)iVar7;
          if (*plVar6 ==
              *(long *)((param_3 & 0xff) * 0x18 + *(int *)(*(int *)((int)param_1 + 0x5844) + 8)))
          goto LAB_00126ae4;
          plVar6 = plVar6 + 4;
          iVar7 = iVar3 >> 0x18;
          iVar3 = iVar3 + 0x1000000;
        } while (iVar7 < (int)uVar4);
      }
      uVar5 = 0xff;
LAB_00126ae4:
      iVar7 = FUN_0015d248(DAT_0040f4e0,uVar5,0);
      iStack_a8 = (int)*(short *)(iVar7 + 0x60);
    }
    FUN_0014ef58(lVar2);
    FUN_00129108(DAT_0040f4d0,lVar2,lVar1,lVar1 != 0,uStack_b0);
    iVar7 = (int)lVar2;
    if (lVar1 == 0) {
      *(undefined1 *)(iVar7 + 0x155) = 1;
    }
    else {
      auVar8 = _por(in_zero_qw,auVar8);
      FUN_0025d860(*(undefined4 *)(iVar7 + 0xb4),auVar8._0_8_);
      auVar8 = _por(in_zero_qw,auVar9);
      FUN_0025d910(*(undefined4 *)(iVar7 + 0xb4),auVar8._0_8_);
      *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0xb4) + 0x34) + 0x18) = 0xd;
    }
  }
  return;
}


// ==== FUN_00126bc8 @ 00126bc8 ====

void FUN_00126bc8(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined2 param_6)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 auStack_b0 [4];
  
  auVar8._8_8_ = in_a3_udw;
  auVar8._0_8_ = param_4;
  auVar8 = _por(in_zero_qw,auVar8);
  auVar9._8_8_ = in_t0_udw;
  auVar9._0_8_ = param_5;
  auVar9 = _por(in_zero_qw,auVar9);
  uVar6 = 0;
  uVar4 = 0;
  iVar5 = (int)param_1;
  uVar7 = uVar6;
  if ((**(char **)(iVar5 + 0x5844) != '\0') &&
     ((long)(int)param_2 != (long)*(char *)(*(int *)(*(char **)(iVar5 + 0x5844) + 8) + 0x10))) {
    pbVar3 = *(byte **)(iVar5 + 0x5844);
    while ((uVar4 = uVar4 + 1 & 0xff, uVar7 = uVar6, uVar4 < *pbVar3 &&
           (uVar7 = uVar4,
           (long)(int)param_2 != (long)*(char *)(uVar4 * 0x18 + *(int *)(pbVar3 + 8) + 0x10)))) {
      pbVar3 = *(byte **)(iVar5 + 0x5844);
    }
  }
  lVar1 = FUN_0025cda0(DAT_0040f4cc,auStack_b0,2);
  FUN_001276b8(param_1,uVar7);
  lVar2 = FUN_00127550(param_1);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      FUN_0025ce28(DAT_0040f4cc);
    }
  }
  else {
    FUN_0014ef58(lVar2,2,uVar7,*(undefined4 *)(uVar7 * 4 + *(int *)(iVar5 + 0x5800)),param_3,param_6
                 ,7,*(undefined1 *)(iVar5 + 0x5850));
    FUN_00129108(DAT_0040f4d0,lVar2,lVar1,lVar1 != 0,auStack_b0[0]);
    iVar5 = (int)lVar2;
    if (lVar1 == 0) {
      *(undefined1 *)(iVar5 + 0x155) = 1;
    }
    else {
      auVar8 = _por(in_zero_qw,auVar8);
      FUN_0025d860(*(undefined4 *)(iVar5 + 0xb4),auVar8._0_8_);
      auVar8 = _por(in_zero_qw,auVar9);
      FUN_0025d910(*(undefined4 *)(iVar5 + 0xb4),auVar8._0_8_);
      *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0xb4) + 0x34) + 0x18) = 0xd;
    }
  }
  return;
}


// ==== FUN_00126d78 @ 00126d78 ====

void FUN_00126d78(int param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_2 + 0x152) & 8) == 0) {
    iVar3 = param_1 + 0x5804;
    iVar2 = 0;
    iVar1 = 0x1000000;
    do {
      if (param_1 == param_2) {
        *(undefined1 *)(iVar3 + iVar2) = 0;
        if (param_3 != 0) {
          FUN_001f2958(DAT_0040f51c,0,*(undefined4 *)(param_1 + 0x140),
                       *(undefined1 *)(param_1 + 0x148),0);
        }
        *(undefined1 *)(param_1 + 0x154) = 1;
        return;
      }
      param_1 = param_1 + 0x160;
      iVar2 = iVar1 >> 0x18;
      iVar1 = iVar1 + 0x1000000;
    } while (iVar2 < 0x40);
  }
  else {
    FUN_001f2958(DAT_0040f51c,0,*(undefined4 *)(param_2 + 0x140),*(undefined1 *)(param_2 + 0x148),0)
    ;
    *(undefined1 *)(param_2 + 0x154) = 1;
  }
  return;
}


// ==== FUN_00126e50 @ 00126e50 ====

void FUN_00126e50(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(param_1 + 0x5804);
  iVar3 = 0x1000000;
  do {
    if ((*pcVar2 == '\x01') && ((*(byte *)(param_1 + 0x152) & 4) != 0)) {
      FUN_00129240(DAT_0040f4d0,param_1,0);
      (**(code **)(*(int *)(param_1 + 0x10) + 0x24))
                (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x20));
      *pcVar2 = '\0';
    }
    param_1 = param_1 + 0x160;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 < 0x40);
  return;
}


// ==== FUN_00126f10 @ 00126f10 ====

uint FUN_00126f10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = uVar3;
  if ((*(char *)(*(int *)(param_1 + 0x5844) + 1) != '\0') &&
     (param_2 != **(int **)(*(int *)(param_1 + 0x5844) + 0xc))) {
    iVar1 = *(int *)(param_1 + 0x5844);
    while ((uVar2 = uVar2 + 1 & 0xff, uVar4 = uVar3, uVar2 < *(byte *)(iVar1 + 1) &&
           (uVar4 = uVar2, param_2 != *(int *)(uVar2 * 0x18 + *(int *)(iVar1 + 0xc))))) {
      iVar1 = *(int *)(param_1 + 0x5844);
    }
  }
  return uVar4;
}


// ==== FUN_00126f80 @ 00126f80 ====

undefined4 FUN_00126f80(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  
  iVar3 = DAT_0040f4d0;
  uVar5 = 0;
  if (*(int *)(param_2 + 0x140) == 1) {
    iVar7 = DAT_0040f4d0 + 0x2b0;
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 0xc) +
                    (uint)*(byte *)(param_2 + 0x148) * 0x18);
    iVar4 = FUN_0015d228(DAT_0040f4e0,**(undefined1 **)(DAT_0040f4d0 + 0x2d4));
    if (iVar1 == 7) {
      lVar6 = FUN_00155198(iVar7);
      if (lVar6 == 0) {
        return 1;
      }
      iVar2 = *(int *)(iVar4 + 100);
    }
    else {
      iVar2 = *(int *)(iVar4 + 100);
    }
    uVar5 = 0;
    if (iVar2 == iVar1) {
      lVar6 = FUN_001580e0(*(undefined4 *)(iVar3 + 0x2d4));
      if (lVar6 == 0) {
        lVar6 = FUN_00155178(iVar7,iVar1,*(undefined1 *)(iVar4 + 0x60));
        uVar5 = 1;
        if (lVar6 != 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}


// ==== FUN_00127060 @ 00127060 ====

void FUN_00127060(int param_1)

{
  int iVar1;
  long *plVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  
  pbVar3 = *(byte **)(param_1 + 0x5844);
  iVar8 = 0;
  if (*pbVar3 != 0) {
    iVar1 = 0;
    do {
      iVar7 = 0;
      uVar5 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
      if (uVar5 != 0) {
        plVar2 = *(long **)(*DAT_0040f4e0 + 4);
        iVar4 = 0x1000000;
        do {
          uVar6 = (undefined1)iVar7;
          if (*plVar2 == *(long *)(iVar1 + *(int *)(pbVar3 + 8))) goto LAB_001270e4;
          plVar2 = plVar2 + 4;
          iVar7 = iVar4 >> 0x18;
          iVar4 = iVar4 + 0x1000000;
        } while (iVar7 < (int)uVar5);
      }
      uVar6 = 0xff;
LAB_001270e4:
      iVar1 = iVar8 * 0x18;
      iVar8 = (iVar8 + 1) * 0x1000000 >> 0x18;
      *(undefined1 *)(iVar1 + *(int *)(*(int *)(param_1 + 0x5844) + 8) + 0x10) = uVar6;
      pbVar3 = *(byte **)(param_1 + 0x5844);
      iVar1 = iVar8 * 0x18;
    } while (iVar8 < (int)(uint)*pbVar3);
  }
  return;
}


// ==== FUN_00127118 @ 00127118 ====

undefined8 FUN_00127118(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    return 1;
  }
  if (*(int *)(iVar1 + 0xc4) != 7) {
    return 1;
  }
  if (*(char *)(iVar1 + 0x154) != '\0') {
    return 1;
  }
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar11 = _vsub(auVar11,auVar12);
  auVar11 = _qmfc2(auVar11._0_4_);
  if (*(float *)(DAT_0040f4d0 + 0x318) < auVar11._4_4_) {
    return 1;
  }
  auVar11 = _qmtc2(0);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vaddbc(in_vf0,auVar11);
  auVar11 = _vmul(auVar11,auVar11);
  _vaddabc(auVar11,auVar11);
  auVar11 = _vmaddbc(auVar12,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  fVar10 = auVar11._0_4_;
  if (1.5625 < fVar10) {
    return 1;
  }
  switch(*(undefined4 *)(iVar1 + 0x140)) {
  case 0:
    iVar8 = *(int *)((uint)*(byte *)(iVar1 + 0x148) * 0x10 +
                     *(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 0x10) + 8);
    iVar7 = DAT_0040f4d0 + 0x30;
    if (iVar8 == 0) {
      lVar4 = FUN_0013cd20(iVar7);
      if (lVar4 == 0) goto LAB_00127298;
      FUN_001eed98(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),4);
    }
    else {
      if (iVar8 != 1) {
        return 1;
      }
      iVar8 = *(int *)(DAT_0040f0e0 + 0x2014c);
      if (iVar8 == 1) {
        fVar10 = *(float *)(DAT_0040f4d0 + 0x328);
LAB_00127328:
        fVar10 = fVar10 / 1200.0;
      }
      else {
        if (iVar8 < 2) {
          if (iVar8 == 0) {
            fVar10 = *(float *)(DAT_0040f4d0 + 0x328);
            goto LAB_00127328;
          }
        }
        else if (iVar8 < 4) {
          fVar10 = *(float *)(DAT_0040f4d0 + 0x328) / 750.0;
          goto LAB_00127360;
        }
        fVar10 = 0.0;
      }
LAB_00127360:
      if (0.99998474 <= fVar10) {
LAB_00127298:
        FUN_001f2958(DAT_0040f51c,0,*(undefined4 *)(iVar1 + 0x140),*(undefined1 *)(iVar1 + 0x148),1)
        ;
        return 1;
      }
      FUN_001eed98(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),5);
      FUN_0013c9d8(iVar7,1);
    }
    break;
  case 1:
    iVar8 = DAT_0040f4d0 + 0x2b0;
    puVar9 = (undefined4 *)
             (*(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 0xc) +
             (uint)*(byte *)(iVar1 + 0x148) * 0x18);
    uVar2 = *puVar9;
    lVar4 = FUN_00155208(iVar8,uVar2);
    if (lVar4 != 0) goto LAB_00127298;
    FUN_001551c8(iVar8,uVar2,*(undefined2 *)(puVar9 + 4));
    FUN_001eed98(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),3);
    break;
  case 2:
    if (*(int *)(DAT_0040f4e4 + 0x5848) == 0) {
      *(int *)(DAT_0040f4e4 + 0x5848) = iVar1;
    }
    else {
      if (*(float *)(DAT_0040f4e4 + 0x584c) <= fVar10) {
        return 1;
      }
      *(int *)(DAT_0040f4e4 + 0x5848) = iVar1;
    }
    *(float *)(DAT_0040f4e4 + 0x584c) = fVar10;
    return 1;
  case 3:
    break;
  case 4:
    iVar8 = 0;
    uVar6 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    if (uVar6 != 0) {
      plVar5 = *(long **)(*DAT_0040f4e0 + 4);
      iVar7 = 0x1000000;
      do {
        cVar3 = (char)iVar8;
        if (*plVar5 ==
            *(long *)((uint)*(byte *)(iVar1 + 0x148) * 0x10 +
                     *(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 0x18))) goto LAB_001274dc;
        plVar5 = plVar5 + 4;
        iVar8 = iVar7 >> 0x18;
        iVar7 = iVar7 + 0x1000000;
      } while (iVar8 < (int)uVar6);
    }
    cVar3 = -1;
LAB_001274dc:
    *(undefined1 *)(*(int *)(DAT_0040f4d0 + 0x2c4) + (int)cVar3) = 1;
    FUN_001eed98(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),2);
    FUN_00126d78(DAT_0040f4e4,iVar1,1);
  default:
    goto switchD_00127200_default;
  }
  FUN_00126d78(DAT_0040f4e4,iVar1,1);
switchD_00127200_default:
  return 1;
}


// ==== FUN_00127550 @ 00127550 ====

int FUN_00127550(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(param_1 + 0x5804);
  iVar7 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pcVar3 = pcVar6;
  do {
    if ((*pcVar3 == '\0') && (iVar2 = uVar4 * 0x160 + param_1, *(char *)(iVar2 + 0x154) == '\0')) {
      *pcVar3 = '\x01';
      return iVar2;
    }
    uVar4 = uVar4 + 1 & 0xff;
    pcVar3 = pcVar6 + uVar4;
  } while (uVar4 < 0x40);
  uVar4 = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + param_1;
    if ((*(byte *)(iVar2 + 0x152) & 1) == 0) {
      if ((long)*(char *)(iVar2 + 0x153) == (long)((*(char *)(param_1 + 0x5850) + 1) % 3)) {
        iVar1 = *(int *)(iVar2 + 0x144);
        goto LAB_0012760c;
      }
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x144);
LAB_0012760c:
      if (((iVar1 != DAT_003c0e04) && (*(char *)(iVar2 + 0x154) == '\0')) &&
         ((iVar7 == 0 || (*(float *)(iVar2 + 0x14c) < *(float *)(iVar7 + 0x14c))))) {
        iVar7 = iVar2;
        uVar5 = uVar4;
      }
    }
    uVar4 = uVar4 + 1 & 0xff;
    iVar2 = uVar4 * 0x160;
    if (0x3f < uVar4) {
      if (iVar7 != 0) {
        pcVar6[uVar5] = '\x01';
        if ((*(byte *)(iVar7 + 0x152) & 4) != 0) {
          FUN_00129240(DAT_0040f4d0,iVar7,0);
        }
        (**(code **)(*(int *)(iVar7 + 0x10) + 0x24))
                  (iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 0x20));
      }
      return iVar7;
    }
  } while( true );
}


// ==== FUN_001276b8 @ 001276b8 ====

undefined4 FUN_001276b8(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_2 & 0xff) * 4;
  if (*(int *)(iVar3 + *(int *)(param_1 + 0x5800)) == 0) {
    uVar1 = FUN_00108120(DAT_0040f4c4,
                         *(undefined8 *)
                          ((param_2 & 0xff) * 0x18 + *(int *)(*(int *)(param_1 + 0x5844) + 8) + 8));
    *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x5800)) = uVar1;
    iVar2 = *(int *)(param_1 + 0x5800);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5800);
  }
  return *(undefined4 *)(iVar3 + iVar2);
}


// ==== FUN_00127738 @ 00127738 ====

void FUN_00127738(undefined8 *param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  FUN_00125c60();
  *(undefined1 *)((int)param_1 + 0xdb) = param_3;
  *(int *)(param_1 + 0x1a) = param_2;
  *(undefined1 *)((int)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0xffff;
  *(undefined4 *)((int)param_1 + 0xc4) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)((int)param_1 + 0xed) = 0;
  *param_1 = uVar1;
  return;
}


// ==== FUN_001277a0 @ 001277a0 ====

undefined8 FUN_001277a0(int param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_2c;
  float fStack_28;
  
  FUN_00125cd8();
  *(undefined1 *)(param_1 + 0xda) = 1;
  iVar13 = *(int *)(*(int *)(param_1 + 0xd0) + 0x18);
  if (iVar13 != 0) {
    iVar7 = *(short *)(iVar13 + 4) + 8;
    iVar3 = *(short *)(iVar13 + 4) + 0xf;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    memset(*(undefined4 *)(iVar13 + 8),0xff,iVar3 >> 3);
  }
  if (*(short *)(param_1 + 0xd8) != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*(undefined2 *)(param_1 + 0xd8));
  }
  iVar13 = 0;
  auVar6 = **(undefined1 (**) [16])(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(int *)(param_1 + 0x60) = auVar6._0_4_;
  *(int *)(param_1 + 100) = auVar6._4_4_;
  *(int *)(param_1 + 0x68) = auVar6._8_4_;
  *(int *)(param_1 + 0x6c) = auVar6._12_4_;
  do {
    puVar2 = &DAT_003bcb08 + iVar13;
    puVar10 = (undefined1 *)(param_1 + 0xe1 + iVar13);
    iVar13 = iVar13 + 1;
    *puVar10 = *puVar2;
  } while (iVar13 < 9);
  iVar13 = *(int *)(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0xea) = DAT_003f42f0;
  *(undefined1 *)(param_1 + 0xeb) = DAT_003f42f1;
  uVar1 = DAT_003f42f2;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0xec) = uVar1;
  uVar16 = 0;
  if (*(int *)(iVar13 + 0x14) != 0) {
    lVar12 = (long)DAT_003f4314;
    lVar14 = (long)DAT_003f4318;
    auVar6 = _pextlw(lVar12,lVar12);
    auVar9 = _pextlw(lVar14,lVar14);
    auVar17 = _pextlw(lVar12,auVar6._0_8_);
    auVar6 = _pextlw(lVar14,auVar9._0_8_);
    do {
      iVar3 = uVar16 * 0x40;
      uVar16 = uVar16 + 1;
      iVar3 = *(int *)(iVar13 + 0x10) + iVar3;
      iVar13 = 0;
      auStack_50 = auVar6;
      auStack_40 = auVar17;
      if (0 < *(int *)(iVar3 + 0x14)) {
        iVar15 = 0;
        iVar7 = *(int *)(iVar3 + 0x10);
        while( true ) {
          iVar13 = iVar13 + 1;
          auVar9 = _lqc2(auStack_50);
          pauVar11 = (undefined1 (*) [16])(iVar7 + iVar15);
          auVar9 = _qmfc2(auVar9._0_4_);
          auVar18 = _lqc2(*pauVar11);
          fVar4 = auVar9._0_4_;
          auVar9 = _qmfc2(auVar18._0_4_);
          auVar18 = _lqc2(auStack_40);
          fVar8 = auVar9._0_4_;
          auVar9 = _qmfc2(auVar18._0_4_);
          fVar5 = auVar9._0_4_;
          auVar9 = _qmtc2((int)fVar4 * (uint)(fVar8 < fVar4) | (int)fVar8 * (uint)(fVar8 >= fVar4));
          iVar15 = iVar15 + 0x30;
          auVar18 = _vaddbc(in_vf0,auVar9);
          auVar9 = _sqc2(auVar18);
          _sqc2(auVar18);
          fVar4 = *(float *)(*pauVar11 + 4);
          fStack_2c = auVar9._4_4_;
          auVar9 = _qmtc2((int)fStack_2c * (uint)(fVar4 < fStack_2c) |
                          (int)fVar4 * (uint)(fVar4 >= fStack_2c));
          auVar18 = _vaddbc(in_vf0,auVar9);
          auVar9 = _sqc2(auVar18);
          _sqc2(auVar18);
          fVar4 = *(float *)(*pauVar11 + 8);
          fStack_28 = auVar9._8_4_;
          auVar9 = _qmtc2((int)fStack_28 * (uint)(fVar4 < fStack_28) |
                          (int)fVar4 * (uint)(fVar4 >= fStack_28));
          auVar9 = _vaddbc(in_vf0,auVar9);
          auStack_50 = _sqc2(auVar9);
          auVar9 = _lqc2(pauVar11[1]);
          auVar9 = _qmfc2(auVar9._0_4_);
          fVar4 = auVar9._0_4_;
          auVar9 = _qmtc2((int)fVar5 * (uint)(fVar5 < fVar4) | (int)fVar4 * (uint)(fVar5 >= fVar4));
          auVar18 = _vaddbc(in_vf0,auVar9);
          auVar9 = _sqc2(auVar18);
          _sqc2(auVar18);
          fStack_2c = auVar9._4_4_;
          fVar4 = SUB124(*(undefined1 (*) [12])pauVar11[1],4);
          auVar9 = _qmtc2((int)fStack_2c * (uint)(fStack_2c < fVar4) |
                          (int)fVar4 * (uint)(fStack_2c >= fVar4));
          auVar9 = _vaddbc(in_vf0,auVar9);
          _sqc2(auVar9);
          auVar9 = _sqc2(auVar9);
          fStack_28 = auVar9._8_4_;
          fVar4 = SUB124(*(undefined1 (*) [12])pauVar11[1],8);
          auVar9 = _qmtc2((int)fStack_28 * (uint)(fStack_28 < fVar4) |
                          (int)fVar4 * (uint)(fStack_28 >= fVar4));
          auVar9 = _vaddbc(in_vf0,auVar9);
          auStack_40 = _sqc2(auVar9);
          if (*(int *)(iVar3 + 0x14) <= iVar13) break;
          iVar7 = *(int *)(iVar3 + 0x10);
        }
      }
      *(undefined4 *)(iVar3 + 0x20) = auStack_50._0_4_;
      *(undefined4 *)(iVar3 + 0x24) = auStack_50._4_4_;
      *(undefined4 *)(iVar3 + 0x28) = auStack_50._8_4_;
      *(undefined4 *)(iVar3 + 0x2c) = auStack_50._12_4_;
      *(int *)(iVar3 + 0x30) = auStack_40._0_4_;
      *(int *)(iVar3 + 0x34) = auStack_40._4_4_;
      *(undefined4 *)(iVar3 + 0x38) = auStack_40._8_4_;
      *(undefined4 *)(iVar3 + 0x3c) = auStack_40._12_4_;
      iVar13 = *(int *)(param_1 + 0xd0);
    } while (uVar16 < *(uint *)(iVar13 + 0x14));
  }
  return 1;
}


// ==== FUN_00127a40 @ 00127a40 ====

undefined4 FUN_00127a40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(short *)(iVar1 + 0xd8) != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*(undefined2 *)(iVar1 + 0xd8));
  }
  if (*(int *)(iVar1 + 0xd4) != 0) {
    FUN_001b61c0(DAT_0040f4d8 + 0x512e0,param_1);
    *(undefined4 *)(iVar1 + 0xd4) = 0;
  }
  return 1;
}


// ==== FUN_00127ac8 @ 00127ac8 ====

void FUN_00127ac8(float param_1,float param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  int iVar5;
  long lVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  long lVar2;
  
  iVar3 = *(int *)(*(int *)(param_3 + 0xd0) + 0x18);
  if (iVar3 != 0) {
    if ((int)param_8 - 2U < 2) {
      param_2 = 9.0;
    }
    lVar6 = 0;
    if (0 < *(short *)(iVar3 + 4)) {
      iVar3 = *(int *)(param_3 + 0xd0);
      do {
        iVar5 = (int)lVar6;
        lVar2 = (long)(iVar5 + 7);
        if (-1 < lVar6) {
          lVar2 = lVar6;
        }
        iVar1 = (int)lVar2 >> 3;
        pauVar4 = (undefined1 (*) [16])(**(int **)(iVar3 + 0x18) + iVar5 * 0x70);
        if (((int)(uint)*(byte *)((*(int **)(iVar3 + 0x18))[2] + iVar1) >>
             (iVar5 + iVar1 * -8 & 0x1fU) & 1U) == 0) {
LAB_00127cac:
          iVar3 = *(int *)(param_3 + 0xd0);
        }
        else {
          if (SUB164(*pauVar4,0xc) != -999.9) {
            auVar8 = _lqc2(pauVar4[1]);
            auVar9 = _vaddbc(in_vf0,in_vf0);
            auVar7._8_4_ = in_a3_udw;
            auVar7._0_8_ = param_6;
            auVar7._12_4_ = in_register_0000007c;
            auVar7 = _lqc2(auVar7);
            auVar10 = _vsub(auVar8,auVar7);
            auVar7 = _vmul(auVar10,auVar10);
            auVar8 = _vmove(auVar10);
            _vaddabc(auVar7,auVar7);
            auVar7 = _vmaddbc(auVar9,auVar7);
            _vnop();
            _vnop();
            _vnop();
            _vrsqrt(in_vf0,auVar7);
            auVar7 = _qmfc2(auVar7._0_4_);
            auVar7 = _qmtc2(SQRT(auVar7._0_4_));
            uVar11 = _vwaitq();
            _vmulq(auVar8,uVar11);
            auVar7 = _qmfc2(auVar7._0_4_);
            if (auVar7._0_4_ < param_2) {
              if (param_8 != 0xd) {
                auVar8 = _lqc2(*pauVar4);
                auVar9 = _vaddbc(in_vf0,in_vf0);
                auVar8 = _vmul(auVar8,auVar10);
                _vaddabc(auVar8,auVar8);
                auVar8 = _vmaddbc(auVar9,auVar8);
                auVar8 = _qmfc2(auVar8._0_4_);
                if (0.0 <= auVar8._0_4_) {
                  FUN_001b9a40(((param_1 * (param_2 - auVar7._0_4_)) / param_2) * 0.0015,
                               DAT_0040f4d8 + 0x54ab0,pauVar4,*(undefined4 *)(iVar3 + 0x18),lVar6,
                               *(undefined1 *)(param_3 + 0xdb));
                  iVar3 = *(int *)(param_3 + 0xd0);
                  goto LAB_00127cb0;
                }
              }
              FUN_001b8798(DAT_0040f4d8 + 0x54ab0,pauVar4,
                           *(undefined4 *)(*(int *)(param_3 + 0xd0) + 0x18),lVar6,
                           *(undefined1 *)(param_3 + 0xdb));
            }
            goto LAB_00127cac;
          }
          iVar3 = *(int *)(param_3 + 0xd0);
        }
LAB_00127cb0:
        lVar6 = (long)(iVar5 + 1);
        if (*(short *)(*(int *)(iVar3 + 0x18) + 4) <= lVar6) {
          return;
        }
        iVar3 = *(int *)(param_3 + 0xd0);
      } while( true );
    }
  }
  return;
}


// ==== FUN_00127cf0 @ 00127cf0 ====

void FUN_00127cf0(int param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined1 auStack_b0 [16];
  
  if (*(char *)(param_1 + 0xda) != '\0') {
    iVar4 = *(int *)(param_1 + 0xd0);
    uVar10 = 0;
    iStack_c0 = param_2;
    if (*(int *)(iVar4 + 0x14) != 0) {
      auVar11 = _vadd(in_vf0,in_vf0);
      auStack_b0 = _sqc2(auVar11);
      do {
        iVar3 = uVar10 * 0x40;
        uVar10 = uVar10 + 1;
        pcVar2 = *(char **)(iVar3 + *(int *)(iVar4 + 0x10) + 4);
        iVar7 = 6;
        do {
          bVar1 = iVar7 != -1;
          iVar7 = iVar7 + -1;
        } while (bVar1);
        bVar1 = false;
        uVar9 = 0;
        iVar4 = *(int *)(iVar4 + 0x10) + iVar3;
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x20));
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x30));
        uStack_d0 = auStack_b0._0_4_;
        uStack_cc = auStack_b0._4_4_;
        uStack_c8 = auStack_b0._8_4_;
        uStack_c4 = auStack_b0._12_4_;
        auVar11 = _vsub(auVar11,auVar12);
        _lqc2(auStack_b0);
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x30));
        auVar14 = _vaddbc(in_vf0,auVar11);
        _lqc2(auStack_b0);
        _lqc2(auStack_b0);
        auVar15 = _vaddbc(in_vf0,auVar11);
        auStack_150 = _sqc2(auVar12);
        auVar13 = _vaddbc(in_vf0,auVar11);
        auVar17 = _vadd(auVar12,auVar13);
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x30));
        auVar11 = _vadd(auVar11,auVar14);
        auStack_140 = _sqc2(auVar11);
        auVar16 = _vadd(auVar11,auVar15);
        auVar11 = _vadd(auVar11,auVar13);
        auVar14 = _vadd(auVar16,auVar13);
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x30));
        auVar12 = _vadd(auVar12,auVar15);
        auStack_110 = _sqc2(auVar17);
        auVar13 = _vadd(auVar12,auVar13);
        auStack_100 = _sqc2(auVar11);
        auStack_f0 = _sqc2(auVar14);
        auStack_e0 = _sqc2(auVar13);
        auStack_120 = _sqc2(auVar12);
        auStack_130 = _sqc2(auVar16);
        uVar5 = FUN_00169be8(DAT_0040f4f4);
        for (; uVar9 < uVar5; uVar9 = uVar9 + 1 & 0xffff) {
          iVar4 = FUN_00169bd0(DAT_0040f4f4,uVar9);
          if ((*(char *)(iVar4 + 0x11c) != '\0') &&
             (lVar6 = FUN_0026db20(iVar4 + 0x160,auStack_150), lVar6 == 2)) {
            bVar1 = true;
            break;
          }
        }
        if (bVar1) {
          iVar4 = *(int *)(param_1 + 0xd0);
        }
        else {
          lVar6 = FUN_0026db20(DAT_0040f4c0 + 0xcfd0,auStack_150);
          iVar4 = iStack_c0;
          if (lVar6 == 2) {
            iVar4 = 0;
          }
          if (lVar6 != 0) {
            if (*pcVar2 == '\f') {
              FUN_001b0f50(DAT_0040f4d0 + 0x5b00,
                           *(int *)(*(int *)(param_1 + 0xd0) + 0x10) + iVar3 + 0x10);
              iVar4 = *(int *)(param_1 + 0xd0);
              goto LAB_00127f70;
            }
            if ((byte)(*pcVar2 - 2U) < 3) {
              puVar8 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xd0) + 0x10) + iVar3);
              FUN_001af738(0,DAT_0040f4c0 + 0x14,puVar8 + 4,pcVar2,*puVar8,param_1 + 0xe0,0,
                           iVar4 == 0,0);
              iVar4 = *(int *)(param_1 + 0xd4);
            }
            else {
              puVar8 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xd0) + 0x10) + iVar3);
              FUN_001af738(0,DAT_0040f4c0 + 0x14,puVar8 + 4,pcVar2,*puVar8,0,0,iVar4 == 0,0);
              iVar4 = *(int *)(param_1 + 0xd4);
            }
            if (iVar4 != 0) {
              *(undefined1 *)(iVar4 + 4) = 1;
            }
          }
          iVar4 = *(int *)(param_1 + 0xd0);
        }
LAB_00127f70:
      } while (uVar10 < *(uint *)(iVar4 + 0x14));
    }
    if (*(int *)(iVar4 + 0x18) != 0) {
      FUN_001b7f50(DAT_0040f4d8 + 0x660b4);
    }
    if (*(short *)(param_1 + 0xd8) != -1) {
      FUN_001b37b0(DAT_0040f4d8 + 0x33c40,*(undefined2 *)(param_1 + 0xd8));
    }
  }
  return;
}


// ==== FUN_00128008 @ 00128008 ====

undefined8
FUN_00128008(undefined8 param_1,undefined1 (*param_2) [16],undefined4 *param_3,undefined4 param_4,
            undefined1 (*param_5) [16])

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9 = _qmtc2(param_4);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _lqc2(*param_2);
  auVar5 = _lqc2(param_2[1]);
  auVar10 = _vsub(auVar5,auVar4);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xc));
  auVar5 = _vmul(auVar9,auVar10);
  auVar7 = _vmul(auVar9,auVar6);
  _vaddabc(auVar5,auVar5);
  auVar6 = _vmaddbc(auVar8,auVar5);
  auVar5 = _vmul(auVar9,auVar4);
  _vadd(in_vf0,auVar9);
  auVar4 = _qmfc2(auVar6._0_4_);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar8,auVar5);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar8,auVar7);
  auVar6 = _vsubbc(in_vf0,in_vf0);
  fVar3 = auVar4._0_4_;
  auVar6 = _vaddbc(auVar6,auVar7);
  auVar4 = _vsub(in_vf0,auVar5);
  auVar4 = _vaddbc(auVar4,auVar6);
  auVar4 = _qmfc2(auVar4._0_4_);
  if (fVar3 == 0.0) {
    fVar3 = 1e-05;
  }
  fVar3 = auVar4._0_4_ / fVar3;
  uVar1 = 0;
  if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
    auVar4 = _qmtc2(fVar3);
    auVar5 = _qmfc2(auVar9._0_4_);
    auVar6 = _vmulbc(auVar10,auVar4);
    auVar4 = _sqc2(auVar6);
    *param_5 = auVar4;
    auVar4 = _lqc2(*param_2);
    auVar6 = _vadd(auVar6,auVar4);
    auVar4 = _sqc2(auVar6);
    *param_5 = auVar4;
    auVar4 = _qmfc2(auVar6._0_4_);
    lVar2 = FUN_0027f218(auVar4._0_8_,auVar5._0_8_,*param_3,param_3[4],param_3[8],param_3[0xc]);
    uVar1 = 1;
    if (lVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_00128120 @ 00128120 ====

void FUN_00128120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined8 uStack_c0;
  
  piVar1 = *(int **)(*(int *)((int)param_1 + 0xd0) + 0x18);
  if ((piVar1 != (int *)0x0) && (lVar7 = 0, 0 < (short)piVar1[1])) {
    auVar9 = _vaddbc(in_vf0,in_vf0);
    iVar8 = 0;
    auVar9 = _sqc2(auVar9);
    do {
      iVar6 = (int)lVar7;
      lVar3 = (long)(iVar6 + 7);
      if (-1 < lVar7) {
        lVar3 = lVar7;
      }
      iVar4 = (int)lVar3 >> 3;
      uVar5 = iVar6 + iVar4 * -8;
      if (((int)(uint)*(byte *)(piVar1[2] + iVar4) >> (uVar5 & 0x1f) & 1U) != 0) {
        iVar2 = *piVar1;
        lVar7 = FUN_00128008(param_1,param_2,iVar2 + iVar8 + 0x10);
        if (lVar7 != 0) {
          *(byte *)(piVar1[2] + iVar4) = *(byte *)(piVar1[2] + iVar4) & ~(byte)(1 << (uVar5 & 0x1f))
          ;
          auVar10 = _lqc2(*(undefined1 (*) [16])param_2);
          auVar11 = _lqc2(((undefined1 (*) [16])param_2)[1]);
          auVar12 = _vsub(auVar11,auVar10);
          auVar11 = _vmul(auVar12,auVar12);
          auVar10 = _lqc2(auVar9);
          _vaddabc(auVar11,auVar11);
          auVar10 = _vmaddbc(auVar10,auVar11);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar10);
          uVar13 = _vwaitq();
          auVar10 = _vmulq(auVar12,uVar13);
          auVar10 = _qmfc2(auVar10._0_4_);
          FUN_001b96b8(DAT_0040f4d8 + 0x54ab0,iVar2 + iVar8,uStack_c0,auVar10._0_8_,param_3,
                       piVar1[4],(*(ushort *)((int)piVar1 + 6) >> 1 ^ 1) & 1,
                       *(undefined1 *)((int)param_1 + 0xdb));
        }
      }
      lVar7 = (long)(iVar6 + 1);
      iVar8 = iVar8 + 0x70;
    } while (lVar7 < (short)piVar1[1]);
  }
  return;
}


// ==== FUN_001282b0 @ 001282b0 ====

undefined4 FUN_001282b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}


// ==== FUN_001282d0 @ 001282d0 ====

void FUN_001282d0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  return;
}


// ==== FUN_001282e0 @ 001282e0 ====

void FUN_001282e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = 0;
  iVar11 = (int)param_1;
  FUN_0027f790();
  *(undefined4 *)(iVar11 + 0x5aa0) = 1;
  *(undefined4 *)(iVar11 + 0x5aa4) = 0x1d;
  iVar8 = 0;
  iVar10 = iVar11 + 0x30;
  while( true ) {
    FUN_00139bb0(iVar10,iVar8 >> 0x18);
    iVar9 = iVar9 + 1;
    if (0 < iVar9) break;
    iVar8 = iVar9 * 0x1000000;
    iVar10 = iVar10 + 0x8c0;
  }
  FUN_0012d588(iVar11 + 0x4990);
  iVar10 = iVar11 + 0x4920;
  FUN_0012d588(iVar11 + 0x5210);
  FUN_0014da80(iVar11 + 0x5abc,0x32);
  FUN_0014da80(iVar11 + 0x5ac4,0x32);
  FUN_001530e0(iVar11 + 0x5acc);
  *(undefined4 *)(iVar11 + 0x49b8) = 2;
  *(undefined4 *)(iVar11 + 0x49bc) = 3;
  *(undefined1 *)(iVar11 + 0x49c9) = 0;
  *(undefined1 *)(iVar11 + 0x5249) = 1;
  *(undefined4 *)(iVar11 + 0x523c) = 5;
  *(undefined4 *)(iVar11 + 0x5238) = 4;
  FUN_0012a4d8(param_1);
  *(undefined4 *)(iVar11 + 0x5ab0) = 0;
  FUN_00272af8(0x3f000000,iVar10,2,0x100,iVar11 + 0x920);
  FUN_00272c18(0x42700000,iVar10,0);
  FUN_00272c18(0x41400000,iVar10,1);
  *(undefined4 *)(iVar11 + 0x5ca4) = 0;
  FUN_001c90d8(iVar11 + 0x5b00);
  puVar3 = (undefined4 *)FUN_00107cf8(0x60);
  uVar4 = DAT_0048f6f4;
  puVar2 = PTR_DAT_0040e438;
  puVar3[0x17] = 1;
  puVar3[0x13] = 0;
  puVar3[0x16] = uVar4;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  uVar1 = *(undefined8 *)puVar2;
  uVar4 = *(undefined4 *)(puVar2 + 8);
  uVar5 = *(undefined4 *)(puVar2 + 0xc);
  *puVar3 = (int)uVar1;
  puVar3[1] = (int)((ulong)uVar1 >> 0x20);
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  uVar4 = *(undefined4 *)(puVar2 + 0x14);
  uVar5 = *(undefined4 *)(puVar2 + 0x18);
  uVar6 = *(undefined4 *)(puVar2 + 0x1c);
  puVar3[4] = *(undefined4 *)(puVar2 + 0x10);
  puVar3[5] = uVar4;
  puVar3[6] = uVar5;
  puVar3[7] = uVar6;
  uVar4 = *(undefined4 *)(puVar2 + 0x24);
  uVar5 = *(undefined4 *)(puVar2 + 0x28);
  uVar6 = *(undefined4 *)(puVar2 + 0x2c);
  puVar3[8] = *(undefined4 *)(puVar2 + 0x20);
  puVar3[9] = uVar4;
  puVar3[10] = uVar5;
  puVar3[0xb] = uVar6;
  uVar4 = *(undefined4 *)(puVar2 + 0x30);
  uVar5 = *(undefined4 *)(puVar2 + 0x34);
  uVar6 = *(undefined4 *)(puVar2 + 0x38);
  uVar7 = *(undefined4 *)(puVar2 + 0x3c);
  *(undefined4 **)(iVar11 + 0x5a98) = puVar3;
  puVar3[0xc] = uVar4;
  puVar3[0xd] = uVar5;
  puVar3[0xe] = uVar6;
  puVar3[0xf] = uVar7;
  puVar3[0x13] = 0x41200000;
  return;
}


// ==== FUN_00128480 @ 00128480 ====

/* Strings referenciadas:
     "Trigger Threshold"
     "Tinnitus"
     "Levels\Level_%02u\LevelDat.bin"
     "Levels\Level_%02u\fpguns\"
     "Levels\Level_%02u\Stg_%04u\StLevel.bin"
     "Levels\Level_%02u\Stg_%04u\Guns%s.bin"
     "../Export/ValueDB/Sound/ps2/DSP.cfg" */

undefined8 FUN_00128480(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  char *pcVar12;
  undefined *puVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  undefined4 in_s4_udw;
  undefined4 in_register_0000014c;
  undefined4 in_s5_udw;
  undefined4 in_register_0000015c;
  float fVar17;
  float fVar18;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined2 uStack_1c0;
  undefined1 uStack_1be;
  
  iVar16 = (int)param_1;
  if ((*(int *)(iVar16 + 0x5aa0) == 0x1c) && (lVar5 = FUN_00129de8(), lVar5 == 0)) {
    return 0;
  }
  FUN_001005a0(DAT_0040f0e4);
  switch(*(undefined4 *)(iVar16 + 0x5aa0)) {
  case 1:
  case 0x37:
    break;
  default:
    goto switchD_00128508_caseD_2;
  case 5:
    goto switchD_00128508_caseD_5;
  case 6:
    goto switchD_00128508_caseD_6;
  case 7:
    goto switchD_00128508_caseD_7;
  case 8:
    goto switchD_00128508_caseD_8;
  case 9:
    if (*(int *)(iVar16 + 0x5aec) == 0) {
      lVar5 = FUN_00108458(DAT_0040f4c4,6,*(undefined1 *)(iVar16 + 0x5aac));
      *(int *)(iVar16 + 0x5aec) = (int)lVar5;
      if (lVar5 == 0) {
        return 0;
      }
    }
    goto LAB_00128820;
  case 10:
    goto switchD_00128508_caseD_a;
  case 0xb:
    goto switchD_00128508_caseD_b;
  case 0xc:
    if (*(int *)(iVar16 + 0x5af0) == 0) {
      lVar5 = FUN_00108458(DAT_0040f4c4,0xb,
                           (int)((int)((uint)*(byte *)(iVar16 + 0x5aac) << 0x18) >> 8 |
                                (uint)*(byte *)(iVar16 + 0x5aad) << 0x18) >> 0x10);
      *(int *)(iVar16 + 0x5af0) = (int)lVar5;
      if (lVar5 == 0) {
        return 0;
      }
    }
    goto LAB_00128940;
  case 0xd:
    goto switchD_00128508_caseD_d;
  case 0xe:
    goto switchD_00128508_caseD_e;
  case 0xf:
    if (*(int *)(iVar16 + 0x5af4) == 0) {
      uVar6 = FUN_0012d508(param_1);
      lVar5 = FUN_00108458(DAT_0040f4c4,0xc,uVar6);
      *(int *)(iVar16 + 0x5af4) = (int)lVar5;
      if (lVar5 == 0) {
        return 0;
      }
    }
    goto LAB_00128c20;
  case 0x10:
    goto switchD_00128508_caseD_10;
  case 0x11:
    goto switchD_00128508_caseD_11;
  case 0x12:
    goto switchD_00128508_caseD_12;
  case 0x13:
    goto switchD_00128508_caseD_13;
  case 0x14:
    goto switchD_00128508_caseD_14;
  case 0x15:
    goto switchD_00128508_caseD_15;
  case 0x16:
switchD_00128508_caseD_16:
    lVar5 = FUN_0010f860(DAT_0040f4bc);
    if (lVar5 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar16 + 0x5aa0) = 0x1c;
    *(undefined4 *)(iVar16 + 0x5aa4) = 0x1d;
    *(undefined8 *)(iVar16 + 0x5c98) = 0;
    *(undefined8 *)(iVar16 + 0x5c80) = 0;
    *(undefined8 *)(iVar16 + 0x5c88) = 0;
    *(undefined8 *)(iVar16 + 0x5c90) = 0;
switchD_00128508_caseD_1c:
    return 1;
  case 0x1c:
    goto switchD_00128508_caseD_1c;
  }
  if (DAT_0040d9a8 == '\0') {
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bcb14,0x3f4320,0x3f4338,
                 PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
    DAT_0040d9a8 = '\x01';
  }
  FUN_0027f7d0(param_1);
  FUN_00382348(iVar16 + 0x5ad8,0x2b9d6f8);
  *(undefined4 *)(iVar16 + 0x5ae0) = 0;
  *(undefined4 *)(iVar16 + 0x5ae4) = 0xffffffff;
  uVar1 = *(undefined1 *)(DAT_0040f0e0 + 0x2020c);
  *(undefined1 *)(iVar16 + 0x5aac) = uVar1;
  *(undefined1 *)(iVar16 + 0x5aad) = *(undefined1 *)(DAT_0040f0e0 + 0x2020e);
  *(uint *)(iVar16 + 0x5ab0) = (uint)*(byte *)(DAT_0040f0e0 + 0x2020d);
  iVar4 = FUN_00103358(DAT_0040f0e0,uVar1);
  *(int *)(iVar16 + 0x5ab4) = iVar4;
  iVar15 = *(int *)(iVar16 + 0x5ab0);
  if ((*(byte *)(iVar4 + 0x12) & 1) == 0) {
    iVar15 = iVar15 + 1;
  }
  *(char *)(iVar16 + 0x5aae) = (char)iVar15 - (char)(iVar15 / 2 << 1);
  *(undefined4 *)(*(char *)(iVar16 + 0x5aae) * 0x880 + iVar16 + 0x4994) =
       *(undefined4 *)(iVar16 + 0x5ab0);
  bVar14 = *(byte *)(iVar16 + 0x5aae) ^ 1;
  *(byte *)(iVar16 + 0x5aae) = bVar14;
  if ((long)*(int *)(iVar16 + 0x5ab0) < (long)*(char *)(*(int *)(iVar16 + 0x5ab4) + 0x11)) {
    *(int *)((char)bVar14 * 0x880 + iVar16 + 0x4994) = *(int *)(iVar16 + 0x5ab0) + 1;
    *(byte *)(iVar16 + 0x5aae) = *(byte *)(iVar16 + 0x5aae) ^ 1;
  }
  else {
    *(undefined4 *)((char)bVar14 * 0x880 + iVar16 + 0x4994) = 0xffffffff;
  }
  FUN_0025b5d0(DAT_0040f4cc);
  *(undefined4 *)(iVar16 + 0x5aa0) = 5;
switchD_00128508_caseD_5:
  lVar5 = FUN_0015cab0(DAT_0040f4e0);
  if (lVar5 != 0) {
    *(undefined4 *)(iVar16 + 0x5aa0) = 6;
switchD_00128508_caseD_6:
    iVar15 = iVar16 + 0x5abc;
    iVar4 = 1;
    FUN_0015cec8(DAT_0040f4e0);
    FUN_00272b78(iVar16 + 0x4920);
    FUN_00165de8(DAT_0040f4f4);
    FUN_0016d958(DAT_0040f4d4);
    FUN_0012f3c8(DAT_0040f534);
    FUN_0012ef28(DAT_0040f538);
    do {
      iVar4 = iVar4 + -1;
      FUN_0014db40(iVar15);
      iVar15 = iVar15 + 8;
    } while (-1 < iVar4);
    FUN_00153190(iVar16 + 0x5acc);
    *(undefined4 *)(iVar16 + 0x5aa0) = 7;
switchD_00128508_caseD_7:
    lVar5 = FUN_001386c8(DAT_0040f514);
    if (lVar5 != 0) {
      *(undefined4 *)(iVar16 + 0x5aa0) = 8;
switchD_00128508_caseD_8:
      lVar5 = FUN_00108458(DAT_0040f4c4,6,*(undefined1 *)(iVar16 + 0x5aac));
      *(int *)(iVar16 + 0x5aec) = (int)lVar5;
      if (lVar5 == 0) {
        if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
           (bVar2 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
          bVar2 = true;
        }
        if (bVar2) {
          return 0;
        }
        sprintf(&fStack_2c0,0x3f4348,*(undefined1 *)(iVar16 + 0x5aac));
        FUN_001093c0(DAT_0040f4c4,&fStack_2c0,8,7,0x12a310,param_1,1,0x2000000);
        sprintf(&uStack_1c0,0x3f4368,*(undefined1 *)(iVar16 + 0x5aac));
        FUN_00144038(DAT_0040f540,&uStack_1c0);
        uVar11 = 9;
LAB_00128be0:
        *(undefined4 *)(iVar16 + 0x5aa0) = uVar11;
        return 0;
      }
LAB_00128820:
      *(undefined4 *)(iVar16 + 0x5aa0) = 10;
switchD_00128508_caseD_a:
      lVar5 = FUN_001e87a0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0);
      if (lVar5 != 0) {
        *(undefined4 *)(iVar16 + 0x5aa0) = 0xb;
switchD_00128508_caseD_b:
        lVar5 = FUN_00108458(DAT_0040f4c4,0xb,
                             (int)((int)((uint)*(byte *)(iVar16 + 0x5aac) << 0x18) >> 8 |
                                  (uint)*(byte *)(iVar16 + 0x5aad) << 0x18) >> 0x10);
        *(int *)(iVar16 + 0x5af0) = (int)lVar5;
        if (lVar5 == 0) {
          if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
             (bVar2 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
            bVar2 = true;
          }
          if (bVar2) {
            return 0;
          }
          sprintf(&fStack_2c0,0x3f4388,*(undefined1 *)(iVar16 + 0x5aac),
                  *(undefined1 *)(iVar16 + 0x5aad));
          FUN_001093c0(DAT_0040f4c4,&fStack_2c0,8,8,0x12a418,param_1,1,0x2000000);
          uVar11 = 0xc;
          goto LAB_00128be0;
        }
LAB_00128940:
        FUN_001e2d38(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),
                     *(undefined4 *)(iVar16 + 0x5af0));
        FUN_00139190(DAT_0040f514,*(undefined4 *)(*(int *)(iVar16 + 0x5af0) + 0xc),1);
        if (0 < *(int *)(*(int *)(*(int *)(iVar16 + 0x5af0) + 0x10) + 8)) {
          iVar15 = *(int *)(iVar16 + 0x5af0);
          iVar4 = 0;
          while( true ) {
            FUN_00272488(*(undefined8 *)(iVar4 * 0x10 + *(int *)(*(int *)(iVar15 + 0x10) + 0xc)),
                         &fStack_2c0);
            if (uStack_2b8._3_1_ == ' ') {
              pcVar12 = (char *)((int)&uStack_2b8 + 3);
              uStack_2b8 = (float)((uint)uStack_2b8 & 0xffffff);
              while (pcVar12 = pcVar12 + -1, *pcVar12 == ' ') {
                *pcVar12 = '\0';
              }
            }
            uVar6 = FUN_00110858(DAT_0040f4bc);
            uVar7 = FUN_00383738(*(undefined4 *)(*(int *)(iVar16 + 0x5af0) + 0x10),iVar4);
            FUN_0010f708(uVar6,uVar7,&fStack_2c0);
            if (*(int *)(*(int *)(*(int *)(iVar16 + 0x5af0) + 0x10) + 8) <= iVar4 + 1) break;
            iVar15 = *(int *)(iVar16 + 0x5af0);
            iVar4 = iVar4 + 1;
          }
        }
        *(undefined4 *)(iVar16 + 0x5aa0) = 0xd;
switchD_00128508_caseD_d:
        lVar5 = FUN_001abc28(DAT_0040f50c);
        if (lVar5 != 0) {
          *(undefined4 *)(iVar16 + 0x5aa0) = 0xe;
switchD_00128508_caseD_e:
          if (*(char *)(iVar16 + 0x5aac) < '2') {
            *(undefined1 *)(iVar16 + 0x5ca0) = 0;
            for (iVar15 = *(int *)(DAT_0040f0e0 + 0x2014c); iVar15 < 4; iVar15 = iVar15 + 1) {
              cVar3 = FUN_00123bf0(0x48efa8,iVar15);
              if (cVar3 != '\0') {
                *(undefined1 *)(iVar16 + 0x5ca0) = 1;
              }
            }
            if (*(int *)(DAT_0040f0e0 + 0x2014c) == 3) {
              *(undefined1 *)(iVar16 + 0x5ca0) = 1;
            }
            cVar3 = FUN_00123bf0(0x48efa8,3);
            if ((cVar3 == '\0') && (*(int *)(DAT_0040f0e0 + 0x2014c) != 3)) {
              *(undefined1 *)(iVar16 + 0x5ca1) = 0;
            }
            else {
              *(undefined1 *)(iVar16 + 0x5ca1) = 1;
            }
          }
          else {
            *(undefined1 *)(iVar16 + 0x5ca0) = 0;
            *(undefined1 *)(iVar16 + 0x5ca1) = 0;
          }
          uVar6 = FUN_0012d508(param_1);
          lVar5 = FUN_00108458(DAT_0040f4c4,0xc,uVar6);
          *(int *)(iVar16 + 0x5af4) = (int)lVar5;
          if (lVar5 == 0) {
            if (*(char *)(iVar16 + 0x5ca0) == '\0') {
              uStack_1c0 = (ushort)uStack_1c0._1_1_ << 8;
            }
            else {
              uStack_1c0 = DAT_003f43b0;
              uStack_1be = DAT_003f43b2;
            }
            if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
               (bVar2 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
              bVar2 = true;
            }
            if (bVar2) {
              return 0;
            }
            sprintf(&fStack_2c0,0x3f43b8,*(undefined1 *)(iVar16 + 0x5aac),
                    *(undefined1 *)(iVar16 + 0x5aad),&uStack_1c0);
            FUN_001093c0(DAT_0040f4c4,&fStack_2c0,8,0x19,0x12a480,param_1,1,0x2000000);
            uVar11 = 0xf;
            goto LAB_00128be0;
          }
LAB_00128c20:
          *(undefined4 *)(iVar16 + 0x5aa0) = 0x10;
switchD_00128508_caseD_10:
          lVar5 = FUN_0012d5a8(iVar16 + 0x4990);
          if (lVar5 != 0) {
            *(undefined4 *)(iVar16 + 0x5aa0) = 0x11;
switchD_00128508_caseD_11:
            if ((*(char *)(iVar16 + 0x5aae) != '\x01') ||
               (lVar5 = FUN_0012d5a8(iVar16 + 0x5210), lVar5 != 0)) {
              *(undefined4 *)(iVar16 + 0x5ae8) = 0;
              *(undefined4 *)(iVar16 + 0x5aa0) = 0x12;
              DAT_003bd1b0 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x354);
              fVar18 = 0.0;
              pcVar12 = &DAT_003f42e0;
              iVar15 = 0;
              DAT_003bd1b4 = *(undefined4 *)(*(int *)(iVar16 + 0x5aec) + 0x358);
              DAT_003bd1b8 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x35c);
              do {
                fVar17 = (float)(int)*pcVar12 * 0.0078125;
                if (fVar17 < fVar18) {
                  fVar17 = (float)FUN_0029e688(-fVar17,DAT_003bd1b4);
                  fVar17 = -fVar17;
                  uVar6 = extraout_v0_udw;
                }
                else {
                  fVar17 = (float)FUN_0029e688(fVar17,DAT_003bd1b4);
                  uVar6 = extraout_v0_udw_00;
                }
                fVar17 = fVar17 * DAT_003bd1b0;
                if (iVar15 == 0) {
                  fVar17 = fVar17 + DAT_003bd1b8;
                }
                puVar13 = &DAT_003bcb08 + iVar15;
                iVar15 = iVar15 + 1;
                pcVar12 = pcVar12 + 1;
                auVar8._0_8_ = (long)(int)(fVar17 * 128.0);
                auVar8._8_8_ = uVar6;
                auVar9._8_4_ = in_s5_udw;
                auVar9._0_8_ = 0xffffffffffffff80;
                auVar9._12_4_ = in_register_0000015c;
                auVar9 = _pmaxw(auVar8,auVar9);
                auVar10._8_4_ = in_s4_udw;
                auVar10._0_8_ = 0x7f;
                auVar10._12_4_ = in_register_0000014c;
                auVar10 = _pminw(auVar9,auVar10);
                auVar10 = _pextlw(0,auVar10._0_8_);
                *puVar13 = auVar10[0];
              } while (iVar15 < 9);
              DAT_003bd1ac = *(undefined4 *)(*(int *)(iVar16 + 0x5aec) + 0x368);
              DAT_003bd1a4 = *(undefined4 *)(*(int *)(iVar16 + 0x5aec) + 0x360);
              DAT_003bd1a8 = *(undefined4 *)(*(int *)(iVar16 + 0x5aec) + 0x364);
              iVar15 = *(int *)(iVar16 + 0x5aec);
              FUN_001b0fa8(*(undefined4 *)(iVar15 + 900),iVar16 + 0x5b00,
                           *(undefined4 *)(iVar15 + 0x378),*(undefined4 *)(iVar15 + 0x37c),
                           *(undefined4 *)(iVar15 + 0x380));
              fVar18 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x36c);
              fVar18 = (float)((int)fVar18 * (uint)(-0.5 < fVar18) |
                              (uint)(-0.5 >= fVar18) * -0x41000000);
              DAT_003bd1bc = (float)((int)fVar18 * (uint)(fVar18 < 0.5) |
                                    (uint)(fVar18 >= 0.5) * 0x3f000000);
              DAT_00415b60 = DAT_003bd1bc + 1.0;
              fVar18 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x370);
              fVar18 = (float)((int)fVar18 * (uint)(-0.5 < fVar18) |
                              (uint)(-0.5 >= fVar18) * -0x41000000);
              DAT_003bd1c0 = (float)((int)fVar18 * (uint)(fVar18 < 0.5) |
                                    (uint)(fVar18 >= 0.5) * 0x3f000000);
              DAT_00415b64 = DAT_003bd1c0 + 1.0;
              fVar18 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x374);
              fVar18 = (float)((int)fVar18 * (uint)(-0.5 < fVar18) |
                              (uint)(-0.5 >= fVar18) * -0x41000000);
              DAT_003bd1c4 = (float)((int)fVar18 * (uint)(fVar18 < 0.5) |
                                    (uint)(fVar18 >= 0.5) * 0x3f000000);
              DAT_00415b68 = DAT_003bd1c4 + 1.0;
              uStack_2b4 = 0x3f800000;
              DAT_00415b6c = 0x3f800000;
              fVar18 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x388);
              fVar18 = (float)((int)fVar18 * (uint)(0.0 < fVar18));
              DAT_003bd1d4 = (int)fVar18 * (uint)(fVar18 < 1.0) | (uint)(fVar18 >= 1.0) * 0x3f800000
              ;
              fVar18 = *(float *)(*(int *)(iVar16 + 0x5aec) + 0x38c);
              fVar18 = (float)((int)fVar18 * (uint)(0.0 < fVar18));
              DAT_003bd1d8 = (int)fVar18 * (uint)(fVar18 < 1.0) | (uint)(fVar18 >= 1.0) * 0x3f800000
              ;
              fStack_2c0 = DAT_00415b60;
              fStack_2bc = DAT_00415b64;
              uStack_2b8 = DAT_00415b68;
              FUN_001af580(DAT_0040f4c0 + 0x14,0x3f43e0);
switchD_00128508_caseD_12:
              if (*(int *)(iVar16 + 0x5ae8) < *(int *)(DAT_0040f0e0 + 0x20208)) {
                lVar5 = FUN_00129090(param_1);
                if (lVar5 == 0) {
                  return 0;
                }
                *(int *)(iVar16 + 0x5ae8) = *(int *)(iVar16 + 0x5ae8) + 1;
              }
              *(undefined4 *)(iVar16 + 0x5aa0) = 0x13;
switchD_00128508_caseD_13:
              lVar5 = FUN_001b1b28(DAT_0040f4d8,*(undefined4 *)(*(int *)(iVar16 + 0x5aec) + 0x350));
              if (lVar5 != 0) {
                *(undefined4 *)(iVar16 + 0x5aa0) = 0x14;
switchD_00128508_caseD_14:
                lVar5 = FUN_0016ae08(DAT_0040f528);
                if (lVar5 != 0) {
                  *(undefined4 *)(iVar16 + 0x5aa0) = 0x15;
switchD_00128508_caseD_15:
                  FUN_0011a0c8(DAT_0040f508);
                  FUN_0027f818(param_1);
                  FUN_00160738(iVar16 + 0x8f0);
                  FUN_0011a1c0(DAT_0040f530);
                  FUN_0011bf28(DAT_0040f504);
                  FUN_00126290(DAT_0040f4e4);
                  FUN_001f2790(DAT_0040f518,*(undefined1 *)(DAT_0040f0e0 + 0x20208));
                  FUN_001f2340(DAT_0040f518);
                  FUN_001f27f8(DAT_0040f51c);
                  FUN_001f2838(DAT_0040f51c,0,1);
                  if ((*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20fd8) ||
                     (*(int *)(DAT_0040f0e0 + 0x21074) == DAT_0040f0e0 + 0x20fd8)) {
                    FUN_001f2898(DAT_0040f51c,0,2);
                  }
                  else {
                    FUN_001f2898(DAT_0040f51c,0,1);
                  }
                  FUN_001b0e00(iVar16 + 0x5b00);
                  FUN_0014d958(DAT_0040f52c);
                  FUN_0012be80(param_1);
                  uVar6 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(iVar16 + 0x5aac));
                  FUN_0012f908(iVar16 + 0x910,uVar6);
                  *(undefined4 *)(iVar16 + 0x5aa8) = 0;
                  *(undefined4 *)(iVar16 + 0x5aa0) = 0x16;
                  goto switchD_00128508_caseD_16;
                }
              }
            }
          }
        }
      }
    }
  }
switchD_00128508_caseD_2:
  return 0;
}


// ==== FUN_00129090 @ 00129090 ====

bool FUN_00129090(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = FUN_0012bd98(param_1,*(undefined4 *)((int)param_1 + 0x5ab0));
  iVar3 = (int)param_1 + param_2 * 0x8c0 + 0x30;
  lVar2 = FUN_00139c68(iVar3,*(int *)(*(int *)(iVar1 + 0x10) + 4) + 0x20);
  if (lVar2 != 0) {
    FUN_0016e660(DAT_0040f4d4,iVar3);
  }
  return lVar2 != 0;
}


// ==== FUN_00129108 @ 00129108 ====

void FUN_00129108(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    FUN_0025c558(DAT_0040f4cc,param_2,param_4,8);
  }
  FUN_0012a158(param_1,param_2);
  *(undefined1 *)((int)param_2 + 0x13c) = 1;
  return;
}


// ==== FUN_00129160 @ 00129160 ====

long * FUN_00129160(int param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = *(long **)(param_1 + 0x5ca4);
  if (plVar2 != (long *)0x0) {
    iVar3 = *(int *)((int)plVar2 + 0xc4);
    while( true ) {
      if ((iVar3 - 3U < 2) || (bVar1 = false, iVar3 == 7)) {
        bVar1 = true;
      }
      if (bVar1) {
        if (*plVar2 == param_2) {
          return plVar2;
        }
        plVar2 = *(long **)(plVar2 + 0x16);
      }
      else {
        plVar2 = *(long **)(plVar2 + 0x16);
      }
      if (plVar2 == (long *)0x0) break;
      iVar3 = *(int *)((int)plVar2 + 0xc4);
    }
  }
  return (long *)0x0;
}


// ==== FUN_001291c0 @ 001291c0 ====

void FUN_001291c0(int param_1,int param_2)

{
  FUN_0014dd98(param_1 + param_2 * 8 + 0x5abc);
  return;
}


// ==== FUN_001291e8 @ 001291e8 ====

void FUN_001291e8(int param_1,int param_2)

{
  FUN_0014de58(param_1 + param_2 * 8 + 0x5abc);
  return;
}


// ==== FUN_00129218 @ 00129218 ====

void FUN_00129218(int param_1,int param_2,undefined8 param_3)

{
  FUN_0014df68(param_1 + param_2 * 8 + 0x5abc,param_3);
  return;
}


// ==== FUN_00129240 @ 00129240 ====

void FUN_00129240(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (*(char *)(iVar4 + 0x13c) != '\0') {
    FUN_00175ab8(DAT_0040f4d4 + 0xa48,param_2,1);
    if ((*(int *)(iVar4 + 0xc4) - 3U < 2) || (bVar1 = false, *(int *)(iVar4 + 0xc4) == 7)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(int *)(iVar4 + 0xb4) == 0) {
        iVar3 = *(int *)(iVar4 + 0xc4);
      }
      else {
        lVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0xcc))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 0x10) + 200));
        if (lVar2 == 0) {
          FUN_0025c690(DAT_0040f4cc,param_2);
          iVar3 = *(int *)(iVar4 + 0xc4);
        }
        else {
          iVar3 = *(int *)(iVar4 + 0xc4);
        }
      }
    }
    else {
      iVar3 = *(int *)(iVar4 + 0xc4);
    }
    if (iVar3 == 3) {
      FUN_00152878(param_2);
      iVar3 = *(int *)(iVar4 + 0xc4);
    }
    else {
      iVar3 = *(int *)(iVar4 + 0xc4);
    }
    if (iVar3 == 4) {
      FUN_00149ac8(param_2);
    }
    if (param_3 != 0) {
      FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_2,1);
    }
    FUN_0012a280(param_1,param_2);
    *(undefined1 *)(iVar4 + 0x13c) = 0;
  }
  return;
}


// ==== FUN_00129360 @ 00129360 ====

void FUN_00129360(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x5aa0) == 0x1c) {
    FUN_0012d910(iVar5 + 0x4990);
    FUN_0012d910(iVar5 + 0x5210);
    FUN_00165df0(DAT_0040f4f4,*(undefined8 *)(iVar5 + 0xd0));
    FUN_0016afb0(DAT_0040f528);
  }
  lVar1 = FUN_001038a8(DAT_0040f0e0);
  if (lVar1 != 0) {
    return;
  }
  if (*(int *)(iVar5 + 0x5aa0) != 0x1c) {
    return;
  }
  lVar1 = FUN_00103908(DAT_0040f0e0);
  if (((lVar1 == 3) && (lVar1 = FUN_00103870(DAT_0040f0e0), lVar1 == 0)) &&
     (lVar1 = FUN_00103890(DAT_0040f0e0), lVar1 == 0)) {
    FUN_0012d3d0(*(undefined4 *)(iVar5 + 0x1c));
    return;
  }
  lVar1 = FUN_00103908(DAT_0040f0e0);
  if (((lVar1 == 1) && (lVar1 = FUN_00103870(DAT_0040f0e0), lVar1 == 0)) &&
     (lVar1 = FUN_00103890(DAT_0040f0e0), lVar1 == 0)) {
    FUN_0012d270(*(undefined4 *)(iVar5 + 0x1c));
    return;
  }
  lVar1 = FUN_00103908(DAT_0040f0e0);
  if (lVar1 == 2) {
    FUN_0012d310(*(undefined4 *)(iVar5 + 0x1c));
    return;
  }
  iVar3 = *(int *)(iVar5 + 0x5aa8);
  if (iVar3 == 2) {
    *(undefined4 *)(iVar5 + 0x5aa8) = 4;
  }
  else if (iVar3 < 3) {
    if (iVar3 != 1) {
      uVar6 = *(undefined4 *)(iVar5 + 0x1c);
      goto LAB_0012956c;
    }
    *(undefined4 *)(iVar5 + 0x5aa8) = 3;
  }
  else {
    if (iVar3 == 3) {
      iVar3 = *(int *)(iVar5 + 0x5ab0);
      iVar4 = iVar3 + 1;
      *(int *)(iVar5 + 0x5ab0) = iVar4;
      if ((long)iVar4 < (long)*(char *)(*(int *)(iVar5 + 0x5ab4) + 0x11)) {
        *(int *)(*(char *)(iVar5 + 0x5aae) * 0x880 + iVar5 + 0x4994) = iVar3 + 2;
        *(byte *)(iVar5 + 0x5aae) = *(byte *)(iVar5 + 0x5aae) ^ 1;
      }
      else {
        *(undefined4 *)(*(char *)(iVar5 + 0x5aae) * 0x880 + iVar5 + 0x4994) = 0xffffffff;
      }
    }
    else {
      if (iVar3 != 4) {
        uVar6 = *(undefined4 *)(iVar5 + 0x1c);
        goto LAB_0012956c;
      }
      uVar2 = FUN_0012bd98(param_1,*(int *)(iVar5 + 0x5ab0) + 1);
      FUN_0012dab8(uVar2);
    }
    *(undefined4 *)(iVar5 + 0x5aa8) = 0;
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
LAB_0012956c:
  FUN_0013bac8(uVar6,iVar5 + 0x30);
  FUN_0016db58(DAT_0040f4d4);
  FUN_0011a0e8(DAT_0040f508);
  FUN_001ab428(DAT_0040f50c);
  (**(code **)(*(int *)(iVar5 + 0x40) + 0xc))
            (*(undefined4 *)(iVar5 + 0x1c),
             iVar5 + 0x30 + (int)*(short *)(*(int *)(iVar5 + 0x40) + 8));
  FUN_001387c8(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f514);
  FUN_001abe08(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f50c);
  FUN_0012f408(DAT_0040f534);
  FUN_0012ef68(DAT_0040f538);
  FUN_0015cba0(DAT_0040f4e0);
  iVar3 = *(int *)(iVar5 + 0x5ca4);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0xc4);
    while( true ) {
      if (iVar4 == 1) {
        iVar3 = *(int *)(iVar3 + 0xb0);
      }
      else if (iVar4 == 2) {
        iVar3 = *(int *)(iVar3 + 0xb0);
      }
      else {
        (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))
                  (*(undefined4 *)(iVar5 + 0x1c),iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 8));
        iVar3 = *(int *)(iVar3 + 0xb0);
      }
      if (iVar3 == 0) break;
      iVar4 = *(int *)(iVar3 + 0xc4);
    }
  }
  FUN_0014d998(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f52c);
  FUN_0025b6d0(DAT_0040f4cc);
  iVar3 = *(int *)(iVar5 + 0x5ca4);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x10);
    while( true ) {
      (**(code **)(iVar4 + 0x2c))(*(undefined4 *)(iVar5 + 0x1c),iVar3 + *(short *)(iVar4 + 0x28));
      iVar3 = *(int *)(iVar3 + 0xb0);
      if (iVar3 == 0) break;
      iVar4 = *(int *)(iVar3 + 0x10);
    }
  }
  FUN_001abe10(DAT_0040f50c);
  FUN_00165f30(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f4f4,*(undefined8 *)(iVar5 + 0xd0));
  if (*(int *)(DAT_0040f504 + 4) != 1) {
    FUN_001b1cb8(DAT_0040f4d8);
  }
  if ((*(int *)(DAT_0040f504 + 4) == 6) || (*(int *)(DAT_0040f504 + 4) == 4)) {
    FUN_0011c0f0();
  }
  iVar3 = iVar5 + 0x5abc;
  iVar4 = 1;
  do {
    iVar4 = iVar4 + -1;
    FUN_0014e010(iVar3);
    iVar3 = iVar3 + 8;
  } while (-1 < iVar4);
  FUN_001531b8(iVar5 + 0x5acc);
  FUN_00272cc0(iVar5 + 0x4920);
  FUN_00126328(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f4e4);
  FUN_001f2828(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f51c);
  FUN_001f25a8(*(undefined4 *)(iVar5 + 0x1c),DAT_0040f518);
  FUN_001b0aa8(DAT_0040f4c0 + 0xd290);
  return;
}


// ==== FUN_001297a0 @ 001297a0 ====

undefined4 FUN_001297a0(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x34))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x30),param_2 == 3);
  }
  return 1;
}


// ==== fe_FE_LOADING_001297e0 @ 001297e0 ====

/* Strings referenciadas:
     "FE_LOADING" */

void fe_FE_LOADING_001297e0(int param_1)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_vf0 [16];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [16];
  
  puVar3 = &DAT_00410000;
  uVar1 = FUN_001aeb50(DAT_0040f4c0,1);
  FUN_0016b710(*(undefined4 *)(puVar3 + -0xad8),uVar1);
  FUN_001c6010(DAT_0040f4c0);
  FUN_001c4fb0(DAT_0040f4c0,1);
  FUN_001aeb18(DAT_0040f4c0);
  *(undefined4 *)(DAT_0040f4c0 + 0xcd60) = 0;
  iVar2 = DAT_0040f4d8;
  FUN_001b3780(DAT_0040f4d8 + 0x33c40);
  FUN_001b6188(iVar2 + 0x512e0);
  if ((DAT_0040d9ab != '\0') &&
     (lVar6 = (long)(param_1 + 0x30), *(char *)(DAT_0040f4bc + 0x7e1) != '\0')) {
    FUN_001368f0(lVar6,DAT_0040f4bc + 0x7a0);
    FUN_001a6be0(*(undefined4 *)((int)lVar6 + 0x330));
  }
  FUN_0016b730(DAT_0040f528);
  FUN_00273a18(param_1 + 0x4920,DAT_0040f4c0 + 0xcfd0,0x1297a0,0);
  auVar7 = _pextlw(0x3f800000,0x3f800000);
  auVar8 = _pextlw(0x3f800000,auVar7._0_8_);
  auVar7 = _por(in_zero_qw,auVar8);
  FUN_0016b118(DAT_0040f528,auVar7._0_8_);
  auVar7 = _por(in_zero_qw,auVar8);
  FUN_0016b4f8(DAT_0040f528,auVar7._0_8_);
  FUN_001af768(DAT_0040f4c0 + 0x14,0);
  FUN_001af798(DAT_0040f4c0 + 0x14);
  lVar6 = FUN_001c28a0(DAT_0040f4d8 + 0x83ca0);
  if (lVar6 == 0) {
    DAT_0040d9f0 = FUN_001bd610(DAT_0040f4d8 + 0x4ee00);
    FUN_001af768(DAT_0040f4c0 + 0x14,5);
    DAT_0040d9f0 = 0;
  }
  lVar6 = 0;
  FUN_001af768(DAT_0040f4c0 + 0x14,1);
  FUN_001af768(DAT_0040f4c0 + 0x14,2);
  FUN_001c0518(DAT_0040f4d8);
  FUN_001c9088(param_1 + 0x5b00);
  FUN_001b0260(DAT_0040f4c0 + 0xcbe0);
  uVar4 = (undefined4)lVar6;
  do {
    iVar2 = param_1 + (char)uVar4 * 0x880 + 0x4990;
    iVar5 = (int)lVar6;
    if (iVar2 == 0) {
      lVar6 = (long)(iVar5 + 1);
    }
    else if (*(char *)(iVar2 + 0x38) == '\0') {
      lVar6 = (long)(iVar5 + 1);
    }
    else {
      if (*(int *)(iVar2 + 0x6b8) != 0) {
        FUN_001d4f38(iVar2 + 0x270);
      }
      lVar6 = (long)(iVar5 + 1);
    }
    uVar4 = (undefined4)lVar6;
  } while (lVar6 < 2);
  FUN_001b1dc0(DAT_0040f4d8);
  FUN_001af768(DAT_0040f4c0 + 0x14,6);
  FUN_0016b758(DAT_0040f528);
  FUN_001be4c0(DAT_0040f4d8 + 0x83720);
  FUN_001b1e00(DAT_0040f4d8);
  lVar6 = FUN_001c28a0(DAT_0040f4d8 + 0x83ca0);
  if (lVar6 != 0) {
    DAT_0040d9f0 = FUN_001bd610(DAT_0040f4d8 + 0x4ee00);
    FUN_001af768(DAT_0040f4c0 + 0x14,5);
    DAT_0040d9f0 = 0;
  }
  FUN_001b0ac8(DAT_0040f4c0 + 0xd290);
  FUN_001ae5a0(DAT_0040f4c0);
  FUN_00110430(DAT_0040f4bc);
  FUN_001ae5c8(DAT_0040f4c0);
  (**(code **)(*(int *)(DAT_0040f0e4 + 0xa4) + 0x24))
            (DAT_0040f0e4 + *(short *)(*(int *)(DAT_0040f0e4 + 0xa4) + 0x20));
  FUN_00166808(DAT_0040f4f4);
  FUN_001abe18(DAT_0040f50c);
  FUN_00176d00(DAT_0040f4d4 + 0xd5c);
  lVar6 = FUN_00103860(DAT_0040f0e0);
  if (lVar6 != 0) {
    iVar2 = FUN_001aeb50(DAT_0040f4c0,0);
    fVar13 = (float)*(int *)(iVar2 + 0x7c) * 0.5 - 60.0;
    fVar14 = fVar13 - 1.0;
    fVar12 = fVar13 + 1.0;
    fVar9 = (float)FUN_0029dc18((*(float *)(DAT_0040f0e0 + 0x20140) -
                                (float)(int)*(float *)(DAT_0040f0e0 + 0x20140)) * 360.0 *
                                0.017453292);
    _qmtc2(*(undefined4 *)(DAT_0040f518 + 0x1f0));
    auVar7 = _qmtc2(fVar9 * 0.25 + 0.75);
    auVar7 = _vmulbc(in_vf0,auVar7);
    auStack_f0 = _sqc2(auVar7);
    uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f44e0);
    lVar6 = (long)(int)auStack_130;
    FUN_00275260(uVar1,lVar6,0x20);
    fVar9 = (float)FUN_002758e0(*(undefined4 *)(DAT_0040f0e0 + 0x2107c),lVar6);
    FUN_00266088();
    fVar9 = fVar9 * 0.5 * 30.0;
    fVar10 = 319.0 - fVar9;
    FUN_00275dc0(fVar10,fVar14,0x41f00000,*(undefined4 *)(DAT_0040f0e0 + 0x2107c),lVar6,0);
    fVar11 = 321.0 - fVar9;
    FUN_00275dc0(fVar11,fVar14,0x41f00000,*(undefined4 *)(DAT_0040f0e0 + 0x2107c),lVar6,0);
    FUN_00275dc0(fVar10,fVar12,0x41f00000,*(undefined4 *)(DAT_0040f0e0 + 0x2107c),lVar6,0);
    FUN_00275dc0(fVar11,fVar12,0x41f00000,*(undefined4 *)(DAT_0040f0e0 + 0x2107c),lVar6,0);
    FUN_00275dc0(320.0 - fVar9,fVar13,0x41f00000,*(undefined4 *)(DAT_0040f0e0 + 0x2107c),lVar6,
                 auStack_f0._0_8_);
    FUN_002662a8();
  }
  FUN_001c50e0(DAT_0040f4c0);
  return;
}


// ==== FUN_00129de8 @ 00129de8 ====

undefined4 FUN_00129de8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  switch(*(undefined4 *)(iVar8 + 0x5aa4)) {
  case 0x1d:
    FUN_0012bfc8(param_1);
    *(undefined4 *)(iVar8 + 0x5aa4) = 0x1e;
    break;
  case 0x1e:
    break;
  case 0x1f:
    goto switchD_00129e30_caseD_1f;
  case 0x20:
    goto switchD_00129e30_caseD_20;
  case 0x21:
    goto switchD_00129e30_caseD_21;
  default:
    goto switchD_00129e30_default;
  }
  lVar4 = FUN_0012d9a0(iVar8 + 0x4990);
  if (lVar4 != 0) {
    lVar4 = FUN_0012d9a0(iVar8 + 0x5210);
    if (lVar4 != 0) {
      *(undefined4 *)(iVar8 + 0x5aa4) = 0x1f;
switchD_00129e30_caseD_1f:
      iVar7 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(iVar8 + 0x5af0) + 0x10) + 8)) {
        do {
          uVar2 = FUN_00110858(DAT_0040f4bc);
          iVar6 = iVar7 + 1;
          uVar3 = FUN_00383738(*(undefined4 *)(*(int *)(iVar8 + 0x5af0) + 0x10),iVar7);
          FUN_0010f710(uVar2,uVar3);
          iVar7 = iVar6;
        } while (iVar6 < *(int *)(*(int *)(*(int *)(iVar8 + 0x5af0) + 0x10) + 8));
      }
      iVar7 = iVar8 + 0x5abc;
      iVar6 = 1;
      FUN_001084a8(DAT_0040f4c4,6,*(undefined1 *)(iVar8 + 0x5aac));
      *(undefined4 *)(iVar8 + 0x5aec) = 0;
      FUN_001e2f08(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),
                   *(undefined4 *)(iVar8 + 0x5af0));
      FUN_001084a8(DAT_0040f4c4,0xb,
                   (int)((int)((uint)*(byte *)(iVar8 + 0x5aac) << 0x18) >> 8 |
                        (uint)*(byte *)(iVar8 + 0x5aad) << 0x18) >> 0x10);
      uVar2 = FUN_0012d508(param_1);
      FUN_001084a8(DAT_0040f4c4,0xc,uVar2);
      *(undefined4 *)(iVar8 + 0x5af0) = 0;
      *(undefined4 *)(iVar8 + 0x5af4) = 0;
      do {
        iVar6 = iVar6 + -1;
        FUN_0014dc10(iVar7);
        iVar7 = iVar7 + 8;
      } while (-1 < iVar6);
      FUN_001531c0(iVar8 + 0x5acc);
      FUN_0027f858(param_1);
      FUN_001b1f48(DAT_0040f4d8);
      FUN_0011a108(DAT_0040f508);
      FUN_0016dc80(DAT_0040f4d4);
      *(undefined4 *)(iVar8 + 0x5aa4) = 0x20;
switchD_00129e30_caseD_20:
      lVar4 = FUN_00138970(DAT_0040f514);
      if (lVar4 != 0) {
        *(undefined4 *)(iVar8 + 0x5aa4) = 0x21;
switchD_00129e30_caseD_21:
        iVar7 = 0;
        FUN_0025c028(DAT_0040f4cc);
        FUN_001f26c0(DAT_0040f518);
        FUN_001f2830(DAT_0040f51c);
        FUN_0016b630(DAT_0040f528);
        FUN_001264c0(DAT_0040f4e4);
        FUN_00110490(DAT_0040f4bc);
        FUN_0011a888(DAT_0040f530);
        FUN_0011c558(DAT_0040f504);
        FUN_0012f4e8(DAT_0040f534);
        FUN_0012f058(DAT_0040f538);
        if (0 < *(int *)(DAT_0040f0e0 + 0x20208)) {
          iVar6 = iVar8 + 0x30;
          piVar5 = (int *)(iVar8 + 0x40);
          do {
            iVar1 = *piVar5;
            iVar7 = iVar7 + 1;
            piVar5 = piVar5 + 0x230;
            (**(code **)(iVar1 + 0x24))(iVar6 + *(short *)(iVar1 + 0x20));
            iVar6 = iVar6 + 0x8c0;
          } while (iVar7 < *(int *)(DAT_0040f0e0 + 0x20208));
        }
        *(undefined4 *)(iVar8 + 0x5aa0) = 0x37;
        *(undefined4 *)(iVar8 + 0x5aa4) = 0x37;
        return 1;
      }
    }
switchD_00129e30_default:
  }
  return 0;
}


// ==== FUN_0012a0d8 @ 0012a0d8 ====

void FUN_0012a0d8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x30;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + -1;
    FUN_0013b9d0(iVar1);
    iVar1 = iVar1 + 0x8c0;
  } while (-1 < iVar2);
  iVar1 = param_1 + 0x5abc;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + -1;
    FUN_0014dc18(iVar1);
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  FUN_001531c8(param_1 + 0x5acc);
  return;
}


// ==== FUN_0012a158 @ 0012a158 ====

void FUN_0012a158(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_40 [16];
  
  FUN_00125c58(param_2,*(undefined4 *)(param_1 + 0x5ca4));
  iVar1 = (int)param_2;
  *(int *)(param_1 + 0x5ca4) = iVar1;
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
  _vmulabc(auVar2,auVar5);
  _vmaddabc(auVar4,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar2 = _vmaddbc(auVar6,in_vf0);
  _lqc2(auStack_40);
  _vadd(in_vf0,auVar2);
  auVar2 = _vmove(auVar5);
  auVar2 = _qmfc2(auVar2._0_4_);
  FUN_00272c28(param_1 + 0x4920,iVar1 + 0x20,auVar2._0_8_,param_2);
  return;
}


// ==== FUN_0012a1e0 @ 0012a1e0 ====

void FUN_0012a1e0(int param_1,int param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x80));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x90));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x60));
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
  _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  _vmulabc(auVar1,auVar2);
  _vmaddabc(auVar4,auVar2);
  _vmaddabc(auVar3,auVar2);
  auVar2 = _vmaddbc(auVar5,in_vf0);
  auVar1 = _vadd(in_vf0,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar1;
  if (*(undefined1 (**) [16])(param_2 + 0x30) != (undefined1 (*) [16])0x0) {
    auVar1 = _lqc2(**(undefined1 (**) [16])(param_2 + 0x30));
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar1 = _vsub(auVar2,auVar1);
    auVar1 = _vmul(auVar1,auVar1);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(auVar3,auVar1);
    auVar1 = _qmfc2(auVar1._0_4_);
    if (*(float *)(param_2 + 0x50) <= auVar1._0_4_) {
      FUN_002732e0(param_1 + 0x4920,param_2 + 0x20);
    }
  }
  return;
}


// ==== FUN_0012a280 @ 0012a280 ====

void FUN_0012a280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x5ca4);
  iVar2 = 0;
  do {
    iVar1 = iVar3;
    if (iVar1 == 0) {
LAB_0012a2f0:
      FUN_00272c58(param_1 + 0x4920,param_2 + 0x20);
      return;
    }
    if (iVar1 == param_2) {
      if (iVar1 != 0) {
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x5ca4) = *(undefined4 *)(iVar1 + 0xb0);
        }
        else {
          FUN_00125c58(iVar2,*(undefined4 *)(iVar1 + 0xb0));
        }
      }
      goto LAB_0012a2f0;
    }
    iVar3 = *(int *)(iVar1 + 0xb0);
    iVar2 = iVar1;
  } while( true );
}


// ==== FUN_0012a310 @ 0012a310 ====

void FUN_0012a310(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar2 = FUN_001092f8();
  FUN_002881a8(uVar2);
  FUN_00108540(DAT_0040f4c4,6,uVar2,*(undefined1 *)(DAT_0040f4d0 + 0x5aac));
  iVar4 = (int)uVar2;
  FUN_00108540(DAT_0040f4c4,0,*(undefined4 *)(iVar4 + 0x398),0);
  iVar1 = *(int *)(iVar4 + 0x39c);
  FUN_00272aa8(iVar1);
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      uVar2 = FUN_003822f8(iVar1,iVar3);
      iVar3 = iVar3 + 1;
      FUN_001af930(uVar2);
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_00108540(DAT_0040f4c4,1,*(undefined4 *)(iVar4 + 0x39c),0);
  FUN_00160648(DAT_0040f4d0 + 0x8f0,iVar4 + 4);
  FUN_0016be10();
  return;
}


// ==== FUN_0012a418 @ 0012a418 ====

void FUN_0012a418(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001092f8();
  FUN_00288488(uVar1);
  FUN_00108540(DAT_0040f4c4,0xb,uVar1,
               (int)((int)((uint)*(byte *)(DAT_0040f4d0 + 0x5aac) << 0x18) >> 8 |
                    (uint)*(byte *)(DAT_0040f4d0 + 0x5aad) << 0x18) >> 0x10);
  return;
}


// ==== FUN_0012a480 @ 0012a480 ====

void FUN_0012a480(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001092f8();
  FUN_00288930(uVar1);
  uVar2 = FUN_0012d508(DAT_0040f4d0);
  FUN_00108540(DAT_0040f4c4,0xc,uVar1,uVar2);
  return;
}


// ==== FUN_0012a4d8 @ 0012a4d8 ====

void FUN_0012a4d8(int param_1)

{
  undefined4 uVar1;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [16];
  
  auStack_60[0] = 0;
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,0xb,0);
  FUN_0033ad90(auStack_50,200,200);
  auStack_60[0] = FUN_00107c98(0x40f0f0,auStack_50);
  uVar1 = FUN_0033add0(auStack_60,200,200);
  *(undefined4 *)(param_1 + 0x5a90) = uVar1;
  FUN_0033b610(auStack_50,200,200);
  auStack_60[0] = FUN_00107c98(0x40f0f0,auStack_50);
  uVar1 = FUN_0033aee8(auStack_60,200,200);
  *(undefined4 *)(param_1 + 0x5a94) = uVar1;
  FUN_0033a3b0(auStack_50,10,10);
  auStack_60[0] = FUN_00107c98(0x40f0f0,auStack_50);
  uVar1 = FUN_0033a3f0(auStack_60,10,10);
  *(undefined4 *)(param_1 + 0x5a9c) = uVar1;
  FUN_00107b08(0x40f0f0,0xb,0);
  FUN_00107ab8(0x40f0f0,0,0);
  return;
}


// ==== FUN_0012a5f8 @ 0012a5f8 ====

undefined4 FUN_0012a5f8(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0xc4);
    if (*(char *)((int)param_3 + 0x29) == '\x01') {
      return 1;
    }
    if (iVar1 != param_3[9]) {
      if ((iVar5 - 3U < 2) || (bVar3 = false, iVar5 == 7)) {
        bVar3 = true;
      }
      if (bVar3) {
        uVar2 = param_3[8];
        if (((uVar2 & 0x80) == 0) || (*(int *)(iVar1 + 0xb4) != 0)) {
          if ((uVar2 & 2) == 0) {
            if ((uVar2 & 0x20) == 0) {
              return 1;
            }
            if (*(int *)(iVar1 + 0xb4) == 0) {
              iVar5 = *(int *)(iVar1 + 0x10);
            }
            else if (*(char *)(iVar1 + 0x13b) == '\0') {
              uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xb4) + 0x34) + 0xc) +
                                        0x58) + 0x8c);
              if (((int)uVar2 >> 1 & 1U) == 0) {
                if ((uVar2 & 1) == 0) {
                  return 1;
                }
                iVar5 = *(int *)(iVar1 + 0x10);
              }
              else {
                iVar5 = *(int *)(iVar1 + 0x10);
              }
            }
            else {
              iVar5 = *(int *)(iVar1 + 0x10);
            }
          }
          else {
            iVar5 = *(int *)(iVar1 + 0x10);
          }
          lVar4 = (**(code **)(iVar5 + 0xa4))
                            (iVar1 + *(short *)(iVar5 + 0xa0),*param_3,param_3[4],param_3[8],
                             *(undefined1 *)(param_3 + 10));
          if (lVar4 == 0) {
            return 1;
          }
LAB_0012a75c:
          *(undefined1 *)((int)param_3 + 0x29) = 1;
          return 0;
        }
      }
      else if (iVar5 == 1) {
        if (((param_3[8] & 4) == 0) || (*(int *)(iVar1 + 0x38c) != 0)) {
          if ((param_3[8] & 0x40) == 0) {
            return 1;
          }
          if (*(int *)(iVar1 + 0x38c) != 1) {
            return 1;
          }
        }
        lVar4 = FUN_00134fd8(iVar1,*param_3,param_3[4],*(undefined1 *)(param_3 + 10),1);
        if (lVar4 != 0) goto LAB_0012a75c;
      }
      else {
        if (iVar5 != 2) {
          return 1;
        }
        if (((param_3[8] & 8) != 0) &&
           (lVar4 = FUN_00134fd8(iVar1,*param_3,param_3[4],*(undefined1 *)(param_3 + 10),1),
           lVar4 != 0)) {
          *(undefined1 *)((int)param_3 + 0x29) = 1;
          return 0;
        }
      }
    }
  }
  return 1;
}


// ==== FUN_0012a7c0 @ 0012a7c0 ====

undefined1
FUN_0012a7c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,long param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  
  auVar6 = _qmtc2(param_2);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _qmtc2(param_3);
  auVar4 = _vsub(auVar7,auVar6);
  auVar4 = _vmul(auVar4,auVar4);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  uStack_c7 = 0;
  if (2.3283064e-10 <= auVar4._0_4_) {
    auStack_f0 = _sqc2(auVar6);
    auStack_e0 = _sqc2(auVar7);
    uStack_c8 = (undefined1)param_6;
    uStack_c7 = 0;
    uStack_d0 = param_4;
    uStack_cc = param_5;
    if ((param_4 & 1) != 0) {
      iVar3 = 0;
      iVar2 = (int)param_1 + 0x4990;
      do {
        if (*(char *)(iVar2 + 0x38) != '\0') {
          if (param_6 == 0) {
            lVar1 = FUN_0012a918(param_1,iVar2,auStack_f0,(int)param_4 >> 8 & 1);
          }
          else {
            lVar1 = FUN_0012ab28(param_1,iVar2,auStack_f0,(int)param_4 >> 9 & 1);
          }
          if (lVar1 != 0) {
            return 1;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x880;
      } while (iVar3 < 2);
    }
    if ((param_4 & 0x6f) != 0) {
      FUN_00273708((int)param_1 + 0x4920,auStack_f0,0x12a5f8,auStack_f0);
    }
  }
  return uStack_c7;
}


// ==== FUN_0012a918 @ 0012a918 ====

undefined8 FUN_0012a918(int param_1,int param_2,undefined1 (*param_3) [16],long param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iStack_bc;
  int iStack_b8;
  int iStack_b0;
  int aiStack_ac [3];
  
  iVar10 = 0;
  do {
    if (((param_4 == 0) || (iVar10 == 0)) &&
       (iStack_b0 = param_2 + iVar10 * 0x60 + 0x700, *(int *)(iStack_b0 + 0x40) != 0)) {
      auVar11 = _lqc2(*param_3);
      auVar6 = _qmfc2(auVar11._0_4_);
      auVar1 = _sqc2(auVar11);
      iStack_bc = auVar1._4_4_;
      iVar2 = iStack_bc;
      piVar8 = *(int **)(param_1 + 0x5a90);
      auVar12 = _lqc2(param_3[1]);
      auVar7 = _qmfc2(auVar12._0_4_);
      auVar1 = _sqc2(auVar11);
      iStack_b8 = auVar1._8_4_;
      iVar3 = iStack_b8;
      auVar1 = _sqc2(auVar12);
      iStack_bc = auVar1._4_4_;
      auVar1 = _sqc2(auVar12);
      iStack_b8 = auVar1._8_4_;
      *piVar8 = (int)&iStack_b0;
      piVar8[1] = (int)aiStack_ac;
      piVar8[2] = 1;
      piVar8[3] = 0;
      piVar8[0x34] = 0;
      piVar8[0x37] = 0;
      piVar8[0x14] = 0;
      piVar8[0x3c] = 0;
      piVar8[0x3e] = 0;
      piVar8[5] = 0;
      piVar8[0x3a] = 0;
      piVar8[8] = auVar6._0_4_;
      piVar8[9] = iVar2;
      piVar8[10] = iVar3;
      piVar8[0xb] = 0;
      piVar8[0xc] = auVar7._0_4_;
      piVar8[0xd] = iStack_bc;
      piVar8[0xe] = iStack_b8;
      piVar8[0xf] = 0;
      piVar8[0x3f] = 0x3f800000;
      piVar8[6] = piVar8[7];
      *(undefined1 *)(piVar8 + 0x42) = 0;
      piVar8[0x40] = 0;
      piVar8[0x41] = 0;
      aiStack_ac[0] = iStack_b0;
      if (param_4 == 0) {
        lVar5 = FUN_0033ae68(*(undefined4 *)(param_1 + 0x5a90));
        if (lVar5 != 0) {
          return 1;
        }
      }
      else {
        uVar4 = FUN_0033ae40(*(undefined4 *)(param_1 + 0x5a90));
        uVar9 = 0;
        if (uVar4 != 0) {
          piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x5a90) + 0x10) + 0x50);
          do {
            uVar9 = uVar9 + 1;
            if ((*(uint *)(*piVar8 + 0x50) & 0x20000000) == 0) {
              return 1;
            }
            piVar8 = piVar8 + 0x34;
          } while (uVar9 < uVar4);
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  return 0;
}


// ==== FUN_0012ab28 @ 0012ab28 ====

undefined4 FUN_0012ab28(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  char acStack_20 [16];
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
  if (param_4 == 0) {
    lVar2 = FUN_0027dd60(uVar1,param_3);
    if (lVar2 != 0) {
      return 1;
    }
  }
  else {
    acStack_20[0] = '\0';
    FUN_0027d7a0(uVar1,param_3,0x12aaf8,acStack_20);
    if (acStack_20[0] != '\0') {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0012ab90 @ 0012ab90 ====

undefined4 FUN_0012ab90(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((iVar1 != 0) && (iVar5 = *(int *)(iVar1 + 0xc4), iVar1 != param_3[9])) {
    if ((iVar5 - 3U < 2) || (bVar2 = false, iVar5 == 7)) {
      bVar2 = true;
    }
    if (bVar2) {
      if ((param_3[8] & 0x80) == 0) {
        uVar4 = param_3[8];
      }
      else if (*(int *)(iVar1 + 0xb4) == 0) {
        lVar3 = (**(code **)(*(int *)(iVar1 + 0x10) + 0xcc))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 200));
        if (lVar3 == 0) {
          return 1;
        }
        uVar4 = param_3[8];
      }
      else {
        uVar4 = param_3[8];
      }
      if ((uVar4 & 2) == 0) {
        if ((uVar4 & 0x20) == 0) {
          return 1;
        }
        if (*(int *)(iVar1 + 0xb4) == 0) {
          iVar5 = *(int *)(iVar1 + 0x10);
        }
        else if (*(char *)(iVar1 + 0x13b) == '\0') {
          uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xb4) + 0x34) + 0xc) + 0x58)
                           + 0x8c);
          if (((int)uVar4 >> 1 & 1U) == 0) {
            if ((uVar4 & 1) == 0) {
              return 1;
            }
            iVar5 = *(int *)(iVar1 + 0x10);
          }
          else {
            iVar5 = *(int *)(iVar1 + 0x10);
          }
        }
        else {
          iVar5 = *(int *)(iVar1 + 0x10);
        }
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x10);
      }
      lVar3 = (**(code **)(iVar5 + 0xac))
                        (iVar1 + *(short *)(iVar5 + 0xa8),*param_3,*(undefined8 *)(param_3 + 4),
                         param_3[8],*(undefined1 *)(param_3 + 10),&uStack_80);
      if (lVar3 == 0) {
        return 1;
      }
      if ((float)param_3[0x14] <= fStack_60) {
        return 1;
      }
      param_3[0x14] = fStack_60;
      param_3[0x15] = uStack_5c;
      param_3[0x16] = uStack_58;
      param_3[0x17] = uStack_54;
      *(undefined1 *)((int)param_3 + 0x29) = 1;
    }
    else if (iVar5 == 1) {
      if (((param_3[8] & 4) == 0) || (*(int *)(iVar1 + 0x38c) != 0)) {
        if ((param_3[8] & 0x40) == 0) {
          return 1;
        }
        if (*(int *)(iVar1 + 0x38c) != 1) {
          return 1;
        }
      }
      lVar3 = FUN_00135138(iVar1,*param_3,*(undefined8 *)(param_3 + 4),*(undefined1 *)(param_3 + 10)
                           ,&uStack_80,1);
      if (lVar3 == 0) {
        return 1;
      }
      if ((float)param_3[0x14] <= fStack_60) {
        return 1;
      }
      param_3[0x14] = fStack_60;
      param_3[0x15] = uStack_5c;
      param_3[0x16] = uStack_58;
      param_3[0x17] = uStack_54;
      *(undefined1 *)((int)param_3 + 0x29) = 1;
    }
    else {
      if (iVar5 != 2) {
        return 1;
      }
      if ((param_3[8] & 8) == 0) {
        return 1;
      }
      lVar3 = FUN_00135138(iVar1,*param_3,*(undefined8 *)(param_3 + 4),*(undefined1 *)(param_3 + 10)
                           ,&uStack_80,1);
      if (lVar3 == 0) {
        return 1;
      }
      if ((float)param_3[0x14] <= fStack_60) {
        return 1;
      }
      param_3[0x14] = fStack_60;
      param_3[0x15] = uStack_5c;
      param_3[0x16] = uStack_58;
      param_3[0x17] = uStack_54;
      *(undefined1 *)((int)param_3 + 0x29) = 1;
    }
    param_3[0xc] = (int)uStack_80;
    param_3[0xd] = (int)((ulong)uStack_80 >> 0x20);
    param_3[0xe] = uStack_78;
    param_3[0xf] = uStack_74;
    param_3[0x10] = (int)uStack_70;
    param_3[0x11] = (int)((ulong)uStack_70 >> 0x20);
    param_3[0x12] = uStack_68;
    param_3[0x13] = uStack_64;
    param_3[0x18] = uStack_50;
    param_3[0x19] = uStack_4c;
    param_3[0x1a] = uStack_48;
    param_3[0x1b] = uStack_44;
    param_3[0x15] = iVar1;
  }
  return 1;
}


// ==== FUN_0012ae00 @ 0012ae00 ====

undefined4 FUN_0012ae00(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) == 0)) {
    iVar2 = *(int *)((int)param_3 + 0x24);
    if (iVar2 == 0) {
      FUN_00128120(iVar1,param_3,0);
    }
    else {
      FUN_00128120(iVar1,param_3,*(undefined4 *)(iVar2 + 0x2a4));
    }
  }
  return 1;
}


// ==== FUN_0012ae58 @ 0012ae58 ====

long FUN_0012ae58(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,long param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  uint uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  
  auVar10 = _qmtc2(param_2);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _qmtc2(param_3);
  auVar8 = _vsub(auVar11,auVar10);
  auVar8 = _vmul(auVar8,auVar8);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar9,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  auStack_c0 = _sqc2(auVar9);
  uStack_d0 = 0xffffffff;
  lVar7 = 0;
  if (2.3283064e-10 <= auVar8._0_4_) {
    iVar6 = (int)param_1;
    lVar7 = 0;
    uVar1 = *(undefined4 *)(*(int *)(iVar6 + 0x5a90) + 0x10);
    uStack_ac = param_4 & 0x6f;
    auStack_140 = _sqc2(auVar10);
    uStack_b0 = param_4 & 0x10;
    auStack_130 = _sqc2(auVar11);
    pauVar4 = (undefined1 (*) [16])param_7;
    *(undefined4 *)pauVar4[2] = 0x40000000;
    uStack_118 = (undefined1)param_6;
    uStack_117 = 0;
    fStack_f0 = 2.0;
    uStack_ec = 0;
    *(undefined4 *)(pauVar4[2] + 4) = 0;
    uStack_120 = param_4;
    uStack_11c = param_5;
    if ((param_4 & 1) != 0) {
      iVar3 = iVar6 + 0x4990;
      iVar5 = 1;
      do {
        if (*(char *)(iVar3 + 0x38) != '\0') {
          if (param_6 == 0) {
            lVar2 = FUN_0012b0e0(param_1,iVar3,auStack_140,(int)param_4 >> 8 & 1,uVar1,param_7);
          }
          else {
            lVar2 = FUN_0012b328(param_1,iVar3,auStack_140,(int)param_4 >> 9 & 1,param_7);
          }
          if (lVar2 != 0) {
            uStack_d0 = *(undefined4 *)(iVar3 + 8);
            lVar7 = 1;
          }
        }
        iVar5 = iVar5 + -1;
        iVar3 = iVar3 + 0x880;
      } while (-1 < iVar5);
    }
    if ((uStack_ac != 0) &&
       (FUN_00273708(iVar6 + 0x4920,auStack_140,0x12ab90,auStack_140),
       fStack_f0 < *(float *)pauVar4[2])) {
      lVar7 = 1;
      *(int *)*pauVar4 = (int)uStack_110;
      *(int *)(*pauVar4 + 4) = (int)((ulong)uStack_110 >> 0x20);
      *(undefined4 *)(*pauVar4 + 8) = uStack_108;
      *(undefined4 *)(*pauVar4 + 0xc) = uStack_104;
      *(undefined4 *)pauVar4[1] = uStack_100;
      *(undefined4 *)(pauVar4[1] + 4) = uStack_fc;
      *(undefined4 *)(pauVar4[1] + 8) = uStack_f8;
      *(undefined4 *)(pauVar4[1] + 0xc) = uStack_f4;
      *(float *)pauVar4[2] = fStack_f0;
      *(undefined4 *)(pauVar4[2] + 4) = uStack_ec;
      *(undefined4 *)(pauVar4[2] + 8) = uStack_e8;
      *(undefined4 *)(pauVar4[2] + 0xc) = uStack_e4;
      *(int *)pauVar4[3] = (int)uStack_e0;
      *(int *)(pauVar4[3] + 4) = (int)((ulong)uStack_e0 >> 0x20);
      *(undefined4 *)(pauVar4[3] + 8) = uStack_d8;
      *(undefined4 *)(pauVar4[3] + 0xc) = uStack_d4;
    }
    if (uStack_b0 != 0) {
      auVar8 = _lqc2(auStack_130);
      if (lVar7 != 0) {
        auStack_130 = *pauVar4;
        auVar8 = _lqc2(auStack_130);
      }
      auVar9 = _lqc2(auStack_140);
      auVar8 = _vsub(auVar9,auVar8);
      auVar8 = _vmul(auVar8,auVar8);
      auVar9 = _lqc2(auStack_c0);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar9,auVar8);
      auVar8 = _qmfc2(auVar8._0_4_);
      if (2.3283064e-10 <= auVar8._0_4_) {
        FUN_00273708(iVar6 + 0x4920,auStack_140,0x12ae00,auStack_140);
      }
    }
    if (lVar7 != 0) {
      pauVar4[2][0xd] = *(int *)(pauVar4[2] + 8) < 0;
    }
    *(undefined4 *)pauVar4[3] = uStack_d0;
  }
  return lVar7;
}


// ==== FUN_0012b0e0 @ 0012b0e0 ====

undefined8
FUN_0012b0e0(int param_1,int param_2,undefined1 (*param_3) [16],undefined8 param_4,
            undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iStack_bc;
  int iStack_b8;
  int iStack_b0;
  int aiStack_ac [3];
  
  iVar12 = 0;
  uVar13 = 0;
  do {
    iStack_b0 = param_2 + iVar12 * 0x60 + 0x700;
    if (*(int *)(iStack_b0 + 0x40) != 0) {
      auVar14 = _lqc2(*param_3);
      auVar7 = _qmfc2(auVar14._0_4_);
      auVar2 = _sqc2(auVar14);
      iStack_bc = auVar2._4_4_;
      iVar11 = iStack_bc;
      piVar1 = *(int **)(param_1 + 0x5a90);
      auVar15 = _lqc2(param_3[1]);
      auVar8 = _qmfc2(auVar15._0_4_);
      auVar2 = _sqc2(auVar14);
      iStack_b8 = auVar2._8_4_;
      iVar5 = iStack_b8;
      auVar2 = _sqc2(auVar15);
      iStack_bc = auVar2._4_4_;
      auVar2 = _sqc2(auVar15);
      iStack_b8 = auVar2._8_4_;
      piVar1[2] = 1;
      *piVar1 = (int)&iStack_b0;
      piVar1[1] = (int)aiStack_ac;
      piVar1[3] = 0;
      piVar1[0x34] = 0;
      piVar1[0x37] = 0;
      piVar1[0x14] = 0;
      piVar1[0x3c] = 0;
      piVar1[0x3e] = 0;
      piVar1[5] = 0;
      piVar1[0x3a] = 0;
      piVar1[8] = auVar7._0_4_;
      piVar1[9] = iVar11;
      piVar1[10] = iVar5;
      piVar1[0xb] = 0;
      piVar1[0xc] = auVar8._0_4_;
      piVar1[0xd] = iStack_bc;
      piVar1[0xe] = iStack_b8;
      piVar1[0xf] = 0;
      piVar1[0x3f] = 0x3f800000;
      piVar1[6] = piVar1[7];
      *(undefined1 *)(piVar1 + 0x42) = 0;
      piVar1[0x40] = 0;
      piVar1[0x41] = 0;
      aiStack_ac[0] = iStack_b0;
      lVar6 = FUN_0033aa98(*(undefined4 *)(param_1 + 0x5a90));
      if ((lVar6 != 0) && (iVar11 = (int)lVar6, *(float *)(iVar11 + 0x40) < (float)param_6[8])) {
        uVar3 = *(undefined8 *)(iVar11 + 0x10);
        uVar9 = *(undefined4 *)(iVar11 + 0x18);
        uVar10 = *(undefined4 *)(iVar11 + 0x1c);
        uVar13 = 1;
        *param_6 = (int)uVar3;
        param_6[1] = (int)((ulong)uVar3 >> 0x20);
        param_6[2] = uVar9;
        param_6[3] = uVar10;
        uVar9 = *(undefined4 *)(iVar11 + 0x24);
        uVar10 = *(undefined4 *)(iVar11 + 0x28);
        uVar4 = *(undefined4 *)(iVar11 + 0x2c);
        param_6[4] = *(undefined4 *)(iVar11 + 0x20);
        param_6[5] = uVar9;
        param_6[6] = uVar10;
        param_6[7] = uVar4;
        param_6[8] = *(undefined4 *)(iVar11 + 0x40);
        param_6[10] = *(undefined4 *)(*(int *)(iVar11 + 0x50) + 0x50);
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 4);
  return uVar13;
}


// ==== FUN_0012b328 @ 0012b328 ====

undefined4
FUN_0012b328(undefined8 param_1,int param_2,undefined8 param_3,long param_4,undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_50;
  int iStack_40;
  
  iVar2 = 1;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
  if (param_4 == 0) {
    lVar4 = FUN_0027d1d8(uVar3,param_3,auStack_a0);
    uVar3 = 0;
    if ((lVar4 == 1) && (fStack_50 < (float)param_5[8])) {
      uVar3 = 1;
      *param_5 = auStack_a0._0_4_;
      param_5[1] = auStack_a0._4_4_;
      param_5[2] = uStack_98;
      param_5[3] = uStack_94;
      param_5[8] = fStack_50;
      param_5[4] = (int)uStack_90;
      param_5[5] = (int)((ulong)uStack_90 >> 0x20);
      param_5[6] = uStack_88;
      param_5[7] = uStack_84;
      param_5[10] = *(undefined4 *)(iStack_40 + 4);
    }
  }
  else {
    uStack_bc = 0;
    fStack_c0 = 2.0;
    FUN_0027d7a0(uVar3,param_3,0x12b2a8,auStack_e0);
    uVar3 = 0;
    if ((fStack_c0 != 2.0) && (fStack_c0 < (float)param_5[8])) {
      uVar3 = 1;
      *param_5 = auStack_e0._0_4_;
      param_5[1] = auStack_e0._4_4_;
      param_5[2] = uStack_d8;
      param_5[3] = uStack_d4;
      param_5[0xc] = (int)uStack_b0;
      param_5[0xd] = (int)((ulong)uStack_b0 >> 0x20);
      param_5[0xe] = uStack_a8;
      param_5[0xf] = uStack_a4;
      param_5[4] = (int)uStack_d0;
      param_5[5] = (int)((ulong)uStack_d0 >> 0x20);
      param_5[6] = uStack_c8;
      param_5[7] = uStack_c4;
      param_5[8] = fStack_c0;
      param_5[9] = uStack_bc;
      param_5[10] = uStack_b8;
      param_5[0xb] = uStack_b4;
    }
  }
  return uVar3;
}


// ==== FUN_0012b448 @ 0012b448 ====

undefined4 FUN_0012b448(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar14 = (int)param_3;
    iVar10 = *(int *)(iVar1 + 0xc4);
    uVar2 = *(uint *)(iVar14 + 0x44);
    if (iVar1 != *(int *)(iVar14 + 0x48)) {
      if (((uVar2 & 8) != 0) && (iVar10 == 2)) {
        uStack_70 = *(undefined4 *)(iVar1 + 0xb8);
        iStack_6c = iVar1 + 0x70;
        uVar3 = *(undefined4 *)(iVar14 + 0x40);
        iVar4 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5a94) + 0x30);
        iVar9 = *(int *)(DAT_0040f4d0 + 0x5a94);
        *(int **)(iVar9 + 4) = &iStack_6c;
        *(undefined4 *)(iVar9 + 8) = 1;
        *(undefined4 *)(iVar9 + 0x38) = uVar3;
        *(undefined4 *)(iVar9 + 0x10) = 0;
        *(undefined4 **)iVar9 = &uStack_70;
        *(undefined4 *)(iVar9 + 0xc) = 0;
        *(undefined4 *)(iVar9 + 0x1c) = 0;
        *(int *)(iVar9 + 0x3c) = iVar14;
        *(undefined4 *)(iVar9 + 0x14) = 0;
        iVar9 = FUN_0033b688(*(undefined4 *)(DAT_0040f4d0 + 0x5a94));
        iVar13 = 0;
        if (0 < iVar9) {
          pfVar12 = (float *)(iVar4 + 0x2e0);
          do {
            iVar13 = iVar13 + 1;
            if (*pfVar12 < 0.0) goto LAB_0012b6e8;
            pfVar12 = pfVar12 + 0x108;
          } while (iVar13 < iVar9);
        }
      }
      if (((uVar2 & 4) != 0) && (iVar10 == 1)) {
        uStack_68 = *(undefined4 *)(iVar1 + 0xb8);
        iStack_64 = iVar1 + 0x70;
        iVar10 = *(int *)(iVar14 + 0x40);
        iVar4 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5a94) + 0x30);
        piVar5 = *(int **)(DAT_0040f4d0 + 0x5a94);
        *piVar5 = (int)&uStack_68;
        piVar5[1] = (int)&iStack_64;
        piVar5[2] = 1;
        piVar5[0xe] = iVar10;
        piVar5[4] = 0;
        piVar5[3] = 0;
        piVar5[7] = 0;
        piVar5[0xf] = iVar14;
        piVar5[5] = 0;
        iVar10 = FUN_0033b688(*(undefined4 *)(DAT_0040f4d0 + 0x5a94));
        iVar9 = 0;
        if (0 < iVar10) {
          pfVar12 = (float *)(iVar4 + 0x2e0);
          do {
            iVar9 = iVar9 + 1;
            if (*pfVar12 < 0.0) goto LAB_0012b6e8;
            pfVar12 = pfVar12 + 0x108;
          } while (iVar9 < iVar10);
        }
      }
      if ((uVar2 & 0x22) != 0) {
        iVar10 = *(int *)(iVar1 + 0xc4);
        if ((iVar10 - 3U < 2) || (bVar7 = false, iVar10 == 7)) {
          bVar7 = true;
        }
        bVar7 = bVar7 && (uVar2 & 2) != 0;
        if ((iVar10 - 3U < 2) || (bVar8 = false, iVar10 == 7)) {
          bVar8 = true;
        }
        if ((bVar8) && ((uVar2 & 0x20) != 0)) {
          if (*(int *)(iVar1 + 0xb4) == 0) {
            bVar7 = true;
          }
          else if (*(char *)(iVar1 + 0x13b) == '\0') {
            lVar11 = (**(code **)(*(int *)(iVar1 + 0x10) + 0xcc))
                               (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 200));
            if (lVar11 == 0) {
              if (*(int *)(iVar1 + 0xb4) != 0) {
                uVar6 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xb4) + 0x34) + 0xc) +
                                          0x58) + 0x8c);
                if (((int)uVar6 >> 1 & 1U) == 0) {
                  if ((uVar6 & 1) != 0) {
                    bVar7 = true;
                  }
                }
                else {
                  bVar7 = true;
                }
              }
            }
            else {
              bVar7 = true;
            }
          }
          else {
            bVar7 = true;
          }
        }
        if (bVar7) {
          lVar11 = (**(code **)(*(int *)(iVar1 + 0x10) + 0xb4))
                             (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0xb0),
                              *(undefined4 *)(iVar14 + 0x40),uVar2,param_3);
          if (lVar11 == 0) {
            return 1;
          }
LAB_0012b6e8:
          *(undefined1 *)(iVar14 + 0x4c) = 1;
          return 0;
        }
      }
    }
  }
  return 1;
}


// ==== FUN_0012b720 @ 0012b720 ====

bool FUN_0012b720(int param_1,int param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  int iStack_110;
  uint uStack_10c;
  char cStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  int iStack_e0;
  int iStack_dc;
  uint uStack_d8;
  int iStack_d4;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  undefined4 uStack_ac;
  
  iStack_d4 = *(int *)(*(int *)(param_1 + 0x5a94) + 0x30);
  puVar10 = (undefined8 *)param_3;
  uStack_d8 = param_4;
  if ((param_4 & 1) != 0) {
    lVar5 = 0;
    iVar8 = param_1 + 0x4990;
    do {
      if (*(char *)(iVar8 + 0x38) != '\0') {
        iVar9 = 0;
        uVar11 = uStack_d8 & 0x400;
        uVar6 = 1;
        iVar7 = iVar8 + 0x700;
        do {
          if (((uVar11 == 0) || (1 < iVar9 - 1U)) && (*(int *)(iVar7 + 0x40) != 0)) {
            piVar1 = *(int **)(param_1 + 0x5a94);
            iStack_b0 = (int)uVar6;
            piVar1[2] = iStack_b0;
            piVar1[4] = 0;
            *piVar1 = (int)&iStack_e0;
            piVar1[1] = (int)&iStack_dc;
            piVar1[3] = 0;
            piVar1[7] = 0;
            piVar1[0xe] = param_2;
            piVar1[0xf] = (int)puVar10;
            piVar1[5] = 0;
            uStack_c0 = (undefined4)lVar5;
            uStack_bc = (undefined4)((ulong)lVar5 >> 0x20);
            uStack_ac = (undefined4)((ulong)uVar6 >> 0x20);
            iStack_e0 = iVar7;
            iStack_dc = iVar7;
            iVar2 = FUN_0033b688(*(undefined4 *)(param_1 + 0x5a94));
            iVar4 = 0;
            lVar5 = CONCAT44(uStack_bc,uStack_c0);
            uVar6 = CONCAT44(uStack_ac,iStack_b0);
            if (0 < iVar2) {
              pfVar3 = (float *)(iStack_d4 + 0x2e0);
              do {
                if (*pfVar3 < 0.0) {
                  return true;
                }
                iVar4 = iVar4 + 1;
                pfVar3 = pfVar3 + 0x108;
              } while (iVar4 < iVar2);
            }
          }
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 0x60;
        } while (iVar9 < 4);
      }
      lVar5 = (long)((int)lVar5 + 1);
      iVar8 = iVar8 + 0x880;
    } while (lVar5 < 2);
  }
  _lqc2(auStack_d0);
  auVar12 = _vsubbc(in_vf0,in_vf0);
  auStack_d0 = _sqc2(auVar12);
  (**(code **)(*(int *)(param_2 + 0x58) + 8))
            (param_2 + *(short *)(*(int *)(param_2 + 0x58) + 4),param_3,0,auStack_100);
  auVar13 = _lqc2(auStack_100);
  auVar12 = _lqc2(auStack_f0);
  auVar12 = _vsub(auVar12,auVar13);
  uStack_148 = *(undefined4 *)(puVar10 + 1);
  uStack_144 = *(undefined4 *)((int)puVar10 + 0xc);
  auVar12 = _vmul(auVar12,auVar12);
  uStack_128 = *(undefined4 *)(puVar10 + 5);
  uStack_124 = *(undefined4 *)((int)puVar10 + 0x2c);
  auVar13 = _vaddbc(auVar12,auVar12);
  auVar14 = _lqc2(*(undefined1 (*) [16])(puVar10 + 6));
  auVar12 = _vaddbc(auVar13,auVar12);
  uStack_138 = *(undefined4 *)(puVar10 + 3);
  uStack_134 = *(undefined4 *)((int)puVar10 + 0x1c);
  _vsqrt(auVar12);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar12 = _vmulq(auVar12,uVar15);
  uStack_150 = (undefined4)*puVar10;
  uStack_14c = (undefined4)((ulong)*puVar10 >> 0x20);
  auVar12 = _qmfc2(auVar12._0_4_);
  auVar12 = _qmtc2(auVar12._0_4_);
  auVar13 = _lqc2(auStack_d0);
  _vaddbc(auVar13,auVar12);
  uStack_130 = (undefined4)puVar10[4];
  uStack_12c = (undefined4)((ulong)puVar10[4] >> 0x20);
  auVar12 = _vadd(in_vf0,auVar14);
  uStack_10c = uStack_d8;
  uStack_140 = (undefined4)puVar10[2];
  uStack_13c = (undefined4)((ulong)puVar10[2] >> 0x20);
  auVar12 = _qmfc2(auVar12._0_4_);
  cStack_104 = '\0';
  auStack_120 = _sqc2(auVar14);
  iStack_110 = param_2;
  FUN_00273568(param_1 + 0x4920,auVar12._0_8_,0x12b448,&uStack_150);
  return cStack_104 != '\0';
}


// ==== FUN_0012b950 @ 0012b950 ====

int FUN_0012b950(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
                long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  undefined4 uStack_ac;
  
  lVar9 = (long)*(int *)(*(int *)(param_1 + 0x5a94) + 0x30);
  iVar18 = 0;
  if ((param_4 & 1) != 0) {
    iStack_dc = 0;
    uStack_e8 = param_2;
    uStack_e4 = param_3;
    uStack_e0 = param_4;
    do {
      iVar17 = iStack_dc * 0x880;
      iStack_dc = iStack_dc + 1;
      iVar17 = param_1 + iVar17 + 0x4990;
      if (*(char *)(iVar17 + 0x38) != '\0') {
        iVar16 = 0;
        uVar11 = 0x60;
        uVar19 = uStack_e0 & 0x400;
        uVar10 = 1;
        do {
          if ((uVar19 == 0) || (1 < iVar16 - 1U)) {
            iStack_b0 = (int)uVar11;
            iStack_f0 = iVar17 + iVar16 * iStack_b0 + 0x700;
            if (*(int *)(iStack_f0 + 0x40) != 0) {
              iVar3 = *(int *)(param_1 + 0x5a94);
              uStack_c0 = (undefined4)uVar10;
              *(undefined4 *)(iVar3 + 8) = uStack_c0;
              *(undefined4 *)(iVar3 + 0x10) = 0;
              *(int **)iVar3 = &iStack_f0;
              *(int **)(iVar3 + 4) = &iStack_ec;
              *(undefined4 *)(iVar3 + 0xc) = 0;
              *(undefined4 *)(iVar3 + 0x1c) = 0;
              *(undefined4 *)(iVar3 + 0x38) = uStack_e8;
              *(undefined4 *)(iVar3 + 0x14) = 0;
              *(undefined4 *)(iVar3 + 0x3c) = uStack_e4;
              iStack_d0 = (int)lVar9;
              uStack_cc = (undefined4)((ulong)lVar9 >> 0x20);
              uStack_bc = (undefined4)((ulong)uVar10 >> 0x20);
              uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
              iStack_ec = iStack_f0;
              iVar3 = FUN_0033b688(*(undefined4 *)(param_1 + 0x5a94));
              iVar8 = 0;
              lVar9 = CONCAT44(uStack_cc,iStack_d0);
              uVar10 = CONCAT44(uStack_bc,uStack_c0);
              uVar11 = CONCAT44(uStack_ac,iStack_b0);
              if (0 < iVar3) {
                iVar4 = 0;
                do {
                  puVar6 = (undefined8 *)(iVar4 + iStack_d0);
                  iVar8 = iVar8 + 1;
                  if (((*(float *)(puVar6 + 0x5c) < 0.0) && (*(int *)(puVar6 + 0x82) != 0)) &&
                     ((iVar18 == 0 || (*(float *)(puVar6 + 0x5c) < (float)param_5[0xb8])))) {
                    iVar18 = 1;
                    puVar7 = puVar6 + 0x84;
                    puVar5 = param_5;
                    do {
                      uVar1 = *puVar6;
                      uVar12 = *(undefined4 *)(puVar6 + 1);
                      uVar13 = *(undefined4 *)((int)puVar6 + 0xc);
                      uVar2 = puVar6[2];
                      uVar14 = *(undefined4 *)(puVar6 + 3);
                      uVar15 = *(undefined4 *)((int)puVar6 + 0x1c);
                      *puVar5 = (int)uVar1;
                      puVar5[1] = (int)((ulong)uVar1 >> 0x20);
                      puVar5[2] = uVar12;
                      puVar5[3] = uVar13;
                      puVar5[4] = (int)uVar2;
                      puVar5[5] = (int)((ulong)uVar2 >> 0x20);
                      puVar5[6] = uVar14;
                      puVar5[7] = uVar15;
                      puVar6 = puVar6 + 4;
                      puVar5 = puVar5 + 8;
                    } while (puVar6 != puVar7);
                    if (param_6 != 0) {
                      *(int *)param_6 = iVar16;
                    }
                  }
                  iVar4 = iVar8 * 0x420;
                } while (iVar8 < iVar3);
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 4);
      }
    } while (iStack_dc < 2);
  }
  return iVar18;
}


// ==== FUN_0012bb60 @ 0012bb60 ====

void FUN_0012bb60(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,ulong param_6,code *param_7)

{
  int iVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined1 in_vf0 [16];
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
  undefined1 auStack_1a0 [16];
  float fStack_190;
  float fStack_18c;
  int iStack_188;
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
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  auVar15 = _qmtc2(param_5);
  uStack_c0 = (undefined4)param_4;
  uStack_bc = (undefined4)((ulong)param_4 >> 0x20);
  if (((param_6 & 4) != 0) &&
     (iVar5 = 0, uStack_b8 = in_a1_udw, uStack_b4 = in_register_0000005c,
     0 < *(int *)(DAT_0040f514 + 0x79a4))) {
    do {
      iVar1 = *(int *)(iVar5 * 4 + *(int *)(DAT_0040f514 + 0x79ac));
      iVar5 = iVar5 + 1;
      if (iVar1 != 0) {
        uVar4 = 0;
        auVar16 = _vaddbc(in_vf0,in_vf0);
        iVar2 = *(int *)(*(int *)(iVar1 + 0xbc) + 0x40);
        do {
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
          auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
          auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
          pauVar3 = (undefined1 (*) [16])(*(int *)(iVar2 + 0x30) + (uVar4 & 0xffff) * 0x60);
          auVar8 = _lqc2(*pauVar3);
          auVar7 = _lqc2(pauVar3[1]);
          _vmulabc(auVar11,auVar8);
          _vmaddabc(auVar10,auVar8);
          auVar13 = _vmaddbc(auVar9,auVar8);
          _vmulabc(auVar11,auVar7);
          _vmaddabc(auVar10,auVar7);
          auVar14 = _vmaddbc(auVar9,auVar7);
          auStack_100 = _sqc2(auVar13);
          auStack_f0 = _sqc2(auVar14);
          auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
          auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
          auVar12 = _lqc2(pauVar3[3]);
          auVar11 = _lqc2(pauVar3[2]);
          auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
          auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
          _vmulabc(auVar10,auVar11);
          _vmaddabc(auVar9,auVar11);
          auVar11 = _vmaddbc(auVar8,auVar11);
          _vmulabc(auVar10,auVar12);
          _vmaddabc(auVar9,auVar12);
          _vmaddabc(auVar8,auVar12);
          auVar8 = _vmaddbc(auVar7,in_vf0);
          auStack_180 = _sqc2(auVar13);
          auVar7._4_4_ = uStack_bc;
          auVar7._0_4_ = uStack_c0;
          auVar7._8_4_ = uStack_b8;
          auVar7._12_4_ = uStack_b4;
          auVar7 = _lqc2(auVar7);
          auVar9 = _vsub(auVar8,auVar7);
          auStack_170 = _sqc2(auVar14);
          auVar7 = _vmul(auVar15,auVar9);
          auStack_160 = _sqc2(auVar11);
          _vaddabc(auVar7,auVar7);
          auVar7 = _vmaddbc(auVar16,auVar7);
          auStack_e0 = _sqc2(auVar11);
          auVar7 = _qmfc2(auVar7._0_4_);
          auStack_d0 = _sqc2(auVar8);
          fStack_190 = auVar7._0_4_;
          auStack_140 = _sqc2(auVar13);
          auStack_130 = _sqc2(auVar14);
          auStack_120 = _sqc2(auVar11);
          auStack_110 = _sqc2(auVar8);
          auStack_150 = _sqc2(auVar8);
          if ((0.0 < fStack_190) && (fStack_190 < param_1)) {
            auVar7 = _qmtc2(fStack_190);
            auVar7 = _vmulbc(auVar15,auVar7);
            auVar10 = _vaddbc(in_vf0,in_vf0);
            auVar7 = _vsub(auVar9,auVar7);
            auVar7 = _vmul(auVar7,auVar7);
            _vaddabc(auVar7,auVar7);
            auVar7 = _vmaddbc(auVar10,auVar7);
            auVar7 = _qmfc2(auVar7._0_4_);
            fVar6 = param_2 * (fStack_190 / param_1);
            fStack_18c = auVar7._0_4_;
            if (fStack_18c < fVar6 * fVar6) {
              auStack_b0 = _sqc2(auVar15);
              auStack_a0 = _sqc2(auVar16);
              auStack_1a0 = _sqc2(auVar8);
              iStack_188 = iVar1;
              (*param_7)(auStack_1a0);
              auVar16 = _lqc2(auStack_a0);
              auVar15 = _lqc2(auStack_b0);
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 0xb);
      }
    } while (iVar5 < *(int *)(DAT_0040f514 + 0x79a4));
  }
  return;
}


// ==== FUN_0012bd98 @ 0012bd98 ====

int FUN_0012bd98(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x4990;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 8) == param_2) {
      return param_1;
    }
    param_1 = param_1 + 0x880;
  } while (iVar1 < 2);
  return 0;
}


// ==== FUN_0012bdc8 @ 0012bdc8 ====

undefined1 FUN_0012bdc8(void)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_0012bd98();
  if (lVar2 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined1 *)((int)lVar2 + 0x39);
  }
  return uVar1;
}


// ==== FUN_0012bdf0 @ 0012bdf0 ====

void FUN_0012bdf0(int param_1,int param_2)

{
  if ((*(uint *)(param_1 + 0x5ab0) != (uint)*(byte *)(*(int *)(param_1 + 0x5ab4) + 0x11)) &&
     (*(uint *)(param_1 + 0x5ab0) == param_2 - 1U)) {
    *(undefined4 *)(param_1 + 0x5aa8) = 1;
  }
  return;
}


// ==== FUN_0012be18 @ 0012be18 ====

undefined4 FUN_0012be18(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x5ab0);
  if (iVar1 == param_2) {
    lVar3 = FUN_0012bd98(param_1,iVar1 + 1);
    if (lVar3 == 0) {
      FUN_00103830(DAT_0040f0e0);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (*(char *)((int)lVar3 + 0x38) == '\0') {
        uVar2 = 1;
        *(undefined4 *)((int)param_1 + 0x5aa8) = 2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0012be80 @ 0012be80 ====

void FUN_0012be80(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00179490(DAT_0040f4d4);
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0x5218) == -1) || (*(int *)(iVar3 + 0x4998) < *(int *)(iVar3 + 0x5218))) {
    FUN_0012dab8(iVar3 + 0x4990);
  }
  else {
    FUN_0012dab8();
  }
  iVar2 = 0;
  if (0 < *(int *)(DAT_0040f0e0 + 0x20208)) {
    iVar1 = iVar3 + 0x30;
    do {
      iVar2 = iVar2 + 1;
      FUN_0025c210(DAT_0040f4cc,iVar1);
      FUN_0012a158(param_1,iVar1);
      iVar1 = iVar1 + 0x8c0;
    } while (iVar2 < *(int *)(DAT_0040f0e0 + 0x20208));
  }
  if (*(int *)(iVar3 + 0x4998) == *(int *)(iVar3 + 0x5ab0)) {
    FUN_0012e938(iVar3 + 0x4990);
  }
  else {
    FUN_0012e938(iVar3 + 0x5210);
  }
  FUN_00155dc8(DAT_0040f520);
  FUN_001389a0(DAT_0040f514);
  return;
}


// ==== FUN_0012bfc8 @ 0012bfc8 ====

void FUN_0012bfc8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_001794a0(DAT_0040f4d4);
  iVar3 = (int)param_1;
  FUN_0012dd78(iVar3 + 0x4990);
  FUN_0012dd78(iVar3 + 0x5210);
  if (0 < *(int *)(DAT_0040f0e0 + 0x20208)) {
    iVar1 = iVar3 + 0x30;
    do {
      iVar2 = iVar2 + 1;
      FUN_0025c2c8(DAT_0040f4cc,iVar1);
      FUN_0012a280(param_1,iVar1);
      iVar1 = iVar1 + 0x8c0;
    } while (iVar2 < *(int *)(DAT_0040f0e0 + 0x20208));
  }
  iVar2 = iVar3 + 0x5abc;
  iVar1 = 1;
  FUN_001389a8(DAT_0040f514);
  FUN_00155e48(DAT_0040f520);
  FUN_00126e50(DAT_0040f4e4);
  do {
    iVar1 = iVar1 + -1;
    FUN_0014db90(iVar2);
    iVar2 = iVar2 + 8;
  } while (-1 < iVar1);
  FUN_001531d8(iVar3 + 0x5acc);
  return;
}


// ==== FUN_0012c0e8 @ 0012c0e8 ====

undefined4 FUN_0012c0e8(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0012c118(*(int *)(param_1 + 0x34),param_3);
  }
  return 1;
}


// ==== FUN_0012c118 @ 0012c118 ====

void FUN_0012c118(undefined8 param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
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
  undefined4 uVar16;
  float fStack_14;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0xc4);
  if (1 < iVar1 - 1U) {
    if ((iVar1 - 3U < 2) || (bVar2 = false, iVar1 == 7)) {
      bVar2 = true;
    }
    if (!bVar2) {
      if (iVar1 != 0) {
        return;
      }
      (**(code **)(*(int *)(iVar5 + 0x10) + 0x5c))
                (param_2[0xc],param_2[7],iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x58));
      return;
    }
  }
  if (*param_2 == 0xd) {
    return;
  }
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_2 + 4));
  auVar15 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vsub(auVar15,auVar9);
  auVar8 = _vmul(auVar12,auVar12);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar11,auVar8);
  auVar10 = _vmulbc(auVar9,auVar9);
  auVar9 = _qmfc2(auVar8._0_4_);
  auVar8 = _sqc2(auVar10);
  auVar10 = _vmove(auVar11);
  fStack_14 = auVar8._12_4_;
  if (auVar9._0_4_ < 2.3283064e-10) {
    fVar7 = 0.0;
    auVar8 = _pextlw(0x3f3504e6,0x3f3504e6);
    auVar8 = _pextlw(0,auVar8._0_8_);
    auVar8 = _qmtc2(auVar8._0_4_);
    uVar16 = auVar8._0_4_;
  }
  else {
    auVar8 = _vmul(auVar12,auVar12);
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x60));
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
    auVar9 = _vmove(auVar12);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    auVar10 = _qmtc2(SQRT(auVar8._0_4_));
    uVar16 = _vwaitq();
    auVar8 = _vmulq(auVar9,uVar16);
    uVar16 = auVar8._0_4_;
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x70));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x80));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x90));
    _vmulabc(auVar9,auVar13);
    _vmaddabc(auVar11,auVar13);
    _vmaddabc(auVar8,auVar13);
    auVar8 = _vmaddbc(auVar14,in_vf0);
    _vadd(in_vf0,auVar8);
    auVar8 = _vmove(auVar13);
    auVar8 = _vsubbc(auVar10,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar7 = auVar8._0_4_;
  }
  if ((float)param_2[7] < fVar7) {
    bVar3 = false;
    goto LAB_0012c2d8;
  }
  if ((char)param_2[0xe] != '\0') {
    bVar2 = false;
    if (iVar1 - 3U < 2) {
      bVar2 = (*(byte *)(iVar5 + 0xd0) & 0x40) != 0;
    }
    if (iVar1 == 1) {
      bVar3 = false;
      goto LAB_0012c2d8;
    }
    bVar3 = false;
    if (bVar2) goto LAB_0012c2d8;
  }
  bVar3 = true;
LAB_0012c2d8:
  if (bVar3) {
    fVar4 = (float)param_2[7];
    if ((*(int *)(iVar5 + 0xc4) - 3U < 2) || (bVar2 = false, *(int *)(iVar5 + 0xc4) == 7)) {
      bVar2 = true;
    }
    if ((!bVar2) || (fVar4 = fVar4 * 0.66, fVar7 <= fVar4)) {
      fVar6 = (float)param_2[0xc];
      auVar8 = _qmfc2(auVar15._0_4_);
      auVar9 = _qmfc2(uVar16);
      fVar7 = (fVar6 * (fVar4 - fVar7)) / fVar4;
      fVar7 = (float)((int)fVar7 * (uint)(0.0 < fVar7));
      (**(code **)(*(int *)(iVar5 + 0x10) + 0x5c))
                ((int)fVar7 * (uint)(fVar7 < fVar6) | (int)fVar6 * (uint)(fVar7 >= fVar6),fVar4,
                 iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x58),auVar8._0_8_,auVar9._0_8_,
                 param_2[4],param_2[0xd],*param_2);
    }
  }
  else if (*(int *)(iVar5 + 0xc4) == 1) {
    fStack_14 = fStack_14 / (fVar7 * fVar7);
    fStack_14 = (float)((int)fStack_14 * (uint)(0.0 < fStack_14));
    FUN_00135dd8((int)fStack_14 * (uint)(fStack_14 < 1.0) | (uint)(fStack_14 >= 1.0) * 0x3f800000,
                 param_1,9);
  }
  return;
}


// ==== FUN_0012c428 @ 0012c428 ====

void FUN_0012c428(float param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,long param_7,long param_8,undefined4 param_9,long param_10,
                 undefined1 param_11)

{
  undefined1 in_zero_qw [16];
  undefined8 in_a2_udw;
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_110 [64];
  undefined4 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [16];
  
  uStack_8c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_90 = (undefined4)param_4;
  auVar3 = _qmtc2(uStack_90);
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = param_5;
  auVar1 = _por(in_zero_qw,auVar4);
  _lqc2(auStack_c0);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xd0));
  auVar5 = _vadd(in_vf0,auVar3);
  auVar3 = _vsub(auVar4,auVar3);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  _sqc2(auVar5);
  _vmove(auVar5);
  auVar4 = _qmtc2(uStack_90);
  auVar6 = _qmtc2((uint)(param_1 < 0.1) * 0x3dcccccd | (int)param_1 * (uint)(param_1 >= 0.1));
  auVar4 = _vadd(in_vf0,auVar4);
  auVar4 = _sqc2(auVar4);
  auVar5 = _qmtc2(param_1 + param_1);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar7 = _vsubbc(in_vf0,in_vf0);
  _sqc2(auVar7);
  _lqc2(auVar4);
  auVar6 = _vaddbc(auVar7,auVar6);
  auVar4 = _vsubbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(auVar4,auVar5);
  auStack_c0 = _sqc2(auVar6);
  fVar2 = param_1 * param_1 * 100.0;
  auStack_80 = _sqc2(auVar4);
  uStack_98 = param_11;
  uStack_d0 = (undefined4)param_7;
  uStack_b0 = auVar1._0_4_;
  uStack_ac = auVar1._4_4_;
  uStack_a8 = auVar1._8_4_;
  uStack_a4 = auVar1._12_4_;
  uStack_a0 = param_2;
  uStack_9c = param_9;
  if ((param_7 != 0xd) && (auVar3._0_4_ < fVar2)) {
    fVar2 = (float)FUN_0029e688(1.0 - auVar3._0_4_ / fVar2,0x40a00000);
    FUN_00110698(fVar2,DAT_0040f4bc,1,1);
    if (DAT_003bcb14 < fVar2) {
      FUN_001ed718(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c),2,1);
    }
  }
  if (param_6 != 0) {
    if (param_8 == 0) {
      auVar4 = _por(in_zero_qw,auVar1);
      FUN_001b1728(CONCAT44(uStack_8c,uStack_90),auVar4._0_8_,auStack_110);
      FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_110,(int)param_6,1);
    }
    else {
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,param_6,(int)param_8,1,8);
    }
  }
  if (param_10 != 0) {
    FUN_00273568(param_3 + 0x4920);
  }
  return;
}


// ==== FUN_0012c650 @ 0012c650 ====

void FUN_0012c650(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_6c;
  
  iVar4 = *(int *)(param_1 + 0x5ca4);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0xc4);
    while( true ) {
      if (iVar1 == 1) {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
        auVar8._8_4_ = in_a2_udw;
        auVar8._0_8_ = param_3;
        auVar8._12_4_ = in_register_0000006c;
        auVar8 = _lqc2(auVar8);
        auVar7 = _vsub(auVar7,auVar8);
        auVar8 = _sqc2(auVar7);
        fStack_6c = auVar8._4_4_;
        if (fStack_6c < 0.0) {
          auVar8 = _sqc2(auVar7);
          fStack_6c = auVar8._4_4_;
          bVar2 = -100.0 < fStack_6c;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          auVar8 = _sqc2(auVar7);
          auVar9 = _vmulbc(auVar7,auVar7);
          auVar7 = _vmulbc(auVar7,auVar7);
          fVar6 = 50.0;
          auVar7 = _vaddbc(auVar7,auVar9);
          fStack_6c = auVar8._4_4_;
          auVar8 = _qmfc2(auVar7._0_4_);
          uVar3 = FUN_00291f58(auVar8._0_4_);
          uVar3 = FUN_0029dfc8(uVar3);
          fVar5 = (float)FUN_00291c68(uVar3);
          if (fVar5 <= (fStack_6c / -100.0) * 50.0) {
            fVar5 = (float)FUN_0025d9c0(param_2);
            if (fVar6 <= fVar5) {
              FUN_00135dd8(0x3f800000,iVar4,8,(int)param_3);
            }
            iVar4 = *(int *)(iVar4 + 0xb0);
          }
          else {
            iVar4 = *(int *)(iVar4 + 0xb0);
          }
        }
        else {
          iVar4 = *(int *)(iVar4 + 0xb0);
        }
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xb0);
      }
      if (iVar4 == 0) break;
      iVar1 = *(int *)(iVar4 + 0xc4);
    }
  }
  return;
}


// ==== FUN_0012c790 @ 0012c790 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0012c790(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  char *pcVar11;
  undefined8 in_a2_udw;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [80];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int iStack_110;
  int iStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined1 auStack_d0 [16];
  
  uStack_ec = (undefined4)((ulong)param_2 >> 0x20);
  uStack_f0 = (undefined4)param_2;
  uVar16 = 0;
  iStack_e0 = 0;
  iVar5 = 0;
  fVar19 = DAT_003f4504;
  iStack_100 = param_3;
  uStack_e8 = in_a1_udw;
  uStack_e4 = in_register_0000005c;
  do {
    iStack_e0 = iStack_e0 + 1;
    piVar8 = (int *)(DAT_0040f4d0 + (iVar5 >> 0x18) * 0x880 + 0x4990);
    if (piVar8 == (int *)0x0) {
LAB_0012cb48:
      iVar15 = iStack_e0 >> 0x1f;
    }
    else {
      if (*piVar8 == 0x1c) {
        puVar4 = *(undefined4 **)(piVar8[3] + 0xc);
        if (puVar4 != (undefined4 *)0x0) {
          iVar5 = 1;
          do {
            bVar1 = iVar5 != -1;
            iVar5 = iVar5 + -1;
          } while (bVar1);
          auVar21 = _qmtc2(0x40000000);
          auVar20 = _lqc2(_DAT_004432c0);
          auVar23 = _qmtc2(0x42c80000);
          auVar22 = _vmulbc(auVar20,auVar21);
          auVar21._4_4_ = uStack_ec;
          auVar21._0_4_ = uStack_f0;
          auVar21._8_4_ = uStack_e8;
          auVar21._12_4_ = uStack_e4;
          auVar24 = _lqc2(auVar21);
          auVar21 = _vmulbc(auVar20,auVar23);
          auVar20 = _vadd(auVar24,auVar22);
          auVar21 = _vsub(auVar24,auVar21);
          auStack_190 = _sqc2(auVar20);
          auStack_180 = _sqc2(auVar21);
          auStack_d0 = _sqc2(auVar23);
          lVar6 = FUN_0027d1d8(*puVar4,auStack_190,auStack_170);
          auVar21 = _lqc2(auStack_d0);
          if (lVar6 == 0) {
            auVar22 = _lqc2(_DAT_004432c0);
            auVar23 = _vmulbc(auVar22,auVar21);
            auVar20._4_4_ = uStack_ec;
            auVar20._0_4_ = uStack_f0;
            auVar20._8_4_ = uStack_e8;
            auVar20._12_4_ = uStack_e4;
            auVar20 = _lqc2(auVar20);
            auVar21 = _vsub(auVar20,auVar22);
            auVar20 = _vadd(auVar20,auVar23);
            auStack_180 = _sqc2(auVar21);
            auStack_190 = _sqc2(auVar20);
            lVar6 = FUN_0027d1d8(*puVar4,auStack_190,auStack_170);
            iVar15 = iStack_e0 >> 0x1f;
            if (lVar6 == 0) goto LAB_0012cb4c;
          }
          if (fStack_120 < fVar19) {
            iVar5 = puVar4[1];
            iVar15 = 0;
            fVar18 = 0.0;
            pcVar11 = (char *)((uint)*(ushort *)(iStack_110 + 8) * 0xc + iVar5);
            pcVar7 = (char *)((uint)*(ushort *)(iStack_110 + 6) * 0xc + iVar5);
            pcVar9 = (char *)(iVar5 + (uint)*(ushort *)(iStack_110 + 4) * 0xc);
            iVar5 = iStack_100 + 1;
            fVar19 = fStack_120;
            pcVar14 = pcVar11;
            pcVar13 = pcVar7;
            pcVar12 = pcVar9;
            do {
              cVar2 = *pcVar12;
              fVar17 = ((float)(int)cVar2 + (float)((int)*pcVar13 - (int)cVar2) * fStack_11c +
                       (float)((int)*pcVar14 - (int)cVar2) * fStack_118) * 0.0078125;
              if (fVar17 < fVar18) {
                fVar17 = (float)FUN_0029e688(-fVar17,DAT_003bd1b4);
                fVar17 = -fVar17;
                uVar16 = extraout_v0_udw;
              }
              else {
                fVar17 = (float)FUN_0029e688(fVar17,DAT_003bd1b4);
                uVar16 = extraout_v0_udw_00;
              }
              fVar17 = fVar17 * DAT_003bd1b0;
              if (iVar15 == 0) {
                fVar17 = fVar17 + DAT_003bd1b8;
              }
              puVar10 = (undefined1 *)(iVar5 + iVar15);
              pcVar14 = pcVar14 + 1;
              iVar15 = iVar15 + 1;
              pcVar13 = pcVar13 + 1;
              auVar24._0_8_ = (long)(int)(fVar17 * 128.0);
              auVar24._8_8_ = uVar16;
              pcVar12 = pcVar12 + 1;
              auVar22._8_4_ = in_a1_udw;
              auVar22._0_8_ = 0xffffffffffffff80;
              auVar22._12_4_ = in_register_0000005c;
              auVar21 = _pmaxw(auVar24,auVar22);
              auVar23._8_8_ = in_a2_udw;
              auVar23._0_8_ = 0x7f;
              auVar21 = _pminw(auVar21,auVar23);
              auVar21 = _pextlw(0,auVar21._0_8_);
              *puVar10 = auVar21[0];
            } while (iVar15 < 9);
            bVar3 = pcVar9[9];
            uVar16 = 1;
            *(byte *)(iStack_100 + 10) =
                 (char)(int)((float)(int)((uint)(byte)pcVar11[9] - (uint)bVar3) * fStack_118) +
                 bVar3 + (char)(int)((float)(int)((uint)(byte)pcVar7[9] - (uint)bVar3) * fStack_11c)
            ;
            bVar3 = pcVar9[10];
            *(byte *)(iStack_100 + 0xb) =
                 (char)(int)((float)(int)((uint)(byte)pcVar11[10] - (uint)bVar3) * fStack_118) +
                 bVar3 + (char)(int)((float)(int)((uint)(byte)pcVar7[10] - (uint)bVar3) * fStack_11c
                                    );
            bVar3 = pcVar9[0xb];
            *(byte *)(iStack_100 + 0xc) =
                 (char)(int)((float)(int)((uint)(byte)pcVar11[0xb] - (uint)bVar3) * fStack_118) +
                 bVar3 + (char)(int)((float)(int)((uint)(byte)pcVar7[0xb] - (uint)bVar3) *
                                    fStack_11c);
          }
        }
        goto LAB_0012cb48;
      }
      iVar15 = iStack_e0 >> 0x1f;
    }
LAB_0012cb4c:
    iVar5 = iStack_e0 << 0x18;
    if (1 < CONCAT44(iVar15,iStack_e0)) {
      return uVar16;
    }
  } while( true );
}


// ==== FUN_0012cba0 @ 0012cba0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0012cba0(undefined4 param_1,undefined8 param_2,int param_3,long param_4)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  ulong extraout_v0_udw;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 in_s5_udw;
  undefined4 in_register_0000015c;
  undefined4 in_s6_udw;
  undefined4 in_register_0000016c;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [84];
  float fStack_dc;
  float fStack_d8;
  int iStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar16 = 0;
  uVar17 = 0;
  uStack_b0 = (undefined4)param_2;
  uStack_ac = (undefined4)((ulong)param_2 >> 0x20);
  uStack_b4 = param_1;
  uStack_a8 = in_a1_udw;
  uStack_a4 = in_register_0000005c;
  do {
    if ((((param_4 < 0) ||
         (iVar5 = FUN_0012bd98(uStack_b4,param_4),
         iVar5 == DAT_0040f4d0 + (char)iVar16 * 0x880 + 0x4990)) &&
        (piVar7 = (int *)(DAT_0040f4d0 + (char)iVar16 * 0x880 + 0x4990), piVar7 != (int *)0x0)) &&
       ((*piVar7 == 0x1c &&
        (puVar3 = *(undefined4 **)(piVar7[3] + 0xc), puVar3 != (undefined4 *)0x0)))) {
      iVar5 = 1;
      do {
        bVar1 = iVar5 != -1;
        iVar5 = iVar5 + -1;
      } while (bVar1);
      auVar21 = _qmtc2(0x40000000);
      auVar24 = _qmtc2(0x42c80000);
      auVar23 = _lqc2(_DAT_004432c0);
      auVar22 = _vmulbc(auVar23,auVar21);
      auVar23 = _vmulbc(auVar23,auVar24);
      auVar21._4_4_ = uStack_ac;
      auVar21._0_4_ = uStack_b0;
      auVar21._8_4_ = uStack_a8;
      auVar21._12_4_ = uStack_a4;
      auVar24 = _lqc2(auVar21);
      auVar21 = _vadd(auVar24,auVar22);
      auVar22 = _vsub(auVar24,auVar23);
      auStack_150 = _sqc2(auVar21);
      auStack_140 = _sqc2(auVar22);
      lVar6 = FUN_0027d1d8(*puVar3,auStack_150,auStack_130);
      if (lVar6 != 0) {
        iVar5 = puVar3[1];
        iVar15 = 0;
        pcVar11 = (char *)((uint)*(ushort *)(iStack_d0 + 8) * 0xc + iVar5);
        auVar22._8_8_ = 0;
        auVar22._0_8_ = extraout_v0_udw;
        auVar22 = auVar22 << 0x40;
        pcVar8 = (char *)((uint)*(ushort *)(iStack_d0 + 6) * 0xc + iVar5);
        pcVar9 = (char *)(iVar5 + (uint)*(ushort *)(iStack_d0 + 4) * 0xc);
        pcVar12 = pcVar11;
        pcVar14 = pcVar8;
        pcVar13 = pcVar9;
        do {
          auVar23._8_8_ = auVar22._8_8_;
          bVar1 = iVar15 == 0;
          fStack_c0 = (float)((uint)((float)(int)*pcVar13 * 0.0078125) & 0x80000000 | 0x3f800000);
          fVar20 = (float)((int)((float)((int)((float)(int)*pcVar13 * 0.0078125 * fStack_c0) +
                                        -0x3f800000) * DAT_003bd1a8) + 0x3f800000) * fStack_c0 *
                   DAT_003bd1a4;
          if (bVar1) {
            fVar20 = fVar20 + DAT_003bd1ac;
          }
          fStack_bc = (float)((uint)((float)(int)*pcVar14 * 0.0078125) & 0x80000000 | 0x3f800000);
          fVar19 = (float)((int)((float)((int)((float)(int)*pcVar14 * 0.0078125 * fStack_bc) +
                                        -0x3f800000) * DAT_003bd1a8) + 0x3f800000) * fStack_bc *
                   DAT_003bd1a4;
          if (bVar1) {
            fVar19 = fVar19 + DAT_003bd1ac;
          }
          fStack_b8 = (float)((uint)((float)(int)*pcVar12 * 0.0078125) & 0x80000000 | 0x3f800000);
          fVar18 = (float)((int)((float)((int)((float)(int)*pcVar12 * 0.0078125 * fStack_b8) +
                                        -0x3f800000) * DAT_003bd1a8) + 0x3f800000) * fStack_b8 *
                   DAT_003bd1a4;
          if (bVar1) {
            fVar18 = fVar18 + DAT_003bd1ac;
          }
          puVar10 = (undefined1 *)(param_3 + 1 + iVar15);
          iVar15 = iVar15 + 1;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
          pcVar13 = pcVar13 + 1;
          auVar23._0_8_ =
               (long)(int)((fVar20 + (fVar19 - fVar20) * fStack_dc + (fVar18 - fVar20) * fStack_d8)
                          * 128.0);
          auVar4._8_4_ = in_s6_udw;
          auVar4._0_8_ = 0xffffffffffffff80;
          auVar4._12_4_ = in_register_0000016c;
          auVar21 = _pmaxw(auVar23,auVar4);
          auVar24._8_4_ = in_s5_udw;
          auVar24._0_8_ = 0x7f;
          auVar24._12_4_ = in_register_0000015c;
          auVar21 = _pminw(auVar21,auVar24);
          auVar22 = _pextlw(0,auVar21._0_8_);
          *puVar10 = auVar22[0];
        } while (iVar15 < 9);
        bVar2 = pcVar9[9];
        uVar17 = 1;
        *(byte *)(param_3 + 10) =
             (char)(int)((float)(int)((uint)(byte)pcVar11[9] - (uint)bVar2) * fStack_d8) +
             bVar2 + (char)(int)((float)(int)((uint)(byte)pcVar8[9] - (uint)bVar2) * fStack_dc);
        bVar2 = pcVar9[10];
        *(byte *)(param_3 + 0xb) =
             (char)(int)((float)(int)((uint)(byte)pcVar11[10] - (uint)bVar2) * fStack_d8) +
             bVar2 + (char)(int)((float)(int)((uint)(byte)pcVar8[10] - (uint)bVar2) * fStack_dc);
        bVar2 = pcVar9[0xb];
        *(byte *)(param_3 + 0xc) =
             (char)(int)((float)(int)((uint)(byte)pcVar11[0xb] - (uint)bVar2) * fStack_d8) +
             bVar2 + (char)(int)((float)(int)((uint)(byte)pcVar8[0xb] - (uint)bVar2) * fStack_dc);
      }
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 2);
  return uVar17;
}


// ==== FUN_0012d058 @ 0012d058 ====

float FUN_0012d058(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5ad8) * 0x10000 + (*(int *)(param_1 + 0x5ad8) >> 0x10);
  *(int *)(param_1 + 0x5ad8) = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x5adc);
  *(int *)(param_1 + 0x5ad8) = iVar1;
  *(int *)(param_1 + 0x5adc) = *(int *)(param_1 + 0x5adc) + iVar1;
  return (float)*(uint *)(param_1 + 0x5ad8) * 2.3283064e-10;
}


// ==== FUN_0012d0d0 @ 0012d0d0 ====

float FUN_0012d0d0(float param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x5ad8) * 0x10000 + (*(int *)(param_3 + 0x5ad8) >> 0x10);
  *(int *)(param_3 + 0x5ad8) = iVar1;
  iVar1 = iVar1 + *(int *)(param_3 + 0x5adc);
  *(int *)(param_3 + 0x5ad8) = iVar1;
  *(int *)(param_3 + 0x5adc) = *(int *)(param_3 + 0x5adc) + iVar1;
  return param_1 + (param_2 - param_1) * (float)*(uint *)(param_3 + 0x5ad8) * 2.3283064e-10;
}


// ==== FUN_0012d158 @ 0012d158 ====

int FUN_0012d158(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5ad8) * 0x10000 + (*(int *)(param_1 + 0x5ad8) >> 0x10);
  *(int *)(param_1 + 0x5ad8) = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x5adc);
  *(int *)(param_1 + 0x5ad8) = iVar1;
  *(int *)(param_1 + 0x5adc) = *(int *)(param_1 + 0x5adc) + iVar1;
  return (int)((float)param_2 +
              ((((float)param_3 + 1.0) - 1.5258789e-05) - (float)param_2) *
              (float)*(uint *)(param_1 + 0x5ad8) * 2.3283064e-10);
}


// ==== FUN_0012d218 @ 0012d218 ====

undefined4 FUN_0012d218(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1 == 0.0) {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_0012d058();
    uVar1 = 1;
    if (param_1 < fVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_0012d270 @ 0012d270 ====

void FUN_0012d270(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x30;
  FUN_0011a270(DAT_0040f530);
  FUN_001f2828(param_1,DAT_0040f51c);
  FUN_001f25a8(param_1,DAT_0040f518);
  FUN_0013bac8(param_1,iVar1);
  (**(code **)(*(int *)(param_2 + 0x40) + 0xc))
            (param_1,iVar1 + *(short *)(*(int *)(param_2 + 0x40) + 8));
  (**(code **)(*(int *)(param_2 + 0x40) + 0x2c))
            (param_1,iVar1 + *(short *)(*(int *)(param_2 + 0x40) + 0x28));
  return;
}


// ==== FUN_0012d310 @ 0012d310 ====

void FUN_0012d310(int param_1)

{
  int iVar1;
  
  FUN_0011c0f0(DAT_0040f504);
  iVar1 = *(int *)(DAT_0040f504 + 4);
  if (iVar1 == 1) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))
              (*(undefined4 *)(param_1 + 0x1c),
               param_1 + 0x30 + (int)*(short *)(*(int *)(param_1 + 0x40) + 8));
    iVar1 = *(int *)(DAT_0040f504 + 4);
  }
  if (iVar1 == 3) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))
              (*(undefined4 *)(param_1 + 0x1c),
               param_1 + 0x30 + (int)*(short *)(*(int *)(param_1 + 0x40) + 8));
    FUN_001b1cb8(DAT_0040f4d8);
  }
  if (*(char *)(DAT_0040f504 + 0x15c) != '\0') {
    FUN_00103918(DAT_0040f0e0,0);
  }
  return;
}


// ==== FUN_0012d3d0 @ 0012d3d0 ====

void FUN_0012d3d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_0040f518 + 0xc) + 0x14);
  (**(code **)(iVar1 + 0x14))
            (*(undefined4 *)(param_1 + 0x1c),
             *(int *)(DAT_0040f518 + 0xc) + (int)*(short *)(iVar1 + 0x10));
  iVar1 = *(int *)(*(int *)(DAT_0040f518 + 0x14) + 0x14);
  (**(code **)(iVar1 + 0x14))
            (*(undefined4 *)(param_1 + 0x1c),
             *(int *)(DAT_0040f518 + 0x14) + (int)*(short *)(iVar1 + 0x10));
  FUN_001c22a0(*(undefined4 *)(param_1 + 0x1c),DAT_0040f4d8 + 0x83ca0);
  return;
}


// ==== FUN_0012d458 @ 0012d458 ====

void FUN_0012d458(void)

{
  long lVar1;
  
  lVar1 = FUN_00103860(DAT_0040f0e0);
  if (lVar1 != 0) {
    FUN_00103848(DAT_0040f0e0);
  }
  return;
}


// ==== FUN_0012d490 @ 0012d490 ====

undefined8 FUN_0012d490(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x5af0) + 0x10);
  iVar2 = *(int *)(iVar1 + 8);
  iVar5 = 0;
  if (0 < iVar2) {
    plVar4 = *(long **)(iVar1 + 0xc);
    do {
      if (*plVar4 == param_2) goto LAB_0012d4dc;
      iVar5 = iVar5 + 1;
      plVar4 = plVar4 + 2;
    } while (iVar5 < iVar2);
  }
  iVar5 = -1;
LAB_0012d4dc:
  uVar3 = 0;
  if (iVar5 != -1) {
    uVar3 = FUN_00383738(*(undefined4 *)(*(int *)(param_1 + 0x5af0) + 0x10));
  }
  return uVar3;
}


// ==== FUN_0012d508 @ 0012d508 ====

ushort FUN_0012d508(int param_1)

{
  return (short)*(char *)(param_1 + 0x5aac) | (ushort)*(byte *)(param_1 + 0x5ca0) << 8;
}


// ==== FUN_0012d530 @ 0012d530 ====

void FUN_0012d530(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x5ca4);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc4);
    while( true ) {
      if ((iVar3 - 3U < 2) || (bVar1 = false, iVar3 == 7)) {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)(iVar2 + 0x13e) = 1;
      }
      iVar2 = *(int *)(iVar2 + 0xb0);
      if (iVar2 == 0) break;
      iVar3 = *(int *)(iVar2 + 0xc4);
    }
  }
  return;
}


// ==== FUN_0012d588 @ 0012d588 ====

void FUN_0012d588(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = 1;
  param_1[0x1bd] = 0;
  param_1[2] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}


// ==== FUN_0012d5a8 @ 0012d5a8 ====

/* Strings referenciadas:
     "Levels\Level_%02u\Unit_%02d.bin"
     "Levels\Level_%02u\Stg_%04d\StUnit%02d.bin" */

undefined4 FUN_0012d5a8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_140 [256];
  
  piVar6 = (int *)param_1;
  if (*piVar6 == 0x1c) {
    FUN_0012dd78();
    iVar2 = piVar6[1];
    if (piVar6[2] != iVar2) {
      lVar3 = FUN_0012e978(param_1);
      if (lVar3 == 0) {
        if (*(char *)(DAT_0040f4d0 + 0x5aac) == '\x06') {
          if (piVar6[1] == 7) goto LAB_0012d62c;
          iVar2 = piVar6[2];
        }
        else {
          iVar2 = piVar6[2];
        }
        FUN_0016bee0(DAT_0040f4d0 + 0x3f0,iVar2 + 1);
      }
LAB_0012d62c:
      FUN_0012d9a0(param_1);
      iVar2 = piVar6[1];
    }
  }
  else {
    iVar2 = piVar6[1];
  }
  if (iVar2 < 0) {
    return 1;
  }
  switch(*piVar6) {
  case 1:
  case 0x37:
    if (cGpffff81b9 != '\0') {
      uVar4 = FUN_0012dff0(param_1);
      FUN_001084f8(DAT_0040f4c4,4,uVar4);
    }
    uVar4 = FUN_0012dff0(param_1);
    lVar3 = FUN_00108458(DAT_0040f4c4,4,uVar4);
    if (lVar3 != 0) {
      piVar6[3] = (int)lVar3;
      *piVar6 = 4;
      return 0;
    }
    piVar6[3] = 0;
    *piVar6 = 2;
  case 2:
    uVar4 = FUN_0012e040(param_1);
    FUN_001084f8(DAT_0040f4c4,10,uVar4);
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    *piVar6 = 3;
    sprintf(auStack_140,0x3f4508,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),piVar6[1]);
    iVar2 = piVar6[10];
    pcVar5 = FUN_0012e728;
    break;
  case 3:
    uVar4 = FUN_0012dff0(param_1);
    lVar3 = FUN_00108458(DAT_0040f4c4,4,uVar4);
    if (lVar3 == 0) {
      return 0;
    }
    FUN_0012e988(param_1);
    *piVar6 = 4;
  case 4:
    if (cGpffff81b9 != '\0') {
      uVar4 = FUN_0012e040(param_1);
      FUN_001084f8(DAT_0040f4c4,10,uVar4);
    }
    uVar4 = FUN_0012e040(param_1);
    lVar3 = FUN_00108458(DAT_0040f4c4,10,uVar4);
    if (lVar3 != 0) {
      piVar6[4] = (int)lVar3;
      *piVar6 = 7;
switchD_0012d668_caseD_8:
      return 0;
    }
    piVar6[4] = 0;
    *piVar6 = 5;
  case 5:
    if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
       (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    *piVar6 = 6;
    sprintf(auStack_140,0x3f4528,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),
            *(undefined1 *)(DAT_0040f4d0 + 0x5aad),piVar6[1]);
    iVar2 = piVar6[0xb];
    pcVar5 = FUN_0012e8b8;
    break;
  case 6:
    uVar4 = FUN_0012e040(param_1);
    lVar3 = FUN_00108458(DAT_0040f4c4,10,uVar4);
    if (lVar3 == 0) {
      return 0;
    }
    *piVar6 = 7;
  case 7:
    FUN_001603a0(piVar6 + 0x10,*(undefined4 *)(piVar6[4] + 4),*(undefined1 *)((int)piVar6 + 0x39));
    FUN_001797b8(piVar6[9],*(undefined4 *)(piVar6[3] + 0x30));
    piVar6[2] = piVar6[1];
    FUN_0012d458(DAT_0040f4d0);
    *piVar6 = 0x1c;
  case 0x1c:
    return 1;
  default:
    goto switchD_0012d668_caseD_8;
  }
  FUN_001093c0(DAT_0040f4c4,auStack_140,8,iVar2,pcVar5,param_1,1,0x40000);
  return 0;
}


// ==== FUN_0012d910 @ 0012d910 ====

void FUN_0012d910(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1;
  if ((char)piVar3[0xe] == '\0') {
    iVar2 = piVar3[2];
  }
  else {
    lVar1 = FUN_00103908(DAT_0040f0e0);
    if (lVar1 == 0) {
      lVar1 = FUN_001038a8(DAT_0040f0e0);
      if (lVar1 == 0) {
        FUN_0014ccb0(*(undefined4 *)(DAT_0040f4d0 + 0x1c),piVar3 + 0x8c);
        iVar2 = piVar3[2];
      }
      else {
        iVar2 = piVar3[2];
      }
    }
    else {
      iVar2 = piVar3[2];
    }
  }
  if ((iVar2 != piVar3[1]) || (*piVar3 != 0x1c)) {
    FUN_0012d5a8(param_1);
  }
  return;
}


// ==== FUN_0012d9a0 @ 0012d9a0 ====

undefined4 FUN_0012d9a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  iVar1 = *piVar4;
  if (1 < iVar1) {
    if (iVar1 < 8) {
      lVar2 = FUN_0012d5a8(param_1);
      if (lVar2 == 0) {
        return 0;
      }
    }
    else if (iVar1 != 0x1c) {
      return 1;
    }
    FUN_0012dd78(param_1);
    uVar3 = FUN_0012e018(param_1);
    FUN_001084a8(DAT_0040f4c4,4,uVar3);
    uVar3 = FUN_0012e070(param_1);
    FUN_001084a8(DAT_0040f4c4,10,uVar3);
    FUN_0012f610(DAT_0040f534);
    FUN_0012f1b8(DAT_0040f538);
    piVar4[3] = 0;
    piVar4[4] = 0;
    *piVar4 = 0x37;
    piVar4[2] = -1;
    FUN_0014cc90(piVar4 + 0x8c);
    FUN_001797e0(piVar4[9]);
    iVar1 = DAT_0040f4d8;
    FUN_001b7e60(DAT_0040f4d8 + 0x696f0);
    FUN_001b74f0(iVar1 + 0x66290);
  }
  return 1;
}


// ==== FUN_0012dab8 @ 0012dab8 ====

void FUN_0012dab8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = (int *)param_1;
  if (*piVar4 == 0x1c) {
    iVar7 = 0;
    FUN_00139190(DAT_0040f514,*(undefined4 *)(piVar4[4] + 8),0);
    if (*(short *)(piVar4[3] + 0x90) != 0) {
      iVar5 = 0;
      do {
        iVar7 = iVar7 + 1;
        FUN_001277a0(piVar4[5] + iVar5);
        FUN_0012a158(DAT_0040f4d0,piVar4[5] + iVar5);
        iVar5 = iVar5 + 0xf0;
      } while (iVar7 < (int)(uint)*(ushort *)(piVar4[3] + 0x90));
    }
    iVar7 = 0;
    FUN_0025c040(DAT_0040f4cc,param_1);
    if (piVar4[0xc] < 1) {
      iVar7 = piVar4[0xd];
    }
    else {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(iVar5 + piVar4[6] + 0x10);
        (**(code **)(iVar2 + 0x9c))(iVar5 + piVar4[6] + (int)*(short *)(iVar2 + 0x98));
        iVar2 = iVar5 + piVar4[6];
        uVar3 = 0;
        if (*(char *)(iVar2 + 0x13a) == '\0') {
          lVar1 = (**(code **)(*(int *)(iVar2 + 0x10) + 0xcc))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 200),iVar2,0);
          uVar3 = 0;
          if (lVar1 == 0) {
            uVar3 = 1;
          }
        }
        iVar7 = iVar7 + 1;
        FUN_00129108(DAT_0040f4d0,piVar4[6] + iVar5,uVar3,0,0xffffffffffffffff);
        iVar5 = iVar5 + 0x1d0;
      } while (iVar7 < piVar4[0xc]);
      iVar7 = piVar4[0xd];
    }
    iVar5 = 0;
    if (0 < iVar7) {
      iVar7 = piVar4[7];
      while( true ) {
        iVar6 = iVar5 * 0x200;
        iVar2 = *(int *)(iVar6 + iVar7 + 0x10);
        (**(code **)(iVar2 + 0x9c))(iVar6 + iVar7 + (int)*(short *)(iVar2 + 0x98));
        iVar7 = iVar6 + piVar4[7];
        uVar3 = 0;
        if (*(char *)(iVar7 + 0x13a) == '\0') {
          lVar1 = (**(code **)(*(int *)(iVar7 + 0x10) + 0xcc))
                            (iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 200),iVar7,0);
          uVar3 = 0;
          if (lVar1 == 0) {
            uVar3 = 1;
          }
        }
        iVar5 = iVar5 + 1;
        FUN_00129108(DAT_0040f4d0,piVar4[7] + iVar6,uVar3,0,0xffffffffffffffff);
        if (piVar4[0xd] <= iVar5) break;
        iVar7 = piVar4[7];
      }
    }
    FUN_0015ef48(piVar4 + 0x10,*(undefined4 *)(piVar4[4] + 4),piVar4[1],
                 *(undefined1 *)((int)piVar4 + 0x39));
    if ((*(int *)(DAT_0040f0e0 + 0x21074) == DAT_0040f0e0 + 0x20fd8) ||
       (*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20fd8)) {
      FUN_00153448(DAT_0040f0e0 + 0x20fe4,piVar4[0x10],piVar4[0x11]);
      iVar7 = piVar4[3];
    }
    else {
      iVar7 = piVar4[3];
    }
    if (*(int *)(iVar7 + 0x34) != 0) {
      FUN_001b2440(DAT_0040f4d8 + 0x83710,DAT_0040f4d8,*(int *)(iVar7 + 0x34),
                   *(undefined1 *)(iVar7 + 0x94));
    }
    FUN_0014cc20(piVar4 + 0x8c);
    *(undefined1 *)(piVar4[9] + 0x36) = 1;
    *(undefined1 *)(piVar4 + 0xe) = 1;
    FUN_00179400(DAT_0040f4d4,param_1);
  }
  return;
}


// ==== FUN_0012dd78 @ 0012dd78 ====

void FUN_0012dd78(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)param_1;
  if (*(char *)(puVar7 + 0xe) != '\0') {
    uVar1 = *puVar7;
    *puVar7 = 0x1d;
    iVar5 = 0;
    FUN_0016e3c0(DAT_0040f4d4,*(undefined1 *)((int)puVar7 + 0x39));
    *puVar7 = uVar1;
    if (*(short *)(puVar7[3] + 0x90) != 0) {
      iVar4 = 0;
      iVar6 = puVar7[5];
      while( true ) {
        iVar5 = iVar5 + 1;
        FUN_0012a280(DAT_0040f4d0,iVar6 + iVar4);
        iVar3 = iVar4 + puVar7[5];
        iVar6 = *(int *)(iVar3 + 0x10);
        iVar4 = iVar4 + 0xf0;
        (**(code **)(iVar6 + 0x24))(iVar3 + *(short *)(iVar6 + 0x20));
        if ((int)(uint)*(ushort *)(puVar7[3] + 0x90) <= iVar5) break;
        iVar6 = puVar7[5];
      }
    }
    if ((*(int *)(DAT_0040f0e0 + 0x21074) == DAT_0040f0e0 + 0x20fd8) ||
       (*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20fd8)) {
      FUN_001534a8(DAT_0040f0e0 + 0x20fe4,puVar7[0x10]);
    }
    iVar5 = 0;
    FUN_0015fdc0(puVar7 + 0x10);
    if ((int)puVar7[0xc] < 1) {
      iVar5 = puVar7[0xd];
    }
    else {
      iVar6 = 0;
      do {
        iVar5 = iVar5 + 1;
        FUN_00129240(DAT_0040f4d0,puVar7[6] + iVar6,1);
        iVar6 = iVar6 + 0x1d0;
      } while (iVar5 < (int)puVar7[0xc]);
      iVar5 = puVar7[0xd];
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar5 = puVar7[7];
      while( true ) {
        iVar4 = iVar6 * 0x200;
        iVar6 = iVar6 + 1;
        FUN_00129240(DAT_0040f4d0,iVar5 + iVar4,1);
        if ((int)puVar7[0xd] <= iVar6) break;
        iVar5 = puVar7[7];
      }
    }
    iVar5 = 0x5abc;
    iVar6 = 1;
    do {
      iVar6 = iVar6 + -1;
      FUN_0014e018(DAT_0040f4d0 + iVar5,puVar7[10],1);
      iVar5 = iVar5 + 8;
    } while (-1 < iVar6);
    FUN_00153258(DAT_0040f4d0 + 0x5acc,puVar7[10]);
    FUN_0025c180(DAT_0040f4cc,param_1);
    if (*(int *)(puVar7[3] + 0x34) != 0) {
      FUN_001b2988(DAT_0040f4d8 + 0x83710);
    }
    iVar5 = DAT_0040f4d8 + 0x54ab0;
    bVar2 = FUN_0012e978(param_1);
    FUN_001b8640(iVar5,bVar2 ^ 1);
    FUN_001dc610(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20));
    FUN_001ecad8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24));
    FUN_00138af8(DAT_0040f514,puVar7[2]);
    *(undefined1 *)(puVar7 + 0xe) = 0;
  }
  return;
}


// ==== FUN_0012dff0 @ 0012dff0 ====

ushort FUN_0012dff0(int param_1)

{
  return (short)*(char *)(DAT_0040f4d0 + 0x5aac) | *(short *)(param_1 + 4) << 8;
}


// ==== FUN_0012e018 @ 0012e018 ====

ushort FUN_0012e018(int param_1)

{
  return (short)*(char *)(DAT_0040f4d0 + 0x5aac) | *(short *)(param_1 + 8) << 8;
}


// ==== FUN_0012e040 @ 0012e040 ====

ushort FUN_0012e040(int param_1)

{
  return (short)*(char *)(DAT_0040f4d0 + 0x5aac) | *(short *)(param_1 + 4) << 7 |
         (short)*(char *)(DAT_0040f4d0 + 0x5aad) << 0xb;
}


// ==== FUN_0012e070 @ 0012e070 ====

ushort FUN_0012e070(int param_1)

{
  return (short)*(char *)(DAT_0040f4d0 + 0x5aac) | *(short *)(param_1 + 8) << 7 |
         (short)*(char *)(DAT_0040f4d0 + 0x5aad) << 0xb;
}


// ==== FUN_0012e0a0 @ 0012e0a0 ====

void FUN_0012e0a0(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x700);
  iVar3 = 3;
  do {
    FUN_003342d0(pauVar2,5);
    iVar3 = iVar3 + -1;
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar7 = _vsub(in_vf0,in_vf0);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar1 = _sqc2(auVar4);
    *pauVar2 = auVar1;
    auVar1 = _sqc2(auVar5);
    pauVar2[1] = auVar1;
    auVar1 = _sqc2(auVar6);
    pauVar2[2] = auVar1;
    auVar1 = _sqc2(auVar7);
    pauVar2[3] = auVar1;
    _sqc2(auVar4);
    pauVar2 = pauVar2 + 6;
    _sqc2(auVar5);
    _sqc2(auVar6);
    _sqc2(auVar7);
  } while (-1 < iVar3);
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(iVar3 + 0x18);
  return;
}


// ==== FUN_0012e160 @ 0012e160 ====

void FUN_0012e160(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_90 [16];
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (*(short *)(iVar2 + 0x92) != 0) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar2 + 0x2c) + iVar5;
      iVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(iVar3 + 0x40));
      FUN_00272488(*(undefined8 *)(iVar3 + 0x40),auStack_90);
      bVar1 = false;
      if ((*(char *)(iVar2 + 0x69) == '\x01') &&
         (bVar1 = true, 1 < *(byte *)(*(int *)(iVar2 + 0x48) + 0xce))) {
        bVar1 = false;
      }
      if (bVar1) {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      }
      iVar2 = *(int *)(param_1 + 0xc);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (iVar4 < (int)(uint)*(ushort *)(iVar2 + 0x92));
  }
  return;
}


// ==== FUN_0012e260 @ 0012e260 ====

void FUN_0012e260(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  iVar3 = 0;
  cVar4 = '\0';
  cVar5 = '\0';
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar2 = iVar3 * 0x200;
      iVar3 = iVar3 + 1;
      lVar1 = FUN_0012f660(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x118));
      cVar4 = cVar5;
      if (lVar1 != 0) {
        cVar4 = cVar5 + '\x01';
      }
      cVar5 = cVar4;
    } while (iVar3 < *(int *)(param_1 + 0x34));
  }
  iVar3 = 0;
  FUN_0012f4f0(DAT_0040f534,cVar4);
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    while( true ) {
      iVar2 = iVar2 + iVar3 * 0x200;
      lVar1 = FUN_0012f660(*(undefined4 *)(iVar2 + 0x118));
      if (lVar1 != 0) {
        FUN_0012f6a8(DAT_0040f534,iVar2);
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 0x34) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0x1c);
    }
  }
  return;
}


// ==== FUN_0012e330 @ 0012e330 ====

void FUN_0012e330(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (0 < iVar3) {
    iVar2 = FUN_00107d20(iVar3 * 0x1d0);
    iVar5 = iVar3 + -1;
    iVar7 = iVar2;
    if (iVar3 != 0) {
      do {
        *(undefined **)(iVar7 + 0x10) = &DAT_003dc750;
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + 0x1d0;
      } while (iVar5 != -1);
    }
    *(int *)(param_1 + 0x18) = iVar2;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (0 < iVar3) {
    iVar2 = FUN_00107d20(iVar3 << 9);
    iVar5 = iVar3 + -1;
    iVar7 = iVar2;
    if (iVar3 != 0) {
      do {
        *(undefined **)(iVar7 + 0x10) = &DAT_003dc838;
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + 0x200;
      } while (iVar5 != -1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  iVar2 = 0;
  iVar7 = 0;
  uVar4 = FUN_0025ccd8(DAT_0040f4cc,*(undefined1 *)(param_1 + 0x39));
  FUN_00263388(uVar4);
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(short *)(iVar3 + 0x92) != 0) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      iVar6 = *(int *)(iVar3 + 0x2c) + iVar8;
      iVar3 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(iVar6 + 0x40));
      bVar1 = false;
      if ((*(char *)(iVar3 + 0x69) == '\x01') &&
         (bVar1 = true, 1 < *(byte *)(*(int *)(iVar3 + 0x48) + 0xce))) {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_0014fda8(*(int *)(param_1 + 0x18) + iVar5,iVar6);
        iVar5 = iVar5 + 0x1d0;
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = iVar2 * 0x200;
        iVar2 = iVar2 + 1;
        FUN_001444a8(*(int *)(param_1 + 0x1c) + iVar3,iVar6,uVar4);
        iVar3 = *(int *)(param_1 + 0xc);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x50;
    } while (iVar7 < (int)(uint)*(ushort *)(iVar3 + 0x92));
  }
  return;
}


// ==== FUN_0012e518 @ 0012e518 ====

void FUN_0012e518(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = 0;
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  iVar10 = 0;
  if (*(short *)(iVar2 + 0x92) != 0) {
    iVar11 = 0;
    iVar9 = 0;
    do {
      uVar5 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(*(int *)(iVar2 + 0x2c) + iVar11 + 0x40));
      lVar6 = FUN_001afba8(uVar5);
      bVar1 = false;
      if ((*(char *)((int)uVar5 + 0x69) == '\x01') &&
         (bVar1 = true, 1 < *(byte *)(*(int *)((int)uVar5 + 0x48) + 0xce))) {
        bVar1 = false;
      }
      if (bVar1) {
        iVar2 = *(int *)(param_1 + 0x18) + iVar9;
        iVar9 = iVar9 + 0x1d0;
      }
      else {
        iVar2 = iVar10 * 0x200;
        iVar10 = iVar10 + 1;
        iVar2 = *(int *)(param_1 + 0x1c) + iVar2;
      }
      if (lVar6 == 0) {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        *(undefined1 *)(iVar2 + 0x13d) = 1;
        *(char *)(param_1 + 0x6f0) = *(char *)(param_1 + 0x6f0) + '\x01';
        iVar2 = *(int *)(param_1 + 0xc);
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0x50;
    } while (iVar8 < (int)(uint)*(ushort *)(iVar2 + 0x92));
  }
  iVar2 = 0;
  FUN_0014cae8(param_1 + 0x230,*(undefined1 *)(param_1 + 0x6f0));
  if (*(byte *)(param_1 + 0x6f0) != 0) {
    iVar8 = 0;
    puVar3 = (undefined4 *)FUN_00107d20((uint)*(byte *)(param_1 + 0x6f0) << 2);
    iVar10 = 0;
    puVar7 = puVar3;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        iVar9 = *(int *)(param_1 + 0x18) + iVar10;
        if (*(char *)(iVar9 + 0x13d) != '\0') {
          iVar2 = iVar2 + 1;
          uVar4 = FUN_00108218(DAT_0040f4c4,*(undefined8 *)(*(int *)(iVar9 + 0x114) + 0x40));
          *puVar7 = uVar4;
          puVar7 = puVar7 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 0x1d0;
      } while (iVar8 < *(int *)(param_1 + 0x30));
    }
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      puVar7 = puVar3 + iVar2;
      iVar2 = *(int *)(param_1 + 0x1c);
      while( true ) {
        iVar2 = iVar2 + iVar8 * 0x200;
        if (*(char *)(iVar2 + 0x13d) != '\0') {
          uVar4 = FUN_00108218(DAT_0040f4c4,*(undefined8 *)(*(int *)(iVar2 + 0x114) + 0x40));
          *puVar7 = uVar4;
          puVar7 = puVar7 + 1;
        }
        iVar8 = iVar8 + 1;
        if (*(int *)(param_1 + 0x34) <= iVar8) break;
        iVar2 = *(int *)(param_1 + 0x1c);
      }
    }
    *(undefined4 **)(param_1 + 0x6f4) = puVar3;
  }
  return;
}


// ==== FUN_0012e728 @ 0012e728 ====

void FUN_0012e728(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = FUN_001092f8();
  iVar7 = (int)param_2;
  *(int *)(iVar7 + 0xc) = (int)uVar4;
  FUN_0012eae8(uVar4);
  bVar2 = FUN_0012e978(param_2);
  uVar1 = *(ushort *)(*(int *)(iVar7 + 0xc) + 0x90);
  iVar3 = FUN_00107d20((uint)uVar1 * 0xf0);
  iVar5 = uVar1 - 1;
  iVar6 = iVar3;
  if (uVar1 != 0) {
    do {
      *(undefined **)(iVar6 + 0x10) = &DAT_003dc920;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 0xf0;
    } while (iVar5 != -1);
  }
  *(int *)(iVar7 + 0x14) = iVar3;
  iVar3 = 0;
  iVar6 = *(int *)(iVar7 + 0xc);
  if (*(short *)(iVar6 + 0x90) != 0) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar6 = *(int *)(iVar6 + 0x1c) + iVar8;
      iVar8 = iVar8 + 0x30;
      FUN_00127738(*(int *)(iVar7 + 0x14) + iVar5,iVar6,bVar2 ^ 1);
      iVar6 = *(int *)(iVar7 + 0xc);
      iVar5 = iVar5 + 0xf0;
    } while (iVar3 < (int)(uint)*(ushort *)(iVar6 + 0x90));
  }
  FUN_0012e0a0(param_2);
  FUN_0012e160(param_2);
  FUN_0012e330(param_2);
  FUN_0012e260(param_2);
  FUN_0012e518(param_2);
  FUN_001c2ab0(iVar7 + 0x270,*(undefined4 *)(*(int *)(iVar7 + 0xc) + 0x40));
  FUN_001c2bc0(iVar7 + 0x270);
  iVar6 = DAT_0040f4d4 + *(char *)(iVar7 + 0x39) * 0x38;
  *(int *)(iVar7 + 0x24) = iVar6;
  FUN_00179708(iVar6,*(undefined4 *)(*(int *)(iVar7 + 0xc) + 0x30));
  uVar4 = FUN_0012dff0(param_2);
  FUN_00108540(DAT_0040f4c4,4,*(undefined4 *)(iVar7 + 0xc),uVar4);
  return;
}


// ==== FUN_0012e8b8 @ 0012e8b8 ====

void FUN_0012e8b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_001092f8();
  iVar2 = (int)param_2;
  *(int *)(iVar2 + 0x10) = (int)uVar1;
  FUN_002886d0(uVar1);
  FUN_0015d958(iVar2 + 0x40,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4),
               *(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x30),
               *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x34),
               *(undefined4 *)(iVar2 + 4));
  uVar1 = FUN_0012e040(param_2);
  FUN_00108540(DAT_0040f4c4,10,*(undefined4 *)(iVar2 + 0x10),uVar1);
  return;
}


// ==== FUN_0012e938 @ 0012e938 ====

void FUN_0012e938(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  FUN_00168618(DAT_0040f4f4,*(undefined4 *)(iVar1 + 0x20),*(undefined1 *)(iVar1 + 0x24),
               DAT_0040f4d0 + 0x30);
  return;
}


// ==== FUN_0012e978 @ 0012e978 ====

bool FUN_0012e978(int param_1)

{
  return *(char *)(param_1 + 0x39) != '\0';
}


// ==== FUN_0012e988 @ 0012e988 ====

void FUN_0012e988(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(char *)(param_1 + 0x6f0) != '\0') {
    iVar3 = param_1 + 0x230;
    iVar6 = 0;
    FUN_0014cd70();
    if (*(int *)(param_1 + 0x30) < 1) {
      iVar6 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar4 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x18) + iVar4;
        iVar1 = iVar7 * 4;
        if (*(char *)(iVar5 + 0x13d) != '\0') {
          iVar7 = iVar7 + 1;
          iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x6f4));
          uVar2 = FUN_0014cd38(iVar3);
          FUN_0014c6b0(uVar2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
          FUN_001528e8(iVar5,uVar2);
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x1d0;
      } while (iVar6 < *(int *)(param_1 + 0x30));
      iVar6 = *(int *)(param_1 + 0x34);
    }
    iVar4 = 0;
    if (0 < iVar6) {
      iVar6 = *(int *)(param_1 + 0x1c);
      while( true ) {
        iVar6 = iVar6 + iVar4 * 0x200;
        iVar1 = iVar7 * 4;
        if (*(char *)(iVar6 + 0x13d) != '\0') {
          iVar7 = iVar7 + 1;
          iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x6f4));
          uVar2 = FUN_0014cd38(iVar3);
          FUN_0014c6b0(uVar2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
          FUN_00149c18(iVar6,uVar2);
        }
        iVar4 = iVar4 + 1;
        if (*(int *)(param_1 + 0x34) <= iVar4) break;
        iVar6 = *(int *)(param_1 + 0x1c);
      }
    }
    FUN_0014cd90(iVar3);
  }
  return;
}


// ==== FUN_0012eae8 @ 0012eae8 ====

void FUN_0012eae8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  }
  uStack_78 = 0;
  FUN_00335f20(*(undefined4 *)(param_1 + 4),auStack_80);
  iVar1 = *(int *)(param_1 + 0x10) + param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_78 = 0;
    *(int *)(param_1 + 0x10) = iVar1;
    FUN_00335f20(iVar1,auStack_80);
  }
  iVar1 = *(int *)(param_1 + 0x14) + param_1;
  if (*(int *)(param_1 + 0x14) != 0) {
    uStack_78 = 0;
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_00335f20(iVar1,auStack_80);
  }
  iVar1 = *(int *)(param_1 + 0x18) + param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    uStack_78 = 0;
    *(int *)(param_1 + 0x18) = iVar1;
    FUN_00335f20(iVar1,auStack_80);
  }
  iVar1 = *(int *)(param_1 + 8) + param_1;
  *(int *)(param_1 + 8) = iVar1;
  FUN_0027e760(iVar1);
  piVar5 = (int *)(*(int *)(param_1 + 0xc) + param_1);
  *(int **)(param_1 + 0xc) = piVar5;
  if (*piVar5 != 0) {
    *piVar5 = *piVar5 + (int)piVar5;
  }
  if (piVar5[1] != 0) {
    piVar5[1] = piVar5[1] + (int)piVar5;
  }
  iVar8 = 0;
  FUN_0027e760(*piVar5);
  iVar1 = *(int *)(param_1 + 0x24) + param_1;
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_00272aa8(iVar1);
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      uVar4 = FUN_003822e0(iVar1,iVar8);
      iVar8 = iVar8 + 1;
      FUN_0028eed8(uVar4);
    } while (iVar8 < *(int *)(iVar1 + 8));
  }
  FUN_00108540(DAT_0040f4c4,0,*(undefined4 *)(param_1 + 0x24),0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
    uVar7 = 0;
    if (*(short *)(param_1 + 0x90) != 0) {
      iVar1 = 0;
      do {
        uVar7 = uVar7 + 1;
        FUN_00383978(*(int *)(param_1 + 0x1c) + iVar1);
        iVar1 = iVar1 + 0x30;
      } while (uVar7 < *(ushort *)(param_1 + 0x90));
    }
  }
  iVar1 = 0;
  iVar8 = *(int *)(param_1 + 0x20) + param_1;
  *(int *)(param_1 + 0x20) = iVar8;
  FUN_00272aa8(iVar8);
  if (0 < *(int *)(iVar8 + 8)) {
    do {
      uVar4 = FUN_003822f8(iVar8,iVar1);
      iVar1 = iVar1 + 1;
      FUN_001af930(uVar4);
    } while (iVar1 < *(int *)(iVar8 + 8));
  }
  iVar8 = 0;
  FUN_00108540(DAT_0040f4c4,1,*(undefined4 *)(param_1 + 0x20),0);
  iVar1 = *(int *)(param_1 + 0x28) + param_1;
  *(int *)(param_1 + 0x28) = iVar1;
  FUN_00272aa8(iVar1);
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      iVar2 = FUN_00382310(iVar1,iVar8);
      iVar8 = iVar8 + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + iVar2;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + iVar2;
    } while (iVar8 < *(int *)(iVar1 + 8));
  }
  FUN_00108540(DAT_0040f4c4,2,*(undefined4 *)(param_1 + 0x28),0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1;
    if (*(ushort *)(param_1 + 0x92) != 0) {
      for (uVar7 = 1; uVar7 < *(ushort *)(param_1 + 0x92); uVar7 = uVar7 + 1) {
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x30) + param_1;
  *(int *)(param_1 + 0x30) = iVar1;
  FUN_00288bc8(iVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_1;
    if (*(byte *)(param_1 + 0x94) != 0) {
      for (uVar7 = 1; uVar7 < *(byte *)(param_1 + 0x94); uVar7 = uVar7 + 1) {
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x38) + param_1;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = iVar1;
    FUN_0012eeb8(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x3c) + param_1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = iVar1;
    FUN_0012eec8(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x40) + param_1;
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = iVar1;
    if (*(int *)(iVar1 + 8) != 0) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + iVar1;
    }
    iVar8 = 0;
    if (0 < *(int *)(iVar1 + 4)) {
      iVar2 = *(int *)(iVar1 + 8);
      while( true ) {
        iVar6 = iVar8 * 0x20;
        iVar8 = iVar8 + 1;
        FUN_00383878(iVar2 + iVar6);
        if (*(int *)(iVar1 + 4) <= iVar8) break;
        iVar2 = *(int *)(iVar1 + 8);
      }
    }
    if (*(int *)(iVar1 + 0x50) != 0) {
      *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + iVar1;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + iVar1;
    }
    if (*(int *)(iVar1 + 0x14) != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + iVar1;
    }
    FUN_001c64e8(iVar1 + 0x20);
    uVar3 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)(iVar1 + 0x50));
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4) = uVar3;
  }
  return;
}


// ==== FUN_0012eeb8 @ 0012eeb8 ====

void FUN_0012eeb8(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  return;
}


// ==== FUN_0012eec8 @ 0012eec8 ====

void FUN_0012eec8(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  return;
}


// ==== FUN_0012eee8 @ 0012eee8 ====

void FUN_0012eee8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x1000000;
  puVar2 = param_1;
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 8) = 0;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  return;
}


// ==== FUN_0012ef28 @ 0012ef28 ====

undefined4 FUN_0012ef28(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x1000000;
  puVar2 = param_1;
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 8) = 0;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  return 1;
}


// ==== FUN_0012ef68 @ 0012ef68 ====

void FUN_0012ef68(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar4 = 0;
  uVar7 = *(undefined4 *)(DAT_0040f4d0 + 0x1c);
  pcVar2 = (char *)(param_1 + 8);
  while( true ) {
    if ('\0' < *pcVar2) {
      iVar6 = 0x1000000;
      iVar5 = 0;
      do {
        iVar3 = iVar5 + *(int *)(param_1 + iVar4 * 4);
        iVar1 = *(int *)(iVar3 + 0x10);
        iVar5 = iVar5 + 0x60;
        (**(code **)(iVar1 + 0xc))(uVar7,iVar3 + *(short *)(iVar1 + 8));
        iVar1 = iVar6 >> 0x18;
        iVar6 = iVar6 + 0x1000000;
      } while ((long)iVar1 < (long)*pcVar2);
    }
    iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18;
    if (1 < iVar4) break;
    pcVar2 = (char *)(param_1 + 8) + iVar4;
  }
  return;
}


// ==== FUN_0012f058 @ 0012f058 ====

undefined4 FUN_0012f058(void)

{
  return 1;
}


// ==== FUN_0012f060 @ 0012f060 ====

void FUN_0012f060(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_2;
  uVar3 = *(byte *)(param_1 + 0xc) + 1;
  iVar4 = (int)(uVar3 * 0x1000000) >> 0x18;
  iVar4 = iVar4 + ((int)(iVar4 + ((uVar3 & 0xff) >> 7)) >> 1) * -2;
  *(char *)(param_1 + 0xc) = (char)iVar4;
  if (iVar6 == 0) {
    *(undefined1 *)(param_1 + (iVar4 * 0x1000000 >> 0x18) + 10) = 0;
  }
  else {
    *(undefined1 *)(param_1 + (iVar4 * 0x1000000 >> 0x18) + 10) = 1;
    *(char *)(param_1 + *(char *)(param_1 + 0xc) + 8) = param_2;
    cVar1 = *(char *)(param_1 + 0xc);
    iVar2 = FUN_00107d20(iVar6 * 0x60);
    iVar5 = iVar6 + -1;
    iVar4 = iVar2;
    if (iVar6 != 0) {
      do {
        *(undefined **)(iVar4 + 0x10) = &DAT_003dc238;
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + 0x60;
      } while (iVar5 != -1);
    }
    *(int *)(param_1 + cVar1 * 4) = iVar2;
    if (0 < iVar6) {
      iVar2 = 0x1000000;
      iVar4 = 0;
      do {
        FUN_0012fcc0(*(int *)(param_1 + *(char *)(param_1 + 0xc) * 4) + iVar4);
        FUN_0012fd08(*(int *)(param_1 + *(char *)(param_1 + 0xc) * 4) + iVar4);
        iVar4 = iVar4 + 0x60;
        iVar5 = iVar2 >> 0x18;
        iVar2 = iVar2 + 0x1000000;
      } while (iVar5 < iVar6);
    }
  }
  return;
}


// ==== FUN_0012f1b8 @ 0012f1b8 ====

void FUN_0012f1b8(int param_1)

{
  int iVar1;
  
  iVar1 = ((*(char *)(param_1 + 0xc) + 1) % 2) * 0x1000000 >> 0x18;
  if (*(char *)(param_1 + iVar1 + 10) != '\0') {
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    *(undefined1 *)(param_1 + iVar1 + 8) = 0;
  }
  return;
}


// ==== FUN_0012f208 @ 0012f208 ====

void FUN_0012f208(int param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  int iVar3;
  undefined1 in_a2_qw [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  auVar7 = _por(in_zero_qw,in_a2_qw);
  bVar1 = *(byte *)(param_1 + 0xc);
  if ('\0' < *(char *)(param_1 + 8 + (int)*(char *)(param_1 + 0xc))) {
    iVar6 = 0x1000000;
    iVar5 = 0;
    do {
      auVar4 = _por(in_zero_qw,auVar7);
      lVar2 = FUN_00130640(*(int *)(param_1 + ((int)((uint)bVar1 << 0x18) >> 0x16)) + iVar5,param_2,
                           auVar4._0_8_);
      if (lVar2 != 0) {
        return;
      }
      iVar3 = iVar6 >> 0x18;
      iVar6 = iVar6 + 0x1000000;
      iVar5 = iVar5 + 0x60;
      bVar1 = *(byte *)(param_1 + 0xc);
    } while ((long)iVar3 < (long)*(char *)(param_1 + 8 + (int)*(char *)(param_1 + 0xc)));
  }
  return;
}


// ==== FUN_0012f2d8 @ 0012f2d8 ====

undefined4 FUN_0012f2d8(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = 0x1000000;
  piVar3 = param_1;
  do {
    pcVar2 = (char *)((int)param_1 + iVar4 + 8);
    if ('\0' < *pcVar2) {
      iVar5 = 0x1000000;
      iVar4 = 0;
      do {
        if (*(long *)(iVar4 + *piVar3) == param_2) {
          FUN_00165c40(param_3);
          return 1;
        }
        iVar1 = iVar5 >> 0x18;
        iVar5 = iVar5 + 0x1000000;
        iVar4 = iVar4 + 0x60;
      } while ((long)iVar1 < (long)*pcVar2);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar6 >> 0x18;
    iVar6 = iVar6 + 0x1000000;
  } while (iVar4 < 2);
  return 0;
}


// ==== FUN_0012f388 @ 0012f388 ====

void FUN_0012f388(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x1000000;
  puVar2 = param_1;
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 8) = 0;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  return;
}


// ==== FUN_0012f3c8 @ 0012f3c8 ====

undefined4 FUN_0012f3c8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x1000000;
  puVar2 = param_1;
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 8) = 0;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  return 1;
}


// ==== FUN_0012f408 @ 0012f408 ====

void FUN_0012f408(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = 0;
  uVar6 = *(undefined4 *)(DAT_0040f4d0 + 0x1c);
  pcVar2 = (char *)(param_1 + 8);
  while( true ) {
    if ('\0' < *pcVar2) {
      iVar5 = 0x1000000;
      iVar4 = 0;
      do {
        FUN_00130690(uVar6,*(int *)(param_1 + iVar3 * 4) + iVar4);
        iVar4 = iVar4 + 0x14;
        iVar1 = iVar5 >> 0x18;
        iVar5 = iVar5 + 0x1000000;
      } while ((long)iVar1 < (long)*pcVar2);
    }
    iVar3 = (iVar3 + 1) * 0x1000000 >> 0x18;
    if (1 < iVar3) break;
    pcVar2 = (char *)(param_1 + 8) + iVar3;
  }
  return;
}


// ==== FUN_0012f4e8 @ 0012f4e8 ====

undefined4 FUN_0012f4e8(void)

{
  return 1;
}


// ==== FUN_0012f4f0 @ 0012f4f0 ====

void FUN_0012f4f0(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_2;
  uVar4 = *(byte *)(param_1 + 0xc) + 1;
  iVar5 = (int)(uVar4 * 0x1000000) >> 0x18;
  iVar5 = iVar5 + ((int)(iVar5 + ((uVar4 & 0xff) >> 7)) >> 1) * -2;
  *(char *)(param_1 + 0xc) = (char)iVar5;
  if (iVar7 == 0) {
    *(undefined1 *)(param_1 + (iVar5 * 0x1000000 >> 0x18) + 10) = 0;
  }
  else {
    *(undefined1 *)(param_1 + (iVar5 * 0x1000000 >> 0x18) + 10) = 1;
    *(char *)(param_1 + *(char *)(param_1 + 0xc) + 8) = param_2;
    cVar1 = *(char *)(param_1 + 0xc);
    uVar2 = FUN_00107d20(iVar7 * 0x14);
    *(undefined4 *)(param_1 + cVar1 * 4) = uVar2;
    if (0 < iVar7) {
      iVar6 = 0x1000000;
      iVar5 = 0;
      do {
        FUN_00130660(*(int *)(param_1 + *(char *)(param_1 + 0xc) * 4) + iVar5);
        FUN_00130678(*(int *)(param_1 + *(char *)(param_1 + 0xc) * 4) + iVar5);
        iVar5 = iVar5 + 0x14;
        iVar3 = iVar6 >> 0x18;
        iVar6 = iVar6 + 0x1000000;
      } while (iVar3 < iVar7);
    }
  }
  return;
}


// ==== FUN_0012f610 @ 0012f610 ====

void FUN_0012f610(int param_1)

{
  int iVar1;
  
  iVar1 = ((*(char *)(param_1 + 0xc) + 1) % 2) * 0x1000000 >> 0x18;
  if (*(char *)(param_1 + iVar1 + 10) != '\0') {
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    *(undefined1 *)(param_1 + iVar1 + 8) = 0;
  }
  return;
}


// ==== FUN_0012f660 @ 0012f660 ====

undefined4 FUN_0012f660(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x1000000;
  if (0 < (long)*(char *)(param_1 + 0x69)) {
    piVar3 = (int *)(*(int *)(param_1 + 0x48) + 200);
    do {
      if (*piVar3 != 0) {
        return 1;
      }
      piVar3 = piVar3 + 0x34;
      iVar1 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
    } while ((long)iVar1 < (long)*(char *)(param_1 + 0x69));
  }
  return 0;
}


// ==== FUN_0012f6a8 @ 0012f6a8 ====

void FUN_0012f6a8(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if ('\0' < *(char *)(param_1 + 8 + (int)*(char *)(param_1 + 0xc))) {
    iVar5 = 0x1000000;
    iVar4 = 0;
    do {
      piVar2 = (int *)(iVar4 + *(int *)(param_1 + ((int)((uint)bVar1 << 0x18) >> 0x16)));
      if (*piVar2 == 0) {
        *piVar2 = param_2;
        return;
      }
      iVar3 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
      iVar4 = iVar4 + 0x14;
      bVar1 = *(byte *)(param_1 + 0xc);
    } while ((long)iVar3 < (long)*(char *)(param_1 + 8 + (int)*(char *)(param_1 + 0xc)));
  }
  return;
}


// ==== FUN_0012f740 @ 0012f740 ====

void FUN_0012f740(undefined8 param_1,int param_2,int param_3)

{
  FUN_0012f8c0(param_1,param_2,*(undefined2 *)(param_3 * 0x14 + param_2 * 0x50 + 0x3bcb30));
  return;
}


// ==== FUN_0012f780 @ 0012f780 ====

void FUN_0012f780(undefined8 param_1,int param_2,int param_3)

{
  FUN_0012f8c0(param_1,param_2,*(undefined2 *)(param_3 * 0x14 + param_2 * 0x50 + 0x3bcb32));
  return;
}


// ==== FUN_0012f7c0 @ 0012f7c0 ====

void FUN_0012f7c0(undefined8 param_1,int param_2,int param_3)

{
  FUN_0012f8c0(param_1,param_2,*(undefined2 *)(param_3 * 0x14 + param_2 * 0x50 + 0x3bcb36));
  return;
}


// ==== FUN_0012f800 @ 0012f800 ====

void FUN_0012f800(undefined8 param_1,int param_2,int param_3)

{
  FUN_0012f8c0(param_1,param_2,*(undefined2 *)(param_3 * 0x14 + param_2 * 0x50 + 0x3bcb34));
  return;
}


// ==== FUN_0012f840 @ 0012f840 ====

void FUN_0012f840(undefined8 param_1,int param_2,int param_3)

{
  FUN_0012f8c0(param_1,param_2,*(undefined2 *)(param_3 * 0x14 + param_2 * 0x50 + 0x3bcb38));
  return;
}


// ==== FUN_0012f880 @ 0012f880 ====

void FUN_0012f880(undefined8 param_1,int param_2,int param_3)

{
  FUN_0012f8c0(param_1,param_2,*(undefined2 *)(param_3 * 0x14 + param_2 * 0x50 + 0x3bcb2c));
  return;
}


// ==== FUN_0012f8c0 @ 0012f8c0 ====

undefined4 FUN_0012f8c0(undefined8 param_1,ulong param_2,short param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if ((param_2 < 9) && (iVar1 != 0)) {
    if (iVar1 == -1) {
      *param_4 = 0;
      return 0;
    }
    *param_4 = iVar1;
    return 2;
  }
  *param_4 = 0;
  return 1;
}


// ==== FUN_0012f908 @ 0012f908 ====

/* Strings referenciadas:
     "Secondary"
     "Destruction"
     "Blackmail"
     "Intel"
     "Recon"
     "Armament"
     "Bodycount" */

void FUN_0012f908(undefined8 param_1,ulong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  if (param_2 < 9) {
    iVar6 = (int)param_2 * 0x50;
    iVar10 = 0;
    uStack_a8 = iVar6 + 0x3bcb2c;
    uStack_b8 = iVar6 + 0x3bcb2e;
    iVar9 = iVar6 + 0x3bcb32;
    iVar11 = iVar6 + 0x3bcb30;
    uStack_b4 = iVar6 + 0x3bcb36;
    uStack_b0 = iVar6 + 0x3bcb38;
    uStack_ac = iVar6 + 0x3bcb34;
    do {
      uVar1 = *(undefined2 *)(DAT_0040f4d0 + 0x908);
      uVar2 = *(undefined2 *)(DAT_0040f4d0 + 0x8f8);
      uVar3 = *(undefined2 *)(DAT_0040f4d0 + 0x8fc);
      uVar4 = *(undefined2 *)(DAT_0040f4d0 + 0x900);
      uVar5 = *(undefined2 *)(DAT_0040f4d0 + 0x904);
      uVar7 = FUN_00122a00(DAT_0040f4e8,(char)param_2);
      uVar8 = FUN_00160aa8(DAT_0040f4d0 + 0x8f0,(char)iVar10);
      FUN_0012fc10(param_1,0x3f4680,uStack_a8,uVar8,iVar10);
      uStack_a8 = uStack_a8 + 0x14;
      FUN_0012fc10(param_1,0x3f4690,iVar11,uVar2,iVar10);
      FUN_0012fc10(param_1,0x3f46a0,iVar9,uVar3,iVar10);
      iVar9 = iVar9 + 0x14;
      FUN_0012fc10(param_1,0x3f46b0,uStack_ac,uVar4,iVar10);
      FUN_0012fc10(param_1,0x3f46b8,uStack_b0,uVar5,iVar10);
      FUN_0012fc10(param_1,0x3f46c0,uStack_b4,uVar1,iVar10);
      FUN_0012fc10(param_1,0x3f46d0,uStack_b8,uVar7,iVar10);
      iVar10 = iVar10 + 1;
      uStack_b8 = uStack_b8 + 0x14;
      iVar11 = iVar11 + 0x14;
      uStack_b4 = uStack_b4 + 0x14;
      uStack_b0 = uStack_b0 + 0x14;
      uStack_ac = uStack_ac + 0x14;
    } while (iVar10 < 4);
  }
  return;
}


// ==== FUN_0012fb48 @ 0012fb48 ====

int FUN_0012fb48(undefined8 param_1,ulong param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 9) {
    if (2 < param_3) {
      if (param_3 != 3) {
        return 0;
      }
      iVar1 = (int)param_2 * 0x50;
      return (int)*(short *)(&DAT_003bcb6a + iVar1) + (int)*(short *)(&DAT_003bcb6e + iVar1) +
             (int)*(short *)(&DAT_003bcb70 + iVar1) + (int)*(short *)(&DAT_003bcb74 + iVar1) +
             (int)*(short *)(&DAT_003bcb72 + iVar1) + (int)*(short *)(&DAT_003bcb6c + iVar1);
    }
    if (0 < param_3) {
      iVar1 = (int)param_2 * 0x50;
      return (int)*(short *)(&DAT_003bcb6a + iVar1) + (int)*(short *)(&DAT_003bcb6e + iVar1) +
             (int)*(short *)(&DAT_003bcb70 + iVar1) + (int)*(short *)(&DAT_003bcb74 + iVar1) +
             (int)*(short *)(&DAT_003bcb72 + iVar1);
    }
    if (param_3 != 0) {
      return 0;
    }
  }
  return 0;
}


// ==== FUN_0012fc10 @ 0012fc10 ====

/* Strings referenciadas:
     "Message to level designer:  %s objective target is unreachable. Target is %d but there are
   only %d  %s objectives at difficulty level %s" */

void FUN_0012fc10(undefined8 param_1,undefined8 param_2,short *param_3,short param_4,int param_5)

{
  if ((long)(int)param_4 < (long)*param_3) {
    FUN_0016d798(0x3f46e0,param_2,(long)*param_3,(long)(int)param_4,param_2,
                 (&PTR_DAT_003bcb18)[param_5]);
    *param_3 = param_4;
  }
  return;
}


// ==== FUN_0012fc78 @ 0012fc78 ====

undefined1 FUN_0012fc78(undefined8 param_1,ulong param_2,int param_3)

{
  param_3 = param_3 / 2;
  if (((param_2 < 9) && (param_3 < 8)) && (-1 < param_3)) {
    return (&DAT_003bcdf8)[param_3 + (int)param_2 * 8];
  }
  return 0;
}


// ==== FUN_0012fcc0 @ 0012fcc0 ====

void FUN_0012fcc0(int param_1)

{
  FUN_00165ae0();
  FUN_00382348(0x414d58,0x2b9d6f8);
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


// ==== FUN_0012fd08 @ 0012fd08 ====

undefined4 FUN_0012fd08(int param_1)

{
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return 1;
}


// ==== FUN_0012fd20 @ 0012fd20 ====

void FUN_0012fd20(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 in_zero_qw [16];
  undefined8 in_v0_udw;
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  
  iVar4 = (int)param_2;
  if ((*(char *)(iVar4 + 0x59) != '\0') &&
     (param_1 = *(float *)(iVar4 + 0x50) - param_1, *(float *)(iVar4 + 0x50) = param_1,
     param_1 < 0.0)) {
    uVar1 = FUN_0012fe58();
    auVar3._8_8_ = in_v0_udw;
    auVar3._0_8_ = uVar1;
    auVar3 = _por(in_zero_qw,auVar3);
    FUN_00130390(param_2,auVar3._0_8_);
    if (CONCAT44(*(char *)(iVar4 + 0x58) >> 7,(int)*(char *)(iVar4 + 0x58)) < 2) {
      fVar5 = 2.0;
      *(char *)(iVar4 + 0x58) = *(char *)(iVar4 + 0x58) + '\x01';
    }
    else {
      DAT_00414d58 = DAT_00414d58 * 0x10000 + ((int)DAT_00414d58 >> 0x10) + DAT_00414d5c;
      DAT_00414d5c = DAT_00414d5c + DAT_00414d58;
      uVar2 = (ulong)DAT_00414d58;
      *(undefined1 *)(iVar4 + 0x58) = 0;
      fVar5 = (float)uVar2 * 2.3283064e-10 * 5.0 + 10.0;
    }
    *(float *)(iVar4 + 0x50) = fVar5;
  }
  return;
}


// ==== FUN_0012fe30 @ 0012fe30 ====

undefined4 FUN_0012fe30(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_0012fe58 @ 0012fe58 ====

undefined8 FUN_0012fe58(int param_1)

{
  undefined1 auVar1 [12];
  uint uVar2;
  undefined4 uVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    auVar1 = *(undefined1 (*) [12])(DAT_0040f4d0 + 0xd0);
    uVar3 = *(undefined4 *)(DAT_0040f4d0 + 0xdc);
    *(int *)(param_1 + 0x30) = auVar1._0_4_;
    *(int *)(param_1 + 0x34) = auVar1._4_4_;
    *(int *)(param_1 + 0x38) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    DAT_00414d58 = DAT_00414d58 * 0x10000 + ((int)DAT_00414d58 >> 0x10) + DAT_00414d5c;
    DAT_00414d5c = DAT_00414d5c + DAT_00414d58;
    if ((float)DAT_00414d58 * 2.3283064e-10 < 0.5) {
      uVar2 = DAT_00414d58 * 0x10000 + ((int)DAT_00414d58 >> 0x10) + DAT_00414d5c;
      DAT_00414d58 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_00414d5c + uVar2;
      DAT_00414d5c = DAT_00414d5c + uVar2 + DAT_00414d58;
      auVar4 = _pextlw((long)(int)((float)DAT_00414d58 * 2.3283064e-10 - 0.5),
                       (long)(int)((float)uVar2 * 2.3283064e-10 - 0.5));
      auVar4 = _pextlw(0,auVar4._0_8_);
      *(int *)(param_1 + 0x40) = auVar4._0_4_;
      *(int *)(param_1 + 0x44) = auVar4._4_4_;
      *(int *)(param_1 + 0x48) = auVar4._8_4_;
      *(int *)(param_1 + 0x4c) = auVar4._12_4_;
    }
    else {
      auVar1 = *(undefined1 (*) [12])(DAT_0040f4d0 + 0x120);
      uVar3 = *(undefined4 *)(DAT_0040f4d0 + 300);
      *(int *)(param_1 + 0x40) = auVar1._0_4_;
      *(int *)(param_1 + 0x44) = auVar1._4_4_;
      *(int *)(param_1 + 0x48) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
    }
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
    auVar4 = _vsub(auVar4,auVar5);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
    auVar4 = _vmul(auVar4,auVar4);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar5 = _vmul(auVar6,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar4);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    uVar3 = _vwaitq();
    auVar4 = _vmulq(auVar4,uVar3);
    _vaddabc(auVar5,auVar5);
    auVar7 = _vmaddbc(auVar7,auVar5);
    auVar5 = _qmfc2(auVar4._0_4_);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    uVar3 = _vwaitq();
    auVar4 = _vmulq(auVar6,uVar3);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(param_1 + 0x40) = auVar4;
    *(float *)(param_1 + 0x54) = auVar5._0_4_ * 0.2;
  }
  auVar4 = _qmtc2(*(undefined4 *)(param_1 + 0x54));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
  auVar5 = _vmulbc(auVar5,auVar4);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
  auVar4 = _qmtc2((float)(2 - *(char *)(param_1 + 0x58)));
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _vadd(auVar7,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  return auVar4._0_8_;
}


// ==== FUN_001300f0 @ 001300f0 ====

/* Strings referenciadas:
     "WARNING! NO MORTAR FIRE SOUND BUT MORTAR FIRING!" */

void FUN_001300f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 in_a1_udw;
  undefined1 auVar3 [16];
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  auVar2 = _pextlw(0,0);
  auVar3 = _pextlw(0,auVar2._0_8_);
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = param_2;
  auVar2 = _por(in_zero_qw,auVar2);
  uStack_6c = 0;
  uStack_60 = auVar3._0_4_;
  uStack_5c = auVar3._4_4_;
  uStack_58 = auVar3._8_4_;
  uStack_54 = auVar3._12_4_;
  uStack_48 = *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x230);
  lVar1 = FUN_00280200(DAT_0040f510,&uStack_48,0);
  if (lVar1 == 0) {
    FUN_0016d760(0x3f4770);
  }
  else {
    uStack_c0 = (undefined4)lVar1;
    uStack_e0 = auVar2._0_4_;
    uStack_dc = auVar2._4_4_;
    uStack_d8 = auVar2._8_4_;
    uStack_d4 = auVar2._12_4_;
    uStack_d0 = auVar3._0_4_;
    uStack_cc = auVar3._4_4_;
    uStack_c8 = auVar3._8_4_;
    uStack_c4 = auVar3._12_4_;
    uStack_bc = 0x3f800000;
    uStack_68 = 0;
    uStack_6c = 0xb0f;
    puStack_50 = &DAT_003e26b0;
    uStack_9c = DAT_003bce40;
    uStack_a0 = DAT_003bce44;
    FUN_00285748(&uStack_60,DAT_0040f510 + 0xb308,auStack_110);
  }
  return;
}


// ==== FUN_00130218 @ 00130218 ====

/* Strings referenciadas:
     "WARNING! NO MORTAR IN SOUND BUT MORTAR FIRING!" */

void FUN_00130218(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 in_a1_udw;
  undefined1 auVar4 [16];
  undefined1 auStack_130 [48];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  auVar3 = _pextlw(0,0);
  auVar4 = _pextlw(0,auVar3._0_8_);
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = param_3;
  auVar3 = _por(in_zero_qw,auVar3);
  uStack_8c = 0;
  uStack_80 = auVar4._0_4_;
  uStack_7c = auVar4._4_4_;
  uStack_78 = auVar4._8_4_;
  uStack_74 = auVar4._12_4_;
  iVar1 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x330);
  if (iVar1 != 0) {
    iVar1 = FUN_0012d158(DAT_0040f4d0,0,iVar1 + -1);
    uStack_68 = *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + iVar1 * 8 + 0x168);
    lVar2 = FUN_00280200(DAT_0040f510,&uStack_68,0);
    if (lVar2 == 0) {
      FUN_0016d760(0x3f47a8);
    }
    else {
      uStack_e0 = (undefined4)lVar2;
      uStack_100 = auVar3._0_4_;
      uStack_fc = auVar3._4_4_;
      uStack_f8 = auVar3._8_4_;
      uStack_f4 = auVar3._12_4_;
      uStack_f0 = auVar4._0_4_;
      uStack_ec = auVar4._4_4_;
      uStack_e8 = auVar4._8_4_;
      uStack_e4 = auVar4._12_4_;
      uStack_dc = 0x3f800000;
      uStack_88 = 0;
      fStack_c8 = param_1 - 1.75;
      uStack_8c = 0xb8f;
      puStack_70 = &DAT_003e26b0;
      uStack_bc = DAT_003bce40;
      uStack_c0 = DAT_003bce44;
      FUN_00285748(&uStack_80,DAT_0040f510 + 0xb308,auStack_130);
    }
  }
  return;
}


// ==== FUN_00130390 @ 00130390 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00130390(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  uStack_80 = (undefined4)param_2;
  auVar6 = _qmtc2(uStack_80);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  uStack_7c = (undefined4)((ulong)param_2 >> 0x20);
  iVar1 = (int)param_1;
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar4 = _vsub(auVar6,auVar4);
  auStack_70 = _sqc2(auVar4);
  auVar6 = _vmove(auVar5);
  auVar4 = _lqc2(auStack_70);
  auVar4 = _vmul(auVar4,auVar4);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  if (2.3283064e-10 <= auVar4._0_4_) {
    _lqc2(auStack_70);
    auVar4 = _qmtc2(0);
    auVar8 = _vaddbc(in_vf0,auVar4);
    auVar4 = _vmul(auVar8,auVar8);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar5 = _lqc2(_DAT_00414760);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar4);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar4 = _vmulq(auVar4,uVar12);
    auVar6 = _qmtc2(0x3f800000);
    auVar4 = _qmfc2(auVar4._0_4_);
    auVar4 = _qmtc2(auVar4._0_4_);
    auVar4 = _vmulbc(auVar5,auVar4);
    auVar4 = _vmulbc(auVar4,auVar6);
    auStack_90 = _sqc2(auVar4);
    auStack_60 = _sqc2(auVar8);
    fVar3 = SQRT(ABS((float)auStack_90._4_4_));
    uVar12 = FUN_0029e688(fVar3,0x40000000);
    auVar9 = _lqc2(_DAT_00414760);
    auVar4 = _qmtc2(0x40000000);
    auVar5 = _lqc2(auStack_70);
    auVar4 = _vmulbc(auVar9,auVar4);
    auVar8 = _qmtc2(uVar12);
    auVar4 = _vmulbc(auVar4,auVar5);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
    auVar4 = _vaddbc(auVar4,auVar8);
    auVar4 = _sqc2(auVar4);
    auVar11 = _qmtc2(fVar3);
    auVar8 = _qmtc2(0x3e800000);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auStack_90._4_4_ = auVar4._4_4_;
    auVar4 = _vaddbc(auVar6,auVar8);
    fVar2 = ABS((float)auStack_90._4_4_);
    auStack_90 = _sqc2(auVar9);
    auVar8 = _lqc2(auStack_60);
    auStack_d0 = _sqc2(auVar5);
    _sqc2(auVar6);
    auVar4 = _vaddbc(in_vf0,auVar4);
    auStack_c0 = _sqc2(auVar7);
    auStack_b0 = _sqc2(auVar10);
    fVar2 = -(fVar3 + SQRT(fVar2)) / (float)auStack_90._4_4_;
    auStack_a0 = _sqc2(auVar4);
    auVar4 = _qmtc2(1.0 / fVar2);
    _vmulbc(auVar8,auVar4);
    auVar4 = _vaddbc(in_vf0,auVar11);
    auVar4 = _qmfc2(auVar4._0_4_);
    FUN_00155830(DAT_0040f520,auStack_d0,auVar4._0_8_,0);
    FUN_001300f0(param_1,*(undefined8 *)(iVar1 + 0x20));
    FUN_00130218(fVar2,param_1,CONCAT44(uStack_7c,uStack_80));
  }
  return;
}


// ==== FUN_00130640 @ 00130640 ====

undefined4 FUN_00130640(long *param_1,long param_2,undefined8 param_3)

{
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  
  if (*param_1 == 0) {
    *(int *)(param_1 + 4) = (int)param_3;
    *(int *)((int)param_1 + 0x24) = (int)((ulong)param_3 >> 0x20);
    *(undefined4 *)(param_1 + 5) = in_a2_udw;
    *(undefined4 *)((int)param_1 + 0x2c) = in_register_0000006c;
    *param_1 = param_2;
    return 1;
  }
  return 0;
}


// ==== FUN_00130660 @ 00130660 ====

void FUN_00130660(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


// ==== FUN_00130678 @ 00130678 ====

undefined4 FUN_00130678(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 1;
}


// ==== FUN_00130690 @ 00130690 ====

void FUN_00130690(void)

{
  return;
}


// ==== FUN_001306a0 @ 001306a0 ====

void FUN_001306a0(undefined8 param_1)

{
  FUN_0013ec10(param_1,0);
  *(undefined1 *)((int)param_1 + 0x102) = 0;
  return;
}


// ==== FUN_001306d0 @ 001306d0 ====

undefined4 FUN_001306d0(int param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x102) == '\0') {
    FUN_0013ec38();
    uVar1 = *(undefined4 *)(DAT_0040f0e0 + 0x21060 + param_3 * 0xc);
    *(undefined1 *)(param_1 + 0x102) = 1;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
    *(char *)(param_1 + 0x100) = param_3;
  }
  return 1;
}


// ==== FUN_00130750 @ 00130750 ====

void FUN_00130750(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_6c;
  
  fVar7 = *(float *)(DAT_0040f4d0 + 0x1c);
  auVar15 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  fVar5 = (float)(&DAT_003f508c)[*(char *)(param_1 + 0xb4) * 6];
  *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) - fVar7;
  fVar5 = *(float *)(param_1 + 0xb8) + fVar5 * fVar7;
  fVar7 = fVar5 * fVar7;
  *(float *)(param_1 + 0xb8) = fVar5;
  auVar14 = _qmtc2(fVar7);
  auVar14 = _vsubbc(auVar15,auVar14);
  auVar14 = _vaddbc(in_vf0,auVar14);
  auVar14 = _sqc2(auVar14);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar14;
  *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) - fVar7;
  switch(*(undefined4 *)(param_1 + 0xb4)) {
  case 0:
    iVar2 = (int)*(char *)(param_1 + 0xb4);
    iVar4 = iVar2 * 0x18;
    fVar5 = *(float *)(param_1 + 0xd8) - (float)(&DAT_003f5094)[iVar2 * 6];
    fVar5 = (*(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xdc)) /
            (float)((int)fVar5 * (uint)(0.01 < fVar5) | (uint)(0.01 >= fVar5) * 0x3c23d70a);
    if (fVar5 < 1.0) {
      fVar11 = *(float *)(&DAT_003f5084 + iVar4);
      fVar9 = *(float *)(&DAT_003f5088 + iVar4);
      fVar7 = *(float *)(&DAT_003f5080 + iVar4);
      *(float *)(param_1 + 200) = fVar9 * fVar5;
      *(float *)(param_1 + 0xc0) = fVar7 * fVar5;
      fVar11 = *(float *)(param_1 + 0xd0) + (fVar11 - *(float *)(param_1 + 0xd0)) * fVar5;
      *(float *)(param_1 + 0xc4) = fVar11;
      *(float *)(param_1 + 8) =
           *(float *)(param_1 + 8) + (fVar7 * fVar5 - *(float *)(param_1 + 8)) * 0.5;
      *(float *)(param_1 + 0xcc) =
           *(float *)(param_1 + 0xcc) + (fVar9 * fVar5 - *(float *)(param_1 + 0xcc)) * 0.5;
      *(float *)(param_1 + 0xc) =
           *(float *)(param_1 + 0xc) + (fVar11 - *(float *)(param_1 + 0xc)) * 0.5;
      return;
    }
    fVar9 = *(float *)(&DAT_003f5080 + iVar4);
    fVar11 = *(float *)(&DAT_003f5088 + iVar4);
    fVar7 = *(float *)(&DAT_003f5084 + iVar4);
    fVar5 = (float)(&DAT_003f5090)[(iVar2 + 1) * 6];
    *(float *)(param_1 + 0xc0) = fVar9;
    *(float *)(param_1 + 0xc4) = fVar7;
    *(float *)(param_1 + 200) = fVar11;
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + (fVar9 - *(float *)(param_1 + 8)) * 0.5;
    *(float *)(param_1 + 0xc) =
         *(float *)(param_1 + 0xc) + (fVar7 - *(float *)(param_1 + 0xc)) * 0.5;
    *(float *)(param_1 + 0xcc) =
         *(float *)(param_1 + 0xcc) + (fVar11 - *(float *)(param_1 + 0xcc)) * 0.5;
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + (iVar2 + 1) * 4 + 0xe4);
    if (-fVar5 + 0.01 < *(float *)(param_1 + 0xb8)) {
      *(float *)(param_1 + 0xb8) = -fVar5;
    }
    uVar6 = 1;
    goto LAB_00131054;
  case 1:
    iVar3 = (int)*(char *)(param_1 + 0xb4);
    iVar4 = iVar3 * 0x18;
    iVar2 = (iVar3 + -1) * 0x18;
    fVar5 = 1.2499999 - (float)(&DAT_003f5094)[iVar3 * 6];
    fVar5 = ((float)(&DAT_003f5094)[(iVar3 + -1) * 6] - *(float *)(param_1 + 0xdc)) /
            (float)((int)fVar5 * (uint)(0.01 < fVar5) | (uint)(0.01 >= fVar5) * 0x3c23d70a);
    if (1.0 <= fVar5) {
      fVar5 = *(float *)(&DAT_003f5084 + iVar4);
      fVar7 = *(float *)(&DAT_003f5088 + iVar4);
      *(float *)(param_1 + 8) =
           *(float *)(&DAT_003f5080 + iVar4) +
           (*(float *)(param_1 + 0xc0) - *(float *)(&DAT_003f5080 + iVar4)) * 0.5;
      *(float *)(param_1 + 0xc) = fVar5 + (*(float *)(param_1 + 0xc4) - fVar5) * 0.5;
      *(float *)(param_1 + 0xcc) = fVar7 + (*(float *)(param_1 + 200) - fVar7) * 0.5;
      uVar6 = *(undefined4 *)(param_1 + (*(char *)(param_1 + 0xb4) + 1) * 4 + 0xe4);
      *(undefined4 *)(param_1 + 0xb4) = 2;
      *(undefined4 *)(param_1 + 0xfc) = uVar6;
      return;
    }
    fVar10 = *(float *)(param_1 + 8);
    fVar13 = *(float *)(param_1 + 0xc);
    fVar8 = *(float *)(param_1 + 0xcc);
    fVar7 = *(float *)(&DAT_003f5080 + iVar2) +
            (*(float *)(&DAT_003f5080 + iVar4) - *(float *)(&DAT_003f5080 + iVar2)) * fVar5;
    fVar12 = *(float *)(&DAT_003f5084 + iVar2) +
             (*(float *)(&DAT_003f5084 + iVar4) - *(float *)(&DAT_003f5084 + iVar2)) * fVar5;
    fVar11 = *(float *)(&DAT_003f5088 + iVar2) +
             (*(float *)(&DAT_003f5088 + iVar4) - *(float *)(&DAT_003f5088 + iVar2)) * fVar5;
    fVar9 = fVar7 - fVar10;
    *(float *)(param_1 + 0xc0) = fVar7;
    fVar5 = fVar12 - fVar13;
    *(float *)(param_1 + 0xc4) = fVar12;
    fVar7 = fVar11 - fVar8;
    *(float *)(param_1 + 200) = fVar11;
    break;
  case 2:
    iVar3 = (int)*(char *)(param_1 + 0xb4);
    iVar4 = iVar3 * 0x18;
    iVar2 = (iVar3 + -1) * 0x18;
    fVar5 = 1.2499999 - (float)(&DAT_003f5094)[iVar3 * 6];
    fVar5 = ((float)(&DAT_003f5094)[(iVar3 + -1) * 6] - *(float *)(param_1 + 0xdc)) /
            (float)((int)fVar5 * (uint)(0.01 < fVar5) | (uint)(0.01 >= fVar5) * 0x3c23d70a);
    if (1.0 <= fVar5) {
      fVar5 = *(float *)(&DAT_003f5084 + iVar4);
      fVar7 = *(float *)(&DAT_003f5088 + iVar4);
      *(float *)(param_1 + 8) =
           *(float *)(&DAT_003f5080 + iVar4) +
           (*(float *)(param_1 + 0xc0) - *(float *)(&DAT_003f5080 + iVar4)) * 0.5;
      *(float *)(param_1 + 0xc) = fVar5 + (*(float *)(param_1 + 0xc4) - fVar5) * 0.5;
      *(float *)(param_1 + 0xcc) = fVar7 + (*(float *)(param_1 + 200) - fVar7) * 0.5;
      iVar4 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 8);
      (**(code **)(iVar4 + 0x34))
                (*(int *)(DAT_0040f0e0 + 0x21070) + (int)*(short *)(iVar4 + 0x30),0);
      FUN_001c2760(0x3f800000,DAT_0040f4d8 + 0x83ca0,9);
      iVar4 = *(char *)(param_1 + 0xb4) + 1;
      _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
      fVar5 = (float)(&DAT_003f5094)[*(char *)(param_1 + 0xb4) * 6];
      fVar7 = (float)(&DAT_003f5090)[iVar4 * 6];
      *(float *)(param_1 + 0xdc) = fVar5;
      auVar14 = _qmtc2(*(float *)(param_1 + 0xe0) + fVar5);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(param_1 + 0x90) = auVar14;
      *(float *)(param_1 + 0xb8) = -fVar7;
      uVar6 = *(undefined4 *)(param_1 + iVar4 * 4 + 0xe4);
      *(undefined4 *)(param_1 + 0xb4) = 3;
      *(undefined4 *)(param_1 + 0xfc) = uVar6;
      return;
    }
    fVar10 = *(float *)(param_1 + 8);
    fVar13 = *(float *)(param_1 + 0xc);
    fVar8 = *(float *)(param_1 + 0xcc);
    fVar7 = *(float *)(&DAT_003f5080 + iVar2) +
            (*(float *)(&DAT_003f5080 + iVar4) - *(float *)(&DAT_003f5080 + iVar2)) * fVar5;
    fVar12 = *(float *)(&DAT_003f5084 + iVar2) +
             (*(float *)(&DAT_003f5084 + iVar4) - *(float *)(&DAT_003f5084 + iVar2)) * fVar5;
    fVar11 = *(float *)(&DAT_003f5088 + iVar2) +
             (*(float *)(&DAT_003f5088 + iVar4) - *(float *)(&DAT_003f5088 + iVar2)) * fVar5;
    fVar9 = fVar7 - fVar10;
    *(float *)(param_1 + 0xc0) = fVar7;
    fVar5 = fVar12 - fVar13;
    *(float *)(param_1 + 0xc4) = fVar12;
    fVar7 = fVar11 - fVar8;
    *(float *)(param_1 + 200) = fVar11;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0xb4);
    iVar2 = cVar1 + -1;
    iVar4 = iVar2 * 0x18;
    fVar5 = *(float *)(param_1 + 0xdc) / (float)(&DAT_003f5094)[iVar2 * 6];
    fVar5 = 1.0 - (float)((int)fVar5 * (uint)(0.0 < fVar5));
    iVar2 = cVar1 * 0x18;
    if (1.0 <= fVar5) {
      _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
      fVar9 = *(float *)(&DAT_003f5088 + iVar2);
      auVar14 = _qmtc2(*(undefined4 *)(param_1 + 0xe0));
      fVar11 = (float)(&DAT_003f5090)[(cVar1 + 1) * 6];
      fVar7 = *(float *)(&DAT_003f5080 + iVar2);
      fVar5 = *(float *)(&DAT_003f5084 + iVar2);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar14 = _sqc2(auVar14);
      *(undefined1 (*) [16])(param_1 + 0x90) = auVar14;
      *(float *)(param_1 + 0xcc) = fVar9 + (*(float *)(param_1 + 200) - fVar9) * 0.5;
      *(float *)(param_1 + 8) = fVar7 + (*(float *)(param_1 + 0xc0) - fVar7) * 0.5;
      *(float *)(param_1 + 0xc) = fVar5 + (*(float *)(param_1 + 0xc4) - fVar5) * 0.5;
      *(float *)(param_1 + 0xb8) = -fVar11;
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + (cVar1 + 1) * 4 + 0xe4);
      fVar7 = (float)FUN_0029e688(fVar11,0x40000000);
      fVar5 = (float)(&DAT_003f508c)[*(char *)(param_1 + 0xb4) * 6];
      *(undefined4 *)(param_1 + 0xb4) = 4;
      fVar5 = (-*(float *)(param_1 + 0xb8) + SQRT(ABS(fVar7))) / fVar5;
      *(float *)(param_1 + 0xfc) = fVar5;
      *(float *)(param_1 + 0xf4) = fVar5;
      return;
    }
    fVar10 = *(float *)(param_1 + 8);
    fVar13 = *(float *)(param_1 + 0xc);
    fVar8 = *(float *)(param_1 + 0xcc);
    fVar11 = *(float *)(&DAT_003f5080 + iVar4) +
             (*(float *)(&DAT_003f5080 + iVar2) - *(float *)(&DAT_003f5080 + iVar4)) * fVar5;
    fVar7 = *(float *)(&DAT_003f5084 + iVar4) +
            (*(float *)(&DAT_003f5084 + iVar2) - *(float *)(&DAT_003f5084 + iVar4)) * fVar5;
    fVar12 = *(float *)(&DAT_003f5088 + iVar4) +
             (*(float *)(&DAT_003f5088 + iVar2) - *(float *)(&DAT_003f5088 + iVar4)) * fVar5;
    fVar9 = fVar11 - fVar10;
    *(float *)(param_1 + 0xc0) = fVar11;
    fVar5 = fVar7 - fVar13;
    *(float *)(param_1 + 0xc4) = fVar7;
    fVar7 = fVar12 - fVar8;
    *(float *)(param_1 + 200) = fVar12;
    break;
  case 4:
    iVar4 = *(char *)(param_1 + 0xb4) * 0x18;
    iVar2 = (*(char *)(param_1 + 0xb4) + -1) * 0x18;
    fVar12 = *(float *)(&DAT_003f5084 + iVar4);
    fVar7 = 1.0 - *(float *)(param_1 + 0xfc) / *(float *)(param_1 + 0xf4);
    fVar13 = *(float *)(&DAT_003f5088 + iVar4);
    fVar11 = *(float *)(&DAT_003f5080 + iVar4);
    auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
    fVar5 = *(float *)(&DAT_003f5084 + iVar2) + (fVar12 - *(float *)(&DAT_003f5084 + iVar2)) * fVar7
    ;
    auVar14 = _sqc2(auVar14);
    fVar9 = *(float *)(&DAT_003f5088 + iVar2) + (fVar13 - *(float *)(&DAT_003f5088 + iVar2)) * fVar7
    ;
    fVar7 = *(float *)(&DAT_003f5080 + iVar2) + (fVar11 - *(float *)(&DAT_003f5080 + iVar2)) * fVar7
    ;
    fStack_6c = auVar14._4_4_;
    *(float *)(param_1 + 0xc4) = fVar5;
    *(float *)(param_1 + 0xc0) = fVar7;
    *(float *)(param_1 + 200) = fVar9;
    *(float *)(param_1 + 0xc) =
         *(float *)(param_1 + 0xc) + (fVar5 - *(float *)(param_1 + 0xc)) * 0.5;
    *(float *)(param_1 + 0xcc) =
         *(float *)(param_1 + 0xcc) + (fVar9 - *(float *)(param_1 + 0xcc)) * 0.5;
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + (fVar7 - *(float *)(param_1 + 8)) * 0.5;
    if (*(float *)(param_1 + 0xe0) < fStack_6c) {
      return;
    }
    auVar14 = _qmtc2(*(float *)(param_1 + 0xe0));
    auVar14 = _vaddbc(in_vf0,auVar14);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(param_1 + 0x90) = auVar14;
    *(float *)(param_1 + 8) = fVar11 + (fVar7 - fVar11) * 0.5;
    *(float *)(param_1 + 0xc) = fVar12 + (fVar5 - fVar12) * 0.5;
    *(float *)(param_1 + 0xcc) = fVar13 + (fVar9 - fVar13) * 0.5;
    FUN_00103800(DAT_0040f0e0,0);
    iVar4 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 8);
    (**(code **)(iVar4 + 0x34))(*(int *)(DAT_0040f0e0 + 0x21070) + (int)*(short *)(iVar4 + 0x30),0);
    uVar6 = 5;
LAB_00131054:
    *(undefined4 *)(param_1 + 0xb4) = uVar6;
  default:
    goto switchD_00130800_caseD_5;
  }
  *(float *)(param_1 + 8) = fVar10 + fVar9 * 0.5;
  *(float *)(param_1 + 0xc) = fVar13 + fVar5 * 0.5;
  *(float *)(param_1 + 0xcc) = fVar8 + fVar7 * 0.5;
switchD_00130800_caseD_5:
  return;
}


// ==== FUN_00131078 @ 00131078 ====

bool FUN_00131078(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0013ee28();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x102) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return lVar1 != 0;
}


// ==== FUN_001310b8 @ 001310b8 ====

void FUN_001310b8(void)

{
  FUN_0013ee30();
  return;
}


// ==== FUN_001310d8 @ 001310d8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001310d8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
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
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  FUN_0020b988(DAT_0040f544,3);
  iVar5 = (int)param_1;
  *(undefined1 *)(iVar5 + 0x101) = 0;
  *(undefined4 *)(iVar5 + 0xb8) = 0;
  if (*(float *)(*(int *)(iVar5 + 0x7c) + 0x2e8) == 1.65) {
    *(undefined4 *)(iVar5 + 0xb4) = 0;
  }
  else {
    *(undefined4 *)(iVar5 + 0xb4) = 2;
    uVar2 = DAT_003f50b8;
    uVar6 = DAT_003f50b4;
    *(undefined4 *)(iVar5 + 0xc0) = DAT_003f50b0;
    *(undefined4 *)(iVar5 + 0xc4) = uVar6;
    *(undefined4 *)(iVar5 + 200) = uVar2;
  }
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_90 = 1;
  FUN_001a6330(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x330),&uStack_90);
  iVar1 = *(int *)(iVar5 + 0x7c);
  auVar11 = _qmtc2(0x41200000);
  *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)(iVar1 + 0x4f8);
  uVar6 = *(undefined4 *)(iVar1 + 0x4fc);
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xd0) = uVar6;
  *(undefined4 *)(iVar5 + 0xc) = uVar6;
  *(undefined4 *)(iVar5 + 0xd4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(iVar5 + 0xcc) = 0;
  uStack_d0 = *(undefined4 *)(iVar1 + 0xd0);
  uStack_cc = *(undefined4 *)(iVar1 + 0xd4);
  uStack_c8 = *(undefined4 *)(iVar1 + 0xd8);
  uStack_c4 = *(undefined4 *)(iVar1 + 0xdc);
  uStack_b8 = *(undefined4 *)(iVar1 + 0xe8);
  uStack_b4 = *(undefined4 *)(iVar1 + 0xec);
  uStack_c0 = (undefined4)*(undefined8 *)(iVar1 + 0xe0);
  uStack_bc = (undefined4)((ulong)*(undefined8 *)(iVar1 + 0xe0) >> 0x20);
  uStack_b0 = *(undefined4 *)(iVar1 + 0xf0);
  uStack_ac = *(undefined4 *)(iVar1 + 0xf4);
  uStack_a8 = *(undefined4 *)(iVar1 + 0xf8);
  uStack_a4 = *(undefined4 *)(iVar1 + 0xfc);
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x100));
  auVar12 = _vsubbc(auVar9,auVar11);
  auVar11 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar5 + 0x90) = auVar11;
  _vmove(auVar9);
  auVar10 = _vaddbc(in_vf0,auVar12);
  auVar11 = _qmfc2(auVar9._0_4_);
  auVar12 = _qmfc2(auVar10._0_4_);
  auStack_a0 = _sqc2(auVar9);
  auStack_60 = _sqc2(auVar10);
  lVar3 = FUN_0012ae58(DAT_0040f4d0,auVar11._0_8_,auVar12._0_8_,0x47,iVar1,0,&uStack_150);
  auVar11 = _lqc2(auStack_60);
  _qmfc2(auVar11._0_4_);
  lVar4 = FUN_0012ae58(DAT_0040f4d0);
  if (lVar3 == 0) {
    if (lVar4 != 0) {
      lVar3 = 1;
      uStack_150 = uStack_110;
      uStack_14c = uStack_10c;
      uStack_148 = uStack_108;
      uStack_144 = uStack_104;
      uStack_140 = uStack_100;
      uStack_13c = uStack_fc;
      uStack_138 = uStack_f8;
      uStack_134 = uStack_f4;
      fStack_130 = fStack_f0;
      uStack_12c = uStack_ec;
      uStack_128 = uStack_e8;
      uStack_124 = uStack_e4;
      uStack_120 = uStack_e0;
      uStack_11c = uStack_dc;
      uStack_118 = uStack_d8;
      uStack_114 = uStack_d4;
    }
  }
  else {
    if (lVar4 == 0) goto LAB_001312a4;
    if (fStack_f0 < fStack_130) {
      uStack_150 = uStack_110;
      uStack_14c = uStack_10c;
      uStack_148 = uStack_108;
      uStack_144 = uStack_104;
      uStack_140 = uStack_100;
      uStack_13c = uStack_fc;
      uStack_138 = uStack_f8;
      uStack_134 = uStack_f4;
      fStack_130 = fStack_f0;
      uStack_12c = uStack_ec;
      uStack_128 = uStack_e8;
      uStack_124 = uStack_e4;
      uStack_120 = uStack_e0;
      uStack_11c = uStack_dc;
      uStack_118 = uStack_d8;
      uStack_114 = uStack_d4;
    }
  }
  if (lVar3 == 0) {
    return;
  }
LAB_001312a4:
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x90));
  auVar9 = _qmtc2(0x3e4ccccd);
  auVar11._4_4_ = uStack_14c;
  auVar11._0_4_ = uStack_150;
  auVar11._8_4_ = uStack_148;
  auVar11._12_4_ = uStack_144;
  auVar11 = _lqc2(auVar11);
  auVar11 = _vsubbc(auVar12,auVar11);
  auVar11 = _vsubbc(auVar11,auVar9);
  auVar11 = _sqc2(auVar11);
  auStack_70._4_4_ = auVar11._4_4_;
  auVar11 = _qmtc2(auStack_70._4_4_);
  fVar8 = 57.29578;
  *(undefined4 *)(iVar5 + 0xdc) = auStack_70._4_4_;
  auVar11 = _vsubbc(auVar12,auVar11);
  auVar11 = _sqc2(auVar11);
  *(undefined4 *)(iVar5 + 0xd8) = auStack_70._4_4_;
  auStack_70._4_4_ = auVar11._4_4_;
  *(undefined4 *)(iVar5 + 0xe0) = auStack_70._4_4_;
  auVar11 = _lqc2(_DAT_004432d0);
  _auStack_70 = _sqc2(auVar11);
  fVar7 = (float)(auStack_70._4_4_ * (uint)(-1.0 < (float)auStack_70._4_4_) |
                 (uint)(-1.0 >= (float)auStack_70._4_4_) * -0x40800000);
  auStack_50 = _sqc2(auVar11);
  fVar7 = (float)asinf((int)fVar7 * (uint)(fVar7 < 1.0) | (uint)(fVar7 >= 1.0) * 0x3f800000);
  auVar11 = _lqc2(auStack_50);
  _auStack_70 = _sqc2(auVar11);
  *(float *)(iVar5 + 0xc4) = -(fVar7 * fVar8);
  if (ABS((float)auStack_70._4_4_) < 1.0) {
    auVar12 = _qmtc2(0);
    _vmove(auVar11);
    auVar9 = _vaddbc(in_vf0,auVar12);
    auVar11 = _sqc2(auVar11);
    *(undefined1 (*) [16])(iVar5 + 0xa0) = auVar11;
    auVar12 = _vmul(auVar9,auVar9);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _sqc2(auVar9);
    *(undefined1 (*) [16])(iVar5 + 0xa0) = auVar11;
    _vaddabc(auVar12,auVar12);
    auVar11 = _vmaddbc(auVar10,auVar12);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar11);
    uVar6 = _vwaitq();
    auVar11 = _vmulq(auVar9,uVar6);
    _auStack_70 = _sqc2(auVar11);
    auVar11 = _sqc2(auVar11);
    *(undefined1 (*) [16])(iVar5 + 0xa0) = auVar11;
    fVar7 = (float)acosf(uStack_68);
    auVar12._4_4_ = uStack_ac;
    auVar12._0_4_ = uStack_b0;
    auVar12._8_4_ = uStack_a8;
    auVar12._12_4_ = uStack_a4;
    auVar11 = _lqc2(auVar12);
    auVar11 = _qmfc2(auVar11._0_4_);
    *(float *)(iVar5 + 0xc0) = fVar7 * fVar8;
    if (auVar11._0_4_ < 0.0) {
      *(float *)(iVar5 + 0xc0) = -(fVar7 * fVar8);
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0xc0) = 0;
    *(undefined4 *)(iVar5 + 0xa0) = uStack_b0;
    *(undefined4 *)(iVar5 + 0xa4) = uStack_ac;
    *(undefined4 *)(iVar5 + 0xa8) = uStack_a8;
    *(undefined4 *)(iVar5 + 0xac) = uStack_a4;
  }
  FUN_00131df0(param_1);
  return;
}


// ==== FUN_00131418 @ 00131418 ====

undefined8 FUN_00131418(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 in_vf0 [16];
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
  undefined1 in_vf16 [16];
  undefined1 auVar19 [16];
  undefined1 in_vf17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_vf23 [16];
  undefined1 auVar26 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined4 in_vuI;
  undefined4 uVar27;
  undefined1 auStack_190 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  pauVar4 = (undefined1 (*) [16])param_1;
  auVar25 = _vmaxbc(in_vf0,in_vf0);
  auVar10 = _qmtc2(*(float *)(param_2 + 0xbc) * 0.017453292);
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
  _vmsubai(auVar25,in_vuI);
  _vmaddai(auVar25,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar10,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar10 = _vmsubi(auVar25,in_vuI);
  auVar10 = _vabs(auVar10);
  _ctc2(0x3e800000);
  _vnop();
  auVar11 = _vsubi(auVar10,in_vuI);
  auVar9 = _vmul(auVar11,auVar11);
  auVar13 = _vmul(auVar9,auVar9);
  _ctc2(0xc2992661);
  _vnop();
  auVar10 = _vmuli(auVar11,in_vuI);
  auVar5 = _qmtc2(*(float *)(param_2 + 0xc) * 0.017453292);
  auVar12 = _vmul(auVar13,auVar13);
  auVar6 = _vmul(auVar10,auVar9);
  _ctc2(0xc2255de0);
  _vnop();
  auVar8 = _vmuli(auVar11,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar7 = _vmuli(auVar11,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar10 = _vmuli(auVar11,in_vuI);
  _lqc2(auStack_190);
  _vmula(auVar8,auVar9);
  _vmadda(auVar6,auVar13);
  _ctc2(0x40c90fda);
  _vmadda(auVar7,auVar13);
  _vmaddai(auVar11,in_vuI);
  auVar12 = _vmadd(auVar10,auVar12);
  auVar10 = _vaddbc(in_vf0,auVar5);
  auVar18 = _vaddbc(in_vf0,auVar12);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar10 = _vsubi(auVar10,in_vuI);
  auVar17 = _qmtc2(0);
  _vmove(auVar18);
  auVar10 = _vabs(auVar10);
  auVar22 = _vaddbc(in_vf0,auVar17);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar10,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar25,in_vuI);
  _vmaddai(auVar25,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar10,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar5 = _vmsubi(auVar25,in_vuI);
  auVar10 = _vsub(in_vf0,auVar12);
  _vmove(auVar22);
  auVar5 = _vabs(auVar5);
  auVar16 = _vaddbc(in_vf0,auVar10);
  _ctc2(0x3e800000);
  _vnop();
  auVar5 = _vsubi(auVar5,in_vuI);
  auVar24 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar5,auVar5);
  auVar10 = _vmul(auVar16,auVar16);
  auVar14 = _vmul(auVar11,auVar11);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar24,auVar10);
  _ctc2(0xc2992661);
  _vnop();
  auVar8 = _vmuli(auVar5,in_vuI);
  auVar6 = _vmove(auVar16);
  auVar15 = _vmul(auVar14,auVar14);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar10);
  uVar27 = _vwaitq();
  auVar7 = _vmulq(auVar6,uVar27);
  auVar10 = _vmul(auVar8,auVar11);
  _ctc2(0xc2255de0);
  _vnop();
  auVar13 = _vmuli(auVar5,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar9 = _vmuli(auVar5,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar6 = _vmuli(auVar5,in_vuI);
  auVar8 = _vmulbc(auVar7,auVar7);
  _vmula(auVar13,auVar11);
  _vmadda(auVar10,auVar14);
  _ctc2(0x40c90fda);
  _vmadda(auVar9,auVar14);
  _vmaddai(auVar5,in_vuI);
  auVar10 = _vmadd(auVar6,auVar15);
  _vmove(in_vf17);
  auVar23 = _qmtc2(0x3f800000);
  auVar5 = _vmulbc(auVar7,auVar7);
  _vaddbc(in_vf0,auVar8);
  _vmove(in_vf16);
  auVar13 = _vaddbc(in_vf0,auVar23);
  auVar6 = _vmul(auVar7,auVar7);
  _vaddbc(in_vf0,auVar5);
  auVar5 = _vsubbc(auVar13,auVar10);
  auVar10 = _vmulbc(auVar7,auVar7);
  auVar8 = _vsub(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar5);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar9 = _vaddbc(auVar8,auVar13);
  auVar8 = _vmulbc(auVar7,auVar6);
  _lqc2(auStack_170);
  auVar5 = _vmulbc(auVar10,auVar6);
  auVar11 = _vmulbc(auVar9,auVar6);
  _lqc2(auStack_70);
  _lqc2(auStack_80);
  auVar9 = _vaddbc(in_vf0,auVar12);
  auVar6 = _vsubbc(auVar13,auVar11);
  auVar10 = _vsubbc(auVar5,auVar8);
  auVar7 = _vaddbc(in_vf0,auVar6);
  auVar15 = _vaddbc(in_vf0,auVar10);
  _vmove(auVar9);
  auVar6 = _vaddbc(auVar5,auVar8);
  auVar19 = _vaddbc(in_vf0,auVar17);
  _sqc2(auVar7);
  auVar10 = _pextlw(0,0);
  _vmove(auVar7);
  _lqc2(auStack_60);
  auVar20 = _vaddbc(in_vf0,auVar6);
  auVar6 = _vsubbc(auVar13,auVar11);
  auVar17 = _vaddbc(auVar5,auVar8);
  _vmove(auVar15);
  _vmove(auVar19);
  auVar7 = _pextlw(0x3f800000,auVar10._0_8_);
  _sqc2(auVar18);
  auVar14 = _vaddbc(in_vf0,auVar12);
  _sqc2(auVar9);
  auVar18 = _vaddbc(in_vf0,auVar6);
  auVar9 = _vaddbc(in_vf0,auVar17);
  auVar17 = _vsubbc(auVar5,auVar8);
  auVar6 = _vsubbc(auVar5,auVar8);
  auVar12 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar15);
  auVar10 = _vaddbc(auVar5,auVar8);
  _sqc2(auVar22);
  auVar8 = _vsubbc(auVar13,auVar11);
  _vmove(auVar20);
  _sqc2(auVar19);
  auVar13 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar9);
  auVar5 = _vaddbc(in_vf0,auVar17);
  _sqc2(auVar18);
  _sqc2(auVar9);
  _sqc2(auVar20);
  _sqc2(auVar16);
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar12);
  _sqc2(auVar16);
  _vmove(auVar18);
  _sqc2(auVar14);
  auVar10 = _vaddbc(in_vf0,auVar10);
  _sqc2(auVar12);
  _sqc2(auVar16);
  _vmove(auVar5);
  _sqc2(auVar14);
  auVar6 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar12);
  _sqc2(auVar13);
  _sqc2(auVar10);
  _sqc2(auVar5);
  _sqc2(auVar6);
  _sqc2(auVar12);
  _sqc2(auVar13);
  _sqc2(auVar10);
  _sqc2(auVar12);
  auVar10 = _sqc2(auVar10);
  _sqc2(auVar6);
  _sqc2(auVar12);
  _sqc2(auVar13);
  auVar5 = _sqc2(auVar12);
  auVar6 = _sqc2(auVar6);
  _vmove(in_vf23);
  auVar8 = _vaddbc(in_vf0,auVar23);
  auVar9 = _qmtc2(auVar7._0_4_);
  auVar26 = _vmove(auVar8);
  auVar8 = _lqc2(auVar10);
  auVar7 = _lqc2(auVar6);
  _vmulabc(auVar13,auVar16);
  _vmaddabc(auVar8,auVar16);
  auVar19 = _vmaddbc(auVar7,auVar16);
  _vmulabc(auVar13,auVar9);
  _vmaddabc(auVar8,auVar9);
  auVar18 = _vmaddbc(auVar7,auVar9);
  _vmove(in_vf25);
  _sqc2(auVar19);
  _sqc2(auVar18);
  auVar11 = _qmfc2(auVar12._0_4_);
  _vmove(in_vf24);
  auVar7 = _lqc2(auVar5);
  auVar22 = _vaddbc(in_vf0,auVar23);
  auVar5 = _lqc2(auVar10);
  auVar10 = _lqc2(auVar6);
  _vmulabc(auVar13,auVar14);
  _vmaddabc(auVar5,auVar14);
  auVar16 = _vmaddbc(auVar10,auVar14);
  _vmulabc(auVar13,auVar12);
  _vmaddabc(auVar5,auVar12);
  _vmaddabc(auVar10,auVar12);
  auVar20 = _vmaddbc(auVar7,in_vf0);
  _sqc2(auVar19);
  auVar10 = _vmul(auVar16,auVar16);
  _sqc2(auVar16);
  _sqc2(auVar18);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar24,auVar10);
  _sqc2(auVar16);
  _sqc2(auVar19);
  _sqc2(auVar18);
  _sqc2(auVar16);
  _sqc2(auVar19);
  _sqc2(auVar18);
  _sqc2(auVar16);
  _sqc2(auVar20);
  _sqc2(auVar20);
  _sqc2(auVar20);
  auVar5 = _vmove(auVar16);
  _sqc2(auVar20);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar10);
  uVar27 = _vwaitq();
  auVar7 = _vmulq(auVar5,uVar27);
  _sqc2(auVar19);
  auVar10 = _vmulbc(auVar7,auVar7);
  _sqc2(auVar18);
  _vaddbc(in_vf0,auVar10);
  _sqc2(auVar16);
  auVar10 = _vmulbc(auVar7,auVar7);
  _vaddbc(in_vf0,auVar10);
  auVar5 = _vmul(auVar7,auVar7);
  auVar10 = _vmulbc(auVar7,auVar7);
  auVar12 = _vaddbc(in_vf0,auVar10);
  auVar5 = _vsub(in_vf0,auVar5);
  _vmove(auVar19);
  auVar10 = _qmtc2(*(float *)(param_2 + 0xcc) * 0.017453292);
  _vmove(auVar18);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar14 = _vaddbc(auVar5,auVar22);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar10 = _vsubi(auVar10,in_vuI);
  _vmove(auVar20);
  auVar10 = _vabs(auVar10);
  _sqc2(auVar20);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar10,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar25,in_vuI);
  _vmaddai(auVar25,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar10,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar10 = _vmsubi(auVar25,in_vuI);
  auVar10 = _vabs(auVar10);
  _ctc2(0x3e800000);
  _vnop();
  auVar10 = _vsubi(auVar10,in_vuI);
  auVar8 = _vmul(auVar10,auVar10);
  _ctc2(0xc2992661);
  _vnop();
  auVar5 = _vmuli(auVar10,in_vuI);
  auVar15 = _vmul(auVar8,auVar8);
  auVar6 = _vmul(auVar5,auVar8);
  auVar17 = _vmul(auVar15,auVar15);
  _ctc2(0xc2255de0);
  _vnop();
  auVar13 = _vmuli(auVar10,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar9 = _vmuli(auVar10,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar5 = _vmuli(auVar10,in_vuI);
  _vmula(auVar13,auVar8);
  _vmadda(auVar6,auVar15);
  _ctc2(0x40c90fda);
  _vmadda(auVar9,auVar15);
  _vmaddai(auVar10,in_vuI);
  auVar10 = _vmadd(auVar5,auVar17);
  auVar10 = _vsubbc(auVar22,auVar10);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar8 = _vmulbc(auVar7,auVar10);
  auVar12 = _vmulbc(auVar12,auVar10);
  auVar6 = _vsubbc(auVar12,auVar8);
  auVar5 = _vaddbc(auVar12,auVar8);
  auVar15 = _vaddbc(in_vf0,auVar6);
  auVar17 = _vaddbc(in_vf0,auVar5);
  auVar13 = _vmulbc(auVar14,auVar10);
  _vmove(auVar15);
  auVar10 = _vsubbc(auVar22,auVar13);
  auVar5 = _vsubbc(auVar22,auVar13);
  auVar14 = _vaddbc(in_vf0,auVar10);
  auVar9 = _vaddbc(in_vf0,auVar5);
  auVar7 = _vsubbc(auVar12,auVar8);
  auVar10 = _vaddbc(auVar12,auVar8);
  auVar5 = _vsubbc(auVar12,auVar8);
  _vmove(auVar14);
  auVar6 = _vaddbc(in_vf0,auVar10);
  auVar10 = _vaddbc(auVar12,auVar8);
  _vmove(auVar17);
  auVar8 = _vsubbc(auVar22,auVar13);
  _vmove(auVar6);
  auVar7 = _vaddbc(in_vf0,auVar7);
  auVar12 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar17);
  _vmove(auVar9);
  _vmove(auVar7);
  auVar10 = _vaddbc(in_vf0,auVar10);
  _sqc2(auVar6);
  auVar5 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar9);
  _sqc2(auVar7);
  _sqc2(auVar12);
  _sqc2(auVar12);
  _sqc2(auVar10);
  _sqc2(auVar5);
  _sqc2(auVar10);
  _sqc2(auVar5);
  _sqc2(auVar12);
  auVar10 = _sqc2(auVar10);
  auVar5 = _sqc2(auVar5);
  auVar7 = _lqc2(auVar10);
  auVar6 = _lqc2(auVar5);
  _vmulabc(auVar12,auVar19);
  _vmaddabc(auVar7,auVar19);
  auVar21 = _vmaddbc(auVar6,auVar19);
  _vmulabc(auVar12,auVar18);
  _vmaddabc(auVar7,auVar18);
  auVar9 = _vmaddbc(auVar6,auVar18);
  auVar6 = _sqc2(auVar9);
  auVar8 = _vmul(auVar9,auVar9);
  auVar7 = _sqc2(auVar21);
  _vaddabc(auVar8,auVar8);
  auVar13 = _vmaddbc(auVar24,auVar8);
  auVar8 = _lqc2(auVar10);
  auVar5 = _lqc2(auVar5);
  auVar10 = _lqc2(auVar11);
  _vmulabc(auVar12,auVar16);
  _vmaddabc(auVar8,auVar16);
  auVar22 = _vmaddbc(auVar5,auVar16);
  _vmulabc(auVar12,auVar20);
  _vmaddabc(auVar8,auVar20);
  _vmaddabc(auVar5,auVar20);
  auVar23 = _vmaddbc(auVar10,in_vf0);
  _sqc2(auVar9);
  auVar10 = _sqc2(auVar22);
  _sqc2(auVar23);
  _sqc2(auVar21);
  _sqc2(auVar22);
  _sqc2(auVar23);
  _sqc2(auVar9);
  _sqc2(auVar9);
  auVar8 = _qmtc2(*(float *)(param_2 + 8) * 0.017453292);
  auVar5 = _sqc2(auVar9);
  auVar8 = _vaddbc(in_vf0,auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar13);
  uVar27 = _vwaitq();
  auVar12 = _vmulq(auVar9,uVar27);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar8 = _vsubi(auVar8,in_vuI);
  auVar9 = _vmulbc(auVar12,auVar12);
  auVar8 = _vabs(auVar8);
  _vmove(in_vf26);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar8,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar25,in_vuI);
  _vmaddai(auVar25,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar8,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar8 = _vmsubi(auVar25,in_vuI);
  _vaddbc(in_vf0,auVar9);
  auVar8 = _vabs(auVar8);
  auVar20 = _vmulbc(auVar12,auVar12);
  _ctc2(0x3e800000);
  _vnop();
  auVar8 = _vsubi(auVar8,in_vuI);
  auVar15 = _vmul(auVar12,auVar12);
  auVar13 = _vmul(auVar8,auVar8);
  _ctc2(0xc2992661);
  _vnop();
  auVar9 = _vmuli(auVar8,in_vuI);
  auVar16 = _vmul(auVar13,auVar13);
  _ctc2(0xc2255de0);
  _vnop();
  auVar19 = _vmuli(auVar8,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar18 = _vmuli(auVar8,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar17 = _vmuli(auVar8,in_vuI);
  auVar14 = _vmul(auVar16,auVar16);
  auVar9 = _vmul(auVar9,auVar13);
  _vmula(auVar19,auVar13);
  _vmadda(auVar9,auVar16);
  _ctc2(0x40c90fda);
  _vmadda(auVar18,auVar16);
  _vmaddai(auVar8,in_vuI);
  auVar8 = _vmadd(auVar17,auVar14);
  _vaddbc(in_vf0,auVar20);
  auVar8 = _vsubbc(auVar26,auVar8);
  auVar9 = _vmulbc(auVar12,auVar12);
  auVar14 = _vsub(in_vf0,auVar15);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar13 = _vaddbc(in_vf0,auVar9);
  auVar14 = _vaddbc(auVar14,auVar26);
  auVar9 = _vmulbc(auVar12,auVar8);
  auVar12 = _vmulbc(auVar13,auVar8);
  auVar13 = _vmulbc(auVar14,auVar8);
  _lqc2(auVar7);
  _lqc2(auVar6);
  auVar7 = _vsubbc(auVar26,auVar13);
  auVar6 = _vsubbc(auVar12,auVar9);
  auVar7 = _vaddbc(in_vf0,auVar7);
  auVar8 = _vaddbc(in_vf0,auVar6);
  _lqc2(auVar10);
  auVar6 = _vaddbc(auVar12,auVar9);
  auVar10 = _vaddbc(auVar12,auVar9);
  _vmove(auVar7);
  auVar14 = _vaddbc(in_vf0,auVar6);
  auVar17 = _vaddbc(in_vf0,auVar10);
  auVar15 = _vsubbc(auVar12,auVar9);
  auVar6 = _vsubbc(auVar26,auVar13);
  auVar10 = _vsubbc(auVar12,auVar9);
  _vmove(auVar8);
  auVar13 = _vsubbc(auVar26,auVar13);
  _vmove(auVar14);
  auVar16 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar17);
  auVar18 = _vaddbc(in_vf0,auVar15);
  auVar15 = _vaddbc(in_vf0,auVar10);
  _sqc2(auVar7);
  _sqc2(auVar8);
  auVar10 = _vaddbc(auVar12,auVar9);
  _sqc2(auVar14);
  _vmove(auVar16);
  _vmove(auVar18);
  auVar6 = _vaddbc(in_vf0,auVar10);
  auVar9 = _vaddbc(in_vf0,auVar13);
  _sqc2(auVar17);
  _sqc2(auVar16);
  _sqc2(auVar18);
  auVar10 = _sqc2(auVar6);
  _sqc2(auVar6);
  _sqc2(auVar9);
  _sqc2(auVar6);
  _sqc2(auVar9);
  auVar6 = _sqc2(auVar21);
  auVar7 = _sqc2(auVar22);
  auVar8 = _sqc2(auVar23);
  _sqc2(auVar21);
  _sqc2(auVar22);
  _sqc2(auVar23);
  _sqc2(auVar21);
  _sqc2(auVar22);
  _sqc2(auVar23);
  _sqc2(auVar15);
  _sqc2(auVar15);
  _sqc2(auVar15);
  auVar9 = _sqc2(auVar9);
  auVar13 = _lqc2(auVar6);
  auVar12 = _lqc2(auVar10);
  auVar6 = _lqc2(auVar9);
  auVar5 = _lqc2(auVar5);
  uVar27 = *(undefined4 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  _vmulabc(auVar15,auVar13);
  _vmaddabc(auVar12,auVar13);
  auVar13 = _vmaddbc(auVar6,auVar13);
  _vmulabc(auVar15,auVar5);
  _vmaddabc(auVar12,auVar5);
  auVar14 = _vmaddbc(auVar6,auVar5);
  _sqc2(auVar13);
  _sqc2(auVar14);
  auVar12 = _lqc2(auVar7);
  auVar5 = _lqc2(auVar8);
  auVar7 = _lqc2(auVar11);
  auVar6 = _lqc2(auVar10);
  auVar10 = _lqc2(auVar9);
  _vmulabc(auVar15,auVar12);
  _vmaddabc(auVar6,auVar12);
  auVar8 = _vmaddbc(auVar10,auVar12);
  _vmulabc(auVar15,auVar5);
  _vmaddabc(auVar6,auVar5);
  _vmaddabc(auVar10,auVar5);
  auVar5 = _vmaddbc(auVar7,in_vf0);
  auVar10 = _sqc2(auVar13);
  *pauVar4 = auVar10;
  _sqc2(auVar5);
  auVar10 = _sqc2(auVar14);
  pauVar4[1] = auVar10;
  _sqc2(auVar8);
  _sqc2(auVar5);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar8);
  _sqc2(auVar5);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar8);
  _sqc2(auVar5);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar8);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar8);
  auVar10 = _sqc2(auVar8);
  pauVar4[2] = auVar10;
  *(undefined4 *)pauVar4[3] = uVar27;
  *(undefined4 *)(pauVar4[3] + 4) = uVar1;
  *(undefined4 *)(pauVar4[3] + 8) = uVar2;
  *(undefined4 *)(pauVar4[3] + 0xc) = uVar3;
  return param_1;
}


// ==== FUN_00131df0 @ 00131df0 ====

void FUN_00131df0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = 0;
  pfVar2 = &DAT_003f5094;
  pfVar3 = (float *)(param_1 + 0xe4);
  iVar4 = 0x1000000;
  do {
    fVar6 = pfVar2[-1];
    fVar8 = pfVar2[-2];
    if (iVar1 == 0) {
      fVar5 = *(float *)(param_1 + 0xd8);
      fVar7 = DAT_003f5094;
    }
    else {
      fVar5 = pfVar2[-6];
      fVar7 = *pfVar2;
    }
    fVar5 = fVar5 - fVar7;
    pfVar2 = pfVar2 + 6;
    fVar7 = (float)FUN_0029e688(-fVar6,0x40000000);
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    *pfVar3 = (-fVar6 + SQRT(ABS(fVar7 - (fVar8 + fVar8) * fVar5))) / fVar8;
    pfVar3 = pfVar3 + 1;
  } while (iVar1 < 6);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe4);
  return;
}


// ==== FUN_00131ef0 @ 00131ef0 ====

void FUN_00131ef0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar7 = 0;
  iVar5 = (int)param_1;
  puVar6 = (undefined4 *)(iVar5 + 0x25c);
  FUN_00125c60();
  (**(code **)(*(int *)(iVar5 + 0x10) + 0xb4))(iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0xb0));
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar10 = _vsub(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  *(undefined4 *)(iVar5 + 0x324) = 0;
  auVar4 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar5 + 0x70) = auVar4;
  *(undefined4 *)(iVar5 + 0x328) = 0;
  *(undefined4 *)(iVar5 + 0x32c) = 0;
  *(undefined4 *)(iVar5 + 0x330) = 0;
  auVar8 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)(iVar5 + 0x35c) = 0;
  auVar4 = _sqc2(auVar10);
  *(undefined1 (*) [16])(iVar5 + 0xa0) = auVar4;
  auVar4 = _sqc2(auVar11);
  *(undefined1 (*) [16])(iVar5 + 0x80) = auVar4;
  auVar4 = _sqc2(auVar12);
  *(undefined1 (*) [16])(iVar5 + 0x90) = auVar4;
  auVar4 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar5 + 0xd0) = auVar4;
  uVar1 = DAT_003f4828;
  auVar4 = _sqc2(auVar10);
  *(undefined1 (*) [16])(iVar5 + 0x100) = auVar4;
  auVar4 = _sqc2(auVar11);
  *(undefined1 (*) [16])(iVar5 + 0xe0) = auVar4;
  auVar4 = _sqc2(auVar12);
  *(undefined1 (*) [16])(iVar5 + 0xf0) = auVar4;
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar5 + 0x1b0) = auVar4;
  *(undefined4 *)(iVar5 + 0x2e8) = 0x3fd33333;
  *(undefined4 *)(iVar5 + 0x318) = 0x3f19999a;
  *(undefined4 *)(iVar5 + 0x300) = uVar1;
  _sqc2(auVar8);
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar5 + 0x1c0) = auVar4;
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar5 + 0x1d0) = auVar4;
  *(undefined4 *)(iVar5 + 0x2fc) = 0x3f800000;
  *(undefined1 *)(iVar5 + 0x3a8) = 0;
  *(undefined1 *)(iVar5 + 0x3a9) = 0;
  *(undefined1 *)(iVar5 + 0x3aa) = 0;
  *(undefined4 *)(iVar5 + 0x2e0) = 0;
  *(undefined4 *)(iVar5 + 0x2e4) = 0;
  *(undefined4 *)(iVar5 + 0x2ec) = 0;
  *(undefined4 *)(iVar5 + 0x2f0) = 0;
  *(undefined4 *)(iVar5 + 0x2f8) = 0;
  *(undefined4 *)(iVar5 + 0x2f4) = 0;
  *(undefined4 *)(iVar5 + 0x250) = 0;
  *(undefined4 *)(iVar5 + 0x348) = 0;
  *(undefined1 *)(iVar5 + 0x3ae) = 0;
  auVar4 = _pextlw(0x3f800000,(long)*(int *)(iVar5 + 0x2e0));
  *(undefined1 *)(iVar5 + 0x3af) = 0;
  auVar4 = _pextlw((long)*(int *)(iVar5 + 0x2e0),auVar4._0_8_);
  *(undefined1 *)(iVar5 + 0x3b8) = 0;
  *(int *)(iVar5 + 0x1a0) = auVar4._0_4_;
  *(int *)(iVar5 + 0x1a4) = auVar4._4_4_;
  *(int *)(iVar5 + 0x1a8) = auVar4._8_4_;
  *(int *)(iVar5 + 0x1ac) = auVar4._12_4_;
  *(undefined4 *)(iVar5 + 0x31c) = 0;
  *(undefined1 *)(iVar5 + 0x388) = 0;
  *(undefined4 *)(iVar5 + 0x334) = 0;
  FUN_0015bb48(iVar5 + 0x280);
  FUN_00132188(param_1);
  (**(code **)(*(int *)(iVar5 + 0x10) + 0xac))(iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0xa8));
  *(undefined2 *)(iVar5 + 0x386) = 0x240;
  *(undefined2 *)(iVar5 + 900) = 0x70;
  uVar1 = FUN_00107d20(0x70);
  *(undefined4 *)(iVar5 + 0x354) = uVar1;
  uVar1 = FUN_00107d20(*(undefined2 *)(iVar5 + 0x386));
  *(undefined4 *)(iVar5 + 0x358) = uVar1;
  *(undefined1 *)(iVar5 + 0x3ad) = 0;
  uVar1 = FUN_001abe48(DAT_0040f50c);
  *(undefined4 *)(iVar5 + 0x330) = uVar1;
  uVar2 = FUN_00107ce8(0x40f0f0);
  FUN_00107cc8(0x40f0f0,0x10);
  do {
    if (param_2 == 0) {
      if (iVar7 < 5) goto LAB_001320e0;
      *puVar6 = 0;
    }
    else if (iVar7 < 5) {
      *puVar6 = 0;
    }
    else {
LAB_001320e0:
      uVar3 = FUN_00107cf8(0x1c);
      *puVar6 = (int)uVar3;
      FUN_00142e90(uVar3,param_1);
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
    if (7 < iVar7) {
      FUN_00107cc8(0x40f0f0,uVar2);
      *(undefined1 *)(iVar5 + 0x2dd) = 1;
      *(undefined4 *)(iVar5 + 0x30c) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0xc0) = 0x461c4000;
      *(undefined4 *)(iVar5 + 0x378) = 0;
      *(undefined4 *)(iVar5 + 0x350) = 0;
      *(undefined1 *)(iVar5 + 0x3b0) = 0;
      *(undefined1 *)(iVar5 + 0x3b1) = 0;
      *(undefined4 *)(iVar5 + 800) = 0;
      *(undefined1 *)(iVar5 + 0x3b2) = 0;
      *(undefined4 *)(iVar5 + 0x304) = 0x461c4000;
      *(undefined4 *)(iVar5 + 0x308) = 0x3f800000;
      return;
    }
  } while( true );
}


// ==== FUN_00132188 @ 00132188 ====

void FUN_00132188(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
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
  undefined4 in_vuI;
  undefined4 auStack_150 [4];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  auStack_150[0] = 0;
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,0xb,0);
  FUN_0032b860(auStack_140,1,0);
  auStack_150[0] = FUN_00107c98(0x40f0f0,auStack_140);
  iVar5 = FUN_0032bb28(auStack_150,1,0);
  *(int *)(param_1 + 0x35c) = iVar5;
  iVar5 = *(int *)(iVar5 + 4);
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x35c) + 4) + 0x48) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x35c) + 4) + 0x20) = 0x3ba3d70a;
  FUN_00331008(0x43480000,*(undefined4 *)(*(int *)(param_1 + 0x35c) + 4),0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x35c) + 4) + 0x2c) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x35c) + 4);
  uStack_130 = 0x322bcc77;
  uStack_12c = 0x3dcccccd;
  uStack_128 = 0x33d6bf95;
  uStack_90 = 0x322bcc77;
  uStack_8c = 0x3dcccccd;
  uStack_88 = 0x33d6bf95;
  uStack_84 = uStack_124;
  *(undefined4 *)(iVar5 + 0x10) = 0x322bcc77;
  *(undefined4 *)(iVar5 + 0x14) = 0x3dcccccd;
  *(undefined4 *)(iVar5 + 0x18) = 0x33d6bf95;
  *(undefined4 *)(iVar5 + 0x1c) = uStack_124;
  auVar11._8_4_ = 0x33d6bf95;
  auVar11._0_8_ = 0x3dcccccd322bcc77;
  auVar11._12_4_ = uStack_124;
  auVar11 = _lqc2(auVar11);
  auVar6 = _qmfc2(auVar11._0_4_);
  auVar11 = _sqc2(auVar11);
  auStack_140._4_4_ = auVar11._4_4_;
  if (auVar6._0_4_ < (float)auStack_140._4_4_) {
    auVar6._8_4_ = 0x33d6bf95;
    auVar6._0_8_ = 0x3dcccccd322bcc77;
    auVar6._12_4_ = uStack_124;
    auVar11 = _lqc2(auVar6);
    auVar11 = _qmfc2(auVar11._0_4_);
    *(int *)(iVar5 + 0x24) = auVar11._0_4_;
  }
  else {
    auVar12._8_4_ = 0x33d6bf95;
    auVar12._0_8_ = 0x3dcccccd322bcc77;
    auVar12._12_4_ = uStack_124;
    auVar11 = _lqc2(auVar12);
    auVar11 = _sqc2(auVar11);
    auStack_140._4_4_ = auVar11._4_4_;
    *(undefined4 *)(iVar5 + 0x24) = auStack_140._4_4_;
  }
  uVar3 = DAT_004147b0;
  auVar13._8_4_ = 0x33d6bf95;
  auVar13._0_8_ = 0x3dcccccd322bcc77;
  auVar13._12_4_ = uStack_124;
  auVar11 = _lqc2(auVar13);
  auVar11 = _sqc2(auVar11);
  fVar7 = *(float *)(iVar5 + 0x24);
  uStack_138._0_4_ = auVar11._8_4_;
  bVar2 = (float)uStack_138 <= fVar7;
  uStack_138 = auVar11._8_8_;
  if (bVar2) {
    auVar14._8_4_ = 0x33d6bf95;
    auVar14._0_8_ = 0x3dcccccd322bcc77;
    auVar14._12_4_ = uStack_124;
    auVar11 = _lqc2(auVar14);
    auVar11 = _sqc2(auVar11);
    uStack_138 = auVar11._8_8_;
    uVar4 = uStack_138;
    uStack_138._0_4_ = auVar11._8_4_;
    fVar7 = (float)uStack_138;
    uStack_138 = uVar4;
  }
  fVar10 = 0.3;
  *(float *)(iVar5 + 0x24) = 1.0 / fVar7;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x35c) + 4) + 0x28) = uVar3;
  fVar9 = *(float *)(param_1 + 0x2e8);
  fVar7 = *(float *)(param_1 + 0x318);
  auStack_140 = (undefined1  [8])0x1000000060;
  fVar8 = fVar7 * 0.5;
  auStack_150[0] = FUN_00107c98(0x40f0f0,auStack_140);
  iVar5 = FUN_00334268(auStack_150,2);
  auVar11 = _qmtc2(0xbfc90fdb);
  *(int *)(param_1 + 0xb8) = iVar5;
  auVar11 = _vaddbc(in_vf0,auVar11);
  *(float *)(iVar5 + 0x4c) = fVar8;
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar11 = _vsubi(auVar11,in_vuI);
  auVar6 = _vabs(auVar11);
  auVar11 = _vmaxbc(in_vf0,in_vf0);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar6,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar11,in_vuI);
  _vmaddai(auVar11,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar6,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar11 = _vmsubi(auVar11,in_vuI);
  auVar11 = _vabs(auVar11);
  _ctc2(0x3e800000);
  _vnop();
  auVar6 = _vsubi(auVar11,in_vuI);
  *(float *)(*(int *)(param_1 + 0xb8) + 0x40) = ((fVar9 - 0.3) - fVar7) * 0.5;
  auVar14 = _vmul(auVar6,auVar6);
  _ctc2(0xc2992661);
  _vnop();
  auVar12 = _vmuli(auVar6,in_vuI);
  _ctc2(0xc2255de0);
  _vnop();
  auVar18 = _vmuli(auVar6,in_vuI);
  auVar17 = _vmul(auVar14,auVar14);
  _ctc2(0x42a33457);
  _vnop();
  auVar16 = _vmuli(auVar6,in_vuI);
  _lqc2(auStack_d0);
  _lqc2(auStack_c0);
  auVar11 = _qmtc2(0);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar15 = _vmuli(auVar6,in_vuI);
  auVar13 = _vmul(auVar17,auVar17);
  auVar12 = _vmul(auVar12,auVar14);
  _vmula(auVar18,auVar14);
  _vmadda(auVar12,auVar17);
  _ctc2(0x40c90fda);
  _vmadda(auVar16,auVar17);
  _vmaddai(auVar6,in_vuI);
  auVar13 = _vmadd(auVar15,auVar13);
  auVar12 = _vaddbc(in_vf0,auVar11);
  auVar6 = _vaddbc(in_vf0,auVar11);
  _vmove(auVar6);
  auVar11 = _pextlw(0,0x3f800000);
  _vmove(auVar12);
  auVar14 = _vaddbc(in_vf0,auVar13);
  _sqc2(auVar6);
  auVar15 = _vaddbc(in_vf0,auVar13);
  _sqc2(auVar12);
  auVar11 = _pextlw(0,auVar11._0_8_);
  _sqc2(auVar14);
  auVar12 = _vsub(in_vf0,auVar13);
  _sqc2(auVar15);
  auVar6 = _pextlw(0,0);
  uStack_120 = auVar11._0_4_;
  uStack_11c = auVar11._4_4_;
  uStack_118 = auVar11._8_4_;
  uStack_114 = auVar11._12_4_;
  _vmove(auVar14);
  auVar12 = _vaddbc(in_vf0,auVar12);
  _vmove(auVar15);
  puVar1 = *(undefined4 **)(param_1 + 0xb8);
  auVar11 = _vadd(in_vf0,in_vf0);
  auVar13 = _vaddbc(in_vf0,auVar13);
  auStack_110 = _sqc2(auVar12);
  auStack_100 = _sqc2(auVar13);
  auStack_f0 = _sqc2(auVar11);
  auStack_d0 = _sqc2(auVar12);
  auStack_c0 = _sqc2(auVar13);
  auStack_a0 = _sqc2(auVar11);
  auStack_b0 = _sqc2(auVar11);
  *puVar1 = uStack_120;
  puVar1[1] = uStack_11c;
  puVar1[2] = uStack_118;
  puVar1[3] = uStack_114;
  puVar1[4] = auStack_110._0_4_;
  puVar1[5] = auStack_110._4_4_;
  puVar1[6] = auStack_110._8_4_;
  puVar1[7] = auStack_110._12_4_;
  puVar1[8] = auStack_100._0_4_;
  puVar1[9] = auStack_100._4_4_;
  puVar1[10] = auStack_100._8_4_;
  puVar1[0xb] = auStack_100._12_4_;
  puVar1[0xc] = auStack_f0._0_4_;
  puVar1[0xd] = auStack_f0._4_4_;
  puVar1[0xe] = auStack_f0._8_4_;
  puVar1[0xf] = auStack_f0._12_4_;
  _auStack_140 = _pextlw((long)(int)((*(float *)(param_1 + 0x2e8) - fVar10) * 0.5 + fVar10),
                         auVar6._0_8_);
  puVar1[0xc] = auStack_140._0_4_;
  puVar1[0xd] = auStack_140._4_4_;
  puVar1[0xe] = auStack_140._8_4_;
  puVar1[0xf] = auStack_140._12_4_;
  **(undefined4 **)(*(int *)(param_1 + 0x35c) + 4) = *(undefined4 *)(param_1 + 0xb8);
  uStack_e0 = uStack_120;
  uStack_dc = uStack_11c;
  uStack_d8 = uStack_118;
  uStack_d4 = uStack_114;
  FUN_00107b08(0x40f0f0,0xb,0);
  FUN_00107ab8(0x40f0f0,0,0);
  return;
}


// ==== FUN_00132610 @ 00132610 ====

void FUN_00132610(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 auStack_c0 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  uVar4 = 0;
  auStack_c0[0] = 0;
  FUN_00107b08(0x40f0f0,0,0);
  fVar8 = 0.5;
  FUN_00107ab8(0x40f0f0,0xb,0);
  FUN_003349c0(&uStack_b0,0xb,0x3d12c8,0x40);
  auStack_c0[0] = FUN_00107c98(0x40f0f0,&uStack_b0);
  iVar1 = FUN_003349e0(auStack_c0,0xb,0x3d12c8,0x40);
  do {
    pauVar3 = (undefined1 (*) [16])(*(int *)(iVar1 + 0x30) + (uVar4 & 0xffff) * 0x60);
    FUN_003342d0(pauVar3,2);
    uVar5 = FUN_00138360(uVar4);
    *(undefined4 *)(pauVar3[4] + 0xc) = uVar5;
    fVar6 = (float)FUN_00138348(uVar4);
    fVar7 = (float)FUN_00138360(uVar4);
    uVar4 = uVar4 + 1;
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar9 = _vsub(in_vf0,in_vf0);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _sqc2(auVar9);
    pauVar3[3] = auVar9;
    auVar9 = _sqc2(auVar10);
    *pauVar3 = auVar9;
    auVar9 = _sqc2(auVar11);
    pauVar3[1] = auVar9;
    auVar9 = _sqc2(auVar12);
    pauVar3[2] = auVar9;
    *(float *)pauVar3[4] = fVar6 * fVar8 - fVar7;
  } while ((int)uVar4 < 0xb);
  (**(code **)(*(int *)(iVar1 + 0x20) + 0x18))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x14));
  uStack_b0 = 0x60;
  uStack_ac = 0x10;
  auStack_c0[0] = FUN_00107c98(0x40f0f0,&uStack_b0);
  iVar2 = FUN_00334268(auStack_c0,5);
  *(int *)(param_1 + 0xbc) = iVar2;
  *(int *)(iVar2 + 0x40) = iVar1;
  FUN_00107b08(0x40f0f0,0xb,0);
  FUN_00107ab8(0x40f0f0,0,0);
  return;
}


// ==== FUN_001327f0 @ 001327f0 ====

undefined4
FUN_001327f0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  byte bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  undefined1 in_zero_qw [16];
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 (*pauVar12) [16];
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  undefined8 in_a2_udw;
  int *piVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  
  auVar21._8_8_ = in_a2_udw;
  auVar21._0_8_ = param_3;
  auVar20 = _por(in_zero_qw,auVar21);
  FUN_00125cd8();
  auVar21 = _vadd(in_vf0,in_vf0);
  puVar19 = (undefined8 *)param_1;
  *(undefined4 *)(puVar19 + 0x72) = param_6;
  *(undefined1 *)((int)puVar19 + 0x201) = 0;
  *(undefined4 *)(puVar19 + 0x65) = param_2;
  auVar21 = _sqc2(auVar21);
  *(undefined4 *)((int)puVar19 + 0x31c) = 0;
  uVar10 = FUN_00138320();
  *(undefined4 *)((int)puVar19 + 0x39c) = uVar10;
  FUN_00138390(*(undefined4 *)(puVar19 + 0x65),(int)puVar19 + 0x3b9,uVar10);
  FUN_00136b50(param_1);
  uVar10 = FUN_00108120(DAT_0040f4c4,0x5fad315ae9985ebe);
  *(undefined4 *)(puVar19 + 0x6c) = uVar10;
  FUN_0015bb90(puVar19 + 0x50);
  *(undefined8 **)((int)puVar19 + 0x29c) = puVar19;
  bVar1 = *(byte *)(*DAT_0040f4e0 + 1);
  iVar16 = 0;
  if (bVar1 != 0) {
    plVar15 = *(long **)(*DAT_0040f4e0 + 4);
    iVar17 = 0x1000000;
    do {
      uVar8 = (undefined1)iVar16;
      if (*plVar15 == param_5) goto LAB_0013290c;
      plVar15 = plVar15 + 4;
      iVar16 = iVar17 >> 0x18;
      iVar17 = iVar17 + 0x1000000;
    } while (iVar16 < (int)(uint)bVar1);
  }
  uVar8 = 0xff;
LAB_0013290c:
  lVar14 = FUN_0015d2e8(DAT_0040f4e0,uVar8);
  if (lVar14 != 0) {
    uVar10 = FUN_0015cef0(DAT_0040f4e0,param_1,uVar8);
    **(undefined4 **)(puVar19 + 0x54) = uVar10;
  }
  if (**(int **)(puVar19 + 0x54) == 0) {
LAB_00132964:
    if (*(int *)((int)puVar19 + 0xc4) != 2) {
      iVar16 = FUN_00138340();
      FUN_001a51c8(*(undefined4 *)(puVar19 + 0x66),param_1,DAT_0040f50c + iVar16 * 0x60 + 0xf8);
    }
  }
  else if (*(int *)((int)puVar19 + 0xc4) != 2) {
    FUN_0015bf50(puVar19 + 0x50);
    goto LAB_00132964;
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar22 = _vsub(in_vf0,in_vf0);
  auVar23 = _vaddbc(in_vf0,in_vf0);
  auVar24 = _vaddbc(in_vf0,in_vf0);
  auVar25 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _sqc2(auVar23);
  iVar16 = 0;
  auVar4 = _sqc2(auVar24);
  auVar5 = _sqc2(auVar25);
  piVar18 = (int *)((int)puVar19 + 0x25c);
  auVar6 = _sqc2(auVar22);
  auVar23 = _qmfc2(auVar23._0_4_);
  *(int *)(puVar19 + 0xe) = auVar23._0_4_;
  *(int *)((int)puVar19 + 0x74) = auVar23._4_4_;
  *(int *)(puVar19 + 0xf) = auVar23._8_4_;
  *(int *)((int)puVar19 + 0x7c) = auVar23._12_4_;
  auVar23 = _qmfc2(auVar22._0_4_);
  *(int *)(puVar19 + 0x14) = auVar23._0_4_;
  *(int *)((int)puVar19 + 0xa4) = auVar23._4_4_;
  *(int *)(puVar19 + 0x15) = auVar23._8_4_;
  *(int *)((int)puVar19 + 0xac) = auVar23._12_4_;
  auVar23 = _qmfc2(auVar24._0_4_);
  auVar22 = _qmfc2(auVar25._0_4_);
  *(int *)(puVar19 + 0x10) = auVar23._0_4_;
  *(int *)((int)puVar19 + 0x84) = auVar23._4_4_;
  *(int *)(puVar19 + 0x11) = auVar23._8_4_;
  *(int *)((int)puVar19 + 0x8c) = auVar23._12_4_;
  *(int *)(puVar19 + 0x12) = auVar22._0_4_;
  *(int *)((int)puVar19 + 0x94) = auVar22._4_4_;
  *(int *)(puVar19 + 0x13) = auVar22._8_4_;
  *(int *)((int)puVar19 + 0x9c) = auVar22._12_4_;
  uStack_b0 = auVar21._0_4_;
  uStack_ac = auVar21._4_4_;
  uStack_a8 = auVar21._8_4_;
  uStack_a4 = auVar21._12_4_;
  *(undefined4 *)(puVar19 + 0x36) = uStack_b0;
  *(undefined4 *)((int)puVar19 + 0x1b4) = uStack_ac;
  *(undefined4 *)(puVar19 + 0x37) = uStack_a8;
  *(undefined4 *)((int)puVar19 + 0x1bc) = uStack_a4;
  *puVar19 = param_4;
  uVar11 = FUN_00139170(DAT_0040f514);
  uVar10 = DAT_003f482c;
  *(undefined4 *)((int)puVar19 + 0x37c) = uVar11;
  *(undefined1 *)((int)puVar19 + 0x3ab) = 1;
  *(undefined4 *)(puVar19 + 0x60) = uVar10;
  *(undefined1 *)(puVar19 + 0x75) = 1;
  *(undefined4 *)(puVar19 + 0x5d) = 0x3fd33333;
  *(undefined1 *)((int)puVar19 + 0x3a9) = 0;
  *(undefined1 *)((int)puVar19 + 0x3aa) = 0;
  auVar21 = _por(in_zero_qw,auVar20);
  *(undefined1 *)((int)puVar19 + 0x3ac) = 0;
  *(undefined1 *)(puVar19 + 0x77) = 0;
  *(undefined4 *)((int)puVar19 + 0x2ec) = 0;
  *(undefined4 *)((int)puVar19 + 0x32c) = 0;
  *(undefined4 *)((int)puVar19 + 0x38c) = 0;
  uVar10 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  *(undefined4 *)((int)puVar19 + 0x394) = 0xb;
  *(undefined4 *)((int)puVar19 + 0x2f4) = uVar10;
  *(undefined1 *)((int)puVar19 + 0x2cd) = 2;
  *(undefined1 *)((int)puVar19 + 0x2cc) = 4;
  *(undefined4 *)(puVar19 + 0x59) = 0xffffffff;
  *(undefined4 *)((int)puVar19 + 0x3a4) = param_8;
  uStack_e8 = auVar3._8_4_;
  uStack_e4 = auVar3._12_4_;
  *(undefined1 *)((int)puVar19 + 0x2ce) = 2;
  *(int *)(puVar19 + 0x22) = auVar3._0_4_;
  *(int *)((int)puVar19 + 0x114) = auVar3._4_4_;
  *(undefined4 *)(puVar19 + 0x23) = uStack_e8;
  *(undefined4 *)((int)puVar19 + 0x11c) = uStack_e4;
  *(undefined4 *)(puVar19 + 0x6f) = 0;
  *(undefined1 *)(puVar19 + 0x71) = 0;
  uStack_c0 = auVar6._0_4_;
  uStack_bc = auVar6._4_4_;
  uStack_b8 = auVar6._8_4_;
  uStack_b4 = auVar6._12_4_;
  *(undefined4 *)(puVar19 + 0x28) = uStack_c0;
  *(undefined4 *)((int)puVar19 + 0x144) = uStack_bc;
  *(undefined4 *)(puVar19 + 0x29) = uStack_b8;
  *(undefined4 *)((int)puVar19 + 0x14c) = uStack_b4;
  uStack_d8 = auVar4._8_4_;
  uStack_d4 = auVar4._12_4_;
  *(int *)(puVar19 + 0x24) = auVar4._0_4_;
  *(int *)((int)puVar19 + 0x124) = auVar4._4_4_;
  *(undefined4 *)(puVar19 + 0x25) = uStack_d8;
  *(undefined4 *)((int)puVar19 + 300) = uStack_d4;
  uStack_d0 = auVar5._0_4_;
  uStack_cc = auVar5._4_4_;
  uStack_c8 = auVar5._8_4_;
  uStack_c4 = auVar5._12_4_;
  *(undefined4 *)(puVar19 + 0x26) = uStack_d0;
  *(undefined4 *)((int)puVar19 + 0x134) = uStack_cc;
  *(undefined4 *)(puVar19 + 0x27) = uStack_c8;
  *(undefined4 *)((int)puVar19 + 0x13c) = uStack_c4;
  *(undefined4 *)((int)puVar19 + 0x334) = 0;
  *(undefined4 *)(puVar19 + 0x67) = 0;
  *(undefined4 *)(puVar19 + 0x74) = 0;
  *(undefined4 *)(puVar19 + 0x6d) = 0;
  FUN_00137018(param_1,auVar21._0_8_);
  pauVar12 = (undefined1 (*) [16])FUN_00135b60(param_1);
  auVar21 = *pauVar12;
  *(int *)(puVar19 + 0xc) = auVar21._0_4_;
  *(int *)((int)puVar19 + 100) = auVar21._4_4_;
  *(int *)(puVar19 + 0xd) = auVar21._8_4_;
  *(int *)((int)puVar19 + 0x6c) = auVar21._12_4_;
  do {
    if (*piVar18 != 0) {
      FUN_00142ed8(*piVar18,*(undefined4 *)(*(int *)(puVar19 + 0x66) + iVar16 * 4 + 0x30),0);
    }
    iVar16 = iVar16 + 1;
    piVar18 = piVar18 + 1;
  } while (iVar16 < 8);
  FUN_001394b8(DAT_0040f514,param_1);
  if (*(int *)((int)puVar19 + 0x26c) != 0) {
    *(undefined1 *)(*(int *)((int)puVar19 + 0x26c) + 0x18) = 1;
  }
  if (*(int *)((int)puVar19 + 0xc4) != 2) {
    FUN_00137320(param_1);
    lVar14 = FUN_0015d2e8(DAT_0040f4e0,uVar8);
    if (lVar14 == 0) {
      FUN_00136848(param_1,0);
    }
    else {
      FUN_00136848(param_1,param_5);
    }
    uVar10 = FUN_00108120(DAT_0040f4c4,0x54461526a06b0000);
    *(undefined4 *)((int)puVar19 + 0x364) = uVar10;
  }
  *(undefined4 *)(puVar19 + 0x5f) = DAT_003f482c;
  if ((*(int *)(puVar19 + 0x69) == 0) && (*(int *)((int)puVar19 + 0x3a4) == 1)) {
    uVar10 = FUN_001e5ce0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),param_1);
    *(undefined4 *)(puVar19 + 0x69) = uVar10;
  }
  *(undefined4 *)(puVar19 + 0x70) = 0xffffffff;
  *(undefined4 *)(puVar19 + 0x6a) = 0;
  *(undefined1 *)(puVar19 + 0x76) = 0;
  *(undefined1 *)((int)puVar19 + 0x3b1) = 0;
  *(undefined4 *)(puVar19 + 100) = 0;
  *(undefined1 *)((int)puVar19 + 0x3af) = 0;
  *(undefined4 *)((int)puVar19 + 0x34c) = 0;
  if (*(int *)((int)puVar19 + 0xc4) != 2) {
    iVar16 = *(int *)((int)puVar19 + 0x26c);
    *(undefined1 *)((int)puVar19 + 0x389) = 0;
    if (iVar16 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(iVar16 + (uint)*(byte *)(iVar16 + 0x19) * 4 + 0xc) != 0;
    }
    if ((bVar2) && (lVar14 = FUN_00138320(), lVar14 == 0x28)) {
      FUN_001374f8(param_1,5);
      FUN_001374f8(param_1,6);
      *(undefined1 *)((int)puVar19 + 0x3b2) = 0;
      goto LAB_00132cb0;
    }
    FUN_00137520(param_1,5);
    FUN_00137520(param_1,6);
  }
  *(undefined1 *)((int)puVar19 + 0x3b2) = 0;
LAB_00132cb0:
  cVar9 = FUN_0012cba0(DAT_0040f4d0);
  if (cVar9 != '\x01') {
    iVar16 = 0;
    do {
      puVar13 = &DAT_003bcb08 + iVar16;
      iVar17 = iVar16 + 0x2d1;
      iVar16 = iVar16 + 1;
      *(undefined *)((int)puVar19 + iVar17) = *puVar13;
      uVar7 = DAT_003f42f2;
      uVar8 = DAT_003f42f1;
    } while (iVar16 < 9);
    *(undefined1 *)((int)puVar19 + 0x2da) = DAT_003f42f0;
    *(undefined1 *)((int)puVar19 + 0x2db) = uVar8;
    *(undefined1 *)((int)puVar19 + 0x2dc) = uVar7;
    *(undefined1 *)((int)puVar19 + 0x2dd) = 1;
  }
  *(undefined4 *)(puVar19 + 0x18) = 0x461c4000;
  *(undefined4 *)((int)puVar19 + 0x30c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x62) = 0;
  *(undefined4 *)((int)puVar19 + 0x314) = 0;
  *(undefined1 *)((int)puVar19 + 0x3b4) = 0;
  *(undefined1 *)((int)puVar19 + 0x3b5) = 0;
  *(undefined1 *)((int)puVar19 + 0x3b7) = 0;
  *(undefined1 *)((int)puVar19 + 0x3b6) = 0;
  *(undefined4 *)((int)puVar19 + 0x304) = 0x461c4000;
  *(undefined4 *)(puVar19 + 0x61) = 0x3f800000;
  return 1;
}


// ==== FUN_00132d98 @ 00132d98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00132d98(float param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 in_vuI;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  iVar9 = (int)param_2;
  FUN_00173560(iVar9 + 0x210);
  if (*(char *)(iVar9 + 0x3b5) == '\0') {
    if (*(char *)(iVar9 + 0x3b4) == '\0') {
      cVar5 = *(char *)(iVar9 + 0x3b0);
    }
    else {
      FUN_00135f00(*(undefined4 *)(iVar9 + 0x310),*(undefined4 *)(iVar9 + 0x314),param_2);
      cVar5 = *(char *)(iVar9 + 0x3b0);
    }
  }
  else {
    FUN_001362d0(*(undefined4 *)(iVar9 + 0x310),*(undefined4 *)(iVar9 + 0x314));
    cVar5 = *(char *)(iVar9 + 0x3b0);
  }
  if (cVar5 != '\0') {
    if (*(int *)(iVar9 + 0x350) == 0) {
      uVar7 = *(undefined4 *)(iVar9 + 0x330);
    }
    else {
      FUN_00261c50(*(int *)(iVar9 + 0x350),
                   *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x330) + 0x54) + 0x50),
                   *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x330) + 0x50) + 0x30));
      uVar7 = *(undefined4 *)(iVar9 + 0x330);
    }
    FUN_00384448(param_1,uVar7);
    return;
  }
  if (*(int *)(iVar9 + 0x38c) == 2) {
    FUN_001a54e0(param_1,*(undefined4 *)(iVar9 + 0x330),0);
    FUN_00135580(param_2,0);
    return;
  }
  if (*(int *)(iVar9 + 0x32c) == 0) {
    return;
  }
  FUN_00133470(param_2);
  FUN_00135578(param_2,*(undefined1 *)(*(int *)(iVar9 + 0x32c) + 0x30));
  uStack_c0 = *(undefined4 *)(iVar9 + 0xa0);
  uStack_bc = *(undefined4 *)(iVar9 + 0xa4);
  uStack_b8 = *(undefined4 *)(iVar9 + 0xa8);
  uStack_b4 = *(undefined4 *)(iVar9 + 0xac);
  *(undefined4 *)(iVar9 + 400) = uStack_c0;
  *(undefined4 *)(iVar9 + 0x194) = uStack_bc;
  *(undefined4 *)(iVar9 + 0x198) = uStack_b8;
  *(undefined4 *)(iVar9 + 0x19c) = uStack_b4;
  auVar12 = _vmaxbc(in_vf0,in_vf0);
  auVar13 = _qmtc2(**(float **)(iVar9 + 0x32c) * 0.017453292);
  auVar13 = _vaddbc(in_vf0,auVar13);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar13 = _vsubi(auVar13,in_vuI);
  auVar13 = _vabs(auVar13);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar13,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar12,in_vuI);
  _vmaddai(auVar12,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar13,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar12 = _vmsubi(auVar12,in_vuI);
  auVar12 = _vabs(auVar12);
  _ctc2(0x3e800000);
  _vnop();
  auVar13 = _vsubi(auVar12,in_vuI);
  auVar14 = _vmul(auVar13,auVar13);
  _ctc2(0xc2992661);
  _vnop();
  auVar12 = _vmuli(auVar13,in_vuI);
  auVar19 = _vmul(auVar14,auVar14);
  _ctc2(0x42a33457);
  _vnop();
  auVar18 = _vmuli(auVar13,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar16 = _vmuli(auVar13,in_vuI);
  auVar12 = _vmul(auVar12,auVar14);
  auVar15 = _vmul(auVar19,auVar19);
  _ctc2(0xc2255de0);
  _vnop();
  auVar20 = _vmuli(auVar13,in_vuI);
  auVar17 = _qmtc2(0);
  _vmula(auVar20,auVar14);
  _vmadda(auVar12,auVar19);
  _ctc2(0x40c90fda);
  _vmadda(auVar18,auVar19);
  _vmaddai(auVar13,in_vuI);
  auVar13 = _vmadd(auVar16,auVar15);
  _vmove(auVar13);
  auVar16 = _vaddbc(in_vf0,auVar13);
  _lqc2(auStack_f0);
  _vmove(auVar16);
  auVar15 = _vaddbc(in_vf0,auVar17);
  auVar14 = _lqc2(_DAT_004432a0);
  auVar12 = _vaddbc(in_vf0,auVar15);
  _sqc2(auVar13);
  _sqc2(auVar12);
  _vmove(auVar12);
  auVar13 = _vaddbc(in_vf0,auVar14);
  auVar12 = _vsub(in_vf0,auVar15);
  _sqc2(auVar13);
  auVar12 = _vaddbc(in_vf0,auVar12);
  _sqc2(auVar16);
  uStack_e0 = DAT_004432c0;
  uStack_dc = DAT_004432c4;
  uStack_d8 = DAT_004432c8;
  uStack_d4 = DAT_004432cc;
  auStack_f0 = _sqc2(auVar12);
  auStack_d0 = _sqc2(auVar15);
  FUN_00125f88(param_2,auStack_f0,0xffffffffc2255de0,0x4b400000,0x3f000000,0x3e800000);
  auVar14 = _qmtc2(param_1);
  auVar13 = _qmtc2(*(undefined4 *)(*(int *)(iVar9 + 0x32c) + 0x10));
  auVar12 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar9 + 0x32c) + 0x50));
  auVar12 = _vmulbc(auVar12,auVar13);
  auVar12 = _vmulbc(auVar12,auVar14);
  if (*(char *)(iVar9 + 0x3af) == '\0') {
    if (*(int *)(iVar9 + 0x38c) == 2) {
      iVar6 = *(int *)(iVar9 + 0xb4);
    }
    else {
      auVar13 = _qmtc2(*(float *)(iVar9 + 0x2ec) * param_1);
      auVar12 = _vaddbc(auVar12,auVar13);
      auVar12 = _vaddbc(in_vf0,auVar12);
      iVar6 = *(int *)(iVar9 + 0xb4);
    }
  }
  else {
    iVar6 = *(int *)(iVar9 + 0xb4);
  }
  if (*(char *)(iVar6 + 0x3c) == '\0') {
    if (*(char *)(iVar9 + 0x3af) == '\0') {
      auVar13 = _vmul(auVar12,auVar12);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar14,auVar13);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar13);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      uVar7 = _vwaitq();
      auVar13 = _vmulq(auVar13,uVar7);
      auVar13 = _qmfc2(auVar13._0_4_);
      fVar10 = auVar13._0_4_;
      if (fVar10 < 1.0) {
        fVar11 = DAT_004147b0;
        if (*(int *)(iVar9 + 0x38c) == 1) {
          fVar11 = DAT_003ffcb0;
        }
        if (fVar11 < fVar10) {
          auVar13 = _qmtc2(fVar11 / fVar10);
          auVar12 = _vmulbc(auVar12,auVar13);
          uVar7 = *(undefined4 *)(iVar9 + 0xb4);
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + 0xb4);
        }
        auVar12 = _qmfc2(auVar12._0_4_);
        FUN_0025d840(uVar7,auVar12._0_8_);
      }
      iVar6 = *(int *)(iVar9 + 0xb4);
      goto LAB_00133170;
    }
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
  }
  else {
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
  }
  auVar12 = _vadd(auVar13,auVar12);
  auVar12 = _qmfc2(auVar12._0_4_);
  FUN_00126030(param_2,auVar12._0_8_);
  iVar6 = *(int *)(iVar9 + 0xb4);
LAB_00133170:
  if (*(char *)(iVar6 + 0x3c) == '\0') {
    if (*(char *)(iVar9 + 0x3a9) == '\0') {
      fVar10 = *(float *)(iVar9 + 0x2e8) + *(float *)(iVar9 + 0x2fc) * param_1;
      *(float *)(iVar9 + 0x2e8) = fVar10;
      if (1.65 <= fVar10) {
        *(undefined4 *)(iVar9 + 0x2e8) = 0x3fd33333;
        *(undefined1 *)(iVar9 + 0x3aa) = 0;
      }
    }
    else {
      fVar10 = *(float *)(iVar9 + 0x2e8) - *(float *)(iVar9 + 0x2fc) * param_1;
      *(float *)(iVar9 + 0x2e8) = fVar10;
      if (fVar10 <= 1.2) {
        *(undefined4 *)(iVar9 + 0x2e8) = 0x3f99999a;
        *(undefined1 *)(iVar9 + 0x3aa) = 1;
      }
    }
  }
  else {
    *(undefined4 *)(iVar9 + 0x2e8) = 0x3fd33333;
  }
  FUN_00136548(param_2);
  FUN_001a5f38(*(undefined4 *)(iVar9 + 0x330));
  FUN_001a54e0(param_1,*(undefined4 *)(iVar9 + 0x330));
  lVar8 = FUN_001a74e0(*(undefined4 *)(iVar9 + 0x330));
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar7 = DAT_004432c4;
  if (lVar8 == 0) {
    if (*(char *)(*(int *)(iVar9 + 0xb4) + 0x3c) == '\0') {
      puVar1 = *(undefined4 **)(iVar9 + 0xb8);
      if (*(int *)puVar1[0x16] == 5) {
        puVar1 = *(undefined4 **)(puVar1[0x10] + 0x30);
      }
      puVar1[8] = DAT_004432c0;
      puVar1[9] = uVar7;
      puVar1[10] = uVar2;
      puVar1[0xb] = uVar3;
      uVar3 = DAT_004432bc;
      uVar2 = DAT_004432b8;
      uVar7 = DAT_004432b4;
      *puVar1 = DAT_004432b0;
      puVar1[1] = uVar7;
      puVar1[2] = uVar2;
      puVar1[3] = uVar3;
      uVar2 = DAT_004432dc;
      uVar7 = DAT_004432d8;
      uVar4 = _DAT_004432d0;
      puVar1[4] = (int)_DAT_004432d0;
      puVar1[5] = (int)((ulong)uVar4 >> 0x20);
      puVar1[6] = uVar7;
      puVar1[7] = uVar2;
    }
    else {
      FUN_00136f10(param_2,0);
    }
  }
  else {
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auStack_b0 = _sqc2(auVar12);
    uVar7 = FUN_001a6988(*(undefined4 *)(iVar9 + 0x330));
    auVar13 = _qmtc2(uVar7);
    auVar12 = _vmul(auVar13,auVar13);
    auVar14 = _lqc2(auStack_b0);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar14,auVar12);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar12);
    uVar7 = _vwaitq();
    auVar12 = _vmulq(auVar13,uVar7);
    auStack_a0 = _sqc2(auVar12);
    uVar7 = FUN_001a71f8(*(undefined4 *)(iVar9 + 0x330));
    auVar14 = _qmtc2(uVar7);
    auVar12 = _vmul(auVar14,auVar14);
    auVar13 = _lqc2(auStack_b0);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar13,auVar12);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar12);
    auVar12 = _vaddbc(in_vf0,in_vf0);
    uVar7 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar7);
    auVar12 = _qmfc2(auVar12._0_4_);
    if (auVar12._0_4_ < 1.0) {
      auVar12 = _qmtc2(*(float *)(iVar9 + 0x2ec) * param_1);
      auVar12 = _vaddbc(auVar14,auVar12);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auStack_90 = _sqc2(auVar12);
      auStack_80 = _sqc2(auVar12);
      FUN_001366b0(param_2);
      auVar12 = _lqc2(auStack_80);
      if ((*(char *)(*(int *)(iVar9 + 0xb4) + 0x3c) == '\0') && (*(char *)(iVar9 + 0x3af) == '\0'))
      {
        auVar13 = _vmul(auVar12,auVar12);
        auVar14 = _lqc2(auStack_b0);
        _vaddabc(auVar13,auVar13);
        auVar13 = _vmaddbc(auVar14,auVar13);
        _vnop();
        _vnop();
        _vnop();
        _vsqrt(auVar13);
        auVar13 = _vaddbc(in_vf0,in_vf0);
        uVar7 = _vwaitq();
        auVar13 = _vmulq(auVar13,uVar7);
        auVar13 = _qmfc2(auVar13._0_4_);
        fVar10 = DAT_004147b0;
        if (*(int *)(iVar9 + 0x38c) == 1) {
          fVar10 = DAT_003ffcb0;
        }
        if (fVar10 < auVar13._0_4_) {
          auVar14 = _lqc2(auStack_90);
          auVar12 = _qmtc2(fVar10 / auVar13._0_4_);
          auVar12 = _vmulbc(auVar14,auVar12);
          uVar7 = *(undefined4 *)(iVar9 + 0xb4);
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + 0xb4);
        }
        auVar12 = _qmfc2(auVar12._0_4_);
        FUN_0025d840(uVar7,auVar12._0_8_);
      }
      else {
        if (*(char *)(iVar9 + 0x3af) == '\0') {
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar9 + 400));
        }
        else {
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
        }
        auVar12 = _vadd(auVar13,auVar12);
        auVar12 = _qmfc2(auVar12._0_4_);
        FUN_00126030(param_2,auVar12._0_8_);
      }
    }
  }
  FUN_00125d18(param_2,iVar9 + 0x1e0);
  FUN_00125d10(param_1,param_2);
  return;
}


// ==== FUN_00133470 @ 00133470 ====

void FUN_00133470(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x40) = 0;
    iVar1 = *(int *)(param_1 + 0x32c);
    FUN_0015bbd8(param_1 + 0x280,*(undefined1 *)(iVar1 + 0x31),*(undefined1 *)(iVar1 + 0x32),
                 *(undefined1 *)(iVar1 + 0x33),*(undefined1 *)(iVar1 + 0x34),
                 *(undefined1 *)(iVar1 + 0x35),*(undefined1 *)(iVar1 + 0x3b),
                 *(undefined1 *)(iVar1 + 0x3c));
  }
  FUN_001a6330(*(undefined4 *)(param_1 + 0x330),param_1 + 0x334);
  return;
}


// ==== FUN_001334e0 @ 001334e0 ====

void FUN_001334e0(float param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined1 in_vf0 [16];
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
  undefined4 in_vuI;
  undefined4 uVar21;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
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
  undefined1 auStack_60 [16];
  
  iVar3 = (int)param_2;
  if (*(int *)(iVar3 + 0x38c) != 2) {
    if (*(char *)(iVar3 + 0x3b2) != '\0') {
      *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(iVar3 + 400);
      *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x194);
      *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar3 + 0x198);
      *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x19c);
    }
    auVar8 = _qmtc2(0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 400));
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar5 = _vsub(auVar5,auVar6);
    auStack_60 = _sqc2(auVar7);
    auVar6 = _qmtc2(1.0 / param_1);
    auVar5 = _vmulbc(auVar5,auVar6);
    auVar6 = _vaddbc(in_vf0,auVar8);
    auVar5 = _sqc2(auVar5);
    *(undefined1 (*) [16])(iVar3 + 0x1b0) = auVar5;
    auVar5 = _vmul(auVar6,auVar6);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar21 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar21);
    auVar5 = _qmfc2(auVar5._0_4_);
    fVar4 = auVar5._0_4_ / param_1;
    *(float *)(iVar3 + 0x2e0) = fVar4;
    if (fVar4 < *(float *)(iVar3 + 0x2e4)) {
      uVar21 = FUN_0017dad0(*(float *)(iVar3 + 0x2e4),fVar4,0x3e800000);
      *(undefined4 *)(iVar3 + 0x2e4) = uVar21;
    }
    else {
      *(float *)(iVar3 + 0x2e4) = fVar4;
    }
    FUN_0012a1e0(DAT_0040f4d0,param_2);
    if (*(int *)(iVar3 + 0x38c) == 2) {
      if (*(int *)(iVar3 + 0x330) != 0) {
        FUN_001a6be0();
      }
    }
    else if (*(int *)(iVar3 + 0x32c) != 0) {
      if (*(char *)(iVar3 + 0x3ab) == '\0') {
        *(undefined4 *)(iVar3 + 0x2ec) = 0;
      }
      else {
        FUN_00135580(param_2,1);
        if (*(char *)(iVar3 + 0x3a8) == '\0') {
          if ((*(int *)(iVar3 + 0xc4) == 2) && (lVar2 = FUN_00137ca0(param_2), lVar2 != 0)) {
            *(undefined4 *)(iVar3 + 0x2ec) = 0;
            *(undefined1 *)(iVar3 + 0x3a8) = 1;
          }
          else {
            fVar4 = *(float *)(iVar3 + 0x2ec) + param_1 * -12.0;
            fVar4 = (float)((int)fVar4 * (uint)(-10.0 < fVar4) |
                           (uint)(-10.0 >= fVar4) * -0x3ee00000);
            *(uint *)(iVar3 + 0x2ec) =
                 (int)fVar4 * (uint)(fVar4 < 10.0) | (uint)(fVar4 >= 10.0) * 0x41200000;
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x2ec) = 0;
        }
      }
      iVar1 = *(int *)(iVar3 + 0x32c);
      if (iVar1 != 0) {
        auVar5 = _qmtc2(*(float *)(iVar1 + 8) * 0.017453292);
        auVar5 = _vaddbc(in_vf0,auVar5);
        auVar13 = _vmaxbc(in_vf0,in_vf0);
        _ctc2(0x3fc90fdb);
        _vnop();
        auVar5 = _vsubi(auVar5,in_vuI);
        auVar5 = _vabs(auVar5);
        _ctc2(0xbe22f983);
        _vnop();
        _vmulai(auVar5,in_vuI);
        _ctc2(0x4b400000);
        _vnop();
        _vmsubai(auVar13,in_vuI);
        _vmaddai(auVar13,in_vuI);
        _ctc2(0xbe22f983);
        _vnop();
        _vmsubai(auVar5,in_vuI);
        _ctc2(0x3f000000);
        _vnop();
        auVar5 = _vmsubi(auVar13,in_vuI);
        auVar5 = _vabs(auVar5);
        _ctc2(0x3e800000);
        _vnop();
        auVar5 = _vsubi(auVar5,in_vuI);
        auVar10 = _vmul(auVar5,auVar5);
        auVar12 = _vmul(auVar10,auVar10);
        _ctc2(0xc2992661);
        _vnop();
        auVar7 = _vmuli(auVar5,in_vuI);
        _ctc2(0x42a33457);
        _vnop();
        auVar8 = _vmuli(auVar5,in_vuI);
        _ctc2(0x421ed7b7);
        _vnop();
        auVar6 = _vmuli(auVar5,in_vuI);
        auVar11 = _vmul(auVar12,auVar12);
        auVar7 = _vmul(auVar7,auVar10);
        _ctc2(0xc2255de0);
        _vnop();
        auVar9 = _vmuli(auVar5,in_vuI);
        _vmula(auVar9,auVar10);
        _vmadda(auVar7,auVar12);
        _ctc2(0x40c90fda);
        _vmadda(auVar8,auVar12);
        _vmaddai(auVar5,in_vuI);
        auVar6 = _vmadd(auVar6,auVar11);
        _lqc2(auStack_1e0);
        _lqc2(auStack_1c0);
        auVar10 = _vaddbc(in_vf0,auVar6);
        auVar8 = _vaddbc(in_vf0,auVar6);
        auVar7 = _qmtc2(0);
        _vmove(auVar8);
        auVar5 = _pextlw(0,0);
        _vmove(auVar10);
        auVar11 = _vaddbc(in_vf0,auVar7);
        auVar9 = _vaddbc(in_vf0,auVar7);
        _sqc2(auVar8);
        auVar7 = _vsub(in_vf0,auVar6);
        _vmove(auVar9);
        auVar5 = _pextlw(0x3f800000,auVar5._0_8_);
        _sqc2(auVar10);
        auVar18 = _vaddbc(in_vf0,auVar7);
        _vmove(auVar11);
        uStack_1d0 = auVar5._0_4_;
        uStack_1cc = auVar5._4_4_;
        uStack_1c8 = auVar5._8_4_;
        uStack_1c4 = auVar5._12_4_;
        _sqc2(auVar9);
        auVar8 = _vaddbc(in_vf0,auVar6);
        _sqc2(auVar11);
        auVar6 = _vmul(auVar18,auVar18);
        auVar7 = _lqc2(auStack_60);
        auVar17 = _vadd(in_vf0,in_vf0);
        auVar5 = _sqc2(auVar8);
        *(undefined1 (*) [16])(iVar3 + 0xf0) = auVar5;
        _vaddabc(auVar6,auVar6);
        auVar5 = _vmaddbc(auVar7,auVar6);
        *(undefined4 *)(iVar3 + 0xe0) = uStack_1d0;
        *(undefined4 *)(iVar3 + 0xe4) = uStack_1cc;
        *(undefined4 *)(iVar3 + 0xe8) = uStack_1c8;
        *(undefined4 *)(iVar3 + 0xec) = uStack_1c4;
        auVar6 = _vmove(auVar18);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar5);
        uVar21 = _vwaitq();
        auVar9 = _vmulq(auVar6,uVar21);
        auStack_1c0 = _sqc2(auVar8);
        auVar5 = _qmtc2(0x3f800000);
        auVar7 = _vmulbc(auVar9,auVar9);
        _sqc2(auVar8);
        auVar20 = _qmtc2(0x3e4ccccd);
        auStack_1e0 = _sqc2(auVar18);
        auVar6 = _vmul(auVar9,auVar9);
        auStack_1a0 = _sqc2(auVar17);
        auVar8 = _vsub(in_vf0,auVar6);
        auStack_1b0 = _sqc2(auVar17);
        _sqc2(auVar18);
        _sqc2(auVar17);
        _lqc2(auStack_80);
        _lqc2(auStack_70);
        auVar16 = _vaddbc(in_vf0,auVar5);
        auVar5 = _sqc2(auVar18);
        *(undefined1 (*) [16])(iVar3 + 0xd0) = auVar5;
        auVar6 = _vmulbc(auVar9,auVar9);
        auVar5 = _sqc2(auVar17);
        *(undefined1 (*) [16])(iVar3 + 0x100) = auVar5;
        _vaddbc(in_vf0,auVar7);
        _vaddbc(in_vf0,auVar6);
        auVar14 = _vaddbc(auVar8,auVar16);
        auVar5 = _vmulbc(auVar9,auVar9);
        auVar19 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
        auVar10 = _vaddbc(in_vf0,auVar5);
        _lqc2(auStack_c0);
        _lqc2(auStack_d0);
        auVar5 = _qmtc2(*(float *)(iVar1 + 0xc) * 0.017453292);
        _lqc2(auStack_b0);
        auVar5 = _vaddbc(in_vf0,auVar5);
        _ctc2(0x3fc90fdb);
        _vnop();
        auVar5 = _vsubi(auVar5,in_vuI);
        auVar5 = _vabs(auVar5);
        _ctc2(0xbe22f983);
        _vnop();
        _vmulai(auVar5,in_vuI);
        _ctc2(0x4b400000);
        _vnop();
        _vmsubai(auVar13,in_vuI);
        _vmaddai(auVar13,in_vuI);
        _ctc2(0xbe22f983);
        _vnop();
        _vmsubai(auVar5,in_vuI);
        _ctc2(0x3f000000);
        _vnop();
        auVar5 = _vmsubi(auVar13,in_vuI);
        auVar5 = _vabs(auVar5);
        _ctc2(0x3e800000);
        _vnop();
        auVar5 = _vsubi(auVar5,in_vuI);
        auVar7 = _vmul(auVar5,auVar5);
        _ctc2(0xc2992661);
        _vnop();
        auVar6 = _vmuli(auVar5,in_vuI);
        auVar12 = _vmul(auVar7,auVar7);
        _ctc2(0x42a33457);
        _vnop();
        auVar13 = _vmuli(auVar5,in_vuI);
        _ctc2(0x421ed7b7);
        _vnop();
        auVar11 = _vmuli(auVar5,in_vuI);
        auVar8 = _vmul(auVar12,auVar12);
        auVar6 = _vmul(auVar6,auVar7);
        _ctc2(0xc2255de0);
        _vnop();
        auVar15 = _vmuli(auVar5,in_vuI);
        _vmula(auVar15,auVar7);
        _vmadda(auVar6,auVar12);
        _ctc2(0x40c90fda);
        _vmadda(auVar13,auVar12);
        _vmaddai(auVar5,in_vuI);
        auVar5 = _vmadd(auVar11,auVar8);
        auVar5 = _vsubbc(auVar16,auVar5);
        auVar5 = _vaddbc(in_vf0,auVar5);
        auVar7 = _vmulbc(auVar9,auVar5);
        auVar10 = _vmulbc(auVar10,auVar5);
        auVar13 = _vmulbc(auVar14,auVar5);
        auVar6 = _vsubbc(auVar10,auVar7);
        auVar5 = _vsubbc(auVar16,auVar13);
        auVar8 = _vaddbc(in_vf0,auVar6);
        auVar9 = _vaddbc(in_vf0,auVar5);
        auVar6 = _vaddbc(auVar10,auVar7);
        auVar5 = _vsubbc(auVar16,auVar13);
        _vmove(auVar9);
        _vmove(auVar8);
        auVar11 = _vaddbc(in_vf0,auVar6);
        auVar12 = _vaddbc(in_vf0,auVar5);
        auVar5 = _vaddbc(auVar10,auVar7);
        auVar6 = _vaddbc(auVar10,auVar7);
        _vmove(auVar12);
        _sqc2(auVar8);
        auVar8 = _vaddbc(in_vf0,auVar5);
        auVar14 = _vaddbc(in_vf0,auVar6);
        _sqc2(auVar9);
        auVar5 = _vsubbc(auVar10,auVar7);
        _vmove(auVar11);
        auVar9 = _vaddbc(in_vf0,auVar5);
        _sqc2(auVar12);
        _sqc2(auVar11);
        auVar5 = _vsubbc(auVar10,auVar7);
        _vmove(auVar14);
        auVar6 = _vsubbc(auVar16,auVar13);
        _sqc2(auVar9);
        auVar5 = _vaddbc(in_vf0,auVar5);
        _sqc2(auVar14);
        _sqc2(auVar8);
        _vmove(auVar5);
        _sqc2(auVar5);
        auVar5 = _vaddbc(in_vf0,auVar6);
        _sqc2(auVar5);
        _sqc2(auVar17);
        _sqc2(auVar9);
        _sqc2(auVar8);
        _sqc2(auVar5);
        _sqc2(auVar17);
        auStack_180 = _sqc2(auVar8);
        auStack_170 = _sqc2(auVar5);
        auStack_160 = _sqc2(auVar17);
        auStack_90 = _sqc2(auVar17);
        auStack_190 = _sqc2(auVar9);
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xe0));
        auVar6 = _lqc2(auStack_180);
        auVar5 = _lqc2(auStack_170);
        _vmulabc(auVar9,auVar18);
        _vmaddabc(auVar6,auVar18);
        auVar12 = _vmaddbc(auVar5,auVar18);
        _vmulabc(auVar9,auVar7);
        _vmaddabc(auVar6,auVar7);
        auVar13 = _vmaddbc(auVar5,auVar7);
        auStack_d0 = _sqc2(auVar12);
        auStack_c0 = _sqc2(auVar13);
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x100));
        auVar8 = _lqc2(auStack_160);
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xf0));
        auVar6 = _lqc2(auStack_180);
        auVar5 = _lqc2(auStack_170);
        _vmulabc(auVar9,auVar7);
        _vmaddabc(auVar6,auVar7);
        auVar11 = _vmaddbc(auVar5,auVar7);
        _vmulabc(auVar9,auVar10);
        _vmaddabc(auVar6,auVar10);
        _vmaddabc(auVar5,auVar10);
        auVar7 = _vmaddbc(auVar8,in_vf0);
        auStack_110 = _sqc2(auVar12);
        auStack_b0 = _sqc2(auVar11);
        auStack_a0 = _sqc2(auVar7);
        auStack_100 = _sqc2(auVar13);
        auStack_f0 = _sqc2(auVar11);
        auStack_e0 = _sqc2(auVar7);
        auStack_150 = _sqc2(auVar12);
        auStack_140 = _sqc2(auVar13);
        auStack_130 = _sqc2(auVar11);
        auStack_120 = _sqc2(auVar7);
        auStack_220 = _sqc2(auVar12);
        auStack_210 = _sqc2(auVar13);
        auStack_200 = _sqc2(auVar11);
        auVar6 = _qmtc2(*(undefined4 *)(iVar3 + 0x2e8));
        auVar5 = _sqc2(auVar19);
        *(undefined1 (*) [16])(iVar3 + 0x100) = auVar5;
        auVar5 = _vaddbc(auVar19,auVar6);
        auVar5 = _vsubbc(auVar5,auVar20);
        auStack_1f0 = _sqc2(auVar7);
        auVar6 = _vaddbc(in_vf0,auVar5);
        auVar5 = _sqc2(auVar12);
        *(undefined1 (*) [16])(iVar3 + 0xd0) = auVar5;
        auVar5 = _sqc2(auVar13);
        *(undefined1 (*) [16])(iVar3 + 0xe0) = auVar5;
        auVar5 = _sqc2(auVar11);
        *(undefined1 (*) [16])(iVar3 + 0xf0) = auVar5;
        auVar5 = _sqc2(auVar6);
        *(undefined1 (*) [16])(iVar3 + 0x100) = auVar5;
        FUN_001a6be0(*(undefined4 *)(iVar3 + 0x330),0x40c90fda,0x421ed7b7,0x42a33457,
                     0xffffffffc2255de0,0xffffffffc2992661,0x3fc90fdb,0x4b400000);
        (**(code **)(*(int *)(iVar3 + 0x10) + 0xa4))
                  (auStack_220,iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0xa0));
        *(int *)(iVar3 + 0x110) = auStack_220._0_4_;
        *(int *)(iVar3 + 0x114) = auStack_220._4_4_;
        *(undefined4 *)(iVar3 + 0x118) = auStack_220._8_4_;
        *(undefined4 *)(iVar3 + 0x11c) = auStack_220._12_4_;
        *(undefined4 *)(iVar3 + 0x120) = auStack_210._0_4_;
        *(undefined4 *)(iVar3 + 0x124) = auStack_210._4_4_;
        *(undefined4 *)(iVar3 + 0x128) = auStack_210._8_4_;
        *(undefined4 *)(iVar3 + 300) = auStack_210._12_4_;
        *(undefined4 *)(iVar3 + 0x130) = auStack_200._0_4_;
        *(undefined4 *)(iVar3 + 0x134) = auStack_200._4_4_;
        *(undefined4 *)(iVar3 + 0x138) = auStack_200._8_4_;
        *(undefined4 *)(iVar3 + 0x13c) = auStack_200._12_4_;
        *(int *)(iVar3 + 0x140) = auStack_1f0._0_4_;
        *(int *)(iVar3 + 0x144) = auStack_1f0._4_4_;
        *(undefined4 *)(iVar3 + 0x148) = auStack_1f0._8_4_;
        *(undefined4 *)(iVar3 + 0x14c) = auStack_1f0._12_4_;
        FUN_0012cba0(DAT_0040f4d0,*(undefined8 *)(iVar3 + 0xa0),iVar3 + 0x2d0,
                     *(undefined4 *)(iVar3 + 0x390));
      }
    }
  }
  return;
}


// ==== FUN_00133ba0 @ 00133ba0 ====

void FUN_00133ba0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  uVar5 = FUN_00135b60();
  iVar7 = (int)param_1;
  iVar6 = 0;
  iVar8 = (int)uVar5;
  if (*(int *)(iVar7 + 0x350) != 0) {
    param_2 = 1;
  }
  if (0 < *(int *)(iVar8 + 0x24)) {
    iVar9 = 0x10000;
    do {
      pbVar4 = (byte *)FUN_00136ba8(param_1,uVar5,iVar6);
      if (*pbVar4 - 5 < 3) {
        *(undefined4 *)(pbVar4 + 8) =
             *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x330) + 0x54) + 0x50);
        *(undefined4 *)(pbVar4 + 0xc) =
             *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x330) + 0x50) + 0x30);
        uVar1 = *(undefined4 *)(iVar8 + 0x54);
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0x80;
        pbVar4[0x17] = 0x3f;
        *(undefined4 *)(pbVar4 + 0x10) = uVar1;
        pbVar4[0x18] = (byte)*(undefined4 *)(iVar8 + 0x5c);
      }
      iVar6 = iVar9 >> 0x10;
      iVar9 = iVar9 + 0x10000;
    } while (iVar6 < *(int *)(iVar8 + 0x24));
  }
  FUN_00137908(param_1);
  FUN_00136bd0(param_1,uVar5,*(undefined1 *)(iVar7 + 200),param_2 != 0,0);
  iVar6 = *(int *)(iVar7 + 0x25c);
  if (iVar6 != 0) {
    if (*(char *)(iVar7 + 0x3ac) == '\0') {
      cVar3 = *(char *)(iVar7 + 0x3ad);
      goto LAB_00133e0c;
    }
    if (*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x19) * 4 + 0xc) == 0) {
      cVar3 = *(char *)(iVar7 + 0x3ad);
      goto LAB_00133e0c;
    }
    uVar2 = *(uint *)(iVar7 + 0x38c);
    if (1 < uVar2) {
      cVar3 = *(char *)(iVar7 + 0x3ad);
      goto LAB_00133e0c;
    }
    if (uVar2 == 0) {
      iVar6 = *(int *)(iVar7 + 0x360);
      FUN_001af738(0,DAT_0040f4c0 + 0x14,*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x38)
                   ,*(undefined4 *)(iVar6 + 0x40),iVar7 + 0x254,iVar7 + 0x110,0,0);
      cVar3 = *(char *)(iVar7 + 0x3ad);
      goto LAB_00133e0c;
    }
    if (uVar2 != 1) {
      cVar3 = *(char *)(iVar7 + 0x3ad);
      goto LAB_00133e0c;
    }
    fVar11 = *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(iVar7 + 0x300);
    if (1.5 < fVar11) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = 1.0 - fVar11 * 0.6666667;
      fVar10 = fVar11 * fVar11 * 10.0;
      fVar11 = (fVar10 - (float)(int)fVar10) * fVar11;
    }
    *(float *)(iVar7 + 600) = fVar11;
    if (0.01 < fVar11) {
      iVar6 = *(int *)(iVar7 + 0x360);
      FUN_001af738(0,DAT_0040f4c0 + 0x14,*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x38)
                   ,*(undefined4 *)(iVar6 + 0x40),iVar7 + 0x254,iVar7 + 0x110,0,0);
    }
  }
  cVar3 = *(char *)(iVar7 + 0x3ad);
LAB_00133e0c:
  iVar6 = *(int *)(iVar7 + 0x2a4);
  if (cVar3 != '\0') {
    FUN_00133e60(param_1,*(undefined1 *)(iVar7 + 200));
  }
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x108) != '\0')) {
    FUN_00137b88(param_1);
  }
  return;
}


// ==== FUN_00133e60 @ 00133e60 ====

void FUN_00133e60(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x25c);
  iVar3 = 7;
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
    if (iVar1 != 0) {
      FUN_00142f80(iVar1,param_2,param_1 + 0x2d0);
    }
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}


// ==== FUN_00133ed8 @ 00133ed8 ====

undefined4 FUN_00133ed8(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)param_1;
  piVar1 = (int *)((int)puVar2 + 0x25c);
  iVar3 = 7;
  do {
    iVar3 = iVar3 + -1;
    if (*piVar1 != 0) {
      FUN_00142f50();
    }
    piVar1 = piVar1 + 1;
  } while (-1 < iVar3);
  FUN_001394b8(DAT_0040f514,param_1);
  FUN_00133f80(param_1);
  FUN_001a5ee8(*(undefined4 *)(puVar2 + 0x66));
  FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,1);
  *puVar2 = 0;
  *(undefined4 *)((int)puVar2 + 0x38c) = 4;
  *(undefined4 *)(puVar2 + 0x69) = 0;
  return 1;
}


// ==== FUN_00133f80 @ 00133f80 ====

void FUN_00133f80(int param_1)

{
  FUN_0015c100(param_1 + 0x280);
  return;
}


// ==== FUN_00133fa0 @ 00133fa0 ====

void FUN_00133fa0(void)

{
  return;
}


// ==== FUN_00133fa8 @ 00133fa8 ====

void FUN_00133fa8(float param_1,undefined8 param_2,undefined8 param_3,uint param_4,char param_5,
                 undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 in_zero_qw [16];
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 extraout_v0_udw;
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong in_v1_udw;
  uint uVar9;
  undefined8 in_a0_udw;
  undefined1 in_a1_qw [16];
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_130 [12];
  uint uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined1 uStack_e0;
  char cStack_d0;
  char acStack_cf [15];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  uStack_bc = (undefined4)((ulong)param_3 >> 0x20);
  uStack_c0 = (undefined4)param_3;
  iVar5 = (int)param_2;
  iVar11 = (int)param_5;
  auVar12 = _por(in_zero_qw,in_a1_qw);
  param_4 = param_4 & 0xff;
  bVar2 = false;
  fVar15 = 0.0;
  iVar10 = *(int *)(iVar5 + 0x26c);
  *(undefined1 *)(iVar5 + 0x3b3) = 1;
  if (iVar10 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(iVar10 + (uint)*(byte *)(iVar10 + 0x19) * 4 + 0xc) != 0;
  }
  iVar10 = (int)param_6;
  uStack_b8 = in_a2_udw;
  uStack_b4 = in_register_0000006c;
  if ((bVar1) &&
     ((param_4 == 0xff ||
      ((param_4 == 4 &&
       ((lVar6 = FUN_00138320(*(undefined4 *)(iVar5 + 0x328)), lVar6 == 0x28 ||
        (lVar6 = FUN_00138320(*(undefined4 *)(iVar5 + 0x328)), lVar6 == 0x2a)))))))) {
    lVar6 = FUN_00138320(*(undefined4 *)(iVar5 + 0x328));
    if (lVar6 == 0x2a) {
      fVar15 = *(float *)(iVar5 + 0x31c);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = in_v1_udw;
      param_1 = fVar15 + param_1;
      iVar11 = *(int *)(iVar5 + 0x26c);
      uVar9 = CONCAT31(0,*(byte *)(iVar11 + 0x1a));
      *(float *)(iVar5 + 0x31c) = param_1;
      auVar16._0_8_ = (long)(int)((param_1 / 2400.0) * (float)uVar9);
      auVar16._8_8_ = extraout_v0_udw;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = uVar9;
      auVar7._8_8_ = in_a0_udw;
      auVar7 = _pminw(auVar7,auVar16);
      auVar7 = _pextlw(0,auVar7._0_8_);
      auVar7 = _pmaxw(auVar17 << 0x40,auVar7);
      auVar7 = _pextlw(0,auVar7._0_8_);
      uVar8 = auVar7._0_8_;
      if ((long)uVar8 < (long)(ulong)uVar9) {
        if ((long)(int)((fVar15 / 2400.0) * (float)uVar9) != uVar8) {
          *(char *)(iVar11 + 0x19) = auVar7[0];
          if (2 < (uVar8 & 0xff)) {
            *(undefined1 *)(iVar11 + 0x19) = 0;
          }
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          auVar18 = _vsub(in_vf0,in_vf0);
          auVar7 = _vaddbc(in_vf0,in_vf0);
          auVar17 = _vaddbc(in_vf0,in_vf0);
          auVar16 = _vaddbc(in_vf0,in_vf0);
          _auStack_130 = _sqc2(auVar7);
          auStack_120 = _sqc2(auVar17);
          auStack_110 = _sqc2(auVar16);
          _sqc2(auVar18);
          auStack_100 = auVar12;
          FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_130,0x7e048c4b7c69a424,1);
          auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xf0));
          auVar17 = _vaddbc(in_vf0,in_vf0);
          auVar12._4_4_ = uStack_bc;
          auVar12._0_4_ = uStack_c0;
          auVar12._8_4_ = uStack_b8;
          auVar12._12_4_ = uStack_b4;
          auVar12 = _lqc2(auVar12);
          auVar12 = _vmul(auVar12,auVar7);
          _vaddabc(auVar12,auVar12);
          auVar12 = _vmaddbc(auVar17,auVar12);
          auVar12 = _qmfc2(auVar12._0_4_);
          uStack_f0 = 5;
          uStack_ec = 0x29;
          uStack_e0 = auVar12._0_4_ < 0.0;
          uStack_e8 = 0;
          uStack_e4 = param_4;
          FUN_001a6330(*(undefined4 *)(iVar5 + 0x330),&uStack_f0);
        }
      }
      else {
        *(char *)(iVar11 + 0x19) = (char)(uVar9 - 1);
        if (2 < (uVar9 - 1 & 0xff)) {
          *(undefined1 *)(iVar11 + 0x19) = 0;
        }
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xf0));
        auVar7 = _vaddbc(in_vf0,in_vf0);
        auVar18._4_4_ = uStack_bc;
        auVar18._0_4_ = uStack_c0;
        auVar18._8_4_ = uStack_b8;
        auVar18._12_4_ = uStack_b4;
        auVar17 = _lqc2(auVar18);
        auVar12 = _vmul(auVar17,auVar12);
        _vaddabc(auVar12,auVar12);
        auVar12 = _vmaddbc(auVar7,auVar12);
        auVar12 = _qmfc2(auVar12._0_4_);
        auStack_120[0] = auVar12._0_4_ < 0.0;
        auStack_130 = ZEXT812(0x2900000005);
        uStack_124 = param_4;
        FUN_001a6330(*(undefined4 *)(iVar5 + 0x330),auStack_130);
        FUN_00137490(0,0,iVar5);
        iVar5 = *(int *)(iVar5 + 0x32c);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x80) == 1)) {
          FUN_0013d430(iVar5,0x29);
        }
      }
    }
    FUN_00135b28(iVar10,2);
    return;
  }
  FUN_00135e68(iVar5,param_6);
  if (*(int *)(iVar5 + 0x38c) == 0) {
    if (*(int *)(*(int *)(iVar5 + 0x32c) + 0x80) == 1) {
      lVar6 = FUN_0018ddd8(*(int *)(iVar5 + 0x32c) + 0xc94);
      if (lVar6 == 0) {
        fVar14 = *(float *)(iVar5 + 0x2f8);
        lVar6 = FUN_00135550(iVar10);
        if ((lVar6 == 0) || (iVar4 = FUN_00135550(iVar10), *(char *)(iVar4 + 0x3d) == '\0')) {
          FUN_00135b28(iVar10,2);
        }
        else {
          auVar7 = _por(in_zero_qw,auVar12);
          fVar15 = (float)FUN_00142b90(*(undefined4 *)(*(int *)(iVar5 + 0x328) + 0x3c),iVar11,
                                       auVar7._0_8_,CONCAT44(uStack_bc,uStack_c0),iVar5 + 0x70,
                                       param_4,&cStack_d0,acStack_cf);
          if (*(char *)(iVar5 + 0x3b8) != '\0') {
            fVar15 = 0.0;
            acStack_cf[0] = '\0';
            cStack_d0 = '\0';
          }
          if (acStack_cf[0] != '\0') {
            auVar7 = _por(in_zero_qw,auVar12);
            cStack_d0 = FUN_00137568(iVar5,auVar7._0_8_);
          }
          *(uint *)(iVar5 + 0x394) = param_4;
          lVar6 = FUN_00138320(*(undefined4 *)(iVar5 + 0x328));
          if (lVar6 == 0x26) {
            if (66.0 < fVar14) {
              if (fVar14 - fVar15 <= 66.0) {
                bVar2 = true;
                *(undefined1 *)(*(int *)(iVar5 + 0x32c) + 0x30) = 1;
                goto LAB_001343e4;
              }
              iVar4 = *(int *)(iVar10 + 0xc4);
            }
            else {
              iVar4 = *(int *)(iVar10 + 0xc4);
            }
          }
          else {
LAB_001343e4:
            iVar4 = *(int *)(iVar10 + 0xc4);
          }
          if (((iVar4 == 2) && (1.0 <= *(float *)(DAT_0040f4d0 + 0x514))) ||
             (iVar4 = FUN_0015d248(DAT_0040f4e0,iVar11,0), fVar14 = fVar14 - fVar15,
             *(int *)(iVar4 + 0x90) == 5)) {
            fVar14 = 0.0;
            FUN_00135b28(iVar10,4);
          }
          if (cStack_d0 != '\0') {
            if (*(int *)(iVar10 + 0xc4) == 2) {
              FUN_00121ef0(DAT_0040f4dc,0x20);
            }
            fVar14 = 0.0;
            FUN_00135b28(iVar10,4);
          }
          if (fVar15 == 0.0) {
            FUN_00135b28(iVar10,2);
          }
          else if (fVar14 <= 0.0) {
            FUN_00135b28(iVar10,4);
          }
          else {
            FUN_00135b28(iVar10,3);
          }
        }
        uVar13 = 0;
        if (fVar14 <= 0.0) {
          *(undefined4 *)(iVar5 + 0x2f8) = 0;
          if (*(int *)(iVar10 + 0x3a4) == 0) {
            FUN_00121f00(DAT_0040f4dc);
          }
          iVar10 = *(int *)(iVar5 + 0x32c);
          if (iVar11 == -1) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(iVar11 * 4 + DAT_00414d54);
          }
          FUN_0011ca28(fVar15,DAT_0040f508,param_2,uVar13,param_4,CONCAT44(uStack_bc,uStack_c0),
                       param_6);
          if (*(int *)(iVar5 + 0x32c) != 0) {
            if (*(int *)(*(int *)(iVar5 + 0x32c) + 0x4e8) == 1) {
              FUN_00181f48(0,0x3f800000,iVar10 + 0xc80,0,0x1e);
            }
            else {
              iVar5 = FUN_001412c0();
              if ((*(int *)(iVar5 + 0x44) < 6) && (1 < *(int *)(iVar5 + 0x44))) {
                FUN_00181f48(0,0x3f800000,iVar10 + 0xc80,0,0x21);
              }
              else {
                FUN_00181f48(0,0x3f800000,iVar10 + 0xc80,0,0x20);
              }
            }
          }
        }
        else {
          auVar12 = _por(in_zero_qw,auVar12);
          iVar10 = *(int *)(*(int *)(iVar5 + 0x32c) + 0x84);
          (**(code **)(iVar10 + 0x24))
                    (fVar15,fVar15,*(int *)(iVar5 + 0x32c) + (int)*(short *)(iVar10 + 0x20),
                     auVar12._0_8_);
          *(float *)(iVar5 + 0x2f8) = fVar14;
          if (((param_4 - 7 < 2) || (param_4 == 10)) || (param_4 == 9)) {
            FUN_00181f48(0,0x3f800000,*(int *)(iVar5 + 0x32c) + 0xc80,0,0x1f);
          }
          else {
            FUN_00181f48(uVar13,0x3f800000,*(int *)(iVar5 + 0x32c) + 0xc80,0,0x1e);
          }
          lVar6 = FUN_00138320(*(undefined4 *)(iVar5 + 0x328));
          if (lVar6 != 0x28) {
            auStack_130._4_4_ = 0x29;
            if (bVar2) {
              auStack_130._4_4_ = 0x2a;
            }
            auStack_130._0_4_ = 5;
            auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xf0));
            auVar7 = _vaddbc(in_vf0,in_vf0);
            auVar3._4_4_ = uStack_bc;
            auVar3._0_4_ = uStack_c0;
            auVar3._8_4_ = uStack_b8;
            auVar3._12_4_ = uStack_b4;
            auVar17 = _lqc2(auVar3);
            auVar12 = _vmul(auVar17,auVar12);
            _vaddabc(auVar12,auVar12);
            auVar12 = _vmaddbc(auVar7,auVar12);
            auVar12 = _qmfc2(auVar12._0_4_);
            auStack_120[0] = auVar12._0_4_ < 0.0;
            auStack_130._8_4_ = fVar15 / 100.0;
            uStack_124 = param_4;
            FUN_001a6330(*(undefined4 *)(iVar5 + 0x330),auStack_130);
          }
        }
        goto LAB_0013477c;
      }
      iVar10 = *(int *)(iVar5 + 0x32c);
    }
    else {
      iVar10 = *(int *)(iVar5 + 0x32c);
    }
  }
  else {
    iVar10 = *(int *)(iVar5 + 0x32c);
  }
  if (*(int *)(iVar10 + 0x80) == 2) {
    auVar12 = _por(in_zero_qw,auVar12);
    (**(code **)(*(int *)(iVar10 + 0x84) + 0x24))
              (0,0,iVar10 + *(short *)(*(int *)(iVar10 + 0x84) + 0x20),auVar12._0_8_);
  }
LAB_0013477c:
  *(undefined4 *)(DAT_0040f4dc + 4) = 0;
  return;
}


// ==== FUN_001347b8 @ 001347b8 ====

void FUN_001347b8(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  undefined *puVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar6 = _por(in_zero_qw,in_a1_qw);
  auVar9 = _por(in_zero_qw,in_a2_qw);
  iVar8 = (int)param_3;
  uVar1 = FUN_0025d8e0(*(undefined4 *)(iVar8 + 0xb4));
  auVar10 = _qmtc2(uVar1);
  iVar7 = (int)param_2;
  auVar10 = _vmul(auVar10,auVar10);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar11,auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar10);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  uVar1 = _vwaitq();
  auVar10 = _vmulq(auVar10,uVar1);
  auVar10 = _qmfc2(auVar10._0_4_);
  if (*(int *)(iVar7 + 0x32c) == 0) {
    return;
  }
  if (param_1 < DAT_003bce50) {
    return;
  }
  if (auVar10._0_4_ < DAT_003bce54) {
    return;
  }
  FUN_00135e28(param_2,*(undefined4 *)(iVar8 + 0x124));
  iVar4 = *(int *)(iVar7 + 0x32c);
  if (*(int *)(iVar7 + 0x38c) == 0) {
    iVar2 = *(int *)(iVar4 + 0x80);
    if (iVar2 == 1) {
      lVar3 = FUN_0018ddd8(iVar4 + 0xc94);
      if (lVar3 == 0) {
        iVar7 = *(int *)(iVar8 + 0x124);
        if ((iVar7 == 3) || (iVar7 == 2)) {
          puVar5 = &DAT_00410000;
          FUN_00121ef0(DAT_0040f4dc,2);
          FUN_00121f00(*(undefined4 *)(puVar5 + -0xb24));
          iVar7 = *(int *)(iVar8 + 0x124);
        }
        if (iVar7 == 1) {
          FUN_00121ef0(DAT_0040f4dc,0);
          FUN_00121f00(DAT_0040f4dc);
        }
        auVar10 = _por(in_zero_qw,auVar9);
        FUN_0011cda8(param_1,DAT_0040f508,param_2,param_3,0,auVar10._0_8_);
        goto LAB_00134944;
      }
      iVar4 = *(int *)(iVar7 + 0x32c);
      goto LAB_0013491c;
    }
  }
  else {
LAB_0013491c:
    iVar2 = *(int *)(iVar4 + 0x80);
  }
  if (iVar2 == 2) {
    auVar10 = _por(in_zero_qw,auVar6);
    auVar6 = _por(in_zero_qw,auVar9);
    FUN_00141248(param_1,iVar4,auVar10._0_8_,auVar6._0_8_,param_3);
  }
LAB_00134944:
  *(undefined4 *)(DAT_0040f4dc + 4) = 0;
  return;
}


// ==== FUN_00134970 @ 00134970 ====

void FUN_00134970(void)

{
  FUN_00126098();
  return;
}


// ==== FUN_00134990 @ 00134990 ====

void FUN_00134990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uStack_60 = (undefined4)param_3;
  uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
  iVar6 = (int)param_1;
  if (*(int *)(iVar6 + 0x3a4) == 0) {
    return;
  }
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xf0));
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _qmtc2(uStack_60);
  auVar9 = _vmul(auVar9,auVar11);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar10,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  if (auVar9._0_4_ < 0.0) {
    iVar1 = *(int *)(iVar6 + 0x26c);
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(iVar1 + (uint)*(byte *)(iVar1 + 0x19) * 4 + 0xc) != 0;
    }
    if (bVar2) {
      return;
    }
    uStack_70 = 1;
    if (*(int *)(iVar6 + 0x39c) == 0x24) {
      fVar8 = 100.0;
      cVar4 = *(char *)(iVar6 + 0x3b8);
      goto LAB_00134aa0;
    }
    if (*(int *)(iVar6 + 0x39c) != 0x26) {
      fVar8 = 50.0;
      cVar4 = *(char *)(iVar6 + 0x3b8);
      goto LAB_00134aa0;
    }
    fVar7 = *(float *)(iVar6 + 0x2f8);
    fVar8 = 50.0;
    uVar3 = 1;
    if (66.0 < fVar7) {
      cVar4 = *(char *)(iVar6 + 0x3b8);
      goto LAB_00134aa0;
    }
  }
  else {
    fVar7 = 100.0;
    uVar3 = 0;
  }
  uStack_70 = uVar3;
  cVar4 = *(char *)(iVar6 + 0x3b8);
  fVar8 = fVar7;
LAB_00134aa0:
  fVar7 = *(float *)(iVar6 + 0x2f8);
  if (cVar4 == '\0') {
    *(float *)(iVar6 + 0x2f8) = fVar7 - fVar8;
    fVar7 = *(float *)(iVar6 + 0x2f8);
  }
  if (fVar7 <= 0.0) {
    *(undefined4 *)(iVar6 + 0x2f8) = 0;
    if (*(int *)((int)param_4 + 0x3a4) == 0) {
      FUN_00121f00(DAT_0040f4dc);
      iVar1 = *(int *)(iVar6 + 0xc4);
    }
    else {
      iVar1 = *(int *)(iVar6 + 0xc4);
    }
    if (iVar1 != 2) {
      iVar6 = *(int *)(iVar6 + 0x32c);
      lVar5 = FUN_00185c58(iVar6 + 0x6f0);
      iVar6 = iVar6 + 0xc80;
      if (lVar5 == 0) {
        FUN_00181f48(0,0x3f800000,iVar6,0,0x20);
      }
      else {
        FUN_00181f48(0,0x3f800000,iVar6,0,0x1e);
      }
      FUN_0011ca28(fVar8,DAT_0040f508,param_1,*DAT_00414d54,1,uStack_60,param_4);
    }
  }
  else {
    uStack_80 = 5;
    uStack_7c = 0x2b;
    FUN_001a6330(*(undefined4 *)(iVar6 + 0x330),&uStack_80);
  }
  return;
}


// ==== FUN_00134bb8 @ 00134bb8 ====

void FUN_00134bb8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  long lVar1;
  int iVar2;
  
  if ((((DAT_003bce58 <= param_1) && (*(int *)((int)param_2 + 0x38c) == 0)) &&
      (iVar2 = *(int *)((int)param_2 + 0x32c), *(int *)(iVar2 + 0x80) == 1)) &&
     (lVar1 = FUN_0018ddd8(iVar2 + 0xc94), lVar1 == 0)) {
    FUN_00135e28(param_2,*(undefined4 *)(param_5 + 0x3a0));
    iVar2 = *(int *)(param_5 + 0x3a0);
    if ((iVar2 == 3) || (iVar2 == 2)) {
      FUN_00121ef0(DAT_0040f4dc,2);
      FUN_00121f00(DAT_0040f4dc);
      iVar2 = *(int *)(param_5 + 0x3a0);
    }
    if (iVar2 == 1) {
      FUN_00121ef0(DAT_0040f4dc,0);
      FUN_00121f00(DAT_0040f4dc);
    }
    *(undefined4 *)(DAT_0040f4dc + 4) = 0;
  }
  return;
}


// ==== FUN_00134c98 @ 00134c98 ====

void FUN_00134c98(float param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  undefined1 in_zero_qw [16];
  long lVar3;
  int iVar4;
  undefined8 in_a1_udw;
  undefined1 in_a2_qw [16];
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = param_4;
  auVar6 = _por(in_zero_qw,auVar6);
  auVar7 = _por(in_zero_qw,in_a2_qw);
  FUN_00135e28(param_3,(int)param_6);
  iVar5 = (int)param_3;
  if (*(int *)(iVar5 + 0x38c) != 0) {
    *(undefined1 *)(iVar5 + 0x3b3) = 1;
    goto LAB_00134fa4;
  }
  iVar4 = *(int *)(iVar5 + 0x26c);
  bVar2 = true;
  fVar9 = *(float *)(iVar5 + 0x2f8);
  if (iVar4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(iVar4 + (uint)*(byte *)(iVar4 + 0x19) * 4 + 0xc) != 0;
  }
  if (bVar1) {
    if (param_7 == 3) {
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
      auVar11 = _qmtc2(0);
      auVar12._8_4_ = in_a3_udw;
      auVar12._0_8_ = param_5;
      auVar12._12_4_ = in_register_0000007c;
      auVar12 = _lqc2(auVar12);
      _vsub(auVar12,auVar10);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vmul(auVar11,auVar11);
      auVar15 = _vmove(auVar10);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar10,auVar12);
      auVar12 = _qmfc2(auVar12._0_4_);
      if (auVar12._0_4_ < 2.3283064e-10) {
        iVar4 = *(int *)(iVar5 + 0x32c);
      }
      else {
        auVar12 = _vmul(auVar11,auVar11);
        _vaddabc(auVar12,auVar12);
        auVar10 = _vmaddbc(auVar15,auVar12);
        auVar12 = _qmfc2(auVar10._0_4_);
        if (*(float *)(iVar5 + 0x318) * *(float *)(iVar5 + 0x318) < auVar12._0_4_) {
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x90));
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar10);
          auVar12 = _vaddbc(in_vf0,in_vf0);
          uVar16 = _vwaitq();
          auVar11 = _vmulq(auVar11,uVar16);
          _vmulq(auVar12,uVar16);
          auVar10 = _vmul(auVar13,auVar13);
          auVar12 = _vmove(auVar11);
          _vaddabc(auVar10,auVar10);
          auVar10 = _vmaddbc(auVar15,auVar10);
          auVar14 = _vaddbc(in_vf0,in_vf0);
          auVar11 = _vmove(auVar13);
          auVar15 = _vsubbc(in_vf0,in_vf0);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar10);
          auVar13 = _vaddbc(in_vf0,in_vf0);
          uVar16 = _vwaitq();
          auVar10 = _vmulq(auVar11,uVar16);
          _vmulq(auVar13,uVar16);
          auVar12 = _vmul(auVar12,auVar10);
          _vaddabc(auVar12,auVar12);
          auVar12 = _vmaddbc(auVar14,auVar12);
          auVar12 = _vmax(auVar12,auVar15);
          auVar12 = _vminibc(auVar12,in_vf0);
          auVar12 = _qmfc2(auVar12._0_4_);
          fVar8 = (float)acosf(auVar12._0_4_);
          if (fVar8 * 57.29578 < 20.0) {
            bVar2 = false;
          }
          goto LAB_00134e84;
        }
        iVar4 = *(int *)(iVar5 + 0x32c);
      }
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x32c);
    }
  }
  else {
LAB_00134e84:
    iVar4 = *(int *)(iVar5 + 0x32c);
  }
  if ((*(int *)(iVar4 + 0x80) == 1) && (lVar3 = FUN_0018ddd8(iVar4 + 0xc94), lVar3 != 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    fVar9 = fVar9 - param_1;
  }
  if (0.0 < fVar9) {
    *(float *)(iVar5 + 0x2f8) = fVar9;
    FUN_00135dd8(0x3f800000,param_3,9);
    goto LAB_00134fa4;
  }
  *(undefined4 *)(iVar5 + 0x2f8) = 0;
  if (param_6 == 3) {
    uVar16 = 4;
LAB_00134ee8:
    FUN_00121ef0(DAT_0040f4dc,uVar16);
    FUN_00121f00(DAT_0040f4dc);
  }
  else {
    uVar16 = 8;
    if (param_6 == 2) goto LAB_00134ee8;
    if (param_6 == 1) {
      FUN_00121ef0(DAT_0040f4dc,0);
      FUN_00121f00(DAT_0040f4dc);
    }
  }
  iVar4 = *(int *)(iVar5 + 0x32c);
  auVar6 = _por(in_zero_qw,auVar6);
  auVar7 = _por(in_zero_qw,auVar7);
  FUN_0011ce98(param_1,param_2,DAT_0040f508,iVar5,auVar6._0_8_,auVar7._0_8_,(int)param_5);
  if (iVar4 != 0) {
    FUN_00181f48(0,0x3f800000,iVar4 + 0xc80,0,0x21);
  }
LAB_00134fa4:
  *(undefined4 *)(DAT_0040f4dc + 4) = 0;
  return;
}


// ==== FUN_00134fd8 @ 00134fd8 ====

undefined8
FUN_00134fd8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            long param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_b0 [48];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  auVar9 = _qmtc2(param_2);
  iStack_5c = (int)param_1 + 0x70;
  uStack_60 = *(undefined4 *)((int)param_1 + 0xbc);
  auVar8 = _qmtc2(param_3);
  auVar6 = _qmfc2(auVar9._0_4_);
  piVar1 = *(int **)(DAT_0040f4d0 + 0x5a90);
  auVar7 = _qmfc2(auVar8._0_4_);
  iStack_80 = auVar7._0_4_;
  auVar7 = _sqc2(auVar9);
  auStack_70._4_4_ = auVar7._4_4_;
  uVar2 = auStack_70._4_4_;
  auVar7 = _sqc2(auVar9);
  auStack_70._8_4_ = auVar7._8_4_;
  uVar3 = auStack_70._8_4_;
  auVar7 = _sqc2(auVar8);
  auStack_70._4_4_ = auVar7._4_4_;
  iStack_7c = auStack_70._4_4_;
  auVar7 = _sqc2(auVar8);
  auStack_70._8_4_ = auVar7._8_4_;
  iStack_78 = auStack_70._8_4_;
  uStack_74 = 0;
  piVar1[2] = 1;
  *piVar1 = (int)&uStack_60;
  piVar1[1] = (int)&iStack_5c;
  piVar1[3] = 0;
  piVar1[0x34] = 0;
  piVar1[0x37] = 0;
  piVar1[0x14] = 0;
  piVar1[0x3c] = 0;
  piVar1[0x3e] = 0;
  piVar1[5] = 0;
  piVar1[0x3a] = 0;
  piVar1[8] = auVar6._0_4_;
  piVar1[9] = uVar2;
  piVar1[10] = uVar3;
  piVar1[0xb] = 0;
  piVar1[0xc] = iStack_80;
  piVar1[0xd] = auStack_70._4_4_;
  piVar1[0xe] = auStack_70._8_4_;
  piVar1[0xf] = 0;
  piVar1[0x3f] = 0x3f800000;
  piVar1[6] = piVar1[7];
  *(undefined1 *)(piVar1 + 0x42) = 0;
  piVar1[0x40] = 0;
  piVar1[0x41] = 0;
  auStack_50 = _sqc2(auVar8);
  auStack_40 = _sqc2(auVar9);
  auStack_70 = auVar7;
  lVar4 = FUN_0033ae68(*(undefined4 *)(DAT_0040f4d0 + 0x5a90));
  auVar7 = _lqc2(auStack_50);
  auVar6 = _lqc2(auStack_40);
  if (lVar4 == 0) {
    if (param_5 == 0) {
      uVar5 = 0;
    }
    else {
      auVar6 = _qmfc2(auVar6._0_4_);
      auVar7 = _qmfc2(auVar7._0_4_);
      uVar5 = FUN_001353f8(param_1,auVar6._0_8_,auVar7._0_8_,auStack_b0,auStack_58);
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


// ==== FUN_00135138 @ 00135138 ====

/* WARNING: Removing unreachable block (ram,0x00135350) */

long FUN_00135138(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 *param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  int iStack_70;
  int iStack_6c;
  undefined1 auStack_68 [8];
  
  auVar15 = _qmtc2(param_2);
  auVar14 = _qmtc2(param_3);
  iVar13 = (int)param_1;
  iStack_6c = iVar13 + 0x70;
  if (param_4 == 0) {
    iStack_70 = *(int *)(iVar13 + 0xb8);
  }
  else {
    iStack_70 = *(int *)(iVar13 + 0xbc);
  }
  auVar8 = _qmfc2(auVar15._0_4_);
  piVar12 = *(int **)(DAT_0040f4d0 + 0x5a90);
  auVar9 = _qmfc2(auVar14._0_4_);
  auVar1 = _sqc2(auVar15);
  iStack_90 = auVar9._0_4_;
  auStack_80._4_4_ = auVar1._4_4_;
  uVar4 = auStack_80._4_4_;
  auVar1 = _sqc2(auVar15);
  auStack_80._8_4_ = auVar1._8_4_;
  uVar5 = auStack_80._8_4_;
  auVar1 = _sqc2(auVar14);
  auStack_80._4_4_ = auVar1._4_4_;
  iStack_8c = auStack_80._4_4_;
  auVar1 = _sqc2(auVar14);
  auStack_80._8_4_ = auVar1._8_4_;
  iStack_88 = auStack_80._8_4_;
  uStack_84 = 0;
  *piVar12 = (int)&iStack_70;
  piVar12[0xc] = iStack_90;
  piVar12[0xd] = auStack_80._4_4_;
  piVar12[0xe] = auStack_80._8_4_;
  piVar12[0xf] = 0;
  piVar12[1] = (int)&iStack_6c;
  piVar12[2] = 1;
  piVar12[8] = auVar8._0_4_;
  piVar12[9] = uVar4;
  piVar12[10] = uVar5;
  piVar12[0xb] = 0;
  piVar12[3] = 0;
  piVar12[0x34] = 0;
  piVar12[0x37] = 0;
  piVar12[0x14] = 0;
  piVar12[0x3c] = 0;
  piVar12[0x3e] = 0;
  piVar12[5] = 0;
  piVar12[0x3a] = 0;
  piVar12[0x3f] = 0x3f800000;
  *(undefined1 *)(piVar12 + 0x42) = 0;
  piVar12[6] = piVar12[7];
  piVar12[0x40] = 0;
  piVar12[0x41] = 0;
  auStack_80 = auVar1;
  if (param_6 == 0) {
    lVar6 = 0;
  }
  else {
    auVar15 = _qmfc2(auVar15._0_4_);
    auVar14 = _qmfc2(auVar14._0_4_);
    lVar6 = FUN_001353f8(param_1,auVar15._0_8_,auVar14._0_8_,auStack_c0,auStack_68);
  }
  lVar7 = FUN_0033aa98(*(undefined4 *)(DAT_0040f4d0 + 0x5a90));
  if ((lVar7 == 0) || ((piVar12 = (int *)lVar7, lVar6 != 0 && (fStack_a0 < (float)piVar12[0x10]))))
  {
    if (lVar6 != 0) {
      param_5[4] = uStack_b0;
      param_5[5] = uStack_ac;
      param_5[6] = uStack_a8;
      param_5[7] = uStack_a4;
      param_5[9] = iVar13;
      *param_5 = auStack_c0._0_4_;
      param_5[1] = auStack_c0._4_4_;
      param_5[2] = uStack_b8;
      param_5[3] = uStack_b4;
      param_5[8] = fStack_a0;
      *(undefined1 *)(param_5 + 0xb) = 0xff;
      param_5[10] = (uint)*(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x42);
    }
  }
  else {
    uVar2 = *(undefined8 *)(piVar12 + 4);
    iVar10 = piVar12[6];
    iVar11 = piVar12[7];
    *param_5 = (int)uVar2;
    param_5[1] = (int)((ulong)uVar2 >> 0x20);
    param_5[2] = iVar10;
    param_5[3] = iVar11;
    iVar10 = piVar12[9];
    iVar11 = piVar12[10];
    iVar3 = piVar12[0xb];
    param_5[4] = piVar12[8];
    param_5[5] = iVar10;
    param_5[6] = iVar11;
    param_5[7] = iVar3;
    param_5[8] = piVar12[0x10];
    if (**(int **)(iStack_70 + 0x58) == 5) {
      *(byte *)(param_5 + 0xb) =
           (~(byte)(-1 << (*(uint *)(*(int *)(*piVar12 + 0x40) + 0x24) & 0x1f)) &
           (byte)piVar12[0x30]) - 1;
    }
    else {
      *(undefined1 *)(param_5 + 0xb) = 0;
    }
    param_5[10] = 0;
    if ((1 < *(byte *)(param_5 + 0xb) - 5) ||
       (lVar6 = 0,
       0x37800000 <
       (*(uint *)(*(int *)(*(int *)(*(int *)(iVar13 + 0xbc) + 0x40) + 0x30) +
                  (uint)*(byte *)(param_5 + 0xb) * 0x60 + 0x4c) & 0x7f800000))) {
      lVar6 = 1;
    }
  }
  return lVar6;
}


// ==== FUN_001353f8 @ 001353f8 ====

undefined4 FUN_001353f8(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined1 in_a1_qw [16];
  undefined1 auVar3 [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar5 = 0;
  piVar6 = (int *)(param_1 + 0x25c);
  auVar7 = _por(in_zero_qw,in_a2_qw);
  auVar8 = _por(in_zero_qw,in_a1_qw);
  uVar9 = 0;
  param_2[8] = DAT_003f4830;
  do {
    iVar1 = *piVar6;
    if ((iVar1 != 0) && (auVar3 = _por(in_zero_qw,auVar8), *(char *)(iVar1 + 0x18) != '\0')) {
      auVar4 = _por(in_zero_qw,auVar7);
      lVar2 = FUN_001433e0(iVar1,auVar3._0_8_,auVar4._0_8_,auStack_b0);
      if ((lVar2 != 0) && (uVar9 = 1, fStack_90 < (float)param_2[8])) {
        *param_3 = iVar5;
        *param_2 = auStack_b0._0_4_;
        param_2[1] = auStack_b0._4_4_;
        param_2[2] = uStack_a8;
        param_2[3] = uStack_a4;
        param_2[4] = uStack_a0;
        param_2[5] = uStack_9c;
        param_2[6] = uStack_98;
        param_2[7] = uStack_94;
        param_2[8] = fStack_90;
        param_2[9] = uStack_8c;
        param_2[10] = uStack_88;
        param_2[0xb] = uStack_84;
      }
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 8);
  return uVar9;
}


// ==== FUN_001354e0 @ 001354e0 ====

void FUN_001354e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x32c);
  if (iVar1 != param_2) {
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x84) + 0x1c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x84) + 0x18));
    }
    *(int *)(param_1 + 0x32c) = param_2;
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_2 + 0x84) + 0x14))
                (param_2 + *(short *)(*(int *)(param_2 + 0x84) + 0x10));
    }
  }
  return;
}


// ==== FUN_00135550 @ 00135550 ====

undefined4 FUN_00135550(int param_1)

{
  return *(undefined4 *)(param_1 + 0x32c);
}


// ==== FUN_00135558 @ 00135558 ====

void FUN_00135558(int param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2c8) = *param_2;
  return;
}


// ==== FUN_00135570 @ 00135570 ====

undefined4 FUN_00135570(int param_1)

{
  return *(undefined4 *)(param_1 + 0x328);
}


// ==== FUN_00135578 @ 00135578 ====

void FUN_00135578(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3a9) = param_2;
  return;
}


// ==== FUN_00135580 @ 00135580 ====

void FUN_00135580(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  byte bStack_88;
  undefined4 uStack_80;
  undefined1 auStack_70 [16];
  
  iVar5 = (int)param_1;
  if (*(char *)(iVar5 + 0x3af) != '\0') {
    return;
  }
  auVar10 = _qmtc2(0x42480000);
  fVar6 = 0.5;
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
  auVar8 = _qmtc2(*(float *)(iVar5 + 0x2e8) * 0.5);
  auVar8 = _vaddbc(auVar9,auVar8);
  auVar9 = _vaddbc(in_vf0,auVar8);
  auVar8 = _qmfc2(auVar9._0_4_);
  auVar9 = _vsubbc(auVar9,auVar10);
  _qmtc2(auVar8._0_4_);
  auVar9 = _vaddbc(in_vf0,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  lVar3 = FUN_0012ae58(DAT_0040f4d0,auVar8._0_8_,auVar9._0_8_,0xa1,0,0,auStack_b0);
  cVar1 = *(char *)(iVar5 + 0x3a8);
  *(undefined1 *)(iVar5 + 0x3a8) = 0;
  if (lVar3 != 0) {
    if (*(float *)(iVar5 + 0x2ec) < 0.1) {
      fVar7 = fStack_90 * 50.0;
      *(int *)(iVar5 + 0x1c0) = auStack_b0._0_4_;
      *(int *)(iVar5 + 0x1c4) = auStack_b0._4_4_;
      *(undefined4 *)(iVar5 + 0x1c8) = uStack_a8;
      *(undefined4 *)(iVar5 + 0x1cc) = uStack_a4;
      fVar6 = *(float *)(iVar5 + 0x2e8) * fVar6;
      *(int *)(iVar5 + 0x1d0) = (int)uStack_a0;
      *(int *)(iVar5 + 0x1d4) = (int)((ulong)uStack_a0 >> 0x20);
      *(undefined4 *)(iVar5 + 0x1d8) = uStack_98;
      *(undefined4 *)(iVar5 + 0x1dc) = uStack_94;
      *(undefined4 *)(iVar5 + 0x398) = uStack_80;
      if (cVar1 == '\x01') {
        fVar6 = fVar6 + 0.25;
      }
      if (fVar6 <= fVar7) {
        if (param_2 == 0) {
          iVar2 = *(int *)(iVar5 + 0xc4);
          goto LAB_001356a4;
        }
        iVar2 = *(int *)(iVar5 + 0xc4);
      }
      else {
        iVar2 = *(int *)(iVar5 + 0xc4);
LAB_001356a4:
        if (((iVar2 == 2) && (cVar1 == '\0')) && (5.0 < ABS(*(float *)(iVar5 + 0x2ec)))) {
          FUN_001deeb8(auStack_70,*(undefined4 *)(iVar5 + 0x330),1,1);
        }
        FUN_00126030(param_1);
        *(undefined1 *)(iVar5 + 0x3a8) = 1;
        *(uint *)(iVar5 + 0x378) = (uint)bStack_88;
        iVar2 = *(int *)(iVar5 + 0xc4);
      }
      if ((((iVar2 == 1) && (2.0 < fVar7)) &&
          ((iVar2 = *(int *)(iVar5 + 0x32c), iVar2 != 0 &&
           ((*(int *)(iVar5 + 0x38c) == 0 && (*(int *)(iVar2 + 0x80) == 1)))))) &&
         (lVar4 = FUN_0018ddd8(iVar2 + 0xc94), lVar4 == 0)) {
        *(undefined4 *)(iVar5 + 0x2f8) = 0;
        FUN_0011cd00(fVar7,DAT_0040f508,param_1);
      }
    }
    if (lVar3 != 0) {
      cVar1 = *(char *)(iVar5 + 0x3a8);
      goto LAB_00135788;
    }
  }
  FUN_00126030(param_1);
  cVar1 = *(char *)(iVar5 + 0x3a8);
LAB_00135788:
  if (cVar1 != '\0') {
    *(undefined4 *)(iVar5 + 0x368) = uStack_8c;
  }
  return;
}


// ==== FUN_001357b8 @ 001357b8 ====

undefined8 FUN_001357b8(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_30 [16];
  
  puVar11 = (undefined4 *)param_1;
  if (*(int *)(*(int *)(*(int *)(param_2 + 0x330) + 0x50) + 0x34) < 0) {
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x100));
    uVar1 = *(undefined8 *)(param_2 + 0xd0);
    uVar9 = *(undefined4 *)(param_2 + 0xd8);
    uVar10 = *(undefined4 *)(param_2 + 0xdc);
    uVar2 = *(undefined8 *)(param_2 + 0xe0);
    uVar5 = *(undefined4 *)(param_2 + 0xe8);
    uVar6 = *(undefined4 *)(param_2 + 0xec);
    uVar3 = *(undefined8 *)(param_2 + 0xf0);
    uVar7 = *(undefined4 *)(param_2 + 0xf8);
    uVar8 = *(undefined4 *)(param_2 + 0xfc);
    auStack_30 = _sqc2(auVar13);
    if (*(int *)(param_2 + 0xc4) == 1) {
      auVar12 = _qmtc2(0x3e800000);
      auVar13 = _vsubbc(auVar13,auVar12);
      auVar13 = _vaddbc(in_vf0,auVar13);
      auStack_30 = _sqc2(auVar13);
    }
    *puVar11 = (int)uVar1;
    puVar11[1] = (int)((ulong)uVar1 >> 0x20);
    puVar11[2] = uVar9;
    puVar11[3] = uVar10;
    puVar11[4] = (int)uVar2;
    puVar11[5] = (int)((ulong)uVar2 >> 0x20);
    puVar11[6] = uVar5;
    puVar11[7] = uVar6;
    puVar11[8] = (int)uVar3;
    puVar11[9] = (int)((ulong)uVar3 >> 0x20);
    puVar11[10] = uVar7;
    puVar11[0xb] = uVar8;
    puVar11[0xc] = auStack_30._0_4_;
    puVar11[0xd] = auStack_30._4_4_;
    puVar11[0xe] = auStack_30._8_4_;
    puVar11[0xf] = auStack_30._12_4_;
  }
  else {
    puVar4 = (undefined8 *)FUN_001a68e0(*(int *)(param_2 + 0x330),0);
    uVar1 = *puVar4;
    uVar5 = *(undefined4 *)(puVar4 + 1);
    uVar6 = *(undefined4 *)((int)puVar4 + 0xc);
    *puVar11 = (int)uVar1;
    puVar11[1] = (int)((ulong)uVar1 >> 0x20);
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    uVar1 = puVar4[2];
    uVar5 = *(undefined4 *)(puVar4 + 3);
    uVar6 = *(undefined4 *)((int)puVar4 + 0x1c);
    puVar11[4] = (int)uVar1;
    puVar11[5] = (int)((ulong)uVar1 >> 0x20);
    puVar11[6] = uVar5;
    puVar11[7] = uVar6;
    uVar1 = puVar4[4];
    uVar5 = *(undefined4 *)(puVar4 + 5);
    uVar6 = *(undefined4 *)((int)puVar4 + 0x2c);
    puVar11[8] = (int)uVar1;
    puVar11[9] = (int)((ulong)uVar1 >> 0x20);
    puVar11[10] = uVar5;
    puVar11[0xb] = uVar6;
    uVar1 = puVar4[6];
    uVar5 = *(undefined4 *)(puVar4 + 7);
    uVar6 = *(undefined4 *)((int)puVar4 + 0x3c);
    puVar11[0xc] = (int)uVar1;
    puVar11[0xd] = (int)((ulong)uVar1 >> 0x20);
    puVar11[0xe] = uVar5;
    puVar11[0xf] = uVar6;
  }
  return param_1;
}


// ==== FUN_00135878 @ 00135878 ====

undefined8 FUN_00135878(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(int *)(param_2 + 0xc4) != 2) {
    FUN_001357b8(&uStack_70);
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    auStack_80._4_4_ = uStack_3c;
    auStack_80._0_4_ = uStack_40;
    auStack_80._8_4_ = uStack_38;
    auStack_80._12_4_ = uStack_34;
    if (*(undefined1 **)(param_2 + 0x2a4) != (undefined1 *)0x0) {
      iVar2 = FUN_0015d248(DAT_0040f4e0,**(undefined1 **)(param_2 + 0x2a4),0);
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
      auVar4._4_4_ = uStack_6c;
      auVar4._0_4_ = uStack_70;
      auVar4._8_4_ = uStack_68;
      auVar4._12_4_ = uStack_64;
      auVar8 = _lqc2(auVar4);
      auVar5._4_4_ = uStack_5c;
      auVar5._0_4_ = uStack_60;
      auVar5._8_4_ = uStack_58;
      auVar5._12_4_ = uStack_54;
      auVar7 = _lqc2(auVar5);
      auVar1._4_4_ = uStack_4c;
      auVar1._0_4_ = uStack_50;
      auVar1._8_4_ = uStack_48;
      auVar1._12_4_ = uStack_44;
      auVar5 = _lqc2(auVar1);
      auVar4 = _lqc2(auStack_80);
      _vmulabc(auVar8,auVar6);
      _vmaddabc(auVar7,auVar6);
      auVar5 = _vmaddbc(auVar5,auVar6);
      auVar4 = _vadd(auVar4,auVar5);
      auStack_80 = _sqc2(auVar4);
    }
  }
  puVar3 = (undefined4 *)param_1;
  *puVar3 = uStack_b0;
  puVar3[1] = uStack_ac;
  puVar3[2] = uStack_a8;
  puVar3[3] = uStack_a4;
  puVar3[4] = uStack_a0;
  puVar3[5] = uStack_9c;
  puVar3[6] = uStack_98;
  puVar3[7] = uStack_94;
  puVar3[8] = uStack_90;
  puVar3[9] = uStack_8c;
  puVar3[10] = uStack_88;
  puVar3[0xb] = uStack_84;
  puVar3[0xc] = auStack_80._0_4_;
  puVar3[0xd] = auStack_80._4_4_;
  puVar3[0xe] = auStack_80._8_4_;
  puVar3[0xf] = auStack_80._12_4_;
  return param_1;
}


// ==== FUN_00135940 @ 00135940 ====

undefined8 FUN_00135940(undefined8 param_1,int param_2)

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
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  
  FUN_001a7528(auStack_170,*(undefined4 *)(param_2 + 0x330));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x80));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x90));
  auVar6 = _lqc2(auStack_170);
  auVar3 = _lqc2(auStack_160);
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  _vmulabc(auVar5,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar7 = _vmaddbc(auVar2,auVar6);
  _vmulabc(auVar5,auVar3);
  _vmaddabc(auVar4,auVar3);
  auVar8 = _vmaddbc(auVar2,auVar3);
  auVar6 = _lqc2(auStack_150);
  auVar3 = _lqc2(auStack_140);
  _vmulabc(auVar5,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar6 = _vmaddbc(auVar2,auVar6);
  _vmulabc(auVar5,auVar3);
  _vmaddabc(auVar4,auVar3);
  _vmaddabc(auVar2,auVar3);
  auVar2 = _vmaddbc(auVar9,in_vf0);
  pauVar1 = (undefined1 (*) [16])param_1;
  auVar3 = _sqc2(auVar7);
  *pauVar1 = auVar3;
  auVar3 = _sqc2(auVar8);
  pauVar1[1] = auVar3;
  auVar3 = _sqc2(auVar6);
  pauVar1[2] = auVar3;
  auVar3 = _sqc2(auVar2);
  pauVar1[3] = auVar3;
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar2);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar2);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar2);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar2);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar2);
  return param_1;
}


// ==== FUN_00135a38 @ 00135a38 ====

void FUN_00135a38(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulong)param_2 >> 0x20);
  if (*(undefined1 **)(param_1 + 0x2a4) != (undefined1 *)0x0) {
    uStack_38 = in_a1_udw;
    uStack_34 = in_register_0000005c;
    iVar1 = FUN_0015d248(DAT_0040f4e0,**(undefined1 **)(param_1 + 0x2a4),0);
    uVar2 = *(undefined4 *)(iVar1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x2a4);
    (**(code **)(*(int *)(param_1 + 0x10) + 0xa4))
              (auStack_80,param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0xa0));
    auVar3._4_4_ = uStack_3c;
    auVar3._0_4_ = uStack_40;
    auVar3._8_4_ = uStack_38;
    auVar3._12_4_ = uStack_34;
    auVar5 = _lqc2(auVar3);
    auVar3 = _qmtc2(uVar2);
    auVar4 = _lqc2(auStack_50);
    auVar3 = _vmulbc(auVar5,auVar3);
    auVar3 = _vadd(auVar4,auVar3);
    auVar3 = _sqc2(auVar3);
    *(undefined1 (*) [16])(iVar1 + 0x10) = auVar3;
  }
  return;
}


