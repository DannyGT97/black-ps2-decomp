// ==== FUN_001addf8 @ 001addf8 ====

void FUN_001addf8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1[2];
  if (0 < param_1[4]) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(int *)(iVar1 + *param_1) = iVar3;
      *(undefined4 *)(iVar1 + param_1[1]) = 0;
      iVar3 = iVar3 + param_1[3];
    } while (iVar2 < param_1[4]);
  }
  return;
}


// ==== FUN_001ade50 @ 001ade50 ====

uint FUN_001ade50(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  param_2 = param_2 * 4;
  uVar1 = *(int *)(param_2 + param_1[1]) + 0xfU & 0xfffffff0;
  *(int *)(param_2 + param_1[1]) = uVar1 + param_3;
  if ((uint)(*(int *)(param_2 + *param_1) + param_1[3]) < *(uint *)(param_2 + param_1[1])) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001adea8 @ 001adea8 ====

int FUN_001adea8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  iVar3 = 0;
  if (*(int *)(iVar2 + 0x10) < 1) {
LAB_001adf00:
    iVar3 = -1;
  }
  else {
    iVar1 = *(int *)(iVar2 + 4);
    while (*(int *)(iVar3 * 4 + iVar1) != 0) {
      iVar3 = iVar3 + 1;
      if (*(int *)(iVar2 + 0x10) <= iVar3) goto LAB_001adf00;
      iVar1 = *(int *)(iVar2 + 4);
    }
    FUN_001adf30(param_1,iVar3);
  }
  return iVar3;
}


// ==== FUN_001adf18 @ 001adf18 ====

void FUN_001adf18(int param_1,int param_2)

{
  *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4)) = 0;
  return;
}


// ==== FUN_001adf30 @ 001adf30 ====

void FUN_001adf30(int *param_1,int param_2)

{
  *(undefined4 *)(param_2 * 4 + param_1[1]) = *(undefined4 *)(param_2 * 4 + *param_1);
  return;
}


// ==== FUN_001adf58 @ 001adf58 ====

void FUN_001adf58(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_001add78(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


// ==== FUN_001adf98 @ 001adf98 ====

void FUN_001adf98(int *param_1)

{
  (**(code **)(*param_1 + 0x34))((int)param_1 + (int)*(short *)(*param_1 + 0x30));
  return;
}


// ==== FUN_001adfc0 @ 001adfc0 ====

uint FUN_001adfc0(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    uVar1 = *(int *)(param_1 + 0x24) + 0xfU & 0xfffffff0;
    uVar2 = uVar1 + (int)param_2;
    *(uint *)(param_1 + 0x24) = uVar2;
    if (*(uint *)(param_1 + 0x28) < uVar2) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar1 = 0;
    }
    else {
      *(uint *)(param_1 + 0x2c) = uVar1;
    }
  }
  else if (*(int *)(param_1 + 0x20) == 1) {
    uVar1 = FUN_00107d20(param_2,param_2,param_2);
  }
  else {
    uVar1 = FUN_001ade50(param_1 + 0xc,*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}


// ==== FUN_001ae078 @ 001ae078 ====

void FUN_001ae078(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


// ==== FUN_001ae088 @ 001ae088 ====

void FUN_001ae088(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


// ==== FUN_001ae090 @ 001ae090 ====

void FUN_001ae090(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// ==== FUN_001ae0a8 @ 001ae0a8 ====

void FUN_001ae0a8(int param_1)

{
  FUN_001adea8(param_1 + 0xc);
  return;
}


// ==== FUN_001ae0c8 @ 001ae0c8 ====

void FUN_001ae0c8(int param_1)

{
  FUN_001adf18(param_1 + 0xc);
  return;
}


// ==== FUN_001ae0f0 @ 001ae0f0 ====

void FUN_001ae0f0(int param_1,undefined8 param_2)

{
  FUN_001adf18(param_1 + 0xc);
  FUN_001adf30(param_1 + 0xc,param_2);
  return;
}


// ==== FUN_001ae130 @ 001ae130 ====
// GLOBAL DAT_00415920 undefined4
// GLOBAL DAT_00415924 undefined4
// GLOBAL DAT_00415928 undefined4
// GLOBAL DAT_0041592c undefined4
// GLOBAL DAT_00415930 undefined4
// GLOBAL DAT_00415934 undefined4
// GLOBAL DAT_00415938 undefined4
// GLOBAL DAT_0041593c undefined4
// GLOBAL DAT_00415940 undefined4
// GLOBAL DAT_00415944 undefined4
// GLOBAL DAT_00415948 undefined4
// GLOBAL DAT_0041594c undefined4
// GLOBAL DAT_00415950 undefined4
// GLOBAL DAT_00415954 undefined4
// GLOBAL DAT_00415958 undefined4
// GLOBAL DAT_0041595c undefined4
// GLOBAL DAT_00415960 undefined4
// GLOBAL DAT_00415964 undefined4
// GLOBAL DAT_00415970 undefined4
// GLOBAL DAT_00415974 undefined4
// GLOBAL DAT_00415978 undefined4
// GLOBAL DAT_0041597c undefined4
// GLOBAL DAT_00415980 undefined4
// GLOBAL DAT_00415984 undefined4
// GLOBAL DAT_00415988 undefined4
// GLOBAL DAT_0041598c undefined4

void FUN_001ae130(long param_1,long param_2)

{
  undefined4 uStack_4;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_00415920 = 0x3fc90fdb;
    DAT_00415924 = 0xbe22f983;
    DAT_00415928 = 0x4b400000;
    DAT_0041592c = uStack_4;
    DAT_00415930 = 0xbe22f983;
    DAT_00415934 = 0x3f000000;
    DAT_00415938 = 0x3e800000;
    DAT_0041593c = uStack_4;
    DAT_00415940 = 0xc2992661;
    DAT_00415944 = 0xc2255de0;
    DAT_00415948 = 0x42a33457;
    DAT_0041594c = uStack_4;
    DAT_00415950 = 0x421ed7b7;
    DAT_00415954 = 0x40c90fda;
    DAT_00415958 = 0;
    DAT_0041595c = uStack_4;
    DAT_00415970 = 0x43f59407;
    DAT_00415974 = 0x44345569;
    DAT_00415978 = 0x4409ee8c;
    DAT_0041597c = 0x43968fcd;
    DAT_00415988 = 0x4b000000;
    DAT_0041598c = 0x4b000000;
    DAT_00415960 = 0x3f800000;
    DAT_00415964 = 0x3faaaaab;
    DAT_00415980 = 0x4b000000;
    DAT_00415984 = 0x4b000000;
  }
  return;
}


// ==== FUN_001ae2c8 @ 001ae2c8 ====

void FUN_001ae2c8(void)

{
  FUN_001ae130(1,0xffff);
  return;
}


// ==== FUN_001ae2e8 @ 001ae2e8 ====
// GLOBAL DAT_004432e0 undefined4

void FUN_001ae2e8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00265da8();
  FUN_0026a450();
  iVar2 = (int)param_1;
  FUN_001c65e8(iVar2 + 0xd170);
  FUN_001afee0(iVar2 + 0xcd70);
  FUN_001ae860(param_1);
  FUN_001ae9f8(param_1);
  FUN_00274270(*(undefined4 *)(iVar2 + 0xd3b8));
  uVar1 = DAT_004432e0;
  *(undefined1 *)(iVar2 + 0xf) = 0;
  *(undefined1 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0xd560) = 0x3f800000;
  FUN_001aebb0(param_1,uVar1);
  *(undefined4 *)(iVar2 + 0xd564) = 0;
  FUN_001b0988(iVar2 + 0xd290);
  FUN_001af4c0(iVar2 + 0x14);
  FUN_001b0fc0(iVar2 + 0xd350);
  return;
}


// ==== FUN_001ae3a8 @ 001ae3a8 ====

undefined4 FUN_001ae3a8(int param_1)

{
  FUN_0027b2c8(param_1 + 0xd360);
  FUN_0027b2c8(param_1 + 0xd400);
  FUN_0027b2c8(param_1 + 0xd4a0);
  FUN_001c6608(param_1 + 0xd170);
  FUN_001b0a20(param_1 + 0xd290);
  FUN_001b0068(param_1 + 0xcbe0);
  FUN_001b0fc8(param_1 + 0xd350);
  return 1;
}


// ==== FUN_001ae420 @ 001ae420 ====
// GLOBAL DAT_003bd1bc float
// GLOBAL DAT_003bd1c0 float
// GLOBAL DAT_003bd1c4 float
// GLOBAL DAT_00415b60 float
// GLOBAL DAT_00415b64 float
// GLOBAL DAT_00415b68 float
// GLOBAL DAT_00415b6c undefined4
// GLOBAL DAT_003bd1a0 float
// GLOBAL DAT_0040f4d0 int

void FUN_001ae420(int param_1,long param_2)

{
  int iVar1;
  
  DAT_00415b60 = DAT_003bd1bc + 1.0;
  DAT_00415b64 = DAT_003bd1c0 + 1.0;
  DAT_00415b68 = DAT_003bd1c4 + 1.0;
  DAT_00415b6c = 0x3f800000;
  if (param_2 == 1) {
    iVar1 = 0xd400;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) goto LAB_001ae4e4;
    iVar1 = 0xd360;
  }
  else {
    if (param_2 != 2) goto LAB_001ae4e4;
    iVar1 = 0xd4a0;
  }
  *(int *)(param_1 + 0xd540) = param_1 + iVar1;
LAB_001ae4e4:
  FUN_001b0948(*(undefined4 *)(param_1 + 0xd540));
  if (0.0 < DAT_003bd1a0) {
    FUN_001b0bd0(param_1 + 0xd290);
  }
  FUN_001b0f48(DAT_0040f4d0 + 0x5b00);
  return;
}


// ==== FUN_001ae538 @ 001ae538 ====

void FUN_001ae538(int param_1)

{
  FUN_002a90e8(*(undefined4 *)(*(int *)(param_1 + 0xd540) + 0x58));
  *(undefined4 *)(param_1 + 0xd540) = 0;
  return;
}


// ==== FUN_001ae570 @ 001ae570 ====

void FUN_001ae570(int param_1)

{
  FUN_002a9140(*(undefined4 *)(param_1 + 0xd3b8),0,1);
  return;
}


// ==== FUN_001ae5a0 @ 001ae5a0 ====

void FUN_001ae5a0(int param_1)

{
  FUN_0026a6f0(*(undefined4 *)(param_1 + 0xd540));
  return;
}


// ==== FUN_001ae5c8 @ 001ae5c8 ====

void FUN_001ae5c8(void)

{
  FUN_0026a7a0();
  return;
}


// ==== FUN_001ae5e8 @ 001ae5e8 ====
// GLOBAL DAT_003f71a0 undefined4

void FUN_001ae5e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int *piVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [24];
  undefined4 auStack_2f8 [186];
  
  auVar11 = _qmtc2(param_3);
  auVar12 = _qmtc2(param_4);
  auVar13 = _qmtc2(param_5);
  iVar3 = 6;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  auVar5 = _sqc2(auVar11);
  auVar4 = _qmfc2(auVar11._0_4_);
  auVar6 = _qmfc2(auVar12._0_4_);
  lVar10 = (long)auVar4._0_4_;
  auStack_320._4_4_ = auVar5._4_4_;
  auVar5 = _sqc2(auVar11);
  iVar3 = 0x17;
  lVar8 = (long)auVar6._0_4_;
  auStack_320._8_4_ = auVar5._8_4_;
  auVar6 = _qmtc2(0);
  auVar5 = _pextlw((long)(int)auStack_320._8_4_,lVar10);
  auVar4 = _pextlw((long)(int)auStack_320._4_4_,auVar5._0_8_);
  auVar5 = _sqc2(auVar11);
  uStack_3a0 = auVar4._0_4_;
  uStack_39c = auVar4._4_4_;
  uStack_398 = auVar4._8_4_;
  uStack_394 = auVar4._12_4_;
  auStack_320._4_4_ = auVar5._4_4_;
  auVar5 = _sqc2(auVar11);
  auStack_320._8_4_ = auVar5._8_4_;
  auVar5 = _pextlw((long)(int)auStack_320._8_4_,lVar8);
  auVar4 = _pextlw((long)(int)auStack_320._4_4_,auVar5._0_8_);
  auVar5 = _sqc2(auVar11);
  uStack_390 = auVar4._0_4_;
  uStack_38c = auVar4._4_4_;
  uStack_388 = auVar4._8_4_;
  uStack_384 = auVar4._12_4_;
  auStack_320._4_4_ = auVar5._4_4_;
  auVar5 = _sqc2(auVar12);
  auStack_320._8_4_ = auVar5._8_4_;
  auVar5 = _pextlw((long)(int)auStack_320._8_4_,lVar8);
  auVar4 = _pextlw((long)(int)auStack_320._4_4_,auVar5._0_8_);
  auVar5 = _sqc2(auVar11);
  uStack_380 = auVar4._0_4_;
  uStack_37c = auVar4._4_4_;
  uStack_378 = auVar4._8_4_;
  uStack_374 = auVar4._12_4_;
  auStack_320._4_4_ = auVar5._4_4_;
  auVar5 = _sqc2(auVar12);
  auStack_320._8_4_ = auVar5._8_4_;
  auVar5 = _pextlw((long)(int)auStack_320._8_4_,lVar10);
  auVar4 = _pextlw((long)(int)auStack_320._4_4_,auVar5._0_8_);
  auVar5 = _sqc2(auVar12);
  uStack_370 = auVar4._0_4_;
  uStack_36c = auVar4._4_4_;
  uStack_368 = auVar4._8_4_;
  uStack_364 = auVar4._12_4_;
  auStack_320._4_4_ = auVar5._4_4_;
  auVar5 = _sqc2(auVar11);
  auStack_320._8_4_ = auVar5._8_4_;
  auVar5 = _pextlw((long)(int)auStack_320._8_4_,lVar10);
  auVar4 = _pextlw((long)(int)auStack_320._4_4_,auVar5._0_8_);
  auVar5 = _sqc2(auVar12);
  uStack_360 = auVar4._0_4_;
  uStack_35c = auVar4._4_4_;
  uStack_358 = auVar4._8_4_;
  uStack_354 = auVar4._12_4_;
  auStack_320._4_4_ = auVar5._4_4_;
  auVar11 = _sqc2(auVar11);
  auStack_320._8_4_ = auVar11._8_4_;
  auVar11 = _pextlw((long)(int)auStack_320._8_4_,lVar8);
  auVar5 = _pextlw((long)(int)auStack_320._4_4_,auVar11._0_8_);
  auVar11 = _sqc2(auVar12);
  uStack_350 = auVar5._0_4_;
  uStack_34c = auVar5._4_4_;
  uStack_348 = auVar5._8_4_;
  uStack_344 = auVar5._12_4_;
  auStack_320._4_4_ = auVar11._4_4_;
  auVar11 = _sqc2(auVar12);
  auStack_320._8_4_ = auVar11._8_4_;
  auVar11 = _pextlw((long)(int)auStack_320._8_4_,lVar8);
  auVar5 = _pextlw((long)(int)auStack_320._4_4_,auVar11._0_8_);
  auVar11 = _sqc2(auVar12);
  uStack_340 = auVar5._0_4_;
  uStack_33c = auVar5._4_4_;
  uStack_338 = auVar5._8_4_;
  uStack_334 = auVar5._12_4_;
  auStack_320._4_4_ = auVar11._4_4_;
  auVar11 = _sqc2(auVar12);
  auStack_320._8_4_ = auVar11._8_4_;
  auVar11 = _pextlw((long)(int)auStack_320._8_4_,lVar10);
  auStack_320 = _pextlw((long)(int)auStack_320._4_4_,auVar11._0_8_);
  uStack_330 = auStack_320._0_4_;
  uStack_32c = auStack_320._4_4_;
  uStack_328 = auStack_320._8_4_;
  uStack_324 = auStack_320._12_4_;
  pauVar9 = (undefined1 (*) [16])auStack_310;
  do {
    _lqc2(*pauVar9);
    iVar3 = iVar3 + -1;
    auVar11 = _vmr32(auVar6);
    auVar11 = _sqc2(auVar11);
    *pauVar9 = auVar11;
    pauVar9 = pauVar9 + 2;
  } while (iVar3 != -1);
  auVar12 = _pextlh(0,0x8000ff00ff00ff);
  auVar11 = _qmtc2(0x43000000);
  auVar11 = _vmulbc(auVar13,auVar11);
  piVar7 = &DAT_003f71a0;
  auVar11 = _vftoi0(auVar11);
  pauVar9 = (undefined1 (*) [16])auStack_310;
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar11 = _pminw(auVar11,auVar12);
  auVar11 = _ppach(in_zero_qw,auVar11);
  iVar3 = 0x17;
  auVar11 = _ppacb(in_zero_qw,auVar11);
  do {
    iVar2 = *piVar7;
    iVar3 = iVar3 + -1;
    _lqc2(*pauVar9);
    piVar7 = piVar7 + 1;
    auVar12 = _lqc2(*(undefined1 (*) [16])(&uStack_3a0 + iVar2 * 4));
    auVar12 = _vadd(in_vf0,auVar12);
    *(int *)(pauVar9[1] + 8) = auVar11._0_4_;
    auVar12 = _sqc2(auVar12);
    *pauVar9 = auVar12;
    pauVar9 = pauVar9 + 2;
  } while (-1 < iVar3);
  FUN_0026b480(param_2,(undefined1 (*) [16])auStack_310,0x18);
  return;
}


// ==== FUN_001ae860 @ 001ae860 ====

void FUN_001ae860(undefined4 *param_1)

{
  FUN_001b08a8(param_1 + 0x34d8,*param_1,param_1[1],param_1[2]);
  FUN_001b08a8(param_1 + 0x3500,0,0,0);
  FUN_001b08a8(param_1 + 0x3528,0,0,0);
  FUN_0027b2f0(0x41f00000,param_1 + 0x34d8);
  param_1[0x3550] = 0;
  return;
}


// ==== FUN_001ae8f0 @ 001ae8f0 ====

void FUN_001ae8f0(int param_1)

{
  FUN_0027b260(param_1 + 0xd400);
  FUN_0027b260(param_1 + 0xd4a0);
  FUN_0027b260(param_1 + 0xd360);
  return;
}


// ==== FUN_001ae938 @ 001ae938 ====

void FUN_001ae938(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = 0xd400;
  }
  else if (param_2 < 2) {
    iVar1 = 0xd360;
    if (param_2 != 0) {
      param_1 = 0;
      goto LAB_001ae984;
    }
  }
  else {
    iVar1 = 0xd4a0;
    if (param_2 != 2) {
      param_1 = 0;
      goto LAB_001ae984;
    }
  }
  param_1 = param_1 + iVar1;
LAB_001ae984:
  FUN_0027b2e0(param_1,param_3);
  return;
}


// ==== FUN_001ae998 @ 001ae998 ====

void FUN_001ae998(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == 1) {
    iVar1 = 0xd400;
  }
  else if (param_2 < 2) {
    iVar1 = 0xd360;
    if (param_2 != 0) goto LAB_001ae9e0;
  }
  else {
    iVar1 = 0xd4a0;
    if (param_2 != 2) goto LAB_001ae9e0;
  }
  iVar2 = param_1 + iVar1;
LAB_001ae9e0:
  FUN_001b0910(iVar2);
  return;
}


// ==== FUN_001ae9f8 @ 001ae9f8 ====

void FUN_001ae9f8(undefined8 param_1)

{
  FUN_001aea18(param_1,0);
  return;
}


// ==== FUN_001aea18 @ 001aea18 ====

void FUN_001aea18(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_70 = 0;
  uStack_6c = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    uVar2 = 0x3faaaaab;
    uVar1 = 0x3f800000;
  }
  else {
    uVar2 = 0x3fe38e39;
    uVar1 = 0x3f99999a;
  }
  FUN_0027b390(param_1 + param_2 * 0x28 + 0x3500,param_1 + 0x34d8,&uStack_70);
  FUN_0027b388(uVar2,param_1 + param_2 * 0x28 + 0x3500);
  param_1[param_2 * 0x28 + 0x351c] = uVar1;
  param_1[param_2 * 0x28 + 0x3521] = 0x3da3d70a;
  FUN_002a9240(0x3da3d70a,param_1[param_2 * 0x28 + 0x3516]);
  return;
}


// ==== FUN_001aeb18 @ 001aeb18 ====
// GLOBAL DAT_0040f4d8 int

void FUN_001aeb18(int param_1)

{
  FUN_001af6d0(param_1 + 0x14);
  FUN_001b86d0(DAT_0040f4d8 + 0x54ab0);
  return;
}


// ==== FUN_001aeb50 @ 001aeb50 ====

int FUN_001aeb50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = 0xd400;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
      return 0;
    }
    iVar1 = 0xd360;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar1 = 0xd4a0;
  }
  return param_1 + iVar1;
}


// ==== FUN_001aebb0 @ 001aebb0 ====

void FUN_001aebb0(int param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _qmtc2(0x437f0000);
  auVar2 = _qmtc2(param_2);
  auVar1 = _vmulbc(auVar2,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0xd550) = auVar1;
  return;
}


// ==== FUN_001aebd0 @ 001aebd0 ====

void FUN_001aebd0(float param_1,int param_2)

{
  param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
  *(uint *)(param_2 + 0xd560) =
       (int)param_1 * (uint)(param_1 < 1.0) | (uint)(param_1 >= 1.0) * 0x3f800000;
  return;
}


// ==== FUN_001aebf8 @ 001aebf8 ====
// GLOBAL DAT_004432f0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aebf8(long param_1,char *param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
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
  undefined1 auStack_140 [8];
  float fStack_138;
  float fStack_134;
  undefined1 auStack_130 [8];
  float fStack_128;
  float fStack_124;
  undefined1 auStack_120 [12];
  float fStack_114;
  undefined1 auStack_110 [12];
  float fStack_104;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auStack_140._4_4_ = (float)(int)param_2[4] * 0.0078125 * 0.429043;
  auStack_70._0_4_ = (float)(int)param_2[7] * 0.0078125 * 0.429043;
  auStack_50._0_4_ = (float)(int)param_2[3] * 0.0078125 * 0.511664;
  auStack_70._4_4_ = (float)(int)param_2[5] * 0.0078125 * 0.429043;
  auStack_50._4_4_ = (float)(int)param_2[1] * 0.0078125 * 0.511664;
  fStack_114 = (float)(int)param_2[2] * 0.0078125 * 0.511664;
  auStack_140._0_4_ = (float)(int)param_2[8] * 0.0078125 * 0.429043;
  fStack_138 = (float)auStack_70._0_4_;
  fStack_134 = (float)auStack_50._0_4_;
  auStack_130._4_4_ = (float)(int)param_2[8] * 0.0078125 * -0.429043;
  auStack_130._0_4_ = auStack_140._4_4_;
  fStack_128 = (float)auStack_70._4_4_;
  fStack_124 = (float)auStack_50._4_4_;
  auStack_120._8_4_ = (float)(int)param_2[6] * 0.0078125 * 0.743125;
  auStack_120._0_8_ = auStack_70;
  auStack_110._8_4_ = fStack_114;
  auStack_110._0_8_ = auStack_50;
  fStack_104 = (float)(int)*param_2 * 0.0078125 * 0.886227 -
               (float)(int)param_2[6] * 0.0078125 * 0.247705;
  if (param_1 != 0) {
    pauVar8 = (undefined1 (*) [16])param_1;
    auVar9 = _lqc2(*pauVar8);
    auVar11 = _lqc2(pauVar8[1]);
    auVar3 = _qmfc2(auVar9._0_4_);
    auVar10 = _sqc2(auVar9);
    auVar4 = _qmfc2(auVar11._0_4_);
    auStack_50._4_4_ = auVar10._4_4_;
    auStack_90._4_4_ = auStack_50._4_4_;
    auVar12 = _lqc2(pauVar8[2]);
    auVar10 = _sqc2(auVar9);
    auVar9 = _qmfc2(auVar12._0_4_);
    uStack_48 = auVar10._8_4_;
    auStack_90._8_4_ = uStack_48;
    auVar10 = _sqc2(auVar11);
    auStack_50._4_4_ = auVar10._4_4_;
    auStack_80._4_4_ = auStack_50._4_4_;
    auVar10 = _sqc2(auVar11);
    uStack_48 = auVar10._8_4_;
    auStack_80._8_4_ = uStack_48;
    auVar10 = _sqc2(auVar12);
    auStack_50._4_4_ = auVar10._4_4_;
    auVar10 = _sqc2(auVar12);
    uStack_48 = auVar10._8_4_;
    auStack_90._0_4_ = auVar3._0_4_;
    auStack_90._12_4_ = 0;
    auStack_80._0_4_ = auVar4._0_4_;
    auStack_80._12_4_ = 0;
    auStack_70._4_4_ = auStack_50._4_4_;
    auStack_70._0_4_ = auVar9._0_4_;
    uStack_68 = uStack_48;
    uStack_64 = 0;
    _auStack_50 = ZEXT812(0);
    uStack_44 = 0x3f800000;
    auVar17 = _lqc2(_auStack_50);
    auVar14 = _lqc2(auStack_90);
    auVar7 = _qmfc2(auVar17._0_4_);
    auVar15 = _lqc2(auStack_80);
    auVar12 = _qmfc2(auVar14._0_4_);
    auVar16 = _lqc2(_auStack_70);
    auVar9 = _lqc2(_auStack_140);
    auVar5 = _qmfc2(auVar15._0_4_);
    auVar4 = _lqc2(_auStack_130);
    auVar3 = _lqc2(_auStack_120);
    auVar6 = _qmfc2(auVar16._0_4_);
    auVar10 = _lqc2(_auStack_110);
    _vmulabc(auVar9,auVar14);
    _vmaddabc(auVar4,auVar14);
    _vmaddabc(auVar3,auVar14);
    auVar11 = _vmaddbc(auVar10,auVar14);
    _vmulabc(auVar9,auVar15);
    _vmaddabc(auVar4,auVar15);
    _vmaddabc(auVar3,auVar15);
    auVar13 = _vmaddbc(auVar10,auVar15);
    _vmulabc(auVar9,auVar16);
    _vmaddabc(auVar4,auVar16);
    _vmaddabc(auVar3,auVar16);
    auVar18 = _vmaddbc(auVar10,auVar16);
    _vmulabc(auVar9,auVar17);
    _vmaddabc(auVar4,auVar17);
    _vmaddabc(auVar3,auVar17);
    auVar19 = _vmaddbc(auVar10,auVar17);
    _sqc2(auVar17);
    auVar10 = _sqc2(auVar14);
    auVar3 = _sqc2(auVar11);
    auVar4 = _sqc2(auVar13);
    _sqc2(auVar14);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar17);
    _sqc2(auVar11);
    _sqc2(auVar13);
    _sqc2(auVar11);
    _sqc2(auVar13);
    auVar9 = _sqc2(auVar18);
    auVar11 = _sqc2(auVar19);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar18);
    _sqc2(auVar19);
    auStack_50._4_4_ = auVar10._4_4_;
    auStack_80._0_4_ = auStack_50._4_4_;
    auVar10 = _sqc2(auVar15);
    auStack_50._4_4_ = auVar10._4_4_;
    auStack_80._4_4_ = auStack_50._4_4_;
    auVar10 = _sqc2(auVar16);
    auStack_50._4_4_ = auVar10._4_4_;
    auStack_80._8_4_ = auStack_50._4_4_;
    auVar10 = _sqc2(auVar17);
    auStack_50._4_4_ = auVar10._4_4_;
    auVar10 = _sqc2(auVar14);
    uStack_48 = auVar10._8_4_;
    auStack_70._0_4_ = uStack_48;
    auVar10 = _sqc2(auVar15);
    uStack_48 = auVar10._8_4_;
    auStack_70._4_4_ = uStack_48;
    auVar10 = _sqc2(auVar16);
    uStack_48 = auVar10._8_4_;
    uStack_68 = uStack_48;
    auVar10 = _sqc2(auVar17);
    uStack_48 = auVar10._8_4_;
    auVar10 = _sqc2(auVar14);
    uStack_44 = auVar10._12_4_;
    auStack_50._0_4_ = uStack_44;
    auVar10 = _sqc2(auVar15);
    uStack_44 = auVar10._12_4_;
    uVar1 = uStack_44;
    auVar10 = _sqc2(auVar16);
    uStack_44 = auVar10._12_4_;
    uVar2 = uStack_44;
    auVar10 = _sqc2(auVar17);
    uStack_44 = auVar10._12_4_;
    auStack_90._4_4_ = auVar5._0_4_;
    auStack_90._0_4_ = auVar12._0_4_;
    auStack_90._8_4_ = auVar6._0_4_;
    auStack_90._12_4_ = auVar7._0_4_;
    auStack_80._12_4_ = auStack_50._4_4_;
    uStack_64 = uStack_48;
    auStack_50._4_4_ = uVar1;
    uStack_48 = uVar2;
    auVar7 = _lqc2(_auStack_50);
    auVar12 = _lqc2(auStack_90);
    auVar5 = _lqc2(auStack_80);
    auVar6 = _lqc2(_auStack_70);
    auVar3 = _lqc2(auVar3);
    auVar10 = _lqc2(auVar4);
    _vmulabc(auVar12,auVar3);
    _vmaddabc(auVar5,auVar3);
    _vmaddabc(auVar6,auVar3);
    auVar4 = _vmaddbc(auVar7,auVar3);
    _vmulabc(auVar12,auVar10);
    _vmaddabc(auVar5,auVar10);
    _vmaddabc(auVar6,auVar10);
    auVar13 = _vmaddbc(auVar7,auVar10);
    auVar3 = _lqc2(auVar9);
    auVar10 = _lqc2(auVar11);
    _vmulabc(auVar12,auVar3);
    _vmaddabc(auVar5,auVar3);
    _vmaddabc(auVar6,auVar3);
    auVar3 = _vmaddbc(auVar7,auVar3);
    _vmulabc(auVar12,auVar10);
    _vmaddabc(auVar5,auVar10);
    _vmaddabc(auVar6,auVar10);
    auVar10 = _vmaddbc(auVar7,auVar10);
    _sqc2(auVar7);
    _auStack_140 = _sqc2(auVar4);
    _auStack_130 = _sqc2(auVar13);
    _auStack_120 = _sqc2(auVar3);
    _auStack_110 = _sqc2(auVar10);
    _sqc2(auVar12);
    _sqc2(auVar5);
    _sqc2(auVar6);
    _sqc2(auVar7);
    _sqc2(auVar4);
    _sqc2(auVar13);
    _sqc2(auVar3);
    _sqc2(auVar10);
    _sqc2(auVar4);
    _sqc2(auVar13);
    _sqc2(auVar3);
    _sqc2(auVar10);
  }
  auVar4 = _lqc2(_auStack_120);
  auVar11 = _lqc2(_auStack_140);
  _lqc2(*param_3);
  auVar10 = _vsubbc(auVar11,auVar4);
  auVar9 = _lqc2(_auStack_130);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar12 = _lqc2(_DAT_004432f0);
  auVar3 = _vsubbc(auVar9,auVar4);
  _vmove(auVar10);
  auVar6 = _vaddbc(auVar11,auVar4);
  auVar10 = _sqc2(auVar10);
  *param_3 = auVar10;
  auVar10 = _vaddbc(in_vf0,auVar3);
  auVar10 = _sqc2(auVar10);
  *param_3 = auVar10;
  auVar10 = _vaddbc(auVar11,auVar9);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar3 = _lqc2(_auStack_110);
  auVar10 = _sqc2(auVar10);
  *param_3 = auVar10;
  auVar7 = _vaddbc(auVar9,auVar4);
  auVar10 = _vmove(auVar12);
  auVar5 = _vaddbc(auVar4,auVar3);
  auVar10 = _sqc2(auVar10);
  *param_3 = auVar10;
  auVar11 = _vaddbc(auVar11,auVar3);
  auVar9 = _vaddbc(auVar9,auVar3);
  auVar4 = _vaddbc(auVar4,auVar3);
  _lqc2(*param_4);
  auVar10 = _vaddbc(in_vf0,auVar6);
  auVar12 = _lqc2(_DAT_004432f0);
  _vmove(auVar10);
  auVar3 = _vaddbc(in_vf0,auVar7);
  auVar10 = _sqc2(auVar10);
  *param_4 = auVar10;
  _vmove(auVar3);
  auVar10 = _vaddbc(in_vf0,auVar5);
  auVar10 = _sqc2(auVar10);
  *param_4 = auVar10;
  auVar10 = _vmove(auVar12);
  auVar10 = _sqc2(auVar10);
  *param_4 = auVar10;
  _lqc2(*param_5);
  auVar10 = _vaddbc(in_vf0,auVar11);
  auVar11 = _lqc2(_DAT_004432f0);
  _vmove(auVar10);
  auVar3 = _vaddbc(in_vf0,auVar9);
  auVar10 = _sqc2(auVar10);
  *param_5 = auVar10;
  _vmove(auVar3);
  auVar10 = _vaddbc(in_vf0,auVar4);
  auVar10 = _sqc2(auVar10);
  *param_5 = auVar10;
  auVar10 = _vmove(auVar11);
  auVar10 = _sqc2(auVar10);
  *param_5 = auVar10;
  return;
}


// ==== FUN_001af180 @ 001af180 ====

void FUN_001af180(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[5] = param_3;
  param_1[4] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_001af1a0 @ 001af1a0 ====

undefined4
FUN_001af1a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  param_1[2] = 0;
  return 1;
}


// ==== FUN_001af1b8 @ 001af1b8 ====

void FUN_001af1b8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ==== FUN_001af1c0 @ 001af1c0 ====
// GLOBAL DAT_00443350 undefined4

void FUN_001af1c0(float param_1,int *param_2,undefined4 param_3,undefined1 *param_4,uint param_5,
                 undefined4 param_6,undefined4 *param_7,long param_8,long param_9)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_7 == (undefined4 *)0x0) {
    param_7 = &DAT_00443350;
  }
  if (param_2[2] < param_2[3]) {
    uVar4 = (uint)param_4 & 0x7fffffff;
    puVar3 = (undefined4 *)(*param_2 + param_2[2] * 0x14);
    *puVar3 = param_3;
    puVar3[1] = param_7;
    if (param_8 != 0) {
      uVar4 = uVar4 | 0x80000000;
    }
    param_5 = param_5 & 0x7fffffff;
    puVar3[2] = uVar4;
    if (param_9 != 0) {
      param_5 = param_5 | 0x80000000;
    }
    puVar3[4] = param_6;
    puVar3[3] = param_5;
    iVar2 = param_2[2];
    if (param_2[1] != 0) {
      puVar1 = (ushort *)(param_2[1] + iVar2 * 8);
      *puVar1 = (ushort)*(undefined4 *)(param_4 + 4) ^
                (ushort)((uint)*(undefined4 *)(param_4 + 4) >> 0x10);
      puVar1[1] = (ushort)(int)(param_1 * 100.0);
      *(undefined1 *)(puVar1 + 3) = *param_4;
      *(undefined1 *)((int)puVar1 + 7) = param_4[1];
      puVar1[2] = *(ushort *)(param_2 + 2);
      iVar2 = param_2[2];
    }
    param_2[2] = iVar2 + 1;
  }
  return;
}


