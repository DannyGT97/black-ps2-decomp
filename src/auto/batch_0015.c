// ==== FUN_001a13f8 @ 001a13f8 ====
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_003f66f0 undefined4
// GLOBAL DAT_003f66f4 undefined4

void FUN_001a13f8(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 extraout_v0_udw;
  int *piVar6;
  undefined4 uVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  FUN_00193980();
  piVar6 = (int *)param_1;
  if (((param_2 == 0) || (*(int *)param_2 != 0)) ||
     (piVar1 = (int *)((int *)param_2)[2], *piVar1 != 0x15)) {
    auVar5 = _pextlw(0,0xffffffffc1200000);
    iVar2 = *(int *)(*piVar6 + 0x7c);
    auVar5 = _pextlw(0,auVar5._0_8_);
    auVar11 = _qmtc2(auVar5._0_4_);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
    _vmulabc(auVar8,auVar11);
    _vmaddabc(auVar9,auVar11);
    _vmaddabc(auVar5,auVar11);
    auVar5 = _vmaddbc(auVar10,in_vf0);
    piVar6[0x10] = 2;
    auVar5 = _sqc2(auVar5);
    *(undefined1 (*) [16])(piVar6 + 4) = auVar5;
    uVar7 = FUN_0016de70(DAT_003f66f0,DAT_003f66f4,DAT_0040f4d4);
    FUN_00193a60(uVar7,param_1,0);
    iVar2 = FUN_00193b98(param_1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
  }
  else {
    auVar5 = _pextlw((long)piVar1[5],(long)piVar1[3]);
    auVar5 = _pextlw((long)piVar1[4],auVar5._0_8_);
    piVar6[4] = auVar5._0_4_;
    piVar6[5] = auVar5._4_4_;
    piVar6[6] = auVar5._8_4_;
    piVar6[7] = auVar5._12_4_;
    iVar2 = piVar1[6];
    piVar6[8] = iVar2;
    if (iVar2 == 0) {
      auVar5 = _pextlw(0,0xffffffffc1200000);
      iVar2 = *(int *)(*piVar6 + 0x7c);
      auVar5 = _pextlw(0,auVar5._0_8_);
      auVar11 = _qmtc2(auVar5._0_4_);
      auVar8 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x70));
      auVar10 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0xa0));
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x80));
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x90));
      _vmulabc(auVar8,auVar11);
      _vmaddabc(auVar9,auVar11);
      _vmaddabc(auVar5,auVar11);
      auVar5 = _vmaddbc(auVar10,in_vf0);
      auVar5 = _sqc2(auVar5);
      *(undefined1 (*) [16])(piVar6 + 0xc) = auVar5;
    }
    else {
      auVar5 = *(undefined1 (*) [16])(iVar2 + 0xa0);
      piVar6[0xc] = auVar5._0_4_;
      piVar6[0xd] = auVar5._4_4_;
      piVar6[0xe] = auVar5._8_4_;
      piVar6[0xf] = auVar5._12_4_;
    }
    iVar2 = piVar6[8];
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x3a4) == *(int *)(*(int *)(*piVar6 + 0x7c) + 0x3a4))) &&
       ((lVar3 = FUN_00135550(iVar2), lVar3 != 0 &&
        (iVar2 = FUN_00135550(piVar6[8]), *(int *)(iVar2 + 0x80) == 1)))) {
      iVar2 = FUN_00135550(piVar6[8]);
      lVar3 = FUN_00188f10(iVar2 + 0x150);
      if (lVar3 != 0) {
        uVar4 = FUN_00188f80(iVar2 + 0x150);
        uVar4 = FUN_00178e60(uVar4);
        piVar6[4] = (int)uVar4;
        piVar6[5] = (int)((ulong)uVar4 >> 0x20);
        piVar6[6] = (int)extraout_v0_udw;
        piVar6[7] = (int)((ulong)extraout_v0_udw >> 0x20);
      }
    }
    piVar6[0x10] = 0;
    uVar7 = FUN_0016de70(DAT_003f66f0,DAT_003f66f4,DAT_0040f4d4);
    FUN_00193a60(uVar7,param_1,0);
  }
  return;
}


// ==== FUN_001a1620 @ 001a1620 ====

void FUN_001a1620(void)

{
  FUN_00193988();
  return;
}


// ==== FUN_001a1640 @ 001a1640 ====
// GLOBAL DAT_003f66f8 undefined4
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_003f66fc undefined4
// GLOBAL DAT_004432a0 undefined4

void FUN_001a1640(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)param_1;
  iVar1 = piVar2[0x10];
  if (iVar1 == 0) {
    iVar1 = 1;
    if (piVar2[8] == 0) {
      iVar1 = 2;
    }
    piVar2[0x10] = iVar1;
    piVar2[4] = (int)*(undefined8 *)(piVar2 + 0xc);
    piVar2[5] = (int)((ulong)*(undefined8 *)(piVar2 + 0xc) >> 0x20);
    piVar2[6] = piVar2[0xe];
    piVar2[7] = piVar2[0xf];
    uVar3 = FUN_0016de70(DAT_003f66f8,DAT_003f66fc,DAT_0040f4d4);
    FUN_00193a60(uVar3,param_1,0);
  }
  else if ((-1 < iVar1) && (iVar1 < 3)) {
    if (*(int *)(*piVar2 + 0x754) < 2) {
      FUN_00185538(*piVar2 + 0x6f0,0,0,DAT_004432a0,0);
    }
    FUN_00193990(param_1,1);
  }
  return;
}


// ==== FUN_001a1728 @ 001a1728 ====
// GLOBAL DAT_003f6700 undefined8
// GLOBAL DAT_003f6740 undefined8

void FUN_001a1728(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  
  iVar7 = 0;
  iVar10 = 0;
  FUN_00193980();
  puVar9 = &DAT_003f6740;
  puVar8 = &DAT_003f6700;
  do {
    iVar1 = FUN_00193b98(param_1);
    iVar1 = iVar7 * 0x20 + iVar1;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    *(undefined8 *)(iVar1 + 0x38) = *puVar8;
    *(undefined8 *)(iVar1 + 0x40) = uVar3;
    *(undefined8 *)(iVar1 + 0x48) = uVar4;
    *(undefined8 *)(iVar1 + 0x50) = uVar5;
    iVar7 = iVar7 + 1;
    iVar1 = FUN_00193b98(param_1);
    puVar8 = puVar8 + 4;
    iVar1 = iVar10 + iVar1;
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    *(undefined8 *)(iVar1 + 8) = *puVar9;
    *(undefined8 *)(iVar1 + 0x10) = uVar3;
    *(undefined8 *)(iVar1 + 0x18) = uVar4;
    iVar10 = iVar10 + 0x18;
    puVar9 = puVar9 + 3;
  } while (iVar7 < 2);
  puVar2 = (undefined4 *)FUN_00193b98(param_1);
  *puVar2 = 0;
  iVar7 = FUN_00193b98(param_1);
  *(undefined4 *)(iVar7 + 0x7c) = 4;
  iVar7 = FUN_00193b98(param_1);
  *(undefined1 *)(iVar7 + 0x78) = 1;
  piVar6 = (int *)param_1;
  *(undefined1 *)(*piVar6 + 0x104) = 1;
  *(undefined1 *)(*piVar6 + 0x110) = 1;
  *(undefined1 *)(*(int *)(*piVar6 + 0x694) + 0x35) = 1;
  *(undefined1 *)(piVar6 + 2) = 0;
  FUN_001a1b90(param_1);
  return;
}


// ==== FUN_001a1888 @ 001a1888 ====

void FUN_001a1888(int *param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_00193988();
  lVar1 = FUN_00181028(*param_1 + 0x140);
  if (lVar1 == 0) {
    iVar2 = *param_1;
  }
  else {
    FUN_00180fe0(*param_1 + 0x140);
    iVar2 = *param_1;
  }
  if (*(char *)(iVar2 + 0x290) != '\0') {
    FUN_001880d8(iVar2 + 0x290);
  }
  return;
}


// ==== FUN_001a18e8 @ 001a18e8 ====

void FUN_001a18e8(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  switch(param_2) {
  case 3:
  case 8:
  case 0x16:
  case 0x1c:
    goto switchD_001a191c_caseD_3;
  default:
    return;
  case 0xf:
    if (param_3 == 0) {
      iVar1 = *piVar5;
    }
    else {
      lVar2 = FUN_00188f10(*piVar5 + 0x150);
      if (lVar2 != 0) {
        lVar2 = FUN_00185f18(*piVar5 + 0x90);
        if (lVar2 != 0) {
          uVar4 = 0x14;
          goto LAB_001a19d8;
        }
        goto switchD_001a191c_caseD_11;
      }
      iVar1 = *piVar5;
    }
    break;
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x49:
switchD_001a191c_caseD_11:
    iVar1 = *piVar5;
    break;
  case 0x3b:
    if (param_3 != 0) {
      FUN_001a1b90(param_1);
      return;
    }
    goto LAB_001a19d4;
  }
  lVar2 = FUN_001580e0(*(undefined4 *)(*(int *)(iVar1 + 0x7c) + 0x2a4));
  if (lVar2 < 3) {
    FUN_001a1b28(param_1);
    return;
  }
  lVar2 = FUN_00188f10(*piVar5 + 0x150);
  if (lVar2 != 0) {
    iVar1 = *piVar5;
    uVar3 = FUN_00188f58(iVar1 + 0x150);
    lVar2 = FUN_0018d768(iVar1 + 0xd10,uVar3);
    if (lVar2 != 0) {
switchD_001a191c_caseD_3:
      FUN_001a1b90(param_1);
      return;
    }
  }
LAB_001a19d4:
  uVar4 = 0x16;
LAB_001a19d8:
  FUN_00193a28(param_1,uVar4,0);
  return;
}


// ==== FUN_001a1a08 @ 001a1a08 ====
// GLOBAL DAT_003df4b8 undefined
// GLOBAL DAT_003df718 undefined

undefined8 FUN_001a1a08(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  switch(*param_2) {
  case 1:
  case 10:
    FUN_00193a28(param_1,0x16,0);
    return 1;
  default:
    goto LAB_001a1b18;
  case 0xd:
    FUN_001a1b90(param_1);
    return 0;
  case 0x10:
    uStack_48 = 1;
    break;
  case 0x11:
    uStack_48 = 0;
    break;
  case 0x14:
    uStack_30 = *(undefined1 *)(param_2 + 6);
    auVar1 = _pextlw((long)(int)param_2[4],(long)(int)param_2[2]);
    auVar1 = _pextlw((long)(int)param_2[3],auVar1._0_8_);
    uStack_50 = 2;
    puStack_4c = &DAT_003df4b8;
    uVar2 = 8;
    uStack_40 = auVar1._0_4_;
    uStack_3c = auVar1._4_4_;
    uStack_38 = auVar1._8_4_;
    uStack_34 = auVar1._12_4_;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    uStack_18 = uStack_38;
    uStack_14 = uStack_34;
    goto LAB_001a1b0c;
  }
  puStack_4c = &DAT_003df718;
  uStack_50 = 5;
  uVar2 = 0x1c;
LAB_001a1b0c:
  FUN_00193a28(param_1,uVar2,&uStack_50);
LAB_001a1b18:
  return 0;
}


// ==== FUN_001a1b28 @ 001a1b28 ====

void FUN_001a1b28(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*(char *)(*piVar2 + 0x290) != '\0') {
    FUN_001880d8(*piVar2 + 0x290);
  }
  lVar1 = FUN_00181028(*piVar2 + 0x140);
  if (lVar1 != 0) {
    FUN_00180fe0(*piVar2 + 0x140);
  }
  FUN_00193a28(param_1,3,0);
  return;
}


// ==== FUN_001a1b90 @ 001a1b90 ====

void FUN_001a1b90(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar2 = FUN_00188f10(*piVar4 + 0x150);
  if (lVar2 == 0) {
    FUN_00193a28(param_1,0x16,0);
    return;
  }
  lVar2 = FUN_0018ab08(*piVar4 + 0x150);
  if (lVar2 == 0) {
    uVar3 = 0x3b;
  }
  else {
    lVar2 = FUN_00185f18(*piVar4 + 0x90);
    iVar1 = *piVar4;
    if (lVar2 != 0) {
      if ((*(byte *)(iVar1 + 0xd60) >> 4 & 1) != 0) {
        if ((*(int *)(iVar1 + 0x1ee0) == 0) ||
           (iVar1 = FUN_001834e0(), *(char *)(iVar1 + 0x40) == '\0')) {
          uVar3 = 0x49;
        }
        else {
          uVar3 = 0xf;
        }
        goto LAB_001a1c84;
      }
      iVar1 = *piVar4;
    }
    if ((*(byte *)(iVar1 + 0xd60) >> 4 & 1) != 0) {
      uVar3 = FUN_00188f80(iVar1 + 0x150);
      lVar2 = FUN_00178f18(uVar3);
      if (lVar2 != 0) {
        uVar3 = 0x13;
        if ((*(char *)(*piVar4 + 0x105) != '\0') &&
           (uVar3 = 0x11, *(char *)(*piVar4 + 0x130) == '\0')) {
          uVar3 = 0x13;
        }
        goto LAB_001a1c84;
      }
    }
    uVar3 = 0x11;
  }
LAB_001a1c84:
  FUN_00193a28(param_1,uVar3,0);
  return;
}


// ==== FUN_001a1cb0 @ 001a1cb0 ====

void FUN_001a1cb0(void)

{
  FUN_001a1d20();
  return;
}


// ==== FUN_001a1cd0 @ 001a1cd0 ====

undefined4 FUN_001a1cd0(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 10) {
    FUN_00193a28(param_1,0x16,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (*param_2 == 0xb) {
      FUN_001a1d20();
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_001a1d20 @ 001a1d20 ====

void FUN_001a1d20(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)param_1;
  iVar1 = *(int *)(*piVar2 + 0x7c);
  if (*(int *)(*piVar2 + 0xd30) == 5) {
    FUN_0015bf50(iVar1 + 0x280,*(undefined4 *)(*(int *)(iVar1 + 0x2a0) + 4));
    FUN_00193a28(param_1,0x33,0);
    iVar1 = *piVar2;
  }
  else {
    FUN_0015bf50(iVar1 + 0x280,**(undefined4 **)(iVar1 + 0x2a0));
    FUN_00193a28(param_1,0x43,0);
    iVar1 = *piVar2;
  }
  uVar3 = FUN_0018dbc0(iVar1 + 0xc94);
  uVar4 = FUN_0018dc48(*piVar2 + 0xc94);
  FUN_001848a8(uVar3,uVar4,iVar1 + 0x6f0);
  return;
}


// ==== FUN_001a1de0 @ 001a1de0 ====

void FUN_001a1de0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_zero_qw [16];
  undefined1 uVar3;
  int iVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  
  piVar6 = (int *)param_1;
  lVar1 = FUN_00188f10(*piVar6 + 0x150);
  if (lVar1 != 0) {
    lVar1 = FUN_00188350(*piVar6 + 0x290);
    iVar4 = *piVar6;
    if (lVar1 == 0) {
      if ((*(char *)(iVar4 + 0x291) != '\0') ||
         ((*(int *)(iVar4 + 0x1ee0) != 0 &&
          (iVar4 = FUN_001834e0(), *(char *)(iVar4 + 0x40) != '\0')))) {
        FUN_00193990(param_1,1);
        return;
      }
      FUN_001a2368(param_1);
      if (*(char *)((int)piVar6 + 0x22) == '\0') {
        uVar3 = FUN_001a2090(param_1);
        *(undefined1 *)((int)piVar6 + 0x23) = uVar3;
        iVar4 = *piVar6;
      }
      else {
        iVar4 = *piVar6;
      }
      FUN_00188148(iVar4 + 0x290,*(undefined1 *)((int)piVar6 + 0x23));
      if (*(char *)((int)piVar6 + 0x23) != '\0') {
        return;
      }
      uVar2 = FUN_00189048(*piVar6 + 0x150);
      auVar5._8_8_ = in_v0_udw;
      auVar5._0_8_ = uVar2;
      auVar5 = _por(in_zero_qw,auVar5);
      FUN_0017e428(*piVar6 + 0x650,auVar5._0_8_);
      return;
    }
    FUN_00186e40(iVar4 + 0x90);
  }
  FUN_00193990(param_1,0);
  return;
}


// ==== FUN_001a1ee0 @ 001a1ee0 ====

void FUN_001a1ee0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = false;
  FUN_00193980();
  piVar3 = (int *)param_1;
  FUN_00187fe0(*piVar3 + 0x290,0);
  FUN_00173690(piVar3 + 9);
  FUN_00173690(piVar3 + 10);
  *(undefined1 *)((int)piVar3 + 0x22) = 0;
  FUN_001a1fe8(param_1);
  *(undefined1 *)((int)piVar3 + 0x23) = 0;
  *(undefined1 *)((int)piVar3 + 0x22) = 1;
  *(undefined1 *)(*(int *)(*piVar3 + 0x694) + 0x30) = 1;
  iVar1 = *piVar3;
  lVar2 = FUN_001891c0(iVar1 + 0x150);
  if (lVar2 != 0) {
    bVar4 = *(char *)(*(int *)(*piVar3 + 0x7c) + 0x3aa) != '\0';
  }
  FUN_00188148(iVar1 + 0x290,bVar4);
  return;
}


// ==== FUN_001a1f98 @ 001a1f98 ====

void FUN_001a1f98(int *param_1)

{
  FUN_00193988();
  if (*(char *)(*param_1 + 0x290) != '\0') {
    FUN_001880d8(*param_1 + 0x290);
  }
  FUN_00188148(*param_1 + 0x290,0);
  return;
}


// ==== FUN_001a1fe8 @ 001a1fe8 ====

void FUN_001a1fe8(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  cVar2 = FUN_00185f18(*param_1 + 0x90);
  *(char *)(param_1 + 8) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)((int)param_1 + 0x21) = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00185fe8(*param_1 + 0x90);
    uVar4 = *puVar3;
    iVar6 = *(int *)(puVar3 + 1);
    iVar7 = *(int *)((int)puVar3 + 0xc);
    iVar1 = *param_1;
    param_1[4] = (int)uVar4;
    param_1[5] = (int)((ulong)uVar4 >> 0x20);
    param_1[6] = iVar6;
    param_1[7] = iVar7;
    iVar6 = *(int *)(iVar1 + 0x10c);
    bVar8 = false;
    if (iVar6 == *(int *)(iVar1 + 0x100)) {
      uVar4 = FUN_00188f58(iVar1 + 0x150);
      lVar5 = FUN_00177b68(iVar6,uVar4);
      bVar8 = lVar5 != 0;
    }
    *(bool *)((int)param_1 + 0x21) = bVar8;
  }
  FUN_00173640(0x40000000,param_1 + 10);
  return;
}


// ==== FUN_001a2090 @ 001a2090 ====

undefined8 FUN_001a2090(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uStack_3c;
  uint uStack_38;
  
  piVar7 = (int *)param_1;
  if ((char)piVar7[8] != '\0') {
    *(undefined1 *)(*(int *)(*piVar7 + 0x694) + 0x30) = 0;
    lVar3 = FUN_00182410(*piVar7 + 0x810,*(undefined8 *)(piVar7 + 4),0,0);
    if (lVar3 == 0) {
      iVar2 = piVar7[4];
      iVar4 = piVar7[5];
      iVar5 = piVar7[6];
      iVar6 = piVar7[7];
    }
    else {
      lVar3 = FUN_001829a8(*piVar7 + 0x810);
      if (lVar3 != 0) {
        lVar3 = FUN_001829e8(*piVar7 + 0x810);
        if (lVar3 != 0) {
          return 0;
        }
        return 1;
      }
      iVar2 = piVar7[4];
      iVar4 = piVar7[5];
      iVar5 = piVar7[6];
      iVar6 = piVar7[7];
    }
    FUN_001a1fe8(param_1);
    auVar8 = _lqc2(*(undefined1 (*) [16])(piVar7 + 4));
    auVar9._4_4_ = iVar4;
    auVar9._0_4_ = iVar2;
    auVar9._8_4_ = iVar5;
    auVar9._12_4_ = iVar6;
    auVar9 = _lqc2(auVar9);
    auVar8 = _vsub(auVar8,auVar9);
    auVar9 = _qmfc2(auVar8._0_4_);
    bVar1 = false;
    if ((auVar9._0_4_ & 0x7f800000) < 0x37800001) {
      auVar9 = _sqc2(auVar8);
      uStack_3c = auVar9._4_4_;
      bVar1 = false;
      if ((uStack_3c & 0x7f800000) < 0x37800001) {
        auVar9 = _sqc2(auVar8);
        uStack_38 = auVar9._8_4_;
        bVar1 = (uStack_38 & 0x7f800000) < 0x37800001;
      }
    }
    if (!bVar1) {
      return 0;
    }
    FUN_00186e40(*piVar7 + 0x90);
  }
  return 0;
}


// ==== FUN_001a21b0 @ 001a21b0 ====
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_00414dd0 undefined
// GLOBAL DAT_0040f4d4 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001a21b0(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  float fStack_4c;
  
  uVar4 = FUN_00188f80(*param_1 + 0x150);
  lVar5 = FUN_00178f18(uVar4);
  if (lVar5 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00188f80(*param_1 + 0x150);
    auVar6 = _lqc2(_DAT_004432c0);
    auVar7 = _qmtc2(*(undefined4 *)(*(int *)(iVar2 + 8) + 0x2e8));
    auVar6 = _vmulbc(auVar6,auVar7);
    auVar8 = _lqc2(_DAT_00414dd0);
    auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 8) + 0xa0));
    auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*param_1 + 0x7c) + 0xa0));
    auVar6 = _vadd(auVar9,auVar6);
    auVar10 = _vadd(auVar7,auVar8);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auVar7 = _vsub(auVar6,auVar10);
    auVar6 = _vmul(auVar7,auVar7);
    auVar8 = _vmove(auVar9);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar9,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    bVar1 = false;
    if (2.3283064e-10 <= auVar6._0_4_) {
      auVar6 = _vmul(auVar7,auVar7);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar8,auVar6);
      auVar7 = _vmove(auVar7);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      auVar6 = _qmtc2(SQRT(auVar6._0_4_));
      uVar11 = _vwaitq();
      auVar9 = _vmulq(auVar7,uVar11);
      auVar8 = _qmfc2(auVar10._0_4_);
      auVar7 = _qmfc2(auVar6._0_4_);
      auVar6 = _sqc2(auVar10);
      fVar3 = auVar7._0_4_;
      auVar7 = _qmtc2((int)fVar3 * (uint)(fVar3 < 5.0) | (uint)(fVar3 >= 5.0) * 0x40a00000);
      auVar7 = _vmulbc(auVar9,auVar7);
      auVar7 = _vadd(auVar10,auVar7);
      auVar9 = _qmfc2(auVar7._0_4_);
      auVar7 = _sqc2(auVar7);
      lVar5 = FUN_00185318(*param_1 + 0x6f0,auVar8._0_8_,auVar9._0_8_);
      auVar7 = _lqc2(auVar7);
      auVar6 = _lqc2(auVar6);
      if (lVar5 == 0) {
        auVar8 = _sqc2(auVar6);
        auVar9 = _qmfc2(auVar6._0_4_);
        fStack_4c = auVar8._4_4_;
        fVar3 = fStack_4c;
        auVar6 = _sqc2(auVar7);
        fStack_4c = auVar6._4_4_;
        auVar6 = _qmtc2(fVar3 + (fStack_4c - fVar3) * 0.5);
        auVar6 = _vaddbc(in_vf0,auVar6);
        auVar6 = _qmfc2(auVar6._0_4_);
        lVar5 = FUN_00177258(0x40400000,DAT_0040f4d4 + 0x78,auVar9._0_8_,auVar6._0_8_);
        bVar1 = lVar5 == 0;
      }
      else {
        bVar1 = false;
      }
    }
  }
  return bVar1;
}


// ==== FUN_001a2368 @ 001a2368 ====

void FUN_001a2368(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)param_1;
  lVar5 = FUN_00173610(piVar6 + 10);
  bVar2 = false;
  if (lVar5 == 0) {
    return;
  }
  cVar1 = *(char *)((int)piVar6 + 0x22);
  if (((char)piVar6[8] != '\0') && (*(char *)((int)piVar6 + 0x21) != '\0')) {
    bVar2 = *(char *)(*piVar6 + 0x111) == '\0';
  }
  if (bVar2) {
    *(undefined1 *)((int)piVar6 + 0x22) = 0;
  }
  else {
    lVar5 = FUN_0018ab08(*piVar6 + 0x150);
    piVar7 = piVar6 + 9;
    if (lVar5 != 0) {
      lVar5 = FUN_001735e0(piVar7);
      if (lVar5 == 0) {
        FUN_00173640(0x3f000000,piVar7);
      }
      lVar5 = FUN_001735e0(piVar7);
      if (lVar5 == 0) {
        cVar3 = *(char *)((int)piVar6 + 0x22);
      }
      else {
        lVar5 = FUN_00173610(piVar7);
        if (lVar5 == 0) {
          cVar3 = *(char *)((int)piVar6 + 0x22);
        }
        else {
          cVar3 = FUN_00176f00(*piVar6 + 0x1fcc);
          if (cVar3 == '\0') {
            cVar3 = *(char *)((int)piVar6 + 0x22);
          }
          else {
            uVar4 = FUN_001a21b0(param_1);
            *(undefined1 *)((int)piVar6 + 0x22) = uVar4;
            FUN_00173690(piVar7);
            FUN_00173640(0x40000000,piVar6 + 10);
            cVar3 = *(char *)((int)piVar6 + 0x22);
          }
        }
      }
      goto LAB_001a245c;
    }
    *(undefined1 *)((int)piVar6 + 0x22) = 0;
  }
  cVar3 = *(char *)((int)piVar6 + 0x22);
LAB_001a245c:
  if (cVar1 != cVar3) {
    if (cVar3 == '\0') {
      FUN_001a1fe8(param_1);
    }
    else {
      FUN_001825b0(*piVar6 + 0x810);
      *(undefined1 *)(*(int *)(*piVar6 + 0x694) + 0x30) = 1;
      *(undefined1 *)((int)piVar6 + 0x23) = 0;
    }
  }
  return;
}


// ==== FUN_001a24b0 @ 001a24b0 ====

void FUN_001a24b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


// ==== FUN_001a24b8 @ 001a24b8 ====

undefined4 FUN_001a24b8(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)(param_1[5] + 4) = 3;
  auVar1 = _sqc2(auVar2);
  param_1[2] = auVar1;
  param_1[3][5] = 0;
  param_1[5][8] = 0;
  *(undefined4 *)(param_1[5] + 0xc) = 0;
  param_1[3][6] = 0;
  *(undefined4 *)param_1[5] = 0;
  auVar1 = _sqc2(auVar2);
  param_1[4] = auVar1;
  auVar1 = _sqc2(auVar2);
  param_1[1] = auVar1;
  _sqc2(auVar2);
  auVar1 = _sqc2(auVar2);
  *param_1 = auVar1;
  *(undefined4 *)(param_1[3] + 0xc) = 0;
  return 1;
}


// ==== FUN_001a2500 @ 001a2500 ====

void FUN_001a2500(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  FUN_001a2968();
  FUN_001a2b70(param_1);
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x54);
  (**(code **)(*(int *)(iVar3 + 0x60) + 0x4c))
            (iVar3 + *(short *)(*(int *)(iVar3 + 0x60) + 0x48),iVar1);
  if (iVar1 == 1) {
    lVar2 = FUN_001a27a8(param_1);
    if (lVar2 == 0) {
      *(undefined1 *)(iVar3 + 0x36) = 0;
    }
    else {
      lVar2 = FUN_001a2800(param_1);
      if (lVar2 == 0) {
        *(undefined1 *)(iVar3 + 0x36) = 0;
      }
      else {
        *(undefined1 *)(iVar3 + 0x36) = 1;
      }
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x36) = 0;
  }
  return;
}


// ==== FUN_001a2590 @ 001a2590 ====
// GLOBAL DAT_0040f4e0 undefined4

void FUN_001a2590(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined1 *)(iVar2 + 0x35) = 1;
  *(undefined1 *)(iVar2 + 0x36) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  uVar1 = FUN_0015d2a8(DAT_0040f4e0,
                       **(undefined1 **)(*(int *)(*(int *)(iVar2 + 0x38) + 0x7c) + 0x2a4));
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  FUN_001a2968(param_1);
  FUN_001a2b70(param_1);
  *(undefined4 *)(iVar2 + 0x54) = 0;
  (**(code **)(*(int *)(iVar2 + 0x60) + 0x44))(iVar2 + *(short *)(*(int *)(iVar2 + 0x60) + 0x40),0);
  return;
}


// ==== FUN_001a2610 @ 001a2610 ====

void FUN_001a2610(int param_1)

{
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}


// ==== FUN_001a2620 @ 001a2620 ====
// GLOBAL DAT_0040f4d4 int

void FUN_001a2620(int param_1)

{
  FUN_00179258(DAT_0040f4d4 + 0xfa8,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x298));
  return;
}


// ==== FUN_001a2650 @ 001a2650 ====

void FUN_001a2650(int param_1,long param_2)

{
  if (param_2 == 1) {
    FUN_001a2c70();
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}


// ==== FUN_001a2690 @ 001a2690 ====

void FUN_001a2690(void)

{
  return;
}


// ==== FUN_001a2698 @ 001a2698 ====

void FUN_001a2698(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    FUN_001a2cf0();
  }
  return;
}


// ==== FUN_001a26c0 @ 001a26c0 ====

void FUN_001a26c0(int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + 0x60) + 0x54))
            (param_1 + *(short *)(*(int *)(param_1 + 0x60) + 0x50),*(undefined4 *)(param_1 + 0x54));
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x54) = 2;
  }
  else if (iVar1 < 2) {
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x60);
      goto LAB_001a272c;
    }
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  else {
    if (iVar1 != 2) {
      iVar1 = *(int *)(param_1 + 0x60);
      goto LAB_001a272c;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
LAB_001a272c:
  (**(code **)(iVar1 + 0x44))(param_1 + *(short *)(iVar1 + 0x40),*(undefined4 *)(param_1 + 0x54));
  return;
}


// ==== FUN_001a2750 @ 001a2750 ====

void FUN_001a2750(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  FUN_0017db98(*(int *)(param_1 + 0x38) + 0x650);
  auVar1._8_4_ = in_a1_udw;
  auVar1._0_8_ = param_2;
  auVar1._12_4_ = in_register_0000005c;
  auVar1 = _lqc2(auVar1);
  auVar2._8_4_ = in_a2_udw;
  auVar2._0_8_ = param_3;
  auVar2._12_4_ = in_register_0000006c;
  auVar2 = _lqc2(auVar2);
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  FUN_0017de50(*(int *)(param_1 + 0x38) + 0x650,auVar1._0_8_,(int)param_2);
  return;
}


// ==== FUN_001a27a8 @ 001a27a8 ====

bool FUN_001a27a8(int param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_0017e968(*(int *)(param_1 + 0x38) + 0x650);
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_0017e860(*(int *)(param_1 + 0x38) + 0x650);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


// ==== FUN_001a2800 @ 001a2800 ====

bool FUN_001a2800(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(char *)(*(int *)(param_1 + 0x38) + 0x38) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 0x7c);
    bVar2 = *(char *)(iVar1 + 0x3a9) == *(char *)(iVar1 + 0x3aa);
  }
  return bVar2;
}


// ==== FUN_001a2830 @ 001a2830 ====
// GLOBAL DAT_0040f4d4 undefined4

float FUN_001a2830(undefined1 (*param_1) [16])

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = *(undefined4 **)(param_1[3] + 0xc);
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    fVar3 = (float)FUN_0016de70(*puVar1,puVar1[1],DAT_0040f4d4);
  }
  else {
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _lqc2(*param_1);
    auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(param_1[3] + 8) + 0x7c) + 0xa0));
    auVar4 = _vsub(auVar4,auVar5);
    auVar4 = _vmul(auVar4,auVar4);
    _vaddabc(auVar4,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    if (((uint)auVar4._0_4_ & 0x7f800000) < 0x37800001) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = 225.0 / auVar4._0_4_;
      fVar3 = (float)((int)fVar3 * (uint)(0.0 < fVar3));
      fVar3 = (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
    }
    fVar2 = (float)FUN_0016de70(0x3f000000,0x3fc00000,DAT_0040f4d4);
    fVar3 = (float)((int)(fVar3 * fVar2) * (uint)(0.0 < fVar3 * fVar2));
    fVar2 = (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
    if (*(int *)(*(int *)(param_1[3] + 8) + 0x29c) == 3) {
      fVar2 = fVar2 * 0.25;
    }
    fVar3 = **(float **)(param_1[3] + 0xc);
    fVar3 = fVar3 + ((*(float **)(param_1[3] + 0xc))[1] - fVar3) * fVar2;
  }
  return fVar3;
}


// ==== FUN_001a2968 @ 001a2968 ====

