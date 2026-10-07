// ==== FUN_00169bd0 @ 00169bd0 ====

undefined4 FUN_00169bd0(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0xd0));
}


// ==== FUN_00169be8 @ 00169be8 ====

undefined2 FUN_00169be8(int param_1)

{
  return *(undefined2 *)(param_1 + 0x44);
}


// ==== FUN_00169bf0 @ 00169bf0 ====

void FUN_00169bf0(void)

{
  FUN_00125c60();
  return;
}


// ==== FUN_00169c10 @ 00169c10 ====

undefined4 FUN_00169c10(undefined8 *param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00125cd8();
  *param_1 = param_2;
  *(int *)((int)param_1 + 0x114) = param_3;
  *(int *)(param_1 + 0x23) = param_3;
  if (*(char *)(param_3 + 0x20) == '\0') {
    *(undefined1 *)((int)param_1 + 0x11c) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x11c) = 1;
  }
  switch(*(undefined1 *)(param_3 + 0x21)) {
  case 0:
    *(undefined4 *)(param_1 + 0x24) = 0;
    goto switchD_00169c78_default;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  default:
    goto switchD_00169c78_default;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
switchD_00169c78_default:
  bVar1 = *(byte *)(param_3 + 0x22);
  if (bVar1 == 1) {
    *(undefined4 *)((int)param_1 + 0x124) = 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      iVar3 = *(int *)((int)param_1 + 0x114);
      goto LAB_00169ce8;
    }
    *(undefined4 *)((int)param_1 + 0x124) = 0;
  }
  else {
    if (bVar1 != 2) {
      iVar3 = *(int *)((int)param_1 + 0x114);
      goto LAB_00169ce8;
    }
    *(undefined4 *)((int)param_1 + 0x124) = 2;
  }
  iVar3 = *(int *)((int)param_1 + 0x114);
LAB_00169ce8:
  if (*(char *)(iVar3 + 0x20) == '\0') {
    *(undefined1 *)((int)param_1 + 0x11c) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x11c) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x11d) = 0;
  return 1;
}


// ==== FUN_00169d48 @ 00169d48 ====

void FUN_00169d48(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 2) {
    FUN_00169d88();
  }
  else {
    FUN_00165b00();
  }
  return;
}


// ==== FUN_00169d88 @ 00169d88 ====

void FUN_00169d88(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(DAT_0040f514 + 0x79a4)) {
    do {
      plVar1 = *(long **)(iVar7 * 4 + *(int *)(DAT_0040f514 + 0x79ac));
      iVar7 = iVar7 + 1;
      if (((plVar1 != (long *)0x0) && (lVar4 = FUN_00135550(plVar1), lVar4 != 0)) &&
         (iVar2 = FUN_00135550(plVar1), *(int *)(iVar2 + 0x80) == 1)) {
        iVar6 = (int)param_1;
        iVar2 = 0;
        if (*(byte *)(iVar6 + 0xc) != 0) {
          iVar5 = *(int *)(iVar6 + 8);
          while (iVar3 = iVar2 * 4, iVar2 = iVar2 + 1, *plVar1 != **(long **)(iVar3 + iVar5)) {
            if ((int)(uint)*(byte *)(iVar6 + 0xc) <= iVar2) goto LAB_00169e7c;
            iVar5 = *(int *)(iVar6 + 8);
          }
          iVar2 = FUN_00135550(plVar1);
          if (*(char *)(iVar6 + 0x11d) == '\0') {
            FUN_0018d698(iVar2 + 0xd10,0);
          }
          else {
            FUN_0018d698(iVar2 + 0xd10,param_1);
          }
        }
      }
LAB_00169e7c:
    } while (iVar7 < *(int *)(DAT_0040f514 + 0x79a4));
  }
  return;
}


// ==== FUN_00169eb8 @ 00169eb8 ====

undefined4 FUN_00169eb8(void)

{
  FUN_00125e40();
  return 1;
}


// ==== FUN_00169ef8 @ 00169ef8 ====

void FUN_00169ef8(undefined8 param_1,undefined8 param_2)

{
  FUN_00169bf0();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00169f38 @ 00169f38 ====

undefined8 FUN_00169f38(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
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
  undefined4 in_vuI;
  float fStack_cc;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  
  FUN_00169c10();
  *(int *)(param_1 + 0x154) = param_3;
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x40));
  auVar2 = _qmfc2(auVar5._0_4_);
  auVar7 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0x140) = auVar7;
  auVar7 = _sqc2(auVar5);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  auVar5 = _qmfc2(auVar6._0_4_);
  fStack_cc = auVar7._4_4_;
  fVar4 = ABS(fStack_cc);
  auVar7 = _sqc2(auVar6);
  fStack_cc = auVar7._4_4_;
  auVar7 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar7;
  if ((ABS(auVar2._0_4_) + ABS(auVar5._0_4_) < 1.0) || (fVar4 + ABS(fStack_cc) < 1.0)) {
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x154);
  auVar2 = _vmaxbc(in_vf0,in_vf0);
  auVar7 = _qmtc2(*(float *)(iVar1 + 0x1c) * 0.017453292);
  auVar7 = _vaddbc(in_vf0,auVar7);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar7 = _vsubi(auVar7,in_vuI);
  auVar7 = _vabs(auVar7);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar7,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _vmaddai(auVar2,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar7,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar7 = _vmsubi(auVar2,in_vuI);
  auVar7 = _vabs(auVar7);
  _ctc2(0x3e800000);
  _vnop();
  auVar7 = _vsubi(auVar7,in_vuI);
  _lqc2(auStack_60);
  auVar5 = _vmul(auVar7,auVar7);
  _ctc2(0xc2992661);
  _vnop();
  auVar2 = _vmuli(auVar7,in_vuI);
  auVar9 = _vmul(auVar5,auVar5);
  _ctc2(0x42a33457);
  _vnop();
  auVar10 = _vmuli(auVar7,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar8 = _vmuli(auVar7,in_vuI);
  auVar6 = _vmul(auVar9,auVar9);
  auVar2 = _vmul(auVar2,auVar5);
  _ctc2(0xc2255de0);
  _vnop();
  auVar12 = _vmuli(auVar7,in_vuI);
  _vmula(auVar12,auVar5);
  _vmadda(auVar2,auVar9);
  _ctc2(0x40c90fda);
  _vmadda(auVar10,auVar9);
  _vmaddai(auVar7,in_vuI);
  auVar5 = _vmadd(auVar8,auVar6);
  _lqc2(auStack_80);
  auVar7 = _vaddbc(in_vf0,auVar5);
  auVar6 = _vaddbc(in_vf0,auVar5);
  auVar2 = _qmtc2(0);
  _vmove(auVar7);
  _sqc2(auVar7);
  auVar10 = _vaddbc(in_vf0,auVar2);
  auVar7 = _pextlw(0,0);
  _vmove(auVar6);
  auVar8 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar10);
  auVar2 = _pextlw(0x3f800000,auVar7._0_8_);
  _sqc2(auVar6);
  auVar9 = _vaddbc(in_vf0,auVar5);
  auVar6 = _vsub(in_vf0,auVar5);
  _sqc2(auVar8);
  _sqc2(auVar10);
  auVar5 = _vadd(in_vf0,in_vf0);
  uVar3 = auVar2._0_4_;
  _vmove(auVar8);
  auVar7 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar7;
  auVar6 = _vaddbc(in_vf0,auVar6);
  _sqc2(auVar9);
  _sqc2(auVar9);
  _sqc2(auVar6);
  _qmtc2(uVar3);
  _sqc2(auVar5);
  auVar11 = _vaddbc(in_vf0,auVar6);
  _sqc2(auVar5);
  _sqc2(auVar6);
  _vmove(auVar9);
  _sqc2(auVar5);
  auVar12 = _vaddbc(in_vf0,auVar6);
  auVar7 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar7;
  auVar7 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar7;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(int *)(param_1 + 0x84) = auVar2._4_4_;
  *(int *)(param_1 + 0x88) = auVar2._8_4_;
  *(int *)(param_1 + 0x8c) = auVar2._12_4_;
  _vmove(auVar6);
  _vmove(auVar11);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x10));
  _vmove(auVar12);
  auVar7 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar7;
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
  auVar5 = _vaddbc(auVar5,auVar7);
  auVar7 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar7;
  auVar5 = _vaddbc(in_vf0,auVar5);
  auVar7 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0xd0) = auVar7;
  auVar7 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar7;
  auVar7 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar7;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(int *)(param_1 + 0xe4) = auVar2._4_4_;
  *(int *)(param_1 + 0xe8) = auVar2._8_4_;
  *(int *)(param_1 + 0xec) = auVar2._12_4_;
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar6 = _vaddbc(in_vf0,auVar2);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmove(auVar6);
  auVar10 = _vaddbc(in_vf0,auVar7);
  auVar8 = _vaddbc(in_vf0,auVar2);
  auVar9 = _vaddbc(in_vf0,auVar7);
  auVar7 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar7;
  auVar2 = _vmulbc(auVar9,auVar5);
  auVar6 = _vmulbc(auVar10,auVar5);
  auVar7 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar7;
  auVar7 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar7;
  auVar5 = _vmulbc(auVar8,auVar5);
  auVar2 = _vadd(auVar2,auVar6);
  auVar7 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar7;
  auVar7 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar7;
  auVar2 = _vadd(auVar2,auVar5);
  auVar7 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar7;
  auVar7 = _vsub(in_vf0,auVar2);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar7;
  return 1;
}


// ==== FUN_0016a250 @ 0016a250 ====

undefined8 FUN_0016a250(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_0016a4c0();
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x11d) = 1;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x10),param_3);
  }
  else if ((*(int *)(param_1 + 0x120) - 1U < 2) && (*(char *)(param_1 + 0x11d) == '\x01')) {
    *(undefined1 *)(param_1 + 0x11d) = 0;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x10),param_3);
  }
  return 0;
}


// ==== FUN_0016a2f8 @ 0016a2f8 ====

undefined4 FUN_0016a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  
  cVar1 = FUN_0016a4c0();
  plVar6 = (long *)param_1;
  if (cVar1 == '\x01') {
    if ((int)plVar6[0x24] == 4) {
      if (*(long *)(DAT_0040f4d0 + 0x5c98) == *plVar6) {
        return 0;
      }
      *(long *)(DAT_0040f4d0 + 0x5c98) = *plVar6;
      FUN_0012d530(DAT_0040f4d0);
      FUN_00169b88(DAT_0040f4f4);
      *(undefined1 *)((int)plVar6 + 0x11d) = 1;
      (**(code **)((int)plVar6[2] + 0x14))
                ((int)plVar6 + (int)*(short *)((int)plVar6[2] + 0x10),param_3);
      return 0;
    }
    if ((int)plVar6[0x24] - 1U < 2) {
      if (*(char *)((int)plVar6 + 0x11d) == '\x01') {
        return 0;
      }
      if (*(char *)((int)plVar6 + 0x11d) == '\0') {
        *(undefined1 *)((int)plVar6 + 0x11d) = 1;
        (**(code **)((int)plVar6[2] + 0x14))
                  ((int)plVar6 + (int)*(short *)((int)plVar6[2] + 0x10),param_3);
        goto LAB_0016a408;
      }
      iVar5 = *(int *)((int)plVar6 + 0x124);
    }
    else {
      iVar5 = *(int *)((int)plVar6 + 0x124);
    }
    if (iVar5 == 1) {
      uVar4 = FUN_00165c78(param_1);
      lVar3 = FUN_0012be18(DAT_0040f4d0,uVar4);
      uVar2 = 1;
      if (lVar3 == 0) {
        uVar2 = 0;
      }
    }
    else if (iVar5 < 2) {
      uVar2 = 1;
      if (iVar5 == 0) {
        (**(code **)((int)plVar6[2] + 0x14))
                  ((int)plVar6 + (int)*(short *)((int)plVar6[2] + 0x10),param_3);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
      if (iVar5 == 2) {
        uVar4 = FUN_00165c78(param_1);
        FUN_0012bdf0(DAT_0040f4d0,uVar4);
        uVar2 = 1;
      }
    }
  }
  else {
    if ((int)plVar6[0x24] - 1U < 2) {
      if (*(char *)((int)plVar6 + 0x11d) != '\x01') {
        return 0;
      }
      *(undefined1 *)((int)plVar6 + 0x11d) = 0;
      (**(code **)((int)plVar6[2] + 0x14))
                ((int)plVar6 + (int)*(short *)((int)plVar6[2] + 0x10),param_3);
      return 0;
    }
LAB_0016a408:
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0016a4c0 @ 0016a4c0 ====

ulong FUN_0016a4c0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
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
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [48];
  
  auVar11 = _qmtc2(param_2);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x1c0));
  auVar5 = _vsub(auVar5,auVar11);
  auVar5 = _vmul(auVar5,auVar5);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar6,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  if ((auVar5._0_4_ < 2.3283064e-10) || (iVar3 = (int)param_1, *(char *)(iVar3 + 0x150) != '\0')) {
    auVar5 = _qmfc2(auVar11._0_4_);
    uVar2 = FUN_0016a5e8(param_1,auVar5._0_8_);
  }
  else {
    auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
    fVar4 = *(float *)(DAT_0040f4d0 + 0x318) * 0.5;
    auVar9 = _qmtc2(fVar4);
    *(float *)(iVar3 + 0x110) = fVar4;
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar5 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0x1c0));
    _vmulabc(auVar7,auVar5);
    _vmaddabc(auVar10,auVar5);
    _vmaddabc(auVar8,auVar5);
    auVar5 = _vmaddbc(auVar6,in_vf0);
    _sqc2(auVar5);
    auVar5 = _vaddbc(auVar5,auVar9);
    auVar5 = _vaddbc(in_vf0,auVar5);
    auStack_60 = _sqc2(auVar5);
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
    auVar6 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
    _vmulabc(auVar7,auVar11);
    _vmaddabc(auVar6,auVar11);
    _vmaddabc(auVar5,auVar11);
    auVar5 = _vmaddbc(auVar8,in_vf0);
    _sqc2(auVar5);
    auVar5 = _vaddbc(auVar5,auVar9);
    auVar5 = _vaddbc(in_vf0,auVar5);
    auStack_50 = _sqc2(auVar5);
    lVar1 = FUN_0027e9b0(auStack_60,iVar3 + 0x130,auStack_40);
    uVar2 = (ulong)(lVar1 != 0);
  }
  return uVar2;
}


// ==== FUN_0016a5e8 @ 0016a5e8 ====

undefined8 FUN_0016a5e8(int param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_c;
  float fStack_8;
  
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x140));
  auVar1 = _qmfc2(auVar8._0_4_);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
  fVar2 = *(float *)(DAT_0040f4d0 + 0x318) * 0.5;
  auVar9 = _qmtc2(param_2);
  auVar4 = _qmtc2(fVar2);
  *(float *)(param_1 + 0x110) = fVar2;
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmulabc(auVar7,auVar9);
  _vmaddabc(auVar5,auVar9);
  _vmaddabc(auVar3,auVar9);
  auVar3 = _vmaddbc(auVar6,in_vf0);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar4 = _vaddbc(in_vf0,auVar3);
  auVar3 = _qmfc2(auVar4._0_4_);
  if (auVar1._0_4_ <= auVar3._0_4_) {
    auVar1 = _sqc2(auVar4);
    fStack_c = auVar1._4_4_;
    fVar2 = fStack_c;
    auVar1 = _sqc2(auVar8);
    fStack_c = auVar1._4_4_;
    if (fStack_c <= fVar2) {
      auVar1 = _sqc2(auVar4);
      fStack_8 = auVar1._8_4_;
      fVar2 = fStack_8;
      auVar1 = _sqc2(auVar8);
      fStack_8 = auVar1._8_4_;
      if (fStack_8 <= fVar2) {
        auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x130));
        auVar1 = _qmfc2(auVar5._0_4_);
        if (auVar3._0_4_ <= auVar1._0_4_) {
          auVar1 = _sqc2(auVar4);
          fStack_c = auVar1._4_4_;
          fVar2 = fStack_c;
          auVar1 = _sqc2(auVar5);
          fStack_c = auVar1._4_4_;
          if (fVar2 <= fStack_c) {
            auVar1 = _sqc2(auVar4);
            fStack_8 = auVar1._8_4_;
            fVar2 = fStack_8;
            auVar1 = _sqc2(auVar5);
            fStack_8 = auVar1._8_4_;
            if (fVar2 <= fStack_8) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


// ==== FUN_0016a720 @ 0016a720 ====

void FUN_0016a720(int param_1)

{
  FUN_0026aa68(0);
  FUN_0026a840(0);
  FUN_001ae5e8(DAT_0040f4c0,param_1 + 0xd0,*(undefined4 *)(param_1 + 0x140),
               *(undefined4 *)(param_1 + 0x130),DAT_00414d10);
  return;
}


// ==== FUN_0016a778 @ 0016a778 ====

undefined4 FUN_0016a778(void)

{
  FUN_00169eb8();
  return 1;
}


// ==== FUN_0016a7a0 @ 0016a7a0 ====

void FUN_0016a7a0(void)

{
  FUN_00169ef8();
  return;
}


// ==== FUN_0016a7c0 @ 0016a7c0 ====

undefined4 FUN_0016a7c0(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  undefined4 in_vuI;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  
  FUN_00169c10();
  *(int *)(param_1 + 0x160) = param_3;
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined4 *)(param_3 + 0x48);
  uVar3 = *(undefined4 *)(param_3 + 0x4c);
  auVar7 = _vmaxbc(in_vf0,in_vf0);
  *(int *)(param_1 + 0x140) = (int)uVar1;
  *(int *)(param_1 + 0x144) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined4 *)(param_3 + 0x38);
  uVar3 = *(undefined4 *)(param_3 + 0x3c);
  *(int *)(param_1 + 0x130) = (int)uVar1;
  *(int *)(param_1 + 0x134) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  auVar15 = _qmtc2(0);
  _lqc2(auStack_80);
  _lqc2(auStack_60);
  auVar4 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  auVar14 = _vadd(in_vf0,in_vf0);
  auVar5 = _vaddbc(in_vf0,auVar4);
  auVar4 = _pextlw(0,0);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar5 = _vsubi(auVar5,in_vuI);
  auVar6 = _vabs(auVar5);
  auVar5 = _pextlw(0x3f800000,auVar4._0_8_);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar6,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar7,in_vuI);
  _vmaddai(auVar7,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar6,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar6 = _vmsubi(auVar7,in_vuI);
  auVar4 = _sqc2(auVar14);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar4;
  auVar4 = _vabs(auVar6);
  uVar2 = auVar5._0_4_;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(int *)(param_1 + 0x84) = auVar5._4_4_;
  *(int *)(param_1 + 0x88) = auVar5._8_4_;
  *(int *)(param_1 + 0x8c) = auVar5._12_4_;
  _ctc2(0x3e800000);
  _vnop();
  auVar4 = _vsubi(auVar4,in_vuI);
  auVar7 = _vmul(auVar4,auVar4);
  _ctc2(0xc2992661);
  _vnop();
  auVar6 = _vmuli(auVar4,in_vuI);
  auVar10 = _vmul(auVar7,auVar7);
  _ctc2(0xc2255de0);
  _vnop();
  auVar12 = _vmuli(auVar4,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar11 = _vmuli(auVar4,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar9 = _vmuli(auVar4,in_vuI);
  auVar8 = _vmul(auVar10,auVar10);
  auVar6 = _vmul(auVar6,auVar7);
  _vmula(auVar12,auVar7);
  _vmadda(auVar6,auVar10);
  _ctc2(0x40c90fda);
  _vmadda(auVar11,auVar10);
  _vmaddai(auVar4,in_vuI);
  auVar4 = _vmadd(auVar9,auVar8);
  auVar11 = _vaddbc(in_vf0,auVar4);
  auVar13 = _vaddbc(in_vf0,auVar4);
  _vmove(auVar13);
  auVar6 = _vsub(in_vf0,auVar4);
  _vmove(auVar11);
  auVar10 = _vaddbc(in_vf0,auVar15);
  auVar9 = _vaddbc(in_vf0,auVar15);
  _vmove(auVar10);
  _vmove(auVar9);
  auVar8 = _vaddbc(in_vf0,auVar4);
  _sqc2(auVar14);
  auVar7 = _vaddbc(in_vf0,auVar6);
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar4;
  auVar4 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar4;
  _sqc2(auVar11);
  _qmtc2(uVar2);
  _vmove(auVar8);
  auVar12 = _vaddbc(in_vf0,auVar7);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x10));
  auVar11 = _vaddbc(in_vf0,auVar7);
  _sqc2(auVar13);
  _vmove(auVar7);
  auVar4 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar4;
  _sqc2(auVar9);
  _vmove(auVar11);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  _sqc2(auVar10);
  auVar4 = _vaddbc(auVar6,auVar4);
  auVar6 = _vaddbc(in_vf0,auVar4);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar7);
  _sqc2(auVar8);
  _sqc2(auVar14);
  _vmove(auVar12);
  _sqc2(auVar14);
  auVar4 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar4;
  auVar4 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xd0) = auVar4;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(int *)(param_1 + 0xe4) = auVar5._4_4_;
  *(int *)(param_1 + 0xe8) = auVar5._8_4_;
  *(int *)(param_1 + 0xec) = auVar5._12_4_;
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0xf0) = auVar4;
  auVar4 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x100) = auVar4;
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar8 = _vaddbc(in_vf0,auVar5);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmove(auVar8);
  auVar10 = _vaddbc(in_vf0,auVar4);
  auVar9 = _vaddbc(in_vf0,auVar5);
  auVar7 = _vaddbc(in_vf0,auVar4);
  auVar4 = _vmulbc(auVar7,auVar6);
  auVar5 = _vmulbc(auVar10,auVar6);
  auVar6 = _vmulbc(auVar9,auVar6);
  auVar5 = _vadd(auVar4,auVar5);
  auVar4 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar4;
  auVar5 = _vadd(auVar5,auVar6);
  auVar4 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar4;
  auVar5 = _vsub(in_vf0,auVar5);
  auVar4 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar4;
  auVar4 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar4;
  auVar4 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar4;
  auVar4 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar4;
  auVar4 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar4;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return 1;
}


// ==== FUN_0016aa78 @ 0016aa78 ====

undefined8 FUN_0016aa78(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_0016a4c0();
  if (*(char *)(param_1 + 0x11d) == '\0') {
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x11d) = 1;
      FUN_00168618(DAT_0040f4f4,*(undefined4 *)(*(int *)(param_1 + 0x160) + 0x50),
                   *(undefined1 *)(*(int *)(param_1 + 0x160) + 0x58),param_3);
    }
  }
  else if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    FUN_00168618(DAT_0040f4f4,*(undefined4 *)(*(int *)(param_1 + 0x160) + 0x54),
                 *(undefined1 *)(*(int *)(param_1 + 0x160) + 0x59),param_3);
  }
  return 0;
}


// ==== FUN_0016ab18 @ 0016ab18 ====

undefined4 FUN_0016ab18(void)

{
  FUN_0016a778();
  return 1;
}


// ==== FUN_0016ab58 @ 0016ab58 ====

void FUN_0016ab58(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00107d20(param_2 * 0xc);
  *(short *)(param_1 + 1) = (short)param_2;
  *param_1 = uVar1;
  *(undefined2 *)((int)param_1 + 6) = 0;
  return;
}


// ==== FUN_0016aba0 @ 0016aba0 ====

void FUN_0016aba0(int param_1)

{
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}


// ==== FUN_0016aba8 @ 0016aba8 ====

void FUN_0016aba8(int *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  if (0 < param_3) {
    *(undefined4 *)(*(short *)((int)param_1 + 6) * 0xc + *param_1) = param_2;
    *(int *)(*(short *)((int)param_1 + 6) * 0xc + *param_1 + 4) = (int)param_3;
    *(undefined4 *)(*(short *)((int)param_1 + 6) * 0xc + *param_1 + 8) = param_4;
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
  }
  return;
}


// ==== FUN_0016ac08 @ 0016ac08 ====

void FUN_0016ac08(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)param_1;
  lVar3 = 0;
  if (0 < *(short *)((int)piVar4 + 6)) {
    iVar5 = 0;
    iVar1 = *piVar4;
    while( true ) {
      lVar3 = (long)((int)lVar3 + 1);
      puVar2 = (undefined4 *)(iVar5 + iVar1);
      iVar5 = iVar5 + 0xc;
      FUN_00168618(DAT_0040f4f4,*puVar2,puVar2[1],puVar2[2]);
      if (*(short *)((int)piVar4 + 6) <= lVar3) break;
      iVar1 = *piVar4;
    }
  }
  FUN_0016aba0(param_1);
  return;
}


// ==== FUN_0016ac98 @ 0016ac98 ====

void FUN_0016ac98(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_0016acb8 @ 0016acb8 ====

undefined4
FUN_0016acb8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  return 1;
}


// ==== FUN_0016ad18 @ 0016ad18 ====

