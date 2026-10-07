// ==== FUN_0037eec8 @ 0037eec8 ====
// GLOBAL DAT_0048edf0 undefined4
// GLOBAL DAT_0048edf4 undefined4
// GLOBAL DAT_0048edf8 undefined4
// GLOBAL DAT_0048edfc undefined4
// GLOBAL DAT_0048ee00 undefined4
// GLOBAL DAT_0048ee04 undefined4
// GLOBAL DAT_0048ee08 undefined4
// GLOBAL DAT_0048ee0c undefined4
// GLOBAL DAT_0048ee10 undefined4
// GLOBAL DAT_0048ee14 undefined4
// GLOBAL DAT_0048ee18 undefined4
// GLOBAL DAT_0048ee1c undefined4
// GLOBAL DAT_0048ee20 undefined4
// GLOBAL DAT_0048ee24 undefined4
// GLOBAL DAT_0048ee28 undefined4
// GLOBAL DAT_0048ee2c undefined4

void FUN_0037eec8(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff9290,2);
      FUN_00100230(&gp0xffff9288,2);
    }
    else {
      FUN_00100228(&gp0xffff9288);
      FUN_00100258(&gp0xffff9290);
      DAT_0048edf0 = 0x3fc90fdb;
      DAT_0048edf4 = 0xbe22f983;
      DAT_0048edf8 = 0x4b400000;
      DAT_0048edfc = uStack_44;
      DAT_0048ee00 = 0xbe22f983;
      DAT_0048ee04 = 0x3f000000;
      DAT_0048ee08 = 0x3e800000;
      DAT_0048ee0c = uStack_34;
      DAT_0048ee10 = 0xc2992661;
      DAT_0048ee14 = 0xc2255de0;
      DAT_0048ee18 = 0x42a33457;
      DAT_0048ee1c = uStack_24;
      DAT_0048ee20 = 0x421ed7b7;
      DAT_0048ee24 = 0x40c90fda;
      DAT_0048ee28 = 0;
      DAT_0048ee2c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037f010 @ 0037f010 ====

void FUN_0037f010(void)

{
  FUN_0037eec8(1,0xffff);
  return;
}


// ==== FUN_0037f030 @ 0037f030 ====

void FUN_0037f030(void)

{
  FUN_0037eec8(0,0xffff);
  return;
}


// ==== FUN_0037f050 @ 0037f050 ====
// GLOBAL DAT_0048ee30 undefined4
// GLOBAL DAT_0048ee34 undefined4
// GLOBAL DAT_0048ee38 undefined4
// GLOBAL DAT_0048ee3c undefined4
// GLOBAL DAT_0048ee40 undefined4
// GLOBAL DAT_0048ee44 undefined4
// GLOBAL DAT_0048ee48 undefined4
// GLOBAL DAT_0048ee4c undefined4
// GLOBAL DAT_0048ee50 undefined4
// GLOBAL DAT_0048ee54 undefined4
// GLOBAL DAT_0048ee58 undefined4
// GLOBAL DAT_0048ee5c undefined4
// GLOBAL DAT_0048ee60 undefined4
// GLOBAL DAT_0048ee64 undefined4
// GLOBAL DAT_0048ee68 undefined4
// GLOBAL DAT_0048ee6c undefined4

void FUN_0037f050(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff92a0,2);
      FUN_00100230(&gp0xffff9298,2);
    }
    else {
      FUN_00100228(&gp0xffff9298);
      FUN_00100258(&gp0xffff92a0);
      DAT_0048ee30 = 0x3fc90fdb;
      DAT_0048ee34 = 0xbe22f983;
      DAT_0048ee38 = 0x4b400000;
      DAT_0048ee3c = uStack_44;
      DAT_0048ee40 = 0xbe22f983;
      DAT_0048ee44 = 0x3f000000;
      DAT_0048ee48 = 0x3e800000;
      DAT_0048ee4c = uStack_34;
      DAT_0048ee50 = 0xc2992661;
      DAT_0048ee54 = 0xc2255de0;
      DAT_0048ee58 = 0x42a33457;
      DAT_0048ee5c = uStack_24;
      DAT_0048ee60 = 0x421ed7b7;
      DAT_0048ee64 = 0x40c90fda;
      DAT_0048ee68 = 0;
      DAT_0048ee6c = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037f198 @ 0037f198 ====

void FUN_0037f198(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    piVar3 = *(int **)(param_1 + 0x340);
    iVar2 = piVar3[2];
    while( true ) {
      if (((*(uint *)(iVar2 + 0x8c) | *(uint *)(piVar3[3] + 0x8c)) & 4) != 0) {
        iVar2 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar2 + 1;
        FUN_0037f928(iVar1 + iVar2 * 0x100,piVar3);
      }
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)(param_1 + 0x340)) break;
      iVar2 = piVar3[2];
    }
  }
  return;
}


// ==== FUN_0037f238 @ 0037f238 ====

void FUN_0037f238(void)

{
  FUN_0037f050(1,0xffff);
  return;
}


// ==== FUN_0037f258 @ 0037f258 ====

void FUN_0037f258(void)

{
  FUN_0037f050(0,0xffff);
  return;
}


// ==== FUN_0037f278 @ 0037f278 ====

void FUN_0037f278(int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  uint uVar11;
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
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3cc;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_388;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 auStack_31c [12];
  undefined4 uStack_30c;
  undefined1 auStack_2dc [12];
  undefined4 uStack_2c8;
  undefined1 auStack_29c [12];
  undefined1 auStack_23c [12];
  undefined4 uStack_22c;
  undefined4 uStack_21c;
  undefined4 uStack_208;
  undefined4 uStack_1f4;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1c4;
  undefined4 uStack_18c;
  undefined4 uStack_178;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_138;
  undefined4 uStack_124;
  undefined4 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_f4;
  
  uVar11 = 0;
  pauVar9 = *(undefined1 (**) [16])(param_1 + 0x10);
  pauVar10 = pauVar9;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      if ((*(uint *)(pauVar9[2] + 0xc) & 2) == 0) {
        uVar7 = *(uint *)(param_1 + 0x38);
      }
      else {
        auVar12 = _lqc2(pauVar9[2]);
        auVar13 = _lqc2(pauVar9[3]);
        auVar8 = _qmfc2(auVar12._0_4_);
        auVar17 = _lqc2(pauVar9[9]);
        _vopmula(auVar12,auVar13);
        auVar15 = _vopmsub(auVar13,auVar12);
        auVar16 = _lqc2(pauVar9[10]);
        _qmfc2(auVar13._0_4_);
        iVar4 = *(int *)(pauVar9[0xd] + 0xc);
        auVar12 = _sqc2(auVar12);
        auVar13 = _sqc2(auVar13);
        auVar14 = _sqc2(auVar15);
        _qmfc2(auVar15._0_4_);
        pauVar1 = pauVar9 + 4;
        pauVar2 = pauVar9 + 6;
        pauVar3 = pauVar9 + 5;
        auVar15 = _lqc2(auVar12);
        auVar15 = _sqc2(auVar15);
        uStack_3cc = auVar15._4_4_;
        auVar15 = _lqc2(auVar13);
        _sqc2(auVar15);
        auVar15 = _lqc2(auVar14);
        _sqc2(auVar15);
        auVar12 = _lqc2(auVar12);
        auVar12 = _sqc2(auVar12);
        uStack_388 = auVar12._8_4_;
        auVar12 = _lqc2(auVar13);
        _sqc2(auVar12);
        auVar12 = _lqc2(auVar14);
        _sqc2(auVar12);
        auVar12 = _lqc2(*pauVar1);
        auVar12 = _qmfc2(auVar12._0_4_);
        auVar13 = _lqc2(*pauVar3);
        _qmfc2(auVar13._0_4_);
        auVar13 = _lqc2(*pauVar2);
        _qmfc2(auVar13._0_4_);
        auVar15._4_12_ = auStack_31c;
        auVar15._0_4_ = auVar12._0_4_;
        auVar15 = _lqc2(auVar15);
        auVar12 = _lqc2(*pauVar1);
        auVar12 = _sqc2(auVar12);
        uStack_30c = auVar12._4_4_;
        auVar12 = _lqc2(*pauVar3);
        _sqc2(auVar12);
        auVar12 = _lqc2(*pauVar2);
        _sqc2(auVar12);
        auVar18._4_12_ = auStack_2dc;
        auVar18._0_4_ = uStack_30c;
        auVar14 = _lqc2(auVar18);
        auVar12 = _lqc2(*pauVar1);
        auVar12 = _sqc2(auVar12);
        uStack_2c8 = auVar12._8_4_;
        auVar12 = _lqc2(*pauVar3);
        _sqc2(auVar12);
        auVar12 = _lqc2(*pauVar2);
        _sqc2(auVar12);
        _sqc2(auVar15);
        auVar19._4_12_ = auStack_29c;
        auVar19._0_4_ = uStack_2c8;
        auVar13 = _lqc2(auVar19);
        _sqc2(auVar14);
        _vmulabc(auVar15,auVar16);
        _vmaddabc(auVar14,auVar16);
        auVar22 = _vmaddbc(auVar13,auVar16);
        auVar12._4_4_ = uStack_3dc;
        auVar12._0_4_ = auVar8._0_4_;
        auVar12._8_4_ = uStack_3d8;
        auVar12._12_4_ = uStack_3d4;
        auVar15 = _lqc2(auVar12);
        _sqc2(auVar13);
        auVar13._4_4_ = uStack_39c;
        auVar13._0_4_ = uStack_3cc;
        auVar13._8_4_ = uStack_398;
        auVar13._12_4_ = uStack_394;
        auVar13 = _lqc2(auVar13);
        auVar14._4_4_ = uStack_35c;
        auVar14._0_4_ = uStack_388;
        auVar14._8_4_ = uStack_358;
        auVar14._12_4_ = uStack_354;
        auVar12 = _lqc2(auVar14);
        _vmulabc(auVar15,auVar17);
        _vmaddabc(auVar13,auVar17);
        auVar20 = _vmaddbc(auVar12,auVar17);
        auVar12 = _lqc2(*pauVar9);
        _vopmula(auVar12,auVar20);
        auVar15 = _vopmsub(auVar20,auVar12);
        auVar14 = _lqc2(pauVar9[0xc]);
        auVar13 = _qmtc2(*(undefined4 *)(pauVar9[0xc] + 0xc));
        auVar12 = _qmfc2(auVar14._0_4_);
        auVar18 = _vadd(auVar22,auVar15);
        auVar15 = _lqc2(pauVar9[0xd]);
        auVar21 = _vmulbc(auVar20,auVar13);
        _sqc2(auVar14);
        _sqc2(auVar14);
        auVar8._4_12_ = auStack_23c;
        auVar8._0_4_ = auVar12._0_4_;
        auVar19 = _lqc2(auVar8);
        auVar12 = _sqc2(auVar14);
        uStack_22c = auVar12._4_4_;
        auVar12 = _sqc2(auVar15);
        uStack_21c = auVar12._4_4_;
        auVar12 = _sqc2(auVar15);
        uStack_208 = auVar12._8_4_;
        auVar16._4_4_ = uStack_21c;
        auVar16._0_4_ = uStack_22c;
        auVar16._8_4_ = uStack_208;
        auVar16._12_4_ = uStack_1f4;
        auVar13 = _lqc2(auVar16);
        auVar12 = _sqc2(auVar14);
        uStack_1e8 = auVar12._8_4_;
        auVar12 = _sqc2(auVar15);
        uStack_1d8 = auVar12._8_4_;
        auVar12 = _qmfc2(auVar15._0_4_);
        _sqc2(auVar19);
        auVar17._4_4_ = uStack_1d8;
        auVar17._0_4_ = uStack_1e8;
        auVar17._8_4_ = auVar12._0_4_;
        auVar17._12_4_ = uStack_1c4;
        auVar12 = _lqc2(auVar17);
        _sqc2(auVar13);
        _vmulabc(auVar19,auVar18);
        _vmaddabc(auVar13,auVar18);
        auVar13 = _vmaddbc(auVar12,auVar18);
        _sqc2(auVar12);
        if ((*(uint *)(pauVar9[2] + 0xc) & 1) == 0) {
          auVar12 = _sqc2(auVar21);
          *pauVar10 = auVar12;
        }
        else {
          auVar12 = _lqc2(pauVar9[1]);
          auVar15 = _lqc2(pauVar9[0xe]);
          _vopmula(auVar12,auVar20);
          auVar12 = _vopmsub(auVar20,auVar12);
          auVar14 = _qmfc2(auVar15._0_4_);
          auVar18 = _vadd(auVar22,auVar12);
          auVar19 = _lqc2(pauVar9[0xf]);
          auVar12 = _sqc2(auVar15);
          uStack_18c = auVar12._4_4_;
          auVar12 = _sqc2(auVar15);
          uStack_178 = auVar12._8_4_;
          auVar22._4_4_ = uStack_18c;
          auVar22._0_4_ = auVar14._0_4_;
          auVar22._8_4_ = uStack_178;
          auVar22._12_4_ = uStack_164;
          auVar8 = _lqc2(auVar22);
          auVar12 = _sqc2(auVar15);
          uStack_15c = auVar12._4_4_;
          auVar12 = _sqc2(auVar19);
          uStack_14c = auVar12._4_4_;
          auVar12 = _sqc2(auVar19);
          uStack_138 = auVar12._8_4_;
          auVar5._4_4_ = uStack_14c;
          auVar5._0_4_ = uStack_15c;
          auVar5._8_4_ = uStack_138;
          auVar5._12_4_ = uStack_124;
          auVar14 = _lqc2(auVar5);
          auVar12 = _sqc2(auVar15);
          uStack_118 = auVar12._8_4_;
          auVar12 = _sqc2(auVar19);
          uStack_108 = auVar12._8_4_;
          auVar12 = _qmfc2(auVar19._0_4_);
          _sqc2(auVar8);
          auVar6._4_4_ = uStack_108;
          auVar6._0_4_ = uStack_118;
          auVar6._8_4_ = auVar12._0_4_;
          auVar6._12_4_ = uStack_f4;
          auVar12 = _lqc2(auVar6);
          _sqc2(auVar14);
          _vmulabc(auVar8,auVar18);
          _vmaddabc(auVar14,auVar18);
          auVar14 = _vmaddbc(auVar12,auVar18);
          auVar13 = _vadd(auVar13,auVar14);
          _sqc2(auVar12);
          auVar12 = _qmtc2(*(undefined4 *)(pauVar9[0xe] + 0xc));
          auVar12 = _vmulbc(auVar20,auVar12);
          auVar12 = _vadd(auVar21,auVar12);
          auVar12 = _sqc2(auVar12);
          *pauVar10 = auVar12;
        }
        auVar12 = _sqc2(auVar13);
        pauVar10[1] = auVar12;
        *(int *)pauVar10[2] = iVar4;
        *(undefined4 *)(pauVar10[2] + 4) = *(undefined4 *)(iVar4 + 0x18);
        pauVar10 = pauVar10 + 3;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        uVar7 = *(uint *)(param_1 + 0x38);
      }
      uVar11 = uVar11 + 1;
      pauVar9 = pauVar9 + 0x10;
    } while (uVar11 < uVar7);
  }
  return;
}


// ==== FUN_0037f7a0 @ 0037f7a0 ====
// GLOBAL DAT_0048ee70 undefined4
// GLOBAL DAT_0048ee74 undefined4
// GLOBAL DAT_0048ee78 undefined4
// GLOBAL DAT_0048ee7c undefined4
// GLOBAL DAT_0048ee80 undefined4
// GLOBAL DAT_0048ee84 undefined4
// GLOBAL DAT_0048ee88 undefined4
// GLOBAL DAT_0048ee8c undefined4
// GLOBAL DAT_0048ee90 undefined4
// GLOBAL DAT_0048ee94 undefined4
// GLOBAL DAT_0048ee98 undefined4
// GLOBAL DAT_0048ee9c undefined4
// GLOBAL DAT_0048eea0 undefined4
// GLOBAL DAT_0048eea4 undefined4
// GLOBAL DAT_0048eea8 undefined4
// GLOBAL DAT_0048eeac undefined4

void FUN_0037f7a0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff92b0,2);
      FUN_00100230(&gp0xffff92a8,2);
    }
    else {
      FUN_00100228(&gp0xffff92a8);
      FUN_00100258(&gp0xffff92b0);
      DAT_0048ee70 = 0x3fc90fdb;
      DAT_0048ee74 = 0xbe22f983;
      DAT_0048ee78 = 0x4b400000;
      DAT_0048ee7c = uStack_44;
      DAT_0048ee80 = 0xbe22f983;
      DAT_0048ee84 = 0x3f000000;
      DAT_0048ee88 = 0x3e800000;
      DAT_0048ee8c = uStack_34;
      DAT_0048ee90 = 0xc2992661;
      DAT_0048ee94 = 0xc2255de0;
      DAT_0048ee98 = 0x42a33457;
      DAT_0048ee9c = uStack_24;
      DAT_0048eea0 = 0x421ed7b7;
      DAT_0048eea4 = 0x40c90fda;
      DAT_0048eea8 = 0;
      DAT_0048eeac = uStack_14;
    }
  }
  return;
}


// ==== FUN_0037f8e8 @ 0037f8e8 ====

void FUN_0037f8e8(void)

{
  FUN_0037f7a0(1,0xffff);
  return;
}


// ==== FUN_0037f908 @ 0037f908 ====

void FUN_0037f908(void)

{
  FUN_0037f7a0(0,0xffff);
  return;
}


// ==== FUN_0037f928 @ 0037f928 ====
// GLOBAL DAT_0040e568 undefined4
// GLOBAL DAT_0040e56c undefined4

/* WARNING: Removing unreachable block (ram,0x003806c0) */
/* WARNING: Removing unreachable block (ram,0x003807d0) */