void FUN_001a2968(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_v0_udw;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pauVar10 = (undefined1 (*) [16])param_1;
  if (*(char *)(*(int *)(pauVar10[3] + 8) + 0xd27) == '\0') {
    cVar1 = pauVar10[5][8];
LAB_001a29c4:
    if (cVar1 != '\0') {
      uVar5 = FUN_001a2620(param_1);
      puVar2 = (undefined8 *)FUN_00178d30(uVar5);
      uVar5 = *puVar2;
      uVar8 = *(undefined4 *)(puVar2 + 1);
      uVar9 = *(undefined4 *)((int)puVar2 + 0xc);
      goto LAB_001a29e0;
    }
    uVar5 = FUN_001a2620(param_1);
    uVar5 = FUN_00178e60(uVar5);
    uStack_50 = (undefined4)uVar5;
    uStack_4c = (undefined4)((ulong)uVar5 >> 0x20);
    uStack_48 = (undefined4)extraout_v0_udw;
    uStack_44 = (undefined4)((ulong)extraout_v0_udw >> 0x20);
    uVar5 = FUN_001a2620(param_1);
    puVar3 = (undefined4 *)FUN_00178d30(uVar5);
    uStack_40 = *puVar3;
    uStack_3c = puVar3[1];
    uStack_38 = puVar3[2];
    uStack_34 = puVar3[3];
    uVar8 = FUN_0018e0a0(*(int *)(pauVar10[3] + 8) + 0xc94);
    auVar7._4_4_ = uStack_4c;
    auVar7._0_4_ = uStack_50;
    auVar7._8_4_ = uStack_48;
    auVar7._12_4_ = uStack_44;
    auVar12 = _lqc2(auVar7);
    auVar7 = _qmtc2(uVar8);
    auVar11._4_4_ = uStack_3c;
    auVar11._0_4_ = uStack_40;
    auVar11._8_4_ = uStack_38;
    auVar11._12_4_ = uStack_34;
    auVar11 = _lqc2(auVar11);
    _vaddabc(auVar12,in_vf0);
    _vmsubabc(auVar12,auVar7);
    auVar7 = _vmaddbc(auVar11,auVar7);
    auVar7 = _sqc2(auVar7);
    *pauVar10 = auVar7;
  }
  else {
    lVar6 = FUN_00189208(*(int *)(pauVar10[3] + 8) + 0x150);
    if (lVar6 == 0) {
      cVar1 = pauVar10[5][8];
      goto LAB_001a29c4;
    }
    lVar6 = FUN_0018ab08(*(int *)(pauVar10[3] + 8) + 0x150);
    if (lVar6 != 0) {
      cVar1 = pauVar10[5][8];
      goto LAB_001a29c4;
    }
    puVar2 = (undefined8 *)FUN_001893a0(*(int *)(pauVar10[3] + 8) + 0x150);
    uVar5 = *puVar2;
    uVar8 = *(undefined4 *)(puVar2 + 1);
    uVar9 = *(undefined4 *)((int)puVar2 + 0xc);
LAB_001a29e0:
    *(int *)*pauVar10 = (int)uVar5;
    *(int *)(*pauVar10 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(*pauVar10 + 8) = uVar8;
    *(undefined4 *)(*pauVar10 + 0xc) = uVar9;
  }
  uVar5 = FUN_001a2620(param_1);
  lVar6 = FUN_00178f18(uVar5);
  if (lVar6 == 0) {
    pauVar10[3][4] = 0;
    auVar7 = _pextlw(0,0);
    auVar7 = _pextlw(0,auVar7._0_8_);
  }
  else {
    iVar4 = FUN_001a2620(param_1);
    iVar4 = *(int *)(iVar4 + 8);
    if (*(int *)(iVar4 + 0xc4) != 2) {
      FUN_00135940(auStack_90,iVar4,0);
      auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0xa0));
      auVar7 = _lqc2(auStack_60);
      auVar7 = _vsub(auVar7,auVar11);
      pauVar10[3][4] = 0;
      auVar7 = _sqc2(auVar7);
      pauVar10[2] = auVar7;
      goto LAB_001a2acc;
    }
    auVar7 = _pextlw(0,0);
    auVar7 = _pextlw((long)*(int *)(iVar4 + 0x2e8),auVar7._0_8_);
    pauVar10[3][4] = 1;
  }
  *(int *)pauVar10[2] = auVar7._0_4_;
  *(int *)(pauVar10[2] + 4) = auVar7._4_4_;
  *(int *)(pauVar10[2] + 8) = auVar7._8_4_;
  *(int *)(pauVar10[2] + 0xc) = auVar7._12_4_;
LAB_001a2acc:
  auVar12 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _lqc2(*pauVar10);
  auVar13 = _vmove(auVar12);
  auVar7 = _lqc2(*(undefined1 (*) [16])(*(int *)(*(int *)(pauVar10[3] + 8) + 0x7c) + 0xa0));
  auVar7 = _vsub(auVar11,auVar7);
  auVar11 = _vmul(auVar7,auVar7);
  auVar7 = _sqc2(auVar7);
  pauVar10[1] = auVar7;
  _vaddabc(auVar11,auVar11);
  auVar7 = _vmaddbc(auVar12,auVar11);
  auVar7 = _qmfc2(auVar7._0_4_);
  if (auVar7._0_4_ < 2.3283064e-10) {
    *(undefined4 *)pauVar10[3] = 0x3c23d70a;
  }
  else {
    auVar7 = _lqc2(pauVar10[1]);
    auVar7 = _vmul(auVar7,auVar7);
    _vaddabc(auVar7,auVar7);
    auVar7 = _vmaddbc(auVar13,auVar7);
    auVar7 = _qmfc2(auVar7._0_4_);
    *(int *)pauVar10[3] = auVar7._0_4_;
  }
  return;
}


// ==== FUN_001a2b70 @ 001a2b70 ====
// GLOBAL DAT_00414d54 int

void FUN_001a2b70(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (int)param_1;
  fVar6 = *(float *)(*(int *)(iVar5 + 0x38) + 0x2ac);
  if (*(float *)(iVar5 + 0x30) < fVar6 * fVar6) {
    *(undefined4 *)(iVar5 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(*(int *)(iVar5 + 0x38) + 0x2a8);
  }
  uVar3 = FUN_001a2620(param_1);
  lVar4 = FUN_00178f50(uVar3);
  if (lVar4 == 0) {
    iVar2 = *(int *)(iVar5 + 0x38);
  }
  else {
    *(undefined4 *)(iVar5 + 0x5c) = 0x3f800000;
    iVar2 = *(int *)(iVar5 + 0x38);
  }
  lVar4 = FUN_0018ddd8(iVar2 + 0xc94);
  if (lVar4 != 0) {
    uVar3 = FUN_001a2620(param_1);
    lVar4 = FUN_00178f18(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_001a2620(param_1);
      cVar1 = **(char **)(*(int *)(iVar2 + 8) + 0x2a4);
      if (cVar1 == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(cVar1 * 4 + DAT_00414d54);
      }
      if (iVar2 == 10) {
        *(undefined4 *)(iVar5 + 0x5c) = 0x3f800000;
      }
    }
  }
  return;
}


// ==== FUN_001a2c70 @ 001a2c70 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_001a2c70(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = FUN_0016dfb0(*(undefined4 *)(param_1 + 0x5c),DAT_0040f4d4);
  *(undefined1 *)(param_1 + 0x58) = uVar2;
  iVar3 = *(int *)(param_1 + 0x38);
  if (*(int *)(iVar3 + 0x29c) == 3) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    iVar3 = *(int *)(param_1 + 0x38);
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  *(byte *)(*(int *)(iVar3 + 0x694) + 0x3d) = bVar1 ^ 1;
  return;
}


// ==== FUN_001a2cd8 @ 001a2cd8 ====

void FUN_001a2cd8(int param_1)

{
  undefined8 in_v0_udw;
  undefined1 auVar1 [16];
  undefined1 in_a1_qw [16];
  
  auVar1._0_8_ = (long)*(int *)(param_1 + 0x50);
  auVar1._8_8_ = in_v0_udw;
  auVar1 = _pmaxw(auVar1,in_a1_qw);
  auVar1 = _pextlw(0,auVar1._0_8_);
  *(int *)(param_1 + 0x50) = auVar1._0_4_;
  return;
}


// ==== FUN_001a2cf0 @ 001a2cf0 ====
// GLOBAL DAT_003f6770 undefined

void FUN_001a2cf0(int param_1)

{
  if (*(char *)(param_1 + 0x35) != '\0') {
    if (*(int *)(&DAT_003f6770 + *(int *)(param_1 + 0x50) * 4) == 6) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
    FUN_0018d870(*(int *)(param_1 + 0x38) + 0xd10);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


// ==== FUN_001a2d50 @ 001a2d50 ====
// GLOBAL DAT_0040ead8 char

undefined4 FUN_001a2d50(int param_1)

{
  float fVar1;
  
  FUN_001a24b8();
  FUN_00173690(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = 0xbf800000;
  FUN_00173690(param_1 + 0xb0);
  FUN_00173690(param_1 + 0xac);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 0x3dcccccd;
  if (DAT_0040ead8 == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = 0x3da3d70a;
    *(undefined4 *)(param_1 + 0xb8) = 0x3e0f5c29;
  }
  else {
    fVar1 = (float)FUN_0029e688(0x3f6b851f,0x3f99999a);
    *(float *)(param_1 + 0xb4) = 1.0 - fVar1;
    fVar1 = (float)FUN_0029e688(0x3f5c28f6,0x3f99999a);
    *(float *)(param_1 + 0xb8) = 1.0 - fVar1;
  }
  return 1;
}


// ==== FUN_001a2e50 @ 001a2e50 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_0040f4d4 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a2e50(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  pauVar4 = (undefined1 (*) [16])param_1;
  if (param_2 == 1) {
    auVar8 = _lqc2(pauVar4[1]);
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _vmul(auVar8,auVar8);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar6);
    uVar5 = _vwaitq();
    auVar6 = _vmulq(auVar8,uVar5);
    auVar6 = _sqc2(auVar6);
    if ((pauVar4[0xc][0] == '\0') && (lVar2 = FUN_00173610(pauVar4[10] + 0xc), lVar2 == 0)) {
      uVar5 = *(undefined4 *)(*pauVar4 + 8);
      uVar3 = *(undefined4 *)(*pauVar4 + 0xc);
      *(int *)pauVar4[7] = (int)*(undefined8 *)*pauVar4;
      *(int *)(pauVar4[7] + 4) = (int)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
      *(undefined4 *)(pauVar4[7] + 8) = uVar5;
      *(undefined4 *)(pauVar4[7] + 0xc) = uVar3;
      uVar5 = FUN_001a2830(param_1);
    }
    else {
      pauVar4[0xc][0] = 0;
      FUN_00173640(0x41000000,pauVar4[10] + 8);
      FUN_00173690(pauVar4[10] + 0xc);
      auVar8 = _qmtc2(0x3f000000);
      auVar7 = _lqc2(pauVar4[1]);
      auVar8 = _vmulbc(auVar7,auVar8);
      auVar7 = _lqc2(*pauVar4);
      auVar7 = _vsub(auVar7,auVar8);
      iVar1 = *(int *)(pauVar4[3] + 0xc);
      auVar7 = _sqc2(auVar7);
      pauVar4[7] = auVar7;
      uVar5 = *(undefined4 *)(iVar1 + 4);
    }
    FUN_00173640(uVar5,pauVar4 + 10);
    *(undefined4 *)(pauVar4[10] + 4) = uVar5;
    FUN_001a2c70(param_1);
    *(undefined4 *)pauVar4[5] = 1;
    lVar2 = FUN_0012d218(0x3f000000,DAT_0040f4d0);
    if (lVar2 == 0) {
      auVar7 = _lqc2(auVar6);
      auVar6 = _lqc2(_DAT_004432c0);
      _vopmula(auVar7,auVar6);
      auVar6 = _vopmsub(auVar6,auVar7);
      auVar6 = _vsub(in_vf0,auVar6);
      auVar6 = _sqc2(auVar6);
      pauVar4[8] = auVar6;
    }
    else {
      auVar7 = _lqc2(auVar6);
      auVar6 = _lqc2(_DAT_004432c0);
      _vopmula(auVar7,auVar6);
      auVar6 = _vopmsub(auVar6,auVar7);
      auVar6 = _sqc2(auVar6);
      pauVar4[8] = auVar6;
    }
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      FUN_00173690(pauVar4 + 10);
      *(undefined4 *)(pauVar4[10] + 4) = 0xbf800000;
    }
  }
  else if (param_2 == 2) {
    uVar5 = FUN_0016de70(*(undefined4 *)(*(int *)(pauVar4[3] + 0xc) + 8),
                         *(undefined4 *)(*(int *)(pauVar4[3] + 0xc) + 0xc),DAT_0040f4d4);
    FUN_00173640(uVar5,pauVar4 + 0xb);
  }
  return;
}


// ==== FUN_001a3028 @ 001a3028 ====

void FUN_001a3028(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 in_zero_qw [16];
  char cVar2;
  undefined8 uVar3;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar4 [16];
  int iVar5;
  
  FUN_001a2690();
  iVar5 = (int)param_1;
  if (param_2 == 1) {
    cVar2 = FUN_00173610(iVar5 + 0xa0);
    if (cVar2 == '\0') {
      uVar3 = FUN_001a3120(param_1,iVar5 + 0x90);
      auVar4._8_4_ = in_v0_udw;
      auVar4._0_8_ = uVar3;
      auVar4._12_4_ = in_register_0000002c;
      auVar4 = _por(in_zero_qw,auVar4);
      *(undefined8 *)(iVar5 + 0x40) = uVar3;
      *(undefined4 *)(iVar5 + 0x48) = in_v0_udw;
      *(undefined4 *)(iVar5 + 0x4c) = in_register_0000002c;
      FUN_001a2750(param_1,auVar4._0_8_,*(undefined4 *)(iVar5 + 0x90));
      FUN_0017e428(*(int *)(iVar5 + 0x38) + 0x650);
      return;
    }
    FUN_00173640(0x40400000,iVar5 + 0xac);
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) {
        return;
      }
      lVar1 = FUN_00173610(iVar5 + 0xb0);
      if (lVar1 == 0) {
        return;
      }
      FUN_001a26c0(param_1);
      return;
    }
    if (param_2 != 0) {
      return;
    }
  }
  FUN_001a26c0(param_1);
  return;
}


// ==== FUN_001a3120 @ 001a3120 ====
// GLOBAL DAT_0040f4d0 undefined4
// GLOBAL DAT_004432a0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001a3120(undefined8 param_1,long param_2)

{
  float fVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  int iVar7;
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
  undefined4 uVar17;
  
  auVar9 = _vaddbc(in_vf0,in_vf0);
  pauVar5 = (undefined1 (*) [16])param_1;
  auVar9 = _sqc2(auVar9);
  fVar6 = (float)FUN_00173678(pauVar5[10] + 8);
  auVar10 = _lqc2(pauVar5[1]);
  auVar10 = _vmul(auVar10,auVar10);
  auVar11 = _lqc2(auVar9);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar11,auVar10);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar10);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  uVar17 = _vwaitq();
  auVar10 = _vmulq(auVar10,uVar17);
  auVar10 = _qmfc2(auVar10._0_4_);
  fVar1 = auVar10._0_4_;
  lVar3 = FUN_00173610(pauVar5[10] + 8);
  auVar9 = _lqc2(auVar9);
  if ((lVar3 != 0) || (fVar1 < 8.0)) {
    uVar17 = 0x3f800000;
    auVar10 = _lqc2(pauVar5[7]);
  }
  else {
    if (3.0 <= fVar6) {
      if (fVar1 < 15.0) {
        uVar17 = *(undefined4 *)(pauVar5[0xb] + 8);
      }
      else {
        uVar17 = *(undefined4 *)(pauVar5[0xb] + 4);
      }
    }
    else {
      uVar17 = *(undefined4 *)(pauVar5[0xb] + 8);
    }
    auVar10 = _lqc2(pauVar5[7]);
  }
  auVar12 = _qmtc2(uVar17);
  auVar15 = _lqc2(*pauVar5);
  auVar11 = _vsub(auVar15,auVar10);
  iVar2 = *(int *)(pauVar5[3] + 8);
  auVar12 = _vmulbc(auVar11,auVar12);
  auVar11 = _lqc2(pauVar5[1]);
  auVar12 = _vadd(auVar10,auVar12);
  auVar10 = _vmul(auVar11,auVar11);
  auVar12 = _vmove(auVar12);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar9,auVar10);
  auVar11 = _qmfc2(auVar10._0_4_);
  auVar10 = _sqc2(auVar12);
  pauVar5[7] = auVar10;
  auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x7c) + 0xa0));
  auVar10 = _vsub(auVar12,auVar10);
  auVar10 = _vmul(auVar10,auVar10);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar9,auVar10);
  auVar10 = _qmfc2(auVar10._0_4_);
  if (auVar10._0_4_ <= auVar11._0_4_) {
    auVar10 = _vsub(auVar15,auVar12);
    auVar10 = _vmul(auVar10,auVar10);
    _vaddabc(auVar10,auVar10);
    auVar9 = _vmaddbc(auVar9,auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar9);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    uVar17 = _vwaitq();
    auVar9 = _vmulq(auVar9,uVar17);
    auVar9 = _qmfc2(auVar9._0_4_);
    fVar6 = auVar9._0_4_;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    fVar6 = 1.0 - fVar6;
  }
  else {
    fVar6 = 1.0;
  }
  uVar4 = FUN_001a2620(param_1);
  lVar3 = FUN_00178f18(uVar4);
  if (lVar3 == 0) {
    auVar10 = _vadd(in_vf0,in_vf0);
    auVar9 = _sqc2(auVar10);
    pauVar5[2] = auVar9;
    _sqc2(auVar10);
  }
  else {
    iVar2 = FUN_001a2620(param_1);
    auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 8) + 0x100));
    auVar10 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 8) + 0xa0));
    auVar9 = _vsub(auVar9,auVar10);
    auVar9 = _sqc2(auVar9);
    pauVar5[2] = auVar9;
  }
  iVar2 = FUN_0012d058(DAT_0040f4d0);
  iVar7 = FUN_0012d058(DAT_0040f4d0);
  iVar8 = FUN_0012d058(DAT_0040f4d0);
  auVar9 = _pextlw((long)iVar8,(long)iVar2);
  auVar10 = _qmtc2(0x3f000000);
  auVar9 = _pextlw((long)iVar7,auVar9._0_8_);
  auVar11 = _qmtc2(auVar9._0_4_);
  auVar9 = _qmtc2(fVar6 * fVar1 * *(float *)(pauVar5[0xb] + 0xc));
  auVar10 = _vsubbc(auVar11,auVar10);
  auVar9 = _vmulbc(auVar10,auVar9);
  if (param_2 != 0) {
    auVar9 = _sqc2(auVar9);
    *(undefined1 (*) [16])param_2 = auVar9;
    auVar9 = _lqc2(_DAT_004432a0);
  }
  if ((pauVar5[5][8] == '\0') || (fVar1 <= 8.0)) {
    auVar10 = _lqc2(_DAT_004432a0);
  }
  else {
    auVar10 = _lqc2(pauVar5[8]);
  }
  auVar14 = _qmtc2(fVar6);
  auVar16 = _qmtc2(0x3e4ccccd);
  auVar15 = _lqc2(pauVar5[1]);
  auVar11 = _lqc2(pauVar5[7]);
  auVar13 = _qmtc2(1.0 - fVar6);
  auVar12 = _lqc2(pauVar5[2]);
  auVar12 = _vmulbc(auVar12,auVar14);
  auVar10 = _vadd(auVar11,auVar10);
  auVar11 = _vmulbc(auVar15,auVar13);
  auVar10 = _vadd(auVar10,auVar12);
  auVar11 = _vmulbc(auVar11,auVar16);
  auVar10 = _vsub(auVar10,auVar11);
  auVar9 = _vadd(auVar10,auVar9);
  auVar9 = _qmfc2(auVar9._0_4_);
  return auVar9._0_8_;
}


// ==== FUN_001a3478 @ 001a3478 ====

undefined4 FUN_001a3478(void)

{
  FUN_001a24b8();
  return 1;
}


// ==== FUN_001a3498 @ 001a3498 ====
// GLOBAL DAT_004432a0 undefined4

void FUN_001a3498(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 in_zero_qw [16];
  undefined8 uVar4;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar5 [16];
  int iVar6;
  
  FUN_001a2690();
  iVar6 = (int)param_1;
  if (param_2 == 1) {
    uVar4 = FUN_001a3590(param_1,0);
    uVar3 = DAT_004432a0;
    auVar5._8_4_ = in_v0_udw;
    auVar5._0_8_ = uVar4;
    auVar5._12_4_ = in_register_0000002c;
    auVar5 = _por(in_zero_qw,auVar5);
    *(undefined8 *)(iVar6 + 0x40) = uVar4;
    *(undefined4 *)(iVar6 + 0x48) = in_v0_udw;
    *(undefined4 *)(iVar6 + 0x4c) = in_register_0000002c;
    FUN_001a2750(param_1,auVar5._0_8_,uVar3);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uVar4 = FUN_001a3590(param_1,0);
      uVar3 = DAT_004432a0;
      auVar2._8_4_ = in_v0_udw;
      auVar2._0_8_ = uVar4;
      auVar2._12_4_ = in_register_0000002c;
      auVar5 = _por(in_zero_qw,auVar2);
      *(undefined8 *)(iVar6 + 0x40) = uVar4;
      *(undefined4 *)(iVar6 + 0x48) = in_v0_udw;
      *(undefined4 *)(iVar6 + 0x4c) = in_register_0000002c;
      FUN_001a2750(param_1,auVar5._0_8_,uVar3);
      lVar1 = FUN_001a27a8(param_1);
      if ((lVar1 != 0) && (lVar1 = FUN_001a2800(param_1), lVar1 != 0)) {
        FUN_001a26c0(param_1);
      }
    }
  }
  else if (param_2 == 2) {
    FUN_001a26c0(param_1);
  }
  return;
}


// ==== FUN_001a3590 @ 001a3590 ====

undefined8 FUN_001a3590(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = _lqc2(*param_1);
  auVar1 = _lqc2(param_1[2]);
  auVar1 = _vadd(auVar2,auVar1);
  auVar1 = _qmfc2(auVar1._0_4_);
  return auVar1._0_8_;
}


// ==== FUN_001a35a8 @ 001a35a8 ====

undefined4 FUN_001a35a8(int param_1)

{
  FUN_001a24b8();
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return 1;
}


// ==== FUN_001a35e0 @ 001a35e0 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_001a35e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  
  FUN_001a2650();
  if (param_2 == 0) {
    iVar4 = (int)param_1;
    if (*(char *)(iVar4 + 0x81) == '\0') {
      uVar1 = FUN_001a2620(param_1);
      lVar2 = FUN_00178f18(uVar1);
      if (lVar2 != 0) {
        uVar8 = 0xbe800000;
        iVar5 = FUN_0016de70(0xbe800000,0x3e800000,DAT_0040f4d4);
        iVar6 = FUN_0016de70(0xbf000000,0x3f000000,DAT_0040f4d4);
        iVar7 = FUN_0016de70(uVar8,0x3e800000,DAT_0040f4d4);
        auVar3 = _pextlw((long)iVar7,(long)iVar5);
        auVar3 = _pextlw((long)iVar6,auVar3._0_8_);
        *(int *)(iVar4 + 0x70) = auVar3._0_4_;
        *(int *)(iVar4 + 0x74) = auVar3._4_4_;
        *(int *)(iVar4 + 0x78) = auVar3._8_4_;
        *(int *)(iVar4 + 0x7c) = auVar3._12_4_;
        return;
      }
    }
    auVar9 = _vadd(in_vf0,in_vf0);
    auVar3 = _sqc2(auVar9);
    *(undefined1 (*) [16])(iVar4 + 0x70) = auVar3;
    _sqc2(auVar9);
  }
  return;
}


// ==== FUN_001a36d8 @ 001a36d8 ====
// GLOBAL DAT_004432a0 undefined4

void FUN_001a36d8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 in_zero_qw [16];
  undefined8 uVar4;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar5 [16];
  int iVar6;
  
  FUN_001a2690();
  iVar6 = (int)param_1;
  if (param_2 == 1) {
    uVar4 = FUN_001a37e8(param_1,0);
    uVar3 = DAT_004432a0;
    auVar5._8_4_ = in_v0_udw;
    auVar5._0_8_ = uVar4;
    auVar5._12_4_ = in_register_0000002c;
    auVar5 = _por(in_zero_qw,auVar5);
    *(undefined8 *)(iVar6 + 0x40) = uVar4;
    *(undefined4 *)(iVar6 + 0x48) = in_v0_udw;
    *(undefined4 *)(iVar6 + 0x4c) = in_register_0000002c;
    FUN_001a2750(param_1,auVar5._0_8_,uVar3);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uVar4 = FUN_001a37e8(param_1,0);
      auVar2._8_4_ = in_v0_udw;
      auVar2._0_8_ = uVar4;
      auVar2._12_4_ = in_register_0000002c;
      auVar5 = _por(in_zero_qw,auVar2);
      *(undefined8 *)(iVar6 + 0x40) = uVar4;
      *(undefined4 *)(iVar6 + 0x48) = in_v0_udw;
      *(undefined4 *)(iVar6 + 0x4c) = in_register_0000002c;
      FUN_0017e428(*(int *)(iVar6 + 0x38) + 0x650,auVar5._0_8_);
      FUN_001a2750(param_1);
      lVar1 = FUN_001a27a8(param_1);
      if (((lVar1 != 0) && (lVar1 = FUN_001a2800(param_1), lVar1 != 0)) &&
         (*(char *)(iVar6 + 0x80) != '\0')) {
        FUN_001a26c0(param_1);
      }
    }
  }
  else if (param_2 == 2) {
    FUN_001a26c0(param_1);
  }
  return;
}


// ==== FUN_001a37e8 @ 001a37e8 ====
// GLOBAL DAT_0040f4d4 undefined4

undefined8 FUN_001a37e8(undefined8 param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_v0_udw;
  int iVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auStack_40 [16];
  
  uVar3 = FUN_001a2620();
  lVar4 = FUN_00178f18(uVar3);
  iVar5 = (int)param_1;
  if (lVar4 == 0) {
    uVar3 = FUN_001a2620(param_1);
    pauVar2 = (undefined1 (*) [16])FUN_00178d30(uVar3);
    auStack_40 = *pauVar2;
  }
  else {
    iVar1 = FUN_001a2620(param_1);
    if (*(char *)(iVar5 + 0x81) == '\0') {
      uVar3 = FUN_001a2620(param_1);
      auStack_40._0_8_ = FUN_00178e60(uVar3);
      auStack_40._8_4_ = (int)extraout_v0_udw;
      auStack_40._12_4_ = (int)((ulong)extraout_v0_udw >> 0x20);
    }
    else {
      auVar6 = _qmtc2(0);
      _qmtc2(*(undefined4 *)(*(int *)(iVar1 + 8) + 0xf0));
      auVar6 = _vaddbc(in_vf0,auVar6);
      auVar6 = _sqc2(auVar6);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      auVar9 = _vmove(auVar7);
      auVar8 = _lqc2(auVar6);
      auVar6 = _vmul(auVar8,auVar8);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar7,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      if (2.3283064e-10 <= auVar6._0_4_) {
        auVar6 = _vmul(auVar8,auVar8);
        _vaddabc(auVar6,auVar6);
        auVar6 = _vmaddbc(auVar9,auVar6);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar6);
        uVar10 = _vwaitq();
        auVar6 = _vmulq(auVar8,uVar10);
        auVar6 = _sqc2(auVar6);
        uVar3 = FUN_001a2620(param_1);
        pauVar2 = (undefined1 (*) [16])FUN_00178d30(uVar3);
        auVar8 = _lqc2(auVar6);
        auVar6 = _qmtc2(0x40400000);
        auVar7 = _lqc2(*pauVar2);
        auVar6 = _vmulbc(auVar8,auVar6);
        auVar6 = _vadd(auVar7,auVar6);
        auStack_40 = _sqc2(auVar6);
      }
    }
  }
  *(undefined1 *)(iVar5 + 0x80) = 1;
  lVar4 = FUN_0016e588(DAT_0040f4d4,auStack_40._0_4_);
  if (lVar4 == 0) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x70));
  }
  else {
    auVar7 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _lqc2(auStack_40);
    auVar6 = _lqc2(*(undefined1 (*) [16])(*(int *)((int)lVar4 + 0x7c) + 0xa0));
    auVar6 = _vsub(auVar8,auVar6);
    auVar6 = _vmul(auVar6,auVar6);
    _vaddabc(auVar6,auVar6);
    auVar6 = _vmaddbc(auVar7,auVar6);
    auVar6 = _qmfc2(auVar6._0_4_);
    if (auVar6._0_4_ < 49.0) {
      *(undefined1 *)(iVar5 + 0x80) = 0;
    }
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x70));
  }
  auVar7 = _lqc2(auStack_40);
  auVar6 = _vadd(auVar7,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  return auVar6._0_8_;
}


// ==== FUN_001a39a0 @ 001a39a0 ====

void FUN_001a39a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_001a2590();
  uVar1 = FUN_001a2620(param_1);
  uVar2 = FUN_00178f18(uVar1);
  *(undefined1 *)((int)param_1 + 0x82) = uVar2;
  return;
}


// ==== FUN_001a39d8 @ 001a39d8 ====

void FUN_001a39d8(int param_1)

{
  FUN_001a2610();
  if (*(char *)(param_1 + 0x82) != '\0') {
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  return;
}


// ==== FUN_001a3a08 @ 001a3a08 ====

undefined4 FUN_001a3a08(int param_1)

{
  FUN_001a24b8();
  FUN_00173690(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x88) = 7;
  FUN_00173658(param_1 + 0x84);
  return 1;
}


// ==== FUN_001a3a50 @ 001a3a50 ====
// GLOBAL DAT_004432a0 undefined
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_0040f4d8 int
// GLOBAL DAT_0040f0e0 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a3a50(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  
  FUN_001a2690();
  iVar4 = (int)param_1;
  if (param_2 == 1) {
    FUN_001a2750(param_1);
    FUN_00173690(iVar4 + 0x78);
    lVar2 = FUN_00158088(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x38) + 0x7c) + 0x2a4));
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) {
        return;
      }
      lVar2 = FUN_001a3f20(param_1);
      if (lVar2 != 0) {
        FUN_001a2750();
        return;
      }
      FUN_00173690(iVar4 + 0x78);
      FUN_001a26c0(param_1);
      return;
    }
    if (param_2 != 0) {
      return;
    }
    if ((*(char *)(*(int *)(iVar4 + 0x38) + 0x292) == '\0') &&
       (lVar2 = FUN_001a3ca8(param_1,0), lVar2 != 0)) {
      FUN_001a2750(param_1);
      FUN_001a27a8(param_1);
    }
    lVar2 = FUN_001735e0(iVar4 + 0x80);
    if (lVar2 == 0) {
      return;
    }
    lVar2 = FUN_00173610(iVar4 + 0x80);
    if (lVar2 == 0) {
      return;
    }
    lVar2 = FUN_001a27a8(param_1);
    if (lVar2 == 0) {
      return;
    }
    lVar2 = FUN_001a2800(param_1);
    if (lVar2 == 0) {
      return;
    }
    if (*(float *)(iVar4 + 0x74) == 0.0) {
      auVar3 = _pextlw(0,0);
      auVar3 = _pextlw(0,auVar3._0_8_);
      auVar3 = _por(in_zero_qw,auVar3);
      FUN_001e42d0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),auVar3._0_8_);
      FUN_001e1be0(0,*(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x38) + 0x7c) + 0x2a4) + 0xf4) +
                      0x10));
      iVar1 = *(int *)(*(int *)(iVar4 + 0x38) + 0x7c);
      FUN_001b69e0(DAT_0040f4d8 + 0x66290,
                   *(undefined8 *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x2a4) + 0xe8) + 0x10) + 8),
                   iVar1,1,0);
    }
    fVar5 = *(float *)(iVar4 + 0x74) + *(float *)(DAT_0040f0e0 + 0x2013c);
    *(float *)(iVar4 + 0x74) = fVar5;
    if (fVar5 < 0.5) {
      return;
    }
    *(undefined4 *)(iVar4 + 0x74) = 0;
  }
  FUN_001a26c0(param_1);
  return;
}


// ==== FUN_001a3ca8 @ 001a3ca8 ====
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_003f6788 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001a3ca8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  iVar5 = (int)param_1;
  lVar2 = FUN_00189208(*(int *)(iVar5 + 0x38) + 0x150);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_001a2620(param_1);
    lVar2 = FUN_00178f18(uVar3);
    if (lVar2 != 0) {
      fVar10 = 0.0;
      fVar6 = (float)FUN_00173678(iVar5 + 0x80);
      fVar11 = fVar6 * 0.08 * fVar10;
      fVar6 = (float)FUN_00173678(iVar5 + 0x80);
      fVar10 = fVar6 * 0.08 * fVar10;
      iVar1 = FUN_001a2620(param_1);
      iVar1 = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0xc4) == 2) {
        auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
        uVar16 = 0x3d75c28f;
        auStack_80 = _sqc2(auVar15);
        iVar7 = FUN_0016de70(0xbd75c28f,0x3d75c28f,DAT_0040f4d4);
        auVar15 = _lqc2(auStack_80);
        auStack_90 = _sqc2(auVar15);
        iVar8 = FUN_0016de70(0xbd75c28f,uVar16,DAT_0040f4d4);
        auVar15 = _qmtc2(0);
        fVar6 = *(float *)(iVar1 + 0x2e8);
        _lqc2(*(undefined1 (*) [16])(iVar5 + 0x10));
        auVar13 = _vaddbc(in_vf0,auVar15);
        auVar12 = _vaddbc(in_vf0,in_vf0);
        auVar15 = _vmul(auVar13,auVar13);
        fVar9 = *(float *)(&DAT_003f6788 + (uint)*(byte *)(iVar5 + 0x88) * 4);
        _vaddabc(auVar15,auVar15);
        auVar15 = _vmaddbc(auVar12,auVar15);
        auVar4 = _qmfc2(auVar15._0_4_);
        auVar14 = _vmove(auVar12);
        auVar12 = _pextlw((long)iVar8,(long)iVar7);
        auVar15 = _sqc2(auVar13);
        *(undefined1 (*) [16])(iVar5 + 0x10) = auVar15;
        auVar15 = _pextlw((long)(int)(fVar6 * 0.8 + fVar9),auVar12._0_8_);
        *(int *)(iVar5 + 0x20) = auVar15._0_4_;
        *(int *)(iVar5 + 0x24) = auVar15._4_4_;
        *(int *)(iVar5 + 0x28) = auVar15._8_4_;
        *(int *)(iVar5 + 0x2c) = auVar15._12_4_;
        auVar15 = _lqc2(auStack_80);
        if (auVar4._0_4_ < 2.3283064e-10) {
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x20));
        }
        else {
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x10));
          auVar15 = _vmul(auVar12,auVar12);
          _vaddabc(auVar15,auVar15);
          auVar15 = _vmaddbc(auVar14,auVar15);
          _vnop();
          _vnop();
          _vnop();
          _vrsqrt(in_vf0,auVar15);
          uVar16 = _vwaitq();
          auVar12 = _vmulq(auVar12,uVar16);
          auVar4 = _lqc2(_DAT_004432c0);
          auVar15 = _sqc2(auVar12);
          *(undefined1 (*) [16])(iVar5 + 0x10) = auVar15;
          _vopmula(auVar4,auVar12);
          auVar13 = _vopmsub(auVar12,auVar4);
          auVar15 = _qmtc2(fVar11);
          auVar15 = _vmulbc(auVar13,auVar15);
          auVar12 = _qmtc2(fVar10);
          auVar14 = _lqc2(auStack_90);
          auVar4 = _qmtc2(0x3e47ae14);
          auVar14 = _vadd(auVar14,auVar15);
          auVar15 = _sqc2(auVar13);
          *(undefined1 (*) [16])(iVar5 + 0x10) = auVar15;
          auVar15 = _vaddbc(auVar14,auVar12);
          auVar15 = _vsubbc(auVar15,auVar4);
          auVar15 = _vaddbc(in_vf0,auVar15);
          auVar12 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x20));
        }
        auVar15 = _vadd(auVar15,auVar12);
        auVar15 = _sqc2(auVar15);
        *(undefined1 (*) [16])(iVar5 + 0x40) = auVar15;
      }
      else {
        FUN_00135940(auStack_d0,iVar1,0);
        auVar15 = _lqc2(auStack_a0);
        auVar15 = _sqc2(auVar15);
        *(undefined1 (*) [16])(iVar5 + 0x40) = auVar15;
      }
    }
    FUN_0017e428(*(int *)(iVar5 + 0x38) + 0x650,*(undefined8 *)(iVar5 + 0x40));
    uVar3 = 1;
  }
  return uVar3;
}


