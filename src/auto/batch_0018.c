// ==== FUN_001cbed0 @ 001cbed0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cbed0(int param_1,int param_2,int param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  int iVar11;
  undefined8 extraout_v0_udw;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined *puVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 in_a2_udw;
  undefined4 uVar29;
  undefined4 in_register_0000006c;
  undefined4 uVar30;
  byte *pbVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  int iVar39;
  undefined4 *puVar40;
  int iVar41;
  uint uVar42;
  undefined1 in_vf0 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  if (param_4 == 0) {
    puVar26 = &DAT_003bcb08;
    pbVar31 = &DAT_003f42f0;
    uVar36 = 0;
  }
  else {
    iVar11 = (int)param_4;
    uVar36 = *(undefined1 *)(iVar11 + 0xd);
    puVar26 = (undefined *)(iVar11 + 1);
    pbVar31 = (byte *)(iVar11 + 10);
  }
  auVar45 = _lqc2(_DAT_00415b60);
  auVar44 = _qmtc2(0x3b80841f);
  auVar43._4_4_ = (float)pbVar31[1];
  auVar43._0_4_ = (float)*pbVar31;
  auVar43._8_4_ = (float)pbVar31[2];
  auVar43._12_4_ = 0;
  auVar43 = _lqc2(auVar43);
  auVar43 = _vmul(auVar43,auVar45);
  auVar43 = _vmulbc(auVar43,auVar44);
  auStack_80 = _sqc2(auVar43);
  FUN_001aebf8(param_1 + 0x10,puVar26,&uStack_b0,auStack_a0,auStack_90,uVar36);
  puVar26 = PTR_DAT_003bd238;
  auVar43 = _lqc2(auStack_90);
  if (cGpffff8200 != '\0') {
    auVar45 = _qmtc2(0x3fa00000);
    auVar43 = _vaddbc(auVar43,auVar45);
    auVar46 = _lqc2(auStack_a0);
    auVar43 = _vaddbc(in_vf0,auVar43);
    auVar44 = _qmtc2(0x3f000000);
    _sqc2(auVar43);
    auVar43 = _vaddbc(auVar43,auVar44);
    auVar44 = _vaddbc(auVar46,auVar45);
    auVar43 = _vaddbc(in_vf0,auVar43);
    auVar44 = _vaddbc(in_vf0,auVar44);
    auStack_90 = _sqc2(auVar43);
    auStack_a0 = _sqc2(auVar44);
  }
  auVar44 = _vaddbc(in_vf0,in_vf0);
  *(undefined4 *)(PTR_DAT_003bd238 + 0x10) = uStack_b0;
  *(undefined4 *)(puVar26 + 0x14) = uStack_ac;
  *(undefined4 *)(puVar26 + 0x18) = uStack_a8;
  *(undefined4 *)(puVar26 + 0x1c) = uStack_a4;
  puVar26 = PTR_DAT_003bd238;
  *(int *)(PTR_DAT_003bd238 + 0x30) = auStack_a0._0_4_;
  *(int *)(puVar26 + 0x34) = auStack_a0._4_4_;
  *(undefined4 *)(puVar26 + 0x38) = auStack_a0._8_4_;
  *(undefined4 *)(puVar26 + 0x3c) = auStack_a0._12_4_;
  puVar26 = PTR_DAT_003bd238;
  *(undefined4 *)(PTR_DAT_003bd238 + 0x50) = auStack_90._0_4_;
  *(undefined4 *)(puVar26 + 0x54) = auStack_90._4_4_;
  *(undefined4 *)(puVar26 + 0x58) = auStack_90._8_4_;
  *(undefined4 *)(puVar26 + 0x5c) = auStack_90._12_4_;
  puVar26 = PTR_DAT_003bd238;
  *(int *)(PTR_DAT_003bd238 + 0x20) = auStack_80._0_4_;
  *(int *)(puVar26 + 0x24) = auStack_80._4_4_;
  *(undefined4 *)(puVar26 + 0x28) = auStack_80._8_4_;
  *(undefined4 *)(puVar26 + 0x2c) = auStack_80._12_4_;
  auVar45 = _lqc2(auStack_90);
  auVar43 = _vmul(auVar45,auVar45);
  _vaddabc(auVar43,auVar43);
  auVar43 = _vmaddbc(auVar44,auVar43);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar43);
  auVar43 = _vaddbc(in_vf0,in_vf0);
  uVar47 = _vwaitq();
  auVar43 = _vmulq(auVar43,uVar47);
  auVar43 = _qmfc2(auVar43._0_4_);
  if (1.5258789e-05 < auVar43._0_4_) {
    auVar43 = _qmtc2(1.0 / auVar43._0_4_);
    auVar43 = _vmulbc(auVar45,auVar43);
  }
  else {
    auVar43 = _lqc2(_DAT_004432b0);
  }
  auVar43 = _sqc2(auVar43);
  *(undefined1 (*) [16])(PTR_DAT_003bd238 + 0x60) = auVar43;
  uVar47 = auStack_90._8_4_;
  uVar23 = auStack_90._12_4_;
  if (*(int *)(PTR_DAT_003bd238 + 0xc84) != 0) {
    FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                 *(int *)(PTR_DAT_003bd238 + 0xc84),1,0,0);
    FUN_002b3d88(0,3);
    auVar12._8_8_ = extraout_v0_udw;
    auVar12._0_8_ = 0x5000000200000000;
    auVar44._8_4_ = uStack_a8;
    auVar44._0_8_ = 0x10000002;
    auVar44._12_4_ = uStack_a4;
    auVar43 = _pcpyld(auVar12,auVar44);
    *DAT_0040e5f0 = auVar43._0_4_;
    DAT_0040e5f0[1] = auVar43._4_4_;
    DAT_0040e5f0[2] = auVar43._8_4_;
    DAT_0040e5f0[3] = auVar43._12_4_;
    auVar13._8_8_ = auVar43._8_8_;
    auVar13._0_8_ = 0xe;
    auVar45._8_4_ = uStack_a8;
    auVar45._0_8_ = 0x1000000000008001;
    auVar45._12_4_ = uStack_a4;
    auVar43 = _pcpyld(auVar13,auVar45);
    DAT_0040e5f0[4] = auVar43._0_4_;
    DAT_0040e5f0[5] = auVar43._4_4_;
    DAT_0040e5f0[6] = auVar43._8_4_;
    DAT_0040e5f0[7] = auVar43._12_4_;
    auVar14._8_8_ = auVar43._8_8_;
    auVar14._0_8_ = *(ulong *)(*(int *)(PTR_DAT_003bd238 + 0xc84) + 0x3c) | 0x1800000000;
    auVar46._8_4_ = in_a2_udw;
    auVar46._0_8_ = 6;
    auVar46._12_4_ = in_register_0000006c;
    auVar43 = _pcpyld(auVar46,auVar14);
    DAT_0040e5f0[8] = auVar43._0_4_;
    DAT_0040e5f0[9] = auVar43._4_4_;
    DAT_0040e5f0[10] = auVar43._8_4_;
    DAT_0040e5f0[0xb] = auVar43._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  }
  FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
  puVar40 = (undefined4 *)PTR_DAT_003bd238;
  iVar11 = *(int *)(PTR_DAT_003bd238 + 0xc80);
  iVar41 = iVar11 + 8;
  if (iVar41 != 0) {
    FUN_002b3d88(0,iVar41);
    iVar11 = iVar11 + 1;
    iVar39 = 0;
    if (0 < iVar11) {
      do {
        uVar17 = puVar40[4];
        uVar18 = puVar40[5];
        uVar19 = puVar40[6];
        uVar20 = puVar40[7];
        uVar21 = puVar40[8];
        uVar22 = puVar40[9];
        uVar47 = puVar40[10];
        uVar23 = puVar40[0xb];
        uVar24 = puVar40[0xc];
        uVar25 = puVar40[0xd];
        in_a1_udw = puVar40[0xe];
        in_register_0000005c = puVar40[0xf];
        uVar27 = puVar40[0x10];
        uVar28 = puVar40[0x11];
        uVar29 = puVar40[0x12];
        uVar30 = puVar40[0x13];
        uVar3 = *(undefined8 *)(puVar40 + 0x14);
        uVar32 = puVar40[0x16];
        uVar33 = puVar40[0x17];
        uVar4 = *(undefined8 *)(puVar40 + 0x18);
        uVar34 = puVar40[0x1a];
        uVar35 = puVar40[0x1b];
        uVar5 = *(undefined8 *)(puVar40 + 0x1c);
        uVar37 = puVar40[0x1e];
        uVar38 = puVar40[0x1f];
        uVar6 = *puVar40;
        uVar7 = puVar40[1];
        uVar8 = puVar40[2];
        uVar9 = puVar40[3];
        puVar40 = puVar40 + 0x20;
        *DAT_0040e5f0 = uVar6;
        DAT_0040e5f0[1] = uVar7;
        DAT_0040e5f0[2] = uVar8;
        DAT_0040e5f0[3] = uVar9;
        DAT_0040e5f0[4] = uVar17;
        DAT_0040e5f0[5] = uVar18;
        DAT_0040e5f0[6] = uVar19;
        DAT_0040e5f0[7] = uVar20;
        DAT_0040e5f0[8] = uVar21;
        DAT_0040e5f0[9] = uVar22;
        DAT_0040e5f0[10] = uVar47;
        DAT_0040e5f0[0xb] = uVar23;
        DAT_0040e5f0[0xc] = uVar24;
        DAT_0040e5f0[0xd] = uVar25;
        DAT_0040e5f0[0xe] = in_a1_udw;
        DAT_0040e5f0[0xf] = in_register_0000005c;
        DAT_0040e5f0[0x10] = uVar27;
        DAT_0040e5f0[0x11] = uVar28;
        DAT_0040e5f0[0x12] = uVar29;
        DAT_0040e5f0[0x13] = uVar30;
        DAT_0040e5f0[0x14] = (int)uVar3;
        DAT_0040e5f0[0x15] = (int)((ulong)uVar3 >> 0x20);
        DAT_0040e5f0[0x16] = uVar32;
        DAT_0040e5f0[0x17] = uVar33;
        DAT_0040e5f0[0x18] = (int)uVar4;
        DAT_0040e5f0[0x19] = (int)((ulong)uVar4 >> 0x20);
        DAT_0040e5f0[0x1a] = uVar34;
        DAT_0040e5f0[0x1b] = uVar35;
        DAT_0040e5f0[0x1c] = (int)uVar5;
        DAT_0040e5f0[0x1d] = (int)((ulong)uVar5 >> 0x20);
        DAT_0040e5f0[0x1e] = uVar37;
        DAT_0040e5f0[0x1f] = uVar38;
        iVar39 = iVar39 + 8;
        DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
      } while (iVar39 < iVar11);
    }
    iVar11 = iVar41 - iVar39;
    if (iVar39 < iVar41) {
      do {
        uVar6 = *puVar40;
        uVar7 = puVar40[1];
        uVar8 = puVar40[2];
        uVar9 = puVar40[3];
        puVar40 = puVar40 + 4;
        *DAT_0040e5f0 = uVar6;
        DAT_0040e5f0[1] = uVar7;
        DAT_0040e5f0[2] = uVar8;
        DAT_0040e5f0[3] = uVar9;
        iVar11 = iVar11 + -1;
        DAT_0040e5f0 = DAT_0040e5f0 + 4;
      } while (iVar11 != 0);
    }
  }
  FUN_002b3d88(0,3);
  param_2 = param_3 * 0x30 + param_2;
  auVar15._8_8_ = extraout_v0_udw_00;
  auVar15._0_8_ = 0x6c0203ec01000404;
  auVar2._8_4_ = in_a1_udw;
  auVar2._0_8_ = 0x10000002;
  auVar2._12_4_ = in_register_0000005c;
  auVar43 = _pcpyld(auVar15,auVar2);
  *DAT_0040e5f0 = auVar43._0_4_;
  DAT_0040e5f0[1] = auVar43._4_4_;
  DAT_0040e5f0[2] = auVar43._8_4_;
  DAT_0040e5f0[3] = auVar43._12_4_;
  auVar43 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
  auVar43 = _qmfc2(auVar43._0_4_);
  uVar42 = *(uint *)(param_2 + 0x20);
  auVar10._4_8_ = 0;
  auVar10._0_4_ = uVar42;
  auVar10._12_4_ = auVar43._0_4_;
  DAT_0040e5f0[4] = uVar42;
  DAT_0040e5f0[5] = 0;
  DAT_0040e5f0[6] = 0;
  DAT_0040e5f0[7] = auVar43._0_4_;
  auVar16._8_8_ = auVar10._8_8_;
  auVar16._0_8_ = 0x302e400000000000;
  auVar1._8_4_ = uVar47;
  auVar1._0_8_ = 0x412;
  auVar1._12_4_ = uVar23;
  auVar43 = _pcpyld(auVar1,auVar16);
  DAT_0040e5f0[8] = auVar43._0_4_;
  DAT_0040e5f0[9] = auVar43._4_4_;
  DAT_0040e5f0[10] = auVar43._8_4_;
  DAT_0040e5f0[0xb] = auVar43._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_001cc350 @ 001cc350 ====

void FUN_001cc350(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cc3a0 @ 001cc3a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cc3a0(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined1 auVar10 [16];
  undefined8 in_v1_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong in_a0_udw;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 (*pauVar23) [16];
  undefined8 in_a2_udw;
  undefined1 (*pauVar24) [16];
  int iVar25;
  int iVar26;
  undefined8 in_t0_udw;
  int *piVar27;
  long lVar28;
  undefined1 in_vf0 [16];
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  pauVar23 = (undefined1 (*) [16])param_3;
  if (param_3 != 0) {
    auVar32 = _lqc2(*pauVar23);
    auVar33 = _lqc2(pauVar23[1]);
    auVar34 = _lqc2(pauVar23[2]);
    _vmove(auVar32);
    _vmove(auVar33);
    auVar36 = _vaddbc(in_vf0,auVar33);
    auVar35 = _vaddbc(in_vf0,auVar32);
    _vmove(auVar34);
    auVar37 = _vaddbc(in_vf0,auVar32);
    _vmove(auVar36);
    _vmove(auVar35);
    auVar39 = _vaddbc(in_vf0,auVar34);
    auVar31 = _lqc2(pauVar23[3]);
    auVar40 = _vaddbc(in_vf0,auVar34);
    _vmove(auVar37);
    auVar30 = _vmulbc(auVar39,auVar31);
    auVar38 = _vaddbc(in_vf0,auVar33);
    auVar29 = _vmulbc(auVar40,auVar31);
    auVar30 = _vadd(auVar30,auVar29);
    auVar29 = _vmulbc(auVar38,auVar31);
    _sqc2(auVar32);
    auVar29 = _vadd(auVar30,auVar29);
    _sqc2(auVar33);
    auVar29 = _vsub(in_vf0,auVar29);
    _sqc2(auVar34);
    _sqc2(auVar31);
    _sqc2(auVar36);
    _sqc2(auVar35);
    _sqc2(auVar37);
    auStack_170 = _sqc2(auVar29);
    auStack_1a0 = _sqc2(auVar39);
    auStack_190 = _sqc2(auVar40);
    auStack_180 = _sqc2(auVar38);
  }
  auVar29._8_8_ = in_v1_udw;
  auVar29._0_8_ = 0x410000;
  if (DAT_0040e064 != &DAT_003a0dd0) {
    DAT_0040e064 = &DAT_003a0dd0;
    FUN_002b3d88(0,0x13);
    auVar11._8_8_ = auVar29._8_8_;
    auVar20._8_8_ = in_a0_udw;
    auVar20._0_8_ = 0x3a0dd050000000;
    auVar11._0_8_ = 0x300000011000000;
    auVar29 = _pcpyld(auVar11,auVar20);
    *DAT_0040e5f0 = auVar29._0_4_;
    DAT_0040e5f0[1] = auVar29._4_4_;
    DAT_0040e5f0[2] = auVar29._8_4_;
    DAT_0040e5f0[3] = auVar29._12_4_;
    auVar21._8_8_ = auVar29._8_8_;
    auVar21._0_8_ = 0x10000000;
    auVar12._8_8_ = auVar11._8_8_;
    auVar12._0_8_ = 0x1400000002000090;
    auVar29 = _pcpyld(auVar12,auVar21);
    DAT_0040e5f0[4] = auVar29._0_4_;
    DAT_0040e5f0[5] = auVar29._4_4_;
    DAT_0040e5f0[6] = auVar29._8_4_;
    DAT_0040e5f0[7] = auVar29._12_4_;
    in_a0_udw = auVar29._8_8_;
    auVar13._8_8_ = auVar11._8_8_;
    auVar13._0_8_ = 0x6c02030101000404;
    auVar30._8_8_ = in_t0_udw;
    auVar30._0_8_ = 0x10000002;
    auVar29 = _pcpyld(auVar13,auVar30);
    DAT_0040e5f0[8] = auVar29._0_4_;
    DAT_0040e5f0[9] = auVar29._4_4_;
    DAT_0040e5f0[10] = auVar29._8_4_;
    DAT_0040e5f0[0xb] = auVar29._12_4_;
    DAT_0040e5f0[0xc] = 0x3f800000;
    DAT_0040e5f0[0xd] = 0x3f800000;
    DAT_0040e5f0[0xe] = 0x3f800000;
    DAT_0040e5f0[0xf] = 0x3f800000;
    DAT_0040e5f0[0x10] = 0x3f800000;
    DAT_0040e5f0[0x11] = 0x3f800000;
    DAT_0040e5f0[0x12] = 0x3f800000;
    DAT_0040e5f0[0x13] = 0x3f800000;
    auVar14._8_8_ = 0x3f8000003f800000;
    auVar14._0_8_ = 0x6c02030801000404;
    auVar31._8_8_ = in_t0_udw;
    auVar31._0_8_ = 0x10000002;
    auVar29 = _pcpyld(auVar14,auVar31);
    DAT_0040e5f0[0x14] = auVar29._0_4_;
    DAT_0040e5f0[0x15] = auVar29._4_4_;
    DAT_0040e5f0[0x16] = auVar29._8_4_;
    DAT_0040e5f0[0x17] = auVar29._12_4_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = in_a0_udw;
    auVar15._8_8_ = 0x3f8000003f800000;
    auVar15._0_8_ = 0x412;
    auVar32._8_8_ = in_t0_udw;
    auVar32._0_8_ = 0x302e400000000000;
    auVar29 = _pcpyld(auVar15,auVar32);
    DAT_0040e5f0[0x18] = auVar29._0_4_;
    DAT_0040e5f0[0x19] = auVar29._4_4_;
    DAT_0040e5f0[0x1a] = auVar29._8_4_;
    DAT_0040e5f0[0x1b] = auVar29._12_4_;
    auVar33._8_8_ = in_t0_udw;
    auVar33._0_8_ = 0x312e400000000000;
    auVar29 = _pcpyld(auVar15,auVar33);
    DAT_0040e5f0[0x1c] = auVar29._0_4_;
    DAT_0040e5f0[0x1d] = auVar29._4_4_;
    DAT_0040e5f0[0x1e] = auVar29._8_4_;
    DAT_0040e5f0[0x1f] = auVar29._12_4_;
    auVar16._8_8_ = 0x3f8000003f800000;
    auVar16._0_8_ = 0x6c02030f01000404;
    auVar34._8_8_ = in_t0_udw;
    auVar34._0_8_ = 0x10000002;
    auVar29 = _pcpyld(auVar16,auVar34);
    DAT_0040e5f0[0x20] = auVar29._0_4_;
    DAT_0040e5f0[0x21] = auVar29._4_4_;
    DAT_0040e5f0[0x22] = auVar29._8_4_;
    DAT_0040e5f0[0x23] = auVar29._12_4_;
    DAT_0040e5f0[0x24] = 0;
    DAT_0040e5f0[0x25] = 0;
    DAT_0040e5f0[0x26] = 0;
    DAT_0040e5f0[0x27] = 0;
    DAT_0040e5f0[0x28] = 0;
    DAT_0040e5f0[0x29] = 0;
    DAT_0040e5f0[0x2a] = 0;
    DAT_0040e5f0[0x2b] = 0;
    auVar35._8_8_ = in_t0_udw;
    auVar35._0_8_ = 0x10000007;
    auVar29 = _pcpyld(ZEXT816(0x5000000700000000),auVar35);
    DAT_0040e5f0[0x2c] = auVar29._0_4_;
    DAT_0040e5f0[0x2d] = auVar29._4_4_;
    DAT_0040e5f0[0x2e] = auVar29._8_4_;
    DAT_0040e5f0[0x2f] = auVar29._12_4_;
    auVar36._8_8_ = in_t0_udw;
    auVar36._0_8_ = 0x1000000000008006;
    auVar29 = _pcpyld(ZEXT816(0xe),auVar36);
    DAT_0040e5f0[0x30] = auVar29._0_4_;
    DAT_0040e5f0[0x31] = auVar29._4_4_;
    DAT_0040e5f0[0x32] = auVar29._8_4_;
    DAT_0040e5f0[0x33] = auVar29._12_4_;
    auVar37._8_8_ = in_t0_udw;
    auVar37._0_8_ = 0x50003;
    auVar29 = _pcpyld(ZEXT816(0x47),auVar37);
    DAT_0040e5f0[0x34] = auVar29._0_4_;
    DAT_0040e5f0[0x35] = auVar29._4_4_;
    DAT_0040e5f0[0x36] = auVar29._8_4_;
    DAT_0040e5f0[0x37] = auVar29._12_4_;
    auVar38._8_8_ = in_t0_udw;
    auVar38._0_8_ = 0x51001;
    auVar29 = _pcpyld(ZEXT816(0x48),auVar38);
    DAT_0040e5f0[0x38] = auVar29._0_4_;
    DAT_0040e5f0[0x39] = auVar29._4_4_;
    DAT_0040e5f0[0x3a] = auVar29._8_4_;
    DAT_0040e5f0[0x3b] = auVar29._12_4_;
    auVar39._8_8_ = in_t0_udw;
    auVar39._0_8_ = 0x80000000a8;
    auVar29 = _pcpyld(ZEXT816(0x42),auVar39);
    DAT_0040e5f0[0x3c] = auVar29._0_4_;
    DAT_0040e5f0[0x3d] = auVar29._4_4_;
    DAT_0040e5f0[0x3e] = auVar29._8_4_;
    DAT_0040e5f0[0x3f] = auVar29._12_4_;
    auVar40._8_8_ = in_t0_udw;
    auVar40._0_8_ = 0x8000000058;
    auVar29 = _pcpyld(ZEXT816(0x43),auVar40);
    DAT_0040e5f0[0x40] = auVar29._0_4_;
    DAT_0040e5f0[0x41] = auVar29._4_4_;
    DAT_0040e5f0[0x42] = auVar29._8_4_;
    DAT_0040e5f0[0x43] = auVar29._12_4_;
    auVar29 = _pcpyld(ZEXT816(8),auVar5 << 0x40);
    DAT_0040e5f0[0x44] = auVar29._0_4_;
    DAT_0040e5f0[0x45] = auVar29._4_4_;
    DAT_0040e5f0[0x46] = auVar29._8_4_;
    DAT_0040e5f0[0x47] = auVar29._12_4_;
    auVar29 = ZEXT816(9);
    auVar30 = _pcpyld(auVar29,auVar5 << 0x40);
    DAT_0040e5f0[0x48] = auVar30._0_4_;
    DAT_0040e5f0[0x49] = auVar30._4_4_;
    DAT_0040e5f0[0x4a] = auVar30._8_4_;
    DAT_0040e5f0[0x4b] = auVar30._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x4c;
    FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,0);
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    in_v0_udw = extraout_v0_udw;
  }
  auVar17._8_8_ = auVar29._8_8_;
  *(undefined4 *)(PTR_DAT_003bd23c + 0xcf4) = *(undefined4 *)(param_2 + 4);
  auVar29 = _vsubbc(in_vf0,in_vf0);
  auVar30 = _vsubbc(in_vf0,in_vf0);
  *(undefined4 *)(PTR_DAT_003bd23c + 0xcf8) = DAT_003bd1e8;
  lVar28 = (long)*(char *)(param_2 + 0x18);
  auVar17._0_8_ = (ulong)(int)PTR_DAT_003bd23c;
  if (lVar28 != 0) {
    iVar1 = *(int *)(param_2 + 8);
    piVar27 = *(int **)(param_2 + 0xc);
    pauVar24 = *(undefined1 (**) [16])(param_2 + 0x10);
    *(int *)(PTR_DAT_003bd23c + 0xcf0) = (int)*(char *)(param_2 + 0x18) << 2;
    puVar6 = PTR_DAT_003bd23c;
    iVar25 = 0;
    auVar17._0_8_ = (long)*(int *)(PTR_DAT_003bd23c + 0xcf0) | 0x10000000;
    auVar10._0_8_ =
         ((long)(*(int *)(PTR_DAT_003bd23c + 0xcf0) << 0x10) | 0x6c000329U) << 0x20 | 0x1000404;
    auVar10._8_8_ = in_v0_udw;
    auVar31 = _pcpyld(auVar10,auVar17);
    *(int *)(PTR_DAT_003bd23c + 0xe0) = auVar31._0_4_;
    *(int *)(puVar6 + 0xe4) = auVar31._4_4_;
    *(int *)(puVar6 + 0xe8) = auVar31._8_4_;
    *(int *)(puVar6 + 0xec) = auVar31._12_4_;
    if (0 < lVar28) {
      do {
        puVar6 = PTR_DAT_003bd23c;
        auVar35 = _lqc2(*pauVar24);
        iVar26 = iVar25 + 1;
        auVar34 = _lqc2(pauVar24[1]);
        pauVar9 = (undefined1 (*) [16])(*piVar27 * 0x40 + iVar1);
        auVar33 = _lqc2(*pauVar9);
        piVar27 = piVar27 + 1;
        auVar32 = _lqc2(pauVar9[1]);
        auVar31 = _lqc2(pauVar9[2]);
        _vmulabc(auVar33,auVar35);
        _vmaddabc(auVar32,auVar35);
        auVar37 = _vmaddbc(auVar31,auVar35);
        _vmulabc(auVar33,auVar34);
        _vmaddabc(auVar32,auVar34);
        auVar38 = _vmaddbc(auVar31,auVar34);
        _sqc2(auVar37);
        _sqc2(auVar38);
        auVar36 = _lqc2(pauVar9[3]);
        auVar34 = _lqc2(pauVar24[2]);
        auVar35 = _lqc2(pauVar24[3]);
        auVar33 = _lqc2(*pauVar9);
        pauVar24 = pauVar24 + 4;
        auVar32 = _lqc2(pauVar9[1]);
        auVar31 = _lqc2(pauVar9[2]);
        _vmulabc(auVar33,auVar34);
        _vmaddabc(auVar32,auVar34);
        auVar34 = _vmaddbc(auVar31,auVar34);
        _vmulabc(auVar33,auVar35);
        _vmaddabc(auVar32,auVar35);
        _vmaddabc(auVar31,auVar35);
        auVar33 = _vmaddbc(auVar36,in_vf0);
        auVar31 = _sqc2(auVar38);
        auVar17 = _sqc2(auVar34);
        auVar32 = _sqc2(auVar33);
        _sqc2(auVar34);
        _sqc2(auVar33);
        _sqc2(auVar37);
        _sqc2(auVar38);
        _sqc2(auVar34);
        _sqc2(auVar33);
        _sqc2(auVar37);
        auVar33 = _sqc2(auVar37);
        *(undefined1 (*) [16])(PTR_DAT_003bd23c + iVar25 * 0x40 + 0xf0) = auVar33;
        auStack_130._8_4_ = auVar31._8_4_;
        auStack_130._12_4_ = auVar31._12_4_;
        *(int *)(puVar6 + iVar25 * 0x40 + 0x100) = auVar31._0_4_;
        *(int *)(puVar6 + iVar25 * 0x40 + 0x104) = auVar31._4_4_;
        *(undefined4 *)(puVar6 + iVar25 * 0x40 + 0x108) = auStack_130._8_4_;
        *(undefined4 *)(puVar6 + iVar25 * 0x40 + 0x10c) = auStack_130._12_4_;
        auStack_120._8_4_ = auVar17._8_4_;
        auStack_120._12_4_ = auVar17._12_4_;
        *(int *)(puVar6 + iVar25 * 0x40 + 0x110) = auVar17._0_4_;
        *(int *)(puVar6 + iVar25 * 0x40 + 0x114) = auVar17._4_4_;
        *(undefined4 *)(puVar6 + iVar25 * 0x40 + 0x118) = auStack_120._8_4_;
        *(undefined4 *)(puVar6 + iVar25 * 0x40 + 0x11c) = auStack_120._12_4_;
        uStack_108 = auVar32._8_4_;
        uStack_104 = auVar32._12_4_;
        *(int *)(puVar6 + iVar25 * 0x40 + 0x120) = auVar32._0_4_;
        *(int *)(puVar6 + iVar25 * 0x40 + 0x124) = auVar32._4_4_;
        *(undefined4 *)(puVar6 + iVar25 * 0x40 + 0x128) = uStack_108;
        *(undefined4 *)(puVar6 + iVar25 * 0x40 + 300) = uStack_104;
        iVar25 = iVar26;
      } while (iVar26 < lVar28);
    }
  }
  puVar6 = PTR_DAT_003bd23c;
  auVar18._8_8_ = auVar17._8_8_;
  auVar18._0_8_ = 0x6c0303e901000404;
  auVar2._8_8_ = in_a2_udw;
  auVar2._0_8_ = 0x10000003;
  auVar31 = _pcpyld(auVar18,auVar2);
  *(int *)(PTR_DAT_003bd23c + 0x50) = auVar31._0_4_;
  *(int *)(puVar6 + 0x54) = auVar31._4_4_;
  *(int *)(puVar6 + 0x58) = auVar31._8_4_;
  *(int *)(puVar6 + 0x5c) = auVar31._12_4_;
  puVar6 = PTR_DAT_003bd23c;
  auVar34 = _lqc2(_DAT_00416580);
  auVar33 = _lqc2(_DAT_00416550);
  auVar32 = _lqc2(_DAT_00416560);
  auVar31 = _lqc2(_DAT_00416570);
  auStack_140 = _sqc2(auVar33);
  auStack_130 = _sqc2(auVar32);
  auStack_120 = _sqc2(auVar31);
  _sqc2(auVar34);
  auVar35 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  if (param_3 != 0) {
    auVar37 = _lqc2(*pauVar23);
    auVar36 = _lqc2(pauVar23[1]);
    auVar38 = _lqc2(pauVar23[2]);
    _vmulabc(auVar33,auVar37);
    _vmaddabc(auVar32,auVar37);
    auVar39 = _vmaddbc(auVar31,auVar37);
    _vmulabc(auVar33,auVar36);
    _vmaddabc(auVar32,auVar36);
    auVar40 = _vmaddbc(auVar31,auVar36);
    auVar36 = _lqc2(pauVar23[3]);
    _vmulabc(auVar33,auVar38);
    _vmaddabc(auVar32,auVar38);
    auVar37 = _vmaddbc(auVar31,auVar38);
    _vmulabc(auVar33,auVar36);
    _vmaddabc(auVar32,auVar36);
    _vmaddabc(auVar31,auVar36);
    auVar31 = _vmaddbc(auVar34,in_vf0);
    auStack_140 = _sqc2(auVar39);
    auStack_130 = _sqc2(auVar40);
    auStack_120 = _sqc2(auVar37);
    _sqc2(auVar31);
    _sqc2(auVar39);
    _sqc2(auVar40);
    _sqc2(auVar37);
    _sqc2(auVar31);
    _sqc2(auVar39);
    _sqc2(auVar40);
    _sqc2(auVar37);
    _sqc2(auVar31);
    auVar34 = _lqc2(auStack_1a0);
    auVar33 = _lqc2(auStack_190);
    auVar32 = _lqc2(auStack_180);
    auVar31 = _lqc2(auStack_170);
    _vmulabc(auVar34,auVar35);
    _vmaddabc(auVar33,auVar35);
    _vmaddabc(auVar32,auVar35);
    auVar35 = _vmaddbc(auVar31,in_vf0);
  }
  auVar31 = _lqc2(auStack_140);
  _lqc2(auStack_80);
  auVar22._8_8_ = in_a0_udw;
  auVar22._0_8_ = 0x6c04030b01000404;
  _vadd(in_vf0,auVar31);
  auVar31 = _vmr32(auVar35);
  auVar33 = _lqc2(auStack_130);
  auVar31 = _sqc2(auVar31);
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = 0x10000004;
  auVar32 = _pcpyld(auVar22,auVar3);
  auVar34 = _lqc2(auStack_120);
  _lqc2(auStack_70);
  auStack_80._8_4_ = auVar31._8_4_;
  uVar7 = auStack_80._8_4_;
  auStack_80._12_4_ = auVar31._12_4_;
  uVar8 = auStack_80._12_4_;
  auStack_80._8_8_ = auVar31._8_8_;
  _vadd(in_vf0,auVar33);
  auVar29 = _vaddbc(auVar29,auVar35);
  *(int *)(PTR_DAT_003bd23c + 0x60) = auVar31._0_4_;
  *(int *)(puVar6 + 100) = auVar31._4_4_;
  *(undefined4 *)(puVar6 + 0x68) = uVar7;
  *(undefined4 *)(puVar6 + 0x6c) = uVar8;
  puVar6 = PTR_DAT_003bd23c;
  auVar19._8_8_ = auStack_80._8_8_;
  auVar19._0_8_ = 0x6c0403ee01000404;
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = 0x10000004;
  auVar31 = _pcpyld(auVar19,auVar4);
  _lqc2(auStack_60);
  auVar29 = _qmfc2(auVar29._0_4_);
  _vadd(in_vf0,auVar34);
  *(int *)(PTR_DAT_003bd23c + 0x70) = auVar29._0_4_;
  *(int *)(puVar6 + 0x74) = auVar29._4_4_;
  *(int *)(puVar6 + 0x78) = auVar29._8_4_;
  *(int *)(puVar6 + 0x7c) = auVar29._12_4_;
  puVar6 = PTR_DAT_003bd23c;
  auVar29 = _vaddbc(auVar30,auVar35);
  auVar29 = _qmfc2(auVar29._0_4_);
  *(int *)(PTR_DAT_003bd23c + 0x80) = auVar29._0_4_;
  *(int *)(puVar6 + 0x84) = auVar29._4_4_;
  *(int *)(puVar6 + 0x88) = auVar29._8_4_;
  *(int *)(puVar6 + 0x8c) = auVar29._12_4_;
  puVar6 = PTR_DAT_003bd23c;
  *(int *)PTR_DAT_003bd23c = auVar31._0_4_;
  *(int *)(puVar6 + 4) = auVar31._4_4_;
  *(int *)(puVar6 + 8) = auVar31._8_4_;
  *(int *)(puVar6 + 0xc) = auVar31._12_4_;
  puVar6 = PTR_DAT_003bd23c;
  *(int *)(PTR_DAT_003bd23c + 0x90) = auVar32._0_4_;
  *(int *)(puVar6 + 0x94) = auVar32._4_4_;
  *(int *)(puVar6 + 0x98) = auVar32._8_4_;
  *(int *)(puVar6 + 0x9c) = auVar32._12_4_;
  if (param_3 == 0) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar31 = _vmove(in_vf0);
    auVar32 = _vaddbc(in_vf0,in_vf0);
    auVar29 = _vaddbc(in_vf0,in_vf0);
    auVar30 = _vaddbc(in_vf0,in_vf0);
    auVar29 = _sqc2(auVar29);
    auVar30 = _sqc2(auVar30);
    _sqc2(auVar31);
    _sqc2(auVar32);
    auVar31 = _sqc2(auVar32);
    *(undefined1 (*) [16])(PTR_DAT_003bd23c + 0xa0) = auVar31;
    puVar6 = PTR_DAT_003bd23c;
    auStack_130._8_4_ = auVar29._8_4_;
    auStack_130._12_4_ = auVar29._12_4_;
    *(int *)(PTR_DAT_003bd23c + 0xb0) = auVar29._0_4_;
    *(int *)(puVar6 + 0xb4) = auVar29._4_4_;
    *(undefined4 *)(puVar6 + 0xb8) = auStack_130._8_4_;
    *(undefined4 *)(puVar6 + 0xbc) = auStack_130._12_4_;
    puVar6 = PTR_DAT_003bd23c;
    auStack_120._8_4_ = auVar30._8_4_;
    auStack_120._12_4_ = auVar30._12_4_;
    *(int *)(PTR_DAT_003bd23c + 0xc0) = auVar30._0_4_;
    *(int *)(puVar6 + 0xc4) = auVar30._4_4_;
    *(undefined4 *)(puVar6 + 200) = auStack_120._8_4_;
    *(undefined4 *)(puVar6 + 0xcc) = auStack_120._12_4_;
    puVar6 = PTR_DAT_003bd23c;
    *(undefined4 *)(PTR_DAT_003bd23c + 0xd0) = 0;
    *(undefined4 *)(puVar6 + 0xd4) = 0;
    *(undefined4 *)(puVar6 + 0xd8) = 0;
    *(undefined4 *)(puVar6 + 0xdc) = 0;
  }
  else {
    auVar32 = _lqc2(*pauVar23);
    auVar31 = _lqc2(pauVar23[3]);
    auVar29 = _lqc2(pauVar23[1]);
    auVar30 = _lqc2(pauVar23[2]);
    _sqc2(auVar31);
    _sqc2(auVar29);
    auVar31 = _vmulbc(in_vf0,in_vf0);
    _sqc2(auVar30);
    auVar29 = _vmulbc(in_vf0,in_vf0);
    _vmove(auVar32);
    _sqc2(auVar32);
    auVar32 = _vmulbc(in_vf0,in_vf0);
    auVar30 = _vmulbc(in_vf0,in_vf0);
    auVar29 = _sqc2(auVar29);
    auVar30 = _sqc2(auVar30);
    auVar31 = _sqc2(auVar31);
    _sqc2(auVar32);
    auVar32 = _sqc2(auVar32);
    *(undefined1 (*) [16])(PTR_DAT_003bd23c + 0xa0) = auVar32;
    puVar6 = PTR_DAT_003bd23c;
    auStack_130._8_4_ = auVar29._8_4_;
    auStack_130._12_4_ = auVar29._12_4_;
    *(int *)(PTR_DAT_003bd23c + 0xb0) = auVar29._0_4_;
    *(int *)(puVar6 + 0xb4) = auVar29._4_4_;
    *(undefined4 *)(puVar6 + 0xb8) = auStack_130._8_4_;
    *(undefined4 *)(puVar6 + 0xbc) = auStack_130._12_4_;
    puVar6 = PTR_DAT_003bd23c;
    auStack_120._8_4_ = auVar30._8_4_;
    auStack_120._12_4_ = auVar30._12_4_;
    *(int *)(PTR_DAT_003bd23c + 0xc0) = auVar30._0_4_;
    *(int *)(puVar6 + 0xc4) = auVar30._4_4_;
    *(undefined4 *)(puVar6 + 200) = auStack_120._8_4_;
    *(undefined4 *)(puVar6 + 0xcc) = auStack_120._12_4_;
    puVar6 = PTR_DAT_003bd23c;
    uStack_108 = auVar31._8_4_;
    uStack_104 = auVar31._12_4_;
    *(int *)(PTR_DAT_003bd23c + 0xd0) = auVar31._0_4_;
    *(int *)(puVar6 + 0xd4) = auVar31._4_4_;
    *(undefined4 *)(puVar6 + 0xd8) = uStack_108;
    *(undefined4 *)(puVar6 + 0xdc) = uStack_104;
  }
  PTR_DAT_003bd23c[0xcfc] = 1;
  return;
}


// ==== FUN_001ccae8 @ 001ccae8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ccae8(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 extraout_v0_udw;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  byte *pbVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 in_vf0 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar42 = (int)param_4;
  if (param_4 == 0) {
    puVar28 = &DAT_003bcb08;
    pbVar31 = &DAT_003f42f0;
    uVar36 = 0;
  }
  else {
    uVar36 = *(undefined1 *)(iVar42 + 0xd);
    puVar28 = (undefined *)(iVar42 + 1);
    pbVar31 = (byte *)(iVar42 + 10);
  }
  bVar1 = pbVar31[2];
  auVar46 = _lqc2(_DAT_00415b60);
  auVar45 = _qmtc2(0x3b80841f);
  auVar44._4_4_ = (float)pbVar31[1];
  auVar44._0_4_ = (float)*pbVar31;
  auVar44._8_4_ = (float)bVar1;
  auVar44._12_4_ = 0;
  auVar44 = _lqc2(auVar44);
  auVar44 = _vmul(auVar44,auVar46);
  auVar44 = _vmulbc(auVar44,auVar45);
  auStack_70 = _sqc2(auVar44);
  FUN_001aebf8(param_1 + 0x10,puVar28,&uStack_a0,auStack_90,auStack_80,uVar36);
  puVar28 = PTR_DAT_003bd23c;
  auVar44 = _lqc2(auStack_80);
  if (cGpffff8200 != '\0') {
    auVar46 = _qmtc2(0x3fa00000);
    auVar44 = _vaddbc(auVar44,auVar46);
    auVar47 = _lqc2(auStack_90);
    auVar44 = _vaddbc(in_vf0,auVar44);
    auVar45 = _qmtc2(0x3f000000);
    _sqc2(auVar44);
    auVar44 = _vaddbc(auVar44,auVar45);
    auVar45 = _vaddbc(auVar47,auVar46);
    auVar44 = _vaddbc(in_vf0,auVar44);
    auVar45 = _vaddbc(in_vf0,auVar45);
    auStack_80 = _sqc2(auVar44);
    auStack_90 = _sqc2(auVar45);
  }
  *(undefined4 *)(PTR_DAT_003bd23c + 0x10) = uStack_a0;
  *(undefined4 *)(puVar28 + 0x14) = uStack_9c;
  *(undefined4 *)(puVar28 + 0x18) = uStack_98;
  *(undefined4 *)(puVar28 + 0x1c) = uStack_94;
  puVar28 = PTR_DAT_003bd23c;
  *(undefined4 *)(PTR_DAT_003bd23c + 0x30) = auStack_90._0_4_;
  *(undefined4 *)(puVar28 + 0x34) = auStack_90._4_4_;
  *(undefined4 *)(puVar28 + 0x38) = auStack_90._8_4_;
  *(undefined4 *)(puVar28 + 0x3c) = auStack_90._12_4_;
  puVar28 = PTR_DAT_003bd23c;
  *(undefined4 *)(PTR_DAT_003bd23c + 0x40) = auStack_80._0_4_;
  *(undefined4 *)(puVar28 + 0x44) = auStack_80._4_4_;
  *(undefined4 *)(puVar28 + 0x48) = auStack_80._8_4_;
  *(undefined4 *)(puVar28 + 0x4c) = auStack_80._12_4_;
  puVar28 = PTR_DAT_003bd23c;
  *(int *)(PTR_DAT_003bd23c + 0x20) = auStack_70._0_4_;
  *(int *)(puVar28 + 0x24) = auStack_70._4_4_;
  *(undefined4 *)(puVar28 + 0x28) = auStack_70._8_4_;
  *(undefined4 *)(puVar28 + 0x2c) = auStack_70._12_4_;
  uVar24 = auStack_80._8_4_;
  uVar25 = auStack_80._12_4_;
  if (PTR_DAT_003bd23c[0xcfc] != '\0') {
    FUN_00270938(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                 *(undefined4 *)(PTR_DAT_003bd23c + 0xcf4),*(undefined4 *)(PTR_DAT_003bd23c + 0xcf8)
                 ,1);
    PTR_DAT_003bd23c[0xcfc] = 0;
  }
  iVar42 = *(int *)(PTR_DAT_003bd23c + 0xcf0);
  iVar43 = iVar42 + 0xf;
  FUN_002b3d88(0,iVar42 + 0x17);
  if (iVar43 != 0) {
    iVar41 = 0;
    puVar39 = (undefined4 *)PTR_DAT_003bd23c;
    puVar40 = (undefined4 *)PTR_DAT_003bd23c;
    if (0 < iVar42 + 8) {
      do {
        uVar8 = *(undefined8 *)(puVar39 + 4);
        uVar20 = puVar39[6];
        uVar21 = puVar39[7];
        uVar22 = puVar39[8];
        uVar23 = puVar39[9];
        uVar24 = puVar39[10];
        uVar25 = puVar39[0xb];
        uVar9 = *(undefined8 *)(puVar39 + 0xc);
        uVar26 = puVar39[0xe];
        uVar27 = puVar39[0xf];
        uVar29 = puVar39[0x10];
        uVar30 = puVar39[0x11];
        in_a2_udw = puVar39[0x12];
        in_register_0000006c = puVar39[0x13];
        uVar32 = puVar39[0x14];
        uVar33 = puVar39[0x15];
        in_a3_udw = puVar39[0x16];
        in_register_0000007c = puVar39[0x17];
        uVar10 = *(undefined8 *)(puVar39 + 0x18);
        uVar34 = puVar39[0x1a];
        uVar35 = puVar39[0x1b];
        uVar11 = *(undefined8 *)(puVar39 + 0x1c);
        uVar37 = puVar39[0x1e];
        uVar38 = puVar39[0x1f];
        uVar13 = puVar39[1];
        uVar14 = puVar39[2];
        uVar15 = puVar39[3];
        puVar40 = puVar39 + 0x20;
        *DAT_0040e5f0 = *puVar39;
        DAT_0040e5f0[1] = uVar13;
        DAT_0040e5f0[2] = uVar14;
        DAT_0040e5f0[3] = uVar15;
        DAT_0040e5f0[4] = (int)uVar8;
        DAT_0040e5f0[5] = (int)((ulong)uVar8 >> 0x20);
        DAT_0040e5f0[6] = uVar20;
        DAT_0040e5f0[7] = uVar21;
        DAT_0040e5f0[8] = uVar22;
        DAT_0040e5f0[9] = uVar23;
        DAT_0040e5f0[10] = uVar24;
        DAT_0040e5f0[0xb] = uVar25;
        DAT_0040e5f0[0xc] = (int)uVar9;
        DAT_0040e5f0[0xd] = (int)((ulong)uVar9 >> 0x20);
        DAT_0040e5f0[0xe] = uVar26;
        DAT_0040e5f0[0xf] = uVar27;
        DAT_0040e5f0[0x10] = uVar29;
        DAT_0040e5f0[0x11] = uVar30;
        DAT_0040e5f0[0x12] = in_a2_udw;
        DAT_0040e5f0[0x13] = in_register_0000006c;
        DAT_0040e5f0[0x14] = uVar32;
        DAT_0040e5f0[0x15] = uVar33;
        DAT_0040e5f0[0x16] = in_a3_udw;
        DAT_0040e5f0[0x17] = in_register_0000007c;
        DAT_0040e5f0[0x18] = (int)uVar10;
        DAT_0040e5f0[0x19] = (int)((ulong)uVar10 >> 0x20);
        DAT_0040e5f0[0x1a] = uVar34;
        DAT_0040e5f0[0x1b] = uVar35;
        DAT_0040e5f0[0x1c] = (int)uVar11;
        DAT_0040e5f0[0x1d] = (int)((ulong)uVar11 >> 0x20);
        DAT_0040e5f0[0x1e] = uVar37;
        DAT_0040e5f0[0x1f] = uVar38;
        iVar41 = iVar41 + 8;
        DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
        puVar39 = puVar40;
      } while (iVar41 < iVar42 + 8);
    }
    iVar42 = iVar43 - iVar41;
    if (iVar41 < iVar43) {
      do {
        uVar13 = *puVar40;
        uVar14 = puVar40[1];
        uVar15 = puVar40[2];
        uVar20 = puVar40[3];
        puVar40 = puVar40 + 4;
        *DAT_0040e5f0 = uVar13;
        DAT_0040e5f0[1] = uVar14;
        DAT_0040e5f0[2] = uVar15;
        DAT_0040e5f0[3] = uVar20;
        iVar42 = iVar42 + -1;
        DAT_0040e5f0 = DAT_0040e5f0 + 4;
      } while (iVar42 != 0);
    }
    *(undefined4 *)(PTR_DAT_003bd23c + 0xcf0) = 0;
  }
  FUN_002b3d88(0,6);
  auVar16._8_8_ = extraout_v0_udw;
  auVar16._0_8_ = 0x6c05030301000404;
  auVar45._8_4_ = uVar24;
  auVar45._0_8_ = 0x10000005;
  auVar45._12_4_ = uVar25;
  auVar44 = _pcpyld(auVar16,auVar45);
  *DAT_0040e5f0 = auVar44._0_4_;
  DAT_0040e5f0[1] = auVar44._4_4_;
  DAT_0040e5f0[2] = auVar44._8_4_;
  DAT_0040e5f0[3] = auVar44._12_4_;
  auVar17._8_8_ = auVar44._8_8_;
  auVar17._0_8_ = 0xee;
  auVar46._8_4_ = uVar24;
  auVar46._0_8_ = 0x2000000000000001;
  auVar46._12_4_ = uVar25;
  auVar44 = _pcpyld(auVar17,auVar46);
  DAT_0040e5f0[4] = auVar44._0_4_;
  DAT_0040e5f0[5] = auVar44._4_4_;
  DAT_0040e5f0[6] = auVar44._8_4_;
  DAT_0040e5f0[7] = auVar44._12_4_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = auVar44._8_8_;
  auVar6._8_4_ = in_a3_udw;
  auVar6._0_8_ = 0x3d;
  auVar6._12_4_ = in_register_0000007c;
  auVar44 = _pcpyld(auVar6,auVar12 << 0x40);
  DAT_0040e5f0[8] = auVar44._0_4_;
  DAT_0040e5f0[9] = auVar44._4_4_;
  DAT_0040e5f0[10] = auVar44._8_4_;
  DAT_0040e5f0[0xb] = auVar44._12_4_;
  auVar47._8_4_ = uVar24;
  auVar47._0_8_ = *(undefined8 *)(*(int *)(PTR_DAT_003bd23c + 0xcf8) + 0x3c);
  auVar47._12_4_ = uVar25;
  auVar4._8_4_ = in_a2_udw;
  auVar4._0_8_ = 7;
  auVar4._12_4_ = in_register_0000006c;
  auVar44 = _pcpyld(auVar4,auVar47);
  DAT_0040e5f0[0xc] = auVar44._0_4_;
  DAT_0040e5f0[0xd] = auVar44._4_4_;
  DAT_0040e5f0[0xe] = auVar44._8_4_;
  DAT_0040e5f0[0xf] = auVar44._12_4_;
  auVar18._8_8_ = auVar44._8_8_;
  auVar18._0_8_ = DAT_0040dfe8;
  auVar7._8_4_ = in_a3_udw;
  auVar7._0_8_ = 0x3d;
  auVar7._12_4_ = in_register_0000007c;
  auVar44 = _pcpyld(auVar7,auVar18);
  DAT_0040e5f0[0x10] = auVar44._0_4_;
  DAT_0040e5f0[0x11] = auVar44._4_4_;
  DAT_0040e5f0[0x12] = auVar44._8_4_;
  DAT_0040e5f0[0x13] = auVar44._12_4_;
  auVar2._8_4_ = uVar24;
  auVar2._0_8_ = *(undefined8 *)(*(int *)(PTR_DAT_003bd23c + 0xcf4) + 0x3c);
  auVar2._12_4_ = uVar25;
  auVar5._8_4_ = in_a2_udw;
  auVar5._0_8_ = 6;
  auVar5._12_4_ = in_register_0000006c;
  auVar44 = _pcpyld(auVar5,auVar2);
  DAT_0040e5f0[0x14] = auVar44._0_4_;
  DAT_0040e5f0[0x15] = auVar44._4_4_;
  DAT_0040e5f0[0x16] = auVar44._8_4_;
  DAT_0040e5f0[0x17] = auVar44._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x18;
  FUN_002b3d88(0,2);
  auVar19._8_8_ = extraout_v0_udw_00;
  auVar19._0_8_ = 0x6c0103ec01000404;
  auVar3._8_4_ = uVar24;
  auVar3._0_8_ = 0x10000001;
  auVar3._12_4_ = uVar25;
  auVar44 = _pcpyld(auVar19,auVar3);
  *DAT_0040e5f0 = auVar44._0_4_;
  DAT_0040e5f0[1] = auVar44._4_4_;
  DAT_0040e5f0[2] = auVar44._8_4_;
  DAT_0040e5f0[3] = auVar44._12_4_;
  DAT_0040e5f0[4] = 0;
  DAT_0040e5f0[5] = 0;
  DAT_0040e5f0[6] = (float)bVar1;
  DAT_0040e5f0[7] = 0;
  DAT_0040e5f0 = DAT_0040e5f0 + 8;
  return;
}


// ==== FUN_001ccef8 @ 001ccef8 ====

void FUN_001ccef8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001ccf48 @ 001ccf48 ====

void FUN_001ccf48(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

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
  undefined *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  ulong in_a1_udw;
  undefined1 auVar33 [16];
  undefined8 in_t0_udw;
  undefined1 in_vf0 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  
  puVar29 = PTR_DAT_003bd240;
  if (DAT_0040e064 != &DAT_003a9bd0) {
    DAT_0040e064 = &DAT_003a9bd0;
    FUN_00270fd8(&DAT_00440280);
    FUN_002b3d88(0,0x12);
    auVar5._8_4_ = in_a0_udw;
    auVar5._0_8_ = 0x300000011000000;
    auVar5._12_4_ = in_register_0000004c;
    auVar15._8_8_ = in_t0_udw;
    auVar15._0_8_ = 0x3a9bd050000000;
    auVar33 = _pcpyld(auVar5,auVar15);
    *DAT_0040e5f0 = auVar33._0_4_;
    DAT_0040e5f0[1] = auVar33._4_4_;
    DAT_0040e5f0[2] = auVar33._8_4_;
    DAT_0040e5f0[3] = auVar33._12_4_;
    auVar6._8_4_ = in_a0_udw;
    auVar6._0_8_ = 0x140000000200009c;
    auVar6._12_4_ = in_register_0000004c;
    auVar16._8_8_ = in_t0_udw;
    auVar16._0_8_ = 0x10000000;
    auVar33 = _pcpyld(auVar6,auVar16);
    DAT_0040e5f0[4] = auVar33._0_4_;
    DAT_0040e5f0[5] = auVar33._4_4_;
    DAT_0040e5f0[6] = auVar33._8_4_;
    DAT_0040e5f0[7] = auVar33._12_4_;
    auVar7._8_4_ = in_a0_udw;
    auVar7._0_8_ = 0x6c0203de01000404;
    auVar7._12_4_ = in_register_0000004c;
    auVar17._8_8_ = in_t0_udw;
    auVar17._0_8_ = 0x10000002;
    auVar33 = _pcpyld(auVar7,auVar17);
    uStack_b8 = 0x3f800000;
    uStack_b4 = 0x3f800000;
    DAT_0040e5f0[8] = auVar33._0_4_;
    DAT_0040e5f0[9] = auVar33._4_4_;
    DAT_0040e5f0[10] = auVar33._8_4_;
    DAT_0040e5f0[0xb] = auVar33._12_4_;
    DAT_0040e5f0[0xc] = 0x3f800000;
    DAT_0040e5f0[0xd] = 0x3f800000;
    DAT_0040e5f0[0xe] = 0x3f800000;
    DAT_0040e5f0[0xf] = 0x3f800000;
    DAT_0040e5f0[0x10] = 0x40000000;
    DAT_0040e5f0[0x11] = 0x40000000;
    DAT_0040e5f0[0x12] = 0x40000000;
    DAT_0040e5f0[0x13] = 0x3f800000;
    auVar8._8_4_ = 0x3f800000;
    auVar8._0_8_ = 0x6c0203e501000404;
    auVar8._12_4_ = 0x3f800000;
    auVar18._8_8_ = in_t0_udw;
    auVar18._0_8_ = 0x10000002;
    auVar33 = _pcpyld(auVar8,auVar18);
    DAT_0040e5f0[0x14] = auVar33._0_4_;
    DAT_0040e5f0[0x15] = auVar33._4_4_;
    DAT_0040e5f0[0x16] = auVar33._8_4_;
    DAT_0040e5f0[0x17] = auVar33._12_4_;
    auVar33._8_4_ = 0x40000000;
    auVar33._0_8_ = 0x412;
    auVar33._12_4_ = 0x3f800000;
    auVar19._8_8_ = in_t0_udw;
    auVar19._0_8_ = 0x302a400000000000;
    auVar33 = _pcpyld(auVar33,auVar19);
    DAT_0040e5f0[0x18] = auVar33._0_4_;
    DAT_0040e5f0[0x19] = auVar33._4_4_;
    DAT_0040e5f0[0x1a] = auVar33._8_4_;
    DAT_0040e5f0[0x1b] = auVar33._12_4_;
    auVar34._8_4_ = 0x40000000;
    auVar34._0_8_ = 0x412;
    auVar34._12_4_ = 0x3f800000;
    auVar20._8_8_ = in_t0_udw;
    auVar20._0_8_ = 0x312e400000000000;
    auVar33 = _pcpyld(auVar34,auVar20);
    DAT_0040e5f0[0x1c] = auVar33._0_4_;
    DAT_0040e5f0[0x1d] = auVar33._4_4_;
    DAT_0040e5f0[0x1e] = auVar33._8_4_;
    DAT_0040e5f0[0x1f] = auVar33._12_4_;
    auVar34 = _vsub(in_vf0,in_vf0);
    auVar9._8_4_ = 0x3f800000;
    auVar9._0_8_ = 0x6c0103ec01000404;
    auVar9._12_4_ = 0x3f800000;
    auVar21._8_8_ = in_t0_udw;
    auVar21._0_8_ = 0x10000001;
    auVar33 = _pcpyld(auVar9,auVar21);
    _sqc2(auVar34);
    DAT_0040e5f0[0x20] = auVar33._0_4_;
    DAT_0040e5f0[0x21] = auVar33._4_4_;
    DAT_0040e5f0[0x22] = auVar33._8_4_;
    DAT_0040e5f0[0x23] = auVar33._12_4_;
    auVar33 = _sqc2(auVar34);
    *(undefined1 (*) [16])(DAT_0040e5f0 + 0x24) = auVar33;
    auVar10._8_4_ = 0x3f800000;
    auVar10._0_8_ = 0x5000000700000000;
    auVar10._12_4_ = 0x3f800000;
    auVar22._8_8_ = in_t0_udw;
    auVar22._0_8_ = 0x10000007;
    auVar33 = _pcpyld(auVar10,auVar22);
    DAT_0040e5f0[0x28] = auVar33._0_4_;
    DAT_0040e5f0[0x29] = auVar33._4_4_;
    DAT_0040e5f0[0x2a] = auVar33._8_4_;
    DAT_0040e5f0[0x2b] = auVar33._12_4_;
    auVar11._8_4_ = 0x3f800000;
    auVar11._0_8_ = 0xe;
    auVar11._12_4_ = 0x3f800000;
    auVar23._8_8_ = in_t0_udw;
    auVar23._0_8_ = 0x1000000000008006;
    auVar33 = _pcpyld(auVar11,auVar23);
    DAT_0040e5f0[0x2c] = auVar33._0_4_;
    DAT_0040e5f0[0x2d] = auVar33._4_4_;
    DAT_0040e5f0[0x2e] = auVar33._8_4_;
    DAT_0040e5f0[0x2f] = auVar33._12_4_;
    auVar35._8_4_ = 0x40000000;
    auVar35._0_8_ = 0x47;
    auVar35._12_4_ = 0x3f800000;
    auVar24._8_8_ = in_t0_udw;
    auVar24._0_8_ = 0x50003;
    auVar33 = _pcpyld(auVar35,auVar24);
    DAT_0040e5f0[0x30] = auVar33._0_4_;
    DAT_0040e5f0[0x31] = auVar33._4_4_;
    DAT_0040e5f0[0x32] = auVar33._8_4_;
    DAT_0040e5f0[0x33] = auVar33._12_4_;
    auVar36._8_4_ = 0x40000000;
    auVar36._0_8_ = 0x48;
    auVar36._12_4_ = 0x3f800000;
    auVar25._8_8_ = in_t0_udw;
    auVar25._0_8_ = 0x53001;
    auVar33 = _pcpyld(auVar36,auVar25);
    DAT_0040e5f0[0x34] = auVar33._0_4_;
    DAT_0040e5f0[0x35] = auVar33._4_4_;
    DAT_0040e5f0[0x36] = auVar33._8_4_;
    DAT_0040e5f0[0x37] = auVar33._12_4_;
    auVar1._8_4_ = 0x40000000;
    auVar1._0_8_ = 0x80000000a8;
    auVar1._12_4_ = 0x3f800000;
    auVar12._8_4_ = 0x3f800000;
    auVar12._0_8_ = 0x42;
    auVar12._12_4_ = 0x3f800000;
    auVar33 = _pcpyld(auVar12,auVar1);
    DAT_0040e5f0[0x38] = auVar33._0_4_;
    DAT_0040e5f0[0x39] = auVar33._4_4_;
    DAT_0040e5f0[0x3a] = auVar33._8_4_;
    DAT_0040e5f0[0x3b] = auVar33._12_4_;
    auVar2._8_4_ = 0x40000000;
    auVar2._0_8_ = 0x8000000081;
    auVar2._12_4_ = 0x3f800000;
    auVar13._8_4_ = 0x3f800000;
    auVar13._0_8_ = 0x43;
    auVar13._12_4_ = 0x3f800000;
    auVar33 = _pcpyld(auVar13,auVar2);
    DAT_0040e5f0[0x3c] = auVar33._0_4_;
    DAT_0040e5f0[0x3d] = auVar33._4_4_;
    DAT_0040e5f0[0x3e] = auVar33._8_4_;
    DAT_0040e5f0[0x3f] = auVar33._12_4_;
    auVar3._8_4_ = 0x40000000;
    auVar3._0_8_ = 8;
    auVar3._12_4_ = 0x3f800000;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = in_a1_udw;
    auVar33 = _pcpyld(auVar3,auVar27 << 0x40);
    DAT_0040e5f0[0x40] = auVar33._0_4_;
    DAT_0040e5f0[0x41] = auVar33._4_4_;
    DAT_0040e5f0[0x42] = auVar33._8_4_;
    DAT_0040e5f0[0x43] = auVar33._12_4_;
    auVar4._8_4_ = 0x40000000;
    auVar4._0_8_ = 9;
    auVar4._12_4_ = 0x3f800000;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = in_a1_udw;
    auVar33 = _pcpyld(auVar4,auVar28 << 0x40);
    DAT_0040e5f0[0x44] = auVar33._0_4_;
    DAT_0040e5f0[0x45] = auVar33._4_4_;
    DAT_0040e5f0[0x46] = auVar33._8_4_;
    DAT_0040e5f0[0x47] = auVar33._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x48;
    FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,0);
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    *(undefined4 *)(puVar29 + 0x5c) = 5;
    *(undefined4 *)(puVar29 + 0x58) = 0xffffffff;
    in_a0_udw = uStack_b8;
    in_register_0000004c = uStack_b4;
  }
  if (*(undefined1 (**) [16])(puVar29 + 0x58) == param_3) {
    puVar29[0x61] = 0;
  }
  else {
    puVar29[0x61] = 1;
    auVar14._8_4_ = in_a0_udw;
    auVar14._0_8_ = 0x6c0403e801000404;
    auVar14._12_4_ = in_register_0000004c;
    auVar26._8_8_ = in_t0_udw;
    auVar26._0_8_ = 0x10000004;
    auVar33 = _pcpyld(auVar14,auVar26);
    *(undefined1 (**) [16])(puVar29 + 0x58) = param_3;
    *(int *)puVar29 = auVar33._0_4_;
    *(int *)(puVar29 + 4) = auVar33._4_4_;
    *(int *)(puVar29 + 8) = auVar33._8_4_;
    *(int *)(puVar29 + 0xc) = auVar33._12_4_;
    uVar32 = DAT_70002d88;
    uVar31 = DAT_70002d84;
    uVar30 = DAT_70002d80;
    if (param_3 == (undefined1 (*) [16])0x0) {
      *(undefined4 *)(puVar29 + 0x10) = DAT_70002d7c;
      *(undefined4 *)(puVar29 + 0x14) = uVar30;
      *(undefined4 *)(puVar29 + 0x18) = uVar31;
      *(undefined4 *)(puVar29 + 0x1c) = uVar32;
      uVar32 = DAT_70002d98;
      uVar31 = DAT_70002d94;
      uVar30 = DAT_70002d90;
      *(undefined4 *)(puVar29 + 0x20) = DAT_70002d8c;
      *(undefined4 *)(puVar29 + 0x24) = uVar30;
      *(undefined4 *)(puVar29 + 0x28) = uVar31;
      *(undefined4 *)(puVar29 + 0x2c) = uVar32;
      uVar32 = DAT_70002da8;
      uVar31 = DAT_70002da4;
      uVar30 = DAT_70002da0;
      *(undefined4 *)(puVar29 + 0x30) = DAT_70002d9c;
      *(undefined4 *)(puVar29 + 0x34) = uVar30;
      *(undefined4 *)(puVar29 + 0x38) = uVar31;
      *(undefined4 *)(puVar29 + 0x3c) = uVar32;
      uStack_70 = DAT_70002dac;
      uStack_6c = DAT_70002db0;
      uStack_68 = DAT_70002db4;
      uStack_64 = DAT_70002db8;
    }
    else {
      auVar36 = _lqc2(*param_3);
      auVar35 = _lqc2(param_3[3]);
      auVar33 = _lqc2(param_3[1]);
      auVar34 = _lqc2(param_3[2]);
      _sqc2(auVar35);
      _sqc2(auVar33);
      auVar35 = _vmulbc(in_vf0,in_vf0);
      _sqc2(auVar34);
      auVar33 = _vmulbc(in_vf0,in_vf0);
      _vmove(auVar36);
      auVar34 = _vmulbc(in_vf0,in_vf0);
      _sqc2(auVar36);
      auVar36 = _vmulbc(in_vf0,in_vf0);
      auVar33 = _sqc2(auVar33);
      auVar34 = _sqc2(auVar34);
      auVar35 = _sqc2(auVar35);
      _sqc2(auVar36);
      auVar36 = _sqc2(auVar36);
      *(undefined1 (*) [16])(puVar29 + 0x10) = auVar36;
      uStack_88 = auVar33._8_4_;
      uStack_84 = auVar33._12_4_;
      *(int *)(puVar29 + 0x20) = auVar33._0_4_;
      *(int *)(puVar29 + 0x24) = auVar33._4_4_;
      *(undefined4 *)(puVar29 + 0x28) = uStack_88;
      *(undefined4 *)(puVar29 + 0x2c) = uStack_84;
      uStack_80 = auVar34._0_4_;
      uStack_7c = auVar34._4_4_;
      uStack_78 = auVar34._8_4_;
      uStack_74 = auVar34._12_4_;
      *(undefined4 *)(puVar29 + 0x30) = uStack_80;
      *(undefined4 *)(puVar29 + 0x34) = uStack_7c;
      *(undefined4 *)(puVar29 + 0x38) = uStack_78;
      *(undefined4 *)(puVar29 + 0x3c) = uStack_74;
      uStack_70 = auVar35._0_4_;
      uStack_6c = auVar35._4_4_;
      uStack_68 = auVar35._8_4_;
      uStack_64 = auVar35._12_4_;
    }
    *(undefined4 *)(puVar29 + 0x40) = uStack_70;
    *(undefined4 *)(puVar29 + 0x44) = uStack_6c;
    *(undefined4 *)(puVar29 + 0x48) = uStack_68;
    *(undefined4 *)(puVar29 + 0x4c) = uStack_64;
  }
  if ((*(int *)(puVar29 + 0x50) == *(int *)(param_2 + 8)) &&
     (*(int *)(puVar29 + 0x54) == *(int *)(param_2 + 4))) {
    puVar29[0x60] = 0;
  }
  else {
    puVar29[0x60] = 1;
    *(undefined4 *)(puVar29 + 0x50) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(puVar29 + 0x54) = *(undefined4 *)(param_2 + 4);
  }
  return;
}


// ==== FUN_001cd360 @ 001cd360 ====

void FUN_001cd360(undefined8 param_1,int param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar5 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined1 (*pauVar6) [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if (*(int *)(DAT_0040f4c0 + 0xcd70) == 0) {
    FUN_001ccf48();
  }
  else {
    pauVar6 = (undefined1 (*) [16])param_3;
    if (param_3 != 0) {
      auVar10 = _lqc2(*pauVar6);
      auVar11 = _lqc2(pauVar6[1]);
      auVar12 = _lqc2(pauVar6[2]);
      _vmove(auVar10);
      _vmove(auVar11);
      auVar14 = _vaddbc(in_vf0,auVar11);
      auVar13 = _vaddbc(in_vf0,auVar10);
      _vmove(auVar12);
      auVar15 = _vaddbc(in_vf0,auVar10);
      _vmove(auVar14);
      _vmove(auVar13);
      auVar17 = _vaddbc(in_vf0,auVar12);
      auVar9 = _lqc2(pauVar6[3]);
      auVar18 = _vaddbc(in_vf0,auVar12);
      _vmove(auVar15);
      auVar8 = _vmulbc(auVar17,auVar9);
      auVar16 = _vaddbc(in_vf0,auVar11);
      auVar7 = _vmulbc(auVar18,auVar9);
      auVar8 = _vadd(auVar8,auVar7);
      auVar7 = _vmulbc(auVar16,auVar9);
      _sqc2(auVar10);
      auVar7 = _vadd(auVar8,auVar7);
      _sqc2(auVar11);
      auVar7 = _vsub(in_vf0,auVar7);
      _sqc2(auVar12);
      _sqc2(auVar9);
      _sqc2(auVar14);
      _sqc2(auVar13);
      _sqc2(auVar15);
      auStack_90 = _sqc2(auVar7);
      auStack_c0 = _sqc2(auVar17);
      auStack_b0 = _sqc2(auVar18);
      auStack_a0 = _sqc2(auVar16);
    }
    if (DAT_0040e064 != &DAT_003b4b00) {
      FUN_00270fd8(&DAT_00440280);
      DAT_0040e064 = &DAT_003b4b00;
      FUN_002b3d88(0,7);
      auVar12._8_8_ = extraout_v0_udw;
      auVar12._0_8_ = 0x3b4b0050000000;
      auVar8._8_8_ = in_a1_udw;
      auVar8._0_8_ = 0x300000011000000;
      auVar7 = _pcpyld(auVar8,auVar12);
      *DAT_0040e5f0 = auVar7._0_4_;
      DAT_0040e5f0[1] = auVar7._4_4_;
      DAT_0040e5f0[2] = auVar7._8_4_;
      DAT_0040e5f0[3] = auVar7._12_4_;
      auVar13._8_8_ = auVar7._8_8_;
      auVar13._0_8_ = 0x10000000;
      auVar9._8_8_ = in_a1_udw;
      auVar9._0_8_ = 0x140000000200009c;
      auVar7 = _pcpyld(auVar9,auVar13);
      DAT_0040e5f0[4] = auVar7._0_4_;
      DAT_0040e5f0[5] = auVar7._4_4_;
      DAT_0040e5f0[6] = auVar7._8_4_;
      DAT_0040e5f0[7] = auVar7._12_4_;
      auVar14._8_8_ = auVar7._8_8_;
      auVar14._0_8_ = 0x10000004;
      auVar10._8_8_ = in_a1_udw;
      auVar10._0_8_ = 0x5000000400000000;
      auVar7 = _pcpyld(auVar10,auVar14);
      DAT_0040e5f0[8] = auVar7._0_4_;
      DAT_0040e5f0[9] = auVar7._4_4_;
      DAT_0040e5f0[10] = auVar7._8_4_;
      DAT_0040e5f0[0xb] = auVar7._12_4_;
      auVar15._8_8_ = auVar7._8_8_;
      auVar15._0_8_ = 0x1000000000008003;
      auVar11._8_8_ = in_a1_udw;
      auVar11._0_8_ = 0xe;
      auVar7 = _pcpyld(auVar11,auVar15);
      DAT_0040e5f0[0xc] = auVar7._0_4_;
      DAT_0040e5f0[0xd] = auVar7._4_4_;
      DAT_0040e5f0[0xe] = auVar7._8_4_;
      DAT_0040e5f0[0xf] = auVar7._12_4_;
      auVar16._8_8_ = auVar7._8_8_;
      auVar16._0_8_ = 5;
      auVar7._8_8_ = in_a0_udw;
      auVar7._0_8_ = 8;
      auVar7 = _pcpyld(auVar7,auVar16);
      DAT_0040e5f0[0x10] = auVar7._0_4_;
      DAT_0040e5f0[0x11] = auVar7._4_4_;
      DAT_0040e5f0[0x12] = auVar7._8_4_;
      DAT_0040e5f0[0x13] = auVar7._12_4_;
      auVar17._8_8_ = auVar7._8_8_;
      uVar3 = 0x50003;
      if ((*(byte *)(param_2 + 1) & 1) != 0) {
        uVar3 = 0x51001;
      }
      auVar17._0_8_ = uVar3;
      auVar2._8_8_ = in_a1_udw;
      auVar2._0_8_ = 0x47;
      auVar7 = _pcpyld(auVar2,auVar17);
      DAT_0040e5f0[0x14] = auVar7._0_4_;
      DAT_0040e5f0[0x15] = auVar7._4_4_;
      DAT_0040e5f0[0x16] = auVar7._8_4_;
      DAT_0040e5f0[0x17] = auVar7._12_4_;
      auVar4._8_8_ = auVar7._8_8_;
      auVar4._0_8_ = 0x42;
      auVar18._8_8_ = in_a0_udw;
      auVar18._0_8_ = 0x3200000058;
      auVar7 = _pcpyld(auVar4,auVar18);
      DAT_0040e5f0[0x18] = auVar7._0_4_;
      DAT_0040e5f0[0x19] = auVar7._4_4_;
      DAT_0040e5f0[0x1a] = auVar7._8_4_;
      DAT_0040e5f0[0x1b] = auVar7._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
    }
    FUN_002b3d88(0,2);
    auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
    if (param_3 != 0) {
      auVar11 = _lqc2(auStack_c0);
      auVar10 = _lqc2(auStack_b0);
      auVar9 = _lqc2(auStack_a0);
      auVar8 = _lqc2(auStack_90);
      _vmulabc(auVar11,auVar7);
      _vmaddabc(auVar10,auVar7);
      _vmaddabc(auVar9,auVar7);
      auVar7 = _vmaddbc(auVar8,in_vf0);
    }
    auVar5._8_8_ = extraout_v0_udw_00;
    auVar5._0_8_ = 0x6c0103f401000404;
    auVar1._8_8_ = in_v1_udw;
    auVar1._0_8_ = 0x10000001;
    auVar8 = _pcpyld(auVar5,auVar1);
    *DAT_0040e5f0 = auVar8._0_4_;
    DAT_0040e5f0[1] = auVar8._4_4_;
    DAT_0040e5f0[2] = auVar8._8_4_;
    DAT_0040e5f0[3] = auVar8._12_4_;
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(DAT_0040e5f0 + 4) = auVar7;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
    FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,pauVar6);
    *(undefined4 *)(PTR_DAT_003bd244 + 0x70) = *(undefined4 *)(param_2 + 0xc);
    PTR_DAT_003bd244[0x60] = 1;
    *(undefined4 *)(PTR_DAT_003bd244 + 0x5c) = 6;
  }
  return;
}


// ==== FUN_001cd650 @ 001cd650 ====

void FUN_001cd650(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined8 extraout_v0_udw;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong in_v1_udw;
  undefined4 *puVar19;
  undefined8 in_a0_udw;
  int iVar20;
  undefined8 in_a1_udw;
  undefined8 in_a3_udw;
  undefined4 uVar21;
  undefined1 in_vf0 [16];
  undefined1 auVar22 [16];
  
  puVar12 = PTR_DAT_003bd240;
  if (PTR_DAT_003bd240[0x60] != '\0') {
    FUN_00270938(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                 *(undefined4 *)(PTR_DAT_003bd240 + 0x50),*(undefined4 *)(PTR_DAT_003bd240 + 0x54),1
                );
    FUN_002b3d88(0,8);
    puVar19 = DAT_0040e5f0;
    auVar13._8_8_ = extraout_v0_udw;
    auVar13._0_8_ = 0x6c0503e001000404;
    auVar14._8_8_ = in_v1_udw;
    auVar14._0_8_ = 0x10000007;
    auVar14 = _pcpyld(auVar13,auVar14);
    *DAT_0040e5f0 = auVar14._0_4_;
    puVar19[1] = auVar14._4_4_;
    puVar19[2] = auVar14._8_4_;
    puVar19[3] = auVar14._12_4_;
    auVar15._8_8_ = auVar14._8_8_;
    auVar15._0_8_ = 0xee;
    auVar22._8_8_ = in_v1_udw;
    auVar22._0_8_ = 0x2000000000000001;
    auVar14 = _pcpyld(auVar15,auVar22);
    puVar19[4] = auVar14._0_4_;
    puVar19[5] = auVar14._4_4_;
    puVar19[6] = auVar14._8_4_;
    puVar19[7] = auVar14._12_4_;
    auVar16._8_8_ = auVar14._8_8_;
    auVar16._0_8_ = DAT_0040dfe8;
    auVar6._8_8_ = in_a3_udw;
    auVar6._0_8_ = 0x3d;
    auVar14 = _pcpyld(auVar6,auVar16);
    puVar19[8] = auVar14._0_4_;
    puVar19[9] = auVar14._4_4_;
    puVar19[10] = auVar14._8_4_;
    puVar19[0xb] = auVar14._12_4_;
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = *(undefined8 *)(*(int *)(puVar12 + 0x54) + 0x3c);
    auVar4._8_8_ = in_a1_udw;
    auVar4._0_8_ = 7;
    auVar14 = _pcpyld(auVar4,auVar2);
    puVar19[0xc] = auVar14._0_4_;
    puVar19[0xd] = auVar14._4_4_;
    puVar19[0xe] = auVar14._8_4_;
    puVar19[0xf] = auVar14._12_4_;
    auVar17._8_8_ = auVar14._8_8_;
    auVar17._0_8_ = DAT_0040dfe8;
    auVar7._8_8_ = in_a3_udw;
    auVar7._0_8_ = 0x3d;
    auVar14 = _pcpyld(auVar7,auVar17);
    puVar19[0x10] = auVar14._0_4_;
    puVar19[0x11] = auVar14._4_4_;
    puVar19[0x12] = auVar14._8_4_;
    puVar19[0x13] = auVar14._12_4_;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = *(undefined8 *)(*(int *)(puVar12 + 0x50) + 0x3c);
    auVar5._8_8_ = in_a1_udw;
    auVar5._0_8_ = 6;
    auVar14 = _pcpyld(auVar5,auVar3);
    puVar19[0x14] = auVar14._0_4_;
    puVar19[0x15] = auVar14._4_4_;
    puVar19[0x16] = auVar14._8_4_;
    puVar19[0x17] = auVar14._12_4_;
    auVar18._8_8_ = auVar14._8_8_;
    auVar18._0_8_ = 0x6c0103ed01000404;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_v1_udw;
    auVar14 = _pcpyld(auVar18,auVar8 << 0x40);
    puVar19[0x18] = auVar14._0_4_;
    puVar19[0x19] = auVar14._4_4_;
    puVar19[0x1a] = auVar14._8_4_;
    puVar19[0x1b] = auVar14._12_4_;
    auVar22 = _lqc2(ZEXT816(0));
    cVar1 = *(char *)(param_2 + 1);
    auVar14 = _sqc2(auVar22);
    if (CONCAT44(cVar1 >> 7,(int)cVar1) != 0) {
      uVar21 = fmodf(((float)(int)cVar1 / 100.0) * (float)DAT_003c0e04,0x3f800000);
      _lqc2(auVar14);
      auVar14 = _qmtc2(uVar21);
      auVar14 = _vaddbc(in_vf0,auVar14);
      auVar22 = _vmove(auVar14);
    }
    auVar14 = _sqc2(auVar22);
    *(undefined1 (*) [16])(puVar19 + 0x1c) = auVar14;
    DAT_0040e5f0 = puVar19 + 0x20;
    puVar12[0x60] = 0;
  }
  FUN_002b3d88(0,*(undefined4 *)(puVar12 + 0x5c));
  iVar20 = 0;
  puVar19 = (undefined4 *)puVar12;
  if (0 < *(int *)(puVar12 + 0x5c)) {
    do {
      uVar21 = *puVar19;
      uVar9 = puVar19[1];
      uVar10 = puVar19[2];
      uVar11 = puVar19[3];
      puVar19 = puVar19 + 4;
      *DAT_0040e5f0 = uVar21;
      DAT_0040e5f0[1] = uVar9;
      DAT_0040e5f0[2] = uVar10;
      DAT_0040e5f0[3] = uVar11;
      iVar20 = iVar20 + 1;
      DAT_0040e5f0 = DAT_0040e5f0 + 4;
    } while (iVar20 < *(int *)(puVar12 + 0x5c));
  }
  puVar12[0x61] = 0;
  return;
}


// ==== FUN_001cd8d8 @ 001cd8d8 ====

void FUN_001cd8d8(void)

{
  undefined1 auVar1 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_a0_udw;
  undefined8 uStack_38;
  
  if (*(int *)(DAT_0040f4c0 + 0xcd70) == 0) {
    FUN_001cd650();
  }
  else {
    if (PTR_DAT_003bd244[0x60] != '\0') {
      FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
      if (*(int *)(PTR_DAT_003bd244 + 0x70) != 0) {
        FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                     *(int *)(PTR_DAT_003bd244 + 0x70),1,0,0);
      }
      PTR_DAT_003bd244[0x60] = 0;
    }
    FUN_002b3d88(0,3);
    auVar2._8_8_ = extraout_v0_udw;
    auVar2._0_8_ = 0x6c0203ed01000404;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x10000002;
    auVar3 = _pcpyld(auVar2,auVar3);
    *DAT_0040e5f0 = auVar3._0_4_;
    DAT_0040e5f0[1] = auVar3._4_4_;
    DAT_0040e5f0[2] = auVar3._8_4_;
    DAT_0040e5f0[3] = auVar3._12_4_;
    DAT_0040e5f0[4] = 0;
    DAT_0040e5f0[5] = 0;
    DAT_0040e5f0[6] = (int)uStack_38;
    DAT_0040e5f0[7] = (int)((ulong)uStack_38 >> 0x20);
    auVar4._8_8_ = uStack_38;
    auVar4._0_8_ = 0x302e400000000000;
    auVar1._8_8_ = in_a0_udw;
    auVar1._0_8_ = 0x412;
    auVar3 = _pcpyld(auVar1,auVar4);
    DAT_0040e5f0[8] = auVar3._0_4_;
    DAT_0040e5f0[9] = auVar3._4_4_;
    DAT_0040e5f0[10] = auVar3._8_4_;
    DAT_0040e5f0[0xb] = auVar3._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  }
  return;
}


// ==== FUN_001cda28 @ 001cda28 ====

void FUN_001cda28(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 8) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cdae8 @ 001cdae8 ====

void FUN_001cdae8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 8) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 0xc) + -1) * 4 + param_3))
    ;
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  return;
}


// ==== FUN_001cdb98 @ 001cdb98 ====

void FUN_001cdb98(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  
  if (DAT_0040e064 != &DAT_003ae330) {
    DAT_0040e064 = &DAT_003ae330;
    FUN_002b3d88(0,7);
    auVar9._8_8_ = extraout_v0_udw;
    auVar9._0_8_ = 0x3ae33050000000;
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = 0x300000011000000;
    auVar10 = _pcpyld(auVar6,auVar9);
    *DAT_0040e5f0 = auVar10._0_4_;
    DAT_0040e5f0[1] = auVar10._4_4_;
    DAT_0040e5f0[2] = auVar10._8_4_;
    DAT_0040e5f0[3] = auVar10._12_4_;
    auVar11._8_8_ = auVar10._8_8_;
    auVar11._0_8_ = 0x10000000;
    auVar7._8_8_ = in_a1_udw;
    auVar7._0_8_ = 0x14000000020000f0;
    auVar10 = _pcpyld(auVar7,auVar11);
    DAT_0040e5f0[4] = auVar10._0_4_;
    DAT_0040e5f0[5] = auVar10._4_4_;
    DAT_0040e5f0[6] = auVar10._8_4_;
    DAT_0040e5f0[7] = auVar10._12_4_;
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = 0x5000000400000000;
    auVar10._8_8_ = in_a0_udw;
    auVar10._0_8_ = 0x10000004;
    auVar10 = _pcpyld(auVar12,auVar10);
    DAT_0040e5f0[8] = auVar10._0_4_;
    DAT_0040e5f0[9] = auVar10._4_4_;
    DAT_0040e5f0[10] = auVar10._8_4_;
    DAT_0040e5f0[0xb] = auVar10._12_4_;
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = 0xe;
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = 0x1000000000008003;
    auVar10 = _pcpyld(auVar13,auVar2);
    DAT_0040e5f0[0xc] = auVar10._0_4_;
    DAT_0040e5f0[0xd] = auVar10._4_4_;
    DAT_0040e5f0[0xe] = auVar10._8_4_;
    DAT_0040e5f0[0xf] = auVar10._12_4_;
    auVar14._8_8_ = auVar10._8_8_;
    auVar14._0_8_ = 8;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 5;
    auVar10 = _pcpyld(auVar14,auVar3);
    DAT_0040e5f0[0x10] = auVar10._0_4_;
    DAT_0040e5f0[0x11] = auVar10._4_4_;
    DAT_0040e5f0[0x12] = auVar10._8_4_;
    DAT_0040e5f0[0x13] = auVar10._12_4_;
    auVar15._8_8_ = auVar10._8_8_;
    auVar15._0_8_ = 0x47;
    auVar4._8_8_ = in_a0_udw;
    auVar4._0_8_ = 0x51001;
    auVar10 = _pcpyld(auVar15,auVar4);
    DAT_0040e5f0[0x14] = auVar10._0_4_;
    DAT_0040e5f0[0x15] = auVar10._4_4_;
    DAT_0040e5f0[0x16] = auVar10._8_4_;
    DAT_0040e5f0[0x17] = auVar10._12_4_;
    auVar16._8_8_ = auVar10._8_8_;
    auVar16._0_8_ = 0x42;
    auVar5._8_8_ = in_a0_udw;
    auVar5._0_8_ = 0x8000000048;
    auVar10 = _pcpyld(auVar16,auVar5);
    DAT_0040e5f0[0x18] = auVar10._0_4_;
    DAT_0040e5f0[0x19] = auVar10._4_4_;
    DAT_0040e5f0[0x1a] = auVar10._8_4_;
    DAT_0040e5f0[0x1b] = auVar10._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  FUN_002b3d88(0,2);
  auVar17._8_8_ = extraout_v0_udw_00;
  auVar17._0_8_ = 0x1000000010000000;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x10000002;
  auVar10 = _pcpyld(auVar17,auVar1);
  *DAT_0040e5f0 = auVar10._0_4_;
  DAT_0040e5f0[1] = auVar10._4_4_;
  DAT_0040e5f0[2] = auVar10._8_4_;
  DAT_0040e5f0[3] = auVar10._12_4_;
  auVar18._8_8_ = auVar10._8_8_;
  auVar18._0_8_ = 0x6c0103f301000404;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = in_v1_udw;
  auVar10 = _pcpyld(auVar18,auVar8 << 0x40);
  DAT_0040e5f0[4] = auVar10._0_4_;
  DAT_0040e5f0[5] = auVar10._4_4_;
  DAT_0040e5f0[6] = auVar10._8_4_;
  DAT_0040e5f0[7] = auVar10._12_4_;
  auVar19._8_8_ = auVar10._8_8_;
  auVar19._0_8_ = (ulong)(*(byte *)(param_2 + 1) >> 4) & 1;
  auVar10 = _pcpyld(auVar19,auVar19);
  DAT_0040e5f0[8] = auVar10._0_4_;
  DAT_0040e5f0[9] = auVar10._4_4_;
  DAT_0040e5f0[10] = auVar10._8_4_;
  DAT_0040e5f0[0xb] = auVar10._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  *(undefined4 *)(PTR_DAT_003bd248 + 0x50) = 0;
  PTR_DAT_003bd248[0x58] = 1;
  *(undefined4 *)(PTR_DAT_003bd248 + 0x54) = 5;
  return;
}


// ==== FUN_001cdd98 @ 001cdd98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cdd98(int param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  undefined8 extraout_v0_udw;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  float fVar3;
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
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  if (PTR_DAT_003bd248[0x58] != '\0') {
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    PTR_DAT_003bd248[0x58] = 0;
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
  fVar4 = 1.0;
  fVar3 = 0.0;
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  if ((param_4 != 0) && (fVar4 = *(float *)((int)param_4 + 4), fVar4 < -0.1)) {
    fVar3 = (float)(int)fVar4 / 255.0;
    fVar4 = (float)(int)fVar4 - fVar4;
  }
  auVar7 = _qmtc2(0x40000000);
  auVar8 = _vmulbc(auVar8,auVar7);
  auVar8 = _qmfc2(auVar8._0_4_);
  auVar6 = _vmulbc(auVar12,auVar7);
  fVar2 = (float)((int)auVar8._0_4_ * (uint)(0.0 < auVar8._0_4_));
  auVar8 = _qmtc2(fVar3 * 0.5);
  auVar5 = _qmtc2((int)fVar2 * (uint)(fVar2 < 2.0) | (uint)(fVar2 >= 2.0) * 0x40000000);
  auVar10 = _qmtc2(fVar3);
  auVar9 = _vaddbc(in_vf0,auVar5);
  auVar5 = _qmfc2(auVar6._0_4_);
  auVar8 = _vaddbc(auVar9,auVar8);
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
  auVar8 = _vmulbc(auVar8,auVar7);
  auVar8 = _sqc2(auVar8);
  auVar6 = _qmtc2(DAT_003bd1cc);
  auVar9 = _vmulbc(auVar9,auVar7);
  auVar6 = _vmulbc(auVar9,auVar6);
  auVar9 = _qmtc2(fVar4);
  fStack_9c = auVar8._4_4_;
  fVar4 = (float)((int)auVar5._0_4_ * (uint)(0.0 < auVar5._0_4_));
  fStack_9c = (float)((int)fStack_9c * (uint)(0.0 < fStack_9c));
  auVar5 = _vmulbc(auVar6,auVar9);
  _vmove(auVar12);
  auVar8 = _qmtc2((int)fStack_9c * (uint)(fStack_9c < 2.0) | (uint)(fStack_9c >= 2.0) * 0x40000000);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar12 = _vaddbc(auVar8,auVar10);
  auVar8 = _qmtc2((int)fVar4 * (uint)(fVar4 < 2.0) | (uint)(fVar4 >= 2.0) * 0x40000000);
  auVar6 = _vmulbc(auVar12,auVar7);
  auVar12 = _vaddbc(in_vf0,auVar8);
  auVar8 = _sqc2(auVar6);
  auVar12 = _vmulbc(auVar12,auVar7);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  auVar6 = _vmulbc(auVar6,auVar7);
  fStack_98 = auVar8._8_4_;
  auVar6 = _vmulbc(auVar6,auVar9);
  auVar8 = _sqc2(auVar5);
  fStack_98 = (float)((int)fStack_98 * (uint)(0.0 < fStack_98));
  fStack_94 = auVar8._12_4_;
  auVar8 = _sqc2(auVar12);
  fStack_94 = (float)((int)fStack_94 * (uint)(0.0 < fStack_94));
  auVar12 = _qmtc2((int)fStack_98 * (uint)(fStack_98 < 2.0) | (uint)(fStack_98 >= 2.0) * 0x40000000)
  ;
  _vaddbc(in_vf0,auVar12);
  fStack_9c = auVar8._4_4_;
  auVar8 = _qmtc2((int)fStack_94 * (uint)(fStack_94 < 2.0) | (uint)(fStack_94 >= 2.0) * 0x40000000);
  fStack_9c = (float)((int)fStack_9c * (uint)(0.0 < fStack_9c));
  auVar12 = _vmulbc(in_vf0,auVar8);
  auVar8 = _qmtc2((int)fStack_9c * (uint)(fStack_9c < 2.0) | (uint)(fStack_9c >= 2.0) * 0x40000000);
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar8 = _vmulbc(auVar8,auVar7);
  auVar8 = _sqc2(auVar8);
  fStack_98 = auVar8._8_4_;
  auVar8 = _sqc2(auVar6);
  fStack_98 = (float)((int)fStack_98 * (uint)(0.0 < fStack_98));
  fStack_94 = auVar8._12_4_;
  auVar8 = _qmtc2((int)fStack_98 * (uint)(fStack_98 < 2.0) | (uint)(fStack_98 >= 2.0) * 0x40000000);
  fStack_94 = (float)((int)fStack_94 * (uint)(0.0 < fStack_94));
  _vaddbc(in_vf0,auVar8);
  auVar8 = _sqc2(auVar12);
  auVar12 = _qmtc2((int)fStack_94 * (uint)(fStack_94 < 2.0) | (uint)(fStack_94 >= 2.0) * 0x40000000)
  ;
  auVar12 = _vmulbc(in_vf0,auVar12);
  auVar12 = _sqc2(auVar12);
  FUN_002b3d88(0,3);
  auVar6._8_8_ = extraout_v0_udw;
  auVar6._0_8_ = 0x6c0503ea01000404;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x10000005;
  auVar5 = _pcpyld(auVar6,auVar5);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  auVar9._12_4_ = uStack_a4;
  auVar9._8_4_ = uStack_a8;
  DAT_0040e5f0[4] = 0;
  DAT_0040e5f0[5] = 0;
  DAT_0040e5f0[6] = uStack_a8;
  DAT_0040e5f0[7] = uStack_a4;
  auVar12 = _lqc2(auVar12);
  auVar12 = _sqc2(auVar12);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 8) = auVar12;
  auVar8 = _lqc2(auVar8);
  auVar8 = _sqc2(auVar8);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0xc) = auVar8;
  auVar12 = _qmtc2(*(undefined4 *)(param_2 + 0x30));
  auVar8 = _lqc2(_DAT_00443340);
  auVar8 = _vmulbc(auVar8,auVar12);
  auVar8 = _sqc2(auVar8);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0x10) = auVar8;
  auVar9._0_8_ = 0x3026400000000000;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = 0x412;
  auVar8 = _pcpyld(auVar8,auVar9);
  DAT_0040e5f0[0x14] = auVar8._0_4_;
  DAT_0040e5f0[0x15] = auVar8._4_4_;
  DAT_0040e5f0[0x16] = auVar8._8_4_;
  DAT_0040e5f0[0x17] = auVar8._12_4_;
  pauVar1 = *(undefined1 (**) [16])(param_1 + 4);
  auVar12._8_8_ = auVar8._8_8_;
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    auVar5 = _lqc2(*pauVar1);
    _sqc2(auVar5);
    _vmove(auVar5);
    auVar6 = _lqc2(pauVar1[1]);
    auVar10 = _vaddbc(in_vf0,auVar6);
    _vmove(auVar10);
    _sqc2(auVar6);
    _vmove(auVar6);
    auVar7 = _vaddbc(in_vf0,auVar5);
    auVar8 = _lqc2(pauVar1[2]);
    _vmove(auVar7);
    auVar14 = _vaddbc(in_vf0,auVar8);
    auVar13 = _vaddbc(in_vf0,auVar8);
    _sqc2(auVar8);
    _vmove(auVar8);
    auVar11 = _vaddbc(in_vf0,auVar5);
    auVar9 = _lqc2(pauVar1[3]);
    _vmove(auVar11);
    auVar8 = _vmulbc(auVar14,auVar9);
    auVar6 = _vaddbc(in_vf0,auVar6);
    auVar5 = _vmulbc(auVar13,auVar9);
    auVar8 = _vadd(auVar8,auVar5);
    auVar5 = _vmulbc(auVar6,auVar9);
    auVar8 = _vadd(auVar8,auVar5);
    _sqc2(auVar9);
    auVar8 = _vsub(in_vf0,auVar8);
    _sqc2(auVar10);
    _sqc2(auVar7);
    _sqc2(auVar11);
    auStack_c0 = _sqc2(auVar8);
    auStack_f0 = _sqc2(auVar14);
    auStack_e0 = _sqc2(auVar13);
    auStack_d0 = _sqc2(auVar6);
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  if (*(int *)(param_1 + 4) != 0) {
    auVar7 = _lqc2(auStack_f0);
    auVar9 = _lqc2(auStack_e0);
    auVar6 = _lqc2(auStack_d0);
    auVar5 = _lqc2(auStack_c0);
    _vmulabc(auVar7,auVar8);
    _vmaddabc(auVar9,auVar8);
    _vmaddabc(auVar6,auVar8);
    auVar8 = _vmaddbc(auVar5,in_vf0);
  }
  auVar12._0_8_ = 0x10000001;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x6c0103f401000404;
  auVar12 = _pcpyld(auVar7,auVar12);
  DAT_0040e5f0[0x18] = auVar12._0_4_;
  DAT_0040e5f0[0x19] = auVar12._4_4_;
  DAT_0040e5f0[0x1a] = auVar12._8_4_;
  DAT_0040e5f0[0x1b] = auVar12._12_4_;
  auVar8 = _sqc2(auVar8);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0x1c) = auVar8;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
  return;
}


// ==== FUN_001ce1b8 @ 001ce1b8 ====

void FUN_001ce1b8(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  
  if (DAT_0040e064 != &DAT_003b0ca0) {
    DAT_0040e064 = &DAT_003b0ca0;
    FUN_002b3d88(0,7);
    auVar9._8_8_ = extraout_v0_udw;
    auVar9._0_8_ = 0x3b0ca050000000;
    auVar6._8_8_ = in_a1_udw;
    auVar6._0_8_ = 0x300000011000000;
    auVar10 = _pcpyld(auVar6,auVar9);
    *DAT_0040e5f0 = auVar10._0_4_;
    DAT_0040e5f0[1] = auVar10._4_4_;
    DAT_0040e5f0[2] = auVar10._8_4_;
    DAT_0040e5f0[3] = auVar10._12_4_;
    auVar11._8_8_ = auVar10._8_8_;
    auVar11._0_8_ = 0x10000000;
    auVar7._8_8_ = in_a1_udw;
    auVar7._0_8_ = 0x1400000002000190;
    auVar10 = _pcpyld(auVar7,auVar11);
    DAT_0040e5f0[4] = auVar10._0_4_;
    DAT_0040e5f0[5] = auVar10._4_4_;
    DAT_0040e5f0[6] = auVar10._8_4_;
    DAT_0040e5f0[7] = auVar10._12_4_;
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = 0x5000000400000000;
    auVar10._8_8_ = in_a0_udw;
    auVar10._0_8_ = 0x10000004;
    auVar10 = _pcpyld(auVar12,auVar10);
    DAT_0040e5f0[8] = auVar10._0_4_;
    DAT_0040e5f0[9] = auVar10._4_4_;
    DAT_0040e5f0[10] = auVar10._8_4_;
    DAT_0040e5f0[0xb] = auVar10._12_4_;
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = 0xe;
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = 0x1000000000008003;
    auVar10 = _pcpyld(auVar13,auVar2);
    DAT_0040e5f0[0xc] = auVar10._0_4_;
    DAT_0040e5f0[0xd] = auVar10._4_4_;
    DAT_0040e5f0[0xe] = auVar10._8_4_;
    DAT_0040e5f0[0xf] = auVar10._12_4_;
    auVar14._8_8_ = auVar10._8_8_;
    auVar14._0_8_ = 8;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 5;
    auVar10 = _pcpyld(auVar14,auVar3);
    DAT_0040e5f0[0x10] = auVar10._0_4_;
    DAT_0040e5f0[0x11] = auVar10._4_4_;
    DAT_0040e5f0[0x12] = auVar10._8_4_;
    DAT_0040e5f0[0x13] = auVar10._12_4_;
    auVar15._8_8_ = auVar10._8_8_;
    auVar15._0_8_ = 0x47;
    auVar4._8_8_ = in_a0_udw;
    auVar4._0_8_ = 0x51001;
    auVar10 = _pcpyld(auVar15,auVar4);
    DAT_0040e5f0[0x14] = auVar10._0_4_;
    DAT_0040e5f0[0x15] = auVar10._4_4_;
    DAT_0040e5f0[0x16] = auVar10._8_4_;
    DAT_0040e5f0[0x17] = auVar10._12_4_;
    auVar16._8_8_ = auVar10._8_8_;
    auVar16._0_8_ = 0x42;
    auVar5._8_8_ = in_a0_udw;
    auVar5._0_8_ = 0x8000000048;
    auVar10 = _pcpyld(auVar16,auVar5);
    DAT_0040e5f0[0x18] = auVar10._0_4_;
    DAT_0040e5f0[0x19] = auVar10._4_4_;
    DAT_0040e5f0[0x1a] = auVar10._8_4_;
    DAT_0040e5f0[0x1b] = auVar10._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  FUN_002b3d88(0,2);
  auVar17._8_8_ = extraout_v0_udw_00;
  auVar17._0_8_ = 0x1000000010000000;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x10000002;
  auVar10 = _pcpyld(auVar17,auVar1);
  *DAT_0040e5f0 = auVar10._0_4_;
  DAT_0040e5f0[1] = auVar10._4_4_;
  DAT_0040e5f0[2] = auVar10._8_4_;
  DAT_0040e5f0[3] = auVar10._12_4_;
  auVar18._8_8_ = auVar10._8_8_;
  auVar18._0_8_ = 0x6c0103f301000404;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = in_v1_udw;
  auVar10 = _pcpyld(auVar18,auVar8 << 0x40);
  DAT_0040e5f0[4] = auVar10._0_4_;
  DAT_0040e5f0[5] = auVar10._4_4_;
  DAT_0040e5f0[6] = auVar10._8_4_;
  DAT_0040e5f0[7] = auVar10._12_4_;
  auVar19._8_8_ = auVar10._8_8_;
  auVar19._0_8_ = (ulong)(*(byte *)(param_2 + 1) >> 4) & 1;
  auVar10 = _pcpyld(auVar19,auVar19);
  DAT_0040e5f0[8] = auVar10._0_4_;
  DAT_0040e5f0[9] = auVar10._4_4_;
  DAT_0040e5f0[10] = auVar10._8_4_;
  DAT_0040e5f0[0xb] = auVar10._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  *(undefined4 *)(PTR_DAT_003bd24c + 0x50) = 0;
  PTR_DAT_003bd24c[0x58] = 1;
  *(undefined4 *)(PTR_DAT_003bd24c + 0x54) = 5;
  return;
}


// ==== FUN_001ce3b8 @ 001ce3b8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ce3b8(int param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
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
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  if (PTR_DAT_003bd24c[0x58] != '\0') {
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    PTR_DAT_003bd24c[0x58] = 0;
  }
  FUN_002b3d88(0,3);
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0x10000006;
  auVar3._8_8_ = extraout_v0_udw;
  auVar3._0_8_ = 0x6c0603ea01000404;
  auVar3 = _pcpyld(auVar3,auVar4);
  *DAT_0040e5f0 = auVar3._0_4_;
  DAT_0040e5f0[1] = auVar3._4_4_;
  DAT_0040e5f0[2] = auVar3._8_4_;
  DAT_0040e5f0[3] = auVar3._12_4_;
  DAT_0040e5f0[4] = 0;
  DAT_0040e5f0[5] = 0;
  DAT_0040e5f0[6] = uStack_68;
  DAT_0040e5f0[7] = uStack_64;
  DAT_003bd250 = DAT_003bd250 + 0.01;
  if (1.0 < DAT_003bd250) {
    DAT_003bd250 = 0.0;
  }
  fVar2 = DAT_003bd250;
  DAT_0040e5f0[8] = DAT_003bd250;
  DAT_0040e5f0[9] = fVar2;
  DAT_0040e5f0[10] = fVar2;
  DAT_0040e5f0[0xb] = fVar2;
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
  auVar8 = _qmtc2(0x40000000);
  auVar3 = _vmulbc(auVar7,auVar8);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
  auVar4 = _vmulbc(auVar9,auVar8);
  fVar2 = (float)((int)auVar3._0_4_ * (uint)(0.0 < auVar3._0_4_));
  auVar3 = _qmfc2(auVar4._0_4_);
  _vmove(auVar7);
  auVar4 = _qmtc2((int)fVar2 * (uint)(fVar2 < 2.0) | (uint)(fVar2 >= 2.0) * 0x40000000);
  fVar2 = (float)((int)auVar3._0_4_ * (uint)(0.0 < auVar3._0_4_));
  auVar4 = _vaddbc(in_vf0,auVar4);
  auVar4 = _vmulbc(auVar4,auVar8);
  auVar6._8_8_ = auVar3._8_8_;
  auVar5 = _qmtc2(DAT_003bd1cc);
  auVar3 = _sqc2(auVar4);
  auVar4 = _vmulbc(auVar7,auVar8);
  auVar4 = _vmulbc(auVar4,auVar5);
  _vmove(auVar9);
  fStack_5c = auVar3._4_4_;
  auVar3 = _qmtc2((int)fVar2 * (uint)(fVar2 < 2.0) | (uint)(fVar2 >= 2.0) * 0x40000000);
  fStack_5c = (float)((int)fStack_5c * (uint)(0.0 < fStack_5c));
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar5 = _vmulbc(auVar3,auVar8);
  auVar7 = _vmulbc(auVar9,auVar8);
  auVar3 = _qmtc2((int)fStack_5c * (uint)(fStack_5c < 2.0) | (uint)(fStack_5c >= 2.0) * 0x40000000);
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vmulbc(auVar3,auVar8);
  auVar3 = _sqc2(auVar3);
  fStack_58 = auVar3._8_4_;
  auVar3 = _sqc2(auVar4);
  fStack_58 = (float)((int)fStack_58 * (uint)(0.0 < fStack_58));
  fStack_54 = auVar3._12_4_;
  auVar4 = _qmtc2((int)fStack_58 * (uint)(fStack_58 < 2.0) | (uint)(fStack_58 >= 2.0) * 0x40000000);
  auVar3 = _sqc2(auVar5);
  _vaddbc(in_vf0,auVar4);
  fStack_54 = (float)((int)fStack_54 * (uint)(0.0 < fStack_54));
  fStack_5c = auVar3._4_4_;
  fStack_5c = (float)((int)fStack_5c * (uint)(0.0 < fStack_5c));
  auVar3 = _qmtc2((int)fStack_54 * (uint)(fStack_54 < 2.0) | (uint)(fStack_54 >= 2.0) * 0x40000000);
  auVar4 = _vmulbc(in_vf0,auVar3);
  auVar3 = _qmtc2((int)fStack_5c * (uint)(fStack_5c < 2.0) | (uint)(fStack_5c >= 2.0) * 0x40000000);
  auVar3 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vmulbc(auVar3,auVar8);
  auVar3 = _sqc2(auVar3);
  fStack_58 = auVar3._8_4_;
  auVar3 = _sqc2(auVar7);
  fStack_58 = (float)((int)fStack_58 * (uint)(0.0 < fStack_58));
  fStack_54 = auVar3._12_4_;
  auVar3 = _qmtc2((int)fStack_58 * (uint)(fStack_58 < 2.0) | (uint)(fStack_58 >= 2.0) * 0x40000000);
  fStack_54 = (float)((int)fStack_54 * (uint)(0.0 < fStack_54));
  _vaddbc(in_vf0,auVar3);
  auVar3 = _qmtc2((int)fStack_54 * (uint)(fStack_54 < 2.0) | (uint)(fStack_54 >= 2.0) * 0x40000000);
  auVar3 = _vmulbc(in_vf0,auVar3);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0xc) = auVar3;
  auVar3 = _sqc2(auVar4);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0x10) = auVar3;
  auVar4 = _qmtc2(*(undefined4 *)(param_2 + 0x30));
  auVar3 = _lqc2(_DAT_00443340);
  auVar3 = _vmulbc(auVar3,auVar4);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0x14) = auVar3;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x412;
  auVar6._0_8_ = 0x3026400000000000;
  auVar3 = _pcpyld(auVar7,auVar6);
  DAT_0040e5f0[0x18] = auVar3._0_4_;
  DAT_0040e5f0[0x19] = auVar3._4_4_;
  DAT_0040e5f0[0x1a] = auVar3._8_4_;
  DAT_0040e5f0[0x1b] = auVar3._12_4_;
  pauVar1 = *(undefined1 (**) [16])(param_1 + 4);
  auVar5._8_8_ = auVar3._8_8_;
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    auVar4 = _lqc2(*pauVar1);
    _sqc2(auVar4);
    _vmove(auVar4);
    auVar6 = _lqc2(pauVar1[1]);
    auVar9 = _vaddbc(in_vf0,auVar6);
    _vmove(auVar9);
    _sqc2(auVar6);
    _vmove(auVar6);
    auVar8 = _vaddbc(in_vf0,auVar4);
    auVar3 = _lqc2(pauVar1[2]);
    _vmove(auVar8);
    auVar12 = _vaddbc(in_vf0,auVar3);
    auVar11 = _vaddbc(in_vf0,auVar3);
    _sqc2(auVar3);
    _vmove(auVar3);
    auVar10 = _vaddbc(in_vf0,auVar4);
    auVar7 = _lqc2(pauVar1[3]);
    _vmove(auVar10);
    auVar3 = _vmulbc(auVar12,auVar7);
    auVar6 = _vaddbc(in_vf0,auVar6);
    auVar4 = _vmulbc(auVar11,auVar7);
    auVar3 = _vadd(auVar3,auVar4);
    auVar4 = _vmulbc(auVar6,auVar7);
    auVar3 = _vadd(auVar3,auVar4);
    _sqc2(auVar7);
    auVar3 = _vsub(in_vf0,auVar3);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar10);
    auStack_80 = _sqc2(auVar3);
    auStack_b0 = _sqc2(auVar12);
    auStack_a0 = _sqc2(auVar11);
    auStack_90 = _sqc2(auVar6);
  }
  auVar3 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  if (*(int *)(param_1 + 4) != 0) {
    auVar8 = _lqc2(auStack_b0);
    auVar7 = _lqc2(auStack_a0);
    auVar6 = _lqc2(auStack_90);
    auVar4 = _lqc2(auStack_80);
    _vmulabc(auVar8,auVar3);
    _vmaddabc(auVar7,auVar3);
    _vmaddabc(auVar6,auVar3);
    auVar3 = _vmaddbc(auVar4,in_vf0);
  }
  auVar5._0_8_ = 0x10000001;
  auVar8._8_8_ = in_v1_udw;
  auVar8._0_8_ = 0x6c0103f401000404;
  auVar4 = _pcpyld(auVar8,auVar5);
  DAT_0040e5f0[0x1c] = auVar4._0_4_;
  DAT_0040e5f0[0x1d] = auVar4._4_4_;
  DAT_0040e5f0[0x1e] = auVar4._8_4_;
  DAT_0040e5f0[0x1f] = auVar4._12_4_;
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 0x20) = auVar3;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x24;
  return;
}


// ==== FUN_001ce780 @ 001ce780 ====

void FUN_001ce780(undefined8 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 extraout_v0_udw;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong in_v1_udw;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 in_a1_udw;
  
  if (DAT_0040e064 != &DAT_003b3780) {
    DAT_0040e064 = &DAT_003b3780;
    FUN_00270fd8(0x440280);
    FUN_002b3d88(0,2);
    auVar10._8_8_ = extraout_v0_udw;
    auVar10._0_8_ = 0x3b378050000000;
    auVar11._8_8_ = in_a1_udw;
    auVar11._0_8_ = 0x300000011000000;
    auVar11 = _pcpyld(auVar11,auVar10);
    *DAT_0040e5f0 = auVar11._0_4_;
    DAT_0040e5f0[1] = auVar11._4_4_;
    DAT_0040e5f0[2] = auVar11._8_4_;
    DAT_0040e5f0[3] = auVar11._12_4_;
    auVar12._8_8_ = auVar11._8_8_;
    auVar12._0_8_ = 0x10000000;
    auVar2._8_8_ = in_a1_udw;
    auVar2._0_8_ = 0x14000000020000f0;
    auVar11 = _pcpyld(auVar2,auVar12);
    DAT_0040e5f0[4] = auVar11._0_4_;
    DAT_0040e5f0[5] = auVar11._4_4_;
    DAT_0040e5f0[6] = auVar11._8_4_;
    DAT_0040e5f0[7] = auVar11._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
  }
  FUN_002b3d88(0,5);
  auVar13._8_8_ = extraout_v0_udw_00;
  auVar13._0_8_ = 0x10000004;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x5000000400000000;
  auVar11 = _pcpyld(auVar3,auVar13);
  *DAT_0040e5f0 = auVar11._0_4_;
  DAT_0040e5f0[1] = auVar11._4_4_;
  DAT_0040e5f0[2] = auVar11._8_4_;
  DAT_0040e5f0[3] = auVar11._12_4_;
  auVar14._8_8_ = auVar11._8_8_;
  auVar14._0_8_ = 0x1000000000008003;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0xe;
  auVar11 = _pcpyld(auVar4,auVar14);
  DAT_0040e5f0[4] = auVar11._0_4_;
  DAT_0040e5f0[5] = auVar11._4_4_;
  DAT_0040e5f0[6] = auVar11._8_4_;
  DAT_0040e5f0[7] = auVar11._12_4_;
  auVar15._8_8_ = auVar11._8_8_;
  auVar15._0_8_ = 8;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = in_v1_udw;
  auVar11 = _pcpyld(auVar15,auVar7 << 0x40);
  DAT_0040e5f0[8] = auVar11._0_4_;
  DAT_0040e5f0[9] = auVar11._4_4_;
  DAT_0040e5f0[10] = auVar11._8_4_;
  DAT_0040e5f0[0xb] = auVar11._12_4_;
  auVar16._8_8_ = auVar11._8_8_;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    uVar18 = 0x50003;
    if ((*(byte *)(param_2 + 1) & 0x20) != 0) {
      uVar18 = 0x5340d;
    }
  }
  else {
    uVar18 = 0x51001;
  }
  auVar16._0_8_ = 0x47;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar18;
  auVar5._8_8_ = in_a1_udw;
  auVar11 = _pcpyld(auVar16,auVar5);
  DAT_0040e5f0[0xc] = auVar11._0_4_;
  DAT_0040e5f0[0xd] = auVar11._4_4_;
  DAT_0040e5f0[0xe] = auVar11._8_4_;
  DAT_0040e5f0[0xf] = auVar11._12_4_;
  bVar1 = *(byte *)(param_2 + 1);
  auVar17._8_8_ = auVar11._8_8_;
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) != 0) {
      uVar19 = 0x62;
      if ((bVar1 & 2) != 0) {
        uVar19 = 0x42;
      }
      uVar20 = 0x80;
      goto LAB_001ce940;
    }
    uVar19 = 0xa8;
    uVar9 = 0x44;
  }
  else {
    uVar19 = 0x68;
    uVar9 = 0x8000000048;
  }
  uVar20 = 0x80;
  if ((bVar1 & 2) != 0) {
    uVar19 = (undefined4)uVar9;
    uVar20 = (undefined4)((ulong)uVar9 >> 0x20);
  }
LAB_001ce940:
  auVar17._0_8_ = 0x42;
  auVar6._4_4_ = uVar20;
  auVar6._0_4_ = uVar19;
  auVar6._8_8_ = in_a1_udw;
  auVar11 = _pcpyld(auVar17,auVar6);
  DAT_0040e5f0[0x10] = auVar11._0_4_;
  DAT_0040e5f0[0x11] = auVar11._4_4_;
  DAT_0040e5f0[0x12] = auVar11._8_4_;
  DAT_0040e5f0[0x13] = auVar11._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  *(undefined4 *)(PTR_DAT_003bd254 + 0x60) = *(undefined4 *)(param_2 + 4);
  puVar8 = PTR_DAT_003bd254;
  *(undefined4 *)(PTR_DAT_003bd254 + 0x50) = 0;
  *(undefined4 *)(puVar8 + 0x54) = 0;
  *(undefined4 *)(puVar8 + 0x58) = 0;
  *(undefined4 *)(puVar8 + 0x5c) = 0;
  puVar8 = PTR_DAT_003bd254;
  if ((*(byte *)(param_2 + 1) & 0x10) != 0) {
    *(undefined4 *)(PTR_DAT_003bd254 + 0x50) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x54) = 0;
    *(undefined4 *)(puVar8 + 0x58) = 0;
    *(undefined4 *)(puVar8 + 0x5c) = 0;
  }
  PTR_DAT_003bd254[0x68] = 1;
  *(undefined4 *)(PTR_DAT_003bd254 + 100) = 6;
  return;
}


// ==== FUN_001ce9e0 @ 001ce9e0 ====

void FUN_001ce9e0(void)

{
  undefined1 auVar1 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_a0_udw;
  undefined8 uStack_38;
  
  if (PTR_DAT_003bd254[0x68] != '\0') {
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    if (*(int *)(PTR_DAT_003bd254 + 0x60) != 0) {
      FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                   *(int *)(PTR_DAT_003bd254 + 0x60),1,0,0);
    }
    PTR_DAT_003bd254[0x68] = 0;
    FUN_002b3d88(0,3);
    auVar2._8_8_ = extraout_v0_udw;
    auVar2._0_8_ = 0x6c0203ed01000404;
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x10000002;
    auVar3 = _pcpyld(auVar2,auVar3);
    *DAT_0040e5f0 = auVar3._0_4_;
    DAT_0040e5f0[1] = auVar3._4_4_;
    DAT_0040e5f0[2] = auVar3._8_4_;
    DAT_0040e5f0[3] = auVar3._12_4_;
    DAT_0040e5f0[4] = 0;
    DAT_0040e5f0[5] = 0;
    DAT_0040e5f0[6] = (int)uStack_38;
    DAT_0040e5f0[7] = (int)((ulong)uStack_38 >> 0x20);
    auVar4._8_8_ = uStack_38;
    auVar4._0_8_ = 0x302e400000000000;
    auVar1._8_8_ = in_a0_udw;
    auVar1._0_8_ = 0x412;
    auVar3 = _pcpyld(auVar1,auVar4);
    DAT_0040e5f0[8] = auVar3._0_4_;
    DAT_0040e5f0[9] = auVar3._4_4_;
    DAT_0040e5f0[10] = auVar3._8_4_;
    DAT_0040e5f0[0xb] = auVar3._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  }
  return;
}


// ==== FUN_001ceb00 @ 001ceb00 ====

void FUN_001ceb00(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001ceb50 @ 001ceb50 ====

void FUN_001ceb50(undefined8 param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong in_v0_udw;
  undefined8 in_v1_udw;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  int iVar18;
  long lVar19;
  undefined1 in_s0_qw [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar20;
  
  uVar20 = in_s0_qw._8_8_;
  lVar19 = 0x3a5960;
  DAT_0040e064 = &DAT_003a5960;
  FUN_002b3d88(0,7);
  auVar21._0_8_ = lVar19 << 0x20 | 0x50000000;
  auVar21._8_8_ = uVar20;
  auVar22._8_8_ = in_v0_udw;
  auVar22._0_8_ = 0x300000011000000;
  auVar22 = _pcpyld(auVar22,auVar21);
  *DAT_0040e5f0 = auVar22._0_4_;
  DAT_0040e5f0[1] = auVar22._4_4_;
  DAT_0040e5f0[2] = auVar22._8_4_;
  DAT_0040e5f0[3] = auVar22._12_4_;
  auVar23._8_8_ = auVar22._8_8_;
  auVar23._0_8_ = 0x10000000;
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x14000000020000f0;
  auVar22 = _pcpyld(auVar2,auVar23);
  DAT_0040e5f0[4] = auVar22._0_4_;
  DAT_0040e5f0[5] = auVar22._4_4_;
  DAT_0040e5f0[6] = auVar22._8_4_;
  DAT_0040e5f0[7] = auVar22._12_4_;
  auVar24._8_8_ = auVar22._8_8_;
  auVar24._0_8_ = 0x10000004;
  auVar3._8_8_ = in_v0_udw;
  auVar3._0_8_ = 0x5000000400000000;
  auVar22 = _pcpyld(auVar3,auVar24);
  DAT_0040e5f0[8] = auVar22._0_4_;
  DAT_0040e5f0[9] = auVar22._4_4_;
  DAT_0040e5f0[10] = auVar22._8_4_;
  DAT_0040e5f0[0xb] = auVar22._12_4_;
  auVar25._8_8_ = auVar22._8_8_;
  auVar25._0_8_ = 0x1000000000008003;
  auVar4._8_8_ = in_v0_udw;
  auVar4._0_8_ = 0xe;
  auVar22 = _pcpyld(auVar4,auVar25);
  DAT_0040e5f0[0xc] = auVar22._0_4_;
  DAT_0040e5f0[0xd] = auVar22._4_4_;
  DAT_0040e5f0[0xe] = auVar22._8_4_;
  DAT_0040e5f0[0xf] = auVar22._12_4_;
  auVar14._8_8_ = in_v1_udw;
  auVar14._0_8_ = 8;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = in_v0_udw;
  auVar22 = _pcpyld(auVar14,auVar9 << 0x40);
  DAT_0040e5f0[0x10] = auVar22._0_4_;
  DAT_0040e5f0[0x11] = auVar22._4_4_;
  DAT_0040e5f0[0x12] = auVar22._8_4_;
  DAT_0040e5f0[0x13] = auVar22._12_4_;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    auVar16._8_8_ = in_v1_udw;
    auVar16._0_8_ = 0x47;
    auVar7._8_8_ = in_v0_udw;
    auVar7._0_8_ = 0x50003;
    auVar22 = _pcpyld(auVar16,auVar7);
    DAT_0040e5f0[0x14] = auVar22._0_4_;
    DAT_0040e5f0[0x15] = auVar22._4_4_;
    DAT_0040e5f0[0x16] = auVar22._8_4_;
    DAT_0040e5f0[0x17] = auVar22._12_4_;
  }
  else {
    auVar15._8_8_ = in_v1_udw;
    auVar15._0_8_ = 0x47;
    auVar5._8_8_ = in_v0_udw;
    auVar5._0_8_ = 0x51001;
    auVar22 = _pcpyld(auVar15,auVar5);
    DAT_0040e5f0[0x14] = auVar22._0_4_;
    DAT_0040e5f0[0x15] = auVar22._4_4_;
    DAT_0040e5f0[0x16] = auVar22._8_4_;
    DAT_0040e5f0[0x17] = auVar22._12_4_;
  }
  bVar1 = *(byte *)(param_2 + 1);
  auVar26._8_8_ = auVar22._8_8_;
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) != 0) {
      uVar20 = 0x8000000062;
      if ((bVar1 & 2) != 0) {
        uVar20 = 0x8000000042;
      }
      auVar26._0_8_ = uVar20;
      goto LAB_001cece0;
    }
    uVar20 = 0x80000000a8;
    uVar12 = 0x44;
    uVar13 = 0;
  }
  else {
    uVar20 = 0x8000000068;
    uVar13 = 0x80;
    uVar12 = 0x48;
  }
  auVar26._0_8_ = uVar20;
  if ((bVar1 & 2) != 0) {
    auVar26._4_4_ = uVar13;
    auVar26._0_4_ = uVar12;
  }
LAB_001cece0:
  auVar6._8_8_ = in_v0_udw;
  auVar6._0_8_ = 0x42;
  auVar22 = _pcpyld(auVar6,auVar26);
  DAT_0040e5f0[0x18] = auVar22._0_4_;
  DAT_0040e5f0[0x19] = auVar22._4_4_;
  DAT_0040e5f0[0x1a] = auVar22._8_4_;
  DAT_0040e5f0[0x1b] = auVar22._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  iVar18 = 0x3c0000;
  auVar17._8_8_ = in_v1_udw;
  auVar17._0_8_ = 0x6c0603ee01000404;
  PTR_DAT_003bd258[0x74] = 0;
  uVar11 = DAT_0044334c;
  uVar13 = DAT_00443348;
  uVar12 = DAT_00443344;
  puVar10 = PTR_DAT_003bd258;
  auVar8._8_4_ = in_a0_udw;
  auVar8._0_8_ = 0x10000006;
  auVar8._12_4_ = in_register_0000004c;
  auVar22 = _pcpyld(auVar17,auVar8);
  *(undefined4 *)(PTR_DAT_003bd258 + 0x20) = DAT_00443340;
  *(undefined4 *)(puVar10 + 0x24) = uVar12;
  *(undefined4 *)(puVar10 + 0x28) = uVar13;
  *(undefined4 *)(puVar10 + 0x2c) = uVar11;
  puVar10 = PTR_DAT_003bd258;
  *(undefined4 *)(PTR_DAT_003bd258 + 0x60) = 0;
  *(undefined4 *)(puVar10 + 100) = 0;
  *(undefined4 *)(puVar10 + 0x68) = 0;
  *(undefined4 *)(puVar10 + 0x6c) = 0;
  puVar10 = PTR_DAT_003bd258;
  *(int *)PTR_DAT_003bd258 = auVar22._0_4_;
  *(int *)(puVar10 + 4) = auVar22._4_4_;
  *(int *)(puVar10 + 8) = auVar22._8_4_;
  *(int *)(puVar10 + 0xc) = auVar22._12_4_;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  *(undefined4 *)(*(int *)(iVar18 + -0x2da8) + 0x70) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(*(int *)(iVar18 + -0x2da8) + 0x74) = 1;
  return;
}


// ==== FUN_001ceda0 @ 001ceda0 ====

void FUN_001ceda0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 in_v1_udw;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uStack_38;
  
  if (PTR_DAT_003bd258[0x74] != '\0') {
    if (*(int *)(PTR_DAT_003bd258 + 0x70) != 0) {
      FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,0x440280,
                   *(int *)(PTR_DAT_003bd258 + 0x70),1,0,0);
    }
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    PTR_DAT_003bd258[0x74] = 0;
  }
  FUN_002b3d88(0,0xb);
  iVar5 = 6;
  pauVar7 = (undefined1 (*) [16])PTR_DAT_003bd258;
  do {
    puVar6 = DAT_0040e5f0;
    auVar3 = *pauVar7;
    pauVar7 = pauVar7 + 1;
    *puVar6 = auVar3._0_4_;
    puVar6[1] = auVar3._4_4_;
    puVar6[2] = auVar3._8_4_;
    puVar6[3] = auVar3._12_4_;
    iVar5 = iVar5 + -1;
    DAT_0040e5f0 = puVar6 + 4;
  } while (-1 < iVar5 >> 0x1f);
  auVar2._8_8_ = auVar3._8_8_;
  auVar2._0_8_ = 0x6c0203ec01000404;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x10000002;
  auVar3 = _pcpyld(auVar2,auVar3);
  puVar6[4] = auVar3._0_4_;
  puVar6[5] = auVar3._4_4_;
  puVar6[6] = auVar3._8_4_;
  puVar6[7] = auVar3._12_4_;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = (int)uStack_38;
  puVar6[0xb] = (int)((ulong)uStack_38 >> 0x20);
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = 0x302e400000000000;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x412;
  auVar3 = _pcpyld(auVar1,auVar4);
  puVar6[0xc] = auVar3._0_4_;
  puVar6[0xd] = auVar3._4_4_;
  puVar6[0xe] = auVar3._8_4_;
  puVar6[0xf] = auVar3._12_4_;
  DAT_0040e5f0 = puVar6 + 0x10;
  return;
}


// ==== FUN_001ceee8 @ 001ceee8 ====

void FUN_001ceee8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cef38 @ 001cef38 ====

void FUN_001cef38(undefined8 param_1,int param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar5 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  undefined1 (*pauVar6) [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  pauVar6 = (undefined1 (*) [16])param_3;
  if (param_3 != 0) {
    auVar10 = _lqc2(*pauVar6);
    auVar11 = _lqc2(pauVar6[1]);
    auVar12 = _lqc2(pauVar6[2]);
    _vmove(auVar10);
    _vmove(auVar11);
    auVar14 = _vaddbc(in_vf0,auVar11);
    auVar13 = _vaddbc(in_vf0,auVar10);
    _vmove(auVar12);
    auVar15 = _vaddbc(in_vf0,auVar10);
    _vmove(auVar14);
    _vmove(auVar13);
    auVar17 = _vaddbc(in_vf0,auVar12);
    auVar9 = _lqc2(pauVar6[3]);
    auVar18 = _vaddbc(in_vf0,auVar12);
    _vmove(auVar15);
    auVar8 = _vmulbc(auVar17,auVar9);
    auVar16 = _vaddbc(in_vf0,auVar11);
    auVar7 = _vmulbc(auVar18,auVar9);
    auVar8 = _vadd(auVar8,auVar7);
    auVar7 = _vmulbc(auVar16,auVar9);
    _sqc2(auVar10);
    auVar7 = _vadd(auVar8,auVar7);
    _sqc2(auVar11);
    auVar7 = _vsub(in_vf0,auVar7);
    _sqc2(auVar12);
    _sqc2(auVar9);
    _sqc2(auVar14);
    _sqc2(auVar13);
    _sqc2(auVar15);
    auStack_60 = _sqc2(auVar7);
    auStack_90 = _sqc2(auVar17);
    auStack_80 = _sqc2(auVar18);
    auStack_70 = _sqc2(auVar16);
  }
  if (DAT_0040e064 != &DAT_003b4b00) {
    DAT_0040e064 = &DAT_003b4b00;
    FUN_002b3d88(0,7);
    auVar13._8_8_ = extraout_v0_udw;
    auVar13._0_8_ = 0x3b4b0050000000;
    auVar8._8_8_ = in_a1_udw;
    auVar8._0_8_ = 0x300000011000000;
    auVar7 = _pcpyld(auVar8,auVar13);
    *DAT_0040e5f0 = auVar7._0_4_;
    DAT_0040e5f0[1] = auVar7._4_4_;
    DAT_0040e5f0[2] = auVar7._8_4_;
    DAT_0040e5f0[3] = auVar7._12_4_;
    auVar14._8_8_ = auVar7._8_8_;
    auVar14._0_8_ = 0x10000000;
    auVar9._8_8_ = in_a1_udw;
    auVar9._0_8_ = 0x14000000020000f0;
    auVar7 = _pcpyld(auVar9,auVar14);
    DAT_0040e5f0[4] = auVar7._0_4_;
    DAT_0040e5f0[5] = auVar7._4_4_;
    DAT_0040e5f0[6] = auVar7._8_4_;
    DAT_0040e5f0[7] = auVar7._12_4_;
    auVar15._8_8_ = auVar7._8_8_;
    auVar15._0_8_ = 0x10000004;
    auVar10._8_8_ = in_a1_udw;
    auVar10._0_8_ = 0x5000000400000000;
    auVar7 = _pcpyld(auVar10,auVar15);
    DAT_0040e5f0[8] = auVar7._0_4_;
    DAT_0040e5f0[9] = auVar7._4_4_;
    DAT_0040e5f0[10] = auVar7._8_4_;
    DAT_0040e5f0[0xb] = auVar7._12_4_;
    auVar16._8_8_ = auVar7._8_8_;
    auVar16._0_8_ = 0x1000000000008003;
    auVar11._8_8_ = in_a1_udw;
    auVar11._0_8_ = 0xe;
    auVar7 = _pcpyld(auVar11,auVar16);
    DAT_0040e5f0[0xc] = auVar7._0_4_;
    DAT_0040e5f0[0xd] = auVar7._4_4_;
    DAT_0040e5f0[0xe] = auVar7._8_4_;
    DAT_0040e5f0[0xf] = auVar7._12_4_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar7._8_8_;
    auVar7._8_8_ = in_a0_udw;
    auVar7._0_8_ = 8;
    auVar7 = _pcpyld(auVar7,auVar12 << 0x40);
    DAT_0040e5f0[0x10] = auVar7._0_4_;
    DAT_0040e5f0[0x11] = auVar7._4_4_;
    DAT_0040e5f0[0x12] = auVar7._8_4_;
    DAT_0040e5f0[0x13] = auVar7._12_4_;
    auVar17._8_8_ = auVar7._8_8_;
    uVar3 = 0x50003;
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
      uVar3 = 0x51001;
    }
    auVar17._0_8_ = uVar3;
    auVar2._8_8_ = in_a1_udw;
    auVar2._0_8_ = 0x47;
    auVar7 = _pcpyld(auVar2,auVar17);
    DAT_0040e5f0[0x14] = auVar7._0_4_;
    DAT_0040e5f0[0x15] = auVar7._4_4_;
    DAT_0040e5f0[0x16] = auVar7._8_4_;
    DAT_0040e5f0[0x17] = auVar7._12_4_;
    auVar4._8_8_ = auVar7._8_8_;
    auVar4._0_8_ = 0x42;
    auVar18._8_8_ = in_a0_udw;
    auVar18._0_8_ = 0x3200000058;
    auVar7 = _pcpyld(auVar4,auVar18);
    DAT_0040e5f0[0x18] = auVar7._0_4_;
    DAT_0040e5f0[0x19] = auVar7._4_4_;
    DAT_0040e5f0[0x1a] = auVar7._8_4_;
    DAT_0040e5f0[0x1b] = auVar7._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  FUN_002b3d88(0,2);
  auVar7 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  if (param_3 != 0) {
    auVar11 = _lqc2(auStack_90);
    auVar10 = _lqc2(auStack_80);
    auVar9 = _lqc2(auStack_70);
    auVar8 = _lqc2(auStack_60);
    _vmulabc(auVar11,auVar7);
    _vmaddabc(auVar10,auVar7);
    _vmaddabc(auVar9,auVar7);
    auVar7 = _vmaddbc(auVar8,in_vf0);
  }
  auVar5._8_8_ = extraout_v0_udw_00;
  auVar5._0_8_ = 0x6c0103f401000404;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x10000001;
  auVar8 = _pcpyld(auVar5,auVar1);
  *DAT_0040e5f0 = auVar8._0_4_;
  DAT_0040e5f0[1] = auVar8._4_4_;
  DAT_0040e5f0[2] = auVar8._8_4_;
  DAT_0040e5f0[3] = auVar8._12_4_;
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 4) = auVar7;
  DAT_0040e5f0 = DAT_0040e5f0 + 8;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,pauVar6);
  *(undefined4 *)(PTR_DAT_003bd25c + 0x50) = *(undefined4 *)(param_2 + 4);
  PTR_DAT_003bd25c[0x58] = 1;
  *(undefined4 *)(PTR_DAT_003bd25c + 0x54) = 5;
  return;
}


// ==== FUN_001cf1d0 @ 001cf1d0 ====

void FUN_001cf1d0(void)

{
  undefined1 auVar1 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_a0_udw;
  undefined8 uStack_38;
  
  if (PTR_DAT_003bd25c[0x58] != '\0') {
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    if (*(int *)(PTR_DAT_003bd25c + 0x50) != 0) {
      FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                   *(int *)(PTR_DAT_003bd25c + 0x50),1,0,0);
    }
    PTR_DAT_003bd25c[0x58] = 0;
  }
  FUN_002b3d88(0,3);
  auVar2._8_8_ = extraout_v0_udw;
  auVar2._0_8_ = 0x6c0203ed01000404;
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 0x10000002;
  auVar3 = _pcpyld(auVar2,auVar3);
  *DAT_0040e5f0 = auVar3._0_4_;
  DAT_0040e5f0[1] = auVar3._4_4_;
  DAT_0040e5f0[2] = auVar3._8_4_;
  DAT_0040e5f0[3] = auVar3._12_4_;
  DAT_0040e5f0[4] = 0;
  DAT_0040e5f0[5] = 0;
  DAT_0040e5f0[6] = (int)uStack_38;
  DAT_0040e5f0[7] = (int)((ulong)uStack_38 >> 0x20);
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = 0x302e400000000000;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x412;
  auVar3 = _pcpyld(auVar1,auVar4);
  DAT_0040e5f0[8] = auVar3._0_4_;
  DAT_0040e5f0[9] = auVar3._4_4_;
  DAT_0040e5f0[10] = auVar3._8_4_;
  DAT_0040e5f0[0xb] = auVar3._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_001cf2f0 @ 001cf2f0 ====

void FUN_001cf2f0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cf340 @ 001cf340 ====

void FUN_001cf340(undefined8 param_1,int param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 extraout_v0_udw;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined1 auVar22 [16];
  
  if (DAT_0040e064 != &DAT_003a85f0) {
    DAT_0040e064 = &DAT_003a85f0;
    FUN_002b3d88(0,7);
    auVar14._8_8_ = extraout_v0_udw;
    auVar14._0_8_ = 0x300000011000000;
    auVar15._8_8_ = in_v1_udw;
    auVar15._0_8_ = 0x3a85f050000000;
    auVar15 = _pcpyld(auVar14,auVar15);
    *DAT_0040e5f0 = auVar15._0_4_;
    DAT_0040e5f0[1] = auVar15._4_4_;
    DAT_0040e5f0[2] = auVar15._8_4_;
    DAT_0040e5f0[3] = auVar15._12_4_;
    auVar16._8_8_ = auVar15._8_8_;
    auVar16._0_8_ = 0x14000000020000f0;
    auVar1._8_8_ = in_v1_udw;
    auVar1._0_8_ = 0x10000000;
    auVar15 = _pcpyld(auVar16,auVar1);
    DAT_0040e5f0[4] = auVar15._0_4_;
    DAT_0040e5f0[5] = auVar15._4_4_;
    DAT_0040e5f0[6] = auVar15._8_4_;
    DAT_0040e5f0[7] = auVar15._12_4_;
    auVar17._8_8_ = auVar15._8_8_;
    auVar17._0_8_ = 0x5000000400000000;
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x10000004;
    auVar15 = _pcpyld(auVar17,auVar2);
    DAT_0040e5f0[8] = auVar15._0_4_;
    DAT_0040e5f0[9] = auVar15._4_4_;
    DAT_0040e5f0[10] = auVar15._8_4_;
    DAT_0040e5f0[0xb] = auVar15._12_4_;
    auVar18._8_8_ = auVar15._8_8_;
    auVar18._0_8_ = 0xe;
    auVar3._8_8_ = in_v1_udw;
    auVar3._0_8_ = 0x1000000000008003;
    auVar15 = _pcpyld(auVar18,auVar3);
    DAT_0040e5f0[0xc] = auVar15._0_4_;
    DAT_0040e5f0[0xd] = auVar15._4_4_;
    DAT_0040e5f0[0xe] = auVar15._8_4_;
    DAT_0040e5f0[0xf] = auVar15._12_4_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar15._8_8_;
    auVar4._8_8_ = in_v1_udw;
    auVar4._0_8_ = 8;
    auVar15 = _pcpyld(auVar4,auVar9 << 0x40);
    DAT_0040e5f0[0x10] = auVar15._0_4_;
    DAT_0040e5f0[0x11] = auVar15._4_4_;
    DAT_0040e5f0[0x12] = auVar15._8_4_;
    DAT_0040e5f0[0x13] = auVar15._12_4_;
    auVar19._8_8_ = auVar15._8_8_;
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      auVar20._8_8_ = auVar19._8_8_;
      auVar20._0_8_ = 0x50003;
      auVar8._8_8_ = in_v1_udw;
      auVar8._0_8_ = 0x47;
      auVar15 = _pcpyld(auVar8,auVar20);
      DAT_0040e5f0[0x14] = auVar15._0_4_;
      DAT_0040e5f0[0x15] = auVar15._4_4_;
      DAT_0040e5f0[0x16] = auVar15._8_4_;
      DAT_0040e5f0[0x17] = auVar15._12_4_;
    }
    else {
      auVar19._0_8_ = 0x51001;
      auVar5._8_8_ = in_v1_udw;
      auVar5._0_8_ = 0x47;
      auVar15 = _pcpyld(auVar5,auVar19);
      DAT_0040e5f0[0x14] = auVar15._0_4_;
      DAT_0040e5f0[0x15] = auVar15._4_4_;
      DAT_0040e5f0[0x16] = auVar15._8_4_;
      DAT_0040e5f0[0x17] = auVar15._12_4_;
    }
    auVar21._8_8_ = auVar15._8_8_;
    auVar21._0_8_ = 0x42;
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0x89;
    auVar15 = _pcpyld(auVar21,auVar6);
    DAT_0040e5f0[0x18] = auVar15._0_4_;
    DAT_0040e5f0[0x19] = auVar15._4_4_;
    DAT_0040e5f0[0x1a] = auVar15._8_4_;
    DAT_0040e5f0[0x1b] = auVar15._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  auVar22._8_8_ = in_a0_udw;
  auVar22._0_8_ = 0x6c0603ee01000404;
  PTR_DAT_003bd260[0x74] = 0;
  uVar13 = DAT_0044334c;
  uVar12 = DAT_00443348;
  uVar11 = DAT_00443344;
  puVar10 = PTR_DAT_003bd260;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x10000006;
  auVar15 = _pcpyld(auVar22,auVar7);
  *(undefined4 *)(PTR_DAT_003bd260 + 0x20) = DAT_00443340;
  *(undefined4 *)(puVar10 + 0x24) = uVar11;
  *(undefined4 *)(puVar10 + 0x28) = uVar12;
  *(undefined4 *)(puVar10 + 0x2c) = uVar13;
  puVar10 = PTR_DAT_003bd260;
  *(undefined4 *)(PTR_DAT_003bd260 + 0x60) = 0;
  *(undefined4 *)(puVar10 + 100) = 0;
  *(undefined4 *)(puVar10 + 0x68) = 0;
  *(undefined4 *)(puVar10 + 0x6c) = 0;
  puVar10 = PTR_DAT_003bd260;
  *(int *)PTR_DAT_003bd260 = auVar15._0_4_;
  *(int *)(puVar10 + 4) = auVar15._4_4_;
  *(int *)(puVar10 + 8) = auVar15._8_4_;
  *(int *)(puVar10 + 0xc) = auVar15._12_4_;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  *(undefined4 *)(PTR_DAT_003bd260 + 0x70) = *(undefined4 *)(param_2 + 4);
  PTR_DAT_003bd260[0x74] = 1;
  return;
}


// ==== FUN_001cf530 @ 001cf530 ====

void FUN_001cf530(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 in_v1_udw;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uStack_38;
  
  if (PTR_DAT_003bd260[0x74] != '\0') {
    if (*(int *)(PTR_DAT_003bd260 + 0x70) != 0) {
      FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,0x440280,
                   *(int *)(PTR_DAT_003bd260 + 0x70),1,0,0);
    }
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    PTR_DAT_003bd260[0x74] = 0;
  }
  FUN_002b3d88(0,0xb);
  iVar5 = 6;
  pauVar7 = (undefined1 (*) [16])PTR_DAT_003bd260;
  do {
    puVar6 = DAT_0040e5f0;
    auVar3 = *pauVar7;
    pauVar7 = pauVar7 + 1;
    *puVar6 = auVar3._0_4_;
    puVar6[1] = auVar3._4_4_;
    puVar6[2] = auVar3._8_4_;
    puVar6[3] = auVar3._12_4_;
    iVar5 = iVar5 + -1;
    DAT_0040e5f0 = puVar6 + 4;
  } while (-1 < iVar5 >> 0x1f);
  auVar2._8_8_ = auVar3._8_8_;
  auVar2._0_8_ = 0x6c0203ec01000404;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x10000002;
  auVar3 = _pcpyld(auVar2,auVar3);
  puVar6[4] = auVar3._0_4_;
  puVar6[5] = auVar3._4_4_;
  puVar6[6] = auVar3._8_4_;
  puVar6[7] = auVar3._12_4_;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = (int)uStack_38;
  puVar6[0xb] = (int)((ulong)uStack_38 >> 0x20);
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = 0x302e400000000000;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x412;
  auVar3 = _pcpyld(auVar1,auVar4);
  puVar6[0xc] = auVar3._0_4_;
  puVar6[0xd] = auVar3._4_4_;
  puVar6[0xe] = auVar3._8_4_;
  puVar6[0xf] = auVar3._12_4_;
  DAT_0040e5f0 = puVar6 + 0x10;
  return;
}


// ==== FUN_001cf678 @ 001cf678 ====

void FUN_001cf678(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cf6c8 @ 001cf6c8 ====

void FUN_001cf6c8(undefined8 param_1,int param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 extraout_v0_udw;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined1 auVar22 [16];
  
  if (DAT_0040e064 != &DAT_003a6ef0) {
    DAT_0040e064 = &DAT_003a6ef0;
    FUN_002b3d88(0,7);
    auVar14._8_8_ = extraout_v0_udw;
    auVar14._0_8_ = 0x3a6ef050000000;
    auVar15._8_8_ = in_v1_udw;
    auVar15._0_8_ = 0x300000011000000;
    auVar15 = _pcpyld(auVar15,auVar14);
    *DAT_0040e5f0 = auVar15._0_4_;
    DAT_0040e5f0[1] = auVar15._4_4_;
    DAT_0040e5f0[2] = auVar15._8_4_;
    DAT_0040e5f0[3] = auVar15._12_4_;
    auVar16._8_8_ = auVar15._8_8_;
    auVar16._0_8_ = 0x10000000;
    auVar1._8_8_ = in_v1_udw;
    auVar1._0_8_ = 0x14000000020000f0;
    auVar15 = _pcpyld(auVar1,auVar16);
    DAT_0040e5f0[4] = auVar15._0_4_;
    DAT_0040e5f0[5] = auVar15._4_4_;
    DAT_0040e5f0[6] = auVar15._8_4_;
    DAT_0040e5f0[7] = auVar15._12_4_;
    auVar17._8_8_ = auVar15._8_8_;
    auVar17._0_8_ = 0x10000004;
    auVar2._8_8_ = in_v1_udw;
    auVar2._0_8_ = 0x5000000400000000;
    auVar15 = _pcpyld(auVar2,auVar17);
    DAT_0040e5f0[8] = auVar15._0_4_;
    DAT_0040e5f0[9] = auVar15._4_4_;
    DAT_0040e5f0[10] = auVar15._8_4_;
    DAT_0040e5f0[0xb] = auVar15._12_4_;
    auVar18._8_8_ = auVar15._8_8_;
    auVar18._0_8_ = 0x1000000000008003;
    auVar3._8_8_ = in_v1_udw;
    auVar3._0_8_ = 0xe;
    auVar15 = _pcpyld(auVar3,auVar18);
    DAT_0040e5f0[0xc] = auVar15._0_4_;
    DAT_0040e5f0[0xd] = auVar15._4_4_;
    DAT_0040e5f0[0xe] = auVar15._8_4_;
    DAT_0040e5f0[0xf] = auVar15._12_4_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar15._8_8_;
    auVar4._8_8_ = in_v1_udw;
    auVar4._0_8_ = 8;
    auVar15 = _pcpyld(auVar4,auVar9 << 0x40);
    DAT_0040e5f0[0x10] = auVar15._0_4_;
    DAT_0040e5f0[0x11] = auVar15._4_4_;
    DAT_0040e5f0[0x12] = auVar15._8_4_;
    DAT_0040e5f0[0x13] = auVar15._12_4_;
    auVar19._8_8_ = auVar15._8_8_;
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      auVar20._8_8_ = auVar19._8_8_;
      auVar20._0_8_ = 0x50003;
      auVar8._8_8_ = in_v1_udw;
      auVar8._0_8_ = 0x47;
      auVar15 = _pcpyld(auVar8,auVar20);
      DAT_0040e5f0[0x14] = auVar15._0_4_;
      DAT_0040e5f0[0x15] = auVar15._4_4_;
      DAT_0040e5f0[0x16] = auVar15._8_4_;
      DAT_0040e5f0[0x17] = auVar15._12_4_;
    }
    else {
      auVar19._0_8_ = 0x51001;
      auVar5._8_8_ = in_v1_udw;
      auVar5._0_8_ = 0x47;
      auVar15 = _pcpyld(auVar5,auVar19);
      DAT_0040e5f0[0x14] = auVar15._0_4_;
      DAT_0040e5f0[0x15] = auVar15._4_4_;
      DAT_0040e5f0[0x16] = auVar15._8_4_;
      DAT_0040e5f0[0x17] = auVar15._12_4_;
    }
    auVar21._8_8_ = auVar15._8_8_;
    auVar21._0_8_ = 0x80000000a8;
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0x42;
    auVar15 = _pcpyld(auVar6,auVar21);
    DAT_0040e5f0[0x18] = auVar15._0_4_;
    DAT_0040e5f0[0x19] = auVar15._4_4_;
    DAT_0040e5f0[0x1a] = auVar15._8_4_;
    DAT_0040e5f0[0x1b] = auVar15._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  }
  auVar22._8_8_ = in_a0_udw;
  auVar22._0_8_ = 0x6c0603ee01000404;
  PTR_DAT_003bd264[0x74] = 0;
  uVar13 = DAT_0044334c;
  uVar12 = DAT_00443348;
  uVar11 = DAT_00443344;
  puVar10 = PTR_DAT_003bd264;
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x10000006;
  auVar15 = _pcpyld(auVar22,auVar7);
  *(undefined4 *)(PTR_DAT_003bd264 + 0x20) = DAT_00443340;
  *(undefined4 *)(puVar10 + 0x24) = uVar11;
  *(undefined4 *)(puVar10 + 0x28) = uVar12;
  *(undefined4 *)(puVar10 + 0x2c) = uVar13;
  puVar10 = PTR_DAT_003bd264;
  *(undefined4 *)(PTR_DAT_003bd264 + 0x60) = 0;
  *(undefined4 *)(puVar10 + 100) = 0;
  *(undefined4 *)(puVar10 + 0x68) = 0;
  *(undefined4 *)(puVar10 + 0x6c) = 0;
  puVar10 = PTR_DAT_003bd264;
  *(int *)PTR_DAT_003bd264 = auVar15._0_4_;
  *(int *)(puVar10 + 4) = auVar15._4_4_;
  *(int *)(puVar10 + 8) = auVar15._8_4_;
  *(int *)(puVar10 + 0xc) = auVar15._12_4_;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,param_3);
  *(undefined4 *)(PTR_DAT_003bd264 + 0x70) = *(undefined4 *)(param_2 + 4);
  PTR_DAT_003bd264[0x74] = 1;
  return;
}


// ==== FUN_001cf8c0 @ 001cf8c0 ====

void FUN_001cf8c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 in_v1_udw;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uStack_38;
  
  if (PTR_DAT_003bd264[0x74] != '\0') {
    if (*(int *)(PTR_DAT_003bd264 + 0x70) != 0) {
      FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,0x440280,
                   *(int *)(PTR_DAT_003bd264 + 0x70),1,0,0);
    }
    FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
    PTR_DAT_003bd264[0x74] = 0;
  }
  FUN_002b3d88(0,0xb);
  iVar5 = 6;
  pauVar7 = (undefined1 (*) [16])PTR_DAT_003bd264;
  do {
    puVar6 = DAT_0040e5f0;
    auVar3 = *pauVar7;
    pauVar7 = pauVar7 + 1;
    *puVar6 = auVar3._0_4_;
    puVar6[1] = auVar3._4_4_;
    puVar6[2] = auVar3._8_4_;
    puVar6[3] = auVar3._12_4_;
    iVar5 = iVar5 + -1;
    DAT_0040e5f0 = puVar6 + 4;
  } while (-1 < iVar5 >> 0x1f);
  auVar2._8_8_ = auVar3._8_8_;
  auVar2._0_8_ = 0x6c0203ec01000404;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x10000002;
  auVar3 = _pcpyld(auVar2,auVar3);
  puVar6[4] = auVar3._0_4_;
  puVar6[5] = auVar3._4_4_;
  puVar6[6] = auVar3._8_4_;
  puVar6[7] = auVar3._12_4_;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = (int)uStack_38;
  puVar6[0xb] = (int)((ulong)uStack_38 >> 0x20);
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = 0x302e400000000000;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x412;
  auVar3 = _pcpyld(auVar1,auVar4);
  puVar6[0xc] = auVar3._0_4_;
  puVar6[0xd] = auVar3._4_4_;
  puVar6[0xe] = auVar3._8_4_;
  puVar6[0xf] = auVar3._12_4_;
  DAT_0040e5f0 = puVar6 + 0x10;
  return;
}


// ==== FUN_001cfa08 @ 001cfa08 ====

void FUN_001cfa08(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_00108328(DAT_0040f4c4,*(undefined4 *)((*(int *)(param_2 + 4) + -1) * 4 + param_3));
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


// ==== FUN_001cfa58 @ 001cfa58 ====

void FUN_001cfa58(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    FUN_0026a6f0(*param_1);
  }
  else {
    FUN_0026a460(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4),
                 CONCAT44(piVar1[1] * -8 + 0x8000,*piVar1 * -8 + 0x8000),*(undefined8 *)(piVar1 + 6)
                 ,*param_1,0);
  }
  return;
}


// ==== FUN_001cfac8 @ 001cfac8 ====

void FUN_001cfac8(int param_1)

{
  FUN_0026a7a0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_001c5f48(DAT_0040f4c0);
  }
  return;
}


// ==== FUN_001cfb00 @ 001cfb00 ====

void FUN_001cfb00(int param_1)

{
  FUN_001c2210();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}


// ==== FUN_001cfb30 @ 001cfb30 ====

undefined4 FUN_001cfb30(void)

{
  FUN_001c2248();
  return 1;
}


// ==== FUN_001cfb50 @ 001cfb50 ====

void FUN_001cfb50(undefined1 (*param_1) [16],long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fStack_74;
  
  if (0.01 <= *(float *)(*param_1 + 0xc)) {
    uVar4 = *(ulong *)(DAT_0040f4c0 + 0xd5c0);
    lVar5 = (long)(*(int *)(DAT_0040f4c0 + 0xd5e4) + 0x174);
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x7c);
    uVar2 = *(undefined4 *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x78);
    if (param_2 == 0) {
      uVar4 = FUN_001c8108(uVar4,uVar4,uVar2,uVar1,lVar5);
    }
    else {
      uVar4 = (long)(int)(uint)(((uVar4 & 0x1ff) << 0x2b) >> 0x26) |
              (long)(int)(((uint)(uVar4 >> 10) & 0xfc0) >> 6) << 0xe | lVar5 << 0x25 | 0x6a9b00000U
              | 0x2000000000000000;
    }
    if (param_1[2][0] != '\0') {
      FUN_001c81f0(0x3f800000,0x3f800000,lVar5);
      param_1[2][0] = 0;
    }
    auVar6 = _lqc2(*param_1);
    if (param_1[1][0] == '\0') {
      auVar7 = _qmtc2(0x43000000);
      auVar6 = _vmulbc(auVar6,auVar7);
      iVar3 = 100;
    }
    else {
      auVar7 = _qmtc2(0x43000000);
      auVar6 = _vmulbc(auVar6,auVar7);
      iVar3 = 0x48;
    }
    auVar6 = _sqc2(auVar6);
    fStack_74 = auVar6._12_4_;
    FUN_001c79d0(*(undefined8 *)(DAT_0040f4c0 + 0xd5c0),*(undefined8 *)(DAT_0040f4c0 + 0xd5d8),uVar4
                 ,uVar2,uVar1,(long)(int)fStack_74 << 0x20 | (long)iVar3,*(undefined4 *)*param_1);
    FUN_001c5f48(DAT_0040f4c0);
  }
  return;
}


// ==== FUN_001cfcf8 @ 001cfcf8 ====

void FUN_001cfcf8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1;
  *(undefined4 *)(puVar1 + 3) = 0x1000103;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)((int)puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((int)puVar1 + 0x14) = 0;
  *puVar1 = 0x6000006c;
  *(undefined4 *)((int)puVar1 + 0x1c) = 0x6c3c8000;
  memset(puVar1 + 4,0,0x3c0);
  *(undefined4 *)(puVar1 + 0x7d) = 0x1000103;
  *(undefined4 *)(puVar1 + 0x7c) = 0;
  *(undefined4 *)((int)puVar1 + 0x3e4) = 0;
  *(undefined4 *)((int)puVar1 + 0x3ec) = 0x6d3c8001;
  memset(puVar1 + 0x7e,0,0x1e0);
  *(undefined4 *)(puVar1 + 0xbb) = 0x1000103;
  *(undefined4 *)(puVar1 + 0xba) = 0;
  *(undefined4 *)((int)puVar1 + 0x5d4) = 0;
  *(undefined4 *)((int)puVar1 + 0x5dc) = 0x6e3cc002;
  memset(puVar1 + 0xbc,0,0xf0);
  FUN_003680a0(param_1,(int)puVar1 + 0x6cf);
  return;
}


// ==== FUN_001cfdc0 @ 001cfdc0 ====

void FUN_001cfdc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_001c0890();
  uVar3 = FUN_00107ce8(0x40f0f0);
  FUN_00107cc8(0x40f0f0,0x10);
  uVar2 = FUN_00107cf8(0x6d0);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_00107cc8(0x40f0f0,uVar3);
  FUN_001cfcf8(*(undefined4 *)(param_1 + 0xc));
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x18) = iVar1 + 0x5e0;
  *(int *)(param_1 + 0x10) = iVar1 + 0x20;
  *(int *)(param_1 + 0x14) = iVar1 + 0x3f0;
  return;
}


// ==== FUN_001cfe50 @ 001cfe50 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cfe50(undefined4 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined4 *puVar2;
  undefined4 in_a1_udw;
  float in_register_0000005c;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar1 = *(int *)(param_3 + 8);
  auVar7 = _qmtc2(param_5);
  *(int *)(param_3 + 8) = iVar1 + 1;
  auVar3 = _pextlw(0xffff8000ffff8000,0xffff8000ffff8000);
  auVar4 = _pextlw(0x7fff00007fff,0x7fff00007fff);
  auVar6 = _lqc2(_DAT_004165a0);
  auVar6 = _vmul(auVar7,auVar6);
  auVar6 = _vftoi0(auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  auVar6 = _pmaxw(auVar6,auVar3);
  auVar6 = _pminw(auVar6,auVar4);
  auVar6 = _ppach(in_zero_qw,auVar6);
  *(long *)(*(int *)(param_3 + 0x14) + iVar1 * 8 | 0x30000000) = auVar6._0_8_;
  _lqc2(_DAT_003f72d0);
  auVar6._8_4_ = param_2;
  auVar6._0_8_ = 0x3f0000003fc00000;
  auVar6._12_4_ = param_1;
  auVar3 = _lqc2(auVar6);
  auVar4 = _lqc2(_DAT_004165b0);
  auVar6 = _pextlw(0xff000000ff,0xff000000ff);
  auVar3 = _vmul(auVar3,auVar4);
  _qmtc2(0);
  auVar3 = _vftoi0(auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar6 = _pminw(auVar3,auVar6);
  auVar6 = _ppach(in_zero_qw,auVar6);
  auVar6 = _ppacb(in_zero_qw,auVar6);
  *(int *)(*(int *)(param_3 + 0x18) + iVar1 * 4 | 0x30000000) = auVar6._0_4_;
  puVar2 = (undefined4 *)(*(int *)(param_3 + 0x10) + iVar1 * 0x10 | 0x30000000);
  *puVar2 = (int)param_4;
  puVar2[1] = (int)((ulong)param_4 >> 0x20);
  puVar2[2] = in_a1_udw;
  puVar2[3] = in_register_0000005c;
  fVar5 = *(float *)(param_3 + 4);
  *(uint *)(param_3 + 4) =
       (int)fVar5 * (uint)(in_register_0000005c < fVar5) |
       (int)in_register_0000005c * (uint)(in_register_0000005c >= fVar5);
  return;
}


// ==== FUN_001cff78 @ 001cff78 ====

void FUN_001cff78(void)

{
  DAT_0040eb00 = 0xffffffff;
  DAT_0040eb04 = 0xffffffff;
  return;
}


// ==== FUN_001cff90 @ 001cff90 ====

void FUN_001cff90(undefined4 param_1,undefined8 param_2)

{
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  
  DAT_004165c0 = (int)param_2;
  DAT_004165c4 = (int)((ulong)param_2 >> 0x20);
  DAT_004165c8 = in_a0_udw;
  DAT_004165cc = in_register_0000004c;
  DAT_0040eb08 = param_1;
  DAT_0040eb00 = 0;
  DAT_0040eb04 = 0;
  return;
}


// ==== FUN_001cffb8 @ 001cffb8 ====

void FUN_001cffb8(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0040eb00 * 4;
  DAT_0040eb00 = DAT_0040eb00 + 1;
  *(undefined4 *)(&DAT_0048f770 + iVar1) = param_1;
  if (param_2 != 0) {
    puVar2 = &DAT_0048f990 + DAT_0040eb04;
    DAT_0040eb04 = DAT_0040eb04 + 1;
    *puVar2 = param_1;
  }
  return;
}


// ==== FUN_001d0010 @ 001d0010 ====

void FUN_001d0010(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined8 extraout_v0_udw;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_v0_udw_00;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 in_a0_udw;
  undefined1 auVar40 [16];
  int *piVar39;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar57;
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
  undefined8 in_a1_udw;
  undefined8 in_a2_udw;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong uVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 in_a3_udw;
  undefined1 auVar66 [16];
  undefined8 *puVar67;
  undefined4 uVar68;
  undefined8 in_t0_udw;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined8 in_t1_udw;
  undefined8 *puVar71;
  int iVar72;
  undefined8 in_t3_udw;
  undefined8 in_t4_udw;
  undefined8 in_t5_udw;
  int iVar73;
  undefined1 in_s0_qw [16];
  undefined1 auVar74 [16];
  undefined1 in_s1_qw [16];
  undefined1 auVar75 [16];
  undefined1 (*pauVar76) [16];
  undefined4 *puVar77;
  int *piVar78;
  undefined4 *puVar79;
  long lVar80;
  float fVar81;
  float fVar82;
  undefined1 in_vf0 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined8 uStack_390;
  undefined4 auStack_388 [10];
  undefined1 auStack_360 [16];
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
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined1 auStack_290 [16];
  float afStack_280 [76];
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
  int iStack_f0;
  int iStack_ec;
  undefined4 *puStack_e8;
  int iStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined1 auStack_b0 [16];
  
  iVar3 = DAT_0040f4c0;
  puVar67 = &uStack_390;
  iStack_ec = DAT_0040f4c0 + 0xd080;
  iVar2 = *(int *)(DAT_0040f4c0 + 0xd540);
  if (param_1 == 0) {
    puStack_e8 = (undefined4 *)&DAT_0048f770;
    iStack_e4 = DAT_0040eb00;
  }
  else {
    puStack_e8 = &DAT_0048f990;
    iStack_e4 = DAT_0040eb04;
  }
  iStack_f0 = param_1;
  if (iStack_e4 != 0) {
    auVar83 = _vsubbc(in_vf0,in_vf0);
    puStack_bc = auStack_360;
    pauVar76 = (undefined1 (*) [16])(DAT_0040f4c0 + 0xd120);
    uStack_390 = 0;
    auStack_b0 = _sqc2(auVar83);
    puVar79 = &uStack_340;
    lVar80 = (long)(int)puVar79;
    if (0 < (long)iStack_e4) {
      in_s1_qw._0_8_ = (long)(int)puStack_e8;
      in_s0_qw._0_8_ = (long)iStack_e4;
      piVar39 = (int *)*puStack_e8;
      while( true ) {
        in_s1_qw._0_8_ = (long)(in_s1_qw._0_4_ + 4);
        in_s0_qw._0_8_ = (long)(in_s0_qw._0_4_ + -1);
        FUN_001c8420(&uStack_390,*(undefined4 *)(*piVar39 + 0xe0));
        puVar79 = (undefined4 *)lVar80;
        if (in_s0_qw._0_8_ == 0) break;
        piVar39 = (int *)*in_s1_qw._0_4_;
      }
    }
    FUN_001c8478(&uStack_390);
    uStack_390 = *(undefined8 *)(iVar2 + 0x48);
    FUN_002b3d88(0,0xb);
    auVar91._8_8_ = in_a2_udw;
    auVar91._0_8_ = 0x20000b403000000;
    DAT_0040e064 = &DAT_00397df0;
    auVar85._8_8_ = in_a0_udw;
    auVar85._0_8_ = 0x397df050000000;
    auVar83 = _pcpyld(auVar91,auVar85);
    *DAT_0040e5f0 = auVar83._0_4_;
    DAT_0040e5f0[1] = auVar83._4_4_;
    DAT_0040e5f0[2] = auVar83._8_4_;
    DAT_0040e5f0[3] = auVar83._12_4_;
    auVar86._8_8_ = auVar83._8_8_;
    auVar86._0_8_ = 0x10000000;
    auVar58._8_8_ = in_a2_udw;
    auVar58._0_8_ = 0x1500000005000000;
    auVar83 = _pcpyld(auVar58,auVar86);
    DAT_0040e5f0[4] = auVar83._0_4_;
    DAT_0040e5f0[5] = auVar83._4_4_;
    DAT_0040e5f0[6] = auVar83._8_4_;
    DAT_0040e5f0[7] = auVar83._12_4_;
    auVar87._8_8_ = auVar83._8_8_;
    auVar87._0_8_ = 0x10000005;
    auVar59._8_8_ = in_a2_udw;
    auVar59._0_8_ = 0x6c0503fb01000101;
    auVar40 = _pcpyld(auVar59,auVar87);
    DAT_0040e5f0[8] = auVar40._0_4_;
    DAT_0040e5f0[9] = auVar40._4_4_;
    DAT_0040e5f0[10] = auVar40._8_4_;
    DAT_0040e5f0[0xb] = auVar40._12_4_;
    auVar83 = _lqc2(*pauVar76);
    _lqc2(auStack_e0);
    auVar85 = _lqc2(auStack_b0);
    _vadd(in_vf0,auVar83);
    auVar83 = _vaddbc(auVar85,auVar83);
    auVar83 = _sqc2(auVar83);
    *(undefined1 (*) [16])(DAT_0040e5f0 + 0xc) = auVar83;
    auVar83 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xd130));
    _vadd(in_vf0,auVar83);
    auVar85 = _vsubbc(in_vf0,in_vf0);
    auVar83 = _vaddbc(auVar85,auVar83);
    auVar83 = _sqc2(auVar83);
    *(undefined1 (*) [16])(DAT_0040e5f0 + 0x10) = auVar83;
    auVar83 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xd140));
    _vadd(in_vf0,auVar83);
    auVar83 = _vaddbc(auVar85,auVar83);
    auVar83 = _sqc2(auVar83);
    *(undefined1 (*) [16])(DAT_0040e5f0 + 0x14) = auVar83;
    auVar83 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xd150));
    _vadd(in_vf0,auVar83);
    auVar83 = _vaddbc(auVar85,auVar83);
    auVar83 = _sqc2(auVar83);
    *(undefined1 (*) [16])(DAT_0040e5f0 + 0x18) = auVar83;
    auVar84._8_8_ = auVar40._8_8_;
    auVar84._0_8_ = 0x1000000000000009;
    auVar83._8_8_ = extraout_v0_udw;
    auVar83._0_8_ = 0xe;
    auVar40 = _pcpyld(auVar83,auVar84);
    DAT_0040e5f0[0x1c] = auVar40._0_4_;
    DAT_0040e5f0[0x1d] = auVar40._4_4_;
    DAT_0040e5f0[0x1e] = auVar40._8_4_;
    DAT_0040e5f0[0x1f] = auVar40._12_4_;
    auVar88._8_8_ = auVar40._8_8_;
    auVar88._0_8_ = 0x10000002;
    auVar60._8_8_ = in_a2_udw;
    auVar60._0_8_ = 0x5000000200000000;
    auVar40 = _pcpyld(auVar60,auVar88);
    DAT_0040e5f0[0x20] = auVar40._0_4_;
    DAT_0040e5f0[0x21] = auVar40._4_4_;
    DAT_0040e5f0[0x22] = auVar40._8_4_;
    DAT_0040e5f0[0x23] = auVar40._12_4_;
    auVar89._8_8_ = auVar40._8_8_;
    auVar89._0_8_ = 0x1000000000008001;
    auVar83 = _pcpyld(auVar83,auVar89);
    DAT_0040e5f0[0x24] = auVar83._0_4_;
    DAT_0040e5f0[0x25] = auVar83._4_4_;
    DAT_0040e5f0[0x26] = auVar83._8_4_;
    DAT_0040e5f0[0x27] = auVar83._12_4_;
    auVar90._8_8_ = auVar83._8_8_;
    auVar90._0_8_ = 5;
    auVar40._8_8_ = extraout_v0_udw;
    auVar40._0_8_ = 8;
    auVar83 = _pcpyld(auVar40,auVar90);
    DAT_0040e5f0[0x28] = auVar83._0_4_;
    DAT_0040e5f0[0x29] = auVar83._4_4_;
    DAT_0040e5f0[0x2a] = auVar83._8_4_;
    DAT_0040e5f0[0x2b] = auVar83._12_4_;
    iVar3 = DAT_0040f4c0;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x2c;
    for (iVar18 = 2; iVar18 != -1; iVar18 = iVar18 + -1) {
    }
    fVar81 = (float)*(int *)(iVar2 + 0x78);
    auVar41._8_8_ = auVar83._8_8_;
    auVar41._0_8_ = 0x4c;
    auVar61._8_8_ = in_a2_udw;
    auVar61._0_8_ = 0x40;
    uStack_34c = (undefined4)((ulong)*(undefined8 *)(iVar2 + 0x48) >> 0x20);
    auVar66._8_8_ = in_a3_udw;
    auVar66._0_8_ = 0x4e;
    auStack_360._0_4_ = (undefined4)*(undefined8 *)(iVar2 + 0x48);
    puVar79[1] = (float)*(int *)(iVar2 + 0x7c);
    iVar18 = 1;
    iVar72 = 0;
    puVar79[2] = auStack_360._0_4_;
    puVar79[3] = uStack_34c;
    iVar73 = DAT_0040f4c0 + 0xd170;
    uVar57 = in_s0_qw._8_8_;
    auVar83 = _lqc2(*(undefined1 (*) [16])(iStack_ec + 0x40));
    _lqc2(*(undefined1 (*) [16])(iStack_ec + 0x50));
    auVar35._4_4_ = uStack_33c;
    auVar35._0_4_ = fVar81;
    auVar35._8_4_ = uStack_338;
    auVar35._12_4_ = uStack_334;
    auVar83 = _vmulbc(in_vf0,auVar83);
    auVar87 = _vmove(auVar83);
    auVar85 = _qmtc2(fVar81);
    *(undefined4 *)(puStack_bc + 4) = 0x3f000000;
    *(undefined4 *)(puStack_bc + 8) = 0;
    *(undefined4 *)(puStack_bc + 0xc) = 0;
    auStack_290 = _sqc2(auVar83);
    auVar86 = _qmtc2(0x3f000000);
    auVar21._0_8_ = *(undefined8 *)(iVar3 + 0xd5c0);
    auVar21._8_8_ = auStack_360._8_8_;
    auVar83 = _pcpyld(auVar41,auVar21);
    afStack_280[4] = auVar83._0_4_;
    afStack_280[5] = auVar83._4_4_;
    afStack_280[6] = auVar83._8_4_;
    afStack_280[7] = auVar83._12_4_;
    auVar22._0_8_ = *(undefined8 *)(iVar3 + 0xd5d8);
    auVar22._8_8_ = auStack_360._8_8_;
    auVar40 = _pcpyld(auVar61,auVar22);
    afStack_280[8] = auVar40._0_4_;
    afStack_280[9] = auVar40._4_4_;
    afStack_280[10] = auVar40._8_4_;
    afStack_280[0xb] = auVar40._12_4_;
    auVar25._0_8_ = *(ulong *)(iVar3 + 0xd5c8);
    auVar25._8_8_ = auStack_360._8_8_;
    auVar42._8_8_ = auVar83._8_8_;
    auVar42._0_8_ = auVar25._0_8_ & 0xfffffffeffffffff;
    auVar83 = _pcpyld(auVar66,auVar42);
    afStack_280[0xc] = auVar83._0_4_;
    afStack_280[0xd] = auVar83._4_4_;
    afStack_280[0xe] = auVar83._8_4_;
    afStack_280[0xf] = auVar83._12_4_;
    pauVar76 = &auStack_290;
    uStack_150 = afStack_280[4];
    uStack_14c = afStack_280[5];
    uStack_148 = afStack_280[6];
    uStack_144 = afStack_280[7];
    uStack_140 = afStack_280[8];
    uStack_13c = afStack_280[9];
    uStack_138 = afStack_280[10];
    uStack_134 = afStack_280[0xb];
    uStack_130 = afStack_280[0xc];
    uStack_12c = afStack_280[0xd];
    uStack_128 = afStack_280[0xe];
    uStack_124 = afStack_280[0xf];
    do {
      lVar80 = CONCAT44(iVar72,iVar18);
      auVar23._8_8_ = auVar25._8_8_;
      auVar34._8_8_ = auVar35._8_8_;
      auVar83 = _sqc2(auVar85);
      pauVar76[6] = auVar83;
      _vmove(auVar85);
      iVar18 = iVar18 + 1;
      iVar72 = iVar18 >> 0x1f;
      piVar39 = (int *)((uint)(lVar80 == 2) * 0x38 + iVar73);
      auVar83 = _qmtc2((float)*piVar39);
      auVar83 = _vaddbc(in_vf0,auVar83);
      auVar83 = _sqc2(auVar83);
      pauVar76[6] = auVar83;
      auVar83 = _qmtc2((float)piVar39[1]);
      auVar83 = _vaddbc(in_vf0,auVar83);
      auVar84 = _vsub(auVar83,auVar85);
      auVar83 = _sqc2(auVar83);
      pauVar76[6] = auVar83;
      auVar83 = _vmul(auVar84,auVar86);
      auVar83 = _vadd(auVar87,auVar83);
      auVar83 = _sqc2(auVar83);
      pauVar76[5] = auVar83;
      auVar23._0_8_ = *(undefined8 *)(piVar39 + 2);
      auVar10._8_8_ = in_t5_udw;
      auVar10._0_8_ = 0x4c;
      auVar83 = _pcpyld(auVar10,auVar23);
      uStack_120 = auVar83._0_4_;
      uStack_11c = auVar83._4_4_;
      uStack_118 = auVar83._8_4_;
      uStack_114 = auVar83._12_4_;
      *(undefined4 *)pauVar76[7] = uStack_120;
      *(int *)(pauVar76[7] + 4) = auVar83._4_4_;
      *(int *)(pauVar76[7] + 8) = auVar83._8_4_;
      *(int *)(pauVar76[7] + 0xc) = auVar83._12_4_;
      auVar34._0_8_ = *(undefined8 *)(piVar39 + 6);
      auVar9._8_8_ = in_t4_udw;
      auVar9._0_8_ = 0x40;
      auVar35 = _pcpyld(auVar9,auVar34);
      uStack_110 = auVar35._0_4_;
      uStack_10c = auVar35._4_4_;
      uStack_108 = auVar35._8_4_;
      uStack_104 = auVar35._12_4_;
      *(undefined4 *)pauVar76[8] = uStack_110;
      *(int *)(pauVar76[8] + 4) = auVar35._4_4_;
      *(int *)(pauVar76[8] + 8) = auVar35._8_4_;
      *(int *)(pauVar76[8] + 0xc) = auVar35._12_4_;
      auVar24._8_8_ = auVar83._8_8_;
      auVar24._0_8_ = *(undefined8 *)(piVar39 + 4);
      auVar5._8_8_ = in_t0_udw;
      auVar5._0_8_ = 0x4e;
      auVar25 = _pcpyld(auVar5,auVar24);
      *(int *)pauVar76[9] = auVar25._0_4_;
      *(int *)(pauVar76[9] + 4) = auVar25._4_4_;
      *(int *)(pauVar76[9] + 8) = auVar25._8_4_;
      *(int *)(pauVar76[9] + 0xc) = auVar25._12_4_;
      pauVar76 = pauVar76 + 5;
    } while (iVar18 < 4);
    auVar83 = _pextlw(0,0);
    uVar38 = auVar35._8_8_;
    puVar71 = &DAT_003f74f8;
    auVar43 = _pextlw(0xffffffffbf800000,auVar83._0_8_);
    iVar18 = 2;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x58) + 4);
    auVar62._8_8_ = auVar40._8_8_;
    auVar62._0_8_ = (ulong)(iVar3 + 0x30);
    auStack_360._12_4_ = uStack_294;
    auStack_360._0_12_ = *(undefined1 (*) [12])(iVar3 + 0x10);
    uStack_350 = *(undefined4 *)*(undefined1 (*) [12])(iVar3 + 0x20);
    uStack_34c = *(undefined4 *)(iVar3 + 0x24);
    uStack_348 = *(undefined4 *)(iVar3 + 0x28);
    uStack_344 = uStack_294;
    uStack_340 = *(undefined4 *)*(undefined1 (*) [12])(iVar3 + 0x30);
    uStack_33c = *(undefined4 *)(iVar3 + 0x34);
    uStack_338 = *(undefined4 *)(iVar3 + 0x38);
    uStack_334 = uStack_294;
    uStack_330 = *(undefined4 *)(iVar3 + 0x40);
    uStack_32c = *(undefined4 *)(iVar3 + 0x44);
    uStack_328 = *(undefined4 *)(iVar3 + 0x48);
    uStack_324 = uStack_294;
    auVar84 = _lqc2(auStack_360);
    _lqc2(auStack_320);
    _lqc2(auStack_310);
    auVar83 = _vaddbc(in_vf0,auVar84);
    _lqc2(auStack_300);
    auVar40 = _vaddbc(in_vf0,auVar84);
    auVar85 = _vaddbc(in_vf0,auVar84);
    auVar15._12_4_ = uStack_294;
    auVar15._0_12_ = *(undefined1 (*) [12])(iVar3 + 0x20);
    auVar87 = _lqc2(auVar15);
    _vmove(auVar85);
    uStack_2a4 = uStack_294;
    _vmove(auVar83);
    auVar90 = _vaddbc(in_vf0,auVar87);
    _vmove(auVar40);
    auVar88 = _vaddbc(in_vf0,auVar87);
    auVar89 = _vaddbc(in_vf0,auVar87);
    _sqc2(auVar40);
    auVar16._12_4_ = uStack_294;
    auVar16._0_12_ = *(undefined1 (*) [12])(iVar3 + 0x30);
    auVar86 = _lqc2(auVar16);
    _sqc2(auVar85);
    _vmove(auVar90);
    _vmove(auVar88);
    auVar91 = _vaddbc(in_vf0,auVar86);
    _vmove(auVar89);
    auVar85 = _vaddbc(in_vf0,auVar86);
    _sqc2(auVar83);
    auVar40 = _vaddbc(in_vf0,auVar86);
    auVar83 = _qmtc2(auVar43._0_4_);
    _vmulabc(auVar85,auVar83);
    _vmaddabc(auVar40,auVar83);
    auVar83 = _vmaddbc(auVar91,auVar83);
    _sqc2(auVar88);
    _lqc2(auStack_d0);
    _sqc2(auVar89);
    auVar83 = _vadd(in_vf0,auVar83);
    _sqc2(auVar90);
    auStack_d0 = _sqc2(auVar83);
    auStack_2e0 = _sqc2(auVar84);
    auStack_2d0 = _sqc2(auVar87);
    auStack_2c0 = _sqc2(auVar86);
    auStack_320 = _sqc2(auVar85);
    auStack_310 = _sqc2(auVar40);
    auStack_300 = _sqc2(auVar91);
    uStack_2b0 = uStack_330;
    uStack_2ac = uStack_32c;
    uStack_2a8 = uStack_328;
    uStack_2a0 = uStack_330;
    uStack_29c = uStack_32c;
    uStack_298 = uStack_328;
    afStack_280[0] = fVar81;
    do {
      auVar43._0_8_ = *puVar71;
      iVar18 = iVar18 + -1;
      auVar8._8_8_ = in_t3_udw;
      auVar8._0_8_ = 0x42;
      auVar83 = _pcpyld(auVar8,auVar43);
      puVar71 = puVar71 + 1;
      uStack_100 = auVar83._0_4_;
      uStack_fc = auVar83._4_4_;
      uStack_f8 = auVar83._8_4_;
      uStack_f4 = auVar83._12_4_;
      *(undefined4 *)puVar67 = uStack_100;
      *(int *)((int)puVar67 + 4) = auVar83._4_4_;
      *(int *)((int)puVar67 + 8) = auVar83._8_4_;
      *(int *)((int)puVar67 + 0xc) = auVar83._12_4_;
      puVar67 = (undefined8 *)((int)puVar67 + 0x10);
    } while (-1 < iVar18 >> 0x1f);
    lVar80 = 0;
    if (0 < iStack_e4) {
      puStack_c0 = puStack_bc;
      auVar43._0_8_ = (long)(int)puStack_e8;
      do {
        uVar69 = 0;
        uVar70 = 0;
        uVar68 = 0;
        uVar33 = 0;
        piVar39 = *(int **)((int)lVar80 * 4 + auVar43._0_4_);
        puVar79 = (undefined4 *)*piVar39;
        iVar3 = puVar79[0x38];
        piVar78 = (int *)piVar39[1];
        uVar65 = auVar62._8_8_;
        auVar44._8_8_ = auVar43._8_8_;
        auVar44._0_8_ = *(undefined8 *)(iVar3 + 0x3c);
        auVar4._8_8_ = in_a1_udw;
        auVar4._0_8_ = 6;
        auVar83 = _pcpyld(auVar4,auVar44);
        if (*(byte *)(iVar3 + 0x4a) >> 2 != 0) {
          uVar33 = *(undefined4 *)(iVar3 + 0x58);
          uVar70 = *(undefined4 *)(iVar3 + 0x50);
          uVar69 = *(undefined4 *)(iVar3 + 0x4c);
          uVar68 = *(undefined4 *)(iVar3 + 0x54);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = auVar44._8_8_;
          auVar44 = auVar17 << 0x40;
        }
        auVar74._8_8_ = uVar57;
        auVar74._0_8_ = 0x34;
        auVar75._8_8_ = in_s1_qw._8_8_;
        auVar75._0_8_ = 0x36;
        auVar7._4_4_ = uVar70;
        auVar7._0_4_ = uVar69;
        auVar7._8_8_ = in_t1_udw;
        auVar85 = _pcpyld(auVar74,auVar7);
        auVar6._4_4_ = uVar33;
        auVar6._0_4_ = uVar68;
        auVar6._8_8_ = in_t0_udw;
        auVar86 = _pcpyld(auVar75,auVar6);
        uVar57 = auVar44._8_8_;
        FUN_002b3d88(0,(uint)*(ushort *)(piVar39 + 2) * 2 + 0x1b);
        puVar77 = DAT_0040e5f0;
        lVar20 = FUN_00384648(piVar78[3]);
        auVar45._0_8_ = lVar20 << 0x20 | 0x50000000;
        auVar45._8_8_ = uVar57;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar65;
        auVar40 = _pcpyld(auVar12 << 0x40,auVar45);
        *puVar77 = auVar40._0_4_;
        puVar77[1] = auVar40._4_4_;
        puVar77[2] = auVar40._8_4_;
        puVar77[3] = auVar40._12_4_;
        auVar46._8_8_ = auVar40._8_8_;
        auVar46._0_8_ = 0x10000000;
        auVar40 = _pcpyld(auVar46,auVar46);
        puVar77[4] = auVar40._0_4_;
        puVar77[5] = auVar40._4_4_;
        puVar77[6] = auVar40._8_4_;
        puVar77[7] = auVar40._12_4_;
        auVar47._8_8_ = auVar40._8_8_;
        auVar47._0_8_ = 0x10000019;
        auVar63._8_8_ = uVar65;
        auVar63._0_8_ = 0x6c1903e201000101;
        auVar40 = _pcpyld(auVar63,auVar47);
        puVar77[8] = auVar40._0_4_;
        puVar77[9] = auVar40._4_4_;
        puVar77[10] = auVar40._8_4_;
        puVar77[0xb] = auVar40._12_4_;
        uVar33 = puVar79[1];
        uVar70 = puVar79[2];
        uVar69 = puVar79[3];
        puVar77[0xc] = *puVar79;
        puVar77[0xd] = uVar33;
        puVar77[0xe] = uVar70;
        puVar77[0xf] = uVar69;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 4);
        uVar33 = puVar79[7];
        puVar77[0x10] = auVar13._0_4_;
        puVar77[0x11] = auVar13._4_4_;
        puVar77[0x12] = auVar13._8_4_;
        puVar77[0x13] = uVar33;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 8);
        uVar33 = puVar79[0xb];
        puVar77[0x14] = auVar13._0_4_;
        puVar77[0x15] = auVar13._4_4_;
        puVar77[0x16] = auVar13._8_4_;
        puVar77[0x17] = uVar33;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0xc);
        uVar33 = puVar79[0xf];
        puVar77[0x18] = auVar13._0_4_;
        puVar77[0x19] = auVar13._4_4_;
        puVar77[0x1a] = auVar13._8_4_;
        puVar77[0x1b] = uVar33;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x10);
        uVar33 = puVar79[0x13];
        puVar77[0x1c] = auVar13._0_4_;
        puVar77[0x1d] = auVar13._4_4_;
        puVar77[0x1e] = auVar13._8_4_;
        puVar77[0x1f] = uVar33;
        auVar40 = _lqc2(*(undefined1 (*) [16])(puVar79 + 0x24));
        _lqc2(auStack_d0);
        auVar40 = _vmove(auVar40);
        auStack_d0 = _sqc2(auVar40);
        auVar40 = _qmfc2(auVar40._0_4_);
        puVar77[0x20] = auVar40._0_4_;
        puVar77[0x21] = auVar40._4_4_;
        puVar77[0x22] = auVar40._8_4_;
        puVar77[0x23] = auVar40._12_4_;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x14);
        uVar33 = puVar79[0x17];
        puVar77[0x24] = auVar13._0_4_;
        puVar77[0x25] = auVar13._4_4_;
        puVar77[0x26] = auVar13._8_4_;
        puVar77[0x27] = uVar33;
        _lqc2(*(undefined1 (*) [16])(puVar79 + 0x18));
        auVar40 = _qmtc2(DAT_0040eb08);
        auVar40 = _vmulbc(in_vf0,auVar40);
        auVar40 = _sqc2(auVar40);
        *(undefined1 (*) [16])(puVar77 + 0x28) = auVar40;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x1c);
        uVar33 = puVar79[0x1f];
        puVar77[0x2c] = auVar13._0_4_;
        puVar77[0x2d] = auVar13._4_4_;
        puVar77[0x2e] = auVar13._8_4_;
        puVar77[0x2f] = uVar33;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x20);
        uVar33 = puVar79[0x23];
        puVar77[0x30] = auVar13._0_4_;
        puVar77[0x31] = auVar13._4_4_;
        puVar77[0x32] = auVar13._8_4_;
        puVar77[0x33] = uVar33;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x24);
        uVar33 = puVar79[0x27];
        puVar77[0x34] = auVar13._0_4_;
        puVar77[0x35] = auVar13._4_4_;
        puVar77[0x36] = auVar13._8_4_;
        puVar77[0x37] = uVar33;
        auVar87 = _lqc2(*(undefined1 (*) [16])(puVar79 + 0x28));
        auStack_360._0_4_ = (undefined4)*(undefined8 *)(iVar2 + 0x50);
        fVar81 = *(float *)(iVar2 + 0x84);
        auVar40 = _qmtc2(auStack_360._0_4_);
        auVar40 = _vmulbc(auVar87,auVar40);
        auStack_360 = _sqc2(auVar40);
        fVar82 = *(float *)(puStack_c0 + 8);
        auVar40 = _qmtc2((int)fVar82 * (uint)(fVar81 < fVar82) |
                         (int)fVar81 * (uint)(fVar81 >= fVar82));
        auVar40 = _vaddbc(in_vf0,auVar40);
        auVar40 = _sqc2(auVar40);
        *(undefined1 (*) [16])(puVar77 + 0x38) = auVar40;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x2c);
        uVar33 = puVar79[0x2f];
        puVar77[0x3c] = auVar13._0_4_;
        puVar77[0x3d] = auVar13._4_4_;
        puVar77[0x3e] = auVar13._8_4_;
        puVar77[0x3f] = uVar33;
        auVar13 = *(undefined1 (*) [12])(puVar79 + 0x30);
        uVar33 = puVar79[0x33];
        puVar77[0x40] = auVar13._0_4_;
        puVar77[0x41] = auVar13._4_4_;
        puVar77[0x42] = auVar13._8_4_;
        puVar77[0x43] = uVar33;
        auVar40 = *(undefined1 (*) [16])
                   (auStack_388 + (uint)*(byte *)((int)puVar79 + 0xe5) * 4 + -2);
        puVar77[0x44] = auVar40._0_4_;
        puVar77[0x45] = auVar40._4_4_;
        puVar77[0x46] = auVar40._8_4_;
        puVar77[0x47] = auVar40._12_4_;
        auVar36._8_8_ = uVar38;
        auVar36._0_8_ = 0x47;
        auVar26._8_8_ = auVar40._8_8_;
        auVar26._0_8_ = *(undefined8 *)(puVar79 + 0x34);
        auVar40 = _pcpyld(auVar36,auVar26);
        puVar77[0x48] = auVar40._0_4_;
        puVar77[0x49] = auVar40._4_4_;
        puVar77[0x4a] = auVar40._8_4_;
        puVar77[0x4b] = auVar40._12_4_;
        puVar77[0x4c] = auVar83._0_4_;
        puVar77[0x4d] = auVar83._4_4_;
        puVar77[0x4e] = auVar83._8_4_;
        puVar77[0x4f] = auVar83._12_4_;
        auVar37._8_8_ = uVar38;
        auVar37._0_8_ = 0x14;
        auVar27._0_8_ = *(undefined8 *)(puVar79 + 0x36);
        auVar27._8_8_ = auVar26._8_8_;
        auVar83 = _pcpyld(auVar37,auVar27);
        puVar77[0x50] = auVar83._0_4_;
        puVar77[0x51] = auVar83._4_4_;
        puVar77[0x52] = auVar83._8_4_;
        puVar77[0x53] = auVar83._12_4_;
        puVar77[0x54] = auVar85._0_4_;
        puVar77[0x55] = auVar85._4_4_;
        puVar77[0x56] = auVar85._8_4_;
        puVar77[0x57] = auVar85._12_4_;
        puVar77[0x58] = auVar86._0_4_;
        puVar77[0x59] = auVar86._4_4_;
        puVar77[0x5a] = auVar86._8_4_;
        puVar77[0x5b] = auVar86._12_4_;
        uVar19 = 3;
        if (iStack_f0 == 0) {
          uVar19 = (uint)*(byte *)(puVar79 + 0x39);
        }
        iVar3 = uVar19 * 0x50;
        auVar50._8_8_ = 0;
        auVar50._0_8_ = auVar83._8_8_;
        auVar50 = auVar50 << 0x40;
        fVar81 = afStack_280[uVar19 * 0x14 + 5];
        fVar82 = afStack_280[uVar19 * 0x14 + 6];
        fVar14 = afStack_280[uVar19 * 0x14 + 7];
        puVar77[0x5c] = afStack_280[uVar19 * 0x14 + 4];
        puVar77[0x5d] = fVar81;
        puVar77[0x5e] = fVar82;
        puVar77[0x5f] = fVar14;
        fVar81 = afStack_280[uVar19 * 0x14 + 9];
        fVar82 = afStack_280[uVar19 * 0x14 + 10];
        fVar14 = afStack_280[uVar19 * 0x14 + 0xb];
        puVar77[0x60] = afStack_280[uVar19 * 0x14 + 8];
        puVar77[0x61] = fVar81;
        puVar77[0x62] = fVar82;
        puVar77[99] = fVar14;
        fVar81 = afStack_280[uVar19 * 0x14 + 0xd];
        fVar82 = afStack_280[uVar19 * 0x14 + 0xe];
        fVar14 = afStack_280[uVar19 * 0x14 + 0xf];
        puVar77[100] = afStack_280[uVar19 * 0x14 + 0xc];
        puVar77[0x65] = fVar81;
        puVar77[0x66] = fVar82;
        puVar77[0x67] = fVar14;
        fVar81 = afStack_280[uVar19 * 0x14 + 1];
        fVar82 = afStack_280[uVar19 * 0x14 + 2];
        fVar14 = afStack_280[uVar19 * 0x14 + 3];
        puVar77[0x68] = afStack_280[uVar19 * 0x14];
        puVar77[0x69] = fVar81;
        puVar77[0x6a] = fVar82;
        puVar77[0x6b] = fVar14;
        uVar33 = *(undefined4 *)(auStack_290 + iVar3 + 4);
        uVar70 = *(undefined4 *)(auStack_290 + iVar3 + 8);
        uVar69 = *(undefined4 *)(auStack_290 + iVar3 + 0xc);
        puVar77[0x6c] = *(undefined4 *)(&auStack_290)[uVar19 * 5];
        puVar77[0x6d] = uVar33;
        puVar77[0x6e] = uVar70;
        puVar77[0x6f] = uVar69;
        uVar57 = auVar85._8_8_;
        lVar80 = (long)((int)lVar80 + 1);
        puVar77 = puVar77 + 0x70;
        uVar65 = 0x4000000;
        in_s1_qw._8_8_ = auVar86._8_8_;
        in_s1_qw._0_8_ = 0x50000000;
        while( true ) {
          puVar1 = (uint *)(piVar78 + 2);
          auVar48._8_8_ = auVar50._8_8_;
          auVar48._0_8_ = 0x10000000;
          piVar78 = (int *)*piVar78;
          uVar19 = *puVar1;
          if (piVar78 == (int *)0x0) {
            uVar19 = *puVar1 | 0x100;
          }
          auVar62._8_8_ = auVar63._8_8_;
          auVar62._0_8_ = ((long)(int)uVar19 | uVar65) & 0xffffffff | 0x1700000000000000;
          auVar83 = _pcpyld(auVar62,auVar48);
          *puVar77 = auVar83._0_4_;
          puVar77[1] = auVar83._4_4_;
          puVar77[2] = auVar83._8_4_;
          puVar77[3] = auVar83._12_4_;
          puVar79 = puVar77 + 4;
          auVar43._8_8_ = auVar83._8_8_;
          if (piVar78 == (int *)0x0) break;
          lVar20 = FUN_00384648(piVar78[3]);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = auVar62._8_8_;
          auVar63 = auVar11 << 0x40;
          auVar49._0_8_ = lVar20 << 0x20 | in_s1_qw._0_8_;
          auVar49._8_8_ = auVar43._8_8_;
          auVar50 = _pcpyld(auVar63,auVar49);
          *puVar79 = auVar50._0_4_;
          puVar77[5] = auVar50._4_4_;
          puVar77[6] = auVar50._8_4_;
          puVar77[7] = auVar50._12_4_;
          puVar77 = puVar77 + 8;
        }
        auVar43._0_8_ = (long)(int)puStack_e8;
        DAT_0040e5f0 = puVar79;
      } while (lVar80 < iStack_e4);
    }
    uVar57 = auVar43._8_8_;
    FUN_002b3d88(0,6);
    auVar51._8_8_ = uVar57;
    auVar51._0_8_ = 0x10000005;
    auVar64._8_8_ = auVar62._8_8_;
    auVar64._0_8_ = 0x5000000510000000;
    auVar83 = _pcpyld(auVar64,auVar51);
    *DAT_0040e5f0 = auVar83._0_4_;
    DAT_0040e5f0[1] = auVar83._4_4_;
    DAT_0040e5f0[2] = auVar83._8_4_;
    DAT_0040e5f0[3] = auVar83._12_4_;
    auVar52._8_8_ = auVar83._8_8_;
    auVar52._0_8_ = 0x1000000000008004;
    auVar28._8_8_ = extraout_v0_udw_00;
    auVar28._0_8_ = 0xe;
    auVar83 = _pcpyld(auVar28,auVar52);
    DAT_0040e5f0[4] = auVar83._0_4_;
    DAT_0040e5f0[5] = auVar83._4_4_;
    DAT_0040e5f0[6] = auVar83._8_4_;
    DAT_0040e5f0[7] = auVar83._12_4_;
    auVar53._8_8_ = auVar83._8_8_;
    auVar53._0_8_ = 0x42;
    auVar29._8_8_ = extraout_v0_udw_00;
    auVar29._0_8_ = DAT_0040e000;
    auVar83 = _pcpyld(auVar53,auVar29);
    DAT_0040e5f0[8] = auVar83._0_4_;
    DAT_0040e5f0[9] = auVar83._4_4_;
    DAT_0040e5f0[10] = auVar83._8_4_;
    DAT_0040e5f0[0xb] = auVar83._12_4_;
    auVar54._8_8_ = auVar83._8_8_;
    auVar54._0_8_ = 0x47;
    auVar30._8_8_ = extraout_v0_udw_00;
    auVar30._0_8_ = DAT_0040dfd8;
    auVar83 = _pcpyld(auVar54,auVar30);
    DAT_0040e5f0[0xc] = auVar83._0_4_;
    DAT_0040e5f0[0xd] = auVar83._4_4_;
    DAT_0040e5f0[0xe] = auVar83._8_4_;
    DAT_0040e5f0[0xf] = auVar83._12_4_;
    auVar55._8_8_ = auVar83._8_8_;
    auVar55._0_8_ = 0x4e;
    auVar31._8_8_ = extraout_v0_udw_00;
    auVar31._0_8_ = DAT_0040dfc8;
    auVar83 = _pcpyld(auVar55,auVar31);
    DAT_0040e5f0[0x10] = auVar83._0_4_;
    DAT_0040e5f0[0x11] = auVar83._4_4_;
    DAT_0040e5f0[0x12] = auVar83._8_4_;
    DAT_0040e5f0[0x13] = auVar83._12_4_;
    auVar56._8_8_ = auVar83._8_8_;
    auVar56._0_8_ = 8;
    auVar32._8_8_ = extraout_v0_udw_00;
    auVar32._0_8_ = DAT_0040dff0;
    auVar83 = _pcpyld(auVar56,auVar32);
    DAT_0040e5f0[0x14] = auVar83._0_4_;
    DAT_0040e5f0[0x15] = auVar83._4_4_;
    DAT_0040e5f0[0x16] = auVar83._8_4_;
    DAT_0040e5f0[0x17] = auVar83._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x18;
  }
  if (iStack_f0 == 0) {
    DAT_0040eb00 = -1;
  }
  else {
    DAT_0040eb04 = -1;
  }
  return;
}


// ==== FUN_001d0a68 @ 001d0a68 ====

void FUN_001d0a68(void)

{
  undefined8 in_v0_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_a0_udw;
  
  auVar1._8_8_ = in_v0_udw;
  auVar1._0_8_ = 0x42424242;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 0x802a400000000000;
  auVar2 = _pcpyld(auVar1,auVar2);
  DAT_0042a1e0 = 0;
  DAT_0048fa90 = auVar2._0_4_;
  DAT_0048fa94 = auVar2._4_4_;
  DAT_0048fa98 = auVar2._8_4_;
  DAT_0048fa9c = auVar2._12_4_;
  return;
}


// ==== FUN_001d0aa8 @ 001d0aa8 ====

undefined4 FUN_001d0aa8(void)

{
  int iVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar2 = 0;
  auVar6 = _qmtc2(*(undefined4 *)(DAT_0040f4d0 + 0x20));
  iVar1 = 0;
  do {
    iVar4 = 0x11;
    pauVar3 = (undefined1 (*) [16])(&DAT_00416620 + iVar1);
    iVar2 = iVar2 + 1;
    do {
      _lqc2(*pauVar3);
      iVar4 = iVar4 + -1;
      auVar5 = _vaddbc(in_vf0,auVar6);
      auVar5 = _sqc2(auVar5);
      *pauVar3 = auVar5;
      pauVar3 = pauVar3 + 6;
    } while (-1 < iVar4);
    iVar1 = iVar2 * 0x6c0;
  } while (iVar2 < 2);
  DAT_0040eb0c = 0xffffffff;
  return 1;
}


// ==== FUN_001d0b20 @ 001d0b20 ====

void FUN_001d0b20(int param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  DAT_0040eb0c = 0;
  DAT_0040eb14 = 0;
  fVar8 = *(float *)(DAT_0040f4d0 + 0x1c);
  fVar9 = *(float *)(DAT_0040f4d0 + 0x20);
  DAT_0040eb10 = param_1;
  lVar1 = FUN_001038a8(DAT_0040f0e0);
  if (lVar1 == 0) {
    if (param_2 == 0) {
      auVar11 = _lqc2(*(undefined1 (*) [16])(&DAT_00416680 + DAT_0040eb10 * 0x6c0));
      auVar11 = _qmfc2(auVar11._0_4_);
      iVar7 = 0x416c30;
      if (0.010416667 <= fVar9 - auVar11._0_4_) {
        iVar6 = 0x11;
        iVar5 = 0x660;
        do {
          iVar6 = iVar6 + -1;
          iVar3 = DAT_0040eb10 * 0x6c0 + iVar7;
          auVar11 = _lqc2(*(undefined1 (*) [16])((int)&DAT_004165c0 + iVar5 + DAT_0040eb10 * 0x6c0))
          ;
          iVar7 = iVar7 + -0x60;
          auVar11 = _qmfc2(auVar11._0_4_);
          iVar5 = iVar5 + -0x60;
          FUN_001d1268(auVar11._0_4_,iVar3);
        } while (0 < iVar6);
      }
      FUN_001d1268(fVar9,&DAT_004165d0 + DAT_0040eb10 * 0x6c0);
    }
    else {
      puVar4 = &DAT_004165d0;
      do {
        puVar2 = puVar4 + DAT_0040eb10 * 0x6c0;
        puVar4 = puVar4 + 0x60;
        FUN_001d1268(fVar9,puVar2);
      } while ((int)puVar4 < 0x416c90);
    }
  }
  else if (*(char *)(DAT_0040f4bc + 0x7e1) != '\0') {
    puVar4 = &DAT_004165d0;
    do {
      fVar10 = fVar9 - fVar8;
      puVar2 = puVar4 + DAT_0040eb10 * 0x6c0;
      puVar4 = puVar4 + 0x60;
      FUN_001d1268(fVar9,puVar2);
      fVar9 = fVar10;
    } while ((int)puVar4 < 0x416c90);
  }
  return;
}


// ==== FUN_001d0d10 @ 001d0d10 ====

void FUN_001d0d10(float *param_1)

{
  int *piVar1;
  float fVar2;
  
  if (*(float *)(DAT_0040f4d0 + 0x20) - *param_1 < param_1[0x19]) {
    piVar1 = &DAT_0048faa0 + DAT_0040eb0c;
    DAT_0040eb0c = DAT_0040eb0c + 1;
    *piVar1 = (int)param_1;
    fVar2 = *(float *)((int)param_1[1] + 0x9c);
    DAT_0040eb14 = (float)((int)DAT_0040eb14 * (uint)(fVar2 < DAT_0040eb14) |
                          (int)fVar2 * (uint)(fVar2 >= DAT_0040eb14));
  }
  return;
}


// ==== FUN_001d0d80 @ 001d0d80 ====

void FUN_001d0d80(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  
  FUN_002b3d88(0,6);
  FUN_001d0ea8();
  FUN_001d1188();
  iVar4 = DAT_0040eb0c;
  if (0 < DAT_0040eb0c) {
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (0 < DAT_0040eb0c) {
    piVar5 = &DAT_0048faa0;
    do {
      iVar1 = *piVar5;
      iVar2 = *(int *)(iVar1 + 8);
      if (DAT_0040e690 != iVar2) {
        FUN_002cdea0(iVar2);
        lVar3 = FUN_002cd230(iVar2,0);
        if (lVar3 != 0) {
          DAT_0040e690 = iVar2;
        }
      }
      FUN_002b3d88(0,0x73);
      iVar4 = iVar4 + 1;
      FUN_001d0ef0(iVar1,1);
      piVar5 = piVar5 + 1;
    } while (iVar4 < DAT_0040eb0c);
  }
  FUN_002b3d88(0,2);
  FUN_001d1218();
  DAT_0040eb0c = 0xffffffff;
  return;
}


// ==== FUN_001d0ea8 @ 001d0ea8 ====

void FUN_001d0ea8(void)

{
  undefined8 in_v0_udw;
  undefined8 in_v1_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x200006303000000;
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0x399cc050000000;
  auVar2 = _pcpyld(auVar1,auVar2);
  *DAT_0040e5f0 = auVar2._0_4_;
  DAT_0040e5f0[1] = auVar2._4_4_;
  DAT_0040e5f0[2] = auVar2._8_4_;
  DAT_0040e5f0[3] = auVar2._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  DAT_0040e064 = &DAT_00399cc0;
  return;
}


// ==== FUN_001d0ef0 @ 001d0ef0 ====

void FUN_001d0ef0(float *param_1,long param_2)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_a0_udw;
  undefined4 in_register_0000004c;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  undefined *puVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 in_vf0 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  iVar2 = DAT_0040eb10 * 0x6c0;
  fVar1 = param_1[1];
  iVar21 = 1;
  auVar32 = _lqc2(*(undefined1 (*) [16])(&DAT_00416620 + iVar2));
  auVar32 = _qmfc2(auVar32._0_4_);
  iVar6 = iVar2 + 0x416690;
  puVar27 = &DAT_004165d0 + iVar2;
  while( true ) {
    auVar33 = _lqc2(*(undefined1 (*) [16])(puVar27 + 0xb0));
    auVar33 = _qmfc2(auVar33._0_4_);
    if (*(float *)((int)fVar1 + 0x9c) <= auVar32._0_4_ - auVar33._0_4_) break;
    auVar34 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x50));
    auVar34 = _qmfc2(auVar34._0_4_);
    iVar6 = iVar6 + 0x60;
    if ((auVar33._0_4_ == auVar34._0_4_) ||
       (iVar21 = iVar21 + 1, puVar27 = puVar27 + 0x60, 0x10 < iVar21)) break;
  }
  uVar8 = 2;
  if (param_2 != 0) {
    uVar8 = 0x70;
  }
  auVar32._4_4_ = 0;
  auVar32._0_4_ = uVar8 | 0x10000000;
  auVar32._8_4_ = in_a0_udw;
  auVar32._12_4_ = in_register_0000004c;
  auVar33._8_4_ = in_a1_udw;
  auVar33._0_8_ = (ulong)(uVar8 << 0x10) << 0x20 | 0x6c00039001000101;
  auVar33._12_4_ = in_register_0000005c;
  auVar32 = _pcpyld(auVar33,auVar32);
  *DAT_0040e5f0 = auVar32._0_4_;
  DAT_0040e5f0[1] = auVar32._4_4_;
  DAT_0040e5f0[2] = auVar32._8_4_;
  DAT_0040e5f0[3] = auVar32._12_4_;
  auVar32 = _qmtc2(*(float *)((int)fVar1 + 0xa0));
  _vaddbc(in_vf0,auVar32);
  auVar32 = _qmtc2(*(undefined4 *)((int)fVar1 + 0xa4));
  _vaddbc(in_vf0,auVar32);
  auVar32 = _qmtc2(*(undefined4 *)((int)fVar1 + 0xac));
  _vaddbc(in_vf0,auVar32);
  auVar32 = _qmtc2((*(float *)((int)fVar1 + 0xa8) - *(float *)((int)fVar1 + 0xa0)) /
                   *(float *)((int)fVar1 + 0x9c));
  auVar32 = _vmulbc(in_vf0,auVar32);
  auVar32 = _sqc2(auVar32);
  *(undefined1 (*) [16])(DAT_0040e5f0 + 4) = auVar32;
  fVar29 = *param_1;
  uVar28 = *(undefined4 *)((int)fVar1 + 0x98);
  uVar30 = *(undefined4 *)((int)fVar1 + 0x90);
  DAT_0040e5f0[8] = iVar21;
  DAT_0040e5f0[9] = fVar29 * 0.0009775171;
  DAT_0040e5f0[10] = uVar28;
  DAT_0040e5f0[0xb] = uVar30;
  puVar26 = DAT_0040e5f0 + 0xc;
  if (param_2 != 0) {
    uVar30 = *(undefined4 *)(DAT_0040f4c0 + 0xd0c8);
    uVar31 = *(undefined4 *)(DAT_0040f4c0 + 0xd0d8);
    uVar28 = *(undefined4 *)(DAT_0040f4c0 + 0xd0d4);
    *puVar26 = *(undefined4 *)(DAT_0040f4c0 + 0xd0d0);
    DAT_0040e5f0[0xd] = uVar28;
    DAT_0040e5f0[0xe] = uVar31;
    DAT_0040e5f0[0xf] = uVar30;
    uVar31 = DAT_0048fa9c;
    uVar30 = DAT_0048fa98;
    uVar28 = DAT_0048fa94;
    DAT_0040e5f0[0x10] = DAT_0048fa90;
    DAT_0040e5f0[0x11] = uVar28;
    DAT_0040e5f0[0x12] = uVar30;
    DAT_0040e5f0[0x13] = uVar31;
    puVar26 = DAT_0040e5f0 + 0x14;
    puVar27 = &DAT_004165d0;
    do {
      puVar7 = (undefined4 *)(puVar27 + DAT_0040eb10 * 0x6c0);
      uVar22 = puVar7[0x14];
      uVar23 = puVar7[0x15];
      uVar24 = puVar7[0x16];
      uVar25 = puVar7[0x17];
      uVar9 = puVar7[4];
      uVar10 = puVar7[5];
      in_a0_udw = puVar7[6];
      in_register_0000004c = puVar7[7];
      uVar11 = puVar7[8];
      uVar12 = puVar7[9];
      in_a1_udw = puVar7[10];
      in_register_0000005c = puVar7[0xb];
      uVar13 = puVar7[0xc];
      uVar14 = puVar7[0xd];
      uVar15 = puVar7[0xe];
      uVar16 = puVar7[0xf];
      uVar17 = puVar7[0x10];
      uVar18 = puVar7[0x11];
      uVar19 = puVar7[0x12];
      uVar20 = puVar7[0x13];
      uVar28 = puVar7[1];
      uVar30 = puVar7[2];
      uVar31 = puVar7[3];
      *puVar26 = *puVar7;
      puVar26[1] = uVar28;
      puVar26[2] = uVar30;
      puVar26[3] = uVar31;
      puVar26[4] = uVar9;
      puVar26[5] = uVar10;
      puVar26[6] = in_a0_udw;
      puVar26[7] = in_register_0000004c;
      puVar26[8] = uVar11;
      puVar26[9] = uVar12;
      puVar26[10] = in_a1_udw;
      puVar26[0xb] = in_register_0000005c;
      puVar26[0xc] = uVar13;
      puVar26[0xd] = uVar14;
      puVar26[0xe] = uVar15;
      puVar26[0xf] = uVar16;
      puVar26[0x10] = uVar17;
      puVar26[0x11] = uVar18;
      puVar26[0x12] = uVar19;
      puVar26[0x13] = uVar20;
      puVar26[0x14] = uVar22;
      puVar26[0x15] = uVar23;
      puVar26[0x16] = uVar24;
      puVar26[0x17] = uVar25;
      puVar27 = puVar27 + 0x60;
      puVar26 = puVar26 + 0x18;
    } while ((int)puVar27 < 0x416c90);
  }
  auVar34._8_4_ = in_a0_udw;
  auVar34._0_8_ = (ulong)(uint)param_1[0x1a] << 0x20 | 0x50000000;
  auVar34._12_4_ = in_register_0000004c;
  auVar5._4_4_ = in_register_0000005c;
  auVar5._0_4_ = in_a1_udw;
  auVar5._8_8_ = 0;
  auVar32 = _pcpyld(auVar5 << 0x40,auVar34);
  *puVar26 = auVar32._0_4_;
  puVar26[1] = auVar32._4_4_;
  puVar26[2] = auVar32._8_4_;
  puVar26[3] = auVar32._12_4_;
  auVar3._8_4_ = in_a0_udw;
  auVar3._0_8_ = 0x10000000;
  auVar3._12_4_ = in_register_0000004c;
  auVar4._8_4_ = in_a0_udw;
  auVar4._0_8_ = 0x10000000;
  auVar4._12_4_ = in_register_0000004c;
  auVar32 = _pcpyld(auVar3,auVar4);
  puVar26[4] = auVar32._0_4_;
  puVar26[5] = auVar32._4_4_;
  puVar26[6] = auVar32._8_4_;
  puVar26[7] = auVar32._12_4_;
  DAT_0040e5f0 = puVar26 + 8;
  return;
}


// ==== FUN_001d1188 @ 001d1188 ====

void FUN_001d1188(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_v1_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_a1_udw;
  
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = 0x5000000400000000;
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = 0x10000004;
  auVar6 = _pcpyld(auVar5,auVar6);
  *DAT_0040e5f0 = auVar6._0_4_;
  DAT_0040e5f0[1] = auVar6._4_4_;
  DAT_0040e5f0[2] = auVar6._8_4_;
  DAT_0040e5f0[3] = auVar6._12_4_;
  auVar7._8_8_ = auVar6._8_8_;
  auVar7._0_8_ = 0xe;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 0x1000000000008003;
  auVar6 = _pcpyld(auVar7,auVar1);
  DAT_0040e5f0[4] = auVar6._0_4_;
  DAT_0040e5f0[5] = auVar6._4_4_;
  DAT_0040e5f0[6] = auVar6._8_4_;
  DAT_0040e5f0[7] = auVar6._12_4_;
  auVar8._8_8_ = auVar6._8_8_;
  auVar8._0_8_ = 0x47;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 0x71001;
  auVar6 = _pcpyld(auVar8,auVar2);
  DAT_0040e5f0[8] = auVar6._0_4_;
  DAT_0040e5f0[9] = auVar6._4_4_;
  DAT_0040e5f0[10] = auVar6._8_4_;
  DAT_0040e5f0[0xb] = auVar6._12_4_;
  auVar9._8_8_ = auVar6._8_8_;
  auVar9._0_8_ = 0x42;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x48;
  auVar6 = _pcpyld(auVar9,auVar3);
  DAT_0040e5f0[0xc] = auVar6._0_4_;
  DAT_0040e5f0[0xd] = auVar6._4_4_;
  DAT_0040e5f0[0xe] = auVar6._8_4_;
  DAT_0040e5f0[0xf] = auVar6._12_4_;
  auVar10._8_8_ = auVar6._8_8_;
  auVar10._0_8_ = 8;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 5;
  auVar6 = _pcpyld(auVar10,auVar4);
  DAT_0040e5f0[0x10] = auVar6._0_4_;
  DAT_0040e5f0[0x11] = auVar6._4_4_;
  DAT_0040e5f0[0x12] = auVar6._8_4_;
  DAT_0040e5f0[0x13] = auVar6._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  return;
}


// ==== FUN_001d1218 @ 001d1218 ====

void FUN_001d1218(void)

{
  undefined1 auVar1 [16];
  undefined8 in_v1_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_a1_udw;
  
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = 0x5000000100000000;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x10000001;
  auVar3 = _pcpyld(auVar2,auVar3);
  *DAT_0040e5f0 = auVar3._0_4_;
  DAT_0040e5f0[1] = auVar3._4_4_;
  DAT_0040e5f0[2] = auVar3._8_4_;
  DAT_0040e5f0[3] = auVar3._12_4_;
  auVar4._8_8_ = auVar3._8_8_;
  auVar4._0_8_ = 0xe;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 0x1000000000008000;
  auVar3 = _pcpyld(auVar4,auVar1);
  DAT_0040e5f0[4] = auVar3._0_4_;
  DAT_0040e5f0[5] = auVar3._4_4_;
  DAT_0040e5f0[6] = auVar3._8_4_;
  DAT_0040e5f0[7] = auVar3._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 8;
  return;
}


// ==== FUN_001d1268 @ 001d1268 ====

void FUN_001d1268(undefined4 param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
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
  float fStack_20;
  float fStack_1c;
  float fStack_c;
  
  iVar1 = *(int *)(DAT_0040f4c0 + 0xd540);
  fVar4 = *(float *)(iVar1 + 0x88);
  fVar7 = (float)*(int *)(iVar1 + 0x78);
  fVar5 = *(float *)(iVar1 + 0x84);
  fVar8 = (float)*(int *)(iVar1 + 0x7c);
  fVar5 = (float)((int)fVar5 * (uint)(fVar5 < 0.012) | (uint)(fVar5 >= 0.012) * 0x3c449ba6);
  _lqc2(param_2[3]);
  _lqc2(param_2[2]);
  _lqc2(param_2[1]);
  fVar6 = 1.0 / (fVar4 - fVar5);
  _lqc2(*param_2);
  auVar15 = _vsubbc(in_vf0,in_vf0);
  _vmove(auVar15);
  auVar21 = _qmtc2(param_1);
  auVar13 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd120));
  auVar17._4_4_ = fVar8 / (fVar8 + 256.0);
  auVar17._0_4_ = fVar7 / (fVar7 + 256.0);
  auVar17._8_4_ = (fVar4 + fVar5) * fVar6;
  auVar17._12_4_ = fVar4 * -2.0 * fVar5 * fVar6;
  auVar12 = _lqc2(auVar17);
  auVar16 = _vadd(auVar13,auVar13);
  _vmove(auVar16);
  auVar3 = _qmfc2(auVar12._0_4_);
  _sqc2(auVar13);
  auVar11 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd130));
  auVar17 = _vadd(auVar11,auVar11);
  _vmove(auVar17);
  _sqc2(auVar11);
  auVar10 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd140));
  auVar18 = _vadd(auVar10,auVar10);
  _vmove(auVar18);
  _sqc2(auVar10);
  auVar14 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd150));
  auVar9 = _vadd(auVar14,auVar14);
  auVar17 = _sqc2(auVar17);
  param_2[1] = auVar17;
  auVar17 = _vmove(auVar9);
  auVar19 = _vaddbc(auVar9,auVar13);
  auVar20 = _vaddbc(auVar17,auVar14);
  auVar17 = _sqc2(auVar15);
  param_2[3] = auVar17;
  auVar13 = _vmove(auVar20);
  auVar11 = _vaddbc(auVar9,auVar11);
  auVar15 = _vaddbc(auVar9,auVar10);
  auVar17 = _sqc2(auVar18);
  param_2[2] = auVar17;
  auVar17 = _sqc2(auVar9);
  param_2[3] = auVar17;
  auVar10 = _vsubbc(auVar13,auVar13);
  auVar17 = _sqc2(auVar16);
  *param_2 = auVar17;
  _sqc2(auVar14);
  auVar9 = _vmove(auVar19);
  auVar17 = _vmove(auVar11);
  auVar13 = _vsubbc(auVar9,auVar9);
  auVar9 = _vmove(auVar15);
  auVar16 = _vsubbc(auVar17,auVar17);
  auVar17 = _vmove(auVar10);
  auVar10 = _vsubbc(auVar9,auVar9);
  auVar14 = _vmul(auVar17,auVar12);
  auVar17 = _sqc2(auVar15);
  param_2[2] = auVar17;
  auVar17 = _sqc2(auVar10);
  param_2[2] = auVar17;
  auVar17 = _sqc2(auVar19);
  *param_2 = auVar17;
  auVar9 = _vmove(auVar13);
  auVar17 = _sqc2(auVar11);
  param_2[1] = auVar17;
  auVar13 = _vmul(auVar9,auVar12);
  auVar17 = _vmove(auVar16);
  auVar9 = _vmove(auVar10);
  auVar11 = _vmul(auVar17,auVar12);
  auVar17 = _sqc2(auVar20);
  param_2[3] = auVar17;
  auVar10 = _vmul(auVar9,auVar12);
  auVar9 = _vmove(auVar14);
  auVar17 = _sqc2(auVar14);
  param_2[3] = auVar17;
  auVar9 = _vmulbc(auVar12,auVar9);
  auVar17 = _sqc2(auVar11);
  param_2[1] = auVar17;
  auVar17 = _sqc2(auVar10);
  param_2[2] = auVar17;
  auVar11 = _vmulbc(auVar12,auVar11);
  auVar17 = _sqc2(auVar9);
  param_2[3] = auVar17;
  auVar10 = _vmulbc(auVar12,auVar10);
  auVar17 = _sqc2(auVar13);
  *param_2 = auVar17;
  auVar9 = _vaddbc(auVar9,auVar12);
  auVar13 = _vmulbc(auVar12,auVar13);
  auVar17 = _sqc2(auVar11);
  param_2[1] = auVar17;
  auVar17 = _sqc2(auVar10);
  param_2[2] = auVar17;
  auVar17 = _sqc2(auVar9);
  param_2[3] = auVar17;
  auVar17 = _sqc2(auVar13);
  *param_2 = auVar17;
  _lqc2(param_2[4]);
  _lqc2(param_2[5]);
  auVar9 = _vaddbc(in_vf0,auVar21);
  fStack_20 = (float)*(undefined8 *)(iVar1 + 0x48);
  auVar17 = _qmtc2(fStack_20 / auVar3._0_4_);
  auVar17 = _vaddbc(in_vf0,auVar17);
  auVar17 = _sqc2(auVar17);
  param_2[4] = auVar17;
  auVar17 = _sqc2(auVar12);
  fStack_1c = (float)((ulong)*(undefined8 *)(iVar1 + 0x48) >> 0x20);
  fStack_c = auVar17._4_4_;
  auVar17 = _qmtc2(fStack_1c / fStack_c);
  auVar17 = _vaddbc(in_vf0,auVar17);
  auVar17 = _sqc2(auVar17);
  param_2[4] = auVar17;
  fStack_20 = (float)*(undefined8 *)(iVar1 + 0x50);
  auVar17 = _qmtc2(fStack_20 * fVar7 * 0.5);
  auVar17 = _vaddbc(in_vf0,auVar17);
  auVar17 = _sqc2(auVar17);
  param_2[4] = auVar17;
  uVar2 = *(undefined8 *)(iVar1 + 0x50);
  auVar17 = _sqc2(auVar9);
  param_2[5] = auVar17;
  fStack_1c = (float)((ulong)uVar2 >> 0x20);
  auVar17 = _qmtc2(fStack_1c * fVar8 * 0.5);
  auVar17 = _vmulbc(in_vf0,auVar17);
  auVar17 = _sqc2(auVar17);
  param_2[4] = auVar17;
  return;
}


// ==== FUN_001d14e0 @ 001d14e0 ====

void FUN_001d14e0(float *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong auStack_f0 [4];
  int aiStack_d0 [4];
  int iStack_c0;
  float *pfStack_bc;
  
  FUN_001c1a68();
  if (*(ushort *)(param_2 + 0xb0) == 0) {
    param_1[0x1a] = 0.0;
    param_1[0x17] = 0.0;
    memset(param_1 + 3,0,0x50);
  }
  else {
    fVar17 = *param_1;
    fVar18 = (float)*(ushort *)(param_2 + 0xb0) /
             (*(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x84) + *(float *)(param_2 + 0x88) +
             *(float *)(param_2 + 0x8c));
    fVar15 = (float)(int)(*(float *)(param_2 + 0x80) * fVar18);
    param_1[4] = fVar15;
    fVar13 = (float)(int)(*(float *)(param_2 + 0x84) * fVar18);
    param_1[9] = fVar13;
    fVar14 = (float)(int)(*(float *)(param_2 + 0x88) * fVar18);
    param_1[0xe] = fVar14;
    fVar16 = *(float *)(param_2 + 0x8c);
    param_1[0xe] = (float)((int)fVar14 + 3U & 0xfffffffc);
    param_1[9] = (float)((int)fVar13 + 3U & 0xfffffffc);
    param_1[4] = (float)((int)fVar15 + 3U & 0xfffffffc);
    param_1[0x13] = (float)((int)(fVar16 * fVar18) + 3U & 0xfffffffc);
    param_1[6] = *(float *)(param_2 + 0x80);
    param_1[0xb] = *(float *)(param_2 + 0x84);
    param_1[0x10] = *(float *)(param_2 + 0x88);
    param_1[0x15] = *(float *)(param_2 + 0x8c);
    auStack_f0[0] = FUN_001d1d20(*(undefined8 *)(param_2 + 0x40));
    auStack_f0[1] = FUN_001d1d20(*(undefined8 *)(param_2 + 0x50));
    auStack_f0[2] = FUN_001d1d20(*(undefined8 *)(param_2 + 0x60));
    auStack_f0[3] = FUN_001d1d20(*(undefined8 *)(param_2 + 0x70));
    fVar13 = param_1[4];
    fVar14 = param_1[9];
    fVar15 = (float)((int)fVar13 + 3);
    if (-1 < (int)fVar13) {
      fVar15 = fVar13;
    }
    fVar16 = (float)((int)fVar14 + 3);
    if (-1 < (int)fVar14) {
      fVar16 = fVar14;
    }
    aiStack_d0[0] = (((int)fVar15 >> 2) + 10) / 0xb;
    fVar15 = param_1[0xe];
    fVar18 = param_1[0x13];
    fVar6 = (float)((int)fVar15 + 3);
    if (-1 < (int)fVar15) {
      fVar6 = fVar15;
    }
    fVar5 = (float)((int)fVar18 + 3);
    if (-1 < (int)fVar18) {
      fVar5 = fVar18;
    }
    iVar8 = (int)fVar13 + (int)fVar14 + (int)fVar15 + (int)fVar18;
    iVar2 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar2 = iVar8;
    }
    aiStack_d0[1] = (((int)fVar16 >> 2) + 10) / 0xb;
    aiStack_d0[2] = (((int)fVar6 >> 2) + 10) / 0xb;
    aiStack_d0[3] = (((int)fVar5 >> 2) + 10) / 0xb;
    iVar8 = (aiStack_d0[0] + aiStack_d0[1] + aiStack_d0[2] + aiStack_d0[3]) * 2 + 0xd;
    iStack_c0 = (iVar8 + (iVar2 >> 2) * 9) * 0x10;
    uVar3 = FUN_001d1dc8(iStack_c0);
    param_1[0x1a] = (float)uVar3;
    memset(uVar3,0,iStack_c0);
    pfStack_bc = param_1 + 6;
    fVar13 = param_1[4];
    puVar1 = (undefined8 *)param_1[0x1a];
    fVar14 = (float)((int)fVar13 + 3);
    if (-1 < (int)fVar13) {
      fVar14 = fVar13;
    }
    fVar13 = param_1[9];
    fVar15 = param_1[0xe];
    puVar11 = puVar1 + iVar8 * 2;
    fVar16 = (float)((int)fVar13 + 3);
    if (-1 < (int)fVar13) {
      fVar16 = fVar13;
    }
    param_1[3] = (float)puVar11;
    puVar11 = puVar11 + ((int)fVar14 >> 2) * 0x12;
    param_1[8] = (float)puVar11;
    fVar13 = (float)((int)fVar15 + 3);
    if (-1 < (int)fVar15) {
      fVar13 = fVar15;
    }
    param_1[0xd] = (float)(puVar11 + ((int)fVar16 >> 2) * 0x12);
    param_1[0x12] = (float)(puVar11 + ((int)fVar16 >> 2) * 0x12 + ((int)fVar13 >> 2) * 0x12);
    *puVar1 = 0x10000000;
    puVar1[1] = 0x500000000000000;
    puVar9 = puVar1 + 2;
    iVar2 = 0;
    do {
      iVar8 = 0;
      iVar12 = iVar2 + 1;
      fVar13 = pfStack_bc[iVar2 * 5];
      *puVar9 = 0x10000002;
      puVar9[1] = 0x5000000210000000;
      puVar9[2] = 0x1000000000008001;
      puVar9[3] = 0xe;
      puVar9[4] = auStack_f0[iVar2];
      puVar9[5] = 1;
      puVar9 = puVar9 + 6;
      if (0 < aiStack_d0[iVar2]) {
        iVar10 = 0;
        do {
          uVar7 = 0xb;
          if (aiStack_d0[iVar2] + -1 <= iVar8) {
            fVar14 = (param_1 + iVar2 * 5 + 3)[1];
            fVar15 = (float)((int)fVar14 + 3);
            if (-1 < (int)fVar14) {
              fVar15 = fVar14;
            }
            uVar7 = ((int)fVar15 >> 2) + (aiStack_d0[iVar2] + -1) * -0xb;
          }
          *puVar9 = (long)(int)(uVar7 * 9) | 0x30000000U |
                    (long)((int)param_1[iVar2 * 5 + 3] + iVar10) << 0x20;
          puVar9[1] = ((long)(int)(uVar7 * 0x90000) | 0x6c008000U) << 0x20 | 0x1000101;
          if ((iVar2 < 3) || (iVar8 < aiStack_d0[iVar2] + -1)) {
            puVar9[2] = 0x10000000;
          }
          else {
            puVar9[2] = 0x60000000;
          }
          uVar7 = uVar7 | (int)(fVar13 * (1023.999 / fVar17)) & 0xfffffff0U;
          if ((iVar2 == 0) && (iVar8 == 0)) {
            uVar4 = (ulong)uVar7 | 0x1500000004000000;
          }
          else {
            uVar4 = (ulong)uVar7 | 0x1700000004000000;
          }
          puVar9[3] = uVar4;
          puVar9 = puVar9 + 4;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0x630;
        } while (iVar8 < aiStack_d0[iVar2]);
      }
      iVar2 = iVar12;
    } while (iVar12 < 4);
    FUN_003680a0(param_1[0x1a],(int)param_1[0x1a] + iStack_c0 + -1);
  }
  return;
}


// ==== FUN_001d1a30 @ 001d1a30 ====

undefined4 FUN_001d1a30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
    iVar4 = 0;
    iVar6 = *(int *)(param_1 + 0x10 + iVar5 * 0x14);
    puVar3 = *(undefined4 **)(param_1 + 0xc + iVar5 * 0x14);
    iVar1 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar1 = iVar6;
    }
    iVar6 = iVar5 + 1;
    if (0 < iVar1 >> 2) {
      do {
        *puVar3 = 0xc61c3c00;
        iVar4 = iVar4 + 1;
        puVar3[1] = 0xc61c3c00;
        puVar3[2] = 0xc61c3c00;
        puVar3[3] = 0xc61c3c00;
        iVar1 = *(int *)(iVar5 * 0x14 + param_1 + 0x10);
        iVar2 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        puVar3 = puVar3 + 0x24;
      } while (iVar4 < iVar2 >> 2);
    }
    *(undefined4 *)(param_1 + 0x14 + iVar5 * 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c + iVar5 * 0x14) = 0xc61c3c00;
    iVar5 = iVar6;
  } while (iVar6 < 4);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0xc61c3c00;
  return 1;
}


// ==== FUN_001d1b28 @ 001d1b28 ====

undefined4 FUN_001d1b28(void)

{
  return 1;
}


// ==== FUN_001d1b30 @ 001d1b30 ====

void FUN_001d1b30(void)

{
  return;
}


// ==== FUN_001d1b38 @ 001d1b38 ====

void FUN_001d1b38(void)

{
  return;
}


// ==== FUN_001d1b40 @ 001d1b40 ====

void FUN_001d1b40(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
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
  float fStack_c;
  
  auVar14 = _qmtc2(param_4);
  auVar13 = _qmtc2(param_5);
  iVar1 = *(int *)(param_3 + 4);
  piVar6 = (int *)(param_3 + *(int *)(param_3 + 0x5c) * 0x14 + 0xc);
  uVar2 = piVar6[2];
  uVar4 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  piVar6[2] = uVar2 + 1;
  uVar4 = *piVar6 + ((int)uVar4 >> 2) * 0x90 | 0x20000000;
  pauVar5 = (undefined1 (*) [16])(uVar4 + (uVar2 & 3) * 0x20 + 0x10);
  if (uVar2 + 1 == piVar6[1]) {
    piVar6[2] = 0;
  }
  auVar12 = _sqc2(auVar13);
  auVar11 = _qmtc2(param_2);
  auVar11 = _vsubbc(auVar14,auVar11);
  fStack_c = auVar12._4_4_;
  fVar7 = fStack_c;
  auVar12 = _sqc2(auVar11);
  bVar3 = fStack_c < 0.0;
  *(uint *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1U & 3;
  fStack_c = auVar12._4_4_;
  if (bVar3) {
    if (fStack_c <= 0.0) {
      fVar7 = -fVar7;
    }
    fVar10 = *(float *)(iVar1 + 0x90);
  }
  else {
    fVar10 = *(float *)(iVar1 + 0x90);
  }
  _vadd(in_vf0,auVar14);
  _vadd(in_vf0,auVar13);
  fVar8 = fVar7 * fVar7 - (fVar10 + fVar10) * fStack_c;
  if ((fVar8 <= 0.0) || (fVar9 = (float)piVar6[3] * fVar10 + fVar7, fVar9 * fVar9 <= fVar8)) {
    auVar12 = _vsubbc(in_vf0,in_vf0);
    auVar15 = _vaddbc(auVar12,auVar13);
    auVar13 = _vaddbc(auVar12,auVar14);
  }
  else {
    auVar13 = _qmtc2(fStack_c);
    auVar14 = _vsubbc(auVar14,auVar13);
    auVar11 = _vsubbc(in_vf0,in_vf0);
    fVar8 = (SQRT(fVar8) + fVar7) * (-1.0 / fVar10);
    auVar12 = _qmtc2(fVar10 * 0.5 * fVar8 * fVar8);
    fVar7 = -*(float *)(iVar1 + 0x94) * (fVar7 + fVar10 * fVar8) - fVar10 * fVar8;
    auVar13 = _qmtc2(fVar7);
    auVar15 = _vmr32(auVar13);
    auVar13 = _qmtc2(fVar7 * fVar8);
    auVar13 = _vsubbc(auVar14,auVar13);
    auVar13 = _vsubbc(auVar13,auVar12);
    auVar13 = _vaddbc(auVar11,auVar13);
  }
  auVar14 = _sqc2(auVar15);
  pauVar5[1] = auVar14;
  auVar13 = _sqc2(auVar13);
  *pauVar5 = auVar13;
  *(int *)(uVar4 + (uVar2 & 3) * 4) = param_1;
  piVar6[4] = param_1;
  *(int *)(param_3 + 100) = param_1;
  return;
}


// ==== FUN_001d1d18 @ 001d1d18 ====

void FUN_001d1d18(void)

{
  return;
}


// ==== FUN_001d1d20 @ 001d1d20 ====

ulong FUN_001d1d20(undefined4 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  auVar2 = _qmtc2(param_1);
  auVar3 = _qmtc2(0x43000000);
  auVar6 = _qmtc2(0x3f000000);
  auVar1 = _vmulbc(auVar2,auVar3);
  auVar1 = _vaddbc(auVar1,auVar6);
  auVar1 = _sqc2(auVar1);
  auVar4 = _vmulbc(auVar2,auVar3);
  auVar5 = _vaddbc(auVar4,auVar6);
  auVar4 = _vmulbc(auVar2,auVar3);
  auVar3 = _vmulbc(auVar2,auVar3);
  auVar2 = _vaddbc(auVar4,auVar6);
  uStack_c = auVar1._4_4_;
  auVar4 = _vaddbc(auVar3,auVar6);
  auVar1 = _sqc2(auVar5);
  auVar4 = _qmfc2(auVar4._0_4_);
  uStack_8 = auVar1._8_4_;
  auVar1 = _sqc2(auVar2);
  uStack_4 = auVar1._12_4_;
  return (long)(int)auVar4._0_4_ | (long)(int)uStack_c << 8 | (long)(int)uStack_8 << 0x10 |
         (long)(int)uStack_4 << 0x18 | 0x3f80000000000000;
}


// ==== FUN_001d1dc8 @ 001d1dc8 ====

int FUN_001d1dc8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1e;
  if (-1 < param_1 + 0xf) {
    iVar2 = param_1 + 0xf;
  }
  iVar1 = DAT_0042a1e0 + 0x4199e0;
  DAT_0042a1e0 = DAT_0042a1e0 + (iVar2 >> 4) * 0x10;
  return iVar1;
}


// ==== FUN_001d1e08 @ 001d1e08 ====

void FUN_001d1e08(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  int iStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  uint uStack_c0;
  int iStack_bc;
  
  iStack_e0 = param_1;
  FUN_001c1cd0();
  if (0.003921569 <= *(float *)(iStack_e0 + 0x20)) {
    lStack_c8 = (long)(int)(param_2 >> 0xb);
    uVar5 = *(undefined8 *)(DAT_0040f4c0 + 0xd5d8);
    iVar11 = 2;
    uVar13 = (uint)uVar5 & 0x7ff;
    iVar12 = ((uint)((ulong)uVar5 >> 0x10) & 0x7ff) - (uVar13 - 1);
    uStack_c0 = (uint)((ulong)uVar5 >> 0x20) & 0x7ff;
    iStack_bc = ((ushort)((ulong)uVar5 >> 0x30) & 0x7ff) - (uStack_c0 - 1);
    iVar10 = iVar12 / 2;
    iVar7 = uVar13 + iVar12 + 0x1f;
    iVar9 = (int)(*(float *)(iStack_e0 + 0x10) * 0.5 * (float)iVar12 + 9999.5) + -9999;
    uStack_d8 = *(ulong *)(DAT_0040f4c0 + 0xd5c0) & 0x1ff;
    uStack_d0 = *(ulong *)(DAT_0040f4c0 + 0xd5c0) >> 0x10 & 0x3f;
    iVar4 = uVar13 + iVar12 + 0x3e;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    iVar7 = iVar9;
    if (iVar10 <= iVar9) {
      iVar7 = iVar10;
    }
    iVar14 = iStack_bc / 2;
    iVar15 = (int)(*(float *)(iStack_e0 + 0x14) * 0.5 * (float)iStack_bc + 9999.5) + -9999;
    iVar8 = 0;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    iVar3 = iVar10 + 0x3e;
    if (-1 < iVar10 + 0x1f) {
      iVar3 = iVar10 + 0x1f;
    }
    uVar16 = uStack_d0 + 1 >> 1;
    iVar4 = ((iVar4 >> 5) - ((int)uVar13 >> 5)) * 2 + 0x11;
    do {
      if (iVar9 < 1) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar7 + 0x3e;
        if (-1 < iVar7 + 0x1f) {
          iVar6 = iVar7 + 0x1f;
        }
        iVar6 = iVar6 >> 5;
      }
      if (iVar9 < iVar10) {
        iVar2 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar2 = iVar8;
        }
        iVar6 = (iVar6 + ((iVar3 >> 5) - (iVar2 >> 5))) * 4;
      }
      else {
        iVar6 = iVar6 << 2;
      }
      iVar4 = iVar4 + 1 + iVar6;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    iVar7 = iVar12 + 0x3e;
    if (-1 < iVar12 + 0x1f) {
      iVar7 = iVar12 + 0x1f;
    }
    bVar1 = true;
    iVar11 = 2;
    FUN_002b3d88(0xffffffff80000000,iVar4 + (iVar7 >> 5) * 2 + 0xd);
    FUN_001d21f0();
    FUN_001d22c8(uStack_d8,uStack_d0,lStack_c8,uVar16,uVar13,uStack_c0,iVar12,iStack_bc);
    FUN_001d2438(lStack_c8,uVar16,iVar10,iVar14);
    uStack_100 = *(undefined8 *)(iStack_e0 + 0x18);
    do {
      if (DAT_003bd268 != -1) {
        bVar1 = DAT_003bd268 != 0;
      }
      if (bVar1) {
        FUN_001d24f8(iVar9,iVar15,iVar10,iVar14,&uStack_100);
      }
      else {
        uStack_f0 = CONCAT44(1.0 / uStack_100._4_4_,1.0 / (float)uStack_100);
        FUN_001d28d8(iVar9,iVar15,iVar10,iVar14,&uStack_f0);
      }
      bVar1 = (bool)(bVar1 ^ 1);
      iVar11 = iVar11 + -1;
      uStack_100 = CONCAT44(uStack_100._4_4_ * uStack_100._4_4_,
                            (float)uStack_100 * (float)uStack_100);
      uStack_f0 = uStack_100;
    } while (-1 < iVar11);
    FUN_001d2cc0(*(undefined4 *)(iStack_e0 + 0x20),uStack_d8,uStack_d0,lStack_c8,uVar16,uVar13,
                 uStack_c0,iVar12,iStack_bc);
    FUN_001d2e30();
  }
  return;
}


// ==== FUN_001d21f0 @ 001d21f0 ====

void FUN_001d21f0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_v1_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong in_a1_udw;
  
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0xe;
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = 0x1000000000000006;
  auVar8 = _pcpyld(auVar7,auVar8);
  *DAT_0040e5f0 = auVar8._0_4_;
  DAT_0040e5f0[1] = auVar8._4_4_;
  DAT_0040e5f0[2] = auVar8._8_4_;
  DAT_0040e5f0[3] = auVar8._12_4_;
  auVar9._8_8_ = auVar8._8_8_;
  auVar9._0_8_ = 0x40;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = 0x7ff000007ff0000;
  auVar8 = _pcpyld(auVar9,auVar1);
  DAT_0040e5f0[4] = auVar8._0_4_;
  DAT_0040e5f0[5] = auVar8._4_4_;
  DAT_0040e5f0[6] = auVar8._8_4_;
  DAT_0040e5f0[7] = auVar8._12_4_;
  auVar10._8_8_ = auVar8._8_8_;
  auVar10._0_8_ = 0x18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = in_a1_udw;
  auVar8 = _pcpyld(auVar10,auVar6 << 0x40);
  DAT_0040e5f0[8] = auVar8._0_4_;
  DAT_0040e5f0[9] = auVar8._4_4_;
  DAT_0040e5f0[10] = auVar8._8_4_;
  DAT_0040e5f0[0xb] = auVar8._12_4_;
  auVar11._8_8_ = auVar8._8_8_;
  auVar11._0_8_ = 0x14;
  auVar2._8_8_ = in_a1_udw;
  auVar2._0_8_ = 0x61;
  auVar8 = _pcpyld(auVar11,auVar2);
  DAT_0040e5f0[0xc] = auVar8._0_4_;
  DAT_0040e5f0[0xd] = auVar8._4_4_;
  DAT_0040e5f0[0xe] = auVar8._8_4_;
  DAT_0040e5f0[0xf] = auVar8._12_4_;
  auVar12._8_8_ = auVar8._8_8_;
  auVar12._0_8_ = 1;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = 0x3f80000080808080;
  auVar8 = _pcpyld(auVar12,auVar3);
  DAT_0040e5f0[0x10] = auVar8._0_4_;
  DAT_0040e5f0[0x11] = auVar8._4_4_;
  DAT_0040e5f0[0x12] = auVar8._8_4_;
  DAT_0040e5f0[0x13] = auVar8._12_4_;
  auVar13._8_8_ = auVar8._8_8_;
  auVar13._0_8_ = 0x47;
  auVar4._8_8_ = in_a1_udw;
  auVar4._0_8_ = 0x31001;
  auVar8 = _pcpyld(auVar13,auVar4);
  DAT_0040e5f0[0x14] = auVar8._0_4_;
  DAT_0040e5f0[0x15] = auVar8._4_4_;
  DAT_0040e5f0[0x16] = auVar8._8_4_;
  DAT_0040e5f0[0x17] = auVar8._12_4_;
  auVar14._8_8_ = auVar8._8_8_;
  auVar14._0_8_ = 8;
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 0xffc00ffc00a;
  auVar8 = _pcpyld(auVar14,auVar5);
  DAT_0040e5f0[0x18] = auVar8._0_4_;
  DAT_0040e5f0[0x19] = auVar8._4_4_;
  DAT_0040e5f0[0x1a] = auVar8._8_4_;
  DAT_0040e5f0[0x1b] = auVar8._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x1c;
  return;
}


// ==== FUN_001d22c8 @ 001d22c8 ====

void FUN_001d22c8(long param_1,long param_2,ulong param_3,long param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 in_v0_udw;
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
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  undefined8 in_t7_udw;
  uint uVar25;
  
  iVar24 = param_5 + param_7;
  iVar23 = iVar24 + 0x3e;
  if (-1 < iVar24 + 0x1f) {
    iVar23 = iVar24 + 0x1f;
  }
  iVar7 = param_5 + 0x1f;
  if (-1 < param_5) {
    iVar7 = param_5;
  }
  uVar25 = (iVar23 >> 5) - (iVar7 >> 5);
  auVar8._8_8_ = in_v0_udw;
  auVar8._0_8_ = 0xe;
  auVar9._8_8_ = in_t7_udw;
  auVar9._0_8_ = 0x10ab400000000003;
  auVar9 = _pcpyld(auVar8,auVar9);
  *DAT_0040e5f0 = auVar9._0_4_;
  DAT_0040e5f0[1] = auVar9._4_4_;
  DAT_0040e5f0[2] = auVar9._8_4_;
  DAT_0040e5f0[3] = auVar9._12_4_;
  auVar10._8_8_ = auVar9._8_8_;
  auVar10._0_8_ = 6;
  auVar1._8_8_ = in_t7_udw;
  auVar1._0_8_ = param_1 << 5 | param_2 << 0xe | 0x6a8000000;
  auVar9 = _pcpyld(auVar10,auVar1);
  DAT_0040e5f0[4] = auVar9._0_4_;
  DAT_0040e5f0[5] = auVar9._4_4_;
  DAT_0040e5f0[6] = auVar9._8_4_;
  DAT_0040e5f0[7] = auVar9._12_4_;
  auVar11._8_8_ = auVar9._8_8_;
  auVar11._0_8_ = 0x4c;
  auVar2._8_8_ = in_t7_udw;
  auVar2._0_8_ = param_3 | param_4 << 0x10;
  auVar9 = _pcpyld(auVar11,auVar2);
  DAT_0040e5f0[8] = auVar9._0_4_;
  DAT_0040e5f0[9] = auVar9._4_4_;
  DAT_0040e5f0[10] = auVar9._8_4_;
  DAT_0040e5f0[0xb] = auVar9._12_4_;
  auVar12._8_8_ = auVar9._8_8_;
  auVar12._0_8_ = 0x42;
  auVar3._8_8_ = in_t7_udw;
  auVar3._0_8_ = 0x2a;
  auVar9 = _pcpyld(auVar12,auVar3);
  DAT_0040e5f0[0xc] = auVar9._0_4_;
  DAT_0040e5f0[0xd] = auVar9._4_4_;
  DAT_0040e5f0[0xe] = auVar9._8_4_;
  DAT_0040e5f0[0xf] = auVar9._12_4_;
  auVar13._8_8_ = auVar9._8_8_;
  auVar13._0_8_ = 0x5353;
  auVar4._8_8_ = in_t7_udw;
  auVar4._0_8_ = (ulong)uVar25 | 0x4400000000000000;
  auVar9 = _pcpyld(auVar13,auVar4);
  DAT_0040e5f0[0x10] = auVar9._0_4_;
  DAT_0040e5f0[0x11] = auVar9._4_4_;
  DAT_0040e5f0[0x12] = auVar9._8_4_;
  DAT_0040e5f0[0x13] = auVar9._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  auVar17._8_8_ = auVar9._8_8_;
  auVar17._0_8_ = (long)((param_6 + param_8) * 0x10 + 0x10);
  uVar22 = auVar17._0_8_ << 0x10;
  uVar18 = 0;
  uVar20 = (long)(param_5 * 0x10 + 0x10);
  do {
    auVar14._8_8_ = auVar17._8_8_;
    auVar14._0_8_ = uVar18;
    auVar5._8_8_ = in_t7_udw;
    auVar5._0_8_ = uVar20 | (long)(param_6 * 0x10 + 0x10) << 0x10;
    auVar15 = _pcpyld(auVar14,auVar5);
    *DAT_0040e5f0 = auVar15._0_4_;
    DAT_0040e5f0[1] = auVar15._4_4_;
    DAT_0040e5f0[2] = auVar15._8_4_;
    DAT_0040e5f0[3] = auVar15._12_4_;
    uVar25 = uVar25 - 1;
    uVar19 = (long)(param_7 << 3);
    uVar21 = (long)(iVar24 * 0x10 + 0x10);
    if (uVar25 != 0) {
      auVar15._0_8_ = uVar20 + 0x200;
      uVar19 = uVar18 + 0x100 & 0xfffffffffffffff0;
      uVar21 = auVar15._0_8_ & 0xffffffffffffffe0;
    }
    auVar16._8_8_ = auVar15._8_8_;
    auVar16._0_8_ = uVar19 | (long)(param_8 << 3) << 0x10;
    auVar6._8_8_ = in_t7_udw;
    auVar6._0_8_ = uVar21 | uVar22;
    auVar17 = _pcpyld(auVar16,auVar6);
    DAT_0040e5f0[4] = auVar17._0_4_;
    DAT_0040e5f0[5] = auVar17._4_4_;
    DAT_0040e5f0[6] = auVar17._8_4_;
    DAT_0040e5f0[7] = auVar17._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
    uVar18 = uVar19;
    uVar20 = uVar21;
  } while (uVar25 != 0);
  return;
}


// ==== FUN_001d2438 @ 001d2438 ====

void FUN_001d2438(ulong param_1,long param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_v0_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_v1_udw;
  undefined8 in_t1_udw;
  undefined8 in_t2_udw;
  
  auVar7._8_8_ = in_v0_udw;
  auVar7._0_8_ = 0xe;
  auVar2._8_8_ = in_t2_udw;
  auVar2._0_8_ = 0x102b400000000004;
  auVar8 = _pcpyld(auVar7,auVar2);
  *DAT_0040e5f0 = auVar8._0_4_;
  DAT_0040e5f0[1] = auVar8._4_4_;
  DAT_0040e5f0[2] = auVar8._8_4_;
  DAT_0040e5f0[3] = auVar8._12_4_;
  auVar1._8_8_ = in_t1_udw;
  auVar1._0_8_ = 6;
  auVar3._8_8_ = in_t2_udw;
  auVar3._0_8_ = param_1 << 5 | param_2 << 0xe | 0x6a8000000;
  auVar8 = _pcpyld(auVar1,auVar3);
  DAT_0040e5f0[4] = auVar8._0_4_;
  DAT_0040e5f0[5] = auVar8._4_4_;
  DAT_0040e5f0[6] = auVar8._8_4_;
  DAT_0040e5f0[7] = auVar8._12_4_;
  auVar8._8_8_ = in_v1_udw;
  auVar8._0_8_ = 0x4c;
  auVar4._8_8_ = in_t2_udw;
  auVar4._0_8_ = param_1 | param_2 << 0x10 | 0xff00000000000000;
  auVar8 = _pcpyld(auVar8,auVar4);
  DAT_0040e5f0[8] = auVar8._0_4_;
  DAT_0040e5f0[9] = auVar8._4_4_;
  DAT_0040e5f0[10] = auVar8._8_4_;
  DAT_0040e5f0[0xb] = auVar8._12_4_;
  auVar9._8_8_ = auVar8._8_8_;
  auVar9._0_8_ = 0x42;
  auVar5._8_8_ = in_t2_udw;
  auVar5._0_8_ = 0x4000000064;
  auVar8 = _pcpyld(auVar9,auVar5);
  DAT_0040e5f0[0xc] = auVar8._0_4_;
  DAT_0040e5f0[0xd] = auVar8._4_4_;
  DAT_0040e5f0[0xe] = auVar8._8_4_;
  DAT_0040e5f0[0xf] = auVar8._12_4_;
  auVar10._8_8_ = auVar8._8_8_;
  auVar10._0_8_ = 8;
  auVar6._8_8_ = in_t2_udw;
  auVar6._0_8_ = (long)(param_3 + -1) << 0xe | (long)(param_4 + -1) << 0x22 | 10U;
  auVar8 = _pcpyld(auVar10,auVar6);
  DAT_0040e5f0[0x10] = auVar8._0_4_;
  DAT_0040e5f0[0x11] = auVar8._4_4_;
  DAT_0040e5f0[0x12] = auVar8._8_4_;
  DAT_0040e5f0[0x13] = auVar8._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  return;
}


// ==== FUN_001d24f8 @ 001d24f8 ====

void FUN_001d24f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
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
  int iVar19;
  long lVar20;
  ulong uVar22;
  ulong in_v0_udw;
  undefined1 auVar23 [16];
  long lVar21;
  undefined1 auVar24 [16];
  int iVar25;
  undefined8 in_v1_udw;
  int iVar26;
  int iVar27;
  int iVar28;
  ulong in_a1_udw;
  undefined1 auVar29 [16];
  undefined8 in_a3_udw;
  undefined1 auVar30 [16];
  int iVar31;
  undefined8 in_t2_udw;
  ulong uVar32;
  ulong uVar33;
  undefined8 in_t3_udw;
  undefined1 auVar34 [16];
  int iVar35;
  int iVar36;
  undefined8 in_t7_udw;
  undefined4 in_s2_udw;
  undefined4 in_register_0000012c;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  iVar35 = (int)param_2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = in_v0_udw;
  auVar23._8_8_ = in_a1_udw;
  auVar23._0_8_ = param_2;
  auVar23 = _pmaxw(auVar23,auVar29 << 0x40);
  auVar24._8_8_ = in_a3_udw;
  auVar24._0_8_ = param_4;
  auVar23 = _pminw(auVar23,auVar24);
  auVar23 = _pextlw(0,auVar23._0_8_);
  lVar20 = (long)(auVar23._0_4_ << 4);
  fVar39 = param_5[1];
  fVar37 = (float)iVar35 + 0.5;
  iVar31 = (int)param_1;
  iVar36 = iVar31 * 0x10;
  lVar7 = (long)((int)param_4 << 4);
  fVar41 = (fVar37 - fVar39 * (float)(iVar35 - (int)param_4)) * 0.0009765625;
  fVar40 = (fVar37 - fVar39 * (float)iVar35) * 0.0009765625;
  fVar37 = (fVar37 - fVar39 * (float)(iVar35 - auVar23._0_4_)) * 0.0009765625;
  fVar39 = ((float)iVar31 + 0.5) * 0.0009765625;
  if (param_1 < 1) {
    iVar35 = 0;
  }
  else {
    lVar21 = param_1;
    if (param_3 <= param_1) {
      lVar21 = param_3;
    }
    iVar26 = (int)lVar21 + 0x1f;
    iVar35 = (int)lVar21 + 0x3e;
    if (-1 < iVar26) {
      iVar35 = iVar26;
    }
    iVar35 = iVar35 >> 5;
  }
  iVar26 = (int)param_3;
  if (param_1 < param_3) {
    iVar25 = 0;
    iVar28 = 0;
    if (-1 < param_1) {
      iVar25 = (int)((ulong)param_1 >> 0x20);
      iVar28 = iVar31;
    }
    iVar27 = iVar26 + 0x3e;
    if (-1 < iVar26 + 0x1f) {
      iVar27 = iVar26 + 0x1f;
    }
    iVar19 = iVar28 + 0x1f;
    if (-1 < iVar25) {
      iVar19 = iVar28;
    }
    iVar28 = (iVar27 >> 5) - (iVar19 >> 5);
  }
  else {
    iVar28 = 0;
  }
  fVar42 = *param_5 * 6.1035156e-05;
  auVar30._8_8_ = in_v1_udw;
  auVar30._0_8_ = (ulong)(uint)(iVar35 + iVar28) | 0x8400000000000000;
  auVar8._8_8_ = in_t2_udw;
  auVar8._0_8_ = 0x52525252;
  auVar23 = _pcpyld(auVar8,auVar30);
  *DAT_0040e5f0 = auVar23._0_4_;
  DAT_0040e5f0[1] = auVar23._4_4_;
  DAT_0040e5f0[2] = auVar23._8_4_;
  DAT_0040e5f0[3] = auVar23._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  iVar26 = iVar26 * 0x10;
  iVar28 = iVar28 + -1;
  iVar35 = iVar35 + -1;
  uVar32 = 0x200;
  if (iVar35 != -1) {
    auVar15._8_8_ = in_t7_udw;
    auVar15._0_8_ = (long)iVar36;
    auVar17._8_4_ = in_s2_udw;
    auVar17._0_8_ = (long)iVar26;
    auVar17._12_4_ = in_register_0000012c;
    auVar23 = _pminw(auVar15,auVar17);
    uVar33 = 0;
    do {
      auVar24 = _pextlw(0,auVar23._0_8_);
      uVar22 = uVar32;
      if (iVar35 == 0) {
        uVar22 = auVar24._0_8_;
      }
      fVar38 = fVar39 - fVar42 * (float)(iVar36 - (int)uVar33);
      auVar1._4_4_ = fVar40;
      auVar1._0_4_ = fVar38;
      auVar1._8_8_ = in_v1_udw;
      auVar9._8_8_ = in_t2_udw;
      auVar9._0_8_ = uVar33;
      auVar29 = _pcpyld(auVar9,auVar1);
      auVar2._4_4_ = fVar37;
      auVar2._0_4_ = fVar39 - fVar42 * (float)(iVar36 - (int)uVar22);
      auVar2._8_8_ = in_v1_udw;
      auVar10._8_8_ = in_t2_udw;
      auVar10._0_8_ = uVar22 | lVar20 << 0x10;
      auVar30 = _pcpyld(auVar10,auVar2);
      auVar3._4_4_ = fVar41;
      auVar3._0_4_ = fVar38;
      auVar3._8_8_ = in_v1_udw;
      auVar11._8_8_ = in_t2_udw;
      auVar11._0_8_ = uVar33 | lVar7 << 0x10;
      auVar24 = _pcpyld(auVar11,auVar3);
      *DAT_0040e5f0 = auVar29._0_4_;
      DAT_0040e5f0[1] = auVar29._4_4_;
      DAT_0040e5f0[2] = auVar29._8_4_;
      DAT_0040e5f0[3] = auVar29._12_4_;
      DAT_0040e5f0[4] = auVar30._0_4_;
      DAT_0040e5f0[5] = auVar30._4_4_;
      DAT_0040e5f0[6] = auVar30._8_4_;
      DAT_0040e5f0[7] = auVar30._12_4_;
      DAT_0040e5f0[8] = auVar24._0_4_;
      DAT_0040e5f0[9] = auVar24._4_4_;
      DAT_0040e5f0[10] = auVar24._8_4_;
      DAT_0040e5f0[0xb] = auVar24._12_4_;
      DAT_0040e5f0[0xc] = auVar30._0_4_;
      DAT_0040e5f0[0xd] = auVar30._4_4_;
      DAT_0040e5f0[0xe] = auVar30._8_4_;
      DAT_0040e5f0[0xf] = auVar30._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
      iVar35 = iVar35 + -1;
      uVar32 = (ulong)((int)uVar22 + 0x200);
      uVar33 = uVar22;
    } while (iVar35 != -1);
  }
  auVar34._0_8_ = (long)(iVar26 + -1) & 0xfffffffffffffe00;
  auVar34._8_8_ = in_t3_udw;
  if (iVar28 != -1) {
    uVar32 = (long)iVar26;
    do {
      iVar35 = auVar34._0_4_ + iVar31 * -0x10;
      if (iVar28 == 0) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = in_a1_udw;
        auVar16._8_8_ = in_t7_udw;
        auVar16._0_8_ = (long)iVar36;
        auVar23 = _pmaxw(auVar16,auVar18 << 0x40);
        auVar34 = _pextlw(0,auVar23._0_8_);
        iVar35 = auVar34._0_4_ + iVar31 * -0x10;
      }
      uVar33 = auVar34._0_8_;
      fVar38 = fVar39 + fVar42 * (float)iVar35;
      auVar4._4_4_ = fVar40;
      auVar4._0_4_ = fVar38;
      auVar4._8_8_ = in_v1_udw;
      auVar12._8_8_ = in_t2_udw;
      auVar12._0_8_ = uVar33;
      auVar24 = _pcpyld(auVar12,auVar4);
      auVar5._4_4_ = fVar37;
      auVar5._0_4_ = fVar39 + fVar42 * (float)((int)uVar32 + iVar31 * -0x10);
      auVar5._8_8_ = in_v1_udw;
      auVar13._8_8_ = in_t2_udw;
      auVar13._0_8_ = uVar32 | lVar20 << 0x10;
      auVar29 = _pcpyld(auVar13,auVar5);
      auVar6._4_4_ = fVar41;
      auVar6._0_4_ = fVar38;
      auVar6._8_8_ = in_v1_udw;
      auVar14._8_8_ = in_t2_udw;
      auVar14._0_8_ = uVar33 | lVar7 << 0x10;
      auVar23 = _pcpyld(auVar14,auVar6);
      *DAT_0040e5f0 = auVar24._0_4_;
      DAT_0040e5f0[1] = auVar24._4_4_;
      DAT_0040e5f0[2] = auVar24._8_4_;
      DAT_0040e5f0[3] = auVar24._12_4_;
      DAT_0040e5f0[4] = auVar29._0_4_;
      DAT_0040e5f0[5] = auVar29._4_4_;
      DAT_0040e5f0[6] = auVar29._8_4_;
      DAT_0040e5f0[7] = auVar29._12_4_;
      DAT_0040e5f0[8] = auVar23._0_4_;
      DAT_0040e5f0[9] = auVar23._4_4_;
      DAT_0040e5f0[10] = auVar23._8_4_;
      DAT_0040e5f0[0xb] = auVar23._12_4_;
      DAT_0040e5f0[0xc] = auVar29._0_4_;
      DAT_0040e5f0[0xd] = auVar29._4_4_;
      DAT_0040e5f0[0xe] = auVar29._8_4_;
      DAT_0040e5f0[0xf] = auVar29._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
      iVar28 = iVar28 + -1;
      auVar34._0_8_ = (ulong)(auVar34._0_4_ + -0x200);
      uVar32 = uVar33;
    } while (iVar28 != -1);
  }
  return;
}


// ==== FUN_001d28d8 @ 001d28d8 ====

void FUN_001d28d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,float *param_5)

{
  undefined1 auVar1 [16];
  long lVar2;
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
  int iVar20;
  int iVar21;
  long lVar22;
  ulong in_v0_udw;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  undefined8 in_v1_udw;
  int iVar26;
  int iVar27;
  undefined8 in_a1_udw;
  undefined8 in_a3_udw;
  undefined8 in_t0_udw;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 in_t4_udw;
  ulong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined8 in_t8_udw;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  iVar35 = (int)param_2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = in_v0_udw;
  auVar23._8_8_ = in_a1_udw;
  auVar23._0_8_ = param_2;
  auVar23 = _pmaxw(auVar23,auVar32 << 0x40);
  auVar31._8_8_ = in_a3_udw;
  auVar31._0_8_ = param_4;
  auVar23 = _pminw(auVar23,auVar31);
  auVar23 = _pextlw(0,auVar23._0_8_);
  iVar20 = auVar23._0_4_ << 4;
  fVar39 = param_5[1];
  fVar37 = (float)iVar35 + 0.5;
  lVar2 = (long)((int)param_4 << 4);
  iVar28 = (int)param_1;
  iVar36 = iVar28 * 0x10;
  fVar41 = (fVar37 - fVar39 * (float)(iVar35 - (int)param_4)) * 0.0009765625;
  fVar40 = (fVar37 - fVar39 * (float)iVar35) * 0.0009765625;
  fVar37 = (fVar37 - fVar39 * (float)(iVar35 - auVar23._0_4_)) * 0.0009765625;
  fVar39 = ((float)iVar28 + 0.5) * 0.0009765625;
  if (param_1 < 1) {
    iVar35 = 0;
  }
  else {
    lVar22 = param_1;
    if (param_3 <= param_1) {
      lVar22 = param_3;
    }
    iVar26 = (int)lVar22 + 0x1f;
    iVar35 = (int)lVar22 + 0x3e;
    if (-1 < iVar26) {
      iVar35 = iVar26;
    }
    iVar35 = iVar35 >> 5;
  }
  iVar26 = (int)param_3;
  if (param_1 < param_3) {
    iVar25 = 0;
    iVar34 = 0;
    if (-1 < param_1) {
      iVar25 = (int)((ulong)param_1 >> 0x20);
      iVar34 = iVar28;
    }
    iVar27 = iVar26 + 0x3e;
    if (-1 < iVar26 + 0x1f) {
      iVar27 = iVar26 + 0x1f;
    }
    iVar21 = iVar34 + 0x1f;
    if (-1 < iVar25) {
      iVar21 = iVar34;
    }
    iVar34 = (iVar27 >> 5) - (iVar21 >> 5);
  }
  else {
    iVar34 = 0;
  }
  fVar42 = *param_5 * 6.1035156e-05;
  auVar3._8_8_ = in_t0_udw;
  auVar3._0_8_ = (ulong)(uint)(iVar35 + iVar34) | 0x8400000000000000;
  auVar10._8_8_ = in_t4_udw;
  auVar10._0_8_ = 0x52525252;
  auVar23 = _pcpyld(auVar10,auVar3);
  *DAT_0040e5f0 = auVar23._0_4_;
  DAT_0040e5f0[1] = auVar23._4_4_;
  DAT_0040e5f0[2] = auVar23._8_4_;
  DAT_0040e5f0[3] = auVar23._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = (long)(iVar26 << 4);
  auVar17._8_8_ = in_t8_udw;
  auVar17._0_8_ = (long)iVar36;
  auVar23 = _pminw(auVar17,auVar1);
  auVar29 = _pextlw(0,auVar23._0_8_);
  auVar24._8_8_ = auVar23._8_8_;
  iVar34 = iVar34 + -1;
  iVar35 = iVar35 + -1;
  auVar24._0_8_ = 0xffffffffffffffff;
  uVar33 = (long)(auVar29._0_4_ + -1) & 0xfffffffffffffe00;
  if (iVar35 != -1) {
    do {
      fVar38 = fVar39 - fVar42 * (float)(iVar36 - auVar29._0_4_);
      auVar4._4_4_ = fVar40;
      auVar4._0_4_ = fVar38;
      auVar4._8_8_ = in_t0_udw;
      auVar11._8_8_ = in_t4_udw;
      auVar11._0_8_ = auVar29._0_8_;
      auVar31 = _pcpyld(auVar11,auVar4);
      auVar5._4_4_ = fVar37;
      auVar5._0_4_ = fVar39 - fVar42 * (float)(iVar36 - (int)uVar33);
      auVar5._8_8_ = in_t0_udw;
      auVar12._8_8_ = in_t4_udw;
      auVar12._0_8_ =
           uVar33 | CONCAT44((int)(short)((uint)iVar20 >> 0x10),(int)((long)iVar20 << 0x10));
      auVar23 = _pcpyld(auVar12,auVar5);
      auVar6._4_4_ = fVar41;
      auVar6._0_4_ = fVar38;
      auVar6._8_8_ = in_t0_udw;
      auVar13._8_8_ = in_t4_udw;
      auVar13._0_8_ = auVar29._0_8_ | lVar2 << 0x10;
      auVar24 = _pcpyld(auVar13,auVar6);
      *DAT_0040e5f0 = auVar23._0_4_;
      DAT_0040e5f0[1] = auVar23._4_4_;
      DAT_0040e5f0[2] = auVar23._8_4_;
      DAT_0040e5f0[3] = auVar23._12_4_;
      DAT_0040e5f0[4] = auVar31._0_4_;
      DAT_0040e5f0[5] = auVar31._4_4_;
      DAT_0040e5f0[6] = auVar31._8_4_;
      DAT_0040e5f0[7] = auVar31._12_4_;
      DAT_0040e5f0[8] = auVar23._0_4_;
      DAT_0040e5f0[9] = auVar23._4_4_;
      DAT_0040e5f0[10] = auVar23._8_4_;
      DAT_0040e5f0[0xb] = auVar23._12_4_;
      DAT_0040e5f0[0xc] = auVar24._0_4_;
      DAT_0040e5f0[0xd] = auVar24._4_4_;
      DAT_0040e5f0[0xe] = auVar24._8_4_;
      DAT_0040e5f0[0xf] = auVar24._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
      auVar29._8_8_ = auVar23._8_8_;
      auVar29._0_8_ = uVar33;
      iVar35 = iVar35 + -1;
      uVar33 = (ulong)((int)uVar33 + -0x200);
    } while (iVar35 != -1);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar24._8_8_;
  auVar18._8_8_ = in_t8_udw;
  auVar18._0_8_ = (long)iVar36;
  auVar23 = _pmaxw(auVar18,auVar19 << 0x40);
  auVar30 = _pextlw(0,auVar23._0_8_);
  uVar33 = (long)(auVar30._0_4_ + 0x200) & 0xfffffffffffffe00;
  if (iVar34 != -1) {
    do {
      if (iVar34 == 0) {
        uVar33 = (long)(iVar26 << 4);
      }
      fVar38 = fVar39 + fVar42 * (float)((int)uVar33 + iVar28 * -0x10);
      auVar7._4_4_ = fVar40;
      auVar7._0_4_ = fVar38;
      auVar7._8_8_ = in_t0_udw;
      auVar14._8_8_ = in_t4_udw;
      auVar14._0_8_ = uVar33;
      auVar32 = _pcpyld(auVar14,auVar7);
      auVar8._4_4_ = fVar37;
      auVar8._0_4_ = fVar39 + fVar42 * (float)(auVar30._0_4_ + iVar28 * -0x10);
      auVar8._8_8_ = in_t0_udw;
      auVar15._8_8_ = in_t4_udw;
      auVar15._0_8_ = auVar30._0_8_ | (long)iVar20 << 0x10;
      auVar31 = _pcpyld(auVar15,auVar8);
      auVar9._4_4_ = fVar41;
      auVar9._0_4_ = fVar38;
      auVar9._8_8_ = in_t0_udw;
      auVar16._8_8_ = in_t4_udw;
      auVar16._0_8_ = uVar33 | lVar2 << 0x10;
      auVar23 = _pcpyld(auVar16,auVar9);
      *DAT_0040e5f0 = auVar31._0_4_;
      DAT_0040e5f0[1] = auVar31._4_4_;
      DAT_0040e5f0[2] = auVar31._8_4_;
      DAT_0040e5f0[3] = auVar31._12_4_;
      DAT_0040e5f0[4] = auVar32._0_4_;
      DAT_0040e5f0[5] = auVar32._4_4_;
      DAT_0040e5f0[6] = auVar32._8_4_;
      DAT_0040e5f0[7] = auVar32._12_4_;
      DAT_0040e5f0[8] = auVar31._0_4_;
      DAT_0040e5f0[9] = auVar31._4_4_;
      DAT_0040e5f0[10] = auVar31._8_4_;
      DAT_0040e5f0[0xb] = auVar31._12_4_;
      DAT_0040e5f0[0xc] = auVar23._0_4_;
      DAT_0040e5f0[0xd] = auVar23._4_4_;
      DAT_0040e5f0[0xe] = auVar23._8_4_;
      DAT_0040e5f0[0xf] = auVar23._12_4_;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
      auVar30._8_8_ = auVar31._8_8_;
      auVar30._0_8_ = uVar33;
      iVar34 = iVar34 + -1;
      uVar33 = (ulong)((int)uVar33 + 0x200);
    } while (iVar34 != -1);
  }
  return;
}


// ==== FUN_001d2cc0 @ 001d2cc0 ====

void FUN_001d2cc0(float param_1,ulong param_2,long param_3,long param_4,long param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_v0_udw;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  undefined8 in_v1_udw;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 in_t6_udw;
  uint uVar21;
  
  iVar17 = param_8 + 0x3e;
  if (-1 < param_8 + 0x1f) {
    iVar17 = param_8 + 0x1f;
  }
  uVar21 = iVar17 >> 5;
  auVar10._8_8_ = in_v0_udw;
  auVar10._0_8_ = 0xe;
  auVar3._8_8_ = in_t6_udw;
  auVar3._0_8_ = 0x10ab400000000003;
  auVar11 = _pcpyld(auVar10,auVar3);
  *DAT_0040e5f0 = auVar11._0_4_;
  DAT_0040e5f0[1] = auVar11._4_4_;
  DAT_0040e5f0[2] = auVar11._8_4_;
  DAT_0040e5f0[3] = auVar11._12_4_;
  auVar11._8_8_ = in_v1_udw;
  auVar11._0_8_ = 0x4c;
  auVar4._8_8_ = in_t6_udw;
  auVar4._0_8_ = param_2 | param_3 << 0x10 | 0xff00000000000000;
  auVar11 = _pcpyld(auVar11,auVar4);
  DAT_0040e5f0[4] = auVar11._0_4_;
  DAT_0040e5f0[5] = auVar11._4_4_;
  DAT_0040e5f0[6] = auVar11._8_4_;
  DAT_0040e5f0[7] = auVar11._12_4_;
  auVar12._8_8_ = auVar11._8_8_;
  auVar12._0_8_ = 6;
  auVar5._8_8_ = in_t6_udw;
  auVar5._0_8_ = param_4 << 5 | param_5 << 0xe | 0x6a8000000;
  auVar11 = _pcpyld(auVar12,auVar5);
  DAT_0040e5f0[8] = auVar11._0_4_;
  DAT_0040e5f0[9] = auVar11._4_4_;
  DAT_0040e5f0[10] = auVar11._8_4_;
  DAT_0040e5f0[0xb] = auVar11._12_4_;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x42;
  auVar6._8_8_ = in_t6_udw;
  auVar6._0_8_ = (long)(int)(param_1 * 128.0 + 0.5) << 0x20 | 100;
  auVar11 = _pcpyld(auVar1,auVar6);
  DAT_0040e5f0[0xc] = auVar11._0_4_;
  DAT_0040e5f0[0xd] = auVar11._4_4_;
  DAT_0040e5f0[0xe] = auVar11._8_4_;
  DAT_0040e5f0[0xf] = auVar11._12_4_;
  auVar13._8_8_ = auVar11._8_8_;
  auVar13._0_8_ = 0x5353;
  auVar7._8_8_ = in_t6_udw;
  auVar7._0_8_ = (ulong)uVar21 | 0x4400000000000000;
  auVar11 = _pcpyld(auVar13,auVar7);
  DAT_0040e5f0[0x10] = auVar11._0_4_;
  DAT_0040e5f0[0x11] = auVar11._4_4_;
  DAT_0040e5f0[0x12] = auVar11._8_4_;
  DAT_0040e5f0[0x13] = auVar11._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  uVar18 = (ulong)(param_6 << 4);
  auVar16._8_8_ = auVar11._8_8_;
  auVar16._0_8_ = (long)((param_7 + param_9) * 0x10);
  lVar2 = (long)(param_9 << 3) + 8;
  uVar20 = auVar16._0_8_ << 0x10;
  uVar19 = 8;
  do {
    auVar14._8_8_ = auVar16._8_8_;
    auVar14._0_8_ = uVar18 | (long)(param_7 << 4) << 0x10;
    auVar8._8_8_ = in_t6_udw;
    auVar8._0_8_ = uVar19 | 0x80000;
    auVar11 = _pcpyld(auVar14,auVar8);
    *DAT_0040e5f0 = auVar11._0_4_;
    DAT_0040e5f0[1] = auVar11._4_4_;
    DAT_0040e5f0[2] = auVar11._8_4_;
    DAT_0040e5f0[3] = auVar11._12_4_;
    uVar21 = uVar21 - 1;
    if (uVar21 == 0) {
      uVar19 = (long)(param_8 << 3) + 8;
      uVar18 = (long)((param_6 + param_8) * 0x10);
    }
    else {
      uVar19 = uVar19 + 0x100;
      uVar18 = uVar18 + 0x200;
    }
    auVar15._8_8_ = auVar11._8_8_;
    auVar15._0_8_ = uVar18 | uVar20;
    auVar9._8_8_ = in_t6_udw;
    auVar9._0_8_ = uVar19 | CONCAT44((int)((ulong)lVar2 >> 0x10),(int)lVar2 * 0x10000);
    auVar16 = _pcpyld(auVar15,auVar9);
    DAT_0040e5f0[4] = auVar16._0_4_;
    DAT_0040e5f0[5] = auVar16._4_4_;
    DAT_0040e5f0[6] = auVar16._8_4_;
    DAT_0040e5f0[7] = auVar16._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 8;
  } while (uVar21 != 0);
  return;
}


// ==== FUN_001d2e30 @ 001d2e30 ====

void FUN_001d2e30(void)

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
  undefined8 in_v0_udw;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_a0_udw;
  undefined8 in_a1_udw;
  
  auVar15._8_8_ = in_v0_udw;
  auVar15._0_8_ = 0xe;
  auVar16._8_8_ = in_a0_udw;
  auVar16._0_8_ = 0x1000000000008007;
  auVar16 = _pcpyld(auVar15,auVar16);
  *DAT_0040e5f0 = auVar16._0_4_;
  DAT_0040e5f0[1] = auVar16._4_4_;
  DAT_0040e5f0[2] = auVar16._8_4_;
  DAT_0040e5f0[3] = auVar16._12_4_;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = *(undefined8 *)(DAT_0040f4c0 + 0xd5d8);
  auVar8._8_8_ = in_a1_udw;
  auVar8._0_8_ = 0x40;
  auVar16 = _pcpyld(auVar8,auVar1);
  DAT_0040e5f0[4] = auVar16._0_4_;
  DAT_0040e5f0[5] = auVar16._4_4_;
  DAT_0040e5f0[6] = auVar16._8_4_;
  DAT_0040e5f0[7] = auVar16._12_4_;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = *(undefined8 *)(DAT_0040f4c0 + 0xd5d0);
  auVar9._8_8_ = in_a1_udw;
  auVar9._0_8_ = 0x18;
  auVar16 = _pcpyld(auVar9,auVar2);
  DAT_0040e5f0[8] = auVar16._0_4_;
  DAT_0040e5f0[9] = auVar16._4_4_;
  DAT_0040e5f0[10] = auVar16._8_4_;
  DAT_0040e5f0[0xb] = auVar16._12_4_;
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = *(undefined8 *)(DAT_0040f4c0 + 0xd5c0);
  auVar10._8_8_ = in_a1_udw;
  auVar10._0_8_ = 0x4c;
  auVar16 = _pcpyld(auVar10,auVar3);
  DAT_0040e5f0[0xc] = auVar16._0_4_;
  DAT_0040e5f0[0xd] = auVar16._4_4_;
  DAT_0040e5f0[0xe] = auVar16._8_4_;
  DAT_0040e5f0[0xf] = auVar16._12_4_;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = DAT_0040dfd8;
  auVar11._8_8_ = in_a1_udw;
  auVar11._0_8_ = 0x47;
  auVar16 = _pcpyld(auVar11,auVar4);
  DAT_0040e5f0[0x10] = auVar16._0_4_;
  DAT_0040e5f0[0x11] = auVar16._4_4_;
  DAT_0040e5f0[0x12] = auVar16._8_4_;
  DAT_0040e5f0[0x13] = auVar16._12_4_;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = DAT_0040dff8;
  auVar12._8_8_ = in_a1_udw;
  auVar12._0_8_ = 0x14;
  auVar16 = _pcpyld(auVar12,auVar5);
  DAT_0040e5f0[0x14] = auVar16._0_4_;
  DAT_0040e5f0[0x15] = auVar16._4_4_;
  DAT_0040e5f0[0x16] = auVar16._8_4_;
  DAT_0040e5f0[0x17] = auVar16._12_4_;
  auVar6._8_8_ = in_a0_udw;
  auVar6._0_8_ = DAT_0040e000;
  auVar13._8_8_ = in_a1_udw;
  auVar13._0_8_ = 0x42;
  auVar16 = _pcpyld(auVar13,auVar6);
  DAT_0040e5f0[0x18] = auVar16._0_4_;
  DAT_0040e5f0[0x19] = auVar16._4_4_;
  DAT_0040e5f0[0x1a] = auVar16._8_4_;
  DAT_0040e5f0[0x1b] = auVar16._12_4_;
  auVar7._8_8_ = in_a0_udw;
  auVar7._0_8_ = DAT_0040dff0;
  auVar14._8_8_ = in_a1_udw;
  auVar14._0_8_ = 8;
  auVar16 = _pcpyld(auVar14,auVar7);
  DAT_0040e5f0[0x1c] = auVar16._0_4_;
  DAT_0040e5f0[0x1d] = auVar16._4_4_;
  DAT_0040e5f0[0x1e] = auVar16._8_4_;
  DAT_0040e5f0[0x1f] = auVar16._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
  return;
}


// ==== FUN_001d2f18 @ 001d2f18 ====

void FUN_001d2f18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0040f4c0;
  if ((*(int *)(param_1 + 0x34) != 0) && (*(int *)(param_1 + 0x34) != 4)) {
    iVar2 = DAT_0040f4c0 + 0xd170;
    if (DAT_00415ae0 == 0) {
      DAT_00415ae0 = 1;
      DAT_00415ad8 = 0x3f800000;
      DAT_00415adc = 0x3f800000;
      DAT_00415ad0 = 0x3f800000;
      DAT_00415ad4 = 0x3f800000;
    }
    FUN_001c7d08(*(undefined8 *)(DAT_0040f4c0 + 0xd178),*(undefined8 *)(DAT_0040f4c0 + 0xd188),
                 *(undefined8 *)(DAT_0040f4c0 + 0xd5c0),*(undefined8 *)(DAT_0040f4c0 + 0xd5d8),
                 0x80000000a8,DAT_00415ad0);
    FUN_001c6828(iVar2,0,0);
    FUN_001c7d08(*(undefined8 *)(DAT_0040f4c0 + 0xd5c0),*(undefined8 *)(DAT_0040f4c0 + 0xd5d8),
                 *(undefined8 *)(iVar1 + 0xd178),*(undefined8 *)(iVar1 + 0xd188),
                 (long)(int)(*(float *)(param_1 + 0x10) * 128.0) << 0x20 | 100,DAT_00415ad0);
  }
  return;
}


// ==== FUN_001d3040 @ 001d3040 ====

/* Strings referenciadas:
     "bulletholes" */

undefined4 FUN_001d3040(void)

{
  DAT_0040eb18 = FUN_00108328(DAT_0040f4c4,0x3f72e0);
  return 1;
}


// ==== FUN_001d3078 @ 001d3078 ====

undefined4 FUN_001d3078(void)

{
  uGpffff8203 = 0;
  DAT_0040eb18 = 0;
  return 1;
}


// ==== FUN_001d3090 @ 001d3090 ====

void FUN_001d3090(int param_1)

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
  int iVar22;
  float fVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong in_a2_udw;
  ulong in_a3_udw;
  
  FUN_002b3d88(0,8);
  auVar25._8_8_ = in_a2_udw;
  auVar25._0_8_ = 0x1100000011000000;
  auVar7._8_8_ = in_a3_udw;
  auVar7._0_8_ = 0x10000000;
  auVar25 = _pcpyld(auVar25,auVar7);
  *DAT_0040e5f0 = auVar25._0_4_;
  DAT_0040e5f0[1] = auVar25._4_4_;
  DAT_0040e5f0[2] = auVar25._8_4_;
  DAT_0040e5f0[3] = auVar25._12_4_;
  if (DAT_0040e064 == &DAT_00396f50) {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = in_a2_udw;
    auVar19._8_8_ = in_a3_udw;
    auVar19._0_8_ = 0x10000000;
    auVar25 = _pcpyld(auVar20 << 0x40,auVar19);
    DAT_0040e5f0[4] = auVar25._0_4_;
    DAT_0040e5f0[5] = auVar25._4_4_;
    DAT_0040e5f0[6] = auVar25._8_4_;
    DAT_0040e5f0[7] = auVar25._12_4_;
  }
  else {
    DAT_0040e064 = &DAT_00396f50;
    auVar1._8_8_ = in_a2_udw;
    auVar1._0_8_ = 0x20000fc03000000;
    auVar8._8_8_ = in_a3_udw;
    auVar8._0_8_ = 0x396f5050000000;
    auVar25 = _pcpyld(auVar1,auVar8);
    DAT_0040e5f0[4] = auVar25._0_4_;
    DAT_0040e5f0[5] = auVar25._4_4_;
    DAT_0040e5f0[6] = auVar25._8_4_;
    DAT_0040e5f0[7] = auVar25._12_4_;
  }
  auVar2._8_8_ = in_a2_udw;
  auVar2._0_8_ = 0x5000000500000000;
  auVar9._8_8_ = in_a3_udw;
  auVar9._0_8_ = 0x10000005;
  auVar25 = _pcpyld(auVar2,auVar9);
  DAT_0040e5f0[8] = auVar25._0_4_;
  DAT_0040e5f0[9] = auVar25._4_4_;
  DAT_0040e5f0[10] = auVar25._8_4_;
  DAT_0040e5f0[0xb] = auVar25._12_4_;
  auVar26._8_8_ = auVar25._8_8_;
  auVar26._0_8_ = 0xe;
  auVar10._8_8_ = in_a3_udw;
  auVar10._0_8_ = 0x1000000000008004;
  auVar25 = _pcpyld(auVar26,auVar10);
  DAT_0040e5f0[0xc] = auVar25._0_4_;
  DAT_0040e5f0[0xd] = auVar25._4_4_;
  DAT_0040e5f0[0xe] = auVar25._8_4_;
  DAT_0040e5f0[0xf] = auVar25._12_4_;
  auVar27._8_8_ = auVar25._8_8_;
  auVar27._0_8_ = 0x42;
  auVar11._8_8_ = in_a3_udw;
  auVar11._0_8_ = 0x8000000044;
  auVar25 = _pcpyld(auVar27,auVar11);
  DAT_0040e5f0[0x10] = auVar25._0_4_;
  DAT_0040e5f0[0x11] = auVar25._4_4_;
  DAT_0040e5f0[0x12] = auVar25._8_4_;
  DAT_0040e5f0[0x13] = auVar25._12_4_;
  auVar28._8_8_ = auVar25._8_8_;
  auVar28._0_8_ = 0x47;
  auVar12._8_8_ = in_a3_udw;
  auVar12._0_8_ = 0x5000b;
  auVar25 = _pcpyld(auVar28,auVar12);
  DAT_0040e5f0[0x14] = auVar25._0_4_;
  DAT_0040e5f0[0x15] = auVar25._4_4_;
  DAT_0040e5f0[0x16] = auVar25._8_4_;
  DAT_0040e5f0[0x17] = auVar25._12_4_;
  auVar29._8_8_ = auVar25._8_8_;
  auVar29._0_8_ = 8;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = in_a3_udw;
  auVar25 = _pcpyld(auVar29,auVar21 << 0x40);
  DAT_0040e5f0[0x18] = auVar25._0_4_;
  DAT_0040e5f0[0x19] = auVar25._4_4_;
  DAT_0040e5f0[0x1a] = auVar25._8_4_;
  DAT_0040e5f0[0x1b] = auVar25._12_4_;
  auVar30._8_8_ = auVar25._8_8_;
  auVar30._0_8_ = 0x4e;
  auVar13._8_8_ = in_a3_udw;
  auVar13._0_8_ = DAT_0040dfc8 | 0x100000000;
  auVar25 = _pcpyld(auVar30,auVar13);
  DAT_0040e5f0[0x1c] = auVar25._0_4_;
  DAT_0040e5f0[0x1d] = auVar25._4_4_;
  DAT_0040e5f0[0x1e] = auVar25._8_4_;
  DAT_0040e5f0[0x1f] = auVar25._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
  FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,0);
  FUN_001c8c38(DAT_0040f4c0 + 0xcfd0);
  FUN_002b3d88(0,5);
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = 0x6c0103f501000101;
  auVar14._8_8_ = in_a3_udw;
  auVar14._0_8_ = 0x10000001;
  auVar25 = _pcpyld(auVar3,auVar14);
  *DAT_0040e5f0 = auVar25._0_4_;
  DAT_0040e5f0[1] = auVar25._4_4_;
  DAT_0040e5f0[2] = auVar25._8_4_;
  DAT_0040e5f0[3] = auVar25._12_4_;
  auVar4._8_8_ = in_a2_udw;
  auVar4._0_8_ = 0x300000000;
  auVar15._8_8_ = in_a3_udw;
  auVar15._0_8_ = 2;
  auVar25 = _pcpyld(auVar4,auVar15);
  DAT_0040e5f0[4] = auVar25._0_4_;
  DAT_0040e5f0[5] = auVar25._4_4_;
  DAT_0040e5f0[6] = auVar25._8_4_;
  DAT_0040e5f0[7] = auVar25._12_4_;
  auVar5._8_8_ = in_a2_udw;
  auVar5._0_8_ = 0x6c0103f401000101;
  auVar16._8_8_ = in_a3_udw;
  auVar16._0_8_ = 0x10000001;
  auVar25 = _pcpyld(auVar5,auVar16);
  DAT_0040e5f0[8] = auVar25._0_4_;
  DAT_0040e5f0[9] = auVar25._4_4_;
  DAT_0040e5f0[10] = auVar25._8_4_;
  DAT_0040e5f0[0xb] = auVar25._12_4_;
  auVar31._8_8_ = auVar25._8_8_;
  auVar31._0_8_ = 0x412;
  auVar17._8_8_ = in_a3_udw;
  auVar17._0_8_ = 0x302e400000000000;
  auVar25 = _pcpyld(auVar31,auVar17);
  DAT_0040e5f0[0xc] = auVar25._0_4_;
  DAT_0040e5f0[0xd] = auVar25._4_4_;
  DAT_0040e5f0[0xe] = auVar25._8_4_;
  DAT_0040e5f0[0xf] = auVar25._12_4_;
  auVar6._8_8_ = in_a2_udw;
  auVar6._0_8_ = 0x1400000000000000;
  auVar18._8_8_ = in_a3_udw;
  auVar18._0_8_ = 0x10000000;
  auVar25 = _pcpyld(auVar6,auVar18);
  DAT_0040e5f0[0x10] = auVar25._0_4_;
  DAT_0040e5f0[0x11] = auVar25._4_4_;
  DAT_0040e5f0[0x12] = auVar25._8_4_;
  DAT_0040e5f0[0x13] = auVar25._12_4_;
  iVar22 = DAT_0040eb18;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  if (DAT_0040e690 == DAT_0040eb18) {
    fVar23 = (float)*(undefined8 *)(param_1 + 0x50);
  }
  else {
    FUN_002cdea0(DAT_0040eb18);
    lVar24 = FUN_002cd230(iVar22,0);
    if (lVar24 != 0) {
      DAT_0040e690 = iVar22;
    }
    fVar23 = (float)*(undefined8 *)(param_1 + 0x50);
  }
  DAT_003bd274 = fVar23 * 40.0 * fVar23 * 40.0;
  DAT_003bd278 = 1.0 / DAT_003bd274;
  FUN_001d3d80(PTR_DAT_003bd26c);
  uGpffff8203 = 1;
  return;
}


// ==== FUN_001d3368 @ 001d3368 ====

void FUN_001d3368(void)

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
  
  FUN_001d3c90(PTR_DAT_003bd26c);
  FUN_002b3d88(0,3);
  auVar4._8_8_ = extraout_v0_udw;
  auVar4._0_8_ = 0x5000000211000000;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x10000002;
  auVar5 = _pcpyld(auVar4,auVar5);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  auVar6._8_8_ = auVar5._8_8_;
  auVar6._0_8_ = 0xe;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x1000000000008001;
  auVar5 = _pcpyld(auVar6,auVar1);
  DAT_0040e5f0[4] = auVar5._0_4_;
  DAT_0040e5f0[5] = auVar5._4_4_;
  DAT_0040e5f0[6] = auVar5._8_4_;
  DAT_0040e5f0[7] = auVar5._12_4_;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = DAT_0040dfc8;
  auVar3._8_8_ = in_a2_udw;
  auVar3._0_8_ = 0x4e;
  auVar5 = _pcpyld(auVar3,auVar2);
  DAT_0040e5f0[8] = auVar5._0_4_;
  DAT_0040e5f0[9] = auVar5._4_4_;
  DAT_0040e5f0[10] = auVar5._8_4_;
  DAT_0040e5f0[0xb] = auVar5._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  uGpffff8203 = 0;
  return;
}


// ==== FUN_001d3408 @ 001d3408 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d3408(int param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined1 auVar6 [16];
  undefined4 in_v1_udw;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  int iVar8;
  undefined8 in_a1_udw;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
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
  undefined4 uVar25;
  
  iVar8 = (int)((ulong)param_2 >> 0x20);
  iVar15 = (int)param_2;
  pauVar4 = (undefined1 (*) [16])(PTR_DAT_003bd26c + 0x520);
  iVar9 = *(int *)(PTR_DAT_003bd26c + 0xbf0);
  iVar5 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar5 = iVar9;
  }
  auVar3 = *(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160);
  iVar5 = (iVar5 >> 2) * 0x10;
  puVar12 = (undefined4 *)(PTR_DAT_003bd26c + iVar5 + 0x680);
  pauVar10 = (undefined1 (*) [16])(PTR_DAT_003bd26c + iVar9 * 0x10 + 0x20);
  puVar11 = (undefined4 *)(PTR_DAT_003bd26c + iVar5 + 0x530);
  while( true ) {
    auVar6._8_4_ = in_v1_udw;
    auVar6._0_8_ = 0x20;
    auVar6._12_4_ = in_register_0000003c;
    auVar24._4_4_ = iVar8;
    auVar24._0_4_ = iVar15;
    auVar24._8_8_ = in_a1_udw;
    auVar6 = _pminw(auVar24,auVar6);
    auVar6 = _pextlw(0,auVar6._0_8_);
    pauVar13 = (undefined1 (*) [16])(PTR_DAT_003bd26c + 2000);
    iVar9 = auVar6._0_4_;
    pauVar14 = pauVar13 + iVar9 * 2;
    REG_DMAC_STAT = 0x200;
    REG_DMAC_9_SPR_TO_SADR = pauVar13;
    REG_DMAC_9_SPR_TO_MADR = param_1;
    REG_DMAC_9_SPR_TO_QWC = iVar9 << 1;
    REG_DMAC_9_SPR_TO_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar2 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
      while ((uVar2 & 0x100) != 0) {
        uVar2 = REG_DMAC_9_SPR_TO_CHCR;
      }
    }
    iVar15 = iVar15 - iVar9;
    if (pauVar13 < pauVar14) break;
LAB_001d3784:
    iVar8 = iVar15 >> 0x1f;
    param_1 = param_1 + iVar9 * 0x20;
    if (iVar15 < 1) {
      return;
    }
  }
  auVar24 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _lqc2(*pauVar13);
  do {
    auVar18 = _vaddbc(in_vf0,in_vf0);
    auVar19 = _lqc2(auVar3);
    auVar19 = _vsub(auVar6,auVar19);
    auVar21 = _lqc2(pauVar13[1]);
    auVar20 = _vmove(auVar19);
    auVar19 = _vmul(auVar20,auVar21);
    auVar22 = _vmove(auVar6);
    _vaddabc(auVar19,auVar19);
    auVar19 = _vmaddbc(auVar18,auVar19);
    auVar18 = _qmfc2(auVar21._0_4_);
    auVar19 = _qmfc2(auVar19._0_4_);
    if (auVar19._0_4_ < 0.0) {
      auVar19 = _vmul(auVar20,auVar20);
      _vaddabc(auVar19,auVar19);
      auVar19 = _vmaddbc(auVar24,auVar19);
      auVar20 = _qmfc2(auVar19._0_4_);
      auVar19._8_8_ = auVar20._8_8_;
      auVar19._0_8_ = 0x3c0000;
      if (DAT_003bd274 <= auVar20._0_4_) goto LAB_001d361c;
      fVar16 = (1.0 - auVar20._0_4_ * DAT_003bd278) * 128.0;
    }
    else {
LAB_001d361c:
      fVar16 = 0.0;
    }
    if (fVar16 != 0.0) {
      auVar17 = _lqc2(_DAT_004432c0);
      auVar20._8_8_ = auVar19._8_8_;
      _vopmula(auVar21,auVar17);
      auVar19 = _vopmsub(auVar17,auVar21);
      auVar17 = _vmul(auVar19,auVar19);
      _vaddabc(auVar17,auVar17);
      auVar17 = _vmaddbc(auVar24,auVar17);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar17);
      uVar25 = _vwaitq();
      auVar19 = _vmulq(auVar19,uVar25);
      _lqc2(*pauVar10);
      auVar19 = _vmulbc(auVar19,auVar22);
      _lqc2(pauVar10[1]);
      _vopmula(auVar21,auVar19);
      auVar21 = _vopmsub(auVar19,auVar21);
      auVar22 = _vadd(auVar6,auVar19);
      auVar6 = _vsub(auVar6,auVar19);
      auVar23 = _vadd(auVar22,auVar21);
      auVar17 = _vadd(auVar6,auVar21);
      _lqc2(pauVar10[2]);
      _lqc2(pauVar10[3]);
      auVar6 = _vsub(auVar6,auVar21);
      auVar19 = _vsub(auVar22,auVar21);
      auVar6 = _vadd(in_vf0,auVar6);
      auVar21 = _vadd(in_vf0,auVar17);
      auVar22 = _vadd(in_vf0,auVar19);
      auVar19 = _vadd(in_vf0,auVar23);
      auVar6 = _sqc2(auVar6);
      *pauVar10 = auVar6;
      auVar6 = _sqc2(auVar21);
      pauVar10[1] = auVar6;
      auVar6 = _sqc2(auVar22);
      pauVar10[2] = auVar6;
      auVar6 = _sqc2(auVar19);
      pauVar10[3] = auVar6;
      uVar2 = auVar18._12_4_ >> 8 | (int)fVar16 << 0x18;
      pauVar10 = pauVar10 + 4;
      auVar20._4_4_ = uVar2;
      auVar20._0_4_ = uVar2;
      puVar7 = (undefined4 *)(PTR_DAT_003bd270 + (auVar18._12_4_ & 0xff) * 0x10);
      auVar6 = _pcpyld(auVar20,auVar20);
      uVar25 = puVar7[1];
      in_v1_udw = puVar7[2];
      in_register_0000003c = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[1] = uVar25;
      puVar11[2] = in_v1_udw;
      puVar11[3] = in_register_0000003c;
      *puVar12 = auVar6._0_4_;
      puVar12[1] = auVar6._4_4_;
      puVar12[2] = auVar6._8_4_;
      puVar12[3] = auVar6._12_4_;
      puVar11 = puVar11 + 4;
      *(int *)(PTR_DAT_003bd26c + 0xbf0) = *(int *)(PTR_DAT_003bd26c + 0xbf0) + 4;
      puVar12 = puVar12 + 4;
      if (pauVar10 == pauVar4) {
        auVar6 = _sqc2(auVar24);
        FUN_001d3c90(PTR_DAT_003bd26c);
        auVar24 = _lqc2(auVar6);
        puVar12 = (undefined4 *)(PTR_DAT_003bd26c + 0x680);
        pauVar10 = (undefined1 (*) [16])(PTR_DAT_003bd26c + 0x20);
        puVar11 = (undefined4 *)(PTR_DAT_003bd26c + 0x530);
      }
    }
    pauVar13 = pauVar13 + 2;
    if (pauVar14 <= pauVar13) goto LAB_001d3784;
    auVar6 = _lqc2(*pauVar13);
  } while( true );
}


// ==== FUN_001d37c8 @ 001d37c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d37c8(int param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined8 in_v1_udw;
  undefined4 *puVar7;
  int iVar8;
  undefined8 in_a1_udw;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
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
  undefined4 uVar30;
  
  iVar8 = (int)((ulong)param_2 >> 0x20);
  iVar15 = (int)param_2;
  auVar23 = _lqc2(*param_3);
  auVar22 = _lqc2(param_3[1]);
  pauVar5 = (undefined1 (*) [16])(PTR_DAT_003bd26c + 0x520);
  auVar21 = _lqc2(param_3[2]);
  _vmove(auVar23);
  _vmove(auVar22);
  auVar24 = _vaddbc(in_vf0,auVar22);
  auVar25 = _vaddbc(in_vf0,auVar23);
  _vmove(auVar21);
  auVar29 = _vaddbc(in_vf0,auVar23);
  _vmove(auVar24);
  _vmove(auVar25);
  auVar28 = _vaddbc(in_vf0,auVar21);
  auVar20 = _lqc2(param_3[3]);
  auVar27 = _vaddbc(in_vf0,auVar21);
  _vmove(auVar29);
  iVar9 = *(int *)(PTR_DAT_003bd26c + 0xbf0);
  auVar26 = _vaddbc(in_vf0,auVar22);
  auVar17 = _vmulbc(auVar27,auVar20);
  auVar18 = _vmulbc(auVar28,auVar20);
  auVar19 = _vmulbc(auVar26,auVar20);
  auVar17 = _vadd(auVar18,auVar17);
  _sqc2(auVar23);
  auVar17 = _vadd(auVar17,auVar19);
  _sqc2(auVar22);
  _sqc2(auVar21);
  iVar6 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar6 = iVar9;
  }
  auVar18 = _vsub(in_vf0,auVar17);
  _sqc2(auVar20);
  _sqc2(auVar24);
  _sqc2(auVar25);
  iVar6 = (iVar6 >> 2) * 0x10;
  _sqc2(auVar29);
  _sqc2(auVar28);
  _sqc2(auVar27);
  _sqc2(auVar26);
  _sqc2(auVar18);
  puVar12 = (undefined4 *)(PTR_DAT_003bd26c + iVar6 + 0x680);
  auVar17 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd160));
  _vmulabc(auVar28,auVar17);
  _vmaddabc(auVar27,auVar17);
  _vmaddabc(auVar26,auVar17);
  auVar17 = _vmaddbc(auVar18,in_vf0);
  pauVar10 = (undefined1 (*) [16])(PTR_DAT_003bd26c + iVar9 * 0x10 + 0x20);
  auVar17 = _sqc2(auVar17);
  puVar11 = (undefined4 *)(PTR_DAT_003bd26c + iVar6 + 0x530);
  while( true ) {
    auVar19._8_8_ = in_v1_udw;
    auVar19._0_8_ = 0x20;
    auVar18._4_4_ = iVar8;
    auVar18._0_4_ = iVar15;
    auVar18._8_8_ = in_a1_udw;
    auVar18 = _pminw(auVar18,auVar19);
    auVar18 = _pextlw(0,auVar18._0_8_);
    pauVar13 = (undefined1 (*) [16])(PTR_DAT_003bd26c + 2000);
    iVar9 = auVar18._0_4_;
    pauVar14 = pauVar13 + iVar9 * 2;
    REG_DMAC_STAT = 0x200;
    REG_DMAC_9_SPR_TO_SADR = pauVar13;
    REG_DMAC_9_SPR_TO_MADR = param_1;
    REG_DMAC_9_SPR_TO_QWC = iVar9 << 1;
    REG_DMAC_9_SPR_TO_CHCR = 0x100;
    SYNC(0);
    SYNC(0x10);
    uVar2 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar2 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar1 = getCopCondition(0,0);
      } while (cVar1 == '\0');
      uVar2 = REG_DMAC_9_SPR_TO_CHCR;
      while ((uVar2 & 0x100) != 0) {
        uVar2 = REG_DMAC_9_SPR_TO_CHCR;
      }
    }
    iVar15 = iVar15 - iVar9;
    if (pauVar13 < pauVar14) break;
LAB_001d3c4c:
    iVar8 = iVar15 >> 0x1f;
    param_1 = param_1 + iVar9 * 0x20;
    if (iVar15 < 1) {
      return;
    }
  }
  auVar19 = _vaddbc(in_vf0,in_vf0);
  auVar18 = _lqc2(*pauVar13);
  do {
    auVar21 = _vaddbc(in_vf0,in_vf0);
    auVar20 = _lqc2(auVar17);
    auVar20 = _vsub(auVar18,auVar20);
    auVar24 = _lqc2(pauVar13[1]);
    auVar22 = _vmove(auVar20);
    auVar20 = _vmul(auVar22,auVar24);
    auVar23 = _vmove(auVar18);
    _vaddabc(auVar20,auVar20);
    auVar20 = _vmaddbc(auVar21,auVar20);
    auVar21 = _qmfc2(auVar24._0_4_);
    auVar20 = _qmfc2(auVar20._0_4_);
    if (auVar20._0_4_ < 0.0) {
      auVar20 = _vmul(auVar22,auVar22);
      _vaddabc(auVar20,auVar20);
      auVar20 = _vmaddbc(auVar19,auVar20);
      auVar20 = _qmfc2(auVar20._0_4_);
      if (DAT_003bd274 <= auVar20._0_4_) goto LAB_001d3a74;
      fVar16 = (1.0 - auVar20._0_4_ * DAT_003bd278) * 128.0;
    }
    else {
LAB_001d3a74:
      fVar16 = 0.0;
    }
    if (fVar16 != 0.0) {
      auVar20 = _lqc2(_DAT_004432c0);
      _vopmula(auVar24,auVar20);
      auVar20 = _vopmsub(auVar20,auVar24);
      auVar22 = _vmul(auVar20,auVar20);
      _vaddabc(auVar22,auVar22);
      auVar22 = _vmaddbc(auVar19,auVar22);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar22);
      uVar30 = _vwaitq();
      auVar20 = _vmulq(auVar20,uVar30);
      _lqc2(*pauVar10);
      auVar20 = _vmulbc(auVar20,auVar23);
      _lqc2(pauVar10[1]);
      _vopmula(auVar24,auVar20);
      auVar22 = _vopmsub(auVar20,auVar24);
      auVar23 = _vadd(auVar18,auVar20);
      auVar18 = _vsub(auVar18,auVar20);
      _lqc2(pauVar10[2]);
      auVar24 = _vadd(auVar23,auVar22);
      auVar20 = _vadd(auVar18,auVar22);
      _lqc2(pauVar10[3]);
      auVar18 = _vsub(auVar18,auVar22);
      auVar22 = _vsub(auVar23,auVar22);
      auVar20 = _vadd(in_vf0,auVar20);
      auVar18 = _vadd(in_vf0,auVar18);
      auVar23 = _vadd(in_vf0,auVar22);
      auVar22 = _vadd(in_vf0,auVar24);
      auVar18 = _vmove(auVar18);
      auVar20 = _vmove(auVar20);
      auVar23 = _vmove(auVar23);
      auVar24 = _vmove(auVar22);
      uVar2 = auVar21._12_4_ >> 8 | (int)fVar16 << 0x18;
      auVar25 = _lqc2(*param_3);
      auVar26 = _lqc2(param_3[1]);
      auVar27 = _lqc2(param_3[2]);
      auVar28 = _lqc2(param_3[3]);
      _vmulabc(auVar25,auVar18);
      _vmaddabc(auVar26,auVar18);
      _vmaddabc(auVar27,auVar18);
      auVar18 = _vmaddbc(auVar28,in_vf0);
      _vmulabc(auVar25,auVar20);
      _vmaddabc(auVar26,auVar20);
      _vmaddabc(auVar27,auVar20);
      auVar20 = _vmaddbc(auVar28,in_vf0);
      _vmulabc(auVar25,auVar23);
      _vmaddabc(auVar26,auVar23);
      _vmaddabc(auVar27,auVar23);
      auVar22 = _vmaddbc(auVar28,in_vf0);
      _vmulabc(auVar25,auVar24);
      _vmaddabc(auVar26,auVar24);
      _vmaddabc(auVar27,auVar24);
      auVar23 = _vmaddbc(auVar28,in_vf0);
      auVar18 = _sqc2(auVar18);
      *pauVar10 = auVar18;
      auVar18 = _sqc2(auVar20);
      pauVar10[1] = auVar18;
      auVar18 = _sqc2(auVar22);
      pauVar10[2] = auVar18;
      auVar18 = _sqc2(auVar23);
      pauVar10[3] = auVar18;
      auVar20._4_4_ = uVar2;
      auVar20._0_4_ = uVar2;
      auVar20._8_8_ = in_v1_udw;
      auVar18 = _pcpyld(auVar20,auVar20);
      pauVar10 = pauVar10 + 4;
      puVar7 = (undefined4 *)(PTR_DAT_003bd270 + (auVar21._12_4_ & 0xff) * 0x10);
      uVar30 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[1] = uVar30;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      *puVar12 = auVar18._0_4_;
      puVar12[1] = auVar18._4_4_;
      puVar12[2] = auVar18._8_4_;
      puVar12[3] = auVar18._12_4_;
      puVar11 = puVar11 + 4;
      in_v1_udw = auVar18._8_8_;
      *(int *)(PTR_DAT_003bd26c + 0xbf0) = *(int *)(PTR_DAT_003bd26c + 0xbf0) + 4;
      puVar12 = puVar12 + 4;
      if (pauVar10 == pauVar5) {
        auVar18 = _sqc2(auVar19);
        FUN_001d3c90(PTR_DAT_003bd26c);
        auVar19 = _lqc2(auVar18);
        puVar12 = (undefined4 *)(PTR_DAT_003bd26c + 0x680);
        pauVar10 = (undefined1 (*) [16])(PTR_DAT_003bd26c + 0x20);
        puVar11 = (undefined4 *)(PTR_DAT_003bd26c + 0x530);
      }
    }
    pauVar13 = pauVar13 + 2;
    if (pauVar14 <= pauVar13) goto LAB_001d3c4c;
    auVar18 = _lqc2(*pauVar13);
  } while( true );
}


// ==== FUN_001d3c90 @ 001d3c90 ====

/* WARNING: Removing unreachable block (ram,0x001d3d3c) */

void FUN_001d3c90(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  
  if (*(int *)(param_1 + 0xbf0) != 0) {
    FUN_002b3d88(0,0x7d);
    *(uint *)(param_1 + 0x7c8) = *(uint *)(param_1 + 0xbf0) | 0x4000000;
    puVar30 = (undefined8 *)(PTR_DAT_003bd26c + 0x780);
    for (puVar29 = (undefined8 *)PTR_DAT_003bd26c; puVar29 != puVar30; puVar29 = puVar29 + 0x10) {
      uVar26 = *(undefined4 *)((int)puVar29 + 4);
      uVar27 = *(undefined4 *)(puVar29 + 1);
      uVar28 = *(undefined4 *)((int)puVar29 + 0xc);
      uVar22 = *(undefined4 *)(puVar29 + 2);
      uVar23 = *(undefined4 *)((int)puVar29 + 0x14);
      uVar24 = *(undefined4 *)(puVar29 + 3);
      uVar25 = *(undefined4 *)((int)puVar29 + 0x1c);
      uVar18 = *(undefined4 *)(puVar29 + 4);
      uVar19 = *(undefined4 *)((int)puVar29 + 0x24);
      uVar20 = *(undefined4 *)(puVar29 + 5);
      uVar21 = *(undefined4 *)((int)puVar29 + 0x2c);
      uVar14 = *(undefined4 *)(puVar29 + 6);
      uVar15 = *(undefined4 *)((int)puVar29 + 0x34);
      uVar16 = *(undefined4 *)(puVar29 + 7);
      uVar17 = *(undefined4 *)((int)puVar29 + 0x3c);
      uVar1 = puVar29[8];
      uVar12 = *(undefined4 *)(puVar29 + 9);
      uVar13 = *(undefined4 *)((int)puVar29 + 0x4c);
      uVar2 = puVar29[10];
      uVar10 = *(undefined4 *)(puVar29 + 0xb);
      uVar11 = *(undefined4 *)((int)puVar29 + 0x5c);
      uVar3 = puVar29[0xc];
      uVar8 = *(undefined4 *)(puVar29 + 0xd);
      uVar9 = *(undefined4 *)((int)puVar29 + 0x6c);
      uVar4 = puVar29[0xe];
      uVar5 = *(undefined4 *)(puVar29 + 0xf);
      uVar6 = *(undefined4 *)((int)puVar29 + 0x7c);
      *DAT_0040e5f0 = *(undefined4 *)puVar29;
      DAT_0040e5f0[1] = uVar26;
      DAT_0040e5f0[2] = uVar27;
      DAT_0040e5f0[3] = uVar28;
      DAT_0040e5f0[4] = uVar22;
      DAT_0040e5f0[5] = uVar23;
      DAT_0040e5f0[6] = uVar24;
      DAT_0040e5f0[7] = uVar25;
      DAT_0040e5f0[8] = uVar18;
      DAT_0040e5f0[9] = uVar19;
      DAT_0040e5f0[10] = uVar20;
      DAT_0040e5f0[0xb] = uVar21;
      DAT_0040e5f0[0xc] = uVar14;
      DAT_0040e5f0[0xd] = uVar15;
      DAT_0040e5f0[0xe] = uVar16;
      DAT_0040e5f0[0xf] = uVar17;
      DAT_0040e5f0[0x10] = (int)uVar1;
      DAT_0040e5f0[0x11] = (int)((ulong)uVar1 >> 0x20);
      DAT_0040e5f0[0x12] = uVar12;
      DAT_0040e5f0[0x13] = uVar13;
      DAT_0040e5f0[0x14] = (int)uVar2;
      DAT_0040e5f0[0x15] = (int)((ulong)uVar2 >> 0x20);
      DAT_0040e5f0[0x16] = uVar10;
      DAT_0040e5f0[0x17] = uVar11;
      DAT_0040e5f0[0x18] = (int)uVar3;
      DAT_0040e5f0[0x19] = (int)((ulong)uVar3 >> 0x20);
      DAT_0040e5f0[0x1a] = uVar8;
      DAT_0040e5f0[0x1b] = uVar9;
      DAT_0040e5f0[0x1c] = (int)uVar4;
      DAT_0040e5f0[0x1d] = (int)((ulong)uVar4 >> 0x20);
      DAT_0040e5f0[0x1e] = uVar5;
      DAT_0040e5f0[0x1f] = uVar6;
      DAT_0040e5f0 = DAT_0040e5f0 + 0x20;
    }
    iVar7 = 0x78;
    do {
      uVar1 = *puVar29;
      uVar5 = *(undefined4 *)(puVar29 + 1);
      uVar6 = *(undefined4 *)((int)puVar29 + 0xc);
      puVar29 = puVar29 + 2;
      *DAT_0040e5f0 = (int)uVar1;
      DAT_0040e5f0[1] = (int)((ulong)uVar1 >> 0x20);
      DAT_0040e5f0[2] = uVar5;
      DAT_0040e5f0[3] = uVar6;
      iVar7 = iVar7 + 1;
      DAT_0040e5f0 = DAT_0040e5f0 + 4;
    } while (iVar7 < 0x7d);
    *(undefined4 *)(param_1 + 0xbf0) = 0;
  }
  return;
}


// ==== FUN_001d3d80 @ 001d3d80 ====

undefined4 FUN_001d3d80(int param_1)

{
  *(undefined4 *)(param_1 + 0xbe0) = 0;
  *(undefined4 *)(param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0xbe8) = 0;
  *(undefined4 *)(param_1 + 0xbec) = 0x3f808000;
  FUN_001d3de0();
  FUN_001d3ea0();
  *(undefined4 *)(param_1 + 0xbf0) = 0;
  return 1;
}


// ==== FUN_001d3de0 @ 001d3de0 ====

void FUN_001d3de0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *param_1 = 0x1000007b;
  *(undefined4 *)((int)param_1 + 0x14) = 0x5000000;
  puVar4 = param_1 + 10;
  *(undefined4 *)(param_1 + 3) = 0x1000103;
  iVar5 = 0x4c;
  *(undefined4 *)((int)param_1 + 0x1c) = 0x6c508000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  do {
    uVar2 = *(undefined4 *)((int)param_1 + 0xbe4);
    uVar1 = param_1[0x17d];
    iVar5 = iVar5 + -4;
    *(undefined4 *)(puVar4 + -6) = *(undefined4 *)(param_1 + 0x17c);
    *(undefined4 *)((int)puVar4 + -0x2c) = uVar2;
    *(int *)(puVar4 + -5) = (int)uVar1;
    *(int *)((int)puVar4 + -0x24) = (int)((ulong)uVar1 >> 0x20);
    uVar1 = param_1[0x17c];
    uVar2 = *(undefined4 *)(param_1 + 0x17d);
    uVar3 = *(undefined4 *)((int)param_1 + 0xbec);
    *(undefined4 *)(puVar4 + -2) = 0;
    *(undefined4 *)((int)puVar4 + -0xc) = 0;
    *(undefined4 *)(puVar4 + -1) = 0;
    *(undefined4 *)((int)puVar4 + -4) = 0;
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)((int)puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((int)puVar4 + 0xc) = 0;
    *(int *)(puVar4 + -4) = (int)uVar1;
    *(int *)((int)puVar4 + -0x1c) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar4 + -3) = uVar2;
    *(undefined4 *)((int)puVar4 + -0x14) = uVar3;
    puVar4 = puVar4 + 8;
  } while (-1 < iVar5);
  *(undefined4 *)((int)param_1 + 0x52c) = 0x65508001;
  *(undefined4 *)((int)param_1 + 0x7cc) = 0x17000000;
  *(undefined4 *)((int)param_1 + 0x674) = 0x5000000;
  *(undefined4 *)(param_1 + 0xcf) = 0x1000103;
  *(undefined4 *)((int)param_1 + 0x67c) = 0x6e508002;
  param_1[0xf8] = 0x10000000;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0x524) = 0x5000000;
  *(undefined4 *)(param_1 + 0xa5) = 0x1000103;
  *(undefined4 *)(param_1 + 0xce) = 0;
  return;
}


// ==== FUN_001d3ea0 @ 001d3ea0 ====

void FUN_001d3ea0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar2 = 0;
  puVar3 = (undefined2 *)PTR_DAT_003bd270;
  do {
    iVar6 = 0;
    iVar7 = 0x10000;
    do {
      fVar8 = (float)iVar6;
      iVar6 = iVar7 >> 0x10;
      iVar7 = iVar7 + 0x10000;
      uVar1 = (undefined2)(int)(fVar8 * 0.25 * 4096.0);
      *puVar3 = uVar1;
      uVar5 = (undefined2)(int)((float)iVar2 * 0.125 * 4096.0);
      puVar3[1] = uVar5;
      puVar3[2] = uVar1;
      uVar4 = (undefined2)(int)(((float)iVar2 * 0.125 + 0.125) * 4096.0);
      puVar3[3] = uVar4;
      uVar1 = (undefined2)(int)((fVar8 * 0.25 + 0.25) * 4096.0);
      puVar3[4] = uVar1;
      puVar3[5] = uVar5;
      puVar3[6] = uVar1;
      puVar3[7] = uVar4;
      puVar3 = puVar3 + 8;
    } while (iVar6 < 4);
    iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
  } while (iVar2 < 8);
  return;
}


// ==== FUN_001d3fc0 @ 001d3fc0 ====

void FUN_001d3fc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    FUN_0026a6f0(*param_1);
  }
  else {
    FUN_0026a460(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(piVar1 + 4),
                 CONCAT44(piVar1[1] * -8 + 0x8000,*piVar1 * -8 + 0x8000),*(undefined8 *)(piVar1 + 6)
                 ,*param_1,0);
  }
  return;
}


// ==== FUN_001d4030 @ 001d4030 ====

void FUN_001d4030(int param_1)

{
  FUN_0026a7a0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_001c5f48(DAT_0040f4c0);
  }
  return;
}


// ==== FUN_001d4068 @ 001d4068 ====

void FUN_001d4068(void)

{
  return;
}


// ==== FUN_001d4070 @ 001d4070 ====

undefined4 FUN_001d4070(void)

{
  return 1;
}


// ==== FUN_001d4078 @ 001d4078 ====

undefined4 FUN_001d4078(void)

{
  return 1;
}


// ==== FUN_001d4080 @ 001d4080 ====

void FUN_001d4080(float *param_1,long param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 in_v1_udw;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_a0_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float *pfVar13;
  undefined8 in_a1_udw;
  undefined8 in_a3_udw;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar8 = (int)param_2 * 0x20;
  pfVar13 = (float *)(&DAT_003f72f0 + iVar8);
  *param_1 = 1.0 / (float)(byte)(&DAT_003f730c)[iVar8];
  param_1[1] = *(float *)(&DAT_003f72fc + iVar8);
  param_1[2] = (float)(uint)(byte)(&DAT_003f730c)[iVar8];
  param_1[3] = *(float *)(&DAT_003f72f8 + iVar8);
  param_1[4] = (*(float *)(&DAT_003f72f4 + iVar8) - *pfVar13) / (float)(byte)(&DAT_003f730d)[iVar8];
  param_1[5] = *pfVar13;
  param_1[6] = (float)(uint)(byte)(&DAT_003f730d)[iVar8];
  bVar1 = (&DAT_003f730e)[iVar8];
  param_1[7] = (float)(uint)bVar1;
  if (bVar1 == 1) {
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
  }
  else {
    fVar14 = *pfVar13;
    fVar15 = *(float *)(&DAT_003f72f4 + iVar8);
    param_1[8] = 0.0;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15;
    fVar16 = 1.0 / (fVar15 - fVar14);
    param_1[9] = *(float *)(&DAT_003f7300 + iVar8) / (float)(byte)(&DAT_003f730c)[iVar8];
    param_1[10] = (*(float *)(&DAT_003f7304 + iVar8) * fVar15 -
                  *(float *)(&DAT_003f7308 + iVar8) * fVar14) * fVar16;
    param_1[0xb] = (*(float *)(&DAT_003f7308 + iVar8) - *(float *)(&DAT_003f7304 + iVar8)) * fVar16;
  }
  auVar12._8_8_ = in_v0_udw;
  auVar12._0_8_ = 8;
  auVar5._8_8_ = in_a3_udw;
  auVar5._0_8_ = 4;
  auVar5 = _pcpyld(auVar12,auVar5);
  param_1[0x18] = auVar5._0_4_;
  param_1[0x19] = auVar5._4_4_;
  param_1[0x1a] = auVar5._8_4_;
  param_1[0x1b] = auVar5._12_4_;
  auVar6._8_8_ = auVar5._8_8_;
  auVar6._0_8_ = 0x44;
  if ((&DAT_003f730f)[iVar8] == '\0') {
    auVar10._8_8_ = in_v1_udw;
    auVar10._0_8_ = 0x42;
    auVar2._8_8_ = in_a1_udw;
    auVar2._0_8_ = 0x80000000a8;
    auVar12 = _pcpyld(auVar10,auVar2);
    auVar7._8_8_ = auVar6._8_8_;
    auVar7._0_8_ = 0x47;
    fVar14 = 4.48416e-44;
    auVar4._8_8_ = in_a3_udw;
    auVar4._0_8_ = 0x30000;
    auVar5 = _pcpyld(auVar7,auVar4);
    if (param_2 != 0) {
      fVar14 = 0.0;
    }
    param_1[0x10] = auVar5._0_4_;
    param_1[0x11] = auVar5._4_4_;
    param_1[0x12] = auVar5._8_4_;
    param_1[0x13] = auVar5._12_4_;
    param_1[0x14] = auVar12._0_4_;
    param_1[0x15] = auVar12._4_4_;
    param_1[0x16] = auVar12._8_4_;
    param_1[0x17] = auVar12._12_4_;
    param_1[0xe] = 1.79366e-43;
    param_1[0xf] = fVar14;
    param_1[0x20] = 0.0;
    param_1[0x21] = 0.0;
    param_1[0xc] = 1.79366e-43;
    param_1[0xd] = 1.79366e-43;
  }
  else {
    auVar11._8_8_ = in_a0_udw;
    auVar11._0_8_ = 0x42;
    auVar12 = _pcpyld(auVar11,auVar6);
    auVar9._8_8_ = in_v1_udw;
    auVar9._0_8_ = 0x47;
    auVar3._8_8_ = in_a3_udw;
    auVar3._0_8_ = 0x3140b;
    auVar5 = _pcpyld(auVar9,auVar3);
    param_1[0x20] = 0.0;
    param_1[0x21] = -1.7014118e+38;
    param_1[0x10] = auVar5._0_4_;
    param_1[0x11] = auVar5._4_4_;
    param_1[0x12] = auVar5._8_4_;
    param_1[0x13] = auVar5._12_4_;
    param_1[0x14] = auVar12._0_4_;
    param_1[0x15] = auVar12._4_4_;
    param_1[0x16] = auVar12._8_4_;
    param_1[0x17] = auVar12._12_4_;
    param_1[0xf] = 1.79366e-43;
    param_1[0xc] = 1.79366e-43;
    param_1[0xd] = 1.79366e-43;
    param_1[0xe] = 1.79366e-43;
  }
  return;
}


// ==== FUN_001d4268 @ 001d4268 ====

void FUN_001d4268(void)

{
  undefined1 auVar1 [16];
  undefined8 in_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  undefined1 auVar4 [16];
  undefined8 in_a0_udw;
  
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = 0x512;
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 0x302a400000000000;
  auVar4 = _pcpyld(auVar4,auVar3);
  auVar2._8_8_ = in_v0_udw;
  auVar2._0_8_ = 0xe;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x1000000000000007;
  auVar3 = _pcpyld(auVar2,auVar1);
  DAT_004173d0 = auVar3._0_4_;
  DAT_004173d4 = auVar3._4_4_;
  DAT_004173d8 = auVar3._8_4_;
  DAT_004173dc = auVar3._12_4_;
  DAT_004173c0 = auVar4._0_4_;
  DAT_004173c4 = auVar4._4_4_;
  DAT_004173c8 = auVar4._8_4_;
  DAT_004173cc = auVar4._12_4_;
  FUN_001d4080(&DAT_0048fb20,0);
  FUN_001d4080(&DAT_0048fbb0,1);
  FUN_001d4080(&DAT_0048fc40,2);
  FUN_001d4080(&DAT_0048fcd0,3);
  FUN_001d4080(&DAT_0048fd60,4);
  FUN_001d4080(&DAT_0048fdf0,5);
  DAT_0040eb1c = 1;
  DAT_0040eb20 = 0;
  return;
}


// ==== FUN_001d4330 @ 001d4330 ====

void FUN_001d4330(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_a1_udw;
  undefined1 auVar5 [16];
  
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 6;
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 0x4c;
  uVar2 = (ulong)(int)(*(uint *)(DAT_0040f4c0 + 0xd5e8) >> 6);
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = uVar2 | 0x558004000;
  auVar4 = _pcpyld(auVar3,auVar4);
  DAT_0048fb90 = auVar4._0_4_;
  DAT_0048fb94 = auVar4._4_4_;
  DAT_0048fb98 = auVar4._8_4_;
  DAT_0048fb9c = auVar4._12_4_;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = uVar2 >> 5 | 0x10000;
  auVar4 = _pcpyld(auVar5,auVar1);
  DAT_0048fc20 = DAT_0048fb90;
  DAT_0048fc24 = DAT_0048fb94;
  DAT_0048fc28 = DAT_0048fb98;
  DAT_0048fc2c = DAT_0048fb9c;
  DAT_0048fd40 = DAT_0048fb90;
  DAT_0048fd44 = DAT_0048fb94;
  DAT_0048fd48 = DAT_0048fb98;
  DAT_0048fd4c = DAT_0048fb9c;
  DAT_0048fdd0 = DAT_0048fb90;
  DAT_0048fdd4 = DAT_0048fb94;
  DAT_0048fdd8 = DAT_0048fb98;
  DAT_0048fddc = DAT_0048fb9c;
  DAT_0048ff10 = auVar4._0_4_;
  DAT_0048ff14 = auVar4._4_4_;
  DAT_0048ff18 = auVar4._8_4_;
  DAT_0048ff1c = auVar4._12_4_;
  return;
}


// ==== FUN_001d43b0 @ 001d43b0 ====

undefined8 FUN_001d43b0(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_v0_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong extraout_v0_udw_00;
  undefined8 extraout_v0_udw_01;
  undefined8 extraout_v0_udw_02;
  undefined8 in_v1_udw;
  undefined1 auVar10 [16];
  ulong uVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_a2_udw;
  
  if (DAT_0040eb1c == 3) {
    DAT_0040eb1c = 0x1c;
    return 0;
  }
  if (DAT_0040eb1c < 4) {
    if (DAT_0040eb1c != 1) {
      if (DAT_0040eb1c != 2) {
        return 1;
      }
      DAT_0040eb1c = 3;
      DAT_0040eb20 = 1;
      return 0;
    }
  }
  else {
    if (DAT_0040eb1c == 0x1c) {
      return 1;
    }
    if (DAT_0040eb1c != 0x38) {
      return 1;
    }
  }
  uVar5 = 1;
  if (DAT_0040eb20 != '\x01') {
    FUN_001d4330();
    auVar10._8_8_ = in_v1_udw;
    auVar10._0_8_ = 0x40;
    auVar8._8_8_ = in_a2_udw;
    auVar8._0_8_ = 0x1f0000003f0000;
    auVar10 = _pcpyld(auVar10,auVar8);
    auVar7._8_8_ = extraout_v0_udw;
    auVar7._0_8_ = 0x47;
    DAT_0048ff20 = auVar10._0_4_;
    DAT_0048ff24 = auVar10._4_4_;
    DAT_0048ff28 = auVar10._8_4_;
    DAT_0048ff2c = auVar10._12_4_;
    auVar1._8_8_ = in_a2_udw;
    auVar1._0_8_ = 0x31001;
    auVar8 = _pcpyld(auVar7,auVar1);
    DAT_0048ff30 = auVar8._0_4_;
    DAT_0048ff34 = auVar8._4_4_;
    DAT_0048ff38 = auVar8._8_4_;
    DAT_0048ff3c = auVar8._12_4_;
    uVar13 = auVar10._8_8_;
    uVar9 = auVar8._8_8_;
    if (param_2 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar13;
      auVar11 = _pcpyld(auVar3 << 0x40,auVar3 << 0x40);
      DAT_0048fcb0 = auVar11._0_4_;
      DAT_0048fcb4 = auVar11._4_4_;
      DAT_0048fcb8 = auVar11._8_4_;
      DAT_0048fcbc = auVar11._12_4_;
    }
    else {
      uVar5 = FUN_001c5100(DAT_0040f4c0,param_2,((uint)DAT_0040dfc8 & 0x1ff) << 5,0,0);
      auVar11._8_8_ = uVar13;
      auVar11._0_8_ = 0x490000;
      DAT_0048fcb0 = (undefined4)uVar5;
      DAT_0048fcb4 = (undefined4)((ulong)uVar5 >> 0x20);
      DAT_0048fcb8 = (undefined4)extraout_v0_udw_00;
      DAT_0048fcbc = (undefined4)(extraout_v0_udw_00 >> 0x20);
      uVar9 = extraout_v0_udw_00;
    }
    if (param_3 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar9;
      uVar5 = auVar11._8_8_;
      auVar8 = _pcpyld(auVar4 << 0x40,auVar4 << 0x40);
      DAT_0048fe60 = auVar8._0_4_;
      DAT_0048fe64 = auVar8._4_4_;
      DAT_0048fe68 = auVar8._8_4_;
      DAT_0048fe6c = auVar8._12_4_;
    }
    else {
      uVar6 = FUN_001c5100(DAT_0040f4c0,param_3,((uint)DAT_0040dfc8 & 0x1ff) * 0x20 + 0x1000,1,0);
      uVar5 = auVar11._8_8_;
      DAT_0048fe60 = (undefined4)uVar6;
      DAT_0048fe64 = (undefined4)((ulong)uVar6 >> 0x20);
      DAT_0048fe68 = (undefined4)extraout_v0_udw_01;
      DAT_0048fe6c = (undefined4)((ulong)extraout_v0_udw_01 >> 0x20);
    }
    if (param_1 == 0) {
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = 6;
      auVar2._8_8_ = in_a2_udw;
      auVar2._0_8_ = (ulong)(*(int *)(DAT_0040f4c0 + 0xd5e0) + 0x50) | 0x154004000;
      auVar8 = _pcpyld(auVar12,auVar2);
      DAT_0048ff40 = auVar8._0_4_;
      DAT_0048ff44 = auVar8._4_4_;
      DAT_0048ff48 = auVar8._8_4_;
      DAT_0048ff4c = auVar8._12_4_;
    }
    else {
      uVar5 = FUN_001c56f0(DAT_0040f4c0,param_1,*(int *)(DAT_0040f4c0 + 0xd5e4) + 0x50,0);
      DAT_0048ff40 = (undefined4)uVar5;
      DAT_0048ff44 = (undefined4)((ulong)uVar5 >> 0x20);
      DAT_0048ff48 = (undefined4)extraout_v0_udw_02;
      DAT_0048ff4c = (undefined4)((ulong)extraout_v0_udw_02 >> 0x20);
    }
    uVar5 = 0;
    DAT_0040eb1c = 2;
  }
  return uVar5;
}


// ==== FUN_001d4618 @ 001d4618 ====

undefined4 FUN_001d4618(void)

{
  DAT_0040eb1c = 0x38;
  DAT_0040eb20 = 0;
  return 1;
}


// ==== FUN_001d4630 @ 001d4630 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d4630(float param_1,float param_2,undefined4 param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auVar6 = _vsubbc(in_vf0,in_vf0);
  _lqc2(_DAT_00417350);
  auVar1 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd120));
  auVar1 = _vadd(in_vf0,auVar1);
  _lqc2(_DAT_00417360);
  _sqc2(auVar1);
  _lqc2(_DAT_00417370);
  auVar9 = _qmtc2(-param_2);
  auVar1 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd120));
  auVar1 = _vaddbc(auVar6,auVar1);
  _DAT_00417350 = _sqc2(auVar1);
  auVar3 = _qmtc2(0x43000000);
  auVar2 = _qmtc2(param_3);
  auVar4 = _qmtc2(0x3f000000);
  auVar1 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd130));
  auVar5 = _vsub(in_vf0,in_vf0);
  auVar1 = _vadd(in_vf0,auVar1);
  auVar7 = _vmulbc(auVar2,auVar3);
  _sqc2(auVar1);
  auVar8 = _vaddbc(auVar7,auVar4);
  auVar1 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd130));
  auVar1 = _vaddbc(auVar6,auVar1);
  _DAT_00417360 = _sqc2(auVar1);
  auVar7 = _vmulbc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar2,auVar3);
  auVar1 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd140));
  auVar2 = _vaddbc(auVar2,auVar4);
  auVar3 = _vadd(in_vf0,auVar1);
  auVar1 = _qmfc2(auVar2._0_4_);
  _sqc2(auVar3);
  DAT_0048fb50 = (int)auVar1._0_4_;
  auVar2 = _vaddbc(auVar7,auVar4);
  auVar1 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4c0 + 0xd140));
  _sqc2(auVar5);
  auVar1 = _vaddbc(auVar6,auVar1);
  _sqc2(auVar5);
  auVar7 = _vaddbc(in_vf0,auVar9);
  _DAT_00417370 = _sqc2(auVar1);
  _DAT_00417380 = _sqc2(auVar7);
  uStack_10 = (undefined4)*(undefined8 *)(DAT_0040f4c0 + 0xd0e0);
  DAT_004173a0 = uStack_10;
  uStack_c = (float)((ulong)*(undefined8 *)(DAT_0040f4c0 + 0xd0e0) >> 0x20);
  DAT_004173a4 = uStack_c;
  uStack_10 = (undefined4)*(undefined8 *)(DAT_0040f4c0 + 0xd0f0);
  uStack_c = (float)((ulong)*(undefined8 *)(DAT_0040f4c0 + 0xd0f0) >> 0x20);
  DAT_004173b4 = uStack_c;
  auVar1 = _sqc2(auVar8);
  uStack_c = auVar1._4_4_;
  auVar1 = _sqc2(auVar2);
  DAT_0048fc74 = (int)uStack_c;
  uStack_8 = auVar1._8_4_;
  auVar1 = _sqc2(auVar8);
  DAT_0048fc78 = (int)uStack_8;
  uStack_c = auVar1._4_4_;
  auVar1 = _sqc2(auVar2);
  DAT_0048fb54 = (int)uStack_c;
  uStack_8 = auVar1._8_4_;
  auVar1 = _sqc2(auVar8);
  DAT_0048fb58 = (int)uStack_8;
  uStack_c = auVar1._4_4_;
  auVar1 = _sqc2(auVar2);
  DAT_0048fbe4 = (int)uStack_c;
  uStack_8 = auVar1._8_4_;
  DAT_0048fbe8 = (int)uStack_8;
  DAT_00417390 = (float)*(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x78);
  DAT_00417394 = (float)*(int *)(*(int *)(DAT_0040f4c0 + 0xd540) + 0x7c);
  DAT_00417398 = *(undefined4 *)(DAT_0040f4c0 + 0xd0d0);
  DAT_0041739c = *(undefined4 *)(DAT_0040f4c0 + 0xd0d4);
  DAT_004173a8 = 0xb951b82a;
  DAT_004173ac = 0x40a00000;
  DAT_004173b0 = uStack_10;
  DAT_004173b8 = 0x3f800150;
  DAT_004173bc = 0x38d1b717;
  DAT_0048fbe0 = DAT_0048fb50;
  DAT_0048fc60 = (param_1 + param_1) - ((float)(int)(param_1 + param_1) + 1.0);
  DAT_0048fc70 = DAT_0048fb50;
  return;
}


// ==== FUN_001d4858 @ 001d4858 ====

void FUN_001d4858(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined8 in_v1_udw;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  FUN_002b3d88(0,0xb);
  if (DAT_0040e064 == &DAT_003b6490) {
    auVar6._8_8_ = in_v1_udw;
    auVar6._0_8_ = 0x10000000;
    auVar1._8_4_ = in_v0_udw;
    auVar1._0_8_ = 0x1100000011000000;
    auVar1._12_4_ = in_register_0000002c;
    auVar7 = _pcpyld(auVar1,auVar6);
    *DAT_0040e5f0 = auVar7._0_4_;
    DAT_0040e5f0[1] = auVar7._4_4_;
    DAT_0040e5f0[2] = auVar7._8_4_;
    DAT_0040e5f0[3] = auVar7._12_4_;
  }
  else {
    auVar8._8_8_ = in_v1_udw;
    auVar8._0_8_ = 0x3b649050000000;
    auVar7._8_4_ = in_v0_udw;
    auVar7._0_8_ = 0x1100000011000000;
    auVar7._12_4_ = in_register_0000002c;
    auVar7 = _pcpyld(auVar7,auVar8);
    *DAT_0040e5f0 = auVar7._0_4_;
    DAT_0040e5f0[1] = auVar7._4_4_;
    DAT_0040e5f0[2] = auVar7._8_4_;
    DAT_0040e5f0[3] = auVar7._12_4_;
    DAT_0040e064 = &DAT_003b6490;
  }
  auVar9._8_8_ = auVar7._8_8_;
  auVar9._0_8_ = 0x10000009;
  auVar2._8_4_ = in_v0_udw;
  auVar2._0_8_ = 0x6c0903f701000101;
  auVar2._12_4_ = in_register_0000002c;
  auVar7 = _pcpyld(auVar2,auVar9);
  DAT_0040e5f0[4] = auVar7._0_4_;
  DAT_0040e5f0[5] = auVar7._4_4_;
  DAT_0040e5f0[6] = auVar7._8_4_;
  DAT_0040e5f0[7] = auVar7._12_4_;
  uVar5 = DAT_0041735c;
  uVar4 = DAT_00417358;
  uVar3 = DAT_00417354;
  DAT_0040e5f0[8] = DAT_00417350;
  DAT_0040e5f0[9] = uVar3;
  DAT_0040e5f0[10] = uVar4;
  DAT_0040e5f0[0xb] = uVar5;
  uVar5 = DAT_0041736c;
  uVar4 = DAT_00417368;
  uVar3 = DAT_00417364;
  DAT_0040e5f0[0xc] = DAT_00417360;
  DAT_0040e5f0[0xd] = uVar3;
  DAT_0040e5f0[0xe] = uVar4;
  DAT_0040e5f0[0xf] = uVar5;
  uVar5 = DAT_0041737c;
  uVar4 = DAT_00417378;
  uVar3 = DAT_00417374;
  DAT_0040e5f0[0x10] = DAT_00417370;
  DAT_0040e5f0[0x11] = uVar3;
  DAT_0040e5f0[0x12] = uVar4;
  DAT_0040e5f0[0x13] = uVar5;
  uVar5 = DAT_0041738c;
  uVar4 = DAT_00417388;
  uVar3 = DAT_00417384;
  DAT_0040e5f0[0x14] = DAT_00417380;
  DAT_0040e5f0[0x15] = uVar3;
  DAT_0040e5f0[0x16] = uVar4;
  DAT_0040e5f0[0x17] = uVar5;
  uVar5 = DAT_0041739c;
  uVar4 = DAT_00417398;
  uVar3 = DAT_00417394;
  DAT_0040e5f0[0x18] = DAT_00417390;
  DAT_0040e5f0[0x19] = uVar3;
  DAT_0040e5f0[0x1a] = uVar4;
  DAT_0040e5f0[0x1b] = uVar5;
  uVar5 = DAT_004173ac;
  uVar4 = DAT_004173a8;
  uVar3 = DAT_004173a4;
  DAT_0040e5f0[0x1c] = DAT_004173a0;
  DAT_0040e5f0[0x1d] = uVar3;
  DAT_0040e5f0[0x1e] = uVar4;
  DAT_0040e5f0[0x1f] = uVar5;
  uVar5 = DAT_004173bc;
  uVar4 = DAT_004173b8;
  uVar3 = DAT_004173b4;
  DAT_0040e5f0[0x20] = DAT_004173b0;
  DAT_0040e5f0[0x21] = uVar3;
  DAT_0040e5f0[0x22] = uVar4;
  DAT_0040e5f0[0x23] = uVar5;
  uVar5 = DAT_004173cc;
  uVar4 = DAT_004173c8;
  uVar3 = DAT_004173c4;
  DAT_0040e5f0[0x24] = DAT_004173c0;
  DAT_0040e5f0[0x25] = uVar3;
  DAT_0040e5f0[0x26] = uVar4;
  DAT_0040e5f0[0x27] = uVar5;
  uVar5 = DAT_004173dc;
  uVar4 = DAT_004173d8;
  uVar3 = DAT_004173d4;
  DAT_0040e5f0[0x28] = DAT_004173d0;
  DAT_0040e5f0[0x29] = uVar3;
  DAT_0040e5f0[0x2a] = uVar4;
  DAT_0040e5f0[0x2b] = uVar5;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x2c;
  return;
}


// ==== FUN_001d4998 @ 001d4998 ====

void FUN_001d4998(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_v1_udw;
  undefined8 in_a1_udw;
  
  FUN_002b3d88(0xffffffff80000000,5);
  auVar8._8_8_ = extraout_v0_udw;
  auVar8._0_8_ = 0xe;
  auVar9._8_8_ = in_v1_udw;
  auVar9._0_8_ = 0x1000000000008004;
  auVar9 = _pcpyld(auVar8,auVar9);
  *DAT_0040e5f0 = auVar9._0_4_;
  DAT_0040e5f0[1] = auVar9._4_4_;
  DAT_0040e5f0[2] = auVar9._8_4_;
  DAT_0040e5f0[3] = auVar9._12_4_;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = DAT_0040dff0;
  auVar5._8_8_ = in_a1_udw;
  auVar5._0_8_ = 8;
  auVar9 = _pcpyld(auVar5,auVar1);
  DAT_0040e5f0[4] = auVar9._0_4_;
  DAT_0040e5f0[5] = auVar9._4_4_;
  DAT_0040e5f0[6] = auVar9._8_4_;
  DAT_0040e5f0[7] = auVar9._12_4_;
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = DAT_0040dfd8;
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = 0x47;
  auVar9 = _pcpyld(auVar6,auVar2);
  DAT_0040e5f0[8] = auVar9._0_4_;
  DAT_0040e5f0[9] = auVar9._4_4_;
  DAT_0040e5f0[10] = auVar9._8_4_;
  DAT_0040e5f0[0xb] = auVar9._12_4_;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = DAT_0040e000;
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = 0x42;
  auVar9 = _pcpyld(auVar7,auVar3);
  DAT_0040e5f0[0xc] = auVar9._0_4_;
  DAT_0040e5f0[0xd] = auVar9._4_4_;
  DAT_0040e5f0[0xe] = auVar9._8_4_;
  DAT_0040e5f0[0xf] = auVar9._12_4_;
  auVar10._8_8_ = auVar9._8_8_;
  auVar10._0_8_ = 0x4c;
  auVar4._8_8_ = in_v1_udw;
  auVar4._0_8_ = *(undefined8 *)(DAT_0040f4c0 + 0xd5c0);
  auVar9 = _pcpyld(auVar10,auVar4);
  DAT_0040e5f0[0x10] = auVar9._0_4_;
  DAT_0040e5f0[0x11] = auVar9._4_4_;
  DAT_0040e5f0[0x12] = auVar9._8_4_;
  DAT_0040e5f0[0x13] = auVar9._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  return;
}


// ==== FUN_001d4a50 @ 001d4a50 ====

void FUN_001d4a50(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 extraout_v0_udw;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar18;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong in_a0_udw;
  undefined8 in_a2_udw;
  
  iVar1 = param_1 * 0x90;
  if (*(long *)(&DAT_0048fb98 + param_1 * 0x24) != 0) {
    FUN_002b3d88(0,0xe);
    auVar11._8_8_ = extraout_v0_udw;
    auVar11._0_8_ = 0x1000000c;
    auVar12._8_8_ = in_a0_udw;
    auVar12._0_8_ = 0x6c0b03ec01000101;
    auVar12 = _pcpyld(auVar12,auVar11);
    *DAT_0040e5f0 = auVar12._0_4_;
    DAT_0040e5f0[1] = auVar12._4_4_;
    DAT_0040e5f0[2] = auVar12._8_4_;
    DAT_0040e5f0[3] = auVar12._12_4_;
    uVar18 = *(undefined4 *)(&DAT_0048fb24 + iVar1);
    uVar8 = *(undefined4 *)(&DAT_0048fb28 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_0048fb2c + iVar1);
    DAT_0040e5f0[4] = *(undefined4 *)(&DAT_0048fb20 + iVar1);
    DAT_0040e5f0[5] = uVar18;
    DAT_0040e5f0[6] = uVar8;
    DAT_0040e5f0[7] = uVar9;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb30 + iVar1);
    uVar18 = *(undefined4 *)(&DAT_0048fb3c + iVar1);
    DAT_0040e5f0[8] = auVar6._0_4_;
    DAT_0040e5f0[9] = auVar6._4_4_;
    DAT_0040e5f0[10] = auVar6._8_4_;
    DAT_0040e5f0[0xb] = uVar18;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb40 + iVar1);
    uVar18 = *(undefined4 *)(&DAT_0048fb4c + iVar1);
    DAT_0040e5f0[0xc] = auVar6._0_4_;
    DAT_0040e5f0[0xd] = auVar6._4_4_;
    DAT_0040e5f0[0xe] = auVar6._8_4_;
    DAT_0040e5f0[0xf] = uVar18;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb50 + param_1 * 0x24);
    uVar18 = *(undefined4 *)(&DAT_0048fb5c + iVar1);
    DAT_0040e5f0[0x10] = auVar6._0_4_;
    DAT_0040e5f0[0x11] = auVar6._4_4_;
    DAT_0040e5f0[0x12] = auVar6._8_4_;
    DAT_0040e5f0[0x13] = uVar18;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb60 + iVar1);
    uVar18 = *(undefined4 *)(&DAT_0048fb6c + iVar1);
    DAT_0040e5f0[0x14] = auVar6._0_4_;
    DAT_0040e5f0[0x15] = auVar6._4_4_;
    DAT_0040e5f0[0x16] = auVar6._8_4_;
    DAT_0040e5f0[0x17] = uVar18;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb70 + iVar1);
    uVar18 = *(undefined4 *)(&DAT_0048fb7c + iVar1);
    DAT_0040e5f0[0x18] = auVar6._0_4_;
    DAT_0040e5f0[0x19] = auVar6._4_4_;
    DAT_0040e5f0[0x1a] = auVar6._8_4_;
    DAT_0040e5f0[0x1b] = uVar18;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb80 + iVar1);
    uVar18 = *(undefined4 *)(&DAT_0048fb8c + iVar1);
    DAT_0040e5f0[0x1c] = auVar6._0_4_;
    DAT_0040e5f0[0x1d] = auVar6._4_4_;
    DAT_0040e5f0[0x1e] = auVar6._8_4_;
    DAT_0040e5f0[0x1f] = uVar18;
    auVar6 = *(undefined1 (*) [12])(&DAT_0048fb90 + param_1 * 0x24);
    uVar18 = (&DAT_0048fb9c)[param_1 * 0x24];
    uVar10 = *(undefined8 *)(&DAT_0048fb98 + param_1 * 0x24);
    DAT_0040e5f0[0x20] = auVar6._0_4_;
    DAT_0040e5f0[0x21] = auVar6._4_4_;
    DAT_0040e5f0[0x22] = auVar6._8_4_;
    DAT_0040e5f0[0x23] = uVar18;
    auVar13._0_8_ = (ulong)*(uint *)(DAT_0040f4c0 + 0xd5c0) | *(ulong *)(&DAT_0048fba0 + iVar1);
    auVar13._8_8_ = uVar10;
    auVar5._8_8_ = in_a2_udw;
    auVar5._0_8_ = 0x4c;
    auVar12 = _pcpyld(auVar5,auVar13);
    DAT_0040e5f0[0x24] = auVar12._0_4_;
    DAT_0040e5f0[0x25] = auVar12._4_4_;
    DAT_0040e5f0[0x26] = auVar12._8_4_;
    DAT_0040e5f0[0x27] = auVar12._12_4_;
    auVar14._8_8_ = auVar12._8_8_;
    auVar14._0_8_ = *(undefined8 *)(DAT_0040f4c0 + 0xd5d0);
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = 0x18;
    auVar12 = _pcpyld(auVar2,auVar14);
    DAT_0040e5f0[0x28] = auVar12._0_4_;
    DAT_0040e5f0[0x29] = auVar12._4_4_;
    DAT_0040e5f0[0x2a] = auVar12._8_4_;
    DAT_0040e5f0[0x2b] = auVar12._12_4_;
    auVar15._8_8_ = auVar12._8_8_;
    auVar15._0_8_ = *(undefined8 *)(DAT_0040f4c0 + 0xd5d8);
    auVar3._8_8_ = in_a0_udw;
    auVar3._0_8_ = 0x40;
    auVar12 = _pcpyld(auVar3,auVar15);
    DAT_0040e5f0[0x2c] = auVar12._0_4_;
    DAT_0040e5f0[0x2d] = auVar12._4_4_;
    DAT_0040e5f0[0x2e] = auVar12._8_4_;
    DAT_0040e5f0[0x2f] = auVar12._12_4_;
    auVar16._8_8_ = auVar12._8_8_;
    auVar16._0_8_ = 0x1500000004000000;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_a0_udw;
    auVar12 = _pcpyld(auVar7 << 0x40,auVar16);
    DAT_0040e5f0[0x30] = auVar12._0_4_;
    DAT_0040e5f0[0x31] = auVar12._4_4_;
    DAT_0040e5f0[0x32] = auVar12._8_4_;
    DAT_0040e5f0[0x33] = auVar12._12_4_;
    auVar17._8_8_ = auVar12._8_8_;
    auVar17._0_8_ = 0x10000000;
    auVar4._8_8_ = in_a0_udw;
    auVar4._0_8_ = 0x1100000011000000;
    auVar12 = _pcpyld(auVar4,auVar17);
    DAT_0040e5f0[0x34] = auVar12._0_4_;
    DAT_0040e5f0[0x35] = auVar12._4_4_;
    DAT_0040e5f0[0x36] = auVar12._8_4_;
    DAT_0040e5f0[0x37] = auVar12._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x38;
  }
  return;
}


// ==== FUN_001d4bd8 @ 001d4bd8 ====

void FUN_001d4bd8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_v1_udw;
  
  FUN_002b3d88(0xffffffff80000000,4);
  auVar4._8_8_ = extraout_v0_udw;
  auVar4._0_8_ = 0xe;
  auVar5._8_8_ = in_v1_udw;
  auVar5._0_8_ = 0x1000000000008003;
  auVar5 = _pcpyld(auVar4,auVar5);
  *DAT_0040e5f0 = auVar5._0_4_;
  DAT_0040e5f0[1] = auVar5._4_4_;
  DAT_0040e5f0[2] = auVar5._8_4_;
  DAT_0040e5f0[3] = auVar5._12_4_;
  uVar3 = DAT_0048ff1c;
  uVar2 = DAT_0048ff18;
  uVar1 = DAT_0048ff14;
  DAT_0040e5f0[4] = DAT_0048ff10;
  DAT_0040e5f0[5] = uVar1;
  DAT_0040e5f0[6] = uVar2;
  DAT_0040e5f0[7] = uVar3;
  uVar3 = DAT_0048ff2c;
  uVar2 = DAT_0048ff28;
  uVar1 = DAT_0048ff24;
  DAT_0040e5f0[8] = DAT_0048ff20;
  DAT_0040e5f0[9] = uVar1;
  DAT_0040e5f0[10] = uVar2;
  DAT_0040e5f0[0xb] = uVar3;
  uVar3 = DAT_0048ff3c;
  uVar2 = DAT_0048ff38;
  uVar1 = DAT_0048ff34;
  DAT_0040e5f0[0xc] = DAT_0048ff30;
  DAT_0040e5f0[0xd] = uVar1;
  DAT_0040e5f0[0xe] = uVar2;
  DAT_0040e5f0[0xf] = uVar3;
  DAT_0040eb28 = DAT_0040dfd0;
  DAT_0040dfd0 = CONCAT44(DAT_0048ff14,DAT_0048ff10);
  DAT_0040e5f0 = DAT_0040e5f0 + 0x10;
  return;
}


// ==== FUN_001d4c78 @ 001d4c78 ====

void FUN_001d4c78(void)

{
  DAT_0040dfd0 = DAT_0040eb28;
  return;
}


// ==== FUN_001d4c90 @ 001d4c90 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d4c90(void)

{
  undefined1 auVar1 [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_v1_udw;
  
  FUN_002b3d88(0xffffffff80000000,3);
  auVar2._8_8_ = extraout_v0_udw;
  auVar2._0_8_ = 0xe;
  auVar3._8_8_ = in_v1_udw;
  auVar3._0_8_ = 0x1000000000008002;
  auVar3 = _pcpyld(auVar2,auVar3);
  *DAT_0040e5f0 = auVar3._0_4_;
  DAT_0040e5f0[1] = auVar3._4_4_;
  DAT_0040e5f0[2] = auVar3._8_4_;
  DAT_0040e5f0[3] = auVar3._12_4_;
  auVar3 = _DAT_0048ff40;
  DAT_0040e5f0[4] = DAT_0048ff40;
  DAT_0040e5f0[5] = auVar3._4_4_;
  DAT_0040e5f0[6] = auVar3._8_4_;
  DAT_0040e5f0[7] = auVar3._12_4_;
  auVar4._8_8_ = auVar3._8_8_;
  auVar4._0_8_ = 0x14;
  auVar1._8_8_ = in_v1_udw;
  auVar1._0_8_ = 0x61;
  auVar3 = _pcpyld(auVar4,auVar1);
  DAT_0040e5f0[8] = auVar3._0_4_;
  DAT_0040e5f0[9] = auVar3._4_4_;
  DAT_0040e5f0[10] = auVar3._8_4_;
  DAT_0040e5f0[0xb] = auVar3._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
  return;
}


// ==== FUN_001d4d00 @ 001d4d00 ====

void FUN_001d4d00(void)

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
  undefined4 uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 in_v1_udw;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 in_a0_udw;
  undefined8 in_a2_udw;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 in_s3_udw;
  undefined4 in_register_0000013c;
  
  if (DAT_0040eb20 != '\0') {
    FUN_001d4330();
    auVar12._4_4_ = in_register_0000013c;
    auVar12._0_4_ = in_s3_udw;
    auVar12._8_8_ = 0;
    auVar13._4_4_ = in_register_0000013c;
    auVar13._0_4_ = in_s3_udw;
    auVar13._8_8_ = 0;
    auVar17 = _pcpyld(auVar12 << 0x40,auVar13 << 0x40);
    DAT_0048fcb0 = auVar17._0_4_;
    DAT_0048fcb4 = auVar17._4_4_;
    DAT_0048fcb8 = auVar17._8_4_;
    DAT_0048fcbc = auVar17._12_4_;
    auVar18._8_8_ = auVar17._8_8_;
    auVar18._0_8_ = 6;
    uVar25 = *(int *)(DAT_0040f4c0 + 0xd5e0) + 0x50;
    auVar3._8_8_ = in_a2_udw;
    auVar3._0_8_ = (ulong)uVar25 | 0x554004000;
    auVar17 = _pcpyld(auVar18,auVar3);
    DAT_0048ff40 = auVar17._0_4_;
    DAT_0048ff44 = auVar17._4_4_;
    DAT_0048ff48 = auVar17._8_4_;
    DAT_0048ff4c = auVar17._12_4_;
    DAT_0048fe60 = DAT_0048fcb0;
    DAT_0048fe64 = DAT_0048fcb4;
    DAT_0048fe68 = DAT_0048fcb8;
    DAT_0048fe6c = DAT_0048fcbc;
    uVar15 = FUN_001aeb50(DAT_0040f4c0,0);
    FUN_001b0948(uVar15);
    uVar27 = (uVar25 & 1) * 0x80 + (uVar25 & 4) * 0x40 + (uVar25 & 0x10) * 0x20;
    uVar26 = (uVar25 & 2) * 0x40 + (uVar25 & 8) * 0x20;
    FUN_002b3d88(0x80000000,9);
    auVar19._8_8_ = in_v1_udw;
    auVar19._0_8_ = 0xe;
    auVar4._8_8_ = in_a2_udw;
    auVar4._0_8_ = 0x1123400000008008;
    auVar17 = _pcpyld(auVar19,auVar4);
    *DAT_0040e5f0 = auVar17._0_4_;
    DAT_0040e5f0[1] = auVar17._4_4_;
    DAT_0040e5f0[2] = auVar17._8_4_;
    DAT_0040e5f0[3] = auVar17._12_4_;
    auVar17._8_8_ = in_a0_udw;
    auVar17._0_8_ = 0x4d;
    auVar5._8_8_ = in_a2_udw;
    auVar5._0_8_ = (long)(int)(uVar25 >> 5) | 0x10000;
    auVar17 = _pcpyld(auVar17,auVar5);
    DAT_0040e5f0[4] = auVar17._0_4_;
    DAT_0040e5f0[5] = auVar17._4_4_;
    DAT_0040e5f0[6] = auVar17._8_4_;
    DAT_0040e5f0[7] = auVar17._12_4_;
    auVar20._8_8_ = auVar17._8_8_;
    auVar20._0_8_ = 0x19;
    auVar14._4_4_ = in_register_0000013c;
    auVar14._0_4_ = in_s3_udw;
    auVar14._8_8_ = 0;
    auVar17 = _pcpyld(auVar20,auVar14 << 0x40);
    DAT_0040e5f0[8] = auVar17._0_4_;
    DAT_0040e5f0[9] = auVar17._4_4_;
    DAT_0040e5f0[10] = auVar17._8_4_;
    DAT_0040e5f0[0xb] = auVar17._12_4_;
    auVar21._8_8_ = auVar17._8_8_;
    auVar21._0_8_ = 0x41;
    auVar6._8_8_ = in_a2_udw;
    auVar6._0_8_ = CONCAT44(uVar26 >> 4,uVar27 >> 4 | ((uVar27 >> 4) + 0x1f) * 0x10000) |
                   (long)(int)((uVar26 >> 4) + 0x1f) << 0x30;
    auVar17 = _pcpyld(auVar21,auVar6);
    DAT_0040e5f0[0xc] = auVar17._0_4_;
    DAT_0040e5f0[0xd] = auVar17._4_4_;
    DAT_0040e5f0[0xe] = auVar17._8_4_;
    DAT_0040e5f0[0xf] = auVar17._12_4_;
    auVar22._8_8_ = auVar17._8_8_;
    auVar22._0_8_ = 0x48;
    auVar7._8_8_ = in_a2_udw;
    auVar7._0_8_ = 0x31001;
    auVar17 = _pcpyld(auVar22,auVar7);
    DAT_0040e5f0[0x10] = auVar17._0_4_;
    DAT_0040e5f0[0x11] = auVar17._4_4_;
    DAT_0040e5f0[0x12] = auVar17._8_4_;
    DAT_0040e5f0[0x13] = auVar17._12_4_;
    auVar23._8_8_ = auVar17._8_8_;
    auVar23._0_8_ = 0x43;
    auVar8._8_8_ = in_a2_udw;
    auVar8._0_8_ = 0x2a;
    auVar17 = _pcpyld(auVar23,auVar8);
    DAT_0040e5f0[0x14] = auVar17._0_4_;
    DAT_0040e5f0[0x15] = auVar17._4_4_;
    DAT_0040e5f0[0x16] = auVar17._8_4_;
    DAT_0040e5f0[0x17] = auVar17._12_4_;
    auVar24._8_8_ = auVar17._8_8_;
    auVar24._0_8_ = 1;
    auVar9._8_8_ = in_a2_udw;
    auVar9._0_8_ = 0x3f80000080ffffff;
    auVar17 = _pcpyld(auVar24,auVar9);
    DAT_0040e5f0[0x18] = auVar17._0_4_;
    DAT_0040e5f0[0x19] = auVar17._4_4_;
    DAT_0040e5f0[0x1a] = auVar17._8_4_;
    DAT_0040e5f0[0x1b] = auVar17._12_4_;
    auVar1._8_8_ = in_a0_udw;
    auVar1._0_8_ = 5;
    auVar10._4_4_ = 0;
    auVar10._0_4_ = uVar27 | uVar26 * 0x10000;
    auVar10._8_8_ = in_a2_udw;
    auVar17 = _pcpyld(auVar1,auVar10);
    DAT_0040e5f0[0x1c] = auVar17._0_4_;
    DAT_0040e5f0[0x1d] = auVar17._4_4_;
    DAT_0040e5f0[0x1e] = auVar17._8_4_;
    DAT_0040e5f0[0x1f] = auVar17._12_4_;
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = 5;
    auVar11._4_4_ = 0;
    auVar11._0_4_ = uVar27 + 0x200 | (uVar26 + 0x200) * 0x10000;
    auVar11._8_8_ = in_a2_udw;
    auVar17 = _pcpyld(auVar2,auVar11);
    DAT_0040e5f0[0x20] = auVar17._0_4_;
    DAT_0040e5f0[0x21] = auVar17._4_4_;
    DAT_0040e5f0[0x22] = auVar17._8_4_;
    DAT_0040e5f0[0x23] = auVar17._12_4_;
    DAT_0040e5f0 = DAT_0040e5f0 + 0x24;
    iVar16 = FUN_001aeb50(DAT_0040f4c0,0);
    FUN_002a90e8(*(undefined4 *)(iVar16 + 0x58));
  }
  return;
}


// ==== FUN_001d4f38 @ 001d4f38 ====

void FUN_001d4f38(undefined4 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_v1_udw;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_a0_udw;
  
  FUN_002b3d88(0,5);
  auVar7._8_8_ = in_v1_udw;
  auVar7._0_8_ = 0x5000000400000000;
  auVar8._8_8_ = in_a0_udw;
  auVar8._0_8_ = 0x10000004;
  auVar8 = _pcpyld(auVar7,auVar8);
  *DAT_0040e5f0 = auVar8._0_4_;
  DAT_0040e5f0[1] = auVar8._4_4_;
  DAT_0040e5f0[2] = auVar8._8_4_;
  DAT_0040e5f0[3] = auVar8._12_4_;
  auVar9._8_8_ = auVar8._8_8_;
  auVar9._0_8_ = 0xe;
  auVar1._8_8_ = in_a0_udw;
  auVar1._0_8_ = 0x1000000000008003;
  auVar8 = _pcpyld(auVar9,auVar1);
  DAT_0040e5f0[4] = auVar8._0_4_;
  DAT_0040e5f0[5] = auVar8._4_4_;
  DAT_0040e5f0[6] = auVar8._8_4_;
  DAT_0040e5f0[7] = auVar8._12_4_;
  auVar10._8_8_ = auVar8._8_8_;
  auVar10._0_8_ = 0x5310b;
  auVar2._8_8_ = in_a0_udw;
  auVar2._0_8_ = 0x47;
  auVar8 = _pcpyld(auVar2,auVar10);
  DAT_0040e5f0[8] = auVar8._0_4_;
  DAT_0040e5f0[9] = auVar8._4_4_;
  DAT_0040e5f0[10] = auVar8._8_4_;
  DAT_0040e5f0[0xb] = auVar8._12_4_;
  auVar11._8_8_ = auVar8._8_8_;
  auVar11._0_8_ = 0x44;
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 0x42;
  auVar8 = _pcpyld(auVar3,auVar11);
  DAT_0040e5f0[0xc] = auVar8._0_4_;
  DAT_0040e5f0[0xd] = auVar8._4_4_;
  DAT_0040e5f0[0xe] = auVar8._8_4_;
  DAT_0040e5f0[0xf] = auVar8._12_4_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar8._8_8_;
  auVar4._8_8_ = in_a0_udw;
  auVar4._0_8_ = 8;
  auVar8 = _pcpyld(auVar4,auVar6 << 0x40);
  DAT_0040e5f0[0x10] = auVar8._0_4_;
  DAT_0040e5f0[0x11] = auVar8._4_4_;
  DAT_0040e5f0[0x12] = auVar8._8_4_;
  DAT_0040e5f0[0x13] = auVar8._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 0x14;
  FUN_001c2c50(param_1);
  auVar12._8_8_ = auVar8._8_8_;
  auVar12._0_8_ = 0x1100000011000000;
  auVar5._8_8_ = in_a0_udw;
  auVar5._0_8_ = 0x10000000;
  auVar8 = _pcpyld(auVar12,auVar5);
  *DAT_0040e5f0 = auVar8._0_4_;
  DAT_0040e5f0[1] = auVar8._4_4_;
  DAT_0040e5f0[2] = auVar8._8_4_;
  DAT_0040e5f0[3] = auVar8._12_4_;
  DAT_0040e5f0 = DAT_0040e5f0 + 4;
  return;
}


// ==== FUN_001d5028 @ 001d5028 ====

void FUN_001d5028(void)

{
  FUN_001c2d90();
  return;
}


// ==== FUN_001d5048 @ 001d5048 ====

undefined4 FUN_001d5048(void)

{
  FUN_001c2e30();
  return 1;
}


// ==== FUN_001d5068 @ 001d5068 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d5068(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 extraout_v0_udw;
  undefined1 auVar9 [16];
  undefined8 in_v1_udw;
  undefined8 in_a0_udw;
  ulong in_a2_udw;
  int *piVar10;
  long lVar11;
  undefined1 in_s0_qw [16];
  undefined1 auVar12 [16];
  undefined4 *puVar13;
  int iVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  auVar12._8_4_ = in_s0_qw._8_4_;
  auVar12._12_4_ = in_s0_qw._12_4_;
  auVar12._0_8_ = in_s0_qw._4_8_ << 0x20;
  if (0 < *(int *)(param_1 + 0x428)) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar18 = _vsub(in_vf0,in_vf0);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar16 = _vaddbc(in_vf0,in_vf0);
    auVar17 = _vaddbc(in_vf0,in_vf0);
    uVar8 = auVar12._8_8_;
    lVar11 = (long)(param_1 + 0x28);
    auStack_f0 = _sqc2(auVar15);
    auStack_e0 = _sqc2(auVar16);
    auStack_d0 = _sqc2(auVar17);
    auStack_c0 = _sqc2(auVar18);
    iVar14 = 0;
    FUN_0035ec50(param_1 + 0x28,*(int *)(param_1 + 0x428),0x10,0x1c2e40);
    FUN_002707d8(*(float *)(DAT_0040f4c0 + 0xd5a0) + 3.5,&DAT_00440280,
                 *(undefined4 *)(*(int *)(param_1 + 0x43c) + 4),1,0,0);
    if (0 < *(int *)(param_1 + 0x428)) {
      do {
        iVar6 = FUN_001c62d8(*(undefined4 *)(param_1 + 0x438),0);
        puVar13 = (undefined4 *)lVar11;
        auVar18._1_7_ = 0;
        auVar18[0] = *(byte *)(puVar13 + 3);
        auVar18._8_8_ = uVar8;
        auVar15._8_8_ = in_v1_udw;
        auVar15._0_8_ = (long)(*(int *)(param_1 + 0x444) + -1);
        auVar12 = _pminw(auVar18,auVar15);
        auVar12 = _pextlw(0,auVar12._0_8_);
        auStack_c0._0_8_ = FUN_001c31e0(*puVar13);
        auStack_c0._8_4_ = (int)extraout_v0_udw;
        auStack_c0._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
        uVar8 = FUN_001c2a68(DAT_0040f4c8);
        FUN_001c3020(*(undefined4 *)(param_1 + 0x42c),*puVar13,uVar8,auVar12._0_4_);
        *(undefined4 *)(*(int *)(param_1 + 0x43c) + 0x14) = puVar13[2];
        *(float *)(*(int *)(param_1 + 0x43c) + 0x18) = 1.0 / ((float)auVar12._0_4_ * 0.25);
        *(short *)(*(int *)(param_1 + 0x43c) + 0xc) = auVar12._0_2_;
        uVar7 = FUN_001c2a98(DAT_0040f4c8);
        *(undefined4 *)(*(int *)(param_1 + 0x43c) + 8) = uVar7;
        FUN_001c8d20(DAT_0040f4c0 + 0xcfd0,auStack_f0);
        piVar10 = *(int **)(DAT_0040f4c0 + 0xcf84 + **(char **)(param_1 + 0x43c) * 4);
        uVar8 = auVar12._8_8_;
        (**(code **)(*piVar10 + 0xc))
                  ((int)piVar10 + (int)*(short *)(*piVar10 + 8),*(char **)(param_1 + 0x43c),0);
        FUN_002b3d88(0,2);
        auVar16._8_8_ = in_a0_udw;
        auVar16._0_8_ = (ulong)*(uint *)(iVar6 + 0x20) << 0x20 | 0x50000000;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = in_a2_udw;
        auVar12 = _pcpyld(auVar17 << 0x40,auVar16);
        *DAT_0040e5f0 = auVar12._0_4_;
        DAT_0040e5f0[1] = auVar12._4_4_;
        DAT_0040e5f0[2] = auVar12._8_4_;
        DAT_0040e5f0[3] = auVar12._12_4_;
        uVar5 = DAT_003bd20c;
        uVar4 = DAT_003bd208;
        uVar7 = DAT_003bd204;
        DAT_0040e5f0[4] = DAT_003bd200;
        DAT_0040e5f0[5] = uVar7;
        DAT_0040e5f0[6] = uVar4;
        DAT_0040e5f0[7] = uVar5;
        DAT_0040e5f0 = DAT_0040e5f0 + 8;
        (**(code **)(*piVar10 + 0x14))
                  ((int)piVar10 + (int)*(short *)(*piVar10 + 0x10),*(undefined4 *)(param_1 + 0x440),
                   0,0);
        auVar12 = _DAT_003bd210;
        uVar7 = 2;
        if (*(char *)((int)puVar13 + 0xd) != '\0') {
          uVar7 = 0;
        }
        *DAT_0040e5f0 = DAT_003bd210;
        DAT_0040e5f0[1] = auVar12._4_4_;
        DAT_0040e5f0[2] = auVar12._8_4_;
        DAT_0040e5f0[3] = auVar12._12_4_;
        auVar9._8_8_ = auVar12._8_8_;
        auVar9._0_8_ = 0x100000000;
        auVar1._4_4_ = 1;
        auVar1._0_4_ = uVar7;
        auVar1._8_8_ = in_a0_udw;
        auVar12 = _pcpyld(auVar9,auVar1);
        DAT_0040e5f0[4] = auVar12._0_4_;
        DAT_0040e5f0[5] = auVar12._4_4_;
        DAT_0040e5f0[6] = auVar12._8_4_;
        DAT_0040e5f0[7] = auVar12._12_4_;
        uVar5 = DAT_003bd22c;
        uVar4 = DAT_003bd228;
        uVar7 = DAT_003bd224;
        if (*(uint *)(iVar6 + 0x24) == 0) {
          DAT_0040e5f0[8] = DAT_003bd220;
          DAT_0040e5f0[9] = uVar7;
          DAT_0040e5f0[10] = uVar4;
          DAT_0040e5f0[0xb] = uVar5;
        }
        else {
          auVar2._8_8_ = in_a0_udw;
          auVar2._0_8_ = (ulong)*(uint *)(iVar6 + 0x24) << 0x20 | 0x50000000;
          auVar3._8_8_ = in_a2_udw;
          auVar3._0_8_ = 0x17000000;
          auVar12 = _pcpyld(auVar3,auVar2);
          DAT_0040e5f0[8] = auVar12._0_4_;
          DAT_0040e5f0[9] = auVar12._4_4_;
          DAT_0040e5f0[10] = auVar12._8_4_;
          DAT_0040e5f0[0xb] = auVar12._12_4_;
        }
        DAT_0040e5f0 = DAT_0040e5f0 + 0xc;
        iVar14 = iVar14 + 1;
        lVar11 = (long)(int)(puVar13 + 4);
      } while (iVar14 < *(int *)(param_1 + 0x428));
    }
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  return;
}


// ==== FUN_001d5370 @ 001d5370 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d5370(long param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uStack_24;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    DAT_00415af8 = 0x4b400000;
    DAT_00415afc = uStack_24;
    DAT_00415b08 = 0x3e800000;
    DAT_00415b0c = uStack_24;
    DAT_00415b18 = 0x42a33457;
    DAT_00415b1c = uStack_24;
    DAT_00415b28 = 0;
    DAT_00415b2c = uStack_24;
    auVar2 = _pextlw(0,0);
    DAT_00415b48 = 0x4409ee8c;
    DAT_00415b4c = 0x43968fcd;
    DAT_00415b58 = 0x4b000000;
    DAT_00415b5c = 0x4b000000;
    DAT_00415af0 = 0x3fc90fdb;
    DAT_00415af4 = 0xbe22f983;
    DAT_00415b00 = 0xbe22f983;
    DAT_00415b04 = 0x3f000000;
    DAT_00415b10 = 0xc2992661;
    DAT_00415b14 = 0xc2255de0;
    DAT_00415b20 = 0x421ed7b7;
    DAT_00415b24 = 0x40c90fda;
    DAT_00415b30 = 0x3f800000;
    DAT_00415b34 = 0x3faaaaab;
    DAT_00415b40 = 0x43f59407;
    DAT_00415b44 = 0x44345569;
    DAT_00415b50 = 0x4b000000;
    DAT_00415b54 = 0x4b000000;
    auVar2 = _pextlw(0xffffffffc1500000,auVar2._0_8_);
    DAT_00415b70 = auVar2._0_4_;
    DAT_00415b74 = auVar2._4_4_;
    DAT_00415b78 = auVar2._8_4_;
    DAT_00415b7c = auVar2._12_4_;
    iVar3 = 0xe;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
    DAT_004164a8 = 0x3f800000;
    DAT_004164ac = 0;
    DAT_004164a0 = 0x3f800000;
    DAT_004164a4 = 0x3f800000;
    DAT_004164b0 = 0x3f800000;
    DAT_004164b4 = 0x3f800000;
    DAT_004164b8 = 0x3f800000;
    DAT_004164bc = 0;
    DAT_004164c8 = 0x3f800000;
    DAT_004164cc = 0;
    DAT_004164d8 = 0;
    DAT_004164dc = 0x3f333333;
    DAT_004164c0 = 0x3f800000;
    DAT_004164c4 = 0x3f800000;
    DAT_004164e0 = 0x3f800000;
    DAT_004164e4 = 0;
    DAT_004164e8 = 0;
    DAT_004164ec = 0x3f19999a;
    DAT_004164d0 = 0x3f800000;
    DAT_004164d4 = 0;
    DAT_004164f8 = 0x3f800000;
    DAT_004164fc = 0x3f333333;
    DAT_00416500 = 0x3f63d70a;
    DAT_00416504 = 0x3f63d70a;
    DAT_00416508 = 0x3f800000;
    DAT_0041650c = 0x3f000000;
    DAT_00416518 = 0x3dcccccd;
    DAT_0041651c = 0x3f666666;
    DAT_004164f0 = 0x3f63d70a;
    DAT_004164f4 = 0x3f63d70a;
    DAT_00416528 = 0x3f800000;
    DAT_0041652c = 0x3f800000;
    DAT_00416510 = 0x3f800000;
    DAT_00416514 = 0x3f000000;
    auVar2 = _pextlw(0xffffffffbf3504f3,0);
    DAT_00416538 = 0;
    DAT_0041653c = 0x3f800000;
    auVar2 = _pextlw(0xffffffffbf3504f3,auVar2._0_8_);
    DAT_00416530 = 0x3f4ccccd;
    DAT_00416534 = 0;
    DAT_00416540 = auVar2._0_4_;
    DAT_00416544 = auVar2._4_4_;
    DAT_00416548 = auVar2._8_4_;
    DAT_0041654c = auVar2._12_4_;
    DAT_00416520 = 0x3f800000;
    DAT_00416524 = 0x3f800000;
    DAT_00416550 = (undefined4)_DAT_004432b0;
    DAT_00416554 = (undefined4)((ulong)_DAT_004432b0 >> 0x20);
    DAT_00416558 = DAT_004432b8;
    DAT_0041655c = DAT_004432bc;
    DAT_00416560 = (undefined4)_DAT_004432d0;
    DAT_00416564 = (undefined4)((ulong)_DAT_004432d0 >> 0x20);
    DAT_00416568 = DAT_004432d8;
    DAT_0041656c = DAT_004432dc;
    DAT_00416598 = 0x3f800000;
    DAT_0041659c = 0x3f800000;
    DAT_004165a8 = 0x43fffe00;
    DAT_004165ac = 0x42a2f83d;
    DAT_00416580 = (undefined4)_DAT_004432a0;
    DAT_00416584 = (undefined4)((ulong)_DAT_004432a0 >> 0x20);
    DAT_00416588 = DAT_004432a8;
    DAT_0041658c = DAT_004432ac;
    auVar2._8_4_ = 0x43800000;
    auVar2._0_8_ = 0x4300000043000000;
    auVar2._12_4_ = 0x43000000;
    DAT_00416590 = 0x3f800000;
    DAT_00416594 = 0x3f800000;
    DAT_004165a0 = 0x43fffe00;
    DAT_004165a4 = 0x43fffe00;
    DAT_004165b0 = 0x43000000;
    DAT_004165b4 = 0x43000000;
    DAT_004165b8 = 0x43800000;
    DAT_004165bc = 0x43000000;
    DAT_00416570 = (undefined4)_DAT_004432c0;
    DAT_00416574 = (undefined4)((ulong)_DAT_004432c0 >> 0x20);
    DAT_00416578 = DAT_004432c8;
    DAT_0041657c = DAT_004432cc;
    iVar3 = 0;
    do {
      auVar2._0_8_ = 0x10;
      while (auVar2._0_8_ != -1) {
        auVar2._0_8_ = (long)(auVar2._0_4_ + -1);
      }
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
  }
  return;
}


// ==== FUN_001d5808 @ 001d5808 ====

void FUN_001d5808(void)

{
  FUN_001d5370(1,0xffff);
  return;
}


// ==== FUN_001d5828 @ 001d5828 ====

void FUN_001d5828(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  DAT_003bd284 = FUN_00107c80(0x40f0f0,0x13);
  iVar2 = FUN_00107b98(0x40f0f0,0x13);
  iVar6 = (int)param_1;
  DAT_003bd280 = DAT_003bd284 + iVar2;
  *(undefined4 *)(iVar6 + 0xcbc8) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0xcbc4) = 0x3f800000;
  uVar3 = FUN_00107cf8(0x2a80);
  *(undefined4 *)(iVar6 + 0xcbe0) = uVar3;
  uVar3 = FUN_00107cf8(0x58);
  *(undefined4 *)(iVar6 + 0xcbf4) = uVar3;
  uVar3 = FUN_00107cf8(0x60);
  *(undefined4 *)(iVar6 + 0xcbd8) = uVar3;
  uVar3 = FUN_00107cf8(0x2d8);
  *(undefined4 *)(iVar6 + 0xcbd4) = uVar3;
  uVar3 = FUN_00107cf8(0x1c);
  *(undefined4 *)(iVar6 + 0xcbdc) = uVar3;
  FUN_001e82a8(*(undefined4 *)(iVar6 + 0xcbd8));
  FUN_001d7d40(*(undefined4 *)(iVar6 + 0xcbd4),0x23);
  FUN_001d94f8(*(undefined4 *)(iVar6 + 0xcbdc),0x3f8c60,DAT_003f8ca8,0x3f8c10,DAT_003f8c58);
  *(undefined4 *)(iVar6 + 0xcbe4) = 0;
  *(undefined4 *)(iVar6 + 0xcbe8) = 0;
  piVar4 = &DAT_0042a350;
  uVar5 = 0;
  do {
    uVar5 = uVar5 + 1;
    *(int *)(iVar6 + 0xcbe4) = *(int *)(iVar6 + 0xcbe4) + *piVar4;
    piVar1 = piVar4 + 1;
    piVar4 = piVar4 + 2;
    *(int *)(iVar6 + 0xcbe8) = *(int *)(iVar6 + 0xcbe8) + *piVar1;
  } while (uVar5 < 0xb);
  *(undefined4 *)(iVar6 + 0xcbec) = 0;
  *(undefined4 *)(iVar6 + 0xcbf0) = 0;
  if (*(int *)(iVar6 + 0xcbe4) != 0) {
    uVar3 = FUN_00107d20();
    *(undefined4 *)(iVar6 + 0xcbec) = uVar3;
  }
  if (*(int *)(iVar6 + 0xcbe8) != 0) {
    uVar3 = FUN_00107d20();
    *(undefined4 *)(iVar6 + 0xcbf0) = uVar3;
  }
  FUN_001efe60(param_1);
  *(undefined4 *)(iVar6 + 0xcbc0) = 0;
  *(undefined4 *)(iVar6 + 0xcbfc) = 1;
  return;
}


// ==== FUN_001d59c8 @ 001d59c8 ====

undefined4 FUN_001d59c8(void)

{
  FUN_001efba0();
  return 1;
}


// ==== FUN_001d59e8 @ 001d59e8 ====

undefined4 FUN_001d59e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = (int)param_1;
  uVar6 = 0;
  switch(*(undefined4 *)(iVar5 + 0xcbc0)) {
  case 0:
    puVar4 = &DAT_0042a250;
    uVar2 = 0;
    do {
      FUN_00282b60(puVar4,param_2);
      uVar3 = uVar2 + 1;
      (**(code **)(*(int *)(iVar5 + 0xcb88) + 0x1c))
                (iVar5 + 0xcb7c + (int)*(short *)(*(int *)(iVar5 + 0xcb88) + 0x18),uVar2,puVar4);
      param_2 = 1;
      puVar4 = puVar4 + 0x80;
      uVar2 = uVar3;
    } while (uVar3 < 2);
    (**(code **)(*(int *)(iVar5 + 0xcb88) + 0xc))
              (iVar5 + 0xcb7c + (int)*(short *)(*(int *)(iVar5 + 0xcb88) + 8));
    FUN_0027ff00(param_1,*(undefined4 *)(iVar5 + 0xcbec),*(undefined4 *)(iVar5 + 0xcbe4),
                 *(undefined4 *)(iVar5 + 0xcbf0),*(undefined4 *)(iVar5 + 0xcbe8),0x42a350,0xb);
    *(undefined4 *)(iVar5 + 0xcbc0) = 9;
    break;
  default:
    goto switchD_001d5a34_caseD_1;
  case 2:
    goto switchD_001d5a34_caseD_2;
  case 3:
    goto switchD_001d5a34_caseD_3;
  case 8:
    goto switchD_001d5a34_caseD_8;
  case 9:
    break;
  }
  lVar1 = FUN_001efd30(param_1);
  if (lVar1 != 0) {
    *(undefined4 *)(iVar5 + 0xcbc0) = 2;
switchD_001d5a34_caseD_2:
    lVar1 = FUN_001d7ec8(*(undefined4 *)(iVar5 + 0xcbd4));
    if (lVar1 != 0) {
      *(undefined4 *)(iVar5 + 0xcbc0) = 3;
switchD_001d5a34_caseD_3:
      lVar1 = FUN_001d96e8(*(undefined4 *)(iVar5 + 0xcbdc));
      if (lVar1 != 0) {
        *(undefined4 *)(iVar5 + 0xcbc0) = 8;
switchD_001d5a34_caseD_8:
        lVar1 = FUN_001e8710(*(undefined4 *)(iVar5 + 0xcbd8));
        if (lVar1 != 0) {
          *(undefined4 *)(iVar5 + 0xcbc0) = 10;
switchD_001d5a34_caseD_1:
          uVar6 = 1;
        }
      }
    }
  }
  FUN_001d5b78(param_1);
  return uVar6;
}


// ==== FUN_001d5b78 @ 001d5b78 ====

void FUN_001d5b78(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001e8798(*(undefined4 *)(iVar1 + 0xcbd8));
  FUN_001d7ee0(*(undefined4 *)(iVar1 + 0xcbd4));
  FUN_001d96f0(*(undefined4 *)(iVar1 + 0xcbdc));
  FUN_002807b0(*(undefined4 *)(iVar1 + 0xcbc4),*(undefined4 *)(iVar1 + 0xcbc8),
               *(undefined4 *)(DAT_0040f0e0 + 0x20140),*(undefined4 *)(DAT_0040f0e0 + 0x2013c),
               0x3f800000,param_1);
  FUN_00285c20(*(undefined4 *)(iVar1 + 0xcbe0));
  (**(code **)(*(int *)(iVar1 + 0xcba0) + 0x24))
            (iVar1 + *(short *)(*(int *)(iVar1 + 0xcba0) + 0x20));
  (**(code **)(*(int *)(iVar1 + 0xcba0) + 0x2c))
            (iVar1 + *(short *)(*(int *)(iVar1 + 0xcba0) + 0x28));
  return;
}


// ==== FUN_001d5c30 @ 001d5c30 ====

void FUN_001d5c30(int param_1,long param_2)

{
  int iVar1;
  
  if ((param_2 == 1) && (*(int *)(*(int *)(param_1 + 0xcbd8) + 0x40) != 0)) {
    FUN_001e8250();
  }
  FUN_00281948(param_1 + 0xb308,param_2);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xcbd8) + 0x2c) + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x50) + 0x34))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x50) + 0x30),param_2);
  }
  FUN_001d8d70(*(undefined4 *)(*(int *)(param_1 + 0xcbd8) + 0x34),param_2);
  return;
}


// ==== FUN_001d5cd8 @ 001d5cd8 ====

float FUN_001d5cd8(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  param_1 = (float)((int)param_1 * (uint)(0.0 < param_1));
  fVar3 = (float)((int)param_1 * (uint)(param_1 < 1.0) | (uint)(param_1 >= 1.0) * 0x3f800000);
  fVar1 = (float)FUN_0029e688(0x41200000,fVar3);
  fVar1 = (float)((int)fVar1 * (uint)(fVar2 < fVar1) | (int)fVar2 * (uint)(fVar2 >= fVar1));
  return ((float)((int)fVar1 * (uint)(fVar1 < 10.0) | (uint)(fVar1 >= 10.0) * 0x41200000) / 10.0) *
         fVar3;
}


// ==== FUN_001d5d40 @ 001d5d40 ====

void FUN_001d5d40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = FUN_001d5cd8();
  *(undefined4 *)(param_1 + 0xcbd0) = uVar3;
  FUN_00384700(uVar3,*(undefined4 *)(*(int *)(param_1 + 0xcbd8) + 0x34));
  fVar4 = *(float *)(param_1 + 0xcbcc);
  iVar1 = *(int *)(*(int *)(param_1 + 0xcbd8) + 0x3c);
  fVar5 = *(float *)(param_1 + 0xcbd0);
  iVar2 = *(int *)(iVar1 + 0x2c);
  (**(code **)(iVar2 + 0x34))
            ((int)fVar5 * (uint)(fVar4 < fVar5) | (int)fVar4 * (uint)(fVar4 >= fVar5),
             iVar1 + *(short *)(iVar2 + 0x30));
  return;
}


// ==== FUN_001d5da8 @ 001d5da8 ====

void FUN_001d5da8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = FUN_001d5cd8();
  *(undefined4 *)(param_1 + 0xcbcc) = uVar3;
  *(undefined4 *)(DAT_0040f510 + 0xcbc4) = uVar3;
  fVar4 = *(float *)(param_1 + 0xcbcc);
  iVar1 = *(int *)(*(int *)(param_1 + 0xcbd8) + 0x3c);
  fVar5 = *(float *)(param_1 + 0xcbd0);
  iVar2 = *(int *)(iVar1 + 0x2c);
  (**(code **)(iVar2 + 0x34))
            ((int)fVar5 * (uint)(fVar4 < fVar5) | (int)fVar4 * (uint)(fVar4 >= fVar5),
             iVar1 + *(short *)(iVar2 + 0x30));
  return;
}


// ==== FUN_001d5e58 @ 001d5e58 ====

void FUN_001d5e58(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x1b4) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  FUN_00281b88(iVar1 + 0x94);
  FUN_001d6230(param_1,0,0);
  return;
}


// ==== FUN_001d5ea8 @ 001d5ea8 ====

undefined4
FUN_001d5ea8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            )

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x84) == 1) {
    *(undefined8 *)(param_1 + 0x1a8) = param_3;
    *(int *)(param_1 + 0x1b4) = (int)param_5;
    *(int *)(param_1 + 0x1b0) = (int)param_4;
    lVar2 = FUN_001d76e8(param_5,param_4,1,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_001d7bb8(*(undefined4 *)(param_1 + 0x1b4),param_2);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    *(undefined4 *)(param_1 + 0x84) = 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else if (*(int *)(param_1 + 0x84) != 2) {
    return 0;
  }
  FUN_00281bb8(param_1 + 0x94,0,0);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return 1;
}


// ==== FUN_001d5f58 @ 001d5f58 ====

undefined4 FUN_001d5f58(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 1:
    *(undefined4 *)(param_1 + 0x84) = 2;
  case 2:
  case 3:
  case 4:
    uVar5 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar6 = 0;
      iVar1 = *(int *)(param_1 + 0x5c);
      while( true ) {
        uVar5 = uVar5 + 1;
        puVar2 = (undefined4 *)(iVar6 + iVar1);
        iVar6 = iVar6 + 0xc;
        FUN_00284298(*puVar2);
        if (*(uint *)(param_1 + 0x60) <= uVar5) break;
        iVar1 = *(int *)(param_1 + 0x5c);
      }
    }
    lVar4 = FUN_001d7a60(*(undefined4 *)(param_1 + 0x1b4));
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x84) = 5;
      *(undefined4 *)(param_1 + 0x1b4) = 0;
switchD_001d5f94_caseD_5:
      FUN_00281c98(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x84) = 7;
      *(undefined4 *)(param_1 + 0x60) = 0;
      goto switchD_001d5f94_caseD_7;
    }
  default:
    uVar3 = 0;
    break;
  case 5:
    goto switchD_001d5f94_caseD_5;
  case 7:
switchD_001d5f94_caseD_7:
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_001d6038 @ 001d6038 ====

void FUN_001d6038(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_f0 [164];
  undefined4 uStack_4c;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x80) = param_2;
  FUN_00281bf8(param_1 + 0x94);
  uStack_4c = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar4 = 0;
    iVar1 = *(int *)(param_1 + 0x5c);
    while( true ) {
      uVar3 = uVar3 + 1;
      puVar2 = (undefined4 *)(iVar4 + iVar1);
      iVar4 = iVar4 + 0xc;
      FUN_00283c38(*puVar2,auStack_f0);
      if (*(uint *)(param_1 + 0x60) <= uVar3) break;
      iVar1 = *(int *)(param_1 + 0x5c);
    }
  }
  return;
}


// ==== FUN_001d60b8 @ 001d60b8 ====

void FUN_001d60b8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_c0 [80];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_15;
  
  iVar2 = (int)param_1;
  uStack_70 = *(undefined4 *)(iVar2 + 0x78);
  uStack_6c = *(undefined4 *)(iVar2 + 0x74);
  uStack_68 = *(undefined4 *)(iVar2 + 0x7c);
  uStack_18 = 1;
  uStack_1c = 0x85c;
  uStack_60 = 0;
  if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
    uStack_2c = *(undefined4 *)(iVar2 + 0x8c);
    uStack_34 = DAT_003bd290;
    uStack_30 = DAT_003bd288;
    uStack_24 = DAT_003bd28c;
    uStack_15 = uGpffff8208;
    uStack_1c = 0x80085c;
    uStack_38 = DAT_003bd288;
    uStack_28 = DAT_003bd28c;
  }
  puVar1 = (undefined4 *)FUN_001d6178(param_1);
  FUN_00283e78(*puVar1,auStack_c0,0);
  return;
}


// ==== FUN_001d6178 @ 001d6178 ====

undefined4 * FUN_001d6178(int param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x5c) + iVar5);
      lVar1 = FUN_002842e8(*puVar2);
      if (lVar1 == 0) {
        puVar2[2] = *(undefined4 *)(param_1 + 0x80);
        return puVar2;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xc;
      if ((uint)puVar2[2] < (uint)puVar3[2]) {
        puVar3 = puVar2;
      }
    } while (uVar4 < *(uint *)(param_1 + 0x60));
  }
  FUN_00284298(*puVar3);
  puVar3[2] = *(undefined4 *)(param_1 + 0x80);
  return puVar3;
}


// ==== FUN_001d6230 @ 001d6230 ====

void FUN_001d6230(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 + 1;
        *(undefined1 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x5c)) + 0x35) = 0;
        iVar2 = iVar2 + 0xc;
      } while (uVar1 < *(uint *)(param_1 + 0x60));
    }
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 + 1;
        *(undefined1 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x5c)) + 0x35) = 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar1 < *(uint *)(param_1 + 0x60));
    }
    uVar3 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
  }
  return;
}


// ==== FUN_001d62f8 @ 001d62f8 ====

void FUN_001d62f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar4 = 0;
    iVar1 = *(int *)(param_1 + 0x5c);
    while( true ) {
      uVar3 = uVar3 + 1;
      puVar2 = (undefined4 *)(iVar4 + iVar1);
      iVar4 = iVar4 + 0xc;
      FUN_00284298(*puVar2);
      if (*(uint *)(param_1 + 0x60) <= uVar3) break;
      iVar1 = *(int *)(param_1 + 0x5c);
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  return;
}


// ==== FUN_001d6388 @ 001d6388 ====

void FUN_001d6388(int param_1)

{
  FUN_00281e28(param_1 + 0x94);
  return;
}


// ==== FUN_001d63a8 @ 001d63a8 ====

void FUN_001d63a8(int param_1,int param_2)

{
  int *piVar1;
  undefined1 auStack_c0 [80];
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_15;
  
  *(uint *)(*(int *)(param_2 + 0x18) + 0x54) =
       *(uint *)(*(int *)(param_2 + 0x18) + 0x54) & 0xfffffffd;
  uStack_18 = 0xc;
  uStack_68 = 0x3f800000;
  uStack_1c = 0x85c;
  uStack_6c = 0x3f800000;
  uStack_60 = 0;
  if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
    uStack_34 = DAT_003bd29c;
    uStack_30 = DAT_003bd294;
    uStack_2c = DAT_003bd2a0;
    uStack_24 = DAT_003bd298;
    uStack_15 = 1;
    uStack_1c = 0x80085c;
    uStack_38 = DAT_003bd294;
    uStack_28 = DAT_003bd298;
  }
  iStack_70 = param_2;
  piVar1 = (int *)FUN_00281d50(param_1 + 0x94);
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),auStack_c0);
  return;
}


// ==== FUN_001d6488 @ 001d6488 ====

/* Strings referenciadas:
     "PlyrWpn%d"
     "Grd%d" */

void FUN_001d6488(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar5 = 5;
  param_1[0x6f8] = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  param_1[0x709] = 0;
  param_1[0xa7] = 0;
  param_1[0x706] = 0;
  param_1[0x707] = 0;
  param_1[0x6f9] = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  param_1[0x712] = 0;
  param_1[0x70d] = 0;
  param_1[0x70e] = 0;
  param_1[0x705] = 0;
  *(undefined1 *)(param_1 + 0x711) = 0;
  param_1[0x703] = 0;
  param_1[0x704] = 0;
  FUN_00382348(param_1 + 0xa8,0x2b9d6f8);
  puVar2 = param_1 + 0xb0;
  DAT_0042a3d0 = 0;
  do {
    *(undefined1 *)(puVar2 + 0x24) = 0;
    iVar5 = iVar5 + -1;
    puVar2 = puVar2 + 0x10c;
  } while (-1 < iVar5);
  puVar7 = param_1 + 8;
  puVar3 = param_1 + 1;
  puVar2 = param_1;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    sprintf(puVar3,0x3f7580,iVar5);
    puVar3 = puVar3 + 4;
    *(undefined1 *)((int)puVar2 + 0xf) = 0;
    uVar1 = FUN_00107cf8(0xb8);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 4;
    iVar5 = iVar6;
  } while (iVar6 < 2);
  puVar4 = (undefined1 *)((int)param_1 + 0x2f);
  puVar2 = param_1 + 9;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    sprintf(puVar2,0x3f7590,iVar5);
    puVar2 = puVar2 + 4;
    *puVar4 = 0;
    puVar4 = puVar4 + 0x10;
    uVar1 = FUN_00107cf8(0xb8);
    *puVar7 = uVar1;
    puVar7 = puVar7 + 4;
    iVar5 = iVar6;
  } while (iVar6 < 2);
  FUN_00280a08(param_1 + 0x10);
  param_1[0x70b] = 0;
  return;
}


// ==== FUN_001d65f8 @ 001d65f8 ====

/* Strings referenciadas:
     "Level.awd"
     "PlayerWeapon"
     "Levels\Level_%02u\%s"
     "Sound\PCM\GrdPin.dav"
     "chars\guns\GrdPin.wdo"
     "Sound\PCM\GrdLnchr.dav"
     "chars\guns\GrdLnchr.wdo"
     "../Export/ValueDB/Sound/ps2/BaseMix.cfg" */

undefined4 FUN_001d65f8(undefined4 *param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_100 [12];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_e0 [64];
  
  if (cGpffff8209 == '\0') {
    FUN_002726d0(0x544614b7182c0000,0x42a3d0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd2a8,0x42a3d0,0x3f7598,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    cGpffff8209 = '\x01';
  }
  param_1[0x70a] = 0;
  switch(param_1[0x70b]) {
  case 0:
    puVar12 = param_1 + 8;
    puVar11 = param_1 + 1;
    iVar5 = 1;
    iVar8 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0xa69c7fcda253d080);
    iVar8 = *(int *)(iVar8 + 8);
    puVar10 = param_1;
    do {
      FUN_001d75e0(*puVar10,puVar11,iVar8,0x10000);
      iVar8 = iVar8 + 0x10000;
      puVar11 = puVar11 + 4;
      iVar5 = iVar5 + -1;
      puVar10 = puVar10 + 4;
    } while (-1 < iVar5);
    puVar10 = param_1 + 9;
    iVar5 = 1;
    do {
      FUN_001d75e0(*puVar12,puVar10,iVar8,0x4000);
      iVar8 = iVar8 + 0x4000;
      puVar12 = puVar12 + 4;
      iVar5 = iVar5 + -1;
      puVar10 = puVar10 + 4;
    } while (-1 < iVar5);
    param_1[0x70b] = 0xd;
  case 0xd:
    lVar6 = FUN_00280a38(param_1 + 0x10,param_2[1],param_2[2]);
    if (lVar6 != 0) {
      puVar10 = param_1 + 0xb0;
      iVar8 = 5;
      do {
        uStack_f4 = 0;
        uStack_f0 = 0;
        FUN_001f0320(puVar10,auStack_100);
        iVar8 = iVar8 + -1;
        puVar10 = puVar10 + 0x10c;
      } while (-1 < iVar8);
      iVar8 = *param_2;
      uVar9 = 0;
      param_1[0xa7] = iVar8;
      if (iVar8 != 0) {
        piVar7 = param_1 + 0xa1;
        do {
          uVar9 = uVar9 + 1;
          iVar8 = FUN_00281808(DAT_0040f510 + 0xb308);
          piVar7[2] = 0;
          *piVar7 = iVar8;
          *(undefined1 *)(iVar8 + 0x34) = 1;
          piVar7 = piVar7 + 3;
        } while (uVar9 < (uint)param_1[0xa7]);
      }
      param_1[0x706] = param_2[3];
      iVar8 = param_2[4];
      *(undefined1 *)(param_1 + 0x711) = 1;
      param_1[0x707] = iVar8;
      param_1[0x708] = 0;
      *(undefined1 *)(param_1 + 0x70f) = 1;
      uVar4 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
      param_1[0x705] = uVar4;
      param_1[0x70b] = 1;
switchD_001d66c4_caseD_1:
      sprintf(auStack_e0,0x3f75a8,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),PTR_s_Level_awd_003bd2a4);
      iVar8 = DAT_0040f510;
      sVar1 = *(short *)(param_1[0x705] + 0x20);
      uVar4 = *(undefined4 *)(param_1[0x705] + 8);
      iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x8e4c293508000000);
      uVar2 = *(undefined4 *)(iVar5 + 8);
      iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x8e4c293508000000);
      lVar6 = FUN_0027ff78(iVar8,auStack_e0,1,uVar4,(int)sVar1 << 0xb,uVar2,
                           *(undefined4 *)(iVar5 + 0xc),0x3f8bf8);
      param_1[0x700] = (int)lVar6;
      if (lVar6 != 0) {
        FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),param_1[0x705]);
        param_1[0x705] = 0;
        iVar8 = *(int *)(DAT_0040f4d0 + 0x5aec);
        uVar4 = FUN_00280200(DAT_0040f510,iVar8 + 0x220,0);
        param_1[0x703] = uVar4;
        uVar4 = FUN_00280200(DAT_0040f510,iVar8 + 0x228,0);
        param_1[0x704] = uVar4;
        param_1[0x70b] = 2;
switchD_001d66c4_caseD_2:
        if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
           (bVar3 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
          bVar3 = true;
        }
        if (bVar3) {
          return 0;
        }
        param_1[0x6fb] = 0;
        FUN_001093c0(DAT_0040f4c4,0x3f75c0,8,9,0x1d72c0,param_1,1,0x2000000);
        param_1[0x70b] = 3;
switchD_001d66c4_caseD_3:
        if (param_1[0x6fb] != 0) {
          if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
             (bVar3 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
            bVar3 = true;
          }
          if (bVar3) {
            return 0;
          }
          param_1[0x701] = 0;
          FUN_001093c0(DAT_0040f4c4,0x3f75d8,8,9,0x1d72e8,param_1,0,0x2000000);
          param_1[0x70b] = 4;
switchD_001d66c4_caseD_4:
          if (param_1[0x701] == 0) {
            return 0;
          }
          uVar4 = FUN_001d7278(param_1);
          param_1[0x6fa] = uVar4;
          uVar4 = FUN_001d7460(param_1);
          param_1[0x6fe] = uVar4;
          param_1[0x70b] = 5;
switchD_001d66c4_caseD_5:
          lVar6 = FUN_001f03d0(param_1[0x6fa],0x73055beb13032000,0x73055bea7dc80000,param_1[0x6fb],
                               param_1[0x701],param_1[0x6fe],0);
          if (lVar6 != 0) {
            param_1[0x6fd] = 0;
            FUN_001093c0(DAT_0040f4c4,0x3f75f0,8,9,0x1d7310,param_1,0,0x2000000);
            param_1[0x70b] = 6;
switchD_001d66c4_caseD_6:
            if (param_1[0x6fd] != 0) {
              param_1[0x702] = 0;
              if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
                 (bVar3 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
                bVar3 = true;
              }
              if (bVar3) {
                return 0;
              }
              FUN_001093c0(DAT_0040f4c4,0x3f7608,8,9,0x1d7338,param_1,0,0x2000000);
              param_1[0x70b] = 7;
switchD_001d66c4_caseD_7:
              if (param_1[0x702] == 0) {
                return 0;
              }
              uVar4 = FUN_001d7278(param_1);
              param_1[0x6fc] = uVar4;
              uVar4 = FUN_001d7460(param_1);
              param_1[0x6ff] = uVar4;
              param_1[0x70b] = 8;
              goto switchD_001d66c4_caseD_8;
            }
          }
        }
      }
    }
    break;
  case 1:
    goto switchD_001d66c4_caseD_1;
  case 2:
    goto switchD_001d66c4_caseD_2;
  case 3:
    goto switchD_001d66c4_caseD_3;
  case 4:
    goto switchD_001d66c4_caseD_4;
  case 5:
    goto switchD_001d66c4_caseD_5;
  case 6:
    goto switchD_001d66c4_caseD_6;
  case 7:
    goto switchD_001d66c4_caseD_7;
  case 8:
switchD_001d66c4_caseD_8:
    lVar6 = FUN_001f03d0(param_1[0x6fc],0x730544c7b719c080,0x730544c7b701e000,param_1[0x6fd],
                         param_1[0x702],param_1[0x6ff],0);
    if (lVar6 != 0) {
      param_1[0x70b] = 9;
switchD_001d66c4_caseD_9:
      param_1[0x710] = 0;
      return 1;
    }
    break;
  case 9:
    goto switchD_001d66c4_caseD_9;
  default:
    break;
  }
  return 0;
}


// ==== FUN_001d6c48 @ 001d6c48 ====

void FUN_001d6c48(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x1c24) = *(int *)(iVar1 + 0x1c24) + 1;
  *(int *)(iVar1 + 0x1c40) = *(int *)(iVar1 + 0x1c40) + -1;
  FUN_00280a80(iVar1 + 0x40);
  FUN_001d7128(param_1);
  if (*(int *)(iVar1 + 0x1be0) != 0) {
    FUN_001f0620(*(int *)(iVar1 + 0x1be0),*(undefined4 *)(iVar1 + 0x1c24));
    FUN_001f0770(DAT_003bd2a8,*(undefined4 *)(iVar1 + 0x1be0));
  }
  return;
}


// ==== FUN_001d6cb8 @ 001d6cb8 ====

undefined4 FUN_001d6cb8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = (int)param_1;
  switch(*(undefined4 *)(iVar5 + 0x1c2c)) {
  case 9:
    *(undefined4 *)(iVar5 + 0x1c2c) = 10;
  case 10:
    iVar6 = 0;
    iVar3 = iVar5 + 0x2c0;
    do {
      lVar2 = FUN_001f05d0(iVar3);
      iVar6 = iVar6 + 1;
      if (lVar2 == 0) goto LAB_001d6e14;
      iVar3 = iVar3 + 0x430;
    } while (iVar6 < 6);
    iVar3 = iVar5 + 0x2c0;
    iVar6 = 5;
    do {
      iVar6 = iVar6 + -1;
      FUN_001f03c0(iVar3);
      iVar3 = iVar3 + 0x430;
    } while (-1 < iVar6);
    uVar7 = 0;
    if (*(int *)(iVar5 + 0x29c) != 0) {
      puVar4 = (undefined4 *)(iVar5 + 0x284);
      do {
        uVar7 = uVar7 + 1;
        FUN_002818d0(DAT_0040f510 + 0xb308,*puVar4);
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4 = puVar4 + 3;
      } while (uVar7 < *(uint *)(iVar5 + 0x29c));
    }
    FUN_001d7498(param_1,*(undefined4 *)(iVar5 + 0x1bf8));
    FUN_001d7498(param_1,*(undefined4 *)(iVar5 + 0x1bfc));
    *(undefined4 *)(iVar5 + 0x1c34) = 0;
    *(undefined4 *)(iVar5 + 0x1c38) = 0;
    FUN_001d72b8(param_1,*(undefined4 *)(iVar5 + 0x1be8));
    *(undefined4 *)(iVar5 + 0x1be8) = 0;
    FUN_001d72b8(param_1,*(undefined4 *)(iVar5 + 0x1bf0));
    *(undefined4 *)(iVar5 + 0x1bf0) = 0;
    *(undefined4 *)(iVar5 + 0x1c2c) = 0xb;
switchD_001d6cfc_caseD_b:
    lVar2 = FUN_00280b10(iVar5 + 0x40);
    if (lVar2 != 0) {
      *(undefined4 *)(iVar5 + 0x1c2c) = 0xc;
switchD_001d6cfc_caseD_c:
      if ((*(int *)(iVar5 + 0x1c00) == 0) || (lVar2 = FUN_00280100(DAT_0040f510), lVar2 != 0)) {
        *(undefined4 *)(iVar5 + 0x1c00) = 0;
        *(undefined4 *)(iVar5 + 0x1c2c) = 0xd;
switchD_001d6cfc_caseD_d:
        *(undefined4 *)(iVar5 + 0x1c10) = 0;
        *(undefined8 *)(iVar5 + 0x2a8) = 0;
        *(undefined8 *)(iVar5 + 0x2b0) = 0;
        *(undefined4 *)(iVar5 + 0x1c18) = 0;
        *(undefined4 *)(iVar5 + 0x1c1c) = 0;
        *(undefined1 *)(iVar5 + 0x1c44) = 0;
        *(undefined4 *)(iVar5 + 0x1c0c) = 0;
        DAT_0042a3d0 = 0;
        goto switchD_001d6cfc_default;
      }
    }
LAB_001d6e14:
    uVar1 = 0;
    break;
  case 0xb:
    goto switchD_001d6cfc_caseD_b;
  case 0xc:
    goto switchD_001d6cfc_caseD_c;
  case 0xd:
    goto switchD_001d6cfc_caseD_d;
  default:
switchD_001d6cfc_default:
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001d6e78 @ 001d6e78 ====

/* Strings referenciadas:
     "PlayerWeapon"
     "../Export/ValueDB/Sound/ps2/BaseMix.cfg" */

void FUN_001d6e78(int param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x1c44) = param_4;
  if (*(int *)(param_1 + 0x1be0) != 0) {
    FUN_001d62f8(*(int *)(param_1 + 0x1be0),0,0);
    FUN_001d6388(*(undefined4 *)(param_1 + 0x1be0),0,0);
  }
  if (cGpffff8209 == '\x01') {
    FUN_0027bb50(DAT_003c09e8 + 4,0x3bd2a8);
  }
  FUN_002726d0(param_3,0x42a3d0);
  FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd2a8,0x42a3d0,0x3f7598,
               PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
  cGpffff8209 = 1;
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
  *(int *)(param_1 + 0x1be0) = (int)param_2;
  FUN_001d62f8(param_2,param_1 + 0x284,*(undefined4 *)(param_1 + 0x29c));
  FUN_001d6388(*(undefined4 *)(param_1 + 0x1be0),*(undefined4 *)(param_1 + 0x1c18),
               *(undefined4 *)(param_1 + 0x1c1c));
  return;
}


// ==== FUN_001d6f90 @ 001d6f90 ====

void FUN_001d6f90(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1be0) == *(int *)(iVar1 + 0x1be8)) {
    FUN_001d6e78(param_1,*(undefined4 *)(iVar1 + 0x1be4),*(undefined8 *)(iVar1 + 0x2b0),
                 *(undefined1 *)(iVar1 + 0x1c45));
  }
  FUN_001f0678(*(undefined4 *)(iVar1 + 0x1be0));
  if (*(char *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24) + 0x1e54) == '\0') {
    FUN_001d7020(param_1);
  }
  *(undefined4 *)(iVar1 + 0x1c28) = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  return;
}


// ==== FUN_001d7020 @ 001d7020 ====

void FUN_001d7020(int param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_e0 [80];
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  uStack_3c = 0;
  if (*(char *)(param_1 + 0x1c44) != '\0') {
    iVar2 = *(int *)(param_1 + 0x2a0) * 0x10000 + (*(int *)(param_1 + 0x2a0) >> 0x10);
    *(int *)(param_1 + 0x2a0) = iVar2;
    iVar2 = iVar2 + *(int *)(param_1 + 0x2a4);
    *(int *)(param_1 + 0x2a0) = iVar2;
    *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + iVar2;
    if ((*(uint *)(param_1 + 0x2a0) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x1c10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c0c);
    }
    lVar1 = FUN_00280bc0(param_1 + 0x40);
    if ((lVar1 != 0) && (iVar2 != 0)) {
      *(uint *)(*(int *)(iVar2 + 0x18) + 0x54) =
           *(uint *)(*(int *)(iVar2 + 0x18) + 0x54) & 0xfffffffd;
      uStack_88 = *(undefined4 *)(param_1 + 0x1c48);
      uStack_8c = 0x3f800000;
      uStack_38 = 1;
      uStack_3c = 0x85c;
      uStack_80 = 0;
      iStack_90 = iVar2;
      FUN_00283e78(lVar1,auStack_e0,0);
    }
  }
  return;
}


// ==== FUN_001d7100 @ 001d7100 ====

void FUN_001d7100(void)

{
  int in_t3_lo;
  
  if (*(int *)(in_t3_lo + 0x1be0) != 0) {
    FUN_001f0c98();
  }
  return;
}


// ==== FUN_001d7128 @ 001d7128 ====

void FUN_001d7128(int param_1)

{
  FUN_001ea518(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),3,
               *(float *)(DAT_0040f0e0 + 0x20140) - *(float *)(param_1 + 0x1c28) <= 0.5);
  return;
}


// ==== FUN_001d7198 @ 001d7198 ====

void FUN_001d7198(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 5;
  iVar1 = param_1 + 0x2c0;
  do {
    FUN_001f0f28(iVar1,param_2,param_3);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x430;
  } while (-1 < iVar2);
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x1c48) = 0;
  }
  else {
    uVar3 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
    *(undefined4 *)(param_1 + 0x1c48) = uVar3;
  }
  return;
}


// ==== FUN_001d7238 @ 001d7238 ====

void FUN_001d7238(int param_1)

{
  FUN_001f08e8(*(undefined4 *)(param_1 + 0x1be0));
  return;
}


// ==== FUN_001d7258 @ 001d7258 ====

void FUN_001d7258(int param_1)

{
  FUN_001f0958(*(undefined4 *)(param_1 + 0x1be0));
  return;
}


// ==== FUN_001d7278 @ 001d7278 ====

int FUN_001d7278(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x2c0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(char *)(param_1 + 0x90) == '\0') {
      *(undefined1 *)(param_1 + 0x90) = 1;
      return param_1;
    }
    param_1 = param_1 + 0x430;
  } while (iVar1 < 6);
  return 0;
}


// ==== FUN_001d72b8 @ 001d72b8 ====

void FUN_001d72b8(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x90) = 0;
  return;
}


// ==== FUN_001d72c0 @ 001d72c0 ====

void FUN_001d72c0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x1bec) = uVar1;
  return;
}


// ==== FUN_001d72e8 @ 001d72e8 ====

void FUN_001d72e8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x1c04) = uVar1;
  return;
}


// ==== FUN_001d7310 @ 001d7310 ====

void FUN_001d7310(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x1bf4) = uVar1;
  return;
}


// ==== FUN_001d7338 @ 001d7338 ====

void FUN_001d7338(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x1c08) = uVar1;
  return;
}


// ==== FUN_001d7360 @ 001d7360 ====

void FUN_001d7360(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_2 == 0) {
    FUN_001d6e78(param_1,*(undefined4 *)(iVar1 + 0x1be4),*(undefined8 *)(iVar1 + 0x2b0),1);
  }
  else if (*(int *)(iVar1 + 0x1be0) != *(int *)(iVar1 + 0x1bf0)) {
    *(int *)(iVar1 + 0x1be4) = *(int *)(iVar1 + 0x1be0);
    *(undefined8 *)(iVar1 + 0x2b0) = *(undefined8 *)(iVar1 + 0x2a8);
    FUN_001d6e78(param_1,*(int *)(iVar1 + 0x1bf0),0x730544c7b701e000,0);
  }
  return;
}


// ==== FUN_001d73d8 @ 001d73d8 ====

void FUN_001d73d8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1be0) != *(int *)(iVar1 + 0x1be8)) {
    *(int *)(iVar1 + 0x1be4) = *(int *)(iVar1 + 0x1be0);
    *(undefined1 *)(iVar1 + 0x1c45) = *(undefined1 *)(iVar1 + 0x1c44);
    *(undefined8 *)(iVar1 + 0x2b0) = *(undefined8 *)(iVar1 + 0x2a8);
    FUN_001d6e78(param_1,*(int *)(iVar1 + 0x1be8),0x73055bea7dc80000,0);
  }
  FUN_001f0678(*(undefined4 *)(iVar1 + 0x1be0));
  *(undefined4 *)(iVar1 + 0x1c28) = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
  return;
}


// ==== FUN_001d7460 @ 001d7460 ====

undefined4 FUN_001d7460(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(char *)(param_1 + 0x2f) == '\0') {
      *(undefined1 *)(param_1 + 0x2f) = 1;
      return *(undefined4 *)(param_1 + 0x20);
    }
    param_1 = param_1 + 0x10;
  } while (iVar1 < 2);
  return 0;
}


// ==== FUN_001d7498 @ 001d7498 ====

void FUN_001d7498(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_1 + 0x2f);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(puVar2 + -0xf) == param_2) {
      *puVar2 = 0;
      return;
    }
    puVar2 = puVar2 + 0x10;
  } while (iVar1 < 2);
  return;
}


// ==== FUN_001d74c8 @ 001d74c8 ====

undefined4 FUN_001d74c8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(char *)((int)param_1 + 0xf) == '\0') {
      *(undefined1 *)((int)param_1 + 0xf) = 1;
      return *param_1;
    }
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return 0;
}


// ==== FUN_001d7500 @ 001d7500 ====

/* Strings referenciadas:
     "*click*" */

void FUN_001d7500(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 auStack_f0 [80];
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_4c;
  undefined8 auStack_40 [2];
  
  if (*(int *)(param_1 + 0x1c40) < 1) {
    *(undefined4 *)(param_1 + 0x1c40) = 3;
    FUN_001f02c8(0x3f7678);
    auStack_40[0] = 0x5fa7a564f24ce600;
    uStack_4c = 0;
    lVar3 = FUN_00280200(DAT_0040f510,auStack_40,0);
    if (*(int *)(param_1 + 0x1be0) != 0) {
      puVar2 = (undefined4 *)FUN_001d6178();
      uVar1 = *puVar2;
      if (lVar3 != 0) {
        uStack_4c = 0x4c;
        uStack_9c = 0x3f800000;
        uStack_90 = 0;
        iStack_a0 = (int)lVar3;
        *(uint *)(*(int *)(iStack_a0 + 0x18) + 0x54) =
             *(uint *)(*(int *)(iStack_a0 + 0x18) + 0x54) & 0xfffffffd;
        FUN_00283e78(uVar1,auStack_f0,0);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c40) = 3;
  }
  return;
}


// ==== FUN_001d75e0 @ 001d75e0 ====

void FUN_001d75e0(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = (undefined4 *)(param_1 + 0x90);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined1 *)(param_1 + 0x70) = 4;
  *(undefined4 *)(param_1 + 100) = 16000;
  *(int *)(param_1 + 0xa0) = (int)param_3;
  *(int *)(param_1 + 0xa4) = (int)param_4;
  *(int *)(param_1 + 0x6c) = (int)param_4;
  *(undefined **)(param_1 + 0x68) = &DAT_004092d0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_00285980(*(undefined4 *)(DAT_0040f510 + 0xcbf4),1,0,param_3,param_4);
  FUN_00328c08(*(undefined4 *)(DAT_0040f510 + 0xcba8),param_1 + 100,param_1 + 100,0,param_1 + 8);
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffbf;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


// ==== FUN_001d76e8 @ 001d76e8 ====

undefined4 FUN_001d76e8(undefined8 param_1,int param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  puVar7 = (undefined2 *)param_1;
  switch(*(undefined4 *)(puVar7 + 0x54)) {
  case 0:
  case 3:
    *(undefined8 *)(puVar7 + 0x40) = param_4;
    FUN_00272488(param_4,auStack_110);
    lVar4 = FUN_00280160(DAT_0040f510,auStack_110);
    iVar6 = (int)lVar4;
    *(int *)(puVar7 + 0x44) = iVar6;
    if (lVar4 == 0) {
      uStack_ac = 0;
      iVar6 = 0;
      uStack_b0 = 0;
      uVar2 = FUN_002802a8(DAT_0040f510,&uStack_b0);
      *(undefined4 *)(puVar7 + 0x44) = uVar2;
      *(int *)(puVar7 + 0x58) = (int)param_3;
      if (0 < param_3) {
        puVar8 = (undefined4 *)(puVar7 + 0x46);
        do {
          iVar6 = iVar6 + 1;
          uVar2 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
          *puVar8 = uVar2;
          puVar8 = puVar8 + 1;
        } while (iVar6 < *(int *)(puVar7 + 0x58));
      }
      uStack_dc = *(undefined4 *)(param_2 + 8);
      uStack_d0 = 4;
      uStack_e8 = 0x20;
      uStack_d4 = 0x30;
      uStack_fc = 0;
      iStack_f0 = param_2;
      FUN_00313b18(&uStack_100);
      *(undefined4 *)(*(int *)(puVar7 + 0x44) + 0x1038) = uStack_100;
      *puVar7 = 0;
      uVar1 = *(uint *)(param_2 + 0x14);
      puVar7[2] = 16000;
      *(undefined4 *)(puVar7 + 0x4a) = *(undefined4 *)(puVar7 + 0x46);
      puVar7[1] = (short)(uVar1 >> 0xb);
      *(undefined4 *)(puVar7 + 0x54) = 1;
      puVar7[3] = 0;
      puVar7[0x5b] = 0;
      puVar7[0x5a] = 0;
      *(undefined4 *)(puVar7 + 0x4c) = 0;
      *(undefined4 *)(puVar7 + 0x4e) = 0;
      goto switchD_001d7740_caseD_1;
    }
    *(int *)(iVar6 + 0x1024) = *(int *)(iVar6 + 0x1024) + 1;
    break;
  case 1:
switchD_001d7740_caseD_1:
    if ((*(int *)(puVar7 + 0x4a) != 0) &&
       (lVar4 = FUN_001d7c20(*(int *)(puVar7 + 0x4a),param_4,param_1,puVar7[0x5b],7,0), lVar4 != 0))
    {
      uVar2 = *(undefined4 *)(*(int *)(puVar7 + 0x4a) + 0x1c);
      *(int *)(puVar7 + 0x4e) = *(int *)(puVar7 + 0x4a);
      *(undefined4 *)(puVar7 + 0x4a) = 0;
      puVar7[0x5b] = puVar7[0x5b] + (short)uVar2;
    }
    lVar4 = FUN_001d7b98(param_1);
    if (lVar4 == 0) {
      if (*(int *)(puVar7 + 0x4c) == 0) {
        iVar6 = *(int *)(puVar7 + 0x4e);
      }
      else {
        puVar7[0x5a] = puVar7[0x5a] + (short)*(undefined4 *)(*(int *)(puVar7 + 0x4c) + 0x1c);
        FUN_001d7cc0();
        *(undefined4 *)(puVar7 + 0x4c) = 0;
        iVar6 = *(int *)(puVar7 + 0x4e);
      }
      if (iVar6 == 0) {
        iVar6 = *(int *)(puVar7 + 0x4a);
      }
      else if (*(int *)(puVar7 + 0x4c) == 0) {
        *(int *)(puVar7 + 0x4c) = iVar6;
        *(undefined4 *)(puVar7 + 0x4e) = 0;
        FUN_0031d528(puVar7 + 4,(int)(short)puVar7[0x5a] << 0xb,*(undefined4 *)(iVar6 + 8),
                     (int)*(short *)(iVar6 + 0x20) << 0xb);
        iVar6 = *(int *)(puVar7 + 0x4a);
      }
      else {
        iVar6 = *(int *)(puVar7 + 0x4a);
      }
    }
    else {
      iVar6 = *(int *)(puVar7 + 0x4a);
    }
    if (iVar6 == 0) {
      if (*(int *)(puVar7 + 0x4e) == 0) {
        iVar6 = 0;
        if (((long)(short)puVar7[0x5b] < (long)(ulong)(ushort)puVar7[1]) &&
           (0 < *(int *)(puVar7 + 0x58))) {
          iVar3 = *(int *)(puVar7 + 0x46);
          while (iVar6 = iVar6 + 1, iVar3 == *(int *)(puVar7 + 0x4c)) {
            if (*(int *)(puVar7 + 0x58) <= iVar6) goto LAB_001d7978;
            iVar3 = *(int *)(puVar7 + iVar6 * 2 + 0x46);
          }
          *(int *)(puVar7 + 0x4a) = iVar3;
        }
LAB_001d7978:
        uVar5 = (ulong)(short)puVar7[0x5a];
      }
      else {
        uVar5 = (ulong)(short)puVar7[0x5a];
      }
    }
    else {
      uVar5 = (ulong)(short)puVar7[0x5a];
    }
    if (uVar5 != (ushort)puVar7[1]) {
      return 0;
    }
    iVar6 = 0;
    if (0 < *(int *)(puVar7 + 0x58)) {
      puVar8 = (undefined4 *)(puVar7 + 0x46);
      do {
        iVar6 = iVar6 + 1;
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),uVar2);
      } while (iVar6 < *(int *)(puVar7 + 0x58));
    }
    uStack_a0 = *(undefined4 *)(puVar7 + 0x50);
    uStack_9c = *(undefined4 *)(puVar7 + 0x52);
    uStack_98 = 0;
    FUN_00313e60(*(undefined4 *)(*(int *)(puVar7 + 0x44) + 0x1038),&uStack_a0);
    FUN_00313948(*(undefined4 *)(*(int *)(puVar7 + 0x44) + 0x1038));
    FUN_00282a40(*(undefined4 *)(puVar7 + 0x44),0);
    FUN_00272488(*(undefined8 *)(puVar7 + 0x40),auStack_110);
    strcpy(*(int *)(puVar7 + 0x44) + 0xff0,auStack_110);
    break;
  default:
    goto switchD_001d7740_caseD_2;
  }
  *(undefined4 *)(puVar7 + 0x54) = 2;
switchD_001d7740_caseD_2:
  return 1;
}


// ==== FUN_001d7a60 @ 001d7a60 ====

undefined4 FUN_001d7a60(int param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    goto switchD_001d7aa0_caseD_0;
  case 1:
    iVar2 = *(int *)(param_1 + 0xb0);
    iVar4 = 0;
    if (0 < iVar2) {
      puVar3 = (undefined4 *)(param_1 + 0x8c);
      do {
        lVar1 = FUN_001d7cc0(*puVar3);
        iVar4 = iVar4 + 1;
        if (lVar1 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0xb0);
        puVar3 = puVar3 + 1;
      } while (iVar4 < iVar2);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      puVar3 = (undefined4 *)(param_1 + 0x8c);
      do {
        iVar4 = iVar4 + 1;
        FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*puVar3);
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (iVar4 < *(int *)(param_1 + 0xb0));
    }
    break;
  case 2:
    break;
  default:
    goto switchD_001d7aa0_caseD_3;
  }
  iVar2 = *(int *)(param_1 + 0x88);
  if (*(int *)(iVar2 + 0x1024) == 0) {
    (**(code **)(*(int *)(iVar2 + 0x1030) + 0x24))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x1030) + 0x20));
    FUN_00280320(DAT_0040f510,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
switchD_001d7aa0_caseD_0:
    *(undefined4 *)(param_1 + 0xa8) = 3;
  }
  else {
    *(int *)(iVar2 + 0x1024) = *(int *)(iVar2 + 0x1024) + -1;
  }
switchD_001d7aa0_caseD_3:
  return 1;
}


// ==== FUN_001d7b98 @ 001d7b98 ====

bool FUN_001d7b98(void)

{
  long lVar1;
  
  lVar1 = FUN_00324f98();
  return lVar1 != 0;
}


// ==== FUN_001d7bb8 @ 001d7bb8 ====

void FUN_001d7bb8(int param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_2;
  FUN_0027fcf8(*(undefined4 *)(param_1 + 0x88),auStack_20,0);
  return;
}


// ==== FUN_001d7be0 @ 001d7be0 ====

void FUN_001d7be0(int param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  iVar1 = (int)param_3 + 0x7ff;
  if (-1 < param_3) {
    iVar1 = (int)param_3;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(short *)(param_1 + 0x20) = (short)(iVar1 >> 0xb);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// ==== FUN_001d7c20 @ 001d7c20 ====

undefined4
FUN_001d7c20(undefined8 *param_1,undefined8 param_2,int param_3,short param_4,undefined4 param_5,
            undefined1 param_6)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)((int)param_1 + 0x14);
  if (iVar2 != 3) {
    if (3 < iVar2) {
      if (iVar2 == 4) {
        return 1;
      }
      return 0;
    }
    if (iVar2 != 1) {
      return 0;
    }
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 2) = param_5;
    *(undefined1 *)((int)param_1 + 0x25) = param_6;
    *(int *)((int)param_1 + 0xc) = param_3;
    *(short *)((int)param_1 + 0x22) = param_4;
    uVar1 = *(ushort *)(param_3 + 2);
    *(undefined4 *)((int)param_1 + 0x14) = 3;
    lVar4 = (long)(int)((uint)uVar1 - (int)param_4);
    lVar3 = (long)*(short *)(param_1 + 4);
    if (lVar4 <= *(short *)(param_1 + 4)) {
      lVar3 = lVar4;
    }
    *(int *)(param_1 + 3) = (int)lVar3;
  }
  if (*(int *)(param_1 + 3) == 0) {
    *(undefined4 *)((int)param_1 + 0x14) = 4;
    return 1;
  }
  return 0;
}


// ==== FUN_001d7cc0 @ 001d7cc0 ====

undefined4 FUN_001d7cc0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x14);
  if (iVar1 == 3) {
    if (*(int *)(param_1 + 3) != 0) {
      if (*(char *)((int)param_1 + 0x24) != '\0') {
        return 0;
      }
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  else {
    if (iVar1 < 4) {
      if (iVar1 == 1) {
        return 1;
      }
      return 0;
    }
    if (iVar1 != 4) {
      return 0;
    }
  }
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 1;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  return 1;
}


// ==== FUN_001d7d40 @ 001d7d40 ====

void FUN_001d7d40(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[0xb4] = param_2;
  iVar1 = FUN_00107d20(param_2 * 0x28);
  iVar5 = 0;
  piVar3 = param_1;
  if (0 < param_1[0xb4]) {
    do {
      piVar3[1] = iVar1;
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0x28;
      piVar3 = piVar3 + 1;
    } while (iVar5 < param_1[0xb4]);
  }
  piVar4 = param_1 + 0x41;
  piVar2 = param_1 + 1;
  piVar3 = piVar4;
  if ((((uint)piVar2 | (uint)piVar4) & 7) == 0) {
    do {
      uVar6 = *(undefined8 *)(piVar2 + 2);
      uVar7 = *(undefined8 *)(piVar2 + 4);
      uVar8 = *(undefined8 *)(piVar2 + 6);
      *(undefined8 *)piVar3 = *(undefined8 *)piVar2;
      *(undefined8 *)(piVar3 + 2) = uVar6;
      *(undefined8 *)(piVar3 + 4) = uVar7;
      *(undefined8 *)(piVar3 + 6) = uVar8;
      piVar2 = piVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (piVar2 != piVar4);
  }
  else {
    do {
      uVar6 = *(undefined8 *)(piVar2 + 2);
      uVar7 = *(undefined8 *)(piVar2 + 4);
      uVar8 = *(undefined8 *)(piVar2 + 6);
      *(undefined8 *)piVar3 = *(undefined8 *)piVar2;
      *(undefined8 *)(piVar3 + 2) = uVar6;
      *(undefined8 *)(piVar3 + 4) = uVar7;
      *(undefined8 *)(piVar3 + 6) = uVar8;
      piVar2 = piVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (piVar2 != piVar4);
  }
  piVar2 = param_1 + 0x82;
  param_1[0x90] = 2;
  param_1[0x8a] = 1;
  param_1[0x96] = 3;
  param_1[0x9c] = 4;
  param_1[0xa2] = 5;
  param_1[0xa8] = 7;
  param_1[0xae] = 9;
  *(undefined1 *)param_1 = 0;
  param_1[0x84] = 0;
  piVar3 = param_1;
  do {
    *(undefined1 *)((int)piVar3 + 0x219) = 0;
    *(undefined1 *)((int)piVar3 + 0x21a) = 0;
    *(undefined1 *)(piVar3 + 0x86) = 0;
    piVar3[0x85] = 0;
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar3[0x87] = -1;
    piVar2 = piVar2 + 6;
    piVar3 = piVar3 + 6;
  } while ((int)piVar2 < (int)(param_1 + 0xb2));
  param_1[0xb2] = 0;
  param_1[0xb5] = 1;
  param_1[0xb3] = 0;
  return;
}


// ==== FUN_001d7ec8 @ 001d7ec8 ====

undefined4 FUN_001d7ec8(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 2;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  return 1;
}


// ==== FUN_001d7ee0 @ 001d7ee0 ====

/* Strings referenciadas:
     "Sound\Streams\"
     "chars\guns\"
     "AMBIENCE"
     "levels\level_%02i\%s%s"
     "DESTRUCT"
     "LVLSPCH"
     "levels\level_%02i\spch_%s%s"
     "MUSIC"
     "levels\level_%02i\Music%s"
     "GLBLSPCH"
     "levels\global\speech%s"
     "Levels\Level_%02u\fpguns\%s%s"
     ... */

void FUN_001d7ee0(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  char *pcVar10;
  undefined *puVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  undefined1 auStack_1c0 [256];
  undefined1 auStack_c0 [16];
  int iStack_b0;
  
  iStack_b0 = 0;
  iVar14 = (int)param_1;
  iVar5 = *(int *)(iVar14 + 0x2c8);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar14 + 0x2d0);
  }
  else {
    if (*(char *)(iVar5 + 0x10) == '\0') {
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar5 = *(int *)(iVar14 + 0x2c8);
      }
      else {
        *(undefined1 *)(*(int *)(iVar5 + 0xc) + 0x24) = 0;
        iVar5 = *(int *)(*(int *)(iVar14 + 0x2c8) + 0xc);
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x18);
        *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x2c8) + 0xc) + 0x18) = 0;
        *(undefined4 *)(*(int *)(iVar14 + 0x2c8) + 0xc) = 0;
        *(undefined4 *)(iVar14 + 0x2c8) = 0;
        iVar5 = *(int *)(iVar14 + 0x2c8);
      }
    }
    else {
      iVar5 = *(int *)(iVar14 + 0x2c8);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar14 + 0x2d0);
    }
    else {
      if (*(int *)(iVar5 + 0xc) != 0) {
        return;
      }
      iVar5 = *(int *)(iVar14 + 0x2d0);
    }
  }
  do {
    iVar12 = 1;
    bVar13 = false;
    if (1 < iVar5) {
      piVar8 = (int *)(iVar14 + 0x104);
      do {
        iVar5 = *piVar8;
        if (*(int *)(piVar8[1] + 0x10) < *(int *)(iVar5 + 0x10)) {
          *piVar8 = piVar8[1];
          bVar13 = true;
          piVar8[1] = iVar5;
          iVar5 = *(int *)(iVar14 + 0x2d0);
        }
        else {
          iVar5 = *(int *)(iVar14 + 0x2d0);
        }
        iVar12 = iVar12 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar12 < iVar5);
    }
  } while (bVar13);
  iVar12 = 0;
  if (0 < iVar5) {
    iVar4 = 0;
    do {
      plVar2 = *(long **)(iVar14 + iVar4 + 0x104);
      if ((int)plVar2[3] != 0) {
        if (8 < (int)plVar2[2]) {
          if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
             (bVar13 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
            bVar13 = true;
          }
          if (bVar13) goto LAB_001d8394;
        }
        if ((*(char *)(DAT_0040f4c4 + 0x9f8) != '\0') ||
           (bVar13 = false, *(char *)(DAT_0040f4c4 + 0x9f9) != '\0')) {
          bVar13 = true;
        }
        if (!bVar13) {
          puVar6 = auStack_c0;
          FUN_002726d0(*plVar2,puVar6);
          iVar5 = FUN_001d8428(param_1,(int)plVar2[2]);
          *(int *)(iVar14 + 0x2c8) = iVar5;
          if (*(uint *)(iVar5 + 0x14) != (uint)*(byte *)(DAT_0040f0e0 + 0x2020c)) {
            *(uint *)(iVar5 + 0x14) = (uint)*(byte *)(DAT_0040f0e0 + 0x2020c);
            iStack_b0 = 1;
          }
          lVar7 = strcmp(puVar6,0x3f76e0);
          if ((lVar7 == 0) || (lVar7 = strcmp(puVar6,0x3f7708), lVar7 == 0)) {
            sprintf(auStack_1c0,0x3f76f0,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),puVar6,
                    PTR_DAT_003bd2c8);
            plVar9 = *(long **)(iVar14 + 0x2c8);
            goto LAB_001d8298;
          }
          lVar7 = strcmp(puVar6,0x3f7718);
          if (lVar7 == 0) {
            bVar1 = *(byte *)(DAT_0040f0e0 + 0x2020c);
            puVar6 = (undefined1 *)
                     FUN_001e5408(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),DAT_0040eae4)
            ;
            pcVar10 = "levels\\level_%02i\\spch_%s%s";
            puVar3 = PTR_DAT_003bd2c8;
            puVar11 = (undefined *)(uint)bVar1;
          }
          else {
            lVar7 = strcmp(puVar6,0x3f7740);
            if (lVar7 == 0) {
              sprintf(auStack_1c0,0x3f7748,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),PTR_DAT_003bd2c8)
              ;
              plVar9 = *(long **)(iVar14 + 0x2c8);
              goto LAB_001d8298;
            }
            lVar7 = strcmp(puVar6,0x3f7768);
            if (lVar7 == 0) {
              sprintf(auStack_1c0,0x3f7778,PTR_DAT_003bd2c8);
              plVar9 = *(long **)(iVar14 + 0x2c8);
              goto LAB_001d8298;
            }
            lVar7 = FUN_00360a50(puVar6,0x40da00);
            if (lVar7 != 0) {
              sprintf(auStack_1c0,0x3f7790,*(undefined1 *)(DAT_0040f4d0 + 0x5aac),puVar6,
                      PTR_DAT_003bd2b4);
              plVar9 = *(long **)(iVar14 + 0x2c8);
              goto LAB_001d8298;
            }
            lVar7 = FUN_00360a50(puVar6,0x3f77b0);
            if ((lVar7 == 0) && (lVar7 = FUN_00360a50(puVar6,0x3f77c0), lVar7 == 0)) {
              sprintf(auStack_1c0,0x3f77b8,PTR_s_Sound_Streams__003bd2ac,puVar6,PTR_DAT_003bd2c8);
              plVar9 = *(long **)(iVar14 + 0x2c8);
              goto LAB_001d8298;
            }
            pcVar10 = "%s%s%s";
            puVar3 = PTR_DAT_003bd2b4;
            puVar11 = PTR_s_chars_guns__003bd2b0;
          }
          sprintf(auStack_1c0,pcVar10,puVar11,puVar6,puVar3);
          plVar9 = *(long **)(iVar14 + 0x2c8);
LAB_001d8298:
          if (*(char *)((int)plVar9 + 0x11) == '\0') {
            FUN_00109410(DAT_0040f4c4,auStack_1c0,(int)plVar2[2],0x1d83d0,param_1);
            **(long **)(iVar14 + 0x2c8) = *plVar2;
            *(undefined1 *)(*(int *)(iVar14 + 0x2c8) + 0x11) = 1;
            iVar5 = *(int *)(iVar14 + 0x2c8);
          }
          else {
            if ((*plVar9 != *plVar2) || (iStack_b0 != 0)) {
              if (*(char *)((int)plVar9 + 0x12) != '\0') {
                return;
              }
              *(undefined1 *)((int)plVar9 + 0x12) = 1;
              FUN_00109468(DAT_0040f4c4,(int)plVar2[2],0x1d83f8,param_1);
              return;
            }
            if (*(char *)((int)plVar9 + 0x12) != '\0') {
              return;
            }
            iVar5 = *(int *)(iVar14 + 0x2c8);
          }
          *(long **)(iVar5 + 0xc) = plVar2;
          *(undefined1 *)(*(int *)(iVar14 + 0x2c8) + 0x10) = 1;
          *(undefined1 *)(*(int *)(*(int *)(iVar14 + 0x2c8) + 0xc) + 0x24) = 1;
          iVar5 = *(int *)(*(int *)(iVar14 + 0x2c8) + 0xc);
          FUN_00109488(DAT_0040f4c4,*(undefined4 *)(*(int *)(iVar14 + 0x2c8) + 8),
                       *(undefined4 *)(iVar5 + 8),(int)*(short *)(iVar5 + 0x20) << 0xb,
                       ((int)*(short *)(iVar5 + 0x22) + (uint)**(ushort **)(iVar5 + 0xc)) * 0x800,
                       *(int *)(iVar5 + 0x18) << 0xb);
          return;
        }
      }
LAB_001d8394:
      iVar12 = iVar12 + 1;
      iVar4 = iVar12 * 4;
    } while (iVar12 < iVar5);
  }
  return;
}


// ==== FUN_001d83d0 @ 001d83d0 ====

void FUN_001d83d0(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_001d8428(param_2,*(undefined4 *)(param_1 + 0x10));
  *(undefined1 *)(iVar1 + 0x10) = 0;
  return;
}


// ==== FUN_001d83f8 @ 001d83f8 ====

void FUN_001d83f8(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_001d8428(param_2,*(undefined4 *)(param_1 + 0x10));
  *(undefined1 *)(iVar1 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  return;
}


// ==== FUN_001d8428 @ 001d8428 ====

int FUN_001d8428(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == *(int *)(param_1 + 0x210)) {
    param_1 = param_1 + 0x208;
  }
  else {
    iVar2 = 1;
    do {
      if (7 < iVar2) {
        return 0;
      }
      iVar1 = iVar2 * 0x18;
      iVar2 = iVar2 + 1;
    } while (param_2 != *(int *)(param_1 + iVar1 + 0x210));
    param_1 = param_1 + iVar1 + 0x208;
  }
  return param_1;
}


// ==== FUN_001d8478 @ 001d8478 ====

int FUN_001d8478(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < param_1[0xb4]) {
    do {
      piVar1 = piVar1 + 1;
      if (*(char *)(*piVar1 + 0x26) == '\0') {
        *(undefined1 *)(*piVar1 + 0x26) = 1;
        return *piVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0xb4]);
  }
  return 0;
}


// ==== FUN_001d84c8 @ 001d84c8 ====

void FUN_001d84c8(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x26) = 0;
  return;
}


// ==== FUN_001d84d0 @ 001d84d0 ====

void FUN_001d84d0(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    iVar3 = 0;
    pcVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x2d0)) {
      do {
        iVar3 = iVar3 + 1;
        uVar2 = FUN_0036cd08(0,0x8000,0);
        FUN_001d7be0(*(undefined4 *)(pcVar1 + 4),uVar2,0x8000);
        pcVar1 = pcVar1 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x2d0));
    }
    *param_1 = '\x01';
  }
  return;
}


// ==== FUN_001d8560 @ 001d8560 ====

void FUN_001d8560(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_00107cf8(0x30);
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0x84) = iVar1;
  *(undefined **)(iVar1 + 0x2c) = &DAT_003e08d0;
  (*(code *)PTR_FUN_003e08dc)(iVar1 + DAT_003e08d8);
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 0x74) = 0xffffffff;
  FUN_00384700(0x3f800000,param_1);
  *(undefined1 *)(iVar3 + 0x8d) = 0;
  iVar1 = 1;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  puVar2 = (undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(iVar3 + 100) = 0;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  return;
}


// ==== FUN_001d8600 @ 001d8600 ====

undefined4 FUN_001d8600(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  switch(*(undefined4 *)(iVar5 + 0x68)) {
  case 0:
  case 8:
    iVar3 = *(int *)(*(int *)(iVar5 + 0x84) + 0x2c);
    lVar2 = (**(code **)(iVar3 + 0x14))
                      (*(int *)(iVar5 + 0x84) + (int)*(short *)(iVar3 + 0x10),param_2,param_3,
                       0xb936093923ccd843);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(char *)(iVar5 + 0x8d) != '\0') {
      FUN_001d8d68(param_1,param_1,*(undefined4 *)(iVar5 + 0x5c),*(undefined4 *)(iVar5 + 0x60));
    }
    *(undefined4 *)(iVar5 + 0x88) = param_4;
    *(undefined4 *)(iVar5 + 0x74) = 0xffffffff;
    if (0 < param_3) {
      puVar4 = (undefined4 *)(iVar5 + 0x50);
      iVar3 = param_3;
      do {
        uVar1 = *param_2;
        iVar3 = iVar3 + -1;
        param_2 = param_2 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
    *(int *)(iVar5 + 0x58) = param_3;
    *(undefined4 *)(iVar5 + 0x68) = 1;
  case 1:
    *(undefined4 *)(iVar5 + 100) = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    *(undefined4 *)(iVar5 + 100) = 0;
    FUN_001d8cf8(param_1);
  }
  return 1;
}


// ==== FUN_001d8728 @ 001d8728 ====

void FUN_001d8728(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_190 [136];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  undefined1 auStack_e0 [136];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined1 uStack_35;
  
  uStack_ec = 0;
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
  case 8:
    goto switchD_001d8760_caseD_0;
  case 1:
  case 2:
switchD_001d8760_caseD_1:
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
    (**(code **)(iVar2 + 0x34))
              (*(undefined4 *)(param_1 + 0x80),
               *(int *)(param_1 + 0x84) + (int)*(short *)(iVar2 + 0x30));
    break;
  case 3:
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    if (((iVar2 == 3) || (iVar2 == 5)) || (bVar3 = false, iVar2 == 8)) {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x68) = 4;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
      goto switchD_001d8760_caseD_4;
    }
    FUN_001d9250(*(undefined4 *)(param_1 + 0x84));
    break;
  case 4:
switchD_001d8760_caseD_4:
    lVar4 = FUN_001d9100(*(undefined4 *)(param_1 + 0x84),**(undefined8 **)(param_1 + 0x88),
                         *(int *)(*(undefined8 **)(param_1 + 0x88) + 3) +
                         *(int *)(param_1 + 0x70) * 8);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x68) = 5;
      goto switchD_001d8760_caseD_5;
    }
    break;
  case 5:
switchD_001d8760_caseD_5:
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 == 0) {
      uStack_e7 = *(undefined1 *)(param_1 + 0x8c);
      uStack_e4 = 1;
      uStack_104 = DAT_003bd2bc;
      uStack_100 = DAT_003bd2b8;
      uStack_fc = DAT_003bd2c0;
      uStack_f4 = DAT_003bd2c4;
      uStack_e5 = DAT_0040da02;
      uStack_e8 = 0x11;
      uStack_ec = 0xc01800;
      uStack_108 = DAT_003bd2b8;
      uStack_f8 = DAT_003bd2c4;
      iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
      (**(code **)(iVar2 + 0x34))
                (*(undefined4 *)(param_1 + 0x80),
                 *(int *)(param_1 + 0x84) + (int)*(short *)(iVar2 + 0x30));
      FUN_001d91f0(*(undefined4 *)(param_1 + 0x84),auStack_190,0);
      *(undefined4 *)(param_1 + 0x68) = 6;
      goto switchD_001d8760_caseD_6;
    }
    if (iVar2 == 1) break;
    if (iVar2 == 3) {
      uVar1 = *(undefined4 *)(param_1 + 0x84);
LAB_001d88b8:
      FUN_001d9250(uVar1);
      *(int *)(param_1 + 0x68) = iVar2;
      break;
    }
    if (iVar2 == 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      goto LAB_001d88b8;
    }
    iVar2 = *(int *)(param_1 + 0x84);
    goto LAB_001d88cc;
  case 6:
switchD_001d8760_caseD_6:
    iVar2 = *(int *)(param_1 + 0x84);
LAB_001d88cc:
    (**(code **)(*(int *)(iVar2 + 0x2c) + 0x34))
              (*(undefined4 *)(param_1 + 0x80),iVar2 + *(short *)(*(int *)(iVar2 + 0x2c) + 0x30));
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    if (((iVar2 == 3) || (iVar2 == 5)) || (bVar3 = false, iVar2 == 8)) {
      bVar3 = true;
    }
    if (bVar3) {
LAB_001d8978:
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x68) = 2;
    }
    break;
  case 7:
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    if (((iVar2 == 3) || (iVar2 == 5)) || (bVar3 = false, iVar2 == 8)) {
      bVar3 = true;
    }
    if (!bVar3) {
      fVar5 = (*(float *)(DAT_0040f0e0 + 0x20140) - *(float *)(param_1 + 0x7c)) /
              *(float *)(param_1 + 0x78);
      if ((fVar5 < 0.0) || (1.0 <= fVar5)) {
        if (1.0 <= fVar5) {
          FUN_001d9250(*(undefined4 *)(param_1 + 0x84));
          *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x68) = 2;
          goto switchD_001d8760_caseD_1;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
        (**(code **)(iVar2 + 0x34))
                  (*(float *)(param_1 + 0x80) * (1.0 - fVar5),
                   *(int *)(param_1 + 0x84) + (int)*(short *)(iVar2 + 0x30));
      }
      break;
    }
    goto LAB_001d8978;
  }
  uStack_3c = 0;
  if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
    uStack_54 = DAT_003bd2bc;
    uStack_50 = DAT_003bd2b8;
    uStack_4c = DAT_003bd2c0;
    uStack_44 = DAT_003bd2c4;
    uStack_35 = DAT_0040da02;
    uStack_3c = 0x800000;
    uStack_58 = DAT_003bd2b8;
    uStack_48 = DAT_003bd2c4;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
  (**(code **)(iVar2 + 0x1c))(*(int *)(param_1 + 0x84) + (int)*(short *)(iVar2 + 0x18),auStack_e0);
switchD_001d8760_caseD_0:
  return;
}


// ==== FUN_001d8ad0 @ 001d8ad0 ====

undefined4 FUN_001d8ad0(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 4:
    lVar2 = FUN_001d9100(*(undefined4 *)(param_1 + 0x84),**(undefined8 **)(param_1 + 0x88),
                         *(int *)(*(undefined8 **)(param_1 + 0x88) + 3) +
                         *(int *)(param_1 + 0x70) * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x68) = 5;
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
    iVar3 = *(int *)(param_1 + 0x84);
    if ((iVar3 != 0) &&
       (lVar2 = (**(code **)(*(int *)(iVar3 + 0x2c) + 0x24))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x2c) + 0x20)), lVar2 == 0)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x68) = 8;
  case 8:
    iVar3 = 1;
    puVar1 = (undefined4 *)(param_1 + 0x54);
    do {
      *puVar1 = 0;
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar3);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    return 1;
  default:
    return 0;
  }
}


// ==== FUN_001d8bc0 @ 001d8bc0 ====

void FUN_001d8bc0(undefined4 param_1,int param_2,int param_3,undefined1 param_4,long param_5)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 0x8d) == '\0') {
    if (param_3 == -1) {
      if (param_5 == 0) {
        return;
      }
      switch(*(undefined4 *)(param_2 + 0x68)) {
      case 3:
        *(undefined4 *)(param_2 + 0x68) = 2;
        *(undefined4 *)(param_2 + 0x74) = 0xffffffff;
        break;
      case 4:
      case 5:
        *(undefined4 *)(param_2 + 0x6c) = 2;
        break;
      case 6:
        *(undefined4 *)(param_2 + 0x78) = param_1;
        uVar1 = *(undefined4 *)(DAT_0040f0e0 + 0x20140);
        *(undefined4 *)(param_2 + 0x68) = 7;
        *(undefined4 *)(param_2 + 0x7c) = uVar1;
      }
    }
    else {
      switch(*(undefined4 *)(param_2 + 0x68)) {
      case 4:
        *(int *)(param_2 + 0x74) = param_3;
        *(undefined4 *)(param_2 + 0x6c) = 3;
        *(undefined1 *)(param_2 + 0x8c) = param_4;
        break;
      case 5:
        if (*(int *)(param_2 + 0x74) == param_3) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
          return;
        }
      case 6:
      case 7:
        FUN_001d9250(*(undefined4 *)(param_2 + 0x84));
      case 1:
      case 2:
      case 3:
        *(int *)(param_2 + 0x74) = param_3;
        *(undefined4 *)(param_2 + 0x68) = 3;
        *(undefined1 *)(param_2 + 0x8c) = param_4;
        *(undefined4 *)(param_2 + 0x6c) = 0;
      }
    }
  }
  return;
}


// ==== FUN_001d8cf8 @ 001d8cf8 ====

void FUN_001d8cf8(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 4:
  case 5:
    *(undefined4 *)(param_1 + 0x6c) = 2;
    break;
  case 6:
  case 7:
    FUN_001d9250(*(undefined4 *)(param_1 + 0x84));
  case 3:
    *(undefined4 *)(param_1 + 0x68) = 2;
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  return;
}


// ==== FUN_001d8d68 @ 001d8d68 ====

undefined8 FUN_001d8d68(void)

{
  return 0;
}


// ==== FUN_001d8d70 @ 001d8d70 ====

void FUN_001d8d70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 100) == 1) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x58))) {
    puVar2 = (undefined4 *)(param_1 + 0x50);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_00280908(uVar1,0);
      if (*(int *)(param_1 + 0x58) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}


// ==== FUN_001d8de8 @ 001d8de8 ====

void FUN_001d8de8(void)

{
  return;
}


// ==== FUN_001d8df0 @ 001d8df0 ====

void FUN_001d8df0(void)

{
  return;
}


// ==== FUN_001d8df8 @ 001d8df8 ====

void FUN_001d8df8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[7] = 0;
  iVar2 = 1;
  param_1[4] = 0;
  puVar1 = param_1 + 6;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  return;
}


// ==== FUN_001d8e38 @ 001d8e38 ====

undefined4 FUN_001d8e38(int param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 3) {
    if (iVar3 < 4) {
      if (iVar3 != 0) {
        return 0;
      }
    }
    else if (iVar3 != 10) {
      return 0;
    }
    *(int *)(param_1 + 0x1c) = (int)param_3;
    iVar3 = 0;
    puVar4 = (undefined4 *)(param_1 + 0x20);
    if (0 < param_3) {
      puVar2 = (undefined4 *)(param_1 + 0x14);
      do {
        uVar1 = *param_2;
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1c));
    }
    iVar3 = 1;
    uVar1 = FUN_001d9768(*(undefined4 *)(DAT_0040f510 + 0xcbdc),param_4);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    do {
      iVar3 = iVar3 + -1;
      uVar1 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar3);
    *(undefined4 *)(param_1 + 4) = 3;
  }
  return 1;
}


// ==== FUN_001d8f38 @ 001d8f38 ====

void FUN_001d8f38(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  switch(param_1[1]) {
  case 6:
    iVar2 = (int)param_2;
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(uint *)(iVar2 + 0xa4) = *(uint *)(iVar2 + 0xa4) | 8;
    FUN_001dd158(param_1[4],param_2);
    lVar1 = FUN_001dd728(param_1[4]);
    if (lVar1 == 0) {
      param_1[1] = 7;
      goto switchD_001d8f70_caseD_7;
    }
    break;
  case 7:
switchD_001d8f70_caseD_7:
    lVar1 = FUN_001dd3e0(param_1[4]);
    if (lVar1 != 0) {
      param_1[1] = 8;
    }
  default:
  }
  return;
}


// ==== FUN_001d8fd8 @ 001d8fd8 ====

undefined4 FUN_001d8fd8(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 10:
    goto switchD_001d9018_caseD_0;
  default:
    goto switchD_001d9018_caseD_1;
  case 5:
  case 6:
    FUN_001dd6c0(*(undefined4 *)(param_1 + 0x10));
  case 3:
  case 8:
    *(undefined4 *)(param_1 + 4) = 9;
switchD_001d9018_caseD_7:
    lVar2 = FUN_001dd3e0(*(undefined4 *)(param_1 + 0x10));
    if (lVar2 == 0) {
switchD_001d9018_caseD_1:
      uVar1 = 0;
    }
    else {
      puVar3 = (undefined4 *)(param_1 + 0x20);
      iVar4 = 1;
      FUN_001d97c8(*(undefined4 *)(DAT_0040f510 + 0xcbdc),*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
      do {
        iVar4 = iVar4 + -1;
        FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*puVar3);
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (-1 < iVar4);
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x1c)) {
        puVar3 = (undefined4 *)(param_1 + 0x14);
        do {
          *puVar3 = 0;
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x1c));
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 4) = 10;
switchD_001d9018_caseD_0:
      uVar1 = 1;
    }
    return uVar1;
  case 7:
  case 9:
    goto switchD_001d9018_caseD_7;
  }
}


// ==== FUN_001d9100 @ 001d9100 ====

undefined4 FUN_001d9100(int param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 3:
  case 8:
    *(long *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0x28) = param_3;
    FUN_001d9450(*(undefined4 *)(param_1 + 0x10),param_1 + 0x20,2);
    *(undefined4 *)(param_1 + 4) = 4;
switchD_001d9144_caseD_4:
    lVar2 = FUN_001d92a0(*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0x28),param_1 + 0x14,
                         *(undefined4 *)(param_1 + 0x1c),0);
    if ((lVar2 == 0) || (*(undefined4 *)(param_1 + 4) = 5, *(int *)(param_1 + 0x28) != param_3)) {
switchD_001d9144_caseD_6:
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      if (*(long *)(param_1 + 8) == param_2) {
LAB_001d91d4:
        uVar1 = 1;
      }
    }
    return uVar1;
  case 4:
    goto switchD_001d9144_caseD_4;
  case 5:
    if ((*(int *)(param_1 + 0x28) != param_3) || (*(long *)(param_1 + 8) != param_2)) {
      *(undefined4 *)(param_1 + 4) = 7;
      goto switchD_001d9144_caseD_6;
    }
    goto LAB_001d91d4;
  default:
    goto switchD_001d9144_caseD_6;
  }
}


// ==== FUN_001d91f0 @ 001d91f0 ====

void FUN_001d91f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  *(uint *)(param_2 + 0xa4) = *(uint *)(param_2 + 0xa4) | 0x18;
  FUN_001dd5d8(param_1[4]);
  iVar1 = param_1[4];
  *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x34) = 0x3f800000;
  param_1[1] = 6;
  return;
}


// ==== FUN_001d9250 @ 001d9250 ====

void FUN_001d9250(int param_1)

{
  if (*(int *)(param_1 + 4) - 5U < 2) {
    FUN_001dd6c0(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 7;
  }
  return;
}


// ==== FUN_001d92a0 @ 001d92a0 ====

undefined4
FUN_001d92a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1;
  switch(puVar5[5]) {
  case 1:
    FUN_00382348(puVar5 + 0x1c,0x2b9d6f8);
    break;
  case 2:
    goto switchD_001d92fc_caseD_2;
  case 3:
  case 4:
    goto switchD_001d92fc_caseD_3;
  case 5:
    goto switchD_001d92fc_caseD_5;
  default:
    goto switchD_001d92fc_caseD_6;
  case 9:
    break;
  }
  if (param_6 == 0) {
    *(undefined2 *)(puVar5 + 0x1a) = 0;
  }
  else {
    iVar4 = puVar5[0x1c] * 0x10000 + ((int)puVar5[0x1c] >> 0x10);
    puVar5[0x1c] = iVar4;
    iVar4 = iVar4 + puVar5[0x1d];
    puVar5[0x1c] = iVar4;
    puVar5[0x1d] = puVar5[0x1d] + iVar4;
    if ((int)puVar5[0x1c] < 0) {
      uVar1 = *(ushort *)((int)param_3 + 2);
    }
    else {
      uVar1 = *(ushort *)((int)param_3 + 2);
    }
    *(short *)(puVar5 + 0x1a) =
         (short)(((int)((float)(uint)puVar5[0x1c] * 2.3283064e-10 * (float)uVar1) & 0xffffU) / 0x20
                << 5);
  }
  puVar5[5] = 2;
switchD_001d92fc_caseD_2:
  lVar3 = FUN_001d7c20(*puVar5,param_2,param_3,*(undefined2 *)(puVar5 + 0x1a),puVar5[6],0);
  if (lVar3 == 0) {
switchD_001d92fc_caseD_6:
    uVar2 = 0;
  }
  else {
    puVar5[5] = 3;
switchD_001d92fc_caseD_3:
    lVar3 = FUN_001dcf70(param_1,*puVar5,puVar5 + 1,puVar5[4],param_4,param_5);
    uVar2 = 0;
    if (lVar3 != 0) {
switchD_001d92fc_caseD_5:
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_001d9450 @ 001d9450 ====

void FUN_001d9450(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_3 == 0) || (param_2 == (undefined4 *)0x0)) {
    iVar3 = 0;
    puVar2 = param_1;
    if (0 < (int)param_1[4]) {
      do {
        iVar3 = iVar3 + 1;
        FUN_001d7cc0(*puVar2);
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
    param_1[4] = 0;
  }
  else {
    param_1[4] = (int)param_3;
    iVar3 = 0;
    puVar2 = param_1;
    if (0 < param_3) {
      do {
        uVar1 = *param_2;
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
  }
  return;
}


// ==== FUN_001d94f8 @ 001d94f8 ====

void FUN_001d94f8(int *param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  iVar4 = 0;
  param_1[3] = param_5;
  param_1[1] = param_3;
  puVar7 = param_2;
  if (0 < param_3) {
    do {
      iVar5 = *(int *)(puVar7 + 2);
      if (*(int *)((int)puVar7 + 0xc) == 5) {
        iVar5 = iVar5 / 0x13 << 6;
      }
      param_3 = param_3 + -1;
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      puVar7 = puVar7 + 3;
    } while (param_3 != 0);
  }
  iVar5 = param_1[3];
  puVar7 = param_4;
  if (0 < iVar5) {
    do {
      iVar6 = *(int *)(puVar7 + 2);
      if (*(int *)((int)puVar7 + 0xc) == 5) {
        iVar6 = iVar6 / 0x13 << 6;
      }
      iVar5 = iVar5 + -1;
      if (iVar4 < iVar6) {
        iVar4 = iVar6;
      }
      puVar7 = puVar7 + 3;
    } while (iVar5 != 0);
  }
  param_1[4] = iVar4;
  iVar4 = FUN_0036cd08(0,iVar4,0);
  iVar5 = 0;
  param_1[6] = 0;
  param_1[5] = iVar4;
  iVar4 = FUN_00107d20(param_1[1] * 0x68);
  *param_1 = iVar4;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + 1;
      puVar1 = (undefined1 *)((int)param_2 + 0x14);
      uVar8 = *param_2;
      iVar6 = *param_1 + iVar4;
      puVar7 = param_2 + 1;
      iVar4 = iVar4 + 0x68;
      puVar2 = (undefined4 *)((int)param_2 + 0xc);
      puVar3 = param_2 + 2;
      param_2 = param_2 + 3;
      FUN_001dcdc0(iVar6,uVar8,*(undefined4 *)puVar7,*puVar2,*(undefined4 *)puVar3,param_1[5],
                   param_1[6],*puVar1);
    } while (iVar5 < param_1[1]);
  }
  iVar5 = 0;
  iVar4 = FUN_00107d20(param_1[3] * 0x78);
  param_1[2] = iVar4;
  if (0 < param_1[3]) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + 1;
      puVar1 = (undefined1 *)((int)param_4 + 0x14);
      uVar8 = *param_4;
      iVar6 = param_1[2] + iVar4;
      puVar7 = param_4 + 1;
      iVar4 = iVar4 + 0x78;
      puVar2 = (undefined4 *)((int)param_4 + 0xc);
      puVar3 = param_4 + 2;
      param_4 = param_4 + 3;
      FUN_001dcdc0(iVar6,uVar8,*(undefined4 *)puVar7,*puVar2,*(undefined4 *)puVar3,param_1[5],
                   param_1[6],*puVar1);
    } while (iVar5 < param_1[3]);
  }
  return;
}


// ==== FUN_001d96e8 @ 001d96e8 ====

undefined4 FUN_001d96e8(void)

{
  return 1;
}


// ==== FUN_001d96f0 @ 001d96f0 ====

void FUN_001d96f0(void)

{
  return;
}


// ==== FUN_001d9700 @ 001d9700 ====

int FUN_001d9700(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = *param_1 + iVar3;
      if (*(long *)(iVar1 + 0x28) == param_2) {
        if (*(char *)(iVar1 + 0x66) == '\0') {
          *(undefined1 *)(iVar1 + 0x66) = 1;
          return iVar1;
        }
        iVar1 = param_1[1];
      }
      else {
        iVar1 = param_1[1];
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x68;
    } while (iVar2 < iVar1);
  }
  return 0;
}


// ==== FUN_001d9760 @ 001d9760 ====

void FUN_001d9760(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


// ==== FUN_001d9768 @ 001d9768 ====

int FUN_001d9768(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 8) + iVar3;
      if (*(long *)(iVar1 + 0x28) == param_2) {
        if (*(char *)(iVar1 + 0x66) == '\0') {
          *(undefined1 *)(iVar1 + 0x66) = 1;
          return iVar1;
        }
        iVar1 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xc);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x78;
    } while (iVar2 < iVar1);
  }
  return 0;
}


// ==== FUN_001d97c8 @ 001d97c8 ====

void FUN_001d97c8(undefined8 param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


// ==== FUN_001d97d0 @ 001d97d0 ====

void FUN_001d97d0(int *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 param_8,byte param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  
  uStack_b0 = (uint)param_9;
  param_1[10] = 0;
  param_1[5] = (int)param_6;
  if ((((param_4 == 0) || (param_4 == 2)) || (param_4 == 3)) || (param_4 == 5)) {
    param_1[7] = param_5;
  }
  else {
    param_1[7] = 1;
  }
  iVar2 = 0;
  piVar3 = param_1;
  uStack_c0 = param_2;
  uStack_b8 = param_7;
  uStack_b4 = param_8;
  if (0 < param_1[7]) {
    do {
      iVar1 = FUN_00107cf8(0x100);
      *piVar3 = iVar1;
      *(undefined **)(iVar1 + 0xa0) = &DAT_003e2898;
      if (param_5 == 2) {
        if (iVar2 == 0) {
          sprintf(auStack_d0,0x3f7980,param_3,0x40da08);
        }
        else {
          if (iVar2 != 1) goto LAB_001d98e0;
          sprintf(auStack_d0,0x3f7980,param_3,0x40da10);
        }
      }
      else {
LAB_001d98e0:
        sprintf(auStack_d0,0x3f7980,param_3,0x40da18);
      }
      iVar2 = iVar2 + 1;
      FUN_001d9f78(*piVar3,uStack_c0,auStack_d0,param_4,param_6,uStack_b8,uStack_b4,uStack_b0);
      piVar3 = piVar3 + 2;
    } while (iVar2 < param_1[7]);
  }
  param_1[4] = 0;
  param_1[0xb] = 1;
  return;
}


// ==== FUN_001d9990 @ 001d9990 ====

undefined4 FUN_001d9990(undefined8 param_1,undefined8 param_2,undefined2 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = *(int *)(iVar5 + 0x2c);
  if (iVar4 != 2) {
    if (iVar4 < 3) {
      if (iVar4 != 1) {
        return 0;
      }
    }
    else {
      if (iVar4 == 3) {
        return 1;
      }
      if (iVar4 != 4) {
        return 0;
      }
    }
    FUN_001d9c00(param_1);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    FUN_001d9cd0(param_1,0);
    *(undefined4 *)(iVar5 + 0x2c) = 2;
  }
  iVar4 = *(int *)(iVar5 + 0x20);
  uVar1 = FUN_001d9c68(param_1);
  uVar2 = FUN_001d9d20(param_1,*(undefined4 *)(iVar5 + 0x20));
  lVar3 = FUN_001da1c8(*(undefined4 *)(iVar5 + iVar4 * 8),param_3,
                       *(undefined4 *)(iVar4 * 4 + param_4),uVar1,*(undefined4 *)(iVar5 + 0x14),
                       uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  iVar4 = *(int *)(iVar5 + 0x20) + 1;
  *(int *)(iVar5 + 0x20) = iVar4;
  if (*(int *)(iVar5 + 0x1c) <= iVar4) {
    *(undefined4 *)(iVar5 + 0x2c) = 3;
    return 1;
  }
  FUN_001d9cd0(param_1);
  return 0;
}


// ==== FUN_001d9ab8 @ 001d9ab8 ====

void FUN_001d9ab8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  puVar5 = param_1;
  if (0 < (int)param_1[7]) {
    do {
      uVar1 = *puVar5;
      FUN_001da5c8(uVar1,param_2);
      lVar2 = FUN_001daad0(uVar1);
      if (lVar2 != 0) {
        FUN_001d9cd0(param_1,iVar4);
        lVar2 = FUN_001d9c68(param_1,iVar4);
        if (lVar2 != 0) {
          uVar3 = FUN_001d9d20(param_1,iVar4);
          FUN_001da8d8(uVar1,lVar2,param_1[5],uVar3);
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < (int)param_1[7]);
  }
  return;
}


// ==== FUN_001d9b88 @ 001d9b88 ====

undefined4 FUN_001d9b88(undefined4 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = param_1;
  if (0 < (int)param_1[7]) {
    do {
      lVar1 = FUN_001da848(*puVar2);
      if (lVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar3 < (int)param_1[7]);
  }
  param_1[10] = 0;
  param_1[0xb] = 4;
  return 1;
}


// ==== FUN_001d9c00 @ 001d9c00 ====

void FUN_001d9c00(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  iVar1 = param_2[1];
  *(int *)(param_1 + 0x18) = iVar1;
  *(bool *)(param_1 + 0x30) = param_2[2] != 0;
  *(int *)(param_1 + 0x24) = iVar1 / (*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c));
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar2 = (undefined4 *)(param_1 + 4);
    do {
      *puVar2 = 0xffffffff;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  return;
}


// ==== FUN_001d9c68 @ 001d9c68 ====

int FUN_001d9c68(int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001d9d00();
  if (lVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x10) +
            *(int *)(param_1 + 0x14) * *(int *)(param_1 + param_2 * 8 + 4) +
            *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x24) * param_2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_001d9cd0 @ 001d9cd0 ====

void FUN_001d9cd0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 4 + param_2 * 8);
  iVar1 = *piVar2;
  if (iVar1 < *(int *)(param_1 + 0x24)) {
    *piVar2 = iVar1 + 1;
  }
  return;
}


// ==== FUN_001d9d00 @ 001d9d00 ====

bool FUN_001d9d00(int param_1,int param_2)

{
  return *(int *)(param_1 + param_2 * 8 + 4) == *(int *)(param_1 + 0x24);
}


// ==== FUN_001d9d20 @ 001d9d20 ====

undefined4 FUN_001d9d20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\0') ||
     (uVar1 = 1, *(int *)(param_1 + param_2 * 8 + 4) != *(int *)(param_1 + 0x24) + -1)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001d9d58 @ 001d9d58 ====

undefined4 FUN_001d9d58(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)param_1 + 0x1c)) {
    do {
      lVar1 = FUN_001d9d00(param_1,iVar2);
      if (lVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)param_1 + 0x1c));
  }
  return 1;
}


// ==== FUN_001d9dc0 @ 001d9dc0 ====

void FUN_001d9dc0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    uVar1 = *param_1;
    puVar2 = param_1;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 2;
      FUN_001dab20(uVar1,param_2);
      if ((int)param_1[7] <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}