undefined4 FUN_0016ad18(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_0016ade0 @ 0016ade0 ====

void FUN_0016ade0(void)

{
  FUN_0016b670();
  FUN_001d4268();
  return;
}


// ==== FUN_0016ae08 @ 0016ae08 ====

/* Strings referenciadas:
     "gradient"
     "clouds" */

void FUN_0016ae08(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar6;
  long lVar4;
  undefined4 uVar7;
  undefined1 auVar5 [16];
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  auVar5 = _pextlw(0x3f800000,0x3f800000);
  auVar5 = _pextlw(0x3f800000,auVar5._0_8_);
  iVar10 = 0;
  iVar1 = *(int *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x390);
  uVar3 = auVar5._0_4_;
  uVar6 = auVar5._4_4_;
  uVar7 = auVar5._8_4_;
  uVar8 = auVar5._12_4_;
  iVar11 = (int)param_1;
  *(undefined4 *)(iVar11 + 0x98) = 0;
  *(undefined4 *)(iVar11 + 0xb0) = 0x3dcccccd;
  *(undefined4 *)(iVar11 + 0xb4) = 0x42c80000;
  *(undefined4 *)(iVar11 + 0x100) = uVar3;
  *(undefined4 *)(iVar11 + 0x104) = uVar6;
  *(undefined4 *)(iVar11 + 0x108) = uVar7;
  *(undefined4 *)(iVar11 + 0x10c) = uVar8;
  *(undefined4 *)(iVar11 + 0x60) = 0x3f800000;
  *(undefined4 *)(iVar11 + 100) = 0x3f800000;
  *(undefined4 *)(iVar11 + 0x68) = 0x3f800000;
  *(undefined4 *)(iVar11 + 0x6c) = *(undefined4 *)(iVar11 + 0x98);
  *(undefined4 *)(iVar11 + 0x80) = uVar3;
  *(undefined4 *)(iVar11 + 0x84) = uVar6;
  *(undefined4 *)(iVar11 + 0x88) = uVar7;
  *(undefined4 *)(iVar11 + 0x8c) = uVar8;
  *(undefined4 *)(iVar11 + 0xc0) = uVar3;
  *(undefined4 *)(iVar11 + 0xc4) = uVar6;
  *(undefined4 *)(iVar11 + 200) = uVar7;
  *(undefined4 *)(iVar11 + 0xcc) = uVar8;
  *(undefined4 *)(iVar11 + 0xa0) = uVar3;
  *(undefined4 *)(iVar11 + 0xa4) = uVar6;
  *(undefined4 *)(iVar11 + 0xa8) = uVar7;
  *(undefined4 *)(iVar11 + 0xac) = uVar8;
  *(undefined4 *)(iVar11 + 0x90) = 0x3dcccccd;
  *(undefined4 *)(iVar11 + 0xd0) = 0x3dcccccd;
  *(undefined4 *)(iVar11 + 0x94) = 0x42c80000;
  *(undefined4 *)(iVar11 + 0xd4) = 0x42c80000;
  *(undefined4 *)(iVar11 + 0xd8) = 0;
  *(undefined4 *)(iVar11 + 0xb8) = 0;
  *(undefined4 *)(iVar11 + 0xe0) = uVar3;
  *(undefined4 *)(iVar11 + 0xe4) = uVar6;
  *(undefined4 *)(iVar11 + 0xe8) = uVar7;
  *(undefined4 *)(iVar11 + 0xec) = uVar8;
  *(undefined4 *)(iVar11 + 0x120) = uVar3;
  *(undefined4 *)(iVar11 + 0x124) = uVar6;
  *(undefined4 *)(iVar11 + 0x128) = uVar7;
  *(undefined4 *)(iVar11 + 300) = uVar8;
  *(undefined4 *)(iVar11 + 0xf0) = 0;
  *(undefined4 *)(iVar11 + 0x130) = 0;
  *(undefined4 *)(iVar11 + 0x110) = 0;
  puVar2 = PTR_s_gradient_003bcec8;
  if (*(int *)(iVar1 + 8) < 1) {
LAB_0016af18:
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar1 + 0xc);
    while( true ) {
      iVar9 = *(int *)(iVar10 * 0x10 + iVar9 + 8);
      lVar4 = FUN_00360838(iVar9 + 0xa8,puVar2);
      if (lVar4 == 0) break;
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar1 + 8) <= iVar10) goto LAB_0016af18;
      iVar9 = *(int *)(iVar1 + 0xc);
    }
  }
  *(int *)(iVar11 + 0x50) = iVar9;
  puVar2 = PTR_s_clouds_003bcecc;
  iVar10 = 0;
  if (*(int *)(iVar1 + 8) < 1) {
LAB_0016af70:
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar1 + 0xc);
    while( true ) {
      iVar9 = *(int *)(iVar10 * 0x10 + iVar9 + 8);
      lVar4 = FUN_00360838(iVar9 + 0xa8,puVar2);
      if (lVar4 == 0) break;
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar1 + 8) <= iVar10) goto LAB_0016af70;
      iVar9 = *(int *)(iVar1 + 0xc);
    }
  }
  *(int *)(iVar11 + 0x54) = iVar9;
  FUN_0016b690(param_1);
  FUN_001d43b0(*(undefined4 *)(iVar11 + 0x50),*(undefined4 *)(iVar11 + 0x54),0);
  return;
}


// ==== FUN_0016afb0 @ 0016afb0 ====

void FUN_0016afb0(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar7 = *(float *)(DAT_0040f0e0 + 0x20140);
  if (*(float *)(param_1 + 0x110) <= fVar7) {
    *(int *)(param_1 + 0x120) = (int)*(undefined8 *)(param_1 + 0x100);
    *(int *)(param_1 + 0x124) = (int)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x10c);
  }
  else {
    fVar5 = *(float *)(param_1 + 0xf0);
    if (fVar7 <= fVar5) {
      *(int *)(param_1 + 0x120) = (int)*(undefined8 *)(param_1 + 0xe0);
      *(int *)(param_1 + 0x124) = (int)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20);
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xec);
    }
    else {
      auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
      auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x100));
      auVar8 = _qmtc2((fVar7 - fVar5) / (*(float *)(param_1 + 0x110) - fVar5));
      _vaddabc(auVar9,in_vf0);
      _vmsubabc(auVar9,auVar8);
      auVar8 = _vmaddbc(auVar10,auVar8);
      auVar8 = _sqc2(auVar8);
      *(undefined1 (*) [16])(param_1 + 0x120) = auVar8;
    }
  }
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x120));
  _vaddbc(in_vf0,auVar8);
  _vaddbc(in_vf0,auVar8);
  auVar9 = _qmtc2(0);
  _vaddbc(in_vf0,auVar8);
  auVar8 = _vmulbc(in_vf0,auVar9);
  auVar8 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar8;
  if (*(float *)(param_1 + 0xb8) <= fVar7) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
    uVar3 = *(undefined4 *)(param_1 + 0xac);
    uVar6 = *(undefined4 *)(param_1 + 0xb0);
    uVar4 = *(undefined4 *)(param_1 + 0xb4);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x98);
    if (fVar5 < fVar7) {
      fVar7 = (fVar7 - fVar5) / (*(float *)(param_1 + 0xb8) - fVar5);
      auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
      auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
      auVar8 = _qmtc2(fVar7);
      _vaddabc(auVar9,in_vf0);
      _vmsubabc(auVar9,auVar8);
      auVar8 = _vmaddbc(auVar10,auVar8);
      auVar8 = _sqc2(auVar8);
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar8;
      *(float *)(param_1 + 0xd4) =
           *(float *)(param_1 + 0x94) +
           (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0x94)) * fVar7;
      *(float *)(param_1 + 0xd0) =
           *(float *)(param_1 + 0x90) +
           (*(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0x90)) * fVar7;
      goto LAB_0016b0fc;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x88);
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    uVar4 = *(undefined4 *)(param_1 + 0x94);
  }
  *(int *)(param_1 + 0xc0) = (int)uVar1;
  *(int *)(param_1 + 0xc4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  *(undefined4 *)(param_1 + 0xd0) = uVar6;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
LAB_0016b0fc:
  FUN_0016b778(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),param_1,
               *(undefined8 *)(param_1 + 0xc0));
  return;
}


// ==== FUN_0016b118 @ 0016b118 ====

void FUN_0016b118(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
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
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  float afStack_288 [50];
  float afStack_1c0 [52];
  undefined1 auStack_f0 [16];
  
  auVar15 = _qmtc2(param_2);
  uStack_298 = 0x3f800000;
  uStack_294 = 0x3f800000;
  auVar14._8_4_ = 0x3f800000;
  auVar14._0_8_ = 0x3f8000003f800000;
  auVar14._12_4_ = 0x3f800000;
  auVar14 = _lqc2(auVar14);
  iVar4 = 0x18;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  iVar4 = 0x18;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  auVar14 = _vmulbc(auVar14,auVar15);
  uStack_2a0 = 0;
  auVar14 = _vaddbc(in_vf0,auVar14);
  uStack_29c = 0;
  auVar14 = _vmulbc(auVar14,auVar15);
  auVar14 = _vaddbc(in_vf0,auVar14);
  iVar4 = 0;
  auVar14 = _vmulbc(auVar14,auVar15);
  auVar14 = _vaddbc(in_vf0,auVar14);
  fVar13 = 0.5;
  auStack_f0 = _sqc2(auVar14);
  FUN_001d4bd8();
  fVar8 = 24.0;
  FUN_001d4c90();
  FUN_00266088();
  FUN_002684e0(3);
  FUN_00268250(3);
  uStack_290 = 0;
  uStack_28c = 0;
  afStack_288[0] = 64.0;
  afStack_288[1] = 32.0;
  afStack_1c0[0] = DAT_003bced4;
  afStack_1c0[1] = 0.015625;
  afStack_1c0[2] = DAT_003bced4;
  afStack_1c0[3] = 1.015625;
  FUN_00266d28(auStack_f0._0_8_,&uStack_2a0,1,&uStack_290,afStack_1c0);
  fVar12 = -DAT_003bced8 + 15.5;
  fVar9 = (fVar13 - (1.0 - DAT_003bcedc)) * fVar8;
  fVar11 = fVar12 + 1.0;
  fVar10 = fVar8;
  if (fVar9 <= fVar8) {
    fVar10 = fVar9;
  }
  FUN_00268250(7);
  fVar9 = DAT_003bcedc;
  iVar3 = 0;
  pfVar5 = afStack_1c0;
  do {
    iVar6 = iVar3;
    fVar7 = (float)iVar4;
    pfVar5[-0x34] = 0.0;
    iVar4 = iVar4 + 2;
    *pfVar5 = fVar12;
    pfVar5[-0x33] = fVar7;
    pfVar5[1] = fVar10 * 0.03125;
    pfVar5 = pfVar5 + 4;
    fVar10 = (fVar13 - ((1.0 - SQRT((float)iVar4 * 0.041666668)) - fVar9)) * fVar8;
    if (fVar8 < fVar10) {
      fVar10 = 24.0;
      fVar7 = 0.75;
    }
    else {
      fVar7 = fVar10 * 0.03125;
    }
    *(float *)((int)afStack_288 + iVar6 + 4) = (float)iVar4;
    *(undefined4 *)((int)afStack_288 + iVar6) = 0x42800000;
    *(float *)((int)afStack_1c0 + iVar6 + 0xc) = fVar7;
    *(float *)((int)afStack_1c0 + iVar6 + 8) = fVar11;
    iVar3 = iVar6 + 0x10;
  } while (iVar4 < 0x18);
  *(undefined4 *)((int)afStack_288 + iVar6 + 0xc) = 0x41c00000;
  *(undefined4 *)((int)afStack_288 + iVar6 + 8) = 0;
  *(undefined4 *)((int)afStack_1c0 + iVar6 + 0x14) = 0x3f440000;
  *(float *)((int)afStack_1c0 + iVar6 + 0x10) = fVar12;
  fVar10 = 64.0;
  uVar2 = auStack_f0._0_8_;
  *(undefined4 *)((int)afStack_288 + iVar6 + 0x14) = 0x42000000;
  *(undefined4 *)((int)afStack_288 + iVar6 + 0x10) = 0x42800000;
  *(float *)((int)afStack_1c0 + iVar6 + 0x18) = fVar11;
  *(undefined4 *)((int)afStack_1c0 + iVar6 + 0x1c) = 0x3f820000;
  FUN_00266d28(uVar2,&uStack_2a0,0xd,&uStack_290,afStack_1c0);
  FUN_00268250(4);
  afStack_1c0[0] = DAT_003bced4 + 0.5;
  afStack_288[1] = 32.0;
  uStack_290 = 0;
  uStack_28c = 0;
  afStack_1c0[1] = 0.015625;
  afStack_1c0[3] = 1.015625;
  afStack_288[0] = fVar10;
  afStack_1c0[2] = afStack_1c0[0];
  FUN_00266d28(auStack_f0._0_8_,&uStack_2a0,1,&uStack_290,afStack_1c0);
  FUN_002662a8();
  FUN_001d4c78();
  return;
}


// ==== FUN_0016b4f8 @ 0016b4f8 ====

void FUN_0016b4f8(void)

{
  undefined1 in_zero_qw [16];
  undefined1 auVar1 [16];
  undefined1 in_a1_qw [16];
  
  auVar1 = _por(in_zero_qw,in_a1_qw);
  FUN_001d4630(0,0,auVar1._0_8_);
  FUN_001d4858();
  if (cGpffff81c3 == '\0') {
    FUN_001d4a50(0,0);
    FUN_001d4a50(0,1);
    FUN_001d4a50(0,2);
  }
  else {
    FUN_001d4a50(0,3);
    FUN_001d4a50(0,4);
    FUN_001d4a50(0,5);
  }
  FUN_001d4998();
  return;
}


// ==== FUN_0016b590 @ 0016b590 ====

void FUN_0016b590(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(DAT_0040f0e0 + 0x20140);
  *(int *)(param_1 + 0xf0) = (int)*(undefined8 *)(param_1 + 0x130);
  *(int *)(param_1 + 0xf4) = (int)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 300);
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(int *)(param_1 + 0x100) = (int)uVar1;
  *(int *)(param_1 + 0x104) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  uVar1 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((int)param_2 + 0x1c);
  *(float *)(param_1 + 0xf0) = fVar4;
  *(int *)(param_1 + 0x110) = (int)uVar1;
  *(int *)(param_1 + 0x114) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(float *)(param_1 + 0x110) = fVar4 + *(float *)(param_2 + 2);
  return;
}


// ==== FUN_0016b5e0 @ 0016b5e0 ====

void FUN_0016b5e0(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(DAT_0040f0e0 + 0x20140);
  *(int *)(param_1 + 0x90) = (int)*(undefined8 *)(param_1 + 0xd0);
  *(int *)(param_1 + 0x94) = (int)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xcc);
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(int *)(param_1 + 0xa0) = (int)uVar1;
  *(int *)(param_1 + 0xa4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  uVar1 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((int)param_2 + 0x1c);
  *(float *)(param_1 + 0x98) = fVar4;
  *(int *)(param_1 + 0xb0) = (int)uVar1;
  *(int *)(param_1 + 0xb4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(float *)(param_1 + 0xb8) = fVar4 + *(float *)(param_2 + 3);
  return;
}


// ==== FUN_0016b630 @ 0016b630 ====

undefined8 FUN_0016b630(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0016b788();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_001d4618();
  }
  return uVar2;
}


// ==== FUN_0016b670 @ 0016b670 ====

void FUN_0016b670(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_001c31f8();
  return;
}


// ==== FUN_0016b690 @ 0016b690 ====

undefined8 FUN_0016b690(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0x1c) {
    if (iVar1 < 0x1d) {
      if (iVar1 != 1) {
        return 1;
      }
    }
    else if (iVar1 != 0x37) {
      return 1;
    }
    auVar2 = _pextlw(0,0);
    auVar2 = _pextlw(0,auVar2._0_8_);
    *(undefined4 *)(param_1 + 0x48) = 0x1c;
    *(int *)(param_1 + 0x30) = auVar2._0_4_;
    *(int *)(param_1 + 0x34) = auVar2._4_4_;
    *(int *)(param_1 + 0x38) = auVar2._8_4_;
    *(int *)(param_1 + 0x3c) = auVar2._12_4_;
    *(undefined4 *)(param_1 + 0x40) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x44) = 0x42c80000;
  }
  return 1;
}


// ==== FUN_0016b710 @ 0016b710 ====

void FUN_0016b710(int param_1)

{
  FUN_001c3228(*(undefined4 *)(param_1 + 0x44));
  return;
}


// ==== FUN_0016b730 @ 0016b730 ====

void FUN_0016b730(int param_1)

{
  FUN_001c3278(*(undefined4 *)(param_1 + 0x40),0,param_1,*(undefined4 *)(param_1 + 0x30));
  return;
}


// ==== FUN_0016b758 @ 0016b758 ====

void FUN_0016b758(void)

{
  FUN_001c32b8();
  return;
}


// ==== FUN_0016b778 @ 0016b778 ====

void FUN_0016b778(undefined4 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(undefined4 *)(param_3 + 0x44) = param_2;
  *(int *)(param_3 + 0x30) = (int)param_4;
  *(int *)(param_3 + 0x34) = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(param_3 + 0x38) = in_a1_udw;
  *(undefined4 *)(param_3 + 0x3c) = in_register_0000005c;
  *(undefined4 *)(param_3 + 0x40) = param_1;
  return;
}


// ==== FUN_0016b788 @ 0016b788 ====

undefined4 FUN_0016b788(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0x37;
  return 1;
}


// ==== FUN_0016b798 @ 0016b798 ====

void FUN_0016b798(void)

{
  return;
}


// ==== FUN_0016b7a0 @ 0016b7a0 ====

void FUN_0016b7a0(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fStack_7c;
  
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      pauVar6 = (undefined1 (*) [16])(uVar7 * 0x30 + param_1);
      iVar5 = *(int *)(pauVar6[2] + 4);
      if (iVar5 == 0) {
        fVar8 = SUB164(pauVar6[1],4);
LAB_0016b7fc:
        if (0.9 <= fVar8) {
          if (iVar5 == 0) {
            iVar5 = *(int *)(pauVar6[2] + 8);
          }
          if (pauVar6[2][0xc] == '\0') {
            iVar4 = *(int *)(iVar5 + 0x10);
          }
          else {
            if (*(byte *)(iVar5 + 0xc9) < bGpffff81c6) {
              iVar4 = *(int *)(iVar5 + 0xc4);
              if (1 < iVar4 - 1U) {
                if ((iVar4 - 3U < 2) || (bVar2 = false, iVar4 == 7)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  FUN_0016bbf8(iVar5,*(undefined8 *)*pauVar6);
                  cVar1 = *(char *)(iVar5 + 0xc9);
                }
                else {
                  cVar1 = *(char *)(iVar5 + 0xc9);
                }
                *(char *)(iVar5 + 0xc9) = cVar1 + '\x01';
              }
              goto LAB_0016b9a0;
            }
            iVar4 = *(int *)(iVar5 + 0x10);
          }
          lVar3 = (**(code **)(iVar4 + 0x6c))(iVar5 + *(short *)(iVar4 + 0x68),pauVar6);
          if (lVar3 != 0) {
            auVar11 = _lqc2(*pauVar6);
            auVar12 = _vaddbc(in_vf0,in_vf0);
            auVar9 = _lqc2(*(undefined1 (*) [16])(DAT_0040f4d0 + 0xd0));
            auVar10 = _sqc2(auVar11);
            auVar9 = _vsub(auVar9,auVar11);
            auVar9 = _vmul(auVar9,auVar9);
            _vaddabc(auVar9,auVar9);
            auVar9 = _vmaddbc(auVar12,auVar9);
            fStack_7c = auVar10._4_4_;
            _vnop();
            _vnop();
            _vnop();
            _vsqrt(auVar9);
            auVar10 = _vaddbc(in_vf0,in_vf0);
            uVar13 = _vwaitq();
            auVar10 = _vmulq(auVar10,uVar13);
            auVar10 = _qmfc2(auVar10._0_4_);
            if (15.0 < fStack_7c) {
              FUN_00110698(0x3f19999a,DAT_0040f4bc,1,1);
              sGpffff81c4 = 0x32;
            }
            else if (auVar10._0_4_ < 25.0) {
              fVar8 = auVar10._0_4_ / 25.0;
              FUN_00110698((2.0 - (fVar8 + fVar8)) * 0.6,DAT_0040f4bc,1,1);
            }
          }
        }
      }
      else if (*(int *)(pauVar6[2] + 8) == 0) {
        fVar8 = SUB164(pauVar6[1],4);
        goto LAB_0016b7fc;
      }
LAB_0016b9a0:
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
  }
  if (0 < sGpffff81c4) {
    if ((int)sGpffff81c4 % 10 == 0) {
      FUN_00110698(0x3f19999a,DAT_0040f4bc,1,1);
    }
    sGpffff81c4 = sGpffff81c4 + -1;
  }
  return;
}


// ==== FUN_0016ba18 @ 0016ba18 ====

void FUN_0016ba18(int param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_60 = (undefined4)param_2;
  uStack_5c = (undefined4)((ulong)param_2 >> 0x20);
  if ((*(byte *)(param_1 + 0xc9) < bGpffff81c7) &&
     (((*(int *)(param_1 + 0x38c) == 1 || (*(int *)(param_1 + 0x38c) == 2)) &&
      (*(byte *)(param_1 + 0xc9) == 0)))) {
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar4 = _vsub(in_vf0,in_vf0);
    auVar1 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auStack_1e0 = _sqc2(auVar1);
    auStack_1d0 = _sqc2(auVar2);
    auStack_1c0 = _sqc2(auVar3);
    auStack_1b0 = _sqc2(auVar4);
    uStack_58 = in_a1_udw;
    uStack_54 = in_register_0000005c;
    FUN_001a6ab0(*(undefined4 *)(param_1 + 0x330),auStack_1a0);
    auVar2 = _qmtc2(0x3f000000);
    auVar1._4_4_ = uStack_5c;
    auVar1._0_4_ = uStack_60;
    auVar1._8_4_ = uStack_58;
    auVar1._12_4_ = uStack_54;
    auVar1 = _lqc2(auVar1);
    auVar8 = _vaddbc(auVar1,auVar2);
    auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
    auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar6 = _lqc2(auStack_180);
    auVar2 = _lqc2(auStack_170);
    _vmulabc(auVar5,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar7 = _vmaddbc(auVar3,auVar6);
    _vmulabc(auVar5,auVar2);
    _vmaddabc(auVar4,auVar2);
    _vmaddabc(auVar3,auVar2);
    auVar2 = _vmaddbc(auVar1,in_vf0);
    auVar6 = _lqc2(auStack_1a0);
    auVar1 = _lqc2(auStack_190);
    _sqc2(auVar2);
    _vmulabc(auVar5,auVar6);
    _vmaddabc(auVar4,auVar6);
    auVar6 = _vmaddbc(auVar3,auVar6);
    _vmulabc(auVar5,auVar1);
    _vmaddabc(auVar4,auVar1);
    auVar3 = _vmaddbc(auVar3,auVar1);
    auStack_70 = _sqc2(auVar2);
    auStack_b0 = _sqc2(auVar2);
    auStack_f0 = _sqc2(auVar2);
    auStack_170 = _sqc2(auVar2);
    auStack_130 = _sqc2(auVar2);
    auVar1 = _vaddbc(in_vf0,auVar8);
    auStack_160 = _sqc2(auVar6);
    auStack_150 = _sqc2(auVar3);
    auStack_140 = _sqc2(auVar7);
    auStack_1b0 = _sqc2(auVar1);
    auStack_a0 = _sqc2(auVar6);
    auStack_90 = _sqc2(auVar3);
    auStack_80 = _sqc2(auVar7);
    auStack_e0 = _sqc2(auVar6);
    auStack_d0 = _sqc2(auVar3);
    auStack_c0 = _sqc2(auVar7);
    auStack_120 = _sqc2(auVar6);
    auStack_110 = _sqc2(auVar3);
    auStack_100 = _sqc2(auVar7);
    auStack_1a0 = _sqc2(auVar6);
    auStack_190 = _sqc2(auVar3);
    auStack_180 = _sqc2(auVar7);
    FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_1e0,0x7e048c5a7baca93d,0);
    FUN_001b7a00(DAT_0040f4d8 + 0x696f0,param_1 + 0x70,0x7e048c5a7baca93c,0);
    *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
  }
  return;
}


// ==== FUN_0016bbf8 @ 0016bbf8 ====

void FUN_0016bbf8(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  auStack_30._8_4_ = in_a1_udw;
  auStack_30._0_8_ = param_2;
  auStack_30._12_4_ = in_register_0000005c;
  iVar5 = (int)param_1;
  if ((*(byte *)(iVar5 + 0xc9) & 1) != 0) {
    return;
  }
  if (*(int *)(iVar5 + 0xc4) == 3) {
    fVar6 = (float)FUN_00152a50(param_1);
LAB_0016bc58:
    if (fVar6 < 0.2) goto LAB_0016bcd4;
    uVar4 = 0x7e048c5a7baca93e;
    auVar8 = _lqc2(auStack_30);
    if (fVar6 < 0.8) {
      uVar4 = 0x7e048c5a7baca93d;
      goto LAB_0016bcf4;
    }
  }
  else {
    if (*(int *)(iVar5 + 0xc4) == 4) {
      fVar6 = (float)FUN_0014a438(param_1);
      goto LAB_0016bc58;
    }
LAB_0016bcd4:
    uVar4 = 0x7e048c5a7baca93c;
  }
  auVar8 = _lqc2(auStack_30);
LAB_0016bcf4:
  auVar7 = _qmtc2(0x3f000000);
  auVar7 = _vaddbc(auVar8,auVar7);
  _qmfc2(auVar8._0_4_);
  auVar8 = _vaddbc(in_vf0,auVar7);
  auStack_30 = _sqc2(auVar8);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auStack_70 = _sqc2(auVar8);
  auStack_60 = _sqc2(auVar7);
  auStack_50 = _sqc2(auVar9);
  uStack_40 = auStack_30._0_4_;
  uStack_3c = auStack_30._4_4_;
  uStack_38 = auStack_30._8_4_;
  uStack_34 = auStack_30._12_4_;
  FUN_001b7a00(DAT_0040f4d8 + 0x696f0,auStack_70,uVar4,0);
  if (param_1 != 0) {
    iVar1 = *(int *)(iVar5 + 0xc4);
    if ((iVar1 - 3U < 2) || (bVar2 = false, iVar1 == 7)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)(iVar5 + 0x13d) == '\0') {
        cVar3 = '\0';
      }
      else {
        cVar3 = *(char *)(*(int *)(iVar5 + 0x11c) + 0x44);
      }
      if (((cVar3 == '\0') && (*(char *)(iVar5 + 0x13c) != '\0')) && (iVar1 != 7)) {
        (**(code **)(*(int *)(iVar5 + 0x10) + 0x24))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x10) + 0x20));
        FUN_00129240(DAT_0040f4d0,param_1,0);
      }
    }
  }
  return;
}


// ==== FUN_0016be08 @ 0016be08 ====

void FUN_0016be08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}


// ==== FUN_0016be10 @ 0016be10 ====

void FUN_0016be10(void)

{
  if (*(int *)(DAT_0040f4d0 + 0x8f4) < 1) {
    DAT_003bcee8 = 0;
  }
  else {
    DAT_003bcee8 = FUN_00107d20(*(int *)(DAT_0040f4d0 + 0x8f4) * 0xc);
  }
  return;
}


// ==== FUN_0016be60 @ 0016be60 ====