// ==== FUN_001a3f20 @ 001a3f20 ====

undefined4 FUN_001a3f20(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_001735e0(param_1 + 0x78);
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_00173610(param_1 + 0x78);
    uVar1 = 0;
    if (lVar2 == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_001a3f68 @ 001a3f68 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_001a3f68(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)param_1;
  if (param_2 == 1) {
    FUN_001a2c70(param_1);
    *(undefined4 *)(puVar4 + 10) = 1;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      uVar5 = FUN_0016de70(*(float *)(*(int *)(puVar4 + 7) + 0x640) - 0.5,
                           *(float *)(*(int *)(puVar4 + 7) + 0x640) + 0.5,DAT_0040f4d4);
      *(undefined4 *)(puVar4 + 0xe) = uVar5;
      FUN_00173640(uVar5,puVar4 + 0x10);
      *(int *)(puVar4 + 8) = (int)*puVar4;
      *(int *)((int)puVar4 + 0x44) = (int)((ulong)*puVar4 >> 0x20);
      *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)((int)puVar4 + 0x4c) = *(undefined4 *)((int)puVar4 + 0xc);
      iVar2 = FUN_001a2620(param_1);
      if (*(int *)(*(int *)(iVar2 + 8) + 0xc4) == 2) {
        auVar6 = _qmtc2(*(undefined4 *)(*(int *)(iVar2 + 8) + 0x2e8));
        auVar7 = _lqc2(*(undefined1 (*) [16])(puVar4 + 8));
        auVar6 = _vaddbc(auVar7,auVar6);
        auVar7 = _qmtc2(0x3e47ae14);
        auVar6 = _vsubbc(auVar6,auVar7);
        auVar6 = _vaddbc(in_vf0,auVar6);
        auVar6 = _sqc2(auVar6);
        *(undefined1 (*) [16])(puVar4 + 8) = auVar6;
        cVar1 = *(char *)(puVar4 + 0x11);
      }
      else {
        cVar1 = *(char *)(puVar4 + 0x11);
      }
      *(byte *)(puVar4 + 0x11) = cVar1 + 1U;
      if (6 < (byte)(cVar1 + 1U)) {
        *(undefined1 *)(puVar4 + 0x11) = 1;
      }
      lVar3 = FUN_00173610((int)puVar4 + 0x84);
      if (lVar3 != 0) {
        *(undefined1 *)(puVar4 + 0x11) = 0;
      }
    }
  }
  else if (param_2 == 2) {
    uVar5 = FUN_0016de70(*(undefined4 *)(*(int *)((int)puVar4 + 0x3c) + 8),
                         *(undefined4 *)(*(int *)((int)puVar4 + 0x3c) + 0xc),DAT_0040f4d4);
    FUN_00173640(uVar5,(int)puVar4 + 0x7c);
    FUN_00173640(0x41200000,(int)puVar4 + 0x84);
  }
  return;
}


// ==== FUN_001a40e0 @ 001a40e0 ====

undefined4 FUN_001a40e0(int param_1)

{
  FUN_001a24b8();
  FUN_00173690(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = 0xbf800000;
  FUN_00173690(param_1 + 0x78);
  return 1;
}


// ==== FUN_001a4130 @ 001a4130 ====
// GLOBAL DAT_004432a0 undefined4

void FUN_001a4130(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 in_zero_qw [16];
  char cVar4;
  undefined8 uVar5;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar6 [16];
  int iVar7;
  float fVar8;
  
  FUN_001a2690();
  iVar7 = (int)param_1;
  if (param_2 == 1) {
    cVar4 = FUN_00173610(iVar7 + 0x70);
    if (cVar4 == '\0') {
      fVar8 = (float)FUN_00173678(iVar7 + 0x70);
      fVar8 = fVar8 / *(float *)(iVar7 + 0x74);
      fVar8 = (float)((int)fVar8 * (uint)(0.0 < fVar8));
      *(uint *)(iVar7 + 0x7c) = (int)fVar8 * (uint)(fVar8 < 1.0) | (uint)(fVar8 >= 1.0) * 0x3f800000
      ;
      uVar5 = FUN_001a4280(param_1,0);
      uVar3 = DAT_004432a0;
      auVar6._8_4_ = in_v0_udw;
      auVar6._0_8_ = uVar5;
      auVar6._12_4_ = in_register_0000002c;
      auVar6 = _por(in_zero_qw,auVar6);
      *(undefined8 *)(iVar7 + 0x40) = uVar5;
      *(undefined4 *)(iVar7 + 0x48) = in_v0_udw;
      *(undefined4 *)(iVar7 + 0x4c) = in_register_0000002c;
      FUN_001a2750(param_1,auVar6._0_8_,uVar3);
      return;
    }
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) {
        return;
      }
      lVar1 = FUN_00173610(iVar7 + 0x78);
      if (lVar1 == 0) {
        return;
      }
      FUN_001a26c0(param_1);
      return;
    }
    if (param_2 != 0) {
      return;
    }
    uVar5 = FUN_001a4280(param_1,0);
    uVar3 = DAT_004432a0;
    auVar2._8_4_ = in_v0_udw;
    auVar2._0_8_ = uVar5;
    auVar2._12_4_ = in_register_0000002c;
    auVar6 = _por(in_zero_qw,auVar2);
    *(undefined8 *)(iVar7 + 0x40) = uVar5;
    *(undefined4 *)(iVar7 + 0x48) = in_v0_udw;
    *(undefined4 *)(iVar7 + 0x4c) = in_register_0000002c;
    FUN_001a2750(param_1,auVar6._0_8_,uVar3);
    lVar1 = FUN_001a27a8(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar1 = FUN_001a2800(param_1);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_001a26c0(param_1);
  return;
}


// ==== FUN_001a4280 @ 001a4280 ====
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001a4280(undefined1 (*param_1) [16])

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  
  fVar3 = 1.0;
  fVar5 = 1.0 - *(float *)(param_1[7] + 0xc);
  if (fVar5 <= 0.75) {
    auVar7 = _lqc2(*param_1);
    iVar1 = *(int *)(param_1[3] + 8);
    fVar3 = 1.0 - fVar5 / 0.75;
    auVar6 = _qmtc2(fVar3 + fVar3);
    auVar6 = _vsubbc(auVar7,auVar6);
    auVar8 = _qmtc2((fVar5 / 0.75) * 0.5 + 0.5);
    auVar7 = _vaddbc(in_vf0,auVar6);
    auVar6 = _sqc2(auVar7);
    *param_1 = auVar6;
    iVar1 = *(int *)(iVar1 + 0x7c);
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar6 = _vsub(auVar7,auVar6);
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar6 = _vmulbc(auVar6,auVar8);
  }
  else {
    if (param_1[3][4] != '\0') {
      fVar4 = (float)FUN_0016de70(0xbf800000,0x3f800000,DAT_0040f4d4);
      auVar6 = _qmtc2(0);
      _lqc2(param_1[1]);
      auVar7 = _vaddbc(in_vf0,in_vf0);
      fVar2 = *(float *)param_1[3] / 10000.0;
      auVar10 = _vaddbc(in_vf0,auVar6);
      auVar6 = _vmul(auVar10,auVar10);
      fVar2 = (float)((int)fVar2 * (uint)(0.0 < fVar2));
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar7,auVar6);
      auVar7 = _vmove(auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar6);
      uVar11 = _vwaitq();
      auVar7 = _vmulq(auVar7,uVar11);
      auVar6 = _lqc2(_DAT_004432c0);
      _vopmula(auVar6,auVar7);
      auVar9 = _vopmsub(auVar7,auVar6);
      auVar6 = _qmtc2(fVar4 * fVar5 *
                      (float)((int)fVar2 * (uint)(fVar2 < fVar3) |
                             (int)fVar3 * (uint)(fVar2 >= fVar3)));
      auVar7 = _lqc2(*param_1);
      auVar8 = _vmulbc(auVar9,auVar6);
      auVar6 = _sqc2(auVar10);
      param_1[1] = auVar6;
      auVar7 = _vadd(auVar7,auVar8);
      auVar6 = _sqc2(auVar9);
      param_1[1] = auVar6;
      auVar6 = _sqc2(auVar7);
      *param_1 = auVar6;
    }
    auVar8 = _lqc2(param_1[2]);
    auVar7 = _lqc2(*param_1);
    auVar6 = _qmtc2((fVar5 - 0.75) * 4.0);
    auVar6 = _vmulbc(auVar8,auVar6);
  }
  auVar6 = _vadd(auVar7,auVar6);
  auVar6 = _qmfc2(auVar6._0_4_);
  return auVar6._0_8_;
}


// ==== FUN_001a4428 @ 001a4428 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_001a4428(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)param_1;
  if (param_2 == 1) {
    FUN_001a2c70(param_1);
    *(undefined4 *)(iVar1 + 0x50) = 1;
    uVar2 = FUN_001a2830(param_1);
    FUN_00173640(uVar2,iVar1 + 0x70);
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x7c) = 0;
    }
  }
  else if (param_2 == 2) {
    uVar2 = FUN_0016de70(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + 8),
                         *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0xc),DAT_0040f4d4);
    FUN_00173640(uVar2,iVar1 + 0x78);
  }
  return;
}


// ==== FUN_001a44f8 @ 001a44f8 ====

undefined4 FUN_001a44f8(int param_1)

{
  FUN_001a24b8();
  FUN_00173690(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = 0xbf800000;
  FUN_00173690(param_1 + 0x78);
  return 1;
}


// ==== FUN_001a4548 @ 001a4548 ====
// GLOBAL DAT_004432a0 undefined4

void FUN_001a4548(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 in_zero_qw [16];
  char cVar4;
  undefined8 uVar5;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined1 auVar6 [16];
  int iVar7;
  float fVar8;
  
  FUN_001a2690();
  iVar7 = (int)param_1;
  if (param_2 == 1) {
    cVar4 = FUN_00173610(iVar7 + 0x70);
    if (cVar4 == '\0') {
      fVar8 = (float)FUN_00173678(iVar7 + 0x70);
      fVar8 = fVar8 / *(float *)(iVar7 + 0x74);
      fVar8 = (float)((int)fVar8 * (uint)(0.0 < fVar8));
      *(uint *)(iVar7 + 0x7c) = (int)fVar8 * (uint)(fVar8 < 1.0) | (uint)(fVar8 >= 1.0) * 0x3f800000
      ;
      uVar5 = FUN_001a4698(param_1,0);
      uVar3 = DAT_004432a0;
      auVar6._8_4_ = in_v0_udw;
      auVar6._0_8_ = uVar5;
      auVar6._12_4_ = in_register_0000002c;
      auVar6 = _por(in_zero_qw,auVar6);
      *(undefined8 *)(iVar7 + 0x40) = uVar5;
      *(undefined4 *)(iVar7 + 0x48) = in_v0_udw;
      *(undefined4 *)(iVar7 + 0x4c) = in_register_0000002c;
      FUN_001a2750(param_1,auVar6._0_8_,uVar3);
      return;
    }
  }
  else {
    if (1 < param_2) {
      if (param_2 != 2) {
        return;
      }
      lVar1 = FUN_00173610(iVar7 + 0x78);
      if (lVar1 == 0) {
        return;
      }
      FUN_001a26c0(param_1);
      return;
    }
    if (param_2 != 0) {
      return;
    }
    uVar5 = FUN_001a4698(param_1,0);
    uVar3 = DAT_004432a0;
    auVar2._8_4_ = in_v0_udw;
    auVar2._0_8_ = uVar5;
    auVar2._12_4_ = in_register_0000002c;
    auVar6 = _por(in_zero_qw,auVar2);
    *(undefined8 *)(iVar7 + 0x40) = uVar5;
    *(undefined4 *)(iVar7 + 0x48) = in_v0_udw;
    *(undefined4 *)(iVar7 + 0x4c) = in_register_0000002c;
    FUN_001a2750(param_1,auVar6._0_8_,uVar3);
    lVar1 = FUN_001a27a8(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar1 = FUN_001a2800(param_1);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_001a26c0(param_1);
  return;
}


// ==== FUN_001a4698 @ 001a4698 ====
// GLOBAL DAT_0040f4d4 undefined4
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001a4698(undefined8 param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  
  pauVar6 = (undefined1 (*) [16])param_1;
  fVar7 = (float)FUN_0029dc18(*(float *)(pauVar6[7] + 0xc) * 540.0 * 0.017453292);
  uVar3 = FUN_001a2620(param_1);
  lVar4 = FUN_00178f18(uVar3);
  if (lVar4 != 0) {
    iVar2 = FUN_001a2620(param_1);
    auVar5 = _pextlw(0,0);
    auVar5 = _pextlw((long)*(int *)(*(int *)(iVar2 + 8) + 0x2e8),auVar5._0_8_);
    *(int *)pauVar6[2] = auVar5._0_4_;
    *(int *)(pauVar6[2] + 4) = auVar5._4_4_;
    *(int *)(pauVar6[2] + 8) = auVar5._8_4_;
    *(int *)(pauVar6[2] + 0xc) = auVar5._12_4_;
  }
  fVar1 = ABS(fVar7);
  fVar8 = (float)FUN_0016de70(0x3f800000,0x40400000,DAT_0040f4d4);
  auVar5 = _qmtc2(0);
  _lqc2(pauVar6[1]);
  auVar9 = _vaddbc(in_vf0,auVar5);
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar9,auVar9);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar10,auVar5);
  auVar12 = _vmove(auVar10);
  auVar10 = _qmfc2(auVar5._0_4_);
  auVar5 = _sqc2(auVar9);
  pauVar6[1] = auVar5;
  if (2.3283064e-10 <= auVar10._0_4_) {
    auVar10 = _lqc2(pauVar6[1]);
    auVar5 = _vmul(auVar10,auVar10);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar12,auVar5);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar5);
    uVar13 = _vwaitq();
    auVar11 = _vmulq(auVar10,uVar13);
    auVar10 = _lqc2(_DAT_004432c0);
    auVar5 = _qmtc2(fVar7 * 6.0);
    _vopmula(auVar10,auVar11);
    auVar12 = _vopmsub(auVar11,auVar10);
    auVar9 = _lqc2(*pauVar6);
    auVar10 = _vmulbc(auVar12,auVar5);
    auVar5 = _sqc2(auVar11);
    pauVar6[1] = auVar5;
    auVar10 = _vadd(auVar9,auVar10);
    auVar5 = _sqc2(auVar12);
    pauVar6[1] = auVar5;
    auVar5 = _sqc2(auVar10);
    *pauVar6 = auVar5;
  }
  auVar9 = _qmtc2((1.0 - fVar1) * fVar8);
  auVar5 = _lqc2(pauVar6[2]);
  auVar10 = _lqc2(*pauVar6);
  auVar5 = _vmulbc(auVar5,auVar9);
  auVar5 = _vadd(auVar10,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  return auVar5._0_8_;
}


// ==== FUN_001a4860 @ 001a4860 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_001a4860(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)param_1;
  if (param_2 == 1) {
    FUN_001a2c70(param_1);
    *(undefined4 *)(iVar1 + 0x50) = 1;
    uVar2 = FUN_001a2830(param_1);
    FUN_00173640(uVar2,iVar1 + 0x70);
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x7c) = 0;
    }
  }
  else if (param_2 == 2) {
    uVar2 = FUN_0016de70(*(undefined4 *)(*(int *)(iVar1 + 0x3c) + 8),
                         *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0xc),DAT_0040f4d4);
    FUN_00173640(uVar2,iVar1 + 0x78);
  }
  return;
}


// ==== FUN_001a4930 @ 001a4930 ====
// GLOBAL DAT_00414d80 undefined
// GLOBAL DAT_00414d90 undefined
// GLOBAL _mips_gp0_value undefined1
// GLOBAL DAT_00414da0 undefined
// GLOBAL DAT_00414db0 undefined4
// GLOBAL DAT_00414db4 undefined4
// GLOBAL DAT_00414db8 undefined4
// GLOBAL DAT_00414dbc undefined4
// GLOBAL DAT_00414dc0 undefined4
// GLOBAL DAT_00414dc4 undefined4
// GLOBAL DAT_00414dc8 undefined4
// GLOBAL DAT_00414dcc undefined4
// GLOBAL DAT_00414dd0 undefined4
// GLOBAL DAT_00414dd4 undefined4
// GLOBAL DAT_00414dd8 undefined4
// GLOBAL DAT_00414ddc undefined4
// GLOBAL DAT_00414de0 undefined4
// GLOBAL DAT_00414de4 undefined4
// GLOBAL DAT_00414de8 undefined4
// GLOBAL DAT_00414dec undefined4
// GLOBAL DAT_00414df0 undefined4
// GLOBAL DAT_00414df4 undefined4
// GLOBAL DAT_00414df8 undefined4
// GLOBAL DAT_00414dfc undefined4
// GLOBAL DAT_00414e00 undefined4
// GLOBAL DAT_00414e04 undefined4
// GLOBAL DAT_00414e08 undefined4
// GLOBAL DAT_00414e0c undefined4
// GLOBAL DAT_00414e10 undefined4
// GLOBAL DAT_00414e14 undefined4
// GLOBAL DAT_00414e18 undefined4
// GLOBAL DAT_00414e1c undefined4
// GLOBAL DAT_00414e20 undefined4
// GLOBAL DAT_00414e24 undefined4
// GLOBAL DAT_00414e28 undefined_*
// GLOBAL DAT_004153b0 undefined4
// GLOBAL DAT_004153b4 undefined4
// GLOBAL DAT_004153b8 undefined4
// GLOBAL DAT_004153bc undefined4
// GLOBAL DAT_00415710 undefined4
// GLOBAL DAT_00415720 undefined4
// GLOBAL DAT_00415724 undefined4
// GLOBAL DAT_00415728 undefined4
// GLOBAL DAT_0041572c undefined4
// GLOBAL DAT_00415740 undefined4
// GLOBAL DAT_00415744 undefined4
// GLOBAL DAT_00415748 undefined4
// GLOBAL DAT_0041574c undefined4
// GLOBAL DAT_00415760 undefined4
// GLOBAL DAT_00415764 undefined4
// GLOBAL DAT_00415768 undefined4
// GLOBAL DAT_0041576c undefined4
// GLOBAL DAT_00415780 undefined4
// GLOBAL DAT_00415784 undefined4
// GLOBAL DAT_00415788 undefined4
// GLOBAL DAT_0041578c undefined4
// GLOBAL DAT_00415770 undefined4
// GLOBAL DAT_00415790 undefined4
// GLOBAL DAT_004157a0 undefined4
// GLOBAL DAT_004157a4 undefined4
// GLOBAL DAT_004157a8 undefined4
// GLOBAL DAT_004157ac undefined4
// GLOBAL DAT_004157c0 undefined4
// GLOBAL DAT_004157c4 undefined4
// GLOBAL DAT_004157c8 undefined4
// GLOBAL DAT_004157cc undefined4
// GLOBAL DAT_004157e0 undefined4
// GLOBAL DAT_004157e4 undefined4
// GLOBAL DAT_004157e8 undefined4
// GLOBAL DAT_004157ec undefined4
// GLOBAL DAT_00415800 undefined4
// GLOBAL DAT_00415804 undefined4
// GLOBAL DAT_00415808 undefined4
// GLOBAL DAT_0041580c undefined4
// GLOBAL DAT_00415880 undefined4
// GLOBAL DAT_00415884 undefined4
// GLOBAL DAT_00415888 undefined4
// GLOBAL DAT_0041588c undefined4
// GLOBAL DAT_00415890 undefined4
// GLOBAL DAT_00415894 undefined4
// GLOBAL DAT_00415898 undefined4
// GLOBAL DAT_0041589c undefined4
// GLOBAL DAT_004158a0 undefined4
// GLOBAL DAT_004158a4 undefined4
// GLOBAL DAT_004158a8 undefined4
// GLOBAL DAT_004158ac undefined4
// GLOBAL DAT_004158b0 undefined4
// GLOBAL DAT_004158b4 undefined4
// GLOBAL DAT_004158b8 undefined4
// GLOBAL DAT_004158bc undefined4
// GLOBAL DAT_00415870 undefined4
// GLOBAL DAT_00415874 undefined4
// GLOBAL DAT_00415878 undefined4
// GLOBAL DAT_0041587c undefined4
// GLOBAL DAT_003e0058 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "CBkRwAIActionCharacter"
     "CBkRwAIBrainCharacter"
     "CBkRwAIEntityCharacter"
     "CBkRwAIBlockPathObject"
     "CBkRwAIEntity"
     "CBkRwAICustomHeuristic"
     "CBkRwAICustomConstraint"
     "CBkRwAICustomPathfinder" */

void FUN_001a4930(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uStack_b4;
  
  if (param_2 == 0xffff) {
    if (param_1 == 0) {
      FUN_00383c40(0x4155f0,2);
      FUN_00383c10(0x4154d8,2);
      FUN_00383be0(0x4153c0,2);
      FUN_00383bb0(0x415298,2);
      FUN_00383bb0(0x415180,2);
      FUN_00383bb0(0x415068,2);
      FUN_00383b80(0x414f50,2);
      FUN_00383b50(0x414e38,2);
      FUN_002e6d10(0x414e28,0);
    }
    else {
      auVar6 = _pextlw(0,0);
      auVar2._8_4_ = 0x4b400000;
      auVar2._0_8_ = 0xbe22f9833fc90fdb;
      auVar2._12_4_ = uStack_b4;
      auVar10 = _lqc2(auVar2);
      auVar4._8_4_ = 0x3e800000;
      auVar4._0_8_ = 0x3f000000be22f983;
      auVar4._12_4_ = uStack_b4;
      auVar9 = _lqc2(auVar4);
      auVar1._8_4_ = 0x42a33457;
      auVar1._0_8_ = 0xc2255de0c2992661;
      auVar1._12_4_ = uStack_b4;
      auVar8 = _lqc2(auVar1);
      uVar5 = auVar6._0_8_;
      auVar7 = _pextlw(0,uVar5);
      auVar4 = _pextlw(0x3f4ccccd,uVar5);
      auVar3 = _pextlw(0x3f333333,uVar5);
      auVar2 = _pextlw(0x3fa66666,uVar5);
      DAT_00414db0 = 0x421ed7b7;
      DAT_00414db4 = 0x40c90fda;
      DAT_00414db8 = 0;
      DAT_00414dbc = uStack_b4;
      auVar1 = _pextlw(0x3fe66666,uVar5);
      DAT_00414dc0 = auVar4._0_4_;
      DAT_00414dc4 = auVar4._4_4_;
      DAT_00414dc8 = auVar4._8_4_;
      DAT_00414dcc = auVar4._12_4_;
      auVar4 = _pextlw(0x3f8ccccd,uVar5);
      DAT_00414dd0 = auVar3._0_4_;
      DAT_00414dd4 = auVar3._4_4_;
      DAT_00414dd8 = auVar3._8_4_;
      DAT_00414ddc = auVar3._12_4_;
      DAT_00414de0 = auVar2._0_4_;
      DAT_00414de4 = auVar2._4_4_;
      DAT_00414de8 = auVar2._8_4_;
      DAT_00414dec = auVar2._12_4_;
      auVar2 = _pextlw(0xffffffffbf19999a,uVar5);
      DAT_00414df0 = auVar1._0_4_;
      DAT_00414df4 = auVar1._4_4_;
      DAT_00414df8 = auVar1._8_4_;
      DAT_00414dfc = auVar1._12_4_;
      DAT_00414e00 = auVar4._0_4_;
      DAT_00414e04 = auVar4._4_4_;
      DAT_00414e08 = auVar4._8_4_;
      DAT_00414e0c = auVar4._12_4_;
      _DAT_00414d80 = _sqc2(auVar10);
      _DAT_00414d90 = _sqc2(auVar9);
      _DAT_00414da0 = _sqc2(auVar8);
      DAT_00414e10 = auVar2._0_4_;
      DAT_00414e14 = auVar2._4_4_;
      DAT_00414e18 = auVar2._8_4_;
      DAT_00414e1c = auVar2._12_4_;
      DAT_00414e20 = 0x3f800000;
      DAT_00414e24 = 0x3faaaaab;
      FUN_002e6d90(0x414e28,0,0);
      DAT_00414e28 = &DAT_003e0058;
      FUN_002dfdc8(0x414e38,0x3f6170,0x170030);
      FUN_002e1da8(0x414f50,0x3f6188,0x1700f8,0,0,0);
      FUN_002e4d88(0x415068,0x3f61a0,0x1701d8,0);
      FUN_002e4d88(0x415180,0x3f61b8,0x1706c0,0x4524a0);
      FUN_002e4d88(0x415298,0x3f61d0,0x171a68,0);
      auVar2 = _pextlw(0x3f800000,0x3f800000);
      auVar2 = _pextlw(0x40a00000,auVar2._0_8_);
      DAT_004153b0 = auVar2._0_4_;
      DAT_004153b4 = auVar2._4_4_;
      DAT_004153b8 = auVar2._8_4_;
      DAT_004153bc = auVar2._12_4_;
      FUN_002f22d8(0x4153c0,0x3f61e0,0x171cb8,0);
      FUN_002e51d8(0x4154d8,0x3f61f8,0x171d20,0);
      FUN_002e75d0(0x4155f0,0x3f6210,0x171d88,0x4548b8,1,1);
      memset(0x415710,0,0x20);
      DAT_00415710 = 0xffffffff;
      DAT_00415720 = auVar7._0_4_;
      DAT_00415724 = auVar7._4_4_;
      DAT_00415728 = auVar7._8_4_;
      DAT_0041572c = auVar7._12_4_;
      memset(0x415730,0,0x20);
      auVar2 = _pextlw(0x40e00000,0xffffffffc0a00000);
      auVar2 = _pextlw(0,auVar2._0_8_);
      DAT_00415740 = auVar2._0_4_;
      DAT_00415744 = auVar2._4_4_;
      DAT_00415748 = auVar2._8_4_;
      DAT_0041574c = auVar2._12_4_;
      memset(0x415750,0,0x20);
      auVar2 = _pextlw(0x40a00000,0x40a00000);
      auVar2 = _pextlw(0,auVar2._0_8_);
      DAT_00415760 = auVar2._0_4_;
      DAT_00415764 = auVar2._4_4_;
      DAT_00415768 = auVar2._8_4_;
      DAT_0041576c = auVar2._12_4_;
      memset(0x415770,0,0x20);
      auVar2 = _pextlw(0xffffffffc0a00000,0);
      auVar4 = _pextlw(0,auVar2._0_8_);
      DAT_00415780 = auVar4._0_4_;
      DAT_00415784 = auVar4._4_4_;
      DAT_00415788 = auVar4._8_4_;
      DAT_0041578c = auVar4._12_4_;
      DAT_00415770 = 1;
      memset(0x415790,0,0x20);
      DAT_00415790 = 0xffffffff;
      DAT_004157a0 = auVar7._0_4_;
      DAT_004157a4 = auVar7._4_4_;
      DAT_004157a8 = auVar7._8_4_;
      DAT_004157ac = auVar7._12_4_;
      memset(0x4157b0,0,0x20);
      auVar2 = _pextlw(0,0xffffffffc0a00000);
      auVar2 = _pextlw(0,auVar2._0_8_);
      DAT_004157c0 = auVar2._0_4_;
      DAT_004157c4 = auVar2._4_4_;
      DAT_004157c8 = auVar2._8_4_;
      DAT_004157cc = auVar2._12_4_;
      memset(0x4157d0,0,0x20);
      auVar2 = _pextlw(0,0x40a00000);
      auVar2 = _pextlw(0,auVar2._0_8_);
      DAT_004157e0 = auVar2._0_4_;
      DAT_004157e4 = auVar2._4_4_;
      DAT_004157e8 = auVar2._8_4_;
      DAT_004157ec = auVar2._12_4_;
      memset(0x4157f0,0,0x20);
      DAT_00415870 = auVar7._0_4_;
      DAT_00415874 = auVar7._4_4_;
      DAT_00415878 = auVar7._8_4_;
      DAT_0041587c = auVar7._12_4_;
      auVar2 = _pextlw(0xffffffffc1a00000,auVar6._0_8_);
      DAT_00415890 = auVar2._0_4_;
      DAT_00415894 = auVar2._4_4_;
      DAT_00415898 = auVar2._8_4_;
      DAT_0041589c = auVar2._12_4_;
      DAT_004158a0 = 0x43f59407;
      DAT_004158a4 = 0x44345569;
      DAT_004158a8 = 0x4409ee8c;
      DAT_004158ac = 0x43968fcd;
      DAT_00415800 = auVar4._0_4_;
      DAT_00415804 = auVar4._4_4_;
      DAT_00415808 = auVar4._8_4_;
      DAT_0041580c = auVar4._12_4_;
      DAT_004158b0 = 0x4b000000;
      DAT_004158b4 = 0x4b000000;
      DAT_004158b8 = 0x4b000000;
      DAT_004158bc = 0x4b000000;
      __mips_gp0_value = 1;
      DAT_00415880 = DAT_00415870;
      DAT_00415884 = DAT_00415874;
      DAT_00415888 = DAT_00415878;
      DAT_0041588c = DAT_0041587c;
    }
  }
  return;
}


// ==== FUN_001a4f70 @ 001a4f70 ====

void FUN_001a4f70(void)

{
  return;
}


// ==== FUN_001a4fa8 @ 001a4fa8 ====

void FUN_001a4fa8(void)

{
  FUN_001a4930(1,0xffff);
  return;
}


// ==== FUN_001a4fc8 @ 001a4fc8 ====

void FUN_001a4fc8(void)

{
  FUN_001a4930(0,0xffff);
  return;
}


// ==== FUN_001a4ff0 @ 001a4ff0 ====
// GLOBAL DAT_0040f50c undefined4

void FUN_001a4ff0(undefined4 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar8 = 0xb;
  param_1[0x14] = 0;
  *param_1 = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0xb7) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)((int)param_1 + 0x231) = 0;
  *(undefined1 *)((int)param_1 + 0x232) = 0;
  *(undefined1 *)((int)param_1 + 0x233) = 0;
  *(undefined1 *)((int)param_1 + 0xba) = 1;
  param_1[0x2c] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)((int)param_1 + 0xb5) = 1;
  param_1[0x2b] = 0xffffffff;
  iVar2 = FUN_00107cf8(0x9d0);
  iVar6 = iVar2 + 0x1d0;
  FUN_00343fc8(iVar2 + 0x30);
  do {
    iVar8 = iVar8 + -1;
    FUN_00343fc8(iVar6 + 0x10);
    FUN_00343fc8(iVar6 + 0x60);
    iVar6 = iVar6 + 0xa0;
  } while (iVar8 != -1);
  param_1[0x15] = iVar2;
  *(undefined4 *)(iVar2 + 4) = 0;
  uVar5 = FUN_00107ce8(0x40f0f0);
  iVar2 = 0;
  puVar7 = param_1 + 0xc;
  FUN_00107cc8(0x40f0f0,0x10);
  do {
    if (param_2 == 0) {
      if (4 >= iVar2) goto LAB_001a5118;
      *puVar7 = 0;
    }
    else if (4 < iVar2) {
LAB_001a5118:
      pauVar3 = (undefined1 (*) [16])FUN_00107cf8(0xa0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar10 = _vsub(in_vf0,in_vf0);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar1 = _sqc2(auVar9);
      pauVar3[4] = auVar1;
      auVar1 = _sqc2(auVar9);
      *pauVar3 = auVar1;
      auVar1 = _sqc2(auVar11);
      pauVar3[1] = auVar1;
      auVar1 = _sqc2(auVar12);
      pauVar3[2] = auVar1;
      auVar1 = _sqc2(auVar10);
      pauVar3[3] = auVar1;
      auVar1 = _sqc2(auVar10);
      pauVar3[7] = auVar1;
      auVar1 = _sqc2(auVar11);
      pauVar3[5] = auVar1;
      auVar1 = _sqc2(auVar12);
      pauVar3[6] = auVar1;
      *puVar7 = pauVar3;
    }
    else {
      *puVar7 = 0;
    }
    iVar2 = iVar2 + 1;
    puVar7 = puVar7 + 1;
    if (7 < iVar2) {
      FUN_00107cc8(0x40f0f0,uVar5);
      *(char *)((int)param_1 + 0xb6) = (char)param_2;
      uVar4 = FUN_001abfd8(DAT_0040f50c);
      param_1[0x2b] = uVar4;
      *(undefined1 *)((int)param_1 + 0xbb) = 1;
      *(undefined1 *)(param_1 + 0x8d) = 1;
      return;
    }
  } while( true );
}


