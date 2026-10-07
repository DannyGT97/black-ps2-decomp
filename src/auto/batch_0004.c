// ==== FUN_00135ac0 @ 00135ac0 ====

void FUN_00135ac0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _qmtc2(param_2);
  if (*(int *)(param_1 + 0x32c) != 0) {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vsub(auVar4,auVar2);
    auVar4 = _vmul(auVar4,auVar4);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar3,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    *(int *)(*(int *)(param_1 + 0x32c) + 0x40) = auVar4._0_4_;
    iVar1 = *(int *)(param_1 + 0x32c);
    *(float *)(iVar1 + 0x44) = *(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x40);
    *(float *)(*(int *)(param_1 + 0x32c) + 0x48) =
         *(float *)(*(int *)(param_1 + 0x32c) + 0x48) + 1.0;
  }
  return;
}


// ==== FUN_00135b28 @ 00135b28 ====

void FUN_00135b28(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x32c) + 0x80) == 1) {
    FUN_00188b68(*(int *)(param_1 + 0x32c) + 0x290);
  }
  return;
}


// ==== FUN_00135b60 @ 00135b60 ====

undefined4 FUN_00135b60(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x328) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x328);
}


// ==== FUN_00135b80 @ 00135b80 ====

void FUN_00135b80(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x38c);
  *(int *)((int)param_1 + 0x38c) = (int)param_2;
  if (param_2 != 0) {
    if (iVar1 == 0) {
      FUN_00135bc0();
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
  return;
}


// ==== FUN_00135bc0 @ 00135bc0 ====

void FUN_00135bc0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  (**(code **)(iVar1 + 0x14))((int)param_1 + (int)*(short *)(iVar1 + 0x10),param_1);
  FUN_0016e148(DAT_0040f4d4,param_1);
  return;
}


// ==== FUN_00135c08 @ 00135c08 ====

void FUN_00135c08(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x3b2) = 0;
  FUN_00158e80(*(undefined4 *)(param_1 + 0x2a4));
  uVar1 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x300) = uVar1;
  return;
}


// ==== FUN_00135c50 @ 00135c50 ====

void FUN_00135c50(undefined8 param_1)

{
  FUN_0011cfd8(DAT_0040f508,param_1);
  return;
}


// ==== FUN_00135c78 @ 00135c78 ====

undefined4 FUN_00135c78(int param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_00143590(*(undefined4 *)(param_1 + param_2 * 4 + 0x25c),param_3,param_4);
  *(undefined1 *)(param_1 + 0x3ad) = 1;
  return 1;
}


// ==== FUN_00135cc8 @ 00135cc8 ====

bool FUN_00135cc8(int param_1)

{
  undefined4 uVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  auVar2 = _sqc2(auVar2);
  uVar1 = FUN_00135d30();
  auVar3 = _qmtc2(uVar1);
  auVar2 = _lqc2(auVar2);
  auVar2 = _vmul(auVar2,auVar3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_4_ < 0.0;
}


// ==== FUN_00135d30 @ 00135d30 ====

undefined8 FUN_00135d30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(char *)(*(int *)(param_1 + 0xb4) + 0x3c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x32c);
  }
  else {
    uVar1 = FUN_0025d8e0();
    auVar4 = _qmtc2(uVar1);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vmul(auVar4,auVar4);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar3,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    if (0x37800000 < ((uint)auVar5._0_4_ & 0x7f800000)) {
      auVar5 = _qmtc2(1.0 / SQRT(auVar5._0_4_));
      auVar5 = _vmulbc(auVar4,auVar5);
      uVar1 = auVar5._0_4_;
      goto LAB_00135dc4;
    }
    iVar2 = *(int *)(param_1 + 0x32c);
  }
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x50));
  uVar1 = auVar5._0_4_;
LAB_00135dc4:
  auVar5 = _qmfc2(uVar1);
  return auVar5._0_8_;
}


// ==== FUN_00135dd8 @ 00135dd8 ====

void FUN_00135dd8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x38c) != 2) && (*(int *)(param_1 + 0xc4) == 1)) &&
     (iVar1 = *(int *)(param_1 + 0x32c), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x84) + 0x2c))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x84) + 0x28),param_2,param_3,0);
  }
  return;
}


// ==== FUN_00135e28 @ 00135e28 ====

void FUN_00135e28(int param_1,long param_2)

{
  if (*(int *)(param_1 + 0x3a0) != 3) {
    if ((int)param_2 - 2U < 2) {
      *(undefined4 *)(param_1 + 0x3a0) = 2;
      return;
    }
    if ((*(int *)(param_1 + 0x3a0) == 0) && (param_2 == 1)) {
      *(undefined4 *)(param_1 + 0x3a0) = 1;
    }
  }
  return;
}


// ==== FUN_00135e68 @ 00135e68 ====

void FUN_00135e68(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) == 2) {
    *(undefined4 *)(param_1 + 0x3a0) = 3;
    return;
  }
  if (*(int *)(param_2 + 0x3a4) == 0) {
    *(undefined4 *)(param_1 + 0x3a0) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  return;
}


// ==== FUN_00135ea8 @ 00135ea8 ====

void FUN_00135ea8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(char *)(param_3 + 0x3b7) == '\0') {
    *(undefined4 *)(param_3 + 0x310) = param_1;
    *(undefined4 *)(param_3 + 0x314) = param_2;
    *(undefined1 *)(param_3 + 0x3b5) = 1;
    *(undefined1 *)(param_3 + 0x3b4) = 0;
  }
  return;
}


// ==== FUN_00135ed0 @ 00135ed0 ====

void FUN_00135ed0(undefined4 param_1,undefined4 param_2,int param_3)

{
  if ((*(char *)(param_3 + 0x3b7) == '\0') && (*(char *)(param_3 + 0x3b5) == '\0')) {
    *(undefined4 *)(param_3 + 0x310) = param_1;
    *(undefined1 *)(param_3 + 0x3b4) = 1;
    *(undefined4 *)(param_3 + 0x314) = param_2;
  }
  return;
}


// ==== FUN_00135f00 @ 00135f00 ====

void FUN_00135f00(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
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
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((*(int *)(*(int *)(param_3 + 0x25c) + (uint)*(byte *)(*(int *)(param_3 + 0x25c) + 0x19) * 4 +
               0xc) != 0) && (*(undefined1 **)(param_3 + 0x2a4) != (undefined1 *)0x0)) {
    bVar5 = *(byte *)(param_3 + 0x2cc);
    if (bVar5 == 4) {
      uVar13 = *(undefined4 *)(param_3 + 0x25c);
      goto LAB_001362a4;
    }
    if (*(char *)(param_3 + 0x3b6) != '\0') {
      uVar13 = *(undefined4 *)(param_3 + 0x25c);
      goto LAB_001362a4;
    }
    if (bVar5 != 3) {
      uVar6 = 0xffff;
      if (bVar5 < 2) {
        iVar3 = FUN_0015d248(DAT_0040f4e0,**(undefined1 **)(param_3 + 0x2a4),0);
        uVar6 = *(undefined2 *)(iVar3 + 0x60);
LAB_00135fb4:
        uVar13 = *(undefined4 *)(param_3 + 0x330);
      }
      else {
        if (bVar5 == 2) {
          uVar6 = *(undefined2 *)(param_3 + 0x2c8);
          goto LAB_00135fb4;
        }
        uVar13 = *(undefined4 *)(param_3 + 0x330);
      }
      puVar1 = (undefined4 *)FUN_001a68e0(uVar13,0);
      uStack_b0 = *puVar1;
      uStack_ac = puVar1[1];
      uStack_a8 = puVar1[2];
      uStack_a4 = puVar1[3];
      auVar9 = _qmtc2(param_2);
      auVar8 = _qmtc2(param_1);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmove(auVar10);
      uStack_a0 = puVar1[4];
      uStack_9c = puVar1[5];
      uStack_98 = puVar1[6];
      uStack_94 = puVar1[7];
      uStack_88 = puVar1[10];
      uStack_84 = puVar1[0xb];
      uStack_90 = (undefined4)*(undefined8 *)(puVar1 + 8);
      uStack_8c = (undefined4)((ulong)*(undefined8 *)(puVar1 + 8) >> 0x20);
      auVar7 = _lqc2(*(undefined1 (*) [16])(puVar1 + 0xc));
      auVar8 = _vaddbc(auVar7,auVar8);
      _sqc2(auVar7);
      auVar7 = _vaddbc(in_vf0,auVar8);
      auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_3 + 0x330) + 0x30) + 0x80));
      auVar8 = _vaddbc(auVar8,auVar9);
      auStack_80 = _sqc2(auVar7);
      auVar9 = _vaddbc(in_vf0,auVar8);
      auVar7 = _vmul(auVar9,auVar9);
      auVar8 = _vmove(auVar9);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar10,auVar7);
      auVar7 = _qmfc2(auVar7._0_4_);
      if (auVar7._0_4_ < 2.3283064e-10) {
        iVar3 = *(int *)(param_3 + 0x330);
      }
      else {
        auVar7 = _vmul(auVar8,auVar8);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar11,auVar7);
        auVar8 = _vmove(auVar8);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar7);
        auVar7 = _qmfc2(auVar7._0_4_);
        auVar7 = _qmtc2(SQRT(auVar7._0_4_));
        uVar13 = _vwaitq();
        auVar8 = _vmulq(auVar8,uVar13);
        auVar7 = _qmfc2(auVar7._0_4_);
        fVar2 = auVar7._0_4_;
        auVar7 = _qmtc2((int)fVar2 * (uint)(fVar2 < DAT_003bce60) |
                        (int)DAT_003bce60 * (uint)(fVar2 >= DAT_003bce60));
        auVar9 = _vmulbc(auVar8,auVar7);
        iVar3 = *(int *)(param_3 + 0x330);
      }
      auVar10 = _qmtc2(DAT_003bce5c);
      auVar7 = _qmfc2(auVar9._0_4_);
      auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar3 + 0x30) + 0x90));
      auVar8 = _vmulbc(auVar8,auVar10);
      auVar8 = _qmfc2(auVar8._0_4_);
      FUN_00126bc8(DAT_0040f4e4,**(undefined1 **)(param_3 + 0x2a4),&uStack_b0,auVar7._0_8_,
                   auVar8._0_8_,uVar6);
      bVar5 = *(byte *)(param_3 + 0x2cc);
    }
    if (bVar5 == 0) {
      uVar13 = *(undefined4 *)(param_3 + 0x330);
LAB_00136118:
      puVar1 = (undefined4 *)FUN_001a68e0(uVar13,3);
      uStack_b0 = *puVar1;
      uStack_ac = puVar1[1];
      uStack_a8 = puVar1[2];
      uStack_a4 = puVar1[3];
      auVar9 = _qmtc2(param_2);
      auVar8 = _qmtc2(param_1);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmove(auVar10);
      uStack_a0 = puVar1[4];
      uStack_9c = puVar1[5];
      uStack_98 = puVar1[6];
      uStack_94 = puVar1[7];
      uStack_88 = puVar1[10];
      uStack_84 = puVar1[0xb];
      uStack_90 = (undefined4)*(undefined8 *)(puVar1 + 8);
      uStack_8c = (undefined4)((ulong)*(undefined8 *)(puVar1 + 8) >> 0x20);
      auVar7 = _lqc2(*(undefined1 (*) [16])(puVar1 + 0xc));
      auVar8 = _vaddbc(auVar7,auVar8);
      _sqc2(auVar7);
      auVar7 = _vaddbc(in_vf0,auVar8);
      iVar3 = *(int *)(*(int *)(param_3 + 0x330) + 0x3c);
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
      auVar8 = _vaddbc(auVar8,auVar9);
      auVar9 = _vaddbc(in_vf0,auVar8);
      auStack_80 = _sqc2(auVar7);
      auVar7 = _vmul(auVar9,auVar9);
      auVar8 = _vmove(auVar9);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar10,auVar7);
      auVar7 = _qmfc2(auVar7._0_4_);
      if (2.3283064e-10 <= auVar7._0_4_) {
        auVar7 = _vmul(auVar8,auVar8);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar11,auVar7);
        auVar8 = _vmove(auVar8);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar7);
        auVar7 = _qmfc2(auVar7._0_4_);
        auVar7 = _qmtc2(SQRT(auVar7._0_4_));
        uVar13 = _vwaitq();
        auVar8 = _vmulq(auVar8,uVar13);
        auVar7 = _qmfc2(auVar7._0_4_);
        fVar2 = auVar7._0_4_;
        auVar7 = _qmtc2((int)fVar2 * (uint)(fVar2 < DAT_003bce60) |
                        (int)DAT_003bce60 * (uint)(fVar2 >= DAT_003bce60));
        auVar9 = _vmulbc(auVar8,auVar7);
      }
      auVar7 = _qmtc2(0x3f800000);
      auVar7 = _vaddbc(auVar12,auVar7);
      auVar7 = _vaddbc(in_vf0,auVar7);
      auVar8 = _qmtc2(DAT_003bce5c);
      auVar7 = _sqc2(auVar7);
      auVar7 = _lqc2(auVar7);
      auVar7 = _vmulbc(auVar7,auVar8);
      auStack_60 = _sqc2(auVar9);
      auStack_70 = _sqc2(auVar7);
      iVar3 = FUN_0015d248(DAT_0040f4e0,**(undefined1 **)(param_3 + 0x2a4),0);
      uVar4 = FUN_00126f10(DAT_0040f4e4,*(undefined4 *)(iVar3 + 100));
      auVar7 = _lqc2(auStack_60);
      auVar7 = _qmfc2(auVar7._0_4_);
      FUN_00126980(DAT_0040f4e4,1,uVar4,&uStack_b0,auVar7._0_8_,auStack_70._0_8_);
    }
    else if (bVar5 == 3) {
      uVar13 = *(undefined4 *)(param_3 + 0x330);
      goto LAB_00136118;
    }
    *(undefined1 *)(param_3 + 0x3b6) = 1;
  }
  uVar13 = *(undefined4 *)(param_3 + 0x25c);
LAB_001362a4:
  FUN_00143590(uVar13,0,0xff);
  return;
}


// ==== FUN_001362d0 @ 001362d0 ====

void FUN_001362d0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  iVar8 = (int)param_3;
  puVar3 = (undefined4 *)FUN_001a68e0(*(undefined4 *)(iVar8 + 0x330),3);
  uStack_a0 = *puVar3;
  uStack_9c = puVar3[1];
  uStack_98 = puVar3[2];
  uStack_94 = puVar3[3];
  auVar11 = _qmtc2(param_2);
  auVar10 = _qmtc2(param_1);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vmove(auVar12);
  uStack_90 = puVar3[4];
  uStack_8c = puVar3[5];
  uStack_88 = puVar3[6];
  uStack_84 = puVar3[7];
  uStack_78 = puVar3[10];
  uStack_74 = puVar3[0xb];
  uStack_80 = (undefined4)*(undefined8 *)(puVar3 + 8);
  uStack_7c = (undefined4)((ulong)*(undefined8 *)(puVar3 + 8) >> 0x20);
  auVar9 = _lqc2(*(undefined1 (*) [16])(puVar3 + 0xc));
  auVar10 = _vaddbc(auVar9,auVar10);
  _sqc2(auVar9);
  auVar9 = _vaddbc(in_vf0,auVar10);
  iVar7 = *(int *)(*(int *)(iVar8 + 0x330) + 0x3c);
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x90));
  auStack_70 = _sqc2(auVar9);
  auVar9 = _qmtc2(*(undefined4 *)(iVar7 + 0x80));
  auVar9 = _vaddbc(auVar9,auVar11);
  auVar10 = _vaddbc(in_vf0,auVar9);
  auVar9 = _vmul(auVar10,auVar10);
  auStack_60 = _sqc2(auVar10);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar12,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  if (2.3283064e-10 <= auVar9._0_4_) {
    auVar9 = _vmul(auVar10,auVar10);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar14,auVar9);
    auVar10 = _vmove(auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar9 = _qmtc2(SQRT(auVar9._0_4_));
    uVar15 = _vwaitq();
    auVar10 = _vmulq(auVar10,uVar15);
    auVar9 = _qmfc2(auVar9._0_4_);
    fVar4 = auVar9._0_4_;
    auVar9 = _qmtc2((int)fVar4 * (uint)(fVar4 < DAT_003bce60) |
                    (int)DAT_003bce60 * (uint)(fVar4 >= DAT_003bce60));
    auVar9 = _vmulbc(auVar10,auVar9);
    auStack_60 = _sqc2(auVar9);
  }
  auVar9 = _qmtc2(0x3f800000);
  auVar9 = _vaddbc(auVar13,auVar9);
  auVar10 = _qmtc2(DAT_003bce5c);
  auVar9 = _vaddbc(in_vf0,auVar9);
  auVar9 = _sqc2(auVar9);
  auVar9 = _lqc2(auVar9);
  auVar9 = _vmulbc(auVar9,auVar10);
  auStack_50 = _sqc2(auVar9);
  if (*(char *)(iVar8 + 0x2cd) != '\x01') {
    if (*(char *)(iVar8 + 0x2cd) != '\0') {
      cVar1 = *(char *)(iVar8 + 0x2ce);
      goto LAB_00136490;
    }
    lVar5 = FUN_0012d218(0x3e800000,DAT_0040f4d0);
    if (lVar5 == 0) {
      cVar1 = *(char *)(iVar8 + 0x2ce);
      goto LAB_00136490;
    }
  }
  FUN_00126980(DAT_0040f4e4,0,1,&uStack_a0,auStack_60._0_4_,auStack_50._0_4_);
  cVar1 = *(char *)(iVar8 + 0x2ce);
LAB_00136490:
  if (cVar1 == '\x01') {
    uVar6 = FUN_00126f10(DAT_0040f4e4,7);
    FUN_00126980(DAT_0040f4e4,1,uVar6,&uStack_a0,auStack_60._0_4_,auStack_50._0_4_);
    iVar7 = *(int *)(iVar8 + 0x26c);
  }
  else {
    iVar7 = *(int *)(iVar8 + 0x26c);
  }
  if (iVar7 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(iVar7 + (uint)*(byte *)(iVar7 + 0x19) * 4 + 0xc) != 0;
  }
  if (bVar2) {
    FUN_00137490(param_1,param_2,param_3);
  }
  FUN_00135f00(param_1,param_2,param_3);
  FUN_00139150(DAT_0040f514,param_3);
  *(undefined1 *)(iVar8 + 0x3b5) = 0;
  *(undefined1 *)(iVar8 + 0x3b7) = 1;
  return;
}


// ==== FUN_00136548 @ 00136548 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "SK_DF_S_490" */

void FUN_00136548(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  int iVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  
  iVar5 = *(int *)(param_1 + 0xb8);
  if (**(int **)(iVar5 + 0x58) == 5) {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x40) + 0x30);
    *(float *)(iVar5 + 0x40) =
         ((*(float *)(param_1 + 0x2e8) - 0.3) - *(float *)(param_1 + 0x318)) * 0.5;
    auVar7._8_4_ = DAT_004432a8;
    auVar7._0_8_ = _DAT_004432a0;
    auVar7._12_4_ = DAT_004432ac;
    auVar7 = _lqc2(auVar7);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(iVar5 + 0x30) = auVar7;
    fVar6 = *(float *)(param_1 + 0x2e8);
  }
  else {
    fVar6 = ((*(float *)(param_1 + 0x2e8) - 0.3) - *(float *)(param_1 + 0x318)) * 0.5;
    if (fVar6 < 0.01) {
      fVar6 = 0.01;
    }
    *(float *)(iVar5 + 0x40) = fVar6;
    *(float *)(*(int *)(param_1 + 0xb8) + 0x4c) = *(float *)(param_1 + 0x318) * 0.5;
    iVar5 = *(int *)(param_1 + 0xb8);
    if ((*(int *)(param_1 + 0x330) == 0) ||
       (lVar3 = stricmp(*(int *)(param_1 + 0x330) + 0x76,0x3f4838), lVar3 != 0)) {
      uVar2 = DAT_004432ac;
      uVar1 = DAT_004432a8;
      uVar4 = _DAT_004432a0;
      *(int *)(iVar5 + 0x30) = (int)_DAT_004432a0;
      *(int *)(iVar5 + 0x34) = (int)((ulong)uVar4 >> 0x20);
      *(undefined4 *)(iVar5 + 0x38) = uVar1;
      *(undefined4 *)(iVar5 + 0x3c) = uVar2;
    }
    else {
      uVar4 = FUN_001a6a28(*(undefined4 *)(param_1 + 0x330));
      *(int *)(iVar5 + 0x30) = (int)uVar4;
      *(int *)(iVar5 + 0x34) = (int)((ulong)uVar4 >> 0x20);
      *(undefined4 *)(iVar5 + 0x38) = in_v0_udw;
      *(undefined4 *)(iVar5 + 0x3c) = in_register_0000002c;
    }
    fVar6 = *(float *)(param_1 + 0x2e8);
    _lqc2(*(undefined1 (*) [16])(iVar5 + 0x30));
  }
  auVar7 = _qmtc2((fVar6 - 0.3) * 0.5 + 0.3);
  auVar7 = _vaddbc(in_vf0,auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar5 + 0x30) = auVar7;
  return;
}


// ==== FUN_001366b0 @ 001366b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001366b0(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  uint uStack_c;
  uint uStack_8;
  
  pauVar5 = *(undefined1 (**) [16])(param_1 + 0xb8);
  auVar8 = _qmtc2(param_2);
  if (**(int **)(pauVar5[5] + 8) == 5) {
    pauVar5 = *(undefined1 (**) [16])(*(int *)pauVar5[4] + 0x30);
  }
  auVar6 = _lqc2(_DAT_004432c0);
  auVar7 = _vsub(auVar8,auVar6);
  auVar6 = _sqc2(auVar8);
  pauVar5[2] = auVar6;
  uVar3 = DAT_004432bc;
  uVar2 = DAT_004432b8;
  uVar11 = DAT_004432b4;
  auVar6 = _qmfc2(auVar7._0_4_);
  bVar1 = false;
  if ((auVar6._0_4_ & 0x7f800000) < 0x37800001) {
    auVar6 = _sqc2(auVar7);
    uStack_c = auVar6._4_4_;
    bVar1 = false;
    if ((uStack_c & 0x7f800000) < 0x37800001) {
      auVar6 = _sqc2(auVar7);
      uStack_8 = auVar6._8_4_;
      bVar1 = (uStack_8 & 0x7f800000) < 0x37800001;
    }
  }
  if (bVar1) {
    *(undefined4 *)*pauVar5 = DAT_004432b0;
    *(undefined4 *)(*pauVar5 + 4) = uVar11;
    *(undefined4 *)(*pauVar5 + 8) = uVar2;
    *(undefined4 *)(*pauVar5 + 0xc) = uVar3;
    uVar2 = DAT_004432dc;
    uVar11 = DAT_004432d8;
    uVar4 = _DAT_004432d0;
    *(int *)pauVar5[1] = (int)_DAT_004432d0;
    *(int *)(pauVar5[1] + 4) = (int)((ulong)uVar4 >> 0x20);
    *(undefined4 *)(pauVar5[1] + 8) = uVar11;
    *(undefined4 *)(pauVar5[1] + 0xc) = uVar2;
  }
  else {
    auVar6 = _vsub(in_vf0,auVar8);
    auVar7 = _qmfc2(auVar8._0_4_);
    auVar6 = _sqc2(auVar6);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    uStack_8 = auVar6._8_4_;
    auVar8 = _sqc2(auVar8);
    auVar6 = _pextlw((long)auVar7._0_4_,(long)(int)uStack_8);
    uStack_c = auVar8._4_4_;
    auVar8 = _pextlw((long)(int)uStack_c,auVar6._0_8_);
    auVar6 = _qmtc2(auVar8._0_4_);
    *(int *)*pauVar5 = auVar8._0_4_;
    *(int *)(*pauVar5 + 4) = auVar8._4_4_;
    *(int *)(*pauVar5 + 8) = auVar8._8_4_;
    *(int *)(*pauVar5 + 0xc) = auVar8._12_4_;
    auVar9 = _lqc2(pauVar5[2]);
    _vopmula(auVar6,auVar9);
    auVar7 = _vopmsub(auVar9,auVar6);
    auVar6 = _vmul(auVar7,auVar7);
    auVar8 = _sqc2(auVar7);
    pauVar5[1] = auVar8;
    _vaddabc(auVar6,auVar6);
    auVar8 = _vmaddbc(auVar10,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar11 = _vwaitq();
    auVar8 = _vmulq(auVar7,uVar11);
    _vopmula(auVar9,auVar8);
    auVar6 = _vopmsub(auVar8,auVar9);
    auVar8 = _sqc2(auVar8);
    pauVar5[1] = auVar8;
    auVar8 = _sqc2(auVar6);
    *pauVar5 = auVar8;
  }
  return;
}


// ==== FUN_00136818 @ 00136818 ====

void FUN_00136818(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x318) = param_1;
  if (*(int *)(param_2 + 0xb8) != 0) {
    FUN_00136548();
  }
  return;
}


// ==== FUN_00136848 @ 00136848 ====

/* Strings referenciadas:
     "AI gun model not found: %s  Please ask a designer to add it to the   weaponList.txt file for
   this level" */

void FUN_00136848(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_140 [256];
  undefined1 auStack_40 [16];
  
  if (param_2 != 0) {
    uVar1 = FUN_00272610(param_2,0xe69a1dd748000000);
    lVar2 = FUN_00108120(DAT_0040f4c4,uVar1);
    if (lVar2 == 0) {
      FUN_00272488(uVar1,auStack_40,0);
      sprintf(auStack_140,0x3f4848,auStack_40);
    }
    else {
      FUN_00135c78(param_1,0,lVar2,0);
      *(undefined1 *)((int)param_1 + 0x3b4) = 0;
    }
  }
  return;
}


// ==== FUN_001368f0 @ 001368f0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001368f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  
  puVar6 = (undefined8 *)param_2;
  fVar7 = *(float *)((int)puVar6 + 0x24);
  fVar7 = (float)((int)fVar7 * (uint)(-1.0 < fVar7) | (uint)(-1.0 >= fVar7) * -0x40800000);
  fVar7 = (float)FUN_0029e1d8((int)fVar7 * (uint)(fVar7 < 1.0) | (uint)(fVar7 >= 1.0) * 0x3f800000);
  auVar8 = _qmtc2(0);
  iVar5 = (int)param_1;
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmove(auVar10);
  *(float *)(*(int *)(iVar5 + 0x32c) + 0xc) = -(fVar7 * 57.29578);
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar9 = _lqc2(*(undefined1 (*) [16])(puVar6 + 4));
  _vmove(auVar9);
  auVar11 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar9);
  auVar8 = _vmul(auVar11,auVar11);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar10,auVar8);
  auVar9 = _qmfc2(auVar8._0_4_);
  auVar8 = _sqc2(auVar11);
  if (2.3283064e-10 <= auVar9._0_4_) {
    auVar9 = _lqc2(auVar8);
    auVar8 = _vmul(auVar9,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar13,auVar8);
    auVar12 = _lqc2(_DAT_004432d0);
    auVar10 = _vmove(auVar9);
    auVar9 = _vmul(auVar12,auVar12);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar14 = _vwaitq();
    auVar11 = _vmulq(auVar10,uVar14);
    _vmulq(auVar8,uVar14);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar13,auVar9);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _sqc2(auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar14 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar14);
    _vmulq(auVar9,uVar14);
    auVar9 = _vmul(auVar11,auVar12);
    auVar13 = _vsubbc(in_vf0,in_vf0);
    auVar10 = _lqc2(auVar8);
    _vaddabc(auVar9,auVar9);
    auVar9 = _vmaddbc(auVar10,auVar9);
    auVar10 = _vmax(auVar9,auVar13);
    auVar9 = _sqc2(auVar11);
    auVar11 = _vminibc(auVar10,in_vf0);
    auVar10 = _sqc2(auVar12);
    auVar11 = _qmfc2(auVar11._0_4_);
    fVar7 = (float)FUN_0029e0d8(auVar11._0_4_,*puVar6,param_2);
    auVar10 = _lqc2(auVar10);
    auVar9 = _lqc2(auVar9);
    _vopmula(auVar9,auVar10);
    auVar10 = _vopmsub(auVar10,auVar9);
    auVar9._4_4_ = uVar2;
    auVar9._0_4_ = uVar1;
    auVar9._8_4_ = uVar3;
    auVar9._12_4_ = uVar4;
    auVar9 = _lqc2(auVar9);
    auVar9 = _vmul(auVar10,auVar9);
    auVar8 = _lqc2(auVar8);
    _vaddabc(auVar9,auVar9);
    auVar8 = _vmaddbc(auVar8,auVar9);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar7 = fVar7 * 57.29578;
    if (0.0 < auVar8._0_4_) {
      fVar7 = -fVar7;
    }
    *(float *)(*(int *)(iVar5 + 0x32c) + 8) = fVar7;
    **(undefined4 **)(iVar5 + 0x32c) = (*(undefined4 **)(iVar5 + 0x32c))[2];
  }
  FUN_00125f88(param_1,param_2);
  *(int *)(iVar5 + 0xd0) = (int)*(undefined8 *)(iVar5 + 0x70);
  *(int *)(iVar5 + 0xd4) = (int)((ulong)*(undefined8 *)(iVar5 + 0x70) >> 0x20);
  *(undefined4 *)(iVar5 + 0xd8) = *(undefined4 *)(iVar5 + 0x78);
  *(undefined4 *)(iVar5 + 0xdc) = *(undefined4 *)(iVar5 + 0x7c);
  *(undefined4 *)(iVar5 + 0x100) = *(undefined4 *)(iVar5 + 0xa0);
  *(undefined4 *)(iVar5 + 0x104) = *(undefined4 *)(iVar5 + 0xa4);
  *(undefined4 *)(iVar5 + 0x108) = *(undefined4 *)(iVar5 + 0xa8);
  *(undefined4 *)(iVar5 + 0x10c) = *(undefined4 *)(iVar5 + 0xac);
  *(int *)(iVar5 + 0xe0) = (int)*(undefined8 *)(iVar5 + 0x80);
  *(int *)(iVar5 + 0xe4) = (int)((ulong)*(undefined8 *)(iVar5 + 0x80) >> 0x20);
  *(undefined4 *)(iVar5 + 0xe8) = *(undefined4 *)(iVar5 + 0x88);
  *(undefined4 *)(iVar5 + 0xec) = *(undefined4 *)(iVar5 + 0x8c);
  *(int *)(iVar5 + 0xf0) = (int)*(undefined8 *)(iVar5 + 0x90);
  *(int *)(iVar5 + 0xf4) = (int)((ulong)*(undefined8 *)(iVar5 + 0x90) >> 0x20);
  *(undefined4 *)(iVar5 + 0xf8) = *(undefined4 *)(iVar5 + 0x98);
  *(undefined4 *)(iVar5 + 0xfc) = *(undefined4 *)(iVar5 + 0x9c);
  return;
}


// ==== FUN_00136b30 @ 00136b30 ====

undefined1 FUN_00136b30(int param_1)

{
  if (*(undefined1 **)(param_1 + 0x2a4) == (undefined1 *)0x0) {
    return 0xff;
  }
  return **(undefined1 **)(param_1 + 0x2a4);
}


// ==== FUN_00136b50 @ 00136b50 ====

undefined4 FUN_00136b50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00135b60();
  memcpy(*(undefined4 *)(param_1 + 0x354),*(undefined4 *)(iVar1 + 0x38),
         *(undefined4 *)(iVar1 + 0x3c));
  memcpy(*(undefined4 *)(param_1 + 0x358),*(undefined4 *)(iVar1 + 0x40),
         *(undefined4 *)(iVar1 + 0x44));
  *(undefined8 *)(param_1 + 0x370) = 0;
  return 1;
}


// ==== FUN_00136ba8 @ 00136ba8 ====

int FUN_00136ba8(int param_1,int param_2,short param_3)

{
  return *(int *)(param_1 + 0x354) + (int)*(short *)(param_3 * 6 + *(int *)(param_2 + 0x20));
}


// ==== FUN_00136bd0 @ 00136bd0 ====

void FUN_00136bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,int param_5)

{
  byte bVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar6 = (int)param_1;
  iVar9 = iVar6 + 0x70;
  if (param_5 != 0) {
    iVar9 = param_5;
  }
  uVar7 = 0;
  FUN_001b0740(DAT_0040f4c0 + 0xcbe0,param_1,iVar9);
  FUN_00136d60(param_1,param_2,param_3);
  iVar8 = (int)param_2;
  if (0 < *(int *)(iVar8 + 0x24)) {
    iVar11 = 0;
    iVar10 = 0;
    do {
      if (((long)(1 << (uVar7 & 0x1f)) & *(ulong *)(iVar6 + 0x370)) == 0) {
        iVar4 = *(int *)(iVar8 + 0x24);
      }
      else {
        psVar2 = (short *)(*(int *)(iVar8 + 0x20) + iVar11);
        iVar5 = *(int *)(iVar8 + 0x1c) + iVar10;
        pbVar3 = (byte *)(*(int *)(iVar6 + 0x354) + (int)*psVar2);
        bVar1 = *pbVar3;
        iVar4 = *(int *)(iVar6 + 0x358) + (int)psVar2[1];
        if (bVar1 - 5 < 3) {
          FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar5,pbVar3,iVar4,iVar6 + 0x2d0,iVar9,param_4 ^ 1,
                       bVar1 != 7);
          iVar4 = *(int *)(iVar8 + 0x24);
        }
        else {
          FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar5,pbVar3,iVar4,0,iVar9,param_4 ^ 1,bVar1 != 4);
          iVar4 = *(int *)(iVar8 + 0x24);
        }
      }
      uVar7 = uVar7 + 1;
      iVar11 = iVar11 + 6;
      iVar10 = iVar10 + 0x30;
    } while ((int)uVar7 < iVar4);
  }
  return;
}


// ==== FUN_00136d60 @ 00136d60 ====

void FUN_00136d60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x370) = 0;
  if ((*(char *)(param_2 + 0x69) != '\0') && (iVar1 = 0, *(char *)(param_2 + 0x69) != '\0')) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(ulong *)(param_1 + 0x370) =
           *(ulong *)(param_1 + 0x370) |
           *(ulong *)(*(int *)(param_2 + 0x48) + iVar2 + param_3 * 8 + 0x68);
      iVar2 = iVar2 + 0xd0;
    } while (iVar1 < (int)(uint)*(byte *)(param_2 + 0x69));
  }
  return;
}


// ==== FUN_00136dc0 @ 00136dc0 ====

void FUN_00136dc0(int param_1)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x32c) != 0) {
    iVar1 = FUN_00135550();
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _vmul(auVar4,auVar4);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar3,auVar2);
    auVar5 = _vmove(auVar3);
    auVar2 = _qmfc2(auVar2._0_4_);
    auVar3 = _vmove(auVar4);
    if (2.3283064e-10 <= auVar2._0_4_) {
      auVar2 = _vmul(auVar3,auVar3);
      auVar3 = _vmove(auVar3);
      _vaddabc(auVar2,auVar2);
      auVar2 = _vmaddbc(auVar5,auVar2);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar2);
      uVar6 = _vwaitq();
      auVar4 = _vmulq(auVar3,uVar6);
    }
    auVar2 = _qmtc2(*(undefined4 *)(param_1 + 0x2e0));
    auVar2 = _vmulbc(auVar4,auVar2);
    _qmfc2(auVar2._0_4_);
  }
  return;
}


// ==== FUN_00136e88 @ 00136e88 ====

void FUN_00136e88(int param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_00261c50(*(undefined4 *)(param_1 + 0x350),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x330) + 0x54) + 0x50),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x330) + 0x50) + 0x30));
  }
  else {
    *(int *)(param_1 + 0x150) = (int)*(undefined8 *)(param_1 + 0x70);
    *(int *)(param_1 + 0x154) = (int)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined1 *)(param_1 + 0x3b0) = 1;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0xac);
    *(undefined1 *)(param_1 + 0x3b1) = 0;
  }
  *(int *)(param_1 + 0x350) = (int)param_2;
  return;
}


// ==== FUN_00136f10 @ 00136f10 ====