void FUN_0016be60(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(*DAT_0040f4e0 + 1) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar1 = FUN_00107d20();
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  return;
}


// ==== FUN_0016bea8 @ 0016bea8 ====

undefined4 FUN_0016bea8(void)

{
  uGpffff81c8 = 0;
  DAT_003bcee4 = 0;
  uGpffff81c9 = 0;
  uGpffff81ca = 0;
  uGpffff81cb = 0;
  uGpffff81cc = 0;
  uGpffff81cd = 0;
  uGpffff81ce = 0;
  uGpffff81d0 = 0;
  uGpffff81d2 = 0;
  return 1;
}


// ==== FUN_0016bee0 @ 0016bee0 ====

void FUN_0016bee0(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  uGpffff81c8 = 1;
  DAT_003bcee4 = *(undefined4 *)(*DAT_0040f4dc + 4);
  DAT_003bcee0 = param_2;
  FUN_001f2c68(DAT_0040f51c,0x34,0,1,0x3f8000003e4ccccd);
  iVar7 = DAT_0040f4d0 + *(int *)(param_1 + 9) * 0x8c0 + 0x30;
  cVar1 = *(char *)(iVar7 + 0x2c3);
  pcVar3 = *(char **)(cVar1 * 4 + *(int *)(iVar7 + 0x2a0));
  cVar2 = *pcVar3;
  *param_1 = *(undefined8 *)(cVar2 * 0x20 + *(int *)(*DAT_0040f4e0 + 4));
  *(undefined1 *)((int)param_1 + 0x4e) = *(undefined1 *)(*(int *)(iVar7 + 0x294) + (int)cVar2);
  *(char *)((int)param_1 + 0x4c) = pcVar3[0x108];
  uVar4 = FUN_001580e0(pcVar3);
  *(undefined4 *)((int)param_1 + 0x3c) = uVar4;
  puVar5 = *(undefined4 **)(iVar7 + 0x2a0) + 1;
  if (cVar1 != '\0') {
    puVar5 = *(undefined4 **)(iVar7 + 0x2a0);
  }
  pcVar3 = (char *)*puVar5;
  if (pcVar3 == (char *)0x0) {
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 0x4f) = 0;
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    cVar1 = *pcVar3;
    param_1[1] = *(undefined8 *)(cVar1 * 0x20 + *(int *)(*DAT_0040f4e0 + 4));
    *(undefined1 *)((int)param_1 + 0x4f) = *(undefined1 *)(*(int *)(iVar7 + 0x294) + (int)cVar1);
    *(char *)((int)param_1 + 0x4d) = pcVar3[0x108];
    uVar4 = FUN_001580e0(pcVar3);
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  iVar6 = 0;
  puVar5 = (undefined4 *)((int)param_1 + 0x14);
  do {
    uVar4 = FUN_00155130(iVar7 + 0x280,iVar6);
    iVar6 = iVar6 + 1;
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while (iVar6 < 10);
  iVar6 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar6 == 1) {
    *(undefined4 *)(param_1 + 2) = 0x44960000;
  }
  else if (iVar6 < 2) {
    if (iVar6 != 0) {
      iVar7 = (int)*(char *)(iVar7 + 0x8a1);
      goto LAB_0016c120;
    }
    *(undefined4 *)(param_1 + 2) = 0x44960000;
  }
  else {
    if (3 < iVar6) {
      iVar7 = (int)*(char *)(iVar7 + 0x8a1);
      goto LAB_0016c120;
    }
    *(undefined4 *)(param_1 + 2) = 0x443b8000;
  }
  iVar7 = (int)*(char *)(iVar7 + 0x8a1);
LAB_0016c120:
  *(int *)((int)param_1 + 0x44) = iVar7;
  uGpffff81c9 = *(undefined1 *)(*DAT_0040f4dc + 0x15);
  uGpffff81ca = *(undefined1 *)(*DAT_0040f4dc + 0x16);
  uGpffff81cb = *(undefined1 *)(*DAT_0040f4dc + 0x17);
  uGpffff81cc = *(undefined1 *)(*DAT_0040f4dc + 0x18);
  uGpffff81cd = *(undefined1 *)(*DAT_0040f4dc + 0x19);
  uGpffff81ce = *(undefined1 *)(*DAT_0040f4dc + 0x1a);
  uGpffff81d0 = *(undefined2 *)(*DAT_0040f4dc + 0x1c);
  uGpffff81d2 = *(undefined2 *)(*DAT_0040f4dc + 0x1e);
  FUN_0035c544(DAT_003bcee8,*(undefined4 *)(DAT_0040f4d0 + 0x8f0),
               *(int *)(DAT_0040f4d0 + 0x8f4) * 0xc);
  FUN_0035c544(*(undefined4 *)(param_1 + 10),
               *(undefined4 *)(*(int *)(param_1 + 9) * 0x8c0 + DAT_0040f4d0 + 0x2c4),
               *(undefined1 *)(*DAT_0040f4e0 + 1));
  DAT_0040eafc = 1;
  FUN_001f2db0(DAT_0040f51c);
  return;
}


// ==== FUN_0016c220 @ 0016c220 ====

void FUN_0016c220(void)

{
  if (DAT_0040d9b8 != '\0') {
    *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = (undefined1)DAT_003bcee0;
  }
  return;
}


// ==== FUN_0016c250 @ 0016c250 ====

void FUN_0016c250(int param_1)

{
  if (DAT_0040d9b8 != '\0') {
    FUN_0035c544(*(undefined4 *)(*(int *)(param_1 + 0x48) * 0x8c0 + DAT_0040f4d0 + 0x2c4),
                 *(undefined4 *)(param_1 + 0x50),*(undefined1 *)(*DAT_0040f4e0 + 1));
  }
  return;
}


// ==== FUN_0016c2a8 @ 0016c2a8 ====

void FUN_0016c2a8(void)

{
  FUN_0035c544(*(undefined4 *)(DAT_0040f4d0 + 0x8f0),DAT_003bcee8,
               *(int *)(DAT_0040f4d0 + 0x8f4) * 0xc);
  *(undefined1 *)(*DAT_0040f4dc + 0x15) = DAT_0040d9b9;
  *(undefined1 *)(*DAT_0040f4dc + 0x16) = DAT_0040d9ba;
  *(undefined1 *)(*DAT_0040f4dc + 0x17) = DAT_0040d9bb;
  *(undefined1 *)(*DAT_0040f4dc + 0x18) = DAT_0040d9bc;
  *(undefined1 *)(*DAT_0040f4dc + 0x19) = DAT_0040d9bd;
  *(undefined1 *)(*DAT_0040f4dc + 0x1a) = DAT_0040d9be;
  *(undefined2 *)(*DAT_0040f4dc + 0x1c) = DAT_0040d9c0;
  *(undefined2 *)(*DAT_0040f4dc + 0x1e) = DAT_0040d9c2;
  *(undefined4 *)(*DAT_0040f4dc + 4) = DAT_003bcee4;
  return;
}


// ==== FUN_0016c380 @ 0016c380 ====

void FUN_0016c380(void)

{
  DAT_003bcee0 = 0xffffffff;
  DAT_0040d9b8 = 0;
  *(undefined1 *)(DAT_0040f0e0 + 0x2020d) = 1;
  DAT_0040eafc = 0;
  return;
}


// ==== FUN_0016c3b8 @ 0016c3b8 ====

void FUN_0016c3b8(long *param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 9;
  plVar3 = param_1 + 7;
  do {
    *(undefined4 *)plVar3 = 0;
    iVar5 = iVar5 + -1;
    plVar3 = (long *)((int)plVar3 + -4);
  } while (-1 < iVar5);
  iVar5 = *(int *)(DAT_0040f0e0 + 0x2014c);
  if (iVar5 == 1) {
    *(undefined4 *)(param_1 + 2) = 0x44960000;
  }
  else if (iVar5 < 2) {
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 2) = 0x44960000;
    }
  }
  else if ((iVar5 == 2) || (iVar5 == 3)) {
    *(undefined4 *)(param_1 + 2) = 0x443b8000;
  }
  if (*(int *)(DAT_0040f0e0 + 0x21074) == DAT_0040f0e0 + 0x20fa0) {
    lVar4 = FUN_00106828();
    *param_1 = lVar4;
  }
  else if (*(int *)(DAT_0040f0e0 + 0x21074) == DAT_0040f0e0 + 0x20fd8) {
    lVar4 = FUN_00107008();
    *param_1 = lVar4;
  }
  else {
    *param_1 = *(long *)(param_2 + 0x20);
  }
  param_1[1] = *(long *)(param_2 + 0x28);
  if (*(char *)(DAT_0040f4d0 + 0x5ca1) == '\0') {
    iVar5 = 0;
    uVar6 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    if (uVar6 != 0) {
      plVar3 = *(long **)(*DAT_0040f4e0 + 4);
      iVar7 = 0x1000000;
      do {
        uVar2 = (undefined1)iVar5;
        if (*plVar3 == *param_1) goto LAB_0016c5bc;
        plVar3 = plVar3 + 4;
        iVar5 = iVar7 >> 0x18;
        iVar7 = iVar7 + 0x1000000;
      } while (iVar5 < (int)uVar6);
    }
  }
  else {
    uVar6 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    iVar5 = 0;
    if (uVar6 != 0) {
      plVar3 = *(long **)(*DAT_0040f4e0 + 4);
      iVar7 = 0x1000000;
      do {
        uVar2 = (undefined1)iVar5;
        if (*plVar3 == 0x5446129c3e9d8000) goto LAB_0016c5bc;
        plVar3 = plVar3 + 4;
        iVar5 = iVar7 >> 0x18;
        iVar7 = iVar7 + 0x1000000;
      } while (iVar5 < (int)uVar6);
      uVar2 = 0xff;
      goto LAB_0016c5bc;
    }
  }
  uVar2 = 0xff;
LAB_0016c5bc:
  iVar5 = FUN_0015d248(DAT_0040f4e0,uVar2,0);
  *(uint *)((int)param_1 + *(char *)(iVar5 + 100) * 4 + 0x14) = (uint)*(ushort *)(param_2 + 0x34);
  iVar5 = FUN_0015d248(DAT_0040f4e0,uVar2,0);
  *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)(iVar5 + 0x60);
  if (param_1[1] == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uVar6 = (uint)*(byte *)(*DAT_0040f4e0 + 1);
    iVar5 = 0;
    if (uVar6 != 0) {
      plVar3 = *(long **)(*DAT_0040f4e0 + 4);
      iVar7 = 0x1000000;
      do {
        uVar2 = (undefined1)iVar5;
        if (*plVar3 == param_1[1]) goto LAB_0016c654;
        plVar3 = plVar3 + 4;
        iVar5 = iVar7 >> 0x18;
        iVar7 = iVar7 + 0x1000000;
      } while (iVar5 < (int)uVar6);
    }
    uVar2 = 0xff;
LAB_0016c654:
    iVar5 = FUN_0015d248(DAT_0040f4e0,uVar2,0);
    *(uint *)((int)param_1 + *(char *)(iVar5 + 100) * 4 + 0x14) = (uint)*(ushort *)(param_2 + 0x36);
    iVar5 = FUN_0015d248(DAT_0040f4e0,uVar2,0);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar5 + 0x60);
  }
  uVar1 = *(ushort *)(param_2 + 0x38);
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(uint *)(param_1 + 6) = (uint)uVar1;
  *(bool *)((int)param_1 + 0x4e) = *(char *)(param_2 + 0x3a) != '\0';
  *(bool *)((int)param_1 + 0x4f) = *(char *)(param_2 + 0x3b) != '\0';
  *(bool *)((int)param_1 + 0x4c) = *(char *)(param_2 + 0x3a) != '\0';
  *(bool *)((int)param_1 + 0x4d) = *(char *)(param_2 + 0x3b) != '\0';
  return;
}


// ==== FUN_0016c700 @ 0016c700 ====

void FUN_0016c700(void)

{
  DAT_0040d9b8 = 0;
  return;
}


// ==== FUN_0016c708 @ 0016c708 ====

void FUN_0016c708(void)

{
  FUN_00169bf0();
  return;
}


// ==== FUN_0016c728 @ 0016c728 ====

undefined4 FUN_0016c728(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  undefined4 in_vuI;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  
  FUN_00169c10();
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0x130) = param_3;
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined4 *)(param_3 + 0x48);
  uVar3 = *(undefined4 *)(param_3 + 0x4c);
  *(int *)(iVar4 + 0x150) = (int)uVar1;
  *(int *)(iVar4 + 0x154) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x158) = uVar2;
  *(undefined4 *)(iVar4 + 0x15c) = uVar3;
  auVar8 = _vmaxbc(in_vf0,in_vf0);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined4 *)(param_3 + 0x38);
  uVar3 = *(undefined4 *)(param_3 + 0x3c);
  *(int *)(iVar4 + 0x140) = (int)uVar1;
  *(int *)(iVar4 + 0x144) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x148) = uVar2;
  *(undefined4 *)(iVar4 + 0x14c) = uVar3;
  auVar16 = _qmtc2(0);
  _lqc2(auStack_80);
  _lqc2(auStack_60);
  auVar5 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  auVar15 = _vadd(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,auVar5);
  auVar5 = _pextlw(0,0);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar6 = _vsubi(auVar6,in_vuI);
  auVar7 = _vabs(auVar6);
  auVar6 = _pextlw(0x3f800000,auVar5._0_8_);
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
  auVar5 = _sqc2(auVar15);
  *(undefined1 (*) [16])(iVar4 + 0xa0) = auVar5;
  auVar5 = _vabs(auVar7);
  uVar2 = auVar6._0_4_;
  *(undefined4 *)(iVar4 + 0x80) = uVar2;
  *(int *)(iVar4 + 0x84) = auVar6._4_4_;
  *(int *)(iVar4 + 0x88) = auVar6._8_4_;
  *(int *)(iVar4 + 0x8c) = auVar6._12_4_;
  _ctc2(0x3e800000);
  _vnop();
  auVar5 = _vsubi(auVar5,in_vuI);
  auVar8 = _vmul(auVar5,auVar5);
  _ctc2(0xc2992661);
  _vnop();
  auVar7 = _vmuli(auVar5,in_vuI);
  auVar11 = _vmul(auVar8,auVar8);
  _ctc2(0xc2255de0);
  _vnop();
  auVar13 = _vmuli(auVar5,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar12 = _vmuli(auVar5,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar10 = _vmuli(auVar5,in_vuI);
  auVar9 = _vmul(auVar11,auVar11);
  auVar7 = _vmul(auVar7,auVar8);
  _vmula(auVar13,auVar8);
  _vmadda(auVar7,auVar11);
  _ctc2(0x40c90fda);
  _vmadda(auVar12,auVar11);
  _vmaddai(auVar5,in_vuI);
  auVar5 = _vmadd(auVar10,auVar9);
  auVar12 = _vaddbc(in_vf0,auVar5);
  auVar14 = _vaddbc(in_vf0,auVar5);
  _vmove(auVar14);
  auVar7 = _vsub(in_vf0,auVar5);
  _vmove(auVar12);
  auVar11 = _vaddbc(in_vf0,auVar16);
  auVar10 = _vaddbc(in_vf0,auVar16);
  _vmove(auVar11);
  _vmove(auVar10);
  auVar9 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar15);
  auVar8 = _vaddbc(in_vf0,auVar7);
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar4 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar4 + 0x70) = auVar5;
  _sqc2(auVar12);
  _qmtc2(uVar2);
  _vmove(auVar9);
  auVar13 = _vaddbc(in_vf0,auVar8);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x10));
  auVar12 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar14);
  _vmove(auVar8);
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar4 + 0xa0) = auVar5;
  _sqc2(auVar10);
  _vmove(auVar12);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  _sqc2(auVar11);
  auVar5 = _vaddbc(auVar7,auVar5);
  auVar7 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar8);
  _sqc2(auVar9);
  _sqc2(auVar8);
  _sqc2(auVar9);
  _sqc2(auVar15);
  _vmove(auVar13);
  _sqc2(auVar15);
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar4 + 0xa0) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar4 + 0xd0) = auVar5;
  *(undefined4 *)(iVar4 + 0xe0) = uVar2;
  *(int *)(iVar4 + 0xe4) = auVar6._4_4_;
  *(int *)(iVar4 + 0xe8) = auVar6._8_4_;
  *(int *)(iVar4 + 0xec) = auVar6._12_4_;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar4 + 0xf0) = auVar5;
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(iVar4 + 0x100) = auVar5;
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x80));
  auVar9 = _vaddbc(in_vf0,auVar6);
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar4 + 0x90));
  _vmove(auVar9);
  auVar11 = _vaddbc(in_vf0,auVar5);
  auVar10 = _vaddbc(in_vf0,auVar6);
  auVar8 = _vaddbc(in_vf0,auVar5);
  auVar5 = _vmulbc(auVar8,auVar7);
  auVar6 = _vmulbc(auVar11,auVar7);
  auVar7 = _vmulbc(auVar10,auVar7);
  auVar6 = _vadd(auVar5,auVar6);
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(iVar4 + 0x70) = auVar5;
  auVar6 = _vadd(auVar6,auVar7);
  auVar5 = _sqc2(auVar13);
  *(undefined1 (*) [16])(iVar4 + 0x80) = auVar5;
  auVar6 = _vsub(in_vf0,auVar6);
  auVar5 = _sqc2(auVar12);
  *(undefined1 (*) [16])(iVar4 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(iVar4 + 0x70) = auVar5;
  auVar5 = _sqc2(auVar11);
  *(undefined1 (*) [16])(iVar4 + 0x80) = auVar5;
  auVar5 = _sqc2(auVar10);
  *(undefined1 (*) [16])(iVar4 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar6);
  *(undefined1 (*) [16])(iVar4 + 0xa0) = auVar5;
  *(undefined1 *)(iVar4 + 0x11c) = 0;
  FUN_0016cdc8(param_1,0x40c90fda,0x42a33457,0x421ed7b7,0x3fc90fdb,0xffffffffc2992661,
               0xffffffffc2255de0,0x4b400000);
  return 1;
}


// ==== FUN_0016c9e8 @ 0016c9e8 ====

undefined4 FUN_0016c9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = FUN_0016cb50();
  iVar6 = (int)param_1;
  if (cVar1 == '\x01') {
    if (*(int *)(iVar6 + 0x120) - 1U < 2) {
      if (*(char *)(iVar6 + 0x11d) == '\x01') {
        return 0;
      }
      if (*(char *)(iVar6 + 0x11d) == '\0') {
        *(undefined1 *)(iVar6 + 0x11d) = 1;
        (**(code **)(*(int *)(iVar6 + 0x10) + 0x14))
                  (iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0x10),param_3);
        goto LAB_0016ca94;
      }
      iVar5 = *(int *)(iVar6 + 0x124);
    }
    else {
      iVar5 = *(int *)(iVar6 + 0x124);
    }
    if (iVar5 == 1) {
      uVar4 = FUN_00165c78(param_1);
      lVar3 = FUN_0012be18(DAT_0040f4d0,uVar4);
      uVar2 = 1;
      if (lVar3 == 0) {
        uVar2 = 0;
      }
    }
    else if (iVar5 < 2) {
      uVar2 = 1;
      if (iVar5 == 0) {
        (**(code **)(*(int *)(iVar6 + 0x10) + 0x14))
                  (iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0x10),param_3);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
      if (iVar5 == 2) {
        uVar4 = FUN_00165c78(param_1);
        FUN_0012bdf0(DAT_0040f4d0,uVar4);
        uVar2 = 1;
      }
    }
  }
  else {
    if (*(int *)(iVar6 + 0x120) - 1U < 2) {
      if (*(char *)(iVar6 + 0x11d) != '\x01') {
        return 0;
      }
      *(undefined1 *)(iVar6 + 0x11d) = 0;
      (**(code **)(*(int *)(iVar6 + 0x10) + 0x14))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x10) + 0x10),param_3);
      return 0;
    }
LAB_0016ca94:
    uVar2 = 0;
  }
  return uVar2;
}


// ==== FUN_0016cb50 @ 0016cb50 ====

undefined8 FUN_0016cb50(int param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_c;
  float fStack_8;
  
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x150));
  auVar1 = _qmfc2(auVar8._0_4_);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
  fVar2 = *(float *)(DAT_0040f4d0 + 0x318) * 0.5;
  auVar9 = _qmtc2(param_2);
  auVar4 = _qmtc2(fVar2);
  *(float *)(param_1 + 0x110) = fVar2;
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmulabc(auVar7,auVar9);
  _vmaddabc(auVar5,auVar9);
  _vmaddabc(auVar3,auVar9);
  auVar3 = _vmaddbc(auVar6,in_vf0);
  auVar3 = _vaddbc(auVar3,auVar4);
  auVar4 = _vaddbc(in_vf0,auVar3);
  auVar3 = _qmfc2(auVar4._0_4_);
  if (auVar1._0_4_ <= auVar3._0_4_) {
    auVar1 = _sqc2(auVar4);
    fStack_c = auVar1._4_4_;
    fVar2 = fStack_c;
    auVar1 = _sqc2(auVar8);
    fStack_c = auVar1._4_4_;
    if (fStack_c <= fVar2) {
      auVar1 = _sqc2(auVar4);
      fStack_8 = auVar1._8_4_;
      fVar2 = fStack_8;
      auVar1 = _sqc2(auVar8);
      fStack_8 = auVar1._8_4_;
      if (fStack_8 <= fVar2) {
        auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x140));
        auVar1 = _qmfc2(auVar5._0_4_);
        if (auVar3._0_4_ <= auVar1._0_4_) {
          auVar1 = _sqc2(auVar4);
          fStack_c = auVar1._4_4_;
          fVar2 = fStack_c;
          auVar1 = _sqc2(auVar5);
          fStack_c = auVar1._4_4_;
          if (fVar2 <= fStack_c) {
            auVar1 = _sqc2(auVar4);
            fStack_8 = auVar1._8_4_;
            fVar2 = fStack_8;
            auVar1 = _sqc2(auVar5);
            fStack_8 = auVar1._8_4_;
            if (fVar2 <= fStack_8) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


// ==== FUN_0016cc88 @ 0016cc88 ====

void FUN_0016cc88(int param_1)

{
  undefined4 uVar1;
  
  FUN_0026aa68(0);
  FUN_0026a840(0);
  uVar1 = DAT_00414d30;
  if (*(char *)(param_1 + 0x11c) != '\0') {
    uVar1 = DAT_00414d20;
  }
  FUN_001ae5e8(DAT_0040f4c0,param_1 + 0xd0,*(undefined4 *)(param_1 + 0x150),
               *(undefined4 *)(param_1 + 0x140),uVar1);
  return;
}


// ==== FUN_0016ccf0 @ 0016ccf0 ====

undefined4 FUN_0016ccf0(void)

{
  FUN_00169eb8();
  return 1;
}


// ==== FUN_0016cd58 @ 0016cd58 ====

undefined4 FUN_0016cd58(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0xc4) - 3U < 2) || (bVar2 = false, *(int *)(iVar1 + 0xc4) == 7)) {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = FUN_0016cff0(param_3,*(undefined8 *)(iVar1 + 0xa0)), lVar3 != 0)) {
      *(undefined1 *)(iVar1 + 0x13e) = 0;
    }
  }
  return 1;
}


// ==== FUN_0016cdc8 @ 0016cdc8 ====

void FUN_0016cdc8(int param_1)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
  auVar10 = _vaddbc(in_vf0,in_vf0);
  auVar1 = _vmul(auVar3,auVar3);
  auVar9 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x100));
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar10,auVar1);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
  auVar2 = _vmove(auVar3);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x140));
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar1);
  uVar18 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar18);
  _vmulabc(auVar3,auVar6);
  _vmaddabc(auVar5,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar7 = _vmaddbc(auVar9,in_vf0);
  _vadd(in_vf0,auVar2);
  auVar1 = _vmul(auVar2,auVar7);
  auVar11 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x150));
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar13,auVar1);
  auVar6 = _vsubbc(in_vf0,in_vf0);
  auVar8 = _vaddbc(auVar6,auVar1);
  _vmulabc(auVar3,auVar11);
  _vmaddabc(auVar5,auVar11);
  _vmaddabc(auVar4,auVar11);
  auVar12 = _vmaddbc(auVar9,in_vf0);
  auVar1 = _vsub(in_vf0,auVar2);
  _vmove(auVar8);
  _vadd(in_vf0,auVar1);
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
  auVar2 = _vmul(auVar1,auVar12);
  auVar1 = _vmul(auVar3,auVar3);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar13,auVar2);
  auVar4 = _vsubbc(in_vf0,in_vf0);
  auVar5 = _vaddbc(auVar4,auVar2);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar10,auVar1);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar1);
  uVar18 = _vwaitq();
  auVar2 = _vmulq(auVar3,uVar18);
  _vmove(auVar5);
  auVar1 = _vmul(auVar2,auVar7);
  _vadd(in_vf0,auVar2);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar13,auVar1);
  auVar3 = _vsubbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(auVar3,auVar1);
  auVar1 = _vsub(in_vf0,auVar2);
  _vmove(auVar6);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
  _vadd(in_vf0,auVar1);
  auVar3 = _vmul(auVar1,auVar12);
  auVar1 = _vmul(auVar2,auVar2);
  _vaddabc(auVar1,auVar1);
  auVar1 = _vmaddbc(auVar10,auVar1);
  _vaddabc(auVar3,auVar3);
  auVar4 = _vmaddbc(auVar13,auVar3);
  auVar9 = _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar1);
  uVar18 = _vwaitq();
  auVar3 = _vmulq(auVar2,uVar18);
  auVar11 = _vaddbc(auVar9,auVar4);
  _lqc2(*(undefined1 (*) [16])(param_1 + 400));
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x180));
  auVar9 = _vaddbc(in_vf0,auVar8);
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x1a0));
  auVar1 = _vaddbc(in_vf0,auVar8);
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x1b0));
  auVar10 = _vaddbc(in_vf0,auVar8);
  _vmove(auVar11);
  auVar8 = _vaddbc(in_vf0,auVar8);
  _vadd(in_vf0,auVar3);
  auVar2 = _vmul(auVar3,auVar7);
  _vaddabc(auVar2,auVar2);
  auVar4 = _vmaddbc(auVar13,auVar2);
  _vmove(auVar1);
  auVar2 = _vsubbc(in_vf0,in_vf0);
  _vmove(auVar9);
  _vmove(auVar10);
  auVar14 = _vaddbc(in_vf0,auVar5);
  _vmove(auVar8);
  auVar15 = _vaddbc(in_vf0,auVar5);
  auVar17 = _vaddbc(in_vf0,auVar5);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar1;
  auVar2 = _vaddbc(auVar2,auVar4);
  auVar16 = _vaddbc(in_vf0,auVar5);
  auVar1 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 400) = auVar1;
  auVar3 = _vsub(in_vf0,auVar3);
  auVar1 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar1;
  auVar4 = _vmul(auVar3,auVar12);
  auVar1 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar1;
  _vaddabc(auVar4,auVar4);
  auVar8 = _vmaddbc(auVar13,auVar4);
  _vmove(auVar14);
  _vmove(auVar15);
  auVar7 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar16);
  auVar5 = _vaddbc(in_vf0,auVar6);
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x160) = auVar1;
  auVar4 = _vaddbc(in_vf0,auVar6);
  _vmove(auVar17);
  _vadd(in_vf0,auVar3);
  auVar3 = _vaddbc(in_vf0,auVar6);
  auVar1 = _sqc2(auVar14);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar1;
  auVar1 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 400) = auVar1;
  auVar2 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _sqc2(auVar16);
  *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar1;
  auVar2 = _vaddbc(auVar2,auVar8);
  auVar1 = _sqc2(auVar17);
  *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar1;
  auVar1 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar1;
  auVar1 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 400) = auVar1;
  auVar6 = _vmulbc(in_vf0,auVar11);
  auVar1 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar1;
  auVar5 = _vmulbc(in_vf0,auVar11);
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar1;
  auVar4 = _vmulbc(in_vf0,auVar11);
  auVar3 = _vmove(auVar11);
  auVar1 = _sqc2(auVar2);
  *(undefined1 (*) [16])(param_1 + 0x170) = auVar1;
  auVar1 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar1;
  auVar1 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 400) = auVar1;
  auVar1 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar1;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar1;
  return;
}