// ==== FUN_001a51c8 @ 001a51c8 ====
// GLOBAL DAT_003bfb28 int
// GLOBAL DAT_0040f50c undefined4
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_003d20dc undefined4
// GLOBAL DAT_003d20d4 undefined4
// GLOBAL DAT_003d20d8 undefined4
// GLOBAL DAT_004432a8 undefined4
// GLOBAL DAT_004432ac undefined4
// GLOBAL DAT_004432a0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a51c8(undefined8 param_1,int param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined1 in_vf0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 auStack_70 [4];
  
  if (DAT_003bfb28 != 1) {
    FUN_003528e0();
    DAT_003bfb28 = 1;
  }
  piVar12 = (int *)param_1;
  if ((char)piVar12[0x2e] == '\0') {
    *piVar12 = param_2;
  }
  else {
    FUN_001a5ee8(param_1);
    *piVar12 = param_2;
  }
  *(int **)(param_2 + 0x330) = piVar12;
  iVar7 = (int)param_3;
  piVar12[0x14] = iVar7;
  piVar12[0x28] = 0;
  *(undefined1 *)((int)piVar12 + 0xb7) = 0;
  *(undefined1 *)(piVar12 + 0x8c) = 0;
  piVar12[0x33] = 0;
  if (param_3 != 0) {
    *(undefined4 *)(piVar12[0x15] + 4) = *(undefined4 *)(iVar7 + 8);
  }
  piVar11 = piVar12 + 0xc;
  *(undefined1 *)((int)piVar12 + 0xb9) = 0;
  iVar10 = 7;
  piVar9 = piVar11;
  do {
    pauVar1 = (undefined1 (*) [16])*piVar9;
    if (pauVar1 != (undefined1 (*) [16])0x0) {
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar14 = _vsub(in_vf0,in_vf0);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auVar15 = _vaddbc(in_vf0,in_vf0);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      auVar3 = _sqc2(auVar14);
      pauVar1[3] = auVar3;
      auVar3 = _sqc2(auVar13);
      *pauVar1 = auVar3;
      auVar3 = _sqc2(auVar15);
      pauVar1[1] = auVar3;
      auVar3 = _sqc2(auVar16);
      pauVar1[2] = auVar3;
      iVar2 = *piVar9;
      auVar3 = _sqc2(auVar13);
      *(undefined1 (*) [16])(iVar2 + 0x40) = auVar3;
      auVar3 = _sqc2(auVar14);
      *(undefined1 (*) [16])(iVar2 + 0x70) = auVar3;
      auVar3 = _sqc2(auVar15);
      *(undefined1 (*) [16])(iVar2 + 0x50) = auVar3;
      auVar3 = _sqc2(auVar16);
      *(undefined1 (*) [16])(iVar2 + 0x60) = auVar3;
    }
    iVar10 = iVar10 + -1;
    piVar9 = piVar9 + 1;
  } while (-1 < iVar10);
  if (*(int *)(piVar12[0x15] + 4) != 0) {
    piVar9 = piVar12 + 0x17;
    FUN_001ad050(DAT_0040f50c,piVar12[0x2b]);
    FUN_001ac020(DAT_0040f50c,piVar12[0x2b]);
    FUN_001ac940(DAT_0040f50c,0);
    FUN_00345510(piVar12[0x15],param_1,*(undefined4 *)(piVar12[0x15] + 4),1);
    *(undefined4 *)(piVar12[0x15] + 0x99c) = 0;
    *(undefined4 *)(piVar12[0x15] + 0x9a4) = 0;
    *(undefined4 *)(piVar12[0x15] + 0x9a0) = 0;
    FUN_001ad070(piVar12[0x15]);
    FUN_003438d8(piVar12[0x15]);
    *(undefined1 *)(piVar12 + 0x17) = 0;
    (**(code **)(*(int *)(iVar7 + 0x5c) + 0x14))
              (iVar7 + *(short *)(*(int *)(iVar7 + 0x5c) + 0x10),piVar9,*piVar12,0x27);
    iVar7 = FUN_001a9ea0(param_3,piVar9);
    *(undefined1 *)((int)piVar12 + 0x69) = 0;
    piVar12[0x25] = 0;
    *(undefined1 *)((int)piVar12 + 0x76) = 0;
    *(undefined1 *)((int)piVar12 + 0x83) = 0;
    piVar12[0x26] = 0;
    piVar12[0x27] = 0;
    piVar12[0x24] = iVar7;
    lVar8 = FUN_00345f28(piVar9,piVar12[0x15],auStack_70);
    if (lVar8 == 0) {
      iVar7 = piVar12[0x14];
    }
    else {
      FUN_00347c70(piVar12[0x15],auStack_70[0]);
      DAT_003d20dc = 0x2c;
      DAT_003d20d4 = 0x1c;
      DAT_003d20d8 = 0;
      FUN_00348288(*(undefined4 *)(DAT_0040f0e0 + 0x2013c),piVar12[0x15]);
      iVar7 = piVar12[0x14];
    }
    FUN_001aa768(iVar7,piVar12[0x15]);
    FUN_001a73f0(param_1);
  }
  if (*(char *)((int)piVar12 + 0xb6) == '\0') {
    iVar7 = *(int *)(piVar12[0x14] + 0x30);
    iVar10 = FUN_00135570(*piVar12);
    *(undefined1 *)((int)piVar12 + 0x231) = *(undefined1 *)(*(int *)(iVar10 + 0x14) * 4 + iVar7);
    iVar10 = FUN_00135570(*piVar12);
    *(undefined1 *)((int)piVar12 + 0x232) = *(undefined1 *)(*(int *)(iVar10 + 0xc) * 4 + iVar7);
    iVar10 = FUN_00135570(*piVar12);
    *(undefined1 *)((int)piVar12 + 0x233) = *(undefined1 *)(*(int *)(iVar10 + 0x10) * 4 + iVar7);
  }
  piVar12[0x2c] = -1;
  *(undefined1 *)((int)piVar12 + 0xbb) = 1;
  piVar12[0x16] = 0;
  *(undefined1 *)(piVar12 + 0x2e) = 1;
  iVar7 = 7;
  *(undefined1 *)((int)piVar12 + 0xba) = 1;
  *(undefined1 *)(piVar12 + 0x8d) = 1;
  *(undefined1 *)((int)piVar12 + 0x235) = 0;
  do {
    uVar6 = DAT_004432ac;
    uVar5 = DAT_004432a8;
    uVar4 = _DAT_004432a0;
    iVar10 = *piVar11;
    iVar7 = iVar7 + -1;
    if (iVar10 != 0) {
      *(int *)(iVar10 + 0x80) = (int)_DAT_004432a0;
      *(int *)(iVar10 + 0x84) = (int)((ulong)uVar4 >> 0x20);
      *(undefined4 *)(iVar10 + 0x88) = uVar5;
      *(undefined4 *)(iVar10 + 0x8c) = uVar6;
      uVar6 = DAT_004432ac;
      uVar5 = DAT_004432a8;
      uVar4 = _DAT_004432a0;
      iVar10 = *piVar11;
      *(int *)(iVar10 + 0x90) = (int)_DAT_004432a0;
      *(int *)(iVar10 + 0x94) = (int)((ulong)uVar4 >> 0x20);
      *(undefined4 *)(iVar10 + 0x98) = uVar5;
      *(undefined4 *)(iVar10 + 0x9c) = uVar6;
    }
    piVar11 = piVar11 + 1;
  } while (-1 < iVar7);
  return 1;
}


// ==== FUN_001a54e0 @ 001a54e0 ====
// GLOBAL DAT_003bcfb4 int
// GLOBAL DAT_003bfb28 int
// GLOBAL DAT_0040f50c undefined4
// GLOBAL DAT_003d20dc undefined4
// GLOBAL DAT_003d20d4 undefined4
// GLOBAL DAT_003d20d8 undefined4

void FUN_001a54e0(float param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  undefined8 in_v0_udw;
  undefined1 auVar5 [16];
  int *piVar6;
  undefined1 auStack_320 [704];
  
  DAT_003bcfb4 = DAT_003bcfb4 + 1;
  piVar6 = (int *)param_2;
  if (*(char *)((int)piVar6 + 0xb7) != '\0') {
    param_1 = param_1 + param_1;
    *(undefined1 *)((int)piVar6 + 0xb7) = 0;
    param_3 = 0;
  }
  if (*(char *)((int)piVar6 + 0xbb) != '\0') {
    param_3 = 0;
  }
  if ((char)piVar6[0x8d] != '\0') {
    FUN_001ab760(0);
    if (*(char *)((int)piVar6 + 0xba) == '\0') {
      param_1 = 0.0;
    }
    if (DAT_003bfb28 != 1) {
      FUN_003528e0();
      DAT_003bfb28 = 1;
    }
    FUN_001a7e58(param_2);
    iVar4 = 9;
    do {
      bVar1 = iVar4 != -1;
      iVar4 = iVar4 + -1;
    } while (bVar1);
    FUN_001a76e0(param_2,auStack_320);
    FUN_001a5738(param_2);
    FUN_001a59d8(param_2);
    if (*(char *)((int)piVar6 + 0xb9) == '\0') {
      iVar4 = piVar6[0x24];
    }
    else {
      FUN_001a7498(param_2);
      iVar4 = piVar6[0x24];
    }
    if (iVar4 == 0) {
      iVar4 = piVar6[0x25];
    }
    else {
      if (param_3 == 0) {
        FUN_001ab760(3);
        FUN_001ac940(DAT_0040f50c,0);
        FUN_001ac020(DAT_0040f50c,piVar6[0x2b]);
        FUN_00348288(param_1,piVar6[0x15]);
        *(undefined1 *)((int)piVar6 + 0xb7) = 0;
        FUN_001ab768(3);
        FUN_00384448(param_1,param_2);
        if ((*(int *)(piVar6[0x24] + 4) != 0) || (lVar2 = FUN_00347a50(0,piVar6[0x15]), lVar2 != 0))
        {
          *(undefined1 *)(piVar6 + 0x2d) = 1;
        }
      }
      else {
        *(undefined1 *)((int)piVar6 + 0xb7) = 1;
      }
      iVar4 = piVar6[0x25];
    }
    if ((((iVar4 == 0) || (piVar6[0x16] == 0)) || (*(int *)(iVar4 + 4) != 0)) ||
       (lVar2 = FUN_00347a50(0), lVar2 != 0)) {
      *(undefined1 *)((int)piVar6 + 0xb5) = 1;
    }
    FUN_001a77c8(param_1,param_2,auStack_320);
    FUN_001a5b10(param_2,7);
    if (*(int *)(*piVar6 + 0xc4) != 2) {
      uVar3 = FUN_001a6a28(param_2);
      auVar5._8_8_ = in_v0_udw;
      auVar5._0_8_ = uVar3;
      auVar5 = _por(in_zero_qw,auVar5);
      FUN_00126058(*piVar6,auVar5._0_8_);
    }
    FUN_003461d0(1);
    *(undefined1 *)((int)piVar6 + 0xbb) = 0;
    DAT_003d20dc = 0x2c;
    DAT_003d20d4 = 0x1c;
    DAT_003d20d8 = 0;
    FUN_001ab768(0);
  }
  return;
}


// ==== FUN_001a5738 @ 001a5738 ====
// GLOBAL DAT_0040f50c undefined4
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_003bcfb8 float
// GLOBAL DAT_003bcfbc int
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f4d8 int

/* Strings referenciadas:
     "FP_RPG" */

void FUN_001a5738(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  float fVar5;
  undefined4 auStack_50 [4];
  
  lVar3 = FUN_001a7660(param_1,0);
  if (lVar3 == 0) {
    return;
  }
  piVar4 = (int *)param_1;
  *(undefined1 *)((int)piVar4 + 0xbb) = 1;
  FUN_001ac940(DAT_0040f50c,0);
  FUN_001ac020(DAT_0040f50c,piVar4[0x2b]);
  if ((*(int *)(*piVar4 + 0xc4) != 2) &&
     (*(float *)(DAT_0040f4d0 + 0x20) - (float)piVar4[0x28] <= DAT_003bcfb8)) {
    cVar1 = *(char *)((int)piVar4 + 0xb6);
    goto LAB_001a587c;
  }
  strcpy(piVar4 + 0x17,(int)piVar4 + 0x76);
  iVar2 = piVar4[0x26];
  piVar4[0x26] = 0;
  piVar4[0x24] = iVar2;
  iVar2 = *(int *)(DAT_0040f4d0 + 0x20);
  *(undefined1 *)(piVar4 + 0x2d) = 0;
  piVar4[0x28] = iVar2;
  lVar3 = FUN_00345f28(piVar4 + 0x17,piVar4[0x15],auStack_50);
  if (lVar3 != 0) {
    lVar3 = FUN_001a7d48(param_1,auStack_50[0]);
    FUN_001ab760(2);
    if (0.0 < *(float *)(*piVar4 + 0x308)) {
      iVar2 = piVar4[0x15];
      if ((DAT_003bcfbc < (int)(uint)*(byte *)(*piVar4 + 200)) || (lVar3 == 0)) goto LAB_001a5850;
      FUN_00347b40(iVar2,auStack_50[0],1,0);
    }
    else {
      iVar2 = piVar4[0x15];
LAB_001a5850:
      FUN_00347c70(iVar2,auStack_50[0]);
    }
    FUN_001ab768(2);
  }
  cVar1 = *(char *)((int)piVar4 + 0xb6);
LAB_001a587c:
  if (cVar1 != '\0') {
    iVar2 = strlen(piVar4 + 0x17);
    iVar2 = (int)piVar4 + iVar2 + 0x59;
    lVar3 = strcmp(iVar2,0x3f67c0);
    if ((lVar3 == 0) || (lVar3 = strcmp(iVar2,0x3f67c8), lVar3 == 0)) {
      lVar3 = FUN_0035cfd8(piVar4 + 0x17,0x3f67d0,6);
      if (lVar3 != 0) {
        fVar5 = *(float *)(piVar4[0x15] + 0x1c) * *(float *)(DAT_0040f0e0 + 0x2013c) * 0.5 - 2.0;
        FUN_001c2798(0x3f000000,(int)fVar5 * (uint)(0.0 <= fVar5),0x3f000000,DAT_0040f4d8 + 0x83ca0)
        ;
      }
    }
    else {
      lVar3 = strcmp(iVar2,0x3f67d8);
      if (lVar3 == 0) {
        FUN_001c2798(0x3f000000,0x40c00000,0x3f800000,DAT_0040f4d8 + 0x83ca0);
      }
      else {
        lVar3 = strcmp(iVar2,0x3f67e0);
        if (lVar3 == 0) {
          FUN_001c27d0(DAT_0040f4d8 + 0x83ca0);
        }
      }
    }
  }
  return;
}


// ==== FUN_001a59d8 @ 001a59d8 ====
// GLOBAL DAT_0040f50c undefined4
// GLOBAL DAT_003bcfbc int

void FUN_001a59d8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 auStack_50 [4];
  
  lVar1 = FUN_001a7660(param_1,1);
  piVar3 = (int *)param_1;
  if (lVar1 == 0) {
    return;
  }
  strcpy((int)piVar3 + 0x69,(int)piVar3 + 0x83);
  piVar3[0x25] = piVar3[0x27];
  piVar3[0x27] = 0;
  if (*(char *)((int)piVar3 + 0x83) == '\0') {
    FUN_00349288(piVar3[0x15]);
    return;
  }
  if (piVar3[0x16] == 0) {
    FUN_001a6eb8(param_1);
    if (piVar3[0x16] == 0) {
      return;
    }
    *(undefined1 *)((int)piVar3 + 0xb5) = 0;
  }
  else {
    *(undefined1 *)((int)piVar3 + 0xb5) = 0;
  }
  FUN_001ac940(DAT_0040f50c,0);
  FUN_001ac020(DAT_0040f50c,piVar3[0x2c]);
  lVar1 = FUN_00345f28((int)piVar3 + 0x83,piVar3[0x15],auStack_50);
  if (lVar1 == 0) {
    return;
  }
  FUN_001ab760(2);
  if (0.0 < *(float *)(*piVar3 + 0x308)) {
    iVar2 = piVar3[0x15];
    if ((int)(uint)*(byte *)(*piVar3 + 200) <= DAT_003bcfbc) {
      FUN_003491e8(iVar2,auStack_50[0],0,0,1);
      goto LAB_001a5af0;
    }
  }
  else {
    iVar2 = piVar3[0x15];
  }
  FUN_00349128(iVar2,auStack_50[0],0,0);
LAB_001a5af0:
  FUN_001ab768(2);
  return;
}


// ==== FUN_001a5b10 @ 001a5b10 ====
// GLOBAL DAT_004158d0 int
// GLOBAL DAT_004158c0 undefined4
// GLOBAL DAT_004158c4 undefined4
// GLOBAL DAT_004158c8 undefined4
// GLOBAL DAT_004158cc undefined4
// GLOBAL DAT_0040f4d0 int

void FUN_001a5b10(int *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined4 uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [12];
  undefined1 (*pauVar11) [16];
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 in_vf0 [16];
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
  undefined4 uStack_154;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  
  FUN_001ab760(4);
  if (*(int *)(*param_1 + 0xc4) == 1) {
    iVar1 = *(int *)(*(int *)(*param_1 + 0xbc) + 0x40);
    iVar2 = *(int *)(param_1[0x14] + 0x30);
    if ((param_2 & 1) == 0) {
      iVar14 = *(int *)(param_1[0x15] + 0x50);
    }
    else {
      iVar7 = param_1[0x15];
      iVar14 = *(int *)(iVar7 + 0x54);
      if (iVar14 == *(int *)(iVar7 + 0x50)) {
        iVar14 = iVar14 + *(short *)(iVar7 + 0x5e) * 0x40;
      }
    }
    if (DAT_004158d0 == 0) {
      auVar9 = _pextlw(0,0);
      auVar9 = _pextlw(0x3c4ccccd,auVar9._0_8_);
      DAT_004158c0 = auVar9._0_4_;
      DAT_004158c4 = auVar9._4_4_;
      DAT_004158c8 = auVar9._8_4_;
      DAT_004158cc = auVar9._12_4_;
      DAT_004158d0 = 1;
      uStack_154 = DAT_004158cc;
    }
    auVar9._4_4_ = DAT_004158c4;
    auVar9._0_4_ = DAT_004158c0;
    auVar9._8_4_ = DAT_004158c8;
    auVar9._12_4_ = DAT_004158cc;
    auVar9 = _lqc2(auVar9);
    if (((((param_2 & 2) != 0) && (*(char *)(*param_1 + 0x3af) == '\0')) &&
        (iVar7 = *(int *)(*param_1 + 0xb4), iVar7 != 0)) && (*(char *)(iVar7 + 0x3c) != '\0')) {
      uVar6 = FUN_0025d8e0();
      auVar15 = _qmtc2(uVar6);
      auVar9 = _qmtc2(*(undefined4 *)(DAT_0040f4d0 + 0x1c));
      auVar9 = _vmulbc(auVar15,auVar9);
    }
    iVar7 = *param_1;
    if (((param_2 & 4) != 0) && (*(char *)(iVar7 + 0x3af) != '\0')) {
      auVar15 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x1b0));
      auVar16 = _qmtc2(0x40000000);
      auVar9 = _qmtc2(*(undefined4 *)(DAT_0040f4d0 + 0x1c));
      auVar9 = _vmulbc(auVar15,auVar9);
      auVar9 = _vmulbc(auVar9,auVar16);
    }
    auVar17 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x70));
    _sqc2(auVar17);
    _vmove(auVar17);
    auVar16 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x80));
    auVar22 = _vaddbc(in_vf0,auVar16);
    _vmove(auVar22);
    _sqc2(auVar16);
    _vmove(auVar16);
    auVar19 = _vaddbc(in_vf0,auVar17);
    auVar15 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x90));
    _vmove(auVar19);
    auVar23 = _vaddbc(in_vf0,auVar15);
    auVar20 = _vaddbc(in_vf0,auVar15);
    _vmove(auVar15);
    auVar24 = _vaddbc(in_vf0,auVar17);
    _sqc2(auVar15);
    _vmove(auVar24);
    auVar21 = _vaddbc(in_vf0,auVar16);
    auVar18 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0xa0));
    _vmulabc(auVar23,auVar9);
    _vmaddabc(auVar20,auVar9);
    auVar9 = _vmaddbc(auVar21,auVar9);
    auVar9 = _sqc2(auVar9);
    auVar16 = _vmulbc(auVar20,auVar18);
    auVar15 = _vmulbc(auVar23,auVar18);
    auVar17 = _vmulbc(auVar21,auVar18);
    auVar15 = _vadd(auVar15,auVar16);
    _sqc2(auVar18);
    auVar15 = _vadd(auVar15,auVar17);
    _sqc2(auVar22);
    auVar15 = _vsub(in_vf0,auVar15);
    _sqc2(auVar19);
    _sqc2(auVar24);
    _sqc2(auVar15);
    _sqc2(auVar23);
    _sqc2(auVar20);
    _sqc2(auVar21);
    uVar12 = 0;
    do {
      iVar7 = FUN_00135570(*param_1);
      uVar13 = uVar12 + 1;
      pauVar10 = (undefined1 (*) [12])
                 (iVar14 + *(int *)(*(int *)(iVar7 + uVar12 * 4 + 0xc) * 4 + iVar2) * 0x40);
      auVar3 = *pauVar10;
      auVar4 = *(undefined1 (*) [12])(pauVar10[1] + 4);
      auVar5 = *(undefined1 (*) [12])(pauVar10[2] + 8);
      auVar15._12_4_ = uStack_154;
      auVar15._0_12_ = pauVar10[4];
      auVar15 = _lqc2(auVar15);
      _sqc2(auVar15);
      _sqc2(auVar15);
      auVar16 = _lqc2(auVar9);
      auVar15 = _vadd(auVar15,auVar16);
      auVar15 = _sqc2(auVar15);
      pauVar11 = (undefined1 (*) [16])(*(int *)(iVar1 + 0x30) + (uVar12 & 0xffff) * 0x60);
      pauVar8 = (undefined1 (*) [16])FUN_00138378(uVar12);
      auVar20 = _lqc2(*pauVar8);
      auVar19 = _lqc2(pauVar8[1]);
      auVar16._12_4_ = uStack_154;
      auVar16._0_12_ = auVar3;
      auVar22 = _lqc2(auVar16);
      auVar17._12_4_ = uStack_154;
      auVar17._0_12_ = auVar4;
      auVar21 = _lqc2(auVar17);
      auVar18._12_4_ = uStack_154;
      auVar18._0_12_ = auVar5;
      auVar17 = _lqc2(auVar18);
      _vmulabc(auVar22,auVar20);
      _vmaddabc(auVar21,auVar20);
      auVar20 = _vmaddbc(auVar17,auVar20);
      _vmulabc(auVar22,auVar19);
      _vmaddabc(auVar21,auVar19);
      auVar23 = _vmaddbc(auVar17,auVar19);
      auVar19 = _lqc2(auVar15);
      _sqc2(auVar20);
      _sqc2(auVar23);
      auVar16 = _lqc2(pauVar8[3]);
      auVar15 = _lqc2(pauVar8[2]);
      _vmulabc(auVar22,auVar15);
      _vmaddabc(auVar21,auVar15);
      auVar18 = _vmaddbc(auVar17,auVar15);
      _vmulabc(auVar22,auVar16);
      _vmaddabc(auVar21,auVar16);
      _vmaddabc(auVar17,auVar16);
      auVar19 = _vmaddbc(auVar19,in_vf0);
      auVar15 = _sqc2(auVar23);
      auVar16 = _sqc2(auVar18);
      auVar17 = _sqc2(auVar19);
      _sqc2(auVar18);
      _sqc2(auVar19);
      _sqc2(auVar20);
      auVar18 = _sqc2(auVar20);
      *pauVar11 = auVar18;
      uStack_f8 = auVar15._8_4_;
      uStack_f4 = auVar15._12_4_;
      *(int *)pauVar11[1] = auVar15._0_4_;
      *(int *)(pauVar11[1] + 4) = auVar15._4_4_;
      *(undefined4 *)(pauVar11[1] + 8) = uStack_f8;
      *(undefined4 *)(pauVar11[1] + 0xc) = uStack_f4;
      uStack_f0 = auVar16._0_4_;
      uStack_ec = auVar16._4_4_;
      uStack_e8 = auVar16._8_4_;
      uStack_e4 = auVar16._12_4_;
      *(undefined4 *)pauVar11[2] = uStack_f0;
      *(undefined4 *)(pauVar11[2] + 4) = uStack_ec;
      *(undefined4 *)(pauVar11[2] + 8) = uStack_e8;
      *(undefined4 *)(pauVar11[2] + 0xc) = uStack_e4;
      uStack_d8 = auVar17._8_4_;
      uStack_d4 = auVar17._12_4_;
      *(int *)pauVar11[3] = auVar17._0_4_;
      *(int *)(pauVar11[3] + 4) = auVar17._4_4_;
      *(undefined4 *)(pauVar11[3] + 8) = uStack_d8;
      *(undefined4 *)(pauVar11[3] + 0xc) = uStack_d4;
      uVar12 = uVar13;
    } while ((int)uVar13 < 0xb);
    (**(code **)(*(int *)(iVar1 + 0x20) + 0x18))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 0x14));
  }
  FUN_001ab768(4);
  return;
}


// ==== FUN_001a5ee8 @ 001a5ee8 ====

undefined4 FUN_001a5ee8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x54) == 0) {
    *(undefined1 *)(iVar1 + 0xb8) = 0;
  }
  else {
    FUN_001a7450();
    if (*(int *)(iVar1 + 0x58) == 0) {
      *(undefined1 *)(iVar1 + 0xb8) = 0;
    }
    else {
      FUN_001a6e58(param_1);
      *(undefined1 *)(iVar1 + 0xb8) = 0;
    }
  }
  return 1;
}


// ==== FUN_001a5f38 @ 001a5f38 ====
// GLOBAL DAT_003f7188 undefined
// GLOBAL UNK_ffffff97 int

void FUN_001a5f38(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  char acStack_50 [16];
  
  piVar7 = (int *)param_1;
  if ((char)piVar7[0x8d] == '\0') {
    return;
  }
  FUN_001ab760(1);
  lVar3 = FUN_00135550(*piVar7);
  acStack_50[0] = '\0';
  if (*(int *)(piVar7[0x15] + 4) == 0) {
    FUN_001ab768(1);
    return;
  }
  if ((((piVar7[0x25] != 0) && (piVar7[0x16] != 0)) && (*(int *)(piVar7[0x25] + 4) == 0)) &&
     (lVar4 = FUN_00347a50(0), lVar4 != 0)) {
    FUN_001a7188(param_1);
  }
  if (lVar3 == 0) goto LAB_001a61b0;
  if ((((int *)piVar7[0x24] != (int *)0x0) && (*(int *)piVar7[0x24] == 0xb)) &&
     (lVar4 = FUN_00347a50(0,piVar7[0x15]), lVar4 != 0)) {
    strcpy(acStack_50,piVar7 + 0x2f);
  }
  lVar4 = FUN_001a7f88(param_1);
  if (lVar4 == 0) {
    iVar6 = *piVar7;
  }
  else {
    piVar1 = (int *)piVar7[0x24];
    if (piVar1 == (int *)0x0) {
LAB_001a6048:
      iVar6 = piVar7[0x14];
LAB_001a604c:
      (**(code **)(*(int *)(iVar6 + 0x5c) + 0xc))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x5c) + 8),acStack_50,*piVar7);
    }
    else {
      if (*piVar1 != 0xb) {
        iVar6 = piVar7[0x14];
        goto LAB_001a604c;
      }
      if (piVar1[3] == 0) goto LAB_001a6048;
    }
    iVar6 = iRamffffff97;
    if (piVar7 != (int *)0xffffff97) {
      if (2.0 < *(float *)(*piVar7 + 0x2e0)) {
        uVar5 = FUN_00135570();
        lVar4 = FUN_00138320(uVar5);
        if (lVar4 == 0x26) {
          iVar6 = *piVar7;
        }
        else {
          FUN_001a7188(param_1);
          iVar6 = *piVar7;
        }
      }
      else {
        iVar6 = *piVar7;
      }
    }
  }
  if ((*(int *)(iVar6 + 0x38c) != 2) && (*(int *)(iVar6 + 0xc4) == 1)) {
    iVar2 = *(int *)((int)lVar3 + 0x4c);
    if (iVar2 != 0) {
      if ((&DAT_003f7188)[iVar2] == '\0') {
        if (1.69 <= *(float *)(iVar6 + 0x2e0)) goto LAB_001a6140;
        iVar6 = piVar7[0x14];
      }
      else {
        iVar6 = piVar7[0x14];
      }
      (**(code **)(*(int *)(iVar6 + 0x5c) + 0x34))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x5c) + 0x30),acStack_50);
      *(undefined4 *)((int)lVar3 + 0x4c) = 0;
    }
  }
LAB_001a6140:
  if (acStack_50[0] == '\0') {
    iVar6 = *(int *)(piVar7[0x14] + 0x5c);
    (**(code **)(iVar6 + 0x14))
              (piVar7[0x14] + (int)*(short *)(iVar6 + 0x10),acStack_50,*piVar7,0x27);
  }
  FUN_001a61d0(param_1,acStack_50);
  acStack_50[0] = '\0';
  iVar6 = *(int *)(piVar7[0x14] + 0x5c);
  (**(code **)(iVar6 + 0x1c))(piVar7[0x14] + (int)*(short *)(iVar6 + 0x18),acStack_50,*piVar7);
  if (acStack_50[0] != '\0') {
    FUN_001a61d0(param_1,acStack_50);
  }
LAB_001a61b0:
  FUN_001ab768(1);
  return;
}


// ==== FUN_001a61d0 @ 001a61d0 ====

void FUN_001a61d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int aiStack_80 [4];
  
  piVar5 = aiStack_80;
  if (*(char *)param_2 != '\0') {
    iVar9 = (int)param_1;
    lVar3 = FUN_001a9ea0(*(undefined4 *)(iVar9 + 0x50));
    if (lVar3 != 0) {
      iVar1 = *(int *)((int)lVar3 + 0x20);
      piVar7 = (int *)(iVar9 + 0x90);
      iVar8 = 1;
      piVar6 = (int *)(iVar9 + 0x98);
      do {
        iVar2 = *piVar6;
        if (iVar2 == 0) {
          iVar2 = *piVar7;
        }
        *piVar5 = iVar2;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
        iVar8 = iVar8 + -1;
        piVar6 = piVar6 + 1;
      } while (-1 < iVar8);
      piVar5 = (int *)(iVar9 + 0x98) + iVar1;
      if (*piVar5 == 0) {
        lVar4 = strcmp(iVar9 + iVar1 * 0xd + 0x5c,param_2);
        if ((lVar4 != 0) ||
           ((*(int *)(iVar9 + iVar1 * 4 + 0x90) != 0 && (lVar4 = FUN_001ad368(), lVar4 != 0)))) {
          FUN_001a6f68(param_1,param_2,aiStack_80,*(undefined1 *)(iVar9 + iVar1 + 0xb4),lVar3);
        }
      }
      else {
        lVar4 = strcmp(iVar9 + iVar1 * 0xd + 0x76,param_2);
        if ((lVar4 != 0) || ((*piVar5 != 0 && (lVar4 = FUN_001ad368(), lVar4 != 0)))) {
          FUN_001a6f68(param_1,param_2,aiStack_80,0,lVar3);
        }
      }
    }
  }
  return;
}


// ==== FUN_001a6330 @ 001a6330 ====

void FUN_001a6330(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_50 [16];
  
  FUN_001ab760(5);
  puVar8 = (undefined4 *)param_1;
  auStack_50[0] = 0;
  FUN_00135550(*puVar8);
  if (*(int *)(puVar8[0x15] + 4) == 0) {
switchD_001a639c_caseD_4:
    FUN_001ab768(5);
    return;
  }
  switch(*param_2) {
  case 1:
    iVar7 = *(int *)(puVar8[0x14] + 0x5c);
    (**(code **)(iVar7 + 0x4c))
              (puVar8[0x14] + (int)*(short *)(iVar7 + 0x48),auStack_50,*puVar8,param_2[1]);
    FUN_001a6e58(param_1);
    break;
  case 2:
    iVar7 = puVar8[0x14];
    uVar1 = *(undefined1 *)(param_2 + 4);
    sVar2 = *(short *)(*(int *)(iVar7 + 0x5c) + 0x40);
    uVar5 = *puVar8;
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x44);
    goto LAB_001a65c4;
  case 3:
    iVar7 = puVar8[0x14];
    uVar1 = *(undefined1 *)(param_2 + 4);
    sVar2 = *(short *)(*(int *)(iVar7 + 0x5c) + 0x38);
    uVar5 = *puVar8;
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x3c);
LAB_001a65c4:
    (*pcVar3)(iVar7 + sVar2,auStack_50,uVar5,param_2[1],uVar1);
    break;
  default:
    goto switchD_001a639c_caseD_4;
  case 5:
    iVar7 = *(int *)(puVar8[0x14] + 0x5c);
    (**(code **)(iVar7 + 0x54))
              (param_2[2],puVar8[0x14] + (int)*(short *)(iVar7 + 0x50),auStack_50,*puVar8,
               *(undefined1 *)(param_2 + 4),param_2[3],param_2[1]);
    break;
  case 6:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x60);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 100);
    goto LAB_001a6720;
  case 7:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x68);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x6c);
    goto LAB_001a6720;
  case 8:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x80);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x84);
    goto LAB_001a6720;
  case 9:
    if (param_2[1] == 0x26) {
      iVar7 = *(int *)(puVar8[0x14] + 0x5c);
      (**(code **)(iVar7 + 0xa4))
                (puVar8[0x14] + (int)*(short *)(iVar7 + 0xa0),auStack_50,*puVar8,
                 *(undefined1 *)(param_2 + 4));
    }
    break;
  case 10:
    iVar7 = *(int *)(puVar8[0x14] + 0x5c);
    (**(code **)(iVar7 + 0x2c))
              (puVar8[0x14] + (int)*(short *)(iVar7 + 0x28),auStack_50,*puVar8,
               *(undefined1 *)(param_2 + 4),param_2[3]);
    break;
  case 0xb:
    iVar7 = *(int *)(puVar8[0x14] + 0x5c);
    (**(code **)(iVar7 + 0x24))
              (puVar8[0x14] + (int)*(short *)(iVar7 + 0x20),auStack_50,*puVar8,param_2[3],
               *(undefined1 *)(param_2 + 4));
    break;
  case 0xc:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0xb0);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0xb4);
    goto LAB_001a6720;
  case 0xd:
    iVar7 = puVar8[0x14];
    uVar6 = (uint)*(byte *)(param_2 + 4);
    sVar2 = *(short *)(*(int *)(iVar7 + 0x5c) + 0x58);
    uVar5 = *puVar8;
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x5c);
    goto LAB_001a666c;
  case 0xe:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x88);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x8c);
    goto LAB_001a6720;
  case 0xf:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x90);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x94);
    goto LAB_001a6720;
  case 0x11:
    iVar7 = puVar8[0x14];
    uVar6 = param_2[1];
    sVar2 = *(short *)(*(int *)(iVar7 + 0x5c) + 0x98);
    uVar5 = *puVar8;
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x9c);
LAB_001a666c:
    (*pcVar3)(param_2[2],iVar7 + sVar2,auStack_50,uVar5,uVar6);
    break;
  case 0x12:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x78);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x7c);
    goto LAB_001a6720;
  case 0x13:
    iVar7 = *(int *)(puVar8[0x14] + 0x5c);
    (**(code **)(iVar7 + 0xac))
              (puVar8[0x14] + (int)*(short *)(iVar7 + 0xa8),auStack_50,*puVar8,
               *(undefined1 *)(param_2 + 4));
    break;
  case 0x14:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0xb8);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0xbc);
    goto LAB_001a6720;
  case 0x15:
    FUN_001aadf0(puVar8[0x14],auStack_50,*puVar8);
    break;
  case 0x16:
    iVar7 = puVar8[0x14];
    uVar5 = *puVar8;
    iVar4 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x70);
    pcVar3 = *(code **)(*(int *)(iVar7 + 0x5c) + 0x74);
LAB_001a6720:
    (*pcVar3)(iVar7 + iVar4,auStack_50,uVar5);
    break;
  case 0x17:
    FUN_001aae50(puVar8[0x14],auStack_50,*puVar8);
    break;
  case 0x18:
    FUN_001aaeb0(puVar8[0x14],auStack_50,*puVar8);
  }
  FUN_001a61d0(param_1,auStack_50);
  FUN_001ab768(5);
  return;
}


// ==== FUN_001a67b8 @ 001a67b8 ====

byte FUN_001a67b8(int *param_1,long param_2)

{
  byte bVar1;
  
  if (param_2 == 0x77975d4f26802000) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    if (param_2 == -0x649c6e6d9262d540) {
      if (*(int *)(*param_1 + 0x2a4) == 0) {
        bVar1 = 1;
      }
      else {
        bVar1 = FUN_00158098();
        bVar1 = bVar1 ^ 1;
      }
    }
  }
  return bVar1;
}


// ==== FUN_001a6840 @ 001a6840 ====