void FUN_0037f928(undefined8 *param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
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
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined4 uVar67;
  int iVar68;
  undefined1 auVar69 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  float fVar80;
  float fVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 in_vf0 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined4 uStack_d6c;
  undefined4 uStack_d58;
  undefined4 uStack_d44;
  undefined4 uStack_d3c;
  undefined4 uStack_d28;
  undefined4 uStack_d14;
  undefined4 uStack_d04;
  undefined4 uStack_cfc;
  undefined4 uStack_ce8;
  undefined4 uStack_cd4;
  undefined4 uStack_ccc;
  undefined4 uStack_cb8;
  undefined4 uStack_ca4;
  undefined4 uStack_c94;
  undefined4 uStack_c8c;
  undefined4 uStack_c78;
  undefined4 uStack_c64;
  undefined4 uStack_c5c;
  undefined4 uStack_c48;
  undefined4 uStack_c34;
  undefined4 uStack_c24;
  float fStack_c20;
  float fStack_c1c;
  float fStack_c18;
  float fStack_c14;
  float fStack_c10;
  float fStack_c0c;
  float fStack_c08;
  float fStack_c04;
  float fStack_c00;
  float fStack_bfc;
  float fStack_bf8;
  float fStack_bf4;
  undefined4 uStack_b64;
  undefined4 uStack_b54;
  undefined4 uStack_b44;
  undefined4 uStack_b38;
  undefined4 uStack_b24;
  undefined4 uStack_a94;
  undefined4 uStack_a84;
  undefined4 uStack_a74;
  undefined4 uStack_a68;
  undefined4 uStack_a54;
  undefined4 uStack_a4c;
  undefined4 uStack_a34;
  undefined4 uStack_a28;
  undefined4 uStack_a1c;
  undefined4 uStack_a04;
  undefined4 uStack_9c4;
  undefined4 uStack_9b4;
  undefined4 uStack_9a4;
  undefined4 uStack_998;
  undefined4 uStack_984;
  undefined4 uStack_97c;
  undefined4 uStack_964;
  undefined4 uStack_958;
  undefined4 uStack_94c;
  undefined4 uStack_934;
  undefined4 uStack_8f4;
  undefined4 uStack_8e4;
  undefined4 uStack_8d4;
  undefined4 uStack_8c8;
  undefined4 uStack_8b4;
  undefined4 uStack_8ac;
  undefined4 uStack_894;
  undefined4 uStack_888;
  undefined4 uStack_87c;
  undefined4 uStack_864;
  undefined4 uStack_7d4;
  undefined4 uStack_7c4;
  undefined4 uStack_7b4;
  undefined4 uStack_7a4;
  float fStack_798;
  float fStack_78c;
  undefined4 uStack_774;
  undefined4 uStack_764;
  undefined4 uStack_754;
  undefined4 uStack_73c;
  undefined4 uStack_728;
  undefined4 uStack_70c;
  undefined4 uStack_6f8;
  undefined1 auStack_6c0 [16];
  undefined1 auStack_6b0 [16];
  undefined1 auStack_6a0 [16];
  undefined4 uStack_67c;
  undefined4 uStack_668;
  undefined4 uStack_648;
  undefined4 uStack_63c;
  undefined4 uStack_628;
  undefined1 auStack_5d0 [16];
  undefined1 auStack_5c0 [16];
  undefined1 auStack_5b0 [16];
  undefined4 uStack_58c;
  undefined4 uStack_578;
  undefined4 uStack_558;
  undefined4 uStack_54c;
  undefined4 uStack_538;
  undefined4 uStack_524;
  undefined4 uStack_514;
  undefined4 uStack_4fc;
  undefined4 uStack_4e8;
  undefined4 uStack_4cc;
  undefined4 uStack_4b8;
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [16];
  undefined4 uStack_43c;
  undefined4 uStack_428;
  undefined4 uStack_408;
  undefined4 uStack_3fc;
  undefined4 uStack_3e8;
  float fStack_3bc;
  float fStack_3a8;
  float fStack_39c;
  float fStack_388;
  undefined4 uStack_36c;
  undefined4 uStack_358;
  undefined4 uStack_33c;
  undefined4 uStack_328;
  undefined4 uStack_30c;
  undefined4 uStack_2f8;
  undefined4 uStack_2ec;
  undefined4 uStack_2d8;
  undefined4 uStack_2cc;
  undefined4 uStack_2b8;
  undefined4 uStack_2ac;
  undefined4 uStack_298;
  undefined4 uStack_26c;
  undefined4 uStack_25c;
  undefined4 uStack_24c;
  undefined4 uStack_21c;
  undefined4 uStack_20c;
  undefined4 uStack_1fc;
  undefined4 uStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1b8;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_2 + 0x14);
  pauVar2 = *(undefined1 (**) [16])(param_2 + 8);
  pauVar3 = *(undefined1 (**) [16])(param_2 + 0xc);
  pauVar4 = *(undefined1 (**) [16])(param_2 + 0x10);
  auVar112 = _lqc2(*pauVar2);
  auVar66 = _qmfc2(auVar112._0_4_);
  auVar104 = _lqc2(pauVar4[1]);
  auVar103 = _sqc2(auVar112);
  uStack_d6c = auVar103._4_4_;
  auVar103 = _sqc2(auVar112);
  uStack_d58 = auVar103._8_4_;
  auVar69 = _qmfc2(auVar104._0_4_);
  auVar103._4_4_ = uStack_d6c;
  auVar103._0_4_ = auVar66._0_4_;
  auVar103._8_4_ = uStack_d58;
  auVar103._12_4_ = uStack_d44;
  auVar106 = _lqc2(auVar103);
  auVar103 = _sqc2(auVar104);
  uStack_d3c = auVar103._4_4_;
  auVar103 = _sqc2(auVar104);
  uStack_d28 = auVar103._8_4_;
  auVar107 = _vmulbc(auVar106,auVar104);
  auVar104 = _vmulbc(auVar112,auVar104);
  auVar66._4_4_ = uStack_d3c;
  auVar66._0_4_ = auVar69._0_4_;
  auVar66._8_4_ = uStack_d28;
  auVar66._12_4_ = uStack_d14;
  auVar69 = _lqc2(auVar66);
  auVar105 = _vmul(auVar106,auVar69);
  auVar103 = _vmulbc(auVar69,auVar112);
  auVar66 = _vaddbc(auVar105,auVar105);
  auVar103 = _vadd(auVar103,auVar107);
  auVar66 = _vaddbc(auVar66,auVar105);
  _vopmula(auVar106,auVar69);
  auVar69 = _vopmsub(auVar69,auVar106);
  auVar69 = _vadd(auVar103,auVar69);
  auVar103 = _vsubbc(auVar104,auVar66);
  auVar103 = _sqc2(auVar103);
  uStack_d04 = auVar103._12_4_;
  _vaddbc(in_vf0,auVar69);
  _vaddbc(in_vf0,auVar69);
  auVar110 = _lqc2(*pauVar3);
  auVar66 = _qmfc2(auVar110._0_4_);
  auVar103 = _qmtc2(uStack_d04);
  _vaddbc(in_vf0,auVar69);
  auVar103 = _vaddbc(in_vf0,auVar103);
  auVar104 = _lqc2(pauVar4[3]);
  auVar113 = _vmulbc(in_vf0,auVar103);
  auVar103 = _sqc2(auVar110);
  uStack_cfc = auVar103._4_4_;
  auVar103 = _sqc2(auVar110);
  uStack_ce8 = auVar103._8_4_;
  auVar105 = _qmfc2(auVar104._0_4_);
  auVar69._4_4_ = uStack_cfc;
  auVar69._0_4_ = auVar66._0_4_;
  auVar69._8_4_ = uStack_ce8;
  auVar69._12_4_ = uStack_cd4;
  auVar107 = _lqc2(auVar69);
  auVar103 = _sqc2(auVar104);
  uStack_ccc = auVar103._4_4_;
  auVar103 = _sqc2(auVar104);
  uStack_cb8 = auVar103._8_4_;
  auVar112 = _vmulbc(auVar107,auVar104);
  auVar106 = _vmulbc(auVar110,auVar104);
  auVar104._4_4_ = uStack_ccc;
  auVar104._0_4_ = auVar105._0_4_;
  auVar104._8_4_ = uStack_cb8;
  auVar104._12_4_ = uStack_ca4;
  auVar69 = _lqc2(auVar104);
  auVar104 = _vmul(auVar107,auVar69);
  auVar103 = _vmulbc(auVar69,auVar110);
  auVar66 = _vaddbc(auVar104,auVar104);
  auVar103 = _vadd(auVar103,auVar112);
  auVar66 = _vaddbc(auVar66,auVar104);
  _vopmula(auVar107,auVar69);
  auVar69 = _vopmsub(auVar69,auVar107);
  auVar69 = _vadd(auVar103,auVar69);
  auVar103 = _vsubbc(auVar106,auVar66);
  auVar103 = _sqc2(auVar103);
  uStack_c94 = auVar103._12_4_;
  _vaddbc(in_vf0,auVar69);
  auVar107 = _lqc2(*pauVar3);
  _vaddbc(in_vf0,auVar69);
  auVar66 = _qmfc2(auVar107._0_4_);
  auVar103 = _qmtc2(uStack_c94);
  auVar103 = _vaddbc(in_vf0,auVar103);
  _vaddbc(in_vf0,auVar69);
  auVar110 = _vmulbc(in_vf0,auVar103);
  auVar104 = _lqc2(*pauVar4);
  auVar103 = _sqc2(auVar107);
  uStack_c8c = auVar103._4_4_;
  auVar103 = _sqc2(auVar107);
  uStack_c78 = auVar103._8_4_;
  auVar69 = _qmfc2(auVar104._0_4_);
  auVar105._4_4_ = uStack_c8c;
  auVar105._0_4_ = auVar66._0_4_;
  auVar105._8_4_ = uStack_c78;
  auVar105._12_4_ = uStack_c64;
  auVar112 = _lqc2(auVar105);
  auVar103 = _sqc2(auVar104);
  uStack_c5c = auVar103._4_4_;
  auVar103 = _sqc2(auVar104);
  uStack_c48 = auVar103._8_4_;
  auVar114 = _vmulbc(auVar112,auVar104);
  auVar104 = _vmulbc(auVar107,auVar104);
  auVar106._4_4_ = uStack_c5c;
  auVar106._0_4_ = auVar69._0_4_;
  auVar106._8_4_ = uStack_c48;
  auVar106._12_4_ = uStack_c34;
  auVar69 = _lqc2(auVar106);
  auVar105 = _vmul(auVar112,auVar69);
  auVar66 = _vmulbc(auVar69,auVar107);
  auVar103 = _vaddbc(auVar105,auVar105);
  auVar66 = _vadd(auVar66,auVar114);
  auVar103 = _vaddbc(auVar103,auVar105);
  _vopmula(auVar112,auVar69);
  auVar69 = _vopmsub(auVar69,auVar112);
  auVar69 = _vadd(auVar66,auVar69);
  auVar103 = _vsubbc(auVar104,auVar103);
  auVar103 = _sqc2(auVar103);
  uStack_c24 = auVar103._12_4_;
  _vaddbc(in_vf0,auVar69);
  auVar103 = _sqc2(auVar110);
  _vaddbc(in_vf0,auVar69);
  auVar66 = _sqc2(auVar113);
  _vaddbc(in_vf0,auVar69);
  fStack_c10 = auVar103._0_4_;
  auVar69 = _qmtc2(uStack_c24);
  fStack_c20 = auVar66._0_4_;
  auVar69 = _vaddbc(in_vf0,auVar69);
  fStack_c1c = auVar66._4_4_;
  auVar69 = _vmulbc(in_vf0,auVar69);
  fStack_c0c = auVar103._4_4_;
  fVar100 = fStack_c10 * fStack_c20;
  fStack_c08 = auVar103._8_4_;
  fStack_c04 = auVar103._12_4_;
  fVar102 = fStack_c0c * fStack_c1c;
  fStack_c14 = auVar66._12_4_;
  fStack_c18 = auVar66._8_4_;
  fVar96 = fStack_c04 * fStack_c1c;
  fVar97 = fStack_c10 * fStack_c14;
  fVar101 = fStack_c0c * fStack_c14;
  auVar103 = _sqc2(auVar69);
  fVar89 = fStack_c04 * fStack_c14;
  fVar80 = fStack_c08 * fStack_c14;
  fVar88 = fStack_c04 * fStack_c20;
  fVar87 = fStack_c08 * fStack_c18;
  fVar85 = fStack_c04 * fStack_c18;
  fVar91 = fStack_c10 * fStack_c1c + fStack_c0c * fStack_c20;
  fVar98 = fStack_c08 * fStack_c20 + fStack_c10 * fStack_c18;
  fVar92 = fStack_c08 * fStack_c1c + fStack_c0c * fStack_c18;
  auVar108 = _qmtc2(0x40000000);
  auVar114 = _qmtc2(0x3f800000);
  fVar94 = ((fVar97 - fVar88) + fStack_c0c * fStack_c18) - fStack_c08 * fStack_c1c;
  fVar86 = fVar89 + fVar87 + fVar102 + fVar100;
  fVar95 = ((fVar101 - fVar96) + fStack_c08 * fStack_c20) - fStack_c10 * fStack_c18;
  fVar93 = ((fVar80 - fVar85) + fStack_c10 * fStack_c1c) - fStack_c0c * fStack_c20;
  fVar81 = (fVar92 - fVar97) - fVar88;
  fVar99 = fVar98 + fVar96 + fVar101;
  fVar90 = ((fVar89 + fVar87) - fVar100) - fVar102;
  auVar107._4_4_ = fStack_c1c * fStack_c1c;
  auVar107._0_4_ = fStack_c20 * fStack_c20;
  auVar107._8_4_ = fStack_c18 * fStack_c18;
  auVar107._12_4_ = uStack_b64;
  auVar66 = _lqc2(auVar107);
  auVar106 = _vmulbc(auVar66,auVar108);
  auVar66 = _vaddbc(auVar106,auVar106);
  auVar66 = _vsubbc(auVar114,auVar66);
  auVar66 = _qmfc2(auVar66._0_4_);
  uVar76 = auVar66._0_4_;
  auVar112._4_4_ = fStack_c1c * fStack_c14;
  auVar112._0_4_ = fStack_c20 * fStack_c14;
  auVar112._8_4_ = fStack_c18 * fStack_c14;
  auVar112._12_4_ = uStack_b54;
  auVar66 = _lqc2(auVar112);
  auVar105 = _vmulbc(auVar66,auVar108);
  auVar110._4_4_ = fStack_c1c * fStack_c18;
  auVar110._0_4_ = fStack_c20 * fStack_c1c;
  auVar110._8_4_ = fStack_c18 * fStack_c20;
  auVar110._12_4_ = uStack_b44;
  auVar66 = _lqc2(auVar110);
  auVar69 = _vmulbc(auVar66,auVar108);
  auVar66 = _vaddbc(auVar69,auVar105);
  auVar104 = _vsubbc(auVar69,auVar105);
  auVar66 = _qmfc2(auVar66._0_4_);
  uVar82 = auVar66._0_4_;
  auVar66 = _sqc2(auVar104);
  uStack_b38 = auVar66._8_4_;
  auVar110 = _qmtc2(0x3f800000);
  auVar66 = _vaddbc(auVar106,auVar106);
  auVar66 = _vsubbc(auVar110,auVar66);
  auVar104 = _vsubbc(auVar69,auVar105);
  _qmfc2(auVar66._0_4_);
  _qmfc2(auVar104._0_4_);
  auVar66 = _vaddbc(auVar69,auVar105);
  _sqc2(auVar66);
  auVar66 = _vaddbc(auVar69,auVar105);
  _sqc2(auVar66);
  auVar66 = _vsubbc(auVar69,auVar105);
  _sqc2(auVar66);
  auVar66 = _vaddbc(auVar106,auVar106);
  auVar66 = _vsubbc(auVar110,auVar66);
  _qmfc2(auVar66._0_4_);
  auVar113._4_4_ = fStack_c0c * fStack_c0c;
  auVar113._0_4_ = fStack_c10 * fStack_c10;
  auVar113._8_4_ = fStack_c08 * fStack_c08;
  auVar113._12_4_ = uStack_a94;
  auVar66 = _lqc2(auVar113);
  auVar112 = _vmulbc(auVar66,auVar108);
  auVar66 = _vaddbc(auVar112,auVar112);
  auVar66 = _vsubbc(auVar114,auVar66);
  auVar104 = _qmfc2(auVar66._0_4_);
  auVar114._4_4_ = fStack_c0c * fStack_c04;
  auVar114._0_4_ = fStack_c10 * fStack_c04;
  auVar114._8_4_ = fStack_c08 * fStack_c04;
  auVar114._12_4_ = uStack_a84;
  auVar66 = _lqc2(auVar114);
  auVar107 = _vmulbc(auVar66,auVar108);
  auVar116._4_4_ = fStack_c0c * fStack_c08;
  auVar116._0_4_ = fStack_c10 * fStack_c0c;
  auVar116._8_4_ = fStack_c08 * fStack_c10;
  auVar116._12_4_ = uStack_a74;
  auVar66 = _lqc2(auVar116);
  auVar105 = _vmulbc(auVar66,auVar108);
  auVar66 = _vaddbc(auVar105,auVar107);
  auVar69 = _vsubbc(auVar105,auVar107);
  auVar106 = _qmfc2(auVar66._0_4_);
  auVar66 = _sqc2(auVar69);
  uStack_a68 = auVar66._8_4_;
  auVar69 = _vaddbc(auVar112,auVar112);
  auVar66 = _vsubbc(auVar105,auVar107);
  auVar69 = _vsubbc(auVar110,auVar69);
  auVar66 = _qmfc2(auVar66._0_4_);
  auVar69 = _qmfc2(auVar69._0_4_);
  uVar83 = auVar66._0_4_;
  uVar72 = auVar69._0_4_;
  auVar66 = _vaddbc(auVar105,auVar107);
  auVar66 = _sqc2(auVar66);
  uStack_a4c = auVar66._4_4_;
  auVar66 = _vaddbc(auVar105,auVar107);
  auVar66 = _sqc2(auVar66);
  uStack_a28 = auVar66._8_4_;
  auVar66 = _vsubbc(auVar105,auVar107);
  auVar66 = _sqc2(auVar66);
  auVar69 = _vaddbc(auVar112,auVar112);
  uStack_a1c = auVar66._4_4_;
  auVar66 = _vsubbc(auVar110,auVar69);
  auVar66 = _qmfc2(auVar66._0_4_);
  uVar77 = auVar66._0_4_;
  fStack_c00 = auVar103._0_4_;
  fStack_bfc = auVar103._4_4_;
  fStack_bf8 = auVar103._8_4_;
  fStack_bf4 = auVar103._12_4_;
  auVar110 = _qmtc2(0x3f800000);
  auVar117._4_4_ = fStack_bfc * fStack_bfc;
  auVar117._0_4_ = fStack_c00 * fStack_c00;
  auVar117._8_4_ = fStack_bf8 * fStack_bf8;
  auVar117._12_4_ = uStack_9c4;
  auVar103 = _lqc2(auVar117);
  auVar107 = _vmulbc(auVar103,auVar108);
  auVar103 = _vaddbc(auVar107,auVar107);
  auVar103 = _vsubbc(auVar110,auVar103);
  auVar103 = _qmfc2(auVar103._0_4_);
  uVar65 = auVar103._0_4_;
  auVar118._4_4_ = fStack_bfc * fStack_bf4;
  auVar118._0_4_ = fStack_c00 * fStack_bf4;
  auVar118._8_4_ = fStack_bf8 * fStack_bf4;
  auVar118._12_4_ = uStack_9b4;
  auVar103 = _lqc2(auVar118);
  auVar105 = _vmulbc(auVar103,auVar108);
  auVar120._4_4_ = fStack_bfc * fStack_bf8;
  auVar120._0_4_ = fStack_c00 * fStack_bfc;
  auVar120._8_4_ = fStack_bf8 * fStack_c00;
  auVar120._12_4_ = uStack_9a4;
  auVar103 = _lqc2(auVar120);
  auVar69 = _vmulbc(auVar103,auVar108);
  auVar103 = _vaddbc(auVar69,auVar105);
  auVar66 = _vsubbc(auVar69,auVar105);
  auVar103 = _qmfc2(auVar103._0_4_);
  uVar67 = auVar103._0_4_;
  auVar103 = _sqc2(auVar66);
  uStack_998 = auVar103._8_4_;
  auVar112 = _qmtc2(0x3f800000);
  auVar103 = _vaddbc(auVar107,auVar107);
  auVar103 = _vsubbc(auVar112,auVar103);
  auVar66 = _vsubbc(auVar69,auVar105);
  auVar103 = _qmfc2(auVar103._0_4_);
  auVar66 = _qmfc2(auVar66._0_4_);
  uVar70 = auVar103._0_4_;
  uVar73 = auVar66._0_4_;
  auVar103 = _vaddbc(auVar69,auVar105);
  auVar103 = _sqc2(auVar103);
  uStack_97c = auVar103._4_4_;
  auVar103 = _vaddbc(auVar69,auVar105);
  auVar103 = _sqc2(auVar103);
  uStack_958 = auVar103._8_4_;
  auVar103 = _vsubbc(auVar69,auVar105);
  auVar103 = _sqc2(auVar103);
  auVar66 = _vaddbc(auVar107,auVar107);
  uStack_94c = auVar103._4_4_;
  auVar103 = _vsubbc(auVar112,auVar66);
  auVar103 = _qmfc2(auVar103._0_4_);
  uVar78 = auVar103._0_4_;
  auVar66 = _qmtc2(0x40000000);
  auVar53._4_4_ = fVar95 * fVar95;
  auVar53._0_4_ = fVar94 * fVar94;
  auVar53._8_4_ = fVar93 * fVar93;
  auVar53._12_4_ = uStack_8f4;
  auVar103 = _lqc2(auVar53);
  auVar107 = _vmulbc(auVar103,auVar66);
  auVar103 = _vaddbc(auVar107,auVar107);
  auVar103 = _vsubbc(auVar110,auVar103);
  auVar103 = _qmfc2(auVar103._0_4_);
  auVar54._4_4_ = fVar95 * fVar86;
  auVar54._0_4_ = fVar94 * fVar86;
  auVar54._8_4_ = fVar93 * fVar86;
  auVar54._12_4_ = uStack_8e4;
  auVar69 = _lqc2(auVar54);
  auVar105 = _vmulbc(auVar69,auVar66);
  uVar84 = auVar103._0_4_;
  auVar55._4_4_ = fVar95 * fVar93;
  auVar55._0_4_ = fVar94 * fVar95;
  auVar55._8_4_ = fVar93 * fVar94;
  auVar55._12_4_ = uStack_8d4;
  auVar103 = _lqc2(auVar55);
  auVar69 = _vmulbc(auVar103,auVar66);
  auVar103 = _vaddbc(auVar69,auVar105);
  auVar66 = _vsubbc(auVar69,auVar105);
  auVar103 = _qmfc2(auVar103._0_4_);
  uVar71 = auVar103._0_4_;
  auVar103 = _sqc2(auVar66);
  uStack_8c8 = auVar103._8_4_;
  auVar103 = _vaddbc(auVar107,auVar107);
  auVar103 = _vsubbc(auVar112,auVar103);
  auVar103 = _qmfc2(auVar103._0_4_);
  auVar66 = _vsubbc(auVar69,auVar105);
  uVar75 = auVar103._0_4_;
  auVar103 = _qmfc2(auVar66._0_4_);
  uVar74 = auVar103._0_4_;
  auVar103 = _vaddbc(auVar69,auVar105);
  auVar103 = _sqc2(auVar103);
  uStack_8ac = auVar103._4_4_;
  auVar103 = _vaddbc(auVar69,auVar105);
  auVar103 = _sqc2(auVar103);
  uStack_888 = auVar103._8_4_;
  auVar103 = _vsubbc(auVar69,auVar105);
  auVar103 = _sqc2(auVar103);
  auVar66 = _vaddbc(auVar107,auVar107);
  uStack_87c = auVar103._4_4_;
  auVar103 = _vsubbc(auVar112,auVar66);
  auVar103 = _qmfc2(auVar103._0_4_);
  uVar79 = auVar103._0_4_;
  auVar108._4_4_ = uVar67;
  auVar108._0_4_ = uVar65;
  auVar108._8_4_ = uStack_998;
  auVar108._12_4_ = uStack_984;
  auVar113 = _lqc2(auVar108);
  auVar105 = _lqc2(pauVar2[4]);
  auVar69 = _lqc2(pauVar2[5]);
  auVar66 = _lqc2(pauVar2[6]);
  _sqc2(auVar105);
  _sqc2(auVar69);
  _sqc2(auVar66);
  auVar121._4_4_ = uVar70;
  auVar121._0_4_ = uVar73;
  auVar121._8_4_ = uStack_97c;
  auVar121._12_4_ = uStack_964;
  auVar110 = _lqc2(auVar121);
  auVar103 = _lqc2(pauVar4[2]);
  _vmulabc(auVar105,auVar103);
  _vmaddabc(auVar69,auVar103);
  auVar121 = _vmaddbc(auVar66,auVar103);
  auVar103 = _lqc2(pauVar2[3]);
  auVar108 = _lqc2(pauVar3[4]);
  _vopmula(auVar103,auVar121);
  auVar66 = _vopmsub(auVar121,auVar103);
  auVar116 = _lqc2(pauVar3[5]);
  auVar114 = _lqc2(pauVar3[6]);
  auVar103 = _lqc2(pauVar2[2]);
  auVar69 = _lqc2(pauVar2[10]);
  auVar105 = _vadd(auVar66,auVar103);
  auVar66 = _lqc2(pauVar2[9]);
  _vopmula(auVar69,auVar121);
  auVar103 = _vopmsub(auVar121,auVar69);
  auVar103 = _vadd(auVar103,auVar66);
  auVar66 = _lqc2(pauVar2[1]);
  auVar107 = _vadd(auVar105,auVar103);
  _sqc2(auVar108);
  auVar103 = _vadd(auVar66,auVar121);
  _sqc2(auVar116);
  auVar112 = _vadd(auVar103,auVar107);
  _sqc2(auVar114);
  auVar111._4_4_ = uStack_94c;
  auVar111._0_4_ = uStack_958;
  auVar111._8_4_ = uVar78;
  auVar111._12_4_ = uStack_934;
  auVar119 = _lqc2(auVar111);
  auVar103 = _lqc2(pauVar4[4]);
  _vmulabc(auVar108,auVar103);
  _vmaddabc(auVar116,auVar103);
  auVar116 = _vmaddbc(auVar114,auVar103);
  auVar66 = _lqc2(pauVar3[3]);
  auVar103 = _lqc2(pauVar3[10]);
  _vopmula(auVar66,auVar116);
  auVar105 = _vopmsub(auVar116,auVar66);
  auVar66 = _lqc2(pauVar3[2]);
  _vopmula(auVar103,auVar116);
  auVar103 = _vopmsub(auVar116,auVar103);
  auVar69 = _lqc2(pauVar3[9]);
  auVar105 = _vadd(auVar105,auVar66);
  auVar66 = _vadd(auVar103,auVar69);
  auVar103 = _lqc2(pauVar3[1]);
  auVar66 = _vadd(auVar105,auVar66);
  auVar103 = _vadd(auVar103,auVar116);
  auVar103 = _vadd(auVar103,auVar66);
  auVar103 = _vsub(auVar103,auVar112);
  auVar114 = _vsub(auVar66,auVar107);
  auVar69 = _vmul(auVar103,auVar113);
  auVar107 = _vmul(auVar103,auVar110);
  auVar66 = _vaddbc(auVar69,auVar69);
  auVar105 = _vaddbc(auVar107,auVar107);
  auVar66 = _vaddbc(auVar66,auVar69);
  auVar69 = _vmul(auVar103,auVar119);
  auVar103 = _qmfc2(auVar66._0_4_);
  auVar66 = _vaddbc(auVar105,auVar107);
  auVar105 = _vaddbc(auVar69,auVar69);
  auVar66 = _qmfc2(auVar66._0_4_);
  auVar69 = _vaddbc(auVar105,auVar69);
  auVar69 = _qmfc2(auVar69._0_4_);
  auVar119._4_4_ = uVar67;
  auVar119._0_4_ = uVar65;
  auVar119._8_4_ = uStack_998;
  auVar119._12_4_ = uStack_984;
  auVar105 = _lqc2(auVar119);
  auVar107 = _vmul(auVar114,auVar105);
  auVar109._4_4_ = uVar70;
  auVar109._0_4_ = uVar73;
  auVar109._8_4_ = uStack_97c;
  auVar109._12_4_ = uStack_964;
  auVar112 = _lqc2(auVar109);
  auVar105 = _vaddbc(auVar107,auVar107);
  auVar115._4_4_ = uStack_94c;
  auVar115._0_4_ = uStack_958;
  auVar115._8_4_ = uVar78;
  auVar115._12_4_ = uStack_934;
  auVar113 = _lqc2(auVar115);
  auVar105 = _vaddbc(auVar105,auVar107);
  auVar110 = _vmul(auVar114,auVar112);
  auVar107 = _qmfc2(auVar105._0_4_);
  auVar113 = _vmul(auVar114,auVar113);
  auVar112 = _vaddbc(auVar110,auVar110);
  auVar105 = _vaddbc(auVar113,auVar113);
  auVar112 = _vaddbc(auVar112,auVar110);
  auVar105 = _vaddbc(auVar105,auVar113);
  auVar112 = _qmfc2(auVar112._0_4_);
  auVar105 = _qmfc2(auVar105._0_4_);
  auVar110 = _lqc2(pauVar1[1]);
  auVar56._4_4_ = auVar112._0_4_;
  auVar56._0_4_ = auVar107._0_4_;
  auVar56._8_4_ = auVar105._0_4_;
  auVar56._12_4_ = uStack_7c4;
  auVar105 = _lqc2(auVar56);
  auVar112 = _lqc2(*pauVar1);
  auVar107 = _vadd(auVar105,auVar110);
  auVar105 = _vsub(auVar105,auVar110);
  auVar64._4_4_ = auVar66._0_4_;
  auVar64._0_4_ = auVar103._0_4_;
  auVar64._8_4_ = auVar69._0_4_;
  auVar64._12_4_ = uStack_7d4;
  auVar66 = _lqc2(auVar64);
  auVar103 = _vadd(auVar66,auVar112);
  auVar103 = _sqc2(auVar103);
  auVar66 = _vsub(auVar66,auVar112);
  auVar66 = _sqc2(auVar66);
  auVar69 = _lqc2(auVar103);
  auVar69 = _vmini(auVar105,auVar69);
  auVar57._4_4_ = DAT_0040e568;
  auVar57._0_4_ = DAT_0040e568;
  auVar57._8_4_ = DAT_0040e568;
  auVar57._12_4_ = uStack_7b4;
  auVar110 = _lqc2(auVar57);
  auVar66 = _lqc2(auVar66);
  auVar107 = _vmax(auVar107,auVar66);
  auVar105 = _vmax(auVar66,auVar69);
  auVar112 = _vmove(auVar110);
  auVar103 = _lqc2(auVar103);
  auVar69 = _vmini(auVar103,auVar107);
  auVar103 = _sqc2(auVar105);
  auVar66 = _sqc2(auVar69);
  auStack_180 = _qmfc2(auVar105._0_4_);
  auStack_170 = _qmfc2(auVar69._0_4_);
  auVar58._4_4_ = DAT_0040e56c;
  auVar58._0_4_ = DAT_0040e56c;
  auVar58._8_4_ = DAT_0040e56c;
  auVar58._12_4_ = uStack_7a4;
  auVar105 = _lqc2(auVar58);
  iVar68 = *(int *)(pauVar1[3] + 8);
  auVar69 = _sqc2(auVar105);
  if (iVar68 == 1) {
    auVar40._4_4_ = uVar71;
    auVar40._0_4_ = uVar84;
    auVar40._8_4_ = uStack_8c8;
    auVar40._12_4_ = uStack_8b4;
    auVar107 = _lqc2(auVar40);
    auVar107 = _qmfc2(auVar107._0_4_);
    auVar20._4_4_ = uVar72;
    auVar20._0_4_ = uVar83;
    auVar20._8_4_ = uStack_a4c;
    auVar20._12_4_ = uStack_a34;
    auVar113 = _lqc2(auVar20);
    if (auVar107._0_4_ < 0.999) {
      auVar44._4_4_ = uVar75;
      auVar44._0_4_ = uVar74;
      auVar44._8_4_ = uStack_8ac;
      auVar44._12_4_ = uStack_894;
      auVar110 = _lqc2(auVar44);
      auVar49._4_4_ = uStack_87c;
      auVar49._0_4_ = uStack_888;
      auVar49._8_4_ = uVar79;
      auVar49._12_4_ = uStack_864;
      auVar107 = _lqc2(auVar49);
      auVar110 = _vmulbc(auVar110,auVar110);
      auVar107 = _vmulbc(auVar107,auVar107);
      auVar11._4_4_ = uVar82;
      auVar11._0_4_ = uVar76;
      auVar11._8_4_ = uStack_b38;
      auVar11._12_4_ = uStack_b24;
      auVar113 = _lqc2(auVar11);
      auVar107 = _vaddbc(auVar110,auVar107);
      auVar16._4_4_ = auVar106._0_4_;
      auVar16._0_4_ = auVar104._0_4_;
      auVar16._8_4_ = uStack_a68;
      auVar16._12_4_ = uStack_a54;
      auVar110 = _lqc2(auVar16);
      auVar107 = _qmfc2(auVar107._0_4_);
      _vopmula(auVar113,auVar110);
      auVar113 = _vopmsub(auVar110,auVar113);
      _vmove(auVar112);
      fVar81 = *(float *)pauVar1[3];
      fVar86 = 1.0 / SQRT(auVar107._0_4_);
      auVar41._4_4_ = uVar71;
      auVar41._0_4_ = uVar84;
      auVar41._8_4_ = uStack_8c8;
      auVar41._12_4_ = uStack_8b4;
      auVar108 = _lqc2(auVar41);
      auVar107 = _qmtc2(fVar81);
      auVar107 = _vsubbc(auVar107,auVar108);
      auVar110 = _qmtc2(fVar86);
      auVar112 = _qmtc2(fVar86);
      auVar107 = _vmulbc(auVar107,auVar110);
      auVar113 = _vmulbc(auVar113,auVar112);
      auVar112 = _qmfc2(auVar107._0_4_);
      auVar12._4_4_ = uVar82;
      auVar12._0_4_ = uVar76;
      auVar12._8_4_ = uStack_b38;
      auVar12._12_4_ = uStack_b24;
      auVar114 = _lqc2(auVar12);
      auVar107 = _qmtc2(auVar112._0_4_);
      auVar110 = _vaddbc(in_vf0,auVar107);
      _vopmula(auVar113,auVar114);
      auVar114 = _vopmsub(auVar114,auVar113);
      auVar107 = _sqc2(auVar110);
      if (0.0 < auVar112._0_4_) {
        auVar107 = _qmtc2(0);
        _lqc2(auVar69);
        auVar105 = _vaddbc(in_vf0,auVar107);
        auVar110 = _vaddbc(in_vf0,auVar107);
        iVar68 = *(int *)(pauVar1[3] + 0xc);
      }
      else if (0.0 < fVar81) {
        auVar105 = _vmulbc(auVar108,auVar108);
        auVar112 = _qmtc2(fVar81 * fVar81);
        auVar105 = _vsubbc(auVar105,auVar112);
        auVar105 = _qmfc2(auVar105._0_4_);
        fVar81 = auVar105._0_4_;
        if (0.0 < fVar81) {
          fVar81 = SQRT(fVar81) / *(float *)pauVar1[3];
        }
        _lqc2(auVar69);
        auVar69 = _qmtc2(fVar81);
        _lqc2(auVar107);
        auVar105 = _vaddbc(in_vf0,auVar69);
        auVar69 = _qmtc2(-fVar81);
        auVar110 = _vaddbc(in_vf0,auVar69);
        iVar68 = *(int *)(pauVar1[3] + 0xc);
      }
      else {
        iVar68 = *(int *)(pauVar1[3] + 0xc);
      }
      goto LAB_003809c0;
    }
    auVar25._4_4_ = uStack_a1c;
    auVar25._0_4_ = uStack_a28;
    auVar25._8_4_ = uVar77;
    auVar25._12_4_ = uStack_a04;
    auVar114 = _lqc2(auVar25);
  }
  else if (iVar68 < 2) {
    auVar18._4_4_ = uVar72;
    auVar18._0_4_ = uVar83;
    auVar18._8_4_ = uStack_a4c;
    auVar18._12_4_ = uStack_a34;
    auVar113 = _lqc2(auVar18);
    if (iVar68 == 0) {
      _vmove(auVar112);
      auVar105 = _qmtc2(fVar95);
      _lqc2(auVar69);
      _vaddbc(in_vf0,auVar105);
      _vaddbc(in_vf0,auVar105);
      auVar107 = _qmtc2(0x3f000000);
      auVar112 = _qmtc2(fVar93);
      auVar7._4_4_ = ((fVar89 + fVar102) - fVar87) - fVar100;
      auVar7._0_4_ = (fVar91 - fVar80) - fVar85;
      auVar7._8_4_ = fVar92 + fVar97 + fVar88;
      auVar7._12_4_ = fVar95;
      auVar69 = _lqc2(auVar7);
      auVar8._4_4_ = fVar81;
      auVar8._0_4_ = fVar99;
      auVar8._8_4_ = fVar90;
      auVar8._12_4_ = fVar93;
      auVar105 = _lqc2(auVar8);
      auVar113 = _vmulbc(auVar69,auVar107);
      auVar114 = _vmulbc(auVar105,auVar107);
      auVar105 = _vaddbc(in_vf0,auVar112);
      auVar110 = _vaddbc(in_vf0,auVar112);
      iVar68 = *(int *)(pauVar1[3] + 0xc);
      goto LAB_003809c0;
    }
    auVar23._4_4_ = uStack_a1c;
    auVar23._0_4_ = uStack_a28;
    auVar23._8_4_ = uVar77;
    auVar23._12_4_ = uStack_a04;
    auVar114 = _lqc2(auVar23);
  }
  else if (iVar68 == 2) {
    auVar45._4_4_ = uVar75;
    auVar45._0_4_ = uVar74;
    auVar45._8_4_ = uStack_8ac;
    auVar45._12_4_ = uStack_894;
    auVar105 = _lqc2(auVar45);
    if (*(int *)(pauVar1[3] + 0xc) == 0) {
      _vmove(auVar112);
      auVar112 = _qmtc2(0x3f000000);
      auVar107 = _qmtc2(fVar93);
      auVar9._4_4_ = fVar81;
      auVar9._0_4_ = fVar99;
      auVar9._8_4_ = fVar90;
      auVar9._12_4_ = fVar93;
      auVar105 = _lqc2(auVar9);
      _lqc2(auVar69);
      auVar114 = _vmulbc(auVar105,auVar112);
      auVar105 = _vaddbc(in_vf0,auVar107);
      auVar110 = _vaddbc(in_vf0,auVar107);
    }
    else {
      auVar105 = _qmfc2(auVar105._0_4_);
      auVar21._4_4_ = uVar72;
      auVar21._0_4_ = uVar83;
      auVar21._8_4_ = uStack_a4c;
      auVar21._12_4_ = uStack_a34;
      auVar113 = _lqc2(auVar21);
      _vmove(auVar112);
      auVar13._4_4_ = uVar82;
      auVar13._0_4_ = uVar76;
      auVar13._8_4_ = uStack_b38;
      auVar13._12_4_ = uStack_b24;
      auVar107 = _lqc2(auVar13);
      _lqc2(auVar69);
      _vopmula(auVar107,auVar113);
      auVar114 = _vopmsub(auVar113,auVar107);
      auVar69 = _qmtc2(-auVar105._0_4_);
      auVar105 = _vaddbc(in_vf0,auVar69);
      auVar110 = _vaddbc(in_vf0,auVar69);
      auVar69 = _qmfc2(auVar113._0_4_);
      uVar83 = auVar69._0_4_;
    }
    auVar50._4_4_ = uStack_87c;
    auVar50._0_4_ = uStack_888;
    auVar50._8_4_ = uVar79;
    auVar50._12_4_ = uStack_864;
    auVar69 = _lqc2(auVar50);
    auVar69 = _qmfc2(auVar69._0_4_);
    fVar81 = auVar69._0_4_;
    auVar113 = _qmtc2(uVar83);
    if (fVar81 != 0.0) {
      auVar42._4_4_ = uVar71;
      auVar42._0_4_ = uVar84;
      auVar42._8_4_ = uStack_8c8;
      auVar42._12_4_ = uStack_8b4;
      auVar107 = _lqc2(auVar42);
      auVar69 = _qmtc2(*(undefined4 *)pauVar1[3]);
      auVar69 = _vsubbc(auVar69,auVar107);
      auVar69 = _qmfc2(auVar69._0_4_);
      fVar86 = auVar69._0_4_ / fVar81;
      if (fVar81 < 0.0) {
        auVar69 = _qmtc2(fVar86);
        auVar105 = _vaddbc(in_vf0,auVar69);
        iVar68 = *(int *)(pauVar1[3] + 0xc);
      }
      else {
        auVar69 = _qmtc2(fVar86);
        auVar110 = _vaddbc(in_vf0,auVar69);
        iVar68 = *(int *)(pauVar1[3] + 0xc);
      }
      goto LAB_003809c0;
    }
  }
  else {
    auVar19._4_4_ = uVar72;
    auVar19._0_4_ = uVar83;
    auVar19._8_4_ = uStack_a4c;
    auVar19._12_4_ = uStack_a34;
    auVar113 = _lqc2(auVar19);
    if (iVar68 == 3) {
      auVar46._4_4_ = uVar75;
      auVar46._0_4_ = uVar74;
      auVar46._8_4_ = uStack_8ac;
      auVar46._12_4_ = uStack_894;
      auVar105 = _lqc2(auVar46);
      if (*(int *)(pauVar1[3] + 0xc) == 0) {
        _vmove(auVar112);
        auVar112 = _qmtc2(0x3f000000);
        auVar107 = _qmtc2(fVar93);
        auVar10._4_4_ = fVar81;
        auVar10._0_4_ = fVar99;
        auVar10._8_4_ = fVar90;
        auVar10._12_4_ = fVar93;
        auVar105 = _lqc2(auVar10);
        _lqc2(auVar69);
        auVar114 = _vmulbc(auVar105,auVar112);
        auVar105 = _vaddbc(in_vf0,auVar107);
        auVar110 = _vaddbc(in_vf0,auVar107);
      }
      else {
        auVar105 = _qmfc2(auVar105._0_4_);
        auVar22._4_4_ = uVar72;
        auVar22._0_4_ = uVar83;
        auVar22._8_4_ = uStack_a4c;
        auVar22._12_4_ = uStack_a34;
        auVar110 = _lqc2(auVar22);
        _vmove(auVar112);
        auVar14._4_4_ = uVar82;
        auVar14._0_4_ = uVar76;
        auVar14._8_4_ = uStack_b38;
        auVar14._12_4_ = uStack_b24;
        auVar107 = _lqc2(auVar14);
        _lqc2(auVar69);
        _vopmula(auVar107,auVar110);
        auVar114 = _vopmsub(auVar110,auVar107);
        auVar69 = _qmfc2(auVar110._0_4_);
        uVar83 = auVar69._0_4_;
        auVar69 = _qmtc2(-auVar105._0_4_);
        auVar105 = _vaddbc(in_vf0,auVar69);
        auVar110 = _vaddbc(in_vf0,auVar69);
      }
      auVar113 = _qmtc2(uVar83);
    }
    else {
      auVar24._4_4_ = uStack_a1c;
      auVar24._0_4_ = uStack_a28;
      auVar24._8_4_ = uVar77;
      auVar24._12_4_ = uStack_a04;
      auVar114 = _lqc2(auVar24);
    }
  }
  iVar68 = *(int *)(pauVar1[3] + 0xc);