// ==== FUN_0016cff0 @ 0016cff0 ====

undefined8 FUN_0016cff0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_vf3 [16];
  undefined1 in_vf4 [16];
  undefined1 in_vf5 [16];
  undefined1 in_vf6 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar6 = _qmtc2(param_2);
  iVar1 = 0;
  auVar5 = _vaddbc(in_vf0,in_vf0);
  while( true ) {
    if (iVar1 == 0) {
      auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x160));
    }
    else if (iVar1 == 1) {
      auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x170));
    }
    else if (iVar1 == 2) {
      auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x180));
      auVar3 = _qmfc2(auVar3._0_4_);
      auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1a0));
      auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 400));
      auVar4 = _qmfc2(auVar4._0_4_);
      auVar2 = _qmfc2(auVar2._0_4_);
      _vmove(in_vf3);
      auVar3 = _pextlw((long)auVar4._0_4_,(long)auVar3._0_4_);
      auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1b0));
      auVar3 = _pextlw((long)auVar2._0_4_,auVar3._0_8_);
      auVar3 = _qmtc2(auVar3._0_4_);
      _vadd(in_vf0,auVar3);
      auVar3 = _vsubbc(in_vf0,in_vf0);
      auVar3 = _vaddbc(auVar3,auVar4);
      in_vf3 = _vmove(auVar3);
      auVar3 = _vmove(in_vf3);
    }
    else if (iVar1 == 3) {
      _vmove(in_vf4);
      auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1b0));
      auVar3 = _pextlw((long)SUB164(*(undefined1 (*) [16])(param_1 + 0x1a0),4),
                       (long)*(int *)(param_1 + 0x184));
      auVar3 = _pextlw((long)SUB164(*(undefined1 (*) [16])(param_1 + 400),4),auVar3._0_8_);
      auVar3 = _qmtc2(auVar3._0_4_);
      _vadd(in_vf0,auVar3);
      auVar3 = _vsubbc(in_vf0,in_vf0);
      auVar3 = _vaddbc(auVar3,auVar2);
      in_vf4 = _vmove(auVar3);
      auVar3 = _vmove(in_vf4);
    }
    else if (iVar1 == 4) {
      _vmove(in_vf5);
      auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1b0));
      auVar3 = _pextlw((long)SUB164(*(undefined1 (*) [16])(param_1 + 0x1a0),8),
                       (long)*(int *)(param_1 + 0x188));
      auVar3 = _pextlw((long)SUB164(*(undefined1 (*) [16])(param_1 + 400),8),auVar3._0_8_);
      auVar3 = _qmtc2(auVar3._0_4_);
      _vadd(in_vf0,auVar3);
      auVar3 = _vsubbc(in_vf0,in_vf0);
      auVar3 = _vaddbc(auVar3,auVar2);
      in_vf5 = _vmove(auVar3);
      auVar3 = _vmove(in_vf5);
    }
    else {
      _vmove(in_vf6);
      auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x1b0));
      auVar3 = _pextlw((long)SUB164(*(undefined1 (*) [16])(param_1 + 0x1a0),0xc),
                       (long)*(int *)(param_1 + 0x18c));
      auVar3 = _pextlw((long)SUB164(*(undefined1 (*) [16])(param_1 + 400),0xc),auVar3._0_8_);
      auVar3 = _qmtc2(auVar3._0_4_);
      _vadd(in_vf0,auVar3);
      auVar3 = _vmove(auVar2);
      in_vf6 = _vmove(auVar3);
      auVar3 = _vmove(in_vf6);
    }
    auVar2 = _vmul(auVar6,auVar3);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar5,auVar2);
    auVar3 = _vsubbc(auVar2,auVar3);
    auVar3 = _qmfc2(auVar3._0_4_);
    if (0.0 < auVar3._0_4_) break;
    iVar1 = iVar1 + 1;
    if (5 < iVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== FUN_0016d1f8 @ 0016d1f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016d1f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_94;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    auVar2._8_4_ = 0x4b400000;
    auVar2._0_8_ = 0xbe22f9833fc90fdb;
    auVar2._12_4_ = uStack_94;
    auVar7 = _lqc2(auVar2);
    DAT_004146f8 = 0x3e800000;
    DAT_004146fc = uStack_94;
    DAT_00414708 = 0x42a33457;
    DAT_0041470c = uStack_94;
    DAT_00414718 = 0;
    DAT_0041471c = uStack_94;
    DAT_00414738 = 0x4409ee8c;
    DAT_0041473c = 0x43968fcd;
    auVar2 = _pextlw(0,0);
    uVar1 = auVar2._0_8_;
    auVar5 = _pextlw(0x3f800000,uVar1);
    DAT_00414740 = 0x4b000000;
    DAT_00414744 = 0x4b000000;
    DAT_00414748 = 0x4b000000;
    DAT_0041474c = 0x4b000000;
    _DAT_004146e0 = _sqc2(auVar7);
    DAT_004146f0 = 0xbe22f983;
    DAT_004146f4 = 0x3f000000;
    DAT_00414700 = 0xc2992661;
    DAT_00414704 = 0xc2255de0;
    DAT_00414710 = 0x421ed7b7;
    DAT_00414714 = 0x40c90fda;
    DAT_00414724 = 0x3faaaaab;
    DAT_00414730 = 0x43f59407;
    DAT_00414734 = 0x44345569;
    auVar4 = _pextlw(0x3f4ccccd,uVar1);
    DAT_00414720 = 0x3f800000;
    auVar7 = _pextlw(0xffffffffc1a00000,uVar1);
    auVar3 = _pextlw(0x3dcccccd,uVar1);
    DAT_004147c0 = (undefined4)_DAT_00443350;
    DAT_004147c4 = (undefined4)((ulong)_DAT_00443350 >> 0x20);
    DAT_004147c8 = DAT_00443358;
    DAT_004147cc = DAT_0044335c;
    DAT_004147d0 = DAT_00443360;
    DAT_004147d4 = DAT_00443364;
    DAT_004147d8 = DAT_00443368;
    DAT_004147dc = DAT_0044336c;
    DAT_004147e0 = DAT_00443370;
    DAT_004147e4 = DAT_00443374;
    DAT_004147e8 = DAT_00443378;
    DAT_004147ec = DAT_0044337c;
    DAT_004147f0 = DAT_00443380;
    DAT_004147f4 = DAT_00443384;
    DAT_004147f8 = DAT_00443388;
    DAT_004147fc = DAT_0044338c;
    auVar2 = _pextlw(0xffffffffc0400000,0);
    DAT_00414750 = auVar4._0_4_;
    DAT_00414754 = auVar4._4_4_;
    DAT_00414758 = auVar4._8_4_;
    DAT_0041475c = auVar4._12_4_;
    DAT_00414760 = auVar7._0_4_;
    DAT_00414764 = auVar7._4_4_;
    DAT_00414768 = auVar7._8_4_;
    DAT_0041476c = auVar7._12_4_;
    auVar7 = _pextlw(0x41200000,auVar2._0_8_);
    DAT_00414808 = DAT_00443358;
    DAT_0041480c = DAT_0044335c;
    auVar2 = _pextlw(0x42200000,0);
    DAT_00414810 = DAT_00443360;
    DAT_00414814 = DAT_00443364;
    DAT_00414818 = DAT_00443368;
    DAT_0041481c = DAT_0044336c;
    DAT_00414820 = DAT_00443370;
    DAT_00414824 = DAT_00443374;
    DAT_00414828 = DAT_00443378;
    DAT_0041482c = DAT_0044337c;
    DAT_00414830 = DAT_00443380;
    DAT_00414834 = DAT_00443384;
    DAT_00414838 = DAT_00443388;
    DAT_0041483c = DAT_0044338c;
    DAT_00414770 = auVar3._0_4_;
    DAT_00414774 = auVar3._4_4_;
    DAT_00414778 = auVar3._8_4_;
    DAT_0041477c = auVar3._12_4_;
    DAT_00414780 = auVar7._0_4_;
    DAT_00414784 = auVar7._4_4_;
    DAT_00414788 = auVar7._8_4_;
    DAT_0041478c = auVar7._12_4_;
    DAT_00414848 = DAT_00443358;
    DAT_0041484c = DAT_0044335c;
    auVar2 = _pextlw(0x41a00000,auVar2._0_8_);
    DAT_00414850 = DAT_00443360;
    DAT_00414854 = DAT_00443364;
    DAT_00414858 = DAT_00443368;
    DAT_0041485c = DAT_0044336c;
    DAT_00414860 = DAT_00443370;
    DAT_00414864 = DAT_00443374;
    DAT_00414868 = DAT_00443378;
    DAT_0041486c = DAT_0044337c;
    DAT_00414870 = DAT_00443380;
    DAT_00414874 = DAT_00443384;
    DAT_00414878 = DAT_00443388;
    DAT_0041487c = DAT_0044338c;
    DAT_00414790 = auVar2._0_4_;
    DAT_00414794 = auVar2._4_4_;
    DAT_00414798 = auVar2._8_4_;
    DAT_0041479c = auVar2._12_4_;
    DAT_004147a0 = auVar5._0_4_;
    DAT_004147a4 = auVar5._4_4_;
    DAT_004147a8 = auVar5._8_4_;
    DAT_004147ac = auVar5._12_4_;
    DAT_004147b0 = DAT_003ffcb0;
    DAT_00414888 = DAT_00443358;
    DAT_0041488c = DAT_0044335c;
    DAT_00414890 = DAT_00443360;
    DAT_00414894 = DAT_00443364;
    DAT_00414898 = DAT_00443368;
    DAT_0041489c = DAT_0044336c;
    DAT_004148a0 = DAT_00443370;
    DAT_004148a4 = DAT_00443374;
    DAT_004148a8 = DAT_00443378;
    DAT_004148ac = DAT_0044337c;
    DAT_004148b0 = DAT_00443380;
    DAT_004148b4 = DAT_00443384;
    DAT_004148b8 = DAT_00443388;
    DAT_004148bc = DAT_0044338c;
    DAT_004148c8 = DAT_00443358;
    DAT_004148cc = DAT_0044335c;
    DAT_004148d0 = DAT_00443360;
    DAT_004148d4 = DAT_00443364;
    DAT_004148d8 = DAT_00443368;
    DAT_004148dc = DAT_0044336c;
    DAT_004148e0 = DAT_00443370;
    DAT_004148e4 = DAT_00443374;
    DAT_004148e8 = DAT_00443378;
    DAT_004148ec = DAT_0044337c;
    DAT_004148f0 = DAT_00443380;
    DAT_004148f4 = DAT_00443384;
    DAT_004148f8 = DAT_00443388;
    DAT_004148fc = DAT_0044338c;
    DAT_00414908 = DAT_00443358;
    DAT_0041490c = DAT_0044335c;
    DAT_00414910 = DAT_00443360;
    DAT_00414914 = DAT_00443364;
    DAT_00414918 = DAT_00443368;
    DAT_0041491c = DAT_0044336c;
    DAT_00414920 = DAT_00443370;
    DAT_00414924 = DAT_00443374;
    DAT_00414928 = DAT_00443378;
    DAT_0041492c = DAT_0044337c;
    DAT_00414930 = DAT_00443380;
    DAT_00414934 = DAT_00443384;
    DAT_00414938 = DAT_00443388;
    DAT_0041493c = DAT_0044338c;
    DAT_00414948 = DAT_00443358;
    DAT_0041494c = DAT_0044335c;
    DAT_00414950 = DAT_00443360;
    DAT_00414954 = DAT_00443364;
    DAT_00414958 = DAT_00443368;
    DAT_0041495c = DAT_0044336c;
    DAT_00414960 = DAT_00443370;
    DAT_00414964 = DAT_00443374;
    DAT_00414968 = DAT_00443378;
    DAT_0041496c = DAT_0044337c;
    DAT_00414970 = DAT_00443380;
    DAT_00414974 = DAT_00443384;
    DAT_00414978 = DAT_00443388;
    DAT_0041497c = DAT_0044338c;
    DAT_00414988 = DAT_00443358;
    DAT_0041498c = DAT_0044335c;
    DAT_00414990 = DAT_00443360;
    DAT_00414994 = DAT_00443364;
    DAT_00414998 = DAT_00443368;
    DAT_0041499c = DAT_0044336c;
    DAT_004149a0 = DAT_00443370;
    DAT_004149a4 = DAT_00443374;
    DAT_004149a8 = DAT_00443378;
    DAT_004149ac = DAT_0044337c;
    DAT_004149b0 = DAT_00443380;
    DAT_004149b4 = DAT_00443384;
    DAT_004149b8 = DAT_00443388;
    DAT_004149bc = DAT_0044338c;
    DAT_00414a80 = 0x3f800000;
    DAT_00414a84 = 0;
    DAT_00414a88 = 0;
    DAT_00414a8c = 0x3f800000;
    auVar2 = _pextlw(0x40400000,0x40400000);
    DAT_004149c8 = DAT_00443358;
    DAT_004149cc = DAT_0044335c;
    DAT_004149d0 = DAT_00443360;
    DAT_004149d4 = DAT_00443364;
    DAT_004149d8 = DAT_00443368;
    DAT_004149dc = DAT_0044336c;
    DAT_004149e0 = DAT_00443370;
    DAT_004149e4 = DAT_00443374;
    DAT_004149e8 = DAT_00443378;
    DAT_004149ec = DAT_0044337c;
    DAT_004149f0 = DAT_00443380;
    DAT_004149f4 = DAT_00443384;
    DAT_004149f8 = DAT_00443388;
    DAT_004149fc = DAT_0044338c;
    DAT_00414a08 = DAT_00443358;
    DAT_00414a0c = DAT_0044335c;
    DAT_00414a10 = DAT_00443360;
    DAT_00414a14 = DAT_00443364;
    DAT_00414a18 = DAT_00443368;
    DAT_00414a1c = DAT_0044336c;
    DAT_00414a20 = DAT_00443370;
    DAT_00414a24 = DAT_00443374;
    DAT_00414a28 = DAT_00443378;
    DAT_00414a2c = DAT_0044337c;
    DAT_00414a30 = DAT_00443380;
    DAT_00414a34 = DAT_00443384;
    DAT_00414a38 = DAT_00443388;
    DAT_00414a3c = DAT_0044338c;
    DAT_00414a70 = DAT_00443380;
    DAT_00414a74 = DAT_00443384;
    DAT_00414a78 = DAT_00443388;
    DAT_00414a7c = DAT_0044338c;
    auVar7 = _pextlw(0,auVar2._0_8_);
    DAT_00414a48 = DAT_00443358;
    DAT_00414a4c = DAT_0044335c;
    DAT_00414a50 = DAT_00443360;
    DAT_00414a54 = DAT_00443364;
    DAT_00414a58 = DAT_00443368;
    DAT_00414a5c = DAT_0044336c;
    DAT_00414a60 = DAT_00443370;
    DAT_00414a64 = DAT_00443374;
    DAT_00414a68 = DAT_00443378;
    DAT_00414a6c = DAT_0044337c;
    auVar2 = _pextlw(0x40000000,auVar2._0_8_);
    DAT_00414ab0 = auVar2._0_4_;
    DAT_00414ab4 = auVar2._4_4_;
    DAT_00414ab8 = auVar2._8_4_;
    DAT_00414abc = auVar2._12_4_;
    DAT_00414a90 = 0;
    DAT_00414a94 = 0x3f800000;
    DAT_00414a98 = 0;
    DAT_00414a9c = 0x3f800000;
    DAT_00414aa8 = 0x3f800000;
    DAT_00414aac = 0x3f800000;
    DAT_00414aa0 = 0x3f800000;
    DAT_00414aa4 = 0x3f800000;
    DAT_00414ac0 = auVar7._0_4_;
    DAT_00414ac4 = auVar7._4_4_;
    DAT_00414ac8 = auVar7._8_4_;
    DAT_00414acc = auVar7._12_4_;
    for (iVar6 = 0xe; iVar6 != -1; iVar6 = iVar6 + -1) {
    }
    DAT_00414ce8 = 0;
    DAT_00414cec = 0x3f800000;
    DAT_00414ce0 = 0x3f800000;
    DAT_00414ce4 = 0;
    DAT_00414cf0 = 0x3f800000;
    DAT_00414cf4 = 0x3f800000;
    DAT_00414cf8 = 0;
    DAT_00414cfc = 0x3f800000;
    DAT_00414d08 = 0;
    DAT_00414d0c = 0x3f800000;
    DAT_00414d00 = 0x3f800000;
    DAT_00414d04 = 0x3f800000;
    DAT_00414d10 = 0x3f800000;
    DAT_00414d14 = 0x3f800000;
    DAT_00414d18 = 0;
    DAT_00414d1c = 0x3f800000;
    DAT_00414d28 = 0;
    DAT_00414d2c = 0x3f800000;
    DAT_00414d20 = 0;
    DAT_00414d24 = 0x3f800000;
    DAT_00414d38 = 0x3f800000;
    DAT_00414d3c = 0x3f800000;
    DAT_00414d30 = 0x3f800000;
    DAT_00414d34 = 0;
    DAT_00414800 = DAT_004147c0;
    DAT_00414804 = DAT_004147c4;
    DAT_00414840 = DAT_004147c0;
    DAT_00414844 = DAT_004147c4;
    DAT_00414880 = DAT_004147c0;
    DAT_00414884 = DAT_004147c4;
    DAT_004148c0 = DAT_004147c0;
    DAT_004148c4 = DAT_004147c4;
    DAT_00414900 = DAT_004147c0;
    DAT_00414904 = DAT_004147c4;
    DAT_00414940 = DAT_004147c0;
    DAT_00414944 = DAT_004147c4;
    DAT_00414980 = DAT_004147c0;
    DAT_00414984 = DAT_004147c4;
    DAT_004149c0 = DAT_004147c0;
    DAT_004149c4 = DAT_004147c4;
    DAT_00414a00 = DAT_004147c0;
    DAT_00414a04 = DAT_004147c4;
    DAT_00414a40 = DAT_004147c0;
    DAT_00414a44 = DAT_004147c4;
  }
  return;
}


// ==== FUN_0016d760 @ 0016d760 ====

void FUN_0016d760(void)

{
  return;
}


// ==== FUN_0016d798 @ 0016d798 ====

void FUN_0016d798(void)

{
  return;
}


// ==== FUN_0016d7d0 @ 0016d7d0 ====

void FUN_0016d7d0(void)

{
  FUN_0016d1f8(1,0xffff);
  return;
}


// ==== FUN_0016d7f0 @ 0016d7f0 ====

void FUN_0016d7f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  piVar3 = (int *)(iVar2 + 0x49f4);
  iVar4 = 0;
  iVar1 = iVar2 + 0x2b00;
  FUN_00176f20(iVar2 + 0xa40);
  do {
    FUN_0013cf38(iVar1);
    iVar1 = iVar1 + 0x1fd0;
    *piVar3 = iVar4;
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x7f4;
  } while (iVar4 < 0x10);
  FUN_00174108();
  *(int *)(iVar2 + 0x22b24) = iVar2 + 0x22ad0;
  *(int *)(iVar2 + 0x22b20) = iVar2 + 0x22800;
  iVar1 = iVar2 + 0x3370;
  FUN_00172528(iVar2 + 0x22800);
  iVar4 = 0xf;
  FUN_00172528(iVar2 + 0x22ad0);
  FUN_001793c0(param_1);
  FUN_00177140(iVar2 + 0x78);
  FUN_00176fe8(iVar2 + 0xa1c);
  FUN_00176488(iVar2 + 0xd5c);
  FUN_00175f38(iVar2 + 4000);
  FUN_001783e0(iVar2 + 0xfa4);
  FUN_00179010(iVar2 + 0xfa8);
  FUN_00176f70(iVar2 + 0x112c);
  FUN_00179b40(iVar2 + 0x1144);
  FUN_0017b0c0(iVar2 + 0x1150);
  FUN_0017bbe0(iVar2 + 0xcd4);
  FUN_0017b668(iVar2 + 0x1290);
  FUN_0016eb80(iVar2 + 0x22b28);
  do {
    iVar4 = iVar4 + -1;
    FUN_00191c48(iVar1);
    iVar1 = iVar1 + 0x1fd0;
  } while (-1 < iVar4);
  FUN_001756b8(iVar2 + 0xa48);
  *(undefined4 *)(iVar2 + 0x1140) = *(undefined4 *)(iVar2 + 0x22b70);
  FUN_00289660();
  return;
}


// ==== FUN_0016d958 @ 0016d958 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0016d958(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = (int)param_1;
  *(undefined4 *)(iVar10 + 0x22bbc) = 0;
  FUN_00176f30(iVar10 + 0xa40);
  lVar5 = FUN_0016edf0(iVar10 + 0x22b28);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    piVar9 = (int *)(iVar10 + 0x22b20);
    iVar8 = 1;
    iVar7 = *piVar9;
    while( true ) {
      iVar8 = iVar8 + -1;
      piVar9 = piVar9 + 1;
      (**(code **)(*(int *)(iVar7 + 0x34) + 0xc))(iVar7 + *(short *)(*(int *)(iVar7 + 0x34) + 8));
      if (iVar8 < 0) break;
      iVar7 = *piVar9;
    }
    iVar7 = iVar10 + 0x2b00;
    puVar6 = (undefined4 *)(iVar10 + 0x49f0);
    iVar8 = 0xf;
    do {
      iVar8 = iVar8 + -1;
      *puVar6 = *(undefined4 *)(iVar10 + 0x22bbc);
      *(int *)(iVar10 + 0x22bbc) = iVar7;
      puVar6 = puVar6 + 0x7f4;
      iVar7 = iVar7 + 0x1fd0;
    } while (-1 < iVar8);
    *(undefined4 *)(iVar10 + 0x22bc8) = 0;
    FUN_001793e8(param_1);
    FUN_00177148(iVar10 + 0x78);
    FUN_00176ff0(iVar10 + 0xa1c);
    FUN_001756c0(iVar10 + 0xa48,iVar10 + 0x22b28);
    FUN_001764e8(iVar10 + 0xd5c);
    FUN_00175f40(iVar10 + 4000);
    FUN_001783e8(iVar10 + 0xfa4);
    FUN_00179018(iVar10 + 0xfa8);
    FUN_00176f88(iVar10 + 0x112c);
    FUN_00179b48(iVar10 + 0x1144);
    FUN_0017b0e0(iVar10 + 0x1150);
    FUN_0017b688(iVar10 + 0x1290);
    FUN_0017bbe8(iVar10 + 0xcd4,iVar10 + 0x22b28);
    FUN_00382348(iVar10 + 0x22bc0,0x2b9d6f8);
    *(undefined4 *)(iVar10 + 0x22bcc) = 0;
    uVar3 = DAT_004432ac;
    uVar2 = DAT_004432a8;
    uVar1 = _DAT_004432a0;
    uVar4 = 1;
    *(undefined4 *)(iVar10 + 0x22bd0) = 0;
    *(int *)(iVar10 + 0x22be0) = (int)uVar1;
    *(int *)(iVar10 + 0x22be4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(iVar10 + 0x22be8) = uVar2;
    *(undefined4 *)(iVar10 + 0x22bec) = uVar3;
  }
  return uVar4;
}


// ==== FUN_0016db58 @ 0016db58 ====

void FUN_0016db58(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  FUN_0016e7f8();
  iVar3 = (int)param_1;
  FUN_0017b110(iVar3 + 0x1150);
  FUN_0016ee38(iVar3 + 0x22b28);
  FUN_001793f8(param_1);
  piVar1 = (int *)(iVar3 + 0x22b20);
  iVar2 = *piVar1;
  while( true ) {
    iVar4 = iVar4 + -1;
    piVar1 = piVar1 + 1;
    (**(code **)(*(int *)(iVar2 + 0x34) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10));
    if (iVar4 < 0) break;
    iVar2 = *piVar1;
  }
  FUN_001771a8(iVar3 + 0x78);
  iVar2 = iVar3 + 0x2b00;
  iVar4 = 0xf;
  FUN_00177030(iVar3 + 0xa1c);
  FUN_00175750(iVar3 + 0xa48);
  FUN_00176628(iVar3 + 0xd5c);
  FUN_001783f8(iVar3 + 0xfa4);
  FUN_00179050(iVar3 + 0xfa8);
  FUN_00179b50(iVar3 + 0x1144);
  FUN_00289948(*(undefined4 *)(iVar3 + 0x1140));
  FUN_0017b6c0(iVar3 + 0x1290);
  do {
    if (*(char *)(iVar2 + 0x78) != '\0') {
      (**(code **)(*(int *)(iVar2 + 0x84) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x84) + 8));
    }
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 0x1fd0;
  } while (-1 < iVar4);
  FUN_00176f38(iVar3 + 0xa40);
  FUN_0016e820(param_1);
  return;
}


