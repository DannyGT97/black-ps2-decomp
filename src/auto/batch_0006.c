// ==== FUN_00150738 @ 00150738 ====
// GLOBAL DAT_0040f4d8 int

undefined4 FUN_00150738(undefined8 param_1)

{
  short sVar1;
  
  FUN_001afcc8((int)param_1 + 0x1a0);
  FUN_00125e40(param_1);
  FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,0);
  sVar1 = *(short *)((int)param_1 + 0x1bc);
  if (sVar1 != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,sVar1);
  }
  return 1;
}


// ==== FUN_001507b8 @ 001507b8 ====

void FUN_001507b8(undefined8 param_1)

{
  FUN_001afcd0((int)param_1 + 0x1a0);
  FUN_00125e60(param_1);
  return;
}


// ==== FUN_001507e8 @ 001507e8 ====
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f4d8 int

void FUN_001507e8(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fStack_64;
  
  iVar10 = (int)param_1;
  if ((*(char *)(iVar10 + 0x13e) != '\0') &&
     (lVar4 = FUN_001afd80(iVar10 + 0x1a0,*(undefined4 *)(iVar10 + 0x118)), lVar4 != 0)) {
    iVar12 = (int)lVar4;
    if (*(char *)(iVar12 + 0x5e) != '\0') {
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0xa0));
      auVar14 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4bc + 2000));
      auVar13 = _vsub(auVar13,auVar14);
      auVar13 = _vmul(auVar13,auVar13);
      _vaddabc(auVar13,auVar13);
      auVar13 = _vmaddbc(auVar15,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      if ((float)*(byte *)(iVar12 + 0x5e) * (float)*(byte *)(iVar12 + 0x5e) < auVar13._0_4_) {
        return;
      }
    }
    FUN_00125e98(param_1,*(undefined4 *)(iVar10 + 0x118));
    if (120.0 < *(float *)(iVar10 + 0xc0)) {
      iVar6 = (**(code **)(*(int *)(iVar10 + 0x10) + 0xdc))
                        (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0xd8));
      if (*(float *)(iVar6 + 0xc) / *(float *)(iVar10 + 0xc0) < 0.05) {
        return;
      }
      iVar6 = *(int *)(iVar10 + 0x118);
    }
    else {
      iVar6 = *(int *)(iVar10 + 0x118);
    }
    uVar11 = 0;
    if (0 < *(int *)(iVar6 + 0x24)) {
      bVar2 = param_2 == 0;
      bVar1 = true;
      do {
        if (bVar1) {
          uVar3 = (uint)((*(ulong *)(iVar12 + (uint)*(byte *)(iVar10 + 200) * 8 + 0x68) &
                         (ulong)(uint)(1 << (uVar11 & 0x1f))) != 0);
        }
        else {
          uVar3 = *(uint *)((uint)*(byte *)(iVar10 + 200) * 8 + iVar12 + 0x6c) >> (uVar11 & 0x1f) &
                  1;
        }
        if (uVar3 == 0) {
LAB_00150a9c:
          iVar6 = *(int *)(iVar10 + 0x118);
        }
        else {
          psVar5 = (short *)(*(int *)(*(int *)(iVar10 + 0x118) + 0x20) + uVar11 * 6);
          iVar8 = *(int *)(*(int *)(iVar10 + 0x118) + 0x1c) + uVar11 * 0x30;
          pbVar7 = (byte *)(*(int *)(iVar10 + 0x1ac) + (int)*psVar5);
          uVar9 = (*(ushort *)(iVar12 + 0x5a) >> 8 ^ 1) & 1;
          iVar6 = *(int *)(iVar10 + 0x1b0) + (int)psVar5[1];
          if (2 < *pbVar7 - 2) {
            if (*pbVar7 == 10) {
              auVar15 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x60));
              auVar13 = _qmtc2(0x40000000);
              auVar14 = _qmtc2(*(undefined4 *)(iVar6 + 0x30));
              auVar13 = _vmulbc(auVar15,auVar13);
              auVar13 = _vaddbc(auVar13,auVar14);
              auVar13 = _sqc2(auVar13);
              fStack_64 = auVar13._12_4_;
              if (*(float *)(iVar10 + 0xc0) < fStack_64) {
                FUN_001af738(DAT_0040f4c0 + 0x14,iVar8,pbVar7,iVar6,0,iVar10 + 0x70,bVar2,0);
                iVar6 = *(int *)(iVar10 + 0x118);
                goto LAB_00150aa0;
              }
            }
            else {
              FUN_001af738(*(undefined4 *)(iVar10 + 0xc0),DAT_0040f4c0 + 0x14,iVar8,pbVar7,iVar6,0,
                           iVar10 + 0x70,bVar2,uVar9);
            }
            goto LAB_00150a9c;
          }
          FUN_001af738(*(undefined4 *)(iVar10 + 0xc0),DAT_0040f4c0 + 0x14,iVar8,pbVar7,iVar6,
                       iVar10 + 300,iVar10 + 0x70,bVar2,uVar9);
          iVar6 = *(int *)(iVar10 + 0x118);
        }
LAB_00150aa0:
        uVar11 = uVar11 + 1;
        bVar1 = (int)uVar11 < 0x20;
      } while ((int)uVar11 < *(int *)(iVar6 + 0x24));
    }
    if (*(short *)(iVar10 + 0x1bc) != -1) {
      FUN_001b37b0(DAT_0040f4d8 + 0x33c40,*(undefined2 *)(iVar10 + 0x1bc));
    }
  }
  return;
}


// ==== FUN_00150b00 @ 00150b00 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_0040f4d0 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00150b00(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar8 = (int)param_2;
  if (*(int *)(iVar8 + 0x114) == 0) {
LAB_00150bf4:
    fVar5 = *(float *)(iVar8 + 0xa4);
  }
  else {
    if (*(long *)(*(int *)(iVar8 + 0x114) + 0x40) == 0x5b4083521342cfb1) {
      if (*(int *)(iVar8 + 0xb4) != 0) {
        uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10);
        uVar4 = FUN_0025d990();
        auVar9 = _qmtc2(uVar4);
        auVar9 = _vmul(auVar9,auVar9);
        auVar10 = _vaddbc(in_vf0,in_vf0);
        _vaddabc(auVar9,auVar9);
        auVar9 = _vmaddbc(auVar10,auVar9);
        auVar9 = _qmfc2(auVar9._0_4_);
        if (10.0 < auVar9._0_4_) {
          if (*(char *)(iVar8 + 0x1c2) != '\0') {
            FUN_001e06f0(uVar1,param_2,*(undefined8 *)(iVar8 + 0xa0));
            fVar5 = *(float *)(iVar8 + 0xa4);
            goto LAB_00150bf8;
          }
          FUN_001e0550(uVar1,param_2);
          *(undefined1 *)(iVar8 + 0x1c2) = 1;
        }
        else if (*(char *)(iVar8 + 0x1c2) != '\0') {
          FUN_001e0768(uVar1,param_2,*(undefined8 *)(iVar8 + 0xa0));
          *(undefined1 *)(iVar8 + 0x1c2) = 0;
        }
      }
      goto LAB_00150bf4;
    }
    fVar5 = *(float *)(iVar8 + 0xa4);
  }
LAB_00150bf8:
  if (fVar5 < -100.0) {
    FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_2,1);
    if (*(char *)(iVar8 + 0x1c0) != '\0') {
      cVar3 = *(char *)(iVar8 + 0x1bf);
      goto LAB_00150c4c;
    }
    *(undefined1 *)(iVar8 + 0x1c0) = 2;
  }
  cVar3 = *(char *)(iVar8 + 0x1bf);
LAB_00150c4c:
  if (cVar3 != '\0') {
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xa0));
    auVar9 = _qmtc2(0x3dcccccd);
    iVar6 = *(int *)(*(int *)(iVar8 + 0x118) + 0x48) + *(int *)(iVar8 + 0x1b8) * 0xd0;
    auVar9 = _vsubbc(auVar10,auVar9);
    iVar7 = *(int *)(iVar8 + 0x124);
    if (*(int *)(iVar8 + 0x124) == 3) {
      iVar7 = 2;
    }
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    FUN_0012c428(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),DAT_0040f4d0,
                 auVar9._0_8_,_DAT_004432c0,*(undefined8 *)(iVar6 + 0x18),1,param_2,iVar7,1);
    *(undefined1 *)(iVar8 + 0x1bf) = 0;
  }
  bVar2 = false;
  if (*(char *)(iVar8 + 0x1c0) != '\0') {
    cVar3 = *(char *)(iVar8 + 0x1c0) + -1;
    *(char *)(iVar8 + 0x1c0) = cVar3;
    if ((cVar3 == '\0') && (*(char *)(iVar8 + 0x13c) != '\0')) {
      if (*(int *)(iVar8 + 0x1b4) == 3) {
        FUN_00129240(DAT_0040f4d0,param_2,0);
        bVar2 = true;
      }
      else {
        FUN_00129218(DAT_0040f4d0,*(int *)(iVar8 + 0x1b4),param_2);
        bVar2 = true;
      }
    }
    (**(code **)(*(int *)(iVar8 + 0x10) + 0x24))(iVar8 + *(short *)(*(int *)(iVar8 + 0x10) + 0x20));
  }
  if (!bVar2) {
    FUN_0014be20(param_1,param_2);
  }
  return;
}


// ==== FUN_00150d68 @ 00150d68 ====

undefined4
FUN_00150d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar4;
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
  undefined1 auStack_1c0 [208];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
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
  
  uStack_6c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_70 = (undefined4)param_2;
  iVar4 = (int)param_1;
  uStack_60 = (undefined4)param_3;
  uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
  uStack_68 = in_a1_udw;
  uStack_64 = in_register_0000005c;
  uStack_58 = in_a2_udw;
  uStack_54 = in_register_0000006c;
  lVar3 = FUN_001afd80(iVar4 + 0x1a0,*(undefined4 *)(iVar4 + 0x118));
  if (lVar3 == 0) {
    return 0;
  }
  if (((*(ushort *)((int)lVar3 + 0x5a) & 0x2000) != 0) && ((param_4 & 0x100) != 0)) {
    return 0;
  }
  auVar5._4_4_ = uStack_6c;
  auVar5._0_4_ = uStack_70;
  auVar5._8_4_ = uStack_68;
  auVar5._12_4_ = uStack_64;
  auVar5 = _lqc2(auVar5);
  if (param_5 == 0) {
    auVar7 = _qmfc2(auVar5._0_4_);
    auVar6._4_4_ = uStack_5c;
    auVar6._0_4_ = uStack_60;
    auVar6._8_4_ = uStack_58;
    auVar6._12_4_ = uStack_54;
    auVar6 = _lqc2(auVar6);
    uStack_90 = auVar7._0_4_;
    auVar5 = _qmfc2(auVar5._0_4_);
    uStack_8c = auVar5._4_4_;
    auVar5 = _qmfc2(auVar6._0_4_);
    uStack_80 = auVar5._0_4_;
    iVar2 = *(int *)(iVar4 + 0xb8);
    uStack_88 = uStack_68;
    uStack_84 = 0;
    auStack_e0 = _qmfc2(auVar6._0_4_);
    uStack_7c = auStack_e0._4_4_;
    uStack_78 = auStack_e0._8_4_;
    auStack_f0._4_4_ = uStack_7c;
    auStack_f0._0_4_ = uStack_80;
    auStack_f0._8_4_ = uStack_78;
    auStack_f0._12_4_ = 0;
    uStack_74 = 0;
    if ((*(uint *)(iVar2 + 0x5c) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(int *)(iVar2 + 0x58) + 0x28))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x58) + 0x24),&uStack_90,&uStack_80,
                         (undefined1 (*) [16])(iVar4 + 0x70),auStack_1c0);
    }
  }
  else {
    iVar2 = FUN_00151e60(param_1);
    if (*(int *)(iVar2 + 0xc0) == 0) {
      return 0;
    }
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x70));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x80));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x90));
    _vmove(auVar10);
    _vmove(auVar11);
    auVar16 = _vaddbc(in_vf0,auVar11);
    auVar15 = _vaddbc(in_vf0,auVar10);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
    _vmove(auVar16);
    _vmove(auVar15);
    auVar12 = _vaddbc(in_vf0,auVar5);
    auVar13 = _vaddbc(in_vf0,auVar5);
    _sqc2(auVar5);
    _vmove(auVar5);
    auVar5 = _vmulbc(auVar13,auVar9);
    auVar17 = _vaddbc(in_vf0,auVar10);
    auVar7._4_4_ = uStack_6c;
    auVar7._0_4_ = uStack_70;
    auVar7._8_4_ = uStack_68;
    auVar7._12_4_ = uStack_64;
    auVar8 = _lqc2(auVar7);
    _vmove(auVar17);
    auVar6 = _vmulbc(auVar12,auVar9);
    auVar14 = _vaddbc(in_vf0,auVar11);
    auVar6 = _vadd(auVar6,auVar5);
    auVar5 = _vmulbc(auVar14,auVar9);
    _qmfc2(auVar8._0_4_);
    auVar5 = _vadd(auVar6,auVar5);
    auVar7 = _vsub(in_vf0,auVar5);
    auVar1._4_4_ = uStack_5c;
    auVar1._0_4_ = uStack_60;
    auVar1._8_4_ = uStack_58;
    auVar1._12_4_ = uStack_54;
    auVar5 = _lqc2(auVar1);
    _vmulabc(auVar12,auVar5);
    _vmaddabc(auVar13,auVar5);
    _vmaddabc(auVar14,auVar5);
    auVar6 = _vmaddbc(auVar7,in_vf0);
    _sqc2(auVar10);
    _vmulabc(auVar12,auVar8);
    _vmaddabc(auVar13,auVar8);
    _vmaddabc(auVar14,auVar8);
    auVar5 = _vmaddbc(auVar7,in_vf0);
    _sqc2(auVar11);
    _sqc2(auVar9);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar17);
    auStack_b0 = _sqc2(auVar5);
    auStack_a0 = _sqc2(auVar6);
    auStack_f0 = _sqc2(auVar12);
    auStack_e0 = _sqc2(auVar13);
    auStack_d0 = _sqc2(auVar14);
    auStack_c0 = _sqc2(auVar7);
    lVar3 = FUN_0027dd60(*(int *)(iVar2 + 0xc0),auStack_b0);
  }
  if (lVar3 == 0) {
    return 0;
  }
  return 1;
}


// ==== FUN_00150f98 @ 00150f98 ====

undefined4
FUN_00150f98(int param_1,undefined4 param_2,undefined4 param_3,ulong param_4,long param_5,
            undefined1 (*param_6) [16])

{
  int iVar1;
  long lVar2;
  int iVar3;
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
  undefined1 auStack_240 [24];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  float fStack_200;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_e0;
  int iStack_d0;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
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
  
  auVar17 = _qmtc2(param_2);
  auVar18 = _qmtc2(param_3);
  auStack_80 = _sqc2(auVar17);
  auStack_70 = _sqc2(auVar18);
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  auVar17 = _lqc2(auStack_80);
  auVar18 = _lqc2(auStack_70);
  if (lVar2 != 0) {
    if (((*(ushort *)((int)lVar2 + 0x5a) & 0x2000) != 0) && ((param_4 & 0x100) != 0)) {
      return 0;
    }
    pauVar4 = (undefined1 (*) [16])(param_1 + 0x70);
    *(undefined4 *)param_6[2] = 0x40000000;
    if (param_5 == 0) {
      auVar5 = _qmfc2(auVar17._0_4_);
      uStack_a0 = auVar5._0_4_;
      auVar6 = _qmfc2(auVar18._0_4_);
      auVar5 = _sqc2(auVar17);
      uStack_90 = auVar6._0_4_;
      auStack_160._4_4_ = auVar5._4_4_;
      iVar1 = *(int *)(param_1 + 0xb8);
      auVar17 = _sqc2(auVar17);
      auStack_160._8_4_ = auVar17._8_4_;
      auVar17 = _sqc2(auVar18);
      uStack_9c = auStack_160._4_4_;
      uStack_98 = auStack_160._8_4_;
      uStack_94 = 0;
      auStack_160._4_4_ = auVar17._4_4_;
      auStack_170._4_4_ = auStack_160._4_4_;
      auStack_170._0_4_ = uStack_90;
      auVar17 = _sqc2(auVar18);
      auStack_160._8_4_ = auVar17._8_4_;
      auStack_170._8_4_ = auStack_160._8_4_;
      auStack_170._12_4_ = 0;
      uStack_8c = auStack_160._4_4_;
      uStack_88 = auStack_160._8_4_;
      uStack_84 = 0;
      if ((*(uint *)(iVar1 + 0x5c) & 1) == 0) {
        lVar2 = 0;
      }
      else {
        auStack_160 = auVar17;
        lVar2 = (**(code **)(*(int *)(iVar1 + 0x58) + 0x28))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 0x58) + 0x24),&uStack_a0,&uStack_90,
                           pauVar4,auStack_240);
      }
      if (lVar2 == 0) {
        return 0;
      }
      if (*(float *)param_6[2] <= fStack_200) {
        return 0;
      }
      *(int *)*param_6 = (int)auStack_240._16_8_;
      *(int *)(*param_6 + 4) = SUB84(auStack_240._16_8_,4);
      *(undefined4 *)(*param_6 + 8) = uStack_228;
      *(undefined4 *)(*param_6 + 0xc) = uStack_224;
      *(undefined4 *)param_6[1] = uStack_220;
      *(undefined4 *)(param_6[1] + 4) = uStack_21c;
      *(undefined4 *)(param_6[1] + 8) = uStack_218;
      *(undefined4 *)(param_6[1] + 0xc) = uStack_214;
      *(float *)param_6[2] = fStack_200;
      *(undefined4 *)(param_6[2] + 8) = 0;
      param_6[2][0xc] = 0;
      return 1;
    }
    iVar1 = *(int *)((int)lVar2 + 0xc0);
    for (iVar3 = 1; iVar3 != -1; iVar3 = iVar3 + -1) {
    }
    if (iVar1 != 0) {
      auVar9 = _lqc2(*pauVar4);
      auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
      auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
      _vmove(auVar9);
      _vmove(auVar10);
      auVar15 = _vaddbc(in_vf0,auVar10);
      auVar12 = _vaddbc(in_vf0,auVar9);
      _vmove(auVar8);
      auVar16 = _vaddbc(in_vf0,auVar9);
      _vmove(auVar15);
      _vmove(auVar12);
      auVar13 = _vaddbc(in_vf0,auVar8);
      auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      auVar14 = _vaddbc(in_vf0,auVar8);
      _vmove(auVar16);
      auVar5 = _vmulbc(auVar14,auVar7);
      auVar11 = _vaddbc(in_vf0,auVar10);
      auVar6 = _vmulbc(auVar13,auVar7);
      auVar6 = _vadd(auVar6,auVar5);
      auVar5 = _vmulbc(auVar11,auVar7);
      auVar5 = _vadd(auVar6,auVar5);
      _sqc2(auVar9);
      auVar9 = _vsub(in_vf0,auVar5);
      _sqc2(auVar10);
      _sqc2(auVar8);
      _vmulabc(auVar13,auVar18);
      _vmaddabc(auVar14,auVar18);
      _vmaddabc(auVar11,auVar18);
      auVar6 = _vmaddbc(auVar9,in_vf0);
      _vmulabc(auVar13,auVar17);
      _vmaddabc(auVar14,auVar17);
      _vmaddabc(auVar11,auVar17);
      auVar5 = _vmaddbc(auVar9,in_vf0);
      _sqc2(auVar17);
      _sqc2(auVar18);
      _sqc2(auVar7);
      _sqc2(auVar15);
      _sqc2(auVar12);
      _sqc2(auVar16);
      auStack_c0 = _sqc2(auVar5);
      auStack_b0 = _sqc2(auVar6);
      auStack_170 = _sqc2(auVar13);
      auStack_160 = _sqc2(auVar14);
      auStack_150 = _sqc2(auVar11);
      auStack_140 = _sqc2(auVar9);
      lVar2 = FUN_0027d1d8(iVar1,auStack_c0,auStack_130);
      if (lVar2 != 1) {
        return 0;
      }
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
      auVar18 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      auVar7 = _lqc2(*pauVar4);
      auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
      auVar17 = _lqc2(auStack_130);
      auVar5 = _lqc2(auStack_120);
      _vmulabc(auVar7,auVar17);
      _vmaddabc(auVar9,auVar17);
      _vmaddabc(auVar6,auVar17);
      auVar17 = _vmaddbc(auVar18,in_vf0);
      auVar17 = _sqc2(auVar17);
      *param_6 = auVar17;
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
      auVar18 = _lqc2(*pauVar4);
      auVar17 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
      _vmulabc(auVar18,auVar5);
      _vmaddabc(auVar17,auVar5);
      auVar17 = _vmaddbc(auVar6,auVar5);
      auVar17 = _sqc2(auVar17);
      param_6[1] = auVar17;
      *(undefined4 *)param_6[2] = uStack_e0;
      param_6[2][0xc] = 0;
      *(undefined4 *)(param_6[2] + 8) = *(undefined4 *)(iStack_d0 + 4);
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00151288 @ 00151288 ====
// GLOBAL DAT_0040f4d0 int

undefined4 FUN_00151288(int param_1,undefined4 param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uStack_60;
  int aiStack_5c [3];
  
  lVar3 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if ((lVar3 != 0) && (((*(ushort *)((int)lVar3 + 0x5a) & 0x2000) == 0 || ((param_3 & 0x100) == 0)))
     ) {
    uStack_60 = *(undefined4 *)(param_1 + 0xb8);
    aiStack_5c[0] = param_1 + 0x70;
    iVar1 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5a94) + 0x30);
    iVar2 = *(int *)(DAT_0040f4d0 + 0x5a94);
    *(int **)(iVar2 + 4) = aiStack_5c;
    *(undefined4 *)(iVar2 + 8) = 1;
    *(undefined4 *)(iVar2 + 0x38) = param_2;
    *(undefined4 *)(iVar2 + 0x3c) = param_4;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 **)iVar2 = &uStack_60;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar2 = FUN_0033b688(*(undefined4 *)(DAT_0040f4d0 + 0x5a94));
    iVar5 = 0;
    if (0 < iVar2) {
      pfVar4 = (float *)(iVar1 + 0x2e0);
      do {
        iVar5 = iVar5 + 1;
        if (*pfVar4 < 0.0) {
          return 1;
        }
        pfVar4 = pfVar4 + 0x108;
      } while (iVar5 < iVar2);
    }
  }
  return 0;
}


// ==== FUN_001513a8 @ 001513a8 ====
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f52c undefined4

void FUN_001513a8(float param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 in_zero_qw [16];
  int *piVar4;
  int iVar5;
  long lVar6;
  undefined1 in_a1_qw [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  iVar8 = (int)param_2;
  auVar10 = _por(in_zero_qw,in_a1_qw);
  fVar11 = (float)FUN_001afdb0(iVar8 + 0x1a0);
  lVar6 = FUN_001afd80(iVar8 + 0x1a0,*(undefined4 *)(iVar8 + 0x118));
  if ((lVar6 != 0) && (*(char *)(iVar8 + 0x13f) == '\0')) {
    iVar9 = (int)lVar6;
    uVar1 = *(ushort *)(iVar9 + 0x58);
    auVar7 = _por(in_zero_qw,auVar10);
    bVar3 = false;
    FUN_0014c100(param_1,param_2,auVar7._0_8_,param_3,param_4,param_5,param_6,0);
    if ((uVar1 & 8) != 0) {
      if (((uVar1 & 1) == 0) || (*(int *)((int)param_6 + 0xc4) != 1)) {
        if (((uVar1 & 2) != 0) && (*(int *)((int)param_6 + 0xc4) == 2)) {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
    }
    piVar4 = (int *)FUN_0015d248(DAT_0040f4e0,param_5,0);
    bVar2 = false;
    if ((uVar1 & 0x10) != 0) {
      bVar2 = bVar3;
    }
    if (*piVar4 < 2) {
      bVar2 = bVar3;
    }
    if (bVar2) {
      iVar5 = FUN_0015d248(DAT_0040f4e0,param_5,0);
      iVar5 = *(int *)(iVar5 + 0x94);
      if (((((uVar1 & 0x400) == 0) || (iVar5 != 0)) && (((uVar1 & 0x800) == 0 || (iVar5 != 1)))) &&
         (((uVar1 & 0x1000) == 0 || (iVar5 != 2)))) {
        if (0.0 < fVar11) {
          FUN_00151cb0(param_1 * 0.04,param_2);
        }
        lVar6 = FUN_001afda8(iVar8 + 0x1a0);
        if (((lVar6 != -1) &&
            (fVar11 <= *(float *)(iVar9 + 0x28) * (1.0 - *(float *)(iVar9 + 0x30)))) &&
           (*(char *)(iVar8 + 0x13b) == '\0')) {
          lVar6 = FUN_0014c5c8(param_2,4);
          auVar10 = _por(in_zero_qw,auVar10);
          if (lVar6 != 0) {
            FUN_0025d240(param_1,*(undefined4 *)(iVar8 + 0xb4),auVar10._0_8_,param_3,param_6);
            FUN_0014da08(DAT_0040f52c,param_2);
          }
        }
      }
    }
  }
  return;
}


// ==== FUN_001515f8 @ 001515f8 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f510 int

void FUN_001515f8(float param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  undefined1 in_a3_qw [16];
  undefined8 in_t0;
  undefined8 in_t1;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 auVar5 [16];
  
  auVar8 = _por(in_zero_qw,in_a3_qw);
  auVar9 = _por(in_zero_qw,in_a2_qw);
  auVar10 = _por(in_zero_qw,in_a1_qw);
  iVar7 = (int)param_3;
  lVar2 = FUN_001afd80(iVar7 + 0x1a0,*(undefined4 *)(iVar7 + 0x118));
  if ((lVar2 != 0) && (*(char *)(iVar7 + 0x13f) == '\0')) {
    iVar6 = (int)lVar2;
    bVar1 = *(byte *)(iVar6 + 0x5c);
    if ((bVar1 != 0) &&
       ((bVar1 == 100 || (lVar3 = FUN_0012d218((float)bVar1 / 100.0,DAT_0040f4d0), lVar3 != 0)))) {
      auVar5 = _por(in_zero_qw,auVar10);
      uVar4 = auVar5._0_8_;
      if ((*(ushort *)(iVar6 + 0x58) & 2) == 0) {
        if ((int)in_t0 - 2U < 2) {
          return;
        }
        auVar10 = _por(in_zero_qw,auVar10);
        uVar4 = auVar10._0_8_;
      }
      auVar9 = _por(in_zero_qw,auVar9);
      auVar8 = _por(in_zero_qw,auVar8);
      FUN_0014c120(param_1,param_2,param_3,uVar4,auVar9._0_8_,auVar8._0_8_,in_t0,in_t1);
      fVar12 = (float)FUN_001afdb0(iVar7 + 0x1a0);
      if (((0.0 < *(float *)(iVar6 + 0x2c)) &&
          (fVar11 = *(float *)(iVar6 + 0x28) * (1.0 - *(float *)(iVar6 + 0x2c)),
          fVar12 - param_1 <= fVar11)) && (fVar11 < fVar12)) {
        FUN_001ecf80(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_3,lVar2);
      }
    }
  }
  return;
}


// ==== FUN_001517a8 @ 001517a8 ====

ushort FUN_001517a8(int param_1)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)((int)lVar2 + 0x5a) >> 0xf ^ 1;
  }
  return uVar1;
}


// ==== FUN_001517e0 @ 001517e0 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f52c undefined4

void FUN_001517e0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  long lVar3;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 in_a3_qw [16];
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar4 = (int)param_2;
  iVar5 = iVar4 + 0x1a0;
  auVar6 = _por(in_zero_qw,in_a3_qw);
  auVar7._8_4_ = in_a2_udw;
  auVar7._0_8_ = param_4;
  auVar7._12_4_ = in_register_0000006c;
  auVar7 = _por(in_zero_qw,auVar7);
  lVar2 = FUN_001afd80(iVar5,*(undefined4 *)(iVar4 + 0x118));
  if (lVar2 != 0) {
    FUN_0014c088(param_2,param_5);
    fVar8 = (float)FUN_001afdb0(iVar5);
    if (0.0 < fVar8) {
      FUN_00151cb0(param_1,param_2);
    }
    lVar3 = FUN_001afda8(iVar5);
    if (((lVar3 != -1) &&
        (fVar9 = *(float *)((int)lVar2 + 0x30), fVar11 = *(float *)((int)lVar2 + 0x28),
        fVar10 = (float)FUN_001afdb0(iVar5), fVar10 <= fVar11 * (1.0 - fVar9))) &&
       (*(char *)(iVar4 + 0x13b) == '\0')) {
      uStack_b0 = auVar6._0_4_;
      uStack_ac = auVar6._4_4_;
      uStack_a8 = auVar6._8_4_;
      uStack_a4 = auVar6._12_4_;
      uStack_a0 = auVar7._0_4_;
      uStack_9c = auVar7._4_4_;
      uStack_98 = auVar7._8_4_;
      uStack_94 = auVar7._12_4_;
      lVar2 = FUN_001afd80(iVar5,*(undefined4 *)(iVar4 + 0x118));
      if (lVar2 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)((int)lVar2 + 0x54) == 7;
      }
      if (((bVar1) && (*(int *)(iVar4 + 0xb4) != 0)) &&
         ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0xb4) + 0x34) + 0xc) + 0x58) + 0x8c
                    ) & 1) != 0)) {
        FUN_00152e80(param_2,&uStack_b0,&uStack_a0);
        param_1 = (float)((int)param_1 * (uint)(70.0 < param_1) |
                         (uint)(70.0 >= param_1) * 0x428c0000);
      }
      if (0.0 < fVar8) {
        FUN_001ed0a0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_2);
      }
      lVar2 = FUN_0014c5c8(param_2,4);
      if (lVar2 != 0) {
        FUN_0025d510(param_1,*(undefined4 *)(iVar4 + 0xb4),CONCAT44(uStack_ac,uStack_b0),uStack_a0);
        FUN_0014da08(DAT_0040f52c,param_2);
      }
    }
  }
  return;
}


// ==== FUN_001519c8 @ 001519c8 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f52c undefined4

void FUN_001519c8(undefined4 param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 in_a1_qw [16];
  undefined1 in_a2_qw [16];
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = (int)param_2;
  auVar4 = _por(in_zero_qw,in_a2_qw);
  auVar5 = _por(in_zero_qw,in_a1_qw);
  lVar1 = FUN_001afd80(iVar3 + 0x1a0,*(undefined4 *)(iVar3 + 0x118));
  if (lVar1 != 0) {
    iVar2 = (int)lVar1;
    if ((((*(byte *)(iVar2 + 0x5c) != 0) &&
         (lVar1 = FUN_0012d218((float)*(byte *)(iVar2 + 0x5c) / 100.0,DAT_0040f4d0), lVar1 != 0)) &&
        (fVar6 = *(float *)(iVar2 + 0x30), fVar8 = *(float *)(iVar2 + 0x28),
        fVar7 = (float)FUN_001afdb0(iVar3 + 0x1a0), fVar7 <= fVar8 * (1.0 - fVar6))) &&
       (*(char *)(iVar3 + 0x13b) == '\0')) {
      lVar1 = FUN_0014c5c8(param_2,4);
      auVar5 = _por(in_zero_qw,auVar5);
      if (lVar1 != 0) {
        auVar4 = _por(in_zero_qw,auVar4);
        FUN_0025d510(param_1,*(undefined4 *)(iVar3 + 0xb4),auVar5._0_8_,auVar4._0_8_);
        FUN_0014da08(DAT_0040f52c,param_2);
      }
    }
  }
  return;
}


// ==== FUN_00151ae8 @ 00151ae8 ====

void FUN_00151ae8(undefined8 param_1)

{
  long lVar1;
  
  FUN_0014c140();
  lVar1 = FUN_001afd80((int)param_1 + 0x1a0,*(undefined4 *)((int)param_1 + 0x118));
  if ((lVar1 != 0) && ((*(ushort *)((int)lVar1 + 0x5a) & 0x10) != 0)) {
    FUN_00151b40(param_1,0,0);
  }
  return;
}


// ==== FUN_00151b40 @ 00151b40 ====
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f4d4 int
// GLOBAL DAT_0040f514 undefined4

void FUN_00151b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_1;
  iVar6 = iVar5 + 0x1a0;
  lVar2 = FUN_001afd80(iVar6,*(undefined4 *)(iVar5 + 0x118));
  FUN_00152588(param_1,lVar2,param_2,param_3);
  FUN_001afd18(iVar6,*(undefined4 *)(iVar5 + 0x118),param_2);
  lVar3 = FUN_001afd80(iVar6,*(undefined4 *)(iVar5 + 0x118));
  if (lVar3 == 0) {
    sVar1 = *(short *)(iVar5 + 0x1bc);
  }
  else {
    *(undefined4 *)(iVar5 + 0x180) = *(undefined4 *)((int)lVar3 + 0xc0);
    uVar4 = FUN_001afda8(iVar6);
    FUN_001521b8(param_1,uVar4);
    sVar1 = *(short *)(iVar5 + 0x1bc);
  }
  if (sVar1 != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*(undefined2 *)(iVar5 + 0x1bc));
  }
  lVar3 = FUN_001afda8(iVar6);
  if (lVar3 == -1) {
    *(undefined1 *)(iVar5 + 0x1c0) = 2;
    if (lVar2 == 0) goto LAB_00151c70;
    if ((*(ushort *)((int)lVar2 + 0x5a) & 0x400) != 0) {
      FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,1);
    }
  }
  if ((lVar2 != 0) && ((*(ushort *)((int)lVar2 + 0x5a) & 0x800) != 0)) {
    (**(code **)(*(int *)(iVar5 + 0x10) + 0x14))
              (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x10),0);
  }
LAB_00151c70:
  FUN_0017bd10(DAT_0040f4d4 + 0xcd4,param_1);
  FUN_001396f0(DAT_0040f514,param_1);
  return;
}


// ==== FUN_00151cb0 @ 00151cb0 ====

void FUN_00151cb0(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = (int)param_2;
  iVar5 = iVar6 + 0x1a0;
  lVar3 = FUN_001afda8(iVar5);
  if (lVar3 == -1) {
    return;
  }
  iVar2 = FUN_001afd80(iVar5,*(undefined4 *)(iVar6 + 0x118));
  fVar7 = (float)FUN_001afdb0(iVar5);
  lVar4 = FUN_001afcd8(param_1,iVar5);
  if (lVar4 == 0) {
    fVar8 = *(float *)(iVar2 + 0x2c);
  }
  else {
    if ((*(ushort *)(iVar2 + 0x5a) & 2) != 0) {
      FUN_00151b40(param_2,1,0);
    }
    if ((*(ushort *)(iVar2 + 0x5a) & 1) != 0) {
      FUN_00151b40(param_2,0,0);
    }
    fVar8 = *(float *)(iVar2 + 0x2c);
  }
  if (0.0 < fVar8) {
    fVar9 = *(float *)(iVar2 + 0x28) * (1.0 - fVar8);
    fVar8 = (float)FUN_001afdb0(iVar6 + 0x1a0);
    if ((fVar9 < fVar8) && (lVar4 == 0)) {
      cVar1 = *(char *)(iVar6 + 0x13d);
      goto LAB_00151dc8;
    }
    if (fVar9 < fVar7) {
      *(int *)(iVar6 + 0x1b8) = (int)lVar3;
      *(undefined1 *)(iVar6 + 0x1bf) = 1;
    }
  }
  cVar1 = *(char *)(iVar6 + 0x13d);
LAB_00151dc8:
  if ((cVar1 != '\0') && (0.0 < *(float *)(iVar2 + 0x44))) {
    fVar9 = *(float *)(iVar2 + 0x28) * (1.0 - *(float *)(iVar2 + 0x44));
    fVar8 = (float)FUN_001afdb0(iVar6 + 0x1a0);
    if (((fVar8 <= fVar9) || (lVar4 != 0)) && (fVar9 < fVar7)) {
      FUN_0014c3e0(param_2);
    }
  }
  return;
}


// ==== FUN_00151e60 @ 00151e60 ====

void FUN_00151e60(int param_1)

{
  FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  return;
}


// ==== FUN_00151e80 @ 00151e80 ====
// GLOBAL DAT_0040f4cc undefined4
// GLOBAL DAT_0040f52c undefined4

void FUN_00151e80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_50 [16];
  undefined4 uStack_44;
  
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 0x124) = 0;
  if (*(char *)(iVar6 + 0x13c) != '\0') {
    if (*(int *)(iVar6 + 0xb4) == 0) {
      lVar4 = FUN_001afda8(iVar6 + 0x1a0);
      if (lVar4 != -1) {
        FUN_0025c558(DAT_0040f4cc,param_1,1,5,0xffffffffffffffff);
      }
      iVar3 = *(int *)(iVar6 + 0xb4);
    }
    else {
      iVar3 = *(int *)(iVar6 + 0xb4);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar6 + 0x10);
      goto LAB_00151fd8;
    }
    FUN_0025dba8();
    iVar3 = *(int *)(*(int *)(iVar6 + 0x128) + 4);
    *(undefined4 *)(iVar3 + 0x10) = 0x322bcc77;
    *(undefined4 *)(iVar3 + 0x14) = 0x322bcc77;
    *(undefined4 *)(iVar3 + 0x18) = 0x33d6bf95;
    *(undefined4 *)(iVar3 + 0x1c) = uStack_44;
    auVar8._8_4_ = 0x33d6bf95;
    auVar8._0_8_ = 0x322bcc77322bcc77;
    auVar8._12_4_ = uStack_44;
    auVar8 = _lqc2(auVar8);
    auVar5 = _qmfc2(auVar8._0_4_);
    auVar8 = _sqc2(auVar8);
    uStack_4c = auVar8._4_4_;
    auVar1._8_4_ = 0x33d6bf95;
    auVar1._0_8_ = 0x322bcc77322bcc77;
    auVar1._12_4_ = uStack_44;
    auVar8 = _lqc2(auVar1);
    if (auVar5._0_4_ < uStack_4c) {
      auVar8 = _qmfc2(auVar8._0_4_);
      *(int *)(iVar3 + 0x24) = auVar8._0_4_;
    }
    else {
      auVar8 = _sqc2(auVar8);
      uStack_4c = auVar8._4_4_;
      *(float *)(iVar3 + 0x24) = uStack_4c;
    }
    auVar5._8_4_ = 0x33d6bf95;
    auVar5._0_8_ = 0x322bcc77322bcc77;
    auVar5._12_4_ = uStack_44;
    auVar8 = _lqc2(auVar5);
    auVar8 = _sqc2(auVar8);
    fVar7 = *(float *)(iVar3 + 0x24);
    uStack_48 = auVar8._8_4_;
    if (uStack_48 <= fVar7) {
      auVar2._8_4_ = 0x33d6bf95;
      auVar2._0_8_ = 0x322bcc77322bcc77;
      auVar2._12_4_ = uStack_44;
      auVar8 = _lqc2(auVar2);
      auVar8 = _sqc2(auVar8);
      uStack_48 = auVar8._8_4_;
      fVar7 = uStack_48;
    }
    *(float *)(iVar3 + 0x24) = 1.0 / fVar7;
    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x128) + 4) + 0x20) = 0x322bcc77;
    FUN_0014da08(DAT_0040f52c,param_1);
  }
  iVar3 = *(int *)(iVar6 + 0x10);
LAB_00151fd8:
  (**(code **)(iVar3 + 0x14))(iVar6 + *(short *)(iVar3 + 0x10),param_2);
  return;
}


// ==== FUN_00152000 @ 00152000 ====
// GLOBAL PTR_LAB_003f4ba0 pointer

void FUN_00152000(undefined8 param_1,ulong param_2)

{
  if (param_2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0015202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003f4ba0)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_001520e0 @ 001520e0 ====

int FUN_001520e0(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00151e60();
  iVar1 = (int)lVar2 + 0xb0;
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_00152108 @ 00152108 ====

undefined1 FUN_00152108(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)((int)lVar3 + 0xc0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(**(int **)(iVar1 + 0x24) + 4);
    }
  }
  return uVar2;
}


// ==== FUN_00152148 @ 00152148 ====
// GLOBAL DAT_0040f4d8 int

void FUN_00152148(undefined8 param_1)

{
  short sVar1;
  
  FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,1);
  sVar1 = *(short *)((int)param_1 + 0x1bc);
  if (sVar1 != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,sVar1);
  }
  return;
}


// ==== FUN_001521b8 @ 001521b8 ====
// GLOBAL DAT_0040f4cc undefined4

void FUN_001521b8(int param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [12];
  float fVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined1 auStack_90 [8];
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x118) + 0x48) + param_2 * 0xd0;
  if (*(char *)(iVar6 + 0xce) == '\0') {
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xa0));
    auVar9 = _qmtc2(0x3f000000);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
    auVar7 = _vsub(auVar7,auVar8);
    auVar7 = _vmulbc(auVar7,auVar9);
    iVar2 = *(int *)(param_1 + 0xb8);
    auVar7 = _qmfc2(auVar7._0_4_);
    fVar4 = auVar7._0_4_;
    auVar7 = _qmtc2((uint)(fVar4 < 0.05) * 0x3d4ccccd | (int)fVar4 * (uint)(fVar4 >= 0.05));
    auVar7 = _vaddbc(in_vf0,auVar7);
    auVar7 = _sqc2(auVar7);
    auStack_90._4_4_ = auVar7._4_4_;
    auVar7 = _qmtc2((uint)((float)auStack_90._4_4_ < 0.05) * 0x3d4ccccd |
                    auStack_90._4_4_ * (uint)((float)auStack_90._4_4_ >= 0.05));
    auVar7 = _vaddbc(in_vf0,auVar7);
    auVar7 = _sqc2(auVar7);
    fStack_88 = auVar7._8_4_;
    auVar7 = _qmtc2((uint)(fStack_88 < 0.05) * 0x3d4ccccd |
                    (int)fStack_88 * (uint)(fStack_88 >= 0.05));
    auVar11 = _vaddbc(in_vf0,auVar7);
    auVar8 = _qmfc2(auVar11._0_4_);
    auVar7 = _sqc2(auVar11);
    uStack_6c = auVar7._4_4_;
    auVar7 = _sqc2(auVar11);
    uStack_68 = auVar7._8_4_;
    auVar7._4_4_ = uStack_6c;
    auVar7._0_4_ = auVar8._0_4_;
    auVar7._8_4_ = uStack_68;
    auVar7._12_4_ = 0;
    auVar8 = _lqc2(auVar7);
    auVar7 = _qmfc2(auVar8._0_4_);
    *(int *)(iVar2 + 0x40) = auVar7._0_4_;
    auVar7 = _sqc2(auVar8);
    auStack_90._4_4_ = auVar7._4_4_;
    *(undefined4 *)(iVar2 + 0x44) = auStack_90._4_4_;
    auVar7 = _sqc2(auVar8);
    fStack_88 = auVar7._8_4_;
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar7 = _vsub(in_vf0,in_vf0);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    *(float *)(iVar2 + 0x48) = fStack_88;
    **(undefined4 **)(*(int *)(param_1 + 0x128) + 4) = *(undefined4 *)(param_1 + 0xb8);
    pauVar1 = *(undefined1 (**) [16])(param_1 + 0xb8);
    auVar7 = _sqc2(auVar7);
    pauVar1[3] = auVar7;
    auVar7 = _sqc2(auVar8);
    *pauVar1 = auVar7;
    auVar7 = _sqc2(auVar9);
    pauVar1[1] = auVar7;
    auVar7 = _sqc2(auVar10);
    pauVar1[2] = auVar7;
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
    auVar7 = _vsub(auVar7,auVar11);
    auVar7 = _sqc2(auVar7);
    pauVar1[3] = auVar7;
  }
  else {
    pauVar1 = *(undefined1 (**) [16])(iVar6 + 0xc4);
    if (*(int *)pauVar1[4] == 0) {
      auVar7 = _lqc2(*pauVar1);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar9 = _lqc2(pauVar1[1]);
      auVar7 = _vmul(auVar7,auVar7);
      auVar8 = _lqc2(pauVar1[2]);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar10,auVar7);
      auVar9 = _vmul(auVar9,auVar9);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar7);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar12);
      _vaddabc(auVar9,auVar9);
      auVar9 = _vmaddbc(auVar10,auVar9);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddbc(in_vf0,auVar7);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar9);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar9 = _vmulq(auVar7,uVar12);
      _vaddabc(auVar8,auVar8);
      auVar7 = _vmaddbc(auVar10,auVar8);
      pauVar5 = *(undefined1 (**) [16])(param_1 + 0xb8);
      _vaddbc(in_vf0,auVar9);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar7);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar12);
      auVar7 = _vaddbc(in_vf0,auVar7);
      auVar7 = _sqc2(auVar7);
      auVar8 = _sqc2(auVar10);
      FUN_003342d0(pauVar5,4);
      auVar10 = _lqc2(auVar7);
      auVar9 = _qmfc2(auVar10._0_4_);
      auVar7 = _sqc2(auVar10);
      auStack_90._4_4_ = auVar7._4_4_;
      auVar7 = _sqc2(auVar10);
      fStack_88 = auVar7._8_4_;
      auStack_90._0_4_ = auVar9._0_4_;
      uStack_84 = auVar7._12_4_;
      auVar9 = _lqc2(_auStack_90);
      auVar7 = _qmfc2(auVar9._0_4_);
      *(int *)pauVar5[4] = auVar7._0_4_;
      auVar7 = _sqc2(auVar9);
      auStack_90._4_4_ = auVar7._4_4_;
      *(undefined4 *)(pauVar5[4] + 4) = auStack_90._4_4_;
      auVar7 = _sqc2(auVar9);
      auVar8 = _lqc2(auVar8);
      fStack_88 = auVar7._8_4_;
      auVar7 = _vmove(auVar8);
      *(float *)(pauVar5[4] + 8) = fStack_88;
    }
    else {
      pauVar5 = *(undefined1 (**) [16])(param_1 + 0xb8);
      FUN_003342d0(pauVar5,2);
      auVar7 = _lqc2(pauVar1[2]);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      auVar8 = _vmul(auVar7,auVar7);
      auVar7 = _vmove(auVar9);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar9,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar12);
      auVar8 = _qmfc2(auVar8._0_4_);
      *(int *)pauVar5[4] = auVar8._0_4_;
      auVar8 = _lqc2(pauVar1[1]);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar9,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar12);
      auVar8 = _qmfc2(auVar8._0_4_);
      *(int *)(pauVar5[4] + 0xc) = auVar8._0_4_;
    }
    auVar10 = _lqc2(*pauVar1);
    auVar8 = _vmul(auVar10,auVar10);
    _vaddabc(auVar8,auVar8);
    auVar9 = _vmaddbc(auVar7,auVar8);
    auVar8 = _sqc2(auVar10);
    *pauVar5 = auVar8;
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    uVar12 = _vwaitq();
    auVar11 = _vmulq(auVar10,uVar12);
    auVar10 = _lqc2(pauVar1[1]);
    auVar8 = _vmul(auVar10,auVar10);
    _vaddabc(auVar8,auVar8);
    auVar9 = _vmaddbc(auVar7,auVar8);
    auVar8 = _sqc2(auVar10);
    pauVar5[1] = auVar8;
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar9);
    uVar12 = _vwaitq();
    auVar10 = _vmulq(auVar10,uVar12);
    auVar9 = _lqc2(pauVar1[2]);
    auVar8 = _vmul(auVar9,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar7,auVar8);
    auVar7 = _sqc2(auVar9);
    pauVar5[2] = auVar7;
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar12 = _vwaitq();
    auVar7 = _vmulq(auVar9,uVar12);
    auVar3 = *(undefined1 (*) [12])pauVar1[3];
    uVar12 = *(undefined4 *)(pauVar1[3] + 0xc);
    auVar7 = _sqc2(auVar7);
    pauVar5[2] = auVar7;
    auVar7 = _sqc2(auVar11);
    *pauVar5 = auVar7;
    auVar7 = _sqc2(auVar10);
    pauVar5[1] = auVar7;
    *(int *)pauVar5[3] = auVar3._0_4_;
    *(int *)(pauVar5[3] + 4) = auVar3._4_4_;
    *(int *)(pauVar5[3] + 8) = auVar3._8_4_;
    *(undefined4 *)(pauVar5[3] + 0xc) = uVar12;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_0025ce40(DAT_0040f4cc);
  }
  return;
}


// ==== FUN_00152588 @ 00152588 ====
// GLOBAL DAT_0040f4d8 int

void FUN_00152588(int param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fStack_5c;
  undefined1 auStack_50 [16];
  
  if (param_2 != 0) {
    plVar2 = (long *)param_2;
    FUN_001df908(auStack_50,*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)((int)plVar2 + 0x4c));
    auVar4 = _lqc2(*(undefined1 (*) [16])(plVar2 + 0x12));
    auVar3 = _lqc2(*(undefined1 (*) [16])(plVar2 + 0x14));
    auVar4 = _vsub(auVar3,auVar4);
    auVar3 = _qmfc2(auVar4._0_4_);
    if (ABS(auVar3._0_4_) <= 0.75) {
      auVar3 = _sqc2(auVar4);
      fStack_5c = auVar3._4_4_;
      if (ABS(fStack_5c) <= 0.75) {
        _sqc2(auVar4);
      }
    }
    if (param_3 == 0) {
      lVar1 = plVar2[1];
    }
    else {
      lVar1 = *plVar2;
    }
    if (lVar1 == 0) {
      FUN_001b79c0(DAT_0040f4d8 + 0x696f0,param_1 + 0x70,*(undefined4 *)((int)plVar2 + 0x4c));
    }
    else {
      FUN_001b7a00(DAT_0040f4d8 + 0x696f0,param_1 + 0x70,lVar1,0);
    }
  }
  return;
}


// ==== FUN_00152690 @ 00152690 ====

undefined8 FUN_00152690(void)

{
  return 0;
}


// ==== FUN_00152698 @ 00152698 ====

bool FUN_00152698(void)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fStack_1c;
  float fStack_18;
  
  lVar2 = FUN_001528b8();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    auVar4 = _lqc2(*(undefined1 (*) [16])lVar2);
    auVar3 = _lqc2(((undefined1 (*) [16])lVar2)[1]);
    auVar4 = _vsub(auVar4,auVar3);
    auVar3 = _qmfc2(auVar4._0_4_);
    if (auVar3._0_4_ < 0.5) {
      auVar3 = _sqc2(auVar4);
      fStack_1c = auVar3._4_4_;
      bVar1 = true;
      if (fStack_1c < 0.5) {
        auVar3 = _sqc2(auVar4);
        fStack_18 = auVar3._8_4_;
        bVar1 = 0.5 <= fStack_18;
      }
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}


// ==== FUN_00152728 @ 00152728 ====
// GLOBAL DAT_0040f4d8 int

bool FUN_00152728(undefined8 param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a0 [64];
  
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x13c) != '\0') {
    lVar3 = FUN_00151e60(param_1);
    uVar2 = FUN_001afda8(iVar4 + 0x1a0);
    if (lVar3 == 0) {
      return false;
    }
    if (*(char *)(iVar4 + 0x1c1) == '\0') {
      iVar5 = (int)lVar3;
      if (0.9 < (float)((ulong)param_2[2] >> 0x20)) {
        if ((*(ushort *)(iVar5 + 0x5a) & 4) == 0) {
          if ((*(ushort *)(iVar5 + 0x5a) & 8) != 0) {
            FUN_00151b40(param_1,0,0);
          }
          lVar3 = *(long *)(iVar5 + 0x20);
        }
        else {
          FUN_00151b40(param_1,1,0);
          lVar3 = *(long *)(iVar5 + 0x20);
        }
      }
      else {
        lVar3 = *(long *)(iVar5 + 0x20);
      }
      if (lVar3 != 0) {
        FUN_001b1728(*param_2,param_2[2],auStack_a0);
        FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_a0,*(undefined8 *)(iVar5 + 0x20),1);
      }
      uVar1 = *(ushort *)(iVar5 + 0x5a);
      if ((uVar1 & 0x40) != 0) {
        *(undefined4 *)(iVar4 + 0x1b8) = uVar2;
        *(undefined1 *)(iVar4 + 0x1bf) = 1;
      }
      *(undefined1 *)(iVar4 + 0x1c1) = 1;
      return (uVar1 & 0x1000) != 0;
    }
  }
  return false;
}


// ==== FUN_00152878 @ 00152878 ====
// GLOBAL DAT_0040f4d8 int

void FUN_00152878(int param_1)

{
  if (*(short *)(param_1 + 0x1bc) != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*(undefined2 *)(param_1 + 0x1bc));
  }
  return;
}


// ==== FUN_001528b8 @ 001528b8 ====

int FUN_001528b8(int param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  iVar1 = (int)lVar2 + 0x90;
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_001528e8 @ 001528e8 ====

void FUN_001528e8(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  *(int *)(param_1 + 0x11c) = (int)param_2;
  *(int *)(*(int *)((int)param_2 + 0x40) + 0x84) = param_1;
  uVar1 = FUN_0014c888(param_2,*(undefined8 *)(*(int *)(*(int *)(param_1 + 0x118) + 0x48) + 0x60));
  *(undefined1 *)(*(int *)(param_1 + 0x120) + 0x60) = uVar1;
  return;
}


// ==== FUN_00152930 @ 00152930 ====

void FUN_00152930(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  FUN_0014cdb8(*(undefined4 *)(param_1 + 0x120));
  uVar1 = FUN_0014c888(*(undefined4 *)(param_1 + 0x11c),param_3);
  *(undefined1 *)(*(int *)(param_1 + 0x120) + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x13d) = 1;
  return;
}


// ==== FUN_00152988 @ 00152988 ====

void FUN_00152988(int param_1,long param_2)

{
  if ((param_2 == 0) &&
     ((*(uint *)(param_1 + 0x1b4) < 2 || (*(char *)(*(int *)(param_1 + 0xb4) + 0x3d) == '\0')))) {
    FUN_00151b40(param_1,1,1);
  }
  return;
}


// ==== FUN_001529d0 @ 001529d0 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001529d0(int param_1)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if ((lVar2 != 0) && ((*(ushort *)((int)lVar2 + 0x58) & 0x2000) != 0)) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    iVar3 = DAT_0040f4d0 + 0x5acc;
    uVar1 = FUN_001afda8(param_1 + 0x1a0);
    FUN_00153310(iVar3,*(undefined4 *)(param_1 + 0x118),uVar1,param_1 + 0x70);
  }
  return;
}


// ==== FUN_00152a50 @ 00152a50 ====

undefined4 FUN_00152a50(int param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_vf6 [16];
  
  auVar5 = _sqc2(in_vf6);
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  _lqc2(auVar5);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = (int)lVar2;
    if (*(char *)(iVar3 + 0xce) == '\0') {
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
      auVar5 = _vsub(auVar6,auVar5);
    }
    else {
      pauVar1 = *(undefined1 (**) [16])(iVar3 + 0xc4);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar9 = _qmtc2(0x40000000);
      auVar5 = _lqc2(*pauVar1);
      auVar5 = _vmul(auVar5,auVar5);
      auVar6 = _lqc2(pauVar1[1]);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar8,auVar5);
      auVar7 = _vmul(auVar6,auVar6);
      auVar6 = _lqc2(pauVar1[2]);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar4 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar4);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar8,auVar7);
      auVar6 = _vmul(auVar6,auVar6);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar8,auVar6);
      auVar5 = _vmulbc(auVar5,auVar9);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar7);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      uVar4 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar4);
      _vaddbc(in_vf0,auVar5);
      auVar7 = _vmulbc(auVar7,auVar9);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar6);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar4 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar4);
      auVar5 = _vmulbc(auVar5,auVar9);
      _vaddbc(in_vf0,auVar7);
      auVar5 = _vaddbc(in_vf0,auVar5);
    }
    auVar6 = _vmulbc(auVar5,auVar5);
    auVar5 = _vmulbc(auVar6,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    uVar4 = auVar5._0_4_;
  }
  return uVar4;
}


// ==== FUN_00152b68 @ 00152b68 ====

bool FUN_00152b68(int param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  bVar1 = false;
  if (lVar2 != 0) {
    if (*(char *)((int)lVar2 + 0xce) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(*(int *)((int)lVar2 + 0xc4) + 0x40) == 1;
    }
  }
  return bVar1;
}


// ==== FUN_00152bb0 @ 00152bb0 ====

void FUN_00152bb0(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [12];
  long lVar3;
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar8 = _vsub(in_vf0,in_vf0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _sqc2(auVar5);
  *param_2 = auVar5;
  auVar5 = _sqc2(auVar6);
  param_2[1] = auVar5;
  auVar5 = _sqc2(auVar7);
  param_2[2] = auVar5;
  auVar5 = _sqc2(auVar8);
  param_2[3] = auVar5;
  lVar3 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if (lVar3 == 0) {
    auVar5 = _pextlw(0,0);
    auVar5 = _pextlw(0,auVar5._0_8_);
    *(int *)*param_3 = auVar5._0_4_;
    *(int *)(*param_3 + 4) = auVar5._4_4_;
    *(int *)(*param_3 + 8) = auVar5._8_4_;
    *(int *)(*param_3 + 0xc) = auVar5._12_4_;
  }
  else {
    iVar4 = (int)lVar3;
    if (*(char *)(iVar4 + 0xce) == '\0') {
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
      auVar7 = _qmtc2(0x3f000000);
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x90));
      auVar5 = _vsub(auVar6,auVar5);
      auVar6 = _vmulbc(auVar5,auVar7);
      auVar5 = _sqc2(auVar6);
      *param_3 = auVar5;
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x90));
      auVar5 = _vsub(auVar5,auVar6);
      auVar5 = _sqc2(auVar5);
      param_2[3] = auVar5;
    }
    else {
      pauVar1 = *(undefined1 (**) [16])(iVar4 + 0xc4);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar7 = _lqc2(*pauVar1);
      auVar5 = _vmul(auVar7,auVar7);
      _vaddabc(auVar5,auVar5);
      auVar6 = _vmaddbc(auVar10,auVar5);
      auVar5 = _sqc2(auVar7);
      *param_2 = auVar5;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      uVar11 = _vwaitq();
      auVar9 = _vmulq(auVar7,uVar11);
      auVar7 = _lqc2(pauVar1[1]);
      auVar5 = _vmul(auVar7,auVar7);
      _vaddabc(auVar5,auVar5);
      auVar6 = _vmaddbc(auVar10,auVar5);
      auVar5 = _sqc2(auVar7);
      param_2[1] = auVar5;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      uVar11 = _vwaitq();
      auVar8 = _vmulq(auVar7,uVar11);
      auVar7 = _lqc2(pauVar1[2]);
      auVar5 = _vmul(auVar7,auVar7);
      _vaddabc(auVar5,auVar5);
      auVar6 = _vmaddbc(auVar10,auVar5);
      auVar5 = _sqc2(auVar7);
      param_2[2] = auVar5;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      uVar11 = _vwaitq();
      auVar5 = _vmulq(auVar7,uVar11);
      auVar2 = *(undefined1 (*) [12])pauVar1[3];
      uVar11 = *(undefined4 *)(pauVar1[3] + 0xc);
      auVar5 = _sqc2(auVar5);
      param_2[2] = auVar5;
      auVar5 = _sqc2(auVar9);
      *param_2 = auVar5;
      auVar5 = _sqc2(auVar8);
      param_2[1] = auVar5;
      *(int *)param_2[3] = auVar2._0_4_;
      *(int *)(param_2[3] + 4) = auVar2._4_4_;
      *(int *)(param_2[3] + 8) = auVar2._8_4_;
      *(undefined4 *)(param_2[3] + 0xc) = uVar11;
      auVar5 = _lqc2(*pauVar1);
      auVar5 = _vmul(auVar5,auVar5);
      _lqc2(*param_3);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar10,auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar11);
      auVar5 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar5);
      *param_3 = auVar5;
      auVar5 = _lqc2(pauVar1[1]);
      auVar5 = _vmul(auVar5,auVar5);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar10,auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar11);
      auVar5 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar5);
      *param_3 = auVar5;
      auVar5 = _lqc2(pauVar1[2]);
      auVar5 = _vmul(auVar5,auVar5);
      _vaddabc(auVar5,auVar5);
      auVar5 = _vmaddbc(auVar10,auVar5);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar5);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar11);
      auVar5 = _vaddbc(in_vf0,auVar5);
      auVar5 = _sqc2(auVar5);
      *param_3 = auVar5;
    }
  }
  return;
}


// ==== FUN_00152db0 @ 00152db0 ====

bool FUN_00152db0(int param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)((int)lVar2 + 0x54) == 8;
  }
  return bVar1;
}


// ==== FUN_00152de8 @ 00152de8 ====

undefined4 FUN_00152de8(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)((int)lVar3 + 0x5a);
    if (((uVar1 & 0x800) == 0) || ((uVar2 = 1, (uVar1 & 1) == 0 && (uVar2 = 1, (uVar1 & 2) == 0))))
    {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ==== FUN_00152e38 @ 00152e38 ====

undefined4 FUN_00152e38(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_001afd80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x118));
  uVar2 = 0x41700000;
  if ((lVar1 != 0) && (uVar2 = 0x41700000, *(int *)((int)lVar1 + 0x54) == 8)) {
    uVar2 = 0x40600000;
  }
  return uVar2;
}


// ==== FUN_00152e80 @ 00152e80 ====

void FUN_00152e80(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [16];
  
  FUN_00152bb0(param_1,auStack_a0,auStack_50);
  auVar4 = _lqc2(auStack_50);
  auVar2 = _qmfc2(auVar4._0_4_);
  auVar8 = _sqc2(auVar4);
  fStack_5c = auVar8._4_4_;
  bVar1 = false;
  if (auVar2._0_4_ < fStack_5c) {
    auVar8 = _sqc2(auVar4);
    fStack_58 = auVar8._8_4_;
    bVar1 = auVar2._0_4_ < fStack_58;
  }
  auVar8 = _lqc2(auStack_a0);
  if (!bVar1) {
    auVar4 = _lqc2(auStack_50);
    auVar2 = _qmfc2(auVar4._0_4_);
    auVar8 = _sqc2(auVar4);
    fStack_5c = auVar8._4_4_;
    bVar1 = false;
    if (fStack_5c < auVar2._0_4_) {
      auVar8 = _sqc2(auVar4);
      fStack_5c = auVar8._4_4_;
      auVar8 = _sqc2(auVar4);
      fStack_58 = auVar8._8_4_;
      bVar1 = fStack_5c < fStack_58;
    }
    auVar8 = _lqc2(auStack_90);
    if (!bVar1) {
      auVar8 = _lqc2(auStack_80);
    }
  }
  iVar3 = (int)param_1;
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
  auVar7 = _vaddbc(in_vf0,in_vf0);
  _vmulabc(auVar5,auVar8);
  _vmaddabc(auVar2,auVar8);
  auVar5 = _vmaddbc(auVar4,auVar8);
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
  auVar2 = _vmul(auVar5,auVar5);
  auVar8 = _lqc2(*param_2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar6,auVar2);
  auVar8 = _vsub(auVar8,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar9 = _vwaitq();
  auVar4 = _vmulq(auVar5,uVar9);
  _vmulq(auVar2,uVar9);
  auVar8 = _vmul(auVar8,auVar4);
  _vaddabc(auVar8,auVar8);
  auVar8 = _vmaddbc(auVar7,auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  if (auVar8._0_4_ < 0.0) {
    auVar4 = _vsub(in_vf0,auVar4);
    _lqc2(*param_3);
  }
  else {
    _lqc2(*param_3);
  }
  auVar8 = _vsub(in_vf0,auVar4);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar2 = _vsub(in_vf0,auVar4);
  _vmove(auVar8);
  auVar5 = _qmtc2(0x3f000000);
  auVar8 = _vaddbc(in_vf0,auVar2);
  auVar2 = _vsub(in_vf0,auVar4);
  auVar8 = _sqc2(auVar8);
  *param_3 = auVar8;
  auVar4 = _vmulbc(auVar4,auVar5);
  auVar8 = _vaddbc(in_vf0,auVar2);
  auVar8 = _sqc2(auVar8);
  *param_3 = auVar8;
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
  auVar2 = _vadd(auVar8,auVar4);
  _lqc2(*param_2);
  auVar8 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar8);
  auVar8 = _vaddbc(in_vf0,auVar2);
  auVar8 = _sqc2(auVar8);
  *param_2 = auVar8;
  auVar8 = _vaddbc(in_vf0,auVar2);
  auVar8 = _sqc2(auVar8);
  *param_2 = auVar8;
  return;
}


// ==== FUN_00153058 @ 00153058 ====

void FUN_00153058(void)

{
  FUN_0014b8a0();
  return;
}


// ==== FUN_00153078 @ 00153078 ====

undefined4 FUN_00153078(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_0014b948(param_1,param_2,param_3);
  return 1;
}


// ==== FUN_00153098 @ 00153098 ====

void FUN_00153098(void)

{
  FUN_0014ba80();
  return;
}


// ==== FUN_001530b8 @ 001530b8 ====

undefined4 FUN_001530b8(void)

{
  FUN_0014ba58();
  return 1;
}


// ==== FUN_001530e0 @ 001530e0 ====
// GLOBAL DAT_003dc160 undefined

void FUN_001530e0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00107d20(24000);
  iVar4 = 99;
  iVar3 = iVar1;
  do {
    *(undefined **)(iVar3 + 0x10) = &DAT_003dc160;
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 0xf0;
  } while (iVar4 != -1);
  *param_1 = iVar1;
  iVar3 = FUN_00107d20(100);
  iVar1 = 0;
  param_1[1] = iVar3;
  iVar3 = 0;
  param_1[2] = 0;
  do {
    FUN_00153058(*param_1 + iVar3);
    iVar3 = iVar3 + 0xf0;
    puVar2 = (undefined1 *)(param_1[1] + iVar1);
    iVar1 = iVar1 + 1;
    *puVar2 = 0;
  } while (iVar1 < 100);
  return;
}


// ==== FUN_00153190 @ 00153190 ====

undefined4 FUN_00153190(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar2);
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
  } while (iVar2 < 100);
  return 1;
}


// ==== FUN_001531b8 @ 001531b8 ====

void FUN_001531b8(void)

{
  return;
}


// ==== FUN_001531c0 @ 001531c0 ====

undefined4 FUN_001531c0(void)

{
  return 1;
}


// ==== FUN_001531c8 @ 001531c8 ====

void FUN_001531c8(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_001531d8 @ 001531d8 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_001531d8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_1[1] + iVar1) != '\0') {
      FUN_0012a280(DAT_0040f4d0,*param_1 + iVar2);
      *(undefined1 *)(param_1[1] + iVar1) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0xf0;
  } while (iVar1 < 100);
  return;
}


// ==== FUN_00153258 @ 00153258 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00153258(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ((*(char *)(param_1[1] + iVar2) != '\0') &&
       (lVar1 = FUN_00107bc0(0x40f0f0,*(undefined4 *)(iVar3 + *param_1 + 0xdc)), lVar1 == param_2))
    {
      FUN_0012a280(DAT_0040f4d0,*param_1 + iVar3);
      *(undefined1 *)(param_1[1] + iVar2) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0xf0;
  } while (iVar2 < 100);
  return;
}


// ==== FUN_00153310 @ 00153310 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00153310(int *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1[1] + param_1[2]) != '\0') {
    FUN_0012a280(DAT_0040f4d0,*param_1 + param_1[2] * 0xf0);
    iVar2 = param_1[2] * 0xf0 + *param_1;
    iVar1 = *(int *)(iVar2 + 0x10);
    (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
  }
  FUN_00153078(*param_1 + param_1[2] * 0xf0,param_2,param_3,param_4);
  FUN_0012a158(DAT_0040f4d0,*param_1 + param_1[2] * 0xf0);
  *(undefined1 *)(param_1[1] + param_1[2]) = 1;
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  if (99 < iVar1 + 1) {
    param_1[2] = 0;
  }
  return;
}


// ==== FUN_00153420 @ 00153420 ====

void FUN_00153420(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ==== FUN_00153438 @ 00153438 ====

undefined4 FUN_00153438(int param_1)

{
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return 1;
}


// ==== FUN_00153448 @ 00153448 ====

void FUN_00153448(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if (*param_1 == 0) {
      *param_1 = (int)param_2;
      param_1[2] = param_3;
    }
    else {
      param_1[1] = (int)param_2;
      param_1[3] = param_3;
    }
    if (0 < param_3) {
      do {
        iVar1 = param_1[4];
        param_3 = param_3 + -1;
        iVar2 = *param_2;
        param_2 = param_2 + 1;
        param_1[4] = iVar1 + 1;
        *(int *)(iVar2 + 0x130) = iVar1;
      } while (param_3 != 0);
    }
  }
  return;
}


// ==== FUN_001534a8 @ 001534a8 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_001534a8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (param_2 == *param_1) {
      iVar3 = 0;
      if (0 < param_1[2]) {
        iVar1 = *param_1;
        while( true ) {
          iVar2 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          FUN_00129240(DAT_0040f4d0,*(undefined4 *)(*(int *)(iVar2 + iVar1) + 0x18),1);
          if (param_1[2] <= iVar3) break;
          iVar1 = *param_1;
        }
      }
      param_1[2] = 0;
      *param_1 = 0;
    }
    else {
      iVar3 = 0;
      if (0 < param_1[3]) {
        iVar1 = param_1[1];
        while( true ) {
          iVar2 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          FUN_00129240(DAT_0040f4d0,*(undefined4 *)(*(int *)(iVar2 + iVar1) + 0x18),1);
          if (param_1[3] <= iVar3) break;
          iVar1 = param_1[1];
        }
      }
      param_1[3] = 0;
      param_1[1] = 0;
    }
  }
  return;
}


// ==== FUN_00153588 @ 00153588 ====
// GLOBAL DAT_0040f4d0 int

void FUN_00153588(void)

{
  FUN_001535b0(*(undefined4 *)(DAT_0040f4d0 + 0x1c));
  return;
}


// ==== FUN_001535b0 @ 001535b0 ====

void FUN_001535b0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*param_2 != 0) && (iVar3 = 0, 0 < param_2[2])) {
    iVar2 = *param_2;
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0xc))(param_1,iVar2 + *(short *)(iVar1 + 8));
      if (param_2[2] <= iVar3) break;
      iVar2 = *param_2;
    }
  }
  if ((param_2[1] != 0) && (iVar3 = 0, 0 < param_2[3])) {
    iVar2 = param_2[1];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0xc))(param_1,iVar2 + *(short *)(iVar1 + 8));
      if (param_2[3] <= iVar3) break;
      iVar2 = param_2[1];
    }
  }
  return;
}


// ==== FUN_00153690 @ 00153690 ====

undefined4 FUN_00153690(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}


// ==== FUN_001536b0 @ 001536b0 ====

void FUN_001536b0(void)

{
  return;
}


// ==== FUN_001536b8 @ 001536b8 ====

void FUN_001536b8(int param_1)

{
  FUN_00165ae0();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// ==== FUN_001536e0 @ 001536e0 ====

undefined4 FUN_001536e0(int param_1)

{
  FUN_00165af8();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}


// ==== FUN_00153710 @ 00153710 ====

void FUN_00153710(int param_1)

{
  FUN_00154530(*(undefined4 *)(param_1 + 0x18));
  return;
}


// ==== FUN_00153730 @ 00153730 ====

undefined4 FUN_00153730(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_00153758 @ 00153758 ====
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_0040f4a4 undefined4
// GLOBAL DAT_003dc838 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153758(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
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
  undefined4 in_vuI;
  undefined4 uVar20;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  FUN_00165ae0();
  FUN_00165bc8(param_1,*(undefined1 *)(param_3 + 4));
  puVar7 = (undefined8 *)param_1;
  FUN_001536b8(puVar7 + 0xe);
  *puVar7 = param_2;
  auVar12 = _vmaxbc(in_vf0,in_vf0);
  auVar10 = _lqc2(_DAT_004432c0);
  auVar8 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  auVar11 = _vmul(auVar10,auVar10);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar8 = _vsubi(auVar8,in_vuI);
  auVar8 = _vabs(auVar8);
  _vaddabc(auVar11,auVar11);
  auVar11 = _vmaddbc(auVar9,auVar11);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar8,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar12,in_vuI);
  _vmaddai(auVar12,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar8,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar8 = _vmsubi(auVar12,in_vuI);
  auVar8 = _vabs(auVar8);
  _ctc2(0x3e800000);
  _vnop();
  auVar8 = _vsubi(auVar8,in_vuI);
  auVar13 = _vmul(auVar8,auVar8);
  _ctc2(0xc2992661);
  _vnop();
  auVar9 = _vmuli(auVar8,in_vuI);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar11);
  uVar20 = _vwaitq();
  auVar10 = _vmulq(auVar10,uVar20);
  auVar18 = _vmul(auVar13,auVar13);
  _ctc2(0xc2255de0);
  _vnop();
  auVar16 = _vmuli(auVar8,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar15 = _vmuli(auVar8,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar14 = _vmuli(auVar8,in_vuI);
  auVar11 = _vmul(auVar18,auVar18);
  auVar9 = _vmul(auVar9,auVar13);
  auVar12 = _vmulbc(auVar10,auVar10);
  _vmula(auVar16,auVar13);
  _vmadda(auVar9,auVar18);
  _ctc2(0x40c90fda);
  _vmadda(auVar15,auVar18);
  _vmaddai(auVar8,in_vuI);
  auVar8 = _vmadd(auVar14,auVar11);
  _lqc2(auStack_60);
  _lqc2(auStack_50);
  auVar9 = _qmtc2(0x3f800000);
  _vaddbc(in_vf0,auVar12);
  auVar14 = _vaddbc(in_vf0,auVar9);
  auVar11 = _vmulbc(auVar10,auVar10);
  auVar9 = _vmul(auVar10,auVar10);
  _vaddbc(in_vf0,auVar11);
  auVar8 = _vsubbc(auVar14,auVar8);
  auVar12 = _vmulbc(auVar10,auVar10);
  auVar11 = _vsub(in_vf0,auVar9);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar9 = _vaddbc(in_vf0,auVar12);
  auVar11 = _vaddbc(auVar11,auVar14);
  auVar10 = _vmulbc(auVar10,auVar8);
  auVar9 = _vmulbc(auVar9,auVar8);
  auVar11 = _vmulbc(auVar11,auVar8);
  _lqc2(auStack_b0);
  auVar13 = _vsubbc(auVar14,auVar11);
  _lqc2(auStack_a0);
  auVar8 = _vsubbc(auVar9,auVar10);
  _lqc2(auStack_90);
  auVar12 = _vaddbc(auVar9,auVar10);
  auVar16 = _vaddbc(in_vf0,auVar8);
  auVar13 = _vaddbc(in_vf0,auVar13);
  auVar18 = _vaddbc(in_vf0,auVar12);
  auVar8 = _vaddbc(auVar9,auVar10);
  _vmove(auVar13);
  auVar12 = _vsubbc(auVar14,auVar11);
  auVar15 = _vaddbc(in_vf0,auVar8);
  auVar17 = _vsubbc(auVar9,auVar10);
  auVar8 = _vsubbc(auVar9,auVar10);
  auVar14 = _vsubbc(auVar14,auVar11);
  _vmove(auVar16);
  auVar9 = _vaddbc(auVar9,auVar10);
  _vmove(auVar18);
  auVar19 = _vaddbc(in_vf0,auVar12);
  auVar17 = _vaddbc(in_vf0,auVar17);
  _vmove(auVar15);
  auVar11 = _vaddbc(in_vf0,auVar8);
  _vmove(auVar19);
  _vmove(auVar17);
  auVar10 = _vaddbc(in_vf0,auVar9);
  auVar12 = _vaddbc(in_vf0,auVar14);
  auVar9 = _vadd(in_vf0,in_vf0);
  auVar8 = _sqc2(auVar9);
  *(undefined1 (*) [16])(puVar7 + 0x24) = auVar8;
  auVar8 = _sqc2(auVar11);
  *(undefined1 (*) [16])(puVar7 + 0x1e) = auVar8;
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(puVar7 + 0x20) = auVar8;
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(puVar7 + 0x22) = auVar8;
  _sqc2(auVar13);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  auVar8 = _sqc2(auVar11);
  *(undefined1 (*) [16])(puVar7 + 0x16) = auVar8;
  uVar20 = (undefined4)uVar3;
  *(undefined4 *)(puVar7 + 0x24) = uVar20;
  uVar4 = (undefined4)((ulong)uVar3 >> 0x20);
  *(undefined4 *)((int)puVar7 + 0x124) = uVar4;
  *(undefined4 *)(puVar7 + 0x25) = uVar5;
  *(undefined4 *)((int)puVar7 + 300) = uVar6;
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(puVar7 + 0x18) = auVar8;
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(puVar7 + 0x1a) = auVar8;
  *(undefined4 *)(puVar7 + 0x1c) = uVar20;
  *(undefined4 *)((int)puVar7 + 0xe4) = uVar4;
  *(undefined4 *)(puVar7 + 0x1d) = uVar5;
  *(undefined4 *)((int)puVar7 + 0xec) = uVar6;
  _sqc2(auVar16);
  bVar1 = *(byte *)(param_3 + 0x20);
  _sqc2(auVar18);
  _sqc2(auVar15);
  _sqc2(auVar19);
  _sqc2(auVar17);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar12);
  _sqc2(auVar9);
  _sqc2(auVar9);
  _sqc2(auVar11);
  _sqc2(auVar10);
  _sqc2(auVar12);
  _sqc2(auVar9);
  *(uint *)(puVar7 + 0x12) = (uint)bVar1;
  *(uint *)((int)puVar7 + 0x9c) = (uint)*(byte *)(param_3 + 0x22);
  *(uint *)(puVar7 + 0x13) = (uint)*(byte *)(param_3 + 0x21);
  bVar2 = *(byte *)(param_3 + 0x23);
  *(int *)((int)puVar7 + 0x13c) = param_3;
  *(uint *)(puVar7 + 0x14) = (uint)bVar2;
  *(undefined4 *)((int)puVar7 + 0x94) = 4;
  auVar8 = _sqc2(auVar11);
  *(undefined1 (*) [16])(puVar7 + 4) = auVar8;
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(puVar7 + 6) = auVar8;
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(puVar7 + 8) = auVar8;
  *(undefined4 *)(puVar7 + 10) = uVar20;
  *(undefined4 *)((int)puVar7 + 0x54) = uVar4;
  *(undefined4 *)(puVar7 + 0xb) = uVar5;
  *(undefined4 *)((int)puVar7 + 0x5c) = uVar6;
  puVar7[0xd] = param_2;
  *(undefined4 *)((int)puVar7 + 0x134) = 0;
  *(undefined4 *)(puVar7 + 0x27) = 0;
  *(undefined1 *)(puVar7 + 0x28) = 0;
  *(undefined4 *)(puVar7 + 0x26) = 0;
  if (bVar1 == 0) {
    puVar7[0xc] = 0xbc44655f12eb5c0c;
  }
  else if (bVar1 == 1) {
    puVar7[0xc] = 0xbc44655f06038b04;
  }
  uVar20 = DAT_0040f4a4;
  FUN_00107b08(0x40f0f0,DAT_0040f4a4,0,0x4b400000,0x3f000000);
  FUN_00107ab8(0x40f0f0,8,0);
  uVar3 = FUN_00107cf8(0x200);
  *(undefined **)((int)uVar3 + 0x10) = &DAT_003dc838;
  *(int *)(puVar7 + 3) = (int)uVar3;
  FUN_001444a8(uVar3,puVar7 + 4,0);
  FUN_00146bf8(*(undefined4 *)(puVar7 + 3),1);
  FUN_00107b08(0x40f0f0,8,0);
  FUN_00107ab8(0x40f0f0,uVar20,0);
  return;
}


// ==== FUN_00153b60 @ 00153b60 ====
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00153b60(undefined8 *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  long lVar4;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined4 in_vuI;
  undefined4 uVar20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  FUN_00165af8();
  FUN_001536e0(param_1 + 0xe);
  *param_1 = param_2;
  auVar12 = _vmaxbc(in_vf0,in_vf0);
  auVar10 = _lqc2(_DAT_004432c0);
  auVar11 = _vmul(auVar10,auVar10);
  auVar8 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,auVar8);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar8 = _vsubi(auVar8,in_vuI);
  auVar8 = _vabs(auVar8);
  _vaddabc(auVar11,auVar11);
  auVar11 = _vmaddbc(auVar9,auVar11);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar8,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar12,in_vuI);
  _vmaddai(auVar12,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar8,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar8 = _vmsubi(auVar12,in_vuI);
  auVar8 = _vabs(auVar8);
  _ctc2(0x3e800000);
  _vnop();
  auVar8 = _vsubi(auVar8,in_vuI);
  auVar13 = _vmul(auVar8,auVar8);
  _ctc2(0xc2992661);
  _vnop();
  auVar9 = _vmuli(auVar8,in_vuI);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar11);
  uVar20 = _vwaitq();
  auVar10 = _vmulq(auVar10,uVar20);
  auVar18 = _vmul(auVar13,auVar13);
  _ctc2(0xc2255de0);
  _vnop();
  auVar16 = _vmuli(auVar8,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar15 = _vmuli(auVar8,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar14 = _vmuli(auVar8,in_vuI);
  auVar11 = _vmul(auVar18,auVar18);
  auVar9 = _vmul(auVar9,auVar13);
  auVar12 = _vmulbc(auVar10,auVar10);
  _vmula(auVar16,auVar13);
  _vmadda(auVar9,auVar18);
  _ctc2(0x40c90fda);
  _vmadda(auVar15,auVar18);
  _vmaddai(auVar8,in_vuI);
  auVar8 = _vmadd(auVar14,auVar11);
  _lqc2(auStack_70);
  _lqc2(auStack_60);
  auVar9 = _qmtc2(0x3f800000);
  _vaddbc(in_vf0,auVar12);
  auVar14 = _vaddbc(in_vf0,auVar9);
  auVar11 = _vmulbc(auVar10,auVar10);
  auVar9 = _vmul(auVar10,auVar10);
  _vaddbc(in_vf0,auVar11);
  auVar8 = _vsubbc(auVar14,auVar8);
  auVar12 = _vmulbc(auVar10,auVar10);
  auVar11 = _vsub(in_vf0,auVar9);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar9 = _vaddbc(in_vf0,auVar12);
  auVar11 = _vaddbc(auVar11,auVar14);
  auVar10 = _vmulbc(auVar10,auVar8);
  auVar9 = _vmulbc(auVar9,auVar8);
  auVar11 = _vmulbc(auVar11,auVar8);
  _lqc2(auStack_c0);
  auVar13 = _vsubbc(auVar14,auVar11);
  _lqc2(auStack_b0);
  auVar8 = _vsubbc(auVar9,auVar10);
  _lqc2(auStack_a0);
  auVar12 = _vaddbc(auVar9,auVar10);
  auVar18 = _vaddbc(in_vf0,auVar8);
  auVar13 = _vaddbc(in_vf0,auVar13);
  auVar16 = _vaddbc(in_vf0,auVar12);
  auVar8 = _vaddbc(auVar9,auVar10);
  _vmove(auVar13);
  auVar12 = _vsubbc(auVar14,auVar11);
  auVar15 = _vaddbc(in_vf0,auVar8);
  auVar17 = _vsubbc(auVar9,auVar10);
  auVar8 = _vsubbc(auVar9,auVar10);
  auVar14 = _vsubbc(auVar14,auVar11);
  _vmove(auVar18);
  auVar9 = _vaddbc(auVar9,auVar10);
  auVar19 = _vaddbc(in_vf0,auVar12);
  _vmove(auVar16);
  _vmove(auVar15);
  auVar17 = _vaddbc(in_vf0,auVar17);
  auVar12 = _vaddbc(in_vf0,auVar8);
  _vmove(auVar19);
  auVar11 = _vaddbc(in_vf0,auVar9);
  _vmove(auVar17);
  auVar9 = _vaddbc(in_vf0,auVar14);
  auVar10 = _vadd(in_vf0,in_vf0);
  auVar8 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar8;
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x1e) = auVar8;
  auVar8 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar8;
  auVar8 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x22) = auVar8;
  _sqc2(auVar13);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = *(undefined4 *)(param_3 + 0x18);
  uVar7 = *(undefined4 *)(param_3 + 0x1c);
  auVar8 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar8;
  auVar8 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar8;
  auVar8 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar8;
  uVar20 = (undefined4)uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar20;
  uVar5 = (undefined4)((ulong)uVar3 >> 0x20);
  *(undefined4 *)((int)param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d) = uVar6;
  *(undefined4 *)((int)param_1 + 0xec) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar20;
  *(undefined4 *)((int)param_1 + 0x124) = uVar5;
  *(undefined4 *)(param_1 + 0x25) = uVar6;
  *(undefined4 *)((int)param_1 + 300) = uVar7;
  _sqc2(auVar18);
  _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar19);
  _sqc2(auVar17);
  _sqc2(auVar12);
  _sqc2(auVar11);
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar10);
  _sqc2(auVar12);
  _sqc2(auVar11);
  _sqc2(auVar9);
  _sqc2(auVar10);
  *(uint *)(param_1 + 0x12) = (uint)*(byte *)(param_3 + 0x20);
  iVar2 = *(int *)(param_1 + 3);
  *(uint *)((int)param_1 + 0x9c) = (uint)*(byte *)(param_3 + 0x22);
  *(uint *)(param_1 + 0x13) = (uint)*(byte *)(param_3 + 0x21);
  bVar1 = *(byte *)(param_3 + 0x23);
  *(int *)((int)param_1 + 0x13c) = param_3;
  *(uint *)(param_1 + 0x14) = (uint)bVar1;
  *(undefined4 *)((int)param_1 + 0x94) = 4;
  *(undefined4 *)((int)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),iVar2,0x3e800000,0x4b400000,
                     0x3f000000);
  if (lVar4 != 0) {
    FUN_00165c40(*(undefined4 *)(param_1 + 3),param_1 + 0xe);
    *(undefined4 *)((int)param_1 + 0x94) = 0;
    *(undefined8 **)(param_1 + 0x11) = param_1;
  }
  return lVar4 != 0;
}


// ==== FUN_00153eb0 @ 00153eb0 ====

void FUN_00153eb0(float param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  switch(*(undefined4 *)(iVar1 + 0x94)) {
  default:
    return;
  case 1:
    *(float *)(iVar1 + 0x134) = *(float *)(iVar1 + 0x134) + param_1;
    *(float *)(iVar1 + 0x138) = *(float *)(iVar1 + 0x138) + param_1;
    FUN_00153f78(param_2);
    break;
  case 2:
    *(float *)(iVar1 + 0x134) = *(float *)(iVar1 + 0x134) + param_1;
    *(float *)(iVar1 + 0x138) = *(float *)(iVar1 + 0x138) + param_1;
    FUN_00154110(param_2);
    break;
  case 3:
    *(float *)(iVar1 + 0x134) = *(float *)(iVar1 + 0x134) + param_1;
    *(float *)(iVar1 + 0x138) = *(float *)(iVar1 + 0x138) + param_1;
    FUN_001543c8(param_2);
    FUN_001545d8(param_2);
    return;
  }
  FUN_001545d8(param_2);
  return;
}


// ==== FUN_00153f78 @ 00153f78 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00153f78(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x13c);
  fVar4 = *(float *)(iVar1 + 0x24);
  fVar6 = *(float *)(iVar2 + 0x134) / fVar4;
  if (*(char *)(iVar2 + 0x140) == '\0') {
    FUN_00129108(DAT_0040f4d0,*(undefined4 *)(iVar2 + 0x18),1,0,0xffffffffffffffff);
    *(undefined1 *)(iVar2 + 0x140) = 1;
    iVar1 = *(int *)(iVar2 + 0x13c);
    fVar3 = *(float *)(iVar2 + 0x138);
    fVar4 = *(float *)(iVar1 + 0x24);
  }
  else {
    fVar3 = *(float *)(iVar2 + 0x138);
  }
  if (fVar3 < fVar4) {
    iVar2 = *(int *)(iVar2 + 0x98);
    switch(iVar2) {
    case 0:
    case 1:
      uVar5 = 0x42b40000;
      if (iVar2 == 1) {
        uVar5 = 0xc2b40000;
      }
      FUN_001546a0(uVar5,0,fVar6,param_1);
      break;
    case 2:
    case 3:
      fVar4 = *(float *)(iVar1 + 0x28);
      if (iVar2 == 2) {
        fVar4 = -fVar4;
      }
      FUN_00154a10(fVar4,0,fVar6,param_1);
      break;
    case 4:
      FUN_00154a70(0xc0000000,0,fVar6,param_1);
      break;
    case 5:
    case 6:
      fVar4 = *(float *)(iVar1 + 0x2c);
      fVar3 = *(float *)(iVar1 + 0x28);
      if (iVar2 == 5) {
        fVar3 = -fVar3;
        fVar4 = -fVar4;
      }
      FUN_00154ae0(fVar3,fVar4,0,fVar6,param_1);
    }
  }
  else {
    *(int *)(iVar2 + 0xc0) = (int)*(undefined8 *)(iVar2 + 0x100);
    *(int *)(iVar2 + 0xc4) = (int)((ulong)*(undefined8 *)(iVar2 + 0x100) >> 0x20);
    *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(iVar2 + 0x108);
    *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(iVar2 + 0x10c);
    *(int *)(iVar2 + 0xb0) = (int)*(undefined8 *)(iVar2 + 0xf0);
    *(int *)(iVar2 + 0xb4) = (int)((ulong)*(undefined8 *)(iVar2 + 0xf0) >> 0x20);
    *(undefined4 *)(iVar2 + 0xb8) = *(undefined4 *)(iVar2 + 0xf8);
    *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(iVar2 + 0xfc);
    *(int *)(iVar2 + 0xd0) = (int)*(undefined8 *)(iVar2 + 0x110);
    *(int *)(iVar2 + 0xd4) = (int)((ulong)*(undefined8 *)(iVar2 + 0x110) >> 0x20);
    *(undefined4 *)(iVar2 + 0xd8) = *(undefined4 *)(iVar2 + 0x118);
    *(undefined4 *)(iVar2 + 0xdc) = *(undefined4 *)(iVar2 + 0x11c);
    *(int *)(iVar2 + 0xe0) = (int)*(undefined8 *)(iVar2 + 0x120);
    *(int *)(iVar2 + 0xe4) = (int)((ulong)*(undefined8 *)(iVar2 + 0x120) >> 0x20);
    *(undefined4 *)(iVar2 + 0xe8) = *(undefined4 *)(iVar2 + 0x128);
    *(undefined4 *)(iVar2 + 0xec) = *(undefined4 *)(iVar2 + 300);
    FUN_00125f88(*(undefined4 *)(iVar2 + 0x18),iVar2 + 0xb0);
    *(undefined4 *)(iVar2 + 0x134) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 2;
  }
  return;
}


// ==== FUN_00154110 @ 00154110 ====

void FUN_00154110(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x13c);
  if (*(char *)(iVar2 + 0x3c) != '\0') {
    if (*(float *)(iVar3 + 0x138) < *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x40)) {
      iVar2 = *(int *)(iVar3 + 0x9c);
      goto LAB_00154174;
    }
    FUN_00125f88(*(undefined4 *)(iVar3 + 0x18),iVar3 + 0xf0);
    *(undefined4 *)(iVar3 + 0x134) = 0;
    *(undefined4 *)(iVar3 + 0x94) = 3;
    goto switchD_00154194_caseD_0;
  }
  iVar2 = *(int *)(iVar3 + 0x9c);
LAB_00154174:
  switch(iVar2) {
  case 1:
    iVar2 = *(int *)(iVar3 + 0x13c);
    if (*(float *)(iVar2 + 0x30) < *(float *)(iVar3 + 0x134)) {
      *(float *)(iVar3 + 0x134) = *(float *)(iVar3 + 0x134) - *(float *)(iVar2 + 0x30);
      iVar2 = *(int *)(iVar3 + 0x13c);
      fVar10 = *(float *)(iVar3 + 0x134);
    }
    else {
      fVar10 = *(float *)(iVar3 + 0x134);
    }
    FUN_00154dd0(fVar10 / *(float *)(iVar2 + 0x30),param_1);
    break;
  case 2:
  case 3:
    iVar1 = *(int *)(iVar3 + 0x13c);
    fVar4 = *(float *)(iVar1 + 0x34);
    fVar6 = *(float *)(iVar1 + 0x38);
    fVar9 = fVar4 + *(float *)(iVar1 + 0x30);
    fVar5 = fVar9 + fVar4;
    fVar8 = fVar5 + *(float *)(iVar1 + 0x30);
    if (iVar2 == 2) {
      fVar6 = -fVar6;
    }
    fVar7 = *(float *)(iVar3 + 0x134);
    if (fVar8 <= fVar7) {
      *(float *)(iVar3 + 0x134) = fVar7 - fVar8;
      fVar7 = *(float *)(iVar3 + 0x134);
    }
    if (fVar7 <= fVar4) {
      fVar10 = 0.0;
    }
    else if (fVar7 <= fVar9) {
      fVar10 = (fVar7 - fVar4) / *(float *)(*(int *)(iVar3 + 0x13c) + 0x30);
    }
    else if (fVar7 <= fVar5) {
      fVar10 = 1.0;
    }
    else if (fVar7 <= fVar8) {
      fVar10 = 1.0 - (fVar7 - fVar5) / *(float *)(*(int *)(iVar3 + 0x13c) + 0x30);
    }
    FUN_00154a10(0,fVar6,fVar10,param_1);
  default:
switchD_00154194_caseD_0:
    break;
  case 4:
    fVar4 = *(float *)(*(int *)(iVar3 + 0x13c) + 0x34);
    fVar5 = *(float *)(*(int *)(iVar3 + 0x13c) + 0x30);
    fVar9 = fVar4 + fVar5;
    fVar8 = fVar9 + fVar4;
    fVar5 = fVar8 + fVar5;
    if (fVar5 <= *(float *)(iVar3 + 0x134)) {
      *(float *)(iVar3 + 0x134) = *(float *)(iVar3 + 0x134) - fVar5;
      fVar6 = *(float *)(iVar3 + 0x134);
    }
    else {
      fVar6 = *(float *)(iVar3 + 0x134);
    }
    if (fVar6 <= fVar4) {
      fVar10 = 0.0;
    }
    else if (fVar6 <= fVar9) {
      fVar10 = (fVar6 - fVar4) / *(float *)(*(int *)(iVar3 + 0x13c) + 0x30);
    }
    else if (fVar6 <= fVar8) {
      fVar10 = 1.0;
    }
    else if (fVar6 <= fVar5) {
      fVar10 = 1.0 - (fVar6 - fVar8) / *(float *)(*(int *)(iVar3 + 0x13c) + 0x30);
    }
    FUN_00154a70(0,0xc0000000,fVar10,param_1);
  }
  return;
}


// ==== FUN_001543c8 @ 001543c8 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_001543c8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar2 = (int)param_1;
  fVar3 = *(float *)(*(int *)(iVar2 + 0x13c) + 0x44);
  fVar5 = *(float *)(iVar2 + 0x134) / fVar3;
  if (*(float *)(iVar2 + 0x134) < fVar3) {
    iVar1 = *(int *)(iVar2 + 0xa0);
    switch(iVar1) {
    case 0:
    case 1:
      uVar4 = 0x42b40000;
      if (iVar1 == 0) {
        uVar4 = 0xc2b40000;
      }
      FUN_001546a0(0,uVar4,fVar5,param_1);
      break;
    case 2:
    case 3:
      fVar3 = *(float *)(*(int *)(iVar2 + 0x13c) + 0x48);
      if (iVar1 == 3) {
        fVar3 = -fVar3;
      }
      FUN_00154a10(0,fVar3,fVar5,param_1);
      break;
    case 4:
      FUN_00154a70(0,0xc0000000,fVar5,param_1);
      break;
    case 5:
    case 6:
      fVar3 = *(float *)(*(int *)(iVar2 + 0x13c) + 0x4c);
      fVar5 = *(float *)(*(int *)(iVar2 + 0x13c) + 0x48);
      if (iVar1 == 6) {
        fVar5 = -fVar5;
        fVar3 = -fVar3;
      }
      FUN_00154ae0(fVar5,0,fVar3,param_1);
    }
  }
  else {
    FUN_00129240(DAT_0040f4d0,*(undefined4 *)(iVar2 + 0x18),0);
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x14))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x10),0);
    *(undefined4 *)(iVar2 + 0x94) = 4;
    FUN_001545d8(param_1);
  }
  return;
}


// ==== FUN_00154530 @ 00154530 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00154530(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x94) != 4) {
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x14))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x10),0);
    iVar1 = *(int *)(DAT_0040f0e0 + 0x21070);
    if (*(int *)(iVar2 + 0x90) == 0) {
      *(short *)(iVar1 + 0x20) = *(short *)(iVar1 + 0x20) + 1;
    }
    else if (*(int *)(iVar2 + 0x90) == 1) {
      *(short *)(iVar1 + 0x22) = *(short *)(iVar1 + 0x22) + 1;
    }
    *(undefined4 *)(iVar2 + 0x94) = 4;
    FUN_001545d8(param_1);
  }
  return;
}


// ==== FUN_001545d8 @ 001545d8 ====
// GLOBAL DAT_0040f51c undefined4

void FUN_001545d8(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_20 [16];
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
  auVar1 = _qmfc2(auVar2._0_4_);
  uStack_30 = auVar1._0_4_;
  auStack_20 = _sqc2(auVar2);
  uStack_2c = auStack_20._8_4_;
  FUN_001f2910(DAT_0040f51c,0,&uStack_30,*(undefined4 *)(param_1 + 0x130),
               *(int *)(param_1 + 0x94) < 4 && 0 < *(int *)(param_1 + 0x94));
  return;
}


// ==== FUN_00154640 @ 00154640 ====

bool FUN_00154640(int param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00165b98();
  FUN_00153730(param_1 + 0x70);
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
  lVar2 = (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x20));
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  return lVar2 != 0;
}


// ==== FUN_001546a0 @ 001546a0 ====
// GLOBAL DAT_004432b0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001546a0(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
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
  undefined1 in_vf13 [16];
  undefined4 in_vuI;
  undefined4 uVar14;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  auVar2 = _lqc2(_DAT_004432b0);
  auVar5 = _vmaxbc(in_vf0,in_vf0);
  auVar3 = _vsub(in_vf0,auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar3,auVar3);
  fVar1 = (param_3 * param_2 + (1.0 - param_3) * param_1) * 0.017453292;
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar2,auVar4);
  auVar2 = _qmtc2(fVar1);
  auVar2 = _vaddbc(in_vf0,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  uVar14 = _vwaitq();
  auVar4 = _vmulq(auVar3,uVar14);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
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
  auVar5 = _vmul(auVar2,auVar2);
  _ctc2(0xc2992661);
  _vnop();
  auVar3 = _vmuli(auVar2,in_vuI);
  auVar10 = _vmul(auVar5,auVar5);
  _ctc2(0xc2255de0);
  _vnop();
  auVar12 = _vmuli(auVar2,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar8 = _vmuli(auVar2,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar7 = _vmuli(auVar2,in_vuI);
  auVar6 = _vmul(auVar10,auVar10);
  auVar3 = _vmul(auVar3,auVar5);
  _vmula(auVar12,auVar5);
  _vmadda(auVar3,auVar10);
  _ctc2(0x40c90fda);
  _vmadda(auVar8,auVar10);
  _vmaddai(auVar2,in_vuI);
  auVar2 = _vmadd(auVar7,auVar6);
  auVar3 = _vmulbc(auVar4,auVar4);
  _vmove(in_vf13);
  auVar5 = _qmtc2(0x3f800000);
  _vaddbc(in_vf0,auVar3);
  auVar8 = _vaddbc(in_vf0,auVar5);
  auVar5 = _vmulbc(auVar4,auVar4);
  auVar3 = _vmul(auVar4,auVar4);
  _vaddbc(in_vf0,auVar5);
  auVar2 = _vsubbc(auVar8,auVar2);
  auVar6 = _vmulbc(auVar4,auVar4);
  auVar5 = _vsub(in_vf0,auVar3);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auVar3 = _vaddbc(in_vf0,auVar6);
  auVar5 = _vaddbc(auVar5,auVar8);
  auVar4 = _vmulbc(auVar4,auVar2);
  auVar3 = _vmulbc(auVar3,auVar2);
  auVar5 = _vmulbc(auVar5,auVar2);
  _lqc2(auStack_120);
  auVar6 = _vsubbc(auVar8,auVar5);
  _lqc2(auStack_110);
  auVar2 = _vsubbc(auVar3,auVar4);
  _lqc2(auStack_100);
  auVar10 = _vaddbc(in_vf0,auVar2);
  auVar2 = _vaddbc(auVar3,auVar4);
  auVar7 = _vaddbc(in_vf0,auVar6);
  auVar12 = _vaddbc(in_vf0,auVar2);
  auVar2 = _vaddbc(auVar3,auVar4);
  _vmove(auVar7);
  auVar6 = _vsubbc(auVar8,auVar5);
  auVar9 = _vaddbc(in_vf0,auVar2);
  auVar11 = _vsubbc(auVar3,auVar4);
  auVar2 = _vsubbc(auVar3,auVar4);
  auVar8 = _vsubbc(auVar8,auVar5);
  _vmove(auVar10);
  auVar4 = _vaddbc(auVar3,auVar4);
  _vmove(auVar12);
  auVar13 = _vaddbc(in_vf0,auVar6);
  auVar11 = _vaddbc(in_vf0,auVar11);
  _vmove(auVar9);
  _sqc2(auVar12);
  auVar5 = _vaddbc(in_vf0,auVar2);
  _sqc2(auVar7);
  _sqc2(auVar10);
  auVar3 = _vadd(in_vf0,in_vf0);
  _vmove(auVar13);
  _vmove(auVar11);
  auVar4 = _vaddbc(in_vf0,auVar4);
  _sqc2(auVar9);
  auVar6 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar13);
  _sqc2(auVar11);
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_4 + 0xd0) = auVar2;
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_4 + 0xc0) = auVar2;
  auVar2 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_4 + 0xe0) = auVar2;
  _sqc2(auVar5);
  _sqc2(auVar6);
  _sqc2(auVar5);
  _sqc2(auVar6);
  _sqc2(auVar4);
  _sqc2(auVar3);
  _sqc2(auVar3);
  _sqc2(auVar4);
  _sqc2(auVar3);
  auVar2 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_4 + 0xb0) = auVar2;
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_4 + 0xf0));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_4 + 0xc0));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x100));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x110));
  _vmulabc(auVar6,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar8 = _vmaddbc(auVar2,auVar5);
  _vmulabc(auVar6,auVar4);
  _vmaddabc(auVar3,auVar4);
  auVar10 = _vmaddbc(auVar2,auVar4);
  _sqc2(auVar8);
  _sqc2(auVar10);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x120));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x100));
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x110));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_4 + 0xd0));
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_4 + 0xe0));
  _vmulabc(auVar6,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar5 = _vmaddbc(auVar2,auVar5);
  _vmulabc(auVar6,auVar4);
  _vmaddabc(auVar3,auVar4);
  _vmaddabc(auVar2,auVar4);
  auVar6 = _vmaddbc(auVar7,in_vf0);
  _sqc2(auVar5);
  auVar2 = _sqc2(auVar5);
  auVar3 = _sqc2(auVar6);
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_4 + 0xb0) = auVar4;
  _sqc2(auVar6);
  _sqc2(auVar8);
  _sqc2(auVar10);
  _sqc2(auVar5);
  _sqc2(auVar6);
  _sqc2(auVar8);
  _sqc2(auVar10);
  auVar4 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_4 + 0xc0) = auVar4;
  uStack_b0 = auVar2._0_4_;
  uStack_ac = auVar2._4_4_;
  uStack_a8 = auVar2._8_4_;
  uStack_a4 = auVar2._12_4_;
  *(undefined4 *)(param_4 + 0xd0) = uStack_b0;
  *(undefined4 *)(param_4 + 0xd4) = uStack_ac;
  *(undefined4 *)(param_4 + 0xd8) = uStack_a8;
  *(undefined4 *)(param_4 + 0xdc) = uStack_a4;
  uStack_a0 = auVar3._0_4_;
  uStack_9c = auVar3._4_4_;
  uStack_98 = auVar3._8_4_;
  uStack_94 = auVar3._12_4_;
  *(undefined4 *)(param_4 + 0xe0) = uStack_a0;
  *(undefined4 *)(param_4 + 0xe4) = uStack_9c;
  *(undefined4 *)(param_4 + 0xe8) = uStack_98;
  *(undefined4 *)(param_4 + 0xec) = uStack_94;
  *(int *)(param_4 + 0xe0) = (int)*(undefined8 *)(param_4 + 0x120);
  *(int *)(param_4 + 0xe4) = (int)((ulong)*(undefined8 *)(param_4 + 0x120) >> 0x20);
  *(undefined4 *)(param_4 + 0xe8) = *(undefined4 *)(param_4 + 0x128);
  *(undefined4 *)(param_4 + 0xec) = *(undefined4 *)(param_4 + 300);
  FUN_00125f88(param_1,fVar1,*(undefined4 *)(param_4 + 0x18),param_4 + 0xb0);
  return;
}


// ==== FUN_00154a10 @ 00154a10 ====

void FUN_00154a10(float param_1,float param_2,float param_3,int param_4)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_4 + 0xf0));
  auVar2 = _vsub(in_vf0,auVar1);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x120));
  auVar1 = _qmtc2(param_3 * param_2 + (1.0 - param_3) * param_1);
  auVar1 = _vmulbc(auVar2,auVar1);
  auVar1 = _vadd(auVar3,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_4 + 0xe0) = auVar1;
  FUN_00125f88(*(undefined4 *)(param_4 + 0x18),param_4 + 0xb0);
  return;
}


// ==== FUN_00154a70 @ 00154a70 ====

void FUN_00154a70(float param_1,float param_2,float param_3,int param_4)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_4 + 0x120));
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_4 + 0xe0) = auVar1;
  auVar1 = _qmtc2(param_3 * param_2 + (1.0 - param_3) * param_1);
  *(undefined4 *)(param_4 + 0xb0) = *(undefined4 *)(param_4 + 0xf0);
  *(undefined4 *)(param_4 + 0xb4) = *(undefined4 *)(param_4 + 0xf4);
  *(undefined4 *)(param_4 + 0xb8) = *(undefined4 *)(param_4 + 0xf8);
  *(undefined4 *)(param_4 + 0xbc) = *(undefined4 *)(param_4 + 0xfc);
  auVar1 = _vaddbc(auVar2,auVar1);
  *(undefined4 *)(param_4 + 0xc0) = *(undefined4 *)(param_4 + 0x100);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(param_4 + 0x104);
  *(undefined4 *)(param_4 + 200) = *(undefined4 *)(param_4 + 0x108);
  *(undefined4 *)(param_4 + 0xcc) = *(undefined4 *)(param_4 + 0x10c);
  auVar1 = _vaddbc(in_vf0,auVar1);
  *(undefined4 *)(param_4 + 0xd0) = *(undefined4 *)(param_4 + 0x110);
  *(undefined4 *)(param_4 + 0xd4) = *(undefined4 *)(param_4 + 0x114);
  *(undefined4 *)(param_4 + 0xd8) = *(undefined4 *)(param_4 + 0x118);
  *(undefined4 *)(param_4 + 0xdc) = *(undefined4 *)(param_4 + 0x11c);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_4 + 0xe0) = auVar1;
  FUN_00125f88(*(undefined4 *)(param_4 + 0x18),param_4 + 0xb0);
  return;
}


// ==== FUN_00154ae0 @ 00154ae0 ====

void FUN_00154ae0(undefined4 param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  int iVar1;
  float fVar2;
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
  undefined4 in_vuI;
  undefined1 auStack_120 [16];
  undefined1 auStack_100 [16];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  auVar4 = _vmaxbc(in_vf0,in_vf0);
  fVar2 = (param_4 * param_3 + (1.0 - param_4) * param_2) * 0.017453292;
  auVar3 = _qmtc2(fVar2);
  auVar3 = _vaddbc(in_vf0,auVar3);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar3 = _vsubi(auVar3,in_vuI);
  auVar3 = _vabs(auVar3);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar3,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar4,in_vuI);
  _vmaddai(auVar4,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar3,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar3 = _vmsubi(auVar4,in_vuI);
  iVar1 = (int)param_5;
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x120));
  auVar3 = _vabs(auVar3);
  _lqc2(auStack_120);
  _ctc2(0x3e800000);
  _vnop();
  auVar3 = _vsubi(auVar3,in_vuI);
  _lqc2(auStack_100);
  auVar5 = _vmul(auVar3,auVar3);
  _ctc2(0xc2992661);
  _vnop();
  auVar4 = _vmuli(auVar3,in_vuI);
  auVar8 = _vmul(auVar5,auVar5);
  _ctc2(0xc2255de0);
  _vnop();
  auVar10 = _vmuli(auVar3,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar9 = _vmuli(auVar3,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar7 = _vmuli(auVar3,in_vuI);
  auVar6 = _vmul(auVar8,auVar8);
  auVar4 = _vmul(auVar4,auVar5);
  _vmula(auVar10,auVar5);
  _vmadda(auVar4,auVar8);
  _ctc2(0x40c90fda);
  _vmadda(auVar9,auVar8);
  _vmaddai(auVar3,in_vuI);
  auVar4 = _vmadd(auVar7,auVar6);
  auVar3 = _sqc2(auVar11);
  *(undefined1 (*) [16])(iVar1 + 0xe0) = auVar3;
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
  auVar3 = _pextlw(0,0);
  auVar6 = _vaddbc(in_vf0,auVar4);
  auVar7 = _vaddbc(in_vf0,auVar4);
  auVar5 = _qmtc2(0);
  _sqc2(auVar6);
  auVar9 = _qmtc2(param_1);
  _sqc2(auVar7);
  auVar8 = _vsub(in_vf0,auVar10);
  auVar8 = _vmulbc(auVar8,auVar9);
  auVar3 = _pextlw(0x3f800000,auVar3._0_8_);
  _vmove(auVar7);
  auVar9 = _qmtc2(auVar3._0_4_);
  _vmove(auVar6);
  auVar6 = _vaddbc(in_vf0,auVar5);
  auVar3 = _vaddbc(in_vf0,auVar5);
  auVar12 = _vadd(auVar11,auVar8);
  _sqc2(auVar3);
  _sqc2(auVar6);
  auVar5 = _vsub(in_vf0,auVar4);
  _sqc2(auVar9);
  auVar7 = _vsub(auVar11,auVar12);
  _vmove(auVar3);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(iVar1 + 0x100);
  *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(iVar1 + 0x104);
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar1 + 0x108);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar1 + 0x10c);
  _vmove(auVar6);
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar1 + 0x110);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(iVar1 + 0x114);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(iVar1 + 0x118);
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(iVar1 + 0x11c);
  auVar3 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar1 + 0xe0) = auVar3;
  auVar7 = _vaddbc(in_vf0,auVar5);
  auVar3 = _sqc2(auVar10);
  *(undefined1 (*) [16])(iVar1 + 0xb0) = auVar3;
  auVar5 = _vaddbc(in_vf0,auVar4);
  auVar11 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar7);
  _sqc2(auVar9);
  _sqc2(auVar5);
  _sqc2(auVar11);
  _sqc2(auVar11);
  _sqc2(auVar7);
  _sqc2(auVar9);
  _sqc2(auVar5);
  _sqc2(auVar11);
  _sqc2(auVar7);
  _sqc2(auVar9);
  _sqc2(auVar5);
  _sqc2(auVar11);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xc0));
  _vmulabc(auVar7,auVar10);
  _vmaddabc(auVar9,auVar10);
  auVar8 = _vmaddbc(auVar5,auVar10);
  _vmulabc(auVar7,auVar3);
  _vmaddabc(auVar9,auVar3);
  auVar10 = _vmaddbc(auVar5,auVar3);
  _sqc2(auVar8);
  _sqc2(auVar10);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xe0));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
  _vmulabc(auVar7,auVar4);
  _vmaddabc(auVar9,auVar4);
  auVar6 = _vmaddbc(auVar5,auVar4);
  _vmulabc(auVar7,auVar3);
  _vmaddabc(auVar9,auVar3);
  _vmaddabc(auVar5,auVar3);
  auVar7 = _vmaddbc(auVar11,in_vf0);
  _sqc2(auVar6);
  auVar3 = _sqc2(auVar6);
  auVar4 = _sqc2(auVar7);
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar1 + 0xb0) = auVar5;
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar10);
  _sqc2(auVar6);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar10);
  auVar5 = _sqc2(auVar10);
  *(undefined1 (*) [16])(iVar1 + 0xc0) = auVar5;
  uStack_a8 = auVar3._8_4_;
  uStack_a4 = auVar3._12_4_;
  *(int *)(iVar1 + 0xd0) = auVar3._0_4_;
  *(int *)(iVar1 + 0xd4) = auVar3._4_4_;
  *(undefined4 *)(iVar1 + 0xd8) = uStack_a8;
  *(undefined4 *)(iVar1 + 0xdc) = uStack_a4;
  uStack_98 = auVar4._8_4_;
  uStack_94 = auVar4._12_4_;
  *(int *)(iVar1 + 0xe0) = auVar4._0_4_;
  *(int *)(iVar1 + 0xe4) = auVar4._4_4_;
  *(undefined4 *)(iVar1 + 0xe8) = uStack_98;
  *(undefined4 *)(iVar1 + 0xec) = uStack_94;
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xe0));
  auVar3 = _vadd(auVar3,auVar12);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(iVar1 + 0xe0) = auVar3;
  FUN_00125f88(param_1,param_2,fVar2,*(undefined4 *)(iVar1 + 0x18),iVar1 + 0xb0,iVar1 + 0xb0,param_5
               ,0x421ed7b7,0xffffffffc2992661,0xffffffffc2255de0,0x4b400000);
  return;
}


// ==== FUN_00154dd0 @ 00154dd0 ====

void FUN_00154dd0(float param_1,undefined8 param_2)

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
  undefined4 in_vuI;
  undefined1 auStack_60 [16];
  undefined1 auStack_40 [16];
  
  iVar1 = (int)param_2;
  auVar3 = _vmaxbc(in_vf0,in_vf0);
  auVar2 = _qmtc2((*(float *)(*(int *)(iVar1 + 0x13c) + 0x1c) + param_1 * 360.0) * 0.017453292);
  _lqc2(auStack_60);
  auVar2 = _vaddbc(in_vf0,auVar2);
  _lqc2(auStack_40);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar2,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar3,in_vuI);
  _vmaddai(auVar3,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar2 = _vmsubi(auVar3,in_vuI);
  auVar3 = _vabs(auVar2);
  auVar2 = _pextlw(0,0);
  _ctc2(0x3e800000);
  _vnop();
  auVar3 = _vsubi(auVar3,in_vuI);
  auVar11 = _qmtc2(0);
  auVar5 = _vmul(auVar3,auVar3);
  _ctc2(0xc2992661);
  _vnop();
  auVar4 = _vmuli(auVar3,in_vuI);
  auVar8 = _vmul(auVar5,auVar5);
  _ctc2(0x42a33457);
  _vnop();
  auVar9 = _vmuli(auVar3,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar7 = _vmuli(auVar3,in_vuI);
  auVar6 = _vmul(auVar8,auVar8);
  auVar4 = _vmul(auVar4,auVar5);
  _ctc2(0xc2255de0);
  _vnop();
  auVar10 = _vmuli(auVar3,in_vuI);
  _vmula(auVar10,auVar5);
  _vmadda(auVar4,auVar8);
  _ctc2(0x40c90fda);
  _vmadda(auVar9,auVar8);
  _vmaddai(auVar3,in_vuI);
  auVar4 = _vmadd(auVar7,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar4);
  auVar5 = _vaddbc(in_vf0,auVar4);
  _sqc2(auVar6);
  auVar3 = _pextlw(0x3f800000,auVar2._0_8_);
  _sqc2(auVar5);
  auVar2 = _vsub(in_vf0,auVar4);
  _vmove(auVar5);
  _vmove(auVar6);
  auVar7 = _vaddbc(in_vf0,auVar11);
  auVar5 = _vaddbc(in_vf0,auVar11);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _vmove(auVar5);
  auVar6 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar7);
  auVar5 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar5);
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar2 = _sqc2(auVar6);
  *(undefined1 (*) [16])(iVar1 + 0xb0) = auVar2;
  *(int *)(iVar1 + 0xc0) = auVar3._0_4_;
  *(int *)(iVar1 + 0xc4) = auVar3._4_4_;
  *(int *)(iVar1 + 200) = auVar3._8_4_;
  *(int *)(iVar1 + 0xcc) = auVar3._12_4_;
  auVar2 = _sqc2(auVar4);
  *(undefined1 (*) [16])(iVar1 + 0xd0) = auVar2;
  *(int *)(iVar1 + 0xe0) = (int)*(undefined8 *)(iVar1 + 0x120);
  *(int *)(iVar1 + 0xe4) = (int)((ulong)*(undefined8 *)(iVar1 + 0x120) >> 0x20);
  *(undefined4 *)(iVar1 + 0xe8) = *(undefined4 *)(iVar1 + 0x128);
  *(undefined4 *)(iVar1 + 0xec) = *(undefined4 *)(iVar1 + 300);
  _sqc2(auVar6);
  _sqc2(auVar4);
  _sqc2(auVar5);
  _sqc2(auVar5);
  _sqc2(auVar6);
  _sqc2(auVar4);
  FUN_00125f88(param_1 * 360.0,*(undefined4 *)(iVar1 + 0x18),iVar1 + 0xb0,param_2,0x421ed7b7,
               0xffffffffc2992661,0xffffffffc2255de0,0x3fc90fdb,0x4b400000);
  return;
}


// ==== FUN_00154fd8 @ 00154fd8 ====
// GLOBAL DAT_003f5310 undefined

void FUN_00154fd8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined2 *)(param_1 + iVar1) = *(undefined2 *)(&DAT_003f5310 + iVar1);
  } while (uVar2 < 10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// ==== FUN_00155018 @ 00155018 ====
// GLOBAL DAT_003f5310 undefined

undefined4 FUN_00155018(int param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined2 *)(param_1 + iVar1) = *(undefined2 *)(&DAT_003f5310 + iVar1);
  } while (uVar2 < 10);
  uVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x14);
    while( true ) {
      *(undefined1 *)(iVar1 + (int)uVar3) = 0;
      uVar3 = (long)((int)uVar3 + 1) & 0xff;
      if ((long)*(char *)(param_1 + 0x18) <= (long)uVar3) break;
      iVar1 = *(int *)(param_1 + 0x14);
    }
  }
  return 1;
}


// ==== FUN_00155088 @ 00155088 ====

void FUN_00155088(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  uVar1 = FUN_00107d20(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


// ==== FUN_001550c0 @ 001550c0 ====

undefined4 FUN_001550c0(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(param_1 + param_2 * 2);
  uVar1 = *puVar2;
  if ((param_3 & 0xff) <= uVar1) {
    *puVar2 = uVar1 - (param_3 & 0xff);
    return 1;
  }
  return 0;
}


// ==== FUN_001550f0 @ 001550f0 ====

undefined4 FUN_001550f0(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 + param_2 * 2);
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    return 0;
  }
  *psVar2 = sVar1 + -1;
  return 1;
}


// ==== FUN_00155118 @ 00155118 ====

bool FUN_00155118(int param_1,int param_2)

{
  return *(short *)(param_1 + param_2 * 2) != 0;
}


// ==== FUN_00155130 @ 00155130 ====

undefined2 FUN_00155130(int param_1,int param_2)

{
  return *(undefined2 *)(param_1 + param_2 * 2);
}


// ==== FUN_00155140 @ 00155140 ====

ushort FUN_00155140(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  param_3 = param_3 & 0xff;
  puVar2 = (ushort *)(param_1 + param_2 * 2);
  if (*puVar2 < param_3) {
    uVar1 = *puVar2;
    *puVar2 = 0;
    return uVar1;
  }
  *puVar2 = *puVar2 - param_3;
  return param_3;
}


// ==== FUN_00155178 @ 00155178 ====

uint FUN_00155178(int param_1,int param_2,uint param_3)

{
  return (uint)*(ushort *)(param_1 + param_2 * 2) / (param_3 & 0xff) & 0xff;
}


// ==== FUN_00155198 @ 00155198 ====

undefined2 FUN_00155198(int param_1)

{
  return *(undefined2 *)(param_1 + 0xe);
}


// ==== FUN_001551a0 @ 001551a0 ====

void FUN_001551a0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xe) = param_2;
  return;
}


// ==== FUN_001551a8 @ 001551a8 ====

undefined4 FUN_001551a8(int param_1)

{
  if (*(short *)(param_1 + 0xe) != 0) {
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + -1;
    return 1;
  }
  return 0;
}


// ==== FUN_001551c8 @ 001551c8 ====
// GLOBAL DAT_003f5328 undefined

void FUN_001551c8(int param_1,int param_2,short param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(param_1 + param_2 * 2);
  uVar1 = *puVar3;
  uVar2 = *(ushort *)(&DAT_003f5328 + param_2 * 2);
  *puVar3 = param_3 + uVar1;
  if (uVar2 < (ushort)(param_3 + uVar1)) {
    *puVar3 = uVar2;
  }
  return;
}


// ==== FUN_00155208 @ 00155208 ====
// GLOBAL DAT_003f5328 undefined

bool FUN_00155208(int param_1,int param_2)

{
  return *(short *)(param_1 + param_2 * 2) == *(short *)(&DAT_003f5328 + param_2 * 2);
}


// ==== FUN_00155238 @ 00155238 ====
// GLOBAL DAT_0040f4c4 undefined4

void FUN_00155238(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_e0 [64];
  undefined8 uStack_a0;
  
  iVar4 = 0;
  iVar5 = 0x1000000;
  puVar3 = (undefined4 *)(param_1 + 0x3600);
  FUN_00382348(0x414d60,0x2b9d6f8);
  uVar1 = FUN_00108120(DAT_0040f4c4,0x5446137a6d470000);
  *(undefined4 *)(param_1 + 0x3730) = uVar1;
  uVar1 = FUN_00108120(DAT_0040f4c4,0x5446135ea6a636c0);
  *(undefined4 *)(param_1 + 0x3734) = uVar1;
  uStack_a0 = 0x5446137a6d470000;
  iVar2 = param_1;
  do {
    FUN_0014ac60(iVar2);
    FUN_0014b8e0(iVar2,auStack_e0,0);
    *(undefined1 *)(param_1 + 0x3700 + iVar4) = 0;
    iVar4 = iVar5 >> 0x18;
    *puVar3 = 0;
    iVar5 = iVar5 + 0x1000000;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 0x120;
  } while (iVar4 < 0x20);
  iVar2 = param_1 + 0x2400;
  puVar3 = (undefined4 *)(param_1 + 0x3680);
  uStack_a0 = 0x544615003db9b6c0;
  iVar5 = 0;
  iVar4 = 0x1000000;
  do {
    FUN_0014f7f8(iVar2);
    FUN_0014f838(iVar2,auStack_e0);
    iVar2 = iVar2 + 0x120;
    *(undefined1 *)(param_1 + 0x3720 + iVar5) = 0;
    iVar5 = iVar4 >> 0x18;
    *puVar3 = 0;
    iVar4 = iVar4 + 0x1000000;
    puVar3 = puVar3 + 1;
  } while (iVar5 < 0x10);
  return;
}


// ==== FUN_001553e0 @ 001553e0 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_00414d60 uint
// GLOBAL DAT_00414d64 int
// GLOBAL DAT_0040f4d8 int

void FUN_001553e0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  ulong uVar1;
  undefined1 in_zero_qw [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined8 in_a2_udw;
  int iVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  
  auVar8._8_8_ = in_a2_udw;
  auVar8._0_8_ = param_3;
  auVar8 = _por(in_zero_qw,auVar8);
  iVar4 = 0;
  iVar6 = 0x1000000;
  fVar9 = 10.0;
  uVar10 = 0;
  iVar7 = param_1;
  do {
    pcVar5 = (char *)(param_1 + 0x3700 + iVar4);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      *(undefined4 *)(param_1 + iVar4 * 4 + 0x3600) = param_4;
      FUN_0012a158(DAT_0040f4d0,iVar7);
      FUN_00125f88(iVar7,param_2);
      uVar2 = DAT_00414d60 * 0x10000 + ((int)DAT_00414d60 >> 0x10) + DAT_00414d64;
      uVar3 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_00414d64 + uVar2;
      iVar4 = DAT_00414d64 + uVar2 + uVar3;
      DAT_00414d60 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10) + iVar4;
      DAT_00414d64 = iVar4 + DAT_00414d60;
      uVar1 = (ulong)DAT_00414d60;
      *(undefined1 *)(iVar7 + 0x115) = 1;
      *(undefined1 *)(iVar7 + 0x114) = 0;
      *(undefined4 *)(iVar7 + 0xdc) = *(undefined4 *)(param_1 + 0x3730);
      *(int *)(iVar7 + 0xf0) = auVar8._0_4_;
      *(int *)(iVar7 + 0xf4) = auVar8._4_4_;
      *(int *)(iVar7 + 0xf8) = auVar8._8_4_;
      *(int *)(iVar7 + 0xfc) = auVar8._12_4_;
      *(undefined1 *)(iVar7 + 0x116) = 0;
      *(undefined1 *)(iVar7 + 0x117) = 0;
      auVar8 = _pextlw((long)(int)(((float)uVar1 * 2.3283064e-10 - 0.5) * fVar9),
                       (long)(int)(((float)uVar2 * 2.3283064e-10 - 1.2) * fVar9));
      *(undefined4 *)(iVar7 + 0x110) = 0;
      auVar8 = _pextlw((long)(int)(((float)uVar3 * 2.3283064e-10 - 0.5) * fVar9),auVar8._0_8_);
      *(int *)(iVar7 + 0x100) = auVar8._0_4_;
      *(int *)(iVar7 + 0x104) = auVar8._4_4_;
      *(int *)(iVar7 + 0x108) = auVar8._8_4_;
      *(int *)(iVar7 + 0x10c) = auVar8._12_4_;
      *(char *)(iVar7 + 0x118) = (char)param_5;
      (**(code **)(*(int *)(iVar7 + 0x10) + 0xc))
                (uVar10,iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 8));
      if (param_5 == 0) {
        return;
      }
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,0xb83991cc58beb358,iVar7,1,8);
      return;
    }
    iVar4 = iVar6 >> 0x18;
    iVar6 = iVar6 + 0x1000000;
    iVar7 = iVar7 + 0x120;
  } while (iVar4 < 0x20);
  return;
}


// ==== FUN_001556d8 @ 001556d8 ====
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_004432d0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001556d8(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar4 = 0x1000000;
  iVar5 = param_1 + 0x3700;
  puVar3 = (undefined4 *)(param_1 + 0x3600);
  do {
    if (param_1 == param_2) {
      *(undefined1 *)(iVar5 + iVar1) = 0;
      FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,1);
      FUN_0012a280(DAT_0040f4d0,param_1);
      uVar2 = 0x6855dd905e980000;
      if (*(char *)(param_1 + 0x117) != '\0') {
        uVar2 = 0x6856391b39ad6000;
      }
      FUN_0012c428(0x40d00000,0x43b60000,DAT_0040f4d0,*(undefined8 *)(param_2 + 0xa0),_DAT_004432d0,
                   uVar2,3,0,*puVar3,1);
    }
    puVar3 = puVar3 + 1;
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    param_1 = param_1 + 0x120;
  } while (iVar1 < 0x20);
  return;
}


// ==== FUN_00155830 @ 00155830 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_00414d60 uint
// GLOBAL DAT_00414d64 int
// GLOBAL DAT_0040f4d8 int

void FUN_00155830(int param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 in_zero_qw [16];
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 in_a2_udw;
  int iVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 uVar11;
  
  auVar9._8_8_ = in_a2_udw;
  auVar9._0_8_ = param_3;
  auVar9 = _por(in_zero_qw,auVar9);
  iVar6 = 0;
  iVar7 = 0x1000000;
  fVar10 = 10.0;
  uVar11 = 0;
  iVar8 = param_1;
  do {
    pcVar5 = (char *)(param_1 + 0x3700 + iVar6);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      *(int *)(param_1 + iVar6 * 4 + 0x3600) = (int)param_4;
      FUN_0012a158(DAT_0040f4d0,iVar8);
      FUN_00125f88(iVar8,param_2);
      uVar3 = DAT_00414d60 * 0x10000 + ((int)DAT_00414d60 >> 0x10) + DAT_00414d64;
      uVar4 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10) + DAT_00414d64 + uVar3;
      iVar6 = DAT_00414d64 + uVar3 + uVar4;
      DAT_00414d60 = uVar4 * 0x10000 + ((int)uVar4 >> 0x10) + iVar6;
      DAT_00414d64 = iVar6 + DAT_00414d60;
      uVar2 = (ulong)DAT_00414d60;
      *(undefined1 *)(iVar8 + 0x114) = 1;
      *(undefined1 *)(iVar8 + 0x115) = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x3734);
      *(int *)(iVar8 + 0xf0) = auVar9._0_4_;
      *(int *)(iVar8 + 0xf4) = auVar9._4_4_;
      *(int *)(iVar8 + 0xf8) = auVar9._8_4_;
      *(int *)(iVar8 + 0xfc) = auVar9._12_4_;
      *(undefined4 *)(iVar8 + 0xdc) = uVar1;
      *(bool *)(iVar8 + 0x118) = param_4 < 2;
      auVar9 = _pextlw((long)(int)(((float)uVar2 * 2.3283064e-10 - 1.5) * fVar10),
                       (long)(int)(((float)uVar3 * 2.3283064e-10 - 0.5) * fVar10));
      *(undefined1 *)(iVar8 + 0x117) = 0;
      auVar9 = _pextlw((long)(int)(((float)uVar4 * 2.3283064e-10 - 0.5) * fVar10),auVar9._0_8_);
      *(int *)(iVar8 + 0x100) = auVar9._0_4_;
      *(int *)(iVar8 + 0x104) = auVar9._4_4_;
      *(int *)(iVar8 + 0x108) = auVar9._8_4_;
      *(int *)(iVar8 + 0x10c) = auVar9._12_4_;
      *(undefined4 *)(iVar8 + 0x110) = 0;
      (**(code **)(*(int *)(iVar8 + 0x10) + 0xc))
                (uVar11,iVar8 + *(short *)(*(int *)(iVar8 + 0x10) + 8));
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,*(undefined8 *)(param_1 + 0x3738),iVar8,1,8);
      return;
    }
    iVar6 = iVar7 >> 0x18;
    iVar7 = iVar7 + 0x1000000;
    iVar8 = iVar8 + 0x120;
  } while (iVar6 < 0x20);
  return;
}


// ==== FUN_00155b08 @ 00155b08 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4d8 int

void FUN_00155b08(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 in_a2_udw;
  int iVar5;
  undefined1 auVar6 [16];
  
  pcVar2 = (char *)(param_1 + 0x3720);
  iVar5 = param_1 + 0x2400;
  auVar6._8_8_ = in_a2_udw;
  auVar6._0_8_ = param_3;
  auVar6 = _por(in_zero_qw,auVar6);
  iVar4 = 0x1000000;
  puVar3 = (undefined4 *)(param_1 + 0x3680);
  do {
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      *puVar3 = (int)param_5;
      FUN_0012a158(DAT_0040f4d0,iVar5);
      FUN_00125f88(iVar5);
      auVar6 = _por(in_zero_qw,auVar6);
      FUN_0014f888(iVar5,auVar6._0_8_,param_5 != 3);
      (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))(0,iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 8));
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,param_4,iVar5,1,8);
      return;
    }
    iVar5 = iVar5 + 0x120;
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    puVar3 = puVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 < 0x10);
  return;
}


// ==== FUN_00155c28 @ 00155c28 ====
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00155c28(int param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _sqc2(auVar6);
  uVar5 = 0x6855dd9ad0643000;
  if (param_4 != 0) {
    uVar5 = 0x6856391b39ad6000;
  }
  iVar2 = param_1 + 0x2400;
  iVar1 = 0;
  iVar4 = 0x1000000;
  puVar3 = (undefined4 *)(param_1 + 0x3680);
  do {
    if (iVar2 == param_2) {
      *(undefined1 *)(param_1 + 0x3720 + iVar1) = 0;
      FUN_001b6cf8(DAT_0040f4d8 + 0x66290,iVar2,1);
      FUN_0012a280(DAT_0040f4d0,iVar2);
      if (param_3 != 0) {
        auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x100));
        auVar7 = _vmul(auVar8,auVar8);
        auVar9 = _lqc2(auVar6);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar9,auVar7);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar7);
        uVar10 = _vwaitq();
        auVar8 = _vmulq(auVar8,uVar10);
        auVar7 = _sqc2(auVar8);
        *(undefined1 (*) [16])(iVar2 + 0x100) = auVar7;
        auVar7 = _qmfc2(auVar8._0_4_);
        FUN_0012c428(0x40e00000,0x43dd0000,DAT_0040f4d0,*(undefined8 *)(param_2 + 0xa0),auVar7._0_8_
                     ,uVar5,2,0,*puVar3,1);
      }
    }
    puVar3 = puVar3 + 1;
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    iVar2 = iVar2 + 0x120;
  } while (iVar1 < 0x10);
  return;
}


// ==== FUN_00155dc8 @ 00155dc8 ====

void FUN_00155dc8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x1000000;
  puVar2 = (undefined4 *)(param_1 + 0x3600);
  do {
    *(undefined1 *)(param_1 + 0x3700 + iVar1) = 0;
    iVar1 = iVar3 >> 0x18;
    *puVar2 = 0;
    iVar3 = iVar3 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x20);
  puVar2 = (undefined4 *)(param_1 + 0x3680);
  iVar1 = 0;
  iVar3 = 0x1000000;
  do {
    *(undefined1 *)(param_1 + 0x3720 + iVar1) = 0;
    iVar1 = iVar3 >> 0x18;
    *puVar2 = 0;
    iVar3 = iVar3 + 0x1000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x10);
  return;
}


// ==== FUN_00155e48 @ 00155e48 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00155e48(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)(param_1 + 0x3700);
  iVar4 = 0x1000000;
  iVar3 = param_1;
  do {
    if (*pcVar2 == '\x01') {
      FUN_0012a280(DAT_0040f4d0,iVar3);
      *pcVar2 = '\0';
    }
    iVar3 = iVar3 + 0x120;
    iVar1 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 < 0x20);
  pcVar2 = (char *)(param_1 + 0x3720);
  param_1 = param_1 + 0x2400;
  iVar3 = 0x1000000;
  do {
    if (*pcVar2 == '\x01') {
      FUN_0012a280(DAT_0040f4d0,param_1);
      *pcVar2 = '\0';
    }
    param_1 = param_1 + 0x120;
    iVar4 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
    pcVar2 = pcVar2 + 1;
  } while (iVar4 < 0x10);
  return;
}


// ==== FUN_00155f38 @ 00155f38 ====

long FUN_00155f38(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  float afStack_f0 [4];
  undefined4 uStack_e0;
  undefined1 auStack_d0 [16];
  
  auVar13 = _qmtc2(param_3);
  auVar15 = _qmtc2(param_2);
  auVar15 = _vsub(auVar13,auVar15);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vmul(auVar15,auVar15);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar14,auVar13);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar13);
  auVar13 = _qmfc2(auVar13._0_4_);
  auVar14 = _qmtc2(SQRT(auVar13._0_4_));
  uVar16 = _vwaitq();
  auVar13 = _vmulq(auVar15,uVar16);
  auStack_d0 = _sqc2(auVar13);
  auVar13 = _qmfc2(auVar14._0_4_);
  iVar6 = 0;
  iVar8 = 0x1000000;
  lVar9 = 0;
  iVar7 = (int)param_1;
  fVar12 = 5.0;
  fVar11 = 1.0;
  uStack_e0 = param_2;
  do {
    if (*(char *)(iVar7 + 0x3700 + iVar6) != '\0') {
      iVar1 = iVar6 * 0x120 + iVar7;
      uVar16 = *(undefined4 *)*(undefined1 (*) [16])(iVar1 + 0xa0);
      uVar3 = *(undefined4 *)(iVar1 + 0xa4);
      uVar4 = *(undefined4 *)(iVar1 + 0xa8);
      uVar5 = *(undefined4 *)(iVar1 + 0xac);
      auVar15 = _por(in_zero_qw,*(undefined1 (*) [16])(iVar1 + 0xa0));
      lVar2 = FUN_00156110(0x3f7fd8ae,param_1,uStack_e0,auStack_d0._0_4_,auVar15._0_8_,afStack_f0);
      if ((((lVar2 != 0) && (fVar12 <= afStack_f0[0])) &&
          (fVar10 = afStack_f0[0] / auVar13._0_4_, 0.0 <= fVar10)) &&
         ((fVar10 <= fVar11 && ((lVar9 == 0 || (fVar10 < (float)param_4[8])))))) {
        param_4[8] = fVar10;
        *param_4 = uVar16;
        param_4[1] = uVar3;
        param_4[2] = uVar4;
        param_4[3] = uVar5;
        lVar9 = 1;
        param_4[9] = iVar6 * 0x120 + iVar7;
      }
    }
    iVar6 = iVar8 >> 0x18;
    iVar8 = iVar8 + 0x1000000;
  } while (iVar6 < 0x20);
  return lVar9;
}


// ==== FUN_00156110 @ 00156110 ====

bool FUN_00156110(float param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  
  auVar1 = _qmtc2(param_5);
  auVar2 = _qmtc2(param_3);
  auVar3 = _vsub(auVar1,auVar2);
  auVar6 = _qmtc2(param_4);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _vmul(auVar3,auVar3);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar2,auVar1);
  auVar2 = _vmove(auVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  if (2.3283064e-10 <= auVar1._0_4_) {
    auVar1 = _vmul(auVar3,auVar3);
    auVar3 = _vmove(auVar3);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(auVar2,auVar1);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar1);
    auVar1 = _qmfc2(auVar1._0_4_);
    auVar4 = _qmtc2(SQRT(auVar1._0_4_));
    uVar7 = _vwaitq();
    auVar1 = _vmulq(auVar3,uVar7);
    auVar2 = _vmul(auVar6,auVar1);
    auVar1 = _qmfc2(auVar4._0_4_);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar5,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    *param_6 = auVar1._0_4_;
    return param_1 < ABS(auVar2._0_4_);
  }
  *param_6 = 0;
  return true;
}


// ==== FUN_001561f8 @ 001561f8 ====

void FUN_001561f8(int param_1)

{
  FUN_00382348(0x414d68,0x2b9d6f8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined1 *)(param_1 + 0x107) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return;
}


// ==== fe_FEZoomLevel_00156278 @ 00156278 ====
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f544 undefined4

/* Strings referenciadas:
     "FEZoomLevel" */

undefined4
fe_FEZoomLevel_00156278(undefined8 param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)param_1;
  *(int *)(puVar4 + 0xf0) = param_2;
  *puVar4 = param_3;
  *(int *)(puVar4 + 0xfc) = param_2 + 0x280;
  *(undefined4 *)(puVar4 + 0xd8) = 0;
  *(undefined4 *)(puVar4 + 0xdc) = 0;
  *(undefined4 *)(puVar4 + 0xe0) = 0;
  puVar4[0x105] = 0;
  puVar4[0x106] = 0;
  puVar4[0x107] = 0;
  puVar4[0x108] = 0;
  puVar4[0x109] = 0;
  puVar4[0x3c] = 0;
  puVar4[0x10a] = 0;
  puVar4[0x10b] = 0;
  puVar4[0x10c] = 0;
  puVar4[0x10d] = 0;
  puVar4[0x100] = 0;
  puVar4[0x101] = 0;
  puVar4[0x102] = 0;
  puVar4[0x104] = 0;
  puVar4[0x103] = 0;
  uVar1 = FUN_0015d210(DAT_0040f4e0,param_3);
  *(undefined4 *)(puVar4 + 0xe8) = uVar1;
  uVar1 = FUN_0015d228(DAT_0040f4e0,param_3);
  *(undefined4 *)(puVar4 + 0xec) = uVar1;
  FUN_0015d060(DAT_0040f4e0,param_1,param_4);
  *(undefined4 *)(puVar4 + 4) = 0;
  uVar2 = FUN_0020bc00(DAT_0040f544,2);
  uVar3 = FUN_0027c278(0x3f4c40);
  FUN_00209ec8(uVar2,uVar3,0x3bceb4);
  return 1;
}


// ==== FUN_00156388 @ 00156388 ====
// GLOBAL DAT_0040f4d0 int

void FUN_00156388(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)param_1;
  fVar3 = *(float *)(DAT_0040f4d0 + 0x1c);
  *(float *)(iVar2 + 0xdc) = *(float *)(iVar2 + 0xdc) - fVar3;
  if (*(int *)(iVar2 + 0xd8) == 1) {
    *(float *)(iVar2 + 0xe0) = *(float *)(iVar2 + 0xe0) + fVar3;
  }
  else {
    *(undefined4 *)(iVar2 + 0xe0) = 0;
  }
  FUN_00156fd0(param_1,param_2);
  if (*(int *)(*(int *)(iVar2 + 0xf0) + 0xc4) == 2) {
    FUN_00157ea0(fVar3,param_1);
    uVar1 = *(undefined4 *)(iVar2 + 0xf4);
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0xf4);
  }
  FUN_00159120(fVar3,uVar1);
  if (*(int *)(iVar2 + 0xf8) == 0) {
    *(char *)(iVar2 + 0x109) = (char)param_2;
  }
  else {
    FUN_00159120(fVar3);
    *(char *)(iVar2 + 0x109) = (char)param_2;
  }
  return;
}


// ==== fe_FEZoomLevel_00156450 @ 00156450 ====
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f544 undefined4

/* Strings referenciadas:
     "FEZoomLevel" */

undefined4 fe_FEZoomLevel_00156450(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0015d198(DAT_0040f4e0,*(undefined4 *)(param_1 + 0xf4));
  FUN_0015d198(DAT_0040f4e0,*(undefined4 *)(param_1 + 0xf8));
  uVar1 = FUN_0020bc00(DAT_0040f544,2);
  uVar2 = FUN_0027c278(0x3f4c40);
  FUN_00209ff8(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return 1;
}


// ==== FUN_001564d0 @ 001564d0 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_0040f4bc int

void FUN_001564d0(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 in_zero_qw [16];
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [48];
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
  
  iVar9 = (int)param_1;
  iVar6 = *(int *)(iVar9 + 0xf0);
  uStack_80 = *(undefined4 *)(iVar6 + 0x100);
  uStack_7c = *(undefined4 *)(iVar6 + 0x104);
  uStack_78 = *(undefined4 *)(iVar6 + 0x108);
  uStack_74 = *(undefined4 *)(iVar6 + 0x10c);
  fVar12 = *(float *)(*(int *)(*(int *)(iVar9 + 0xf4) + 0xc) + 0x14);
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xf0));
  auVar15 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x100));
  auVar13 = _qmtc2(fVar12);
  *(float *)(iVar9 + 0x30) = fVar12;
  auVar13 = _vmulbc(auVar14,auVar13);
  auVar13 = _vadd(auVar15,auVar13);
  auStack_70 = _sqc2(auVar13);
  uVar17 = auStack_70._0_4_;
  uVar4 = auStack_70._4_4_;
  uVar3 = auStack_70._0_8_;
  uVar10 = auStack_70._8_4_;
  uVar11 = auStack_70._12_4_;
  if (*(char *)(*(int *)(iVar9 + 0xec) + 0xc3) != '\0') {
    (**(code **)(*(int *)(iVar6 + 0x10) + 0xa4))
              (auStack_c0,iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0xa0));
    *(undefined4 *)(iVar9 + 0x40) = uVar17;
    *(undefined4 *)(iVar9 + 0x44) = uVar4;
    *(undefined4 *)(iVar9 + 0x48) = uVar10;
    *(undefined4 *)(iVar9 + 0x4c) = uVar11;
    *(undefined4 *)(iVar9 + 0xc0) = uStack_90;
    *(undefined4 *)(iVar9 + 0xc4) = uStack_8c;
    *(undefined4 *)(iVar9 + 200) = uStack_88;
    *(undefined4 *)(iVar9 + 0xcc) = uStack_84;
  }
  iVar6 = *(int *)(iVar9 + 0xf0);
  uVar8 = 0xd;
  if (*(int *)(iVar6 + 0xc4) == 2) {
    uVar8 = 0x207;
  }
  if (*(int *)(*(int *)(*(int *)(iVar9 + 0xf4) + 8) + 0x90) == 4) {
    auVar16._8_4_ = uVar10;
    auVar16._0_8_ = uVar3;
    auVar16._12_4_ = uVar11;
    auVar13 = _por(in_zero_qw,auVar16);
    lVar7 = FUN_00156a88(param_1,CONCAT44(uStack_7c,uStack_80),auVar13._0_8_,uVar8,iVar6,&uStack_100
                        );
    if (lVar7 == 0) {
      *(undefined4 *)(iVar9 + 0x10) = uVar17;
      *(undefined4 *)(iVar9 + 0x14) = uVar4;
      *(undefined4 *)(iVar9 + 0x18) = uVar10;
      *(undefined4 *)(iVar9 + 0x1c) = uVar11;
LAB_0015685c:
      *(undefined4 *)(iVar9 + 4) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x10) = uStack_100;
      *(undefined4 *)(iVar9 + 0x14) = uStack_fc;
      *(undefined4 *)(iVar9 + 0x18) = uStack_f8;
      *(undefined4 *)(iVar9 + 0x1c) = uStack_f4;
      *(int *)(iVar9 + 4) = iStack_dc;
      *(float *)(iVar9 + 0x30) = fStack_e0 * fVar12;
    }
LAB_00156860:
    iVar6 = *(int *)(iVar9 + 4);
  }
  else {
    auVar13._8_4_ = uVar10;
    auVar13._0_8_ = uVar3;
    auVar13._12_4_ = uVar11;
    auVar13 = _por(in_zero_qw,auVar13);
    lVar7 = FUN_0012ae58(DAT_0040f4d0,CONCAT44(uStack_7c,uStack_80),auVar13._0_8_,uVar8,iVar6,1,
                         &uStack_100);
    if (lVar7 == 0) {
      *(float *)(iVar9 + 0x30) = fVar12;
      *(undefined4 *)(iVar9 + 0x10) = auStack_70._0_4_;
      *(undefined4 *)(iVar9 + 0x14) = auStack_70._4_4_;
      *(undefined4 *)(iVar9 + 0x18) = auStack_70._8_4_;
      *(undefined4 *)(iVar9 + 0x1c) = auStack_70._12_4_;
      goto LAB_0015685c;
    }
    if (iStack_dc == *(int *)(iVar9 + 0xf0)) {
      if (iStack_dc == 0) goto LAB_00156618;
      iVar6 = *(int *)(iVar9 + 0xec);
    }
    else {
      *(int *)(iVar9 + 4) = iStack_dc;
      *(undefined4 *)(iVar9 + 0x10) = uStack_100;
      *(undefined4 *)(iVar9 + 0x14) = uStack_fc;
      *(undefined4 *)(iVar9 + 0x18) = uStack_f8;
      *(undefined4 *)(iVar9 + 0x1c) = uStack_f4;
LAB_00156618:
      *(float *)(iVar9 + 0x30) = fStack_e0 * fVar12;
      iVar6 = *(int *)(iVar9 + 0xec);
    }
    if (*(char *)(iVar6 + 0xc3) != '\0') {
      pauVar1 = (undefined1 (*) [16])(iVar9 + 0xc0);
      uStack_80 = *(undefined4 *)*pauVar1;
      uStack_7c = *(undefined4 *)(iVar9 + 0xc4);
      uVar3 = *(undefined8 *)*pauVar1;
      uStack_78 = *(undefined4 *)(iVar9 + 200);
      uStack_74 = *(undefined4 *)(iVar9 + 0xcc);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auStack_60 = _sqc2(auVar13);
      auVar15 = _qmtc2(*(undefined4 *)(iVar9 + 0xd0));
      auVar14 = _lqc2(*pauVar1);
      *(float *)(iVar9 + 0xd0) = fVar12;
      *(undefined1 *)(iVar9 + 0x100) = 0;
      auVar13 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x10));
      auVar13 = _vsub(auVar13,auVar14);
      auVar16 = _lqc2(auStack_60);
      auVar14 = _vmul(auVar13,auVar13);
      _vaddabc(auVar14,auVar14);
      auVar14 = _vmaddbc(auVar16,auVar14);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar14);
      uVar17 = _vwaitq();
      auVar13 = _vmulq(auVar13,uVar17);
      auVar13 = _vmulbc(auVar13,auVar15);
      auVar14 = _qmtc2(uStack_80);
      auVar14 = _vadd(auVar14,auVar13);
      auVar13 = _sqc2(auVar14);
      *(undefined1 (*) [16])(iVar9 + 0x40) = auVar13;
      auVar13 = _qmfc2(auVar14._0_4_);
      auStack_50 = _sqc2(auVar14);
      lVar7 = FUN_0012ae58(DAT_0040f4d0,uVar3,auVar13._0_8_,0x57,*(undefined4 *)(iVar9 + 0xf0),1,
                           &uStack_100);
      auVar13 = _lqc2(auStack_50);
      if (lVar7 != 0) {
        auVar15._4_4_ = uStack_7c;
        auVar15._0_4_ = uStack_80;
        auVar15._8_4_ = uStack_78;
        auVar15._12_4_ = uStack_74;
        auVar14 = _lqc2(auVar15);
        auVar15 = _vsub(auVar13,auVar14);
        auVar13 = _vmul(auVar15,auVar15);
        auVar14 = _lqc2(auStack_60);
        _vaddabc(auVar13,auVar13);
        auVar13 = _vmaddbc(auVar14,auVar13);
        auVar14._8_4_ = uStack_e8;
        auVar14._0_8_ = uStack_f0;
        auVar14._12_4_ = uStack_e4;
        auVar16 = _lqc2(auVar14);
        auVar14 = _vmove(auVar15);
        fVar12 = *(float *)(iVar9 + 0xd0) - *(float *)(iVar9 + 0xd0) * fStack_e0;
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar13);
        uVar17 = _vwaitq();
        auVar15 = _vmulq(auVar14,uVar17);
        auVar13 = _vmul(auVar15,auVar16);
        auVar14 = _vaddbc(in_vf0,in_vf0);
        *(float *)(iVar9 + 0x60) = fStack_e0;
        *(int *)(iVar9 + 100) = iStack_dc;
        *(undefined4 *)(iVar9 + 0x68) = uStack_d8;
        *(undefined4 *)(iVar9 + 0x6c) = uStack_d4;
        _vaddabc(auVar13,auVar13);
        auVar14 = _vmaddbc(auVar14,auVar13);
        *(undefined4 *)(iVar9 + 0x70) = uStack_d0;
        *(undefined4 *)(iVar9 + 0x74) = uStack_cc;
        *(undefined4 *)(iVar9 + 0x78) = uStack_c8;
        *(undefined4 *)(iVar9 + 0x7c) = uStack_c4;
        auVar13 = _sqc2(auVar16);
        *(undefined1 (*) [16])(iVar9 + 0x50) = auVar13;
        auVar13 = _qmfc2(auVar14._0_4_);
        *(undefined1 *)(iVar9 + 0x100) = 1;
        *(undefined4 *)(iVar9 + 0x40) = uStack_100;
        *(undefined4 *)(iVar9 + 0x44) = uStack_fc;
        *(undefined4 *)(iVar9 + 0x48) = uStack_f8;
        *(undefined4 *)(iVar9 + 0x4c) = uStack_f4;
        *(float *)(iVar9 + 0xd0) = fVar12;
        if (*(float *)(*(int *)(*(int *)(iVar9 + 0xf4) + 0xc) + 0xc) < ABS(auVar13._0_4_)) {
          iVar6 = *(int *)(iVar9 + 4);
          goto LAB_00156864;
        }
        auVar13 = _qmtc2(auVar13._0_4_);
        auVar14 = _qmtc2(0x40000000);
        auVar13 = _vmulbc(auVar16,auVar13);
        uStack_80 = uStack_100;
        uStack_7c = uStack_fc;
        uStack_78 = uStack_f8;
        uStack_74 = uStack_f4;
        auVar13 = _vmulbc(auVar13,auVar14);
        auVar16 = _qmtc2(fVar12);
        auVar14 = _vmove(auVar15);
        auVar14 = _vsub(auVar14,auVar13);
        auVar15 = _lqc2(auStack_60);
        auVar13 = _vmul(auVar14,auVar14);
        _vaddabc(auVar13,auVar13);
        auVar13 = _vmaddbc(auVar15,auVar13);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar13);
        uVar17 = _vwaitq();
        auVar13 = _vmulq(auVar14,uVar17);
        auVar13 = _vmulbc(auVar13,auVar16);
        auVar14 = _qmtc2(uStack_100);
        auVar14 = _vadd(auVar14,auVar13);
        auVar13 = _sqc2(auVar14);
        *(undefined1 (*) [16])(iVar9 + 0x80) = auVar13;
        auVar13 = _qmfc2(auVar14._0_4_);
        lVar7 = FUN_0012ae58(DAT_0040f4d0,CONCAT44(uStack_fc,uStack_100),auVar13._0_8_,0x57,
                             *(undefined4 *)(iVar9 + 0xf0),1,&uStack_100);
        if (lVar7 != 0) {
          *(undefined4 *)(iVar9 + 0x80) = uStack_100;
          *(undefined4 *)(iVar9 + 0x84) = uStack_fc;
          *(undefined4 *)(iVar9 + 0x88) = uStack_f8;
          *(undefined4 *)(iVar9 + 0x8c) = uStack_f4;
          *(int *)(iVar9 + 0x90) = (int)uStack_f0;
          *(int *)(iVar9 + 0x94) = (int)((ulong)uStack_f0 >> 0x20);
          *(undefined4 *)(iVar9 + 0x98) = uStack_e8;
          *(undefined4 *)(iVar9 + 0x9c) = uStack_e4;
          *(float *)(iVar9 + 0xa0) = fStack_e0;
          *(int *)(iVar9 + 0xa4) = iStack_dc;
          *(undefined4 *)(iVar9 + 0xa8) = uStack_d8;
          *(undefined4 *)(iVar9 + 0xac) = uStack_d4;
          *(undefined4 *)(iVar9 + 0xb0) = uStack_d0;
          *(undefined4 *)(iVar9 + 0xb4) = uStack_cc;
          *(undefined4 *)(iVar9 + 0xb8) = uStack_c8;
          *(undefined4 *)(iVar9 + 0xbc) = uStack_c4;
          *(undefined1 *)(iVar9 + 0x100) = 2;
          *(float *)(iVar9 + 0xd4) = *(float *)(iVar9 + 0xd4) - *(float *)(iVar9 + 0xd0) * fStack_e0
          ;
          if ((*(int *)(iVar9 + 4) != 0) && (*(int *)(*(int *)(iVar9 + 4) + 0xc4) - 1U < 2)) {
            iVar6 = *(int *)(iVar9 + 4);
            goto LAB_00156864;
          }
          *(int *)(iVar9 + 4) = iStack_dc;
        }
      }
      goto LAB_00156860;
    }
    iVar6 = *(int *)(iVar9 + 4);
  }
LAB_00156864:
  *(undefined1 *)(iVar9 + 0x10c) = 0;
  *(undefined1 *)(iVar9 + 0x10d) = 0;
  if (iVar6 == 0) {
LAB_00156938:
    iVar6 = *(int *)(iVar9 + 4);
  }
  else {
    if ((*(int *)(iVar6 + 0xc4) - 3U < 2) || (bVar2 = false, *(int *)(iVar6 + 0xc4) == 7)) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar6 = *(int *)(iVar9 + 4);
      if ((*(ulong *)(iVar6 + 0xd0) & 0x42) == 0) {
        if ((*(byte *)(iVar6 + 0xd0) & 4) != 0) {
          if (*(int *)(iVar6 + 0xc4) == 3) {
            lVar7 = FUN_00152de8();
          }
          else {
            if (*(int *)(iVar6 + 0xc4) != 4) {
              iVar6 = *(int *)(iVar9 + 4);
              goto LAB_0015693c;
            }
            lVar7 = FUN_00146c18();
          }
          if (lVar7 != 0) {
            *(undefined1 *)(iVar9 + 0x10d) = 1;
          }
        }
      }
      else {
        if (*(int *)(iVar6 + 0xc4) == 3) {
          lVar7 = FUN_00152de8();
        }
        else {
          if (*(int *)(iVar6 + 0xc4) != 4) {
            iVar6 = *(int *)(iVar9 + 4);
            goto LAB_0015693c;
          }
          lVar7 = FUN_00146c18();
        }
        if (lVar7 != 0) {
          *(undefined1 *)(iVar9 + 0x10c) = 1;
        }
      }
      goto LAB_00156938;
    }
    iVar6 = *(int *)(iVar9 + 4);
  }
LAB_0015693c:
  *(undefined1 *)(iVar9 + 0x3c) = 0;
  if ((iVar6 == 0) || (*(int *)(iVar6 + 0xc4) != 1)) {
    fVar12 = *(float *)(*(int *)(iVar9 + 0xec) + 0xac);
    FUN_0012bb60(fVar12,*(float *)(*(int *)(iVar9 + 0xec) + 0xa4) *
                        *(float *)(DAT_0040f4bc + 0x1660) * fVar12,DAT_0040f4d0,
                 CONCAT44(uStack_7c,uStack_80));
    if (*(char *)(iVar9 + 0x3c) == '\0') goto LAB_001569e8;
    cVar5 = FUN_0012a7c0(DAT_0040f4d0,CONCAT44(uStack_7c,uStack_80));
    if (cVar5 == '\x01') {
      *(undefined4 *)(iVar9 + 4) = 0;
      *(undefined1 *)(iVar9 + 0x3c) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar9 + 0x34);
    }
    cVar5 = *(char *)(iVar9 + 0x3c);
  }
  else {
    cVar5 = *(char *)(iVar9 + 0x3c);
  }
  if (cVar5 != '\0') {
    return;
  }
LAB_001569e8:
  if (*(float *)(*(int *)(iVar9 + 0xec) + 0xac) < *(float *)(iVar9 + 0x30)) {
    *(undefined4 *)(iVar9 + 4) = 0;
  }
  return;
}


// ==== FUN_00156a88 @ 00156a88 ====
// GLOBAL DAT_0040f4d0 int

int FUN_00156a88(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                undefined1 (*param_6) [16])

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  uint uStack_170;
  int iStack_16c;
  undefined1 uStack_168;
  char cStack_167;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_110 [16];
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_a0;
  int iStack_90;
  
  auVar12 = _qmtc2(param_2);
  auVar13 = _qmtc2(param_3);
  auVar9 = _vsub(auVar13,auVar12);
  auVar10 = _vmul(auVar9,auVar9);
  auVar11 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar11,auVar10);
  iVar6 = 0;
  _sqc2(auVar9);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar10);
  uVar14 = _vwaitq();
  auVar9 = _vmulq(auVar9,uVar14);
  uStack_168 = *(int *)(param_5 + 0xc4) == 2;
  auStack_110 = _sqc2(auVar9);
  *(undefined4 *)param_6[2] = 0x40000000;
  auStack_190 = _sqc2(auVar12);
  auStack_180 = _sqc2(auVar13);
  cStack_167 = '\0';
  uStack_140 = 0x40000000;
  uStack_13c = 0;
  *(undefined4 *)(param_6[2] + 4) = 0;
  uStack_170 = param_4;
  iStack_16c = param_5;
  if ((param_4 & 1) != 0) {
    iVar5 = 0;
    iVar2 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar2 = DAT_0040f4d0 + (iVar2 >> 0x18) * 0x880 + 0x4990;
      if (*(char *)(iVar2 + 0x38) != '\0') {
        iVar3 = 1;
        do {
          bVar1 = iVar3 != -1;
          iVar3 = iVar3 + -1;
        } while (bVar1);
        lVar4 = FUN_0027d1d8(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 8),auStack_190,auStack_f0);
        if ((lVar4 == 1) && (fStack_a0 < *(float *)param_6[2])) {
          iVar6 = 1;
          *(int *)*param_6 = auStack_f0._0_4_;
          *(int *)(*param_6 + 4) = auStack_f0._4_4_;
          *(undefined4 *)(*param_6 + 8) = uStack_e8;
          *(undefined4 *)(*param_6 + 0xc) = uStack_e4;
          *(float *)param_6[2] = fStack_a0;
          *(int *)param_6[1] = (int)uStack_e0;
          *(int *)(param_6[1] + 4) = (int)((ulong)uStack_e0 >> 0x20);
          *(undefined4 *)(param_6[1] + 8) = uStack_d8;
          *(undefined4 *)(param_6[1] + 0xc) = uStack_d4;
          *(undefined4 *)(param_6[2] + 8) = *(undefined4 *)(iStack_90 + 4);
        }
      }
      iVar2 = iVar5 * 0x1000000;
    } while (iVar5 < 2);
  }
  if ((param_4 & 0x6f) != 0) {
    if (iVar6 != 0) {
      auStack_180 = *param_6;
    }
    FUN_00273708(DAT_0040f4d0 + 0x4920,auStack_190,0x156ca0,auStack_190);
    if (cStack_167 != '\0') {
      fVar7 = *(float *)param_6[2];
      *(undefined4 *)param_6[2] = uStack_140;
      *(undefined4 *)(param_6[2] + 4) = uStack_13c;
      *(undefined4 *)(param_6[2] + 8) = uStack_138;
      *(undefined4 *)(param_6[2] + 0xc) = uStack_134;
      fVar8 = *(float *)param_6[2];
      *(int *)*param_6 = (int)uStack_160;
      *(int *)(*param_6 + 4) = (int)((ulong)uStack_160 >> 0x20);
      *(undefined4 *)(*param_6 + 8) = uStack_158;
      *(undefined4 *)(*param_6 + 0xc) = uStack_154;
      *(int *)param_6[1] = (int)uStack_150;
      *(int *)(param_6[1] + 4) = (int)((ulong)uStack_150 >> 0x20);
      *(undefined4 *)(param_6[1] + 8) = uStack_148;
      *(undefined4 *)(param_6[1] + 0xc) = uStack_144;
      *(float *)param_6[2] = fVar8 * fVar7;
      *(int *)param_6[3] = (int)uStack_130;
      *(int *)(param_6[3] + 4) = (int)((ulong)uStack_130 >> 0x20);
      *(undefined4 *)(param_6[3] + 8) = uStack_128;
      *(undefined4 *)(param_6[3] + 0xc) = uStack_124;
    }
  }
  return iVar6;
}


// ==== FUN_00156ca0 @ 00156ca0 ====

undefined4 FUN_00156ca0(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((((iVar1 != 0) && (iVar1 != param_3[9])) && (*(int *)(iVar1 + 0xc4) == 1)) &&
     ((((param_3[8] & 4) != 0 && (*(int *)(iVar1 + 0x38c) == 0)) &&
      (lVar2 = FUN_00135138(iVar1,*param_3,param_3[4],1,auStack_80,1), lVar2 != 0)))) {
    *(undefined1 *)((int)param_3 + 0x29) = 1;
    param_3[0xc] = auStack_80._0_4_;
    param_3[0xd] = auStack_80._4_4_;
    param_3[0xe] = uStack_78;
    param_3[0xf] = uStack_74;
    param_3[0x10] = uStack_70;
    param_3[0x11] = uStack_6c;
    param_3[0x12] = uStack_68;
    param_3[0x13] = uStack_64;
    param_3[0x14] = uStack_60;
    param_3[0x15] = iVar1;
    param_3[0x16] = uStack_58;
    param_3[0x17] = uStack_54;
    param_3[0x18] = uStack_50;
    param_3[0x19] = uStack_4c;
    param_3[0x1a] = uStack_48;
    param_3[0x1b] = uStack_44;
  }
  return 1;
}


// ==== FUN_00156d60 @ 00156d60 ====

void FUN_00156d60(int param_1)

{
  FUN_0015a830(*(undefined4 *)(param_1 + 0xf4));
  return;
}


// ==== FUN_00156d80 @ 00156d80 ====

void FUN_00156d80(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0xec) + 0xc4) != '\0') {
    FUN_0015a990(*(undefined4 *)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xd8) = 0x1e;
  }
  return;
}


// ==== FUN_00156dc0 @ 00156dc0 ====

undefined4 FUN_00156dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(int *)(*(int *)(param_1 + 0xf0) + 0xc4) == 2) {
    lVar3 = FUN_00155118(*(undefined4 *)(param_1 + 0xfc),
                         *(undefined4 *)(*(int *)(param_1 + 0xec) + 100));
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xec);
      uVar2 = 0;
      if ((long)*(short *)(*(int *)(param_1 + 0xf4) + 0x18) != (long)*(int *)(iVar1 + 0x60)) {
        *(undefined1 *)(param_1 + 0x10b) = 0;
        if (*(char *)(iVar1 + 199) == '\0') {
          *(undefined4 *)(param_1 + 0xd8) = 4;
        }
        else {
          *(undefined4 *)(param_1 + 0xd8) = 5;
          *(char *)(param_1 + 0x101) =
               *(char *)(iVar1 + 0x60) - *(char *)(*(int *)(param_1 + 0xf4) + 0x18);
        }
        uVar2 = 1;
      }
    }
  }
  else {
    FUN_0015a830(*(undefined4 *)(param_1 + 0xf4));
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0xd8) = 4;
  }
  return uVar2;
}


// ==== FUN_00156e70 @ 00156e70 ====

void FUN_00156e70(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0xb;
  return;
}


// ==== FUN_00156e80 @ 00156e80 ====

void FUN_00156e80(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 9;
  return;
}


// ==== FUN_00156e90 @ 00156e90 ====

void FUN_00156e90(char *param_1)

{
  int iVar1;
  
  if ((((*(char *)(*(int *)(*(int *)(param_1 + 0xfc) + 0x14) + (int)*param_1) != '\0') &&
       (iVar1 = *(int *)(param_1 + 0xd8), iVar1 != 1)) && (iVar1 != 2)) &&
     (((iVar1 != 8 && (iVar1 != 0xb)) && (iVar1 != 9)))) {
    if (param_1[0x108] != '\0') {
      param_1[0xd8] = '\x18';
      param_1[0xd9] = '\0';
      param_1[0xda] = '\0';
      param_1[0xdb] = '\0';
      return;
    }
    param_1[0xd8] = '\x17';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
  }
  return;
}


// ==== FUN_00156f00 @ 00156f00 ====

undefined4 FUN_00156f00(int param_1)

{
  return **(undefined4 **)(param_1 + 0xf4);
}


// ==== FUN_00156f18 @ 00156f18 ====
// GLOBAL DAT_0040f540 int
// GLOBAL DAT_0040f510 int

void FUN_00156f18(int param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0xf0) + 0xc4) == 2) {
    if (param_2 == 0) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 8);
      uVar2 = FUN_0015a948(*(undefined4 *)(param_1 + 0xf4));
    }
    else {
      uVar2 = 0;
      uVar1 = *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 0xc);
    }
    *(char *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14) + 0x28c) = (char)param_2;
    FUN_001d6e78(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),uVar1,
                 **(undefined8 **)(param_1 + 0xe8),uVar2);
  }
  return;
}


// ==== FUN_00156fd0 @ 00156fd0 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f51c undefined4
// GLOBAL UNK_003f4ce0 undefined

/* Strings referenciadas:
     "sniperhud" */

void FUN_00156fd0(undefined8 param_1,long param_2,long param_3,long param_4,int param_5,long param_6
                 ,long param_7,int param_8,undefined4 *param_9)

{
  undefined1 uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  
  iVar9 = (int)param_1;
  bVar3 = *(int *)(*(int *)(iVar9 + 0xf0) + 0xc4) != 2;
  if (bVar3) {
LAB_00157074:
    iVar5 = *(int *)(iVar9 + 0xd8);
  }
  else {
    if (param_2 != 0) {
      if (*(char *)(iVar9 + 0x109) != '\0') {
        if (*(int *)(*(int *)(*(int *)(iVar9 + 0xf4) + 8) + 0x60) == 1) {
          param_2 = 0;
        }
        else {
          if (*(char *)(*(int *)(iVar9 + 0xec) + 0xc0) == '\0') {
            iVar5 = *(int *)(iVar9 + 0xd8);
            goto LAB_00157078;
          }
          param_2 = 0;
        }
      }
      goto LAB_00157074;
    }
    iVar5 = *(int *)(iVar9 + 0xd8);
  }
LAB_00157078:
  if (iVar5 == 0xb) {
    FUN_00157e10(param_1);
    *param_9 = 7;
    iVar5 = *(int *)(iVar9 + 0xf0);
  }
  else {
    iVar5 = *(int *)(iVar9 + 0xf0);
  }
  if (*(int *)(iVar5 + 0x38c) == 0) {
    lVar6 = FUN_001a6840(*(undefined4 *)(iVar5 + 0x330),0,0);
    if (lVar6 != 0) {
      uVar4 = *(undefined4 *)(iVar9 + 0xd8);
      goto LAB_001570c0;
    }
    iVar5 = *(int *)(iVar9 + 0xd8);
    goto LAB_001573b0;
  }
  uVar4 = *(undefined4 *)(iVar9 + 0xd8);
LAB_001570c0:
  switch(uVar4) {
  case 1:
  case 2:
  case 3:
    if (param_6 == 0) {
      if (*(char *)(iVar9 + 0x106) == '\0') {
        if (*(char *)(iVar9 + 0x107) == '\0') {
          FUN_00157e10(param_1);
          goto LAB_00157118;
        }
        fVar10 = *(float *)(iVar9 + 0xdc);
      }
      else {
        fVar10 = *(float *)(iVar9 + 0xdc);
      }
    }
    else {
      *(undefined1 *)(iVar9 + 0x105) = 1;
LAB_00157118:
      fVar10 = *(float *)(iVar9 + 0xdc);
    }
    if (fVar10 <= 0.0) {
      if (*(int *)(iVar9 + 0xd8) == 2) {
        FUN_001d7360(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),0);
        *(undefined1 *)(iVar9 + 0x10a) = 0;
        goto LAB_001572d8;
      }
      *(undefined4 *)(iVar9 + 0xd8) = 0;
    }
    break;
  default:
    *(undefined4 *)(iVar9 + 0xd8) = 0;
    if (param_6 == 0) {
      uVar1 = *(undefined1 *)(iVar9 + 0x107);
      FUN_00157e10(param_1);
      *(undefined1 *)(iVar9 + 0x107) = uVar1;
    }
    else {
      *(undefined1 *)(iVar9 + 0x105) = 1;
    }
    break;
  case 5:
    uVar4 = 2;
    *param_9 = 10;
    uVar8 = 6;
LAB_00157200:
    param_9[3] = uVar4;
    *(undefined1 *)(param_9 + 4) = 0;
    *(undefined4 *)(iVar9 + 0xd8) = uVar8;
    break;
  case 6:
    lVar6 = FUN_001a6840(*(undefined4 *)(*(int *)(iVar9 + 0xf0) + 0x330),0,1);
    if (lVar6 != 0) {
      lVar6 = FUN_00155118(*(undefined4 *)(iVar9 + 0xfc),
                           *(undefined4 *)(*(int *)(iVar9 + 0xec) + 100));
      if ((lVar6 == 0) || (*(char *)(iVar9 + 0x101) < '\x01')) {
        uVar4 = 3;
        *param_9 = 10;
        uVar8 = 8;
        goto LAB_00157200;
      }
      *param_9 = 10;
      param_9[3] = 2;
      *(undefined1 *)(param_9 + 4) = 0;
      break;
    }
    iVar5 = *(int *)(iVar9 + 0xd8);
    goto LAB_001573b0;
  case 8:
    if (!bVar3) {
      iVar5 = FUN_00135550(*(undefined4 *)(iVar9 + 0xf0));
      *(undefined1 *)(iVar5 + 0x35) = 0;
      goto LAB_001572d8;
    }
    *(undefined4 *)(iVar9 + 0xd8) = 0;
    break;
  case 10:
    *param_9 = 7;
    return;
  case 0xb:
  case 0xd:
  case 0x1c:
    break;
  case 0x13:
    *param_9 = 0xe;
    *(undefined4 *)(iVar9 + 0xd8) = 0x15;
    break;
  case 0x14:
    FUN_00157e10(param_1);
    *param_9 = 0xf;
    *(undefined1 *)(iVar9 + 0x106) = 0;
    *(undefined1 *)(iVar9 + 0x107) = 0;
    if ((*(char *)(*(int *)(iVar9 + 0xec) + 0xc0) != '\0') && (!bVar3)) {
      FUN_0020b988(DAT_0040f544,3);
      FUN_001f2838(DAT_0040f51c,0,1);
    }
    *(undefined4 *)(iVar9 + 0xd8) = 0x16;
    break;
  case 0x15:
    if (param_6 == 0) {
      *(undefined4 *)(iVar9 + 0xd8) = 0x14;
    }
    else {
      if (*(char *)(*(int *)(iVar9 + 0xec) + 0xc0) == '\0') {
        *(undefined1 *)(iVar9 + 0x106) = 1;
      }
      else {
        *(undefined1 *)(iVar9 + 0x107) = 1;
        if (*(char *)(iVar9 + 0x102) == '\0') {
          *(undefined1 *)(iVar9 + 0x102) = 1;
        }
        if (!bVar3) {
          FUN_0020b678(DAT_0040f544,0x3f4c50,3);
          FUN_001f2838(DAT_0040f51c,0,7);
          *(undefined4 *)(iVar9 + 0xd8) = 0;
          break;
        }
      }
LAB_001572d8:
      *(undefined4 *)(iVar9 + 0xd8) = 0;
    }
    break;
  case 0x17:
    FUN_00157e10(param_1);
    *param_9 = 0x13;
    *(undefined1 *)(param_9 + 4) = 1;
    *(undefined4 *)(iVar9 + 0xd8) = 0x19;
    break;
  case 0x18:
    FUN_00157e10(param_1);
    *(undefined1 *)(param_9 + 4) = 0;
    *param_9 = 0x13;
    *(undefined4 *)(iVar9 + 0xd8) = 0x1a;
    break;
  case 0x1e:
    *param_9 = 8;
    *(undefined4 *)(iVar9 + 0xd8) = 0x1f;
    if (*(char *)(iVar9 + 0x10a) != '\0') {
      FUN_001d7360(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),0);
      *(undefined1 *)(iVar9 + 0x10a) = 0;
    }
    FUN_00157e10(param_1);
    iVar5 = *(int *)(iVar9 + 0xd8);
    goto LAB_001573b0;
  }
  iVar5 = *(int *)(iVar9 + 0xd8);
LAB_001573b0:
  if (iVar5 - 1U < 2) {
    return;
  }
  if (iVar5 == 8) {
    return;
  }
  if (iVar5 == 0xb) {
    return;
  }
  if (iVar5 == 9) {
    return;
  }
  if (param_2 != 0) {
    if (iVar5 - 5U < 2) {
      iVar5 = *(int *)(iVar9 + 0xf4);
LAB_00157400:
      if (*(short *)(iVar5 + 0x18) == 0) goto LAB_0015743c;
    }
    else if (iVar5 == 0xd) {
      iVar5 = *(int *)(iVar9 + 0xf4);
      goto LAB_00157400;
    }
    if (bVar3) {
LAB_00157438:
      *(undefined4 *)(iVar9 + 0xd8) = 1;
    }
    else {
      iVar5 = *(int *)(iVar9 + 4);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar9 + 0xd8) = 1;
      }
      else if (*(int *)(iVar5 + 0xc4) == 1) {
        if (*(int *)(iVar5 + 0x3a4) != 0) goto LAB_00157438;
      }
      else {
        *(undefined4 *)(iVar9 + 0xd8) = 1;
      }
    }
  }
LAB_0015743c:
  if (((param_3 != 0) && (*(int *)(iVar9 + 0xf8) != 0)) &&
     ((bVar3 || (((iVar5 = *(int *)(iVar9 + 4), iVar5 == 0 || (*(int *)(iVar5 + 0xc4) != 1)) ||
                 (*(int *)(iVar5 + 0x3a4) != 0)))))) {
    *(undefined4 *)(iVar9 + 0xd8) = 2;
  }
  if (((param_4 != 0) && (!bVar3)) &&
     (lVar6 = FUN_00155198(*(undefined4 *)(iVar9 + 0xfc)), lVar6 != 0)) {
    *(undefined4 *)(iVar9 + 0xd8) = 0xc;
    FUN_00157e10(param_1);
  }
  if (((param_7 != 0) && (*(int *)(iVar9 + 0xd8) != 0x1c)) && (*(int *)(iVar9 + 0xd8) != 0x1d)) {
    *(undefined4 *)(iVar9 + 0xd8) = 0x1b;
    FUN_00157e10(param_1);
  }
  if ((((param_5 != 0) && (*(int *)(iVar9 + 0xd8) != 5)) && (*(int *)(iVar9 + 0xd8) != 6)) &&
     ((bVar3 || ((lVar6 = FUN_00155118(*(undefined4 *)(iVar9 + 0xfc),
                                       *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0xf4) + 8) + 100)),
                 lVar6 != 0 &&
                 ((long)*(short *)(*(int *)(iVar9 + 0xf4) + 0x18) !=
                  (long)*(int *)(*(int *)(*(int *)(iVar9 + 0xf4) + 8) + 0x60))))))) {
    *(undefined4 *)(iVar9 + 0xd8) = 4;
    FUN_00157e10(param_1);
  }
  if (param_8 == 0) {
LAB_00157580:
    uVar7 = *(uint *)(iVar9 + 0xd8);
  }
  else {
    uVar7 = *(uint *)(iVar9 + 0xd8);
    if (((uVar7 != 0x17) && (uVar7 != 0x18)) && ((uVar7 != 0x19 && (uVar7 != 0x1a)))) {
      if (*(char *)(iVar9 + 0x108) == '\0') {
        *(undefined4 *)(iVar9 + 0xd8) = 0x17;
      }
      else {
        *(undefined4 *)(iVar9 + 0xd8) = 0x18;
      }
      goto LAB_00157580;
    }
  }
  if (uVar7 < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x001575a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&UNK_003f4ce0 + uVar7 * 4))();
    return;
  }
  if (*(char *)(*(int *)(iVar9 + 0xec) + 199) != '\0') {
    iVar5 = *(int *)(iVar9 + 0xd8);
    if (iVar5 != 5) goto LAB_00157d78;
    param_9[3] = 1;
  }
  iVar5 = *(int *)(iVar9 + 0xd8);
LAB_00157d78:
  if ((((iVar5 - 4U < 3) || (iVar5 == 8)) && (!bVar3)) &&
     (*(char *)(*(int *)(iVar9 + 0xf0) + 0x8b3) != '\0')) {
    lVar6 = FUN_001a6840(*(undefined4 *)(*(int *)(iVar9 + 0xf0) + 0x330),0,1);
    if (lVar6 == 0) {
      piVar2 = *(int **)(*(int *)(*(int *)(iVar9 + 0xf0) + 0x330) + 0x90);
      if (piVar2 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar2;
      }
      if (iVar9 == 10) {
        return;
      }
    }
    *(undefined1 *)(param_9 + 4) = 1;
  }
  return;
}


// ==== FUN_00157e10 @ 00157e10 ====
// GLOBAL DAT_0040f544 undefined4
// GLOBAL DAT_0040f51c undefined4

void FUN_00157e10(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x105) == '\0') {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0xf0) + 0xc4) == 2) {
    iVar1 = FUN_00135550();
    *(undefined1 *)(iVar1 + 0x35) = 0;
    if (*(char *)(*(int *)(param_1 + 0xec) + 0xc0) != '\0') {
      FUN_0020b988(DAT_0040f544,3);
      FUN_001f2838(DAT_0040f51c,0,1);
      iVar1 = *(int *)(param_1 + 0xec);
      goto LAB_00157e7c;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xec);
LAB_00157e7c:
    if (*(char *)(iVar1 + 0xc0) != '\0') {
      *(undefined1 *)(param_1 + 0x107) = 0;
      goto LAB_00157e8c;
    }
  }
  *(undefined1 *)(param_1 + 0x106) = 0;
LAB_00157e8c:
  *(undefined1 *)(param_1 + 0x105) = 0;
  return;
}


// ==== FUN_00157ea0 @ 00157ea0 ====
// GLOBAL DAT_003bceb4 undefined4
// GLOBAL DAT_0040f4bc undefined4

void FUN_00157ea0(int param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(int *)(param_1 + 0xf0) + 0x2ac);
  if ((*(char *)(param_1 + 0x105) == '\0') ||
     (iVar2 = *(int *)(param_1 + 0xec), *(float *)(iVar2 + 0xb4) == 1.0)) {
    *(undefined1 *)(param_1 + 0x105) = 0;
    *(undefined1 *)(param_1 + 0x102) = 0;
    DAT_003bceb4 = 0;
    if (1.0 < fVar4) {
      fVar4 = fVar4 - (fVar4 - 1.0) / 5.0;
    }
    if (*(char *)(param_1 + 0x107) == '\0') {
      if (*(char *)(param_1 + 0x106) == '\0') goto LAB_00158040;
      iVar2 = *(int *)(param_1 + 0xd8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd8);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0x14;
    }
    goto LAB_00158040;
  }
  if (*(char *)(param_1 + 0x107) == '\0') {
    if (*(char *)(param_1 + 0x106) != '\0') {
      iVar2 = *(int *)(param_1 + 0xec);
      goto LAB_00157f54;
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      iVar2 = *(int *)(param_1 + 0xec);
      goto LAB_00157f54;
    }
    if (*(char *)(iVar2 + 0xc5) != '\0') {
      iVar2 = *(int *)(param_1 + 0xf4);
LAB_00157f24:
      lVar1 = FUN_00155118(*(undefined4 *)(param_1 + 0xfc),
                           *(undefined4 *)(*(int *)(iVar2 + 8) + 100));
      if ((lVar1 != 0) || (0 < *(short *)(*(int *)(param_1 + 0xf4) + 0x18))) {
        *(undefined4 *)(param_1 + 0xd8) = 0x13;
      }
      iVar2 = *(int *)(param_1 + 0xec);
      goto LAB_00157f54;
    }
    if (*(char *)(iVar2 + 0xc0) != '\0') {
      iVar2 = *(int *)(param_1 + 0xf4);
      goto LAB_00157f24;
    }
    fVar3 = *(float *)(iVar2 + 0xb4);
LAB_00157fc0:
    if (fVar3 <= fVar4) goto LAB_00158040;
    fVar3 = *(float *)(iVar2 + 0xbc);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xec);
LAB_00157f54:
    if (*(char *)(iVar2 + 0xc0) == '\0') {
      fVar3 = *(float *)(iVar2 + 0xb4);
      goto LAB_00157fc0;
    }
    if (*(char *)(param_1 + 0x107) == '\0') goto LAB_00158040;
    if (*(char *)(param_1 + 0x102) != '\x01') {
      if (*(char *)(param_1 + 0x102) != '\x02') goto LAB_00158040;
      fVar3 = *(float *)(iVar2 + 0xb8);
      goto LAB_00157fc0;
    }
    fVar3 = *(float *)(iVar2 + 0xbc);
    if (*(float *)(iVar2 + 0xb4) <= fVar4) {
      if (*(float *)(iVar2 + 0xb4) + fVar4 * fVar3 < fVar4) {
        fVar4 = fVar4 - fVar4 * fVar3;
      }
      goto LAB_00158040;
    }
  }
  fVar4 = fVar4 + fVar4 * fVar3;
LAB_00158040:
  FUN_00110478(70.0 / fVar4,DAT_0040f4bc);
  *(float *)(*(int *)(param_1 + 0xf0) + 0x2ac) = fVar4;
  return;
}


// ==== FUN_00158078 @ 00158078 ====

bool FUN_00158078(int param_1)

{
  return *(int *)(param_1 + 0xd8) == 4;
}


// ==== FUN_00158088 @ 00158088 ====

bool FUN_00158088(int param_1)

{
  return *(int *)(param_1 + 0xd8) == 1;
}


// ==== FUN_00158098 @ 00158098 ====

undefined4 FUN_00158098(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0xd8) == 1) || (*(int *)(param_1 + 0xd8) == 8)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001580c0 @ 001580c0 ====

void FUN_001580c0(int param_1)

{
  FUN_0015a938(*(undefined4 *)(param_1 + 0xf4));
  return;
}


// ==== FUN_001580e0 @ 001580e0 ====

undefined2 FUN_001580e0(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 0xf4) + 0x18);
}


// ==== FUN_001580f0 @ 001580f0 ====
// GLOBAL DAT_00414d68 uint
// GLOBAL DAT_00414d6c int
// GLOBAL DAT_0040f520 undefined4

void FUN_001580f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_vf8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
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
  undefined1 auStack_30 [16];
  
  auVar6 = _qmtc2(0);
  _vmove(in_vf8);
  uVar1 = DAT_00414d68 * 0x10000 + ((int)DAT_00414d68 >> 0x10) + DAT_00414d6c;
  auVar6 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar6);
  uVar2 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + DAT_00414d6c + uVar1;
  iVar4 = DAT_00414d6c + uVar1 + uVar2;
  auVar6 = _qmtc2((float)uVar1 * 2.3283064e-10 - 0.5);
  auVar6 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar6);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  fVar5 = (float)uVar2 * 2.3283064e-10 - 0.5;
  auVar6 = _qmtc2(fVar5);
  DAT_00414d68 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + iVar4;
  auVar12 = _vaddbc(in_vf0,auVar6);
  DAT_00414d6c = iVar4 + DAT_00414d68;
  auVar6 = _vmul(auVar12,auVar12);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar14 = _vwaitq();
  auVar13 = _vmulq(auVar12,uVar14);
  auVar7 = _qmtc2(0x3f800000);
  auVar11 = _qmtc2(0x41400000);
  iVar4 = *(int *)(param_1 + 0xf0);
  auVar10 = _qmtc2(0x40e00000);
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xf0));
  auVar6 = _qmtc2((float)DAT_00414d68 * 2.3283064e-10 * 0.03);
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xe0));
  _vmulbc(auVar13,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar7);
  _vmulabc(auVar9,auVar6);
  _vmaddabc(auVar12,auVar6);
  auVar12 = _vmaddbc(auVar8,auVar6);
  auVar6 = _vaddbc(auVar12,auVar7);
  auVar6 = _vmulbc(auVar6,auVar11);
  auVar6 = _vaddbc(auVar6,auVar10);
  auVar6 = _vmulbc(auVar12,auVar6);
  auVar6 = _vaddbc(auVar6,auVar7);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auStack_30 = _sqc2(auVar6);
  puVar3 = (undefined8 *)FUN_001a68e0(*(undefined4 *)(iVar4 + 0x330),7,fVar5);
  uStack_68 = *(undefined4 *)(puVar3 + 1);
  uStack_64 = *(undefined4 *)((int)puVar3 + 0xc);
  uStack_70 = (undefined4)*puVar3;
  uStack_6c = (undefined4)((ulong)*puVar3 >> 0x20);
  uStack_58 = *(undefined4 *)(puVar3 + 3);
  uStack_54 = *(undefined4 *)((int)puVar3 + 0x1c);
  uStack_60 = (undefined4)puVar3[2];
  uStack_5c = (undefined4)((ulong)puVar3[2] >> 0x20);
  uStack_48 = *(undefined4 *)(puVar3 + 5);
  uStack_44 = *(undefined4 *)((int)puVar3 + 0x2c);
  uStack_50 = (undefined4)puVar3[4];
  uStack_4c = (undefined4)((ulong)puVar3[4] >> 0x20);
  uStack_38 = *(undefined4 *)(puVar3 + 7);
  uStack_34 = *(undefined4 *)((int)puVar3 + 0x3c);
  uStack_40 = (undefined4)puVar3[6];
  uStack_3c = (undefined4)((ulong)puVar3[6] >> 0x20);
  if (*(int *)(*(int *)(param_1 + 0xf0) + 0xc4) == 2) {
    uVar14 = 3;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0xf0) + 0x3a4) != 0) {
      FUN_001553e0(DAT_0040f520,&uStack_70,auStack_30._0_8_,0,0);
      return;
    }
    uVar14 = 1;
  }
  FUN_001553e0(DAT_0040f520,&uStack_70,auStack_30._0_8_,uVar14,0);
  return;
}


// ==== FUN_001583d8 @ 001583d8 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_00414760 undefined
// GLOBAL DAT_0040f520 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001583d8(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
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
  undefined4 uVar15;
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
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auStack_80 = _sqc2(auVar4);
  iVar1 = FUN_00135550(*(undefined4 *)(param_1 + 0xf0));
  puVar2 = (undefined8 *)FUN_001a68e0(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x330),0);
  uStack_d8 = *(undefined4 *)(puVar2 + 1);
  uStack_d4 = *(undefined4 *)((int)puVar2 + 0xc);
  auVar5 = _qmtc2(0);
  uStack_e0 = (undefined4)*puVar2;
  uStack_dc = (undefined4)((ulong)*puVar2 >> 0x20);
  uStack_c8 = *(undefined4 *)(puVar2 + 3);
  uStack_c4 = *(undefined4 *)((int)puVar2 + 0x1c);
  uStack_d0 = (undefined4)puVar2[2];
  uStack_cc = (undefined4)((ulong)puVar2[2] >> 0x20);
  uStack_b8 = *(undefined4 *)(puVar2 + 5);
  uStack_b4 = *(undefined4 *)((int)puVar2 + 0x2c);
  uStack_c0 = (undefined4)puVar2[4];
  uStack_bc = (undefined4)((ulong)puVar2[4] >> 0x20);
  auVar4 = _lqc2(*(undefined1 (*) [16])(puVar2 + 6));
  auStack_b0 = _sqc2(auVar4);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x20));
  auVar4 = _vsubbc(auVar7,auVar4);
  auStack_a0 = _sqc2(auVar4);
  auVar7 = _vaddbc(in_vf0,auVar5);
  _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0xf0) + 0xa0));
  auVar4 = _vaddbc(in_vf0,auVar5);
  auVar5 = _vsub(auVar7,auVar4);
  auVar4 = _lqc2(auStack_80);
  auVar7 = _vmul(auVar5,auVar5);
  auStack_70 = _sqc2(auVar5);
  _vaddabc(auVar7,auVar7);
  auVar5 = _vmaddbc(auVar4,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar5);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar4 = _vmulq(auVar4,uVar15);
  auStack_60 = _sqc2(auVar5);
  auVar4 = _qmfc2(auVar4._0_4_);
  uVar15 = FUN_0012d0d0(0xc0000000,0x40000000,DAT_0040f4d0);
  auVar7 = _qmtc2(auVar4._0_4_);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar14 = _vsub(in_vf0,in_vf0);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(_DAT_00414760);
  fVar3 = auVar4._0_4_ - (float)auStack_a0._4_4_;
  auVar4 = _vsub(in_vf0,auVar5);
  _lqc2(auStack_90);
  auVar4 = _vmulbc(auVar4,auVar7);
  auVar8 = _lqc2(auStack_70);
  auVar4 = _vmulbc(auVar4,auVar7);
  _vopmula(auVar8,auVar9);
  auVar10 = _vopmsub(auVar9,auVar8);
  auVar5 = _qmtc2(uVar15);
  auStack_a0 = _sqc2(auVar4);
  auVar4 = _vaddbc(in_vf0,auVar5);
  fVar3 = fVar3 + fVar3;
  auVar4 = _sqc2(auVar4);
  auVar5 = _vmul(auVar10,auVar10);
  auVar7 = _vmul(auVar9,auVar9);
  auVar6 = _lqc2(auStack_80);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar11 = _vmove(auVar10);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar6,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar5);
  uVar15 = _vwaitq();
  auVar12 = _vmulq(auVar11,uVar15);
  _lqc2(auVar4);
  auVar4 = _qmtc2(SQRT((float)auStack_a0._4_4_ /
                       (float)((uint)(fVar3 < 0.01) * 0x3c23d70a |
                              (int)fVar3 * (uint)(fVar3 >= 0.01))));
  auVar5 = _vmove(auVar9);
  _vaddbc(in_vf0,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  uVar15 = _vwaitq();
  auVar11 = _vmulq(auVar5,uVar15);
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar5 = _lqc2(auStack_60);
  auStack_90 = _sqc2(auVar4);
  auVar7 = _vmove(auVar8);
  auVar4 = _qmtc2(0x3dcccccd);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar5);
  uVar15 = _vwaitq();
  auVar6 = _vmulq(auVar7,uVar15);
  _sqc2(auVar13);
  auVar5 = _lqc2(auStack_90);
  _vmulabc(auVar12,auVar5);
  _vmaddabc(auVar11,auVar5);
  _vmaddabc(auVar6,auVar5);
  auVar7 = _vmaddbc(auVar14,in_vf0);
  _sqc2(auVar9);
  auVar5 = _lqc2(auStack_b0);
  auVar4 = _vmulbc(auVar7,auVar4);
  auVar5 = _vadd(auVar5,auVar4);
  _sqc2(auVar8);
  _sqc2(auVar10);
  auVar4 = _qmfc2(auVar7._0_4_);
  auStack_b0 = _sqc2(auVar5);
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar11);
  _sqc2(auVar6);
  FUN_001553e0(DAT_0040f520,&uStack_e0,auVar4._0_8_,0,1);
  return;
}


// ==== FUN_00158668 @ 00158668 ====
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040eaf8 undefined4

void FUN_00158668(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_a0;
  undefined1 uStack_80;
  undefined1 auStack_7f [15];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0xf0);
  if (*(int *)(iVar1 + 0xc4) == 2) {
    auVar4 = _qmtc2(0x3f000000);
    auStack_70 = _sqc2(auVar4);
    auVar7 = _qmtc2(0x3f000000);
    *(int *)(*DAT_0040f4dc + 0x4c) = *(int *)(*DAT_0040f4dc + 0x4c) + 1;
    iVar1 = *(int *)(iVar3 + 0xf0);
    auVar4 = _lqc2(auStack_70);
    uStack_f8 = *(undefined4 *)(iVar1 + 0xd8);
    uStack_f4 = *(undefined4 *)(iVar1 + 0xdc);
    uStack_100 = (undefined4)*(undefined8 *)(iVar1 + 0xd0);
    uStack_fc = (undefined4)((ulong)*(undefined8 *)(iVar1 + 0xd0) >> 0x20);
    uStack_f0 = *(undefined4 *)(iVar1 + 0xe0);
    uStack_ec = *(undefined4 *)(iVar1 + 0xe4);
    uStack_e8 = *(undefined4 *)(iVar1 + 0xe8);
    uStack_e4 = *(undefined4 *)(iVar1 + 0xec);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
    auVar4 = _vmulbc(auVar5,auVar4);
    auStack_e0 = _sqc2(auVar5);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x100));
    auVar4 = _vadd(auVar5,auVar4);
    DAT_0040eaf8 = 0;
    auVar4 = _vadd(in_vf0,auVar4);
    auVar4 = _sqc2(auVar4);
    auStack_d0 = _sqc2(auVar5);
    _lqc2(auVar4);
    auVar4 = _vsubbc(in_vf0,in_vf0);
    auVar4 = _vaddbc(auVar4,auVar7);
    auStack_60 = _sqc2(auVar4);
    FUN_00273568(DAT_0040f4d0 + 0x4920);
    auVar4 = _lqc2(auStack_e0);
    auVar5 = _qmtc2(0x40000000);
    auVar7 = _lqc2(auStack_70);
    auVar4 = _vmulbc(auVar4,auVar7);
    auVar4 = _vmulbc(auVar4,auVar5);
    auVar5 = _qmtc2(auStack_d0._0_4_);
    auVar4 = _vadd(auVar5,auVar4);
    _qmfc2(auVar4._0_4_);
    lVar2 = FUN_0012ae58(DAT_0040f4d0);
    if (lVar2 == 0) {
      FUN_001588f0(0,param_1,0);
    }
    else {
      FUN_001df3d0(0x42700000,&uStack_80,*(undefined4 *)(iVar3 + 0xf0));
      FUN_001588f0(fStack_a0 * 0.5 + fStack_a0 * 0.5,param_1,1);
    }
    FUN_0012c428(0x3fc00000,0x43480000,DAT_0040f4d0);
  }
  else {
    auVar4 = _pextlw(0,0);
    auVar6 = _qmtc2(0x40200000);
    auVar4 = _pextlw(0x3f800000,auVar4._0_8_);
    uStack_c0 = auVar4._0_4_;
    uStack_bc = auVar4._4_4_;
    uStack_b8 = auVar4._8_4_;
    uStack_b4 = auVar4._12_4_;
    auVar4 = _qmtc2(uStack_c0);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar7 = _vadd(auVar5,auVar4);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
    auVar4 = _qmfc2(auVar7._0_4_);
    auVar5 = _vmulbc(auVar5,auVar6);
    auVar5 = _vadd(auVar7,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    lVar2 = FUN_0012ae58(DAT_0040f4d0,auVar4._0_8_,auVar5._0_8_,0x2d,iVar1,1,&uStack_100);
    if ((lVar2 != 0) && (auStack_e0._4_4_ != 0)) {
      if (*(int *)(auStack_e0._4_4_ + 0xc4) == 1) {
        iVar1 = *(int *)(auStack_e0._4_4_ + 0x10);
      }
      else {
        if (*(int *)(auStack_e0._4_4_ + 0xc4) != 2) {
          return;
        }
        iVar1 = *(int *)(auStack_e0._4_4_ + 0x10);
      }
      (**(code **)(iVar1 + 0x9c))(0x42700000,auStack_e0._4_4_ + (int)*(short *)(iVar1 + 0x98));
      FUN_001df3d0(0x42700000,auStack_7f,*(undefined4 *)(iVar3 + 0xf0));
    }
  }
  return;
}


// ==== FUN_001588f0 @ 001588f0 ====
// GLOBAL DAT_0040eaf8 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0048f6d0 undefined4

void FUN_001588f0(undefined4 param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  
  iVar4 = 0;
  fVar5 = (float)FUN_0029e688(param_1,0x40000000);
  iVar2 = *(int *)(param_2 + 0xf0);
  uStack_a0 = *(undefined4 *)(iVar2 + 0xa0);
  uStack_9c = *(undefined4 *)(iVar2 + 0xa4);
  uStack_98 = *(undefined4 *)(iVar2 + 0xa8);
  uStack_94 = *(undefined4 *)(iVar2 + 0xac);
  bVar1 = false;
  if (0 < DAT_0040eaf8) {
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auStack_90 = _sqc2(auVar6);
    piVar3 = &DAT_0048f6d0;
    do {
      iVar2 = *piVar3;
      if (*(int *)(iVar2 + 0xc4) == 1) {
        auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_2 + 0xf0) + 0xa0));
        auVar6 = _sqc2(auVar7);
        if (param_3 != 0) {
          auVar8._4_4_ = uStack_9c;
          auVar8._0_4_ = uStack_a0;
          auVar8._8_4_ = uStack_98;
          auVar8._12_4_ = uStack_94;
          auVar8 = _lqc2(auVar8);
          auVar7 = _vsub(auVar7,auVar8);
          auVar7 = _vmul(auVar7,auVar7);
          auVar8 = _lqc2(auStack_90);
          _vaddabc(auVar7,auVar7);
          auVar7 = _vmaddbc(auVar8,auVar7);
          auVar7 = _qmfc2(auVar7._0_4_);
          if (fVar5 < auVar7._0_4_) goto LAB_00158a24;
        }
        if (*(int *)(iVar2 + 0x38c) == 0) {
          uStack_c0 = auVar6._0_8_;
          (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                    (0x42700000,iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),uStack_c0,
                     *(undefined4 *)(*(int *)(param_2 + 0xf0) + 0x90),
                     *(undefined4 *)(param_2 + 0xf0));
          bVar1 = true;
        }
      }
LAB_00158a24:
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < DAT_0040eaf8);
  }
  if (bVar1) {
    iVar2 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    FUN_001df3d0(0x42700000,auStack_b0,*(undefined4 *)(param_2 + 0xf0),*(undefined4 *)(iVar2 + 0x30)
                );
  }
  return;
}


// ==== FUN_00158ae0 @ 00158ae0 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f4e0 int_*
// GLOBAL DAT_0040f4d0 int

void FUN_00158ae0(ulong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  iVar4 = *param_2;
  if (param_1 == 0xb12fc567e6600000) {
    iVar4 = *(int *)(iVar4 + 0x2a4);
    if (*(char *)(*(int *)(iVar4 + 0xec) + 199) == '\0') {
      *(undefined4 *)(iVar4 + 0xd8) = 8;
      FUN_00156d60(iVar4);
    }
    else {
      *(char *)(iVar4 + 0x101) = *(char *)(iVar4 + 0x101) + -1;
      FUN_0015a8d0(*(undefined4 *)(iVar4 + 0xf4));
    }
  }
  else if (param_1 < 0xb12fc567e6600001) {
    if (param_1 == 0x712f541ceefd4080) {
      iVar4 = 0;
      uVar1 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
      if (uVar1 != 0) {
        plVar3 = *(long **)(*DAT_0040f4e0 + 4);
        iVar2 = 0x1000000;
        do {
          if (*plVar3 == *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2e8)) {
            uVar6 = (undefined1)iVar4;
            goto LAB_00158dc4;
          }
          plVar3 = plVar3 + 4;
          iVar4 = iVar2 >> 0x18;
          iVar2 = iVar2 + 0x1000000;
        } while (iVar4 < (int)uVar1);
      }
      uVar6 = 0xff;
LAB_00158dc4:
      FUN_00136848(*param_2);
      fe_FEZoomLevel_00156450(*(undefined4 *)(*param_2 + 0x2a4));
      fe_FEZoomLevel_00156278(*(undefined4 *)(*param_2 + 0x2a4),*param_2,uVar6,0);
    }
    else if (param_1 < 0x712f541ceefd4081) {
      if (param_1 == 0x61993e3f1ec654d0) {
        FUN_00135ed0(0,0x40800000,iVar4);
      }
    }
    else if (param_1 == 0x73063d2f95228000) {
      FUN_001551a8(iVar4 + 0x280);
      if (*(int *)(*param_2 + 0xc4) == 2) {
        FUN_001580f0(*(undefined4 *)(iVar4 + 0x2a4));
        FUN_001d73d8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
        iVar4 = *(int *)(iVar4 + 0x2a4);
      }
      else {
        FUN_001583d8(*(undefined4 *)(iVar4 + 0x2a4));
        iVar4 = *(int *)(iVar4 + 0x2a4);
      }
      *(undefined4 *)(iVar4 + 0xd8) = 0xe;
    }
    else if (param_1 == 0x9414f5b470a00000) {
      FUN_00158668(*(undefined4 *)(iVar4 + 0x2a4));
      *(undefined4 *)(*(int *)(iVar4 + 0x2a4) + 0xd8) = 0x1d;
    }
  }
  else {
    if (param_1 == 0xb76b1021b22edcc0) {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0x2a4) + 0xe8) + 0x10);
      if (*(char *)(iVar2 + 0x6c) == '\0') {
        return;
      }
      uVar5 = 0;
    }
    else {
      if (0xb76b1021b22edcc0 < param_1) {
        if (param_1 == 0xb796ac6f7db30ba2) {
          FUN_00156f18(*(undefined4 *)(iVar4 + 0x2a4),0);
          *(undefined1 *)(*(int *)(iVar4 + 0x2a4) + 0x108) = 0;
          return;
        }
        if (param_1 != 0xb796ac6f7db30cd0) {
          return;
        }
        FUN_00156f18(*(undefined4 *)(iVar4 + 0x2a4),1);
        *(undefined1 *)(*(int *)(iVar4 + 0x2a4) + 0x108) = 1;
        return;
      }
      if (param_1 != 0xb76b1021a5abbb58) {
        return;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0x2a4) + 0xe8) + 0x10);
      if (*(char *)(iVar2 + 0x6c) == '\0') {
        return;
      }
      uVar5 = 1;
    }
    FUN_001b5578(DAT_0040f4d8 + 0x512e0,iVar4,iVar2,uVar5);
  }
  return;
}


// ==== FUN_00158e80 @ 00158e80 ====

void FUN_00158e80(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}


// ==== FUN_00158e88 @ 00158e88 ====

int FUN_00158e88(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) == 1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ==== FUN_00158ea8 @ 00158ea8 ====

void FUN_00158ea8(int param_1,short param_2)

{
  long lVar1;
  
  *(short *)(*(int *)(param_1 + 0xf4) + 0x18) = param_2;
  if (param_2 == 0) {
    lVar1 = FUN_00155118(*(undefined4 *)(param_1 + 0xfc),
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + 100));
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x10b) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x10b) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x10b) = 0;
  }
  return;
}


// ==== FUN_00158f08 @ 00158f08 ====

void FUN_00158f08(int param_1)

{
  FUN_00382348(0x414d70,0x2b9d6f8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00158f50 @ 00158f50 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4e0 int_*
// GLOBAL DAT_0040e591 undefined1

undefined8 FUN_00158f50(int *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_3 + 0x98);
  param_1[4] = 0;
  param_1[5] = iVar9;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  iVar9 = *(int *)(param_3 + 0x90);
  *param_1 = iVar9;
  if ((*(int *)(*(int *)(param_2 + 0xf0) + 0xc4) != 2) && (iVar9 == 4)) {
    *param_1 = 0;
  }
  param_1[2] = param_3;
  auVar5 = _pextlw(0,0);
  iVar9 = param_1[1];
  auVar5 = _pextlw(0,auVar5._0_8_);
  *(int *)(iVar9 + 0x10) = auVar5._0_4_;
  *(int *)(iVar9 + 0x14) = auVar5._4_4_;
  *(int *)(iVar9 + 0x18) = auVar5._8_4_;
  *(int *)(iVar9 + 0x1c) = auVar5._12_4_;
  if (*(int *)(*(int *)(param_1[1] + 0xf0) + 0xc4) == 2) {
    uVar3 = FUN_00155178(*(int *)(param_1[1] + 0xf0) + 0x280,*(undefined4 *)(param_3 + 100),
                         *(undefined1 *)(param_3 + 0x60));
    *(undefined1 *)((int)param_1 + 0x1a) = uVar3;
    uVar1 = *(undefined2 *)(param_3 + 0x60);
    param_1[3] = param_3;
    *(undefined2 *)(param_1 + 6) = uVar1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1a) = 100;
    uVar1 = *(undefined2 *)(param_3 + 0x60);
    param_1[3] = param_3 + 0x30;
    *(undefined2 *)(param_1 + 6) = uVar1;
  }
  if (*(int *)(*(int *)(param_1[1] + 0xf0) + 0xc4) == 1) {
    iVar9 = FUN_001e2be8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14));
    param_1[4] = iVar9;
    puVar2 = *(undefined8 **)(param_1[1] + 0xe8);
    uVar4 = FUN_00135570(*(undefined4 *)(param_1[1] + 0xf0));
    uVar4 = FUN_00138320(uVar4);
    FUN_001e18b0(param_1[4],*puVar2,uVar4,param_4);
    iVar9 = param_1[1];
  }
  else {
    iVar9 = param_1[1];
  }
  *(undefined4 *)(iVar9 + 0xe4) = 0x3f800000;
  param_1[7] = 0;
  uVar7 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
  iVar9 = 0;
  if (uVar7 != 0) {
    plVar6 = *(long **)(*DAT_0040f4e0 + 4);
    iVar8 = 0x1000000;
    do {
      if (*plVar6 == 0x5446152331830000) {
        DAT_0040e591 = (char)iVar9;
        return 1;
      }
      plVar6 = plVar6 + 4;
      iVar9 = iVar8 >> 0x18;
      iVar8 = iVar8 + 0x1000000;
    } while (iVar9 < (int)uVar7);
  }
  DAT_0040e591 = 0xff;
  return 1;
}


// ==== FUN_00159120 @ 00159120 ====

void FUN_00159120(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_001e1a70();
  }
  return;
}


// ==== FUN_00159148 @ 00159148 ====
// GLOBAL DAT_0040f510 int

undefined4 FUN_00159148(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_001e2c38(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}


// ==== FUN_00159198 @ 00159198 ====
// GLOBAL DAT_00414d54 undefined4
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f504 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040e591 undefined1
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_003f4fc8 undefined4
// GLOBAL DAT_003f4fc4 undefined4
// GLOBAL DAT_0040f520 undefined4
// GLOBAL DAT_0040f4d0 int

/* WARNING: Removing unreachable block (ram,0x00159660) */
/* WARNING: Removing unreachable block (ram,0x0015967c) */
/* WARNING: Removing unreachable block (ram,0x00159828) */
/* WARNING: Removing unreachable block (ram,0x00159728) */
/* WARNING: Removing unreachable block (ram,0x001593c0) */
/* WARNING: Removing unreachable block (ram,0x001597cc) */
/* WARNING: Removing unreachable block (ram,0x001596d8) */

void FUN_00159198(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 in_zero_qw [16];
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [16];
  undefined4 uStack_1f0;
  int iStack_1ec;
  uint uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined4 uStack_1e0;
  undefined4 uStack_1ac;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [48];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 uStack_110;
  char acStack_10f [15];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 *puStack_b8;
  
  uStack_bc = 0;
  piVar10 = (int *)param_1;
  iVar11 = piVar10[1];
  bVar2 = *(int *)(*(int *)(iVar11 + 0xf0) + 0xc4) == 2;
  bVar4 = false;
  if (bVar2) {
    uVar8 = 0;
    if (*(char *)(iVar11 + 0x3c) != '\0') {
      uVar8 = (uint)(*(char *)(*(int *)(iVar11 + 0xec) + 0xb0) == '\0');
    }
    uStack_bc = uVar8 | 2;
    if (*piVar10 != 4) {
      uStack_bc = uVar8;
    }
    if (!bVar2) goto LAB_001592c8;
    uStack_c0 = 0x57;
    iVar11 = *(int *)(*(int *)(piVar10[1] + 0xf0) + 0x10);
    (**(code **)(iVar11 + 0xa4))
              (auStack_150,*(int *)(piVar10[1] + 0xf0) + (int)*(short *)(iVar11 + 0xa0));
    FUN_0016e008(DAT_0040f4d4);
    piVar9 = DAT_0040f4dc;
    *(int *)(*DAT_0040f4dc + 0x48) = *(int *)(*DAT_0040f4dc + 0x48) + 1;
    if (9999999 < *(uint *)(*piVar9 + 0x48)) {
      *(undefined4 *)(*piVar9 + 0x48) = 9999999;
    }
  }
  else {
LAB_001592c8:
    uStack_c0 = 0x1f;
  }
  if (bVar2) {
    if (*(int *)(DAT_0040f504 + 4) != 0) {
      piVar9 = (int *)piVar10[3];
      goto LAB_00159444;
    }
    FUN_001d6f90(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
    iVar11 = piVar10[1];
    if (*(char *)(iVar11 + 0x108) == '\0') {
      bVar3 = true;
      if (**(long **)(iVar11 + 0xe8) == 0x54461524b8230000) {
        bVar3 = *(char *)(iVar11 + 0x102) == '\0';
      }
      if (bVar3) {
        uVar5 = FUN_0015d210(DAT_0040f4e0,*(undefined1 *)piVar10[1]);
        FUN_001bd508(DAT_0040f4d8 + 0x4ee00,uVar5);
        lVar6 = *(long *)(*(int *)(*(int *)(piVar10[1] + 0xe8) + 0x10) + 0x10);
        if (lVar6 != 0) {
          FUN_001b69e0(DAT_0040f4d8 + 0x66290,lVar6,*(undefined4 *)(piVar10[1] + 0xf0),1,5);
        }
      }
    }
    else if (*(long *)((int)(*(long **)(iVar11 + 0xe8))[2] + 0x18) != 0) {
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,0x9731828d1b5f6830,*(undefined4 *)(iVar11 + 0xf0),1,5);
      uVar5 = FUN_0015d210(DAT_0040f4e0,DAT_0040e591);
      FUN_001bd508(DAT_0040f4d8 + 0x4ee00,uVar5);
      piVar9 = (int *)piVar10[3];
      goto LAB_00159444;
    }
  }
  piVar9 = (int *)piVar10[3];
LAB_00159444:
  iVar11 = 0;
  if (0 < *piVar9) {
    puStack_b8 = auStack_150;
    do {
      acStack_10f[0] = '\x01';
      iVar12 = piVar9[5];
      uStack_110 = 0;
      if (bVar2) {
        iVar1 = *(int *)(*(int *)(piVar10[1] + 0xf0) + 0x10);
        (**(code **)(iVar1 + 0xa4))
                  (auStack_150,*(int *)(piVar10[1] + 0xf0) + (int)*(short *)(iVar1 + 0xa0));
        uStack_d0 = uStack_120;
        uStack_cc = uStack_11c;
        uStack_c8 = uStack_118;
        uStack_c4 = uStack_114;
      }
      else {
        iVar1 = *(int *)(*(int *)(piVar10[1] + 0xf0) + 0x10);
        (**(code **)(iVar1 + 0xa4))
                  (puStack_b8,*(int *)(piVar10[1] + 0xf0) + (int)*(short *)(iVar1 + 0xa0));
        uStack_d0 = uStack_120;
        uStack_cc = uStack_11c;
        uStack_c8 = uStack_118;
        uStack_c4 = uStack_114;
        FUN_001357b8(puStack_b8,*(undefined4 *)(piVar10[1] + 0xf0));
      }
      uStack_160 = uStack_120;
      uStack_15c = uStack_11c;
      uStack_158 = uStack_118;
      uStack_154 = uStack_114;
      auStack_f0._0_4_ = uStack_120;
      auStack_f0._4_4_ = uStack_11c;
      auStack_f0._8_4_ = uStack_118;
      auStack_f0._12_4_ = uStack_114;
      if (*(char *)(piVar10[1] + 0x107) != '\0') {
        iVar1 = *(int *)(piVar10[1] + 0xf0);
        auStack_f0._0_4_ = *(undefined4 *)(iVar1 + 0x100);
        auStack_f0._4_4_ = *(undefined4 *)(iVar1 + 0x104);
        auStack_f0._8_4_ = *(undefined4 *)(iVar1 + 0x108);
        auStack_f0._12_4_ = *(undefined4 *)(iVar1 + 0x10c);
      }
      FUN_0015b360(param_1,auStack_100);
      auVar15 = _qmtc2(iVar12);
      auVar14 = _lqc2(auStack_100);
      auVar16 = _lqc2(auStack_f0);
      auVar14 = _vmulbc(auVar14,auVar15);
      auVar14 = _vadd(auVar16,auVar14);
      auStack_e0 = _sqc2(auVar14);
      if (bVar2) {
        uVar13 = DAT_003f4fc4;
        if (*(int *)(piVar10[2] + 100) == 6) {
          uVar13 = DAT_003f4fc8;
        }
        lVar6 = FUN_00155f38(DAT_0040f520);
        if (lVar6 != 0) {
          FUN_0014b880(uStack_1ac);
        }
        FUN_0015d370(iVar12,uVar13,DAT_0040f4e0,param_1);
        piVar9 = (int *)piVar10[3];
      }
      else {
        auVar14 = _qmfc2(auVar16._0_4_);
        lVar6 = FUN_00137e88(0x3f000000,DAT_0040f4d0 + 0x30,auVar14._0_8_);
        if (lVar6 != 0) {
          bVar4 = true;
          auVar14 = _lqc2(auStack_100);
          auVar14 = _vsub(in_vf0,auVar14);
          iStack_1ec = DAT_0040f4d0 + 0x30;
          auStack_200 = _sqc2(auVar14);
          uStack_1e3 = 1;
          uStack_1e0 = *(undefined4 *)(DAT_0040f4d0 + 0x3c0);
          uStack_210 = auStack_f0._0_4_;
          uStack_20c = auStack_f0._4_4_;
          uStack_208 = auStack_f0._8_4_;
          uStack_204 = auStack_f0._12_4_;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1e4 = 0;
        }
        if (acStack_10f[0] == '\0') {
          piVar9 = (int *)piVar10[3];
        }
        else {
          do {
            acStack_10f[0] = '\0';
            if (*piVar10 == 4) {
              lVar6 = 1;
              if (!bVar4) {
                lVar6 = FUN_0015aa60(iVar12,param_1);
              }
            }
            else {
              lVar6 = 1;
              if (!bVar4) {
                lVar6 = FUN_0012ae58(DAT_0040f4d0);
              }
              if (((lVar6 != 0) && ((uStack_1e8 & 0x10000000) != 0)) && (!bVar4)) {
                lVar7 = FUN_0012d218(0x3dcccccd,DAT_0040f4d0);
                if (lVar7 == 0) {
                  auVar14 = _qmtc2(0x3c23d70a);
                  auVar15 = _lqc2(auStack_100);
                  auVar15 = _vmulbc(auVar15,auVar14);
                  auVar14._4_4_ = uStack_20c;
                  auVar14._0_4_ = uStack_210;
                  auVar14._8_4_ = uStack_208;
                  auVar14._12_4_ = uStack_204;
                  auVar14 = _lqc2(auVar14);
                  auVar14 = _vadd(auVar14,auVar15);
                  auStack_f0 = _sqc2(auVar14);
                  auVar14 = _qmfc2(auVar14._0_4_);
                  lVar6 = FUN_0012ae58(DAT_0040f4d0,auVar14._0_8_);
                  acStack_10f[0] = '\0';
                }
                else {
                  acStack_10f[0] = '\0';
                }
              }
            }
            if (lVar6 == 0) {
              auVar14 = _lqc2(auStack_e0);
              auVar15 = _vaddbc(in_vf0,in_vf0);
              auVar14 = _vmul(auVar14,auVar14);
              _vaddabc(auVar14,auVar14);
              auVar14 = _vmaddbc(auVar15,auVar14);
              auVar14 = _qmfc2(auVar14._0_4_);
              if (auVar14._0_4_ < 2500.0) {
                FUN_001bd8d0(DAT_0040f4d8 + 0x4eed0);
              }
              else {
                auVar15 = _qmtc2(0x42480000);
                auVar14 = _lqc2(auStack_100);
                auVar14 = _vmulbc(auVar14,auVar15);
                auVar15 = _qmtc2(auStack_f0._0_4_);
                uStack_d0 = auStack_f0._0_4_;
                uStack_cc = auStack_f0._4_4_;
                uStack_c8 = auStack_f0._8_4_;
                uStack_c4 = auStack_f0._12_4_;
                auVar16 = _vadd(auVar15,auVar14);
                auVar15 = _qmfc2(auVar16._0_4_);
                auVar14 = _por(in_zero_qw,auStack_f0);
                auStack_e0 = _sqc2(auVar16);
                FUN_001bd8d0(DAT_0040f4d8 + 0x4eed0,auVar14._0_8_,auVar15._0_8_,0);
              }
              FUN_0015b028(param_1);
            }
            else {
              lVar6 = FUN_00159ae8(iVar12,param_1,&uStack_210,auStack_f0,auStack_e0,auStack_100,
                                   &uStack_110,acStack_10f,0);
              if (lVar6 == 0) {
                return;
              }
            }
          } while (acStack_10f[0] != '\0');
          piVar9 = (int *)piVar10[3];
        }
      }
      iVar11 = (iVar11 + 1) * 0x1000000 >> 0x18;
    } while (iVar11 < *piVar9);
  }
  return;
}


// ==== FUN_00159938 @ 00159938 ====
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4e0 undefined4

void FUN_00159938(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 4);
  if ('\0' < *(char *)(iVar2 + 0x100)) {
    auVar3 = _por(in_zero_qw,*(undefined1 (*) [16])(iVar2 + 0x40));
    FUN_0016e0c0(DAT_0040f4d4,*(undefined4 *)*(undefined1 (*) [16])(iVar2 + 0x40),auVar3._0_8_,
                 *(undefined4 *)(iVar2 + 0xf0));
    iVar2 = *(int *)(iVar4 + 4);
    if (*(char *)(iVar2 + 0x100) < '\x01') {
      iVar2 = *(int *)(iVar4 + 4);
    }
    else {
      auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xc0));
      auVar5 = _vsub(auVar3,auVar5);
      auVar3 = _vmul(auVar5,auVar5);
      _vaddabc(auVar3,auVar3);
      auVar3 = _vmaddbc(auVar6,auVar3);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar3);
      uVar7 = _vwaitq();
      auVar3 = _vmulq(auVar5,uVar7);
      auVar3 = _qmfc2(auVar3._0_4_);
      cVar1 = FUN_0015b118(*(undefined4 *)(iVar2 + 0xd0),param_1,iVar2 + 0x40,auVar3._0_8_,0,1,1,0);
      if (cVar1 != '\x01') {
        return;
      }
      iVar2 = *(int *)(iVar4 + 4);
    }
  }
  if ('\x01' < *(char *)(iVar2 + 0x100)) {
    FUN_001bd8d0(DAT_0040f4d8 + 0x4eed0,*(undefined4 *)(iVar2 + 0x40));
    iVar2 = *(int *)(iVar4 + 4);
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
    auVar5 = _vsub(auVar3,auVar5);
    auVar3 = _vmul(auVar5,auVar5);
    _vaddabc(auVar3,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar3);
    uVar7 = _vwaitq();
    auVar3 = _vmulq(auVar5,uVar7);
    auVar3 = _qmfc2(auVar3._0_4_);
    cVar1 = FUN_0015b118(*(undefined4 *)(iVar2 + 0xd4),param_1,iVar2 + 0x80,auVar3._0_8_,1,1,1,0);
    if (cVar1 != '\x01') {
      return;
    }
  }
  FUN_001d6f90(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  uVar7 = FUN_0015d210(DAT_0040f4e0,**(undefined1 **)(iVar4 + 4));
  FUN_001bd508(DAT_0040f4d8 + 0x4ee00,uVar7);
  return;
}


// ==== FUN_00159ae8 @ 00159ae8 ====
// GLOBAL DAT_003f4fc0 float
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_00414d70 uint
// GLOBAL DAT_00414d74 int
// GLOBAL DAT_0040f4d4 undefined4

undefined8
FUN_00159ae8(float param_1,int *param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
            undefined1 (*param_5) [16],undefined1 (*param_6) [16],char *param_7,char *param_8,
            long param_9,byte param_10,char param_11,char param_12)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [4];
  undefined1 (*pauStack_cc) [16];
  char *pcStack_c8;
  uint uStack_c4;
  int iStack_c0;
  
  bVar2 = false;
  uStack_c4 = (uint)param_10;
  param_1 = param_1 - param_1 * *(float *)param_3[2];
  iStack_c0 = (int)param_12;
  pauStack_cc = param_5;
  pcStack_c8 = param_8;
  if (param_11 == '\0') {
    fVar11 = *(float *)(param_2[3] + 0x14) - param_1;
    if (param_9 == 0) {
      if (fVar11 * fVar11 <= (float)param_2[7]) {
        FUN_00135ac0(*(undefined4 *)(param_2[1] + 0xf0));
        return 0;
      }
      FUN_0015b028();
    }
    if (DAT_003f4fc0 < fVar11) {
      if ((param_9 != 0) || (**(long **)(param_2[1] + 0xe8) != 0x54461524b8230000)) {
        FUN_0015d310(fVar11,param_1,DAT_0040f4e0);
        return 1;
      }
      goto LAB_00159c24;
    }
    iVar10 = param_2[1];
  }
  else {
LAB_00159c24:
    iVar10 = param_2[1];
  }
  iVar7 = DAT_0040f4d8;
  bVar3 = false;
  if (**(long **)(iVar10 + 0xe8) == 0x54461524b8230000) {
    bVar3 = *(int *)(*(int *)(iVar10 + 0xf0) + 0x3a4) == 0;
  }
  if (param_9 == 0) {
    if (!bVar3) {
      iVar1 = *(int *)(*(int *)(iVar10 + 0xf0) + 0x10);
      (**(code **)(iVar1 + 0xa4))
                (auStack_110,*(int *)(iVar10 + 0xf0) + (int)*(short *)(iVar1 + 0xa0));
      FUN_001bd8d0(iVar7 + 0x4eed0);
      goto LAB_00159d64;
    }
    auVar15 = _lqc2(*param_3);
    auVar16 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _lqc2(*param_4);
    auVar14 = _vsub(auVar12,auVar15);
    auVar13 = _vmul(auVar14,auVar14);
    auVar12 = _qmfc2(auVar15._0_4_);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar16,auVar13);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar13);
    uVar17 = _vwaitq();
    auVar13 = _vmulq(auVar14,uVar17);
    auVar13 = _qmfc2(auVar13._0_4_);
    FUN_001b1728(auVar12._0_8_,auVar13._0_8_,auStack_110);
    FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_110,0x6e2850db4102d514,1);
    iVar10 = *param_2;
  }
  else if (*param_7 < '\x01') {
LAB_00159d64:
    iVar10 = *param_2;
  }
  else {
    FUN_001bd8d0(DAT_0040f4d8 + 0x4eed0);
    iVar10 = *param_2;
  }
  bVar4 = false;
  if (iVar10 == 4) {
LAB_00159de0:
    bVar4 = true;
  }
  else if (*(int *)(param_3[2] + 4) == 0) {
    bVar4 = (ushort)(byte)param_3[2][8] != *(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x40);
  }
  else {
    iVar10 = *(int *)(*(int *)(param_3[2] + 4) + 0xc4);
    if (iVar10 == 1) {
      bVar2 = param_3[2][0xc] == -1;
    }
    if (iVar10 == 3) {
      bVar4 = true;
    }
    else if (iVar10 == 4) {
      bVar4 = true;
    }
    else if (bVar2) goto LAB_00159de0;
  }
  if (bVar4) {
    DAT_00414d70 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
    DAT_00414d74 = DAT_00414d74 + DAT_00414d70;
    iVar10 = param_2[3];
    if (*(float *)(iVar10 + 0x10) <= (float)DAT_00414d70 * 2.3283064e-10) {
      if (!bVar2) {
        iVar10 = *param_2;
        goto LAB_00159f70;
      }
      auVar12 = _lqc2(*param_6);
    }
    else {
      auVar12 = _lqc2(*param_6);
    }
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _lqc2(param_3[1]);
    auVar12 = _vmul(auVar12,auVar13);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar14,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    if (*(float *)(iVar10 + 0xc) < ABS(auVar12._0_4_)) {
      iVar10 = *param_2;
      goto LAB_00159f70;
    }
    if ((long)*param_7 < (long)*(int *)(iVar10 + 4)) {
      *pcStack_c8 = '\x01';
    }
    FUN_001de078(auStack_d0);
    uVar17 = *(undefined4 *)(*param_3 + 4);
    uVar5 = *(undefined4 *)(*param_3 + 8);
    uVar6 = *(undefined4 *)(*param_3 + 0xc);
    auVar13 = _qmtc2(auVar12._0_4_);
    auVar14 = _qmtc2(0x40000000);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    *(undefined4 *)*param_4 = *(undefined4 *)*param_3;
    *(undefined4 *)(*param_4 + 4) = uVar17;
    *(undefined4 *)(*param_4 + 8) = uVar5;
    *(undefined4 *)(*param_4 + 0xc) = uVar6;
    auVar16 = _qmtc2(param_1);
    auVar12 = _lqc2(param_3[1]);
    auVar12 = _vmulbc(auVar12,auVar13);
    auVar13 = _lqc2(*param_6);
    auVar12 = _vmulbc(auVar12,auVar14);
    auVar13 = _vsub(auVar13,auVar12);
    auVar14 = _vmul(auVar13,auVar13);
    auVar12 = _sqc2(auVar13);
    *param_6 = auVar12;
    _vaddabc(auVar14,auVar14);
    auVar12 = _vmaddbc(auVar15,auVar14);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar12);
    uVar17 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar17);
    auVar12 = _sqc2(auVar13);
    *param_6 = auVar12;
    auVar13 = _vmulbc(auVar13,auVar16);
    auVar12 = _lqc2(*param_4);
    auVar12 = _vadd(auVar12,auVar13);
    auVar12 = _sqc2(auVar12);
    *pauStack_cc = auVar12;
    *param_7 = *param_7 + '\x01';
  }
  iVar10 = *param_2;
LAB_00159f70:
  if ((iVar10 == 5) && (*pcStack_c8 == '\0')) {
    FUN_001b1728();
    FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_110,0x7e048c46ed92b423,1);
  }
  cVar8 = FUN_0015b118(param_1);
  uVar9 = 0;
  if (cVar8 == '\x01') {
    if (uStack_c4 == 0) {
      if ((param_9 != 0) || (bVar3)) {
        FUN_0016e0c0(DAT_0040f4d4);
      }
      uVar9 = 1;
      if (param_9 == 0) {
        FUN_00135ac0(*(undefined4 *)(param_2[1] + 0xf0));
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 1;
    }
  }
  return uVar9;
}


// ==== FUN_0015a098 @ 0015a098 ====
// GLOBAL DAT_00414d70 uint
// GLOBAL DAT_00414d74 int
// GLOBAL DAT_0040f520 undefined4
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4dc int_*

void FUN_0015a098(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vf5 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [16];
  
  auVar5 = _qmtc2(0);
  _vmove(in_vf5);
  auVar5 = _vaddbc(in_vf0,auVar5);
  uVar2 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
  _vmove(auVar5);
  uVar3 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_00414d74 + uVar2;
  iVar4 = DAT_00414d74 + uVar2 + uVar3;
  auVar5 = _qmtc2((float)uVar2 * 2.3283064e-10 - 0.5);
  auVar5 = _vaddbc(in_vf0,auVar5);
  _vmove(auVar5);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _qmtc2((float)uVar3 * 2.3283064e-10 - 0.5);
  DAT_00414d70 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10) + iVar4;
  auVar8 = _vaddbc(in_vf0,auVar5);
  DAT_00414d74 = iVar4 + DAT_00414d70;
  auVar5 = _vmul(auVar8,auVar8);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar6 = _vmove(auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar5);
  uVar10 = _vwaitq();
  auVar5 = _vmulq(auVar6,uVar10);
  auVar6 = _qmtc2(0x3f800000);
  auVar8 = _vmove(auVar5);
  auVar7 = _qmtc2(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18));
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0xf0);
  auVar5 = _qmtc2(*(float *)(*(int *)(param_1 + 0xc) + 8) * (float)DAT_00414d70 * 2.3283064e-10);
  _vmulbc(auVar8,auVar5);
  auVar9 = _vaddbc(in_vf0,auVar6);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xf0));
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xe0));
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xd0));
  _vmulabc(auVar6,auVar9);
  _vmaddabc(auVar5,auVar9);
  auVar5 = _vmaddbc(auVar8,auVar9);
  auVar5 = _vmulbc(auVar5,auVar7);
  auStack_40 = _sqc2(auVar5);
  if (*(int *)(iVar4 + 0xc4) == 2) {
    (**(code **)(*(int *)(iVar4 + 0x10) + 0xa4))
              (auStack_80,iVar4 + *(short *)(*(int *)(iVar4 + 0x10) + 0xa0));
    FUN_00155830(DAT_0040f520,auStack_80,auStack_40._0_8_,3);
    iVar4 = *(int *)(param_1 + 4);
  }
  else if (*(int *)(iVar4 + 0x3a4) == 0) {
    (**(code **)(*(int *)(iVar4 + 0x10) + 0xa4))
              (auStack_80,iVar4 + *(short *)(*(int *)(iVar4 + 0x10) + 0xa0));
    FUN_00155830(DAT_0040f520,auStack_80,auStack_40._0_8_,1);
    iVar4 = *(int *)(param_1 + 4);
  }
  else {
    (**(code **)(*(int *)(iVar4 + 0x10) + 0xa4))
              (auStack_80,iVar4 + *(short *)(*(int *)(iVar4 + 0x10) + 0xa0));
    FUN_00155830(DAT_0040f520,auStack_80,auStack_40._0_8_,0);
    iVar4 = *(int *)(param_1 + 4);
  }
  if (*(int *)(*(int *)(iVar4 + 0xf0) + 0xc4) == 2) {
    FUN_001d6f90(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
    piVar1 = DAT_0040f4dc;
    *(int *)(*DAT_0040f4dc + 0x48) = *(int *)(*DAT_0040f4dc + 0x48) + 1;
    if (9999999 < *(uint *)(*piVar1 + 0x48)) {
      *(undefined4 *)(*piVar1 + 0x48) = 9999999;
    }
  }
  return;
}


// ==== FUN_0015a400 @ 0015a400 ====
// GLOBAL DAT_00414d70 uint
// GLOBAL DAT_00414d74 int
// GLOBAL DAT_0040f520 undefined4
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4dc int_*

void FUN_0015a400(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_vf6 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0xf0);
  iVar1 = *(int *)(iVar5 + 0x10);
  auStack_30 = _sqc2(in_vf6);
  (**(code **)(iVar1 + 0xa4))(auStack_70,iVar5 + *(short *)(iVar1 + 0xa0));
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _lqc2(auStack_40);
  auVar6 = _qmtc2(0);
  auVar10 = _lqc2(auStack_60);
  auVar12 = _vmove(auVar9);
  _sqc2(auVar10);
  auStack_80 = _sqc2(auVar7);
  _lqc2(auStack_30);
  auVar11 = _vaddbc(in_vf0,auVar6);
  auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 4) + 0x10));
  auVar7 = _vsub(auVar6,auVar7);
  auVar6 = _vmul(auVar7,auVar7);
  auVar8 = _vmove(auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar9,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar13 = _vwaitq();
  auVar8 = _vmulq(auVar8,uVar13);
  _vopmula(auVar8,auVar10);
  auVar10 = _vopmsub(auVar10,auVar8);
  auVar6 = _vmul(auVar10,auVar10);
  uVar3 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar9,auVar6);
  _sqc2(auVar7);
  auVar7 = _vmove(auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar13 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar13);
  _sqc2(auVar10);
  _vopmula(auVar7,auVar8);
  auVar6 = _vopmsub(auVar8,auVar7);
  auStack_a0 = _sqc2(auVar6);
  auStack_90 = _sqc2(auVar8);
  auStack_b0 = _sqc2(auVar7);
  _vmove(auVar11);
  uVar4 = uVar3 * 0x10000 + ((int)uVar3 >> 0x10) + DAT_00414d74 + uVar3;
  iVar5 = DAT_00414d74 + uVar3 + uVar4;
  auVar6 = _qmtc2((float)uVar3 * 2.3283064e-10 - 0.5);
  auVar6 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar6);
  auVar6 = _qmtc2((float)uVar4 * 2.3283064e-10 - 0.5);
  DAT_00414d70 = uVar4 * 0x10000 + ((int)uVar4 >> 0x10) + iVar5;
  auVar7 = _vaddbc(in_vf0,auVar6);
  DAT_00414d74 = iVar5 + DAT_00414d70;
  auVar6 = _vmul(auVar7,auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar12,auVar6);
  auVar7 = _vmove(auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar13 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar13);
  auVar9 = _qmtc2(0x3f800000);
  auVar6 = _vadd(in_vf0,in_vf0);
  auVar7 = _vmove(auVar7);
  _sqc2(auVar6);
  auStack_70 = _sqc2(auVar6);
  auVar6 = _qmtc2(*(float *)(*(int *)(param_1 + 0xc) + 8) * (float)DAT_00414d70 * 2.3283064e-10);
  auVar8 = _lqc2(auStack_b0);
  iVar5 = *(int *)(param_1 + 4);
  _vmulbc(auVar7,auVar6);
  auVar10 = _vaddbc(in_vf0,auVar9);
  auVar7 = _lqc2(auStack_a0);
  auVar9 = _qmtc2(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18));
  auVar6 = _lqc2(auStack_90);
  _vmulabc(auVar8,auVar10);
  _vmaddabc(auVar7,auVar10);
  auVar6 = _vmaddbc(auVar6,auVar10);
  auVar6 = _vmulbc(auVar6,auVar9);
  uVar13 = auVar6._0_4_;
  if (*(int *)(*(int *)(iVar5 + 0xf0) + 0xc4) == 2) {
    auVar6 = _qmfc2(uVar13);
    FUN_00155b08(DAT_0040f520,auStack_b0,auVar6._0_8_,
                 *(undefined8 *)(*(int *)(*(int *)(iVar5 + 0xe8) + 0x10) + 8),3);
    FUN_001d6f90(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
    piVar2 = DAT_0040f4dc;
    *(int *)(*DAT_0040f4dc + 0x48) = *(int *)(*DAT_0040f4dc + 0x48) + 1;
    if (9999999 < *(uint *)(*piVar2 + 0x48)) {
      *(undefined4 *)(*piVar2 + 0x48) = 9999999;
    }
  }
  else if (*(int *)(*(int *)(iVar5 + 0xf0) + 0x3a4) == 0) {
    auVar6 = _qmfc2(uVar13);
    FUN_00155b08(DAT_0040f520,auStack_b0,auVar6._0_8_,
                 *(undefined8 *)(*(int *)(*(int *)(iVar5 + 0xe8) + 0x10) + 8),1);
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_001e1be0(0,*(int *)(param_1 + 0x10),
                   *(undefined8 *)(*(int *)(*(int *)(param_1 + 4) + 0xf0) + 0xa0));
    }
  }
  else {
    auVar6 = _qmfc2(uVar13);
    FUN_00155b08(DAT_0040f520,auStack_b0,auVar6._0_8_,
                 *(undefined8 *)(*(int *)(*(int *)(iVar5 + 0xe8) + 0x10) + 8),0);
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_001e1be0(0,*(int *)(param_1 + 0x10),
                   *(undefined8 *)(*(int *)(*(int *)(param_1 + 4) + 0xf0) + 0xa0));
    }
  }
  return;
}


// ==== FUN_0015a830 @ 0015a830 ====

void FUN_0015a830(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xf0) + 0xc4) == 2) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 100);
    FUN_001551c8(*(undefined4 *)(*(int *)(param_1 + 4) + 0xfc),uVar1,*(undefined2 *)(param_1 + 0x18)
                );
    uVar2 = FUN_00155140(*(undefined4 *)(*(int *)(param_1 + 4) + 0xfc),uVar1,
                         *(undefined1 *)(*(int *)(param_1 + 8) + 0x60));
    *(undefined2 *)(param_1 + 0x18) = uVar2;
  }
  else {
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x60);
  }
  if (*(char *)(param_1 + 0x20) == '\x02') {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
  }
  return;
}


// ==== FUN_0015a8d0 @ 0015a8d0 ====

undefined4 FUN_0015a8d0(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xf0) + 0xc4) == 2) {
    lVar2 = FUN_001550f0(*(undefined4 *)(*(int *)(param_1 + 4) + 0xfc),
                         *(undefined4 *)(*(int *)(param_1 + 8) + 100));
    uVar1 = 1;
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
    }
  }
  return uVar1;
}


// ==== FUN_0015a938 @ 0015a938 ====

bool FUN_0015a938(int param_1)

{
  return *(short *)(param_1 + 0x18) < 1;
}


// ==== FUN_0015a948 @ 0015a948 ====

undefined4 FUN_0015a948(int param_1)

{
  if ((*(char *)(param_1 + 0x20) != '\x02') && (*(float *)(*(int *)(param_1 + 0xc) + 0x20) < 0.15))
  {
    return 0;
  }
  return 1;
}


// ==== FUN_0015a990 @ 0015a990 ====
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f510 int

undefined4 FUN_0015a990(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 auStack_30 [16];
  
  iVar5 = (int)param_1;
  if (*(char *)(*(int *)(*(int *)(iVar5 + 4) + 0xec) + 0xc4) == '\0') {
    auStack_30[0] = 3;
    FUN_001f2ca8(DAT_0040f51c,auStack_30);
    uVar2 = 0;
  }
  else {
    iVar1 = (*(char *)(iVar5 + 0x20) + 1) % 3;
    *(char *)(iVar5 + 0x20) = (char)iVar1;
    if (iVar1 == 2) {
      *(undefined4 *)(iVar5 + 0x14) = 1;
    }
    lVar3 = FUN_0015a948(param_1);
    uVar4 = 0;
    if ((lVar3 == 1) && (uVar4 = 1, *(char *)(*(int *)(iVar5 + 4) + 0x108) != '\0')) {
      uVar4 = 0;
    }
    *(undefined1 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc) + 0x1c44) = uVar4;
    FUN_001f2ca8(DAT_0040f51c,iVar5 + 0x20);
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_0015aa60 @ 0015aa60 ====
// GLOBAL DAT_0040f4d0 int

long FUN_0015aa60(float param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 uint param_5,undefined8 param_6,undefined4 param_7,int param_8,
                 undefined1 (*param_9) [16],char param_10)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar6;
  long lVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined1 auStack_210 [16];
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  int iStack_1ec;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1a0;
  int iStack_19c;
  float fStack_198;
  float fStack_194;
  undefined1 auStack_190 [16];
  char cStack_180;
  undefined1 aauStack_170 [5] [16];
  float fStack_120;
  int iStack_110;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  
  auVar11 = _qmtc2(param_3);
  uStack_200 = (undefined4)param_4;
  uStack_1fc = (undefined4)((ulong)param_4 >> 0x20);
  auVar8 = _qmtc2(uStack_200);
  auVar9 = _vsub(auVar8,auVar11);
  auVar10 = _vmul(auVar9,auVar9);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar8,auVar10);
  lVar7 = 0;
  iStack_1ec = (int)param_6;
  _sqc2(auVar9);
  uStack_1e8 = *(int *)(iStack_1ec + 0xc4) == 2;
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar10);
  uVar12 = _vwaitq();
  auVar9 = _vmulq(auVar9,uVar12);
  iStack_dc = (int)param_10;
  auStack_c0 = _sqc2(auVar8);
  auStack_190 = _sqc2(auVar9);
  *(undefined4 *)param_9[2] = 0x40000000;
  auStack_210 = _sqc2(auVar11);
  uStack_1e7 = 0;
  uStack_1c0 = 0x40000000;
  uStack_1bc = 0;
  cStack_180 = param_10;
  *(undefined4 *)(param_9[2] + 4) = 0;
  uStack_1f8 = in_a2_udw;
  uStack_1f4 = in_register_0000006c;
  uStack_1f0 = param_5;
  uStack_1a0 = param_7;
  iStack_19c = param_8;
  fStack_198 = param_1;
  fStack_194 = param_1;
  iStack_e0 = param_8;
  uStack_d0 = uStack_200;
  uStack_cc = uStack_1fc;
  if ((param_5 & 1) != 0) {
    iVar6 = 0;
    iVar4 = 0;
    uStack_c8 = in_a2_udw;
    uStack_c4 = in_register_0000006c;
    do {
      iVar6 = iVar6 + 1;
      iVar4 = DAT_0040f4d0 + (iVar4 >> 0x18) * 0x880 + 0x4990;
      if (*(char *)(iVar4 + 0x38) != '\0') {
        iVar2 = 1;
        do {
          bVar1 = iVar2 != -1;
          iVar2 = iVar2 + -1;
        } while (bVar1);
        uVar12 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 8);
        lVar3 = FUN_0027d1d8(uVar12,auStack_210,aauStack_170);
        if (lVar3 == 1) {
          uVar5 = *(uint *)(iStack_110 + 4);
          lVar3 = 1;
          if ((uVar5 & 0x10000000) != 0) {
            auVar8 = _qmtc2(0x3c23d70a);
            auVar9 = _lqc2(auStack_190);
            auVar9 = _vmulbc(auVar9,auVar8);
            auVar8 = _lqc2(aauStack_170[0]);
            auVar8 = _vadd(auVar8,auVar9);
            uStack_f0 = uStack_d0;
            uStack_ec = uStack_cc;
            uStack_e8 = uStack_c8;
            uStack_e4 = uStack_c4;
            auStack_100 = _sqc2(auVar8);
            lVar3 = FUN_0027d1d8(uVar12,auStack_100,aauStack_170);
            uVar5 = *(uint *)(iStack_110 + 4);
          }
          if ((lVar3 == 1) && (fStack_120 < *(float *)param_9[2])) {
            lVar7 = 1;
            *(int *)*param_9 = aauStack_170[0]._0_4_;
            *(int *)(*param_9 + 4) = aauStack_170[0]._4_4_;
            *(int *)(*param_9 + 8) = aauStack_170[0]._8_4_;
            *(int *)(*param_9 + 0xc) = aauStack_170[0]._12_4_;
            *(int *)param_9[1] = aauStack_170[1]._0_4_;
            *(int *)(param_9[1] + 4) = aauStack_170[1]._4_4_;
            *(int *)(param_9[1] + 8) = aauStack_170[1]._8_4_;
            *(int *)(param_9[1] + 0xc) = aauStack_170[1]._12_4_;
            *(float *)param_9[2] = fStack_120;
            *(uint *)(param_9[2] + 8) = uVar5;
          }
        }
      }
      iVar4 = iVar6 * 0x1000000;
    } while (iVar6 < 2);
  }
  auVar8 = _lqc2(auStack_210);
  if (lVar7 != 0) {
    auVar10 = _lqc2(*param_9);
    auVar9 = _qmfc2(auVar10._0_4_);
    auVar8 = _vsub(auVar10,auVar8);
    auVar8 = _vmul(auVar8,auVar8);
    auVar10 = _lqc2(auStack_c0);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (auVar8._0_4_ < 2.3283064e-10) {
      return lVar7;
    }
    uStack_200 = auVar9._0_4_;
    uStack_1fc = auVar9._4_4_;
    uStack_1f8 = auVar9._8_4_;
    uStack_1f4 = auVar9._12_4_;
    fStack_194 = param_1 * *(float *)param_9[2];
  }
  if ((param_5 & 0x6e) != 0) {
    FUN_0015b8f0(0x414ad0);
    FUN_00273708(DAT_0040f4d0 + 0x4920,auStack_210,0x15ada8,auStack_210);
    FUN_0015ba80(0x414ad0,auStack_190._0_8_,**(undefined1 **)(iStack_e0 + 4),param_6,iStack_dc);
  }
  if ((param_5 & 0x10) != 0) {
    FUN_00273708(DAT_0040f4d0 + 0x4920,auStack_210,0x12ae00,auStack_210);
  }
  return lVar7;
}


// ==== FUN_0015ada8 @ 0015ada8 ====

undefined4 FUN_0015ada8(int param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iStack_5c = *(int *)(param_1 + 0x34);
  if (iStack_5c == 0) {
    return 1;
  }
  iVar4 = *(int *)(iStack_5c + 0xc4);
  if (iStack_5c == *(int *)((int)param_3 + 0x24)) {
    return 1;
  }
  if ((iVar4 - 3U < 2) || (bVar2 = false, iVar4 == 7)) {
    bVar2 = true;
  }
  if (bVar2) {
    if ((*(uint *)(param_3 + 4) & 2) == 0) {
      if ((*(uint *)(param_3 + 4) & 0x20) == 0) {
        return 1;
      }
      if (*(int *)(iStack_5c + 0xb4) == 0) {
        iVar4 = *(int *)(iStack_5c + 0x10);
      }
      else if (*(char *)(iStack_5c + 0x13b) == '\0') {
        uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iStack_5c + 0xb4) + 0x34) + 0xc) +
                                  0x58) + 0x8c);
        if (((int)uVar1 >> 1 & 1U) == 0) {
          if ((uVar1 & 1) == 0) {
            return 1;
          }
          iVar4 = *(int *)(iStack_5c + 0x10);
        }
        else {
          iVar4 = *(int *)(iStack_5c + 0x10);
        }
      }
      else {
        iVar4 = *(int *)(iStack_5c + 0x10);
      }
    }
    else {
      iVar4 = *(int *)(iStack_5c + 0x10);
    }
    lVar3 = (**(code **)(iVar4 + 0xac))
                      (iStack_5c + *(short *)(iVar4 + 0xa8),*param_3,param_3[2],
                       *(undefined4 *)(param_3 + 4),1,auStack_80);
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        return 1;
      }
      if ((*(uint *)(param_3 + 4) & 8) == 0) {
        return 1;
      }
      lVar3 = FUN_00135138(iStack_5c,*param_3,param_3[2],1,auStack_80,1);
      if (lVar3 == 0) {
        return 1;
      }
      FUN_0015b118(*(float *)(param_3 + 0xf) - *(float *)((int)param_3 + 0x7c) * fStack_60,
                   *(undefined4 *)((int)param_3 + 0x74),auStack_80,param_3[0x10],0,
                   *(undefined1 *)(param_3 + 5),0,*(undefined1 *)(param_3 + 0x12));
      if (*(float *)(param_3 + 10) <= fStack_60) {
        return 1;
      }
      *(undefined1 *)((int)param_3 + 0x29) = 1;
      *(int *)(param_3 + 6) = auStack_80._0_4_;
      *(int *)((int)param_3 + 0x34) = auStack_80._4_4_;
      *(undefined4 *)(param_3 + 7) = uStack_78;
      *(undefined4 *)((int)param_3 + 0x3c) = uStack_74;
      *(int *)(param_3 + 8) = (int)uStack_70;
      *(int *)((int)param_3 + 0x44) = (int)((ulong)uStack_70 >> 0x20);
      *(undefined4 *)(param_3 + 9) = uStack_68;
      *(undefined4 *)((int)param_3 + 0x4c) = uStack_64;
      *(float *)(param_3 + 10) = fStack_60;
      *(int *)((int)param_3 + 0x54) = iStack_5c;
      *(undefined4 *)(param_3 + 0xb) = uStack_58;
      *(undefined4 *)((int)param_3 + 0x5c) = uStack_54;
      *(int *)(param_3 + 0xc) = (int)uStack_50;
      *(int *)((int)param_3 + 100) = (int)((ulong)uStack_50 >> 0x20);
      *(undefined4 *)(param_3 + 0xd) = uStack_48;
      *(undefined4 *)((int)param_3 + 0x6c) = uStack_44;
      return 1;
    }
    if (((*(uint *)(param_3 + 4) & 4) == 0) || (*(int *)(iStack_5c + 0x38c) != 0)) {
      if ((*(uint *)(param_3 + 4) & 0x40) == 0) {
        return 1;
      }
      if (*(int *)(iStack_5c + 0x38c) != 1) {
        return 1;
      }
    }
    lVar3 = FUN_00135138(iStack_5c,*param_3,param_3[2],1,auStack_80,1);
  }
  if ((lVar3 != 0) &&
     (FUN_0015b118(*(float *)(param_3 + 0xf) - *(float *)((int)param_3 + 0x7c) * fStack_60,
                   *(undefined4 *)((int)param_3 + 0x74),auStack_80,param_3[0x10],0,
                   *(undefined1 *)(param_3 + 5),0,*(undefined1 *)(param_3 + 0x12)),
     fStack_60 < *(float *)(param_3 + 10))) {
    *(undefined1 *)((int)param_3 + 0x29) = 1;
    *(int *)(param_3 + 6) = auStack_80._0_4_;
    *(int *)((int)param_3 + 0x34) = auStack_80._4_4_;
    *(undefined4 *)(param_3 + 7) = uStack_78;
    *(undefined4 *)((int)param_3 + 0x3c) = uStack_74;
    *(int *)(param_3 + 8) = (int)uStack_70;
    *(int *)((int)param_3 + 0x44) = (int)((ulong)uStack_70 >> 0x20);
    *(undefined4 *)(param_3 + 9) = uStack_68;
    *(undefined4 *)((int)param_3 + 0x4c) = uStack_64;
    *(float *)(param_3 + 10) = fStack_60;
    *(int *)((int)param_3 + 0x54) = iStack_5c;
    *(undefined4 *)(param_3 + 0xb) = uStack_58;
    *(undefined4 *)((int)param_3 + 0x5c) = uStack_54;
    *(int *)(param_3 + 0xc) = (int)uStack_50;
    *(int *)((int)param_3 + 100) = (int)((ulong)uStack_50 >> 0x20);
    *(undefined4 *)(param_3 + 0xd) = uStack_48;
    *(undefined4 *)((int)param_3 + 0x6c) = uStack_44;
  }
  return 1;
}


// ==== FUN_0015b028 @ 0015b028 ====
// GLOBAL DAT_0040f4d8 int

void FUN_0015b028(int param_1)

{
  int iVar1;
  
  if (**(long **)(*(int *)(param_1 + 4) + 0xe8) != 0x54461524b8230000) {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
    else {
      FUN_001e1be0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20),*(int *)(param_1 + 0x10),
                   *(undefined8 *)(*(int *)(*(int *)(param_1 + 4) + 0xf0) + 0xa0));
      iVar1 = *(int *)(param_1 + 4);
    }
    if (*(char *)(iVar1 + 0x108) == '\0') {
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,
                   *(undefined8 *)(*(int *)(*(int *)(iVar1 + 0xe8) + 0x10) + 8),
                   *(undefined4 *)(iVar1 + 0xf0),1,0);
    }
    else {
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,0x973199356ffeb760,*(undefined4 *)(iVar1 + 0xf0),1,0);
    }
  }
  return;
}


// ==== FUN_0015b118 @ 0015b118 ====
// GLOBAL DAT_0040f4d8 undefined4
// GLOBAL DAT_0040f4dc undefined4

undefined4
FUN_0015b118(float param_1,int param_2,undefined8 param_3,char param_4,long param_5,long param_6,
            undefined1 param_7)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  undefined1 in_a2_qw [16];
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  auVar4 = _por(in_zero_qw,in_a2_qw);
  puVar3 = (undefined8 *)param_3;
  iVar2 = *(int *)((int)puVar3 + 0x24);
  if (iVar2 == 0) {
LAB_0015b190:
    iVar2 = *(int *)(param_2 + 4);
  }
  else {
    if (*(int *)(iVar2 + 0xc4) == 1) {
      if (*(int *)(iVar2 + 0x3a4) == 0) {
        iVar2 = *(int *)((int)puVar3 + 0x24);
        goto LAB_0015b1bc;
      }
      goto LAB_0015b190;
    }
    iVar2 = *(int *)(param_2 + 4);
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0xe8) + 0x10);
  FUN_001b2078(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58),DAT_0040f4d8,param_3,
               *(undefined4 *)(iVar2 + 0xf0));
  iVar2 = *(int *)((int)puVar3 + 0x24);
LAB_0015b1bc:
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 0xc4) == 1) || (*(int *)(iVar2 + 0xc4) == 2)) {
      if (param_5 == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 4) + 0xf0);
        if (*(int *)(iVar1 + 0x38c) == 0) {
          if (*(int *)(iVar2 + 0x3a4) == *(int *)(iVar1 + 0x3a4)) {
            return 0;
          }
          iVar2 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar2 = *(int *)(param_2 + 0xc);
        }
      }
      else {
        iVar2 = *(int *)(param_2 + 0xc);
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    fVar5 = (param_1 / *(float *)(iVar2 + 0x14)) * *(float *)(iVar2 + 0x18) *
            (1.0 - *(float *)(iVar2 + 0x1c)) + *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x1c);
    if (param_5 != 0) {
      if ('\0' < param_4) {
        FUN_00121ef0(DAT_0040f4dc,0x10);
      }
      if (25.0 < *(float *)(*(int *)(param_2 + 0xc) + 0x14) - param_1) {
        FUN_00121ef0(DAT_0040f4dc,0x40);
      }
      if (((float)(*(int **)(param_2 + 0xc))[5] - param_1 <= 3.0) && (1 < **(int **)(param_2 + 0xc))
         ) {
        FUN_00121ef0(DAT_0040f4dc,0x200);
      }
    }
    if (param_6 != 0) {
      auVar4 = _por(in_zero_qw,auVar4);
      iVar2 = *(int *)(*(int *)((int)puVar3 + 0x24) + 0x10);
      (**(code **)(iVar2 + 0x4c))
                (fVar5,*(int *)((int)puVar3 + 0x24) + (int)*(short *)(iVar2 + 0x48),*puVar3,
                 auVar4._0_8_,*(undefined1 *)((int)puVar3 + 0x2c),**(undefined1 **)(param_2 + 4),
                 *(undefined4 *)(*(undefined1 **)(param_2 + 4) + 0xf0),param_7);
      return 1;
    }
    FUN_0015b8f8(fVar5,param_1,0x414ad0,*puVar3,*(undefined4 *)((int)puVar3 + 0x24),
                 *(undefined1 *)((int)puVar3 + 0x2c));
  }
  return 1;
}


// ==== FUN_0015b360 @ 0015b360 ====
// GLOBAL DAT_00414d70 uint
// GLOBAL DAT_00414d74 int
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015b360(int param_1,undefined1 (*param_2) [16],undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  
  auVar7 = _qmtc2(param_3);
  if ((param_4 != 0) && (*(char *)(*(int *)(param_1 + 4) + 0x3c) != '\0')) {
    DAT_00414d70 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
    DAT_00414d74 = DAT_00414d74 + DAT_00414d70;
    if ((int)DAT_00414d70 < 0) {
      iVar3 = *(int *)(param_1 + 4);
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
    }
    if ((float)DAT_00414d70 * 2.3283064e-10 < *(float *)(*(int *)(iVar3 + 0xec) + 0xa8)) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x20));
      goto LAB_0015b8b4;
    }
  }
  if (*(float *)(*(int *)(param_1 + 0xc) + 8) <= 0.0) {
    iVar3 = *(int *)(param_1 + 4);
    if (0.0 < *(float *)(*(int *)(param_1 + 0xc) + 0x28)) {
      if (*(float *)(iVar3 + 0xe4) <= 0.0) {
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
        goto LAB_0015b8b4;
      }
      goto LAB_0015b458;
    }
LAB_0015b8b0:
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
LAB_0015b8b4:
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vsub(auVar6,auVar7);
    auVar8 = _vmul(auVar6,auVar6);
    auVar7 = _sqc2(auVar6);
    *param_2 = auVar7;
    _vaddabc(auVar8,auVar8);
    auVar7 = _vmaddbc(auVar9,auVar8);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar7);
    uVar12 = _vwaitq();
    auVar7 = _vmulq(auVar6,uVar12);
    auVar7 = _sqc2(auVar7);
    *param_2 = auVar7;
    return;
  }
LAB_0015b458:
  if (param_4 != 0) {
    DAT_00414d70 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
    DAT_00414d74 = DAT_00414d74 + DAT_00414d70;
    iVar3 = *(int *)(param_1 + 4);
    if ((float)DAT_00414d70 * 2.3283064e-10 < *(float *)(*(int *)(param_1 + 8) + 0x74))
    goto LAB_0015b8b0;
    if (param_4 == 0) {
      iVar3 = *(int *)(param_1 + 4);
      goto LAB_0015b554;
    }
    if (*(float *)(iVar3 + 0xe0) == 0.0) {
      if (**(int **)(param_1 + 0xc) < 2) {
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
        goto LAB_0015b8b4;
      }
      iVar1 = *(int *)(iVar3 + 4);
    }
    else {
      iVar1 = *(int *)(iVar3 + 4);
    }
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 4);
      goto LAB_0015b554;
    }
    if (1 < *(int *)(iVar1 + 0xc4) - 1U) {
      iVar3 = *(int *)(param_1 + 4);
      goto LAB_0015b554;
    }
    if (**(int **)(param_1 + 0xc) < 2) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
      goto LAB_0015b8b4;
    }
  }
  iVar3 = *(int *)(param_1 + 4);
LAB_0015b554:
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
  auVar8 = _vsub(auVar6,auVar7);
  _lqc2(*param_2);
  auVar6 = _lqc2(_DAT_004432c0);
  auVar7 = _vmul(auVar8,auVar8);
  auVar10 = _qmtc2(0);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar11,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  uVar12 = _vwaitq();
  auVar9 = _vmulq(auVar8,uVar12);
  auVar7 = _vaddbc(in_vf0,auVar10);
  auVar7 = _sqc2(auVar7);
  *param_2 = auVar7;
  _vopmula(auVar9,auVar6);
  auVar8 = _vopmsub(auVar6,auVar9);
  _sqc2(auVar8);
  auVar6 = _vmul(auVar8,auVar8);
  auVar7 = _sqc2(auVar9);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar11,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  uVar12 = _vwaitq();
  auVar6 = _vmulq(auVar8,uVar12);
  _vopmula(auVar6,auVar9);
  auVar8 = _vopmsub(auVar9,auVar6);
  auVar6 = _sqc2(auVar6);
  auVar8 = _sqc2(auVar8);
  uVar2 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
  DAT_00414d70 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_00414d74 + uVar2;
  DAT_00414d74 = DAT_00414d74 + uVar2 + DAT_00414d70;
  _lqc2(*param_2);
  auVar9 = _qmtc2((float)uVar2 * 2.3283064e-10 * (float)DAT_00414d70 * 2.3283064e-10 - 0.5);
  auVar9 = _vaddbc(in_vf0,auVar9);
  auVar9 = _sqc2(auVar9);
  *param_2 = auVar9;
  uVar2 = DAT_00414d70 * 0x10000 + ((int)DAT_00414d70 >> 0x10) + DAT_00414d74;
  DAT_00414d70 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_00414d74 + uVar2;
  DAT_00414d74 = DAT_00414d74 + uVar2 + DAT_00414d70;
  _lqc2(*param_2);
  auVar9 = _qmtc2((float)uVar2 * 2.3283064e-10 * (float)DAT_00414d70 * 2.3283064e-10 - 0.5);
  auVar10 = _vaddbc(in_vf0,auVar9);
  auVar9 = _sqc2(auVar10);
  *param_2 = auVar9;
  iVar3 = *(int *)(param_1 + 0xc);
  fVar4 = *(float *)(iVar3 + 0x2c);
  if (0.0 < fVar4) {
    fVar5 = *(float *)(*(int *)(param_1 + 4) + 0xe0);
    if (fVar5 < fVar4) {
      auVar9 = _qmtc2(*(float *)(iVar3 + 8) + (fVar5 / fVar4) * *(float *)(iVar3 + 0x28));
    }
    else {
      auVar9 = _qmtc2(*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0x28));
    }
  }
  else {
    auVar9 = _qmtc2(*(undefined4 *)(iVar3 + 8));
  }
  auVar9 = _vmulbc(auVar10,auVar9);
  auVar9 = _sqc2(auVar9);
  *param_2 = auVar9;
  auVar11 = _qmtc2(0x3f800000);
  auVar10 = _qmtc2(*(undefined4 *)(*(int *)(param_1 + 4) + 0xe4));
  auVar9 = _lqc2(*param_2);
  auVar9 = _vmulbc(auVar9,auVar10);
  auVar10 = _lqc2(auVar6);
  auVar6 = _sqc2(auVar9);
  *param_2 = auVar6;
  _vmove(auVar9);
  auVar7 = _lqc2(auVar7);
  auVar9 = _vaddbc(in_vf0,auVar11);
  auVar6 = _lqc2(auVar8);
  _vmulabc(auVar10,auVar9);
  _vmaddabc(auVar6,auVar9);
  auVar7 = _vmaddbc(auVar7,auVar9);
  auVar7 = _sqc2(auVar7);
  *param_2 = auVar7;
  return;
}


// ==== FUN_0015b8f0 @ 0015b8f0 ====

void FUN_0015b8f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x200) = 0;
  return;
}


// ==== FUN_0015b8f8 @ 0015b8f8 ====

void FUN_0015b8f8(undefined4 param_1,float param_2,int param_3,undefined8 param_4,int param_5,
                 undefined1 param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = (undefined4)((ulong)param_4 >> 0x20);
  if (*(int *)(param_3 + 0x200) < 0x10) {
    puVar5 = (undefined4 *)(*(int *)(param_3 + 0x200) * 0x20 + param_3);
    *puVar5 = (int)param_4;
    puVar5[1] = uVar6;
    puVar5[2] = in_a1_udw;
    puVar5[3] = in_register_0000005c;
    *(int *)(param_3 + *(int *)(param_3 + 0x200) * 0x20 + 0x10) = param_5;
    *(undefined4 *)(param_3 + *(int *)(param_3 + 0x200) * 0x20 + 0x14) = param_1;
    *(float *)(param_3 + *(int *)(param_3 + 0x200) * 0x20 + 0x18) = param_2;
    *(undefined1 *)(param_3 + *(int *)(param_3 + 0x200) * 0x20 + 0x1c) = param_6;
    *(int *)(param_3 + 0x200) = *(int *)(param_3 + 0x200) + 1;
    return;
  }
  iVar8 = 0;
  fVar9 = *(float *)(param_3 + 0x18);
  iVar1 = *(int *)(*(int *)(param_3 + 0x10) + 0xc4);
  if ((iVar1 - 3U < 2) || (bVar3 = false, iVar1 == 7)) {
    bVar3 = true;
  }
  iVar7 = 1;
  iVar1 = param_3;
  do {
    if (bVar3) {
      if (1 < *(int *)(*(int *)(iVar1 + 0x30) + 0xc4) - 1U) {
        fVar10 = *(float *)(iVar1 + 0x38);
        goto LAB_0015b9cc;
      }
    }
    else {
      fVar10 = *(float *)(iVar1 + 0x38);
LAB_0015b9cc:
      if (fVar10 < fVar9) {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 0xc4);
        bVar3 = false;
        fVar9 = fVar10;
        iVar8 = iVar7;
        if ((iVar2 - 3U < 2) || (iVar2 == 7)) {
          bVar3 = true;
        }
      }
    }
    iVar7 = iVar7 + 1;
    iVar1 = iVar1 + 0x20;
    if (0xf < iVar7) {
      if ((*(int *)(param_5 + 0xc4) - 3U < 2) || (bVar4 = false, *(int *)(param_5 + 0xc4) == 7)) {
        bVar4 = true;
      }
      if (((!bVar4) || (bVar3)) && (fVar9 <= param_2)) {
        puVar5 = (undefined4 *)(iVar8 * 0x20 + param_3);
        *(undefined1 *)(puVar5 + 7) = param_6;
        *puVar5 = (int)param_4;
        puVar5[1] = uVar6;
        puVar5[2] = in_a1_udw;
        puVar5[3] = in_register_0000005c;
        puVar5[4] = param_5;
        puVar5[5] = param_1;
        puVar5[6] = param_2;
      }
      return;
    }
  } while( true );
}


// ==== FUN_0015ba80 @ 0015ba80 ====

void FUN_0015ba80(undefined4 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar4 = 0;
  auVar5._8_4_ = in_a1_udw;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = in_register_0000005c;
  auVar5 = _por(in_zero_qw,auVar5);
  if (0 < (int)param_1[0x80]) {
    iVar1 = param_1[4];
    puVar3 = param_1;
    while( true ) {
      auVar2 = _por(in_zero_qw,auVar5);
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x4c))
                (puVar3[5],iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x48),*puVar3,auVar2._0_8_,
                 *(undefined1 *)(puVar3 + 7),param_3,param_4,param_5);
      if ((int)param_1[0x80] <= iVar4) break;
      iVar1 = puVar3[0xc];
      puVar3 = puVar3 + 8;
    }
  }
  return;
}


// ==== FUN_0015bb48 @ 0015bb48 ====

void FUN_0015bb48(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_00154fd8();
  return;
}


// ==== FUN_0015bb90 @ 0015bb90 ====

undefined4 FUN_0015bb90(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x43) = 0xff;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00155018();
  return 1;
}


// ==== FUN_0015bbd8 @ 0015bbd8 ====
// GLOBAL DAT_0040f540 undefined4
// GLOBAL DAT_0040f4e0 int_*
// GLOBAL DAT_0040f4d0 int

void FUN_0015bbd8(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 *in_stack_00000000;
  
  iVar5 = (int)param_1;
  FUN_00156388(*(undefined4 *)(iVar5 + 0x24));
  if (*(int *)(*(int *)(iVar5 + 0x1c) + 0xc4) == 2) {
    FUN_0015c1a8(param_1,0);
    iVar6 = *(int *)(*(int *)(iVar5 + 0x1c) + 0xc4);
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar5 + 0x1c) + 0xc4);
  }
  if (iVar6 != 2) {
    return;
  }
  iVar6 = *(int *)(iVar5 + 0x38);
  if (iVar6 == 1) {
    lVar4 = FUN_001438a8(DAT_0040f540,*(undefined8 *)(iVar5 + 0x30));
    if (lVar4 != 0) {
      if (*(float *)(iVar5 + 0x3c) != 0.0) {
        fVar8 = *(float *)(iVar5 + 0x3c);
        goto LAB_0015bd74;
      }
      FUN_0015c3c8(param_1);
      *in_stack_00000000 = 6;
LAB_0015bd68:
      *(undefined4 *)(iVar5 + 0x38) = 0;
    }
  }
  else {
    if (iVar6 < 2) {
      if (iVar6 != 0) {
        *(undefined4 *)(iVar5 + 0x38) = 0;
        return;
      }
      pcVar3 = *(char **)(((int)((1 - (uint)*(byte *)(iVar5 + 0x43)) * 0x1000000) >> 0x16) +
                         *(int *)(iVar5 + 0x20));
      if (pcVar3 == (char *)0x0) {
        return;
      }
      FUN_001438a8(DAT_0040f540,*(undefined8 *)(*pcVar3 * 0x20 + *(int *)(*DAT_0040f4e0 + 4)));
      return;
    }
    if (iVar6 != 2) {
      *(undefined4 *)(iVar5 + 0x38) = 0;
      return;
    }
    iVar6 = (int)((1 - (uint)*(byte *)(iVar5 + 0x43)) * 0x1000000) >> 0x18;
    iVar7 = iVar6 * 4;
    pcVar3 = *(char **)(iVar7 + *(int *)(iVar5 + 0x20));
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      lVar4 = FUN_001438a8(DAT_0040f540,
                           *(undefined8 *)(*pcVar3 * 0x20 + *(int *)(*DAT_0040f4e0 + 4)));
      if ((lVar4 != 0) && (*(float *)(iVar5 + 0x3c) == 0.0)) {
        *(char *)(iVar5 + 0x44) = cVar1;
        FUN_00143d90(DAT_0040f540,*(undefined4 *)(iVar5 + 0x1c),iVar6);
        uVar2 = *(undefined4 *)(iVar7 + *(int *)(iVar5 + 0x20));
        *(undefined1 *)(iVar5 + 0x45) = 0;
        *(undefined1 *)(iVar5 + 0x46) = 0;
        *(undefined4 *)(iVar5 + 0x28) = uVar2;
        FUN_0015be70(param_1);
        *in_stack_00000000 = 6;
        goto LAB_0015bd68;
      }
    }
  }
  fVar8 = *(float *)(iVar5 + 0x3c);
LAB_0015bd74:
  fVar8 = fVar8 - *(float *)(DAT_0040f4d0 + 0x1c);
  *(uint *)(iVar5 + 0x3c) = (int)fVar8 * (uint)(0.0 <= fVar8);
  return;
}


// ==== FUN_0015be08 @ 0015be08 ====

void FUN_0015be08(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = *(int *)((1 - *(char *)(param_1 + 0x43)) * 4 + *(int *)(param_1 + 0x20));
    if (((*(int *)(param_1 + 0x24) != 0) && (iVar1 != *(int *)(param_1 + 0x24))) && (iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x45) = 1;
      *(undefined4 *)(param_1 + 0x38) = 2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      FUN_00156e70();
    }
  }
  return;
}


// ==== FUN_0015be70 @ 0015be70 ====

undefined4 FUN_0015be70(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x45) == '\0') {
    lVar3 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x106) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x107) = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x28);
    if (0 < (long)*(char *)(param_1 + 0x42)) {
      piVar2 = *(int **)(param_1 + 0x20);
      iVar4 = 0x1000000;
      do {
        if (*(int *)(param_1 + 0x28) == *piVar2) {
          *(char *)(param_1 + 0x43) = (char)lVar3;
        }
        piVar2 = piVar2 + 1;
        lVar3 = (long)(iVar4 >> 0x18);
        iVar4 = iVar4 + 0x1000000;
      } while (lVar3 < *(char *)(param_1 + 0x42));
    }
    FUN_00156e80(*(undefined4 *)(param_1 + 0x24));
    uVar1 = 1;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc4) == 2) {
      FUN_0013c868(*(int *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x43));
      FUN_00156f18(*(int *)(param_1 + 0x24),*(undefined1 *)(*(int *)(param_1 + 0x24) + 0x108));
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  return uVar1;
}


// ==== FUN_0015bf38 @ 0015bf38 ====
// GLOBAL DAT_0040f540 int

undefined4 FUN_0015bf38(void)

{
  return *(undefined4 *)(*(int *)(*(int *)(DAT_0040f540 + 0x7c) + 8) + 0x1b4);
}


// ==== FUN_0015bf50 @ 0015bf50 ====
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f540 int

void FUN_0015bf50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = 0;
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x24) = param_2;
  if (0 < (long)*(char *)(param_1 + 0x42)) {
    piVar3 = *(int **)(param_1 + 0x20);
    iVar5 = 0x1000000;
    do {
      if (*piVar3 == param_2) {
        *(char *)(param_1 + 0x43) = (char)lVar4;
      }
      piVar3 = piVar3 + 1;
      lVar4 = (long)(iVar5 >> 0x18);
      iVar5 = iVar5 + 0x1000000;
    } while (lVar4 < *(char *)(param_1 + 0x42));
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc4) == 2) {
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x108) == '\0') {
      uVar1 = *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 8);
      *(undefined1 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14) + 0x28c) = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(DAT_0040f540 + 0x7c) + 0xc);
      *(undefined1 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14) + 0x28c) = 1;
    }
    uVar2 = FUN_0015a948(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0xf4));
    FUN_001d6e78(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),uVar1,
                 **(undefined8 **)(*(int *)(param_1 + 0x24) + 0xe8),uVar2);
  }
  return;
}


// ==== FUN_0015c088 @ 0015c088 ====

void FUN_0015c088(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  *(char *)(param_1 + 0x42) = param_2;
  uVar1 = FUN_00107d20((int)param_2 << 2);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if ('\0' < *(char *)(param_1 + 0x42)) {
    iVar4 = 0x1000000;
    do {
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar4 >> 0x18);
      *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0x20)) = 0;
      iVar4 = iVar4 + 0x1000000;
    } while (lVar3 < *(char *)(param_1 + 0x42));
  }
  return;
}


// ==== FUN_0015c100 @ 0015c100 ====
// GLOBAL DAT_0040f4e0 undefined4

void FUN_0015c100(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = 0;
  if ('\0' < *(char *)(param_1 + 0x42)) {
    iVar3 = 0x1000000;
    do {
      iVar2 = (int)lVar1 * 4;
      if (*(int *)(iVar2 + *(int *)(param_1 + 0x20)) != 0) {
        FUN_0015cfe0(DAT_0040f4e0);
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x20)) = 0;
      }
      lVar1 = (long)(iVar3 >> 0x18);
      iVar3 = iVar3 + 0x1000000;
    } while (lVar1 < *(char *)(param_1 + 0x42));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0xff;
  return;
}


// ==== FUN_0015c1a8 @ 0015c1a8 ====
// GLOBAL DAT_0040f4e4 int
// GLOBAL DAT_0040f4e0 int_*
// GLOBAL DAT_0040f510 int

undefined4 FUN_0015c1a8(int param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(DAT_0040f4e4 + 0x5848) == 0) {
    cVar1 = -1;
  }
  else {
    cVar1 = *(char *)((uint)*(byte *)(*(int *)(DAT_0040f4e4 + 0x5848) + 0x148) * 0x18 +
                      *(int *)(*(int *)(DAT_0040f4e4 + 0x5844) + 8) + 0x10);
  }
  iVar9 = (int)cVar1;
  lVar4 = FUN_0015d2e8(DAT_0040f4e0,(long)iVar9);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    return 0;
  }
  lVar4 = 0;
  if (((long)*(char *)(param_1 + 0x42) < 1) || (piVar6 = *(int **)(param_1 + 0x20), *piVar6 == 0)) {
LAB_0015c29c:
    if (lVar4 == (int)*(char *)(param_1 + 0x42)) {
      if (param_2 == 0) goto LAB_0015c2b0;
      uVar3 = *(undefined4 *)(param_1 + 0x24);
    }
    else {
      if (param_2 == 0) {
        return 1;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x24);
    }
    *(char *)(param_1 + 0x44) = cVar1;
    FUN_00156e70(uVar3);
    *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(*(int *)(DAT_0040f4e4 + 0x5848) + 0x150);
    FUN_001eed98(0,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x30),1);
    *(undefined1 *)(param_1 + 0x45) = 1;
    iVar8 = DAT_0040f4e4;
    FUN_00126d78(DAT_0040f4e4,*(undefined4 *)(DAT_0040f4e4 + 0x5848),1);
    *(undefined4 *)(iVar8 + 0x5848) = 0;
    *(undefined4 *)(param_1 + 0x38) = 1;
    uVar5 = *(undefined8 *)(iVar9 * 0x20 + *(int *)(*DAT_0040f4e0 + 4));
    *(undefined4 *)(param_1 + 0x3c) = 0x3f000000;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar3 = 1;
  }
  else {
    iVar8 = 0x1000000;
    pcVar2 = (char *)*piVar6;
    piVar7 = piVar6;
    while ((long)*pcVar2 != (long)iVar9) {
      piVar6 = piVar6 + 1;
      lVar4 = (long)(iVar8 >> 0x18);
      iVar8 = iVar8 + 0x1000000;
      piVar7 = piVar7 + 1;
      if ((*(char *)(param_1 + 0x42) <= lVar4) || (*piVar6 == 0)) goto LAB_0015c29c;
      pcVar2 = (char *)*piVar7;
    }
LAB_0015c2b0:
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_0015c378 @ 0015c378 ====
// GLOBAL DAT_0040f4e0 undefined4

undefined8 FUN_0015c378(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined1 **)((int)param_1 + 0x24);
  uVar3 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    iVar2 = FUN_0015d248(DAT_0040f4e0,*puVar1,0);
    uVar3 = FUN_00155178(param_1,*(undefined4 *)(iVar2 + 100),*(undefined1 *)(iVar2 + 0x60));
  }
  return uVar3;
}


// ==== FUN_0015c3c8 @ 0015c3c8 ====
// GLOBAL DAT_0040f4e0 int_*
// GLOBAL DAT_004432b0 undefined
// GLOBAL DAT_0040f4e4 undefined4
// GLOBAL DAT_0040f540 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015c3c8(undefined8 param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
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
  undefined1 in_vf13 [16];
  undefined4 in_vuI;
  undefined4 uVar19;
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
  undefined1 auStack_60 [16];
  
  lVar7 = 0;
  iVar6 = (int)param_1;
  if ((0 < (long)*(char *)(iVar6 + 0x42)) && (piVar2 = *(int **)(iVar6 + 0x20), *piVar2 != 0)) {
    iVar3 = 0x1000000;
    do {
      piVar2 = piVar2 + 1;
      lVar7 = (long)(iVar3 >> 0x18);
      iVar3 = iVar3 + 0x1000000;
      if (*(char *)(iVar6 + 0x42) <= lVar7) break;
    } while (*piVar2 != 0);
  }
  if (lVar7 == *(char *)(iVar6 + 0x42)) {
    auVar9 = _qmtc2(0x3f490fdb);
    auVar9 = _vaddbc(in_vf0,auVar9);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar9 = _vsubi(auVar9,in_vuI);
    auVar10 = _vmaxbc(in_vf0,in_vf0);
    auVar9 = _vabs(auVar9);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar9,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar10,in_vuI);
    _vmaddai(auVar10,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar9,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar9 = _vmsubi(auVar10,in_vuI);
    auVar9 = _vabs(auVar9);
    _ctc2(0x3e800000);
    _vnop();
    auVar9 = _vsubi(auVar9,in_vuI);
    auVar11 = _lqc2(_DAT_004432b0);
    auVar12 = _vmul(auVar11,auVar11);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar10,auVar12);
    auVar13 = _vmul(auVar9,auVar9);
    _ctc2(0xc2992661);
    _vnop();
    auVar10 = _vmuli(auVar9,in_vuI);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar12);
    uVar19 = _vwaitq();
    auVar11 = _vmulq(auVar11,uVar19);
    auVar18 = _vmul(auVar13,auVar13);
    _ctc2(0xc2255de0);
    _vnop();
    auVar16 = _vmuli(auVar9,in_vuI);
    auVar12 = _vmul(auVar18,auVar18);
    auVar10 = _vmul(auVar10,auVar13);
    _ctc2(0x42a33457);
    _vnop();
    auVar15 = _vmuli(auVar9,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar14 = _vmuli(auVar9,in_vuI);
    _vmula(auVar16,auVar13);
    _vmadda(auVar10,auVar18);
    _ctc2(0x40c90fda);
    _vmadda(auVar15,auVar18);
    _vmaddai(auVar9,in_vuI);
    auVar9 = _vmadd(auVar14,auVar12);
    auVar10 = _vmulbc(auVar11,auVar11);
    _vmove(in_vf13);
    auVar12 = _qmtc2(0x3f800000);
    _vaddbc(in_vf0,auVar10);
    auVar15 = _vaddbc(in_vf0,auVar12);
    auVar12 = _vmulbc(auVar11,auVar11);
    auVar10 = _vmul(auVar11,auVar11);
    _vaddbc(in_vf0,auVar12);
    auVar9 = _vsubbc(auVar15,auVar9);
    auVar13 = _vmulbc(auVar11,auVar11);
    auVar12 = _vsub(in_vf0,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar10 = _vaddbc(in_vf0,auVar13);
    auVar12 = _vaddbc(auVar12,auVar15);
    auVar11 = _vmulbc(auVar11,auVar9);
    auVar10 = _vmulbc(auVar10,auVar9);
    auVar12 = _vmulbc(auVar12,auVar9);
    _lqc2(auStack_160);
    auVar14 = _vsubbc(auVar15,auVar12);
    _lqc2(auStack_150);
    auVar9 = _vsubbc(auVar10,auVar11);
    _lqc2(auStack_140);
    auVar13 = _vaddbc(auVar10,auVar11);
    auVar16 = _vaddbc(in_vf0,auVar9);
    auVar18 = _vaddbc(in_vf0,auVar13);
    auVar14 = _vaddbc(in_vf0,auVar14);
    auVar9 = _vaddbc(auVar10,auVar11);
    auVar13 = _vsubbc(auVar15,auVar12);
    auVar17 = _vsubbc(auVar10,auVar11);
    _vmove(auVar14);
    auVar15 = _vsubbc(auVar15,auVar12);
    _vmove(auVar16);
    auVar12 = _vaddbc(in_vf0,auVar9);
    _vmove(auVar18);
    auVar13 = _vaddbc(in_vf0,auVar13);
    _sqc2(auVar14);
    auVar14 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar16);
    auVar9 = _vsubbc(auVar10,auVar11);
    _sqc2(auVar18);
    auVar10 = _vaddbc(auVar10,auVar11);
    _sqc2(auVar12);
    auVar16 = _vadd(in_vf0,in_vf0);
    _sqc2(auVar13);
    _sqc2(auVar14);
    _vmove(auVar12);
    _vmove(auVar13);
    auVar13 = _vaddbc(in_vf0,auVar9);
    _vmove(auVar14);
    iVar3 = *(int *)(iVar6 + 0x1c);
    auVar12 = _vaddbc(in_vf0,auVar10);
    auVar18 = _vaddbc(in_vf0,auVar15);
    auStack_160 = _sqc2(auVar13);
    _sqc2(auVar13);
    _sqc2(auVar13);
    auStack_150 = _sqc2(auVar12);
    auStack_140 = _sqc2(auVar18);
    auStack_120 = _sqc2(auVar16);
    auStack_130 = _sqc2(auVar16);
    _sqc2(auVar12);
    _sqc2(auVar18);
    _sqc2(auVar16);
    _sqc2(auVar12);
    _sqc2(auVar18);
    _sqc2(auVar16);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    _vmulabc(auVar11,auVar13);
    _vmaddabc(auVar10,auVar13);
    auVar14 = _vmaddbc(auVar9,auVar13);
    _vmulabc(auVar11,auVar12);
    _vmaddabc(auVar10,auVar12);
    auVar15 = _vmaddbc(auVar9,auVar12);
    lVar7 = (long)*(char *)(iVar6 + 0x43);
    auStack_90 = _sqc2(auVar14);
    auStack_80 = _sqc2(auVar15);
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    _vmulabc(auVar11,auVar18);
    _vmaddabc(auVar10,auVar18);
    auVar13 = _vmaddbc(auVar9,auVar18);
    _vmulabc(auVar11,auVar16);
    _vmaddabc(auVar10,auVar16);
    _vmaddabc(auVar9,auVar16);
    auVar9 = _vmaddbc(auVar12,in_vf0);
    auStack_70 = _sqc2(auVar13);
    auStack_1a0 = _sqc2(auVar14);
    auStack_190 = _sqc2(auVar15);
    auStack_180 = _sqc2(auVar13);
    auStack_60 = _sqc2(auVar9);
    auStack_d0 = _sqc2(auVar14);
    auStack_c0 = _sqc2(auVar15);
    auStack_b0 = _sqc2(auVar13);
    auStack_a0 = _sqc2(auVar9);
    auStack_110 = _sqc2(auVar14);
    auStack_100 = _sqc2(auVar15);
    auStack_f0 = _sqc2(auVar13);
    auStack_e0 = _sqc2(auVar9);
    auStack_1e0 = _sqc2(auVar14);
    auStack_1d0 = _sqc2(auVar15);
    auStack_1c0 = _sqc2(auVar13);
    _sqc2(auVar9);
    auStack_170 = _sqc2(auVar9);
    fVar8 = *(float *)(iVar3 + 0x2e8) - 0.45;
    if (0.0 < fVar8) {
      auVar10 = _qmtc2(fVar8);
    }
    else {
      auVar10 = _qmtc2(0x3e4ccccd);
    }
    auVar9 = _vaddbc(auVar9,auVar10);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auStack_1b0 = _sqc2(auVar9);
    auVar10 = _lqc2(auStack_1c0);
    auVar9 = _qmtc2(0x3f99999a);
    auVar9 = _vmulbc(auVar10,auVar9);
    auVar9 = _qmfc2(auVar9._0_4_);
    auVar10 = _qmfc2(auVar10._0_4_);
    FUN_00126bc8(DAT_0040f4e4,**(undefined1 **)(iVar6 + 0x24),auStack_1e0,auVar9._0_8_,auVar10._0_8_
                 ,*(undefined2 *)(*(int *)(*(undefined1 **)(iVar6 + 0x24) + 0xf4) + 0x18));
    FUN_0015cfe0(DAT_0040f4e0,*(undefined4 *)(*(char *)(iVar6 + 0x43) * 4 + *(int *)(iVar6 + 0x20)))
    ;
  }
  iVar3 = (int)lVar7 * 4;
  uVar19 = FUN_0015cef0(DAT_0040f4e0,*(undefined4 *)(iVar6 + 0x1c),*(undefined1 *)(iVar6 + 0x44),0);
  *(undefined4 *)(iVar3 + *(int *)(iVar6 + 0x20)) = uVar19;
  FUN_00158ea8(*(undefined4 *)(iVar3 + *(int *)(iVar6 + 0x20)),*(undefined2 *)(iVar6 + 0x40));
  pcVar1 = *(char **)(iVar3 + *(int *)(iVar6 + 0x20));
  if (*(long *)(*pcVar1 * 0x20 + *(int *)(*DAT_0040f4e0 + 4)) == 0x5446152331830000) {
    pcVar1[0x108] = '\x01';
    *(undefined1 *)(*(int *)(iVar6 + 0x14) + (int)**(char **)(iVar3 + *(int *)(iVar6 + 0x20))) = 1;
    piVar2 = *(int **)(iVar6 + 0x20);
  }
  else {
    piVar2 = *(int **)(iVar6 + 0x20);
  }
  lVar4 = 0;
  iVar3 = piVar2[(int)lVar7];
  *(int *)(iVar6 + 0x28) = iVar3;
  *(int *)(iVar6 + 0x24) = iVar3;
  if (0 < (long)*(char *)(iVar6 + 0x42)) {
    iVar5 = 0x1000000;
    do {
      if (iVar3 == *piVar2) {
        *(char *)(iVar6 + 0x43) = (char)lVar4;
      }
      piVar2 = piVar2 + 1;
      lVar4 = (long)(iVar5 >> 0x18);
      iVar5 = iVar5 + 0x1000000;
    } while (lVar4 < *(char *)(iVar6 + 0x42));
  }
  FUN_00143d90(DAT_0040f540,*(undefined4 *)(iVar6 + 0x1c),*(undefined1 *)(iVar6 + 0x43));
  *(undefined1 *)(iVar6 + 0x45) = 0;
  *(undefined1 *)(iVar6 + 0x46) = 0;
  FUN_0015be70(param_1);
  return;
}


// ==== FUN_0015c920 @ 0015c920 ====

undefined4 FUN_0015c920(int param_1,char param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x45) == '\0') {
    lVar2 = 0x7f;
    pcVar1 = (char *)**(undefined4 **)(param_1 + 0x20);
    lVar3 = 0x7f;
    if (pcVar1 != (char *)0x0) {
      lVar2 = (long)*pcVar1;
    }
    pcVar1 = (char *)(*(undefined4 **)(param_1 + 0x20))[1];
    if (pcVar1 != (char *)0x0) {
      lVar3 = (long)*pcVar1;
    }
    if ((int)param_2 == lVar2) {
      return 0;
    }
    if ((int)param_2 != lVar3) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0015c970 @ 0015c970 ====

void FUN_0015c970(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00107b78(0x40f0f0,1,0x10,0);
  uVar2 = FUN_00107d20(0x31f0);
  iVar4 = 0x2d;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_00107b78(0x40f0f0,1,8,0);
  iVar5 = 0x1000000;
  iVar4 = 0;
  uVar2 = FUN_00107d20(0x2f);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_00107d20(0x708);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_00107d20(0x32);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_00107b78(0x40f0f0,1,0x80,0);
  do {
    FUN_001561f8(*(int *)(param_1 + 4) + iVar4);
    iVar4 = iVar4 + 0x110;
    iVar3 = iVar5 >> 0x18;
    iVar5 = iVar5 + 0x1000000;
  } while (iVar3 < 0x2f);
  iVar5 = 0x1000000;
  iVar4 = 0;
  do {
    FUN_00158f08(*(int *)(param_1 + 0xc) + iVar4);
    iVar4 = iVar4 + 0x24;
    iVar3 = iVar5 >> 0x18;
    iVar5 = iVar5 + 0x1000000;
  } while (iVar3 < 0x32);
  return;
}


// ==== FUN_0015cab0 @ 0015cab0 ====

undefined4 FUN_0015cab0(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00288790(*param_1);
  iVar2 = 0;
  iVar4 = 0x1000000;
  do {
    puVar1 = (undefined1 *)(param_1[2] + iVar2);
    iVar2 = iVar4 >> 0x18;
    *puVar1 = 0;
    iVar4 = iVar4 + 0x1000000;
  } while (iVar2 < 0x2f);
  iVar2 = 0;
  iVar4 = 0x1000000;
  do {
    puVar1 = (undefined1 *)(param_1[4] + iVar2);
    iVar2 = iVar4 >> 0x18;
    *puVar1 = 0;
    iVar4 = iVar4 + 0x1000000;
  } while (iVar2 < 0x32);
  iVar4 = 0x1000000;
  puVar3 = param_1 + 8;
  do {
    FUN_001632e0(puVar3);
    puVar3 = puVar3 + 0xc;
    iVar2 = iVar4 >> 0x18;
    iVar4 = iVar4 + 0x1000000;
  } while (iVar2 < 0x24);
  param_1 = param_1 + 0x1b8;
  iVar4 = 0xf;
  do {
    iVar4 = iVar4 + -1;
    FUN_0015d3d8(param_1);
    param_1 = param_1 + 0x24;
  } while (-1 < iVar4);
  return 1;
}


// ==== FUN_0015cba0 @ 0015cba0 ====
// GLOBAL DAT_0040f4d0 int

void FUN_0015cba0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0x1000000;
  iVar2 = param_1 + 0x20;
  uVar4 = *(undefined4 *)(DAT_0040f4d0 + 0x1c);
  do {
    FUN_00163328(uVar4,iVar2);
    iVar2 = iVar2 + 0x30;
    iVar1 = iVar3 >> 0x18;
    iVar3 = iVar3 + 0x1000000;
  } while (iVar1 < 0x24);
  param_1 = param_1 + 0x6e0;
  iVar2 = 0xf;
  do {
    FUN_0015d440(uVar4,param_1);
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 0x90;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_0015cc40 @ 0015cc40 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f514 undefined4
// GLOBAL DAT_00414d4d undefined1
// GLOBAL DAT_00414d4e undefined1
// GLOBAL DAT_00414d40 undefined1
// GLOBAL DAT_00414d54 int
// GLOBAL DAT_00414d52 undefined1

void FUN_0015cc40(int *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  
  *param_1 = (int)param_2;
  FUN_00288788(param_2);
  FUN_00107b08(0x40f0f0,1,0);
  FUN_00107ab8(0x40f0f0,0,0);
  FUN_00107b78(0x40f0f0,1,0x10,0);
  FUN_00155088(DAT_0040f4d0 + 0x2b0,*(undefined1 *)(*param_1 + 1));
  FUN_00139698(DAT_0040f514,*(undefined1 *)(*param_1 + 1));
  FUN_00107b78(0x40f0f0,1,0x80,0);
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,1,0);
  iVar9 = *param_1;
  uVar6 = 0;
  uVar12 = 0;
  iVar10 = 0;
  uVar11 = 0;
  iVar8 = 0;
  if (*(char *)(iVar9 + 1) != '\0') {
    iVar5 = 0x1000000;
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar9 = *(int *)(iVar8 * 0x20 + *(int *)(iVar9 + 4) + 0x1c);
      iVar7 = iVar8;
      iVar13 = iVar3;
      if (((iVar9 != 6) && (iVar7 = iVar4, iVar13 = iVar8, iVar9 != 5)) &&
         (iVar13 = iVar3, iVar9 == 4)) {
        iVar10 = iVar8;
      }
      uVar11 = (undefined1)iVar10;
      uVar12 = (undefined1)iVar13;
      uVar6 = (undefined1)iVar7;
      iVar9 = *param_1;
      iVar8 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
      iVar3 = iVar13;
      iVar4 = iVar7;
    } while (iVar8 < (int)(uint)*(byte *)(iVar9 + 1));
  }
  iVar9 = 0x12;
  puVar2 = &DAT_00414d52;
  do {
    *puVar2 = uVar6;
    iVar9 = iVar9 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar9);
  iVar9 = 0;
  do {
    for (iVar10 = 0; uVar6 = DAT_00414d4d, uVar1 = DAT_00414d4e,
        iVar10 < (int)(uint)*(byte *)(*param_1 + 1); iVar10 = (iVar10 + 1) * 0x1000000 >> 0x18) {
      if (*(int *)(iVar10 * 0x20 + *(int *)(*param_1 + 4) + 0x1c) == iVar9) {
        (&DAT_00414d40)[iVar9] = (char)iVar10;
        uVar6 = DAT_00414d4d;
        uVar1 = DAT_00414d4e;
        break;
      }
      uVar1 = uVar12;
      if ((iVar9 == 0xe) || (uVar6 = uVar11, uVar1 = DAT_00414d4e, iVar9 == 0xd)) break;
    }
    DAT_00414d4e = uVar1;
    DAT_00414d4d = uVar6;
    iVar9 = (iVar9 + 1) * 0x1000000 >> 0x18;
    if (0x12 < iVar9) {
      DAT_00414d40 = 0xff;
      DAT_00414d54 = FUN_00107d20((uint)*(byte *)(*param_1 + 1) << 2);
      iVar9 = *param_1;
      iVar10 = 0;
      if (*(char *)(iVar9 + 1) != '\0') {
        iVar8 = 0x1000000;
        do {
          iVar3 = iVar10 * 0x20;
          iVar4 = iVar10 * 4;
          iVar10 = iVar8 >> 0x18;
          *(undefined4 *)(iVar4 + DAT_00414d54) =
               *(undefined4 *)(iVar3 + *(int *)(iVar9 + 4) + 0x1c);
          iVar9 = *param_1;
          iVar8 = iVar8 + 0x1000000;
        } while (iVar10 < (int)(uint)*(byte *)(iVar9 + 1));
      }
      return;
    }
  } while( true );
}


// ==== FUN_0015cec8 @ 0015cec8 ====
// GLOBAL DAT_0040f4e4 undefined4

void FUN_0015cec8(undefined4 *param_1)

{
  FUN_00288790(*param_1);
  FUN_00127060(DAT_0040f4e4);
  return;
}


// ==== FUN_0015cef0 @ 0015cef0 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4dc undefined4

int FUN_0015cef0(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)param_1[2] == '\x01') {
    iVar1 = 0x1000000;
    do {
      iVar2 = iVar1 >> 0x18;
      iVar1 = iVar1 + 0x1000000;
    } while (((char *)param_1[2])[iVar2] == '\x01');
  }
  fe_FEZoomLevel_00156278(param_1[1] + iVar2 * 0x110,param_2,(int)param_3);
  *(undefined1 *)(param_1[2] + iVar2) = 1;
  if (param_2 == DAT_0040f4d0 + 0x30) {
    FUN_00122520(DAT_0040f4dc,*(undefined8 *)(param_3 * 0x20 + *(int *)(*param_1 + 4)));
    iVar1 = param_1[1];
  }
  else {
    iVar1 = param_1[1];
  }
  return iVar1 + iVar2 * 0x110;
}


// ==== FUN_0015cfe0 @ 0015cfe0 ====

void FUN_0015cfe0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 0;
  if (param_2 != iVar1) {
    iVar2 = 0x1000000;
    do {
      iVar1 = iVar1 + 0x110;
      iVar3 = iVar2 >> 0x18;
      iVar2 = iVar2 + 0x1000000;
    } while (param_2 != iVar1);
  }
  fe_FEZoomLevel_00156450(*(int *)(param_1 + 4) + iVar3 * 0x110);
  *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = 0;
  return;
}


// ==== FUN_0015d060 @ 0015d060 ====

void FUN_0015d060(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  do {
    if (1 < iVar6) {
      return;
    }
    iVar4 = (int)param_2;
    if (iVar6 == 0) {
      iVar2 = *(int *)(iVar4 + 0xec);
      iVar3 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar4 + 0xec) + 0xa0);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar4 + 0xf8) = 0;
        return;
      }
      iVar3 = *(int *)(param_1 + 0x10);
    }
    if (*(char *)(iVar3 + iVar5) == '\x01') {
      iVar1 = iVar5 * 0x1000000;
      do {
        iVar1 = iVar1 + 0x1000000;
        iVar5 = iVar1 >> 0x18;
      } while (*(char *)(iVar3 + iVar5) == '\x01');
    }
    iVar3 = iVar5 * 0x24 + *(int *)(param_1 + 0xc);
    FUN_00158f50(iVar3,param_2,iVar2,param_3);
    *(int *)(iVar3 + 4) = iVar4;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar5) = 1;
    if (iVar6 == 0) {
      *(int *)(iVar4 + 0xf4) = iVar3;
    }
    else {
      *(int *)(iVar4 + 0xf8) = iVar3;
    }
    iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18;
  } while( true );
}


// ==== FUN_0015d198 @ 0015d198 ====

void FUN_0015d198(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (param_2 != iVar1) {
      iVar3 = 0x1000000;
      iVar2 = iVar1;
      do {
        iVar2 = iVar2 + 0x24;
        iVar4 = iVar3 >> 0x18;
        iVar3 = iVar3 + 0x1000000;
      } while (param_2 != iVar2);
    }
    FUN_00159148(iVar4 * 0x24 + iVar1);
    *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar4) = 0;
  }
  return;
}


// ==== FUN_0015d210 @ 0015d210 ====

int FUN_0015d210(int *param_1,int param_2)

{
  return *(int *)(*param_1 + 4) + ((param_2 << 0x18) >> 0x13);
}


// ==== FUN_0015d228 @ 0015d228 ====

undefined4 FUN_0015d228(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 8);
}


// ==== FUN_0015d248 @ 0015d248 ====

undefined4 FUN_0015d248(int *param_1,char param_2,long param_3)

{
  if (param_3 != 0) {
    return *(undefined4 *)(*(int *)(param_2 * 0x20 + *(int *)(*param_1 + 4) + 8) + 0xa0);
  }
  return *(undefined4 *)(param_2 * 0x20 + *(int *)(*param_1 + 4) + 8);
}


// ==== FUN_0015d288 @ 0015d288 ====

undefined4 FUN_0015d288(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 0x10);
}


// ==== FUN_0015d2a8 @ 0015d2a8 ====

undefined4 FUN_0015d2a8(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 0x14);
}


// ==== FUN_0015d2c8 @ 0015d2c8 ====

undefined4 FUN_0015d2c8(int *param_1,int param_2)

{
  return *(undefined4 *)(((param_2 << 0x18) >> 0x13) + *(int *)(*param_1 + 4) + 0x18);
}


// ==== FUN_0015d2e8 @ 0015d2e8 ====

bool FUN_0015d2e8(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (-1 < param_2) {
    bVar1 = (int)param_2 < (int)(uint)*(byte *)(*param_1 + 1);
  }
  return bVar1;
}


// ==== FUN_0015d310 @ 0015d310 ====

void FUN_0015d310(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + 0x20;
  iVar2 = 0x1000000;
  do {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      FUN_001632f8();
      return;
    }
    param_1 = param_1 + 0x30;
    iVar1 = iVar2 >> 0x18;
    iVar2 = iVar2 + 0x1000000;
  } while (iVar1 < 0x24);
  return;
}


// ==== FUN_0015d370 @ 0015d370 ====
// GLOBAL DAT_003bceb8 int

undefined4 FUN_0015d370(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x6e0;
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (DAT_003bceb8 < iVar1) {
        DAT_003bceb8 = iVar1;
      }
      FUN_0015d3e0();
      return 1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x90;
  } while (iVar1 < 0x10);
  return 0;
}


// ==== FUN_0015d3d8 @ 0015d3d8 ====

void FUN_0015d3d8(int param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}


// ==== FUN_0015d3e0 @ 0015d3e0 ====
// GLOBAL DAT_0040f4d0 int

undefined4
FUN_0015d3e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined8 param_5
            ,undefined8 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 uVar2;
  
  uVar1 = (undefined4)((ulong)param_5 >> 0x20);
  *(undefined4 *)(param_3 + 0x70) = param_4;
  *(undefined1 *)(param_3 + 0x80) = param_7;
  *(undefined1 *)(param_3 + 0x88) = 1;
  *(undefined1 *)(param_3 + 0x89) = 0;
  uVar2 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  *(int *)(param_3 + 0x50) = (int)param_5;
  *(undefined4 *)(param_3 + 0x54) = uVar1;
  *(undefined4 *)(param_3 + 0x58) = in_a2_udw;
  *(undefined4 *)(param_3 + 0x5c) = in_register_0000006c;
  *(undefined4 *)(param_3 + 0x84) = uVar2;
  *(int *)(param_3 + 0x60) = (int)param_6;
  *(int *)(param_3 + 100) = (int)((ulong)param_6 >> 0x20);
  *(undefined4 *)(param_3 + 0x68) = in_a3_udw;
  *(undefined4 *)(param_3 + 0x6c) = in_register_0000007c;
  *(undefined4 *)(param_3 + 0x78) = param_1;
  *(undefined4 *)(param_3 + 0x7c) = param_2;
  *(int *)(param_3 + 0x40) = (int)param_5;
  *(undefined4 *)(param_3 + 0x44) = uVar1;
  *(undefined4 *)(param_3 + 0x48) = in_a2_udw;
  *(undefined4 *)(param_3 + 0x4c) = in_register_0000006c;
  *(undefined4 *)(param_3 + 0x74) = 0;
  FUN_0015d620();
  return 1;
}


// ==== FUN_0015d440 @ 0015d440 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4d8 int

void FUN_0015d440(float param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  
  iVar4 = (int)param_2;
  if (*(char *)(iVar4 + 0x88) != '\0') {
    fVar5 = *(float *)(iVar4 + 0x74);
    param_1 = *(float *)(iVar4 + 0x7c) * param_1;
    bVar1 = false;
    if ((fVar5 < param_1) && (bVar1 = true, param_1 = fVar5, fVar5 < 0.01)) {
      param_1 = 0.01;
    }
    auVar7 = _qmtc2(param_1);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x60));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x50));
    auVar6 = _vmulbc(auVar6,auVar7);
    auVar6 = _vadd(auVar8,auVar6);
    auStack_60 = _sqc2(auVar6);
    auVar6 = _qmfc2(auVar8._0_4_);
    lVar3 = FUN_0012ae58(DAT_0040f4d0,auVar6._0_8_,auStack_60._0_4_,0x54,0,1,auStack_a0);
    if (lVar3 == 0) {
      if (bVar1) {
        if (*(char *)(iVar4 + 0x8b) == '\0') {
          if (*(char *)(iVar4 + 0x8a) == '\0') {
            cVar2 = *(char *)(iVar4 + 0x88);
          }
          else {
            FUN_0015d870(param_2);
            cVar2 = *(char *)(iVar4 + 0x88);
          }
        }
        else {
          auVar7 = _qmtc2(0x3dcccccd);
          auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x60));
          auVar6 = _vmulbc(auVar6,auVar7);
          auVar7 = _lqc2(auStack_60);
          auVar6 = _vadd(auVar7,auVar6);
          auVar6 = _qmfc2(auVar6._0_4_);
          FUN_0015d850(param_2,auVar6._0_8_);
          cVar2 = *(char *)(iVar4 + 0x88);
        }
      }
      else {
        cVar2 = *(char *)(iVar4 + 0x88);
      }
    }
    else {
      FUN_0015d758(param_2,auStack_a0);
      cVar2 = *(char *)(iVar4 + 0x88);
    }
    if (cVar2 == '\0') {
      if (*(char *)(iVar4 + 0x89) != '\0') {
        FUN_001bd8d0(DAT_0040f4d8 + 0x4eed0);
      }
    }
    else {
      fVar5 = *(float *)(iVar4 + 0x78) - param_1;
      *(int *)(iVar4 + 0x50) = auStack_60._0_4_;
      *(int *)(iVar4 + 0x54) = auStack_60._4_4_;
      *(undefined4 *)(iVar4 + 0x58) = auStack_60._8_4_;
      *(undefined4 *)(iVar4 + 0x5c) = auStack_60._12_4_;
      *(float *)(iVar4 + 0x78) = fVar5;
      *(float *)(iVar4 + 0x74) = *(float *)(iVar4 + 0x74) - param_1;
      if (fVar5 <= 0.0) {
        FUN_0015d818(param_2);
        *(undefined1 *)(iVar4 + 0x88) = 0;
      }
    }
    if (*(float *)(iVar4 + 0x84) + 2.0 < *(float *)(DAT_0040f4d0 + 0x20)) {
      FUN_0015d818(param_2);
      *(undefined1 *)(iVar4 + 0x88) = 0;
    }
  }
  return;
}


// ==== FUN_0015d620 @ 0015d620 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_0015d620(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8 = _vaddbc(in_vf0,in_vf0);
  iVar5 = (int)param_1;
  auVar7 = _qmtc2(*(undefined4 *)(iVar5 + 0x78));
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x60));
  auVar6 = _vmulbc(auVar6,auVar7);
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x40));
  auVar7 = _vadd(auVar9,auVar6);
  auVar6 = _vmul(auVar6,auVar6);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar8,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  if (auVar6._0_4_ < 2.3283064e-10) {
    *(undefined1 *)(iVar5 + 0x8a) = 0;
  }
  else {
    auVar6 = _qmfc2(auVar9._0_4_);
    auVar7 = _qmfc2(auVar7._0_4_);
    uVar3 = FUN_0012ae58(DAT_0040f4d0,auVar6._0_8_,auVar7._0_8_,3,0,1,param_1);
    uVar4 = 0;
    *(undefined1 *)(iVar5 + 0x8a) = uVar3;
    if (*(int *)(iVar5 + 0x24) != 0) {
      iVar1 = *(int *)(*(int *)(iVar5 + 0x24) + 0xc4);
      if ((iVar1 - 3U < 2) || (bVar2 = false, iVar1 == 7)) {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = 1;
      }
    }
    *(undefined1 *)(iVar5 + 0x8c) = uVar4;
    *(bool *)(iVar5 + 0x8b) = (*(uint *)(iVar5 + 0x28) & 0x10000000) != 0;
  }
  if (*(char *)(iVar5 + 0x8a) == '\0') {
    *(float *)(iVar5 + 0x74) = *(float *)(iVar5 + 0x74) + *(float *)(iVar5 + 0x78);
  }
  else {
    *(float *)(iVar5 + 0x74) =
         *(float *)(iVar5 + 0x74) + *(float *)(iVar5 + 0x78) * *(float *)(iVar5 + 0x20);
  }
  return;
}


// ==== FUN_0015d758 @ 0015d758 ====

void FUN_0015d758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 uStack_60;
  char acStack_5f [15];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar4 = (int)param_1;
  puVar5 = (undefined8 *)param_2;
  uStack_48 = *(undefined4 *)(puVar5 + 1);
  uStack_44 = *(undefined4 *)((int)puVar5 + 0xc);
  uStack_50 = (undefined4)*puVar5;
  uStack_4c = (undefined4)((ulong)*puVar5 >> 0x20);
  acStack_5f[0] = '\0';
  uStack_60 = 0;
  FUN_00159ae8(*(undefined4 *)(iVar4 + 0x74),*(undefined4 *)(iVar4 + 0x70),param_2,iVar4 + 0x40,
               &uStack_50,iVar4 + 0x60,&uStack_60,acStack_5f,1);
  if ((*(byte *)(iVar4 + 0x80) & 2) == 0) {
    if (acStack_5f[0] == '\0') {
      *(undefined1 *)(iVar4 + 0x88) = 0;
    }
    else {
      uVar1 = *puVar5;
      uVar2 = *(undefined4 *)(puVar5 + 1);
      uVar3 = *(undefined4 *)((int)puVar5 + 0xc);
      *(int *)(iVar4 + 0x40) = (int)uVar1;
      *(int *)(iVar4 + 0x44) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(iVar4 + 0x48) = uVar2;
      *(undefined4 *)(iVar4 + 0x4c) = uVar3;
      uVar1 = *puVar5;
      uVar2 = *(undefined4 *)(puVar5 + 1);
      uVar3 = *(undefined4 *)((int)puVar5 + 0xc);
      *(undefined1 *)(iVar4 + 0x89) = 1;
      *(int *)(iVar4 + 0x50) = (int)uVar1;
      *(int *)(iVar4 + 0x54) = (int)((ulong)uVar1 >> 0x20);
      *(undefined4 *)(iVar4 + 0x58) = uVar2;
      *(undefined4 *)(iVar4 + 0x5c) = uVar3;
      FUN_0015d620(param_1);
    }
  }
  return;
}


// ==== FUN_0015d818 @ 0015d818 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_0015d818(int param_1,undefined8 param_2)

{
  FUN_0016e0c0(DAT_0040f4d4,param_2,*(undefined8 *)(param_1 + 0x40),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0xf0));
  return;
}


// ==== FUN_0015d850 @ 0015d850 ====

void FUN_0015d850(int param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(int *)(param_1 + 0x40) = (int)param_2;
  *(int *)(param_1 + 0x44) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x48) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x4c) = in_register_0000005c;
  FUN_0015d620();
  return;
}


// ==== FUN_0015d870 @ 0015d870 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_0015d870(undefined8 param_1)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 uStack_50;
  char acStack_4f [15];
  undefined1 auStack_40 [16];
  
  acStack_4f[0] = '\0';
  pauVar2 = (undefined1 (*) [16])param_1;
  auVar4 = _lqc2(*pauVar2);
  uStack_50 = 0;
  auStack_40 = _sqc2(auVar4);
  if (pauVar2[8][0xc] != '\0') {
    auVar3 = _lqc2(pauVar2[6]);
    auVar5 = _vadd(auVar4,auVar3);
    auVar5 = _qmfc2(auVar5._0_4_);
    auVar4 = _vsub(auVar4,auVar3);
    auVar4 = _qmfc2(auVar4._0_4_);
    cVar1 = FUN_0012ae58(DAT_0040f4d0,auVar4._0_8_,auVar5._0_8_,2,0,1,param_1);
    pauVar2[8][10] = cVar1;
    if (cVar1 == '\0') goto LAB_0015d93c;
  }
  FUN_00159ae8(*(undefined4 *)(pauVar2[7] + 4),*(undefined4 *)pauVar2[7],param_1,pauVar2 + 4,
               auStack_40,pauVar2 + 6,&uStack_50,acStack_4f,1);
  if (acStack_4f[0] != '\0') {
    pauVar2[8][9] = 1;
    *(undefined4 *)pauVar2[5] = auStack_40._0_4_;
    *(undefined4 *)(pauVar2[5] + 4) = auStack_40._4_4_;
    *(undefined4 *)(pauVar2[5] + 8) = auStack_40._8_4_;
    *(undefined4 *)(pauVar2[5] + 0xc) = auStack_40._12_4_;
    *(undefined4 *)pauVar2[4] = auStack_40._0_4_;
    *(undefined4 *)(pauVar2[4] + 4) = auStack_40._4_4_;
    *(undefined4 *)(pauVar2[4] + 8) = auStack_40._8_4_;
    *(undefined4 *)(pauVar2[4] + 0xc) = auStack_40._12_4_;
    FUN_0015d620(param_1);
    return;
  }
LAB_0015d93c:
  pauVar2[8][8] = 0;
  return;
}


// ==== FUN_0015d958 @ 0015d958 ====
// GLOBAL DAT_0040f4a4 undefined4
// GLOBAL DAT_0040f538 undefined4
// GLOBAL DAT_003db6d0 undefined
// GLOBAL DAT_003db708 undefined
// GLOBAL DAT_003db758 undefined
// GLOBAL DAT_003db7a8 undefined
// GLOBAL DAT_003db7f8 undefined
// GLOBAL DAT_003db828 undefined
// GLOBAL DAT_003db860 undefined
// GLOBAL DAT_003db920 undefined
// GLOBAL DAT_003dbaa0 undefined
// GLOBAL DAT_003dbb58 undefined
// GLOBAL DAT_003dbb90 undefined
// GLOBAL DAT_003dbbc8 undefined
// GLOBAL DAT_003dbc00 undefined
// GLOBAL DAT_003dbc38 undefined
// GLOBAL DAT_003dbc70 undefined
// GLOBAL DAT_003dbca8 undefined
// GLOBAL DAT_003dbce0 undefined
// GLOBAL DAT_003dbd18 undefined
// GLOBAL DAT_003dbd50 undefined
// GLOBAL DAT_003dbd88 undefined
// GLOBAL DAT_003dbdc0 undefined
// GLOBAL DAT_003dbdf8 undefined
// GLOBAL DAT_003dbe30 undefined
// GLOBAL DAT_003dbe68 undefined
// GLOBAL DAT_003dbea0 undefined
// GLOBAL DAT_003dbed8 undefined
// GLOBAL DAT_003dbf10 undefined
// GLOBAL DAT_003dbf48 undefined
// GLOBAL DAT_003dc010 undefined
// GLOBAL DAT_003dc0d0 undefined
// GLOBAL DAT_003dc100 undefined
// GLOBAL DAT_003dc130 undefined
// GLOBAL DAT_003dc200 undefined
// GLOBAL DAT_003dc4c8 undefined
// GLOBAL DAT_003dc588 undefined
// GLOBAL DAT_003dc5c0 undefined
// GLOBAL DAT_003dc6b8 undefined
// GLOBAL DAT_003dc6e8 undefined
// GLOBAL DAT_003dccd8 undefined
// GLOBAL DAT_003dcd20 undefined
// GLOBAL DAT_003dcd68 undefined
// GLOBAL DAT_003dcdb0 undefined
// GLOBAL DAT_003dcdf8 undefined
// GLOBAL DAT_003dce40 undefined
// GLOBAL DAT_003dce88 undefined
// GLOBAL DAT_003dced0 undefined
// GLOBAL DAT_003dcf18 undefined
// GLOBAL DAT_003dd0e8 undefined
// GLOBAL DAT_003dd168 undefined
// GLOBAL DAT_003dffc8 undefined
// GLOBAL DAT_003e26b0 undefined

void FUN_0015d958(int *param_1,undefined8 param_2,long *param_3,int param_4,long *param_5,
                 int param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  piVar11 = (int *)param_2;
  uVar1 = *(ushort *)(piVar11 + 0x18);
  param_1[0x27] = 0;
  param_1[0x26] = (uint)uVar1;
  param_1[0x25] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[3] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x28] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar5 = FUN_00107ce8(0x40f0f0);
  if (0 < param_1[0x26]) {
    iVar6 = FUN_00107d20(param_1[0x26] << 2);
    param_1[0x25] = iVar6;
  }
  FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
  if (*(ushort *)((int)piVar11 + 0x62) == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x1a);
  }
  else {
    iVar6 = FUN_00107d20((uint)*(ushort *)((int)piVar11 + 0x62) << 2);
    param_1[2] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x1a);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x1b);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[4] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x1b);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x6a);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[5] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x6a);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x19);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[6] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x19);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x66);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[7] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x66);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x72);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[8] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x72);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x7e);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[9] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x7e);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x6e);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0xf] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x6e);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x76);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0xb] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x76);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x1e);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0xc] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x1e);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x7a);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0xd] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x7a);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x1f);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0xe] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x1f);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x20);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[10] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x20);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x21);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0x10] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x21);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x86);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    *param_1 = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x86);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)(piVar11 + 0x22);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0x11] = iVar6;
    uVar1 = *(ushort *)(piVar11 + 0x22);
  }
  if (uVar1 == 0) {
    uVar1 = *(ushort *)((int)piVar11 + 0x8a);
  }
  else {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0x12] = iVar6;
    uVar1 = *(ushort *)((int)piVar11 + 0x8a);
  }
  if (uVar1 != 0) {
    iVar6 = FUN_00107d20((uint)uVar1 << 2);
    param_1[0x13] = iVar6;
  }
  iVar6 = 0;
  FUN_0012f060(DAT_0040f538,*(undefined1 *)((int)piVar11 + 0x82));
  if (0 < *piVar11) {
    iVar9 = piVar11[1];
    do {
      puVar10 = (undefined4 *)(iVar9 + iVar6 * 0x10);
      switch(*puVar10) {
      default:
        goto switchD_0015dccc_caseD_0;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x48);
        iVar9 = param_1[0x19];
        iVar3 = param_1[9];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dd168;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001743f0(uVar8,*(undefined1 *)(puVar10[1] + 4));
        param_1[0x19] = param_1[0x19] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0xb:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x160);
        iVar9 = param_1[3];
        iVar3 = param_1[2];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc010;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00169ef8(uVar8,*(undefined1 *)(puVar10[1] + 4));
        iVar9 = param_1[3];
        goto LAB_0015dde0;
      case 0xc:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x170);
        iVar9 = param_1[3];
        iVar3 = param_1[2];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbf48;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_0016a7a0(uVar8,*(undefined1 *)(puVar10[1] + 4));
        iVar9 = param_1[3];
LAB_0015dde0:
        param_1[3] = iVar9 + 1;
        goto switchD_0015dccc_caseD_0;
      case 0xf:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x20);
        iVar9 = param_1[0x15];
        iVar3 = param_1[5];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc0d0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001650b8(uVar8,*(undefined1 *)(puVar10[1] + 4));
        param_1[0x15] = param_1[0x15] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x10:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x14];
        iVar3 = param_1[4];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc130;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001651d0(uVar8,*(undefined1 *)(puVar10[1] + 4));
        param_1[0x14] = param_1[0x14] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x11:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x20);
        iVar9 = param_1[0x16];
        iVar3 = param_1[6];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc100;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001652f0(uVar8,*(undefined1 *)(puVar10[1] + 4));
        param_1[0x16] = param_1[0x16] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x12:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x90);
        iVar9 = param_1[0x21];
        iVar3 = param_1[0x10];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003db828;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00163cc8(uVar8,*(undefined1 *)(puVar10[1] + 4));
        param_1[0x21] = param_1[0x21] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x13:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x60);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc200;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00162160(uVar8,*(undefined1 *)(puVar10[1] + 4));
        iVar9 = param_1[0x17];
        break;
      case 0x14:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0xa0);
        iVar9 = param_1[0x18];
        iVar3 = param_1[8];
        iVar7 = (int)uVar8;
        *(undefined **)(iVar7 + 0x10) = &DAT_003dbea0;
        *(undefined **)(iVar7 + 0x50) = &DAT_003dffc8;
        *(int *)(iVar9 * 4 + iVar3) = iVar7;
        FUN_001625e0(uVar8);
        param_1[0x18] = param_1[0x18] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x15:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x70);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbe68;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160f20(uVar8,*(undefined1 *)(puVar10[1] + 4));
        iVar9 = param_1[0x17];
        break;
      case 0x16:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        iVar7 = FUN_00107cf8(0x40);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)(iVar7 + 0x10) = &DAT_003db7a8;
        *(undefined **)(iVar7 + 0x20) = &DAT_003e26b0;
        *(undefined1 *)(iVar7 + 0x24) = 0;
        *(int *)(iVar9 * 4 + iVar3) = iVar7;
        (**(code **)(*(int *)(iVar7 + 0x10) + 0x34))
                  (iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 0x30),*(undefined1 *)(puVar10[1] + 4)
                  );
        iVar9 = param_1[0x17];
        break;
      case 0x17:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        iVar7 = FUN_00107cf8(0x30);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)(iVar7 + 0x10) = &DAT_003db758;
        *(int *)(iVar9 * 4 + iVar3) = iVar7;
        (**(code **)(*(int *)(iVar7 + 0x10) + 0x34))
                  (iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 0x30),*(undefined1 *)(puVar10[1] + 4)
                  );
        iVar9 = param_1[0x17];
        break;
      case 0x18:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        iVar7 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)(iVar7 + 0x10) = &DAT_003db708;
        *(int *)(iVar9 * 4 + iVar3) = iVar7;
        (**(code **)(*(int *)(iVar7 + 0x10) + 0x34))
                  (iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 0x30),*(undefined1 *)(puVar10[1] + 4)
                  );
        iVar9 = param_1[0x17];
        break;
      case 0x19:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbd88;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00161920(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x1a:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbd50;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00161aa8(uVar8,*(undefined1 *)(puVar10[1] + 4));
        iVar9 = param_1[0x17];
        break;
      case 0x1b:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbf10;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00161ed0(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x1c:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbe30;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x1d:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbdc0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x1e:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x23];
        iVar3 = param_1[0x12];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc588;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        param_1[0x23] = param_1[0x23] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x1f:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbce0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x20:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbca8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x22:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbdf8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x23:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbed8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00163230(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x24:
        FUN_0012f208(DAT_0040f538,*(undefined8 *)(puVar10 + 2),*(undefined8 *)puVar10[1]);
        iVar9 = *piVar11;
        goto LAB_0015eef0;
      case 0x25:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbc38;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00162738(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x26:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbc00;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001628c8(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x27:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbbc8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00162a40(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x28:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbb90;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00162f08(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x29:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbb58;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00162cf0(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x2a:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003db6d0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_0016ac98(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x2b:
        FUN_0014ec08(param_1 + param_1[0x28] * 4 + 0x2c);
        param_1[0x28] = param_1[0x28] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x2d:
        uVar2 = puVar10[1];
        plVar4 = param_3;
        iVar9 = param_4;
        if (0 < param_4) {
          do {
            if (*plVar4 == *(long *)(puVar10 + 2)) {
              FUN_0014c548(plVar4,uVar2);
              FUN_0014c550(plVar4);
              *(long **)(param_1[0x27] * 4 + param_1[0x25]) = plVar4;
              param_1[0x27] = param_1[0x27] + 1;
            }
            iVar9 = iVar9 + -1;
            plVar4 = plVar4 + 0x3a;
          } while (iVar9 != 0);
        }
        iVar9 = param_6;
        plVar4 = param_5;
        if (param_6 < 1) goto switchD_0015dccc_caseD_0;
        do {
          if (*plVar4 == *(long *)(puVar10 + 2)) {
            FUN_0014c548(plVar4,uVar2);
            FUN_0014c550(plVar4);
            *(long **)(param_1[0x27] * 4 + param_1[0x25]) = plVar4;
            param_1[0x27] = param_1[0x27] + 1;
          }
          iVar9 = iVar9 + -1;
          plVar4 = plVar4 + 0x40;
        } while (iVar9 != 0);
        iVar9 = *piVar11;
        goto LAB_0015eef0;
      case 0x2e:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x140);
        iVar9 = param_1[0x1a];
        iVar3 = param_1[0xb];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbaa0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00164e40(uVar8);
        param_1[0x1a] = param_1[0x1a] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x30:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x1a0);
        iVar9 = param_1[0x1c];
        iVar3 = param_1[0xd];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003db920;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00164248(uVar8);
        param_1[0x1c] = param_1[0x1c] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x31:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x1a0);
        iVar9 = param_1[0x1d];
        iVar3 = param_1[0xe];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003db860;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001648e0(uVar8);
        param_1[0x1d] = param_1[0x1d] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x32:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x1a0);
        uVar8 = FUN_00383b08(uVar8);
        *(int *)(param_1[0x1b] * 4 + param_1[0xc]) = (int)uVar8;
        FUN_001653f0(uVar8,*(undefined1 *)(puVar10[1] + 4));
        param_1[0x1b] = param_1[0x1b] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x34:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x50);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc5c0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00183578(uVar8,*(undefined1 *)(puVar10[1] + 4));
        iVar9 = param_1[0x17];
        break;
      case 0x36:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbd18;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00161d58(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x37:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x38);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dcf18;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00174cd8(uVar8,param_2,puVar10[1]);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x38:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0xa0);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dd0e8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00174dd0(uVar8);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x39:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x80,0);
        uVar2 = puVar10[1];
        uVar8 = FUN_00107cf8(0xb0);
        iVar9 = (int)uVar8;
        *(undefined **)(iVar9 + 0x10) = &DAT_003dced0;
        FUN_00175090(uVar8,*(undefined8 *)(puVar10 + 2),uVar2,param_2);
        *(int *)(param_1[0x1f] * 4 + param_1[0xf]) = iVar9;
        *(int *)(param_1[0x1e] * 4 + param_1[10]) = iVar9 + 0x28;
        param_1[0x1e] = param_1[0x1e] + 1;
        param_1[0x1f] = param_1[0x1f] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x3a:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x38);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dce88;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001751e0(uVar8,param_2,puVar10[1]);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x3b:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x30);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dce40;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001752d8(uVar8);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x3c:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x38);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dcdf8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00175348(uVar8,param_2,puVar10[1]);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x3d:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x30);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dcdb0;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00175440(uVar8);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x3e:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x38);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dcd68;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001754b0(uVar8,param_2,puVar10[1]);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x3f:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x30);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dcd20;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_001755a8(uVar8);
        iVar9 = param_1[0x1f];
        goto LAB_0015ee68;
      case 0x40:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x30);
        iVar9 = param_1[0x1f];
        iVar3 = param_1[0xf];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dccd8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00175648(uVar8);
        iVar9 = param_1[0x1f];
LAB_0015ee68:
        param_1[0x1f] = iVar9 + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x41:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x150);
        iVar9 = (int)uVar8;
        *(undefined **)(iVar9 + 0x10) = &DAT_003dc6b8;
        *(undefined **)(iVar9 + 0x80) = &DAT_003dc6e8;
        FUN_00153758(uVar8,*(undefined8 *)(puVar10 + 2),puVar10[1]);
        *(int *)(param_1[1] * 4 + *param_1) = iVar9;
        param_1[1] = param_1[1] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x42:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x28);
        iVar9 = param_1[0x17];
        iVar3 = param_1[7];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dbc70;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00160e70(uVar8);
        iVar9 = param_1[0x17];
        break;
      case 0x43:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x1c0);
        iVar9 = param_1[0x24];
        iVar3 = param_1[0x13];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003dc4c8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_0016c708(uVar8);
        param_1[0x24] = param_1[0x24] + 1;
        goto switchD_0015dccc_caseD_0;
      case 0x44:
        FUN_00107b78(0x40f0f0,DAT_0040f4a4,0x10,0);
        uVar8 = FUN_00107cf8(0x70);
        iVar9 = param_1[0x22];
        iVar3 = param_1[0x11];
        *(undefined **)((int)uVar8 + 0x10) = &DAT_003db7f8;
        *(int *)(iVar9 * 4 + iVar3) = (int)uVar8;
        FUN_00163de8(uVar8);
        param_1[0x22] = param_1[0x22] + 1;
        goto switchD_0015dccc_caseD_0;
      }
      param_1[0x17] = iVar9 + 1;
switchD_0015dccc_caseD_0:
      iVar9 = *piVar11;
LAB_0015eef0:
      iVar6 = iVar6 + 1;
      if (iVar9 <= iVar6) break;
      iVar9 = piVar11[1];
    } while( true );
  }
  FUN_00107b78(0x40f0f0,DAT_0040f4a4,uVar5,0);
  return;
}


// ==== FUN_0015ef48 @ 0015ef48 ====
// GLOBAL DAT_0040f4e4 int
// GLOBAL DAT_0040f514 undefined4
// GLOBAL DAT_0040f4d4 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4f4 undefined4

undefined4 FUN_0015ef48(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 auStack_280 [100];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  
  iVar11 = 0;
  iVar14 = 0;
  iVar13 = 0;
  iVar9 = 0;
  iStack_e8 = 0;
  uStack_f0 = param_3;
  uStack_ec = param_4;
  memset(auStack_280,0,400);
  iStack_e4 = 0;
  iStack_e0 = 0;
  iStack_dc = 0;
  iStack_d8 = 0;
  iStack_d4 = 0;
  iStack_d0 = 0;
  iStack_cc = 0;
  iStack_c8 = 0;
  iStack_c4 = 0;
  iStack_c0 = 0;
  iStack_bc = 0;
  iStack_b8 = 0;
  iStack_b4 = 0;
  iStack_b0 = 0;
  iStack_ac = 0;
  *(char *)(DAT_0040f4e4 + 0x5850) = (char)((*(char *)(DAT_0040f4e4 + 0x5850) + 1) % 3);
  piVar12 = (int *)param_2;
  piVar10 = (int *)param_1;
  if (0 < *piVar12) {
    iVar4 = piVar12[1];
    do {
      puVar8 = (undefined4 *)(iVar4 + iVar9 * 0x10);
      switch(*puVar8) {
      default:
        goto switchD_0015f044_caseD_0;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        iVar4 = iVar14 * 4;
        iVar14 = iVar14 + 1;
        FUN_00174430(*(undefined4 *)(iVar4 + piVar10[9]),*(undefined8 *)(puVar8 + 2),puVar8,param_2,
                     puVar8[1],uStack_f0);
        iVar4 = *piVar12;
        break;
      case 10:
        uVar6 = FUN_00138c40(DAT_0040f514,0x23);
        iVar4 = FUN_00138df8(DAT_0040f514,uVar6,*(undefined8 *)(puVar8[1] + 0x10),
                             *(undefined8 *)(puVar8 + 2),0x5446127297c60000,uStack_f0);
        *(undefined4 *)(iVar4 + 0x3a4) = 1;
        goto switchD_0015f044_caseD_0;
      case 0xb:
        iVar4 = iStack_e8 * 4;
        uVar7 = puVar8[1];
        iStack_e8 = iStack_e8 + 1;
        iVar4 = *(int *)(iVar4 + piVar10[2]);
        uVar6 = *(undefined8 *)(puVar8 + 2);
        goto LAB_0015f968;
      case 0xc:
        uVar7 = puVar8[1];
        uVar6 = *(undefined8 *)(puVar8 + 2);
        iVar4 = *(int *)(iStack_e8 * 4 + piVar10[2]);
        iStack_e8 = iStack_e8 + 1;
        iVar5 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0xb8);
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x10) + 0xbc);
        goto LAB_0015f974;
      case 0xf:
        iVar4 = iStack_dc * 4;
        iStack_dc = iStack_dc + 1;
        FUN_001650f8(*(undefined4 *)(iVar4 + piVar10[5]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x10:
        iVar4 = iStack_e4 * 4;
        iStack_e4 = iStack_e4 + 1;
        FUN_00165210(*(undefined4 *)(iVar4 + piVar10[4]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x11:
        iVar4 = iStack_e0 * 4;
        iStack_e0 = iStack_e0 + 1;
        FUN_00165330(*(undefined4 *)(iVar4 + piVar10[6]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x12:
        uVar7 = puVar8[1];
        uVar6 = *(undefined8 *)(puVar8 + 2);
        iVar4 = *(int *)(iStack_c0 * 4 + piVar10[0x10]);
        iStack_c0 = iStack_c0 + 1;
        iVar5 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0x28);
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x10) + 0x2c);
        goto LAB_0015f974;
      case 0x13:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_001621a8(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x14:
        iVar4 = iStack_d8 * 4;
        iStack_d8 = iStack_d8 + 1;
        FUN_00162600(*(undefined4 *)(iVar4 + piVar10[8]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x15:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00160f60(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x16:
        uVar7 = puVar8[1];
        uVar6 = *(undefined8 *)(puVar8 + 2);
        iVar4 = *(int *)(iVar11 * 4 + piVar10[7]);
        iVar11 = iVar11 + 1;
        iVar5 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0x38);
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x10) + 0x3c);
        goto LAB_0015f974;
      case 0x17:
        uVar7 = puVar8[1];
        uVar6 = *(undefined8 *)(puVar8 + 2);
        iVar4 = *(int *)(iVar11 * 4 + piVar10[7]);
        iVar11 = iVar11 + 1;
        iVar5 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0x38);
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x10) + 0x3c);
        goto LAB_0015f974;
      case 0x18:
        uVar7 = puVar8[1];
        uVar6 = *(undefined8 *)(puVar8 + 2);
        iVar4 = *(int *)(iVar11 * 4 + piVar10[7]);
        iVar11 = iVar11 + 1;
        iVar5 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0x38);
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x10) + 0x3c);
        goto LAB_0015f974;
      case 0x19:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00161940(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x1a:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00161af0(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     uStack_f0);
        iVar4 = *piVar12;
        break;
      case 0x1b:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00161ef0(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_1);
        iVar4 = *piVar12;
        break;
      case 0x1c:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_001615a8(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        puVar8 = auStack_280 + iStack_ac;
        iStack_ac = iStack_ac + 1;
        *puVar8 = *(undefined4 *)(iVar11 * 4 + piVar10[7] + -4);
        goto switchD_0015f044_caseD_0;
      case 0x1d:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_001631b0(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x1e:
        iVar4 = iStack_b4 * 4;
        iStack_b4 = iStack_b4 + 1;
        FUN_00161730(*(undefined4 *)(iVar4 + piVar10[0x12]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x1f:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00161418(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x20:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_001614e8(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x22:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00161660(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x23:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00163250(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x25:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00162758(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x26:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_001628e8(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x27:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00162a60(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_1);
        iVar4 = *piVar12;
        break;
      case 0x28:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00162f28(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_1);
        iVar4 = *piVar12;
        break;
      case 0x29:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00162d10(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_1);
        iVar4 = *piVar12;
        break;
      case 0x2a:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_0016acb8(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_1);
        iVar4 = *piVar12;
        break;
      case 0x2b:
        iVar4 = iStack_cc * 4;
        iStack_cc = iStack_cc + 1;
        FUN_0014ec10(*(undefined4 *)((undefined8 *)puVar8[1] + 2),piVar10 + iVar4 + 0x2c,
                     *(undefined8 *)puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x2c:
        bVar1 = false;
        iVar4 = *(int *)(DAT_0040f0e0 + 0x2014c);
        iVar5 = puVar8[1];
        if (iVar4 == 1) {
          bVar1 = (*(byte *)(iVar5 + 0x57) & 2) != 0;
        }
        else if (iVar4 < 2) {
          if (iVar4 == 0) {
            bVar1 = (*(byte *)(iVar5 + 0x57) & 1) != 0;
          }
        }
        else if (iVar4 < 4) {
          bVar1 = (*(byte *)(iVar5 + 0x57) & 4) != 0;
        }
        if (!bVar1) goto switchD_0015f044_caseD_0;
        FUN_00126710(DAT_0040f4e4,*(undefined8 *)(puVar8 + 2));
        iVar4 = *piVar12;
        break;
      case 0x2d:
        if (*(char *)(puVar8[1] + 0x1e) != '\x01') goto switchD_0015f044_caseD_0;
        FUN_00175980(DAT_0040f4d4 + 0xa48,*(undefined8 *)(puVar8 + 2),1);
        iVar4 = *piVar12;
        break;
      case 0x2e:
        iVar4 = iStack_d4 * 4;
        iStack_d4 = iStack_d4 + 1;
        FUN_00164e50(*(undefined4 *)(iVar4 + piVar10[0xb]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x2f:
        FUN_001dc690(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x30:
        uVar7 = puVar8[1];
        uVar6 = *(undefined8 *)(puVar8 + 2);
        iVar4 = *(int *)(iStack_c8 * 4 + piVar10[0xd]);
        iStack_c8 = iStack_c8 + 1;
        goto LAB_0015f968;
      case 0x31:
        iVar4 = iStack_c4 * 4;
        uVar7 = puVar8[1];
        iStack_c4 = iStack_c4 + 1;
        iVar4 = *(int *)(iVar4 + piVar10[0xe]);
        uVar6 = *(undefined8 *)(puVar8 + 2);
        goto LAB_0015f968;
      case 0x32:
        iVar4 = iStack_d0 * 4;
        uVar7 = puVar8[1];
        iStack_d0 = iStack_d0 + 1;
        iVar4 = *(int *)(iVar4 + piVar10[0xc]);
        uVar6 = *(undefined8 *)(puVar8 + 2);
        goto LAB_0015f968;
      case 0x34:
        uVar7 = *(undefined4 *)(iVar11 * 4 + piVar10[7]);
        iVar11 = iVar11 + 1;
        iVar4 = 0;
        FUN_001835b8(uVar7,*(undefined8 *)(puVar8 + 2),puVar8[1]);
        if (piVar10[0x1e] < 1) {
          iVar4 = *piVar12;
        }
        else {
          iVar5 = piVar10[10];
          while( true ) {
            iVar2 = iVar4 * 4;
            iVar4 = iVar4 + 1;
            FUN_001836a8(*(undefined4 *)(iVar2 + iVar5),uVar7);
            if (piVar10[0x1e] <= iVar4) break;
            iVar5 = piVar10[10];
          }
          iVar4 = *piVar12;
        }
        break;
      case 0x35:
        uVar7 = puVar8[1];
        uVar6 = FUN_00107cf8(0xc);
        FUN_00174858(uVar6,uVar7,piVar10[0x25],piVar10[0x27]);
        FUN_0017bdc0(DAT_0040f4d4 + 0xcd4,uStack_ec,uVar6);
switchD_0015f044_caseD_0:
        iVar4 = *piVar12;
        break;
      case 0x36:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_00161d78(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x37:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_00174d48(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x38:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_00174df0(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x39:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_001750e8(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x3a:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_00175250(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x3b:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_001752f8(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x3c:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_001753b8(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x3d:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_00175460(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x3e:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_00175520(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x3f:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_001755c8(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x40:
        iVar4 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        FUN_00175668(*(undefined4 *)(iVar4 + piVar10[0xf]),*(undefined8 *)(puVar8 + 2),puVar8[1],
                     param_2);
        iVar4 = *piVar12;
        break;
      case 0x41:
        iVar4 = iStack_bc * 4;
        iStack_bc = iStack_bc + 1;
        FUN_00153b60(*(undefined4 *)(iVar4 + *piVar10),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x42:
        iVar4 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        FUN_001630e8(*(undefined4 *)(iVar4 + piVar10[7]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
        break;
      case 0x43:
        iVar4 = iStack_b0 * 4;
        uVar7 = puVar8[1];
        iStack_b0 = iStack_b0 + 1;
        iVar4 = *(int *)(iVar4 + piVar10[0x13]);
        uVar6 = *(undefined8 *)(puVar8 + 2);
LAB_0015f968:
        iVar5 = (int)*(short *)(*(int *)(iVar4 + 0x10) + 0xb0);
        pcVar3 = *(code **)(*(int *)(iVar4 + 0x10) + 0xb4);
LAB_0015f974:
        (*pcVar3)(iVar4 + iVar5,uVar6,uVar7);
        iVar4 = *piVar12;
        break;
      case 0x44:
        iVar4 = iStack_b8 * 4;
        iStack_b8 = iStack_b8 + 1;
        FUN_00163e08(*(undefined4 *)(iVar4 + piVar10[0x11]),*(undefined8 *)(puVar8 + 2),puVar8[1]);
        iVar4 = *piVar12;
      }
      iVar9 = iVar9 + 1;
      if (iVar4 <= iVar9) break;
      iVar4 = piVar12[1];
    } while( true );
  }
  FUN_00166d50(DAT_0040f4f4,piVar10[9],*(undefined2 *)((int)piVar12 + 0x72));
  FUN_00166c30(DAT_0040f4f4,piVar10[2],*(undefined2 *)((int)piVar12 + 0x62));
  FUN_00166c60(DAT_0040f4f4,piVar10[5],(short)piVar12[0x1b]);
  FUN_00166c90(DAT_0040f4f4,piVar10[4],(short)piVar12[0x1a]);
  FUN_00166cc0(DAT_0040f4f4,piVar10[6],*(undefined2 *)((int)piVar12 + 0x6a));
  FUN_00166cf0(DAT_0040f4f4,piVar10[7],(short)piVar12[0x19]);
  FUN_00166d20(DAT_0040f4f4,piVar10[8],*(undefined2 *)((int)piVar12 + 0x66));
  FUN_00166d80(DAT_0040f4f4,piVar10[0xb],*(undefined2 *)((int)piVar12 + 0x6e));
  FUN_00166db0(DAT_0040f4f4,piVar10[0xc],*(undefined2 *)((int)piVar12 + 0x76));
  FUN_00166de0(DAT_0040f4f4,piVar10[0xd],(short)piVar12[0x1e]);
  FUN_00166e10(DAT_0040f4f4,piVar10[0xe],*(undefined2 *)((int)piVar12 + 0x7a));
  FUN_00166c00(DAT_0040f4f4,piVar10[0x25],piVar10[0x27]);
  FUN_00166e40(DAT_0040f4f4,piVar10[0x10],(short)piVar12[0x20]);
  FUN_00166e70(DAT_0040f4f4,*piVar10,(short)piVar12[0x21]);
  FUN_00166ea0(DAT_0040f4f4,piVar10[0xf],*(undefined2 *)((int)piVar12 + 0x7e));
  FUN_00166ed0(DAT_0040f4f4,piVar10[0x11],*(undefined2 *)((int)piVar12 + 0x86));
  FUN_00166f00(DAT_0040f4f4,piVar10[0x12],(short)piVar12[0x22]);
  FUN_00166f30(DAT_0040f4f4,piVar10[0x13],*(undefined2 *)((int)piVar12 + 0x8a));
  FUN_00176fb0(DAT_0040f4d4 + 0x112c,piVar10[10],(short)piVar12[0x1f]);
  FUN_00167208(DAT_0040f4f4);
  FUN_001604a0(param_1,auStack_280,iStack_ac);
  return 1;
}


// ==== FUN_0015fdc0 @ 0015fdc0 ====
// GLOBAL DAT_0040f4f4 undefined4

undefined4 FUN_0015fdc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[3]) {
    iVar2 = param_1[2];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[3] <= iVar3) break;
      iVar2 = param_1[2];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x14]) {
    iVar2 = param_1[4];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x14] <= iVar3) break;
      iVar2 = param_1[4];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x16]) {
    iVar2 = param_1[6];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x16] <= iVar3) break;
      iVar2 = param_1[6];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x15]) {
    iVar2 = param_1[5];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x15] <= iVar3) break;
      iVar2 = param_1[5];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x17]) {
    iVar2 = param_1[7];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x17] <= iVar3) break;
      iVar2 = param_1[7];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x18]) {
    iVar2 = param_1[8];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x18] <= iVar3) break;
      iVar2 = param_1[8];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x19]) {
    iVar2 = param_1[9];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x19] <= iVar3) break;
      iVar2 = param_1[9];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x1a]) {
    iVar2 = param_1[0xb];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x1a] <= iVar3) break;
      iVar2 = param_1[0xb];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x1b]) {
    iVar2 = param_1[0xc];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x1b] <= iVar3) break;
      iVar2 = param_1[0xc];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x1c]) {
    iVar2 = param_1[0xd];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x1c] <= iVar3) break;
      iVar2 = param_1[0xd];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x1d]) {
    iVar2 = param_1[0xe];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x1d] <= iVar3) break;
      iVar2 = param_1[0xe];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x1f]) {
    iVar2 = param_1[0xf];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x1f] <= iVar3) break;
      iVar2 = param_1[0xf];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x21]) {
    iVar2 = param_1[0x10];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x21] <= iVar3) break;
      iVar2 = param_1[0x10];
    }
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = *param_1;
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[1] <= iVar3) break;
      iVar2 = *param_1;
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x22]) {
    iVar2 = param_1[0x11];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x22] <= iVar3) break;
      iVar2 = param_1[0x11];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x23]) {
    iVar2 = param_1[0x12];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x23] <= iVar3) break;
      iVar2 = param_1[0x12];
    }
  }
  iVar3 = 0;
  if (0 < param_1[0x24]) {
    iVar2 = param_1[0x13];
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20));
      if (param_1[0x24] <= iVar3) break;
      iVar2 = param_1[0x13];
    }
  }
  FUN_00167108(DAT_0040f4f4,param_1[9]);
  FUN_00166f80(DAT_0040f4f4,param_1[2]);
  FUN_00166fa0(DAT_0040f4f4,param_1[5]);
  FUN_00166fc0(DAT_0040f4f4,param_1[4]);
  FUN_00166fe0(DAT_0040f4f4,param_1[6]);
  FUN_00167000(DAT_0040f4f4,param_1[7]);
  FUN_00167088(DAT_0040f4f4,param_1[8]);
  FUN_00167128(DAT_0040f4f4,param_1[0xb]);
  FUN_001670a8(DAT_0040f4f4,param_1[0xc]);
  FUN_001670c8(DAT_0040f4f4,param_1[0xd]);
  FUN_001670e8(DAT_0040f4f4,param_1[0xe]);
  FUN_00167168(DAT_0040f4f4,param_1[0x10]);
  FUN_00167188(DAT_0040f4f4,*param_1);
  FUN_001671a8(DAT_0040f4f4,param_1[0xf]);
  FUN_001671c8(DAT_0040f4f4,param_1[0x11]);
  FUN_001671e8(DAT_0040f4f4,param_1[0x12]);
  FUN_00166f60(DAT_0040f4f4,param_1[0x13]);
  FUN_00167148(DAT_0040f4f4,param_1[0x25]);
  return 1;
}


// ==== FUN_001603a0 @ 001603a0 ====
// GLOBAL DAT_0040f4d4 int

void FUN_001603a0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)param_2;
  if (0 < *piVar4) {
    iVar1 = piVar4[1];
    while( true ) {
      puVar2 = (uint *)(iVar1 + iVar3 * 0x10);
      if (*puVar2 < 3) {
        FUN_00172ed8(DAT_0040f4d4 + 0x22800,puVar2,param_2,param_3);
      }
      iVar3 = iVar3 + 1;
      if (*piVar4 <= iVar3) break;
      iVar1 = piVar4[1];
    }
  }
  return;
}


// ==== FUN_00160458 @ 00160458 ====

long * FUN_00160458(int param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    puVar1 = *(undefined4 **)(param_1 + 0x3c);
    do {
      iVar2 = iVar2 + 1;
      if (*(long *)*puVar1 == param_2) {
        return (long *)*puVar1;
      }
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x7c));
  }
  return (long *)0x0;
}


// ==== FUN_001604a0 @ 001604a0 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001604a0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar3 = *(int *)(param_1 + 0x94);
    while( true ) {
      iVar3 = *(int *)(iVar9 * 4 + iVar3);
      iVar9 = iVar9 + 1;
      if (*(int *)(iVar3 + 8) != 0) {
        iVar8 = 0;
        if (*(byte *)(iVar3 + 0xc) != 0) {
          iVar4 = 0;
          do {
            iVar8 = iVar8 + 1;
            iVar6 = 0;
            lVar7 = **(long **)(iVar4 + *(int *)(iVar3 + 8));
            if (0 < param_3) {
              iVar4 = 0;
              do {
                plVar2 = *(long **)(iVar4 + param_2);
                iVar6 = iVar6 + 1;
                if (lVar7 == *plVar2) {
                  iVar4 = *(int *)(DAT_0040f4d0 + 0x8f4);
                  piVar5 = *(int **)(DAT_0040f4d0 + 0x8f0);
                  if (0 < iVar4) {
                    do {
                      if (**(long **)(plVar2 + 4) == *(long *)*piVar5) {
                        bVar1 = *(byte *)(*piVar5 + 0x15);
                        if ((bVar1 & 2) == 0) {
                          if ((bVar1 & 4) == 0) {
                            if ((bVar1 & 8) == 0) {
                              if ((bVar1 & 0x10) == 0) {
                                if ((bVar1 & 0x20) == 0) {
                                  *(undefined1 *)(iVar3 + 0xd0) = 0x40;
                                }
                                else {
                                  *(undefined1 *)(iVar3 + 0xd0) = 0x20;
                                }
                              }
                              else {
                                *(undefined1 *)(iVar3 + 0xd0) = 0x10;
                              }
                            }
                            else {
                              *(undefined1 *)(iVar3 + 0xd0) = 8;
                            }
                          }
                          else {
                            *(undefined1 *)(iVar3 + 0xd0) = 4;
                          }
                        }
                        else {
                          *(undefined1 *)(iVar3 + 0xd0) = 2;
                        }
                      }
                      iVar4 = iVar4 + -1;
                      piVar5 = piVar5 + 3;
                    } while (iVar4 != 0);
                  }
                }
                iVar4 = iVar6 * 4;
              } while (iVar6 < param_3);
            }
            iVar4 = iVar8 * 4;
          } while (iVar8 < (int)(uint)*(byte *)(iVar3 + 0xc));
        }
      }
      if (*(int *)(param_1 + 0x9c) <= iVar9) break;
      iVar3 = *(int *)(param_1 + 0x94);
    }
  }
  return;
}


// ==== FUN_00160648 @ 00160648 ====

void FUN_00160648(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00107ce8(0x40f0f0);
  FUN_00107cc8(0x40f0f0,4);
  iVar3 = *param_2;
  piVar4 = (int *)param_1;
  piVar4[1] = iVar3;
  if (iVar3 == 0) {
    *piVar4 = 0;
  }
  else {
    iVar3 = FUN_00107d20(iVar3 * 0xc);
    *piVar4 = iVar3;
  }
  iVar3 = 0;
  if (0 < piVar4[1]) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar2 = *piVar4 + iVar5;
      iVar5 = iVar5 + 0xc;
      FUN_00160b30(iVar2,param_2[1] + iVar6);
      iVar6 = iVar6 + 0x18;
    } while (iVar3 < piVar4[1]);
  }
  FUN_00160950(param_1);
  FUN_00107cc8(0x40f0f0,uVar1);
  return;
}