LAB_003809c0:
  if (iVar68 == 0) {
    auVar105 = _qmtc2(0x3f000000);
    auVar104 = _qmtc2(fVar94);
    auVar6._4_4_ = fVar91 + fVar80 + fVar85;
    auVar6._0_4_ = ((fVar89 + fVar100) - fVar102) - fVar87;
    auVar6._8_4_ = (fVar98 - fVar101) - fVar96;
    auVar6._12_4_ = fVar94;
    auVar69 = _lqc2(auVar6);
    auVar106 = _vmulbc(auVar69,auVar105);
    auVar105 = _vaddbc(in_vf0,auVar104);
    auVar110 = _vaddbc(in_vf0,auVar104);
    auVar69 = _lqc2(pauVar2[3]);
  }
  else {
    auVar17._4_4_ = auVar106._0_4_;
    auVar17._0_4_ = auVar104._0_4_;
    auVar17._8_4_ = uStack_a68;
    auVar17._12_4_ = uStack_a54;
    auVar106 = _lqc2(auVar17);
    if (iVar68 == 1) {
      auVar47._4_4_ = uVar75;
      auVar47._0_4_ = uVar74;
      auVar47._8_4_ = uStack_8ac;
      auVar47._12_4_ = uStack_894;
      auVar104 = _lqc2(auVar47);
      auVar51._4_4_ = uStack_87c;
      auVar51._0_4_ = uStack_888;
      auVar51._8_4_ = uVar79;
      auVar51._12_4_ = uStack_864;
      auVar69 = _lqc2(auVar51);
      auVar69 = _vsubbc(auVar104,auVar69);
      auVar15._4_4_ = uVar82;
      auVar15._0_4_ = uVar76;
      auVar15._8_4_ = uStack_b38;
      auVar15._12_4_ = uStack_b24;
      auVar106 = _lqc2(auVar15);
      auVar69 = _sqc2(auVar69);
      auVar48._4_4_ = uVar75;
      auVar48._0_4_ = uVar74;
      auVar48._8_4_ = uStack_8ac;
      auVar48._12_4_ = uStack_894;
      auVar107 = _lqc2(auVar48);
      auVar52._4_4_ = uStack_87c;
      auVar52._0_4_ = uStack_888;
      auVar52._8_4_ = uVar79;
      auVar52._12_4_ = uStack_864;
      auVar104 = _lqc2(auVar52);
      fStack_798 = auVar69._8_4_;
      auVar69 = _vaddbc(auVar107,auVar104);
      auVar69 = _sqc2(auVar69);
      fStack_78c = auVar69._4_4_;
      if (fStack_798 == 0.0) {
        auVar69 = _lqc2(pauVar2[3]);
      }
      else {
        auVar104 = _qmtc2(0x3f800000);
        auVar43._4_4_ = uVar71;
        auVar43._0_4_ = uVar84;
        auVar43._8_4_ = uStack_8c8;
        auVar43._12_4_ = uStack_8b4;
        auVar69 = _lqc2(auVar43);
        auVar69 = _vaddbc(auVar69,auVar104);
        auVar104 = _qmtc2(*(undefined4 *)(pauVar1[3] + 4));
        auVar69 = _vmulbc(auVar69,auVar104);
        auVar69 = _qmfc2(auVar69._0_4_);
        fVar80 = (auVar69._0_4_ - fStack_78c) / fStack_798;
        if (fStack_798 < 0.0) {
          auVar69 = _qmtc2(fVar80);
          auVar105 = _vaddbc(in_vf0,auVar69);
          auVar69 = _lqc2(pauVar2[3]);
        }
        else {
          auVar69 = _qmtc2(fVar80);
          auVar110 = _vaddbc(in_vf0,auVar69);
          auVar69 = _lqc2(pauVar2[3]);
        }
      }
    }
    else {
      auVar69 = _lqc2(pauVar2[3]);
    }
  }
  auVar107 = _lqc2(pauVar3[3]);
  auVar104 = _lqc2(pauVar3[10]);
  auVar107 = _vsub(auVar107,auVar69);
  auVar69 = _lqc2(pauVar2[10]);
  auVar104 = _vadd(auVar107,auVar104);
  auVar107 = _vsub(auVar104,auVar69);
  auVar104 = _vmul(auVar106,auVar107);
  auVar108 = _vmul(auVar113,auVar107);
  auVar69 = _vaddbc(auVar104,auVar104);
  auVar107 = _vmul(auVar114,auVar107);
  auVar69 = _vaddbc(auVar69,auVar104);
  auVar112 = _vaddbc(auVar108,auVar108);
  auVar104 = _qmfc2(auVar69._0_4_);
  auVar69 = _vaddbc(auVar107,auVar107);
  auVar112 = _vaddbc(auVar112,auVar108);
  auVar69 = _vaddbc(auVar69,auVar107);
  auVar107 = _qmfc2(auVar112._0_4_);
  auVar69 = _qmfc2(auVar69._0_4_);
  uVar82 = *(undefined4 *)pauVar1[2];
  auVar59._4_4_ = auVar107._0_4_;
  auVar59._0_4_ = auVar104._0_4_;
  auVar59._8_4_ = auVar69._0_4_;
  auVar59._12_4_ = uStack_774;
  auVar104 = _lqc2(auVar59);
  auVar112 = _vadd(auVar105,auVar104);
  uVar83 = *(undefined4 *)(pauVar1[2] + 4);
  auVar107 = _vadd(auVar110,auVar104);
  *(int *)((int)param_1 + 0x2c) = *(int *)(param_2 + 0x1c) << 1;
  uVar84 = *(undefined4 *)pauVar1[2];
  auVar60._4_4_ = uVar83;
  auVar60._0_4_ = uVar82;
  auVar60._8_4_ = uVar83;
  auVar60._12_4_ = uStack_764;
  auVar69 = _lqc2(auVar60);
  uVar82 = *(undefined4 *)(pauVar1[2] + 4);
  auVar69 = _vsub(auVar104,auVar69);
  auVar69 = _vmini(auVar69,auVar112);
  auVar105 = _vmax(auVar107,auVar69);
  *(int *)((int)param_1 + 0xdc) = param_2;
  auVar61._4_4_ = uVar82;
  auVar61._0_4_ = uVar84;
  auVar61._8_4_ = uVar82;
  auVar61._12_4_ = uStack_754;
  auVar69 = _lqc2(auVar61);
  auVar69 = _vadd(auVar104,auVar69);
  uVar5 = *(uint *)(pauVar3[8] + 0xc);
  auVar69 = _vmax(auVar69,auVar107);
  auVar104 = _vmini(auVar112,auVar69);
  auVar69 = _vmove(auVar105);
  if ((*(uint *)(pauVar2[8] + 0xc) & 4) == 0) {
    auVar107 = _qmfc2(auVar116._0_4_);
    auVar69 = _sqc2(auVar116);
    uStack_4fc = auVar69._4_4_;
    auVar69 = _sqc2(auVar116);
    uStack_4e8 = auVar69._8_4_;
    auVar112 = _qmfc2(auVar121._0_4_);
    *param_1 = CONCAT44(uStack_4fc,auVar107._0_4_);
    *(undefined4 *)(param_1 + 1) = uStack_4e8;
    auVar69 = _sqc2(auVar121);
    uStack_4cc = auVar69._4_4_;
    auVar69 = _sqc2(auVar121);
    uStack_4b8 = auVar69._8_4_;
    auVar69 = _vsub(in_vf0,auVar104);
    auVar66 = _lqc2(auVar66);
    auVar104 = _vsub(in_vf0,auVar105);
    auVar105 = _lqc2(auVar103);
    auVar103 = _vsub(in_vf0,auVar66);
    auVar66 = _vsub(in_vf0,auVar105);
    auStack_170 = _sqc2(auVar66);
    auStack_180 = _sqc2(auVar103);
    _lqc2(auStack_480);
    param_1[2] = CONCAT44(uStack_4cc,auVar112._0_4_);
    *(undefined4 *)(param_1 + 3) = uStack_4b8;
    uVar82 = *(undefined4 *)(pauVar3[1] + 0xc);
    _lqc2(auStack_470);
    *(undefined4 *)((int)param_1 + 0xcc) = *(undefined4 *)(pauVar3[7] + 0xc);
    *(undefined4 *)((int)param_1 + 0xc) = uVar82;
    auVar66 = _lqc2(pauVar3[8]);
    auVar103 = _lqc2(pauVar3[7]);
    _lqc2(auStack_460);
    _vmr32(auVar66);
    _vmove(auVar66);
    auVar107 = _vmove(auVar103);
    auVar66 = _vmr32(auVar103);
    _vaddbc(in_vf0,auVar103);
    auVar105 = _vmr32(auVar66);
    uVar82 = *(undefined4 *)(pauVar2[1] + 0xc);
    auVar112 = _qmfc2(auVar107._0_4_);
    auVar28._4_4_ = uVar67;
    auVar28._0_4_ = uVar65;
    auVar28._8_4_ = uStack_998;
    auVar28._12_4_ = uStack_984;
    auVar103 = _lqc2(auVar28);
    _vmulabc(auVar107,auVar114);
    _vmaddabc(auVar66,auVar114);
    auVar117 = _vmaddbc(auVar105,auVar114);
    auVar32._4_4_ = uVar70;
    auVar32._0_4_ = uVar73;
    auVar32._8_4_ = uStack_97c;
    auVar32._12_4_ = uStack_964;
    auVar110 = _lqc2(auVar32);
    _vopmula(auVar116,auVar103);
    auVar119 = _vopmsub(auVar103,auVar116);
    auVar37._4_4_ = uStack_94c;
    auVar37._0_4_ = uStack_958;
    auVar37._8_4_ = uVar78;
    auVar37._12_4_ = uStack_934;
    auVar103 = _lqc2(auVar37);
    _vopmula(auVar116,auVar110);
    auVar121 = _vopmsub(auVar110,auVar116);
    *(undefined4 *)((int)param_1 + 0xec) = *(undefined4 *)(pauVar2[7] + 0xc);
    _vopmula(auVar116,auVar103);
    auVar110 = _vopmsub(auVar103,auVar116);
    *(undefined4 *)((int)param_1 + 0x1c) = uVar82;
    _vmulabc(auVar107,auVar119);
    _vmaddabc(auVar66,auVar119);
    auVar116 = _vmaddbc(auVar105,auVar119);
    _vmulabc(auVar107,auVar121);
    _vmaddabc(auVar66,auVar121);
    auVar108 = _vmaddbc(auVar105,auVar121);
    _vmulabc(auVar107,auVar110);
    _vmaddabc(auVar66,auVar110);
    auVar109 = _vmaddbc(auVar105,auVar110);
    _vmulabc(auVar107,auVar106);
    _vmaddabc(auVar66,auVar106);
    auVar111 = _vmaddbc(auVar105,auVar106);
    _vmulabc(auVar107,auVar113);
    _vmaddabc(auVar66,auVar113);
    auVar115 = _vmaddbc(auVar105,auVar113);
    _sqc2(auVar107);
    _sqc2(auVar66);
    _sqc2(auVar105);
    auVar103 = _sqc2(auVar107);
    auVar66 = _sqc2(auVar66);
    auVar105 = _sqc2(auVar105);
    auVar107 = _sqc2(auVar107);
    uStack_43c = auVar107._4_4_;
    auVar103 = _lqc2(auVar103);
    auVar103 = _sqc2(auVar103);
    uStack_428 = auVar103._8_4_;
    auVar103 = _lqc2(auVar105);
    param_1[0x18] = CONCAT44(uStack_43c,auVar112._0_4_);
    *(undefined4 *)(param_1 + 0x19) = uStack_428;
    auVar103 = _sqc2(auVar103);
    uStack_408 = auVar103._8_4_;
    auVar103 = _lqc2(auVar66);
    auVar103 = _sqc2(auVar103);
    uStack_3fc = auVar103._4_4_;
    auVar103 = _lqc2(auVar66);
    auVar103 = _sqc2(auVar103);
    uStack_3e8 = auVar103._8_4_;
    auVar66 = _vmul(auVar116,auVar119);
    auVar103 = _vaddbc(auVar66,auVar66);
    auVar112 = _vmul(auVar109,auVar110);
    auVar105 = _vmul(auVar108,auVar121);
    auVar107 = _vaddbc(auVar103,auVar66);
    auVar103 = _vaddbc(auVar105,auVar105);
    param_1[0x1a] = CONCAT44(uStack_3fc,uStack_408);
    *(undefined4 *)(param_1 + 0x1b) = uStack_3e8;
    auVar66 = _vaddbc(auVar103,auVar105);
    auVar103 = _vaddbc(auVar112,auVar112);
    auVar110 = _vmul(auVar111,auVar106);
    auVar105 = _vaddbc(auVar103,auVar112);
    auVar116 = _vmul(auVar115,auVar113);
    auVar108 = _vmul(auVar117,auVar114);
    auVar103 = _qmtc2(*(undefined4 *)((int)param_1 + 0xcc));
    auVar112 = _vaddbc(auVar107,auVar103);
    auVar107 = _vaddbc(auVar66,auVar103);
    auVar66 = _qmfc2(auVar112._0_4_);
    auVar103 = _vaddbc(auVar105,auVar103);
    _qmfc2(auVar107._0_4_);
    _qmfc2(auVar103._0_4_);
    auVar103 = _vaddbc(auVar110,auVar110);
    auVar103 = _vaddbc(auVar103,auVar110);
    auVar103 = _qmfc2(auVar103._0_4_);
    auVar105 = _vaddbc(auVar116,auVar116);
    auVar107 = _vaddbc(auVar105,auVar116);
    auVar105 = _vaddbc(auVar108,auVar108);
    _qmfc2(auVar107._0_4_);
    auVar105 = _vaddbc(auVar105,auVar108);
    _qmfc2(auVar105._0_4_);
    auVar66 = _qmtc2(auVar66._0_4_);
    auVar103 = _qmtc2(auVar103._0_4_);
  }
  else {
    auVar66 = _qmfc2(auVar121._0_4_);
    auVar103 = _sqc2(auVar121);
    uStack_73c = auVar103._4_4_;
    auVar103 = _sqc2(auVar121);
    uStack_728 = auVar103._8_4_;
    auVar105 = _qmfc2(auVar116._0_4_);
    *param_1 = CONCAT44(uStack_73c,auVar66._0_4_);
    *(undefined4 *)(param_1 + 1) = uStack_728;
    auVar103 = _sqc2(auVar116);
    uStack_70c = auVar103._4_4_;
    auVar103 = _sqc2(auVar116);
    uStack_6f8 = auVar103._8_4_;
    _lqc2(auStack_6c0);
    param_1[2] = CONCAT44(uStack_70c,auVar105._0_4_);
    *(undefined4 *)(param_1 + 3) = uStack_6f8;
    uVar82 = *(undefined4 *)(pauVar2[1] + 0xc);
    _lqc2(auStack_6b0);
    *(undefined4 *)((int)param_1 + 0xcc) = *(undefined4 *)(pauVar2[7] + 0xc);
    *(undefined4 *)((int)param_1 + 0xc) = uVar82;
    auVar66 = _lqc2(pauVar2[8]);
    auVar103 = _lqc2(pauVar2[7]);
    _lqc2(auStack_6a0);
    _vmr32(auVar66);
    _vmove(auVar66);
    auVar107 = _vmove(auVar103);
    auVar66 = _vmr32(auVar103);
    _vaddbc(in_vf0,auVar103);
    auVar105 = _vmr32(auVar66);
    uVar82 = *(undefined4 *)(pauVar3[1] + 0xc);
    auVar112 = _qmfc2(auVar107._0_4_);
    auVar26._4_4_ = uVar67;
    auVar26._0_4_ = uVar65;
    auVar26._8_4_ = uStack_998;
    auVar26._12_4_ = uStack_984;
    auVar103 = _lqc2(auVar26);
    _vmulabc(auVar107,auVar114);
    _vmaddabc(auVar66,auVar114);
    auVar118 = _vmaddbc(auVar105,auVar114);
    auVar30._4_4_ = uVar70;
    auVar30._0_4_ = uVar73;
    auVar30._8_4_ = uStack_97c;
    auVar30._12_4_ = uStack_964;
    auVar110 = _lqc2(auVar30);
    _vopmula(auVar121,auVar103);
    auVar109 = _vopmsub(auVar103,auVar121);
    auVar35._4_4_ = uStack_94c;
    auVar35._0_4_ = uStack_958;
    auVar35._8_4_ = uVar78;
    auVar35._12_4_ = uStack_934;
    auVar103 = _lqc2(auVar35);
    _vopmula(auVar121,auVar110);
    auVar111 = _vopmsub(auVar110,auVar121);
    *(undefined4 *)((int)param_1 + 0xec) = *(undefined4 *)(pauVar3[7] + 0xc);
    _vopmula(auVar121,auVar103);
    auVar108 = _vopmsub(auVar103,auVar121);
    *(undefined4 *)((int)param_1 + 0x1c) = uVar82;
    _vmulabc(auVar107,auVar109);
    _vmaddabc(auVar66,auVar109);
    auVar110 = _vmaddbc(auVar105,auVar109);
    _vmulabc(auVar107,auVar111);
    _vmaddabc(auVar66,auVar111);
    auVar119 = _vmaddbc(auVar105,auVar111);
    _vmulabc(auVar107,auVar108);
    _vmaddabc(auVar66,auVar108);
    auVar121 = _vmaddbc(auVar105,auVar108);
    _vmulabc(auVar107,auVar106);
    _vmaddabc(auVar66,auVar106);
    auVar115 = _vmaddbc(auVar105,auVar106);
    _vmulabc(auVar107,auVar113);
    _vmaddabc(auVar66,auVar113);
    auVar117 = _vmaddbc(auVar105,auVar113);
    _sqc2(auVar107);
    _sqc2(auVar66);
    _sqc2(auVar105);
    auVar103 = _sqc2(auVar107);
    auVar66 = _sqc2(auVar66);
    auVar105 = _sqc2(auVar105);
    auVar107 = _sqc2(auVar107);
    uStack_67c = auVar107._4_4_;
    auVar103 = _lqc2(auVar103);
    auVar103 = _sqc2(auVar103);
    uStack_668 = auVar103._8_4_;
    auVar103 = _lqc2(auVar105);
    param_1[0x18] = CONCAT44(uStack_67c,auVar112._0_4_);
    *(undefined4 *)(param_1 + 0x19) = uStack_668;
    auVar103 = _sqc2(auVar103);
    uStack_648 = auVar103._8_4_;
    auVar103 = _lqc2(auVar66);
    auVar103 = _sqc2(auVar103);
    uStack_63c = auVar103._4_4_;
    auVar103 = _lqc2(auVar66);
    auVar103 = _sqc2(auVar103);
    uStack_628 = auVar103._8_4_;
    auVar103 = _vmul(auVar110,auVar109);
    auVar66 = _vaddbc(auVar103,auVar103);
    auVar112 = _vmul(auVar121,auVar108);
    auVar105 = _vmul(auVar119,auVar111);
    auVar107 = _vaddbc(auVar66,auVar103);
    auVar103 = _vaddbc(auVar105,auVar105);
    param_1[0x1a] = CONCAT44(uStack_63c,uStack_648);
    *(undefined4 *)(param_1 + 0x1b) = uStack_628;
    auVar66 = _vaddbc(auVar103,auVar105);
    auVar103 = _vaddbc(auVar112,auVar112);
    auVar110 = _vmul(auVar115,auVar106);
    auVar105 = _vaddbc(auVar103,auVar112);
    auVar108 = _vmul(auVar117,auVar113);
    auVar119 = _vmul(auVar118,auVar114);
    auVar103 = _qmtc2(*(undefined4 *)((int)param_1 + 0xcc));
    auVar112 = _vaddbc(auVar107,auVar103);
    auVar107 = _vaddbc(auVar66,auVar103);
    auVar66 = _qmfc2(auVar112._0_4_);
    auVar103 = _vaddbc(auVar105,auVar103);
    _qmfc2(auVar107._0_4_);
    _qmfc2(auVar103._0_4_);
    auVar103 = _vaddbc(auVar110,auVar110);
    auVar103 = _vaddbc(auVar103,auVar110);
    auVar103 = _qmfc2(auVar103._0_4_);
    auVar105 = _vaddbc(auVar108,auVar108);
    auVar107 = _vaddbc(auVar105,auVar108);
    auVar105 = _vaddbc(auVar119,auVar119);
    _qmfc2(auVar107._0_4_);
    auVar105 = _vaddbc(auVar105,auVar119);
    _qmfc2(auVar105._0_4_);
    auVar66 = _qmtc2(auVar66._0_4_);
    auVar103 = _qmtc2(auVar103._0_4_);
    if ((uVar5 & 4) != 0) {
      auVar107 = _lqc2(pauVar3[8]);
      auVar105 = _lqc2(pauVar3[7]);
      _lqc2(auStack_5d0);
      _lqc2(auStack_5c0);
      _lqc2(auStack_5b0);
      _vmr32(auVar107);
      _vmove(auVar107);
      auVar110 = _vmove(auVar105);
      auVar107 = _vmr32(auVar105);
      _vaddbc(in_vf0,auVar105);
      auVar112 = _vmr32(auVar107);
      auVar27._4_4_ = uVar67;
      auVar27._0_4_ = uVar65;
      auVar27._8_4_ = uStack_998;
      auVar27._12_4_ = uStack_984;
      auVar105 = _lqc2(auVar27);
      auVar31._4_4_ = uVar70;
      auVar31._0_4_ = uVar73;
      auVar31._8_4_ = uStack_97c;
      auVar31._12_4_ = uStack_964;
      auVar121 = _lqc2(auVar31);
      auVar108 = _qmfc2(auVar110._0_4_);
      auVar36._4_4_ = uStack_94c;
      auVar36._0_4_ = uStack_958;
      auVar36._8_4_ = uVar78;
      auVar36._12_4_ = uStack_934;
      auVar109 = _lqc2(auVar36);
      _vopmula(auVar116,auVar105);
      auVar119 = _vopmsub(auVar105,auVar116);
      *(uint *)((int)param_1 + 0x2c) = *(uint *)((int)param_1 + 0x2c) | 1;
      _vopmula(auVar116,auVar121);
      auVar121 = _vopmsub(auVar121,auVar116);
      _vopmula(auVar116,auVar109);
      auVar111 = _vopmsub(auVar109,auVar116);
      _vmulabc(auVar110,auVar114);
      _vmaddabc(auVar107,auVar114);
      auVar120 = _vmaddbc(auVar112,auVar114);
      _vmulabc(auVar110,auVar119);
      _vmaddabc(auVar107,auVar119);
      auVar116 = _vmaddbc(auVar112,auVar119);
      _vmulabc(auVar110,auVar121);
      _vmaddabc(auVar107,auVar121);
      auVar109 = _vmaddbc(auVar112,auVar121);
      _vmulabc(auVar110,auVar111);
      _vmaddabc(auVar107,auVar111);
      auVar115 = _vmaddbc(auVar112,auVar111);
      _vmulabc(auVar110,auVar106);
      _vmaddabc(auVar107,auVar106);
      auVar117 = _vmaddbc(auVar112,auVar106);
      _vmulabc(auVar110,auVar113);
      _vmaddabc(auVar107,auVar113);
      auVar118 = _vmaddbc(auVar112,auVar113);
      _sqc2(auVar110);
      _sqc2(auVar107);
      _sqc2(auVar112);
      auVar105 = _sqc2(auVar110);
      auVar107 = _sqc2(auVar107);
      auVar112 = _sqc2(auVar112);
      auVar110 = _sqc2(auVar110);
      uStack_58c = auVar110._4_4_;
      auVar105 = _lqc2(auVar105);
      auVar105 = _sqc2(auVar105);
      uStack_578 = auVar105._8_4_;
      auVar105 = _lqc2(auVar112);
      param_1[0x1c] = CONCAT44(uStack_58c,auVar108._0_4_);
      *(undefined4 *)(param_1 + 0x1d) = uStack_578;
      auVar105 = _sqc2(auVar105);
      uStack_558 = auVar105._8_4_;
      auVar105 = _lqc2(auVar107);
      auVar105 = _sqc2(auVar105);
      uStack_54c = auVar105._4_4_;
      auVar105 = _lqc2(auVar107);
      auVar105 = _sqc2(auVar105);
      uStack_538 = auVar105._8_4_;
      auVar107 = _vmul(auVar116,auVar119);
      auVar105 = _vaddbc(auVar107,auVar107);
      auVar112 = _vmul(auVar109,auVar121);
      auVar116 = _vaddbc(auVar105,auVar107);
      auVar107 = _vmul(auVar115,auVar111);
      auVar105 = _vaddbc(auVar112,auVar112);
      param_1[0x1e] = CONCAT44(uStack_54c,uStack_558);
      *(undefined4 *)(param_1 + 0x1f) = uStack_538;
      auVar110 = _vaddbc(auVar105,auVar112);
      auVar105 = _vaddbc(auVar107,auVar107);
      auVar108 = _vmul(auVar117,auVar106);
      auVar112 = _vaddbc(auVar105,auVar107);
      auVar119 = _vmul(auVar118,auVar113);
      auVar121 = _vmul(auVar120,auVar114);
      auVar107 = _qmtc2(*(undefined4 *)((int)param_1 + 0xec));
      auVar105 = _vaddbc(auVar116,auVar107);
      auVar110 = _vaddbc(auVar110,auVar107);
      auVar105 = _qmfc2(auVar105._0_4_);
      auVar112 = _vaddbc(auVar112,auVar107);
      auVar107 = _qmfc2(auVar110._0_4_);
      auVar112 = _qmfc2(auVar112._0_4_);
      auVar110 = _vaddbc(auVar108,auVar108);
      auVar110 = _vaddbc(auVar110,auVar108);
      auVar110 = _qmfc2(auVar110._0_4_);
      auVar116 = _vaddbc(auVar119,auVar119);
      auVar108 = _vaddbc(auVar116,auVar119);
      auVar116 = _vaddbc(auVar121,auVar121);
      auVar62._4_4_ = auVar107._0_4_;
      auVar62._0_4_ = auVar105._0_4_;
      auVar62._8_4_ = auVar112._0_4_;
      auVar62._12_4_ = uStack_524;
      auVar112 = _lqc2(auVar62);
      auVar105 = _vaddbc(auVar116,auVar121);
      auVar107 = _qmfc2(auVar108._0_4_);
      auVar105 = _qmfc2(auVar105._0_4_);
      auVar66 = _vadd(auVar66,auVar112);
      auVar63._4_4_ = auVar107._0_4_;
      auVar63._0_4_ = auVar110._0_4_;
      auVar63._8_4_ = auVar105._0_4_;
      auVar63._12_4_ = uStack_514;
      auVar105 = _lqc2(auVar63);
      auVar103 = _vadd(auVar103,auVar105);
    }
  }
  auVar66 = _qmfc2(auVar66._0_4_);
  auVar66 = _qmtc2(1.0 / auVar66._0_4_);
  auVar66 = _vaddbc(in_vf0,auVar66);
  auVar66 = _sqc2(auVar66);
  fStack_3bc = auVar66._4_4_;
  auVar66 = _qmtc2(1.0 / fStack_3bc);
  auVar66 = _vaddbc(in_vf0,auVar66);
  auVar66 = _sqc2(auVar66);
  auVar103 = _qmfc2(auVar103._0_4_);
  fStack_3a8 = auVar66._8_4_;
  auVar66 = _qmtc2(1.0 / fStack_3a8);
  auVar105 = _vaddbc(in_vf0,auVar66);
  auVar103 = _qmtc2(0.5 / auVar103._0_4_);
  auVar103 = _vaddbc(in_vf0,auVar103);
  auVar103 = _sqc2(auVar103);
  fStack_39c = auVar103._4_4_;
  auVar103 = _qmtc2(0.5 / fStack_39c);
  auVar103 = _vaddbc(in_vf0,auVar103);
  auVar103 = _sqc2(auVar103);
  fStack_388 = auVar103._8_4_;
  auVar66 = _qmfc2(auVar105._0_4_);
  auVar103 = _qmtc2(0.5 / fStack_388);
  auVar107 = _vaddbc(in_vf0,auVar103);
  auVar103 = _sqc2(auVar105);
  uStack_36c = auVar103._4_4_;
  auVar103 = _sqc2(auVar105);
  uStack_358 = auVar103._8_4_;
  auVar105 = _qmfc2(auVar107._0_4_);
  param_1[0xe] = CONCAT44(uStack_36c,auVar66._0_4_);
  *(undefined4 *)(param_1 + 0xf) = uStack_358;
  auVar103 = _sqc2(auVar107);
  uStack_33c = auVar103._4_4_;
  auVar103 = _sqc2(auVar107);
  uStack_328 = auVar103._8_4_;
  auVar107 = _lqc2(auStack_180);
  auVar66 = _qmfc2(auVar107._0_4_);
  param_1[0x10] = CONCAT44(uStack_33c,auVar105._0_4_);
  *(undefined4 *)(param_1 + 0x11) = uStack_328;
  auVar103 = _sqc2(auVar107);
  uStack_30c = auVar103._4_4_;
  auVar103 = _sqc2(auVar107);
  uStack_2f8 = auVar103._8_4_;
  auVar105 = _lqc2(auStack_170);
  auVar103 = _qmfc2(auVar105._0_4_);
  param_1[0x16] = CONCAT44(uStack_30c,auVar66._0_4_);
  *(undefined4 *)(param_1 + 0x17) = uStack_2f8;
  *(int *)((int)param_1 + 0x3c) = auVar103._0_4_;
  auVar103 = _sqc2(auVar105);
  uStack_2ec = auVar103._4_4_;
  *(undefined4 *)((int)param_1 + 0x4c) = uStack_2ec;
  auVar103 = _sqc2(auVar105);
  auVar66 = _qmfc2(auVar69._0_4_);
  uStack_2d8 = auVar103._8_4_;
  *(undefined4 *)((int)param_1 + 0x5c) = uStack_2d8;
  *(int *)((int)param_1 + 0x6c) = auVar66._0_4_;
  auVar103 = _sqc2(auVar69);
  uStack_2cc = auVar103._4_4_;
  *(undefined4 *)((int)param_1 + 0x7c) = uStack_2cc;
  auVar103 = _sqc2(auVar69);
  auVar66 = _qmfc2(auVar104._0_4_);
  uStack_2b8 = auVar103._8_4_;
  *(undefined4 *)((int)param_1 + 0x8c) = uStack_2b8;
  *(int *)((int)param_1 + 0x9c) = auVar66._0_4_;
  auVar103 = _sqc2(auVar104);
  uStack_2ac = auVar103._4_4_;
  *(undefined4 *)((int)param_1 + 0xac) = uStack_2ac;
  auVar103 = _sqc2(auVar104);
  auVar29._4_4_ = uVar67;
  auVar29._0_4_ = uVar65;
  auVar29._8_4_ = uStack_998;
  auVar29._12_4_ = uStack_984;
  auVar105 = _lqc2(auVar29);
  auVar33._4_4_ = uVar70;
  auVar33._0_4_ = uVar73;
  auVar33._8_4_ = uStack_97c;
  auVar33._12_4_ = uStack_964;
  auVar69 = _lqc2(auVar33);
  auVar66 = _qmfc2(auVar105._0_4_);
  auVar38._4_4_ = uStack_94c;
  auVar38._0_4_ = uStack_958;
  auVar38._8_4_ = uVar78;
  auVar38._12_4_ = uStack_934;
  auVar104 = _lqc2(auVar38);
  auVar69 = _qmfc2(auVar69._0_4_);
  auVar104 = _qmfc2(auVar104._0_4_);
  uStack_298 = auVar103._8_4_;
  *(undefined4 *)((int)param_1 + 0xbc) = uStack_298;
  param_1[4] = CONCAT44(auVar69._0_4_,auVar66._0_4_);
  *(int *)(param_1 + 5) = auVar104._0_4_;
  auVar103 = _sqc2(auVar105);
  uStack_26c = auVar103._4_4_;
  auVar34._4_4_ = uVar70;
  auVar34._0_4_ = uVar73;
  auVar34._8_4_ = uStack_97c;
  auVar34._12_4_ = uStack_964;
  auVar103 = _lqc2(auVar34);
  auVar103 = _sqc2(auVar103);
  uStack_25c = auVar103._4_4_;
  auVar39._4_4_ = uStack_94c;
  auVar39._0_4_ = uStack_958;
  auVar39._8_4_ = uVar78;
  auVar39._12_4_ = uStack_934;
  auVar103 = _lqc2(auVar39);
  auVar103 = _sqc2(auVar103);
  uStack_24c = auVar103._4_4_;
  auVar69 = _qmfc2(auVar106._0_4_);
  auVar103 = _qmfc2(auVar113._0_4_);
  auVar66 = _qmfc2(auVar114._0_4_);
  param_1[6] = CONCAT44(uStack_25c,uStack_26c);
  *(undefined4 *)(param_1 + 7) = uStack_24c;
  param_1[8] = CONCAT44(auVar103._0_4_,auVar69._0_4_);
  *(int *)(param_1 + 9) = auVar66._0_4_;
  auVar103 = _sqc2(auVar106);
  uStack_21c = auVar103._4_4_;
  auVar103 = _sqc2(auVar113);
  uStack_20c = auVar103._4_4_;
  auVar103 = _sqc2(auVar114);
  uStack_1fc = auVar103._4_4_;
  param_1[10] = CONCAT44(uStack_20c,uStack_21c);
  *(undefined4 *)(param_1 + 0xb) = uStack_1fc;
  auVar103 = _sqc2(auVar106);
  uStack_1d8 = auVar103._8_4_;
  auVar103 = _sqc2(auVar113);
  uStack_1c8 = auVar103._8_4_;
  auVar103 = _sqc2(auVar114);
  uStack_1b8 = auVar103._8_4_;
  param_1[0xc] = CONCAT44(uStack_1c8,uStack_1d8);
  *(undefined4 *)(param_1 + 0xd) = uStack_1b8;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}