// ==== FUN_0016dc80 @ 0016dc80 ====

undefined4 FUN_0016dc80(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  FUN_001771e0(iVar4 + 0x78);
  FUN_001770d8(iVar4 + 0xa1c);
  FUN_00175930(iVar4 + 0xa48);
  FUN_001766d0(iVar4 + 0xd5c);
  FUN_00175f48(iVar4 + 4000);
  FUN_00178400(iVar4 + 0xfa4);
  FUN_00179058(iVar4 + 0xfa8);
  FUN_00179b58(iVar4 + 0x1144);
  FUN_0017b130(iVar4 + 0x1150);
  FUN_00179450(param_1);
  FUN_00289798(*(undefined4 *)(iVar4 + 0x1140));
  FUN_0017b6f0(iVar4 + 0x1290);
  lVar2 = FUN_0016ee70(iVar4 + 0x22b28);
  iVar3 = iVar4 + 0x2b00;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar5 = 0xf;
    do {
      if (*(char *)(iVar3 + 0x78) != '\0') {
        FUN_0013d2b0(iVar3);
      }
      iVar5 = iVar5 + -1;
      iVar3 = iVar3 + 0x1fd0;
    } while (-1 < iVar5);
    FUN_00176f60(iVar4 + 0xa40);
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_0016dd68 @ 0016dd68 ====

undefined8 FUN_0016dd68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00179640();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00179668(param_1,param_2);
  }
  return uVar2;
}


// ==== FUN_0016ddb0 @ 0016ddb0 ====

bool FUN_0016ddb0(int param_1)

{
  return *(int *)(param_1 + 0x22bbc) != 0;
}


// ==== FUN_0016ddc8 @ 0016ddc8 ====

void FUN_0016ddc8(int param_1)

{
  *(undefined4 *)(param_1 + 0x22bbc) = *(undefined4 *)(*(int *)(param_1 + 0x22bbc) + 0x1ef0);
  return;
}


// ==== FUN_0016dde0 @ 0016dde0 ====

void FUN_0016dde0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1ef0) = *(undefined4 *)(param_1 + 0x22bbc);
  *(int *)(param_1 + 0x22bbc) = param_2;
  return;
}


// ==== FUN_0016ddf8 @ 0016ddf8 ====

float FUN_0016ddf8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x22bc0);
  uVar1 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + *(int *)(param_1 + 0x22bc4);
  *(uint *)(param_1 + 0x22bc0) = uVar1;
  *(uint *)(param_1 + 0x22bc4) = *(int *)(param_1 + 0x22bc4) + uVar1;
  return (float)uVar1 * 2.3283064e-10;
}


// ==== FUN_0016de70 @ 0016de70 ====

float FUN_0016de70(float param_1,float param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 0x22bc0);
  uVar1 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + *(int *)(param_3 + 0x22bc4);
  *(uint *)(param_3 + 0x22bc0) = uVar1;
  *(uint *)(param_3 + 0x22bc4) = *(int *)(param_3 + 0x22bc4) + uVar1;
  return param_1 + (param_2 - param_1) * (float)uVar1 * 2.3283064e-10;
}


// ==== FUN_0016def0 @ 0016def0 ====

int FUN_0016def0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x22bc0);
  uVar1 = uVar1 * 0x10000 + ((int)uVar1 >> 0x10) + *(int *)(param_1 + 0x22bc4);
  *(uint *)(param_1 + 0x22bc0) = uVar1;
  *(uint *)(param_1 + 0x22bc4) = *(int *)(param_1 + 0x22bc4) + uVar1;
  return (int)((float)param_2 +
              ((((float)param_3 + 1.0) - 1.5258789e-05) - (float)param_2) *
              (float)uVar1 * 2.3283064e-10);
}


// ==== FUN_0016dfb0 @ 0016dfb0 ====

undefined4 FUN_0016dfb0(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1 == 0.0) {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_0016ddf8();
    uVar1 = 1;
    if (param_1 < fVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ==== FUN_0016e008 @ 0016e008 ====

void FUN_0016e008(int param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_4 != 0xb) {
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar6 = _qmtc2(param_2);
    auVar4 = _sqc2(auVar4);
    iVar2 = param_1 + 0x2b00;
    param_1 = param_1 + 0x31f0;
    iVar3 = 0xf;
    do {
      auVar1 = _qmfc2(auVar6._0_4_);
      if (*(char *)(iVar2 + 0x78) != '\0') {
        auVar7 = _lqc2(auVar4);
        auVar5 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x7c) + 0xa0));
        auVar5 = _vsub(auVar5,auVar6);
        auVar6 = _sqc2(auVar6);
        auVar5 = _vmul(auVar5,auVar5);
        _vaddabc(auVar5,auVar5);
        auVar5 = _vmaddbc(auVar7,auVar5);
        auVar5 = _qmfc2(auVar5._0_4_);
        FUN_001842c8(auVar5._0_4_,param_1,auVar1._0_8_,param_3);
        auVar6 = _lqc2(auVar6);
      }
      param_1 = param_1 + 0x1fd0;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 0x1fd0;
    } while (-1 < iVar3);
  }
  return;
}


// ==== FUN_0016e0c0 @ 0016e0c0 ====

void FUN_0016e0c0(int param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar1 [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar3 = param_1 + 0x31f0;
  param_1 = param_1 + 0x2b00;
  iVar4 = 0xf;
  auVar5 = _por(in_zero_qw,in_a2_qw);
  auVar6 = _por(in_zero_qw,in_a1_qw);
  do {
    if (*(char *)(param_1 + 0x78) != '\0') {
      auVar1 = _por(in_zero_qw,auVar6);
      auVar2 = _por(in_zero_qw,auVar5);
      FUN_001843c0(iVar3,auVar1._0_8_,auVar2._0_8_,param_2);
    }
    iVar3 = iVar3 + 0x1fd0;
    iVar4 = iVar4 + -1;
    param_1 = param_1 + 0x1fd0;
  } while (-1 < iVar4);
  return;
}


// ==== FUN_0016e148 @ 0016e148 ====

void FUN_0016e148(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar3 = _sqc2(auVar3);
  iVar1 = param_1 + 0x2b00;
  param_1 = param_1 + 0x31f0;
  iVar2 = 0xf;
  do {
    if ((*(char *)(iVar1 + 0x78) != '\0') && (*(int *)(iVar1 + 0x7c) != param_2)) {
      auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar1 + 0x7c) + 0xa0));
      auVar5 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xa0));
      auVar4 = _vsub(auVar4,auVar5);
      auVar4 = _vmul(auVar4,auVar4);
      auVar5 = _lqc2(auVar3);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar5,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      FUN_00184550(auVar4._0_4_,param_1,param_2);
    }
    param_1 = param_1 + 0x1fd0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x1fd0;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_0016e1f8 @ 0016e1f8 ====

void FUN_0016e1f8(int param_1)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  
  param_1 = param_1 + 0x2b00;
  iVar2 = 0xf;
  auVar3 = _por(in_zero_qw,in_a1_qw);
  do {
    if (*(char *)(param_1 + 0x78) != '\0') {
      auVar1 = _por(in_zero_qw,auVar3);
      FUN_0013d8d8(param_1,auVar1._0_8_);
    }
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 0x1fd0;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_0016e250 @ 0016e250 ====

void FUN_0016e250(int param_1,undefined8 param_2)

{
  undefined1 in_zero_qw [16];
  undefined1 in_a1_qw [16];
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  
  param_1 = param_1 + 0x2b00;
  iVar2 = 0xf;
  auVar3 = _por(in_zero_qw,in_a1_qw);
  do {
    if (*(char *)(param_1 + 0x78) != '\0') {
      auVar1 = _por(in_zero_qw,auVar3);
      FUN_0013d9a0(param_1,auVar1._0_8_,param_2);
    }
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 0x1fd0;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_0016e2b8 @ 0016e2b8 ====

void FUN_0016e2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 in_a2_udw;
  
  if (param_4 == 0) {
    auVar2._8_8_ = in_a2_udw;
    auVar2._0_8_ = param_3;
    auVar2 = _por(in_zero_qw,auVar2);
    lVar1 = FUN_0016e588(param_1,auVar2._0_8_);
    if (lVar1 != 0) {
      FUN_00181f48(0,0x3f800000,(int)lVar1 + 0xc80,0,0x11);
    }
  }
  else {
    FUN_00172c88((int)param_1 + 0x22800);
  }
  return;
}


// ==== FUN_0016e318 @ 0016e318 ====

void FUN_0016e318(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x2b00;
  param_1 = param_1 + 0x2c50;
  iVar3 = 0xf;
  do {
    if ((((*(char *)(iVar2 + 0x78) != '\0') && (iVar1 = *(int *)(iVar2 + 0x7c), iVar1 != 0)) &&
        (*(int *)(iVar1 + 0x3a4) == *(int *)(*(int *)(param_3 + 0x7c) + 0x3a4))) &&
       ((iVar1 != param_2 && (iVar2 != param_3)))) {
      FUN_001895c8(param_1,param_3,param_2);
    }
    param_1 = param_1 + 0x1fd0;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x1fd0;
  } while (-1 < iVar3);
  return;
}


// ==== FUN_0016e3c0 @ 0016e3c0 ====

void FUN_0016e3c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_001794b0(param_1,(char)param_2);
  FUN_00175db8((int)param_1 + 0xa48,param_2);
  FUN_0017bcd8((int)param_1 + 0xcd4,param_2);
  iVar1 = DAT_0040f4d4;
  uVar2 = FUN_0016dd68(param_1,1);
  FUN_00289698(*(undefined4 *)(iVar1 + 0x1140),uVar2);
  return;
}


// ==== FUN_0016e430 @ 0016e430 ====

void FUN_0016e430(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  iVar6 = iVar9 + 0x2b00;
  iVar8 = 0xf;
  do {
    if (*(char *)(iVar6 + 0x78) != '\0') {
      FUN_0013dab0(iVar6);
    }
    iVar8 = iVar8 + -1;
    iVar6 = iVar6 + 0x1fd0;
  } while (-1 < iVar8);
  puVar7 = (undefined4 *)(iVar9 + 0x22b20);
  iVar6 = 1;
  uVar1 = *puVar7;
  while( true ) {
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + 1;
    FUN_00172700(uVar1);
    if (iVar6 < 0) break;
    uVar1 = *puVar7;
  }
  FUN_001771f0(iVar9 + 0x78);
  FUN_00175e80(iVar9 + 0xa48);
  FUN_0017ba38(iVar9 + 0x1290);
  FUN_0017b240(iVar9 + 0x1150);
  uVar2 = FUN_00179698(param_1,1);
  uVar3 = FUN_001796b0(param_1,1);
  uVar4 = FUN_001796c8(param_1,1);
  uVar5 = FUN_00179668(param_1,1);
  FUN_00289f30(iVar9 + 0x13d0,uVar2,uVar3,uVar4,uVar5);
  iVar6 = DAT_0040f4d4;
  uVar2 = FUN_0016dd68(param_1,1);
  FUN_00289698(*(undefined4 *)(iVar6 + 0x1140),uVar2);
  return;
}


// ==== FUN_0016e588 @ 0016e588 ====

int FUN_0016e588(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _sqc2(auVar8);
  iVar2 = param_1 + 0x2b00;
  param_1 = param_1 + 0x3794;
  iVar3 = 0xf;
  fVar6 = DAT_003f534c;
  iVar4 = 0;
  do {
    fVar7 = fVar6;
    iVar5 = iVar4;
    if ((*(char *)(iVar2 + 0x78) != '\0') && (lVar1 = FUN_0018ddd8(param_1), lVar1 == 0)) {
      auVar9._8_4_ = in_a1_udw;
      auVar9._0_8_ = param_2;
      auVar9._12_4_ = in_register_0000005c;
      auVar10 = _lqc2(auVar9);
      auVar9 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar2 + 0x7c) + 0xa0));
      auVar9 = _vsub(auVar9,auVar10);
      auVar9 = _vmul(auVar9,auVar9);
      auVar10 = _lqc2(auVar8);
      _vaddabc(auVar9,auVar9);
      auVar9 = _vmaddbc(auVar10,auVar9);
      auVar9 = _qmfc2(auVar9._0_4_);
      fVar7 = auVar9._0_4_;
      iVar5 = iVar2;
      if (fVar6 <= auVar9._0_4_) {
        fVar7 = fVar6;
        iVar5 = iVar4;
      }
    }
    iVar2 = iVar2 + 0x1fd0;
    iVar3 = iVar3 + -1;
    param_1 = param_1 + 0x1fd0;
    fVar6 = fVar7;
    iVar4 = iVar5;
  } while (-1 < iVar3);
  return iVar5;
}


// ==== FUN_0016e660 @ 0016e660 ====

void FUN_0016e660(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00179060(param_1 + 0xfa8);
  *(undefined4 *)((int)param_2 + 0x380) = uVar1;
  FUN_0016fa50(param_1 + 0x22b28,param_2);
  return;
}


// ==== FUN_0016e6b0 @ 0016e6b0 ====

undefined8 FUN_0016e6b0(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((int)param_2 + 0x380) == -1) {
    uVar1 = 0;
  }
  else {
    FUN_001791d8(param_1 + 0xfa8);
    *(undefined4 *)((int)param_2 + 0x380) = 0xffffffff;
    FUN_00179b60(param_1 + 0x1144,param_2);
    uVar1 = FUN_0016fab0(param_1 + 0x22b28,param_2);
  }
  return uVar1;
}


// ==== FUN_0016e728 @ 0016e728 ====

void FUN_0016e728(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_3 != 0) {
    iVar1 = 2;
  }
  if (*(int *)(param_1 + 0x22bc8) < iVar1) {
    FUN_0016e780();
    *(int *)(param_1 + 0x22bc8) = iVar1;
  }
  return;
}


// ==== FUN_0016e780 @ 0016e780 ====

void FUN_0016e780(int param_1)

{
  FUN_00173190(param_1 + 0x22800);
  return;
}


// ==== FUN_0016e7a8 @ 0016e7a8 ====

void FUN_0016e7a8(float param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = _qmtc2(param_1);
  auVar2 = _qmtc2(param_4);
  auVar2 = _vmulbc(auVar2,auVar1);
  *(float *)(param_2 + 0x22bcc) = *(float *)(param_2 + 0x22bcc) + param_1;
  auVar1 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x22be0));
  auVar1 = _vadd(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined1 (*) [16])(param_2 + 0x22be0) = auVar1;
  *(int *)(param_2 + 0x22bd0) = *(int *)(param_2 + 0x22bd0) + 1;
  return;
}


// ==== FUN_0016e7f8 @ 0016e7f8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016e7f8(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x22bcc) = 0;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  *(undefined4 *)(param_1 + 0x22bd0) = 0;
  *(int *)(param_1 + 0x22be0) = (int)uVar1;
  *(int *)(param_1 + 0x22be4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x22be8) = uVar2;
  *(undefined4 *)(param_1 + 0x22bec) = uVar3;
  return;
}


// ==== FUN_0016e820 @ 0016e820 ====

void FUN_0016e820(int param_1)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  if ((0.0 < *(float *)(param_1 + 0x22bcc)) && (0 < *(int *)(param_1 + 0x22bd0))) {
    auVar2 = _vaddbc(in_vf0,in_vf0);
    auVar3 = _vmove(auVar2);
    *(float *)(param_1 + 0x22bcc) =
         *(float *)(param_1 + 0x22bcc) / (float)*(int *)(param_1 + 0x22bd0);
    auVar1 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x22be0));
    auVar1 = _vmul(auVar1,auVar1);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(auVar2,auVar1);
    auVar1 = _qmfc2(auVar1._0_4_);
    if (2.3283064e-10 <= auVar1._0_4_) {
      auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x22be0));
      auVar1 = _vmul(auVar2,auVar2);
      _vaddabc(auVar1,auVar1);
      auVar1 = _vmaddbc(auVar3,auVar1);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar1);
      uVar4 = _vwaitq();
      auVar1 = _vmulq(auVar2,uVar4);
      auVar1 = _sqc2(auVar1);
      *(undefined1 (*) [16])(param_1 + 0x22be0) = auVar1;
    }
    FUN_0013ced0(*(undefined4 *)(param_1 + 0x22bcc),DAT_0040f4d0 + 0x30,
                 *(undefined4 *)(param_1 + 0x22be0));
  }
  return;
}


// ==== FUN_0016e928 @ 0016e928 ====

undefined4 FUN_0016e928(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  auVar5 = _qmtc2(param_3);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _qmtc2(param_4);
  auVar2 = _vsub(auVar8,auVar5);
  auVar6 = _qmtc2(param_2);
  auVar4 = _vmove(auVar2);
  auVar7 = _vsub(auVar6,auVar5);
  auVar2 = _vmul(auVar7,auVar4);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  fVar1 = auVar2._0_4_;
  if (fVar1 <= 0.0) {
    auVar2 = _vmul(auVar7,auVar7);
    auVar3 = _vaddbc(in_vf0,in_vf0);
  }
  else {
    auVar2 = _vmul(auVar4,auVar4);
    _vaddabc(auVar2,auVar2);
    auVar2 = _vmaddbc(auVar3,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    if (auVar2._0_4_ <= fVar1) {
      auVar2 = _vsub(auVar6,auVar8);
      auVar3 = _vaddbc(in_vf0,in_vf0);
      auVar2 = _vmul(auVar2,auVar2);
      _vaddabc(auVar2,auVar2);
      auVar2 = _vmaddbc(auVar3,auVar2);
      auVar2 = _qmfc2(auVar2._0_4_);
      return auVar2._0_4_;
    }
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _qmtc2(fVar1 / auVar2._0_4_);
    auVar2 = _vmulbc(auVar4,auVar2);
    auVar2 = _vadd(auVar5,auVar2);
    auVar2 = _vsub(auVar6,auVar2);
    auVar2 = _vmul(auVar2,auVar2);
  }
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_4_;
}


// ==== FUN_0016ea10 @ 0016ea10 ====

void FUN_0016ea10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[2] = param_2;
  iVar1 = FUN_00107d20(param_2 << 2);
  *param_1 = iVar1;
  iVar1 = FUN_00107d20(param_1[2]);
  iVar3 = 0;
  param_1[1] = iVar1;
  if (0 < param_1[2]) {
    iVar1 = *param_1;
    while( true ) {
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + iVar1) = 0;
      if (param_1[2] <= iVar3) break;
      iVar1 = *param_1;
    }
  }
  return;
}


// ==== FUN_0016ea80 @ 0016ea80 ====

void FUN_0016ea80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      *(undefined1 *)(iVar1 + iVar2) = 0;
      iVar2 = iVar2 + 1;
      if (*(int *)(param_1 + 8) <= iVar2) break;
      iVar1 = *(int *)(param_1 + 4);
    }
  }
  return;
}


// ==== FUN_0016eab8 @ 0016eab8 ====

void FUN_0016eab8(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 4 + *param_1) = param_3;
  return;
}


// ==== FUN_0016ead0 @ 0016ead0 ====

undefined4 FUN_0016ead0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[2]) {
    iVar1 = param_1[1];
    while( true ) {
      if (*(char *)(iVar1 + iVar2) == '\0') {
        *(char *)(iVar1 + iVar2) = '\x01';
        return *(undefined4 *)(iVar2 * 4 + *param_1);
      }
      iVar2 = iVar2 + 1;
      if (param_1[2] <= iVar2) break;
      iVar1 = param_1[1];
    }
  }
  return 0;
}


// ==== FUN_0016eb28 @ 0016eb28 ====

void FUN_0016eb28(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[2]) {
    iVar1 = *param_1;
    while( true ) {
      if (*(int *)(iVar2 * 4 + iVar1) == param_2) {
        *(undefined1 *)(param_1[1] + iVar2) = 0;
        return;
      }
      iVar2 = iVar2 + 1;
      if (param_1[2] <= iVar2) break;
      iVar1 = *param_1;
    }
  }
  return;
}


// ==== FUN_0016eb80 @ 0016eb80 ====

void FUN_0016eb80(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x50;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined1 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x4d) = 0;
  FUN_00274e40(iVar3);
  FUN_0016ea10(iVar2 + 0x7c,0x10);
  FUN_0016ea10(iVar2 + 0x88,1);
  *(undefined4 *)(iVar2 + 0x78) = 0;
  FUN_0016ec78(param_1);
  FUN_0016ed80(param_1);
  FUN_00107b08(0x40f0f0,0,0);
  FUN_00107ab8(0x40f0f0,2,0);
  uVar1 = FUN_00107d20(0x40000);
  FUN_00107b08(0x40f0f0,2,0);
  FUN_00107ab8(0x40f0f0,0,0);
  FUN_00274e40(iVar3);
  FUN_00274e68(iVar3,uVar1,0x40000);
  FUN_0016ef00(param_1);
  FUN_0016f3d0(param_1);
  return;
}


// ==== FUN_0016ec78 @ 0016ec78 ====

void FUN_0016ec78(void)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  code *pcStack_8c;
  code *pcStack_88;
  code *pcStack_84;
  undefined4 auStack_30 [4];
  
  FUN_002e3fc8(auStack_b0,0x12,1);
  puStack_a0 = &LAB_0016ee98;
  puStack_98 = &LAB_0016eef0;
  puStack_94 = &LAB_0016eef8;
  puStack_a8 = &LAB_00272330;
  puStack_9c = &LAB_0016eee8;
  pcStack_8c = FUN_0016fb68;
  pcStack_88 = FUN_0016fd78;
  pcStack_84 = FUN_0016ff20;
  DAT_003c87e8 = &DAT_00414e28;
  uStack_a4 = 0;
  FUN_002e10d8(auStack_b0);
  auStack_30[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x10,auStack_30);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_30[0],0x10,uVar1);
  }
  DAT_003bcef8 = FUN_00288c18(auStack_30[0]);
  FUN_002e4160(auStack_b0,2);
  return;
}


// ==== FUN_0016ed80 @ 0016ed80 ====

void FUN_0016ed80(void)

{
  long lVar1;
  
  lVar1 = FUN_002d15a0();
  if ((((lVar1 != 0) && (lVar1 = FUN_002d8448(), lVar1 != 0)) &&
      (lVar1 = FUN_002da1c8(), lVar1 != 0)) &&
     ((lVar1 = FUN_002f0da8(), lVar1 != 0 && (lVar1 = FUN_003054f8(), lVar1 != 0)))) {
    FUN_0030d130();
  }
  return;
}


// ==== FUN_0016edf0 @ 0016edf0 ====

undefined4 FUN_0016edf0(int param_1)

{
  FUN_0016f9a8();
  FUN_0016ea80(param_1 + 0x7c);
  FUN_0016ea80(param_1 + 0x88);
  FUN_0016fb48();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return 1;
}


// ==== FUN_0016ee38 @ 0016ee38 ====

void FUN_0016ee38(void)

{
  FUN_002e1208(*(undefined4 *)(DAT_0040f0e0 + 0x2013c),DAT_003c9ed4);
  return;
}


// ==== FUN_0016ee70 @ 0016ee70 ====

undefined4 FUN_0016ee70(int param_1)

{
  if (DAT_003c9ed4 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return 1;
}


// ==== FUN_0016ef00 @ 0016ef00 ====

/* Strings referenciadas:
     "MoveGraph"
     "RawData"
     "CPathFinder::FindNextMove::ASTAR"
     "CPathFinder::FindNextMove::NewSubGoal"
     "CPathFinder::FindNextMove::Goto"
     "CPathFinder::FindNextMove::CheckAccident"
     "AstarLoop"
     "TraceLine"
     "CheckVisible"
     "CheckCylinder" */

undefined4 FUN_0016ef00(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined4 auStack_100 [2];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  uStack_c0 = 0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,&uStack_c0);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_c0,0x24,uVar7);
  }
  uVar7 = FUN_002e3408(uStack_c0);
  *(int *)(param_1 + 0x70) = (int)uVar7;
  FUN_002e3630(uVar7,0x3f5370);
  uStack_bc = 0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x24,&uStack_bc);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_bc,0x24,uVar7);
  }
  uVar3 = FUN_002e3408(uStack_bc);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  auStack_100[0] = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  FUN_00289090(0x40000000,auStack_100,0x12,0);
  FUN_00289230(0x3f800000,0x40000000,auStack_d0,auStack_100,0x3f5378,100);
  FUN_002892f0(auStack_d0,auStack_100,0x3f53a0,0);
  FUN_002892f0(auStack_d0,auStack_100,0x3f53c8,0);
  FUN_002892f0(auStack_d0,auStack_100,0x3f53e8,4000);
  FUN_00289360(0x41c80000,auStack_d0,auStack_100,0x3f5418);
  FUN_00289360(0x3ecccccd,auStack_d0,auStack_100,0x3f5428);
  FUN_00289360(0x3e4ccccd,auStack_d0,auStack_100,0x3f5438);
  FUN_00289360(0x3fc00000,auStack_d0,auStack_100,0x3f5448);
  uVar7 = FUN_002891d8(auStack_100);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(int *)(param_1 + 0x6c) = (int)uVar7;
  iVar4 = FUN_002e0140(uVar7,DAT_003bcef8);
  uStack_b8 = 0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x14,&uStack_b8);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_b8,0x14,uVar7);
  }
  iVar5 = FUN_002f24d0(uStack_b8);
  uStack_b4 = 0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,&uStack_b4);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_b4,0x1c,uVar7);
  }
  piVar6 = (int *)FUN_002f4c58(uStack_b4);
  *(int **)(param_1 + 0x44) = piVar6;
  (**(code **)(*piVar6 + 0x14))
            ((int)piVar6 + (int)*(short *)(*piVar6 + 0x10),*(undefined4 *)(param_1 + 0x74));
  uStack_b0 = 0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x80,&uStack_b0);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_b0,0x80,uVar7);
  }
  uVar7 = FUN_00289950(uStack_b0,0,0);
  *(int *)(param_1 + 0x48) = (int)uVar7;
  FUN_00289660(uVar7);
  piStack_ac = (int *)0x0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,&piStack_ac);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(piStack_ac,4,uVar7);
  }
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(int **)(iVar4 + 0x20) = piStack_ac;
  *piStack_ac = iVar5;
  *(undefined4 *)(iVar4 + 0x24) = 1;
  *(undefined4 *)(*(int *)(iVar4 + 0x20) + 4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar4 + 0x28) = 2;
  *(undefined4 *)(iVar4 + 0x24) = 2;
  uStack_a8 = 0;
  uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),8,&uStack_a8);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_a8,8,uVar7);
  }
  *(undefined4 *)(iVar5 + 8) = 2;
  ppuVar9 = &PTR_s_MoveGraph_003bcef0;
  *(undefined4 *)(iVar5 + 4) = uStack_a8;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(iVar5 + 4);
    iVar8 = iVar4 * 4;
    uStack_a4 = 0;
    uVar7 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x110,&uStack_a4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_a4,0x110,uVar7);
    }
    puVar2 = *ppuVar9;
    iVar4 = iVar4 + 1;
    ppuVar9 = ppuVar9 + 1;
    uVar3 = FUN_002f3250(uStack_a4,puVar2,0,0);
    *(undefined4 *)(iVar8 + iVar1) = uVar3;
    *(undefined4 *)(*(int *)(iVar8 + *(int *)(iVar5 + 4)) + 0x10c) = 0;
    *(undefined4 *)(*(int *)(iVar8 + *(int *)(iVar5 + 4)) + 0x84) = 0;
  } while (iVar4 < 2);
  FUN_00174138();
  return 1;
}