undefined8 FUN_001a6840(int param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + (int)param_2 + 0xb4) != '\0') ||
       (uVar2 = 0, *(int *)(*(int *)(param_1 + 0x54) + 4) == 0)) {
      uVar2 = 1;
    }
  }
  else {
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 0x54);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x58);
    }
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = FUN_00347a50(0x3f800000);
    }
  }
  return uVar2;
}


// ==== FUN_001a68b0 @ 001a68b0 ====
// GLOBAL DAT_00443350 undefined4

undefined4 * FUN_001a68b0(int param_1,int param_2)

{
  if (-1 < *(int *)(*(int *)(param_1 + 0x50) + param_2 * 4 + 0x34)) {
    return *(undefined4 **)(param_1 + param_2 * 4 + 0x30);
  }
  return &DAT_00443350;
}


// ==== FUN_001a68e0 @ 001a68e0 ====
// GLOBAL DAT_00443350 undefined4

undefined4 * FUN_001a68e0(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x50) + param_2 * 4 + 0x34) < 0) {
    return &DAT_00443350;
  }
  return (undefined4 *)(*(int *)(param_1 + param_2 * 4 + 0x30) + 0x40);
}


// ==== FUN_001a6918 @ 001a6918 ====

bool FUN_001a6918(int *param_1)

{
  return *(int *)(*param_1 + 0xc4) == 2;
}


// ==== FUN_001a6930 @ 001a6930 ====

void FUN_001a6930(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 0x50) + *(char *)(param_1 + 0x233) * 0x40;
    auVar1 = _pextlw((long)*(int *)(iVar2 + 0x28),(long)*(int *)(iVar2 + 0x20));
    _pextlw((long)*(int *)(iVar2 + 0x24),auVar1._0_8_);
  }
  return;
}


// ==== FUN_001a6988 @ 001a6988 ====

void FUN_001a6988(int param_1)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  
  if (((*(int *)(param_1 + 0x54) != 0) && (*(char *)(param_1 + 0x230) < '\x03')) &&
     (*(char *)(param_1 + 0xb7) == '\0')) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 0x50);
    iVar1 = iVar3 + *(char *)(param_1 + 0x232) * 0x40;
    iVar3 = iVar3 + *(char *)(param_1 + 0x231) * 0x40;
    auVar2 = _pextlw((long)(int)(*(float *)(iVar1 + 0x38) - *(float *)(iVar3 + 0x38)),
                     (long)(int)(*(float *)(iVar1 + 0x30) - *(float *)(iVar3 + 0x30)));
    auVar2 = _pextlw((long)(int)(*(float *)(iVar1 + 0x34) - *(float *)(iVar3 + 0x34)),auVar2._0_8_);
    _por(in_zero_qw,auVar2);
  }
  return;
}


// ==== FUN_001a6a28 @ 001a6a28 ====

void FUN_001a6a28(undefined4 *param_1)

{
  undefined1 in_zero_qw [16];
  int *piVar1;
  undefined1 auVar2 [16];
  int iVar3;
  
  if ((param_1[0x15] != 0) && (piVar1 = (int *)FUN_00135570(*param_1), *piVar1 != 0)) {
    iVar3 = *(int *)(param_1[0x15] + 0x50) + *(char *)((int)param_1 + 0x231) * 0x40;
    auVar2 = _pextlw((long)*(int *)(iVar3 + 0x38),(long)*(int *)(iVar3 + 0x30));
    auVar2 = _pextlw((long)*(int *)(iVar3 + 0x34),auVar2._0_8_);
    _por(in_zero_qw,auVar2);
  }
  return;
}


// ==== FUN_001a6ab0 @ 001a6ab0 ====

void FUN_001a6ab0(undefined4 *param_1,undefined1 (*param_2) [16])

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vf0 [16];
  
  if ((param_1[0x15] == 0) || (piVar1 = (int *)FUN_00135570(*param_1), *piVar1 == 0)) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar4 = _vsub(in_vf0,in_vf0);
    auVar2 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _sqc2(auVar4);
    param_2[3] = auVar4;
    auVar4 = _sqc2(auVar2);
    *param_2 = auVar4;
    auVar4 = _sqc2(auVar3);
    param_2[1] = auVar4;
    auVar4 = _sqc2(auVar5);
    param_2[2] = auVar4;
  }
  else {
    piVar1 = (int *)(*(int *)(param_1[0x15] + 0x50) + *(char *)((int)param_1 + 0x231) * 0x40);
    auVar4 = _pextlw((long)piVar1[2],(long)*piVar1);
    auVar5 = _pextlw((long)piVar1[1],auVar4._0_8_);
    auVar4 = _pextlw((long)piVar1[6],(long)piVar1[4]);
    auVar3 = _pextlw((long)piVar1[5],auVar4._0_8_);
    auVar4 = _pextlw((long)piVar1[10],(long)piVar1[8]);
    auVar2 = _pextlw((long)piVar1[9],auVar4._0_8_);
    auVar4 = _pextlw((long)piVar1[0xe],(long)piVar1[0xc]);
    auVar4 = _pextlw((long)piVar1[0xd],auVar4._0_8_);
    *(int *)*param_2 = auVar5._0_4_;
    *(int *)(*param_2 + 4) = auVar5._4_4_;
    *(int *)(*param_2 + 8) = auVar5._8_4_;
    *(int *)(*param_2 + 0xc) = auVar5._12_4_;
    *(int *)param_2[3] = auVar4._0_4_;
    *(int *)(param_2[3] + 4) = auVar4._4_4_;
    *(int *)(param_2[3] + 8) = auVar4._8_4_;
    *(int *)(param_2[3] + 0xc) = auVar4._12_4_;
    *(int *)param_2[1] = auVar3._0_4_;
    *(int *)(param_2[1] + 4) = auVar3._4_4_;
    *(int *)(param_2[1] + 8) = auVar3._8_4_;
    *(int *)(param_2[1] + 0xc) = auVar3._12_4_;
    *(int *)param_2[2] = auVar2._0_4_;
    *(int *)(param_2[2] + 4) = auVar2._4_4_;
    *(int *)(param_2[2] + 8) = auVar2._8_4_;
    *(int *)(param_2[2] + 0xc) = auVar2._12_4_;
  }
  return;
}


// ==== FUN_001a6be0 @ 001a6be0 ====

void FUN_001a6be0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int *piVar5;
  int iVar6;
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
  undefined4 uStack_f0;
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
  
  piVar5 = (int *)param_1 + 0xc;
  iVar6 = 7;
  do {
    if (*piVar5 != 0) {
      lVar2 = FUN_001a6918(param_1);
      iVar1 = *(int *)param_1;
      if (lVar2 == 0) {
        pauVar3 = (undefined1 (*) [16])*piVar5;
        pauVar4 = (undefined1 (*) [16])(iVar1 + 0x70);
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
        auVar8 = _lqc2(*pauVar3);
        auVar7 = _lqc2(pauVar3[1]);
        _vmulabc(auVar11,auVar8);
        _vmaddabc(auVar10,auVar8);
        auVar14 = _vmaddbc(auVar9,auVar8);
        _vmulabc(auVar11,auVar7);
        _vmaddabc(auVar10,auVar7);
        auVar15 = _vmaddbc(auVar9,auVar7);
        _sqc2(auVar14);
        _sqc2(auVar15);
        auVar13 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
        auVar8 = _lqc2(pauVar3[2]);
        auVar7 = _lqc2(pauVar3[3]);
        _vmulabc(auVar13,auVar8);
        _vmaddabc(auVar12,auVar8);
        auVar11 = _vmaddbc(auVar10,auVar8);
        _vmulabc(auVar13,auVar7);
        _vmaddabc(auVar12,auVar7);
        _vmaddabc(auVar10,auVar7);
        auVar10 = _vmaddbc(auVar9,in_vf0);
        auVar7 = _sqc2(auVar15);
        auVar8 = _sqc2(auVar11);
        auVar9 = _sqc2(auVar10);
        _sqc2(auVar11);
        _sqc2(auVar10);
        _sqc2(auVar14);
        auVar10 = _sqc2(auVar14);
        pauVar3[4] = auVar10;
        uStack_130 = auVar7._0_4_;
        uStack_12c = auVar7._4_4_;
        uStack_128 = auVar7._8_4_;
        uStack_124 = auVar7._12_4_;
        *(undefined4 *)pauVar3[5] = uStack_130;
        *(undefined4 *)(pauVar3[5] + 4) = uStack_12c;
        *(undefined4 *)(pauVar3[5] + 8) = uStack_128;
        *(undefined4 *)(pauVar3[5] + 0xc) = uStack_124;
        uStack_120 = auVar8._0_4_;
        uStack_11c = auVar8._4_4_;
        uStack_118 = auVar8._8_4_;
        uStack_114 = auVar8._12_4_;
        *(undefined4 *)pauVar3[6] = uStack_120;
        *(undefined4 *)(pauVar3[6] + 4) = uStack_11c;
        *(undefined4 *)(pauVar3[6] + 8) = uStack_118;
        *(undefined4 *)(pauVar3[6] + 0xc) = uStack_114;
        uStack_110 = auVar9._0_4_;
        uStack_10c = auVar9._4_4_;
        uStack_108 = auVar9._8_4_;
        uStack_104 = auVar9._12_4_;
        uStack_c8 = uStack_108;
        uStack_c4 = uStack_104;
        uStack_d0 = uStack_110;
        uStack_cc = uStack_10c;
      }
      else {
        pauVar3 = (undefined1 (*) [16])*piVar5;
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x420));
        pauVar4 = (undefined1 (*) [16])(iVar1 + 0xd0);
        _sqc2(auVar11);
        auVar10 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x430));
        _sqc2(auVar10);
        auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x440));
        _sqc2(auVar15);
        auVar14 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x450));
        _sqc2(auVar14);
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
        auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xe0));
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
        _vmulabc(auVar9,auVar11);
        _vmaddabc(auVar8,auVar11);
        auVar13 = _vmaddbc(auVar7,auVar11);
        _vmulabc(auVar9,auVar10);
        _vmaddabc(auVar8,auVar10);
        auVar12 = _vmaddbc(auVar7,auVar10);
        _sqc2(auVar13);
        _sqc2(auVar12);
        auVar11 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
        auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xe0));
        auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xf0));
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x100));
        _vmulabc(auVar11,auVar15);
        _vmaddabc(auVar9,auVar15);
        auVar10 = _vmaddbc(auVar8,auVar15);
        _vmulabc(auVar11,auVar14);
        _vmaddabc(auVar9,auVar14);
        _vmaddabc(auVar8,auVar14);
        auVar9 = _vmaddbc(auVar7,in_vf0);
        _sqc2(auVar13);
        _sqc2(auVar10);
        _sqc2(auVar9);
        _sqc2(auVar12);
        _sqc2(auVar10);
        _sqc2(auVar9);
        _sqc2(auVar13);
        _sqc2(auVar12);
        _sqc2(auVar10);
        _sqc2(auVar9);
        auVar8 = _lqc2(*pauVar3);
        auVar7 = _lqc2(pauVar3[1]);
        _vmulabc(auVar13,auVar8);
        _vmaddabc(auVar12,auVar8);
        auVar11 = _vmaddbc(auVar10,auVar8);
        _vmulabc(auVar13,auVar7);
        _vmaddabc(auVar12,auVar7);
        auVar14 = _vmaddbc(auVar10,auVar7);
        _sqc2(auVar11);
        _sqc2(auVar14);
        auVar8 = _lqc2(pauVar3[2]);
        auVar7 = _lqc2(pauVar3[3]);
        _vmulabc(auVar13,auVar8);
        _vmaddabc(auVar12,auVar8);
        auVar8 = _vmaddbc(auVar10,auVar8);
        _vmulabc(auVar13,auVar7);
        _vmaddabc(auVar12,auVar7);
        _vmaddabc(auVar10,auVar7);
        auVar10 = _vmaddbc(auVar9,in_vf0);
        _sqc2(auVar8);
        auVar7 = _sqc2(auVar14);
        auVar8 = _sqc2(auVar8);
        auVar9 = _sqc2(auVar10);
        _sqc2(auVar10);
        _sqc2(auVar11);
        auVar10 = _sqc2(auVar11);
        pauVar3[4] = auVar10;
        uStack_f0 = auVar7._0_4_;
        uStack_ec = auVar7._4_4_;
        uStack_e8 = auVar7._8_4_;
        uStack_e4 = auVar7._12_4_;
        *(undefined4 *)pauVar3[5] = uStack_f0;
        *(undefined4 *)(pauVar3[5] + 4) = uStack_ec;
        *(undefined4 *)(pauVar3[5] + 8) = uStack_e8;
        *(undefined4 *)(pauVar3[5] + 0xc) = uStack_e4;
        uStack_e0 = auVar8._0_4_;
        uStack_dc = auVar8._4_4_;
        uStack_d8 = auVar8._8_4_;
        uStack_d4 = auVar8._12_4_;
        *(undefined4 *)pauVar3[6] = uStack_e0;
        *(undefined4 *)(pauVar3[6] + 4) = uStack_dc;
        *(undefined4 *)(pauVar3[6] + 8) = uStack_d8;
        *(undefined4 *)(pauVar3[6] + 0xc) = uStack_d4;
        uStack_d0 = auVar9._0_4_;
        uStack_cc = auVar9._4_4_;
        uStack_c8 = auVar9._8_4_;
        uStack_c4 = auVar9._12_4_;
      }
      *(undefined4 *)pauVar3[7] = uStack_d0;
      *(undefined4 *)(pauVar3[7] + 4) = uStack_cc;
      *(undefined4 *)(pauVar3[7] + 8) = uStack_c8;
      *(undefined4 *)(pauVar3[7] + 0xc) = uStack_c4;
      auVar10 = _lqc2(*pauVar4);
      auVar9 = _lqc2(pauVar4[1]);
      auVar7 = _lqc2(pauVar4[2]);
      auVar8 = _lqc2(*(undefined1 (*) [16])(*piVar5 + 0x80));
      _vmulabc(auVar10,auVar8);
      _vmaddabc(auVar9,auVar8);
      auVar7 = _vmaddbc(auVar7,auVar8);
      auVar7 = _sqc2(auVar7);
      *(undefined1 (*) [16])(*piVar5 + 0x80) = auVar7;
      auVar10 = _lqc2(pauVar4[2]);
      auVar8 = _lqc2(*(undefined1 (*) [16])(*piVar5 + 0x90));
      auVar9 = _lqc2(*pauVar4);
      auVar7 = _lqc2(pauVar4[1]);
      _vmulabc(auVar9,auVar8);
      _vmaddabc(auVar7,auVar8);
      auVar7 = _vmaddbc(auVar10,auVar8);
      auVar7 = _sqc2(auVar7);
      *(undefined1 (*) [16])(*piVar5 + 0x90) = auVar7;
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + 1;
  } while (-1 < iVar6);
  return;
}


// ==== FUN_001a6e58 @ 001a6e58 ====
// GLOBAL DAT_0040f50c undefined4

undefined4 FUN_001a6e58(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  uVar1 = 0xffffffff;
  if (*(int *)(iVar2 + 0x58) != 0) {
    *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x9ac) = 0;
    FUN_00345ac8(*(undefined4 *)(iVar2 + 0x58));
    *(undefined4 *)(iVar2 + 0x58) = 0;
    FUN_001ac8d0(DAT_0040f50c,param_1);
    uVar1 = *(undefined4 *)(iVar2 + 0xb0);
    *(undefined4 *)(iVar2 + 0xb0) = 0xffffffff;
  }
  return uVar1;
}


// ==== FUN_001a6eb8 @ 001a6eb8 ====
// GLOBAL DAT_0040f50c undefined4

void FUN_001a6eb8(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (((piVar2[0x16] == 0) && (*(int *)(piVar2[0x15] + 4) != 0)) && (*(int *)(*piVar2 + 0xc4) != 2))
  {
    lVar1 = FUN_001ac798(DAT_0040f50c,param_1);
    piVar2[0x16] = (int)lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)((int)lVar1 + 4) = *(undefined4 *)(piVar2[0x15] + 4);
      FUN_00345510(piVar2[0x16],param_1,*(undefined4 *)(piVar2[0x16] + 4),1);
      FUN_001ad070(piVar2[0x16]);
      FUN_003492e0(piVar2[0x16]);
      FUN_003438d8(piVar2[0x16]);
      *(int *)(piVar2[0x15] + 0x9ac) = piVar2[0x16];
    }
  }
  return;
}


// ==== FUN_001a6f68 @ 001a6f68 ====

void FUN_001a6f68(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  char acStack_b0 [16];
  undefined4 auStack_a0 [4];
  
  FUN_001ab760(6);
  lVar4 = 0;
  auStack_a0[0] = 0;
  acStack_b0[0] = '\0';
  if (param_5 == 0) goto LAB_001a7040;
  iVar1 = *(int *)((int)param_5 + 0x20);
  iVar5 = (int)param_1;
  if (iVar1 == 0) {
    lVar4 = FUN_001ad0d8(*param_3,param_2,param_5,param_1,param_4,acStack_b0,auStack_a0);
    if (acStack_b0[0] != '\0') {
      param_5 = FUN_001a9ea0(*(undefined4 *)(iVar5 + 0x50),acStack_b0);
      if (param_5 == 0) {
LAB_001a7040:
        FUN_001ab768(6);
        return;
      }
      lVar4 = strcmp(iVar5 + 0x5c,acStack_b0);
      lVar2 = strcmp(iVar5 + 0x69,acStack_b0);
      if ((lVar4 == 0) || (lVar2 == 0)) goto LAB_001a7040;
      strcpy(iVar5 + 0xbc,param_2);
      strcpy(param_2,acStack_b0);
      lVar4 = FUN_001ad0d8(*param_3,acStack_b0,param_5,param_1,param_4,0,0);
    }
    if (lVar4 == 0) goto LAB_001a7150;
    if ((*(int *)((int)param_5 + 0x24) != 0) && (iVar3 = param_3[1], iVar3 != 0)) {
LAB_001a70e0:
      lVar4 = FUN_001ad0d8(iVar3,param_2,param_5,param_1,param_4,0,0);
    }
  }
  else if ((iVar1 == 1) && (*(int *)(*param_3 + 0x24) == 0)) {
    iVar3 = param_3[1];
    if (iVar3 == 0) {
      lVar4 = 1;
    }
    else {
      if (*(char *)(iVar5 + 0x83) != '\0') goto LAB_001a70e0;
      lVar4 = 1;
    }
  }
  if (lVar4 != 0) {
    strcpy(iVar5 + iVar1 * 0xd + 0x76,param_2);
    *(int *)(iVar5 + iVar1 * 4 + 0x98) = (int)param_5;
    if ((iVar1 == 0) &&
       (*(undefined4 *)(iVar5 + 0xa8) = auStack_a0[0], *(int *)(*(int *)(iVar5 + 0x98) + 0x24) != 0)
       ) {
      FUN_001a7188(param_1);
    }
  }
LAB_001a7150:
  FUN_001ab768(6);
  return;
}


// ==== FUN_001a7188 @ 001a7188 ====

void FUN_001a7188(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  param_1[0x27] = 0;
  if (param_1[0x25] != 0) {
    *(undefined1 *)((int)param_1 + 0x69) = 0;
    *(undefined1 *)((int)param_1 + 0xb5) = 1;
    param_1[0x25] = 0;
    if (*(int *)(*param_1 + 0x39c) == 0x26) {
      FUN_003492f0(param_1[0x15]);
    }
    else {
      FUN_00349288(param_1[0x15]);
    }
  }
  return;
}


// ==== FUN_001a71f8 @ 001a71f8 ====
// GLOBAL DAT_004432a0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001a71f8(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  iVar1 = param_1[0x15];
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _pextlw((long)*(int *)(iVar1 + 0x48),(long)*(int *)(iVar1 + 0x40));
  auVar2 = _pextlw((long)*(int *)(iVar1 + 0x44),auVar2._0_8_);
  auVar5 = _qmtc2(auVar2._0_4_);
  auVar2 = _vmul(auVar5,auVar5);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar6 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar6);
  auVar2 = _qmfc2(auVar2._0_4_);
  if (10.0 <= auVar2._0_4_) {
    auVar5 = _lqc2(_DAT_004432a0);
  }
  iVar1 = *param_1;
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
  _vmulabc(auVar4,auVar5);
  _vmaddabc(auVar2,auVar5);
  auVar2 = _vmaddbc(auVar3,auVar5);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_001a72b0 @ 001a72b0 ====
// GLOBAL DAT_004432b0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_001a72b0(int param_1)

{
  uint uVar1;
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(_DAT_004432b0);
  auVar3 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_1 + 0x54) + 0x30));
  auVar4 = _vmulbc(auVar3,auVar3);
  auVar6 = _vmulbc(auVar3,auVar3);
  auVar4 = _sqc2(auVar4);
  auVar7 = _vmulbc(auVar3,auVar3);
  auVar3 = _vmulbc(auVar3,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  uStack_3c = auVar4._4_4_;
  auVar4 = _sqc2(auVar6);
  uStack_38 = auVar4._8_4_;
  auVar4 = _sqc2(auVar7);
  uStack_34 = auVar4._12_4_;
  uStack_34 = auVar3._0_4_ - uStack_34;
  auVar4 = _pextlw((long)(int)(uStack_34 + uStack_34),
                   (long)(int)(1.0 - (uStack_3c + uStack_38 + uStack_3c + uStack_38)));
  auVar4 = _pextlw(0,auVar4._0_8_);
  auVar3 = _qmtc2(auVar4._0_4_);
  _sqc2(auVar3);
  auVar4 = _vmul(auVar3,auVar3);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar9,auVar4);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar4);
  uVar10 = _vwaitq();
  auVar4 = _vmulq(auVar3,uVar10);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x54) + 0x34);
  auVar4 = _vmul(auVar5,auVar4);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar8,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  fVar2 = (float)acosf(auVar4._0_4_);
  return (float)(uVar1 & 0x80000000 | 0x3f800000) * fVar2 * 57.29578;
}


// ==== FUN_001a73f0 @ 001a73f0 ====

void FUN_001a73f0(int param_1)

{
  if (*(char *)(param_1 + 0xb9) == '\0') {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    FUN_003477f0(*(undefined4 *)(param_1 + 0x54),param_1 + 0x10,5,5);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


// ==== FUN_001a7450 @ 001a7450 ====

void FUN_001a7450(int param_1)

{
  if ((*(char *)(param_1 + 0xb9) != '\0') && (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0)) {
    FUN_00347858(*(int *)(param_1 + 0x54),param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  return;
}


// ==== FUN_001a7498 @ 001a7498 ====

void FUN_001a7498(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00135550(*(int *)param_1);
  if ((*(int *)param_1 == 0) || (lVar1 == 0)) {
    FUN_001a7450(param_1);
  }
  return;
}


// ==== FUN_001a74e0 @ 001a74e0 ====

undefined4 FUN_001a74e0(int param_1)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc);
}


// ==== FUN_001a7500 @ 001a7500 ====

void FUN_001a7500(undefined4 *param_1)

{
  FUN_00135ea8(0,0x40800000,*param_1);
  return;
}


// ==== FUN_001a7528 @ 001a7528 ====

undefined8 FUN_001a7528(undefined8 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_54;
  
  iVar1 = *(int *)(param_2[0x14] + 0x30);
  iVar2 = FUN_00135570(*param_2);
  puVar3 = (undefined4 *)
           (*(int *)(param_2[0x15] + 0x50) +
           *(int *)(*(int *)(iVar2 + param_3 * 4 + 0xc) * 4 + iVar1) * 0x40);
  uVar9 = puVar3[1];
  uVar5 = puVar3[2];
  uVar10 = puVar3[4];
  uVar6 = puVar3[5];
  uVar11 = puVar3[6];
  uVar12 = puVar3[8];
  uVar7 = puVar3[9];
  uVar13 = puVar3[10];
  uVar14 = puVar3[0xc];
  uVar8 = puVar3[0xd];
  uVar15 = puVar3[0xe];
  puVar4 = (undefined4 *)param_1;
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar5;
  puVar4[3] = uStack_54;
  puVar4[4] = uVar10;
  puVar4[5] = uVar6;
  puVar4[6] = uVar11;
  puVar4[7] = uStack_54;
  puVar4[8] = uVar12;
  puVar4[9] = uVar7;
  puVar4[10] = uVar13;
  puVar4[0xb] = uStack_54;
  puVar4[0xc] = uVar14;
  puVar4[0xd] = uVar8;
  puVar4[0xe] = uVar15;
  puVar4[0xf] = uStack_54;
  return param_1;
}


// ==== FUN_001a7660 @ 001a7660 ====

undefined4 FUN_001a7660(int param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x98 + param_2 * 4);
  uVar1 = 0;
  if (*piVar3 != 0) {
    lVar2 = strcmp(param_1 + param_2 * 0xd + 0x5c,param_1 + param_2 * 0xd + 0x76);
    if (lVar2 == 0) {
      lVar2 = FUN_001ad368(*piVar3);
      uVar1 = 1;
      if (lVar2 == 0) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_001a76e0 @ 001a76e0 ====

void FUN_001a76e0(undefined8 param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((*(int *)(*(int *)param_1 + 0xc4) == 1) && (*(int *)(*(int *)param_1 + 0x38c) == 1)) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1;
      FUN_001a7528(auStack_80,param_1,uVar1);
      auVar5 = _lqc2(auStack_80);
      auVar3 = _lqc2(auStack_70);
      auVar4 = _lqc2(auStack_60);
      _vmove(auVar5);
      _vmove(auVar3);
      auVar7 = _vaddbc(in_vf0,auVar3);
      auVar6 = _vaddbc(in_vf0,auVar5);
      _vmove(auVar4);
      auVar8 = _vaddbc(in_vf0,auVar5);
      _vmove(auVar7);
      _vmove(auVar6);
      auVar9 = _vaddbc(in_vf0,auVar4);
      auVar7 = _lqc2(auStack_50);
      auVar10 = _vaddbc(in_vf0,auVar4);
      _vmove(auVar8);
      auVar6 = _vmulbc(auVar9,auVar7);
      auVar8 = _vaddbc(in_vf0,auVar3);
      auVar4 = _vmulbc(auVar10,auVar7);
      auVar6 = _vadd(auVar6,auVar4);
      auVar4 = _vmulbc(auVar8,auVar7);
      auVar6 = _vadd(auVar6,auVar4);
      auVar4 = _sqc2(auVar5);
      *param_2 = auVar4;
      auVar4 = _sqc2(auVar3);
      param_2[1] = auVar4;
      auVar4 = _vsub(in_vf0,auVar6);
      auVar4 = _sqc2(auVar4);
      param_2[3] = auVar4;
      auVar4 = _sqc2(auVar9);
      *param_2 = auVar4;
      auVar4 = _sqc2(auVar10);
      param_2[1] = auVar4;
      auVar4 = _sqc2(auVar8);
      param_2[2] = auVar4;
      param_2 = param_2 + 4;
      uVar1 = uVar2;
    } while (uVar2 < 0xb);
  }
  return;
}


// ==== FUN_001a77c8 @ 001a77c8 ====

void FUN_001a77c8(float param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
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
  undefined1 in_vf15 [16];
  undefined4 uVar20;
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
  float fStack_100;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  
  iVar1 = *(int *)param_2;
  if ((*(int *)(iVar1 + 0xc4) == 1) && (*(int *)(iVar1 + 0x38c) == 1)) {
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auStack_d0 = _sqc2(auVar6);
    uVar5 = 0;
    pauVar4 = (undefined1 (*) [16])((int *)param_2 + 0x60);
    do {
      auVar6 = param_3[2];
      auVar11 = param_3[3];
      auVar7 = *param_3;
      auVar8 = param_3[1];
      auStack_c0 = _sqc2(in_vf15);
      FUN_001a7528(auStack_200,param_2,uVar5);
      auVar12 = _lqc2(auVar7);
      auVar19 = _qmtc2(0x3f800000);
      auVar7 = _lqc2(auVar8);
      auVar16 = _qmtc2(1.0 / param_1);
      auVar9 = _lqc2(auStack_1f0);
      auVar8 = _lqc2(auStack_1e0);
      auVar10 = _lqc2(auStack_200);
      _vmulabc(auVar10,auVar12);
      _vmaddabc(auVar9,auVar12);
      auVar13 = _vmaddbc(auVar8,auVar12);
      _vmulabc(auVar10,auVar7);
      _vmaddabc(auVar9,auVar7);
      auVar14 = _vmaddbc(auVar8,auVar7);
      auVar12 = _lqc2(auVar6);
      auVar11 = _lqc2(auVar11);
      auVar17 = _vsubbc(auVar13,auVar14);
      auVar6 = _lqc2(auStack_1d0);
      auVar7 = _vaddbc(auVar13,auVar14);
      _vmulabc(auVar10,auVar12);
      _vmaddabc(auVar9,auVar12);
      auVar12 = _vmaddbc(auVar8,auVar12);
      _vmulabc(auVar10,auVar11);
      _vmaddabc(auVar9,auVar11);
      _vmaddabc(auVar8,auVar11);
      auVar10 = _vmaddbc(auVar6,in_vf0);
      _lqc2(auStack_e0);
      auVar6 = _vsubbc(auVar14,auVar12);
      _vaddbc(in_vf0,auVar6);
      auVar6 = _vsubbc(auVar12,auVar13);
      _vaddbc(in_vf0,auVar6);
      auVar8 = _vmulbc(auVar10,auVar16);
      auVar9 = _vaddbc(in_vf0,auVar17);
      auVar11 = _lqc2(auStack_d0);
      auVar6 = _vmul(auVar9,auVar9);
      auStack_e0 = _sqc2(auVar9);
      _vaddabc(auVar6,auVar6);
      auVar11 = _vmaddbc(auVar11,auVar6);
      auVar6 = _sqc2(auVar8);
      pauVar4[-0xb] = auVar6;
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar11);
      auVar6 = _vaddbc(in_vf0,in_vf0);
      uVar20 = _vwaitq();
      auVar6 = _vmulq(auVar6,uVar20);
      auVar11 = _vaddbc(auVar7,auVar12);
      auVar6 = _qmfc2(auVar6._0_4_);
      auVar11 = _vsubbc(auVar11,auVar19);
      fVar3 = auVar6._0_4_;
      auVar6 = _qmfc2(auVar11._0_4_);
      fVar2 = auVar6._0_4_;
      auStack_140 = _sqc2(auVar13);
      auStack_130 = _sqc2(auVar14);
      auStack_120 = _sqc2(auVar12);
      auStack_110 = _sqc2(auVar10);
      auStack_180 = _sqc2(auVar13);
      auStack_170 = _sqc2(auVar14);
      auStack_160 = _sqc2(auVar12);
      auStack_150 = _sqc2(auVar10);
      auStack_1c0 = _sqc2(auVar13);
      auStack_1b0 = _sqc2(auVar14);
      auStack_1a0 = _sqc2(auVar12);
      auStack_190 = _sqc2(auVar10);
      auVar6 = _sqc2(auVar13);
      auVar11 = _sqc2(auVar14);
      auVar7 = _sqc2(auVar12);
      auVar8 = _sqc2(auVar10);
      _sqc2(auVar13);
      _sqc2(auVar14);
      _sqc2(auVar12);
      _sqc2(auVar10);
      auVar10 = _lqc2(auStack_c0);
      if (0.0 < fVar3) {
        auVar12 = _qmtc2(1.0 / fVar3);
        auVar9 = _vmulbc(auVar9,auVar12);
        auVar9 = _sqc2(auVar9);
        *pauVar4 = auVar9;
      }
      else {
        auVar12 = _vadd(in_vf0,in_vf0);
        auVar9 = _sqc2(auVar12);
        *pauVar4 = auVar9;
        auStack_1c0 = _sqc2(auVar12);
      }
      auStack_c0 = _sqc2(auVar10);
      fStack_100 = (float)atan2f(fVar3,fVar2);
      fStack_100 = fStack_100 * 57.295776;
      in_vf15 = _lqc2(auStack_c0);
      if ((fVar3 <= 0.01) && (fVar2 <= 0.0)) {
        auVar9 = _lqc2(auVar6);
        auVar9 = _qmfc2(auVar9._0_4_);
        auStack_1c0._8_4_ = auVar7._8_4_;
        if (auVar9._0_4_ <= auVar11._4_4_) {
          if (auVar11._4_4_ <= (float)auStack_1c0._8_4_) {
            auVar9 = _lqc2(auVar7);
            goto LAB_001a7b54;
          }
          auVar13 = _lqc2(auVar11);
          auVar9 = _qmtc2(0x3f800000);
          auVar9 = _vaddbc(auVar13,auVar9);
          auVar10 = _lqc2(auVar7);
          auVar9 = _vaddbc(in_vf0,auVar9);
          auVar12 = _vaddbc(auVar13,auVar10);
          auVar9 = _vaddbc(auVar9,auVar9);
          auVar10 = _lqc2(auVar6);
          _vaddbc(in_vf0,auVar9);
          auVar9 = _vaddbc(auVar13,auVar10);
          _vaddbc(in_vf0,auVar12);
          in_vf15 = _vaddbc(in_vf0,auVar9);
          auVar9 = _sqc2(in_vf15);
          *pauVar4 = auVar9;
        }
        else {
          auVar9 = _lqc2(auVar6);
          auVar9 = _qmfc2(auVar9._0_4_);
          if (auVar9._0_4_ <= (float)auStack_1c0._8_4_) {
            auVar9 = _lqc2(auVar7);
LAB_001a7b54:
            auVar10 = _qmtc2(0x3f800000);
            auVar10 = _vaddbc(auVar9,auVar10);
            auVar12 = _lqc2(auVar6);
            auVar10 = _vaddbc(in_vf0,auVar10);
            auVar13 = _vaddbc(auVar9,auVar12);
            auVar10 = _vaddbc(auVar10,auVar10);
            auVar12 = _lqc2(auVar11);
            _vaddbc(in_vf0,auVar10);
            auVar9 = _vaddbc(auVar9,auVar12);
            _vaddbc(in_vf0,auVar13);
            in_vf15 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(in_vf15);
            *pauVar4 = auVar9;
          }
          else {
            auVar13 = _lqc2(auVar6);
            auVar9 = _qmtc2(0x3f800000);
            auVar9 = _vaddbc(auVar13,auVar9);
            auVar10 = _lqc2(auVar11);
            auVar9 = _vaddbc(in_vf0,auVar9);
            auVar12 = _vaddbc(auVar13,auVar10);
            auVar9 = _vaddbc(auVar9,auVar9);
            auVar10 = _lqc2(auVar7);
            _vaddbc(in_vf0,auVar9);
            auVar9 = _vaddbc(auVar13,auVar10);
            _vaddbc(in_vf0,auVar12);
            in_vf15 = _vaddbc(in_vf0,auVar9);
            auVar9 = _sqc2(in_vf15);
            *pauVar4 = auVar9;
          }
        }
        auVar9 = _vmul(in_vf15,in_vf15);
        auVar10 = _lqc2(auStack_d0);
        _vaddabc(auVar9,auVar9);
        auVar9 = _vmaddbc(auVar10,auVar9);
        auVar10 = _vmove(in_vf15);
        _vnop();
        _vnop();
        _vnop();
        _vrsqrt(in_vf0,auVar9);
        auVar9 = _qmfc2(auVar9._0_4_);
        _qmtc2(SQRT(auVar9._0_4_));
        uVar20 = _vwaitq();
        auVar9 = _vmulq(auVar10,uVar20);
        auVar9 = _sqc2(auVar9);
        *pauVar4 = auVar9;
        auStack_1c0 = auVar7;
      }
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      _vsub(in_vf0,in_vf0);
      auVar16 = _vsub(in_vf0,in_vf0);
      auVar9 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vaddbc(in_vf0,in_vf0);
      _sqc2(auVar9);
      uVar5 = uVar5 + 1;
      _sqc2(auVar10);
      param_3 = param_3 + 4;
      _sqc2(auVar12);
      _sqc2(auVar16);
      auVar6 = _lqc2(auVar6);
      auVar18 = _lqc2(*pauVar4);
      auVar9 = _vsub(auVar9,auVar6);
      _sqc2(auVar9);
      _vmove(auVar9);
      auVar6 = _lqc2(auVar11);
      auVar10 = _vsub(auVar10,auVar6);
      _sqc2(auVar10);
      auVar14 = _vaddbc(in_vf0,auVar10);
      _vmove(auVar10);
      auVar13 = _vaddbc(in_vf0,auVar9);
      _vmove(auVar14);
      auVar6 = _lqc2(auVar7);
      auVar12 = _vsub(auVar12,auVar6);
      _vmove(auVar13);
      _vmove(auVar12);
      auVar19 = _vaddbc(in_vf0,auVar12);
      auVar17 = _vaddbc(in_vf0,auVar9);
      auVar15 = _vaddbc(in_vf0,auVar12);
      _vmove(auVar17);
      auVar6 = _vmulbc(auVar15,auVar16);
      _sqc2(auVar9);
      auVar9 = _vaddbc(in_vf0,auVar10);
      auVar7 = _vmulbc(auVar19,auVar16);
      auVar11 = _vmulbc(auVar9,auVar16);
      auVar6 = _vadd(auVar7,auVar6);
      _sqc2(auVar10);
      _sqc2(auVar12);
      auVar6 = _vadd(auVar6,auVar11);
      _sqc2(auVar14);
      auVar7 = _vsub(in_vf0,auVar6);
      _sqc2(auVar13);
      _sqc2(auVar17);
      _sqc2(auVar16);
      auStack_200 = _sqc2(auVar19);
      auStack_1f0 = _sqc2(auVar15);
      auStack_1e0 = _sqc2(auVar9);
      auStack_1d0 = _sqc2(auVar7);
      _sqc2(auVar12);
      _sqc2(auVar7);
      auVar11 = _lqc2(auVar8);
      auVar6 = _lqc2(auStack_200);
      auVar6 = _vmulbc(auVar6,auVar11);
      auVar7 = _vadd(auVar7,auVar6);
      _sqc2(auVar7);
      auVar11 = _lqc2(auVar8);
      auVar6 = _lqc2(auStack_1f0);
      auVar6 = _vmulbc(auVar6,auVar11);
      auVar7 = _vadd(auVar7,auVar6);
      _sqc2(auVar7);
      auVar11 = _lqc2(auVar8);
      auVar6 = _lqc2(auStack_1e0);
      auVar6 = _vmulbc(auVar6,auVar11);
      auVar6 = _vadd(auVar7,auVar6);
      auStack_f0 = _sqc2(auVar6);
      auVar6 = _qmtc2(fStack_100 * 0.017453292 * (1.0 / param_1));
      auVar6 = _vmulbc(auVar18,auVar6);
      auVar6 = _sqc2(auVar6);
      *pauVar4 = auVar6;
      pauVar4 = pauVar4 + 1;
    } while (uVar5 < 0xb);
  }
  return;
}


// ==== FUN_001a7d48 @ 001a7d48 ====

undefined4 FUN_001a7d48(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x54);
    while( true ) {
      iVar2 = FUN_00343508(*(undefined4 *)(iVar2 + 4));
      if (iVar2 <= iVar3) {
        return 0;
      }
      piVar1 = (int *)FUN_003433c8(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),iVar3);
      if (*piVar1 == -1) {
        iVar2 = piVar1[5];
        goto LAB_001a7da8;
      }
      iVar2 = *(int *)(param_1 + 0x54);
      if (*piVar1 == *(int *)(iVar2 + 0x10)) break;
      iVar3 = iVar3 + 1;
    }
    iVar2 = piVar1[5];