// ==== FUN_001af298 @ 001af298 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040e5f0 undefined4_*
// GLOBAL DAT_70002d7c undefined4

void FUN_001af298(int *param_1)

{
  int iVar1;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  if (param_1[1] != 0) {
    FUN_0035ec50(param_1[1],param_1[2],8,param_1[5]);
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar8 = _vmove(in_vf0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  *(undefined4 *)(DAT_0040f4c0 + 0xcd70) = 0;
  auStack_e0 = _sqc2(auVar5);
  auStack_d0 = _sqc2(auVar6);
  auStack_c0 = _sqc2(auVar7);
  auStack_b0 = _sqc2(auVar8);
  memcpy(&DAT_70002d7c,auStack_e0,0x40);
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    iVar3 = 0;
    if (0 < param_1[2]) {
      iVar4 = 0;
      do {
        puVar2 = (undefined4 *)(*param_1 + iVar4);
        FUN_001c62f0(*puVar2,puVar2[1],puVar2[2] & 0x7fffffff,puVar2[3] & 0x7fffffff,puVar2[4],
                     (int)puVar2[2] < 0,(int)puVar2[3] < 0);
        if (*(char *)((puVar2[2] & 0x7fffffff) + 3) == '\x02') {
          FUN_001af8f8(DAT_0040f4c0 + 0x14,puVar2);
          iVar1 = param_1[2];
        }
        else {
          iVar1 = param_1[2];
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar3 < iVar1);
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_1[2]) {
      do {
        puVar2 = (undefined4 *)(*param_1 + *(short *)(iVar3 + 4) * 0x14);
        FUN_001c62f0(*puVar2,puVar2[1],puVar2[2] & 0x7fffffff,puVar2[3] & 0x7fffffff,puVar2[4],
                     (int)puVar2[2] < 0,(int)puVar2[3] < 0);
        if (*(char *)((puVar2[2] & 0x7fffffff) + 3) == '\x02') {
          FUN_001af8f8(DAT_0040f4c0 + 0x14,puVar2);
          iVar1 = param_1[2];
        }
        else {
          iVar1 = param_1[2];
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar4 < iVar1);
    }
  }
  auVar6._8_8_ = in_v1_udw;
  auVar6._0_8_ = 0x1100000011000000;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x10000000;
  auVar5 = _pcpyld(auVar6,auVar5);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  return;
}


// ==== FUN_001af4c0 @ 001af4c0 ====

void FUN_001af4c0(int param_1)

{
  FUN_001af180(param_1 + 0xca58,0,0x1ca258);
  FUN_001af180(param_1 + 0xca70,1,0x1ca258);
  FUN_001af180(param_1 + 0xca88,2,0x1ca208);
  FUN_001af180(param_1 + 0xcaa0,3,0);
  FUN_001af180(param_1 + 0xcab8,4,0);
  FUN_001af180(param_1 + 0xcad0,5,0);
  FUN_001af180(param_1 + 0xcae8,6,0);
  return;
}


// ==== FUN_001af580 @ 001af580 ====

undefined4 FUN_001af580(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  FUN_001af1a0(iVar3 + 0xca58,param_1,iVar3 + 37000,*param_2);
  iVar2 = *param_2;
  FUN_001af1a0(iVar3 + 0xca70,iVar2 * 0x14 + iVar3,iVar3 + iVar2 * 8 + 37000,param_2[1]);
  iVar2 = iVar2 + param_2[1];
  FUN_001af1a0(iVar3 + 0xca88,iVar2 * 0x14 + iVar3,iVar3 + iVar2 * 8 + 37000,param_2[2]);
  iVar1 = param_2[2];
  FUN_001af1a0(iVar3 + 0xcaa0,(iVar2 + iVar1) * 0x14 + iVar3,0,param_2[3]);
  iVar2 = iVar2 + iVar1 + param_2[3];
  FUN_001af1a0(iVar3 + 0xcab8,iVar2 * 0x14 + iVar3,0,param_2[4]);
  iVar2 = iVar2 + param_2[4];
  FUN_001af1a0(iVar3 + 0xcad0,iVar2 * 0x14 + iVar3,0,param_2[5]);
  FUN_001af1a0(iVar3 + 0xcae8,(iVar2 + param_2[5]) * 0x14 + iVar3,0,param_2[6]);
  return 1;
}


// ==== FUN_001af6d0 @ 001af6d0 ====

void FUN_001af6d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0xca58;
  iVar2 = 6;
  do {
    iVar2 = iVar2 + -1;
    FUN_001af1b8(iVar1);
    iVar1 = iVar1 + 0x18;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0xcbc8) = 0;
  return;
}


// ==== FUN_001af738 @ 001af738 ====

void FUN_001af738(int param_1,int param_2)

{
  FUN_001af1c0(param_1 + (uint)*(byte *)(param_2 + 9) * 0x18 + 0xca58);
  return;
}


// ==== FUN_001af768 @ 001af768 ====

void FUN_001af768(int param_1,int param_2)

{
  FUN_001af298(param_1 + param_2 * 0x18 + 0xca58);
  return;
}


// ==== FUN_001af798 @ 001af798 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040e5f0 undefined4_*

void FUN_001af798(int param_1)

{
  undefined4 *puVar1;
  undefined8 in_v1_udw;
  undefined8 in_a1_udw;
  undefined4 *puVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar7 = _vmove(in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  iVar3 = 0;
  auStack_b0 = _sqc2(auVar4);
  auStack_a0 = _sqc2(auVar5);
  auStack_90 = _sqc2(auVar6);
  auStack_80 = _sqc2(auVar7);
  memcpy(0x70002d7c,auStack_b0,0x40);
  *(undefined4 *)(DAT_0040f4c0 + 0xcd70) = 1;
  if (0 < *(int *)(param_1 + 0xcbc8)) {
    puVar2 = (undefined4 *)(param_1 + 0xcb00);
    puVar1 = (undefined4 *)*puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_001c62f0(*puVar1,puVar1[1],puVar1[2] & 0x7fffffff,puVar1[3] & 0x7fffffff,puVar1[4],
                   (int)puVar1[2] < 0,(int)puVar1[3] < 0);
      if (*(int *)(param_1 + 0xcbc8) <= iVar3) break;
      puVar1 = (undefined4 *)*puVar2;
    }
  }
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = 0x1100000011000000;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0x10000000;
  auVar4 = _pcpyld(auVar5,auVar4);
  *(undefined4 *)(DAT_0040f4c0 + 0xcd70) = 0;
  *DAT_0040e5f0 = auVar4._0_4_;
  DAT_0040e5f0[1] = auVar4._4_4_;
  DAT_0040e5f0[2] = auVar4._8_4_;
  DAT_0040e5f0[3] = auVar4._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  return;
}


// ==== FUN_001af8f8 @ 001af8f8 ====

void FUN_001af8f8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xcbc8) < 0x32) {
    *(undefined4 *)(param_1 + *(int *)(param_1 + 0xcbc8) * 4 + 0xcb00) = param_2;
    *(int *)(param_1 + 0xcbc8) = *(int *)(param_1 + 0xcbc8) + 1;
  }
  return;
}


// ==== FUN_001af930 @ 001af930 ====
// GLOBAL DAT_0040f4c0 int

void FUN_001af930(int param_1)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_1;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_1;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      FUN_001c64e8(*(int *)(param_1 + 0x1c) + iVar6);
      iVar6 = iVar6 + 0x30;
    } while (iVar5 < *(int *)(param_1 + 0x24));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    iVar6 = *(int *)(param_1 + 0x4c);
    while( true ) {
      piVar2 = (int *)(iVar5 * 4 + iVar6);
      iVar6 = *piVar2;
      if (iVar6 != 0) {
        *piVar2 = iVar6 + param_1;
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(param_1 + 0x50) <= iVar5) break;
      iVar6 = *(int *)(param_1 + 0x4c);
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar6 = *(int *)(param_1 + 0x60);
    while( true ) {
      piVar2 = (int *)(iVar5 * 4 + iVar6);
      iVar6 = *piVar2;
      if (iVar6 != 0) {
        *piVar2 = iVar6 + param_1;
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(param_1 + 0x5c) <= iVar5) break;
      iVar6 = *(int *)(param_1 + 0x60);
    }
  }
  iVar5 = 0;
  if (*(char *)(param_1 + 0x68) != '\0') {
    iVar6 = 0;
    do {
      iVar3 = iVar6 + *(int *)(param_1 + 0x48);
      iVar4 = *(int *)(iVar3 + 0xc0);
      if (iVar4 != 0) {
        *(int *)(iVar3 + 0xc0) = iVar4 + param_1;
      }
      iVar3 = iVar6 + *(int *)(param_1 + 0x48);
      iVar4 = *(int *)(iVar3 + 0xc4);
      if (iVar4 != 0) {
        *(int *)(iVar3 + 0xc4) = iVar4 + param_1;
      }
      if (*(int *)(iVar5 * 0xd0 + *(int *)(param_1 + 0x48) + 0xc0) == 0) {
        iVar4 = *(int *)(param_1 + 0x48);
      }
      else {
        FUN_0027e760();
        iVar4 = *(int *)(param_1 + 0x48);
      }
      iVar4 = iVar5 * 0xd0 + iVar4;
      iVar3 = *(int *)(iVar4 + 200);
      if (iVar3 != 0) {
        *(int *)(iVar4 + 200) = iVar3 + param_1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xd0;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x68));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    iVar6 = *(int *)(param_1 + 0x20);
    while( true ) {
      iVar5 = iVar5 + 1;
      psVar1 = (short *)(iVar4 + iVar6);
      iVar4 = iVar4 + 6;
      FUN_001affd8(DAT_0040f4c0 + 0xcd70,*(int *)(param_1 + 0x38) + (int)*psVar1,
                   *(undefined4 *)(param_1 + 0x4c));
      if (*(int *)(param_1 + 0x24) <= iVar5) break;
      iVar6 = *(int *)(param_1 + 0x20);
    }
  }
  return;
}


// ==== FUN_001afba8 @ 001afba8 ====

ushort FUN_001afba8(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_001afbf0();
  iVar2 = *(int *)(param_1 + 0x48) + iVar2 * 0xd0;
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + 0x5a) >> 5 & 1;
  }
  return uVar1;
}


// ==== FUN_001afbf0 @ 001afbf0 ====

int FUN_001afbf0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0x69) != 0) {
    piVar2 = *(int **)(param_1 + 100);
    do {
      if (*piVar2 == -1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x69));
  }
  return -1;
}


// ==== FUN_001afc30 @ 001afc30 ====

ushort FUN_001afc30(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_001afbf0();
  iVar2 = *(int *)(param_1 + 0x48) + iVar2 * 0xd0;
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + 0x58) >> 0xe & 1;
  }
  return uVar1;
}


// ==== FUN_001afc78 @ 001afc78 ====

void FUN_001afc78(void)

{
  return;
}


// ==== FUN_001afc80 @ 001afc80 ====

undefined4 FUN_001afc80(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined8 in_v1_udw;
  undefined8 in_a3_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  auVar2._8_8_ = in_a3_udw;
  auVar2._0_8_ = 1;
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x48) + param_3 * 0xd0 + 0x28);
  param_1[1] = param_3;
  *param_1 = uVar4;
  bVar1 = *(byte *)(*(int *)(param_2 + 0x48) + param_3 * 0xd0 + 0xce);
  *(byte *)(param_1 + 2) = bVar1;
  auVar3._1_7_ = 0;
  auVar3[0] = bVar1;
  auVar3._8_8_ = in_v1_udw;
  auVar3 = _pmaxw(auVar2,auVar3);
  auVar3 = _pextlw(0,auVar3._0_8_);
  *(char *)(param_1 + 2) = auVar3[0];
  return 1;
}


// ==== FUN_001afcc8 @ 001afcc8 ====

undefined4 FUN_001afcc8(void)

{
  return 1;
}


// ==== FUN_001afcd0 @ 001afcd0 ====

void FUN_001afcd0(void)

{
  return;
}


// ==== FUN_001afcd8 @ 001afcd8 ====

undefined4 FUN_001afcd8(float param_1,float *param_2)

{
  float fVar1;
  
  if ((param_2[1] != -NAN) && (fVar1 = *param_2, *param_2 = fVar1 - param_1, fVar1 - param_1 <= 0.0)
     ) {
    *param_2 = 0.0;
    return 1;
  }
  return 0;
}


// ==== FUN_001afd18 @ 001afd18 ====

void FUN_001afd18(undefined4 *param_1,int param_2,long param_3)

{
  if (param_1[1] != -1) {
    if (param_3 == 0) {
      param_1[1] = (int)*(short *)(*(int *)(param_2 + 0x48) + param_1[1] * 0xd0 + 0xcc);
    }
    else {
      param_1[1] = 0xffffffff;
    }
    if (param_1[1] != -1) {
      *param_1 = *(undefined4 *)(*(int *)(param_2 + 0x48) + param_1[1] * 0xd0 + 0x28);
    }
  }
  return;
}


// ==== FUN_001afd80 @ 001afd80 ====

int FUN_001afd80(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) == -1) {
    return 0;
  }
  return *(int *)(param_2 + 0x48) + *(int *)(param_1 + 4) * 0xd0;
}


// ==== FUN_001afda8 @ 001afda8 ====

undefined4 FUN_001afda8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_001afdb0 @ 001afdb0 ====

undefined4 FUN_001afdb0(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_001afdb8 @ 001afdb8 ====

undefined4 FUN_001afdb8(int param_1)

{
  if (param_1 == 0) {
    return 4;
  }
  if (param_1 != 1) {
    return 1;
  }
  return 2;
}


// ==== FUN_001afde0 @ 001afde0 ====

void FUN_001afde0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  do {
    FUN_001c6aa0(iVar1);
    iVar1 = iVar1 + 0x38;
  } while (iVar1 < param_1 + 0x70);
  FUN_001c6aa0(param_1 + 0x70);
  return;
}


// ==== FUN_001afe38 @ 001afe38 ====
// GLOBAL DAT_0040f4c0 int_*

undefined4 FUN_001afe38(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = DAT_0040f4c0[1];
  iVar2 = *DAT_0040f4c0;
  puVar4 = param_1;
  do {
    iVar1 = FUN_001afdb8(iVar5);
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 / iVar1;
    iVar2 = iVar2 / iVar1;
    FUN_001c6ab8(puVar4,iVar2,iVar3);
    puVar4 = puVar4 + 0xe;
  } while (iVar5 < 2);
  FUN_001c6ab8(param_1 + 0x1c,*param_1,param_1[1]);
  return 1;
}


// ==== FUN_001afee0 @ 001afee0 ====

void FUN_001afee0(int param_1)

{
  *(int *)(param_1 + 0x248) = param_1 + 0x200;
  *(int *)(param_1 + 0x24c) = param_1 + 0x204;
  *(int *)(param_1 + 0x250) = param_1 + 0x208;
  *(int *)(param_1 + 0x254) = param_1 + 0x210;
  *(int *)(param_1 + 0x214) = param_1 + 4;
  *(int *)(param_1 + 0x218) = param_1 + 8;
  *(int *)(param_1 + 0x234) = param_1 + 0xc;
  *(int *)(param_1 + 0x21c) = param_1 + 0x10;
  *(int *)(param_1 + 0x220) = param_1 + 0x60;
  *(int *)(param_1 + 0x224) = param_1 + 0xb0;
  *(int *)(param_1 + 0x228) = param_1 + 0x100;
  *(int *)(param_1 + 0x22c) = param_1 + 0x150;
  *(int *)(param_1 + 0x230) = param_1 + 0x1a0;
  *(int *)(param_1 + 0x23c) = param_1 + 0x1f0;
  *(int *)(param_1 + 0x238) = param_1 + 0x1f8;
  *(int *)(param_1 + 0x244) = param_1 + 0x1fc;
  *(undefined4 *)(param_1 + 0x240) = 0;
  return;
}


// ==== FUN_001aff88 @ 001aff88 ====

undefined4 FUN_001aff88(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + 0x214);
}


// ==== FUN_001aff98 @ 001aff98 ====

void FUN_001aff98(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_001aff88(param_1,*(undefined1 *)param_2);
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2);
  return;
}


// ==== FUN_001affd8 @ 001affd8 ====

void FUN_001affd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_001aff88(param_1,*(undefined1 *)param_2);
  (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),param_2,param_3);
  return;
}


// ==== FUN_001b0028 @ 001b0028 ====

void FUN_001b0028(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_001aff88(param_1,*(undefined1 *)param_2);
  (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_2);
  return;
}


// ==== FUN_001b0068 @ 001b0068 ====

undefined4 FUN_001b0068(void)

{
  return 1;
}


// ==== FUN_001b0070 @ 001b0070 ====

undefined8 FUN_001b0070(int param_1,undefined1 (*param_2) [16])

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined1 (*pauVar2) [16];
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
  undefined1 auVar14 [16];
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
  auVar4 = _sqc2(auVar6);
  auStack_e0._4_4_ = auVar4._4_4_;
  if (0.1 <= (float)auStack_e0._4_4_) {
    auVar4 = _qmtc2(0);
    iVar1 = 5;
    pauVar2 = &auStack_d0;
    do {
      _lqc2(*pauVar2);
      iVar1 = iVar1 + -1;
      auVar3 = _vmr32(auVar4);
      auVar3 = _sqc2(auVar3);
      *pauVar2 = auVar3;
      pauVar2 = pauVar2 + 2;
    } while (iVar1 != -1);
    auVar9 = _qmtc2(0x3f000000);
    auVar4 = _qmtc2(0x3cd013a9);
    auVar14 = _vmulbc(auVar6,auVar4);
    uStack_d8 = 0x3f800000;
    auStack_e0 = (undefined1  [8])0x3f8000003f800000;
    auVar3 = _pextlh(0,0x8000ff00ff00ff);
    uStack_d4 = *(undefined4 *)(param_2[2] + 4);
    pauVar2 = &auStack_d0;
    iVar1 = 5;
    auVar7 = _lqc2(*param_2);
    auVar11 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
    auVar8 = _qmtc2(0x43000000);
    auVar4 = _vsubbc(auVar11,auVar7);
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
    auVar12 = _lqc2(_auStack_e0);
    auVar4 = _vaddbc(auVar4,auVar9);
    auVar4 = _sqc2(auVar4);
    auVar6 = _vsubbc(auVar10,auVar7);
    auVar5 = _vaddbc(auVar6,auVar9);
    auVar13 = _vmulbc(auVar12,auVar8);
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
    uStack_d8 = auVar4._8_4_;
    auVar6 = _vsubbc(auVar8,auVar7);
    auVar4 = _sqc2(auVar5);
    auVar5 = _vaddbc(auVar6,auVar9);
    auVar6 = _vsubbc(auVar11,auVar7);
    uStack_bc = uStack_d8;
    auVar6 = _vaddbc(auVar6,auVar9);
    auVar12 = _vadd(auVar11,auVar14);
    uStack_d8 = auVar4._8_4_;
    uStack_9c = uStack_d8;
    auVar6 = _qmfc2(auVar6._0_4_);
    auVar4 = _sqc2(auVar5);
    uStack_c0 = auVar6._0_4_;
    auVar6 = _vsubbc(auVar10,auVar7);
    _lqc2(auStack_b0);
    auVar6 = _vaddbc(auVar6,auVar9);
    auVar7 = _vsubbc(auVar8,auVar7);
    auVar5 = _qmfc2(auVar6._0_4_);
    auVar7 = _vaddbc(auVar7,auVar9);
    auVar6 = _vftoi0(auVar13);
    auVar7 = _qmfc2(auVar7._0_4_);
    auVar6 = _qmfc2(auVar6._0_4_);
    auVar11 = _vadd(auVar8,auVar14);
    _lqc2(auStack_d0);
    auVar8 = _vadd(auVar10,auVar14);
    _lqc2(auStack_90);
    auVar9 = _vadd(in_vf0,auVar8);
    uStack_d8 = auVar4._8_4_;
    auVar8 = _vadd(in_vf0,auVar12);
    auVar11 = _vadd(in_vf0,auVar11);
    uStack_a0 = auVar5._0_4_;
    uStack_80 = auVar7._0_4_;
    auVar4 = _pminw(auVar6,auVar3);
    auStack_b0 = _sqc2(auVar9);
    auStack_d0 = _sqc2(auVar8);
    auVar4 = _ppach(in_zero_qw,auVar4);
    auStack_90 = _sqc2(auVar11);
    auVar6 = _qmtc2(0);
    auVar4 = _ppacb(in_zero_qw,auVar4);
    uStack_7c = uStack_d8;
    do {
      _lqc2(*pauVar2);
      iVar1 = iVar1 + -1;
      auVar3 = _vmr32(auVar6);
      *(int *)(pauVar2[1] + 8) = auVar4._0_4_;
      auVar3 = _sqc2(auVar3);
      *pauVar2 = auVar3;
      pauVar2 = pauVar2 + 2;
    } while (-1 < iVar1);
    FUN_0026ac48(&auStack_d0,3);
  }
  return 1;
}


// ==== FUN_001b0260 @ 001b0260 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f4d0 undefined4

void FUN_001b0260(int param_1)

{
  float fVar1;
  undefined1 in_zero_qw [16];
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  int iVar8;
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
  undefined1 auStack_140 [8];
  float fStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 auStack_118 [2];
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [16];
  
  iVar8 = 0;
  FUN_0026a6f0(*(undefined4 *)(DAT_0040f4c0 + 0xd540));
  uVar3 = FUN_00108328(DAT_0040f4c4,0x3f7200);
  FUN_0026a840(uVar3);
  FUN_0026ab20(0);
  FUN_0026aa68(0);
  FUN_0026a998(0);
  if (0 < *(int *)(param_1 + 0x180)) {
    do {
      pauVar7 = (undefined1 (*) [16])(iVar8 * 0x30 + param_1);
      if ((byte)pauVar7[2][8] < 2) {
        FUN_0026aa60(1);
        lVar4 = FUN_0012bd98(DAT_0040f4d0,*(undefined4 *)pauVar7[2]);
        if (lVar4 == 0) {
          iVar5 = *(int *)(param_1 + 0x180);
        }
        else if (*(int *)lVar4 == 0x1c) {
          auVar9 = _lqc2(*pauVar7);
          _lqc2(auStack_70);
          _vadd(in_vf0,auVar9);
          auVar10 = _qmtc2(0x3f000000);
          auVar9 = _vsubbc(in_vf0,in_vf0);
          auVar9 = _vaddbc(auVar9,auVar10);
          auStack_70 = _sqc2(auVar9);
          FUN_0027e308(*(undefined4 *)(((int *)lVar4)[3] + 8),auStack_70._0_8_,0x1b0070,pauVar7);
          iVar5 = *(int *)(param_1 + 0x180);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x180);
        }
      }
      else {
        auStack_140._4_4_ = SUB124(*(undefined1 (*) [12])pauVar7[1],4);
        if (0.1 <= (float)auStack_140._4_4_) {
          FUN_0026aa60(0);
          auVar10 = _lqc2(pauVar7[1]);
          auVar16 = _lqc2(*pauVar7);
          auVar9 = _sqc2(auVar10);
          auVar11 = _qmtc2(0x3f000000);
          auVar12 = _vmulbc(auVar10,auVar11);
          auVar10 = _vmulbc(auVar10,auVar11);
          auStack_140._4_4_ = auVar9._4_4_;
          auVar13 = _qmtc2(0);
          iVar5 = 5;
          auVar9 = _qmtc2(1.0 / (float)auStack_140._4_4_);
          auVar11 = _vmulbc(auVar12,auVar9);
          auVar10 = _vmulbc(auVar10,auVar9);
          auVar9 = _sqc2(auVar11);
          auVar10 = _qmfc2(auVar10._0_4_);
          fVar2 = auVar10._0_4_;
          fStack_138 = auVar9._8_4_;
          fVar1 = fStack_138;
          pauVar7 = &auStack_130;
          do {
            _lqc2(*pauVar7);
            iVar5 = iVar5 + -1;
            auVar9 = _vmr32(auVar13);
            auVar9 = _sqc2(auVar9);
            *pauVar7 = auVar9;
            pauVar7 = pauVar7 + 2;
          } while (iVar5 != -1);
          fStack_138 = 1.0;
          auStack_140 = (undefined1  [8])0x3f8000003f800000;
          auVar10 = _pextlh(0,0x8000ff00ff00ff);
          iVar5 = 5;
          auVar11 = _qmtc2(0x43000000);
          pauVar7 = &auStack_130;
          uStack_134 = *(undefined4 *)(iVar8 * 0x30 + param_1 + 0x24);
          auVar12 = _qmtc2(0);
          auVar9 = _lqc2(_auStack_140);
          auVar9 = _vmulbc(auVar9,auVar11);
          auVar9 = _vftoi0(auVar9);
          auVar9 = _qmfc2(auVar9._0_4_);
          auVar9 = _pminw(auVar9,auVar10);
          auVar9 = _ppach(in_zero_qw,auVar9);
          auVar9 = _ppacb(in_zero_qw,auVar9);
          do {
            _lqc2(*pauVar7);
            iVar5 = iVar5 + -1;
            auVar10 = _vmr32(auVar12);
            *(int *)(pauVar7[1] + 8) = auVar9._0_4_;
            auVar10 = _sqc2(auVar10);
            *pauVar7 = auVar10;
            pauVar7 = pauVar7 + 2;
          } while (-1 < iVar5);
          auVar10 = _qmtc2(0x3c23d70a);
          auVar9 = _qmtc2(fVar2 + fVar1);
          auVar14 = _vaddbc(auVar16,auVar10);
          auVar13 = _qmtc2(0x3f000000);
          auVar9 = _vaddbc(auVar14,auVar9);
          auVar17 = _vsubbc(auVar16,auVar13);
          auVar9 = _sqc2(auVar9);
          auVar10 = _vsubbc(auVar16,auVar13);
          auVar10 = _qmfc2(auVar10._0_4_);
          auVar11 = _qmtc2(fVar2 - fVar1);
          auStack_140._4_4_ = auVar9._4_4_;
          auVar15 = _qmtc2(-fVar2 + fVar1);
          auVar9 = _sqc2(auVar17);
          auVar12 = _vaddbc(auVar14,auVar11);
          lVar6 = (long)auVar10._0_4_;
          auVar18 = _vaddbc(auVar16,auVar13);
          auVar10 = _vaddbc(auVar16,auVar13);
          fStack_138 = auVar9._8_4_;
          auVar13 = _vaddbc(auVar14,auVar15);
          _lqc2(auStack_130);
          auVar9 = _pextlw((long)(int)fStack_138,lVar6);
          uStack_120 = 0;
          auVar11 = _pextlw((long)(int)auStack_140._4_4_,auVar9._0_8_);
          uStack_11c = 0;
          auVar10 = _qmfc2(auVar10._0_4_);
          auVar9 = _sqc2(auVar12);
          lVar4 = (long)auVar10._0_4_;
          auVar10 = _qmtc2(auVar11._0_4_);
          auVar11 = _qmtc2(fVar2 - fVar1);
          auVar10 = _vadd(in_vf0,auVar10);
          auStack_140._4_4_ = auVar9._4_4_;
          auVar9 = _sqc2(auVar18);
          auVar12 = _vaddbc(auVar14,auVar11);
          auStack_130 = _sqc2(auVar10);
          _lqc2(auStack_110);
          fStack_138 = auVar9._8_4_;
          _lqc2(auStack_f0);
          auVar9 = _pextlw((long)(int)fStack_138,lVar6);
          uStack_100 = 0;
          auVar9 = _pextlw((long)(int)auStack_140._4_4_,auVar9._0_8_);
          uStack_fc = 0x3f800000;
          auVar10 = _qmtc2(auVar9._0_4_);
          auVar9 = _sqc2(auVar13);
          auVar11 = _vadd(in_vf0,auVar10);
          auVar10 = _qmtc2(-fVar2 - fVar1);
          auStack_110 = _sqc2(auVar11);
          auVar11 = _vaddbc(auVar14,auVar10);
          uStack_e0 = 0x3f800000;
          auStack_140._4_4_ = auVar9._4_4_;
          auVar9 = _sqc2(auVar17);
          uStack_dc = 0;
          uStack_c0 = 0x3f800000;
          fStack_138 = auVar9._8_4_;
          uStack_bc = 0;
          auVar9 = _pextlw((long)(int)fStack_138,lVar4);
          auVar9 = _pextlw((long)(int)auStack_140._4_4_,auVar9._0_8_);
          auVar10 = _qmtc2(auVar9._0_4_);
          auVar9 = _sqc2(auVar13);
          auVar10 = _vadd(in_vf0,auVar10);
          auStack_f0 = _sqc2(auVar10);
          auStack_140._4_4_ = auVar9._4_4_;
          auVar9 = _sqc2(auVar17);
          fStack_138 = auVar9._8_4_;
          auVar9 = _pextlw((long)(int)fStack_138,lVar4);
          auVar9 = _pextlw((long)(int)auStack_140._4_4_,auVar9._0_8_);
          auVar10 = _qmtc2(auVar9._0_4_);
          auVar9 = _sqc2(auVar12);
          _lqc2(auStack_d0);
          auVar10 = _vadd(in_vf0,auVar10);
          _lqc2(auStack_90);
          auStack_140._4_4_ = auVar9._4_4_;
          auVar9 = _sqc2(auVar18);
          auStack_d0 = _sqc2(auVar10);
          _lqc2(auStack_b0);
          fStack_138 = auVar9._8_4_;
          uStack_7c = 0x3f800000;
          auVar9 = _pextlw((long)(int)fStack_138,lVar6);
          uStack_a0 = 0;
          auVar9 = _pextlw((long)(int)auStack_140._4_4_,auVar9._0_8_);
          uStack_9c = 0x3f800000;
          auVar10 = _qmtc2(auVar9._0_4_);
          auVar9 = _sqc2(auVar11);
          auVar10 = _vadd(in_vf0,auVar10);
          auStack_b0 = _sqc2(auVar10);
          uStack_80 = 0x3f800000;
          auStack_140._4_4_ = auVar9._4_4_;
          auVar9 = _sqc2(auVar18);
          fStack_138 = auVar9._8_4_;
          auVar9 = _pextlw((long)(int)fStack_138,lVar4);
          auVar9 = _pextlw((long)(int)auStack_140._4_4_,auVar9._0_8_);
          auVar9 = _qmtc2(auVar9._0_4_);
          auVar9 = _vadd(in_vf0,auVar9);
          auStack_90 = _sqc2(auVar9);
          FUN_0026ac48(&auStack_130,6);
          iVar5 = *(int *)(param_1 + 0x180);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x180);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  FUN_0026a998(1);
  FUN_0026abb0(0);
  FUN_0026a7a0();
  return;
}


// ==== FUN_001b0740 @ 001b0740 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f4d0 int

void FUN_001b0740(int param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (((*(int *)(param_2 + 0x38c) != 2) && (*(int *)(param_1 + 0x180) < 8)) && (param_3 != 0)) {
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _lqc2(*(undefined1 (*) [16])((int)param_3 + 0x30));
    auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
    auVar8 = _vsub(auVar8,auVar9);
    auVar8 = _vmul(auVar8,auVar8);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (auVar8._0_4_ < 400.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x180) * 0x30 + param_1 + 0x24) = 0x3f000000;
      if (*(int *)(param_2 + 0x38c) == 1) {
        fVar7 = *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(param_2 + 0x300);
        if (1.5 <= fVar7) {
          *(undefined4 *)(*(int *)(param_1 + 0x180) * 0x30 + param_1 + 0x24) = 0;
        }
        else {
          *(float *)(*(int *)(param_1 + 0x180) * 0x30 + param_1 + 0x24) = (1.0 - fVar7 / 1.5) * 0.5;
        }
        iVar2 = *(int *)(param_1 + 0x180);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x180);
      }
      uVar1 = *(undefined8 *)(param_2 + 0x1c0);
      uVar4 = *(undefined4 *)(param_2 + 0x1c8);
      uVar5 = *(undefined4 *)(param_2 + 0x1cc);
      puVar3 = (undefined4 *)(iVar2 * 0x30 + param_1);
      *puVar3 = (int)uVar1;
      puVar3[1] = (int)((ulong)uVar1 >> 0x20);
      puVar3[2] = uVar4;
      puVar3[3] = uVar5;
      uVar4 = *(undefined4 *)(param_2 + 0x1d4);
      uVar5 = *(undefined4 *)(param_2 + 0x1d8);
      uVar6 = *(undefined4 *)(param_2 + 0x1dc);
      iVar2 = *(int *)(param_1 + 0x180) * 0x30 + param_1;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0x1d0);
      *(undefined4 *)(iVar2 + 0x14) = uVar4;
      *(undefined4 *)(iVar2 + 0x18) = uVar5;
      *(undefined4 *)(iVar2 + 0x1c) = uVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x180) * 0x30 + param_1 + 0x20) =
           *(undefined4 *)(param_2 + 0x398);
      *(undefined1 *)(*(int *)(param_1 + 0x180) * 0x30 + param_1 + 0x28) =
           *(undefined1 *)(param_2 + 200);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
    }
  }
  return;
}


// ==== FUN_001b08a8 @ 001b08a8 ====

void FUN_001b08a8(int param_1)