void FUN_00136f10(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xc4) == 2) {
    uVar4 = 3;
  }
  else {
    uVar4 = 7;
    if (*(int *)(iVar5 + 0x38c) != 1) {
      lVar1 = FUN_00137a78(param_1);
      uVar4 = 5;
      if (lVar1 == 0) {
        uVar4 = 6;
        if (*(int *)(iVar5 + 0x3a4) == 0) {
          uVar4 = 4;
        }
      }
    }
  }
  if (param_2 == 1) {
    **(undefined4 **)(*(int *)(iVar5 + 0x35c) + 4) = *(undefined4 *)(iVar5 + 0xb8);
    iVar3 = *(int *)(iVar5 + 0xb4);
    uVar2 = *(undefined4 *)(iVar5 + 0xb8);
  }
  else {
    if (param_2 < 2) {
      if (param_2 != 0) {
        return;
      }
      *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0xb4) + 0x34) + 0x18) = 0xc;
      return;
    }
    if (param_2 != 2) {
      return;
    }
    **(undefined4 **)(*(int *)(iVar5 + 0x35c) + 4) = *(undefined4 *)(iVar5 + 0xbc);
    iVar3 = *(int *)(iVar5 + 0xb4);
    uVar2 = *(undefined4 *)(iVar5 + 0xbc);
  }
  **(undefined4 **)(*(int *)(iVar3 + 0x34) + 0xc) = uVar2;
  *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0xb4) + 0x34) + 0x18) = uVar4;
  return;
}


// ==== FUN_00137018 @ 00137018 ====

void FUN_00137018(int param_1,undefined4 param_2)

{
  int iVar1;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 in_vuI;
  undefined4 uVar16;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x32c);
  auVar15 = _qmtc2(param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x80) == 1)) {
    auVar15 = _sqc2(auVar15);
    FUN_0018c368(iVar1 + 0x1da0);
    auVar15 = _lqc2(auVar15);
  }
  auVar2 = _sqc2(auVar15);
  auVar5 = _vmaxbc(in_vf0,in_vf0);
  uStack_a4 = auVar2._12_4_;
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar2 = _qmtc2(uStack_a4 * 0.017453292);
  auVar4 = _vmul(auVar3,auVar3);
  auVar2 = _vaddbc(in_vf0,auVar2);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  _lqc2(auStack_50);
  auVar2 = _vabs(auVar2);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar2,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar5,in_vuI);
  _vmaddai(auVar5,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar2 = _vmsubi(auVar5,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0x3e800000);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vmul(auVar2,auVar2);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  _ctc2(0xc2992661);
  _vnop();
  auVar5 = _vmuli(auVar2,in_vuI);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  uVar16 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar16);
  auVar12 = _vmul(auVar7,auVar7);
  _ctc2(0xc2255de0);
  _vnop();
  auVar10 = _vmuli(auVar2,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar9 = _vmuli(auVar2,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar8 = _vmuli(auVar2,in_vuI);
  auVar4 = _vmul(auVar12,auVar12);
  auVar6 = _vmul(auVar5,auVar7);
  auVar5 = _vmulbc(auVar3,auVar3);
  _vmula(auVar10,auVar7);
  _vmadda(auVar6,auVar12);
  _ctc2(0x40c90fda);
  _vmadda(auVar9,auVar12);
  _vmaddai(auVar2,in_vuI);
  auVar2 = _vmadd(auVar8,auVar4);
  auVar4 = _qmtc2(0x3f800000);
  _lqc2(auStack_40);
  auVar9 = _vaddbc(in_vf0,auVar4);
  _vaddbc(in_vf0,auVar5);
  auVar5 = _vmul(auVar3,auVar3);
  auVar4 = _vmulbc(auVar3,auVar3);
  auVar2 = _vsubbc(auVar9,auVar2);
  _vaddbc(in_vf0,auVar4);
  auVar5 = _vsub(in_vf0,auVar5);
  auVar4 = _vmulbc(auVar3,auVar3);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar5 = _vaddbc(auVar5,auVar9);
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar4 = _vmulbc(auVar4,auVar2);
  auVar8 = _vmulbc(auVar5,auVar2);
  _lqc2(auStack_a0);
  _lqc2(auStack_90);
  auVar5 = _vsubbc(auVar9,auVar8);
  auVar2 = _vsubbc(auVar4,auVar3);
  auVar7 = _vaddbc(in_vf0,auVar5);
  auVar10 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar7);
  auVar2 = _vaddbc(auVar4,auVar3);
  _lqc2(auStack_80);
  auVar13 = _vaddbc(in_vf0,auVar2);
  auVar2 = _vaddbc(auVar4,auVar3);
  auVar12 = _vaddbc(in_vf0,auVar2);
  auVar11 = _vsubbc(auVar4,auVar3);
  auVar2 = _vsubbc(auVar4,auVar3);
  auVar6 = _vsubbc(auVar9,auVar8);
  auVar5 = _vaddbc(auVar4,auVar3);
  _vmove(auVar10);
  _vmove(auVar12);
  auVar14 = _vaddbc(in_vf0,auVar6);
  _sqc2(auVar7);
  auVar11 = _vaddbc(in_vf0,auVar11);
  _sqc2(auVar10);
  auVar7 = _vsubbc(auVar9,auVar8);
  _sqc2(auVar12);
  auVar3 = _qmtc2(*(float *)(param_1 + 0x2e8) - 0.2);
  _vmove(auVar13);
  auVar6 = _vaddbc(auVar15,auVar3);
  _sqc2(auVar13);
  auVar4 = _vaddbc(in_vf0,auVar2);
  _sqc2(auVar14);
  auVar3 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar11);
  auVar2 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar2;
  auVar2 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar2;
  auVar2 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 400) = auVar2;
  _vmove(auVar15);
  _vmove(auVar14);
  auVar6 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar11);
  auVar5 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar3);
  auVar7 = _vaddbc(in_vf0,auVar7);
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0xd0) = auVar2;
  auVar2 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0xe0) = auVar2;
  auVar2 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar2;
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar2;
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _sqc2(auVar3);
  _sqc2(auVar3);
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar7);
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar2;
  auVar2 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar2;
  auVar2 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar2;
  auVar15 = _qmfc2(auVar15._0_4_);
  FUN_00173450(param_1 + 0x210,auVar15._0_8_);
  return;
}


// ==== FUN_00137318 @ 00137318 ====

void FUN_00137318(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_00137320 @ 00137320 ====

void FUN_00137320(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0xc4) == 2) {
    iVar2 = FUN_00138c68(DAT_0040f514);
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar8 + 0x328) + 0x38);
  }
  iVar7 = 0;
  if (0 < *(int *)(iVar2 + 0xd0)) {
    iVar6 = iVar2 + 0x18;
    puVar5 = (undefined8 *)(iVar2 + 0x10);
    do {
      uVar1 = *(undefined1 *)(puVar5 + 5);
      if ((*(char *)(puVar5 + 1) != '\0') && (lVar3 = FUN_001acfc0(DAT_0040f50c,iVar6), lVar3 != 8))
      {
        if (*(int *)(iVar8 + 0xc4) == 2) {
          lVar4 = FUN_00143648(*(undefined4 *)(DAT_0040f540 + 0x7c),*puVar5);
        }
        else {
          lVar4 = FUN_00108120(DAT_0040f4c4,*puVar5);
        }
        if (lVar4 != 0) {
          FUN_00135c78(param_1,lVar3,lVar4,uVar1);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x30;
      puVar5 = puVar5 + 6;
    } while (iVar7 < *(int *)(iVar2 + 0xd0));
  }
  return;
}


// ==== FUN_00137450 @ 00137450 ====

bool FUN_00137450(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_00135550();
    bVar2 = *(char *)(iVar1 + 0x31) != '\0';
  }
  return bVar2;
}


// ==== FUN_00137490 @ 00137490 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00137490(int param_1,int param_2,int param_3)

{
  undefined1 in_zero_qw [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(int *)(param_3 + 0x26c) != 0) {
    auVar1 = _pextlw(0,0);
    auVar2 = _pextlw((long)param_1,auVar1._0_8_);
    auVar1 = _pextlw((long)param_2,auVar1._0_8_);
    auVar2 = _por(in_zero_qw,auVar2);
    auVar1 = _por(in_zero_qw,auVar1);
    FUN_00143158(DAT_003bce68,DAT_003bce64,*(int *)(param_3 + 0x26c),auVar2._0_8_,auVar1._0_8_,
                 _DAT_004147a0);
  }
  return;
}


// ==== FUN_001374f8 @ 001374f8 ====

void FUN_001374f8(int param_1,uint param_2)

{
  *(undefined4 *)
   (*(int *)(*(int *)(*(int *)(param_1 + 0xbc) + 0x40) + 0x30) + (param_2 & 0xffff) * 0x60 + 0x4c) =
       0;
  return;
}


// ==== FUN_00137520 @ 00137520 ====

void FUN_00137520(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xbc) + 0x40) + 0x30);
  uVar2 = FUN_00138360(param_2);
  *(undefined4 *)(iVar1 + ((uint)param_2 & 0xffff) * 0x60 + 0x4c) = uVar2;
  return;
}


// ==== FUN_00137568 @ 00137568 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00137568(int param_1,undefined8 param_2,undefined8 param_3,long param_4,char param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 in_zero_qw [16];
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  
  auVar7._8_4_ = in_a1_udw;
  auVar7._0_8_ = param_2;
  auVar7._12_4_ = in_register_0000005c;
  auVar7 = _por(in_zero_qw,auVar7);
  uVar8 = 0;
  lVar5 = FUN_00138320(*(undefined4 *)(param_1 + 0x328));
  iVar6 = **(int **)(*(int *)(param_1 + 0x328) + 0x3c) + param_5 * 0xc;
  if (*(int *)(param_1 + 0x260) == 0) {
    return 1;
  }
  FUN_001df640(auStack_80,*(undefined4 *)(param_1 + 0xa0));
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auStack_c0 = _sqc2(auVar9);
  auStack_b0 = _sqc2(auVar10);
  auStack_a0 = _sqc2(auVar11);
  uStack_90 = auVar7._0_4_;
  uStack_8c = auVar7._4_4_;
  uStack_88 = auVar7._8_4_;
  uStack_84 = auVar7._12_4_;
  FUN_001b7968(DAT_0040f4d8 + 0x696f0,auStack_c0,
               *(undefined2 *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x3e));
  cVar1 = *(char *)(iVar6 + 10);
  bVar2 = false;
  if (cVar1 != -1) {
    if (cVar1 == '\0') {
      uVar8 = 1;
      bVar2 = true;
    }
    else {
      bVar3 = *(char *)(param_1 + 0x388) + 1;
      *(byte *)(param_1 + 0x388) = bVar3;
      bVar2 = *(byte *)(iVar6 + 10) <= bVar3;
    }
  }
  if ((int)lVar5 - 0x25U < 2) {
    iVar6 = *(int *)(param_1 + 0x260);
  }
  else {
    if (lVar5 != 0x28) goto LAB_001376f0;
    iVar6 = *(int *)(param_1 + 0x260);
  }
  if (*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x19) * 4 + 0xc) == 0) {
    uVar8 = 1;
  }
  else if (bVar2) {
    FUN_00143158(0x41c80000,0,iVar6,DAT_00414770,_DAT_00414780,DAT_00414790);
  }
LAB_001376f0:
  uVar4 = 1;
  if (param_4 == 0) {
    uVar4 = uVar8;
  }
  return uVar4;
}


// ==== FUN_00137718 @ 00137718 ====

void FUN_00137718(int param_1,long param_2)

{
  int iVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  iVar1 = DAT_0040f4bc;
  auVar6 = _vaddbc(in_vf0,in_vf0);
  lVar3 = 0;
  auVar6 = _sqc2(auVar6);
  fVar5 = *(float *)(param_1 + 0x2c) / *(float *)(DAT_0040f4bc + 0x1660);
  if (param_2 == 0) {
    auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4bc + 0x7c0));
  }
  else {
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
    auVar7 = _vsub(auVar7,auVar8);
    auVar8 = _lqc2(auVar6);
    auVar7 = _vmul(auVar7,auVar7);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar8,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar9 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar9);
    auVar7 = _qmfc2(auVar7._0_4_);
    *(int *)(param_1 + 0x304) = auVar7._0_4_;
    lVar3 = FUN_00110010(DAT_0040f4bc);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x7c0));
  }
  auVar8 = _qmtc2(fVar5);
  auVar8 = _vmulbc(auVar7,auVar8);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 2000));
  auVar7 = _vsub(auVar7,auVar8);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar8 = _vsub(auVar8,auVar7);
  auVar7 = _lqc2(auVar6);
  auVar6 = _vmul(auVar8,auVar8);
  fVar4 = 1.0;
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar6);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  uVar9 = _vwaitq();
  auVar6 = _vmulq(auVar6,uVar9);
  *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar2 = auVar6._0_4_;
  *(float *)(param_1 + 0xc0) = fVar2;
  if ((fVar5 < fVar2) && (lVar3 == 0)) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x7c0));
    auVar7 = _qmtc2(1.0 / fVar2);
    auVar7 = _vmulbc(auVar8,auVar7);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar6,auVar7);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar5 = (float)FUN_0029da28((*(float *)(DAT_0040f4bc + 0x700) * 0.5 + 10.0) * 0.017453292);
    fVar5 = (auVar6._0_4_ - fVar5) / (fVar4 - fVar5);
    *(uint *)(param_1 + 0x308) = (int)fVar5 * (uint)(0.0 < fVar5);
  }
  return;
}


// ==== FUN_001378f0 @ 001378f0 ====

float FUN_001378f0(int param_1)

{
  return *(float *)(param_1 + 0xc0) * *(float *)(DAT_0040f4bc + 0x1660);
}


// ==== FUN_00137908 @ 00137908 ====

void FUN_00137908(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 in_v1_udw;
  uint uVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  
  iVar2 = FUN_00135b60();
  bVar1 = *(byte *)(iVar2 + 0x6b);
  uVar5 = (uint)bVar1;
  *(undefined1 *)(param_1 + 200) = 0;
  if (1 < uVar5) {
    auVar3._0_8_ = (long)(int)(bVar1 - 1);
    auVar3._8_8_ = extraout_v0_udw;
    if (*(int *)(DAT_0040f4d0 + 0x5ae4) >> 0x1f < 0) {
      auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4bc + 0x720));
      auVar3 = _vsub(auVar3,auVar7);
      auVar3 = _vmul(auVar3,auVar3);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar8,auVar3);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar3);
      auVar3 = _vaddbc(in_vf0,in_vf0);
      uVar9 = _vwaitq();
      auVar3 = _vmulq(auVar3,uVar9);
      auVar3 = _qmfc2(auVar3._0_4_);
      *(float *)(param_1 + 0xc0) = auVar3._0_4_;
      fVar6 = auVar3._0_4_ * *(float *)(DAT_0040f4bc + 0x1660);
      if (*(int *)(param_1 + 0x32c) == 0) {
        do {
          if ((int)uVar5 < 1) {
            return;
          }
          uVar5 = uVar5 - 1;
        } while (fVar6 <= *(float *)(iVar2 + 0x28 + uVar5 * 4) *
                          *(float *)(&DAT_003f5110 + uVar5 * 4));
        *(char *)(param_1 + 200) = (char)uVar5;
      }
      else if (bVar1 != 0) {
        if (*(float *)(iVar2 + 0x28 + (uVar5 - 1) * 4) < fVar6) {
          *(char *)(param_1 + 200) = (char)(uVar5 - 1);
        }
        else {
          do {
            iVar4 = uVar5 - 2;
            if ((int)(uVar5 - 1) < 1) {
              return;
            }
            uVar5 = uVar5 - 1;
          } while (fVar6 <= *(float *)(iVar2 + 0x28 + iVar4 * 4));
          *(char *)(param_1 + 200) = (char)iVar4;
        }
      }
    }
    else {
      auVar7._8_8_ = in_v1_udw;
      auVar7._0_8_ = (long)*(int *)(DAT_0040f4d0 + 0x5ae4);
      auVar3 = _pminw(auVar7,auVar3);
      auVar3 = _pextlw(0,auVar3._0_8_);
      *(char *)(param_1 + 200) = auVar3[0];
    }
  }
  return;
}


// ==== FUN_00137a78 @ 00137a78 ====

bool FUN_00137a78(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x26c);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(iVar1 + (uint)*(byte *)(iVar1 + 0x19) * 4 + 0xc) != 0;
  }
  bVar3 = false;
  if (bVar2) {
    lVar4 = FUN_00138320(*(undefined4 *)(param_1 + 0x328));
    bVar3 = lVar4 == 0x28;
  }
  return bVar3;
}


// ==== FUN_00137ae0 @ 00137ae0 ====

undefined * FUN_00137ae0(int param_1)

{
  if (*(int *)(param_1 + 0x2a4) != 0) {
    return (undefined *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0xe8) + 0xc) + 0x10);
  }
  return PTR_DAT_003bd140;
}


// ==== FUN_00137b08 @ 00137b08 ====

void FUN_00137b08(int param_1,undefined1 param_2)

{
  int iVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0x3ac) = param_2;
  iVar1 = FUN_0012d158(DAT_0040f4d0,0xffffffffffffff80,0);
  fVar2 = (float)FUN_0012d0d0(0x3f19999a,0x3f7ff972,DAT_0040f4d0);
  *(float *)(param_1 + 600) = (float)iVar1 - fVar2;
  return;
}


// ==== FUN_00137b88 @ 00137b88 ====

void FUN_00137b88(int param_1)

{
  short *psVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x364) != 0) &&
     (iVar5 = 0, 0 < *(int *)(*(int *)(param_1 + 0x364) + 0x24))) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x364);
      psVar1 = (short *)(*(int *)(iVar2 + 0x20) + iVar7);
      pbVar3 = (byte *)(*(int *)(iVar2 + 0x38) + (int)*psVar1);
      iVar4 = *(int *)(iVar2 + 0x40) + (int)psVar1[1];
      iVar2 = *(int *)(iVar2 + 0x1c) + iVar6;
      if (*pbVar3 - 2 < 3) {
        FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar2,pbVar3,iVar4,param_1 + 0x2d0,param_1 + 0x110,0,1);
        iVar2 = *(int *)(param_1 + 0x364);
      }
      else {
        FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar2,pbVar3,iVar4,0,param_1 + 0x110,0,1);
        iVar2 = *(int *)(param_1 + 0x364);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 6;
      iVar6 = iVar6 + 0x30;
    } while (iVar5 < *(int *)(iVar2 + 0x24));
  }
  return;
}


// ==== FUN_00137ca0 @ 00137ca0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00137ca0(int param_1)

{
  long lVar1;
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
  undefined4 uVar13;
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
  undefined4 uStack_f4;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  auVar2 = _qmtc2(0x3f533333);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar2 = _vaddbc(auVar3,auVar2);
  _vmove(auVar3);
  auVar12 = _vaddbc(in_vf0,auVar2);
  auVar3 = _vsub(auVar3,auVar12);
  auVar2 = _vmul(auVar3,auVar3);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar5,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar13);
  auVar2 = _qmfc2(auVar2._0_4_);
  fStack_100 = auVar2._0_4_ * 0.5 - 0.3;
  auVar2 = _qmtc2(1.0 / auVar2._0_4_);
  auVar2 = _vmulbc(auVar3,auVar2);
  if (fStack_100 < 0.0) {
    fStack_100 = 0.0;
  }
  uStack_e8 = DAT_0048f6f8;
  uStack_e4 = 1;
  auVar3 = _qmtc2(fStack_100 + 0.3);
  uStack_f0 = 0;
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar11 = _vsub(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  uStack_ec = 0;
  auVar6 = _vmulbc(auVar2,auVar3);
  auVar7 = _lqc2(_DAT_004432b0);
  uStack_140 = *(undefined4 *)PTR_DAT_0040e438;
  uStack_13c = *(undefined4 *)(PTR_DAT_0040e438 + 4);
  uStack_138 = *(undefined4 *)(PTR_DAT_0040e438 + 8);
  uStack_134 = *(undefined4 *)(PTR_DAT_0040e438 + 0xc);
  _vopmula(auVar7,auVar2);
  auVar4 = _vopmsub(auVar2,auVar7);
  auVar3 = _vmul(auVar4,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar5,auVar3);
  auVar5 = _vmove(auVar4);
  auVar12 = _vadd(auVar12,auVar6);
  uStack_130 = *(undefined4 *)(PTR_DAT_0040e438 + 0x10);
  uStack_12c = *(undefined4 *)(PTR_DAT_0040e438 + 0x14);
  uStack_128 = *(undefined4 *)(PTR_DAT_0040e438 + 0x18);
  uStack_124 = *(undefined4 *)(PTR_DAT_0040e438 + 0x1c);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar13 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar13);
  _vopmula(auVar2,auVar5);
  auVar3 = _vopmsub(auVar5,auVar2);
  uStack_120 = *(undefined4 *)(PTR_DAT_0040e438 + 0x20);
  uStack_11c = *(undefined4 *)(PTR_DAT_0040e438 + 0x24);
  uStack_118 = *(undefined4 *)(PTR_DAT_0040e438 + 0x28);
  uStack_114 = *(undefined4 *)(PTR_DAT_0040e438 + 0x2c);
  uStack_108 = *(undefined4 *)(PTR_DAT_0040e438 + 0x38);
  uStack_104 = *(undefined4 *)(PTR_DAT_0040e438 + 0x3c);
  _sqc2(auVar8);
  _sqc2(auVar7);
  _sqc2(auVar4);
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = (undefined4)((ulong)uStack_30 >> 0x20);
  uStack_110 = (undefined4)*(undefined8 *)(PTR_DAT_0040e438 + 0x30);
  uStack_10c = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_0040e438 + 0x30) >> 0x20);
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar11);
  auStack_e0 = _sqc2(auVar5);
  uStack_f4 = 0x3e99999a;
  auStack_40 = _sqc2(auVar2);
  auStack_60 = _sqc2(auVar5);
  auStack_50 = _sqc2(auVar3);
  auStack_a0 = _sqc2(auVar5);
  auStack_90 = _sqc2(auVar3);
  auStack_80 = _sqc2(auVar2);
  auStack_d0 = _sqc2(auVar3);
  auStack_b0 = _sqc2(auVar12);
  auStack_c0 = _sqc2(auVar2);
  lVar1 = FUN_0012b720(DAT_0040f4d0,&uStack_140,auStack_e0,0x83);
  return lVar1 != 0;
}


// ==== FUN_00137e88 @ 00137e88 ====

undefined4 FUN_00137e88(float param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uStack_c;
  
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  auVar4 = _qmtc2(param_3);
  auVar4 = _vsub(auVar4,auVar3);
  auVar3 = _sqc2(auVar4);
  uStack_c = auVar3._4_4_;
  if (uStack_c <= *(float *)(param_2 + 0x2e8)) {
    auVar3 = _sqc2(auVar4);
    uStack_c = auVar3._4_4_;
    bVar1 = false;
    if (0.0 <= uStack_c) goto LAB_00137edc;
  }
  bVar1 = true;
LAB_00137edc:
  uVar2 = 0;
  if (!bVar1) {
    auVar5 = _vmulbc(auVar4,auVar4);
    auVar3 = _vmulbc(auVar4,auVar4);
    auVar3 = _vaddbc(auVar3,auVar5);
    uVar2 = 0;
    auVar3 = _qmfc2(auVar3._0_4_);
    param_1 = *(float *)(param_2 + 0x318) * 0.5 + param_1;
    if (auVar3._0_4_ <= param_1 * param_1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_00137f30 @ 00137f30 ====

void FUN_00137f30(int param_1)

{
  long lVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_60 [36];
  undefined4 uStack_3c;
  
  auVar4 = _qmtc2(0x40000000);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar2 = _qmtc2(*(float *)(param_1 + 0x2e8) * 0.5);
  auVar2 = _vaddbc(auVar3,auVar2);
  auVar3 = _vaddbc(in_vf0,auVar2);
  auVar2 = _qmfc2(auVar3._0_4_);
  auVar3 = _vsubbc(auVar3,auVar4);
  _qmtc2(auVar2._0_4_);
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  lVar1 = FUN_0012ae58(DAT_0040f4d0,auVar2._0_8_,auVar3._0_8_,2,0,0,auStack_60);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 800) = uStack_3c;
  }
  return;
}


// ==== FUN_00137fb8 @ 00137fb8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00137fb8(undefined4 *param_1)

{
  undefined4 uVar1;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  param_1[1] = 0x2b;
  *param_1 = 0;
  param_1[2] = 1;
  if (cGpffff81ba == '\0') {
    auVar6 = _lqc2(_DAT_004432b0);
    auVar2 = _qmtc2(DAT_003f513c);
    auVar7 = _lqc2(_DAT_004432c0);
    auVar3 = _qmtc2(DAT_003f5144);
    auVar5 = _qmtc2(DAT_003f5138);
    auVar11 = _qmtc2(0x3f000000);
    auVar2 = _vmulbc(auVar7,auVar2);
    auVar4 = _qmtc2(DAT_003f5148);
    auVar2 = _vmulbc(auVar2,auVar11);
    _DAT_00414830 = _sqc2(auVar2);
    auVar12 = _qmtc2(0xbf000000);
    auVar9 = _qmtc2(DAT_003f514c);
    auVar8 = _lqc2(_DAT_004432d0);
    auVar2 = _vmulbc(auVar6,auVar3);
    DAT_00414870 = (undefined4)_DAT_004432a0;
    DAT_00414874 = (undefined4)((ulong)_DAT_004432a0 >> 0x20);
    DAT_00414878 = DAT_004432a8;
    DAT_0041487c = DAT_004432ac;
    auVar2 = _vmulbc(auVar2,auVar12);
    auVar3 = _vmulbc(auVar6,auVar4);
    _DAT_004148b0 = _sqc2(auVar2);
    auVar2 = _vmulbc(auVar3,auVar12);
    auVar3 = _vmulbc(auVar7,auVar5);
    _DAT_004148f0 = _sqc2(auVar2);
    auVar2 = _vmulbc(auVar3,auVar11);
    auVar3 = _vsub(in_vf0,auVar7);
    _DAT_004147f0 = _sqc2(auVar2);
    auVar14 = _vsub(in_vf0,auVar8);
    _DAT_00414860 = _sqc2(auVar3);
    auVar2 = _vmulbc(auVar6,auVar9);
    _DAT_004147e0 = _sqc2(auVar3);
    _DAT_004147c0 = _sqc2(auVar6);
    auVar10 = _vmulbc(auVar2,auVar11);
    _DAT_004147d0 = _sqc2(auVar8);
    _DAT_00414800 = _sqc2(auVar6);
    _DAT_00414810 = _sqc2(auVar8);
    _DAT_00414820 = _sqc2(auVar3);
    _DAT_00414840 = _sqc2(auVar6);
    _DAT_00414850 = _sqc2(auVar8);
    auVar13 = _vsub(in_vf0,auVar6);
    _DAT_00414880 = _sqc2(auVar14);
    _DAT_00414890 = _sqc2(auVar7);
    _DAT_004148a0 = _sqc2(auVar6);
    _DAT_004148c0 = _sqc2(auVar14);
    _DAT_004148d0 = _sqc2(auVar7);
    _DAT_004148e0 = _sqc2(auVar6);
    _DAT_00414900 = _sqc2(auVar8);
    auVar9 = _qmtc2(DAT_003f5160);
    auVar2 = _qmtc2(DAT_003f5150);
    auVar3 = _qmtc2(DAT_003f5154);
    auVar4 = _qmtc2(DAT_003f5158);
    auVar5 = _qmtc2(DAT_003f515c);
    auVar2 = _vmulbc(auVar6,auVar2);
    _DAT_00414930 = _sqc2(auVar10);
    auVar3 = _vmulbc(auVar6,auVar3);
    auVar2 = _vmulbc(auVar2,auVar11);
    auVar4 = _vmulbc(auVar6,auVar4);
    _DAT_00414970 = _sqc2(auVar2);
    auVar2 = _vmulbc(auVar3,auVar12);
    _DAT_004149b0 = _sqc2(auVar2);
    auVar3 = _vmulbc(auVar6,auVar5);
    auVar2 = _vmulbc(auVar4,auVar12);
    auVar3 = _vmulbc(auVar3,auVar11);
    _DAT_004149f0 = _sqc2(auVar2);
    auVar2 = _vmulbc(auVar6,auVar9);
    _DAT_00414a30 = _sqc2(auVar3);
    auVar2 = _vmulbc(auVar2,auVar11);
    _DAT_00414a40 = _sqc2(auVar8);
    _DAT_00414a70 = _sqc2(auVar2);
    _DAT_004149c0 = _sqc2(auVar14);
    _DAT_00414a50 = _sqc2(auVar7);
    _DAT_00414a60 = _sqc2(auVar13);
    _DAT_00414910 = _sqc2(auVar7);
    _DAT_00414920 = _sqc2(auVar13);
    _DAT_00414940 = _sqc2(auVar8);
    _DAT_00414950 = _sqc2(auVar7);
    _DAT_00414960 = _sqc2(auVar13);
    _DAT_00414980 = _sqc2(auVar14);
    _DAT_00414990 = _sqc2(auVar7);
    _DAT_004149a0 = _sqc2(auVar6);
    _DAT_004149d0 = _sqc2(auVar7);
    _DAT_004149e0 = _sqc2(auVar6);
    _DAT_00414a00 = _sqc2(auVar8);
    _DAT_00414a10 = _sqc2(auVar7);
    _DAT_00414a20 = _sqc2(auVar13);
    cGpffff81ba = '\x01';
  }
  uVar1 = FUN_00107cf8(8);
  param_1[0xf] = uVar1;
  param_1[0xe] = 0;
  return;
}


// ==== FUN_001381e0 @ 001381e0 ====

undefined4 FUN_001381e0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  
  piVar5 = (int *)param_1;
  piVar4 = piVar5 + 3;
  iVar6 = 10;
  ppuVar7 = &PTR_DAT_003bce70;
  do {
    if (*ppuVar7 != (undefined *)0x0) {
      iVar1 = FUN_00138298(param_1);
      *piVar4 = iVar1;
    }
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + -1;
    ppuVar7 = ppuVar7 + 1;
  } while (-1 < iVar6);
  if (*piVar5 != 0) {
    puVar3 = (undefined4 *)(*piVar5 + 0x28);
    puVar2 = &DAT_003f5128;
    iVar6 = 3;
    do {
      uVar8 = *puVar2;
      iVar6 = iVar6 + -1;
      puVar2 = puVar2 + 1;
      *puVar3 = uVar8;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar6);
  }
  piVar5[0xe] = 0;
  FUN_001415a8(piVar5[0xf],piVar5[1]);
  return 1;
}


// ==== FUN_00138298 @ 00138298 ====

int FUN_00138298(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(*param_1 + 0x5c) < 1) {
LAB_00138304:
    iVar3 = 0;
  }
  else {
    iVar2 = *param_1;
    while (lVar1 = stricmp(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 0x60)),param_2), lVar1 != 0)
    {
      iVar3 = iVar3 + 1;
      if (*(int *)(*param_1 + 0x5c) <= iVar3) goto LAB_00138304;
      iVar2 = *param_1;
    }
  }
  return iVar3;
}


// ==== FUN_00138320 @ 00138320 ====

undefined4 FUN_00138320(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== FUN_00138328 @ 00138328 ====

void FUN_00138328(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ==== FUN_00138338 @ 00138338 ====

void FUN_00138338(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// ==== FUN_00138340 @ 00138340 ====

undefined4 FUN_00138340(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// ==== FUN_00138348 @ 00138348 ====

undefined4 FUN_00138348(int param_1)

{
  return (&DAT_003f5138)[param_1];
}


// ==== FUN_00138360 @ 00138360 ====

undefined4 FUN_00138360(int param_1)

{
  return *(undefined4 *)(&DAT_003f5168 + param_1 * 4);
}


// ==== FUN_00138378 @ 00138378 ====

undefined4 * FUN_00138378(int param_1)

{
  return &DAT_004147c0 + param_1 * 0x10;
}


// ==== FUN_00138390 @ 00138390 ====

void FUN_00138390(int param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 0x2b) {
    param_3 = *(int *)(param_1 + 4);
  }
  switch(param_3) {
  case 0x1d:
  case 0x1e:
  case 0x1f:
    *param_2 = DAT_003f4960;
    return;
  default:
    *param_2 = DAT_003f4968;
    return;
  case 0x26:
    *param_2 = DAT_003f4958;
    return;
  case 0x28:
    *param_2 = DAT_003f4950;
    return;
  case 0x2a:
    *param_2 = DAT_003f4948;
    return;
  }
}


// ==== FUN_00138470 @ 00138470 ====

void FUN_00138470(int *param_1,undefined8 param_2)

{
  float fVar1;
  
  *param_1 = (int)param_2;
  if (0.0 < *(float *)((int)param_2 + 0x308)) {
    fVar1 = (float)FUN_001378f0(param_2);
    param_1[1] = (int)(1.0 / fVar1);
  }
  else {
    param_1[1] = 0;
  }
  return;
}


// ==== FUN_001384c8 @ 001384c8 ====

void FUN_001384c8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar4 = (int)param_1;
  iVar1 = iVar4 + 0x7a10;
  iVar2 = 0x2b;
  *(undefined4 *)(iVar4 + 0x8510) = 0;
  do {
    iVar2 = iVar2 + -1;
    FUN_00137fb8(iVar1);
    iVar1 = iVar1 + 0x40;
  } while (-1 < iVar2);
  *(undefined4 *)(iVar4 + 0x8518) = 0;
  puVar6 = (undefined4 *)(iVar4 + 0x79d4);
  piVar5 = (int *)(iVar4 + 0x79d0);
  iVar3 = iVar4 + 0x310;
  iVar1 = iVar4 + 0x90;
  iVar2 = 0x1f;
  do {
    FUN_00131ef0(iVar1,0);
    if (*(int *)(iVar1 + 0x2a0) == 0) {
      FUN_0015c088(iVar3,2);
    }
    iVar3 = iVar3 + 0x3c0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x3c0;
  } while (-1 < iVar2);
  FUN_00139780(iVar4 + 0x7990,0x20,0);
  iVar1 = 7;
  FUN_00139780(iVar4 + 0x79a0,0x10,7);
  FUN_00139780(iVar4 + 0x79b0,8,7);
  FUN_00139780(iVar4 + 0x79c0,8,7);
  FUN_0013ec10(param_1,6);
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,6,0);
  *puVar6 = 0;
  while( true ) {
    puVar6 = puVar6 + 2;
    iVar1 = iVar1 + -1;
    iVar2 = FUN_00107cf8(0x160);
    *piVar5 = iVar2;
    *(undefined **)(iVar2 + 0x10) = &DAT_003dcb38;
    piVar5 = piVar5 + 2;
    (*(code *)PTR_FUN_003dcbcc)(iVar2 + DAT_003dcbc8);
    if (iVar1 < 0) break;
    *puVar6 = 0;
  }
  FUN_00107b08(0x40f0f0,6,0);
  FUN_00107ab8(0x40f0f0,0,0);
  *(undefined4 *)(iVar4 + 0x8520) = 3;
  *(undefined4 *)(iVar4 + 0x851c) = 0;
  return;
}


// ==== FUN_001386c8 @ 001386c8 ====

undefined4 FUN_001386c8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
     (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (!bVar1) {
    lVar3 = FUN_00143700(DAT_0040f540);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 0x2e0);
      FUN_001397f8();
      iVar6 = 0x1f;
      FUN_001397f8(param_1 + 0x79a0);
      FUN_001397f8(param_1 + 0x79b0);
      FUN_001397f8(param_1 + 0x79c0);
      iVar5 = param_1 + 0x90;
      do {
        *puVar4 = 0;
        FUN_00139838(param_1 + 0x7990,iVar5);
        iVar6 = iVar6 + -1;
        puVar4 = puVar4 + 0xf0;
        iVar5 = iVar5 + 0x3c0;
      } while (-1 < iVar6);
      *(undefined4 *)(param_1 + 0x8520) = 3;
      *(undefined4 *)(param_1 + 0x8514) = 1;
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x851c) = 0;
    }
  }
  return uVar2;
}