// ==== FUN_00381758 @ 00381758 ====
// GLOBAL DAT_0048eeb0 undefined4
// GLOBAL DAT_0048eeb4 undefined4
// GLOBAL DAT_0048eeb8 undefined4
// GLOBAL DAT_0048eebc undefined4
// GLOBAL DAT_0048eec0 undefined4
// GLOBAL DAT_0048eec4 undefined4
// GLOBAL DAT_0048eec8 undefined4
// GLOBAL DAT_0048eecc undefined4
// GLOBAL DAT_0048eed0 undefined4
// GLOBAL DAT_0048eed4 undefined4
// GLOBAL DAT_0048eed8 undefined4
// GLOBAL DAT_0048eedc undefined4
// GLOBAL DAT_0048eee0 undefined4
// GLOBAL DAT_0048eee4 undefined4
// GLOBAL DAT_0048eee8 undefined4
// GLOBAL DAT_0048eeec undefined4

void FUN_00381758(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff92c0,2);
      FUN_00100230(&gp0xffff92b8,2);
    }
    else {
      FUN_00100228(&gp0xffff92b8);
      FUN_00100258(&gp0xffff92c0);
      DAT_0048eeb0 = 0x3fc90fdb;
      DAT_0048eeb4 = 0xbe22f983;
      DAT_0048eeb8 = 0x4b400000;
      DAT_0048eebc = uStack_44;
      DAT_0048eec0 = 0xbe22f983;
      DAT_0048eec4 = 0x3f000000;
      DAT_0048eec8 = 0x3e800000;
      DAT_0048eecc = uStack_34;
      DAT_0048eed0 = 0xc2992661;
      DAT_0048eed4 = 0xc2255de0;
      DAT_0048eed8 = 0x42a33457;
      DAT_0048eedc = uStack_24;
      DAT_0048eee0 = 0x421ed7b7;
      DAT_0048eee4 = 0x40c90fda;
      DAT_0048eee8 = 0;
      DAT_0048eeec = uStack_14;
    }
  }
  return;
}


// ==== FUN_003818a0 @ 003818a0 ====

void FUN_003818a0(void)

{
  FUN_00381758(1,0xffff);
  return;
}


// ==== FUN_003818c0 @ 003818c0 ====

void FUN_003818c0(void)

{
  FUN_00381758(0,0xffff);
  return;
}


// ==== FUN_003818e0 @ 003818e0 ====
// GLOBAL DAT_0048eef0 undefined4
// GLOBAL DAT_0048eef4 undefined4
// GLOBAL DAT_0048eef8 undefined4
// GLOBAL DAT_0048eefc undefined4
// GLOBAL DAT_0048ef00 undefined4
// GLOBAL DAT_0048ef04 undefined4
// GLOBAL DAT_0048ef08 undefined4
// GLOBAL DAT_0048ef0c undefined4
// GLOBAL DAT_0048ef10 undefined4
// GLOBAL DAT_0048ef14 undefined4
// GLOBAL DAT_0048ef18 undefined4
// GLOBAL DAT_0048ef1c undefined4
// GLOBAL DAT_0048ef20 undefined4
// GLOBAL DAT_0048ef24 undefined4
// GLOBAL DAT_0048ef28 undefined4
// GLOBAL DAT_0048ef2c undefined4

void FUN_003818e0(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff92d0,2);
      FUN_00100230(&gp0xffff92c8,2);
    }
    else {
      FUN_00100228(&gp0xffff92c8);
      FUN_00100258(&gp0xffff92d0);
      DAT_0048eef0 = 0x3fc90fdb;
      DAT_0048eef4 = 0xbe22f983;
      DAT_0048eef8 = 0x4b400000;
      DAT_0048eefc = uStack_44;
      DAT_0048ef00 = 0xbe22f983;
      DAT_0048ef04 = 0x3f000000;
      DAT_0048ef08 = 0x3e800000;
      DAT_0048ef0c = uStack_34;
      DAT_0048ef10 = 0xc2992661;
      DAT_0048ef14 = 0xc2255de0;
      DAT_0048ef18 = 0x42a33457;
      DAT_0048ef1c = uStack_24;
      DAT_0048ef20 = 0x421ed7b7;
      DAT_0048ef24 = 0x40c90fda;
      DAT_0048ef28 = 0;
      DAT_0048ef2c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00381a28 @ 00381a28 ====

void FUN_00381a28(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x29c);
  do {
    FUN_00381ab0(iVar1);
    iVar1 = *(int *)(iVar1 + 0x2c);
  } while (iVar1 != param_1 + 0x270);
  return;
}


// ==== FUN_00381a70 @ 00381a70 ====

void FUN_00381a70(void)

{
  FUN_003818e0(1,0xffff);
  return;
}


// ==== FUN_00381a90 @ 00381a90 ====

void FUN_00381a90(void)

{
  FUN_003818e0(0,0xffff);
  return;
}


// ==== FUN_00381ab0 @ 00381ab0 ====

/* WARNING: Removing unreachable block (ram,0x00381fc8) */
/* WARNING: Removing unreachable block (ram,0x00381cb0) */
/* WARNING: Removing unreachable block (ram,0x00382040) */

void FUN_00381ab0(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
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
  undefined4 uStack_22c;
  undefined4 uStack_218;
  float fStack_20c;
  float fStack_1f8;
  undefined4 uStack_1b4;
  undefined4 uStack_1a4;
  undefined4 uStack_194;
  undefined4 uStack_188;
  undefined4 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_154;
  undefined4 uStack_148;
  undefined4 uStack_13c;
  undefined4 uStack_124;
  undefined4 uStack_10c;
  undefined4 uStack_f8;
  undefined4 uStack_dc;
  undefined4 uStack_c8;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_1[1] + 0xc);
  auVar8 = _lqc2(param_1[9]);
  auVar10 = _lqc2(param_1[2]);
  auVar11 = _lqc2(*pauVar1);
  auVar8 = _vadd(auVar10,auVar8);
  auVar8 = _vadd(auVar8,auVar11);
  auVar11 = _lqc2(param_1[1]);
  auVar8 = _sqc2(auVar8);
  auVar10 = _lqc2(pauVar1[1]);
  auVar11 = _vadd(auVar11,auVar10);
  auVar10 = _lqc2(auVar8);
  auVar12 = _lqc2(param_1[10]);
  auVar9 = _vadd(auVar11,auVar10);
  auVar11 = _lqc2(param_1[3]);
  auVar3 = _qmfc2(auVar9._0_4_);
  auVar10 = _lqc2(pauVar1[2]);
  auVar11 = _vadd(auVar11,auVar12);
  auVar12 = _vadd(auVar11,auVar10);
  auVar10 = _sqc2(auVar12);
  auVar11 = _sqc2(auVar9);
  uStack_22c = auVar11._4_4_;
  auVar11 = _sqc2(auVar9);
  uStack_218 = auVar11._8_4_;
  *(ulong *)param_1[1] = CONCAT44(uStack_22c,auVar3._0_4_);
  *(undefined4 *)(param_1[1] + 8) = uStack_218;
  auVar13 = _qmtc2(0x3f000000);
  auVar17 = _qmtc2(0x3f000000);
  auVar11 = _lqc2(pauVar1[3]);
  auVar11 = _vadd(auVar12,auVar11);
  auVar3 = _lqc2(*param_1);
  auVar15 = _vmul(auVar11,auVar3);
  _vopmula(auVar11,auVar3);
  auVar9 = _vopmsub(auVar3,auVar11);
  auVar12 = _qmtc2(*(float *)(*param_1 + 0xc));
  auVar3 = _vaddbc(auVar15,auVar15);
  auVar11 = _vmulbc(auVar11,auVar12);
  auVar3 = _vaddbc(auVar3,auVar15);
  auVar9 = _vadd(auVar9,auVar11);
  auVar11 = _vmulbc(auVar3,auVar13);
  fVar4 = *(float *)*param_1;
  auVar3 = _vmulbc(auVar9,auVar13);
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar12 = _vmulbc(auVar9,auVar17);
  *(float *)(*param_1 + 0xc) = *(float *)(*param_1 + 0xc) - auVar11._0_4_;
  *(float *)*param_1 = fVar4 + auVar3._0_4_;
  auVar11 = _sqc2(auVar12);
  fStack_20c = auVar11._4_4_;
  auVar11 = _qmtc2(0x3f000000);
  auVar11 = _vmulbc(auVar9,auVar11);
  *(float *)(*param_1 + 4) = *(float *)(*param_1 + 4) + fStack_20c;
  auVar11 = _sqc2(auVar11);
  fStack_1f8 = auVar11._8_4_;
  fVar6 = *(float *)*param_1;
  fVar5 = *(float *)(*param_1 + 4);
  fStack_1f8 = *(float *)(*param_1 + 8) + fStack_1f8;
  fVar4 = *(float *)(*param_1 + 0xc);
  *(float *)(*param_1 + 8) = fStack_1f8;
  auVar13._4_4_ = fVar5 * fVar5;
  auVar13._0_4_ = fVar6 * fVar6;
  auVar13._8_4_ = fStack_1f8 * fStack_1f8;
  auVar13._12_4_ = uStack_1b4;
  auVar11 = _lqc2(auVar13);
  auVar3 = _qmtc2(fVar4 * fVar4);
  auVar9 = _vmove(auVar11);
  auVar11 = _vaddbc(auVar9,auVar9);
  auVar11 = _vaddbc(auVar11,auVar9);
  auVar11 = _vaddbc(auVar11,auVar3);
  auVar11 = _qmfc2(auVar11._0_4_);
  auVar15._4_4_ = fVar5 * fVar4;
  auVar15._0_4_ = fVar6 * fVar4;
  auVar15._8_4_ = fStack_1f8 * fVar4;
  auVar15._12_4_ = uStack_1a4;
  auVar3 = _lqc2(auVar15);
  fVar4 = 1.0 / auVar11._0_4_;
  auVar11 = _sqc2(auVar3);
  auVar17._4_4_ = fVar5 * fStack_1f8;
  auVar17._0_4_ = fVar6 * fVar5;
  auVar17._8_4_ = fStack_1f8 * fVar6;
  auVar17._12_4_ = uStack_194;
  auVar3 = _lqc2(auVar17);
  fVar7 = SQRT(fVar4);
  auVar3 = _sqc2(auVar3);
  auVar12 = _lqc2(auVar3);
  auVar3 = _lqc2(auVar11);
  auVar9 = _vmove(auVar9);
  auVar11 = _qmtc2(fVar4 + fVar4);
  fVar5 = *(float *)(*param_1 + 4);
  fVar4 = *(float *)(*param_1 + 8);
  auVar16 = _vmulbc(auVar12,auVar11);
  fVar6 = *(float *)(*param_1 + 0xc);
  auVar14 = _vmulbc(auVar3,auVar11);
  auVar18 = _vmulbc(auVar9,auVar11);
  auVar3 = _vaddbc(auVar18,auVar18);
  auVar11 = _qmtc2(0x3f800000);
  auVar11 = _vsubbc(auVar11,auVar3);
  auVar3 = _vaddbc(auVar16,auVar14);
  auVar9 = _qmfc2(auVar11._0_4_);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar11 = _vsubbc(auVar16,auVar14);
  *(float *)*param_1 = *(float *)*param_1 * fVar7;
  *(float *)(*param_1 + 4) = fVar5 * fVar7;
  *(float *)(*param_1 + 8) = fVar4 * fVar7;
  *(float *)(*param_1 + 0xc) = fVar6 * fVar7;
  auVar11 = _sqc2(auVar11);
  uStack_188 = auVar11._8_4_;
  auVar11 = _vaddbc(auVar18,auVar18);
  auVar12 = _vsubbc(auVar16,auVar14);
  auVar13 = _qmtc2(0x3f800000);
  auVar11 = _vsubbc(auVar13,auVar11);
  auVar15 = _qmfc2(auVar11._0_4_);
  auVar17 = _qmfc2(auVar12._0_4_);
  auVar11 = _vaddbc(auVar16,auVar14);
  auVar19._4_4_ = auVar3._0_4_;
  auVar19._0_4_ = auVar9._0_4_;
  auVar19._8_4_ = uStack_188;
  auVar19._12_4_ = uStack_174;
  auVar12 = _lqc2(auVar19);
  auVar11 = _sqc2(auVar11);
  uStack_16c = auVar11._4_4_;
  auVar11 = _vaddbc(auVar16,auVar14);
  auVar11 = _sqc2(auVar11);
  uStack_148 = auVar11._8_4_;
  auVar11 = _vsubbc(auVar16,auVar14);
  auVar11 = _sqc2(auVar11);
  auVar3 = _vaddbc(auVar18,auVar18);
  uStack_13c = auVar11._4_4_;
  auVar11 = _vsubbc(auVar13,auVar3);
  auVar13 = _qmfc2(auVar11._0_4_);
  auVar9 = _qmfc2(auVar12._0_4_);
  auVar11 = _sqc2(auVar12);
  auVar3 = _sqc2(auVar12);
  uStack_10c = auVar3._4_4_;
  auVar11 = _lqc2(auVar11);
  auVar11 = _sqc2(auVar11);
  uStack_f8 = auVar11._8_4_;
  auVar11._4_4_ = auVar15._0_4_;
  auVar11._0_4_ = auVar17._0_4_;
  auVar11._8_4_ = uStack_16c;
  auVar11._12_4_ = uStack_154;
  auVar11 = _lqc2(auVar11);
  auVar12 = _qmfc2(auVar11._0_4_);
  *(ulong *)param_1[4] = CONCAT44(uStack_10c,auVar9._0_4_);
  *(undefined4 *)(param_1[4] + 8) = uStack_f8;
  auVar11 = _sqc2(auVar11);
  uStack_dc = auVar11._4_4_;
  auVar3._4_4_ = auVar15._0_4_;
  auVar3._0_4_ = auVar17._0_4_;
  auVar3._8_4_ = uStack_16c;
  auVar3._12_4_ = uStack_154;
  auVar11 = _lqc2(auVar3);
  auVar11 = _sqc2(auVar11);
  uStack_c8 = auVar11._8_4_;
  auVar9._4_4_ = uStack_13c;
  auVar9._0_4_ = uStack_148;
  auVar9._8_4_ = auVar13._0_4_;
  auVar9._12_4_ = uStack_124;
  auVar11 = _lqc2(auVar9);
  auVar3 = _qmfc2(auVar11._0_4_);
  *(ulong *)param_1[5] = CONCAT44(uStack_dc,auVar12._0_4_);
  *(undefined4 *)(param_1[5] + 8) = uStack_c8;
  auVar11 = _sqc2(auVar11);
  uStack_ac = auVar11._4_4_;
  auVar12._4_4_ = uStack_13c;
  auVar12._0_4_ = uStack_148;
  auVar12._8_4_ = auVar13._0_4_;
  auVar12._12_4_ = uStack_124;
  auVar11 = _lqc2(auVar12);
  auVar11 = _sqc2(auVar11);
  uStack_98 = auVar11._8_4_;
  *(ulong *)param_1[6] = CONCAT44(uStack_ac,auVar3._0_4_);
  *(undefined4 *)(param_1[6] + 8) = uStack_98;
  pauVar1 = *(undefined1 (**) [16])(param_1[5] + 0xc);
  _lqc2(param_1[7]);
  auVar9 = _lqc2(*pauVar1);
  *(undefined4 *)(param_1[7] + 0xc) = *(undefined4 *)pauVar1[1];
  _lqc2(param_1[8]);
  auVar11 = _lqc2(auVar10);
  fVar5 = *(float *)(pauVar1[1] + 0xc) * *(float *)(pauVar1[1] + 0xc);
  auVar10 = _qmtc2(1.0 - *(float *)(pauVar1[2] + 4));
  auVar10 = _vmulbc(auVar11,auVar10);
  auStack_80 = _sqc2(auVar10);
  auVar18 = _qmtc2(1.0 - *(float *)pauVar1[2]);
  auVar11 = _lqc2(auStack_80);
  auVar11 = _vmul(auVar10,auVar11);
  auVar14 = _lqc2(param_1[4]);
  auVar10 = _vaddbc(auVar11,auVar11);
  auVar19 = _lqc2(param_1[5]);
  auVar10 = _vaddbc(auVar10,auVar11);
  auVar17 = _lqc2(param_1[6]);
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar11 = _vmulbc(auVar14,auVar9);
  auVar3 = _vmulbc(auVar19,auVar9);
  auVar9 = _vmulbc(auVar17,auVar9);
  auVar12 = _vaddbc(in_vf0,auVar14);
  auVar13 = _vaddbc(in_vf0,auVar19);
  auVar15 = _vaddbc(in_vf0,auVar17);
  _vmulabc(auVar11,auVar14);
  _vmaddabc(auVar3,auVar19);
  auVar16 = _vmaddbc(auVar9,auVar17);
  _vmulabc(auVar11,auVar14);
  _vmaddabc(auVar3,auVar19);
  _vmaddbc(auVar9,auVar17);
  _vmulabc(auVar12,auVar11);
  _vmaddabc(auVar13,auVar3);
  auVar11 = _vmaddbc(auVar15,auVar9);
  fVar4 = auVar10._0_4_;
  auVar8 = _lqc2(auVar8);
  auVar10 = _vmulbc(auVar8,auVar18);
  auStack_90 = _sqc2(auVar10);
  auVar8 = _sqc2(auVar16);
  param_1[7] = auVar8;
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar8 = _sqc2(auVar11);
  param_1[8] = auVar8;
  if (fVar5 < fVar4) {
    auVar11 = _lqc2(auStack_80);
    auVar8 = _qmtc2(SQRT(fVar5 / fVar4));
    auVar8 = _vmulbc(auVar11,auVar8);
    auStack_80 = _sqc2(auVar8);
    fVar4 = fVar5;
  }
  auVar8 = _lqc2(auVar10);
  auVar11 = _vmul(auVar8,auVar8);
  fVar5 = *(float *)(*(int *)(param_1[5] + 0xc) + 0x18);
  auVar8 = _vaddbc(auVar11,auVar11);
  auVar8 = _vaddbc(auVar8,auVar11);
  fVar5 = fVar5 * fVar5;
  auVar8 = _qmfc2(auVar8._0_4_);
  fVar6 = auVar8._0_4_;
  if (fVar5 < fVar6) {
    auVar8 = _qmtc2(SQRT(fVar5 / fVar6));
    auVar10 = _lqc2(auVar10);
    auVar8 = _vmulbc(auVar10,auVar8);
    auStack_90 = _sqc2(auVar8);
    fVar7 = *(float *)(*(int *)(param_1[5] + 0xc) + 0x14);
  }
  else {
    fVar7 = *(float *)(*(int *)(param_1[5] + 0xc) + 0x14);
    fVar5 = fVar6;
  }
  fVar5 = fVar4 * fVar7 * *(float *)(param_1[7] + 0xc) + fVar5;
  if (fVar5 < *(float *)(*(int *)(param_1[4] + 0xc) + 0x390)) {
    if (fVar5 <= *(float *)(param_1[9] + 0xc)) {
      *(int *)(param_1[10] + 0xc) = *(int *)(param_1[10] + 0xc) + 1;
      iVar2 = *(int *)(param_1[4] + 0xc);
    }
    else {
      iVar2 = *(int *)(param_1[4] + 0xc);
    }
    if (*(uint *)(param_1[10] + 0xc) <= *(uint *)(iVar2 + 0x38c)) {
      auVar8 = _lqc2(auStack_90);
      goto LAB_003820d4;
    }
    *(uint *)(param_1[10] + 0xc) = *(uint *)(iVar2 + 0x38c);
  }
  else {
    *(undefined4 *)(param_1[10] + 0xc) = 0;
  }
  auVar8 = _lqc2(auStack_90);
LAB_003820d4:
  auVar10 = _lqc2(auStack_80);
  _lqc2(param_1[2]);
  _lqc2(param_1[3]);
  auVar8 = _vmove(auVar8);
  auVar10 = _vmove(auVar10);
  auVar8 = _sqc2(auVar8);
  param_1[2] = auVar8;
  auVar8 = _sqc2(auVar10);
  param_1[3] = auVar8;
  *(float *)(param_1[9] + 0xc) = fVar5;
  _lqc2(param_1[9]);
  auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1[4] + 0xc) + 0x370));
  _lqc2(param_1[10]);
  auVar8 = _vmove(auVar8);
  auVar10 = _vsub(in_vf0,in_vf0);
  auVar8 = _sqc2(auVar8);
  param_1[9] = auVar8;
  auVar8 = _sqc2(auVar10);
  param_1[10] = auVar8;
  return;
}


// ==== FUN_00382130 @ 00382130 ====
// GLOBAL DAT_0048ef30 undefined4
// GLOBAL DAT_0048ef34 undefined4
// GLOBAL DAT_0048ef38 undefined4
// GLOBAL DAT_0048ef3c undefined4
// GLOBAL DAT_0048ef40 undefined4
// GLOBAL DAT_0048ef44 undefined4
// GLOBAL DAT_0048ef48 undefined4
// GLOBAL DAT_0048ef4c undefined4
// GLOBAL DAT_0048ef50 undefined4
// GLOBAL DAT_0048ef54 undefined4
// GLOBAL DAT_0048ef58 undefined4
// GLOBAL DAT_0048ef5c undefined4
// GLOBAL DAT_0048ef60 undefined4
// GLOBAL DAT_0048ef64 undefined4
// GLOBAL DAT_0048ef68 undefined4
// GLOBAL DAT_0048ef6c undefined4

void FUN_00382130(long param_1,long param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00100260(&gp0xffff92e0,2);
      FUN_00100230(&gp0xffff92d8,2);
    }
    else {
      FUN_00100228(&gp0xffff92d8);
      FUN_00100258(&gp0xffff92e0);
      DAT_0048ef30 = 0x3fc90fdb;
      DAT_0048ef34 = 0xbe22f983;
      DAT_0048ef38 = 0x4b400000;
      DAT_0048ef3c = uStack_44;
      DAT_0048ef40 = 0xbe22f983;
      DAT_0048ef44 = 0x3f000000;
      DAT_0048ef48 = 0x3e800000;
      DAT_0048ef4c = uStack_34;
      DAT_0048ef50 = 0xc2992661;
      DAT_0048ef54 = 0xc2255de0;
      DAT_0048ef58 = 0x42a33457;
      DAT_0048ef5c = uStack_24;
      DAT_0048ef60 = 0x421ed7b7;
      DAT_0048ef64 = 0x40c90fda;
      DAT_0048ef68 = 0;
      DAT_0048ef6c = uStack_14;
    }
  }
  return;
}


// ==== FUN_00382278 @ 00382278 ====

void FUN_00382278(void)

{
  FUN_00382130(1,0xffff);
  return;
}


// ==== FUN_00382298 @ 00382298 ====

void FUN_00382298(void)

{
  FUN_00382130(0,0xffff);
  return;
}


// ==== FUN_003822b8 @ 003822b8 ====

void FUN_003822b8(void)

{
  FUN_00293aa0(0x3da030,0x48ef70);
  return;
}


// ==== FUN_003822e0 @ 003822e0 ====

undefined4 FUN_003822e0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_003822f8 @ 003822f8 ====

undefined4 FUN_003822f8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_00382310 @ 00382310 ====

undefined4 FUN_00382310(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_00382348 @ 00382348 ====

void FUN_00382348(uint *param_1,uint param_2)

{
  param_1[1] = param_2;
  *param_1 = ~param_2;
  return;
}


// ==== FUN_00382358 @ 00382358 ====
// GLOBAL DAT_003e2678 undefined
// GLOBAL DAT_003e26e0 undefined
// GLOBAL DAT_003e2788 undefined
// GLOBAL DAT_003e27d0 undefined
// GLOBAL DAT_003e2838 undefined
// GLOBAL DAT_003e2868 undefined
// GLOBAL DAT_003e2898 undefined

int FUN_00382358(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  *(undefined **)(param_1 + 0xcba0) = &DAT_003e2678;
  iVar5 = 10;
  iVar1 = param_1;
  do {
    iVar5 = iVar5 + -1;
    *(undefined **)(iVar1 + 0x1030) = &DAT_003e2868;
    iVar2 = iVar1 + 0x10;
    iVar3 = 0x7e;
    do {
      *(undefined **)(iVar2 + 0x10) = &DAT_003e2898;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 != -1);
    *(undefined **)(iVar1 + 0x1030) = &DAT_003e2838;
    iVar1 = iVar1 + 0x1040;
  } while (iVar5 != -1);
  puVar4 = (undefined4 *)(param_1 + 0xb308);
  iVar1 = 0x3f;
  do {
    *puVar4 = &DAT_003e26e0;
    iVar1 = iVar1 + -1;
    puVar4 = puVar4 + 0xe;
  } while (iVar1 != -1);
  puVar4 = (undefined4 *)(param_1 + 0xc108);
  iVar1 = 0x22;
  do {
    *puVar4 = &DAT_003e2788;
    iVar1 = iVar1 + -1;
    puVar4 = puVar4 + 0xf;
  } while (iVar1 != -1);
  *(undefined **)(param_1 + 0xcb88) = &DAT_003e27d0;
  return param_1;
}


// ==== FUN_00382460 @ 00382460 ====

void FUN_00382460(void)

{
  FUN_00313008();
  return;
}


// ==== FUN_00382480 @ 00382480 ====

void FUN_00382480(void)

{
  FUN_00313048();
  return;
}


// ==== FUN_003824e0 @ 003824e0 ====

void FUN_003824e0(void)

{
  FUN_0027acc8();
  return;
}


// ==== FUN_00382500 @ 00382500 ====
// GLOBAL DAT_003db030 undefined
// GLOBAL DAT_003db070 undefined
// GLOBAL DAT_003db0a8 undefined
// GLOBAL DAT_003db0e0 undefined
// GLOBAL DAT_003db118 undefined
// GLOBAL DAT_003db150 undefined
// GLOBAL DAT_003db188 undefined
// GLOBAL DAT_003db1c0 undefined
// GLOBAL DAT_003db1f8 undefined
// GLOBAL DAT_003db230 undefined
// GLOBAL DAT_003db268 undefined
// GLOBAL DAT_003db2a0 undefined
// GLOBAL DAT_003db2d8 undefined
// GLOBAL DAT_003db310 undefined
// GLOBAL DAT_003db328 undefined
// GLOBAL DAT_003db340 undefined
// GLOBAL DAT_003db358 undefined
// GLOBAL DAT_003db370 undefined
// GLOBAL DAT_003db388 undefined
// GLOBAL DAT_003db3a0 undefined
// GLOBAL DAT_003e2540 undefined

undefined8 FUN_00382500(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined **)(iVar5 + 0x14) = &DAT_003db030;
  *(undefined **)(iVar5 + 0x24) = &DAT_003db3a0;
  *(undefined **)(iVar5 + 0x3c) = &DAT_003db388;
  iVar2 = iVar5 + 0x280;
  *(undefined **)(iVar5 + 0x4c) = &DAT_003db370;
  *(undefined **)(iVar5 + 0xbc) = &DAT_003db358;
  iVar3 = 1;
  *(undefined **)(iVar5 + 0xdc) = &DAT_003db340;
  *(undefined **)(iVar5 + 0x14c) = &DAT_003db328;
  *(undefined **)(iVar5 + 0x16c) = &DAT_003db310;
  *(undefined **)(iVar5 + 0x1f8) = &DAT_003db2d8;
  *(undefined **)(iVar5 + 0x1fc) = &DAT_003db2a0;
  *(undefined **)(iVar5 + 0x200) = &DAT_003db268;
  *(undefined **)(iVar5 + 0x260) = &DAT_003db230;
  do {
    *(undefined **)(iVar2 + 0x40) = &DAT_003e2540;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x50;
  } while (iVar3 != -1);
  *(undefined **)(iVar5 + 0x350) = &DAT_003db188;
  *(undefined **)(iVar5 + 0x3c0) = &DAT_003db0e0;
  *(undefined **)(iVar5 + 0x3e0) = &DAT_003db150;
  *(undefined **)(iVar5 + 0x4e0) = &DAT_003db0a8;
  puVar4 = (undefined4 *)(iVar5 + 0x510);
  *(undefined **)(iVar5 + 0x3c4) = &DAT_003db1c0;
  iVar2 = 4;
  *(undefined **)(iVar5 + 0x470) = &DAT_003db118;
  *(undefined **)(iVar5 + 0x4b0) = &DAT_003db070;
  *(undefined **)(iVar5 + 0x330) = &DAT_003db1c0;
  *(undefined **)(iVar5 + 0x420) = &DAT_003db118;
  do {
    *puVar4 = &DAT_003db1f8;
    puVar4 = puVar4 + 0x18;
    iVar2 = iVar2 + -1;
    iVar3 = 2;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
  } while (iVar2 != -1);
  *(undefined **)(iVar5 + 0x740) = &DAT_003e2540;
  *(undefined **)(iVar5 + 0x790) = &DAT_003e2540;
  iVar2 = 0x1e;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_003826a8 @ 003826a8 ====
// GLOBAL DAT_003e0318 undefined

undefined8 FUN_003826a8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 6;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  FUN_00382f90((int)param_1 + 0xcd70);
  *(undefined **)((int)param_1 + 0xd070) = &DAT_003e0318;
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00382740 @ 00382740 ====
// GLOBAL DAT_003dca78 undefined

undefined8 FUN_00382740(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined **)((int)param_1 + 0x10) = &DAT_003dca78;
  iVar2 = 1;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00382778 @ 00382778 ====
// GLOBAL DAT_003dc718 undefined

undefined8 FUN_00382778(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar3 = iVar5 + 0x30;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    FUN_00383068(iVar3);
    iVar3 = iVar3 + 0x8c0;
  } while (iVar4 != -1);
  iVar3 = iVar5 + 0x4990;
  iVar4 = 1;
  do {
    *(undefined **)(iVar3 + 0x230) = &DAT_003dc718;
    iVar3 = iVar3 + 0x880;
    iVar4 = iVar4 + -1;
    iVar2 = 2;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  } while (iVar4 != -1);
  *(undefined1 *)(iVar5 + 0x5ba3) = 1;
  *(undefined4 *)(iVar5 + 0x5ba4) = 0;
  return param_1;
}


// ==== FUN_00382838 @ 00382838 ====
// GLOBAL DAT_003dd0b0 undefined
// GLOBAL DAT_003dd0e8 undefined
// GLOBAL DAT_003dd130 undefined