{
  FUN_0027b148();
  *(undefined4 *)(param_1 + 0x84) = 0x3da3d70a;
  FUN_002a9240(0x3da3d70a,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x88) = 0x459c4000;
  FUN_002a9310(0x459c4000,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  return;
}


// ==== FUN_001b0910 @ 001b0910 ====

void FUN_001b0910(int param_1)

{
  FUN_0027acd0();
  *(float *)(param_1 + 0x90) = 1.0 / *(float *)(param_1 + 0x48);
  return;
}


// ==== FUN_001b0948 @ 001b0948 ====
// GLOBAL DAT_0040f4c0 int

void FUN_001b0948(undefined8 param_1)

{
  FUN_002a90c8(*(undefined4 *)((int)param_1 + 0x58));
  FUN_001c8560(DAT_0040f4c0 + 0xcfd0,param_1);
  return;
}


// ==== FUN_001b0988 @ 001b0988 ====

void FUN_001b0988(int param_1)

{
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_001cfb00();
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_001cfb00(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


// ==== FUN_001b0a20 @ 001b0a20 ====

undefined4 FUN_001b0a20(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  FUN_001cfb30();
  FUN_001cfb30(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  return 1;
}


// ==== FUN_001b0aa8 @ 001b0aa8 ====

void FUN_001b0aa8(void)

{
  FUN_001b0c88();
  return;
}


// ==== FUN_001b0ac8 @ 001b0ac8 ====
// GLOBAL DAT_0040f528 int

void FUN_001b0ac8(undefined4 *param_1)

{
  undefined1 in_zero_qw [16];
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  auStack_40 = *(undefined1 (*) [16])(DAT_0040f528 + 0x60);
  auVar1 = _por(in_zero_qw,*(undefined1 (*) [16])(DAT_0040f528 + 0x60));
  FUN_00272a60(auVar1._0_8_,&uStack_50,&fStack_4c,auStack_48);
  FUN_002728d0(uStack_50,0x3f800000,0x3f800000,auStack_40);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
  auVar1 = _sqc2(auVar3);
  _lqc2(auStack_40);
  auVar2 = _qmtc2((int)fStack_4c * (uint)(fStack_4c < 0.25) | (uint)(fStack_4c >= 0.25) * 0x3e800000
                 );
  fStack_54 = auVar1._12_4_;
  auVar1 = _vmulbc(in_vf0,auVar2);
  auStack_40 = _sqc2(auVar1);
  if (0.003921569 < fStack_54) {
    _vaddabc(auVar1,in_vf0);
    _vmsubabc(auVar1,auVar3);
    auVar1 = _vmaddbc(auVar3,auVar3);
    auStack_40 = _sqc2(auVar1);
  }
  *param_1 = auStack_40._0_4_;
  param_1[1] = auStack_40._4_4_;
  param_1[2] = auStack_40._8_4_;
  param_1[3] = auStack_40._12_4_;
  FUN_001cfb50();
  FUN_001cfb50(param_1 + 0x10,0.003921569 < (float)auStack_40._12_4_);
  return;
}


// ==== FUN_001b0bd0 @ 001b0bd0 ====

void FUN_001b0bd0(float param_1,int param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  
  param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
  _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
  auVar1 = _qmtc2((int)param_1 * (uint)(param_1 < 1.0) | (uint)(param_1 >= 1.0) * 0x3f800000);
  auVar1 = _vmulbc(in_vf0,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_2 + 0x70) = auVar1;
  return;
}


// ==== FUN_001b0c10 @ 001b0c10 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001b0c10(float param_1,undefined4 param_2,float param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar2;
  
  uVar1 = (undefined4)((ulong)param_5 >> 0x20);
  if (*(char *)(param_4 + 0xb0) == '\0') {
    fVar2 = *(float *)(DAT_0040f4d0 + 0x20);
    *(undefined1 *)(param_4 + 0xb0) = 1;
    *(float *)(param_4 + 0x80) = param_1;
    *(undefined4 *)(param_4 + 0x84) = param_2;
    *(int *)(param_4 + 0x90) = (int)param_5;
    *(undefined4 *)(param_4 + 0x94) = uVar1;
    *(undefined4 *)(param_4 + 0x98) = in_a1_udw;
    *(undefined4 *)(param_4 + 0x9c) = in_register_0000005c;
    *(float *)(param_4 + 0x88) = fVar2 + param_3;
    return;
  }
  if (*(char *)(param_4 + 0xb1) != '\0') {
    fVar2 = *(float *)(DAT_0040f4d0 + 0x20);
    *(float *)(param_4 + 0x80) = param_1;
    *(undefined4 *)(param_4 + 0x84) = param_2;
    *(int *)(param_4 + 0x90) = (int)param_5;
    *(undefined4 *)(param_4 + 0x94) = uVar1;
    *(undefined4 *)(param_4 + 0x98) = in_a1_udw;
    *(undefined4 *)(param_4 + 0x9c) = in_register_0000005c;
    *(undefined1 *)(param_4 + 0xb1) = 0;
    *(float *)(param_4 + 0x88) = fVar2 - param_1;
    return;
  }
  *(undefined1 *)(param_4 + 0xb1) = 1;
  return;
}


// ==== FUN_001b0c88 @ 001b0c88 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001b0c88(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(param_1 + 0x88);
    if (0.0 <= fVar5) {
      fVar4 = *(float *)(param_1 + 0x80);
      if (fVar5 < fVar4 + *(float *)(param_1 + 0x84)) {
        if (fVar5 < fVar4) {
          auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
          fVar5 = (float)((int)(fVar5 / fVar4) * (uint)(0.0 < fVar5 / fVar4));
          fVar5 = (float)((int)fVar5 * (uint)(fVar5 < 1.0) | (uint)(fVar5 >= 1.0) * 0x3f800000);
          auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
          auVar7 = _qmtc2(fVar5);
        }
        else {
          auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
          auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
          fVar5 = (fVar5 - fVar4) / *(float *)(param_1 + 0x84);
          fVar5 = (float)((int)fVar5 * (uint)(0.0 < fVar5));
          fVar5 = 1.0 - (float)((int)fVar5 * (uint)(fVar5 < 1.0) | (uint)(fVar5 >= 1.0) * 0x3f800000
                               );
          auVar7 = _qmtc2(fVar5);
        }
        auVar6 = _vmulbc(auVar6,auVar7);
        auVar7 = _qmtc2(fVar5);
        auVar6 = _vmove(auVar6);
        auVar6 = _vsub(auVar6,auVar8);
        auVar6 = _vmulbc(auVar6,auVar7);
        auVar6 = _vadd(auVar8,auVar6);
        auVar6 = _sqc2(auVar6);
        *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
      uVar3 = *(undefined4 *)(param_1 + 0x7c);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
      uVar3 = *(undefined4 *)(param_1 + 0x7c);
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(int *)(param_1 + 0x40) = (int)uVar1;
    *(int *)(param_1 + 0x44) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}


// ==== FUN_001b0d80 @ 001b0d80 ====

void FUN_001b0d80(int param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(int *)(param_1 + 0xa0) = (int)param_2;
  *(int *)(param_1 + 0xa4) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0xa8) = in_a1_udw;
  *(undefined4 *)(param_1 + 0xac) = in_register_0000005c;
  return;
}


// ==== FUN_001b0d88 @ 001b0d88 ====

void FUN_001b0d88(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  puVar1 = (undefined4 *)(param_1 + 0x15c);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x164) = 0x41700000;
  *(undefined1 *)(param_1 + 0x178) = 1;
  *(undefined1 *)(param_1 + 0xb0) = 0xc;
  *(undefined4 *)(param_1 + 0x170) = 0x42;
  *(undefined4 *)(param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0xc;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x42;
  *(undefined4 *)(param_1 + 0x16c) = 0x42;
  return;
}


// ==== FUN_001b0e00 @ 001b0e00 ====
// GLOBAL DAT_0040f4d0 int

/* Strings referenciadas:
     "caust0%d"
     "caust%d" */

undefined4 FUN_001b0e00(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b0 [16];
  
  iVar6 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x394);
  *(undefined4 *)(param_1 + 0x160) = 0;
  bVar2 = true;
  do {
    if (bVar2) {
      FUN_00369ff0(auStack_b0,8,0x3f7208,iVar6);
      iVar3 = *(int *)(iVar1 + 8);
    }
    else {
      FUN_00369ff0(auStack_b0,8,0x3f7218,iVar6);
      iVar3 = *(int *)(iVar1 + 8);
    }
    iVar6 = iVar6 + 1;
    iVar5 = 0;
    if (iVar3 < 1) {
LAB_001b0ed8:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xc);
      while( true ) {
        iVar3 = *(int *)(iVar5 * 0x10 + iVar3 + 8);
        lVar4 = stricmp(iVar3 + 0xa8,auStack_b0);
        iVar5 = iVar5 + 1;
        if (lVar4 == 0) break;
        if (*(int *)(iVar1 + 8) <= iVar5) goto LAB_001b0ed8;
        iVar3 = *(int *)(iVar1 + 0xc);
      }
    }
    if (iVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x160);
      *(int *)(param_1 + 0xe0 + iVar5 * 4) = iVar3;
      *(int *)(param_1 + 0x160) = iVar5 + 1;
    }
    bVar2 = iVar6 < 10;
    if (0x1f < iVar6) {
      *(undefined1 *)(param_1 + 0x178) = 1;
      return 1;
    }
  } while( true );
}


// ==== FUN_001b0f48 @ 001b0f48 ====

void FUN_001b0f48(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


// ==== FUN_001b0f50 @ 001b0f50 ====

void FUN_001b0f50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  return;
}


// ==== FUN_001b0f70 @ 001b0f70 ====
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_001b0f70(int param_1)

{
  return *(undefined4 *)
          (param_1 + ((int)(*(float *)(DAT_0040f4d0 + 0x20) * *(float *)(param_1 + 0x164)) %
                     *(int *)(param_1 + 0x160)) * 4 + 0xe0);
}


// ==== FUN_001b0fa8 @ 001b0fa8 ====

void FUN_001b0fa8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_2 + 0x174) = param_1;
  *(undefined4 *)(param_2 + 0x168) = param_3;
  *(undefined4 *)(param_2 + 0x16c) = param_4;
  *(undefined4 *)(param_2 + 0x170) = param_5;
  return;
}


// ==== FUN_001b0fc0 @ 001b0fc0 ====

void FUN_001b0fc0(void)

{
  return;
}


// ==== FUN_001b0fc8 @ 001b0fc8 ====

undefined4 FUN_001b0fc8(void)

{
  return 1;
}


// ==== FUN_001b0fd0 @ 001b0fd0 ====

void FUN_001b0fd0(undefined4 *param_1,undefined4 *param_2)

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
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}


// ==== FUN_001b0ff8 @ 001b0ff8 ====

void FUN_001b0ff8(undefined1 (*param_1) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar4 = _vsub(in_vf0,in_vf0);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  *(undefined4 *)(param_1[4] + 0xc) = 0;
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[1] = auVar1;
  auVar1 = _sqc2(auVar3);
  param_1[2] = auVar1;
  auVar1 = _sqc2(auVar4);
  param_1[3] = auVar1;
  *(undefined4 *)param_1[4] = 0;
  *(undefined4 *)(param_1[4] + 4) = 0;
  *(undefined4 *)(param_1[4] + 8) = 0;
  return;
}


// ==== FUN_001b1038 @ 001b1038 ====

undefined4
FUN_001b1038(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_2[0x10] = param_3;
  param_2[0x11] = param_4;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_2 = *param_5;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_5[5];
  uVar2 = param_5[6];
  uVar3 = param_5[7];
  param_2[4] = param_5[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_5[9];
  uVar2 = param_5[10];
  uVar3 = param_5[0xb];
  param_2[8] = param_5[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_5[0xc];
  uVar2 = param_5[0xd];
  uVar3 = param_5[0xe];
  uVar4 = param_5[0xf];
  param_2[0x13] = param_1;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  param_2[0x12] = param_1;
  return 1;
}


// ==== FUN_001b1070 @ 001b1070 ====

undefined4 FUN_001b1070(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  return 1;
}


// ==== FUN_001b1080 @ 001b1080 ====

undefined4 FUN_001b1080(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pauVar1 = (undefined1 (*) [16])param_1;
  if (*(int *)(pauVar1[4] + 4) != 0) {
    FUN_001b1648(*(int *)(pauVar1[4] + 4),param_1);
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar5 = _vsub(in_vf0,in_vf0);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  *(undefined4 *)(pauVar1[4] + 0xc) = 0;
  auVar2 = _sqc2(auVar2);
  *pauVar1 = auVar2;
  auVar2 = _sqc2(auVar3);
  pauVar1[1] = auVar2;
  auVar2 = _sqc2(auVar4);
  pauVar1[2] = auVar2;
  auVar2 = _sqc2(auVar5);
  pauVar1[3] = auVar2;
  *(undefined4 *)pauVar1[4] = 0;
  *(undefined4 *)(pauVar1[4] + 4) = 0;
  *(undefined4 *)(pauVar1[4] + 8) = 0;
  return 1;
}


// ==== FUN_001b10f8 @ 001b10f8 ====

void FUN_001b10f8(int param_1)

{
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x4c) - *(float *)(*(int *)(param_1 + 0x40) + 8)
  ;
  return;
}


// ==== FUN_001b1110 @ 001b1110 ====

void FUN_001b1110(int param_1)

{
  FUN_001b10f8();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


// ==== FUN_001b1138 @ 001b1138 ====

bool FUN_001b1138(int param_1)

{
  return 3.1535e+07 < *(float *)(*(int *)(param_1 + 0x40) + 8);
}


// ==== FUN_001b1168 @ 001b1168 ====

undefined4
FUN_001b1168(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_2 + 0x60) = param_4;
  *(undefined4 *)(param_2 + 100) = param_1;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 0x20) = *param_3;
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined4 *)(param_2 + 0x30) = param_3[4];
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined4 *)(param_2 + 0x40) = param_3[8];
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar3;
  uVar1 = param_3[0xc];
  uVar2 = param_3[0xd];
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  *(undefined1 *)(param_2 + 0x68) = param_5;
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  *(undefined4 *)(param_2 + 0x58) = uVar3;
  *(undefined4 *)(param_2 + 0x5c) = uVar4;
  return 1;
}


// ==== FUN_001b11a0 @ 001b11a0 ====

void FUN_001b11a0(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  uVar6 = 0;
  uVar1 = *param_2;
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((int)param_2 + 0xc);
  *(int *)(param_1 + 0x20) = (int)uVar1;
  *(int *)(param_1 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar1 = param_2[2];
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((int)param_2 + 0x1c);
  *(int *)(param_1 + 0x30) = (int)uVar1;
  *(int *)(param_1 + 0x34) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  uVar1 = param_2[4];
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((int)param_2 + 0x2c);
  *(int *)(param_1 + 0x40) = (int)uVar1;
  *(int *)(param_1 + 0x44) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar1 = param_2[6];
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((int)param_2 + 0x3c);
  *(int *)(param_1 + 0x50) = (int)uVar1;
  *(int *)(param_1 + 0x54) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  iVar2 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar2);
    if (((iVar2 != 1) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x40) != 0)) {
      auVar15 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x20));
      iVar3 = uVar6 * 0x40 + *(int *)(param_1 + 0x60);
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x40));
      _sqc2(auVar11);
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x50));
      _sqc2(auVar9);
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x60));
      _sqc2(auVar12);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
      _sqc2(auVar10);
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
      auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
      _vmulabc(auVar15,auVar11);
      _vmaddabc(auVar8,auVar11);
      auVar13 = _vmaddbc(auVar7,auVar11);
      _vmulabc(auVar15,auVar9);
      _vmaddabc(auVar8,auVar9);
      auVar14 = _vmaddbc(auVar7,auVar9);
      auStack_90 = _sqc2(auVar13);
      auStack_80 = _sqc2(auVar14);
      auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x30));
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x40));
      auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x50));
      _vmulabc(auVar15,auVar12);
      _vmaddabc(auVar9,auVar12);
      auVar11 = _vmaddbc(auVar8,auVar12);
      _vmulabc(auVar15,auVar10);
      _vmaddabc(auVar9,auVar10);
      _vmaddabc(auVar8,auVar10);
      auVar7 = _vmaddbc(auVar7,in_vf0);
      auStack_150 = _sqc2(auVar13);
      auStack_140 = _sqc2(auVar14);
      auStack_70 = _sqc2(auVar11);
      auStack_60 = _sqc2(auVar7);
      auStack_d0 = _sqc2(auVar13);
      auStack_c0 = _sqc2(auVar14);
      auStack_b0 = _sqc2(auVar11);
      auStack_a0 = _sqc2(auVar7);
      auStack_110 = _sqc2(auVar13);
      auStack_100 = _sqc2(auVar14);
      auStack_f0 = _sqc2(auVar11);
      auStack_e0 = _sqc2(auVar7);
      auStack_190 = _sqc2(auVar13);
      auStack_180 = _sqc2(auVar14);
      auStack_170 = _sqc2(auVar11);
      auStack_160 = _sqc2(auVar7);
      auStack_130 = _sqc2(auVar11);
      auStack_120 = _sqc2(auVar7);
      FUN_001b0fd0(iVar2,auStack_190);
    }
    uVar6 = uVar6 + 1 & 0xffff;
    iVar2 = uVar6 << 2;
  } while (uVar6 < 8);
  return;
}


// ==== FUN_001b1318 @ 001b1318 ====

undefined8 FUN_001b1318(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *puVar1 = *(undefined4 *)(param_2 + 0x20);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  puVar1[4] = *(undefined4 *)(param_2 + 0x30);
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  puVar1[8] = *(undefined4 *)(param_2 + 0x40);
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  puVar1[0xc] = *(undefined4 *)(param_2 + 0x50);
  puVar1[0xd] = uVar2;
  puVar1[0xe] = uVar3;
  puVar1[0xf] = uVar4;
  return param_1;
}


// ==== FUN_001b1340 @ 001b1340 ====

undefined4 FUN_001b1340(float param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
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
  
  iVar5 = (int)param_2;
  uVar7 = 0;
  uVar8 = 0;
  fVar9 = *(float *)(iVar5 + 100);
  iVar4 = 0;
  do {
    piVar6 = (int *)(iVar5 + iVar4);
    iVar2 = *piVar6;
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar5 + 0x60);
        sVar1 = *(short *)(iVar2 + uVar7 * 2 + 0xe);
        if (sVar1 == -1) {
          return uVar8;
        }
        fVar10 = *(float *)(iVar2 + iVar4 + 0x20);
        uVar8 = 1;
        if (fVar10 <= param_1 - fVar9) {
          auVar19 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x20));
          iVar2 = uVar7 * 0x40 + iVar2;
          auVar15 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
          _sqc2(auVar15);
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x50));
          _sqc2(auVar13);
          auVar16 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x60));
          _sqc2(auVar16);
          auVar14 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
          _sqc2(auVar14);
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x30));
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x40));
          _vmulabc(auVar19,auVar15);
          _vmaddabc(auVar12,auVar15);
          auVar17 = _vmaddbc(auVar11,auVar15);
          _vmulabc(auVar19,auVar13);
          _vmaddabc(auVar12,auVar13);
          auVar18 = _vmaddbc(auVar11,auVar13);
          auStack_e0 = _sqc2(auVar17);
          auStack_d0 = _sqc2(auVar18);
          auVar13 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x30));
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x40));
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x50));
          _vmulabc(auVar19,auVar16);
          _vmaddabc(auVar13,auVar16);
          auVar15 = _vmaddbc(auVar12,auVar16);
          _vmulabc(auVar19,auVar14);
          _vmaddabc(auVar13,auVar14);
          _vmaddabc(auVar12,auVar14);
          auVar11 = _vmaddbc(auVar11,in_vf0);
          auStack_1a0 = _sqc2(auVar17);
          auStack_190 = _sqc2(auVar18);
          auStack_c0 = _sqc2(auVar15);
          auStack_b0 = _sqc2(auVar11);
          auStack_120 = _sqc2(auVar17);
          auStack_110 = _sqc2(auVar18);
          auStack_100 = _sqc2(auVar15);
          auStack_f0 = _sqc2(auVar11);
          auStack_160 = _sqc2(auVar17);
          auStack_150 = _sqc2(auVar18);
          auStack_140 = _sqc2(auVar15);
          auStack_130 = _sqc2(auVar11);
          auStack_1e0 = _sqc2(auVar17);
          auStack_1d0 = _sqc2(auVar18);
          auStack_1c0 = _sqc2(auVar15);
          auStack_1b0 = _sqc2(auVar11);
          auStack_180 = _sqc2(auVar15);
          auStack_170 = _sqc2(auVar11);
          lVar3 = FUN_001b22d8(*(float *)(iVar5 + 100) + fVar10,param_3,param_2,sVar1,auStack_1e0);
          *piVar6 = (int)lVar3;
          if (lVar3 == 0) {
            *piVar6 = 1;
          }
        }
      }
      else if (*(int *)(iVar2 + 0x40) != 0) {
        uVar8 = 1;
      }
    }
    uVar7 = uVar7 + 1 & 0xffff;
    iVar4 = uVar7 << 2;
  } while (uVar7 < 8);
  return uVar8;
}


// ==== FUN_001b1518 @ 001b1518 ====

undefined4 FUN_001b1518(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  do {
    piVar2 = (int *)((int)param_1 + iVar1);
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        *piVar2 = 0;
      }
      else {
        FUN_001b1110(iVar1,param_1);
        *piVar2 = 0;
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
    iVar1 = uVar3 << 2;
  } while (uVar3 < 8);
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  return 1;
}


// ==== FUN_001b15a0 @ 001b15a0 ====

void FUN_001b15a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2);
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        if (*(short *)(*(int *)(param_1 + 0x60) + uVar3 * 2 + 0xe) == -1) {
          return;
        }
        *(int *)(param_1 + iVar2) = 1;
      }
      else if (*(int *)(iVar1 + 0x40) != 0) {
        FUN_001b10f8();
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
    iVar2 = uVar3 << 2;
  } while (uVar3 < 8);
  return;
}


// ==== FUN_001b1648 @ 001b1648 ====

void FUN_001b1648(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    if (*param_1 == param_2) {
      *param_1 = 1;
      return;
    }
  }
  do {
    while( true ) {
      uVar3 = uVar2 & 0xffff;
      if (7 < uVar3) {
        return;
      }
      iVar1 = param_1[uVar3];
      if (iVar1 != 1) break;
      uVar2 = uVar3 + 1;
    }
    uVar2 = uVar3 + 1;
  } while (iVar1 != param_2);
  param_1[uVar3] = 1;
  return;
}


// ==== FUN_001b16a8 @ 001b16a8 ====

undefined4 FUN_001b16a8(int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1) != 1) {
      if (*(int *)(param_1 + iVar1) == 0) {
        return 0;
      }
      lVar2 = FUN_001b1138();
      if (lVar2 != 0) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
    iVar1 = uVar3 << 2;
    if (7 < uVar3) {
      return 0;
    }
  } while( true );
}


// ==== FUN_001b1728 @ 001b1728 ====
// GLOBAL DAT_004432b0 undefined
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b1728(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  bool bVar1;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  float fVar2;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  *(int *)param_3[2] = (int)param_2;
  *(float *)(param_3[2] + 4) = fVar2;
  *(undefined4 *)(param_3[2] + 8) = in_a1_udw;
  *(undefined4 *)(param_3[2] + 0xc) = in_register_0000005c;
  if ((fVar2 < -0.9) || (bVar1 = false, 0.9 < fVar2)) {
    bVar1 = true;
  }
  if (bVar1) {
    auVar4 = _lqc2(param_3[2]);
    auVar3 = _lqc2(_DAT_004432b0);
    _vopmula(auVar3,auVar4);
    auVar3 = _vopmsub(auVar4,auVar3);
    _vopmula(auVar3,auVar4);
    auVar4 = _vopmsub(auVar4,auVar3);
    auVar3 = _sqc2(auVar3);
    param_3[1] = auVar3;
    auVar3 = _sqc2(auVar4);
    *param_3 = auVar3;
  }
  else {
    auVar4 = _lqc2(param_3[2]);
    auVar3 = _lqc2(_DAT_004432c0);
    _vopmula(auVar3,auVar4);
    auVar3 = _vopmsub(auVar4,auVar3);
    _vopmula(auVar4,auVar3);
    auVar4 = _vopmsub(auVar3,auVar4);
    auVar3 = _sqc2(auVar3);
    *param_3 = auVar3;
    auVar3 = _sqc2(auVar4);
    param_3[1] = auVar3;
  }
  auVar6 = _lqc2(*param_3);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(param_3[1]);
  auVar3 = _vmul(auVar6,auVar6);
  auVar4 = _vmul(auVar5,auVar5);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar7,auVar3);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar7,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar8 = _vwaitq();
  auVar3 = _vmulq(auVar6,uVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  uVar8 = _vwaitq();
  auVar4 = _vmulq(auVar5,uVar8);
  *(int *)param_3[3] = (int)param_1;
  *(int *)(param_3[3] + 4) = (int)((ulong)param_1 >> 0x20);
  *(undefined4 *)(param_3[3] + 8) = in_a0_udw;
  *(undefined4 *)(param_3[3] + 0xc) = in_register_0000004c;
  auVar3 = _sqc2(auVar3);
  *param_3 = auVar3;
  auVar3 = _sqc2(auVar4);
  param_3[1] = auVar3;
  return;
}


// ==== FUN_001b1848 @ 001b1848 ====
// GLOBAL DAT_0040f4d0 int

int FUN_001b1848(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  undefined1 (*pauVar1) [16];
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined8 in_a0_udw;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar4 = 0;
  fVar12 = 1e+08;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = param_1;
  auVar8 = _por(in_zero_qw,auVar8);
  iVar10 = 0;
  iVar6 = 0;
  fVar13 = fVar12;
  do {
    uVar9 = uVar4 + 1;
    iVar6 = DAT_0040f4d0 + (iVar6 >> 0x18) * 0x880 + 0x4990;
    if (*(char *)(iVar6 + 0x38) != '\0') {
      uVar7 = (uint)*(ushort *)(*(int *)(iVar6 + 0xc) + 0x90);
      uVar4 = 0;
      if (uVar7 != 0) {
        auVar14 = _vaddbc(in_vf0,in_vf0);
        auVar14 = _sqc2(auVar14);
        iVar5 = 0;
        do {
          pauVar1 = (undefined1 (*) [16])FUN_001282b0(*(int *)(iVar6 + 0x14) + iVar5);
          auVar16 = _lqc2(*pauVar1);
          auVar15 = _qmtc2(auVar8._0_4_);
          auVar15 = _vsub(auVar15,auVar16);
          auVar15 = _vmul(auVar15,auVar15);
          auVar16 = _lqc2(auVar14);
          _vaddabc(auVar15,auVar15);
          auVar15 = _vmaddbc(auVar16,auVar15);
          auVar15 = _qmfc2(auVar15._0_4_);
          fVar2 = auVar15._0_4_;
          if (fVar2 < fVar13) {
            iVar3 = FUN_001282b0(*(int *)(iVar6 + 0x14) + iVar5);
            fVar11 = *(float *)(iVar3 + 0xc) * *(float *)(iVar3 + 0xc);
            if ((fVar2 <= fVar11) && (fVar11 < fVar12)) {
              iVar10 = *(int *)(iVar6 + 0x14) + iVar5;
              fVar12 = fVar11;
              fVar13 = fVar2;
            }
          }
          uVar4 = uVar4 + 1 & 0xffff;
          iVar5 = uVar4 * 0xf0;
        } while (uVar4 < uVar7);
      }
    }
    uVar4 = uVar9 & 0xff;
    iVar6 = uVar9 * 0x1000000;
  } while (uVar4 < 2);
  return iVar10;
}


// ==== FUN_001b19e8 @ 001b19e8 ====

void FUN_001b19e8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001c1b78(iVar1 + 0x66280);
  FUN_001c2990(iVar1 + 0x66288);
  FUN_001bfed0(param_1);
  FUN_001c1578(iVar1 + 0x2dc30);
  FUN_001b6250(iVar1 + 0x66290);
  FUN_001b7590(iVar1 + 0x696f0);
  FUN_001b2408(iVar1 + 0x83710);
  FUN_001b2a78(iVar1 + 0x33c40);
  FUN_001bcc18(iVar1 + 0x4ee00);
  FUN_001bd620(iVar1 + 0x4eed0);
  FUN_001b8630(iVar1 + 0x54ab0);
  FUN_001b3d38(iVar1 + 0x512e0);
  FUN_001be2e0(iVar1 + 0x83720);
  FUN_001be938(iVar1 + 0x83d24);
  FUN_001bec18(iVar1 + 0x83fb0);
  FUN_001c1c40(iVar1 + 0x83ce0);
  FUN_001d4068(iVar1 + 0x83d20);
  FUN_00382348(0x418590,0x2b9d6f8);
  return;
}


// ==== FUN_001b1b28 @ 001b1b28 ====
// GLOBAL DAT_003c0e04 uint
// GLOBAL DAT_00418594 uint
// GLOBAL DAT_00418590 uint

undefined4 FUN_001b1b28(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0016b798();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x873f0) = param_2;
  FUN_001b6328(iVar1 + 0x66290,param_1);
  FUN_001b7640(iVar1 + 0x696f0,param_1);
  FUN_001b2438(iVar1 + 0x83710);
  FUN_001c1b88(iVar1 + 0x66280);
  FUN_001c29a0(iVar1 + 0x66288);
  FUN_001b90d0(iVar1 + 0x54ab0);
  FUN_001bcc30(iVar1 + 0x4ee00,param_1);
  FUN_001bd638(iVar1 + 0x4eed0);
  FUN_001b2ac8(iVar1 + 0x33c40);
  FUN_001b3d40(iVar1 + 0x512e0);
  FUN_001be2f0(iVar1 + 0x83720);
  FUN_001be940(iVar1 + 0x83d24);
  FUN_001bec68(iVar1 + 0x83fb0);
  FUN_001c2250(iVar1 + 0x83ca0);
  FUN_001c1c48(iVar1 + 0x83ce0);
  FUN_001d4070(iVar1 + 0x83d20);
  FUN_001bffe0(param_1,*(undefined4 *)(iVar1 + 0x873f0));
  FUN_001c15d0(iVar1 + 0x2dc30,*(undefined4 *)(iVar1 + 0x873f0));
  DAT_00418594 = DAT_003c0e04;
  DAT_00418590 = ~DAT_003c0e04;
  return 1;
}


// ==== FUN_001b1cb8 @ 001b1cb8 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001b1cb8(undefined8 param_1)

{
  int iVar1;
  
  FUN_001b1ef0();
  iVar1 = (int)param_1;
  FUN_001b2b60(iVar1 + 0x33c40);
  FUN_001bdee8(iVar1 + 0x4eed0);
  FUN_001b3f50(iVar1 + 0x512e0);
  FUN_001bcdf8(iVar1 + 0x4ee00);
  FUN_001b89c8(iVar1 + 0x54ab0);
  FUN_001b2710(iVar1 + 0x83710);
  FUN_001be960(iVar1 + 0x83d24);
  FUN_001b64c0(iVar1 + 0x66290);
  FUN_001b7758(iVar1 + 0x696f0);
  FUN_001c02a0(param_1);
  FUN_001c1810(iVar1 + 0x2dc30);
  FUN_001be330(iVar1 + 0x83720);
  FUN_001becd0(iVar1 + 0x83fb0);
  FUN_001c22a0(*(undefined4 *)(DAT_0040f4d0 + 0x1c),iVar1 + 0x83ca0);
  return;
}


// ==== FUN_001b1dc0 @ 001b1dc0 ====

void FUN_001b1dc0(int param_1)

{
  FUN_001b2b68(param_1 + 0x33c40);
  FUN_001b5028(param_1 + 0x512e0);
  return;
}


// ==== FUN_001b1e00 @ 001b1e00 ====
// GLOBAL DAT_0040f4c0 int

void FUN_001b1e00(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  FUN_001b86f8(iVar2 + 0x54ab0);
  FUN_001c1930(iVar2 + 0x2dc30);
  FUN_001be108(iVar2 + 0x4eed0);
  iVar1 = DAT_0040f4c0 + 0xd170;
  FUN_001c6668(iVar1);
  FUN_001c1a98(iVar2 + 0x66280,iVar1);
  FUN_001c05d8(param_1,0);
  FUN_001c67c0(iVar1,0);
  FUN_001c6860(iVar1,0);
  FUN_001bcf50(iVar2 + 0x4ee00);
  return;
}


// ==== FUN_001b1eb8 @ 001b1eb8 ====

void FUN_001b1eb8(undefined8 param_1)

{
  FUN_001b6908((int)param_1 + 0x66290);
  FUN_001c05f8(param_1);
  return;
}


// ==== FUN_001b1ef0 @ 001b1ef0 ====
// GLOBAL DAT_0040f4cc int

void FUN_001b1ef0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  
  uVar1 = *(undefined4 *)(DAT_0040f4cc + 0x8b00);
  iVar2 = DAT_0040f4cc + 0x2980;
  FUN_001de6f0(auStack_40,iVar2,uVar1);
  FUN_0016b7a0(iVar2,uVar1);
  return;
}


// ==== FUN_001b1f48 @ 001b1f48 ====

undefined4 FUN_001b1f48(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001b2d70(iVar1 + 0x33c40);
  FUN_001b5570(iVar1 + 0x512e0);
  FUN_001bcdd8(iVar1 + 0x4ee00);
  FUN_001be2a0(iVar1 + 0x4eed0);
  FUN_001b8638(iVar1 + 0x54ab0);
  FUN_001b78d8(iVar1 + 0x696f0);
  FUN_001b6910(iVar1 + 0x66290);
  FUN_001b2910(iVar1 + 0x83710);
  FUN_001be310(iVar1 + 0x83720);
  FUN_001beb28(iVar1 + 0x83d24);
  FUN_001becc8(iVar1 + 0x83fb0);
  FUN_001c1cc8(iVar1 + 0x83ce0);
  FUN_001d4078(iVar1 + 0x83d20);
  FUN_001c0600(param_1);
  FUN_001c19b0(iVar1 + 0x2dc30);
  FUN_001c1ba0(iVar1 + 0x66280);
  FUN_001c29a8(iVar1 + 0x66288);
  return 1;
}


// ==== FUN_001b2078 @ 001b2078 ====
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_00418590 uint
// GLOBAL DAT_00418594 int

/* WARNING: Removing unreachable block (ram,0x001b21f0) */