// ==== FUN_001387c8 @ 001387c8 ====

void FUN_001387c8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_00139538();
  iVar5 = *(int *)(param_2 + 0x851c);
  iVar2 = *(int *)(param_2 + 0x8520);
  if (iVar2 < iVar5) {
    iVar3 = 0;
    iVar5 = (iVar5 - iVar2) / 2;
    if (0 < iVar2) {
      piVar4 = (int *)(param_2 + 0x7890);
      iVar2 = *piVar4;
      while( true ) {
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 2;
        (**(code **)(*(int *)(iVar2 + 0x10) + 0x94))
                  (param_1,iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x90),0);
        if (*(int *)(param_2 + 0x8520) <= iVar3) break;
        iVar2 = *piVar4;
      }
    }
    iVar2 = *(int *)(param_2 + 0x851c);
    if (*(int *)(param_2 + 0x8520) < iVar2) {
      do {
        iVar2 = iVar2 + -1;
        iVar3 = *(int *)(param_2 + 0x7890 + iVar2 * 8);
        iVar1 = *(int *)(iVar3 + 0x10);
        if ((*(char *)(*(int *)(iVar3 + 0x330) + 0xb7) == '\0') && (iVar5 != 0)) {
          iVar5 = iVar5 + -1;
          (**(code **)(iVar1 + 0x94))(param_1,iVar3 + *(short *)(iVar1 + 0x90),1);
          iVar3 = *(int *)(param_2 + 0x8520);
        }
        else {
          (**(code **)(iVar1 + 0x94))(param_1,iVar3 + *(short *)(iVar1 + 0x90),0);
          iVar3 = *(int *)(param_2 + 0x8520);
        }
      } while (iVar3 < iVar2);
    }
  }
  else {
    iVar2 = 0;
    if (0 < iVar5) {
      piVar4 = (int *)(param_2 + 0x7890);
      iVar5 = *piVar4;
      while( true ) {
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 2;
        (**(code **)(*(int *)(iVar5 + 0x10) + 0x94))
                  (param_1,iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x90),0);
        if (*(int *)(param_2 + 0x851c) <= iVar2) break;
        iVar5 = *piVar4;
      }
    }
  }
  return;
}


// ==== FUN_00138970 @ 00138970 ====

bool FUN_00138970(void)

{
  long lVar1;
  
  lVar1 = FUN_001437d8(DAT_0040f540);
  return lVar1 != 0;
}


// ==== FUN_001389a0 @ 001389a0 ====

void FUN_001389a0(void)

{
  return;
}


// ==== FUN_001389a8 @ 001389a8 ====

void FUN_001389a8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79a4)) {
    iVar1 = *(int *)(iVar3 + 0x79ac);
    while( true ) {
      if (*(int *)(iVar2 * 4 + iVar1) == 0) {
        iVar1 = *(int *)(iVar3 + 0x79a4);
      }
      else {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79a4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79ac);
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79b4)) {
    iVar1 = *(int *)(iVar3 + 0x79bc);
    while( true ) {
      if (*(int *)(iVar2 * 4 + iVar1) == 0) {
        iVar1 = *(int *)(iVar3 + 0x79b4);
      }
      else {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79b4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79bc);
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79c4)) {
    iVar1 = *(int *)(iVar3 + 0x79cc);
    while( true ) {
      if (*(int *)(iVar2 * 4 + iVar1) == 0) {
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      else {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79cc);
    }
  }
  FUN_00139b68(iVar3 + 0x7990);
  FUN_00139b68(iVar3 + 0x79a0);
  FUN_00139b68(iVar3 + 0x79b0);
  FUN_00139b68(iVar3 + 0x79c0);
  return;
}


// ==== FUN_00138af8 @ 00138af8 ====

void FUN_00138af8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79a4)) {
    iVar1 = *(int *)(iVar3 + 0x79ac);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0x79a4);
      }
      else if (*(int *)(iVar1 + 0x390) == param_2) {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79a4);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x79a4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79ac);
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79b4)) {
    iVar1 = *(int *)(iVar3 + 0x79bc);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0x79b4);
      }
      else if (*(int *)(iVar1 + 0x390) == param_2) {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79b4);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x79b4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79bc);
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79c4)) {
    iVar1 = *(int *)(iVar3 + 0x79cc);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      else if (*(int *)(iVar1 + 0x390) == param_2) {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79cc);
    }
  }
  return;
}


// ==== FUN_00138c40 @ 00138c40 ====

int FUN_00138c40(int param_1,int param_2)

{
  return param_1 + param_2 * 0x40 + 0x7a10;
}


// ==== FUN_00138c50 @ 00138c50 ====

undefined4 FUN_00138c50(void)

{
  return *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 0x14);
}


// ==== FUN_00138c68 @ 00138c68 ====

undefined4 FUN_00138c68(void)

{
  return *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 0x18);
}


// ==== FUN_00138c80 @ 00138c80 ====

undefined8 FUN_00138c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  
  lVar1 = FUN_0025cdf0(DAT_0040f4cc);
  iVar4 = (int)param_1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x79a4) == *(int *)(iVar4 + 0x79a8)) {
      uVar2 = FUN_00139980(iVar4 + 0x79a0);
      FUN_00139060(param_1,uVar2);
    }
    uVar2 = FUN_00139980(iVar4 + 0x7990);
    FUN_00139838(iVar4 + 0x79a0,uVar2);
    puVar3 = (undefined4 *)param_3;
    if (puVar3[0xf] == 1) {
      iVar4 = *(int *)(puVar3[0x12] + 4);
      uStack_6c = *(undefined1 *)(iVar4 + 0x50);
      uStack_6b = *(undefined1 *)(iVar4 + 0x51);
      uStack_6a = *(undefined1 *)(iVar4 + 0x52);
      uStack_70 = *(undefined4 *)(iVar4 + 0x4c);
    }
    else {
      uStack_6c = 4;
      uStack_6a = 2;
      uStack_70 = 0xffffffff;
      uStack_6b = 2;
    }
    FUN_001327f0(uVar2,*puVar3,*(undefined8 *)(puVar3 + 4),*(undefined8 *)(puVar3 + 8),
                 *(undefined8 *)(puVar3 + 10),puVar3[0xc],puVar3[0xe],puVar3[0xf]);
    FUN_00135558(uVar2,&uStack_70);
    FUN_0016e660(DAT_0040f4d4,uVar2);
    FUN_0013d048(param_2,uVar2,param_3);
    FUN_001354e0(uVar2,param_2);
    FUN_0025c210(DAT_0040f4cc,uVar2);
    FUN_0012a158(DAT_0040f4d0,uVar2);
  }
  return uVar2;
}


// ==== FUN_00138df8 @ 00138df8 ====

undefined8
FUN_00138df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 in_zero_qw [16];
  undefined8 uVar1;
  undefined1 in_a2_qw [16];
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar2 = (int)param_1;
  auVar3 = _por(in_zero_qw,in_a2_qw);
  if (*(int *)(iVar2 + 0x79a4) == *(int *)(iVar2 + 0x79a8)) {
    uVar1 = FUN_00139980(iVar2 + 0x79a0);
    FUN_00139060(param_1,uVar1);
  }
  uVar1 = FUN_00139980(iVar2 + 0x7990);
  FUN_00139838(iVar2 + 0x79a0,uVar1);
  auVar3 = _por(in_zero_qw,auVar3);
  FUN_001327f0(uVar1,param_2,auVar3._0_8_,param_3,param_4,param_5,0,0xffffffffffffffff);
  if (param_1 != 0) {
    FUN_0013ec38(param_1,uVar1);
    FUN_001354e0(uVar1,param_1);
  }
  FUN_0025c210(DAT_0040f4cc,uVar1);
  FUN_0012a158(DAT_0040f4d0,uVar1);
  return uVar1;
}


// ==== FUN_00138f08 @ 00138f08 ====

void FUN_00138f08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = iVar3 + 0x79b0;
  if (*(int *)((int)param_2 + 0x250) != iVar2) {
    if (*(int *)(iVar3 + 0x79b4) == *(int *)(iVar3 + 0x79b8)) {
      uVar1 = FUN_00139980(iVar2);
      FUN_00139060(param_1,uVar1);
    }
    FUN_00139838(iVar2,param_2);
    FUN_00135c08(param_2);
    FUN_00135b80(param_2,1);
    FUN_0016e6b0(DAT_0040f4d4,param_2);
  }
  return;
}


// ==== FUN_00138fa0 @ 00138fa0 ====

void FUN_00138fa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x79c4) == *(int *)(iVar2 + 0x79c8)) {
    uVar1 = FUN_00139980(iVar2 + 0x79c0);
    FUN_00139060(param_1,uVar1);
  }
  FUN_00139838(iVar2 + 0x79c0,param_2);
  FUN_001354e0(param_2,0);
  FUN_0025c2c8(DAT_0040f4cc,param_2);
  FUN_00135ea8(0x3dcccccd,0,param_2);
  FUN_00135b80(param_2,2);
  FUN_00137f30(param_2);
  FUN_0016e6b0(DAT_0040f4d4,param_2);
  return;
}


// ==== FUN_00139060 @ 00139060 ====

void FUN_00139060(int param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  FUN_0016e6b0(DAT_0040f4d4);
  lVar1 = FUN_00135550(param_2);
  if (lVar1 != 0) {
    FUN_001354e0(param_2,0);
  }
  iVar2 = (int)param_2;
  if (*(int *)(iVar2 + 0xb4) != 0) {
    FUN_0025c2c8(DAT_0040f4cc,param_2);
  }
  FUN_0012a280(DAT_0040f4d0,param_2);
  FUN_00139838(param_1 + 0x7990,param_2);
  (**(code **)(*(int *)(iVar2 + 0x10) + 0x24))(iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x20));
  return;
}


// ==== FUN_001390f8 @ 001390f8 ====

bool FUN_001390f8(int param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x79a4) == *(int *)(param_1 + 0x79a8)) {
    lVar1 = FUN_00139980();
    if (lVar1 == 0) {
      return false;
    }
    FUN_00135c50(lVar1);
  }
  lVar1 = FUN_0025cdf0(DAT_0040f4cc);
  return lVar1 != 0;
}


// ==== FUN_00139150 @ 00139150 ====

void FUN_00139150(undefined8 param_1,int param_2)

{
  FUN_0015c100(param_2 + 0x280);
  return;
}


// ==== FUN_00139170 @ 00139170 ====

int FUN_00139170(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8514);
  *(int *)(param_1 + 0x8514) = iVar1 + 1;
  return iVar1;
}


// ==== FUN_00139190 @ 00139190 ====

void FUN_00139190(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = (int)param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x8518) = iVar12;
  }
  iVar2 = 0;
  iVar9 = 0;
  do {
    iVar3 = *(int *)(*(int *)(iVar12 + 0x24) + 8);
    iVar11 = param_1 + iVar9 * 0x40 + 0x7a10;
    iVar7 = 0;
    iVar6 = *(int *)(iVar12 + 0x20);
    iVar13 = iVar9 + 1;
    if (0 < iVar3) {
      plVar4 = *(long **)(*(int *)(iVar12 + 0x24) + 0xc);
      do {
        if (*plVar4 == *(long *)(&DAT_003f5198 + iVar2)) {
          plVar4 = *(long **)(plVar4 + 1);
          goto LAB_00139254;
        }
        iVar7 = iVar7 + 1;
        plVar4 = plVar4 + 2;
      } while (iVar7 < iVar3);
    }
    plVar4 = (long *)0x0;
LAB_00139254:
    if (plVar4 != (long *)0x0) {
      if (param_3 == 0) {
        iVar8 = 0;
        iVar3 = *(int *)(*(int *)(param_1 + 0x8518) + 0x24);
        iVar7 = *(int *)(iVar3 + 8);
        if (0 < iVar7) {
          plVar5 = *(long **)(iVar3 + 0xc);
          do {
            if (*plVar5 == *(long *)(&DAT_003f5198 + iVar2)) {
              iVar2 = (int)plVar5[1];
              goto LAB_001392b4;
            }
            iVar8 = iVar8 + 1;
            plVar5 = plVar5 + 2;
          } while (iVar8 < iVar7);
        }
        iVar2 = 0;
LAB_001392b4:
        if (iVar2 != 0) goto LAB_0013933c;
        iVar2 = *(int *)(iVar6 + 8);
      }
      else {
        iVar2 = *(int *)(iVar6 + 8);
      }
      iVar3 = 0;
      if (0 < iVar2) {
        plVar5 = *(long **)(iVar6 + 0xc);
        do {
          iVar3 = iVar3 + 1;
          if (*plVar5 == *plVar4) {
            uVar10 = (undefined4)plVar5[1];
            goto LAB_001392fc;
          }
          plVar5 = plVar5 + 2;
        } while (iVar3 < iVar2);
      }
      uVar10 = 0;
LAB_001392fc:
      FUN_00138328(iVar11,iVar9);
      FUN_00138338(iVar11,uVar10);
      FUN_001381e0(iVar11);
      lVar1 = FUN_001acf88(DAT_0040f50c,plVar4[1]);
      *(long **)(iVar11 + 0x38) = plVar4;
      if (lVar1 == -1) {
        lVar1 = 0;
      }
      *(int *)(iVar11 + 8) = (int)lVar1;
    }
LAB_0013933c:
    iVar2 = iVar13 * 8;
    iVar9 = iVar13;
    if (0x2b < iVar13) {
      iVar12 = *(int *)(iVar12 + 0x20);
      iVar9 = 0;
      if (0 < *(int *)(iVar12 + 8)) {
        iVar2 = *(int *)(iVar12 + 0xc);
        while( true ) {
          lVar1 = *(long *)(iVar9 * 0x10 + iVar2);
          if (((lVar1 == 0x53b11225afdcd2a0) || (lVar1 == 0x53b11225afdcd2c8)) ||
             (lVar1 == 0x53b11225afdcd2f0)) {
            iVar2 = FUN_003822f8(iVar12,iVar9);
            iVar3 = 0;
            if (0 < *(int *)(iVar2 + 0x24)) {
              iVar6 = 0;
              do {
                iVar3 = iVar3 + 1;
                *(undefined1 *)(*(int *)(iVar2 + 0x1c) + iVar6 + 9) = 6;
                iVar6 = iVar6 + 0x30;
              } while (iVar3 < *(int *)(iVar2 + 0x24));
            }
          }
          iVar9 = iVar9 + 1;
          if (*(int *)(iVar12 + 8) <= iVar9) break;
          iVar2 = *(int *)(iVar12 + 0xc);
        }
      }
      if (param_3 == 0) {
        FUN_001acac8(DAT_0040f50c,param_2,0);
      }
      return;
    }
  } while( true );
}


// ==== FUN_00139480 @ 00139480 ====

int FUN_00139480(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x79d4);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*piVar2 == 0) {
      *piVar2 = param_2;
      return piVar2[-1];
    }
    piVar2 = piVar2 + 2;
  } while (iVar1 < 8);
  return 0;
}


// ==== FUN_001394b8 @ 001394b8 ====

void FUN_001394b8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x79d4);
  iVar1 = 7;
  do {
    iVar1 = iVar1 + -1;
    if (*piVar2 == param_2) {
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 2;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_00139538 @ 00139538 ====

void FUN_00139538(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x851c) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x79a4)) {
    iVar2 = *(int *)(param_1 + 0x79ac);
    while( true ) {
      iVar2 = *(int *)(iVar3 * 4 + iVar2);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x79a4);
      }
      else {
        FUN_00137718(iVar2,1);
        iVar1 = *(int *)(param_1 + 0x851c);
        *(int *)(param_1 + 0x851c) = iVar1 + 1;
        FUN_00138470(param_1 + iVar1 * 8 + 0x7890,iVar2);
        iVar2 = *(int *)(param_1 + 0x79a4);
      }
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0x79ac);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x79b4)) {
    iVar2 = *(int *)(param_1 + 0x79bc);
    while( true ) {
      iVar2 = *(int *)(iVar3 * 4 + iVar2);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x79b4);
      }
      else {
        FUN_00137718(iVar2,1);
        iVar1 = *(int *)(param_1 + 0x851c);
        *(int *)(param_1 + 0x851c) = iVar1 + 1;
        FUN_00138470(param_1 + iVar1 * 8 + 0x7890,iVar2);
        iVar2 = *(int *)(param_1 + 0x79b4);
      }
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0x79bc);
    }
  }
  FUN_0035ec50(param_1 + 0x7890,*(undefined4 *)(param_1 + 0x851c),8,0x1394e0);
  return;
}


// ==== FUN_00139698 @ 00139698 ====

void FUN_00139698(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x2b;
  uVar1 = *(undefined4 *)(param_1 + 0x7a4c);
  iVar2 = param_1 + 0x7a10;
  while( true ) {
    iVar3 = iVar3 + -1;
    FUN_00142e30(uVar1,param_2);
    if (iVar3 < 0) break;
    uVar1 = *(undefined4 *)(iVar2 + 0x7c);
    iVar2 = iVar2 + 0x40;
  }
  return;
}


// ==== FUN_001396f0 @ 001396f0 ====

void FUN_001396f0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x79c4)) {
    iVar1 = *(int *)(iVar3 + 0x79cc);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      else if (*(int *)(iVar1 + 800) == param_2) {
        FUN_00139060(param_1);
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x79c4);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(iVar3 + 0x79cc);
    }
  }
  return;
}


// ==== FUN_00139780 @ 00139780 ====

void FUN_00139780(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00107d20(param_2 << 2);
  param_1[3] = uVar1;
  iVar3 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (0 < param_2) {
    do {
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + param_1[3]) = 0;
    } while (iVar3 < param_2);
  }
  *param_1 = param_3;
  return;
}


// ==== FUN_001397f8 @ 001397f8 ====

undefined4 FUN_001397f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + iVar1) = 0;
      if (*(int *)(param_1 + 4) <= iVar3) break;
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return 1;
}


// ==== FUN_00139838 @ 00139838 ====

undefined4 FUN_00139838(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 4) < 1) {
LAB_001398c4:
    uVar1 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    while (*(int *)(iVar2 * 4 + iVar3) != 0) {
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 4) <= iVar2) goto LAB_001398c4;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    iVar3 = (int)param_2;
    if (*(int *)(iVar3 + 0x250) == 0) {
      *(int *)(iVar3 + 0x250) = param_1;
    }
    else {
      FUN_001398e0(*(int *)(iVar3 + 0x250),param_2);
      *(int *)(iVar3 + 0x250) = param_1;
    }
    uVar1 = 1;
    *(int *)(iVar2 * 4 + *(int *)(param_1 + 0xc)) = iVar3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return uVar1;
}


// ==== FUN_001398e0 @ 001398e0 ====

void FUN_001398e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      if (*(int *)(iVar2 * 4 + iVar1) == param_2) {
        *(undefined4 *)(param_2 + 0x250) = 0;
        *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0xc)) = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        return;
      }
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 4) <= iVar2) break;
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


// ==== FUN_00139940 @ 00139940 ====

int FUN_00139940(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar2 = *(int **)(param_1 + 0xc);
    do {
      iVar1 = iVar1 + 1;
      if (*piVar2 != 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  return 0;
}


// ==== FUN_00139980 @ 00139980 ====

undefined4 FUN_00139980(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar7 = -1;
  puVar6 = (uint *)param_1;
  if (*puVar6 == 0) {
    uVar3 = FUN_00139940();
  }
  else {
    iVar5 = 0;
    if (0 < (int)puVar6[1]) {
      uVar4 = puVar6[3];
      fVar9 = DAT_003f49bc;
      while( true ) {
        iVar1 = *(int *)(iVar5 * 4 + uVar4);
        fVar8 = fVar9;
        iVar2 = iVar7;
        if (iVar1 == 0) {
          uVar4 = puVar6[1];
        }
        else if (((*puVar6 & 4) == 0) || (*(int *)(iVar1 + 0x3a4) != 0)) {
          fVar8 = (float)FUN_00139a70(param_1);
          uVar4 = puVar6[1];
          iVar2 = iVar5;
          if (fVar8 <= fVar9) {
            fVar8 = fVar9;
            iVar2 = iVar7;
          }
        }
        else {
          uVar4 = puVar6[1];
        }
        iVar7 = iVar2;
        iVar5 = iVar5 + 1;
        if ((int)uVar4 <= iVar5) break;
        uVar4 = puVar6[3];
        fVar9 = fVar8;
      }
    }
    if (iVar7 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar7 * 4 + puVar6[3]);
    }
  }
  return uVar3;
}


// ==== FUN_00139a70 @ 00139a70 ====

float FUN_00139a70(uint *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  fVar3 = 0.0;
  fVar2 = 0.0;
  if ((*param_1 & 2) != 0) {
    fVar3 = 1.0 - 50.0 / *(float *)(param_2 + 0x304);
    fVar3 = (float)((int)fVar3 * (uint)(-1.0 < fVar3) | (uint)(-1.0 >= fVar3) * -0x40800000);
  }
  if (((*param_1 & 1) != 0) &&
     (fVar1 = *(float *)(DAT_0040f4d0 + 0x20) - *(float *)(param_2 + 0x2f4), fVar2 = fVar1 / 120.0,
     fVar2 = (float)((int)fVar2 * (uint)(fVar2 < 1.0) | (uint)(fVar2 >= 1.0) * 0x3f800000),
     fVar1 < 0.1)) {
    return DAT_003f49c0;
  }
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  fVar3 = fVar3 + fVar2;
  auVar4 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
  auVar5 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0));
  auVar4 = _vsub(auVar4,auVar6);
  auVar4 = _vmul(auVar4,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar7,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  if (0.0 < auVar4._0_4_) {
    fVar3 = fVar3 + 2.0;
  }
  return fVar3;
}


// ==== FUN_00139b68 @ 00139b68 ====

void FUN_00139b68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + iVar1) = 0;
      if (*(int *)(param_1 + 4) <= iVar3) break;
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


// ==== FUN_00139bb0 @ 00139bb0 ====

void FUN_00139bb0(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  
  FUN_00131ef0(param_1,1);
  iVar1 = (int)param_1;
  *(undefined1 *)(iVar1 + 0x8b4) = 0;
  FUN_0016be08(iVar1 + 0x3c0,param_2);
  *(undefined1 *)(iVar1 + 0x418) = param_2;
  *(undefined4 *)(iVar1 + 0x4c4) = 0;
  *(undefined4 *)(iVar1 + 0x4c8) = 0;
  *(undefined4 *)(iVar1 + 0x4dc) = 0;
  *(undefined4 *)(iVar1 + 0x4e4) = 0;
  *(undefined1 *)(iVar1 + 0x8a0) = 0;
  *(undefined1 *)(iVar1 + 0x8b1) = 0;
  *(undefined1 *)(iVar1 + 0x8a1) = 0;
  *(undefined4 *)(iVar1 + 0x8a4) = 1;
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  *(undefined4 *)(iVar1 + 0x2fc) = 0x40800000;
  FUN_0015c088(iVar1 + 0x280,2);
  FUN_00136818(0x3f800000,param_1);
  FUN_0013ba00(param_1);
  return;
}


// ==== FUN_00139c68 @ 00139c68 ====

undefined8 FUN_00139c68(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined2 *puVar10;
  long *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 in_vf0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar18 = (int)param_1;
  *(undefined4 *)(iVar18 + 0x4e0) = 0;
  bVar3 = false;
  if ((*(char *)(DAT_0040f4c4 + 0x8b8) != '\0') ||
     (bVar2 = false, *(char *)(DAT_0040f4c4 + 0x8b9) != '\0')) {
    bVar2 = true;
  }
  if (bVar2) {
    return 0;
  }
  iVar17 = *(int *)(iVar18 + 0x8a4);
  if (iVar17 == 3) {
    if (*(long *)(iVar18 + 0x3c8) != 0) {
      FUN_001438a8(DAT_0040f540);
      *(undefined4 *)(iVar18 + 0x8a4) = 0x1c;
      return 0;
    }
    *(undefined4 *)(iVar18 + 0x8a4) = 0x1c;
    return 0;
  }
  if (iVar17 < 4) {
    if (iVar17 != 1) {
      if (iVar17 != 2) goto LAB_00139e14;
      goto LAB_00139d48;
    }
  }
  else if ((iVar17 == 0x1c) || (iVar17 != 0x37)) {
LAB_00139e14:
    iVar17 = iVar18 + 0x280;
    uVar7 = FUN_00138c40(DAT_0040f514,0);
    *(undefined4 *)(iVar18 + 0x4c4) = 0;
    *(undefined4 *)(iVar18 + 0x4c8) = 0;
    *(undefined4 *)(iVar18 + 0x4e4) = 0;
    *(undefined1 *)(iVar18 + 0x8a0) = 0;
    *(undefined1 *)(iVar18 + 0x8b1) = 0;
    *(undefined1 *)(iVar18 + 0x8b2) = 0;
    *(undefined1 *)(iVar18 + 0x8a1) = *(undefined1 *)(iVar18 + 0x404);
    FUN_0015c100(iVar17);
    FUN_0015bb90(iVar17);
    *(int *)(iVar18 + 0x29c) = iVar18;
    lVar15 = *(long *)(iVar18 + 0x3c0);
    if (*(char *)(DAT_0040f4d0 + 0x5ca1) == '\0') {
      if ((*(char *)(DAT_0040f4d0 + 0x5aac) == '\0') && (DAT_0048f4d5 != '\0')) {
        lVar15 = 0x54461388e61c8000;
      }
    }
    else {
      bVar3 = true;
      if (DAT_0040d9b8 == '\0') {
        lVar15 = 0x5446129c3e9d8000;
      }
    }
    auVar21 = _vadd(in_vf0,in_vf0);
    iVar16 = 0;
    iVar19 = iVar18 + 2000;
    puVar10 = (undefined2 *)(iVar18 + 0x3d4);
    uVar12 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    auVar21 = _sqc2(auVar21);
    if (uVar12 != 0) {
      plVar11 = *(long **)(*DAT_0040f4e0 + 4);
      iVar13 = 0x1000000;
      do {
        cVar4 = (char)iVar16;
        if (*plVar11 == lVar15) goto LAB_00139f54;
        plVar11 = plVar11 + 4;
        iVar16 = iVar13 >> 0x18;
        iVar13 = iVar13 + 0x1000000;
      } while (iVar16 < (int)uVar12);
    }
    cVar4 = -1;
LAB_00139f54:
    uVar6 = FUN_0015cef0(DAT_0040f4e0,param_1,(int)cVar4,0);
    **(undefined4 **)(iVar18 + 0x2a0) = uVar6;
    iVar16 = -1;
    if (*(long *)(iVar18 + 0x3c8) == 0) {
      *(undefined4 *)(*(int *)(iVar18 + 0x2a0) + 4) = 0;
    }
    else {
      uVar12 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
      iVar16 = 0;
      if (uVar12 != 0) {
        plVar11 = *(long **)(*DAT_0040f4e0 + 4);
        iVar13 = 0x1000000;
        do {
          cVar5 = (char)iVar16;
          if (*plVar11 == *(long *)(iVar18 + 0x3c8)) goto LAB_00139fcc;
          plVar11 = plVar11 + 4;
          iVar16 = iVar13 >> 0x18;
          iVar13 = iVar13 + 0x1000000;
        } while (iVar16 < (int)uVar12);
      }
      cVar5 = -1;
LAB_00139fcc:
      iVar16 = (int)cVar5;
      uVar6 = FUN_0015cef0(DAT_0040f4e0,param_1,iVar16,0);
      *(undefined4 *)(*(int *)(iVar18 + 0x2a0) + 4) = uVar6;
      *(undefined1 *)(*(int *)(*(int *)(iVar18 + 0x2a0) + 4) + 0x108) =
           *(undefined1 *)(iVar18 + 0x40f);
    }
    FUN_0015bf50(iVar17,**(undefined4 **)(iVar18 + 0x2a0));
    cVar5 = *(char *)(iVar18 + 0x2c3);
    *(int *)(iVar18 + 0x330) = DAT_0040f50c + cVar5 * 0x240 + 0x470;
    uVar8 = FUN_00138c50(DAT_0040f514);
    FUN_00138338(uVar7,uVar8);
    FUN_001327f0(param_1,uVar7,*(undefined8 *)((int)param_2 + 0x10),0,0xffffffffffffffff,
                 0xffffffffffffffff,0,0);
    *(undefined1 *)(*(int *)(iVar18 + 0x294) + (int)cVar4) = *(undefined1 *)(iVar18 + 0x40e);
    if (bVar3) {
      uVar12 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
      iVar13 = 0;
      if (uVar12 != 0) {
        plVar11 = *(long **)(*DAT_0040f4e0 + 4);
        iVar14 = 0x1000000;
        do {
          cVar4 = (char)iVar13;
          if (*plVar11 == 0x5446129c3e9d8000) goto LAB_0013a0fc;
          plVar11 = plVar11 + 4;
          iVar13 = iVar14 >> 0x18;
          iVar14 = iVar14 + 0x1000000;
        } while (iVar13 < (int)uVar12);
      }
      cVar4 = -1;
LAB_0013a0fc:
      *(undefined1 *)(*(int *)(iVar18 + 0x294) + (int)cVar4) = 1;
    }
    if (iVar16 == -1) {
      *(char *)(iVar18 + 0x2c3) = cVar5;
    }
    else {
      *(undefined1 *)(*(int *)(iVar18 + 0x294) + iVar16) = *(undefined1 *)(iVar18 + 0x40f);
      *(char *)(iVar18 + 0x2c3) = cVar5;
    }
    iVar16 = 0;
    iVar13 = 0x1000000;
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 2;
      FUN_001551c8(iVar17,iVar16,uVar1);
      iVar16 = iVar13 >> 0x18;
      iVar13 = iVar13 + 0x1000000;
    } while (iVar16 < 10);
    iVar16 = 0;
    puVar10 = (undefined2 *)(iVar18 + 0x3fc);
    do {
      iVar13 = *(int *)(iVar16 * 4 + *(int *)(iVar18 + 0x2a0));
      if (iVar13 != 0) {
        FUN_00158ea8(iVar13,*puVar10);
      }
      iVar16 = iVar16 + 1;
      puVar10 = puVar10 + 2;
    } while (iVar16 < 2);
    if ((*(char *)(DAT_0040f4d0 + 0x5aac) == '\0') && (DAT_0048f4d5 != '\0')) {
      FUN_001551c8(iVar17,8,600);
    }
    FUN_0013ba40(param_1);
    FUN_001354e0(param_1,iVar18 + 0x4f0);
    if (*(char *)(iVar18 + 0x40c) == '\0') {
      FUN_0013dc78(iVar19);
      FUN_001354e0(param_1,iVar19);
    }
    else {
      FUN_0013dc50(iVar19);
      FUN_001354e0(param_1,iVar19);
    }
    FUN_00137320(param_1);
    FUN_00136b50(param_1);
    fVar20 = *(float *)(iVar18 + 0x2e8) * 0.5;
    _lqc2(*(undefined1 (*) [16])(iVar18 + 0x60));
    auVar9 = _pextlw(0,0);
    auVar9 = _pextlw((long)(int)fVar20,auVar9._0_8_);
    auVar23 = _qmtc2(fVar20);
    auVar9 = _qmtc2(auVar9._0_4_);
    *(undefined4 *)(iVar18 + 0x2f8) = *(undefined4 *)(iVar18 + 0x3d0);
    auVar9 = _vadd(in_vf0,auVar9);
    _vmove(auVar9);
    auVar22 = _vsubbc(in_vf0,in_vf0);
    auVar9 = _sqc2(auVar22);
    *(undefined1 (*) [16])(iVar18 + 0x60) = auVar9;
    auVar9 = _vaddbc(auVar22,auVar23);
    auVar9 = _sqc2(auVar9);
    *(undefined1 (*) [16])(iVar18 + 0x60) = auVar9;
    uStack_b0 = auVar21._0_4_;
    uStack_ac = auVar21._4_4_;
    uStack_a8 = auVar21._8_4_;
    uStack_a4 = auVar21._12_4_;
    *(undefined4 *)(iVar18 + 0x4d8) = 0;
    *(undefined4 *)(iVar18 + 0x4a0) = uStack_b0;
    *(undefined4 *)(iVar18 + 0x4a4) = uStack_ac;
    *(undefined4 *)(iVar18 + 0x4a8) = uStack_a8;
    *(undefined4 *)(iVar18 + 0x4ac) = uStack_a4;
    *(undefined4 *)(iVar18 + 0x4dc) = 0;
    *(undefined4 *)(iVar18 + 0x4cc) = 0;
    *(undefined4 *)(iVar18 + 0x4d0) = 0;
    *(undefined4 *)(iVar18 + 0x4d4) = 0;
    *(undefined1 *)(iVar18 + 0x8b0) = 0;
    *(undefined4 *)(iVar18 + 0x8a4) = 0x37;
    if (DAT_0040d9b8 != '\0') {
      FUN_0016c250(iVar18 + 0x3c0);
    }
    return 1;
  }
  if (DAT_0040d9b8 == '\0') {
    FUN_0016c3b8(iVar18 + 0x3c0,param_2);
  }
  *(undefined4 *)(iVar18 + 0x8a8) = 0;
  *(undefined4 *)(iVar18 + 0x8a4) = 2;
LAB_00139d48:
  lVar15 = *(long *)(iVar18 + 0x3c0);
  if (*(char *)(DAT_0040f4d0 + 0x5ca1) == '\0') {
    if ((*(char *)(DAT_0040f4d0 + 0x5aac) == '\0') && (DAT_0048f4d5 != '\0')) {
      lVar15 = 0x54461388e61c8000;
    }
  }
  else if (DAT_0040d9b8 == '\0') {
    lVar15 = 0x5446129c3e9d8000;
  }
  if ((lVar15 != 0) && (lVar15 = FUN_001438a8(DAT_0040f540), lVar15 != 0)) {
    FUN_00143d90(DAT_0040f540,param_1,0);
    *(undefined4 *)(iVar18 + 0x8a4) = 3;
  }
  return 0;
}


// ==== FUN_0013a300 @ 0013a300 ====

void FUN_0013a300(float param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = (int)param_2;
  *(undefined1 *)(iVar4 + 0x8b4) = 0;
  FUN_0013ce08();
  if (*(int *)(iVar4 + 0x2a4) == 0) {
    fVar5 = *(float *)(iVar4 + 0x4e4);
  }
  else {
    FUN_001564d0();
    if (*(byte **)(iVar4 + 0x2a4) == (byte *)0x0) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = (uint)**(byte **)(iVar4 + 0x2a4);
    }
    (&DAT_0048f3c0)[uVar2] = (&DAT_0048f3c0)[uVar2] + 1;
    fVar5 = *(float *)(iVar4 + 0x4e4);
  }
  if (fVar5 < 1.0) {
LAB_0013a3f0:
    fVar5 = *(float *)(iVar4 + 0x4e4);
  }
  else {
    fVar5 = fVar5 - param_1 * 0.020833334;
    *(float *)(iVar4 + 0x4e4) = fVar5;
    if (fVar5 < 1.0) {
      *(undefined1 *)(iVar4 + 0x8b1) = 0;
      *(undefined4 *)(iVar4 + 0x4e4) = 0x3f333333;
      goto LAB_0013a3f0;
    }
    fVar5 = *(float *)(iVar4 + 0x4e4);
  }
  fVar5 = (float)((int)fVar5 * (uint)(0.0 < fVar5));
  *(uint *)(iVar4 + 0x4e4) = (int)fVar5 * (uint)(fVar5 < 2.0) | (uint)(fVar5 >= 2.0) * 0x40000000;
  iVar1 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar1 == 1) {
    fVar5 = *(float *)(iVar4 + 0x2f8);
LAB_0013a460:
    fVar5 = fVar5 / 1200.0;
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar5 = *(float *)(iVar4 + 0x2f8);
        goto LAB_0013a460;
      }
    }
    else if (iVar1 < 4) {
      fVar5 = *(float *)(iVar4 + 0x2f8) / 750.0;
      goto LAB_0013a498;
    }
    fVar5 = 0.0;
  }