LAB_001a7da8:
    iVar3 = iVar3 + 1;
    if (iVar2 == param_2) {
      return 1;
    }
  } while( true );
}


// ==== FUN_001a7df0 @ 001a7df0 ====

undefined4 FUN_001a7df0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = param_1 + param_2 * 4;
  piVar1 = *(int **)(iVar4 + 0x90);
  piVar2 = *(int **)(iVar4 + 0x98);
  if ((piVar1 == (int *)0x0) || (*piVar1 != param_3)) {
    uVar5 = 3;
    if ((piVar2 != (int *)0x0) && (uVar5 = 1, *piVar2 != param_3)) {
      uVar5 = 3;
    }
  }
  else {
    lVar3 = FUN_001a6840(param_1,param_2,0);
    uVar5 = 2;
    if (lVar3 == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}


// ==== FUN_001a7e58 @ 001a7e58 ====
// GLOBAL DAT_003d20dc undefined4
// GLOBAL DAT_003d20d4 undefined4
// GLOBAL DAT_003d20d8 undefined_*
// GLOBAL DAT_003bcf30 float
// GLOBAL DAT_003bcf38 undefined
// GLOBAL DAT_003bcf68 undefined

void FUN_001a7e58(int *param_1)

{
  int iVar1;
  float fVar2;
  
  FUN_003461d0(1);
  DAT_003d20dc = 0x2c;
  DAT_003d20d4 = 0x1c;
  DAT_003d20d8 = (undefined *)0x0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  if (*(char *)((int)param_1 + 0xb6) == '\0') {
    fVar2 = (float)FUN_001378f0(*param_1);
    iVar1 = *param_1;
    if (0.0 < *(float *)(iVar1 + 0x308)) {
      if (fVar2 <= DAT_003bcf30) {
        return;
      }
      *(undefined1 *)(param_1 + 0x8c) = 1;
      DAT_003d20d8 = &DAT_003bcf38;
    }
    else {
      if (*(int *)(iVar1 + 0x38c) == 1) {
        return;
      }
      if (*(int *)(iVar1 + 0x350) != 0) {
        return;
      }
      FUN_003461d0(0);
      *(undefined1 *)(param_1 + 0x8c) = 2;
      DAT_003d20d8 = &DAT_003bcf68;
    }
    DAT_003d20dc = *(undefined4 *)((char)param_1[0x8c] * 4 + 0x3bcf98);
    DAT_003d20d4 = *(undefined4 *)((char)param_1[0x8c] * 4 + 0x3bcfa8);
  }
  return;
}


// ==== FUN_001a7f88 @ 001a7f88 ====

undefined4 FUN_001a7f88(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar2 = FUN_00135550(*param_1);
  if (*(int *)(iVar2 + 0x80) == 0) {
    if (0.001 < *(float *)(*param_1 + 0x2e0)) {
      return 1;
    }
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  iVar2 = FUN_00135550(iVar2);
  if (*(int *)(iVar2 + 0x80) == 1) {
    iVar2 = *param_1;
  }
  else {
    iVar2 = FUN_00135550(*param_1);
    if (*(int *)(iVar2 + 0x80) != 5) {
      return 0;
    }
    iVar2 = *param_1;
  }
  iVar3 = 0;
  iVar2 = FUN_00135550(iVar2);
  uVar4 = 0;
  if (0.02 < *(float *)(iVar2 + 0x74)) {
    iVar2 = FUN_00135550(*param_1);
    if (*(int *)(iVar2 + 0x80) == 1) {
      iVar3 = FUN_00135550(*param_1);
      iVar3 = iVar3 + 0x650;
    }
    if (iVar3 == 0) {
      iVar2 = *param_1;
    }
    else {
      bVar1 = false;
      if (0.001 < *(float *)(iVar3 + 0x60)) {
        bVar1 = *(char *)(iVar3 + 0x86) == '\0';
      }
      if (bVar1) {
        return 1;
      }
      iVar2 = *param_1;
    }
    fVar5 = 0.0001;
    if (*(char *)(iVar2 + 0x3a9) != '\0') {
      fVar5 = 0.3;
    }
    uVar4 = 1;
    if (*(float *)(iVar2 + 0x2e0) <= fVar5) {
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ==== FUN_001a80f8 @ 001a80f8 ====

void FUN_001a80f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar2 = FUN_00107d20(0xb0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00107d20(18000);
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}


// ==== FUN_001a8168 @ 001a8168 ====
// GLOBAL DAT_0040f50c undefined4

undefined4 FUN_001a8168(int param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_c0 [32];
  undefined4 auStack_a0 [4];
  
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(int *)(param_1 + 8) = (int)param_2;
  FUN_00345ed0(param_2);
  FUN_001ac940(DAT_0040f50c,2);
  FUN_001ad030(DAT_0040f50c,*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 18000);
  uVar3 = FUN_00343f38();
  FUN_00342a80(*(undefined4 *)(param_1 + 8),uVar3);
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x1c);
  if (0 < *(int *)(param_3 + 0x5c)) {
    iVar2 = *(int *)(param_1 + 0x30);
    while( true ) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar5 + iVar2) = 0xffffffff;
      if (*(int *)(param_3 + 0x5c) <= iVar6) break;
      iVar2 = *(int *)(param_1 + 0x30);
    }
  }
  if (*piVar1 < 1) {
    return 1;
  }
  iVar6 = *(int *)(param_3 + 0x5c);
  iVar2 = 0;
  do {
    iVar5 = 0;
    if (0 < iVar6) {
      iVar6 = *(int *)(param_3 + 0x60);
      while( true ) {
        strcpy(auStack_c0,*(undefined4 *)(iVar5 * 4 + iVar6));
        FUN_00360b90(auStack_c0);
        auStack_a0[0] = FUN_00352a30(auStack_c0);
        lVar4 = FUN_003485e8(auStack_a0,piVar1[3] + iVar2 * 0x14);
        if (lVar4 == 0) break;
        iVar5 = iVar5 + 1;
        if (*(int *)(param_3 + 0x5c) <= iVar5) goto LAB_001a82bc;
        iVar6 = *(int *)(param_3 + 0x60);
      }
      *(undefined4 *)(iVar5 * 4 + *(int *)(param_1 + 0x30)) =
           *(undefined4 *)(iVar2 * 0x14 + piVar1[3] + 0x10);
    }
LAB_001a82bc:
    if (*piVar1 <= iVar2 + 1) {
      return 1;
    }
    iVar6 = *(int *)(param_3 + 0x5c);
    iVar2 = iVar2 + 1;
  } while( true );
}


// ==== FUN_001a8300 @ 001a8300 ====

void FUN_001a8300(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)param_1 + *param_1);
  if (*piVar2 != 0) {
    iVar1 = *piVar2;
    while( true ) {
      piVar2 = piVar2 + 1;
      *(int *)((int)param_1 + iVar1) = *(int *)((int)param_1 + iVar1) + (int)param_1;
      if (*piVar2 == 0) break;
      iVar1 = *piVar2;
    }
    piVar2 = (int *)((int)param_1 + *param_1);
  }
  *piVar2 = 0;
  return;
}


// ==== FUN_001a8350 @ 001a8350 ====

void FUN_001a8350(int param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 < 8) {
      *(int *)(param_1 + iVar1 * 4 + 0xc) = (int)param_2;
      *(int *)(param_1 + 0x2c) = iVar1 + 1;
    }
  }
  else {
    FUN_00345fd8(param_2);
  }
  return;
}


// ==== FUN_001a83a0 @ 001a83a0 ====
// GLOBAL DAT_00414d54 int

/* Strings referenciadas:
     "S_005"
     "C_001"
     "S_001"
     "M_001"
     "S_003"
     "S_025" */

void FUN_001a83a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  
  lVar3 = FUN_00135550(param_3);
  iVar9 = (int)param_3;
  if (param_4 == 0x28) {
    uVar4 = FUN_00137ae0(param_3);
    pcVar7 = "S_005";
LAB_001a8548:
    FUN_001ab1c0(param_1,param_2,iVar9 + 0x3b9,uVar4,pcVar7,param_3);
  }
  else {
    if (lVar3 == 0) {
      uVar4 = FUN_00137ae0(param_3);
      FUN_001ab1c0(param_1,param_2,iVar9 + 0x3b9,uVar4,0x3f6a00,param_3);
      return;
    }
    iVar6 = (int)lVar3;
    iVar2 = *(int *)(iVar6 + 0x80);
    if (iVar2 == 1) {
      if (*(int *)(*(int *)(iVar9 + 0x330) + 0xcc) != 0) {
        strcpy(param_2);
        return;
      }
      cVar1 = *(char *)param_1;
    }
    else {
      cVar1 = *(char *)param_1;
    }
    if (cVar1 == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(cVar1 * 4 + DAT_00414d54);
    }
    if (*(char *)(iVar6 + 0x30) == '\0') {
      if (*(char *)(iVar6 + 0x35) == '\0') {
        if (*(char *)(iVar6 + 0x3a) != '\0') goto LAB_001a8528;
        if ((iVar2 != 1) || (lVar3 = FUN_0018ddd8(iVar6 + 0xc94), lVar3 == 0)) goto LAB_001a8598;
        uVar4 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a18;
      }
      else if (iVar5 == 10) {
        if (-10.0 <= *(float *)(iVar6 + 0xc)) goto LAB_001a8528;
        uVar4 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a08;
      }
      else {
        if ((*(char *)(iVar6 + 0x3a) != '\0') ||
           ((iVar2 == 1 && (lVar3 = FUN_0018ddd8(iVar6 + 0xc94), lVar3 != 0)))) {
LAB_001a8528:
          uVar4 = FUN_00137ae0(param_3);
          pcVar7 = "S_001";
          goto LAB_001a8548;
        }
LAB_001a8598:
        uVar4 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a10;
      }
    }
    else {
      uVar4 = FUN_00137ae0(param_3);
      uVar8 = 0x3f69f8;
    }
    FUN_001aaf10(param_1,param_2,iVar9 + 0x3b9,uVar4,uVar8,0x3f6a00,param_3);
  }
  return;
}


// ==== FUN_001a8618 @ 001a8618 ====

/* Strings referenciadas:
     "U_001" */

void FUN_001a8618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_00135550(param_3);
  if (0.1 < ABS(*(float *)(iVar2 + 0xc))) {
    iVar2 = *(int *)((int)param_3 + 0x26c);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(iVar2 + (uint)*(byte *)(iVar2 + 0x19) * 4 + 0xc) != 0;
    }
    if (!bVar1) {
      uVar3 = FUN_00137ae0(param_3);
      FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar3,0x3f6a20,param_3);
    }
  }
  return;
}


// ==== FUN_001a86e0 @ 001a86e0 ====
// GLOBAL DAT_003bd158 float
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "C_080"
     "C_081"
     "S_372"
     "S_MOV"
     "S_382"
     "S_MVI" */

void FUN_001a86e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  
  iVar4 = FUN_00135550(param_3);
  uVar3 = DAT_004432cc;
  uVar2 = DAT_004432c8;
  uVar5 = _DAT_004432c0;
  iVar8 = (int)param_3;
  if (*(char *)(iVar4 + 0x38) == '\0') {
    cVar1 = *(char *)(iVar4 + 0x36);
  }
  else {
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x60));
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0x70));
    auVar10 = _vmul(auVar11,auVar10);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar12,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    if (auVar10._0_4_ < -DAT_003bd158) {
      uVar5 = FUN_00137ae0(param_3);
      uVar7 = 0x3f6a28;
      goto LAB_001a89c8;
    }
    if (DAT_003bd158 < auVar10._0_4_) {
      uVar5 = FUN_00137ae0(param_3);
      uVar7 = 0x3f6a30;
      goto LAB_001a89c8;
    }
    cVar1 = *(char *)(iVar4 + 0x36);
  }
  if (cVar1 != '\0') {
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x60));
    auVar15 = _vaddbc(in_vf0,in_vf0);
    auVar13 = _lqc2(_DAT_004432d0);
    auVar11 = _vmul(auVar12,auVar12);
    auVar10 = _vmul(auVar13,auVar13);
    _vaddabc(auVar11,auVar11);
    auVar11 = _vmaddbc(auVar15,auVar11);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar15,auVar10);
    auVar12 = _vmove(auVar12);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar10);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    uVar16 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar16);
    _vmulq(auVar10,uVar16);
    _vnop();
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar11);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    uVar16 = _vwaitq();
    auVar12 = _vmulq(auVar12,uVar16);
    _vmulq(auVar10,uVar16);
    auVar11 = _vaddbc(in_vf0,in_vf0);
    auVar10 = _sqc2(auVar13);
    auVar11 = _sqc2(auVar11);
    auVar15 = _vsubbc(in_vf0,in_vf0);
    auVar13 = _vmul(auVar12,auVar13);
    auVar12 = _sqc2(auVar12);
    auVar14 = _lqc2(auVar11);
    _vaddabc(auVar13,auVar13);
    auVar13 = _vmaddbc(auVar14,auVar13);
    auVar13 = _vmax(auVar13,auVar15);
    auVar13 = _vminibc(auVar13,in_vf0);
    auVar13 = _qmfc2(auVar13._0_4_);
    fVar9 = (float)acosf(auVar13._0_4_);
    auVar12 = _lqc2(auVar12);
    auVar10 = _lqc2(auVar10);
    _vopmula(auVar12,auVar10);
    auVar12 = _vopmsub(auVar10,auVar12);
    auVar10._8_4_ = uVar2;
    auVar10._0_8_ = uVar5;
    auVar10._12_4_ = uVar3;
    auVar10 = _lqc2(auVar10);
    auVar10 = _vmul(auVar12,auVar10);
    auVar11 = _lqc2(auVar11);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    fVar9 = fVar9 * 57.29578;
    if (0.0 < auVar10._0_4_) {
      fVar9 = -fVar9;
    }
    if (ABS(fVar9) < 90.0) {
      uVar5 = FUN_00137ae0(param_3);
      pcVar6 = "S_372";
    }
    else {
      uVar5 = FUN_00137ae0(param_3);
      pcVar6 = "S_382";
    }
    FUN_001aaf10(param_1,param_2,iVar8 + 0x3b9,uVar5,pcVar6,0x3f6a40,param_3);
    return;
  }
  if (*(char *)(iVar4 + 0x3a) == '\0') {
    uVar5 = FUN_00137ae0(param_3);
    FUN_001ab1c0(param_1,param_2,iVar8 + 0x3b9,uVar5,0x3f6a50,param_3);
    return;
  }
  if ((*(float *)(iVar4 + 0x10) == 0.0) && (0.1 <= *(float *)(iVar8 + 0x2e0))) {
    FUN_001a8a20(param_1,param_2,param_3);
    return;
  }
  uVar5 = FUN_00137ae0(param_3);
  uVar7 = 0x3f6a40;
LAB_001a89c8:
  FUN_001ab1c0(param_1,param_2,iVar8 + 0x3b9,uVar5,uVar7,param_3);
  return;
}


// ==== FUN_001a8a20 @ 001a8a20 ====
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4

/* Strings referenciadas:
     "S_MOV"
     "S_093"
     "S_094"
     "S_095"
     "S_092" */

void FUN_001a8a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  
  iVar6 = FUN_00135550(param_3);
  uVar5 = DAT_004432cc;
  uVar4 = DAT_004432c8;
  uVar3 = DAT_004432c4;
  uVar2 = DAT_004432c0;
  auVar15 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x60));
  bVar1 = false;
  iVar6 = (int)param_3;
  auVar14 = _lqc2(*(undefined1 (*) [16])(iVar6 + 0x90));
  if ((*(int *)(iVar6 + 0x39c) == 0x29) || (*(int *)(iVar6 + 0x39c) == 0x28)) {
    bVar1 = true;
  }
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmul(auVar15,auVar15);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar11,auVar10);
  auVar10 = _qmfc2(auVar10._0_4_);
  auVar11 = _vmove(auVar11);
  if (2.3283064e-10 <= auVar10._0_4_) {
    auVar10 = _vmul(auVar14,auVar14);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar11,auVar10);
    auVar10 = _qmfc2(auVar10._0_4_);
    if ((2.3283064e-10 <= auVar10._0_4_) && (!bVar1)) {
      auVar10 = _vmul(auVar14,auVar14);
      auVar12 = _vmul(auVar15,auVar15);
      _vaddabc(auVar12,auVar12);
      auVar12 = _vmaddbc(auVar11,auVar12);
      _vaddabc(auVar10,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      auVar14 = _vmove(auVar14);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar10);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      uVar17 = _vwaitq();
      auVar13 = _vmulq(auVar14,uVar17);
      _vmulq(auVar10,uVar17);
      auVar14 = _vmove(auVar15);
      auVar16 = _vaddbc(in_vf0,in_vf0);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar12);
      auVar10 = _vaddbc(in_vf0,in_vf0);
      uVar17 = _vwaitq();
      auVar15 = _vmulq(auVar14,uVar17);
      _vmulq(auVar10,uVar17);
      auVar14 = _sqc2(auVar15);
      auVar11 = _vsubbc(in_vf0,in_vf0);
      auVar15 = _vmul(auVar13,auVar15);
      _vaddabc(auVar15,auVar15);
      auVar10 = _vmaddbc(auVar16,auVar15);
      auVar15 = _sqc2(auVar13);
      auVar11 = _vmax(auVar10,auVar11);
      auVar10 = _sqc2(auVar16);
      auVar11 = _vminibc(auVar11,in_vf0);
      auVar11 = _qmfc2(auVar11._0_4_);
      fVar9 = (float)acosf(auVar11._0_4_,param_3);
      auVar15 = _lqc2(auVar15);
      auVar14 = _lqc2(auVar14);
      _vopmula(auVar15,auVar14);
      auVar15 = _vopmsub(auVar14,auVar15);
      auVar14._4_4_ = uVar3;
      auVar14._0_4_ = uVar2;
      auVar14._8_4_ = uVar4;
      auVar14._12_4_ = uVar5;
      auVar14 = _lqc2(auVar14);
      auVar14 = _vmul(auVar15,auVar14);
      auVar15 = _lqc2(auVar10);
      _vaddabc(auVar14,auVar14);
      auVar14 = _vmaddbc(auVar15,auVar14);
      auVar14 = _qmfc2(auVar14._0_4_);
      fVar9 = fVar9 * 57.29578;
      if (0.0 < auVar14._0_4_) {
        fVar9 = -fVar9;
      }
      if ((135.0 < fVar9) || (fVar9 < -135.0)) {
        uVar7 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a58;
      }
      else if (fVar9 < -45.0) {
        uVar7 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a60;
      }
      else if (45.0 < fVar9) {
        uVar7 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a68;
      }
      else {
        uVar7 = FUN_00137ae0(param_3);
        uVar8 = 0x3f6a70;
      }
      FUN_001ab1c0(param_1,param_2,iVar6 + 0x3b9,uVar7,uVar8,param_3);
      return;
    }
  }
  uVar7 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,iVar6 + 0x3b9,uVar7,0x3f6a40,param_3);
  return;
}


// ==== FUN_001a8d50 @ 001a8d50 ====

/* Strings referenciadas:
     "S_721"
     "S_720" */

void FUN_001a8d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  iVar1 = *(int *)(iVar4 + 0x26c);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(iVar1 + (uint)*(byte *)(iVar1 + 0x19) * 4 + 0xc) != 0;
  }
  if (!bVar2) {
    if (param_4 == 0) {
      uVar3 = FUN_00137ae0(param_3);
      FUN_001aaf10(param_1,param_2,iVar4 + 0x3b9,uVar3,0x3f6a80,0x40d9c8,param_3);
    }
    else {
      uVar3 = FUN_00137ae0(param_3);
      FUN_001aaf10(param_1,param_2,iVar4 + 0x3b9,uVar3,0x3f6a78,0x40d9c8,param_3);
    }
  }
  return;
}


// ==== FUN_001a8e30 @ 001a8e30 ====
// GLOBAL DAT_00414d54 int

/* Strings referenciadas:
     "S_100"
     "U_SHO" */

void FUN_001a8e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(char *)param_1 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(char *)param_1 * 4 + DAT_00414d54);
  }
  if (iVar2 == 10) {
    uVar1 = FUN_00137ae0(param_3);
    FUN_001aaf10(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6a88,0x40d9c8,param_3);
  }
  else {
    uVar1 = FUN_00137ae0(param_3);
    FUN_001aaf10(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6a90,0x3f6a88,param_3);
  }
  return;
}


// ==== FUN_001a8f10 @ 001a8f10 ====

/* Strings referenciadas:
     "U_101" */

void FUN_001a8f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001aaf10(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6a98,0x40d9c8,param_3);
  return;
}


// ==== FUN_001a8f78 @ 001a8f78 ====
// GLOBAL DAT_003bd154 float
// GLOBAL DAT_004158d8 uint
// GLOBAL DAT_004158dc int
// GLOBAL DAT_003f6b10 undefined8
// GLOBAL DAT_003f6b18 undefined4
// GLOBAL DAT_003f6b20 undefined8
// GLOBAL DAT_003f6b28 undefined4
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL PTR_DAT_003bd140 undefined_*
// GLOBAL PTR_s_S_540_003bd020 undefined_*
// GLOBAL PTR_s_S_570_003bd050 undefined_*
// GLOBAL PTR_s_S_560_003bd080 undefined_*

/* Strings referenciadas:
     "S_571"
     "S_560"
     "S_561"
     "SK_DF_S_490"
     "S_351"
     "S_350"
     "S_356"
     "S_322"
     "S_377"
     "S_471"
     "S_476"
     "S_330"
     ... */

void FUN_001a8f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined1 in_vf0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  iVar5 = FUN_00135550(param_3);
  auVar16 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xb0));
  auVar18 = _vaddbc(in_vf0,in_vf0);
  auVar17 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar5 + 0x7c) + 0xf0));
  auVar16 = _vmul(auVar16,auVar17);
  _vaddabc(auVar16,auVar16);
  auVar16 = _vmaddbc(auVar18,auVar16);
  auVar16 = _qmfc2(auVar16._0_4_);
  bVar2 = 0.0 <= auVar16._0_4_;
  iVar13 = (int)param_3;
  iVar10 = *(int *)(iVar13 + 0x39c);
  cVar15 = *(char *)(iVar13 + 0x3aa);
  if ((iVar10 == 0x26) && (lVar8 = stricmp(0x3f6aa0,*(int *)(iVar13 + 0x330) + 0x5c), lVar8 == 0)) {
    cVar15 = '\x01';
    iVar6 = FUN_00135550(param_3);
    *(undefined1 *)(iVar6 + 0x30) = 1;
    FUN_00135578(param_3,1);
  }
  uVar9 = FUN_00136b30(DAT_0040f4d0 + 0x30);
  iVar6 = FUN_0015d248(DAT_0040f4e0,uVar9,0);
  uVar4 = DAT_003f6b28;
  uVar3 = DAT_003f6b18;
  bVar1 = *(int *)(iVar6 + 0x94) == 2;
  if (!bVar1) {
    if (*(float *)(iVar5 + 0xc4) < DAT_003bd154) {
      bVar1 = true;
    }
    else if (*(float *)(iVar5 + 0xc4) < DAT_003bd154 + DAT_003bd154) {
      DAT_004158d8 = DAT_004158d8 * 0x10000 + ((int)DAT_004158d8 >> 0x10) + DAT_004158dc;
      DAT_004158dc = DAT_004158dc + DAT_004158d8;
      bVar1 = 0.5 <= (float)DAT_004158d8 * 2.3283064e-10;
    }
  }
  switch(param_4) {
  case 1:
    if (iVar10 == 0x28) {
      if (bVar2) {
        pcVar11 = "S_571";
      }
      else if (*(int *)(iVar5 + 200) == 0) {
        pcVar11 = "S_560";
      }
      else {
        pcVar11 = "S_561";
      }
    }
    else {
      if ((!bVar1) || (bVar2)) {
        if (cVar15 != '\0') {
          uVar9 = FUN_00137ae0(param_3);
          uVar12 = 0x3f6b08;
          break;
        }
        if (bVar2) {
          iVar10 = *(int *)(iVar5 + 200);
          ppuVar7 = &PTR_s_S_570_003bd050;
        }
        else {
          iVar10 = *(int *)(iVar5 + 200);
          ppuVar7 = &PTR_s_S_540_003bd020;
        }
      }
      else {
        if (cVar15 != '\0') {
          uVar9 = FUN_00137ae0(param_3);
          uVar12 = 0x3f6b00;
          break;
        }
        iVar10 = *(int *)(iVar5 + 200);
        ppuVar7 = &PTR_s_S_560_003bd080;
      }
      pcVar11 = ppuVar7[iVar10];
    }
    FUN_001aaf10(param_1,param_2,iVar13 + 0x3b9,PTR_DAT_003bd140,pcVar11,0x3f68e0,param_3);
    return;
  case 2:
    if (bVar2) {
      uVar9 = FUN_00137ae0(param_3);
      uVar12 = 0x3f6ab8;
    }
    else {
      uVar9 = FUN_00137ae0(param_3);
      uVar12 = 0x3f6ab0;
    }
    break;
  case 3:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ac0;
    break;
  case 4:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ad0;
    break;
  case 5:
  case 8:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ad0;
    break;
  case 6:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ad8;
    break;
  case 7:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ae0;
    break;
  case 9:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ae8;
    break;
  case 10:
    if (*(int *)(iVar5 + 200) - 7U < 4) {
      if (bVar2) {
        uVar9 = FUN_00137ae0(param_3);
        uVar12 = 0x3f6af8;
      }
      else {
        uVar9 = FUN_00137ae0(param_3);
        uVar12 = 0x3f6af0;
      }
    }
    else if (bVar2) {
      uVar9 = FUN_00137ae0(param_3);
      uVar12 = 0x3f6ab8;
    }
    else {
      uVar9 = FUN_00137ae0(param_3);
      uVar12 = 0x3f6ab0;
    }
    break;
  case 0xb:
    uVar9 = FUN_00137ae0(param_3);
    uVar12 = 0x3f6ac8;
    break;
  default:
    puVar14 = (undefined8 *)param_2;
    if (cVar15 != '\0') {
      *puVar14 = DAT_003f6b10;
      *(undefined4 *)(puVar14 + 1) = uVar3;
      return;
    }
    *puVar14 = DAT_003f6b20;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    return;
  }
  FUN_001aaf10(param_1,param_2,iVar13 + 0x3b9,uVar9,uVar12,0x3f68e0,param_3);
  return;
}


// ==== FUN_001a9538 @ 001a9538 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL PTR_DAT_003bd140 undefined_*

/* Strings referenciadas:
     "S_501"
     "S_511"
     "S_591"
     "S_490"
     "C_520"
     "S_469"
     "S_115"
     "S_520"
     "S_530"
     "C_591" */

void FUN_001a9538(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,ulong param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (int)param_4;
  iVar1 = *(int *)(iVar5 + 0x39c);
  if (param_7 == 0x2a) {
    uVar2 = FUN_00137ae0(param_4);
    uVar4 = 0x3f6b60;
    goto LAB_001a97cc;
  }
  if (param_7 == 0x2b) {
    if (*(char *)(iVar5 + 0x3aa) == '\0') {
      uVar2 = FUN_00137ae0(param_4);
      uVar4 = 0x3f6b70;
      goto LAB_001a97cc;
    }
  }
  else {
    if (((iVar1 == 0x13) || (iVar1 == 0x28)) || (iVar1 == 0x2a)) {
      if ((param_6 & 0xff) == 0xff) {
        uVar2 = FUN_00137ae0(param_4);
        uVar4 = 0x3f6b78;
        goto LAB_001a97cc;
      }
      if (iVar1 != 0x2a) {
        if (param_5 == 0) {
          uVar2 = FUN_00137ae0(param_4);
          uVar4 = 0x3f6b88;
        }
        else {
          uVar2 = FUN_00137ae0(param_4);
          uVar4 = 0x3f6b80;
        }
        goto LAB_001a97cc;
      }
    }
    if ((param_6 & 0xff) == 0xff) {
      param_6 = 1;
    }
    uVar2 = FUN_00136b30(DAT_0040f4d0 + 0x30);
    FUN_0015d248(DAT_0040f4e0,uVar2,0);
    if ((param_6 == 7) || (uVar3 = param_6, param_6 == 9)) {
      iVar1 = FUN_0015d210(DAT_0040f4e0,uVar2);
      uVar3 = 1;
      if (*(char *)(*(int *)(iVar1 + 0xc) + 0x15) == '\0') {
        uVar3 = param_6;
      }
    }
    if (*(char *)(iVar5 + 0x3aa) == '\0') {
      if (param_5 == 0) {
        iVar1 = 0x3bcff0;
      }
      else {
        fVar6 = (*(float *)(iVar5 + 0x2f8) * 0.3) / 100.0;
        if (param_1 <= fVar6) {
          iVar1 = 0x3bd0b0;
        }
        else if ((param_1 <= fVar6) || ((*(float *)(iVar5 + 0x2f8) * 0.5) / 100.0 < param_1)) {
          iVar1 = 0x3bcfc0;
        }
        else {
          iVar1 = 0x3bcfc0;
        }
      }
      FUN_001aaf10(param_2,param_3,iVar5 + 0x3b9,PTR_DAT_003bd140,
                   *(undefined4 *)((int)uVar3 * 4 + iVar1),0x3f6900,param_4);
      return;
    }
    if (param_1 <= (*(float *)(iVar5 + 0x2f8) * 0.3) / 100.0) {
      uVar2 = FUN_00137ae0(param_4);
      FUN_001ab1c0(param_2,param_3,iVar5 + 0x3b9,uVar2,0x3f6b90,param_4);
    }
    if ((param_1 <= (*(float *)(iVar5 + 0x2f8) * 0.3) / 100.0) ||
       ((*(float *)(iVar5 + 0x2f8) * 0.5) / 100.0 < param_1)) {
      uVar2 = FUN_00137ae0(param_4);
      FUN_001aaf10(param_2,param_3,iVar5 + 0x3b9,uVar2,0x3f6b68,0x3f6b90,param_4);
      return;
    }
  }
  uVar2 = FUN_00137ae0(param_4);
  uVar4 = 0x3f6b68;
LAB_001a97cc:
  FUN_001ab1c0(param_2,param_3,iVar5 + 0x3b9,uVar2,uVar4,param_4);
  return;
}


// ==== FUN_001a9908 @ 001a9908 ====
// GLOBAL DAT_003f6bf8 float
// GLOBAL PTR_DAT_003bd140 undefined_*