void FUN_001b2078(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [16];
  
  bVar1 = false;
  pauVar4 = (undefined1 (*) [16])param_4;
  if ((*(int *)(pauVar4[2] + 4) != 0) &&
     ((iVar3 = *(int *)(*(int *)(pauVar4[2] + 4) + 0xc4), iVar3 - 3U < 2 ||
      (bVar1 = true, iVar3 == 7)))) {
    bVar1 = false;
  }
  FUN_001b1728(*(undefined8 *)*pauVar4,*(undefined8 *)pauVar4[1],auStack_b0);
  iVar3 = (int)param_3;
  if (bVar1) {
    if (pauVar4[2][0xc] != -1) {
      if (*(int *)(*(int *)(pauVar4[2] + 4) + 0xc4) != 2) {
        FUN_001b7968(iVar3 + 0x696f0,auStack_b0,*(undefined2 *)(*(int *)(iVar3 + 0x873f0) + 0x3c));
      }
      goto LAB_001b2294;
    }
    iVar2 = *(int *)(pauVar4[2] + 4);
  }
  else {
    auVar6 = _lqc2(*pauVar4);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4bc + 2000));
    auVar6 = _vsub(auVar6,auVar7);
    auVar6 = _vmul(auVar6,auVar6);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    fVar5 = (auVar6._0_4_ - 400.0) * 0.0003125;
    fVar5 = (float)((int)fVar5 * (uint)(0.0 < fVar5));
    if ((float)((int)fVar5 * (uint)(fVar5 < 1.0) | (uint)(fVar5 >= 1.0) * 0x3f800000) <
        (float)DAT_00418590 * 2.3283064e-10) {
      FUN_001b2360(param_1,param_2,param_3,param_4);
    }
    iVar2 = *(int *)(pauVar4[2] + 4);
  }
  if ((iVar2 == 0) || ((ushort)(byte)pauVar4[2][8] != *(ushort *)(*(int *)(iVar3 + 0x873f0) + 0x3a))
     ) {
    FUN_001b7968(iVar3 + 0x696f0,auStack_b0);
  }
  else {
    FUN_001bc428(iVar3 + 0x54ab0,param_4,param_5);
  }
LAB_001b2294:
  FUN_001dde78(auStack_70,param_4,param_5);
  FUN_001de1f0(auStack_70,param_4,param_5);
  return;
}


// ==== FUN_001b22d8 @ 001b22d8 ====

undefined8 FUN_001b22d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = *(short *)((param_3 & 0xffff) * 0x34 + *(int *)(*(int *)((int)param_1 + 0x873f0) + 0x10));
  if (sVar1 == 1) {
    uVar2 = FUN_001c01e0(param_1,param_2);
  }
  else {
    uVar2 = 0;
    if (sVar1 == 2) {
      uVar2 = FUN_001c1740((int)param_1 + 0x2dc30,param_2);
    }
  }
  return uVar2;
}


// ==== FUN_001b2360 @ 001b2360 ====

void FUN_001b2360(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 0x40000000) == 0) {
    if ((ushort)*(byte *)(param_2 + 0x28) != *(ushort *)(*(int *)(param_1 + 0x873f0) + 0x3a)) {
      FUN_001b2e08(param_1 + 0x33c40,param_2,
                   *(undefined1 *)
                    (*(int *)(*(int *)(param_1 + 0x873f0) + 0x1c) + (uint)*(byte *)(param_2 + 0x28))
                  );
    }
  }
  return;
}


// ==== FUN_001b23c0 @ 001b23c0 ====

undefined4 FUN_001b23c0(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x873f0) + 8);
  iVar2 = *(int *)(iVar1 + 8);
  iVar4 = 0;
  if (0 < iVar2) {
    plVar3 = *(long **)(iVar1 + 0xc);
    do {
      iVar4 = iVar4 + 1;
      if (*plVar3 == param_2) {
        return (int)plVar3[1];
      }
      plVar3 = plVar3 + 2;
    } while (iVar4 < iVar2);
  }
  return 0;
}


// ==== FUN_001b2408 @ 001b2408 ====

void FUN_001b2408(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x1000000;
  do {
    *param_1 = 0;
    iVar1 = iVar2 >> 0x18;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = iVar2 + 0x1000000;
    param_1 = param_1 + 2;
  } while (iVar1 < 2);
  return;
}


// ==== FUN_001b2438 @ 001b2438 ====

undefined4 FUN_001b2438(void)

{
  return 1;
}


// ==== FUN_001b2440 @ 001b2440 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int

void FUN_001b2440(int *param_1,int param_2,long *param_3,byte param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  if (*param_1 == 0) {
    *(byte *)(param_1 + 1) = param_4;
    *param_1 = (int)param_3;
  }
  else {
    iVar4 = 1;
    while( true ) {
      iVar4 = (int)(char)iVar4;
      if (1 < iVar4) break;
      piVar2 = param_1 + iVar4 * 2;
      if (*piVar2 == 0) {
        *(byte *)(piVar2 + 1) = param_4;
        *piVar2 = (int)param_3;
        break;
      }
      iVar4 = iVar4 + 1;
    }
  }
  bVar3 = 0;
  if (param_4 != 0) {
    auVar10 = _vadd(in_vf0,in_vf0);
    auVar10 = _sqc2(auVar10);
    fVar9 = 0.0;
    do {
      bVar3 = bVar3 + 1;
      uVar5 = 0;
      do {
        iVar4 = uVar5 * 4;
        uVar5 = uVar5 + 1 & 0xffff;
        *(undefined4 *)((int)(param_3 + 0x16) + iVar4) = 0;
      } while (uVar5 < 8);
      *(undefined4 *)(param_3 + 0x22) = 0;
      iVar6 = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      fVar8 = *(float *)(DAT_0040f4d0 + 0x20);
      *(undefined4 *)((int)param_3 + 0x74) = 0xc61c3c00;
      *(undefined4 *)(param_3 + 0xf) = 0xc61c3c00;
      uStack_b0 = auVar10._0_4_;
      uStack_ac = auVar10._4_4_;
      uStack_a8 = auVar10._8_4_;
      uStack_a4 = auVar10._12_4_;
      *(undefined4 *)(param_3 + 0x12) = uStack_b0;
      *(undefined4 *)((int)param_3 + 0x94) = uStack_ac;
      *(undefined4 *)(param_3 + 0x13) = uStack_a8;
      *(undefined4 *)((int)param_3 + 0x9c) = uStack_a4;
      iVar4 = *(int *)(*(int *)(param_2 + 0x873f0) + 8);
      iVar1 = *(int *)(iVar4 + 8);
      if (0 < iVar1) {
        plVar7 = *(long **)(iVar4 + 0xc);
        do {
          if (*plVar7 == *param_3) {
            iVar4 = (int)plVar7[1];
            goto LAB_001b259c;
          }
          iVar6 = iVar6 + 1;
          plVar7 = plVar7 + 2;
        } while (iVar6 < iVar1);
      }
      iVar4 = 0;
LAB_001b259c:
      *(int *)(param_3 + 0x24) = iVar4;
      if (iVar4 != 0) {
        FUN_001b1168(fVar8 + *(float *)(param_3 + 0xe),param_3 + 0x16,param_3 + 2,iVar4,1);
        if (fVar9 < *(float *)((int)param_3[0x24] + 0x278)) {
          FUN_001ec060(*(undefined4 *)((int)param_3[0x24] + 0x274),
                       *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_3[8],0,0);
        }
      }
      param_3 = param_3 + 0x26;
    } while (bVar3 < param_4);
  }
  return;
}


// ==== FUN_001b2630 @ 001b2630 ====

void FUN_001b2630(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar7 = 1e+07;
  iVar6 = 0;
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3);
    if (iVar1 != 0) {
      uVar2 = (uint)*(byte *)((int *)(param_1 + iVar3) + 1);
      uVar4 = 0;
      if (uVar2 != 0) {
        auVar10 = _qmtc2(param_2);
        auVar9 = _vaddbc(in_vf0,in_vf0);
        iVar3 = 0;
        do {
          auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + iVar1 + 0x40));
          auVar8 = _vsub(auVar8,auVar10);
          auVar8 = _vmul(auVar8,auVar8);
          _vaddabc(auVar8,auVar8);
          auVar8 = _vmaddbc(auVar9,auVar8);
          auVar8 = _qmfc2(auVar8._0_4_);
          if (auVar8._0_4_ < fVar7) {
            iVar6 = uVar4 * 0x130 + iVar1;
            fVar7 = auVar8._0_4_;
          }
          uVar4 = uVar4 + 1 & 0xff;
          iVar3 = uVar4 * 0x130;
        } while (uVar4 < uVar2);
      }
    }
    iVar5 = (iVar5 + 1) * 0x1000000 >> 0x18;
    iVar3 = iVar5 << 3;
  } while (iVar5 < 2);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x110) != 0)) {
    FUN_001b1518();
  }
  return;
}


// ==== FUN_001b2710 @ 001b2710 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4d8 undefined4

void FUN_001b2710(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  iVar5 = 0;
  fVar10 = *(float *)(DAT_0040f4d0 + 0x20);
  fVar9 = fVar10 - *(float *)(DAT_0040f4d0 + 0x1c);
  iVar6 = 0;
  while( true ) {
    iVar7 = *(int *)(param_1 + iVar6);
    if (iVar7 != 0) {
      bVar1 = *(byte *)((int *)(param_1 + iVar6) + 1);
      bVar8 = 0;
      if (bVar1 != 0) {
        iVar6 = iVar7 + 0xb0;
        do {
          if (*(int *)(iVar6 + 0x60) != 0) {
            lVar4 = FUN_001b1340(fVar10,fVar9,iVar6,DAT_0040f4d8);
            if (lVar4 == 0) {
              FUN_001b1518(iVar6);
              FUN_001b1168(fVar10,iVar6,iVar7 + 0x10,*(undefined4 *)(iVar6 + 0x70),1);
              cVar2 = *(char *)(iVar6 + -0x10);
            }
            else {
              cVar2 = *(char *)(iVar6 + -0x10);
            }
            if ((cVar2 != '\0') &&
               (iVar3 = *(int *)(iVar6 + 0x70), *(char *)(iVar3 + 0x242) != '\0')) {
              auVar12 = _vaddbc(in_vf0,in_vf0);
              auVar13 = _lqc2(*(undefined1 (*) [16])(iVar6 + -0x70));
              auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
              auVar11 = _vsub(auVar11,auVar13);
              auVar11 = _vmul(auVar11,auVar11);
              _vaddabc(auVar11,auVar11);
              auVar11 = _vmaddbc(auVar12,auVar11);
              auVar11 = _qmfc2(auVar11._0_4_);
              if (auVar11._0_4_ <= *(float *)(iVar3 + 0x28c)) {
                auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x260));
                auVar11 = _vadd(auVar11,auVar13);
                auStack_c0 = _sqc2(auVar11);
                auVar12 = _lqc2(*(undefined1 (*) [16])(iVar6 + -0x70));
                auVar11 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar6 + 0x70) + 0x250));
                auVar11 = _vadd(auVar11,auVar12);
                auStack_d0 = _sqc2(auVar11);
                _lqc2(auStack_b0);
                auVar14 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x90));
                auVar12 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xa0));
                auVar15 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
                auVar13 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xb0));
                auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0));
                _vmulabc(auVar12,auVar14);
                _vmaddabc(auVar13,auVar14);
                _vmaddabc(auVar11,auVar14);
                auVar11 = _vmaddbc(auVar15,in_vf0);
                _vadd(in_vf0,auVar11);
                auVar11 = _vmove(auVar14);
                auStack_b0 = _sqc2(auVar11);
                lVar4 = FUN_0026da20(auStack_b0._0_8_,auStack_d0);
                if (0 < lVar4) {
                  FUN_0013c778(*(undefined4 *)(iVar6 + -0xc),DAT_0040f4d0 + 0x30,
                               *(undefined8 *)(iVar6 + -0x70));
                }
              }
            }
          }
          bVar8 = bVar8 + 1;
          iVar6 = iVar6 + 0x130;
          iVar7 = iVar7 + 0x130;
        } while (bVar8 < bVar1);
      }
    }
    iVar5 = (iVar5 + 1) * 0x1000000 >> 0x18;
    if (1 < iVar5) break;
    iVar6 = iVar5 << 3;
  }
  return;
}


// ==== FUN_001b2910 @ 001b2910 ====

undefined4 FUN_001b2910(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0x1000000;
  piVar2 = param_1;
  do {
    if (*piVar2 != 0) {
      FUN_001b29e8(param_1,piVar2);
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 2);
  return 1;
}


// ==== FUN_001b2988 @ 001b2988 ====

void FUN_001b2988(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0x1000000;
  while( true ) {
    if (1 < iVar1) {
      return;
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 2;
    iVar1 = iVar2 >> 0x18;
    iVar2 = iVar2 + 0x1000000;
  }
  FUN_001b29e8();
  return;
}


// ==== FUN_001b29e8 @ 001b29e8 ====

void FUN_001b29e8(undefined8 param_1,undefined4 *param_2)

{
  FUN_001b2a20(param_1,*param_2,*(undefined1 *)(param_2 + 1));
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = 0;
  return;
}


// ==== FUN_001b2a20 @ 001b2a20 ====

void FUN_001b2a20(undefined8 param_1,int param_2,uint param_3)

{
  param_3 = param_3 & 0xff;
  if (param_3 != 0) {
    param_2 = param_2 + 0xb0;
    do {
      if (*(int *)(param_2 + 0x60) != 0) {
        FUN_001b1518(param_2);
      }
      param_3 = param_3 - 1;
      param_2 = param_2 + 0x130;
    } while (param_3 != 0);
  }
  return;
}


// ==== FUN_001b2a78 @ 001b2a78 ====

void FUN_001b2a78(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while( true ) {
    FUN_001b3cd8(param_1 + iVar1);
    uVar2 = uVar2 + 1 & 0xffff;
    if (0x1b < uVar2) break;
    iVar1 = uVar2 << 4;
  }
  return;
}


// ==== FUN_001b2ac8 @ 001b2ac8 ====

undefined4 FUN_001b2ac8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 8 + iVar2);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x7c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x78),
                 *(undefined1 *)(param_1 + iVar2 + 0xc));
      FUN_001b3d18(param_1 + iVar2);
    }
    uVar3 = uVar3 + 1 & 0xffff;
    iVar2 = uVar3 << 4;
  } while (uVar3 < 0x1c);
  FUN_001d3040();
  return 1;
}


// ==== FUN_001b2b60 @ 001b2b60 ====

void FUN_001b2b60(void)

{
  return;
}


// ==== FUN_001b2b68 @ 001b2b68 ====
// GLOBAL DAT_0040f4c0 int

void FUN_001b2b68(undefined8 param_1)

{
  FUN_001d3090(*(undefined4 *)(DAT_0040f4c0 + 0xd540));
  FUN_001b2bc0(param_1);
  FUN_001b2c40(param_1);
  FUN_001b2cd0(param_1);
  FUN_001d3368();
  return;
}


// ==== FUN_001b2bc0 @ 001b2bc0 ====

void FUN_001b2bc0(int param_1)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  while( true ) {
    psVar2 = (short *)(param_1 + iVar1);
    if ((*(char *)((int)psVar2 + 0xd) != '\0') && (*psVar2 != 0)) {
      FUN_001d3408(param_1 + (uint)(ushort)psVar2[2] * 0x20 + 0x1c0,*psVar2);
    }
    uVar3 = uVar3 + 1 & 0xffff;
    if (7 < uVar3) break;
    iVar1 = uVar3 << 4;
  }
  return;
}


// ==== FUN_001b2c40 @ 001b2c40 ====

void FUN_001b2c40(int param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 8;
  iVar2 = 0x80;
  do {
    psVar1 = (short *)(param_1 + iVar2);
    if (*(char *)((int)psVar1 + 0xd) != '\0') {
      if (*psVar1 != 0) {
        FUN_001d37c8(param_1 + (uint)(ushort)psVar1[2] * 0x20 + 0x1c0,*psVar1,
                     *(int *)(param_1 + 8 + iVar2) + 0x70);
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
    iVar2 = uVar3 << 4;
  } while (uVar3 < 0x14);
  return;
}


// ==== FUN_001b2cd0 @ 001b2cd0 ====

void FUN_001b2cd0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  
  uVar4 = 0x14;
  iVar2 = 0x140;
  while( true ) {
    psVar3 = (short *)(param_1 + iVar2);
    if ((*(char *)((int)psVar3 + 0xd) != '\0') && (*psVar3 != 0)) {
      uVar1 = FUN_00148508(*(undefined4 *)(param_1 + 8 + iVar2),(char)psVar3[6]);
      FUN_001d37c8(param_1 + (uint)(ushort)psVar3[2] * 0x20 + 0x1c0,*psVar3,uVar1);
    }
    uVar4 = uVar4 + 1 & 0xffff;
    if (0x1b < uVar4) break;
    iVar2 = uVar4 << 4;
  }
  return;
}


// ==== FUN_001b2d70 @ 001b2d70 ====

undefined4 FUN_001b2d70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  FUN_001d3078();
  iVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8 + iVar2);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x7c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x78),
                 *(undefined1 *)(param_1 + iVar2 + 0xc));
      FUN_001b3d18(param_1 + iVar2);
    }
    uVar3 = uVar3 + 1 & 0xffff;
    if (0x1b < uVar3) break;
    iVar2 = uVar3 << 4;
  }
  return 1;
}


// ==== FUN_001b2e08 @ 001b2e08 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_00418590 uint
// GLOBAL DAT_00418594 int

void FUN_001b2e08(float param_1,float param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  float fVar15;
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
  undefined4 uVar27;
  undefined1 auStack_df [3];
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_cc;
  float fStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar22 = _vsub(in_vf0,in_vf0);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vaddbc(in_vf0,in_vf0);
  auVar20 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _sqc2(auVar16);
  auVar17 = _sqc2(auVar17);
  auVar20 = _sqc2(auVar20);
  auVar22 = _sqc2(auVar22);
  if (*(int *)(param_4[2] + 4) == 0) {
    lVar7 = FUN_001b33b8();
  }
  else {
    iVar5 = *(int *)(*(int *)(param_4[2] + 4) + 0xc4);
    if ((iVar5 - 3U < 2) || (bVar3 = false, iVar5 == 7)) {
      bVar3 = true;
    }
    if (bVar3) {
      iVar5 = *(int *)(*(int *)(param_4[2] + 4) + 0xc4);
      if (iVar5 == 3) {
        lVar7 = FUN_001b3420(param_3);
      }
      else {
        lVar7 = 0;
        if (iVar5 == 4) {
          lVar7 = FUN_001b3590(param_3);
        }
      }
    }
    else {
      lVar7 = 0;
    }
  }
  if (lVar7 == 0) {
    return;
  }
  auVar24 = _lqc2(param_4[1]);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auStack_80 = _sqc2(auVar18);
  auVar26 = _vmove(auVar24);
  auVar24 = _vmul(auVar26,auVar26);
  _vaddabc(auVar24,auVar24);
  auVar24 = _vmaddbc(auVar18,auVar24);
  auStack_90 = *param_4;
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar24);
  auVar24 = _vaddbc(in_vf0,in_vf0);
  uVar27 = _vwaitq();
  auVar24 = _vmulq(auVar24,uVar27);
  _qmfc2(auVar24._0_4_);
  auVar24 = _qmtc2(0x3e4ccccd);
  auVar24 = _vmulbc(auVar26,auVar24);
  auVar18 = _lqc2(auStack_90);
  auVar24 = _vadd(auVar18,auVar24);
  auVar24 = _qmfc2(auVar24._0_4_);
  auStack_70 = _sqc2(auVar26);
  lVar8 = FUN_0012c790(DAT_0040f4d0,auVar24._0_8_);
  uVar11 = auVar24._8_8_;
  auVar24 = _lqc2(auStack_70);
  if (lVar8 == 0) {
    fVar15 = 0.4;
  }
  else {
    FUN_001aebf8(0,auStack_df,auStack_c0,auStack_b0,auStack_a0,0);
    auVar24 = _lqc2(auStack_70);
    auVar23 = _lqc2(auStack_b0);
    auVar25 = _lqc2(auStack_a0);
    auVar18 = _vmulbc(auVar23,auVar24);
    auVar21 = _lqc2(auStack_c0);
    auVar18 = _vaddbc(auVar25,auVar18);
    auVar26 = _vmulbc(auVar21,auVar24);
    auVar19 = _vmulbc(auVar23,auVar24);
    auVar26 = _vaddbc(auVar18,auVar26);
    auVar18 = _vaddbc(auVar25,auVar19);
    auVar19 = _vmulbc(auVar21,auVar24);
    auVar25 = _vmulbc(auVar25,auVar24);
    auVar18 = _vaddbc(auVar18,auVar19);
    auVar19 = _vmulbc(auVar21,auVar24);
    auVar18 = _sqc2(auVar18);
    auVar26 = _vaddbc(auVar26,auVar19);
    auVar26 = _qmfc2(auVar26._0_4_);
    auVar19 = _vaddbc(auVar23,auVar25);
    uStack_cc = auVar18._4_4_;
    auVar26 = _qmtc2(auVar26._0_4_);
    auVar18 = _qmtc2(uStack_cc);
    auVar26 = _vmulbc(auVar24,auVar26);
    auVar26 = _vaddbc(auVar19,auVar26);
    auVar18 = _vmulbc(auVar24,auVar18);
    auVar18 = _vaddbc(auVar26,auVar18);
    auVar18 = _sqc2(auVar18);
    fStack_c8 = auVar18._8_4_;
    fStack_c8 = (float)((int)fStack_c8 * (uint)(0.0 < fStack_c8));
    fVar15 = (float)((int)fStack_c8 * (uint)(fStack_c8 < 1.0) |
                    (uint)(fStack_c8 >= 1.0) * 0x3f800000);
  }
  auVar18 = _qmtc2(0x3ca3d70a);
  auVar19 = _lqc2(auVar16);
  auVar16 = _vmulbc(auVar24,auVar18);
  auVar26 = _lqc2(auVar17);
  auVar18 = _lqc2(auVar20);
  auVar17 = _lqc2(auStack_90);
  _vmulabc(auVar19,auVar24);
  _vmaddabc(auVar26,auVar24);
  auVar21 = _vmaddbc(auVar18,auVar24);
  auVar16 = _vadd(auVar17,auVar16);
  auVar24 = _vmove(auVar21);
  auVar16 = _sqc2(auVar16);
  auVar17 = _vmul(auVar24,auVar24);
  auVar20 = _lqc2(auStack_80);
  _vaddabc(auVar17,auVar17);
  auVar17 = _vmaddbc(auVar20,auVar17);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar17);
  auVar17 = _vaddbc(in_vf0,in_vf0);
  uVar27 = _vwaitq();
  auVar17 = _vmulq(auVar17,uVar27);
  auVar17 = _qmfc2(auVar17._0_4_);
  auVar20 = _lqc2(auVar22);
  auVar16 = _lqc2(auVar16);
  _vmulabc(auVar19,auVar16);
  _vmaddabc(auVar26,auVar16);
  _vmaddabc(auVar18,auVar16);
  auVar20 = _vmaddbc(auVar20,in_vf0);
  auVar16._8_8_ = auVar17._8_8_;
  DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  DAT_00418594 = DAT_00418594 + DAT_00418590;
  puVar13 = (ushort *)lVar7;
  if ((int)DAT_00418590 < 0) {
    uVar1 = puVar13[1];
  }
  else {
    uVar1 = puVar13[1];
  }
  uVar4 = (ulong)DAT_00418590;
  auVar17 = _sqc2(auVar21);
  uVar12 = (uint)puVar13[2] + (uint)uVar1 & 0xffff;
  iVar5 = uVar12 * 0x20 + (int)param_3;
  fStack_dc = auVar17._4_4_;
  pauVar6 = (undefined1 (*) [16])(iVar5 + 0x1c0);
  pauVar9 = (undefined1 (*) [16])(iVar5 + 0x1c0);
  _lqc2(*pauVar6);
  auVar17 = _vadd(in_vf0,auVar20);
  auVar17 = _sqc2(auVar17);
  *pauVar6 = auVar17;
  _lqc2(*pauVar9);
  auVar17 = _qmtc2((param_1 + (param_2 - param_1) * (float)uVar4 * 2.3283064e-10) * 0.05);
  auVar17 = _vmr32(auVar17);
  auVar17 = _sqc2(auVar17);
  *pauVar9 = auVar17;
  DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
  DAT_00418594 = DAT_00418594 + DAT_00418590;
  uVar10 = DAT_00418590 & 3;
  if (-0.99 <= fStack_dc) {
    auVar17 = _sqc2(auVar21);
    fStack_dc = auVar17._4_4_;
    bVar3 = false;
    if (fStack_dc <= 0.99) goto LAB_001b3264;
  }
  bVar3 = true;
LAB_001b3264:
  if (bVar3) {
    auVar17 = _sqc2(auVar21);
    fStack_d8 = auVar17._8_4_;
    if (0.0 < fStack_d8) {
      auVar17 = _qmtc2(0x3c23d70a);
      _vmove(auVar21);
      auVar17 = _vaddbc(auVar21,auVar17);
    }
    else {
      auVar17 = _qmtc2(0x3c23d70a);
      _vmove(auVar21);
      auVar17 = _vsubbc(auVar21,auVar17);
    }
    auVar22 = _vaddbc(in_vf0,auVar17);
    auVar17 = _vmul(auVar22,auVar22);
    auVar20 = _lqc2(auStack_80);
    _vaddabc(auVar17,auVar17);
    auVar17 = _vmaddbc(auVar20,auVar17);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar17);
    uVar27 = _vwaitq();
    auVar24 = _vmulq(auVar22,uVar27);
  }
  iVar5 = uVar12 * 0x20 + (int)param_3;
  _lqc2(*(undefined1 (*) [16])(iVar5 + 0x1d0));
  iVar14 = (int)(fVar15 * 127.95);
  auVar17 = _vadd(in_vf0,auVar24);
  auVar17 = _sqc2(auVar17);
  *(undefined1 (*) [16])(iVar5 + 0x1d0) = auVar17;
  _lqc2(*(undefined1 (*) [16])(iVar5 + 0x1d0));
  auVar17 = _qmtc2((param_5 & 0xff) * 4 + uVar10 | iVar14 << 8 | iVar14 << 0x10 | iVar14 << 0x18);
  auVar17 = _vmr32(auVar17);
  auVar17 = _sqc2(auVar17);
  *(undefined1 (*) [16])(iVar5 + 0x1d0) = auVar17;
  uVar1 = puVar13[1];
  auVar17._2_6_ = 0;
  auVar17._0_2_ = puVar13[3];
  uVar2 = *puVar13;
  puVar13[1] = uVar1 + 1;
  auVar17._8_8_ = uVar11;
  *puVar13 = uVar2 + 1;
  auVar16._2_6_ = 0;
  auVar16._0_2_ = uVar2 + 1;
  auVar16 = _pminw(auVar16,auVar17);
  auVar16 = _pextlw(0,auVar16._0_8_);
  *puVar13 = auVar16._0_2_;
  puVar13[1] = (ushort)(uVar1 + 1) % puVar13[3];
  return;
}


// ==== FUN_001b33b8 @ 001b33b8 ====

int FUN_001b33b8(undefined8 param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_001b1848(*param_2);
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)lVar3;
    if (*(short *)(iVar2 + 0xd8) == -1) {
      FUN_001b3a10(param_1,lVar3);
      uVar1 = *(ushort *)(iVar2 + 0xd8);
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0xd8);
    }
    iVar2 = (int)param_1 + (uint)uVar1 * 0x10;
  }
  return iVar2;
}


// ==== FUN_001b3420 @ 001b3420 ====

int FUN_001b3420(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

{
  ushort uVar1;
  int iVar2;
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar14 = _lqc2(*param_3);
  iVar2 = *(int *)(param_2 + 0x24);
  auVar12 = _lqc2(param_3[1]);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
  _sqc2(auVar5);
  _vmove(auVar5);
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
  auVar15 = _lqc2(param_3[2]);
  auVar10 = _vaddbc(in_vf0,auVar4);
  auVar13 = _lqc2(param_3[3]);
  _sqc2(auVar4);
  _vmove(auVar4);
  auVar9 = _vaddbc(in_vf0,auVar5);
  _vmove(auVar10);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
  _vmove(auVar9);
  auVar8 = _vaddbc(in_vf0,auVar3);
  auVar6 = _vaddbc(in_vf0,auVar3);
  _sqc2(auVar3);
  _vmove(auVar3);
  auVar11 = _vaddbc(in_vf0,auVar5);
  _vmove(auVar11);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
  auVar7 = _vaddbc(in_vf0,auVar4);
  auVar4 = _vmulbc(auVar6,auVar5);
  auVar3 = _vmulbc(auVar8,auVar5);
  auVar3 = _vadd(auVar3,auVar4);
  auVar4 = _vmulbc(auVar7,auVar5);
  auVar3 = _vadd(auVar3,auVar4);
  _vmulabc(auVar8,auVar14);
  _vmaddabc(auVar6,auVar14);
  auVar14 = _vmaddbc(auVar7,auVar14);
  _vmulabc(auVar8,auVar12);
  _vmaddabc(auVar6,auVar12);
  auVar12 = _vmaddbc(auVar7,auVar12);
  auVar3 = _vsub(in_vf0,auVar3);
  _sqc2(auVar5);
  _vmulabc(auVar8,auVar15);
  _vmaddabc(auVar6,auVar15);
  auVar5 = _vmaddbc(auVar7,auVar15);
  _vmulabc(auVar8,auVar13);
  _vmaddabc(auVar6,auVar13);
  _vmaddabc(auVar7,auVar13);
  auVar4 = _vmaddbc(auVar3,in_vf0);
  _sqc2(auVar10);
  _sqc2(auVar9);
  _sqc2(auVar11);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar7);
  _sqc2(auVar3);
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar5);
  _sqc2(auVar4);
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar5);
  _sqc2(auVar4);
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar5);
  _sqc2(auVar4);
  auVar3 = _sqc2(auVar14);
  *param_3 = auVar3;
  auVar3 = _sqc2(auVar12);
  param_3[1] = auVar3;
  auVar3 = _sqc2(auVar4);
  param_3[3] = auVar3;
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar5);
  _sqc2(auVar4);
  auVar3 = _sqc2(auVar5);
  param_3[2] = auVar3;
  uVar1 = *(ushort *)(iVar2 + 0x1bc);
  if (uVar1 == 0xffff) {
    FUN_001b3a50(param_1,iVar2);
    uVar1 = *(ushort *)(iVar2 + 0x1bc);
  }
  return (int)param_1 + (uint)uVar1 * 0x10;
}


// ==== FUN_001b3590 @ 001b3590 ====

int FUN_001b3590(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

{
  byte bVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  int iVar4;
  int iVar5;
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
  undefined1 auVar18 [16];
  
  iVar4 = *(int *)(param_2 + 0x24);
  bVar1 = *(byte *)(param_2 + 0x2c);
  if (bVar1 < *(byte *)(iVar4 + 0x1f6)) {
    lVar3 = FUN_001afd80(*(int *)(iVar4 + 0x1a0) + (uint)bVar1 * 0xc,*(undefined4 *)(iVar4 + 0x118))
    ;
    if ((lVar3 == 0) || (*(int *)((int)lVar3 + 0x54) != 3)) {
      pauVar2 = (undefined1 (*) [16])FUN_00147988(iVar4,bVar1);
      iVar5 = (uint)bVar1 * 2;
      auVar8 = _lqc2(*pauVar2);
      auVar16 = _lqc2(*param_3);
      auVar14 = _lqc2(param_3[1]);
      _sqc2(auVar8);
      _vmove(auVar8);
      auVar7 = _lqc2(pauVar2[1]);
      auVar18 = _lqc2(param_3[2]);
      auVar13 = _vaddbc(in_vf0,auVar7);
      auVar17 = _lqc2(param_3[3]);
      _sqc2(auVar7);
      _vmove(auVar7);
      auVar12 = _vaddbc(in_vf0,auVar8);
      _vmove(auVar13);
      auVar6 = _lqc2(pauVar2[2]);
      _vmove(auVar12);
      auVar11 = _vaddbc(in_vf0,auVar6);
      auVar9 = _vaddbc(in_vf0,auVar6);
      _sqc2(auVar6);
      _vmove(auVar6);
      auVar15 = _vaddbc(in_vf0,auVar8);
      _vmove(auVar15);
      auVar8 = _lqc2(pauVar2[3]);
      auVar10 = _vaddbc(in_vf0,auVar7);
      auVar7 = _vmulbc(auVar9,auVar8);
      auVar6 = _vmulbc(auVar11,auVar8);
      auVar6 = _vadd(auVar6,auVar7);
      auVar7 = _vmulbc(auVar10,auVar8);
      auVar6 = _vadd(auVar6,auVar7);
      _vmulabc(auVar11,auVar16);
      _vmaddabc(auVar9,auVar16);
      auVar16 = _vmaddbc(auVar10,auVar16);
      _vmulabc(auVar11,auVar14);
      _vmaddabc(auVar9,auVar14);
      auVar14 = _vmaddbc(auVar10,auVar14);
      auVar6 = _vsub(in_vf0,auVar6);
      _sqc2(auVar8);
      _vmulabc(auVar11,auVar18);
      _vmaddabc(auVar9,auVar18);
      auVar7 = _vmaddbc(auVar10,auVar18);
      _vmulabc(auVar11,auVar17);
      _vmaddabc(auVar9,auVar17);
      _vmaddabc(auVar10,auVar17);
      auVar8 = _vmaddbc(auVar6,in_vf0);
      _sqc2(auVar13);
      _sqc2(auVar12);
      _sqc2(auVar15);
      _sqc2(auVar11);
      _sqc2(auVar9);
      _sqc2(auVar10);
      _sqc2(auVar6);
      _sqc2(auVar16);
      _sqc2(auVar14);
      _sqc2(auVar7);
      _sqc2(auVar8);
      _sqc2(auVar16);
      _sqc2(auVar14);
      _sqc2(auVar7);
      _sqc2(auVar8);
      _sqc2(auVar16);
      _sqc2(auVar14);
      _sqc2(auVar7);
      _sqc2(auVar8);
      auVar6 = _sqc2(auVar16);
      *param_3 = auVar6;
      auVar6 = _sqc2(auVar14);
      param_3[1] = auVar6;
      auVar6 = _sqc2(auVar7);
      param_3[2] = auVar6;
      auVar6 = _sqc2(auVar8);
      param_3[3] = auVar6;
      _sqc2(auVar16);
      _sqc2(auVar14);
      _sqc2(auVar7);
      _sqc2(auVar8);
      if (*(short *)(iVar5 + *(int *)(iVar4 + 0x1b0)) == -1) {
        FUN_001b3a90(param_1,iVar4,bVar1);
        iVar4 = *(int *)(iVar4 + 0x1b0);
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x1b0);
      }
      return (int)param_1 + (uint)*(ushort *)(iVar5 + iVar4) * 0x10;
    }
  }
  return 0;
}