LAB_0013a498:
  if (fVar5 < 0.3) {
    if (*(float *)(iVar4 + 0x4e0) < DAT_003bcea0) {
      *(float *)(iVar4 + 0x4e0) = *(float *)(iVar4 + 0x4e0) + param_1;
    }
    else {
      iVar1 = *(int *)(DAT_0040f0e0 + 0x2014c);
      fVar5 = fVar5 + param_1 * 0.02;
      if (iVar1 == 1) {
        fVar6 = fVar5 * 1200.0;
LAB_0013a558:
        *(float *)(iVar4 + 0x2f8) = fVar6;
      }
      else if (iVar1 < 2) {
        if (iVar1 == 0) {
          fVar6 = fVar5 * 1200.0;
          goto LAB_0013a558;
        }
      }
      else if (iVar1 < 4) {
        fVar6 = fVar5 * 750.0;
        goto LAB_0013a558;
      }
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x4e0) = 0;
  }
  FUN_00132d98(param_1,param_2,0);
  if ((0.4 <= fVar5) || (*(char *)(iVar4 + 0x8a1) < '\x01')) {
    FUN_001f2c98(DAT_0040f51c,0x14);
    if (0.5 <= fVar5) {
      FUN_001f2c98(DAT_0040f51c,0x18);
      goto LAB_0013a608;
    }
    uVar3 = 0x18;
  }
  else {
    uVar3 = 0x14;
  }
  FUN_001f2a60(DAT_0040f51c,uVar3,0,0,1);
LAB_0013a608:
  if ((cGpffff81bb != '\0') && (*(char *)(DAT_0040f4bc + 0x7e1) != '\0')) {
    *(undefined4 *)(iVar4 + 0x2ec) = 0;
  }
  *(undefined1 *)(iVar4 + 0x8b0) = 0;
  return;
}


// ==== FUN_0013a640 @ 0013a640 ====

undefined8 FUN_0013a640(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar1 = *(int *)(param_1 + 0x34);
  iVar2 = DAT_003bce9c;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) == 3)) &&
     (lVar3 = FUN_00152db0(iVar1), iVar2 = DAT_003bce9c, lVar3 != 0)) {
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xa0));
    auVar6 = _qmtc2(0);
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar7 = _vaddbc(in_vf0,in_vf0);
    _vsub(auVar4,auVar5);
    auVar4 = _vaddbc(in_vf0,auVar6);
    auVar4 = _vmul(auVar4,auVar4);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    iVar2 = iVar1;
    if (1.3225 <= auVar4._0_4_) {
      iVar2 = DAT_003bce9c;
    }
  }
  DAT_003bce9c = iVar2;
  return 1;
}


// ==== FUN_0013a6e8 @ 0013a6e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013a6e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 in_vuI;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  fVar15 = *(float *)(param_1 + 0x4c4) * *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4c4) = fVar15;
  *(float *)(*(int *)(param_1 + 0x32c) + 0xc) = *(float *)(*(int *)(param_1 + 0x32c) + 0xc) - fVar15
  ;
  FUN_001334e0();
  *(float *)(*(int *)(param_1 + 0x32c) + 0xc) =
       *(float *)(*(int *)(param_1 + 0x32c) + 0xc) + *(float *)(param_1 + 0x4c4);
  if (*(int *)(param_1 + 0x32c) == param_1 + 0x620) {
    FUN_00131418(auStack_210);
  }
  else {
    if (*(int *)(param_1 + 0x32c) != param_1 + 0x730) goto LAB_0013a79c;
    FUN_0011afb0(auStack_210,DAT_0040f530);
  }
  *(undefined4 *)(param_1 + 0xd0) = auStack_210._0_4_;
  *(undefined4 *)(param_1 + 0xd4) = auStack_210._4_4_;
  *(undefined4 *)(param_1 + 0xd8) = auStack_210._8_4_;
  *(undefined4 *)(param_1 + 0xdc) = auStack_210._12_4_;
  *(undefined4 *)(param_1 + 0xe0) = auStack_200._0_4_;
  *(undefined4 *)(param_1 + 0xe4) = auStack_200._4_4_;
  *(undefined4 *)(param_1 + 0xe8) = auStack_200._8_4_;
  *(undefined4 *)(param_1 + 0xec) = auStack_200._12_4_;
  *(undefined4 *)(param_1 + 0xf0) = auStack_1f0._0_4_;
  *(undefined4 *)(param_1 + 0xf4) = auStack_1f0._4_4_;
  *(undefined4 *)(param_1 + 0xf8) = auStack_1f0._8_4_;
  *(undefined4 *)(param_1 + 0xfc) = auStack_1f0._12_4_;
  *(undefined4 *)(param_1 + 0x100) = auStack_1e0._0_4_;
  *(undefined4 *)(param_1 + 0x104) = auStack_1e0._4_4_;
  *(undefined4 *)(param_1 + 0x108) = auStack_1e0._8_4_;
  *(undefined4 *)(param_1 + 0x10c) = auStack_1e0._12_4_;
LAB_0013a79c:
  DAT_003bce9c = 0;
  auVar21 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  auVar22 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  _vmulabc(auVar19,auVar21);
  _vmaddabc(auVar20,auVar21);
  _vmaddabc(auVar18,auVar21);
  auVar18 = _vmaddbc(auVar22,in_vf0);
  _lqc2(auStack_90);
  _vadd(in_vf0,auVar18);
  auVar18 = _vmove(auVar21);
  auVar18 = _qmfc2(auVar18._0_4_);
  FUN_00273568(DAT_0040f4d0 + 0x4920,auVar18._0_8_,0x13a640);
  if (DAT_003bce9c != 0) {
    auVar18 = _lqc2(_DAT_004432c0);
    auVar18 = _vsub(in_vf0,auVar18);
    _qmfc2(auVar18._0_4_);
    (**(code **)(*(int *)(DAT_003bce9c + 0x10) + 0x4c))
              (0x42c80000,DAT_003bce9c + *(short *)(*(int *)(DAT_003bce9c + 0x10) + 0x48));
  }
  pauVar4 = (undefined1 (*) [16])FUN_001a68b0(*(undefined4 *)(param_1 + 0x330),5);
  auVar22 = _lqc2(*pauVar4);
  auVar24 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
  _sqc2(auVar22);
  auVar20 = _lqc2(pauVar4[1]);
  _sqc2(auVar20);
  auVar23 = _lqc2(pauVar4[2]);
  _sqc2(auVar23);
  auVar21 = _lqc2(pauVar4[3]);
  _sqc2(auVar21);
  auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
  auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
  _vmulabc(auVar24,auVar22);
  _vmaddabc(auVar19,auVar22);
  auVar25 = _vmaddbc(auVar18,auVar22);
  _vmulabc(auVar24,auVar20);
  _vmaddabc(auVar19,auVar20);
  auVar27 = _vmaddbc(auVar18,auVar20);
  auStack_d0 = _sqc2(auVar25);
  auStack_c0 = _sqc2(auVar27);
  auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x100));
  auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
  auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
  _vmulabc(auVar24,auVar23);
  _vmaddabc(auVar19,auVar23);
  auVar22 = _vmaddbc(auVar18,auVar23);
  _vmulabc(auVar24,auVar21);
  _vmaddabc(auVar19,auVar21);
  _vmaddabc(auVar18,auVar21);
  auVar18 = _vmaddbc(auVar20,in_vf0);
  auStack_190 = _sqc2(auVar25);
  auStack_180 = _sqc2(auVar27);
  auStack_170 = _sqc2(auVar22);
  auStack_b0 = _sqc2(auVar22);
  auStack_a0 = _sqc2(auVar18);
  auStack_110 = _sqc2(auVar25);
  auStack_100 = _sqc2(auVar27);
  auStack_f0 = _sqc2(auVar22);
  auStack_e0 = _sqc2(auVar18);
  auStack_150 = _sqc2(auVar25);
  auStack_140 = _sqc2(auVar27);
  auStack_130 = _sqc2(auVar22);
  auStack_120 = _sqc2(auVar18);
  auStack_1d0 = _sqc2(auVar25);
  auStack_1c0 = _sqc2(auVar27);
  auStack_1b0 = _sqc2(auVar22);
  auStack_80 = _sqc2(auVar18);
  auStack_1a0 = _sqc2(auVar18);
  auStack_160 = _sqc2(auVar18);
  if (*(char *)(*(int *)(param_1 + 0x2a4) + 0x108) != '\0') {
    uVar7 = FUN_00136b30();
    iVar5 = FUN_0015d210(DAT_0040f4e0,uVar7);
    auVar19 = _qmtc2(*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x48));
    auVar18 = _lqc2(auStack_1b0);
    auVar20 = _lqc2(auStack_80);
    auVar18 = _vmulbc(auVar18,auVar19);
    auVar18 = _vadd(auVar20,auVar18);
    auStack_80 = _sqc2(auVar18);
  }
  auVar18 = _lqc2(auStack_1b0);
  if ((*(long *)(**(char **)(param_1 + 0x2a4) * 0x20 + *(int *)(*DAT_0040f4e0 + 4)) ==
       0x5446150037a78000) && ((*(char **)(param_1 + 0x2a4))[0x10b] == '\0')) {
    auVar19 = _qmtc2(0x3f000000);
    auVar20 = _lqc2(auStack_80);
    auVar19 = _vmulbc(auVar18,auVar19);
    auVar19 = _vadd(auVar20,auVar19);
    auStack_80 = _sqc2(auVar19);
  }
  auVar19 = _qmtc2(0x3f19999a);
  auVar18 = _vmulbc(auVar18,auVar19);
  auVar19 = _qmtc2(auStack_80._0_4_);
  auVar18 = _vsub(auVar19,auVar18);
  auVar18 = _qmfc2(auVar18._0_4_);
  lVar8 = FUN_0012ae58(DAT_0040f4d0,auVar18._0_8_);
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = DAT_004432a4;
  if ((lVar8 == 0) || (*(char *)(*(int *)(param_1 + 0x32c) + 0x3b) != '\0')) {
    *(undefined4 *)(param_1 + 0x4a0) = DAT_004432a0;
    *(undefined4 *)(param_1 + 0x4a4) = uVar1;
    *(undefined4 *)(param_1 + 0x4a8) = uVar2;
    *(undefined4 *)(param_1 + 0x4ac) = uVar3;
  }
  else {
    auVar27 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
    auVar22 = _qmtc2(0x3cd013a9);
    auVar26 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
    auVar25 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
    _vmove(auVar27);
    _vmove(auVar26);
    auVar29 = _vaddbc(in_vf0,auVar26);
    auVar28 = _vaddbc(in_vf0,auVar27);
    _vmove(auVar29);
    _vmove(auVar28);
    auVar30 = _vaddbc(in_vf0,auVar25);
    auVar24 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x100));
    auVar31 = _vaddbc(in_vf0,auVar25);
    _vmove(auVar25);
    auVar23 = _vmulbc(auVar31,auVar24);
    auVar20 = _lqc2(auStack_210);
    auVar32 = _vaddbc(in_vf0,auVar27);
    auVar21 = _lqc2(auStack_80);
    auVar18 = _vmulbc(auVar30,auVar24);
    auVar19 = _lqc2(auStack_1b0);
    auVar21 = _vsub(auVar21,auVar20);
    auVar20 = _vadd(auVar18,auVar23);
    _vmove(auVar32);
    auVar18 = _sqc2(auVar21);
    *(undefined1 (*) [16])(param_1 + 0x4a0) = auVar18;
    auVar23 = _vaddbc(in_vf0,auVar26);
    auVar18 = _vmulbc(auVar19,auVar22);
    auVar19 = _vmove(auVar21);
    _sqc2(auVar27);
    auVar21 = _vadd(auVar19,auVar18);
    _sqc2(auVar26);
    auVar18 = _vmulbc(auVar23,auVar24);
    _sqc2(auVar25);
    auVar19 = _vadd(auVar20,auVar18);
    auVar18 = _sqc2(auVar21);
    *(undefined1 (*) [16])(param_1 + 0x4a0) = auVar18;
    auVar19 = _vsub(in_vf0,auVar19);
    _sqc2(auVar24);
    _vmulabc(auVar30,auVar21);
    _vmaddabc(auVar31,auVar21);
    auVar18 = _vmaddbc(auVar23,auVar21);
    _sqc2(auVar29);
    _sqc2(auVar28);
    _sqc2(auVar32);
    auStack_160 = _sqc2(auVar19);
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_1 + 0x4a0) = auVar18;
    auStack_190 = _sqc2(auVar30);
    auStack_180 = _sqc2(auVar31);
    auStack_170 = _sqc2(auVar23);
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar21 = _vsub(in_vf0,in_vf0);
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar20 = _vaddbc(in_vf0,in_vf0);
  auVar18 = _sqc2(auVar18);
  *(undefined1 (*) [16])(param_1 + 0x420) = auVar18;
  auVar18 = _sqc2(auVar19);
  *(undefined1 (*) [16])(param_1 + 0x430) = auVar18;
  auVar18 = _sqc2(auVar20);
  *(undefined1 (*) [16])(param_1 + 0x440) = auVar18;
  auVar18 = _sqc2(auVar21);
  *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
  uVar7 = FUN_00136b30();
  iVar5 = FUN_0015d228(DAT_0040f4e0,uVar7);
  uStack_70 = *(undefined4 *)(iVar5 + 0xe0);
  uStack_6c = *(undefined4 *)(iVar5 + 0xe4);
  uStack_68 = *(undefined4 *)(iVar5 + 0xe8);
  uStack_64 = *(undefined4 *)(iVar5 + 0xec);
  auVar18 = _qmtc2(uStack_70);
  auVar18 = _vsub(in_vf0,auVar18);
  fVar15 = *(float *)(iVar5 + 0xf8);
  fVar16 = *(float *)(param_1 + 0x4cc) +
           (*(float *)(param_1 + 0x5b8) * *(float *)(iVar5 + 0xf4) - *(float *)(param_1 + 0x4cc)) *
           *(float *)(iVar5 + 0x104);
  *(float *)(param_1 + 0x4cc) = fVar16;
  fVar17 = *(float *)(param_1 + 0x4d0) +
           (*(float *)(param_1 + 0x5bc) * fVar15 - *(float *)(param_1 + 0x4d0)) *
           *(float *)(iVar5 + 0x104);
  *(float *)(param_1 + 0x4d0) = fVar17;
  *(float *)(param_1 + 0x4d4) =
       *(float *)(param_1 + 0x4d4) +
       (*(float *)(param_1 + 0x5c0) - *(float *)(param_1 + 0x4d4)) * *(float *)(iVar5 + 0x108);
  fVar15 = *(float *)(iVar5 + 0x108);
  auVar18 = _sqc2(auVar18);
  *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
  *(float *)(param_1 + 0x4d8) =
       *(float *)(param_1 + 0x4d8) +
       (*(float *)(param_1 + 0x5c4) - *(float *)(param_1 + 0x4d8)) * fVar15;
  if ((*(undefined1 **)(param_1 + 0x2a4))[0x105] == '\0') {
    uVar13 = 0x3fc90fdb;
    auVar27 = _vmaxbc(in_vf0,in_vf0);
    auVar18 = _qmtc2(fVar16 * 0.017453292);
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
    _ctc2(0x3f000000);
    _vnop();
    auVar18 = _vmsubi(auVar27,in_vuI);
    auVar18 = _vabs(auVar18);
    uVar7 = 0xffffffffc2992661;
    _ctc2(0x3e800000);
    _vnop();
    auVar18 = _vsubi(auVar18,in_vuI);
    auVar22 = _vmul(auVar18,auVar18);
    auVar25 = _vmul(auVar22,auVar22);
    uVar9 = 0xffffffffc2255de0;
    uVar10 = 0x42a33457;
    uVar11 = 0x421ed7b7;
    _ctc2(0xc2992661);
    _vnop();
    auVar19 = _vmuli(auVar18,in_vuI);
    auVar24 = _vmul(auVar25,auVar25);
    auVar20 = _vmul(auVar19,auVar22);
    uVar12 = 0x40c90fda;
    _ctc2(0xc2255de0);
    _vnop();
    auVar23 = _vmuli(auVar18,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar21 = _vmuli(auVar18,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar19 = _vmuli(auVar18,in_vuI);
    _lqc2(auStack_190);
    _vmula(auVar23,auVar22);
    _vmadda(auVar20,auVar25);
    _ctc2(0x40c90fda);
    _vmadda(auVar21,auVar25);
    _vmaddai(auVar18,in_vuI);
    auVar19 = _vmadd(auVar19,auVar24);
    auVar22 = _vaddbc(in_vf0,auVar19);
    auVar32 = _qmtc2(0);
    _vmove(auVar22);
    auVar20 = _vsub(in_vf0,auVar19);
    auVar21 = _vaddbc(in_vf0,auVar32);
    uVar14 = 0x3f800000;
    auVar18 = _pextlw(0,0);
    _vmove(auVar21);
    auVar18 = _pextlw(0x3f800000,auVar18._0_8_);
    auVar24 = _vaddbc(in_vf0,auVar20);
    _lqc2(auStack_170);
    auVar20 = _qmtc2(fVar17 * 0.017453292);
    auVar23 = _vaddbc(in_vf0,auVar19);
    auVar20 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar23);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar20 = _vsubi(auVar20,in_vuI);
    _sqc2(auVar22);
    auVar20 = _vabs(auVar20);
    auVar22 = _vaddbc(in_vf0,auVar32);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar20,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar27,in_vuI);
    _vmaddai(auVar27,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar20,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar20 = _vmsubi(auVar27,in_vuI);
    _sqc2(auVar23);
    auVar20 = _vabs(auVar20);
    auVar23 = _qmtc2(auVar18._0_4_);
    _ctc2(0x3e800000);
    _vnop();
    auVar20 = _vsubi(auVar20,in_vuI);
    _vmove(auVar22);
    auVar26 = _vadd(in_vf0,in_vf0);
    _sqc2(auVar22);
    _sqc2(auVar21);
    auVar21 = _vaddbc(in_vf0,auVar19);
    _sqc2(auVar23);
    auVar19 = _vmul(auVar20,auVar20);
    _sqc2(auVar24);
    auVar27 = _vmul(auVar19,auVar19);
    _sqc2(auVar23);
    _ctc2(0xc2992661);
    _vnop();
    auVar18 = _vmuli(auVar20,in_vuI);
    _sqc2(auVar21);
    auVar22 = _vmul(auVar27,auVar27);
    _sqc2(auVar24);
    auVar18 = _vmul(auVar18,auVar19);
    _sqc2(auVar23);
    _ctc2(0xc2255de0);
    _vnop();
    auVar29 = _vmuli(auVar20,in_vuI);
    _sqc2(auVar21);
    _ctc2(0x42a33457);
    _vnop();
    auVar28 = _vmuli(auVar20,in_vuI);
    _sqc2(auVar26);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar25 = _vmuli(auVar20,in_vuI);
    _sqc2(auVar26);
    _vmula(auVar29,auVar19);
    _vmadda(auVar18,auVar27);
    _ctc2(0x40c90fda);
    _vmadda(auVar28,auVar27);
    _vmaddai(auVar20,in_vuI);
    auVar20 = _vmadd(auVar25,auVar22);
    _sqc2(auVar24);
    auVar25 = _vsub(in_vf0,auVar20);
    _sqc2(auVar23);
    auVar18 = _pextlw(0,0x3f800000);
    _sqc2(auVar21);
    auVar18 = _pextlw(0,auVar18._0_8_);
    _sqc2(auVar26);
    _sqc2(auVar26);
    auVar27 = _qmtc2(auVar18._0_4_);
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x420));
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x430));
    _vmulabc(auVar24,auVar19);
    _vmaddabc(auVar23,auVar19);
    auVar29 = _vmaddbc(auVar21,auVar19);
    _vmulabc(auVar24,auVar18);
    _vmaddabc(auVar23,auVar18);
    auVar22 = _vmaddbc(auVar21,auVar18);
    _vmove(auVar22);
    auVar30 = _vaddbc(in_vf0,auVar32);
    _sqc2(auVar22);
    _sqc2(auVar29);
    _vmove(auVar30);
    auVar31 = _vaddbc(in_vf0,auVar20);
    _vmove(auVar31);
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x440));
    auVar25 = _vaddbc(in_vf0,auVar25);
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
    _vmulabc(auVar24,auVar19);
    _vmaddabc(auVar23,auVar19);
    auVar28 = _vmaddbc(auVar21,auVar19);
    _vmulabc(auVar24,auVar18);
    _vmaddabc(auVar23,auVar18);
    _vmaddabc(auVar21,auVar18);
    auVar21 = _vmaddbc(auVar26,in_vf0);
    _sqc2(auVar22);
    _sqc2(auVar29);
    _sqc2(auVar28);
    _sqc2(auVar21);
    _sqc2(auVar28);
    _sqc2(auVar21);
    _vmove(auVar28);
    auVar19 = _vaddbc(in_vf0,auVar32);
    auVar18 = _sqc2(auVar29);
    *(undefined1 (*) [16])(param_1 + 0x420) = auVar18;
    auVar18 = _sqc2(auVar22);
    *(undefined1 (*) [16])(param_1 + 0x430) = auVar18;
    _vmove(auVar19);
    _sqc2(auVar30);
    auVar18 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar19);
    _sqc2(auVar18);
    _sqc2(auVar31);
    _sqc2(auVar27);
    _vmove(auVar18);
    auVar18 = _sqc2(auVar21);
    *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
    auVar22 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar27);
    _sqc2(auVar25);
    _sqc2(auVar22);
    _sqc2(auVar26);
    _sqc2(auVar27);
    _sqc2(auVar25);
    _sqc2(auVar22);
    _sqc2(auVar26);
    auVar18 = _sqc2(auVar28);
    *(undefined1 (*) [16])(param_1 + 0x440) = auVar18;
    auStack_150 = _sqc2(auVar26);
    auStack_210 = _sqc2(auVar27);
    auStack_200 = _sqc2(auVar25);
    auStack_1f0 = _sqc2(auVar22);
    auStack_1e0 = _sqc2(auVar26);
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x430));
    _vmulabc(auVar27,auVar29);
    _vmaddabc(auVar25,auVar29);
    auVar21 = _vmaddbc(auVar22,auVar29);
    _vmulabc(auVar27,auVar18);
    _vmaddabc(auVar25,auVar18);
    auVar23 = _vmaddbc(auVar22,auVar18);
    auStack_190 = _sqc2(auVar21);
    auStack_180 = _sqc2(auVar23);
    auVar20 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x440));
    auVar18 = _sqc2(auVar21);
    *(undefined1 (*) [16])(param_1 + 0x420) = auVar18;
    _vmulabc(auVar27,auVar19);
    _vmaddabc(auVar25,auVar19);
    auVar19 = _vmaddbc(auVar22,auVar19);
    _vmulabc(auVar27,auVar20);
    _vmaddabc(auVar25,auVar20);
    _vmaddabc(auVar22,auVar20);
    auVar20 = _vmaddbc(auVar26,in_vf0);
    auVar18 = _sqc2(auVar23);
    *(undefined1 (*) [16])(param_1 + 0x430) = auVar18;
    auStack_170 = _sqc2(auVar19);
    auStack_160 = _sqc2(auVar20);
    auStack_1d0 = _sqc2(auVar21);
    auStack_1c0 = _sqc2(auVar23);
    auStack_1b0 = _sqc2(auVar19);
    auStack_1a0 = _sqc2(auVar20);
    auVar18 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_1 + 0x440) = auVar18;
    auVar18 = _sqc2(auVar20);
    *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
  }
  else {
    iVar6 = FUN_0015d228(DAT_0040f4e0,**(undefined1 **)(param_1 + 0x2a4));
    fVar15 = *(float *)(iVar6 + 0xf0);
    uVar14 = 0x3fc90fdb;
    auVar29 = _vmaxbc(in_vf0,in_vf0);
    uVar7 = 0xffffffffbe22f983;
    auVar18 = _qmtc2(*(float *)(param_1 + 0x4cc) * fVar15 * 0.017453292);
    uVar13 = 0xffffffffc2992661;
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
    _vmsubai(auVar29,in_vuI);
    _vmaddai(auVar29,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar18,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar18 = _vmsubi(auVar29,in_vuI);
    uVar12 = 0xffffffffc2255de0;
    auVar18 = _vabs(auVar18);
    uVar11 = 0x42a33457;
    _ctc2(0x3e800000);
    _vnop();
    auVar18 = _vsubi(auVar18,in_vuI);
    uVar10 = 0x421ed7b7;
    auVar22 = _vmul(auVar18,auVar18);
    _ctc2(0xc2992661);
    _vnop();
    auVar19 = _vmuli(auVar18,in_vuI);
    auVar25 = _vmul(auVar22,auVar22);
    auVar24 = _vmul(auVar25,auVar25);
    auVar21 = _vmul(auVar19,auVar22);
    uVar9 = 0x40c90fda;
    _ctc2(0xc2255de0);
    _vnop();
    auVar23 = _vmuli(auVar18,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar20 = _vmuli(auVar18,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar19 = _vmuli(auVar18,in_vuI);
    _vmula(auVar23,auVar22);
    _vmadda(auVar21,auVar25);
    _ctc2(0x40c90fda);
    _vmadda(auVar20,auVar25);
    _vmaddai(auVar18,in_vuI);
    auVar19 = _vmadd(auVar19,auVar24);
    _lqc2(auStack_190);
    _lqc2(auStack_170);
    auVar25 = _qmtc2(0);
    auVar21 = _vaddbc(in_vf0,auVar19);
    auVar20 = _vaddbc(in_vf0,auVar19);
    auVar18 = _pextlw(0,0);
    _vmove(auVar21);
    _vmove(auVar20);
    auVar18 = _pextlw(0x3f800000,auVar18._0_8_);
    _sqc2(auVar21);
    auVar23 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar20);
    auVar24 = _vaddbc(in_vf0,auVar25);
    auVar22 = _qmtc2(auVar18._0_4_);
    auVar18 = _vsub(in_vf0,auVar19);
    _vmove(auVar23);
    auVar27 = _vadd(in_vf0,in_vf0);
    _vmove(auVar24);
    auVar21 = _vaddbc(in_vf0,auVar18);
    _sqc2(auVar23);
    auVar20 = _vaddbc(in_vf0,auVar19);
    _sqc2(auVar24);
    auVar18 = _pextlw(0,0x3f800000);
    _sqc2(auVar22);
    auVar18 = _pextlw(0,auVar18._0_8_);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar20);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar20);
    _sqc2(auVar27);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar20);
    _sqc2(auVar27);
    _sqc2(auVar27);
    _sqc2(auVar27);
    auVar26 = _qmtc2(auVar18._0_4_);
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x420));
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x430));
    _vmulabc(auVar21,auVar19);
    _vmaddabc(auVar22,auVar19);
    auVar28 = _vmaddbc(auVar20,auVar19);
    _vmulabc(auVar21,auVar18);
    _vmaddabc(auVar22,auVar18);
    auVar23 = _vmaddbc(auVar20,auVar18);
    _sqc2(auVar23);
    _sqc2(auVar28);
    _vmove(auVar23);
    auVar24 = _vaddbc(in_vf0,auVar25);
    auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x440));
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
    _vmulabc(auVar21,auVar19);
    _vmaddabc(auVar22,auVar19);
    auVar19 = _vmaddbc(auVar20,auVar19);
    _vmulabc(auVar21,auVar18);
    _vmaddabc(auVar22,auVar18);
    _vmaddabc(auVar20,auVar18);
    auVar18 = _vmaddbc(auVar27,in_vf0);
    _sqc2(auVar23);
    _sqc2(auVar19);
    _sqc2(auVar18);
    _sqc2(auVar19);
    _sqc2(auVar28);
    _sqc2(auVar18);
    _vmove(auVar19);
    auVar20 = _vaddbc(in_vf0,auVar25);
    _sqc2(auVar24);
    _sqc2(auVar20);
    _sqc2(auVar26);
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
    _sqc2(auVar26);
    _sqc2(auVar27);
    _sqc2(auVar26);
    auVar18 = _sqc2(auVar23);
    *(undefined1 (*) [16])(param_1 + 0x430) = auVar18;
    auVar18 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_1 + 0x440) = auVar18;
    auVar18 = _sqc2(auVar28);
    *(undefined1 (*) [16])(param_1 + 0x420) = auVar18;
    auStack_150 = _sqc2(auVar27);
    auVar18 = _qmtc2(-(-*(float *)(param_1 + 0x4d0) * fVar15) * 0.017453292);
    _sqc2(auVar27);
    auVar18 = _vaddbc(in_vf0,auVar18);
    auStack_210 = _sqc2(auVar26);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar18 = _vsubi(auVar18,in_vuI);
    auStack_1e0 = _sqc2(auVar27);
    auVar18 = _vabs(auVar18);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar18,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar29,in_vuI);
    _vmaddai(auVar29,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar18,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar18 = _vmsubi(auVar29,in_vuI);
    auVar18 = _vabs(auVar18);
    _ctc2(0x3e800000);
    _vnop();
    auVar18 = _vsubi(auVar18,in_vuI);
    auVar20 = _vmul(auVar18,auVar18);
    _ctc2(0xc2992661);
    _vnop();
    auVar19 = _vmuli(auVar18,in_vuI);
    auVar23 = _vmul(auVar20,auVar20);
    auVar19 = _vmul(auVar19,auVar20);
    auVar21 = _vmul(auVar23,auVar23);
    _ctc2(0xc2255de0);
    _vnop();
    auVar25 = _vmuli(auVar18,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar24 = _vmuli(auVar18,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar22 = _vmuli(auVar18,in_vuI);
    _vmula(auVar25,auVar20);
    _vmadda(auVar19,auVar23);
    _ctc2(0x40c90fda);
    _vmadda(auVar24,auVar23);
    _vmaddai(auVar18,in_vuI);
    auVar18 = _vmadd(auVar22,auVar21);
    auVar22 = _vaddbc(in_vf0,auVar18);
    auVar21 = _vaddbc(in_vf0,auVar18);
    auVar19 = _vsub(in_vf0,auVar18);
    _vmove(auVar21);
    _vmove(auVar22);
    auVar20 = _vaddbc(in_vf0,auVar18);
    auVar19 = _vaddbc(in_vf0,auVar19);
    _sqc2(auVar22);
    _sqc2(auVar21);
    _sqc2(auVar19);
    _sqc2(auVar20);
    _sqc2(auVar19);
    _sqc2(auVar20);
    auStack_200 = _sqc2(auVar19);
    auStack_1f0 = _sqc2(auVar20);
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x430));
    _vmulabc(auVar26,auVar28);
    _vmaddabc(auVar19,auVar28);
    auVar23 = _vmaddbc(auVar20,auVar28);
    _vmulabc(auVar26,auVar18);
    _vmaddabc(auVar19,auVar18);
    auVar24 = _vmaddbc(auVar20,auVar18);
    auStack_190 = _sqc2(auVar23);
    auStack_180 = _sqc2(auVar24);
    auVar21 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x440));
    _vmulabc(auVar26,auVar18);
    _vmaddabc(auVar19,auVar18);
    auVar22 = _vmaddbc(auVar20,auVar18);
    _vmulabc(auVar26,auVar21);
    _vmaddabc(auVar19,auVar21);
    _vmaddabc(auVar20,auVar21);
    auVar19 = _vmaddbc(auVar27,in_vf0);
    auStack_1d0 = _sqc2(auVar23);
    auStack_170 = _sqc2(auVar22);
    auStack_160 = _sqc2(auVar19);
    auStack_1c0 = _sqc2(auVar24);
    auStack_1b0 = _sqc2(auVar22);
    auStack_1a0 = _sqc2(auVar19);
    auVar18 = _sqc2(auVar23);
    *(undefined1 (*) [16])(param_1 + 0x420) = auVar18;
    auVar18 = _sqc2(auVar24);
    *(undefined1 (*) [16])(param_1 + 0x430) = auVar18;
    auVar18 = _sqc2(auVar22);
    *(undefined1 (*) [16])(param_1 + 0x440) = auVar18;
    auVar18 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
  }
  auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
  auVar18._4_4_ = uStack_6c;
  auVar18._0_4_ = uStack_70;
  auVar18._8_4_ = uStack_68;
  auVar18._12_4_ = uStack_64;
  auVar18 = _lqc2(auVar18);
  auVar19 = _vadd(auVar19,auVar18);
  auVar18 = _sqc2(auVar19);
  *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
  if (*(char *)(*(int *)(param_1 + 0x2a4) + 0x105) == '\0') {
    auVar20 = _qmtc2(*(undefined4 *)(param_1 + 0x4d8));
    auVar21 = _qmtc2(*(undefined4 *)(iVar5 + 0xfc));
    auVar18 = _lqc2(_DAT_004432d0);
    auVar18 = _vmulbc(auVar18,auVar20);
    auVar18 = _vmulbc(auVar18,auVar21);
    auVar19 = _vmove(auVar19);
    auVar19 = _vsub(auVar19,auVar18);
    auVar21 = _qmtc2(*(undefined4 *)(param_1 + 0x4d4));
    auVar18 = _sqc2(auVar19);
    *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
    auVar20 = _qmtc2(*(undefined4 *)(iVar5 + 0x100));
    auVar18 = _lqc2(_DAT_004432b0);
    auVar18 = _vmulbc(auVar18,auVar21);
    auVar18 = _vmulbc(auVar18,auVar20);
    auVar18 = _vadd(auVar19,auVar18);
    auVar18 = _sqc2(auVar18);
    *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
  }
  else {
    auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x450));
  }
  auVar19 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x4a0));
  auVar18 = _vsub(auVar18,auVar19);
  auVar18 = _sqc2(auVar18);
  *(undefined1 (*) [16])(param_1 + 0x450) = auVar18;
  FUN_001a6be0(*(undefined4 *)(param_1 + 0x330),uVar7,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
  return;
}


// ==== FUN_0013b4a0 @ 0013b4a0 ====

void FUN_0013b4a0(float param_1,float param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + 0x4c8) = param_3;
  *(float *)(param_4 + 0x4c4) =
       *(float *)(param_4 + 0x4c4) + (param_1 - *(float *)(param_4 + 0x4c4)) * param_2;
  return;
}


// ==== FUN_0013b4c0 @ 0013b4c0 ====

undefined8 FUN_0013b4c0(undefined8 param_1,int param_2)

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
  
  pauVar1 = (undefined1 (*) [16])FUN_001a68b0(*(undefined4 *)(param_2 + 0x330),5);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x420));
  auVar7 = _lqc2(*pauVar1);
  _sqc2(auVar7);
  auVar5 = _lqc2(pauVar1[1]);
  auVar11 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xd0));
  _sqc2(auVar5);
  auVar4 = _lqc2(pauVar1[2]);
  _sqc2(auVar4);
  auVar6 = _lqc2(pauVar1[3]);
  _sqc2(auVar6);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x430));
  _vmulabc(auVar7,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar9 = _vmaddbc(auVar4,auVar3);
  _vmulabc(auVar7,auVar2);
  _vmaddabc(auVar5,auVar2);
  auVar8 = _vmaddbc(auVar4,auVar2);
  _sqc2(auVar9);
  _sqc2(auVar8);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x450));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x440));
  _vmulabc(auVar7,auVar2);
  _vmaddabc(auVar5,auVar2);
  auVar10 = _vmaddbc(auVar4,auVar2);
  _vmulabc(auVar7,auVar3);
  _vmaddabc(auVar5,auVar3);
  _vmaddabc(auVar4,auVar3);
  auVar7 = _vmaddbc(auVar6,in_vf0);
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar10);
  _sqc2(auVar7);
  _sqc2(auVar9);
  _sqc2(auVar8);
  _sqc2(auVar10);
  _sqc2(auVar7);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xe0));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xf0));
  _vmulabc(auVar11,auVar9);
  _vmaddabc(auVar3,auVar9);
  auVar6 = _vmaddbc(auVar2,auVar9);
  _vmulabc(auVar11,auVar8);
  _vmaddabc(auVar3,auVar8);
  auVar8 = _vmaddbc(auVar2,auVar8);
  _sqc2(auVar6);
  _sqc2(auVar8);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x100));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xe0));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xf0));
  _vmulabc(auVar11,auVar10);
  _vmaddabc(auVar3,auVar10);
  auVar5 = _vmaddbc(auVar2,auVar10);
  _vmulabc(auVar11,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddabc(auVar2,auVar7);
  auVar3 = _vmaddbc(auVar4,in_vf0);
  _sqc2(auVar5);
  _sqc2(auVar3);
  pauVar1 = (undefined1 (*) [16])param_1;
  auVar2 = _sqc2(auVar6);
  *pauVar1 = auVar2;
  auVar2 = _sqc2(auVar8);
  pauVar1[1] = auVar2;
  auVar2 = _sqc2(auVar5);
  pauVar1[2] = auVar2;
  auVar2 = _sqc2(auVar3);
  pauVar1[3] = auVar2;
  _sqc2(auVar6);
  _sqc2(auVar8);
  _sqc2(auVar5);
  _sqc2(auVar3);
  _sqc2(auVar6);
  _sqc2(auVar8);
  _sqc2(auVar5);
  _sqc2(auVar3);
  return param_1;
}


