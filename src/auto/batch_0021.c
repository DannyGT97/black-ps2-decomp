// ==== FUN_001f0958 @ 001f0958 ====

void FUN_001f0958(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 0x418) = 0x3f800000;
  uVar1 = FUN_00384858(DAT_0040f510);
  FUN_002860f0(param_1,uVar1,0x48ff50,0x48ff50);
  return;
}


// ==== FUN_001f09c0 @ 001f09c0 ====

void FUN_001f09c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3,
                 undefined1 (*param_4) [16])

{
  undefined1 in_zero_qw [16];
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
  
  auVar1 = _pextlw((long)param_3,(long)param_3);
  auVar1 = _pextlw(auVar1._0_8_,auVar1._0_8_);
  do {
    auVar2 = _pextlh(SUB168(*param_2,0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar3 = _pextlh(SUB168(*param_1,0),0);
    auVar3 = _psraw(auVar3,0x10);
    auVar2 = _paddw(auVar3,auVar2);
    auVar3 = _pextuh(*param_2,in_zero_qw);
    auVar3 = _psraw(auVar3,0x10);
    auVar3 = _pmulth(auVar3,auVar1);
    auVar3 = _psraw(auVar3,0xe);
    auVar4 = _pextuh(*param_1,in_zero_qw);
    auVar4 = _psraw(auVar4,0x10);
    auVar3 = _paddw(auVar4,auVar3);
    auVar3 = _ppach(auVar3,auVar2);
    auVar2 = _pextlh(SUB168(param_2[1],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar4 = _pextlh(SUB168(param_1[1],0),0);
    auVar4 = _psraw(auVar4,0x10);
    auVar2 = _paddw(auVar4,auVar2);
    auVar4 = _pextuh(param_2[1],in_zero_qw);
    auVar4 = _psraw(auVar4,0x10);
    auVar4 = _pmulth(auVar4,auVar1);
    auVar4 = _psraw(auVar4,0xe);
    auVar5 = _pextuh(param_1[1],in_zero_qw);
    auVar5 = _psraw(auVar5,0x10);
    auVar4 = _paddw(auVar5,auVar4);
    auVar4 = _ppach(auVar4,auVar2);
    auVar2 = _pextlh(SUB168(param_2[2],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar5 = _pextlh(SUB168(param_1[2],0),0);
    auVar5 = _psraw(auVar5,0x10);
    auVar2 = _paddw(auVar5,auVar2);
    auVar5 = _pextuh(param_2[2],in_zero_qw);
    auVar5 = _psraw(auVar5,0x10);
    auVar5 = _pmulth(auVar5,auVar1);
    auVar5 = _psraw(auVar5,0xe);
    auVar6 = _pextuh(param_1[2],in_zero_qw);
    auVar6 = _psraw(auVar6,0x10);
    auVar5 = _paddw(auVar6,auVar5);
    auVar5 = _ppach(auVar5,auVar2);
    auVar2 = _pextlh(SUB168(param_2[3],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar6 = _pextlh(SUB168(param_1[3],0),0);
    auVar6 = _psraw(auVar6,0x10);
    auVar2 = _paddw(auVar6,auVar2);
    auVar6 = _pextuh(param_2[3],in_zero_qw);
    auVar6 = _psraw(auVar6,0x10);
    auVar6 = _pmulth(auVar6,auVar1);
    auVar6 = _psraw(auVar6,0xe);
    auVar7 = _pextuh(param_1[3],in_zero_qw);
    auVar7 = _psraw(auVar7,0x10);
    auVar6 = _paddw(auVar7,auVar6);
    auVar6 = _ppach(auVar6,auVar2);
    auVar2 = _pextlh(SUB168(param_2[4],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar7 = _pextlh(SUB168(param_1[4],0),0);
    auVar7 = _psraw(auVar7,0x10);
    auVar2 = _paddw(auVar7,auVar2);
    auVar7 = _pextuh(param_2[4],in_zero_qw);
    auVar7 = _psraw(auVar7,0x10);
    auVar7 = _pmulth(auVar7,auVar1);
    auVar7 = _psraw(auVar7,0xe);
    auVar8 = _pextuh(param_1[4],in_zero_qw);
    auVar8 = _psraw(auVar8,0x10);
    auVar7 = _paddw(auVar8,auVar7);
    auVar7 = _ppach(auVar7,auVar2);
    auVar2 = _pextlh(SUB168(param_2[5],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar8 = _pextlh(SUB168(param_1[5],0),0);
    auVar8 = _psraw(auVar8,0x10);
    auVar2 = _paddw(auVar8,auVar2);
    auVar8 = _pextuh(param_2[5],in_zero_qw);
    auVar8 = _psraw(auVar8,0x10);
    auVar8 = _pmulth(auVar8,auVar1);
    auVar8 = _psraw(auVar8,0xe);
    auVar9 = _pextuh(param_1[5],in_zero_qw);
    auVar9 = _psraw(auVar9,0x10);
    auVar8 = _paddw(auVar9,auVar8);
    auVar8 = _ppach(auVar8,auVar2);
    auVar2 = _pextlh(SUB168(param_2[6],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar9 = _pextlh(SUB168(param_1[6],0),0);
    auVar9 = _psraw(auVar9,0x10);
    auVar2 = _paddw(auVar9,auVar2);
    auVar9 = _pextuh(param_2[6],in_zero_qw);
    auVar9 = _psraw(auVar9,0x10);
    auVar9 = _pmulth(auVar9,auVar1);
    auVar9 = _psraw(auVar9,0xe);
    auVar10 = _pextuh(param_1[6],in_zero_qw);
    auVar10 = _psraw(auVar10,0x10);
    auVar9 = _paddw(auVar10,auVar9);
    auVar10 = _ppach(auVar9,auVar2);
    auVar2 = _pextlh(SUB168(param_2[7],0),0);
    auVar2 = _psraw(auVar2,0x10);
    auVar2 = _pmulth(auVar2,auVar1);
    auVar2 = _psraw(auVar2,0xe);
    auVar9 = _pextlh(SUB168(param_1[7],0),0);
    auVar9 = _psraw(auVar9,0x10);
    auVar2 = _paddw(auVar9,auVar2);
    auVar9 = _pextuh(param_2[7],in_zero_qw);
    auVar9 = _psraw(auVar9,0x10);
    auVar9 = _pmulth(auVar9,auVar1);
    auVar9 = _psraw(auVar9,0xe);
    auVar11 = _pextuh(param_1[7],in_zero_qw);
    auVar11 = _psraw(auVar11,0x10);
    auVar9 = _paddw(auVar11,auVar9);
    auVar2 = _ppach(auVar9,auVar2);
    *(int *)*param_1 = auVar3._0_4_;
    *(int *)(*param_1 + 4) = auVar3._4_4_;
    *(int *)(*param_1 + 8) = auVar3._8_4_;
    *(int *)(*param_1 + 0xc) = auVar3._12_4_;
    *(int *)param_1[1] = auVar4._0_4_;
    *(int *)(param_1[1] + 4) = auVar4._4_4_;
    *(int *)(param_1[1] + 8) = auVar4._8_4_;
    *(int *)(param_1[1] + 0xc) = auVar4._12_4_;
    *(int *)param_1[2] = auVar5._0_4_;
    *(int *)(param_1[2] + 4) = auVar5._4_4_;
    *(int *)(param_1[2] + 8) = auVar5._8_4_;
    *(int *)(param_1[2] + 0xc) = auVar5._12_4_;
    *(int *)param_1[3] = auVar6._0_4_;
    *(int *)(param_1[3] + 4) = auVar6._4_4_;
    *(int *)(param_1[3] + 8) = auVar6._8_4_;
    *(int *)(param_1[3] + 0xc) = auVar6._12_4_;
    *(int *)param_1[4] = auVar7._0_4_;
    *(int *)(param_1[4] + 4) = auVar7._4_4_;
    *(int *)(param_1[4] + 8) = auVar7._8_4_;
    *(int *)(param_1[4] + 0xc) = auVar7._12_4_;
    *(int *)param_1[5] = auVar8._0_4_;
    *(int *)(param_1[5] + 4) = auVar8._4_4_;
    *(int *)(param_1[5] + 8) = auVar8._8_4_;
    *(int *)(param_1[5] + 0xc) = auVar8._12_4_;
    *(int *)param_1[6] = auVar10._0_4_;
    *(int *)(param_1[6] + 4) = auVar10._4_4_;
    *(int *)(param_1[6] + 8) = auVar10._8_4_;
    *(int *)(param_1[6] + 0xc) = auVar10._12_4_;
    *(int *)param_1[7] = auVar2._0_4_;
    *(int *)(param_1[7] + 4) = auVar2._4_4_;
    *(int *)(param_1[7] + 8) = auVar2._8_4_;
    *(int *)(param_1[7] + 0xc) = auVar2._12_4_;
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
  } while (param_2 != param_4);
  return;
}


// ==== FUN_001f0c98 @ 001f0c98 ====

void FUN_001f0c98(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_t1_lo;
  int *in_t3_lo;
  int iStack_2c;
  int iStack_28;
  int iStack_20;
  
  iVar4 = in_t1_lo + 0x200;
  iVar1 = in_t3_lo[6];
  if (cGpffff8240 != '\0') {
    memset(in_t1_lo,0,0x400);
    iVar2 = *in_t3_lo;
    while (iStack_28 = iVar2 + -1, -1 < iStack_28) {
      iVar3 = in_t3_lo[iVar2 + 6] + iVar1;
      iStack_20 = iVar1 + in_t3_lo[5];
      if (0x200 < iStack_20 - iVar3) {
        iStack_20 = iVar3 + 0x200;
      }
      if (iStack_28 == 0) {
        iStack_2c = in_t3_lo[1];
      }
      else {
        iStack_2c = in_t3_lo[2];
      }
      if (iVar3 < iStack_20) {
        FUN_001f09c0(in_t1_lo,iVar3,iStack_2c,iStack_20);
      }
      FUN_00285cc8(in_t1_lo,iVar4,0x48ff50);
      memcpy(in_t1_lo,iVar4,0x200);
      in_t3_lo[iVar2 + 6] = in_t3_lo[iVar2 + 6] + 0x200;
      iVar3 = iVar2 + 6;
      iVar2 = iStack_28;
      if (in_t3_lo[5] <= in_t3_lo[iVar3]) {
        *in_t3_lo = *in_t3_lo + -1;
      }
    }
    if ((char)in_t3_lo[9] != '\0') {
      FUN_001f09c0(in_t1_lo,in_t3_lo[4],in_t3_lo[3],in_t3_lo[4] + 0x200);
      FUN_001f09c0(iVar4,in_t3_lo[4],in_t3_lo[3],in_t3_lo[4] + 0x200);
    }
  }
  return;
}


// ==== FUN_001f0f28 @ 001f0f28 ====

void FUN_001f0f28(undefined8 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_2 == 1) {
    *(undefined1 *)(iVar1 + 0x41c) = 0;
    *(undefined1 *)(iVar1 + 500) = 0;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      *(undefined1 *)(iVar1 + 0x41c) = 0;
      *(undefined1 *)(iVar1 + 500) = 0;
    }
  }
  else if (param_2 == 2) {
    *(undefined1 *)(iVar1 + 0x41c) = 0;
    *(undefined1 *)(iVar1 + 500) = 1;
  }
  else if (param_2 == 3) {
    *(undefined1 *)(iVar1 + 0x41c) = 0;
    *(undefined1 *)(iVar1 + 500) = 0;
  }
  FUN_001d6230(param_1,param_2,param_3);
  return;
}


// ==== FUN_001f1018 @ 001f1018 ====

void FUN_001f1018(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_00384858(DAT_0040f510);
  uVar1 = FUN_003847e0(uVar1);
  iVar2 = (int)param_1;
  FUN_00286878(0x45bb8000,uVar1,iVar2 + 0x210,0x100,0);
  *(int *)(iVar2 + 0x1e0) = iVar2 + 0x210;
  FUN_001f07b8(0,param_1);
  return;
}


// ==== FUN_001f10b8 @ 001f10b8 ====

bool FUN_001f10b8(void)

{
  long lVar1;
  
  lVar1 = FUN_00324f98();
  return lVar1 != 0;
}


// ==== FUN_001f1110 @ 001f1110 ====

void FUN_001f1110(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    FUN_00384818(0x3fc90fdb,0xbe22f983,0x4b400000,0x42bb70);
    FUN_00384818(0xbe22f983,0x3f000000,0x3e800000,0x42bb80);
    FUN_00384818(0xc2992661,0xc2255de0,0x42a33457,0x42bb90);
    FUN_00384818(0x421ed7b7,0x40c90fda,0,0x42bba0);
  }
  return;
}


// ==== FUN_001f1220 @ 001f1220 ====

void FUN_001f1220(void)

{
  FUN_001f1110(1,0xffff);
  return;
}


// ==== FUN_001f1258 @ 001f1258 ====

void FUN_001f1258(undefined4 *param_1,char param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  uVar5 = FUN_00107cf8(0xec0);
  uVar2 = FUN_00384af8(uVar5);
  *param_1 = uVar2;
  iVar3 = FUN_00107cf8(0x2f0);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0a98;
  *(undefined **)(iVar3 + 0x44) = &DAT_003e0ae8;
  *(undefined **)(iVar3 + 0xf4) = &DAT_003e0ac0;
  iVar4 = 6;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  param_1[1] = iVar3;
  iVar3 = FUN_00107cf8(0x30);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0bb8;
  param_1[2] = iVar3;
  uVar5 = FUN_00107cf8(0x2b20);
  uVar2 = FUN_00384ba0(uVar5);
  param_1[3] = uVar2;
  iVar3 = FUN_00107cf8(0x30);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0b88;
  param_1[4] = iVar3;
  uVar5 = FUN_00107cf8(0x19b0);
  uVar2 = FUN_00384c00(uVar5);
  param_1[5] = uVar2;
  uVar5 = FUN_00107cf8(0x3c0);
  uVar2 = FUN_00384c38(uVar5);
  param_1[6] = uVar2;
  iVar3 = FUN_00107cf8(0xf0);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0a18;
  param_1[7] = iVar3;
  iVar3 = FUN_00107cf8(0x250);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e09f0;
  param_1[8] = iVar3;
  iVar3 = FUN_00107cf8(0x110);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0928;
  param_1[0xb] = iVar3;
  iVar3 = FUN_00107cf8(0x90);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0978;
  param_1[0xc] = iVar3;
  iVar3 = FUN_00107cf8(0xb0);
  *(undefined **)(iVar3 + 0x14) = &DAT_003e09c8;
  iVar4 = 0;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  param_1[0xd] = iVar3;
  uVar5 = FUN_00107cf8(0x250);
  uVar2 = FUN_00384c70(uVar5);
  param_1[0xe] = uVar2;
  iVar3 = FUN_00107cf8(0x170);
  uVar2 = *param_1;
  *(undefined **)(iVar3 + 0x14) = &DAT_003e0950;
  param_1[0xf] = iVar3;
  FUN_001f9eb0(uVar2);
  FUN_001fd230(param_1[1]);
  iVar3 = *(int *)(param_1[2] + 0x14);
  (**(code **)(iVar3 + 0x24))(param_1[2] + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(param_1[3] + 0x14);
  (**(code **)(iVar3 + 0x24))(param_1[3] + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(param_1[4] + 0x14);
  (**(code **)(iVar3 + 0x24))(param_1[4] + (int)*(short *)(iVar3 + 0x20));
  FUN_001f44c0(param_1[5]);
  FUN_002041d0(param_1[6]);
  FUN_001f2df8(param_1[7]);
  FUN_001f42a0(param_1[8]);
  FUN_00201518(param_1[0xb]);
  FUN_001fdbf8(param_1[0xc]);
  FUN_001f81d8(param_1[0xd]);
  FUN_001f85d0(param_1[0xe]);
  FUN_001fe000(param_1[0xf]);
  FUN_002789c0(param_1 + 0x10,0x22,0xff,0x13,(&PTR_DAT_003bdb90)[param_2],0x6080);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}


// ==== FUN_001f1530 @ 001f1530 ====

undefined4 FUN_001f1530(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_001f1a00();
  }
  FUN_00278ad0(param_1 + 0x40);
  *(ulong *)(iVar1 + 8) =
       CONCAT44((float)DAT_0040f4c0[1] * 0.0020833334,(float)*DAT_0040f4c0 * 0.0015625);
  *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x18) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 1;
}


// ==== FUN_001f1608 @ 001f1608 ====

void FUN_001f1608(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xa0);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    while( true ) {
      (**(code **)(iVar1 + 0x14))(param_1,iVar2 + *(short *)(iVar1 + 0x10));
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 0x14);
    }
  }
  return;
}


// ==== FUN_001f1660 @ 001f1660 ====

/* Strings referenciadas:
     "DODGE LEFT"
     "DODGE RIGHT" */

void FUN_001f1660(int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 == 3) {
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 == 3) {
      FUN_00275260(0x3f9510,&uStack_80,0x10);
      uVar5 = 0x41a00000;
      uVar4 = 0x43700000;
    }
    else if ((iVar2 < 4) || (iVar2 != 4)) {
      uVar5 = 0x43960000;
      FUN_00275260(0x3f9530,&uStack_80,0x10);
      uVar4 = 0x43be0000;
    }
    else {
      FUN_00275260(0x3f9520,&uStack_80,0x10);
      uVar5 = 0x43c80000;
      uVar4 = 0x43700000;
    }
    FUN_00266088();
    FUN_00268250(0);
    FUN_00275dc0(uVar5,uVar4,0x41f00000,*(undefined4 *)(DAT_0040f0e0 + 0x2107c),&uStack_80,
                 *(undefined8 *)(DAT_0040f518 + 0x180));
    FUN_002662a8();
    return;
  }
  if (iVar2 < 4) {
    if (iVar2 == 0) {
      FUN_0020ba98(DAT_0040f544,1,0);
      FUN_0020ba98(DAT_0040f544,2,0);
      FUN_0020ba98(DAT_0040f544,6,0);
      return;
    }
  }
  else {
    if (iVar2 == 5) {
      FUN_0020ba98(DAT_0040f544,1,0);
      FUN_0020ba98(DAT_0040f544,2,0);
      FUN_0020ba98(DAT_0040f544,6,0);
      lVar3 = FUN_00103870(DAT_0040f0e0);
      if (((lVar3 != 0) &&
          (iVar2 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 4), iVar2 != DAT_0040f0e0 + 0x2103c))
         && (iVar2 != DAT_0040f0e0 + 0x2104c)) {
        return;
      }
      uStack_80 = 0;
      uStack_7c = 0;
      iVar2 = 2;
      do {
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + -1;
      } while (bVar1);
      fStack_6c = (float)DAT_0040f4c0[1];
      fStack_70 = (float)*DAT_0040f4c0;
      uStack_60 = 0;
      uStack_58 = CONCAT44(fStack_6c / 6.0,fStack_70);
      lStack_50 = (ulong)(uint)(fStack_6c - fStack_6c / 6.0) << 0x20;
      uStack_48 = CONCAT44(fStack_6c,fStack_70);
      FUN_00266088();
      FUN_00266f50(*(undefined8 *)(DAT_0040f518 + 400),&uStack_80,2,&uStack_60);
      FUN_002662a8();
      return;
    }
    if (iVar2 == 6) {
      FUN_0020ba98(DAT_0040f544,1,0);
      FUN_0020ba98(DAT_0040f544,2,0);
      FUN_0020ba98(DAT_0040f544,6,0);
      FUN_001f2838(DAT_0040f51c,0,1);
      return;
    }
  }
  FUN_0020ba98(DAT_0040f544,1,1);
  FUN_0020ba98(DAT_0040f544,2,1);
  FUN_0020ba98(DAT_0040f544,6,1);
  FUN_00278ea0(param_1 + 0x40);
  return;
}


// ==== FUN_001f19d0 @ 001f19d0 ====

undefined4 FUN_001f19d0(undefined8 param_1)

{
  FUN_001f1a00();
  FUN_001f1a70(param_1);
  return 1;
}


// ==== FUN_001f1a00 @ 001f1a00 ====

void FUN_001f1a00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x1000000;
  do {
    iVar1 = iVar2 * 0x10;
    iVar2 = iVar3 >> 0x18;
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x6c) + 0xc) = 0;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar2 < 0x22);
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00276258();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}


// ==== FUN_001f1a70 @ 001f1a70 ====

void FUN_001f1a70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xa0);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar1 = *(int *)(iVar3 + 4);
      (**(code **)(iVar2 + 0x1c))(iVar3 + *(short *)(iVar2 + 0x18));
      *(undefined4 *)(iVar3 + 4) = 0;
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x14);
      iVar3 = iVar1;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}


// ==== FUN_001f1ad8 @ 001f1ad8 ====

undefined8 FUN_001f1ad8(undefined8 param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1;
  if (param_3 == 9) {
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)((int)puVar1 + 4) = 0;
  }
  else {
    *puVar1 = CONCAT44(*(float *)(param_2 + 0x7c) +
                       (*(float *)(param_2 + 0x84) - *(float *)(param_2 + 0x7c)) *
                       (float)(&DAT_0042bbfc)[(int)param_3 * 2],
                       *(float *)(param_2 + 0x78) +
                       (*(float *)(param_2 + 0x80) - *(float *)(param_2 + 0x78)) *
                       (float)(&DAT_0042bbf8)[(int)param_3 * 2]);
  }
  return param_1;
}


// ==== FUN_001f1b98 @ 001f1b98 ====

void FUN_001f1b98(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  if (piVar6 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    while( true ) {
      if ((piVar6[2] & (uint)(byte)(&DAT_003f9f08)[iVar1]) == 0) {
        iVar1 = *piVar6;
        uVar2 = *(undefined4 *)(DAT_0040f518 + 0x170);
        uVar3 = *(undefined4 *)(DAT_0040f518 + 0x174);
        uVar4 = *(undefined4 *)(DAT_0040f518 + 0x178);
        uVar5 = *(undefined4 *)(DAT_0040f518 + 0x17c);
      }
      else {
        iVar1 = *piVar6;
        uVar2 = *(undefined4 *)(DAT_0040f518 + 0x180);
        uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
        uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
        uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
      }
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      *(undefined4 *)(iVar1 + 0x14) = uVar3;
      *(undefined4 *)(iVar1 + 0x18) = uVar4;
      *(undefined4 *)(iVar1 + 0x1c) = uVar5;
      piVar6 = (int *)piVar6[1];
      if (piVar6 == (int *)0x0) break;
      iVar1 = *(int *)(param_1 + 0x8c);
    }
  }
  return;
}


// ==== FUN_001f1c00 @ 001f1c00 ====

void FUN_001f1c00(void)

{
  return;
}


// ==== FUN_001f1c08 @ 001f1c08 ====

void FUN_001f1c08(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_001f1c10 @ 001f1c10 ====

undefined4
FUN_001f1c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined1 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar4 = (undefined4 *)param_1;
  puVar4[2] = param_7;
  puVar4[3] = param_6;
  *(undefined1 *)((int)puVar4 + 0x12) = param_5;
  FUN_001f2740(DAT_0040f518,param_1,param_5,param_2,param_3,param_4 + 1);
  FUN_001f1ad8(auStack_60,DAT_0040f518 + *(char *)((int)puVar4 + 0x12) * 0xa8,puVar4[3]);
  if ((*(int *)(DAT_0040f0e0 + 0x20150) == 1) && ((float)(&DAT_0042bbfc)[puVar4[3] * 2] == 0.5)) {
    uVar3 = *(undefined8 *)(DAT_0040f518 + 0x180);
    puVar2 = &DAT_0042bc48;
  }
  else {
    puVar2 = &uStack_50;
    uStack_50 = 0x3f800000;
    uStack_4c = 0x3f800000;
    uVar3 = *(undefined8 *)(DAT_0040f518 + 0x180);
  }
  uVar1 = FUN_002761e8(*(undefined4 *)(*(char *)((int)puVar4 + 0x12) * 0xa8 + DAT_0040f518 + 0x54),
                       auStack_60,puVar2,uVar3);
  *puVar4 = uVar1;
  return 1;
}


// ==== FUN_001f1d48 @ 001f1d48 ====

void FUN_001f1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0027c278(param_2);
  FUN_00209f38(DAT_0040f544 + 0x13a8,uVar1,param_3);
  return;
}


// ==== FUN_001f1db0 @ 001f1db0 ====

void FUN_001f1db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0027c278(param_2);
  FUN_001f1df8(param_1,uVar1,param_3);
  return;
}


// ==== FUN_001f1df8 @ 001f1df8 ====

void FUN_001f1df8(void)

{
  FUN_00209ec8(DAT_0040f544 + 0x1c6c);
  return;
}


// ==== FUN_001f1e20 @ 001f1e20 ====

void FUN_001f1e20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0027c278(param_2);
  FUN_001f1e90(param_1,uVar1);
  return;
}


// ==== FUN_001f1e58 @ 001f1e58 ====

void FUN_001f1e58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0027c278(param_2);
  FUN_001f1eb8(param_1,uVar1);
  return;
}


// ==== FUN_001f1e90 @ 001f1e90 ====

void FUN_001f1e90(void)

{
  FUN_00209ff8(DAT_0040f544 + 0x13a8);
  return;
}


// ==== FUN_001f1eb8 @ 001f1eb8 ====

void FUN_001f1eb8(void)

{
  FUN_00209ff8(DAT_0040f544 + 0x1c6c);
  return;
}


// ==== FUN_001f1ee0 @ 001f1ee0 ====

void FUN_001f1ee0(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_001f1c10();
  return;
}


// ==== FUN_001f1f08 @ 001f1f08 ====

void FUN_001f1f08(float param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_40;
  undefined8 uStack_30;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (1.5258789e-05 < (float)param_2[0x18]) {
    param_1 = (float)param_2[0x18] - param_1;
    fVar3 = (float)param_2[0x10];
    param_2[0x18] = (int)param_1;
    fVar2 = 1.0 - param_1 / (float)param_2[0x19];
    if (((uint)(fVar3 - (float)param_2[0x12]) & 0x7f800000) < 0x37800001 &&
        ((uint)((float)param_2[0x11] - (float)param_2[0x13]) & 0x7f800000) < 0x37800001) {
      uStack_40 = *(undefined8 *)(param_2 + 0x10);
    }
    else {
      uStack_40 = CONCAT44(((float)param_2[0x13] - (float)param_2[0x11]) * fVar2 +
                           (float)param_2[0x11],((float)param_2[0x12] - fVar3) * fVar2 + fVar3);
    }
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_2 + 8));
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xc));
    auVar5 = _vsub(auVar5,auVar4);
    auVar4 = _qmfc2(auVar5._0_4_);
    bVar1 = true;
    if ((auVar4._0_4_ & 0x7f800000) < 0x37800001) {
      auVar4 = _sqc2(auVar5);
      uStack_1c = auVar4._4_4_;
      bVar1 = true;
      if ((uStack_1c & 0x7f800000) < 0x37800001) {
        auVar4 = _sqc2(auVar5);
        uStack_18 = auVar4._8_4_;
        bVar1 = true;
        if ((uStack_18 & 0x7f800000) < 0x37800001) {
          auVar4 = _sqc2(auVar5);
          uStack_14 = auVar4._12_4_;
          bVar1 = 0x37800000 < (uStack_14 & 0x7f800000);
        }
      }
    }
    if (bVar1) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 8));
      auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xc));
      auVar5 = _qmtc2(fVar2);
      auVar4 = _vsub(auVar4,auVar6);
      auVar4 = _vmulbc(auVar4,auVar5);
      auVar4 = _vadd(auVar4,auVar6);
    }
    else {
      auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 8));
    }
    fVar3 = (float)param_2[0x14];
    if (((uint)(fVar3 - (float)param_2[0x16]) & 0x7f800000) < 0x37800001 &&
        ((uint)((float)param_2[0x15] - (float)param_2[0x17]) & 0x7f800000) < 0x37800001) {
      uStack_30 = *(undefined8 *)(param_2 + 0x14);
    }
    else {
      uStack_30 = CONCAT44(((float)param_2[0x17] - (float)param_2[0x15]) * fVar2 +
                           (float)param_2[0x15],((float)param_2[0x16] - fVar3) * fVar2 + fVar3);
    }
    *(undefined8 *)*param_2 = uStack_40;
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(*param_2 + 0x10) = auVar4;
    *(undefined8 *)(*param_2 + 8) = uStack_30;
  }
  return;
}


// ==== FUN_001f21e8 @ 001f21e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f21e8(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0x23c) = 0;
  uVar3 = DAT_0042bcac;
  uVar2 = DAT_0042bca8;
  uVar1 = _DAT_0042bca0;
  *(int *)(param_1 + 0x150) = (int)_DAT_0042bca0;
  *(int *)(param_1 + 0x154) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  uVar3 = DAT_0042bcbc;
  uVar2 = DAT_0042bcb8;
  uVar1 = _DAT_0042bcb0;
  *(int *)(param_1 + 0x160) = (int)_DAT_0042bcb0;
  *(int *)(param_1 + 0x164) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  *(undefined4 *)(param_1 + 0x16c) = uVar3;
  uVar3 = DAT_0042bccc;
  uVar2 = DAT_0042bcc8;
  uVar1 = _DAT_0042bcc0;
  *(int *)(param_1 + 0x170) = (int)_DAT_0042bcc0;
  *(int *)(param_1 + 0x174) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  uVar3 = DAT_0042bcdc;
  uVar2 = DAT_0042bcd8;
  uVar1 = _DAT_0042bcd0;
  iVar4 = 0;
  *(int *)(param_1 + 0x180) = (int)_DAT_0042bcd0;
  *(int *)(param_1 + 0x184) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  uVar3 = DAT_0042bcec;
  uVar2 = DAT_0042bce8;
  uVar1 = _DAT_0042bce0;
  iVar6 = 0x1000000;
  *(int *)(param_1 + 400) = (int)_DAT_0042bce0;
  *(int *)(param_1 + 0x194) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  *(undefined4 *)(param_1 + 0x19c) = uVar3;
  uVar3 = DAT_0042bcfc;
  uVar2 = DAT_0042bcf8;
  uVar1 = _DAT_0042bcf0;
  *(int *)(param_1 + 0x1a0) = (int)_DAT_0042bcf0;
  *(int *)(param_1 + 0x1a4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  uVar3 = DAT_0042bd0c;
  uVar2 = DAT_0042bd08;
  uVar1 = _DAT_0042bd00;
  *(int *)(param_1 + 0x1b0) = (int)_DAT_0042bd00;
  *(int *)(param_1 + 0x1b4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  uVar3 = DAT_0042bd1c;
  uVar2 = DAT_0042bd18;
  uVar1 = _DAT_0042bd10;
  *(int *)(param_1 + 0x1c0) = (int)_DAT_0042bd10;
  *(int *)(param_1 + 0x1c4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1c8) = uVar2;
  *(undefined4 *)(param_1 + 0x1cc) = uVar3;
  uVar3 = DAT_0042bd2c;
  uVar2 = DAT_0042bd28;
  uVar1 = _DAT_0042bd20;
  *(int *)(param_1 + 0x1d0) = (int)_DAT_0042bd20;
  *(int *)(param_1 + 0x1d4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  *(undefined4 *)(param_1 + 0x1dc) = uVar3;
  uVar3 = DAT_0042bd3c;
  uVar2 = DAT_0042bd38;
  uVar1 = _DAT_0042bd30;
  *(int *)(param_1 + 0x1e0) = (int)_DAT_0042bd30;
  *(int *)(param_1 + 0x1e4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  uVar3 = DAT_0042bd5c;
  uVar2 = DAT_0042bd58;
  uVar1 = _DAT_0042bd50;
  *(int *)(param_1 + 0x1f0) = (int)_DAT_0042bd50;
  *(int *)(param_1 + 500) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1f8) = uVar2;
  *(undefined4 *)(param_1 + 0x1fc) = uVar3;
  uVar3 = DAT_0042bd7c;
  uVar2 = DAT_0042bd78;
  uVar1 = _DAT_0042bd70;
  *(int *)(param_1 + 0x210) = (int)_DAT_0042bd70;
  *(int *)(param_1 + 0x214) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  uVar3 = DAT_0042bd4c;
  uVar2 = DAT_0042bd48;
  uVar1 = _DAT_0042bd40;
  *(int *)(param_1 + 0x200) = (int)_DAT_0042bd40;
  *(int *)(param_1 + 0x204) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  *(undefined4 *)(param_1 + 0x20c) = uVar3;
  uVar3 = DAT_0042bd6c;
  uVar2 = DAT_0042bd68;
  uVar1 = _DAT_0042bd60;
  *(int *)(param_1 + 0x220) = (int)_DAT_0042bd60;
  *(int *)(param_1 + 0x224) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  iVar5 = param_1;
  do {
    FUN_001f1258(iVar5,iVar4);
    iVar5 = iVar5 + 0xa8;
    iVar4 = iVar6 >> 0x18;
    iVar6 = iVar6 + 0x1000000;
  } while (iVar4 < 2);
  *(undefined4 *)(param_1 + 0x238) = 1;
  return;
}


// ==== FUN_001f2340 @ 001f2340 ====

/* Strings referenciadas:
     "HUD8Bit"
     "HUD4Bit" */

undefined4 FUN_001f2340(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1[0x8e] == 0x1c) {
    iVar5 = 0x1000000;
    puVar4 = param_1;
    do {
      FUN_001f1a70(puVar4);
      puVar4 = puVar4 + 0x2a;
      iVar2 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
    } while (iVar2 < 1);
  }
  uVar1 = FUN_00108328(DAT_0040f4c4,PTR_s_HUD8Bit_003bdb98);
  param_1[0x8c] = uVar1;
  uVar1 = FUN_00108328(DAT_0040f4c4,PTR_s_HUD4Bit_003bdb9c);
  param_1[0x8d] = uVar1;
  if ('\0' < *(char *)(param_1 + 0x8f)) {
    iVar5 = 0x1000000;
    puVar4 = param_1;
    do {
      FUN_001f1530(puVar4);
      puVar4 = puVar4 + 0x2a;
      iVar2 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
    } while ((long)iVar2 < (long)*(char *)(param_1 + 0x8f));
  }
  lVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x8f)) {
    iVar5 = 0x1000000;
    puVar4 = param_1;
    do {
      FUN_001f9ef8(*puVar4,lVar3,2,1);
      FUN_001fd298(puVar4[1],lVar3,8,1);
      FUN_001f3948(puVar4[2],lVar3,0,1);
      FUN_001f59e8(puVar4[3],lVar3,1,5);
      FUN_001f7bd8(puVar4[4],lVar3,0,1);
      FUN_001f44f0(puVar4[5],lVar3,1,5);
      FUN_002041f8(puVar4[6],lVar3,5,1);
      FUN_001f2ea8(puVar4[7],lVar3,1,1);
      FUN_001f42c8(puVar4[8],lVar3,5,1);
      FUN_001fdc48(puVar4[0xc],lVar3,2,1);
      FUN_001f8208(puVar4[0xd],lVar3,4,1);
      FUN_001f8608(puVar4[0xe],lVar3,1,1);
      FUN_001fe068(puVar4[0xf],lVar3,0,1);
      FUN_00201548(puVar4[0xb],lVar3,0,1);
      puVar4 = puVar4 + 0x2a;
      lVar3 = (long)(iVar5 >> 0x18);
      iVar5 = iVar5 + 0x1000000;
    } while (lVar3 < *(char *)(param_1 + 0x8f));
  }
  param_1[0x8e] = 0x1c;
  return 1;
}


// ==== FUN_001f25a8 @ 001f25a8 ====

void FUN_001f25a8(undefined4 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = param_2;
  if ('\0' < *(char *)(param_2 + 0x23c)) {
    do {
      FUN_001f1608(param_1,iVar1);
      lVar2 = (long)((int)lVar2 + 1);
      iVar1 = iVar1 + 0xa8;
    } while (lVar2 < *(char *)(param_2 + 0x23c));
  }
  return;
}


// ==== FUN_001f2618 @ 001f2618 ====

void FUN_001f2618(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ('\0' < *(char *)(param_1 + 0x23c)) {
    iVar3 = 0x1000000;
    iVar2 = param_1;
    do {
      if (param_2 == 0) {
        if (*(int *)(iVar2 + 0x8c) != 7) {
LAB_001f2678:
          FUN_001f1660(iVar2);
        }
      }
      else if (*(int *)(iVar2 + 0x8c) == 7) goto LAB_001f2678;
      iVar1 = iVar3 >> 0x18;
      iVar3 = iVar3 + 0x1000000;
      iVar2 = iVar2 + 0xa8;
    } while ((long)iVar1 < (long)*(char *)(param_1 + 0x23c));
  }
  return;
}


// ==== FUN_001f26c0 @ 001f26c0 ====

undefined4 FUN_001f26c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x1000000;
  iVar2 = param_1;
  if ('\0' < *(char *)(param_1 + 0x23c)) {
    do {
      FUN_001f19d0(iVar2);
      iVar1 = iVar3 >> 0x18;
      iVar3 = iVar3 + 0x1000000;
      iVar2 = iVar2 + 0xa8;
    } while ((long)iVar1 < (long)*(char *)(param_1 + 0x23c));
  }
  *(undefined1 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x38;
  return 1;
}


// ==== FUN_001f2740 @ 001f2740 ====

void FUN_001f2740(int param_1,int param_2,char param_3,int param_4,int param_5,int param_6)

{
  param_1 = param_3 * 0xa8 + param_1;
  *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + param_4;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + param_5;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_6;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = param_2;
  return;
}


// ==== FUN_001f2790 @ 001f2790 ====

void FUN_001f2790(int param_1,char param_2)

{
  *(char *)(param_1 + 0x23c) = param_2;
  if (param_2 != '\x02') {
    *(undefined4 *)(param_1 + 0x78) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x7c) = 0x41b00000;
    *(undefined4 *)(param_1 + 0x80) = 0x44188000;
    *(undefined4 *)(param_1 + 0x84) = 0x43e50000;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}


// ==== FUN_001f27f0 @ 001f27f0 ====

void FUN_001f27f0(void)

{
  return;
}


// ==== FUN_001f27f8 @ 001f27f8 ====

undefined4 FUN_001f27f8(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x3f;
  puVar1 = &DAT_00438baf;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return 1;
}


// ==== FUN_001f2828 @ 001f2828 ====

void FUN_001f2828(void)

{
  return;
}


// ==== FUN_001f2830 @ 001f2830 ====

undefined4 FUN_001f2830(void)

{
  return 1;
}


// ==== FUN_001f2838 @ 001f2838 ====

void FUN_001f2838(undefined8 param_1,char param_2,undefined8 param_3)

{
  FUN_001f1b98(DAT_0040f518 + param_2 * 0xa8,param_3);
  return;
}


// ==== FUN_001f2870 @ 001f2870 ====

undefined4 FUN_001f2870(undefined8 param_1,char param_2)

{
  return *(undefined4 *)(param_2 * 0xa8 + DAT_0040f518 + 0x8c);
}


// ==== FUN_001f2898 @ 001f2898 ====

void FUN_001f2898(undefined8 param_1,char param_2,undefined8 param_3)

{
  FUN_001f1c00(DAT_0040f518 + param_2 * 0xa8,param_3);
  return;
}


// ==== FUN_001f28d0 @ 001f28d0 ====

void FUN_001f28d0(undefined8 param_1,char param_2,undefined8 param_3)

{
  FUN_001f3ee8(*(undefined4 *)(DAT_0040f518 + param_2 * 0xa8 + 8),param_3);
  return;
}


// ==== FUN_001f2910 @ 001f2910 ====

void FUN_001f2910(void)

{
  return;
}


// ==== FUN_001f2918 @ 001f2918 ====

void FUN_001f2918(undefined8 param_1,char param_2,undefined8 param_3)

{
  FUN_001f44b8(*(undefined4 *)(DAT_0040f518 + param_2 * 0xa8 + 0x20),param_3);
  return;
}


// ==== FUN_001f2958 @ 001f2958 ====

void FUN_001f2958(undefined8 param_1,char param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  FUN_001f76e8(*(undefined4 *)(DAT_0040f518 + param_2 * 0xa8 + 0xc),param_3,param_4,param_5);
  return;
}


// ==== FUN_001f29a0 @ 001f29a0 ====

void FUN_001f29a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001f4d88(*(undefined4 *)(DAT_0040f518 + 0x14));
  FUN_002019a0(*(undefined4 *)(DAT_0040f518 + 0x2c),param_3);
  return;
}


// ==== FUN_001f29e8 @ 001f29e8 ====

void FUN_001f29e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001f4de0(*(undefined4 *)(DAT_0040f518 + 0x14));
  FUN_002019a0(*(undefined4 *)(DAT_0040f518 + 0x2c),param_3);
  return;
}


// ==== FUN_001f2a38 @ 001f2a38 ====

void FUN_001f2a38(void)

{
  FUN_001f4d30(*(undefined4 *)(DAT_0040f518 + 0x14));
  return;
}


// ==== FUN_001f2a60 @ 001f2a60 ====

undefined4
FUN_001f2a60(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined8 uVar2;
  
  if ((&DAT_00438b70)[(int)param_2] == '\0') {
    if (param_5 != 0) {
      if (7 < *(byte *)(DAT_0040f0e0 + 0x2020c)) {
        return 0;
      }
      uVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
      piVar1 = (int *)FUN_00123c90(0x48efa8,uVar2,3);
      if (0 < *piVar1) {
        return 0;
      }
      uVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
      piVar1 = (int *)FUN_00123c90(0x48efa8,uVar2,2);
      if (0 < *piVar1) {
        return 0;
      }
      uVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
      piVar1 = (int *)FUN_00123c90(0x48efa8,uVar2,1);
      if (0 < *piVar1) {
        return 0;
      }
      uVar2 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
      piVar1 = (int *)FUN_00123c90(0x48efa8,uVar2,0);
      if (0 < *piVar1) {
        return 0;
      }
    }
    if ((param_4 == 0) && (*(char *)(DAT_0040f0e0 + 0x2020c) != '\0')) {
      return 0;
    }
    if ((param_2 != 1) || (*(int *)(*DAT_0040f4dc + 0x48) == 0)) {
      (&DAT_00438b70)[(int)param_2] = 1;
      fe_FE_HINTPROMPT_001f7a18(*(undefined4 *)(DAT_0040f518 + 0xc),param_2,0x3f1d9d9e3ed0d0d1);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001f2c68 @ 001f2c68 ====

undefined4 FUN_001f2c68(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 auVar1 [16];
  undefined1 in_t0_qw [16];
  
  auVar1 = _por(in_zero_qw,in_t0_qw);
  fe_FE_HINTPROMPT_001f7a18(*(undefined4 *)(DAT_0040f518 + 0xc),param_2,auVar1._0_8_);
  return 1;
}


// ==== FUN_001f2c98 @ 001f2c98 ====

undefined8 FUN_001f2c98(void)

{
  return 0;
}


// ==== FUN_001f2ca8 @ 001f2ca8 ====

void FUN_001f2ca8(undefined8 param_1,undefined1 *param_2)

{
  FUN_001f8ff8(*(undefined4 *)(DAT_0040f518 + 0x38),*param_2);
  return;
}


// ==== FUN_001f2cd0 @ 001f2cd0 ====

void FUN_001f2cd0(undefined8 param_1,ulong param_2)

{
  FUN_001f8528(*(undefined4 *)(DAT_0040f518 + 0x34),param_2 ^ 1);
  return;
}


// ==== FUN_001f2d08 @ 001f2d08 ====

void FUN_001f2d08(undefined8 param_1,char param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0040f518 + param_2 * 0xa8 + 0x3c);
  if (*(int *)(iVar1 + 0x160) != param_3) {
    *(int *)(iVar1 + 0x160) = param_3;
    *(undefined4 *)(iVar1 + 0x158) = 0;
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))
              (*(undefined4 *)(DAT_0040f4d0 + 0x1c),
               iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x10));
  }
  return;
}


// ==== FUN_001f2d70 @ 001f2d70 ====

void FUN_001f2d70(void)

{
  FUN_001f5928(*(undefined4 *)(DAT_0040f518 + 0x14));
  FUN_002019a0(*(undefined4 *)(DAT_0040f518 + 0x2c),0);
  return;
}


// ==== FUN_001f2db0 @ 001f2db0 ====

void FUN_001f2db0(void)

{
  FUN_001f5928(*(undefined4 *)(DAT_0040f518 + 0x14));
  FUN_002019f8(*(undefined4 *)(DAT_0040f518 + 0x2c));
  FUN_002019a0(*(undefined4 *)(DAT_0040f518 + 0x2c),0);
  return;
}


// ==== FUN_001f2df8 @ 001f2df8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f2df8(int param_1)

{
  FUN_001f1c08();
  sprintf(param_1 + 0x6c,0x3f9548,0x3f9550);
  FUN_00275260(param_1 + 0x6c,param_1 + 0x48,4);
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 0x98) = _DAT_0042bda0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3faaaaab;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}


// ==== FUN_001f2ea8 @ 001f2ea8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "HUD_Bodycounttext"
     "HUD_Bodycount"
     "HUD_BodyCountIncrement" */

undefined4 FUN_001f2ea8(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 0xc0) = 0;
  *(undefined2 *)(iVar2 + 0xc2) = 0;
  *(undefined2 *)(iVar2 + 0xc4) = 0;
  *(undefined2 *)(iVar2 + 0xc6) = 0;
  *(undefined2 *)(iVar2 + 200) = 0;
  *(undefined2 *)(iVar2 + 0xca) = 0;
  *(undefined2 *)(iVar2 + 0xcc) = 0;
  *(undefined2 *)(iVar2 + 0xce) = 0;
  uVar1 = _DAT_0042bda0;
  *(undefined2 *)(iVar2 + 0xc0) = 0;
  *(undefined2 *)(iVar2 + 0xc2) = 0;
  *(undefined2 *)(iVar2 + 0xc4) = 0;
  *(undefined2 *)(iVar2 + 0xc6) = 0;
  *(undefined2 *)(iVar2 + 200) = 0;
  *(undefined2 *)(iVar2 + 0xca) = 0;
  *(undefined2 *)(iVar2 + 0xcc) = 0;
  *(undefined2 *)(iVar2 + 0xce) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined8 *)(iVar2 + 0x98) = uVar1;
  FUN_001f1d48(param_1,0x3f9558,iVar2 + 0x30);
  FUN_001f1d48(param_1,0x3f9570,iVar2 + 0x48);
  FUN_001f1d48(param_1,0x3f9580,iVar2 + 0x58);
  return 1;
}


// ==== FUN_001f2f60 @ 001f2f60 ====

void FUN_001f2f60(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (cGpffff85a1 == '\0') {
    FUN_001f3048();
  }
  if (cGpffff85a0 == '\0') {
    FUN_001f3240(param_1);
  }
  iVar2 = (int)param_1 + 0x6c;
  uVar1 = FUN_00121ce8(*DAT_0040f4dc);
  sprintf(iVar2,0x3f9598,uVar1);
  FUN_00275260(iVar2,(int)param_1 + 0x48,4);
  return;
}


// ==== FUN_001f2ff8 @ 001f2ff8 ====

/* Strings referenciadas:
     "HUD_Bodycounttext"
     "HUD_Bodycount"
     "HUD_BodyCountIncrement" */

undefined4 FUN_001f2ff8(undefined8 param_1)

{
  FUN_001f1e20(param_1,0x3f9558);
  FUN_001f1e20(param_1,0x3f9570);
  FUN_001f1e20(param_1,0x3f9580);
  return 1;
}


// ==== FUN_001f3048 @ 001f3048 ====

void FUN_001f3048(undefined8 param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20f78) {
    return;
  }
  iVar3 = (int)param_1;
  if (*(short *)(*DAT_0040f4dc + 0x1c) <= *(short *)(iVar3 + 0xc2)) goto LAB_001f3220;
  uGpffff85a0 = 1;
  if (((*(short *)(iVar3 + 0xc6) < *(short *)(*DAT_0040f4dc + 0x1c)) &&
      (0.75 < *(float *)(iVar3 + 0xd0))) && (*(float *)(iVar3 + 0xd0) <= 1.5)) {
    *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0xac) / *(float *)(iVar3 + 0xdc);
  }
  *(undefined2 *)(iVar3 + 0xc6) = *(undefined2 *)(*DAT_0040f4dc + 0x1c);
  fVar4 = *(float *)(iVar3 + 0xd0) + *(float *)(DAT_0040f0e0 + 0x2013c);
  sVar1 = *(short *)(*DAT_0040f4dc + 0x1c);
  *(float *)(iVar3 + 0xd0) = fVar4;
  if (0.75 < fVar4) {
    if (0.75 < fVar4) {
      if (fVar4 <= 1.5) goto LAB_001f31a0;
      fVar4 = *(float *)(iVar3 + 0xd0);
    }
    else {
      fVar4 = *(float *)(iVar3 + 0xd0);
    }
    if (1.5 < fVar4) {
      *(undefined4 *)(iVar3 + 0xd0) = 0;
      *(undefined2 *)(iVar3 + 0xc4) = *(undefined2 *)(iVar3 + 0xc2);
      uVar2 = *(undefined2 *)(*DAT_0040f4dc + 0x1c);
      *(short *)(iVar3 + 0xce) = sVar1 - *(short *)(iVar3 + 0xc2);
      *(undefined2 *)(iVar3 + 0xc2) = uVar2;
      uGpffff85a0 = 0;
      DAT_0040e594._0_2_ = 0;
    }
  }
  else {
LAB_001f31a0:
    sprintf(iVar3 + 0x70,0x3f95a0,0x40dd98);
    FUN_00275260(iVar3 + 0x70,iVar3 + 0x50,4);
  }
LAB_001f3220:
  FUN_001f3438(param_1,*(undefined2 *)(iVar3 + 0xce));
  return;
}


// ==== FUN_001f3240 @ 001f3240 ====

void FUN_001f3240(undefined8 param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20f78) {
    return;
  }
  iVar3 = (int)param_1;
  if (*(short *)(*DAT_0040f4dc + 0x1e) <= *(short *)(iVar3 + 200)) goto LAB_001f3418;
  uGpffff85a1 = 1;
  if (((*(short *)(iVar3 + 0xcc) < *(short *)(*DAT_0040f4dc + 0x1e)) &&
      (1.0 < *(float *)(iVar3 + 0xd0))) && (*(float *)(iVar3 + 0xd0) <= 2.0)) {
    *(float *)(iVar3 + 0xd0) = *(float *)(iVar3 + 0xac) / *(float *)(iVar3 + 0xdc);
  }
  *(undefined2 *)(iVar3 + 0xcc) = *(undefined2 *)(*DAT_0040f4dc + 0x1e);
  fVar4 = *(float *)(iVar3 + 0xd0) + *(float *)(DAT_0040f0e0 + 0x2013c);
  sVar1 = *(short *)(*DAT_0040f4dc + 0x1e);
  *(float *)(iVar3 + 0xd0) = fVar4;
  if (1.0 < fVar4) {
    if (1.0 < fVar4) {
      if (fVar4 <= 2.0) goto LAB_001f3398;
      fVar4 = *(float *)(iVar3 + 0xd0);
    }
    else {
      fVar4 = *(float *)(iVar3 + 0xd0);
    }
    if (2.0 < fVar4) {
      *(undefined4 *)(iVar3 + 0xd0) = 0;
      *(undefined2 *)(iVar3 + 0xca) = *(undefined2 *)(iVar3 + 200);
      uVar2 = *(undefined2 *)(*DAT_0040f4dc + 0x1e);
      *(short *)(iVar3 + 0xce) = sVar1 - *(short *)(iVar3 + 200);
      *(undefined2 *)(iVar3 + 200) = uVar2;
      uGpffff85a1 = 0;
      DAT_0040e594._0_2_ = 0;
    }
  }
  else {
LAB_001f3398:
    sprintf(iVar3 + 0x70,0x3f95a0,0x40dd98);
    FUN_00275260(iVar3 + 0x70,iVar3 + 0x50,4);
  }
LAB_001f3418:
  FUN_001f3438(param_1,*(undefined2 *)(iVar3 + 0xce));
  return;
}


// ==== FUN_001f3438 @ 001f3438 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f3438(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((long)(int)param_2 != 0) {
    iVar2 = (int)param_1;
    fVar3 = *(float *)(iVar2 + 0xd4) + *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar2 + 0xd4) = fVar3;
    uVar1 = _DAT_0042bda0;
    if (fVar3 <= 0.2) {
      uVar4 = 0x3f866666;
    }
    else {
      if (0.2 < fVar3) {
        if (fVar3 < 0.4) {
          *(undefined4 *)(iVar2 + 0xd4) = 0x3e9eb852;
          FUN_001f35d8(param_1);
          if ((long)(short)DAT_0040e594 != (long)(int)param_2) {
            return;
          }
          *(undefined4 *)(iVar2 + 0xd4) = 0x3f19999a;
          return;
        }
        fVar3 = *(float *)(iVar2 + 0xd4);
      }
      else {
        fVar3 = *(float *)(iVar2 + 0xd4);
      }
      if ((fVar3 < 0.6) || (0.8 < fVar3)) {
        if (fVar3 <= 0.8) {
          return;
        }
        *(undefined2 *)(iVar2 + 0xce) = 0;
        *(undefined8 *)(iVar2 + 0x98) = uVar1;
        *(undefined4 *)(iVar2 + 0xd4) = 0;
        return;
      }
      uVar4 = 0x3f73cf3e;
    }
    FUN_001f35b8(uVar4,param_1);
  }
  return;
}


// ==== FUN_001f35b8 @ 001f35b8 ====

void FUN_001f35b8(float param_1,int param_2)

{
  *(float *)(param_2 + 0x9c) = *(float *)(param_2 + 0x9c) * param_1;
  *(float *)(param_2 + 0x98) = *(float *)(param_2 + 0x98) * param_1;
  return;
}


// ==== FUN_001f35d8 @ 001f35d8 ====

void FUN_001f35d8(int param_1)

{
  short sVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xd8) + *(float *)(DAT_0040f0e0 + 0x2013c);
  *(float *)(param_1 + 0xd8) = fVar2;
  if (0.1 <= fVar2) {
    sVar1 = *(short *)(param_1 + 0xc0) + 1;
    *(short *)(param_1 + 0xc0) = sVar1;
    if (sVar1 < 10) {
      sprintf(param_1 + 0x6c,0x3f95a0,0x3f95a8);
    }
    else if (sVar1 < 100) {
      sprintf(param_1 + 0x6c,0x3f95a0,0x40dda0);
    }
    else {
      sprintf(param_1 + 0x6c,0x3f95b0,sVar1);
    }
    FUN_00275260(param_1 + 0x6c,param_1 + 0x48,4);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    DAT_0040e594._0_2_ = (short)DAT_0040e594 + 1;
  }
  return;
}


// ==== FUN_001f36e8 @ 001f36e8 ====

void FUN_001f36e8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_001f1c08();
  FUN_00107b78(0x40f0f0,1,0x40,0);
  uVar2 = FUN_00107d20(0x100);
  iVar4 = 6;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  FUN_00107b78(0x40f0f0,1,0x10,0);
  uVar2 = FUN_00107d20(0xa0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_00107d20(0x280);
  iVar4 = 0x26;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  iVar8 = 0;
  FUN_00107b78(0x40f0f0,1,8,0);
  uVar2 = FUN_00107d20(0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_00107d20(8);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  iVar4 = 0x1000000;
  do {
    iVar6 = iVar8 * 0x10;
    *(undefined8 *)(iVar6 + *(int *)(param_1 + 0x1c)) = 0x402400003f000000;
    *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x1c) + 8) = 0;
    *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x1c) + 0xc) = 0;
    puVar3 = (undefined1 *)(*(int *)(param_1 + 0x24) + iVar8);
    iVar8 = iVar4 >> 0x18;
    *puVar3 = 0;
    iVar4 = iVar4 + 0x1000000;
  } while (iVar8 < 0x28);
  iVar4 = 0;
  do {
    FUN_00107b78(0x40f0f0,1,0x10,0);
    iVar7 = iVar4 * 0x20;
    iVar8 = *(int *)(param_1 + 0x20);
    uVar2 = FUN_00107d20(0x28);
    *(undefined4 *)(iVar7 + iVar8) = uVar2;
    FUN_00107b78(0x40f0f0,1,8,0);
    iVar8 = *(int *)(param_1 + 0x20);
    uVar2 = FUN_00107d20(10);
    *(undefined4 *)(iVar7 + iVar8 + 0x10) = uVar2;
    iVar8 = 0;
    iVar6 = 0x1000000;
    *(undefined1 *)(*(int *)(param_1 + 0x28) + iVar4) = 0;
    do {
      iVar5 = iVar8 * 4;
      iVar8 = iVar6 >> 0x18;
      iVar6 = iVar6 + 0x1000000;
      *(undefined4 *)(iVar5 + *(int *)(iVar7 + *(int *)(param_1 + 0x20))) = 0;
    } while (iVar8 < 10);
    iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18;
  } while (iVar4 < 8);
  FUN_00107b78(0x40f0f0,1,0x80,0);
  return;
}


// ==== FUN_001f3948 @ 001f3948 ====

undefined4 FUN_001f3948(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x234);
  FUN_001f1c10(param_1,2,0x28,0,param_2,param_3,param_4);
  iVar7 = (int)param_1;
  iVar5 = 0;
  iVar6 = 0x1000000;
  *(undefined4 *)
   ((*(short *)(iVar7 + 0x10) + 1) * 0x10 +
   *(int *)(*(char *)(iVar7 + 0x12) * 0xa8 + DAT_0040f518 + 0x6c)) = 2;
  do {
    iVar2 = iVar5 * 0x10;
    iVar5 = iVar6 >> 0x18;
    *(undefined4 *)(iVar2 + *(int *)(iVar7 + 0x1c) + 8) = uVar1;
    iVar6 = iVar6 + 0x1000000;
  } while (iVar5 < 0x28);
  iVar6 = 0;
  iVar5 = 0x1000000;
  do {
    puVar3 = (undefined1 *)(*(int *)(iVar7 + 0x24) + iVar6);
    iVar6 = iVar5 >> 0x18;
    *puVar3 = 0;
    iVar5 = iVar5 + 0x1000000;
  } while (iVar6 < 0x28);
  iVar6 = 0;
  iVar5 = *(int *)(iVar7 + 0x28);
  while( true ) {
    iVar2 = 0;
    iVar4 = 0x1000000;
    *(undefined1 *)(iVar5 + iVar6) = 0;
    do {
      iVar5 = iVar2 * 4;
      iVar2 = iVar4 >> 0x18;
      iVar4 = iVar4 + 0x1000000;
      *(undefined4 *)(iVar5 + *(int *)(iVar6 * 0x20 + *(int *)(iVar7 + 0x20))) = 0;
    } while (iVar2 < 10);
    iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18;
    if (7 < iVar6) break;
    iVar5 = *(int *)(iVar7 + 0x28);
  }
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  return 1;
}


// ==== FUN_001f3aa0 @ 001f3aa0 ====

void FUN_001f3aa0(float param_1,int param_2)

{
  undefined1 auVar1 [12];
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  fVar16 = (float)FUN_0013c9b0(DAT_0040f4d0 + 0x30);
  iVar9 = 0;
  fVar2 = *(float *)(DAT_0040f4d0 + 0xd8);
  auVar3 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0);
  iVar8 = *(int *)(param_2 + 0x28);
  do {
    if (*(char *)(iVar8 + iVar9) != '\0') {
      iVar13 = iVar9 * 0x20;
      iVar8 = iVar13 + *(int *)(param_2 + 0x20);
      *(float *)(iVar8 + 0x14) = *(float *)(iVar8 + 0x14) - param_1;
      iVar8 = iVar13 + *(int *)(param_2 + 0x20);
      if (*(float *)(iVar8 + 0x14) <= 0.0) {
        *(undefined1 *)(*(int *)(param_2 + 0x28) + iVar9) = 0;
        iVar8 = *(int *)(param_2 + 0x20);
        lVar15 = 0;
        if ('\0' < *(char *)(iVar13 + iVar8 + 0x18)) {
          iVar4 = 0x1000000;
          do {
            iVar14 = (int)lVar15;
            iVar12 = iVar14 * 4;
            iVar8 = *(int *)(iVar12 + *(int *)(iVar13 + iVar8));
            auVar1 = *(undefined1 (*) [12])(DAT_0040f518 + 0x170);
            uVar7 = *(undefined4 *)(DAT_0040f518 + 0x17c);
            *(int *)(iVar8 + 0x10) = auVar1._0_4_;
            *(int *)(iVar8 + 0x14) = auVar1._4_4_;
            *(int *)(iVar8 + 0x18) = auVar1._8_4_;
            *(undefined4 *)(iVar8 + 0x1c) = uVar7;
            FUN_00278f00(*(char *)(param_2 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                         *(short *)(param_2 + 0x10) + 1,
                         *(undefined4 *)(iVar12 + *(int *)(iVar13 + *(int *)(param_2 + 0x20))));
            *(undefined4 *)(iVar12 + *(int *)(iVar13 + *(int *)(param_2 + 0x20))) = 0;
            lVar15 = (long)(iVar4 >> 0x18);
            *(undefined1 *)
             (*(int *)(param_2 + 0x24) +
             (int)*(char *)(*(int *)(iVar13 + *(int *)(param_2 + 0x20) + 0x10) + iVar14)) = 0;
            iVar8 = *(int *)(param_2 + 0x20);
            iVar4 = iVar4 + 0x1000000;
          } while (lVar15 < *(char *)(iVar13 + iVar8 + 0x18));
        }
      }
      else {
        lVar15 = 0;
        if ('\0' < *(char *)(iVar8 + 0x18)) {
          auVar22 = _lqc2(auVar3);
          auVar22 = _qmfc2(auVar22._0_4_);
          fVar21 = 8.0;
          fVar20 = 0.5;
          iVar8 = 0x1000000;
          do {
            iVar4 = iVar13 + *(int *)(param_2 + 0x20);
            fVar19 = fVar2 - *(float *)(iVar4 + 0xc);
            fVar17 = auVar22._0_4_ - *(float *)(iVar4 + 8);
            fVar18 = 1.0 / SQRT(fVar17 * fVar17 + fVar19 * fVar19);
            fVar19 = fVar19 * fVar18;
            fVar19 = (float)((int)fVar19 * (uint)(-1.0 < fVar19) |
                            (uint)(-1.0 >= fVar19) * -0x40800000);
            fVar19 = (float)acosf((int)fVar19 * (uint)(fVar19 < 1.0) |
                                  (uint)(fVar19 >= 1.0) * 0x3f800000);
            fVar19 = fVar19 * 57.29578;
            if (fVar17 * fVar18 < 0.0) {
              fVar19 = -fVar19;
            }
            iVar14 = (int)lVar15;
            iVar12 = iVar14 * 4;
            iVar4 = iVar13 + *(int *)(param_2 + 0x20);
            *(float *)(*(char *)(*(int *)(iVar4 + 0x10) + iVar14) * 0x10 + *(int *)(param_2 + 0x1c)
                      + 0xc) =
                 (((float)(*(char *)(iVar4 + 0x18) + -1) * fVar21 * fVar20 - (float)iVar14 * fVar21)
                  + fVar19 + 180.0) - fVar16;
            piVar5 = (int *)(iVar13 + *(int *)(param_2 + 0x20));
            fVar17 = (float)piVar5[5];
            iVar4 = *(int *)(iVar12 + *piVar5);
            *(undefined4 *)(iVar4 + 0x10) = 0x3f800000;
            *(undefined4 *)(iVar4 + 0x14) = 0;
            *(undefined4 *)(iVar4 + 0x18) = 0;
            *(float *)(iVar4 + 0x1c) = fVar17 * fVar20 * fVar20;
            if (lVar15 == 0) {
              puVar11 = &DAT_0042bde8;
              puVar6 = *(undefined4 **)(iVar13 + *(int *)(param_2 + 0x20));
              uVar10 = 0x42bde0;
LAB_001f3e38:
              FUN_00276960(*puVar6,uVar10,puVar11);
              iVar4 = *(int *)(param_2 + 0x20);
            }
            else {
              piVar5 = (int *)(iVar13 + *(int *)(param_2 + 0x20));
              iVar4 = *piVar5;
              if (lVar15 == (char)piVar5[6] + -1) {
                puVar11 = &DAT_0042bdf8;
                puVar6 = (undefined4 *)(iVar12 + iVar4);
                uVar10 = 0x42bdf0;
                goto LAB_001f3e38;
              }
              FUN_00276960(*(undefined4 *)(iVar12 + iVar4),0x42bdd0,0x42bdd8);
              iVar4 = *(int *)(param_2 + 0x20);
            }
            lVar15 = (long)(iVar8 >> 0x18);
            iVar8 = iVar8 + 0x1000000;
          } while (lVar15 < *(char *)(iVar13 + iVar4 + 0x18));
        }
      }
    }
    iVar9 = (int)(char)((char)iVar9 + '\x01');
    if (7 < iVar9) {
      return;
    }
    iVar8 = *(int *)(param_2 + 0x28);
  } while( true );
}


// ==== FUN_001f3ee8 @ 001f3ee8 ====

void FUN_001f3ee8(float param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  
  iVar5 = 0x1000000;
  lVar7 = 0;
  iVar4 = 0;
  iVar3 = 0;
  iStack_c0 = *(char *)((int)param_2 + 0x12) * 0xa8 + DAT_0040f518 + 0x40;
  while (*(char *)(param_2[10] + iVar3) != '\0') {
    iVar3 = iVar5 >> 0x18;
    iVar5 = iVar5 + 0x1000000;
    iVar4 = iVar4 + 0x20;
    if (7 < iVar3) {
      return;
    }
  }
  *(char *)(param_2[10] + iVar3) = '\x01';
  *(undefined4 *)(iVar4 + param_2[8] + 0x14) = 0x40000000;
  *(undefined8 *)(iVar4 + param_2[8] + 8) = *param_3;
  *(char *)(iVar4 + param_2[8] + 0x18) = (char)(int)(param_1 * 0.1);
  if ('\n' < *(char *)(iVar4 + param_2[8] + 0x18)) {
    *(undefined1 *)(iVar4 + param_2[8] + 0x18) = 10;
  }
  if (*(char *)(iVar4 + param_2[8] + 0x18) == '\0') {
    *(undefined1 *)(iVar4 + param_2[8] + 0x18) = 1;
  }
  if (*(char *)(iVar4 + param_2[8] + 0x18) < '\x01') {
    return;
  }
  uVar8 = 0xc2c80000;
  iVar3 = 0;
  do {
    iVar5 = 0x1000000;
    pcVar2 = (char *)param_2[9];
    iVar6 = 0;
    do {
      if (*pcVar2 == '\0') {
        *pcVar2 = '\x01';
        uVar1 = FUN_00278ec0(iStack_c0,*(short *)(param_2 + 4) + 1,*param_2);
        iVar5 = (int)lVar7 * 4;
        *(undefined4 *)(iVar5 + *(int *)(iVar4 + param_2[8])) = uVar1;
        *(char *)(*(int *)(iVar4 + param_2[8] + 0x10) + (int)lVar7) = (char)iVar6;
        lVar7 = (long)(iVar3 + 0x1000000 >> 0x18);
        uStack_e0 = 0;
        uStack_d0 = 0x42800000;
        uStack_cc = 0x42800000;
        uStack_dc = uVar8;
        FUN_002768b0(*(undefined4 *)(iVar5 + *(int *)(iVar4 + param_2[8])),&uStack_e0,&uStack_d0,
                     0x42bdb0,*(undefined8 *)(DAT_0040f518 + 0x170),param_2[7] + iVar6 * 0x10,
                     0x42bdd0,0x42bdd8);
        iVar3 = param_2[0xb];
        param_2[0xb] = iVar3 + 1;
        if (iVar3 + 1 == 3) {
          FUN_001f2a60(DAT_0040f51c,0x17,1,0,1);
        }
        break;
      }
      iVar6 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
      pcVar2 = pcVar2 + 1;
    } while (iVar6 < 0x28);
    if (iVar6 == 0x28) {
      *(char *)(iVar4 + param_2[8] + 0x18) = (char)lVar7;
      return;
    }
    iVar3 = (int)lVar7 << 0x18;
    if (*(char *)(iVar4 + param_2[8] + 0x18) <= lVar7) {
      return;
    }
  } while( true );
}


// ==== FUN_001f41c0 @ 001f41c0 ====

undefined4 FUN_001f41c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = 1;
  do {
    iVar2 = 0;
    iVar3 = 0x1000000;
    do {
      if (*(int *)(iVar2 * 4 + *(int *)(iVar1 * 0x20 + *(int *)(param_1 + 0x20))) != 0) {
        FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                     *(short *)(param_1 + 0x10) + 1);
      }
      iVar2 = iVar3 >> 0x18;
      iVar3 = iVar3 + 0x1000000;
    } while (iVar2 < 10);
    iVar1 = (int)(char)iVar4;
    iVar4 = iVar1 + 1;
  } while (iVar1 < 8);
  return 1;
}


// ==== FUN_001f42a0 @ 001f42a0 ====

void FUN_001f42a0(int param_1)

{
  FUN_001f1c08();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}


// ==== FUN_001f42c8 @ 001f42c8 ====

/* Strings referenciadas:
     "HUD_messagebox" */

undefined4 FUN_001f42c8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  FUN_001f1c10(param_1,1,1,0,param_2,param_3,param_4);
  iVar1 = DAT_0040f518;
  puVar5 = (undefined4 *)param_1;
  *(undefined2 *)((int)puVar5 + 0xb6) = 0;
  *(undefined2 *)(puVar5 + 0x2d) = 0x20;
  uVar2 = FUN_00278ec0(*(char *)((int)puVar5 + 0x12) * 0xa8 + iVar1 + 0x40,
                       *(undefined2 *)(puVar5 + 4),*puVar5);
  puVar5[0x2c] = uVar2;
  *(undefined8 *)(puVar5 + 0x1a) = DAT_0042be20;
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(puVar5 + 0x1a);
  *(undefined8 *)(puVar5 + 0x1c) = DAT_0042bc70;
  uVar2 = *(undefined4 *)(DAT_0040f518 + 0x184);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x188);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x18c);
  puVar5[0xc] = *(undefined4 *)(DAT_0040f518 + 0x180);
  puVar5[0xd] = uVar2;
  puVar5[0xe] = uVar3;
  puVar5[0xf] = uVar4;
  puVar5[8] = (int)*(undefined8 *)(puVar5 + 0xc);
  puVar5[9] = (int)((ulong)*(undefined8 *)(puVar5 + 0xc) >> 0x20);
  puVar5[10] = puVar5[0xe];
  puVar5[0xb] = puVar5[0xf];
  uVar2 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar5[0x14] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar5[0x15] = uVar2;
  puVar5[0x16] = uVar3;
  puVar5[0x17] = uVar4;
  puVar5[0x20] = puVar5 + 0x2d;
  puVar5[0x10] = (int)*(undefined8 *)(puVar5 + 0x14);
  puVar5[0x11] = (int)((ulong)*(undefined8 *)(puVar5 + 0x14) >> 0x20);
  puVar5[0x12] = puVar5[0x16];
  puVar5[0x13] = puVar5[0x17];
  puVar5[0x22] = 2;
  puVar5[0x24] = 0x41a00000;
  puVar5[0x25] = 0x41a00000;
  *(undefined8 *)(puVar5 + 0x1e) = DAT_0042bc90;
  FUN_00200f08(puVar5 + 8,puVar5[0x2c]);
  *(undefined1 *)(puVar5 + 0x92) = 0;
  FUN_001f1d48(param_1,0x3f95b8,0x3f95c8);
  return 1;
}


// ==== FUN_001f43f0 @ 001f43f0 ====

void FUN_001f43f0(float param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x248) != '\0') &&
     (param_1 = *(float *)(param_2 + 0x244) + param_1, *(float *)(param_2 + 0x244) = param_1,
     1.0 < param_1)) {
    *(undefined1 *)(param_2 + 0x248) = 0;
    *(undefined4 *)(param_2 + 0x9c) = 0x3e99999a;
    *(undefined4 *)(param_2 + 0x98) = 0x3e99999a;
  }
  FUN_00201108(param_2 + 0x20);
  return;
}


// ==== FUN_001f4458 @ 001f4458 ====

/* Strings referenciadas:
     "HUD_messagebox" */

undefined4 FUN_001f4458(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00278f00(*(char *)(iVar1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(undefined2 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0xb0));
  FUN_001f1e20(param_1,0x3f95b8);
  return 1;
}


// ==== FUN_001f44b8 @ 001f44b8 ====

void FUN_001f44b8(void)

{
  return;
}


// ==== FUN_001f44c0 @ 001f44c0 ====

void FUN_001f44c0(int param_1)

{
  FUN_001f1c08();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// ==== FUN_001f44f0 @ 001f44f0 ====

undefined4 FUN_001f44f0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar5 = (undefined4 *)param_1;
  FUN_001f1c10(param_1,1,2,0,param_2,param_3,param_4);
  puVar5[0x668] = 0;
  uVar7 = 0x3f800000;
  iVar6 = *(char *)((int)puVar5 + 0x12) * 0xa8 + DAT_0040f518 + 0x40;
  FUN_00275260(0x40dda8,puVar5 + 0x278,0x100);
  uVar1 = FUN_00278ec0(iVar6,*(undefined2 *)(puVar5 + 4),*puVar5);
  puVar5[6] = uVar1;
  FUN_00275260(0x40dda8,puVar5 + 0x339,0x100);
  uVar1 = FUN_00278ec0(iVar6,*(undefined2 *)(puVar5 + 4),*puVar5);
  puVar5[7] = uVar1;
  *(undefined8 *)(puVar5 + 0x1a) = 0x42aa000000000000;
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(puVar5 + 0x1a);
  puVar5[0x24] = 0x41700000;
  puVar5[0x25] = 0x41700000;
  *(undefined8 *)(puVar5 + 0x1c) = 0x3f0000003f000000;
  uVar1 = *(undefined4 *)(DAT_0040f518 + 500);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
  puVar5[0xc] = *(undefined4 *)(DAT_0040f518 + 0x1f0);
  puVar5[0xd] = uVar1;
  puVar5[0xe] = uVar3;
  puVar5[0xf] = uVar4;
  puVar5[8] = (int)*(undefined8 *)(puVar5 + 0xc);
  puVar5[9] = (int)((ulong)*(undefined8 *)(puVar5 + 0xc) >> 0x20);
  puVar5[10] = puVar5[0xe];
  puVar5[0xb] = puVar5[0xf];
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar5[0x14] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar5[0x15] = uVar1;
  puVar5[0x16] = uVar3;
  puVar5[0x17] = uVar4;
  puVar5[0x10] = (int)*(undefined8 *)(puVar5 + 0x14);
  puVar5[0x11] = (int)((ulong)*(undefined8 *)(puVar5 + 0x14) >> 0x20);
  puVar5[0x12] = puVar5[0x16];
  puVar5[0x13] = puVar5[0x17];
  puVar5[0x20] = puVar5 + 0x278;
  *(ulong *)(puVar5 + 0x1e) = CONCAT44(uVar7,uVar7);
  puVar5[0x22] = 1;
  FUN_00200f08(puVar5 + 8,puVar5[6]);
  *(undefined8 *)(puVar5 + 0x3e) = 0x42dc000000000000;
  *(undefined8 *)(puVar5 + 0x3c) = *(undefined8 *)(puVar5 + 0x3e);
  puVar5[0x48] = 0x41a00000;
  *(undefined8 *)(puVar5 + 0x40) = 0x3f0000003f000000;
  puVar5[0x49] = 0x41a00000;
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x184);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x188);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x18c);
  puVar5[0x30] = *(undefined4 *)(DAT_0040f518 + 0x180);
  puVar5[0x31] = uVar1;
  puVar5[0x32] = uVar3;
  puVar5[0x33] = uVar4;
  puVar5[0x2c] = (int)*(undefined8 *)(puVar5 + 0x30);
  puVar5[0x2d] = (int)((ulong)*(undefined8 *)(puVar5 + 0x30) >> 0x20);
  puVar5[0x2e] = puVar5[0x32];
  puVar5[0x2f] = puVar5[0x33];
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar5[0x38] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar5[0x39] = uVar1;
  puVar5[0x3a] = uVar3;
  puVar5[0x3b] = uVar4;
  puVar5[0x34] = (int)*(undefined8 *)(puVar5 + 0x38);
  puVar5[0x35] = (int)((ulong)*(undefined8 *)(puVar5 + 0x38) >> 0x20);
  puVar5[0x36] = puVar5[0x3a];
  puVar5[0x37] = puVar5[0x3b];
  puVar5[0x46] = 1;
  *(ulong *)(puVar5 + 0x42) = CONCAT44(uVar7,uVar7);
  puVar5[0x44] = puVar5 + 0x339;
  FUN_00200f08(puVar5 + 0x2c,puVar5[7]);
  *(undefined2 *)(puVar5 + 0x659) = 0;
  puVar2 = (undefined1 *)((int)puVar5 + 0x11e3);
  *(undefined2 *)((int)puVar5 + 0x1966) = 0;
  iVar6 = 7;
  *(undefined2 *)(puVar5 + 0x65a) = 0;
  *(undefined1 *)((int)puVar5 + 0x196a) = 0;
  *(undefined1 *)((int)puVar5 + 0x196b) = 0;
  puVar5[0x65b] = 0;
  puVar5[0x65c] = 0;
  puVar5[0x65d] = 0;
  puVar5[0x2f8] = 0;
  *(undefined1 *)(puVar5 + 0x669) = 0;
  do {
    puVar2[-0x80] = 0;
    iVar6 = iVar6 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 0x100;
  } while (-1 < iVar6);
  return 1;
}


// ==== FUN_001f4770 @ 001f4770 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f4770(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 in_vf0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar14 = (int)param_2;
  if (*(short *)(iVar14 + 0x1968) == 0) {
    fVar17 = *(float *)(iVar14 + 0x1974) + param_1;
    *(float *)(iVar14 + 0x1974) = fVar17;
    if (*(char *)(iVar14 + 0x19a4) != '\0') {
      fe_FE_SECONDARYOBJECTIVETARGETS_001f5770();
      *(undefined1 *)(iVar14 + 0x19a4) = 0;
      goto LAB_001f4834;
    }
    if (fVar17 <= 1.0) goto LAB_001f4834;
    iVar15 = FUN_00122660(DAT_0040f4dc);
    iVar9 = FUN_001f5850(param_2);
    if (iVar15 == *(int *)(iVar14 + 0xbe0)) goto LAB_001f4834;
    if (iVar9 < iVar15) {
      sVar2 = *(short *)(iVar14 + 0x1968);
    }
    else {
      fe_FE_SECONDARYOBJECTIVETARGETS_001f5770(param_2);
      sVar2 = *(short *)(iVar14 + 0x1968);
    }
  }
  else {
    *(undefined1 *)(iVar14 + 0x19a4) = 0;
    *(undefined4 *)(iVar14 + 0x1974) = 0;
LAB_001f4834:
    sVar2 = *(short *)(iVar14 + 0x1968);
  }
  if (sVar2 == 0) {
    return;
  }
  iVar15 = iVar14 + 0x20;
  if (*(char *)(iVar14 + 0x196b) == '\0') {
    *(undefined1 *)(iVar14 + 0x196b) = 1;
    return;
  }
  iVar9 = iVar14 + 0xb0;
  FUN_00201108(param_1,iVar15);
  FUN_00201108(param_1,iVar9);
  *(float *)(iVar14 + 0x196c) = *(float *)(iVar14 + 0x196c) + *(float *)(DAT_0040f0e0 + 0x2013c);
  if (1.5258789e-05 < *(float *)(iVar14 + 0x98)) {
    iVar15 = *(int *)(iVar14 + 0x19a0);
    goto LAB_001f4c50;
  }
  if (*(float *)(iVar14 + 0x128) <= 1.5258789e-05) {
    auVar19 = _qmtc2(0);
    auVar20 = _sqc2(auVar19);
    uVar10 = *(undefined4 *)(DAT_0040f518 + 0x180);
    uVar11 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar12 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar13 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    iVar5 = *(int *)(iVar14 + 0x19a0);
    _qmtc2(uVar10);
    auVar19 = _vmulbc(in_vf0,auVar19);
    auVar19 = _sqc2(auVar19);
    if (iVar5 == 1) {
      FUN_001eed98(*(undefined4 *)(iVar14 + 0x1970),
                   *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),
                   *(undefined4 *)(iVar14 + (uint)*(ushort *)(iVar14 + 0x1964) * 4 + 0x9c0));
      uVar6 = 0x3e800000;
      *(int *)(iVar14 + 0x30) = (int)*(undefined8 *)(iVar14 + 0x1990);
      *(int *)(iVar14 + 0x34) = (int)((ulong)*(undefined8 *)(iVar14 + 0x1990) >> 0x20);
      *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar14 + 0x1998);
      *(undefined4 *)(iVar14 + 0x3c) = *(undefined4 *)(iVar14 + 0x199c);
      *(int *)(iVar14 + 0x20) = (int)*(undefined8 *)(iVar14 + 0x30);
      *(int *)(iVar14 + 0x24) = (int)((ulong)*(undefined8 *)(iVar14 + 0x30) >> 0x20);
      *(undefined4 *)(iVar14 + 0x28) = *(undefined4 *)(iVar14 + 0x38);
      *(undefined4 *)(iVar14 + 0x2c) = *(undefined4 *)(iVar14 + 0x3c);
      *(undefined4 *)(iVar14 + 0x94) = 0x41700000;
      *(undefined4 *)(iVar14 + 0x90) = 0x41700000;
      FUN_00201010(iVar15);
      *(undefined4 *)(iVar14 + 0x94) = 0x41700000;
      *(int *)(iVar14 + 0x30) = (int)*(undefined8 *)(iVar14 + 0x1990);
      *(int *)(iVar14 + 0x34) = (int)((ulong)*(undefined8 *)(iVar14 + 0x1990) >> 0x20);
      *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar14 + 0x1998);
      *(undefined4 *)(iVar14 + 0x3c) = *(undefined4 *)(iVar14 + 0x199c);
      *(undefined4 *)(iVar14 + 0x9c) = uVar6;
      *(undefined4 *)(iVar14 + 0x98) = uVar6;
      *(undefined4 *)(iVar14 + 0xc0) = uVar10;
      *(undefined4 *)(iVar14 + 0xc4) = uVar11;
      *(undefined4 *)(iVar14 + 200) = uVar12;
      *(undefined4 *)(iVar14 + 0xcc) = uVar13;
      *(int *)(iVar14 + 0xb0) = (int)*(undefined8 *)(iVar14 + 0xc0);
      *(int *)(iVar14 + 0xb4) = (int)((ulong)*(undefined8 *)(iVar14 + 0xc0) >> 0x20);
      *(undefined4 *)(iVar14 + 0xb8) = *(undefined4 *)(iVar14 + 200);
      *(undefined4 *)(iVar14 + 0xbc) = *(undefined4 *)(iVar14 + 0xcc);
      *(undefined4 *)(iVar14 + 0x124) = 0x41a00000;
      *(undefined4 *)(iVar14 + 0x120) = 0x41a00000;
      FUN_00201010(iVar9);
      *(undefined4 *)(iVar14 + 0xc0) = uVar10;
      *(undefined4 *)(iVar14 + 0xc4) = uVar11;
      *(undefined4 *)(iVar14 + 200) = uVar12;
      *(undefined4 *)(iVar14 + 0xcc) = uVar13;
      *(undefined4 *)(iVar14 + 0x124) = 0x41a00000;
      *(undefined4 *)(iVar14 + 300) = uVar6;
      *(undefined4 *)(iVar14 + 0x128) = uVar6;
      *(undefined4 *)(iVar14 + 0x19a0) = 2;
    }
    else {
      uStack_b0 = auVar19._0_4_;
      uStack_ac = auVar19._4_4_;
      uStack_a8 = auVar19._8_4_;
      uStack_a4 = auVar19._12_4_;
      if (iVar5 < 2) {
        if (iVar5 != 0) {
          iVar15 = *(int *)(iVar14 + 0x19a0);
          goto LAB_001f4c50;
        }
        iVar16 = iVar14 + 0xce4;
        FUN_00275260(iVar14 + (uint)*(ushort *)(iVar14 + 0x1964) * 0x100 + 0x10e4,iVar14 + 0x9e0,
                     0x100);
        FUN_00275260((uint)*(ushort *)(iVar14 + 0x1964) * 0x100 + iVar14 + 0x1164,iVar16,0x100);
        iVar5 = FUN_00275340(iVar16);
        *(float *)(iVar14 + 0x1970) = (float)iVar5 * 0.05;
        if (2.5 < (float)iVar5 * 0.05) {
          *(undefined4 *)(iVar14 + 0x1970) = 0x40200000;
        }
        iVar5 = (uint)*(ushort *)(iVar14 + 0x1964) * 0x10 + iVar14;
        auVar19 = _lqc2(*(undefined1 (*) [16])
                         ((uint)*(ushort *)(iVar14 + 0x1964) * 0x10 + iVar14 + 0x940));
        uVar18 = 0x41a00000;
        auVar19 = _sqc2(auVar19);
        *(undefined1 (*) [16])(iVar14 + 0x1980) = auVar19;
        auVar20 = _lqc2(auVar20);
        auVar20 = _vmulbc(in_vf0,auVar20);
        auVar20 = _sqc2(auVar20);
        *(undefined1 (*) [16])(iVar14 + 0x1980) = auVar20;
        uVar6 = *(undefined4 *)(iVar5 + 0x944);
        uVar7 = *(undefined4 *)(iVar5 + 0x948);
        uVar8 = *(undefined4 *)(iVar5 + 0x94c);
        *(undefined4 *)(iVar14 + 0x1990) = *(undefined4 *)(iVar5 + 0x940);
        *(undefined4 *)(iVar14 + 0x1994) = uVar6;
        *(undefined4 *)(iVar14 + 0x1998) = uVar7;
        *(undefined4 *)(iVar14 + 0x199c) = uVar8;
        uVar7 = DAT_0042beac;
        uVar6 = DAT_0042bea8;
        uVar1 = _DAT_0042bea0;
        *(int *)(iVar14 + 0x50) = (int)_DAT_0042bea0;
        *(int *)(iVar14 + 0x54) = (int)((ulong)uVar1 >> 0x20);
        *(undefined4 *)(iVar14 + 0x58) = uVar6;
        *(undefined4 *)(iVar14 + 0x5c) = uVar7;
        *(int *)(iVar14 + 0x40) = (int)*(undefined8 *)(iVar14 + 0x50);
        *(int *)(iVar14 + 0x44) = (int)((ulong)*(undefined8 *)(iVar14 + 0x50) >> 0x20);
        *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(iVar14 + 0x58);
        *(undefined4 *)(iVar14 + 0x4c) = *(undefined4 *)(iVar14 + 0x5c);
        uVar7 = DAT_0042beac;
        uVar6 = DAT_0042bea8;
        uVar1 = _DAT_0042bea0;
        *(int *)(iVar14 + 0x50) = (int)_DAT_0042bea0;
        *(int *)(iVar14 + 0x54) = (int)((ulong)uVar1 >> 0x20);
        *(undefined4 *)(iVar14 + 0x58) = uVar6;
        *(undefined4 *)(iVar14 + 0x5c) = uVar7;
        *(int *)(iVar14 + 0x30) = (int)*(undefined8 *)(iVar14 + 0x1980);
        *(int *)(iVar14 + 0x34) = (int)((ulong)*(undefined8 *)(iVar14 + 0x1980) >> 0x20);
        *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar14 + 0x1988);
        *(undefined4 *)(iVar14 + 0x3c) = *(undefined4 *)(iVar14 + 0x198c);
        *(int *)(iVar14 + 0x20) = (int)*(undefined8 *)(iVar14 + 0x30);
        *(int *)(iVar14 + 0x24) = (int)((ulong)*(undefined8 *)(iVar14 + 0x30) >> 0x20);
        *(undefined4 *)(iVar14 + 0x28) = *(undefined4 *)(iVar14 + 0x38);
        *(undefined4 *)(iVar14 + 0x2c) = *(undefined4 *)(iVar14 + 0x3c);
        *(int *)(iVar14 + 0x80) = iVar14 + 0x9e0;
        *(undefined4 *)(iVar14 + 0x94) = 0x41700000;
        *(undefined4 *)(iVar14 + 0x90) = 0x41700000;
        *(undefined4 *)(iVar14 + 0x8c) = 0;
        FUN_00201010(iVar15);
        *(undefined4 *)(iVar14 + 0x9c) = 0x3e99999a;
        *(undefined4 *)(iVar14 + 0x98) = 0x3e99999a;
        *(undefined4 *)(iVar14 + 0x94) = 0x41700000;
        *(int *)(iVar14 + 0x30) = (int)*(undefined8 *)(iVar14 + 0x1990);
        *(int *)(iVar14 + 0x34) = (int)((ulong)*(undefined8 *)(iVar14 + 0x1990) >> 0x20);
        *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar14 + 0x1998);
        *(undefined4 *)(iVar14 + 0x3c) = *(undefined4 *)(iVar14 + 0x199c);
        *(undefined4 *)(iVar14 + 0xc0) = uStack_b0;
        *(undefined4 *)(iVar14 + 0xc4) = uStack_ac;
        *(undefined4 *)(iVar14 + 200) = uStack_a8;
        *(undefined4 *)(iVar14 + 0xcc) = uStack_a4;
        *(int *)(iVar14 + 0xb0) = (int)*(undefined8 *)(iVar14 + 0xc0);
        *(int *)(iVar14 + 0xb4) = (int)((ulong)*(undefined8 *)(iVar14 + 0xc0) >> 0x20);
        *(undefined4 *)(iVar14 + 0xb8) = *(undefined4 *)(iVar14 + 200);
        *(undefined4 *)(iVar14 + 0xbc) = *(undefined4 *)(iVar14 + 0xcc);
        *(int *)(iVar14 + 0x110) = iVar16;
        *(undefined4 *)(iVar14 + 0x124) = uVar18;
        *(undefined4 *)(iVar14 + 0x120) = uVar18;
        *(undefined4 *)(iVar14 + 0x11c) = 0;
        FUN_00201010(iVar9);
        *(undefined4 *)(iVar14 + 0xc0) = uVar10;
        *(undefined4 *)(iVar14 + 0xc4) = uVar11;
        *(undefined4 *)(iVar14 + 200) = uVar12;
        *(undefined4 *)(iVar14 + 0xcc) = uVar13;
        *(undefined4 *)(iVar14 + 0x124) = uVar18;
        *(undefined4 *)(iVar14 + 300) = 0x3ecccccd;
        *(undefined4 *)(iVar14 + 0x128) = 0x3ecccccd;
        *(undefined4 *)(iVar14 + 0x196c) = 0;
        *(undefined4 *)(iVar14 + 0x19a0) = 1;
      }
      else if (iVar5 == 2) {
        *(int *)(iVar14 + 0x30) = (int)*(undefined8 *)(iVar14 + 0x1990);
        *(int *)(iVar14 + 0x34) = (int)((ulong)*(undefined8 *)(iVar14 + 0x1990) >> 0x20);
        *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar14 + 0x1998);
        *(undefined4 *)(iVar14 + 0x3c) = *(undefined4 *)(iVar14 + 0x199c);
        *(int *)(iVar14 + 0x20) = (int)*(undefined8 *)(iVar14 + 0x30);
        *(int *)(iVar14 + 0x24) = (int)((ulong)*(undefined8 *)(iVar14 + 0x30) >> 0x20);
        *(undefined4 *)(iVar14 + 0x28) = *(undefined4 *)(iVar14 + 0x38);
        *(undefined4 *)(iVar14 + 0x2c) = *(undefined4 *)(iVar14 + 0x3c);
        *(undefined4 *)(iVar14 + 0x90) = 0x41700000;
        *(undefined4 *)(iVar14 + 0x94) = 0x41700000;
        FUN_00201010(iVar15);
        *(undefined4 *)(iVar14 + 0xc0) = uVar10;
        *(undefined4 *)(iVar14 + 0xc4) = uVar11;
        *(undefined4 *)(iVar14 + 200) = uVar12;
        *(undefined4 *)(iVar14 + 0xcc) = uVar13;
        *(int *)(iVar14 + 0xb0) = (int)*(undefined8 *)(iVar14 + 0xc0);
        *(int *)(iVar14 + 0xb4) = (int)((ulong)*(undefined8 *)(iVar14 + 0xc0) >> 0x20);
        *(undefined4 *)(iVar14 + 0xb8) = *(undefined4 *)(iVar14 + 200);
        *(undefined4 *)(iVar14 + 0xbc) = *(undefined4 *)(iVar14 + 0xcc);
        *(undefined4 *)(iVar14 + 0x120) = 0x41a00000;
        *(undefined4 *)(iVar14 + 0x124) = 0x41a00000;
        FUN_00201010(iVar9);
        if (4.0 < *(float *)(iVar14 + 0x196c)) {
          *(undefined4 *)(iVar14 + 0x196c) = 0;
          *(undefined4 *)(iVar14 + 0x19a0) = 3;
          *(undefined4 *)(iVar14 + 0x9c) = 0x3e99999a;
          *(undefined4 *)(iVar14 + 0x98) = 0x3e99999a;
          *(int *)(iVar14 + 0x30) = (int)*(undefined8 *)(iVar14 + 0x1980);
          *(int *)(iVar14 + 0x34) = (int)((ulong)*(undefined8 *)(iVar14 + 0x1980) >> 0x20);
          *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar14 + 0x1988);
          *(undefined4 *)(iVar14 + 0x3c) = *(undefined4 *)(iVar14 + 0x198c);
          *(undefined4 *)(iVar14 + 300) = 0x3e99999a;
          *(undefined4 *)(iVar14 + 0xc0) = uStack_b0;
          *(undefined4 *)(iVar14 + 0xc4) = uStack_ac;
          *(undefined4 *)(iVar14 + 200) = uStack_a8;
          *(undefined4 *)(iVar14 + 0xcc) = uStack_a4;
          *(undefined4 *)(iVar14 + 0x128) = 0x3e99999a;
        }
      }
      else {
        if (iVar5 != 3) {
          iVar15 = *(int *)(iVar14 + 0x19a0);
          goto LAB_001f4c50;
        }
        uVar3 = *(short *)(iVar14 + 0x1964) + 1;
        *(undefined4 *)(iVar14 + 0x19a0) = 0;
        *(short *)(iVar14 + 0x1968) = *(short *)(iVar14 + 0x1968) + -1;
        *(undefined1 *)(iVar14 + 0x196b) = 0;
        *(ushort *)(iVar14 + 0x1964) = uVar3;
        if (7 < uVar3) {
          *(undefined2 *)(iVar14 + 0x1964) = 0;
        }
      }
    }
  }
  iVar15 = *(int *)(iVar14 + 0x19a0);
LAB_001f4c50:
  if (iVar15 != 3) {
    uVar4 = FUN_001089b0(*(undefined4 *)(iVar14 + 0x196c),*(undefined4 *)(iVar14 + 0x1970),
                         iVar14 + 0xee4,iVar14 + 0xce4,param_2);
    *(undefined2 *)(iVar14 + 0x130) = uVar4;
  }
  return;
}


// ==== FUN_001f4cb0 @ 001f4cb0 ====

undefined4 FUN_001f4cb0(int param_1)

{
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  return 1;
}


// ==== FUN_001f4d30 @ 001f4d30 ====

void FUN_001f4d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001f5950(param_1,param_3);
  if (lVar1 != 0) {
    fe_FE_PRIMARYOBJ_NEW_001f4e38(param_1,param_3,0,param_2);
  }
  return;
}


// ==== FUN_001f4d88 @ 001f4d88 ====

void FUN_001f4d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001f5950(param_1,param_3);
  if (lVar1 != 0) {
    fe_FE_PRIMARYOBJ_NEW_001f4e38(param_1,param_3,1,param_2);
  }
  return;
}


// ==== FUN_001f4de0 @ 001f4de0 ====

void FUN_001f4de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001f5950(param_1,param_3);
  if (lVar1 != 0) {
    fe_FE_PRIMARYOBJ_NEW_001f4e38(param_1,param_3,3,param_2);
  }
  return;
}


// ==== fe_FE_PRIMARYOBJ_NEW_001f4e38 @ 001f4e38 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "FE_PRIMARYOBJ_NEW"
     "LX_DESTRUCTION"
     "FE_BLACKMAILOBJ_UPDATE"
     "FE_BLACKMAILOBJ_DONE"
     "FE_INTELOBJ_UPDATE"
     "FE_INTELOBJ_DONE"
     "FE_RECONOBJ_DONE"
     "LX_ARMAMENT"
     "FE_PRIMARYOBJ_UPDATE"
     "FE_PRIMARYOBJ_DONE"
     "FE_SECONDARYOBJ_UPDATE"
     "FE_PRIMARYOBJ_FAILED" */

void fe_FE_PRIMARYOBJ_NEW_001f4e38(undefined8 param_1,int *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = *param_2;
  if (param_3 == 1) {
    bVar1 = *(byte *)(iVar2 + 0x15);
    uVar4 = 0x40dda8;
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 4) == 0) {
        if ((bVar1 & 8) == 0) {
          if ((bVar1 & 0x10) != 0) {
            uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9708);
            uVar4 = FUN_001f5418(param_1,uVar4,param_2[1],*(undefined1 *)(*param_2 + 0x14));
            FUN_001f5498(param_1,uVar4,param_4,_DAT_0042be70,0xf);
            return;
          }
          if ((bVar1 & 0x20) != 0) {
            uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9720);
            uVar4 = FUN_001f5418(param_1,uVar4,param_2[1],*(undefined1 *)(*param_2 + 0x14));
            FUN_001f5498(param_1,uVar4,param_4,_DAT_0042be80,0x14);
            return;
          }
          if (*(char *)(iVar2 + 0x14) < '\x02') {
            uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9748);
          }
          else {
            uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9730);
            uVar3 = FUN_001f5418(param_1,param_4,param_2[1],*(undefined1 *)(*param_2 + 0x14));
            FUN_001f5498(param_1,uVar4,uVar3,_DAT_0042be30,0xb);
            uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9748);
            param_4 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar2 + 0x10));
          }
          FUN_001f5498(param_1,uVar4,param_4,_DAT_0042be30,0);
          return;
        }
        uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f96d8);
        uVar3 = FUN_001f5418(param_1,uVar3,param_2[1],*(undefined1 *)(*param_2 + 0x14));
        FUN_001f5498(param_1,uVar3,param_4,_DAT_0042be50,0x13);
        uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f96f0);
      }
      else {
        uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f96a8);
        uVar3 = FUN_001f5418(param_1,uVar3,param_2[1],*(undefined1 *)(*param_2 + 0x14));
        FUN_001f5498(param_1,uVar3,param_4,_DAT_0042be50,0x13);
        uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f96c0);
      }
LAB_001f52a0:
      FUN_001f5498(param_1,uVar3,uVar4,_DAT_0042be50,0x13);
      return;
    }
    uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f9698);
    uVar3 = FUN_001f5418(param_1,uVar3,param_2[1],*(undefined1 *)(*param_2 + 0x14));
LAB_001f523c:
    FUN_001f5498(param_1,uVar4,uVar3,_DAT_0042be40,0xd);
  }
  else {
    if (param_3 < 2) {
      if (param_3 != 0) {
        return;
      }
      bVar1 = *(byte *)(iVar2 + 0x15);
      if ((bVar1 & 2) != 0) {
        return;
      }
      if ((bVar1 & 4) != 0) {
        return;
      }
      if ((bVar1 & 8) != 0) {
        return;
      }
      if ((bVar1 & 0x10) != 0) {
        return;
      }
      if ((bVar1 & 0x20) != 0) {
        return;
      }
      uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f9680);
      uVar4 = _DAT_0042be30;
    }
    else {
      if (param_3 == 2) {
        bVar1 = *(byte *)(iVar2 + 0x15);
        if ((bVar1 & 2) != 0) {
          return;
        }
        if ((bVar1 & 4) != 0) {
          return;
        }
        if ((bVar1 & 8) != 0) {
          return;
        }
        if ((bVar1 & 0x10) != 0) {
          return;
        }
        uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9778);
        FUN_001f5498(param_1,uVar4,param_4,_DAT_0042be30,0);
        return;
      }
      if (param_3 != 3) {
        return;
      }
      bVar1 = *(byte *)(iVar2 + 0x15);
      if ((bVar1 & 2) != 0) {
        uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f9698);
        uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f9760);
        uVar3 = FUN_001f5418(param_1,uVar3,param_2[1],*(undefined1 *)(*param_2 + 0x14));
        goto LAB_001f523c;
      }
      if ((bVar1 & 4) != 0) {
        uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f96a8);
        uVar3 = FUN_001f5418(param_1,uVar4,param_2[1],*(undefined1 *)(*param_2 + 0x14));
        uVar4 = param_4;
        goto LAB_001f52a0;
      }
      if ((bVar1 & 8) != 0) {
        uVar4 = FUN_001087c8(DAT_0040f4c4,0x3f96d8);
        uVar4 = FUN_001f5418(param_1,uVar4,param_2[1],*(undefined1 *)(*param_2 + 0x14));
        FUN_001f5498(param_1,uVar4,param_4,_DAT_0042be60,0x10);
        return;
      }
      if ((bVar1 & 0x10) != 0) {
        return;
      }
      if ((bVar1 & 0x20) != 0) {
        return;
      }
      uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f9730);
      param_4 = FUN_001f5418(param_1,param_4,param_2[1],*(undefined1 *)(*param_2 + 0x14));
      uVar4 = _DAT_0042be60;
    }
    FUN_001f5498(param_1,uVar3,param_4,uVar4,0xb);
  }
  return;
}


// ==== FUN_001f5418 @ 001f5418 ====

int FUN_001f5418(int param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [2];
  
  aiStack_38[0] = param_4 - param_3;
  iStack_40 = param_3;
  iStack_3c = param_4;
  FUN_00275260(param_2,auStack_240,0x80);
  FUN_003848f8(auStack_140,auStack_240,&iStack_40,&iStack_3c,aiStack_38);
  FUN_00275128(auStack_140,param_1 + 0x18e4,0x80);
  return param_1 + 0x18e4;
}


// ==== FUN_001f5498 @ 001f5498 ====

void FUN_001f5498(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(ushort *)(param_1 + 0x1968);
  uVar8 = (uint)*(ushort *)(param_1 + 0x1966);
  if (uVar3 < 8) {
    *(ushort *)(param_1 + 0x1968) = uVar3 + 1;
    *(short *)(param_1 + 0x1966) = (short)(uVar8 + 1) + (short)((int)(uVar8 + 1) >> 3) * -8;
  }
  else {
    iVar5 = (uint)*(ushort *)(param_1 + 0x1964) + (uint)uVar3;
    iVar7 = iVar5 + -1;
    iVar5 = iVar5 + 6;
    if (-1 < iVar7) {
      iVar5 = iVar7;
    }
    uVar8 = iVar7 + (iVar5 >> 3) * -8;
  }
  iVar5 = uVar8 * 0x100;
  puVar6 = (undefined8 *)(iVar5 + param_1 + 0x10e4);
  if ((((uint)param_2 | (uint)puVar6) & 7) == 0) {
    puVar9 = param_2 + 0xc;
    do {
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      *puVar6 = *param_2;
      puVar6[1] = uVar11;
      puVar6[2] = uVar12;
      puVar6[3] = uVar13;
      param_2 = param_2 + 4;
      puVar6 = puVar6 + 4;
    } while (param_2 != puVar9);
  }
  else {
    puVar9 = param_2 + 0xc;
    do {
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      *puVar6 = *param_2;
      puVar6[1] = uVar11;
      puVar6[2] = uVar12;
      puVar6[3] = uVar13;
      param_2 = param_2 + 4;
      puVar6 = puVar6 + 4;
    } while (param_2 != puVar9);
  }
  puVar10 = param_3 + 0xc;
  puVar9 = (undefined8 *)(iVar5 + param_1 + 0x1164);
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar4 = *(undefined4 *)(param_2 + 3);
  *puVar6 = *param_2;
  puVar6[1] = uVar11;
  puVar6[2] = uVar12;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  uVar1 = *(undefined1 *)((int)param_2 + 0x1d);
  uVar2 = *(undefined1 *)((int)param_2 + 0x1e);
  *(undefined1 *)((int)puVar6 + 0x1c) = *(undefined1 *)((int)param_2 + 0x1c);
  *(undefined1 *)((int)puVar6 + 0x1d) = uVar1;
  *(undefined1 *)((int)puVar6 + 0x1e) = uVar2;
  if ((((uint)param_3 | (uint)puVar9) & 7) == 0) {
    do {
      uVar13 = param_3[1];
      uVar11 = param_3[2];
      uVar12 = param_3[3];
      *puVar9 = *param_3;
      puVar9[1] = uVar13;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      param_3 = param_3 + 4;
      puVar9 = puVar9 + 4;
    } while (param_3 != puVar10);
  }
  else {
    do {
      uVar11 = param_3[1];
      uVar12 = param_3[2];
      uVar13 = param_3[3];
      *puVar9 = *param_3;
      puVar9[1] = uVar11;
      puVar9[2] = uVar12;
      puVar9[3] = uVar13;
      param_3 = param_3 + 4;
      puVar9 = puVar9 + 4;
    } while (param_3 != puVar10);
  }
  iVar7 = uVar8 * 0x10 + param_1;
  uVar11 = param_3[1];
  uVar12 = param_3[2];
  uVar4 = *(undefined4 *)(param_3 + 3);
  *puVar9 = *param_3;
  puVar9[1] = uVar11;
  puVar9[2] = uVar12;
  *(undefined4 *)(puVar9 + 3) = uVar4;
  uVar1 = *(undefined1 *)((int)param_3 + 0x1d);
  uVar2 = *(undefined1 *)((int)param_3 + 0x1e);
  *(undefined1 *)((int)puVar9 + 0x1c) = *(undefined1 *)((int)param_3 + 0x1c);
  *(undefined1 *)((int)puVar9 + 0x1d) = uVar1;
  *(undefined1 *)((int)puVar9 + 0x1e) = uVar2;
  *(undefined1 *)(param_1 + 0x1163 + iVar5) = 0;
  *(undefined1 *)(param_1 + 0x11e3 + iVar5) = 0;
  *(int *)(iVar7 + 0x940) = (int)param_4;
  *(int *)(iVar7 + 0x944) = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(iVar7 + 0x948) = in_a3_udw;
  *(undefined4 *)(iVar7 + 0x94c) = in_register_0000007c;
  *(undefined4 *)(param_1 + 0x9c0 + uVar8 * 4) = param_5;
  return;
}


// ==== fe_FE_SECONDARYOBJECTIVETARGETS_001f5770 @ 001f5770 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "FE_SECONDARYOBJECTIVETARGETS"
     "FE_SECONDARY_OBJ_TARGET_UPDATE" */

void fe_FE_SECONDARYOBJECTIVETARGETS_001f5770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  int iVar4;
  undefined1 auStack_260 [256];
  undefined1 auStack_160 [256];
  undefined4 uStack_60;
  int aiStack_5c [3];
  undefined8 extraout_v0_udw;
  
  iVar4 = (int)param_1 + 0x18e4;
  aiStack_5c[0] = FUN_001f5850();
  auVar2._0_8_ = FUN_00122660(DAT_0040f4dc);
  auVar2._8_8_ = extraout_v0_udw;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = (long)aiStack_5c[0];
  auVar3 = _pminw(auVar2,auVar3);
  auVar3 = _pextlw(0,auVar3._0_8_);
  uStack_60 = auVar3._0_4_;
  *(undefined4 *)((int)param_1 + 0xbe0) = uStack_60;
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f9790);
  FUN_00275260(uVar1,auStack_260,0x80);
  FUN_003849f0(auStack_160,auStack_260,&uStack_60,aiStack_5c);
  FUN_00275128(auStack_160,iVar4,0x80);
  uVar1 = FUN_001087c8(DAT_0040f4c4,0x3f97b0);
  FUN_001f5498(param_1,uVar1,iVar4,_DAT_0042be90,0xd);
  return;
}


// ==== FUN_001f5850 @ 001f5850 ====

int FUN_001f5850(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int aiStack_60 [4];
  
  iVar3 = DAT_0040f4d0 + 0x910;
  uVar1 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac));
  lVar2 = FUN_0012f880(iVar3,uVar1,*(undefined4 *)(DAT_0040f0e0 + 0x2014c),aiStack_60);
  if (lVar2 == 1) {
    iVar3 = 0;
  }
  else if (lVar2 < 2) {
    iVar3 = 0;
    if (lVar2 == 0) {
      iVar3 = FUN_00160aa8(DAT_0040f4d0 + 0x8f0,*(undefined1 *)(DAT_0040f0e0 + 0x2014c));
    }
  }
  else {
    iVar3 = 0;
    if (lVar2 == 2) {
      iVar3 = aiStack_60[0];
    }
  }
  return iVar3;
}


// ==== FUN_001f5928 @ 001f5928 ====

void FUN_001f5928(int param_1)

{
  if (*(int *)(DAT_0040f0e0 + 0x2014c) != 0) {
    *(undefined1 *)(param_1 + 0x19a4) = 1;
  }
  return;
}


// ==== FUN_001f5950 @ 001f5950 ====

undefined4 FUN_001f5950(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if (((*(ulong *)(*(int *)param_2 + 0x10) & 0x3e0000000000) != 0) &&
     (lVar1 = FUN_00160e10(param_2,*(undefined4 *)(DAT_0040f0e0 + 0x2014c)), lVar1 == 0)) {
    return 0;
  }
  return 1;
}


// ==== FUN_001f59c0 @ 001f59c0 ====

void FUN_001f59c0(int param_1)

{
  FUN_001f1c08();
  *(undefined1 *)(param_1 + 0x2b10) = 0;
  return;
}


// ==== FUN_001f59e8 @ 001f59e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001f59e8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  uint uVar16;
  undefined4 uVar17;
  
  iVar10 = 0;
  puVar14 = (undefined4 *)param_1;
  FUN_001f1c10(param_1,1,8,0,param_2,param_3,param_4);
  iVar12 = DAT_0040f518;
  *(undefined1 *)(puVar14 + 7) = 0xff;
  *(undefined1 *)(puVar14 + 6) = 0;
  *(undefined1 *)((int)puVar14 + 0x19) = 0;
  *(undefined1 *)((int)puVar14 + 0x1a) = 0;
  *(undefined1 *)((int)puVar14 + 0x1b) = 0;
  iVar12 = *(char *)((int)puVar14 + 0x12) * 0xa8 + iVar12 + 0x40;
  *(undefined2 *)(puVar14 + 0x845) = 0;
  *(undefined1 *)((int)puVar14 + 0x2b13) = 0;
  puVar14[0x844] = 0xffffffff;
  FUN_00275260(0x40dda8,0x438bb0,200);
  uVar16 = 0x43be0000;
  uVar9 = 0x41700000;
  uVar6 = FUN_00278ec0(iVar12,*(undefined2 *)(puVar14 + 4),*puVar14);
  puVar14[0x8d1] = uVar6;
  uVar17 = uVar9;
  uVar6 = FUN_00278ec0(iVar12,*(undefined2 *)(puVar14 + 4),*puVar14);
  puVar14[0x8d2] = uVar6;
  *(ulong *)(puVar14 + 0x8e6) = (ulong)uVar16 << 0x20;
  *(undefined8 *)(puVar14 + 0x8e4) = *(undefined8 *)(puVar14 + 0x8e6);
  puVar14[0x8f1] = uVar9;
  *(undefined8 *)(puVar14 + 0x8e8) = 0x3f0000003f000000;
  puVar14[0x8f0] = uVar9;
  uVar7 = DAT_0042beec;
  uVar6 = DAT_0042bee8;
  uVar5 = _DAT_0042bee0;
  puVar14[0x8d8] = (int)_DAT_0042bee0;
  puVar14[0x8d9] = (int)((ulong)uVar5 >> 0x20);
  puVar14[0x8da] = uVar6;
  puVar14[0x8db] = uVar7;
  puVar14[0x8d4] = (int)*(undefined8 *)(puVar14 + 0x8d8);
  puVar14[0x8d5] = (int)((ulong)*(undefined8 *)(puVar14 + 0x8d8) >> 0x20);
  puVar14[0x8d6] = puVar14[0x8da];
  puVar14[0x8d7] = puVar14[0x8db];
  uVar6 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar7 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar8 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar14[0x8e0] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar14[0x8e1] = uVar6;
  puVar14[0x8e2] = uVar7;
  puVar14[0x8e3] = uVar8;
  puVar14[0x8dc] = (int)*(undefined8 *)(puVar14 + 0x8e0);
  puVar14[0x8dd] = (int)((ulong)*(undefined8 *)(puVar14 + 0x8e0) >> 0x20);
  puVar14[0x8de] = puVar14[0x8e2];
  puVar14[0x8df] = puVar14[0x8e3];
  puVar14[0x8ee] = 1;
  puVar14[0x8ef] = 1;
  *(undefined8 *)(puVar14 + 0x8ea) = 0x3f8000003f800000;
  puVar14[0x8ec] = &DAT_00438bb0;
  FUN_00200f08(puVar14 + 0x8d4,puVar14[0x8d1]);
  *(ulong *)(puVar14 + 0x90a) = (ulong)uVar16 << 0x20;
  *(undefined8 *)(puVar14 + 0x908) = *(undefined8 *)(puVar14 + 0x90a);
  puVar14[0x915] = uVar9;
  *(undefined8 *)(puVar14 + 0x90c) = 0x3f0000003f000000;
  puVar14[0x914] = uVar9;
  uVar7 = DAT_0042bedc;
  uVar6 = DAT_0042bed8;
  uVar5 = _DAT_0042bed0;
  puVar14[0x8fc] = (int)_DAT_0042bed0;
  puVar14[0x8fd] = (int)((ulong)uVar5 >> 0x20);
  puVar14[0x8fe] = uVar6;
  puVar14[0x8ff] = uVar7;
  puVar14[0x8f8] = (int)*(undefined8 *)(puVar14 + 0x8fc);
  puVar14[0x8f9] = (int)((ulong)*(undefined8 *)(puVar14 + 0x8fc) >> 0x20);
  puVar14[0x8fa] = puVar14[0x8fe];
  puVar14[0x8fb] = puVar14[0x8ff];
  uVar6 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar7 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar8 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar14[0x904] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar14[0x905] = uVar6;
  puVar14[0x906] = uVar7;
  puVar14[0x907] = uVar8;
  puVar14[0x900] = (int)*(undefined8 *)(puVar14 + 0x904);
  puVar14[0x901] = (int)((ulong)*(undefined8 *)(puVar14 + 0x904) >> 0x20);
  puVar14[0x902] = puVar14[0x906];
  puVar14[0x903] = puVar14[0x907];
  puVar14[0x912] = 1;
  *(undefined8 *)(puVar14 + 0x90e) = 0x3f8000003f800000;
  puVar14[0x910] = &DAT_00438bb0;
  puVar14[0x913] = 2;
  FUN_00200f08(puVar14 + 0x8f8,puVar14[0x8d2]);
  uVar6 = FUN_00278ec0(iVar12,*(undefined2 *)(puVar14 + 4),*puVar14);
  puVar14[0x91c] = uVar6;
  uVar6 = FUN_00278ec0(iVar12,*(undefined2 *)(puVar14 + 4),*puVar14);
  puVar14[0x91d] = uVar6;
  *(ulong *)(puVar14 + 0x932) = (ulong)uVar16 << 0x20;
  *(undefined8 *)(puVar14 + 0x930) = *(undefined8 *)(puVar14 + 0x932);
  puVar14[0x93d] = uVar9;
  *(undefined8 *)(puVar14 + 0x934) = 0x3f0000003f000000;
  puVar14[0x93c] = uVar9;
  uVar7 = DAT_0042beec;
  uVar6 = DAT_0042bee8;
  uVar5 = _DAT_0042bee0;
  puVar14[0x924] = (int)_DAT_0042bee0;
  puVar14[0x925] = (int)((ulong)uVar5 >> 0x20);
  puVar14[0x926] = uVar6;
  puVar14[0x927] = uVar7;
  puVar14[0x920] = (int)*(undefined8 *)(puVar14 + 0x924);
  puVar14[0x921] = (int)((ulong)*(undefined8 *)(puVar14 + 0x924) >> 0x20);
  puVar14[0x922] = puVar14[0x926];
  puVar14[0x923] = puVar14[0x927];
  uVar6 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar7 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar8 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar14[0x92c] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar14[0x92d] = uVar6;
  puVar14[0x92e] = uVar7;
  puVar14[0x92f] = uVar8;
  puVar14[0x928] = (int)*(undefined8 *)(puVar14 + 0x92c);
  puVar14[0x929] = (int)((ulong)*(undefined8 *)(puVar14 + 0x92c) >> 0x20);
  puVar14[0x92a] = puVar14[0x92e];
  puVar14[0x92b] = puVar14[0x92f];
  puVar14[0x93a] = 1;
  puVar14[0x93b] = 1;
  *(undefined8 *)(puVar14 + 0x936) = 0x3f8000003f800000;
  puVar14[0x938] = &DAT_00438bb0;
  FUN_00200f08(puVar14 + 0x920,puVar14[0x91c]);
  *(ulong *)(puVar14 + 0x956) = (ulong)uVar16 << 0x20;
  *(undefined8 *)(puVar14 + 0x954) = *(undefined8 *)(puVar14 + 0x956);
  puVar14[0x961] = uVar9;
  *(undefined8 *)(puVar14 + 0x958) = 0x3f0000003f000000;
  puVar14[0x960] = uVar9;
  uVar7 = DAT_0042bedc;
  uVar6 = DAT_0042bed8;
  uVar5 = _DAT_0042bed0;
  puVar14[0x948] = (int)_DAT_0042bed0;
  puVar14[0x949] = (int)((ulong)uVar5 >> 0x20);
  puVar14[0x94a] = uVar6;
  puVar14[0x94b] = uVar7;
  puVar14[0x944] = (int)*(undefined8 *)(puVar14 + 0x948);
  puVar14[0x945] = (int)((ulong)*(undefined8 *)(puVar14 + 0x948) >> 0x20);
  puVar14[0x946] = puVar14[0x94a];
  puVar14[0x947] = puVar14[0x94b];
  uVar6 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar7 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar9 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar14[0x950] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar14[0x951] = uVar6;
  puVar14[0x952] = uVar7;
  puVar14[0x953] = uVar9;
  puVar14[0x94c] = (int)*(undefined8 *)(puVar14 + 0x950);
  puVar14[0x94d] = (int)((ulong)*(undefined8 *)(puVar14 + 0x950) >> 0x20);
  puVar14[0x94e] = puVar14[0x952];
  puVar14[0x94f] = puVar14[0x953];
  puVar14[0x95e] = 1;
  *(undefined8 *)(puVar14 + 0x95a) = 0x3f8000003f800000;
  puVar14[0x95f] = 2;
  puVar14[0x95c] = &DAT_00438bb0;
  FUN_00200f08(puVar14 + 0x944,puVar14[0x91d]);
  uVar1 = *(undefined2 *)(puVar14 + 4);
  puVar11 = puVar14 + 0x96c;
  puVar13 = puVar14 + 0x9b4;
  while( true ) {
    uVar6 = FUN_00278ec0(iVar12,uVar1,*puVar14);
    iVar3 = iVar10 + 0x968;
    puVar14[iVar3] = uVar6;
    uVar6 = FUN_00278ec0(iVar12,*(undefined2 *)(puVar14 + 4),*puVar14);
    iVar4 = iVar10 + 0x96a;
    puVar14[iVar4] = uVar6;
    fVar15 = (float)iVar10 * 20.0 + 340.0;
    puVar13[-0x2b] = uVar17;
    iVar10 = iVar10 + 1;
    *(undefined8 *)(puVar13 + -0x34) = 0x3f0000003f000000;
    puVar13[-0x2c] = uVar17;
    lVar2 = (ulong)(uint)fVar15 << 0x20;
    *(long *)(puVar13 + -0x38) = lVar2;
    *(long *)(puVar13 + -0x36) = lVar2;
    uVar7 = DAT_0042bedc;
    uVar6 = DAT_0042bed8;
    uVar5 = _DAT_0042bed0;
    uVar9 = (undefined4)_DAT_0042bed0;
    puVar13[-0x48] = uVar9;
    uVar8 = (undefined4)((ulong)uVar5 >> 0x20);
    puVar13[-0x47] = uVar8;
    puVar13[-0x46] = uVar6;
    puVar13[-0x45] = uVar7;
    puVar13[-0x44] = uVar9;
    puVar13[-0x43] = uVar8;
    puVar13[-0x42] = uVar6;
    puVar13[-0x41] = uVar7;
    uVar6 = *(undefined4 *)(DAT_0040f518 + 400);
    uVar7 = *(undefined4 *)(DAT_0040f518 + 0x194);
    uVar9 = *(undefined4 *)(DAT_0040f518 + 0x198);
    uVar8 = *(undefined4 *)(DAT_0040f518 + 0x19c);
    puVar13[-0x40] = uVar6;
    puVar13[-0x3f] = uVar7;
    puVar13[-0x3e] = uVar9;
    puVar13[-0x3d] = uVar8;
    puVar13[-0x3c] = uVar6;
    puVar13[-0x3b] = uVar7;
    puVar13[-0x3a] = uVar9;
    puVar13[-0x39] = uVar8;
    *(undefined8 *)(puVar13 + -0x32) = 0x3f8000003f800000;
    puVar13[-0x2e] = 1;
    puVar13[-0x2d] = 1;
    puVar13[-0x30] = &DAT_00438bb0;
    FUN_00200f08(puVar11,puVar14[iVar3]);
    lVar2 = (ulong)(uint)fVar15 << 0x20;
    *(long *)(puVar13 + 0x10) = lVar2;
    *(undefined8 *)(puVar13 + 0x14) = 0x3f0000003f000000;
    *(long *)(puVar13 + 0x12) = lVar2;
    puVar13[0x1d] = uVar17;
    puVar13[0x1c] = uVar17;
    uVar7 = DAT_0042bedc;
    uVar6 = DAT_0042bed8;
    uVar5 = _DAT_0042bed0;
    uVar9 = (undefined4)_DAT_0042bed0;
    *puVar13 = uVar9;
    uVar8 = (undefined4)((ulong)uVar5 >> 0x20);
    puVar13[1] = uVar8;
    puVar13[2] = uVar6;
    puVar13[3] = uVar7;
    puVar13[4] = uVar9;
    puVar13[5] = uVar8;
    puVar13[6] = uVar6;
    puVar13[7] = uVar7;
    uVar6 = *(undefined4 *)(DAT_0040f518 + 400);
    uVar7 = *(undefined4 *)(DAT_0040f518 + 0x194);
    uVar9 = *(undefined4 *)(DAT_0040f518 + 0x198);
    uVar8 = *(undefined4 *)(DAT_0040f518 + 0x19c);
    puVar13[8] = uVar6;
    puVar13[9] = uVar7;
    puVar13[10] = uVar9;
    puVar13[0xb] = uVar8;
    puVar13[0xc] = uVar6;
    puVar13[0xd] = uVar7;
    puVar13[0xe] = uVar9;
    puVar13[0xf] = uVar8;
    *(undefined8 *)(puVar13 + 0x16) = 0x3f8000003f800000;
    puVar13[0x18] = &DAT_00438bb0;
    puVar13[0x1a] = 1;
    puVar13[0x1b] = 2;
    FUN_00200f08(puVar13,puVar14[iVar4]);
    if (1 < iVar10) break;
    uVar1 = *(undefined2 *)(puVar14 + 4);
    puVar11 = puVar11 + 0x24;
    puVar13 = puVar13 + 0x24;
  }
  return 1;
}


// ==== FUN_001f5f58 @ 001f5f58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "GM_SwapWeapon1"
     "GM_SwapWeapon2"
     "GM_PickWeapon" */

void FUN_001f5f58(float param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined1 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 in_vf0 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_2a0 [200];
  undefined1 auStack_1d8 [200];
  int iStack_110;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_d0 [16];
  
  if (*(int *)(DAT_0040f4e4 + 0x5848) == 0) {
    cVar4 = -1;
  }
  else {
    cVar4 = *(char *)((uint)*(byte *)(*(int *)(DAT_0040f4e4 + 0x5848) + 0x148) * 0x18 +
                      *(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 8) + 0x10);
  }
  iVar26 = (int)param_2;
  iVar21 = iVar26 + 0x2350;
  iStack_110 = (int)cVar4;
  FUN_00201108(param_1);
  iVar24 = iVar26 + 0x2480;
  iVar22 = iVar26 + 0x23e0;
  FUN_00201108(param_1);
  FUN_00201108(param_1,iVar24);
  iVar23 = iVar26 + 0x2510;
  FUN_00201108(param_1);
  *(float *)(iVar26 + 0x20) = *(float *)(iVar26 + 0x20) + param_1;
  if (*(char *)(iVar26 + 0x2b11) == '\0') {
    *(undefined1 *)(iVar26 + 0x2b12) = 0;
  }
  *(undefined1 *)(iVar26 + 0x2b11) = 0;
  uVar15 = DAT_0042befc;
  uVar12 = DAT_0042bef8;
  uVar16 = (undefined4)_DAT_0042bef0;
  uVar13 = (undefined4)((ulong)_DAT_0042bef0 >> 0x20);
  switch(*(undefined1 *)(iVar26 + 0x1b)) {
  case 0:
    if (*(char *)(iVar26 + 0x1a) < '\x01') {
      if (*(short *)(iVar26 + 0x2114) != 0) {
        *(undefined1 *)(iVar26 + 0x1b) = 5;
      }
    }
    else {
      *(undefined1 *)(iVar26 + 0x1b) = 1;
    }
    break;
  case 1:
    iVar23 = iVar26 + 0x1f80;
    uVar16 = 0x3e99999a;
    FUN_00275398(iVar23,200,iVar26 + *(char *)(iVar26 + 0x19) * 400 + 0x28);
    *(char *)(iVar26 + 0x1a) = *(char *)(iVar26 + 0x1a) + -1;
    auVar30 = _qmtc2(0);
    *(char *)(iVar26 + 0x19) = (char)((*(char *)(iVar26 + 0x19) + 1) % 0x14);
    *(undefined8 *)(iVar26 + 0x2398) = 0x43be000000000000;
    *(undefined8 *)(iVar26 + 0x23a0) = 0x3f0000003f000000;
    *(undefined8 *)(iVar26 + 0x2390) = *(undefined8 *)(iVar26 + 0x2398);
    *(undefined8 *)(iVar26 + 0x2428) = 0x43be000000000000;
    *(undefined8 *)(iVar26 + 0x2430) = 0x3f0000003f000000;
    *(undefined8 *)(iVar26 + 0x2420) = *(undefined8 *)(iVar26 + 0x2428);
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    auVar2._8_4_ = DAT_0042bee8;
    auVar2._0_8_ = _DAT_0042bee0;
    auVar2._12_4_ = DAT_0042beec;
    _lqc2(auVar2);
    *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
    *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2388) = uVar12;
    *(undefined4 *)(iVar26 + 0x238c) = uVar15;
    auVar30 = _vmulbc(in_vf0,auVar30);
    *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
    *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
    *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    auVar30 = _sqc2(auVar30);
    *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
    *(int *)(iVar26 + 0x2380) = (int)uVar7;
    *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2388) = uVar12;
    *(undefined4 *)(iVar26 + 0x238c) = uVar15;
    *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
    *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
    *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
    *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
    *(int *)(iVar26 + 0x23b0) = iVar23;
    *(undefined4 *)(iVar26 + 0x23bc) = 1;
    FUN_00201010(iVar21);
    uVar15 = DAT_0042beec;
    uVar12 = DAT_0042bee8;
    uVar7 = _DAT_0042bee0;
    *(undefined4 *)(iVar26 + 0x23cc) = uVar16;
    *(int *)(iVar26 + 0x2360) = (int)uVar7;
    *(int *)(iVar26 + 0x2364) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2368) = uVar12;
    *(undefined4 *)(iVar26 + 0x236c) = uVar15;
    *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x23c8) = uVar16;
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
    *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2418) = uVar12;
    *(undefined4 *)(iVar26 + 0x241c) = uVar15;
    *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
    *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
    *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
    *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2418) = uVar12;
    *(undefined4 *)(iVar26 + 0x241c) = uVar15;
    uVar12 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar15 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar13 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x180);
    *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
    *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
    *(undefined4 *)(iVar26 + 0x23fc) = uVar13;
    *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
    *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
    *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
    *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
    *(int *)(iVar26 + 0x2440) = iVar23;
    *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x244c) = 2;
    FUN_00201010(iVar22);
    uVar15 = DAT_0042beec;
    uVar12 = DAT_0042bee8;
    uVar7 = _DAT_0042bee0;
    *(undefined4 *)(iVar26 + 0x245c) = uVar16;
    *(int *)(iVar26 + 0x23f0) = (int)uVar7;
    *(int *)(iVar26 + 0x23f4) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x23f8) = uVar12;
    *(undefined4 *)(iVar26 + 0x23fc) = uVar15;
    *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x2458) = uVar16;
    *(undefined1 *)(iVar26 + 0x1b) = 2;
    break;
  case 2:
    auVar30 = _qmtc2(0);
    auVar29._8_4_ = DAT_0042bee8;
    auVar29._0_8_ = _DAT_0042bee0;
    auVar29._12_4_ = DAT_0042beec;
    _lqc2(auVar29);
    auVar30 = _vmulbc(in_vf0,auVar30);
    if (*(float *)(iVar26 + 0x23c8) <= 1.5258789e-05) {
      if (*(char *)(iVar26 + 0x1a) < '\x01') {
        *(undefined4 *)(iVar26 + 0x20) = 0;
        *(undefined1 *)(iVar26 + 0x1b) = 3;
      }
      else {
        *(undefined4 *)(iVar26 + 0x2380) = uVar16;
        *(undefined4 *)(iVar26 + 0x2384) = uVar13;
        *(undefined4 *)(iVar26 + 0x2388) = uVar12;
        *(undefined4 *)(iVar26 + 0x238c) = uVar15;
        *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
        *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
        *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2388) = uVar12;
        *(undefined4 *)(iVar26 + 0x238c) = uVar15;
        uVar15 = DAT_0042beec;
        uVar12 = DAT_0042bee8;
        uVar7 = _DAT_0042bee0;
        *(int *)(iVar26 + 0x2360) = (int)_DAT_0042bee0;
        *(int *)(iVar26 + 0x2364) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2368) = uVar12;
        *(undefined4 *)(iVar26 + 0x236c) = uVar15;
        *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
        *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
        *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
        *(undefined4 *)(iVar26 + 0x23bc) = 1;
        *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
        *(int *)(iVar26 + 0x23b0) = iVar26 + 0x1f80;
        auStack_d0 = _sqc2(auVar30);
        FUN_00201010(iVar21);
        auVar30 = _lqc2(auStack_d0);
        *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
        auVar30 = _sqc2(auVar30);
        *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
        *(undefined4 *)(iVar26 + 0x23cc) = 0x3e99999a;
        *(undefined4 *)(iVar26 + 0x23c8) = 0x3e99999a;
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2418) = uVar12;
        *(undefined4 *)(iVar26 + 0x241c) = uVar15;
        *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
        *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
        *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2418) = uVar12;
        *(undefined4 *)(iVar26 + 0x241c) = uVar15;
        uVar12 = *(undefined4 *)(DAT_0040f518 + 0x184);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x188);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x18c);
        *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x180);
        *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
        *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
        *(undefined4 *)(iVar26 + 0x23fc) = uVar16;
        *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
        *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
        *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
        *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
        *(int *)(iVar26 + 0x2440) = iVar26 + 0x1f80;
        *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x244c) = 2;
        FUN_00201010(iVar22);
        uVar12 = *(undefined4 *)(DAT_0040f518 + 0x160);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar13 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        *(undefined4 *)(iVar26 + 0x245c) = 0x3dcccccd;
        *(undefined4 *)(iVar26 + 0x23f0) = uVar12;
        *(undefined4 *)(iVar26 + 0x23f4) = uVar15;
        *(undefined4 *)(iVar26 + 0x23f8) = uVar16;
        *(undefined4 *)(iVar26 + 0x23fc) = uVar13;
        *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x2458) = 0x3dcccccd;
        *(undefined1 *)(iVar26 + 0x1b) = 4;
      }
    }
    break;
  case 3:
    auVar29 = _qmtc2(0);
    auVar30._8_4_ = DAT_0042bee8;
    auVar30._0_8_ = _DAT_0042bee0;
    auVar30._12_4_ = DAT_0042beec;
    _lqc2(auVar30);
    auVar30 = _vmulbc(in_vf0,auVar29);
    if (*(char *)(iVar26 + 0x1a) < '\x01') {
      if (*(float *)(iVar26 + 0x20) <= 1.0) break;
      uVar17 = 0x3e99999a;
      *(undefined4 *)(iVar26 + 0x2380) = uVar16;
      *(undefined4 *)(iVar26 + 0x2384) = uVar13;
      *(undefined4 *)(iVar26 + 0x2388) = uVar12;
      *(undefined4 *)(iVar26 + 0x238c) = uVar15;
      *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
      *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
      *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2388) = uVar12;
      *(undefined4 *)(iVar26 + 0x238c) = uVar15;
      uVar15 = DAT_0042beec;
      uVar12 = DAT_0042bee8;
      uVar7 = _DAT_0042bee0;
      *(int *)(iVar26 + 0x2360) = (int)_DAT_0042bee0;
      *(int *)(iVar26 + 0x2364) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2368) = uVar12;
      *(undefined4 *)(iVar26 + 0x236c) = uVar15;
      *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
      *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
      *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
      *(undefined4 *)(iVar26 + 0x23bc) = 1;
      *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
      *(int *)(iVar26 + 0x23b0) = iVar26 + 0x1f80;
      auStack_d0 = _sqc2(auVar30);
      FUN_00201010(iVar21);
      auVar30 = _lqc2(auStack_d0);
      *(undefined4 *)(iVar26 + 0x23cc) = uVar17;
      *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
      auVar30 = _sqc2(auVar30);
      *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
      *(undefined4 *)(iVar26 + 0x23c8) = uVar17;
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2418) = uVar12;
      *(undefined4 *)(iVar26 + 0x241c) = uVar15;
      *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
      *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
      *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2418) = uVar12;
      *(undefined4 *)(iVar26 + 0x241c) = uVar15;
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x184);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 0x188);
      uVar16 = *(undefined4 *)(DAT_0040f518 + 0x18c);
      *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x180);
      *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
      *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
      *(undefined4 *)(iVar26 + 0x23fc) = uVar16;
      *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
      *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
      *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
      *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
      *(int *)(iVar26 + 0x2440) = iVar26 + 0x1f80;
      *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x244c) = 2;
      FUN_00201010(iVar22);
      uVar20 = 4;
    }
    else {
      uVar17 = 0x3dcccccd;
      *(undefined4 *)(iVar26 + 0x2380) = uVar16;
      *(undefined4 *)(iVar26 + 0x2384) = uVar13;
      *(undefined4 *)(iVar26 + 0x2388) = uVar12;
      *(undefined4 *)(iVar26 + 0x238c) = uVar15;
      *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
      *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
      *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2388) = uVar12;
      *(undefined4 *)(iVar26 + 0x238c) = uVar15;
      uVar15 = DAT_0042beec;
      uVar12 = DAT_0042bee8;
      uVar7 = _DAT_0042bee0;
      *(int *)(iVar26 + 0x2360) = (int)_DAT_0042bee0;
      *(int *)(iVar26 + 0x2364) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2368) = uVar12;
      *(undefined4 *)(iVar26 + 0x236c) = uVar15;
      *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
      *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
      *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
      *(undefined4 *)(iVar26 + 0x23bc) = 1;
      *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
      *(int *)(iVar26 + 0x23b0) = iVar26 + 0x1f80;
      auStack_d0 = _sqc2(auVar30);
      FUN_00201010(iVar21);
      auVar30 = _lqc2(auStack_d0);
      *(undefined4 *)(iVar26 + 0x23cc) = uVar17;
      *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
      auVar30 = _sqc2(auVar30);
      *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
      *(undefined4 *)(iVar26 + 0x23c8) = uVar17;
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2418) = uVar12;
      *(undefined4 *)(iVar26 + 0x241c) = uVar15;
      *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
      *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
      *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2418) = uVar12;
      *(undefined4 *)(iVar26 + 0x241c) = uVar15;
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x184);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 0x188);
      uVar16 = *(undefined4 *)(DAT_0040f518 + 0x18c);
      *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x180);
      *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
      *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
      *(undefined4 *)(iVar26 + 0x23fc) = uVar16;
      *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
      *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
      *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
      *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
      *(int *)(iVar26 + 0x2440) = iVar26 + 0x1f80;
      *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x244c) = 2;
      FUN_00201010(iVar22);
      uVar20 = 4;
    }
LAB_001f6eb4:
    uVar7 = *(undefined8 *)(DAT_0040f518 + 0x160);
    uVar12 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar15 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    *(undefined4 *)(iVar26 + 0x245c) = uVar17;
    *(int *)(iVar26 + 0x23f0) = (int)uVar7;
    *(int *)(iVar26 + 0x23f4) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x23f8) = uVar12;
    *(undefined4 *)(iVar26 + 0x23fc) = uVar15;
    *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x2458) = uVar17;
    *(undefined1 *)(iVar26 + 0x1b) = uVar20;
    break;
  case 4:
  case 8:
    if (*(float *)(iVar26 + 0x23c8) <= 1.5258789e-05) {
      lVar10 = FUN_00103908(DAT_0040f0e0);
      if (lVar10 == 3) {
        FUN_00103918(DAT_0040f0e0,0);
        FUN_001c2878(DAT_0040f4d8 + 0x83ca0);
        FUN_0027f818(DAT_0040f4d0);
      }
      *(undefined1 *)(iVar26 + 0x1b) = 0;
      *(undefined4 *)(iVar26 + 0x2110) = 0xffffffff;
    }
    break;
  case 5:
    iStack_dc = iVar26 + 0x1f80;
    FUN_00275398(iStack_dc,200,iVar26 + 0x2114);
    uVar12 = *(undefined4 *)(iVar26 + 0x22a4);
    *(undefined2 *)(iVar26 + 0x2114) = 0;
    *(int *)(iVar26 + 0x1f70) = (int)*(undefined8 *)(iVar26 + 0x22b0);
    *(int *)(iVar26 + 0x1f74) = (int)((ulong)*(undefined8 *)(iVar26 + 0x22b0) >> 0x20);
    *(undefined4 *)(iVar26 + 0x1f78) = *(undefined4 *)(iVar26 + 0x22b8);
    *(undefined4 *)(iVar26 + 0x1f7c) = *(undefined4 *)(iVar26 + 0x22bc);
    *(undefined4 *)(iVar26 + 0x22a4) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0x2110) = uVar12;
    lVar10 = FUN_001f7b58(param_2,uVar12);
    if (lVar10 == 0) {
      *(undefined8 *)(iVar26 + 0x2398) = 0x43be000000000000;
      *(undefined8 *)(iVar26 + 0x2390) = *(undefined8 *)(iVar26 + 0x2398);
      *(undefined8 *)(iVar26 + 0x23a0) = 0x3f0000003f000000;
      *(undefined8 *)(iVar26 + 0x2428) = 0x43be000000000000;
      *(undefined8 *)(iVar26 + 0x2430) = 0x3f0000003f000000;
      *(undefined8 *)(iVar26 + 0x2420) = *(undefined8 *)(iVar26 + 0x2428);
    }
    else {
      FUN_0027f858(DAT_0040f4d0);
      FUN_00103918(DAT_0040f0e0,3);
      FUN_001c2878(DAT_0040f4d8 + 0x83ca0);
      FUN_001c2838(0x3e99999a,DAT_003f9ae8,0x3e99999a,DAT_0040f4d8 + 0x83ca0);
      *(undefined8 *)(iVar26 + 0x2398) = 0x43b4000000000000;
      *(undefined8 *)(iVar26 + 0x23a0) = 0x3f0000003f000000;
      *(undefined8 *)(iVar26 + 0x2390) = *(undefined8 *)(iVar26 + 0x2398);
      *(undefined8 *)(iVar26 + 0x2428) = 0x43b4000000000000;
      *(undefined8 *)(iVar26 + 0x2420) = *(undefined8 *)(iVar26 + 0x2428);
      *(undefined8 *)(iVar26 + 0x2430) = 0x3f0000003f000000;
      *(undefined8 *)(iVar26 + 0x24c8) = 0x43be000000000000;
      *(undefined8 *)(iVar26 + 0x24c0) = *(undefined8 *)(iVar26 + 0x24c8);
      *(undefined8 *)(iVar26 + 0x24d0) = 0x3f0000003f000000;
      *(undefined8 *)(iVar26 + 0x2558) = 0x43be000000000000;
      *(undefined8 *)(iVar26 + 0x2560) = 0x3f0000003f000000;
      *(undefined8 *)(iVar26 + 0x2550) = *(undefined8 *)(iVar26 + 0x2558);
    }
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    _lqc2(*(undefined1 (*) [16])(iVar26 + 0x1f70));
    uVar28 = 0;
    auVar30 = _qmtc2(0);
    *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
    *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2388) = uVar12;
    *(undefined4 *)(iVar26 + 0x238c) = uVar15;
    auVar30 = _vmulbc(in_vf0,auVar30);
    uVar16 = 0x3e99999a;
    *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
    *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
    *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    auVar30 = _sqc2(auVar30);
    *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
    *(int *)(iVar26 + 0x2380) = (int)uVar7;
    *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2388) = uVar12;
    *(undefined4 *)(iVar26 + 0x238c) = uVar15;
    *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
    *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
    *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
    *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x23bc) = 1;
    *(int *)(iVar26 + 0x23b0) = iStack_dc;
    FUN_00201010(iVar21);
    *(undefined4 *)(iVar26 + 0x23cc) = uVar16;
    *(int *)(iVar26 + 0x2360) = (int)*(undefined8 *)(iVar26 + 0x1f70);
    *(int *)(iVar26 + 0x2364) = (int)((ulong)*(undefined8 *)(iVar26 + 0x1f70) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2368) = *(undefined4 *)(iVar26 + 0x1f78);
    *(undefined4 *)(iVar26 + 0x236c) = *(undefined4 *)(iVar26 + 0x1f7c);
    *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x23c8) = uVar16;
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
    *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2418) = uVar12;
    *(undefined4 *)(iVar26 + 0x241c) = uVar15;
    *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
    *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
    *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
    *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
    *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(iVar26 + 0x2418) = uVar12;
    *(undefined4 *)(iVar26 + 0x241c) = uVar15;
    uVar12 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar15 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar13 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x160);
    *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
    *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
    *(undefined4 *)(iVar26 + 0x23fc) = uVar13;
    *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
    *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
    *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
    *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
    *(undefined4 *)(iVar26 + 0x244c) = 2;
    *(int *)(iVar26 + 0x2440) = iStack_dc;
    *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
    FUN_00201010(iVar22);
    uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f0);
    uVar15 = *(undefined4 *)(DAT_0040f518 + 500);
    uVar13 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
    uVar17 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
    *(undefined4 *)(iVar26 + 0x245c) = uVar16;
    *(undefined4 *)(iVar26 + 0x23f0) = uVar12;
    *(undefined4 *)(iVar26 + 0x23f4) = uVar15;
    *(undefined4 *)(iVar26 + 0x23f8) = uVar13;
    *(undefined4 *)(iVar26 + 0x23fc) = uVar17;
    *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
    *(undefined4 *)(iVar26 + 0x2458) = uVar16;
    lVar10 = FUN_001f7b58(param_2,*(undefined4 *)(iVar26 + 0x2110));
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    uVar7 = _DAT_0042bef0;
    if (lVar10 != 0) {
      *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x24b4) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
      *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
      *(int *)(iVar26 + 0x24a0) = (int)*(undefined8 *)(iVar26 + 0x24b0);
      *(int *)(iVar26 + 0x24a4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x24b0) >> 0x20);
      *(undefined4 *)(iVar26 + 0x24a8) = *(undefined4 *)(iVar26 + 0x24b8);
      *(undefined4 *)(iVar26 + 0x24ac) = *(undefined4 *)(iVar26 + 0x24bc);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x24b4) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
      *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
      uVar7 = *(undefined8 *)(DAT_0040f518 + 0x160);
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(int *)(iVar26 + 0x2490) = (int)uVar7;
      *(int *)(iVar26 + 0x2494) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2498) = uVar12;
      *(undefined4 *)(iVar26 + 0x249c) = uVar15;
      *(int *)(iVar26 + 0x2480) = (int)*(undefined8 *)(iVar26 + 0x2490);
      *(int *)(iVar26 + 0x2484) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2490) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2488) = *(undefined4 *)(iVar26 + 0x2498);
      *(undefined4 *)(iVar26 + 0x248c) = *(undefined4 *)(iVar26 + 0x249c);
      *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x24f0) = 0x41700000;
      *(int *)(iVar26 + 0x24e0) = iVar26 + 0x22c0;
      *(undefined4 *)(iVar26 + 0x24ec) = 1;
      FUN_00201010(iVar24);
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f0);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 500);
      uVar13 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
      uVar17 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
      *(undefined4 *)(iVar26 + 0x24fc) = uVar16;
      *(undefined4 *)(iVar26 + 0x2490) = uVar12;
      *(undefined4 *)(iVar26 + 0x2494) = uVar15;
      *(undefined4 *)(iVar26 + 0x2498) = uVar13;
      *(undefined4 *)(iVar26 + 0x249c) = uVar17;
      *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x24f8) = uVar16;
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2548) = uVar12;
      *(undefined4 *)(iVar26 + 0x254c) = uVar15;
      *(int *)(iVar26 + 0x2530) = (int)*(undefined8 *)(iVar26 + 0x2540);
      *(int *)(iVar26 + 0x2534) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2540) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2538) = *(undefined4 *)(iVar26 + 0x2548);
      *(undefined4 *)(iVar26 + 0x253c) = *(undefined4 *)(iVar26 + 0x254c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2548) = uVar12;
      *(undefined4 *)(iVar26 + 0x254c) = uVar15;
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar13 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(iVar26 + 0x2520) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(iVar26 + 0x2524) = uVar12;
      *(undefined4 *)(iVar26 + 0x2528) = uVar15;
      *(undefined4 *)(iVar26 + 0x252c) = uVar13;
      *(int *)(iVar26 + 0x2510) = (int)*(undefined8 *)(iVar26 + 0x2520);
      *(int *)(iVar26 + 0x2514) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2520) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2518) = *(undefined4 *)(iVar26 + 0x2528);
      *(undefined4 *)(iVar26 + 0x251c) = *(undefined4 *)(iVar26 + 0x252c);
      *(int *)(iVar26 + 0x2570) = iVar26 + 0x22c0;
      *(undefined4 *)(iVar26 + 0x257c) = 2;
      *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x2580) = 0x41700000;
      FUN_00201010(iVar23);
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f0);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 500);
      uVar13 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
      uVar17 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
      *(undefined4 *)(iVar26 + 0x258c) = uVar16;
      *(undefined4 *)(iVar26 + 0x2520) = uVar12;
      *(undefined4 *)(iVar26 + 0x2524) = uVar15;
      *(undefined4 *)(iVar26 + 0x2528) = uVar13;
      *(undefined4 *)(iVar26 + 0x252c) = uVar17;
      *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x2588) = uVar16;
      *(undefined1 *)(iVar26 + 0x2340) = 1;
    }
    FUN_001eed98(uVar28,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),0x11);
    lVar10 = FUN_001f7b58(param_2,*(undefined4 *)(iVar26 + 0x2110));
    if (lVar10 == 0) {
      *(undefined1 *)(iVar26 + 0x1b) = 6;
    }
    else {
      *(undefined1 *)(iVar26 + 0x1b) = 7;
    }
    break;
  case 6:
    if (*(float *)(iVar26 + 0x23c8) <= 1.5258789e-05) {
      if (('\0' < *(char *)(iVar26 + 0x1a)) || (4.0 < *(float *)(iVar26 + 0x20))) {
        _lqc2(*(undefined1 (*) [16])(iVar26 + 0x1f70));
        auVar30 = _qmtc2(0);
        *(undefined4 *)(iVar26 + 0x2380) = uVar16;
        *(undefined4 *)(iVar26 + 0x2384) = uVar13;
        *(undefined4 *)(iVar26 + 0x2388) = uVar12;
        *(undefined4 *)(iVar26 + 0x238c) = uVar15;
        auVar30 = _vmulbc(in_vf0,auVar30);
        uVar17 = 0x3e99999a;
        *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
        *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
        *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2388) = uVar12;
        *(undefined4 *)(iVar26 + 0x238c) = uVar15;
        *(int *)(iVar26 + 0x2360) = (int)*(undefined8 *)(iVar26 + 0x1f70);
        *(int *)(iVar26 + 0x2364) = (int)((ulong)*(undefined8 *)(iVar26 + 0x1f70) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2368) = *(undefined4 *)(iVar26 + 0x1f78);
        *(undefined4 *)(iVar26 + 0x236c) = *(undefined4 *)(iVar26 + 0x1f7c);
        *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
        *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
        *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
        *(undefined4 *)(iVar26 + 0x23bc) = 1;
        *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
        *(int *)(iVar26 + 0x23b0) = iVar26 + 0x1f80;
        auStack_d0 = _sqc2(auVar30);
        FUN_00201010(iVar21);
        auVar30 = _lqc2(auStack_d0);
        *(undefined4 *)(iVar26 + 0x23cc) = uVar17;
        *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
        auVar30 = _sqc2(auVar30);
        *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
        *(undefined4 *)(iVar26 + 0x23c8) = uVar17;
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2418) = uVar12;
        *(undefined4 *)(iVar26 + 0x241c) = uVar15;
        *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
        *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
        *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2418) = uVar12;
        *(undefined4 *)(iVar26 + 0x241c) = uVar15;
        uVar12 = *(undefined4 *)(DAT_0040f518 + 0x184);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x188);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x18c);
        *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x180);
        *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
        *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
        *(undefined4 *)(iVar26 + 0x23fc) = uVar16;
        *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
        *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
        *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
        *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
        *(int *)(iVar26 + 0x2440) = iVar26 + 0x1f80;
        *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x244c) = 2;
        FUN_00201010(iVar22);
        uVar20 = 8;
        goto LAB_001f6eb4;
      }
    }
    else {
      *(undefined4 *)(iVar26 + 0x20) = 0;
    }
    break;
  case 7:
    fVar27 = (float)FUN_00124768(*(undefined4 *)
                                  (DAT_0040f0e0 + 0x21060 + *(char *)(iVar26 + 0x12) * 0xc),2,0);
    uVar15 = DAT_0042befc;
    uVar12 = DAT_0042bef8;
    if (fVar27 == 0.0) {
      if (*(float *)(iVar26 + 0x24f8) <= 1.5258789e-05) {
        auVar30 = _qmtc2(0x3f000000);
        _qmtc2((int)*(undefined8 *)(iVar26 + 0x22b0));
        auVar30 = _vmulbc(in_vf0,auVar30);
        auStack_100 = _sqc2(auVar30);
        uVar16 = (undefined4)((ulong)_DAT_0042bef0 >> 0x20);
        if (*(char *)(iVar26 + 0x2340) == '\0') {
          *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
          *(undefined4 *)(iVar26 + 0x24b4) = uVar16;
          *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
          *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
          uVar16 = 0x3e99999a;
          *(int *)(iVar26 + 0x24a0) = (int)*(undefined8 *)(iVar26 + 0x24b0);
          *(int *)(iVar26 + 0x24a4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x24b0) >> 0x20);
          *(undefined4 *)(iVar26 + 0x24a8) = *(undefined4 *)(iVar26 + 0x24b8);
          *(undefined4 *)(iVar26 + 0x24ac) = *(undefined4 *)(iVar26 + 0x24bc);
          uVar15 = DAT_0042befc;
          uVar12 = DAT_0042bef8;
          uVar7 = _DAT_0042bef0;
          *(undefined4 *)(iVar26 + 0x2490) = auStack_100._0_4_;
          *(undefined4 *)(iVar26 + 0x2494) = auStack_100._4_4_;
          *(undefined4 *)(iVar26 + 0x2498) = auStack_100._8_4_;
          *(undefined4 *)(iVar26 + 0x249c) = auStack_100._12_4_;
          *(int *)(iVar26 + 0x24b0) = (int)uVar7;
          *(int *)(iVar26 + 0x24b4) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
          *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
          *(int *)(iVar26 + 0x2480) = (int)*(undefined8 *)(iVar26 + 0x2490);
          *(int *)(iVar26 + 0x2484) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2490) >> 0x20);
          *(undefined4 *)(iVar26 + 0x2488) = *(undefined4 *)(iVar26 + 0x2498);
          *(undefined4 *)(iVar26 + 0x248c) = *(undefined4 *)(iVar26 + 0x249c);
          *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x24f0) = 0x41700000;
          *(int *)(iVar26 + 0x24e0) = iVar26 + 0x22c0;
          *(undefined4 *)(iVar26 + 0x24ec) = 1;
          FUN_00201010(iVar24);
          uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f0);
          uVar15 = *(undefined4 *)(DAT_0040f518 + 500);
          uVar13 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
          uVar17 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
          *(undefined4 *)(iVar26 + 0x24fc) = uVar16;
          *(undefined4 *)(iVar26 + 0x2490) = uVar12;
          *(undefined4 *)(iVar26 + 0x2494) = uVar15;
          *(undefined4 *)(iVar26 + 0x2498) = uVar13;
          *(undefined4 *)(iVar26 + 0x249c) = uVar17;
          *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x24f8) = uVar16;
          uVar15 = DAT_0042befc;
          uVar12 = DAT_0042bef8;
          uVar7 = _DAT_0042bef0;
          *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
          *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x2548) = uVar12;
          *(undefined4 *)(iVar26 + 0x254c) = uVar15;
          *(int *)(iVar26 + 0x2530) = (int)*(undefined8 *)(iVar26 + 0x2540);
          *(int *)(iVar26 + 0x2534) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2540) >> 0x20);
          *(undefined4 *)(iVar26 + 0x2538) = *(undefined4 *)(iVar26 + 0x2548);
          *(undefined4 *)(iVar26 + 0x253c) = *(undefined4 *)(iVar26 + 0x254c);
          uVar15 = DAT_0042befc;
          uVar12 = DAT_0042bef8;
          uVar7 = _DAT_0042bef0;
          *(undefined4 *)(iVar26 + 0x2520) = auStack_100._0_4_;
          *(undefined4 *)(iVar26 + 0x2524) = auStack_100._4_4_;
          *(undefined4 *)(iVar26 + 0x2528) = auStack_100._8_4_;
          *(undefined4 *)(iVar26 + 0x252c) = auStack_100._12_4_;
          *(int *)(iVar26 + 0x2540) = (int)uVar7;
          *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x2548) = uVar12;
          *(undefined4 *)(iVar26 + 0x254c) = uVar15;
          *(int *)(iVar26 + 0x2510) = (int)*(undefined8 *)(iVar26 + 0x2520);
          *(int *)(iVar26 + 0x2514) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2520) >> 0x20);
          *(undefined4 *)(iVar26 + 0x2518) = *(undefined4 *)(iVar26 + 0x2528);
          *(undefined4 *)(iVar26 + 0x251c) = *(undefined4 *)(iVar26 + 0x252c);
          *(int *)(iVar26 + 0x2570) = iVar26 + 0x22c0;
          *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x2580) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x257c) = 2;
          FUN_00201010(iVar23);
          uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f0);
          uVar15 = *(undefined4 *)(DAT_0040f518 + 500);
          uVar13 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
          uVar17 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
          *(undefined4 *)(iVar26 + 0x258c) = uVar16;
          *(undefined4 *)(iVar26 + 0x2520) = uVar12;
          *(undefined4 *)(iVar26 + 0x2524) = uVar15;
          *(undefined4 *)(iVar26 + 0x2528) = uVar13;
          *(undefined4 *)(iVar26 + 0x252c) = uVar17;
          *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x2588) = uVar16;
          *(undefined1 *)(iVar26 + 0x2340) = 1;
        }
        else {
          uVar13 = 0x3e99999a;
          *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
          *(undefined4 *)(iVar26 + 0x24b4) = uVar16;
          *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
          *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
          *(int *)(iVar26 + 0x24a0) = (int)*(undefined8 *)(iVar26 + 0x24b0);
          *(int *)(iVar26 + 0x24a4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x24b0) >> 0x20);
          *(undefined4 *)(iVar26 + 0x24a8) = *(undefined4 *)(iVar26 + 0x24b8);
          *(undefined4 *)(iVar26 + 0x24ac) = *(undefined4 *)(iVar26 + 0x24bc);
          uVar15 = DAT_0042befc;
          uVar12 = DAT_0042bef8;
          uVar7 = _DAT_0042bef0;
          *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
          *(int *)(iVar26 + 0x24b4) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
          *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
          uVar7 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
          uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
          uVar15 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
          *(int *)(iVar26 + 0x2490) = (int)uVar7;
          *(int *)(iVar26 + 0x2494) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x2498) = uVar12;
          *(undefined4 *)(iVar26 + 0x249c) = uVar15;
          *(int *)(iVar26 + 0x2480) = (int)*(undefined8 *)(iVar26 + 0x2490);
          *(int *)(iVar26 + 0x2484) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2490) >> 0x20);
          *(undefined4 *)(iVar26 + 0x2488) = *(undefined4 *)(iVar26 + 0x2498);
          *(undefined4 *)(iVar26 + 0x248c) = *(undefined4 *)(iVar26 + 0x249c);
          *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x24f0) = 0x41700000;
          *(int *)(iVar26 + 0x24e0) = iVar26 + 0x22c0;
          *(undefined4 *)(iVar26 + 0x24ec) = 1;
          FUN_00201010(iVar24);
          *(undefined4 *)(iVar26 + 0x24fc) = uVar13;
          *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x2490) = auStack_100._0_4_;
          *(undefined4 *)(iVar26 + 0x2494) = auStack_100._4_4_;
          *(undefined4 *)(iVar26 + 0x2498) = auStack_100._8_4_;
          *(undefined4 *)(iVar26 + 0x249c) = auStack_100._12_4_;
          *(undefined4 *)(iVar26 + 0x24f8) = uVar13;
          uVar15 = DAT_0042befc;
          uVar12 = DAT_0042bef8;
          uVar7 = _DAT_0042bef0;
          *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
          *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x2548) = uVar12;
          *(undefined4 *)(iVar26 + 0x254c) = uVar15;
          *(int *)(iVar26 + 0x2530) = (int)*(undefined8 *)(iVar26 + 0x2540);
          *(int *)(iVar26 + 0x2534) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2540) >> 0x20);
          *(undefined4 *)(iVar26 + 0x2538) = *(undefined4 *)(iVar26 + 0x2548);
          *(undefined4 *)(iVar26 + 0x253c) = *(undefined4 *)(iVar26 + 0x254c);
          uVar15 = DAT_0042befc;
          uVar12 = DAT_0042bef8;
          uVar7 = _DAT_0042bef0;
          *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
          *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(iVar26 + 0x2548) = uVar12;
          *(undefined4 *)(iVar26 + 0x254c) = uVar15;
          uVar12 = *(undefined4 *)(DAT_0040f518 + 500);
          uVar15 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
          uVar16 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
          *(undefined4 *)(iVar26 + 0x2520) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
          *(undefined4 *)(iVar26 + 0x2524) = uVar12;
          *(undefined4 *)(iVar26 + 0x2528) = uVar15;
          *(undefined4 *)(iVar26 + 0x252c) = uVar16;
          *(int *)(iVar26 + 0x2510) = (int)*(undefined8 *)(iVar26 + 0x2520);
          *(int *)(iVar26 + 0x2514) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2520) >> 0x20);
          *(undefined4 *)(iVar26 + 0x2518) = *(undefined4 *)(iVar26 + 0x2528);
          *(undefined4 *)(iVar26 + 0x251c) = *(undefined4 *)(iVar26 + 0x252c);
          *(int *)(iVar26 + 0x2570) = iVar26 + 0x22c0;
          *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x2580) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x257c) = 2;
          FUN_00201010(iVar23);
          *(undefined4 *)(iVar26 + 0x258c) = uVar13;
          *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
          *(undefined4 *)(iVar26 + 0x2520) = auStack_100._0_4_;
          *(undefined4 *)(iVar26 + 0x2524) = auStack_100._4_4_;
          *(undefined4 *)(iVar26 + 0x2528) = auStack_100._8_4_;
          *(undefined4 *)(iVar26 + 0x252c) = auStack_100._12_4_;
          *(undefined4 *)(iVar26 + 0x2588) = uVar13;
          *(undefined1 *)(iVar26 + 0x2340) = 0;
        }
      }
    }
    else {
      auVar30 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar26 + 0x2344) + 0x10));
      auVar29 = _qmtc2(0);
      auVar30 = _sqc2(auVar30);
      *(undefined1 (*) [16])(iVar26 + 0x1f70) = auVar30;
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      auVar30 = _vmulbc(in_vf0,auVar29);
      uVar16 = 0x3e99999a;
      *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2388) = uVar12;
      *(undefined4 *)(iVar26 + 0x238c) = uVar15;
      *(int *)(iVar26 + 0x2370) = (int)*(undefined8 *)(iVar26 + 0x2380);
      *(int *)(iVar26 + 0x2374) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2380) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2378) = *(undefined4 *)(iVar26 + 0x2388);
      *(undefined4 *)(iVar26 + 0x237c) = *(undefined4 *)(iVar26 + 0x238c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2380) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2384) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2388) = uVar12;
      *(undefined4 *)(iVar26 + 0x238c) = uVar15;
      *(int *)(iVar26 + 0x2360) = (int)*(undefined8 *)(iVar26 + 0x1f70);
      *(int *)(iVar26 + 0x2364) = (int)((ulong)*(undefined8 *)(iVar26 + 0x1f70) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2368) = *(undefined4 *)(iVar26 + 0x1f78);
      *(undefined4 *)(iVar26 + 0x236c) = *(undefined4 *)(iVar26 + 0x1f7c);
      *(int *)(iVar26 + 0x2350) = (int)*(undefined8 *)(iVar26 + 0x2360);
      *(int *)(iVar26 + 0x2354) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2360) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2358) = *(undefined4 *)(iVar26 + 0x2368);
      *(undefined4 *)(iVar26 + 0x235c) = *(undefined4 *)(iVar26 + 0x236c);
      *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x23c0) = 0x41700000;
      *(int *)(iVar26 + 0x23b0) = iVar26 + 0x1f80;
      *(undefined4 *)(iVar26 + 0x23bc) = 1;
      auStack_d0 = _sqc2(auVar30);
      FUN_00201010(iVar21);
      auVar30 = _lqc2(auStack_d0);
      *(undefined4 *)(iVar26 + 0x23cc) = uVar16;
      *(undefined4 *)(iVar26 + 0x23c4) = 0x41700000;
      auVar30 = _sqc2(auVar30);
      *(undefined1 (*) [16])(iVar26 + 0x2360) = auVar30;
      *(undefined4 *)(iVar26 + 0x23c8) = uVar16;
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2418) = uVar12;
      *(undefined4 *)(iVar26 + 0x241c) = uVar15;
      *(int *)(iVar26 + 0x2400) = (int)*(undefined8 *)(iVar26 + 0x2410);
      *(int *)(iVar26 + 0x2404) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2410) >> 0x20);
      *(undefined4 *)(iVar26 + 0x2408) = *(undefined4 *)(iVar26 + 0x2418);
      *(undefined4 *)(iVar26 + 0x240c) = *(undefined4 *)(iVar26 + 0x241c);
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      *(int *)(iVar26 + 0x2410) = (int)_DAT_0042bef0;
      *(int *)(iVar26 + 0x2414) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(iVar26 + 0x2418) = uVar12;
      *(undefined4 *)(iVar26 + 0x241c) = uVar15;
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x184);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 0x188);
      uVar13 = *(undefined4 *)(DAT_0040f518 + 0x18c);
      *(undefined4 *)(iVar26 + 0x23f0) = *(undefined4 *)(DAT_0040f518 + 0x180);
      *(undefined4 *)(iVar26 + 0x23f4) = uVar12;
      *(undefined4 *)(iVar26 + 0x23f8) = uVar15;
      *(undefined4 *)(iVar26 + 0x23fc) = uVar13;
      *(int *)(iVar26 + 0x23e0) = (int)*(undefined8 *)(iVar26 + 0x23f0);
      *(int *)(iVar26 + 0x23e4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x23f0) >> 0x20);
      *(undefined4 *)(iVar26 + 0x23e8) = *(undefined4 *)(iVar26 + 0x23f8);
      *(undefined4 *)(iVar26 + 0x23ec) = *(undefined4 *)(iVar26 + 0x23fc);
      *(undefined4 *)(iVar26 + 0x244c) = 2;
      *(int *)(iVar26 + 0x2440) = iVar26 + 0x1f80;
      *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x2450) = 0x41700000;
      FUN_00201010(iVar22);
      uVar12 = *(undefined4 *)(DAT_0040f518 + 0x160);
      uVar15 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar13 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar17 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(iVar26 + 0x245c) = uVar16;
      *(undefined4 *)(iVar26 + 0x23f0) = uVar12;
      *(undefined4 *)(iVar26 + 0x23f4) = uVar15;
      *(undefined4 *)(iVar26 + 0x23f8) = uVar13;
      *(undefined4 *)(iVar26 + 0x23fc) = uVar17;
      *(undefined4 *)(iVar26 + 0x2454) = 0x41700000;
      *(undefined4 *)(iVar26 + 0x2458) = uVar16;
      lVar10 = FUN_001f7b58(param_2,*(undefined4 *)(iVar26 + 0x2110));
      uVar15 = DAT_0042befc;
      uVar12 = DAT_0042bef8;
      uVar7 = _DAT_0042bef0;
      if (lVar10 != 0) {
        *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x24b4) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
        *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
        *(int *)(iVar26 + 0x24a0) = (int)*(undefined8 *)(iVar26 + 0x24b0);
        *(int *)(iVar26 + 0x24a4) = (int)((ulong)*(undefined8 *)(iVar26 + 0x24b0) >> 0x20);
        *(undefined4 *)(iVar26 + 0x24a8) = *(undefined4 *)(iVar26 + 0x24b8);
        *(undefined4 *)(iVar26 + 0x24ac) = *(undefined4 *)(iVar26 + 0x24bc);
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x24b0) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x24b4) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x24b8) = uVar12;
        *(undefined4 *)(iVar26 + 0x24bc) = uVar15;
        uVar7 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
        uVar12 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
        *(int *)(iVar26 + 0x2490) = (int)uVar7;
        *(int *)(iVar26 + 0x2494) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2498) = uVar12;
        *(undefined4 *)(iVar26 + 0x249c) = uVar15;
        *(int *)(iVar26 + 0x2480) = (int)*(undefined8 *)(iVar26 + 0x2490);
        *(int *)(iVar26 + 0x2484) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2490) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2488) = *(undefined4 *)(iVar26 + 0x2498);
        *(undefined4 *)(iVar26 + 0x248c) = *(undefined4 *)(iVar26 + 0x249c);
        *(undefined4 *)(iVar26 + 0x24ec) = 1;
        *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x24f0) = 0x41700000;
        *(int *)(iVar26 + 0x24e0) = iVar26 + 0x22c0;
        FUN_00201010(iVar24);
        uVar12 = *(undefined4 *)(DAT_0040f518 + 0x160);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar13 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar17 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        *(undefined4 *)(iVar26 + 0x24fc) = uVar16;
        *(undefined4 *)(iVar26 + 0x2490) = uVar12;
        *(undefined4 *)(iVar26 + 0x2494) = uVar15;
        *(undefined4 *)(iVar26 + 0x2498) = uVar13;
        *(undefined4 *)(iVar26 + 0x249c) = uVar17;
        *(undefined4 *)(iVar26 + 0x24f4) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x24f8) = uVar16;
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2548) = uVar12;
        *(undefined4 *)(iVar26 + 0x254c) = uVar15;
        *(int *)(iVar26 + 0x2530) = (int)*(undefined8 *)(iVar26 + 0x2540);
        *(int *)(iVar26 + 0x2534) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2540) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2538) = *(undefined4 *)(iVar26 + 0x2548);
        *(undefined4 *)(iVar26 + 0x253c) = *(undefined4 *)(iVar26 + 0x254c);
        uVar15 = DAT_0042befc;
        uVar12 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        *(int *)(iVar26 + 0x2540) = (int)_DAT_0042bef0;
        *(int *)(iVar26 + 0x2544) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(iVar26 + 0x2548) = uVar12;
        *(undefined4 *)(iVar26 + 0x254c) = uVar15;
        uVar12 = *(undefined4 *)(DAT_0040f518 + 500);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
        uVar13 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
        *(undefined4 *)(iVar26 + 0x2520) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
        *(undefined4 *)(iVar26 + 0x2524) = uVar12;
        *(undefined4 *)(iVar26 + 0x2528) = uVar15;
        *(undefined4 *)(iVar26 + 0x252c) = uVar13;
        *(int *)(iVar26 + 0x2510) = (int)*(undefined8 *)(iVar26 + 0x2520);
        *(int *)(iVar26 + 0x2514) = (int)((ulong)*(undefined8 *)(iVar26 + 0x2520) >> 0x20);
        *(undefined4 *)(iVar26 + 0x2518) = *(undefined4 *)(iVar26 + 0x2528);
        *(undefined4 *)(iVar26 + 0x251c) = *(undefined4 *)(iVar26 + 0x252c);
        *(int *)(iVar26 + 0x2570) = iVar26 + 0x22c0;
        *(undefined4 *)(iVar26 + 0x257c) = 2;
        *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x2580) = 0x41700000;
        FUN_00201010(iVar23);
        uVar12 = *(undefined4 *)(DAT_0040f518 + 0x160);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar13 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar17 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        *(undefined4 *)(iVar26 + 0x258c) = uVar16;
        *(undefined4 *)(iVar26 + 0x2520) = uVar12;
        *(undefined4 *)(iVar26 + 0x2524) = uVar15;
        *(undefined4 *)(iVar26 + 0x2528) = uVar13;
        *(undefined4 *)(iVar26 + 0x252c) = uVar17;
        *(undefined4 *)(iVar26 + 0x2584) = 0x41700000;
        *(undefined4 *)(iVar26 + 0x2588) = uVar16;
        *(undefined1 *)(iVar26 + 0x2340) = 0;
      }
      *(undefined1 *)(iVar26 + 0x1b) = 8;
    }
  }
  iVar21 = iVar26 + 0x25b0;
  if (1.5258789e-05 < *(float *)(iVar26 + 0x2628)) {
    iVar22 = iVar26 + 0x26d0;
    iVar23 = 1;
    do {
      FUN_00201108(param_1,iVar21);
      iVar21 = iVar21 + 0x90;
      FUN_00201108(param_1,iVar22);
      iVar23 = iVar23 + -1;
      iVar22 = iVar22 + 0x90;
    } while (-1 < iVar23);
    fVar27 = *(float *)(iVar26 + 0x24);
  }
  else {
    fVar27 = *(float *)(iVar26 + 0x24);
  }
  *(float *)(iVar26 + 0x24) = fVar27 + param_1;
  if ((long)iStack_110 == -1) {
    *(undefined1 *)(iVar26 + 0x2b10) = 0;
  }
  else {
    if (*(char *)(iVar26 + 0x2b13) == '\0') {
      pcVar1 = (char *)**(undefined4 **)(DAT_0040f4d0 + 0x2d0);
      if ((pcVar1 == (char *)0x0) || ((long)*pcVar1 != (long)iStack_110)) {
        pcVar1 = (char *)(*(undefined4 **)(DAT_0040f4d0 + 0x2d0))[1];
        if ((pcVar1 == (char *)0x0) || ((long)*pcVar1 != (long)iStack_110)) {
          iVar21 = FUN_0015d2c8(DAT_0040f4e0,iStack_110);
          if (*(undefined1 **)(DAT_0040f4d0 + 0x2d4) == (undefined1 *)0x0) {
            uVar20 = 0xff;
          }
          else {
            uVar20 = **(undefined1 **)(DAT_0040f4d0 + 0x2d4);
          }
          iVar22 = FUN_0015d2c8(DAT_0040f4e0,uVar20);
          iStack_e0 = iVar26 + 0x2980;
          iStack_d8 = iVar26 + 0x27f0;
          iVar23 = FUN_00124e00(*(undefined4 *)(DAT_0040f0e0 + 0x21060),0xd);
          if (0 < (long)*(char *)(DAT_0040f4d0 + 0x2f2)) {
            piVar19 = *(int **)(DAT_0040f4d0 + 0x2d0);
            iVar24 = 0x1000000;
            do {
              if (*piVar19 == 0) {
                bVar3 = true;
                goto LAB_001f7134;
              }
              piVar19 = piVar19 + 1;
              iVar5 = iVar24 >> 0x18;
              iVar24 = iVar24 + 0x1000000;
            } while ((long)iVar5 < (long)*(char *)(DAT_0040f4d0 + 0x2f2));
          }
          bVar3 = false;
LAB_001f7134:
          if (bVar3) {
            uVar7 = FUN_001087c8(DAT_0040f4c4,0x3f9ad8);
            FUN_00369ff0(auStack_2a0,200,uVar7,(&PTR_DAT_003bdbf8)[iVar23]);
            uVar7 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar21 + 0xc));
            FUN_00369ff0(auStack_1d8,200,uVar7);
            *(undefined4 *)(iVar26 + 0x24) = 0;
          }
          else {
            uVar7 = FUN_001087c8(DAT_0040f4c4,0x3f9ab8);
            FUN_00369ff0(auStack_2a0,200,uVar7,(&PTR_DAT_003bdbf8)[iVar23]);
            uVar7 = FUN_001087c8(DAT_0040f4c4,0x3f9ac8);
            uVar8 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar22 + 0xc));
            uVar9 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar21 + 0xc));
            FUN_00369ff0(auStack_1d8,200,uVar7,uVar8,uVar9);
            *(undefined4 *)(iVar26 + 0x24) = 0;
          }
          FUN_00275260(auStack_2a0,iStack_d8,200);
          FUN_00275260(auStack_1d8,iStack_e0,200);
          *(undefined1 *)(iVar26 + 0x2b10) = 1;
          *(char *)(iVar26 + 0x1c) = (char)iStack_110;
          if (*(undefined1 **)(DAT_0040f4d0 + 0x2d4) == (undefined1 *)0x0) {
            uVar20 = 0xff;
          }
          else {
            uVar20 = **(undefined1 **)(DAT_0040f4d0 + 0x2d4);
          }
          *(undefined1 *)(iVar26 + 0x1d) = uVar20;
        }
      }
    }
    else {
      uVar20 = 0;
      if ((long)iStack_110 == (long)*(char *)(iVar26 + 0x1c)) {
        if (*(byte **)(DAT_0040f4d0 + 0x2d4) == (byte *)0x0) {
          uVar6 = 0xff;
        }
        else {
          uVar6 = (ulong)**(byte **)(DAT_0040f4d0 + 0x2d4);
        }
        if (uVar6 == (long)*(char *)(iVar26 + 0x1d)) {
          uVar20 = 1;
        }
      }
      *(undefined1 *)(iVar26 + 0x2b10) = uVar20;
    }
    lVar10 = FUN_00103908(DAT_0040f0e0);
    if (lVar10 != 3) goto LAB_001f7278;
    *(undefined1 *)(iVar26 + 0x2b10) = 0;
  }
  *(undefined4 *)(iVar26 + 0x24) = 0;
LAB_001f7278:
  auVar30 = _qmtc2(0);
  _qmtc2((int)_DAT_0042bed0);
  auVar30 = _vmulbc(in_vf0,auVar30);
  auStack_f0 = _sqc2(auVar30);
  switch(*(undefined1 *)(iVar26 + 0x2b13)) {
  case 0:
    if ((*(char *)(iVar26 + 0x2b10) != '\0') &&
       (*(float *)(iVar26 + 0x24) <= param_1 + 0.0 + 1.5258789e-05)) {
      *(undefined1 *)(iVar26 + 0x2b13) = 1;
      uVar17 = 0x3dcccccd;
      iVar23 = 0;
      uVar12 = auStack_f0._0_4_;
      uVar15 = auStack_f0._4_4_;
      puVar25 = (undefined4 *)(iVar26 + 0x26d0);
      iVar22 = iVar26 + 0x27f0;
      uVar16 = auStack_f0._8_4_;
      uVar13 = auStack_f0._12_4_;
      iVar21 = iVar26 + 0x25b0;
      do {
        uVar11 = DAT_0042befc;
        uVar28 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        iVar23 = iVar23 + 1;
        uVar14 = (undefined4)_DAT_0042bef0;
        puVar25[-0x3c] = uVar14;
        uVar18 = (undefined4)((ulong)uVar7 >> 0x20);
        puVar25[-0x3b] = uVar18;
        puVar25[-0x3a] = uVar28;
        puVar25[-0x39] = uVar11;
        puVar25[-0x40] = uVar14;
        puVar25[-0x3f] = uVar18;
        puVar25[-0x3e] = uVar28;
        puVar25[-0x3d] = uVar11;
        uVar11 = DAT_0042befc;
        uVar28 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        puVar25[-0x30] = iVar22;
        puVar25[-0x2d] = 1;
        puVar25[-0x44] = uVar12;
        puVar25[-0x43] = uVar15;
        puVar25[-0x42] = uVar16;
        puVar25[-0x41] = uVar13;
        puVar25[-0x48] = uVar12;
        puVar25[-0x47] = uVar15;
        puVar25[-0x46] = uVar16;
        puVar25[-0x45] = uVar13;
        puVar25[-0x2b] = 0x41700000;
        puVar25[-0x2c] = 0x41700000;
        puVar25[-0x3c] = (int)uVar7;
        puVar25[-0x3b] = (int)((ulong)uVar7 >> 0x20);
        puVar25[-0x3a] = uVar28;
        puVar25[-0x39] = uVar11;
        FUN_00201010(iVar21);
        uVar11 = DAT_0042bedc;
        uVar28 = DAT_0042bed8;
        uVar7 = _DAT_0042bed0;
        puVar25[-0x2b] = 0x41700000;
        puVar25[-0x44] = (int)uVar7;
        puVar25[-0x43] = (int)((ulong)uVar7 >> 0x20);
        puVar25[-0x42] = uVar28;
        puVar25[-0x41] = uVar11;
        puVar25[-0x2a] = uVar17;
        puVar25[-0x29] = uVar17;
        uVar11 = DAT_0042befc;
        uVar28 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        uVar14 = (undefined4)_DAT_0042bef0;
        puVar25[0xc] = uVar14;
        uVar18 = (undefined4)((ulong)uVar7 >> 0x20);
        puVar25[0xd] = uVar18;
        puVar25[0xe] = uVar28;
        puVar25[0xf] = uVar11;
        puVar25[8] = uVar14;
        puVar25[9] = uVar18;
        puVar25[10] = uVar28;
        puVar25[0xb] = uVar11;
        uVar11 = DAT_0042befc;
        uVar28 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        puVar25[0xc] = (int)_DAT_0042bef0;
        puVar25[0xd] = (int)((ulong)uVar7 >> 0x20);
        puVar25[0xe] = uVar28;
        puVar25[0xf] = uVar11;
        uVar28 = *(undefined4 *)(DAT_0040f518 + 0x160);
        uVar11 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar14 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar18 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        puVar25[0x18] = iVar22;
        puVar25[0x1d] = 0x41700000;
        iVar22 = iVar22 + 400;
        puVar25[0x1c] = 0x41700000;
        puVar25[0x1b] = 2;
        *puVar25 = uVar28;
        puVar25[1] = uVar11;
        puVar25[2] = uVar14;
        puVar25[3] = uVar18;
        puVar25[4] = uVar28;
        puVar25[5] = uVar11;
        puVar25[6] = uVar14;
        puVar25[7] = uVar18;
        FUN_00201010(puVar25);
        uVar28 = *(undefined4 *)(DAT_0040f518 + 0x180);
        uVar11 = *(undefined4 *)(DAT_0040f518 + 0x184);
        uVar14 = *(undefined4 *)(DAT_0040f518 + 0x188);
        uVar18 = *(undefined4 *)(DAT_0040f518 + 0x18c);
        puVar25[0x1d] = 0x41700000;
        puVar25[4] = uVar28;
        puVar25[5] = uVar11;
        puVar25[6] = uVar14;
        puVar25[7] = uVar18;
        puVar25[0x1e] = uVar17;
        puVar25[0x1f] = uVar17;
        puVar25 = puVar25 + 0x24;
        iVar21 = iVar21 + 0x90;
      } while (iVar23 < 2);
    }
    break;
  case 1:
    if (*(float *)(iVar26 + 0x2628) <= 1.5258789e-05) {
      *(undefined1 *)(iVar26 + 0x2b13) = 2;
    }
    break;
  case 2:
    if ((*(char *)(iVar26 + 0x2b10) == '\0') || (3.0 < *(float *)(iVar26 + 0x24))) {
      *(undefined1 *)(iVar26 + 0x2b13) = 3;
      uVar12 = 0x3dcccccd;
      iVar23 = 0;
      puVar25 = (undefined4 *)(iVar26 + 0x26d0);
      iVar22 = iVar26 + 0x27f0;
      iVar21 = iVar26 + 0x25b0;
      do {
        uVar16 = DAT_0042befc;
        uVar15 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        iVar23 = iVar23 + 1;
        uVar13 = (undefined4)_DAT_0042bef0;
        puVar25[-0x3c] = uVar13;
        uVar17 = (undefined4)((ulong)uVar7 >> 0x20);
        puVar25[-0x3b] = uVar17;
        puVar25[-0x3a] = uVar15;
        puVar25[-0x39] = uVar16;
        puVar25[-0x40] = uVar13;
        puVar25[-0x3f] = uVar17;
        puVar25[-0x3e] = uVar15;
        puVar25[-0x3d] = uVar16;
        uVar16 = DAT_0042befc;
        uVar15 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        puVar25[-0x3c] = (int)_DAT_0042bef0;
        puVar25[-0x3b] = (int)((ulong)uVar7 >> 0x20);
        puVar25[-0x3a] = uVar15;
        puVar25[-0x39] = uVar16;
        uVar16 = DAT_0042bedc;
        uVar15 = DAT_0042bed8;
        uVar7 = _DAT_0042bed0;
        puVar25[-0x30] = iVar22;
        puVar25[-0x2b] = 0x41700000;
        puVar25[-0x2c] = 0x41700000;
        puVar25[-0x2d] = 1;
        uVar13 = (undefined4)uVar7;
        puVar25[-0x48] = uVar13;
        uVar17 = (undefined4)((ulong)uVar7 >> 0x20);
        puVar25[-0x47] = uVar17;
        puVar25[-0x46] = uVar15;
        puVar25[-0x45] = uVar16;
        puVar25[-0x44] = uVar13;
        puVar25[-0x43] = uVar17;
        puVar25[-0x42] = uVar15;
        puVar25[-0x41] = uVar16;
        FUN_00201010(iVar21);
        puVar25[-0x2b] = 0x41700000;
        puVar25[-0x44] = auStack_f0._0_4_;
        puVar25[-0x43] = auStack_f0._4_4_;
        puVar25[-0x42] = auStack_f0._8_4_;
        puVar25[-0x41] = auStack_f0._12_4_;
        puVar25[-0x2a] = uVar12;
        puVar25[-0x29] = uVar12;
        uVar16 = DAT_0042befc;
        uVar15 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        uVar13 = (undefined4)_DAT_0042bef0;
        puVar25[0xc] = uVar13;
        uVar17 = (undefined4)((ulong)uVar7 >> 0x20);
        puVar25[0xd] = uVar17;
        puVar25[0xe] = uVar15;
        puVar25[0xf] = uVar16;
        puVar25[8] = uVar13;
        puVar25[9] = uVar17;
        puVar25[10] = uVar15;
        puVar25[0xb] = uVar16;
        uVar16 = DAT_0042befc;
        uVar15 = DAT_0042bef8;
        uVar7 = _DAT_0042bef0;
        puVar25[0xc] = (int)_DAT_0042bef0;
        puVar25[0xd] = (int)((ulong)uVar7 >> 0x20);
        puVar25[0xe] = uVar15;
        puVar25[0xf] = uVar16;
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x180);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x184);
        uVar13 = *(undefined4 *)(DAT_0040f518 + 0x188);
        uVar17 = *(undefined4 *)(DAT_0040f518 + 0x18c);
        puVar25[0x18] = iVar22;
        puVar25[0x1d] = 0x41700000;
        iVar22 = iVar22 + 400;
        puVar25[0x1c] = 0x41700000;
        puVar25[0x1b] = 2;
        *puVar25 = uVar15;
        puVar25[1] = uVar16;
        puVar25[2] = uVar13;
        puVar25[3] = uVar17;
        puVar25[4] = uVar15;
        puVar25[5] = uVar16;
        puVar25[6] = uVar13;
        puVar25[7] = uVar17;
        FUN_00201010(puVar25);
        uVar15 = *(undefined4 *)(DAT_0040f518 + 0x160);
        uVar16 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar13 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar17 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        puVar25[0x1d] = 0x41700000;
        puVar25[4] = uVar15;
        puVar25[5] = uVar16;
        puVar25[6] = uVar13;
        puVar25[7] = uVar17;
        puVar25[0x1e] = uVar12;
        puVar25[0x1f] = uVar12;
        puVar25 = puVar25 + 0x24;
        iVar21 = iVar21 + 0x90;
      } while (iVar23 < 2);
    }
    break;
  case 3:
    if (*(float *)(iVar26 + 0x2628) <= 1.5258789e-05) {
      *(undefined1 *)(iVar26 + 0x2b13) = 4;
    }
  case 4:
    if (*(char *)(iVar26 + 0x2b10) == '\0') {
      *(undefined1 *)(iVar26 + 0x2b13) = 0;
    }
  }
  return;
}


// ==== FUN_001f75e8 @ 001f75e8 ====

undefined4 FUN_001f75e8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x25a8);
  iVar4 = 1;
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2344));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2348));
  cVar1 = *(char *)(param_1 + 0x12);
  while( true ) {
    iVar4 = iVar4 + -1;
    FUN_00278f00(cVar1 * 0xa8 + DAT_0040f518 + 0x40,*(undefined2 *)(param_1 + 0x10),puVar3[-2]);
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                 *(undefined2 *)(param_1 + 0x10),uVar2);
    if (iVar4 < 0) break;
    cVar1 = *(char *)(param_1 + 0x12);
  }
  return 1;
}


// ==== FUN_001f76e8 @ 001f76e8 ====

void FUN_001f76e8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x001f7728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003f9b70)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_001f79a8 @ 001f79a8 ====

void FUN_001f79a8(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x1a) < '\x14') {
    FUN_00275398(param_1 + *(char *)(param_1 + 0x18) * 400 + 0x28,200,param_2);
    *(char *)(param_1 + 0x1a) = *(char *)(param_1 + 0x1a) + '\x01';
    *(char *)(param_1 + 0x18) = (char)((*(char *)(param_1 + 0x18) + 1) % 0x14);
  }
  return;
}


// ==== fe_FE_HINTPROMPT_001f7a18 @ 001f7a18 ====

/* Strings referenciadas:
     "HINT_INGAME_%d"
     "FE_HINTPROMPT" */

void fe_FE_HINTPROMPT_001f7a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_a2_udw;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_b0 [32];
  
  auVar8._8_8_ = in_a2_udw;
  auVar8._0_8_ = param_3;
  auVar8 = _por(in_zero_qw,auVar8);
  sprintf(auStack_b0,0x3f9b88,(int)param_2);
  iVar7 = (int)param_1;
  *(int *)(iVar7 + 0x22a4) = (int)param_2;
  uVar3 = FUN_001087c8(DAT_0040f4c4,auStack_b0);
  FUN_00275260(uVar3,iVar7 + 0x2114,200);
  lVar4 = FUN_001f7b58(param_1,param_2);
  if (lVar4 != 0) {
    puVar5 = (ushort *)(iVar7 + 0x22c0);
    uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f9b98);
    FUN_00275260(uVar3,puVar5,0x40);
    iVar2 = FUN_00275340(puVar5);
    puVar6 = puVar5;
    if (0 < iVar2) {
      do {
        if (0xf000 < *puVar6) {
          sVar1 = FUN_00124a20(*(undefined4 *)(DAT_0040f0e0 + 0x21060),2);
          *puVar6 = sVar1 - 0x1000;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + 1;
      } while (iVar2 != 0);
    }
    FUN_0020d9c0(puVar5);
  }
  FUN_0020d9c0(iVar7 + 0x2114);
  *(int *)(iVar7 + 0x22b0) = auVar8._0_4_;
  *(int *)(iVar7 + 0x22b4) = auVar8._4_4_;
  *(int *)(iVar7 + 0x22b8) = auVar8._8_4_;
  *(int *)(iVar7 + 0x22bc) = auVar8._12_4_;
  return;
}


// ==== FUN_001f7b58 @ 001f7b58 ====

undefined4 FUN_001f7b58(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_003f9f10;
  do {
    iVar1 = iVar1 + 1;
    if (param_2 == *piVar2) {
      return 1;
    }
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  return 0;
}


// ==== FUN_001f7b90 @ 001f7b90 ====

void FUN_001f7b90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_001f1c08();
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  iVar1 = 1;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_001f7bd8 @ 001f7bd8 ====

undefined4 FUN_001f7bd8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  FUN_001f1c10(param_1,1,2,0,param_2,param_3,param_4);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0x13;
  *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  FUN_001f7c40(param_1);
  return 1;
}


// ==== FUN_001f7c40 @ 001f7c40 ====

void FUN_001f7c40(void)

{
  return;
}


// ==== FUN_001f7c48 @ 001f7c48 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "SetReticuleType" */

void FUN_001f7c48(undefined4 *param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 auStack_140 [2];
  undefined8 uStack_130;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  float fStack_e0;
  float fStack_dc;
  char *pcStack_d0;
  undefined1 auStack_c0 [16];
  
  iVar5 = *(char *)((int)param_1 + 0x12) * 0x8c0 + DAT_0040f4d0;
  iVar8 = *(int *)(iVar5 + 0x2d4);
  pcStack_d0 = *(char **)(iVar5 + 0x2d8);
  iVar5 = *(int *)(iVar8 + 4);
  if (pcStack_d0 == (char *)0x0) {
LAB_001f7e90:
    iVar6 = param_1[10];
  }
  else {
    if (*pcStack_d0 == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*pcStack_d0 * 4 + DAT_00414d54);
    }
    if (iVar6 != param_1[9]) {
      param_1[9] = iVar6;
      iVar6 = DAT_0040f544 + 0x38c9;
      uVar4 = FUN_0024f7d0(0);
      FUN_0021a7e0(0x3f9ba8,0,iVar6,1,uVar4);
    }
    iVar6 = 1;
    if (param_1[10] != 1) {
      param_1[10] = 1;
      piVar7 = param_1 + 6;
      iVar6 = 1;
      do {
        if (*piVar7 != 0) {
          FUN_00278f00(*(char *)((int)param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                       *(undefined2 *)(param_1 + 4));
        }
        iVar6 = iVar6 + -1;
        iVar1 = FUN_00278ec0(*(char *)((int)param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                             *(undefined2 *)(param_1 + 4),*param_1);
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
      } while (-1 < iVar6);
      iVar6 = param_1[10];
      fVar9 = *(float *)(*(int *)(*(int *)(pcStack_d0 + 0xe8) + 0x18) + 4);
      uStack_130 = CONCAT44((float)(&DAT_0042bf34)[iVar6 * 0x12] * fVar9,
                            (float)(&DAT_0042bf30)[iVar6 * 0x12] * fVar9);
      auStack_140[0] = uStack_130;
      FUN_00276728(param_1[6],0x42bc50,&DAT_0042bf58 + iVar6 * 0x12,auStack_140,_DAT_0042bf00,
                   *(undefined4 *)(DAT_0040f518 + 0x234),&DAT_0042bf38 + iVar6 * 0x12,
                   &DAT_0042bf40 + iVar6 * 0x12);
      iVar6 = param_1[10];
      fStack_120 = *(float *)(*(int *)(*(int *)(pcStack_d0 + 0xe8) + 0x18) + 4);
      fStack_11c = (float)(&DAT_0042bf34)[iVar6 * 0x12] * fStack_120;
      fStack_120 = (float)(&DAT_0042bf30)[iVar6 * 0x12] * fStack_120;
      auStack_140[0] = CONCAT44(fStack_11c,fStack_120);
      FUN_00276728(param_1[7],0x42bc50,&DAT_0042bf58 + iVar6 * 0x12,auStack_140,_DAT_0042bf00,
                   *(undefined4 *)(DAT_0040f518 + 0x234),&DAT_0042bf48 + iVar6 * 0x12,
                   &DAT_0042bf50 + iVar6 * 0x12);
      goto LAB_001f7e90;
    }
  }
  if (iVar6 < 1) {
    return;
  }
  if (iVar5 == 0) {
    if (*(char *)(iVar8 + 0x10c) != '\0') {
LAB_001f7efc:
      auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f518 + 400));
      goto LAB_001f7f14;
    }
LAB_001f7f08:
    pauVar2 = (undefined1 (*) [16])&DAT_0042bf00;
  }
  else {
    if (*(int *)(iVar5 + 0xc4) != 1) {
      if (*(char *)(iVar8 + 0x10c) != '\0') goto LAB_001f7efc;
      if (*(char *)(iVar8 + 0x10d) != '\0') {
        auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f518 + 0x220));
        goto LAB_001f7f14;
      }
      goto LAB_001f7f08;
    }
    if (*(int *)(iVar5 + 0x3a4) == 0) {
      pauVar2 = (undefined1 (*) [16])&DAT_0042bf10;
    }
    else {
      pauVar2 = (undefined1 (*) [16])&DAT_0042bf20;
    }
  }
  auVar11 = _lqc2(*pauVar2);
LAB_001f7f14:
  _vmove(auVar11);
  auVar11 = _qmtc2(0x3f800000);
  auVar12 = _vmulbc(in_vf0,auVar11);
  auVar11 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1[6] + 0x10) = auVar11;
  iVar6 = 0;
  piVar7 = param_1 + 6;
  iVar5 = 0;
  iVar8 = 1;
  auVar11 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1[7] + 0x10) = auVar11;
  do {
    _vmove(auVar12);
    iVar1 = param_1[10] * 0x48 + iVar5;
    if (((param_1[10] == 6) && (*(char *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0x105) != '\0')) ||
       (param_1[9] == 3)) {
      fVar9 = 0.0;
      _vmove(auVar12);
    }
    else {
      fVar9 = *(float *)(&DAT_0042bf64 + iVar1) +
              (float)param_1[0xb] *
              (*(float *)(&DAT_0042bf68 + iVar1) - *(float *)(&DAT_0042bf64 + iVar1));
    }
    auVar11 = _qmtc2(fVar9);
    auVar11 = _vmulbc(in_vf0,auVar11);
    iVar5 = iVar5 + 0xc;
    auVar11 = _sqc2(auVar11);
    *(undefined1 (*) [16])(*piVar7 + 0x10) = auVar11;
    iVar8 = iVar8 + -1;
    iVar1 = param_1[10];
    iVar3 = iVar1 * 0x48 + iVar6;
    iVar6 = iVar6 + 0xc;
    fStack_e0 = *(float *)(*(int *)(*(int *)(pcStack_d0 + 0xe8) + 0x18) + 4);
    fStack_dc = (float)(&DAT_0042bf34)[iVar1 * 0x12] * fStack_e0;
    fStack_e0 = (float)(&DAT_0042bf30)[iVar1 * 0x12] * fStack_e0;
    uStack_130 = CONCAT44(fStack_dc,fStack_e0);
    auStack_140[0] = uStack_130;
    fVar9 = fStack_dc * *(float *)(&DAT_0042bf60 + iVar3);
    fVar10 = fStack_e0 * *(float *)(&DAT_0042bf60 + iVar3);
    uStack_110 = CONCAT44(fVar9,fVar10);
    uStack_130 = uStack_110;
    fVar10 = fVar10 - fStack_e0;
    fVar9 = fVar9 - fStack_dc;
    uStack_f0 = CONCAT44(fVar9,fVar10);
    fVar10 = fVar10 * (float)param_1[0xb];
    fVar9 = fVar9 * (float)param_1[0xb];
    uStack_100 = CONCAT44(fVar9,fVar10);
    fStack_e0 = fStack_e0 + fVar10;
    fStack_dc = fStack_dc + fVar9;
    uStack_110 = CONCAT44(fStack_dc,fStack_e0);
    *(undefined8 *)(*piVar7 + 8) = uStack_110;
    iVar1 = *piVar7;
    auStack_c0 = _sqc2(auVar12);
    piVar7 = piVar7 + 1;
    FUN_002765b0(iVar1,0x42bc50,&DAT_0042bf58 + param_1[10] * 0x12);
    auVar12 = _lqc2(auStack_c0);
  } while (-1 < iVar8);
  return;
}


// ==== FUN_001f8138 @ 001f8138 ====

undefined4 FUN_001f8138(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x18);
  iVar3 = 0x1000000;
  do {
    if (*piVar2 != 0) {
      FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                   *(undefined2 *)(param_1 + 0x10));
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 2);
  return 1;
}


// ==== FUN_001f81d8 @ 001f81d8 ====

void FUN_001f81d8(int param_1)

{
  FUN_001f1c08();
  FUN_00200a68(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


// ==== FUN_001f8208 @ 001f8208 ====

undefined4 FUN_001f8208(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  FUN_001f1c10(param_1,1,1,0,param_2,param_3,param_4);
  puVar4 = (undefined4 *)param_1;
  puVar4[0x2a] = 0;
  puVar4[0x29] = 1;
  uVar1 = FUN_00278ec0(*(char *)((int)puVar4 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
                       *(undefined2 *)(puVar4 + 4),*puVar4);
  puVar4[0x28] = uVar1;
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x184);
  uVar2 = *(undefined4 *)(DAT_0040f518 + 0x188);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x18c);
  puVar4[0xc] = *(undefined4 *)(DAT_0040f518 + 0x180);
  puVar4[0xd] = uVar1;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = uVar3;
  puVar4[8] = (int)*(undefined8 *)(puVar4 + 0xc);
  puVar4[9] = (int)((ulong)*(undefined8 *)(puVar4 + 0xc) >> 0x20);
  puVar4[10] = puVar4[0xe];
  puVar4[0xb] = puVar4[0xf];
  *(undefined8 *)(puVar4 + 0x18) = DAT_0042c178;
  *(undefined8 *)(puVar4 + 0x16) = *(undefined8 *)(puVar4 + 0x18);
  puVar4[0x23] = *(undefined4 *)(DAT_0040f518 + 0x234);
  *(undefined8 *)(puVar4 + 0x1a) = DAT_0042c188;
  *(undefined8 *)(puVar4 + 0x1c) = DAT_0042c190;
  *(undefined8 *)(puVar4 + 0x12) = DAT_0042c170;
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar4 + 0x12);
  *(undefined8 *)(puVar4 + 0x14) = 0x3f0000003f000000;
  FUN_00200a78(puVar4 + 8,puVar4[0x28]);
  return 1;
}


// ==== FUN_001f8318 @ 001f8318 ====

void FUN_001f8318(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00200bb0(*(undefined4 *)(DAT_0040f0e0 + 0x2013c),param_1 + 0x20);
  if (0.0 < *(float *)(param_1 + 0x7c)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(DAT_0040f518 + 0x160);
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
LAB_001f83e0:
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(DAT_0040f518 + 0x160);
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      goto LAB_001f83e0;
    }
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    uVar2 = *(undefined4 *)(DAT_0040f518 + 0x180);
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    goto LAB_001f83e0;
  }
  FUN_00200ad8(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 1) {
    uVar2 = 0x3e99999a;
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_0040f518 + 0x180);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 0xa8) = 2;
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return;
      }
      uVar2 = 0x3c23d70a;
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x160);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar6 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_1 + 0x80) = 0x3c23d70a;
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      *(undefined4 *)(param_1 + 0x38) = uVar5;
      *(undefined4 *)(param_1 + 0x3c) = uVar6;
      goto LAB_001f84cc;
    }
    if (iVar1 == 2) {
      uVar2 = *(undefined4 *)(DAT_0040f518 + 0x184);
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x188);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x18c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_0040f518 + 0x180);
      *(undefined4 *)(param_1 + 0x34) = uVar2;
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      if (*(int *)(param_1 + 0xa4) == 0) {
        return;
      }
      uVar2 = 0x40a00000;
      *(undefined4 *)(param_1 + 0xa8) = 3;
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      uVar2 = 0x3e99999a;
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_1 + 0x34) = uVar3;
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar2;
LAB_001f84cc:
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}


// ==== FUN_001f84e8 @ 001f84e8 ====

undefined4 FUN_001f84e8(int param_1)

{
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xa0));
  return 1;
}


// ==== FUN_001f8528 @ 001f8528 ====

void FUN_001f8528(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xa0) != 0) && (param_2 != *(int *)(param_1 + 0xa4))) {
    *(int *)(param_1 + 0xa4) = param_2;
    *(undefined4 *)(param_1 + 0xa8) = 1;
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x68) = DAT_0042c198;
      *(undefined8 *)(param_1 + 0x70) = DAT_0042c1a0;
      uVar1 = DAT_0042c180;
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = DAT_0042c188;
      *(undefined8 *)(param_1 + 0x70) = DAT_0042c190;
      uVar1 = DAT_0042c178;
    }
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
    FUN_00200ad8(param_1 + 0x20);
  }
  return;
}


// ==== FUN_001f85d0 @ 001f85d0 ====

void FUN_001f85d0(int param_1)

{
  FUN_001f1c08();
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_00200f00(param_1 + 0x120);
  FUN_00200a68(param_1 + 0x1c0);
  return;
}


// ==== FUN_001f8608 @ 001f8608 ====

/* Strings referenciadas:
     "HUD_FIRERATE_NONE" */

undefined4 FUN_001f8608(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  FUN_001f1c10(param_1,2,2,0,param_2,param_3,param_4);
  puVar6 = (undefined4 *)param_1;
  puVar6[0x90] = 0;
  puVar6[0x6e] = 3;
  iVar5 = *(char *)((int)puVar6 + 0x12) * 0xa8 + DAT_0040f518 + 0x40;
  uVar1 = FUN_00278ec0(iVar5,*(undefined2 *)(puVar6 + 4),*puVar6);
  puVar6[0x6f] = uVar1;
  uVar1 = FUN_00278ec0(iVar5,*(short *)(puVar6 + 4) + 1,*puVar6);
  puVar6[0x6c] = uVar1;
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
  puVar6[0x74] = *(undefined4 *)(DAT_0040f518 + 0x1a0);
  puVar6[0x75] = uVar1;
  puVar6[0x76] = uVar3;
  puVar6[0x77] = uVar4;
  puVar6[0x70] = (int)*(undefined8 *)(puVar6 + 0x74);
  puVar6[0x71] = (int)((ulong)*(undefined8 *)(puVar6 + 0x74) >> 0x20);
  puVar6[0x72] = puVar6[0x76];
  puVar6[0x73] = puVar6[0x77];
  *(undefined8 *)(puVar6 + 0x80) = DAT_0042c1d0;
  *(undefined8 *)(puVar6 + 0x7e) = *(undefined8 *)(puVar6 + 0x80);
  puVar6[0x8b] = *(undefined4 *)(DAT_0040f518 + 0x234);
  *(undefined8 *)(puVar6 + 0x82) = DAT_0042c1c0;
  *(undefined8 *)(puVar6 + 0x84) = DAT_0042c1c8;
  *(undefined8 *)(puVar6 + 0x7a) = DAT_0042c1a8;
  *(undefined8 *)(puVar6 + 0x78) = *(undefined8 *)(puVar6 + 0x7a);
  *(undefined8 *)(puVar6 + 0x7c) = DAT_0042c1b8;
  FUN_00200a78(puVar6 + 0x70,puVar6[0x6f]);
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x184);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x188);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x18c);
  puVar6[0x4c] = *(undefined4 *)(DAT_0040f518 + 0x180);
  puVar6[0x4d] = uVar1;
  puVar6[0x4e] = uVar3;
  puVar6[0x4f] = uVar4;
  puVar6[0x48] = (int)*(undefined8 *)(puVar6 + 0x4c);
  puVar6[0x49] = (int)((ulong)*(undefined8 *)(puVar6 + 0x4c) >> 0x20);
  puVar6[0x4a] = puVar6[0x4e];
  puVar6[0x4b] = puVar6[0x4f];
  uVar1 = *(undefined4 *)(DAT_0040f518 + 0x194);
  uVar3 = *(undefined4 *)(DAT_0040f518 + 0x198);
  uVar4 = *(undefined4 *)(DAT_0040f518 + 0x19c);
  puVar6[0x54] = *(undefined4 *)(DAT_0040f518 + 400);
  puVar6[0x55] = uVar1;
  puVar6[0x56] = uVar3;
  puVar6[0x57] = uVar4;
  puVar6[100] = 0x41a00000;
  puVar6[0x65] = 0x41a00000;
  puVar6[0x50] = (int)*(undefined8 *)(puVar6 + 0x54);
  puVar6[0x51] = (int)((ulong)*(undefined8 *)(puVar6 + 0x54) >> 0x20);
  puVar6[0x52] = puVar6[0x56];
  puVar6[0x53] = puVar6[0x57];
  *(undefined8 *)(puVar6 + 0x5a) = DAT_0042c1b0;
  *(undefined8 *)(puVar6 + 0x58) = *(undefined8 *)(puVar6 + 0x5a);
  *(undefined8 *)(puVar6 + 0x5c) = DAT_0042c1b8;
  puVar6[0x62] = 1;
  *(undefined8 *)(puVar6 + 0x5e) = 0x3f8000003f800000;
  uVar2 = FUN_001087c8(DAT_0040f4c4,(&PTR_s_HUD_FIRERATE_FULLAUTO_003bdc50)[puVar6[0x6e]]);
  FUN_00275260(uVar2,puVar6 + 6,0x80);
  puVar6[0x60] = puVar6 + 6;
  FUN_00200f08(puVar6 + 0x48,puVar6[0x6c]);
  return 1;
}


// ==== FUN_001f8808 @ 001f8808 ====

void FUN_001f8808(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar8 = param_2 + 0x120;
  *(float *)(param_2 + 0x1b4) = *(float *)(param_2 + 0x1b4) + *(float *)(DAT_0040f0e0 + 0x2013c);
  FUN_00200bb0(param_2 + 0x1c0);
  FUN_00201108(param_1,iVar8);
  if (0.0 < *(float *)(param_2 + 0x21c)) {
    return;
  }
  if (1.5258789e-05 < *(float *)(param_2 + 0x198)) {
    return;
  }
  uVar2 = FUN_001087c8(DAT_0040f4c4,
                       (&PTR_s_HUD_FIRERATE_FULLAUTO_003bdc50)[*(int *)(param_2 + 0x1b8)]);
  FUN_00275260(uVar2,param_2 + 0x18,0x80);
  *(int *)(param_2 + 0x180) = param_2 + 0x18;
  *(undefined4 *)(param_2 + 0x18c) = 0;
  FUN_00201010(iVar8);
  iVar1 = *(int *)(param_2 + 0x240);
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return;
      }
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_2 + 0x134) = uVar3;
      *(undefined4 *)(param_2 + 0x138) = uVar4;
      *(undefined4 *)(param_2 + 0x13c) = uVar5;
      *(int *)(param_2 + 0x120) = (int)*(undefined8 *)(param_2 + 0x130);
      *(int *)(param_2 + 0x124) = (int)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
      *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x138);
      *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x13c);
      FUN_00201010(iVar8);
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_2 + 0x1d4) = uVar3;
      *(undefined4 *)(param_2 + 0x1d8) = uVar4;
      *(undefined4 *)(param_2 + 0x1dc) = uVar5;
      *(int *)(param_2 + 0x1c0) = (int)*(undefined8 *)(param_2 + 0x1d0);
      *(int *)(param_2 + 0x1c4) = (int)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
      *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
      *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
      *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
      *(undefined8 *)(param_2 + 0x208) = DAT_0042c1f0;
      *(undefined8 *)(param_2 + 0x210) = DAT_0042c1f8;
      *(undefined8 *)(param_2 + 0x1e8) = DAT_0042c1a8;
      *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e8);
      *(undefined8 *)(param_2 + 0x1f0) = DAT_0042c1b8;
      FUN_00200ad8(param_2 + 0x1c0);
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x160);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar6 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_2 + 0x19c) = 0x3e4ccccd;
      *(undefined4 *)(param_2 + 0x130) = uVar3;
      *(undefined4 *)(param_2 + 0x134) = uVar4;
      *(undefined4 *)(param_2 + 0x138) = uVar5;
      *(undefined4 *)(param_2 + 0x13c) = uVar6;
      *(undefined4 *)(param_2 + 0x198) = 0x3e4ccccd;
      iVar8 = *(int *)(param_2 + 0x1b8);
      if (iVar8 == 1) {
LAB_001f8f38:
        uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
        *(undefined4 *)(param_2 + 0x1d4) = uVar3;
        *(undefined4 *)(param_2 + 0x1d8) = uVar4;
        *(undefined4 *)(param_2 + 0x1dc) = uVar5;
        *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
      }
      else {
        if (iVar8 < 2) {
          if (iVar8 == 0) goto LAB_001f8f38;
        }
        else if (iVar8 == 2) goto LAB_001f8f38;
        uVar2 = *(undefined8 *)(DAT_0040f518 + 0x160);
        uVar3 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar4 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        *(int *)(param_2 + 0x1d0) = (int)uVar2;
        *(int *)(param_2 + 0x1d4) = (int)((ulong)uVar2 >> 0x20);
        *(undefined4 *)(param_2 + 0x1d8) = uVar3;
        *(undefined4 *)(param_2 + 0x1dc) = uVar4;
        *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
      }
      *(undefined4 *)(param_2 + 0x220) = 0x3e4ccccd;
      *(undefined4 *)(param_2 + 0x21c) = 0x3e4ccccd;
      *(undefined4 *)(param_2 + 0x240) = 0;
      return;
    }
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x180);
    *(undefined4 *)(param_2 + 0x134) = uVar3;
    *(undefined4 *)(param_2 + 0x138) = uVar4;
    *(undefined4 *)(param_2 + 0x13c) = uVar5;
    iVar8 = *(int *)(param_2 + 0x1b8);
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_2 + 0x134);
    *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x13c);
    if (iVar8 == 1) {
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
      puVar7 = &DAT_0042c1d8;
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x1a0);
      *(undefined4 *)(param_2 + 0x1d4) = uVar3;
      *(undefined4 *)(param_2 + 0x1d8) = uVar4;
      *(undefined4 *)(param_2 + 0x1dc) = uVar5;
      *(int *)(param_2 + 0x1c0) = (int)*(undefined8 *)(param_2 + 0x1d0);
      *(int *)(param_2 + 0x1c4) = (int)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
      *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
      *(undefined8 *)(param_2 + 0x200) = DAT_0042c1e8;
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
      *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
      uVar2 = DAT_0042c1d8;
LAB_001f8df8:
      *(undefined8 *)(param_2 + 0x208) = uVar2;
      *(undefined8 *)(param_2 + 0x210) = puVar7[1];
      *(undefined8 *)(param_2 + 0x1e8) = DAT_0042c1a8;
      *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e8);
      *(undefined8 *)(param_2 + 0x1f0) = DAT_0042c1b8;
    }
    else {
      if (iVar8 < 2) {
        if (iVar8 == 0) {
          uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
          uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
          uVar5 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
          puVar7 = &DAT_0042c1c0;
          *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x1a0);
          *(undefined4 *)(param_2 + 0x1d4) = uVar3;
          *(undefined4 *)(param_2 + 0x1d8) = uVar4;
          *(undefined4 *)(param_2 + 0x1dc) = uVar5;
          *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_2 + 0x1d0);
          *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_2 + 0x1d4);
          *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
          *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
          *(undefined8 *)(param_2 + 0x200) = DAT_0042c1d0;
          *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
          *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
          uVar2 = DAT_0042c1c0;
          goto LAB_001f8df8;
        }
      }
      else if (iVar8 == 2) {
        uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
        uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
        uVar5 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
        puVar7 = &DAT_0042c1f0;
        *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x1a0);
        *(undefined4 *)(param_2 + 0x1d4) = uVar3;
        *(undefined4 *)(param_2 + 0x1d8) = uVar4;
        *(undefined4 *)(param_2 + 0x1dc) = uVar5;
        *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_2 + 0x1d0);
        *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_2 + 0x1d4);
        *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
        *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
        *(undefined8 *)(param_2 + 0x200) = DAT_0042c200;
        *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
        *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
        uVar2 = DAT_0042c1f0;
        goto LAB_001f8df8;
      }
      uVar2 = *(undefined8 *)(DAT_0040f518 + 0x160);
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(int *)(param_2 + 0x130) = (int)uVar2;
      *(int *)(param_2 + 0x134) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(param_2 + 0x138) = uVar3;
      *(undefined4 *)(param_2 + 0x13c) = uVar4;
      *(int *)(param_2 + 0x120) = (int)*(undefined8 *)(param_2 + 0x130);
      *(int *)(param_2 + 0x124) = (int)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
      *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(param_2 + 0x138);
      *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_2 + 0x13c);
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_2 + 0x1d4) = uVar3;
      *(undefined4 *)(param_2 + 0x1d8) = uVar4;
      *(undefined4 *)(param_2 + 0x1dc) = uVar5;
      *(int *)(param_2 + 0x1c0) = (int)*(undefined8 *)(param_2 + 0x1d0);
      *(int *)(param_2 + 0x1c4) = (int)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
      *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
      *(undefined8 *)(param_2 + 0x200) = DAT_0042c200;
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
      *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
      *(undefined8 *)(param_2 + 0x208) = DAT_0042c1f0;
      *(undefined8 *)(param_2 + 0x210) = DAT_0042c1f8;
      *(undefined8 *)(param_2 + 0x1e8) = DAT_0042c1a8;
      *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e8);
      *(undefined8 *)(param_2 + 0x1f0) = DAT_0042c1b8;
    }
    FUN_00200ad8(param_2 + 0x1c0);
    FUN_00201010(param_2 + 0x120);
    if (*(float *)(param_2 + 0x1b4) < 2.0) {
      return;
    }
    *(undefined4 *)(param_2 + 0x1b4) = 0;
    *(undefined4 *)(param_2 + 0x240) = 3;
    return;
  }
  iVar8 = *(int *)(param_2 + 0x1b8);
  if (iVar8 == 1) {
    puVar7 = &DAT_0042c1d8;
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
    *(undefined4 *)(param_2 + 0x1d4) = uVar3;
    *(undefined4 *)(param_2 + 0x1d8) = uVar4;
    *(undefined4 *)(param_2 + 0x1dc) = uVar5;
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_2 + 0x1d4);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
    *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
    *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
    uVar2 = DAT_0042c1d8;
LAB_001f8b24:
    *(undefined8 *)(param_2 + 0x208) = uVar2;
    *(undefined8 *)(param_2 + 0x210) = puVar7[1];
    *(undefined8 *)(param_2 + 0x1e8) = DAT_0042c1a8;
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e8);
    *(undefined8 *)(param_2 + 0x1f0) = DAT_0042c1b8;
  }
  else {
    if (iVar8 < 2) {
      if (iVar8 == 0) {
        puVar7 = &DAT_0042c1c0;
        uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
        uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
        uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
        *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
        *(undefined4 *)(param_2 + 0x1d4) = uVar3;
        *(undefined4 *)(param_2 + 0x1d8) = uVar4;
        *(undefined4 *)(param_2 + 0x1dc) = uVar5;
        *(int *)(param_2 + 0x1c0) = (int)*(undefined8 *)(param_2 + 0x1d0);
        *(int *)(param_2 + 0x1c4) = (int)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
        *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
        *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
        *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
        *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
        *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
        uVar2 = DAT_0042c1c0;
        goto LAB_001f8b24;
      }
    }
    else if (iVar8 == 2) {
      puVar7 = &DAT_0042c1f0;
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_2 + 0x1d4) = uVar3;
      *(undefined4 *)(param_2 + 0x1d8) = uVar4;
      *(undefined4 *)(param_2 + 0x1dc) = uVar5;
      *(int *)(param_2 + 0x1c0) = (int)*(undefined8 *)(param_2 + 0x1d0);
      *(int *)(param_2 + 0x1c4) = (int)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
      *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
      *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
      *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
      uVar2 = DAT_0042c1f0;
      goto LAB_001f8b24;
    }
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x160);
    *(undefined4 *)(param_2 + 0x1d4) = uVar3;
    *(undefined4 *)(param_2 + 0x1d8) = uVar4;
    *(undefined4 *)(param_2 + 0x1dc) = uVar5;
    *(int *)(param_2 + 0x1c0) = (int)*(undefined8 *)(param_2 + 0x1d0);
    *(int *)(param_2 + 0x1c4) = (int)((ulong)*(undefined8 *)(param_2 + 0x1d0) >> 0x20);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined8 *)(param_2 + 0x200) = DAT_0042c208;
    *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x200);
    *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(DAT_0040f518 + 0x234);
    *(undefined8 *)(param_2 + 0x208) = DAT_0042c1f0;
    *(undefined8 *)(param_2 + 0x210) = DAT_0042c1f8;
    *(undefined8 *)(param_2 + 0x1e8) = DAT_0042c1a8;
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e8);
    *(undefined8 *)(param_2 + 0x1f0) = DAT_0042c1b8;
  }
  FUN_00200ad8(param_2 + 0x1c0);
  iVar8 = *(int *)(param_2 + 0x1b8);
  if (iVar8 == 1) {
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x180);
    *(undefined4 *)(param_2 + 0x134) = uVar3;
    *(undefined4 *)(param_2 + 0x138) = uVar4;
    *(undefined4 *)(param_2 + 0x13c) = uVar5;
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
    *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1d4) = uVar3;
    *(undefined4 *)(param_2 + 0x1d8) = uVar4;
    *(undefined4 *)(param_2 + 0x1dc) = uVar5;
    uVar2 = DAT_0042c1e8;
    goto LAB_001f8c94;
  }
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
      *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x180);
      *(undefined4 *)(param_2 + 0x134) = uVar3;
      *(undefined4 *)(param_2 + 0x138) = uVar4;
      *(undefined4 *)(param_2 + 0x13c) = uVar5;
      uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
      uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
      uVar5 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(DAT_0040f518 + 0x1a0);
      *(undefined4 *)(param_2 + 0x1d4) = uVar3;
      *(undefined4 *)(param_2 + 0x1d8) = uVar4;
      *(undefined4 *)(param_2 + 0x1dc) = uVar5;
      uVar2 = DAT_0042c1d0;
      goto LAB_001f8c94;
    }
LAB_001f8c74:
    uVar2 = *(undefined8 *)(DAT_0040f518 + 0x160);
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    *(int *)(param_2 + 0x130) = (int)uVar2;
    *(int *)(param_2 + 0x134) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_2 + 0x138) = uVar3;
    *(undefined4 *)(param_2 + 0x13c) = uVar4;
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x160);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar6 = *(undefined4 *)(DAT_0040f518 + 0x16c);
  }
  else {
    if (iVar8 != 2) goto LAB_001f8c74;
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x184);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x188);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x18c);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x180);
    *(undefined4 *)(param_2 + 0x134) = uVar3;
    *(undefined4 *)(param_2 + 0x138) = uVar4;
    *(undefined4 *)(param_2 + 0x13c) = uVar5;
    uVar3 = *(undefined4 *)(DAT_0040f518 + 0x1a0);
    uVar4 = *(undefined4 *)(DAT_0040f518 + 0x1a4);
    uVar5 = *(undefined4 *)(DAT_0040f518 + 0x1a8);
    uVar6 = *(undefined4 *)(DAT_0040f518 + 0x1ac);
  }
  *(undefined4 *)(param_2 + 0x1d0) = uVar3;
  *(undefined4 *)(param_2 + 0x1d4) = uVar4;
  *(undefined4 *)(param_2 + 0x1d8) = uVar5;
  *(undefined4 *)(param_2 + 0x1dc) = uVar6;
  uVar2 = DAT_0042c200;
LAB_001f8c94:
  *(undefined8 *)(param_2 + 0x200) = uVar2;
  *(undefined4 *)(param_2 + 0x220) = 0x3dcccccd;
  *(undefined4 *)(param_2 + 0x21c) = 0x3dcccccd;
  *(undefined4 *)(param_2 + 0x19c) = 0x3dcccccd;
  *(undefined4 *)(param_2 + 0x198) = 0x3dcccccd;
  *(undefined4 *)(param_2 + 0x240) = 2;
  *(undefined4 *)(param_2 + 0x1b4) = 0;
  return;
}


// ==== FUN_001f8fb8 @ 001f8fb8 ====

undefined4 FUN_001f8fb8(int param_1)

{
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1bc));
  return 1;
}


// ==== FUN_001f8ff8 @ 001f8ff8 ====

void FUN_001f8ff8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1b8) != param_2) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  *(int *)(param_1 + 0x1b8) = param_2;
  return;
}


// ==== FUN_001f9028 @ 001f9028 ====

void FUN_001f9028(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  FUN_001f1c08();
  *(undefined4 *)(param_1 + 0xb90) = 0;
  do {
    FUN_00200a68(param_1 + uVar2 * 0x80 + 0x20);
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined4 *)(param_1 + 0xb20 + iVar1) = 0;
  } while (uVar2 < 0x16);
  return;
}


// ==== FUN_001f9098 @ 001f9098 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Health" */

undefined4 FUN_001f9098(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 auStack_b0 [2];
  
  puVar8 = (undefined4 *)param_1;
  *(undefined1 *)(puVar8 + 0x2e2) = 0;
  *(undefined1 *)((int)puVar8 + 0xb89) = 0;
  if (param_2 == '\0') {
    FUN_001f1db0(param_1,0x3f9c50,puVar8 + 0x2e3);
  }
  puVar8[0x2e5] = 0x3f800000;
  puVar8[0x2e6] = 0xbf800000;
  puVar8[0x2e3] = 0x16;
  *(char *)((int)puVar8 + 0xb8a) = param_2;
  puVar8[0x2e7] = 0;
  uVar4 = DAT_0042c32c;
  uVar2 = DAT_0042c328;
  uVar3 = _DAT_0042c320;
  puVar8[0x2ec] = (int)_DAT_0042c320;
  puVar8[0x2ed] = (int)((ulong)uVar3 >> 0x20);
  puVar8[0x2ee] = uVar2;
  puVar8[0x2ef] = uVar4;
  uVar9 = 0;
  *(undefined8 *)(puVar8 + 0x2e8) = DAT_0042c310;
  puVar8[0x2e0] = *(undefined4 *)(DAT_0040f518 + 0x234);
  uVar3 = DAT_0042c2f0;
  puVar8[0x2e1] = 0;
  *(undefined8 *)(puVar8 + 0x2de) = uVar3;
  FUN_001f1c10(param_1,2,0x17,0,param_2,param_3,param_4);
  iVar7 = *(char *)((int)puVar8 + 0x12) * 0xa8 + DAT_0040f518;
  sVar1 = *(short *)(puVar8 + 4);
  while( true ) {
    uVar2 = FUN_00278ec0(iVar7 + 0x40,sVar1 + 1,*puVar8);
    puVar8[uVar9 + 0x2c8] = uVar2;
    uVar3 = *(undefined8 *)(puVar8 + 0x2ec);
    uVar5 = puVar8[0x2ee];
    uVar6 = puVar8[0x2ef];
    uVar2 = (undefined4)uVar3;
    puVar8[uVar9 * 0x20 + 8] = uVar2;
    uVar4 = (undefined4)((ulong)uVar3 >> 0x20);
    puVar8[uVar9 * 0x20 + 9] = uVar4;
    puVar8[uVar9 * 0x20 + 10] = uVar5;
    puVar8[uVar9 * 0x20 + 0xb] = uVar6;
    puVar8[uVar9 * 0x20 + 0xc] = uVar2;
    puVar8[uVar9 * 0x20 + 0xd] = uVar4;
    puVar8[uVar9 * 0x20 + 0xe] = uVar5;
    puVar8[uVar9 * 0x20 + 0xf] = uVar6;
    FUN_001f9de8(auStack_b0,param_1,uVar9);
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x10) = auStack_b0[0];
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x12) = auStack_b0[0];
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x14) = DAT_0042bc50;
    uVar3 = *(undefined8 *)(puVar8 + 0x2e8);
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x16) = uVar3;
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x18) = uVar3;
    puVar8[uVar9 * 0x20 + 0x24] = puVar8 + 0x2de;
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x1a) = DAT_0042c2f8;
    *(undefined8 *)(puVar8 + uVar9 * 0x20 + 0x1c) = DAT_0042c300;
    FUN_00200b50(puVar8 + uVar9 * 0x20 + 8,puVar8[uVar9 + 0x2c8]);
    uVar9 = uVar9 + 1 & 0xff;
    if (0x15 < uVar9) break;
    sVar1 = *(short *)(puVar8 + 4);
  }
  return 1;
}


// ==== FUN_001f92a0 @ 001f92a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f92a0(float param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 in_v0_udw;
  undefined4 uVar4;
  undefined4 in_register_0000002c;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 auStack_100 [2];
  float fStack_f0;
  float fStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  
  iVar11 = (int)param_2;
  iVar8 = iVar11 + 0x20;
  iVar10 = 0x1000000;
  bVar1 = true;
  do {
    FUN_00200bb0(param_1,iVar8);
    if (0.0 < *(float *)(iVar8 + 0x5c)) {
      bVar1 = false;
    }
    iVar6 = iVar10 >> 0x18;
    iVar10 = iVar10 + 0x1000000;
    iVar8 = iVar8 + 0x80;
  } while (iVar6 < 0x16);
  if (!bVar1) {
    return;
  }
  switch(*(undefined4 *)(iVar11 + 0xb90)) {
  case 0:
    bVar1 = false;
    iVar8 = *(int *)(DAT_0040f0e0 + 0x2014c);
    iVar10 = *(char *)(iVar11 + 0xb8a) * 0x8c0 + DAT_0040f4d0;
    fVar13 = (float)*(int *)(iVar11 + 0xb8c) * 0.045454547;
    if (iVar8 == 1) {
      fVar12 = *(float *)(iVar10 + 0x328);
LAB_001f93ec:
      fVar12 = fVar12 / 1200.0;
    }
    else {
      if (iVar8 < 2) {
        if (iVar8 == 0) {
          fVar12 = *(float *)(iVar10 + 0x328);
          goto LAB_001f93ec;
        }
      }
      else if (iVar8 < 4) {
        fVar12 = *(float *)(iVar10 + 0x328) / 750.0;
        goto LAB_001f9424;
      }
      fVar12 = 0.0;
    }
LAB_001f9424:
    fVar12 = (float)FUN_0029e688(fVar12,0x40000000);
    fVar14 = *(float *)(iVar11 + 0xb98) - param_1;
    *(float *)(iVar11 + 0xb98) = fVar14;
    if ((fVar14 < 0.0) && (fVar13 < fVar12)) {
      bVar1 = true;
      FUN_001f9a40(param_2);
      fVar13 = (float)*(int *)(iVar11 + 0xb8c) * 0.045454547;
      *(undefined4 *)(iVar11 + 0xb98) = 0x3d4ccccd;
    }
    if (fVar12 + 0.045454547 < fVar13) goto LAB_001f94e4;
    if (fVar12 == 0.0) {
      iVar8 = *(int *)(iVar11 + 0xb8c);
      do {
        if (iVar8 == 0) break;
LAB_001f94e4:
        do {
          bVar1 = true;
          FUN_001f9af8(param_2);
          iVar8 = *(int *)(iVar11 + 0xb8c);
          fVar13 = (float)iVar8 * 0.045454547;
        } while (fVar12 + 0.045454547 < fVar13);
      } while (fVar12 == 0.0);
    }
    if (bVar1) {
      if (fVar13 <= 0.19) {
        uVar2 = FUN_001f9dc0((fVar13 - 0.0) * 5.263158,param_2,_DAT_0042c340,_DAT_0042c350);
        *(int *)(iVar11 + 0xbb0) = (int)uVar2;
        *(int *)(iVar11 + 0xbb4) = (int)((ulong)uVar2 >> 0x20);
        *(undefined4 *)(iVar11 + 3000) = in_v0_udw;
        *(undefined4 *)(iVar11 + 0xbbc) = in_register_0000002c;
        if (0 < *(int *)(iVar11 + 0xb8c)) {
          iVar8 = 0x1000000;
          puVar9 = (undefined4 *)(iVar11 + 0x20);
          do {
            uVar2 = *(undefined8 *)(iVar11 + 0xbb0);
            uVar4 = *(undefined4 *)(iVar11 + 3000);
            uVar5 = *(undefined4 *)(iVar11 + 0xbbc);
            uVar15 = (undefined4)uVar2;
            *puVar9 = uVar15;
            uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
            puVar9[1] = uVar3;
            puVar9[2] = uVar4;
            puVar9[3] = uVar5;
            puVar9[4] = uVar15;
            puVar9[5] = uVar3;
            puVar9[6] = uVar4;
            puVar9[7] = uVar5;
            FUN_00200ad8(puVar9);
            puVar9 = puVar9 + 0x20;
            iVar10 = iVar8 >> 0x18;
            iVar8 = iVar8 + 0x1000000;
          } while (iVar10 < *(int *)(iVar11 + 0xb8c));
        }
      }
      else if (0 < *(int *)(iVar11 + 0xb8c)) {
        iVar8 = 0x1000000;
        puVar9 = (undefined4 *)(iVar11 + 0x20);
        do {
          uVar3 = DAT_0042c32c;
          uVar15 = DAT_0042c328;
          uVar2 = _DAT_0042c320;
          uVar4 = (undefined4)_DAT_0042c320;
          *puVar9 = uVar4;
          uVar5 = (undefined4)((ulong)uVar2 >> 0x20);
          puVar9[1] = uVar5;
          puVar9[2] = uVar15;
          puVar9[3] = uVar3;
          puVar9[4] = uVar4;
          puVar9[5] = uVar5;
          puVar9[6] = uVar15;
          puVar9[7] = uVar3;
          FUN_00200ad8(puVar9);
          puVar9 = puVar9 + 0x20;
          iVar10 = iVar8 >> 0x18;
          iVar8 = iVar8 + 0x1000000;
        } while (iVar10 < *(int *)(iVar11 + 0xb8c));
      }
    }
    if (fVar13 <= 0.19) {
      FUN_001f9be0(param_1,param_2);
    }
    else if (*(char *)(iVar11 + 0xb88) != '\0') {
      uVar7 = 0;
      if (0 < *(int *)(iVar11 + 0xb8c)) {
        iVar10 = 0x1000000;
        iVar8 = iVar11 + 0x20;
        do {
          *(undefined8 *)(iVar11 + 0xba0) = DAT_0042c310;
          FUN_001f9de8(auStack_100,param_2,uVar7 & 0xff);
          *(undefined8 *)(iVar8 + 0x20) = auStack_100[0];
          *(undefined8 *)(iVar8 + 0x28) = auStack_100[0];
          *(undefined8 *)(iVar8 + 0x30) = DAT_0042bc50;
          uVar2 = *(undefined8 *)(iVar11 + 0xba0);
          *(undefined8 *)(iVar8 + 0x38) = uVar2;
          *(undefined8 *)(iVar8 + 0x40) = uVar2;
          FUN_00200ad8(iVar8);
          iVar8 = iVar8 + 0x80;
          uVar7 = iVar10 >> 0x18;
          iVar10 = iVar10 + 0x1000000;
        } while ((int)uVar7 < *(int *)(iVar11 + 0xb8c));
      }
      *(undefined1 *)(iVar11 + 0xb88) = 0;
    }
    break;
  case 1:
    uVar7 = 0;
    iVar10 = 0x1000000;
    iVar8 = iVar11 + 0x20;
    do {
      FUN_001f9de8(auStack_100,param_2,uVar7 & 0xff);
      *(undefined8 *)(iVar8 + 0x20) = auStack_100[0];
      *(undefined8 *)(iVar8 + 0x28) = auStack_100[0];
      *(undefined8 *)(iVar8 + 0x30) = DAT_0042bc50;
      FUN_001f9de8(&fStack_f0,param_2,uVar7 & 0xff);
      fStack_dc = DAT_0042c384;
      uVar7 = iVar10 >> 0x18;
      iVar10 = iVar10 + 0x1000000;
      fStack_e0 = fStack_f0 + DAT_0042c380;
      *(undefined4 *)(iVar8 + 0x5c) = 0x3e19999a;
      fStack_dc = fStack_ec + fStack_dc;
      *(undefined4 *)(iVar8 + 0x60) = 0x3e19999a;
      auStack_100[0] = CONCAT44(fStack_dc,fStack_e0);
      *(undefined8 *)(iVar8 + 0x28) = auStack_100[0];
      iVar8 = iVar8 + 0x80;
    } while ((int)uVar7 < 0x16);
    *(undefined4 *)(iVar11 + 0xb90) = 2;
    break;
  case 2:
    uVar15 = 0x41a00000;
    fVar13 = *(float *)(iVar11 + 0xb84) + param_1 * 200.0;
    *(float *)(iVar11 + 0xb84) = fVar13;
    if (fVar13 < 20.0) {
      return;
    }
    uVar3 = 3;
    goto LAB_001f9820;
  case 3:
    uVar15 = 0;
    fVar13 = *(float *)(iVar11 + 0xb84) - param_1 * 200.0;
    *(float *)(iVar11 + 0xb84) = fVar13;
    if (0.0 < fVar13) {
      return;
    }
    uVar3 = 4;
LAB_001f9820:
    *(undefined4 *)(iVar11 + 0xb84) = uVar15;
    *(undefined4 *)(iVar11 + 0xb90) = uVar3;
    break;
  case 4:
    uVar7 = 0;
    iVar10 = 0x1000000;
    iVar8 = iVar11 + 0x20;
    do {
      FUN_001f9de8(&fStack_f0,param_2,uVar7 & 0xff);
      fStack_d0 = DAT_0042c380 + fStack_f0;
      fStack_cc = DAT_0042c384 + fStack_ec;
      auStack_100[0] = CONCAT44(fStack_cc,fStack_d0);
      *(undefined8 *)(iVar8 + 0x20) = auStack_100[0];
      *(undefined8 *)(iVar8 + 0x28) = auStack_100[0];
      *(undefined8 *)(iVar8 + 0x30) = DAT_0042bc50;
      FUN_001f9de8(auStack_100,param_2,uVar7 & 0xff);
      uVar7 = iVar10 >> 0x18;
      *(undefined4 *)(iVar8 + 0x5c) = 0x3e19999a;
      *(undefined8 *)(iVar8 + 0x28) = auStack_100[0];
      iVar10 = iVar10 + 0x1000000;
      *(undefined4 *)(iVar8 + 0x60) = 0x3e19999a;
      iVar8 = iVar8 + 0x80;
    } while ((int)uVar7 < 0x16);
    *(undefined4 *)(iVar11 + 0xb90) = 5;
    break;
  case 5:
    uVar7 = 0;
    iVar10 = 0x1000000;
    iVar8 = iVar11 + 0x20;
    do {
      FUN_001f9de8(auStack_100,param_2,uVar7 & 0xff);
      uVar7 = iVar10 >> 0x18;
      iVar10 = iVar10 + 0x1000000;
      *(undefined8 *)(iVar8 + 0x20) = auStack_100[0];
      *(undefined8 *)(iVar8 + 0x28) = auStack_100[0];
      *(undefined8 *)(iVar8 + 0x30) = DAT_0042bc50;
      iVar8 = iVar8 + 0x80;
    } while ((int)uVar7 < 0x16);
    *(undefined4 *)(iVar11 + 0xb90) = 0;
  }
  return;
}


// ==== FUN_001f9980 @ 001f9980 ====

void FUN_001f9980(int param_1)

{
  *(undefined4 *)(param_1 + 0xb90) = 1;
  return;
}


// ==== FUN_001f9990 @ 001f9990 ====

/* Strings referenciadas:
     "Health" */

undefined4 FUN_001f9990(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x1000000;
  iVar3 = (int)param_1;
  puVar2 = (undefined4 *)(iVar3 + 0xb20);
  FUN_001f1e58(param_1,0x3f9c50);
  do {
    FUN_00278f00(*(char *)(iVar3 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(iVar3 + 0x10) + 1,
                 *puVar2);
    *puVar2 = 0;
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x16);
  return 1;
}


// ==== FUN_001f9a40 @ 001f9a40 ====

void FUN_001f9a40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 auStack_40 [2];
  
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0xb8c) + 1;
  if (*(int *)(iVar7 + 0xb8c) < 0x16) {
    uVar2 = *(undefined8 *)(iVar7 + 0xbb0);
    uVar5 = *(undefined4 *)(iVar7 + 3000);
    uVar6 = *(undefined4 *)(iVar7 + 0xbbc);
    *(int *)(iVar7 + 0xb8c) = iVar1;
    iVar1 = iVar1 * 0x80 + iVar7;
    uVar3 = (undefined4)uVar2;
    *(undefined4 *)(iVar1 + -0x60) = uVar3;
    uVar4 = (undefined4)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(iVar1 + -0x5c) = uVar4;
    *(undefined4 *)(iVar1 + -0x58) = uVar5;
    *(undefined4 *)(iVar1 + -0x54) = uVar6;
    *(undefined4 *)(iVar1 + -0x50) = uVar3;
    *(undefined4 *)(iVar1 + -0x4c) = uVar4;
    *(undefined4 *)(iVar1 + -0x48) = uVar5;
    *(undefined4 *)(iVar1 + -0x44) = uVar6;
    if (*(char *)(iVar7 + 0xb88) != '\0') {
      uVar2 = *(undefined8 *)(iVar7 + 0xba0);
      iVar1 = *(int *)(iVar7 + 0xb8c) * 0x80 + iVar7;
      *(undefined8 *)(iVar1 + -0x28) = uVar2;
      *(undefined8 *)(iVar1 + -0x20) = uVar2;
      iVar1 = *(int *)(iVar7 + 0xb8c);
      FUN_001f9de8(auStack_40,param_1,*(char *)(iVar7 + 0xb8c) + -1);
      iVar7 = iVar1 * 0x80 + iVar7;
      *(undefined8 *)(iVar7 + -0x40) = auStack_40[0];
      *(undefined8 *)(iVar7 + -0x38) = auStack_40[0];
      *(undefined8 *)(iVar7 + -0x30) = DAT_0042bc50;
    }
  }
  return;
}


// ==== FUN_001f9af8 @ 001f9af8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f9af8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 auStack_40 [2];
  
  iVar8 = (int)param_1;
  if (0 < *(int *)(iVar8 + 0xb8c)) {
    uVar6 = *(undefined8 *)(iVar8 + 0xba0);
    *(undefined8 *)(iVar8 + 0xba0) = DAT_0042c310;
    uVar3 = DAT_0042c36c;
    uVar2 = DAT_0042c368;
    uVar1 = _DAT_0042c360;
    iVar7 = *(int *)(iVar8 + 0xb8c) * 0x80 + iVar8;
    uVar4 = (undefined4)_DAT_0042c360;
    *(undefined4 *)(iVar7 + -0x60) = uVar4;
    uVar5 = (undefined4)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar7 + -0x5c) = uVar5;
    *(undefined4 *)(iVar7 + -0x58) = uVar2;
    *(undefined4 *)(iVar7 + -0x54) = uVar3;
    *(undefined4 *)(iVar7 + -0x50) = uVar4;
    *(undefined4 *)(iVar7 + -0x4c) = uVar5;
    *(undefined4 *)(iVar7 + -0x48) = uVar2;
    *(undefined4 *)(iVar7 + -0x44) = uVar3;
    uVar1 = DAT_0042c310;
    iVar7 = *(int *)(iVar8 + 0xb8c) * 0x80 + iVar8;
    *(undefined8 *)(iVar7 + -0x28) = DAT_0042c310;
    *(undefined8 *)(iVar7 + -0x20) = uVar1;
    iVar7 = *(int *)(iVar8 + 0xb8c);
    FUN_001f9de8(auStack_40,param_1,*(char *)(iVar8 + 0xb8c) + -1);
    iVar7 = iVar7 * 0x80 + iVar8;
    *(undefined8 *)(iVar7 + -0x40) = auStack_40[0];
    *(undefined8 *)(iVar7 + -0x38) = auStack_40[0];
    *(undefined8 *)(iVar7 + -0x30) = DAT_0042bc50;
    FUN_00200ad8(iVar8 + *(int *)(iVar8 + 0xb8c) * 0x80 + -0x60);
    *(int *)(iVar8 + 0xb8c) = *(int *)(iVar8 + 0xb8c) + -1;
    *(undefined8 *)(iVar8 + 0xba0) = uVar6;
  }
  return;
}


// ==== FUN_001f9be0 @ 001f9be0 ====

void FUN_001f9be0(float param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 auStack_a0 [2];
  float fStack_90;
  float fStack_8c;
  
  iVar4 = (int)param_2;
  *(undefined1 *)(iVar4 + 0xb88) = 1;
  param_1 = *(float *)(iVar4 + 0xb9c) + param_1;
  *(float *)(iVar4 + 0xb9c) = param_1;
  if (0.5 <= param_1) {
    if (*(char *)(iVar4 + 0xb89) != '\0') {
      fVar6 = *(float *)(iVar4 + 0xb9c);
      goto LAB_001f9cf0;
    }
    uVar5 = 0;
    if (0 < *(int *)(iVar4 + 0xb8c)) {
      do {
        iVar3 = uVar5 * 0x80;
        fStack_8c = DAT_0042c310._4_4_ * 1.25;
        fStack_90 = (float)DAT_0042c310 * 1.25;
        auStack_a0[0] = CONCAT44(fStack_8c,fStack_90);
        *(undefined8 *)(iVar4 + 0xba0) = auStack_a0[0];
        *(undefined8 *)(iVar3 + iVar4 + 0x58) = auStack_a0[0];
        *(undefined8 *)(iVar3 + iVar4 + 0x60) = auStack_a0[0];
        FUN_001f9de8(auStack_a0,param_2,uVar5);
        iVar1 = iVar3 + iVar4;
        *(undefined8 *)(iVar1 + 0x40) = auStack_a0[0];
        *(undefined8 *)(iVar1 + 0x48) = auStack_a0[0];
        *(undefined8 *)(iVar1 + 0x50) = DAT_0042bc50;
        FUN_00200ad8(iVar4 + iVar3 + 0x20);
        uVar5 = uVar5 + 1 & 0xff;
      } while ((int)uVar5 < *(int *)(iVar4 + 0xb8c));
    }
    *(undefined1 *)(iVar4 + 0xb89) = 1;
  }
  fVar6 = *(float *)(iVar4 + 0xb9c);
LAB_001f9cf0:
  if (1.0 <= fVar6) {
    uVar5 = 0;
    if (0 < *(int *)(iVar4 + 0xb8c)) {
      uVar2 = CONCAT44(DAT_0042c310._4_4_,(float)DAT_0042c310);
      do {
        iVar3 = uVar5 * 0x80;
        *(undefined8 *)(iVar4 + 0xba0) = uVar2;
        *(undefined8 *)(iVar3 + iVar4 + 0x58) = uVar2;
        *(undefined8 *)(iVar3 + iVar4 + 0x60) = uVar2;
        FUN_001f9de8(auStack_a0,param_2,uVar5);
        iVar1 = iVar3 + iVar4;
        *(undefined8 *)(iVar1 + 0x40) = auStack_a0[0];
        *(undefined8 *)(iVar1 + 0x48) = auStack_a0[0];
        *(undefined8 *)(iVar1 + 0x50) = DAT_0042bc50;
        FUN_00200ad8(iVar4 + iVar3 + 0x20);
        uVar5 = uVar5 + 1 & 0xff;
        uVar2 = CONCAT44(DAT_0042c310._4_4_,(float)DAT_0042c310);
      } while ((int)uVar5 < *(int *)(iVar4 + 0xb8c));
    }
    *(undefined1 *)(iVar4 + 0xb89) = 0;
    *(undefined4 *)(iVar4 + 0xb9c) = 0;
  }
  return;
}


// ==== FUN_001f9dc0 @ 001f9dc0 ====

undefined8 FUN_001f9dc0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _qmtc2(param_4);
  auVar1 = _qmtc2(param_3);
  auVar1 = _vsub(auVar1,auVar3);
  auVar2 = _qmtc2(param_1);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _vadd(auVar1,auVar3);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_8_;
}


// ==== FUN_001f9de8 @ 001f9de8 ====

undefined8 FUN_001f9de8(undefined8 param_1,int param_2,byte param_3)

{
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_20;
  
  fStack_40 = (float)DAT_0042c308;
  fStack_3c = (float)((ulong)DAT_0042c308 >> 0x20);
  uStack_20 = CONCAT44((fStack_3c + DAT_0042c374 * (float)param_3) -
                       *(float *)(param_2 + 0xba4) * 0.5,
                       (fStack_40 + DAT_0042c370 * (float)param_3) -
                       *(float *)(param_2 + 0xba0) * 0.5);
  *(undefined8 *)param_1 = uStack_20;
  return param_1;
}


// ==== FUN_001f9eb0 @ 001f9eb0 ====

void FUN_001f9eb0(int param_1)

{
  FUN_001f1c08();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_00200a68(param_1 + 0x20);
  FUN_001f9028(param_1 + 0xc0);
  FUN_001fa468(param_1 + 0xc80);
  *(undefined4 *)(param_1 + 0xea8) = 0;
  return;
}


// ==== FUN_001f9ef8 @ 001f9ef8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "00:00"
     "HUD_timercount" */

undefined4 FUN_001f9ef8(undefined8 param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  
  puVar5 = (undefined4 *)param_1;
  puStack_a8 = puVar5 + 0x3ab;
  uStack_ac = *(undefined4 *)(DAT_0040f518 + 0x234);
  *(undefined1 *)(puVar5 + 0x3a8) = 0;
  uStack_b0 = param_4;
  FUN_001f1c10(param_1,2,2,0,param_2,param_3,param_4);
  puVar5[0x3a9] = (int)*(char *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0xf4) + 0x20);
  iVar4 = *(char *)((int)puVar5 + 0x12) * 0xa8 + DAT_0040f518 + 0x40;
  uVar2 = FUN_00278ec0(iVar4,*(undefined2 *)(puVar5 + 4),*puVar5);
  puVar5[0x28] = uVar2;
  uStack_c0 = 0;
  uStack_bc = 0;
  *(undefined8 *)(puVar5 + 0x12) = DAT_0042c388;
  *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar5 + 0x12);
  *(undefined8 *)(puVar5 + 0x14) = 0;
  uVar1 = DAT_0042c3bc;
  uVar2 = DAT_0042c3b8;
  uVar3 = _DAT_0042c3b0;
  puVar5[0xc] = (int)_DAT_0042c3b0;
  puVar5[0xd] = (int)((ulong)uVar3 >> 0x20);
  puVar5[0xe] = uVar2;
  puVar5[0xf] = uVar1;
  puVar5[8] = (int)*(undefined8 *)(puVar5 + 0xc);
  puVar5[9] = (int)((ulong)*(undefined8 *)(puVar5 + 0xc) >> 0x20);
  puVar5[10] = puVar5[0xe];
  puVar5[0xb] = puVar5[0xf];
  *(undefined8 *)(puVar5 + 0x18) = DAT_0042c3a0;
  *(undefined8 *)(puVar5 + 0x16) = *(undefined8 *)(puVar5 + 0x18);
  *(undefined8 *)(puVar5 + 0x1a) = DAT_0042c3d0;
  *(undefined8 *)(puVar5 + 0x1c) = DAT_0042c3d8;
  puVar5[0x2c] = uStack_ac;
  uVar3 = DAT_0042c3f0;
  puVar5[0x2d] = 0;
  *(undefined8 *)(puVar5 + 0x2a) = uVar3;
  puVar5[0x24] = puVar5 + 0x2a;
  FUN_00200b50(puVar5 + 8,puVar5[0x28]);
  uVar3 = FUN_00278ec0(iVar4,*(undefined2 *)(puVar5 + 4),*puVar5);
  puVar5[0x29] = (int)uVar3;
  uStack_c0 = 0;
  uStack_bc = 0;
  FUN_00276da8(uVar3,0x42c390,0x42c3a8,&uStack_c0,_DAT_0042c3c0,puVar5 + 0x2a,0x42c3e0,0x42c3e8);
  FUN_001f9098(puVar5 + 0x30,param_2,param_3,uStack_b0);
  FUN_001fa4d8(puVar5 + 800,param_2,param_3,uStack_b0);
  FUN_00275260(0x3f9c78,puStack_a8,8);
  if (param_2 == '\0') {
    FUN_001f1d48(param_1,0x3f9c80,puStack_a8);
    puVar5[0x3aa] = 0;
  }
  else {
    puVar5[0x3aa] = 0;
  }
  return 1;
}


// ==== FUN_001fa130 @ 001fa130 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "%02d:%02d" */

void FUN_001fa130(float param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_60 [32];
  
  iVar4 = *(int *)(DAT_0040f0e0 + 0x21070);
  if (iVar4 == DAT_0040f0e0 + 0x20fa0) {
    iVar2 = *(int *)(iVar4 + 0x30);
    fVar5 = *(float *)(iVar4 + 0x2c);
LAB_001fa1a0:
    iVar4 = (int)((*(float *)(iVar2 + 8) - fVar5) + 0.5);
    sprintf(auStack_60,0x3f9c90,iVar4 / 0x3c,iVar4 % 0x3c);
  }
  else {
    if (iVar4 == DAT_0040f0e0 + 0x20fd8) {
      iVar2 = *(int *)(iVar4 + 0x48);
      fVar5 = *(float *)(iVar4 + 0x44);
      goto LAB_001fa1a0;
    }
    sprintf(auStack_60,0x40dda8);
  }
  FUN_00275260(auStack_60,param_2 + 0xeac,8);
  uVar3 = DAT_0042c3bc;
  uVar6 = DAT_0042c3b8;
  uVar1 = _DAT_0042c3b0;
  iVar4 = *(int *)(param_2 + 0xa0);
  *(int *)(iVar4 + 0x10) = (int)_DAT_0042c3b0;
  *(int *)(iVar4 + 0x14) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  uVar3 = DAT_0042c3cc;
  uVar6 = DAT_0042c3c8;
  uVar1 = _DAT_0042c3c0;
  iVar4 = *(int *)(param_2 + 0xa4);
  *(int *)(iVar4 + 0x10) = (int)_DAT_0042c3c0;
  *(int *)(iVar4 + 0x14) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  FUN_00200bb0(param_1,param_2 + 0x20);
  if (0.0 < *(float *)(param_2 + 0x7c)) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0xea8)) {
  case 0:
    break;
  case 1:
    *(undefined8 *)(param_2 + 0x48) = DAT_0042c388;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = _DAT_0042c398;
    *(undefined4 *)(param_2 + 0x80) = 0x3e19999a;
    *(undefined8 *)(param_2 + 0x48) = uVar1;
    *(undefined4 *)(param_2 + 0x7c) = 0x3e19999a;
    *(undefined4 *)(param_2 + 0xea8) = 2;
    break;
  case 2:
    uVar6 = 0x41a00000;
    fVar5 = *(float *)(param_2 + 0xb4) + param_1 * 200.0;
    *(float *)(param_2 + 0xb4) = fVar5;
    if (20.0 <= fVar5) {
      uVar3 = 3;
LAB_001fa334:
      *(undefined4 *)(param_2 + 0xb4) = uVar6;
      *(undefined4 *)(param_2 + 0xea8) = uVar3;
    }
    goto LAB_001fa33c;
  case 3:
    uVar6 = 0;
    fVar5 = *(float *)(param_2 + 0xb4) - param_1 * 200.0;
    *(float *)(param_2 + 0xb4) = fVar5;
    if (fVar5 <= 0.0) {
      uVar3 = 4;
      goto LAB_001fa334;
    }
LAB_001fa33c:
    *(undefined4 *)(param_2 + 0xe8c) = *(undefined4 *)(param_2 + 0xb4);
    break;
  case 4:
    *(undefined8 *)(param_2 + 0x48) = _DAT_0042c398;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = DAT_0042c388;
    *(undefined4 *)(param_2 + 0x80) = 0x3e19999a;
    *(undefined8 *)(param_2 + 0x48) = uVar1;
    *(undefined4 *)(param_2 + 0x7c) = 0x3e19999a;
    *(undefined4 *)(param_2 + 0xea8) = 0;
    break;
  default:
    goto switchD_001fa27c_default;
  }
switchD_001fa27c_default:
  return;
}


// ==== FUN_001fa3a8 @ 001fa3a8 ====

/* Strings referenciadas:
     "HUD_timercount" */

undefined4 FUN_001fa3a8(undefined8 param_1)

{
  int iVar1;
  
  FUN_001f1e20(param_1,0x3f9c80);
  iVar1 = (int)param_1;
  FUN_00278f00(*(char *)(iVar1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(undefined2 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0xa0));
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  FUN_00278f00(*(char *)(iVar1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(undefined2 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0xa4));
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  return 1;
}


// ==== FUN_001fa438 @ 001fa438 ====

void FUN_001fa438(int param_1)

{
  FUN_001f9980(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xea8) = 1;
  return;
}


// ==== FUN_001fa468 @ 001fa468 ====

void FUN_001fa468(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  FUN_001f1c08();
  do {
    FUN_00200a68(param_1 + uVar2 * 0x80 + 0x70);
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined4 *)(param_1 + 0x1f0 + iVar1) = 0;
  } while (uVar2 < 3);
  *(undefined4 *)(param_1 + 0x218) = 0;
  return;
}


// ==== FUN_001fa4d8 @ 001fa4d8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001fa4d8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar9 = (undefined4 *)param_1;
  FUN_001f1c10(param_1,2,4,0,param_2,param_3,param_4);
  puVar10 = puVar9 + 0x7c;
  *(undefined1 *)(puVar9 + 0x85) = 0;
  puVar9[0x86] = 0;
  puVar9[0x84] = 0;
  puVar12 = (undefined8 *)&DAT_0042c408;
  iVar11 = 2;
  iVar6 = *(char *)((int)puVar9 + 0x12) * 0xa8 + DAT_0040f518;
  sVar1 = *(short *)(puVar9 + 4);
  puVar8 = puVar9 + 0x1c;
  while( true ) {
    iVar11 = iVar11 + -1;
    uVar3 = FUN_00278ec0(iVar6 + 0x40,sVar1 + 1,*puVar9);
    *puVar10 = uVar3;
    uVar7 = *puVar12;
    puVar12 = puVar12 + 1;
    *(undefined8 *)(puVar8 + 8) = uVar7;
    *(undefined8 *)(puVar8 + 10) = uVar7;
    *(undefined8 *)(puVar8 + 0xc) = DAT_0042bc50;
    uVar7 = _DAT_0042c468;
    *(undefined8 *)(puVar8 + 0xe) = _DAT_0042c468;
    *(undefined8 *)(puVar8 + 0x10) = uVar7;
    uVar2 = DAT_0042c4cc;
    uVar3 = DAT_0042c4c8;
    uVar7 = _DAT_0042c4c0;
    uVar4 = (undefined4)_DAT_0042c4c0;
    *puVar8 = uVar4;
    uVar5 = (undefined4)((ulong)uVar7 >> 0x20);
    puVar8[1] = uVar5;
    puVar8[2] = uVar3;
    puVar8[3] = uVar2;
    puVar8[4] = uVar4;
    puVar8[5] = uVar5;
    puVar8[6] = uVar3;
    puVar8[7] = uVar2;
    puVar9[0x82] = *(undefined4 *)(DAT_0040f518 + 0x234);
    uVar7 = _DAT_0042c4e0;
    puVar9[0x83] = 0;
    *(undefined8 *)(puVar9 + 0x80) = uVar7;
    puVar8[0x1c] = puVar9 + 0x80;
    *(undefined8 *)(puVar8 + 0x12) = _DAT_0042c3f8;
    *(undefined8 *)(puVar8 + 0x14) = _DAT_0042c400;
    uVar3 = *puVar10;
    puVar10 = puVar10 + 1;
    FUN_00200b50(puVar8,uVar3);
    if (iVar11 < 0) break;
    sVar1 = *(short *)(puVar9 + 4);
    puVar8 = puVar8 + 0x20;
  }
  return 1;
}


// ==== FUN_001fa658 @ 001fa658 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fa658(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  
  FUN_001fac00();
  uVar12 = DAT_0042c4bc;
  uVar10 = DAT_0042c4b8;
  uVar2 = _DAT_0042c4b0;
  uVar11 = DAT_0042c49c;
  uVar9 = DAT_0042c498;
  uVar13 = _DAT_0042c468;
  iVar14 = (int)param_1;
  if (*(char *)(iVar14 + 0x21c) == '\x01') {
    return;
  }
  uVar4 = (undefined4)_DAT_0042c490;
  uVar8 = (undefined4)((ulong)_DAT_0042c490 >> 0x20);
  switch(*(undefined4 *)(iVar14 + 0x210)) {
  case 0:
    cVar1 = *(char *)(DAT_0040f4d0 + 0x8d1);
    if (*(char *)(iVar14 + 0x214) < cVar1) {
      FUN_001faba0(param_1);
      cVar3 = *(char *)(iVar14 + 0x214);
    }
    else {
      cVar3 = *(char *)(iVar14 + 0x214);
    }
    if (cVar1 < cVar3) {
      FUN_001fabd8(param_1);
    }
    break;
  case 1:
    puVar5 = (undefined4 *)(iVar14 + *(char *)(iVar14 + 0x214) * 0x80 + -0x10);
    *(undefined4 **)(iVar14 + 0x218) = puVar5;
    uVar11 = DAT_0042c48c;
    uVar9 = DAT_0042c488;
    uVar13 = _DAT_0042c480;
    uVar10 = (undefined4)_DAT_0042c480;
    *puVar5 = uVar10;
    uVar12 = (undefined4)((ulong)uVar13 >> 0x20);
    puVar5[1] = uVar12;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar10;
    puVar5[5] = uVar12;
    puVar5[6] = uVar9;
    puVar5[7] = uVar11;
    uVar13 = _DAT_0042c470;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c470;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    iVar6 = *(int *)(iVar14 + 0x218);
    uVar13 = *(undefined8 *)(&DAT_0042c418 + *(char *)(iVar14 + 0x214) * 2);
    *(undefined8 *)(iVar6 + 0x20) = uVar13;
    *(undefined8 *)(iVar6 + 0x28) = uVar13;
    *(undefined8 *)(iVar6 + 0x30) = DAT_0042bc50;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x28) =
         *(undefined8 *)(&DAT_0042c400 + *(char *)(iVar14 + 0x214) * 2);
    uVar11 = DAT_0042c4bc;
    uVar9 = DAT_0042c4b8;
    uVar13 = _DAT_0042c4b0;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(int *)(iVar6 + 0x10) = (int)_DAT_0042c4b0;
    *(int *)(iVar6 + 0x14) = (int)((ulong)uVar13 >> 0x20);
    *(undefined4 *)(iVar6 + 0x18) = uVar9;
    *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x40) = _DAT_0042c468;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined4 *)(iVar6 + 0x60) = 0x3e99999a;
    *(undefined4 *)(iVar6 + 0x5c) = 0x3e99999a;
    *(undefined4 *)(iVar14 + 0x210) = 2;
    break;
  case 2:
    puVar5 = *(undefined4 **)(iVar14 + 0x218);
    uVar9 = (undefined4)_DAT_0042c4b0;
    *puVar5 = uVar9;
    uVar11 = (undefined4)((ulong)uVar2 >> 0x20);
    puVar5[1] = uVar11;
    puVar5[2] = uVar10;
    puVar5[3] = uVar12;
    puVar5[4] = uVar9;
    puVar5[5] = uVar11;
    puVar5[6] = uVar10;
    puVar5[7] = uVar12;
    uVar13 = _DAT_0042c468;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c468;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    goto LAB_001fab3c;
  case 3:
    *(int *)(iVar14 + 0x218) = iVar14 + 0x70;
    *(undefined8 *)(iVar14 + 0x98) = _DAT_0042c408;
    *(undefined8 *)(iVar14 + 0x90) = *(undefined8 *)(iVar14 + 0x98);
    *(undefined8 *)(iVar14 + 0xa0) = DAT_0042bc50;
    uVar13 = _DAT_0042c468;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c468;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    uVar11 = DAT_0042c49c;
    uVar9 = DAT_0042c498;
    uVar13 = _DAT_0042c490;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(int *)(iVar6 + 0x10) = (int)_DAT_0042c490;
    *(int *)(iVar6 + 0x14) = (int)((ulong)uVar13 >> 0x20);
    *(undefined4 *)(iVar6 + 0x18) = uVar9;
    *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x28) = _DAT_0042c438;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined4 *)(iVar6 + 0x60) = 0x3e4ccccd;
    *(undefined4 *)(iVar6 + 0x5c) = 0x3e4ccccd;
    *(undefined4 *)(iVar14 + 0x210) = 4;
    break;
  case 4:
    puVar5 = *(undefined4 **)(iVar14 + 0x218);
    *puVar5 = uVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar4;
    puVar5[5] = uVar8;
    puVar5[6] = uVar9;
    puVar5[7] = uVar11;
    uVar13 = _DAT_0042c438;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x20) = _DAT_0042c438;
    *(undefined8 *)(iVar6 + 0x28) = uVar13;
    *(undefined8 *)(iVar6 + 0x30) = DAT_0042bc50;
    uVar11 = DAT_0042c49c;
    uVar9 = DAT_0042c498;
    uVar13 = _DAT_0042c490;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(int *)(iVar6 + 0x10) = (int)_DAT_0042c490;
    *(int *)(iVar6 + 0x14) = (int)((ulong)uVar13 >> 0x20);
    *(undefined4 *)(iVar6 + 0x18) = uVar9;
    *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x28) = _DAT_0042c438;
    FUN_001fa438(*DAT_0040f518);
    iVar6 = *(int *)(iVar14 + 0x218);
    uVar9 = 0x3dcccccd;
    uVar11 = 5;
    goto code_r0x001faa9c;
  case 5:
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c468;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    uVar13 = _DAT_0042c438;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x20) = _DAT_0042c438;
    *(undefined8 *)(iVar6 + 0x28) = uVar13;
    *(undefined8 *)(iVar6 + 0x30) = DAT_0042bc50;
    uVar11 = DAT_0042c49c;
    uVar9 = DAT_0042c498;
    uVar13 = _DAT_0042c490;
    puVar5 = *(undefined4 **)(iVar14 + 0x218);
    uVar10 = (undefined4)_DAT_0042c490;
    *puVar5 = uVar10;
    uVar12 = (undefined4)((ulong)uVar13 >> 0x20);
    puVar5[1] = uVar12;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar10;
    puVar5[5] = uVar12;
    puVar5[6] = uVar9;
    puVar5[7] = uVar11;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x28) = _DAT_0042c450;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x40) = _DAT_0042c470;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined4 *)(iVar6 + 0x60) = 0x3dcccccd;
    *(undefined4 *)(iVar6 + 0x5c) = 0x3dcccccd;
    *(undefined4 *)(iVar14 + 0x210) = 6;
    break;
  case 6:
    puVar5 = *(undefined4 **)(iVar14 + 0x218);
    *puVar5 = uVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar4;
    puVar5[5] = uVar8;
    puVar5[6] = uVar9;
    puVar5[7] = uVar11;
    uVar13 = _DAT_0042c450;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x20) = _DAT_0042c450;
    *(undefined8 *)(iVar6 + 0x28) = uVar13;
    *(undefined8 *)(iVar6 + 0x30) = DAT_0042bc50;
    uVar13 = _DAT_0042c470;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c470;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x28) = _DAT_0042c450;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x40) = _DAT_0042c470;
    uVar11 = DAT_0042c4ac;
    uVar9 = DAT_0042c4a8;
    uVar13 = _DAT_0042c4a0;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(int *)(iVar6 + 0x10) = (int)_DAT_0042c4a0;
    *(int *)(iVar6 + 0x14) = (int)((ulong)uVar13 >> 0x20);
    *(undefined4 *)(iVar6 + 0x18) = uVar9;
    *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined4 *)(iVar6 + 0x60) = 0x3e4ccccd;
    *(undefined4 *)(iVar6 + 0x5c) = 0x3e4ccccd;
    *(undefined4 *)(iVar14 + 0x210) = 7;
    break;
  case 7:
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c468;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    uVar13 = _DAT_0042c408;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x20) = _DAT_0042c408;
    *(undefined8 *)(iVar6 + 0x28) = uVar13;
    *(undefined8 *)(iVar6 + 0x30) = DAT_0042bc50;
    if (*(char *)(iVar14 + 0x214) == '\0') {
      puVar5 = *(undefined4 **)(iVar14 + 0x218);
      puVar7 = (undefined8 *)&DAT_0042c4d0;
    }
    else {
      puVar5 = *(undefined4 **)(iVar14 + 0x218);
      puVar7 = (undefined8 *)&DAT_0042c480;
    }
    uVar13 = *puVar7;
    uVar10 = *(undefined4 *)(puVar7 + 1);
    uVar12 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar9 = (undefined4)uVar13;
    *puVar5 = uVar9;
    uVar11 = (undefined4)((ulong)uVar13 >> 0x20);
    puVar5[1] = uVar11;
    puVar5[2] = uVar10;
    puVar5[3] = uVar12;
    puVar5[4] = uVar9;
    puVar5[5] = uVar11;
    puVar5[6] = uVar10;
    puVar5[7] = uVar12;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x40) = _DAT_0042c468;
    *(undefined8 *)(*(int *)(iVar14 + 0x218) + 0x28) = _DAT_0042c408;
    if (*(char *)(iVar14 + 0x214) == '\0') {
      iVar6 = *(int *)(iVar14 + 0x218);
      puVar7 = (undefined8 *)&DAT_0042c4c0;
    }
    else {
      iVar6 = *(int *)(iVar14 + 0x218);
      puVar7 = (undefined8 *)&DAT_0042c4b0;
    }
    uVar13 = *puVar7;
    uVar9 = *(undefined4 *)(puVar7 + 1);
    uVar11 = *(undefined4 *)((int)puVar7 + 0xc);
    *(int *)(iVar6 + 0x10) = (int)uVar13;
    *(int *)(iVar6 + 0x14) = (int)((ulong)uVar13 >> 0x20);
    *(undefined4 *)(iVar6 + 0x18) = uVar9;
    *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    iVar6 = *(int *)(iVar14 + 0x218);
    uVar11 = 8;
    uVar9 = 0x3d4ccccd;
code_r0x001faa9c:
    *(undefined4 *)(iVar6 + 0x60) = uVar9;
    *(undefined4 *)(iVar6 + 0x5c) = uVar9;
    *(undefined4 *)(iVar14 + 0x210) = uVar11;
    break;
  case 8:
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x38) = _DAT_0042c468;
    *(undefined8 *)(iVar6 + 0x40) = uVar13;
    uVar13 = _DAT_0042c408;
    iVar6 = *(int *)(iVar14 + 0x218);
    *(undefined8 *)(iVar6 + 0x20) = _DAT_0042c408;
    *(undefined8 *)(iVar6 + 0x28) = uVar13;
    *(undefined8 *)(iVar6 + 0x30) = DAT_0042bc50;
    if (*(char *)(iVar14 + 0x214) == '\0') {
      puVar5 = *(undefined4 **)(iVar14 + 0x218);
      puVar7 = (undefined8 *)&DAT_0042c4b0;
    }
    else {
      puVar5 = *(undefined4 **)(iVar14 + 0x218);
      puVar7 = (undefined8 *)&DAT_0042c4c0;
    }
    uVar13 = *puVar7;
    uVar10 = *(undefined4 *)(puVar7 + 1);
    uVar12 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar9 = (undefined4)uVar13;
    *puVar5 = uVar9;
    uVar11 = (undefined4)((ulong)uVar13 >> 0x20);
    puVar5[1] = uVar11;
    puVar5[2] = uVar10;
    puVar5[3] = uVar12;
    puVar5[4] = uVar9;
    puVar5[5] = uVar11;
    puVar5[6] = uVar10;
    puVar5[7] = uVar12;
    uVar11 = DAT_0042c4cc;
    uVar9 = DAT_0042c4c8;
    uVar13 = _DAT_0042c4c0;
    if (*(byte *)(iVar14 + 0x214) < 3) {
      iVar6 = *(int *)(iVar14 + ((int)((uint)*(byte *)(iVar14 + 0x214) << 0x18) >> 0x16) + 0x1f0);
      *(int *)(iVar6 + 0x10) = (int)_DAT_0042c4c0;
      *(int *)(iVar6 + 0x14) = (int)((ulong)uVar13 >> 0x20);
      *(undefined4 *)(iVar6 + 0x18) = uVar9;
      *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    }
LAB_001fab3c:
    *(undefined4 *)(iVar14 + 0x210) = 0;
    *(undefined4 *)(iVar14 + 0x218) = 0;
  }
  return;
}


// ==== FUN_001faba0 @ 001faba0 ====

void FUN_001faba0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x214) + '\x01';
  *(char *)(param_1 + 0x214) = cVar1;
  if ('\x03' < cVar1) {
    *(undefined1 *)(param_1 + 0x214) = 3;
    return;
  }
  *(undefined4 *)(param_1 + 0x210) = 1;
  return;
}


// ==== FUN_001fabd8 @ 001fabd8 ====

void FUN_001fabd8(int param_1)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0x214) - 1;
  *(byte *)(param_1 + 0x214) = bVar1;
  if ((int)((uint)bVar1 << 0x18) < 0) {
    *(undefined1 *)(param_1 + 0x214) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x210) = 3;
  return;
}


// ==== FUN_001fac00 @ 001fac00 ====

undefined4 FUN_001fac00(int param_1)

{
  if (*(int *)(param_1 + 0x218) == 0) {
    *(undefined1 *)(param_1 + 0x21c) = 0;
  }
  else {
    FUN_00200bb0();
    if (0.0 < *(float *)(*(int *)(param_1 + 0x218) + 0x5c)) {
      *(undefined1 *)(param_1 + 0x21c) = 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x21c) = 0;
  }
  return 1;
}


// ==== FUN_001fac78 @ 001fac78 ====

void FUN_001fac78(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)(param_2 + 0x34);
  iVar5 = 2;
  FUN_001f1c08();
  *(undefined4 *)(param_2 + 0x158) = param_1;
  *(undefined4 *)(param_2 + 0x18) = 0;
  uVar1 = FUN_00107cf8(0x10);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  uVar1 = FUN_00107cf8(0x10);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  do {
    puVar3[-3] = 0;
    iVar5 = iVar5 + -1;
    uVar1 = FUN_00107cf8(0x10);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar5);
  *(undefined4 *)(param_2 + 0x40) = 0;
  puVar6 = (undefined4 *)(param_2 + 0xac);
  puVar3 = (undefined4 *)(param_2 + 0xe8);
  uVar1 = FUN_00107cf8(0x10);
  puVar7 = (undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  uVar1 = FUN_00107cf8(0x10);
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x4c) = uVar1;
  puVar4 = (undefined4 *)(param_2 + 0x70);
  uVar1 = FUN_00107cf8(0x10);
  iVar5 = 0xe;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = uVar1;
  uVar1 = FUN_00107cf8(0x10);
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x5c) = uVar1;
  uVar1 = FUN_00107cf8(0x10);
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 100) = uVar1;
  uVar1 = FUN_00107cf8(0x10);
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  do {
    iVar5 = iVar5 + -1;
    uVar1 = FUN_00107cf8(0x10);
    *puVar6 = uVar1;
    *puVar4 = 0;
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    uVar1 = FUN_00107cf8(0x10);
    puVar2 = (undefined1 *)(param_2 + 0x19c + iVar5);
    *puVar7 = uVar1;
    iVar5 = iVar5 + 1;
    *puVar2 = 0;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 8);
  FUN_00382348(param_2 + 0x1e8,0x2b9d6f8);
  return;
}


// ==== FUN_001fae18 @ 001fae18 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "ITC Machine Std"
     "Eurostile LT Std" */

undefined4 FUN_001fae18(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined **ppuVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  undefined8 auStack_170 [2];
  undefined8 auStack_160 [2];
  float fStack_150;
  float fStack_14c;
  float fStack_140;
  float fStack_13c;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  int *piStack_11c;
  int *piStack_118;
  int *piStack_114;
  int *piStack_110;
  int *piStack_10c;
  undefined8 *puStack_108;
  undefined8 *puStack_104;
  int *piStack_100;
  
  iVar6 = DAT_0040f0e0;
  piVar13 = (int *)(DAT_0040f0e0 + 0x2107c);
  puStack_108 = auStack_170;
  iVar9 = 0;
  ppuVar15 = &PTR_s_ITC_Machine_Std_003bc3a0;
  puStack_104 = auStack_160;
  uStack_128 = *(undefined4 *)(DAT_0040f518 + 0x234);
  piVar16 = piVar13;
  uStack_130 = param_3;
  uStack_12c = param_4;
  do {
    if ((*piVar13 != 0) && (lVar7 = stricmp(*ppuVar15,0x3f9ce8), lVar7 == 0)) {
      iStack_124 = *piVar16;
      goto LAB_001faf14;
    }
    iVar9 = iVar9 + 1;
    piVar16 = piVar16 + 1;
    ppuVar15 = ppuVar15 + 1;
    piVar13 = piVar13 + 1;
  } while (iVar9 < 2);
  iStack_124 = *(int *)(iVar6 + 0x2107c);
LAB_001faf14:
  piVar16 = (int *)param_1;
  *(undefined1 *)(piVar16 + 0x61) = 1;
  *(undefined1 *)(piVar16 + 0x50) = param_2;
  *(undefined2 *)(piVar16 + 0x55) = 0;
  *(undefined1 *)((int)piVar16 + 0x192) = 0;
  *(undefined1 *)((int)piVar16 + 0x193) = 0;
  *(undefined1 *)(piVar16 + 0x65) = 0;
  piVar16[0x57] = 0;
  piVar16[0x5a] = 0;
  piVar16[0x66] = 0;
  piVar16[0x4a] = 0;
  piVar16[0x4b] = 0;
  piVar16[0x4c] = 0;
  piVar16[0x4d] = 0;
  piVar16[0x4e] = 0;
  piVar13 = piVar16 + 0xd;
  piVar16[0x4f] = 0;
  piVar16[0x58] = 0xf;
  *(undefined1 *)((int)piVar16 + 0x196) = 0xff;
  *(undefined1 *)((int)piVar16 + 0x195) = 0xff;
  FUN_001f1c10(param_1,3,0x22,0,param_2,uStack_130,uStack_12c);
  iVar6 = DAT_0040f518;
  cVar1 = *(char *)((int)piVar16 + 0x12);
  piStack_114 = piVar16 + 0x2b;
  piStack_11c = piVar16 + 0x7a;
  *(undefined4 *)(piVar16[0x15] + 8) = uStack_128;
  piStack_118 = piVar16 + 0x1c;
  piStack_10c = piVar16 + 0x42;
  piStack_110 = piVar16 + 0x3a;
  piStack_100 = piVar16 + 10;
  iVar17 = cVar1 * 0xa8 + iVar6 + 0x40;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  iStack_120 = 2;
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[0x15] = auStack_160[0];
  *(undefined4 *)(piVar16[0x15] + 0xc) = 0;
  uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4],*piVar16);
  piVar16[0x14] = (int)uVar8;
  FUN_00276da8(uVar8,0x42c5a8,0x42c5b0,0x42c5b8,_DAT_0042c5c0,piVar16[0x15],0x42c5d0,0x42c5d8);
  *(undefined4 *)(piVar16[0x17] + 8) = uStack_128;
  fStack_140 = DAT_0042c510 + *(float *)*piVar16;
  fStack_13c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_13c,fStack_140);
  *(undefined8 *)piVar16[0x17] = auStack_160[0];
  *(undefined4 *)(piVar16[0x17] + 0xc) = 0;
  uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4],*piVar16);
  piVar16[0x16] = (int)uVar8;
  FUN_00276da8(uVar8,0x42c5e0,0x42c5e8,0x42c5f0,_DAT_0042c600,piVar16[0x17],0x42c610,0x42c618);
  *(undefined4 *)(piVar16[0x19] + 8) = uStack_128;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[0x19] = auStack_160[0];
  *(undefined4 *)(piVar16[0x19] + 0xc) = 0;
  uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
  piVar16[0x18] = (int)uVar8;
  FUN_00276da8(uVar8,0x42c700,0x42c708,0x42c710,_DAT_0042c720,piVar16[0x19],0x42c7a0,0x42c7a8);
  *(undefined4 *)(piVar16[0x1b] + 8) = uStack_128;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[0x1b] = auStack_160[0];
  *(undefined4 *)(piVar16[0x1b] + 0xc) = 0;
  uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
  piVar16[0x1a] = (int)uVar8;
  FUN_00276da8(uVar8,0x42c730,0x42c738,0x42c740,_DAT_0042c750,piVar16[0x1b],0x42c7b0,0x42c7b8);
  FUN_00275260(0x3f9550,piVar16 + 0x5f,4);
  iVar6 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
  piVar16[6] = iVar6;
  *(int *)(piVar16[7] + 8) = iStack_124;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[7] = auStack_160[0];
  *(undefined4 *)(piVar16[7] + 0xc) = 0;
  FUN_00277c98(0x41800000,piVar16[6],0x42c620,0x42c628,_DAT_0042c630,piVar16[7],piVar16 + 0x5f);
  FUN_00275260(0x40dda0,(int)piVar16 + 0x18a,2);
  iVar6 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
  piVar16[0x10] = iVar6;
  *(int *)(piVar16[0x11] + 8) = iStack_124;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[0x11] = auStack_160[0];
  *(undefined4 *)(piVar16[0x11] + 0xc) = 0;
  FUN_00277c98(0x41800000,piVar16[0x10],0x42c6a0,0x42c6a8,_DAT_0042c6b0,piVar16[0x11],
               (int)piVar16 + 0x18a);
  *(undefined4 *)(piVar16[0x13] + 8) = uStack_128;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[0x13] = auStack_160[0];
  *(undefined4 *)(piVar16[0x13] + 0xc) = 0;
  uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4] + 1,*piVar16);
  piVar16[0x12] = (int)uVar8;
  FUN_00276da8(uVar8,0x42c6c0,0x42c6c8,0x42c6d0,_DAT_0042c4f0,piVar16[0x13],0x42c6f0,0x42c6f8);
  iVar9 = (char)piVar16[0x50] * 0x8c0 + DAT_0040f4d0;
  iVar6 = FUN_0015d248(DAT_0040f4e0,**(undefined1 **)(iVar9 + 0x2d4),0);
  uVar8 = FUN_00155130(iVar9 + 0x2b0,*(undefined4 *)(iVar6 + 100));
  piVar16[0x53] = (int)uVar8;
  FUN_001fd178(param_1,uVar8);
  iVar6 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
  piVar16[8] = iVar6;
  *(int *)(piVar16[9] + 8) = iStack_124;
  fStack_150 = DAT_0042c510 + *(float *)*piVar16;
  fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
  auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
  *(undefined8 *)piVar16[9] = auStack_160[0];
  *(undefined4 *)(piVar16[9] + 0xc) = 0;
  FUN_00277c98(0x41800000,piVar16[8],0x42c640,0x42c648,_DAT_0042c650,piVar16[9],piVar16 + 0x5c);
  puVar10 = &DAT_0042c660;
  do {
    iStack_120 = iStack_120 + -1;
    *(undefined4 *)(*piVar13 + 8) = uStack_128;
    fStack_150 = DAT_0042c510 + *(float *)*piVar16;
    fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
    auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
    *(undefined8 *)*piVar13 = auStack_160[0];
    *(undefined4 *)(*piVar13 + 0xc) = 0;
    uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4] + 1,*piVar16);
    *piStack_100 = (int)uVar8;
    FUN_00276da8(uVar8,puVar10,0x42c678,0x42c680,_DAT_0042c4f0,*piVar13,0x42c6f0,0x42c6f8);
    puVar10 = puVar10 + 2;
    piVar13 = piVar13 + 1;
    piStack_100 = piStack_100 + 1;
  } while (-1 < iStack_120);
  if (*(int *)((char)piVar16[0x50] * 0x8c0 + DAT_0040f4d0 + 0x2d4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_001580e0();
    iVar6 = iVar6 << 0x10;
  }
  iVar6 = iVar6 >> 0x10;
  piVar16[0x59] = 0xf;
  piVar16[0x54] = iVar6;
  *(short *)(piVar16 + 0x52) = (short)piVar16[0x54];
  *(short *)((int)piVar16 + 0x14a) = (short)piVar16[0x54];
  if (iVar6 < 0xf) {
    piVar16[0x59] = iVar6;
  }
  FUN_001fc508(param_1,(short)piVar16[0x54]);
  puVar5 = puStack_108;
  auStack_170[0] = DAT_0042c760;
  *(short *)((int)piVar16 + 0x142) = (short)piVar16[0x54];
  if (0xe < piVar16[0x54]) {
    *(undefined2 *)((int)piVar16 + 0x142) = 0xf;
  }
  iVar6 = 0xe;
  piVar13 = piStack_114;
  piVar12 = piStack_118;
  do {
    iVar6 = iVar6 + -1;
    *(undefined4 *)(*piVar13 + 8) = uStack_128;
    fStack_150 = DAT_0042c510 + *(float *)*piVar16;
    fStack_14c = DAT_0042c514 + ((float *)*piVar16)[1];
    auStack_160[0] = CONCAT44(fStack_14c,fStack_150);
    *(undefined8 *)*piVar13 = auStack_160[0];
    *(undefined4 *)(*piVar13 + 0xc) = 0;
    uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
    *piVar12 = (int)uVar8;
    FUN_00276da8(uVar8,auStack_170,0x42c768,0x42c770,_DAT_0042c4f0,*piVar13,0x42c7a0,0x42c7a8);
    piVar4 = piStack_11c;
    piVar12 = piVar12 + 1;
    piVar13 = piVar13 + 1;
    auStack_170[0] = CONCAT44(auStack_170[0]._4_4_,(float)auStack_170[0] + DAT_0042c7c0);
    *(float *)((int)puVar5 + 4) = *(float *)((int)puVar5 + 4) + DAT_0042c7c4;
    auStack_160[0] = auStack_170[0];
  } while (-1 < iVar6);
  iVar6 = 0;
  piVar13 = piStack_118;
  if (*(short *)((int)piVar16 + 0x142) != 0) {
    do {
      uVar3 = DAT_0042c78c;
      uVar2 = DAT_0042c788;
      uVar8 = _DAT_0042c780;
      iVar9 = *piVar13;
      iVar6 = iVar6 + 1;
      *(int *)(iVar9 + 0x10) = (int)_DAT_0042c780;
      *(int *)(iVar9 + 0x14) = (int)((ulong)uVar8 >> 0x20);
      *(undefined4 *)(iVar9 + 0x18) = uVar2;
      *(undefined4 *)(iVar9 + 0x1c) = uVar3;
      piVar13 = piVar13 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)((int)piVar16 + 0x142));
  }
  fVar19 = 0.33;
  piVar11 = piVar16 + 0x6a;
  iVar14 = 7;
  iVar9 = 0x40a00000;
  iVar21 = 0x40d00000;
  iVar20 = 0x40900000;
  iVar6 = piVar16[0x7a];
  piVar13 = piStack_110;
  piVar12 = piStack_10c;
  do {
    iVar6 = iVar6 * 0x10000 + (iVar6 >> 0x10);
    piVar16[0x7a] = iVar6;
    iVar6 = iVar6 + piVar4[1];
    piVar16[0x7a] = iVar6;
    piVar4[1] = piVar4[1] + iVar6;
    fVar18 = (float)(uint)piVar16[0x7a] * 2.3283064e-10;
    if (0.5 < fVar18) {
      *(undefined4 *)(*piVar12 + 0xc) = 0xbc23d70a;
    }
    else {
      *(undefined4 *)(*piVar12 + 0xc) = 0x3c23d70a;
    }
    if ((fVar18 < 0.0) || (fVar19 <= fVar18)) {
      if (fVar19 <= fVar18) {
        if (fVar18 < 0.66) {
          *piVar11 = -0x3f700000;
          piVar11[1] = iVar21;
          goto LAB_001fb978;
        }
        *piVar11 = -0x3f300000;
      }
      else {
        *piVar11 = -0x3f300000;
      }
      piVar11[1] = iVar20;
    }
    else {
      *piVar11 = -0x3f600000;
      piVar11[1] = iVar9;
    }
LAB_001fb978:
    piVar11 = piVar11 + 2;
    iVar14 = iVar14 + -1;
    *(undefined4 *)(*piVar12 + 8) = uStack_128;
    auStack_160[0] = CONCAT44(auStack_160[0]._4_4_,0x3f000000);
    *(undefined4 *)((int)puStack_104 + 4) = 0x3f000000;
    *(undefined8 *)*piVar12 = auStack_160[0];
    *(undefined4 *)(*piVar12 + 0xc) = 0;
    uVar8 = FUN_00278ec0(iVar17,(short)piVar16[4] + 2,*piVar16);
    *piVar13 = (int)uVar8;
    iVar6 = *piVar12;
    piVar12 = piVar12 + 1;
    FUN_002768b0(uVar8,0x42c7c8,0x42c768,0x42c770,_DAT_0042c4f0,iVar6,0x42c7a0,0x42c7a8);
    iVar6 = *piVar13;
    piVar13 = piVar13 + 1;
    FUN_002765b0(iVar6,0x42c7c8,0x42c770);
    if (iVar14 < 0) {
      return 1;
    }
    iVar6 = piVar16[0x7a];
  } while( true );
}


// ==== FUN_001fba78 @ 001fba78 ====

void FUN_001fba78(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_001fbd90();
  FUN_001fca20(param_1);
  FUN_001fcde0(param_1);
  FUN_001fc6c0(param_1);
  FUN_001fc188(param_1);
  iVar3 = (int)param_1;
  if (*(char *)(DAT_0040f4d0 + 0x5ca0) == '\0') {
    iVar1 = *(char *)(iVar3 + 0x140) * 0x8c0 + DAT_0040f4d0;
    iVar2 = FUN_0015d248(DAT_0040f4e0,**(undefined1 **)(iVar1 + 0x2d4),0);
    iVar1 = FUN_00155130(iVar1 + 0x2b0,*(undefined4 *)(iVar2 + 100));
  }
  else {
    iVar1 = 999;
  }
  if ((*(int *)(iVar3 + 0x14c) != iVar1) && (*(char *)(iVar3 + 0x192) == '\0')) {
    FUN_001fd178(param_1);
  }
  return;
}


// ==== FUN_001fbb48 @ 001fbb48 ====

undefined4 FUN_001fbb48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0x28);
  iVar5 = 2;
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x50));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x58));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2
               ,*(undefined4 *)(param_1 + 0x18));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2
               ,*(undefined4 *)(param_1 + 0x20));
  iVar2 = (int)*(char *)(param_1 + 0x12);
  do {
    iVar5 = iVar5 + -1;
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    FUN_00278f00(iVar2 * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 1,uVar1);
    iVar2 = (int)*(char *)(param_1 + 0x12);
  } while (-1 < iVar5);
  puVar3 = (undefined4 *)(param_1 + 0xe8);
  puVar4 = (undefined4 *)(param_1 + 0x70);
  iVar5 = 0xe;
  FUN_00278f00(iVar2 * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2,
               *(undefined4 *)(param_1 + 0x40));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 1
               ,*(undefined4 *)(param_1 + 0x48));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2
               ,*(undefined4 *)(param_1 + 0x60));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2
               ,*(undefined4 *)(param_1 + 0x68));
  iVar2 = (int)*(char *)(param_1 + 0x12);
  do {
    iVar5 = iVar5 + -1;
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    FUN_00278f00(iVar2 * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2,uVar1);
    iVar2 = (int)*(char *)(param_1 + 0x12);
  } while (-1 < iVar5);
  iVar5 = 7;
  while( true ) {
    iVar5 = iVar5 + -1;
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    FUN_00278f00(iVar2 * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 2,uVar1);
    if (iVar5 < 0) break;
    iVar2 = (int)*(char *)(param_1 + 0x12);
  }
  return 1;
}


// ==== FUN_001fbd90 @ 001fbd90 ====

void FUN_001fbd90(undefined8 param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  
  iVar12 = (int)param_1;
  puVar2 = *(undefined1 **)(*(char *)(iVar12 + 0x140) * 0x8c0 + DAT_0040f4d0 + 0x2d4);
  iVar6 = *(int *)(puVar2 + 0xd8);
  uVar4 = FUN_001580e0(puVar2);
  iVar5 = FUN_0015d248(DAT_0040f4e0,*(undefined1 *)(iVar12 + 0x195),0);
  uVar3 = *(uint *)(iVar5 + 0x60);
  fVar13 = 3.0;
  uVar11 = uVar4 & 0xffff;
  if ((int)uVar3 < (int)(uVar4 & 0xffff)) {
    uVar11 = uVar3 & 0xffff;
  }
  if (3.0 <= (float)(int)uVar3 / 10.0) {
    fVar13 = (float)(int)uVar3 / 10.0;
  }
  cVar9 = *(char *)(iVar12 + 0x192);
  if (cVar9 == '\0') {
    if (fVar13 < (float)uVar11) goto LAB_001fbf28;
    if ((int)uVar3 < 2) {
      cVar9 = *(char *)(iVar12 + 0x192);
    }
    else {
      lVar7 = FUN_0015c378(*(char *)(iVar12 + 0x140) * 0x8c0 + DAT_0040f4d0 + 0x2b0);
      if (lVar7 == 0) {
        if (uVar11 == 0) {
          if ((*(uint *)(*DAT_0040f4dc + 0x4c) < 5) && (DAT_0048f4c0 < 5)) {
            FUN_001f2a60(DAT_0040f51c,8,1,0,1);
          }
          goto LAB_001fbf28;
        }
        cVar9 = *(char *)(iVar12 + 0x192);
      }
      else if ((*(uint *)(*DAT_0040f4dc + 0x48) < 0x96) && (DAT_0048f3b8 < 0x96)) {
        FUN_001f2a60(DAT_0040f51c,6,1,0,1);
        cVar9 = *(char *)(iVar12 + 0x192);
      }
      else {
LAB_001fbf28:
        cVar9 = *(char *)(iVar12 + 0x192);
      }
    }
    if (cVar9 == '\0') goto LAB_001fc0e4;
  }
  if ((((iVar6 != 1) && (iVar6 != 2)) && (iVar6 != 0x1b)) && ((iVar6 != 0x1c && (iVar6 != 0xd)))) {
    FUN_001f2c98(DAT_0040f51c,6);
    if (*(char *)(iVar12 + 0x193) == '\0') {
      *(undefined2 *)(iVar12 + 0x144) = *(undefined2 *)(iVar12 + 0x160);
      *(short *)(iVar12 + 0x148) = *(short *)(iVar12 + 0x150);
      if (iVar6 == 9) {
        *(short *)(iVar12 + 0x14a) = (short)uVar11;
      }
      else {
        uVar10 = *(short *)(iVar12 + 0x14c) + *(short *)(iVar12 + 0x150);
        *(ushort *)(iVar12 + 0x14a) = uVar10;
        if (*(ushort *)(iVar12 + 0x146) < uVar10) {
          *(ushort *)(iVar12 + 0x14a) = *(ushort *)(iVar12 + 0x146);
        }
      }
      uVar14 = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
      *(undefined4 *)(iVar12 + 300) = 1;
      *(undefined4 *)(iVar12 + 0x128) = uVar14;
      iVar5 = *(char *)(iVar12 + 0x140) * 0x8c0 + DAT_0040f4d0;
      iVar6 = FUN_0015d248(DAT_0040f4e0,*puVar2,0);
      uVar8 = FUN_00155130(iVar5 + 0x2b0,*(undefined4 *)(iVar6 + 100));
      *(int *)(iVar12 + 0x14c) = (int)uVar8;
      FUN_001fd178(param_1,uVar8);
      *(undefined1 *)(iVar12 + 0x193) = 1;
      fVar13 = *(float *)(iVar12 + 0x15c);
    }
    else {
      fVar13 = *(float *)(iVar12 + 0x15c);
    }
    if (*(float *)(iVar12 + 0x158) < fVar13) {
      if (*(char *)(iVar12 + 0x184) == '\0') {
        *(short *)(iVar12 + 0x146) = (short)uVar3;
        *(uint *)(iVar12 + 0x150) = (uint)*(ushort *)(iVar12 + 0x14a);
        *(undefined1 *)(iVar12 + 0x192) = 0;
        *(undefined1 *)(iVar12 + 0x193) = 0;
        FUN_001fc508(param_1,*(undefined2 *)(iVar12 + 0x150));
        bVar1 = *(byte *)(iVar12 + 0x184);
      }
      else {
        bVar1 = *(byte *)(iVar12 + 0x184);
      }
      *(undefined4 *)(iVar12 + 0x15c) = 0;
      *(byte *)(iVar12 + 0x184) = bVar1 ^ 1;
      return;
    }
    *(float *)(iVar12 + 0x15c) = fVar13 + *(float *)(DAT_0040f0e0 + 0x2013c);
    if (*(char *)(iVar12 + 0x184) != '\0') {
      FUN_001fc490(param_1);
      FUN_001fc320(param_1);
      FUN_001fc500(param_1);
      return;
    }
    FUN_001fc400(param_1,*(undefined2 *)(iVar12 + 0x14a));
    FUN_001fc280(param_1);
    FUN_001fc4f8(param_1);
    return;
  }
LAB_001fc0e4:
  if (iVar6 != 4) {
    if (cVar9 != '\0') {
      *(uint *)(iVar12 + 0x150) = uVar11;
      *(undefined1 *)(iVar12 + 0x192) = 0;
      *(undefined1 *)(iVar12 + 0x193) = 0;
      *(undefined4 *)(iVar12 + 0x15c) = 0;
      FUN_001fc508(param_1,*(undefined2 *)(iVar12 + 0x150));
      FUN_001fc558(param_1,*(undefined2 *)(iVar12 + 0x150),uVar3 & 0xffff);
    }
    if (*(uint *)(iVar12 + 0x150) != uVar11) {
      *(uint *)(iVar12 + 0x150) = uVar11;
      *(short *)(iVar12 + 0x146) = (short)uVar3;
      if (iVar6 != 6) {
        FUN_001fc820(param_1);
      }
      FUN_001fc508(param_1,*(undefined2 *)(iVar12 + 0x150));
      FUN_001fc558(param_1,*(undefined2 *)(iVar12 + 0x150),uVar3 & 0xffff);
    }
  }
  return;
}


// ==== FUN_001fc188 @ 001fc188 ====

void FUN_001fc188(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00155198(DAT_0040f4d0 + 0x2b0);
  iVar3 = (int)param_1;
  if (*(ushort *)(iVar3 + 0x154) != uVar1) {
    iVar2 = iVar3 + 0x185;
    if (uVar1 < 10) {
      sprintf(iVar2,0x3f95b0,uVar1);
    }
    else {
      sprintf(iVar2,0x3f9d00,0x2a);
    }
    FUN_00275260(iVar2,iVar3 + 0x18a,2);
    FUN_00277c98(0x41800000,*(undefined4 *)(iVar3 + 0x40),0x42c6a0,0x42c6a8,DAT_0042c6b0,
                 *(undefined4 *)(iVar3 + 0x44),iVar3 + 0x18a);
    if (*(ushort *)(iVar3 + 0x154) < uVar1) {
      FUN_001fcdb8(param_1);
      *(ushort *)(iVar3 + 0x154) = uVar1;
    }
    else {
      *(ushort *)(iVar3 + 0x154) = uVar1;
    }
  }
  return;
}


// ==== FUN_001fc280 @ 001fc280 ====

void FUN_001fc280(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  uVar1 = *(ushort *)(iVar4 + 0x14a);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (int)(*(float *)(iVar4 + 0x15c) / (*(float *)(iVar4 + 0x158) / (float)uVar1)) & 0xffff;
  }
  if (uVar1 < uVar3) {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x14a);
  }
  *(uint *)(iVar4 + 0x150) = uVar3;
  FUN_001fc508(param_1,uVar3);
  iVar2 = FUN_0015d248(DAT_0040f4e0,*(undefined1 *)(iVar4 + 0x195),0);
  iVar2 = *(int *)(iVar2 + 0x60);
  *(undefined4 *)(iVar4 + 0x164) = 0xf;
  if (iVar2 < 0xf) {
    *(int *)(iVar4 + 0x164) = iVar2;
  }
  return;
}


// ==== FUN_001fc320 @ 001fc320 ====

void FUN_001fc320(int param_1)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if (*(ushort *)(param_1 + 0x146) < 0x10) {
    uVar2 = (int)(*(float *)(param_1 + 0x15c) / (*(float *)(param_1 + 0x158) / 15.0)) & 0xffff;
    if (uVar2 < 0x10) {
      uVar2 = 0xf - uVar2 & 0xffff;
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 <= *(ushort *)(param_1 + 0x148)) {
      FUN_001fc508();
    }
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x146);
    fVar4 = (float)uVar1;
    fVar3 = *(float *)(param_1 + 0x15c) / (*(float *)(param_1 + 0x158) / fVar4);
    if (fVar4 < fVar3) {
      fVar3 = fVar4;
    }
    if ((int)((uint)uVar1 - ((int)fVar3 & 0xffffU)) < (int)(uint)*(ushort *)(param_1 + 0x148)) {
      FUN_001fc508(param_1,(uint)uVar1 - (int)fVar3 & 0xffff);
    }
  }
  return;
}


// ==== FUN_001fc400 @ 001fc400 ====

void FUN_001fc400(undefined8 param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = (int)param_1;
  iVar1 = FUN_0015d248(DAT_0040f4e0,*(undefined1 *)(iVar2 + 0x195),0);
  fVar4 = 1.0;
  fVar3 = *(float *)(iVar2 + 0x15c) / *(float *)(iVar2 + 0x158);
  if (fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  FUN_001fc558(param_1,(int)((float)param_2 * fVar4) & 0xffff,*(uint *)(iVar1 + 0x60) & 0xffff);
  return;
}


// ==== FUN_001fc490 @ 001fc490 ====

void FUN_001fc490(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x15c) / *(float *)(param_1 + 0x158);
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  FUN_001fc558(param_1,(int)((float)*(ushort *)(param_1 + 0x144) * (1.0 - fVar1)) & 0xffff,
               *(undefined2 *)(param_1 + 0x146));
  return;
}


// ==== FUN_001fc4f8 @ 001fc4f8 ====

void FUN_001fc4f8(void)

{
  return;
}


// ==== FUN_001fc500 @ 001fc500 ====

void FUN_001fc500(void)

{
  return;
}


// ==== FUN_001fc508 @ 001fc508 ====

void FUN_001fc508(int param_1,undefined2 param_2)

{
  sprintf(param_1 + 0x16c,0x3f9598,param_2);
  FUN_00275260(param_1 + 0x16c,param_1 + 0x17c,4);
  return;
}


// ==== FUN_001fc558 @ 001fc558 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fc558(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  float fVar10;
  
  param_2 = param_2 & 0xffff;
  param_3 = param_3 & 0xffff;
  if (*(uint *)(param_1 + 0x160) != param_2) {
    fVar10 = 1.0;
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    *(uint *)(param_1 + 0x160) = param_2;
    if (15.0 / (float)param_3 <= 1.0) {
      fVar10 = 15.0 / (float)param_3;
    }
    uVar9 = (uint)(float)(int)((float)param_2 * fVar10 +
                              (float)((uint)((float)param_2 * fVar10) & 0x80000000 | 0x3f000000));
    uVar7 = uVar9 & 0xffff;
    if (uVar7 != *(ushort *)(param_1 + 0x142)) {
      uVar8 = (undefined2)uVar9;
      if (uVar7 < *(ushort *)(param_1 + 0x142)) {
        if (uVar7 < *(ushort *)(param_1 + 0x142)) {
          piVar6 = (int *)(uVar7 * 4 + 0x70 + param_1);
          do {
            uVar4 = DAT_0042c79c;
            uVar3 = DAT_0042c798;
            uVar2 = _DAT_0042c790;
            iVar5 = *piVar6;
            uVar7 = uVar7 + 1;
            *(int *)(iVar5 + 0x10) = (int)_DAT_0042c790;
            *(int *)(iVar5 + 0x14) = (int)((ulong)uVar2 >> 0x20);
            *(undefined4 *)(iVar5 + 0x18) = uVar3;
            *(undefined4 *)(iVar5 + 0x1c) = uVar4;
            piVar6 = piVar6 + 1;
          } while ((int)uVar7 < (int)(uint)*(ushort *)(param_1 + 0x142));
          *(undefined2 *)(param_1 + 0x142) = uVar8;
          return;
        }
      }
      else {
        uVar9 = (uint)*(ushort *)(param_1 + 0x142);
        if (uVar7 <= uVar9) {
          *(undefined2 *)(param_1 + 0x142) = uVar8;
          return;
        }
        piVar6 = (int *)(uVar9 * 4 + 0x70 + param_1);
        iVar5 = uVar7 - uVar9;
        do {
          uVar4 = DAT_0042c78c;
          uVar3 = DAT_0042c788;
          uVar2 = _DAT_0042c780;
          iVar1 = *piVar6;
          iVar5 = iVar5 + -1;
          piVar6 = piVar6 + 1;
          *(int *)(iVar1 + 0x10) = (int)_DAT_0042c780;
          *(int *)(iVar1 + 0x14) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(iVar1 + 0x18) = uVar3;
          *(undefined4 *)(iVar1 + 0x1c) = uVar4;
        } while (iVar5 != 0);
      }
      *(undefined2 *)(param_1 + 0x142) = uVar8;
    }
  }
  return;
}


// ==== FUN_001fc6c0 @ 001fc6c0 ====

void FUN_001fc6c0(undefined8 param_1)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fStack_b0;
  float fStack_ac;
  
  iVar5 = (int)param_1;
  piVar2 = (int *)(iVar5 + 0xe8);
  pfVar3 = (float *)(iVar5 + 0x1a8);
  iVar4 = 0;
  iVar6 = 0x10000;
  do {
    if (*(char *)(iVar5 + 0x19c + iVar4) != '\0') {
      fVar7 = *(float *)(piVar2[8] + 0xc);
      if (0.0 <= fVar7) {
        fVar7 = fVar7 + 20.0;
LAB_001fc760:
        *(float *)(piVar2[8] + 0xc) = fVar7;
        pfVar1 = (float *)*piVar2;
      }
      else {
        if (fVar7 < 0.0) {
          fVar7 = fVar7 - 20.0;
          goto LAB_001fc760;
        }
        pfVar1 = (float *)*piVar2;
      }
      fStack_b0 = *pfVar1 + *pfVar3;
      fStack_ac = pfVar1[1] - pfVar3[1];
      FUN_002765b0(pfVar1,&fStack_b0,0x42c770);
      if ((0x32 < (int)*(float *)*piVar2) || ((int)((float *)*piVar2)[1] < -0x32)) {
        FUN_001fc9a8(param_1,iVar4);
      }
    }
    pfVar3 = pfVar3 + 2;
    iVar4 = iVar6 >> 0x10;
    iVar6 = iVar6 + 0x10000;
    piVar2 = piVar2 + 1;
    if (7 < iVar4) {
      return;
    }
  } while( true );
}


// ==== FUN_001fc820 @ 001fc820 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "FireBullet" */

void FUN_001fc820(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  float fVar8;
  
  iVar4 = FUN_0015d248(DAT_0040f4e0,*(undefined1 *)(param_1 + 0x195),0);
  if (*(int *)(iVar4 + 0x60) < 0x10) {
    FUN_0021a7e0(0x3f9d08,0,DAT_0040f544 + 0x38c9,0);
    iVar4 = 0x10000;
    piVar7 = (int *)(param_1 + 0xe8);
    pcVar6 = (char *)(param_1 + 0x19c);
    if (*(char *)(param_1 + 0x19c) == '\0') {
      iVar4 = *(int *)(param_1 + 0xe8);
      *(undefined1 *)(param_1 + 0x19c) = 1;
    }
    else {
      do {
        piVar7 = piVar7 + 1;
        iVar5 = iVar4 >> 0x10;
        iVar4 = iVar4 + 0x10000;
        pcVar6 = pcVar6 + 1;
        if (7 < iVar5) {
          return;
        }
      } while (*pcVar6 != '\0');
      *pcVar6 = '\x01';
      iVar4 = *piVar7;
    }
    uVar3 = DAT_0042c78c;
    uVar2 = DAT_0042c788;
    uVar1 = _DAT_0042c780;
    *(int *)(iVar4 + 0x10) = (int)_DAT_0042c780;
    *(int *)(iVar4 + 0x14) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar4 + 0x18) = uVar2;
    *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  }
  else {
    fVar8 = *(float *)(param_1 + 0x198) + *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(param_1 + 0x198) = fVar8;
    if (0.04 <= fVar8) {
      iVar4 = 0x10000;
      piVar7 = (int *)(param_1 + 0xe8);
      pcVar6 = (char *)(param_1 + 0x19c);
      if (*(char *)(param_1 + 0x19c) == '\0') {
        iVar4 = *(int *)(param_1 + 0xe8);
        *(undefined1 *)(param_1 + 0x19c) = 1;
      }
      else {
        do {
          piVar7 = piVar7 + 1;
          iVar5 = iVar4 >> 0x10;
          iVar4 = iVar4 + 0x10000;
          pcVar6 = pcVar6 + 1;
          if (7 < iVar5) goto LAB_001fc990;
        } while (*pcVar6 != '\0');
        *pcVar6 = '\x01';
        iVar4 = *piVar7;
      }
      uVar3 = DAT_0042c78c;
      uVar2 = DAT_0042c788;
      uVar1 = _DAT_0042c780;
      *(int *)(iVar4 + 0x10) = (int)_DAT_0042c780;
      *(int *)(iVar4 + 0x14) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(iVar4 + 0x18) = uVar2;
      *(undefined4 *)(iVar4 + 0x1c) = uVar3;
LAB_001fc990:
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
  }
  return;
}


// ==== FUN_001fc9a8 @ 001fc9a8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fc9a8(int param_1,short param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + param_2 + 0x19c) = 0;
  iVar5 = param_2 * 4;
  piVar4 = (int *)(param_1 + 0xe8 + iVar5);
  *(undefined4 *)(*(int *)(param_1 + iVar5 + 0x108) + 0xc) = 0x3dcccccd;
  uVar3 = DAT_0042c4fc;
  uVar2 = DAT_0042c4f8;
  uVar1 = _DAT_0042c4f0;
  iVar5 = *piVar4;
  *(int *)(iVar5 + 0x10) = (int)_DAT_0042c4f0;
  *(int *)(iVar5 + 0x14) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar5 + 0x18) = uVar2;
  *(undefined4 *)(iVar5 + 0x1c) = uVar3;
  FUN_002765b0(*piVar4,0x42c7c8,0x42c770);
  return;
}


// ==== FUN_001fca20 @ 001fca20 ====

void FUN_001fca20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  float fStack_b0;
  float fStack_ac;
  
  if (*(int *)(param_1 + 300) != 0) {
    iVar4 = 0;
    piVar6 = (int *)(param_1 + 0xac);
    puVar5 = (undefined4 *)(param_1 + 0x70);
    fVar7 = (*(float *)(DAT_0040f0e0 + 0x20140) - *(float *)(param_1 + 0x128)) / 0.6666667;
    pfVar3 = (float *)&DAT_0042c518;
    do {
      if (*pfVar3 <= fVar7) {
        *(int *)(param_1 + 300) = iVar4;
      }
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 6;
    } while (iVar4 < 6);
    iVar4 = *(int *)(param_1 + 300);
    if (iVar4 == 5) {
      uStack_f8 = DAT_0042c598;
      fStack_f0 = (float)DAT_0042c5a0;
      *(undefined4 *)(param_1 + 300) = 0;
    }
    else {
      iVar2 = iVar4 * 0x18;
      fVar7 = (fVar7 - (float)(&DAT_0042c518)[iVar4 * 6]) /
              ((float)(&DAT_0042c530)[iVar4 * 6] - (float)(&DAT_0042c518)[iVar4 * 6]);
      fVar8 = 1.0 - fVar7;
      fStack_ac = *(float *)((int)&DAT_0042c538 + iVar2 + 4) * fVar7;
      uStack_c0 = CONCAT44(fStack_ac,*(float *)(&DAT_0042c538 + iVar4 * 3) * fVar7);
      fStack_f0 = *(float *)(&DAT_0042c528 + iVar2) * fVar8 +
                  *(float *)(&DAT_0042c540 + iVar2) * fVar7;
      fStack_b0 = *(float *)(&DAT_0042c520 + iVar4 * 3) * fVar8 +
                  *(float *)(&DAT_0042c538 + iVar4 * 3) * fVar7;
      fStack_ac = *(float *)((int)&DAT_0042c520 + iVar2 + 4) * fVar8 + fStack_ac;
      uStack_f8 = CONCAT44(fStack_ac,fStack_b0);
    }
    *(float *)(*(int *)(param_1 + 0x1c) + 0xc) = fStack_f0;
    uStack_d0 = CONCAT44(DAT_0042c624 + uStack_f8._4_4_,DAT_0042c620 + (float)uStack_f8);
    uStack_e0 = uStack_d0;
    FUN_002765b0(*(undefined4 *)(param_1 + 0x18),&uStack_e0,0x42c628);
    iVar4 = 0;
    *(float *)(*(int *)(param_1 + 0x24) + 0xc) = fStack_f0;
    do {
      iVar2 = iVar4 * 0x10;
      iVar4 = iVar4 + 1;
      *(float *)(iVar2 + *(int *)(param_1 + 0x24) + 0xc) = fStack_f0;
    } while (iVar4 < 3);
    *(float *)(*(int *)(param_1 + 0x44) + 0xc) = fStack_f0;
    iVar4 = 0xe;
    *(float *)(*(int *)(param_1 + 0x4c) + 0xc) = fStack_f0;
    *(float *)(*(int *)(param_1 + 100) + 0xc) = fStack_f0;
    *(float *)(*(int *)(param_1 + 0x6c) + 0xc) = fStack_f0;
    *(float *)(*(int *)(param_1 + 0x54) + 0xc) = fStack_f0;
    uStack_d0 = CONCAT44(DAT_0042c5ac + uStack_f8._4_4_,DAT_0042c5a8 + (float)uStack_f8);
    uStack_e0 = uStack_d0;
    FUN_002765b0(*(undefined4 *)(param_1 + 0x50),&uStack_e0,0x42c5b8);
    *(float *)(*(int *)(param_1 + 0x5c) + 0xc) = fStack_f0;
    uStack_e0 = DAT_0042c760;
    do {
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
      *(float *)(iVar2 + 0xc) = fStack_f0;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uStack_c0 = CONCAT44(uStack_e0._4_4_ + uStack_f8._4_4_,(float)uStack_e0 + (float)uStack_f8);
      uStack_d0 = uStack_c0;
      FUN_002765b0(uVar1,&uStack_d0,0x42c770);
      uStack_e0 = CONCAT44(uStack_e0._4_4_ + DAT_0042c7c4,(float)uStack_e0 + DAT_0042c7c0);
    } while (-1 < iVar4);
  }
  return;
}


// ==== FUN_001fcd90 @ 001fcd90 ====

void FUN_001fcd90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  *(undefined4 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  return;
}


// ==== FUN_001fcdb8 @ 001fcdb8 ====

void FUN_001fcdb8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  *(undefined4 *)(param_1 + 0x13c) = 1;
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  return;
}


// ==== FUN_001fcde0 @ 001fcde0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fcde0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  float afStack_100 [8];
  undefined8 uStack_e0;
  float fStack_d0;
  float fStack_cc;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b0 [16];
  
  iVar5 = (int)param_1;
  lVar2 = FUN_001fcfe8(*(undefined4 *)(iVar5 + 0x130),param_1,iVar5 + 0x134,auStack_110);
  if (lVar2 != 0) {
    FUN_00277c98(uStack_10c,*(undefined4 *)(iVar5 + 0x20),0x42c640,0x42c648,DAT_0042c650,
                 *(undefined4 *)(iVar5 + 0x24),iVar5 + 0x170);
    piVar4 = (int *)(iVar5 + 0x28);
    pfVar3 = afStack_100;
    iVar6 = 2;
    puVar7 = &DAT_0042c660;
    do {
      auVar8 = _qmtc2(pfVar3[3]);
      fStack_cc = DAT_0042c67c * *pfVar3;
      auVar9 = _lqc2(_DAT_0042c690);
      fStack_d0 = DAT_0042c678 * *pfVar3;
      auVar8 = _vmulbc(auVar9,auVar8);
      auVar8 = _vmove(auVar8);
      pfVar3 = pfVar3 + 1;
      iVar6 = iVar6 + -1;
      uStack_e0 = CONCAT44(fStack_cc,fStack_d0);
      *(undefined8 *)(*piVar4 + 8) = uStack_e0;
      auStack_b0 = _sqc2(auVar8);
      FUN_002765b0(*piVar4,puVar7,0x42c680);
      auVar8 = _lqc2(auStack_b0);
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      auVar8 = _sqc2(auVar8);
      *(undefined1 (*) [16])(iVar1 + 0x10) = auVar8;
      puVar7 = puVar7 + 2;
    } while (-1 < iVar6);
  }
  lVar2 = FUN_001fcfe8(*(undefined4 *)(iVar5 + 0x138),param_1,iVar5 + 0x13c,auStack_110);
  if (lVar2 != 0) {
    FUN_00277c98(uStack_10c,*(undefined4 *)(iVar5 + 0x40),0x42c6a0,0x42c6a8,DAT_0042c6b0,
                 *(undefined4 *)(iVar5 + 0x44),iVar5 + 0x18a);
    fStack_c0 = DAT_0042c6c8 * fStack_108;
    fStack_bc = DAT_0042c6cc * fStack_108;
    auVar9 = _lqc2(_DAT_0042c6e0);
    uStack_e0 = CONCAT44(fStack_bc,fStack_c0);
    auVar8 = _qmtc2(uStack_104);
    auVar8 = _vmulbc(auVar9,auVar8);
    auVar8 = _vmove(auVar8);
    *(undefined8 *)(*(int *)(iVar5 + 0x48) + 8) = uStack_e0;
    auStack_b0 = _sqc2(auVar8);
    FUN_002765b0(*(undefined4 *)(iVar5 + 0x48),0x42c6c0,0x42c6d0);
    auVar8 = _lqc2(auStack_b0);
    auVar8 = _sqc2(auVar8);
    *(undefined1 (*) [16])(*(int *)(iVar5 + 0x48) + 0x10) = auVar8;
  }
  return;
}


// ==== FUN_001fcfe8 @ 001fcfe8 ====

undefined4 FUN_001fcfe8(float param_1,undefined8 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  if (*param_3 != 0) {
    iVar5 = 0;
    pfVar7 = (float *)&DAT_003f9f28;
    param_1 = *(float *)(DAT_0040f0e0 + 0x20140) - param_1;
    param_1 = param_1 + param_1;
    do {
      if (*pfVar7 <= param_1) {
        *param_3 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 10;
    } while (iVar5 < 7);
    iVar5 = *param_3;
    if (iVar5 != 6) {
      iVar1 = iVar5 * 0x28;
      pfVar7 = (float *)(&DAT_003f9f28 + iVar5 * 10);
      iVar8 = 0;
      do {
        iVar2 = iVar8 * 4;
        iVar9 = iVar8 + 1;
        pfVar6 = pfVar7;
        if (pfVar7[iVar8 + 1] == -1.0) {
          pfVar3 = (float *)(&UNK_003f9f2c + iVar2 + iVar1);
          do {
            pfVar3 = pfVar3 + -10;
            pfVar6 = pfVar6 + -10;
          } while (*pfVar3 == -1.0);
        }
        pfVar3 = (float *)(&DAT_003f9f50 + iVar5 * 10);
        if (*(float *)(&UNK_003f9f54 + iVar2 + iVar1) == -1.0) {
          pfVar4 = (float *)(&UNK_003f9f54 + iVar2 + iVar1);
          do {
            pfVar4 = pfVar4 + 10;
            pfVar3 = pfVar3 + 10;
          } while (*pfVar4 == -1.0);
        }
        fVar10 = (param_1 - *pfVar6) / (*pfVar3 - *pfVar6);
        *(float *)(param_4 + 4 + iVar2) =
             pfVar6[iVar8 + 1] * (1.0 - fVar10) + pfVar3[iVar8 + 1] * fVar10;
        iVar8 = iVar9;
      } while (iVar9 < 9);
      return 1;
    }
    *param_3 = 0;
  }
  return 0;
}


// ==== FUN_001fd178 @ 001fd178 ====

void FUN_001fd178(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x14c) < param_2) {
    FUN_001fcd90();
  }
  if (*(char *)(DAT_0040f4d0 + 0x5ca0) != '\0') {
    param_2 = 999;
  }
  *(uint *)(param_1 + 0x14c) = param_2;
  if (param_2 < 999) {
    sprintf(param_1 + 0x16c,0x3f9598,param_2);
  }
  else {
    *(undefined **)(param_1 + 0x16c) = PTR_PTR_003f9d18;
  }
  FUN_00275260(param_1 + 0x16c,param_1 + 0x170,4);
  return;
}


// ==== FUN_001fd230 @ 001fd230 ====

void FUN_001fd230(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_001f1c08();
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined4 *)(param_1 + 0x18 + iVar1) = 0;
  } while (uVar2 < 3);
  FUN_001fd8a0(param_1 + 0x30);
  FUN_001fac78(0x3f000000,param_1 + 0xe0);
  return;
}


// ==== FUN_001fd298 @ 001fd298 ====

undefined4 FUN_001fd298(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_2;
  iVar5 = (int)param_1;
  *(char *)(iVar5 + 0x2d8) = param_2;
  *(int *)(iVar5 + 0x2e0) = (int)*(char *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0xf4) + 0x20);
  puVar2 = *(undefined1 **)(iVar6 * 0x8c0 + DAT_0040f4d0 + 0x2d4);
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0xff;
  }
  else {
    uVar3 = *puVar2;
  }
  *(undefined1 *)(iVar5 + 0x2d9) = 0;
  *(undefined1 *)(iVar5 + 0x2da) = 0;
  *(undefined1 *)(iVar5 + 0x2db) = 0;
  *(undefined1 *)(iVar5 + 0x2dc) = 0;
  *(undefined1 *)(iVar5 + 0x2dd) = uVar3;
  FUN_001f1c10(param_1,2,3,0,iVar6,param_3,param_4);
  FUN_001fd8f0(iVar5 + 0x30,iVar6,param_3,param_4);
  if (*(char *)(iVar5 + 0x2dd) == -1) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(char *)(iVar5 + 0x2dd) * 4 + DAT_00414d54);
  }
  FUN_001fdad0(iVar5 + 0x30,uVar4);
  *(undefined8 *)(iVar5 + 0x2d0) = **(undefined8 **)(iVar5 + 0x30);
  FUN_001fae18(iVar5 + 0xe0,iVar6,param_3,param_4);
  cVar1 = *(char *)(iVar5 + 0x275);
  *(char *)(iVar5 + 0x276) = cVar1;
  *(undefined1 *)(iVar5 + 0x275) = *(undefined1 *)(iVar5 + 0x2dd);
  if (cVar1 == '\0') {
    *(undefined1 *)(iVar5 + 0x276) = *(undefined1 *)(iVar5 + 0x2dd);
  }
  return 1;
}


// ==== FUN_001fd3e8 @ 001fd3e8 ====

void FUN_001fd3e8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x2db) == '\0') {
    FUN_001fd440();
    cVar1 = *(char *)(iVar2 + 0x2d9);
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x2d9);
  }
  if (cVar1 == '\0') {
    FUN_001fd648(param_1);
  }
  FUN_001fba78(iVar2 + 0xe0);
  return;
}


// ==== FUN_001fd440 @ 001fd440 ====

/* Strings referenciadas:
     "SetFireRateMode" */

void FUN_001fd440(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(*(char *)(param_1 + 0x2d8) * 0x8c0 + DAT_0040f4d0 + 0x2d4) == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_00158078();
  }
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x2d9) == '\0') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x2da);
  }
  else {
    if (*(char *)(param_1 + 0x2d9) == '\0') {
      *(undefined1 *)(param_1 + 0x2d9) = 1;
      *(undefined1 *)(param_1 + 0x2da) = 1;
      *(undefined1 *)(param_1 + 0x272) = 1;
      *(undefined1 *)(param_1 + 0x273) = 0;
      cVar1 = *(char *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0xf4) + 0x20);
      if ((long)*(int *)(param_1 + 0x2e0) != (long)cVar1) {
        *(int *)(param_1 + 0x2e0) = (int)cVar1;
      }
      FUN_001fd9c0(0x3f000000,param_1 + 0x30);
      cVar1 = *(char *)(param_1 + 0x2d9);
      goto LAB_001fd580;
    }
    cVar1 = *(char *)(param_1 + 0x2da);
  }
  if (cVar1 == '\0') {
    if (*(float *)(param_1 + 0x90) <= 1.5258789e-05) {
      if (*(int *)(*(char *)(param_1 + 0x2d8) * 0x8c0 + DAT_0040f4d0 + 0x2d4) == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = FUN_00158078();
      }
      if (cVar1 != '\0') {
        cVar1 = *(char *)(param_1 + 0x2d9);
        goto LAB_001fd580;
      }
      *(undefined1 *)(param_1 + 0x2d9) = 0;
      *(undefined1 *)(param_1 + 0x2da) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x2d9);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2d9);
  }
LAB_001fd580:
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x2da) != '\0')) &&
     (*(float *)(param_1 + 0x90) <= 1.5258789e-05)) {
    cVar1 = *(char *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0xf4) + 0x20);
    if ((long)*(int *)(param_1 + 0x2e0) != (long)cVar1) {
      *(int *)(param_1 + 0x2e0) = (int)cVar1;
      iVar3 = DAT_0040f544 + 0x38c9;
      uVar2 = FUN_0024f7d0(3 - cVar1);
      FUN_0021a7e0(0x3f9d48,0,iVar3,1,uVar2);
    }
    *(undefined1 *)(param_1 + 0x2da) = 0;
    FUN_001fd9c0(0x3f000000,param_1 + 0x30);
  }
  return;
}


// ==== FUN_001fd648 @ 001fd648 ====

/* Strings referenciadas:
     "SetFireRateMode"
     "aptCallReload" */

void FUN_001fd648(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  pcVar1 = *(char **)(*(char *)(param_1 + 0x2d8) * 0x8c0 + DAT_0040f4d0 + 0x2d4);
  if (pcVar1 == (char *)0x0) {
    cVar2 = -1;
  }
  else {
    cVar2 = *pcVar1;
  }
  iVar7 = (int)cVar2;
  if ((long)*(char *)(param_1 + 0x2dd) != (long)iVar7) {
    if (*(char *)(param_1 + 0x2db) != '\0') {
      fVar8 = *(float *)(param_1 + 0x90);
      goto LAB_001fd78c;
    }
    iVar6 = (int)*(char *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0xf4) + 0x20);
    *(int *)(param_1 + 0x2e0) = iVar6;
    iVar5 = DAT_0040f544 + 0x38c9;
    uVar3 = FUN_0024f7d0(3 - iVar6);
    FUN_0021a7e0(0x3f9d48,0,iVar5,1,uVar3);
    *(char *)(param_1 + 0x2dd) = cVar2;
    if ((long)iVar7 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar7 * 4 + DAT_00414d54);
    }
    *(undefined4 *)(param_1 + 0xd8) = uVar4;
    *(undefined1 *)(param_1 + 0xd5) = 1;
    *(undefined1 *)(param_1 + 0x2db) = 1;
    *(undefined1 *)(param_1 + 0x2dc) = 1;
    *(undefined1 *)(param_1 + 0x272) = 1;
    *(undefined1 *)(param_1 + 0x273) = 0;
    cVar2 = *(char *)(param_1 + 0x275);
    *(char *)(param_1 + 0x276) = cVar2;
    *(undefined1 *)(param_1 + 0x275) = *(undefined1 *)(param_1 + 0x2dd);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x276) = *(undefined1 *)(param_1 + 0x2dd);
    }
    FUN_001fd9c0(0x3f000000,param_1 + 0x30);
  }
  fVar8 = *(float *)(param_1 + 0x90);
LAB_001fd78c:
  if (1.5258789e-05 < fVar8) {
    fVar8 = *(float *)(param_1 + 0x90);
  }
  else {
    if (*(char *)(param_1 + 0x2dc) != '\0') {
      *(undefined1 *)(param_1 + 0x2dc) = 0;
      iVar7 = (int)*(char *)(*(int *)(*(int *)(DAT_0040f4d0 + 0x2d4) + 0xf4) + 0x20);
      *(int *)(param_1 + 0x2e0) = iVar7;
      iVar6 = DAT_0040f544 + 0x38c9;
      uVar3 = FUN_0024f7d0(3 - iVar7);
      FUN_0021a7e0(0x3f9d48,0,iVar6,1,uVar3);
      FUN_0021a7e0(0x3f9d58,0,0,0);
      FUN_001fd9c0(0x3f000000,param_1 + 0x30);
      return;
    }
    fVar8 = *(float *)(param_1 + 0x90);
  }
  if ((fVar8 <= 1.5258789e-05) && (*(char *)(param_1 + 0x2dc) == '\0')) {
    *(undefined1 *)(param_1 + 0x2db) = 0;
  }
  return;
}


// ==== FUN_001fd8a0 @ 001fd8a0 ====

void FUN_001fd8a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_001f1c08();
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined4 *)(param_1 + 0x70 + iVar1) = 0;
  } while (uVar2 < 2);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


// ==== FUN_001fd8f0 @ 001fd8f0 ====

/* Strings referenciadas:
     "HUD_AmmoType" */

undefined4 FUN_001fd8f0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(iVar1 + 0xa5) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined1 *)(iVar1 + 0xa4) = 1;
  FUN_001f1ee0(param_1,3,2,0,param_2,param_3,param_4);
  FUN_00275260(0x40dda8,iVar1 + 0x7c,0x14);
  FUN_001f1d48(param_1,0x3f9dd8,iVar1 + 0x7c);
  return 1;
}


// ==== FUN_001fd978 @ 001fd978 ====

void FUN_001fd978(void)

{
  FUN_001f1f08();
  return;
}


// ==== FUN_001fd998 @ 001fd998 ====

/* Strings referenciadas:
     "HUD_AmmoType" */

undefined4 FUN_001fd998(undefined8 param_1)

{
  FUN_001f1e20(param_1,0x3f9dd8);
  return 1;
}


// ==== FUN_001fd9c0 @ 001fd9c0 ====

void FUN_001fd9c0(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined8 uStack_50;
  
  piVar2 = (int *)param_2;
  iVar1 = *piVar2;
  piVar2[0xc] = 0x3f800000;
  piVar2[0xd] = 0x3f800000;
  piVar2[0xe] = 0x3f800000;
  piVar2[0xf] = 0x3f800000;
  piVar2[8] = 0x3f800000;
  piVar2[9] = 0x3f800000;
  piVar2[10] = 0x3f800000;
  piVar2[0xb] = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x18) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
  piVar2[0x16] = 0x3f800000;
  piVar2[0x17] = 0x3f800000;
  piVar2[0x14] = 0x3f800000;
  piVar2[0x15] = 0x3f800000;
  *(undefined8 *)(*piVar2 + 8) = 0x3f8000003f800000;
  if ((char)piVar2[0x29] == '\0') {
    if (*(char *)((int)piVar2 + 0xa5) != '\0') {
      *(undefined1 *)((int)piVar2 + 0xa5) = 0;
      FUN_001fdad0(param_2,piVar2[0x2a]);
    }
    uStack_50 = *(undefined8 *)*piVar2;
    *(undefined8 *)(piVar2 + 0x12) = uStack_50;
    *(undefined8 *)(piVar2 + 0x10) = uStack_50;
    *(undefined8 *)*piVar2 = uStack_50;
    fVar3 = (float)uStack_50 - 150.0;
  }
  else {
    uStack_50 = *(undefined8 *)*piVar2;
    *(undefined8 *)(piVar2 + 0x12) = uStack_50;
    *(undefined8 *)(piVar2 + 0x10) = uStack_50;
    *(undefined8 *)*piVar2 = uStack_50;
    fVar3 = (float)uStack_50 + 150.0;
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,fVar3);
  *(undefined8 *)(piVar2 + 0x12) = uStack_50;
  piVar2[0x19] = param_1;
  piVar2[0x18] = param_1;
  *(byte *)(piVar2 + 0x29) = *(byte *)(piVar2 + 0x29) ^ 1;
  return;
}


// ==== FUN_001fdad0 @ 001fdad0 ====

/* Strings referenciadas:
     "AMMOTYPE_HP"
     "AMMOTYPE_LT"
     "AMMOTYPE_HV"
     "AMMOTYPE_SS"
     "AMMOTYPE_HC"
     "AMMOTYPE_FG"
     "AMMOTYPE_RG" */

void FUN_001fdad0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  switch(param_2) {
  case 1:
    puVar2 = PTR_s_AMMOTYPE_HP_003bdc68;
    break;
  case 2:
    puVar2 = PTR_s_AMMOTYPE_SS_003bdc74;
    break;
  case 3:
    puVar2 = PTR_s_AMMOTYPE_HC_003bdc78;
    break;
  case 4:
    puVar2 = PTR_s_AMMOTYPE_LT_003bdc6c;
    break;
  case 5:
  case 0x11:
    puVar2 = PTR_s_AMMOTYPE_HV_003bdc70;
    break;
  case 6:
    puVar2 = PTR_s_AMMOTYPE_HV_003bdc84;
    break;
  default:
    return;
  case 10:
    puVar2 = PTR_s_AMMOTYPE_RG_003bdc80;
    break;
  case 0xc:
    puVar2 = PTR_s_AMMOTYPE_FG_003bdc7c;
    break;
  case 0x12:
    uVar1 = FUN_001087c8(DAT_0040f4c4,PTR_s_AMMOTYPE_HP_003bdc68);
    FUN_00275260(uVar1,param_1 + 0x7c,0x14);
    return;
  }
  uVar1 = FUN_001087c8(DAT_0040f4c4,puVar2);
  FUN_00275260(uVar1,param_1 + 0x7c,0x14);
  return;
}


// ==== FUN_001fdbf8 @ 001fdbf8 ====

void FUN_001fdbf8(int param_1)

{
  FUN_001f1c08();
  FUN_00275260(PTR_DAT_003bdc88,param_1 + 0x18,4);
  FUN_00275260(PTR_DAT_003bdc8c,param_1 + 0x20,4);
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


// ==== FUN_001fdc48 @ 001fdc48 ====

/* Strings referenciadas:
     "HUD_HoldBreath"
     "hud_midzoom"
     "hud_maxzoom"
     "hud_holdbreath" */

undefined4 FUN_001fdc48(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  puVar4 = (undefined4 *)param_1;
  puVar5 = puVar4 + 0x1e;
  puVar6 = puVar4 + 10;
  FUN_001f1c10(param_1,1,5,0,param_2,param_3,param_4);
  uVar7 = 0;
  uStack_120 = 0;
  uStack_11c = 0x42aa0000;
  uStack_110 = 0x3f800000;
  uStack_10c = 0x3f800000;
  uStack_108 = 0x3f800000;
  uStack_104 = 0;
  iVar3 = *(char *)((int)puVar4 + 0x12) * 0xa8 + DAT_0040f518 + 0x40;
  *(undefined8 *)(puVar4 + 0x1e) = 0x42aa000000000000;
  puVar4[0x20] = 0x3f800000;
  puVar4[0x21] = 0x3f800000;
  puVar4[0x22] = 0x3f800000;
  puVar4[0x23] = 0;
  uVar1 = FUN_00278ec0(iVar3,*(undefined2 *)(puVar4 + 4),*puVar4);
  puVar4[0x1a] = uVar1;
  uVar1 = FUN_00278ec0(iVar3,*(undefined2 *)(puVar4 + 4),*puVar4);
  puVar4[0x1b] = uVar1;
  uVar1 = FUN_00278ec0(iVar3,*(undefined2 *)(puVar4 + 4),*puVar4);
  puVar4[0x1c] = uVar1;
  uStack_120 = 0x3f000000;
  uStack_11c = 0x3f000000;
  uStack_100 = 0x3f800000;
  uStack_fc = 0x3f800000;
  FUN_00277530(uVar7,puVar4[0x1a],puVar5,&uStack_120,*(undefined8 *)(puVar4 + 0x20),
               *(undefined4 *)(DAT_0040f0e0 + 0x2107c),puVar4 + 6,&uStack_100,2);
  *(undefined8 *)(puVar4[0x1a] + 8) = DAT_0042ca30;
  uVar2 = FUN_001087c8(DAT_0040f4c4,0x3f9e48);
  FUN_00369ff0(&uStack_120,0x20,uVar2);
  FUN_00275260(&uStack_120,puVar6,0x20);
  uStack_f0 = 0x3f000000;
  uStack_ec = 0x3f000000;
  uStack_e0 = 0x3f800000;
  uStack_dc = 0x3f800000;
  FUN_00277530(uVar7,puVar4[0x1b],puVar5,&uStack_f0,*(undefined8 *)(puVar4 + 0x20),
               *(undefined4 *)(DAT_0040f0e0 + 0x2107c),puVar4 + 8,&uStack_e0,2);
  *(undefined8 *)(puVar4[0x1b] + 8) = DAT_0042ca30;
  uStack_f0 = 0x3f000000;
  uStack_ec = 0x3f000000;
  uStack_c4 = 0x3f800000;
  uStack_d0 = 0x3f800000;
  uStack_cc = 0x3f800000;
  uStack_c8 = uVar7;
  FUN_001fff90(uVar7,puVar4[0x1c],puVar5,&uStack_f0,*(undefined8 *)(puVar4 + 0x20),
               CONCAT44(uVar7,uVar7),*(undefined4 *)(DAT_0040f0e0 + 0x2107c),puVar6,&uStack_d0);
  FUN_001f1d48(param_1,0x3f9e58,puVar4 + 6);
  FUN_001f1d48(param_1,0x3f9e68,puVar4 + 8);
  FUN_001f1d48(param_1,0x3f9e78,puVar6);
  return 1;
}


// ==== FUN_001fdf28 @ 001fdf28 ====

void FUN_001fdf28(void)

{
  FUN_001fdff8();
  return;
}


// ==== FUN_001fdf48 @ 001fdf48 ====

/* Strings referenciadas:
     "hud_midzoom"
     "hud_maxzoom"
     "hud_holdbreath" */

undefined4 FUN_001fdf48(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00278f00(*(char *)(iVar1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(undefined2 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x68));
  FUN_00278f00(*(char *)(iVar1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(undefined2 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x6c));
  FUN_001f1e20(param_1,0x3f9e58);
  FUN_001f1e20(param_1,0x3f9e68);
  FUN_001f1e20(param_1,0x3f9e78);
  return 1;
}


// ==== FUN_001fdff8 @ 001fdff8 ====

void FUN_001fdff8(void)

{
  return;
}


// ==== FUN_001fe000 @ 001fe000 ====

void FUN_001fe000(int param_1)

{
  FUN_001f1c08();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  FUN_00275260(0x40dda8,param_1 + 0x24,0x40);
  FUN_00275260(0x40dda8,param_1 + 0xa4,0x40);
  return;
}


// ==== FUN_001fe068 @ 001fe068 ====

/* Strings referenciadas:
     "Eurostile LT Std" */

undefined4 FUN_001fe068(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  iVar11 = 0;
  FUN_001f1c10(param_1,2,2,0,param_2,param_3);
  puVar9 = (undefined4 *)param_1;
  iVar6 = *(char *)((int)puVar9 + 0x12) * 0xa8 + DAT_0040f518 + 0x40;
  FUN_00275260(0x40dda8,puVar9 + 9,0x40);
  FUN_00275260(0x40dda8,puVar9 + 0x29,0x40);
  uVar3 = FUN_00278ec0(iVar6,*(undefined2 *)(puVar9 + 4),*puVar9);
  puVar9[8] = uVar3;
  uVar3 = FUN_00278ec0(iVar6,*(short *)(puVar9 + 4) + 1,*puVar9);
  puVar9[6] = uVar3;
  uVar3 = FUN_00278ec0(iVar6,*(short *)(puVar9 + 4) + 1,*puVar9);
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f0 = 0x3f000000;
  uStack_ec = 0x3f000000;
  uStack_e0 = 0;
  uStack_dc = 0;
  uVar12 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  puVar9[7] = uVar3;
  FUN_00276610(puVar9[8],&uStack_100,&uStack_f0,&uStack_e0,0);
  iVar6 = DAT_0040f0e0;
  uVar2 = *(undefined8 *)(puVar9 + 0x4c);
  uVar3 = puVar9[0x4e];
  uVar10 = puVar9[0x4f];
  uStack_fc = 0x41a00000;
  uStack_f0 = 0x3f000000;
  uStack_ec = 0x3f000000;
  ppuVar8 = &PTR_s_ITC_Machine_Std_003bc3a0;
  piVar7 = (int *)(DAT_0040f0e0 + 0x2107c);
  uStack_100 = uVar12;
  do {
    if ((*piVar7 != 0) && (lVar4 = stricmp(*ppuVar8,0x3f9ce8), lVar4 == 0)) {
      iVar6 = *piVar7;
      goto LAB_001fe22c;
    }
    iVar11 = iVar11 + 1;
    ppuVar8 = ppuVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar11 < 2);
  iVar6 = *(int *)(iVar6 + 0x2107c);
LAB_001fe22c:
  auVar5._8_4_ = uVar3;
  auVar5._0_8_ = uVar2;
  auVar5._12_4_ = uVar10;
  auVar5 = _por(in_zero_qw,auVar5);
  uStack_c0 = 0x3f800000;
  uStack_bc = 0x3f800000;
  iVar11 = 0;
  FUN_00277530(uVar12,puVar9[6],&uStack_100,&uStack_f0,auVar5._0_8_,iVar6,puVar9 + 9,&uStack_c0,1);
  iVar6 = DAT_0040f0e0;
  uVar2 = *(undefined8 *)(puVar9 + 0x4c);
  uVar3 = puVar9[0x4e];
  uVar10 = puVar9[0x4f];
  uStack_ec = 0x3f000000;
  uStack_fc = 0xc1a00000;
  uStack_100 = 0;
  ppuVar8 = &PTR_s_ITC_Machine_Std_003bc3a0;
  uStack_f0 = 0x3f000000;
  piVar7 = (int *)(DAT_0040f0e0 + 0x2107c);
  while ((*piVar7 == 0 || (lVar4 = stricmp(*ppuVar8,0x3f9ce8), lVar4 != 0))) {
    iVar11 = iVar11 + 1;
    ppuVar8 = ppuVar8 + 1;
    piVar7 = piVar7 + 1;
    if (1 < iVar11) {
      iVar6 = *(int *)(iVar6 + 0x2107c);
LAB_001fe2f4:
      auVar1._8_4_ = uVar3;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = uVar10;
      auVar5 = _por(in_zero_qw,auVar1);
      uStack_dc = 0x3f800000;
      uStack_e0 = 0x3f800000;
      FUN_00277530(0,puVar9[7],&uStack_100,&uStack_f0,auVar5._0_8_,iVar6,puVar9 + 0x29,&uStack_e0,1)
      ;
      puVar9[0x57] = 0;
      *(undefined1 *)(puVar9 + 0x54) = 0;
      *(undefined1 *)((int)puVar9 + 0x151) = 0;
      puVar9[0x55] = 0;
      puVar9[0x58] = 0;
      puVar9[0x56] = 0;
      return 1;
    }
  }
  iVar6 = *piVar7;
  goto LAB_001fe2f4;
}


// ==== fe_FE_LEVELNAME0_EXTRA2_001fe380 @ 001fe380 ====

/* Strings referenciadas:
     "ITC Machine Std"
     "Eurostile LT Std"
     "FE_LEVELNAME0_EXTRA2"
     "FE_LEVELNAME%d"
     "_EXTRA" */

void fe_FE_LEVELNAME0_EXTRA2_001fe380(float param_1,int param_2)

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
  undefined1 in_zero_qw [16];
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  undefined4 *puVar15;
  undefined1 auVar16 [16];
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined **ppuVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  undefined1 in_vf0 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float afStack_2c0 [4];
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  float fStack_270;
  float fStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 auStack_1f0 [8];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 auStack_1b0 [4];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 auStack_170 [4];
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  float *pfStack_154;
  int iStack_150;
  undefined1 auStack_140 [16];
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined1 auStack_110 [16];
  int iStack_100;
  float fStack_f0;
  int iStack_ec;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  int iStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  int iStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  
  pfVar14 = afStack_2c0;
  switch(*(undefined4 *)(param_2 + 0x160)) {
  case 0:
    fVar29 = *(float *)(param_2 + 0x158);
    fVar30 = 0.0;
    if (fVar29 != 0.0) goto LAB_001ffd80;
    afStack_2c0[0] = 0.0;
    afStack_2c0[1] = 0.0;
    uStack_2b0 = 0x3f000000;
    uStack_2ac = 0x3f000000;
    uStack_290 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    iStack_d8 = param_2 + 0xa4;
    iStack_cc = param_2 + 0x24;
    FUN_00276610(*(undefined4 *)(param_2 + 0x20),afStack_2c0,&uStack_2b0,&uStack_2a0);
    FUN_00275260(0x40dda8,param_2 + 0x24,0x40);
    FUN_00275260(0x40dda8,param_2 + 0xa4,0x40);
    uVar25 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x160);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x160);
    *(undefined4 *)(param_2 + 0x134) = uVar25;
    *(undefined4 *)(param_2 + 0x138) = uVar27;
    *(undefined4 *)(param_2 + 0x13c) = uVar26;
    iVar20 = DAT_0040f0e0;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    afStack_2c0[1] = 20.0;
    uStack_2b0 = 0x3f000000;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    uStack_2ac = 0x3f000000;
    iVar21 = 0;
    piVar18 = piVar19;
    afStack_2c0[0] = fVar30;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001fe534;
      }
      iVar23 = iVar21 + 1;
      iVar28 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
      iVar21 = iVar23;
    } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001fe534:
    uStack_280 = 0x3f800000;
    uStack_27c = 0x3f800000;
    auVar4._8_4_ = uVar27;
    auVar4._0_8_ = uVar12;
    auVar4._12_4_ = uVar26;
    auVar31 = _por(in_zero_qw,auVar4);
    FUN_00277530(0,*(undefined4 *)(param_2 + 0x18),afStack_2c0,&uStack_2b0,auVar31._0_8_,iVar20,
                 iStack_cc,&uStack_280,1);
    iVar20 = DAT_0040f0e0;
    afStack_2c0[0] = 0.0;
    afStack_2c0[1] = -20.0;
    uStack_2b0 = 0x3f000000;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    uStack_2ac = 0x3f000000;
    uVar12 = *(undefined8 *)(param_2 + 0x130);
    uVar27 = *(undefined4 *)(param_2 + 0x138);
    uVar26 = *(undefined4 *)(param_2 + 0x13c);
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    iVar21 = 0;
    piVar18 = piVar19;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001fe5f8;
      }
      iVar23 = iVar21 + 1;
      iVar28 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
      iVar21 = iVar23;
    } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001fe5f8:
    puVar15 = &uStack_2b0;
    uVar25 = 0;
    auVar11._8_4_ = uVar27;
    auVar11._0_8_ = uVar12;
    auVar11._12_4_ = uVar26;
    auVar31 = _por(in_zero_qw,auVar11);
    uVar12 = auVar31._0_8_;
    uStack_2a0 = 0x3f800000;
    puVar17 = &uStack_2a0;
    uStack_29c = 0x3f800000;
    goto LAB_001ff100;
  case 1:
    fVar29 = *(float *)(param_2 + 0x158);
    uVar25 = 0;
    if (fVar29 == 0.0) {
      afStack_2c0[1] = 480.0;
      afStack_2c0[0] = 640.0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      uStack_2a0 = 0x3f000000;
      uStack_29c = 0x3f000000;
      iVar21 = 0;
      fStack_270 = 0.0;
      fStack_26c = 0.0;
      uStack_268 = 0;
      uStack_264 = 0x3f800000;
      iStack_d8 = param_2 + 0xa4;
      iStack_cc = param_2 + 0x24;
      FUN_00276610(*(undefined4 *)(param_2 + 0x20),&uStack_2b0,&uStack_2a0,afStack_2c0);
      FUN_00275260(0x40dda8,param_2 + 0x24,0x40);
      FUN_00275260(0x40dda8,param_2 + 0xa4,0x40);
      puStack_d0 = &uStack_290;
      uVar27 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar12 = *(undefined8 *)(DAT_0040f518 + 0x160);
      uVar26 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar22 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
      *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_2 + 0x134) = uVar27;
      *(undefined4 *)(param_2 + 0x138) = uVar26;
      *(undefined4 *)(param_2 + 0x13c) = uVar22;
      iVar20 = DAT_0040f0e0;
      uStack_2ac = 0x41a00000;
      uStack_2a0 = 0x3f000000;
      uStack_29c = 0x3f000000;
      piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
      piVar18 = piVar19;
      uStack_2b0 = uVar25;
      do {
        if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
          iVar20 = *piVar18;
          goto LAB_001fe784;
        }
        iVar21 = iVar21 + 1;
        ppuVar24 = ppuVar24 + 1;
        piVar19 = piVar19 + 1;
        piVar18 = piVar18 + 1;
      } while (iVar21 < 2);
      iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001fe784:
      uVar25 = *(undefined4 *)(param_2 + 0x18);
      auVar3._8_4_ = uVar26;
      auVar3._0_8_ = uVar12;
      auVar3._12_4_ = uVar22;
      auVar31 = _por(in_zero_qw,auVar3);
      uStack_290 = 0x3f800000;
      puStack_d0[1] = 0x3f800000;
      FUN_00277530(0x41800000,uVar25,&uStack_2b0,&uStack_2a0,auVar31._0_8_,iVar20,iStack_cc,
                   puStack_d0,1);
      iVar20 = DAT_0040f0e0;
      uStack_2b0 = 0;
      uStack_2ac = 0xc1a00000;
      uStack_2a0 = 0x3f000000;
      uStack_29c = 0x3f000000;
      ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
      uVar12 = *(undefined8 *)(param_2 + 0x130);
      uVar25 = *(undefined4 *)(param_2 + 0x138);
      uVar27 = *(undefined4 *)(param_2 + 0x13c);
      piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
      iVar21 = 0;
      piVar18 = piVar19;
      do {
        if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
          iVar20 = *piVar18;
          goto LAB_001fe850;
        }
        iVar23 = iVar21 + 1;
        iVar28 = iVar21 + 1;
        ppuVar24 = ppuVar24 + 1;
        piVar19 = piVar19 + 1;
        piVar18 = piVar18 + 1;
        iVar21 = iVar23;
      } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
      iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001fe850:
      uVar26 = *(undefined4 *)(param_2 + 0x1c);
      auVar10._8_4_ = uVar25;
      auVar10._0_8_ = uVar12;
      auVar10._12_4_ = uVar27;
      auVar31 = _por(in_zero_qw,auVar10);
      uStack_290 = 0x3f800000;
      puStack_d0[1] = 0x3f800000;
      FUN_00277530(0x41800000,uVar26,&uStack_2b0,&uStack_2a0,auVar31._0_8_,iVar20,iStack_d8,
                   puStack_d0,1);
      fVar29 = *(float *)(param_2 + 0x158);
    }
    goto LAB_001ffd80;
  case 2:
    uStack_260 = 0x44200000;
    uVar25 = 0x3f000000;
    uStack_25c = 0x43f00000;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_240 = 0x3f000000;
    uStack_23c = 0x3f000000;
    iVar21 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_224 = 0x3f800000;
    iStack_d8 = param_2 + 0xa4;
    iStack_cc = param_2 + 0x24;
    FUN_00276610(*(undefined4 *)(param_2 + 0x20),&uStack_250,&uStack_240);
    uVar12 = FUN_001087c8(DAT_0040f4c4,0x3f9e88);
    FUN_0035d1a0(afStack_2c0,uVar12,0x3e);
    FUN_0035c7a4(afStack_2c0,0x40ddd0);
    iStack_15c = strlen(afStack_2c0);
    FUN_00275260(afStack_2c0,param_2 + 0x24,0x40);
    FUN_00275260(0x40dda8,param_2 + 0xa4,0x40);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 500);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
    uVar22 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
    uStack_24c = 0;
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
    *(undefined4 *)(param_2 + 0x134) = uVar27;
    *(undefined4 *)(param_2 + 0x138) = uVar26;
    *(undefined4 *)(param_2 + 0x13c) = uVar22;
    iVar20 = DAT_0040f0e0;
    uStack_250 = 0;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    iStack_160 = (int)(*(float *)(param_2 + 0x158) / 0.05);
    puStack_c8 = &uStack_220;
    piVar18 = piVar19;
    uStack_240 = uVar25;
    uStack_23c = uVar25;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001fea2c;
      }
      iVar21 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
    } while (iVar21 < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001fea2c:
    uStack_220 = 0x3f800000;
    auVar2._8_4_ = uVar26;
    auVar2._0_8_ = uVar12;
    auVar2._12_4_ = uVar22;
    auVar31 = _por(in_zero_qw,auVar2);
    puStack_c8[1] = 0x3f800000;
    FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x18),&uStack_250,&uStack_240,auVar31._0_8_,
                 iVar20,iStack_cc,puStack_c8,1);
    if (iStack_15c <= iStack_160) {
      if (*(int *)(param_2 + 0x160) == 3) {
        fVar29 = *(float *)(param_2 + 0x158);
        goto LAB_001ffd80;
      }
      *(undefined4 *)(param_2 + 0x160) = 3;
      *(undefined4 *)(param_2 + 0x158) = 0;
LAB_001ffa4c:
      (**(code **)(*(int *)(param_2 + 0x14) + 0x14))
                (*(undefined4 *)(DAT_0040f4d0 + 0x1c),
                 param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x10));
      fVar29 = *(float *)(param_2 + 0x158);
      goto LAB_001ffd80;
    }
    FUN_00275260(0x40ddd0,param_2 + iStack_160 * 2 + 0x24,2);
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    uVar25 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x160);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    uStack_250 = 0;
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x160);
    *(undefined4 *)(param_2 + 0x134) = uVar25;
    *(undefined4 *)(param_2 + 0x138) = uVar27;
    *(undefined4 *)(param_2 + 0x13c) = uVar26;
    iVar20 = DAT_0040f0e0;
    uStack_24c = 0xc1a00000;
    puStack_c4 = &uStack_210;
    uStack_240 = 0x3f000000;
    uStack_23c = 0x3f000000;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    iVar21 = 0;
    piVar18 = piVar19;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001feb68;
      }
      iVar23 = iVar21 + 1;
      iVar28 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
      iVar21 = iVar23;
    } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001feb68:
    uStack_210 = 0x3f800000;
    auVar9._8_4_ = uVar27;
    auVar9._0_8_ = uVar12;
    auVar9._12_4_ = uVar26;
    auVar31 = _por(in_zero_qw,auVar9);
    puStack_c4[1] = 0x3f800000;
    FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x1c),&uStack_250,&uStack_240,auVar31._0_8_,
                 iVar20,iStack_d8,puStack_c4,1);
    if (*(float *)(param_2 + 0x158) == 0.0) {
      FUN_001eed98((float)iStack_15c * 0.05,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),
                   0xe);
      fVar29 = *(float *)(param_2 + 0x158);
      goto LAB_001ffd80;
    }
    break;
  case 3:
    uVar25 = 0x3f000000;
    afStack_2c0[0] = 640.0;
    afStack_2c0[1] = 480.0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    iVar21 = 0;
    uStack_2a0 = 0x3f000000;
    uStack_29c = 0x3f000000;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_284 = 0x3f800000;
    iStack_cc = param_2 + 0x24;
    FUN_00276610(*(undefined4 *)(param_2 + 0x20),&uStack_2b0,&uStack_2a0,afStack_2c0);
    uVar12 = FUN_001087c8(DAT_0040f4c4,0x3f9e88);
    FUN_0035d1a0(&uStack_2b0,uVar12,0x3e);
    FUN_0035c7a4(&uStack_2b0,0x40ddd0);
    iStack_158 = strlen(&uStack_2b0);
    FUN_00275260(&uStack_2b0,param_2 + 0x24,0x40);
    pfStack_154 = &fStack_270;
    uVar27 = *(undefined4 *)(DAT_0040f518 + 500);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
    uVar22 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
    fStack_26c = 0.0;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
    *(undefined4 *)(param_2 + 0x134) = uVar27;
    *(undefined4 *)(param_2 + 0x138) = uVar26;
    *(undefined4 *)(param_2 + 0x13c) = uVar22;
    iVar20 = DAT_0040f0e0;
    fStack_270 = 0.0;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    piVar18 = piVar19;
    uStack_260 = uVar25;
    uStack_25c = uVar25;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001fed64;
      }
      iVar21 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
    } while (iVar21 < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001fed64:
    auVar1._8_4_ = uVar26;
    auVar1._0_8_ = uVar12;
    auVar1._12_4_ = uVar22;
    auVar31 = _por(in_zero_qw,auVar1);
    uStack_200 = 0x3f800000;
    uStack_1fc = 0x3f800000;
    FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x18),pfStack_154,&uStack_260,auVar31._0_8_,
                 iVar20,iStack_cc,&uStack_200,1);
    fVar29 = *(float *)(param_2 + 0x15c) + param_1;
    *(float *)(param_2 + 0x15c) = fVar29;
    if (0.5 < fVar29 - (float)(int)fVar29) {
      *(undefined2 *)(iStack_cc + (iStack_158 + -1) * 2) = 0;
    }
    break;
  case 4:
    uStack_280 = 0x44200000;
    uStack_27c = 0x43f00000;
    fStack_270 = 0.0;
    fStack_26c = 0.0;
    uStack_260 = 0x3f000000;
    fVar29 = 0.0;
    uStack_25c = 0x3f000000;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_244 = 0x3f800000;
    iStack_cc = param_2 + 0x24;
    FUN_00276610(*(undefined4 *)(param_2 + 0x20),&fStack_270,&uStack_260);
    uVar12 = FUN_001087c8(DAT_0040f4c4,0x3f9e88);
    FUN_0035d1a0(afStack_2c0,uVar12,0x3e);
    FUN_0035c7a4(afStack_2c0,0x40ddd0);
    iStack_150 = strlen(afStack_2c0);
    FUN_00275260(afStack_2c0,param_2 + 0x24,0x40);
    fVar30 = 1.0 - *(float *)(param_2 + 0x158);
    uVar25 = *(undefined4 *)(DAT_0040f518 + 500);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
    *(undefined4 *)(param_2 + 0x134) = uVar25;
    *(undefined4 *)(param_2 + 0x138) = uVar27;
    *(undefined4 *)(param_2 + 0x13c) = uVar26;
    if (fVar30 <= fVar29) {
      if (*(int *)(param_2 + 0x160) != 1) {
        *(undefined4 *)(param_2 + 0x160) = 1;
        *(float *)(param_2 + 0x158) = fVar29;
        goto LAB_001ffa4c;
      }
      break;
    }
    auVar16 = _qmtc2(fVar30);
    auVar31 = _lqc2(*(undefined1 (*) [16])(DAT_0040f518 + 0x1f0));
    iStack_d8 = param_2 + 0xa4;
    iVar20 = 0;
    _vmove(auVar31);
    auVar16 = _vmulbc(in_vf0,auVar16);
    auVar31 = _qmfc2(auVar16._0_4_);
    auStack_140 = _sqc2(auVar16);
    *(int *)(param_2 + 0x130) = auVar31._0_4_;
    *(int *)(param_2 + 0x134) = auVar31._4_4_;
    *(int *)(param_2 + 0x138) = auVar31._8_4_;
    *(int *)(param_2 + 0x13c) = auVar31._12_4_;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    uStack_25c = 0x3f000000;
    piVar18 = (int *)(DAT_0040f0e0 + 0x2107c);
    uStack_260 = 0x3f000000;
    fStack_270 = fVar29;
    fStack_26c = fVar29;
    do {
      if ((*piVar18 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) break;
      iVar20 = iVar20 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar18 = piVar18 + 1;
    } while (iVar20 < 2);
    uStack_250 = 0x3f800000;
    uStack_24c = 0x3f800000;
    FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x18),&fStack_270,&uStack_260);
    fVar29 = *(float *)(param_2 + 0x15c) + param_1;
    *(float *)(param_2 + 0x15c) = fVar29;
    if (0.5 < fVar29 - (float)(int)fVar29) {
      *(undefined2 *)(iStack_cc + (iStack_150 + -1) * 2) = 0;
    }
    uVar25 = *(undefined4 *)(DAT_0040f518 + 0x164);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x160);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 0x168);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x16c);
    fStack_26c = -20.0;
    uStack_25c = 0x3f000000;
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x160);
    *(undefined4 *)(param_2 + 0x134) = uVar25;
    *(undefined4 *)(param_2 + 0x138) = uVar27;
    *(undefined4 *)(param_2 + 0x13c) = uVar26;
    iVar20 = DAT_0040f0e0;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    fStack_270 = 0.0;
    uStack_260 = 0x3f000000;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    iVar21 = 0;
    piVar18 = piVar19;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001ff0d8;
      }
      iVar23 = iVar21 + 1;
      iVar28 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
      iVar21 = iVar23;
    } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001ff0d8:
    pfVar14 = &fStack_270;
    uVar25 = 0x41800000;
    puVar15 = &uStack_260;
    uStack_250 = 0x3f800000;
    auVar8._8_4_ = uVar27;
    auVar8._0_8_ = uVar12;
    auVar8._12_4_ = uVar26;
    auVar31 = _por(in_zero_qw,auVar8);
    uVar12 = auVar31._0_8_;
    uStack_24c = 0x3f800000;
    puVar17 = &uStack_250;
LAB_001ff100:
    FUN_00277530(uVar25,*(undefined4 *)(param_2 + 0x1c),pfVar14,puVar15,uVar12,iVar20,iStack_d8,
                 puVar17,1);
    fVar29 = *(float *)(param_2 + 0x158);
    goto LAB_001ffd80;
  case 5:
    iStack_124 = 0;
    iStack_128 = (int)(*(float *)(param_2 + 0x158) / 0.05);
    iStack_cc = param_2 + 0x24;
    sprintf(auStack_1f0,0x3f9ea0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    iStack_d8 = param_2 + 0xa4;
    uVar12 = FUN_001087c8(DAT_0040f4c4,auStack_1f0);
    FUN_0035d1a0(afStack_2c0,uVar12,0x3e);
    iStack_130 = strlen(afStack_2c0);
    FUN_0035c7a4(auStack_1f0,0x3f9eb0);
    uVar12 = FUN_001087c8(DAT_0040f4c4,auStack_1f0);
    FUN_0035d1a0(&uStack_280,uVar12,0x3e);
    FUN_0035c7a4(&uStack_280,0x40ddd0);
    iStack_12c = strlen(&uStack_280);
    FUN_00275260(afStack_2c0,param_2 + 0x24,0x3e);
    puStack_dc = auStack_1b0;
    puStack_d4 = auStack_170;
    uVar25 = *(undefined4 *)(DAT_0040f518 + 500);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
    uStack_1d0 = 0;
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
    *(undefined4 *)(param_2 + 0x134) = uVar25;
    *(undefined4 *)(param_2 + 0x138) = uVar27;
    *(undefined4 *)(param_2 + 0x13c) = uVar26;
    iVar20 = DAT_0040f0e0;
    uStack_1cc = 0xc1a00000;
    uStack_1c0 = 0x3f000000;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    uStack_1bc = 0x3f000000;
    piVar18 = piVar19;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001ff2bc;
      }
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
      iStack_124 = iStack_124 + 1;
    } while (iStack_124 < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001ff2bc:
    uVar25 = *(undefined4 *)(param_2 + 0x18);
    auVar5._8_4_ = uVar27;
    auVar5._0_8_ = uVar12;
    auVar5._12_4_ = uVar26;
    auVar31 = _por(in_zero_qw,auVar5);
    auStack_1b0[0] = 0x3f800000;
    puStack_dc[1] = 0x3f800000;
    FUN_00277530(0x41800000,uVar25,&uStack_1d0,&uStack_1c0,auVar31._0_8_,iVar20,iStack_cc,puStack_dc
                 ,1);
    if (iStack_128 < iStack_130) {
      FUN_00275260(0x40ddd0,param_2 + iStack_128 * 2 + 0x24,2);
      FUN_00275260(0x40dda8,iStack_d8,0x3e);
      uVar25 = *(undefined4 *)(DAT_0040f518 + 0x164);
      uVar12 = *(undefined8 *)(DAT_0040f518 + 0x160);
      uVar27 = *(undefined4 *)(DAT_0040f518 + 0x168);
      uVar26 = *(undefined4 *)(DAT_0040f518 + 0x16c);
      uStack_1d0 = 0;
      uStack_1cc = 0x41a00000;
      uStack_1a0 = 0x3f000000;
      uStack_19c = 0x3f000000;
      ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
      *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x160);
      *(undefined4 *)(param_2 + 0x134) = uVar25;
      *(undefined4 *)(param_2 + 0x138) = uVar27;
      *(undefined4 *)(param_2 + 0x13c) = uVar26;
      iVar20 = DAT_0040f0e0;
      piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
      iVar21 = 0;
      piVar18 = piVar19;
      do {
        if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
          iVar20 = *piVar18;
          goto LAB_001ff3dc;
        }
        iVar23 = iVar21 + 1;
        iVar28 = iVar21 + 1;
        ppuVar24 = ppuVar24 + 1;
        piVar19 = piVar19 + 1;
        piVar18 = piVar18 + 1;
        iVar21 = iVar23;
      } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
      iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001ff3dc:
      auVar6._8_4_ = uVar27;
      auVar6._0_8_ = uVar12;
      auVar6._12_4_ = uVar26;
      auVar31 = _por(in_zero_qw,auVar6);
      uStack_190 = 0x3f800000;
      uStack_18c = 0x3f800000;
      FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x1c),&uStack_1d0,&uStack_1a0,auVar31._0_8_,
                   iVar20,iStack_d8,&uStack_190,1);
      fVar29 = *(float *)(param_2 + 0x158);
    }
    else {
      FUN_00275260(&uStack_280,iStack_d8,0x3e);
      iVar20 = DAT_0040f0e0;
      iStack_128 = iStack_128 - iStack_130;
      ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
      uVar12 = *(undefined8 *)(param_2 + 0x130);
      uVar25 = *(undefined4 *)(param_2 + 0x138);
      uVar27 = *(undefined4 *)(param_2 + 0x13c);
      uStack_1bc = 0x3f000000;
      uStack_1cc = 0x41a00000;
      uStack_1d0 = 0;
      uStack_1c0 = 0x3f000000;
      piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
      iVar21 = 0;
      piVar18 = piVar19;
      do {
        if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
          iVar20 = *piVar18;
          goto LAB_001ff4d8;
        }
        iVar23 = iVar21 + 1;
        iVar28 = iVar21 + 1;
        ppuVar24 = ppuVar24 + 1;
        piVar19 = piVar19 + 1;
        piVar18 = piVar18 + 1;
        iVar21 = iVar23;
      } while (CONCAT44(iVar28 >> 0x1f,iVar23) < 2);
      iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001ff4d8:
      auVar7._8_4_ = uVar25;
      auVar7._0_8_ = uVar12;
      auVar7._12_4_ = uVar27;
      auVar31 = _por(in_zero_qw,auVar7);
      uStack_180 = 0x3f800000;
      uStack_17c = 0x3f800000;
      FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x1c),&uStack_1d0,&uStack_1c0,auVar31._0_8_,
                   iVar20,iStack_d8,&uStack_180,1);
      if (iStack_128 < iStack_12c) {
        FUN_00275260(0x40ddd0,param_2 + iStack_128 * 2 + 0xa4,2);
        fVar29 = *(float *)(param_2 + 0x158);
      }
      else if (*(int *)(param_2 + 0x160) == 6) {
        fVar29 = *(float *)(param_2 + 0x158);
      }
      else {
        *(undefined4 *)(param_2 + 0x160) = 6;
        *(undefined4 *)(param_2 + 0x158) = 0;
        (**(code **)(*(int *)(param_2 + 0x14) + 0x14))
                  (*(undefined4 *)(DAT_0040f4d0 + 0x1c),
                   param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x10));
        fVar29 = *(float *)(param_2 + 0x158);
      }
    }
    if (fVar29 == 0.0) {
      FUN_001eed98((float)(iStack_130 + iStack_12c) * 0.05,
                   *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),0xe);
    }
    uStack_1cc = 0x43f00000;
    uStack_1d0 = 0x44200000;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    auStack_1b0[0] = 0x3f000000;
    puStack_dc[1] = 0x3f000000;
    auStack_170[0] = 0;
    puStack_d4[1] = 0;
    puStack_d4[2] = 0;
    puStack_d4[3] = 0x3f800000;
    FUN_00276610(*(undefined4 *)(param_2 + 0x20),&uStack_1c0,puStack_dc,&uStack_1d0);
    fVar29 = *(float *)(param_2 + 0x158);
    goto LAB_001ffd80;
  case 6:
    sprintf(&uStack_240,0x3f9ea0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    iStack_cc = param_2 + 0x24;
    uVar12 = FUN_001087c8(DAT_0040f4c4,&uStack_240);
    iStack_d8 = param_2 + 0xa4;
    iStack_118 = 0;
    FUN_0035d1a0(afStack_2c0,uVar12,0x3e);
    strlen(afStack_2c0);
    FUN_00275260(afStack_2c0,param_2 + 0x24,0x3e);
    puStack_e0 = auStack_1f0;
    uVar25 = *(undefined4 *)(DAT_0040f518 + 500);
    uVar12 = *(undefined8 *)(DAT_0040f518 + 0x1f0);
    uVar27 = *(undefined4 *)(DAT_0040f518 + 0x1f8);
    uVar26 = *(undefined4 *)(DAT_0040f518 + 0x1fc);
    uStack_220 = 0;
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(DAT_0040f518 + 0x1f0);
    *(undefined4 *)(param_2 + 0x134) = uVar25;
    *(undefined4 *)(param_2 + 0x138) = uVar27;
    *(undefined4 *)(param_2 + 0x13c) = uVar26;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    iStack_11c = DAT_0040f0e0;
    uStack_21c = 0xc1a00000;
    uStack_210 = 0x3f000000;
    uStack_20c = 0x3f000000;
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    piVar18 = piVar19;
    puStack_c8 = &uStack_220;
    puStack_c4 = &uStack_210;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001ff794;
      }
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
      iStack_118 = iStack_118 + 1;
    } while (iStack_118 < 2);
    iVar20 = *(int *)(iStack_11c + 0x2107c);
LAB_001ff794:
    auVar16._8_4_ = uVar27;
    auVar16._0_8_ = uVar12;
    auVar16._12_4_ = uVar26;
    auVar31 = _por(in_zero_qw,auVar16);
    uStack_200 = 0x3f800000;
    uStack_1fc = 0x3f800000;
    iVar21 = 0;
    FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x18),&uStack_220,&uStack_210,auVar31._0_8_,
                 iVar20,iStack_cc,&uStack_200,1);
    FUN_0035c7a4(&uStack_240,0x3f9eb0);
    uVar12 = FUN_001087c8(DAT_0040f4c4,&uStack_240);
    FUN_0035d1a0(&uStack_280,uVar12,0x3e);
    FUN_0035c7a4(&uStack_280,0x40ddd0);
    iStack_120 = strlen(&uStack_280);
    FUN_00275260(&uStack_280,iStack_d8,0x3e);
    uStack_220 = 0;
    puStack_c8[1] = 0x41a00000;
    ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
    uStack_210 = 0x3f000000;
    puStack_c4[1] = 0x3f000000;
    iVar20 = DAT_0040f0e0;
    uVar12 = *(undefined8 *)(param_2 + 0x130);
    uVar25 = *(undefined4 *)(param_2 + 0x138);
    uVar27 = *(undefined4 *)(param_2 + 0x13c);
    piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
    piVar18 = piVar19;
    do {
      if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
        iVar20 = *piVar18;
        goto LAB_001ff8bc;
      }
      iVar21 = iVar21 + 1;
      ppuVar24 = ppuVar24 + 1;
      piVar19 = piVar19 + 1;
      piVar18 = piVar18 + 1;
    } while (iVar21 < 2);
    iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001ff8bc:
    auVar32._8_4_ = uVar25;
    auVar32._0_8_ = uVar12;
    auVar32._12_4_ = uVar27;
    auVar31 = _por(in_zero_qw,auVar32);
    uStack_200 = 0x3f800000;
    uStack_1fc = 0x3f800000;
    FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x1c),puStack_c8,puStack_c4,auVar31._0_8_,
                 iVar20,iStack_d8,&uStack_200,1);
    fVar29 = *(float *)(param_2 + 0x15c) + param_1;
    *(float *)(param_2 + 0x15c) = fVar29;
    if (0.5 < fVar29 - (float)(int)fVar29) {
      *(undefined2 *)(iStack_d8 + (iStack_120 + -1) * 2) = 0;
    }
    uStack_220 = 0x44200000;
    puStack_c8[1] = 0x43f00000;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_200 = 0x3f000000;
    uStack_1fc = 0x3f000000;
    auStack_1f0[0] = 0;
    puStack_e0[1] = 0;
    puStack_e0[2] = 0;
    puStack_e0[3] = 0x3f800000;
    FUN_00276610(*(undefined4 *)(param_2 + 0x20),puStack_c4,&uStack_200);
    fVar29 = *(float *)(param_2 + 0x158);
    goto LAB_001ffd80;
  case 8:
    sprintf(&uStack_240,0x3f9ea0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    iStack_cc = param_2 + 0x24;
    uVar12 = FUN_001087c8(DAT_0040f4c4,&uStack_240);
    FUN_0035d1a0(afStack_2c0,uVar12,0x3e);
    strlen(afStack_2c0);
    FUN_00275260(afStack_2c0,param_2 + 0x24,0x3e);
    fStack_f0 = 1.0 - *(float *)(param_2 + 0x158);
    if (fStack_f0 <= 0.0) {
      if (*(int *)(param_2 + 0x160) != 0) {
        *(undefined4 *)(param_2 + 0x158) = 0;
        *(undefined4 *)(param_2 + 0x160) = 0;
        goto LAB_001ffa4c;
      }
    }
    else {
      auVar31 = _qmtc2(fStack_f0);
      iStack_ec = (int)fStack_f0 >> 0x1f;
      auVar32 = _lqc2(*(undefined1 (*) [16])(DAT_0040f518 + 0x1f0));
      uStack_220 = 0;
      _vmove(auVar32);
      ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
      auVar31 = _vmulbc(in_vf0,auVar31);
      auStack_110 = _sqc2(auVar31);
      iStack_d8 = param_2 + 0xa4;
      uStack_21c = 0xc1a00000;
      auVar16 = _qmfc2(auVar31._0_4_);
      auVar31 = _sqc2(auVar32);
      *(undefined1 (*) [16])(param_2 + 0x130) = auVar31;
      uStack_210 = 0x3f000000;
      uStack_20c = 0x3f000000;
      *(int *)(param_2 + 0x130) = auVar16._0_4_;
      *(int *)(param_2 + 0x134) = auVar16._4_4_;
      *(int *)(param_2 + 0x138) = auVar16._8_4_;
      *(int *)(param_2 + 0x13c) = auVar16._12_4_;
      piVar18 = (int *)(DAT_0040f0e0 + 0x2107c);
      iStack_100 = DAT_0040f0e0;
      iVar20 = 0;
      puStack_c8 = &uStack_220;
      puStack_c4 = &uStack_210;
      do {
        if ((*piVar18 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) break;
        iVar21 = iVar20 + 1;
        iVar23 = iVar20 + 1;
        ppuVar24 = ppuVar24 + 1;
        piVar18 = piVar18 + 1;
        iVar20 = iVar21;
      } while (CONCAT44(iVar23 >> 0x1f,iVar21) < 2);
      uStack_200 = 0x3f800000;
      uStack_1fc = 0x3f800000;
      iVar21 = 0;
      FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x18),&uStack_220,&uStack_210);
      FUN_0035c7a4(&uStack_240,0x3f9eb0);
      uVar12 = FUN_001087c8(DAT_0040f4c4,&uStack_240);
      FUN_0035d1a0(&uStack_280,uVar12,0x3e);
      FUN_0035c7a4(&uStack_280,0x40ddd0);
      iStack_114 = strlen(&uStack_280);
      FUN_00275260(&uStack_280,iStack_d8,0x3e);
      uStack_220 = 0;
      puStack_c8[1] = 0x41a00000;
      ppuVar24 = &PTR_s_ITC_Machine_Std_003bc3a0;
      uStack_210 = 0x3f000000;
      puStack_c4[1] = 0x3f000000;
      iVar20 = DAT_0040f0e0;
      uVar12 = *(undefined8 *)(param_2 + 0x130);
      uVar25 = *(undefined4 *)(param_2 + 0x138);
      uVar27 = *(undefined4 *)(param_2 + 0x13c);
      piVar19 = (int *)(DAT_0040f0e0 + 0x2107c);
      piVar18 = piVar19;
      do {
        if ((*piVar19 != 0) && (lVar13 = stricmp(*ppuVar24,0x3f9ce8), lVar13 == 0)) {
          iVar20 = *piVar18;
          goto LAB_001ffc8c;
        }
        iVar21 = iVar21 + 1;
        ppuVar24 = ppuVar24 + 1;
        piVar19 = piVar19 + 1;
        piVar18 = piVar18 + 1;
      } while (iVar21 < 2);
      iVar20 = *(int *)(iVar20 + 0x2107c);
LAB_001ffc8c:
      auVar31._8_4_ = uVar25;
      auVar31._0_8_ = uVar12;
      auVar31._12_4_ = uVar27;
      auVar31 = _por(in_zero_qw,auVar31);
      uStack_200 = 0x3f800000;
      uStack_1fc = 0x3f800000;
      FUN_00277530(0x41800000,*(undefined4 *)(param_2 + 0x1c),puStack_c8,puStack_c4,auVar31._0_8_,
                   iVar20,iStack_d8,&uStack_200,1);
      fVar29 = *(float *)(param_2 + 0x15c) + param_1;
      *(float *)(param_2 + 0x15c) = fVar29;
      if (0.5 < fVar29 - (float)(int)fVar29) {
        *(undefined2 *)(iStack_d8 + (iStack_114 + -1) * 2) = 0;
      }
      auVar32 = _qmtc2(fStack_f0);
      auVar16 = _lqc2(*(undefined1 (*) [16])(DAT_0040f518 + 0x170));
      auVar31 = _sqc2(auVar16);
      *(undefined1 (*) [16])(param_2 + 0x130) = auVar31;
      _vmove(auVar16);
      uStack_220 = 0x44200000;
      auVar31 = _vmulbc(in_vf0,auVar32);
      auVar16 = _qmfc2(auVar31._0_4_);
      auVar31 = _sqc2(auVar31);
      *(undefined1 (*) [16])(param_2 + 0x130) = auVar31;
      puStack_c8[1] = 0x43f00000;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_200 = 0x3f000000;
      uStack_1fc = 0x3f000000;
      FUN_00276610(*(undefined4 *)(param_2 + 0x20),puStack_c4,&uStack_200,puStack_c8,auVar16._0_8_);
    }
  }
  fVar29 = *(float *)(param_2 + 0x158);
LAB_001ffd80:
  *(float *)(param_2 + 0x158) = fVar29 + param_1;
  return;
}


// ==== FUN_001ffdc8 @ 001ffdc8 ====

undefined4 FUN_001ffdc8(int param_1)

{
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 1
               ,*(undefined4 *)(param_1 + 0x18));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,*(short *)(param_1 + 0x10) + 1
               ,*(undefined4 *)(param_1 + 0x1c));
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return 1;
}


// ==== FUN_001ffe70 @ 001ffe70 ====

void FUN_001ffe70(float param_1,undefined8 param_2,undefined4 param_3,float *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                 undefined2 param_9)

{
  undefined1 in_zero_qw [16];
  undefined1 uVar1;
  undefined1 in_a3_qw [16];
  int iVar2;
  undefined1 auVar3 [16];
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c0;
  
  auVar3 = _por(in_zero_qw,in_a3_qw);
  iVar2 = (int)param_2;
  uStack_c0 = param_3;
  fStack_d0 = (float)FUN_002758e0(param_5,param_6);
  *(int *)(iVar2 + 0x20) = (int)param_5;
  fStack_d0 = fStack_d0 * param_1;
  *(int *)(iVar2 + 0x24) = (int)param_6;
  *(undefined2 *)(iVar2 + 0x2a) = param_9;
  if (*param_4 == 0.0) {
    *(undefined1 *)(iVar2 + 0x28) = 0;
  }
  else {
    uVar1 = 1;
    if (*param_4 == 1.0) {
      uVar1 = 2;
    }
    *(undefined1 *)(iVar2 + 0x28) = uVar1;
  }
  *(undefined1 *)(iVar2 + 0x29) = param_8;
  auVar3 = _por(in_zero_qw,auVar3);
  fStack_cc = param_1;
  FUN_00276590(param_2,uStack_c0,&fStack_d0,auVar3._0_8_,param_7,0x40,0xc);
  return;
}


// ==== FUN_001fff90 @ 001fff90 ====

void FUN_001fff90(int param_1)

{
  undefined1 in_zero_qw [16];
  undefined1 auVar1 [16];
  undefined8 in_t0;
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  float *in_t3_lo;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  FUN_001ffe70();
  auVar1 = _pextlh(0,0x8000ff00ff00ff);
  auVar2._8_4_ = in_t0_udw;
  auVar2._0_8_ = in_t0;
  auVar2._12_4_ = in_register_0000008c;
  auVar3 = _lqc2(auVar2);
  auVar2 = _qmtc2(0x43000000);
  auVar2 = _vmulbc(auVar3,auVar2);
  auVar2 = _vftoi0(auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  auVar2 = _pminw(auVar2,auVar1);
  auVar2 = _ppach(in_zero_qw,auVar2);
  auVar2 = _ppacb(in_zero_qw,auVar2);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(in_t3_lo[1] / *(float *)(param_1 + 0xc),*in_t3_lo / *(float *)(param_1 + 8));
  *(int *)(param_1 + 0x2c) = auVar2._0_4_;
  return;
}


// ==== FUN_00200088 @ 00200088 ====

int FUN_00200088(float *param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  int iVar14;
  float *pfVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_150;
  undefined8 uStack_130;
  ushort *puStack_f0;
  ushort *puStack_ec;
  float *pfStack_e8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  puStack_f0 = (ushort *)param_2[1];
  uVar2 = *puStack_f0;
  iVar10 = *(int *)(*param_2 + (uVar2 & 0x7f) * 4 + 0x20);
  if (*(ushort *)(iVar10 + 0x1c) != uVar2) {
    iVar4 = *(int *)(*param_2 + 0x1c);
    if (iVar10 == iVar4) {
      iVar10 = (int)(char)param_2[2];
      goto LAB_0020012c;
    }
    do {
      iVar14 = iVar10 + 0x28;
      if (*(ushort *)(iVar10 + 0x44) == uVar2) {
        iVar10 = (int)(char)param_2[2];
        goto LAB_0020012c;
      }
      iVar10 = iVar14;
    } while (iVar14 != iVar4);
  }
  iVar10 = (int)(char)param_2[2];
LAB_0020012c:
  puVar12 = &DAT_0048ffc0;
  iVar4 = *param_2;
  fVar26 = param_1[3];
  puVar17 = &DAT_00490fa0;
  fVar25 = *(float *)(iVar4 + 0x10);
  iVar14 = 0;
  fVar27 = *(float *)(&DAT_003bdc90 + iVar10 * 4);
  uVar18 = 0;
  pfStack_e8 = param_1;
  fVar20 = (float)FUN_002758e0(iVar4,puStack_f0);
  uVar2 = *(ushort *)((int)param_2 + 10);
  bVar7 = true;
  if (0.0 < fVar26) {
    uStack_130._0_4_ = (float)*(undefined8 *)(iVar4 + 8);
    uStack_130._4_4_ = (float)((ulong)*(undefined8 *)(iVar4 + 8) >> 0x20);
    fVar21 = uStack_130._4_4_ * param_1[3];
    fStack_16c = pfStack_e8[1];
    fVar20 = (float)uStack_130 * pfStack_e8[2] * (1.0 / fVar20);
    if (*puStack_f0 != 0) {
      uVar16 = 0xd;
      uVar3 = *puStack_f0;
      do {
        if ((uVar3 == uVar16) || ((ulong)uVar3 == 10)) {
          do {
            if (*puStack_f0 != 10) goto LAB_0020025c;
            while( true ) {
              bVar7 = true;
              fStack_16c = fStack_16c + fVar26;
LAB_0020025c:
              puVar11 = puStack_f0 + 1;
              puVar13 = puStack_f0 + 1;
              uVar18 = uVar18 + 1;
              puStack_f0 = puVar11;
              if (*puVar13 == uVar16) break;
              if ((ulong)*puVar13 != 10) goto LAB_00200278;
            }
          } while( true );
        }
LAB_00200278:
        if (*puStack_f0 == 0) {
          return iVar14;
        }
        if (!bVar7) {
          fStack_16c = fStack_16c + fVar26;
        }
        uStack_d0 = (undefined4)uVar16;
        uStack_cc = (undefined4)(uVar16 >> 0x20);
        fVar22 = (float)FUN_00275ad0(500.0 / fVar26,iVar4,puStack_f0,&puStack_f0,&puStack_ec,1);
        uVar16 = CONCAT44(uStack_cc,uStack_d0);
        fStack_170 = *pfStack_e8 - fVar22 * fVar26 * fVar27;
        uVar3 = *puStack_f0;
        bVar7 = false;
        if (uVar3 != 0) {
          iVar10 = *(int *)(iVar4 + 0x20 + (uVar3 & 0x7f) * 4);
          if (*(ushort *)(iVar10 + 0x1c) == uVar3) {
LAB_00200330:
            fVar22 = *(float *)(iVar10 + 0x10);
          }
          else {
            iVar8 = iVar10;
            do {
              iVar10 = iVar8;
              if (iVar10 == *(int *)(iVar4 + 0x1c)) goto LAB_00200330;
              iVar8 = iVar10 + 0x28;
            } while (*(ushort *)(iVar10 + 0x44) != uVar3);
            fVar22 = *(float *)(iVar10 + 0x38);
          }
          fStack_170 = fStack_170 - fVar26 * fVar22;
        }
        uVar19 = uVar18;
        if (puStack_f0 == puStack_ec) {
          uVar3 = *puStack_f0;
        }
        else {
          do {
            uVar3 = *puStack_f0;
            pfVar15 = *(float **)(iVar4 + 0x20 + (uVar3 & 0x7f) * 4);
            uVar18 = uVar19 + 1;
            if (*(ushort *)(pfVar15 + 7) == uVar3) {
LAB_002003b0:
              fVar22 = *pfVar15;
            }
            else {
              pfVar6 = pfVar15;
              if (pfVar15 != *(float **)(iVar4 + 0x1c)) {
                do {
                  pfVar15 = pfVar6 + 10;
                  if (*(ushort *)(pfVar6 + 0x11) == uVar3) {
                    fVar22 = *pfVar15;
                    goto LAB_002003b4;
                  }
                  pfVar6 = pfVar15;
                } while (pfVar15 != *(float **)(iVar4 + 0x1c));
                goto LAB_002003b0;
              }
              fVar22 = *pfVar15;
            }
LAB_002003b4:
            if (0.0 <= fVar22) {
              bVar1 = *(byte *)((int)param_2 + 9);
              bVar5 = true;
              if (bVar1 != 0) {
                bVar9 = bVar1 ^ 2;
                if ((9 < *puStack_f0 - 0xb0) && (bVar9 = bVar1 ^ 2, 0xbe < *puStack_f0 - 0x2506)) {
                  bVar9 = bVar1 ^ 1;
                }
                bVar5 = bVar9 == 0;
              }
              if ((uVar2 <= uVar19) && (uVar2 != 0xffff)) {
                bVar5 = false;
              }
              if (bVar5) {
                if (pfVar15[8] == 0.0) {
                  fVar24 = fStack_170 + pfVar15[4] * fVar20;
                  fVar22 = fStack_16c + pfVar15[5] * fVar21;
                  *puVar12 = CONCAT44(fVar22,fVar24);
                  *puVar17 = *(undefined8 *)pfVar15;
                  puVar12[1] = CONCAT44(fVar22 + fVar21 * pfVar15[3],fVar24 + fVar20 * pfVar15[2]);
                  fVar22 = *pfVar15;
                  fVar23 = pfVar15[2];
                  fVar24 = pfVar15[3];
                }
                else {
                  fVar22 = fStack_16c + fVar21 * pfVar15[3] * (1.0 - fVar25) + pfVar15[5] * fVar21;
                  fVar24 = fStack_170 + pfVar15[4] * fVar20;
                  uStack_150 = CONCAT44(fVar22,fVar24);
                  *puVar12 = uStack_150;
                  *puVar17 = *(undefined8 *)pfVar15;
                  puVar12[1] = CONCAT44(fVar22 + fVar21 * fVar25 * pfVar15[3],
                                        fVar24 + fVar20 * fVar25 * pfVar15[2]);
                  fVar22 = *pfVar15;
                  fVar23 = pfVar15[2];
                  fVar24 = pfVar15[3];
                }
                iVar14 = iVar14 + 1;
                puVar12 = puVar12 + 2;
                uStack_130 = CONCAT44(pfVar15[1] + fVar24,fVar22 + fVar23);
                puVar17[1] = uStack_130;
                puVar17 = puVar17 + 2;
              }
            }
            puVar13 = puStack_f0 + 1;
            if (puStack_f0[1] == 0) {
              return iVar14;
            }
            fStack_170 = fStack_170 + pfVar15[6] * fVar20;
            uVar19 = uVar18;
            puStack_f0 = puVar13;
          } while (puVar13 != puStack_ec);
          uVar3 = *puVar13;
        }
        if (uVar3 == 0) {
          return iVar14;
        }
        uVar3 = *puStack_f0;
      } while( true );
    }
  }
  return 0;
}


// ==== FUN_00200678 @ 00200678 ====

void FUN_00200678(int param_1,int *param_2)

{
  long lVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar1 = FUN_00200088();
  if (0 < lVar1) {
    FUN_002667e8(*(undefined4 *)(*param_2 + 4));
    uStack_50 = 0;
    uStack_4c = 0;
    FUN_00266d28(*(undefined8 *)(param_1 + 0x10),&uStack_50,lVar1,0x48ffc0,0x490fa0);
  }
  return;
}


// ==== FUN_002006f0 @ 002006f0 ====

void FUN_002006f0(int param_1,int *param_2)

{
  undefined1 auVar1 [8];
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  lVar2 = FUN_00200088();
  if (0 < lVar2) {
    auStack_70._4_4_ = (float)*(byte *)((int)param_2 + 0xd);
    auStack_70._0_4_ = (float)*(byte *)(param_2 + 3);
    fStack_68 = (float)*(byte *)((int)param_2 + 0xe);
    auVar8 = _qmtc2(0x3c000000);
    fStack_64 = (float)*(byte *)((int)param_2 + 0xf);
    auVar5 = _lqc2(_auStack_70);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar8 = _vmulbc(auVar5,auVar8);
    auVar5 = _sqc2(auVar8);
    auVar7 = _vmulbc(auVar6,auVar8);
    auVar6 = _qmfc2(auVar8._0_4_);
    fStack_68 = auVar5._8_4_;
    auVar5 = _sqc2(auVar8);
    fStack_60 = (float)param_2[4] * *(float *)(param_1 + 8);
    auStack_70._4_4_ = auVar5._4_4_;
    uVar3 = auStack_70._4_4_;
    auVar5 = _sqc2(auVar7);
    fStack_64 = auVar5._12_4_;
    fVar4 = fStack_64;
    fStack_5c = (float)param_2[5] * *(float *)(param_1 + 0xc);
    auStack_70._4_4_ = fStack_68;
    auStack_70._0_4_ = auVar6._0_4_;
    auVar1 = auStack_70;
    fStack_68 = (float)uVar3;
    auVar5 = _auStack_70;
    auStack_70._4_4_ = fStack_5c;
    auStack_70._0_4_ = fStack_60;
    _fStack_68 = auVar5._8_8_;
    FUN_002667e8(*(undefined4 *)(*param_2 + 4));
    auVar5._8_4_ = uVar3;
    auVar5._0_8_ = auVar1;
    auVar5._12_4_ = fVar4;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_00266d28(auVar5._0_8_,auStack_70,lVar2,0x48ffc0,0x490fa0);
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    FUN_00266d28();
  }
  return;
}


// ==== FUN_00200858 @ 00200858 ====

void FUN_00200858(int param_1,int *param_2)

{
  undefined1 auVar1 [8];
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_80;
  float fStack_7c;
  
  lVar2 = FUN_00200088();
  if (0 < lVar2) {
    auStack_a0._4_4_ = (float)*(byte *)((int)param_2 + 0xd);
    auStack_a0._0_4_ = (float)*(byte *)(param_2 + 3);
    fStack_98 = (float)*(byte *)((int)param_2 + 0xe);
    auVar8 = _qmtc2(0x3c000000);
    fStack_94 = (float)*(byte *)((int)param_2 + 0xf);
    auVar5 = _lqc2(_auStack_a0);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x10));
    auVar8 = _vmulbc(auVar5,auVar8);
    auVar5 = _sqc2(auVar8);
    auVar7 = _vmulbc(auVar6,auVar8);
    auVar6 = _qmfc2(auVar8._0_4_);
    fStack_98 = auVar5._8_4_;
    auVar5 = _sqc2(auVar8);
    auStack_a0._4_4_ = auVar5._4_4_;
    uVar3 = auStack_a0._4_4_;
    auVar5 = _sqc2(auVar7);
    fStack_94 = auVar5._12_4_;
    fVar4 = fStack_94;
    auStack_a0._4_4_ = fStack_98;
    auStack_a0._0_4_ = auVar6._0_4_;
    auVar1 = auStack_a0;
    fStack_98 = (float)uVar3;
    uStack_90 = CONCAT44((float)param_2[5] * *(float *)(param_1 + 0xc),
                         (float)param_2[4] * *(float *)(param_1 + 8));
    auStack_a0 = (undefined1  [8])uStack_90;
    FUN_002667e8(*(undefined4 *)(*param_2 + 4));
    auVar5._8_4_ = uVar3;
    auVar5._0_8_ = auVar1;
    auVar5._12_4_ = fVar4;
    auVar5 = _por(in_zero_qw,auVar5);
    FUN_00266d28(auVar5._0_8_,auStack_a0,lVar2,0x48ffc0,0x490fa0);
    auVar6._8_4_ = uVar3;
    auVar6._0_8_ = auVar1;
    auVar6._12_4_ = fVar4;
    auVar5 = _por(in_zero_qw,auVar6);
    fStack_80 = -(float)auStack_a0._0_4_;
    fStack_7c = -(float)auStack_a0._4_4_;
    uStack_90 = CONCAT44(fStack_7c,fStack_80);
    FUN_00266d28(auVar5._0_8_,&uStack_90,lVar2,0x48ffc0,0x490fa0);
    auVar8._8_4_ = uVar3;
    auVar8._0_8_ = auVar1;
    auVar8._12_4_ = fVar4;
    auVar5 = _por(in_zero_qw,auVar8);
    auStack_a0._0_4_ = -(float)auStack_a0._0_4_;
    FUN_00266d28(auVar5._0_8_,auStack_a0,lVar2,0x48ffc0,0x490fa0);
    auVar7._8_4_ = uVar3;
    auVar7._0_8_ = auVar1;
    auVar7._12_4_ = fVar4;
    auVar5 = _por(in_zero_qw,auVar7);
    fStack_80 = -(float)auStack_a0._0_4_;
    fStack_7c = -(float)auStack_a0._4_4_;
    uStack_90 = CONCAT44(fStack_7c,fStack_80);
    FUN_00266d28(auVar5._0_8_,&uStack_90,lVar2,0x48ffc0,0x490fa0);
    uStack_90 = 0;
    FUN_00266d28();
  }
  return;
}


// ==== FUN_00200a68 @ 00200a68 ====

void FUN_00200a68(int param_1)

{
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


// ==== FUN_00200a78 @ 00200a78 ====

undefined4 FUN_00200a78(undefined4 *param_1,undefined8 param_2)

{
  param_1[0x1a] = (int)param_2;
  param_1[0x17] = 0;
  FUN_00276728(param_2,param_1 + 8,param_1 + 0xc,param_1 + 0xe,*param_1,param_1[0x1b],param_1 + 0x12
               ,param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x19) = 0;
  return 1;
}


// ==== FUN_00200ad8 @ 00200ad8 ====

void FUN_00200ad8(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_00276728(param_1[0x1a],param_1 + 8,param_1 + 0xc,param_1 + 0xe,*param_1,param_1[0x1b],
                 param_1 + 0x12,param_1 + 0x14);
  }
  else {
    FUN_00276da8(param_1[0x1a],param_1 + 8,param_1 + 0xe,param_1 + 0xc,*param_1,param_1[0x1c],
                 param_1 + 0x12,param_1 + 0x14);
  }
  return;
}


// ==== FUN_00200b50 @ 00200b50 ====

undefined4 FUN_00200b50(undefined4 *param_1,undefined8 param_2)

{
  param_1[0x1a] = (int)param_2;
  param_1[0x17] = 0;
  FUN_00276da8(param_2,param_1 + 8,param_1 + 0xe,param_1 + 0xc,*param_1,param_1[0x1c],param_1 + 0x12
               ,param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return 1;
}


// ==== FUN_00200bb0 @ 00200bb0 ====

void FUN_00200bb0(float param_1,undefined1 (*param_2) [16])

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined1 auStack_30 [16];
  float fStack_20;
  float fStack_1c;
  
  if (0.0 < *(float *)(param_2[5] + 0xc)) {
    param_1 = *(float *)(param_2[5] + 0xc) - param_1;
    *(float *)(param_2[5] + 0xc) = param_1;
    if (param_1 < 0.0) {
      *(undefined4 *)(param_2[5] + 0xc) = 0;
    }
    fVar5 = *(float *)param_2[2];
    fVar4 = *(float *)(param_2[2] + 4) - *(float *)(param_2[2] + 0xc);
    fVar2 = fVar5 - *(float *)(param_2[2] + 8);
    fVar3 = 1.0 - *(float *)(param_2[5] + 0xc) / *(float *)param_2[6];
    fVar3 = (float)((int)fVar3 * (uint)(0.0 < fVar3));
    fVar3 = (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
    if (((uint)fVar2 & 0x7f800000) < 0x37800001 && ((uint)fVar4 & 0x7f800000) < 0x37800001) {
      uStack_50 = *(undefined8 *)param_2[2];
      auStack_30._0_8_ = CONCAT44(fVar4,fVar2);
    }
    else {
      uStack_50 = CONCAT44((*(float *)(param_2[2] + 0xc) - *(float *)(param_2[2] + 4)) * fVar3 +
                           *(float *)(param_2[2] + 4),
                           (*(float *)(param_2[2] + 8) - fVar5) * fVar3 + fVar5);
      auStack_30._0_8_ = uStack_50;
    }
    auVar8 = _lqc2(*param_2);
    auVar7 = _lqc2(param_2[1]);
    auVar8 = _vsub(auVar8,auVar7);
    auVar7 = _qmfc2(auVar8._0_4_);
    bVar1 = true;
    if ((auVar7._0_4_ & 0x7f800000) < 0x37800001) {
      auStack_30 = _sqc2(auVar8);
      bVar1 = true;
      if ((auStack_30._4_4_ & 0x7f800000) < 0x37800001) {
        auStack_30 = _sqc2(auVar8);
        bVar1 = true;
        if ((auStack_30._8_4_ & 0x7f800000) < 0x37800001) {
          auStack_30 = _sqc2(auVar8);
          bVar1 = 0x37800000 < (auStack_30._12_4_ & 0x7f800000);
        }
      }
    }
    if (bVar1) {
      auVar9 = _lqc2(*param_2);
      auVar7 = _lqc2(param_2[1]);
      auVar8 = _qmtc2(fVar3);
      auVar7 = _vsub(auVar7,auVar9);
      auVar7 = _vmulbc(auVar7,auVar8);
      auVar7 = _vadd(auVar7,auVar9);
      uVar6 = auVar7._0_4_;
    }
    else {
      auVar7 = _lqc2(*param_2);
      uVar6 = auVar7._0_4_;
    }
    fVar2 = *(float *)(param_2[3] + 8);
    fStack_1c = *(float *)(param_2[3] + 0xc) - *(float *)(param_2[4] + 4);
    fStack_20 = fVar2 - *(float *)param_2[4];
    if (((uint)fStack_20 & 0x7f800000) < 0x37800001 && ((uint)fStack_1c & 0x7f800000) < 0x37800001)
    {
      uStack_40 = *(undefined8 *)(param_2[3] + 8);
      auStack_30._0_8_ = CONCAT44(fStack_1c,fStack_20);
    }
    else {
      fStack_20 = *(float *)param_2[4] - fVar2;
      fStack_1c = *(float *)(param_2[4] + 4) - *(float *)(param_2[3] + 0xc);
      uStack_40 = CONCAT44(fStack_1c * fVar3 + *(float *)(param_2[3] + 0xc),
                           fStack_20 * fVar3 + fVar2);
      auStack_30._0_8_ = uStack_40;
    }
    if (param_2[6][4] == '\0') {
      auVar7 = _qmfc2(uVar6);
      FUN_00276728(*(undefined4 *)(param_2[6] + 8),&uStack_50,param_2 + 3,&uStack_40,auVar7._0_8_,
                   *(undefined4 *)(param_2[6] + 0xc),param_2[4] + 8,param_2 + 5);
    }
    else {
      auVar7 = _qmfc2(uVar6);
      FUN_00276da8(*(int *)(param_2[6] + 8),&uStack_50,&uStack_40,param_2 + 3,auVar7._0_8_,
                   *(undefined4 *)(*(int *)(param_2[6] + 8) + 0x30),param_2[4] + 8);
    }
  }
  return;
}


// ==== FUN_00200f00 @ 00200f00 ====

void FUN_00200f00(void)

{
  return;
}


// ==== FUN_00200f08 @ 00200f08 ====

/* Strings referenciadas:
     "Eurostile LT Std" */

undefined4 FUN_00200f08(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined **ppuVar5;
  
  ppuVar5 = &PTR_s_ITC_Machine_Std_003bc3a0;
  iVar4 = 0;
  param_1[0x21] = param_2;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  param_1[0x1e] = 0;
  iVar1 = DAT_0040f0e0;
  piVar3 = (int *)(DAT_0040f0e0 + 0x2107c);
  while ((*piVar3 == 0 || (lVar2 = stricmp(*ppuVar5,0x3f9ce8), lVar2 != 0))) {
    iVar4 = iVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    piVar3 = piVar3 + 1;
    if (1 < iVar4) {
      iVar1 = *(int *)(iVar1 + 0x2107c);
LAB_00200fac:
      FUN_001fff90(param_1[0x1c],param_1[0x21],param_1 + 0x10,param_1 + 0x14,*param_1,param_1[8],
                   iVar1,param_1[0x18],param_1 + 0x16);
      return 1;
    }
  }
  iVar1 = *piVar3;
  goto LAB_00200fac;
}


// ==== FUN_00201010 @ 00201010 ====

/* Strings referenciadas:
     "Eurostile LT Std" */

void FUN_00201010(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined **ppuVar5;
  
  ppuVar5 = &PTR_s_ITC_Machine_Std_003bc3a0;
  param_1[0x1e] = 0;
  iVar1 = DAT_0040f0e0;
  iVar4 = 0;
  piVar3 = (int *)(DAT_0040f0e0 + 0x2107c);
  while ((*piVar3 == 0 || (lVar2 = stricmp(*ppuVar5,0x3f9ce8), lVar2 != 0))) {
    iVar4 = iVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    piVar3 = piVar3 + 1;
    if (1 < iVar4) {
      iVar1 = *(int *)(iVar1 + 0x2107c);
LAB_002010a4:
      FUN_001fff90(param_1[0x1c],param_1[0x21],param_1 + 0x10,param_1 + 0x14,*param_1,param_1[8],
                   iVar1,param_1[0x18],param_1 + 0x16);
      return;
    }
  }
  iVar1 = *piVar3;
  goto LAB_002010a4;
}


// ==== FUN_00201108 @ 00201108 ====

/* Strings referenciadas:
     "ITC Machine Std"
     "Eurostile LT Std" */

void FUN_00201108(float param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  if (1.5258789e-05 < *(float *)(param_2[7] + 8)) {
    param_1 = *(float *)(param_2[7] + 8) - param_1;
    fVar8 = *(float *)param_2[4];
    fVar10 = *(float *)(param_2[4] + 8);
    *(float *)(param_2[7] + 8) = param_1;
    iVar1 = DAT_0040f0e0;
    fStack_e0 = fVar8 - fVar10;
    fStack_dc = *(float *)(param_2[4] + 4) - *(float *)(param_2[4] + 0xc);
    fVar9 = 1.0 - param_1 / *(float *)(param_2[7] + 0xc);
    fVar9 = (float)((int)fVar9 * (uint)(0.0 < fVar9));
    fVar9 = (float)((int)fVar9 * (uint)(fVar9 < 1.0) | (uint)(fVar9 >= 1.0) * 0x3f800000);
    if (((uint)fStack_e0 & 0x7f800000) < 0x37800001 && ((uint)fStack_dc & 0x7f800000) < 0x37800001)
    {
      uStack_100 = *(undefined8 *)param_2[4];
      auStack_f0._0_8_ = CONCAT44(fStack_dc,fStack_e0);
    }
    else {
      fStack_e0 = fVar10 - fVar8;
      fStack_dc = *(float *)(param_2[4] + 0xc) - *(float *)(param_2[4] + 4);
      uStack_100 = CONCAT44(fStack_dc * fVar9 + *(float *)(param_2[4] + 4),fStack_e0 * fVar9 + fVar8
                           );
      auStack_f0._0_8_ = uStack_100;
    }
    auVar13 = _lqc2(*param_2);
    auVar11 = _lqc2(param_2[1]);
    auVar13 = _vsub(auVar13,auVar11);
    auVar11 = _qmfc2(auVar13._0_4_);
    bVar2 = true;
    if ((auVar11._0_4_ & 0x7f800000) < 0x37800001) {
      auStack_f0 = _sqc2(auVar13);
      bVar2 = true;
      if ((auStack_f0._4_4_ & 0x7f800000) < 0x37800001) {
        auStack_f0 = _sqc2(auVar13);
        bVar2 = true;
        if ((auStack_f0._8_4_ & 0x7f800000) < 0x37800001) {
          auStack_f0 = _sqc2(auVar13);
          bVar2 = 0x37800000 < (auStack_f0._12_4_ & 0x7f800000);
        }
      }
    }
    if (bVar2) {
      auVar12 = _lqc2(*param_2);
      auVar11 = _lqc2(param_2[1]);
      auVar13 = _qmtc2(fVar9);
      auVar11 = _vsub(auVar11,auVar12);
      auVar11 = _vmulbc(auVar11,auVar13);
      auVar13 = _vadd(auVar11,auVar12);
      auVar11 = _lqc2(param_2[2]);
    }
    else {
      auVar13 = _lqc2(*param_2);
      auVar11 = _lqc2(param_2[2]);
    }
    auVar12 = _lqc2(param_2[3]);
    auVar12 = _vsub(auVar11,auVar12);
    auVar11 = _qmfc2(auVar12._0_4_);
    bVar2 = true;
    if ((auVar11._0_4_ & 0x7f800000) < 0x37800001) {
      auStack_f0 = _sqc2(auVar12);
      bVar2 = true;
      if ((auStack_f0._4_4_ & 0x7f800000) < 0x37800001) {
        auStack_f0 = _sqc2(auVar12);
        bVar2 = true;
        if ((auStack_f0._8_4_ & 0x7f800000) < 0x37800001) {
          auStack_f0 = _sqc2(auVar12);
          bVar2 = 0x37800000 < (auStack_f0._12_4_ & 0x7f800000);
        }
      }
    }
    if (bVar2) {
      auVar14 = _lqc2(param_2[2]);
      auVar11 = _lqc2(param_2[3]);
      auVar12 = _qmtc2(fVar9);
      auVar11 = _vsub(auVar11,auVar14);
      auVar11 = _vmulbc(auVar11,auVar12);
      auVar11 = _vadd(auVar11,auVar14);
      fVar8 = *(float *)param_2[7];
    }
    else {
      auVar11 = _lqc2(param_2[2]);
      fVar8 = *(float *)param_2[7];
    }
    if (fVar8 != *(float *)(param_2[7] + 4)) {
      fVar8 = (*(float *)(param_2[7] + 4) - fVar8) * fVar9 + fVar8;
    }
    piVar4 = (int *)(DAT_0040f0e0 + 0x2107c);
    ppuVar7 = &PTR_s_ITC_Machine_Std_003bc3a0;
    iVar6 = 0;
    piVar5 = piVar4;
    do {
      if (*piVar4 != 0) {
        auStack_d0 = _sqc2(auVar11);
        auStack_c0 = _sqc2(auVar13);
        lVar3 = stricmp(*ppuVar7,0x3f9ce8);
        auVar11 = _lqc2(auStack_d0);
        auVar13 = _lqc2(auStack_c0);
        if (lVar3 == 0) {
          iVar1 = *piVar5;
          goto LAB_002014a4;
        }
      }
      iVar6 = iVar6 + 1;
      ppuVar7 = ppuVar7 + 1;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 2);
    iVar1 = *(int *)(iVar1 + 0x2107c);
LAB_002014a4:
    auVar13 = _qmfc2(auVar13._0_4_);
    auVar11 = _qmfc2(auVar11._0_4_);
    FUN_001fff90(fVar8,*(undefined4 *)(param_2[8] + 4),&uStack_100,param_2 + 5,auVar13._0_8_,
                 auVar11._0_8_,iVar1,*(undefined4 *)param_2[6],param_2[5] + 8);
  }
  return;
}


// ==== FUN_00201518 @ 00201518 ====

void FUN_00201518(int param_1)

{
  FUN_001f1c08();
  FUN_00200f00(param_1 + 0x20);
  return;
}


// ==== FUN_00201548 @ 00201548 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Eurostile LT Std" */

undefined4 FUN_00201548(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_d0 [32];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  iVar9 = 0;
  FUN_001f1c10(param_1,1,1,0,param_2,param_3,param_4);
  puVar10 = (undefined4 *)param_1;
  iVar6 = *(char *)((int)puVar10 + 0x12) * 0xa8 + DAT_0040f518;
  sprintf(auStack_d0,0x40dda8);
  iVar3 = DAT_0040f0e0;
  ppuVar8 = &PTR_s_ITC_Machine_Std_003bc3a0;
  piVar7 = (int *)(DAT_0040f0e0 + 0x2107c);
  while ((*piVar7 == 0 || (lVar5 = stricmp(*ppuVar8,0x3f9ce8), lVar5 != 0))) {
    iVar9 = iVar9 + 1;
    ppuVar8 = ppuVar8 + 1;
    piVar7 = piVar7 + 1;
    if (1 < iVar9) {
      iVar3 = *(int *)(iVar3 + 0x2107c);
LAB_0020163c:
      puVar10[0x41] = iVar3;
      if (iVar3 != 0) {
        puVar10[0x41] = *(undefined4 *)(DAT_0040f0e0 + 0x2107c);
      }
      uVar4 = FUN_00278ec0(iVar6 + 0x40,*(undefined2 *)(puVar10 + 4),*puVar10);
      puVar10[0x2c] = uVar4;
      uVar2 = DAT_0042ca5c;
      uVar4 = DAT_0042ca58;
      uVar1 = _DAT_0042ca50;
      puVar10[0xc] = (int)_DAT_0042ca50;
      puVar10[0xd] = (int)((ulong)uVar1 >> 0x20);
      puVar10[0xe] = uVar4;
      puVar10[0xf] = uVar2;
      puVar10[8] = (int)*(undefined8 *)(puVar10 + 0xc);
      puVar10[9] = (int)((ulong)*(undefined8 *)(puVar10 + 0xc) >> 0x20);
      puVar10[10] = puVar10[0xe];
      puVar10[0xb] = puVar10[0xf];
      uVar2 = DAT_0042ca6c;
      uVar4 = DAT_0042ca68;
      uVar1 = _DAT_0042ca60;
      puVar10[0x14] = (int)_DAT_0042ca60;
      puVar10[0x15] = (int)((ulong)uVar1 >> 0x20);
      puVar10[0x16] = uVar4;
      puVar10[0x17] = uVar2;
      puVar10[0x24] = 0x41800000;
      puVar10[0x25] = 0x41800000;
      puVar10[0x10] = (int)*(undefined8 *)(puVar10 + 0x14);
      puVar10[0x11] = (int)((ulong)*(undefined8 *)(puVar10 + 0x14) >> 0x20);
      puVar10[0x12] = puVar10[0x16];
      puVar10[0x13] = puVar10[0x17];
      *(undefined8 *)(puVar10 + 0x1a) = DAT_0042ca38;
      *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(puVar10 + 0x1a);
      *(undefined8 *)(puVar10 + 0x1c) = DAT_0042ca40;
      uStack_b0 = 0x3f800000;
      uStack_ac = 0x3f800000;
      puVar10[0x22] = 1;
      *(undefined8 *)(puVar10 + 0x1e) = 0x3f8000003f800000;
      FUN_00275260(auStack_d0,puVar10 + 0x2d,0x11);
      puVar10[0x20] = puVar10 + 0x2d;
      FUN_00200f08(puVar10 + 8,puVar10[0x2c]);
      *(undefined1 *)((int)puVar10 + 0x109) = 1;
      *(undefined1 *)(puVar10 + 0x42) = 0;
      puVar10[0x36] = 0;
      *(undefined2 *)((int)puVar10 + 0x102) = 0;
      *(undefined2 *)((int)puVar10 + 0xfe) = 0;
      *(undefined2 *)(puVar10 + 0x40) = 0;
      return 1;
    }
  }
  iVar3 = *piVar7;
  goto LAB_0020163c;
}


// ==== FUN_00201760 @ 00201760 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "%d/%d" */

void FUN_00201760(float param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(DAT_0040f0e0 + 0x2014c) == 3) {
    iVar10 = (int)param_2;
    if (*(char *)(iVar10 + 0x109) != '\0') {
      FUN_002019f8(param_2);
      *(undefined1 *)(iVar10 + 0x109) = 0;
    }
    lVar5 = FUN_00122660(DAT_0040f4dc);
    uVar1 = *(ushort *)(iVar10 + 0x100);
    if ((long)(ulong)uVar1 < lVar5) {
      *(short *)(iVar10 + 0x100) = (short)lVar5;
      *(ushort *)(iVar10 + 0xfe) = *(short *)(iVar10 + 0xfe) + ((short)lVar5 - uVar1);
    }
    if (*(char *)(iVar10 + 0x108) != '\0') {
      uStack_90 = DAT_0040dda8;
      uStack_8f = DAT_0040dda9;
      memset((uint)&uStack_90 | 2,0,0xf);
      param_1 = *(float *)(iVar10 + 0xd8) + param_1;
      *(float *)(iVar10 + 0xd8) = param_1;
      if (4.5 < param_1) {
        FUN_00275260(&uStack_90,iVar10 + 0xb4,0x11);
        *(undefined1 *)(iVar10 + 0x108) = 0;
      }
      else {
        sprintf(&uStack_90,0x3f9ef8,*(undefined2 *)(iVar10 + 0xfe),*(undefined2 *)(iVar10 + 0x102));
      }
      uVar11 = FUN_00201a68(*(undefined4 *)(iVar10 + 0xd8),param_2);
      auVar12 = _lqc2(_DAT_0042ca50);
      auVar6 = _qmfc2(auVar12._0_4_);
      auVar2 = _sqc2(auVar12);
      uStack_6c = auVar2._4_4_;
      uVar3 = uStack_6c;
      auVar13 = _lqc2(_DAT_0042ca60);
      auVar2 = _sqc2(auVar12);
      auVar12 = _qmfc2(auVar13._0_4_);
      uStack_68 = auVar2._8_4_;
      uVar8 = uStack_68;
      auVar2 = _sqc2(auVar13);
      uStack_6c = auVar2._4_4_;
      uVar4 = uStack_6c;
      auVar2 = _sqc2(auVar13);
      uStack_68 = auVar2._8_4_;
      uStack_70 = auVar12._0_4_;
      uStack_64 = uVar11;
      uVar7 = uStack_68;
      uVar9 = uVar11;
      FUN_00275260(&uStack_90,iVar10 + 0xb4,0x11);
      *(int *)(iVar10 + 0x30) = auVar6._0_4_;
      *(undefined4 *)(iVar10 + 0x34) = uVar3;
      *(undefined4 *)(iVar10 + 0x38) = uVar8;
      *(undefined4 *)(iVar10 + 0x3c) = uVar9;
      *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar10 + 0x30);
      *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(iVar10 + 0x34);
      *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar10 + 0x38);
      *(undefined4 *)(iVar10 + 0x2c) = *(undefined4 *)(iVar10 + 0x3c);
      *(int *)(iVar10 + 0x50) = auVar12._0_4_;
      *(undefined4 *)(iVar10 + 0x54) = uVar4;
      *(undefined4 *)(iVar10 + 0x58) = uVar7;
      *(undefined4 *)(iVar10 + 0x5c) = uVar11;
      *(int *)(iVar10 + 0x80) = iVar10 + 0xb4;
      *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(iVar10 + 0x50);
      *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(iVar10 + 0x54);
      *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(iVar10 + 0x58);
      *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(iVar10 + 0x5c);
      *(undefined4 *)(iVar10 + 0x8c) = 0;
      FUN_00201010(iVar10 + 0x20);
    }
  }
  return;
}


// ==== FUN_00201960 @ 00201960 ====

undefined4 FUN_00201960(int param_1)

{
  FUN_00278f00(*(char *)(param_1 + 0x12) * 0xa8 + DAT_0040f518 + 0x40,
               *(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xb0));
  return 1;
}


// ==== FUN_002019a0 @ 002019a0 ====

void FUN_002019a0(int param_1,long param_2)

{
  long lVar1;
  
  if ((param_2 == 0) ||
     (lVar1 = FUN_00160e10(param_2,*(undefined4 *)(DAT_0040f0e0 + 0x2014c)), lVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  return;
}


// ==== FUN_002019f8 @ 002019f8 ====

void FUN_002019f8(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00122900(DAT_0040f4e8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac));
  uVar1 = *(undefined4 *)(DAT_0040f4d0 + 0x5ab0);
  *(undefined2 *)(param_1 + 0xfe) = 0;
  uVar2 = FUN_0012fc78(DAT_0040f4d0 + 0x910,uVar3,uVar1);
  *(undefined2 *)(param_1 + 0x102) = uVar2;
  uVar2 = FUN_00122660(DAT_0040f4dc);
  *(undefined2 *)(param_1 + 0x100) = uVar2;
  return;
}


// ==== FUN_00201a68 @ 00201a68 ====

float FUN_00201a68(float param_1)

{
  if (param_1 < 0.5) {
    return param_1 + param_1;
  }
  if (4.0 <= param_1) {
    return 1.0 - ((param_1 - 4.0) + (param_1 - 4.0));
  }
  return 1.0;
}