// ==== FUN_001b3780 @ 001b3780 ====

void FUN_001b3780(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0x10;
    uVar2 = uVar2 + 1 & 0xffff;
    *(undefined1 *)(param_1 + iVar1 + 0xd) = 0;
  } while (uVar2 < 0x1c);
  return;
}


// ==== FUN_001b37b0 @ 001b37b0 ====

void FUN_001b37b0(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + (param_2 & 0xffff) * 0x10 + 0xd) = 1;
  return;
}


// ==== FUN_001b37c8 @ 001b37c8 ====

void FUN_001b37c8(int param_1,uint param_2)

{
  int iVar1;
  
  param_1 = param_1 + (param_2 & 0xffff) * 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  (**(code **)(iVar1 + 0x7c))
            (*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x78),*(undefined1 *)(param_1 + 0xc));
  FUN_001b3d18(param_1);
  return;
}


// ==== FUN_001b3818 @ 001b3818 ====

void FUN_001b3818(int param_1,int param_2,uint param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort *puVar5;
  undefined8 in_a0_udw;
  uint uVar6;
  ushort *puVar7;
  
  uVar1 = *(ushort *)((param_3 & 0xff) * 2 + *(int *)(param_2 + 0x1b0));
  if (uVar1 != 0xffff) {
    if (param_4 != 0) {
      FUN_001b3a50(param_1,param_4);
      puVar7 = (ushort *)(param_1 + (uint)uVar1 * 0x10);
      uVar2 = *puVar7;
      auVar3._2_6_ = 0;
      auVar3._0_2_ = uVar2;
      puVar5 = (ushort *)(param_1 + (uint)*(ushort *)((int)param_4 + 0x1bc) * 0x10);
      *puVar5 = uVar2;
      auVar3._8_8_ = extraout_v0_udw;
      auVar4._4_4_ = 0;
      auVar4._0_4_ = CONCAT22(0,puVar5[3]);
      auVar4._8_8_ = in_a0_udw;
      auVar4 = _pminw(auVar3,auVar4);
      auVar4 = _pextlw(0,auVar4._0_8_);
      uVar6 = auVar4._0_4_ & 0xffff;
      *puVar5 = auVar4._0_2_;
      puVar5[1] = (ushort)(uVar6 % CONCAT22(0,puVar5[3]));
      memcpy((uint)puVar5[2] * 0x20 + param_1 + 0x1c0,(uint)puVar7[2] * 0x20 + param_1 + 0x1c0,
             uVar6 << 5);
    }
    FUN_001b37c8(param_1,uVar1);
  }
  return;
}


// ==== FUN_001b38f8 @ 001b38f8 ====

void FUN_001b38f8(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)((param_3 & 0xff) * 2 + *(int *)(param_2 + 0x1b0));
  uVar4 = (uint)*(byte *)(param_2 + 0x1f6);
  if (uVar1 != 0xffff) {
    FUN_001b3d18(param_1 + (uint)uVar1 * 0x10);
  }
  uVar3 = (param_3 & 0xff) + 1 & 0xff;
  if (uVar3 < uVar4) {
    iVar2 = *(int *)(param_2 + 0x1b0);
    while( true ) {
      uVar1 = *(ushort *)(uVar3 * 2 + iVar2);
      if (uVar1 == 0xffff) {
        (**(code **)(*(int *)(param_2 + 0x10) + 0x7c))
                  (param_2 + *(short *)(*(int *)(param_2 + 0x10) + 0x78),uVar3 - 1 & 0xff);
      }
      else {
        iVar2 = param_1 + (uint)uVar1 * 0x10;
        *(char *)(iVar2 + 0xc) = *(char *)(iVar2 + 0xc) + -1;
        *(ushort *)((uVar3 - 1 & 0xff) * 2 + *(int *)(param_2 + 0x1b0)) = uVar1;
      }
      uVar3 = uVar3 + 1 & 0xff;
      if (uVar4 <= uVar3) break;
      iVar2 = *(int *)(param_2 + 0x1b0);
    }
  }
  if (uVar4 != 0) {
    *(undefined2 *)((uVar4 - 1 & 0xff) * 2 + *(int *)(param_2 + 0x1b0)) = 0xffff;
  }
  return;
}


// ==== FUN_001b3a10 @ 001b3a10 ====

void FUN_001b3a10(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_001b3ae8(param_1,0,8,0,0x100,param_2,0xff);
  *(undefined2 *)((int)param_2 + 0xd8) = uVar1;
  return;
}


// ==== FUN_001b3a50 @ 001b3a50 ====

void FUN_001b3a50(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_001b3ae8(param_1,8,0x14,0x800,0x60,param_2,0xff);
  *(undefined2 *)((int)param_2 + 0x1bc) = uVar1;
  return;
}


// ==== FUN_001b3a90 @ 001b3a90 ====

void FUN_001b3a90(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_001b3ae8(param_1,0x14,0x1c,0xc80,0x20,param_2,param_3 & 0xff);
  *(undefined2 *)((param_3 & 0xff) * 2 + *(int *)((int)param_2 + 0x1b0)) = uVar1;
  return;
}


// ==== FUN_001b3ae8 @ 001b3ae8 ====

uint FUN_001b3ae8(undefined8 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined8 param_6,undefined1 param_7)

{
  uint uVar1;
  int iVar2;
  
  param_3 = param_3 & 0xffff;
  param_2 = param_2 & 0xffff;
  uVar1 = param_2;
  if (param_2 < param_3) {
    do {
      if (*(int *)((int)param_1 + 8 + uVar1 * 0x10) == 0) break;
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < param_3);
  }
  if (uVar1 == param_3) {
    uVar1 = FUN_001b3bd0(param_1,param_2,uVar1);
    iVar2 = uVar1 - param_2;
  }
  else {
    iVar2 = uVar1 - param_2;
  }
  FUN_001b3cf8((int)param_1 + uVar1 * 0x10,param_6,
               iVar2 * (param_5 & 0xffff) + (param_4 & 0xffff) & 0xffff,param_5 & 0xffff,param_7);
  return uVar1;
}


// ==== FUN_001b3bd0 @ 001b3bd0 ====
// GLOBAL DAT_0040f4d0 int

uint FUN_001b3bd0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  param_2 = param_2 & 0xffff;
  uVar4 = 0x1c;
  if (param_2 < (param_3 & 0xffff)) {
    auVar12 = _qmtc2(*(undefined4 *)(DAT_0040f4d0 + 0xd0));
    auVar11 = _vaddbc(in_vf0,in_vf0);
    fVar5 = 0.0;
    uVar3 = uVar4;
    do {
      iVar1 = *(int *)(param_1 + 8 + param_2 * 0x10);
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x60));
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
      auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
      _vmulabc(auVar10,auVar6);
      _vmaddabc(auVar8,auVar6);
      _vmaddabc(auVar7,auVar6);
      auVar6 = _vmaddbc(auVar9,in_vf0);
      auVar6 = _vsub(auVar6,auVar12);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar11,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      fVar2 = auVar6._0_4_;
      uVar4 = param_2;
      if (fVar2 <= fVar5) {
        fVar2 = fVar5;
        uVar4 = uVar3;
      }
      param_2 = param_2 + 1 & 0xffff;
      fVar5 = fVar2;
      uVar3 = uVar4;
    } while (param_2 < (param_3 & 0xffff));
  }
  param_1 = param_1 + uVar4 * 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  (**(code **)(iVar1 + 0x7c))
            (*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x78),*(undefined1 *)(param_1 + 0xc));
  FUN_001b3d18(param_1);
  return uVar4;
}


// ==== FUN_001b3cd8 @ 001b3cd8 ====

void FUN_001b3cd8(undefined2 *param_1)

{
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_001b3cf8 @ 001b3cf8 ====

undefined4
FUN_001b3cf8(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined1 param_5
            )

{
  *(undefined2 *)(param_1 + 6) = param_4;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xc) = param_5;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined2 *)(param_1 + 4) = param_3;
  return 1;
}


// ==== FUN_001b3d18 @ 001b3d18 ====

undefined4 FUN_001b3d18(void)

{
  FUN_001b3cd8();
  return 1;
}


// ==== FUN_001b3d38 @ 001b3d38 ====

void FUN_001b3d38(void)

{
  return;
}


// ==== FUN_001b3d40 @ 001b3d40 ====
// GLOBAL DAT_0040f4c4 undefined4

undefined4 FUN_001b3d40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = param_1 + 0x6f6;
  iVar8 = 5;
  puVar5 = param_1;
  do {
    *(undefined4 *)puVar1 = 0;
    iVar8 = iVar8 + -1;
    *puVar5 = 0;
    puVar1 = (undefined8 *)((int)puVar1 + 4);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  puVar5 = param_1 + 6;
  iVar8 = 0xd;
  do {
    FUN_001b6108(param_1,puVar5);
    iVar8 = iVar8 + -1;
    puVar5 = puVar5 + 0x10;
  } while (-1 < iVar8);
  uVar2 = FUN_00108120(DAT_0040f4c4,0x544614b71e3e36c0);
  *(undefined4 *)(param_1 + 0x6f6) = uVar2;
  uVar2 = FUN_00108120(DAT_0040f4c4,0x544614b71e3e36e7);
  *(undefined4 *)((int)param_1 + 0x37b4) = uVar2;
  uVar2 = FUN_00108120(DAT_0040f4c4,0x5446151ec239b6c0);
  *(undefined4 *)(param_1 + 0x6f7) = uVar2;
  uVar2 = FUN_00108120(DAT_0040f4c4,0x5446151ec239b6e7);
  *(undefined4 *)((int)param_1 + 0x37bc) = uVar2;
  uVar2 = FUN_00108120(DAT_0040f4c4,0x5446127adda936c0);
  *(undefined4 *)(param_1 + 0x6f8) = uVar2;
  uVar2 = FUN_00108120(DAT_0040f4c4,0x5446127adda936e7);
  *(undefined4 *)((int)param_1 + 0x37c4) = uVar2;
  for (iVar8 = 4; -1 < iVar8; iVar8 = iVar8 + -1) {
  }
  iVar8 = 0;
  iVar4 = 0;
  while( true ) {
    iVar7 = iVar4 + 1;
    iVar6 = 2;
    *(undefined1 *)((int)param_1 + iVar8 + 0x734) = 0;
    *(undefined4 *)((int)param_1 + iVar8 + 0x730) = 0;
    puVar5 = param_1 + iVar4 * 0x184 + 0x268;
    puVar3 = (undefined1 *)((int)param_1 + iVar4 * 0xc20 + 0x1343);
    do {
      *(undefined1 *)puVar5 = 0;
      iVar6 = iVar6 + -1;
      *puVar3 = 0;
      puVar5 = (undefined8 *)((int)puVar5 + 1);
      puVar3 = puVar3 + 1;
    } while (-1 < iVar6);
    if (3 < iVar7) break;
    iVar8 = iVar7 * 0xc20;
    iVar4 = iVar7;
  }
  return 1;
}


// ==== FUN_001b3f50 @ 001b3f50 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_00418590 uint
// GLOBAL DAT_00418594 int
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_00415b70 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b3f50(int param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 in_vuI;
  undefined4 uVar27;
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [12];
  float fStack_354;
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
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
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
  undefined1 auStack_170 [8];
  int iStack_168;
  int iStack_164;
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
  
  piVar6 = (int *)(param_1 + 0x30);
  iVar7 = 0xd;
  uVar11 = *(undefined4 *)(DAT_0040f4d0 + 0x1c);
  fVar9 = 2.3283064e-10;
  iVar4 = *piVar6;
  do {
    if (iVar4 != 0) {
      _auStack_170 = *(undefined1 (*) [16])(piVar6 + 0x10);
      auVar25 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x14));
      if (piVar6[0x1d] == 0) {
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        auVar15 = _vsub(in_vf0,in_vf0);
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar13 = _vaddbc(in_vf0,in_vf0);
        auVar14 = _vaddbc(in_vf0,in_vf0);
        auStack_3a0 = _sqc2(auVar12);
        auStack_390 = _sqc2(auVar13);
        auStack_380 = _sqc2(auVar14);
        auStack_370 = _sqc2(auVar15);
        auStack_3e0 = _sqc2(auVar12);
        auStack_3d0 = _sqc2(auVar13);
        auStack_3c0 = _sqc2(auVar14);
        auStack_3b0 = _sqc2(auVar15);
      }
      else {
        auStack_f0 = _sqc2(auVar25);
        FUN_001357b8(auStack_360);
        auVar16 = _lqc2(_auStack_360);
        auVar15 = _lqc2(auStack_350);
        auVar14 = _lqc2(auStack_340);
        _vmove(auVar16);
        _vmove(auVar15);
        auVar19 = _vaddbc(in_vf0,auVar15);
        auVar18 = _vaddbc(in_vf0,auVar16);
        _vmove(auVar14);
        auVar20 = _vaddbc(in_vf0,auVar16);
        _vmove(auVar19);
        _vmove(auVar18);
        auVar23 = _vaddbc(in_vf0,auVar14);
        auVar17 = _lqc2(auStack_330);
        auVar24 = _vaddbc(in_vf0,auVar14);
        _vmove(auVar20);
        auVar25 = _vmulbc(auVar24,auVar17);
        auVar21 = _vaddbc(in_vf0,auVar15);
        auVar12 = _vmulbc(auVar23,auVar17);
        auVar13 = _vadd(auVar12,auVar25);
        auVar12 = _vmulbc(auVar21,auVar17);
        auVar25 = _lqc2(_auStack_170);
        auVar13 = _vadd(auVar13,auVar12);
        _sqc2(auVar16);
        _vmulabc(auVar16,auVar25);
        _vmaddabc(auVar15,auVar25);
        _vmaddabc(auVar14,auVar25);
        auVar12 = _vmaddbc(auVar17,in_vf0);
        _sqc2(auVar15);
        auVar13 = _vsub(in_vf0,auVar13);
        _sqc2(auVar14);
        auVar25 = _lqc2(auStack_f0);
        _sqc2(auVar17);
        _vmulabc(auVar16,auVar25);
        _vmaddabc(auVar15,auVar25);
        auVar25 = _vmaddbc(auVar14,auVar25);
        _sqc2(auVar19);
        _sqc2(auVar18);
        _sqc2(auVar20);
        _auStack_170 = _sqc2(auVar12);
        auStack_370 = _sqc2(auVar13);
        auStack_3e0 = _sqc2(auVar16);
        auStack_3d0 = _sqc2(auVar15);
        auStack_3c0 = _sqc2(auVar14);
        auStack_3b0 = _sqc2(auVar17);
        auStack_3a0 = _sqc2(auVar23);
        auStack_390 = _sqc2(auVar24);
        auStack_380 = _sqc2(auVar21);
      }
      auVar14 = _qmtc2(uVar11);
      auVar12 = _lqc2(_auStack_170);
      auVar13 = _vmulbc(auVar25,auVar14);
      auVar12 = _vadd(auVar12,auVar13);
      _auStack_360 = _sqc2(auVar12);
      _auStack_170 = _sqc2(auVar12);
      if ((float)auStack_360._4_4_ < -200.0) {
        auStack_120 = _sqc2(auVar14);
        auStack_f0 = _sqc2(auVar25);
        FUN_001b6108();
        auVar25 = _lqc2(auStack_f0);
        auVar14 = _lqc2(auStack_120);
      }
      _auStack_360 = _auStack_170;
      if ((float)piVar6[0x1f] <= (float)auStack_170._4_4_) {
        auVar12 = _vmaxbc(in_vf0,in_vf0);
        auVar13 = _vadd(in_vf0,in_vf0);
        auVar15 = _vaddbc(in_vf0,in_vf0);
        if ((float)piVar6[0x1f] + 0.03 < (float)auStack_170._4_4_) {
          auVar16 = _lqc2(_DAT_00415b70);
          auVar14 = _vmulbc(auVar16,auVar14);
          auVar25 = _vadd(auVar25,auVar14);
        }
      }
      else {
        DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
        DAT_00418594 = DAT_00418594 + DAT_00418590;
        auStack_f0 = _sqc2(auVar25);
        fVar10 = (float)DAT_00418590 * fVar9 * 360.0;
        fVar8 = (float)FUN_0029da28(fVar10 * 0.017453292);
        uVar2 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
        auVar14 = _lqc2(auStack_f0);
        auVar25 = _qmtc2(0x3f000000);
        auVar13 = _vmulbc(auVar14,auVar25);
        auVar25 = _lqc2(_auStack_170);
        auVar12 = _qmtc2((float)piVar6[0x1f] + (float)piVar6[0x1f]);
        auVar25 = _vsubbc(auVar12,auVar25);
        uVar5 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_00418594 + uVar2;
        auVar25 = _vaddbc(in_vf0,auVar25);
        iVar4 = DAT_00418594 + uVar2 + uVar5;
        _auStack_170 = _sqc2(auVar25);
        auVar25 = _qmtc2((ABS(fVar8) * 0.5 + 0.2) * (-0.4 - (float)uVar2 * fVar9 * 0.1));
        auVar24 = _vmulbc(auVar14,auVar25);
        uVar2 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + iVar4;
        auVar25 = _qmtc2((float)uVar5 * fVar9 * 0.1);
        auVar21 = _vaddbc(auVar13,auVar25);
        iVar4 = iVar4 + uVar2;
        auVar25 = _qmtc2(0x3f000000);
        auVar23 = _vmulbc(auVar14,auVar25);
        auVar20 = _vmaxbc(in_vf0,in_vf0);
        auVar25 = _qmtc2(fVar10 * 0.017453292);
        auVar25 = _vaddbc(in_vf0,auVar25);
        _ctc2(0x3fc90fdb);
        _vnop();
        auVar25 = _vsubi(auVar25,in_vuI);
        auVar25 = _vabs(auVar25);
        _ctc2(0xbe22f983);
        _vnop();
        _vmulai(auVar25,in_vuI);
        _ctc2(0x4b400000);
        _vnop();
        _vmsubai(auVar20,in_vuI);
        _vmaddai(auVar20,in_vuI);
        _ctc2(0xbe22f983);
        _vnop();
        _vmsubai(auVar25,in_vuI);
        _ctc2(0x3f000000);
        _vnop();
        auVar25 = _vmsubi(auVar20,in_vuI);
        auVar25 = _vabs(auVar25);
        _ctc2(0x3e800000);
        _vnop();
        auVar25 = _vsubi(auVar25,in_vuI);
        auVar14 = _vmul(auVar25,auVar25);
        _ctc2(0xc2992661);
        _vnop();
        auVar13 = _vmuli(auVar25,in_vuI);
        auVar18 = _vmul(auVar14,auVar14);
        _ctc2(0xc2255de0);
        _vnop();
        auVar17 = _vmuli(auVar25,in_vuI);
        _ctc2(0x42a33457);
        _vnop();
        auVar16 = _vmuli(auVar25,in_vuI);
        _ctc2(0x421ed7b7);
        _vnop();
        auVar15 = _vmuli(auVar25,in_vuI);
        auVar12 = _vmul(auVar18,auVar18);
        auVar13 = _vmul(auVar13,auVar14);
        _vmula(auVar17,auVar14);
        _vmadda(auVar13,auVar18);
        _ctc2(0x40c90fda);
        _vmadda(auVar16,auVar18);
        _vmaddai(auVar25,in_vuI);
        auVar12 = _vmadd(auVar15,auVar12);
        _lqc2(auStack_320);
        _lqc2(auStack_300);
        auVar13 = _vaddbc(in_vf0,auVar12);
        auVar14 = _qmtc2((float)uVar2 * fVar9 * 0.1);
        auVar15 = _vaddbc(in_vf0,auVar12);
        auVar25 = _qmtc2(0);
        _vmove(auVar13);
        auVar19 = _vaddbc(in_vf0,auVar25);
        _vmove(auVar15);
        auVar17 = _vaddbc(in_vf0,auVar25);
        _vaddbc(in_vf0,auVar21);
        auVar25 = _pextlw(0,0);
        _vmove(auVar19);
        auStack_350 = _pextlw(0x3f800000,auVar25._0_8_);
        auVar16 = _vaddbc(in_vf0,auVar12);
        auVar14 = _vaddbc(auVar23,auVar14);
        auVar25 = _vsub(in_vf0,auVar12);
        _vaddbc(in_vf0,auVar24);
        _vmove(auVar17);
        _sqc2(auVar15);
        uVar5 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + iVar4;
        auVar15 = _vaddbc(in_vf0,auVar25);
        _sqc2(auVar13);
        auVar12 = _vaddbc(in_vf0,auVar14);
        auVar25 = _qmtc2(auStack_350._0_4_);
        _vmulabc(auVar15,auVar12);
        _vmaddabc(auVar25,auVar12);
        auVar18 = _vmaddbc(auVar16,auVar12);
        _sqc2(auVar17);
        iVar4 = iVar4 + uVar5;
        _sqc2(auVar19);
        auVar14 = _vadd(in_vf0,in_vf0);
        auVar12 = _vmove(auVar20);
        auVar13 = _vmove(auVar14);
        auVar25 = _vmove(auVar18);
        auStack_320 = _sqc2(auVar15);
        auStack_300 = _sqc2(auVar16);
        auStack_2e0 = _sqc2(auVar14);
        auStack_2f0 = _sqc2(auVar14);
        _sqc2(auVar15);
        auStack_340 = _sqc2(auVar16);
        auStack_330 = _sqc2(auVar14);
        uVar2 = uVar5 * 0x10000 + ((int)uVar5 >> 0x10) + iVar4;
        iVar4 = iVar4 + uVar2;
        DAT_00418590 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + iVar4;
        DAT_00418594 = iVar4 + DAT_00418590;
        _lqc2(*(undefined1 (*) [16])(piVar6 + 0x18));
        auVar17 = _vaddbc(in_vf0,in_vf0);
        auVar15 = _vmove(auVar17);
        auVar14 = _pextlw((long)(int)((float)DAT_00418590 * fVar9),(long)(int)((float)uVar5 * fVar9)
                         );
        auVar14 = _pextlw((long)(int)((float)uVar2 * fVar9 + 0.01),auVar14._0_8_);
        auVar16 = _qmtc2(auVar14._0_4_);
        auVar14 = _vmul(auVar16,auVar16);
        _auStack_360 = _sqc2(auVar16);
        _vaddabc(auVar14,auVar14);
        auVar14 = _vmaddbc(auVar17,auVar14);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar14);
        uVar27 = _vwaitq();
        auVar14 = _vmulq(auVar16,uVar27);
        auVar16 = _vadd(in_vf0,auVar14);
        auVar14 = _sqc2(auVar16);
        *(undefined1 (*) [16])(piVar6 + 0x18) = auVar14;
        auVar16 = _vmove(auVar16);
        DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
        DAT_00418594 = DAT_00418594 + DAT_00418590;
        _lqc2(*(undefined1 (*) [16])(piVar6 + 0x18));
        auVar14 = _qmtc2((float)DAT_00418590 * fVar9 * 0.1 + 0.5);
        auVar14 = _vmulbc(auVar16,auVar14);
        auVar14 = _vmove(auVar14);
        auVar14 = _sqc2(auVar14);
        *(undefined1 (*) [16])(piVar6 + 0x18) = auVar14;
        auStack_310 = auStack_350;
        if (piVar6[0x1d] != 0) {
          auStack_110 = _sqc2(auVar18);
          auStack_100 = _sqc2(auVar12);
          auStack_f0 = _sqc2(auVar25);
          auStack_e0 = _sqc2(auVar13);
          auStack_d0 = _sqc2(auVar15);
          FUN_001de598(auStack_180,piVar6);
          piVar6[0x1d] = 0;
          *(char *)(piVar6 + 0x1e) = (char)piVar6[0x1e] + '\x01';
          auVar15 = _lqc2(auStack_d0);
          auVar13 = _lqc2(auStack_e0);
          auVar25 = _lqc2(auStack_f0);
          auVar12 = _lqc2(auStack_100);
          auVar18 = _lqc2(auStack_110);
        }
        auVar14 = _sqc2(auVar18);
        auStack_360._4_4_ = auVar14._4_4_;
        if ((float)auStack_360._4_4_ < 1.0) {
          auVar16 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x18));
          auVar14 = _qmtc2((float)piVar6[0x1c] * 0.017453292);
          auVar25 = _vmul(auVar16,auVar16);
          auVar14 = _vaddbc(in_vf0,auVar14);
          _ctc2(0x3fc90fdb);
          _vnop();
          auVar14 = _vsubi(auVar14,in_vuI);
          _vaddabc(auVar25,auVar25);
          auVar25 = _vmaddbc(auVar15,auVar25);
          auVar14 = _vabs(auVar14);
          auVar16 = _vmove(auVar16);
          _ctc2(0xbe22f983);
          _vnop();
          _vmulai(auVar14,in_vuI);
          _ctc2(0x4b400000);
          _vnop();
          _vmsubai(auVar12,in_vuI);
          _vmaddai(auVar12,in_vuI);
          _ctc2(0xbe22f983);
          _vnop();
          _vmsubai(auVar14,in_vuI);
          _ctc2(0x3f000000);
          _vnop();
          auVar12 = _vmsubi(auVar12,in_vuI);
          auVar12 = _vabs(auVar12);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar25);
          uVar27 = _vwaitq();
          auVar16 = _vmulq(auVar16,uVar27);
          _ctc2(0x3e800000);
          _vnop();
          auVar12 = _vsubi(auVar12,in_vuI);
          _lqc2(auStack_160);
          _ctc2(0xc2992661);
          _vnop();
          auVar17 = _vmuli(auVar12,in_vuI);
          auVar19 = _vmul(auVar12,auVar12);
          auVar25 = _qmtc2(0x3f800000);
          auVar21 = _vmul(auVar19,auVar19);
          auVar25 = _vaddbc(in_vf0,auVar25);
          auStack_160 = _sqc2(auVar25);
          _ctc2(0xc2255de0);
          _vnop();
          auVar20 = _vmuli(auVar12,in_vuI);
          _ctc2(0x42a33457);
          _vnop();
          auVar18 = _vmuli(auVar12,in_vuI);
          _ctc2(0x421ed7b7);
          _vnop();
          auVar14 = _vmuli(auVar12,in_vuI);
          auVar25 = _vmul(auVar21,auVar21);
          auVar17 = _vmul(auVar17,auVar19);
          _lqc2(auStack_150);
          _vmula(auVar20,auVar19);
          _vmadda(auVar17,auVar21);
          _ctc2(0x40c90fda);
          _vmadda(auVar18,auVar21);
          _vmaddai(auVar12,in_vuI);
          auVar12 = _vmadd(auVar14,auVar25);
          auVar25 = _vmulbc(auVar16,auVar16);
          _vaddbc(in_vf0,auVar25);
          auVar25 = _vmulbc(auVar16,auVar16);
          _vaddbc(in_vf0,auVar25);
          auVar14 = _vmul(auVar16,auVar16);
          auVar25 = _lqc2(auStack_160);
          auVar14 = _vsub(in_vf0,auVar14);
          auVar12 = _vsubbc(auVar25,auVar12);
          auVar21 = _lqc2(auStack_160);
          auVar25 = _vmulbc(auVar16,auVar16);
          auVar12 = _vaddbc(in_vf0,auVar12);
          auVar25 = _vaddbc(in_vf0,auVar25);
          auVar14 = _vaddbc(auVar14,auVar21);
          auVar25 = _vmulbc(auVar25,auVar12);
          auVar17 = _vmulbc(auVar16,auVar12);
          auStack_150 = _sqc2(auVar25);
          auVar16 = _vmulbc(auVar14,auVar12);
          _lqc2(auStack_280);
          auVar12 = _vsubbc(auVar21,auVar16);
          _lqc2(auStack_290);
          auVar25 = _lqc2(auStack_150);
          auVar20 = _vaddbc(in_vf0,auVar12);
          auVar12 = _vsubbc(auVar25,auVar17);
          _lqc2(auStack_270);
          auVar18 = _vaddbc(in_vf0,auVar12);
          auVar25 = _vaddbc(auVar25,auVar17);
          auVar19 = _vaddbc(in_vf0,auVar25);
          auVar25 = _lqc2(auStack_150);
          auVar12 = _vsubbc(auVar25,auVar17);
          _vmove(auVar19);
          auVar26 = _vaddbc(in_vf0,auVar12);
          auVar25 = _vaddbc(auVar25,auVar17);
          _vmove(auVar20);
          auVar12 = _vsubbc(auVar21,auVar16);
          auVar24 = _vaddbc(in_vf0,auVar25);
          auVar14 = _lqc2(auStack_150);
          _vmove(auVar18);
          auVar25 = _vsubbc(auVar14,auVar17);
          auVar22 = _vaddbc(in_vf0,auVar12);
          auVar12 = _vsubbc(auVar21,auVar16);
          _sqc2(auVar20);
          auVar14 = _vaddbc(auVar14,auVar17);
          _sqc2(auVar18);
          _sqc2(auVar19);
          _vmove(auVar22);
          _vmove(auVar26);
          auVar21 = _vaddbc(in_vf0,auVar14);
          _vmove(auVar24);
          auVar23 = _vaddbc(in_vf0,auVar12);
          auVar20 = _vaddbc(in_vf0,auVar25);
          _sqc2(auVar24);
          _sqc2(auVar22);
          auVar24 = _vaddbc(in_vf0,in_vf0);
          _sqc2(auVar26);
          auVar16 = _lqc2(auStack_3e0);
          auVar14 = _lqc2(auStack_3d0);
          auVar25 = _lqc2(auStack_3c0);
          auVar12 = _lqc2(auStack_3b0);
          _vmulabc(auVar16,auVar20);
          _vmaddabc(auVar14,auVar20);
          auVar18 = _vmaddbc(auVar25,auVar20);
          _vmulabc(auVar16,auVar21);
          _vmaddabc(auVar14,auVar21);
          auVar19 = _vmaddbc(auVar25,auVar21);
          auStack_290 = _sqc2(auVar20);
          _vmulabc(auVar16,auVar23);
          _vmaddabc(auVar14,auVar23);
          auVar17 = _vmaddbc(auVar25,auVar23);
          _vmulabc(auVar16,auVar13);
          _vmaddabc(auVar14,auVar13);
          _vmaddabc(auVar25,auVar13);
          auVar16 = _vmaddbc(auVar12,in_vf0);
          auStack_280 = _sqc2(auVar21);
          auStack_270 = _sqc2(auVar23);
          auStack_250 = _sqc2(auVar13);
          auStack_260 = _sqc2(auVar13);
          _sqc2(auVar20);
          _sqc2(auVar21);
          _sqc2(auVar23);
          auStack_2a0 = _sqc2(auVar13);
          _sqc2(auVar20);
          _sqc2(auVar21);
          _sqc2(auVar23);
          _sqc2(auVar13);
          auStack_1c0 = _sqc2(auVar18);
          auStack_1b0 = _sqc2(auVar19);
          auStack_1a0 = _sqc2(auVar17);
          auStack_190 = _sqc2(auVar16);
          auStack_200 = _sqc2(auVar18);
          auStack_1f0 = _sqc2(auVar19);
          auVar12 = _lqc2(_DAT_004432c0);
          _vopmula(auVar17,auVar12);
          auVar13 = _vopmsub(auVar12,auVar17);
          auVar20 = _vadd(in_vf0,auVar12);
          auVar25 = _vmul(auVar13,auVar13);
          auVar14 = _lqc2(_DAT_004432d0);
          _vaddabc(auVar25,auVar25);
          auVar25 = _vmaddbc(auVar15,auVar25);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar25);
          uVar27 = _vwaitq();
          auVar25 = _vmulq(auVar13,uVar27);
          _vopmula(auVar12,auVar25);
          auVar13 = _vopmsub(auVar25,auVar12);
          auVar21 = _qmtc2(0);
          auVar12 = _vmul(auVar13,auVar13);
          auVar25 = _sqc2(auVar20);
          *(undefined1 (*) [16])(piVar6 + 0x18) = auVar25;
          _vaddabc(auVar12,auVar12);
          auVar25 = _vmaddbc(auVar15,auVar12);
          auVar12 = _vmr32(auVar21);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar25);
          uVar27 = _vwaitq();
          auVar25 = _vmulq(auVar13,uVar27);
          auStack_2e0 = _sqc2(auVar18);
          auVar25 = _vmul(auVar25,auVar14);
          auStack_2d0 = _sqc2(auVar19);
          _vaddabc(auVar25,auVar25);
          auVar25 = _vmaddbc(auVar24,auVar25);
          auStack_2b0 = _sqc2(auVar16);
          auVar25 = _qmfc2(auVar25._0_4_);
          fVar8 = auVar25._0_4_;
          auVar25 = _sqc2(auVar12);
          *(undefined1 (*) [16])(piVar6 + 0x18) = auVar25;
          fVar8 = (float)((int)fVar8 * (uint)(-1.0 < fVar8) | (uint)(-1.0 >= fVar8) * -0x40800000);
          auStack_1e0 = _sqc2(auVar17);
          auStack_1d0 = _sqc2(auVar16);
          auStack_240 = _sqc2(auVar18);
          auStack_230 = _sqc2(auVar19);
          auStack_220 = _sqc2(auVar17);
          auStack_210 = _sqc2(auVar16);
          _auStack_360 = _sqc2(auVar18);
          auStack_350 = _sqc2(auVar19);
          auStack_340 = _sqc2(auVar17);
          auStack_330 = _sqc2(auVar16);
          auStack_2c0 = _sqc2(auVar17);
          fVar8 = (float)acosf((int)fVar8 * (uint)(fVar8 < 1.0) | (uint)(fVar8 >= 1.0) * 0x3f800000,
                               0x4432c0,0xffffffffc2255de0,0x42a33457,0x3e800000);
          auVar25 = _pextlw(0,0);
          auVar13 = _lqc2(_auStack_170);
          auVar12 = _pextlw(0x3fc00000,auVar25._0_8_);
          auStack_2e0 = _pextlw(0x42c80000,auVar25._0_8_);
          piVar6[0x1c] = (int)(fVar8 * 57.29578);
          auVar25 = _qmtc2(auStack_2e0._0_4_);
          auVar12 = _qmtc2(auVar12._0_4_);
          auVar25 = _vsub(auVar13,auVar25);
          auVar13 = _vadd(auVar13,auVar12);
          auVar12 = _qmfc2(auVar25._0_4_);
          auVar25 = _qmfc2(auVar13._0_4_);
          cVar1 = FUN_0012ae58(DAT_0040f4d0,auVar25._0_8_,auVar12._0_8_,1,0,1,auStack_320);
          if (cVar1 == '\x01') {
            auVar12 = _lqc2(auStack_320);
            auVar25 = _qmtc2(0x3c23d70a);
            _lqc2(_auStack_170);
            auVar25 = _vaddbc(auVar12,auVar25);
            auVar12 = _vaddbc(in_vf0,auVar25);
            auVar25 = _qmfc2(auVar12._0_4_);
            _auStack_170 = _sqc2(auVar12);
            lVar3 = FUN_001b1848(auVar25._0_8_);
            if (lVar3 != 0) {
              FUN_001b5ed8();
            }
          }
          FUN_001b6108();
          goto LAB_001b4fe0;
        }
      }
      auVar16 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x18));
      auVar14 = _qmtc2(uVar11);
      auVar14 = _vmulbc(auVar16,auVar14);
      auVar14 = _sqc2(auVar14);
      fStack_354 = auVar14._12_4_;
      piVar6[0x1c] = (int)((float)piVar6[0x1c] + fStack_354);
      if (piVar6[0x1d] != 0) {
        auVar17 = _lqc2(_auStack_170);
        auVar19 = _lqc2(auStack_3a0);
        auVar18 = _lqc2(auStack_390);
        auVar14 = _lqc2(auStack_380);
        auVar16 = _lqc2(auStack_370);
        _vmulabc(auVar19,auVar25);
        _vmaddabc(auVar18,auVar25);
        auVar25 = _vmaddbc(auVar14,auVar25);
        _vmulabc(auVar19,auVar17);
        _vmaddabc(auVar18,auVar17);
        _vmaddabc(auVar14,auVar17);
        auVar14 = _vmaddbc(auVar16,in_vf0);
        _auStack_170 = _sqc2(auVar14);
      }
      auVar17 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x18));
      auVar14 = _vmul(auVar17,auVar17);
      auVar16 = _qmtc2((float)piVar6[0x1c] * 0.017453292);
      auVar16 = _vaddbc(in_vf0,auVar16);
      _ctc2(0x3fc90fdb);
      _vnop();
      auVar16 = _vsubi(auVar16,in_vuI);
      _vaddabc(auVar14,auVar14);
      auVar14 = _vmaddbc(auVar15,auVar14);
      auVar15 = _vabs(auVar16);
      _ctc2(0xbe22f983);
      _vnop();
      _vmulai(auVar15,in_vuI);
      _ctc2(0x4b400000);
      _vnop();
      _vmsubai(auVar12,in_vuI);
      _vmaddai(auVar12,in_vuI);
      _ctc2(0xbe22f983);
      _vnop();
      _vmsubai(auVar15,in_vuI);
      _ctc2(0x3f000000);
      _vnop();
      auVar12 = _vmsubi(auVar12,in_vuI);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar14);
      uVar27 = _vwaitq();
      auVar17 = _vmulq(auVar17,uVar27);
      auVar12 = _vabs(auVar12);
      _lqc2(auStack_140);
      _ctc2(0x3e800000);
      _vnop();
      auVar14 = _vsubi(auVar12,in_vuI);
      _ctc2(0xc2992661);
      _vnop();
      auVar15 = _vmuli(auVar14,in_vuI);
      auVar18 = _vmul(auVar14,auVar14);
      auVar12 = _qmtc2(0x3f800000);
      auVar21 = _vmul(auVar18,auVar18);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auStack_140 = _sqc2(auVar12);
      auVar12 = _vmul(auVar21,auVar21);
      auVar16 = _vmul(auVar15,auVar18);
      _ctc2(0xc2255de0);
      _vnop();
      auVar20 = _vmuli(auVar14,in_vuI);
      _ctc2(0x42a33457);
      _vnop();
      auVar19 = _vmuli(auVar14,in_vuI);
      _ctc2(0x421ed7b7);
      _vnop();
      auVar15 = _vmuli(auVar14,in_vuI);
      _vmula(auVar20,auVar18);
      _vmadda(auVar16,auVar21);
      _ctc2(0x40c90fda);
      _vmadda(auVar19,auVar21);
      _vmaddai(auVar14,in_vuI);
      auVar12 = _vmadd(auVar15,auVar12);
      _lqc2(auStack_130);
      auVar14 = _vmulbc(auVar17,auVar17);
      auVar15 = _vmulbc(auVar17,auVar17);
      _vaddbc(in_vf0,auVar14);
      _lqc2(auStack_310);
      auVar14 = _lqc2(auStack_140);
      _vaddbc(in_vf0,auVar15);
      auVar14 = _vsubbc(auVar14,auVar12);
      auVar12 = _vmulbc(auVar17,auVar17);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar15 = _vmul(auVar17,auVar17);
      auVar12 = _vaddbc(in_vf0,auVar12);
      auVar15 = _vsub(in_vf0,auVar15);
      auVar16 = _lqc2(auStack_140);
      auVar12 = _vmulbc(auVar12,auVar14);
      auStack_130 = _sqc2(auVar12);
      auVar15 = _vaddbc(auVar15,auVar16);
      auVar18 = _vmulbc(auVar17,auVar14);
      auVar15 = _vmulbc(auVar15,auVar14);
      _lqc2(auStack_320);
      auVar14 = _vsubbc(auVar16,auVar15);
      auVar12 = _vsubbc(auVar12,auVar18);
      auVar16 = _lqc2(auStack_130);
      auVar19 = _vaddbc(in_vf0,auVar14);
      auVar20 = _vaddbc(in_vf0,auVar12);
      _lqc2(auStack_300);
      auVar14 = _vaddbc(auVar16,auVar18);
      auVar17 = _vsubbc(auVar16,auVar18);
      auVar12 = _vaddbc(auVar16,auVar18);
      auVar16 = _lqc2(auStack_140);
      auVar21 = _vaddbc(in_vf0,auVar14);
      auVar14 = _vsubbc(auVar16,auVar15);
      _vmove(auVar20);
      _vmove(auVar19);
      auVar24 = _vaddbc(in_vf0,auVar14);
      auVar23 = _vaddbc(in_vf0,auVar12);
      auVar14 = _lqc2(auStack_130);
      auVar12 = _lqc2(auStack_140);
      auVar16 = _vsubbc(auVar12,auVar15);
      _vmove(auVar21);
      auVar12 = _vsubbc(auVar14,auVar18);
      auVar22 = _vaddbc(in_vf0,auVar17);
      auVar14 = _vaddbc(auVar14,auVar18);
      _sqc2(auVar19);
      _vmove(auVar23);
      auVar15 = _vaddbc(in_vf0,auVar12);
      _sqc2(auVar20);
      _sqc2(auVar21);
      _vmove(auVar24);
      _vmove(auVar22);
      auVar17 = _vaddbc(in_vf0,auVar14);
      _sqc2(auVar23);
      auVar14 = _vaddbc(in_vf0,auVar16);
      _sqc2(auVar24);
      _sqc2(auVar22);
      auStack_330 = _sqc2(auVar13);
      auVar12 = _sqc2(auVar15);
      *(undefined1 (*) [16])(piVar6 + 4) = auVar12;
      auVar12 = _sqc2(auVar17);
      *(undefined1 (*) [16])(piVar6 + 8) = auVar12;
      auVar12 = _sqc2(auVar14);
      *(undefined1 (*) [16])(piVar6 + 0xc) = auVar12;
      piVar6[0x10] = auStack_170._0_4_;
      piVar6[0x11] = auStack_170._4_4_;
      piVar6[0x12] = iStack_168;
      piVar6[0x13] = iStack_164;
      auVar25 = _sqc2(auVar25);
      *(undefined1 (*) [16])(piVar6 + 0x14) = auVar25;
      auStack_320 = _sqc2(auVar15);
      auStack_310 = _sqc2(auVar17);
      auStack_300 = _sqc2(auVar14);
      auStack_2e0 = _sqc2(auVar13);
      auStack_2f0 = _sqc2(auVar13);
      _auStack_360 = _sqc2(auVar15);
      auStack_350 = _sqc2(auVar17);
      auStack_340 = _sqc2(auVar14);
    }