// ==== FUN_0013b628 @ 0013b628 ====

void FUN_0013b628(undefined8 param_1,long param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 in_vf0 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  iVar14 = (int)param_1;
  if (*(int *)(iVar14 + 0x2a4) == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(*(int *)(iVar14 + 0x2a4) + 0x107);
  }
  if (cVar5 == '\0') {
    lVar10 = 0x6d6123044330fccf;
    if ((long *)*DAT_0040f4bc != (long *)0x0) {
      lVar10 = *(long *)*DAT_0040f4bc;
    }
    if (lVar10 == 0x594c3cc765b41051) {
      if ((char)DAT_0040f4bc[0x59e] == '\0') {
        return;
      }
      puVar6 = *(undefined4 **)(iVar14 + 0x32c);
    }
    else {
      puVar6 = *(undefined4 **)(iVar14 + 0x32c);
    }
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar14 + 0x2f0) = *puVar6;
    }
    lVar10 = FUN_00135b60(param_1);
    if (lVar10 != 0) {
      auVar22 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0xe0));
      auVar20 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0xf0));
      auVar23 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x430));
      auVar21 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0xd0));
      auVar19 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x420));
      _vmulabc(auVar21,auVar19);
      _vmaddabc(auVar22,auVar19);
      auVar25 = _vmaddbc(auVar20,auVar19);
      _vmulabc(auVar21,auVar23);
      _vmaddabc(auVar22,auVar23);
      auVar26 = _vmaddbc(auVar20,auVar23);
      _sqc2(auVar25);
      _sqc2(auVar26);
      auVar23 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x100));
      auVar20 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0xe0));
      auVar19 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0xf0));
      auVar24 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x450));
      auVar22 = _lqc2(*(undefined1 (*) [16])(iVar14 + 0x440));
      _vmulabc(auVar21,auVar22);
      _vmaddabc(auVar20,auVar22);
      auVar22 = _vmaddbc(auVar19,auVar22);
      _vmulabc(auVar21,auVar24);
      _vmaddabc(auVar20,auVar24);
      _vmaddabc(auVar19,auVar24);
      auVar20 = _vmaddbc(auVar23,in_vf0);
      auVar19 = _sqc2(auVar25);
      *(undefined1 (*) [16])(iVar14 + 0x460) = auVar19;
      auVar19 = _sqc2(auVar26);
      *(undefined1 (*) [16])(iVar14 + 0x470) = auVar19;
      auVar19 = _sqc2(auVar22);
      *(undefined1 (*) [16])(iVar14 + 0x480) = auVar19;
      auVar19 = _sqc2(auVar20);
      *(undefined1 (*) [16])(iVar14 + 0x490) = auVar19;
      _sqc2(auVar22);
      _sqc2(auVar20);
      _sqc2(auVar25);
      _sqc2(auVar26);
      _sqc2(auVar22);
      _sqc2(auVar20);
      iVar15 = (int)lVar10;
      if (*(int *)(iVar15 + 0x24) < 1) {
        cVar5 = *(char *)(iVar14 + 0x3ad);
      }
      else {
        iVar18 = 0x10000;
        iVar17 = 0;
        iVar16 = 0;
        do {
          psVar7 = (short *)(*(int *)(iVar15 + 0x20) + iVar17);
          iVar9 = *(int *)(iVar15 + 0x1c);
          sVar1 = psVar7[1];
          pbVar11 = (byte *)(*(int *)(iVar14 + 0x354) + (int)*psVar7);
          iVar4 = *(int *)(iVar14 + 0x358);
          if (*pbVar11 - 5 < 3) {
            *(undefined4 *)(pbVar11 + 8) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x330) + 0x54) + 0x50);
            *(undefined4 *)(pbVar11 + 0xc) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x330) + 0x50) + 0x30);
            uVar3 = *(undefined4 *)(iVar15 + 0x54);
            pbVar11[0x14] = 0;
            pbVar11[0x15] = 0;
            pbVar11[0x16] = 0x80;
            pbVar11[0x17] = 0x3f;
            *(undefined4 *)(pbVar11 + 0x10) = uVar3;
            pbVar11[0x18] = (byte)*(undefined4 *)(iVar15 + 0x5c);
          }
          FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar9 + iVar16,pbVar11,iVar4 + sVar1,iVar14 + 0x2d0,
                       iVar14 + 0x460,param_2 == 0,*pbVar11 != 7);
          iVar17 = iVar17 + 6;
          iVar9 = iVar18 >> 0x10;
          iVar18 = iVar18 + 0x10000;
          iVar16 = iVar16 + 0x30;
        } while (iVar9 < *(int *)(iVar15 + 0x24));
        cVar5 = *(char *)(iVar14 + 0x3ad);
      }
      if ((((cVar5 != '\0') && (*(char *)(*(int *)(iVar14 + 0x2a4) + 0x108) != '\0')) &&
          (iVar15 = *(int *)(iVar14 + 0x270), iVar15 != 0)) &&
         ((iVar15 = *(int *)(iVar15 + (uint)*(byte *)(iVar15 + 0x19) * 4 + 0xc), iVar15 != 0 &&
          (0 < *(int *)(iVar15 + 0x24))))) {
        iVar17 = 0;
        iVar16 = 0;
        iVar18 = 0x10000;
        do {
          psVar7 = (short *)(*(int *)(iVar15 + 0x20) + iVar17);
          iVar9 = *(int *)(iVar15 + 0x38);
          sVar1 = *psVar7;
          iVar13 = *(int *)(iVar15 + 0x1c) + iVar16;
          sVar2 = psVar7[1];
          iVar17 = iVar17 + 6;
          iVar4 = *(int *)(iVar15 + 0x40);
          iVar12 = DAT_0040f4c0 + 0x14;
          iVar16 = iVar16 + 0x30;
          uVar8 = FUN_001a68e0(*(undefined4 *)(iVar14 + 0x330),5);
          FUN_001af738(0,iVar12,iVar13,iVar9 + sVar1,iVar4 + sVar2,iVar14 + 0x2d0,uVar8,param_2 == 0
                       ,1);
          iVar9 = iVar18 >> 0x10;
          iVar18 = iVar18 + 0x10000;
        } while (iVar9 < *(int *)(iVar15 + 0x24));
      }
    }
  }
  return;
}


// ==== FUN_0013b9a0 @ 0013b9a0 ====

undefined4 FUN_0013b9a0(undefined8 param_1)

{
  FUN_0013baf8();
  FUN_00133ed8(param_1);
  return 1;
}


// ==== FUN_0013b9d0 @ 0013b9d0 ====

void FUN_0013b9d0(undefined8 param_1)

{
  FUN_0013bb38();
  FUN_00133fa0(param_1);
  return;
}


// ==== FUN_0013ba00 @ 0013ba00 ====

void FUN_0013ba00(int param_1)

{
  FUN_0013f328(param_1 + 0x4f0);
  FUN_001306a0(param_1 + 0x620);
  FUN_0013f0a8(param_1 + 0x730);
  FUN_0013db40(param_1 + 2000);
  return;
}


// ==== FUN_0013ba40 @ 0013ba40 ====

undefined4 FUN_0013ba40(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  lVar1 = FUN_0013f3e0(iVar2 + 0x4f0,*(undefined1 *)(iVar2 + 0x418),param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_001306d0(iVar2 + 0x620,param_1,*(undefined1 *)(iVar2 + 0x418));
    if (lVar1 != 0) {
      lVar1 = FUN_0013f0d8(iVar2 + 0x730,*(undefined1 *)(iVar2 + 0x418),param_1);
      if ((lVar1 != 0) && (lVar1 = FUN_0013dba0(iVar2 + 2000,param_1), lVar1 != 0)) {
        *(undefined4 *)(iVar2 + 0x8ac) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_0013bac8 @ 0013bac8 ====

void FUN_0013bac8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x32c) + 0x84);
  (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x32c) + (int)*(short *)(iVar1 + 8));
  return;
}


// ==== FUN_0013baf8 @ 0013baf8 ====

void FUN_0013baf8(int param_1)

{
  FUN_00140008(param_1 + 0x4f0);
  FUN_00131078(param_1 + 0x620);
  FUN_0013f298(param_1 + 0x730);
  FUN_0013def0(param_1 + 2000);
  return;
}


// ==== FUN_0013bb38 @ 0013bb38 ====

void FUN_0013bb38(int param_1)

{
  FUN_00140048(param_1 + 0x4f0);
  FUN_001310b8(param_1 + 0x620);
  FUN_0013f2c8(param_1 + 0x730);
  FUN_0013df38(param_1 + 2000);
  return;
}


// ==== FUN_0013bb78 @ 0013bb78 ====

void FUN_0013bb78(float param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 in_a1_qw [16];
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uStack_7c = (undefined4)((ulong)param_3 >> 0x20);
  uStack_80 = (undefined4)param_3;
  auVar5 = _por(in_zero_qw,in_a1_qw);
  if (*(int *)(param_2 + 0x38c) == 0) {
    if (*(char *)(param_2 + 0x8b2) == '\0') {
      iVar2 = (int)param_6;
      uStack_78 = in_a2_udw;
      uStack_74 = in_register_0000006c;
      if (*(int *)(iVar2 + 0x380) != -1) {
        FUN_00173198(DAT_0040f4d4 + 0x22800,*(int *)(iVar2 + 0x380),1);
      }
      lVar3 = FUN_00135550(param_6);
      if ((lVar3 == 0) || (iVar1 = FUN_00135550(param_6), *(char *)(iVar1 + 0x3d) == '\0')) {
        FUN_00135b28(param_6,2);
      }
      else {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
        auVar4 = _qmfc2(auVar7._0_4_);
        uStack_a0 = auVar4._0_4_;
        auStack_90 = _sqc2(auVar7);
        uStack_9c = auStack_90._8_4_;
        FUN_001f28d0(param_1,DAT_0040f51c,0,&uStack_a0);
        FUN_00110698(param_1 * 0.004,DAT_0040f4bc,2,1);
        fVar6 = *(float *)(param_2 + 0x2f8) - param_1;
        if (fVar6 <= 0.0) {
          FUN_00135b28(param_6,4);
          *(undefined4 *)(param_2 + 0x2f8) = 0;
          if (*(int *)(iVar2 + 0xc4) == 1) {
            iVar2 = FUN_00135550(param_6);
            if (*(int *)(iVar2 + 0x80) == 1) {
              iVar2 = FUN_00135550(param_6);
              FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,0x23);
              iVar2 = *(int *)(param_2 + 0x32c);
            }
            else {
              iVar2 = *(int *)(param_2 + 0x32c);
            }
          }
          else {
            iVar2 = *(int *)(param_2 + 0x32c);
          }
          auVar5 = _por(in_zero_qw,auVar5);
          (**(code **)(*(int *)(iVar2 + 0x84) + 0x2c))
                    (param_1,iVar2 + *(short *)(*(int *)(iVar2 + 0x84) + 0x28),5,auVar5._0_8_,
                     param_6);
        }
        else {
          FUN_00135b28(param_6,3);
          *(float *)(param_2 + 0x2f8) = fVar6;
          if ((*(int *)(iVar2 + 0xc4) == 1) &&
             (iVar2 = FUN_00135550(param_6), *(int *)(iVar2 + 0x80) == 1)) {
            iVar2 = FUN_00135550(param_6);
            FUN_00181f48(0,0x3f800000,iVar2 + 0xc80,0,0x22);
          }
        }
        fVar6 = *(float *)(DAT_0040f4d0 + 0x20);
        if (0.5 < fVar6 - *(float *)(param_2 + 0x4dc)) {
          auVar4 = _qmtc2(0x40bf5c29);
          auVar5._4_4_ = uStack_7c;
          auVar5._0_4_ = uStack_80;
          auVar5._8_4_ = uStack_78;
          auVar5._12_4_ = uStack_74;
          auVar5 = _lqc2(auVar5);
          auVar5 = _vmulbc(auVar5,auVar4);
          auVar5 = _qmfc2(auVar5._0_4_);
          FUN_00140468(*(undefined4 *)(param_2 + 0x32c),auVar5._0_8_,0);
          *(float *)(param_2 + 0x4dc) = fVar6;
        }
        else {
          *(float *)(param_2 + 0x4dc) = fVar6;
        }
      }
    }
    else {
      FUN_00135b28(param_6,3);
    }
  }
  return;
}


// ==== FUN_0013bdf8 @ 0013bdf8 ====

void FUN_0013bdf8(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_v0_udw;
  int iVar4;
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  
  auVar7 = _por(in_zero_qw,in_a1_qw);
  auVar8 = _por(in_zero_qw,in_a2_qw);
  iVar5 = (int)param_2;
  if ((*(int *)(iVar5 + 0x38c) == 0) && (*(char *)(iVar5 + 0x8b2) == '\0')) {
    iVar6 = (int)param_3;
    iVar4 = *(int *)(iVar6 + 0xb4);
    if (iVar4 != 0) {
      if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0xc) + 0x58) + 0x8c) >> 2 & 1U) == 0)
      {
        if (*(char *)(iVar6 + 0x13d) == '\0') {
          cVar1 = '\0';
        }
        else {
          cVar1 = *(char *)(*(int *)(iVar6 + 0x11c) + 0x44);
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      fVar10 = *(float *)(iVar5 + 0x2f8);
      uVar2 = FUN_0025d8e0(iVar4);
      uStack_90 = (undefined4)uVar2;
      uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
      uStack_88 = (undefined4)extraout_v0_udw;
      uStack_84 = (undefined4)((ulong)extraout_v0_udw >> 0x20);
      auVar12 = _qmtc2(uStack_90);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vmul(auVar12,auVar12);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar11,auVar12);
      auVar12 = _qmfc2(auVar12._0_4_);
      auStack_80 = _sqc2(auVar11);
      if (2.3283064e-10 <= auVar12._0_4_) {
        auVar12 = _por(in_zero_qw,auVar8);
        auVar8 = _por(in_zero_qw,auVar7);
        lVar3 = FUN_0013c1b0(param_1,param_2,auVar8._0_8_,auVar12._0_8_,param_3);
        auVar8 = _por(in_zero_qw,auVar7);
        if (lVar3 == 0) {
          if (*(char *)(iVar5 + 0x8b0) == '\0') {
            auVar8._4_4_ = uStack_8c;
            auVar8._0_4_ = uStack_90;
            auVar8._8_4_ = uStack_88;
            auVar8._12_4_ = uStack_84;
            auVar8 = _lqc2(auVar8);
            auVar12 = _vmul(auVar8,auVar8);
            auVar8 = _lqc2(auStack_80);
            _vaddabc(auVar12,auVar12);
            auVar12 = _vmaddbc(auVar8,auVar12);
            _vnop();
            _vnop();
            _vnop();
            _vsqrt(auVar12);
            auVar8 = _vaddbc(in_vf0,in_vf0);
            uVar14 = _vwaitq();
            auVar8 = _vmulq(auVar8,uVar14);
            auVar8 = _qmfc2(auVar8._0_4_);
            if (((*(int *)(iVar5 + 0x32c) != 0) && (DAT_003bcea4 <= param_1)) &&
               (DAT_003bcea8 <= auVar8._0_4_)) {
              auVar11 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xa0));
              auVar8 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
              auVar13 = _vsub(auVar8,auVar11);
              auVar8 = _vmul(auVar13,auVar13);
              auVar11 = _lqc2(auStack_80);
              _vaddabc(auVar8,auVar8);
              auVar8 = _vmaddbc(auVar11,auVar8);
              auVar11._4_4_ = uStack_8c;
              auVar11._0_4_ = uStack_90;
              auVar11._8_4_ = uStack_88;
              auVar11._12_4_ = uStack_84;
              auVar11 = _lqc2(auVar11);
              auVar8 = _qmfc2(auVar8._0_4_);
              _vnop();
              _vnop();
              _vnop();
              _vrsqrt(in_vf0,auVar12);
              uVar14 = _vwaitq();
              auVar12 = _vmulq(auVar11,uVar14);
              if (2.3283064e-10 <= auVar8._0_4_) {
                auVar11 = _vmul(auVar13,auVar13);
                auVar8 = _lqc2(auStack_80);
                _vaddabc(auVar11,auVar11);
                auVar8 = _vmaddbc(auVar8,auVar11);
                auVar11 = _vaddbc(in_vf0,in_vf0);
                _vnop();
                _vnop();
                _vnop();
                _vrsqrt(in_vf0,auVar8);
                uVar14 = _vwaitq();
                auVar8 = _vmulq(auVar13,uVar14);
                auVar8 = _vmul(auVar8,auVar12);
                _vaddabc(auVar8,auVar8);
                auVar8 = _vmaddbc(auVar11,auVar8);
                auVar8 = _qmfc2(auVar8._0_4_);
                if (0.0 < auVar8._0_4_) {
                  iVar4 = *(int *)(iVar6 + 0xc4);
                  fVar9 = 0.0;
                  if (iVar4 == 4) {
                    fVar9 = (float)FUN_0014a438(param_3);
                    iVar4 = *(int *)(iVar6 + 0xc4);
                  }
                  if (iVar4 == 3) {
                    fVar9 = (float)FUN_00152a50(param_3);
                  }
                  if (0.5 < fVar9) {
                    fVar9 = (float)((int)param_1 * (uint)(param_1 < 50.0) |
                                   (uint)(param_1 >= 50.0) * 0x42480000);
                    fVar10 = fVar10 - fVar9;
                    if (fVar10 <= 0.0) {
                      *(undefined4 *)(iVar5 + 0x2f8) = 0;
                      auVar7 = _por(in_zero_qw,auVar7);
                      iVar4 = *(int *)(*(int *)(iVar5 + 0x32c) + 0x84);
                      (**(code **)(iVar4 + 0x2c))
                                (param_1,*(int *)(iVar5 + 0x32c) + (int)*(short *)(iVar4 + 0x28),5,
                                 auVar7._0_8_,0);
                    }
                    else {
                      *(float *)(iVar5 + 0x2f8) = fVar10;
                    }
                    *(undefined1 *)(iVar5 + 0x8b0) = 1;
                    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xa0));
                    auVar7 = _qmfc2(auVar8._0_4_);
                    uStack_b0 = auVar7._0_4_;
                    auStack_a0 = _sqc2(auVar8);
                    uStack_ac = auStack_a0._8_4_;
                    FUN_001f28d0(fVar9,DAT_0040f51c,0,&uStack_b0);
                    FUN_00110698(0x3f800000,DAT_0040f4bc,2,1);
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)(iVar5 + 0x2f8) = 0;
          iVar4 = *(int *)(*(int *)(iVar5 + 0x32c) + 0x84);
          (**(code **)(iVar4 + 0x2c))
                    (param_1,*(int *)(iVar5 + 0x32c) + (int)*(short *)(iVar4 + 0x28),5,auVar8._0_8_,
                     0);
        }
      }
    }
  }
  return;
}


// ==== FUN_0013c1b0 @ 0013c1b0 ====

undefined8 FUN_0013c1b0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  float fStack_7c;
  
  iVar5 = (int)param_4;
  uVar1 = FUN_0025d8e0(*(undefined4 *)(iVar5 + 0xb4));
  uVar12 = (undefined4)((ulong)extraout_v0_udw >> 0x20);
  auVar10 = _qmtc2((int)uVar1);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmul(auVar10,auVar10);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar8,auVar10);
  auVar3 = _qmfc2(auVar10._0_4_);
  auVar10 = _sqc2(auVar8);
  uVar2 = 0;
  if (2.3283064e-10 <= auVar3._0_4_) {
    iVar4 = *(int *)(iVar5 + 0xc4);
    fVar7 = 0.0;
    lVar6 = 0;
    if (iVar4 == 4) {
      fVar7 = (float)FUN_0014a438(param_4);
      iVar4 = *(int *)(iVar5 + 0xc4);
    }
    auVar3._8_4_ = (int)extraout_v0_udw;
    auVar3._0_8_ = uVar1;
    auVar3._12_4_ = uVar12;
    auVar3 = _lqc2(auVar3);
    if (iVar4 == 3) {
      fVar7 = (float)FUN_00152a50(param_4);
      lVar6 = FUN_00152b68(param_4);
      auVar8._8_4_ = (int)extraout_v0_udw;
      auVar8._0_8_ = uVar1;
      auVar8._12_4_ = uVar12;
      auVar3 = _lqc2(auVar8);
    }
    auVar8 = _vmul(auVar3,auVar3);
    auVar9 = _lqc2(auVar10);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    auVar3 = _vmove(auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar12 = _vwaitq();
    auVar9 = _vmulq(auVar3,uVar12);
    auVar3 = _sqc2(auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar12);
    auVar8 = _qmfc2(auVar8._0_4_);
    fStack_7c = auVar3._4_4_;
    if ((((-0.9 <= fStack_7c) || (auVar8._0_4_ <= 1.0)) || (uVar2 = 1, fVar7 <= 5.0)) &&
       (((uVar2 = 0, lVar6 != 0 && (3.0 < auVar8._0_4_)) && (1.0 < fVar7)))) {
      auVar3 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      uVar2 = 1;
      auVar3 = _vsub(auVar8,auVar3);
      auVar8 = _lqc2(auVar10);
      auVar10 = _vmul(auVar3,auVar3);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar8,auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar10);
      uVar12 = _vwaitq();
      auVar10 = _vmulq(auVar3,uVar12);
      auVar10 = _vmul(auVar9,auVar10);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      auVar10 = _qmfc2(auVar10._0_4_);
      if (auVar10._0_4_ <= 0.0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


// ==== FUN_0013c3e8 @ 0013c3e8 ====

void FUN_0013c3e8(float param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  auVar3 = _por(in_zero_qw,in_a1_qw);
  iVar2 = (int)param_4;
  uStack_60 = *(undefined4 *)(iVar2 + 0xa0);
  uStack_5c = *(undefined4 *)(iVar2 + 0xa4);
  uStack_58 = *(undefined4 *)(iVar2 + 0xa8);
  uStack_54 = *(undefined4 *)(iVar2 + 0xac);
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0x8b2) == '\0') {
    auVar4 = _qmtc2(0x42200000);
    auVar5 = _qmtc2(param_3);
    auVar4 = _vmulbc(auVar5,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    uStack_70 = param_3;
    FUN_00140468(*(undefined4 *)(iVar2 + 0x32c),auVar4._0_8_,1);
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    uStack_78 = uStack_58;
    uStack_74 = uStack_54;
    auVar4 = _qmtc2(uStack_60);
    auVar4 = _qmfc2(auVar4._0_4_);
    uStack_90 = auVar4._0_4_;
    uStack_8c = uStack_58;
    FUN_001f28d0(param_1,DAT_0040f51c,0,&uStack_90);
    *(undefined1 *)(*(int *)(iVar2 + 0x32c) + 0x35) = 0;
    FUN_00110698(param_1 * 0.0004,DAT_0040f4bc,2,1);
    auVar4 = _por(in_zero_qw,auVar3);
    FUN_00134990(param_1,param_2,auVar4._0_8_);
    auVar3 = _por(in_zero_qw,auVar3);
    if (*(float *)(iVar2 + 0x2f8) == 0.0) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x32c) + 0x84);
      (**(code **)(iVar1 + 0x2c))
                (param_1,*(int *)(iVar2 + 0x32c) + (int)*(short *)(iVar1 + 0x28),5,auVar3._0_8_,
                 param_4);
    }
  }
  return;
}


// ==== FUN_0013c528 @ 0013c528 ====

void FUN_0013c528(float param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  undefined1 auVar1 [16];
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined4 uVar3;
  undefined8 in_a1_udw;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_4c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_50 = (undefined4)param_4;
  auVar6 = _qmtc2(param_5);
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = param_3;
  auVar4 = _por(in_zero_qw,auVar4);
  if (*(char *)(param_2 + 0x8b2) != '\0') {
    return;
  }
  auStack_60 = _sqc2(auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  auStack_70._4_4_ = auStack_60._8_4_;
  auStack_70._0_4_ = auVar6._0_4_;
  uStack_48 = in_a2_udw;
  uStack_44 = in_register_0000006c;
  FUN_001f28d0(DAT_0040f51c,0,auStack_70);
  auVar6._4_4_ = uStack_4c;
  auVar6._0_4_ = uStack_50;
  auVar6._8_4_ = uStack_48;
  auVar6._12_4_ = uStack_44;
  auVar6 = _lqc2(auVar6);
  *(undefined1 *)(*(int *)(param_2 + 0x32c) + 0x35) = 0;
  auVar6 = _vsub(in_vf0,auVar6);
  auStack_70 = _sqc2(auVar6);
  fVar5 = (float)FUN_0029e0d8(auStack_70._8_4_);
  auVar1._4_4_ = uStack_4c;
  auVar1._0_4_ = uStack_50;
  auVar1._8_4_ = uStack_48;
  auVar1._12_4_ = uStack_44;
  auVar6 = _lqc2(auVar1);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar5 = fVar5 * 57.29578;
  if (auVar6._0_4_ < 0.0) {
    fVar5 = -fVar5;
  }
  fVar5 = fVar5 + **(float **)(param_2 + 0x32c);
  if (fVar5 < -180.0) {
    fVar5 = fVar5 + 360.0;
  }
  else if (180.0 < fVar5) {
    fVar5 = fVar5 - 360.0;
  }
  fVar5 = -fVar5;
  if ((-45.0 <= fVar5) || (fVar5 <= -135.0)) {
    if ((fVar5 <= 45.0) || (135.0 <= fVar5)) {
      FUN_00110698(0x40000000,DAT_0040f4bc,1,1);
      iVar2 = *(int *)(param_2 + 0x38c);
      goto LAB_0013c6f8;
    }
    uVar3 = 4;
  }
  else {
    uVar3 = 5;
  }
  FUN_00110698(0x40000000,DAT_0040f4bc,uVar3,1);
  iVar2 = *(int *)(param_2 + 0x38c);
LAB_0013c6f8:
  if (iVar2 == 0) {
    fVar5 = *(float *)(param_2 + 0x2f8) - param_1 * 0.8;
    auVar4 = _por(in_zero_qw,auVar4);
    if (fVar5 <= 0.0) {
      *(undefined4 *)(param_2 + 0x2f8) = 0;
      iVar2 = *(int *)(*(int *)(param_2 + 0x32c) + 0x84);
      (**(code **)(iVar2 + 0x2c))
                (param_1,*(int *)(param_2 + 0x32c) + (int)*(short *)(iVar2 + 0x28),5,auVar4._0_8_,0)
      ;
    }
    else {
      *(float *)(param_2 + 0x2f8) = fVar5;
    }
  }
  return;
}


// ==== FUN_0013c778 @ 0013c778 ====

void FUN_0013c778(float param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_50 = (undefined4)param_3;
  uStack_4c = (undefined4)((ulong)param_3 >> 0x20);
  if ((*(int *)(param_2 + 0x38c) == 0) && (*(char *)(param_2 + 0x8b2) == '\0')) {
    auVar3._8_4_ = in_a1_udw;
    auVar3._0_8_ = param_3;
    auVar3._12_4_ = in_register_0000005c;
    auVar3 = _lqc2(auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    auStack_60[0] = auVar3._0_4_;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    FUN_001f28d0(DAT_0040f51c,0,auStack_60);
    FUN_00110698(param_1 * 0.0004,DAT_0040f4bc,10,1);
    fVar2 = *(float *)(param_2 + 0x2f8) - param_1;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(param_2 + 0x2f8) = 0;
      iVar1 = *(int *)(*(int *)(param_2 + 0x32c) + 0x84);
      (**(code **)(iVar1 + 0x2c))
                (param_1,*(int *)(param_2 + 0x32c) + (int)*(short *)(iVar1 + 0x28),5,
                 CONCAT44(uStack_3c,uStack_40),0);
    }
    else {
      *(float *)(param_2 + 0x2f8) = fVar2;
    }
  }
  return;
}


// ==== FUN_0013c868 @ 0013c868 ====

void FUN_0013c868(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_0040f50c + param_2 * 0x240 + 0x470;
  puVar4 = (undefined4 *)(iVar7 + 0x30);
  iVar3 = (int)param_1;
  piVar5 = (int *)(iVar3 + 0x25c);
  iVar6 = 7;
  uVar1 = FUN_00138c68(DAT_0040f514);
  uVar2 = FUN_00138c50(DAT_0040f514);
  FUN_00138338(*(undefined4 *)(iVar3 + 0x328),uVar2);
  *(undefined4 *)(*(int *)(iVar3 + 0x328) + 0x38) = uVar1;
  *(undefined1 *)(iVar3 + 0x3ad) = 0;
  do {
    if (*piVar5 != 0) {
      FUN_00142ed8(*piVar5,*puVar4,0);
    }
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + 1;
  } while (-1 < iVar6);
  FUN_00137320(param_1);
  FUN_00136b50(param_1);
  *(int *)(iVar3 + 0x330) = iVar7;
  return;
}


// ==== FUN_0013c950 @ 0013c950 ====

void FUN_0013c950(int param_1)

{
  if (*(int *)(param_1 + 0x32c) == param_1 + 0x4f0) {
    FUN_00140ab0(*(int *)(param_1 + 0x32c));
  }
  return;
}


// ==== FUN_0013c980 @ 0013c980 ====

float FUN_0013c980(int param_1)

{
  if (*(int *)(param_1 + 0x32c) == param_1 + 0x4f0) {
    return ABS(*(float *)(param_1 + 0x580)) + ABS(*(float *)(param_1 + 0x584));
  }
  return 0.0;
}


// ==== FUN_0013c9b0 @ 0013c9b0 ====

undefined4 FUN_0013c9b0(int param_1)

{
  if (*(int *)(param_1 + 0x32c) != param_1 + 0x4f0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x4f8);
}


// ==== FUN_0013c9d8 @ 0013c9d8 ====

/* Strings referenciadas:
     "ReloadHealth"
     "HealthPacks" */

void FUN_0013c9d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = *(int *)(DAT_0040f0e0 + 0x2014c);
  iVar3 = (int)param_1;
  if (iVar4 == 1) {
    fVar5 = *(float *)(iVar3 + 0x2f8);
LAB_0013ca48:
    fVar5 = fVar5 / 1200.0;
  }
  else {
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        fVar5 = *(float *)(iVar3 + 0x2f8);
        goto LAB_0013ca48;
      }
    }
    else if (iVar4 < 4) {
      fVar5 = *(float *)(iVar3 + 0x2f8) / 750.0;
      goto LAB_0013ca80;
    }
    fVar5 = 0.0;
  }
LAB_0013ca80:
  fVar5 = (float)FUN_0029e688(fVar5,0x40000000);
  if (param_2 == 0) {
    fVar6 = (float)FUN_00383890(param_1);
    if (0.999 <= fVar6) {
      return;
    }
    if (*(char *)(iVar3 + 0x8a1) == '\0') {
      return;
    }
    fVar6 = 1.0;
    if (fVar5 + 0.5 < 1.0) {
      fVar6 = SQRT(fVar5 + 0.5);
    }
    iVar4 = *(int *)(DAT_0040f0e0 + 0x2014c);
    if (iVar4 == 1) {
      fVar6 = fVar6 * 1200.0;
    }
    else if (iVar4 < 2) {
      if (iVar4 != 0) goto LAB_0013cbac;
      fVar6 = fVar6 * 1200.0;
    }
    else {
      if (3 < iVar4) goto LAB_0013cbac;
      fVar6 = fVar6 * 750.0;
    }
    *(float *)(iVar3 + 0x2f8) = fVar6;
LAB_0013cbac:
    FUN_001eed98(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),6);
    FUN_0021a7e0(0x3f49c8,0,DAT_0040f544 + 0x38c9,0);
    cVar2 = *(char *)(iVar3 + 0x8a1) + -1;
    *(char *)(iVar3 + 0x8a1) = cVar2;
    iVar4 = DAT_0040f544 + 0x38c9;
    uVar1 = FUN_0024f7d0(cVar2);
    FUN_0021a7e0(0x3f49d8,0,iVar4,1,uVar1);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  fVar6 = 1.0;
  if (fVar5 + 0.25 < 1.0) {
    fVar6 = SQRT(fVar5 + 0.25);
  }
  iVar4 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar4 == 1) {
    fVar6 = fVar6 * 1200.0;
  }
  else if (iVar4 < 2) {
    if (iVar4 != 0) goto LAB_0013ccec;
    fVar6 = fVar6 * 1200.0;
  }
  else {
    if (3 < iVar4) goto LAB_0013ccec;
    fVar6 = fVar6 * 750.0;
  }
  *(float *)(iVar3 + 0x2f8) = fVar6;
LAB_0013ccec:
  FUN_001f2a60(DAT_0040f51c,0x12,1,0,1);
  return;
}


// ==== FUN_0013cd20 @ 0013cd20 ====

/* Strings referenciadas:
     "HealthPacks" */

undefined4 FUN_0013cd20(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x8a1) == '\x03') {
    FUN_001f2a60(DAT_0040f51c,0x35,0,0,1);
    uVar1 = 0;
  }
  else {
    cVar4 = *(char *)(param_1 + 0x8a1) + '\x01';
    *(char *)(param_1 + 0x8a1) = cVar4;
    iVar5 = DAT_0040f544 + 0x38c9;
    uVar2 = FUN_0024f7d0(cVar4);
    FUN_0021a7e0(0x3f49d8,0,iVar5,1,uVar2);
    lVar3 = FUN_001f2a60(DAT_0040f51c,0xd,1,0,1);
    uVar1 = 1;
    if (lVar3 == 0) {
      FUN_001f2a60(DAT_0040f51c,0x13,1,0,1);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_0013ce08 @ 0013ce08 ====

void FUN_0013ce08(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0x2b00;
  iVar5 = 0x1000000;
  *(undefined1 *)(param_1 + 0x8b3) = 0;
  do {
    if (0xf < iVar3) {
      return;
    }
    iVar3 = DAT_0040f4d4 + iVar4 + 0x150;
    if ((*(char *)(DAT_0040f4d4 + iVar4 + 0x78) != '\0') &&
       (lVar1 = FUN_001891c0(iVar3), lVar1 != 0)) {
      uVar2 = FUN_0018a678(iVar3);
      lVar1 = FUN_00178f28(uVar2);
      if (lVar1 != 0) {
        *(undefined1 *)(param_1 + 0x8b3) = 1;
        return;
      }
    }
    iVar4 = iVar4 + 0x1fd0;
    iVar3 = iVar5 >> 0x18;
    iVar5 = iVar5 + 0x1000000;
  } while( true );
}


// ==== FUN_0013ced0 @ 0013ced0 ====

void FUN_0013ced0(float param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  iVar1 = *(int *)(param_2 + 0x32c);
  auVar4 = _qmtc2(param_3);
  if (iVar1 != 0) {
    auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x50));
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar2);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar3,auVar4);
    auVar4 = _vsub(in_vf0,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    param_1 = param_1 * auVar4._0_4_;
    param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
    *(float *)(iVar1 + 0x10) =
         *(float *)(iVar1 + 0x10) *
         (1.0 - (float)((int)param_1 * (uint)(param_1 < 0.75) | (uint)(param_1 >= 0.75) * 0x3f400000
                       ));
  }
  return;
}


// ==== FUN_0013cf38 @ 0013cf38 ====