/* Strings referenciadas:
     "C_160"
     "C_161"
     "S_155"
     "S_157"
     "S_161"
     "S_156"
     "S_158"
     "S_160"
     "S_150"
     "S_151"
     "S_163"
     "S_162" */

void FUN_001a9908(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = (int)param_4;
  iVar3 = *(int *)(iVar6 + 0x26c);
  if (iVar3 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(iVar3 + (uint)*(byte *)(iVar3 + 0x19) * 4 + 0xc) != 0;
  }
  if (bVar2) {
    return;
  }
  iVar3 = FUN_00135550(param_4);
  if (param_1 < 0.0) {
    param_1 = -(-param_1 - (float)(int)(-param_1 / 360.0) * 360.0);
  }
  else {
    param_1 = param_1 - (float)(int)(param_1 / 360.0) * 360.0;
  }
  if (param_1 < -180.0) {
    param_1 = param_1 + 360.0;
LAB_001a9a4c:
    cVar1 = *(char *)(iVar3 + 0x30);
  }
  else {
    if (180.0 < param_1) {
      param_1 = param_1 - 360.0;
      goto LAB_001a9a4c;
    }
    cVar1 = *(char *)(iVar3 + 0x30);
  }
  if (cVar1 != '\0') {
    if (param_1 < DAT_003f6bf8) {
      pcVar4 = "C_160";
    }
    else {
      pcVar4 = "C_161";
    }
    FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,pcVar4,param_4);
    return;
  }
  if (*(char *)(iVar3 + 0x3a) == '\0') {
    if (param_1 < -115.0) {
      FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6be8,param_4);
      param_1 = param_1 * 1.0714;
      goto LAB_001a9e60;
    }
    if (param_1 < DAT_003f6bf8) {
      uVar5 = 0x3f6be8;
    }
    else {
      if (115.0 < param_1) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bf0,param_4);
        param_1 = param_1 * 1.0714;
        goto LAB_001a9e60;
      }
      uVar5 = 0x3f6bf0;
    }
  }
  else {
    if (param_5 != 0) {
      uVar7 = 0;
      bVar2 = false;
      if (param_1 < -120.0) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6ba8,param_4);
        uVar7 = 0xc3203ae1;
        bVar2 = true;
      }
      else if (param_1 < -55.0) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bb0,param_4);
        uVar7 = 0xc2740000;
        bVar2 = true;
      }
      else if (param_1 < DAT_003f6bf8) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bb8,param_4);
      }
      else if (120.0 < param_1) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bc0,param_4);
        uVar7 = 0x433e0419;
        bVar2 = true;
      }
      else if (55.0 < param_1) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bc8,param_4);
        uVar7 = 0x42ca6666;
        bVar2 = true;
      }
      else {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bd0,param_4);
      }
      if (!bVar2) {
        return;
      }
      if (*(int *)(iVar3 + 0x80) != 1) {
        return;
      }
      *(undefined4 *)(iVar3 + 0x6bc) = uVar7;
      return;
    }
    if (param_1 < -115.0) {
      FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6bd8,param_4);
      param_1 = param_1 * 1.0714;
      goto LAB_001a9e60;
    }
    if (param_1 < DAT_003f6bf8) {
      uVar5 = 0x3f6bb8;
    }
    else {
      if (115.0 < param_1) {
        FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,0x3f6be0,param_4);
        param_1 = param_1 * 1.0714;
        goto LAB_001a9e60;
      }
      uVar5 = 0x3f6bd0;
    }
  }
  FUN_001ab1c0(param_2,param_3,iVar6 + 0x3b9,PTR_DAT_003bd140,uVar5,param_4);
  param_1 = param_1 * 1.6667;
LAB_001a9e60:
  if (*(int *)(iVar3 + 0x80) == 1) {
    *(float *)(iVar3 + 0x6c0) = ABS(param_1);
  }
  return;
}


// ==== FUN_001a9ea0 @ 001a9ea0 ====

undefined8 FUN_001a9ea0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_0028bf90();
  }
  return uVar1;
}


// ==== FUN_001a9ed0 @ 001a9ed0 ====
// GLOBAL DAT_004432d0 undefined
// GLOBAL DAT_004432c0 undefined4
// GLOBAL DAT_004432c4 undefined4
// GLOBAL DAT_004432c8 undefined4
// GLOBAL DAT_004432cc undefined4
// GLOBAL PTR_DAT_003bd140 undefined_*

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "S_701"
     "C_701"
     "S_731"
     "C_731" */

void FUN_001a9ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  
  pfVar5 = (float *)FUN_00135550(param_3);
  uVar4 = DAT_004432cc;
  uVar3 = DAT_004432c8;
  uVar2 = DAT_004432c4;
  uVar1 = DAT_004432c0;
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _sqc2(auVar11);
  iVar8 = (int)param_3;
  auVar12 = _lqc2(*(undefined1 (*) [16])(iVar8 + 0xa0));
  auVar14 = _lqc2(_DAT_004432d0);
  auVar16 = _vaddbc(in_vf0,in_vf0);
  auVar15 = _lqc2(*(undefined1 (*) [16])(pfVar5 + 0x7ec));
  auVar13 = _vmul(auVar14,auVar14);
  auVar15 = _vsub(auVar15,auVar12);
  _vaddabc(auVar13,auVar13);
  auVar13 = _vmaddbc(auVar16,auVar13);
  auVar12 = _vmul(auVar15,auVar15);
  auVar15 = _vmove(auVar15);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar16,auVar12);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar12);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  uVar17 = _vwaitq();
  auVar16 = _vmulq(auVar15,uVar17);
  _vmulq(auVar12,uVar17);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar13);
  auVar12 = _vaddbc(in_vf0,in_vf0);
  uVar17 = _vwaitq();
  auVar14 = _vmulq(auVar14,uVar17);
  _vmulq(auVar12,uVar17);
  auVar12 = _vmul(auVar16,auVar14);
  auVar13 = _lqc2(auVar11);
  _vaddabc(auVar12,auVar12);
  auVar12 = _vmaddbc(auVar13,auVar12);
  auVar13 = _vsubbc(in_vf0,in_vf0);
  fVar10 = pfVar5[0x7e8];
  auVar12 = _vmax(auVar12,auVar13);
  auVar12 = _vminibc(auVar12,in_vf0);
  auVar15 = _qmfc2(auVar12._0_4_);
  auVar12 = _sqc2(auVar16);
  auVar13 = _sqc2(auVar14);
  fVar9 = (float)acosf(auVar15._0_4_);
  auVar13 = _lqc2(auVar13);
  auVar12 = _lqc2(auVar12);
  _vopmula(auVar12,auVar13);
  auVar13 = _vopmsub(auVar13,auVar12);
  auVar12._4_4_ = uVar2;
  auVar12._0_4_ = uVar1;
  auVar12._8_4_ = uVar3;
  auVar12._12_4_ = uVar4;
  auVar12 = _lqc2(auVar12);
  auVar12 = _vmul(auVar13,auVar12);
  auVar11 = _lqc2(auVar11);
  _vaddabc(auVar12,auVar12);
  auVar11 = _vmaddbc(auVar11,auVar12);
  auVar11 = _qmfc2(auVar11._0_4_);
  fVar9 = fVar9 * 57.29578;
  if (0.0 < auVar11._0_4_) {
    fVar9 = -fVar9;
  }
  fVar9 = fVar9 - *pfVar5;
  if (fVar9 < 0.0) {
    fVar9 = -(-fVar9 - (float)(int)(-fVar9 / 360.0) * 360.0);
  }
  else {
    fVar9 = fVar9 - (float)(int)(fVar9 / 360.0) * 360.0;
  }
  if (fVar9 < -180.0) {
    fVar9 = fVar9 + 360.0;
  }
  else if (180.0 < fVar9) {
    fVar9 = fVar9 - 360.0;
  }
  if ((((fVar9 <= -45.0) || (iVar7 = 0, 45.0 <= fVar9)) &&
      ((fVar9 <= 45.0 || (iVar7 = 3, 135.0 <= fVar9)))) &&
     ((iVar7 = 1, -135.0 < fVar9 && (fVar9 < -45.0)))) {
    iVar7 = 2;
  }
  if (fVar10 <= 0.2) {
    if (*(char *)(pfVar5 + 0xc) == '\0') {
      FUN_001ab1c0(param_1,param_2,iVar8 + 0x3b9,PTR_DAT_003bd140,
                   *(undefined4 *)(iVar7 * 4 + 0x3bd110),param_3);
      return;
    }
    iVar6 = 0x3bd128;
  }
  else if (*(char *)(pfVar5 + 0xc) == '\0') {
    iVar6 = 0x3bd0e0;
  }
  else {
    iVar6 = 0x3bd0f8;
  }
  FUN_001ab1c0(param_1,param_2,iVar8 + 0x3b9,PTR_DAT_003bd140,*(undefined4 *)(iVar7 * 4 + iVar6),
               param_3);
  return;
}


// ==== FUN_001aa768 @ 001aa768 ====
// GLOBAL PTR_s_J_B_Hand_Loc_003bd160 pointer

/* Strings referenciadas:
     "J_B_Hand_Loc"
     "J_B_Breath_Loc" */

void FUN_001aa768(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **ppuVar5;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    *(undefined1 *)(param_1 + 0x54) = 1;
    puVar3 = (undefined4 *)(param_1 + 0x34);
    ppuVar5 = &PTR_s_J_B_Hand_Loc_003bd160;
    iVar4 = 7;
    do {
      puVar1 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      iVar4 = iVar4 + -1;
      uVar2 = FUN_00348b18(param_2,puVar1);
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar4);
  }
  return;
}


// ==== FUN_001aa7e8 @ 001aa7e8 ====

/* Strings referenciadas:
     "S_102" */

void FUN_001aa7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6de8,param_3);
  return;
}


// ==== FUN_001aa848 @ 001aa848 ====

/* Strings referenciadas:
     "S_103" */

void FUN_001aa848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6df0,param_3);
  return;
}


// ==== FUN_001aa8a8 @ 001aa8a8 ====

/* Strings referenciadas:
     "S_102" */

void FUN_001aa8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6de8,param_3);
  return;
}


// ==== FUN_001aa908 @ 001aa908 ====

/* Strings referenciadas:
     "S_104" */

void FUN_001aa908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6df8,param_3);
  return;
}


// ==== FUN_001aa968 @ 001aa968 ====

/* Strings referenciadas:
     "S_105" */

void FUN_001aa968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6e00,param_3);
  return;
}


// ==== FUN_001aa9d8 @ 001aa9d8 ====
// GLOBAL DAT_003f6e08 undefined2
// GLOBAL DAT_003f6e0a undefined1
// GLOBAL PTR_DAT_003bd14c undefined_*
// GLOBAL PTR_DAT_003bd150 undefined_*
// GLOBAL PTR_DAT_003bd140 undefined_*

void FUN_001aa9d8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  
  FUN_00135550(param_4);
  if (param_1 < 0.0) {
    param_1 = -(-param_1 - (float)(int)(-param_1 / 360.0) * 360.0);
  }
  else {
    param_1 = param_1 - (float)(int)(param_1 / 360.0) * 360.0;
  }
  if (param_1 < -180.0) {
    param_1 = param_1 + 360.0;
  }
  else if (180.0 < param_1) {
    param_1 = param_1 - 360.0;
  }
  uStack_a0 = DAT_003f6e08;
  uStack_9e = DAT_003f6e0a;
  if (param_5 == 0x1f) {
    FUN_0035c7a4(&uStack_a0,PTR_DAT_003bd14c);
  }
  else {
    if (param_5 != 0x20) {
      if (param_5 == 0x21) {
        FUN_0035c7a4(&uStack_a0,0x3f6e10);
        puVar1 = PTR_DAT_003bd140;
      }
      else {
        if (param_5 != 0x22) {
          return;
        }
        FUN_0035c7a4(&uStack_a0,0x3f6e18);
        puVar1 = (undefined *)FUN_00137ae0(param_4);
      }
      FUN_001ab1c0(param_2,param_3,(int)param_4 + 0x3b9,puVar1,&uStack_a0,param_4);
      return;
    }
    FUN_0035c7a4(&uStack_a0,PTR_DAT_003bd150);
  }
  if ((param_1 < -45.0) || (45.0 <= param_1)) {
    if ((param_1 < 45.0) || (135.0 <= param_1)) {
      if ((param_1 < -135.0) || (-45.0 <= param_1)) {
        FUN_0035c7a4(&uStack_a0,0x40d9e8);
      }
      else {
        FUN_0035c7a4(&uStack_a0,0x40d9e0);
      }
    }
    else {
      FUN_0035c7a4(&uStack_a0,0x40d9d8);
    }
  }
  else {
    FUN_0035c7a4(&uStack_a0,0x40d9d0);
  }
  uVar2 = FUN_00137ae0(param_4);
  FUN_001ab1c0(param_2,param_3,(int)param_4 + 0x3b9,uVar2,&uStack_a0,param_4);
  return;
}


// ==== FUN_001aacf8 @ 001aacf8 ====
// GLOBAL DAT_003f6e20 undefined4
// GLOBAL DAT_003f6e28 undefined4

void FUN_001aacf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  
  if (param_4 == 0) {
    puVar2 = &DAT_003f6e28;
    uStack_90 = DAT_003f6e28;
  }
  else {
    puVar2 = &DAT_003f6e20;
    uStack_90 = DAT_003f6e20;
  }
  uStack_8c = *(undefined2 *)(puVar2 + 1);
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,&uStack_90,param_3);
  return;
}


// ==== FUN_001aad90 @ 001aad90 ====

/* Strings referenciadas:
     "S_111" */

void FUN_001aad90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6e30,param_3);
  return;
}


// ==== FUN_001aadf0 @ 001aadf0 ====

/* Strings referenciadas:
     "S_750" */

void FUN_001aadf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6e38,param_3);
  return;
}


// ==== FUN_001aae50 @ 001aae50 ====

/* Strings referenciadas:
     "U_745" */

void FUN_001aae50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6e40,param_3);
  return;
}


// ==== FUN_001aaeb0 @ 001aaeb0 ====

/* Strings referenciadas:
     "S_650" */

void FUN_001aaeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00137ae0(param_3);
  FUN_001ab1c0(param_1,param_2,(int)param_3 + 0x3b9,uVar1,0x3f6e48,param_3);
  return;
}


// ==== FUN_001aaf10 @ 001aaf10 ====
// GLOBAL PTR_DAT_003bd13c undefined_*
// GLOBAL PTR_DAT_003bd140 undefined_*
// GLOBAL PTR_DAT_003bd144 undefined_*
// GLOBAL DAT_0040d9c8 undefined1

void FUN_001aaf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)param_6;
  lVar5 = stricmp(param_6,0x40d9c8);
  bVar2 = lVar5 != 0;
  lVar5 = stricmp(PTR_DAT_003bd13c,param_3);
  bVar3 = lVar5 != 0;
  puVar1 = PTR_DAT_003bd144;
  if (!bVar3) {
    puVar1 = PTR_DAT_003bd140;
  }
  lVar5 = stricmp(puVar1,param_4);
  lVar6 = FUN_001ab338(param_1,param_2,param_3,param_4,param_5,param_7);
  if ((lVar6 == 0) &&
     ((!bVar2 || (lVar6 = FUN_001ab338(param_1,param_2,param_3,param_4,uVar7,param_7), lVar6 == 0)))
     ) {
    if (lVar5 != 0) {
      if (bVar3) {
        lVar5 = FUN_001ab338(param_1,param_2,param_3,PTR_DAT_003bd144,param_5,param_7);
        puVar1 = PTR_DAT_003bd144;
      }
      else {
        lVar5 = FUN_001ab338(param_1,param_2,param_3,PTR_DAT_003bd140,param_5,param_7);
        puVar1 = PTR_DAT_003bd140;
      }
      if (lVar5 != 0) {
        return;
      }
      if ((bVar2) &&
         (lVar5 = FUN_001ab338(param_1,param_2,param_3,puVar1,uVar7,param_7), lVar5 != 0)) {
        return;
      }
    }
    iVar4 = (int)param_7;
    if (bVar3) {
      if (bVar2) {
        lVar5 = FUN_001ab338(param_1,param_2,PTR_DAT_003bd13c,param_4,param_5,param_7);
        if (lVar5 != 0) {
          return;
        }
        lVar5 = FUN_001ab338(param_1,param_2,PTR_DAT_003bd13c,param_4,uVar7,param_7);
        if (lVar5 != 0) {
          return;
        }
        lVar5 = FUN_001ab338(param_1,param_2,PTR_DAT_003bd13c,PTR_DAT_003bd140,param_5,param_7);
        if (lVar5 != 0) {
          return;
        }
        iVar4 = *(int *)(iVar4 + 0x3a4);
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x3a4);
      }
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x3a4);
    }
    if ((iVar4 != 0) ||
       (lVar5 = FUN_001ab338(param_1,param_2,PTR_DAT_003bd13c,PTR_DAT_003bd140,param_5,param_7),
       lVar5 == 0)) {
      if (bVar2) {
        strcpy(param_2,PTR_DAT_003bd13c);
        FUN_0035c7a4(param_2,PTR_DAT_003bd140);
        FUN_0035c7a4(param_2,uVar7);
      }
      else {
        *(undefined1 *)param_2 = DAT_0040d9c8;
      }
    }
  }
  return;
}


// ==== FUN_001ab1c0 @ 001ab1c0 ====
// GLOBAL PTR_DAT_003bd13c undefined_*
// GLOBAL PTR_DAT_003bd140 undefined_*
// GLOBAL PTR_DAT_003bd144 undefined_*

void FUN_001ab1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = stricmp(PTR_DAT_003bd13c,param_3);
  bVar2 = lVar3 == 0;
  puVar1 = PTR_DAT_003bd144;
  if (bVar2) {
    puVar1 = PTR_DAT_003bd140;
  }
  lVar3 = stricmp(puVar1,param_4);
  lVar4 = FUN_001ab338(param_1,param_2,param_3,param_4,param_5,param_6);
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      puVar1 = PTR_DAT_003bd144;
      if (bVar2) {
        puVar1 = PTR_DAT_003bd140;
      }
      lVar3 = FUN_001ab338(param_1,param_2,param_3,puVar1,param_5,param_6);
      if (lVar3 != 0) {
        return;
      }
    }
    if ((bVar2) ||
       (lVar3 = FUN_001ab338(param_1,param_2,PTR_DAT_003bd13c,param_4,param_5,param_6), lVar3 == 0))
    {
      strcpy(param_2,PTR_DAT_003bd13c);
      FUN_0035c7a4(param_2,PTR_DAT_003bd140);
      FUN_0035c7a4(param_2,param_5);
    }
  }
  return;
}


// ==== FUN_001ab338 @ 001ab338 ====

bool FUN_001ab338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  long lVar1;
  undefined1 auStack_60 [16];
  
  strcpy(param_2,param_3);
  FUN_0035c7a4(param_2,param_4);
  FUN_0035c7a4(param_2,param_5);
  lVar1 = FUN_00345f28(param_2,*(undefined4 *)(*(int *)(param_6 + 0x330) + 0x54),auStack_60);
  return lVar1 == 1;
}


// ==== FUN_001ab3c0 @ 001ab3c0 ====

void FUN_001ab3c0(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  return;
}


// ==== FUN_001ab3e0 @ 001ab3e0 ====

undefined4 FUN_001ab3e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar2 = 7;
    puVar1 = (undefined4 *)(param_1 + 0x1c);
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return 1;
}


// ==== FUN_001ab428 @ 001ab428 ====
// GLOBAL DAT_003bcfb4 int
// GLOBAL DAT_003d1cd4 int

void FUN_001ab428(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 in_v0_udw;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_v1_udw;
  undefined1 auVar4 [16];
  undefined8 in_a1_udw;
  
  auVar2._0_8_ = (long)*(int *)(param_1 + 0x44);
  auVar2._8_8_ = in_v0_udw;
  auVar3._8_8_ = in_a1_udw;
  auVar3._0_8_ = (long)DAT_003bcfb4;
  auVar3 = _pmaxw(auVar2,auVar3);
  auVar4._0_8_ = (long)*(int *)(param_1 + 0x50);
  auVar4._8_8_ = in_v1_udw;
  auVar3 = _pextlw(0,auVar3._0_8_);
  *(int *)(param_1 + 0x44) = auVar3._0_4_;
  auVar1._8_8_ = in_a1_udw;
  auVar1._0_8_ = (long)DAT_003d1cd4;
  auVar3 = _pmaxw(auVar4,auVar1);
  auVar3 = _pextlw(0,auVar3._0_8_);
  *(int *)(param_1 + 0x50) = auVar3._0_4_;
  DAT_003bcfb4 = 0;
  DAT_003d1cd4 = 0;
  return;
}


// ==== FUN_001ab468 @ 001ab468 ====
// GLOBAL DAT_004432c0 undefined
// GLOBAL DAT_0040f0e4 undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "%s / %s" */

void FUN_001ab468(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_130 [256];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
  auVar1 = _lqc2(_DAT_004432c0);
  auVar1 = _vadd(auVar2,auVar1);
  auStack_20 = _sqc2(auVar1);
  FUN_00369ff0(auStack_130,0x100,0x3f6e50,*(int *)(param_2 + 0x330) + 0x5c,
               *(int *)(param_2 + 0x330) + 0x69);
  uStack_30 = 0x3f000000;
  uStack_2c = 0x3f000000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  FUN_001014e8(0x41800000,0,DAT_0040f0e4,auStack_20._0_8_,auStack_130,0x3f0000003f000000);
  return;
}


// ==== FUN_001ab500 @ 001ab500 ====
// GLOBAL DAT_003bcfb4 undefined4
// GLOBAL DAT_003d1cd4 undefined4
// GLOBAL DAT_0040f514 int

/* Strings referenciadas:
     "  CBkActor::Update"
     "  Blackadder DecodeFrame" */

void FUN_001ab500(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x42) != '\0') {
    *(undefined4 *)(iVar3 + 0x28) = 0xc;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(iVar3 + 0x34) = 0x3f4ccccd;
    *(undefined4 *)(iVar3 + 0x38) = 0x3ecccccd;
    *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
    FUN_00266088();
    FUN_00268250(0);
    FUN_001ab6c0(param_1,0x3f6e58);
    FUN_001ab6c0(param_1,0x3f6e70);
    *(undefined4 *)(iVar3 + 0x28) = 0xc;
    *(undefined4 *)(iVar3 + 0x2c) = 0x10;
    FUN_001ab6c0(param_1,0x3f6e90,DAT_003bcfb4);
    FUN_001ab6c0(param_1,0x3f6e90,DAT_003d1cd4);
    *(undefined4 *)(iVar3 + 0x28) = 0xc;
    *(undefined4 *)(iVar3 + 0x2c) = 0x14;
    FUN_001ab6c0(param_1,0x3f6e90,*(undefined4 *)(iVar3 + 0x44));
    FUN_001ab6c0(param_1,0x3f6e90,*(undefined4 *)(iVar3 + 0x50));
    FUN_002662a8();
  }
  iVar1 = DAT_0040f514;
  if (*(char *)(iVar3 + 0x41) != '\0') {
    iVar3 = 0;
    if (0 < *(int *)(DAT_0040f514 + 0x79a4)) {
      iVar2 = *(int *)(DAT_0040f514 + 0x79ac);
      while( true ) {
        if (*(int *)(iVar3 * 4 + iVar2) == 0) {
          iVar2 = *(int *)(iVar1 + 0x79a4);
        }
        else {
          FUN_001ab468(param_1);
          iVar2 = *(int *)(iVar1 + 0x79a4);
        }
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) break;
        iVar2 = *(int *)(iVar1 + 0x79ac);
      }
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x79b4)) {
      iVar2 = *(int *)(iVar1 + 0x79bc);
      while( true ) {
        if (*(int *)(iVar3 * 4 + iVar2) == 0) {
          iVar2 = *(int *)(iVar1 + 0x79b4);
        }
        else {
          FUN_001ab468(param_1);
          iVar2 = *(int *)(iVar1 + 0x79b4);
        }
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) break;
        iVar2 = *(int *)(iVar1 + 0x79bc);
      }
    }
  }
  return;
}


// ==== FUN_001ab6c0 @ 001ab6c0 ====
// GLOBAL DAT_0040f0e4 undefined4

void FUN_001ab6c0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_190 [256];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  uStack_10 = param_7;
  uStack_8 = param_8;
  FUN_00369fb8(auStack_190,0x100,param_2,&uStack_30);
  FUN_0027c370((float)*(int *)(param_1 + 0x2c) * 16.0,(float)*(int *)(param_1 + 0x28) * 16.0,
               0x41800000,DAT_0040f0e4,auStack_190,*(undefined8 *)(param_1 + 0x30));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}


// ==== FUN_001ab760 @ 001ab760 ====

void FUN_001ab760(void)

{
  return;
}


// ==== FUN_001ab768 @ 001ab768 ====

void FUN_001ab768(void)

{
  return;
}


// ==== FUN_001ab780 @ 001ab780 ====
// GLOBAL LAB_001ac050 undefined
// GLOBAL LAB_001ac0c8 undefined
// GLOBAL LAB_001ac0d0 undefined
// GLOBAL FUN_001ac070 undefined
// GLOBAL FUN_001ac0e0 undefined
// GLOBAL FUN_00158ae0 undefined

void FUN_001ab780(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = 0x20;
  iVar11 = (int)param_1;
  iVar12 = iVar11 + 0x920;
  iVar13 = iVar11 + 0x8f0;
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,6,0);
  iVar2 = FUN_00107d20(0x4a40);
  iVar9 = iVar2;
  do {
    FUN_00343fc8(iVar9 + 0x10);
    iVar9 = iVar9 + 0x240;
    iVar10 = iVar10 + -1;
    iVar3 = 9;
    do {
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
    for (iVar3 = 9; iVar3 != -1; iVar3 = iVar3 + -1) {
    }
  } while (iVar10 != -1);
  *(undefined4 *)(iVar11 + 100) = 0;
  *(undefined4 *)(iVar11 + 0x60) = 1;
  piVar8 = (int *)(iVar11 + 0xf0);
  *(undefined4 *)(iVar11 + 0x68) = 0;
  iVar2 = iVar2 + 0x4800;
  *(undefined4 *)(iVar11 + 0x6c) = 0;
  iVar9 = 0x20;
  do {
    *piVar8 = iVar2;
    iVar9 = iVar9 + -1;
    piVar8 = piVar8 + -1;
    iVar2 = iVar2 + -0x240;
  } while (-1 < iVar9);
  *(undefined4 *)(iVar11 + 0xf4) = 0;
  iVar9 = 0;
  FUN_00274e40(iVar12);
  uVar6 = FUN_00107d20(0xaee78);
  FUN_00274e68(iVar12,uVar6,0xaee78);
  FUN_00274f58(iVar12,0x10);
  FUN_001adf58(iVar13,*(undefined4 *)(iVar11 + 0x928),0x3f9a,0x2c);
  uVar4 = FUN_00107d20(0x20);
  *(undefined4 *)(iVar11 + 0x93c) = uVar4;
  do {
    iVar2 = iVar9 * 4;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar2 + *(int *)(iVar11 + 0x93c)) = 0;
  } while (iVar9 < 8);
  iVar9 = iVar11 + 0xf8;
  iVar2 = 6;
  do {
    iVar2 = iVar2 + -1;
    FUN_001a80f8(iVar9);
    iVar9 = iVar9 + 0x60;
  } while (-1 < iVar2);
  iVar10 = iVar11 + 0x470;
  iVar9 = iVar11 + 0x398;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + -1;
    FUN_001a80f8(iVar9);
    iVar9 = iVar9 + 0x6c;
    FUN_001a4ff0(iVar10,1);
    iVar10 = iVar10 + 0x240;
  } while (-1 < iVar2);
  puVar5 = (undefined4 *)(iVar11 + 0x96c);
  iVar9 = 9;
  do {
    *puVar5 = 0;
    iVar9 = iVar9 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar9);
  FUN_001ae088(iVar13,1);
  FUN_0034b460(iVar13,0x1abfa8);
  uVar6 = FUN_00107cf8(0x1044);
  uVar7 = FUN_00343f38();
  FUN_003420e8(uVar6,uVar7,0x10,0x2004);
  FUN_001ae088(iVar13,0);
  *(code **)(iVar11 + 0x950) = FUN_00158ae0;
  *(code **)(iVar11 + 0x968) = FUN_001ac070;
  *(undefined1 **)(iVar11 + 0x960) = &LAB_001ac0d0;
  *(code **)(iVar11 + 0x96c) = FUN_001ac0e0;
  *(undefined1 **)(iVar11 + 0x958) = &LAB_001ac050;
  *(undefined1 **)(iVar11 + 0x95c) = &LAB_001ac0c8;
  FUN_001aba98(param_1);
  FUN_00107b08(0x40f0f0,6,0);
  FUN_00107ab8(0x40f0f0,0,0);
  FUN_001ab3c0(param_1);
  return;
}


// ==== FUN_001aba98 @ 001aba98 ====
// GLOBAL DAT_0048f708 char_*
// GLOBAL DAT_0048f710 undefined_*
// GLOBAL DAT_0048f744 undefined_*
// GLOBAL DAT_0048f748 char_*
// GLOBAL DAT_0048f74c undefined_*
// GLOBAL DAT_0048f750 char_*
// GLOBAL FUN_001ac278 undefined
// GLOBAL DAT_0048f754 undefined_*
// GLOBAL FUN_001ac330 undefined
// GLOBAL DAT_0048f758 char_*
// GLOBAL FUN_001ac398 undefined
// GLOBAL DAT_0048f75c undefined_*
// GLOBAL FUN_001ac3f8 undefined
// GLOBAL DAT_0048f760 char_*
// GLOBAL FUN_001ac440 undefined
// GLOBAL DAT_0048f76c undefined1_*
// GLOBAL FUN_001ac4b8 undefined
// GLOBAL DAT_0048f714 undefined1_*
// GLOBAL FUN_001ac568 undefined
// GLOBAL DAT_0048f718 char_*
// GLOBAL FUN_001ac5b8 undefined
// GLOBAL DAT_0048f720 char_*
// GLOBAL DAT_0048f728 char_*
// GLOBAL DAT_0048f72c undefined_*
// GLOBAL DAT_0048f730 char_*
// GLOBAL DAT_0048f734 undefined_*
// GLOBAL DAT_0048f738 char_*
// GLOBAL DAT_0048f73c undefined_*
// GLOBAL DAT_0048f740 char_*
// GLOBAL DAT_0048f764 undefined_*
// GLOBAL DAT_0048f768 char_*
// GLOBAL DAT_0048f70c undefined4
// GLOBAL DAT_0048f71c undefined4
// GLOBAL DAT_0048f724 undefined4
// GLOBAL LAB_001ac268 undefined
// GLOBAL LAB_001ac648 undefined
// GLOBAL DAT_003f6f58 undefined

/* Strings referenciadas:
     "unknown"
     "false"
     "frame number"
     "player_move_rate"
     "player_direction"
     "crouching"
     "aim_pitch"
     "aim_bearing"
     "torso_pitch"
     "run_rate_multiplier"
     "cowering"
     "shot_on_air" */

void FUN_001aba98(void)

{
  DAT_0048f708 = "unknown";
  DAT_0048f710 = &DAT_003f6f58;
  DAT_0048f744 = FUN_001ac440;
  DAT_0048f748 = "aim_bearing";
  DAT_0048f74c = FUN_001ac4b8;
  DAT_0048f750 = "torso_pitch";
  DAT_0048f754 = FUN_001ac568;
  DAT_0048f758 = "run_rate_multiplier";
  DAT_0048f75c = FUN_001ac330;
  DAT_0048f760 = "cowering";
  DAT_0048f76c = &LAB_001ac648;
  DAT_0048f714 = &LAB_001ac268;
  DAT_0048f718 = "false";
  DAT_0048f720 = "frame number";
  DAT_0048f728 = "player_move_rate";
  DAT_0048f72c = FUN_001ac278;
  DAT_0048f730 = "player_direction";
  DAT_0048f734 = FUN_001ac398;
  DAT_0048f738 = "crouching";
  DAT_0048f73c = FUN_001ac3f8;
  DAT_0048f740 = "aim_pitch";
  DAT_0048f764 = FUN_001ac5b8;
  DAT_0048f768 = "shot_on_air";
  DAT_0048f70c = 0;
  DAT_0048f71c = 0;
  DAT_0048f724 = 0;
  FUN_00348a10(0x48f708,0xd);
  return;
}


// ==== FUN_001abc28 @ 001abc28 ====
// GLOBAL DAT_0040f4c4 int
// GLOBAL DAT_0040f514 int

/* Strings referenciadas:
     "chars\trans_ch.bin"
     "chars\trans_fp.bin" */

undefined4 FUN_001abc28(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
     (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar4 = (int)param_1;
    iVar3 = *(int *)(iVar4 + 0x60);
    if (iVar3 == 3) {
      FUN_001acac8(param_1,*(undefined4 *)(DAT_0040f514 + 0x8518),1);
      *(undefined4 *)(iVar4 + 0x60) = 0x1c;
      return 0;
    }
    if (iVar3 < 4) {
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          iVar3 = *(int *)(iVar4 + 0x6c);
          if (iVar3 != 0) {
            *(int *)(iVar4 + 0x940) = iVar3;
            FUN_0028bec0(iVar3);
            *(undefined4 *)(iVar4 + 0x60) = 3;
            *(undefined4 *)(iVar4 + 0x6c) = 0;
            *(undefined4 *)(iVar4 + 0x68) = 0;
            return 0;
          }
          if (*(int *)(iVar4 + 0x68) == 0) {
            FUN_001093c0(DAT_0040f4c4,0x3f7038,8,6,0x1abeb8,param_1,0,0x2000000);
            *(undefined4 *)(iVar4 + 0x68) = 1;
            return 0;
          }
          return 0;
        }
        iVar3 = 0;
        goto LAB_001abdc8;
      }
    }
    else {
      if (iVar3 == 0x1c) {
        *(undefined4 *)(iVar4 + 0x60) = 3;
        iVar3 = 0;
LAB_001abdc8:
        do {
          iVar2 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar2 + *(int *)(iVar4 + 0x93c)) = 0;
        } while (iVar3 < 8);
        FUN_001ab3e0(param_1);
        return 1;
      }
      if (iVar3 != 0x37) {
        iVar3 = 0;
        goto LAB_001abdc8;
      }
    }
    iVar3 = *(int *)(iVar4 + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(iVar4 + 0x68) != 0) {
        return 0;
      }
      FUN_001093c0(DAT_0040f4c4,0x3f7020,8,6,0x1abeb8,param_1,0,0x2000000);
      *(undefined4 *)(iVar4 + 0x68) = 1;
    }
    else {
      *(int *)(iVar4 + 0x944) = iVar3;
      FUN_0028bec0(iVar3);
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 0x60) = 2;
      *(undefined4 *)(iVar4 + 100) = 0;
      *(undefined4 *)(iVar4 + 0x68) = 0;
    }
  }
  return 0;
}