LAB_001b4fe0:
    piVar6 = piVar6 + 0x20;
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) {
      return;
    }
    iVar4 = *piVar6;
  } while( true );
}


// ==== FUN_001b5028 @ 001b5028 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_00410000 undefined

void FUN_001b5028(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  undefined8 extraout_v0_udw_00;
  char *pcVar5;
  int in_a0_udw;
  int in_register_0000004c;
  undefined1 auVar6 [16];
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 in_s0_qw [16];
  undefined1 (*pauVar11) [16];
  short *psVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
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
  undefined4 in_vuI;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
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
  int iStack_130;
  int iStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  lVar8 = 0;
  iStack_12c = param_1 + 0x37b0;
  psVar12 = (short *)0x0;
  iVar3 = 0;
  uVar16 = 0;
  uVar13 = 0;
  iStack_130 = param_1;
  do {
    uStack_128 = uVar13 + 1;
    bVar2 = false;
    iVar15 = *(int *)(iStack_130 + uVar13 * 4 + 0x37b0);
    in_s0_qw._0_8_ = (long)(iStack_130 + 0x30);
    iVar14 = 0xd;
    do {
      piVar17 = in_s0_qw._0_4_;
      if ((*piVar17 != 0) && (*(byte *)(piVar17 + 0x1e) == uVar13)) {
        if (bVar2) {
          auStack_2b0._0_4_ = piVar17[4];
          auStack_2b0._4_4_ = piVar17[5];
          auStack_2b0._8_4_ = piVar17[6];
          auStack_2b0._12_4_ = piVar17[7];
        }
        else {
          psVar12 = *(short **)(iVar15 + 0x20);
          pbVar7 = (byte *)(*(int *)(iVar15 + 0x38) + (int)*psVar12);
          lVar8 = (long)(int)pbVar7;
          uVar16 = *(undefined4 *)(iVar15 + 0x1c);
          if (*pbVar7 - 2 < 3) {
            iVar3 = DAT_0040f4d0 + 0x300;
          }
          bVar2 = true;
          auStack_2b0._0_4_ = piVar17[4];
          auStack_2b0._4_4_ = piVar17[5];
          auStack_2b0._8_4_ = piVar17[6];
          auStack_2b0._12_4_ = piVar17[7];
        }
        auStack_2a0 = *(undefined1 (*) [16])(piVar17 + 8);
        in_a0_udw = piVar17[0xe];
        in_register_0000004c = piVar17[0xf];
        auStack_290 = *(undefined1 (*) [16])(piVar17 + 0xc);
        auStack_280 = *(undefined1 (*) [16])(piVar17 + 0x10);
        if (piVar17[0x1d] != 0) {
          uStack_110 = (undefined4)lVar8;
          uStack_10c = (undefined4)((ulong)lVar8 >> 0x20);
          FUN_001357b8(auStack_230,piVar17[0x1d]);
          auVar18 = _lqc2(auStack_2b0);
          auVar26 = _lqc2(auStack_2a0);
          auVar19 = _lqc2(auStack_230);
          auVar4._4_4_ = uStack_21c;
          auVar4._0_4_ = uStack_220;
          auVar4._8_4_ = uStack_218;
          auVar4._12_4_ = uStack_214;
          auVar27 = _lqc2(auVar4);
          auVar6 = _lqc2(auStack_210);
          _vmulabc(auVar19,auVar18);
          _vmaddabc(auVar27,auVar18);
          auVar20 = _vmaddbc(auVar6,auVar18);
          _vmulabc(auVar19,auVar26);
          _vmaddabc(auVar27,auVar26);
          auVar21 = _vmaddbc(auVar6,auVar26);
          auVar18 = _lqc2(auStack_290);
          auVar26 = _lqc2(auStack_280);
          auVar4 = _lqc2(auStack_200);
          _vmulabc(auVar19,auVar18);
          _vmaddabc(auVar27,auVar18);
          auVar18 = _vmaddbc(auVar6,auVar18);
          _vmulabc(auVar19,auVar26);
          _vmaddabc(auVar27,auVar26);
          _vmaddabc(auVar6,auVar26);
          auVar4 = _vmaddbc(auVar4,in_vf0);
          auStack_270 = _sqc2(auVar20);
          auStack_260 = _sqc2(auVar21);
          auStack_250 = _sqc2(auVar18);
          auStack_240 = _sqc2(auVar4);
          auStack_170 = _sqc2(auVar20);
          auStack_160 = _sqc2(auVar21);
          auStack_150 = _sqc2(auVar18);
          auStack_140 = _sqc2(auVar4);
          auStack_1b0 = _sqc2(auVar20);
          auStack_1a0 = _sqc2(auVar21);
          auStack_190 = _sqc2(auVar18);
          auStack_180 = _sqc2(auVar4);
          auStack_1f0 = _sqc2(auVar20);
          auStack_1e0 = _sqc2(auVar21);
          auStack_1d0 = _sqc2(auVar18);
          auStack_1c0 = _sqc2(auVar4);
          auStack_2b0 = _sqc2(auVar20);
          auStack_2a0 = _sqc2(auVar21);
          auStack_290 = _sqc2(auVar18);
          auStack_280 = _sqc2(auVar4);
          lVar8 = CONCAT44(uStack_10c,uStack_110);
        }
        uStack_110 = (undefined4)lVar8;
        uStack_10c = (undefined4)((ulong)lVar8 >> 0x20);
        FUN_001c62f0(uVar16,auStack_2b0,lVar8,*(int *)(iVar15 + 0x40) + (int)psVar12[1],iVar3,0,1);
        lVar8 = CONCAT44(uStack_10c,uStack_110);
        in_v0_udw = extraout_v0_udw;
      }
      iVar14 = iVar14 + -1;
      in_s0_qw._0_8_ = (long)(in_s0_qw._0_4_ + 0x80);
    } while (-1 < iVar14);
    uVar13 = uStack_128;
  } while ((int)uStack_128 < 6);
  uVar13 = 0;
  do {
    uStack_124 = uVar13 + 1;
    piVar17 = (int *)(iStack_130 + uVar13 * 0xc20 + 0x730);
    if ((*piVar17 != 0) && ((char)piVar17[1] != '\0')) {
      auVar27._8_8_ = in_v0_udw;
      auVar27._0_8_ = 0x1100000011000000;
      uVar10 = 0;
      auVar26._8_4_ = in_a0_udw;
      auVar26._0_8_ = 0x10000000;
      auVar26._12_4_ = in_register_0000004c;
      auVar6 = _pcpyld(auVar27,auVar26);
      puStack_f0 = &DAT_00410000;
      uStack_ec = 0;
      iVar3 = 1;
      uVar13 = 0;
      do {
        pcVar5 = (char *)((int)piVar17 + uVar13 + 0xc10);
        uStack_128 = iVar3;
        if (*pcVar5 != '\0') {
          iVar15 = 0;
          iVar3 = *(int *)(iStack_12c + (uVar13 << 3 | 4));
          psVar12 = *(short **)(iVar3 + 0x20);
          lVar9 = (long)*(int *)(iVar3 + 0x1c);
          lVar8 = (long)(*(int *)(iVar3 + 0x38) + (int)*psVar12);
          if (*pcVar5 != '\0') {
            auVar4 = _pextlw(uVar10,uVar10);
            auVar4 = _pextlw(0x3f800000,auVar4._0_8_);
            auVar27 = _vmaxbc(in_vf0,in_vf0);
            pauVar11 = (undefined1 (*) [16])(piVar17 + uVar13 * 0x100 + 4);
            uStack_d0 = 0x3f000000;
            uStack_cc = 0;
            auVar26 = _vadd(in_vf0,in_vf0);
            do {
              auVar18 = _qmtc2(*(float *)pauVar11[1] * 0.017453292);
              auVar18 = _vaddbc(in_vf0,auVar18);
              _ctc2(0x3fc90fdb);
              _vnop();
              auVar18 = _vsubi(auVar18,in_vuI);
              auVar18 = _vabs(auVar18);
              _ctc2(0xbe22f983);
              _vnop();
              _vmulai(auVar18,in_vuI);
              _ctc2(0x4b400000);
              _vnop();
              _vmsubai(auVar27,in_vuI);
              _vmaddai(auVar27,in_vuI);
              _ctc2(0xbe22f983);
              _vnop();
              _vmsubai(auVar18,in_vuI);
              _ctc2(uStack_d0);
              _vnop();
              auVar18 = _vmsubi(auVar27,in_vuI);
              auVar18 = _vabs(auVar18);
              _ctc2(0x3e800000);
              _vnop();
              auVar19 = _vsubi(auVar18,in_vuI);
              auVar21 = _vmul(auVar19,auVar19);
              _ctc2(0xc2992661);
              _vnop();
              auVar18 = _vmuli(auVar19,in_vuI);
              auVar24 = _vmul(auVar21,auVar21);
              _ctc2(0x421ed7b7);
              _vnop();
              auVar22 = _vmuli(auVar19,in_vuI);
              auVar20 = _vmul(auVar18,auVar21);
              _ctc2(0xc2255de0);
              _vnop();
              auVar25 = _vmuli(auVar19,in_vuI);
              _ctc2(0x42a33457);
              _vnop();
              auVar23 = _vmuli(auVar19,in_vuI);
              auVar18 = _vmul(auVar24,auVar24);
              _vmula(auVar25,auVar21);
              _vmadda(auVar20,auVar24);
              _ctc2(0x40c90fda);
              _vmadda(auVar23,auVar24);
              _vmaddai(auVar19,in_vuI);
              auVar19 = _vmadd(auVar22,auVar18);
              _lqc2(auStack_230);
              _lqc2(auStack_210);
              auVar20 = _vaddbc(in_vf0,auVar19);
              auVar21 = _vaddbc(in_vf0,auVar19);
              auVar18 = _qmtc2(0);
              _vmove(auVar21);
              uStack_100 = (undefined4)lVar9;
              _vmove(auVar20);
              auVar23 = _vaddbc(in_vf0,auVar18);
              _sqc2(auVar20);
              auVar22 = _vaddbc(in_vf0,auVar18);
              _sqc2(auVar21);
              auVar18 = _vsub(in_vf0,auVar19);
              _vmove(auVar22);
              auVar20 = _vaddbc(in_vf0,auVar18);
              auStack_280 = *pauVar11;
              _vmove(auVar23);
              auVar18 = _vaddbc(in_vf0,auVar19);
              _sqc2(auVar22);
              uStack_220 = auVar4._0_4_;
              uStack_21c = auVar4._4_4_;
              uStack_218 = auVar4._8_4_;
              uStack_214 = auVar4._12_4_;
              _sqc2(auVar23);
              auStack_1f0 = _sqc2(auVar26);
              auStack_200 = _sqc2(auVar26);
              iVar15 = iVar15 + 1;
              auStack_240 = _sqc2(auVar26);
              pauVar11 = pauVar11 + 2;
              auStack_2b0 = _sqc2(auVar20);
              auStack_290 = _sqc2(auVar18);
              auStack_230 = _sqc2(auVar20);
              auStack_210 = _sqc2(auVar18);
              auStack_270 = _sqc2(auVar20);
              auStack_250 = _sqc2(auVar18);
              uStack_120 = auVar6._0_4_;
              uStack_11c = auVar6._4_4_;
              uStack_118 = auVar6._8_4_;
              uStack_114 = auVar6._12_4_;
              uStack_110 = (undefined4)lVar8;
              uStack_10c = (undefined4)((ulong)lVar8 >> 0x20);
              uStack_fc = (undefined4)((ulong)lVar9 >> 0x20);
              uStack_e0 = (undefined4)uVar10;
              uStack_dc = (undefined4)((ulong)uVar10 >> 0x20);
              auStack_c0 = _sqc2(auVar26);
              auStack_b0 = _sqc2(auVar27);
              auStack_2a0 = auVar4;
              auStack_260 = auVar4;
              FUN_001c62f0(uStack_100,auStack_2b0,lVar8,*(int *)(iVar3 + 0x40) + (int)psVar12[1],0,0
                           ,1);
              auVar6._4_4_ = uStack_11c;
              auVar6._0_4_ = uStack_120;
              auVar6._8_4_ = uStack_118;
              auVar6._12_4_ = uStack_114;
              lVar8 = CONCAT44(uStack_10c,uStack_110);
              lVar9 = CONCAT44(uStack_fc,uStack_100);
              uVar10 = CONCAT44(uStack_dc,uStack_e0);
              auVar26 = _lqc2(auStack_c0);
              auVar27 = _lqc2(auStack_b0);
              in_v0_udw = extraout_v0_udw_00;
            } while (iVar15 < (int)(uint)*(byte *)((int)piVar17 + uVar13 + 0xc10));
          }
          puVar1 = *(undefined4 **)(puStack_f0 + -0x1a10);
          *puVar1 = auVar6._0_4_;
          puVar1[1] = auVar6._4_4_;
          puVar1[2] = auVar6._8_4_;
          puVar1[3] = auVar6._12_4_;
          *(undefined4 **)(puStack_f0 + -0x1a10) = puVar1 + 4;
        }
        iVar3 = uStack_128 + 1;
        uVar13 = uStack_128;
      } while ((int)uStack_128 < 3);
    }
    uVar13 = uStack_124 & 0xff;
  } while (uVar13 < 4);
  return;
}


// ==== FUN_001b5570 @ 001b5570 ====

undefined4 FUN_001b5570(void)

{
  return 1;
}


// ==== FUN_001b5578 @ 001b5578 ====
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_00418590 uint
// GLOBAL DAT_00418594 int
// GLOBAL DAT_0040f4d0 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b5578(int param_1,int param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined1 in_vf0 [16];
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
  undefined4 in_vuI;
  undefined4 uVar34;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float fStack_12c;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  puVar15 = (undefined4 *)0x0;
  puVar5 = (undefined8 *)FUN_001a68b0(*(undefined4 *)(param_2 + 0x330),6);
  uVar1 = *puVar5;
  uVar9 = *(undefined4 *)(puVar5 + 1);
  uVar11 = *(undefined4 *)((int)puVar5 + 0xc);
  uVar2 = puVar5[2];
  uVar6 = *(undefined4 *)(puVar5 + 3);
  uVar7 = *(undefined4 *)((int)puVar5 + 0x1c);
  uVar3 = *(undefined8 *)*(undefined1 (*) [16])(puVar5 + 4);
  uVar10 = *(undefined4 *)(puVar5 + 5);
  uVar12 = *(undefined4 *)((int)puVar5 + 0x2c);
  auVar17 = *(undefined1 (*) [16])(puVar5 + 6);
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar15 = (undefined4 *)(param_1 + 0x30);
  }
  else {
    for (iVar8 = 1; iVar8 < 0xe; iVar8 = iVar8 + 1) {
      if (*(int *)(param_1 + iVar8 * 0x80 + 0x30) == 0) {
        puVar15 = (undefined4 *)(param_1 + iVar8 * 0x80 + 0x30);
        break;
      }
    }
  }
  if (puVar15 != (undefined4 *)0x0) {
    auVar25 = _lqc2(*(undefined1 (*) [16])(puVar5 + 4));
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar20 = _lqc2(_DAT_004432c0);
    _vopmula(auVar25,auVar20);
    auVar21 = _vopmsub(auVar20,auVar25);
    auVar20 = _vmul(auVar21,auVar21);
    auVar23 = _vmove(auVar21);
    _vaddabc(auVar20,auVar20);
    auVar20 = _vmaddbc(auVar18,auVar20);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar20);
    uVar34 = _vwaitq();
    auVar24 = _vmulq(auVar23,uVar34);
    _vopmula(auVar24,auVar25);
    auVar22 = _vopmsub(auVar25,auVar24);
    auVar20 = _vmul(auVar22,auVar22);
    _vaddabc(auVar20,auVar20);
    auVar20 = _vmaddbc(auVar18,auVar20);
    auVar23 = _vmove(auVar22);
    uVar14 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar20);
    uVar34 = _vwaitq();
    auVar30 = _vmulq(auVar23,uVar34);
    auVar33 = _vmove(auVar18);
    auVar18 = _qmtc2(*(undefined4 *)(param_3 + 0x5c));
    auVar23 = _qmtc2(*(undefined4 *)(param_3 + 0x60));
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar28 = _vsub(in_vf0,in_vf0);
    auVar20 = _vaddbc(in_vf0,in_vf0);
    auVar19 = _vaddbc(in_vf0,in_vf0);
    auVar26 = _vaddbc(in_vf0,in_vf0);
    _sqc2(auVar20);
    auVar18 = _vmulbc(auVar24,auVar18);
    _sqc2(auVar19);
    auVar23 = _vmulbc(auVar30,auVar23);
    auVar20 = _qmtc2(*(undefined4 *)(param_3 + 100));
    _sqc2(auVar26);
    auVar18 = _vadd(auVar18,auVar23);
    _sqc2(auVar28);
    auVar20 = _vmulbc(auVar25,auVar20);
    _sqc2(auVar21);
    _sqc2(auVar22);
    auVar19 = _vadd(auVar18,auVar20);
    auVar20 = _sqc2(auVar24);
    auVar18 = _sqc2(auVar30);
    auVar23 = _sqc2(auVar25);
    auVar21 = _vmove(auVar19);
    auVar19 = _qmtc2(0.9 - (float)uVar14 * 2.3283064e-10 * 0.1);
    auVar21 = _vmulbc(auVar21,auVar19);
    auVar19 = _vmul(auVar21,auVar21);
    auVar21 = _vmove(auVar21);
    _vaddabc(auVar19,auVar19);
    auVar19 = _vmaddbc(auVar33,auVar19);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar19);
    auVar19 = _qmfc2(auVar19._0_4_);
    auVar19 = _qmtc2(SQRT(auVar19._0_4_));
    uVar34 = _vwaitq();
    auVar24 = _vmulq(auVar21,uVar34);
    auVar22 = _vmove(auVar24);
    auVar21 = _qmfc2(auVar19._0_4_);
    auVar19 = _sqc2(auVar22);
    fStack_12c = auVar19._4_4_;
    auVar19 = _lqc2(auVar23);
    if (ABS(fStack_12c) <= 0.9) {
      auVar19 = _lqc2(auVar18);
    }
    _vopmula(auVar22,auVar19);
    auVar22 = _vopmsub(auVar19,auVar22);
    auVar19 = _vmul(auVar22,auVar22);
    _vaddabc(auVar19,auVar19);
    auVar19 = _vmaddbc(auVar33,auVar19);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar19);
    uVar34 = _vwaitq();
    auVar22 = _vmulq(auVar22,uVar34);
    auVar24 = _vmove(auVar24);
    uVar13 = uVar14 * 0x10000 + ((int)uVar14 >> 0x10) + DAT_00418594 + uVar14;
    iVar8 = DAT_00418594 + uVar14 + uVar13;
    auVar19 = _qmtc2(auVar21._0_4_);
    auVar19 = _vmulbc(auVar24,auVar19);
    if ((int)uVar13 < 0) {
      fVar16 = *(float *)(param_3 + 0x68);
    }
    else {
      fVar16 = *(float *)(param_3 + 0x68);
    }
    auVar21 = _vmul(auVar22,auVar22);
    _vaddabc(auVar21,auVar21);
    auVar21 = _vmaddbc(auVar33,auVar21);
    auVar22 = _vmove(auVar22);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar21);
    uVar34 = _vwaitq();
    auVar24 = _vmulq(auVar22,uVar34);
    auVar25 = _vmaxbc(in_vf0,in_vf0);
    auVar21 = _qmtc2(0x3f800000);
    _lqc2(auStack_90);
    auVar31 = _vaddbc(in_vf0,auVar21);
    auVar22 = _vmulbc(auVar24,auVar24);
    _lqc2(auStack_80);
    auVar21 = _qmtc2((fVar16 - (float)uVar13 * 2.3283064e-10 * (fVar16 + fVar16)) * 0.017453292);
    _vaddbc(in_vf0,auVar22);
    auVar21 = _vaddbc(in_vf0,auVar21);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar21 = _vsubi(auVar21,in_vuI);
    auVar21 = _vabs(auVar21);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar21,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar25,in_vuI);
    _vmaddai(auVar25,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar21,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar21 = _vmsubi(auVar25,in_vuI);
    auVar21 = _vabs(auVar21);
    _ctc2(0x3e800000);
    _vnop();
    auVar21 = _vsubi(auVar21,in_vuI);
    auVar25 = _vmul(auVar21,auVar21);
    _ctc2(0xc2992661);
    _vnop();
    auVar22 = _vmuli(auVar21,in_vuI);
    auVar27 = _vmul(auVar25,auVar25);
    _ctc2(0xc2255de0);
    _vnop();
    auVar32 = _vmuli(auVar21,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar29 = _vmuli(auVar21,in_vuI);
    auVar26 = _vmul(auVar27,auVar27);
    auVar22 = _vmul(auVar22,auVar25);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar30 = _vmuli(auVar21,in_vuI);
    auVar28 = _vmul(auVar24,auVar24);
    _vmula(auVar32,auVar25);
    _vmadda(auVar22,auVar27);
    _ctc2(0x40c90fda);
    _vmadda(auVar29,auVar27);
    _vmaddai(auVar21,in_vuI);
    auVar21 = _vmadd(auVar30,auVar26);
    auVar25 = _vsub(in_vf0,auVar28);
    auVar22 = _vmulbc(auVar24,auVar24);
    auVar21 = _vsubbc(auVar31,auVar21);
    _vaddbc(in_vf0,auVar22);
    auVar21 = _vaddbc(in_vf0,auVar21);
    auVar22 = _vmulbc(auVar24,auVar24);
    auVar28 = _vaddbc(auVar25,auVar31);
    auVar25 = _vaddbc(in_vf0,auVar22);
    auVar22 = _vmulbc(auVar24,auVar21);
    auVar26 = _vmulbc(auVar25,auVar21);
    auVar28 = _vmulbc(auVar28,auVar21);
    _lqc2(auStack_e0);
    auVar21 = _vsubbc(auVar26,auVar22);
    _lqc2(auStack_d0);
    auVar25 = _vsubbc(auVar31,auVar28);
    auVar24 = _vaddbc(in_vf0,auVar21);
    _lqc2(auStack_c0);
    auVar21 = _vaddbc(auVar26,auVar22);
    auVar30 = _vaddbc(in_vf0,auVar25);
    auVar25 = _vaddbc(in_vf0,auVar21);
    auVar21 = _vaddbc(auVar26,auVar22);
    _vmove(auVar30);
    auVar27 = _vaddbc(in_vf0,auVar21);
    auVar21 = _vsubbc(auVar31,auVar28);
    _vmove(auVar24);
    auVar29 = _vaddbc(in_vf0,auVar21);
    auVar21 = _vsubbc(auVar26,auVar22);
    auVar32 = _vsubbc(auVar26,auVar22);
    _vmove(auVar25);
    _sqc2(auVar24);
    uVar14 = uVar13 * 0x10000 + ((int)uVar13 >> 0x10) + iVar8;
    _sqc2(auVar25);
    auVar32 = _vaddbc(in_vf0,auVar32);
    _sqc2(auVar30);
    auVar24 = _vaddbc(auVar26,auVar22);
    _vmove(auVar27);
    auVar25 = _vsubbc(auVar31,auVar28);
    auVar22 = _vaddbc(in_vf0,auVar21);
    _sqc2(auVar27);
    _sqc2(auVar29);
    iVar8 = iVar8 + uVar14;
    _sqc2(auVar32);
    auVar21 = _vadd(in_vf0,in_vf0);
    _vmove(auVar29);
    _vmove(auVar32);
    auVar24 = _vaddbc(in_vf0,auVar24);
    auVar25 = _vaddbc(in_vf0,auVar25);
    _vmulabc(auVar22,auVar19);
    _vmaddabc(auVar24,auVar19);
    auVar26 = _vmaddbc(auVar25,auVar19);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar24);
    _sqc2(auVar25);
    _sqc2(auVar21);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar24);
    _sqc2(auVar25);
    uVar13 = uVar14 * 0x10000 + ((int)uVar14 >> 0x10) + iVar8;
    auVar19 = _lqc2(auVar20);
    iVar8 = iVar8 + uVar13;
    auVar20 = _qmtc2((float)uVar14 * 2.3283064e-10 * 0.1 + -0.2);
    auVar19 = _vmulbc(auVar19,auVar20);
    uVar14 = uVar13 * 0x10000 + ((int)uVar13 >> 0x10) + iVar8;
    auVar20 = _lqc2(auVar18);
    iVar8 = iVar8 + uVar14;
    auVar18 = _qmtc2(0.9 - (float)uVar13 * 2.3283064e-10 * 0.4);
    auVar20 = _vmulbc(auVar20,auVar18);
    auVar19 = _vadd(auVar19,auVar20);
    auVar18 = _lqc2(auVar23);
    DAT_00418590 = uVar14 * 0x10000 + ((int)uVar14 >> 0x10) + iVar8;
    DAT_00418594 = iVar8 + DAT_00418590;
    auVar20 = _qmtc2(0.9 - (float)uVar14 * 2.3283064e-10 * 0.4);
    auVar20 = _vmulbc(auVar18,auVar20);
    auVar18 = _vadd(auVar19,auVar20);
    auVar20 = _vmul(auVar18,auVar18);
    _lqc2(auStack_70);
    _vaddabc(auVar20,auVar20);
    auVar20 = _vmaddbc(auVar33,auVar20);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar20);
    uVar34 = _vwaitq();
    auVar20 = _vmulq(auVar18,uVar34);
    auVar23 = _vadd(in_vf0,auVar20);
    uVar4 = (ulong)DAT_00418590;
    *puVar15 = 1;
    auVar20 = _qmtc2(*(undefined4 *)(DAT_0040f4d0 + 0x1c));
    auVar18 = _lqc2(auVar17);
    auVar17 = _vmulbc(auVar26,auVar20);
    auVar17 = _vsub(auVar18,auVar17);
    auVar17 = _sqc2(auVar17);
    puVar15[4] = (int)uVar1;
    puVar15[5] = (int)((ulong)uVar1 >> 0x20);
    puVar15[6] = uVar9;
    puVar15[7] = uVar11;
    _vmove(auVar23);
    puVar15[8] = (int)uVar2;
    puVar15[9] = (int)((ulong)uVar2 >> 0x20);
    puVar15[10] = uVar6;
    puVar15[0xb] = uVar7;
    puVar15[0xc] = (int)uVar3;
    puVar15[0xd] = (int)((ulong)uVar3 >> 0x20);
    puVar15[0xe] = uVar10;
    puVar15[0xf] = uVar12;
    auVar20 = _qmtc2((float)uVar4 * 2.3283064e-10 * 400.0 + -800.0);
    auVar20 = _vmr32(auVar20);
    uStack_178 = auVar17._8_4_;
    uStack_174 = auVar17._12_4_;
    puVar15[0x10] = auVar17._0_4_;
    puVar15[0x11] = auVar17._4_4_;
    puVar15[0x12] = uStack_178;
    puVar15[0x13] = uStack_174;
    if (param_4 == 0) {
      auVar17 = _sqc2(auVar26);
      *(undefined1 (*) [16])(puVar15 + 0x14) = auVar17;
    }
    else {
      auVar17 = _qmtc2(0x3f000000);
      auVar17 = _vmulbc(auVar26,auVar17);
      auVar17 = _sqc2(auVar17);
      *(undefined1 (*) [16])(puVar15 + 0x14) = auVar17;
    }
    auVar17 = _sqc2(auVar20);
    *(undefined1 (*) [16])(puVar15 + 0x18) = auVar17;
    DAT_00418590 = DAT_00418590 * 0x10000 + ((int)DAT_00418590 >> 0x10) + DAT_00418594;
    DAT_00418594 = DAT_00418594 + DAT_00418590;
    uVar4 = (ulong)DAT_00418590;
    puVar15[0x1d] = param_2;
    puVar15[0x1c] = (float)uVar4 * 2.3283064e-10 * 10.0;
    *(undefined1 *)(puVar15 + 0x1e) = *(undefined1 *)(param_3 + 0x6d);
    puVar15[0x1f] = SUB124(*(undefined1 (*) [12])(param_2 + 0xa0),4);
  }
  return;
}