// ==== FUN_0016f3d0 @ 0016f3d0 ====

undefined4 FUN_0016f3d0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 *puStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 *puStack_c8;
  int **ppiStack_c4;
  undefined4 **ppuStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  
  uVar1 = DAT_003c9ed4;
  ppuStack_c0 = &puStack_e4;
  ppiStack_c4 = &piStack_e8;
  puStack_c8 = &uStack_ec;
  puStack_b8 = &uStack_dc;
  puStack_bc = &uStack_e0;
  puStack_b4 = &uStack_d8;
  puStack_b0 = &uStack_d4;
  puStack_ac = &uStack_d0;
  puStack_a8 = &uStack_cc;
  iVar9 = 0;
  do {
    uStack_f0 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x70,&uStack_f0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_f0,0x70,uVar4);
    }
    uVar4 = FUN_00170258(uStack_f0,0,0);
    uStack_ec = 0;
    uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,puStack_c8);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_ec,0x1c,uVar5);
    }
    uVar5 = FUN_00170178(uStack_ec,uVar4,0x414e38);
    piVar8 = (int *)uVar4;
    piVar3 = (int *)uVar5;
    piVar8[6] = (int)piVar3;
    (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18),param_1[0x1d]);
    (**(code **)(*piVar8 + 0x14))((int)piVar8 + (int)*(short *)(*piVar8 + 0x10),param_1[0x1d]);
    piVar8[7] = DAT_003c7a20;
    piStack_e8 = (int *)0x0;
    uVar6 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1bc,ppiStack_c4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(piStack_e8,0x1bc,uVar6);
    }
    piVar8 = piStack_e8;
    FUN_002fecb8(piStack_e8,uVar5);
    *piVar8 = (int)&DAT_003dd3d8;
    iVar2 = piVar3[4];
    *(int **)(iVar2 * 4 + piVar3[3]) = piVar8;
    piVar3[4] = iVar2 + 1;
    (**(code **)(*piVar8 + 0x14))((int)piVar8 + (int)*(short *)(*piVar8 + 0x10),param_1[0x1d]);
    piVar8[0x19] = 0;
    piVar8[0x60] = 0;
    (**(code **)(*piVar8 + 0x7c))((int)piVar8 + (int)*(short *)(*piVar8 + 0x78),0x4153c0);
    puStack_e4 = (undefined4 *)0x0;
    uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,ppuStack_c0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(puStack_e4,4,uVar5);
    }
    *puStack_e4 = &DAT_003dd4b0;
    piVar8[5] = (int)puStack_e4;
    piVar8[0x25] = (int)FUN_00171e18;
    piVar8[0x26] = (int)&LAB_001721d8;
    uStack_e0 = 0;
    uVar5 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xf0,puStack_bc);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_e0,0xf0,uVar5);
    }
    iVar2 = FUN_003055e0(uStack_e0,piVar8);
    piVar8[0x6c] = iVar2;
    FUN_0016eab8(param_1 + 0x1f,iVar9,uVar4);
    iVar9 = iVar9 + 1;
    FUN_002e1248(uVar1,uVar4);
  } while (iVar9 < 0x10);
  uStack_dc = 0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x70,puStack_b8);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_dc,0x70,uVar4);
  }
  piVar3 = (int *)FUN_00170258(uStack_dc,0,0);
  param_1[0x1e] = piVar3;
  iVar2 = 0x30;
  (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10),param_1[0x1d]);
  *(int *)(param_1[0x1e] + 0x1c) = DAT_003c7a20;
  FUN_002e1248(uVar1,param_1[0x1e]);
  iVar9 = 0;
  do {
    uStack_d8 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x70,puStack_b4);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d8,0x70,uVar4);
    }
    uVar4 = FUN_00170258(uStack_d8,0,DAT_0040f4d0 + iVar2);
    iVar2 = iVar2 + 0x8c0;
    piVar3 = (int *)uVar4;
    (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10),param_1[0x1d]);
    piVar3[7] = DAT_003c7a20;
    iVar10 = iVar9 + 1;
    FUN_0016eab8(param_1 + 0x22,iVar9,uVar4);
    FUN_002e1248(uVar1,uVar4);
    iVar9 = iVar10;
  } while (iVar10 < 1);
  iVar9 = 0xf;
  do {
    uStack_d4 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xd0,puStack_b0);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d4,0xd0,uVar4);
    }
    iVar9 = iVar9 + -1;
    piVar3 = (int *)FUN_00171110(uStack_d4,0,0);
    (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10),param_1[0x1d]);
    piVar3[7] = 0;
  } while (-1 < iVar9);
  FUN_0016f9a8(param_1);
  iVar9 = 0xf;
  puVar7 = param_1;
  do {
    uStack_d0 = 0;
    uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                      ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xd0,puStack_ac);
    if (DAT_003c87ec != (code *)0x0) {
      (*DAT_003c87ec)(uStack_d0,0xd0,uVar4);
    }
    iVar9 = iVar9 + -1;
    piVar3 = (int *)FUN_00171110(uStack_d0,0,0);
    (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10),param_1[0x1d]);
    piVar3[7] = 0;
    *puVar7 = piVar3;
    puVar7 = puVar7 + 1;
  } while (-1 < iVar9);
  uStack_cc = 0;
  uVar4 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xd0,puStack_a8);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(uStack_cc,0xd0,uVar4);
  }
  iVar9 = FUN_00171110(uStack_cc,0,0);
  param_1[0x10] = iVar9;
  *(undefined4 *)(iVar9 + 0x1c) = 0;
  FUN_00170798(param_1[0x10],0x80);
  return 1;
}


// ==== FUN_0016f9a8 @ 0016f9a8 ====

void FUN_0016f9a8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_003c9ed4;
  if (*(int *)(*(int *)(DAT_003c9ed4 + 0x14) + 0x14) != 0) {
    iVar2 = *(int *)(DAT_003c9ed4 + 0x14);
    while( true ) {
      FUN_002e1280(iVar1,*(undefined4 *)(*(int *)(iVar2 + 8) + 4));
      if (*(int *)(*(int *)(iVar1 + 0x14) + 0x14) == 0) break;
      iVar2 = *(int *)(iVar1 + 0x14);
    }
  }
  FUN_002e1228(iVar1);
  return;
}


// ==== FUN_0016fa38 @ 0016fa38 ====

undefined4 FUN_0016fa38(void)

{
  return *(undefined4 *)(DAT_0040f4d4 + 0x22b98);
}


// ==== FUN_0016fa50 @ 0016fa50 ====

undefined4 FUN_0016fa50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0016fb18(param_1,*(undefined4 *)((int)param_2 + 0xc4));
  uVar1 = FUN_0016ead0(uVar1);
  *(int *)((int)param_2 + 0x34c) = (int)uVar1;
  FUN_00171ca8(uVar1,param_2);
  FUN_002e1248(DAT_003c9ed4,uVar1);
  return 1;
}


// ==== FUN_0016fab0 @ 0016fab0 ====

undefined4 FUN_0016fab0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34c);
  uVar2 = FUN_0016fb18(param_1,*(undefined4 *)(param_2 + 0xc4));
  FUN_0016eb28(uVar2,uVar1);
  FUN_00171ca8(uVar1,0);
  *(undefined4 *)(param_2 + 0x34c) = 0;
  FUN_002e1280(DAT_003c9ed4,uVar1);
  return 1;
}


// ==== FUN_0016fb18 @ 0016fb18 ====

int FUN_0016fb18(int param_1,int param_2)

{
  if (param_2 == 1) {
    return param_1 + 0x7c;
  }
  if (param_2 == 2) {
    return param_1 + 0x88;
  }
  return 0;
}


// ==== FUN_0016fb48 @ 0016fb48 ====

void FUN_0016fb48(void)

{
  DAT_0040e592 = 0;
  uGpffff8da3 = 0;
  return;
}


// ==== FUN_0016fb58 @ 0016fb58 ====

undefined4 FUN_0016fb58(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ==== FUN_0016fb60 @ 0016fb60 ====

void FUN_0016fb60(undefined1 param_1)

{
  uGpffff8da3 = param_1;
  return;
}


// ==== FUN_0016fb68 @ 0016fb68 ====

/* Strings referenciadas:
     "TraceLine" */

void FUN_0016fb68(int *param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined1 in_zero_qw [16];
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  iVar6 = 0x3c0000;
  iVar9 = 0x3c0000;
  if (DAT_003bcefc == -1) {
    uVar2 = FUN_002e91c0();
    iVar9 = iVar6;
    uVar1 = FUN_002e94b8(uVar2,0x3f5428);
    *(undefined4 *)(iVar9 + -0x3104) = uVar1;
  }
  if (DAT_0040e593 == '\0') {
    iVar9 = param_1[2];
  }
  else {
    uVar1 = FUN_00272378(*(undefined4 *)(iVar9 + -0x3104));
    FUN_00272340(uVar1);
    iVar9 = param_1[2];
  }
  auVar7 = _pextlw((long)iVar9,(long)*param_1);
  auVar8 = _pextlw((long)param_1[1],auVar7._0_8_);
  auVar7 = _pextlw((long)param_2[2],(long)*param_2);
  auVar7 = _pextlw((long)param_2[1],auVar7._0_8_);
  iVar9 = DAT_0040f4d4 + 4000;
  uVar2 = 3;
  if (DAT_0040e592 != '\0') {
    uVar2 = 0xb;
  }
  uVar3 = FUN_0016fb58();
  auVar8 = _por(in_zero_qw,auVar8);
  auVar7 = _por(in_zero_qw,auVar7);
  lVar4 = FUN_00175f78(iVar9,auVar8._0_8_,auVar7._0_8_,uVar2,uVar3,0,auStack_d0);
  auVar7 = _lqc2(auStack_d0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_4 + 4) = 0x3f800000;
    *(int *)(param_4 + 8) = *param_2;
    *(int *)(param_4 + 0xc) = param_2[1];
    *(int *)(param_4 + 0x10) = param_2[2];
    *(undefined4 *)(param_4 + 0x14) = DAT_004514f8;
    *(undefined4 *)(param_4 + 0x18) = DAT_004514fc;
    *(undefined4 *)(param_4 + 0x1c) = DAT_00451500;
  }
  else {
    auVar5 = _qmfc2(auVar7._0_4_);
    auVar8 = _sqc2(auVar7);
    *(undefined4 *)(param_4 + 4) = uStack_b0;
    uStack_8c = auVar8._4_4_;
    auVar7 = _sqc2(auVar7);
    *(int *)(param_4 + 8) = auVar5._0_4_;
    uStack_88 = auVar7._8_4_;
    *(undefined4 *)(param_4 + 0xc) = uStack_8c;
    *(undefined4 *)(param_4 + 0x10) = uStack_88;
    auVar5 = _lqc2(auStack_c0);
    auVar8 = _qmfc2(auVar5._0_4_);
    auVar7 = _sqc2(auVar5);
    *(int *)(param_4 + 0x14) = auVar8._0_4_;
    uStack_dc = auVar7._4_4_;
    auVar7 = _sqc2(auVar5);
    uStack_d8 = auVar7._8_4_;
    *(undefined4 *)(param_4 + 0x18) = uStack_dc;
    *(undefined4 *)(param_4 + 0x1c) = uStack_d8;
  }
  return;
}


// ==== FUN_0016fd78 @ 0016fd78 ====

/* Strings referenciadas:
     "CheckVisible" */

byte FUN_0016fd78(int *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  uint uStack_7c;
  uint uStack_78;
  
  if (DAT_003bcf00 == -1) {
    uVar3 = FUN_002e91c0();
    DAT_003bcf00 = FUN_002e94b8(uVar3,0x3f5438);
  }
  if (DAT_0040e593 == '\0') {
    iVar8 = *param_1;
  }
  else {
    uVar9 = FUN_00272378(DAT_003bcf00);
    FUN_00272340(uVar9);
    iVar8 = *param_1;
  }
  auVar5 = _pextlw((long)param_1[2],(long)iVar8);
  auVar6 = _pextlw((long)param_2[2],(long)*param_2);
  auVar7 = _pextlw((long)param_2[1],auVar6._0_8_);
  auVar5 = _pextlw((long)param_1[1],auVar5._0_8_);
  auVar6 = _qmtc2(auVar5._0_4_);
  auVar10 = _qmtc2(auVar7._0_4_);
  auVar10 = _vsub(auVar6,auVar10);
  auVar6 = _qmfc2(auVar10._0_4_);
  bVar1 = false;
  if ((auVar6._0_4_ & 0x7f800000) < 0x37800001) {
    auVar6 = _sqc2(auVar10);
    uStack_7c = auVar6._4_4_;
    bVar1 = false;
    if ((uStack_7c & 0x7f800000) < 0x37800001) {
      auVar6 = _sqc2(auVar10);
      uStack_78 = auVar6._8_4_;
      bVar1 = (uStack_78 & 0x7f800000) < 0x37800001;
    }
  }
  bVar2 = 0;
  if (!bVar1) {
    uVar3 = 3;
    if (DAT_0040e592 != '\0') {
      uVar3 = 0xb;
    }
    iVar8 = DAT_0040f4d4 + 4000;
    uVar4 = FUN_0016fb58(param_3);
    bVar2 = FUN_00175f50(iVar8,auVar5._0_8_,auVar7._0_8_,uVar3,uVar4,0);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


// ==== FUN_0016ff20 @ 0016ff20 ====

/* Strings referenciadas:
     "CheckCylinder" */

byte FUN_0016ff20(undefined4 param_1,int *param_2,int *param_3)

{
  undefined1 in_zero_qw [16];
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_003bcf04 == -1) {
    uVar2 = FUN_002e91c0();
    DAT_003bcf04 = FUN_002e94b8(uVar2,0x3f5448);
  }
  if (DAT_0040e593 == '\0') {
    iVar5 = param_2[2];
  }
  else {
    uVar6 = FUN_00272378(DAT_003bcf04);
    FUN_00272340(uVar6);
    iVar5 = param_2[2];
  }
  auVar3 = _pextlw((long)iVar5,(long)*param_2);
  auVar4 = _pextlw((long)param_2[1],auVar3._0_8_);
  auVar3 = _pextlw((long)param_3[2],(long)*param_3);
  uVar2 = 0xb;
  if (DAT_0040e592 == '\0') {
    uVar2 = 3;
  }
  auVar3 = _pextlw((long)param_3[1],auVar3._0_8_);
  auVar4 = _por(in_zero_qw,auVar4);
  auVar3 = _por(in_zero_qw,auVar3);
  bVar1 = FUN_00175fa0(param_1,DAT_0040f4d4 + 4000,auVar4._0_8_,auVar3._0_8_,uVar2);
  return bVar1 ^ 1;
}


// ==== FUN_00170030 @ 00170030 ====

void FUN_00170030(void)

{
  undefined8 uVar1;
  undefined4 auStack_20 [4];
  
  auStack_20[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x14,auStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_20[0],0x14,uVar1);
  }
  FUN_00170090(auStack_20[0]);
  return;
}


// ==== FUN_00170090 @ 00170090 ====

undefined8 FUN_00170090(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_00170680();
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003dd018;
  uVar1 = FUN_002dfe40(param_1,0x44f7c0);
  puVar2[3] = uVar1;
  uVar1 = FUN_002dfe40(param_1,0x44f9f0);
  puVar2[4] = uVar1;
  return param_1;
}


// ==== FUN_001700f8 @ 001700f8 ====

void FUN_001700f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1c,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x1c,uVar1);
  }
  FUN_00170178(auStack_40[0],param_1,param_2);
  return;
}


// ==== FUN_00170178 @ 00170178 ====

undefined8 FUN_00170178(undefined8 param_1)

{
  FUN_00171a08();
  *(undefined4 *)param_1 = &DAT_003dcf60;
  return param_1;
}


// ==== FUN_001701b0 @ 001701b0 ====

bool FUN_001701b0(void)

{
  long lVar1;
  
  lVar1 = FUN_00171a40();
  return lVar1 != 0;
}


// ==== FUN_001701d8 @ 001701d8 ====

void FUN_001701d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x70,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x70,uVar1);
  }
  FUN_00170258(auStack_40[0],param_1,param_2);
  return;
}


// ==== FUN_00170258 @ 00170258 ====

undefined8 FUN_00170258(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_00171ae8();
  puVar2 = (undefined4 *)param_1;
  *puVar2 = &DAT_003dcfe0;
  uVar1 = FUN_002e4d18(param_1,0x4504e0);
  puVar2[0x18] = uVar1;
  uVar1 = FUN_002e4d18(param_1,0x450940);
  puVar2[0x19] = uVar1;
  uVar1 = FUN_002e4d18(param_1,0x450198);
  puVar2[0x1a] = uVar1;
  uVar1 = FUN_002e4d18(param_1,0x4503c8);
  puVar2[0x1b] = uVar1;
  *(undefined4 *)(puVar2[0x18] + 4) = 0x40000000;
  *(undefined4 *)(puVar2[0x19] + 4) = 0x3f333333;
  *(undefined4 *)(puVar2[0x1b] + 4) = 0x3f333333;
  *(undefined4 *)(puVar2[0x1a] + 4) = 0x3fd9999a;
  return param_1;
}


// ==== FUN_00170320 @ 00170320 ====

