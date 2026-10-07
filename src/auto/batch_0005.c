// ==== FUN_00141440 @ 00141440 ====

void FUN_00141440(int param_1)

{
  FUN_001735e0(param_1 + 0x4e0);
  return;
}


// ==== FUN_00141460 @ 00141460 ====

undefined4 FUN_00141460(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  *(undefined1 *)(iVar1 + 0x3ab) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 0xb4) + 0x3c) = uGpffff81c0;
  *(undefined1 *)(param_1 + 0x4e4) = 1;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  return 1;
}


// ==== FUN_00141490 @ 00141490 ====

undefined1 FUN_00141490(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4e5);
}


// ==== FUN_00141498 @ 00141498 ====

undefined1 FUN_00141498(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4e4);
}


// ==== FUN_001414a0 @ 001414a0 ====

void FUN_001414a0(int param_1)

{
  bool bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(char *)(param_1 + 0x4e4) != '\0') {
    if (*(float *)(*(int *)(param_1 + 0x7c) + 0x2e0) < 1.0) {
      *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
    }
    auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 400));
    auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x7c) + 0xa0));
    auVar4 = _vsub(auVar3,auVar4);
    auVar3 = _qmfc2(auVar4._0_4_);
    bVar1 = false;
    if ((auVar3._0_4_ & 0x7f800000) < 0x37800001) {
      auVar3 = _sqc2(auVar4);
      uStack_c = auVar3._4_4_;
      bVar1 = false;
      if ((uStack_c & 0x7f800000) < 0x37800001) {
        auVar3 = _sqc2(auVar4);
        uStack_8 = auVar3._8_4_;
        bVar1 = (uStack_8 & 0x7f800000) < 0x37800001;
      }
    }
    if (bVar1) {
      fVar2 = *(float *)(param_1 + 0x4ec) + *(float *)(DAT_0040f4d0 + 0x1c);
      *(float *)(param_1 + 0x4ec) = fVar2;
      if (0.1 < fVar2) {
        *(undefined1 *)(param_1 + 0x4e5) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4ec) = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x7c) + 0x3a8) != '\0') {
      *(undefined1 *)(param_1 + 0x4e5) = 1;
    }
  }
  return;
}


// ==== FUN_001415a8 @ 001415a8 ====

undefined4 FUN_001415a8(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  switch(param_2) {
  case 0x24:
    FUN_00142ab8(param_1,2,1,0,0,0,0x544614b7182c0000);
    FUN_00142ab8(param_1,2,1,0,0,0,0x5446135779860000);
    FUN_00142ab8(param_1,1,1,0,0,0,0x5446143910fd0000);
    FUN_00142ab8(param_1,2,2,0,0,0,0x5446151ebc278000);
    FUN_00142ab8(param_1,2,2,0,0,0,0x544614fcffae0000);
    FUN_00142ab8(param_1,3,3,0,0,0,0x5446152380db8000);
    FUN_00142ab8(param_1,3,3,0,0,0,0x544614411ffa0000);
    FUN_00142ab8(param_1,3,3,0,0,0,0x5446152331830000);
    FUN_00142ab8(param_1,4,3,0,0,0,0x544614a4487f8000);
    FUN_00142ab8(param_1,4,4,0,0,0,0x5446127ad7970000);
    FUN_00142ab8(param_1,4,4,0,0,0,0x5446127297c60000);
    FUN_00142ab8(param_1,4,4,0,0,0,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,3,3,0,0,0,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,0,0,0,0x54461524b8230000);
    uVar1 = 4;
    uVar2 = 4;
    break;
  case 0x25:
    FUN_00142ab8(param_1,3,2,1,1,0,0x544614b7182c0000);
    FUN_00142ab8(param_1,3,2,1,1,0,0x5446135779860000);
    FUN_00142ab8(param_1,1,1,1,1,0,0x5446143910fd0000);
    FUN_00142ab8(param_1,3,3,1,1,0,0x5446151ebc278000);
    FUN_00142ab8(param_1,3,3,1,1,0,0x544614fcffae0000);
    FUN_00142ab8(param_1,5,5,1,1,0,0x5446152380db8000);
    FUN_00142ab8(param_1,5,5,1,1,0,0x544614411ffa0000);
    FUN_00142ab8(param_1,5,5,1,1,0,0x5446152331830000);
    FUN_00142ab8(param_1,7,7,1,1,0,0x544614a4487f8000);
    FUN_00142ab8(param_1,9,9,1,1,0,0x5446127ad7970000);
    FUN_00142ab8(param_1,9,9,1,1,0,0x5446127297c60000);
    FUN_00142ab8(param_1,9,9,1,1,0,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,6,6,1,1,0,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,1,1,0,0x54461524b8230000);
    uVar1 = 9;
    uVar2 = 9;
    uVar3 = 1;
    uVar4 = 1;
    goto LAB_0014276c;
  case 0x26:
    FUN_00142ab8(param_1,8,8,1,0,1,0x544614b7182c0000);
    FUN_00142ab8(param_1,7,7,1,0,1,0x5446135779860000);
    FUN_00142ab8(param_1,2,2,1,0,0,0x5446143910fd0000);
    FUN_00142ab8(param_1,0xb,0xb,1,0,2,0x5446151ebc278000);
    FUN_00142ab8(param_1,0xd,0xd,1,0,2,0x544614fcffae0000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x5446152380db8000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x544614411ffa0000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x5446152331830000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x544614a4487f8000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x5446127ad7970000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x5446127297c60000);
    FUN_00142ab8(param_1,0x1e,0x1e,1,0,2,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,0x10,0x10,1,0,2,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,1,0,0,0x54461524b8230000);
    uVar1 = 0x1e;
    uVar2 = 0x1e;
    uVar3 = 1;
    goto LAB_00142768;
  case 0x27:
    FUN_00142ab8(param_1,2,2,0,0,0,0x544614b7182c0000);
    FUN_00142ab8(param_1,2,2,0,0,0,0x5446135779860000);
    FUN_00142ab8(param_1,1,1,0,0,0,0x5446143910fd0000);
    FUN_00142ab8(param_1,3,3,0,0,0,0x5446151ebc278000);
    FUN_00142ab8(param_1,3,3,0,0,0,0x544614fcffae0000);
    FUN_00142ab8(param_1,5,5,0,0,0,0x5446152380db8000);
    FUN_00142ab8(param_1,7,7,0,0,0,0x544614411ffa0000);
    FUN_00142ab8(param_1,5,5,0,0,0,0x5446152331830000);
    FUN_00142ab8(param_1,5,5,0,0,0,0x544614a4487f8000);
    FUN_00142ab8(param_1,9,9,0,0,0,0x5446127ad7970000);
    FUN_00142ab8(param_1,9,9,0,0,0,0x5446127297c60000);
    FUN_00142ab8(param_1,9,9,0,0,0,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,6,6,0,0,0,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,0,0,0,0x54461524b8230000);
    uVar1 = 9;
    uVar2 = 9;
    break;
  case 0x28:
    FUN_00142ab8(param_1,0x10,1,1,1,2,0x544614b7182c0000);
    FUN_00142ab8(param_1,0xe,1,1,1,2,0x5446135779860000);
    FUN_00142ab8(param_1,3,1,1,1,2,0x5446143910fd0000);
    FUN_00142ab8(param_1,0x16,1,1,1,4,0x5446151ebc278000);
    FUN_00142ab8(param_1,0x1a,1,1,1,4,0x544614fcffae0000);
    FUN_00142ab8(param_1,0x3c,1,1,1,4,0x5446152380db8000);
    FUN_00142ab8(param_1,0x3c,1,1,1,4,0x544614411ffa0000);
    FUN_00142ab8(param_1,0x3c,1,1,1,4,0x5446152331830000);
    FUN_00142ab8(param_1,0x3c,2,1,1,6,0x544614a4487f8000);
    FUN_00142ab8(param_1,0x3c,2,1,1,6,0x5446127ad7970000);
    FUN_00142ab8(param_1,0x3c,2,1,1,6,0x5446127297c60000);
    FUN_00142ab8(param_1,0x3c,1,1,1,5,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,0x20,1,1,1,4,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,1,1,0,0x54461524b8230000);
    uVar1 = 0x3c;
    uVar2 = 2;
    uVar3 = 1;
    uVar4 = 1;
    uVar5 = 4;
    goto LAB_00142770;
  case 0x29:
    FUN_00142ab8(param_1,3,2,0,0,0,0x544614b7182c0000);
    FUN_00142ab8(param_1,2,2,0,0,0,0x5446135779860000);
    FUN_00142ab8(param_1,1,1,0,0,0,0x5446143910fd0000);
    FUN_00142ab8(param_1,5,5,0,0,0,0x5446151ebc278000);
    FUN_00142ab8(param_1,7,7,0,0,0,0x544614fcffae0000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x5446152380db8000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x544614411ffa0000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x5446152331830000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x544614a4487f8000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x5446127ad7970000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x5446127297c60000);
    FUN_00142ab8(param_1,0xe,0xe,0,0,0,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,10,10,0,0,0,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,0,0,0,0x54461524b8230000);
    uVar1 = 0xe;
    uVar2 = 0xe;
    break;
  case 0x2a:
    FUN_00142ab8(param_1,5,5,1,1,2,0x544614b7182c0000);
    FUN_00142ab8(param_1,5,5,1,1,2,0x5446135779860000);
    FUN_00142ab8(param_1,2,2,1,1,0,0x5446143910fd0000);
    FUN_00142ab8(param_1,10,10,1,1,6,0x5446151ebc278000);
    FUN_00142ab8(param_1,0xd,0xd,1,1,6,0x544614fcffae0000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x5446152380db8000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x544614411ffa0000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x5446152331830000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x544614a4487f8000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x5446127ad7970000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x5446127297c60000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,6,0x5446142a5b1e8000);
    FUN_00142ab8(param_1,0xf,0xf,1,1,6,0x54461388e61c8000);
    FUN_00142ab8(param_1,1,1,1,1,0,0x54461524b8230000);
    FUN_00142ab8(param_1,0x14,0x14,1,1,0,0x5446129c3e9d8000);
  default:
    goto switchD_001415d8_default;
  }
  uVar3 = 0;
LAB_00142768:
  uVar4 = 0;
LAB_0014276c:
  uVar5 = 0;
LAB_00142770:
  FUN_00142ab8(param_1,uVar1,uVar2,uVar3,uVar4,uVar5,0x5446129c3e9d8000);
switchD_001415d8_default:
  return 1;
}


// ==== FUN_00142ab8 @ 00142ab8 ====

void FUN_00142ab8(int *param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
  iVar3 = 0;
  if (uVar4 != 0) {
    plVar1 = *(long **)(*DAT_0040f4e0 + 4);
    iVar5 = 0x1000000;
    do {
      cVar2 = (char)iVar3;
      if (*plVar1 == param_7) goto LAB_00142b3c;
      plVar1 = plVar1 + 4;
      iVar3 = iVar5 >> 0x18;
      iVar5 = iVar5 + 0x1000000;
    } while (iVar3 < (int)uVar4);
  }
  cVar2 = -1;
LAB_00142b3c:
  iVar3 = cVar2 * 0xc;
  *(float *)(iVar3 + *param_1 + 4) = 1.02 / (float)param_3;
  *(float *)(iVar3 + *param_1) = 1.02 / (float)param_2;
  *(undefined1 *)(iVar3 + *param_1 + 9) = param_5;
  *(undefined1 *)(iVar3 + *param_1 + 8) = param_4;
  *(undefined1 *)(iVar3 + *param_1 + 10) = param_6;
  return;
}


// ==== FUN_00142b90 @ 00142b90 ====

float FUN_00142b90(int *param_1,char param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 (*param_5) [16],long param_6,byte *param_7,byte *param_8,char param_9,
                  int param_10,char param_11)

{
  char cVar1;
  float *pfVar2;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_108;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  auVar9 = _lqc2(*param_5);
  auVar4 = _qmtc2(param_4);
  _vmove(auVar9);
  auVar8 = _lqc2(param_5[2]);
  auVar10 = _lqc2(param_5[1]);
  auVar11 = _vaddbc(in_vf0,auVar10);
  auVar6 = _lqc2(param_5[3]);
  _vmove(auVar8);
  _vmove(auVar10);
  auVar16 = _vaddbc(in_vf0,auVar9);
  auVar12 = _vaddbc(in_vf0,auVar9);
  _vmove(auVar11);
  _vmove(auVar12);
  auVar13 = _vaddbc(in_vf0,auVar8);
  _vmove(auVar16);
  auVar14 = _vaddbc(in_vf0,auVar8);
  auVar15 = _vaddbc(in_vf0,auVar10);
  auVar5 = _vmulbc(auVar14,auVar6);
  _vmulabc(auVar13,auVar4);
  _vmaddabc(auVar14,auVar4);
  auVar4 = _vmaddbc(auVar15,auVar4);
  auVar7 = _vmulbc(auVar15,auVar6);
  auStack_80 = _sqc2(auVar4);
  pfVar2 = (float *)(*param_1 + param_2 * 0xc);
  auVar4 = _vmulbc(auVar13,auVar6);
  _sqc2(auVar9);
  auVar4 = _vadd(auVar4,auVar5);
  _sqc2(auVar10);
  _sqc2(auVar8);
  auVar4 = _vadd(auVar4,auVar7);
  _sqc2(auVar6);
  auVar4 = _vsub(in_vf0,auVar4);
  _sqc2(auVar11);
  _sqc2(auVar12);
  _sqc2(auVar16);
  _sqc2(auVar4);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar15);
  fStack_108 = auStack_80._8_4_;
  if (fStack_108 < 0.0) {
    fVar3 = *pfVar2;
  }
  else {
    fVar3 = pfVar2[1];
  }
  fVar3 = fVar3 * 100.0;
  if (param_6 == 0) {
    if (param_11 != '\0') {
      if (*(char *)(pfVar2 + 2) == '\0') {
        if (*(char *)((int)pfVar2 + 9) != '\0') goto LAB_00142ce8;
        *param_7 = 1;
      }
      else if (*(char *)((int)pfVar2 + 9) == '\0') {
LAB_00142ce8:
        FUN_001a7528(auStack_c0,*(undefined4 *)(param_10 + 0x330),0);
        auVar11 = _lqc2(auStack_a0);
        auVar9 = _lqc2(auStack_c0);
        auVar10 = _lqc2(auStack_b0);
        _vmove(auVar11);
        _vmove(auVar9);
        auVar17 = _vaddbc(in_vf0,auVar9);
        _vmove(auVar10);
        auVar12 = _vaddbc(in_vf0,auVar10);
        auVar13 = _vaddbc(in_vf0,auVar9);
        _vmove(auVar17);
        _vmove(auVar12);
        auVar16 = _vaddbc(in_vf0,auVar10);
        _vmove(auVar13);
        auVar14 = _vaddbc(in_vf0,auVar11);
        auVar15 = _vaddbc(in_vf0,auVar11);
        auVar4 = _lqc2(auStack_80);
        _vmulabc(auVar14,auVar4);
        _vmaddabc(auVar15,auVar4);
        auVar4 = _vmaddbc(auVar16,auVar4);
        auVar8 = _lqc2(auStack_90);
        auVar4 = _sqc2(auVar4);
        auVar6 = _vmulbc(auVar14,auVar8);
        auVar7 = _vmulbc(auVar15,auVar8);
        auVar5 = _vmulbc(auVar16,auVar8);
        auVar6 = _vadd(auVar6,auVar7);
        fStack_108 = auVar4._8_4_;
        auVar4 = _vadd(auVar6,auVar5);
        _sqc2(auVar9);
        auVar4 = _vsub(in_vf0,auVar4);
        _sqc2(auVar10);
        _sqc2(auVar11);
        _sqc2(auVar8);
        _sqc2(auVar12);
        _sqc2(auVar13);
        _sqc2(auVar17);
        _sqc2(auVar4);
        *param_7 = 1;
        _sqc2(auVar14);
        _sqc2(auVar15);
        _sqc2(auVar16);
        if (0.0 < fStack_108) {
          cVar1 = *(char *)(pfVar2 + 2);
        }
        else {
          cVar1 = *(char *)((int)pfVar2 + 9);
        }
        if (cVar1 != '\0') {
          *param_7 = 0;
        }
      }
      else {
        *param_7 = 0;
      }
      *param_8 = *param_7 ^ 1;
      goto LAB_00142dd4;
    }
    *param_7 = 0;
  }
  else {
    *param_7 = 0;
  }
  *param_8 = 0;
LAB_00142dd4:
  if (((param_9 != '\0') && (*param_7 != 1)) && (*param_8 != 1)) {
    fVar3 = fVar3 * 0.7;
  }
  return fVar3;
}


// ==== FUN_00142e30 @ 00142e30 ====

void FUN_00142e30(undefined4 *param_1,char param_2)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 1) = param_2;
  uVar1 = FUN_00107d20(param_2 * 0xc);
  *param_1 = (int)uVar1;
  memset(uVar1,0,*(char *)(param_1 + 1) * 0xc);
  return;
}


// ==== FUN_00142e90 @ 00142e90 ====

void FUN_00142e90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  puVar2 = param_1 + 5;
  param_1[1] = 0;
  iVar1 = 2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  return;
}


// ==== FUN_00142ed8 @ 00142ed8 ====

undefined4 FUN_00142ed8(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 2;
  iVar3 = (int)param_1;
  puVar1 = (undefined4 *)(iVar3 + 0x14);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  FUN_00143550(param_1);
  *(undefined4 *)(iVar3 + 8) = param_2;
  *(undefined1 *)(iVar3 + 0x1a) = 1;
  *(undefined1 *)(iVar3 + 0x18) = param_3;
  *(undefined1 *)(iVar3 + 0x19) = 0;
  return 1;
}


// ==== FUN_00142f50 @ 00142f50 ====

undefined4 FUN_00142f50(int param_1)

{
  FUN_00143550();
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}


// ==== FUN_00142f80 @ 00142f80 ====

void FUN_00142f80(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  
  iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x19) * 4 + 0xc);
  if (iVar1 != 0) {
    uVar11 = 0;
    iVar8 = 0;
    iVar10 = *(int *)(param_1 + 8) + 0x40;
    if (*(byte *)(iVar1 + 0x68) != 0) {
      do {
        iVar7 = iVar8 * 0xd0;
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + *(int *)(iVar1 + 0x48);
        iVar4 = param_2;
        if ((0 < param_2) && (iVar5 = iVar7 + 0x68, *(long *)(iVar5 + param_2 * 8) == 0)) {
          plVar3 = (long *)(param_2 * 8 + iVar5);
          do {
            iVar4 = iVar4 + -1;
            plVar3 = plVar3 + -1;
            if (iVar4 < 1) break;
          } while (*plVar3 == 0);
        }
        uVar11 = uVar11 | *(ulong *)(iVar7 + iVar4 * 8 + 0x68);
      } while (iVar8 < (int)(uint)*(byte *)(iVar1 + 0x68));
    }
    uVar9 = 0;
    if (0 < *(int *)(iVar1 + 0x24)) {
      iVar7 = 0;
      iVar8 = 0;
      do {
        if (((long)(1 << (uVar9 & 0x1f)) & uVar11) == 0) {
          iVar4 = *(int *)(iVar1 + 0x24);
        }
        else {
          psVar2 = (short *)(*(int *)(iVar1 + 0x20) + iVar7);
          iVar5 = *(int *)(iVar1 + 0x1c) + iVar8;
          pbVar6 = (byte *)(*(int *)(iVar1 + 0x38) + (int)*psVar2);
          iVar4 = *(int *)(iVar1 + 0x40) + (int)psVar2[1];
          if (*pbVar6 - 2 < 3) {
            FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar5,pbVar6,iVar4,param_3,iVar10,0,1);
            iVar4 = *(int *)(iVar1 + 0x24);
          }
          else {
            FUN_001af738(0,DAT_0040f4c0 + 0x14,iVar5,pbVar6,iVar4,0,iVar10,0,1);
            iVar4 = *(int *)(iVar1 + 0x24);
          }
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 6;
        iVar8 = iVar8 + 0x30;
      } while ((int)uVar9 < iVar4);
    }
  }
  return;
}


// ==== FUN_00143158 @ 00143158 ====

undefined8
FUN_00143158(float param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 auStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_90 = (undefined4)param_4;
  uStack_8c = (undefined4)((ulong)param_4 >> 0x20);
  uStack_d0 = (undefined4)param_5;
  uStack_cc = (undefined4)((ulong)param_5 >> 0x20);
  uStack_b0 = (undefined4)param_6;
  uStack_ac = (undefined4)((ulong)param_6 >> 0x20);
  iVar1 = param_3[*(byte *)((int)param_3 + 0x19) + 3];
  if ((iVar1 != 0) && (param_3[2] != 0)) {
    uStack_c8 = in_a2_udw;
    uStack_c4 = in_register_0000006c;
    uStack_a8 = in_a3_udw;
    uStack_a4 = in_register_0000007c;
    uStack_88 = in_a1_udw;
    uStack_84 = in_register_0000005c;
    lVar4 = FUN_00139480(DAT_0040f514,*param_3);
    param_3[1] = (int)lVar4;
    if (lVar4 != 0) {
      iVar2 = param_3[2];
      auVar5._4_4_ = uStack_ac;
      auVar5._0_4_ = uStack_b0;
      auVar5._8_4_ = uStack_a8;
      auVar5._12_4_ = uStack_a4;
      auVar8 = _lqc2(auVar5);
      auVar7 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
      auStack_120 = _sqc2(auVar7);
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x50));
      auStack_110 = _sqc2(auVar6);
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x60));
      _vmulabc(auVar7,auVar8);
      _vmaddabc(auVar6,auVar8);
      auVar8 = _vmaddbc(auVar5,auVar8);
      auStack_a0 = _sqc2(auVar8);
      auVar8._4_4_ = uStack_cc;
      auVar8._0_4_ = uStack_d0;
      auVar8._8_4_ = uStack_c8;
      auVar8._12_4_ = uStack_c4;
      auVar8 = _lqc2(auVar8);
      _vmulabc(auVar7,auVar8);
      _vmaddabc(auVar6,auVar8);
      auVar8 = _vmaddbc(auVar5,auVar8);
      auStack_100 = _sqc2(auVar5);
      auStack_c0 = _sqc2(auVar8);
      auStack_f0 = *(undefined1 (*) [16])(iVar2 + 0x70);
      uStack_60 = *(undefined4 *)(iVar2 + 0x90);
      uStack_5c = *(undefined4 *)(iVar2 + 0x94);
      uStack_58 = *(undefined4 *)(iVar2 + 0x98);
      uStack_54 = *(undefined4 *)(iVar2 + 0x9c);
      auStack_80 = *(undefined1 (*) [16])(iVar2 + 0x80);
      lVar4 = FUN_0025cda0(DAT_0040f4cc,auStack_e0,2);
      auVar8 = _lqc2(auStack_80);
      if (lVar4 == 0) {
        param_3[*(byte *)((int)param_3 + 0x19) + 3] = 0;
        param_3[1] = 0;
        return 0;
      }
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _lqc2(auStack_c0);
      auVar8 = _vadd(auVar8,auVar5);
      auStack_80 = _sqc2(auVar8);
      auVar7 = _lqc2(auStack_f0);
      auVar10 = _vmove(auVar6);
      auVar9 = _lqc2(auStack_80);
      auVar8 = _vmul(auVar9,auVar9);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar6,auVar8);
      auVar8 = _qmfc2(auVar8._0_4_);
      auVar6._4_4_ = uStack_8c;
      auVar6._0_4_ = uStack_90;
      auVar6._8_4_ = uStack_88;
      auVar6._12_4_ = uStack_84;
      auVar5 = _lqc2(auVar6);
      auVar5 = _vadd(auVar7,auVar5);
      auStack_f0 = _sqc2(auVar5);
      auVar7._4_4_ = uStack_5c;
      auVar7._0_4_ = uStack_60;
      auVar7._8_4_ = uStack_58;
      auVar7._12_4_ = uStack_54;
      auVar5 = _lqc2(auVar7);
      if (2.3283064e-10 <= auVar8._0_4_) {
        auVar8 = _vmul(auVar9,auVar9);
        _vaddabc(auVar8,auVar8);
        auVar8 = _vmaddbc(auVar10,auVar8);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar8);
        auVar8 = _qmfc2(auVar8._0_4_);
        auVar8 = _qmtc2(SQRT(auVar8._0_4_));
        uVar11 = _vwaitq();
        auVar5 = _vmulq(auVar9,uVar11);
        auVar8 = _qmfc2(auVar8._0_4_);
        fVar3 = auVar8._0_4_;
        auVar8 = _qmtc2((int)fVar3 * (uint)(fVar3 < param_1) |
                        (int)param_1 * (uint)(fVar3 >= param_1));
        auVar8 = _vmulbc(auVar5,auVar8);
        auStack_80 = _sqc2(auVar8);
        auVar9._4_4_ = uStack_5c;
        auVar9._0_4_ = uStack_60;
        auVar9._8_4_ = uStack_58;
        auVar9._12_4_ = uStack_54;
        auVar5 = _lqc2(auVar9);
      }
      auVar8 = _qmtc2(param_2);
      auVar8 = _vmulbc(auVar5,auVar8);
      auStack_70 = _sqc2(auVar8);
      FUN_0014ef58(param_3[1],5,0,iVar1,auStack_120,0,6,0);
      auVar5 = _lqc2(auStack_70);
      auVar8 = _lqc2(auStack_a0);
      auVar8 = _vadd(auVar5,auVar8);
      auStack_70 = _sqc2(auVar8);
      FUN_00129108(DAT_0040f4d0,param_3[1],1,1,auStack_e0[0]);
      iVar1 = *(int *)(param_3[1] + 0xb4);
      FUN_0025d910(iVar1,auStack_70._0_8_);
      FUN_0025d860(iVar1,auStack_80._0_8_);
      *(undefined4 *)(*(int *)(iVar1 + 0x34) + 0x18) = 0xd;
      param_3[*(byte *)((int)param_3 + 0x19) + 3] = 0;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001433e0 @ 001433e0 ====

undefined4 FUN_001433e0(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
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
  undefined1 auVar19 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  auVar19 = _qmtc2(param_2);
  auVar18 = _qmtc2(param_3);
  iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x19) * 4 + 0xc);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x18) != '\0')) {
    iVar2 = *(int *)(param_1 + 8);
    _sqc2(auVar19);
    _sqc2(auVar18);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
    auStack_a0 = _sqc2(auVar11);
    _vmove(auVar11);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x50));
    auVar16 = _vaddbc(in_vf0,auVar10);
    _vmove(auVar16);
    auStack_90 = _sqc2(auVar10);
    _vmove(auVar10);
    auVar12 = _vaddbc(in_vf0,auVar11);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x60));
    _vmove(auVar12);
    auVar15 = _vaddbc(in_vf0,auVar8);
    auVar13 = _vaddbc(in_vf0,auVar8);
    auStack_80 = _sqc2(auVar8);
    _vmove(auVar8);
    auVar17 = _vaddbc(in_vf0,auVar11);
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
    _vmove(auVar17);
    auVar5 = _vmulbc(auVar13,auVar9);
    auVar14 = _vaddbc(in_vf0,auVar10);
    auVar7 = _vmulbc(auVar15,auVar9);
    auVar6 = _vmulbc(auVar14,auVar9);
    auVar5 = _vadd(auVar7,auVar5);
    auVar5 = _vadd(auVar5,auVar6);
    _sqc2(auVar10);
    auVar6 = _vsub(in_vf0,auVar5);
    _sqc2(auVar8);
    _sqc2(auVar11);
    _vmulabc(auVar15,auVar18);
    _vmaddabc(auVar13,auVar18);
    _vmaddabc(auVar14,auVar18);
    auVar5 = _vmaddbc(auVar6,in_vf0);
    _vmulabc(auVar15,auVar19);
    _vmaddabc(auVar13,auVar19);
    _vmaddabc(auVar14,auVar19);
    auVar18 = _vmaddbc(auVar6,in_vf0);
    _sqc2(auVar9);
    _sqc2(auVar16);
    _sqc2(auVar12);
    _sqc2(auVar17);
    auStack_c0 = _sqc2(auVar18);
    auStack_b0 = _sqc2(auVar5);
    auStack_70 = _sqc2(auVar9);
    auStack_30 = _sqc2(auVar6);
    auStack_60 = _sqc2(auVar15);
    auStack_50 = _sqc2(auVar13);
    auStack_40 = _sqc2(auVar14);
    lVar3 = FUN_0027e9b0(auStack_c0,*(int *)(iVar1 + 0x48) + 0x90,param_4);
    auVar8 = _lqc2(auStack_a0);
    auVar7 = _lqc2(auStack_90);
    auVar5 = _lqc2(auStack_80);
    auVar19 = _lqc2(auStack_70);
    pauVar4 = (undefined1 (*) [16])param_4;
    auVar6 = _lqc2(*pauVar4);
    auVar18 = _lqc2(pauVar4[1]);
    _vmulabc(auVar8,auVar6);
    _vmaddabc(auVar7,auVar6);
    _vmaddabc(auVar5,auVar6);
    auVar6 = _vmaddbc(auVar19,in_vf0);
    _vmulabc(auVar8,auVar18);
    _vmaddabc(auVar7,auVar18);
    auVar19 = _vmaddbc(auVar5,auVar18);
    auVar18 = _sqc2(auVar6);
    *pauVar4 = auVar18;
    auVar18 = _sqc2(auVar19);
    pauVar4[1] = auVar18;
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_00143550 @ 00143550 ====

void FUN_00143550(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00129240(DAT_0040f4d0,*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


// ==== FUN_00143590 @ 00143590 ====

void FUN_00143590(int param_1,undefined4 param_2,uint param_3)

{
  undefined8 in_v0_udw;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_v1_udw;
  
  param_3 = param_3 & 0xff;
  if (param_3 == 0xff) {
    param_3 = (uint)*(byte *)(param_1 + 0x19);
  }
  if (param_3 < 3) {
    *(undefined4 *)(param_1 + param_3 * 4 + 0xc) = param_2;
  }
  auVar1._1_7_ = 0;
  auVar1[0] = *(byte *)(param_1 + 0x1a);
  auVar1._8_8_ = in_v0_udw;
  auVar2._8_8_ = in_v1_udw;
  auVar2._0_8_ = (long)(int)(param_3 + 1);
  auVar2 = _pmaxw(auVar1,auVar2);
  auVar2 = _pextlw(0,auVar2._0_8_);
  *(char *)(param_1 + 0x1a) = auVar2[0];
  return;
}


// ==== FUN_001435d0 @ 001435d0 ====

void FUN_001435d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[1] = 0;
  return;
}


// ==== FUN_001435f8 @ 001435f8 ====

undefined4 FUN_001435f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  uVar1 = FUN_001d74c8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return 1;
}


// ==== FUN_00143648 @ 00143648 ====

undefined4 FUN_00143648(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x20);
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


// ==== FUN_00143688 @ 00143688 ====

/* Strings referenciadas:
     "chars/guns/" */

void FUN_00143688(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)param_1;
  FUN_001435d0(puVar1 + 8,0xd);
  FUN_001435d0(puVar1 + 0x40,0xe);
  *(undefined1 **)(puVar1 + 0x80) = puVar1 + 8;
  *(undefined1 **)(puVar1 + 0x7c) = puVar1 + 0x40;
  puVar1[0xc4] = 0;
  FUN_00144038(param_1,PTR_s_chars_guns__003bceac);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 200) = 1;
  return;
}


// ==== FUN_00143700 @ 00143700 ====

undefined4 FUN_00143700(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = FUN_001437d8();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xc4) == '\0') {
      iVar6 = 1;
      iVar5 = param_1 + 8;
      do {
        iVar6 = iVar6 + -1;
        uVar3 = FUN_001d7278(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
        uVar4 = FUN_001d7278(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
        FUN_001435f8(iVar5,uVar3,uVar4);
        iVar5 = iVar5 + 0x38;
      } while (-1 < iVar6);
      *(undefined1 *)(param_1 + 0xc4) = 1;
    }
    uVar1 = 1;
    *(undefined4 *)(param_1 + 200) = 0x1c;
  }
  return uVar1;
}


// ==== FUN_001437d8 @ 001437d8 ====

undefined4 FUN_001437d8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 200);
  if (iVar1 == 0x1c) {
    if ((*(int *)(*(int *)(iVar3 + 0x80) + 0x1c) != 9) &&
       (lVar2 = FUN_00143b00(param_1), lVar2 == 0)) {
      return 0;
    }
    FUN_00144078(param_1);
    *(undefined4 *)(iVar3 + 200) = 0x1d;
  }
  else {
    if (iVar1 < 0x1d) {
      if (iVar1 == 1) {
        return 1;
      }
      return 0;
    }
    if (iVar1 != 0x1d) {
      if (iVar1 == 0x37) {
        return 1;
      }
      return 0;
    }
  }
  if ((*(int *)(*(int *)(iVar3 + 0x80) + 0x1c) != 9) && (lVar2 = FUN_00143b00(param_1), lVar2 == 0))
  {
    return 0;
  }
  FUN_00144078(param_1);
  *(undefined4 *)(iVar3 + 200) = 0x37;
  return 1;
}


// ==== FUN_001438a8 @ 001438a8 ====

bool FUN_001438a8(void)

{
  long lVar1;
  
  lVar1 = FUN_00143908();
  return lVar1 != 0;
}


// ==== FUN_001438c8 @ 001438c8 ====

bool FUN_001438c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00143908(param_1,0);
  return lVar1 != 0;
}


// ==== FUN_001438e8 @ 001438e8 ====

undefined4 FUN_001438e8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x80) + 0x1c) == 9) {
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 0;
  }
  return 1;
}


// ==== FUN_00143908 @ 00143908 ====

bool FUN_00143908(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar4 = param_2;
  if (*(char *)(DAT_0040f4d0 + 0x5ca0) != '\0') {
    lVar4 = FUN_001440b8();
  }
  iVar6 = (int)param_1;
  switch(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c)) {
  case 0:
    break;
  case 1:
    goto switchD_0014396c_caseD_1;
  case 2:
    goto switchD_0014396c_caseD_2;
  case 3:
    goto switchD_0014396c_caseD_3;
  case 4:
    goto switchD_0014396c_caseD_4;
  case 5:
    goto switchD_0014396c_caseD_5;
  case 6:
    goto switchD_0014396c_caseD_6;
  case 7:
    goto switchD_0014396c_caseD_7;
  case 8:
    goto switchD_0014396c_caseD_8;
  case 9:
    return lVar4 == 0;
  default:
    goto switchD_0014396c_default;
  }
  lVar5 = FUN_00143b00(param_1);
  if (lVar5 == 0) {
    return false;
  }
  *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 1;
switchD_0014396c_caseD_1:
  if (lVar4 == 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 9;
    return false;
  }
  *(long *)(*(int *)(iVar6 + 0x80) + 0x20) = param_2;
  *(long *)(*(int *)(iVar6 + 0x80) + 0x28) = lVar4;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  FUN_00143c80(param_1,lVar4);
  *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 2;
switchD_0014396c_caseD_2:
  if (*(int *)(iVar6 + 0x78) != 0) {
    *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 3;
switchD_0014396c_caseD_3:
    iVar2 = *(int *)(iVar6 + 0x80);
    if (lVar4 == *(long *)(iVar2 + 0x28)) {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar6 + 0x78);
      *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 4;
switchD_0014396c_caseD_4:
      lVar5 = FUN_001f05d0(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 8));
      if (lVar5 != 0) {
        *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 5;
switchD_0014396c_caseD_5:
        iVar2 = *(int *)(iVar6 + 0x80);
        puVar1 = *(undefined8 **)(iVar2 + 4);
        lVar5 = FUN_001f03d0(*(undefined4 *)(iVar2 + 8),*puVar1,puVar1[2],
                             *(undefined4 *)(puVar1 + 7),*(undefined4 *)(puVar1 + 8),
                             *(undefined4 *)(iVar2 + 0x10),0);
        if (lVar5 != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 6;
switchD_0014396c_caseD_6:
          lVar5 = FUN_001f05d0(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 0xc));
          if (lVar5 != 0) {
            *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 7;
switchD_0014396c_caseD_7:
            iVar2 = *(int *)(iVar6 + 0x80);
            iVar3 = *(int *)(iVar2 + 4);
            lVar5 = FUN_001f03d0(*(undefined4 *)(iVar2 + 0xc),*(undefined8 *)(iVar3 + 8),
                                 *(undefined8 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x3c),
                                 *(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar2 + 0x10),1);
            if (lVar5 != 0) {
              *(undefined1 *)(*(int *)(iVar6 + 0x80) + 0x31) = 1;
              *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 8;
switchD_0014396c_caseD_8:
              if (lVar4 == *(long *)(*(int *)(iVar6 + 0x80) + 0x28)) {
                return true;
              }
              *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c) = 0;
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
switchD_0014396c_default:
  return false;
}


// ==== FUN_00143b00 @ 00143b00 ====

undefined4 FUN_00143b00(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((*(char *)(DAT_0040f4c4 + 0x8b8) != '\0') ||
     (bVar3 = false, *(char *)(DAT_0040f4c4 + 0x8b9) != '\0')) {
    bVar3 = true;
  }
  if (bVar3) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x80);
  switch(*(undefined4 *)(iVar5 + 0x1c)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 8:
    iVar5 = *(int *)(param_1 + 0x80);
    if (*(char *)(iVar5 + 0x31) != '\0') {
      FUN_001f05d0(*(undefined4 *)(iVar5 + 8));
      FUN_001f05d0(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0xc));
      iVar5 = *(int *)(param_1 + 0x80);
    }
    *(undefined1 *)(iVar5 + 0x31) = 0;
    *(undefined8 *)(*(int *)(param_1 + 0x80) + 0x28) = 0;
    *(undefined8 *)(*(int *)(param_1 + 0x80) + 0x20) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x14) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 1;
    return 1;
  case 1:
  case 9:
    goto switchD_00143b6c_caseD_1;
  case 5:
    puVar1 = *(undefined8 **)(iVar5 + 4);
    lVar4 = FUN_001f03d0(*(undefined4 *)(iVar5 + 8),*puVar1,puVar1[2],*(undefined4 *)(puVar1 + 7),
                         *(undefined4 *)(puVar1 + 8),*(undefined4 *)(iVar5 + 0x10),0);
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 6;
switchD_00143b6c_caseD_6:
    lVar4 = FUN_001f05d0(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0xc));
    if (lVar4 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 7;
switchD_00143b6c_caseD_7:
      iVar5 = *(int *)(param_1 + 0x80);
      iVar2 = *(int *)(iVar5 + 4);
      lVar4 = FUN_001f03d0(*(undefined4 *)(iVar5 + 0xc),*(undefined8 *)(iVar2 + 8),
                           *(undefined8 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x3c),
                           *(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar5 + 0x10),1);
      if (lVar4 != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x31) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c) = 8;
switchD_00143b6c_caseD_1:
        return 1;
      }
    }
switchD_00143b6c_default:
    return 0;
  case 6:
    goto switchD_00143b6c_caseD_6;
  case 7:
    goto switchD_00143b6c_caseD_7;
  default:
    goto switchD_00143b6c_default;
  }
}


// ==== FUN_00143c80 @ 00143c80 ====

void FUN_00143c80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_160 [128];
  char acStack_e0 [128];
  
  FUN_00272488(param_2,acStack_e0);
  iVar5 = 0;
  pcVar4 = acStack_e0;
  if (acStack_e0[0] == ' ') {
    acStack_e0[0] = '\0';
  }
  else {
    do {
      cVar1 = *pcVar4;
      iVar5 = iVar5 + 1;
      cVar2 = cVar1 + ' ';
      if ((*(byte *)((int)&PTR_DAT_0040a991 + (int)cVar1) & 1) == 0) {
        cVar2 = cVar1;
      }
      *pcVar4 = cVar2;
      if (0xb < iVar5) goto LAB_00143d24;
      pcVar3 = acStack_e0 + iVar5;
      pcVar4 = acStack_e0 + iVar5;
    } while (*pcVar3 != ' ');
    *pcVar3 = '\0';
  }
LAB_00143d24:
  strcpy(auStack_160,(int)param_1 + 0x84);
  FUN_0035c7a4(auStack_160,acStack_e0);
  FUN_0035c7a4(auStack_160,0x3f4b68);
  FUN_001093c0(DAT_0040f4c4,auStack_160,6,**(undefined4 **)((int)param_1 + 0x80),0x143fd8,param_1,1,
               0x2000000);
  return;
}


// ==== FUN_00143d90 @ 00143d90 ====

void FUN_00143d90(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  
  iVar8 = (int)param_1;
  if (*(int *)(*(int *)(iVar8 + 0x80) + 0x1c) == 8) {
    FUN_00144078(param_1);
    *(undefined1 *)(*(int *)(iVar8 + 0x7c) + 0x30) = 1;
    *(undefined1 *)(*(int *)(iVar8 + 0x80) + 0x30) = 0;
    iVar2 = *(int *)(iVar8 + 0x7c);
    iVar1 = *(int *)(iVar2 + 4);
    if (iVar1 != 0) {
      iVar4 = 0;
      lVar11 = *(long *)(iVar2 + 0x20);
      iVar5 = *(int *)(*(int *)(iVar1 + 0x20) + 8);
      lVar10 = *(long *)(iVar2 + 0x28);
      if (0 < iVar5) {
        plVar3 = *(long **)(*(int *)(iVar1 + 0x20) + 0xc);
        do {
          iVar4 = iVar4 + 1;
          if (*plVar3 == lVar10) {
            iVar4 = (int)plVar3[1];
            goto LAB_00143e34;
          }
          plVar3 = plVar3 + 2;
        } while (iVar4 < iVar5);
        iVar4 = 0;
      }
LAB_00143e34:
      *(int *)(*(int *)(iVar8 + 0x7c) + 0x14) = iVar4;
      iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 8);
      iVar5 = 0;
      if (0 < iVar2) {
        plVar3 = *(long **)(*(int *)(iVar1 + 0x24) + 0xc);
        do {
          iVar5 = iVar5 + 1;
          if (*plVar3 == lVar10) {
            uVar6 = (undefined4)plVar3[1];
            goto LAB_00143e74;
          }
          plVar3 = plVar3 + 2;
        } while (iVar5 < iVar2);
      }
      uVar6 = 0;
LAB_00143e74:
      iVar2 = 0;
      *(undefined4 *)(*(int *)(iVar8 + 0x7c) + 0x18) = uVar6;
      uVar7 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
      if (uVar7 != 0) {
        plVar3 = *(long **)(*DAT_0040f4e0 + 4);
        iVar5 = 0x1000000;
        do {
          uVar9 = (undefined1)iVar2;
          if (*plVar3 == lVar11) goto LAB_00143edc;
          plVar3 = plVar3 + 4;
          iVar2 = iVar5 >> 0x18;
          iVar5 = iVar5 + 0x1000000;
        } while (iVar2 < (int)uVar7);
      }
      uVar9 = 0xff;
LAB_00143edc:
      FUN_001ac960(DAT_0040f50c,param_3,*(undefined4 *)(*(int *)(iVar8 + 0x7c) + 4),param_2,uVar9);
      iVar8 = 0;
      if (0 < *(int *)(*(int *)(iVar1 + 0x20) + 8)) {
        uVar6 = *(undefined4 *)(iVar1 + 0x20);
        while( true ) {
          iVar2 = FUN_003822f8(uVar6,iVar8);
          iVar8 = iVar8 + 1;
          iVar5 = 0;
          if (0 < *(int *)(iVar2 + 0x24)) {
            iVar4 = 0;
            do {
              iVar5 = iVar5 + 1;
              *(undefined1 *)(*(int *)(iVar2 + 0x1c) + iVar4 + 9) = 5;
              iVar4 = iVar4 + 0x30;
            } while (iVar5 < *(int *)(iVar2 + 0x24));
          }
          if (*(int *)(*(int *)(iVar1 + 0x20) + 8) <= iVar8) break;
          uVar6 = *(undefined4 *)(iVar1 + 0x20);
        }
      }
    }
  }
  return;
}


// ==== FUN_00143f90 @ 00143f90 ====

void FUN_00143f90(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if ((*(undefined4 **)(param_1 + 0x80))[7] == 9) {
    FUN_001093c0(DAT_0040f4c4,param_2,6,**(undefined4 **)(param_1 + 0x80),param_3,param_4,param_5,
                 0x2000000);
  }
  return;
}


// ==== FUN_00143fd8 @ 00143fd8 ====

void FUN_00143fd8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_001092f8();
  uVar1 = **(undefined4 **)(param_2 + 0x80);
  FUN_00288a38(uVar2);
  FUN_00108668(DAT_0040f4c4,uVar1);
  *(int *)(param_2 + 0x78) = (int)uVar2;
  return;
}


// ==== FUN_00144038 @ 00144038 ====

/* Strings referenciadas:
     "chars/guns/" */

void FUN_00144038(int param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_0035d1a0(param_1 + 0x84,PTR_s_chars_guns__003bceac,0x3f);
  }
  else {
    FUN_0035d1a0(param_1 + 0x84,param_2,0x3f);
  }
  return;
}


// ==== FUN_00144078 @ 00144078 ====

void FUN_00144078(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = 1 - bVar1;
  *param_1 = (byte)uVar2;
  *(byte **)(param_1 + 0x7c) = param_1 + (uint)bVar1 * 0x38 + 8;
  *(byte **)(param_1 + 0x80) = param_1 + (uVar2 & 0xff) * 0x38 + 8;
  return;
}


// ==== FUN_001440b8 @ 001440b8 ====

ulong FUN_001440b8(undefined8 param_1,ulong param_2)

{
  if (param_2 == 0x544614411ffa0000) {
    return 0x5446144138640000;
  }
  if (param_2 < 0x544614411ffa0001) {
    if (param_2 == 0x5446135779860000) {
      return 0x5446135791f00000;
    }
    if (param_2 < 0x5446135779860001) {
      if (param_2 == 0x5446127297c60000) {
        return 0x54461272b0300000;
      }
      if (param_2 == 0x5446127ad7970000) {
        return 0x5446127a51500000;
      }
    }
    else {
      if (param_2 == 0x5446142a5b1e8000) {
        return 0x5446142d31700000;
      }
      if (param_2 < 0x5446142a5b1e8001) {
        if (param_2 == 0x54461388e61c8000) {
          return 0x54461388351c0000;
        }
      }
      else if (param_2 == 0x5446143910fd0000) {
        return 0x54461438a3200000;
      }
    }
  }
  else {
    if (param_2 == 0x5446151ebc278000) {
      return 0x5446151e79040000;
    }
    if (param_2 < 0x5446151ebc278001) {
      if (param_2 == 0x544614b7182c0000) {
        return 0x544614b685b00000;
      }
      if (param_2 < 0x544614b7182c0001) {
        if (param_2 == 0x544614a4487f8000) {
          return 0x544614a467040000;
        }
      }
      else if (param_2 == 0x544614fcffae0000) {
        return 0x544614fd18180000;
      }
    }
    else {
      if (param_2 == 0x5446152380db8000) {
        return 0x544615233db80000;
      }
      if (param_2 < 0x5446152380db8001) {
        if (param_2 == 0x5446152331830000) {
          return 0x54461434d2900000;
        }
      }
      else if (param_2 == 0x54461524b8230000) {
        return 0x5446152431dc0000;
      }
    }
  }
  return param_2;
}


// ==== FUN_001444a8 @ 001444a8 ====

void FUN_001444a8(undefined8 param_1,int param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_80 [4];
  
  FUN_0014bd18();
  puVar8 = (undefined8 *)param_1;
  *(int *)((int)puVar8 + 0x114) = param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)((int)puVar8 + 0xc4) = 4;
  *puVar8 = uVar5;
  *(undefined4 *)(puVar8 + 0x22) = 0;
  iVar3 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(param_2 + 0x40));
  *(int *)(puVar8 + 0x23) = iVar3;
  *(undefined1 *)((int)puVar8 + 0x1f5) = *(undefined1 *)(iVar3 + 0x69);
  *(undefined1 *)((int)puVar8 + 500) = *(undefined1 *)(iVar3 + 0x68);
  *(undefined1 *)((int)puVar8 + 0x1f6) = *(undefined1 *)(iVar3 + 0x6a);
  iVar3 = *(int *)(iVar3 + 0x5c);
  if (iVar3 < 1) {
    *(undefined4 *)(puVar8 + 0x33) = 0;
    *(undefined4 *)((int)puVar8 + 0x19c) = 0;
  }
  else {
    uVar4 = FUN_00107d20(iVar3 << 6);
    if (iVar3 != 0) {
      iVar3 = iVar3 + -2;
      do {
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    *(undefined4 *)(puVar8 + 0x33) = uVar4;
    iVar3 = *(int *)(*(int *)(puVar8 + 0x23) + 0x5c);
    uVar4 = FUN_00107d20(iVar3 << 6);
    if (iVar3 != 0) {
      iVar3 = iVar3 + -2;
      do {
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    *(undefined4 *)((int)puVar8 + 0x19c) = uVar4;
  }
  uVar4 = FUN_00107d20((uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x69) * 0xc);
  *(undefined4 *)(puVar8 + 0x34) = uVar4;
  uVar4 = FUN_00107d20((uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x69) << 2);
  *(undefined4 *)((int)puVar8 + 0x1a4) = uVar4;
  uVar4 = FUN_00107d20((uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x69) * 6);
  *(undefined4 *)(puVar8 + 0x35) = uVar4;
  uVar4 = FUN_00107d20((uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x69) << 1);
  *(undefined4 *)((int)puVar8 + 0x1ac) = uVar4;
  uVar4 = FUN_00107d20((uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x6a) << 1);
  *(undefined4 *)(puVar8 + 0x36) = uVar4;
  lVar6 = FUN_001afba8(*(undefined4 *)(puVar8 + 0x23));
  if (lVar6 == 0) {
    *(undefined4 *)((int)puVar8 + 0x1b4) = 0;
    *(undefined4 *)(puVar8 + 0x24) = 0;
    iVar3 = *(int *)(puVar8 + 0x23);
  }
  else {
    bVar2 = *(byte *)(*(int *)(puVar8 + 0x23) + 0x6a);
    uVar4 = FUN_00107d20((uint)bVar2 * 0x70);
    if (bVar2 != 0) {
      iVar3 = bVar2 - 2;
      do {
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    *(undefined4 *)((int)puVar8 + 0x1b4) = uVar4;
    uVar5 = FUN_00107cf8(0x70);
    *(int *)(puVar8 + 0x24) = (int)uVar5;
    FUN_0014cdb8(uVar5);
    iVar3 = *(int *)(puVar8 + 0x23);
  }
  uVar4 = FUN_00107d20(*(undefined4 *)(iVar3 + 0x3c));
  *(undefined4 *)((int)puVar8 + 0x1bc) = uVar4;
  uVar4 = FUN_00107d20(*(undefined4 *)(*(int *)(puVar8 + 0x23) + 0x44));
  *(undefined4 *)(puVar8 + 0x38) = uVar4;
  uStack_8c = 0x10;
  uStack_90 = 0x60;
  FUN_00107cc8(0x40f0f0,0x10);
  bVar2 = *(byte *)(*(int *)(puVar8 + 0x23) + 0x68);
  uVar4 = FUN_00107d20((uint)bVar2 * 0x60);
  if (bVar2 != 0) {
    iVar3 = bVar2 - 2;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
  }
  *(undefined4 *)(puVar8 + 0x37) = 0;
  *(undefined4 *)(puVar8 + 0x17) = 0;
  *(undefined4 *)((int)puVar8 + 0x194) = uVar4;
  *(undefined2 *)(puVar8 + 0x3d) = 0xffff;
  uVar5 = FUN_00149178(param_1);
  lVar6 = FUN_00149ca0(param_1);
  if (lVar6 == 0) {
    iVar3 = *(int *)(puVar8 + 0x37);
  }
  else {
    if (param_3 != 0) {
      lVar6 = FUN_00263908(param_3,(short)uVar5,param_1);
      if (lVar6 < 0) {
        iVar3 = *(int *)(puVar8 + 0x37);
        goto LAB_00144764;
      }
      *(int *)(puVar8 + 0x37) = (int)param_3;
      *(short *)(puVar8 + 0x3d) = (short)lVar6;
    }
    iVar3 = *(int *)(puVar8 + 0x37);
  }
LAB_00144764:
  if (iVar3 == 0) {
    auStack_80[0] = 0;
    FUN_0032b860(&uStack_90,1,0);
    auStack_80[0] = FUN_00107c98(0x40f0f0,&uStack_90);
    uVar4 = FUN_0032bb28(auStack_80,1,0);
    *(undefined4 *)(puVar8 + 0x25) = uVar4;
    FUN_003349c0(&uStack_90,uVar5,0x3d12c8,0x40);
    auStack_80[0] = FUN_00107c98(0x40f0f0,&uStack_90);
    uVar4 = FUN_003349e0(auStack_80,uVar5,0x3d12c8,0x40);
    uStack_8c = 0x10;
    uStack_90 = 0x60;
    auStack_80[0] = FUN_00107c98(0x40f0f0,&uStack_90);
    iVar3 = FUN_00334268(auStack_80,5);
    *(int *)(puVar8 + 0x17) = iVar3;
    *(undefined4 *)(iVar3 + 0x40) = uVar4;
    iVar3 = *(int *)(puVar8 + 0x23);
  }
  else {
    iVar3 = *(int *)(puVar8 + 0x23);
  }
  iVar7 = 0;
  if (*(char *)(iVar3 + 0x69) != '\0') {
    iVar3 = 0;
    do {
      iVar7 = iVar7 + 1;
      FUN_001afc78(*(int *)(puVar8 + 0x34) + iVar3);
      iVar3 = iVar3 + 0xc;
    } while (iVar7 < (int)(uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x69));
  }
  if ((*(int *)((int)puVar8 + 0x1b4) != 0) &&
     (iVar3 = 0, *(char *)(*(int *)(puVar8 + 0x23) + 0x6a) != '\0')) {
    iVar7 = 0;
    do {
      iVar3 = iVar3 + 1;
      FUN_0014cdb8(*(int *)((int)puVar8 + 0x1b4) + iVar7);
      iVar7 = iVar7 + 0x70;
    } while (iVar3 < (int)(uint)*(byte *)(*(int *)(puVar8 + 0x23) + 0x6a));
  }
  return;
}


// ==== FUN_001448c8 @ 001448c8 ====

undefined4 FUN_001448c8(undefined8 param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  int iVar17;
  
  FUN_0014bd58();
  puVar16 = (undefined8 *)param_1;
  iVar12 = *(int *)(puVar16 + 0x23);
  *(undefined1 *)((int)puVar16 + 0x1f5) = *(undefined1 *)(iVar12 + 0x69);
  *(undefined1 *)((int)puVar16 + 500) = *(undefined1 *)(iVar12 + 0x68);
  *(undefined1 *)((int)puVar16 + 0x1f6) = *(undefined1 *)(iVar12 + 0x6a);
  if (*(int *)(puVar16 + 0x37) != 0) {
    uVar5 = FUN_00149178(param_1);
    FUN_00263390(*(undefined4 *)(puVar16 + 0x37),param_1,uVar5,*(undefined2 *)(puVar16 + 0x3d));
  }
  iVar12 = 0;
  if (*(char *)((int)puVar16 + 0x1f6) != '\0') {
    iVar17 = *(int *)(puVar16 + 0x36);
    while( true ) {
      iVar8 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      *(undefined2 *)(iVar8 + iVar17) = 0xffff;
      if ((int)(uint)*(byte *)((int)puVar16 + 0x1f6) <= iVar12) break;
      iVar17 = *(int *)(puVar16 + 0x36);
    }
  }
  *(undefined1 *)((int)puVar16 + 0x13a) = 0;
  *(undefined1 *)((int)puVar16 + 0x13c) = 0;
  *(undefined1 *)((int)puVar16 + 0x1ec) = 0;
  puVar13 = *(undefined8 **)((int)puVar16 + 0x114);
  *puVar16 = puVar13[9];
  uVar5 = *puVar13;
  uVar6 = *(undefined4 *)(puVar13 + 1);
  uVar7 = *(undefined4 *)((int)puVar13 + 0xc);
  *(int *)(puVar16 + 0xe) = (int)uVar5;
  *(int *)((int)puVar16 + 0x74) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar16 + 0xf) = uVar6;
  *(undefined4 *)((int)puVar16 + 0x7c) = uVar7;
  uVar6 = *(undefined4 *)((int)puVar13 + 0x14);
  uVar7 = *(undefined4 *)(puVar13 + 3);
  uVar11 = *(undefined4 *)((int)puVar13 + 0x1c);
  *(undefined4 *)(puVar16 + 0x10) = *(undefined4 *)(puVar13 + 2);
  *(undefined4 *)((int)puVar16 + 0x84) = uVar6;
  *(undefined4 *)(puVar16 + 0x11) = uVar7;
  *(undefined4 *)((int)puVar16 + 0x8c) = uVar11;
  uVar6 = *(undefined4 *)((int)puVar13 + 0x24);
  uVar7 = *(undefined4 *)(puVar13 + 5);
  uVar11 = *(undefined4 *)((int)puVar13 + 0x2c);
  *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(puVar13 + 4);
  *(undefined4 *)((int)puVar16 + 0x94) = uVar6;
  *(undefined4 *)(puVar16 + 0x13) = uVar7;
  *(undefined4 *)((int)puVar16 + 0x9c) = uVar11;
  uVar6 = *(undefined4 *)((int)puVar13 + 0x34);
  uVar5 = puVar13[6];
  uVar7 = *(undefined4 *)(puVar13 + 7);
  uVar11 = *(undefined4 *)((int)puVar13 + 0x3c);
  *(undefined4 *)(puVar16 + 0x14) = *(undefined4 *)(puVar13 + 6);
  *(undefined4 *)((int)puVar16 + 0xa4) = uVar6;
  *(undefined4 *)(puVar16 + 0x15) = uVar7;
  *(undefined4 *)((int)puVar16 + 0xac) = uVar11;
  cVar2 = FUN_0012c790(DAT_0040f4d0,uVar5,(int)puVar16 + 300);
  if (cVar2 != '\x01') {
    iVar12 = 0;
    do {
      puVar3 = &DAT_003bcb08 + iVar12;
      iVar17 = iVar12 + 0x12d;
      iVar12 = iVar12 + 1;
      *(undefined *)((int)puVar16 + iVar17) = *puVar3;
    } while (iVar12 < 9);
    *(undefined1 *)((int)puVar16 + 0x136) = DAT_003f42f0;
    *(undefined1 *)((int)puVar16 + 0x137) = DAT_003f42f1;
    *(undefined1 *)(puVar16 + 0x27) = DAT_003f42f2;
  }
  puVar13 = *(undefined8 **)(puVar16 + 0x23);
  uVar5 = *puVar13;
  uVar6 = *(undefined4 *)(puVar13 + 1);
  uVar7 = *(undefined4 *)((int)puVar13 + 0xc);
  *(int *)(puVar16 + 0xc) = (int)uVar5;
  *(int *)((int)puVar16 + 100) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar16 + 0xd) = uVar6;
  *(undefined4 *)((int)puVar16 + 0x6c) = uVar7;
  *(undefined1 *)((int)puVar16 + 0x1f5) = *(undefined1 *)((int)puVar13 + 0x69);
  *(undefined1 *)((int)puVar16 + 500) = *(undefined1 *)(puVar13 + 0xd);
  uVar15 = *(undefined1 *)((int)puVar13 + 0x6a);
  *(undefined4 *)(puVar16 + 0x3e) = 0;
  *(undefined1 *)((int)puVar16 + 0x1f6) = uVar15;
  iVar12 = 0;
  if (*(char *)((int)puVar13 + 0x69) != '\0') {
    iVar17 = 0;
    do {
      FUN_001afc80(*(int *)(puVar16 + 0x34) + iVar17,*(undefined4 *)(puVar16 + 0x23),iVar12);
      iVar8 = FUN_001afd80(*(int *)(puVar16 + 0x34) + iVar17,*(undefined4 *)(puVar16 + 0x23));
      if (*(int *)(iVar8 + 0x54) == 3) {
        *(undefined4 *)(puVar16 + 0x3e) = 1;
      }
      iVar12 = iVar12 + 1;
      iVar17 = iVar17 + 0xc;
    } while (iVar12 < (int)(uint)*(byte *)(*(int *)(puVar16 + 0x23) + 0x69));
  }
  iVar12 = 0;
  if (*(char *)((int)puVar16 + 0x1f6) != '\0') {
    iVar17 = *(int *)(puVar16 + 0x36);
    while( true ) {
      psVar9 = (short *)(iVar12 * 2 + iVar17);
      if (*psVar9 != -1) {
        FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*psVar9);
      }
      iVar12 = iVar12 + 1;
      if ((int)(uint)*(byte *)((int)puVar16 + 0x1f6) <= iVar12) break;
      iVar17 = *(int *)(puVar16 + 0x36);
    }
  }
  iVar12 = 0;
  memcpy(*(undefined4 *)((int)puVar16 + 0x1a4),*(undefined4 *)(*(int *)(puVar16 + 0x23) + 100),
         (uint)*(byte *)(*(int *)(puVar16 + 0x23) + 0x69) << 2);
  if (*(int *)(*(int *)(puVar16 + 0x23) + 0x5c) < 1) {
    uVar5 = puVar16[0x12];
    uVar6 = *(undefined4 *)(puVar16 + 0x13);
    uVar7 = *(undefined4 *)((int)puVar16 + 0x9c);
  }
  else {
    iVar17 = *(int *)(puVar16 + 0x23);
    while( true ) {
      iVar8 = iVar12 * 0x40;
      iVar12 = iVar12 + 1;
      puVar14 = (undefined4 *)(iVar8 + *(int *)(puVar16 + 0x33));
      puVar13 = (undefined8 *)(iVar8 + *(int *)(iVar17 + 0x54));
      uVar5 = *puVar13;
      uVar6 = *(undefined4 *)(puVar13 + 1);
      uVar7 = *(undefined4 *)((int)puVar13 + 0xc);
      *puVar14 = (int)uVar5;
      puVar14[1] = (int)((ulong)uVar5 >> 0x20);
      puVar14[2] = uVar6;
      puVar14[3] = uVar7;
      uVar6 = *(undefined4 *)((int)puVar13 + 0x14);
      uVar7 = *(undefined4 *)(puVar13 + 3);
      uVar11 = *(undefined4 *)((int)puVar13 + 0x1c);
      puVar14[4] = *(undefined4 *)(puVar13 + 2);
      puVar14[5] = uVar6;
      puVar14[6] = uVar7;
      puVar14[7] = uVar11;
      uVar6 = *(undefined4 *)((int)puVar13 + 0x24);
      uVar7 = *(undefined4 *)(puVar13 + 5);
      uVar11 = *(undefined4 *)((int)puVar13 + 0x2c);
      puVar14[8] = *(undefined4 *)(puVar13 + 4);
      puVar14[9] = uVar6;
      puVar14[10] = uVar7;
      puVar14[0xb] = uVar11;
      uVar6 = *(undefined4 *)((int)puVar13 + 0x34);
      uVar7 = *(undefined4 *)(puVar13 + 7);
      uVar11 = *(undefined4 *)((int)puVar13 + 0x3c);
      puVar14[0xc] = *(undefined4 *)(puVar13 + 6);
      puVar14[0xd] = uVar6;
      puVar14[0xe] = uVar7;
      puVar14[0xf] = uVar11;
      if (*(int *)(*(int *)(puVar16 + 0x23) + 0x5c) <= iVar12) break;
      iVar17 = *(int *)(puVar16 + 0x23);
    }
    uVar5 = puVar16[0x12];
    uVar6 = *(undefined4 *)(puVar16 + 0x13);
    uVar7 = *(undefined4 *)((int)puVar16 + 0x9c);
  }
  iVar17 = 0;
  *(undefined1 *)((int)puVar16 + 0x1ea) = 0;
  *(undefined4 *)((int)puVar16 + 0x1c4) = 0;
  *(undefined4 *)((int)puVar16 + 0x1d4) = 0;
  *(undefined4 *)((int)puVar16 + 0x1cc) = 0;
  *(undefined4 *)((int)puVar16 + 0x1dc) = 0;
  *(undefined4 *)(puVar16 + 0x39) = 0;
  *(undefined4 *)(puVar16 + 0x3b) = 0;
  *(undefined4 *)((int)puVar16 + 0x1e4) = 0;
  *(undefined1 *)((int)puVar16 + 0x1f7) = 0;
  *(int *)(puVar16 + 0x2c) = (int)uVar5;
  *(int *)((int)puVar16 + 0x164) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar16 + 0x2d) = uVar6;
  *(undefined4 *)((int)puVar16 + 0x16c) = uVar7;
  *(undefined1 *)((int)puVar16 + 0x1ef) = 0xff;
  *(undefined1 *)((int)puVar16 + 0x1ee) = 0xff;
  *(int *)(puVar16 + 0x28) = (int)puVar16[0xe];
  *(int *)((int)puVar16 + 0x144) = (int)((ulong)puVar16[0xe] >> 0x20);
  *(undefined4 *)(puVar16 + 0x29) = *(undefined4 *)(puVar16 + 0xf);
  *(undefined4 *)((int)puVar16 + 0x14c) = *(undefined4 *)((int)puVar16 + 0x7c);
  *(int *)(puVar16 + 0x2a) = (int)puVar16[0x10];
  *(int *)((int)puVar16 + 0x154) = (int)((ulong)puVar16[0x10] >> 0x20);
  *(undefined4 *)(puVar16 + 0x2b) = *(undefined4 *)(puVar16 + 0x11);
  *(undefined4 *)((int)puVar16 + 0x15c) = *(undefined4 *)((int)puVar16 + 0x8c);
  *(int *)(puVar16 + 0x2e) = (int)puVar16[0x14];
  *(int *)((int)puVar16 + 0x174) = (int)((ulong)puVar16[0x14] >> 0x20);
  *(undefined4 *)(puVar16 + 0x2f) = *(undefined4 *)(puVar16 + 0x15);
  *(undefined4 *)((int)puVar16 + 0x17c) = *(undefined4 *)((int)puVar16 + 0xac);
  FUN_001476d8(param_1);
  memcpy(*(undefined4 *)((int)puVar16 + 0x1bc),*(undefined4 *)(*(int *)(puVar16 + 0x23) + 0x38),
         *(undefined4 *)(*(int *)(puVar16 + 0x23) + 0x3c));
  memcpy(*(undefined4 *)(puVar16 + 0x38),*(undefined4 *)(*(int *)(puVar16 + 0x23) + 0x40),
         *(undefined4 *)(*(int *)(puVar16 + 0x23) + 0x44));
  iVar12 = 0;
  if (*(char *)(*(int *)(puVar16 + 0x23) + 0x69) != '\0') {
    do {
      iVar8 = iVar17 * 2;
      iVar17 = iVar17 + 1;
      puVar10 = (undefined1 *)(iVar12 + *(int *)(puVar16 + 0x35));
      puVar10[5] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      *(undefined1 *)(iVar8 + *(int *)((int)puVar16 + 0x1ac)) = 0;
      iVar12 = iVar12 + 6;
    } while (iVar17 < (int)(uint)*(byte *)(*(int *)(puVar16 + 0x23) + 0x69));
  }
  *(undefined1 *)((int)puVar16 + 0x101) = 0;
  iVar12 = 0;
  FUN_00144e58(param_1);
  if (0 < *(int *)(*(int *)(puVar16 + 0x23) + 0x24)) {
    iVar8 = 0;
    iVar17 = *(int *)(puVar16 + 0x23);
    do {
      iVar12 = iVar12 + 1;
      *(byte *)(*(int *)((int)puVar16 + 0x1bc) + (int)*(short *)(*(int *)(iVar17 + 0x20) + iVar8) +
               2) = (byte)((ulong)param_1 >> 8) & 7;
      iVar17 = *(int *)(puVar16 + 0x23);
      iVar8 = iVar8 + 6;
    } while (iVar12 < *(int *)(iVar17 + 0x24));
  }
  puVar16[0x30] = 0;
  iVar12 = *(int *)(puVar16 + 0x23);
  iVar17 = 0;
  if (*(char *)(iVar12 + 0x69) != '\0') {
    iVar8 = 0;
    do {
      iVar17 = iVar17 + 1;
      puVar16[0x30] = puVar16[0x30] | *(ulong *)(*(int *)(iVar12 + 0x48) + iVar8 + 0x68);
      iVar8 = iVar8 + 0xd0;
    } while (iVar17 < (int)(uint)*(byte *)(iVar12 + 0x69));
  }
  iVar12 = FUN_001484c8(param_1);
  uVar15 = 0;
  if (((*(ushort *)(*(int *)(*(int *)(puVar16 + 0x23) + 0x48) + iVar12 * 0xd0 + 0x58) & 0x200) != 0)
     || (*(int *)(puVar16 + 0x3e) != 0)) {
    uVar15 = 1;
  }
  *(undefined1 *)((int)puVar16 + 0x13b) = uVar15;
  iVar8 = 0;
  iVar17 = 0;
  uVar1 = *(undefined2 *)(*(int *)(*(int *)(puVar16 + 0x23) + 0x48) + iVar12 * 0xd0 + 0x58);
  *(undefined1 *)((int)puVar16 + 0x1ec) = 0;
  *(undefined1 *)((int)puVar16 + 0x1ed) = 0;
  *(byte *)((int)puVar16 + 0x13a) = (byte)((ushort)uVar1 >> 8) & 1;
  if (*(char *)((int)puVar16 + 0x1f6) != '\0') {
    iVar12 = 0;
    do {
      iVar4 = FUN_001afd80(*(int *)(puVar16 + 0x34) + iVar12,*(undefined4 *)(puVar16 + 0x23));
      iVar4 = *(int *)(iVar4 + 0x54);
      if (iVar4 == 3) {
        iVar17 = iVar17 + 1;
      }
      if (iVar4 == 5) {
        *(char *)((int)puVar16 + 0x1ef) = (char)iVar8;
      }
      if (iVar4 == 6) {
        *(char *)((int)puVar16 + 0x1ee) = (char)iVar8;
      }
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 0xc;
    } while (iVar8 < (int)(uint)*(byte *)((int)puVar16 + 0x1f6));
  }
  *(bool *)((int)puVar16 + 0x1eb) = iVar17 == 6;
  return 1;
}


// ==== FUN_00144e00 @ 00144e00 ====

undefined4 FUN_00144e00(undefined8 param_1)

{
  FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,0);
  FUN_00149ac8(param_1);
  return 1;
}


// ==== FUN_00144e58 @ 00144e58 ====

void FUN_00144e58(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 in_v0_udw;
  undefined8 extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  undefined8 extraout_v0_udw_01;
  undefined1 (*pauVar3) [16];
  undefined4 in_v1_udw;
  undefined4 in_register_0000003c;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  int iStack_b0;
  uint uStack_ac;
  
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0x1b8) == 0) {
    **(undefined4 **)(*(int *)(iVar8 + 0x128) + 4) = *(undefined4 *)(iVar8 + 0xb8);
    iVar9 = *(int *)(*(int *)(iVar8 + 0x128) + 4);
    *(undefined4 *)(iVar9 + 0x44) = 0x3ecccccd;
    *(undefined4 *)(iVar9 + 0x40) = 0x3ecccccd;
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x128) + 4) + 0x48) = 0x3dcccccd;
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x128) + 4) + 0x30) = 0x3c23d70a;
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x128) + 4) + 0x34) = 0x3c23d70a;
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x128) + 4) + 0x2c) = 0x3dcccccd;
    uVar2 = *(undefined4 *)(iVar8 + 0x194);
  }
  else {
    uVar2 = *(undefined4 *)(iVar8 + 0x194);
  }
  *(undefined4 *)(iVar8 + 0xbc) = uVar2;
  iVar9 = 0;
  if (*(char *)(*(int *)(iVar8 + 0x118) + 0x68) != '\0') {
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar9 = iVar9 + 1;
      FUN_003342d0(*(int *)(iVar8 + 0x194) + iVar5,5);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar13 = _vsub(in_vf0,in_vf0);
      auVar14 = _vaddbc(in_vf0,in_vf0);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      pauVar3 = (undefined1 (*) [16])(iVar5 + *(int *)(iVar8 + 0x194));
      auVar13 = _sqc2(auVar13);
      pauVar3[3] = auVar13;
      auVar13 = _sqc2(auVar14);
      *pauVar3 = auVar13;
      auVar13 = _sqc2(auVar15);
      pauVar3[1] = auVar13;
      auVar13 = _sqc2(auVar16);
      pauVar3[2] = auVar13;
      iVar4 = iVar5 + *(int *)(iVar8 + 0x194);
      iVar5 = iVar5 + 0x60;
      *(undefined4 *)(iVar4 + 0x40) =
           *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x118) + 0x48) + iVar7 + 0xc0);
      iVar7 = iVar7 + 0xd0;
      in_v0_udw = extraout_v0_udw;
    } while (iVar9 < (int)(uint)*(byte *)(*(int *)(iVar8 + 0x118) + 0x68));
  }
  iVar9 = 0;
  if (*(int *)(iVar8 + 0x1b8) == 0) {
    iVar9 = *(int *)(*(int *)(iVar8 + 0xb8) + 0x40);
    uVar2 = FUN_00149178(param_1);
    *(undefined4 *)(iVar9 + 0x28) = uVar2;
    in_v0_udw = extraout_v0_udw_00;
  }
  uVar12 = 0;
  uVar10 = 0;
  if (*(char *)(iVar8 + 0x1f6) != '\0') {
    do {
      uVar11 = 0;
      uStack_ac = uVar10 + 1;
      iVar5 = *(int *)(*(int *)(iVar8 + 0x118) + 0x48) + uVar10 * 0xd0;
      auVar14._1_7_ = 0;
      auVar14[0] = *(byte *)(iVar5 + 0xce);
      auVar14._8_8_ = in_v0_udw;
      auVar13._8_4_ = in_v1_udw;
      auVar13._0_8_ = 1;
      auVar13._12_4_ = in_register_0000003c;
      auVar13 = _pmaxw(auVar13,auVar14);
      auVar14 = _pextlw(0,auVar13._0_8_);
      if (auVar14._0_8_ < 1) {
        bVar1 = *(byte *)(iVar8 + 0x1f6);
        in_v0_udw = auVar13._8_8_;
      }
      else {
        do {
          if (*(int *)(iVar8 + 0x1b8) == 0) {
            FUN_00149d58(param_1,uVar10,iVar5,uVar11,0,&uStack_110,auStack_c0,&iStack_b0);
            if (iStack_b0 == 0) {
              puVar6 = (undefined4 *)(*(int *)(iVar9 + 0x30) + (uVar12 & 0xffff) * 0x60);
              FUN_003342d0(puVar6,4);
              auVar16 = _lqc2(auStack_c0);
              auVar15 = _qmfc2(auVar16._0_4_);
              auVar13 = _sqc2(auVar16);
              auStack_d0._4_4_ = auVar13._4_4_;
              auVar13 = _sqc2(auVar16);
              auStack_d0._8_4_ = auVar13._8_4_;
              auStack_d0._0_4_ = auVar15._0_4_;
              auStack_d0._12_4_ = auVar13._12_4_;
              auVar15 = _lqc2(auStack_d0);
              auVar13 = _qmfc2(auVar15._0_4_);
              puVar6[0x10] = auVar13._0_4_;
              auVar13 = _sqc2(auVar15);
              auStack_d0._4_4_ = auVar13._4_4_;
              puVar6[0x11] = auStack_d0._4_4_;
              auStack_d0 = _sqc2(auVar15);
              puVar6[0x12] = auStack_d0._8_4_;
            }
            else {
              puVar6 = (undefined4 *)(*(int *)(iVar9 + 0x30) + (uVar12 & 0xffff) * 0x60);
              FUN_003342d0(puVar6,2);
              puVar6[0x10] = auStack_c0._8_4_;
              auStack_d0 = auStack_c0;
              puVar6[0x13] = auStack_c0._4_4_;
            }
            *puVar6 = uStack_110;
            puVar6[1] = uStack_10c;
            puVar6[2] = uStack_108;
            puVar6[3] = uStack_104;
            puVar6[4] = uStack_100;
            puVar6[5] = uStack_fc;
            puVar6[6] = uStack_f8;
            puVar6[7] = uStack_f4;
            puVar6[8] = auStack_f0._0_4_;
            puVar6[9] = auStack_f0._4_4_;
            puVar6[10] = auStack_f0._8_4_;
            puVar6[0xb] = auStack_f0._12_4_;
            puVar6[0xc] = uStack_e0;
            puVar6[0xd] = uStack_dc;
            puVar6[0xe] = uStack_d8;
            puVar6[0xf] = uStack_d4;
            auVar15 = auStack_f0;
            in_v1_udw = uStack_d8;
            in_register_0000003c = uStack_d4;
          }
          else {
            FUN_00149d58(param_1,uVar10,iVar5,uVar11,1,&uStack_110,auStack_c0,&iStack_b0);
            auVar15._0_8_ =
                 FUN_002633e0(*(undefined4 *)(iVar8 + 0x1b8),
                              (int)((*(ushort *)(iVar8 + 0x1e8) + uVar12) * 0x10000) >> 0x10,
                              uVar10 & 0xff,auStack_c0._0_8_,&uStack_110,iStack_b0);
            auVar15._8_8_ = extraout_v0_udw_01;
          }
          uVar11 = (ulong)((int)uVar11 + 1) & 0xff;
          in_v0_udw = auVar15._8_8_;
          uVar12 = uVar12 + 1;
        } while ((long)uVar11 < auVar14._0_8_);
        bVar1 = *(byte *)(iVar8 + 0x1f6);
      }
      uVar10 = uStack_ac;
    } while ((int)uStack_ac < (int)(uint)bVar1);
  }
  if (iVar9 != 0) {
    (**(code **)(*(int *)(iVar9 + 0x20) + 0x18))(iVar9 + *(short *)(*(int *)(iVar9 + 0x20) + 0x14));
    iVar9 = FUN_001484c8(param_1);
    auVar15 = _qmtc2(0x3f000000);
    iVar9 = *(int *)(*(int *)(iVar8 + 0x118) + 0x48) + iVar9 * 0xd0;
    auVar13 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x90));
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
    auVar13 = _vsub(auVar13,auVar14);
    uVar2 = *(undefined4 *)(iVar9 + 0x48);
    auVar13 = _vmulbc(auVar13,auVar15);
    auStack_c0 = _sqc2(auVar13);
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x128) + 4) + 0x28) = 0x3f800000;
    FUN_0014c180(uVar2,param_1,auStack_c0._0_8_);
  }
  return;
}


// ==== FUN_00145240 @ 00145240 ====

void FUN_00145240(undefined4 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)param_2;
  if (*(int *)(iVar9 + 0x1f0) != 0) {
    FUN_00148550();
  }
  FUN_00145400(param_2);
  iVar7 = *(byte *)(iVar9 + 0x1f5) - 1;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 6;
    do {
      pcVar6 = (char *)(iVar8 + *(int *)(iVar9 + 0x1a8));
      if ((*pcVar6 != '\0') && (pcVar6[1] != '\0')) {
        FUN_00147d28(param_2,iVar7);
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + -6;
    } while (-1 < iVar7);
  }
  bVar1 = *(byte *)(iVar9 + 0x1f5);
  iVar7 = bVar1 - 1;
  bVar2 = false;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 6;
    do {
      if (*(char *)(iVar8 + *(int *)(iVar9 + 0x1a8)) != '\0') {
        FUN_001480e8(param_2,iVar7);
        bVar2 = true;
        puVar4 = (undefined1 *)(iVar8 + *(int *)(iVar9 + 0x1a8));
        puVar4[5] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + -6;
    } while (-1 < iVar7);
    bVar1 = *(byte *)(iVar9 + 0x1f5);
  }
  iVar7 = 0;
  if (bVar1 != 0) {
    iVar8 = *(int *)(iVar9 + 0x1ac);
    while( true ) {
      iVar5 = iVar7 * 2;
      iVar7 = iVar7 + 1;
      *(undefined1 *)(iVar5 + iVar8) = 0;
      if ((int)(uint)*(byte *)(iVar9 + 0x1f5) <= iVar7) break;
      iVar8 = *(int *)(iVar9 + 0x1ac);
    }
  }
  if (bVar2) {
    FUN_00175b60(DAT_0040f4d4 + 0xa48,param_2);
  }
  FUN_0014be20(param_1,param_2);
  cVar3 = *(char *)(iVar9 + 0x1ed) + -1;
  if (*(char *)(iVar9 + 0x1ed) == '\0') {
    return;
  }
  *(char *)(iVar9 + 0x1ed) = cVar3;
  if (cVar3 == '\0') {
    if (*(char *)(iVar9 + 0x13c) == '\0') {
      iVar7 = *(int *)(iVar9 + 0x10);
      goto LAB_001453d4;
    }
    if (*(int *)(iVar9 + 0x1b8) != 0) {
      FUN_0014a8d0(param_2);
    }
    FUN_00129240(DAT_0040f4d0,param_2,0);
  }
  iVar7 = *(int *)(iVar9 + 0x10);
LAB_001453d4:
  (**(code **)(iVar7 + 0x24))(iVar9 + *(short *)(iVar7 + 0x20));
  return;
}


// ==== FUN_00145400 @ 00145400 ====

void FUN_00145400(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar5 = (int)param_1;
  iVar6 = 0;
  if (*(char *)(iVar5 + 0x1f5) == '\0') {
    return;
  }
  iVar1 = *(int *)(iVar5 + 0x1ac);
  do {
    if (*(char *)(iVar6 * 2 + iVar1) == '\0') {
LAB_00145518:
      uVar2 = (uint)*(byte *)(iVar5 + 0x1f5);
    }
    else {
      iVar1 = FUN_00147988(param_1,iVar6);
      auVar7 = _qmtc2(0x3dcccccd);
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
      auVar7 = _vsubbc(auVar8,auVar7);
      auVar7 = _vaddbc(in_vf0,auVar7);
      auVar7 = _qmfc2(auVar7._0_4_);
      uVar4 = 1;
      if (*(int *)(iVar5 + 0x1f0) != 0) {
        uVar4 = 4;
      }
      iVar1 = *(int *)(*(int *)(iVar5 + 0x118) + 0x48) +
              (uint)*(byte *)(iVar6 * 2 + *(int *)(iVar5 + 0x1ac) + 1) * 0xd0;
      FUN_0012c428(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38),DAT_0040f4d0,
                   auVar7._0_8_,DAT_004432c0,*(undefined8 *)(iVar1 + 0x18),uVar4,param_1,
                   *(undefined4 *)(iVar5 + 0x124),1);
      if (*(int *)(iVar5 + 0x1f0) == 0) {
        uVar2 = (uint)*(byte *)(iVar5 + 0x1f5);
      }
      else {
        iVar1 = FUN_001484c8(param_1);
        if (iVar6 == iVar1) {
          lVar3 = FUN_0014c5c8(param_1,4);
          if (lVar3 != 0) {
            FUN_0025cae8(DAT_0040f4cc,*(undefined4 *)(iVar5 + 0xb4));
          }
          goto LAB_00145518;
        }
        uVar2 = (uint)*(byte *)(iVar5 + 0x1f5);
      }
    }
    iVar6 = iVar6 + 1;
    if ((int)uVar2 <= iVar6) {
      return;
    }
    iVar1 = *(int *)(iVar5 + 0x1ac);
  } while( true );
}


// ==== FUN_00145558 @ 00145558 ====

void FUN_00145558(undefined8 param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  byte *pbVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  
  iVar15 = (int)param_1;
  if (*(char *)(iVar15 + 0x13e) != '\0') {
    FUN_00125e98(param_1,*(undefined4 *)(iVar15 + 0x118));
    if (100.0 < *(float *)(iVar15 + 0xc0)) {
      iVar18 = (**(code **)(*(int *)(iVar15 + 0x10) + 0xdc))
                         (iVar15 + *(short *)(*(int *)(iVar15 + 0x10) + 0xd8));
      if (*(float *)(iVar18 + 0xc) / *(float *)(iVar15 + 0xc0) < 0.05) {
        return;
      }
      cVar1 = *(char *)(iVar15 + 0x1f5);
    }
    else {
      cVar1 = *(char *)(iVar15 + 0x1f5);
    }
    iVar18 = 0;
    *(undefined8 *)(iVar15 + 0x180) = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (cVar1 != '\0') {
      do {
        lVar5 = FUN_001afd80(*(int *)(iVar15 + 0x1a0) + iVar18 * 0xc,*(undefined4 *)(iVar15 + 0x118)
                            );
        lVar12 = 2;
        if (lVar5 != 0) {
          iVar16 = (int)lVar5;
          uVar2 = *(ushort *)(iVar16 + 0x5a);
          if (param_2 != 0) {
            iVar10 = *(int *)(iVar18 * 4 + *(int *)(iVar15 + 0x1a4));
            if (iVar10 < 0) {
              pauVar7 = (undefined1 (*) [16])(iVar15 + 0x70);
              if (*(int *)(iVar15 + 0x1f0) != 0) {
                pauVar7 = (undefined1 (*) [16])(iVar15 + 0x140);
              }
            }
            else {
              pauVar7 = (undefined1 (*) [16])(*(int *)(iVar15 + 0x19c) + iVar10 * 0x40);
            }
            auVar20 = _lqc2(pauVar7[2]);
            auVar24 = _lqc2(pauVar7[3]);
            auVar23 = _lqc2(*pauVar7);
            auVar21 = _lqc2(pauVar7[1]);
            auVar22 = _lqc2(*(undefined1 (*) [16])(iVar16 + 0xb0));
            _vmulabc(auVar23,auVar22);
            _vmaddabc(auVar21,auVar22);
            _vmaddabc(auVar20,auVar22);
            auVar20 = _vmaddbc(auVar24,in_vf0);
            auVar21 = _lqc2(*(undefined1 (*) [16])(iVar15 + 0x60));
            _lqc2(auStack_b0);
            _vadd(in_vf0,auVar20);
            auVar20 = _vmove(auVar21);
            auStack_b0 = _sqc2(auVar20);
            lVar12 = FUN_0026f0b0(auStack_b0._0_8_,DAT_0040f4c0 + 0xcfd0);
          }
          if (0 < lVar12) {
            *(uint *)(iVar15 + 0x180) =
                 *(uint *)(iVar15 + 0x180) |
                 *(uint *)((uint)*(byte *)(iVar15 + 200) * 8 + iVar16 + 0x68);
            *(uint *)(iVar15 + 0x184) =
                 *(uint *)(iVar15 + 0x184) |
                 *(uint *)((uint)*(byte *)(iVar15 + 200) * 8 + iVar16 + 0x6c);
            if (lVar12 == 2) {
              uStack_c0 = CONCAT44((uint)(uStack_c0 >> 0x20) |
                                   *(uint *)((uint)*(byte *)(iVar15 + 200) * 8 + iVar16 + 0x6c),
                                   (uint)uStack_c0 |
                                   *(uint *)((uint)*(byte *)(iVar15 + 200) * 8 + iVar16 + 0x68));
            }
          }
          if (((uVar2 >> 8 ^ 1) & 1) != 0) {
            uStack_b8 = CONCAT44((uint)(uStack_b8 >> 0x20) |
                                 *(uint *)((uint)*(byte *)(iVar15 + 200) * 8 + iVar16 + 0x6c),
                                 (uint)uStack_b8 |
                                 *(uint *)((uint)*(byte *)(iVar15 + 200) * 8 + iVar16 + 0x68));
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)(uint)*(byte *)(iVar15 + 0x1f5));
    }
    uVar17 = 0;
    if (0 < *(int *)(*(int *)(iVar15 + 0x118) + 0x24)) {
      bVar3 = true;
      do {
        if (bVar3) {
          uVar6 = (ulong)(uint)(1 << (uVar17 & 0x1f));
          uVar4 = (uint)((*(ulong *)(iVar15 + 0x180) & uVar6) != 0);
          uVar13 = (uint)((uStack_c0 & uVar6) != 0);
          uVar14 = (uint)((uStack_b8 & uVar6) != 0);
        }
        else {
          uVar14 = uVar17 - 0x20;
          uVar4 = *(uint *)(iVar15 + 0x184) >> (uVar14 & 0x1f) & 1;
          uVar13 = uStack_c0._4_4_ >> (uVar14 & 0x1f) & 1;
          uVar14 = uStack_b8._4_4_ >> (uVar14 & 0x1f) & 1;
        }
        if (uVar4 == 0) {
LAB_001459a8:
          iVar18 = *(int *)(iVar15 + 0x118);
        }
        else {
          psVar9 = (short *)(*(int *)(*(int *)(iVar15 + 0x118) + 0x20) + uVar17 * 6);
          iVar18 = *(int *)(*(int *)(iVar15 + 0x118) + 0x1c) + uVar17 * 0x30;
          if ((char)psVar9[2] < '\0') {
            iVar16 = iVar15 + 0x70;
            if (*(int *)(iVar15 + 0x1f0) != 0) {
              iVar16 = iVar15 + 0x140;
            }
          }
          else {
            iVar16 = *(int *)(iVar15 + 0x19c) + (char)psVar9[2] * 0x40;
          }
          pbVar8 = (byte *)(*(int *)(iVar15 + 0x1bc) + (int)*psVar9);
          iVar10 = *(int *)(iVar15 + 0x1c0) + (int)psVar9[1];
          if (2 < *pbVar8 - 2) {
            if (*pbVar8 == 10) {
              auVar22 = _lqc2(*(undefined1 (*) [16])(iVar15 + 0x60));
              auVar20 = _qmtc2(0x40000000);
              auVar21 = _qmtc2(*(undefined4 *)(iVar10 + 0x30));
              auVar20 = _vmulbc(auVar22,auVar20);
              fVar19 = *(float *)(iVar15 + 0xc0);
              auVar20 = _vaddbc(auVar20,auVar21);
              auVar20 = _sqc2(auVar20);
              fStack_c4 = auVar20._12_4_;
              if (fVar19 < fStack_c4) {
                iVar11 = 0;
                uVar14 = 0;
                goto LAB_00145984;
              }
            }
            else {
              FUN_001af738(*(undefined4 *)(iVar15 + 0xc0),DAT_0040f4c0 + 0x14,iVar18,pbVar8,iVar10,0
                           ,iVar16,uVar13,uVar14);
            }
            goto LAB_001459a8;
          }
          fVar19 = *(float *)(iVar15 + 0xc0);
          iVar11 = iVar15 + 300;
LAB_00145984:
          FUN_001af738(fVar19,DAT_0040f4c0 + 0x14,iVar18,pbVar8,iVar10,iVar11,iVar16,uVar13,uVar14);
          iVar18 = *(int *)(iVar15 + 0x118);
        }
        uVar17 = uVar17 + 1;
        bVar3 = (int)uVar17 < 0x20;
      } while ((int)uVar17 < *(int *)(iVar18 + 0x24));
    }
    uVar17 = 0;
    if (*(char *)(iVar15 + 0x1f6) != '\0') {
      iVar18 = *(int *)(iVar15 + 0x1b0);
      while( true ) {
        psVar9 = (short *)(uVar17 * 2 + iVar18);
        if (*psVar9 != -1) {
          FUN_001b37b0(DAT_0040f4d8 + 0x33c40,*psVar9);
        }
        uVar17 = uVar17 + 1 & 0xff;
        if (*(byte *)(iVar15 + 0x1f6) <= uVar17) break;
        iVar18 = *(int *)(iVar15 + 0x1b0);
      }
    }
  }
  return;
}


// ==== FUN_00145a50 @ 00145a50 ====

void FUN_00145a50(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  iVar6 = (int)param_1;
  if (*(int *)(iVar6 + 0x1f0) != 0) {
    if (*(char *)(iVar6 + 0x13d) == '\0') {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(*(int *)(iVar6 + 0x11c) + 0x44);
    }
    if (cVar2 == '\0') {
      uStack_38 = *(undefined4 *)(iVar6 + 0xa8);
      uStack_34 = *(undefined4 *)(iVar6 + 0xac);
      puVar1 = *(undefined8 **)(iVar6 + 0x114);
      uStack_40 = (undefined4)*(undefined8 *)(iVar6 + 0xa0);
      uStack_3c = (undefined4)((ulong)*(undefined8 *)(iVar6 + 0xa0) >> 0x20);
      uStack_78 = *(undefined4 *)(puVar1 + 1);
      uStack_74 = *(undefined4 *)((int)puVar1 + 0xc);
      auVar7 = _qmtc2(uStack_3c);
      auStack_30 = _sqc2(auVar7);
      uStack_80 = (undefined4)*puVar1;
      uStack_7c = (undefined4)((ulong)*puVar1 >> 0x20);
      uStack_68 = *(undefined4 *)(puVar1 + 3);
      uStack_64 = *(undefined4 *)((int)puVar1 + 0x1c);
      auVar8 = _lqc2(auStack_30);
      uStack_70 = (undefined4)puVar1[2];
      uStack_6c = (undefined4)((ulong)puVar1[2] >> 0x20);
      uStack_58 = *(undefined4 *)(puVar1 + 5);
      uStack_54 = *(undefined4 *)((int)puVar1 + 0x2c);
      uStack_60 = (undefined4)puVar1[4];
      uStack_5c = (undefined4)((ulong)puVar1[4] >> 0x20);
      auVar7 = _lqc2(*(undefined1 (*) [16])(puVar1 + 6));
      _sqc2(auVar7);
      auVar7 = _vaddbc(in_vf0,auVar8);
      auStack_50 = _sqc2(auVar7);
      FUN_00125f88(param_1,&uStack_80);
      _lqc2(*(undefined1 (*) [16])(iVar6 + 0x170));
      auVar7 = _lqc2(auStack_30);
      auVar7 = _vaddbc(in_vf0,auVar7);
      auVar7 = _sqc2(auVar7);
      *(undefined1 (*) [16])(iVar6 + 0x170) = auVar7;
    }
  }
  FUN_001476d8(param_1);
  if (((*(int *)(iVar6 + 0xb4) != 0) &&
      ((*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0xb4) + 0x34) + 0xc) + 0x58) + 0x8c) >>
        2 & 1U) != 0)) &&
     (cVar2 = FUN_0012c790(DAT_0040f4d0,*(undefined8 *)(iVar6 + 0xa0),iVar6 + 300), cVar2 != '\x01')
     ) {
    iVar5 = 0;
    do {
      puVar3 = &DAT_003bcb08 + iVar5;
      puVar4 = (undefined1 *)(iVar6 + 0x12d + iVar5);
      iVar5 = iVar5 + 1;
      *puVar4 = *puVar3;
    } while (iVar5 < 9);
    *(undefined1 *)(iVar6 + 0x136) = DAT_003f42f0;
    *(undefined1 *)(iVar6 + 0x137) = DAT_003f42f1;
    *(undefined1 *)(iVar6 + 0x138) = DAT_003f42f2;
  }
  return;
}


// ==== FUN_00145b98 @ 00145b98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00145b98(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined1 param_6,int param_7)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 in_zero_qw [16];
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar8;
  int iVar9;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  uStack_bc = (undefined4)((ulong)param_4 >> 0x20);
  uStack_c0 = (undefined4)param_4;
  uStack_cc = (undefined4)((ulong)param_3 >> 0x20);
  uStack_d0 = (undefined4)param_3;
  param_5 = param_5 & 0xff;
  iVar9 = (int)param_2;
  iVar8 = *(int *)(iVar9 + 0x1a0) + param_5 * 0xc;
  uStack_c8 = in_a1_udw;
  uStack_c4 = in_register_0000005c;
  uStack_b8 = in_a2_udw;
  uStack_b4 = in_register_0000006c;
  fVar10 = (float)FUN_001afdb0(iVar8);
  lVar5 = FUN_001afd80(iVar8,*(undefined4 *)(iVar9 + 0x118));
  iVar8 = FUN_001484c8(param_2);
  lVar6 = FUN_001afd80(*(int *)(iVar9 + 0x1a0) + iVar8 * 0xc,*(undefined4 *)(iVar9 + 0x118));
  if (lVar6 == 0) {
    return;
  }
  if (*(byte *)(iVar9 + 0x1f5) <= param_5) {
    return;
  }
  if (*(char *)(iVar9 + 0x13f) != '\0') {
    return;
  }
  FUN_0014c100(param_1,param_2);
  if (lVar5 != 0) {
    iVar8 = *(int *)((int)lVar5 + 0x54);
    uVar1 = *(ushort *)((int)lVar5 + 0x58);
    if (iVar8 == 2) {
      auVar7 = _pextlw(0,0);
      auVar7 = _pextlw(0,auVar7._0_8_);
      _por(in_zero_qw,auVar7);
      FUN_001df278(auStack_e0);
    }
    else if (iVar8 == 3) {
      FUN_001e31d0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),3);
    }
    bVar2 = false;
    if ((uVar1 & 8) != 0) {
      if (((uVar1 & 1) == 0) || (*(int *)(param_7 + 0xc4) != 1)) {
        if (((uVar1 & 2) != 0) && (bVar2 = false, *(int *)(param_7 + 0xc4) == 2)) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
    }
    iVar8 = FUN_0015d248(DAT_0040f4e0,param_6,0);
    iVar8 = *(int *)(iVar8 + 0x94);
    if (((uVar1 & 0x400) == 0) || (iVar8 != 0)) {
      if (((uVar1 & 0x800) == 0) || (iVar8 != 1)) {
        if (((uVar1 & 0x1000) != 0) && (iVar8 == 2)) {
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
    piVar4 = (int *)FUN_0015d248(DAT_0040f4e0,param_6,0);
    bVar3 = false;
    if ((uVar1 & 0x10) != 0) {
      bVar3 = bVar2;
    }
    if (1 < *piVar4) {
      bVar2 = bVar3;
    }
    if (bVar2) {
      if (0.0 < fVar10) {
        FUN_00146578(param_1 * _DAT_003f4b84,param_2,param_5,1,0);
      }
      if (param_5 < *(byte *)(iVar9 + 0x1f6)) {
        fVar10 = *(float *)((int)lVar6 + 0x30);
        if (fVar10 <= 0.0) {
          iVar8 = *(int *)(iVar9 + 0x1a0);
          goto LAB_00145e8c;
        }
        fVar12 = *(float *)((int)lVar6 + 0x28);
        iVar8 = FUN_001484c8(param_2);
        fVar11 = (float)FUN_001afdb0(*(int *)(iVar9 + 0x1a0) + iVar8 * 0xc);
        if (fVar11 <= fVar12 * (1.0 - fVar10)) {
          if (*(char *)(iVar9 + 0x13b) != '\0') {
            iVar8 = *(int *)(iVar9 + 0x1a0);
            goto LAB_00145e8c;
          }
          lVar5 = FUN_0014c5c8(param_2,4);
          if (lVar5 != 0) {
            FUN_0025d240(param_1,*(undefined4 *)(iVar9 + 0xb4));
          }
        }
      }
    }
  }
  iVar8 = *(int *)(iVar9 + 0x1a0);
LAB_00145e8c:
  lVar5 = FUN_001afd80(iVar8 + param_5 * 0xc,*(undefined4 *)(iVar9 + 0x118));
  if (((*(int *)(iVar9 + 0x1f0) != 0) && (lVar5 != 0)) && (*(int *)((int)lVar5 + 0x54) != 3)) {
    auVar18 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x70));
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x80));
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0x90));
    _vmove(auVar18);
    _vmove(auVar16);
    auVar23 = _vaddbc(in_vf0,auVar16);
    auVar22 = _vaddbc(in_vf0,auVar18);
    _vmove(auVar23);
    _vmove(auVar22);
    auVar20 = _vaddbc(in_vf0,auVar17);
    auVar15 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
    auVar21 = _vaddbc(in_vf0,auVar17);
    _vmove(auVar17);
    auVar7 = _vmulbc(auVar21,auVar15);
    auVar24 = _vaddbc(in_vf0,auVar18);
    auVar13 = _vmulbc(auVar20,auVar15);
    auVar14 = _vadd(auVar13,auVar7);
    _vmove(auVar24);
    auVar19 = _vaddbc(in_vf0,auVar16);
    auVar13._4_4_ = uStack_bc;
    auVar13._0_4_ = uStack_c0;
    auVar13._8_4_ = uStack_b8;
    auVar13._12_4_ = uStack_b4;
    auVar7 = _lqc2(auVar13);
    _vmulabc(auVar20,auVar7);
    _vmaddabc(auVar21,auVar7);
    auVar7 = _vmaddbc(auVar19,auVar7);
    auVar13 = _vmulbc(auVar19,auVar15);
    auVar14 = _vadd(auVar14,auVar13);
    auVar13 = _qmfc2(auVar7._0_4_);
    _sqc2(auVar18);
    auVar14 = _vsub(in_vf0,auVar14);
    _sqc2(auVar16);
    _sqc2(auVar17);
    auVar7._4_4_ = uStack_cc;
    auVar7._0_4_ = uStack_d0;
    auVar7._8_4_ = uStack_c8;
    auVar7._12_4_ = uStack_c4;
    auVar7 = _lqc2(auVar7);
    _sqc2(auVar15);
    _vmulabc(auVar20,auVar7);
    _vmaddabc(auVar21,auVar7);
    _vmaddabc(auVar19,auVar7);
    auVar7 = _vmaddbc(auVar14,in_vf0);
    _sqc2(auVar23);
    _sqc2(auVar22);
    _sqc2(auVar24);
    auVar7 = _qmfc2(auVar7._0_4_);
    _sqc2(auVar20);
    _sqc2(auVar21);
    _sqc2(auVar19);
    _sqc2(auVar14);
    FUN_00148d10(param_2,auVar7._0_8_,auVar13._0_8_);
  }
  return;
}


// ==== FUN_00145fb0 @ 00145fb0 ====

ushort FUN_00145fb0(int param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_001484c8();
  lVar3 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar2 * 0xc,*(undefined4 *)(param_1 + 0x118));
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)((int)lVar3 + 0x5a) >> 0xf ^ 1;
  }
  return uVar1;
}


// ==== FUN_00146000 @ 00146000 ====

void FUN_00146000(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 in_a2_qw [16];
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar10 = _por(in_zero_qw,in_a2_qw);
  iVar7 = 0;
  plVar6 = (long *)param_2;
  fVar11 = *(float *)((int)plVar6 + 0xf4);
  FUN_0014c088(param_2,param_5);
  iVar3 = FUN_001484c8(param_2);
  if (*(char *)((int)plVar6 + 0x1f5) != '\0') {
    auVar13 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _sqc2(auVar13);
    iVar9 = 0;
    iVar8 = 0;
    do {
      lVar5 = FUN_001afd80((int)plVar6[0x34] + iVar8,(int)plVar6[0x23]);
      if (lVar5 == 0) {
LAB_001461c8:
        bVar1 = *(byte *)((int)plVar6 + 0x1f5);
      }
      else {
        iVar4 = FUN_00147988(param_2,iVar7);
        auVar15 = _vaddbc(in_vf0,in_vf0);
        auVar17._8_4_ = in_a3_udw;
        auVar17._0_8_ = param_4;
        auVar17._12_4_ = in_register_0000007c;
        auVar14 = _lqc2(auVar17);
        auVar17 = _sqc2(auVar15);
        auVar15 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x30));
        auVar15 = _vsub(auVar14,auVar15);
        auVar14 = _sqc2(auVar15);
        auVar15 = _vmul(auVar15,auVar15);
        auVar16 = _lqc2(auVar13);
        _vaddabc(auVar15,auVar15);
        auVar15 = _vmaddbc(auVar16,auVar15);
        auVar15 = _qmfc2(auVar15._0_4_);
        if (auVar15._0_4_ <= fVar11 * fVar11) {
          bVar1 = *(byte *)((int)lVar5 + 0x5c);
          bVar2 = true;
          if ((bVar1 == 0) ||
             ((bVar1 != 100 && (lVar5 = FUN_0012d218((float)bVar1 / 100.0,DAT_0040f4d0), lVar5 == 0)
              ))) {
            bVar2 = false;
          }
          if (bVar2) {
            FUN_00147988(param_2,iVar7);
            auVar14 = _lqc2(auVar14);
            auVar14 = _vmul(auVar14,auVar14);
            auVar17 = _lqc2(auVar17);
            _vaddabc(auVar14,auVar14);
            auVar17 = _vmaddbc(auVar17,auVar14);
            auVar17 = _qmfc2(auVar17._0_4_);
            fVar12 = (float)FUN_001afdb0((int)plVar6[0x34] + iVar9);
            if (0.0 < fVar12) {
              FUN_00146578(param_1,param_2,iVar7,30.25 < auVar17._0_4_,1);
            }
          }
          goto LAB_001461c8;
        }
        bVar1 = *(byte *)((int)plVar6 + 0x1f5);
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0xc;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < (int)(uint)bVar1);
  }
  lVar5 = FUN_001afd80((int)plVar6[0x34] + iVar3 * 0xc,(int)plVar6[0x23]);
  bVar2 = true;
  if (lVar5 != 0) {
    fVar11 = (float)FUN_001afdb0((int)plVar6[0x34] + iVar3 * 0xc);
    iVar3 = (int)lVar5;
    bVar1 = *(byte *)(iVar3 + 0x5c);
    if ((bVar1 == 0) ||
       ((bVar1 != 100 && (lVar5 = FUN_0012d218((float)bVar1 / 100.0,DAT_0040f4d0), lVar5 == 0)))) {
      bVar2 = false;
    }
    if ((((bVar2) && (0.0 < *(float *)(iVar3 + 0x30))) &&
        (fVar11 <= *(float *)(iVar3 + 0x28) * (1.0 - *(float *)(iVar3 + 0x30)))) &&
       (*(char *)((int)plVar6 + 0x13b) == '\0')) {
      lVar5 = FUN_0014c5c8(param_2,4);
      _por(in_zero_qw,auVar10);
      if (lVar5 != 0) {
        FUN_0025d510(param_1,*(undefined4 *)((int)plVar6 + 0xb4),param_4);
      }
    }
  }
  if (((*(char *)(DAT_0040f0e0 + 0x2020c) == '\x03') && (*(int *)(DAT_0040f4d0 + 0x3c8) == 5)) &&
     ((lVar5 = *plVar6, lVar5 == -0x6f326d0e4a4aae00 ||
      ((lVar5 == -0x6f326d0e4a48ba00 || (lVar5 == -0x6f326d0e4a47c000)))))) {
    FUN_001b2630(DAT_0040f4d8 + 0x83710,plVar6[0x14]);
  }
  return;
}


// ==== FUN_001463d0 @ 001463d0 ====

void FUN_001463d0(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  param_2 = param_2 * param_2;
  iVar4 = (int)param_3;
  if (*(char *)(iVar4 + 0x13f) == '\0') {
    iVar5 = 0;
    FUN_0014c120();
    if (*(char *)(iVar4 + 0x1f5) != '\0') {
      auVar10 = _vaddbc(in_vf0,in_vf0);
      fVar9 = 0.0;
      auVar10 = _sqc2(auVar10);
      iVar6 = 0;
      do {
        lVar3 = FUN_001afd80(*(int *)(iVar4 + 0x1a0) + iVar6,*(undefined4 *)(iVar4 + 0x118));
        if (lVar3 == 0) {
          uVar1 = (uint)*(byte *)(iVar4 + 0x1f5);
        }
        else {
          iVar2 = FUN_00147988(param_3,iVar5);
          auVar11 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
          auVar12._8_4_ = in_a3_udw;
          auVar12._0_8_ = param_6;
          auVar12._12_4_ = in_register_0000007c;
          auVar12 = _lqc2(auVar12);
          auVar12 = _vsub(auVar12,auVar11);
          auVar12 = _vmul(auVar12,auVar12);
          auVar11 = _lqc2(auVar10);
          _vaddabc(auVar12,auVar12);
          auVar12 = _vmaddbc(auVar11,auVar12);
          auVar12 = _qmfc2(auVar12._0_4_);
          if (auVar12._0_4_ <= param_2) {
            fVar7 = (float)FUN_001afdb0(*(int *)(iVar4 + 0x1a0) + iVar6);
            fVar8 = *(float *)((int)lVar3 + 0x2c);
            if (fVar9 < fVar8) {
              fVar8 = *(float *)((int)lVar3 + 0x28) * (1.0 - fVar8);
              if (fVar7 - param_1 <= fVar8) {
                if (fVar8 < fVar7) {
                  FUN_001ecf80(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_3,lVar3
                              );
                }
                uVar1 = (uint)*(byte *)(iVar4 + 0x1f5);
              }
              else {
                uVar1 = (uint)*(byte *)(iVar4 + 0x1f5);
              }
            }
            else {
              uVar1 = (uint)*(byte *)(iVar4 + 0x1f5);
            }
          }
          else {
            uVar1 = (uint)*(byte *)(iVar4 + 0x1f5);
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < (int)uVar1);
    }
  }
  return;
}


// ==== FUN_00146578 @ 00146578 ====

void FUN_00146578(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar12 = (int)param_2;
  bVar4 = false;
  iVar15 = *(int *)(iVar12 + 0x1a0) + (int)param_3 * 0xc;
  bVar3 = false;
  bVar1 = false;
  if (*(char *)((int)param_3 * 6 + *(int *)(iVar12 + 0x1a8)) == '\0') {
    uVar5 = FUN_001afda8(iVar15);
    iVar6 = FUN_001afd80(iVar15,*(undefined4 *)(iVar12 + 0x118));
    if (((*(ushort *)(iVar6 + 0x5a) & 0x200) == 0) ||
       (lVar8 = FUN_00149b60(param_2,param_3), lVar8 == 0)) {
      iVar6 = FUN_001afd80(iVar15,*(undefined4 *)(iVar12 + 0x118));
      fVar16 = (float)FUN_001afdb0(iVar15);
      lVar8 = FUN_001afcd8(param_1,iVar15);
      if (lVar8 == 0) {
        cVar2 = *(char *)(iVar12 + 0x13d);
      }
      else {
        bVar1 = (*(ushort *)(iVar6 + 0x5a) & 1) != 0;
        if (bVar1) {
          FUN_00149828(param_2,param_3,0);
          FUN_001ed0a0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_2);
        }
        if ((*(ushort *)(iVar6 + 0x5a) & 2) != 0) {
          FUN_00149828(param_2,param_3,1);
        }
        cVar2 = *(char *)(iVar12 + 0x13d);
      }
      if (cVar2 == '\0') {
        fVar17 = *(float *)(iVar6 + 0x2c);
      }
      else if (0.0 < *(float *)(iVar6 + 0x44)) {
        fVar18 = *(float *)(iVar6 + 0x28) * (1.0 - *(float *)(iVar6 + 0x44));
        fVar17 = (float)FUN_001afdb0(iVar15);
        if ((fVar17 <= fVar18) || (lVar8 != 0)) {
          if (fVar18 < fVar16) {
            iVar11 = 0;
            if (*(char *)(iVar12 + 0x1f5) != '\0') {
              iVar14 = 0x1000000;
              iVar13 = 0;
              do {
                iVar7 = FUN_001484c8(param_2);
                if (((iVar11 != iVar7) &&
                    (lVar9 = FUN_001afd80(*(int *)(iVar12 + 0x1a0) + iVar13,
                                          *(undefined4 *)(iVar12 + 0x118)), lVar9 != 0)) &&
                   ((*(ushort *)((int)lVar9 + 0x5a) >> 5 & 1) != 0)) {
                  FUN_001479b8(param_2,iVar11,1,0,1,1,param_5);
                }
                iVar11 = iVar14 >> 0x18;
                iVar14 = iVar14 + 0x1000000;
                iVar13 = iVar13 + 0xc;
              } while (iVar11 < (int)(uint)*(byte *)(iVar12 + 0x1f5));
            }
            FUN_0014c3e0(param_2);
            if (bVar1) {
              fVar17 = *(float *)(iVar6 + 0x2c);
            }
            else {
              bVar1 = true;
              FUN_001ed0a0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_2);
              fVar17 = *(float *)(iVar6 + 0x2c);
            }
          }
          else {
            fVar17 = *(float *)(iVar6 + 0x2c);
          }
        }
        else {
          fVar17 = *(float *)(iVar6 + 0x2c);
        }
      }
      else {
        fVar17 = *(float *)(iVar6 + 0x2c);
      }
      if (0.0 < fVar17) {
        fVar18 = *(float *)(iVar6 + 0x28) * (1.0 - fVar17);
        fVar17 = (float)FUN_001afdb0(iVar15);
        if ((fVar17 <= fVar18) || (lVar8 != 0)) {
          if (fVar18 < fVar16) {
            FUN_00149be8(param_2,param_3,uVar5);
            if (!bVar1) {
              FUN_001ed0a0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),param_2);
            }
            bVar3 = true;
          }
          fVar17 = *(float *)(iVar6 + 0x3c);
        }
        else {
          fVar17 = *(float *)(iVar6 + 0x3c);
        }
      }
      else {
        fVar17 = *(float *)(iVar6 + 0x3c);
      }
      bVar1 = bVar4;
      if (((0.0 < fVar17) && (bVar1 = false, *(int *)(iVar6 + 0x54) != 3)) &&
         (lVar9 = FUN_001484c8(param_2), bVar1 = bVar4, param_3 != lVar9)) {
        fVar18 = *(float *)(iVar6 + 0x28) * (1.0 - *(float *)(iVar6 + 0x3c));
        fVar17 = (float)FUN_001afdb0(iVar15);
        if (((fVar17 <= fVar18) || (bVar1 = false, lVar8 != 0)) && (bVar1 = bVar4, fVar18 < fVar16))
        {
          uVar10 = 0;
          if ((param_5 != 0) || (bVar3)) {
            uVar10 = 1;
          }
          FUN_001479b8(param_2,param_3,1,0,1,0,uVar10);
          bVar1 = true;
        }
      }
      if ((!bVar1) && (0.0 < *(float *)(iVar6 + 0x40))) {
        fVar18 = *(float *)(iVar6 + 0x28) * (1.0 - *(float *)(iVar6 + 0x40));
        fVar17 = (float)FUN_001afdb0(iVar15);
        if (((fVar17 <= fVar18) || (lVar8 != 0)) && (fVar18 < fVar16)) {
          uVar10 = 0;
          if ((param_5 != 0) || (bVar3)) {
            uVar10 = 1;
          }
          FUN_00147a98(param_2,param_3,1,bVar3,!bVar3,0,uVar10);
        }
      }
    }
  }
  return;
}


// ==== FUN_00146a28 @ 00146a28 ====

void FUN_00146a28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = 0;
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  if (*(char *)(iVar2 + 0x1f5) != '\0') {
    iVar3 = 0;
    do {
      fVar4 = (float)FUN_001afdb0(*(int *)(iVar2 + 0x1a0) + iVar3);
      if (0.0 < fVar4) {
        FUN_00146578(0x4e6e6b28,param_1,iVar1,1,0);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < (int)(uint)*(byte *)(iVar2 + 0x1f5));
  }
  (**(code **)(*(int *)(iVar2 + 0x10) + 0x14))
            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x10),param_2);
  return;
}


// ==== FUN_00146af0 @ 00146af0 ====

void FUN_00146af0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00146b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003f4b70)[(int)param_2])();
    return;
  }
  return;
}


// ==== FUN_00146bf8 @ 00146bf8 ====

void FUN_00146bf8(void)

{
  FUN_00165bc8();
  return;
}


// ==== FUN_00146c18 @ 00146c18 ====

undefined4 FUN_00146c18(long *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 1;
  if (*param_1 != -0x6f32553aa2bea000) {
    iVar5 = 0;
    if (*(char *)((int)param_1 + 0x1f5) != '\0') {
      iVar6 = 0;
      do {
        lVar4 = FUN_001afd80((int)param_1[0x34] + iVar6,(int)param_1[0x23]);
        if (lVar4 == 0) {
          bVar1 = *(byte *)((int)param_1 + 0x1f5);
        }
        else {
          uVar2 = *(ushort *)((int)lVar4 + 0x5a);
          if ((uVar2 & 0x800) != 0) {
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            if ((uVar2 & 2) != 0) {
              return 1;
            }
            break;
          }
          bVar1 = *(byte *)((int)param_1 + 0x1f5);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < (int)(uint)bVar1);
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ==== FUN_00146ce0 @ 00146ce0 ====

undefined8
FUN_00146ce0(int param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  int iStack_a0;
  undefined1 (*pauStack_9c) [16];
  int iStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  pauStack_9c = (undefined1 (*) [16])(param_1 + 0x70);
  uStack_90 = (undefined4)param_2;
  uStack_8c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_80 = (undefined4)param_3;
  uStack_7c = (undefined4)((ulong)param_3 >> 0x20);
  if (param_5 == 0) {
    iStack_a0 = *(int *)(param_1 + 0xb8);
    if (iStack_a0 == 0) {
      if ((param_4 & 0x100) == 0) {
        lVar6 = FUN_002639a0(*(undefined4 *)(param_1 + 0x1b8),param_2,param_3,
                             *(undefined2 *)(param_1 + 0x1e8));
        goto LAB_00147058;
      }
      iVar8 = 0;
      if (*(char *)(param_1 + 0x1f6) != '\0') {
        iVar10 = 0;
        do {
          lVar6 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar10,*(undefined4 *)(param_1 + 0x118));
          if (lVar6 == 0) {
            uVar4 = (uint)*(byte *)(param_1 + 0x1f6);
          }
          else if ((*(ushort *)((int)lVar6 + 0x5a) & 0x2000) == 0) {
            iVar7 = 0;
            iVar5 = FUN_001491b8();
            if (iStack_98 < 1) {
              uVar4 = (uint)*(byte *)(param_1 + 0x1f6);
            }
            else {
              uVar1 = *(ushort *)(param_1 + 0x1e8);
              while( true ) {
                lVar6 = FUN_00263b70(*(undefined4 *)(param_1 + 0x1b8),CONCAT44(uStack_8c,uStack_90),
                                     CONCAT44(uStack_7c,uStack_80),
                                     (int)(((uint)uVar1 + iVar5 + iVar7) * 0x10000) >> 0x10);
                if (lVar6 != 0) {
                  return 1;
                }
                iVar7 = iVar7 + 1;
                if (iStack_98 <= iVar7) break;
                uVar1 = *(ushort *)(param_1 + 0x1e8);
              }
              uVar4 = (uint)*(byte *)(param_1 + 0x1f6);
            }
          }
          else {
            uVar4 = (uint)*(byte *)(param_1 + 0x1f6);
          }
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0xc;
        } while (iVar8 < (int)uVar4);
      }
    }
    else {
      auVar11._8_4_ = in_a1_udw;
      auVar11._0_8_ = param_2;
      auVar11._12_4_ = in_register_0000005c;
      auVar13 = _lqc2(auVar11);
      auVar11 = _qmfc2(auVar13._0_4_);
      auVar12._8_4_ = in_a2_udw;
      auVar12._0_8_ = param_3;
      auVar12._12_4_ = in_register_0000006c;
      auVar14 = _lqc2(auVar12);
      auVar12 = _qmfc2(auVar14._0_4_);
      piVar3 = *(int **)(DAT_0040f4d0 + 0x5a90);
      auVar13 = _qmfc2(auVar13._0_4_);
      auVar14 = _qmfc2(auVar14._0_4_);
      piVar3[8] = auVar11._0_4_;
      piVar3[9] = auVar13._4_4_;
      piVar3[10] = auVar13._8_4_;
      piVar3[0xb] = 0;
      *piVar3 = (int)&iStack_a0;
      piVar3[1] = (int)&pauStack_9c;
      piVar3[2] = 1;
      piVar3[3] = 0;
      piVar3[0x34] = 0;
      piVar3[0x37] = 0;
      piVar3[0x14] = 0;
      piVar3[0x3c] = 0;
      piVar3[0x3e] = 0;
      piVar3[5] = 0;
      piVar3[0x3a] = 0;
      piVar3[0xc] = auVar12._0_4_;
      piVar3[0xd] = auVar14._4_4_;
      piVar3[0xe] = auVar14._8_4_;
      piVar3[0xf] = 0;
      piVar3[0x3f] = 0x3f800000;
      piVar3[6] = piVar3[7];
      *(undefined1 *)(piVar3 + 0x42) = 0;
      piVar3[0x40] = 0;
      piVar3[0x41] = 0;
      if ((param_4 & 0x100) == 0) {
        lVar6 = FUN_0033ae68(*(undefined4 *)(DAT_0040f4d0 + 0x5a90));
LAB_00147058:
        if (lVar6 != 0) {
          return 1;
        }
        return 0;
      }
      uVar9 = 0;
      uVar4 = FUN_0033ae40(*(undefined4 *)(DAT_0040f4d0 + 0x5a90));
      if (uVar4 != 0) {
        while( true ) {
          iVar8 = FUN_00149210();
          lVar6 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar8 * 0xc,
                               *(undefined4 *)(param_1 + 0x118));
          uVar9 = uVar9 + 1;
          if ((lVar6 != 0) && ((*(ushort *)((int)lVar6 + 0x5a) & 0x2000) == 0)) break;
          if (uVar4 <= uVar9) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  else {
    iVar8 = 0;
    uStack_88 = in_a1_udw;
    uStack_84 = in_register_0000005c;
    uStack_78 = in_a2_udw;
    uStack_74 = in_register_0000006c;
    if (*(char *)(param_1 + 0x1f5) != '\0') {
      do {
        lVar6 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar8 * 0xc,
                             *(undefined4 *)(param_1 + 0x118));
        if (lVar6 == 0) {
LAB_00146e80:
          uVar4 = (uint)*(byte *)(param_1 + 0x1f5);
        }
        else {
          pauStack_9c = (undefined1 (*) [16])FUN_00147988();
          uVar2 = *(undefined4 *)((int)lVar6 + 0xc0);
          if (((*(ushort *)((int)lVar6 + 0x5a) & 0x2000) == 0) || ((param_4 & 0x100) == 0)) {
            auVar12 = _lqc2(*pauStack_9c);
            _sqc2(auVar12);
            _vmove(auVar12);
            auVar14 = _lqc2(pauStack_9c[1]);
            auVar20 = _vaddbc(in_vf0,auVar14);
            _vmove(auVar20);
            _sqc2(auVar14);
            _vmove(auVar14);
            auVar16 = _vaddbc(in_vf0,auVar12);
            auVar11 = _lqc2(pauStack_9c[2]);
            _vmove(auVar16);
            auVar19 = _vaddbc(in_vf0,auVar11);
            auVar17 = _vaddbc(in_vf0,auVar11);
            _sqc2(auVar11);
            _vmove(auVar11);
            auVar21 = _vaddbc(in_vf0,auVar12);
            _vmove(auVar21);
            auVar13 = _lqc2(pauStack_9c[3]);
            auVar18 = _vaddbc(in_vf0,auVar14);
            auVar11 = _vmulbc(auVar17,auVar13);
            auVar14 = _vmulbc(auVar19,auVar13);
            auVar12 = _vmulbc(auVar18,auVar13);
            auVar11 = _vadd(auVar14,auVar11);
            auVar11 = _vadd(auVar11,auVar12);
            _sqc2(auVar13);
            auVar15 = _vsub(in_vf0,auVar11);
            auVar14._4_4_ = uStack_7c;
            auVar14._0_4_ = uStack_80;
            auVar14._8_4_ = uStack_78;
            auVar14._12_4_ = uStack_74;
            auVar11 = _lqc2(auVar14);
            _vmulabc(auVar19,auVar11);
            _vmaddabc(auVar17,auVar11);
            _vmaddabc(auVar18,auVar11);
            auVar12 = _vmaddbc(auVar15,in_vf0);
            auVar13._4_4_ = uStack_8c;
            auVar13._0_4_ = uStack_90;
            auVar13._8_4_ = uStack_88;
            auVar13._12_4_ = uStack_84;
            auVar11 = _lqc2(auVar13);
            _sqc2(auVar20);
            _vmulabc(auVar19,auVar11);
            _vmaddabc(auVar17,auVar11);
            _vmaddabc(auVar18,auVar11);
            auVar11 = _vmaddbc(auVar15,in_vf0);
            _sqc2(auVar16);
            _sqc2(auVar21);
            auStack_c0 = _sqc2(auVar11);
            auStack_b0 = _sqc2(auVar12);
            _sqc2(auVar19);
            _sqc2(auVar17);
            _sqc2(auVar18);
            _sqc2(auVar15);
            if ((*(int *)(iVar8 * 4 + *(int *)(param_1 + 0x1a4)) == -1) ||
               (lVar6 = FUN_00147140(), lVar6 != 0)) {
              lVar6 = FUN_0027dd60(uVar2,auStack_c0);
              if (lVar6 != 0) {
                return 1;
              }
              goto LAB_00146e80;
            }
            uVar4 = (uint)*(byte *)(param_1 + 0x1f5);
          }
          else {
            uVar4 = (uint)*(byte *)(param_1 + 0x1f5);
          }
        }
        iVar8 = iVar8 + 1;
        if ((int)uVar4 <= iVar8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


// ==== FUN_00147140 @ 00147140 ====

bool FUN_00147140(int param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + param_2 * 0xc,*(undefined4 *)(param_1 + 0x118));
  if ((cGpffff81c1 == '\0') || (*(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4)) == -1)) {
    bVar1 = true;
  }
  else if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_0026f190(param_3,*(undefined8 *)((int)lVar2 + 0xb0));
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


// ==== FUN_001471e0 @ 001471e0 ====

undefined8
FUN_001471e0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
            undefined8 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  int in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 (*pauVar7) [16];
  int iVar8;
  int iVar9;
  undefined8 uVar10;
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
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  float fStack_100;
  int iStack_f0;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  int iStack_c0;
  undefined1 (*apauStack_bc [3]) [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  fVar11 = 2.0;
  apauStack_bc[0] = (undefined1 (*) [16])(param_1 + 0x70);
  uVar10 = 0;
  uStack_b0 = (undefined4)param_2;
  uStack_ac = (undefined4)((ulong)param_2 >> 0x20);
  uStack_a0 = (undefined4)param_3;
  uStack_9c = (undefined4)((ulong)param_3 >> 0x20);
  pauVar7 = (undefined1 (*) [16])param_6;
  *(undefined4 *)pauVar7[2] = 0x40000000;
  if (param_5 == 0) {
    iStack_c0 = *(int *)(param_1 + 0xb8);
    if (iStack_c0 == 0) {
      uVar10 = FUN_00263c58(*(undefined4 *)(param_1 + 0x1b8),param_2,param_3,
                            *(undefined2 *)(param_1 + 0x1e8),param_6);
    }
    else {
      auVar12._8_4_ = in_a1_udw;
      auVar12._0_8_ = param_2;
      auVar12._12_4_ = in_register_0000005c;
      auVar14 = _lqc2(auVar12);
      auVar12 = _qmfc2(auVar14._0_4_);
      auVar13._8_4_ = in_a2_udw;
      auVar13._0_8_ = param_3;
      auVar13._12_4_ = in_register_0000006c;
      auVar15 = _lqc2(auVar13);
      auVar13 = _qmfc2(auVar15._0_4_);
      piVar6 = *(int **)(DAT_0040f4d0 + 0x5a90);
      auVar14 = _qmfc2(auVar14._0_4_);
      auVar15 = _qmfc2(auVar15._0_4_);
      piVar6[1] = (int)apauStack_bc;
      *piVar6 = (int)&iStack_c0;
      piVar6[2] = 1;
      piVar6[3] = 0;
      piVar6[0x34] = 0;
      piVar6[0x37] = 0;
      piVar6[0x14] = 0;
      piVar6[0x3c] = 0;
      piVar6[0x3e] = 0;
      piVar6[5] = 0;
      piVar6[0x3a] = 0;
      piVar6[8] = auVar12._0_4_;
      piVar6[9] = auVar14._4_4_;
      piVar6[10] = in_a1_udw;
      piVar6[0xb] = 0;
      piVar6[0xc] = auVar13._0_4_;
      piVar6[0xd] = auVar15._4_4_;
      piVar6[0xe] = auVar15._8_4_;
      piVar6[0xf] = 0;
      piVar6[0x3f] = 0x3f800000;
      piVar6[6] = piVar6[7];
      *(undefined1 *)(piVar6 + 0x42) = 0;
      piVar6[0x40] = 0;
      piVar6[0x41] = 0;
      lVar5 = FUN_0033aa98(*(undefined4 *)(DAT_0040f4d0 + 0x5a90));
      uVar10 = 0;
      if (lVar5 != 0) {
        piVar6 = (int *)lVar5;
        iVar8 = piVar6[5];
        iVar9 = piVar6[6];
        iVar3 = piVar6[7];
        uVar10 = 1;
        *(int *)*pauVar7 = piVar6[4];
        *(int *)(*pauVar7 + 4) = iVar8;
        *(int *)(*pauVar7 + 8) = iVar9;
        *(int *)(*pauVar7 + 0xc) = iVar3;
        iVar8 = piVar6[9];
        iVar9 = piVar6[10];
        iVar3 = piVar6[0xb];
        *(int *)pauVar7[1] = piVar6[8];
        *(int *)(pauVar7[1] + 4) = iVar8;
        *(int *)(pauVar7[1] + 8) = iVar9;
        *(int *)(pauVar7[1] + 0xc) = iVar3;
        *(int *)pauVar7[2] = piVar6[0x10];
        iVar8 = piVar6[0x30];
        uVar4 = *(uint *)(*(int *)(*piVar6 + 0x40) + 0x24);
        *(undefined4 *)(pauVar7[2] + 8) = 0;
        pauVar7[2][0xc] = (~(byte)(-1 << (uVar4 & 0x1f)) & (byte)iVar8) - 1;
      }
    }
  }
  else {
    iVar8 = 0;
    iStack_a8 = in_a1_udw;
    uStack_a4 = in_register_0000005c;
    uStack_98 = in_a2_udw;
    uStack_94 = in_register_0000006c;
    if (*(char *)(param_1 + 0x1f5) != '\0') {
      do {
        iVar9 = iVar8 + 1;
        lVar5 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar8 * 0xc,
                             *(undefined4 *)(param_1 + 0x118));
        if (lVar5 == 0) {
LAB_00147434:
          uVar4 = (uint)*(byte *)(param_1 + 0x1f5);
        }
        else {
          apauStack_bc[0] = (undefined1 (*) [16])FUN_00147988();
          iVar3 = 1;
          do {
            bVar1 = iVar3 != -1;
            iVar3 = iVar3 + -1;
          } while (bVar1);
          uVar2 = *(undefined4 *)((int)lVar5 + 0xc0);
          auVar13 = _lqc2(*apauStack_bc[0]);
          _sqc2(auVar13);
          _vmove(auVar13);
          auVar15 = _lqc2(apauStack_bc[0][1]);
          auVar21 = _vaddbc(in_vf0,auVar15);
          _vmove(auVar21);
          _sqc2(auVar15);
          _vmove(auVar15);
          auVar17 = _vaddbc(in_vf0,auVar13);
          auVar12 = _lqc2(apauStack_bc[0][2]);
          _vmove(auVar17);
          auVar20 = _vaddbc(in_vf0,auVar12);
          auVar18 = _vaddbc(in_vf0,auVar12);
          _sqc2(auVar12);
          _vmove(auVar12);
          auVar22 = _vaddbc(in_vf0,auVar13);
          _vmove(auVar22);
          auVar14 = _lqc2(apauStack_bc[0][3]);
          auVar19 = _vaddbc(in_vf0,auVar15);
          auVar12 = _vmulbc(auVar18,auVar14);
          auVar15 = _vmulbc(auVar20,auVar14);
          auVar13 = _vmulbc(auVar19,auVar14);
          auVar12 = _vadd(auVar15,auVar12);
          auVar12 = _vadd(auVar12,auVar13);
          _sqc2(auVar14);
          auVar16 = _vsub(in_vf0,auVar12);
          auVar15._4_4_ = uStack_9c;
          auVar15._0_4_ = uStack_a0;
          auVar15._8_4_ = uStack_98;
          auVar15._12_4_ = uStack_94;
          auVar12 = _lqc2(auVar15);
          _vmulabc(auVar20,auVar12);
          _vmaddabc(auVar18,auVar12);
          _vmaddabc(auVar19,auVar12);
          auVar13 = _vmaddbc(auVar16,in_vf0);
          auVar14._4_4_ = uStack_ac;
          auVar14._0_4_ = uStack_b0;
          auVar14._8_4_ = iStack_a8;
          auVar14._12_4_ = uStack_a4;
          auVar12 = _lqc2(auVar14);
          _sqc2(auVar21);
          _vmulabc(auVar20,auVar12);
          _vmaddabc(auVar18,auVar12);
          _vmaddabc(auVar19,auVar12);
          auVar12 = _vmaddbc(auVar16,in_vf0);
          _sqc2(auVar17);
          _sqc2(auVar22);
          auStack_e0 = _sqc2(auVar12);
          auStack_d0 = _sqc2(auVar13);
          _sqc2(auVar20);
          _sqc2(auVar18);
          _sqc2(auVar19);
          _sqc2(auVar16);
          if ((*(int *)(iVar8 * 4 + *(int *)(param_1 + 0x1a4)) == -1) ||
             (lVar5 = FUN_00147140(), lVar5 != 0)) {
            lVar5 = FUN_0027d1d8(uVar2,auStack_e0,auStack_150);
            if (lVar5 == 1) {
              if (fStack_100 < fVar11) {
                auVar14 = _lqc2(auStack_150);
                uVar10 = 1;
                auVar13 = _lqc2(apauStack_bc[0][2]);
                auVar12 = _lqc2(apauStack_bc[0][3]);
                auVar17 = _lqc2(*apauStack_bc[0]);
                auVar16 = _lqc2(apauStack_bc[0][1]);
                auVar15 = _lqc2(auStack_140);
                _vmulabc(auVar17,auVar14);
                _vmaddabc(auVar16,auVar14);
                _vmaddabc(auVar13,auVar14);
                auVar12 = _vmaddbc(auVar12,in_vf0);
                auVar12 = _sqc2(auVar12);
                *pauVar7 = auVar12;
                auVar14 = _lqc2(apauStack_bc[0][2]);
                auVar13 = _lqc2(*apauStack_bc[0]);
                auVar12 = _lqc2(apauStack_bc[0][1]);
                _vmulabc(auVar13,auVar15);
                _vmaddabc(auVar12,auVar15);
                auVar12 = _vmaddbc(auVar14,auVar15);
                auVar12 = _sqc2(auVar12);
                pauVar7[1] = auVar12;
                pauVar7[2][0xc] = (char)iVar8;
                *(float *)pauVar7[2] = fStack_100;
                *(undefined4 *)(pauVar7[2] + 8) = *(undefined4 *)(iStack_f0 + 4);
                fVar11 = fStack_100;
              }
              goto LAB_00147434;
            }
            uVar4 = (uint)*(byte *)(param_1 + 0x1f5);
          }
          else {
            uVar4 = (uint)*(byte *)(param_1 + 0x1f5);
          }
        }
        iVar8 = iVar9;
      } while (iVar9 < (int)uVar4);
    }
  }
  return uVar10;
}


// ==== FUN_001475f0 @ 001475f0 ====

undefined8 FUN_001475f0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  int iStack_30;
  int aiStack_2c [3];
  
  iStack_30 = *(int *)(param_1 + 0xb8);
  iVar1 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5a94) + 0x30);
  if (iStack_30 == 0) {
    uVar3 = FUN_00263e80(*(undefined4 *)(param_1 + 0x1b8),param_2,param_4,
                         *(undefined2 *)(param_1 + 0x1e8));
  }
  else {
    aiStack_2c[0] = param_1 + 0x70;
    iVar2 = *(int *)(DAT_0040f4d0 + 0x5a94);
    *(int *)(iVar2 + 0x38) = (int)param_2;
    *(int **)(iVar2 + 4) = aiStack_2c;
    *(undefined4 *)(iVar2 + 8) = 1;
    *(int *)(iVar2 + 0x3c) = (int)param_4;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(int **)iVar2 = &iStack_30;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar2 = FUN_0033b688(*(undefined4 *)(DAT_0040f4d0 + 0x5a94));
    iVar5 = 0;
    if (iVar2 < 1) {
      uVar3 = 0;
    }
    else {
      pfVar4 = (float *)(iVar1 + 0x2e0);
      do {
        iVar5 = iVar5 + 1;
        if (*pfVar4 < 0.0) {
          return 1;
        }
        pfVar4 = pfVar4 + 0x108;
      } while (iVar5 < iVar2);
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ==== FUN_001476d8 @ 001476d8 ====

void FUN_001476d8(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
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
  undefined1 auStack_140 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  
  iVar13 = 1;
  do {
    iVar10 = (int)param_1;
    iVar11 = 0;
    iVar12 = 0;
    if (*(char *)(iVar10 + 0x1f5) != '\0') {
      iVar7 = *(int *)(iVar10 + 0x1a4);
      while( true ) {
        iVar7 = *(int *)(iVar11 * 4 + iVar7);
        iVar2 = FUN_00149120(param_1,iVar7);
        if (iVar2 == iVar13) {
          lVar3 = FUN_001afd80(*(int *)(iVar10 + 0x1a0) + iVar11 * 0xc,
                               *(undefined4 *)(iVar10 + 0x118));
          iVar2 = *(int *)(iVar7 * 4 + *(int *)(*(int *)(iVar10 + 0x118) + 0x58));
          if (lVar3 != 0) {
            pauVar8 = (undefined1 (*) [16])(iVar7 * 0x40 + *(int *)(iVar10 + 0x198));
            auVar18 = _lqc2(*pauVar8);
            pauVar9 = (undefined1 (*) [16])(*(int *)(iVar10 + 0x19c) + iVar7 * 0x40);
            auVar14 = _sqc2(auVar18);
            *pauVar9 = auVar14;
            auVar17 = _lqc2(pauVar8[1]);
            auVar14 = _sqc2(auVar17);
            pauVar9[1] = auVar14;
            uVar4 = *(undefined4 *)(pauVar8[2] + 4);
            uVar5 = *(undefined4 *)(pauVar8[2] + 8);
            uVar6 = *(undefined4 *)(pauVar8[2] + 0xc);
            *(undefined4 *)pauVar9[2] = *(undefined4 *)pauVar8[2];
            *(undefined4 *)(pauVar9[2] + 4) = uVar4;
            *(undefined4 *)(pauVar9[2] + 8) = uVar5;
            *(undefined4 *)(pauVar9[2] + 0xc) = uVar6;
            uVar4 = *(undefined4 *)(pauVar8[3] + 4);
            uVar5 = *(undefined4 *)(pauVar8[3] + 8);
            uVar6 = *(undefined4 *)(pauVar8[3] + 0xc);
            *(undefined4 *)pauVar9[3] = *(undefined4 *)pauVar8[3];
            *(undefined4 *)(pauVar9[3] + 4) = uVar4;
            *(undefined4 *)(pauVar9[3] + 8) = uVar5;
            *(undefined4 *)(pauVar9[3] + 0xc) = uVar6;
            if (iVar2 == -1) {
              if ((*(int *)(iVar10 + 0x1f0) == 0) || (*(int *)((int)lVar3 + 0x54) == 3)) {
                auVar15 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x80));
                auVar14 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x90));
                auVar16 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x70));
                _vmulabc(auVar16,auVar18);
                _vmaddabc(auVar15,auVar18);
                auVar22 = _vmaddbc(auVar14,auVar18);
                _vmulabc(auVar16,auVar17);
                _vmaddabc(auVar15,auVar17);
                auVar15 = _vmaddbc(auVar14,auVar17);
                _sqc2(auVar22);
                _sqc2(auVar15);
                auVar18 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x80));
                auVar17 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x90));
                auVar14 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0xa0));
              }
              else {
                auVar15 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x150));
                auVar14 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x160));
                auVar16 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x140));
                _vmulabc(auVar16,auVar18);
                _vmaddabc(auVar15,auVar18);
                auVar22 = _vmaddbc(auVar14,auVar18);
                _vmulabc(auVar16,auVar17);
                _vmaddabc(auVar15,auVar17);
                auVar15 = _vmaddbc(auVar14,auVar17);
                _sqc2(auVar22);
                _sqc2(auVar15);
                auVar18 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x150));
                auVar17 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x160));
                auVar14 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0x170));
              }
              auVar21 = _lqc2(pauVar9[2]);
              auVar19 = _lqc2(pauVar9[3]);
              _vmulabc(auVar16,auVar21);
              _vmaddabc(auVar18,auVar21);
              auVar21 = _vmaddbc(auVar17,auVar21);
              _vmulabc(auVar16,auVar19);
              _vmaddabc(auVar18,auVar19);
              _vmaddabc(auVar17,auVar19);
              auVar14 = _vmaddbc(auVar14,in_vf0);
              auStack_140 = _sqc2(auVar15);
            }
            else {
              pauVar8 = (undefined1 (*) [16])(iVar2 * 0x40 + *(int *)(iVar10 + 0x19c));
              auVar16 = _lqc2(*pauVar8);
              auVar15 = _lqc2(pauVar8[1]);
              auVar14 = _lqc2(pauVar8[2]);
              _vmulabc(auVar16,auVar18);
              _vmaddabc(auVar15,auVar18);
              auVar22 = _vmaddbc(auVar14,auVar18);
              _vmulabc(auVar16,auVar17);
              _vmaddabc(auVar15,auVar17);
              auVar15 = _vmaddbc(auVar14,auVar17);
              _sqc2(auVar22);
              _sqc2(auVar15);
              auVar20 = _lqc2(pauVar8[3]);
              auVar19 = _lqc2(*pauVar8);
              auVar16 = _lqc2(pauVar8[1]);
              auVar18 = _lqc2(pauVar8[2]);
              auVar17 = _lqc2(pauVar9[2]);
              auVar14 = _lqc2(pauVar9[3]);
              _vmulabc(auVar19,auVar17);
              _vmaddabc(auVar16,auVar17);
              auVar21 = _vmaddbc(auVar18,auVar17);
              _vmulabc(auVar19,auVar14);
              _vmaddabc(auVar16,auVar14);
              _vmaddabc(auVar18,auVar14);
              auVar14 = _vmaddbc(auVar20,in_vf0);
              auStack_140 = _sqc2(auVar15);
            }
            auVar17 = _sqc2(auVar21);
            auVar18 = _sqc2(auVar14);
            _sqc2(auVar21);
            _sqc2(auVar14);
            _sqc2(auVar22);
            _sqc2(auVar15);
            _sqc2(auVar21);
            _sqc2(auVar14);
            _sqc2(auVar22);
            auVar14 = _sqc2(auVar22);
            *pauVar9 = auVar14;
            *(undefined4 *)pauVar9[1] = auStack_140._0_4_;
            *(undefined4 *)(pauVar9[1] + 4) = auStack_140._4_4_;
            *(undefined4 *)(pauVar9[1] + 8) = auStack_140._8_4_;
            *(undefined4 *)(pauVar9[1] + 0xc) = auStack_140._12_4_;
            uStack_130 = auVar17._0_4_;
            uStack_12c = auVar17._4_4_;
            uStack_128 = auVar17._8_4_;
            uStack_124 = auVar17._12_4_;
            *(undefined4 *)pauVar9[2] = uStack_130;
            *(undefined4 *)(pauVar9[2] + 4) = uStack_12c;
            *(undefined4 *)(pauVar9[2] + 8) = uStack_128;
            *(undefined4 *)(pauVar9[2] + 0xc) = uStack_124;
            uStack_120 = auVar18._0_4_;
            uStack_11c = auVar18._4_4_;
            uStack_118 = auVar18._8_4_;
            uStack_114 = auVar18._12_4_;
            *(undefined4 *)pauVar9[3] = uStack_120;
            *(undefined4 *)(pauVar9[3] + 4) = uStack_11c;
            *(undefined4 *)(pauVar9[3] + 8) = uStack_118;
            *(undefined4 *)(pauVar9[3] + 0xc) = uStack_114;
            _sqc2(auVar22);
          }
          iVar12 = iVar12 + 1;
          bVar1 = *(byte *)(iVar10 + 0x1f5);
        }
        else {
          bVar1 = *(byte *)(iVar10 + 0x1f5);
        }
        iVar11 = iVar11 + 1;
        if ((int)(uint)bVar1 <= iVar11) break;
        iVar7 = *(int *)(iVar10 + 0x1a4);
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar12 != 0);
  return;
}


// ==== FUN_00147988 @ 00147988 ====

int FUN_00147988(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4));
  if (-1 < iVar1) {
    return *(int *)(param_1 + 0x19c) + iVar1 * 0x40;
  }
  return param_1 + 0x70;
}


// ==== FUN_001479b8 @ 001479b8 ====

void FUN_001479b8(undefined8 param_1,int param_2,long param_3,long param_4,long param_5,long param_6
                 ,long param_7)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  param_2 = param_2 * 6;
  iVar3 = (int)param_1;
  pcVar1 = (char *)(param_2 + *(int *)(iVar3 + 0x1a8));
  if ((*pcVar1 == '\0') || ((pcVar1[1] == '\0' && (param_3 != 0)))) {
    *pcVar1 = '\x01';
    iVar2 = param_2 + *(int *)(iVar3 + 0x1a8);
    *(bool *)(iVar2 + 3) = *(char *)(iVar2 + 3) != '\0' || param_5 != 0;
    iVar2 = param_2 + *(int *)(iVar3 + 0x1a8);
    *(bool *)(iVar2 + 2) = *(char *)(iVar2 + 2) != '\0' || param_4 != 0;
    iVar2 = param_2 + *(int *)(iVar3 + 0x1a8);
    *(bool *)(iVar2 + 1) = *(char *)(iVar2 + 1) != '\0' || param_3 != 0;
    iVar2 = param_2 + *(int *)(iVar3 + 0x1a8);
    *(bool *)(iVar2 + 4) = *(char *)(iVar2 + 4) != '\0' || param_6 != 0;
    param_2 = param_2 + *(int *)(iVar3 + 0x1a8);
    *(bool *)(param_2 + 5) = *(char *)(param_2 + 5) != '\0' || param_7 != 0;
    FUN_00147a98(param_1);
  }
  return;
}


// ==== FUN_00147a98 @ 00147a98 ====

void FUN_00147a98(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1;
  iVar2 = *(int *)(param_2 * 4 + *(int *)(iVar5 + 0x1a4));
  if (*(char *)(iVar5 + 0x1f5) == '\0') {
    return;
  }
  iVar3 = *(int *)(iVar5 + 0x1a4);
  do {
    iVar3 = *(int *)(iVar4 * 4 + iVar3);
    if (iVar3 == -1) {
LAB_00147b4c:
      bVar1 = *(byte *)(iVar5 + 0x1f5);
    }
    else {
      if (*(int *)(iVar3 * 4 + *(int *)(*(int *)(iVar5 + 0x118) + 0x58)) == iVar2) {
        FUN_001479b8(param_1,iVar4,param_3,param_4,param_5,param_6,param_7);
        goto LAB_00147b4c;
      }
      bVar1 = *(byte *)(iVar5 + 0x1f5);
    }
    iVar4 = iVar4 + 1;
    if ((int)(uint)bVar1 <= iVar4) {
      return;
    }
    iVar3 = *(int *)(iVar5 + 0x1a4);
  } while( true );
}


// ==== FUN_00147b90 @ 00147b90 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00147b90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 auStack_f0 [4];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  iVar6 = 0;
  iVar5 = (int)param_1;
  if (*(char *)(iVar5 + 0x1f5) != '\0') {
    iVar4 = *(int *)(iVar5 + 0x1ac);
    while( true ) {
      pcVar3 = (char *)(iVar6 * 2 + iVar4);
      if ((*pcVar3 != '\0') &&
         (iVar4 = *(int *)(*(int *)(iVar5 + 0x118) + 0x48) + (uint)(byte)pcVar3[1] * 0xd0,
         iVar4 != 0)) {
        uStack_c0 = *(undefined4 *)(iVar4 + 0x38);
        uVar1 = *(undefined4 *)(iVar5 + 0x124);
        iVar2 = FUN_00147988(param_1,iVar6);
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
        auVar8 = _qmtc2(0x3dcccccd);
        fVar7 = *(float *)(iVar4 + 0x34);
        auVar8 = _vsubbc(auVar9,auVar8);
        _vmove(auVar9);
        auVar8 = _vaddbc(in_vf0,auVar8);
        if ((fVar7 <= 0.0) || (_lqc2(auStack_e0), ((uint)fVar7 & 0x7f800000) < 0x37800001)) {
          fVar7 = 0.01;
          _lqc2(auStack_e0);
        }
        auVar9 = _vsubbc(in_vf0,in_vf0);
        auVar11 = _qmtc2(fVar7);
        auVar10 = _vmove(auVar9);
        _sqc2(auVar9);
        auVar9 = _vaddbc(auVar10,auVar11);
        _sqc2(auVar9);
        auVar8 = _vadd(in_vf0,auVar8);
        auStack_e0 = _sqc2(auVar8);
        uStack_d0 = (undefined4)_DAT_004432c0;
        uStack_cc = (undefined4)((ulong)_DAT_004432c0 >> 0x20);
        uStack_c8 = DAT_004432c8;
        uStack_c4 = DAT_004432cc;
        if (*(int *)(iVar5 + 0x1f0) == 0) {
          auStack_f0[0] = 1;
        }
        else {
          auStack_f0[0] = 4;
        }
        uStack_bc = uVar1;
        FUN_0012c118(param_2,auStack_f0);
      }
      iVar6 = iVar6 + 1;
      if ((int)(uint)*(byte *)(iVar5 + 0x1f5) <= iVar6) break;
      iVar4 = *(int *)(iVar5 + 0x1ac);
    }
  }
  return;
}


// ==== FUN_00147d28 @ 00147d28 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00147d28(undefined8 param_1,ulong param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  iVar10 = (int)param_1;
  cVar1 = *(char *)(param_3 + 5);
  cVar2 = *(char *)(param_3 + 2);
  cVar3 = *(char *)(param_3 + 3);
  cVar4 = *(char *)(param_3 + 4);
  if ((long)(ulong)*(byte *)(iVar10 + 0x1f6) <= (long)param_2) {
    return;
  }
  lVar7 = FUN_001afda8(*(int *)(iVar10 + 0x1a0) + (int)param_2 * 0xc);
  if (lVar7 == -1) {
    return;
  }
  lVar7 = FUN_0025cda0(DAT_0040f4cc,auStack_d0,3);
  if (lVar7 == 0) {
    return;
  }
  lVar7 = FUN_001291c0(DAT_0040f4d0,0,param_1);
  if (lVar7 == 0) {
    return;
  }
  iVar5 = *(int *)(iVar10 + 0x110);
  if (iVar5 == 0) {
    uVar19 = *(undefined4 *)(iVar10 + 0x124);
  }
  else if ((*(int *)(iVar5 + 0x14) == -1) && (*(int *)(iVar5 + 0x10) == -1)) {
    uVar19 = *(undefined4 *)(iVar10 + 0x124);
  }
  else {
    FUN_0014c548(lVar7);
    uVar19 = *(undefined4 *)(iVar10 + 0x124);
  }
  FUN_0014c088(lVar7,uVar19);
  iVar6 = FUN_00151e60(lVar7);
  iVar9 = (int)lVar7;
  iVar5 = *(int *)(iVar9 + 0xb4);
  if (iVar5 != 0) {
    FUN_0025dba8(iVar5);
    *(undefined4 *)(*(int *)(iVar5 + 0x34) + 0x18) = 9;
  }
  if ((*(ushort *)(iVar6 + 0x5a) & 0x80) == 0) {
    lVar8 = *(long *)(iVar6 + 0x10);
  }
  else {
    if (iVar5 != 0) {
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0xa0));
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
      auVar11 = _vsub(auVar11,auVar12);
      auStack_c0 = _sqc2(auVar11);
      auVar11 = _lqc2(_DAT_004432c0);
      auVar12 = _qmtc2(0xc1200000);
      auVar14 = _lqc2(auStack_c0);
      _vopmula(auVar14,auVar11);
      auVar11 = _vopmsub(auVar11,auVar14);
      auVar11 = _vmulbc(auVar11,auVar12);
      auStack_b0 = _sqc2(auVar14);
      auVar11 = _qmfc2(auVar11._0_4_);
      FUN_0025d910(*(undefined4 *)(iVar9 + 0xb4),auVar11._0_8_);
      auVar11 = _lqc2(auStack_b0);
      if (cVar2 != '\0') {
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar11 = _vmul(auVar11,auVar11);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar12,auVar11);
        auVar11 = _qmfc2(auVar11._0_4_);
        auVar14 = _vmove(auVar12);
        auVar12 = _lqc2(auStack_c0);
        if (2.3283064e-10 <= auVar11._0_4_) {
          auVar13 = _qmtc2(0);
          auVar11 = _vmul(auVar12,auVar12);
          auVar15 = _lqc2(auStack_c0);
          _vaddabc(auVar11,auVar11);
          auVar11 = _vmaddbc(auVar14,auVar11);
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar11);
          uVar19 = _vwaitq();
          _vmulq(auVar15,uVar19);
          auVar11 = _vaddbc(in_vf0,auVar13);
          auVar11 = _vadd(auVar12,auVar11);
          auVar11 = _sqc2(auVar11);
          *(undefined1 (*) [16])(iVar9 + 0xa0) = auVar11;
        }
      }
      if (cVar3 != '\0') {
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar10 + 0xa0));
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
        auVar14 = _vaddbc(in_vf0,in_vf0);
        auVar13 = _vsub(auVar12,auVar11);
        auVar11 = _vmul(auVar13,auVar13);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar14,auVar11);
        auVar12 = _vmove(auVar12);
        auVar11 = _qmfc2(auVar11._0_4_);
        auVar14 = _vmove(auVar14);
        if (auVar11._0_4_ < 2.3283064e-10) {
          lVar8 = *(long *)(iVar6 + 0x10);
          goto LAB_0014801c;
        }
        auVar11 = _vmul(auVar13,auVar13);
        auVar15 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
        auVar15 = _vsub(auVar15,auVar12);
        _vaddabc(auVar11,auVar11);
        auVar12 = _vmaddbc(auVar14,auVar11);
        auVar17 = _lqc2(*(undefined1 (*) [16])(iVar9 + 0xa0));
        auVar11 = _vmul(auVar15,auVar15);
        auVar16 = _qmtc2(0x3e99999a);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar12);
        uVar19 = _vwaitq();
        auVar12 = _vmulq(auVar13,uVar19);
        auVar18 = _vadd(auVar12,auVar17);
        _vaddabc(auVar11,auVar11);
        auVar11 = _vmaddbc(auVar14,auVar11);
        auVar12 = _vaddbc(auVar17,auVar16);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar11);
        uVar19 = _vwaitq();
        auVar11 = _vmulq(auVar15,uVar19);
        auVar13 = _vaddbc(in_vf0,auVar12);
        auVar12 = _qmfc2(auVar11._0_4_);
        auVar14 = _qmfc2(auVar18._0_4_);
        auVar11 = _qmfc2(auVar13._0_4_);
        FUN_001519c8(0x42c80000,0x40000000,lVar7,auVar11._0_8_,auVar12._0_8_,auVar14._0_8_,
                     *(undefined4 *)(iVar9 + 0x124),1);
      }
    }
    lVar8 = *(long *)(iVar6 + 0x10);
  }
LAB_0014801c:
  if ((lVar8 != 0) && ((cVar1 != '\0' || ((*(ushort *)(iVar6 + 0x5a) & 0x4000) == 0)))) {
    FUN_001b69e0(DAT_0040f4d8 + 0x66290,lVar8,lVar7,0,8);
  }
  if (cVar4 == '\0') {
    *(undefined1 *)(iVar9 + 0x13d) = 0;
  }
  else {
    *(int *)(iVar9 + 0x120) = (int)param_2 * 0x70 + *(int *)(iVar10 + 0x1b4);
    FUN_00152930(lVar7,*(undefined4 *)(iVar10 + 0x11c),*(undefined8 *)(iVar6 + 0x60));
  }
  FUN_001b3818(DAT_0040f4d8 + 0x33c40,param_1,param_2 & 0xff,lVar7);
  FUN_00147b90(param_1,lVar7);
  return;
}


// ==== FUN_001480e8 @ 001480e8 ====

void FUN_001480e8(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auStack_50 [16];
  
  iVar17 = (int)param_1;
  if ((long)param_2 < (long)(ulong)*(byte *)(iVar17 + 0x1f6)) {
    uVar8 = FUN_00148438();
    iVar10 = FUN_00147988(param_1,param_2);
    FUN_001df908(auStack_50,*(undefined8 *)(iVar10 + 0x30),uVar8);
    FUN_001b38f8(DAT_0040f4d8 + 0x33c40,param_1,param_2 & 0xff);
    FUN_001482c8(param_1,param_2);
    bVar1 = *(byte *)(iVar17 + 0x1f5);
  }
  else {
    bVar1 = *(byte *)(iVar17 + 0x1f5);
  }
  iVar10 = (int)param_2 + 1;
  if (iVar10 < (int)(uint)bVar1) {
    do {
      iVar11 = iVar10 + 1;
      puVar4 = (undefined4 *)(iVar10 * 0x60 + *(int *)(iVar17 + 0x194));
      puVar5 = puVar4 + -0x18;
      puVar9 = puVar4 + 0x18;
      do {
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];
        uVar8 = *(undefined8 *)(puVar4 + 4);
        uVar15 = puVar4[6];
        uVar16 = puVar4[7];
        *puVar5 = *puVar4;
        puVar5[1] = uVar12;
        puVar5[2] = uVar13;
        puVar5[3] = uVar14;
        puVar5[4] = (int)uVar8;
        puVar5[5] = (int)((ulong)uVar8 >> 0x20);
        puVar5[6] = uVar15;
        puVar5[7] = uVar16;
        puVar4 = puVar4 + 8;
        puVar5 = puVar5 + 8;
      } while (puVar4 != puVar9);
      puVar6 = (undefined8 *)(iVar10 * 0xc + *(int *)(iVar17 + 0x1a0));
      *(undefined8 *)((int)puVar6 + -0xc) = *puVar6;
      *(undefined4 *)((int)puVar6 + -4) = *(undefined4 *)(puVar6 + 1);
      puVar4 = (undefined4 *)(iVar10 * 4 + *(int *)(iVar17 + 0x1a4));
      puVar4[-1] = *puVar4;
      puVar7 = (undefined1 *)(iVar10 * 2 + *(int *)(iVar17 + 0x1ac));
      puVar7[-2] = *puVar7;
      puVar7[-1] = puVar7[1];
      iVar10 = iVar11;
    } while (iVar11 < (int)(uint)*(byte *)(iVar17 + 0x1f5));
    cVar3 = *(char *)(iVar17 + 0x1ef);
  }
  else {
    cVar3 = *(char *)(iVar17 + 0x1ef);
  }
  if (param_2 == (long)cVar3) {
    cVar2 = -1;
LAB_00148244:
    *(char *)(iVar17 + 0x1ef) = cVar2;
  }
  else {
    cVar2 = *(char *)(iVar17 + 0x1ef) + -1;
    if ((long)param_2 < (long)cVar3) goto LAB_00148244;
  }
  if (param_2 == (long)*(char *)(iVar17 + 0x1ee)) {
    cVar3 = -1;
  }
  else {
    cVar3 = *(char *)(iVar17 + 0x1ee) + -1;
    if ((long)*(char *)(iVar17 + 0x1ee) <= (long)param_2) goto LAB_0014826c;
  }
  *(char *)(iVar17 + 0x1ee) = cVar3;
LAB_0014826c:
  if (*(int *)(iVar17 + 0x1b8) == 0) {
    cVar3 = *(char *)(iVar17 + 500);
  }
  else {
    FUN_002638b0(*(int *)(iVar17 + 0x1b8),param_2 & 0xff,*(undefined2 *)(iVar17 + 0x1e8));
    cVar3 = *(char *)(iVar17 + 500);
  }
  *(char *)(iVar17 + 500) = cVar3 + -1;
  *(char *)(iVar17 + 0x1f5) = *(char *)(iVar17 + 0x1f5) + -1;
  if ((long)param_2 < (long)(ulong)*(byte *)(iVar17 + 0x1f6)) {
    *(byte *)(iVar17 + 0x1f6) = *(byte *)(iVar17 + 0x1f6) - 1;
  }
  return;
}


// ==== FUN_001482c8 @ 001482c8 ====

void FUN_001482c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  iVar14 = 0;
  iVar3 = FUN_001491b8(param_1,param_2,0);
  iVar15 = (int)param_1;
  uVar16 = (uint)*(byte *)((int)param_2 * 0xc + *(int *)(iVar15 + 0x1a0) + 8);
  if (*(int *)(iVar15 + 0xb8) != 0) {
    iVar14 = *(int *)(*(int *)(iVar15 + 0xb8) + 0x40);
  }
  iVar13 = 0;
  if (uVar16 != 0) {
    iVar4 = *(int *)(iVar15 + 0xb8);
    while( true ) {
      if (iVar4 == 0) {
        FUN_00263630(*(undefined4 *)(iVar15 + 0x1b8),
                     (int)(((uint)*(ushort *)(iVar15 + 0x1e8) + iVar3) * 0x10000) >> 0x10);
      }
      else {
        iVar4 = *(int *)(iVar14 + 0x28);
        uVar7 = iVar3 + 1;
        if ((int)uVar7 < iVar4) {
          do {
            puVar6 = (undefined8 *)((uVar7 & 0xffff) * 0x60 + *(int *)(iVar14 + 0x30));
            puVar5 = (undefined4 *)((uVar7 - 1 & 0xffff) * 0x60 + *(int *)(iVar14 + 0x30));
            uVar7 = uVar7 + 1;
            puVar8 = puVar6 + 0xc;
            do {
              uVar1 = *puVar6;
              uVar9 = *(undefined4 *)(puVar6 + 1);
              uVar10 = *(undefined4 *)((int)puVar6 + 0xc);
              uVar2 = puVar6[2];
              uVar11 = *(undefined4 *)(puVar6 + 3);
              uVar12 = *(undefined4 *)((int)puVar6 + 0x1c);
              *puVar5 = (int)uVar1;
              puVar5[1] = (int)((ulong)uVar1 >> 0x20);
              puVar5[2] = uVar9;
              puVar5[3] = uVar10;
              puVar5[4] = (int)uVar2;
              puVar5[5] = (int)((ulong)uVar2 >> 0x20);
              puVar5[6] = uVar11;
              puVar5[7] = uVar12;
              puVar6 = puVar6 + 4;
              puVar5 = puVar5 + 8;
            } while (puVar6 != puVar8);
            iVar4 = *(int *)(iVar14 + 0x28);
          } while ((int)uVar7 < iVar4);
        }
        *(int *)(iVar14 + 0x28) = iVar4 + -1;
        (**(code **)(*(int *)(iVar14 + 0x20) + 0x18))
                  (iVar14 + *(short *)(*(int *)(iVar14 + 0x20) + 0x14));
      }
      iVar13 = iVar13 + 1;
      if ((int)uVar16 <= iVar13) break;
      iVar4 = *(int *)(iVar15 + 0xb8);
    }
  }
  *(undefined1 *)((int)param_2 * 0xc + *(int *)(iVar15 + 0x1a0) + 8) = 0;
  return;
}


// ==== FUN_00148438 @ 00148438 ====

undefined1 FUN_00148438(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_001484c8();
  lVar3 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar2 * 0xc,*(undefined4 *)(param_1 + 0x118));
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)((int)lVar3 + 0xc0);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(**(int **)(iVar2 + 0x24) + 4);
    }
  }
  return uVar1;
}


// ==== FUN_00148498 @ 00148498 ====

int FUN_00148498(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + param_2 * 0xc,*(undefined4 *)(param_1 + 0x118));
  return iVar1 + 0x90;
}


// ==== FUN_001484c8 @ 001484c8 ====

int FUN_001484c8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0x1f5) != 0) {
    piVar2 = *(int **)(param_1 + 0x1a4);
    do {
      if (*piVar2 == -1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x1f5));
  }
  return -1;
}


// ==== FUN_00148508 @ 00148508 ====

int FUN_00148508(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_2 & 0xff) * 4 + *(int *)(param_1 + 0x1a4));
  if (iVar1 != -1) {
    return *(int *)(param_1 + 0x19c) + iVar1 * 0x40;
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    return param_1 + 0x140;
  }
  return param_1 + 0x70;
}


// ==== FUN_00148550 @ 00148550 ====

void FUN_00148550(float param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 in_vuI;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  
  if (*(char *)(param_2 + 0x1ea) != '\0') {
    if (0.0 < *(float *)(param_2 + 0x1d0)) {
      fVar6 = *(float *)(param_2 + 0x1d0) * param_1;
      fVar6 = *(float *)(param_2 + 0x1c4) + fVar6 + fVar6;
      *(float *)(param_2 + 0x1c4) = fVar6;
      uVar1 = FUN_00291f58(fVar6 * 6.2831855);
      uVar1 = FUN_0029d5b0(uVar1);
      uVar1 = FUN_002914d0(uVar1,0x4010000000000000);
      uVar2 = FUN_00291f58(*(undefined4 *)(param_2 + 0x1d0));
      uVar1 = FUN_002914d0(uVar1,uVar2);
      fVar6 = (float)FUN_00291c68(uVar1);
      *(float *)(param_2 + 0x1d0) = *(float *)(param_2 + 0x1d0) - param_1 / 0.9;
    }
    else {
      *(undefined4 *)(param_2 + 0x1c4) = 0;
      fVar6 = 0.0;
    }
    if (0.0 < *(float *)(param_2 + 0x1e0)) {
      fVar5 = *(float *)(param_2 + 0x1e0) * param_1;
      fVar5 = *(float *)(param_2 + 0x1d4) + fVar5 + fVar5;
      *(float *)(param_2 + 0x1d4) = fVar5;
      uVar1 = FUN_00291f58(fVar5 * 6.2831855);
      uVar1 = FUN_0029d5b0(uVar1);
      uVar1 = FUN_002914d0(uVar1,0x4018000000000000);
      uVar2 = FUN_00291f58(*(undefined4 *)(param_2 + 0x1e0));
      uVar1 = FUN_002914d0(uVar1,uVar2);
      fVar5 = (float)FUN_00291c68(uVar1);
      *(float *)(param_2 + 0x1e0) = *(float *)(param_2 + 0x1e0) - param_1 / 0.9;
    }
    else {
      *(undefined4 *)(param_2 + 0x1d4) = 0;
      fVar5 = 0.0;
    }
    if (0.0 < *(float *)(param_2 + 0x1e4)) {
      fVar4 = *(float *)(param_2 + 0x1e4) - param_1 / 0.3;
      *(float *)(param_2 + 0x1e4) = fVar4;
      if (fVar4 <= 0.0) {
        *(undefined4 *)(param_2 + 0x1e4) = 0;
        *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x1cc);
        *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_2 + 0x1dc);
      }
      fVar4 = *(float *)(param_2 + 0x1d8);
    }
    else {
      fVar4 = *(float *)(param_2 + 0x1d8);
    }
    auVar18 = _qmtc2(0);
    fVar3 = 1.0 - *(float *)(param_2 + 0x1e4);
    auVar8 = _vmaxbc(in_vf0,in_vf0);
    _lqc2(auStack_1a0);
    _lqc2(auStack_190);
    auVar7 = _qmtc2((fVar6 + *(float *)(param_2 + 0x1c8) +
                             fVar3 * (*(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1c8))) *
                    0.017453292);
    auVar7 = _vaddbc(in_vf0,auVar7);
    auVar9 = _qmtc2(-(fVar5 + fVar4 + fVar3 * (*(float *)(param_2 + 0x1dc) - fVar4)) * 0.017453292);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar7 = _vabs(auVar7);
    _ctc2(0x3fc90fdb);
    _vnop();
    auVar9 = _vsubi(auVar9,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar7,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar8,in_vuI);
    _vmaddai(auVar8,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar7,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar7 = _vmsubi(auVar8,in_vuI);
    auVar9 = _vabs(auVar9);
    auVar7 = _vabs(auVar7);
    _ctc2(0xbe22f983);
    _vnop();
    _vmulai(auVar9,in_vuI);
    _ctc2(0x4b400000);
    _vnop();
    _vmsubai(auVar8,in_vuI);
    _vmaddai(auVar8,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar9,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar8 = _vmsubi(auVar8,in_vuI);
    _ctc2(0x3e800000);
    _vnop();
    auVar7 = _vsubi(auVar7,in_vuI);
    auVar8 = _vabs(auVar8);
    auVar12 = _vmul(auVar7,auVar7);
    _ctc2(0xc2992661);
    _vnop();
    auVar10 = _vmuli(auVar7,in_vuI);
    auVar16 = _vmul(auVar12,auVar12);
    _ctc2(0x3e800000);
    _vnop();
    auVar9 = _vsubi(auVar8,in_vuI);
    auVar15 = _vmul(auVar16,auVar16);
    auVar10 = _vmul(auVar10,auVar12);
    _ctc2(0xc2255de0);
    _vnop();
    auVar13 = _vmuli(auVar7,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar11 = _vmuli(auVar7,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar8 = _vmuli(auVar7,in_vuI);
    auVar14 = _vmul(auVar9,auVar9);
    _vmula(auVar13,auVar12);
    _vmadda(auVar10,auVar16);
    _ctc2(0x40c90fda);
    _vmadda(auVar11,auVar16);
    _vmaddai(auVar7,in_vuI);
    auVar7 = _vmadd(auVar8,auVar15);
    _ctc2(0xc2992661);
    _vnop();
    auVar10 = _vmuli(auVar9,in_vuI);
    auVar12 = _vmul(auVar14,auVar14);
    _ctc2(0xc2255de0);
    _vnop();
    auVar15 = _vmuli(auVar9,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar13 = _vmuli(auVar9,in_vuI);
    auVar8 = _vmul(auVar12,auVar12);
    auVar11 = _vmul(auVar10,auVar14);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar10 = _vmuli(auVar9,in_vuI);
    _vmula(auVar15,auVar14);
    _vmadda(auVar11,auVar12);
    _ctc2(0x40c90fda);
    _vmadda(auVar13,auVar12);
    _vmaddai(auVar9,in_vuI);
    auVar10 = _vmadd(auVar10,auVar8);
    _lqc2(auStack_140);
    auVar8 = _vsub(in_vf0,auVar7);
    auVar9 = _vaddbc(in_vf0,auVar7);
    auVar11 = _vaddbc(in_vf0,auVar8);
    _lqc2(auStack_130);
    auVar8 = _vaddbc(in_vf0,auVar18);
    auVar14 = _vaddbc(in_vf0,auVar18);
    _sqc2(auVar8);
    _vmove(auVar9);
    _vmove(auVar8);
    auVar15 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar11);
    auVar19 = _vaddbc(in_vf0,auVar10);
    auVar16 = _vaddbc(in_vf0,auVar7);
    _vmove(auVar14);
    auVar17 = _vaddbc(in_vf0,auVar10);
    auVar7 = _pextlw(0,0x3f800000);
    auVar8 = _vsub(in_vf0,auVar10);
    _vmove(auVar19);
    auVar13 = _vaddbc(in_vf0,auVar8);
    auVar8 = _pextlw(0,auVar7._0_8_);
    _sqc2(auVar9);
    _sqc2(auVar11);
    auVar7 = _pextlw(0x3f800000,0);
    _vmove(auVar15);
    auVar9 = _vadd(in_vf0,in_vf0);
    _vmove(auVar16);
    auVar11 = _vaddbc(in_vf0,auVar18);
    _vmove(auVar17);
    auVar12 = _vaddbc(in_vf0,auVar18);
    auVar8 = _qmtc2(auVar8._0_4_);
    auVar10 = _vaddbc(in_vf0,auVar10);
    auVar7 = _pextlw(0,auVar7._0_8_);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar14);
    _vmulabc(auVar8,auVar11);
    _vmaddabc(auVar13,auVar11);
    auVar15 = _vmaddbc(auVar10,auVar11);
    _vmulabc(auVar8,auVar12);
    _vmaddabc(auVar13,auVar12);
    auVar14 = _vmaddbc(auVar10,auVar12);
    _sqc2(auVar19);
    auVar7 = _qmtc2(auVar7._0_4_);
    _sqc2(auVar11);
    _vmulabc(auVar8,auVar7);
    _vmaddabc(auVar13,auVar7);
    auVar18 = _vmaddbc(auVar10,auVar7);
    _vmulabc(auVar8,auVar9);
    _vmaddabc(auVar13,auVar9);
    _vmaddabc(auVar10,auVar9);
    auVar16 = _vmaddbc(auVar9,in_vf0);
    _sqc2(auVar12);
    _sqc2(auVar9);
    _sqc2(auVar9);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar9);
    _sqc2(auVar11);
    _sqc2(auVar12);
    _sqc2(auVar9);
    _sqc2(auVar8);
    _sqc2(auVar8);
    _sqc2(auVar13);
    _sqc2(auVar17);
    _sqc2(auVar10);
    _sqc2(auVar9);
    _sqc2(auVar9);
    _sqc2(auVar13);
    _sqc2(auVar10);
    _sqc2(auVar8);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar18);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar18);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar18);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar18);
    _sqc2(auVar16);
    _sqc2(auVar15);
    _sqc2(auVar14);
    _sqc2(auVar18);
    _sqc2(auVar16);
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x80));
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x90));
    _vmulabc(auVar9,auVar15);
    _vmaddabc(auVar8,auVar15);
    auVar12 = _vmaddbc(auVar7,auVar15);
    _vmulabc(auVar9,auVar14);
    _vmaddabc(auVar8,auVar14);
    auVar13 = _vmaddbc(auVar7,auVar14);
    _sqc2(auVar12);
    _sqc2(auVar13);
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
    auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x80));
    auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x90));
    _vmulabc(auVar9,auVar18);
    _vmaddabc(auVar8,auVar18);
    auVar11 = _vmaddbc(auVar7,auVar18);
    _vmulabc(auVar9,auVar16);
    _vmaddabc(auVar8,auVar16);
    _vmaddabc(auVar7,auVar16);
    auVar8 = _vmaddbc(auVar10,in_vf0);
    _sqc2(auVar11);
    _sqc2(auVar8);
    auVar7 = _sqc2(auVar12);
    *(undefined1 (*) [16])(param_2 + 0x140) = auVar7;
    auVar7 = _sqc2(auVar13);
    *(undefined1 (*) [16])(param_2 + 0x150) = auVar7;
    auVar7 = _sqc2(auVar11);
    *(undefined1 (*) [16])(param_2 + 0x160) = auVar7;
    _sqc2(auVar8);
    _sqc2(auVar12);
    _sqc2(auVar13);
    _sqc2(auVar11);
    _sqc2(auVar8);
    _sqc2(auVar12);
    _sqc2(auVar13);
    _sqc2(auVar11);
    _sqc2(auVar8);
    _sqc2(auVar12);
    _sqc2(auVar13);
    _sqc2(auVar11);
    _sqc2(auVar8);
    _sqc2(auVar12);
    _sqc2(auVar13);
    _sqc2(auVar11);
    if (((*(float *)(param_2 + 0x1d0) <= 0.0) && (*(float *)(param_2 + 0x1e0) <= 0.0)) &&
       (*(float *)(param_2 + 0x1e4) <= 0.0)) {
      *(undefined1 *)(param_2 + 0x1ea) = 0;
    }
  }
  return;
}


// ==== FUN_00148be0 @ 00148be0 ====

void FUN_00148be0(undefined8 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined1 in_zero_qw [16];
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_38;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(((param_2 << 0x18) >> 0x16) + *(int *)(iVar5 + 0x1a4));
  iVar3 = FUN_001484c8();
  iVar3 = FUN_001afd80(*(int *)(iVar5 + 0x1a0) + iVar3 * 0xc,*(undefined4 *)(iVar5 + 0x118));
  auVar6 = _qmtc2(0x40a00000);
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 * 0x40 + *(int *)(iVar5 + 0x198) + 0x30));
  auVar9 = _vsub(auVar9,auVar8);
  auVar6 = _vmulbc(auVar10,auVar6);
  auVar8 = _qmtc2(0x41200000);
  auVar6 = _sqc2(auVar6);
  auVar8 = _vmulbc(auVar10,auVar8);
  auVar4 = _qmfc2(auVar9._0_4_);
  auVar8 = _qmfc2(auVar8._0_4_);
  uStack_38 = auVar6._8_4_;
  fVar2 = uStack_38;
  auVar6 = _sqc2(auVar9);
  auVar9 = _pextlw(0,0);
  auVar10 = _qmfc2(auVar10._0_4_);
  uStack_38 = auVar6._8_4_;
  auVar6 = _pextlw(0x3d4ccccd,auVar9._0_8_);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x170));
  auVar6 = _qmtc2(auVar6._0_4_);
  auVar6 = _vsub(auVar7,auVar6);
  *(float *)(iVar5 + 0x1cc) = *(float *)(iVar5 + 0x1cc) - auVar8._0_4_ / auVar4._0_4_;
  auVar8 = _pextlw(0xffffffffbf800000,auVar9._0_8_);
  auVar6 = _sqc2(auVar6);
  *(undefined1 (*) [16])(iVar5 + 0x170) = auVar6;
  *(float *)(iVar5 + 0x1dc) = *(float *)(iVar5 + 0x1dc) + fVar2 / uStack_38;
  auVar6 = _por(in_zero_qw,auVar8);
  *(undefined4 *)(iVar5 + 0x1e4) = 0x3f800000;
  FUN_00148d10(param_1,auVar10._0_8_,auVar6._0_8_);
  return;
}


// ==== FUN_00148d10 @ 00148d10 ====

void FUN_00148d10(int param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 in_a2_qw [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  uStack_8c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_90 = (undefined4)param_2;
  auVar6 = _por(in_zero_qw,in_a2_qw);
  uStack_88 = in_a1_udw;
  uStack_84 = in_register_0000005c;
  iVar1 = FUN_001484c8();
  lVar3 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + iVar1 * 0xc,*(undefined4 *)(param_1 + 0x118));
  auVar8._4_4_ = uStack_8c;
  auVar8._0_4_ = uStack_90;
  auVar8._8_4_ = uStack_88;
  auVar8._12_4_ = uStack_84;
  auVar8 = _lqc2(auVar8);
  if (lVar3 != 0) {
    auVar8 = _qmfc2(auVar8._0_4_);
    auVar10 = _lqc2(*(undefined1 (*) [16])((int)lVar3 + 0x90));
    auVar9 = _lqc2(*(undefined1 (*) [16])((int)lVar3 + 0xa0));
    auVar10 = _vsub(auVar10,auVar9);
    auVar9 = _vmulbc(auVar10,auVar10);
    auStack_a0 = _sqc2(auVar10);
    auVar9 = _qmfc2(auVar9._0_4_);
    uVar2 = auVar9._0_4_;
    uVar4 = FUN_00291f58(auVar8._0_4_);
    lVar3 = FUN_002919f8(uVar4,0);
    if (lVar3 < 0) {
      uVar4 = FUN_00291468(0,uVar4);
    }
    uVar4 = FUN_002914d0(uVar4,0x4018000000000000);
    uVar5 = FUN_00291f58(uVar2);
    uVar4 = FUN_00291778(uVar4,uVar5);
    fVar7 = (float)FUN_00291c68(uVar4);
    fVar7 = (float)((int)fVar7 * (uint)(0.0 < fVar7));
    auVar8 = _lqc2(auStack_a0);
    auVar8 = _vmulbc(auVar8,auVar8);
    auVar8 = _sqc2(auVar8);
    *(uint *)(param_1 + 0x1d0) =
         (int)fVar7 * (uint)(fVar7 < 1.0) | (uint)(fVar7 >= 1.0) * 0x3f800000;
    uStack_c8 = auVar8._8_4_;
    uVar4 = FUN_00291f58(uStack_88);
    lVar3 = FUN_002919f8(uVar4,0);
    if (lVar3 < 0) {
      uVar4 = FUN_00291468(0,uVar4);
    }
    uVar4 = FUN_002914d0(uVar4,0x4018000000000000);
    uVar5 = FUN_00291f58(uStack_c8);
    uVar4 = FUN_00291778(uVar4,uVar5);
    fVar7 = (float)FUN_00291c68(uVar4);
    fVar7 = (float)((int)fVar7 * (uint)(0.0 < fVar7));
    auVar8 = _pextlw(0,0);
    *(uint *)(param_1 + 0x1e0) =
         (int)fVar7 * (uint)(fVar7 < 1.0) | (uint)(fVar7 >= 1.0) * 0x3f800000;
    auVar8 = _pextlw(0,auVar8._0_8_);
    auVar9 = _por(in_zero_qw,auVar8);
    auVar8 = _por(in_zero_qw,auVar6);
    FUN_0027f470(CONCAT44(uStack_8c,uStack_90),auVar8._0_8_,auVar9._0_8_,&uStack_c0,auStack_b0);
    auVar6._8_4_ = fStack_b8;
    auVar6._0_8_ = uStack_c0;
    auVar6._12_4_ = uStack_b4;
    auVar8 = _lqc2(auVar6);
    auVar8 = _qmfc2(auVar8._0_4_);
    if (auVar8._0_4_ < 0.0) {
      *(undefined4 *)(param_1 + 0x1c4) = 0x3f000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c4) = 0;
    }
    if (fStack_b8 < 0.0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1d4) = 0x3f000000;
    }
    if ((float)((ulong)uStack_c0 >> 0x20) < 0.0) {
      *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x1d4) - 0.5;
      *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) - 0.5;
    }
    auVar9._4_4_ = uStack_8c;
    auVar9._0_4_ = uStack_90;
    auVar9._8_4_ = uStack_88;
    auVar9._12_4_ = uStack_84;
    auVar6 = _lqc2(auVar9);
    auVar8 = _qmtc2(auStack_a0._0_4_);
    auVar8 = _qmfc2(auVar8._0_4_);
    auVar9 = _qmfc2(auVar6._0_4_);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (ABS(auVar9._0_4_) * ((float)auStack_a0._8_4_ / auVar8._0_4_) <= ABS(auVar6._8_4_)) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1e0) = 0;
    }
    *(undefined1 *)(param_1 + 0x1ea) = 1;
  }
  return;
}


// ==== FUN_00148ff8 @ 00148ff8 ====

void FUN_00148ff8(int param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fStack_6c;
  undefined1 auStack_60 [16];
  
  if ((param_2 != 0) && (plVar2 = (long *)param_2, *(int *)((int)plVar2 + 0x54) != 2)) {
    FUN_001df908(auStack_60,*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)((int)plVar2 + 0x4c));
    auVar4 = _lqc2(*(undefined1 (*) [16])(plVar2 + 0x12));
    auVar3 = _lqc2(*(undefined1 (*) [16])(plVar2 + 0x14));
    auVar4 = _vsub(auVar3,auVar4);
    auVar3 = _qmfc2(auVar4._0_4_);
    if (ABS(auVar3._0_4_) <= 0.75) {
      auVar3 = _sqc2(auVar4);
      fStack_6c = auVar3._4_4_;
      if (ABS(fStack_6c) <= 0.75) {
        _sqc2(auVar4);
      }
    }
    if (param_3 == -1) {
      param_1 = param_1 + 0x70;
    }
    else {
      param_1 = *(int *)(param_1 + 0x19c) + param_3 * 0x40;
    }
    if (param_4 == 0) {
      lVar1 = plVar2[1];
    }
    else {
      lVar1 = *plVar2;
    }
    if (lVar1 == 0) {
      FUN_001b79c0(DAT_0040f4d8 + 0x696f0,param_1,*(undefined4 *)((int)plVar2 + 0x4c));
    }
    else {
      FUN_001b7a00(DAT_0040f4d8 + 0x696f0,param_1,lVar1,0);
    }
  }
  return;
}


// ==== FUN_00149120 @ 00149120 ====

int FUN_00149120(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != -1) {
    do {
      param_2 = *(int *)(param_2 * 4 + *(int *)(*(int *)(param_1 + 0x118) + 0x58));
      iVar1 = iVar1 + 1;
    } while (param_2 != -1);
  }
  return iVar1;
}


// ==== FUN_00149178 @ 00149178 ====

int FUN_00149178(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x1f6);
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x118) + 0x48);
    do {
      if (*(byte *)(iVar2 + 0xce) == 0) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar1 = iVar1 + (uint)*(byte *)(iVar2 + 0xce);
      }
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 0xd0;
    } while (uVar3 != 0);
  }
  return iVar1;
}


// ==== FUN_001491b8 @ 001491b8 ====

int FUN_001491b8(int param_1,int param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    pbVar2 = (byte *)(*(int *)(param_1 + 0x1a0) + 8);
    iVar3 = param_2;
    do {
      bVar1 = *pbVar2;
      iVar3 = iVar3 + -1;
      pbVar2 = pbVar2 + 0xc;
      iVar4 = iVar4 + (uint)bVar1;
    } while (iVar3 != 0);
  }
  if (param_3 != 0) {
    *(uint *)param_3 = (uint)*(byte *)(param_2 * 0xc + *(int *)(param_1 + 0x1a0) + 8);
  }
  return iVar4;
}


// ==== FUN_00149210 @ 00149210 ====

int FUN_00149210(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x1f6) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x1a0) + 8);
    do {
      iVar3 = iVar3 + (uint)*pbVar1;
      if (param_2 < iVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 0xc;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x1f6));
  }
  return -1;
}


// ==== FUN_00149260 @ 00149260 ====

void FUN_00149260(undefined8 param_1,uint param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_v0_udw;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 auVar9 [16];
  undefined8 in_t1_udw;
  undefined1 auVar10 [16];
  undefined8 in_t2_udw;
  undefined4 *puVar11;
  int iVar12;
  undefined4 in_s0_udw;
  undefined4 in_register_0000010c;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  
  iVar16 = 0;
  iStack_cc = param_4;
  iVar2 = FUN_001491b8(param_1,param_2,0);
  iVar15 = (int)param_1;
  auVar18._8_8_ = extraout_v0_udw;
  auVar18._0_8_ = 1;
  auVar9._1_7_ = 0;
  auVar9[0] = *(byte *)(param_3 + 0xce);
  auVar9._8_4_ = in_s0_udw;
  auVar9._12_4_ = in_register_0000010c;
  auVar5 = _pmaxw(auVar9,auVar18);
  auVar9 = _pextlw(0,auVar5._0_8_);
  auVar5._8_4_ = in_a1_udw;
  auVar5._0_8_ = (long)(int)(uint)*(byte *)(iStack_cc + 0xce);
  auVar5._12_4_ = in_register_0000005c;
  auVar5 = _pmaxw(auVar5,auVar18);
  iStack_c8 = auVar9._0_4_;
  auVar5 = _pextlw(0,auVar5._0_8_);
  iStack_c4 = auVar5._0_4_;
  if (*(int *)(iVar15 + 0xb8) != 0) {
    iVar16 = *(int *)(*(int *)(iVar15 + 0xb8) + 0x40);
  }
  auVar10._0_8_ = (long)iStack_c4;
  auVar10._8_8_ = in_t1_udw;
  iVar17 = 0;
  lVar14 = 0;
  auVar1._8_8_ = in_t2_udw;
  auVar1._0_8_ = (long)iStack_c8;
  auVar5 = _pminw(auVar10,auVar1);
  uStack_c0 = auVar5._0_4_;
  uStack_bc = auVar5._4_4_;
  uStack_b8 = auVar5._8_4_;
  uStack_b4 = auVar5._12_4_;
  if (0 < iStack_c8) {
    do {
      iVar13 = (int)lVar14;
      if (lVar14 < iStack_c4) {
        if (*(int *)(iVar15 + 0xb8) == 0) {
          FUN_00149d58(param_1,param_2,iStack_cc,lVar14,1,&uStack_130,auStack_e0,&iStack_d0);
          iVar12 = iVar13 + 1 >> 0x1f;
          FUN_002633e0(*(undefined4 *)(iVar15 + 0x1b8),
                       (int)(((uint)*(ushort *)(iVar15 + 0x1e8) + iVar2 + iVar13) * 0x10000) >> 0x10
                       ,param_2 & 0xff);
          lVar3 = (long)iStack_c8;
        }
        else {
          FUN_00149d58(param_1,param_2,iStack_cc,lVar14,0,&uStack_130,auStack_e0,&iStack_d0);
          auVar5 = _lqc2(auStack_e0);
          if (iStack_d0 == 0) {
            auStack_b0 = _sqc2(auVar5);
            puVar11 = (undefined4 *)(*(int *)(iVar16 + 0x30) + (iVar2 + iVar13 & 0xffffU) * 0x60);
            FUN_003342d0(puVar11,4);
            auVar18 = _lqc2(auStack_b0);
            auVar9 = _qmfc2(auVar18._0_4_);
            auVar5 = _sqc2(auVar18);
            auStack_f0._4_4_ = auVar5._4_4_;
            auVar5 = _sqc2(auVar18);
            auStack_f0._8_4_ = auVar5._8_4_;
            auStack_f0._0_4_ = auVar9._0_4_;
            auStack_f0._12_4_ = auVar5._12_4_;
            auVar9 = _lqc2(auStack_f0);
            auVar5 = _qmfc2(auVar9._0_4_);
            puVar11[0x10] = auVar5._0_4_;
            auVar5 = _sqc2(auVar9);
            auStack_f0._4_4_ = auVar5._4_4_;
            puVar11[0x11] = auStack_f0._4_4_;
            auStack_f0 = _sqc2(auVar9);
            puVar11[0x12] = auStack_f0._8_4_;
          }
          else {
            auStack_b0 = _sqc2(auVar5);
            puVar11 = (undefined4 *)(*(int *)(iVar16 + 0x30) + (iVar2 + iVar13 & 0xffffU) * 0x60);
            FUN_003342d0(puVar11,2);
            auVar9 = _lqc2(auStack_b0);
            auVar5 = _sqc2(auVar9);
            auStack_f0._8_4_ = auVar5._8_4_;
            puVar11[0x10] = auStack_f0._8_4_;
            auStack_f0 = _sqc2(auVar9);
            puVar11[0x13] = auStack_f0._4_4_;
          }
          iVar12 = iVar13 + 1 >> 0x1f;
          *puVar11 = uStack_130;
          puVar11[1] = uStack_12c;
          puVar11[2] = uStack_128;
          puVar11[3] = uStack_124;
          puVar11[4] = uStack_120;
          puVar11[5] = uStack_11c;
          puVar11[6] = uStack_118;
          puVar11[7] = uStack_114;
          puVar11[8] = auStack_110._0_4_;
          puVar11[9] = auStack_110._4_4_;
          puVar11[10] = auStack_110._8_4_;
          puVar11[0xb] = auStack_110._12_4_;
          puVar11[0xc] = uStack_100;
          puVar11[0xd] = uStack_fc;
          puVar11[0xe] = uStack_f8;
          puVar11[0xf] = uStack_f4;
          (**(code **)(*(int *)(iVar16 + 0x20) + 0x18))
                    (iVar16 + *(short *)(*(int *)(iVar16 + 0x20) + 0x14));
          lVar3 = (long)iStack_c8;
        }
      }
      else {
        if (*(int *)(iVar15 + 0xb8) == 0) {
          FUN_00263630(*(undefined4 *)(iVar15 + 0x1b8),
                       (int)((((uint)*(ushort *)(iVar15 + 0x1e8) + iVar2 + iVar13) - iVar17) *
                            0x10000) >> 0x10);
        }
        else {
          iVar12 = *(int *)(iVar16 + 0x28);
          uVar7 = ((iVar2 + iVar13) - iVar17) + 1;
          if ((int)uVar7 < iVar12) {
            uVar4 = (ulong)uVar7;
            do {
              pauVar6 = (undefined1 (*) [16])
                        (((uint)uVar4 & 0xffff) * 0x60 + *(int *)(iVar16 + 0x30));
              puVar11 = (undefined4 *)((uVar7 - 1 & 0xffff) * 0x60 + *(int *)(iVar16 + 0x30));
              uVar7 = uVar7 + 1;
              uVar4 = (ulong)(int)uVar7;
              pauVar8 = pauVar6 + 6;
              do {
                auVar5 = *pauVar6;
                auVar9 = pauVar6[1];
                *puVar11 = auVar5._0_4_;
                puVar11[1] = auVar5._4_4_;
                puVar11[2] = auVar5._8_4_;
                puVar11[3] = auVar5._12_4_;
                puVar11[4] = auVar9._0_4_;
                puVar11[5] = auVar9._4_4_;
                puVar11[6] = auVar9._8_4_;
                puVar11[7] = auVar9._12_4_;
                pauVar6 = pauVar6 + 2;
                puVar11 = puVar11 + 8;
              } while (pauVar6 != pauVar8);
              iVar12 = *(int *)(iVar16 + 0x28);
            } while ((long)uVar4 < (long)iVar12);
          }
          *(int *)(iVar16 + 0x28) = iVar12 + -1;
          (**(code **)(*(int *)(iVar16 + 0x20) + 0x18))
                    (iVar16 + *(short *)(*(int *)(iVar16 + 0x20) + 0x14));
        }
        iVar17 = iVar17 + 1;
        iVar12 = iVar13 + 1 >> 0x1f;
        lVar3 = (long)iStack_c8;
      }
      lVar14 = CONCAT44(iVar12,iVar13 + 1);
    } while (lVar14 < lVar3);
  }
  auVar5 = _pextlw(0,CONCAT44(uStack_bc,uStack_c0));
  *(char *)(param_2 * 0xc + *(int *)(iVar15 + 0x1a0) + 8) = auVar5[0];
  if (*(int *)(iVar15 + 0xb4) != 0) {
    FUN_0025ce40(DAT_0040f4cc);
  }
  return;
}


// ==== FUN_00149608 @ 00149608 ====

undefined4 FUN_00149608(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_e0 [64];
  
  iVar5 = (int)param_1;
  uVar8 = 0;
  if ((*(char *)(iVar5 + 0x1ec) == '\0') && (0.9 <= (float)((ulong)param_2[2] >> 0x20))) {
    if (*(int *)(iVar5 + 0x1f0) != 0) {
      FUN_0025cb08(DAT_0040f4cc,*(undefined4 *)(iVar5 + 0xb4));
    }
    iVar6 = 0;
    if (*(char *)(iVar5 + 0x1f5) != '\0') {
      iVar7 = 0;
      do {
        lVar3 = FUN_001afd80(*(int *)(iVar5 + 0x1a0) + iVar7,*(undefined4 *)(iVar5 + 0x118));
        if (lVar3 == 0) {
          bVar1 = *(byte *)(iVar5 + 0x1f5);
        }
        else {
          iVar4 = (int)lVar3;
          if ((*(ushort *)(iVar4 + 0x5a) & 4) == 0) {
            if ((*(ushort *)(iVar4 + 0x5a) & 8) != 0) {
              FUN_00149828(param_1,iVar6,0);
            }
            uVar2 = *(ushort *)(iVar4 + 0x5a);
          }
          else {
            FUN_00149828(param_1,iVar6,1);
            uVar2 = *(ushort *)(iVar4 + 0x5a);
          }
          if ((uVar2 & 0x1000) != 0) {
            uVar8 = 1;
          }
          if (*(long *)(iVar4 + 0x20) != 0) {
            FUN_001b1728(*param_2,param_2[2],auStack_e0);
            FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_e0,*(undefined8 *)(iVar4 + 0x20),1);
          }
          bVar1 = *(byte *)(iVar5 + 0x1f5);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar6 < (int)(uint)bVar1);
    }
    *(undefined1 *)(iVar5 + 0x1ec) = 1;
    return uVar8;
  }
  return 0;
}


// ==== FUN_00149798 @ 00149798 ====

void FUN_00149798(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  FUN_0014c140();
  iVar4 = (int)param_1;
  iVar5 = 0;
  if (*(char *)(iVar4 + 0x1f5) != '\0') {
    do {
      lVar2 = FUN_001afd80(*(int *)(iVar4 + 0x1a0) + iVar5,*(undefined4 *)(iVar4 + 0x118));
      if (lVar2 == 0) {
        bVar1 = *(byte *)(iVar4 + 0x1f5);
      }
      else {
        if ((*(ushort *)((int)lVar2 + 0x5a) & 0x10) != 0) {
          FUN_00149828(param_1,iVar3,0);
        }
        bVar1 = *(byte *)(iVar4 + 0x1f5);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < (int)(uint)bVar1);
  }
  return;
}


// ==== FUN_00149828 @ 00149828 ====

void FUN_00149828(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_2;
  iVar7 = iVar6 * 0xc;
  iVar5 = (int)param_1;
  uVar1 = FUN_001afd80(*(int *)(iVar5 + 0x1a0) + iVar7,*(undefined4 *)(iVar5 + 0x118));
  FUN_00148ff8(param_1,uVar1,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar5 + 0x1a4)),param_3);
  FUN_001afd18(*(int *)(iVar5 + 0x1a0) + iVar7,*(undefined4 *)(iVar5 + 0x118),param_3);
  lVar2 = FUN_001afd80(*(int *)(iVar5 + 0x1a0) + iVar7,*(undefined4 *)(iVar5 + 0x118));
  iVar7 = (int)uVar1;
  if (lVar2 == 0) {
    lVar2 = FUN_001484c8(param_1);
    if (param_2 == lVar2) {
      *(undefined1 *)(iVar5 + 0x1ed) = 2;
      if ((*(ushort *)(iVar7 + 0x5a) & 0x400) != 0) {
        FUN_001b6cf8(DAT_0040f4d8 + 0x66290,param_1,1);
      }
      uVar3 = (ulong)*(byte *)(iVar5 + 0x1f6);
    }
    else {
      FUN_001479b8(param_1,param_2,0,0,0,0,0);
      uVar3 = (ulong)*(byte *)(iVar5 + 0x1f6);
    }
  }
  else {
    if (*(int *)(iVar7 + 0x54) == 3) {
      FUN_00148be0(param_1,(char)param_2);
    }
    *(undefined4 *)(iVar6 * 0x60 + *(int *)(iVar5 + 0x194) + 0x40) =
         *(undefined4 *)((int)lVar2 + 0xc0);
    if ((long)(ulong)*(byte *)(iVar5 + 0x1f6) <= param_2) goto LAB_001499c0;
    FUN_00149260(param_1,param_2,uVar1,lVar2);
    uVar3 = (ulong)*(byte *)(iVar5 + 0x1f6);
  }
  if ((param_2 < (long)uVar3) &&
     (psVar4 = (short *)(iVar6 * 2 + *(int *)(iVar5 + 0x1b0)), *psVar4 != -1)) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*psVar4);
  }
LAB_001499c0:
  if ((*(ushort *)(iVar7 + 0x5a) & 0x800) != 0) {
    if (*(char *)(iVar5 + 0x1f7) == '\0') {
      (**(code **)(*(int *)(iVar5 + 0x10) + 0x14))
                (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x10),0);
      *(undefined1 *)(iVar5 + 0x1f7) = 1;
      iVar6 = *(int *)(iVar5 + 0x114);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x114);
    }
    if ((*(long *)(iVar6 + 0x40) == 0x5b40892788a8cba5) &&
       (*(long *)(iVar7 + 0x60) == -0x6f26c2ddfc5c4e6e)) {
      uVar1 = FUN_001afda8(*(undefined4 *)(iVar5 + 0x1a0),param_1);
      FUN_00149be8(param_1,0,uVar1);
      *(undefined1 *)(iVar5 + 0x1eb) = 1;
    }
  }
  FUN_00175b60(DAT_0040f4d4 + 0xa48,param_1);
  FUN_0017bd10(DAT_0040f4d4 + 0xcd4,param_1);
  FUN_001396f0(DAT_0040f514,param_1);
  return;
}


// ==== FUN_00149ac8 @ 00149ac8 ====

void FUN_00149ac8(int param_1)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 0x1f6) != '\0') {
    iVar2 = *(int *)(param_1 + 0x1b0);
    while( true ) {
      psVar3 = (short *)(iVar4 * 2 + iVar2);
      if (*psVar3 == -1) {
        bVar1 = *(byte *)(param_1 + 0x1f6);
      }
      else {
        FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*psVar3);
        bVar1 = *(byte *)(param_1 + 0x1f6);
      }
      iVar4 = iVar4 + 1;
      if ((int)(uint)bVar1 <= iVar4) break;
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
  }
  return;
}


// ==== FUN_00149b60 @ 00149b60 ====

bool FUN_00149b60(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x1a4);
  piVar2 = piVar3 + param_2;
  uVar1 = (uint)*(byte *)(param_1 + 0x1f5);
  if (*piVar2 == -1) {
    return uVar1 != 1;
  }
  iVar4 = 0;
  if (uVar1 != 0) {
    do {
      if ((*piVar3 != -1) &&
         (*(int *)(*piVar3 * 4 + *(int *)(*(int *)(param_1 + 0x118) + 0x58)) == *piVar2)) {
        return true;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < (int)uVar1);
  }
  return false;
}


// ==== FUN_00149be8 @ 00149be8 ====

void FUN_00149be8(int param_1,int param_2,undefined1 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 * 2 + *(int *)(param_1 + 0x1ac));
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    *(undefined1 *)(param_2 * 2 + *(int *)(param_1 + 0x1ac) + 1) = param_3;
  }
  return;
}


// ==== FUN_00149c18 @ 00149c18 ====

void FUN_00149c18(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -1;
  *(int *)(param_1 + 0x11c) = (int)param_2;
  *(int *)(*(int *)((int)param_2 + 0x40) + 0x84) = param_1;
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x1f5) != 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x118) + 100);
    do {
      if (*piVar3 == -1) {
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x1f5));
  }
  uVar1 = FUN_0014c888(param_2,*(undefined8 *)
                                (*(int *)(*(int *)(param_1 + 0x118) + 0x48) + iVar4 * 0xd0 + 0x60));
  *(undefined1 *)(*(int *)(param_1 + 0x120) + 0x60) = uVar1;
  return;
}


// ==== FUN_00149ca0 @ 00149ca0 ====

bool FUN_00149ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x118);
  iVar6 = -1;
  if (7 < *(byte *)(iVar2 + 0x6a)) {
    return false;
  }
  iVar3 = 0;
  if (*(byte *)(param_1 + 0x1f5) != 0) {
    piVar5 = *(int **)(iVar2 + 100);
    piVar4 = (int *)(*(int *)(iVar2 + 0x48) + 0x54);
    do {
      iVar1 = *piVar4;
      if (*piVar5 == -1) {
        iVar6 = iVar3;
      }
      if (iVar1 == 3) {
        return false;
      }
      if (iVar1 == 6) {
        return false;
      }
      iVar3 = iVar3 + 1;
      if (iVar1 == 5) {
        return false;
      }
      piVar4 = piVar4 + 0x34;
      piVar5 = piVar5 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x1f5));
  }
  iVar2 = *(int *)(iVar2 + 0x48) + iVar6 * 0xd0;
  if ((*(ushort *)(iVar2 + 0x58) & 0x200) == 0) {
    return false;
  }
  return (*(ushort *)(iVar2 + 0x5a) & 0x20) == 0;
}


// ==== FUN_00149d58 @ 00149d58 ====

void FUN_00149d58(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                 undefined1 (*param_7) [16],long param_8)

{
  int iVar1;
  float fVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined4 *puVar7;
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
  undefined4 uVar21;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  float fStack_18c;
  float fStack_188;
  
  puVar7 = (undefined4 *)param_6;
  if (*(char *)(param_3 + 0xce) != '\0') {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar12 = _vsub(in_vf0,in_vf0);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    _sqc2(auVar8);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    _sqc2(auVar9);
    _sqc2(auVar11);
    _sqc2(auVar12);
    pauVar5 = (undefined1 (*) [16])(*(int *)(param_3 + 0xc4) + param_4 * 0x50);
    auVar13 = _vmove(auVar10);
    auVar9 = _lqc2(*pauVar5);
    auVar8 = _vmul(auVar9,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _sqc2(auVar9);
    auVar9 = _vmove(auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar21 = _vwaitq();
    auVar12 = _vmulq(auVar9,uVar21);
    auVar9 = _lqc2(pauVar5[1]);
    auVar8 = _vmul(auVar9,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _sqc2(auVar9);
    auVar9 = _vmove(auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar21 = _vwaitq();
    auVar11 = _vmulq(auVar9,uVar21);
    auVar9 = _lqc2(pauVar5[2]);
    auVar8 = _vmul(auVar9,auVar9);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    _sqc2(auVar9);
    auVar9 = _vmove(auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar8);
    uVar21 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar21);
    auVar8 = _lqc2(pauVar5[3]);
    auStack_210 = _sqc2(auVar12);
    auStack_1c0 = _sqc2(auVar11);
    auStack_1a0 = _sqc2(auVar8);
    auStack_1b0 = _sqc2(auVar9);
    iVar4 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4));
    if (iVar4 != -1) {
      iVar1 = *(int *)(param_1 + 0x118);
      iVar6 = iVar4 * 4;
      pauVar3 = (undefined1 (*) [16])(iVar4 * 0x40 + *(int *)(param_1 + 0x198));
      auVar15 = _lqc2(*pauVar3);
      auVar14 = _lqc2(pauVar3[1]);
      auVar10 = _lqc2(pauVar3[2]);
      _vmulabc(auVar15,auVar12);
      _vmaddabc(auVar14,auVar12);
      auVar16 = _vmaddbc(auVar10,auVar12);
      _vmulabc(auVar15,auVar11);
      _vmaddabc(auVar14,auVar11);
      auVar15 = _vmaddbc(auVar10,auVar11);
      _sqc2(auVar16);
      _sqc2(auVar15);
      auVar14 = _lqc2(pauVar3[3]);
      auVar12 = _lqc2(*pauVar3);
      auVar10 = _lqc2(pauVar3[1]);
      auVar11 = _lqc2(pauVar3[2]);
      _vmulabc(auVar12,auVar9);
      _vmaddabc(auVar10,auVar9);
      auVar17 = _vmaddbc(auVar11,auVar9);
      _vmulabc(auVar12,auVar8);
      _vmaddabc(auVar10,auVar8);
      _vmaddabc(auVar11,auVar8);
      auVar9 = _vmaddbc(auVar14,in_vf0);
      auStack_210 = _sqc2(auVar16);
      auVar8 = _vmove(auVar17);
      auStack_1c0 = _sqc2(auVar15);
      auStack_1b0 = _sqc2(auVar8);
      auStack_1a0 = _sqc2(auVar9);
      _sqc2(auVar8);
      _sqc2(auVar9);
      _sqc2(auVar16);
      _sqc2(auVar15);
      _sqc2(auVar8);
      _sqc2(auVar9);
      if (*(int *)(iVar6 + *(int *)(iVar1 + 0x58)) != -1) {
        iVar4 = *(int *)(iVar1 + 0x58);
        auStack_1d0 = auStack_210;
        while( true ) {
          auVar12 = _lqc2(auStack_1d0);
          auVar10 = _lqc2(auStack_1c0);
          auVar17 = _lqc2(auStack_1b0);
          auVar16 = _lqc2(auStack_1a0);
          pauVar3 = (undefined1 (*) [16])
                    (*(int *)(iVar6 + iVar4) * 0x40 + *(int *)(param_1 + 0x198));
          auVar11 = _lqc2(*pauVar3);
          auVar9 = _lqc2(pauVar3[1]);
          auVar8 = _lqc2(pauVar3[2]);
          _vmulabc(auVar11,auVar12);
          _vmaddabc(auVar9,auVar12);
          auVar14 = _vmaddbc(auVar8,auVar12);
          _vmulabc(auVar11,auVar10);
          _vmaddabc(auVar9,auVar10);
          auVar15 = _vmaddbc(auVar8,auVar10);
          _sqc2(auVar14);
          _sqc2(auVar15);
          auVar10 = _lqc2(pauVar3[3]);
          auVar11 = _lqc2(*pauVar3);
          auVar9 = _lqc2(pauVar3[1]);
          auVar8 = _lqc2(pauVar3[2]);
          _vmulabc(auVar11,auVar17);
          _vmaddabc(auVar9,auVar17);
          auVar12 = _vmaddbc(auVar8,auVar17);
          _vmulabc(auVar11,auVar16);
          _vmaddabc(auVar9,auVar16);
          _vmaddabc(auVar8,auVar16);
          auVar8 = _vmaddbc(auVar10,in_vf0);
          auStack_210 = _sqc2(auVar14);
          auStack_1c0 = _sqc2(auVar15);
          auStack_1b0 = _sqc2(auVar12);
          auStack_1a0 = _sqc2(auVar8);
          _sqc2(auVar12);
          _sqc2(auVar8);
          _sqc2(auVar14);
          _sqc2(auVar15);
          _sqc2(auVar12);
          _sqc2(auVar8);
          iVar6 = *(int *)(iVar6 + *(int *)(iVar1 + 0x58)) * 4;
          if (*(int *)(iVar6 + *(int *)(iVar1 + 0x58)) == -1) break;
          iVar4 = *(int *)(iVar1 + 0x58);
          auStack_1d0 = auStack_210;
        }
      }
    }
    auStack_200 = auStack_1c0;
    auStack_1f0 = auStack_1b0;
    auStack_1e0 = auStack_1a0;
    auVar8 = _lqc2(*pauVar5);
    auVar8 = _vmul(auVar8,auVar8);
    auVar11 = _lqc2(pauVar5[1]);
    _vaddabc(auVar8,auVar8);
    auVar9 = _vmaddbc(auVar13,auVar8);
    auVar11 = _vmul(auVar11,auVar11);
    auVar8 = _lqc2(pauVar5[2]);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar21 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar21);
    _vaddabc(auVar11,auVar11);
    auVar11 = _vmaddbc(auVar13,auVar11);
    auVar8 = _vmul(auVar8,auVar8);
    _vaddabc(auVar8,auVar8);
    auVar8 = _vmaddbc(auVar13,auVar8);
    _vaddbc(in_vf0,auVar9);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar11);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar21 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar21);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar8);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    uVar21 = _vwaitq();
    auVar8 = _vmulq(auVar8,uVar21);
    _vaddbc(in_vf0,auVar9);
    auVar8 = _vaddbc(in_vf0,auVar8);
    if (param_8 != 0) {
      *(undefined4 *)param_8 = *(undefined4 *)pauVar5[4];
    }
    goto LAB_0014a328;
  }
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_3 + 0xa0));
  auVar11 = _qmtc2(0x3f000000);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x90));
  auVar8 = _vsub(auVar8,auVar9);
  auVar8 = _vmulbc(auVar8,auVar11);
  auVar8 = _qmfc2(auVar8._0_4_);
  fVar2 = auVar8._0_4_;
  auVar8 = _qmtc2((uint)(fVar2 < 0.05) * 0x3d4ccccd | (int)fVar2 * (uint)(fVar2 >= 0.05));
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar8 = _sqc2(auVar8);
  fStack_18c = auVar8._4_4_;
  auVar8 = _qmtc2((uint)(fStack_18c < 0.05) * 0x3d4ccccd |
                  (int)fStack_18c * (uint)(fStack_18c >= 0.05));
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar8 = _sqc2(auVar8);
  fStack_188 = auVar8._8_4_;
  iVar4 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x1a4));
  auVar8 = _qmtc2((uint)(fStack_188 < 0.05) * 0x3d4ccccd |
                  (int)fStack_188 * (uint)(fStack_188 >= 0.05));
  auVar8 = _vaddbc(in_vf0,auVar8);
  auVar9 = _vmove(auVar8);
  if (iVar4 == -1) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar13 = _vsub(in_vf0,in_vf0);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auStack_210 = _sqc2(auVar11);
    auStack_200 = _sqc2(auVar10);
    auStack_1f0 = _sqc2(auVar12);
    auStack_1e0 = _sqc2(auVar13);
LAB_00149f40:
    auVar11 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x90));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x118);
    iVar6 = iVar4 * 4;
    pauVar5 = (undefined1 (*) [16])(iVar4 * 0x40 + *(int *)(param_1 + 0x198));
    auStack_210 = *pauVar5;
    auStack_200 = pauVar5[1];
    auStack_1f0 = pauVar5[2];
    auStack_1e0 = pauVar5[3];
    if (*(int *)(iVar6 + *(int *)(iVar1 + 0x58)) != -1) {
      iVar4 = *(int *)(iVar1 + 0x58);
      while( true ) {
        auVar14 = _lqc2(auStack_210);
        auVar13 = _lqc2(auStack_200);
        auVar18 = _lqc2(auStack_1f0);
        auVar17 = _lqc2(auStack_1e0);
        pauVar5 = (undefined1 (*) [16])(*(int *)(iVar6 + iVar4) * 0x40 + *(int *)(param_1 + 0x198));
        auVar12 = _lqc2(*pauVar5);
        auVar10 = _lqc2(pauVar5[1]);
        auVar11 = _lqc2(pauVar5[2]);
        _vmulabc(auVar12,auVar14);
        _vmaddabc(auVar10,auVar14);
        auVar15 = _vmaddbc(auVar11,auVar14);
        _vmulabc(auVar12,auVar13);
        _vmaddabc(auVar10,auVar13);
        auVar16 = _vmaddbc(auVar11,auVar13);
        _sqc2(auVar15);
        _sqc2(auVar16);
        auVar13 = _lqc2(pauVar5[3]);
        auVar12 = _lqc2(*pauVar5);
        auVar10 = _lqc2(pauVar5[1]);
        auVar11 = _lqc2(pauVar5[2]);
        _vmulabc(auVar12,auVar18);
        _vmaddabc(auVar10,auVar18);
        auVar14 = _vmaddbc(auVar11,auVar18);
        _vmulabc(auVar12,auVar17);
        _vmaddabc(auVar10,auVar17);
        _vmaddabc(auVar11,auVar17);
        auVar11 = _vmaddbc(auVar13,in_vf0);
        auStack_210 = _sqc2(auVar15);
        auStack_200 = _sqc2(auVar16);
        auStack_1f0 = _sqc2(auVar14);
        auStack_1e0 = _sqc2(auVar11);
        _sqc2(auVar14);
        _sqc2(auVar11);
        _sqc2(auVar15);
        _sqc2(auVar16);
        _sqc2(auVar14);
        _sqc2(auVar11);
        iVar6 = *(int *)(iVar6 + *(int *)(iVar1 + 0x58)) * 4;
        if (*(int *)(iVar6 + *(int *)(iVar1 + 0x58)) == -1) break;
        iVar4 = *(int *)(iVar1 + 0x58);
      }
      goto LAB_00149f40;
    }
    auVar11 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x90));
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar20 = _vsub(in_vf0,in_vf0);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _lqc2(auStack_210);
  auVar13 = _vsub(auVar11,auVar9);
  auVar11 = _lqc2(auStack_200);
  auVar9 = _lqc2(auStack_1f0);
  auVar12 = _lqc2(auStack_1e0);
  _vmulabc(auVar10,auVar14);
  _vmaddabc(auVar11,auVar14);
  auVar17 = _vmaddbc(auVar9,auVar14);
  _vmulabc(auVar10,auVar15);
  _vmaddabc(auVar11,auVar15);
  auVar18 = _vmaddbc(auVar9,auVar15);
  _vmulabc(auVar10,auVar16);
  _vmaddabc(auVar11,auVar16);
  auVar19 = _vmaddbc(auVar9,auVar16);
  _vmulabc(auVar10,auVar13);
  _vmaddabc(auVar11,auVar13);
  _vmaddabc(auVar9,auVar13);
  auVar9 = _vmaddbc(auVar12,in_vf0);
  _sqc2(auVar20);
  auStack_210 = _sqc2(auVar17);
  auStack_200 = _sqc2(auVar18);
  auStack_1f0 = _sqc2(auVar19);
  auStack_1e0 = _sqc2(auVar9);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar16);
  _sqc2(auVar13);
  _sqc2(auVar17);
  _sqc2(auVar18);
  _sqc2(auVar19);
  _sqc2(auVar9);
  _sqc2(auVar17);
  _sqc2(auVar18);
  _sqc2(auVar19);
  _sqc2(auVar9);
  if (param_8 != 0) {
    *(undefined4 *)param_8 = 0;
  }
LAB_0014a328:
  if (param_5 != 0) {
    auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
    auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
    auVar11 = _lqc2(auStack_210);
    auVar9 = _lqc2(auStack_200);
    _vmulabc(auVar12,auVar11);
    _vmaddabc(auVar13,auVar11);
    auVar15 = _vmaddbc(auVar10,auVar11);
    _vmulabc(auVar12,auVar9);
    _vmaddabc(auVar13,auVar9);
    auVar16 = _vmaddbc(auVar10,auVar9);
    auVar14 = _lqc2(auStack_1f0);
    _sqc2(auVar15);
    _sqc2(auVar16);
    auVar13 = _lqc2(auStack_1e0);
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar11 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
    auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
    _vmulabc(auVar12,auVar14);
    _vmaddabc(auVar11,auVar14);
    auVar14 = _vmaddbc(auVar9,auVar14);
    _vmulabc(auVar12,auVar13);
    _vmaddabc(auVar11,auVar13);
    _vmaddabc(auVar9,auVar13);
    auVar9 = _vmaddbc(auVar10,in_vf0);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar14);
    _sqc2(auVar9);
    _sqc2(auVar14);
    _sqc2(auVar9);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar14);
    _sqc2(auVar9);
    _sqc2(auVar15);
    _sqc2(auVar16);
    _sqc2(auVar14);
    _sqc2(auVar9);
    auStack_210 = _sqc2(auVar15);
    auStack_200 = _sqc2(auVar16);
    auStack_1f0 = _sqc2(auVar14);
    auStack_1e0 = _sqc2(auVar9);
  }
  auVar8 = _sqc2(auVar8);
  *param_7 = auVar8;
  if (param_6 != 0) {
    *puVar7 = auStack_210._0_4_;
    puVar7[1] = auStack_210._4_4_;
    puVar7[2] = auStack_210._8_4_;
    puVar7[3] = auStack_210._12_4_;
    puVar7[0xc] = auStack_1e0._0_4_;
    puVar7[0xd] = auStack_1e0._4_4_;
    puVar7[0xe] = auStack_1e0._8_4_;
    puVar7[0xf] = auStack_1e0._12_4_;
    puVar7[4] = auStack_200._0_4_;
    puVar7[5] = auStack_200._4_4_;
    puVar7[6] = auStack_200._8_4_;
    puVar7[7] = auStack_200._12_4_;
    puVar7[8] = auStack_1f0._0_4_;
    puVar7[9] = auStack_1f0._4_4_;
    puVar7[10] = auStack_1f0._8_4_;
    puVar7[0xb] = auStack_1f0._12_4_;
  }
  return;
}


// ==== FUN_0014a438 @ 0014a438 ====

float FUN_0014a438(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 extraout_v0_udw;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_s6_udw;
  undefined4 in_register_0000016c;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_b0 [16];
  
  fVar9 = 0.0;
  iVar7 = (int)param_1;
  if (*(char *)(iVar7 + 0x1f6) != '\0') {
    iVar1 = 0;
    iVar6 = 0;
    do {
      iVar8 = iVar6 + 1;
      lVar3 = FUN_001afd80(*(int *)(iVar7 + 0x1a0) + iVar1,*(undefined4 *)(iVar7 + 0x118));
      if (lVar3 == 0) {
        uVar2 = (uint)*(byte *)(iVar7 + 0x1f6);
      }
      else {
        auVar10._1_7_ = 0;
        auVar10[0] = *(byte *)((int)lVar3 + 0xce);
        auVar10._8_8_ = extraout_v0_udw;
        lVar5 = 0;
        auVar4._8_4_ = in_s6_udw;
        auVar4._0_8_ = 1;
        auVar4._12_4_ = in_register_0000016c;
        auVar4 = _pmaxw(auVar4,auVar10);
        auVar4 = _pextlw(0,auVar4._0_8_);
        if (auVar4._0_8_ < 1) {
          uVar2 = (uint)*(byte *)(iVar7 + 0x1f6);
        }
        else {
          do {
            FUN_00149d58(param_1,iVar6,lVar3,lVar5,0,0,auStack_b0,0);
            lVar5 = (long)((int)lVar5 + 1);
            auVar11 = _qmtc2(0x40000000);
            auVar10 = _lqc2(auStack_b0);
            auVar10 = _vmulbc(auVar10,auVar11);
            auVar11 = _vmulbc(auVar10,auVar10);
            auStack_b0 = _sqc2(auVar10);
            auVar10 = _vmulbc(auVar11,auVar10);
            auVar10 = _qmfc2(auVar10._0_4_);
            fVar9 = fVar9 + auVar10._0_4_;
          } while (lVar5 < auVar4._0_8_);
          uVar2 = (uint)*(byte *)(iVar7 + 0x1f6);
        }
      }
      iVar1 = iVar8 * 0xc;
      iVar6 = iVar8;
    } while (iVar8 < (int)uVar2);
  }
  return fVar9;
}


// ==== FUN_0014a568 @ 0014a568 ====

float FUN_0014a568(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined8 in_v1_udw;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_80 [16];
  
  lVar1 = FUN_001afd80(*(int *)((int)param_1 + 0x1a0) + (int)param_2 * 0xc,
                       *(undefined4 *)((int)param_1 + 0x118));
  auVar2._8_8_ = extraout_v0_udw;
  auVar2._0_8_ = 1;
  fVar5 = 0.0;
  if (lVar1 != 0) {
    auVar6._1_7_ = 0;
    auVar6[0] = *(byte *)((int)lVar1 + 0xce);
    auVar6._8_8_ = in_v1_udw;
    auVar2 = _pmaxw(auVar2,auVar6);
    lVar3 = 0;
    auVar2 = _pextlw(0,auVar2._0_8_);
    fVar5 = 0.0;
    fVar4 = 0.0;
    if (0 < auVar2._0_8_) {
      do {
        FUN_00149d58(param_1,param_2,lVar1,lVar3,0,0,auStack_80,0);
        lVar3 = (long)((int)lVar3 + 1);
        auVar6 = _qmtc2(0x40000000);
        auVar7 = _lqc2(auStack_80);
        auVar7 = _vmulbc(auVar7,auVar6);
        auVar6 = _vmulbc(auVar7,auVar7);
        auStack_80 = _sqc2(auVar7);
        auVar6 = _vmulbc(auVar6,auVar7);
        auVar6 = _qmfc2(auVar6._0_4_);
        fVar5 = fVar4 + auVar6._0_4_;
        fVar4 = fVar5;
      } while (lVar3 < auVar2._0_8_);
    }
  }
  return fVar5;
}


// ==== FUN_0014a650 @ 0014a650 ====

undefined8 FUN_0014a650(int param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_v0_udw;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_v1_udw;
  
  lVar1 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + param_2 * 0xc,*(undefined4 *)(param_1 + 0x118));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    auVar3._8_8_ = extraout_v0_udw;
    auVar3._0_8_ = 1;
    auVar4._1_7_ = 0;
    auVar4[0] = *(byte *)((int)lVar1 + 0xce);
    auVar4._8_8_ = in_v1_udw;
    auVar4 = _pmaxw(auVar3,auVar4);
    auVar4 = _pextlw(0,auVar4._0_8_);
    uVar2 = auVar4._0_8_;
  }
  return uVar2;
}


// ==== FUN_0014a6a0 @ 0014a6a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a6a0(int param_1,long param_2,long param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16])

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar11 = _vsub(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _sqc2(auVar8);
  *param_4 = auVar8;
  auVar8 = _sqc2(auVar9);
  param_4[1] = auVar8;
  auVar8 = _sqc2(auVar10);
  param_4[2] = auVar8;
  auVar8 = _sqc2(auVar11);
  param_4[3] = auVar8;
  uVar3 = DAT_004432ac;
  uVar14 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  *(int *)*param_5 = (int)_DAT_004432a0;
  *(int *)(*param_5 + 4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(*param_5 + 8) = uVar14;
  *(undefined4 *)(*param_5 + 0xc) = uVar3;
  if ((param_2 < (long)(ulong)*(byte *)(param_1 + 0x1f6)) &&
     (lVar2 = FUN_001afd80(*(int *)(param_1 + 0x1a0) + (int)param_2 * 0xc,
                           *(undefined4 *)(param_1 + 0x118)), lVar2 != 0)) {
    iVar6 = (int)lVar2;
    if ((ulong)*(byte *)(iVar6 + 0xce) == 0) {
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0xa0));
      auVar10 = _qmtc2(0x3f000000);
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
      auVar8 = _vsub(auVar9,auVar8);
      auVar9 = _vmulbc(auVar8,auVar10);
      auVar8 = _sqc2(auVar9);
      *param_5 = auVar8;
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
      auVar8 = _vsub(auVar8,auVar9);
      auVar8 = _sqc2(auVar8);
      param_4[3] = auVar8;
    }
    else if (param_3 < (long)(ulong)*(byte *)(iVar6 + 0xce)) {
      auVar13 = _vaddbc(in_vf0,in_vf0);
      pauVar7 = (undefined1 (*) [16])(*(int *)(iVar6 + 0xc4) + (int)param_3 * 0x50);
      auVar10 = _lqc2(*pauVar7);
      auVar8 = _vmul(auVar10,auVar10);
      _vaddabc(auVar8,auVar8);
      auVar9 = _vmaddbc(auVar13,auVar8);
      auVar8 = _sqc2(auVar10);
      *param_4 = auVar8;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar9);
      uVar14 = _vwaitq();
      auVar12 = _vmulq(auVar10,uVar14);
      auVar10 = _lqc2(pauVar7[1]);
      auVar8 = _vmul(auVar10,auVar10);
      _vaddabc(auVar8,auVar8);
      auVar9 = _vmaddbc(auVar13,auVar8);
      auVar8 = _sqc2(auVar10);
      param_4[1] = auVar8;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar9);
      uVar14 = _vwaitq();
      auVar11 = _vmulq(auVar10,uVar14);
      auVar10 = _lqc2(pauVar7[2]);
      auVar8 = _vmul(auVar10,auVar10);
      _vaddabc(auVar8,auVar8);
      auVar9 = _vmaddbc(auVar13,auVar8);
      auVar8 = _sqc2(auVar10);
      param_4[2] = auVar8;
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar9);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar10,uVar14);
      uVar14 = *(undefined4 *)pauVar7[3];
      uVar3 = *(undefined4 *)(pauVar7[3] + 4);
      uVar4 = *(undefined4 *)(pauVar7[3] + 8);
      uVar5 = *(undefined4 *)(pauVar7[3] + 0xc);
      auVar8 = _sqc2(auVar8);
      param_4[2] = auVar8;
      auVar8 = _sqc2(auVar12);
      *param_4 = auVar8;
      auVar8 = _sqc2(auVar11);
      param_4[1] = auVar8;
      *(undefined4 *)param_4[3] = uVar14;
      *(undefined4 *)(param_4[3] + 4) = uVar3;
      *(undefined4 *)(param_4[3] + 8) = uVar4;
      *(undefined4 *)(param_4[3] + 0xc) = uVar5;
      auVar8 = _lqc2(*pauVar7);
      auVar8 = _vmul(auVar8,auVar8);
      _lqc2(*param_5);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar13,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar8 = _sqc2(auVar8);
      *param_5 = auVar8;
      auVar8 = _lqc2(pauVar7[1]);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar13,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar8 = _sqc2(auVar8);
      *param_5 = auVar8;
      auVar8 = _lqc2(pauVar7[2]);
      auVar8 = _vmul(auVar8,auVar8);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar13,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar8);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      uVar14 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar14);
      auVar8 = _vaddbc(in_vf0,auVar8);
      auVar8 = _sqc2(auVar8);
      *param_5 = auVar8;
    }
  }
  return;
}


// ==== FUN_0014a8d0 @ 0014a8d0 ====

void FUN_0014a8d0(undefined8 param_1)

{
  FUN_00263798(*(undefined4 *)((int)param_1 + 0x1b8),*(undefined2 *)((int)param_1 + 0x1e8),param_1);
  return;
}


// ==== FUN_0014a8f8 @ 0014a8f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a8f8(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0014b8a0();
  *(undefined4 *)(param_1 + 0xc4) = 9;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  *(int *)(param_1 + 0xf0) = (int)_DAT_004432a0;
  *(int *)(param_1 + 0xf4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  return;
}


// ==== FUN_0014a938 @ 0014a938 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a938(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0xf0) = (int)_DAT_004432a0;
  *(int *)(iVar4 + 0xf4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0xf8) = uVar2;
  *(undefined4 *)(iVar4 + 0xfc) = uVar3;
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar1 = _DAT_004432c0;
  *(int *)(iVar4 + 0x100) = (int)_DAT_004432c0;
  *(int *)(iVar4 + 0x104) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x108) = uVar2;
  *(undefined4 *)(iVar4 + 0x10c) = uVar3;
  FUN_0014b8e0(param_1,param_2,0);
  return;
}


// ==== FUN_0014a978 @ 0014a978 ====

void FUN_0014a978(int param_1,undefined4 param_2)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  
  auVar4 = _qmtc2(param_2);
  auVar2 = _vmul(auVar4,auVar4);
  auVar3 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar3;
  auVar3 = _vaddbc(in_vf0,in_vf0);
  _vaddabc(auVar2,auVar2);
  auVar3 = _vmaddbc(auVar3,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar3);
  uVar5 = _vwaitq();
  auVar4 = _vmulq(auVar4,uVar5);
  auVar2 = _qmtc2(0x43fa0000);
  auVar3 = _por(in_zero_qw,*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar4 = _vmulbc(auVar4,auVar2);
  auVar2 = _qmtc2(auVar3._0_4_);
  auVar2 = _vadd(auVar2,auVar4);
  auVar2 = _qmfc2(auVar2._0_4_);
  lVar1 = FUN_0012ae58(DAT_0040f4d0,auVar3._0_8_,auVar2._0_8_,1,0,1,auStack_60);
  if (lVar1 == 0) {
    fStack_40 = 500.0;
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  else {
    fStack_40 = fStack_40 * 500.0;
    *(undefined1 *)(param_1 + 0x114) = 1;
    *(undefined4 *)(param_1 + 0x100) = uStack_50;
    *(undefined4 *)(param_1 + 0x104) = uStack_4c;
    *(undefined4 *)(param_1 + 0x108) = uStack_48;
    *(undefined4 *)(param_1 + 0x10c) = uStack_44;
  }
  *(float *)(param_1 + 0x110) = fStack_40;
  *(undefined1 *)(param_1 + 0x115) = 0;
  return;
}


// ==== FUN_0014aa60 @ 0014aa60 ====

void FUN_0014aa60(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  FUN_0014ba80();
  iVar1 = (int)param_2;
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _vmul(auVar2,auVar2);
  auVar4 = _qmtc2(param_1);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar5 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar5);
  auVar2 = _vmulbc(auVar2,auVar4);
  auVar2 = _qmfc2(auVar2._0_4_);
  *(float *)(iVar1 + 0x110) = *(float *)(iVar1 + 0x110) - auVar2._0_4_;
  FUN_0014ab10(param_1,param_2);
  if (*(float *)(iVar1 + 0x110) <= 0.0) {
    *(undefined1 *)(iVar1 + 0x115) = 1;
  }
  return;
}


// ==== FUN_0014ab10 @ 0014ab10 ====

void FUN_0014ab10(float param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
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
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if (param_1 != 0.0) {
    iVar2 = (int)param_2;
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xf0));
    auVar7 = _qmtc2(param_1);
    auVar3 = _vmul(auVar6,auVar6);
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auStack_30 = _sqc2(auVar7);
    _vaddabc(auVar3,auVar3);
    auVar5 = _vmaddbc(auVar4,auVar3);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar5);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    uVar8 = _vwaitq();
    auVar3 = _vmulq(auVar3,uVar8);
    auVar3 = _vmulbc(auVar3,auVar7);
    auVar3 = _qmfc2(auVar3._0_4_);
    auVar4 = _vmove(auVar6);
    if (*(float *)(iVar2 + 0x110) < auVar3._0_4_) {
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar5);
      uVar8 = _vwaitq();
      auVar4 = _vmulq(auVar4,uVar8);
      auVar5 = _qmtc2(*(float *)(iVar2 + 0x110) / param_1);
      auVar3 = _sqc2(auVar4);
      *(undefined1 (*) [16])(iVar2 + 0xf0) = auVar3;
      auVar3 = _vmulbc(auVar4,auVar5);
      auVar3 = _sqc2(auVar3);
      *(undefined1 (*) [16])(iVar2 + 0xf0) = auVar3;
      *(undefined1 *)(iVar2 + 0x115) = 1;
    }
    uStack_68 = *(undefined4 *)(iVar2 + 0x78);
    uStack_64 = *(undefined4 *)(iVar2 + 0x7c);
    auStack_40 = *(undefined1 (*) [16])(iVar2 + 0xa0);
    uStack_60 = *(undefined4 *)(iVar2 + 0x80);
    uStack_5c = *(undefined4 *)(iVar2 + 0x84);
    uStack_58 = *(undefined4 *)(iVar2 + 0x88);
    uStack_54 = *(undefined4 *)(iVar2 + 0x8c);
    uStack_50 = *(undefined4 *)(iVar2 + 0x90);
    uStack_4c = *(undefined4 *)(iVar2 + 0x94);
    uStack_48 = *(undefined4 *)(iVar2 + 0x98);
    uStack_44 = *(undefined4 *)(iVar2 + 0x9c);
    uStack_70 = (undefined4)*(undefined8 *)(iVar2 + 0x70);
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(iVar2 + 0x70) >> 0x20);
    lVar1 = FUN_0014bca0(iVar2 + 0xf0,auStack_40,iVar2 + 0x100);
    if (lVar1 != 0) {
      *(undefined1 *)(iVar2 + 0x115) = 1;
      *(undefined1 *)(iVar2 + 0x114) = 1;
    }
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xf0));
    auVar3 = _lqc2(auStack_30);
    auVar4 = _vmulbc(auVar4,auVar3);
    auVar3 = _lqc2(auStack_40);
    auVar3 = _vadd(auVar3,auVar4);
    auStack_40 = _sqc2(auVar3);
    FUN_00125f88(param_2,&uStack_70);
  }
  return;
}


// ==== FUN_0014ac60 @ 0014ac60 ====

void FUN_0014ac60(int param_1)

{
  FUN_0014b8a0();
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 5;
  *(undefined1 *)(param_1 + 0x117) = 0;
  return;
}


// ==== FUN_0014ac98 @ 0014ac98 ====

void FUN_0014ac98(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_0014ba80();
  iVar1 = (int)param_2;
  if (*(char *)(iVar1 + 0x117) == '\0') {
    FUN_0014adf0(param_1,param_2);
    fVar2 = *(float *)(iVar1 + 0x110);
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x110);
  }
  *(float *)(iVar1 + 0x110) = fVar2 + param_1;
  if (1.5 <= fVar2 + param_1) {
    FUN_001ea518(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),2,1);
  }
  fVar2 = *(float *)(iVar1 + 0x110);
  if ((2.0 <= fVar2) && (*(char *)(iVar1 + 0x114) == '\0')) {
    FUN_001556d8(DAT_0040f520,param_2);
    fVar2 = *(float *)(iVar1 + 0x110);
  }
  if (20.0 <= fVar2) {
    FUN_001556d8(DAT_0040f520,param_2);
  }
  if ((*(char *)(iVar1 + 0x115) != '\0') && (0.5 <= *(float *)(iVar1 + 0x110))) {
    auVar3 = _qmtc2(0);
    _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
    auVar3 = _vaddbc(in_vf0,auVar3);
    auVar4 = _qmtc2(0x3e800000);
    auVar4 = _vmulbc(auVar3,auVar4);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar3 = _vadd(auVar3,auVar4);
    auVar3 = _qmfc2(auVar3._0_4_);
    FUN_0016e1f8(DAT_0040f4d4,auVar3._0_8_);
    *(undefined1 *)(iVar1 + 0x115) = 0;
  }
  return;
}


// ==== FUN_0014adf0 @ 0014adf0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014adf0(float param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 in_vuI;
  undefined1 auStack_2b0 [64];
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
  float fStack_168;
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
  undefined1 auStack_50 [16];
  
  if (param_1 != 0.0) {
    auVar6 = _qmtc2(param_1);
    iVar3 = (int)param_2;
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xf0));
    auVar4 = _lqc2(_DAT_00414760);
    auVar4 = _vmulbc(auVar4,auVar6);
    auStack_270 = *(undefined1 (*) [16])(iVar3 + 0x70);
    auVar4 = _vadd(auVar5,auVar4);
    auVar4 = _sqc2(auVar4);
    *(undefined1 (*) [16])(iVar3 + 0xf0) = auVar4;
    auStack_240 = *(undefined1 (*) [16])(iVar3 + 0xa0);
    auStack_260 = *(undefined1 (*) [16])(iVar3 + 0x80);
    auStack_250 = *(undefined1 (*) [16])(iVar3 + 0x90);
    uGpffff8da0 = 0;
    lVar2 = FUN_0014b4d8(0x3dcccccd,iVar3 + 0xf0,auStack_240,auStack_2b0,iVar3 + 0x117);
    if (lVar2 == 0) {
      auVar4 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x100));
    }
    else {
      if (*(char *)(iVar3 + 0x116) == '\0') {
        FUN_001de3d0(auStack_50);
        *(undefined1 *)(iVar3 + 0x116) = 1;
        cVar1 = *(char *)(iVar3 + 0x114);
      }
      else {
        cVar1 = *(char *)(iVar3 + 0x114);
      }
      if (cVar1 != '\0') {
        FUN_001556d8(DAT_0040f520,param_2);
      }
      auVar4 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x100));
    }
    auVar5 = _qmfc2(auVar4._0_4_);
    auVar21 = _vmaxbc(in_vf0,in_vf0);
    auVar5 = _qmtc2(-auVar5._0_4_ * 0.017453292);
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
    _vmsubai(auVar21,in_vuI);
    _vmaddai(auVar21,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar5,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar5 = _vmsubi(auVar21,in_vuI);
    auVar5 = _vabs(auVar5);
    _ctc2(0x3e800000);
    _vnop();
    auVar5 = _vsubi(auVar5,in_vuI);
    auVar10 = _vmul(auVar5,auVar5);
    auVar14 = _vmul(auVar10,auVar10);
    _ctc2(0xc2992661);
    _vnop();
    auVar6 = _vmuli(auVar5,in_vuI);
    auVar20 = _qmtc2(0);
    _lqc2(auStack_1a0);
    _lqc2(auStack_190);
    auVar12 = _vmul(auVar14,auVar14);
    auVar7 = _vmul(auVar6,auVar10);
    _ctc2(0xc2255de0);
    _vnop();
    auVar9 = _vmuli(auVar5,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar8 = _vmuli(auVar5,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar6 = _vmuli(auVar5,in_vuI);
    _vmula(auVar9,auVar10);
    _vmadda(auVar7,auVar14);
    _ctc2(0x40c90fda);
    _vmadda(auVar8,auVar14);
    _vmaddai(auVar5,in_vuI);
    auVar6 = _vmadd(auVar6,auVar12);
    auVar8 = _vaddbc(in_vf0,auVar20);
    auVar12 = _vaddbc(in_vf0,auVar20);
    auVar5 = _pextlw(0,0x3f800000);
    _vmove(auVar8);
    auVar7 = _pextlw(0,auVar5._0_8_);
    _vmove(auVar12);
    auVar9 = _vaddbc(in_vf0,auVar6);
    auVar10 = _vaddbc(in_vf0,auVar6);
    auVar15 = _vadd(in_vf0,in_vf0);
    _sqc2(auVar8);
    auVar8 = _vsub(in_vf0,auVar6);
    _sqc2(auVar12);
    auVar5 = _pextlw(0,0);
    _vmove(auVar9);
    _vmove(auVar10);
    auVar18 = _vaddbc(in_vf0,auVar8);
    auVar16 = _vaddbc(in_vf0,auVar6);
    _sqc2(auVar9);
    _sqc2(auVar10);
    auVar8 = _pextlw(0x3f800000,auVar5._0_8_);
    _sqc2(auVar15);
    auVar5 = _sqc2(auVar4);
    auVar6 = _pextlw(0x3f800000,0);
    _sqc2(auVar16);
    auVar6 = _pextlw(0,auVar6._0_8_);
    _sqc2(auVar16);
    auVar22 = _qmtc2(0x3f733333);
    _sqc2(auVar16);
    _sqc2(auVar18);
    _sqc2(auVar15);
    _sqc2(auVar18);
    _sqc2(auVar15);
    _sqc2(auVar18);
    _sqc2(auVar15);
    auVar13 = _qmtc2(auVar8._0_4_);
    auVar19 = _qmtc2(auVar6._0_4_);
    _lqc2(auStack_160);
    auStack_170._4_4_ = auVar5._4_4_;
    _lqc2(auStack_140);
    _sqc2(auVar13);
    auVar5 = _qmtc2((float)auStack_170._4_4_ * 0.017453292);
    _sqc2(auVar13);
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
    _vmsubai(auVar21,in_vuI);
    _vmaddai(auVar21,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar5,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar5 = _vmsubi(auVar21,in_vuI);
    auVar5 = _vabs(auVar5);
    _ctc2(0x3e800000);
    _vnop();
    auVar5 = _vsubi(auVar5,in_vuI);
    auVar9 = _vmul(auVar5,auVar5);
    _ctc2(0xc2992661);
    _vnop();
    auVar6 = _vmuli(auVar5,in_vuI);
    auVar14 = _vmul(auVar9,auVar9);
    auVar8 = _vmul(auVar6,auVar9);
    auVar11 = _vmul(auVar14,auVar14);
    _ctc2(0xc2255de0);
    _vnop();
    auVar12 = _vmuli(auVar5,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar10 = _vmuli(auVar5,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar6 = _vmuli(auVar5,in_vuI);
    _vmula(auVar12,auVar9);
    _vmadda(auVar8,auVar14);
    _ctc2(0x40c90fda);
    _vmadda(auVar10,auVar14);
    _vmaddai(auVar5,in_vuI);
    auVar5 = _vmadd(auVar6,auVar11);
    auVar10 = _vaddbc(in_vf0,auVar5);
    auVar12 = _vaddbc(in_vf0,auVar5);
    _vmove(auVar10);
    auVar6 = _vsub(in_vf0,auVar5);
    _vmove(auVar12);
    auVar8 = _vaddbc(in_vf0,auVar20);
    auVar9 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar10);
    _sqc2(auVar12);
    _vmove(auVar8);
    _vmove(auVar9);
    auVar10 = _vaddbc(in_vf0,auVar6);
    auVar6 = _vaddbc(in_vf0,auVar5);
    _sqc2(auVar8);
    _sqc2(auVar9);
    _vmulabc(auVar10,auVar16);
    _vmaddabc(auVar13,auVar16);
    auVar17 = _vmaddbc(auVar6,auVar16);
    _vmulabc(auVar10,auVar15);
    _vmaddabc(auVar13,auVar15);
    _vmaddabc(auVar6,auVar15);
    auVar16 = _vmaddbc(auVar15,in_vf0);
    _sqc2(auVar10);
    auVar5 = _qmtc2(auVar7._0_4_);
    _sqc2(auVar6);
    _vmulabc(auVar10,auVar5);
    _vmaddabc(auVar13,auVar5);
    auVar14 = _vmaddbc(auVar6,auVar5);
    _vmulabc(auVar10,auVar18);
    _vmaddabc(auVar13,auVar18);
    auVar12 = _vmaddbc(auVar6,auVar18);
    _sqc2(auVar15);
    auVar5 = _sqc2(auVar4);
    _sqc2(auVar10);
    auVar18 = _vmulbc(auVar4,auVar22);
    _sqc2(auVar13);
    _sqc2(auVar6);
    auStack_90 = _sqc2(auVar14);
    auStack_80 = _sqc2(auVar12);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar15);
    auStack_70 = _sqc2(auVar17);
    auStack_60 = _sqc2(auVar16);
    auStack_b0 = _sqc2(auVar17);
    auStack_a0 = _sqc2(auVar16);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _sqc2(auVar17);
    _sqc2(auVar16);
    _lqc2(auVar5);
    fStack_168 = auVar5._8_4_;
    auVar4 = _qmtc2(fStack_168 * 0.017453292);
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
    _vmsubai(auVar21,in_vuI);
    _vmaddai(auVar21,in_vuI);
    _ctc2(0xbe22f983);
    _vnop();
    _vmsubai(auVar4,in_vuI);
    _ctc2(0x3f000000);
    _vnop();
    auVar4 = _vmsubi(auVar21,in_vuI);
    auVar4 = _vabs(auVar4);
    _ctc2(0x3e800000);
    _vnop();
    auVar4 = _vsubi(auVar4,in_vuI);
    auVar6 = _vmul(auVar4,auVar4);
    _ctc2(0xc2992661);
    _vnop();
    auVar5 = _vmuli(auVar4,in_vuI);
    auVar9 = _vmul(auVar6,auVar6);
    auVar5 = _vmul(auVar5,auVar6);
    auVar7 = _vmul(auVar9,auVar9);
    _ctc2(0xc2255de0);
    _vnop();
    auVar11 = _vmuli(auVar4,in_vuI);
    _ctc2(0x42a33457);
    _vnop();
    auVar10 = _vmuli(auVar4,in_vuI);
    _ctc2(0x421ed7b7);
    _vnop();
    auVar8 = _vmuli(auVar4,in_vuI);
    _vmula(auVar11,auVar6);
    _vmadda(auVar5,auVar9);
    _ctc2(0x40c90fda);
    _vmadda(auVar10,auVar9);
    _vmaddai(auVar4,in_vuI);
    auVar4 = _vmadd(auVar8,auVar7);
    auVar7 = _vaddbc(in_vf0,auVar4);
    auVar5 = _vsub(in_vf0,auVar4);
    auVar6 = _vaddbc(in_vf0,auVar5);
    _vmove(auVar7);
    auVar5 = _vaddbc(in_vf0,auVar4);
    _vmove(auVar6);
    _sqc2(auVar7);
    auVar4 = _vaddbc(in_vf0,auVar4);
    _vmove(auVar5);
    auVar9 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar5);
    _sqc2(auVar6);
    _vmove(auVar4);
    auVar7 = _vaddbc(in_vf0,auVar20);
    _sqc2(auVar9);
    _sqc2(auVar4);
    _vmulabc(auVar9,auVar14);
    _vmaddabc(auVar7,auVar14);
    auVar10 = _vmaddbc(auVar19,auVar14);
    _vmulabc(auVar9,auVar12);
    _vmaddabc(auVar7,auVar12);
    auVar14 = _vmaddbc(auVar19,auVar12);
    _sqc2(auVar7);
    _vmulabc(auVar9,auVar17);
    _vmaddabc(auVar7,auVar17);
    auVar12 = _vmaddbc(auVar19,auVar17);
    _vmulabc(auVar9,auVar16);
    _vmaddabc(auVar7,auVar16);
    _vmaddabc(auVar19,auVar16);
    auVar11 = _vmaddbc(auVar15,in_vf0);
    auVar8 = _lqc2(auStack_270);
    auVar6 = _lqc2(auStack_260);
    auVar5 = _lqc2(auStack_250);
    _sqc2(auVar19);
    _vmulabc(auVar8,auVar10);
    _vmaddabc(auVar6,auVar10);
    auVar13 = _vmaddbc(auVar5,auVar10);
    _vmulabc(auVar8,auVar14);
    _vmaddabc(auVar6,auVar14);
    auVar16 = _vmaddbc(auVar5,auVar14);
    _sqc2(auVar9);
    _sqc2(auVar7);
    auVar4 = _lqc2(auStack_240);
    _sqc2(auVar15);
    _vmulabc(auVar8,auVar12);
    _vmaddabc(auVar6,auVar12);
    auVar7 = _vmaddbc(auVar5,auVar12);
    _vmulabc(auVar8,auVar11);
    _vmaddabc(auVar6,auVar11);
    _vmaddabc(auVar5,auVar11);
    auVar5 = _vmaddbc(auVar4,in_vf0);
    _sqc2(auVar19);
    auStack_f0 = _sqc2(auVar10);
    auStack_e0 = _sqc2(auVar14);
    auStack_d0 = _sqc2(auVar12);
    auStack_c0 = _sqc2(auVar11);
    auStack_130 = _sqc2(auVar10);
    auStack_120 = _sqc2(auVar14);
    auStack_110 = _sqc2(auVar12);
    auStack_100 = _sqc2(auVar11);
    _auStack_170 = _sqc2(auVar10);
    auStack_160 = _sqc2(auVar14);
    auStack_150 = _sqc2(auVar12);
    auStack_140 = _sqc2(auVar11);
    auStack_230 = _sqc2(auVar10);
    auStack_220 = _sqc2(auVar14);
    auStack_210 = _sqc2(auVar12);
    auStack_200 = _sqc2(auVar11);
    _sqc2(auVar10);
    _sqc2(auVar14);
    _sqc2(auVar12);
    _sqc2(auVar11);
    auStack_1b0 = _sqc2(auVar13);
    auStack_1a0 = _sqc2(auVar16);
    auStack_190 = _sqc2(auVar7);
    auStack_270 = _sqc2(auVar13);
    auStack_260 = _sqc2(auVar16);
    auStack_250 = _sqc2(auVar7);
    auStack_240 = _sqc2(auVar5);
    auVar4 = _sqc2(auVar18);
    *(undefined1 (*) [16])(iVar3 + 0x100) = auVar4;
    auStack_180 = _sqc2(auVar5);
    auStack_1f0 = _sqc2(auVar13);
    auStack_1e0 = _sqc2(auVar16);
    auStack_1d0 = _sqc2(auVar7);
    auStack_1c0 = _sqc2(auVar5);
    FUN_00125f88(param_2,auStack_270,0xffffffffbe22f983,0x40c90fda,0x421ed7b7,0x42a33457,
                 0xffffffffc2255de0,0xffffffffc2992661);
  }
  return;
}


// ==== FUN_0014b4d8 @ 0014b4d8 ====

undefined8
FUN_0014b4d8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined1 (*param_4) [16],
            undefined1 (*param_5) [16],undefined1 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  auVar7 = _vaddbc(in_vf0,in_vf0);
  pauVar5 = (undefined1 (*) [16])param_3;
  auVar6 = _lqc2(*pauVar5);
  auVar6 = _vmul(auVar6,auVar6);
  auStack_a0 = _sqc2(auVar7);
  _vaddabc(auVar6,auVar6);
  auVar6 = _vmaddbc(auVar7,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  uVar3 = 0;
  if (2.3283064e-10 <= auVar6._0_4_) {
    auVar6 = _qmtc2(param_2);
    auVar10 = _qmtc2(param_1);
    DAT_0040e590 = DAT_0040e590 + '\x01';
    auVar7 = _lqc2(*pauVar5);
    auVar6 = _vmulbc(auVar7,auVar6);
    auStack_c0 = _sqc2(auVar6);
    auVar6 = _vmul(auVar7,auVar7);
    auVar8 = _lqc2(auStack_a0);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar8,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    auVar6 = _qmtc2(SQRT(auVar6._0_4_));
    uVar13 = _vwaitq();
    auVar8 = _vmulq(auVar7,uVar13);
    auVar9 = _lqc2(*param_4);
    auVar12 = _lqc2(auStack_c0);
    auVar10 = _vmulbc(auVar8,auVar10);
    auVar6 = _qmfc2(auVar6._0_4_);
    auVar7 = _vadd(auVar9,auVar12);
    auStack_b0 = _sqc2(auVar8);
    auVar8 = _vadd(auVar7,auVar10);
    auVar7 = _vsub(auVar9,auVar10);
    auStack_90 = _sqc2(auVar10);
    auStack_80 = _sqc2(auVar12);
    auVar7 = _qmfc2(auVar7._0_4_);
    auVar8 = _qmfc2(auVar8._0_4_);
    lVar4 = FUN_0012ae58(DAT_0040f4d0,auVar7._0_8_,auVar8._0_8_,0x17,0,1);
    auVar7 = _lqc2(auStack_90);
    auVar8 = _lqc2(auStack_80);
    if (lVar4 == 0) {
      auVar6 = _lqc2(*param_4);
      uVar3 = 0;
      auVar7 = _lqc2(auStack_c0);
      auVar6 = _vadd(auVar6,auVar7);
      auVar6 = _sqc2(auVar6);
      *param_4 = auVar6;
    }
    else {
      if ((ushort)(byte)param_5[2][8] == *(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x40)) {
        uVar3 = *(undefined8 *)*param_5;
        uStack_c8 = *(undefined4 *)(*param_5 + 8);
        uStack_c4 = *(undefined4 *)(*param_5 + 0xc);
        *param_6 = 1;
        auVar6 = _qmtc2(0x40000000);
        auVar7 = _vmulbc(auVar7,auVar6);
        auVar6 = _lqc2(*param_5);
        auVar6 = _vadd(auVar6,auVar7);
        auVar6 = _sqc2(auVar6);
        *param_4 = auVar6;
        uVar2 = DAT_004432ac;
        uVar1 = DAT_004432a8;
        uVar13 = DAT_004432a4;
        uStack_d0 = (undefined4)uVar3;
        uStack_cc = (undefined4)((ulong)uVar3 >> 0x20);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        _vsub(in_vf0,in_vf0);
        auVar6 = _vaddbc(in_vf0,in_vf0);
        auVar7 = _vaddbc(in_vf0,in_vf0);
        auVar8 = _vaddbc(in_vf0,in_vf0);
        auStack_100 = _sqc2(auVar6);
        *(undefined4 *)*pauVar5 = DAT_004432a0;
        *(undefined4 *)(*pauVar5 + 4) = uVar13;
        *(undefined4 *)(*pauVar5 + 8) = uVar1;
        *(undefined4 *)(*pauVar5 + 0xc) = uVar2;
        auStack_f0 = _sqc2(auVar7);
        auStack_e0 = _sqc2(auVar8);
        FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_100,0x7e048c5a7baca93c,1);
      }
      else {
        auVar9 = _lqc2(*param_5);
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar7 = _vsub(auVar9,auVar7);
        auVar7 = _sqc2(auVar7);
        *param_4 = auVar7;
        uVar2 = DAT_004432ac;
        uVar1 = DAT_004432a8;
        uVar13 = DAT_004432a4;
        auVar11 = _qmtc2(0x3fa66666);
        auVar7 = _lqc2(auStack_b0);
        auVar10 = _vsub(in_vf0,auVar7);
        auVar7 = _lqc2(param_5[1]);
        auVar9 = _vmul(auVar8,auVar7);
        auVar10 = _vmul(auVar10,auVar7);
        _vaddabc(auVar9,auVar9);
        auVar9 = _vmaddbc(auVar12,auVar9);
        _vaddabc(auVar10,auVar10);
        auVar10 = _vmaddbc(auVar12,auVar10);
        auVar9 = _vmulbc(auVar7,auVar9);
        auVar7 = _qmfc2(auVar10._0_4_);
        auVar9 = _vmulbc(auVar9,auVar11);
        auVar10 = _lqc2(auStack_a0);
        auVar8 = _vsub(auVar8,auVar9);
        auVar9 = _vmove(auVar8);
        auVar8 = _vmul(auVar9,auVar9);
        _vaddabc(auVar8,auVar8);
        auVar8 = _vmaddbc(auVar10,auVar8);
        auVar8 = _qmfc2(auVar8._0_4_);
        if (auVar8._0_4_ < 2.3283064e-10) {
          *(undefined4 *)*pauVar5 = DAT_004432a0;
          *(undefined4 *)(*pauVar5 + 4) = uVar13;
          *(undefined4 *)(*pauVar5 + 8) = uVar1;
          *(undefined4 *)(*pauVar5 + 0xc) = uVar2;
          return 1;
        }
        auVar10 = _vmul(auVar9,auVar9);
        auVar8 = _lqc2(auStack_a0);
        _vaddabc(auVar10,auVar10);
        auVar8 = _vmaddbc(auVar8,auVar10);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar8);
        uVar13 = _vwaitq();
        auVar8 = _vmulq(auVar9,uVar13);
        auVar6 = _qmtc2(auVar6._0_4_);
        auVar6 = _vmulbc(auVar8,auVar6);
        auVar7 = _qmtc2((1.0 - auVar7._0_4_) * 0.5 + 0.1);
        auVar6 = _vmulbc(auVar6,auVar7);
        auVar6 = _sqc2(auVar6);
        *pauVar5 = auVar6;
        if (DAT_0040e590 < '\x06') {
          FUN_0014b4d8(param_1,param_2,param_3);
          return 1;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


// ==== FUN_0014b880 @ 0014b880 ====

void FUN_0014b880(int param_1)

{
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + 2.0;
  return;
}


// ==== FUN_0014b8a0 @ 0014b8a0 ====

void FUN_0014b8a0(int param_1)

{
  undefined4 uVar1;
  
  FUN_00125c60();
  uVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x94))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x90));
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}


// ==== FUN_0014b8e0 @ 0014b8e0 ====

undefined4 FUN_0014b8e0(undefined8 param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1;
  *(int *)(puVar2 + 0x1b) = param_2;
  *puVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)(param_2 + 0x40));
  FUN_0014b948(param_1,uVar1,param_3,*(undefined4 *)(puVar2 + 0x1b));
  *(undefined1 *)((int)puVar2 + 0xee) = 0;
  return 1;
}


// ==== FUN_0014b948 @ 0014b948 ====

undefined4 FUN_0014b948(int param_1,int param_2,byte param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  
  FUN_00125cd8();
  *(byte *)(param_1 + 0xe0) = param_3;
  *(int *)(param_1 + 0xdc) = param_2;
  uVar1 = *param_4;
  uVar6 = *(undefined4 *)(param_4 + 1);
  uVar7 = *(undefined4 *)((int)param_4 + 0xc);
  *(int *)(param_1 + 0x70) = (int)uVar1;
  *(int *)(param_1 + 0x74) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  uVar1 = param_4[2];
  uVar6 = *(undefined4 *)(param_4 + 3);
  uVar7 = *(undefined4 *)((int)param_4 + 0x1c);
  *(int *)(param_1 + 0x80) = (int)uVar1;
  *(int *)(param_1 + 0x84) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  uVar1 = param_4[4];
  uVar6 = *(undefined4 *)(param_4 + 5);
  uVar7 = *(undefined4 *)((int)param_4 + 0x2c);
  *(int *)(param_1 + 0x90) = (int)uVar1;
  *(int *)(param_1 + 0x94) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  *(undefined4 *)(param_1 + 0x9c) = uVar7;
  uVar1 = param_4[6];
  uVar6 = *(undefined4 *)(param_4 + 7);
  uVar7 = *(undefined4 *)((int)param_4 + 0x3c);
  *(int *)(param_1 + 0xa0) = (int)uVar1;
  *(int *)(param_1 + 0xa4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xa8) = uVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  iVar4 = *(int *)(param_2 + 0x48) + (uint)param_3 * 0xd0;
  uVar6 = *(undefined4 *)(iVar4 + 0xb4);
  uVar7 = *(undefined4 *)(iVar4 + 0xb8);
  uVar8 = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar4 + 0xb0);
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x40);
  cVar3 = FUN_0012c790(DAT_0040f4d0,uVar1,param_1 + 0xe1);
  if (cVar3 != '\x01') {
    iVar4 = 0;
    do {
      puVar5 = &DAT_003bcb08 + iVar4;
      puVar9 = (undefined1 *)(param_1 + 0xe2 + iVar4);
      iVar4 = iVar4 + 1;
      *puVar9 = *puVar5;
    } while (iVar4 < 9);
    *(undefined1 *)(param_1 + 0xeb) = DAT_003f42f0;
    *(undefined1 *)(param_1 + 0xec) = DAT_003f42f1;
    uVar2 = DAT_003f42f2;
    *(undefined1 *)(param_1 + 0xee) = 0;
    *(undefined1 *)(param_1 + 0xed) = uVar2;
  }
  return 1;
}


// ==== FUN_0014ba58 @ 0014ba58 ====

undefined4 FUN_0014ba58(void)

{
  FUN_00125e40();
  return 1;
}


// ==== FUN_0014ba80 @ 0014ba80 ====

void FUN_0014ba80(void)

{
  FUN_00125d10();
  return;
}


// ==== FUN_0014baa0 @ 0014baa0 ====

void FUN_0014baa0(int param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  short *psVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fStack_64;
  
  uVar8 = 0;
  iVar9 = *(int *)(*(int *)(param_1 + 0xdc) + 0x48) + (uint)*(byte *)(param_1 + 0xe0) * 0xd0;
  FUN_00125e98();
  if (0 < *(int *)(*(int *)(param_1 + 0xdc) + 0x24)) {
    bVar1 = true;
    do {
      if (bVar1) {
        uVar2 = (uint)((*(ulong *)(iVar9 + (uint)*(byte *)(param_1 + 200) * 8 + 0x68) &
                       (ulong)(uint)(1 << (uVar8 & 0x1f))) != 0);
      }
      else {
        uVar2 = *(uint *)((uint)*(byte *)(param_1 + 200) * 8 + iVar9 + 0x6c) >> (uVar8 & 0x1f) & 1;
      }
      if (uVar2 == 0) {
LAB_0014bc60:
        iVar5 = *(int *)(param_1 + 0xdc);
      }
      else {
        psVar3 = (short *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x20) + uVar8 * 6);
        iVar7 = *(int *)(*(int *)(param_1 + 0xdc) + 0x1c) + uVar8 * 0x30;
        pbVar4 = (byte *)(*(int *)(param_1 + 0xd0) + (int)*psVar3);
        iVar5 = *(int *)(param_1 + 0xd4) + (int)psVar3[1];
        if (2 < *pbVar4 - 2) {
          if (*pbVar4 == 10) {
            auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x60));
            auVar11 = _qmtc2(0x40000000);
            auVar12 = _qmtc2(*(undefined4 *)(iVar5 + 0x30));
            auVar11 = _vmulbc(auVar13,auVar11);
            fVar10 = *(float *)(param_1 + 0xc0);
            auVar11 = _vaddbc(auVar11,auVar12);
            auVar11 = _sqc2(auVar11);
            fStack_64 = auVar11._12_4_;
            if (fVar10 < fStack_64) {
              iVar6 = 0;
              goto LAB_0014bc2c;
            }
          }
          else {
            FUN_001af738(*(undefined4 *)(param_1 + 0xc0),DAT_0040f4c0 + 0x14,iVar7,pbVar4,iVar5,0,
                         param_1 + 0x70,param_2 == 0,0);
          }
          goto LAB_0014bc60;
        }
        fVar10 = *(float *)(param_1 + 0xc0);
        iVar6 = param_1 + 0xe1;
LAB_0014bc2c:
        FUN_001af738(fVar10,DAT_0040f4c0 + 0x14,iVar7,pbVar4,iVar5,iVar6,param_1 + 0x70,param_2 == 0
                     ,0);
        iVar5 = *(int *)(param_1 + 0xdc);
      }
      uVar8 = uVar8 + 1;
      bVar1 = (int)uVar8 < 0x20;
    } while ((int)uVar8 < *(int *)(iVar5 + 0x24));
  }
  return;
}


// ==== FUN_0014bca0 @ 0014bca0 ====

bool FUN_0014bca0(undefined4 param_1,undefined1 (*param_2) [16],undefined4 *param_3,
                 undefined4 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auVar3 = _qmtc2(param_1);
  auVar2 = _lqc2(*param_2);
  auVar2 = _vmulbc(auVar2,auVar3);
  auVar3 = _qmtc2(*param_3);
  auVar2 = _vadd(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  lVar1 = FUN_0012ae58(DAT_0040f4d0,*param_3,auVar2._0_8_,0x16,0,1,auStack_60);
  if (lVar1 != 0) {
    *param_4 = uStack_50;
    param_4[1] = uStack_4c;
    param_4[2] = uStack_48;
    param_4[3] = uStack_44;
  }
  return lVar1 != 0;
}


// ==== FUN_0014bd18 @ 0014bd18 ====

void FUN_0014bd18(int param_1)

{
  FUN_00125c60();
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x13f) = 0;
  return;
}


// ==== FUN_0014bd58 @ 0014bd58 ====

undefined4 FUN_0014bd58(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  FUN_00125cd8();
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_0014ce00();
  }
  cVar2 = FUN_0012c790(DAT_0040f4d0,*(undefined8 *)(param_1 + 0xa0),param_1 + 300);
  if (cVar2 != '\x01') {
    iVar5 = 0;
    do {
      puVar3 = &DAT_003bcb08 + iVar5;
      puVar4 = (undefined1 *)(param_1 + 0x12d + iVar5);
      iVar5 = iVar5 + 1;
      *puVar4 = *puVar3;
    } while (iVar5 < 9);
    *(undefined1 *)(param_1 + 0x136) = DAT_003f42f0;
    *(undefined1 *)(param_1 + 0x137) = DAT_003f42f1;
    uVar1 = DAT_003f42f2;
    *(undefined1 *)(param_1 + 0x139) = 0;
    *(undefined1 *)(param_1 + 0x138) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x13f) = 0;
  *(undefined1 *)(param_1 + 0x13e) = 1;
  return 1;
}


// ==== FUN_0014be20 @ 0014be20 ====

void FUN_0014be20(float param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
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
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  iVar3 = (int)param_2;
  if ((*(int *)(iVar3 + 0xb4) != 0) &&
     ((*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xb4) + 0x34) + 0xc) + 0x58) + 0x8c) >>
       1 & 1U) != 0)) {
    *(undefined4 *)(iVar3 + 0x124) = 0;
  }
  if (*(char *)(iVar3 + 0x13d) != '\0') {
    iVar1 = *(int *)(iVar3 + 0x11c);
    if (*(char *)(iVar1 + 0x44) == '\0') {
      if (*(char *)(iVar1 + 0x48) != '\0') {
        FUN_0014c488(param_2);
      }
    }
    else {
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar7 = _vsub(in_vf0,in_vf0);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      auVar5 = _vaddbc(in_vf0,in_vf0);
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auStack_140 = _sqc2(auVar4);
      auStack_130 = _sqc2(auVar5);
      auStack_120 = _sqc2(auVar6);
      auStack_110 = _sqc2(auVar7);
      FUN_0014c7c8(iVar1,*(undefined1 *)(*(int *)(iVar3 + 0x120) + 0x60),auStack_140);
      if (*(int *)(iVar3 + 0xb4) != 0) {
        FUN_0014ce68(param_1,*(undefined4 *)(iVar3 + 0x120),auStack_140);
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
        auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar3 + 0x120) + 0x40));
        auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
        auVar4 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
        _vmulabc(auVar5,auVar6);
        _vmaddabc(auVar4,auVar6);
        auVar4 = _vmaddbc(auVar7,auVar6);
        auVar4 = _qmfc2(auVar4._0_4_);
        FUN_0025d910(*(undefined4 *)(iVar3 + 0xb4),auVar4._0_8_);
        FUN_0014ce40(*(undefined4 *)(iVar3 + 0x120),auStack_140);
      }
      pauVar2 = *(undefined1 (**) [16])(iVar3 + 0x11c);
      auVar8 = _lqc2(auStack_140);
      auVar7 = _lqc2(*pauVar2);
      auVar6 = _lqc2(pauVar2[1]);
      auVar5 = _lqc2(pauVar2[2]);
      auVar4 = _lqc2(auStack_130);
      _vmulabc(auVar7,auVar8);
      _vmaddabc(auVar6,auVar8);
      auVar10 = _vmaddbc(auVar5,auVar8);
      _vmulabc(auVar7,auVar4);
      _vmaddabc(auVar6,auVar4);
      auVar11 = _vmaddbc(auVar5,auVar4);
      auVar7 = _lqc2(auStack_120);
      auStack_80 = _sqc2(auVar10);
      auStack_70 = _sqc2(auVar11);
      auVar9 = _lqc2(auStack_110);
      auVar8 = _lqc2(pauVar2[3]);
      auVar6 = _lqc2(*pauVar2);
      auVar5 = _lqc2(pauVar2[1]);
      auVar4 = _lqc2(pauVar2[2]);
      _vmulabc(auVar6,auVar7);
      _vmaddabc(auVar5,auVar7);
      auVar7 = _vmaddbc(auVar4,auVar7);
      _vmulabc(auVar6,auVar9);
      _vmaddabc(auVar5,auVar9);
      _vmaddabc(auVar4,auVar9);
      auVar4 = _vmaddbc(auVar8,in_vf0);
      auStack_100 = _sqc2(auVar10);
      auStack_f0 = _sqc2(auVar11);
      auStack_e0 = _sqc2(auVar7);
      auStack_60 = _sqc2(auVar7);
      auStack_50 = _sqc2(auVar4);
      auStack_c0 = _sqc2(auVar10);
      auStack_b0 = _sqc2(auVar11);
      auStack_a0 = _sqc2(auVar7);
      auStack_90 = _sqc2(auVar4);
      auStack_d0 = _sqc2(auVar4);
      if (*(int *)(iVar3 + 0xb4) != 0) {
        auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
        auVar4 = _vsub(auVar4,auVar5);
        auVar5 = _qmtc2(1.0 / param_1);
        auVar4 = _vmulbc(auVar4,auVar5);
        auStack_40 = _sqc2(auVar4);
        FUN_0014d358(*(undefined4 *)(iVar3 + 0x120));
        auVar4 = _lqc2(auStack_40);
        auVar5 = _vaddbc(in_vf0,in_vf0);
        auVar4 = _vmul(auVar4,auVar4);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar5,auVar4);
        _vnop();
        _vnop();
        _vnop();
        _vsqrt(auVar4);
        auVar4 = _vaddbc(in_vf0,in_vf0);
        uVar12 = _vwaitq();
        auVar4 = _vmulq(auVar4,uVar12);
        auVar4 = _qmfc2(auVar4._0_4_);
        if (auVar4._0_4_ < 50.0) {
          FUN_0025d860(*(undefined4 *)(iVar3 + 0xb4));
        }
      }
      FUN_00125f88(param_2,auStack_100);
    }
  }
  FUN_00125d18(param_2,iVar3 + 0xe0);
  FUN_00125d10(param_1,param_2);
  return;
}


// ==== FUN_0014c088 @ 0014c088 ====

void FUN_0014c088(int param_1,long param_2)

{
  if (*(int *)(param_1 + 0x124) != 3) {
    if ((int)param_2 - 2U < 2) {
      *(undefined4 *)(param_1 + 0x124) = 2;
      return;
    }
    if ((*(int *)(param_1 + 0x124) == 0) && (param_2 == 1)) {
      *(undefined4 *)(param_1 + 0x124) = 1;
    }
  }
  return;
}


// ==== FUN_0014c0c8 @ 0014c0c8 ====

void FUN_0014c0c8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc4) == 2) {
    *(undefined4 *)(param_1 + 0x124) = 3;
    return;
  }
  if (*(int *)(param_2 + 0x3a4) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  return;
}


// ==== FUN_0014c100 @ 0014c100 ====

void FUN_0014c100(undefined8 param_1)

{
  undefined8 in_t1;
  
  FUN_0014c0c8(param_1,in_t1);
  return;
}


// ==== FUN_0014c120 @ 0014c120 ====

void FUN_0014c120(void)

{
  FUN_00126098();
  return;
}


// ==== FUN_0014c140 @ 0014c140 ====

void FUN_0014c140(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_0014c088(param_1,*(undefined4 *)(param_4 + 0x124));
  return;
}


// ==== FUN_0014c160 @ 0014c160 ====

void FUN_0014c160(undefined8 param_1)

{
  undefined8 in_t0;
  
  FUN_0014c088(param_1,in_t0);
  return;
}


// ==== FUN_0014c180 @ 0014c180 ====

void FUN_0014c180(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vf5 [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  auVar6 = _qmtc2(0x40000000);
  auVar7 = _qmtc2(param_3);
  auVar5 = _vmulbc(auVar7,auVar6);
  auVar6 = _sqc2(auVar5);
  auVar4 = _qmtc2(param_1);
  auVar7 = _qmfc2(auVar5._0_4_);
  auVar4 = _vmulbc(auVar5,auVar4);
  auVar4 = _vmulbc(auVar4,auVar5);
  uStack_1c = auVar6._4_4_;
  fVar3 = auVar7._0_4_ * auVar7._0_4_;
  auVar6 = _sqc2(auVar5);
  auVar7 = _vmulbc(auVar4,auVar5);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar2 = auVar7._0_4_;
  uStack_18 = auVar6._8_4_;
  _vmove(in_vf5);
  auVar4 = _qmtc2(fVar2 * (fVar3 + uStack_1c * uStack_1c) * 0.5);
  auVar6 = _qmtc2(fVar2 * (uStack_1c * uStack_1c + uStack_18 * uStack_18) * 0.5);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar7 = _qmtc2(fVar2 * (fVar3 + uStack_18 * uStack_18) * 0.5);
  auVar6 = _qmfc2(auVar6._0_4_);
  auVar6 = _qmtc2(1.0 / auVar6._0_4_);
  _vaddbc(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar7);
  auVar6 = _sqc2(auVar6);
  uStack_1c = auVar6._4_4_;
  auVar6 = _qmtc2(1.0 / uStack_1c);
  _vaddbc(in_vf0,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar4);
  auVar6 = _sqc2(auVar6);
  uStack_18 = auVar6._8_4_;
  *(float *)(*(int *)(*(int *)(param_2 + 0x128) + 4) + 0x20) = 1.0 / fVar2;
  auVar6 = _qmtc2(1.0 / uStack_18);
  auVar7 = _vaddbc(in_vf0,auVar6);
  iVar1 = *(int *)(*(int *)(param_2 + 0x128) + 4);
  auVar6 = _sqc2(auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar1 + 0x10) = auVar7;
  auVar7 = _lqc2(auVar6);
  auVar4 = _qmfc2(auVar7._0_4_);
  auVar7 = _sqc2(auVar7);
  uStack_1c = auVar7._4_4_;
  auVar7 = _lqc2(auVar6);
  if (auVar4._0_4_ < uStack_1c) {
    auVar7 = _qmfc2(auVar7._0_4_);
    *(int *)(iVar1 + 0x24) = auVar7._0_4_;
  }
  else {
    auVar7 = _sqc2(auVar7);
    uStack_1c = auVar7._4_4_;
    *(float *)(iVar1 + 0x24) = uStack_1c;
  }
  auVar7 = _lqc2(auVar6);
  auVar7 = _sqc2(auVar7);
  fVar2 = *(float *)(iVar1 + 0x24);
  uStack_18 = auVar7._8_4_;
  if (uStack_18 <= fVar2) {
    auVar6 = _lqc2(auVar6);
    auVar6 = _sqc2(auVar6);
    uStack_18 = auVar6._8_4_;
    fVar2 = uStack_18;
  }
  *(float *)(iVar1 + 0x24) = 1.0 / fVar2;
  return;
}


// ==== FUN_0014c330 @ 0014c330 ====

void FUN_0014c330(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  lVar2 = (**(code **)(iVar1 + 0xd4))((int)param_1 + (int)*(short *)(iVar1 + 0xd0));
  if (lVar2 != 0) {
    FUN_00175a00(DAT_0040f4d4 + 0xa48,param_1,0);
  }
  return;
}


// ==== FUN_0014c380 @ 0014c380 ====

void FUN_0014c380(undefined8 param_1)

{
  FUN_0017bd10(DAT_0040f4d4 + 0xcd4,param_1);
  FUN_00175ab8(DAT_0040f4d4 + 0xa48,param_1,0);
  return;
}


// ==== FUN_0014c3e0 @ 0014c3e0 ====

void FUN_0014c3e0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  if (((*(char *)(iVar7 + 0x13d) != '\0') && (*(char *)(*(int *)(iVar7 + 0x11c) + 0x45) == '\0')) &&
     (*(char *)(*(int *)(iVar7 + 0x11c) + 0x44) == '\0')) {
    (**(code **)(*(int *)(iVar7 + 0x10) + 0x14))
              (iVar7 + *(short *)(*(int *)(iVar7 + 0x10) + 0x10),param_1);
    uVar2 = *(undefined8 *)(iVar7 + 0x70);
    uVar5 = *(undefined4 *)(iVar7 + 0x78);
    uVar6 = *(undefined4 *)(iVar7 + 0x7c);
    puVar1 = *(undefined4 **)(iVar7 + 0x11c);
    *puVar1 = (int)uVar2;
    puVar1[1] = (int)((ulong)uVar2 >> 0x20);
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar5 = *(undefined4 *)(iVar7 + 0x84);
    uVar6 = *(undefined4 *)(iVar7 + 0x88);
    uVar3 = *(undefined4 *)(iVar7 + 0x8c);
    puVar1[4] = *(undefined4 *)(iVar7 + 0x80);
    puVar1[5] = uVar5;
    puVar1[6] = uVar6;
    puVar1[7] = uVar3;
    uVar5 = *(undefined4 *)(iVar7 + 0x94);
    uVar6 = *(undefined4 *)(iVar7 + 0x98);
    uVar3 = *(undefined4 *)(iVar7 + 0x9c);
    puVar1[8] = *(undefined4 *)(iVar7 + 0x90);
    puVar1[9] = uVar5;
    puVar1[10] = uVar6;
    puVar1[0xb] = uVar3;
    uVar5 = *(undefined4 *)(iVar7 + 0xa0);
    uVar6 = *(undefined4 *)(iVar7 + 0xa4);
    uVar3 = *(undefined4 *)(iVar7 + 0xa8);
    uVar4 = *(undefined4 *)(iVar7 + 0xac);
    *(undefined1 *)((int)puVar1 + 0x49) = 1;
    puVar1[0xc] = uVar5;
    puVar1[0xd] = uVar6;
    puVar1[0xe] = uVar3;
    puVar1[0xf] = uVar4;
    iVar7 = *(int *)(iVar7 + 0x11c);
    if (*(char *)(iVar7 + 0x45) == '\0') {
      *(undefined1 *)(iVar7 + 0x46) = 1;
      *(undefined1 *)(iVar7 + 0x45) = 0;
      *(undefined1 *)(iVar7 + 0x44) = 1;
    }
  }
  return;
}


// ==== FUN_0014c488 @ 0014c488 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c488(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0xb4) != 0) {
    lVar3 = FUN_001afc30(*(undefined4 *)(iVar7 + 0x118));
    if (lVar3 == 0) {
      FUN_0025dba8(*(undefined4 *)(iVar7 + 0xb4));
      FUN_0025cba8(DAT_0040f4cc,*(undefined4 *)(iVar7 + 0xb4));
      FUN_0025d860(*(undefined4 *)(iVar7 + 0xb4));
      FUN_0025d910(*(undefined4 *)(iVar7 + 0xb4));
    }
    else {
      FUN_0014c5c8(param_1,1);
      FUN_0025cb08(DAT_0040f4cc,*(undefined4 *)(iVar7 + 0xb4));
      uVar2 = _DAT_004432a0;
      auVar1._8_4_ = DAT_004432a8;
      auVar1._0_8_ = _DAT_004432a0;
      auVar1._12_4_ = DAT_004432ac;
      auVar4 = _por(in_zero_qw,auVar1);
      uVar5 = DAT_004432a8;
      uVar6 = DAT_004432ac;
      FUN_0025d860(*(undefined4 *)(iVar7 + 0xb4),auVar4._0_8_);
      auVar4._8_4_ = uVar5;
      auVar4._0_8_ = uVar2;
      auVar4._12_4_ = uVar6;
      auVar4 = _por(in_zero_qw,auVar4);
      FUN_0025d910(*(undefined4 *)(iVar7 + 0xb4),auVar4._0_8_);
    }
  }
  return;
}


// ==== FUN_0014c548 @ 0014c548 ====

void FUN_0014c548(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}


// ==== FUN_0014c550 @ 0014c550 ====

void FUN_0014c550(int param_1)

{
  FUN_00165bc8(param_1,*(undefined1 *)(*(int *)(param_1 + 0x110) + 4));
  return;
}


// ==== FUN_0014c570 @ 0014c570 ====

undefined4 FUN_0014c570(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar2 = FUN_00107bc0(0x40f0f0);
    if (lVar2 == 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
      if (lVar2 == 4) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


// ==== FUN_0014c5c8 @ 0014c5c8 ====

undefined8 FUN_0014c5c8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_0017bd10(DAT_0040f4d4 + 0xcd4,param_1);
  iVar3 = (int)param_1;
  lVar1 = (**(code **)(*(int *)(iVar3 + 0x10) + 0xcc))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 200));
  uVar2 = 0;
  if ((lVar1 == 0) && (uVar2 = 1, *(int *)(iVar3 + 0xb4) == 0)) {
    uVar2 = FUN_0025c558(DAT_0040f4cc,param_1,1,3,0xffffffffffffffff);
  }
  return uVar2;
}


// ==== FUN_0014c640 @ 0014c640 ====

undefined4 FUN_0014c640(int param_1)

{
  long lVar1;
  undefined4 auStack_30 [4];
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar1 = FUN_00345f28(PTR_s_New_State_003f4b86_2_003bceb0,*(int *)(param_1 + 0x40),auStack_30);
    if (lVar1 != 0) {
      FUN_00347c70(*(undefined4 *)(param_1 + 0x40),auStack_30[0]);
    }
    FUN_003438d8(*(undefined4 *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0x49) = 0;
  return 1;
}


// ==== FUN_0014c6b0 @ 0014c6b0 ====

void FUN_0014c6b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 auStack_50 [4];
  
  iVar5 = (int)param_1;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 4) = param_2;
  FUN_00345ed0(*(undefined4 *)(*(int *)(iVar5 + 0x40) + 4));
  iVar1 = *(int *)(iVar5 + 0x40);
  uVar2 = FUN_00343f38();
  FUN_00342a80(*(undefined4 *)(iVar1 + 4),uVar2);
  FUN_00345510(*(int *)(iVar5 + 0x40),param_1,*(undefined4 *)(*(int *)(iVar5 + 0x40) + 4),0);
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x99c) = 0;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x9a4) = 0;
  *(undefined4 *)(*(int *)(iVar5 + 0x40) + 0x9a0) = 0;
  FUN_001ad070(*(undefined4 *)(iVar5 + 0x40));
  piVar6 = (int *)param_3;
  piVar4 = (int *)((int)piVar6 + *piVar6);
  if (*piVar4 != 0) {
    iVar1 = *piVar4;
    while( true ) {
      piVar4 = piVar4 + 1;
      *(int *)((int)piVar6 + iVar1) = *(int *)((int)piVar6 + iVar1) + (int)piVar6;
      if (*piVar4 == 0) break;
      iVar1 = *piVar4;
    }
    piVar4 = (int *)((int)piVar6 + *piVar6);
  }
  *piVar4 = 0;
  FUN_00345fd8(param_3,*(undefined4 *)(*(int *)(iVar5 + 0x40) + 4));
  lVar3 = FUN_00345f28(PTR_s_New_State_003f4b86_2_003bceb0,*(undefined4 *)(iVar5 + 0x40),auStack_50)
  ;
  if (lVar3 != 0) {
    FUN_00347c70(*(undefined4 *)(iVar5 + 0x40),auStack_50[0]);
  }
  FUN_003438d8(*(undefined4 *)(iVar5 + 0x40));
  return;
}


// ==== FUN_0014c7c8 @ 0014c7c8 ====

void FUN_0014c7c8(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x50) + param_2 * 0x40);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  *param_3 = *puVar1;
  param_3[1] = uVar3;
  param_3[2] = uVar2;
  param_3[3] = uStack_4;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  param_3[4] = puVar1[4];
  param_3[5] = uVar2;
  param_3[6] = uVar3;
  param_3[7] = uStack_4;
  uVar2 = puVar1[9];
  uVar3 = puVar1[10];
  param_3[8] = puVar1[8];
  param_3[9] = uVar2;
  param_3[10] = uVar3;
  param_3[0xb] = uStack_4;
  uVar2 = puVar1[0xd];
  uVar3 = puVar1[0xe];
  param_3[0xc] = puVar1[0xc];
  param_3[0xd] = uVar2;
  param_3[0xe] = uVar3;
  param_3[0xf] = uStack_4;
  return;
}


// ==== FUN_0014c888 @ 0014c888 ====

void FUN_0014c888(int param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_00272488(param_2,auStack_30);
  FUN_00348470(*(undefined4 *)(param_1 + 0x40),auStack_30);
  return;
}


// ==== FUN_0014c8c0 @ 0014c8c0 ====

void FUN_0014c8c0(undefined4 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (DAT_003bfb28 != 1) {
    FUN_003528e0();
    DAT_003bfb28 = 1;
  }
  if (*(char *)(param_2 + 0x48) == '\0') {
    FUN_003461d0(0);
    if (*(char *)(param_2 + 0x44) != '\0') {
      if (*(char *)(param_2 + 0x46) == '\0') {
        iVar1 = *(int *)(param_2 + 0x40);
      }
      else {
        if (*(char *)(param_2 + 0x47) != '\0') {
          *(undefined1 *)(param_2 + 0x46) = 0;
        }
        iVar1 = *(int *)(param_2 + 0x40);
      }
      *(undefined1 *)(param_2 + 0x47) = 1;
      *(undefined2 *)(iVar1 + 0x5c) = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x40) + 0x58) = 0;
      DAT_003d20dc = 0x2c;
      DAT_003d20d8 = 0;
      FUN_00348288(param_1,*(undefined4 *)(param_2 + 0x40));
      lVar2 = FUN_00347a50(0x3f800000,*(undefined4 *)(param_2 + 0x40));
      if ((lVar2 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
        *(undefined1 *)(param_2 + 0x48) = 1;
        *(undefined1 *)(param_2 + 0x44) = 0;
        *(undefined1 *)(param_2 + 0x45) = 1;
      }
      FUN_003461d0(1);
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}


// ==== FUN_0014c9c8 @ 0014c9c8 ====

void FUN_0014c9c8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00274e40(iVar3);
  uVar1 = FUN_00107d20(param_2);
  FUN_00274e68(iVar3,uVar1,param_2);
  FUN_00274f58(iVar3,0x10);
  uVar2 = FUN_00343f38();
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}


// ==== FUN_0014ca40 @ 0014ca40 ====

void FUN_0014ca40(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00343f38();
  *(undefined4 *)((int)param_1 + 0x20) = uVar1;
  FUN_00343ed0(param_1);
  return;
}


// ==== FUN_0014ca70 @ 0014ca70 ====

void FUN_0014ca70(int param_1)

{
  FUN_00343ed0(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_0014caa0 @ 0014caa0 ====

void FUN_0014caa0(int param_1)

{
  FUN_00274f80(param_1 + 4);
  return;
}


// ==== FUN_0014cad8 @ 0014cad8 ====

void FUN_0014cad8(int param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  return;
}


// ==== FUN_0014cae8 @ 0014cae8 ====

void FUN_0014cae8(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)param_1;
  iVar10 = (int)param_2;
  *(int *)(iVar9 + 0x34) = iVar10;
  *(undefined4 *)(iVar9 + 0x38) = 0;
  *(undefined4 *)(iVar9 + 0x2c) = 0;
  *(undefined4 *)(iVar9 + 0x30) = 0;
  if (0 < param_2) {
    uVar2 = FUN_00107d20(iVar10 * 0x50);
    iVar4 = iVar10 + -1;
    if (iVar4 != -1) {
      iVar5 = iVar10 + -2;
      do {
        bVar1 = iVar5 != -1;
        iVar5 = iVar5 + -1;
      } while (bVar1);
    }
    *(undefined4 *)(iVar9 + 0x2c) = uVar2;
    iVar3 = FUN_00107d20(iVar10 * 0x9d0);
    iVar5 = iVar3;
    while (iVar4 != -1) {
      iVar8 = iVar5 + 0x9d0;
      iVar4 = iVar4 + -1;
      FUN_00343fc8(iVar5 + 0x30);
      iVar6 = iVar5 + 0x1d0;
      iVar7 = 0xb;
      do {
        iVar7 = iVar7 + -1;
        FUN_00343fc8(iVar6 + 0x10);
        FUN_00343fc8(iVar6 + 0x60);
        iVar6 = iVar6 + 0xa0;
        iVar5 = iVar8;
      } while (iVar7 != -1);
    }
    *(int *)(iVar9 + 0x30) = iVar3;
    FUN_0014c9c8(param_1,iVar10 * 8000);
  }
  return;
}


// ==== FUN_0014cc20 @ 0014cc20 ====

undefined4 FUN_0014cc20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((0 < *(int *)(param_1 + 0x38)) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x38))) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_0014c640(*(int *)(param_1 + 0x2c) + iVar2);
      iVar2 = iVar2 + 0x50;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  return 1;
}


// ==== FUN_0014cc90 @ 0014cc90 ====

void FUN_0014cc90(void)

{
  FUN_0014cad8();
  return;
}


// ==== FUN_0014ccb0 @ 0014ccb0 ====

void FUN_0014ccb0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0014cd70();
  iVar1 = (int)param_2;
  if ((0 < *(int *)(iVar1 + 0x38)) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0x38))) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      FUN_0014c8c0(param_1,*(int *)(iVar1 + 0x2c) + iVar3);
      iVar3 = iVar3 + 0x50;
    } while (iVar2 < *(int *)(iVar1 + 0x38));
  }
  FUN_0014cd90(param_2);
  return;
}


// ==== FUN_0014cd38 @ 0014cd38 ====

void FUN_0014cd38(int param_1)

{
  *(int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x38) * 0x50 + 0x40) =
       *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38) * 0x9d0;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}


// ==== FUN_0014cd70 @ 0014cd70 ====

void FUN_0014cd70(void)

{
  FUN_0014ca40();
  return;
}


// ==== FUN_0014cd90 @ 0014cd90 ====

void FUN_0014cd90(void)

{
  FUN_0014ca70();
  return;
}


// ==== FUN_0014cdb8 @ 0014cdb8 ====

void FUN_0014cdb8(undefined1 (*param_1) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar8 = _vsub(in_vf0,in_vf0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _sqc2(auVar5);
  *param_1 = auVar5;
  auVar5 = _sqc2(auVar6);
  param_1[1] = auVar5;
  auVar5 = _sqc2(auVar7);
  param_1[2] = auVar5;
  auVar5 = _sqc2(auVar8);
  param_1[3] = auVar5;
  uVar4 = DAT_004432ac;
  uVar3 = DAT_004432a8;
  uVar2 = DAT_004432a4;
  uVar1 = DAT_004432a0;
  param_1[6][0] = 0;
  *(undefined4 *)param_1[4] = uVar1;
  *(undefined4 *)(param_1[4] + 4) = uVar2;
  *(undefined4 *)(param_1[4] + 8) = uVar3;
  *(undefined4 *)(param_1[4] + 0xc) = uVar4;
  return;
}


// ==== FUN_0014ce00 @ 0014ce00 ====

void FUN_0014ce00(undefined1 (*param_1) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar7 = _vsub(in_vf0,in_vf0);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _sqc2(auVar4);
  *param_1 = auVar4;
  auVar4 = _sqc2(auVar5);
  param_1[1] = auVar4;
  auVar4 = _sqc2(auVar6);
  param_1[2] = auVar4;
  auVar4 = _sqc2(auVar7);
  param_1[3] = auVar4;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = DAT_004432a4;
  *(undefined4 *)param_1[4] = DAT_004432a0;
  *(undefined4 *)(param_1[4] + 4) = uVar1;
  *(undefined4 *)(param_1[4] + 8) = uVar2;
  *(undefined4 *)(param_1[4] + 0xc) = uVar3;
  return;
}


// ==== FUN_0014ce40 @ 0014ce40 ====

void FUN_0014ce40(undefined4 *param_1,undefined4 *param_2)

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


// ==== FUN_0014ce68 @ 0014ce68 ====

float FUN_0014ce68(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  float fVar5;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_vf22 [16];
  undefined4 uVar27;
  float fStack_bc;
  float fStack_b8;
  
  auVar24 = _vaddbc(in_vf0,in_vf0);
  auVar23 = _qmtc2(0x3f800000);
  pauVar3 = param_2 + 4;
  auVar8 = _lqc2(*param_3);
  auVar15 = _lqc2(*param_2);
  auVar17 = _lqc2(param_2[1]);
  auVar16 = _lqc2(param_2[2]);
  _vmove(auVar15);
  _vmove(auVar17);
  auVar19 = _vaddbc(in_vf0,auVar17);
  auVar20 = _vaddbc(in_vf0,auVar15);
  _vmove(auVar16);
  auVar26 = _vaddbc(in_vf0,auVar15);
  _vmove(auVar19);
  _vmove(auVar20);
  auVar21 = _vaddbc(in_vf0,auVar16);
  auVar14 = _lqc2(param_2[3]);
  auVar22 = _vaddbc(in_vf0,auVar16);
  _vmove(auVar26);
  auVar6 = _vmulbc(auVar22,auVar14);
  auVar18 = _vaddbc(in_vf0,auVar17);
  auVar10 = _vmulbc(auVar21,auVar14);
  auVar10 = _vadd(auVar10,auVar6);
  auVar6 = _vmulbc(auVar18,auVar14);
  auVar6 = _vadd(auVar10,auVar6);
  auVar9 = _lqc2(param_3[3]);
  auVar7 = _lqc2(param_3[1]);
  auVar11 = _vsub(in_vf0,auVar6);
  auVar6 = _sqc2(auVar24);
  auVar10 = _lqc2(param_3[2]);
  _vmulabc(auVar8,auVar18);
  _vmaddabc(auVar7,auVar18);
  auVar13 = _vmaddbc(auVar10,auVar18);
  _vmulabc(auVar8,auVar11);
  _vmaddabc(auVar7,auVar11);
  _vmaddabc(auVar10,auVar11);
  auVar25 = _vmaddbc(auVar9,in_vf0);
  _vmulabc(auVar8,auVar21);
  _vmaddabc(auVar7,auVar21);
  auVar9 = _vmaddbc(auVar10,auVar21);
  _vmulabc(auVar8,auVar22);
  _vmaddabc(auVar7,auVar22);
  auVar12 = _vmaddbc(auVar10,auVar22);
  auVar7 = _vsubbc(auVar12,auVar13);
  auVar10 = _vsubbc(auVar13,auVar9);
  auVar7 = _vaddbc(in_vf0,auVar7);
  auVar8 = _vsubbc(auVar9,auVar12);
  _vmove(auVar7);
  auVar7 = _vaddbc(auVar9,auVar12);
  _vaddbc(in_vf0,auVar10);
  _sqc2(auVar15);
  auVar15 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar17);
  auVar10 = _vmul(auVar15,auVar15);
  _sqc2(auVar16);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar24,auVar10);
  _sqc2(auVar14);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar10);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  uVar27 = _vwaitq();
  auVar10 = _vmulq(auVar10,uVar27);
  _sqc2(auVar19);
  auVar10 = _qmfc2(auVar10._0_4_);
  _sqc2(auVar20);
  fVar1 = auVar10._0_4_;
  _sqc2(auVar26);
  auVar10 = _vaddbc(auVar7,auVar13);
  auVar7 = _vsubbc(auVar10,auVar23);
  auVar10 = _sqc2(auVar25);
  auVar7 = _qmfc2(auVar7._0_4_);
  _sqc2(auVar21);
  _sqc2(auVar22);
  fVar2 = auVar7._0_4_;
  _sqc2(auVar18);
  _sqc2(auVar11);
  _sqc2(auVar9);
  _sqc2(auVar12);
  _sqc2(auVar13);
  _sqc2(auVar25);
  auVar7 = _sqc2(auVar9);
  auVar8 = _sqc2(auVar12);
  auVar9 = _sqc2(auVar13);
  if (0.0 < fVar1) {
    auVar11 = _qmtc2(1.0 / fVar1);
    auVar15 = _vmulbc(auVar15,auVar11);
    auVar15 = _sqc2(auVar15);
    param_2[4] = auVar15;
  }
  else {
    auVar11 = _vadd(in_vf0,in_vf0);
    auVar15 = _sqc2(auVar11);
    param_2[4] = auVar15;
    _sqc2(auVar11);
  }
  auVar15 = _sqc2(in_vf22);
  fVar4 = (float)atan2f(fVar1,fVar2);
  _lqc2(auVar15);
  fVar5 = fVar4 * 57.295776;
  if (0.01 < fVar1) goto LAB_0014d1f0;
  fVar5 = 0.0;
  auVar15 = _lqc2(auVar8);
  if (0.0 < fVar2) goto LAB_0014d1f0;
  auVar13 = _lqc2(auVar7);
  auVar12 = _qmfc2(auVar13._0_4_);
  auVar11 = _sqc2(auVar15);
  fStack_bc = auVar11._4_4_;
  auVar11 = _lqc2(auVar9);
  if (auVar12._0_4_ <= fStack_bc) {
    auVar12 = _sqc2(auVar15);
    auVar11 = _lqc2(auVar9);
    fStack_bc = auVar12._4_4_;
    auVar12 = _sqc2(auVar11);
    fStack_b8 = auVar12._8_4_;
    if (fStack_bc <= fStack_b8) goto LAB_0014d180;
    auVar12 = _qmtc2(0x3f800000);
    auVar14 = _vaddbc(auVar15,auVar11);
    auVar11 = _vaddbc(auVar15,auVar12);
    auVar12 = _vaddbc(in_vf0,auVar11);
    auVar11 = _vaddbc(auVar15,auVar13);
    auVar15 = _vaddbc(auVar12,auVar12);
    _vaddbc(in_vf0,auVar15);
    _vaddbc(in_vf0,auVar14);
    auVar11 = _vaddbc(in_vf0,auVar11);
    auVar15 = _sqc2(auVar11);
    *pauVar3 = auVar15;
  }
  else {
    auVar14 = _sqc2(auVar11);
    fStack_b8 = auVar14._8_4_;
    if (auVar12._0_4_ <= fStack_b8) {
LAB_0014d180:
      auVar12 = _qmtc2(0x3f800000);
      auVar13 = _vaddbc(auVar11,auVar13);
      auVar12 = _vaddbc(auVar11,auVar12);
      auVar11 = _vaddbc(auVar11,auVar15);
      auVar15 = _vaddbc(in_vf0,auVar12);
      auVar15 = _vaddbc(auVar15,auVar15);
      _vaddbc(in_vf0,auVar15);
      _vaddbc(in_vf0,auVar13);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar15 = _sqc2(auVar11);
      *pauVar3 = auVar15;
    }
    else {
      auVar12 = _qmtc2(0x3f800000);
      auVar14 = _vaddbc(auVar13,auVar15);
      auVar15 = _vaddbc(auVar13,auVar12);
      auVar11 = _vaddbc(auVar13,auVar11);
      auVar15 = _vaddbc(in_vf0,auVar15);
      auVar15 = _vaddbc(auVar15,auVar15);
      _vaddbc(in_vf0,auVar15);
      _vaddbc(in_vf0,auVar14);
      auVar11 = _vaddbc(in_vf0,auVar11);
      auVar15 = _sqc2(auVar11);
      *pauVar3 = auVar15;
    }
  }
  auVar15 = _vmul(auVar11,auVar11);
  auVar6 = _lqc2(auVar6);
  _vaddabc(auVar15,auVar15);
  auVar6 = _vmaddbc(auVar6,auVar15);
  auVar11 = _vmove(auVar11);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar6);
  auVar15 = _qmfc2(auVar6._0_4_);
  _qmtc2(SQRT(auVar15._0_4_));
  uVar27 = _vwaitq();
  auVar6 = _vmulq(auVar11,uVar27);
  auVar6 = _sqc2(auVar6);
  *pauVar3 = auVar6;
  fVar5 = SQRT(auVar15._0_4_);
LAB_0014d1f0:
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar16 = _vsub(in_vf0,in_vf0);
  auVar21 = _vaddbc(in_vf0,in_vf0);
  auVar22 = _vaddbc(in_vf0,in_vf0);
  auVar23 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _lqc2(auVar7);
  auVar15 = _vmove(auVar21);
  auVar25 = _qmtc2(0x3c8efa35);
  auVar6 = _lqc2(auVar8);
  auVar13 = _vsub(auVar15,auVar7);
  auVar8 = _vmove(auVar22);
  auVar24 = _qmtc2(1.0 / param_1);
  auVar7 = _lqc2(auVar9);
  auVar14 = _vsub(auVar8,auVar6);
  auVar6 = _vmove(auVar23);
  auVar12 = _vsub(auVar6,auVar7);
  _vmove(auVar13);
  _vmove(auVar14);
  auVar15 = _vaddbc(in_vf0,auVar14);
  auVar11 = _vaddbc(in_vf0,auVar13);
  _vmove(auVar12);
  auVar17 = _vaddbc(in_vf0,auVar13);
  _vmove(auVar15);
  _vmove(auVar11);
  auVar18 = _vaddbc(in_vf0,auVar12);
  auVar19 = _vaddbc(in_vf0,auVar12);
  _vmove(auVar17);
  auVar20 = _vaddbc(in_vf0,auVar14);
  auVar6 = _vmulbc(auVar19,auVar16);
  auVar7 = _vmulbc(auVar18,auVar16);
  auVar8 = _vmulbc(auVar20,auVar16);
  auVar6 = _vadd(auVar7,auVar6);
  _sqc2(auVar13);
  _sqc2(auVar14);
  auVar6 = _vadd(auVar6,auVar8);
  _sqc2(auVar12);
  auVar9 = _vsub(in_vf0,auVar6);
  _sqc2(auVar15);
  _sqc2(auVar11);
  _sqc2(auVar17);
  _sqc2(auVar21);
  _sqc2(auVar22);
  _sqc2(auVar23);
  _sqc2(auVar16);
  auVar6 = _sqc2(auVar18);
  auVar7 = _sqc2(auVar19);
  auVar8 = _sqc2(auVar20);
  _sqc2(auVar9);
  _sqc2(auVar16);
  _sqc2(auVar13);
  _sqc2(auVar14);
  _sqc2(auVar12);
  _sqc2(auVar9);
  auVar15 = _lqc2(auVar10);
  auVar6 = _lqc2(auVar6);
  auVar6 = _vmulbc(auVar6,auVar15);
  auVar15 = _lqc2(param_2[4]);
  auVar9 = _vadd(auVar9,auVar6);
  _sqc2(auVar9);
  auVar11 = _lqc2(auVar10);
  auVar6 = _lqc2(auVar7);
  auVar6 = _vmulbc(auVar6,auVar11);
  auVar7 = _vadd(auVar9,auVar6);
  _sqc2(auVar7);
  auVar10 = _lqc2(auVar10);
  auVar6 = _lqc2(auVar8);
  auVar6 = _vmulbc(auVar6,auVar10);
  auVar6 = _vadd(auVar7,auVar6);
  _sqc2(auVar6);
  auVar6 = _qmtc2(fVar4 * 57.295776);
  auVar6 = _vmulbc(auVar15,auVar6);
  auVar6 = _vmulbc(auVar6,auVar25);
  auVar6 = _vmulbc(auVar6,auVar24);
  auVar6 = _sqc2(auVar6);
  param_2[4] = auVar6;
  return fVar5;
}


// ==== FUN_0014d358 @ 0014d358 ====

void FUN_0014d358(int param_1,undefined4 param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  auVar3 = _qmtc2(param_2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _vmul(auVar3,auVar3);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar2,auVar1);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar1);
  auVar1 = _vaddbc(in_vf0,in_vf0);
  uVar4 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar4);
  auVar1 = _qmfc2(auVar1._0_4_);
  if (auVar1._0_4_ < 50.0) {
    auVar1 = _sqc2(auVar3);
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar1;
  }
  return;
}


// ==== FUN_0014d3b8 @ 0014d3b8 ====

void FUN_0014d3b8(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ==== FUN_0014d3d0 @ 0014d3d0 ====

undefined4 FUN_0014d3d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[4] = 0;
  *puVar1 = param_2;
  FUN_0014d7f0();
  if (puVar1[2] != 0) {
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    FUN_0014d5a8(param_1);
  }
  return 1;
}


// ==== FUN_0014d420 @ 0014d420 ====

void FUN_0014d420(float param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  
  lVar2 = FUN_0014d4f8();
  if (lVar2 == 0) {
    FUN_0014d4e0(param_2);
  }
  else {
    lVar2 = FUN_0014d548(param_2);
    piVar3 = (int *)param_2;
    if (lVar2 == 0) {
      piVar3[1] = 0;
      FUN_0014d5a8(param_2);
      iVar1 = *piVar3;
    }
    else {
      iVar1 = *piVar3;
    }
    if (*(char *)(*(int *)(iVar1 + 0xb4) + 0x3d) == '\0') {
      if (*(char *)(*(int *)(iVar1 + 0xb4) + 0x3e) != '\0') {
        piVar3[4] = 0;
      }
    }
    else {
      piVar3[4] = 0;
    }
    FUN_0014d638(param_1,param_2);
    fVar4 = (float)piVar3[4];
    piVar3[4] = (int)(fVar4 + param_1);
    if (0.7 < fVar4 + param_1) {
      FUN_0014d4e0(param_2);
    }
  }
  return;
}


// ==== FUN_0014d4e0 @ 0014d4e0 ====

void FUN_0014d4e0(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_0014d4f8 @ 0014d4f8 ====

undefined4 FUN_0014d4f8(int *param_1)

{
  int iVar1;
  
  if (((*param_1 != 0) && (iVar1 = *(int *)(*param_1 + 0xb4), iVar1 != 0)) &&
     ((*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x34) + 0xc) + 0x58) + 0x8c) >> 2 & 1U) != 0)) {
    return 1;
  }
  return 0;
}


// ==== FUN_0014d548 @ 0014d548 ====

bool FUN_0014d548(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  bVar3 = false;
  if ((iVar1 != 0) && (bVar3 = false, *(int *)(iVar1 + 0x37c) == *(int *)(param_1 + 0xc))) {
    if (*(int *)(iVar1 + 0x38c) - 1U < 2) {
      bVar3 = false;
    }
    else {
      cVar2 = FUN_0014ec40(*(undefined4 *)(param_1 + 8),*(undefined8 *)(iVar1 + 0xa0));
      bVar3 = cVar2 == '\x01';
    }
  }
  return bVar3;
}


// ==== FUN_0014d5a8 @ 0014d5a8 ====

void FUN_0014d5a8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0014ec90(*(undefined4 *)((int)param_1 + 8));
  if (lVar1 == 0) {
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  else {
    FUN_0014d5f0(param_1,lVar1);
  }
  return;
}


// ==== FUN_0014d5f0 @ 0014d5f0 ====

void FUN_0014d5f0(int *param_1,undefined8 param_2)

{
  param_1[1] = (int)param_2;
  param_1[3] = *(int *)((int)param_2 + 0x37c);
  FUN_00135dd8(0x3f800000,param_2,8,*(undefined8 *)(*param_1 + 0xa0));
  return;
}


// ==== FUN_0014d638 @ 0014d638 ====

void FUN_0014d638(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  piVar3 = (int *)param_1;
  iVar1 = *(int *)(*piVar3 + 0xb4);
  uVar2 = FUN_0025d8e0(iVar1);
  auVar10 = _qmtc2(uVar2);
  auVar10 = _sqc2(auVar10);
  uVar2 = FUN_0014d8e8(param_1);
  auVar11 = _lqc2(auVar10);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmul(auVar11,auVar11);
  auVar8 = _qmtc2(uVar2);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar5,auVar10);
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar5 = _vmove(auVar5);
  if ((2.3283064e-10 <= auVar10._0_4_) && (*(char *)(iVar1 + 0x3d) == '\0')) {
    auVar6 = _qmtc2(0);
    _vmove(auVar11);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _lqc2(*(undefined1 (*) [16])(*piVar3 + 0xa0));
    auVar9 = _vaddbc(in_vf0,auVar6);
    _vsub(auVar8,auVar10);
    auVar8 = _vaddbc(in_vf0,auVar6);
    auVar10 = _vmul(auVar8,auVar9);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar7,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    if (0.0 <= auVar10._0_4_) {
      auVar10 = _vmul(auVar8,auVar8);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar5,auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar10);
      uVar2 = _vwaitq();
      auVar6 = _vmulq(auVar8,uVar2);
      auVar8 = _qmtc2(0x3f8ccccd);
      auVar10 = _vmul(auVar9,auVar9);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar5,auVar10);
      fVar4 = (float)piVar3[4] * -1.1428572 + 0.8;
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar10);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      uVar2 = _vwaitq();
      auVar10 = _vmulq(auVar10,uVar2);
      auVar5 = _qmtc2(fVar4);
      auVar10 = _vmulbc(auVar6,auVar10);
      _vmulbc(auVar10,auVar8);
      auVar10 = _vaddbc(in_vf0,auVar11);
      auVar10 = _vmulbc(auVar10,auVar5);
      auVar10 = _vadd(auVar11,auVar10);
      auVar5 = _qmtc2(1.0 / (fVar4 + 1.0));
      _vmulbc(auVar10,auVar5);
      auVar10 = _vaddbc(in_vf0,auVar11);
      auVar10 = _qmfc2(auVar10._0_4_);
      FUN_0025d860(iVar1,auVar10._0_8_);
    }
  }
  return;
}


// ==== FUN_0014d7f0 @ 0014d7f0 ====

void FUN_0014d7f0(int *param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pauVar4 = (undefined1 (*) [16])0x0;
  iVar5 = 0;
  fVar6 = 0.0;
  iVar1 = 0;
  while( true ) {
    iVar1 = DAT_0040f4d0 + (iVar1 >> 0x18) * 0x880 + 0x4990;
    iVar5 = iVar5 + 1;
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x38) != '\0')) &&
       (iVar3 = *(int *)(iVar1 + 0xe0), 0 < iVar3)) {
      pauVar2 = (undefined1 (*) [16])(iVar1 + 0xf0);
      auVar10 = _qmtc2(*(undefined4 *)(*param_1 + 0xa0));
      auVar9 = _vaddbc(in_vf0,in_vf0);
      do {
        auVar7 = _lqc2(*pauVar2);
        auVar8 = _qmtc2(0);
        _vsub(auVar10,auVar7);
        auVar7 = _vaddbc(in_vf0,auVar8);
        auVar7 = _vmul(auVar7,auVar7);
        _vaddabc(auVar7,auVar7);
        auVar7 = _vmaddbc(auVar9,auVar7);
        auVar7 = _qmfc2(auVar7._0_4_);
        if ((pauVar4 == (undefined1 (*) [16])0x0) || (auVar7._0_4_ < fVar6)) {
          fVar6 = auVar7._0_4_;
          pauVar4 = pauVar2;
        }
        iVar3 = iVar3 + -1;
        pauVar2 = pauVar2 + 1;
      } while (iVar3 != 0);
    }
    if (1 < iVar5) break;
    iVar1 = iVar5 * 0x1000000;
  }
  if ((pauVar4 != (undefined1 (*) [16])0x0) && (fVar6 <= 64.0)) {
    param_1[2] = (int)pauVar4;
  }
  return;
}


// ==== FUN_0014d8e8 @ 0014d8e8 ====

undefined8 FUN_0014d8e8(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return **(undefined8 **)(param_1 + 8);
  }
  return *(undefined8 *)(*(int *)(param_1 + 4) + 0xa0);
}


// ==== FUN_0014d908 @ 0014d908 ====

void FUN_0014d908(void)

{
  return;
}


// ==== FUN_0014d910 @ 0014d910 ====

undefined4 FUN_0014d910(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xf0;
  do {
    FUN_0014d3b8(param_1);
    param_1 = param_1 + 0x18;
  } while (param_1 < iVar1);
  return 1;
}


// ==== FUN_0014d958 @ 0014d958 ====

void FUN_0014d958(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xf0;
  do {
    FUN_0014d3b8(param_1);
    param_1 = param_1 + 0x18;
  } while (param_1 < iVar1);
  return;
}


// ==== FUN_0014d998 @ 0014d998 ====

void FUN_0014d998(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_2 + 0x14);
  iVar2 = param_2;
  while( true ) {
    if (cVar1 != '\0') {
      FUN_0014d420(param_1,iVar2);
    }
    if (param_2 + 0xf0 <= iVar2 + 0x18) break;
    cVar1 = *(char *)(iVar2 + 0x2c);
    iVar2 = iVar2 + 0x18;
  }
  return;
}


// ==== FUN_0014da08 @ 0014da08 ====

void FUN_0014da08(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = 0;
  piVar2 = param_1;
  while( true ) {
    if (iVar4 == -1) {
      if ((char)piVar2[5] == '\0') {
        iVar4 = iVar3;
      }
      iVar1 = *piVar2;
    }
    else {
      iVar1 = *piVar2;
    }
    if (iVar1 == param_2) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 6;
    if (9 < iVar3) {
      if (iVar4 != -1) {
        FUN_0014d3d0(param_1 + iVar4 * 6);
      }
      return;
    }
  }
  return;
}


// ==== FUN_0014da80 @ 0014da80 ====

void FUN_0014da80(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_2;
  param_1[1] = iVar2;
  iVar1 = FUN_00107d20(iVar2 * 0x1e0);
  iVar2 = iVar2 + -1;
  iVar3 = iVar1;
  if (param_2 != 0) {
    do {
      *(undefined **)(iVar3 + 0x10) = &DAT_003dc750;
      iVar2 = iVar2 + -1;
      *(undefined1 *)(iVar3 + 0x1d0) = 0;
      iVar3 = iVar3 + 0x1e0;
    } while (iVar2 != -1);
  }
  iVar3 = 0;
  *param_1 = iVar1;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      iVar3 = iVar3 + 1;
      FUN_0014fda8(*param_1 + iVar1,0);
      *(undefined1 *)(iVar1 + *param_1 + 0x1d0) = 0;
      iVar1 = iVar1 + 0x1e0;
    } while (iVar3 < param_1[1]);
  }
  return;
}


// ==== FUN_0014db40 @ 0014db40 ====

undefined4 FUN_0014db40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar2 + *param_1 + 0x1d0) = 0;
      iVar1 = iVar2 + *param_1;
      *(undefined1 *)(iVar1 + 0x13d) = 0;
      *(undefined4 *)(iVar1 + 0x120) = 0;
      *(undefined4 *)(iVar1 + 0x11c) = 0;
      iVar2 = iVar2 + 0x1e0;
    } while (iVar3 < param_1[1]);
  }
  return 1;
}


// ==== FUN_0014db90 @ 0014db90 ====

void FUN_0014db90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + *param_1 + 0x1d0) != '\0') {
        FUN_00129240(DAT_0040f4d0,iVar2 + *param_1,0);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x1e0;
    } while (iVar1 < param_1[1]);
  }
  return;
}


// ==== FUN_0014dc10 @ 0014dc10 ====

undefined4 FUN_0014dc10(void)

{
  return 1;
}


// ==== FUN_0014dc18 @ 0014dc18 ====

void FUN_0014dc18(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_001507b8(*param_1 + iVar2);
      iVar2 = iVar2 + 0x1e0;
    } while (iVar1 < param_1[1]);
  }
  return;
}


// ==== FUN_0014dc78 @ 0014dc78 ====

int FUN_0014dc78(int *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = -1;
  if (0 < param_1[1]) {
    pcVar3 = (char *)(*param_1 + 0x1d0);
    do {
      if (*pcVar3 == '\0') {
        iVar7 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pcVar3 = pcVar3 + 0x1e0;
    } while (iVar5 < param_1[1]);
  }
  if (iVar7 == -1) {
    iVar5 = 0;
    uVar4 = DAT_003c0e04 - 2;
    if (0 < param_1[1]) {
      puVar6 = (uint *)(*param_1 + 0x1d4);
      do {
        uVar1 = *puVar6;
        iVar2 = iVar5;
        if (uVar4 <= *puVar6) {
          uVar1 = uVar4;
          iVar2 = iVar7;
        }
        iVar7 = iVar2;
        uVar4 = uVar1;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 0x78;
      } while (iVar5 < param_1[1]);
    }
    if (iVar7 == -1) {
      return -1;
    }
  }
  iVar5 = iVar7 * 0x1e0;
  if (*(char *)(iVar5 + *param_1 + 0x1d0) != '\0') {
    FUN_00152148();
    iVar2 = iVar5 + *param_1;
    *(undefined1 *)(iVar2 + 0x13d) = 0;
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    FUN_00129240(DAT_0040f4d0,*param_1 + iVar5,0);
    *(undefined1 *)(iVar5 + *param_1 + 0x1d0) = 0;
  }
  return iVar7;
}


// ==== FUN_0014dd98 @ 0014dd98 ====

undefined8
FUN_0014dd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  uVar1 = *(undefined4 *)(iVar4 + 0x118);
  lVar2 = FUN_001afda8(*(int *)(iVar4 + 0x1a0) + (int)param_4 * 0xc);
  if (lVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00147988(param_3,param_4);
    uVar3 = FUN_0014de58(param_1,param_2,uVar1,lVar2,uVar3,*(undefined4 *)(iVar4 + 0x1bc),
                         *(undefined4 *)(iVar4 + 0x1c0),param_5);
  }
  return uVar3;
}


// ==== FUN_0014de58 @ 0014de58 ====

int FUN_0014de58(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_0014dc78();
  if (lVar1 == -1) {
    if (param_8 != -1) {
      FUN_0025ce28(DAT_0040f4cc);
      return 0;
    }
  }
  else {
    iVar2 = *param_1 + (int)lVar1 * 0x1e0;
    if (iVar2 != 0) {
      FUN_00150068(iVar2,param_3,param_4,param_5,0,param_2,param_6,param_7);
      *(undefined1 *)(iVar2 + 0x1d0) = 1;
      *(undefined4 *)(iVar2 + 0x1d4) = DAT_003c0e04;
      FUN_00129108(DAT_0040f4d0,iVar2,1,0,param_8);
      return iVar2;
    }
  }
  return 0;
}


// ==== FUN_0014df68 @ 0014df68 ====

void FUN_0014df68(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1[1];
  if (0 < iVar1) {
    iVar2 = *param_1;
    if (iVar2 == param_2) {
LAB_0014dfc0:
      if (iVar3 < iVar1) {
        *(undefined4 *)(param_2 + 0x120) = 0;
        *(undefined4 *)(param_2 + 0x11c) = 0;
        *(undefined1 *)(param_2 + 0x13d) = 0;
        FUN_00129240(DAT_0040f4d0,param_2,0);
        *(undefined1 *)(iVar3 * 0x1e0 + *param_1 + 0x1d0) = 0;
      }
    }
    else {
      for (iVar3 = 1; iVar2 = iVar2 + 0x1e0, iVar3 < iVar1; iVar3 = iVar3 + 1) {
        if (iVar2 == param_2) goto LAB_0014dfc0;
      }
    }
  }
  return;
}


// ==== FUN_0014e010 @ 0014e010 ====

void FUN_0014e010(void)

{
  return;
}


// ==== FUN_0014e018 @ 0014e018 ====

void FUN_0014e018(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      if (*(char *)(iVar3 + *param_1 + 0x1d0) == '\0') {
        iVar1 = param_1[1];
      }
      else {
        lVar2 = FUN_00107bc0(0x40f0f0,*(undefined4 *)(iVar3 + *param_1 + 0x118));
        if (lVar2 == param_2) {
          iVar1 = iVar3 + *param_1;
          *(undefined1 *)(iVar1 + 0x13d) = 0;
          *(undefined4 *)(iVar1 + 0x120) = 0;
          *(undefined4 *)(iVar1 + 0x11c) = 0;
          FUN_00129240(DAT_0040f4d0,*param_1 + iVar3,param_3);
          *(undefined1 *)(iVar3 + *param_1 + 0x1d0) = 0;
          iVar1 = param_1[1];
        }
        else {
          iVar1 = param_1[1];
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1e0;
    } while (iVar4 < iVar1);
  }
  return;
}


// ==== FUN_0014e0f8 @ 0014e0f8 ====

void FUN_0014e0f8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar1 = DAT_0040f514;
  iVar5 = 0;
  if (*(int *)(DAT_0040f514 + 0x79a4) < 1) {
    return;
  }
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar6 = _sqc2(auVar6);
  iVar3 = *(int *)(DAT_0040f514 + 0x79ac);
  while( true ) {
    iVar3 = *(int *)(iVar5 * 4 + iVar3);
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x79a4);
    }
    else if (*(int *)(iVar3 + 0xc4) == 1) {
      lVar4 = FUN_00135550(iVar3);
      if (lVar4 == 0) {
        iVar3 = *(int *)(iVar1 + 0x79a4);
      }
      else {
        iVar2 = FUN_00135550(iVar3);
        if (*(int *)(iVar2 + 0x80) == 1) {
          iVar2 = FUN_00135550(iVar3);
          lVar4 = FUN_0018ddd8(iVar2 + 0xc94);
          if (lVar4 == 0) {
            auVar8._8_4_ = in_a1_udw;
            auVar8._0_8_ = param_2;
            auVar8._12_4_ = in_register_0000005c;
            auVar8 = _lqc2(auVar8);
            auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
            auVar8 = _vsub(auVar7,auVar8);
            auVar8 = _vmul(auVar8,auVar8);
            auVar9 = _lqc2(auVar6);
            _vaddabc(auVar8,auVar8);
            auVar8 = _vmaddbc(auVar9,auVar8);
            auVar8 = _qmfc2(auVar8._0_4_);
            if (auVar8._0_4_ < 225.0) {
              auVar8 = _pextlw(0,0);
              auVar8 = _pextlw(0x40000000,auVar8._0_8_);
              auVar8 = _qmtc2(auVar8._0_4_);
              auVar8 = _vadd(auVar7,auVar8);
              auVar8 = _sqc2(auVar8);
              *(undefined1 (*) [16])(*(int *)(param_1 + 0x50) * 0x10 + param_1) = auVar8;
              iVar3 = *(int *)(param_1 + 0x50) + 1;
              *(int *)(param_1 + 0x50) = iVar3;
              if (4 < iVar3) {
                return;
              }
              iVar3 = *(int *)(iVar1 + 0x79a4);
            }
            else {
              iVar3 = *(int *)(iVar1 + 0x79a4);
            }
          }
          else {
            iVar3 = *(int *)(iVar1 + 0x79a4);
          }
        }
        else {
          iVar3 = *(int *)(iVar1 + 0x79a4);
        }
      }
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x79a4);
    }
    iVar5 = iVar5 + 1;
    if (iVar3 <= iVar5) break;
    iVar3 = *(int *)(iVar1 + 0x79ac);
  }
  return;
}


// ==== FUN_0014e278 @ 0014e278 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014e278(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16],long param_4,
                 long param_5)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  undefined1 in_s1_qw [16];
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 in_vf0 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [16];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  
  iStack_178 = (int)param_5;
  iVar9 = -1;
  if (param_5 != 0) {
    uStack_2c0 = *(undefined4 *)(iStack_178 + 0x90);
    uStack_2bc = *(undefined4 *)(iStack_178 + 0x94);
    uStack_2b8 = *(undefined4 *)(iStack_178 + 0x98);
    uStack_2b4 = *(undefined4 *)(iStack_178 + 0x9c);
    uStack_2b0 = *(undefined4 *)(iStack_178 + 0xa0);
    uStack_2ac = *(undefined4 *)(iStack_178 + 0xa4);
    uStack_2a8 = *(undefined4 *)(iStack_178 + 0xa8);
    uStack_2a4 = *(undefined4 *)(iStack_178 + 0xac);
  }
  if (param_4 != 0) {
    puVar8 = (undefined8 *)param_4;
    iStack_17c = param_2;
    iStack_174 = FUN_00108120(DAT_0040f4c4,*puVar8);
    *(undefined4 *)param_1[5] = 0;
    if (5 < *(int *)((int)puVar8 + 0x1c)) {
      auVar5 = _lqc2(param_3[3]);
      auVar29 = _vaddbc(in_vf0,in_vf0);
      auVar26 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xa0);
      auVar28 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xa0);
      auVar30 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xb0);
      auVar22 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xb0);
      auVar23 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0);
      auVar25 = *(undefined1 (*) [16])(DAT_0040f4d0 + 0xc0);
      auVar24 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
      auVar5 = _vsub(auVar24,auVar5);
      auVar5 = _vmul(auVar5,auVar5);
      _vaddabc(auVar5,auVar5);
      auVar29 = _vmaddbc(auVar29,auVar5);
      auVar5 = _sqc2(auVar24);
      auVar29 = _qmfc2(auVar29._0_4_);
      if (auVar29._0_4_ < 225.0) {
        lVar2 = FUN_0012d158(DAT_0040f4d0,0,100);
        if (0x46 < lVar2) {
          auVar29 = _qmtc2(0x40333333);
          auVar22 = _lqc2(auVar22);
          auVar29 = _vmulbc(auVar22,auVar29);
          auVar22 = _lqc2(auVar5);
          auVar27 = _qmtc2(0xbf000000);
          auVar24 = _lqc2(auVar25);
          auVar22 = _vadd(auVar22,auVar29);
          auVar25 = _lqc2(auVar28);
          auVar28 = _vmulbc(auVar24,auVar27);
          auVar29 = _qmtc2(0x3e4ccccd);
          auVar22 = _vadd(auVar22,auVar28);
          auVar25 = _vmulbc(auVar25,auVar29);
          auVar22 = _vadd(auVar22,auVar25);
          auVar22 = _sqc2(auVar22);
          param_1[*(int *)param_1[5]] = auVar22;
          iVar9 = *(int *)param_1[5];
          *(int *)param_1[5] = iVar9 + 1;
        }
        lVar2 = FUN_0012d158(DAT_0040f4d0,0,100);
        if (lVar2 < 0x1e) {
          auVar22 = _qmtc2(0x40333333);
          auVar25 = _lqc2(auVar30);
          auVar22 = _vmulbc(auVar25,auVar22);
          auVar5 = _lqc2(auVar5);
          auVar28 = _qmtc2(0xbf000000);
          auVar25 = _lqc2(auVar23);
          auVar5 = _vadd(auVar5,auVar22);
          auVar22 = _lqc2(auVar26);
          auVar25 = _vmulbc(auVar25,auVar28);
          auVar28 = _qmtc2(0xbe4ccccd);
          auVar5 = _vadd(auVar5,auVar25);
          auVar22 = _vmulbc(auVar22,auVar28);
          auVar5 = _vadd(auVar5,auVar22);
          auVar5 = _sqc2(auVar5);
          param_1[*(int *)param_1[5]] = auVar5;
          iVar9 = *(int *)param_1[5];
          *(int *)param_1[5] = iVar9 + 1;
        }
      }
    }
    FUN_0014e0f8(param_1);
    if (-1 < iVar9) {
      auVar5 = _pextlw(0,0);
      in_s1_qw = _pextlw(0,auVar5._0_8_);
      uStack_260 = CONCAT35(uStack_260._5_3_,0x3e26b0);
      uStack_1ac = 0;
      uStack_1a0 = in_s1_qw._0_4_;
      uStack_19c = in_s1_qw._4_4_;
      uStack_198 = in_s1_qw._8_4_;
      uStack_194 = in_s1_qw._12_4_;
      iVar1 = FUN_0012d158(DAT_0040f4d0,0,*(int *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x330) + -1);
      uStack_188 = *(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + iVar1 * 8 + 0x168);
      lVar2 = FUN_00280200(DAT_0040f510,&uStack_188,0);
      if (lVar2 != 0) {
        uStack_200 = (undefined4)lVar2;
        auStack_220 = param_1[iVar9];
        uStack_210 = in_s1_qw._0_4_;
        uStack_20c = in_s1_qw._4_4_;
        uStack_208 = in_s1_qw._8_4_;
        uStack_204 = in_s1_qw._12_4_;
        uStack_1fc = 0x3f800000;
        uStack_1a8 = 0;
        uStack_1dc = 0x41200000;
        uStack_1e0 = 0x437a0000;
        uStack_1e8 = 0x3e99999a;
        uStack_1ec = 0x3f19999a;
        uStack_1ac = 0x4b8f;
        uStack_190 = (undefined4)uStack_260;
        FUN_00285748(&uStack_1a0,DAT_0040f510 + 0xb308,&uStack_250);
        uStack_258 = CONCAT44(uStack_194,uStack_198);
        uStack_260 = CONCAT44(uStack_19c,uStack_190);
      }
    }
    iVar9 = 0;
    if (0 < *(int *)((int)puVar8 + 0x1c)) {
      uVar12 = 0xbe800000;
      fVar20 = 0.017453292;
      fVar10 = *(float *)(puVar8 + 4);
      do {
        fVar10 = fVar10 * 180.0;
        if (iStack_178 == 0) {
          uVar11 = FUN_0012d0d0(uVar12,0x3e800000,DAT_0040f4d0);
          _lqc2(auStack_170);
          auVar5 = _qmtc2(uVar11);
          auVar5 = _vaddbc(in_vf0,auVar5);
          auStack_170 = _sqc2(auVar5);
          uVar11 = FUN_0012d0d0(uVar12,0x3e800000,DAT_0040f4d0);
          auVar5 = _qmtc2(uVar11);
          _lqc2(auStack_170);
          auVar5 = _vaddbc(in_vf0,auVar5);
          auStack_170 = _sqc2(auVar5);
          uVar11 = 0x3e800000;
          uVar21 = uVar12;
        }
        else {
          auVar22._4_4_ = uStack_2ac;
          auVar22._0_4_ = uStack_2b0;
          auVar22._8_4_ = uStack_2a8;
          auVar22._12_4_ = uStack_2a4;
          auVar25 = _lqc2(auVar22);
          auVar5._4_4_ = uStack_2bc;
          auVar5._0_4_ = uStack_2c0;
          auVar5._8_4_ = uStack_2b8;
          auVar5._12_4_ = uStack_2b4;
          auVar22 = _lqc2(auVar5);
          auVar5 = _qmfc2(auVar25._0_4_);
          auVar22 = _qmfc2(auVar22._0_4_);
          uVar11 = FUN_0012d0d0(auVar5._0_4_,auVar22._0_4_,DAT_0040f4d0);
          _lqc2(auStack_170);
          auVar5 = _qmtc2(uVar11);
          auVar5 = _vaddbc(in_vf0,auVar5);
          auStack_170 = _sqc2(auVar5);
          auStack_220._4_4_ = uStack_2bc;
          auStack_220._0_4_ = uStack_2c0;
          auStack_220._8_4_ = uStack_2b8;
          auStack_220._12_4_ = uStack_2b4;
          uVar21 = uVar12;
          uVar12 = FUN_0012d0d0(uStack_2ac,uStack_2bc,DAT_0040f4d0);
          auVar5 = _qmtc2(uVar12);
          _lqc2(auStack_170);
          auVar5 = _vaddbc(in_vf0,auVar5);
          auStack_170 = _sqc2(auVar5);
          uVar11 = uStack_2b8;
          uVar12 = uStack_2a8;
        }
        uVar7 = in_s1_qw._8_8_;
        lVar2 = 0;
        uVar12 = FUN_0012d0d0(uVar12,uVar11,DAT_0040f4d0);
        _lqc2(auStack_170);
        auVar5 = _qmtc2(uVar12);
        auVar5 = _vaddbc(in_vf0,auVar5);
        auVar5 = _sqc2(auVar5);
        auVar30 = _lqc2(auVar5);
        auVar28 = _lqc2(*param_3);
        auVar25 = _lqc2(param_3[1]);
        auVar22 = _lqc2(param_3[2]);
        auVar5 = _lqc2(param_3[3]);
        _vmulabc(auVar28,auVar30);
        _vmaddabc(auVar25,auVar30);
        _vmaddabc(auVar22,auVar30);
        auVar5 = _vmaddbc(auVar5,in_vf0);
        auStack_170 = _sqc2(auVar5);
        iVar1 = FUN_0012d158(DAT_0040f4d0,*(undefined4 *)((int)puVar8 + 0x3c),
                             *(undefined4 *)(puVar8 + 8));
        fVar19 = (float)iVar1 * fVar20;
        iVar1 = FUN_0012d158(DAT_0040f4d0,*(undefined4 *)((int)puVar8 + 0x34),
                             *(undefined4 *)(puVar8 + 7));
        auVar28 = _lqc2(*param_3);
        auVar25 = _lqc2(param_3[1]);
        auVar5 = _lqc2(param_3[2]);
        auVar22 = _lqc2(_DAT_004432d0);
        _vmulabc(auVar28,auVar22);
        _vmaddabc(auVar25,auVar22);
        auVar5 = _vmaddbc(auVar5,auVar22);
        auStack_220 = _sqc2(auVar5);
        auStack_150 = _sqc2(auVar5);
        uVar3 = FUN_00291f58(auStack_220._8_4_);
        auVar5 = _lqc2(auStack_150);
        auVar5 = _qmfc2(auVar5._0_4_);
        uVar4 = FUN_00291f58(auVar5._0_4_);
        uVar3 = atan2(uVar3,uVar4);
        uVar4 = FUN_00291f58((float)iVar1);
        uVar3 = FUN_00291410(uVar4,uVar3);
        fVar13 = (float)FUN_00291c68(uVar3);
        fVar13 = fVar13 * fVar20;
        fVar14 = (float)FUN_0029dc18(fVar13);
        fVar15 = (float)FUN_0029da28(fVar19);
        _lqc2(auStack_160);
        auVar5 = _qmtc2(fVar14 * fVar15);
        auVar5 = _vaddbc(in_vf0,auVar5);
        auStack_160 = _sqc2(auVar5);
        uVar12 = FUN_0029dc18(fVar19);
        auVar5 = _qmtc2(uVar12);
        _lqc2(auStack_160);
        auVar5 = _vaddbc(in_vf0,auVar5);
        auStack_160 = _sqc2(auVar5);
        fVar13 = (float)FUN_0029da28(fVar13);
        fVar14 = (float)FUN_0029da28(fVar19);
        _lqc2(auStack_160);
        auVar5 = _qmtc2(fVar13 * fVar14);
        auVar22 = _vaddbc(in_vf0,in_vf0);
        auVar25 = _vaddbc(in_vf0,auVar5);
        uStack_240 = *(undefined4 *)param_3[2];
        uStack_23c = *(undefined4 *)(param_3[2] + 4);
        uStack_238 = *(undefined4 *)(param_3[2] + 8);
        uStack_234 = *(undefined4 *)(param_3[2] + 0xc);
        auVar5 = _vmul(auVar25,auVar25);
        uStack_260 = *(undefined8 *)*param_3;
        uStack_258 = *(undefined8 *)(*param_3 + 8);
        _vaddabc(auVar5,auVar5);
        auVar5 = _vmaddbc(auVar22,auVar5);
        uStack_248 = *(undefined4 *)(param_3[1] + 8);
        uStack_244 = *(undefined4 *)(param_3[1] + 0xc);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar5);
        uVar12 = _vwaitq();
        auVar5 = _vmulq(auVar25,uVar12);
        auStack_160 = _sqc2(auVar5);
        uStack_250 = (undefined4)*(undefined8 *)param_3[1];
        uStack_24c = (undefined4)((ulong)*(undefined8 *)param_3[1] >> 0x20);
        auVar5 = _lqc2(auStack_160);
        uStack_230 = auStack_170._0_4_;
        uStack_22c = auStack_170._4_4_;
        uStack_228 = auStack_170._8_4_;
        uStack_224 = auStack_170._12_4_;
        uVar12 = uVar21;
        if (0 < *(int *)param_1[5]) {
          auVar22 = _vmove(auVar22);
          auVar28 = _vsubbc(in_vf0,in_vf0);
          auVar25 = _vaddbc(in_vf0,in_vf0);
          pauVar6 = param_1;
          do {
            iVar1 = (int)lVar2;
            auVar29 = _lqc2(*pauVar6);
            auVar23 = _vmul(auVar5,auVar5);
            auVar30._4_4_ = uStack_22c;
            auVar30._0_4_ = uStack_230;
            auVar30._8_4_ = uStack_228;
            auVar30._12_4_ = uStack_224;
            auVar26 = _lqc2(auVar30);
            _vaddabc(auVar23,auVar23);
            auVar30 = _vmaddbc(auVar22,auVar23);
            auVar29 = _vsub(auVar29,auVar26);
            auVar23 = _vmove(auVar5);
            _vnop();
            _vnop();
            _vnop();
            _vrsqrt(in_vf0,auVar30);
            auVar30 = _vaddbc(in_vf0,in_vf0);
            uVar11 = _vwaitq();
            auVar26 = _vmulq(auVar23,uVar11);
            _vmulq(auVar30,uVar11);
            auVar30 = _vmul(auVar29,auVar29);
            _vaddabc(auVar30,auVar30);
            auVar30 = _vmaddbc(auVar22,auVar30);
            auVar23 = _vmove(auVar29);
            _vnop();
            _vnop();
            _vnop();
            _vrsqrt(in_vf0,auVar30);
            uVar11 = _vwaitq();
            auVar29 = _vmulq(auVar23,uVar11);
            auStack_130 = _sqc2(auVar22);
            auVar30 = _vmul(auVar29,auVar29);
            auVar23 = _vmove(auVar29);
            _vaddabc(auVar30,auVar30);
            auVar22 = _vmaddbc(auVar22,auVar30);
            auStack_140 = _sqc2(auVar29);
            _vnop();
            _vnop();
            _vnop();
            _vrsqrt(in_vf0,auVar22);
            auVar30 = _vaddbc(in_vf0,in_vf0);
            uVar11 = _vwaitq();
            auVar22 = _vmulq(auVar23,uVar11);
            _vmulq(auVar30,uVar11);
            auStack_120 = _sqc2(auVar5);
            auVar5 = _vmul(auVar26,auVar22);
            auStack_110 = _sqc2(auVar25);
            _vaddabc(auVar5,auVar5);
            auVar5 = _vmaddbc(auVar25,auVar5);
            auStack_100 = _sqc2(auVar28);
            auVar5 = _vmax(auVar5,auVar28);
            auVar5 = _vminibc(auVar5,in_vf0);
            auVar5 = _qmfc2(auVar5._0_4_);
            fVar13 = (float)acosf(auVar5._0_4_);
            auVar30 = _lqc2(auStack_140);
            auVar22 = _lqc2(auStack_130);
            auVar5 = _lqc2(auStack_120);
            auVar25 = _lqc2(auStack_110);
            auVar28 = _lqc2(auStack_100);
            if (fVar13 * 57.29578 < fVar10) {
              auStack_160 = _sqc2(auVar30);
              break;
            }
            lVar2 = (long)(iVar1 + 1);
            pauVar6 = pauVar6 + 1;
          } while (lVar2 < *(int *)param_1[5]);
        }
        lVar2 = FUN_0025cda0(DAT_0040f4cc,&uStack_180,3);
        if (lVar2 == 0) {
          return;
        }
        uVar3 = FUN_0012d158(DAT_0040f4d0,0,*(byte *)(iStack_174 + 0x6a) - 1);
        lVar2 = FUN_001291e8(DAT_0040f4d0,1,iStack_174,uVar3,&uStack_260,uStack_180);
        in_s1_qw._8_8_ = uVar7;
        in_s1_qw._0_8_ = lVar2;
        if (lVar2 != 0) {
          iVar1 = *(int *)((int)lVar2 + 0xb4);
          if (iStack_17c != 0) {
            *(undefined4 *)((int)lVar2 + 0x124) = *(undefined4 *)(iStack_17c + 0x124);
          }
          if (iVar1 != 0) {
            fVar13 = *(float *)((int)puVar8 + 0x2c) * fVar20;
            fVar10 = *(float *)(puVar8 + 6) * fVar20;
            uVar11 = FUN_0012d0d0(*(undefined4 *)((int)puVar8 + 0x24),*(undefined4 *)(puVar8 + 5),
                                  DAT_0040f4d0);
            iVar16 = FUN_0012d0d0(fVar13,fVar10,DAT_0040f4d0);
            iVar17 = FUN_0012d0d0(fVar13,fVar10,DAT_0040f4d0);
            iVar18 = FUN_0012d0d0(fVar13,fVar10,DAT_0040f4d0);
            auVar5 = _qmtc2(uVar11);
            auVar22 = _lqc2(auStack_160);
            *(undefined4 *)(*(int *)(iVar1 + 0x34) + 0x18) = 9;
            auVar5 = _vmulbc(auVar22,auVar5);
            auVar5 = _qmfc2(auVar5._0_4_);
            *(undefined4 *)(*(int *)(*(int *)(in_s1_qw._0_4_ + 0x128) + 4) + 0x2c) = 0x41200000;
            FUN_0025d860(iVar1,auVar5._0_8_);
            auVar5 = _pextlw((long)iVar18,(long)iVar16);
            auStack_220 = _pextlw((long)iVar17,auVar5._0_8_);
            auVar5 = _por(in_zero_qw,auStack_220);
            FUN_0025d910(iVar1,auVar5._0_8_);
            if (puVar8[1] != 0) {
              FUN_001b69e0(DAT_0040f4d8 + 0x66290,puVar8[1],in_s1_qw._0_8_,1,8);
            }
          }
        }
        iVar9 = iVar9 + 1;
        if (*(int *)((int)puVar8 + 0x1c) <= iVar9) {
          return;
        }
        fVar10 = *(float *)(puVar8 + 4);
      } while( true );
    }
  }
  return;
}


// ==== FUN_0014ebe0 @ 0014ebe0 ====

void FUN_0014ebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0014e278(param_1,0,param_2,param_3,0);
  return;
}


// ==== FUN_0014ec08 @ 0014ec08 ====

void FUN_0014ec08(void)

{
  return;
}


// ==== FUN_0014ec10 @ 0014ec10 ====

undefined4 FUN_0014ec10(undefined4 param_1,undefined1 (*param_2) [16],undefined4 param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  _lqc2(*param_2);
  auVar1 = _qmtc2(param_3);
  auVar1 = _vadd(in_vf0,auVar1);
  auVar3 = _qmtc2(param_1);
  _vmove(auVar1);
  auVar2 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar2);
  *param_2 = auVar1;
  auVar1 = _vaddbc(auVar2,auVar3);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return 1;
}


// ==== FUN_0014ec40 @ 0014ec40 ====

bool FUN_0014ec40(undefined1 (*param_1) [16],undefined4 param_2)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fStack_4;
  
  auVar1 = _lqc2(*param_1);
  auVar3 = _qmtc2(param_2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _vsub(auVar3,auVar1);
  auVar1 = _sqc2(auVar1);
  auVar3 = _vmul(auVar3,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar2,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  fStack_4 = auVar1._12_4_;
  return auVar3._0_4_ <= fStack_4 * fStack_4;
}


// ==== FUN_0014ec90 @ 0014ec90 ====

int FUN_0014ec90(undefined1 (*param_1) [16])

{
  int iVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fStack_a4;
  
  iVar1 = DAT_0040f514;
  iVar5 = 0;
  auVar8 = _lqc2(*param_1);
  auVar10 = _vmulbc(auVar8,auVar8);
  auVar10 = _sqc2(auVar10);
  auVar8 = _sqc2(auVar8);
  fStack_a4 = auVar10._12_4_;
  iVar7 = 0;
  if (0 < *(int *)(DAT_0040f514 + 0x79a4)) {
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _sqc2(auVar10);
    iVar2 = *(int *)(DAT_0040f514 + 0x79ac);
    iVar6 = 0;
    while( true ) {
      iVar7 = *(int *)(iVar5 * 4 + iVar2);
      fVar3 = fStack_a4;
      if (iVar7 == 0) {
        iVar2 = *(int *)(iVar1 + 0x79a4);
        iVar7 = iVar6;
      }
      else if (*(int *)(iVar7 + 0xc4) == 1) {
        lVar4 = FUN_00135550(iVar7);
        if (lVar4 == 0) {
          iVar2 = *(int *)(iVar1 + 0x79a4);
          iVar7 = iVar6;
        }
        else {
          iVar2 = FUN_00135550(iVar7);
          if (*(int *)(iVar2 + 0x80) == 1) {
            iVar2 = FUN_00135550(iVar7);
            lVar4 = FUN_0018ddd8(iVar2 + 0xc94);
            if (lVar4 == 0) {
              auVar9 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0xa0));
              auVar11 = _qmtc2(0);
              auVar12 = _lqc2(auVar8);
              _vsub(auVar9,auVar12);
              auVar9 = _vaddbc(in_vf0,auVar11);
              auVar9 = _vmul(auVar9,auVar9);
              auVar11 = _lqc2(auVar10);
              _vaddabc(auVar9,auVar9);
              auVar9 = _vmaddbc(auVar11,auVar9);
              auVar9 = _qmfc2(auVar9._0_4_);
              fVar3 = auVar9._0_4_;
              iVar2 = *(int *)(iVar1 + 0x79a4);
              if (fStack_a4 <= fVar3) {
                fVar3 = fStack_a4;
                iVar7 = iVar6;
              }
            }
            else {
              iVar2 = *(int *)(iVar1 + 0x79a4);
              iVar7 = iVar6;
            }
          }
          else {
            iVar2 = *(int *)(iVar1 + 0x79a4);
            iVar7 = iVar6;
          }
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x79a4);
        iVar7 = iVar6;
      }
      iVar5 = iVar5 + 1;
      if (iVar2 <= iVar5) break;
      iVar2 = *(int *)(iVar1 + 0x79ac);
      fStack_a4 = fVar3;
      iVar6 = iVar7;
    }
  }
  return iVar7;
}


// ==== FUN_0014ede0 @ 0014ede0 ====

void FUN_0014ede0(undefined8 param_1)

{
  int iVar1;
  
  FUN_0014bd18();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x114) = 0;
  *(undefined4 *)(iVar1 + 0x118) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 7;
  FUN_0014ee48(param_1);
  *(undefined4 *)(iVar1 + 0x158) = 0;
  *(undefined4 *)(iVar1 + 0x140) = 5;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  *(undefined1 *)(iVar1 + 0x13a) = 0;
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined2 *)(iVar1 + 0x150) = 0;
  *(undefined1 *)(iVar1 + 0x154) = 0;
  *(undefined1 *)(iVar1 + 0x152) = 0;
  *(undefined1 *)(iVar1 + 0x153) = 0;
  return;
}


// ==== FUN_0014ee48 @ 0014ee48 ====

void FUN_0014ee48(int param_1)

{
  undefined4 uVar1;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  auStack_60[0] = 0;
  FUN_0032b860(&uStack_50,1,0);
  auStack_60[0] = FUN_00107c98(0x40f0f0,&uStack_50);
  uVar1 = FUN_0032bb28(auStack_60,1,0);
  uStack_50 = 0x60;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  uStack_4c = 0x10;
  auStack_60[0] = FUN_00107c98(0x40f0f0,&uStack_50);
  uVar1 = FUN_00334268(auStack_60,4);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  return;
}


// ==== FUN_0014eef0 @ 0014eef0 ====

void FUN_0014eef0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined2 param_8,
                 undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1;
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 0x2b) = param_3;
  *(undefined1 *)((int)puVar1 + 0x153) = param_10;
  *(undefined1 *)((int)puVar1 + 0x152) = 0;
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  *(undefined1 *)((int)puVar1 + 0x154) = 0;
  *(undefined1 *)((int)puVar1 + 0x155) = 0;
  FUN_0014ef58(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


// ==== FUN_0014ef58 @ 0014ef58 ====

undefined4
FUN_0014ef58(undefined8 param_1,int param_2,undefined1 param_3,undefined4 param_4,
            undefined8 *param_5,undefined2 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = (int)param_1;
  *(undefined1 *)(iVar5 + 0x148) = param_3;
  *(undefined2 *)(iVar5 + 0x150) = param_6;
  *(undefined1 *)(iVar5 + 0x152) = param_7;
  *(undefined1 *)(iVar5 + 0x153) = param_8;
  *(int *)(iVar5 + 0x140) = param_2;
  *(undefined1 *)(iVar5 + 0x154) = 0;
  *(undefined1 *)(iVar5 + 0x155) = 0;
  fVar7 = *(float *)(&DAT_003f52f8 + param_2 * 4);
  fVar6 = *(float *)(DAT_0040f4d0 + 0x20);
  *(undefined4 *)(iVar5 + 0x118) = param_4;
  *(float *)(iVar5 + 0x14c) = fVar7 + fVar6;
  uVar2 = *param_5;
  uVar3 = *(undefined4 *)(param_5 + 1);
  uVar4 = *(undefined4 *)((int)param_5 + 0xc);
  *(int *)(iVar5 + 0x70) = (int)uVar2;
  *(int *)(iVar5 + 0x74) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0x78) = uVar3;
  *(undefined4 *)(iVar5 + 0x7c) = uVar4;
  uVar2 = param_5[2];
  uVar3 = *(undefined4 *)(param_5 + 3);
  uVar4 = *(undefined4 *)((int)param_5 + 0x1c);
  *(int *)(iVar5 + 0x80) = (int)uVar2;
  *(int *)(iVar5 + 0x84) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0x88) = uVar3;
  *(undefined4 *)(iVar5 + 0x8c) = uVar4;
  uVar2 = param_5[4];
  uVar3 = *(undefined4 *)(param_5 + 5);
  uVar4 = *(undefined4 *)((int)param_5 + 0x2c);
  *(int *)(iVar5 + 0x90) = (int)uVar2;
  *(int *)(iVar5 + 0x94) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0x98) = uVar3;
  *(undefined4 *)(iVar5 + 0x9c) = uVar4;
  uVar2 = param_5[6];
  uVar3 = *(undefined4 *)(param_5 + 7);
  uVar4 = *(undefined4 *)((int)param_5 + 0x3c);
  *(int *)(iVar5 + 0xa0) = (int)uVar2;
  *(int *)(iVar5 + 0xa4) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0xa8) = uVar3;
  *(undefined4 *)(iVar5 + 0xac) = uVar4;
  FUN_0014f028();
  puVar1 = *(undefined8 **)(iVar5 + 0x118);
  uVar2 = *puVar1;
  uVar3 = *(undefined4 *)(puVar1 + 1);
  uVar4 = *(undefined4 *)((int)puVar1 + 0xc);
  *(undefined4 *)(iVar5 + 0x110) = 0;
  *(int *)(iVar5 + 0x60) = (int)uVar2;
  *(int *)(iVar5 + 100) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar5 + 0x68) = uVar3;
  *(undefined4 *)(iVar5 + 0x6c) = uVar4;
  *(byte *)(iVar5 + 0x13a) = (*(byte *)(iVar5 + 0x152) >> 1 ^ 1) & 1;
  *(undefined1 *)(iVar5 + 0x13b) = 0;
  *(undefined4 *)(iVar5 + 0x144) = DAT_003c0e04;
  FUN_0014bd58(param_1);
  return 1;
}


// ==== FUN_0014f028 @ 0014f028 ====

void FUN_0014f028(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  bool bVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  auVar11 = _qmtc2(0x3f000000);
  bVar5 = false;
  uVar8 = 0;
  iVar7 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar7 + 0x118) + 0x48);
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar9 = _vsub(auVar9,auVar10);
  auVar11 = _vmulbc(auVar9,auVar11);
  auVar14 = _vmove(auVar11);
  auVar10 = _qmfc2(auVar14._0_4_);
  auVar9 = _sqc2(auVar14);
  fStack_88 = auVar9._8_4_;
  bVar4 = false;
  if (auVar10._0_4_ < fStack_88) {
    auVar9 = _sqc2(auVar14);
    fStack_88 = auVar9._8_4_;
    auVar9 = _sqc2(auVar14);
    fStack_8c = auVar9._4_4_;
    bVar4 = fStack_8c < fStack_88;
  }
  fStack_88 = (float)0;
  if (bVar4) {
    auVar9 = _sqc2(auVar11);
    auVar12 = _qmtc2(0x40400000);
    auVar10 = _vmulbc(auVar11,auVar12);
    auVar10 = _qmfc2(auVar10._0_4_);
    fStack_88 = auVar9._8_4_;
    bVar4 = false;
    if (auVar10._0_4_ < fStack_88) {
      auVar9 = _sqc2(auVar11);
      auVar10 = _vmulbc(auVar11,auVar12);
      fStack_88 = auVar9._8_4_;
      auVar9 = _sqc2(auVar10);
      fStack_8c = auVar9._4_4_;
      bVar4 = fStack_8c < fStack_88;
    }
    fStack_88 = (float)0;
    if (bVar4) {
      auVar9 = _sqc2(auVar11);
      auVar10 = _qmfc2(auVar11._0_4_);
      fVar6 = auVar10._0_4_;
      bVar5 = true;
      fStack_88 = auVar9._8_4_;
      auVar9 = _sqc2(auVar11);
      fStack_8c = auVar9._4_4_;
      uVar8 = (int)fStack_8c * (uint)(fVar6 < fStack_8c) | (int)fVar6 * (uint)(fVar6 >= fStack_8c);
    }
  }
  if (bVar5) {
    iVar2 = *(int *)(iVar7 + 0xb8);
    auVar9 = _sqc2(auVar14);
    FUN_003342d0(iVar2,2);
    *(uint *)(iVar2 + 0x4c) = uVar8;
    *(float *)(iVar2 + 0x40) = fStack_88;
    auVar11 = _lqc2(auVar9);
  }
  else {
    auVar9 = _qmfc2(auVar11._0_4_);
    fVar6 = auVar9._0_4_;
    _vmove(auVar11);
    auVar9 = _qmtc2((uint)(fVar6 < 0.07) * 0x3d8f5c29 | (int)fVar6 * (uint)(fVar6 >= 0.07));
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar9 = _sqc2(auVar9);
    fStack_8c = auVar9._4_4_;
    auVar9 = _qmtc2((uint)(fStack_8c < 0.07) * 0x3d8f5c29 |
                    (int)fStack_8c * (uint)(fStack_8c >= 0.07));
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar9 = _sqc2(auVar9);
    fStack_88 = auVar9._8_4_;
    auVar9 = _qmtc2((uint)(fStack_88 < 0.07) * 0x3d8f5c29 |
                    (int)fStack_88 * (uint)(fStack_88 >= 0.07));
    auVar9 = _vaddbc(in_vf0,auVar9);
    auVar9 = _sqc2(auVar9);
    FUN_003342d0(*(undefined4 *)(iVar7 + 0xb8),4);
    auVar11 = _lqc2(auVar9);
    auVar10 = _qmfc2(auVar11._0_4_);
    auVar9 = _sqc2(auVar11);
    uStack_6c = auVar9._4_4_;
    iVar2 = *(int *)(iVar7 + 0xb8);
    auVar9 = _sqc2(auVar11);
    uStack_68 = auVar9._8_4_;
    auVar9._4_4_ = uStack_6c;
    auVar9._0_4_ = auVar10._0_4_;
    auVar9._8_4_ = uStack_68;
    auVar9._12_4_ = 0;
    auVar10 = _lqc2(auVar9);
    auVar9 = _qmfc2(auVar10._0_4_);
    *(int *)(iVar2 + 0x40) = auVar9._0_4_;
    auVar9 = _sqc2(auVar10);
    fStack_8c = auVar9._4_4_;
    *(float *)(iVar2 + 0x44) = fStack_8c;
    auVar9 = _sqc2(auVar10);
    fStack_88 = auVar9._8_4_;
    *(float *)(iVar2 + 0x48) = fStack_88;
  }
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar9 = _vsub(in_vf0,in_vf0);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _qmfc2(auVar11._0_4_);
  **(undefined4 **)(*(int *)(iVar7 + 0x128) + 4) = *(undefined4 *)(iVar7 + 0xb8);
  pauVar3 = *(undefined1 (**) [16])(iVar7 + 0xb8);
  auVar9 = _sqc2(auVar9);
  pauVar3[3] = auVar9;
  auVar9 = _sqc2(auVar14);
  *pauVar3 = auVar9;
  auVar9 = _sqc2(auVar12);
  pauVar3[1] = auVar9;
  auVar9 = _sqc2(auVar13);
  pauVar3[2] = auVar9;
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar9 = _vsub(auVar9,auVar11);
  auVar9 = _sqc2(auVar9);
  pauVar3[3] = auVar9;
  iVar1 = *(int *)(*(int *)(iVar7 + 0x128) + 4);
  *(undefined4 *)(iVar1 + 0x44) = 0x3ecccccd;
  *(undefined4 *)(iVar1 + 0x40) = 0x3ecccccd;
  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x128) + 4) + 0x48) = 0x3f000000;
  FUN_0014c180(0x44480000,param_1,auVar10._0_8_);
  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x128) + 4) + 0x2c) = 0x3dcccccd;
  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x128) + 4) + 0x28) = 0x3e23d70a;
  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x128) + 4) + 0x30) = 0x3c23d70a;
  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x128) + 4) + 0x34) = 0x3c23d70a;
  return;
}


// ==== FUN_0014f348 @ 0014f348 ====

void FUN_0014f348(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xfb;
  FUN_00125e40();
  return;
}


// ==== FUN_0014f498 @ 0014f498 ====

void FUN_0014f498(int param_1,long param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x13e) != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x118) + 0x48);
    FUN_00125e98();
    if ((*(float *)(param_1 + 0xc0) <= 40.0) &&
       (uVar7 = 0, 0 < *(int *)(*(int *)(param_1 + 0x118) + 0x24))) {
      iVar9 = 0;
      iVar8 = 0;
      do {
        if ((int)uVar7 < 0x20) {
          uVar3 = (uint)((*(ulong *)(iVar1 + 0x68 + (uint)*(byte *)(param_1 + 200) * 8) &
                         (ulong)(uint)(1 << (uVar7 & 0x1f))) != 0);
        }
        else {
          uVar3 = *(uint *)((uint)*(byte *)(param_1 + 200) * 8 + iVar1 + 0x6c) >> (uVar7 & 0x1f) & 1
          ;
        }
        if (uVar3 == 0) {
          iVar4 = *(int *)(param_1 + 0x118);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x118);
          psVar2 = (short *)(*(int *)(iVar4 + 0x20) + iVar9);
          pbVar5 = (byte *)(*(int *)(iVar4 + 0x38) + (int)*psVar2);
          iVar6 = *(int *)(iVar4 + 0x40) + (int)psVar2[1];
          iVar4 = *(int *)(iVar4 + 0x1c) + iVar8;
          if (*pbVar5 - 2 < 3) {
            FUN_001af738(*(undefined4 *)(param_1 + 0xc0),DAT_0040f4c0 + 0x14,iVar4,pbVar5,iVar6,
                         param_1 + 300,param_1 + 0x70,param_2 == 0,1);
            iVar4 = *(int *)(param_1 + 0x118);
          }
          else {
            FUN_001af738(*(undefined4 *)(param_1 + 0xc0),DAT_0040f4c0 + 0x14,iVar4,pbVar5,iVar6,0,
                         param_1 + 0x70,param_2 == 0,1);
            iVar4 = *(int *)(param_1 + 0x118);
          }
        }
        uVar7 = uVar7 + 1;
        iVar9 = iVar9 + 6;
        iVar8 = iVar8 + 0x30;
      } while ((int)uVar7 < *(int *)(iVar4 + 0x24));
    }
  }
  return;
}


// ==== FUN_0014f668 @ 0014f668 ====

void FUN_0014f668(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  bVar1 = *(byte *)(iVar2 + 0x152);
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 4) == 0) {
      FUN_00129108(DAT_0040f4d0,param_1,0,0,0xffffffffffffffff);
      *(byte *)(iVar2 + 0x152) = *(byte *)(iVar2 + 0x152) | 4;
    }
  }
  else {
    *(byte *)(iVar2 + 0x152) = bVar1 & 0xf7;
    FUN_00126d78(DAT_0040f4e4,param_1,0);
  }
  return;
}


// ==== FUN_0014f708 @ 0014f708 ====

void FUN_0014f708(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 aauStack_b0 [4] [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x154) == '\0') {
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar3 = _qmtc2(0x41a00000);
    auVar4 = _vsubbc(auVar5,auVar3);
    auVar3 = _qmfc2(auVar5._0_4_);
    auVar4 = _vaddbc(in_vf0,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    lVar1 = FUN_0012ae58(DAT_0040f4d0,auVar3._0_8_,auVar4._0_8_,0xa1,0,0,aauStack_b0);
    if (lVar1 != 0) {
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar8 = _vaddbc(in_vf0,in_vf0);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x118) + 0x48);
      auVar5 = _lqc2(aauStack_b0[0]);
      auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
      auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
      auVar3 = _vsubbc(auVar3,auVar4);
      auStack_30 = _sqc2(auVar3);
      _sqc2(auVar5);
      auStack_70 = _sqc2(auVar6);
      auStack_60 = _sqc2(auVar7);
      auVar3 = _qmtc2(ABS((float)auStack_30._4_4_ * 0.5));
      auStack_50 = _sqc2(auVar8);
      auVar3 = _vaddbc(auVar5,auVar3);
      auVar3 = _vaddbc(in_vf0,auVar3);
      auStack_40 = _sqc2(auVar3);
      FUN_00125f88(param_1,auStack_70);
    }
  }
  return;
}


// ==== FUN_0014f7f8 @ 0014f7f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f7f8(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0014b8a0();
  *(undefined4 *)(param_1 + 0xc4) = 6;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  *(int *)(param_1 + 0xf0) = (int)_DAT_004432a0;
  *(int *)(param_1 + 0xf4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  return;
}


// ==== FUN_0014f838 @ 0014f838 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f838(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0xf0) = (int)_DAT_004432a0;
  *(int *)(iVar4 + 0xf4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0xf8) = uVar2;
  *(undefined4 *)(iVar4 + 0xfc) = uVar3;
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar1 = _DAT_004432c0;
  *(undefined1 *)(iVar4 + 0x116) = 0;
  *(int *)(iVar4 + 0x100) = (int)uVar1;
  *(int *)(iVar4 + 0x104) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x108) = uVar2;
  *(undefined4 *)(iVar4 + 0x10c) = uVar3;
  *(undefined1 *)(iVar4 + 0x117) = 0;
  *(undefined1 *)(iVar4 + 0x118) = 0;
  FUN_0014b8e0(param_1,param_2,0);
  return;
}


// ==== FUN_0014f888 @ 0014f888 ====

void FUN_0014f888(int param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  byte bStack_58;
  
  auVar8 = _qmtc2(param_2);
  auVar4 = _qmtc2(0x41000000);
  auVar7 = _vmulbc(auVar8,auVar4);
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar4;
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar4 = _vmove(auVar9);
  auVar10 = _vadd(auVar4,auVar7);
  _sqc2(auVar9);
  if (param_3 != 0) {
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vmul(auVar8,auVar8);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar6,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
    auVar6 = _vmove(auVar6);
    if (2.3283064e-10 <= auVar5._0_4_) {
      auVar4 = _vmul(auVar8,auVar8);
      auVar8 = _vmul(auVar7,auVar7);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar6,auVar4);
      _vaddabc(auVar8,auVar8);
      auVar8 = _vmaddbc(auVar6,auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar4);
      auVar4 = _vaddbc(in_vf0,in_vf0);
      uVar11 = _vwaitq();
      auVar4 = _vmulq(auVar4,uVar11);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar8);
      uVar11 = _vwaitq();
      auVar8 = _vmulq(auVar7,uVar11);
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar7 = _qmtc2(0x40a00000);
      auVar7 = _vmulbc(auVar8,auVar7);
      auVar8 = _vmove(auVar9);
      fVar3 = 5.0 / auVar4._0_4_;
      auVar4 = _vadd(auVar8,auVar7);
      goto LAB_0014f9b4;
    }
  }
  fVar3 = 0.0;
LAB_0014f9b4:
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar7 = _qmfc2(auVar10._0_4_);
  lVar1 = FUN_0012ae58(DAT_0040f4d0,auVar4._0_8_,auVar7._0_8_,1,0,1,auStack_80);
  uVar2 = (undefined1)param_3;
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0x41000000;
    *(undefined1 *)(param_1 + 0x118) = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x114) = 1;
    *(undefined4 *)(param_1 + 0x100) = uStack_70;
    *(undefined4 *)(param_1 + 0x104) = uStack_6c;
    *(undefined4 *)(param_1 + 0x108) = uStack_68;
    *(undefined4 *)(param_1 + 0x10c) = uStack_64;
    *(float *)(param_1 + 0x110) = fStack_60 * 8.0 + fVar3;
    *(bool *)(param_1 + 0x115) =
         (ushort)bStack_58 == *(ushort *)(*(int *)(DAT_0040f4d8 + 0x873f0) + 0x40);
    FUN_0016e2b8(DAT_0040f4d4);
    *(undefined1 *)(param_1 + 0x118) = uVar2;
  }
  *(undefined1 *)(param_1 + 0x117) = uVar2;
  *(undefined1 *)(param_1 + 0x116) = 0;
  return;
}


// ==== FUN_0014fa80 @ 0014fa80 ====

void FUN_0014fa80(float param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  if (DAT_004146d4 == 0) {
    DAT_004146d4 = 1;
    DAT_004146d0 = -*(float *)(DAT_0040f4d0 + 0x1c);
  }
  FUN_0014ba80(param_1,param_2);
  lVar1 = FUN_0014fbe8(param_1,param_2);
  iVar2 = (int)param_2;
  param_1 = *(float *)(iVar2 + 0x110) - param_1;
  *(float *)(iVar2 + 0x110) = param_1;
  if ((param_1 < 0.25) && (*(char *)(iVar2 + 0x114) == '\x01')) {
    FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x684bbb0484a09400,1);
  }
  if ((*(float *)(iVar2 + 0x110) < DAT_004146d0) && (lVar1 == 0)) {
    FUN_00155c28(DAT_0040f520,param_2,*(undefined1 *)(iVar2 + 0x114),*(undefined1 *)(iVar2 + 0x115))
    ;
    FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x66ccfc6ddb243000,0);
  }
  return;
}


// ==== FUN_0014fbe8 @ 0014fbe8 ====

bool FUN_0014fbe8(float param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
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
  
  bVar3 = false;
  if (param_1 != 0.0) {
    iVar2 = (int)param_2;
    if (*(float *)(iVar2 + 0x110) < param_1) {
      param_1 = *(float *)(iVar2 + 0x110);
    }
    if (*(char *)(iVar2 + 0x116) != '\0') {
      uStack_80 = *(undefined4 *)(iVar2 + 0x70);
      uStack_7c = *(undefined4 *)(iVar2 + 0x74);
      uStack_78 = *(undefined4 *)(iVar2 + 0x78);
      uStack_74 = *(undefined4 *)(iVar2 + 0x7c);
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
      uStack_68 = *(undefined4 *)(iVar2 + 0x88);
      uStack_64 = *(undefined4 *)(iVar2 + 0x8c);
      uStack_58 = *(undefined4 *)(iVar2 + 0x98);
      uStack_54 = *(undefined4 *)(iVar2 + 0x9c);
      uStack_70 = (undefined4)*(undefined8 *)(iVar2 + 0x80);
      uStack_6c = (undefined4)((ulong)*(undefined8 *)(iVar2 + 0x80) >> 0x20);
      uStack_60 = (undefined4)*(undefined8 *)(iVar2 + 0x90);
      uStack_5c = (undefined4)((ulong)*(undefined8 *)(iVar2 + 0x90) >> 0x20);
      auStack_50 = _sqc2(auVar6);
      if (*(char *)(iVar2 + 0x118) != '\0') {
        auVar5 = _vaddbc(in_vf0,in_vf0);
        auVar4 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
        auVar4 = _vsub(auVar4,auVar6);
        auVar4 = _vmul(auVar4,auVar4);
        _vaddabc(auVar4,auVar4);
        auVar4 = _vmaddbc(auVar5,auVar4);
        _vnop();
        _vnop();
        _vnop();
        _vsqrt(auVar4);
        auVar4 = _vaddbc(in_vf0,in_vf0);
        uVar7 = _vwaitq();
        auVar4 = _vmulq(auVar4,uVar7);
        auVar4 = _qmfc2(auVar4._0_4_);
        if (auVar4._0_4_ < 5.0) {
          auVar6 = _qmfc2(auVar6._0_4_);
          FUN_001e44a0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),auVar6._0_8_,
                       *(undefined8 *)(iVar2 + 0xf0));
          *(undefined1 *)(iVar2 + 0x118) = 0;
        }
      }
      lVar1 = FUN_0014bca0(param_1,iVar2 + 0xf0,auStack_50,iVar2 + 0x100);
      bVar3 = lVar1 != 0;
      if (bVar3) {
        FUN_00155c28(DAT_0040f520,param_2,1,0);
        FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x66ccfc6ddb243000,0);
      }
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xf0));
      auVar5 = _qmtc2(param_1);
      auVar4 = _lqc2(auStack_50);
      auVar6 = _vmulbc(auVar6,auVar5);
      auVar6 = _vadd(auVar4,auVar6);
      auStack_50 = _sqc2(auVar6);
      FUN_00125f88(param_2,&uStack_80);
    }
    *(undefined1 *)(iVar2 + 0x116) = 1;
  }
  return bVar3;
}


// ==== FUN_0014fda8 @ 0014fda8 ====

void FUN_0014fda8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  FUN_0014bd18();
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0xc4) = 3;
  if (param_2 == 0) {
    *(undefined4 *)((int)param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    *param_1 = 0;
  }
  else {
    *(int *)((int)param_1 + 0x114) = (int)param_2;
    uVar2 = FUN_00108120(DAT_0040f4c4,*(undefined8 *)((int)param_2 + 0x40));
    *(int *)(param_1 + 0x23) = (int)uVar2;
    *param_1 = *(undefined8 *)(*(int *)((int)param_1 + 0x114) + 0x48);
    lVar3 = FUN_001afba8(uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_00107cf8(0x70);
      *(int *)(param_1 + 0x24) = (int)uVar2;
      FUN_0014cdb8(uVar2);
    }
  }
  auStack_60[0] = 0;
  FUN_003342d0(param_1 + 0x28,5);
  FUN_0032b860(&uStack_50,1,0);
  auStack_60[0] = FUN_00107c98(0x40f0f0,&uStack_50);
  uVar1 = FUN_0032bb28(auStack_60,1,0);
  uStack_50 = 0x60;
  *(undefined4 *)(param_1 + 0x25) = uVar1;
  uStack_4c = 0x10;
  auStack_60[0] = FUN_00107c98(0x40f0f0,&uStack_50);
  uVar1 = FUN_00334268(auStack_60,4);
  *(undefined4 *)(param_1 + 0x17) = uVar1;
  FUN_001afc78(param_1 + 0x34);
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  *(undefined2 *)((int)param_1 + 0x1bc) = 0xffff;
  return;
}


// ==== FUN_0014fee0 @ 0014fee0 ====

undefined4 FUN_0014fee0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  
  FUN_0014bd58();
  puVar11 = (undefined8 *)param_1;
  *(undefined1 *)((int)puVar11 + 0x13a) = 0;
  *(undefined4 *)((int)puVar11 + 0x1b4) = 3;
  *(undefined1 *)((int)puVar11 + 0x13c) = 0;
  *(undefined1 *)((int)puVar11 + 0x1c1) = 0;
  *(undefined1 *)((int)puVar11 + 0x1c2) = 0;
  *(undefined1 *)((int)puVar11 + 0x139) = 0;
  puVar1 = *(undefined8 **)((int)puVar11 + 0x114);
  *puVar11 = puVar1[9];
  uVar2 = *puVar1;
  uVar7 = *(undefined4 *)(puVar1 + 1);
  uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
  *(int *)(puVar11 + 0xe) = (int)uVar2;
  *(int *)((int)puVar11 + 0x74) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(puVar11 + 0xf) = uVar7;
  *(undefined4 *)((int)puVar11 + 0x7c) = uVar8;
  uVar7 = *(undefined4 *)((int)puVar1 + 0x14);
  uVar8 = *(undefined4 *)(puVar1 + 3);
  uVar9 = *(undefined4 *)((int)puVar1 + 0x1c);
  *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((int)puVar11 + 0x84) = uVar7;
  *(undefined4 *)(puVar11 + 0x11) = uVar8;
  *(undefined4 *)((int)puVar11 + 0x8c) = uVar9;
  uVar7 = *(undefined4 *)((int)puVar1 + 0x24);
  uVar8 = *(undefined4 *)(puVar1 + 5);
  uVar9 = *(undefined4 *)((int)puVar1 + 0x2c);
  *(undefined4 *)(puVar11 + 0x12) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((int)puVar11 + 0x94) = uVar7;
  *(undefined4 *)(puVar11 + 0x13) = uVar8;
  *(undefined4 *)((int)puVar11 + 0x9c) = uVar9;
  uVar7 = *(undefined4 *)((int)puVar1 + 0x34);
  uVar2 = puVar1[6];
  uVar8 = *(undefined4 *)(puVar1 + 7);
  uVar9 = *(undefined4 *)((int)puVar1 + 0x3c);
  *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar1 + 6);
  *(undefined4 *)((int)puVar11 + 0xa4) = uVar7;
  *(undefined4 *)(puVar11 + 0x15) = uVar8;
  *(undefined4 *)((int)puVar11 + 0xac) = uVar9;
  cVar5 = FUN_0012c790(DAT_0040f4d0,uVar2,(int)puVar11 + 300);
  if (cVar5 != '\x01') {
    iVar10 = 0;
    do {
      puVar6 = &DAT_003bcb08 + iVar10;
      iVar3 = iVar10 + 0x12d;
      iVar10 = iVar10 + 1;
      *(undefined *)((int)puVar11 + iVar3) = *puVar6;
    } while (iVar10 < 9);
    *(undefined1 *)((int)puVar11 + 0x136) = DAT_003f42f0;
    *(undefined1 *)((int)puVar11 + 0x137) = DAT_003f42f1;
    uVar4 = DAT_003f42f2;
    *(undefined1 *)((int)puVar11 + 0x139) = 0;
    *(undefined1 *)(puVar11 + 0x27) = uVar4;
  }
  FUN_00150178(param_1,0);
  FUN_001afc80(puVar11 + 0x34,*(undefined4 *)(puVar11 + 0x23),0);
  iVar10 = FUN_00151e60(param_1);
  uVar2 = *(undefined8 *)(iVar10 + 0xb0);
  uVar7 = *(undefined4 *)(iVar10 + 0xb8);
  uVar8 = *(undefined4 *)(iVar10 + 0xbc);
  *(int *)(puVar11 + 0xc) = (int)uVar2;
  *(int *)((int)puVar11 + 100) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(puVar11 + 0xd) = uVar7;
  *(undefined4 *)((int)puVar11 + 0x6c) = uVar8;
  *(undefined4 *)((int)puVar11 + 0x1ac) = *(undefined4 *)(*(int *)(puVar11 + 0x23) + 0x38);
  uVar7 = *(undefined4 *)(*(int *)(puVar11 + 0x23) + 0x40);
  *(undefined1 *)((int)puVar11 + 0x1bf) = 0;
  *(undefined1 *)(puVar11 + 0x38) = 0;
  *(undefined4 *)(puVar11 + 0x36) = uVar7;
  iVar10 = FUN_00151e60(param_1);
  *(byte *)((int)puVar11 + 0x13b) = (byte)((ushort)*(undefined2 *)(iVar10 + 0x58) >> 9) & 1;
  iVar10 = FUN_00151e60(param_1);
  *(byte *)((int)puVar11 + 0x13a) = (byte)((ushort)*(undefined2 *)(iVar10 + 0x58) >> 8) & 1;
  if (*(short *)((int)puVar11 + 0x1bc) != -1) {
    FUN_001b37c8(DAT_0040f4d8 + 0x33c40,*(undefined2 *)((int)puVar11 + 0x1bc));
  }
  *(undefined1 *)((int)puVar11 + 0x101) = 0;
  *(undefined1 *)((int)puVar11 + 0x1c1) = 0;
  return 1;
}


// ==== FUN_00150068 @ 00150068 ====

void FUN_00150068(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_0014bd58();
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x118) = param_2;
  uVar1 = *param_4;
  uVar3 = *(undefined4 *)(param_4 + 1);
  uVar4 = *(undefined4 *)((int)param_4 + 0xc);
  *(int *)(iVar7 + 0x70) = (int)uVar1;
  *(int *)(iVar7 + 0x74) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar7 + 0x78) = uVar3;
  *(undefined4 *)(iVar7 + 0x7c) = uVar4;
  uVar3 = *(undefined4 *)((int)param_4 + 0x14);
  uVar4 = *(undefined4 *)(param_4 + 3);
  uVar5 = *(undefined4 *)((int)param_4 + 0x1c);
  *(undefined4 *)(iVar7 + 0x80) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(iVar7 + 0x84) = uVar3;
  *(undefined4 *)(iVar7 + 0x88) = uVar4;
  *(undefined4 *)(iVar7 + 0x8c) = uVar5;
  uVar1 = param_4[4];
  uVar3 = *(undefined4 *)(param_4 + 5);
  uVar4 = *(undefined4 *)((int)param_4 + 0x2c);
  *(int *)(iVar7 + 0x90) = (int)uVar1;
  *(int *)(iVar7 + 0x94) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar7 + 0x98) = uVar3;
  *(undefined4 *)(iVar7 + 0x9c) = uVar4;
  uVar3 = *(undefined4 *)((int)param_4 + 0x34);
  uVar4 = *(undefined4 *)(param_4 + 7);
  uVar5 = *(undefined4 *)((int)param_4 + 0x3c);
  *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)(iVar7 + 0xa4) = uVar3;
  *(undefined4 *)(iVar7 + 0xa8) = uVar4;
  *(undefined4 *)(iVar7 + 0xac) = uVar5;
  FUN_00150178(param_1,param_3);
  FUN_001afc80(iVar7 + 0x1a0,*(undefined4 *)(iVar7 + 0x118),param_3);
  iVar2 = FUN_00151e60(param_1);
  uVar3 = *(undefined4 *)(iVar2 + 0xb0);
  uVar4 = *(undefined4 *)(iVar2 + 0xb4);
  uVar5 = *(undefined4 *)(iVar2 + 0xb8);
  uVar6 = *(undefined4 *)(iVar2 + 0xbc);
  *(undefined4 *)(iVar7 + 0x110) = param_5;
  *(undefined4 *)(iVar7 + 0x1ac) = param_7;
  *(undefined4 *)(iVar7 + 0x1b0) = param_8;
  *(undefined4 *)(iVar7 + 0x1b4) = param_6;
  *(undefined1 *)(iVar7 + 0x13b) = 0;
  *(undefined1 *)(iVar7 + 0x1bf) = 0;
  *(undefined1 *)(iVar7 + 0x1c0) = 0;
  *(undefined1 *)(iVar7 + 0x1c1) = 0;
  *(undefined1 *)(iVar7 + 0x101) = 0;
  *(undefined4 *)(iVar7 + 0x60) = uVar3;
  *(undefined4 *)(iVar7 + 100) = uVar4;
  *(undefined4 *)(iVar7 + 0x68) = uVar5;
  *(undefined4 *)(iVar7 + 0x6c) = uVar6;
  *(undefined1 *)(iVar7 + 0x13a) = 1;
  iVar2 = FUN_001afd80(iVar7 + 0x1a0,*(undefined4 *)(iVar7 + 0x118));
  *(undefined4 *)(iVar2 + 0x30) = 0;
  return;
}


// ==== FUN_00150178 @ 00150178 ====

void FUN_00150178(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  bool bVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 in_vf0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar19 = _vsub(in_vf0,in_vf0);
  auVar14 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _qmfc2(auVar14._0_4_);
  iVar10 = (int)param_1;
  auVar9 = _qmfc2(auVar15._0_4_);
  auVar14 = _sqc2(auVar14);
  auVar15 = _sqc2(auVar15);
  auVar16 = _sqc2(auVar17);
  auVar18 = _sqc2(auVar19);
  *(int *)(iVar10 + 0x140) = auVar8._0_4_;
  *(int *)(iVar10 + 0x144) = auVar8._4_4_;
  *(int *)(iVar10 + 0x148) = auVar8._8_4_;
  *(int *)(iVar10 + 0x14c) = auVar8._12_4_;
  *(int *)(iVar10 + 0x150) = auVar9._0_4_;
  *(int *)(iVar10 + 0x154) = auVar9._4_4_;
  *(int *)(iVar10 + 0x158) = auVar9._8_4_;
  *(int *)(iVar10 + 0x15c) = auVar9._12_4_;
  auVar9 = _qmfc2(auVar17._0_4_);
  auVar8 = _qmfc2(auVar19._0_4_);
  *(int *)(iVar10 + 0x160) = auVar9._0_4_;
  *(int *)(iVar10 + 0x164) = auVar9._4_4_;
  *(int *)(iVar10 + 0x168) = auVar9._8_4_;
  *(int *)(iVar10 + 0x16c) = auVar9._12_4_;
  *(int *)(iVar10 + 0x170) = auVar8._0_4_;
  *(int *)(iVar10 + 0x174) = auVar8._4_4_;
  *(int *)(iVar10 + 0x178) = auVar8._8_4_;
  *(int *)(iVar10 + 0x17c) = auVar8._12_4_;
  *(undefined4 *)(iVar10 + 0x180) =
       *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x118) + 0x48) + param_2 * 0xd0 + 0xc0);
  iVar11 = *(int *)(*(int *)(iVar10 + 0x118) + 0x48) + param_2 * 0xd0;
  bVar1 = false;
  if (*(char *)(iVar11 + 0xce) == '\0') {
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0xa0));
    auVar17 = _qmtc2(0x3f000000);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0x90));
    auVar8 = _vsub(auVar8,auVar9);
    auVar8 = _vmulbc(auVar8,auVar17);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar13 = auVar8._0_4_;
    auVar8 = _qmtc2((uint)(fVar13 < 0.05) * 0x3d4ccccd | (int)fVar13 * (uint)(fVar13 >= 0.05));
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar8 = _sqc2(auVar8);
    auStack_f0._4_4_ = auVar8._4_4_;
    auVar8 = _qmtc2((uint)((float)auStack_f0._4_4_ < 0.05) * 0x3d4ccccd |
                    auStack_f0._4_4_ * (uint)((float)auStack_f0._4_4_ >= 0.05));
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar8 = _sqc2(auVar8);
    fStack_e8 = auVar8._8_4_;
    auVar8 = _qmtc2((uint)(fStack_e8 < 0.05) * 0x3d4ccccd |
                    (int)fStack_e8 * (uint)(fStack_e8 >= 0.05));
    auVar8 = _vaddbc(in_vf0,auVar8);
    auVar8 = _sqc2(auVar8);
    FUN_003342d0(*(undefined4 *)(iVar10 + 0xb8),4);
    auVar8 = _lqc2(auVar8);
    auVar17 = _qmfc2(auVar8._0_4_);
    auVar9 = _sqc2(auVar8);
    uStack_cc = auVar9._4_4_;
    iVar2 = *(int *)(iVar10 + 0xb8);
    auVar9 = _sqc2(auVar8);
    uStack_c8 = auVar9._8_4_;
    auVar9._4_4_ = uStack_cc;
    auVar9._0_4_ = auVar17._0_4_;
    auVar9._8_4_ = uStack_c8;
    auVar9._12_4_ = 0;
    auVar17 = _lqc2(auVar9);
    auVar9 = _qmfc2(auVar17._0_4_);
    *(int *)(iVar2 + 0x40) = auVar9._0_4_;
    auVar9 = _sqc2(auVar17);
    auStack_f0._4_4_ = auVar9._4_4_;
    *(undefined4 *)(iVar2 + 0x44) = auStack_f0._4_4_;
    auVar9 = _sqc2(auVar17);
    fStack_e8 = auVar9._8_4_;
    *(float *)(iVar2 + 0x48) = fStack_e8;
    **(undefined4 **)(*(int *)(iVar10 + 0x128) + 4) = *(undefined4 *)(iVar10 + 0xb8);
    uStack_88 = auVar18._8_4_;
    uStack_84 = auVar18._12_4_;
    puVar3 = *(undefined4 **)(iVar10 + 0xb8);
    puVar3[0xc] = auVar18._0_4_;
    puVar3[0xd] = auVar18._4_4_;
    puVar3[0xe] = uStack_88;
    puVar3[0xf] = uStack_84;
    uStack_b8 = auVar14._8_4_;
    uStack_b4 = auVar14._12_4_;
    *puVar3 = auVar14._0_4_;
    puVar3[1] = auVar14._4_4_;
    puVar3[2] = uStack_b8;
    puVar3[3] = uStack_b4;
    uStack_a8 = auVar15._8_4_;
    uStack_a4 = auVar15._12_4_;
    puVar3[4] = auVar15._0_4_;
    puVar3[5] = auVar15._4_4_;
    puVar3[6] = uStack_a8;
    puVar3[7] = uStack_a4;
    uStack_98 = auVar16._8_4_;
    uStack_94 = auVar16._12_4_;
    puVar3[8] = auVar16._0_4_;
    puVar3[9] = auVar16._4_4_;
    puVar3[10] = uStack_98;
    puVar3[0xb] = uStack_94;
    auVar14 = _lqc2(*(undefined1 (*) [16])(iVar11 + 0x90));
    auVar14 = _vsub(auVar14,auVar8);
    auVar14 = _sqc2(auVar14);
    *(undefined1 (*) [16])(puVar3 + 0xc) = auVar14;
  }
  else {
    pauVar4 = *(undefined1 (**) [16])(iVar11 + 0xc4);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar14 = _sqc2(auVar8);
    auVar15 = _lqc2(*pauVar4);
    auVar15 = _vmul(auVar15,auVar15);
    auVar16 = _lqc2(pauVar4[1]);
    _vaddabc(auVar15,auVar15);
    auVar15 = _vmaddbc(auVar8,auVar15);
    auVar16 = _vmul(auVar16,auVar16);
    auVar18 = _lqc2(pauVar4[2]);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar15);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar12);
    _vaddabc(auVar16,auVar16);
    auVar16 = _vmaddbc(auVar8,auVar16);
    auVar18 = _vmul(auVar18,auVar18);
    _vaddbc(in_vf0,auVar15);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar16);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar12);
    _vaddabc(auVar18,auVar18);
    auVar16 = _vmaddbc(auVar8,auVar18);
    _vaddbc(in_vf0,auVar15);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar16);
    auVar15 = _vaddbc(in_vf0,in_vf0);
    uVar12 = _vwaitq();
    auVar15 = _vmulq(auVar15,uVar12);
    auVar15 = _vaddbc(in_vf0,auVar15);
    bVar1 = *(int *)pauVar4[4] != 0;
    pauVar5 = *(undefined1 (**) [16])(iVar10 + 0xb8);
    if (bVar1) {
      auVar15 = _sqc2(auVar15);
      FUN_003342d0(pauVar5,2);
      auVar16 = _lqc2(pauVar4[2]);
      auVar18 = _lqc2(auVar14);
      auVar16 = _vmul(auVar16,auVar16);
      _vaddabc(auVar16,auVar16);
      auVar16 = _vmaddbc(auVar18,auVar16);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar16);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar16 = _vmulq(auVar16,uVar12);
      auVar16 = _qmfc2(auVar16._0_4_);
      *(int *)pauVar5[4] = auVar16._0_4_;
      auVar16 = _lqc2(pauVar4[1]);
      auVar16 = _vmul(auVar16,auVar16);
      _vaddabc(auVar16,auVar16);
      auVar16 = _vmaddbc(auVar18,auVar16);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar16);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      uVar12 = _vwaitq();
      auVar16 = _vmulq(auVar16,uVar12);
      auVar16 = _qmfc2(auVar16._0_4_);
      *(int *)(pauVar5[4] + 0xc) = auVar16._0_4_;
      auVar8 = _lqc2(auVar15);
    }
    else {
      auVar15 = _sqc2(auVar15);
      FUN_003342d0(pauVar5,4);
      auVar8 = _lqc2(auVar15);
      auVar16 = _qmfc2(auVar8._0_4_);
      auVar15 = _sqc2(auVar8);
      auStack_f0._4_4_ = auVar15._4_4_;
      auVar15 = _sqc2(auVar8);
      fStack_e8 = auVar15._8_4_;
      auStack_f0._0_4_ = auVar16._0_4_;
      uStack_e4 = auVar15._12_4_;
      auVar16 = _lqc2(_auStack_f0);
      auVar15 = _qmfc2(auVar16._0_4_);
      *(int *)pauVar5[4] = auVar15._0_4_;
      auVar15 = _sqc2(auVar16);
      auStack_f0._4_4_ = auVar15._4_4_;
      *(undefined4 *)(pauVar5[4] + 4) = auStack_f0._4_4_;
      auVar15 = _sqc2(auVar16);
      fStack_e8 = auVar15._8_4_;
      *(float *)(pauVar5[4] + 8) = fStack_e8;
    }
    **(undefined4 **)(*(int *)(iVar10 + 0x128) + 4) = *(undefined4 *)(iVar10 + 0xb8);
    auVar18 = _lqc2(*pauVar4);
    auVar16 = _vmul(auVar18,auVar18);
    auVar15 = _sqc2(auVar18);
    *pauVar5 = auVar15;
    auVar15 = _lqc2(auVar14);
    _vaddabc(auVar16,auVar16);
    auVar15 = _vmaddbc(auVar15,auVar16);
    auVar9 = _lqc2(pauVar4[1]);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar15);
    uVar12 = _vwaitq();
    auVar17 = _vmulq(auVar18,uVar12);
    auVar16 = _vmul(auVar9,auVar9);
    auVar15 = _sqc2(auVar9);
    pauVar5[1] = auVar15;
    auVar18 = _lqc2(pauVar4[2]);
    auVar19 = _lqc2(auVar14);
    _vaddabc(auVar16,auVar16);
    auVar15 = _vmaddbc(auVar19,auVar16);
    auVar14 = _sqc2(auVar18);
    pauVar5[2] = auVar14;
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar15);
    uVar12 = _vwaitq();
    auVar15 = _vmulq(auVar9,uVar12);
    auVar14 = _vmul(auVar18,auVar18);
    _vaddabc(auVar14,auVar14);
    auVar14 = _vmaddbc(auVar19,auVar14);
    auVar7 = *(undefined1 (*) [12])pauVar4[3];
    uVar12 = *(undefined4 *)(pauVar4[3] + 0xc);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar14);
    uVar20 = _vwaitq();
    auVar14 = _vmulq(auVar18,uVar20);
    auVar14 = _sqc2(auVar14);
    pauVar5[2] = auVar14;
    auVar14 = _sqc2(auVar17);
    *pauVar5 = auVar14;
    auVar14 = _sqc2(auVar15);
    pauVar5[1] = auVar14;
    *(int *)pauVar5[3] = auVar7._0_4_;
    *(int *)(pauVar5[3] + 4) = auVar7._4_4_;
    *(int *)(pauVar5[3] + 8) = auVar7._8_4_;
    *(undefined4 *)(pauVar5[3] + 0xc) = uVar12;
  }
  auVar14 = _qmfc2(auVar8._0_4_);
  bVar6 = false;
  if (auVar14._0_4_ < 0.2) {
    auVar14 = _sqc2(auVar8);
    auStack_f0._4_4_ = auVar14._4_4_;
    if (0.2 <= (float)auStack_f0._4_4_) {
      bVar6 = false;
    }
    else {
      auVar14 = _sqc2(auVar8);
      fStack_e8 = auVar14._8_4_;
      if (fStack_e8 < 0.2) {
        bVar6 = true;
      }
    }
  }
  if (bVar6) {
    *(undefined1 *)(iVar10 + 0x1be) = 1;
  }
  else {
    *(undefined1 *)(iVar10 + 0x1be) = 0;
  }
  iVar2 = *(int *)(*(int *)(iVar10 + 0x128) + 4);
  *(undefined4 *)(iVar2 + 0x44) = 0x3ecccccd;
  *(undefined4 *)(iVar2 + 0x40) = 0x3ecccccd;
  *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x128) + 4) + 0x48) = 0x3dcccccd;
  fVar13 = *(float *)(iVar11 + 0x48);
  if (bVar1) {
    FUN_00331008(0,(uint)(fVar13 < 1.0) * 0x3f800000 | (int)fVar13 * (uint)(fVar13 >= 1.0),
                 *(undefined4 *)(*(int *)(iVar10 + 0x128) + 4),0);
  }
  else {
    auVar14 = _qmfc2(auVar8._0_4_);
    FUN_0014c180(param_1,auVar14._0_8_);
  }
  if (bVar1) {
    uVar12 = 0x3f000000;
    iVar2 = *(int *)(*(int *)(iVar10 + 0x128) + 4);
  }
  else {
    uVar12 = 0x3dcccccd;
    iVar2 = *(int *)(*(int *)(iVar10 + 0x128) + 4);
  }
  *(undefined4 *)(iVar2 + 0x2c) = uVar12;
  if ((*(ushort *)(iVar11 + 0x58) & 0x40) == 0) {
    uVar12 = 0x3f800000;
    iVar11 = *(int *)(*(int *)(iVar10 + 0x128) + 4);
  }
  else {
    uVar12 = 0x3ecccccd;
    iVar11 = *(int *)(*(int *)(iVar10 + 0x128) + 4);
  }
  *(undefined4 *)(iVar11 + 0x28) = uVar12;
  *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x128) + 4) + 0x30) = 0x3c23d70a;
  *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x128) + 4) + 0x34) = 0x3c23d70a;
  *(int *)(iVar10 + 0xbc) = iVar10 + 0x140;
  return;
}