// ==== FUN_001b5ed8 @ 001b5ed8 ====

void FUN_001b5ed8(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_t0_udw;
  byte *pbVar10;
  
  iVar1 = *(int *)(param_2 + 0xd4);
  if (iVar1 == 0) {
    iVar1 = FUN_001b5fb0();
    in_v0_udw = extraout_v0_udw;
  }
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  uVar2 = (int)(*(byte *)(param_3 + 0x78) - 1) / 2 & 0xff;
  pbVar10 = (byte *)(iVar1 + 0xc13 + uVar2);
  pbVar6 = (byte *)(iVar1 + 0xc10 + uVar2);
  iVar5 = (uint)*pbVar10 * 0x20 + uVar2 * 0x400 + iVar1;
  *(undefined4 *)(iVar5 + 0x10) = *param_4;
  *(undefined4 *)(iVar5 + 0x14) = uVar7;
  *(undefined4 *)(iVar5 + 0x18) = uVar8;
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  *(undefined4 *)(iVar1 + (uint)*pbVar10 * 0x20 + uVar2 * 0x400 + 0x20) =
       *(undefined4 *)(param_3 + 0x70);
  *pbVar6 = *pbVar6 + 1;
  *pbVar10 = *pbVar10 + 1;
  auVar3._1_7_ = 0;
  auVar3[0] = *pbVar6;
  auVar3._8_8_ = in_v0_udw;
  auVar4._8_8_ = in_t0_udw;
  auVar4._0_8_ = 0x20;
  auVar4 = _pminw(auVar3,auVar4);
  auVar4 = _pextlw(0,auVar4._0_8_);
  *pbVar6 = auVar4[0];
  if (*pbVar10 == 0x20) {
    *pbVar10 = 0;
  }
  return;
}


// ==== FUN_001b5fb0 @ 001b5fb0 ====
// GLOBAL DAT_0040f4d0 int

int FUN_001b5fb0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar5 = 0;
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2;
    if (*(int *)(iVar3 + 0x730) == 0) {
      *(int *)(iVar3 + 0x730) = param_2;
      *(int *)(param_2 + 0xd4) = iVar3 + 0x730;
      return param_1 + iVar2 + 0x730;
    }
    uVar5 = uVar5 + 1 & 0xff;
    iVar2 = uVar5 * 0xc20;
  } while (uVar5 < 4);
  uVar4 = 0;
  auVar14 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar13 = _vaddbc(in_vf0,in_vf0);
  iVar2 = 0;
  fVar7 = 0.0;
  uVar5 = 0;
  do {
    iVar2 = *(int *)(iVar2 + param_1 + 0x730);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x60));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    _vmulabc(auVar12,auVar8);
    _vmaddabc(auVar10,auVar8);
    _vmaddabc(auVar9,auVar8);
    auVar8 = _vmaddbc(auVar11,in_vf0);
    auVar8 = _vsub(auVar8,auVar14);
    auVar8 = _vmul(auVar8,auVar8);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar13,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar1 = auVar8._0_4_;
    uVar6 = uVar4;
    if (fVar1 <= fVar7) {
      fVar1 = fVar7;
      uVar6 = uVar5;
    }
    uVar4 = uVar4 + 1 & 0xff;
    iVar2 = uVar4 * 0xc20;
    fVar7 = fVar1;
    uVar5 = uVar6;
  } while (uVar4 < 4);
  uVar5 = 0;
  iVar2 = param_1 + uVar6 * 0xc20;
  *(undefined4 *)(*(int *)(iVar2 + 0x730) + 0xd4) = 0;
  *(int *)(iVar2 + 0x730) = param_2;
  *(undefined1 *)(iVar2 + 0x734) = 0;
  *(int *)(param_2 + 0xd4) = iVar2 + 0x730;
  do {
    iVar2 = uVar5 + uVar6 * 0xc20;
    uVar5 = uVar5 + 1 & 0xff;
    *(undefined1 *)(param_1 + 0x1340 + iVar2) = 0;
    *(undefined1 *)(param_1 + 0x1343 + iVar2) = 0;
  } while (uVar5 < 3);
  return param_1 + uVar6 * 0xc20 + 0x730;
}


// ==== FUN_001b6108 @ 001b6108 ====
// GLOBAL DAT_004432a8 undefined4
// GLOBAL DAT_004432ac undefined4
// GLOBAL DAT_004432a0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6108(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  *param_2 = 0;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar5 = _vsub(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_2 + 4) = auVar4;
  param_2[0x14] = (int)uVar1;
  param_2[0x15] = (int)((ulong)uVar1 >> 0x20);
  param_2[0x16] = uVar2;
  param_2[0x17] = uVar3;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  param_2[0x1d] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  auVar4 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar4;
  auVar4 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_2 + 8) = auVar4;
  auVar4 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar4;
  auVar4._8_4_ = DAT_004432a8;
  auVar4._0_8_ = _DAT_004432a0;
  auVar4._12_4_ = DAT_004432ac;
  auVar4 = _lqc2(auVar4);
  _lqc2(*(undefined1 (*) [16])(param_2 + 0x18));
  auVar4 = _vadd(in_vf0,auVar4);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_2 + 0x18) = auVar4;
  auVar4 = _qmtc2(0);
  auVar4 = _vmr32(auVar4);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_2 + 0x18) = auVar4;
  return;
}


// ==== FUN_001b6188 @ 001b6188 ====

void FUN_001b6188(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0xc20;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined1 *)(iVar1 + param_1 + 0x734) = 0;
  } while (uVar2 < 4);
  return;
}


// ==== FUN_001b61c0 @ 001b61c0 ====

void FUN_001b61c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + param_1;
    if (param_2 == *(int *)(iVar1 + 0x730)) {
      *(undefined1 *)(iVar1 + 0x734) = 0;
      *(undefined4 *)(iVar1 + 0x730) = 0;
      uVar2 = 0;
      do {
        iVar1 = uVar2 + uVar3 * 0xc20;
        *(undefined1 *)(param_1 + 0x1340 + iVar1) = 0;
        uVar2 = uVar2 + 1 & 0xff;
        *(undefined1 *)(param_1 + 0x1343 + iVar1) = 0;
      } while (uVar2 < 3);
      return;
    }
    uVar3 = uVar3 + 1 & 0xff;
    iVar1 = uVar3 * 0xc20;
  } while (uVar3 < 4);
  return;
}


// ==== FUN_001b6250 @ 001b6250 ====

void FUN_001b6250(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x3450) = 0;
  *(undefined2 *)(param_1 + 0x3458) = 0;
  do {
    uVar4 = 0;
    iVar5 = uVar2 * 4;
    iVar6 = uVar2 * 0x70 + param_1;
    do {
      iVar3 = uVar4 * 4;
      uVar4 = uVar4 + 1 & 0xffff;
      *(undefined4 *)(iVar6 + iVar3) = 0;
    } while (uVar4 < 8);
    *(undefined4 *)(iVar6 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x2300 + iVar5) = 0;
    *(undefined4 *)(param_1 + 0x2440 + iVar5) = 8;
    uVar2 = uVar2 + 1 & 0xffff;
    *(undefined4 *)(param_1 + 0x2580 + iVar5) = 0xffffffff;
  } while (uVar2 < 0x50);
  uVar1 = FUN_00107d20(0xa0);
  *(undefined4 *)(param_1 + 0x3440) = uVar1;
  uVar1 = FUN_00107d20(0xa0);
  *(undefined2 *)(param_1 + 0x344a) = 0x50;
  *(undefined4 *)(param_1 + 0x3444) = uVar1;
  *(undefined2 *)(param_1 + 0x3448) = 0;
  return;
}


// ==== FUN_001b6328 @ 001b6328 ====
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_001b6328(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 + param_1 + 0x60) != 0) {
      FUN_001b1518(iVar1 + param_1);
      iVar1 = uVar2 * 4;
      *(undefined4 *)(param_1 + 0x2300 + iVar1) = 0;
      *(undefined4 *)(param_1 + 0x2440 + iVar1) = 8;
      *(undefined4 *)(param_1 + 0x2580 + iVar1) = 0xffffffff;
    }
    uVar2 = uVar2 + 1 & 0xffff;
    iVar1 = uVar2 * 0x70;
  } while (uVar2 < 0x50);
  *(undefined2 *)(param_1 + 0x3458) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 0xc;
    uVar2 = uVar2 + 1 & 0xffff;
    *(undefined4 *)(param_1 + 0x32c4 + iVar1) = 0;
    *(undefined4 *)(param_1 + 0x32c0 + iVar1) = 0;
    *(undefined4 *)(param_1 + 13000 + iVar1) = 0xbf800000;
  } while (uVar2 < 0x20);
  *(int *)(param_1 + 0x344c) = param_2;
  *(undefined4 *)(param_1 + 0x3450) = *(undefined4 *)(param_2 + 0x873f0);
  uVar2 = 0;
  if (*(short *)(param_1 + 0x344a) != 0) {
    iVar1 = *(int *)(param_1 + 0x3440);
    while( true ) {
      *(short *)(uVar2 * 2 + iVar1) = (short)uVar2;
      *(short *)(uVar2 * 2 + *(int *)(param_1 + 0x3444)) = (short)uVar2;
      uVar2 = uVar2 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x344a) <= uVar2) break;
      iVar1 = *(int *)(param_1 + 0x3440);
    }
  }
  *(undefined2 *)(param_1 + 0x3448) = 0;
  *(float *)(param_1 + 0x3454) = *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(DAT_0040f4d0 + 0x1c);
  return 1;
}


// ==== FUN_001b64c0 @ 001b64c0 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4e0 undefined4

void FUN_001b64c0(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  ushort *puVar15;
  undefined4 uVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  
  iVar12 = (int)param_1;
  uVar16 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  FUN_001b6dc8(*(undefined4 *)(iVar12 + 0x3454));
  FUN_001b7160(uVar16,param_1);
  sVar14 = *(short *)(iVar12 + 0x3448) + -1;
  puVar15 = *(ushort **)(iVar12 + 0x3440);
  if (sVar14 == -1) {
LAB_001b68d0:
    *(undefined4 *)(iVar12 + 0x3454) = uVar16;
    return;
  }
  uVar1 = *puVar15;
  do {
    uVar13 = (uint)uVar1;
    iVar5 = iVar12 + uVar13 * 4;
    iVar11 = *(int *)(iVar5 + 0x2300);
    if (iVar11 != 0) {
      iVar4 = *(int *)(iVar5 + 0x2440);
      if (iVar4 == 8) {
        if (*(int *)(iVar5 + 0x2580) == 0) {
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          auVar17 = _vsub(in_vf0,in_vf0);
          auVar18 = _vaddbc(in_vf0,in_vf0);
          auVar19 = _vaddbc(in_vf0,in_vf0);
          auVar20 = _vaddbc(in_vf0,in_vf0);
          _sqc2(auVar17);
          auStack_270 = _sqc2(auVar18);
          auStack_260 = _sqc2(auVar19);
          auStack_250 = _sqc2(auVar20);
          auStack_240 = *(undefined1 (*) [16])(iVar11 + 0xa0);
        }
        else if (*(int *)(iVar5 + 0x2580) == 1) {
          auStack_270 = *(undefined1 (*) [16])(iVar11 + 0x70);
          auStack_260 = *(undefined1 (*) [16])(iVar11 + 0x80);
          auStack_250 = *(undefined1 (*) [16])(iVar11 + 0x90);
          auStack_240 = *(undefined1 (*) [16])(iVar11 + 0xa0);
        }
        FUN_001b11a0(uVar13 * 0x70 + iVar12,auStack_270);
      }
      else {
        pauVar6 = (undefined1 (*) [16])FUN_001a68e0(*(undefined4 *)(iVar11 + 0x330),iVar4);
        auStack_270 = *pauVar6;
        auStack_260 = pauVar6[1];
        auStack_250 = pauVar6[2];
        auStack_240 = pauVar6[3];
        puVar9 = auStack_270;
        if (iVar4 == 0) {
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          _vsub(in_vf0,in_vf0);
          auVar20 = _vsub(in_vf0,in_vf0);
          auVar17 = _vaddbc(in_vf0,in_vf0);
          auVar18 = _vaddbc(in_vf0,in_vf0);
          auVar19 = _vaddbc(in_vf0,in_vf0);
          auStack_230 = _qmfc2(auVar17._0_4_);
          auStack_220 = _qmfc2(auVar18._0_4_);
          auStack_210 = _qmfc2(auVar19._0_4_);
          auStack_200 = _qmfc2(auVar20._0_4_);
          auStack_f0 = _sqc2(auVar17);
          auStack_e0 = _sqc2(auVar18);
          auStack_d0 = _sqc2(auVar19);
          auStack_c0 = _sqc2(auVar20);
          uVar7 = FUN_00136b30(iVar11);
          lVar8 = FUN_0015d2e8(DAT_0040f4e0,uVar7);
          if (lVar8 == 0) goto LAB_001b6828;
          iVar5 = FUN_0015d248(DAT_0040f4e0,uVar7,0);
          auVar20 = _lqc2(auStack_230);
          auVar17 = _lqc2(auStack_220);
          auVar19 = _lqc2(auStack_260);
          auVar21 = _lqc2(auStack_270);
          auVar18 = _lqc2(auStack_250);
          _vmulabc(auVar21,auVar20);
          _vmaddabc(auVar19,auVar20);
          auVar20 = _vmaddbc(auVar18,auVar20);
          _vmulabc(auVar21,auVar17);
          _vmaddabc(auVar19,auVar17);
          auVar25 = _vmaddbc(auVar18,auVar17);
          auVar22 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x80));
          auVar24 = _vmove(auVar20);
          auVar20 = _lqc2(auStack_210);
          auVar17 = _lqc2(auStack_240);
          _vmulabc(auVar21,auVar20);
          _vmaddabc(auVar19,auVar20);
          auVar20 = _vmaddbc(auVar18,auVar20);
          _vmulabc(auVar21,auVar22);
          _vmaddabc(auVar19,auVar22);
          _vmaddabc(auVar18,auVar22);
          auVar19 = _vmaddbc(auVar17,in_vf0);
          _sqc2(auVar22);
          auVar18 = _vmove(auVar20);
          auStack_130 = _sqc2(auVar24);
          auStack_120 = _sqc2(auVar25);
          auStack_110 = _sqc2(auVar18);
          auStack_100 = _sqc2(auVar19);
          auStack_170 = _sqc2(auVar24);
          auStack_160 = _sqc2(auVar25);
          auStack_150 = _sqc2(auVar18);
          auStack_140 = _sqc2(auVar19);
          auStack_1b0 = _sqc2(auVar24);
          auStack_1a0 = _sqc2(auVar25);
          auStack_190 = _sqc2(auVar18);
          auStack_180 = _sqc2(auVar19);
          auStack_230 = _sqc2(auVar24);
          auStack_220 = _sqc2(auVar25);
          auStack_210 = _sqc2(auVar18);
          auStack_200 = _sqc2(auVar19);
          auStack_1f0 = _sqc2(auVar24);
          auStack_1e0 = _sqc2(auVar25);
          auStack_1d0 = _sqc2(auVar18);
          auStack_1c0 = _sqc2(auVar19);
          auVar17 = _lqc2(auStack_f0);
          if (*(char *)(*(int *)(iVar11 + 0x2a4) + 0x108) != '\0') {
            auVar20 = _lqc2(auStack_e0);
            _vmulabc(auVar24,auVar17);
            _vmaddabc(auVar25,auVar17);
            auVar21 = _vmaddbc(auVar18,auVar17);
            _vmulabc(auVar24,auVar20);
            _vmaddabc(auVar25,auVar20);
            auVar22 = _vmaddbc(auVar18,auVar20);
            auStack_1f0 = _qmfc2(auVar17._0_4_);
            auStack_1e0 = _qmfc2(auVar20._0_4_);
            _lqc2(auStack_c0);
            auStack_1d0 = auStack_d0;
            auVar23 = _lqc2(auStack_d0);
            auVar17 = _qmtc2(*(undefined4 *)
                              (*(int *)(*(int *)(*(int *)(iVar11 + 0x2a4) + 0xe8) + 0x10) + 0x48));
            auVar20 = _vaddbc(in_vf0,auVar17);
            auStack_230 = _sqc2(auVar21);
            _vmulabc(auVar24,auVar23);
            _vmaddabc(auVar25,auVar23);
            auVar17 = _vmaddbc(auVar18,auVar23);
            _vmulabc(auVar24,auVar20);
            _vmaddabc(auVar25,auVar20);
            _vmaddabc(auVar18,auVar20);
            auVar18 = _vmaddbc(auVar19,in_vf0);
            auStack_220 = _sqc2(auVar22);
            auStack_210 = _sqc2(auVar17);
            auStack_200 = _sqc2(auVar18);
            auStack_1c0 = _sqc2(auVar20);
            auStack_170 = _sqc2(auVar21);
            auStack_160 = _sqc2(auVar22);
            auStack_150 = _sqc2(auVar17);
            auStack_140 = _sqc2(auVar18);
            auStack_1b0 = _sqc2(auVar21);
            auStack_1a0 = _sqc2(auVar22);
            auStack_190 = _sqc2(auVar17);
            auStack_180 = _sqc2(auVar18);
          }
          puVar9 = auStack_230;
        }
        FUN_001b11a0(uVar13 * 0x70 + iVar12,puVar9);
      }
    }
LAB_001b6828:
    iVar11 = uVar13 * 0x70 + iVar12;
    lVar8 = FUN_001b1340(uVar16,*(undefined4 *)(iVar12 + 0x3454),iVar11,
                         *(undefined4 *)(iVar12 + 0x344c));
    if (lVar8 == 0) {
      FUN_001b1518(iVar11);
      uVar10 = *(short *)(iVar12 + 0x3448) - 1;
      uVar2 = *(ushort *)(uVar13 * 2 + *(int *)(iVar12 + 0x3444));
      iVar11 = (uint)uVar10 * 2;
      uVar3 = *(ushort *)(iVar11 + *(int *)(iVar12 + 0x3440));
      *(ushort *)((uint)uVar2 * 2 + *(int *)(iVar12 + 0x3440)) = uVar3;
      *(ushort *)(uVar13 * 2 + *(int *)(iVar12 + 0x3444)) = uVar10;
      *(ushort *)(iVar11 + *(int *)(iVar12 + 0x3440)) = uVar1;
      *(ushort *)((uint)uVar3 * 2 + *(int *)(iVar12 + 0x3444)) = uVar2;
      *(short *)(iVar12 + 0x3448) = *(short *)(iVar12 + 0x3448) + -1;
    }
    else {
      puVar15 = puVar15 + 1;
    }
    sVar14 = sVar14 + -1;
    if (sVar14 == -1) goto LAB_001b68d0;
    uVar1 = *puVar15;
  } while( true );
}


// ==== FUN_001b6908 @ 001b6908 ====

void FUN_001b6908(void)

{
  return;
}


// ==== FUN_001b6910 @ 001b6910 ====

undefined4 FUN_001b6910(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(iVar1 + param_1 + 0x60) != 0) {
      FUN_001b1518(iVar1 + param_1);
      iVar1 = uVar2 * 4;
      *(undefined4 *)(param_1 + 0x2300 + iVar1) = 0;
      *(undefined4 *)(param_1 + 0x2440 + iVar1) = 8;
      *(undefined4 *)(param_1 + 0x2580 + iVar1) = 0xffffffff;
    }
    uVar2 = uVar2 + 1 & 0xffff;
    if (0x4f < uVar2) break;
    iVar1 = uVar2 * 0x70;
  }
  *(undefined2 *)(param_1 + 0x3448) = 0;
  *(undefined4 *)(param_1 + 0x3450) = 0;
  return 1;
}


// ==== FUN_001b69e0 @ 001b69e0 ====

void FUN_001b69e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  short *psVar12;
  undefined4 uVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  int iStack_bc;
  
  iVar11 = 0;
  psVar12 = (short *)0x0;
  iVar1 = FUN_00290ac0(param_2,0x28);
  iVar9 = (int)param_3;
  iVar8 = (int)param_1;
  if (iVar1 == 0x26) {
    uVar4 = FUN_002904f0(param_2,0x28);
    iVar2 = FUN_00290ac0(uVar4,0x28);
    iVar1 = *(int *)(iVar8 + 0x3450);
    if (iVar2 == 0x26) {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        plVar5 = *(long **)(iVar1 + 0xc);
        plVar6 = plVar5;
        do {
          if (*plVar6 == param_2) {
            psVar12 = *(short **)(plVar5 + 1);
            goto LAB_001b6ac4;
          }
          iVar2 = iVar2 + 1;
          plVar5 = plVar5 + 2;
          plVar6 = plVar6 + 2;
        } while (iVar2 < *(int *)(iVar1 + 8));
      }
      psVar12 = (short *)0x0;
LAB_001b6ac4:
      if (psVar12 == (short *)0x0) {
        return;
      }
      lVar10 = (long)*psVar12;
      goto LAB_001b6b34;
    }
  }
  else {
    iVar1 = *(int *)(iVar8 + 0x3450);
  }
  iVar11 = *(int *)(*(int *)(iVar1 + 8) + 8);
  iVar2 = 0;
  if (0 < iVar11) {
    plVar5 = *(long **)(*(int *)(iVar1 + 8) + 0xc);
    plVar6 = plVar5;
    do {
      iVar2 = iVar2 + 1;
      if (*plVar6 == param_2) {
        iVar11 = (int)plVar5[1];
        goto LAB_001b6b28;
      }
      plVar6 = plVar6 + 2;
      plVar5 = plVar5 + 2;
    } while (iVar2 < iVar11);
  }
  iVar11 = 0;
LAB_001b6b28:
  lVar10 = 1;
  if (iVar11 == 0) {
    return;
  }
LAB_001b6b34:
  uVar13 = 0;
  lVar7 = 0;
  if (0 < lVar10) {
    iVar1 = 0x10000;
    iStack_bc = iVar9;
    do {
      if (0x1f < *(ushort *)(iVar8 + 0x3458)) {
        return;
      }
      if (param_4 == 0) {
        auStack_d0 = *(undefined1 (*) [16])(iVar9 + 0xa0);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        auVar14 = _vaddbc(in_vf0,in_vf0);
        auVar15 = _vaddbc(in_vf0,in_vf0);
        auVar16 = _vaddbc(in_vf0,in_vf0);
        auStack_100 = _sqc2(auVar14);
        auStack_f0 = _sqc2(auVar15);
        auStack_e0 = _sqc2(auVar16);
      }
      else if (param_4 == 1) {
        auStack_100 = *(undefined1 (*) [16])(iVar9 + 0x70);
        auStack_f0 = *(undefined1 (*) [16])(iVar9 + 0x80);
        auStack_e0 = *(undefined1 (*) [16])(iVar9 + 0x90);
        auStack_d0 = *(undefined1 (*) [16])(iVar9 + 0xa0);
      }
      if (psVar12 != (short *)0x0) {
        uVar13 = *(undefined4 *)(psVar12 + (int)lVar7 * 2 + 0x12);
        iVar11 = *(int *)(psVar12 + (int)lVar7 * 2 + 2);
        if ((char)psVar12[1] != '\0') {
          uVar3 = FUN_001b72e0(param_1,param_3);
          iStack_bc = 0;
          auVar18 = _qmtc2(uVar3);
          auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x70));
          auVar16 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x80));
          auVar15 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x90));
          auVar14 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
          _vmulabc(auVar17,auVar18);
          _vmaddabc(auVar16,auVar18);
          _vmaddabc(auVar15,auVar18);
          auVar14 = _vmaddbc(auVar14,in_vf0);
          auStack_d0 = _sqc2(auVar14);
        }
      }
      lVar7 = (long)(iVar1 >> 0x10);
      iVar2 = (uint)*(ushort *)(iVar8 + 0x3458) * 0x60 + iVar8;
      *(int *)(iVar2 + 0x26c0) = auStack_100._0_4_;
      *(int *)(iVar2 + 0x26c4) = auStack_100._4_4_;
      *(undefined4 *)(iVar2 + 0x26c8) = auStack_100._8_4_;
      *(undefined4 *)(iVar2 + 0x26cc) = auStack_100._12_4_;
      iVar1 = iVar1 + 0x10000;
      *(undefined4 *)(iVar2 + 0x26d0) = auStack_f0._0_4_;
      *(undefined4 *)(iVar2 + 0x26d4) = auStack_f0._4_4_;
      *(undefined4 *)(iVar2 + 0x26d8) = auStack_f0._8_4_;
      *(undefined4 *)(iVar2 + 0x26dc) = auStack_f0._12_4_;
      *(undefined4 *)(iVar2 + 0x26f0) = auStack_d0._0_4_;
      *(undefined4 *)(iVar2 + 0x26f4) = auStack_d0._4_4_;
      *(undefined4 *)(iVar2 + 0x26f8) = auStack_d0._8_4_;
      *(undefined4 *)(iVar2 + 0x26fc) = auStack_d0._12_4_;
      *(undefined4 *)(iVar2 + 0x26e0) = auStack_e0._0_4_;
      *(undefined4 *)(iVar2 + 0x26e4) = auStack_e0._4_4_;
      *(undefined4 *)(iVar2 + 0x26e8) = auStack_e0._8_4_;
      *(undefined4 *)(iVar2 + 0x26ec) = auStack_e0._12_4_;
      *(int *)((uint)*(ushort *)(iVar8 + 0x3458) * 0x60 + iVar8 + 0x2704) = iStack_bc;
      *(int *)((uint)*(ushort *)(iVar8 + 0x3458) * 0x60 + iVar8 + 0x2700) = iVar11;
      *(int *)((uint)*(ushort *)(iVar8 + 0x3458) * 0x60 + iVar8 + 0x270c) = (int)param_4;
      *(undefined4 *)((uint)*(ushort *)(iVar8 + 0x3458) * 0x60 + iVar8 + 0x2708) = param_5;
      *(undefined4 *)((uint)*(ushort *)(iVar8 + 0x3458) * 0x60 + iVar8 + 10000) = uVar13;
      *(short *)(iVar8 + 0x3458) = *(short *)(iVar8 + 0x3458) + 1;
    } while (lVar7 < lVar10);
  }
  return;
}


// ==== FUN_001b6cf8 @ 001b6cf8 ====

void FUN_001b6cf8(int param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x2300 + iVar1) == param_2) {
      if ((param_3 != 0) && (*(int *)(uVar2 * 0x70 + param_1 + 0x60) != 0)) {
        FUN_001b15a0();
      }
      *(undefined4 *)(param_1 + 0x2300 + iVar1) = 0;
      *(undefined4 *)(param_1 + 0x2440 + iVar1) = 8;
    }
    uVar2 = uVar2 + 1 & 0xffff;
    if (0x4f < uVar2) break;
    iVar1 = uVar2 << 2;
  }
  return;
}


// ==== FUN_001b6dc8 @ 001b6dc8 ====
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f510 int

void FUN_001b6dc8(float param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  
  uVar13 = *(ushort *)(param_2 + 0x3458) - 1 & 0xffff;
  if (*(ushort *)(param_2 + 0x3458) != 0) {
    iVar11 = param_2 + uVar13 * 0x60 + 0x26c0;
    iVar4 = *(int *)(iVar11 + 0x40);
    if (*(short *)(param_2 + 0x344a) != *(short *)(param_2 + 0x3448)) {
      do {
        uVar3 = *(ushort *)(param_2 + 0x3448);
        *(ushort *)(param_2 + 0x3448) = uVar3 + 1;
        uVar3 = *(ushort *)((uint)uVar3 * 2 + *(int *)(param_2 + 0x3440));
        fVar14 = param_1 + *(float *)(iVar11 + 0x50);
        FUN_001b1168(fVar14,(uint)uVar3 * 0x70 + param_2,iVar11,iVar4,1);
        iVar9 = (uint)uVar3 * 4;
        *(undefined4 *)(param_2 + 0x2300 + iVar9) = *(undefined4 *)(iVar11 + 0x44);
        iVar9 = param_2 + iVar9;
        *(undefined4 *)(iVar9 + 0x2440) = *(undefined4 *)(iVar11 + 0x48);
        *(undefined4 *)(iVar9 + 0x2580) = *(undefined4 *)(iVar11 + 0x4c);
        if (*(long *)(iVar4 + 0x280) == 0) {
LAB_001b6f5c:
          cVar2 = *(char *)(iVar4 + 0x2a0);
        }
        else {
          uVar6 = FUN_00108120(DAT_0040f4c4);
          if (*(int *)(iVar11 + 0x48) != 8) {
            iVar9 = *(int *)(param_2 + 0x344c);
            uVar7 = FUN_001a68e0(*(undefined4 *)(*(int *)(iVar11 + 0x44) + 0x330));
            FUN_001be7f0(*(undefined4 *)(iVar4 + 0x290),*(undefined4 *)(iVar11 + 0x50),
                         *(undefined4 *)(iVar4 + 0x294),*(undefined4 *)(iVar4 + 0x298),
                         *(undefined4 *)(iVar4 + 0x29c),iVar9 + 0x83720,uVar6,uVar7);
            goto LAB_001b6f5c;
          }
          FUN_001be7f0(*(undefined4 *)(iVar4 + 0x290),
                       *(float *)(iVar11 + 0x50) + *(float *)(iVar4 + 0x288),
                       *(undefined4 *)(iVar4 + 0x294),*(undefined4 *)(iVar4 + 0x298),
                       *(undefined4 *)(iVar4 + 0x29c),*(int *)(param_2 + 0x344c) + 0x83720,uVar6,
                       iVar11);
          cVar2 = *(char *)(iVar4 + 0x2a0);
        }
        if (cVar2 != '\0') {
          FUN_001b0c10(*(undefined4 *)(iVar4 + 0x2a4),*(undefined4 *)(iVar4 + 0x2a8),
                       *(undefined4 *)(iVar11 + 0x50),DAT_0040f4c0 + 0xd290,
                       *(undefined8 *)(iVar4 + 0x2b0));
        }
        uVar12 = (uint)uVar3;
        if (*(char *)(iVar4 + 0x242) != '\0') {
          FUN_001beba0(*(undefined4 *)(iVar11 + 0x50),0x41200000,
                       *(int *)(param_2 + 0x344c) + 0x83d24,uVar12 * 0x70 + param_2,iVar4);
        }
        if (*(short *)(iVar4 + 0x240) != 9999) {
          uVar10 = 0;
          if (*(float *)(param_2 + 13000) != -1.0) {
            uVar5 = 1;
            do {
              uVar10 = uVar5 & 0xffff;
              if (0x1f < uVar10) goto LAB_001b7070;
              uVar5 = uVar10 + 1;
            } while (*(float *)(uVar10 * 0xc + param_2 + 13000) != -1.0);
          }
          if (uVar10 < 0x20) {
            piVar8 = (int *)(param_2 + uVar10 * 0xc + 0x32c0);
            piVar8[2] = (int)fVar14;
            *piVar8 = uVar12 * 0x70 + param_2;
            piVar8[1] = *(int *)(*(int *)(param_2 + 0x3450) + 0x20) +
                        (uint)*(ushort *)(iVar4 + 0x240) * 0x48;
          }
        }
LAB_001b7070:
        if ('\0' < *(char *)(iVar4 + 0x270)) {
          FUN_001ec158(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
                       *(char *)(iVar4 + 0x270),*(undefined8 *)(iVar11 + 0x30));
        }
        if (0.0 < *(float *)(iVar4 + 0x278)) {
          FUN_001ec060(*(float *)(iVar11 + 0x50) + *(float *)(iVar4 + 0x274),
                       *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
                       *(undefined8 *)(iVar11 + 0x30),1,
                       *(undefined4 *)(param_2 + 0x2300 + uVar12 * 4));
        }
        bVar1 = uVar13 == 0;
        uVar13 = uVar13 - 1 & 0xffff;
        if (bVar1) break;
        iVar11 = param_2 + uVar13 * 0x60 + 0x26c0;
        iVar4 = *(int *)(iVar11 + 0x40);
      } while (*(short *)(param_2 + 0x344a) != *(short *)(param_2 + 0x3448));
    }
  }
  *(undefined2 *)(param_2 + 0x3458) = 0;
  return;
}


// ==== FUN_001b7160 @ 001b7160 ====