/* WARNING: Removing unreachable block (ram,0x0017037c) */
/* WARNING: Removing unreachable block (ram,0x00170598) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00170320(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x20);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  _qmfc2(auVar3._0_4_);
  _sqc2(auVar3);
  _sqc2(auVar3);
  _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
  _qmfc2(auVar3._0_4_);
  _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  _qmfc2(auVar3._0_4_);
  _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  _qmfc2(auVar3._0_4_);
  _sqc2(auVar3);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar3 = _lqc2(_DAT_00414dc0);
  auVar2 = _qmfc2(auVar6._0_4_);
  auVar5 = _vadd(auVar4,auVar3);
  auVar3 = _sqc2(auVar5);
  auVar4 = _qmfc2(auVar5._0_4_);
  *(int *)(param_1 + 0x48) = auVar2._0_4_;
  auStack_40._4_4_ = auVar3._4_4_;
  auVar3 = _sqc2(auVar5);
  *(int *)(param_1 + 0x30) = auVar4._0_4_;
  auStack_40._8_4_ = auVar3._8_4_;
  auVar3 = _sqc2(auVar6);
  *(undefined4 *)(param_1 + 0x34) = auStack_40._4_4_;
  auStack_40._4_4_ = auVar3._4_4_;
  auVar3 = _sqc2(auVar6);
  *(undefined4 *)(param_1 + 0x38) = auStack_40._8_4_;
  auStack_40._8_4_ = auVar3._8_4_;
  *(undefined4 *)(param_1 + 0x4c) = auStack_40._4_4_;
  *(undefined4 *)(param_1 + 0x50) = auStack_40._8_4_;
  auStack_40 = auVar3;
  FUN_002e9f40(auStack_40,param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = auStack_40._0_4_;
  *(undefined4 *)(param_1 + 0x40) = auStack_40._4_4_;
  *(undefined4 *)(param_1 + 0x44) = auStack_40._8_4_;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x2e0);
  return 1;
}


// ==== FUN_00170670 @ 00170670 ====

void FUN_00170670(undefined4 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 0x60) + 4) = param_1;
  return;
}


// ==== FUN_00170680 @ 00170680 ====

undefined8 FUN_00170680(undefined8 param_1)

{
  FUN_002dfb00();
  *(undefined4 *)param_1 = &DAT_003dd048;
  return param_1;
}


// ==== FUN_001706c0 @ 001706c0 ====

void FUN_001706c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0xd0,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0xd0,uVar1);
  }
  FUN_00171110(auStack_40[0],param_1,param_2);
  return;
}


// ==== FUN_00170740 @ 00170740 ====

undefined4 FUN_00170740(int *param_1)

{
  if (param_1[0x19] == 0) {
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  else {
    (**(code **)(*param_1 + 0x8c))((int)param_1 + (int)*(short *)(*param_1 + 0x88));
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return 1;
}


// ==== FUN_00170798 @ 00170798 ====

void FUN_00170798(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0035e7d8(param_2 << 4);
  *(int *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}


// ==== FUN_001707d8 @ 001707d8 ====

void FUN_001707d8(int param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x70) = param_2;
  uVar3 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  *(int *)(param_1 + 0x90) = (int)uVar1;
  *(int *)(param_1 + 0x94) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  *(int *)(param_1 + 0xa0) = (int)uVar1;
  *(int *)(param_1 + 0xa4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  *(int *)(param_1 + 0xb0) = (int)uVar1;
  *(int *)(param_1 + 0xb4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa8);
  uVar2 = *(undefined4 *)(param_2 + 0xac);
  *(undefined1 *)(param_1 + 0x78) = param_3;
  *(int *)(param_1 + 0xc0) = (int)uVar1;
  *(int *)(param_1 + 0xc4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 200) = uVar3;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  FUN_00171200();
  return;
}


// ==== FUN_00170838 @ 00170838 ====

void FUN_00170838(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fStack_2c;
  float fStack_28;
  
  iVar5 = (int)param_1;
  switch(*(undefined4 *)(iVar5 + 0x7c)) {
  case 2:
    FUN_00171240(param_1);
  case 1:
  case 3:
    FUN_001718c8(param_1);
    break;
  case 4:
    FUN_001718c8(param_1);
    if (*(float *)(DAT_0040f4d0 + 0x20) - *(float *)(iVar5 + 0x74) <= 20.0) {
      iVar1 = *(int *)(iVar5 + 0x70);
      auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x90));
      bVar4 = false;
      auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
      auVar7 = _vsub(auVar7,auVar6);
      auVar6 = _qmfc2(auVar7._0_4_);
      bVar3 = false;
      if ((auVar6._0_4_ <= 0.2) && (-0.2 <= auVar6._0_4_)) {
        bVar3 = true;
      }
      bVar2 = false;
      if (bVar3) {
        auVar6 = _sqc2(auVar7);
        bVar3 = false;
        fStack_2c = auVar6._4_4_;
        if ((fStack_2c <= 0.2) && (-0.2 <= fStack_2c)) {
          bVar3 = true;
        }
        bVar2 = false;
        if (bVar3) {
          auVar6 = _sqc2(auVar7);
          fStack_28 = auVar6._8_4_;
          bVar2 = false;
          if (fStack_28 <= 0.2) {
            bVar2 = -0.2 <= fStack_28;
          }
        }
      }
      if (bVar2) {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xa0));
        auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
        auVar7 = _vsub(auVar7,auVar6);
        auVar6 = _qmfc2(auVar7._0_4_);
        bVar3 = false;
        if (auVar6._0_4_ <= 0.2 && -0.2 <= auVar6._0_4_) {
          auVar6 = _sqc2(auVar7);
          bVar2 = false;
          fStack_2c = auVar6._4_4_;
          if ((fStack_2c <= 0.2) && (bVar2 = false, -0.2 <= fStack_2c)) {
            bVar2 = true;
          }
          bVar3 = false;
          if (bVar2) {
            auVar6 = _sqc2(auVar7);
            fStack_28 = auVar6._8_4_;
            bVar3 = false;
            if (fStack_28 <= 0.2) {
              bVar3 = -0.2 <= fStack_28;
            }
          }
        }
        if (bVar3) {
          auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xb0));
          auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
          auVar7 = _vsub(auVar7,auVar6);
          auVar6 = _qmfc2(auVar7._0_4_);
          bVar3 = false;
          if (auVar6._0_4_ <= 0.2 && -0.2 <= auVar6._0_4_) {
            auVar6 = _sqc2(auVar7);
            bVar2 = false;
            fStack_2c = auVar6._4_4_;
            if ((fStack_2c <= 0.2) && (bVar2 = false, -0.2 <= fStack_2c)) {
              bVar2 = true;
            }
            bVar3 = false;
            if (bVar2) {
              auVar6 = _sqc2(auVar7);
              fStack_28 = auVar6._8_4_;
              bVar3 = false;
              if (fStack_28 <= 0.2) {
                bVar3 = -0.2 <= fStack_28;
              }
            }
          }
          if (bVar3) {
            auVar7 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xc0));
            auVar6 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
            auVar7 = _vsub(auVar7,auVar6);
            auVar6 = _qmfc2(auVar7._0_4_);
            if (auVar6._0_4_ <= 0.2 && -0.2 <= auVar6._0_4_) {
              auVar6 = _sqc2(auVar7);
              bVar4 = false;
              fStack_2c = auVar6._4_4_;
              if ((fStack_2c <= 0.2) && (-0.2 <= fStack_2c)) {
                bVar4 = true;
              }
              if (bVar4) {
                auVar6 = _sqc2(auVar7);
                bVar4 = false;
                fStack_28 = auVar6._8_4_;
                if (fStack_28 <= 0.2) {
                  bVar4 = -0.2 <= fStack_28;
                }
              }
              else {
                bVar4 = false;
              }
            }
            else {
              bVar4 = false;
            }
          }
        }
      }
      if (bVar4) {
        return;
      }
    }
    FUN_00170740(param_1);
  default:
  }
  return;
}


// ==== FUN_00170c90 @ 00170c90 ====

undefined4 FUN_00170c90(int *param_1)

{
  if (param_1[0x19] == 0) {
    param_1[0x1c] = 0;
  }
  else {
    (**(code **)(*param_1 + 0x8c))((int)param_1 + (int)*(short *)(*param_1 + 0x88));
    param_1[0x1c] = 0;
  }
  return 1;
}


// ==== FUN_00170cd8 @ 00170cd8 ====

void FUN_00170cd8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x7c) == 3) {
    uVar2 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
    *(undefined4 *)(iVar1 + 0x7c) = 4;
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
  }
  else {
    FUN_00170740(param_1);
  }
  return;
}


// ==== FUN_00170d20 @ 00170d20 ====

bool FUN_00170d20(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fStack_c;
  float fStack_8;
  
  iVar1 = *(int *)(param_1 + 0x70);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x70));
  auVar6 = _vsub(auVar6,auVar5);
  bVar4 = false;
  auVar5 = _qmfc2(auVar6._0_4_);
  bVar3 = false;
  if ((auVar5._0_4_ <= 0.2) && (-0.2 <= auVar5._0_4_)) {
    bVar3 = true;
  }
  bVar2 = false;
  if (bVar3) {
    auVar5 = _sqc2(auVar6);
    bVar3 = false;
    fStack_c = auVar5._4_4_;
    if ((fStack_c <= 0.2) && (bVar3 = false, -0.2 <= fStack_c)) {
      bVar3 = true;
    }
    bVar2 = false;
    if (bVar3) {
      auVar5 = _sqc2(auVar6);
      fStack_8 = auVar5._8_4_;
      bVar2 = false;
      if (fStack_8 <= 0.2) {
        bVar2 = -0.2 <= fStack_8;
      }
    }
  }
  if (bVar2) {
    auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x80));
    auVar6 = _vsub(auVar6,auVar5);
    auVar5 = _qmfc2(auVar6._0_4_);
    bVar3 = false;
    if (auVar5._0_4_ <= 0.2 && -0.2 <= auVar5._0_4_) {
      auVar5 = _sqc2(auVar6);
      bVar2 = false;
      fStack_c = auVar5._4_4_;
      if ((fStack_c <= 0.2) && (bVar2 = false, -0.2 <= fStack_c)) {
        bVar2 = true;
      }
      bVar3 = false;
      if (bVar2) {
        auVar5 = _sqc2(auVar6);
        fStack_8 = auVar5._8_4_;
        bVar3 = false;
        if (fStack_8 <= 0.2) {
          bVar3 = -0.2 <= fStack_8;
        }
      }
    }
    if (bVar3) {
      auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xb0));
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
      auVar6 = _vsub(auVar6,auVar5);
      auVar5 = _qmfc2(auVar6._0_4_);
      bVar3 = false;
      if (auVar5._0_4_ <= 0.2 && -0.2 <= auVar5._0_4_) {
        auVar5 = _sqc2(auVar6);
        bVar2 = false;
        fStack_c = auVar5._4_4_;
        if ((fStack_c <= 0.2) && (bVar2 = false, -0.2 <= fStack_c)) {
          bVar2 = true;
        }
        bVar3 = false;
        if (bVar2) {
          auVar5 = _sqc2(auVar6);
          fStack_8 = auVar5._8_4_;
          bVar3 = false;
          if (fStack_8 <= 0.2) {
            bVar3 = -0.2 <= fStack_8;
          }
        }
      }
      if (bVar3) {
        auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xc0));
        auVar5 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
        auVar6 = _vsub(auVar6,auVar5);
        auVar5 = _qmfc2(auVar6._0_4_);
        if (auVar5._0_4_ <= 0.2 && -0.2 <= auVar5._0_4_) {
          auVar5 = _sqc2(auVar6);
          bVar4 = false;
          fStack_c = auVar5._4_4_;
          if ((fStack_c <= 0.2) && (-0.2 <= fStack_c)) {
            bVar4 = true;
          }
          if (bVar4) {
            auVar5 = _sqc2(auVar6);
            bVar4 = false;
            fStack_8 = auVar5._8_4_;
            if (fStack_8 <= 0.2) {
              bVar4 = -0.2 <= fStack_8;
            }
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = false;
        }
      }
    }
  }
  if (bVar4) {
    *(undefined4 *)(param_1 + 0x7c) = 3;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  }
  return bVar4;
}


// ==== FUN_00171110 @ 00171110 ====

undefined8 FUN_00171110(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002f4a48();
  puVar1 = (undefined4 *)param_1;
  puVar1[0x1c] = 0;
  *puVar1 = &DAT_003dd198;
  puVar1[0x1d] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return param_1;
}


// ==== FUN_00171168 @ 00171168 ====

undefined4
FUN_00171168(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
            undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = (**(code **)(*param_4 + 0x1c))
                    ((int)param_4 + (int)*(short *)(*param_4 + 0x18),param_2,param_3,param_5);
  *(float *)param_5 = *(float *)param_5 * 100.0;
  if ((lVar3 == 0) &&
     (iVar1 = *(int *)((int)param_3 + 4), iVar2 = FUN_0016dd68(DAT_0040f4d4,1), iVar1 != iVar2)) {
    return 0;
  }
  return 1;
}


// ==== FUN_00171200 @ 00171200 ====

void FUN_00171200(int *param_1)

{
  param_1[0x1f] = 2;
  if (param_1[0x19] != 0) {
    (**(code **)(*param_1 + 0x8c))((int)param_1 + (int)*(short *)(*param_1 + 0x88));
  }
  return;
}


// ==== FUN_00171240 @ 00171240 ====

void FUN_00171240(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = 0;
  uVar2 = FUN_00179668(DAT_0040f4d4,1);
  piVar7 = (int *)param_1;
  iVar8 = (int)uVar2;
  if ((uint)piVar7[0x20] < *(uint *)(iVar8 + 0x30)) {
    uVar6 = piVar7[0x20];
    while( true ) {
      if (uVar6 < *(uint *)(iVar8 + 0x28)) {
        piVar4 = (int *)(uVar6 * 8 + *(int *)(iVar8 + 0x34));
        piVar5 = (int *)0x0;
        if (*piVar4 != -1) {
          piVar5 = piVar4;
        }
      }
      else {
        piVar5 = (int *)0x0;
      }
      lVar3 = FUN_00171398(param_1,piVar5);
      if (lVar3 != 0) {
        (**(code **)(*piVar7 + 0x7c))((int)piVar7 + (int)*(short *)(*piVar7 + 0x78),uVar2,piVar5);
      }
      iVar1 = piVar7[0x20];
      piVar7[0x20] = iVar1 + 1U;
      uVar9 = uVar9 + 1;
      if (*(uint *)(iVar8 + 0x30) <= iVar1 + 1U) {
        uVar9 = piVar7[0x19];
        goto LAB_00171328;
      }
      if (0x31 < uVar9) break;
      uVar6 = piVar7[0x20];
    }
  }
  else {
    uVar9 = piVar7[0x19];
LAB_00171328:
    uVar6 = 0;
    iVar8 = 0;
    if (uVar9 != 0) {
      piVar5 = (int *)(piVar7[0x18] + 8);
      do {
        iVar1 = *piVar5;
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 4;
        if (iVar1 != 0) {
          iVar8 = iVar8 + 1;
        }
      } while (uVar6 < uVar9);
    }
    if (iVar8 < 1) {
      FUN_00170740(param_1);
    }
    else {
      piVar7[0x1f] = 3;
    }
  }
  return;
}


// ==== FUN_00171398 @ 00171398 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00171398(int param_1,int *param_2)

{
  undefined1 auVar1 [12];
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
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
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
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
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  auVar8 = auStack_e0;
  puVar7 = (undefined4 *)auStack_140;
  iVar2 = param_2[1];
  if (param_2 == (int *)(iVar2 + 0x5c)) {
    iVar2 = iVar2 + 100;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar2 + 0x38)) * 0x14;
  }
  auVar4 = _pextlw((long)*(int *)(iVar2 + 0xc),(long)*(int *)(iVar2 + 4));
  auVar4 = _pextlw((long)*(int *)(iVar2 + 8),auVar4._0_8_);
  iVar2 = param_2[1];
  auVar4 = _qmtc2(auVar4._0_4_);
  _sqc2(auVar4);
  if (param_2 == (int *)(iVar2 + 0x5c)) {
    iVar2 = iVar2 + 0x78;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x18) + *(int *)(*param_2 * 4 + *(int *)(iVar2 + 0x3c)) * 0x14;
  }
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _pextlw((long)*(int *)(iVar2 + 0xc),(long)*(int *)(iVar2 + 4));
  auStack_140 = _pextlw((long)*(int *)(iVar2 + 8),auVar5._0_8_);
  auVar5 = _qmtc2(auStack_140._0_4_);
  auVar9 = _vsub(auVar5,auVar4);
  auVar5 = _vmul(auVar9,auVar9);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar11,auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar5);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  uVar12 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar12);
  auVar5 = _qmfc2(auVar5._0_4_);
  fVar3 = auVar5._0_4_;
  if ((fVar3 < 0.3) || (((uint)(0.3 - fVar3) & 0x7f800000) < 0x37800001)) {
    puVar7 = &uStack_130;
    auStack_e0._0_8_ = auStack_e0._4_8_ << 0x20;
    auStack_e0._12_4_ = auVar8._12_4_;
    auStack_e0._8_4_ = DAT_0048f6f4;
    auVar1._8_4_ = 0;
    auVar1._0_8_ = auStack_e0._8_8_;
    auStack_e0._0_12_ = auVar1 << 0x40;
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    _vsub(in_vf0,in_vf0);
    auVar8 = _vaddbc(in_vf0,in_vf0);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    auVar9 = _vaddbc(in_vf0,in_vf0);
    auStack_e0._12_4_ = 1;
    puVar6 = auStack_d0;
    iVar2 = *(int *)(param_1 + 0x70);
    uStack_130 = *(undefined4 *)PTR_DAT_0040e438;
    uStack_12c = *(undefined4 *)(PTR_DAT_0040e438 + 4);
    uStack_128 = *(undefined4 *)(PTR_DAT_0040e438 + 8);
    uStack_124 = *(undefined4 *)(PTR_DAT_0040e438 + 0xc);
    auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x10);
    uStack_114 = *(undefined4 *)(PTR_DAT_0040e438 + 0x1c);
    uStack_120 = auVar1._0_4_;
    uStack_11c = auVar1._4_4_;
    uStack_118 = auVar1._8_4_;
    auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x20);
    uStack_104 = *(undefined4 *)(PTR_DAT_0040e438 + 0x2c);
    uStack_110 = auVar1._0_4_;
    uStack_10c = auVar1._4_4_;
    uStack_108 = auVar1._8_4_;
    auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x30);
    uStack_f4 = *(undefined4 *)(PTR_DAT_0040e438 + 0x3c);
    auStack_d0 = _sqc2(auVar8);
    auStack_c0 = _sqc2(auVar5);
    auStack_b0 = _sqc2(auVar9);
    auStack_a0 = _sqc2(auVar4);
    uStack_e4 = 0x3e99999a;
    fStack_100 = auVar1._0_4_;
    uStack_fc = auVar1._4_4_;
    uStack_f8 = auVar1._8_4_;
  }
  else {
    uStack_e8 = DAT_0048f6f8;
    uStack_e4 = 1;
    uStack_f0 = 0;
    uStack_ec = 0;
    auStack_140 = *(undefined1 (*) [16])PTR_DAT_0040e438;
    auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x10);
    uStack_124 = *(undefined4 *)(PTR_DAT_0040e438 + 0x1c);
    uStack_130 = auVar1._0_4_;
    uStack_12c = auVar1._4_4_;
    uStack_128 = auVar1._8_4_;
    auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x20);
    uStack_114 = *(undefined4 *)(PTR_DAT_0040e438 + 0x2c);
    fStack_100 = fVar3 * 0.5 - 0.3;
    auVar8 = _qmtc2(1.0 / fVar3);
    uStack_120 = auVar1._0_4_;
    uStack_11c = auVar1._4_4_;
    uStack_118 = auVar1._8_4_;
    auVar8 = _vmulbc(auVar9,auVar8);
    auVar1 = *(undefined1 (*) [12])(PTR_DAT_0040e438 + 0x30);
    uStack_104 = *(undefined4 *)(PTR_DAT_0040e438 + 0x3c);
    auStack_a0 = _sqc2(auVar8);
    uStack_110 = auVar1._0_4_;
    uStack_10c = auVar1._4_4_;
    uStack_108 = auVar1._8_4_;
    uStack_f4 = 0x3e99999a;
    if (((uint)(1.0 - ABS((float)auStack_a0._4_4_)) & 0x7f800000) < 0x37800001) {
      auStack_30 = _sqc2(auVar8);
      auVar10 = _lqc2(_DAT_004432b0);
      _vopmula(auVar10,auVar8);
      auVar5 = _vopmsub(auVar8,auVar10);
      auVar9 = _vmul(auVar5,auVar5);
      _sqc2(auVar5);
      _vaddabc(auVar9,auVar9);
      auVar9 = _vmaddbc(auVar11,auVar9);
      _sqc2(auVar10);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar9);
      uVar12 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar12);
      auStack_70 = _sqc2(auVar8);
      _vopmula(auVar8,auVar5);
      auVar9 = _vopmsub(auVar5,auVar8);
      auStack_e0 = _sqc2(auVar5);
      auStack_d0 = _sqc2(auVar9);
      auStack_50 = _sqc2(auVar5);
      auStack_40 = _sqc2(auVar9);
      auStack_90 = _sqc2(auVar5);
      auStack_80 = _sqc2(auVar9);
      uStack_60 = uStack_20;
      uStack_5c = uStack_1c;
      uStack_58 = uStack_18;
      uStack_54 = uStack_14;
      auStack_c0 = _sqc2(auVar8);
    }
    else {
      auVar5 = _pextlw(0,0);
      auVar5 = _pextlw(0x3f800000,auVar5._0_8_);
      auStack_30 = _sqc2(auVar8);
      uStack_60 = auVar5._0_4_;
      auVar9 = _qmtc2(uStack_60);
      uStack_5c = auVar5._4_4_;
      uStack_58 = auVar5._8_4_;
      uStack_54 = auVar5._12_4_;
      _vopmula(auVar9,auVar8);
      auVar5 = _vopmsub(auVar8,auVar9);
      auStack_80 = _sqc2(auVar8);
      auVar9 = _vmul(auVar5,auVar5);
      _sqc2(auVar5);
      _vaddabc(auVar9,auVar9);
      auVar9 = _vmaddbc(auVar11,auVar9);
      auStack_c0 = _sqc2(auVar8);
      _vnop();
      _vnop();
      _vnop();
      _vrsqrt(in_vf0,auVar9);
      uVar12 = _vwaitq();
      auVar5 = _vmulq(auVar5,uVar12);
      _vopmula(auVar8,auVar5);
      auVar9 = _vopmsub(auVar5,auVar8);
      auStack_e0 = _sqc2(auVar5);
      auStack_d0 = _sqc2(auVar9);
      auStack_50 = _sqc2(auVar5);
      auStack_40 = _sqc2(auVar9);
      auStack_a0 = _sqc2(auVar5);
      auStack_90 = _sqc2(auVar9);
      auStack_70._4_4_ = uStack_1c;
      auStack_70._0_4_ = uStack_20;
      auStack_70._8_4_ = uStack_18;
      auStack_70._12_4_ = uStack_14;
    }
    auVar5 = _qmtc2(fVar3 * 0.5);
    iVar2 = *(int *)(param_1 + 0x70);
    auVar8 = _vmulbc(auVar8,auVar5);
    auVar8 = _vadd(auVar4,auVar8);
    auStack_b0 = _sqc2(auVar8);
    puVar6 = auStack_e0;
  }
  (**(code **)(*(int *)(iVar2 + 0x10) + 0xb4))
            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xb0),puVar7,0,puVar6);
  return;
}


// ==== FUN_00171788 @ 00171788 ====

void FUN_00171788(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_0028b2a8(DAT_0040f4d4 + 0x13d0,param_3);
  }
  FUN_002f4620(param_1,param_2,param_3);
  return;
}


// ==== FUN_001717e8 @ 001717e8 ====

void FUN_001717e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_0028b1f0(DAT_0040f4d4 + 0x13d0,param_3);
  }
  FUN_002f47b0(param_1,param_2,param_3);
  return;
}


// ==== FUN_00171848 @ 00171848 ====

void FUN_00171848(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 100) + -1;
  if (-1 < iVar2) {
    iVar1 = *(int *)(iVar3 + 0x60);
    while( true ) {
      if (*(int *)(iVar1 + iVar2 * 0x10 + 8) != 0) {
        FUN_0028b1f0(DAT_0040f4d4 + 0x13d0);
      }
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) break;
      iVar1 = *(int *)(iVar3 + 0x60);
    }
  }
  FUN_002f44e8(param_1);
  return;
}


// ==== FUN_001718c8 @ 001718c8 ====

void FUN_001718c8(void)

{
  return;
}


// ==== FUN_001718d0 @ 001718d0 ====

void FUN_001718d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7c) == 3) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  if (iVar1 == 2) {
    FUN_00171918(param_1,1);
  }
  return;
}


// ==== FUN_00171918 @ 00171918 ====

void FUN_00171918(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  piVar7 = (int *)param_1;
  uVar3 = piVar7[0x19];
  iVar8 = uVar3 - 1;
  uVar9 = 0;
  if (-1 < iVar8) {
    iVar6 = piVar7[0x18];
    do {
      iVar6 = iVar6 + iVar8 * 0x10;
      if (*(int *)(iVar6 + 8) == 0) {
LAB_001719b4:
        uVar9 = uVar9 + 1;
      }
      else {
        lVar4 = FUN_00171398(param_1);
        if (lVar4 == 0) {
          iVar2 = *piVar7;
          sVar1 = *(short *)(iVar2 + 0x80);
          uVar5 = FUN_0016dd68(DAT_0040f4d4,1);
          (**(code **)(iVar2 + 0x84))((int)piVar7 + (int)sVar1,uVar5,*(undefined4 *)(iVar6 + 8));
          *(undefined4 *)(iVar6 + 8) = 0;
          goto LAB_001719b4;
        }
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) goto code_r0x001719c0;
      iVar6 = piVar7[0x18];
    } while( true );
  }
LAB_001719c4:
  if (uVar9 < uVar3) {
    piVar7[0x1f] = 3;
  }
  else {
    FUN_00170740(param_1);
  }
  return;
code_r0x001719c0:
  uVar3 = piVar7[0x19];
  goto LAB_001719c4;
}


// ==== FUN_00171a08 @ 00171a08 ====

undefined8 FUN_00171a08(undefined8 param_1)

{
  FUN_002e1548();
  *(undefined4 *)param_1 = &DAT_003dcfa0;
  return param_1;
}


// ==== FUN_00171a40 @ 00171a40 ====

bool FUN_00171a40(void)

{
  long lVar1;
  
  lVar1 = FUN_002e1818();
  return lVar1 != 0;
}


// ==== FUN_00171a68 @ 00171a68 ====

void FUN_00171a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_40 [4];
  
  auStack_40[0] = 0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x60,auStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(auStack_40[0],0x60,uVar1);
  }
  FUN_00171ae8(auStack_40[0],param_1,param_2);
  return;
}


// ==== FUN_00171ae8 @ 00171ae8 ====

undefined8 FUN_00171ae8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  FUN_002e41d8();
  puVar1 = (undefined4 *)param_1;
  puVar1[0x15] = 0;
  *puVar1 = &DAT_003dd078;
  puVar1[0xc] = DAT_004514f8;
  puVar1[0xd] = DAT_004514fc;
  puVar1[0xe] = DAT_00451500;
  puVar1[0xf] = DAT_004514f8;
  puVar1[0x10] = DAT_004514fc;
  puVar1[0x11] = DAT_00451500;
  puVar1[0x12] = DAT_004514f8;
  puVar1[0x13] = DAT_004514fc;
  puVar1[0x14] = DAT_00451500;
  return param_1;
}


// ==== FUN_00171b80 @ 00171b80 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00171b80(int param_1)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_30 [16];
  
  auVar5 = _vaddbc(in_vf0,in_vf0);
  iVar1 = *(int *)(param_1 + 0x20);
  auVar4 = _lqc2(_DAT_00414dc0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
  auVar3 = _vadd(auVar2,auVar4);
  auVar2 = _sqc2(auVar3);
  auVar4 = _qmfc2(auVar3._0_4_);
  auStack_30._4_4_ = auVar2._4_4_;
  auVar2 = _sqc2(auVar3);
  *(int *)(param_1 + 0x30) = auVar4._0_4_;
  auStack_30._8_4_ = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x34) = auStack_30._4_4_;
  *(undefined4 *)(param_1 + 0x38) = auStack_30._8_4_;
  auVar4 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
  auVar4 = _vmul(auVar4,auVar4);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(auVar5,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  if (auVar4._0_4_ < 2.3283064e-10) {
    *(undefined4 *)(param_1 + 0x48) = DAT_00451508;
    *(undefined4 *)(param_1 + 0x4c) = DAT_0045150c;
    *(undefined4 *)(param_1 + 0x50) = DAT_00451510;
    auStack_30 = auVar2;
  }
  else {
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x90));
    auVar4 = _qmfc2(auVar3._0_4_);
    auVar2 = _sqc2(auVar3);
    *(int *)(param_1 + 0x48) = auVar4._0_4_;
    auStack_30._4_4_ = auVar2._4_4_;
    auVar2 = _sqc2(auVar3);
    *(undefined4 *)(param_1 + 0x4c) = auStack_30._4_4_;
    auStack_30._8_4_ = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x50) = auStack_30._8_4_;
    auStack_30 = auVar2;
  }
  FUN_002e9f40(auStack_30,param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = auStack_30._0_4_;
  *(undefined4 *)(param_1 + 0x40) = auStack_30._4_4_;
  *(undefined4 *)(param_1 + 0x44) = auStack_30._8_4_;
  return 1;
}


// ==== FUN_00171ca8 @ 00171ca8 ====

void FUN_00171ca8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


// ==== FUN_00171cb0 @ 00171cb0 ====

undefined4 FUN_00171cb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ==== FUN_00171cb8 @ 00171cb8 ====

void FUN_00171cb8(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],4,uVar1);
  }
  *apuStack_20[0] = &DAT_003dd4e0;
  return;
}


// ==== FUN_00171d20 @ 00171d20 ====

void FUN_00171d20(void)

{
  undefined8 uVar1;
  undefined4 *apuStack_20 [4];
  
  apuStack_20[0] = (undefined4 *)0x0;
  uVar1 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),4,apuStack_20);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_20[0],4,uVar1);
  }
  *apuStack_20[0] = &DAT_003dd4b0;
  return;
}


// ==== FUN_00171d88 @ 00171d88 ====

undefined4 * FUN_00171d88(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *apuStack_40 [4];
  
  apuStack_40[0] = (undefined4 *)0x0;
  uVar2 = (**(code **)(*DAT_003c87e8 + 0x34))
                    ((int)DAT_003c87e8 + (int)*(short *)(*DAT_003c87e8 + 0x30),0x1bc,apuStack_40);
  if (DAT_003c87ec != (code *)0x0) {
    (*DAT_003c87ec)(apuStack_40[0],0x1bc,uVar2);
  }
  puVar1 = apuStack_40[0];
  FUN_002fecb8(apuStack_40[0],param_1);
  *puVar1 = &DAT_003dd3d8;
  return puVar1;
}


// ==== FUN_00171e18 @ 00171e18 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00171e18(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  undefined1 auVar6 [16];
  
  uVar2 = FUN_002e91c0();
  FUN_002e9e20(uVar2);
  piVar5 = (int *)(param_1 + 0x148);
  if (*(char *)((int)uVar2 + 0x50) == '\0') {
    piVar5 = (int *)(param_1 + 0xd0);
  }
  uVar2 = FUN_00171cb0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  iVar1 = FUN_00135550(uVar2);
  auVar4 = _pextlw((long)piVar5[2],(long)*piVar5);
  auVar6 = _lqc2(_DAT_00414dc0);
  auVar4 = _pextlw((long)piVar5[1],auVar4._0_8_);
  auVar4 = _qmtc2(auVar4._0_4_);
  auVar4 = _vsub(auVar4,auVar6);
  auVar4 = _qmfc2(auVar4._0_4_);
  lVar3 = FUN_00182270(0x3e800000,iVar1 + 0x810,auVar4._0_8_);
  return lVar3 != 0;
}


// ==== FUN_00171ed0 @ 00171ed0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00171ed0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  int *piVar13;
  undefined4 uVar14;
  undefined1 in_vf0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x20);
  iVar5 = FUN_00135550(iVar1);
  if (*(int *)(param_1 + 0x140) == -1) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xe8) = *puVar2;
    *(undefined4 *)(param_1 + 0xec) = puVar2[1];
    *(undefined4 *)(param_1 + 0xf0) = puVar2[2];
    uVar11 = *(uint *)(param_1 + 0x140);
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x140);
  }
  bVar3 = false;
  if (*(uint *)(param_1 + 0x74) < uVar11) {
    return 0;
  }
  if (uVar11 < *(uint *)(param_1 + 0x74) - 1) {
    iVar6 = uVar11 * 0xc + *(int *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar6 + 0x10);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar6 + 0x14);
  }
  auVar12 = _pextlw((long)*(int *)(param_1 + 0xf0),(long)*(int *)(param_1 + 0xe8));
  auVar12 = _pextlw((long)*(int *)(param_1 + 0xec),auVar12._0_8_);
  uVar11 = *(uint *)(*(int *)(param_1 + 0x140) * 4 + *(int *)(param_1 + 0x7c));
  auVar15 = _qmtc2(auVar12._0_4_);
  auVar12 = _lqc2(_DAT_00414dc0);
  auVar12 = _vsub(auVar15,auVar12);
  auVar12 = _sqc2(auVar12);
  if (uVar11 < *(uint *)(*(int *)(param_1 + 100) + 0x28)) {
    piVar10 = (int *)(uVar11 * 8 + *(int *)(*(int *)(param_1 + 100) + 0x34));
    piVar13 = (int *)0x0;
    if (*piVar10 != -1) {
      piVar13 = piVar10;
    }
  }
  else {
    piVar13 = (int *)0x0;
  }
  if (piVar13 != (int *)0x0) {
    iVar6 = piVar13[1];
    if (piVar13 == (int *)(iVar6 + 0x5c)) {
      iVar7 = *(int *)(iVar6 + 0x94);
    }
    else {
      iVar7 = 0;
      if (*(int *)(iVar6 + 0x50) != 0) {
        iVar7 = *(int *)(*piVar13 * 4 + *(int *)(iVar6 + 0x50));
      }
    }
    uVar14 = 0x3e19999a;
    if (iVar7 == *(int *)(DAT_0040f4d4 + 0x1140)) goto LAB_00172094;
  }
  uVar14 = 0x3d4ccccd;
LAB_00172094:
  lVar8 = FUN_00182270(uVar14,iVar5 + 0x810);
  if (lVar8 == 0) {
    auVar17 = _lqc2(auVar12);
    auVar16 = _vaddbc(in_vf0,in_vf0);
    auVar15 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
    auVar12 = _lqc2(*(undefined1 (*) [16])(iVar1 + 400));
    auVar15 = _vsub(auVar15,auVar17);
    auVar12 = _vsub(auVar12,auVar17);
    auVar12 = _vmul(auVar12,auVar15);
    _vaddabc(auVar12,auVar12);
    auVar12 = _vmaddbc(auVar16,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    if (auVar12._0_4_ < 0.0) {
      bVar3 = true;
    }
    else {
      cVar4 = FUN_00176f00(iVar5 + 0x1fcc);
      if ((cVar4 != '\0') && (0.0 < *(float *)(*(int *)(iVar5 + 0x7c) + 0x308))) {
        auVar12 = _pextlw((long)*(int *)(param_1 + 0xd8),(long)*(int *)(param_1 + 0xd0));
        auVar15 = _lqc2(_DAT_00414dc0);
        auVar12 = _pextlw((long)*(int *)(param_1 + 0xd4),auVar12._0_8_);
        auVar12 = _qmtc2(auVar12._0_4_);
        auVar12 = _vsub(auVar12,auVar15);
        auVar12 = _qmfc2(auVar12._0_4_);
        lVar8 = FUN_00182ba0(iVar5 + 0x810,auVar12._0_8_);
        bVar3 = lVar8 != 0;
      }
    }
  }
  else {
    bVar3 = true;
  }
  uVar9 = 0;
  if (bVar3) {
    if (*(uint *)(param_1 + 0x140) < *(int *)(param_1 + 0x74) - 1U) {
      *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) + 1;
    }
    uVar9 = 1;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xd8);
  }
  return uVar9;
}


// ==== FUN_001723e8 @ 001723e8 ====

void FUN_001723e8(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_00172418();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1b5) = 1;
  }
  return;
}


// ==== FUN_00172418 @ 00172418 ====

undefined4 FUN_00172418(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar3 = FUN_0016dd68(DAT_0040f4d4,1);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == iVar3) {
    iVar3 = *(int *)(param_1 + 0x74);
    if ((iVar3 != 0) && (uVar8 = 0, iVar3 != 1)) {
      puVar7 = *(uint **)(param_1 + 0x7c);
      do {
        if (*puVar7 < *(uint *)(iVar1 + 0x28)) {
          piVar5 = (int *)(*puVar7 * 8 + *(int *)(iVar1 + 0x34));
          piVar6 = (int *)0x0;
          if (*piVar5 != -1) {
            piVar6 = piVar5;
          }
        }
        else {
          piVar6 = (int *)0x0;
        }
        if (piVar6 != (int *)0x0) {
          iVar2 = piVar6[1];
          if (piVar6 == (int *)(iVar2 + 0x5c)) {
            iVar4 = *(int *)(iVar2 + 0x94);
          }
          else {
            iVar4 = 0;
            if (*(int *)(iVar2 + 0x50) != 0) {
              iVar4 = *(int *)(*piVar6 * 4 + *(int *)(iVar2 + 0x50));
            }
          }
          if (iVar4 == param_2) {
            return 1;
          }
        }
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar8 < iVar3 - 1U);
    }
  }
  return 0;
}


// ==== FUN_00172528 @ 00172528 ====

void FUN_00172528(int param_1)

{
  FUN_00176ee0(param_1 + 0x14);
  return;
}


// ==== FUN_00172548 @ 00172548 ====

undefined4 FUN_00172548(undefined8 param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  FUN_00173690(iVar2 + 4);
  FUN_00173690(iVar2 + 8);
  auVar3 = _vadd(in_vf0,in_vf0);
  *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
  auVar1 = _sqc2(auVar3);
  *(undefined1 (*) [16])(iVar2 + 0x20) = auVar1;
  _sqc2(auVar3);
  FUN_00173640(0,param_1);
  return 1;
}


// ==== FUN_001725b8 @ 001725b8 ====

void FUN_001725b8(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (lVar2 = FUN_00176f00(param_1 + 0x14), lVar2 != 0)) {
    uVar1 = FUN_0017b6f8(DAT_0040f4d4 + 0x1290,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa0));
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}


// ==== FUN_00172610 @ 00172610 ====

undefined4 FUN_00172610(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ==== FUN_00172618 @ 00172618 ====

void FUN_00172618(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// ==== FUN_00172620 @ 00172620 ====

undefined4 FUN_00172620(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== FUN_00172640 @ 00172640 ====

bool FUN_00172640(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00173610(param_1 + 4);
  if (lVar1 != 0) {
    uVar2 = FUN_0016de70(0x3f800000,0x40000000,DAT_0040f4d4);
    FUN_00173640(uVar2,param_1 + 4);
  }
  return lVar1 != 0;
}


// ==== FUN_001726a0 @ 001726a0 ====

bool FUN_001726a0(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00173610(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_0016de70(0x3f800000,0x40000000,DAT_0040f4d4);
    FUN_00173640(uVar2,param_1 + 8);
  }
  return lVar1 != 0;
}


// ==== FUN_00172700 @ 00172700 ====

void FUN_00172700(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ==== FUN_00172708 @ 00172708 ====

bool FUN_00172708(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  bVar1 = false;
  if (*(int *)(param_2 + 0x1ee0) != 0) {
    lVar3 = FUN_00172620();
    iVar2 = (int)lVar3;
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      auVar5 = _vaddbc(in_vf0,in_vf0);
      auVar4 = _pextlw((long)*(int *)(iVar2 + 0xc),(long)*(int *)(iVar2 + 4));
      auVar4 = _pextlw((long)*(int *)(iVar2 + 8),auVar4._0_8_);
      auVar6 = _qmtc2(auVar4._0_4_);
      auVar4 = _lqc2(*(undefined1 (*) [16])(*(int *)(param_2 + 0x7c) + 0xa0));
      auVar4 = _vsub(auVar4,auVar6);
      auVar4 = _vmul(auVar4,auVar4);
      _vaddabc(auVar4,auVar4);
      auVar4 = _vmaddbc(auVar5,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      bVar1 = 225.0 < auVar4._0_4_;
    }
  }
  return bVar1;
}


// ==== FUN_001727c0 @ 001727c0 ====

undefined4 FUN_001727c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_00172548();
  puVar4 = (undefined4 *)(param_1 + 0x4c);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = 3;
    do {
      *puVar4 = 0;
      iVar1 = iVar1 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar1);
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_00172830 @ 00172830 ====

undefined4 FUN_00172830(int param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  lVar3 = FUN_00172548();
  uVar2 = 0;
  if (lVar3 != 0) {
    auVar7 = _vadd(in_vf0,in_vf0);
    *(undefined1 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined1 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    *(undefined1 *)(param_1 + 0x2bd) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined1 *)(param_1 + 0x2be) = 0;
    auVar7 = _sqc2(auVar7);
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined1 *)(param_1 + 0x2bf) = 0;
    *(undefined1 *)(param_1 + 0x2c0) = 2;
    *(undefined4 *)(param_1 + 0x2b8) = 0x41200000;
    *(undefined1 *)(param_1 + 0x2c1) = 0xff;
    FUN_00174dd0(param_1 + 0x200);
    FUN_00174df0(param_1 + 0x200,0xbcc9ba44d2a23598,param_1 + 0x2a0,0);
    FUN_00173f58(param_1 + 0x230,DAT_0040f4d0 + 0x30);
    auVar8 = _vsub(in_vf0,in_vf0);
    iVar6 = 0;
    iVar4 = 0;
    while( true ) {
      *(undefined4 *)(param_1 + 100 + iVar6 * 4) = 0;
      iVar4 = iVar4 + param_1;
      iVar6 = iVar6 + 1;
      iVar5 = param_1;
      do {
        *(undefined8 *)(iVar4 + 0x80) = 0;
        iVar5 = iVar5 + 0xc0;
        *(undefined1 *)(iVar4 + 0xa4) = 0;
        _sqc2(auVar8);
        auVar1 = _sqc2(auVar8);
        *(undefined1 (*) [16])(iVar4 + 0x90) = auVar1;
        *(undefined4 *)(iVar4 + 0xa0) = 0;
        iVar4 = iVar4 + 0xc0;
      } while (iVar5 < param_1 + 0x180);
      if (3 < iVar6) break;
      iVar4 = iVar6 * 0x30;
    }
    FUN_00172c00(param_1,3,DAT_0040f4d0 + 0x30);
    FUN_00172618(param_1,DAT_0040f4d0 + 0x30);
    FUN_00173690(param_1 + 0x4c);
    FUN_00173690(param_1 + 0x48);
    uStack_80 = auVar7._0_4_;
    uStack_7c = auVar7._4_4_;
    uStack_78 = auVar7._8_4_;
    uStack_74 = auVar7._12_4_;
    *(undefined1 *)(param_1 + 0x44) = 0xff;
    *(undefined4 *)(param_1 + 0x50) = uStack_80;
    *(undefined4 *)(param_1 + 0x54) = uStack_7c;
    *(undefined4 *)(param_1 + 0x58) = uStack_78;
    *(undefined4 *)(param_1 + 0x5c) = uStack_74;
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return uVar2;
}


// ==== FUN_001729f8 @ 001729f8 ====

void FUN_001729f8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  FUN_001725b8();
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0x30) == -1) {
    uVar2 = FUN_00179140(DAT_0040f4d4 + 0xfa8,iVar8 + 0x230,1);
    *(undefined4 *)(iVar8 + 0x30) = uVar2;
  }
  iVar7 = iVar8 + 0x4c;
  FUN_00173028(param_1);
  puVar9 = (undefined8 *)0x0;
  iVar1 = FUN_00172610(param_1);
  iVar1 = *(int *)(iVar1 + 0x2a4);
  lVar3 = FUN_00158e88(iVar1);
  lVar4 = FUN_001735e0(iVar7);
  if ((lVar4 != 0) && (lVar4 = FUN_00173610(iVar7), lVar4 != 0)) {
    *(undefined4 *)(iVar8 + 0x60) = 0xffffffff;
    FUN_00173690(iVar7);
  }
  lVar4 = FUN_00172610(param_1);
  if (lVar4 != 0) {
    uVar5 = FUN_00172610(param_1);
    lVar4 = FUN_00137450(uVar5);
    if (lVar4 != 0) {
      if ((lVar3 != 0) && (lVar4 = FUN_00172c50(param_1,lVar3), lVar4 == 0)) {
        *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)((int)lVar3 + 0x380);
        FUN_00173640(0x40a00000,iVar7);
      }
      lVar3 = FUN_001735e0(iVar8 + 0x48);
      if (lVar3 == 0) {
        FUN_00173640(0x3f800000,iVar8 + 0x48);
      }
      else {
        lVar3 = FUN_00173610();
        if ((lVar3 != 0) && (puVar9 = (undefined8 *)(iVar1 + 0x10), *(int *)(iVar8 + 0x1c) == -1)) {
          uVar2 = FUN_00179140(DAT_0040f4d4 + 0xfa8,iVar8 + 0x230,0);
          *(undefined4 *)(iVar8 + 0x1c) = uVar2;
        }
      }
      goto LAB_00172b94;
    }
  }
  puVar9 = (undefined8 *)0x0;
  FUN_00173690(iVar8 + 0x48);
  if (*(int *)(iVar8 + 0x1c) != -1) {
    FUN_001791d8(DAT_0040f4d4 + 0xfa8);
    *(undefined4 *)(iVar8 + 0x1c) = 0xffffffff;
  }
LAB_00172b94:
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined4 *)(iVar8 + 0x18) = 0;
  }
  else {
    uVar5 = *puVar9;
    uVar2 = *(undefined4 *)(puVar9 + 1);
    uVar6 = *(undefined4 *)((int)puVar9 + 0xc);
    *(int *)(iVar8 + 0x18) = iVar8 + 0x50;
    *(int *)(iVar8 + 0x50) = (int)uVar5;
    *(int *)(iVar8 + 0x54) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(iVar8 + 0x58) = uVar2;
    *(undefined4 *)(iVar8 + 0x5c) = uVar6;
  }
  lVar3 = FUN_00172610(param_1);
  if (lVar3 != 0) {
    *(undefined1 *)(iVar8 + 0x2c4) =
         *(undefined1 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x2a4) + 0x108);
  }
  FUN_00173748(iVar8 + 0x230);
  return;
}


// ==== FUN_00172c00 @ 00172c00 ====

undefined4 FUN_00172c00(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 100) = param_3;
  return 1;
}


// ==== FUN_00172c18 @ 00172c18 ====

undefined4 FUN_00172c18(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 100);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*piVar2 == param_2) {
      *piVar2 = 0;
      return 1;
    }
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  return 0;
}


// ==== FUN_00172c50 @ 00172c50 ====

undefined4 FUN_00172c50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 100);
  iVar1 = 0;
  while( true ) {
    iVar1 = iVar1 + 1;
    if ((*piVar2 != 0) && (*piVar2 == param_2)) break;
    piVar2 = piVar2 + 1;
    if (3 < iVar1) {
      return 0;
    }
  }
  return 1;
}


// ==== FUN_00172c88 @ 00172c88 ====

void FUN_00172c88(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_d0 [32];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  
  auVar9 = _vaddbc(in_vf0,in_vf0);
  auStack_a0 = _sqc2(auVar9);
  piVar6 = (int *)(param_1 + 100);
  iVar7 = 3;
  iVar4 = 0;
  uStack_b0 = (undefined4)param_3;
  uStack_ac = (undefined4)((ulong)param_3 >> 0x20);
  fVar8 = DAT_003f5474;
  uStack_a8 = in_a2_udw;
  uStack_a4 = in_register_0000006c;
  do {
    iVar1 = *piVar6;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc4) == 1)) {
      auVar9._4_4_ = uStack_ac;
      auVar9._0_4_ = uStack_b0;
      auVar9._8_4_ = uStack_a8;
      auVar9._12_4_ = uStack_a4;
      auVar10 = _lqc2(auVar9);
      auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xa0));
      auVar9 = _vsub(auVar10,auVar9);
      auVar9 = _vmul(auVar9,auVar9);
      auVar10 = _lqc2(auStack_a0);
      _vaddabc(auVar9,auVar9);
      auVar9 = _vmaddbc(auVar10,auVar9);
      auVar9 = _qmfc2(auVar9._0_4_);
      fVar2 = auVar9._0_4_;
      lVar5 = FUN_00135550(iVar1);
      if ((lVar5 != 0) &&
         ((iVar3 = FUN_00135550(iVar1), *(int *)(iVar3 + 0x80) == 1 && (fVar2 < 64.0)))) {
        iVar3 = FUN_00135550(iVar1);
        FUN_0018bf28(fVar2,auStack_d0,CONCAT44(uStack_ac,uStack_b0),0);
        FUN_00181b08(iVar3 + 0xec0,auStack_d0);
      }
      if ((((iVar4 == 0) || (fVar2 < fVar8)) && (lVar5 = FUN_00135550(iVar1), lVar5 != 0)) &&
         (iVar3 = FUN_00135550(iVar1), *(int *)(iVar3 + 0x80) == 1)) {
        fVar8 = fVar2;
        iVar4 = iVar1;
      }
    }
    iVar7 = iVar7 + -1;
    piVar6 = piVar6 + 1;
  } while (-1 < iVar7);
  if (iVar4 != 0) {
    iVar4 = FUN_00135550(iVar4);
    FUN_00181f48(0,0x3f800000,iVar4 + 0xc80,0,0x11);
  }
  return;
}


// ==== FUN_00172e28 @ 00172e28 ====

undefined4 FUN_00172e28(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    return 0;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      return 2;
    }
  }
  else if (param_2 == 2) {
    return 1;
  }
  return 4;
}


// ==== FUN_00172e80 @ 00172e80 ====

void FUN_00172e80(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  
  iVar1 = *param_2;
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        return;
      }
    }
    else if (iVar1 == 2) {
      return;
    }
    auVar2 = _vsub(in_vf0,in_vf0);
    _sqc2(auVar2);
    _qmfc2(auVar2._0_4_);
  }
  return;
}


// ==== FUN_00172ed8 @ 00172ed8 ====

void FUN_00172ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_v0_udw;
  undefined4 in_register_0000002c;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_2;
  iVar1 = FUN_00172e28(param_1,*puVar4);
  puVar3 = (undefined8 *)((int)param_1 + param_4 * 0xc0 + 0x80 + iVar1 * 0x30);
  *(undefined1 *)((int)puVar3 + 0x24) = 1;
  uVar2 = FUN_00172e80(param_1,param_2);
  *(int *)(puVar3 + 2) = (int)uVar2;
  *(int *)((int)puVar3 + 0x14) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = in_v0_udw;
  *(undefined4 *)((int)puVar3 + 0x1c) = in_register_0000002c;
  uVar2 = *(undefined8 *)(puVar4 + 2);
  *(undefined4 **)(puVar3 + 4) = puVar4;
  *puVar3 = uVar2;
  return;
}


// ==== FUN_00172f60 @ 00172f60 ====

void FUN_00172f60(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((long)*(char *)(iVar3 + 0x44) == (long)(int)param_2) {
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined1 *)(iVar3 + 0x44) = 0xff;
  }
  FUN_00173228(param_1);
  iVar2 = 3;
  puVar1 = (undefined1 *)(param_2 * 0xc0 + iVar3 + 0x134);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -0x30;
  } while (-1 < iVar2);
  return;
}


// ==== FUN_00172fe0 @ 00172fe0 ====

void FUN_00172fe0(int param_1,char param_2)

{
  *(char *)(param_1 + 0x44) = param_2;
  *(int *)(param_1 + 0x40) = DAT_0040f4d0 + param_2 * 0x880 + 0x4990;
  FUN_00173028();
  return;
}


// ==== FUN_00173028 @ 00173028 ====

void FUN_00173028(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = (int)param_1;
  iVar5 = 0;
  if (*(int *)(iVar4 + 0x40) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x10) + 4);
    iVar7 = 0;
    piVar6 = (int *)(iVar4 + 100);
    do {
      if (iVar5 != 3) {
        puVar3 = (undefined8 *)(iVar4 + *(char *)(iVar4 + 0x44) * 0xc0 + 0x80 + iVar7);
        if (((*(char *)((int)puVar3 + 0x24) == '\x01') && (*piVar6 == 0)) &&
           (lVar2 = FUN_00178408(DAT_0040f4d4 + 0xfa4,*(undefined4 *)(puVar3 + 4),uVar1,0,0,0,
                                 *(char *)(iVar4 + 0x44),0), lVar2 != 0)) {
          FUN_00172c00(param_1,iVar5,lVar2);
          FUN_00137318(lVar2,*puVar3);
          if (*(int *)((int)lVar2 + 0x398) < *(int *)(*(int *)(iVar4 + 0x40) + 8)) {
            FUN_00137018(lVar2,puVar3[2]);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x30;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 4);
  }
  return;
}


// ==== FUN_00173168 @ 00173168 ====

void FUN_00173168(undefined8 param_1,int param_2)

{
  FUN_00172c18(param_1,*(undefined4 *)(param_2 + 0x7c));
  return;
}


// ==== FUN_00173190 @ 00173190 ====

void FUN_00173190(int param_1,undefined8 param_2)

{
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  *(int *)(param_1 + 0x230) = (int)param_2;
  *(int *)(param_1 + 0x234) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x238) = in_a1_udw;
  *(undefined4 *)(param_1 + 0x23c) = in_register_0000005c;
  return;
}


// ==== FUN_00173198 @ 00173198 ====

void FUN_00173198(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 100);
  do {
    if ((iVar2 != 3) && (*piVar3 != 0)) {
      iVar1 = FUN_00135550(*piVar3);
      FUN_001897e8(iVar1 + 0x150,param_2,param_3);
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  return;
}


// ==== FUN_00173228 @ 00173228 ====

void FUN_00173228(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = (int)param_1;
  iVar6 = 0;
  if (*(char *)(iVar4 + 0x44) != -1) {
    iVar7 = 0;
    piVar5 = (int *)(iVar4 + 100);
    do {
      if (iVar6 != 3) {
        iVar1 = *piVar5;
        iVar3 = iVar4 + *(char *)(iVar4 + 0x44) * 0xc0 + 0x80 + iVar7;
        if (iVar1 != 0) {
          if (*(char *)(iVar3 + 0x24) == '\0') {
            FUN_00172c18(param_1,iVar1);
            FUN_00139060(DAT_0040f514,iVar1);
          }
          else {
            if (*(int *)(iVar1 + 0x398) < *(int *)(*(int *)(iVar4 + 0x40) + 8)) {
              FUN_00137018(iVar1,*(undefined8 *)(iVar3 + 0x10));
            }
            lVar2 = FUN_00135550(iVar1);
            if ((lVar2 != 0) && (iVar3 = FUN_00135550(iVar1), *(int *)(iVar3 + 0x80) == 1)) {
              iVar1 = FUN_00135550(iVar1);
              *(undefined1 *)(iVar1 + 0xca0) = *(undefined1 *)(iVar4 + 0x44);
              FUN_00180b40(iVar1 + 0xb30);
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x30;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 4);
  }
  return;
}


// ==== FUN_00173370 @ 00173370 ====

undefined4 FUN_00173370(int param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 100);
  do {
    if (-1 < iVar3) {
      if (iVar3 < 3) {
        if ((*piVar4 != 0) && (*piVar4 != param_3)) {
          iVar1 = FUN_00135550();
          lVar2 = FUN_00188f10(iVar1 + 0x150);
          if (lVar2 != 0) {
            iVar1 = FUN_00188f58(iVar1 + 0x150);
            goto LAB_00173404;
          }
        }
      }
      else if (iVar3 == 3) {
        iVar1 = *(int *)(param_1 + 0x60);
LAB_00173404:
        if (iVar1 == param_2) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    if (3 < iVar3) {
      return 0;
    }
  } while( true );
}


// ==== FUN_00173450 @ 00173450 ====

undefined4 FUN_00173450(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  iVar2 = 2;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  do {
    *puVar1 = (int)param_2;
    puVar1[1] = (int)((ulong)param_2 >> 0x20);
    puVar1[2] = in_a1_udw;
    puVar1[3] = in_register_0000005c;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -4;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  return 1;
}


// ==== FUN_00173488 @ 00173488 ====

undefined8 FUN_00173488(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  pauVar4 = &auStack_20;
  fVar6 = (*(float *)(DAT_0040f4d0 + 0x20) - *(float *)(param_1 + 0x30)) / 0.35;
  iVar2 = 0;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  pauVar5 = (undefined1 (*) [16])(param_1 + 0x10);
  iVar2 = 0x1000000;
  do {
    auVar10 = _qmtc2(1.0 - fVar6);
    auVar8 = _lqc2(pauVar5[1]);
    auVar7 = _lqc2(*pauVar5);
    auVar9 = _qmtc2(fVar6);
    auVar8 = _vmulbc(auVar8,auVar10);
    auVar7 = _vmulbc(auVar7,auVar9);
    auVar7 = _vadd(auVar8,auVar7);
    auVar7 = _sqc2(auVar7);
    *pauVar4 = auVar7;
    iVar3 = iVar2 >> 0x18;
    iVar2 = iVar2 + 0x1000000;
    pauVar4 = pauVar4 + 1;
    pauVar5 = pauVar5 + -1;
  } while (iVar3 < 2);
  auVar8 = _qmtc2(0x40000000);
  auVar7 = _lqc2(auStack_10);
  auVar7 = _vmulbc(auVar7,auVar8);
  auVar8 = _lqc2(auStack_20);
  auVar7 = _vsub(auVar7,auVar8);
  auVar7 = _qmfc2(auVar7._0_4_);
  return auVar7._0_8_;
}


// ==== FUN_00173560 @ 00173560 ====

undefined4 FUN_00173560(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  undefined4 *puVar2;
  int iVar3;
  
  if ((float)param_1[0xc] + 0.35 <= *(float *)(DAT_0040f4d0 + 0x20)) {
    iVar3 = 0x1000000;
    puVar2 = param_1 + 8;
    do {
      iVar1 = iVar3 >> 0x18;
      iVar3 = iVar3 + -0x1000000;
      *puVar2 = (int)*(undefined8 *)(puVar2 + -4);
      puVar2[1] = (int)((ulong)*(undefined8 *)(puVar2 + -4) >> 0x20);
      puVar2[2] = puVar2[-2];
      puVar2[3] = puVar2[-1];
      puVar2 = puVar2 + -4;
    } while (0 < iVar1);
    *param_1 = (int)param_2;
    param_1[1] = (int)((ulong)param_2 >> 0x20);
    param_1[2] = in_a1_udw;
    param_1[3] = in_register_0000005c;
    param_1[0xc] = *(undefined4 *)(DAT_0040f4d0 + 0x20);
    return 1;
  }
  return 0;
}


// ==== FUN_001735e0 @ 001735e0 ====

bool FUN_001735e0(float *param_1)

{
  return *param_1 != -1.0;
}


// ==== FUN_00173610 @ 00173610 ====

bool FUN_00173610(float *param_1)

{
  return *param_1 <= *(float *)(DAT_0040f4d0 + 0x20);
}


// ==== FUN_00173640 @ 00173640 ====

void FUN_00173640(float param_1,float *param_2)

{
  *param_2 = *(float *)(DAT_0040f4d0 + 0x20) + param_1;
  return;
}