undefined8 FUN_00382838(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = iVar3 + 0x2b00;
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
    FUN_003830d0(iVar1);
    iVar1 = iVar1 + 0x1fd0;
  } while (iVar2 != -1);
  *(undefined **)(iVar3 + 0x22a10) = &DAT_003dd0e8;
  *(undefined **)(iVar3 + 0x22834) = &DAT_003dd0b0;
  *(undefined **)(iVar3 + 0x22b04) = &DAT_003dd130;
  return param_1;
}


// ==== FUN_003828d8 @ 003828d8 ====

undefined8 FUN_003828d8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar5 = (int)param_1;
  iVar2 = 0x3fe;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  for (iVar2 = 0xfe; iVar2 != -1; iVar2 = iVar2 + -1) {
  }
  auVar8 = _qmtc2(0);
  pauVar3 = (undefined1 (*) [16])(iVar5 + 0x4ee00);
  iVar2 = 5;
  do {
    _lqc2(*pauVar3);
    iVar2 = iVar2 + -1;
    auVar7 = _vmr32(auVar8);
    auVar7 = _sqc2(auVar7);
    *pauVar3 = auVar7;
    pauVar3 = pauVar3 + 2;
  } while (iVar2 != -1);
  pauVar3 = (undefined1 (*) [16])(iVar5 + 0x4eed0);
  auVar8 = _qmtc2(0);
  iVar2 = 0x8f;
  do {
    _lqc2(*pauVar3);
    iVar2 = iVar2 + -1;
    auVar7 = _vmr32(auVar8);
    auVar7 = _sqc2(auVar7);
    *pauVar3 = auVar7;
    pauVar3 = pauVar3 + 2;
  } while (iVar2 != -1);
  pauVar6 = (undefined1 (*) [16])(iVar5 + 0x502c0);
  pauVar3 = (undefined1 (*) [16])(iVar5 + 0x50130);
  auVar8 = _qmtc2(0);
  iVar2 = 0xb;
  do {
    _lqc2(*pauVar3);
    iVar2 = iVar2 + -1;
    auVar7 = _vmr32(auVar8);
    auVar7 = _sqc2(auVar7);
    *pauVar3 = auVar7;
    pauVar3 = pauVar3 + 2;
  } while (iVar2 != -1);
  iVar2 = 0x7f;
  auVar8 = _qmtc2(0);
  do {
    _lqc2(*pauVar6);
    iVar2 = iVar2 + -1;
    auVar7 = _vmr32(auVar8);
    auVar7 = _sqc2(auVar7);
    *pauVar6 = auVar7;
    pauVar6 = pauVar6 + 2;
  } while (iVar2 != -1);
  iVar2 = 0xc;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 2;
  do {
    iVar5 = 1;
    while( true ) {
      iVar4 = 0x1e;
      do {
        bVar1 = iVar4 != -1;
        iVar4 = iVar4 + -1;
      } while (bVar1);
      if (iVar5 == -1) break;
      iVar5 = iVar5 + -1;
    }
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0xfd;
  do {
    iVar5 = 2;
    do {
      bVar1 = iVar5 != -1;
      iVar5 = iVar5 + -1;
    } while (bVar1);
    iVar5 = 2;
    do {
      bVar1 = iVar5 != -1;
      iVar5 = iVar5 + -1;
    } while (bVar1);
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0x4e;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0x1e;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0x2fe;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0xfe;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 6;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0x2a;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00382bd8 @ 00382bd8 ====

void FUN_00382bd8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ==== FUN_00382bf0 @ 00382bf0 ====
// GLOBAL DAT_003dad10 undefined
// GLOBAL DAT_003dad68 undefined
// GLOBAL DAT_003dadc0 undefined
// GLOBAL DAT_003dae18 undefined
// GLOBAL DAT_003dae70 undefined
// GLOBAL DAT_003daec8 undefined
// GLOBAL DAT_003daf20 undefined
// GLOBAL DAT_003daf78 undefined
// GLOBAL DAT_003dafd0 undefined
// GLOBAL DAT_003dc348 undefined

undefined8 FUN_00382bf0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x84) = &DAT_003dc348;
  *(undefined **)(iVar1 + 0x13c) = &DAT_003dafd0;
  *(undefined **)(iVar1 + 0x19c) = &DAT_003daf78;
  *(undefined **)(iVar1 + 0x1fc) = &DAT_003daf20;
  *(undefined **)(iVar1 + 0x25c) = &DAT_003daec8;
  *(undefined **)(iVar1 + 0x2ec) = &DAT_003dae70;
  *(undefined **)(iVar1 + 0x38c) = &DAT_003dae18;
  *(undefined **)(iVar1 + 0x3dc) = &DAT_003dadc0;
  *(undefined **)(iVar1 + 0x42c) = &DAT_003dad68;
  *(undefined **)(iVar1 + 0x47c) = &DAT_003dad10;
  return param_1;
}


// ==== FUN_00382c70 @ 00382c70 ====

void FUN_00382c70(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)piVar2;
    uVar1 = 0;
    if (*(char *)(param_1 + 0x20) != '\0') {
      iVar3 = 0;
      do {
        uVar1 = uVar1 + 1;
        FUN_00383208(*piVar2 + iVar3);
        iVar3 = iVar3 + 0x60;
      } while (uVar1 < *(byte *)(param_1 + 0x20));
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)piVar2;
    uVar1 = 0;
    if (*(char *)(param_1 + 0x21) != '\0') {
      iVar3 = 0;
      do {
        uVar1 = uVar1 + 1;
        FUN_00383208(*(int *)(param_1 + 0x18) + iVar3);
        iVar3 = iVar3 + 0x60;
      } while (uVar1 < *(byte *)(param_1 + 0x21));
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (int)piVar2;
    uVar1 = 0;
    if (*(char *)(param_1 + 0x22) != '\0') {
      iVar3 = 0;
      do {
        uVar1 = uVar1 + 1;
        FUN_00383208(*(int *)(param_1 + 0x1c) + iVar3);
        iVar3 = iVar3 + 0x60;
      } while (uVar1 < *(byte *)(param_1 + 0x22));
    }
  }
  return;
}


// ==== FUN_00382d60 @ 00382d60 ====
// GLOBAL DAT_003e0140 undefined
// GLOBAL DAT_003e0180 undefined
// GLOBAL DAT_003e0250 undefined

undefined8 FUN_00382d60(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = iVar5 + 0xf8;
  iVar3 = 6;
  do {
    *(undefined **)(iVar2 + 0x5c) = &DAT_003e0250;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x60;
  } while (iVar3 != -1);
  iVar2 = iVar5 + 0x398;
  iVar4 = 1;
  iVar3 = iVar5 + 0x470;
  do {
    *(undefined **)(iVar2 + 0x5c) = &DAT_003e0180;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 0x6c;
  } while (iVar4 != -1);
  iVar2 = 1;
  do {
    FUN_00343fc8(iVar3 + 0x10);
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + -1;
    iVar4 = 9;
    do {
      bVar1 = iVar4 != -1;
      iVar4 = iVar4 + -1;
    } while (bVar1);
    iVar4 = 9;
    do {
      bVar1 = iVar4 != -1;
      iVar4 = iVar4 + -1;
    } while (bVar1);
  } while (iVar2 != -1);
  *(undefined **)(iVar5 + 0x8f0) = &DAT_003e0140;
  return param_1;
}


// ==== FUN_00382e78 @ 00382e78 ====
// GLOBAL DAT_003dc388 undefined
// GLOBAL DAT_003dc428 undefined

undefined8 FUN_00382e78(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  iVar1 = (int)param_1;
  do {
    *(undefined **)(iVar1 + 0x10) = &DAT_003dc428;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x120;
  } while (iVar2 != -1);
  iVar1 = (int)param_1 + 0x2400;
  iVar2 = 0xf;
  do {
    *(undefined **)(iVar1 + 0x10) = &DAT_003dc388;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x120;
  } while (iVar2 != -1);
  return param_1;
}


// ==== FUN_00382ee0 @ 00382ee0 ====

undefined8 FUN_00382ee0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  FUN_00352d50(iVar2 + 0x464,0,0,1,0,0,0);
  FUN_00352d50(iVar2 + 0x97c,0,0,1,0,0,0);
  FUN_00352d50(iVar2 + 0xe98,0,0,1,0,0,0);
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00382f90 @ 00382f90 ====
// GLOBAL DAT_003e0348 undefined
// GLOBAL DAT_003e0388 undefined
// GLOBAL DAT_003e03c8 undefined
// GLOBAL DAT_003e0408 undefined
// GLOBAL DAT_003e0448 undefined
// GLOBAL DAT_003e0488 undefined
// GLOBAL DAT_003e04c8 undefined
// GLOBAL DAT_003e0508 undefined
// GLOBAL DAT_003e0548 undefined
// GLOBAL DAT_003e0588 undefined
// GLOBAL DAT_003e05c8 undefined
// GLOBAL DAT_003e0608 undefined
// GLOBAL DAT_003e0648 undefined
// GLOBAL DAT_003e0688 undefined
// GLOBAL DAT_003e06c8 undefined

undefined8 FUN_00382f90(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x210) = &DAT_003e0348;
  *(undefined **)(iVar1 + 0x60) = &DAT_003e0608;
  *(undefined **)(iVar1 + 0x10) = &DAT_003e0608;
  *(undefined **)(iVar1 + 4) = &DAT_003e0648;
  *(undefined **)(iVar1 + 8) = &DAT_003e06c8;
  *(undefined **)(iVar1 + 0xc) = &DAT_003e0688;
  *(undefined **)(iVar1 + 0xb0) = &DAT_003e05c8;
  *(undefined **)(iVar1 + 0x100) = &DAT_003e0588;
  *(undefined **)(iVar1 + 0x150) = &DAT_003e0548;
  *(undefined **)(iVar1 + 0x1a0) = &DAT_003e0488;
  *(undefined **)(iVar1 + 0x1f0) = &DAT_003e0508;
  *(undefined **)(iVar1 + 0x1f8) = &DAT_003e04c8;
  *(undefined **)(iVar1 + 0x1fc) = &DAT_003e0448;
  *(undefined **)(iVar1 + 0x200) = &DAT_003e0408;
  *(undefined **)(iVar1 + 0x204) = &DAT_003e03c8;
  *(undefined **)(iVar1 + 0x208) = &DAT_003e0388;
  return param_1;
}


// ==== FUN_00383068 @ 00383068 ====
// GLOBAL DAT_003dc5f8 undefined
// GLOBAL DAT_003dc9b8 undefined
// GLOBAL DAT_003dc9f8 undefined
// GLOBAL DAT_003dca38 undefined
// GLOBAL DAT_003dcc20 undefined

undefined8 FUN_00383068(undefined8 param_1)

{
  int iVar1;
  
  FUN_00382740();
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x10) = &DAT_003dc5f8;
  *(undefined **)(iVar1 + 0x574) = &DAT_003dcc20;
  *(undefined **)(iVar1 + 0x6a4) = &DAT_003dca38;
  *(undefined **)(iVar1 + 0x7b4) = &DAT_003dc9f8;
  *(undefined **)(iVar1 + 0x854) = &DAT_003dc9b8;
  return param_1;
}


// ==== FUN_003830d0 @ 003830d0 ====
// GLOBAL DAT_003dc268 undefined
// GLOBAL DAT_003dd250 undefined
// GLOBAL DAT_003dd298 undefined
// GLOBAL DAT_003dffb0 undefined
// GLOBAL DAT_003dffc8 undefined

undefined8 FUN_003830d0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 0x84) = &DAT_003dc268;
  iVar2 = 1;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  FUN_00383698(iVar4 + 0x290);
  iVar2 = 3;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  FUN_003836e8(iVar4 + 0x810);
  iVar2 = iVar4 + 0xb50;
  iVar3 = 1;
  do {
    *(undefined **)(iVar2 + 0x30) = &DAT_003dffc8;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x80;
  } while (iVar3 != -1);
  FUN_00383608(iVar4 + 0xd10);
  FUN_00383228(iVar4 + 0xec0);
  *(undefined **)(iVar4 + 0x1da4) = &DAT_003dd298;
  *(undefined **)(iVar4 + 0x1e14) = &DAT_003dd250;
  *(undefined **)(iVar4 + 0x1f30) = &DAT_003dffb0;
  return param_1;
}


// ==== FUN_00383208 @ 00383208 ====

void FUN_00383208(void)

{
  FUN_00287118();
  return;
}


// ==== FUN_00383228 @ 00383228 ====
// GLOBAL DAT_003ddf38 undefined
// GLOBAL DAT_003ddfa8 undefined
// GLOBAL DAT_003de018 undefined
// GLOBAL DAT_003de088 undefined
// GLOBAL DAT_003de0f8 undefined
// GLOBAL DAT_003de168 undefined
// GLOBAL DAT_003de1d8 undefined
// GLOBAL DAT_003de248 undefined
// GLOBAL DAT_003de2b8 undefined
// GLOBAL DAT_003de340 undefined
// GLOBAL DAT_003de3b0 undefined
// GLOBAL DAT_003de420 undefined
// GLOBAL DAT_003de490 undefined
// GLOBAL DAT_003de500 undefined
// GLOBAL DAT_003de588 undefined
// GLOBAL DAT_003de5f8 undefined
// GLOBAL DAT_003de668 undefined
// GLOBAL DAT_003de6d8 undefined
// GLOBAL DAT_003de748 undefined
// GLOBAL DAT_003de7b8 undefined
// GLOBAL DAT_003de828 undefined
// GLOBAL DAT_003de898 undefined
// GLOBAL DAT_003de908 undefined
// GLOBAL DAT_003de978 undefined
// GLOBAL DAT_003de9e8 undefined
// GLOBAL DAT_003dea58 undefined
// GLOBAL DAT_003deac8 undefined
// GLOBAL DAT_003deb38 undefined
// GLOBAL DAT_003deba8 undefined
// GLOBAL DAT_003dec18 undefined
// GLOBAL DAT_003dec88 undefined
// GLOBAL DAT_003decf8 undefined
// GLOBAL DAT_003ded68 undefined
// GLOBAL DAT_003dedd8 undefined
// GLOBAL DAT_003dee48 undefined
// GLOBAL DAT_003deeb8 undefined
// GLOBAL DAT_003def28 undefined
// GLOBAL DAT_003def98 undefined
// GLOBAL DAT_003df008 undefined
// GLOBAL DAT_003df078 undefined
// GLOBAL DAT_003df0f0 undefined
// GLOBAL DAT_003df168 undefined
// GLOBAL DAT_003df1e0 undefined
// GLOBAL DAT_003df258 undefined
// GLOBAL DAT_003df2d0 undefined
// GLOBAL DAT_003df348 undefined
// GLOBAL DAT_003df3c0 undefined
// GLOBAL DAT_003df448 undefined
// GLOBAL DAT_003df4d0 undefined
// GLOBAL DAT_003df540 undefined
// GLOBAL DAT_003df5c8 undefined
// GLOBAL DAT_003df638 undefined
// GLOBAL DAT_003df6a8 undefined
// GLOBAL DAT_003df730 undefined
// GLOBAL DAT_003df7a0 undefined
// GLOBAL DAT_003df810 undefined
// GLOBAL DAT_003df880 undefined
// GLOBAL DAT_003df8f0 undefined
// GLOBAL DAT_003df960 undefined
// GLOBAL DAT_003df9d0 undefined
// GLOBAL DAT_003dfa40 undefined
// GLOBAL DAT_003dfab0 undefined
// GLOBAL DAT_003dfb20 undefined
// GLOBAL DAT_003dfb90 undefined
// GLOBAL DAT_003dfc00 undefined
// GLOBAL DAT_003dfc70 undefined
// GLOBAL DAT_003dfce0 undefined
// GLOBAL DAT_003dfd50 undefined
// GLOBAL DAT_003dfdc0 undefined
// GLOBAL DAT_003dfe30 undefined
// GLOBAL DAT_003dfea0 undefined
// GLOBAL DAT_003dff10 undefined

undefined8 FUN_00383228(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x854) = &DAT_003dfc70;
  *(undefined **)(iVar1 + 0x914) = &DAT_003dee48;
  *(undefined **)(iVar1 + 0x8e4) = &DAT_003df008;
  *(undefined **)(iVar1 + 0x944) = &DAT_003df540;
  *(undefined **)(iVar1 + 0x934) = &DAT_003def98;
  *(undefined **)(iVar1 + 0x98c) = &DAT_003dfb90;
  *(undefined **)(iVar1 + 0x984) = &DAT_003dfc00;
  *(undefined **)(iVar1 + 0x9c4) = &DAT_003dedd8;
  *(undefined **)(iVar1 + 0x994) = &DAT_003dfb20;
  *(undefined **)(iVar1 + 0x9e4) = &DAT_003def28;
  *(undefined **)(iVar1 + 0x844) = &DAT_003dff10;
  *(undefined **)(iVar1 + 0x84c) = &DAT_003dfea0;
  *(undefined **)(iVar1 + 0x860) = &DAT_003dfab0;
  *(undefined **)(iVar1 + 0x868) = &DAT_003dfa40;
  *(undefined **)(iVar1 + 0x878) = &DAT_003deeb8;
  *(undefined **)(iVar1 + 0x884) = &DAT_003df6a8;
  *(undefined **)(iVar1 + 0x88c) = &DAT_003df638;
  *(undefined **)(iVar1 + 0x898) = &DAT_003df448;
  *(undefined **)(iVar1 + 0x8a4) = &DAT_003df3c0;
  *(undefined **)(iVar1 + 0x8c4) = &DAT_003dfdc0;
  *(undefined **)(iVar1 + 0x8cc) = &DAT_003dfd50;
  *(undefined **)(iVar1 + 0x8d4) = &DAT_003df5c8;
  *(undefined **)(iVar1 + 0x9ec) = &DAT_003de088;
  *(undefined **)(iVar1 + 0xa14) = &DAT_003df880;
  *(undefined **)(iVar1 + 0xa20) = &DAT_003df810;
  *(undefined **)(iVar1 + 0xa34) = &DAT_003df7a0;
  *(undefined **)(iVar1 + 0xa54) = &DAT_003df960;
  *(undefined **)(iVar1 + 0xa64) = &DAT_003df8f0;
  *(undefined **)(iVar1 + 0xab4) = &DAT_003df730;
  *(undefined **)(iVar1 + 0xac4) = &DAT_003df4d0;
  *(undefined **)(iVar1 + 0xaec) = &DAT_003decf8;
  *(undefined **)(iVar1 + 0xaf8) = &DAT_003ded68;
  *(undefined **)(iVar1 + 0xb00) = &DAT_003dec88;
  *(undefined **)(iVar1 + 0xb08) = &DAT_003dec18;
  *(undefined **)(iVar1 + 0xb1c) = &DAT_003de1d8;
  *(undefined **)(iVar1 + 0xb94) = &DAT_003de9e8;
  *(undefined **)(iVar1 + 0xbc4) = &DAT_003de490;
  *(undefined **)(iVar1 + 0xb14) = &DAT_003deba8;
  *(undefined **)(iVar1 + 0xbd4) = &DAT_003de420;
  *(undefined **)(iVar1 + 0xb24) = &DAT_003de168;
  *(undefined **)(iVar1 + 0xb2c) = &DAT_003de0f8;
  *(undefined **)(iVar1 + 0xc04) = &DAT_003de3b0;
  *(undefined **)(iVar1 + 0xb74) = &DAT_003dea58;
  *(undefined **)(iVar1 + 0xbb4) = &DAT_003de748;
  *(undefined **)(iVar1 + 0xc14) = &DAT_003de340;
  *(undefined **)(iVar1 + 0xb34) = &DAT_003deb38;
  *(undefined **)(iVar1 + 0xb44) = &DAT_003deac8;
  *(undefined **)(iVar1 + 0xc44) = &DAT_003de2b8;
  *(undefined **)(iVar1 + 0xc84) = &DAT_003de248;
  *(undefined **)(iVar1 + 0xc90) = &DAT_003de828;
  *(undefined **)(iVar1 + 0xca4) = &DAT_003de7b8;
  *(undefined **)(iVar1 + 0xcf4) = &DAT_003de978;
  *(undefined **)(iVar1 + 0xd10) = &DAT_003de908;
  *(undefined **)(iVar1 + 0xd20) = &DAT_003de898;
  *(undefined **)(iVar1 + 0xd28) = &DAT_003de6d8;
  *(undefined **)(iVar1 + 0xd34) = &DAT_003de668;
  *(undefined **)(iVar1 + 0xd74) = &DAT_003de5f8;
  *(undefined **)(iVar1 + 0xd80) = &DAT_003de588;
  *(undefined **)(iVar1 + 0xd94) = &DAT_003de500;
  *(undefined **)(iVar1 + 0xdc4) = &DAT_003dfce0;
  *(undefined **)(iVar1 + 0xdd0) = &DAT_003df168;
  *(undefined **)(iVar1 + 0xdd8) = &DAT_003df2d0;
  *(undefined **)(iVar1 + 0xde0) = &DAT_003df1e0;
  *(undefined **)(iVar1 + 0xde8) = &DAT_003df348;
  *(undefined **)(iVar1 + 0xdf4) = &DAT_003df258;
  *(undefined **)(iVar1 + 0xe24) = &DAT_003df078;
  *(undefined **)(iVar1 + 0xe2c) = &DAT_003df0f0;
  *(undefined **)(iVar1 + 0xe34) = &DAT_003de018;
  *(undefined **)(iVar1 + 0xe44) = &DAT_003dfe30;
  *(undefined **)(iVar1 + 0xe74) = &DAT_003df9d0;
  *(undefined **)(iVar1 + 0xe94) = &DAT_003de018;
  *(undefined **)(iVar1 + 0xea0) = &DAT_003ddfa8;
  *(undefined **)(iVar1 + 0xeb4) = &DAT_003ddf38;
  *(undefined **)(iVar1 + 0xe88) = &DAT_003de018;
  return param_1;
}


// ==== FUN_00383608 @ 00383608 ====
// GLOBAL DAT_003dd750 undefined
// GLOBAL DAT_003dd808 undefined
// GLOBAL DAT_003dd8c0 undefined
// GLOBAL DAT_003dd978 undefined
// GLOBAL DAT_003dda30 undefined
// GLOBAL DAT_003ddae8 undefined
// GLOBAL DAT_003ddba0 undefined
// GLOBAL DAT_003ddc58 undefined
// GLOBAL DAT_003ddd10 undefined
// GLOBAL DAT_003dddc8 undefined
// GLOBAL DAT_003dde80 undefined

undefined8 FUN_00383608(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 100) = &DAT_003dde80;
  *(undefined **)(iVar1 + 0x78) = &DAT_003ddc58;
  *(undefined **)(iVar1 + 0x8c) = &DAT_003dddc8;
  *(undefined **)(iVar1 + 0xa4) = &DAT_003ddd10;
  *(undefined **)(iVar1 + 0xb8) = &DAT_003ddba0;
  *(undefined **)(iVar1 + 0xd0) = &DAT_003ddae8;
  *(undefined **)(iVar1 + 0x114) = &DAT_003dda30;
  *(undefined **)(iVar1 + 0x130) = &DAT_003dd978;
  *(undefined **)(iVar1 + 0x14c) = &DAT_003dd8c0;
  *(undefined **)(iVar1 + 0x170) = &DAT_003dd808;
  *(undefined **)(iVar1 + 0x1a0) = &DAT_003dd750;
  return param_1;
}


// ==== FUN_00383698 @ 00383698 ====
// GLOBAL DAT_003dd510 undefined
// GLOBAL DAT_003dd570 undefined
// GLOBAL DAT_003dd5d0 undefined
// GLOBAL DAT_003dd630 undefined
// GLOBAL DAT_003dd690 undefined
// GLOBAL DAT_003dd6f0 undefined

undefined8 FUN_00383698(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x90) = &DAT_003dd6f0;
  *(undefined **)(iVar1 + 0x160) = &DAT_003dd690;
  *(undefined **)(iVar1 + 0x1d0) = &DAT_003dd630;
  *(undefined **)(iVar1 + 0x260) = &DAT_003dd5d0;
  *(undefined **)(iVar1 + 0x2f0) = &DAT_003dd570;
  *(undefined **)(iVar1 + 0x370) = &DAT_003dd510;
  return param_1;
}


// ==== FUN_003836e8 @ 003836e8 ====
// GLOBAL DAT_003dd2e0 undefined
// GLOBAL DAT_003dd330 undefined
// GLOBAL DAT_003dd380 undefined

undefined8 FUN_003836e8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0xe0) = &DAT_003dd380;
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  *(undefined **)(iVar3 + 0x270) = &DAT_003dd330;
  *(undefined **)(iVar3 + 0x300) = &DAT_003dd2e0;
  return param_1;
}


// ==== FUN_00383738 @ 00383738 ====

undefined4 FUN_00383738(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_00383840 @ 00383840 ====
// GLOBAL DAT_003dcca0 undefined

void FUN_00383840(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003dcca0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383878 @ 00383878 ====

void FUN_00383878(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  }
  return;
}


// ==== FUN_00383890 @ 00383890 ====
// GLOBAL DAT_0040f0e0 int

float FUN_00383890(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar1 == 1) {
    fVar2 = *(float *)(param_1 + 0x2f8);
LAB_003838dc:
    return fVar2 / 1200.0;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      fVar2 = *(float *)(param_1 + 0x2f8);
      goto LAB_003838dc;
    }
  }
  else if (iVar1 < 4) {
    return *(float *)(param_1 + 0x2f8) / 750.0;
  }
  return 0.0;
}


// ==== FUN_00383978 @ 00383978 ====
// GLOBAL DAT_0040f4c0 int
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f4d0 int

/* Strings referenciadas:
     "Glass_Ref2"
     "Glass_Ref" */

void FUN_00383978(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
    uVar6 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      while( true ) {
        iVar5 = uVar6 * 0x40;
        uVar6 = uVar6 + 1;
        FUN_001c64e8(iVar2 + iVar5 + 0x10);
        iVar2 = iVar5 + *(int *)(param_1 + 0x10);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_1;
        piVar3 = (int *)(iVar5 + *(int *)(param_1 + 0x10));
        *piVar3 = *piVar3 + param_1;
        FUN_001aff98(DAT_0040f4c0 + 0xcd70,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x10) + 4));
        FUN_001b0028(DAT_0040f4c0 + 0xcd70,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x10)));
        if (*(uint *)(param_1 + 0x14) <= uVar6) break;
        iVar2 = *(int *)(param_1 + 0x10);
      }
    }
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x18) + param_1);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int **)(param_1 + 0x18) = piVar3;
    *piVar3 = *piVar3 + param_1;
    *(int *)(*(int *)(param_1 + 0x18) + 8) = *(int *)(*(int *)(param_1 + 0x18) + 8) + param_1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0xc);
    if (iVar2 != 0) {
      *(int *)(*(int *)(param_1 + 0x18) + 0xc) = iVar2 + param_1;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      pcVar4 = *(char **)(*(int *)(param_1 + 0x18) + 0xc);
      if (pcVar4 == (char *)0x0) {
        if (*(char *)(DAT_0040f4d0 + 0x5aac) == '\x04') {
          pcVar4 = "Glass_Ref2";
        }
        else {
          pcVar4 = "Glass_Ref";
        }
      }
      uVar1 = FUN_00108328(DAT_0040f4c4,pcVar4);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10) = uVar1;
    }
  }
  return;
}


// ==== FUN_00383b08 @ 00383b08 ====
// GLOBAL DAT_003db9e0 undefined

undefined8 FUN_00383b08(undefined8 param_1)

{
  *(undefined **)((int)param_1 + 0x10) = &DAT_003db9e0;
  return param_1;
}


// ==== FUN_00383b20 @ 00383b20 ====
// GLOBAL DAT_003dcca0 undefined

void FUN_00383b20(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003dcca0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383b50 @ 00383b50 ====
// GLOBAL DAT_003e0128 undefined

void FUN_00383b50(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e0128;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383b80 @ 00383b80 ====
// GLOBAL DAT_003e0110 undefined

void FUN_00383b80(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e0110;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383bb0 @ 00383bb0 ====
// GLOBAL DAT_003e00f8 undefined

void FUN_00383bb0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00f8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383be0 @ 00383be0 ====
// GLOBAL DAT_003e00b0 undefined

void FUN_00383be0(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00b0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383c10 @ 00383c10 ====
// GLOBAL DAT_003e00c8 undefined

void FUN_00383c10(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00c8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383c40 @ 00383c40 ====
// GLOBAL DAT_003e00e0 undefined

void FUN_00383c40(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 0x110) = &DAT_003e00e0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00383c70 @ 00383c70 ====
// GLOBAL DAT_003e0040 undefined

void FUN_00383c70(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    FUN_003842a0();
  }
  return;
}


// ==== FUN_00383ca0 @ 00383ca0 ====
// GLOBAL DAT_003c87e4 int_*
// GLOBAL DAT_003c87f0 undefined_*

void FUN_00383ca0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*DAT_003c87e4 + 0x14))
                    ((int)DAT_003c87e4 + (int)*(short *)(*DAT_003c87e4 + 0x10),param_1);
  if (DAT_003c87f0 != (code *)0x0) {
    (*DAT_003c87f0)(param_1,uVar1);
  }
  return;
}


// ==== FUN_00383d00 @ 00383d00 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined

void FUN_00383d00(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00383d40 @ 00383d40 ====

undefined4 FUN_00383d40(undefined4 *param_1)

{
  return *param_1;
}


// ==== FUN_00383d58 @ 00383d58 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_00383d58(undefined8 param_1,ulong param_2)

{
  FUN_002fb4d8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00383e68 @ 00383e68 ====

void FUN_00383e68(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x54))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x50),*param_2);
  return;
}


// ==== FUN_00383ed8 @ 00383ed8 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined

void FUN_00383ed8(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00383f20 @ 00383f20 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*
// GLOBAL DAT_003e0040 undefined

void FUN_00383f20(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003e0040;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)();
  }
  return;
}


// ==== FUN_00383f68 @ 00383f68 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_00383f68(undefined8 param_1,ulong param_2)