void FUN_001b7160(float param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [8];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [96];
  
  uVar3 = 0;
  iVar2 = 0;
  while( true ) {
    puVar4 = (undefined4 *)(param_2 + iVar2 + 0x32c0);
    if (((float)puVar4[2] != -1.0) && ((float)puVar4[2] < param_1)) {
      FUN_001b1318(auStack_120,*puVar4);
      auVar6 = _lqc2(auStack_f0);
      _sqc2(auVar6);
      uStack_160 = auStack_120._0_4_;
      uStack_15c = auStack_120._4_4_;
      uStack_158 = uStack_118;
      uStack_154 = uStack_114;
      uStack_150 = (undefined4)uStack_110;
      uStack_14c = (undefined4)((ulong)uStack_110 >> 0x20);
      uStack_148 = uStack_108;
      uStack_144 = uStack_104;
      uStack_140 = (undefined4)uStack_100;
      uStack_13c = (undefined4)((ulong)uStack_100 >> 0x20);
      uStack_138 = uStack_f8;
      uStack_134 = uStack_f4;
      auVar5 = _qmtc2((int)((long *)puVar4[1])[2]);
      auVar5 = _vaddbc(auVar6,auVar5);
      auVar5 = _vaddbc(in_vf0,auVar5);
      auVar5 = _vmove(auVar5);
      auStack_130 = _sqc2(auVar5);
      if (*(long *)puVar4[1] == -0x64a2462599d2c4e8) {
        auVar5 = _qmfc2(auVar5._0_4_);
        FUN_001bef70(*(int *)(param_2 + 0x344c) + 0x83fb0,auVar5._0_8_);
        *puVar4 = 0;
      }
      else {
        iVar2 = 3;
        do {
          bVar1 = iVar2 != -1;
          iVar2 = iVar2 + -1;
        } while (bVar1);
        FUN_0014ebe0(auStack_e0,&uStack_160,puVar4[1]);
        *puVar4 = 0;
      }
      puVar4[2] = 0xbf800000;
      puVar4[1] = 0;
    }
    uVar3 = uVar3 + 1 & 0xffff;
    if (0x1f < uVar3) break;
    iVar2 = uVar3 * 0xc;
  }
  return;
}


// ==== FUN_001b72e0 @ 001b72e0 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_001b72e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if (*(int *)((int)param_2 + 0xc4) == 3) {
    FUN_00152bb0(param_2,auStack_f0,auStack_a0);
  }
  else {
    uVar2 = FUN_001484c8(param_2);
    iVar1 = FUN_0014a650(param_2,uVar2);
    if (iVar1 == 0) {
      return;
    }
    uVar7 = FUN_0014a568(param_2,uVar2);
    fVar8 = 0.0;
    fVar6 = (float)FUN_0012d0d0(0,uVar7,DAT_0040f4d0);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        if (fVar6 <= fVar8) break;
        iVar5 = iVar4 + 1;
        FUN_0014a6a0(param_2,uVar2,iVar4,auStack_f0,auStack_a0);
        auVar3 = _lqc2(auStack_a0);
        auVar10 = _qmtc2(0x41000000);
        auVar9 = _vmulbc(auVar3,auVar3);
        auVar9 = _vmulbc(auVar9,auVar3);
        auVar9 = _vmulbc(auVar9,auVar10);
        auVar9 = _qmfc2(auVar9._0_4_);
        fVar8 = fVar8 + auVar9._0_4_;
        iVar4 = iVar5;
      } while (iVar5 < iVar1);
    }
  }
  auVar9 = _lqc2(auStack_a0);
  auVar10 = _vsub(in_vf0,auVar9);
  auVar3 = _qmfc2(auVar9._0_4_);
  auVar9 = _qmfc2(auVar10._0_4_);
  uVar7 = FUN_0012d0d0(auVar9._0_4_,auVar3._0_4_,DAT_0040f4d0);
  auVar10 = _lqc2(auStack_a0);
  auVar9 = _qmtc2(uVar7);
  _lqc2(auStack_90);
  auVar3 = _vsub(in_vf0,auVar10);
  auVar11 = _vaddbc(in_vf0,auVar9);
  auVar9 = _sqc2(auVar3);
  auStack_90 = _sqc2(auVar11);
  auStack_b0._4_4_ = auVar9._4_4_;
  uVar7 = auStack_b0._4_4_;
  auStack_b0 = _sqc2(auVar10);
  uVar7 = FUN_0012d0d0(uVar7,auStack_b0._4_4_,DAT_0040f4d0);
  auVar10 = _lqc2(auStack_a0);
  auVar9 = _qmtc2(uVar7);
  _lqc2(auStack_90);
  auVar3 = _vsub(in_vf0,auVar10);
  auVar11 = _vaddbc(in_vf0,auVar9);
  auVar9 = _sqc2(auVar3);
  auStack_90 = _sqc2(auVar11);
  auStack_b0._8_4_ = auVar9._8_4_;
  uVar7 = auStack_b0._8_4_;
  auStack_b0 = _sqc2(auVar10);
  uVar7 = FUN_0012d0d0(uVar7,auStack_b0._8_4_,DAT_0040f4d0);
  auVar9 = _qmtc2(uVar7);
  _lqc2(auStack_90);
  auVar9 = _vaddbc(in_vf0,auVar9);
  auVar12 = _lqc2(auStack_f0);
  auVar9 = _sqc2(auVar9);
  auVar11 = _lqc2(auStack_e0);
  auVar10 = _lqc2(auStack_d0);
  auVar3 = _lqc2(auStack_c0);
  auVar9 = _lqc2(auVar9);
  _vmulabc(auVar12,auVar9);
  _vmaddabc(auVar11,auVar9);
  _vmaddabc(auVar10,auVar9);
  auVar9 = _vmaddbc(auVar3,in_vf0);
  _qmfc2(auVar9._0_4_);
  return;
}


// ==== FUN_001b74f0 @ 001b74f0 ====

void FUN_001b74f0(int param_1)

{
  short sVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  
  sVar1 = *(short *)(param_1 + 0x3448);
  puVar4 = *(ushort **)(param_1 + 0x3440);
  while (sVar1 = sVar1 + -1, sVar1 != -1) {
    iVar3 = (uint)*puVar4 * 0x70 + param_1;
    lVar2 = FUN_001b16a8(iVar3);
    if (lVar2 != 0) {
      FUN_001b15a0(iVar3);
    }
    puVar4 = puVar4 + 1;
  }
  return;
}


// ==== FUN_001b7590 @ 001b7590 ====

void FUN_001b7590(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x1a018) = 0;
  *(undefined4 *)(param_1 + 0x1a010) = 0;
  do {
    uVar4 = 0;
    iVar5 = uVar2 * 0x70 + param_1;
    do {
      iVar3 = uVar4 * 4;
      uVar4 = uVar4 + 1 & 0xffff;
      *(undefined4 *)(iVar5 + iVar3) = 0;
    } while (uVar4 < 8);
    uVar2 = uVar2 + 1 & 0xffff;
    *(undefined4 *)(iVar5 + 0x60) = 0;
  } while (uVar2 < 0x300);
  uVar1 = FUN_00107d20(0x600);
  *(undefined4 *)(param_1 + 0x1a000) = uVar1;
  uVar1 = FUN_00107d20(0x600);
  *(undefined2 *)(param_1 + 0x1a00a) = 0x300;
  *(undefined4 *)(param_1 + 0x1a004) = uVar1;
  *(undefined2 *)(param_1 + 0x1a008) = 0;
  return;
}


// ==== FUN_001b7640 @ 001b7640 ====
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_001b7640(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 + param_1 + 0x60) != 0) {
      FUN_001b1518(iVar1 + param_1);
    }
    uVar2 = uVar2 + 1 & 0xffff;
    iVar1 = uVar2 * 0x70;
  } while (uVar2 < 0x300);
  *(undefined2 *)(param_1 + 0x1a018) = 0;
  *(int *)(param_1 + 0x1a00c) = param_2;
  *(undefined4 *)(param_1 + 0x1a010) = *(undefined4 *)(param_2 + 0x873f0);
  uVar2 = 0;
  if (*(short *)(param_1 + 0x1a00a) != 0) {
    iVar1 = *(int *)(param_1 + 0x1a000);
    while( true ) {
      *(short *)(uVar2 * 2 + iVar1) = (short)uVar2;
      *(short *)(uVar2 * 2 + *(int *)(param_1 + 0x1a004)) = (short)uVar2;
      uVar2 = uVar2 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x1a00a) <= uVar2) break;
      iVar1 = *(int *)(param_1 + 0x1a000);
    }
  }
  *(undefined2 *)(param_1 + 0x1a008) = 0;
  *(float *)(param_1 + 0x1a014) = *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(DAT_0040f4d0 + 0x1c);
  return 1;
}


// ==== FUN_001b7758 @ 001b7758 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001b7758(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  short sVar9;
  ushort *puVar10;
  undefined4 uVar11;
  
  uVar11 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  FUN_001b7b80(*(undefined4 *)(param_1 + 0x1a014));
  piVar7 = (int *)(param_1 + 0x1a000);
  sVar9 = *(short *)(param_1 + 0x1a008) + -1;
  puVar10 = (ushort *)*piVar7;
  if (sVar9 != -1) {
    uVar1 = *puVar10;
    while( true ) {
      iVar8 = (uint)uVar1 * 0x70 + param_1;
      lVar4 = FUN_001b1340(uVar11,*(undefined4 *)(param_1 + 0x1a014),iVar8,
                           *(undefined4 *)(param_1 + 0x1a00c));
      if (lVar4 == 0) {
        FUN_001b1518(iVar8);
        iVar6 = (uint)uVar1 * 2;
        uVar5 = *(short *)(param_1 + 0x1a008) - 1;
        uVar2 = *(ushort *)(iVar6 + *(int *)(param_1 + 0x1a004));
        iVar8 = (uint)uVar5 * 2;
        uVar3 = *(ushort *)(iVar8 + *piVar7);
        *(ushort *)((uint)uVar2 * 2 + *piVar7) = uVar3;
        *(ushort *)(iVar6 + *(int *)(param_1 + 0x1a004)) = uVar5;
        *(ushort *)(iVar8 + *piVar7) = uVar1;
        *(ushort *)((uint)uVar3 * 2 + *(int *)(param_1 + 0x1a004)) = uVar2;
        *(short *)(param_1 + 0x1a008) = *(short *)(param_1 + 0x1a008) + -1;
      }
      else {
        puVar10 = puVar10 + 1;
      }
      sVar9 = sVar9 + -1;
      if (sVar9 == -1) break;
      uVar1 = *puVar10;
    }
  }
  *(undefined4 *)(param_1 + 0x1a014) = uVar11;
  return;
}


// ==== FUN_001b78d8 @ 001b78d8 ====

undefined4 FUN_001b78d8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 + param_1 + 0x60) != 0) {
      FUN_001b1518(iVar1 + param_1);
    }
    uVar2 = uVar2 + 1 & 0xffff;
    iVar1 = uVar2 * 0x70;
  } while (uVar2 < 0x300);
  *(undefined4 *)(param_1 + 0x1a010) = 0;
  *(undefined2 *)(param_1 + 0x1a008) = 0;
  return 1;
}


// ==== FUN_001b7968 @ 001b7968 ====

void FUN_001b7968(int param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  if ((param_3 < *(ushort *)(*(int *)(param_1 + 0x1a010) + 0x32)) &&
     (iVar1 = *(int *)((int)param_3 * 4 + *(int *)(*(int *)(param_1 + 0x1a010) + 0x18)), iVar1 != 0)
     ) {
    FUN_001b7a70(param_1,iVar1,param_2,1);
  }
  return;
}


// ==== FUN_001b79c0 @ 001b79c0 ====

void FUN_001b79c0(int param_1,undefined8 param_2,int param_3)

{
  FUN_001b7a70(param_1,*(undefined4 *)(param_3 * 4 + *(int *)(*(int *)(param_1 + 0x1a010) + 0x24)),
               param_2,0);
  return;
}


// ==== FUN_001b7a00 @ 001b7a00 ====

void FUN_001b7a00(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1a010) + 8);
    iVar2 = *(int *)(iVar1 + 8);
    iVar5 = 0;
    if (0 < iVar2) {
      plVar3 = *(long **)(iVar1 + 0xc);
      do {
        iVar5 = iVar5 + 1;
        if (*plVar3 == param_3) {
          uVar4 = (undefined4)plVar3[1];
          goto LAB_001b7a5c;
        }
        plVar3 = plVar3 + 2;
      } while (iVar5 < iVar2);
    }
    uVar4 = 0;
LAB_001b7a5c:
    FUN_001b7a70(param_1,uVar4,param_2);
  }
  return;
}


// ==== FUN_001b7a70 @ 001b7a70 ====

undefined4 FUN_001b7a70(int param_1,undefined4 param_2,undefined1 (*param_3) [16],long param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(short *)(param_1 + 0x1a018) == 0x100) {
    uVar1 = 0;
  }
  else {
    if (param_4 == 0) {
      uStack_8 = *(undefined4 *)(param_3[3] + 8);
      uStack_4 = *(undefined4 *)(param_3[3] + 0xc);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar3 = _vaddbc(in_vf0,in_vf0);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      auStack_40 = _sqc2(auVar3);
      auStack_30 = _sqc2(auVar4);
      auStack_20 = _sqc2(auVar5);
      uStack_10 = (undefined4)*(undefined8 *)param_3[3];
      uStack_c = (undefined4)((ulong)*(undefined8 *)param_3[3] >> 0x20);
    }
    else if (param_4 == 1) {
      uStack_8 = *(undefined4 *)(param_3[3] + 8);
      uStack_4 = *(undefined4 *)(param_3[3] + 0xc);
      auStack_40 = *param_3;
      auStack_30 = param_3[1];
      auStack_20 = param_3[2];
      uStack_10 = (undefined4)*(undefined8 *)param_3[3];
      uStack_c = (undefined4)((ulong)*(undefined8 *)param_3[3] >> 0x20);
    }
    uVar1 = 1;
    iVar2 = (uint)*(ushort *)(param_1 + 0x1a018) * 0x50 + param_1;
    *(undefined4 *)(iVar2 + 0x15000) = auStack_40._0_4_;
    *(undefined4 *)(iVar2 + 0x15004) = auStack_40._4_4_;
    *(undefined4 *)(iVar2 + 0x15008) = auStack_40._8_4_;
    *(undefined4 *)(iVar2 + 0x1500c) = auStack_40._12_4_;
    *(undefined4 *)(iVar2 + 0x15030) = uStack_10;
    *(undefined4 *)(iVar2 + 0x15034) = uStack_c;
    *(undefined4 *)(iVar2 + 0x15038) = uStack_8;
    *(undefined4 *)(iVar2 + 0x1503c) = uStack_4;
    *(undefined4 *)(iVar2 + 0x15010) = auStack_30._0_4_;
    *(undefined4 *)(iVar2 + 0x15014) = auStack_30._4_4_;
    *(undefined4 *)(iVar2 + 0x15018) = auStack_30._8_4_;
    *(undefined4 *)(iVar2 + 0x1501c) = auStack_30._12_4_;
    *(undefined4 *)(iVar2 + 0x15020) = auStack_20._0_4_;
    *(undefined4 *)(iVar2 + 0x15024) = auStack_20._4_4_;
    *(undefined4 *)(iVar2 + 0x15028) = auStack_20._8_4_;
    *(undefined4 *)(iVar2 + 0x1502c) = auStack_20._12_4_;
    *(undefined4 *)((uint)*(ushort *)(param_1 + 0x1a018) * 0x50 + param_1 + 0x15040) = param_2;
    *(short *)(param_1 + 0x1a018) = *(short *)(param_1 + 0x1a018) + 1;
  }
  return uVar1;
}


// ==== FUN_001b7b80 @ 001b7b80 ====
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f510 int

void FUN_001b7b80(undefined4 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_110 [96];
  
  uVar8 = (uint)*(ushort *)(param_2 + 0x1a018);
  while (bVar1 = uVar8 != 0, uVar8 = uVar8 - 1 & 0xffff, bVar1) {
    uVar3 = *(ushort *)(param_2 + 0x1a008);
    iVar6 = param_2 + uVar8 * 0x50 + 0x15000;
    iVar4 = *(int *)(iVar6 + 0x40);
    if (((uint)*(ushort *)(param_2 + 0x1a00a) - (uint)uVar3 & 0xffff) == 0) break;
    *(ushort *)(param_2 + 0x1a008) = uVar3 + 1;
    iVar7 = (uint)*(ushort *)((uint)uVar3 * 2 + *(int *)(param_2 + 0x1a000)) * 0x70 + param_2;
    FUN_001b1168(param_1,iVar7,iVar6,iVar4,0);
    if (*(long *)(iVar4 + 0x280) != 0) {
      uVar5 = FUN_00108120(DAT_0040f4c4);
      FUN_001be7f0(*(undefined4 *)(iVar4 + 0x290),0,*(undefined4 *)(iVar4 + 0x294),
                   *(undefined4 *)(iVar4 + 0x298),*(undefined4 *)(iVar4 + 0x29c),
                   *(int *)(param_2 + 0x1a00c) + 0x83720,uVar5,iVar6);
    }
    if (*(char *)(iVar4 + 0x2a0) != '\0') {
      FUN_001b0c10(*(undefined4 *)(iVar4 + 0x2a4),*(undefined4 *)(iVar4 + 0x2a8),0,
                   DAT_0040f4c0 + 0xd290,*(undefined8 *)(iVar4 + 0x2b0));
    }
    if (*(char *)(iVar4 + 0x242) != '\0') {
      FUN_001beba0(0,0x41200000,*(int *)(param_2 + 0x1a00c) + 0x83d24,iVar7,iVar4);
    }
    uVar3 = *(ushort *)(iVar4 + 0x240);
    if (uVar3 == 9999) {
LAB_001b7d70:
      cVar2 = *(char *)(iVar4 + 0x270);
    }
    else {
      if (*(long *)((uint)uVar3 * 0x48 + *(int *)(*(int *)(param_2 + 0x1a010) + 0x20)) !=
          -0x64a2462599d2c4e8) {
        iVar7 = 3;
        do {
          bVar1 = iVar7 != -1;
          iVar7 = iVar7 + -1;
        } while (bVar1);
        FUN_0014ebe0(auStack_110,iVar6,
                     *(int *)(*(int *)(param_2 + 0x1a010) + 0x20) + (uint)uVar3 * 0x48);
        goto LAB_001b7d70;
      }
      FUN_001bef70(*(int *)(param_2 + 0x1a00c) + 0x83fb0,*(undefined8 *)(iVar6 + 0x30));
      cVar2 = *(char *)(iVar4 + 0x270);
    }
    if ('\0' < cVar2) {
      FUN_001ec158(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),cVar2,
                   *(undefined8 *)(iVar6 + 0x30));
    }
    if (0.0 < *(float *)(iVar4 + 0x278)) {
      FUN_001ec060(*(undefined4 *)(iVar4 + 0x274),
                   *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
                   *(undefined8 *)(iVar6 + 0x30),0,0);
    }
  }
  *(undefined2 *)(param_2 + 0x1a018) = 0;
  return;
}


// ==== FUN_001b7e60 @ 001b7e60 ====

void FUN_001b7e60(int param_1)

{
  short sVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  
  sVar1 = *(short *)(param_1 + 0x1a008);
  puVar4 = *(ushort **)(param_1 + 0x1a000);
  while (sVar1 = sVar1 + -1, sVar1 != -1) {
    iVar3 = (uint)*puVar4 * 0x70 + param_1;
    lVar2 = FUN_001b16a8(iVar3);
    if (lVar2 != 0) {
      FUN_001b15a0(iVar3);
    }
    puVar4 = puVar4 + 1;
  }
  return;
}


// ==== FUN_001b7f08 @ 001b7f08 ====

void FUN_001b7f08(void)

{
  FUN_001b7f28();
  return;
}


// ==== FUN_001b7f28 @ 001b7f28 ====

void FUN_001b7f28(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x188);
  iVar1 = 7;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -0xe;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_001b7f50 @ 001b7f50 ====

void FUN_001b7f50(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0x70;
  piVar2 = param_1 + 1;
  while( true ) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (*param_1 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *param_1 = iVar1;
      param_1[1] = param_2;
      return;
    }
    if (*param_1 == iVar1) break;
    param_1 = param_1 + 0xe;
    piVar2 = piVar2 + 0xe;
    if ((int)piVar3 <= (int)param_1) {
      return;
    }
  }
  if (0xb < *(byte *)(param_1 + 0xd)) {
    return;
  }
  piVar2[*(byte *)(param_1 + 0xd)] = param_2;
  *(char *)(param_1 + 0xd) = (char)param_1[0xd] + '\x01';
  return;
}


// ==== FUN_001b7fc8 @ 001b7fc8 ====

void FUN_001b7fc8(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong in_hi;
  
  iVar11 = 0;
  iVar10 = *param_1;
  piVar2 = param_1;
  while( true ) {
    if (iVar10 == 0) {
      return;
    }
    bVar3 = false;
    iVar11 = iVar11 + 1;
    iVar10 = 0;
    if ((char)piVar2[0xd] != '\0') {
      iVar7 = 0;
      do {
        piVar1 = *(int **)((int)piVar2 + iVar7 + 4);
        iVar10 = iVar10 + 1;
        if ((*(ushort *)((int)piVar1 + 6) >> 1 & 1) != param_2) {
          if (bVar3) {
            sVar4 = (short)piVar1[1];
          }
          else {
            bVar3 = true;
            FUN_001c45c0();
            FUN_001c4148(*piVar2);
            sVar4 = (short)piVar1[1];
          }
          lVar9 = 0;
          if (0 < sVar4) {
            iVar7 = 0;
            do {
              iVar8 = (int)lVar9;
              lVar6 = (long)(iVar8 + 7);
              if (-1 < lVar9) {
                lVar6 = lVar9;
              }
              iVar5 = (int)lVar6 >> 3;
              if (((int)(uint)*(byte *)(piVar1[2] + iVar5) >> (iVar8 + iVar5 * -8 & 0x1fU) & 1U) ==
                  0) {
                sVar4 = (short)piVar1[1];
              }
              else {
                FUN_001c41d0(*piVar1 + iVar7);
                sVar4 = (short)piVar1[1];
              }
              lVar9 = (long)(iVar8 + 1);
              iVar7 = iVar7 + 0x70;
            } while (lVar9 < sVar4);
          }
        }
        iVar7 = iVar10 * 4;
      } while (iVar10 < (int)(uint)*(byte *)(piVar2 + 0xd));
    }
    if (7 < iVar11) break;
    lVar9 = ((long)(int)param_1 | in_hi) + (long)(iVar11 * 0x38);
    piVar2 = (int *)lVar9;
    in_hi = (ulong)(int)((ulong)lVar9 >> 0x20);
    iVar10 = *piVar2;
  }
  return;
}


// ==== FUN_001b8138 @ 001b8138 ====

void FUN_001b8138(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0x470);
  do {
    puVar1[-0xc] = 0;
    iVar3 = iVar3 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar3);
  puVar2 = param_1 + 0x440;
  *param_1 = 0;
  while( true ) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    param_1 = param_1 + 0x88;
    if ((int)puVar2 <= (int)param_1) break;
    *param_1 = 0;
  }
  return;
}


// ==== FUN_001b8180 @ 001b8180 ====

void FUN_001b8180(int param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  
  iVar4 = 0;
  piVar6 = (int *)(param_1 + 0x440);
  while( true ) {
    if (*piVar6 == 0) {
      lVar2 = FUN_001b82b0();
      if (lVar2 == 0) {
        return;
      }
      iVar4 = *(int *)(param_2 + 0xf0);
      pbVar5 = (byte *)lVar2;
      piVar6[0xc] = (int)pbVar5;
      *piVar6 = iVar4;
      *(int *)(pbVar5 + (uint)*pbVar5 * 4 + 4) = param_2;
      *pbVar5 = *pbVar5 + 1;
      return;
    }
    if (*piVar6 == *(int *)(param_2 + 0xf0)) break;
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    if (0xb < iVar4) {
      return;
    }
  }
  pbVar5 = (byte *)piVar6[0xc];
  if (*(int *)(pbVar5 + 0x84) == 0) {
    bVar1 = *pbVar5;
  }
  else {
    for (pbVar5 = *(byte **)(pbVar5 + 0x84); *(int *)(pbVar5 + 0x84) != 0;
        pbVar5 = *(byte **)(pbVar5 + 0x84)) {
    }
    bVar1 = *pbVar5;
  }
  if (bVar1 < 0x20) {
    *(int *)(pbVar5 + (uint)*pbVar5 * 4 + 4) = param_2;
    *pbVar5 = *pbVar5 + 1;
  }
  else {
    lVar2 = FUN_001b82b0();
    if (lVar2 != 0) {
      pbVar3 = (byte *)lVar2;
      *(byte **)(pbVar5 + 0x84) = pbVar3;
      *(int *)(pbVar3 + (uint)*pbVar3 * 4 + 4) = param_2;
      *pbVar3 = *pbVar3 + 1;
    }
  }
  return;
}


// ==== FUN_001b82b0 @ 001b82b0 ====

char * FUN_001b82b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1 + 0x440;
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return param_1;
    }
    param_1 = param_1 + 0x88;
    if ((int)pcVar2 <= (int)param_1) break;
    cVar1 = *param_1;
  }
  return (char *)0x0;
}


// ==== FUN_001b82e0 @ 001b82e0 ====

void FUN_001b82e0(int param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  byte *pbVar12;
  int iVar13;
  ulong in_hi;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [48];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b0;
  
  iVar6 = 2;
  do {
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  iVar6 = 2;
  do {
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  iVar6 = 1;
  do {
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  iVar6 = 1;
  do {
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  iVar7 = 0;
  iVar6 = 0;
  iStack_b0 = param_1;
  while( true ) {
    if (*(int *)(param_1 + 0x440 + iVar7) == 0) {
      return;
    }
    iVar13 = iVar6 + 1;
    lVar5 = ((long)iStack_b0 | in_hi) + (long)(iVar6 * 0x88);
    pbVar12 = (byte *)lVar5;
    in_hi = (ulong)(int)((ulong)lVar5 >> 0x20);
    bVar1 = false;
    if (pbVar12 != (byte *)0x0) break;
LAB_001b85ec:
    iVar7 = iVar13 * 4;
    iVar6 = iVar13;
    if (0xb < iVar13) {
      return;
    }
  }
  bVar3 = *pbVar12;
  do {
    iVar6 = 0;
    if (bVar3 != 0) {
      iVar9 = 0;
      do {
        pauVar4 = *(undefined1 (**) [16])(pbVar12 + iVar9 + 4);
        iVar6 = iVar6 + 1;
        if ((byte)pauVar4[0x10][0xd] == param_2) {
          if (bVar1) {
            cVar2 = pauVar4[0x10][0xc];
          }
          else {
            bVar1 = true;
            FUN_001c45c0();
            FUN_001c4148(*(undefined4 *)(param_1 + 0x440 + iVar7));
            cVar2 = pauVar4[0x10][0xc];
          }
          if (cVar2 == '\x04') {
            auVar18 = _lqc2(pauVar4[7]);
            auVar16 = _lqc2(pauVar4[8]);
            auVar15 = _lqc2(pauVar4[9]);
            auVar14 = _lqc2(pauVar4[10]);
            auVar17 = _lqc2(pauVar4[1]);
            _vmulabc(auVar18,auVar17);
            _vmaddabc(auVar16,auVar17);
            _vmaddabc(auVar15,auVar17);
            auVar14 = _vmaddbc(auVar14,in_vf0);
            _lqc2(auStack_180);
            auStack_170 = _sqc2(auVar14);
            auVar17 = _lqc2(pauVar4[8]);
            auVar15 = _lqc2(pauVar4[9]);
            auVar14 = _lqc2(pauVar4[10]);
            auVar18 = _lqc2(pauVar4[7]);
            auVar16 = _lqc2(pauVar4[2]);
            _vmulabc(auVar18,auVar16);
            _vmaddabc(auVar17,auVar16);
            _vmaddabc(auVar15,auVar16);
            auVar14 = _vmaddbc(auVar14,in_vf0);
            auStack_160 = _sqc2(auVar14);
            auVar16 = _lqc2(pauVar4[8]);
            auVar15 = _lqc2(pauVar4[9]);
            auVar14 = _lqc2(pauVar4[10]);
            auVar18 = _lqc2(pauVar4[7]);
            auVar17 = _lqc2(pauVar4[4]);
            _vmulabc(auVar18,auVar17);
            _vmaddabc(auVar16,auVar17);
            _vmaddabc(auVar15,auVar17);
            auVar14 = _vmaddbc(auVar14,in_vf0);
            auStack_150 = _sqc2(auVar14);
            auVar17 = _lqc2(pauVar4[8]);
            auVar15 = _lqc2(pauVar4[9]);
            auVar14 = _lqc2(pauVar4[10]);
            auVar16 = _lqc2(pauVar4[3]);
            auVar18 = _lqc2(pauVar4[7]);
            _vmulabc(auVar18,auVar16);
            _vmaddabc(auVar17,auVar16);
            _vmaddabc(auVar15,auVar16);
            auVar14 = _vmaddbc(auVar14,in_vf0);
            auStack_140 = _sqc2(auVar14);
            auVar17 = _lqc2(pauVar4[9]);
            auVar14 = _lqc2(pauVar4[8]);
            auVar15 = _lqc2(*pauVar4);
            auVar16 = _lqc2(pauVar4[7]);
            _vmulabc(auVar16,auVar15);
            _vmaddabc(auVar14,auVar15);
            auVar14 = _vmaddbc(auVar17,auVar15);
            auVar14 = _vadd(in_vf0,auVar14);
            auStack_180 = _sqc2(auVar14);
            uStack_130 = *(undefined8 *)pauVar4[5];
            uStack_128 = *(undefined8 *)(pauVar4[5] + 8);
            uStack_120 = *(undefined8 *)(pauVar4[6] + 8);
            uStack_118 = *(undefined8 *)pauVar4[6];
            FUN_001c41d0(auStack_180);
            uVar8 = (uint)*pbVar12;
          }
          else {
            if (cVar2 == '\x03') {
              pauVar11 = (undefined1 (*) [16])auStack_100;
              iVar9 = 2;
              pauVar10 = pauVar4;
              do {
                pauVar10 = pauVar10 + 1;
                auVar16 = _lqc2(*pauVar10);
                iVar9 = iVar9 + -1;
                auVar18 = _lqc2(pauVar4[7]);
                auVar17 = _lqc2(pauVar4[8]);
                auVar15 = _lqc2(pauVar4[9]);
                auVar14 = _lqc2(pauVar4[10]);
                _vmulabc(auVar18,auVar16);
                _vmaddabc(auVar17,auVar16);
                _vmaddabc(auVar15,auVar16);
                auVar14 = _vmaddbc(auVar14,in_vf0);
                auVar14 = _sqc2(auVar14);
                *pauVar11 = auVar14;
                pauVar11 = pauVar11 + 1;
              } while (-1 < iVar9);
              auVar17 = _lqc2(pauVar4[9]);
              auVar15 = _lqc2(*pauVar4);
              auVar16 = _lqc2(pauVar4[7]);
              auVar14 = _lqc2(pauVar4[8]);
              _vmulabc(auVar16,auVar15);
              _vmaddabc(auVar14,auVar15);
              auVar14 = _vmaddbc(auVar17,auVar15);
              auStack_110 = _sqc2(auVar14);
              uStack_d0 = *(undefined8 *)pauVar4[5];
              uStack_c8 = *(undefined8 *)(pauVar4[5] + 8);
              uStack_c0 = *(undefined8 *)pauVar4[6];
              FUN_001c43f0(auStack_110);
              goto LAB_001b85cc;
            }
            uVar8 = (uint)*pbVar12;
          }
        }
        else {
LAB_001b85cc:
          uVar8 = (uint)*pbVar12;
        }
        iVar9 = iVar6 * 4;
      } while (iVar6 < (int)uVar8);
    }
    pbVar12 = *(byte **)(pbVar12 + 0x84);
    if (pbVar12 == (byte *)0x0) goto LAB_001b85ec;
    bVar3 = *pbVar12;
  } while( true );
}


// ==== FUN_001b8630 @ 001b8630 ====

void FUN_001b8630(void)

{
  return;
}


// ==== FUN_001b8638 @ 001b8638 ====

undefined4 FUN_001b8638(void)

{
  return 1;
}


// ==== FUN_001b8640 @ 001b8640 ====

void FUN_001b8640(int *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar3 = *param_1;
  iVar7 = 0;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      if (*(byte *)((int)param_1 + iVar8 + 0x11e) == param_2) {
        iVar3 = iVar3 + -1;
        iVar9 = iVar7 + -1;
        *param_1 = iVar3;
        if (iVar7 != iVar3) {
          piVar5 = param_1 + iVar3 * 0x44 + 4;
          puVar2 = (undefined4 *)((int)param_1 + iVar8 + 0x10);
          do {
            puVar6 = puVar2;
            piVar4 = piVar5;
            uVar1 = *(undefined8 *)piVar4;
            iVar7 = piVar4[2];
            iVar8 = piVar4[3];
            iVar10 = piVar4[4];
            iVar11 = piVar4[5];
            iVar12 = piVar4[6];
            iVar13 = piVar4[7];
            *puVar6 = (int)uVar1;
            puVar6[1] = (int)((ulong)uVar1 >> 0x20);
            puVar6[2] = iVar7;
            puVar6[3] = iVar8;
            puVar6[4] = iVar10;
            puVar6[5] = iVar11;
            puVar6[6] = iVar12;
            puVar6[7] = iVar13;
            piVar5 = piVar4 + 8;
            puVar2 = puVar6 + 8;
          } while (piVar5 != param_1 + iVar3 * 0x44 + 0x44);
          uVar1 = *(undefined8 *)piVar5;
          iVar3 = piVar4[10];
          iVar7 = piVar4[0xb];
          puVar6[8] = (int)uVar1;
          puVar6[9] = (int)((ulong)uVar1 >> 0x20);
          puVar6[10] = iVar3;
          puVar6[0xb] = iVar7;
        }
        iVar3 = *param_1;
      }
      else {
        iVar3 = *param_1;
        iVar9 = iVar7;
      }
      iVar7 = iVar9 + 1;
      iVar8 = iVar7 * 0x110;
    } while (iVar7 < iVar3);
  }
  return;
}


// ==== FUN_001b86d0 @ 001b86d0 ====

void FUN_001b86d0(int param_1)

{
  FUN_001b7f28(param_1 + 0x11604);
  return;
}


// ==== FUN_001b86f8 @ 001b86f8 ====

void FUN_001b86f8(int param_1)

{
  FUN_001c3e10();
  FUN_001c4130(0);
  FUN_001b7fc8(param_1 + 0x11604,0);
  FUN_001b82e0(param_1 + 0x11164,0);
  FUN_001c45c0();
  FUN_001c4130(1);
  FUN_001b7fc8(param_1 + 0x11604,1);
  FUN_001b82e0(param_1 + 0x11164,1);
  FUN_001c45c0();
  FUN_001c45e0();
  return;
}