void FUN_0013cf38(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00181030(iVar1 + 0xec0,param_1);
  FUN_00185d08(iVar1 + 0x90,param_1);
  FUN_00180f10(iVar1 + 0x140,param_1);
  FUN_00188b90(iVar1 + 0x150,param_1);
  FUN_00187e08(iVar1 + 0x290,param_1);
  FUN_0017c9f0(iVar1 + 0x650,param_1);
  FUN_00183910(iVar1 + 0x6f0,param_1);
  FUN_00181ff0(iVar1 + 0x810,param_1);
  FUN_001804d0(iVar1 + 0xb30,param_1);
  FUN_0018ad80(iVar1 + 0xcc0,param_1);
  FUN_0018cee0(iVar1 + 0xd10,param_1);
  FUN_00181f20(iVar1 + 0xc80,param_1);
  FUN_0018d978(iVar1 + 0xc94,param_1);
  FUN_0018c178(iVar1 + 0x1da0,param_1);
  FUN_001831d8(iVar1 + 0x1eb0,param_1);
  *(undefined4 *)(iVar1 + 0x1ef0) = 0;
  *(undefined4 *)(iVar1 + 0x1ef4) = 0xffffffff;
  FUN_0013ec10(param_1,1);
  FUN_00176ee0(iVar1 + 0x1fcc);
  FUN_0017b260(iVar1 + 0x1f60,param_1);
  FUN_0016ab58(iVar1 + 0x1f90,8);
  return;
}


// ==== FUN_0013d048 @ 0013d048 ====

undefined4 FUN_0013d048(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xc94;
  FUN_0013ec38();
  FUN_0018d9a0(iVar2,*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
               *(undefined1 *)(param_3 + 0x34));
  if (*(int *)(param_3 + 0x40) == 0x27) {
    FUN_0018d9f0(*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x48) + 4) + 0x60),iVar2);
  }
  FUN_00185d10(param_1 + 0x90);
  FUN_00180f18(param_1 + 0x140);
  FUN_00188b98(param_1 + 0x150);
  FUN_00187ec8(param_1 + 0x290);
  FUN_0017c9f8(param_1 + 0x650,iVar2);
  FUN_00183918(param_1 + 0x6f0);
  FUN_00182078(param_1 + 0x810);
  FUN_001804f8(0x41f00000,param_1 + 0xb30,*(undefined8 *)(param_3 + 0x10));
  FUN_0018ad88(param_1 + 0xcc0);
  FUN_00181f28(param_1 + 0xc80);
  FUN_0018cfd8(param_1 + 0xd10);
  FUN_0018c1e0(param_1 + 0x1da0);
  FUN_001831e0(param_1 + 0x1eb0);
  FUN_00181348(param_1 + 0xec0);
  *(undefined1 *)(param_1 + 0x1fc0) = 0;
  *(undefined4 *)(param_1 + 0x1f98) = 0;
  *(undefined4 *)(param_1 + 0x1f9c) = 0;
  *(undefined1 *)(param_1 + 0x1fc1) = 0;
  *(undefined4 *)(param_1 + 0x1fc4) = 0;
  *(undefined4 *)(param_1 + 0x1fc8) = 0;
  FUN_00173fe8(param_1 + 0x1ef8);
  FUN_00173fe8(param_1 + 0x1efa);
  FUN_0016aba0(param_1 + 0x1f90);
  if (*(long *)(param_3 + 0x50) != 0) {
    FUN_0018d410(param_1 + 0xd10);
  }
  uVar1 = FUN_0018dce0(iVar2);
  FUN_00181ab0(param_1 + 0xec0,uVar1);
  FUN_001856b0(param_1 + 0x6f0,*(byte *)(param_3 + 0x58) ^ 1);
  *(undefined4 *)(param_1 + 0x1ef0) = 0;
  return 1;
}


// ==== FUN_0013d1d0 @ 0013d1d0 ====

void FUN_0013d1d0(undefined8 param_1)

{
  FUN_0013ee20();
  FUN_0013d228(param_1);
  if (*(float *)(*(int *)((int)param_1 + 0x7c) + 0xa4) < -200.0) {
    *(undefined1 *)((int)param_1 + 0x1fc0) = 1;
  }
  return;
}


// ==== FUN_0013d228 @ 0013d228 ====

void FUN_0013d228(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(*(int *)(iVar2 + 0x7c) + 0x38c) != 2) {
    FUN_0013d4b8();
    FUN_0013d5f8(param_1);
    FUN_0018c260(iVar2 + 0x1da0);
    lVar1 = FUN_0018c3c0(iVar2 + 0x1da0);
    if (lVar1 != 0) {
      FUN_00181418(iVar2 + 0xec0);
      FUN_0017caf8(iVar2 + 0x650);
    }
    FUN_0016ac08(iVar2 + 0x1f90);
    FUN_0013d588(param_1);
  }
  return;
}


// ==== FUN_0013d2b0 @ 0013d2b0 ====

undefined4 FUN_0013d2b0(void)

{
  FUN_0013ee28();
  return 1;
}


// ==== FUN_0013d308 @ 0013d308 ====

void FUN_0013d308(undefined8 param_1)

{
  int iVar1;
  
  FUN_0013ee48();
  iVar1 = (int)param_1;
  FUN_0018c368(iVar1 + 0x1da0);
  FUN_00181560(iVar1 + 0xec0);
  FUN_0018d580(iVar1 + 0xd10);
  FUN_001796e0(DAT_0040f4d4,param_1);
  FUN_0017b220(DAT_0040f4d4 + 0x1150,param_1);
  FUN_0017ba00(DAT_0040f4d4 + 0x1290,param_1);
  FUN_0016dde0(DAT_0040f4d4,param_1);
  return;
}


// ==== FUN_0013d388 @ 0013d388 ====

void FUN_0013d388(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a2_qw [16];
  int in_t1_lo;
  undefined1 auVar1 [16];
  
  auVar1 = _por(in_zero_qw,in_a2_qw);
  if ((*(int *)(in_t1_lo + 0x38c) == 0) ||
     (*(int *)(in_t1_lo + 0x3a4) != *(int *)(*(int *)(param_3 + 0x7c) + 0x3a4))) {
    FUN_00189550(param_2,param_3 + 0x150);
  }
  auVar1 = _por(in_zero_qw,auVar1);
  FUN_0017fcd8(param_3 + 0x650,auVar1._0_8_);
  return;
}


// ==== FUN_0013d3f0 @ 0013d3f0 ====

undefined4 FUN_0013d3f0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x34c) + 0x18);
}


// ==== FUN_0013d400 @ 0013d400 ====

undefined4 FUN_0013d400(int param_1)

{
  return *(undefined4 *)(DAT_0040f4d4 + 0x22b20 + *(int *)(*(int *)(param_1 + 0x7c) + 0x3a4) * 4);
}


// ==== FUN_0013d430 @ 0013d430 ====

void FUN_0013d430(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  *(int *)(iVar1 + 0x39c) = (int)param_2;
  FUN_00138390(*(undefined4 *)(iVar1 + 0x328),iVar1 + 0x3b9,param_2);
  FUN_0018d9e8(param_1 + 0xc94,param_2);
  uVar2 = FUN_0018dce0(param_1 + 0xc94);
  FUN_00181ab0(param_1 + 0xec0,uVar2);
  FUN_0018d4c8(param_1 + 0xd10);
  return;
}


// ==== FUN_0013d4b8 @ 0013d4b8 ====

void FUN_0013d4b8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (0 < *(int *)(iVar3 + 0x1f9c)) {
    switch(*(int *)(iVar3 + 0x1f9c)) {
    default:
      goto switchD_0013d4f0_caseD_1;
    case 2:
      FUN_00180028(iVar3 + 0x650);
      uVar2 = *(undefined4 *)(iVar3 + 0x1f9c);
      break;
    case 3:
    case 5:
      FUN_00180070(iVar3 + 0x650);
      uVar2 = *(undefined4 *)(iVar3 + 0x1f9c);
      break;
    case 4:
      FUN_00180028(iVar3 + 0x650);
      uVar2 = *(undefined4 *)(iVar3 + 0x1f9c);
      break;
    case 6:
      FUN_00180028(iVar3 + 0x650);
      uVar2 = *(undefined4 *)(iVar3 + 0x1f9c);
    }
    *(undefined4 *)(iVar3 + 0x4c) = uVar2;
  }
switchD_0013d4f0_caseD_1:
  iVar1 = *(int *)(iVar3 + 0x1f98);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar3 + 0x1f9c) = 0;
  }
  else if (*(char *)(iVar1 + 0x1c) == '\0') {
    *(undefined4 *)(iVar3 + 0x1f9c) = 0;
  }
  else {
    FUN_001624a0(iVar1,param_1);
    FUN_001897e8(iVar3 + 0x150,*(undefined4 *)(*(int *)(iVar3 + 0x1f98) + 0x30),0);
    *(undefined4 *)(iVar3 + 0x1f9c) = 0;
  }
  *(undefined4 *)(iVar3 + 0x1f98) = 0;
  return;
}


// ==== FUN_0013d588 @ 0013d588 ====

void FUN_0013d588(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x1fc0) != '\0') {
    if (*(int *)(*(int *)(iVar1 + 0x7c) + 0x3a4) == 0) {
      FUN_00173168(DAT_0040f4d4 + 0x22800,param_1);
    }
    FUN_00139060(DAT_0040f514,*(undefined4 *)(iVar1 + 0x7c));
    *(undefined1 *)(iVar1 + 0x1fc0) = 0;
  }
  return;
}


// ==== FUN_0013d5f8 @ 0013d5f8 ====

void FUN_0013d5f8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  cVar1 = FUN_00176f00(iVar2 + 0x1fcc);
  if (cVar1 != '\0') {
    FUN_0013d680(param_1);
  }
  FUN_00180610(iVar2 + 0xb30);
  FUN_00183aa0(iVar2 + 0x6f0);
  FUN_00188d08(iVar2 + 0x150);
  FUN_00187f90(iVar2 + 0x290);
  FUN_00182138(iVar2 + 0x810);
  FUN_00185da8(iVar2 + 0x90);
  FUN_0018ade0(iVar2 + 0xcc0);
  FUN_0018d108(iVar2 + 0xd10);
  FUN_00183260(iVar2 + 0x1eb0);
  return;
}


// ==== FUN_0013d680 @ 0013d680 ====

void FUN_0013d680(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar6 = _vaddbc(in_vf0,in_vf0);
  iVar3 = 0xf;
  iVar4 = 0x2b00;
  *(undefined2 *)(param_1 + 0x1ef8) = 0;
  *(undefined2 *)(param_1 + 0x1efa) = 0;
  auVar6 = _sqc2(auVar6);
  fVar5 = 25.0;
  auVar1 = *(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0xa0);
  do {
    iVar2 = DAT_0040f4d4 + iVar4;
    if ((iVar2 != param_1) && (*(char *)(iVar2 + 0x78) != '\0')) {
      auVar8 = _lqc2(auVar1);
      if (*(int *)(iVar2 + 0x7c) != 0) {
        auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x7c) + 0xa0));
        auVar8 = _vsub(auVar7,auVar8);
        auVar8 = _vmul(auVar8,auVar8);
        auVar7 = _lqc2(auVar6);
        _vaddabc(auVar8,auVar8);
        auVar8 = _vmaddbc(auVar7,auVar8);
        auVar8 = _qmfc2(auVar8._0_4_);
        if (auVar8._0_4_ < 100.0) {
          FUN_00173ff8(param_1 + 0x1ef8,iVar2);
        }
        if (auVar8._0_4_ < fVar5) {
          FUN_00173ff8(param_1 + 0x1efa,iVar2);
        }
      }
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 0x1fd0;
  } while (-1 < iVar3);
  return;
}


// ==== FUN_0013d7a0 @ 0013d7a0 ====

void FUN_0013d7a0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(uint *)(param_1 + 0x274) & 1 << ((uint)param_2 & 0x1f)) != 0) {
    FUN_00189b90();
  }
  FUN_00188a18(param_1 + 0x290,param_2);
  FUN_00183bc0(param_1 + 0x6f0,param_2);
  FUN_001815d8(param_1 + 0xec0,param_2);
  uVar3 = FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2);
  lVar4 = FUN_00178f18(uVar3);
  if (lVar4 != 0) {
    iVar2 = FUN_00179258(DAT_0040f4d4 + 0xfa8,param_2);
    uVar1 = *(undefined4 *)(iVar2 + 8);
    lVar4 = FUN_00135550(uVar1);
    if ((lVar4 != 0) && (iVar2 = FUN_00135550(uVar1), *(int *)(iVar2 + 0x80) == 1)) {
      uVar3 = FUN_00135550(uVar1);
      FUN_00174018(param_1 + 0x1ef8,uVar3);
      FUN_00174018(param_1 + 0x1efa,uVar3);
    }
  }
  return;
}


// ==== FUN_0013d8a0 @ 0013d8a0 ====

void FUN_0013d8a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1f98) == 0) {
    *(undefined4 *)(param_1 + 0x1f98) = param_2;
  }
  return;
}


// ==== FUN_0013d8b8 @ 0013d8b8 ====

void FUN_0013d8b8(int param_1,int param_2)

{
  FUN_00189b90(param_1 + 0x150,*(undefined4 *)(param_2 + 0x30));
  return;
}


// ==== FUN_0013d8d8 @ 0013d8d8 ====

void FUN_0013d8d8(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_60 [32];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  auVar4 = _vaddbc(in_vf0,in_vf0);
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulong)param_2 >> 0x20);
  auVar3._8_4_ = in_a1_udw;
  auVar3._0_8_ = param_2;
  auVar3._12_4_ = in_register_0000005c;
  auVar5 = _lqc2(auVar3);
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0xa0));
  auVar3 = _vsub(auVar5,auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar1 = auVar3._0_4_;
  uVar2 = FUN_001847b8(fVar1,param_1 + 0x6f0,10,1,4);
  (**(code **)(*(int *)(param_1 + 0x84) + 0x2c))
            (uVar2,param_1 + *(short *)(*(int *)(param_1 + 0x84) + 0x28),10,
             CONCAT44(uStack_3c,uStack_40),0);
  if (fVar1 < 64.0) {
    FUN_0018bf28(fVar1,auStack_60,CONCAT44(uStack_3c,uStack_40),1);
    FUN_00181b08(param_1 + 0xec0,auStack_60);
  }
  return;
}


// ==== FUN_0013d9a0 @ 0013d9a0 ====

void FUN_0013d9a0(int param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_1c;
  
  auVar6 = _qmtc2(param_2);
  auVar3 = _qmtc2(0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _qmtc2(0x40400000);
  auVar2 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0xa0));
  auVar2 = _vsub(auVar6,auVar2);
  auVar2 = _vmulbc(auVar2,auVar2);
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar2 = _sqc2(auVar2);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  auVar3 = _vmulbc(auVar3,auVar5);
  uStack_1c = auVar2._4_4_;
  auVar2 = _qmfc2(auVar3._0_4_);
  fVar1 = auVar2._0_4_;
  fVar1 = 25.0 / (float)((int)uStack_1c * (uint)(fVar1 < uStack_1c) |
                        (int)fVar1 * (uint)(fVar1 >= uStack_1c));
  fVar1 = (float)((int)fVar1 * (uint)(0.0 < fVar1));
  fVar1 = (float)((int)fVar1 * (uint)(fVar1 < 1.0) | (uint)(fVar1 >= 1.0) * 0x3f800000);
  if ((param_3 != 0) &&
     (*(int *)((int)param_3 + 0x3a4) == *(int *)(*(int *)(param_1 + 0x7c) + 0x3a4))) {
    fVar1 = fVar1 / 3.0;
  }
  auVar2 = _qmfc2(auVar6._0_4_);
  FUN_00135dd8(fVar1,*(undefined4 *)(param_1 + 0x7c),6,auVar2._0_8_);
  return;
}


// ==== FUN_0013da60 @ 0013da60 ====

void FUN_0013da60(int param_1)

{
  if (*(char *)(param_1 + 0x1fc1) == '\0') {
    if (*(int *)(param_1 + 0x1fc4) != 0) {
      FUN_0016aba8(param_1 + 0x1f90,*(int *)(param_1 + 0x1fc4),*(undefined4 *)(param_1 + 0x1fc8),
                   *(undefined4 *)(param_1 + 0x7c));
    }
    *(undefined1 *)(param_1 + 0x1fc1) = 1;
  }
  return;
}


// ==== FUN_0013dab0 @ 0013dab0 ====

void FUN_0013dab0(int param_1)

{
  FUN_00182a40(param_1 + 0x810);
  FUN_00180678(param_1 + 0xb30);
  FUN_00185e38(param_1 + 0x90);
  FUN_00181470(param_1 + 0xec0);
  return;
}


// ==== FUN_0013daf0 @ 0013daf0 ====

void FUN_0013daf0(int param_1)

{
  FUN_00183ef8(param_1 + 0x6f0);
  return;
}


// ==== FUN_0013db40 @ 0013db40 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013db40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0xb4) = 0x40a00000;
  *(int *)(iVar4 + 0xa0) = (int)uVar1;
  *(int *)(iVar4 + 0xa4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0xa8) = uVar2;
  *(undefined4 *)(iVar4 + 0xac) = uVar3;
  *(undefined1 *)(iVar4 + 0xc1) = 1;
  *(undefined4 *)(iVar4 + 0xb0) = 0x40a00000;
  *(undefined1 *)(iVar4 + 0xb8) = 0;
  *(undefined1 *)(iVar4 + 0xb9) = 0;
  *(undefined1 *)(iVar4 + 0xc0) = 0;
  *(undefined4 *)(iVar4 + 0x90) = 0;
  *(undefined4 *)(iVar4 + 0xc4) = 0;
  *(undefined4 *)(iVar4 + 0xbc) = 0;
  FUN_0013ec10(param_1,4);
  return;
}


// ==== FUN_0013dba0 @ 0013dba0 ====

undefined4 FUN_0013dba0(int param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined1 *)(param_1 + 0xb9) = 0;
    *(undefined1 *)(param_1 + 0xc1) = 1;
    FUN_0013ec38();
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return 1;
}


// ==== FUN_0013dc00 @ 0013dc00 ====

void FUN_0013dc00(undefined4 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  uVar1 = *(undefined4 *)(param_3 + 0x90);
  *(int *)(param_3 + 0xa0) = (int)param_4;
  *(int *)(param_3 + 0xa4) = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(param_3 + 0xa8) = in_a1_udw;
  *(undefined4 *)(param_3 + 0xac) = in_register_0000005c;
  *(undefined4 *)(param_3 + 0x90) = 1;
  *(undefined4 *)(param_3 + 0xb0) = param_1;
  *(undefined4 *)(param_3 + 0xb4) = param_2;
  *(undefined1 *)(param_3 + 0xb9) = param_5;
  *(undefined1 *)(param_3 + 0xc1) = 1;
  *(undefined4 *)(param_3 + 0xc4) = uVar1;
  *(undefined4 *)(param_3 + 0xbc) = 0;
  *(undefined1 *)(param_3 + 0xb8) = 1;
  return;
}


// ==== FUN_0013dc38 @ 0013dc38 ====

void FUN_0013dc38(int param_1)

{
  *(undefined1 *)(param_1 + 0xb9) = 1;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


// ==== FUN_0013dc50 @ 0013dc50 ====

void FUN_0013dc50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc4) != 3) {
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 3;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return;
}


// ==== FUN_0013dc78 @ 0013dc78 ====

void FUN_0013dc78(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc4) != 4) {
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return;
}


// ==== FUN_0013dca0 @ 0013dca0 ====

void FUN_0013dca0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb9) != '\0') {
    if (*(char *)(DAT_0040f4bc + 0x1678) != '\0') {
      FUN_001f2838(DAT_0040f51c,0,1);
      iVar1 = *(int *)(param_1 + 0x7c);
      goto LAB_0013dcf8;
    }
    FUN_001f2838(DAT_0040f51c,0,5);
  }
  iVar1 = *(int *)(param_1 + 0x7c);
LAB_0013dcf8:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x4f8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x4fc);
  return;
}


// ==== FUN_0013dd18 @ 0013dd18 ====

void FUN_0013dd18(int param_1)

{
  if (*(char *)(param_1 + 0xb9) != '\0') {
    FUN_001f2838(DAT_0040f51c,0,1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0x8b2) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}


// ==== FUN_0013dd68 @ 0013dd68 ====

void FUN_0013dd68(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x90);
  if (iVar2 == 2) {
    if (*(int *)(iVar5 + 0xbc) != 0) {
      FUN_0013eb00(param_1);
    }
  }
  else if (iVar2 < 3) {
    if (iVar2 == 1) {
      uVar3 = FUN_0013df58(param_1);
      *(undefined1 *)(iVar5 + 0xb8) = uVar3;
    }
  }
  else {
    if (iVar2 == 3) {
      if (*(char *)(iVar5 + 0xc1) != '\0') {
        lVar4 = FUN_001a6840(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x330),0,0);
        if (lVar4 != 0) {
          FUN_001354e0(DAT_0040f4d0 + 0x30,DAT_0040f4d0 + 0x520);
        }
        goto LAB_0013ded4;
      }
      *(undefined1 *)(iVar5 + 0xc1) = 1;
      FUN_00156e90(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x2a4));
      cVar1 = *(char *)(iVar5 + 0xb9);
    }
    else {
      if ((iVar2 != 4) || (*(char *)(DAT_0040f4bc + 0x1678) != '\0')) goto LAB_0013ded4;
      if (*(char *)(iVar5 + 0xc1) != '\0') {
        lVar4 = FUN_001a6840(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x330),0,0);
        if (lVar4 != 0) {
          FUN_001354e0(DAT_0040f4d0 + 0x30,DAT_0040f4d0 + 0x520);
        }
        goto LAB_0013ded4;
      }
      *(undefined1 *)(iVar5 + 0xc1) = 1;
      auStack_40[0] = 6;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      FUN_001a6330(*(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x330),auStack_40);
      cVar1 = *(char *)(iVar5 + 0xb9);
    }
    if (cVar1 != '\0') {
      FUN_001f2838(DAT_0040f51c,0,5);
    }
  }
LAB_0013ded4:
  FUN_0013ee20(param_1);
  return;
}


// ==== FUN_0013def0 @ 0013def0 ====

undefined4 FUN_0013def0(int param_1)

{
  FUN_0013ee28();
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 1;
}


// ==== FUN_0013df38 @ 0013df38 ====

void FUN_0013df38(void)

{
  FUN_0013ee30();
  return;
}


// ==== FUN_0013df58 @ 0013df58 ====

bool FUN_0013df58(int param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_vf21 [16];
  undefined1 auVar29 [16];
  undefined1 in_vf23 [16];
  undefined4 in_vuI;
  undefined4 uVar30;
  undefined1 auStack_4d0 [16];
  undefined1 auStack_4c0 [16];
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [16];
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [16];
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [16];
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [16];
  undefined1 auStack_400 [16];
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [16];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined1 auStack_2e0 [16];
  undefined4 uStack_2d4;
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
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [8];
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_130 [16];
  float fStack_120;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar15 = _vsub(in_vf0,in_vf0);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _pextlw(0,0);
  auVar7 = _pextlw(0x3f800000,auVar7._0_8_);
  uStack_100 = auVar7._0_4_;
  uStack_fc = auVar7._4_4_;
  uStack_f8 = auVar7._8_4_;
  uStack_f4 = auVar7._12_4_;
  auVar29 = _vmove(auVar17);
  iVar2 = *(int *)(param_1 + 0x7c);
  fVar11 = *(float *)(param_1 + 0xb0);
  fStack_140 = 0.0;
  auVar16 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  uVar5 = *(undefined8 *)(iVar2 + 0x100);
  uVar4 = *(undefined8 *)(iVar2 + 0x100);
  uVar9 = *(undefined4 *)(iVar2 + 0x108);
  uVar10 = *(undefined4 *)(iVar2 + 0x10c);
  auStack_4d0 = _sqc2(auVar12);
  auStack_4b0 = _sqc2(auVar14);
  auStack_4c0 = _sqc2(auVar13);
  auStack_4a0 = _sqc2(auVar15);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xd0));
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x100));
  auVar13 = _vsub(auVar16,auVar12);
  auStack_450 = _sqc2(auVar14);
  auVar12 = _vmul(auVar13,auVar13);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar17,auVar12);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar12);
  uVar30 = _vwaitq();
  auVar12 = _vmulq(auVar13,uVar30);
  auStack_440 = *(undefined1 (*) [16])(iVar2 + 0xe0);
  auVar13 = _vmove(auVar12);
  auStack_430 = *(undefined1 (*) [16])(iVar2 + 0xf0);
  auStack_420 = *(undefined1 (*) [16])(iVar2 + 0x100);
  if (180.0 <= fVar11) {
    auVar7 = _lqc2(auVar7);
    _vopmula(auVar7,auVar12);
    auVar13 = _vopmsub(auVar12,auVar7);
    pauVar1 = (undefined1 (*) [16])(iVar2 + 0x100);
    uStack_3a0 = *(undefined4 *)*pauVar1;
    uStack_39c = *(undefined4 *)(iVar2 + 0x104);
    uStack_398 = *(undefined4 *)(iVar2 + 0x108);
    uStack_394 = *(undefined4 *)(iVar2 + 0x10c);
    auStack_420 = *pauVar1;
    auStack_460 = *pauVar1;
    auVar7 = _vmul(auVar13,auVar13);
    _sqc2(auVar13);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar29,auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    uVar30 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar30);
    auStack_470 = _sqc2(auVar12);
    _vopmula(auVar12,auVar13);
    auVar7 = _vopmsub(auVar13,auVar12);
    auStack_490 = _sqc2(auVar13);
    auStack_480 = _sqc2(auVar7);
    auStack_330 = _sqc2(auVar12);
    auStack_350 = _sqc2(auVar13);
    auStack_340 = _sqc2(auVar7);
    auStack_390 = _sqc2(auVar13);
    auStack_380 = _sqc2(auVar7);
    auStack_370 = _sqc2(auVar12);
    auStack_3d0 = _sqc2(auVar13);
    auStack_3c0 = _sqc2(auVar7);
    auStack_3b0 = _sqc2(auVar12);
    auStack_450 = _sqc2(auVar13);
    auStack_440 = _sqc2(auVar7);
    auStack_430 = _sqc2(auVar12);
    uStack_360 = uStack_3a0;
    uStack_35c = uStack_39c;
    uStack_358 = uStack_398;
    uStack_354 = uStack_394;
    goto LAB_0013e9b4;
  }
  auVar7 = _lqc2(auVar7);
  _vopmula(auVar7,auVar13);
  auVar12 = _vopmsub(auVar13,auVar7);
  auVar7 = _vmul(auVar12,auVar12);
  _sqc2(auVar12);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar29,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  uVar30 = _vwaitq();
  auVar15 = _vmulq(auVar12,uVar30);
  _vopmula(auVar13,auVar15);
  auVar16 = _vopmsub(auVar15,auVar13);
  auStack_330 = _sqc2(auVar13);
  auStack_350 = _sqc2(auVar15);
  auVar28 = _qmtc2(0x3f800000);
  auStack_390 = _sqc2(auVar15);
  auStack_370 = _sqc2(auVar13);
  auStack_3d0 = _sqc2(auVar15);
  auStack_3b0 = _sqc2(auVar13);
  auStack_410 = _sqc2(auVar15);
  auStack_3f0 = _sqc2(auVar13);
  auStack_340 = _sqc2(auVar16);
  auStack_380 = _sqc2(auVar16);
  auStack_3c0 = _sqc2(auVar16);
  auStack_400 = _sqc2(auVar16);
  uStack_3a0 = auStack_3e0._0_4_;
  uStack_39c = auStack_3e0._4_4_;
  uStack_358 = auStack_3e0._8_4_;
  uStack_354 = auStack_3e0._12_4_;
  _vmove(auVar14);
  uStack_398 = auStack_3e0._8_4_;
  uStack_394 = auStack_3e0._12_4_;
  auVar23 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x100));
  _sqc2(auVar14);
  auStack_3e0 = _sqc2(auVar23);
  auVar12 = _lqc2(auStack_440);
  auVar25 = _vaddbc(in_vf0,auVar12);
  _vmove(auVar25);
  _sqc2(auVar12);
  _vmove(auVar12);
  auVar17 = _vaddbc(in_vf0,auVar14);
  auVar7 = _lqc2(auStack_430);
  _vmove(auVar17);
  auVar19 = _vaddbc(in_vf0,auVar7);
  auVar20 = _vaddbc(in_vf0,auVar7);
  _sqc2(auVar7);
  _vmulabc(auVar15,auVar19);
  _vmaddabc(auVar16,auVar19);
  auVar22 = _vmaddbc(auVar13,auVar19);
  _vmulabc(auVar15,auVar20);
  _vmaddabc(auVar16,auVar20);
  auVar24 = _vmaddbc(auVar13,auVar20);
  _vmove(auVar7);
  auVar27 = _vsubbc(auVar22,auVar24);
  auVar26 = _vaddbc(in_vf0,auVar14);
  auVar14 = _vaddbc(auVar22,auVar24);
  auVar18 = _lqc2(auStack_420);
  _vmove(auVar26);
  auVar7 = _vmulbc(auVar20,auVar18);
  auVar21 = _vaddbc(in_vf0,auVar12);
  auVar12 = _vmulbc(auVar19,auVar18);
  auVar12 = _vadd(auVar12,auVar7);
  auVar7 = _vmulbc(auVar21,auVar18);
  auVar7 = _vadd(auVar12,auVar7);
  _sqc2(auVar25);
  auVar12 = _vsub(in_vf0,auVar7);
  _sqc2(auVar17);
  _vmulabc(auVar15,auVar21);
  _vmaddabc(auVar16,auVar21);
  auVar7 = _vmaddbc(auVar13,auVar21);
  _vmulabc(auVar15,auVar12);
  _vmaddabc(auVar16,auVar12);
  _vmaddabc(auVar13,auVar12);
  auVar16 = _vmaddbc(auVar23,in_vf0);
  _sqc2(auVar26);
  auVar15 = _vmove(auVar7);
  auVar7 = _vsubbc(auVar24,auVar15);
  _vmove(in_vf23);
  _vaddbc(in_vf0,auVar7);
  auVar7 = _vsubbc(auVar15,auVar22);
  _vaddbc(in_vf0,auVar7);
  _sqc2(auVar18);
  auVar13 = _vaddbc(in_vf0,auVar27);
  _sqc2(auVar19);
  auVar7 = _vmul(auVar13,auVar13);
  _sqc2(auVar20);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar29,auVar7);
  auVar14 = _vaddbc(auVar14,auVar15);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar7);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  uVar30 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar30);
  _sqc2(auVar21);
  auVar7 = _qmfc2(auVar7._0_4_);
  auVar14 = _vsubbc(auVar14,auVar28);
  fVar6 = auVar7._0_4_;
  _sqc2(auVar12);
  auVar7 = _qmfc2(auVar14._0_4_);
  fVar8 = auVar7._0_4_;
  auStack_2a0 = _sqc2(auVar16);
  auStack_210 = _sqc2(auVar22);
  auStack_200 = _sqc2(auVar24);
  auStack_1f0 = _sqc2(auVar15);
  auStack_1e0 = _sqc2(auVar16);
  auStack_250 = _sqc2(auVar22);
  auStack_240 = _sqc2(auVar24);
  auStack_230 = _sqc2(auVar15);
  auStack_220 = _sqc2(auVar16);
  auStack_2d0 = _sqc2(auVar22);
  auStack_2c0 = _sqc2(auVar24);
  auStack_2b0 = _sqc2(auVar15);
  if (0.0 < fVar6) {
    auVar7 = _qmtc2(1.0 / fVar6);
    auVar7 = _vmulbc(auVar13,auVar7);
    auStack_130 = _sqc2(auVar7);
  }
  else {
    auVar7 = _vadd(in_vf0,in_vf0);
    auStack_130 = _sqc2(auVar7);
    _auStack_150 = _sqc2(auVar7);
  }
  auStack_d0 = _sqc2(in_vf21);
  auStack_c0 = _sqc2(auVar29);
  uStack_360 = uStack_3a0;
  uStack_35c = uStack_39c;
  fStack_120 = (float)FUN_0029e2d8(fVar6,fVar8);
  fStack_120 = fStack_120 * 57.295776;
  _lqc2(auStack_d0);
  auVar29 = _lqc2(auStack_c0);
  if ((fVar6 <= 0.01) && (auVar7 = _lqc2(auStack_2c0), fVar8 <= 0.0)) {
    auVar14 = _lqc2(auStack_2d0);
    auVar13 = _qmfc2(auVar14._0_4_);
    auVar12 = _sqc2(auVar7);
    auStack_150._4_4_ = auVar12._4_4_;
    auVar12 = _lqc2(auStack_2b0);
    if (auVar13._0_4_ <= (float)auStack_150._4_4_) {
      auVar13 = _sqc2(auVar7);
      auVar12 = _lqc2(auStack_2b0);
      auStack_150._4_4_ = auVar13._4_4_;
      auVar13 = _sqc2(auVar12);
      fStack_148 = auVar13._8_4_;
      bVar3 = (float)auStack_150._4_4_ <= fStack_148;
      _auStack_150 = auVar13;
      if (bVar3) goto LAB_0013e470;
      auVar13 = _qmtc2(0x3f800000);
      auVar15 = _vaddbc(auVar7,auVar12);
      auVar12 = _vaddbc(auVar7,auVar13);
      auVar13 = _vaddbc(in_vf0,auVar12);
      auVar12 = _vaddbc(auVar7,auVar14);
      auVar7 = _vaddbc(auVar13,auVar13);
      _vaddbc(in_vf0,auVar7);
      _vaddbc(in_vf0,auVar15);
      auVar7 = _vaddbc(in_vf0,auVar12);
    }
    else {
      _auStack_150 = _sqc2(auVar12);
      if (auVar13._0_4_ <= fStack_148) {
LAB_0013e470:
        auVar13 = _qmtc2(0x3f800000);
        auVar14 = _vaddbc(auVar12,auVar14);
        auVar13 = _vaddbc(auVar12,auVar13);
        auVar12 = _vaddbc(auVar12,auVar7);
        auVar7 = _vaddbc(in_vf0,auVar13);
        auVar7 = _vaddbc(auVar7,auVar7);
        _vaddbc(in_vf0,auVar7);
        _vaddbc(in_vf0,auVar14);
        auVar7 = _vaddbc(in_vf0,auVar12);
      }
      else {
        auVar13 = _qmtc2(0x3f800000);
        auVar15 = _vaddbc(auVar14,auVar7);
        auVar7 = _vaddbc(auVar14,auVar13);
        auVar12 = _vaddbc(auVar14,auVar12);
        auVar7 = _vaddbc(in_vf0,auVar7);
        auVar7 = _vaddbc(auVar7,auVar7);
        _vaddbc(in_vf0,auVar7);
        _vaddbc(in_vf0,auVar15);
        auVar7 = _vaddbc(in_vf0,auVar12);
      }
    }
    auVar12 = _vmul(auVar7,auVar7);
    auVar13 = _vmove(auVar7);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar29,auVar12);
    _sqc2(auVar7);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar12);
    auVar7 = _qmfc2(auVar12._0_4_);
    _qmtc2(SQRT(auVar7._0_4_));
    uVar30 = _vwaitq();
    auVar7 = _vmulq(auVar13,uVar30);
    auStack_130 = _sqc2(auVar7);
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar19 = _vsub(in_vf0,in_vf0);
  auVar24 = _vaddbc(in_vf0,in_vf0);
  auVar25 = _vaddbc(in_vf0,in_vf0);
  auVar26 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _lqc2(auStack_2d0);
  auVar13 = _vmove(auVar24);
  auVar7 = _lqc2(auStack_2c0);
  auVar17 = _vsub(auVar13,auVar12);
  auVar12 = _vmove(auVar25);
  auVar18 = _vsub(auVar12,auVar7);
  auVar7 = _lqc2(auStack_2b0);
  auVar12 = _vmove(auVar26);
  auVar16 = _vsub(auVar12,auVar7);
  _vmove(auVar17);
  _vmove(auVar18);
  auVar14 = _vaddbc(in_vf0,auVar18);
  auVar15 = _vaddbc(in_vf0,auVar17);
  _vmove(auVar16);
  auVar20 = _vaddbc(in_vf0,auVar17);
  _vmove(auVar14);
  _vmove(auVar15);
  auVar21 = _vaddbc(in_vf0,auVar16);
  auVar22 = _vaddbc(in_vf0,auVar16);
  _vmove(auVar20);
  auVar23 = _vaddbc(in_vf0,auVar18);
  auVar7 = _vmulbc(auVar22,auVar19);
  auVar12 = _vmulbc(auVar21,auVar19);
  auVar13 = _vmulbc(auVar23,auVar19);
  auVar7 = _vadd(auVar12,auVar7);
  _sqc2(auVar17);
  _sqc2(auVar18);
  auVar7 = _vadd(auVar7,auVar13);
  _sqc2(auVar16);
  auVar12 = _vsub(in_vf0,auVar7);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar20);
  _sqc2(auVar24);
  _sqc2(auVar25);
  _sqc2(auVar26);
  _sqc2(auVar19);
  auStack_190 = _sqc2(auVar21);
  auStack_180 = _sqc2(auVar22);
  auStack_170 = _sqc2(auVar23);
  auStack_160 = _sqc2(auVar12);
  auStack_1a0 = _sqc2(auVar19);
  auStack_1d0 = _sqc2(auVar17);
  auStack_1c0 = _sqc2(auVar18);
  auStack_1b0 = _sqc2(auVar16);
  _sqc2(auVar12);
  auVar13 = _lqc2(auStack_2a0);
  auVar7 = _lqc2(auStack_190);
  auVar7 = _vmulbc(auVar7,auVar13);
  auVar12 = _vadd(auVar12,auVar7);
  _sqc2(auVar12);
  auVar13 = _lqc2(auStack_2a0);
  auVar7 = _lqc2(auStack_180);
  auVar7 = _vmulbc(auVar7,auVar13);
  auVar12 = _vadd(auVar12,auVar7);
  _sqc2(auVar12);
  auVar13 = _lqc2(auStack_2a0);
  auVar7 = _lqc2(auStack_170);
  auVar7 = _vmulbc(auVar7,auVar13);
  auVar7 = _vadd(auVar12,auVar7);
  auStack_110 = _sqc2(auVar7);
  auVar7 = _lqc2(auStack_130);
  auVar7 = _vmul(auVar7,auVar7);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar29,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (auVar7._0_4_ < 2.3283064e-10) {
    if (&stack0x00000000 != (undefined1 *)0x13c) {
      fStack_13c = 0.0;
    }
    uStack_398 = auStack_3e0._8_4_;
    uStack_394 = auStack_3e0._12_4_;
    uStack_3a0 = auStack_3e0._0_4_;
    uStack_39c = auStack_3e0._4_4_;
    auStack_3d0._0_4_ = auStack_410._0_4_;
    auStack_3d0._4_4_ = auStack_410._4_4_;
    auStack_3d0._8_4_ = auStack_410._8_4_;
    auStack_3d0._12_4_ = auStack_410._12_4_;
    auStack_3c0._0_4_ = auStack_400._0_4_;
    auStack_3c0._4_4_ = auStack_400._4_4_;
    auStack_3c0._8_4_ = auStack_400._8_4_;
    auStack_3c0._12_4_ = auStack_400._12_4_;
    auStack_3b0._0_4_ = auStack_3f0._0_4_;
    auStack_3b0._4_4_ = auStack_3f0._4_4_;
    auStack_3b0._8_4_ = auStack_3f0._8_4_;
    auStack_3b0._12_4_ = auStack_3f0._12_4_;
  }
  else {
    fVar11 = (float)((int)fStack_120 * (uint)(fStack_120 < fVar11) |
                    (int)fVar11 * (uint)(fStack_120 >= fVar11));
    auVar13 = _vmaxbc(in_vf0,in_vf0);
    auVar7 = _qmtc2(fVar11 * 0.017453292);
    auVar7 = _vaddbc(in_vf0,auVar7);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar7 = _vabs(auVar7);
    auVar12 = _lqc2(auStack_130);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar7,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar13,in_vuI);
    _vmaddai(auVar13,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar7,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar7 = _vmsubi(auVar13,in_vuI);
    auVar7 = _vabs(auVar7);
    _ctc2(0x3e800000);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar13 = _vmul(auVar12,auVar12);
    auVar15 = _vmul(auVar7,auVar7);
    _ctc2(0xc2992661);
    _vnop();
    auVar14 = _vmuli(auVar7,in_vuI);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar29,auVar13);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar13);
    uVar30 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar30);
    auVar19 = _vmul(auVar15,auVar15);
    _ctc2(0xc2255de0);
    _vnop();
    auVar18 = _vmuli(auVar7,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar17 = _vmuli(auVar7,in_vuI);
    auVar13 = _vmul(auVar19,auVar19);
    auVar14 = _vmul(auVar14,auVar15);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar16 = _vmuli(auVar7,in_vuI);
    auVar23 = _lqc2(auStack_450);
    _vmula(auVar18,auVar15);
    _vmadda(auVar14,auVar19);
    _ctc2(0x40c90fda);
    _vmadda(auVar17,auVar19);
    _vmaddai(auVar7,in_vuI);
    auVar7 = _vmadd(auVar16,auVar13);
    auVar13 = _vmulbc(auVar12,auVar12);
    _lqc2(auStack_e0);
    auVar15 = _qmtc2(0x3f800000);
    _vaddbc(in_vf0,auVar13);
    _lqc2(auStack_f0);
    auVar14 = _vmulbc(auVar12,auVar12);
    _sqc2(auVar23);
    auVar17 = _vaddbc(in_vf0,auVar15);
    auVar13 = _vmul(auVar12,auVar12);
    _vaddbc(in_vf0,auVar14);
    auVar15 = _vmulbc(auVar12,auVar12);
    auVar7 = _vsubbc(auVar17,auVar7);
    auVar14 = _vsub(in_vf0,auVar13);
    auVar7 = _vaddbc(in_vf0,auVar7);
    auVar13 = _vaddbc(in_vf0,auVar15);
    auVar14 = _vaddbc(auVar14,auVar17);
    auVar12 = _vmulbc(auVar12,auVar7);
    auVar13 = _vmulbc(auVar13,auVar7);
    auVar14 = _vmulbc(auVar14,auVar7);
    _lqc2(auStack_210);
    _lqc2(auStack_200);
    auVar15 = _vsubbc(auVar17,auVar14);
    auVar7 = _vsubbc(auVar13,auVar12);
    _lqc2(auStack_1f0);
    auVar16 = _vaddbc(in_vf0,auVar15);
    auVar18 = _vaddbc(in_vf0,auVar7);
    auVar7 = _vaddbc(auVar13,auVar12);
    auVar19 = _vaddbc(in_vf0,auVar7);
    auVar7 = _vaddbc(auVar13,auVar12);
    _vmove(auVar16);
    auVar15 = _vsubbc(auVar17,auVar14);
    auVar21 = _vaddbc(in_vf0,auVar7);
    auVar20 = _vsubbc(auVar13,auVar12);
    _vmove(auVar18);
    _vmove(auVar19);
    auVar7 = _vsubbc(auVar13,auVar12);
    _sqc2(auVar16);
    auVar22 = _vaddbc(in_vf0,auVar15);
    auVar20 = _vaddbc(in_vf0,auVar20);
    auVar17 = _vsubbc(auVar17,auVar14);
    auVar16 = _vadd(in_vf0,in_vf0);
    _sqc2(auVar18);
    _sqc2(auVar19);
    auVar12 = _vaddbc(auVar13,auVar12);
    _vmove(auVar21);
    _vmove(auVar22);
    auVar15 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar20);
    auVar14 = _vaddbc(in_vf0,auVar12);
    auVar13 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar16);
    _sqc2(auVar21);
    _sqc2(auVar22);
    _sqc2(auVar20);
    auVar7 = _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar13);
    auStack_1d0 = _sqc2(auVar16);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar13);
    _sqc2(auVar16);
    auStack_290 = _sqc2(auVar15);
    auStack_280 = _sqc2(auVar14);
    auStack_270 = _sqc2(auVar13);
    auStack_260 = _sqc2(auVar16);
    auVar12 = _lqc2(auStack_440);
    _vmulabc(auVar15,auVar23);
    _vmaddabc(auVar14,auVar23);
    auVar17 = _vmaddbc(auVar13,auVar23);
    _vmulabc(auVar15,auVar12);
    _vmaddabc(auVar14,auVar12);
    auVar18 = _vmaddbc(auVar13,auVar12);
    auStack_210 = _sqc2(auVar17);
    auStack_200 = _sqc2(auVar18);
    auVar12 = _lqc2(auVar7);
    auVar7 = _lqc2(auStack_430);
    _vmulabc(auVar15,auVar7);
    _vmaddabc(auVar14,auVar7);
    auVar7 = _vmaddbc(auVar13,auVar7);
    _vmulabc(auVar15,auVar12);
    _vmaddabc(auVar14,auVar12);
    _vmaddabc(auVar13,auVar12);
    auVar12 = _vmaddbc(auVar16,in_vf0);
    auStack_310 = _sqc2(auVar17);
    auStack_220 = _sqc2(auVar12);
    auStack_300 = _sqc2(auVar18);
    auStack_2f0 = _sqc2(auVar7);
    uStack_3a0 = auStack_2e0._0_4_;
    auStack_1f0 = _sqc2(auVar7);
    auStack_1e0 = _sqc2(auVar12);
    auStack_250 = _sqc2(auVar17);
    auStack_240 = _sqc2(auVar18);
    auStack_230 = _sqc2(auVar7);
    if (&stack0x00000000 != (undefined1 *)0x13c) {
      fStack_13c = fStack_120 - fVar11;
    }
    uStack_398 = uStack_2d8;
    uStack_394 = uStack_2d4;
    uStack_39c = uStack_2dc;
    auStack_3d0._0_4_ = auStack_310._0_4_;
    auStack_3d0._4_4_ = auStack_310._4_4_;
    auStack_3d0._8_4_ = auStack_310._8_4_;
    auStack_3d0._12_4_ = auStack_310._12_4_;
    auStack_3c0._0_4_ = auStack_300._0_4_;
    auStack_3c0._4_4_ = auStack_300._4_4_;
    auStack_3c0._8_4_ = auStack_300._8_4_;
    auStack_3c0._12_4_ = auStack_300._12_4_;
    auStack_3b0._0_4_ = auStack_2f0._0_4_;
    auStack_3b0._4_4_ = auStack_2f0._4_4_;
    auStack_3b0._8_4_ = auStack_2f0._8_4_;
    auStack_3b0._12_4_ = auStack_2f0._12_4_;
  }
  auStack_450._4_4_ = auStack_3d0._4_4_;
  auStack_450._0_4_ = auStack_3d0._0_4_;
  auStack_450._8_4_ = auStack_3d0._8_4_;
  auStack_450._12_4_ = auStack_3d0._12_4_;
  auStack_440._4_4_ = auStack_3c0._4_4_;
  auStack_440._0_4_ = auStack_3c0._0_4_;
  auStack_440._8_4_ = auStack_3c0._8_4_;
  auStack_440._12_4_ = auStack_3c0._12_4_;
  auStack_430._4_4_ = auStack_3b0._4_4_;
  auStack_430._0_4_ = auStack_3b0._0_4_;
  auStack_430._8_4_ = auStack_3b0._8_4_;
  auStack_430._12_4_ = auStack_3b0._12_4_;
  auStack_420._4_4_ = uStack_39c;
  auStack_420._0_4_ = uStack_3a0;
  auStack_420._8_4_ = uStack_398;
  auStack_420._12_4_ = uStack_394;
  if (&stack0x00000000 != (undefined1 *)0x140) {
    fStack_140 = fStack_13c;
  }
  auStack_490._4_4_ = auStack_3d0._4_4_;
  auStack_490._0_4_ = auStack_3d0._0_4_;
  auStack_490._8_4_ = auStack_3d0._8_4_;
  auStack_490._12_4_ = auStack_3d0._12_4_;
  auStack_480._4_4_ = auStack_3c0._4_4_;
  auStack_480._0_4_ = auStack_3c0._0_4_;
  auStack_480._8_4_ = auStack_3c0._8_4_;
  auStack_480._12_4_ = auStack_3c0._12_4_;
  auStack_470._4_4_ = auStack_3b0._4_4_;
  auStack_470._0_4_ = auStack_3b0._0_4_;
  auStack_470._8_4_ = auStack_3b0._8_4_;
  auStack_470._12_4_ = auStack_3b0._12_4_;
  auStack_460._8_4_ = uStack_398;
  auStack_460._0_8_ = auStack_420._0_8_;
  auStack_460._12_4_ = uStack_394;