{
  FUN_002fefb0(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00384000 @ 00384000 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_00384000(undefined8 param_1,ulong param_2)

{
  FUN_002f4a90(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_003840d0 @ 003840d0 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_003840d0(undefined8 param_1,ulong param_2)

{
  FUN_002dfc38(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00384120 @ 00384120 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_00384120(undefined8 param_1,ulong param_2)

{
  FUN_002dfc38(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00384180 @ 00384180 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_00384180(undefined8 param_1,ulong param_2)

{
  FUN_002e45f8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_003841e0 @ 003841e0 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_003841e0(undefined8 param_1,ulong param_2)

{
  FUN_002e16b8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00384230 @ 00384230 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_00384230(undefined8 param_1,ulong param_2)

{
  FUN_002e16b8(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00384290 @ 00384290 ====

void FUN_00384290(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


// ==== FUN_003842a0 @ 003842a0 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_003842a0(void)

{
  (*(code *)PTR_FUN_003c87e0)();
  return;
}


// ==== FUN_003842c8 @ 003842c8 ====
// GLOBAL PTR_FUN_003c87e0 undefined_*

void FUN_003842c8(undefined8 param_1,ulong param_2)

{
  FUN_002e6d10(param_1,0);
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_003c87e0)(param_1);
  }
  return;
}


// ==== FUN_00384318 @ 00384318 ====

undefined8 FUN_00384318(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)param_1;
  uVar2 = (**(code **)(iVar1 + 0x44))((int)(int *)param_1 + (int)*(short *)(iVar1 + 0x40));
  *param_3 = uVar2;
  return param_1;
}


// ==== FUN_00384360 @ 00384360 ====

void FUN_00384360(int *param_1)

{
  (**(code **)(*param_1 + 0x44))((int)param_1 + (int)*(short *)(*param_1 + 0x40));
  return;
}


// ==== FUN_00384388 @ 00384388 ====
// GLOBAL DAT_00451238 undefined_*

void FUN_00384388(undefined8 param_1,undefined8 param_2)

{
  (*DAT_00451238)(param_2);
  return;
}


// ==== FUN_003843c0 @ 003843c0 ====

undefined4 FUN_003843c0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_003843d8 @ 003843d8 ====

undefined4 FUN_003843d8(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_003843f0 @ 003843f0 ====

undefined4 FUN_003843f0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_00384418 @ 00384418 ====
// GLOBAL DAT_003dcca0 undefined

void FUN_00384418(undefined4 *param_1,ulong param_2)

{
  *param_1 = &DAT_003dcca0;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00384448 @ 00384448 ====

void FUN_00384448(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [12];
  int *piVar4;
  undefined1 in_a0_qw [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar7 = in_a0_qw._0_4_;
  iVar6 = 7;
  if (*(char *)(iVar7 + 0x235) != '\0') {
    auVar9._8_8_ = in_a0_qw._8_8_;
    auVar9._0_8_ = (long)(iVar7 + 0x30);
    do {
      piVar4 = auVar9._0_4_;
      iVar1 = *piVar4;
      iVar6 = iVar6 + -1;
      if (iVar1 != 0) {
        auVar3 = *(undefined1 (*) [12])(iVar1 + 0x30);
        *(int *)(iVar1 + 0x80) = auVar3._0_4_;
        *(int *)(iVar1 + 0x84) = auVar3._4_4_;
        *(int *)(iVar1 + 0x88) = auVar3._8_4_;
        *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(iVar1 + 0x3c);
        iVar1 = *piVar4;
        auVar3 = *(undefined1 (*) [12])(iVar1 + 0x20);
        *(int *)(iVar1 + 0x90) = auVar3._0_4_;
        *(int *)(iVar1 + 0x94) = auVar3._4_4_;
        *(int *)(iVar1 + 0x98) = auVar3._8_4_;
        *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar1 + 0x2c);
      }
      auVar9._0_8_ = (long)(int)(piVar4 + 1);
    } while (-1 < iVar6);
  }
  piVar8 = (int *)(iVar7 + 0x30);
  iVar6 = 0;
  piVar4 = piVar8;
  do {
    if ((*piVar4 != 0) && (iVar1 = *(int *)(*(int *)(iVar7 + 0x50) + iVar6 * 4 + 0x34), -1 < iVar1))
    {
      FUN_00348c08(*(undefined4 *)(iVar7 + 0x54),iVar1,&iStack_b0);
      auVar9 = _pextlw((long)iStack_a8,(long)iStack_b0);
      auVar5 = _pextlw((long)iStack_ac,auVar9._0_8_);
      auVar9 = _pextlw((long)iStack_98,(long)iStack_a0);
      auVar11 = _pextlw((long)iStack_9c,auVar9._0_8_);
      auVar9 = _pextlw((long)iStack_88,(long)iStack_90);
      auVar10 = _pextlw((long)iStack_8c,auVar9._0_8_);
      auVar9 = _pextlw((long)iStack_78,(long)iStack_80);
      auVar9 = _pextlw((long)iStack_7c,auVar9._0_8_);
      puVar2 = (undefined4 *)*piVar4;
      uStack_70 = auVar9._0_4_;
      uStack_6c = auVar9._4_4_;
      uStack_68 = auVar9._8_4_;
      uStack_64 = auVar9._12_4_;
      puVar2[0xc] = uStack_70;
      puVar2[0xd] = uStack_6c;
      puVar2[0xe] = uStack_68;
      puVar2[0xf] = uStack_64;
      *puVar2 = auVar5._0_4_;
      puVar2[1] = auVar5._4_4_;
      puVar2[2] = auVar5._8_4_;
      puVar2[3] = auVar5._12_4_;
      puVar2[4] = auVar11._0_4_;
      puVar2[5] = auVar11._4_4_;
      puVar2[6] = auVar11._8_4_;
      puVar2[7] = auVar11._12_4_;
      puVar2[8] = auVar10._0_4_;
      puVar2[9] = auVar10._4_4_;
      puVar2[10] = auVar10._8_4_;
      puVar2[0xb] = auVar10._12_4_;
    }
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar6 < 8);
  if (*(char *)(iVar7 + 0x235) == '\0') {
    *(undefined1 *)(iVar7 + 0x235) = 1;
  }
  else {
    iVar6 = 7;
    do {
      iVar7 = *piVar8;
      if (iVar7 != 0) {
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x80));
        auVar11 = _qmtc2(1.0 / param_1);
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x30));
        auVar9 = _vsub(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar11);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(iVar7 + 0x80) = auVar9;
        iVar7 = *piVar8;
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x90));
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x20));
        auVar9 = _vsub(auVar9,auVar10);
        auVar9 = _vmulbc(auVar9,auVar11);
        auVar9 = _sqc2(auVar9);
        *(undefined1 (*) [16])(iVar7 + 0x90) = auVar9;
      }
      iVar6 = iVar6 + -1;
      piVar8 = piVar8 + 1;
    } while (-1 < iVar6);
  }
  return;
}


// ==== FUN_00384648 @ 00384648 ====

undefined8 FUN_00384648(undefined8 param_1)

{
  return param_1;
}


// ==== FUN_00384668 @ 00384668 ====

undefined8 FUN_00384668(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_001e66f0();
  iVar6 = (int)param_1;
  iVar5 = iVar6 + 0x5a0;
  iVar4 = 2;
  puVar1 = (undefined4 *)(iVar6 + 0xe0);
  do {
    iVar4 = iVar4 + -1;
    puVar3 = puVar1 + 100;
    iVar2 = 5;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 0xb;
    } while (iVar2 != -1);
    puVar1 = puVar3;
  } while (iVar4 != -1);
  iVar4 = 1;
  do {
    *(undefined4 *)(iVar5 + 0xa4) = 0;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 0xc0;
  } while (iVar4 != -1);
  *(undefined4 *)(iVar6 + 0x858) = 0;
  return param_1;
}


// ==== FUN_00384700 @ 00384700 ====

void FUN_00384700(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x80) = param_1;
  return;
}


// ==== FUN_00384708 @ 00384708 ====

int FUN_00384708(int param_1,int param_2)

{
  return param_2 / *(int *)(param_1 + 0xe0);
}


// ==== FUN_00384720 @ 00384720 ====

undefined4 FUN_00384720(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x2424) + param_2 * 4 + 8);
}


// ==== FUN_00384738 @ 00384738 ====

void FUN_00384738(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x79) = param_2;
  return;
}


// ==== FUN_00384740 @ 00384740 ====

uint FUN_00384740(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)((int)param_1 * (uint)(param_2 < param_1) |
                 (int)param_2 * (uint)(param_2 >= param_1));
  return (int)fVar1 * (uint)(fVar1 < param_3) | (int)param_3 * (uint)(fVar1 >= param_3);
}


// ==== FUN_00384790 @ 00384790 ====

undefined4 FUN_00384790(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_002811e8(param_2);
  return *(undefined4 *)(iVar1 + 4);
}


// ==== FUN_003847e0 @ 003847e0 ====

int FUN_003847e0(int param_1)

{
  return param_1 + 0x1c0;
}


// ==== FUN_00384800 @ 00384800 ====

void FUN_00384800(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x74) = param_1;
  return;
}


// ==== FUN_00384818 @ 00384818 ====

undefined8 FUN_00384818(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)param_4;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = uStack_4;
  return param_4;
}


// ==== FUN_00384858 @ 00384858 ====

undefined4 FUN_00384858(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcbe0);
}


// ==== FUN_00384880 @ 00384880 ====

undefined4 FUN_00384880(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcbc4);
}


// ==== FUN_003848a8 @ 003848a8 ====

int FUN_003848a8(float param_1)

{
  return (int)(param_1 * 16384.0);
}


// ==== FUN_003848f8 @ 003848f8 ====

void FUN_003848f8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_140 [60];
  undefined1 *puStack_104;
  undefined1 auStack_100 [60];
  undefined1 *puStack_c4;
  undefined1 auStack_c0 [60];
  undefined1 *puStack_84;
  undefined1 auStack_80 [32];
  
  puStack_104 = (undefined1 *)0x0;
  sprintf(auStack_80,0x4003d8,*param_3);
  FUN_00275260(auStack_80,auStack_140,0x1e);
  puStack_c4 = (undefined1 *)0x0;
  sprintf(auStack_80,0x4003d8,*param_4);
  FUN_00275260(auStack_80,auStack_100,0x1e);
  puStack_84 = (undefined1 *)0x0;
  sprintf(auStack_80,0x4003d8,*param_5);
  FUN_00275260(auStack_80,auStack_c0,0x1e);
  puVar2 = puStack_c4;
  if (puStack_c4 == (undefined1 *)0x0) {
    puVar2 = auStack_100;
  }
  puVar3 = puStack_84;
  if (puStack_84 == (undefined1 *)0x0) {
    puVar3 = auStack_c0;
  }
  puVar1 = puStack_104;
  if (puStack_104 == (undefined1 *)0x0) {
    puVar1 = auStack_140;
  }
  FUN_00275748(param_1,param_2,puVar1,puVar2,puVar3,0,0xffffffffffffffff);
  return;
}


// ==== FUN_003849f0 @ 003849f0 ====

void FUN_003849f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_f0 [60];
  undefined1 *puStack_b4;
  undefined1 auStack_b0 [60];
  undefined1 *puStack_74;
  undefined1 auStack_70 [32];
  
  puStack_b4 = (undefined1 *)0x0;
  sprintf(auStack_70,0x4003d8,*param_3);
  FUN_00275260(auStack_70,auStack_f0,0x1e);
  puStack_74 = (undefined1 *)0x0;
  sprintf(auStack_70,0x4003d8,*param_4);
  FUN_00275260(auStack_70,auStack_b0,0x1e);
  puVar1 = puStack_b4;
  if (puStack_b4 == (undefined1 *)0x0) {
    puVar1 = auStack_f0;
  }
  puVar2 = puStack_74;
  if (puStack_74 == (undefined1 *)0x0) {
    puVar2 = auStack_b0;
  }
  FUN_00275748(param_1,param_2,puVar1,puVar2,0,0,0xffffffffffffffff);
  return;
}


// ==== FUN_00384af8 @ 00384af8 ====
// GLOBAL DAT_003e0b10 undefined
// GLOBAL DAT_003e0b60 undefined

undefined8 FUN_00384af8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 0x14) = &DAT_003e0b10;
  iVar3 = 0;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  *(undefined **)(iVar4 + 0xd4) = &DAT_003e0b60;
  iVar3 = 0x14;
  do {
    iVar2 = 0;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  FUN_00384ca8(iVar4 + 0xc80);
  return param_1;
}


// ==== FUN_00384ba0 @ 00384ba0 ====
// GLOBAL DAT_003e0a68 undefined

undefined8 FUN_00384ba0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e0a68;
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00384c00 @ 00384c00 ====
// GLOBAL DAT_003e0a40 undefined

undefined8 FUN_00384c00(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e0a40;
  iVar2 = 6;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00384c38 @ 00384c38 ====
// GLOBAL DAT_003e0be8 undefined

undefined8 FUN_00384c38(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e0be8;
  iVar2 = 2;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00384c70 @ 00384c70 ====
// GLOBAL DAT_003e09a0 undefined

undefined8 FUN_00384c70(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e09a0;
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00384ca8 @ 00384ca8 ====
// GLOBAL DAT_003e0b38 undefined

undefined8 FUN_00384ca8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e0b38;
  iVar3 = 1;
  do {
    iVar2 = 0;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return param_1;
}


// ==== FUN_00384cf0 @ 00384cf0 ====

void FUN_00384cf0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 auStack_90 [30];
  undefined1 *puStack_54;
  undefined2 auStack_50 [30];
  undefined2 *puStack_14;
  
  puVar1 = auStack_90;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = (undefined2 *)param_3;
  }
  puVar2 = auStack_50;
  if (param_4 != (undefined2 *)0x0) {
    puVar2 = param_4;
  }
  auStack_90[0] = 0;
  auStack_50[0] = 0;
  puStack_54 = param_3;
  puStack_14 = param_4;
  FUN_00275748(param_1,param_2,puVar1,puVar2,0,0,0xffffffffffffffff);
  return;
}


// ==== FUN_00384d78 @ 00384d78 ====

undefined4 FUN_00384d78(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0xc));
}


// ==== FUN_00384d90 @ 00384d90 ====

undefined4 FUN_00384d90(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0xc) + 8);
}


// ==== FUN_00384da8 @ 00384da8 ====

void FUN_00384da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                 undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 auStack_90 [30];
  undefined1 *puStack_54;
  undefined2 auStack_50 [30];
  undefined2 *puStack_14;
  
  puVar2 = auStack_50;
  if (param_5 != (undefined2 *)0x0) {
    puVar2 = param_5;
  }
  puVar1 = auStack_90;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = (undefined2 *)param_4;
  }
  auStack_90[0] = 0;
  auStack_50[0] = 0;
  puStack_54 = param_4;
  puStack_14 = param_5;
  FUN_00275748(param_2,param_3,puVar1,puVar2,0,0,param_1);
  return;
}


// ==== FUN_00384e28 @ 00384e28 ====

ulong FUN_00384e28(int param_1)

{
  undefined8 in_v0_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong in_v1_udw;
  undefined8 in_a0_udw;
  
  auVar1._0_8_ = (long)(int)(((float)param_1 * 128.0) / 255.0);
  auVar1._8_8_ = in_v0_udw;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_v1_udw;
  auVar2 = _pmaxw(auVar1,auVar2 << 0x40);
  auVar3._8_8_ = in_a0_udw;
  auVar3._0_8_ = 0xff;
  auVar3 = _pminw(auVar2,auVar3);
  auVar3 = _pextlw(0,auVar3._0_8_);
  return auVar3._0_8_ & 0xff;
}


// ==== FUN_00384e70 @ 00384e70 ====

void FUN_00384e70(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  (**(code **)(*(int *)(iVar1 + 4) + 0x5c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x58));
  (**(code **)(*(int *)(iVar1 + 4) + 100))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x60));
  if (param_1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x7c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x78),3);
  }
  return;
}


// ==== FUN_00384f08 @ 00384f08 ====

void FUN_00384f08(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)param_1 + 4);
    (**(code **)(iVar1 + 0x7c))((int)param_1 + (int)*(short *)(iVar1 + 0x78),3);
  }
  return;
}


// ==== FUN_00385000 @ 00385000 ====

/* WARNING: Removing unreachable block (ram,0x00385060) */

float FUN_00385000(float *param_1)

{
  float fVar1;
  
  if (param_1[1] == 0.0) {
    if (param_1[2] == 0.0) {
      return *param_1;
    }
    fVar1 = param_1[1];
  }
  else {
    fVar1 = param_1[1];
  }
  return SQRT(*param_1 * *param_1 + fVar1 * fVar1);
}


// ==== FUN_003851a8 @ 003851a8 ====
// GLOBAL DAT_003e2120 undefined

void FUN_003851a8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e2120;
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_00385200(param_1,0xc);
  }
  return;
}


// ==== FUN_00385200 @ 00385200 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_00385200(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}


// ==== FUN_00385338 @ 00385338 ====
// GLOBAL DAT_0043dee4 undefined4

void FUN_00385338(undefined8 param_1,ulong param_2)

{
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x1c);
  }
  return;
}


// ==== FUN_003853f8 @ 003853f8 ====

/* Strings referenciadas:
     "__constructor__" */

bool FUN_003853f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00387e28(param_3,0x3fcd70);
  if (lVar1 != 0) {
    FUN_00385458(param_1,param_4);
  }
  return lVar1 != 0;
}


// ==== FUN_00385458 @ 00385458 ====

void FUN_00385458(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar2;
  if (param_2 != 0) {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
  }
  return;
}


// ==== FUN_003854b0 @ 003854b0 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1f00 undefined

void FUN_003854b0(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1f00;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_003855d8 @ 003855d8 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_003855d8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x24);
  }
  return;
}


// ==== FUN_00385660 @ 00385660 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003bfae0 int
// GLOBAL DAT_003e1f88 undefined
// GLOBAL DAT_003e2450 undefined

void FUN_00385660(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x2c) == 0) {
    uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
    iVar2 = *(int *)(param_1 + 0x28);
    FUN_00386ec8(uVar3,0x14);
    iVar4 = (int)uVar3;
    *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
    Pow2Container_ctor(iVar4 + 8,4);
    *(int *)(iVar4 + 0x1c) = iVar2;
    *(undefined **)(iVar4 + 4) = &DAT_003e2450;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
    }
  }
  else {
    uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
    iVar2 = *(int *)(param_1 + 0x28);
    uVar1 = *(undefined2 *)(param_1 + 0x2c);
    FUN_00386ec8(uVar3,0x14);
    iVar4 = (int)uVar3;
    *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
    Pow2Container_ctor(iVar4 + 8,uVar1);
    *(int *)(iVar4 + 0x1c) = iVar2;
    *(undefined **)(iVar4 + 4) = &DAT_003e2450;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
    }
  }
  DAT_003bfae0 = iVar4;
  (**(code **)(*(int *)(DAT_003bfae0 + 4) + 0xc))
            (DAT_003bfae0 + *(short *)(*(int *)(DAT_003bfae0 + 4) + 8));
  return;
}


// ==== FUN_003857a0 @ 003857a0 ====
// GLOBAL DAT_003bfae0 int
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1f88 undefined
// GLOBAL DAT_003e2450 undefined

void FUN_003857a0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (DAT_003bfae0 == 0) {
    if (*(short *)(param_1 + 0x2c) == 0) {
      uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
      iVar2 = *(int *)(param_1 + 0x28);
      FUN_00386ec8(uVar3,0x14);
      iVar4 = (int)uVar3;
      *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
      Pow2Container_ctor(iVar4 + 8,4);
      *(int *)(iVar4 + 0x1c) = iVar2;
      *(undefined **)(iVar4 + 4) = &DAT_003e2450;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
      }
    }
    else {
      uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
      iVar2 = *(int *)(param_1 + 0x28);
      uVar1 = *(undefined2 *)(param_1 + 0x2c);
      FUN_00386ec8(uVar3,0x14);
      iVar4 = (int)uVar3;
      *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
      Pow2Container_ctor(iVar4 + 8,uVar1);
      *(int *)(iVar4 + 0x1c) = iVar2;
      *(undefined **)(iVar4 + 4) = &DAT_003e2450;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
      }
    }
    DAT_003bfae0 = iVar4;
    (**(code **)(*(int *)(DAT_003bfae0 + 4) + 0xc))
              (DAT_003bfae0 + *(short *)(*(int *)(DAT_003bfae0 + 4) + 8));
  }
  return;
}


// ==== FUN_00385928 @ 00385928 ====

undefined8 FUN_00385928(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x10);
}


// ==== FUN_00385978 @ 00385978 ====
// GLOBAL DAT_003bfae0 int
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1f88 undefined
// GLOBAL DAT_003e2450 undefined

void FUN_00385978(int param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_90 [16];
  
  if (DAT_003bfae0 == 0) {
    if (*(short *)(param_1 + 0x2c) == 0) {
      uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
      iVar2 = *(int *)(param_1 + 0x28);
      FUN_00386ec8(uVar3,0x14);
      iVar4 = (int)uVar3;
      *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
      Pow2Container_ctor(iVar4 + 8,4);
      *(int *)(iVar4 + 0x1c) = iVar2;
      *(undefined **)(iVar4 + 4) = &DAT_003e2450;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
      }
    }
    else {
      uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
      iVar2 = *(int *)(param_1 + 0x28);
      uVar1 = *(undefined2 *)(param_1 + 0x2c);
      FUN_00386ec8(uVar3,0x14);
      iVar4 = (int)uVar3;
      *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
      Pow2Container_ctor(iVar4 + 8,uVar1);
      *(int *)(iVar4 + 0x1c) = iVar2;
      *(undefined **)(iVar4 + 4) = &DAT_003e2450;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
      }
    }
    DAT_003bfae0 = iVar4;
    (**(code **)(*(int *)(DAT_003bfae0 + 4) + 0xc))
              (DAT_003bfae0 + *(short *)(*(int *)(DAT_003bfae0 + 4) + 8));
  }
  FUN_003872e0(auStack_90,*(undefined4 *)(param_3 * 4 + *(int *)(*(int *)(param_1 + 0x30) + 8)));
  FUN_002488d0(DAT_003bfae0 + 8,auStack_90,param_2);
  FUN_00387328(auStack_90,2);
  return;
}


// ==== FUN_00385b10 @ 00385b10 ====
// GLOBAL DAT_0043dee4 undefined4

void FUN_00385b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0024fa38(DAT_0043dee4,0x34);
  FUN_00252030(uVar1,param_1,param_2);
  return;
}


// ==== FUN_00385ba0 @ 00385ba0 ====

undefined8 FUN_00385ba0(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x14);
}


// ==== FUN_00385bf0 @ 00385bf0 ====
// GLOBAL DAT_003bfae0 int
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1f88 undefined
// GLOBAL DAT_003e2450 undefined

void FUN_00385bf0(int param_1,undefined8 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_90 [16];
  
  if (*(int *)(param_3 * 8 + *(int *)(*(int *)(param_1 + 0x30) + 0xc)) == 0) {
    if (DAT_003bfae0 == 0) {
      if (*(short *)(param_1 + 0x2c) == 0) {
        uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
        iVar2 = *(int *)(param_1 + 0x28);
        FUN_00386ec8(uVar3,0x14);
        iVar4 = (int)uVar3;
        *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
        Pow2Container_ctor(iVar4 + 8,4);
        *(int *)(iVar4 + 0x1c) = iVar2;
        *(undefined **)(iVar4 + 4) = &DAT_003e2450;
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
        }
      }
      else {
        uVar3 = FUN_0024fa38(DAT_0043dee4,0x20);
        iVar2 = *(int *)(param_1 + 0x28);
        uVar1 = *(undefined2 *)(param_1 + 0x2c);
        FUN_00386ec8(uVar3,0x14);
        iVar4 = (int)uVar3;
        *(undefined **)(iVar4 + 4) = &DAT_003e1f88;
        Pow2Container_ctor(iVar4 + 8,uVar1);
        *(int *)(iVar4 + 0x1c) = iVar2;
        *(undefined **)(iVar4 + 4) = &DAT_003e2450;
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 4) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 4) + 8));
        }
      }
      DAT_003bfae0 = iVar4;
      (**(code **)(*(int *)(DAT_003bfae0 + 4) + 0xc))
                (DAT_003bfae0 + *(short *)(*(int *)(DAT_003bfae0 + 4) + 8));
    }
    FUN_003872e0(auStack_90,
                 *(undefined4 *)(param_3 * 8 + *(int *)(*(int *)(param_1 + 0x30) + 0xc) + 4));
    FUN_002488d0(DAT_003bfae0 + 8,auStack_90,param_2);
    FUN_00387328(auStack_90,2);
  }
  else {
    FUN_002523c0();
  }
  return;
}


// ==== FUN_00385db0 @ 00385db0 ====
// GLOBAL DAT_0043dee4 undefined4

void FUN_00385db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0024fa38(DAT_0043dee4,0x34);
  FUN_002520d8(uVar1,param_1,param_2);
  return;
}


// ==== FUN_00385e20 @ 00385e20 ====

undefined8 FUN_00385e20(int param_1)

{
  return *(undefined8 *)(param_1 + 0x3c);
}


// ==== FUN_00385e78 @ 00385e78 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1a90 undefined

void FUN_00385e78(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1a90;
  FUN_00251f70(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x44);
  }
  return;
}


// ==== FUN_00385f80 @ 00385f80 ====

void FUN_00385f80(int param_1,int param_2)

{
  (**(code **)(*(int *)(param_2 + 4) + 0xc))(param_2 + *(short *)(*(int *)(param_2 + 4) + 8));
  *(int *)(param_1 + 0x20) = param_2;
  return;
}


// ==== FUN_00385fc8 @ 00385fc8 ====

void FUN_00385fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 4);
  lVar3 = (**(code **)(iVar2 + 0x44))(iVar1 + *(short *)(iVar2 + 0x40));
  if (lVar3 == 0) {
    FUN_00250518(param_1,param_2,param_3);
  }
  return;
}


// ==== FUN_00386030 @ 00386030 ====

void FUN_00386030(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_2;
  iVar3 = (int)param_1;
  if (*(int *)(iVar2 + 0xc) != 3) {
    *(int *)(iVar3 + 0xc) = *(int *)(iVar2 + 0xc);
  }
  if (*(int *)(iVar2 + 8) != -1) {
    *(int *)(iVar3 + 8) = *(int *)(iVar2 + 8);
  }
  lVar1 = FUN_00387480(param_2,0x40de10);
  if (lVar1 != 0) {
    FUN_00387398(param_1,param_2);
  }
  if (*(float *)(iVar2 + 4) != -1.0) {
    *(float *)(iVar3 + 4) = *(float *)(iVar2 + 4);
  }
  if (*(int *)(iVar2 + 0x10) != 2) {
    *(int *)(iVar3 + 0x10) = *(int *)(iVar2 + 0x10);
  }
  if (*(int *)(iVar2 + 0x14) != -1) {
    *(int *)(iVar3 + 0x14) = *(int *)(iVar2 + 0x14);
  }
  if (*(int *)(iVar2 + 0x18) != -1) {
    *(int *)(iVar3 + 0x18) = *(int *)(iVar2 + 0x18);
  }
  if (*(int *)(iVar2 + 0x1c) != -1) {
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar2 + 0x1c);
  }
  return;
}


// ==== FUN_00386188 @ 00386188 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_00386188(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_003861f8 @ 003861f8 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_003861f8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x2c);
  }
  return;
}


// ==== FUN_00386278 @ 00386278 ====
// GLOBAL DAT_0043dee0 undefined4
// GLOBAL DAT_003e1760 undefined

void FUN_00386278(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1760;
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,8);
  }
  return;
}


// ==== FUN_003862d8 @ 003862d8 ====
// GLOBAL DAT_0043daac undefined_*

undefined4 FUN_003862d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  
  FUN_003872c0(auStack_40);
  FUN_0024c6d0(param_4,auStack_40);
  uVar1 = FUN_00387e08(param_3);
  uVar2 = FUN_00387e18(auStack_40);
  (*DAT_0043daac)(uVar1,uVar2);
  FUN_00387328(auStack_40,2);
  return 1;
}


// ==== FUN_00386368 @ 00386368 ====
// GLOBAL DAT_0043dee0 undefined4
// GLOBAL DAT_003e16d8 undefined

void FUN_00386368(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e16d8;
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,8);
  }
  return;
}


// ==== FUN_003863c8 @ 003863c8 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_003863c8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_00386438 @ 00386438 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_00386438(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_003864a8 @ 003864a8 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_003864a8(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_00386518 @ 00386518 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e1e78 undefined

void FUN_00386518(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e1e78;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_003865c8 @ 003865c8 ====
// GLOBAL DAT_003e12f8 undefined

void FUN_003865c8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e12f8;
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_002486d8(iVar1,3);
  }
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_00386628 @ 00386628 ====

void FUN_00386628(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002487e0();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


// ==== FUN_00386668 @ 00386668 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_00386668(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}


// ==== FUN_00386698 @ 00386698 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_00386698(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}


// ==== FUN_003866c8 @ 003866c8 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_003866c8(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}


// ==== FUN_003866f8 @ 003866f8 ====
// GLOBAL DAT_0043dee0 undefined4
// GLOBAL DAT_003e12f8 undefined

void FUN_003866f8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e12f8;
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_002486d8(iVar1,3);
  }
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,0x18);
  }
  return;
}


// ==== FUN_00386760 @ 00386760 ====
// GLOBAL DAT_0043dee0 undefined4
// GLOBAL DAT_003e12f8 undefined

void FUN_00386760(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e12f8;
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_002486d8(iVar1,3);
  }
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,0x18);
  }
  return;
}


// ==== FUN_003867c8 @ 003867c8 ====
// GLOBAL DAT_0043dee0 undefined4
// GLOBAL DAT_003e12f8 undefined

void FUN_003867c8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 0x14) = &DAT_003e12f8;
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_002486d8(iVar1,3);
  }
  if ((param_2 & 1) != 0) {
    Pool_Free(DAT_0043dee0,param_1,0x1c);
  }
  return;
}


// ==== FUN_00386838 @ 00386838 ====

int FUN_00386838(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 + 0x14 != *param_1 + param_1[4] * 0x14) {
    iVar1 = param_2 + 0x14;
  }
  return iVar1;
}


// ==== FUN_00386860 @ 00386860 ====

undefined4 FUN_00386860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}


// ==== FUN_00386968 @ 00386968 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_00386968(undefined8 param_1,undefined8 param_2)

{
  Pool_Free(DAT_0043dee0,param_1,param_2);
  return;
}


// ==== FUN_00386998 @ 00386998 ====