// ==== FUN_001abe08 @ 001abe08 ====

void FUN_001abe08(void)

{
  return;
}


// ==== FUN_001abe10 @ 001abe10 ====

void FUN_001abe10(void)

{
  return;
}


// ==== FUN_001abe18 @ 001abe18 ====

void FUN_001abe18(void)

{
  FUN_001ab500();
  return;
}


// ==== FUN_001abe48 @ 001abe48 ====

undefined4 FUN_001abe48(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xf4) < 0x21) {
    FUN_001a4ff0(*(undefined4 *)(param_1 + 0x70 + *(int *)(param_1 + 0xf4) * 4),0);
    uVar1 = *(undefined4 *)(param_1 + 0x70 + *(int *)(param_1 + 0xf4) * 4);
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001abeb8 @ 001abeb8 ====

void FUN_001abeb8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  return;
}


// ==== FUN_001abee0 @ 001abee0 ====
// GLOBAL DAT_003bfb28 int

void FUN_001abee0(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (*(char *)(param_3 + 8) == '\x02') {
    piVar1 = *(int **)(param_3 + 0xc);
    if (*piVar1 == 0) {
      uVar5 = piVar1[1];
    }
    else {
      if (piVar1[2] != 2) {
        return;
      }
      uVar5 = piVar1[1];
    }
    if (uVar5 < 10) {
      uVar3 = FUN_002723b0(piVar1[3]);
      pcVar2 = *(code **)(param_1 + uVar5 * 4 + 0x948);
      if (pcVar2 != (code *)0x0) {
        uVar4 = FUN_001ac040(param_2);
        (*pcVar2)(uVar3,uVar4);
        if (DAT_003bfb28 != 1) {
          FUN_003528e0();
          DAT_003bfb28 = 1;
        }
      }
    }
  }
  return;
}


// ==== FUN_001abfd8 @ 001abfd8 ====

undefined8 FUN_001abfd8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001ae0a8(param_1 + 0x8f0);
  FUN_001ae090(param_1 + 0x8f0,uVar1);
  return uVar1;
}


// ==== FUN_001ac020 @ 001ac020 ====

void FUN_001ac020(int param_1)

{
  FUN_001ae090(param_1 + 0x8f0);
  return;
}


// ==== FUN_001ac040 @ 001ac040 ====

undefined4 FUN_001ac040(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}


// ==== FUN_001ac070 @ 001ac070 ====

void FUN_001ac070(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00135550(*param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_00135550(*param_2), *(int *)(iVar1 + 0x80) == 1)) {
    iVar1 = FUN_00135550(*param_2);
    FUN_0017f720(iVar1 + 0x650);
  }
  return;
}


// ==== FUN_001ac0e0 @ 001ac0e0 ====
// GLOBAL DAT_004158f0 int
// GLOBAL DAT_004158e0 undefined4
// GLOBAL DAT_004158e4 undefined4
// GLOBAL DAT_004158e8 undefined4
// GLOBAL DAT_004158ec undefined4
// GLOBAL DAT_00415910 int
// GLOBAL DAT_00415900 undefined4
// GLOBAL DAT_00415904 undefined4
// GLOBAL DAT_00415908 undefined4
// GLOBAL DAT_0041590c undefined4
// GLOBAL DAT_0040f4d0 undefined4

/* Strings referenciadas:
     "SH_AR_I_082" */

void FUN_001ac0e0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (DAT_004158f0 == 0) {
    auVar4 = _pextlw(0xffffffffbe800000,0);
    auVar4 = _pextlw(0x3f4ccccd,auVar4._0_8_);
    DAT_004158e0 = auVar4._0_4_;
    DAT_004158e4 = auVar4._4_4_;
    DAT_004158e8 = auVar4._8_4_;
    DAT_004158ec = auVar4._12_4_;
    DAT_004158f0 = 1;
  }
  if (DAT_00415910 == 0) {
    auVar4 = _pextlw(0x3e800000,0);
    auVar4 = _pextlw(0x3f4ccccd,auVar4._0_8_);
    DAT_00415900 = auVar4._0_4_;
    DAT_00415904 = auVar4._4_4_;
    DAT_00415908 = auVar4._8_4_;
    DAT_0041590c = auVar4._12_4_;
    DAT_00415910 = 1;
  }
  lVar3 = FUN_00135550(*param_2);
  if (lVar3 == 0) {
    iVar1 = *param_2;
  }
  else {
    iVar1 = FUN_00135550(*param_2);
    if (*(int *)(iVar1 + 0x80) == 1) {
      iVar1 = FUN_00135550(*param_2);
      lVar3 = FUN_0018c408(iVar1 + 0x1da0,0x3f7050);
      if (lVar3 != 0) {
        iVar1 = *param_2;
        pauVar2 = (undefined1 (*) [16])&DAT_00415900;
        goto LAB_001ac1f0;
      }
      iVar1 = *param_2;
    }
    else {
      iVar1 = *param_2;
    }
  }
  pauVar2 = (undefined1 (*) [16])&DAT_004158e0;
LAB_001ac1f0:
  auVar8 = _lqc2(*pauVar2);
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  _vmulabc(auVar6,auVar8);
  _vmaddabc(auVar5,auVar8);
  _vmaddabc(auVar4,auVar8);
  auVar4 = _vmaddbc(auVar7,in_vf0);
  auVar4 = _qmfc2(auVar4._0_4_);
  FUN_0012c428(0x3fc00000,0x43160000,DAT_0040f4d0,auVar4._0_8_,*(undefined8 *)(iVar1 + 0x90),0,0xd,0
               ,0,1);
  return;
}


// ==== FUN_001ac278 @ 001ac278 ====

uint FUN_001ac278(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  piVar1 = (int *)FUN_001ac040();
  lVar3 = FUN_00135550(*piVar1);
  if (lVar3 == 0) {
    uVar5 = 0x3fcccccd;
  }
  else {
    iVar2 = FUN_00135550(*piVar1);
    if (*(int *)(iVar2 + 0x80) == 1) {
      iVar2 = FUN_00135550(*piVar1);
      fVar6 = *(float *)(iVar2 + 0x74);
      fVar4 = (float)FUN_0018d9f8(iVar2 + 0xc94);
      fVar6 = (float)((int)fVar6 * (uint)(0.0 < fVar6));
      uVar5 = (int)fVar6 * (uint)(fVar6 < fVar4) | (int)fVar4 * (uint)(fVar6 >= fVar4);
    }
    else {
      fVar6 = (float)((int)*(float *)(*piVar1 + 0x2e0) * (uint)(0.0 < *(float *)(*piVar1 + 0x2e0)));
      uVar5 = (int)fVar6 * (uint)(fVar6 < 6.51999) | (uint)(fVar6 >= 6.51999) * 0x40d0a3c2;
    }
  }
  return uVar5;
}


// ==== FUN_001ac330 @ 001ac330 ====
// GLOBAL DAT_003bd184 float
// GLOBAL DAT_003bd188 float

float FUN_001ac330(void)

{
  int *piVar1;
  long lVar2;
  float fVar3;
  
  piVar1 = (int *)FUN_001ac040();
  lVar2 = FUN_00135550(*piVar1);
  if (lVar2 == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = (*(float *)(*piVar1 + 0x2e0) - DAT_003bd184) / DAT_003bd188;
  }
  return fVar3;
}


// ==== FUN_001ac398 @ 001ac398 ====

undefined4 FUN_001ac398(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_001ac040();
  lVar2 = FUN_00135550(*puVar1);
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_00135550(*puVar1);
    uVar4 = FUN_0013ef28(uVar3);
  }
  return uVar4;
}


// ==== FUN_001ac3f8 @ 001ac3f8 ====

undefined4 FUN_001ac3f8(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_001ac040();
  uVar2 = 0;
  if (*(char *)(*piVar1 + 0x3a9) != '\0') {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}


// ==== FUN_001ac440 @ 001ac440 ====

uint FUN_001ac440(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  
  puVar1 = (undefined4 *)FUN_001ac040();
  lVar2 = FUN_00135550(*puVar1);
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_00135550(*puVar1);
    fVar5 = (float)FUN_0013ef08(uVar3);
    fVar5 = (float)((int)fVar5 * (uint)(-90.0 < fVar5) | (uint)(-90.0 >= fVar5) * -0x3d4c0000);
    uVar4 = (int)fVar5 * (uint)(fVar5 < 90.0) | (uint)(fVar5 >= 90.0) * 0x42b40000;
  }
  return uVar4;
}


// ==== FUN_001ac4b8 @ 001ac4b8 ====
// GLOBAL DAT_003bd18c float

float FUN_001ac4b8(void)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  piVar1 = (int *)FUN_001ac040();
  lVar2 = FUN_00135550(*piVar1);
  if (lVar2 == 0) {
    fVar4 = -0.0;
  }
  else {
    uVar3 = FUN_00135550(*piVar1);
    fVar4 = (float)FUN_0013ee68(uVar3);
    if (1.0 < *(float *)(*piVar1 + 0x2e0)) {
      fVar4 = fVar4 + DAT_003bd18c;
    }
    fVar4 = fVar4 * 1.3;
    fVar4 = (float)((int)fVar4 * (uint)(-90.0 < fVar4) | (uint)(-90.0 >= fVar4) * -0x3d4c0000);
    fVar4 = -(float)((int)fVar4 * (uint)(fVar4 < 90.0) | (uint)(fVar4 >= 90.0) * 0x42b40000);
  }
  return fVar4;
}


// ==== FUN_001ac568 @ 001ac568 ====
// GLOBAL DAT_004432c0 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ac568(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = FUN_001ac040();
  uVar1 = FUN_001a6930(uVar2);
  auVar5 = _qmtc2(uVar1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _lqc2(_DAT_004432c0);
  auVar3 = _vmul(auVar5,auVar3);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(auVar4,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  return auVar3._0_4_;
}


// ==== FUN_001ac5b8 @ 001ac5b8 ====

undefined4 FUN_001ac5b8(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_001ac040();
  uVar4 = 0;
  lVar2 = FUN_00135550(*puVar1);
  if (lVar2 != 0) {
    iVar3 = (int)lVar2;
    uVar4 = 0;
    if ((*(int *)(iVar3 + 0x80) == 1) &&
       (*(int *)(iVar3 + 0xec0 + (*(int *)(iVar3 + 0x1380) + -1) * 4) == 8)) {
      uVar4 = 0x3f800000;
    }
  }
  return uVar4;
}


// ==== FUN_001ac680 @ 001ac680 ====

int FUN_001ac680(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar3 = -1;
  fVar7 = (float)FUN_001378f0(*param_2);
  do {
    if ((param_2 != (undefined4 *)0x0) &&
       (param_2 == *(undefined4 **)(iVar4 * 4 + *(int *)(param_1 + 0x93c)))) {
      return iVar4;
    }
    puVar1 = *(undefined4 **)(iVar5 + *(int *)(param_1 + 0x93c));
    if (((puVar1 != (undefined4 *)0x0) && (fVar8 = (float)FUN_001378f0(*puVar1), fVar7 <= fVar8)) &&
       (iVar2 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x93c)), *(int *)(iVar2 + 0xb0) != -1)) {
      fVar7 = fVar8;
      iVar6 = iVar2;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar4 < 8);
  if (iVar6 != 0) {
    iVar3 = FUN_001a6e58(iVar6);
  }
  return iVar3;
}


// ==== FUN_001ac798 @ 001ac798 ====

undefined8 FUN_001ac798(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  do {
    iVar5 = (int)param_1;
    iVar6 = (int)param_2;
    if (7 < iVar4) goto LAB_001ac7f0;
    piVar3 = (int *)(iVar4 * 4 + *(int *)(iVar5 + 0x93c));
    iVar4 = iVar4 + 1;
  } while (*piVar3 != 0);
  *piVar3 = iVar6;
  uVar1 = FUN_001ae0a8(iVar5 + 0x8f0);
  *(undefined4 *)(iVar6 + 0xb0) = uVar1;
LAB_001ac7f0:
  if (*(int *)(iVar6 + 0xb0) == -1) {
    FUN_001ac680(param_1,param_2);
    iVar4 = 0;
    do {
      if (7 < iVar4) goto LAB_001ac840;
      piVar3 = (int *)(iVar4 * 4 + *(int *)(iVar5 + 0x93c));
      iVar4 = iVar4 + 1;
    } while (*piVar3 != 0);
    *piVar3 = iVar6;
    uVar1 = FUN_001ae0a8(iVar5 + 0x8f0);
    *(undefined4 *)(iVar6 + 0xb0) = uVar1;
LAB_001ac840:
    if (*(int *)(iVar6 + 0xb0) == -1) {
      return 0;
    }
  }
  iVar5 = iVar5 + 0x8f0;
  iVar7 = 0xb;
  FUN_001ae088(iVar5,0);
  FUN_001ae090(iVar5,*(undefined4 *)(iVar6 + 0xb0));
  uVar2 = FUN_001adfc0(iVar5,0x9d0);
  iVar4 = (int)uVar2 + 0x1d0;
  FUN_00343fc8((int)uVar2 + 0x30);
  do {
    iVar7 = iVar7 + -1;
    FUN_00343fc8(iVar4 + 0x10);
    FUN_00343fc8(iVar4 + 0x60);
    iVar4 = iVar4 + 0xa0;
  } while (iVar7 != -1);
  return uVar2;
}


// ==== FUN_001ac8d0 @ 001ac8d0 ====

void FUN_001ac8d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x93c);
  while( true ) {
    iVar3 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    if (*(int *)(iVar3 + iVar1) == param_2) {
      FUN_001ae0c8(param_1 + 0x8f0,*(undefined4 *)(param_2 + 0xb0));
      *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x93c)) = 0;
      return;
    }
    if (7 < iVar2) break;
    iVar1 = *(int *)(param_1 + 0x93c);
  }
  return;
}


// ==== FUN_001ac940 @ 001ac940 ====

void FUN_001ac940(int param_1)

{
  FUN_001ae088(param_1 + 0x8f0);
  return;
}


// ==== FUN_001ac960 @ 001ac960 ====

void FUN_001ac960(int param_1,int param_2,int param_3,undefined8 param_4,undefined1 param_5,
                 long param_6)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_003843c0(*(undefined4 *)(param_3 + 0x28),0);
  uVar1 = FUN_003843d8(*(undefined4 *)(param_3 + 0x34),0);
  lVar2 = FUN_003843d8(*(undefined4 *)(param_3 + 0x2c),0);
  FUN_001a8300(lVar2);
  iVar6 = *(int *)(*(int *)(param_3 + 0x20) + 8);
  iVar3 = 0;
  if (0 < iVar6) {
    plVar4 = *(long **)(*(int *)(param_3 + 0x20) + 0xc);
    do {
      iVar3 = iVar3 + 1;
      if (*plVar4 == param_6) {
        uVar5 = (undefined4)plVar4[1];
        goto LAB_001aca14;
      }
      plVar4 = plVar4 + 2;
    } while (iVar3 < iVar6);
  }
  uVar5 = 0;
LAB_001aca14:
  iVar3 = param_2 * 0x6c + 0x398;
  iVar6 = param_1 + iVar3;
  FUN_001a8168(iVar6,uVar1,uVar5,*(undefined4 *)(param_1 + 0x940));
  FUN_001adc30(iVar6,param_5,0x40d9c8);
  FUN_001add58(iVar6,0x3f7060);
  if (lVar2 != 0) {
    FUN_001a8350(iVar6,lVar2);
  }
  do {
    lVar2 = FUN_001a51c8(param_1 + param_2 * 0x240 + 0x470,param_4,param_1 + iVar3);
  } while (lVar2 == 0);
  return;
}


// ==== FUN_001acac8 @ 001acac8 ====
// GLOBAL DAT_0040f514 int
// GLOBAL DAT_0040f50c undefined4

void FUN_001acac8(undefined8 param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  if (param_3 == 0) {
    iVar6 = *(int *)(param_2 + 0x28);
    iVar2 = *(int *)(DAT_0040f514 + 0x8518);
  }
  else {
    if (0 < *(int *)(*(int *)(param_2 + 0x30) + 8)) {
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      iVar6 = 0;
      while( true ) {
        uVar5 = FUN_003843d8(uVar1,iVar6);
        FUN_001a8300(uVar5);
        if (*(int *)(*(int *)(param_2 + 0x30) + 8) <= iVar6 + 1) break;
        uVar1 = *(undefined4 *)(param_2 + 0x30);
        iVar6 = iVar6 + 1;
      }
    }
    iVar6 = *(int *)(param_2 + 0x28);
    iVar2 = param_2;
  }
  if (*(int *)(iVar6 + 8) < 1) {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  iVar6 = 0;
  do {
    plVar3 = (long *)FUN_003843c0(uVar1,iVar6);
    if ((char)plVar3[2] == '\0') {
      iVar8 = 0;
      lVar12 = *(long *)(iVar6 * 0x10 + *(int *)(*(int *)(param_2 + 0x28) + 0xc));
      if (param_3 == 0) {
        iVar4 = *(int *)(*(int *)(iVar2 + 0x28) + 8);
        iVar10 = 0;
        if (0 < iVar4) {
          plVar9 = *(long **)(*(int *)(iVar2 + 0x28) + 0xc);
          plVar7 = plVar9;
          do {
            if (*plVar7 == lVar12) {
              iVar4 = (int)plVar9[1];
              goto LAB_001acbfc;
            }
            iVar10 = iVar10 + 1;
            plVar9 = plVar9 + 2;
            plVar7 = plVar7 + 2;
          } while (iVar10 < iVar4);
        }
        iVar4 = 0;
LAB_001acbfc:
        if (iVar4 != 0) {
          iVar8 = *(int *)(param_2 + 0x28);
          goto LAB_001ace6c;
        }
      }
      iVar10 = 0;
      iVar4 = *(int *)(*(int *)(param_2 + 0x34) + 8);
      lVar11 = plVar3[1];
      if (0 < iVar4) {
        plVar9 = *(long **)(*(int *)(param_2 + 0x34) + 0xc);
        plVar7 = plVar9;
        do {
          if (*plVar7 == *plVar3) {
            iVar4 = (int)plVar9[1];
            goto LAB_001acc54;
          }
          iVar10 = iVar10 + 1;
          plVar9 = plVar9 + 2;
          plVar7 = plVar7 + 2;
        } while (iVar10 < iVar4);
      }
      iVar4 = 0;
LAB_001acc54:
      if ((iVar4 == 0) && (param_3 == 0)) {
        iVar4 = *(int *)(*(int *)(iVar2 + 0x34) + 8);
        iVar10 = 0;
        if (0 < iVar4) {
          plVar9 = *(long **)(*(int *)(iVar2 + 0x34) + 0xc);
          plVar7 = plVar9;
          do {
            if (*plVar7 == *plVar3) {
              iVar4 = (int)plVar9[1];
              goto LAB_001accac;
            }
            iVar10 = iVar10 + 1;
            plVar9 = plVar9 + 2;
            plVar7 = plVar7 + 2;
          } while (iVar10 < iVar4);
        }
        iVar4 = 0;
      }
LAB_001accac:
      if (lVar11 != 0) {
        iVar8 = *(int *)(*(int *)(param_2 + 0x2c) + 8);
        iVar10 = 0;
        if (0 < iVar8) {
          plVar3 = *(long **)(*(int *)(param_2 + 0x2c) + 0xc);
          plVar9 = plVar3;
          do {
            if (*plVar9 == lVar11) {
              iVar8 = (int)plVar3[1];
              goto LAB_001accf4;
            }
            iVar10 = iVar10 + 1;
            plVar3 = plVar3 + 2;
            plVar9 = plVar9 + 2;
          } while (iVar10 < iVar8);
        }
        iVar8 = 0;
LAB_001accf4:
        if ((iVar8 == 0) && (param_3 == 0)) {
          iVar8 = *(int *)(*(int *)(iVar2 + 0x2c) + 8);
          iVar10 = 0;
          if (0 < iVar8) {
            plVar3 = *(long **)(*(int *)(iVar2 + 0x2c) + 0xc);
            plVar9 = plVar3;
            do {
              if (*plVar9 == lVar11) {
                iVar8 = (int)plVar3[1];
                goto LAB_001acd84;
              }
              iVar10 = iVar10 + 1;
              plVar3 = plVar3 + 2;
              plVar9 = plVar9 + 2;
            } while (iVar10 < iVar8);
          }
          iVar8 = 0;
        }
        else {
          FUN_001a8300(iVar8);
        }
      }
LAB_001acd84:
      lVar11 = FUN_001aceb0(param_1,lVar12,param_2);
      if (param_3 == 0) {
        if (lVar11 == 0) {
          lVar11 = FUN_001aceb0(param_1,lVar12,iVar2);
          goto LAB_001acdb0;
        }
      }
      else {
LAB_001acdb0:
        if (lVar11 == 0) {
          iVar8 = *(int *)(param_2 + 0x28);
          goto LAB_001ace6c;
        }
      }
      lVar12 = FUN_001acf88(param_1,lVar12);
      if (lVar12 != -1) {
        iVar10 = (int)param_1 + (int)lVar12 * 0x60 + 0xf8;
        FUN_001a8168(iVar10,iVar4,lVar11,*(undefined4 *)((int)param_1 + 0x944));
        if (iVar8 == 0) {
          iVar8 = *(int *)(iVar2 + 0x30);
        }
        else {
          FUN_001ac940(DAT_0040f50c,2);
          FUN_001a8350(iVar10,iVar8);
          iVar8 = *(int *)(iVar2 + 0x30);
        }
        if (0 < *(int *)(iVar8 + 8)) {
          uVar1 = *(undefined4 *)(iVar2 + 0x30);
          iVar8 = 0;
          while( true ) {
            uVar5 = FUN_003843d8(uVar1,iVar8);
            FUN_001a8350(iVar10,uVar5);
            if (*(int *)(*(int *)(iVar2 + 0x30) + 8) <= iVar8 + 1) break;
            uVar1 = *(undefined4 *)(iVar2 + 0x30);
            iVar8 = iVar8 + 1;
          }
        }
        FUN_001ac940(DAT_0040f50c,0);
      }
      iVar8 = *(int *)(param_2 + 0x28);
    }
    else {
      iVar8 = *(int *)(param_2 + 0x28);
    }
LAB_001ace6c:
    if (*(int *)(iVar8 + 8) <= iVar6 + 1) {
      return;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    iVar6 = iVar6 + 1;
  } while( true );
}


// ==== FUN_001aceb0 @ 001aceb0 ====

int FUN_001aceb0(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(int *)(*(int *)(param_3 + 0x24) + 8) < 1) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  do {
    plVar2 = (long *)FUN_003843f0(uVar1,iVar7);
    if (plVar2[1] == param_2) {
      iVar6 = 0;
      iVar4 = *(int *)(*(int *)(param_3 + 0x20) + 8);
      if (0 < iVar4) {
        plVar5 = *(long **)(*(int *)(param_3 + 0x20) + 0xc);
        plVar3 = plVar5;
        do {
          if (*plVar3 == *plVar2) {
            iVar4 = (int)plVar5[1];
            goto LAB_001acf3c;
          }
          iVar6 = iVar6 + 1;
          plVar5 = plVar5 + 2;
          plVar3 = plVar3 + 2;
        } while (iVar6 < iVar4);
      }
      iVar4 = 0;
LAB_001acf3c:
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = *(int *)(param_3 + 0x24);
    }
    else {
      iVar4 = *(int *)(param_3 + 0x24);
    }
    iVar7 = iVar7 + 1;
    if (*(int *)(iVar4 + 8) <= iVar7) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_3 + 0x24);
  } while( true );
}


// ==== FUN_001acf88 @ 001acf88 ====
// GLOBAL DAT_003f6e98 undefined8

int FUN_001acf88(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_003f6e98;
  do {
    if (*plVar2 == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 7);
  return -1;
}


// ==== FUN_001acfc0 @ 001acfc0 ====
// GLOBAL PTR_s_J_B_Hand_Loc_003bd160 pointer

/* Strings referenciadas:
     "J_B_Hand_Loc"
     "J_B_Breath_Loc" */

int FUN_001acfc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar2 = 0;
  ppuVar3 = &PTR_s_J_B_Hand_Loc_003bd160;
  do {
    lVar1 = stricmp(param_2,*ppuVar3);
    if (lVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (iVar2 < 8);
  return 8;
}


// ==== FUN_001ad030 @ 001ad030 ====

void FUN_001ad030(int param_1)

{
  FUN_001ae078(param_1 + 0x8f0);
  return;
}


// ==== FUN_001ad050 @ 001ad050 ====

void FUN_001ad050(int param_1)

{
  FUN_001ae0f0(param_1 + 0x8f0);
  return;
}


// ==== FUN_001ad070 @ 001ad070 ====
// GLOBAL DAT_0040ead8 char

void FUN_001ad070(int param_1)

{
  if (DAT_0040ead8 != '\0') {
    *(undefined4 *)(param_1 + 0x9c8) = 0x3f800000;
  }
  return;
}


// ==== FUN_001ad098 @ 001ad098 ====

void FUN_001ad098(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_1;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


// ==== FUN_001ad0d8 @ 001ad0d8 ====

long FUN_001ad0d8(int param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 1;
  bVar1 = false;
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    if (param_6 != 0) {
      *(undefined1 *)param_6 = 0;
    }
    if (param_7 != 0) {
      *(undefined4 *)param_7 = 0;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        iVar4 = *(int *)(param_1 + 0x28) + iVar3 * 0x38;
        if ((*(int *)(iVar4 + 0x2c) == *(int *)param_3) ||
           (lVar2 = FUN_001ad2e8(iVar4,*(undefined1 *)(iVar4 + 0x34),param_2), lVar2 != 0)) {
          bVar1 = true;
          switch(*(undefined4 *)(iVar4 + 0x30)) {
          case 0:
            lVar5 = 1;
            break;
          case 1:
            lVar5 = 0;
            break;
          case 2:
            lVar5 = param_5;
            break;
          case 3:
          case 4:
            lVar5 = FUN_001a67b8(param_4,*(undefined8 *)(iVar4 + 0x20));
          }
          if (lVar5 != 0) {
            if ((*(char *)(iVar4 + 0xd) != '\0') && (param_6 != 0)) {
              iVar3 = strlen(param_2);
              iVar3 = iVar3 - *(char *)(iVar4 + 0x35);
              FUN_0035d1a0(param_6,param_2,iVar3);
              ((undefined1 *)param_6)[iVar3] = 0;
              FUN_0035c7a4(param_6,iVar4 + 0xd);
            }
            if (param_7 != 0) {
              *(undefined4 *)param_7 = *(undefined4 *)(iVar4 + 0x28);
            }
            break;
          }
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    if (!bVar1) {
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 0:
        lVar5 = 1;
        break;
      case 1:
        lVar5 = 0;
        break;
      case 2:
        lVar5 = param_5;
        break;
      case 3:
      case 4:
        lVar5 = FUN_001a67b8(param_4,*(undefined8 *)(param_1 + 0x18));
      }
    }
  }
  return lVar5;
}


// ==== FUN_001ad2e8 @ 001ad2e8 ====

bool FUN_001ad2e8(undefined8 param_1,char param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strlen(param_3);
  if (param_2 < iVar1) {
    param_3 = param_3 + (iVar1 - param_2);
  }
  lVar2 = strcmp(param_1,param_3);
  return lVar2 == 0;
}


// ==== FUN_001ad368 @ 001ad368 ====

bool FUN_001ad368(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}


// ==== FUN_001ad378 @ 001ad378 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_131"
     "S_172"
     "S_050" */

void FUN_001ad378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_001adbf0(param_1,param_3);
  iVar2 = (int)param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_001adbc0(param_1,param_3);
    if (lVar1 == 0) {
      FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f70b8,param_3);
    }
    else {
      FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f70b0,0x3f70b8,param_3);
    }
  }
  else {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f70a8,param_3);
  }
  return;
}


// ==== FUN_001ad450 @ 001ad450 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_100"
     "S_110"
     "S_170"
     "S_114"
     "S_130"
     "S_176" */

void FUN_001ad450(int param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0x3f70c0;
  }
  else if (param_4 == 1) {
    if (param_5 == 0) {
      uVar1 = 0x3f6a88;
    }
    else {
      uVar1 = 0x3f70c8;
    }
  }
  else if (param_4 == 2) {
    uVar1 = 0x3f70d0;
  }
  else {
    if (param_4 != 3) {
      return;
    }
    if (param_5 != 0) {
      FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,0x3f70e0,param_3);
      return;
    }
    uVar1 = 0x3f70d8;
  }
  FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,uVar1,param_3);
  return;
}


// ==== FUN_001ad510 @ 001ad510 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_001"
     "S_191"
     "S_190"
     "S_171" */

void FUN_001ad510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  lVar1 = FUN_001adc10(param_1,param_3);
  iVar2 = (int)param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_001adbc0(param_1,param_3);
    if (lVar1 == 0) {
      FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f6a00,param_3);
      return;
    }
    pcVar3 = "S_171";
    pcVar4 = "S_001";
  }
  else {
    lVar1 = FUN_001adbc0(param_1,param_3);
    if (lVar1 == 0) {
      FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f70f0,param_3);
      return;
    }
    pcVar3 = "S_191";
    pcVar4 = "S_190";
  }
  FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,pcVar3,pcVar4,param_3);
  return;
}


// ==== FUN_001ad610 @ 001ad610 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_501"
     "S_502"
     "S_180"
     "S_181"
     "S_182"
     "S_101" */

void FUN_001ad610(int param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_5 == 1) {
    pcVar1 = "S_180";
LAB_001ad684:
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,pcVar1,param_3);
    return;
  }
  if (1 < param_5) {
    if (param_5 == 2) {
      pcVar1 = "S_502";
      pcVar2 = "S_181";
      goto LAB_001ad6b4;
    }
    if (param_5 == 3) {
      pcVar1 = "S_182";
      goto LAB_001ad684;
    }
  }
  if (param_4 == 0) {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,0x3f7118,param_3);
    return;
  }
  pcVar1 = "S_501";
  pcVar2 = "S_101";
LAB_001ad6b4:
  FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,pcVar1,pcVar2);
  return;
}


// ==== FUN_001ad6e8 @ 001ad6e8 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_102"
     "S_177"
     "S_125"
     "S_173" */

void FUN_001ad6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = (int)param_1;
  if (*(char *)((int)param_3 + 0x8b3) == '\0') {
    lVar1 = FUN_001adbc0(param_1,param_3);
    if (lVar1 == 0) {
      FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f6de8,param_3);
      return;
    }
    pcVar3 = "S_173";
    pcVar4 = "S_102";
  }
  else {
    lVar1 = FUN_001adbc0(param_1,param_3);
    if (lVar1 == 0) {
      FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,0x3f7128,param_3);
      return;
    }
    pcVar3 = "S_177";
    pcVar4 = "S_125";
  }
  FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,iVar2 + 0x60,pcVar3,pcVar4,param_3);
  return;
}


// ==== FUN_001ad7e8 @ 001ad7e8 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_103"
     "S_174" */

void FUN_001ad7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001adbc0(param_1,param_3);
  if (lVar1 == 0) {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f6df0,param_3);
  }
  else {
    FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f7138,0x3f6df0,param_3);
  }
  return;
}


// ==== FUN_001ad880 @ 001ad880 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_177"
     "S_125" */

void FUN_001ad880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001adbc0(param_1,param_3);
  if (lVar1 == 0) {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f7128,param_3);
  }
  else {
    FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f7120,0x3f7128,param_3);
  }
  return;
}


// ==== FUN_001ad918 @ 001ad918 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_104"
     "S_178" */

void FUN_001ad918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001adbc0(param_1,param_3);
  if (lVar1 == 0) {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f6df8,param_3);
  }
  else {
    FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f7140,0x3f6df8,param_3);
  }
  return;
}


// ==== FUN_001adaa0 @ 001adaa0 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_112"
     "S_113" */

void FUN_001adaa0(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,0x3f7170,param_3);
  }
  else {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,param_1 + 0x60,0x3f7168,param_3);
  }
  return;
}


// ==== FUN_001adb28 @ 001adb28 ====
// GLOBAL PTR_DAT_003bd190 undefined_*

/* Strings referenciadas:
     "S_111"
     "S_175" */

void FUN_001adb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001adbc0(param_1,param_3);
  if (lVar1 == 0) {
    FUN_001ab1c0(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f6e30,param_3);
  }
  else {
    FUN_001aaf10(param_1,param_2,PTR_DAT_003bd190,(int)param_1 + 0x60,0x3f7180,0x3f6e30,param_3);
  }
  return;
}


// ==== FUN_001adbc0 @ 001adbc0 ====

undefined8 FUN_001adbc0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0x2a4) != 0) {
    uVar1 = FUN_001580c0();
  }
  return uVar1;
}


// ==== FUN_001adbf0 @ 001adbf0 ====

undefined1 FUN_001adbf0(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x2a4) != 0) {
    return *(undefined1 *)(*(int *)(param_2 + 0x2a4) + 0x106);
  }
  return 0;
}


// ==== FUN_001adc10 @ 001adc10 ====

undefined1 FUN_001adc10(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x2a4) != 0) {
    return *(undefined1 *)(*(int *)(param_2 + 0x2a4) + 0x105);
  }
  return 0;
}


// ==== FUN_001adc30 @ 001adc30 ====
// GLOBAL DAT_0040f4e0 undefined4
// GLOBAL PTR_DAT_003bd140 undefined_*
// GLOBAL PTR_DAT_003bd148 undefined_*
// GLOBAL PTR_DAT_003bd144 undefined_*

void FUN_001adc30(char *param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == -1) {
    strcpy(param_1 + 0x60,PTR_DAT_003bd140);
  }
  else {
    iVar1 = FUN_0015d210(DAT_0040f4e0,param_2);
    strcpy(param_1 + 0x60,*(int *)(iVar1 + 0xc) + 0x10);
    *param_1 = param_2;
  }
  param_1 = param_1 + 0x60;
  lVar2 = strcmp(0x40d9c8,param_3);
  if (lVar2 != 0) {
    lVar2 = stricmp(PTR_DAT_003bd148,param_3);
    if (lVar2 == 0) {
      strcpy(param_1,param_3);
    }
    else {
      lVar2 = stricmp(param_1,param_3);
      if (lVar2 == 0) {
        lVar2 = stricmp(0x3f69d0,param_3);
        if (lVar2 == 0) {
          strcpy(param_1,PTR_DAT_003bd140);
        }
        else {
          strcpy(param_1,PTR_DAT_003bd144);
        }
      }
    }
  }
  return;
}


// ==== FUN_001add58 @ 001add58 ====

void FUN_001add58(int param_1)

{
  strcpy(param_1 + 0x65);
  return;
}


// ==== FUN_001add78 @ 001add78 ====

void FUN_001add78(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00107d20(param_4 << 2);
  puVar2 = (undefined4 *)param_1;
  *puVar2 = uVar1;
  uVar1 = FUN_00107d20(param_4 << 2);
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  puVar2[1] = uVar1;
  FUN_001addf8(param_1);
  return;
}