LAB_0013e9b4:
  auStack_c0 = _sqc2(auVar29);
  auStack_4d0 = auStack_490;
  auStack_4c0 = auStack_480;
  auStack_4b0 = auStack_470;
  auStack_4a0._8_4_ = uVar9;
  auStack_4a0._0_8_ = uVar4;
  auStack_4a0._12_4_ = uVar10;
  FUN_001368f0(*(undefined4 *)(param_1 + 0x7c),auStack_4d0);
  bVar3 = *(float *)(param_1 + 0xb4) <= fStack_140;
  auVar7 = _lqc2(auStack_c0);
  if (!bVar3) {
    auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0x100));
    auVar14 = _vsub(auVar12,auVar13);
    auVar12 = _vmul(auVar14,auVar14);
    auStack_4a0._8_4_ = uVar9;
    auStack_4a0._0_8_ = uVar5;
    auStack_4a0._12_4_ = uVar10;
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar7,auVar12);
    auStack_460 = _sqc2(auVar13);
    auStack_420 = _sqc2(auVar13);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar12);
    uVar9 = _vwaitq();
    auVar14 = _vmulq(auVar14,uVar9);
    auVar12 = _qmtc2(uStack_100);
    _vopmula(auVar12,auVar14);
    auVar12 = _vopmsub(auVar14,auVar12);
    auStack_4b0 = _sqc2(auVar14);
    auVar13 = _vmul(auVar12,auVar12);
    _sqc2(auVar12);
    _vaddabc(auVar13,auVar13);
    auVar7 = _vmaddbc(auVar7,auVar13);
    auStack_3f0 = _sqc2(auVar14);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    uVar9 = _vwaitq();
    auVar7 = _vmulq(auVar12,uVar9);
    auStack_430 = _sqc2(auVar14);
    _vopmula(auVar14,auVar7);
    auVar12 = _vopmsub(auVar7,auVar14);
    auStack_4d0 = _sqc2(auVar7);
    auStack_4c0 = _sqc2(auVar12);
    auStack_410 = _sqc2(auVar7);
    auStack_400 = _sqc2(auVar12);
    auStack_450 = _sqc2(auVar7);
    auStack_440 = _sqc2(auVar12);
    auStack_490 = _sqc2(auVar7);
    auStack_480 = _sqc2(auVar12);
    auStack_470 = _sqc2(auVar14);
    FUN_001368f0(*(int *)(param_1 + 0x7c),auStack_4d0);
  }
  return bVar3;
}


// ==== FUN_0013eb00 @ 0013eb00 ====

void FUN_0013eb00(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar5 = _vsub(in_vf0,in_vf0);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _pextlw(0,0);
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0x100));
  auVar1 = _pextlw(0x3f800000,auVar1._0_8_);
  _sqc2(auVar2);
  _sqc2(auVar3);
  _sqc2(auVar4);
  _sqc2(auVar5);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  auVar2 = _vsub(auVar2,auVar6);
  uStack_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  uStack_58 = auVar1._8_4_;
  uStack_54 = auVar1._12_4_;
  auVar1 = _vmul(auVar2,auVar2);
  uStack_70 = (undefined4)uStack_20;
  uStack_6c = (undefined4)((ulong)uStack_20 >> 0x20);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar7,auVar1);
  auStack_b0 = _sqc2(auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar1);
  uVar8 = _vwaitq();
  auVar3 = _vmulq(auVar2,uVar8);
  auVar1 = _qmtc2(uStack_60);
  _vopmula(auVar1,auVar3);
  auVar2 = _vopmsub(auVar3,auVar1);
  auStack_c0 = _sqc2(auVar3);
  auVar1 = _vmul(auVar2,auVar2);
  _sqc2(auVar2);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar7,auVar1);
  auStack_30 = _sqc2(auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar1);
  uVar8 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar8);
  auStack_80 = _sqc2(auVar3);
  _vopmula(auVar3,auVar2);
  auVar1 = _vopmsub(auVar2,auVar3);
  auStack_e0 = _sqc2(auVar2);
  auStack_d0 = _sqc2(auVar1);
  auStack_50 = _sqc2(auVar2);
  auStack_40 = _sqc2(auVar1);
  auStack_a0 = _sqc2(auVar2);
  auStack_90 = _sqc2(auVar1);
  FUN_001368f0(*(int *)(param_1 + 0x7c),auStack_e0);
  return;
}


// ==== FUN_0013ec10 @ 0013ec10 ====

void FUN_0013ec10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_0013ed98();
  return;
}


// ==== FUN_0013ec38 @ 0013ec38 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0013ec38(float *param_1,float param_2)

{
  undefined4 uVar1;
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
  undefined4 uVar13;
  
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _sqc2(auVar6);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = param_2;
  FUN_0013ed98();
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _lqc2(*(undefined1 (*) [16])((int)param_1[0x1f] + 0x90));
  auVar12 = _vsubbc(in_vf0,in_vf0);
  auVar9 = _lqc2(_DAT_004432d0);
  auVar7 = _vmul(auVar10,auVar10);
  auVar8 = _vmul(auVar9,auVar9);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar11,auVar7);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar11,auVar8);
  auVar10 = _vmove(auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar10 = _vmulq(auVar10,uVar13);
  _vmulq(auVar7,uVar13);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar8);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  uVar13 = _vwaitq();
  auVar9 = _vmulq(auVar9,uVar13);
  _vmulq(auVar7,uVar13);
  auVar7 = _vmul(auVar10,auVar9);
  auVar8 = _lqc2(auVar6);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar8,auVar7);
  auVar8 = _vmax(auVar7,auVar12);
  auVar7 = _sqc2(auVar10);
  auVar8 = _vminibc(auVar8,in_vf0);
  auVar10 = _qmfc2(auVar8._0_4_);
  auVar8 = _sqc2(auVar9);
  fVar5 = (float)FUN_0029e0d8(auVar10._0_4_);
  auVar8 = _lqc2(auVar8);
  auVar7 = _lqc2(auVar7);
  _vopmula(auVar7,auVar8);
  auVar8 = _vopmsub(auVar8,auVar7);
  auVar7._4_4_ = uVar2;
  auVar7._0_4_ = uVar1;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar4;
  auVar7 = _lqc2(auVar7);
  auVar7 = _vmul(auVar8,auVar7);
  auVar6 = _lqc2(auVar6);
  _vaddabc(auVar7,auVar7);
  auVar6 = _vmaddbc(auVar6,auVar7);
  auVar6 = _qmfc2(auVar6._0_4_);
  fVar5 = fVar5 * 57.29578;
  if (0.0 < auVar6._0_4_) {
    fVar5 = -fVar5;
  }
  param_1[1] = fVar5;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  param_1[0x1d] = 0.0;
  *param_1 = fVar5;
  param_1[2] = fVar5;
  return 1;
}


// ==== FUN_0013ed98 @ 0013ed98 ====

void FUN_0013ed98(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = DAT_004432a4;
  param_1[0x14] = DAT_004432a0;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = DAT_004432a4;
  param_1[0x18] = DAT_004432a0;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  uVar4 = DAT_004432ac;
  uVar3 = DAT_004432a8;
  uVar2 = DAT_004432a4;
  uVar1 = DAT_004432a0;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0x13] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  return;
}


// ==== FUN_0013ee20 @ 0013ee20 ====

void FUN_0013ee20(void)

{
  return;
}


// ==== FUN_0013ee28 @ 0013ee28 ====

undefined4 FUN_0013ee28(void)

{
  return 1;
}


// ==== FUN_0013ee30 @ 0013ee30 ====

void FUN_0013ee30(void)

{
  return;
}


// ==== FUN_0013ee48 @ 0013ee48 ====

void FUN_0013ee48(int param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


// ==== FUN_0013ee68 @ 0013ee68 ====

float FUN_0013ee68(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1 - param_1[1];
  if (fVar2 < -180.0) {
    fVar2 = fVar2 + 360.0;
  }
  else {
    if (fVar2 <= 180.0) {
      fVar1 = param_1[0x1d];
      goto LAB_0013eecc;
    }
    fVar2 = fVar2 - 360.0;
  }
  fVar1 = param_1[0x1d];
LAB_0013eecc:
  if (0.01 < fVar1) {
    fVar2 = fVar2 - 5.0;
  }
  return fVar2;
}


// ==== FUN_0013ef08 @ 0013ef08 ====

undefined4 FUN_0013ef08(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== FUN_0013ef10 @ 0013ef10 ====

void FUN_0013ef10(int param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  uVar1 = (undefined4)((ulong)param_2 >> 0x20);
  *(int *)(param_1 + 0x50) = (int)param_2;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x5c) = in_register_0000005c;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x60) = (int)param_2;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x68) = in_a1_udw;
    *(undefined4 *)(param_1 + 0x6c) = in_register_0000005c;
  }
  return;
}


// ==== FUN_0013ef28 @ 0013ef28 ====

undefined4 FUN_0013ef28(int param_1)

{
  undefined4 uVar1;
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
  undefined4 uVar13;
  
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar1 = DAT_004432c4;
  uVar4 = DAT_004432c0;
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vmove(auVar7);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (auVar6._0_4_ < 2.3283064e-10) {
    uVar4 = *(undefined4 *)(param_1 + 0x70);
  }
  else {
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _sqc2(auVar6);
    auVar12 = _vsubbc(in_vf0,in_vf0);
    auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0x90));
    auVar11 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
    auVar8 = _vmul(auVar10,auVar10);
    auVar7 = _vmul(auVar11,auVar11);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar9,auVar8);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar9,auVar7);
    auVar9 = _vmove(auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar10 = _vmulq(auVar11,uVar13);
    _vmulq(auVar7,uVar13);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar8 = _vmulq(auVar9,uVar13);
    _vmulq(auVar7,uVar13);
    auVar7 = _vmul(auVar8,auVar10);
    auVar9 = _lqc2(auVar6);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar9,auVar7);
    auVar9 = _vmax(auVar7,auVar12);
    auVar7 = _sqc2(auVar8);
    auVar9 = _vminibc(auVar9,in_vf0);
    auVar8 = _qmfc2(auVar9._0_4_);
    auVar9 = _sqc2(auVar10);
    fVar5 = (float)FUN_0029e0d8(auVar8._0_4_);
    auVar9 = _lqc2(auVar9);
    auVar7 = _lqc2(auVar7);
    _vopmula(auVar7,auVar9);
    auVar9 = _vopmsub(auVar9,auVar7);
    auVar7._4_4_ = uVar1;
    auVar7._0_4_ = uVar4;
    auVar7._8_4_ = uVar2;
    auVar7._12_4_ = uVar3;
    auVar7 = _lqc2(auVar7);
    auVar7 = _vmul(auVar9,auVar7);
    auVar6 = _lqc2(auVar6);
    _vaddabc(auVar7,auVar7);
    auVar6 = _vmaddbc(auVar6,auVar7);
    auVar6 = _qmfc2(auVar6._0_4_);
    fVar5 = fVar5 * 57.29578;
    if (0.0 < auVar6._0_4_) {
      fVar5 = -fVar5;
    }
    *(float *)(param_1 + 0x70) = fVar5;
    uVar4 = *(undefined4 *)(param_1 + 0x70);
  }
  return uVar4;
}


// ==== FUN_0013f0a8 @ 0013f0a8 ====

void FUN_0013f0a8(undefined8 param_1)

{
  FUN_0013ec10(param_1,0);
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  return;
}


// ==== FUN_0013f0d8 @ 0013f0d8 ====

undefined4 FUN_0013f0d8(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x9d) == '\0') {
    FUN_0013ec38(param_1,param_3);
    uVar1 = *(undefined4 *)(DAT_0040f0e0 + 0x21060 + param_2 * 0xc);
    *(undefined1 *)(iVar2 + 0x9d) = 1;
    *(undefined4 *)(iVar2 + 0x98) = uVar1;
    *(char *)(iVar2 + 0x9c) = param_2;
  }
  return 1;
}


// ==== FUN_0013f160 @ 0013f160 ====

void FUN_0013f160(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00124840(*(undefined4 *)(param_1 + 0x98),1);
  if (fVar2 == 0.0) {
    fVar2 = (float)FUN_00124840(*(undefined4 *)(param_1 + 0x98),2);
    uVar1 = *(undefined4 *)(param_1 + 0x98);
    if (fVar2 == 0.0) goto LAB_0013f1f8;
    fVar2 = (float)FUN_00124840(uVar1,2);
    fVar2 = *(float *)(param_1 + 0x90) - fVar2 * *(float *)(DAT_0040f4d0 + 0x1c);
  }
  else {
    fVar2 = (float)FUN_00124840(*(undefined4 *)(param_1 + 0x98),1);
    fVar2 = *(float *)(param_1 + 0x90) + fVar2 * *(float *)(DAT_0040f4d0 + 0x1c);
  }
  *(float *)(param_1 + 0x90) = fVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x98);
LAB_0013f1f8:
  fVar2 = (float)FUN_00124840(uVar1,3);
  if (fVar2 == 0.0) {
    fVar2 = (float)FUN_00124840(*(undefined4 *)(param_1 + 0x98),4);
    if (fVar2 == 0.0) {
      return;
    }
    fVar2 = (float)FUN_00124840(*(undefined4 *)(param_1 + 0x98),4);
    fVar2 = *(float *)(param_1 + 0x94) - fVar2 * *(float *)(DAT_0040f4d0 + 0x1c);
  }
  else {
    fVar2 = (float)FUN_00124840(*(undefined4 *)(param_1 + 0x98),3);
    fVar2 = *(float *)(param_1 + 0x94) + fVar2 * *(float *)(DAT_0040f4d0 + 0x1c);
  }
  *(float *)(param_1 + 0x94) = fVar2;
  return;
}


// ==== FUN_0013f298 @ 0013f298 ====

undefined4 FUN_0013f298(int param_1)

{
  FUN_0013ee28();
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return 1;
}


// ==== FUN_0013f2c8 @ 0013f2c8 ====

void FUN_0013f2c8(void)

{
  FUN_0013ee30();
  return;
}


// ==== FUN_0013f328 @ 0013f328 ====

void FUN_0013f328(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_0013ec10(param_1,0);
  iVar5 = (int)param_1;
  *(undefined4 *)(iVar5 + 0x98) = 0;
  *(undefined1 *)(iVar5 + 0xf0) = 0;
  *(undefined1 *)(iVar5 + 0xf1) = 0;
  *(undefined1 *)(iVar5 + 0xf9) = 0;
  *(undefined1 *)(iVar5 + 0xf6) = 0;
  *(undefined1 *)(iVar5 + 0xf7) = 0;
  *(undefined4 *)(iVar5 + 0xd8) = 0;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = DAT_004432a4;
  *(undefined4 *)(iVar5 + 0xe0) = DAT_004432a0;
  *(undefined4 *)(iVar5 + 0xe4) = uVar1;
  *(undefined4 *)(iVar5 + 0xe8) = uVar2;
  *(undefined4 *)(iVar5 + 0xec) = uVar3;
  uVar4 = DAT_004432ac;
  uVar3 = DAT_004432a8;
  uVar2 = DAT_004432a4;
  uVar1 = DAT_004432a0;
  *(undefined4 *)(iVar5 + 0xbc) = 0x3f000000;
  *(undefined4 *)(iVar5 + 0x110) = uVar1;
  *(undefined4 *)(iVar5 + 0x114) = uVar2;
  *(undefined4 *)(iVar5 + 0x118) = uVar3;
  *(undefined4 *)(iVar5 + 0x11c) = uVar4;
  *(undefined1 *)(iVar5 + 0xdc) = 0xff;
  *(undefined4 *)(iVar5 + 0xa8) = 0x428c0000;
  *(undefined4 *)(iVar5 + 0xac) = 0x41c80000;
  *(undefined4 *)(iVar5 + 0xb8) = 0x40400000;
  *(undefined4 *)(iVar5 + 0x108) = 0;
  *(undefined1 *)(iVar5 + 0x120) = 0;
  *(undefined4 *)(iVar5 + 0xc0) = 0;
  *(undefined4 *)(iVar5 + 0xc4) = 0;
  *(undefined4 *)(iVar5 + 0x90) = 0;
  *(undefined4 *)(iVar5 + 0x94) = 0;
  *(undefined4 *)(iVar5 + 0xb0) = 0x3f000000;
  *(undefined4 *)(iVar5 + 0xb4) = 0x3f000000;
  return;
}


// ==== FUN_0013f3e0 @ 0013f3e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "Max Hold Modifier Increment"
     "Controls_PS2"
     "../Export/ValueDB/Controls/Controls_PS2.cfg"
     "Max Hold Modifier"
     "Analogue Control Power"
     "Percentage Catch Up" */

undefined4 FUN_0013f3e0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x120) == '\0') {
    FUN_0013ec38(param_1,param_3);
    uVar3 = DAT_004432ac;
    uVar1 = DAT_004432a8;
    uVar2 = _DAT_004432a0;
    *(undefined4 *)(iVar4 + 0x108) = 0;
    *(int *)(iVar4 + 0x110) = (int)uVar2;
    *(int *)(iVar4 + 0x114) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(iVar4 + 0x118) = uVar1;
    *(undefined4 *)(iVar4 + 0x11c) = uVar3;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    *(undefined4 *)(iVar4 + 0xc4) = 0;
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined4 *)(iVar4 + 0x94) = 0;
    uVar3 = DAT_004432ac;
    uVar1 = DAT_004432a8;
    uVar2 = _DAT_004432a0;
    *(undefined4 *)(iVar4 + 200) = 0;
    *(int *)(iVar4 + 0xe0) = (int)uVar2;
    *(int *)(iVar4 + 0xe4) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(iVar4 + 0xe8) = uVar1;
    *(undefined4 *)(iVar4 + 0xec) = uVar3;
    *(undefined4 *)(iVar4 + 0xcc) = 0;
    *(undefined4 *)(iVar4 + 0xd0) = 0;
    *(undefined4 *)(iVar4 + 0xd4) = 0;
    *(undefined4 *)(iVar4 + 0xd8) = 0;
    *(undefined1 *)(iVar4 + 0xf1) = *(undefined1 *)(DAT_0040f0e0 + 0x20167);
    *(undefined1 *)(iVar4 + 0xf2) = *(undefined1 *)(DAT_0040f0e0 + 0x20165);
    *(undefined1 *)(iVar4 + 0xf3) = *(undefined1 *)(DAT_0040f0e0 + 0x20166);
    *(bool *)(DAT_0040f0e8 + (char)param_2 + 0x77c) = *(char *)(DAT_0040f0e0 + 0x20168) != '\0';
    *(undefined1 *)(iVar4 + 0xf4) = 0;
    *(undefined1 *)(iVar4 + 0xf5) = 0;
    *(undefined1 *)(iVar4 + 0xf6) = 0;
    *(undefined1 *)(iVar4 + 0xf7) = 0;
    *(undefined1 *)(iVar4 + 0xfa) = 0;
    *(undefined1 *)(iVar4 + 0xfb) = 0;
    *(undefined1 *)(iVar4 + 0xfc) = 0;
    uVar1 = *(undefined4 *)(DAT_0040f0e0 + param_2 * 0xc + 0x21060);
    *(undefined4 *)(iVar4 + 0x100) = 0;
    *(undefined4 *)(iVar4 + 0x98) = uVar1;
    if (*(char *)(iVar4 + 0xf9) == '\0') {
      FUN_0027b950(0,0,DAT_003c09e8 + 4,iVar4 + 0xb0,0x3f4a08,0x3f4a28,0x3f4a38,0,0);
      FUN_0027b950(0,0,DAT_003c09e8 + 4,iVar4 + 0xb4,0x3f4a68,0x3f4a28,0x3f4a38,0,0);
      FUN_0027b950(0,0,DAT_003c09e8 + 4,iVar4 + 0xb8,0x3f4a80,0x3f4a28,0x3f4a38,0,0);
      FUN_0027b950(0,0,DAT_003c09e8 + 4,iVar4 + 0xbc,0x3f4a98,0x3f4a28,0x3f4a38,0,0);
      *(undefined1 *)(iVar4 + 0xf9) = 1;
    }
    *(undefined1 *)(iVar4 + 0x120) = 1;
    *(undefined4 *)(iVar4 + 0x104) = 0;
  }
  return 1;
}


// ==== FUN_0013f618 @ 0013f618 ====

/* Strings referenciadas:
     "sniper_SetMaxZoom"
     "sniper_SetMinZoom" */

void FUN_0013f618(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_90;
  float afStack_8c [3];
  
  iVar13 = (int)param_1;
  iVar12 = *(int *)(iVar13 + 0x7c);
  iVar1 = *(int *)(iVar12 + 0x2a4);
  if (*(char *)(DAT_0040f4bc + 0x7e1) == '\0') {
    fVar14 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),8);
    fVar15 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),7);
    *(float *)(iVar13 + 0xcc) = fVar14 - fVar15;
    fVar14 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),5);
    afStack_8c[0] = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),6);
    afStack_8c[0] = fVar14 - afStack_8c[0];
    fStack_90 = *(float *)(iVar13 + 0xcc);
    *(float *)(iVar13 + 200) = afStack_8c[0];
    if (*(char *)(iVar13 + 0xf1) == '\0') {
      *(float *)(iVar13 + 0xcc) = -fStack_90;
    }
    fVar14 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),1);
    fVar15 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),2);
    *(float *)(iVar13 + 0xd4) = fVar14 - fVar15;
    fVar15 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),4);
    fVar14 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),3);
    fVar15 = fVar15 - fVar14;
    fVar14 = ABS(afStack_8c[0]);
    fVar16 = ABS(fStack_90);
    fVar19 = *(float *)(iVar13 + 0xd4);
    fVar18 = ABS(fVar15);
    *(float *)(iVar13 + 0xd0) = fVar15;
    if (*(char *)(iVar13 + 0xf2) == '\0') {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0xc);
      *(bool *)(iVar13 + 0x30) = 0.0 < fVar17;
      FUN_001f2cd0(DAT_0040f51c,*(undefined1 *)(iVar13 + 0x30));
    }
    else {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0xc);
      if (0.0 < fVar17) {
        if (*(char *)(iVar13 + 0xf5) == '\0') {
          bVar5 = *(byte *)(iVar13 + 0x30) ^ 1;
          *(byte *)(iVar13 + 0x30) = bVar5;
          FUN_001f2cd0(DAT_0040f51c,bVar5);
        }
        *(undefined1 *)(iVar13 + 0xf5) = 1;
      }
      else {
        *(undefined1 *)(iVar13 + 0xf5) = 0;
      }
    }
    cVar8 = *(char *)(*(int *)(iVar1 + 0xec) + 0xc0);
    if (cVar8 == '\0') {
      cVar6 = *(char *)(iVar13 + 0xf3);
    }
    else {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x23);
      if (0.0 < fVar17) {
        if (*(char *)(iVar1 + 0x102) == '\x01') {
          *(undefined1 *)(iVar1 + 0x102) = 2;
          DAT_003bceb4 = DAT_003bceb4 + 1;
          FUN_0021a7e0(0x3f4ab0,0,DAT_0040f544 + 0x38dd,0);
          cVar6 = *(char *)(iVar13 + 0xf3);
        }
        else {
          if (*(char *)(iVar1 + 0x102) == '\x02') {
            *(undefined1 *)(iVar1 + 0x102) = 1;
            DAT_003bceb4 = DAT_003bceb4 + -1;
            FUN_0021a7e0(0x3f4ac8,0,DAT_0040f544 + 0x38dd,0);
            goto LAB_0013f8a4;
          }
          cVar6 = *(char *)(iVar13 + 0xf3);
        }
      }
      else {
LAB_0013f8a4:
        cVar6 = *(char *)(iVar13 + 0xf3);
      }
    }
    if ((cVar6 == '\0') && (cVar8 == '\0')) {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x10);
      *(bool *)(iVar13 + 0x35) = 0.0 < fVar17;
    }
    else {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x10);
      if (0.0 < fVar17) {
        if (*(char *)(iVar13 + 0xf4) == '\0') {
          *(byte *)(iVar13 + 0x35) = *(byte *)(iVar13 + 0x35) ^ 1;
        }
        *(undefined1 *)(iVar13 + 0xf4) = 1;
      }
      else {
        *(undefined1 *)(iVar13 + 0xf4) = 0;
      }
    }
    uVar11 = *(undefined4 *)(iVar13 + 0x98);
    if (cVar8 == '\0') {
      fVar17 = (float)FUN_00124840(uVar11,0x1e);
      if (0.0 < fVar17) {
        if (*(char *)(iVar13 + 0xf6) != '\0') {
          uVar11 = *(undefined4 *)(iVar13 + 0x98);
          goto LAB_0013f96c;
        }
        FUN_00156d80(iVar1);
        *(undefined1 *)(iVar13 + 0xf6) = 1;
      }
      else {
        *(undefined1 *)(iVar13 + 0xf6) = 0;
      }
      uVar11 = *(undefined4 *)(iVar13 + 0x98);
    }