void FUN_00386998(undefined8 param_1,int *param_2,int *param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined8 uStack_120;
  int iStack_118;
  undefined8 uStack_110;
  int iStack_108;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f0;
  int iStack_ec;
  ulong uStack_e0;
  int iStack_d8;
  ulong uStack_d0;
  int iStack_c8;
  ulong uStack_c0;
  int iStack_b8;
  int *piStack_b0;
  int *piStack_ac;
  
  iVar9 = *param_2;
  iVar3 = *param_3;
  iVar6 = iVar3 - iVar9 >> 3;
  if (iVar6 != 0) {
    piVar10 = (int *)param_1;
    iVar8 = *piVar10;
    iVar1 = piVar10[1];
    iVar12 = iVar8 + iVar6;
    piStack_b0 = param_2;
    piStack_ac = param_3;
    if (iVar12 < iVar1) {
      iStack_12c = piVar10[2];
      iStack_130 = iVar8 * 8 + iStack_12c;
      uStack_120 = CONCAT44(iStack_130,iStack_12c);
      iStack_128 = iStack_130;
      if ((int)*param_4 == iStack_130) {
        iVar6 = iStack_130;
        for (; iVar9 != iVar3; iVar9 = iVar9 + 8) {
          FUN_00387398(iVar6,iVar9);
          *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar9 + 4);
          iVar6 = iVar6 + 8;
        }
        FUN_003872c0(&uStack_120);
        uStack_120 = uStack_120 & 0xffffffff;
        iVar9 = iVar12 * 8 + piVar10[2];
        FUN_00387398(iVar9,&uStack_120);
        *(undefined4 *)(iVar9 + 4) = uStack_120._4_4_;
        FUN_00387328(&uStack_120,2);
        *piVar10 = iVar12;
      }
      else {
        uStack_120 = *param_4;
        iStack_118 = (int)param_4[1];
        iVar8 = iStack_130 - (int)uStack_120 >> 3;
        iStack_100 = iStack_12c;
        iStack_fc = iStack_12c;
        iStack_f0 = iStack_12c;
        uStack_110._4_4_ = iStack_12c;
        iStack_108 = iStack_130;
        iStack_f8 = iStack_130;
        iStack_ec = iStack_130;
        iVar9 = iStack_130;
        iVar3 = iVar6 * 8 + ((int)*param_4 - iStack_12c >> 3) * 8 + iStack_12c + iVar8 * 8;
        while (iVar8 = iVar8 + -1, iVar8 != -1) {
          uStack_110._0_4_ = iVar9 + -8;
          FUN_00387398(iVar3 + -8,(int)uStack_110);
          *(undefined4 *)(iVar3 + -4) = *(undefined4 *)(iVar9 + -4);
          iVar9 = (int)uStack_110;
          iVar3 = iVar3 + -8;
        }
        iVar3 = *piStack_ac;
        uStack_110 = *param_4;
        iStack_108 = (int)param_4[1];
        for (iVar9 = *piStack_b0; uVar2 = uStack_110, iVar9 != iVar3; iVar9 = iVar9 + 8) {
          uStack_c0 = uStack_110;
          iStack_b8 = iStack_108;
          iVar6 = (int)uStack_110;
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + 8);
          uStack_d0 = uVar2;
          iStack_c8 = iStack_108;
          FUN_00387398(iVar6,iVar9);
          *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar9 + 4);
        }
        uStack_120 = uStack_110;
        iStack_118 = iStack_108;
        FUN_003872c0(&uStack_120);
        uStack_120 = uStack_120 & 0xffffffff;
        iVar9 = iVar12 * 8 + piVar10[2];
        FUN_00387398(iVar9,&uStack_120);
        *(undefined4 *)(iVar9 + 4) = uStack_120._4_4_;
        FUN_00387328(&uStack_120,2);
        *piVar10 = iVar12;
      }
    }
    else {
      iStack_130 = piVar10[2];
      iStack_128 = iVar8 * 8 + iStack_130;
      uStack_120 = CONCAT44(iStack_128,iStack_130);
      iVar3 = (int)*param_4 - iStack_130;
      iVar9 = (int)((float)iVar1 + (float)iVar1);
      if (iVar9 < iVar12) {
        iVar9 = iVar12;
      }
      if (iVar1 < iVar9) {
        if (iVar9 < 2) {
          piVar10[1] = iVar9;
        }
        else {
          iStack_12c = iStack_130;
          piVar4 = (int *)FUN_00107d20((iVar9 + 1) * 8 + 0x10);
          piVar11 = piVar4 + 4;
          *piVar4 = iVar9 + 1;
          piVar4 = piVar11;
          for (iVar6 = iVar9; iVar6 != -1; iVar6 = iVar6 + -1) {
            FUN_003872c0(piVar4);
            piVar4[1] = 0;
            piVar4 = piVar4 + 2;
          }
          iStack_130 = piVar10[2];
          iStack_128 = *piVar10 * 8 + iStack_130;
          uStack_110 = CONCAT44(iStack_128,iStack_130);
          uStack_120 = CONCAT44(iStack_130,iStack_128);
          piVar4 = piVar11;
          iStack_12c = iStack_130;
          iStack_118 = iStack_128;
          if (iStack_130 != iStack_128) {
            do {
              iVar6 = iStack_130;
              uStack_e0 = CONCAT44(iStack_12c,iStack_130);
              iStack_c8 = iStack_128;
              iStack_130 = iStack_130 + 8;
              iStack_d8 = iStack_128;
              uStack_d0 = uStack_e0;
              FUN_00387398(piVar4,iVar6);
              piVar4[1] = *(int *)(iVar6 + 4);
              piVar4 = piVar4 + 2;
            } while (iStack_130 != (int)uStack_120);
          }
          piVar4 = (int *)piVar10[2];
          piVar10[1] = iVar9;
          if (piVar4 != piVar10 + 3) {
            if (piVar4 == (int *)0x0) {
              puVar5 = (undefined4 *)FUN_00107d20(0x10);
              *puVar5 = 0;
            }
            else {
              piVar7 = piVar4 + piVar4[-4] * 2;
              while (piVar4 != piVar7) {
                piVar7 = piVar7 + -2;
                FUN_00387328(piVar7,2);
              }
              FUN_00107d50(piVar4 + -4);
            }
          }
          piVar10[2] = (int)piVar11;
          iVar9 = *piVar10;
          FUN_003872c0(&iStack_130);
          iStack_12c = 0;
          iVar9 = iVar9 * 8 + piVar10[2];
          FUN_00387398(iVar9,&iStack_130);
          *(int *)(iVar9 + 4) = iStack_12c;
          FUN_00387328(&iStack_130,2);
        }
      }
      iStack_12c = piVar10[2];
      iStack_128 = *piVar10 * 8 + iStack_12c;
      iStack_130 = (iVar3 >> 3) * 8 + iStack_12c;
      uStack_110 = CONCAT44(iStack_128,iStack_12c);
      uStack_120 = CONCAT44(iStack_12c,iStack_12c);
      iStack_118 = iStack_128;
      FUN_00386998(param_1,piStack_b0,piStack_ac,&iStack_130);
    }
  }
  return;
}


// ==== FUN_00386ec8 @ 00386ec8 ====
// GLOBAL DAT_003be8e0 undefined4
// GLOBAL DAT_003e23c8 undefined

undefined8 FUN_00386ec8(undefined8 param_1,long param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)param_1;
  puVar1[1] = (uint)&DAT_003e23c8;
  FUN_003870e0();
  FUN_00387090(param_1,0);
  FUN_00387100(param_1,1);
  FUN_00387120(param_1,0);
  FUN_00387140(param_1,0);
  *puVar1 = *puVar1 | 0x20;
  if (((param_2 == 0x1c) || (param_2 == 0x2b)) || (param_2 == 0x2c)) {
    FUN_00387180(param_1);
  }
  else {
    FUN_00387170(param_1);
    FUN_00387dc0(DAT_003be8e0,param_1);
  }
  FUN_00387058(param_1,0);
  return param_1;
}


// ==== FUN_00386f98 @ 00386f98 ====
// GLOBAL DAT_003e23c8 undefined

undefined8 FUN_00386f98(undefined8 param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)param_1;
  puVar1[1] = (uint)&DAT_003e23c8;
  FUN_003870e0();
  FUN_00387090(param_1,0);
  FUN_00387100(param_1,1);
  FUN_00387120(param_1,0);
  FUN_00387140(param_1,0);
  *puVar1 = *puVar1 & 0xffffffdf;
  FUN_00387058(param_1,0);
  FUN_00387180(param_1);
  return param_1;
}


// ==== FUN_00387020 @ 00387020 ====
// GLOBAL DAT_003e23c8 undefined

void FUN_00387020(int param_1,ulong param_2)

{
  *(undefined **)(param_1 + 4) = &DAT_003e23c8;
  if ((param_2 & 1) != 0) {
    FUN_00107d48();
  }
  return;
}


// ==== FUN_00387058 @ 00387058 ====

void FUN_00387058(uint *param_1,long param_2)

{
  *param_1 = *param_1 & 0xfeffffff | (uint)(param_2 != 0) << 0x18;
  return;
}


// ==== FUN_00387080 @ 00387080 ====

uint FUN_00387080(uint *param_1)

{
  return *param_1 >> 0x19;
}


// ==== FUN_00387090 @ 00387090 ====

void FUN_00387090(uint *param_1,uint param_2)

{
  if (0xfff < param_2) {
    param_2 = 0xfff;
    *param_1 = *param_1 & 0xfeffffff | 0x1000000;
  }
  *param_1 = *param_1 & 0xfffc003f | (param_2 & 0xfff) << 6;
  return;
}


// ==== FUN_003870e0 @ 003870e0 ====

void FUN_003870e0(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0x1ffffff | param_2 << 0x19;
  return;
}


// ==== FUN_00387100 @ 00387100 ====

void FUN_00387100(uint *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffef | (uint)(param_2 != 0) << 4;
  return;
}


// ==== FUN_00387120 @ 00387120 ====

void FUN_00387120(uint *param_1,long param_2)

{
  *param_1 = *param_1 & 0xfffffffd | (uint)(param_2 != 0) << 1;
  return;
}


// ==== FUN_00387140 @ 00387140 ====

void FUN_00387140(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xff03ffff | (param_2 & 0x3f) << 0x12;
  return;
}


// ==== FUN_00387170 @ 00387170 ====

void FUN_00387170(uint *param_1)

{
  *param_1 = *param_1 | 4;
  return;
}


// ==== FUN_00387180 @ 00387180 ====

void FUN_00387180(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffb;
  return;
}


// ==== FUN_003871c0 @ 003871c0 ====

uint FUN_003871c0(int *param_1)

{
  return *param_1 >> 4 & 1U ^ 1;
}


// ==== FUN_003872a8 @ 003872a8 ====
// GLOBAL DAT_003bfaf8 undefined2

bool FUN_003872a8(undefined4 *param_1)

{
  return (undefined2 *)*param_1 == &DAT_003bfaf8;
}


// ==== FUN_003872c0 @ 003872c0 ====
// GLOBAL DAT_003bfaf8 undefined2

undefined8 FUN_003872c0(undefined8 param_1)

{
  *(undefined4 *)param_1 = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  return param_1;
}


// ==== FUN_003872e0 @ 003872e0 ====

undefined8 FUN_003872e0(undefined8 param_1)

{
  String_ctor_cstr();
  return param_1;
}


// ==== FUN_00387308 @ 00387308 ====

undefined8 FUN_00387308(undefined8 param_1,undefined4 *param_2)

{
  short *psVar1;
  
  psVar1 = (short *)*param_2;
  *(undefined4 *)param_1 = psVar1;
  *psVar1 = *psVar1 + 1;
  return param_1;
}


// ==== FUN_00387328 @ 00387328 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_00387328(undefined8 param_1,ulong param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)*(undefined4 *)param_1;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  if ((param_2 & 1) != 0) {
    FUN_00107d48(param_1);
  }
  return;
}


// ==== FUN_00387398 @ 00387398 ====
// GLOBAL DAT_0043dee0 undefined4

undefined8 FUN_00387398(undefined8 param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  
  *(short *)*param_2 = *(short *)*param_2 + 1;
  psVar2 = (short *)*(undefined4 *)param_1;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *(undefined4 *)param_1 = *param_2;
  return param_1;
}


// ==== FUN_00387410 @ 00387410 ====

bool FUN_00387410(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  bVar3 = false;
  if (*(short *)(iVar1 + 2) == *(short *)(iVar2 + 2)) {
    if (iVar1 == iVar2) {
      bVar3 = true;
    }
    else {
      lVar4 = FUN_0035c4b0(iVar1 + 8,iVar2 + 8);
      bVar3 = lVar4 == 0;
    }
  }
  return bVar3;
}


// ==== FUN_00387458 @ 00387458 ====

bool FUN_00387458(int *param_1)

{
  long lVar1;
  
  lVar1 = strcmp(*param_1 + 8);
  return lVar1 == 0;
}


// ==== FUN_00387480 @ 00387480 ====

bool FUN_00387480(int *param_1)

{
  long lVar1;
  
  lVar1 = strcmp(*param_1 + 8);
  return lVar1 != 0;
}


// ==== FUN_003874a8 @ 003874a8 ====
// GLOBAL DAT_0043dee0 undefined4
// GLOBAL DAT_003bfaf8 undefined2

void FUN_003874a8(undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    Pool_Free(DAT_0043dee0,psVar2,(ushort)psVar2[2] + 9);
  }
  *param_1 = &DAT_003bfaf8;
  DAT_003bfaf8 = DAT_003bfaf8 + 1;
  return;
}


// ==== FUN_00387510 @ 00387510 ====

byte * FUN_00387510(byte *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = (uint)*param_1;
  if ((char)*param_1 < '\0') {
    if ((uVar1 & 0xe0) == 0xc0) {
      pbVar2 = param_1 + 2;
      uVar1 = (uVar1 & 0x1f) << 6 | param_1[1] & 0x3f;
    }
    else if ((uVar1 & 0xf0) == 0xe0) {
      pbVar2 = param_1 + 3;
      uVar1 = (uVar1 & 0xf) << 0xc | (param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f;
    }
    else {
      uVar1 = (uVar1 & 7) << 0x12 | (param_1[1] & 0x3f) << 0xc | (param_1[2] & 0x3f) << 6 |
              param_1[3] & 0x3f;
      pbVar2 = param_1 + 4;
    }
  }
  else {
    pbVar2 = param_1 + 1;
  }
  *param_2 = uVar1;
  return pbVar2;
}


// ==== FUN_003875e8 @ 003875e8 ====

void FUN_003875e8(undefined8 param_1,int *param_2,int *param_3,ulong *param_4)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  undefined8 uStack_120;
  int *piStack_118;
  undefined8 uStack_110;
  int *piStack_108;
  int iStack_100;
  int iStack_fc;
  int *piStack_f8;
  int iStack_f0;
  int *piStack_ec;
  ulong uStack_e0;
  int *piStack_d8;
  ulong uStack_d0;
  int *piStack_c8;
  ulong uStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_ac;
  int iStack_a8;
  
  piVar7 = (int *)*param_3;
  iVar6 = (int)piVar7 - *param_2 >> 2;
  if (iVar6 == 0) {
    return;
  }
  piVar12 = (int *)param_1;
  iVar10 = *piVar12;
  iVar5 = piVar12[1];
  iStack_a8 = iVar10 + iVar6;
  piStack_b0 = param_2;
  piStack_ac = param_3;
  if (iStack_a8 < iVar5) {
    piStack_12c = (int *)piVar12[2];
    piStack_130 = (int *)(iVar10 * 4 + (int)piStack_12c);
    piStack_128 = piStack_130;
    if (*(int **)param_4 == piStack_130) {
      iVar6 = iStack_a8 * 4;
      piVar8 = (int *)*param_2;
      uStack_120._0_4_ = piStack_12c;
      piVar11 = piStack_130;
      uStack_120._4_4_ = piStack_130;
      while (piVar1 = piVar11, piVar9 = piVar8, piVar9 != piVar7) {
        piVar8 = piVar9 + 1;
        piVar11 = piVar1 + 1;
        if (piVar9 != piVar1) {
          if (*piVar1 == 0) {
            iVar10 = *piVar9;
          }
          else {
            lVar4 = Refcount_Dec();
            if (lVar4 == 0) {
              FUN_00244cf8(*piVar1);
              iVar10 = *piVar9;
            }
            else {
              iVar10 = *piVar9;
            }
          }
          *piVar1 = iVar10;
          if (iVar10 != 0) {
            FUN_00244cd8();
          }
        }
      }
      piVar7 = (int *)(iVar6 + piVar12[2]);
      uStack_120 = ZEXT48(uStack_120._4_4_) << 0x20;
      lVar4 = uStack_120;
      if ((int *)&uStack_120 != piVar7) {
        if (*piVar7 == 0) {
          uStack_120._0_4_ = (int *)0x0;
          iVar6 = (int)(int *)uStack_120;
          uStack_120 = lVar4;
        }
        else {
          lVar4 = Refcount_Dec();
          iVar6 = (int)(int *)uStack_120;
          if (lVar4 == 0) {
            FUN_00244cf8(*piVar7);
            iVar6 = (int)(int *)uStack_120;
          }
        }
        *piVar7 = iVar6;
        if (iVar6 != 0) {
          FUN_00244cd8();
        }
      }
      if (((int *)uStack_120 != (int *)0x0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
        FUN_00244cf8((int *)uStack_120);
      }
    }
    else {
      uStack_120 = *param_4;
      piStack_118 = (int *)param_4[1];
      iVar10 = (int)piStack_130 - (int)(int *)uStack_120 >> 2;
      piVar7 = (int *)(iVar6 * 4 +
                       ((int)*(int **)param_4 - (int)piStack_12c >> 2) * 4 + (int)piStack_12c +
                      iVar10 * 4);
      uStack_110 = CONCAT44(piStack_12c,piStack_130 + -1);
      iVar6 = iStack_a8 * 4;
      iStack_100 = (int)piStack_12c;
      iStack_fc = (int)piStack_12c;
      iStack_f0 = (int)piStack_12c;
      piStack_108 = piStack_130;
      piStack_f8 = piStack_130;
      piStack_ec = piStack_130;
      while (iVar10 = iVar10 + -1, iVar10 != -1) {
        piVar7 = piVar7 + -1;
        piVar8 = (int *)uStack_110;
        if ((int *)uStack_110 != piVar7) {
          if (*piVar7 == 0) {
            iVar5 = *(int *)uStack_110;
          }
          else {
            lVar4 = Refcount_Dec();
            if (lVar4 == 0) {
              FUN_00244cf8(*piVar7);
              iVar5 = *piVar8;
            }
            else {
              iVar5 = *piVar8;
            }
          }
          *piVar7 = iVar5;
          if (iVar5 != 0) {
            FUN_00244cd8();
          }
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,(int *)uStack_110 + -1);
      }
      piVar7 = (int *)*piStack_ac;
      uStack_110 = *param_4;
      piStack_108 = *(int **)(param_4 + 1);
      piVar8 = (int *)*piStack_b0;
      if ((int *)*piStack_b0 == piVar7) {
        iVar10 = piVar12[2];
      }
      else {
        do {
          uStack_d0 = uStack_110;
          uStack_c0 = uStack_110;
          piStack_b8 = piStack_108;
          piVar11 = (int *)uStack_110;
          uStack_110 = CONCAT44(uStack_110._4_4_,(int *)uStack_110 + 1);
          piStack_c8 = piStack_108;
          piVar9 = piVar8 + 1;
          if (piVar8 != piVar11) {
            if (*piVar11 == 0) {
              iVar10 = *piVar8;
            }
            else {
              lVar4 = Refcount_Dec();
              if (lVar4 == 0) {
                FUN_00244cf8(*piVar11);
                iVar10 = *piVar8;
              }
              else {
                iVar10 = *piVar8;
              }
            }
            *piVar11 = iVar10;
            if (iVar10 != 0) {
              FUN_00244cd8();
            }
          }
          piVar8 = piVar9;
        } while (piVar9 != piVar7);
        iVar10 = piVar12[2];
      }
      piStack_118 = piStack_108;
      piVar7 = (int *)(iVar6 + iVar10);
      uStack_120 = uStack_110 & 0xffffffff00000000;
      uVar2 = uStack_120;
      if ((int *)&uStack_120 != piVar7) {
        if (*piVar7 == 0) {
          uStack_120._0_4_ = (int *)0x0;
          iVar6 = (int)(int *)uStack_120;
          uStack_120 = uVar2;
        }
        else {
          lVar4 = Refcount_Dec();
          iVar6 = (int)(int *)uStack_120;
          if (lVar4 == 0) {
            FUN_00244cf8(*piVar7);
            iVar6 = (int)(int *)uStack_120;
          }
        }
        *piVar7 = iVar6;
        if (iVar6 != 0) {
          FUN_00244cd8();
        }
      }
      if (((int *)uStack_120 != (int *)0x0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
        FUN_00244cf8((int *)uStack_120);
      }
    }
    *piVar12 = iStack_a8;
    return;
  }
  piStack_130 = (int *)piVar12[2];
  piStack_128 = piStack_130 + iVar10;
  iVar10 = (int)*param_4 - (int)piStack_130;
  iVar6 = (int)((float)iVar5 + (float)iVar5);
  uStack_120 = CONCAT44(piStack_128,piStack_130);
  if (iVar6 < iStack_a8) {
    iVar6 = iStack_a8;
  }
  if (iVar5 < iVar6) {
    if (iVar6 < 2) {
      piVar12[1] = iVar6;
    }
    else {
      piStack_12c = piStack_130;
      piVar7 = (int *)FUN_0021b078((iVar6 + 1) * 4 + 0x10);
      piVar8 = piVar7 + 4;
      *piVar7 = iVar6 + 1;
      piVar7 = piVar8;
      for (iVar5 = iVar6; iVar5 != -1; iVar5 = iVar5 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      piStack_130 = (int *)piVar12[2];
      piStack_128 = piStack_130 + *piVar12;
      uStack_110 = CONCAT44(piStack_128,piStack_130);
      uStack_120 = CONCAT44(piStack_130,piStack_128);
      piVar7 = piVar8;
      piStack_12c = piStack_130;
      piStack_118 = piStack_128;
      if (piStack_130 != piStack_128) {
        do {
          piVar11 = piStack_130;
          uStack_e0 = CONCAT44(piStack_12c,piStack_130);
          piStack_c8 = piStack_128;
          piVar9 = piStack_130 + 1;
          piStack_d8 = piStack_128;
          uStack_d0 = uStack_e0;
          if (piStack_130 != piVar7) {
            if (*piVar7 == 0) {
              iVar5 = *piStack_130;
              piStack_130 = piVar9;
            }
            else {
              piStack_130 = piVar9;
              lVar4 = Refcount_Dec();
              if (lVar4 == 0) {
                FUN_00244cf8(*piVar7);
                iVar5 = *piVar11;
              }
              else {
                iVar5 = *piVar11;
              }
            }
            *piVar7 = iVar5;
            piVar9 = piStack_130;
            if (iVar5 != 0) {
              FUN_00244cd8();
              piVar9 = piStack_130;
            }
          }
          piStack_130 = piVar9;
          piVar7 = piVar7 + 1;
        } while (piStack_130 != (int *)uStack_120);
      }
      piVar7 = (int *)piVar12[2];
      piVar12[1] = iVar6;
      if (piVar7 != piVar12 + 3) {
        if (piVar7 == (int *)0x0) {
          puVar3 = (undefined4 *)FUN_0021b078(0x10);
          *puVar3 = 0;
        }
        else {
          piVar11 = piVar7 + piVar7[-4];
          while (piVar7 != piVar11) {
            piVar11 = piVar11 + -1;
            if ((*piVar11 != 0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
              FUN_00244cf8(*piVar11);
            }
          }
          FUN_0021b0b0(piVar7 + -4);
        }
      }
      piVar12[2] = (int)piVar8;
      piVar8 = piVar8 + *piVar12;
      piStack_130 = (int *)0x0;
      if (&piStack_130 != (int **)piVar8) {
        if ((*piVar8 != 0) && (lVar4 = Refcount_Dec(), lVar4 == 0)) {
          FUN_00244cf8(*piVar8);
        }
        *piVar8 = (int)piStack_130;
        if (piStack_130 != (int *)0x0) {
          FUN_00244cd8();
        }
      }
      if (piStack_130 == (int *)0x0) {
        iVar6 = *piVar12;
        goto LAB_00387bf8;
      }
      lVar4 = Refcount_Dec();
      if (lVar4 != 0) {
        iVar6 = *piVar12;
        goto LAB_00387bf8;
      }
      FUN_00244cf8(piStack_130);
    }
  }
  iVar6 = *piVar12;
LAB_00387bf8:
  piStack_12c = (int *)piVar12[2];
  piStack_128 = (int *)(iVar6 * 4 + (int)piStack_12c);
  piStack_130 = (int *)((iVar10 >> 2) * 4 + (int)piStack_12c);
  uStack_110 = CONCAT44(piStack_128,piStack_12c);
  uStack_120 = CONCAT44(piStack_12c,piStack_12c);
  piStack_118 = piStack_128;
  FUN_003875e8(param_1,piStack_b0,piStack_ac,&piStack_130);
  return;
}


// ==== FUN_00387c70 @ 00387c70 ====
// GLOBAL DAT_0043dee0 undefined4

void FUN_00387c70(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Pool_Alloc(DAT_0043dee0,*param_1 << 3);
  param_1[1] = (int)uVar1;
  memset(uVar1,0,*param_1 << 3);
  return;
}


// ==== FUN_00387cc0 @ 00387cc0 ====

void FUN_00387cc0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x1c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10));
  }
  FUN_0024f790(param_1);
  return;
}


// ==== FUN_00387d08 @ 00387d08 ====
// GLOBAL DAT_003bfab0 undefined_*

/* Strings referenciadas:
     "ParentScope" */

void FUN_00387d08(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x1c);
  if (iVar1 != 0) {
    (*DAT_003bfab0)(param_1,iVar1,0x3fcd80);
  }
  FUN_0024f770(param_1);
  return;
}


// ==== FUN_00387d50 @ 00387d50 ====
// GLOBAL DAT_0043dee4 undefined4
// GLOBAL DAT_003e2450 undefined

void FUN_00387d50(undefined8 param_1,ulong param_2)

{
  *(undefined **)((int)param_1 + 4) = &DAT_003e2450;
  FUN_002486d8((int)param_1 + 8,2);
  FUN_00387020(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_0024fa98(DAT_0043dee4,param_1,0x20);
  }
  return;
}


// ==== FUN_00387dc0 @ 00387dc0 ====

void FUN_00387dc0(int *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 < *param_1) {
    *(uint **)(iVar1 * 4 + param_1[2]) = param_2;
    param_1[1] = iVar1 + 1;
    return;
  }
  *param_2 = *param_2 & 0xfffffffb;
  return;
}


// ==== FUN_00387e08 @ 00387e08 ====

int FUN_00387e08(int *param_1)

{
  return *param_1 + 8;
}


// ==== FUN_00387e18 @ 00387e18 ====

int FUN_00387e18(int *param_1)

{
  return *param_1 + 8;
}


// ==== FUN_00387e28 @ 00387e28 ====

bool FUN_00387e28(int *param_1)

{
  long lVar1;
  
  lVar1 = strcmp(*param_1 + 8);
  return lVar1 == 0;
}


// ==== FUN_00387e50 @ 00387e50 ====
// GLOBAL DAT_003db3e8 undefined
// GLOBAL DAT_003db410 undefined
// GLOBAL DAT_003db438 undefined
// GLOBAL DAT_003db460 undefined
// GLOBAL DAT_003db488 undefined
// GLOBAL DAT_003db4e0 undefined
// GLOBAL DAT_003db538 undefined
// GLOBAL DAT_003db590 undefined
// GLOBAL DAT_003db678 undefined
// GLOBAL DAT_003e0cf0 undefined
// GLOBAL DAT_003e0d28 undefined
// GLOBAL DAT_003e0d60 undefined
// GLOBAL DAT_003e0d98 undefined
// GLOBAL DAT_003e1078 undefined
// GLOBAL DAT_003e1120 undefined
// GLOBAL DAT_003e24d8 undefined

undefined8 FUN_00387e50(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x14) = &DAT_003e24d8;
  *(undefined **)(iVar1 + 0x20218) = &DAT_003db678;
  *(undefined **)(iVar1 + 0x2021c) = &DAT_003e1120;
  FUN_00388c38(iVar1 + 0x20220);
  *(undefined **)(iVar1 + 0x20f80) = &DAT_003db590;
  *(undefined **)(iVar1 + 0x20f98) = &DAT_003db538;
  *(undefined **)(iVar1 + 0x20fa8) = &DAT_003db4e0;
  *(undefined **)(iVar1 + 0x20fe0) = &DAT_003db488;
  *(undefined **)(iVar1 + 0x21038) = &DAT_003e0d28;
  *(undefined **)(iVar1 + 0x2102c) = &DAT_003db460;
  *(undefined **)(iVar1 + 0x21030) = &DAT_003e0d98;
  *(undefined **)(iVar1 + 0x21034) = &DAT_003e0d60;
  *(undefined **)(iVar1 + 0x21048) = &DAT_003e1078;
  *(undefined **)(iVar1 + 0x21040) = &DAT_003db438;
  *(undefined **)(iVar1 + 0x21050) = &DAT_003db410;
  *(undefined **)(iVar1 + 0x2105c) = &DAT_003db3e8;
  *(undefined **)(iVar1 + 0x210a0) = &DAT_003e0cf0;
  return param_1;
}


// ==== FUN_00387fc0 @ 00387fc0 ====

void FUN_00387fc0(int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
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
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x30) + 0xc4);
  if ((iVar7 - 3U < 2) || (bVar5 = false, iVar7 == 7)) {
    bVar5 = true;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (bVar5) {
    if (*(char *)(iVar7 + 0x13d) == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = *(char *)(*(int *)(iVar7 + 0x11c) + 0x44);
    }
    if (cVar6 != '\0') {
      return;
    }
  }
  if (*(int *)(iVar7 + 0xc4) - 1U < 2) {
    if (*(char *)(iVar7 + 0x3af) != '\0') {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x34);
  }
  iVar7 = *(int *)(iVar7 + 0xc);
  iVar3 = *(int *)(iVar7 + 0x58);
  if (iVar3 == 0) {
    auStack_d0 = *(undefined1 (*) [16])(iVar7 + 0x10);
    auStack_c0 = *(undefined1 (*) [16])(iVar7 + 0x20);
    auStack_b0 = *(undefined1 (*) [16])(iVar7 + 0x30);
    auStack_a0 = *(undefined1 (*) [16])(iVar7 + 0x40);
  }
  else {
    pauVar4 = *(undefined1 (**) [16])(iVar7 + 0x50);
    if (pauVar4 == (undefined1 (*) [16])0x0) {
      auStack_a0 = *(undefined1 (*) [16])(iVar3 + 0x10);
      auStack_d0 = *(undefined1 (*) [16])(iVar3 + 0x40);
      auStack_c0 = *(undefined1 (*) [16])(iVar3 + 0x50);
      auStack_b0 = *(undefined1 (*) [16])(iVar3 + 0x60);
    }
    else {
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x40));
      uStack_60 = *(undefined4 *)*(undefined1 (*) [16])(iVar3 + 0x10);
      uStack_5c = *(undefined4 *)(iVar3 + 0x14);
      uStack_58 = *(undefined4 *)(iVar3 + 0x18);
      uStack_54 = *(undefined4 *)(iVar3 + 0x1c);
      pauVar1 = (undefined1 (*) [16])(iVar3 + 0x50);
      uStack_80 = *(undefined4 *)*pauVar1;
      uStack_7c = *(undefined4 *)(iVar3 + 0x54);
      uStack_78 = *(undefined4 *)(iVar3 + 0x58);
      uStack_74 = *(undefined4 *)(iVar3 + 0x5c);
      pauVar2 = (undefined1 (*) [16])(iVar3 + 0x60);
      uStack_70 = *(undefined4 *)*pauVar2;
      uStack_6c = *(undefined4 *)(iVar3 + 100);
      uStack_68 = *(undefined4 *)(iVar3 + 0x68);
      uStack_64 = *(undefined4 *)(iVar3 + 0x6c);
      auStack_90 = _sqc2(auVar10);
      auVar9 = _lqc2(*pauVar2);
      auVar8 = _lqc2(*pauVar4);
      auVar13 = _lqc2(*pauVar1);
      _vmulabc(auVar10,auVar8);
      _vmaddabc(auVar13,auVar8);
      auVar14 = _vmaddbc(auVar9,auVar8);
      auStack_50 = _sqc2(auVar14);
      auVar9 = _lqc2(*pauVar2);
      auVar8 = _lqc2(pauVar4[1]);
      auVar13 = _lqc2(*pauVar1);
      _vmulabc(auVar10,auVar8);
      _vmaddabc(auVar13,auVar8);
      auVar12 = _vmaddbc(auVar9,auVar8);
      auStack_40 = _sqc2(auVar12);
      auVar9 = _lqc2(*pauVar2);
      auVar8 = _lqc2(pauVar4[2]);
      auVar13 = _lqc2(*pauVar1);
      _vmulabc(auVar10,auVar8);
      _vmaddabc(auVar13,auVar8);
      auVar13 = _vmaddbc(auVar9,auVar8);
      auStack_30 = _sqc2(auVar13);
      auVar15 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x10));
      auVar11 = _lqc2(pauVar4[3]);
      auVar9 = _lqc2(*pauVar1);
      auVar8 = _lqc2(*pauVar2);
      _vmulabc(auVar10,auVar11);
      _vmaddabc(auVar9,auVar11);
      _vmaddabc(auVar8,auVar11);
      auVar8 = _vmaddbc(auVar15,in_vf0);
      auStack_d0 = _sqc2(auVar14);
      auStack_c0 = _sqc2(auVar12);
      auStack_b0 = _sqc2(auVar13);
      auStack_a0 = _sqc2(auVar8);
      auStack_20 = _sqc2(auVar8);
    }
  }
  uStack_100 = auStack_c0._0_4_;
  uStack_fc = auStack_c0._4_4_;
  uStack_f8 = auStack_c0._8_4_;
  uStack_f4 = auStack_c0._12_4_;
  uStack_f0 = auStack_b0._0_4_;
  uStack_ec = auStack_b0._4_4_;
  uStack_e8 = auStack_b0._8_4_;
  uStack_e4 = auStack_b0._12_4_;
  uStack_110 = auStack_d0._0_4_;
  uStack_10c = auStack_d0._4_4_;
  uStack_108 = auStack_d0._8_4_;
  uStack_104 = auStack_d0._12_4_;
  uStack_e0 = auStack_a0._0_4_;
  uStack_dc = auStack_a0._4_4_;
  uStack_d8 = auStack_a0._8_4_;
  uStack_d4 = auStack_a0._12_4_;
  FUN_00125f88(*(undefined4 *)(param_1 + 0x30),&uStack_110);
  return;
}