LAB_0013f96c:
    fVar17 = (float)FUN_00124840(uVar11,0xd);
    if (0.0 < fVar17) {
      if (*(char *)(iVar13 + 0xfb) == '\0') {
        if (*(int *)(DAT_0040f4e4 + 0x5848) == 0) {
          uVar7 = 0xff;
        }
        else {
          uVar7 = *(undefined1 *)
                   ((uint)*(byte *)(*(int *)(DAT_0040f4e4 + 0x5848) + 0x148) * 0x18 +
                    *(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 8) + 0x10);
        }
        lVar9 = FUN_0015d2e8(DAT_0040f4e0,uVar7);
        if ((lVar9 != 0) &&
           (lVar9 = FUN_0015c920(*(int *)(iVar13 + 0x7c) + 0x280,uVar7), lVar9 != 0)) {
          FUN_0015c1a8(*(int *)(iVar13 + 0x7c) + 0x280,1);
          *(undefined1 *)(iVar13 + 0xfb) = 1;
          *(undefined1 *)(iVar13 + 0xfc) = 1;
        }
LAB_0013fa40:
        cVar8 = *(char *)(iVar13 + 0xfa);
      }
      else {
        cVar8 = *(char *)(iVar13 + 0xfa);
      }
    }
    else if (*(char *)(iVar13 + 0xfc) == '\0') {
      cVar8 = *(char *)(iVar13 + 0xfa);
    }
    else {
      if (*(int *)(*(int *)(*(int *)(iVar13 + 0x7c) + 0x2a4) + 0xd8) == 0) {
        *(undefined1 *)(iVar13 + 0xfc) = 0;
        *(undefined1 *)(iVar13 + 0xfb) = 0;
        goto LAB_0013fa40;
      }
      cVar8 = *(char *)(iVar13 + 0xfa);
    }
    if (cVar8 == '\0') {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),9);
      *(bool *)(iVar13 + 0x31) = 0.0 < fVar17;
    }
    else {
      *(undefined1 *)(iVar13 + 0x31) = 0;
    }
    fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x20);
    *(bool *)(iVar13 + 0x3b) = 0.0 < fVar17;
    if (*(char *)(iVar13 + 0xfa) == '\0') {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x1b);
      *(bool *)(iVar13 + 0x33) = 0.0 < fVar17;
    }
    else {
      *(undefined1 *)(iVar13 + 0x33) = 0;
    }
    if (*(int *)(*(int *)(*(int *)(iVar1 + 0xe8) + 8) + 0xa0) == 0) {
      uVar11 = *(undefined4 *)(iVar13 + 0x98);
    }
    else {
      if (*(char *)(iVar13 + 0x33) == '\0') {
        *(undefined1 *)(iVar13 + 0x32) = 0;
      }
      else {
        *(undefined1 *)(iVar13 + 0x33) = 0;
        *(undefined1 *)(iVar13 + 0x32) = 1;
      }
      uVar11 = *(undefined4 *)(iVar13 + 0x98);
    }
    fVar17 = (float)FUN_00124840(uVar11,0xb);
    *(bool *)(iVar13 + 0x34) = 0.0 < fVar17;
    fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0xe);
    if (0.0 < fVar17) {
      FUN_0015be08(*(int *)(iVar13 + 0x7c) + 0x280);
      uVar11 = *(undefined4 *)(iVar13 + 0x98);
    }
    else {
      fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0xf);
      if (0.0 < fVar17) {
        FUN_0015be08(*(int *)(iVar13 + 0x7c) + 0x280);
        uVar11 = *(undefined4 *)(iVar13 + 0x98);
      }
      else {
        uVar11 = *(undefined4 *)(iVar13 + 0x98);
      }
    }
    fVar17 = (float)FUN_00124840(uVar11,0x1f);
    if (0.0 < fVar17) {
      if (*(char *)(iVar13 + 0xf7) == '\0') {
        FUN_00156e90(iVar1);
      }
      *(undefined1 *)(iVar13 + 0xf7) = 1;
    }
    else {
      *(undefined1 *)(iVar13 + 0xf7) = 0;
    }
    fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x21);
    if (0.0 < fVar17) {
      if (*(char *)(iVar13 + 0xf8) == '\0') {
        FUN_0013c9d8(iVar12,0);
      }
      *(undefined1 *)(iVar13 + 0xf8) = 1;
    }
    else {
      *(undefined1 *)(iVar13 + 0xf8) = 0;
    }
    if (0 < *(int *)(iVar13 + 0x104)) {
      *(int *)(iVar13 + 0x104) = *(int *)(iVar13 + 0x104) + -1;
    }
    fVar17 = (float)FUN_00124840(*(undefined4 *)(iVar13 + 0x98),0x22);
    if ((0.0 < fVar17) && (*(int *)(iVar13 + 0x104) == 0)) {
      FUN_001d8df0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34));
      *(undefined4 *)(iVar13 + 0x104) = 10;
    }
    if (fVar16 + fVar14 + ABS(fVar19) + fVar18 < 3.0517578e-05) {
      if (*(char *)(iVar13 + 0x31) != '\0') {
        iVar12 = *(int *)(iVar13 + 0x7c);
        goto LAB_0013fc80;
      }
      *(undefined4 *)(iVar13 + 0xc0) = 0;
      *(undefined4 *)(iVar13 + 0xc4) = 0;
      *(undefined4 *)(iVar13 + 0x90) = 0;
      *(undefined4 *)(iVar13 + 0x94) = 0;
      cVar8 = *(char *)(iVar13 + 0xf1);
    }
    else {
      iVar12 = *(int *)(iVar13 + 0x7c);
LAB_0013fc80:
      uVar4 = *(undefined8 *)(iVar12 + 0xf0);
      uVar10 = *(undefined8 *)(iVar12 + 0x100);
      iVar12 = *(int *)(iVar1 + 4);
      if (iVar12 == 0) {
LAB_0013fcd8:
        *(undefined4 *)(iVar13 + 0x9c) = 0;
      }
      else if (*(int *)(iVar12 + 0xc4) == 1) {
        if (*(int *)(iVar12 + 0x3a4) != 0) {
          *(undefined4 *)(iVar13 + 0xc4) = 0;
          *(undefined4 *)(iVar13 + 0xc0) = 0;
          goto LAB_0013fcd8;
        }
        *(undefined4 *)(iVar13 + 0x9c) = 0;
      }
      else {
        *(undefined4 *)(iVar13 + 0x9c) = 0;
      }
      FUN_0012bb60(0x41f00000,0x40400000,DAT_0040f4d0,uVar10,uVar4,4,0x1409c0);
      FUN_001407c8(param_1,&fStack_90,afStack_8c);
      cVar8 = *(char *)(iVar13 + 0xf1);
    }
    if (cVar8 == '\0') {
      FUN_001404a8(fStack_90,afStack_8c[0],param_1);
      fVar14 = *(float *)(iVar13 + 0xc);
    }
    else {
      FUN_001404a8(-fStack_90,afStack_8c[0],param_1);
      fVar14 = *(float *)(iVar13 + 0xc);
    }
    if (fVar14 == 70.0) {
      *(undefined4 *)(iVar13 + 0xcc) = 0;
LAB_0013fda0:
      cVar8 = *(char *)(iVar13 + 0xfa);
    }
    else {
      if (fVar14 == -70.0) {
        *(undefined4 *)(iVar13 + 0xcc) = 0;
        goto LAB_0013fda0;
      }
      cVar8 = *(char *)(iVar13 + 0xfa);
    }
    if (cVar8 == '\0') {
      FUN_00140068(fVar19,fVar15,param_1);
    }
    else {
      FUN_00140068(0,0,param_1);
    }
  }
  bVar3 = false;
  if (cGpffff81bf != '\0') {
    if (0.1 < ABS(*(float *)(iVar13 + 0xd4))) {
      bVar3 = true;
    }
    else {
      if (ABS(*(float *)(iVar13 + 0xd0)) <= 0.1) {
        iVar12 = *(int *)(iVar13 + 0x7c);
        goto LAB_0013fe20;
      }
      bVar3 = true;
    }
  }
  iVar12 = *(int *)(iVar13 + 0x7c);
LAB_0013fe20:
  bVar2 = false;
  if (*(int *)(iVar12 + 0x2a4) != 0) {
    bVar2 = *(char *)(*(int *)(iVar12 + 0x2a4) + 0x10b) != '\0';
  }
  iVar12 = *(int *)(iVar13 + 0x98);
  uVar10 = FUN_001249f8(iVar12,9);
  cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
  if (cVar8 == '\0') {
    iVar12 = *(int *)(iVar13 + 0x98);
    uVar10 = FUN_001249f8(iVar12,10);
    cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
    if (cVar8 == '\0') {
      iVar12 = *(int *)(iVar13 + 0x98);
      uVar10 = FUN_001249f8(iVar12,0x20);
      cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
      if (cVar8 == '\0') {
        iVar12 = *(int *)(iVar13 + 0x98);
        uVar10 = FUN_001249f8(iVar12,0x1b);
        cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
        if (cVar8 == '\0') {
          iVar12 = *(int *)(iVar13 + 0x98);
          uVar10 = FUN_001249f8(iVar12,0xe);
          cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
          if (cVar8 == '\0') {
            iVar12 = *(int *)(iVar13 + 0x98);
            uVar10 = FUN_001249f8(iVar12,0xf);
            cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
            if (cVar8 == '\0') {
              iVar12 = *(int *)(iVar13 + 0x98);
              uVar10 = FUN_001249f8(iVar12,0xd);
              cVar8 = FUN_0026bbc0(*(undefined4 *)(iVar12 + 0xc),uVar10);
              if (((cVar8 == '\0') && (!bVar3)) && (!bVar2)) {
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_001c27d0(DAT_0040f4d8 + 0x83ca0);
  return;
}


// ==== FUN_0013ffa0 @ 0013ffa0 ====

void FUN_0013ffa0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 == 5) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x100) < 1) {
      FUN_001354e0(iVar1,iVar1 + 0x620,param_4);
      FUN_00135b80(*(undefined4 *)(param_1 + 0x7c),2);
    }
    else {
      FUN_0011a890(DAT_0040f530,iVar1);
    }
  }
  return;
}


// ==== FUN_00140008 @ 00140008 ====

bool FUN_00140008(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0013ee28();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return lVar1 != 0;
}


// ==== FUN_00140048 @ 00140048 ====

void FUN_00140048(void)

{
  FUN_0013ee30();
  return;
}


// ==== FUN_00140068 @ 00140068 ====

void FUN_00140068(float param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(char *)(*(int *)(*(int *)(param_3 + 0x7c) + 0x2a4) + 0x106) == '\0') {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVar10 = 0x40c00000;
      uVar4 = 0x40b00000;
      fVar3 = 4.5;
      uVar5 = 0x40c00000;
    }
    else {
      uVar4 = 0x40400000;
      uVar5 = 0x3f800000;
      fVar3 = 2.0;
      uVar10 = 0x40400000;
    }
  }
  else {
    uVar4 = 0x40900000;
    uVar5 = 0x40400000;
    fVar3 = 3.25;
    uVar10 = uVar4;
  }
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vmove(auVar6);
  auVar2 = _pextlw((long)(int)param_1,(long)param_2);
  auVar2 = _pextlw(0,auVar2._0_8_);
  auVar7 = _qmtc2(auVar2._0_4_);
  auVar2 = _vmul(auVar7,auVar7);
  _vaddabc(auVar2,auVar2);
  auVar6 = _vmaddbc(auVar6,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar6);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar9 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar9);
  auVar2 = _qmfc2(auVar2._0_4_);
  if (1.0 < auVar2._0_4_) {
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    uVar9 = _vwaitq();
    auVar7 = _vmulq(auVar7,uVar9);
  }
  auVar2 = _qmtc2(uVar5);
  auVar2 = _vmulbc(auVar7,auVar2);
  auVar6 = _qmtc2(*(float *)(DAT_0040f4d0 + 0x514) * 0.3 + 1.0);
  auVar2 = _vmulbc(auVar2,auVar6);
  auVar2 = _vaddbc(in_vf0,auVar2);
  if (0.0 < param_1) {
    auVar7 = _qmtc2(uVar10);
  }
  else {
    auVar7 = _qmtc2(uVar4);
  }
  auVar2 = _vmulbc(auVar2,auVar7);
  auVar2 = _vmulbc(auVar2,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar2);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xe0));
  auVar6 = _vsub(auVar6,auVar2);
  auVar7 = _vmove(auVar6);
  auVar2 = _vmul(auVar7,auVar7);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar8,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  if (auVar2._0_4_ < 2.3283064e-10) {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xe0));
  }
  else {
    auVar2 = _vmul(auVar6,auVar6);
    auVar6 = _vmove(auVar6);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar8,auVar2);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    auVar2 = _qmtc2(SQRT(auVar2._0_4_));
    uVar10 = _vwaitq();
    auVar6 = _vmulq(auVar6,uVar10);
    auVar2 = _qmfc2(auVar2._0_4_);
    if (auVar2._0_4_ < 0.8) {
      auVar2 = _qmtc2(auVar2._0_4_);
    }
    else {
      auVar2 = _qmtc2(0x3f4ccccd);
    }
    auVar7 = _vmulbc(auVar6,auVar2);
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xe0));
  }
  auVar6 = _vadd(auVar2,auVar7);
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_3 + 0xe0) = auVar2;
  auVar2 = _vmul(auVar6,auVar6);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar8,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar10 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar10);
  auVar2 = _qmfc2(auVar2._0_4_);
  fVar3 = *(float *)(DAT_0040f4d0 + 0x514) * 0.3 * fVar3 + fVar3;
  if (fVar3 < auVar2._0_4_) {
    auVar2 = _qmtc2(fVar3 / auVar2._0_4_);
    auVar2 = _vmulbc(auVar6,auVar2);
    auVar2 = _sqc2(auVar2);
    *(undefined1 (*) [16])(param_3 + 0xe0) = auVar2;
    iVar1 = *(int *)(param_3 + 0x7c);
  }
  else {
    iVar1 = *(int *)(param_3 + 0x7c);
  }
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xe0));
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar6 = _vmulbc(auVar2,auVar7);
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar2;
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar2 = _vmulbc(auVar2,auVar7);
  auVar6 = _vmove(auVar6);
  auVar6 = _vsub(auVar6,auVar2);
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar2;
  if (DAT_0040d9ac == '\0') {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x50));
  }
  else if (0.05 < *(float *)(param_3 + 0x108)) {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x110));
    fVar3 = *(float *)(param_3 + 0x108) - 0.2;
    auVar7 = _qmtc2(fVar3);
    auVar2 = _vmulbc(auVar2,auVar7);
    auVar2 = _vadd(auVar6,auVar2);
    *(float *)(param_3 + 0x108) = fVar3;
    auVar2 = _sqc2(auVar2);
    *(undefined1 (*) [16])(param_3 + 0x50) = auVar2;
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x50));
  }
  else {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x50));
  }
  auVar6 = _vmul(auVar2,auVar2);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (auVar6._0_4_ < 2.3283064e-10) {
    *(undefined4 *)(param_3 + 0x10) = 0;
  }
  else {
    auVar2 = _vmul(auVar2,auVar2);
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x50));
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar8,auVar2);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    auVar7 = _qmtc2(SQRT(auVar2._0_4_));
    uVar10 = _vwaitq();
    auVar2 = _vmulq(auVar6,uVar10);
    auVar6 = _qmfc2(auVar7._0_4_);
    auVar2 = _sqc2(auVar2);
    *(undefined1 (*) [16])(param_3 + 0x50) = auVar2;
    *(int *)(param_3 + 0x10) = auVar6._0_4_;
  }
  return;
}


// ==== FUN_00140468 @ 00140468 ====

void FUN_00140468(int param_1,undefined8 param_2,long param_3)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  if (param_3 == 0) {
    if (DAT_0040d9ad == '\0') {
      return;
    }
  }
  else if (DAT_0040d9ae == '\0') {
    return;
  }
  *(int *)(param_1 + 0x110) = (int)param_2;
  *(int *)(param_1 + 0x114) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x118) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x11c) = in_register_0000005c;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  return;
}


// ==== FUN_001404a8 @ 001404a8 ====

void FUN_001404a8(float param_1,float param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = 1.0 / ((*(float *)(param_3[0x1f] + 0x2ac) - 1.0) * 0.8 + 1.0);
  if (0.95 < param_2 * param_2 + param_1 * param_1) {
    fVar1 = (float)param_3[0x2c] * ABS(param_2) * *(float *)(DAT_0040f4d0 + 0x1c);
    if ((float)param_3[0x30] < (float)param_3[0x2d] - fVar1) {
      param_3[0x30] = (float)param_3[0x30] + fVar1;
    }
    else {
      param_3[0x30] = param_3[0x2d];
    }
    if (0.0 < param_2) {
      param_2 = param_2 + (float)param_3[0x30];
    }
    else {
      param_2 = param_2 - (float)param_3[0x30];
    }
    fVar1 = (float)param_3[0x2c] * ABS(param_1) * *(float *)(DAT_0040f4d0 + 0x1c);
    if ((float)param_3[0x31] < (float)param_3[0x2d] - fVar1) {
      param_3[0x31] = (float)param_3[0x31] + fVar1;
    }
    else {
      param_3[0x31] = param_3[0x2d];
    }
    if (0.0 < param_1) {
      param_1 = param_1 + (float)param_3[0x31];
    }
    else {
      param_1 = param_1 - (float)param_3[0x31];
    }
  }
  else {
    param_3[0x30] = 0;
    param_3[0x31] = 0;
  }
  if (*(char *)(*(int *)(param_3[0x1f] + 0x2a4) + 0x105) != '\0') {
    param_2 = param_2 * 0.7;
    param_1 = param_1 * 0.7;
  }
  if (param_2 < 0.0) {
    fVar1 = (float)FUN_0029e688(param_2,param_3[0x2e]);
    fVar1 = -ABS(fVar1);
  }
  else {
    fVar1 = (float)FUN_0029e688(param_2,param_3[0x2e]);
    fVar1 = ABS(fVar1);
  }
  if (param_1 < 0.0) {
    fVar2 = (float)FUN_0029e688(param_1,param_3[0x2e]);
    fVar2 = -ABS(fVar2);
  }
  else {
    fVar2 = (float)FUN_0029e688(param_1,param_3[0x2e]);
    fVar2 = ABS(fVar2);
  }
  fVar1 = (float)param_3[0x25] + (fVar1 - (float)param_3[0x25]) * (float)param_3[0x2f];
  fVar2 = (float)param_3[0x24] + (fVar2 - (float)param_3[0x24]) * (float)param_3[0x2f];
  param_3[0x25] = fVar1;
  param_3[0x24] = fVar2;
  param_3[2] = (float)param_3[2] +
               fVar1 * (float)param_3[0x2a] * *(float *)(DAT_0040f4d0 + 0x1c) * fVar4;
  fVar4 = (float)param_3[3] + fVar2 * (float)param_3[0x2b] * *(float *)(DAT_0040f4d0 + 0x1c) * fVar4
  ;
  param_3[3] = fVar4;
  if (70.0 < fVar4) {
    param_3[3] = 0x428c0000;
  }
  if ((float)param_3[3] < -70.0) {
    param_3[3] = 0xc28c0000;
  }
  fVar4 = (float)param_3[2];
  if (fVar4 < -180.0) {
    fVar4 = fVar4 + 360.0;
  }
  else {
    if (fVar4 <= 180.0) {
      uVar3 = param_3[2];
      goto LAB_001407a4;
    }
    fVar4 = fVar4 - 360.0;
  }
  param_3[2] = fVar4;
  uVar3 = param_3[2];
LAB_001407a4:
  *param_3 = uVar3;
  return;
}


// ==== FUN_001407c8 @ 001407c8 ====

void FUN_001407c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uStack_4c;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    auVar5 = *(undefined1 (*) [16])(iVar1 + 0xd0);
    auVar9 = *(undefined1 (*) [16])(iVar1 + 0xe0);
    auVar8 = *(undefined1 (*) [16])(iVar1 + 0xf0);
    auVar14 = *(undefined1 (*) [16])(iVar1 + 0x100);
    uVar2 = FUN_00136dc0();
    auVar13 = _qmtc2(uVar2);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _lqc2(auVar8);
    auVar4 = _vmul(auVar6,auVar13);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar7,auVar4);
    auVar4 = _vmulbc(auVar6,auVar4);
    auVar4 = _vadd(auVar4,auVar13);
    fVar3 = 1.0 - *(float *)(param_1 + 0xa4) * 0.033333335;
    auVar4 = _sqc2(auVar4);
    uVar2 = FUN_00136dc0(*(undefined4 *)(param_1 + 0x7c));
    auVar6 = _qmtc2(uVar2);
    auVar7 = _qmtc2(0x3f99999a);
    auVar7 = _vmulbc(auVar6,auVar7);
    auVar6 = _lqc2(auVar5);
    auVar8 = _lqc2(auVar8);
    auVar13 = _qmtc2(0x3f333333);
    auVar5 = _lqc2(auVar9);
    _vmove(auVar6);
    _vmove(auVar8);
    auVar10 = _vaddbc(in_vf0,auVar5);
    _vmove(auVar5);
    auVar12 = _vaddbc(in_vf0,auVar6);
    auVar11 = _vaddbc(in_vf0,auVar6);
    auVar9 = _vmulbc(auVar7,auVar13);
    _vmove(auVar12);
    _vmove(auVar10);
    auVar13 = _vaddbc(in_vf0,auVar5);
    _vmove(auVar11);
    auVar6 = _vaddbc(in_vf0,auVar8);
    auVar4 = _lqc2(auVar4);
    auVar7 = _vaddbc(in_vf0,auVar8);
    auVar5 = _vsub(auVar9,auVar4);
    auVar4 = _qmtc2(fVar3 * fVar3 * 0.2);
    _vmulabc(auVar6,auVar5);
    _vmaddabc(auVar7,auVar5);
    auVar9 = _vmaddbc(auVar13,auVar5);
    auVar5 = _qmtc2(0x3f000000);
    auVar4 = _vmulbc(auVar9,auVar4);
    auVar8 = _lqc2(auVar14);
    auVar14 = _vmulbc(auVar4,auVar5);
    auVar5 = _vmulbc(auVar6,auVar8);
    auVar9 = _vmulbc(auVar7,auVar8);
    auVar4 = _qmfc2(auVar14._0_4_);
    auVar5 = _vadd(auVar5,auVar9);
    auVar9 = _vmulbc(auVar13,auVar8);
    auVar5 = _vadd(auVar5,auVar9);
    auVar5 = _vsub(in_vf0,auVar5);
    _sqc2(auVar10);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar5);
    _sqc2(auVar6);
    _sqc2(auVar7);
    _sqc2(auVar13);
    if (3.5 < auVar4._0_4_) {
      auVar4 = _qmtc2(0x40600000);
      auVar14 = _vaddbc(in_vf0,auVar4);
    }
    auVar4 = _sqc2(auVar14);
    uStack_4c = auVar4._4_4_;
    if (3.5 < uStack_4c) {
      auVar4 = _qmtc2(0x40600000);
      auVar14 = _vaddbc(in_vf0,auVar4);
    }
    auVar4 = _sqc2(auVar14);
    auVar5 = _qmfc2(auVar14._0_4_);
    uStack_4c = auVar4._4_4_;
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + uStack_4c;
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - auVar5._0_4_;
  }
  return;
}


// ==== FUN_001409c0 @ 001409c0 ====

void FUN_001409c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00135550(DAT_0040f4d0 + 0x30);
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x3a4) != 0) {
    if (*(int *)(iVar2 + 0x9c) == 0) {
      *(int *)(iVar2 + 0x9c) = iVar1;
    }
    else {
      if (*(float *)(iVar2 + 0xa0) <= *(float *)(param_1 + 0x14)) {
        return;
      }
      *(int *)(iVar2 + 0x9c) = iVar1;
    }
    *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}


// ==== FUN_00140a40 @ 00140a40 ====

void FUN_00140a40(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x7c) + 0x38c) == 2) {
    FUN_00103800(DAT_0040f0e0,1);
    iVar1 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 8);
    (**(code **)(iVar1 + 0x34))(*(int *)(DAT_0040f0e0 + 0x21070) + (int)*(short *)(iVar1 + 0x30),0);
  }
  return;
}


// ==== FUN_00140ab0 @ 00140ab0 ====

void FUN_00140ab0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xfa) = param_2;
  return;
}


// ==== FUN_00140ad0 @ 00140ad0 ====

void FUN_00140ad0(undefined8 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 8;
  FUN_0013ec10(param_1,2);
  iVar3 = (int)param_1;
  piVar2 = (int *)(iVar3 + 0x490);
  puVar1 = (undefined4 *)(iVar3 + 0x4b0);
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  *(int *)(iVar3 + 0x490) = iVar3 + 0xf0;
  *(int *)(iVar3 + 0x494) = iVar3 + 0x150;
  *(int *)(iVar3 + 0x498) = iVar3 + 0x1b0;
  iVar5 = 8;
  *(int *)(iVar3 + 0x4a0) = iVar3 + 0x210;
  *(int *)(iVar3 + 0x49c) = iVar3 + 0x2a0;
  *(int *)(iVar3 + 0x4a4) = iVar3 + 0x340;
  *(int *)(iVar3 + 0x4a8) = iVar3 + 0x390;
  *(int *)(iVar3 + 0x4ac) = iVar3 + 0x3e0;
  *(int *)(iVar3 + 0x4b0) = iVar3 + 0x430;
  iVar4 = *piVar2;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar2 = piVar2 + 1;
    (**(code **)(*(int *)(iVar4 + 0x4c) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0x4c) + 8));
    if (iVar5 < 0) break;
    iVar4 = *piVar2;
  }
  *(undefined4 *)(iVar3 + 0x4b4) = 0xffffffff;
  return;
}


// ==== FUN_00140bb8 @ 00140bb8 ====

undefined4 FUN_00140bb8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_0013ec38();
  iVar4 = (int)param_1;
  puVar3 = (undefined4 *)(iVar4 + 0x4b8);
  iVar5 = 8;
  do {
    iVar5 = iVar5 + -1;
    iVar1 = *(int *)(puVar3[-10] + 0x4c);
    (**(code **)(iVar1 + 0x14))(puVar3[-10] + (int)*(short *)(iVar1 + 0x10),param_1);
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar5);
  *(undefined4 *)(iVar4 + 0x4b4) = 0xffffffff;
  FUN_00173690(iVar4 + 0x4e0);
  *(undefined4 *)(iVar4 + 0x4dc) = 0;
  lVar2 = FUN_00135550(param_2);
  if (lVar2 == 0) {
    *(undefined4 *)(iVar4 + 0x4e8) = 0;
  }
  else {
    iVar5 = FUN_00135550(param_2);
    if (*(int *)(iVar5 + 0x80) == 1) {
      iVar5 = FUN_00135550(param_2);
      lVar2 = FUN_00185c58(iVar5 + 0x6f0);
      if (lVar2 == 0) {
        *(undefined4 *)(iVar4 + 0x4e8) = 2;
      }
      else {
        *(undefined4 *)(iVar4 + 0x4e8) = 1;
      }
    }
    else {
      *(undefined4 *)(iVar4 + 0x4e8) = 0;
    }
  }
  return 1;
}


// ==== FUN_00140ca0 @ 00140ca0 ====

void FUN_00140ca0(undefined8 param_1)

{
  FUN_0013ee20();
  *(undefined4 *)((int)param_1 + 0x4dc) = 0;
  FUN_001414a0(param_1);
  FUN_00140cf8(param_1);
  FUN_00140ea8(param_1);
  FUN_00136818(0x3f4ccccd,*(undefined4 *)((int)param_1 + 0x7c));
  return;
}


// ==== FUN_00140cf8 @ 00140cf8 ====

void FUN_00140cf8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_001412c0();
  if (lVar2 != 0) {
    iVar1 = (int)lVar2;
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x18));
    iVar3 = (int)param_1;
    if (*(float *)(*(int *)(iVar3 + 0x7c) + 0xa4) < -100.0) {
      (**(code **)(*(int *)(iVar1 + 0x4c) + 0x4c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x48));
      *(undefined4 *)(iVar3 + 0x4b4) = 0xffffffff;
      FUN_0011d158(DAT_0040f508,param_1);
    }
    else {
      if (*(char *)(iVar1 + 0x48) == '\0') {
        lVar2 = FUN_00141308(param_1);
        if (lVar2 != 0) {
          iVar1 = FUN_001412c0(param_1);
          (**(code **)(*(int *)(iVar1 + 0x4c) + 0x44))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x40));
        }
      }
      else {
        lVar2 = FUN_00141308(param_1);
        if (lVar2 == 0) {
          (**(code **)(*(int *)(iVar1 + 0x4c) + 0x4c))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x48));
          *(undefined4 *)(iVar3 + 0x4b4) = 0xffffffff;
          FUN_0011d158(DAT_0040f508,param_1);
        }
        else {
          iVar1 = FUN_001412c0(param_1);
          (**(code **)(*(int *)(iVar1 + 0x4c) + 0x44))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x40));
        }
      }
      FUN_00140e48(param_1);
    }
  }
  return;
}


// ==== FUN_00140e48 @ 00140e48 ====

void FUN_00140e48(int param_1)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_50 [64];
  
  iVar1 = *(int *)(param_1 + 0x7c);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 400));
  auVar2 = _qmtc2(*(float *)(iVar1 + 0x2e8) * 0.5);
  auVar2 = _vaddbc(auVar3,auVar2);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  FUN_0012ae58(DAT_0040f4d0,auVar2._0_8_,*(undefined4 *)(iVar1 + 0xa0),0x10,0,1,auStack_50);
  return;
}


// ==== FUN_00140ea8 @ 00140ea8 ====

void FUN_00140ea8(int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_80 [36];
  float fStack_5c;
  undefined1 auStack_50 [16];
  float fStack_3c;
  
  lVar2 = FUN_00141440();
  if (lVar2 != 0) {
    lVar2 = FUN_00173610(param_1 + 0x4e0);
    if ((lVar2 == 0) && (iVar1 = *(int *)(param_1 + 0x7c), *(int *)(iVar1 + 0x2a4) != 0)) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0xa4))
                (auStack_80,iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0xa0));
      auVar3 = _lqc2(auStack_50);
      auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0xa0));
      auVar3 = _vsubbc(auVar3,auVar4);
      auVar3 = _sqc2(auVar3);
      fStack_3c = auVar3._4_4_;
      if (fStack_3c < 0.4) {
        *(undefined1 *)(param_1 + 0x31) = 0;
        return;
      }
      if (fStack_5c < -0.5) {
        *(undefined1 *)(param_1 + 0x31) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0x31) = 1;
      FUN_00135a38();
      return;
    }
    FUN_00173690(param_1 + 0x4e0);
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  return;
}


// ==== FUN_00140f88 @ 00140f88 ====

undefined4 FUN_00140f88(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)param_1 + 0x490);
  iVar3 = 8;
  iVar1 = *piVar2;
  while( true ) {
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x24))(iVar1 + *(short *)(*(int *)(iVar1 + 0x4c) + 0x20));
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  *(undefined4 *)((int)param_1 + 0x4b4) = 0xffffffff;
  FUN_0013ee28(param_1);
  return 1;
}


// ==== FUN_00141168 @ 00141168 ====

void FUN_00141168(undefined8 param_1)

{
  FUN_0013ee48();
  FUN_0011d1f0(DAT_0040f508,param_1);
  return;
}


// ==== FUN_001411a0 @ 001411a0 ====

void FUN_001411a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  undefined1 in_a3_lo;
  undefined1 in_t0_lo;
  undefined8 in_t1;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = _por(in_zero_qw,in_a2_qw);
  auVar4 = _por(in_zero_qw,in_a1_qw);
  lVar2 = FUN_001412c0();
  auVar4 = _por(in_zero_qw,auVar4);
  if (lVar2 != 0) {
    iVar1 = *(int *)((int)lVar2 + 0x4c);
    auVar3 = _por(in_zero_qw,auVar3);
    (**(code **)(iVar1 + 0x2c))
              (param_1,param_2,(int)lVar2 + (int)*(short *)(iVar1 + 0x28),auVar4._0_8_,auVar3._0_8_,
               in_a3_lo,in_t0_lo,in_t1);
  }
  return;
}


// ==== FUN_00141248 @ 00141248 ====

void FUN_00141248(undefined4 param_1)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  undefined8 in_a3;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = _por(in_zero_qw,in_a1_qw);
  auVar4 = _por(in_zero_qw,in_a2_qw);
  lVar2 = FUN_001412c0();
  auVar3 = _por(in_zero_qw,auVar3);
  if (lVar2 != 0) {
    iVar1 = *(int *)((int)lVar2 + 0x4c);
    auVar4 = _por(in_zero_qw,auVar4);
    (**(code **)(iVar1 + 0x34))
              (param_1,(int)lVar2 + (int)*(short *)(iVar1 + 0x30),auVar3._0_8_,auVar4._0_8_,in_a3);
  }
  return;
}


// ==== FUN_001412c0 @ 001412c0 ====

undefined4 FUN_001412c0(int param_1)

{
  if (*(int *)(param_1 + 0x4b4) != -1) {
    return *(undefined4 *)(param_1 + *(int *)(param_1 + 0x4b4) * 4 + 0x490);
  }
  return 0;
}


// ==== FUN_001412e8 @ 001412e8 ====

void FUN_001412e8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4dc);
  *(undefined4 *)(param_1 + iVar1 * 4 + 0x4b8) = param_2;
  *(int *)(param_1 + 0x4dc) = iVar1 + 1;
  return;
}


// ==== FUN_00141308 @ 00141308 ====

undefined4 FUN_00141308(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + 0x4dc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar5 + 0x4dc) = 0;
    iVar4 = 0;
    if (0 < iVar1) {
      puVar3 = (undefined4 *)(iVar5 + 0x4b8);
      do {
        lVar2 = FUN_00141390(param_1,*puVar3);
        iVar4 = iVar4 + 1;
        if (lVar2 != 0) {
          return 1;
        }
        puVar3 = puVar3 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return 0;
}


// ==== FUN_00141390 @ 00141390 ====

undefined4 FUN_00141390(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(iVar5 + param_2 * 4 + 0x490);
  iVar2 = *(int *)(iVar1 + 0x4c);
  lVar4 = (**(code **)(iVar2 + 0x3c))(iVar1 + *(short *)(iVar2 + 0x38));
  uVar3 = 0;
  if (lVar4 != 0) {
    lVar4 = FUN_001412c0(param_1);
    if (lVar4 == 0) {
      *(int *)(iVar5 + 0x4b4) = param_2;
    }
    else {
      iVar1 = *(int *)((int)lVar4 + 0x4c);
      (**(code **)(iVar1 + 0x4c))((int)lVar4 + (int)*(short *)(iVar1 + 0x48));
      *(int *)(iVar5 + 0x4b4) = param_2;
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_00141418 @ 00141418 ====

void FUN_00141418(int param_1)

{
  FUN_00173640(0x40000000,param_1 + 0x4e0);
  return;
}