// ==== FUN_00388190 @ 00388190 ====

/* WARNING: Removing unreachable block (ram,0x003886b0) */
/* WARNING: Removing unreachable block (ram,0x00388398) */
/* WARNING: Removing unreachable block (ram,0x00388968) */
/* WARNING: Removing unreachable block (ram,0x00388afc) */
/* WARNING: Removing unreachable block (ram,0x00388a34) */
/* WARNING: Removing unreachable block (ram,0x003885e8) */
/* WARNING: Removing unreachable block (ram,0x0038851c) */
/* WARNING: Removing unreachable block (ram,0x003887bc) */

void FUN_00388190(int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined1 (*pauVar25) [16];
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 (*pauVar35) [16];
  float fVar36;
  undefined1 in_vf0 [16];
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
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_10c;
  float fStack_108;
  float fStack_8c;
  float fStack_88;
  
  iVar3 = *(int *)(param_1 + 0x30);
  auVar38 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
  _sqc2(auVar38);
  pauVar25 = (undefined1 (*) [16])(iVar3 + 0x80);
  uVar31 = *(undefined4 *)*pauVar25;
  uVar32 = *(undefined4 *)(iVar3 + 0x84);
  uVar33 = *(undefined4 *)(iVar3 + 0x88);
  uVar34 = *(undefined4 *)(iVar3 + 0x8c);
  auVar24 = *pauVar25;
  auVar21 = *pauVar25;
  auVar19 = *pauVar25;
  auVar18 = *pauVar25;
  auVar15 = *pauVar25;
  auVar12 = *pauVar25;
  auVar11 = *pauVar25;
  auVar9 = *pauVar25;
  auVar8 = *pauVar25;
  auVar48 = *pauVar25;
  auVar46 = *pauVar25;
  auVar43 = *pauVar25;
  auVar42 = *pauVar25;
  auVar37 = *pauVar25;
  pauVar1 = (undefined1 (*) [16])(iVar3 + 0x90);
  uVar5 = *(undefined8 *)*pauVar1;
  uVar26 = *(undefined4 *)(iVar3 + 0x98);
  uVar27 = *(undefined4 *)(iVar3 + 0x9c);
  auVar23 = *pauVar1;
  auVar22 = *pauVar1;
  auVar20 = *pauVar1;
  auVar17 = *pauVar1;
  auVar16 = *pauVar1;
  auVar14 = *pauVar1;
  auVar13 = *pauVar1;
  auVar10 = *pauVar1;
  auVar7 = *pauVar1;
  auVar47 = *pauVar1;
  auVar44 = *pauVar1;
  auVar41 = *pauVar1;
  auVar39 = *pauVar1;
  pauVar2 = (undefined1 (*) [16])(iVar3 + 0xa0);
  uVar6 = *(undefined8 *)*pauVar2;
  uVar29 = *(undefined4 *)(iVar3 + 0xa8);
  uVar30 = *(undefined4 *)(iVar3 + 0xac);
  auVar40 = *pauVar2;
  auVar45 = _sqc2(auVar38);
  iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
  pauVar35 = *(undefined1 (**) [16])(iVar3 + 0x58);
  uStack_190 = auVar45._0_4_;
  uStack_18c = auVar45._4_4_;
  uStack_188 = auVar45._8_4_;
  uStack_184 = auVar45._12_4_;
  if (pauVar35 == (undefined1 (*) [16])0x0) goto LAB_00388bf4;
  pauVar4 = *(undefined1 (**) [16])(iVar3 + 0x50);
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    _lqc2(pauVar35[4]);
    auVar38 = _vmove(auVar38);
    _lqc2(pauVar35[6]);
    auVar38 = _sqc2(auVar38);
    pauVar35[4] = auVar38;
    _lqc2(pauVar35[5]);
    _lqc2(pauVar35[1]);
    auVar37 = _lqc2(auVar37);
    auVar37 = _vmove(auVar37);
    auVar37 = _sqc2(auVar37);
    pauVar35[5] = auVar37;
    auVar37 = _lqc2(auVar39);
    auVar37 = _vmove(auVar37);
    auVar37 = _sqc2(auVar37);
    pauVar35[6] = auVar37;
    auVar37 = _lqc2(auVar40);
    auVar37 = _vmove(auVar37);
    auVar37 = _sqc2(auVar37);
    pauVar35[1] = auVar37;
    auVar40 = _lqc2(auVar42);
    auVar37 = _lqc2(auVar45);
    auVar37 = _vaddbc(auVar37,auVar40);
    auVar39 = _lqc2(auVar41);
    auVar37 = _vaddbc(auVar37,auVar39);
    auVar37 = _qmfc2(auVar37._0_4_);
    if (auVar37._0_4_ <= 0.0) {
      auVar37 = _sqc2(auVar40);
      auVar39 = _lqc2(auVar45);
      auVar39 = _qmfc2(auVar39._0_4_);
      fStack_10c = auVar37._4_4_;
      auVar37 = _lqc2(auVar47);
      if (fStack_10c <= auVar39._0_4_) {
        auVar37 = _sqc2(auVar37);
        auVar39 = _lqc2(auVar45);
        auVar39 = _qmfc2(auVar39._0_4_);
        fStack_108 = auVar37._8_4_;
        uVar28 = (uint)(auVar39._0_4_ < fStack_108) << 1;
      }
      else {
        auVar37 = _sqc2(auVar37);
        fStack_108 = auVar37._8_4_;
        auVar37 = _lqc2(auVar48);
        auVar37 = _sqc2(auVar37);
        fStack_10c = auVar37._4_4_;
        uVar28 = 1;
        if (fStack_10c < fStack_108) {
          uVar28 = 2;
        }
      }
      if (uVar28 != 1) {
        if (uVar28 < 2) {
          if (uVar28 == 0) {
            auVar37 = _lqc2(auVar7);
            auVar39 = _lqc2(auVar9);
            auVar40 = _vaddbc(auVar39,auVar37);
            auVar37 = _lqc2(auVar45);
            auVar39 = _qmtc2(0x3f800000);
            auVar37 = _vsubbc(auVar37,auVar40);
            auVar37 = _vaddbc(auVar37,auVar39);
            auVar37 = _qmfc2(auVar37._0_4_);
            _lqc2(*pauVar35);
            fVar36 = 0.5 / SQRT(auVar37._0_4_);
            auVar37 = _qmtc2(SQRT(auVar37._0_4_) * 0.5);
            auVar37 = _vaddbc(in_vf0,auVar37);
            auVar37 = _sqc2(auVar37);
            *pauVar35 = auVar37;
            auVar42 = _qmtc2(fVar36);
            auVar40 = _qmtc2(fVar36);
            auVar39 = _lqc2(auVar10);
            auVar37 = _lqc2(auVar11);
            auVar37 = _vsubbc(auVar37,auVar39);
            auVar37 = _vmulbc(auVar37,auVar42);
            auVar37 = _vmulbc(in_vf0,auVar37);
            auVar37 = _sqc2(auVar37);
            *pauVar35 = auVar37;
            auVar39 = _lqc2(auVar12);
            auVar37 = _lqc2(auVar45);
            auVar37 = _vaddbc(auVar37,auVar39);
            auVar37 = _vmulbc(auVar37,auVar40);
            auVar37 = _vaddbc(in_vf0,auVar37);
            auVar37 = _sqc2(auVar37);
            *pauVar35 = auVar37;
            auVar45 = _lqc2(auVar45);
            auVar37 = _lqc2(auVar13);
            auVar45 = _vaddbc(auVar45,auVar37);
            auVar45 = _vmulbc(auVar45,auVar42);
            auVar45 = _vaddbc(in_vf0,auVar45);
            auVar45 = _sqc2(auVar45);
            *pauVar35 = auVar45;
            goto LAB_00388b80;
          }
          pauVar25 = *(undefined1 (**) [16])(pauVar35[5] + 0xc);
        }
        else {
          if (uVar28 == 2) {
            auVar37 = _lqc2(auVar8);
            auVar39 = _lqc2(auVar45);
            auVar39 = _vaddbc(auVar39,auVar37);
            auVar37 = _lqc2(auVar20);
            auVar37 = _vsubbc(auVar37,auVar39);
            auVar39 = _qmtc2(0x3f800000);
            auVar37 = _vaddbc(auVar37,auVar39);
            auVar37 = _sqc2(auVar37);
            fStack_108 = auVar37._8_4_;
            _lqc2(*pauVar35);
            fVar36 = 0.5 / SQRT(fStack_108);
            auVar37 = _qmtc2(SQRT(fStack_108) * 0.5);
            auVar37 = _vaddbc(in_vf0,auVar37);
            auVar37 = _sqc2(auVar37);
            *pauVar35 = auVar37;
            auVar42 = _qmtc2(fVar36);
            auVar40 = _qmtc2(fVar36);
            auVar39 = _lqc2(auVar21);
            auVar37 = _lqc2(auVar45);
            auVar37 = _vsubbc(auVar37,auVar39);
            auVar37 = _vmulbc(auVar37,auVar42);
            auVar37 = _vmulbc(in_vf0,auVar37);
            auVar37 = _sqc2(auVar37);
            *pauVar35 = auVar37;
            auVar37 = _lqc2(auVar45);
            auVar45 = _lqc2(auVar22);
            auVar45 = _vaddbc(auVar45,auVar37);
            auVar45 = _vmulbc(auVar45,auVar40);
            auVar45 = _vaddbc(in_vf0,auVar45);
            auVar45 = _sqc2(auVar45);
            *pauVar35 = auVar45;
            auVar45 = _lqc2(auVar23);
            auVar37 = _lqc2(auVar24);
            goto LAB_00388b70;
          }
          pauVar25 = *(undefined1 (**) [16])(pauVar35[5] + 0xc);
        }
        goto LAB_00388b84;
      }
      auVar37 = _lqc2(auVar45);
      auVar39 = _lqc2(auVar14);
      auVar39 = _vaddbc(auVar39,auVar37);
      auVar37 = _lqc2(auVar15);
      auVar37 = _vsubbc(auVar37,auVar39);
      auVar39 = _qmtc2(0x3f800000);
      auVar37 = _vaddbc(auVar37,auVar39);
      auVar37 = _sqc2(auVar37);
      fStack_10c = auVar37._4_4_;
      _lqc2(*pauVar35);
      fVar36 = 0.5 / SQRT(fStack_10c);
      auVar37 = _qmtc2(SQRT(fStack_10c) * 0.5);
      auVar37 = _vaddbc(in_vf0,auVar37);
      auVar37 = _sqc2(auVar37);
      *pauVar35 = auVar37;
      auVar42 = _qmtc2(fVar36);
      auVar40 = _qmtc2(fVar36);
      auVar39 = _lqc2(auVar45);
      auVar37 = _lqc2(auVar16);
      auVar37 = _vsubbc(auVar37,auVar39);
      auVar37 = _vmulbc(auVar37,auVar42);
      auVar37 = _vmulbc(in_vf0,auVar37);
      auVar37 = _sqc2(auVar37);
      *pauVar35 = auVar37;
      auVar39 = _lqc2(auVar17);
      auVar37 = _lqc2(auVar18);
      auVar37 = _vaddbc(auVar37,auVar39);
      auVar37 = _vmulbc(auVar37,auVar40);
      auVar37 = _vaddbc(in_vf0,auVar37);
      auVar37 = _sqc2(auVar37);
      *pauVar35 = auVar37;
      auVar37 = _lqc2(auVar19);
      auVar45 = _lqc2(auVar45);
      auVar45 = _vaddbc(auVar37,auVar45);
      auVar45 = _vmulbc(auVar45,auVar42);
      auVar45 = _vaddbc(in_vf0,auVar45);
      auVar45 = _sqc2(auVar45);
      *pauVar35 = auVar45;
      goto LAB_00388b80;
    }
    fVar36 = SQRT(auVar37._0_4_ + 1.0);
    auVar37 = _lqc2(auVar43);
    _lqc2(*pauVar35);
    auVar37 = _vsubbc(auVar37,auVar39);
    auVar37 = _vaddbc(in_vf0,auVar37);
    auVar37 = _sqc2(auVar37);
    *pauVar35 = auVar37;
    auVar39 = _lqc2(auVar45);
    auVar37 = _lqc2(auVar44);
    auVar37 = _vsubbc(auVar37,auVar39);
    auVar37 = _vaddbc(in_vf0,auVar37);
    auVar42 = _qmtc2(0);
    auVar37 = _sqc2(auVar37);
    *pauVar35 = auVar37;
    auVar39 = _qmtc2(0.5 / fVar36);
    auVar37 = _lqc2(auVar46);
    auVar40 = _qmtc2(fVar36 * 0.5);
    auVar45 = _lqc2(auVar45);
LAB_00388824:
    auVar45 = _vsubbc(auVar45,auVar37);
    auVar45 = _vaddbc(in_vf0,auVar45);
    _vmove(auVar45);
    auVar37 = _vmulbc(in_vf0,auVar42);
    auVar45 = _sqc2(auVar45);
    *pauVar35 = auVar45;
    auVar45 = _vmove(auVar37);
    auVar45 = _vmulbc(auVar45,auVar39);
    auVar45 = _sqc2(auVar45);
    *pauVar35 = auVar45;
    auVar45 = _vmulbc(in_vf0,auVar40);
    auVar45 = _sqc2(auVar45);
    *pauVar35 = auVar45;
LAB_00388b80:
    pauVar25 = *(undefined1 (**) [16])(pauVar35[5] + 0xc);
  }
  else {
    auVar40 = _lqc2(*pauVar4);
    _sqc2(auVar40);
    _vmove(auVar40);
    auVar39 = _lqc2(pauVar4[1]);
    auVar43 = _vaddbc(in_vf0,auVar39);
    _vmove(auVar43);
    _sqc2(auVar39);
    _vmove(auVar39);
    auVar42 = _vaddbc(in_vf0,auVar40);
    auVar37 = _lqc2(pauVar4[2]);
    _vmove(auVar42);
    auVar46 = _vaddbc(in_vf0,auVar37);
    auVar47 = _vaddbc(in_vf0,auVar37);
    _sqc2(auVar37);
    _vmove(auVar37);
    auVar44 = _vaddbc(in_vf0,auVar40);
    auVar41 = _lqc2(pauVar4[3]);
    _vmove(auVar44);
    auVar40 = _vmulbc(auVar46,auVar41);
    auVar37 = _vmulbc(auVar47,auVar41);
    auVar48 = _vaddbc(in_vf0,auVar39);
    auVar39 = _vmulbc(auVar48,auVar41);
    auVar37 = _vadd(auVar40,auVar37);
    _sqc2(auVar43);
    auVar37 = _vadd(auVar37,auVar39);
    _sqc2(auVar42);
    auVar42 = _vsub(in_vf0,auVar37);
    _sqc2(auVar44);
    auVar37 = _sqc2(auVar46);
    _sqc2(auVar41);
    auVar39 = _sqc2(auVar47);
    auVar40 = _sqc2(auVar48);
    auVar42 = _sqc2(auVar42);
    auVar41 = _lqc2(auVar45);
    auVar44 = _lqc2(*pauVar25);
    auVar43 = _lqc2(*pauVar1);
    auVar45 = _lqc2(auVar37);
    _vmulabc(auVar41,auVar45);
    _vmaddabc(auVar44,auVar45);
    auVar46 = _vmaddbc(auVar43,auVar45);
    auVar47 = _lqc2(*pauVar2);
    _sqc2(auVar46);
    auVar45 = _lqc2(auVar39);
    _vmulabc(auVar41,auVar45);
    _vmaddabc(auVar44,auVar45);
    auVar37 = _vmaddbc(auVar43,auVar45);
    _sqc2(auVar37);
    auVar45 = _lqc2(auVar40);
    _vmulabc(auVar41,auVar45);
    _vmaddabc(auVar44,auVar45);
    auVar39 = _vmaddbc(auVar43,auVar45);
    _sqc2(auVar39);
    auVar45 = _lqc2(auVar42);
    _vmulabc(auVar41,auVar45);
    _vmaddabc(auVar44,auVar45);
    _vmaddabc(auVar43,auVar45);
    auVar40 = _vmaddbc(auVar47,in_vf0);
    auVar37 = _sqc2(auVar37);
    auVar45 = _sqc2(auVar39);
    auVar39 = _sqc2(auVar40);
    _sqc2(auVar40);
    auVar41 = _sqc2(auVar46);
    pauVar35 = *(undefined1 (**) [16])(iVar3 + 0x58);
    _lqc2(pauVar35[4]);
    auVar40 = _vmove(auVar46);
    auVar40 = _sqc2(auVar40);
    pauVar35[4] = auVar40;
    auVar40 = _lqc2(auVar37);
    _lqc2(pauVar35[5]);
    auVar40 = _vmove(auVar40);
    _lqc2(pauVar35[6]);
    auVar40 = _sqc2(auVar40);
    pauVar35[5] = auVar40;
    _lqc2(pauVar35[1]);
    auVar40 = _lqc2(auVar45);
    auVar40 = _vmove(auVar40);
    auVar40 = _sqc2(auVar40);
    pauVar35[6] = auVar40;
    auVar39 = _lqc2(auVar39);
    auVar39 = _vmove(auVar39);
    auVar39 = _sqc2(auVar39);
    pauVar35[1] = auVar39;
    auVar42 = _lqc2(auVar37);
    auVar39 = _lqc2(auVar41);
    auVar39 = _vaddbc(auVar39,auVar42);
    auVar40 = _lqc2(auVar45);
    auVar39 = _vaddbc(auVar39,auVar40);
    auVar39 = _qmfc2(auVar39._0_4_);
    if (0.0 < auVar39._0_4_) {
      fVar36 = SQRT(auVar39._0_4_ + 1.0);
      auVar39 = _lqc2(auVar37);
      _lqc2(*pauVar35);
      auVar39 = _vsubbc(auVar39,auVar40);
      auVar39 = _vaddbc(in_vf0,auVar39);
      auVar39 = _sqc2(auVar39);
      *pauVar35 = auVar39;
      auVar39 = _lqc2(auVar41);
      auVar45 = _lqc2(auVar45);
      auVar45 = _vsubbc(auVar45,auVar39);
      auVar45 = _vaddbc(in_vf0,auVar45);
      auVar42 = _qmtc2(0);
      auVar45 = _sqc2(auVar45);
      *pauVar35 = auVar45;
      auVar39 = _qmtc2(0.5 / fVar36);
      auVar37 = _lqc2(auVar37);
      auVar40 = _qmtc2(fVar36 * 0.5);
      auVar45 = _lqc2(auVar41);
      goto LAB_00388824;
    }
    auVar39 = _sqc2(auVar42);
    auVar40 = _lqc2(auVar41);
    auVar40 = _qmfc2(auVar40._0_4_);
    fStack_8c = auVar39._4_4_;
    auVar39 = _lqc2(auVar45);
    if (fStack_8c <= auVar40._0_4_) {
      auVar39 = _sqc2(auVar39);
      auVar40 = _lqc2(auVar41);
      auVar40 = _qmfc2(auVar40._0_4_);
      fStack_88 = auVar39._8_4_;
      uVar28 = (uint)(auVar40._0_4_ < fStack_88) << 1;
    }
    else {
      auVar39 = _sqc2(auVar39);
      fStack_88 = auVar39._8_4_;
      auVar39 = _lqc2(auVar37);
      auVar39 = _sqc2(auVar39);
      fStack_8c = auVar39._4_4_;
      uVar28 = 1;
      if (fStack_8c < fStack_88) {
        uVar28 = 2;
      }
    }
    if (uVar28 == 1) {
      auVar39 = _lqc2(auVar41);
      auVar40 = _lqc2(auVar45);
      auVar40 = _vaddbc(auVar40,auVar39);
      auVar39 = _lqc2(auVar37);
      auVar39 = _vsubbc(auVar39,auVar40);
      auVar40 = _qmtc2(0x3f800000);
      auVar39 = _vaddbc(auVar39,auVar40);
      auVar39 = _sqc2(auVar39);
      fStack_8c = auVar39._4_4_;
      _lqc2(*pauVar35);
      fVar36 = 0.5 / SQRT(fStack_8c);
      auVar39 = _qmtc2(SQRT(fStack_8c) * 0.5);
      auVar39 = _vaddbc(in_vf0,auVar39);
      auVar39 = _sqc2(auVar39);
      *pauVar35 = auVar39;
      auVar43 = _qmtc2(fVar36);
      auVar42 = _qmtc2(fVar36);
      auVar40 = _lqc2(auVar41);
      auVar39 = _lqc2(auVar45);
      auVar39 = _vsubbc(auVar39,auVar40);
      auVar39 = _vmulbc(auVar39,auVar43);
      auVar39 = _vmulbc(in_vf0,auVar39);
      auVar39 = _sqc2(auVar39);
      *pauVar35 = auVar39;
      auVar39 = _lqc2(auVar45);
      auVar45 = _lqc2(auVar37);
      auVar45 = _vaddbc(auVar45,auVar39);
      auVar45 = _vmulbc(auVar45,auVar42);
      auVar45 = _vaddbc(in_vf0,auVar45);
      auVar45 = _sqc2(auVar45);
      *pauVar35 = auVar45;
      auVar45 = _lqc2(auVar37);
      auVar37 = _lqc2(auVar41);
      auVar45 = _vaddbc(auVar45,auVar37);
      auVar45 = _vmulbc(auVar45,auVar43);
      auVar45 = _vaddbc(in_vf0,auVar45);
      auVar45 = _sqc2(auVar45);
      *pauVar35 = auVar45;
      goto LAB_00388b80;
    }
    if (uVar28 < 2) {
      auVar39 = _lqc2(auVar45);
      if (uVar28 == 0) {
        auVar40 = _lqc2(auVar37);
        auVar42 = _vaddbc(auVar40,auVar39);
        auVar39 = _lqc2(auVar41);
        auVar40 = _qmtc2(0x3f800000);
        auVar39 = _vsubbc(auVar39,auVar42);
        auVar39 = _vaddbc(auVar39,auVar40);
        auVar39 = _qmfc2(auVar39._0_4_);
        _lqc2(*pauVar35);
        fVar36 = 0.5 / SQRT(auVar39._0_4_);
        auVar39 = _qmtc2(SQRT(auVar39._0_4_) * 0.5);
        auVar39 = _vaddbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar35 = auVar39;
        auVar43 = _qmtc2(fVar36);
        auVar42 = _qmtc2(fVar36);
        auVar40 = _lqc2(auVar45);
        auVar39 = _lqc2(auVar37);
        auVar39 = _vsubbc(auVar39,auVar40);
        auVar39 = _vmulbc(auVar39,auVar43);
        auVar39 = _vmulbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar35 = auVar39;
        auVar39 = _lqc2(auVar37);
        auVar37 = _lqc2(auVar41);
        auVar37 = _vaddbc(auVar37,auVar39);
        auVar37 = _vmulbc(auVar37,auVar42);
        auVar37 = _vaddbc(in_vf0,auVar37);
        auVar37 = _sqc2(auVar37);
        *pauVar35 = auVar37;
        auVar37 = _lqc2(auVar41);
        auVar45 = _lqc2(auVar45);
        auVar45 = _vaddbc(auVar37,auVar45);
        auVar45 = _vmulbc(auVar45,auVar43);
        auVar45 = _vaddbc(in_vf0,auVar45);
        auVar45 = _sqc2(auVar45);
        *pauVar35 = auVar45;
        goto LAB_00388b80;
      }
      pauVar25 = *(undefined1 (**) [16])(pauVar35[5] + 0xc);
    }
    else {
      auVar39 = _lqc2(auVar37);
      if (uVar28 == 2) {
        auVar40 = _lqc2(auVar41);
        auVar40 = _vaddbc(auVar40,auVar39);
        auVar39 = _lqc2(auVar45);
        auVar39 = _vsubbc(auVar39,auVar40);
        auVar40 = _qmtc2(0x3f800000);
        auVar39 = _vaddbc(auVar39,auVar40);
        auVar39 = _sqc2(auVar39);
        fStack_88 = auVar39._8_4_;
        _lqc2(*pauVar35);
        fVar36 = 0.5 / SQRT(fStack_88);
        auVar39 = _qmtc2(SQRT(fStack_88) * 0.5);
        auVar39 = _vaddbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar35 = auVar39;
        auVar42 = _qmtc2(fVar36);
        auVar43 = _qmtc2(fVar36);
        auVar40 = _lqc2(auVar37);
        auVar39 = _lqc2(auVar41);
        auVar39 = _vsubbc(auVar39,auVar40);
        auVar39 = _vmulbc(auVar39,auVar42);
        auVar39 = _vmulbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar35 = auVar39;
        auVar40 = _lqc2(auVar41);
        auVar39 = _lqc2(auVar45);
        auVar39 = _vaddbc(auVar39,auVar40);
        auVar39 = _vmulbc(auVar39,auVar43);
        auVar39 = _vaddbc(in_vf0,auVar39);
        auVar39 = _sqc2(auVar39);
        *pauVar35 = auVar39;
        auVar45 = _lqc2(auVar45);
        auVar37 = _lqc2(auVar37);
LAB_00388b70:
        auVar45 = _vaddbc(auVar45,auVar37);
        auVar45 = _vmulbc(auVar45,auVar42);
        auVar45 = _vaddbc(in_vf0,auVar45);
        auVar45 = _sqc2(auVar45);
        *pauVar35 = auVar45;
        goto LAB_00388b80;
      }
      pauVar25 = *(undefined1 (**) [16])(pauVar35[5] + 0xc);
    }
  }
LAB_00388b84:
  if (pauVar25 != (undefined1 (*) [16])0x0) {
    auVar39 = _lqc2(*pauVar25);
    _lqc2(pauVar35[7]);
    _lqc2(pauVar35[8]);
    auVar47 = _lqc2(pauVar35[4]);
    auVar46 = _lqc2(pauVar35[5]);
    auVar43 = _lqc2(pauVar35[6]);
    auVar45 = _vmulbc(auVar47,auVar39);
    auVar37 = _vmulbc(auVar46,auVar39);
    auVar39 = _vmulbc(auVar43,auVar39);
    auVar40 = _vaddbc(in_vf0,auVar47);
    auVar42 = _vaddbc(in_vf0,auVar46);
    auVar41 = _vaddbc(in_vf0,auVar43);
    _vmulabc(auVar45,auVar47);
    _vmaddabc(auVar37,auVar46);
    auVar44 = _vmaddbc(auVar39,auVar43);
    _vmulabc(auVar45,auVar47);
    _vmaddabc(auVar37,auVar46);
    _vmaddbc(auVar39,auVar43);
    _vmulabc(auVar40,auVar45);
    _vmaddabc(auVar42,auVar37);
    auVar37 = _vmaddbc(auVar41,auVar39);
    auVar45 = _sqc2(auVar44);
    pauVar35[7] = auVar45;
    auVar45 = _sqc2(auVar37);
    pauVar35[8] = auVar45;
    *(undefined4 *)(pauVar35[7] + 0xc) = *(undefined4 *)pauVar25[1];
  }
LAB_00388bf4:
  *(undefined4 *)(iVar3 + 0x10) = uStack_190;
  *(undefined4 *)(iVar3 + 0x14) = uStack_18c;
  *(undefined4 *)(iVar3 + 0x18) = uStack_188;
  *(undefined4 *)(iVar3 + 0x1c) = uStack_184;
  *(undefined4 *)(iVar3 + 0x20) = uVar31;
  *(undefined4 *)(iVar3 + 0x24) = uVar32;
  *(undefined4 *)(iVar3 + 0x28) = uVar33;
  *(undefined4 *)(iVar3 + 0x2c) = uVar34;
  *(int *)(iVar3 + 0x30) = (int)uVar5;
  *(int *)(iVar3 + 0x34) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(iVar3 + 0x38) = uVar26;
  *(undefined4 *)(iVar3 + 0x3c) = uVar27;
  *(int *)(iVar3 + 0x40) = (int)uVar6;
  *(int *)(iVar3 + 0x44) = (int)((ulong)uVar6 >> 0x20);
  *(undefined4 *)(iVar3 + 0x48) = uVar29;
  *(undefined4 *)(iVar3 + 0x4c) = uVar30;
  return;
}


// ==== FUN_00388c30 @ 00388c30 ====

undefined8 FUN_00388c30(undefined8 param_1)

{
  return param_1;
}


// ==== FUN_00388c38 @ 00388c38 ====
// GLOBAL DAT_003db5e8 undefined
// GLOBAL DAT_003e0dd0 undefined
// GLOBAL DAT_003e0e08 undefined
// GLOBAL DAT_003e0e40 undefined
// GLOBAL DAT_003e0e80 undefined
// GLOBAL DAT_003e0eb8 undefined
// GLOBAL DAT_003e0ef0 undefined
// GLOBAL DAT_003e0f28 undefined
// GLOBAL DAT_003e0f60 undefined
// GLOBAL DAT_003e0f98 undefined
// GLOBAL DAT_003e0fd0 undefined
// GLOBAL DAT_003e1008 undefined
// GLOBAL DAT_003e1040 undefined
// GLOBAL DAT_003e10b0 undefined
// GLOBAL DAT_003e10e8 undefined

undefined8 FUN_00388c38(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x3c) = &DAT_003e0e08;
  *(undefined **)(iVar1 + 0x40) = &DAT_003e0dd0;
  *(undefined **)(iVar1 + 8) = &DAT_003db5e8;
  *(undefined **)(iVar1 + 0xc) = &DAT_003e10e8;
  *(undefined **)(iVar1 + 0x10) = &DAT_003e10b0;
  *(undefined **)(iVar1 + 0x14) = &DAT_003e1040;
  *(undefined **)(iVar1 + 0x18) = &DAT_003e1008;
  *(undefined **)(iVar1 + 0x1c) = &DAT_003e0fd0;
  *(undefined **)(iVar1 + 0x20) = &DAT_003e0f98;
  *(undefined **)(iVar1 + 0x24) = &DAT_003e0f60;
  *(undefined **)(iVar1 + 0x28) = &DAT_003e0f28;
  *(undefined **)(iVar1 + 0x2c) = &DAT_003e0ef0;
  *(undefined **)(iVar1 + 0x30) = &DAT_003e0eb8;
  *(undefined **)(iVar1 + 0x34) = &DAT_003e0e80;
  *(undefined **)(iVar1 + 0x38) = &DAT_003e0e40;
  return param_1;
}


