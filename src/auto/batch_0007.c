// ==== FUN_00160738 @ 00160738 ====

undefined4 FUN_00160738(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)param_1;
  iVar5 = 0;
  if (0 < piVar3[1]) {
    iVar4 = 0;
    do {
      FUN_00160b48(*piVar3 + iVar4);
      bVar1 = *(byte *)(*(int *)(iVar4 + *piVar3) + 0x15);
      if ((bVar1 & 4) == 0) {
        if ((bVar1 & 8) != 0) {
          iVar2 = *piVar3;
          goto LAB_001607bc;
        }
        if ((bVar1 & 2) != 0) {
          iVar2 = *piVar3;
          goto LAB_001607bc;
        }
        if ((bVar1 & 0x20) != 0) {
          iVar2 = *piVar3;
          goto LAB_001607bc;
        }
        if ((bVar1 & 0x10) != 0) {
          iVar2 = *piVar3;
          goto LAB_001607bc;
        }
        iVar2 = piVar3[1];
      }
      else {
        iVar2 = *piVar3;
LAB_001607bc:
        FUN_00160808(param_1,**(undefined8 **)(iVar4 + iVar2),0);
        iVar2 = piVar3[1];
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < iVar2);
  }
  return 1;
}


// ==== FUN_00160808 @ 00160808 ====

void FUN_00160808(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      if (**(long **)(iVar3 + *param_1) == param_2) {
        FUN_00160b60((undefined4 *)(iVar3 + *param_1),param_3);
        iVar1 = param_1[1];
      }
      else {
        iVar1 = param_1[1];
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < iVar1);
  }
  return;
}


// ==== FUN_00160898 @ 00160898 ====
// GLOBAL DAT_0040f0e0 int

void FUN_00160898(int *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(DAT_0040f0e0 + 0x21070) == DAT_0040f0e0 + 0x20f78) && (iVar2 = 0, 0 < param_1[1])) {
    iVar3 = 0;
    do {
      if (**(long **)(iVar3 + *param_1) == param_2) {
        FUN_00160bd0((undefined4 *)(iVar3 + *param_1),param_3);
        iVar1 = param_1[1];
      }
      else {
        iVar1 = param_1[1];
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < iVar1);
  }
  return;
}


// ==== FUN_00160950 @ 00160950 ====

/* Strings referenciadas:
     "_PMO_" */

void FUN_00160950(int *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [16];
  
  iVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (0 < param_1[1]) {
    iVar7 = 0;
    do {
      puVar2 = *(undefined8 **)(iVar7 + *param_1);
      if ((*(byte *)((int)puVar2 + 0x15) & 2) == 0) {
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      else {
        param_1[2] = param_1[2] + (int)*(char *)((int)puVar2 + 0x14);
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      if ((bVar1 & 4) == 0) {
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      else {
        param_1[3] = param_1[3] + (int)*(char *)((int)puVar2 + 0x14);
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      if ((bVar1 & 8) == 0) {
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      else {
        param_1[4] = param_1[4] + (int)*(char *)((int)puVar2 + 0x14);
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      if ((bVar1 & 0x10) == 0) {
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      else {
        param_1[5] = param_1[5] + 1;
        bVar1 = *(byte *)((int)puVar2 + 0x15);
      }
      if ((bVar1 & 0x20) == 0) {
        cVar3 = *(char *)((int)puVar2 + 0x15);
      }
      else {
        param_1[6] = param_1[6] + 1;
        cVar3 = *(char *)((int)puVar2 + 0x15);
      }
      if (cVar3 == '\0') {
        FUN_00272488(*puVar2,auStack_60);
        lVar5 = FUN_00360a50(auStack_60,0x3f4fa8);
        if (lVar5 == 0) {
          param_1[7] = param_1[7] + 1;
          iVar4 = param_1[1];
        }
        else {
          iVar4 = param_1[1];
        }
      }
      else {
        iVar4 = param_1[1];
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < iVar4);
  }
  return;
}


// ==== FUN_00160aa8 @ 00160aa8 ====

int FUN_00160aa8(int param_1,char param_2)

{
  if ('\x02' < param_2) {
    if (param_2 == '\x03') {
      return *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) +
             *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18);
    }
    return 0;
  }
  if ('\0' < param_2) {
    return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) +
           *(int *)(param_1 + 0x18);
  }
  return 0;
}


// ==== FUN_00160b30 @ 00160b30 ====

void FUN_00160b30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}


// ==== FUN_00160b48 @ 00160b48 ====

void FUN_00160b48(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


// ==== FUN_00160b60 @ 00160b60 ====
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f51c undefined4

void FUN_00160b60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if ((2 < piVar2[2] - 1U) && (piVar2[2] = 1, param_2 != 0)) {
    uVar1 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(*piVar2 + 0x10));
    FUN_001f2a38(DAT_0040f51c,uVar1,param_1);
  }
  return;
}


// ==== FUN_00160bd0 @ 00160bd0 ====
// GLOBAL DAT_0040f4c4 undefined4
// GLOBAL DAT_0040f51c undefined4
// GLOBAL DAT_0040f4dc int_*
// GLOBAL DAT_0040f0e0 int

/* Strings referenciadas:
     "_PMO_"
     "LX_DESTRUCTION" */

void FUN_00160bd0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 auStack_40 [16];
  
  piVar6 = (int *)param_1;
  if ((piVar6[2] != 0) && (piVar6[2] != 3)) {
    iVar2 = *piVar6;
    lVar4 = (long)*(char *)(iVar2 + 0x14);
    if (lVar4 == 1) {
      piVar6[2] = 3;
      if ((*(byte *)(iVar2 + 0x15) & 1) == 0) {
        uVar3 = FUN_00108818(DAT_0040f4c4,*(undefined4 *)(iVar2 + 0x10));
        FUN_001f29a0(DAT_0040f51c,uVar3,param_1);
        puVar5 = (undefined8 *)*piVar6;
      }
      else {
        puVar5 = (undefined8 *)*piVar6;
      }
    }
    else if (lVar4 < 2) {
      puVar5 = (undefined8 *)*piVar6;
    }
    else {
      if (piVar6[1] < lVar4) {
        piVar6[2] = 2;
        if ((*(byte *)(iVar2 + 0x15) & 2) == 0) {
          uVar3 = FUN_00108818(DAT_0040f4c4);
        }
        else {
          uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f4fb0);
        }
        FUN_001f29e8(DAT_0040f51c,uVar3,param_1);
        iVar2 = piVar6[1];
      }
      else if (piVar6[1] == lVar4) {
        piVar6[2] = 3;
        if ((*(byte *)(iVar2 + 0x15) & 2) == 0) {
          if ((*(byte *)(iVar2 + 0x15) & 1) == 0) {
            uVar3 = FUN_00108818(DAT_0040f4c4);
            FUN_001f29a0(DAT_0040f51c,uVar3,param_1);
            iVar2 = piVar6[1];
          }
          else {
            iVar2 = piVar6[1];
          }
        }
        else {
          uVar3 = FUN_001087c8(DAT_0040f4c4,0x3f4fb0);
          FUN_001f29a0(DAT_0040f51c,uVar3,param_1);
          iVar2 = piVar6[1];
        }
      }
      else {
        iVar2 = piVar6[1];
      }
      piVar6[1] = iVar2 + 1;
      puVar5 = (undefined8 *)*piVar6;
    }
    bVar1 = false;
    if ((puVar5[2] & 0xe0000000000) == 0) {
      if (piVar6[2] == 3) {
        FUN_00272488(*puVar5,auStack_40);
        lVar4 = FUN_00360a50(auStack_40,0x3f4fa8);
        bVar1 = lVar4 == 0;
      }
    }
    else {
      bVar1 = piVar6[2] - 2U < 2;
    }
    if (bVar1) {
      FUN_001225b8(DAT_0040f4dc,*(undefined1 *)(*piVar6 + 0x15));
      if ((*(byte *)(*piVar6 + 0x15) & 1) != 0) {
        *(undefined1 *)(*DAT_0040f4dc + 0x14) = 1;
        iVar2 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 8);
        (**(code **)(iVar2 + 0x3c))
                  (*(int *)(DAT_0040f0e0 + 0x21070) + (int)*(short *)(iVar2 + 0x38),0);
      }
    }
  }
  return;
}


// ==== FUN_00160e10 @ 00160e10 ====

bool FUN_00160e10(int *param_1,int param_2)

{
  if (*(char *)(*param_1 + 0x15) == '\0') {
    return false;
  }
  if (param_2 < 3) {
    if (0 < param_2) {
      return (*(byte *)(*param_1 + 0x15) & 2) == 0;
    }
    if (param_2 == 0) {
      return false;
    }
  }
  return true;
}


// ==== FUN_00160e70 @ 00160e70 ====

void FUN_00160e70(int param_1)

{
  FUN_00165ae0();
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// ==== FUN_00160ea0 @ 00160ea0 ====

undefined4 FUN_00160ea0(int param_1)

{
  FUN_00165af8();
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return 1;
}


// ==== FUN_00160ed8 @ 00160ed8 ====

undefined4 FUN_00160ed8(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_00160ef8 @ 00160ef8 ====

void FUN_00160ef8(void)

{
  FUN_00165bb0();
  return;
}


// ==== FUN_00160f20 @ 00160f20 ====

void FUN_00160f20(undefined8 param_1,undefined8 param_2)

{
  FUN_00160e70();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00160f60 @ 00160f60 ====

undefined8 FUN_00160f60(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 in_vuI;
  float fStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  FUN_00160ea0();
  *param_1 = param_2;
  *(int *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 3) = param_3;
  auVar17 = _vmaxbc(in_vf0,in_vf0);
  auVar16 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  auVar2 = _qmfc2(auVar16._0_4_);
  auVar2 = _qmtc2(-auVar2._0_4_ * 0.017453292);
  auVar2 = _vaddbc(in_vf0,auVar2);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar2,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar17,in_vuI);
  _vmaddai(auVar17,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar2 = _vmsubi(auVar17,in_vuI);
  _lqc2(auStack_80);
  auVar2 = _vabs(auVar2);
  _lqc2(auStack_70);
  _ctc2(0x3e800000);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar18 = _qmtc2(0);
  auVar7 = _vmul(auVar2,auVar2);
  _ctc2(0xc2992661);
  _vnop();
  auVar5 = _vmuli(auVar2,in_vuI);
  auVar13 = _vmul(auVar7,auVar7);
  auVar11 = _vmul(auVar13,auVar13);
  auVar6 = _vmul(auVar5,auVar7);
  _ctc2(0xc2255de0);
  _vnop();
  auVar9 = _vmuli(auVar2,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar8 = _vmuli(auVar2,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar5 = _vmuli(auVar2,in_vuI);
  auVar10 = _vaddbc(in_vf0,auVar18);
  _vmula(auVar9,auVar7);
  _vmadda(auVar6,auVar13);
  _ctc2(0x40c90fda);
  _vmadda(auVar8,auVar13);
  _vmaddai(auVar2,in_vuI);
  auVar5 = _vmadd(auVar5,auVar11);
  auVar9 = _vaddbc(in_vf0,auVar18);
  auVar2 = _pextlw(0,0x3f800000);
  _vmove(auVar10);
  _vmove(auVar9);
  auVar2 = _pextlw(0,auVar2._0_8_);
  auVar7 = _vaddbc(in_vf0,auVar5);
  auVar8 = _vaddbc(in_vf0,auVar5);
  auVar14 = _qmtc2(auVar2._0_4_);
  auVar6 = _vsub(in_vf0,auVar5);
  _sqc2(auVar10);
  auVar10 = _vadd(in_vf0,in_vf0);
  _sqc2(auVar9);
  _vmove(auVar8);
  auVar2 = _pextlw(0,0);
  _vmove(auVar7);
  auVar12 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar14);
  auVar15 = _vaddbc(in_vf0,auVar6);
  _sqc2(auVar7);
  auVar5 = _pextlw(0x3f800000,auVar2._0_8_);
  _sqc2(auVar8);
  _sqc2(auVar14);
  auVar2 = _sqc2(auVar16);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar10);
  _sqc2(auVar10);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar10);
  _sqc2(auVar14);
  _sqc2(auVar15);
  _sqc2(auVar12);
  _sqc2(auVar10);
  _lqc2(auVar2);
  _vmove(auVar12);
  fStack_8c = auVar2._4_4_;
  auVar2 = _qmtc2(fStack_8c * 0.017453292);
  auVar2 = _vaddbc(in_vf0,auVar2);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar2,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar17,in_vuI);
  _vmaddai(auVar17,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar2,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar2 = _vmsubi(auVar17,in_vuI);
  auVar2 = _vabs(auVar2);
  _ctc2(0x3e800000);
  _vnop();
  auVar2 = _vsubi(auVar2,in_vuI);
  auVar7 = _vmul(auVar2,auVar2);
  _ctc2(0xc2992661);
  _vnop();
  auVar6 = _vmuli(auVar2,in_vuI);
  auVar11 = _vmul(auVar7,auVar7);
  _ctc2(0x42a33457);
  _vnop();
  auVar13 = _vmuli(auVar2,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar9 = _vmuli(auVar2,in_vuI);
  auVar8 = _vmul(auVar11,auVar11);
  auVar6 = _vmul(auVar6,auVar7);
  _ctc2(0xc2255de0);
  _vnop();
  auVar16 = _vmuli(auVar2,in_vuI);
  _vmula(auVar16,auVar7);
  _vmadda(auVar6,auVar11);
  _ctc2(0x40c90fda);
  _vmadda(auVar13,auVar11);
  _vmaddai(auVar2,in_vuI);
  auVar2 = _vmadd(auVar9,auVar8);
  auVar11 = _vaddbc(in_vf0,auVar2);
  auVar13 = _vaddbc(in_vf0,auVar2);
  _vmove(auVar11);
  auVar6 = _vsub(in_vf0,auVar2);
  auVar7 = _vaddbc(in_vf0,auVar18);
  _vmove(auVar13);
  _vmove(auVar7);
  auVar9 = _vaddbc(in_vf0,auVar18);
  auVar8 = _vaddbc(in_vf0,auVar6);
  _sqc2(auVar11);
  _sqc2(auVar7);
  _vmove(auVar9);
  auVar6 = _vaddbc(in_vf0,auVar2);
  _sqc2(auVar8);
  _sqc2(auVar13);
  _vmulabc(auVar14,auVar6);
  _vmaddabc(auVar15,auVar6);
  auVar11 = _vmaddbc(auVar12,auVar6);
  _vmulabc(auVar14,auVar10);
  _vmaddabc(auVar15,auVar10);
  _vmaddabc(auVar12,auVar10);
  auVar13 = _vmaddbc(auVar10,in_vf0);
  auVar2 = _qmtc2(auVar5._0_4_);
  _sqc2(auVar9);
  _vmulabc(auVar14,auVar8);
  _vmaddabc(auVar15,auVar8);
  auVar5 = _vmaddbc(auVar12,auVar8);
  _vmulabc(auVar14,auVar2);
  _vmaddabc(auVar15,auVar2);
  auVar7 = _vmaddbc(auVar12,auVar2);
  auVar2 = _sqc2(auVar13);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar2;
  auVar2 = _sqc2(auVar5);
  *(undefined1 (*) [16])(param_1 + 6) = auVar2;
  auVar2 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  auVar2 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 10) = auVar2;
  _sqc2(auVar6);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined4 *)(param_3 + 0x18);
  uVar4 = *(undefined4 *)(param_3 + 0x1c);
  _sqc2(auVar10);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar10);
  *(int *)(param_1 + 0xc) = (int)uVar1;
  *(int *)((int)param_1 + 100) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((int)param_1 + 0x6c) = uVar4;
  _sqc2(auVar10);
  _sqc2(auVar8);
  _sqc2(auVar6);
  _sqc2(auVar10);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _sqc2(auVar11);
  _sqc2(auVar13);
  _sqc2(auVar5);
  _sqc2(auVar7);
  _sqc2(auVar11);
  _sqc2(auVar13);
  return 1;
}


// ==== FUN_00161350 @ 00161350 ====

undefined4 FUN_00161350(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00161418 @ 00161418 ====

undefined4 FUN_00161418(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_00161460 @ 00161460 ====

undefined4 FUN_00161460(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_001614e8 @ 001614e8 ====

undefined4 FUN_001614e8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_00161530 @ 00161530 ====

undefined4 FUN_00161530(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_001615a8 @ 001615a8 ====

undefined4 FUN_001615a8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_001615f0 @ 001615f0 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001615f0(int param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  cVar1 = *(char *)((int)puVar2 + 0xc);
  if (cVar1 == '\x01') {
    FUN_00160898(DAT_0040f4d0 + 0x8f0,*puVar2,*(undefined4 *)(puVar2 + 1));
  }
  else if ((cVar1 < '\x02') && (cVar1 == '\0')) {
    FUN_00160808(DAT_0040f4d0 + 0x8f0,*puVar2,1);
  }
  return;
}


// ==== FUN_00161660 @ 00161660 ====

undefined4 FUN_00161660(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_001616a8 @ 001616a8 ====
// GLOBAL DAT_0040f0e0 int

void FUN_001616a8(int param_1)

{
  int iVar1;
  
  if (**(char **)(param_1 + 0x20) == '\0') {
    iVar1 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 8);
    (**(code **)(iVar1 + 0x44))
              (*(int *)(DAT_0040f0e0 + 0x21070) + (int)*(short *)(iVar1 + 0x40),0,1);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_0040f0e0 + 0x21070) + 8);
    (**(code **)(iVar1 + 0x44))
              (*(int *)(DAT_0040f0e0 + 0x21070) + (int)*(short *)(iVar1 + 0x40),0,0);
  }
  return;
}


// ==== FUN_00161730 @ 00161730 ====

undefined4 FUN_00161730(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_00161778 @ 00161778 ====
// GLOBAL DAT_0040f4bc int_*
// GLOBAL DAT_0040f4f4 undefined4

void FUN_00161778(int param_1)

{
  long lVar1;
  
  lVar1 = 0x6d6123044330fccf;
  if ((long *)*DAT_0040f4bc != (long *)0x0) {
    lVar1 = *(long *)*DAT_0040f4bc;
  }
  if (lVar1 != 0x594c3cc765b41051) {
    FUN_00168618(DAT_0040f4f4,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x94),
                 *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x99),0);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// ==== FUN_00161808 @ 00161808 ====
// GLOBAL DAT_0040f4bc int
// GLOBAL DAT_0040f4f4 undefined4

void FUN_00161808(int param_1)

{
  int iVar1;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long *plStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  long alStack_30 [2];
  
  plStack_60 = (long *)&uStack_a0;
  iVar1 = *(int *)(param_1 + 0x20);
  alStack_30[0] = *(long *)(iVar1 + 0x20);
  uStack_a0 = *(undefined4 *)(iVar1 + 0x30);
  uStack_9c = *(undefined4 *)(iVar1 + 0x34);
  uStack_98 = *(undefined4 *)(iVar1 + 0x38);
  uStack_94 = *(undefined4 *)(iVar1 + 0x3c);
  uStack_90 = *(undefined4 *)(iVar1 + 0x40);
  uStack_8c = *(undefined4 *)(iVar1 + 0x44);
  uStack_88 = *(undefined4 *)(iVar1 + 0x48);
  uStack_84 = *(undefined4 *)(iVar1 + 0x4c);
  uStack_80 = *(undefined4 *)(iVar1 + 0x50);
  uStack_7c = *(undefined4 *)(iVar1 + 0x54);
  uStack_78 = *(undefined4 *)(iVar1 + 0x58);
  uStack_74 = *(undefined4 *)(iVar1 + 0x5c);
  uStack_70 = *(undefined4 *)(iVar1 + 0x60);
  uStack_6c = *(undefined4 *)(iVar1 + 100);
  uStack_68 = *(undefined4 *)(iVar1 + 0x68);
  uStack_64 = *(undefined4 *)(iVar1 + 0x6c);
  uStack_5c = *(undefined4 *)(iVar1 + 0x70);
  uStack_58 = *(char *)(iVar1 + 0x9a) == '\x01';
  uStack_57 = *(char *)(iVar1 + 0x9b) == '\x01';
  uStack_50 = *(undefined2 *)(iVar1 + 0x74);
  uStack_4c = *(undefined4 *)(iVar1 + 0x78);
  uStack_48 = *(undefined4 *)(iVar1 + 0x7c);
  uStack_44 = *(undefined4 *)(iVar1 + 0x80);
  uStack_40 = *(undefined4 *)(iVar1 + 0x84);
  uStack_3c = *(undefined4 *)(iVar1 + 0x88);
  uStack_38 = *(undefined4 *)(iVar1 + 0x8c);
  if (alStack_30[0] == 0) {
    uStack_54 = 1;
  }
  else {
    plStack_60 = alStack_30;
    uStack_54 = 2;
  }
  (**(code **)(*(int *)(DAT_0040f4bc + 0x14) + 0x24))
            (DAT_0040f4bc + *(short *)(*(int *)(DAT_0040f4bc + 0x14) + 0x20),7,&plStack_60);
  FUN_00168618(DAT_0040f4f4,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x90),
               *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x98),0);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}


// ==== FUN_00161920 @ 00161920 ====

void FUN_00161920(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00161940 @ 00161940 ====

undefined4 FUN_00161940(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return 1;
}


// ==== FUN_00161990 @ 00161990 ====

undefined4 FUN_00161990(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00161aa8 @ 00161aa8 ====

void FUN_00161aa8(int param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_00160e70();
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    uVar1 = FUN_00107d20((int)param_2 << 2);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// ==== FUN_00161af0 @ 00161af0 ====
// GLOBAL DAT_0040f4d0 undefined4

undefined4 FUN_00161af0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_b0 [16];
  
  iVar7 = 0;
  FUN_00160ea0();
  *param_1 = param_2;
  *(int *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 3) = param_3;
  if (*(char *)(param_3 + 4) != '\0') {
    do {
      iVar6 = iVar7 + 1;
      iVar1 = FUN_0012bd98(DAT_0040f4d0,param_4);
      iVar3 = 0;
      lVar5 = *(long *)(iVar7 * 8 + **(int **)(param_1 + 4));
      if (0 < *(int *)(iVar1 + 0x30)) {
        plVar2 = *(long **)(iVar1 + 0x18);
        do {
          if (*plVar2 == lVar5) {
            iVar3 = *(int *)((int)param_1 + 0x24);
            goto LAB_00161c04;
          }
          iVar3 = iVar3 + 1;
          plVar2 = plVar2 + 0x3a;
        } while (iVar3 < *(int *)(iVar1 + 0x30));
      }
      iVar4 = 0;
      iVar3 = *(int *)((int)param_1 + 0x24);
      if (0 < *(int *)(iVar1 + 0x34)) {
        plVar2 = *(long **)(iVar1 + 0x1c);
        do {
          if (*plVar2 == lVar5) goto LAB_00161c04;
          iVar4 = iVar4 + 1;
          plVar2 = plVar2 + 0x40;
        } while (iVar4 < *(int *)(iVar1 + 0x34));
      }
      plVar2 = (long *)0x0;
LAB_00161c04:
      *(long **)(iVar7 * 4 + iVar3) = plVar2;
      iVar1 = *(int *)(iVar7 * 4 + *(int *)((int)param_1 + 0x24));
      if (iVar1 == 0) {
        FUN_00272488(*(undefined8 *)(iVar7 * 8 + **(int **)(param_1 + 4)),auStack_b0);
        iVar7 = *(int *)(param_1 + 4);
      }
      else {
        iVar7 = *(int *)(param_1 + 4);
      }
      if (*(char *)(iVar7 + 8) == '\x02') {
        FUN_00129240(DAT_0040f4d0,iVar1,0);
        iVar7 = *(int *)(param_1 + 4);
      }
      else {
        iVar7 = *(int *)(param_1 + 4);
      }
      if (*(char *)(iVar7 + 8) == '\x04') {
        *(undefined1 *)(iVar1 + 0x13f) = 1;
      }
      iVar7 = iVar6;
    } while (iVar6 < (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 4));
  }
  return 1;
}


// ==== FUN_00161cb8 @ 00161cb8 ====

undefined4 FUN_00161cb8(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00161d58 @ 00161d58 ====

void FUN_00161d58(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00161d78 @ 00161d78 ====

undefined4 FUN_00161d78(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return 1;
}


// ==== FUN_00161dc8 @ 00161dc8 ====

undefined4 FUN_00161dc8(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00161ed0 @ 00161ed0 ====

void FUN_00161ed0(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00161ef0 @ 00161ef0 ====

undefined4
FUN_00161ef0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((int)param_1 + 0x24);
  return 1;
}


// ==== FUN_00161f30 @ 00161f30 ====

undefined4 FUN_00161f30(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00162160 @ 00162160 ====

void FUN_00162160(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00160e70();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_001621a8 @ 001621a8 ====

undefined4 FUN_001621a8(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00160ea0();
  *param_1 = param_2;
  *(int *)(param_1 + 10) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  if (*(char *)(param_3 + 0x2e) == '\0') {
    *(undefined1 *)((int)param_1 + 0x1c) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1c) = 1;
  }
  *(int *)(param_1 + 3) = *(int *)(param_1 + 10);
  if (*(char *)(*(int *)(param_1 + 10) + 0x2e) == '\0') {
    *(undefined1 *)((int)param_1 + 0x1c) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1c) = 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  iVar1 = *(int *)(param_1 + 10);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)((int)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
  return 1;
}


// ==== FUN_00162258 @ 00162258 ====

void FUN_00162258(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    FUN_00162420();
  }
  else {
    if (*(int *)(iVar1 + 0x38c) == 0) {
      if (*(int *)(iVar1 + 0x37c) == *(int *)(param_1 + 0x2c)) {
        return;
      }
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ==== FUN_001622a8 @ 001622a8 ====

undefined4 FUN_001622a8(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00162310 @ 00162310 ====
// GLOBAL DAT_0040f4d4 int

void FUN_00162310(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  *(undefined1 *)(iVar4 + 0x1c) = 0;
  if (*(int *)(iVar4 + 0x20) == 0) {
    iVar1 = *(int *)(iVar4 + 0x30);
  }
  else if (*(int *)(*(int *)(iVar4 + 0x20) + 0x37c) == *(int *)(iVar4 + 0x2c)) {
    lVar2 = FUN_00135550();
    if (lVar2 == 0) {
      iVar1 = *(int *)(iVar4 + 0x30);
    }
    else {
      iVar1 = FUN_00135550(*(undefined4 *)(iVar4 + 0x20));
      if (*(int *)(iVar1 + 0x80) == 1) {
        uVar3 = FUN_00135550(*(undefined4 *)(iVar4 + 0x20));
        FUN_0013d8b8(uVar3,param_1);
        iVar1 = *(int *)(iVar4 + 0x30);
      }
      else {
        iVar1 = *(int *)(iVar4 + 0x30);
      }
    }
  }
  else {
    iVar1 = *(int *)(iVar4 + 0x30);
  }
  if (iVar1 != -1) {
    FUN_001791d8(DAT_0040f4d4 + 0xfa8);
    *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
  }
  *(undefined4 *)(iVar4 + 0x20) = 0;
  return;
}


// ==== FUN_001623b8 @ 001623b8 ====
// GLOBAL DAT_0040f514 int

long * FUN_001623b8(int param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(DAT_0040f514 + 0x79a4)) {
    piVar2 = *(int **)(DAT_0040f514 + 0x79ac);
    do {
      plVar1 = (long *)*piVar2;
      iVar3 = iVar3 + 1;
      if ((plVar1 != (long *)0x0) && (*plVar1 == *(long *)(*(int *)(param_1 + 0x50) + 0x20))) {
        return plVar1;
      }
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(DAT_0040f514 + 0x79a4));
  }
  return (long *)0x0;
}


// ==== FUN_00162420 @ 00162420 ====
// GLOBAL DAT_0040f4d4 int

void FUN_00162420(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = FUN_001623b8();
  iVar5 = (int)param_1;
  *(int *)(iVar5 + 0x24) = (int)lVar3;
  if (((lVar3 != 0) && (lVar3 = FUN_00135550(lVar3), lVar3 != 0)) &&
     (iVar1 = FUN_00135550(*(undefined4 *)(iVar5 + 0x24)), *(int *)(iVar1 + 0x80) == 1)) {
    uVar2 = FUN_001790d0(DAT_0040f4d4 + 0xfa8,param_1);
    *(undefined4 *)(iVar5 + 0x30) = uVar2;
    uVar4 = FUN_00135550(*(undefined4 *)(iVar5 + 0x24));
    FUN_0013d8a0(uVar4,param_1);
  }
  return;
}


// ==== FUN_001624a0 @ 001624a0 ====

void FUN_001624a0(int param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x37c);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(*(int *)(param_1 + 0x50) + 0x2c);
  return;
}


// ==== FUN_001624c0 @ 001624c0 ====
// GLOBAL DAT_0040f4d4 undefined4

undefined8 FUN_001624c0(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  
  auVar2 = *(undefined1 (*) [16])(*(int *)(param_1 + 0x50) + 0x10);
  iVar3 = FUN_0016de70(-*(float *)(*(int *)(param_1 + 0x50) + 0x28),DAT_0040f4d4);
  iVar4 = FUN_0016de70(-*(float *)(*(int *)(param_1 + 0x50) + 0x28),DAT_0040f4d4);
  iVar5 = FUN_0016de70(-*(float *)(*(int *)(param_1 + 0x50) + 0x28),DAT_0040f4d4);
  auVar1 = _pextlw((long)iVar5,(long)iVar3);
  auVar6 = _lqc2(auVar2);
  auVar2 = _pextlw((long)iVar4,auVar1._0_8_);
  auVar2 = _qmtc2(auVar2._0_4_);
  auVar2 = _vadd(auVar6,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_00162570 @ 00162570 ====

int FUN_00162570(int param_1)

{
  return param_1 + 0x40;
}


// ==== FUN_00162580 @ 00162580 ====

void FUN_00162580(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  sVar1 = *(short *)(iVar2 + 0x28);
  if ((*(short *)(iVar2 + 0x28) != -1) && (*(short *)(iVar2 + 0x28) = sVar1 + -1, sVar1 == 1)) {
    FUN_00162310(param_1);
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x14))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x10),*(undefined4 *)(iVar2 + 0x24));
  }
  return;
}


// ==== FUN_001625e0 @ 001625e0 ====

void FUN_001625e0(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00162600 @ 00162600 ====

undefined4 FUN_00162600(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_00160ea0();
  puVar1 = (undefined8 *)param_1;
  puVar2 = puVar1 + 4;
  *puVar1 = param_2;
  *(undefined4 *)((int)puVar1 + 0x94) = param_3;
  FUN_00177de0(puVar2,param_1);
  FUN_00177e60(puVar2,*(undefined8 *)(*(int *)((int)puVar1 + 0x94) + 0x10));
  FUN_00177e68(puVar2,*(undefined1 *)(*(int *)((int)puVar1 + 0x94) + 0x20));
  *(undefined4 *)(puVar1 + 0x12) = 0;
  return 1;
}


// ==== FUN_00162688 @ 00162688 ====

undefined4 FUN_00162688(int param_1)

{
  FUN_00160ed8();
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00177c90(*(int *)(param_1 + 0x90),param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return 1;
}


// ==== FUN_001626d0 @ 001626d0 ====
// GLOBAL DAT_0040f4d4 int

undefined4 FUN_001626d0(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x90) == 0) {
    lVar2 = FUN_0017b8a8(DAT_0040f4d4 + 0x1290,*(undefined8 *)(*(int *)(param_1 + 0x94) + 0x10));
    *(int *)(param_1 + 0x90) = (int)lVar2;
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_00177c78(lVar2,param_1 + 0x20);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_00162738 @ 00162738 ====

void FUN_00162738(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00162758 @ 00162758 ====

undefined4 FUN_00162758(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return 1;
}


// ==== FUN_001627a8 @ 001627a8 ====

undefined4 FUN_001627a8(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_001628c8 @ 001628c8 ====

void FUN_001628c8(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_001628e8 @ 001628e8 ====

undefined4 FUN_001628e8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return 1;
}


// ==== FUN_00162938 @ 00162938 ====

undefined4 FUN_00162938(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00162a40 @ 00162a40 ====

void FUN_00162a40(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00162a60 @ 00162a60 ====

undefined4
FUN_00162a60(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  return 1;
}


// ==== FUN_00162ac0 @ 00162ac0 ====

undefined4 FUN_00162ac0(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00162cf0 @ 00162cf0 ====

void FUN_00162cf0(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00162d10 @ 00162d10 ====

undefined4
FUN_00162d10(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  return 1;
}


// ==== FUN_00162d70 @ 00162d70 ====

undefined4 FUN_00162d70(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00162f08 @ 00162f08 ====

void FUN_00162f08(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00162f28 @ 00162f28 ====

undefined4
FUN_00162f28(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 3) = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  return 1;
}


// ==== FUN_00162f88 @ 00162f88 ====

undefined4 FUN_00162f88(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_001630e8 @ 001630e8 ====

undefined4 FUN_001630e8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_00163130 @ 00163130 ====

undefined4 FUN_00163130(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_001631b0 @ 001631b0 ====

undefined4 FUN_001631b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return 1;
}


// ==== FUN_001631f8 @ 001631f8 ====
// GLOBAL DAT_0040f51c undefined4

void FUN_001631f8(int param_1)

{
  FUN_001f2a60(DAT_0040f51c,**(undefined1 **)(param_1 + 0x20),0,0,1);
  return;
}


// ==== FUN_00163230 @ 00163230 ====

void FUN_00163230(void)

{
  FUN_00160e70();
  return;
}


// ==== FUN_00163250 @ 00163250 ====
// GLOBAL DAT_0040f4d4 undefined4

undefined4 FUN_00163250(undefined8 *param_1,undefined8 param_2,int param_3)

{
  FUN_00160ea0();
  *param_1 = param_2;
  *(int *)(param_1 + 3) = param_3;
  *(int *)(param_1 + 4) = param_3;
  FUN_0016e728(DAT_0040f4d4,*(undefined4 *)(param_3 + 0x10),*(char *)(param_3 + 0x20) != '\0');
  return 1;
}


// ==== FUN_001632b8 @ 001632b8 ====
// GLOBAL DAT_0040f4d4 undefined4

void FUN_001632b8(int param_1)

{
  FUN_0016e780(DAT_0040f4d4,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10));
  return;
}


// ==== FUN_001632e0 @ 001632e0 ====

void FUN_001632e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ==== FUN_001632f8 @ 001632f8 ====

void FUN_001632f8(float param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 in_a3_udw;
  undefined4 in_register_0000007c;
  undefined4 in_t0_udw;
  undefined4 in_register_0000008c;
  
  param_3[4] = (int)param_7;
  param_3[5] = (int)((ulong)param_7 >> 0x20);
  param_3[6] = in_t0_udw;
  param_3[7] = in_register_0000008c;
  param_3[8] = param_4;
  *(undefined1 *)((int)param_3 + 0x2d) = param_8;
  param_3[10] = param_2;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *param_3 = (int)param_6;
  param_3[1] = (int)((ulong)param_6 >> 0x20);
  param_3[2] = in_a3_udw;
  param_3[3] = in_register_0000007c;
  param_3[9] = param_1 / 144.0;
  return;
}


// ==== FUN_00163328 @ 00163328 ====
// GLOBAL DAT_0040f4d0 undefined4

void FUN_00163328(float param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_c0 [32];
  float fStack_a0;
  undefined1 uStack_80;
  undefined1 auStack_7f [15];
  undefined1 auStack_70 [16];
  
  pauVar7 = (undefined1 (*) [16])param_2;
  if (pauVar7[2][0xc] != '\0') {
    iVar1 = *(int *)pauVar7[2];
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 0) {
      pauVar7[2][0xc] = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xf0);
      param_1 = *(float *)(pauVar7[2] + 4) - param_1;
      iVar3 = *(int *)(iVar2 + 0xc4);
      *(float *)(pauVar7[2] + 4) = param_1;
      bVar4 = iVar3 == 2;
      if (param_1 <= 0.0) {
        auStack_7f[0] = 0;
        uStack_80 = 0;
        uVar6 = 0x57;
        if (!bVar4) {
          uVar6 = 0x1f;
        }
        auVar11 = _lqc2(pauVar7[1]);
        auVar8 = _qmtc2(*(float *)(pauVar7[2] + 8) + 1.0);
        auVar8 = _vmulbc(auVar11,auVar8);
        auVar10 = _lqc2(*pauVar7);
        auVar9 = _qmtc2((*(float *)(*(int *)(iVar1 + 0xc) + 0x14) - *(float *)(pauVar7[2] + 8)) -
                        1.0);
        auVar9 = _vmulbc(auVar11,auVar9);
        auVar9 = _vadd(auVar10,auVar9);
        auVar10 = _vadd(auVar9,auVar8);
        auVar8 = _qmfc2(auVar9._0_4_);
        auVar9 = _qmfc2(auVar10._0_4_);
        auStack_70 = _sqc2(auVar10);
        lVar5 = FUN_0012ae58(DAT_0040f4d0,auVar8._0_8_,auVar9._0_8_,uVar6,iVar2,1,auStack_c0);
        if (lVar5 != 0) {
          fStack_a0 = 1.0 - ((1.0 - fStack_a0) * *(float *)(pauVar7[2] + 8)) /
                            *(float *)(*(int *)(*(int *)pauVar7[2] + 0xc) + 0x14);
          FUN_00159ae8(*(int *)pauVar7[2],auStack_c0,param_2,auStack_70,pauVar7 + 1,&uStack_80,
                       auStack_7f,bVar4);
        }
        pauVar7[2][0xc] = 0;
      }
    }
  }
  return;
}


// ==== FUN_00163498 @ 00163498 ====

void FUN_00163498(undefined8 param_1,undefined8 param_2)

{
  FUN_00160e70();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_001634d8 @ 001634d8 ====

undefined4 FUN_001634d8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((int)param_1 + 0x1c) = 1;
  return 1;
}


// ==== FUN_00163530 @ 00163530 ====

undefined4 FUN_00163530(void)

{
  FUN_00160ed8();
  return 1;
}


// ==== FUN_00163550 @ 00163550 ====

void FUN_00163550(int param_1)

{
  FUN_00160ef8();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00163580 @ 00163580 ====
// GLOBAL DAT_0040f510 int

void FUN_00163580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_001d8bc0(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34)
               ,*(undefined4 *)(iVar1 + 0x20),*(char *)(iVar1 + 0x29) != '\0',
               *(char *)(iVar1 + 0x28) != '\0');
  return;
}


// ==== FUN_001635d0 @ 001635d0 ====

void FUN_001635d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00160e70();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  FUN_00280fe0(iVar1 + 0x20,0);
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00163628 @ 00163628 ====
// GLOBAL DAT_0040f510 undefined4

undefined4 FUN_00163628(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_00160ea0();
  *param_1 = param_2;
  *(int *)(param_1 + 6) = param_3;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(int *)(param_1 + 3) = param_3;
  uVar1 = FUN_00280200(DAT_0040f510,param_3 + 0x48,0);
  *(undefined4 *)((int)param_1 + 0x34) = uVar1;
  uVar1 = 7;
  if (*(char *)(*(int *)(param_1 + 6) + 0x50) == '\0') {
    uVar1 = 1;
    *(undefined4 *)((int)param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined1 *)((int)param_1 + 0x1c) = 1;
  return 1;
}


// ==== FUN_001636b8 @ 001636b8 ====
// GLOBAL DAT_0040f4d0 int

void FUN_001636b8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_f0 [84];
  float fStack_9c;
  undefined4 uStack_4c;
  
  iVar2 = (int)param_1;
  switch(*(undefined4 *)(iVar2 + 0x38)) {
  case 2:
    lVar1 = FUN_00281120(iVar2 + 0x20);
    if (lVar1 != 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x38) = 5;
    break;
  case 3:
    if (*(float *)(iVar2 + 0x3c) < *(float *)(DAT_0040f4d0 + 0x20)) {
      *(undefined4 *)(iVar2 + 0x38) = 4;
    }
    break;
  case 4:
    uStack_4c = 8;
    fVar3 = *(float *)(*(int *)(iVar2 + 0x30) + 0x54) *
            (1.0 - (*(float *)(DAT_0040f4d0 + 0x20) - *(float *)(iVar2 + 0x3c)));
    fStack_9c = fVar3;
    FUN_00281010(iVar2 + 0x20,auStack_f0);
    if (0.0 < fVar3) {
      return;
    }
    FUN_002810a0(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0x38) = 5;
    break;
  case 7:
    FUN_001638f0(param_1);
  }
  return;
}


// ==== FUN_001637c8 @ 001637c8 ====

undefined4 FUN_001637c8(int param_1)

{
  FUN_00160ed8();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 6;
  FUN_002810a0(param_1 + 0x20);
  return 1;
}


// ==== FUN_00163808 @ 00163808 ====

void FUN_00163808(int param_1)

{
  FUN_00160ef8();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x38) = 8;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ==== FUN_00163848 @ 00163848 ====

void FUN_00163848(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  switch(*(undefined4 *)(iVar1 + 0x38)) {
  case 2:
  case 3:
    if (*(char *)(*(int *)(iVar1 + 0x30) + 0x50) == '\0') {
      if (*(char *)(*(int *)(iVar1 + 0x30) + 0x46) == '\0') {
        return;
      }
      FUN_002810a0(iVar1 + 0x20);
      FUN_001638f0(param_1);
      return;
    }
    FUN_002810a0(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 0x38) = 5;
    break;
  case 5:
    if (*(char *)(*(int *)(iVar1 + 0x30) + 0x45) == '\0') {
      return;
    }
  case 1:
    FUN_001638f0(param_1);
  }
  return;
}


// ==== FUN_001638f0 @ 001638f0 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int
// GLOBAL DAT_003bcebc undefined4
// GLOBAL DAT_003bcec4 undefined4
// GLOBAL DAT_003bcec0 undefined4

void FUN_001638f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auStack_120 [48];
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  auVar3 = _pextlw(0,0);
  fVar4 = *(float *)(DAT_0040f4d0 + 0x20);
  auVar3 = _pextlw(0,auVar3._0_8_);
  uStack_7c = 0;
  uStack_70 = auVar3._0_4_;
  uStack_6c = auVar3._4_4_;
  uStack_68 = auVar3._8_4_;
  uStack_64 = auVar3._12_4_;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = FUN_00280200(DAT_0040f510,*(int *)(param_1 + 0x30) + 0x48,0);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    if (*(int *)(param_1 + 0x38) == 7) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  uStack_d0 = *(undefined4 *)(param_1 + 0x34);
  uStack_cc = *(undefined4 *)(iVar1 + 0x54);
  uStack_e8 = *(undefined4 *)(iVar1 + 0x38);
  uStack_e4 = *(undefined4 *)(iVar1 + 0x3c);
  uStack_f0 = (undefined4)*(undefined8 *)(iVar1 + 0x30);
  uStack_ec = (undefined4)((ulong)*(undefined8 *)(iVar1 + 0x30) >> 0x20);
  uStack_e0 = auVar3._0_4_;
  uStack_dc = auVar3._4_4_;
  uStack_d8 = auVar3._8_4_;
  uStack_d4 = auVar3._12_4_;
  uStack_78 = 7;
  uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
  uStack_b0 = *(undefined4 *)(iVar1 + 0x28);
  uStack_77 = *(char *)(iVar1 + 0x44) != '\0';
  uStack_7c = 0x1b0f;
  if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
    uStack_7c = 0x801b0f;
    uStack_90 = DAT_003bcebc;
    uStack_8c = DAT_003bcec0;
    uStack_84 = DAT_003bcec4;
    uStack_98 = DAT_003bcebc;
    uStack_94 = DAT_003bcebc;
    uStack_88 = DAT_003bcec4;
    uStack_75 = 0;
  }
  uStack_60 = *(undefined4 *)(param_1 + 0x20);
  FUN_00285748(&uStack_70,DAT_0040f510 + 0xb308,auStack_120);
  *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_6c,uStack_70);
  *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_64,uStack_68);
  *(undefined4 *)(param_1 + 0x20) = uStack_60;
  *(float *)(param_1 + 0x3c) = fVar4 + *(float *)(*(int *)(param_1 + 0x30) + 0x40);
  uVar2 = 3;
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x44) == '\0') {
    uVar2 = 2;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}


// ==== FUN_00163ab8 @ 00163ab8 ====

void FUN_00163ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_00160e70();
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00163af8 @ 00163af8 ====

undefined4 FUN_00163af8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00160ea0();
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((int)param_1 + 0x1c) = 1;
  return 1;
}


// ==== FUN_00163b50 @ 00163b50 ====
// GLOBAL DAT_0040f0e0 int
// GLOBAL DAT_0040f510 int

void FUN_00163b50(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  fVar3 = *(float *)(DAT_0040f0e0 + 0x20140);
  if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + 0x20);
    FUN_001e6058(*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30),
                 *(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4))
    ;
    *(undefined4 *)(param_1 + 0x24) = 3;
    fVar2 = *(float *)(param_1 + 0x28);
  }
  else {
    if (iVar1 < 3) {
      return;
    }
    if (iVar1 != 3) {
      return;
    }
    fVar2 = *(float *)(param_1 + 0x28);
  }
  if (fVar2 <= fVar3) {
    FUN_001e6088(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  return;
}


// ==== FUN_00163c28 @ 00163c28 ====

undefined4 FUN_00163c28(int param_1)

{
  FUN_00160ed8();
  *(undefined4 *)(param_1 + 0x24) = 4;
  return 1;
}


// ==== FUN_00163c58 @ 00163c58 ====

void FUN_00163c58(int param_1)

{
  FUN_00160ef8();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 5;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_00163cc8 @ 00163cc8 ====

void FUN_00163cc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00165ae0();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00163d08 @ 00163d08 ====

undefined4 FUN_00163d08(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  FUN_00165af8();
  *(int *)(param_1 + 3) = param_3;
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  _vsub(in_vf0,in_vf0);
  auVar7 = _vsub(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar9 = _vaddbc(in_vf0,in_vf0);
  *param_1 = param_2;
  uVar3 = *(undefined4 *)(param_3 + 0x34);
  uVar4 = *(undefined4 *)(param_3 + 0x38);
  uVar5 = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)((int)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((int)param_1 + 0x3c) = uVar5;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined4 *)(param_3 + 0x28);
  uVar4 = *(undefined4 *)(param_3 + 0x2c);
  auVar6 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 8) = auVar6;
  *(int *)(param_1 + 4) = (int)uVar2;
  *(int *)((int)param_1 + 0x24) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((int)param_1 + 0x2c) = uVar4;
  auVar6 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar6;
  auVar6 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 10) = auVar6;
  auVar6 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar6;
  iVar1 = *(int *)(param_1 + 3);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)((int)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = uVar4;
  *(undefined4 *)((int)param_1 + 0x7c) = uVar5;
  *(bool *)(param_1 + 0x10) = *(char *)(iVar1 + 0x40) != '\0';
  return 1;
}


// ==== FUN_00163de8 @ 00163de8 ====

void FUN_00163de8(void)

{
  FUN_00165ae0();
  return;
}


// ==== FUN_00163e08 @ 00163e08 ====

undefined4 FUN_00163e08(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_00165af8();
  *param_1 = param_2;
  iVar2 = 0xf;
  *(undefined4 *)(param_1 + 3) = param_3;
  puVar1 = param_1 + 0xb;
  do {
    *(undefined4 *)puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = (undefined8 *)((int)puVar1 + -4);
  } while (-1 < iVar2);
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  strcpy((int)param_1 + 0x5c,*(undefined4 *)(param_1 + 3));
  return 1;
}


// ==== FUN_00163e88 @ 00163e88 ====

undefined4 FUN_00163e88(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_00163f30 @ 00163f30 ====
// GLOBAL s_SH_AR_S_016_003f5028 undefined

/* Strings referenciadas:
     "SH_AR_S_016" */

void FUN_00163f30(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x1c) == 0) {
    cVar2 = *(char *)(iVar4 + 0x69);
    *(int *)(iVar4 + 0x1c) = param_2;
  }
  else {
    iVar5 = 1;
    do {
      if (0xf < iVar5) goto LAB_00163f8c;
      piVar3 = (int *)(iVar4 + 0x1c + iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (*piVar3 != 0);
    *piVar3 = param_2;
    cVar2 = *(char *)(iVar4 + 0x69);
  }
  *(char *)(iVar4 + 0x69) = cVar2 + '\x01';
LAB_00163f8c:
  uVar1 = s_SH_AR_S_016_003f5028._8_4_;
  if (1 < *(byte *)(iVar4 + 0x69)) {
    *(undefined8 *)(iVar4 + 0x5c) = s_SH_AR_S_016_003f5028._0_8_;
    *(undefined4 *)(iVar4 + 100) = uVar1;
  }
  FUN_00164078(param_1);
  return;
}


// ==== FUN_00163fd0 @ 00163fd0 ====

void FUN_00163fd0(undefined8 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  bVar4 = false;
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x1c) == param_2) {
    cVar1 = *(char *)(iVar5 + 0x69);
    *(undefined4 *)(iVar5 + 0x1c) = 0;
LAB_00164030:
    bVar4 = true;
    *(char *)(iVar5 + 0x69) = cVar1 + -1;
  }
  else {
    for (iVar3 = 1; iVar3 < 0x10; iVar3 = iVar3 + 1) {
      piVar2 = (int *)(iVar5 + 0x1c + iVar3 * 4);
      if (*piVar2 == param_2) {
        *piVar2 = 0;
        cVar1 = *(char *)(iVar5 + 0x69);
        goto LAB_00164030;
      }
    }
  }
  if (bVar4) {
    if (*(byte *)(iVar5 + 0x69) < 2) {
      strcpy(iVar5 + 0x5c,*(undefined4 *)(iVar5 + 0x18));
    }
    FUN_00164078(param_1);
  }
  return;
}


// ==== FUN_00164078 @ 00164078 ====

void FUN_00164078(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x1c);
  iVar3 = 0xf;
  iVar1 = *piVar2;
  while( true ) {
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
    if (iVar1 != 0) {
      FUN_00181ad0(iVar1 + 0xec0,0xe);
    }
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}


// ==== FUN_001640d0 @ 001640d0 ====

undefined8 FUN_001640d0(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined1 in_zero_qw [16];
  undefined8 extraout_v0_udw;
  undefined1 auVar2 [16];
  undefined1 in_v1_qw [16];
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 auStack_110 [64];
  
  puVar4 = auStack_110;
  iVar6 = (int)param_1;
  if (*(byte *)(iVar6 + 0x69) == 2) {
    piVar3 = (int *)(iVar6 + 0x1c);
    iVar6 = 0xf;
    do {
      iVar5 = *piVar3;
      iVar6 = iVar6 + -1;
      if ((iVar5 != param_2) && (iVar5 != 0)) {
        in_v1_qw = *(undefined1 (*) [16])(*(int *)(iVar5 + 0x7c) + 0xa0);
      }
      piVar3 = piVar3 + 1;
    } while (-1 < iVar6);
  }
  else if (2 < *(byte *)(iVar6 + 0x69)) {
    iVar5 = 0;
    piVar3 = (int *)(iVar6 + 0x1c);
    iVar6 = 0xe;
    do {
      bVar1 = iVar6 != -1;
      iVar6 = iVar6 + -1;
    } while (bVar1);
    iVar6 = 0xf;
    do {
      iVar6 = iVar6 + -1;
      if (*piVar3 != 0) {
        iVar5 = iVar5 + 1;
        auVar2 = *(undefined1 (*) [16])(*(int *)(*piVar3 + 0x7c) + 0xa0);
        *puVar4 = auVar2._0_4_;
        puVar4[1] = auVar2._4_4_;
        puVar4[2] = auVar2._8_4_;
        puVar4[3] = auVar2._12_4_;
        puVar4 = puVar4 + 4;
      }
      piVar3 = piVar3 + 1;
    } while (-1 < iVar6);
    auVar2._0_8_ = FUN_001641a8(param_1,auStack_110,iVar5);
    auVar2._8_8_ = extraout_v0_udw;
    in_v1_qw = _por(in_zero_qw,auVar2);
  }
  auVar2 = _por(in_zero_qw,in_v1_qw);
  return auVar2._0_8_;
}


// ==== FUN_001641a8 @ 001641a8 ====

undefined8 FUN_001641a8(undefined8 param_1,undefined1 (*param_2) [16],int param_3)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fStack_8;
  
  auVar2 = _vadd(in_vf0,in_vf0);
  auVar3 = _vmove(auVar2);
  _sqc2(auVar2);
  if (0 < param_3) {
    auVar2 = _lqc2(*param_2);
    iVar1 = param_3;
    while( true ) {
      iVar1 = iVar1 + -1;
      auVar3 = _vaddbc(auVar3,auVar2);
      param_2 = param_2 + 1;
      auVar3 = _vaddbc(in_vf0,auVar3);
      auVar2 = _vaddbc(auVar3,auVar2);
      auVar3 = _vaddbc(in_vf0,auVar2);
      if (iVar1 == 0) break;
      auVar2 = _lqc2(*param_2);
    }
  }
  auVar2 = _qmfc2(auVar3._0_4_);
  auVar2 = _qmtc2(auVar2._0_4_ / (float)param_3);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auVar2 = _sqc2(auVar2);
  fStack_8 = auVar2._8_4_;
  auVar2 = _qmtc2(fStack_8 / (float)param_3);
  auVar2 = _vaddbc(in_vf0,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  return auVar2._0_8_;
}


// ==== FUN_00164238 @ 00164238 ====

bool FUN_00164238(int param_1)

{
  return 1 < *(byte *)(param_1 + 0x69);
}


// ==== FUN_00164248 @ 00164248 ====

void FUN_00164248(void)

{
  FUN_00169bf0();
  return;
}


// ==== FUN_00164268 @ 00164268 ====

undefined4 FUN_00164268(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
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
  undefined4 in_vuI;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  
  *(int *)(param_1 + 400) = param_3;
  FUN_00169c10();
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined4 *)(param_3 + 0x48);
  uVar3 = *(undefined4 *)(param_3 + 0x4c);
  *(int *)(param_1 + 0x140) = (int)uVar1;
  *(int *)(param_1 + 0x144) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  auVar8 = _vmaxbc(in_vf0,in_vf0);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined4 *)(param_3 + 0x38);
  uVar3 = *(undefined4 *)(param_3 + 0x3c);
  *(int *)(param_1 + 0x130) = (int)uVar1;
  *(int *)(param_1 + 0x134) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  auVar15 = _vadd(in_vf0,in_vf0);
  _lqc2(auStack_80);
  auVar6 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  _lqc2(auStack_60);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar16 = _qmtc2(0);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar6 = _vsubi(auVar6,in_vuI);
  auVar6 = _vabs(auVar6);
  _ctc2(0xbe22f983);
  _vnop();
  _vmulai(auVar6,in_vuI);
  _ctc2(0x4b400000);
  _vnop();
  _vmsubai(auVar8,in_vuI);
  _vmaddai(auVar8,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar6,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar8 = _vmsubi(auVar8,in_vuI);
  auVar6 = _pextlw(0,0);
  auVar8 = _vabs(auVar8);
  _ctc2(0x3e800000);
  _vnop();
  auVar7 = _vsubi(auVar8,in_vuI);
  auVar8 = _pextlw(0x3f800000,auVar6._0_8_);
  auVar9 = _vmul(auVar7,auVar7);
  _ctc2(0xc2992661);
  _vnop();
  auVar6 = _vmuli(auVar7,in_vuI);
  auVar12 = _vmul(auVar9,auVar9);
  auVar6 = _vmul(auVar6,auVar9);
  auVar10 = _vmul(auVar12,auVar12);
  _ctc2(0xc2255de0);
  _vnop();
  auVar14 = _vmuli(auVar7,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar13 = _vmuli(auVar7,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar11 = _vmuli(auVar7,in_vuI);
  _vmula(auVar14,auVar9);
  _vmadda(auVar6,auVar12);
  _ctc2(0x40c90fda);
  _vmadda(auVar13,auVar12);
  _vmaddai(auVar7,in_vuI);
  auVar7 = _vmadd(auVar11,auVar10);
  auVar6 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar6;
  auVar13 = _vaddbc(in_vf0,auVar7);
  auVar14 = _vaddbc(in_vf0,auVar7);
  _vmove(auVar13);
  auVar6 = _vsub(in_vf0,auVar7);
  _vmove(auVar14);
  auVar11 = _vaddbc(in_vf0,auVar16);
  auVar12 = _vaddbc(in_vf0,auVar16);
  _vmove(auVar11);
  _vmove(auVar12);
  auVar9 = _vaddbc(in_vf0,auVar6);
  auVar10 = _vaddbc(in_vf0,auVar7);
  auVar6 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar6;
  auVar6 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar6;
  uVar2 = auVar8._0_4_;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(int *)(param_1 + 0x84) = auVar8._4_4_;
  *(int *)(param_1 + 0x88) = auVar8._8_4_;
  *(int *)(param_1 + 0x8c) = auVar8._12_4_;
  _vmove(auVar9);
  _sqc2(auVar13);
  _vmove(auVar10);
  _qmtc2(uVar2);
  auVar13 = _vaddbc(in_vf0,auVar9);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x10));
  auVar16 = _vaddbc(in_vf0,auVar9);
  _sqc2(auVar14);
  uVar5 = 0;
  auVar6 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar6;
  _sqc2(auVar11);
  _vmove(auVar16);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  auVar6 = _vaddbc(auVar7,auVar6);
  _sqc2(auVar12);
  auVar7 = _vaddbc(in_vf0,auVar6);
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar9);
  _sqc2(auVar10);
  _sqc2(auVar15);
  _sqc2(auVar15);
  _sqc2(auVar15);
  auVar6 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar6;
  auVar6 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar6;
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(int *)(param_1 + 0x164) = auVar8._4_4_;
  *(int *)(param_1 + 0x168) = auVar8._8_4_;
  *(int *)(param_1 + 0x16c) = auVar8._12_4_;
  auVar6 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x170) = auVar6;
  auVar6 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar6;
  _vmove(auVar13);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar11 = _vaddbc(in_vf0,auVar8);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmove(auVar11);
  auVar12 = _vaddbc(in_vf0,auVar6);
  auVar10 = _vaddbc(in_vf0,auVar8);
  auVar9 = _vaddbc(in_vf0,auVar6);
  auVar6 = _vmulbc(auVar9,auVar7);
  auVar8 = _vmulbc(auVar12,auVar7);
  auVar7 = _vmulbc(auVar10,auVar7);
  auVar8 = _vadd(auVar6,auVar8);
  auVar6 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar6;
  auVar8 = _vadd(auVar8,auVar7);
  auVar6 = _sqc2(auVar16);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar6;
  auVar8 = _vsub(in_vf0,auVar8);
  auVar6 = _sqc2(auVar13);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar6;
  auVar6 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar6;
  auVar6 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar6;
  auVar6 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar6;
  auVar6 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar6;
  *(undefined1 *)(param_1 + 0x11c) = 1;
  do {
    puVar4 = (undefined1 *)(param_1 + 0x194 + uVar5);
    uVar5 = uVar5 + 1 & 0xff;
    *puVar4 = 0;
  } while (uVar5 < 2);
  return 1;
}


// ==== FUN_00164548 @ 00164548 ====
// GLOBAL DAT_0040f4d0 int
// GLOBAL DAT_0040f510 int

undefined8 FUN_00164548(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [8];
  float fStack_98;
  
  auVar16 = _qmtc2(param_2);
  auVar15 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x140));
  fVar9 = *(float *)(DAT_0040f4d0 + 0x318) * 0.5;
  auVar4 = _qmfc2(auVar15._0_4_);
  auVar14 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x70));
  auVar11 = _qmtc2(fVar9);
  *(float *)(param_1 + 0x110) = fVar9;
  auVar13 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xa0));
  auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmulabc(auVar14,auVar16);
  _vmaddabc(auVar12,auVar16);
  _vmaddabc(auVar10,auVar16);
  auVar10 = _vmaddbc(auVar13,in_vf0);
  auVar10 = _vaddbc(auVar10,auVar11);
  auVar10 = _vaddbc(in_vf0,auVar10);
  auVar11 = _vmove(auVar10);
  auVar10 = _qmfc2(auVar11._0_4_);
  if (auVar4._0_4_ <= auVar10._0_4_) {
    auVar4 = _sqc2(auVar11);
    auStack_a0._4_4_ = auVar4._4_4_;
    uVar3 = auStack_a0._4_4_;
    auVar4 = _sqc2(auVar15);
    auStack_a0._4_4_ = auVar4._4_4_;
    if ((float)auStack_a0._4_4_ <= (float)uVar3) {
      auVar4 = _sqc2(auVar11);
      fStack_98 = auVar4._8_4_;
      fVar9 = fStack_98;
      auVar4 = _sqc2(auVar15);
      fStack_98 = auVar4._8_4_;
      if (fStack_98 <= fVar9) {
        auVar12 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x130));
        auVar4 = _qmfc2(auVar12._0_4_);
        if (auVar10._0_4_ <= auVar4._0_4_) {
          auVar4 = _sqc2(auVar11);
          auStack_a0._4_4_ = auVar4._4_4_;
          uVar3 = auStack_a0._4_4_;
          auVar4 = _sqc2(auVar12);
          auStack_a0._4_4_ = auVar4._4_4_;
          if ((float)uVar3 <= (float)auStack_a0._4_4_) {
            auVar4 = _sqc2(auVar11);
            fStack_98 = auVar4._8_4_;
            fVar9 = fStack_98;
            auVar4 = _sqc2(auVar12);
            fStack_98 = auVar4._8_4_;
            bVar2 = false;
            if (fVar9 <= fStack_98) goto LAB_001646a4;
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_001646a4:
  if (bVar2) {
    uVar6 = 0;
    do {
      puVar5 = (undefined1 *)(param_1 + 0x194 + uVar6);
      uVar6 = uVar6 + 1 & 0xff;
      *puVar5 = 0;
    } while (uVar6 < 2);
  }
  else {
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x140));
    auVar10 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x130));
    auVar4 = _vaddbc(auVar4,auVar10);
    auVar4 = _sqc2(auVar4);
    fStack_98 = auVar4._8_4_;
    auVar4 = _sqc2(auVar11);
    fVar9 = fStack_98 * 0.5;
    fStack_98 = auVar4._8_4_;
    uVar6 = fStack_98 < fVar9 ^ 1;
    pcVar8 = (char *)(param_1 + 0x194 + uVar6);
    if (*pcVar8 == '\0') {
      iVar1 = *(int *)(param_1 + 400);
      iVar7 = uVar6 * 4;
      uStack_c0 = *(undefined8 *)(iVar1 + 0x50 + uVar6 * 8);
      iStack_b0 = (int)*(short *)(iVar1 + 0xa4 + uVar6 * 2);
      uStack_b8 = *(undefined4 *)(iVar1 + 0x88 + iVar7);
      uStack_b4 = *(undefined4 *)(iVar1 + 0x98 + iVar7);
      uStack_ac = *(undefined2 *)(iVar1 + 0xa0 + uVar6 * 2);
      uStack_a8 = 1;
      uStack_aa = *(char *)(iVar1 + 0xa8 + uVar6) != '\0';
      uStack_a9 = 1;
      _auStack_a0 = auVar4;
      FUN_001dc038(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),&uStack_c0);
      FUN_001ea628(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),uVar6,
                   *(undefined4 *)(param_1 + 400));
      iVar1 = *(int *)(param_1 + 400);
      FUN_001e6050(*(undefined4 *)(iVar1 + 0x70 + iVar7),*(undefined4 *)(iVar1 + 0x78 + iVar7),
                   *(undefined4 *)(iVar1 + 0x80 + iVar7),
                   *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
      *pcVar8 = '\x01';
      *(undefined1 *)(param_1 + 0x194 + (1 - uVar6)) = 0;
    }
  }
  return 0;
}


// ==== FUN_00164860 @ 00164860 ====
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_00414ce0 undefined4

void FUN_00164860(int param_1)

{
  FUN_0026aa68(0);
  FUN_0026a840(0);
  FUN_001ae5e8(DAT_0040f4c0,param_1 + 0x150,*(undefined4 *)(param_1 + 0x140),
               *(undefined4 *)(param_1 + 0x130),DAT_00414ce0);
  return;
}


// ==== FUN_001648b8 @ 001648b8 ====

undefined4 FUN_001648b8(void)

{
  FUN_00169eb8();
  return 1;
}


// ==== FUN_001648e0 @ 001648e0 ====

void FUN_001648e0(void)

{
  FUN_00169bf0();
  return;
}


// ==== FUN_00164900 @ 00164900 ====

undefined4 FUN_00164900(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 in_vuI;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  
  *(int *)(param_1 + 400) = param_3;
  FUN_00169c10();
  uVar3 = *(undefined4 *)(param_3 + 0x44);
  uVar4 = *(undefined4 *)(param_3 + 0x48);
  uVar2 = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  auVar7 = _vmaxbc(in_vf0,in_vf0);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined4 *)(param_3 + 0x38);
  uVar4 = *(undefined4 *)(param_3 + 0x3c);
  *(int *)(param_1 + 0x130) = (int)uVar1;
  *(int *)(param_1 + 0x134) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  *(undefined4 *)(param_1 + 0x13c) = uVar4;
  _lqc2(auStack_80);
  _lqc2(auStack_60);
  auVar5 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  auVar15 = _qmtc2(0);
  auVar5 = _vaddbc(in_vf0,auVar5);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar5 = _vsubi(auVar5,in_vuI);
  auVar6 = _vabs(auVar5);
  auVar5 = _pextlw(0,0);
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
  auVar7 = _vabs(auVar6);
  auVar6 = _pextlw(0x3f800000,auVar5._0_8_);
  _ctc2(0x3e800000);
  _vnop();
  auVar5 = _vsubi(auVar7,in_vuI);
  auVar14 = _vadd(in_vf0,in_vf0);
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
  auVar7 = _vmadd(auVar10,auVar9);
  auVar5 = _sqc2(auVar14);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  auVar12 = _vaddbc(in_vf0,auVar7);
  auVar13 = _vaddbc(in_vf0,auVar7);
  _vmove(auVar13);
  auVar5 = _vsub(in_vf0,auVar7);
  _vmove(auVar12);
  auVar11 = _vaddbc(in_vf0,auVar15);
  auVar10 = _vaddbc(in_vf0,auVar15);
  _vmove(auVar11);
  _vmove(auVar10);
  auVar9 = _vaddbc(in_vf0,auVar7);
  auVar8 = _vaddbc(in_vf0,auVar5);
  uVar3 = auVar6._0_4_;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(int *)(param_1 + 0x84) = auVar6._4_4_;
  *(int *)(param_1 + 0x88) = auVar6._8_4_;
  *(int *)(param_1 + 0x8c) = auVar6._12_4_;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  _sqc2(auVar12);
  _vmove(auVar8);
  _qmtc2(uVar3);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x10));
  auVar15 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar13);
  _vmove(auVar9);
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  auVar12 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar10);
  _vmove(auVar15);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  auVar5 = _vaddbc(auVar7,auVar5);
  _sqc2(auVar11);
  auVar7 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar8);
  _sqc2(auVar9);
  _sqc2(auVar8);
  _sqc2(auVar9);
  _sqc2(auVar14);
  _sqc2(auVar14);
  _sqc2(auVar14);
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar5;
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  *(int *)(param_1 + 0x164) = auVar6._4_4_;
  *(int *)(param_1 + 0x168) = auVar6._8_4_;
  *(int *)(param_1 + 0x16c) = auVar6._12_4_;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x170) = auVar5;
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar5;
  _vmove(auVar12);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar10 = _vaddbc(in_vf0,auVar6);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmove(auVar10);
  auVar11 = _vaddbc(in_vf0,auVar5);
  auVar9 = _vaddbc(in_vf0,auVar6);
  auVar8 = _vaddbc(in_vf0,auVar5);
  auVar5 = _vmulbc(auVar8,auVar7);
  auVar6 = _vmulbc(auVar11,auVar7);
  auVar7 = _vmulbc(auVar9,auVar7);
  auVar6 = _vadd(auVar5,auVar6);
  auVar5 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  auVar6 = _vadd(auVar6,auVar7);
  auVar5 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar5;
  auVar6 = _vsub(in_vf0,auVar6);
  auVar5 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  auVar5 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar5;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  *(undefined1 *)(param_1 + 0x195) = 0;
  *(undefined1 *)(param_1 + 0x194) = 0;
  return 1;
}


// ==== FUN_00164bc0 @ 00164bc0 ====
// GLOBAL DAT_0040f4d0 int

undefined8 FUN_00164bc0(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
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
  float fStack_2c;
  float fStack_28;
  
  auVar11 = _qmtc2(param_2);
  iVar3 = (int)param_1;
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x140));
  fVar4 = *(float *)(DAT_0040f4d0 + 0x318) * 0.5;
  auVar2 = _qmfc2(auVar10._0_4_);
  auVar9 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
  auVar6 = _qmtc2(fVar4);
  *(float *)(iVar3 + 0x110) = fVar4;
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
  auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
  _vmulabc(auVar9,auVar11);
  _vmaddabc(auVar7,auVar11);
  _vmaddabc(auVar5,auVar11);
  auVar5 = _vmaddbc(auVar8,in_vf0);
  auVar5 = _vaddbc(auVar5,auVar6);
  auVar6 = _vaddbc(in_vf0,auVar5);
  auVar5 = _qmfc2(auVar6._0_4_);
  if (auVar2._0_4_ <= auVar5._0_4_) {
    auVar2 = _sqc2(auVar6);
    fStack_2c = auVar2._4_4_;
    fVar4 = fStack_2c;
    auVar2 = _sqc2(auVar10);
    fStack_2c = auVar2._4_4_;
    if (fStack_2c <= fVar4) {
      auVar2 = _sqc2(auVar6);
      fStack_28 = auVar2._8_4_;
      fVar4 = fStack_28;
      auVar2 = _sqc2(auVar10);
      fStack_28 = auVar2._8_4_;
      if (fStack_28 <= fVar4) {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
        auVar2 = _qmfc2(auVar7._0_4_);
        if (auVar5._0_4_ <= auVar2._0_4_) {
          auVar2 = _sqc2(auVar6);
          fStack_2c = auVar2._4_4_;
          fVar4 = fStack_2c;
          auVar2 = _sqc2(auVar7);
          fStack_2c = auVar2._4_4_;
          if (fVar4 <= fStack_2c) {
            auVar2 = _sqc2(auVar6);
            fStack_28 = auVar2._8_4_;
            fVar4 = fStack_28;
            auVar2 = _sqc2(auVar7);
            fStack_28 = auVar2._8_4_;
            bVar1 = false;
            if (fVar4 <= fStack_28) goto LAB_00164cf8;
          }
        }
      }
    }
  }
  bVar1 = true;
LAB_00164cf8:
  if ((!bVar1) && (*(char *)(iVar3 + 0x195) == '\0')) {
    FUN_00164df0(param_1);
    *(undefined1 *)(iVar3 + 0x195) = 1;
  }
  return 0;
}


// ==== FUN_00164d30 @ 00164d30 ====

void FUN_00164d30(int param_1)

{
  if (*(char *)(param_1 + 0x195) == '\0') {
    FUN_00164df0();
    *(undefined1 *)(param_1 + 0x195) = 1;
  }
  return;
}


// ==== FUN_00164d70 @ 00164d70 ====
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_00414cf0 undefined4

void FUN_00164d70(int param_1)

{
  FUN_0026aa68(0);
  FUN_0026a840(0);
  FUN_001ae5e8(DAT_0040f4c0,param_1 + 0x150,*(undefined4 *)(param_1 + 0x140),
               *(undefined4 *)(param_1 + 0x130),DAT_00414cf0);
  return;
}


// ==== FUN_00164dc8 @ 00164dc8 ====

undefined4 FUN_00164dc8(void)

{
  FUN_00169eb8();
  return 1;
}


// ==== FUN_00164df0 @ 00164df0 ====
// GLOBAL DAT_0040f510 int

void FUN_00164df0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 400);
  FUN_001d8bc0(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x34)
               ,*(undefined4 *)(iVar1 + 0x50),*(char *)(iVar1 + 0x59) != '\0',
               *(char *)(iVar1 + 0x58) != '\0');
  return;
}


// ==== FUN_00164e40 @ 00164e40 ====

void FUN_00164e40(int param_1)

{
  *(undefined1 *)(param_1 + 0x131) = 0;
  *(undefined1 *)(param_1 + 0x130) = 1;
  return;
}


// ==== FUN_00164e50 @ 00164e50 ====

undefined4 FUN_00164e50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((int)param_1 + 0x134) = param_3;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  return 1;
}


// ==== FUN_00164e70 @ 00164e70 ====

undefined8 FUN_00164e70(int param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar4 = _qmtc2(param_2);
  auVar3 = _vaddbc(in_vf0,in_vf0);
  auVar2 = _lqc2(*(undefined1 (*) [16])(*(float **)(param_1 + 0x134) + 4));
  auVar2 = _vsub(auVar4,auVar2);
  fVar1 = **(float **)(param_1 + 0x134);
  auVar2 = _vmul(auVar2,auVar2);
  _vaddabc(auVar2,auVar2);
  auVar2 = _vmaddbc(auVar3,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar2);
  auVar2 = _vaddbc(in_vf0,in_vf0);
  uVar5 = _vwaitq();
  auVar2 = _vmulq(auVar2,uVar5);
  auVar2 = _qmfc2(auVar2._0_4_);
  if (fVar1 < auVar2._0_4_) {
    if (*(char *)(param_1 + 0x131) != '\0') {
      *(undefined1 *)(param_1 + 0x131) = 0;
      (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
                (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x10),param_3);
    }
  }
  else if ((auVar2._0_4_ <= fVar1) && (*(char *)(param_1 + 0x131) == '\0')) {
    *(undefined1 *)(param_1 + 0x131) = 1;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x10),param_3);
  }
  return 0;
}


// ==== FUN_00164f50 @ 00164f50 ====
// GLOBAL DAT_0040f510 int

void FUN_00164f50(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x131) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
    uVar2 = FUN_001ec768(uVar1);
    FUN_001ec858(uVar1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x134) + 0x20));
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
    uVar2 = FUN_001ec768(uVar1);
    FUN_001ec858(uVar1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x134) + 0x24));
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
    uVar2 = FUN_001ec768(uVar1);
    FUN_001ec858(uVar1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x134) + 0x28));
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
    uVar2 = FUN_001ec768(uVar1);
    FUN_001ec778(uVar1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x134) + 0x20));
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
    uVar2 = FUN_001ec768(uVar1);
    FUN_001ec778(uVar1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x134) + 0x24));
    uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
    uVar2 = FUN_001ec768(uVar1);
    FUN_001ec778(uVar1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x134) + 0x28));
  }
  return;
}


// ==== FUN_001650b8 @ 001650b8 ====

void FUN_001650b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00165ae0();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_001650f8 @ 001650f8 ====

undefined4 FUN_001650f8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00165af8();
  *param_1 = param_2;
  *(undefined4 *)((int)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return 1;
}


// ==== FUN_00165148 @ 00165148 ====

undefined4 FUN_00165148(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_001651d0 @ 001651d0 ====

void FUN_001651d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00165ae0();
  *(undefined1 *)((int)param_1 + 0x18) = 0;
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00165210 @ 00165210 ====

undefined4 FUN_00165210(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_00165af8();
  *param_1 = param_2;
  *(int *)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = uVar1;
  return 1;
}


// ==== FUN_00165268 @ 00165268 ====

void FUN_00165268(float param_1,int param_2)

{
  param_1 = *(float *)(param_2 + 0x1c) - param_1;
  *(float *)(param_2 + 0x1c) = param_1;
  if (param_1 <= 0.0) {
    *(undefined1 *)(param_2 + 0x18) = 0;
    (**(code **)(*(int *)(param_2 + 0x10) + 0x14))
              (param_2 + *(short *)(*(int *)(param_2 + 0x10) + 0x10),0);
  }
  return;
}


// ==== FUN_001652b8 @ 001652b8 ====

undefined4 FUN_001652b8(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_001652f0 @ 001652f0 ====

void FUN_001652f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00165ae0();
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00165330 @ 00165330 ====

undefined4 FUN_00165330(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00165af8();
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  return 1;
}


// ==== FUN_00165380 @ 00165380 ====

undefined4 FUN_00165380(void)

{
  FUN_00165b98();
  return 1;
}


// ==== FUN_001653f0 @ 001653f0 ====

void FUN_001653f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00169bf0();
  FUN_00165bc8(param_1,param_2);
  return;
}


// ==== FUN_00165430 @ 00165430 ====

undefined4 FUN_00165430(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 in_vuI;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  
  *(int *)(param_1 + 400) = param_3;
  FUN_00169c10();
  uVar3 = *(undefined4 *)(param_3 + 0x44);
  uVar4 = *(undefined4 *)(param_3 + 0x48);
  uVar2 = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  auVar7 = _vmaxbc(in_vf0,in_vf0);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined4 *)(param_3 + 0x38);
  uVar4 = *(undefined4 *)(param_3 + 0x3c);
  *(int *)(param_1 + 0x130) = (int)uVar1;
  *(int *)(param_1 + 0x134) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  *(undefined4 *)(param_1 + 0x13c) = uVar4;
  _lqc2(auStack_80);
  _lqc2(auStack_60);
  auVar5 = _qmtc2(*(float *)(param_3 + 0x1c) * 0.017453292);
  auVar15 = _qmtc2(0);
  auVar5 = _vaddbc(in_vf0,auVar5);
  _ctc2(0x3fc90fdb);
  _vnop();
  auVar5 = _vsubi(auVar5,in_vuI);
  auVar6 = _vabs(auVar5);
  auVar5 = _pextlw(0,0);
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
  auVar7 = _vabs(auVar6);
  auVar6 = _pextlw(0x3f800000,auVar5._0_8_);
  _ctc2(0x3e800000);
  _vnop();
  auVar5 = _vsubi(auVar7,in_vuI);
  auVar14 = _vadd(in_vf0,in_vf0);
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
  auVar7 = _vmadd(auVar10,auVar9);
  auVar5 = _sqc2(auVar14);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  auVar12 = _vaddbc(in_vf0,auVar7);
  auVar13 = _vaddbc(in_vf0,auVar7);
  _vmove(auVar13);
  auVar5 = _vsub(in_vf0,auVar7);
  _vmove(auVar12);
  auVar11 = _vaddbc(in_vf0,auVar15);
  auVar10 = _vaddbc(in_vf0,auVar15);
  _vmove(auVar11);
  _vmove(auVar10);
  auVar9 = _vaddbc(in_vf0,auVar7);
  auVar8 = _vaddbc(in_vf0,auVar5);
  uVar3 = auVar6._0_4_;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(int *)(param_1 + 0x84) = auVar6._4_4_;
  *(int *)(param_1 + 0x88) = auVar6._8_4_;
  *(int *)(param_1 + 0x8c) = auVar6._12_4_;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  _sqc2(auVar12);
  _vmove(auVar8);
  _qmtc2(uVar3);
  auVar7 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x10));
  auVar15 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar13);
  _vmove(auVar9);
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  auVar12 = _vaddbc(in_vf0,auVar8);
  _sqc2(auVar10);
  _vmove(auVar15);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_3 + 0x30));
  auVar5 = _vaddbc(auVar7,auVar5);
  _sqc2(auVar11);
  auVar7 = _vaddbc(in_vf0,auVar5);
  _sqc2(auVar8);
  _sqc2(auVar9);
  _sqc2(auVar8);
  _sqc2(auVar9);
  _sqc2(auVar14);
  _sqc2(auVar14);
  _sqc2(auVar14);
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar5;
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  *(int *)(param_1 + 0x164) = auVar6._4_4_;
  *(int *)(param_1 + 0x168) = auVar6._8_4_;
  *(int *)(param_1 + 0x16c) = auVar6._12_4_;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x170) = auVar5;
  auVar5 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar5;
  _vmove(auVar12);
  auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x80));
  auVar10 = _vaddbc(in_vf0,auVar6);
  auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x90));
  _vmove(auVar10);
  auVar11 = _vaddbc(in_vf0,auVar5);
  auVar9 = _vaddbc(in_vf0,auVar6);
  auVar8 = _vaddbc(in_vf0,auVar5);
  auVar5 = _vmulbc(auVar8,auVar7);
  auVar6 = _vmulbc(auVar11,auVar7);
  auVar7 = _vmulbc(auVar9,auVar7);
  auVar6 = _vadd(auVar5,auVar6);
  auVar5 = _sqc2(auVar10);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  auVar6 = _vadd(auVar6,auVar7);
  auVar5 = _sqc2(auVar15);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar5;
  auVar6 = _vsub(in_vf0,auVar6);
  auVar5 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar8);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  auVar5 = _sqc2(auVar11);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar5;
  auVar5 = _sqc2(auVar9);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar5;
  auVar5 = _sqc2(auVar6);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar5;
  *(undefined1 *)(param_1 + 0x196) = 0;
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  return 1;
}


// ==== FUN_001656f0 @ 001656f0 ====
// GLOBAL DAT_0040f4d0 int

bool FUN_001656f0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
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
  undefined4 uVar14;
  float fStack_3c;
  float fStack_38;
  
  auVar12 = _vaddbc(in_vf0,in_vf0);
  iVar3 = (int)param_1;
  auVar13 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
  fVar4 = *(float *)(DAT_0040f4d0 + 0x318) * 0.5;
  auVar2 = _qmfc2(auVar13._0_4_);
  auVar11 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x70));
  auVar9 = _qmtc2(fVar4);
  *(float *)(iVar3 + 0x110) = fVar4;
  auVar5 = _qmtc2(*(undefined4 *)(*(int *)(iVar3 + 400) + 0x50));
  auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x90));
  auVar5 = _vaddbc(auVar13,auVar5);
  auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0xa0));
  auVar8 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x80));
  auVar5 = _sqc2(auVar5);
  auVar6 = _qmtc2(param_2);
  _vmulabc(auVar11,auVar6);
  _vmaddabc(auVar8,auVar6);
  _vmaddabc(auVar7,auVar6);
  auVar6 = _vmaddbc(auVar10,in_vf0);
  fStack_38 = auVar5._8_4_;
  fVar4 = fStack_38;
  auVar7 = _vaddbc(auVar6,auVar9);
  auVar5 = _sqc2(auVar13);
  _vmove(auVar6);
  auVar6 = _vaddbc(in_vf0,auVar7);
  fStack_38 = auVar5._8_4_;
  auVar5 = _vmul(auVar6,auVar6);
  _vaddabc(auVar5,auVar5);
  auVar5 = _vmaddbc(auVar12,auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vsqrt(auVar5);
  auVar5 = _vaddbc(in_vf0,in_vf0);
  uVar14 = _vwaitq();
  auVar5 = _vmulq(auVar5,uVar14);
  auVar5 = _qmfc2(auVar5._0_4_);
  if (fStack_38 < auVar2._0_4_) {
    auVar2 = _qmtc2(*(undefined4 *)(*(int *)(iVar3 + 400) + 0x50));
    auVar2 = _vaddbc(auVar13,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    fVar4 = auVar2._0_4_;
  }
  if (fVar4 < auVar5._0_4_) {
    if (*(char *)(iVar3 + 0x194) != '\0') {
      *(undefined1 *)(iVar3 + 0x194) = 0;
      FUN_00165a60(param_1);
      return *(char *)(iVar3 + 0x196) != '\0';
    }
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x140));
  }
  else if (auVar5._0_4_ <= fVar4) {
    if (*(char *)(iVar3 + 0x194) == '\0') {
      *(undefined1 *)(iVar3 + 0x194) = 1;
      FUN_00165a60(param_1);
      return false;
    }
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x140));
  }
  else {
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x140));
  }
  auVar2 = _qmfc2(auVar6._0_4_);
  auVar7 = _qmfc2(auVar5._0_4_);
  if (auVar7._0_4_ <= auVar2._0_4_) {
    auVar7 = _sqc2(auVar6);
    fStack_3c = auVar7._4_4_;
    fVar4 = fStack_3c;
    auVar7 = _sqc2(auVar5);
    fStack_3c = auVar7._4_4_;
    if (fStack_3c <= fVar4) {
      auVar7 = _sqc2(auVar6);
      fStack_38 = auVar7._8_4_;
      fVar4 = fStack_38;
      auVar5 = _sqc2(auVar5);
      fStack_38 = auVar5._8_4_;
      if (fStack_38 <= fVar4) {
        auVar7 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x130));
        auVar5 = _qmfc2(auVar7._0_4_);
        if (auVar2._0_4_ <= auVar5._0_4_) {
          auVar5 = _sqc2(auVar6);
          fStack_3c = auVar5._4_4_;
          fVar4 = fStack_3c;
          auVar5 = _sqc2(auVar7);
          fStack_3c = auVar5._4_4_;
          if (fVar4 <= fStack_3c) {
            auVar5 = _sqc2(auVar6);
            fStack_38 = auVar5._8_4_;
            fVar4 = fStack_38;
            auVar5 = _sqc2(auVar7);
            fStack_38 = auVar5._8_4_;
            bVar1 = false;
            if (fVar4 <= fStack_38) goto LAB_00165928;
          }
        }
      }
    }
  }
  bVar1 = true;
LAB_00165928:
  if ((!bVar1) && (*(char *)(iVar3 + 0x195) == '\0')) {
    FUN_00165aa8(param_1);
    (**(code **)(*(int *)(iVar3 + 0x10) + 0x14))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x10),param_3);
    *(undefined1 *)(iVar3 + 0x196) = 1;
    *(undefined1 *)(iVar3 + 0x195) = 1;
  }
  return false;
}


// ==== FUN_00165980 @ 00165980 ====

void FUN_00165980(int param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x195) == '\0') {
    FUN_00165aa8();
    (**(code **)(*(int *)(param_1 + 0x10) + 0x14))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x10),param_2);
    *(undefined1 *)(param_1 + 0x196) = 1;
    *(undefined1 *)(param_1 + 0x195) = 1;
  }
  return;
}


// ==== FUN_001659e0 @ 001659e0 ====
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL DAT_00414d00 undefined4

void FUN_001659e0(int param_1)

{
  FUN_0026aa68(0);
  FUN_0026a840(0);
  FUN_001ae5e8(DAT_0040f4c0,param_1 + 0x150,*(undefined4 *)(param_1 + 0x140),
               *(undefined4 *)(param_1 + 0x130),DAT_00414d00);
  return;
}


// ==== FUN_00165a38 @ 00165a38 ====

undefined4 FUN_00165a38(void)

{
  FUN_00169eb8();
  return 1;
}


// ==== FUN_00165a60 @ 00165a60 ====
// GLOBAL DAT_0040f510 int

void FUN_00165a60(int param_1)

{
  if (*(char *)(param_1 + 0x194) != '\0') {
    FUN_001e5cd8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),
                 *(undefined2 *)(*(int *)(param_1 + 400) + 0x54));
  }
  return;
}


// ==== FUN_00165aa8 @ 00165aa8 ====
// GLOBAL DAT_0040f510 int

void FUN_00165aa8(int param_1)

{
  FUN_001e5cb0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),
               *(undefined2 *)(*(int *)(param_1 + 400) + 0x54));
  return;
}


// ==== FUN_00165ae0 @ 00165ae0 ====

void FUN_00165ae0(undefined8 *param_1)

{
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_00165af8 @ 00165af8 ====

undefined4 FUN_00165af8(void)

{
  return 1;
}


// ==== FUN_00165b00 @ 00165b00 ====

void FUN_00165b00(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0xc) != '\0') && (iVar2 = 0, *(char *)(param_1 + 0xc) != '\0')) {
    iVar1 = *(int *)(param_1 + 8);
    while( true ) {
      iVar1 = *(int *)(iVar2 * 4 + iVar1);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x18),param_2);
      }
      iVar2 = iVar2 + 1;
      if ((int)(uint)*(byte *)(param_1 + 0xc) <= iVar2) break;
      iVar1 = *(int *)(param_1 + 8);
    }
  }
  return;
}


// ==== FUN_00165b98 @ 00165b98 ====

undefined4 FUN_00165b98(undefined8 *param_1)

{
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *param_1 = 0;
  return 1;
}


// ==== FUN_00165bb0 @ 00165bb0 ====

void FUN_00165bb0(undefined8 *param_1)

{
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_00165bc8 @ 00165bc8 ====

void FUN_00165bc8(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(char *)(param_1 + 0xc) = (char)param_2;
  if ((param_2 & 0xff) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uVar1 = FUN_00107d20((uint)*(byte *)(param_1 + 0xc) << 2);
    *(undefined4 *)(param_1 + 8) = uVar1;
    iVar3 = 0;
    if (0 < (int)param_2) {
      do {
        iVar2 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + *(int *)(param_1 + 8)) = 0;
      } while (iVar3 < (int)param_2);
    }
  }
  return;
}


// ==== FUN_00165c40 @ 00165c40 ====

void FUN_00165c40(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + *(int *)(param_1 + 8)) = param_2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return;
}


// ==== FUN_00165c78 @ 00165c78 ====

void FUN_00165c78(undefined8 *param_1)

{
  undefined1 auStack_30 [4];
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  FUN_002726d0(*param_1,auStack_30);
  uStack_20 = uStack_2c;
  uStack_1f = uStack_2b;
  uStack_1e = 0;
  atoi(&uStack_20);
  return;
}


// ==== FUN_00165cc0 @ 00165cc0 ====

void FUN_00165cc0(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}


// ==== FUN_00165de8 @ 00165de8 ====

undefined4 FUN_00165de8(void)

{
  return 1;
}


// ==== FUN_00165df0 @ 00165df0 ====
// GLOBAL DAT_0040f4d0 int

void FUN_00165df0(ushort *param_1)

{
  undefined1 in_zero_qw [16];
  int iVar1;
  uint uVar2;
  undefined1 in_a1_qw [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  
  auVar5 = _por(in_zero_qw,in_a1_qw);
  iVar6 = DAT_0040f4d0 + 0x30;
  if ((*(int *)(param_1 + 0x24) != 0) && (iVar4 = 0, *param_1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x24);
    while( true ) {
      iVar1 = *(int *)(iVar4 * 4 + iVar1);
      if (*(char *)(iVar1 + 0x11c) == '\0') {
        uVar2 = (uint)*param_1;
      }
      else if (*(int *)(iVar1 + 0x120) == 3) {
        auVar3 = _por(in_zero_qw,auVar5);
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xa4))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0xa0),auVar3._0_8_,iVar6);
        uVar2 = (uint)*param_1;
      }
      else {
        uVar2 = (uint)*param_1;
      }
      iVar4 = iVar4 + 1;
      if ((int)uVar2 <= iVar4) break;
      iVar1 = *(int *)(param_1 + 0x24);
    }
  }
  if ((*(int *)(param_1 + 0x26) != 0) && (iVar4 = 0, param_1[1] != 0)) {
    iVar1 = *(int *)(param_1 + 0x26);
    while( true ) {
      iVar1 = *(int *)(iVar4 * 4 + iVar1);
      if (*(char *)(iVar1 + 0x11c) == '\0') {
        uVar2 = (uint)param_1[1];
      }
      else if (*(int *)(iVar1 + 0x120) == 3) {
        auVar3 = _por(in_zero_qw,auVar5);
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xa4))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0xa0),auVar3._0_8_,iVar6);
        uVar2 = (uint)param_1[1];
      }
      else {
        uVar2 = (uint)param_1[1];
      }
      iVar4 = iVar4 + 1;
      if ((int)uVar2 <= iVar4) break;
      iVar1 = *(int *)(param_1 + 0x26);
    }
  }
  return;
}


// ==== FUN_00165f30 @ 00165f30 ====
// GLOBAL DAT_0040f4d0 int

void FUN_00165f30(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined1 in_zero_qw [16];
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 in_a1_qw [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  
  auVar7 = _por(in_zero_qw,in_a1_qw);
  iVar8 = DAT_0040f4d0 + 0x30;
  if ((*(int *)(param_2 + 0x24) != 0) && (iVar6 = 0, *param_2 != 0)) {
    iVar2 = *(int *)(param_2 + 0x24);
    do {
      iVar2 = *(int *)(iVar6 * 4 + iVar2);
      if (*(char *)(iVar2 + 0x11c) == '\0') {
        uVar3 = (uint)*param_2;
      }
      else {
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(int *)(iVar2 + 0x120) != 3) {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 == 0) {
            uVar3 = (uint)*param_2;
            goto LAB_00165fe0;
          }
          *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x24)) + 0x11c) = 0;
        }
        uVar3 = (uint)*param_2;
      }
LAB_00165fe0:
      iVar6 = iVar6 + 1;
      if ((int)uVar3 <= iVar6) break;
      iVar2 = *(int *)(param_2 + 0x24);
    } while( true );
  }
  if (*(int *)(param_2 + 0x26) == 0) {
    iVar6 = *(int *)(param_2 + 0x2c);
  }
  else {
    iVar6 = 0;
    if (param_2[1] != 0) {
      iVar2 = *(int *)(param_2 + 0x26);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x11c) == '\0') {
          uVar3 = (uint)param_2[1];
        }
        else {
          auVar5 = _por(in_zero_qw,auVar7);
          if (*(int *)(iVar2 + 0x120) != 3) {
            lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8)
            ;
            if (lVar4 == 0) {
              uVar3 = (uint)param_2[1];
              goto LAB_00166068;
            }
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x26)) + 0x11c) = 0;
          }
          uVar3 = (uint)param_2[1];
        }
LAB_00166068:
        iVar6 = iVar6 + 1;
        if ((int)uVar3 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x26);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x2c);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x2e);
  }
  else {
    iVar6 = 0;
    if (param_2[4] != 0) {
      iVar2 = *(int *)(param_2 + 0x2c);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x18) != '\0') {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))
                    (param_1,iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 8));
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)param_2[4] <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x2c);
      }
    }
    iVar6 = *(int *)(param_2 + 0x2e);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x34);
  }
  else {
    iVar6 = 0;
    if (param_2[5] != 0) {
      iVar2 = *(int *)(param_2 + 0x2e);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x18) != '\0') {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))
                    (param_1,iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 8));
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)param_2[5] <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x2e);
      }
    }
    iVar6 = *(int *)(param_2 + 0x34);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x36);
  }
  else {
    iVar6 = 0;
    if (param_2[8] != 0) {
      iVar2 = *(int *)(param_2 + 0x34);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          uVar1 = param_2[8];
        }
        else {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0x2c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x28));
          uVar1 = param_2[8];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x34);
      }
    }
    iVar6 = *(int *)(param_2 + 0x36);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 100);
  }
  else {
    iVar6 = 0;
    if (param_2[9] != 0) {
      iVar2 = *(int *)(param_2 + 0x36);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          uVar1 = param_2[9];
        }
        else {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0x2c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x28));
          uVar1 = param_2[9];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x36);
      }
    }
    iVar6 = *(int *)(param_2 + 100);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x66);
  }
  else {
    iVar6 = 0;
    if (param_2[0x20] != 0) {
      iVar2 = *(int *)(param_2 + 100);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x1c) != '\0') {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))
                    (param_1,iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 8));
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)param_2[0x20] <= iVar6) break;
        iVar2 = *(int *)(param_2 + 100);
      }
    }
    iVar6 = *(int *)(param_2 + 0x66);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x38);
  }
  else {
    iVar6 = 0;
    if (param_2[0x21] != 0) {
      iVar2 = *(int *)(param_2 + 0x66);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x1c) != '\0') {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))
                    (param_1,iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 8));
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)param_2[0x21] <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x66);
      }
    }
    iVar6 = *(int *)(param_2 + 0x38);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x3a);
  }
  else {
    iVar6 = 0;
    if (param_2[10] != 0) {
      iVar2 = *(int *)(param_2 + 0x38);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          uVar1 = param_2[10];
        }
        else {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0x2c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x28));
          uVar1 = param_2[10];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x38);
      }
    }
    iVar6 = *(int *)(param_2 + 0x3a);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x3c);
  }
  else {
    iVar6 = 0;
    if (param_2[0xb] != 0) {
      iVar2 = *(int *)(param_2 + 0x3a);
      while( true ) {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          uVar1 = param_2[0xb];
        }
        else {
          (**(code **)(*(int *)(iVar2 + 0x10) + 0x2c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x28));
          uVar1 = param_2[0xb];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x3a);
      }
    }
    iVar6 = *(int *)(param_2 + 0x3c);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x3e);
  }
  else {
    iVar6 = 0;
    if (param_2[0xc] != 0) {
      iVar2 = *(int *)(param_2 + 0x3c);
      while( true ) {
        if (*(int *)(iVar6 * 4 + iVar2) == 0) {
          uVar1 = param_2[0xc];
        }
        else {
          FUN_00174578();
          uVar1 = param_2[0xc];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x3c);
      }
    }
    iVar6 = *(int *)(param_2 + 0x3e);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x40);
  }
  else {
    iVar6 = 0;
    if (param_2[0xd] != 0) {
      iVar2 = *(int *)(param_2 + 0x3e);
      while( true ) {
        if (*(int *)(iVar6 * 4 + iVar2) == 0) {
          uVar1 = param_2[0xd];
        }
        else {
          FUN_00174578();
          uVar1 = param_2[0xd];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x3e);
      }
    }
    iVar6 = *(int *)(param_2 + 0x40);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x42);
  }
  else {
    iVar6 = 0;
    if (param_2[0xe] != 0) {
      iVar2 = *(int *)(param_2 + 0x40);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x130) == '\0') {
LAB_00166480:
          uVar1 = param_2[0xe];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x40)) + 0x130) = 0;
            goto LAB_00166480;
          }
          uVar1 = param_2[0xe];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x40);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x42);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x44);
  }
  else {
    iVar6 = 0;
    if (param_2[0xf] != 0) {
      iVar2 = *(int *)(param_2 + 0x42);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x130) == '\0') {
LAB_001664f8:
          uVar1 = param_2[0xf];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x42)) + 0x130) = 0;
            goto LAB_001664f8;
          }
          uVar1 = param_2[0xf];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x42);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x44);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x46);
  }
  else {
    iVar6 = 0;
    if (param_2[0x12] != 0) {
      iVar2 = *(int *)(param_2 + 0x44);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x11c) == '\0') {
LAB_00166570:
          uVar1 = param_2[0x12];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x44)) + 0x11c) = 0;
            goto LAB_00166570;
          }
          uVar1 = param_2[0x12];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x44);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x46);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x48);
  }
  else {
    iVar6 = 0;
    if (param_2[0x13] != 0) {
      iVar2 = *(int *)(param_2 + 0x46);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x11c) == '\0') {
LAB_001665e8:
          uVar1 = param_2[0x13];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x46)) + 0x11c) = 0;
            goto LAB_001665e8;
          }
          uVar1 = param_2[0x13];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x46);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x48);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x4a);
  }
  else {
    iVar6 = 0;
    if (param_2[0x14] != 0) {
      iVar2 = *(int *)(param_2 + 0x48);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x11c) == '\0') {
LAB_00166660:
          uVar1 = param_2[0x14];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x48)) + 0x11c) = 0;
            goto LAB_00166660;
          }
          uVar1 = param_2[0x14];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x48);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x4a);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x4c);
  }
  else {
    iVar6 = 0;
    if (param_2[0x15] != 0) {
      iVar2 = *(int *)(param_2 + 0x4a);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x11c) == '\0') {
LAB_001666d8:
          uVar1 = param_2[0x15];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x4a)) + 0x11c) = 0;
            goto LAB_001666d8;
          }
          uVar1 = param_2[0x15];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x4a);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x4c);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_2 + 0x4e);
  }
  else {
    iVar6 = 0;
    if (param_2[0x16] != 0) {
      iVar2 = *(int *)(param_2 + 0x4c);
      do {
        iVar2 = *(int *)(iVar6 * 4 + iVar2);
        auVar5 = _por(in_zero_qw,auVar7);
        if (*(char *)(iVar2 + 0x11c) == '\0') {
LAB_00166750:
          uVar1 = param_2[0x16];
        }
        else {
          lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
          if (lVar4 != 0) {
            *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x4c)) + 0x11c) = 0;
            goto LAB_00166750;
          }
          uVar1 = param_2[0x16];
        }
        iVar6 = iVar6 + 1;
        if ((int)(uint)uVar1 <= iVar6) break;
        iVar2 = *(int *)(param_2 + 0x4c);
      } while( true );
    }
    iVar6 = *(int *)(param_2 + 0x4e);
  }
  if ((iVar6 == 0) || (iVar6 = 0, param_2[0x17] == 0)) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x4e);
  do {
    iVar2 = *(int *)(iVar6 * 4 + iVar2);
    auVar5 = _por(in_zero_qw,auVar7);
    if (*(char *)(iVar2 + 0x11c) == '\0') {
LAB_001667c8:
      uVar1 = param_2[0x17];
    }
    else {
      lVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x9c))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x98),auVar5._0_8_,iVar8);
      if (lVar4 != 0) {
        *(undefined1 *)(*(int *)(iVar6 * 4 + *(int *)(param_2 + 0x4e)) + 0x11c) = 0;
        goto LAB_001667c8;
      }
      uVar1 = param_2[0x17];
    }
    iVar6 = iVar6 + 1;
    if ((int)(uint)uVar1 <= iVar6) {
      return;
    }
    iVar2 = *(int *)(param_2 + 0x4e);
  } while( true );
}


// ==== FUN_00166808 @ 00166808 ====
// GLOBAL DAT_0040f4c0 undefined4
// GLOBAL null char

void FUN_00166808(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (cGpffff81c2 != '\0') {
    FUN_001ae5a0(DAT_0040f4c0);
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar4 = *(int *)(param_1 + 0x26);
    }
    else {
      iVar4 = 0;
      if (*param_1 != 0) {
        iVar2 = *(int *)(param_1 + 0x24);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = *param_1;
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = *param_1;
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x24);
        }
      }
      iVar4 = *(int *)(param_1 + 0x26);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x44);
    }
    else {
      iVar4 = 0;
      if (param_1[1] != 0) {
        iVar2 = *(int *)(param_1 + 0x26);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[1];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[1];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x26);
        }
      }
      iVar4 = *(int *)(param_1 + 0x44);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x46);
    }
    else {
      iVar4 = 0;
      if (param_1[0x12] != 0) {
        iVar2 = *(int *)(param_1 + 0x44);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[0x12];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[0x12];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x44);
        }
      }
      iVar4 = *(int *)(param_1 + 0x46);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x48);
    }
    else {
      iVar4 = 0;
      if (param_1[0x13] != 0) {
        iVar2 = *(int *)(param_1 + 0x46);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[0x13];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[0x13];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x46);
        }
      }
      iVar4 = *(int *)(param_1 + 0x48);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4a);
    }
    else {
      iVar4 = 0;
      if (param_1[0x14] != 0) {
        iVar2 = *(int *)(param_1 + 0x48);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[0x14];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[0x14];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x48);
        }
      }
      iVar4 = *(int *)(param_1 + 0x4a);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar4 = 0;
      if (param_1[0x15] != 0) {
        iVar2 = *(int *)(param_1 + 0x4a);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[0x15];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[0x15];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x4a);
        }
      }
      iVar4 = *(int *)(param_1 + 0x4c);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4e);
    }
    else {
      iVar4 = 0;
      if (param_1[0x16] != 0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[0x16];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[0x16];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x4c);
        }
      }
      iVar4 = *(int *)(param_1 + 0x4e);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x68);
    }
    else {
      iVar4 = 0;
      if (param_1[0x17] != 0) {
        iVar2 = *(int *)(param_1 + 0x4e);
        while( true ) {
          iVar2 = *(int *)(iVar4 * 4 + iVar2);
          if (*(char *)(iVar2 + 0x11c) == '\0') {
            uVar1 = param_1[0x17];
          }
          else {
            (**(code **)(*(int *)(iVar2 + 0x10) + 0xac))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0xa8));
            uVar1 = param_1[0x17];
          }
          iVar4 = iVar4 + 1;
          if ((int)(uint)uVar1 <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x4e);
        }
      }
      iVar4 = *(int *)(param_1 + 0x68);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x6a);
    }
    else {
      iVar4 = 0;
      if (param_1[0x22] != 0) {
        iVar2 = *(int *)(param_1 + 0x68);
        while( true ) {
          iVar3 = iVar4 * 4;
          iVar4 = iVar4 + 1;
          iVar2 = *(int *)(iVar3 + iVar2);
          iVar3 = *(int *)(iVar2 + 0x10);
          (**(code **)(iVar3 + 0xac))(iVar2 + *(short *)(iVar3 + 0xa8));
          if ((int)(uint)param_1[0x22] <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x68);
        }
      }
      iVar4 = *(int *)(param_1 + 0x6a);
    }
    if ((iVar4 != 0) && (iVar4 = 0, param_1[0x23] != 0)) {
      iVar2 = *(int *)(param_1 + 0x6a);
      while( true ) {
        iVar3 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)(iVar3 + iVar2);
        iVar3 = *(int *)(iVar2 + 0x10);
        (**(code **)(iVar3 + 0xac))(iVar2 + *(short *)(iVar3 + 0xa8));
        if ((int)(uint)param_1[0x23] <= iVar4) break;
        iVar2 = *(int *)(param_1 + 0x6a);
      }
    }
    FUN_001ae5c8(DAT_0040f4c0);
  }
  return;
}


// ==== FUN_00166c00 @ 00166c00 ====

void FUN_00166c00(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(undefined2 *)(param_1 + 0x20) = param_3;
      *(int *)(param_1 + 0xa0) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x22) = param_3;
    *(int *)(param_1 + 0xa4) = (int)param_2;
  }
  return;
}


// ==== FUN_00166c30 @ 00166c30 ====

void FUN_00166c30(undefined2 *param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *param_1 = param_3;
      *(int *)(param_1 + 0x24) = (int)param_2;
      return;
    }
    param_1[1] = param_3;
    *(int *)(param_1 + 0x26) = (int)param_2;
  }
  return;
}


// ==== FUN_00166c60 @ 00166c60 ====

void FUN_00166c60(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      *(undefined2 *)(param_1 + 4) = param_3;
      *(int *)(param_1 + 0x50) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 6) = param_3;
    *(int *)(param_1 + 0x54) = (int)param_2;
  }
  return;
}


// ==== FUN_00166c90 @ 00166c90 ====

void FUN_00166c90(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined2 *)(param_1 + 8) = param_3;
      *(int *)(param_1 + 0x58) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 10) = param_3;
    *(int *)(param_1 + 0x5c) = (int)param_2;
  }
  return;
}


// ==== FUN_00166cc0 @ 00166cc0 ====

void FUN_00166cc0(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      *(undefined2 *)(param_1 + 0xc) = param_3;
      *(int *)(param_1 + 0x60) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0xe) = param_3;
    *(int *)(param_1 + 100) = (int)param_2;
  }
  return;
}


// ==== FUN_00166cf0 @ 00166cf0 ====

void FUN_00166cf0(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x68) == 0) {
      *(undefined2 *)(param_1 + 0x10) = param_3;
      *(int *)(param_1 + 0x68) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x12) = param_3;
    *(int *)(param_1 + 0x6c) = (int)param_2;
  }
  return;
}


// ==== FUN_00166d20 @ 00166d20 ====

void FUN_00166d20(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined2 *)(param_1 + 0x14) = param_3;
      *(int *)(param_1 + 0x70) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x16) = param_3;
    *(int *)(param_1 + 0x74) = (int)param_2;
  }
  return;
}


// ==== FUN_00166d50 @ 00166d50 ====

void FUN_00166d50(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      *(undefined2 *)(param_1 + 0x18) = param_3;
      *(int *)(param_1 + 0x78) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x1a) = param_3;
    *(int *)(param_1 + 0x7c) = (int)param_2;
  }
  return;
}


// ==== FUN_00166d80 @ 00166d80 ====

void FUN_00166d80(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x80) == 0) {
      *(undefined2 *)(param_1 + 0x1c) = param_3;
      *(int *)(param_1 + 0x80) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x1e) = param_3;
    *(int *)(param_1 + 0x84) = (int)param_2;
  }
  return;
}


// ==== FUN_00166db0 @ 00166db0 ====

void FUN_00166db0(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      *(undefined2 *)(param_1 + 0x24) = param_3;
      *(int *)(param_1 + 0x88) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x26) = param_3;
    *(int *)(param_1 + 0x8c) = (int)param_2;
  }
  return;
}


// ==== FUN_00166de0 @ 00166de0 ====

void FUN_00166de0(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x90) == 0) {
      *(undefined2 *)(param_1 + 0x28) = param_3;
      *(int *)(param_1 + 0x90) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x2a) = param_3;
    *(int *)(param_1 + 0x94) = (int)param_2;
  }
  return;
}


// ==== FUN_00166e10 @ 00166e10 ====

void FUN_00166e10(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x98) == 0) {
      *(undefined2 *)(param_1 + 0x2c) = param_3;
      *(int *)(param_1 + 0x98) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x2e) = param_3;
    *(int *)(param_1 + 0x9c) = (int)param_2;
  }
  return;
}


// ==== FUN_00166e40 @ 00166e40 ====

void FUN_00166e40(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      *(undefined2 *)(param_1 + 0x30) = param_3;
      *(int *)(param_1 + 0xa8) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x32) = param_3;
    *(int *)(param_1 + 0xac) = (int)param_2;
  }
  return;
}


// ==== FUN_00166e70 @ 00166e70 ====

void FUN_00166e70(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xb0) == 0) {
      *(undefined2 *)(param_1 + 0x34) = param_3;
      *(int *)(param_1 + 0xb0) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x36) = param_3;
    *(int *)(param_1 + 0xb4) = (int)param_2;
  }
  return;
}


// ==== FUN_00166ea0 @ 00166ea0 ====

void FUN_00166ea0(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      *(undefined2 *)(param_1 + 0x38) = param_3;
      *(int *)(param_1 + 0xb8) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x3a) = param_3;
    *(int *)(param_1 + 0xbc) = (int)param_2;
  }
  return;
}


// ==== FUN_00166ed0 @ 00166ed0 ====

void FUN_00166ed0(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      *(undefined2 *)(param_1 + 0x3c) = param_3;
      *(int *)(param_1 + 0xc0) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x3e) = param_3;
    *(int *)(param_1 + 0xc4) = (int)param_2;
  }
  return;
}


// ==== FUN_00166f00 @ 00166f00 ====

void FUN_00166f00(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 200) == 0) {
      *(undefined2 *)(param_1 + 0x40) = param_3;
      *(int *)(param_1 + 200) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x42) = param_3;
    *(int *)(param_1 + 0xcc) = (int)param_2;
  }
  return;
}


// ==== FUN_00166f30 @ 00166f30 ====

void FUN_00166f30(int param_1,long param_2,undefined2 param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(undefined2 *)(param_1 + 0x44) = param_3;
      *(int *)(param_1 + 0xd0) = (int)param_2;
      return;
    }
    *(undefined2 *)(param_1 + 0x46) = param_3;
    *(int *)(param_1 + 0xd4) = (int)param_2;
  }
  return;
}


// ==== FUN_00166f60 @ 00166f60 ====

void FUN_00166f60(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xd0)) {
    *(undefined2 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}


// ==== FUN_00166f80 @ 00166f80 ====

void FUN_00166f80(undefined2 *param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x24)) {
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    return;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// ==== FUN_00166fa0 @ 00166fa0 ====

void FUN_00166fa0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x50)) {
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


// ==== FUN_00166fc0 @ 00166fc0 ====

void FUN_00166fc0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    *(undefined2 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


// ==== FUN_00166fe0 @ 00166fe0 ====

void FUN_00166fe0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


// ==== FUN_00167000 @ 00167000 ====

void FUN_00167000(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == *(int **)(param_1 + 0x68)) {
    uVar1 = *(ushort *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x12);
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  uVar3 = (uint)uVar1;
  if (param_2 != (int *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar2 = *param_2;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x10) + 0x24))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x20));
      }
      param_2 = param_2 + 1;
    }
  }
  return;
}


// ==== FUN_00167088 @ 00167088 ====

void FUN_00167088(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x70)) {
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


// ==== FUN_001670a8 @ 001670a8 ====

void FUN_001670a8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x88)) {
    *(undefined2 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


// ==== FUN_001670c8 @ 001670c8 ====

void FUN_001670c8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x90)) {
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


// ==== FUN_001670e8 @ 001670e8 ====

void FUN_001670e8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x98)) {
    *(undefined2 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


// ==== FUN_00167108 @ 00167108 ====

void FUN_00167108(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x78)) {
    *(undefined2 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


// ==== FUN_00167128 @ 00167128 ====

void FUN_00167128(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x80)) {
    *(undefined2 *)(param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


// ==== FUN_00167148 @ 00167148 ====

void FUN_00167148(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xa0)) {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


// ==== FUN_00167168 @ 00167168 ====

void FUN_00167168(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xa8)) {
    *(undefined2 *)(param_1 + 0x32) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


// ==== FUN_00167188 @ 00167188 ====

void FUN_00167188(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xb0)) {
    *(undefined2 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}


// ==== FUN_001671a8 @ 001671a8 ====

void FUN_001671a8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xb8)) {
    *(undefined2 *)(param_1 + 0x3a) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}


// ==== FUN_001671c8 @ 001671c8 ====

void FUN_001671c8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc0)) {
    *(undefined2 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


// ==== FUN_001671e8 @ 001671e8 ====

void FUN_001671e8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 200)) {
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}


// ==== FUN_00167208 @ 00167208 ====

void FUN_00167208(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)param_1;
  if (*(int *)(puVar4 + 0x24) == 0) {
    iVar3 = *(int *)(puVar4 + 0x26);
  }
  else {
    iVar3 = 0;
    if (*puVar4 != 0) {
      iVar2 = *(int *)(puVar4 + 0x24);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)*puVar4 <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x24);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x26);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x2c);
  }
  else {
    iVar3 = 0;
    if (puVar4[1] != 0) {
      iVar2 = *(int *)(puVar4 + 0x26);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[1] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x26);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x2c);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x2e);
  }
  else {
    iVar3 = 0;
    if (puVar4[4] != 0) {
      iVar2 = *(int *)(puVar4 + 0x2c);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x20));
        if ((int)(uint)puVar4[4] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x2c);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x2e);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x30);
  }
  else {
    iVar3 = 0;
    if (puVar4[5] != 0) {
      iVar2 = *(int *)(puVar4 + 0x2e);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x20));
        if ((int)(uint)puVar4[5] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x2e);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x30);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x32);
  }
  else {
    iVar3 = 0;
    if (puVar4[6] != 0) {
      iVar2 = *(int *)(puVar4 + 0x30);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[6] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x30);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x32);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x28);
  }
  else {
    iVar3 = 0;
    if (puVar4[7] != 0) {
      iVar2 = *(int *)(puVar4 + 0x32);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[7] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x32);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x28);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x2a);
  }
  else {
    iVar3 = 0;
    if (puVar4[2] != 0) {
      iVar2 = *(int *)(puVar4 + 0x28);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x1c));
        if ((int)(uint)puVar4[2] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x28);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x2a);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x34);
  }
  else {
    iVar3 = 0;
    if (puVar4[3] != 0) {
      iVar2 = *(int *)(puVar4 + 0x2a);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x1c));
        if ((int)(uint)puVar4[3] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x2a);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x34);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x36);
  }
  else {
    iVar3 = 0;
    if (puVar4[8] != 0) {
      iVar2 = *(int *)(puVar4 + 0x34);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[8] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x34);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x36);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x38);
  }
  else {
    iVar3 = 0;
    if (puVar4[9] != 0) {
      iVar2 = *(int *)(puVar4 + 0x36);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[9] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x36);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x38);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x3a);
  }
  else {
    iVar3 = 0;
    if (puVar4[10] != 0) {
      iVar2 = *(int *)(puVar4 + 0x38);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[10] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x38);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x3a);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x3c);
  }
  else {
    iVar3 = 0;
    if (puVar4[0xb] != 0) {
      iVar2 = *(int *)(puVar4 + 0x3a);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[0xb] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x3a);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x3c);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x3e);
  }
  else {
    iVar3 = 0;
    if (puVar4[0xc] != 0) {
      iVar2 = *(int *)(puVar4 + 0x3c);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x20));
        if ((int)(uint)puVar4[0xc] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x3c);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x3e);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x44);
  }
  else {
    iVar3 = 0;
    if (puVar4[0xd] != 0) {
      iVar2 = *(int *)(puVar4 + 0x3e);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x20));
        if ((int)(uint)puVar4[0xd] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x3e);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x44);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x46);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x12] != 0) {
      iVar2 = *(int *)(puVar4 + 0x44);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x12] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x44);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x46);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x48);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x13] != 0) {
      iVar2 = *(int *)(puVar4 + 0x46);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x13] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x46);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x48);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x4a);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x14] != 0) {
      iVar2 = *(int *)(puVar4 + 0x48);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x14] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x48);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x4a);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x4c);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x15] != 0) {
      iVar2 = *(int *)(puVar4 + 0x4a);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x15] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x4a);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x4c);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x4e);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x16] != 0) {
      iVar2 = *(int *)(puVar4 + 0x4c);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x16] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x4c);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x4e);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x50);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x17] != 0) {
      iVar2 = *(int *)(puVar4 + 0x4e);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x17] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x4e);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x50);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x52);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x10] != 0) {
      iVar2 = *(int *)(puVar4 + 0x50);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x110));
        if ((int)(uint)puVar4[0x10] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x50);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x52);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x54);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x11] != 0) {
      iVar2 = *(int *)(puVar4 + 0x52);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x110));
        if ((int)(uint)puVar4[0x11] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x52);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x54);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x56);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x18] != 0) {
      iVar2 = *(int *)(puVar4 + 0x54);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[0x18] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x54);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x56);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x58);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x19] != 0) {
      iVar2 = *(int *)(puVar4 + 0x56);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x18));
        if ((int)(uint)puVar4[0x19] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x56);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x58);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x5a);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x1a] != 0) {
      iVar2 = *(int *)(puVar4 + 0x58);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x13c));
        if ((int)(uint)puVar4[0x1a] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x58);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x5a);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x68);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x1b] != 0) {
      iVar2 = *(int *)(puVar4 + 0x5a);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x13c));
        if ((int)(uint)puVar4[0x1b] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x5a);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x68);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(puVar4 + 0x6a);
  }
  else {
    iVar3 = 0;
    if (puVar4[0x22] != 0) {
      iVar2 = *(int *)(puVar4 + 0x68);
      while( true ) {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = *(int *)(iVar1 + iVar2);
        FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
        if ((int)(uint)puVar4[0x22] <= iVar3) break;
        iVar2 = *(int *)(puVar4 + 0x68);
      }
    }
    iVar3 = *(int *)(puVar4 + 0x6a);
  }
  if ((iVar3 != 0) && (iVar3 = 0, puVar4[0x23] != 0)) {
    iVar2 = *(int *)(puVar4 + 0x6a);
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(iVar1 + iVar2);
      FUN_00167a10(param_1,iVar2,*(undefined4 *)(iVar2 + 0x118));
      if ((int)(uint)puVar4[0x23] <= iVar3) break;
      iVar2 = *(int *)(puVar4 + 0x6a);
    }
  }
  return;
}


// ==== FUN_00167a10 @ 00167a10 ====

void FUN_00167a10(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(char *)((int)param_2 + 0xe) == '\0') && (param_3 != 0)) {
    piVar4 = (int *)param_3;
    iVar3 = 0;
    if ((char)piVar4[1] != '\0') {
      iVar2 = *piVar4;
      while( true ) {
        iVar1 = iVar3 * 8;
        iVar3 = iVar3 + 1;
        FUN_00167aa8(param_1,param_2,*(undefined8 *)(iVar1 + iVar2));
        if ((int)(uint)*(byte *)(piVar4 + 1) <= iVar3) break;
        iVar2 = *piVar4;
      }
    }
    *(undefined1 *)((int)param_2 + 0xe) = 1;
  }
  return;
}


// ==== FUN_00167aa8 @ 00167aa8 ====
// GLOBAL DAT_0040f4e4 long_*
// GLOBAL DAT_0040f538 undefined4

void FUN_00167aa8(ushort *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (iVar5 = 0, *param_1 != 0)) {
    iVar4 = *(int *)(param_1 + 0x24);
    while( true ) {
      if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
        FUN_00165c40(param_2);
        uVar1 = *param_1;
      }
      else {
        uVar1 = *param_1;
      }
      iVar5 = iVar5 + 1;
      if ((int)(uint)uVar1 <= iVar5) break;
      iVar4 = *(int *)(param_1 + 0x24);
    }
  }
  if (*(int *)(param_1 + 0x26) == 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar5 = 0;
    if (param_1[1] != 0) {
      iVar4 = *(int *)(param_1 + 0x26);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[1];
        }
        else {
          uVar1 = param_1[1];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x26);
      }
    }
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x2e);
  }
  else {
    iVar5 = 0;
    if (param_1[4] != 0) {
      iVar4 = *(int *)(param_1 + 0x2c);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[4];
        }
        else {
          uVar1 = param_1[4];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x2c);
      }
    }
    iVar5 = *(int *)(param_1 + 0x2e);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar5 = 0;
    if (param_1[5] != 0) {
      iVar4 = *(int *)(param_1 + 0x2e);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[5];
        }
        else {
          uVar1 = param_1[5];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x2e);
      }
    }
    iVar5 = *(int *)(param_1 + 0x30);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x32);
  }
  else {
    iVar5 = 0;
    if (param_1[6] != 0) {
      iVar4 = *(int *)(param_1 + 0x30);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[6];
        }
        else {
          uVar1 = param_1[6];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x30);
      }
    }
    iVar5 = *(int *)(param_1 + 0x32);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar5 = 0;
    if (param_1[7] != 0) {
      iVar4 = *(int *)(param_1 + 0x32);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[7];
        }
        else {
          uVar1 = param_1[7];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x32);
      }
    }
    iVar5 = *(int *)(param_1 + 0x28);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x2a);
  }
  else {
    iVar5 = 0;
    if (param_1[2] != 0) {
      iVar4 = *(int *)(param_1 + 0x28);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[2];
        }
        else {
          uVar1 = param_1[2];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x28);
      }
    }
    iVar5 = *(int *)(param_1 + 0x2a);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar5 = 0;
    if (param_1[3] != 0) {
      iVar4 = *(int *)(param_1 + 0x2a);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[3];
        }
        else {
          uVar1 = param_1[3];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x2a);
      }
    }
    iVar5 = *(int *)(param_1 + 0x34);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x36);
  }
  else {
    iVar5 = 0;
    if (param_1[8] != 0) {
      iVar4 = *(int *)(param_1 + 0x34);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[8];
        }
        else {
          uVar1 = param_1[8];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x34);
      }
    }
    iVar5 = *(int *)(param_1 + 0x36);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 100);
  }
  else {
    iVar5 = 0;
    if (param_1[9] != 0) {
      iVar4 = *(int *)(param_1 + 0x36);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[9];
        }
        else {
          uVar1 = param_1[9];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x36);
      }
    }
    iVar5 = *(int *)(param_1 + 100);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x66);
  }
  else {
    iVar5 = 0;
    if (param_1[0x20] != 0) {
      iVar4 = *(int *)(param_1 + 100);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x20];
        }
        else {
          uVar1 = param_1[0x20];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 100);
      }
    }
    iVar5 = *(int *)(param_1 + 0x66);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x38);
  }
  else {
    iVar5 = 0;
    if (param_1[0x21] != 0) {
      iVar4 = *(int *)(param_1 + 0x66);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x21];
        }
        else {
          uVar1 = param_1[0x21];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x66);
      }
    }
    iVar5 = *(int *)(param_1 + 0x38);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x3a);
  }
  else {
    iVar5 = 0;
    if (param_1[10] != 0) {
      iVar4 = *(int *)(param_1 + 0x38);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[10];
        }
        else {
          uVar1 = param_1[10];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x38);
      }
    }
    iVar5 = *(int *)(param_1 + 0x3a);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar5 = 0;
    if (param_1[0xb] != 0) {
      iVar4 = *(int *)(param_1 + 0x3a);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0xb];
        }
        else {
          uVar1 = param_1[0xb];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x3a);
      }
    }
    iVar5 = *(int *)(param_1 + 0x60);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x62);
  }
  else {
    iVar5 = 0;
    if (param_1[0x1e] != 0) {
      iVar4 = *(int *)(param_1 + 0x60);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x1e];
        }
        else {
          uVar1 = param_1[0x1e];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x60);
      }
    }
    iVar5 = *(int *)(param_1 + 0x62);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar5 = 0;
    if (param_1[0x1f] != 0) {
      iVar4 = *(int *)(param_1 + 0x62);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x1f];
        }
        else {
          uVar1 = param_1[0x1f];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x62);
      }
    }
    iVar5 = *(int *)(param_1 + 0x3c);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x3e);
  }
  else {
    iVar5 = 0;
    if (param_1[0xc] != 0) {
      iVar4 = *(int *)(param_1 + 0x3c);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0xc];
        }
        else {
          uVar1 = param_1[0xc];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x3c);
      }
    }
    iVar5 = *(int *)(param_1 + 0x3e);
  }
  if ((iVar5 != 0) && (iVar5 = 0, param_1[0xd] != 0)) {
    iVar4 = *(int *)(param_1 + 0x3e);
    while( true ) {
      if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
        FUN_00165c40(param_2);
        uVar1 = param_1[0xd];
      }
      else {
        uVar1 = param_1[0xd];
      }
      iVar5 = iVar5 + 1;
      if ((int)(uint)uVar1 <= iVar5) break;
      iVar4 = *(int *)(param_1 + 0x3e);
    }
  }
  plVar2 = DAT_0040f4e4;
  iVar5 = 0;
  plVar6 = DAT_0040f4e4;
  do {
    if ((*(char *)((int)plVar2 + iVar5 + 0x5804) != '\0') && (*plVar6 == param_3)) {
      FUN_00165c40(param_2,plVar6);
    }
    iVar5 = iVar5 + 1;
    plVar6 = plVar6 + 0x2c;
  } while (iVar5 < 0x40);
  FUN_0012f2d8(DAT_0040f538,param_3,param_2);
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar5 = *(int *)(param_1 + 0x46);
  }
  else {
    iVar5 = 0;
    if (param_1[0x12] != 0) {
      iVar4 = *(int *)(param_1 + 0x44);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x12];
        }
        else {
          uVar1 = param_1[0x12];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x44);
      }
    }
    iVar5 = *(int *)(param_1 + 0x46);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar5 = 0;
    if (param_1[0x13] != 0) {
      iVar4 = *(int *)(param_1 + 0x46);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x13];
        }
        else {
          uVar1 = param_1[0x13];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x46);
      }
    }
    iVar5 = *(int *)(param_1 + 0x48);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x4a);
  }
  else {
    iVar5 = 0;
    if (param_1[0x14] != 0) {
      iVar4 = *(int *)(param_1 + 0x48);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x14];
        }
        else {
          uVar1 = param_1[0x14];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x48);
      }
    }
    iVar5 = *(int *)(param_1 + 0x4a);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar5 = 0;
    if (param_1[0x15] != 0) {
      iVar4 = *(int *)(param_1 + 0x4a);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x15];
        }
        else {
          uVar1 = param_1[0x15];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x4a);
      }
    }
    iVar5 = *(int *)(param_1 + 0x4c);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x4e);
  }
  else {
    iVar5 = 0;
    if (param_1[0x16] != 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x16];
        }
        else {
          uVar1 = param_1[0x16];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x4c);
      }
    }
    iVar5 = *(int *)(param_1 + 0x4e);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar5 = 0;
    if (param_1[0x17] != 0) {
      iVar4 = *(int *)(param_1 + 0x4e);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x17];
        }
        else {
          uVar1 = param_1[0x17];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x4e);
      }
    }
    iVar5 = *(int *)(param_1 + 0x50);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x52);
  }
  else {
    iVar5 = 0;
    if (param_1[0x10] != 0) {
      iVar4 = *(int *)(param_1 + 0x50);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x10];
        }
        else {
          uVar1 = param_1[0x10];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x50);
      }
    }
    iVar5 = *(int *)(param_1 + 0x52);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar5 = 0;
    if (param_1[0x11] != 0) {
      iVar4 = *(int *)(param_1 + 0x52);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x11];
        }
        else {
          uVar1 = param_1[0x11];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x52);
      }
    }
    iVar5 = *(int *)(param_1 + 0x54);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x56);
  }
  else {
    iVar5 = 0;
    if (param_1[0x18] != 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      while( true ) {
        plVar6 = *(long **)(iVar5 * 4 + iVar4);
        if (plVar6 == (long *)0x0) {
          uVar3 = (uint)param_1[0x18];
        }
        else if (*plVar6 == param_3) {
          FUN_00165c40(param_2);
          uVar3 = (uint)param_1[0x18];
        }
        else {
          uVar3 = (uint)param_1[0x18];
        }
        iVar5 = iVar5 + 1;
        if ((int)uVar3 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x54);
      }
    }
    iVar5 = *(int *)(param_1 + 0x56);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar5 = 0;
    if (param_1[0x19] != 0) {
      iVar4 = *(int *)(param_1 + 0x56);
      while( true ) {
        plVar6 = *(long **)(iVar5 * 4 + iVar4);
        if (plVar6 == (long *)0x0) {
          uVar3 = (uint)param_1[0x19];
        }
        else if (*plVar6 == param_3) {
          FUN_00165c40(param_2);
          uVar3 = (uint)param_1[0x19];
        }
        else {
          uVar3 = (uint)param_1[0x19];
        }
        iVar5 = iVar5 + 1;
        if ((int)uVar3 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x56);
      }
    }
    iVar5 = *(int *)(param_1 + 0x58);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x5a);
  }
  else {
    iVar5 = 0;
    if (param_1[0x1a] != 0) {
      iVar4 = *(int *)(param_1 + 0x58);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x1a];
        }
        else {
          uVar1 = param_1[0x1a];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x58);
      }
    }
    iVar5 = *(int *)(param_1 + 0x5a);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
  }
  else {
    iVar5 = 0;
    if (param_1[0x1b] != 0) {
      iVar4 = *(int *)(param_1 + 0x5a);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x1b];
        }
        else {
          uVar1 = param_1[0x1b];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x5a);
      }
    }
    iVar5 = *(int *)(param_1 + 0x5c);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x5e);
  }
  else {
    iVar5 = 0;
    if (param_1[0x1c] != 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x1c];
        }
        else {
          uVar1 = param_1[0x1c];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x5c);
      }
    }
    iVar5 = *(int *)(param_1 + 0x5e);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar5 = 0;
    if (param_1[0x1d] != 0) {
      iVar4 = *(int *)(param_1 + 0x5e);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x1d];
        }
        else {
          uVar1 = param_1[0x1d];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x5e);
      }
    }
    iVar5 = *(int *)(param_1 + 0x68);
  }
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x6a);
  }
  else {
    iVar5 = 0;
    if (param_1[0x22] != 0) {
      iVar4 = *(int *)(param_1 + 0x68);
      while( true ) {
        if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
          FUN_00165c40(param_2);
          uVar1 = param_1[0x22];
        }
        else {
          uVar1 = param_1[0x22];
        }
        iVar5 = iVar5 + 1;
        if ((int)(uint)uVar1 <= iVar5) break;
        iVar4 = *(int *)(param_1 + 0x68);
      }
    }
    iVar5 = *(int *)(param_1 + 0x6a);
  }
  if ((iVar5 != 0) && (iVar5 = 0, param_1[0x23] != 0)) {
    iVar4 = *(int *)(param_1 + 0x6a);
    while( true ) {
      if (**(long **)(iVar5 * 4 + iVar4) == param_3) {
        FUN_00165c40(param_2);
        uVar1 = param_1[0x23];
      }
      else {
        uVar1 = param_1[0x23];
      }
      iVar5 = iVar5 + 1;
      if ((int)(uint)uVar1 <= iVar5) break;
      iVar4 = *(int *)(param_1 + 0x6a);
    }
  }
  return;
}


// ==== FUN_00168618 @ 00168618 ====
// GLOBAL DAT_0040f514 int
// GLOBAL DAT_0040f4e4 int

void FUN_00168618(ushort *param_1,long *param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar5 = *(int *)(param_1 + 0x26);
    }
    else {
      iVar5 = 0;
      if (*param_1 != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x24));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x24)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x24)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)*param_1);
      }
      iVar5 = *(int *)(param_1 + 0x26);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar5 = 0;
      if (param_1[1] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x26));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x26)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x26)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[1]);
      }
      iVar5 = *(int *)(param_1 + 0x3c);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x3e);
    }
    else {
      iVar5 = 0;
      if (param_1[0xc] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x3c));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x3c)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x3c)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0xc]);
      }
      iVar5 = *(int *)(param_1 + 0x3e);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar5 = 0;
      if (param_1[0xd] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x3e));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x3e)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x3e)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0xd]);
      }
      iVar5 = *(int *)(param_1 + 0x34);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x36);
    }
    else {
      iVar5 = 0;
      if (param_1[8] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x34));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x34)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x34)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[8]);
      }
      iVar5 = *(int *)(param_1 + 0x36);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar5 = 0;
      if (param_1[9] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x36));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x36)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x36)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[9]);
      }
      iVar5 = *(int *)(param_1 + 0x38);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x3a);
    }
    else {
      iVar5 = 0;
      if (param_1[10] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x38));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x38)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x38)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[10]);
      }
      iVar5 = *(int *)(param_1 + 0x3a);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar5 = 0;
      if (param_1[0xb] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x3a));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x3a)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x3a)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0xb]);
      }
      iVar5 = *(int *)(param_1 + 0x2c);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x2e);
    }
    else {
      iVar5 = 0;
      if (param_1[4] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x2c));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x2c)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x2c)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[4]);
      }
      iVar5 = *(int *)(param_1 + 0x2e);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x30);
    }
    else {
      iVar5 = 0;
      if (param_1[5] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x2e));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x2e)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x2e)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[5]);
      }
      iVar5 = *(int *)(param_1 + 0x30);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x32);
    }
    else {
      iVar5 = 0;
      if (param_1[6] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x30));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x30)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x30)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[6]);
      }
      iVar5 = *(int *)(param_1 + 0x32);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar5 = 0;
      if (param_1[7] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x32));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x32)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x32)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[7]);
      }
      iVar5 = *(int *)(param_1 + 0x28);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x2a);
    }
    else {
      iVar5 = 0;
      if (param_1[2] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x28));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x28)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x28)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[2]);
      }
      iVar5 = *(int *)(param_1 + 0x2a);
    }
    if ((iVar5 != 0) && (iVar5 = 0, param_1[3] != 0)) {
      iVar3 = 0;
      do {
        lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x2a));
        plVar6 = param_2;
        iVar4 = param_3;
        if (0 < param_3) {
          do {
            if (lVar10 == *plVar6) {
              iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x2a)) + 0x10);
              (**(code **)(iVar9 + 0x1c))
                        (*(int *)(iVar3 + *(int *)(param_1 + 0x2a)) + (int)*(short *)(iVar9 + 0x18),
                         param_4);
            }
            iVar4 = iVar4 + -1;
            plVar6 = plVar6 + 1;
          } while (iVar4 != 0);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar5 * 4;
      } while (iVar5 < (int)(uint)param_1[3]);
    }
    iVar5 = 0;
    if (0 < *(int *)(DAT_0040f514 + 0x79a4)) {
      do {
        plVar6 = *(long **)(iVar5 * 4 + *(int *)(DAT_0040f514 + 0x79ac));
        if ((plVar6 != (long *)0x0) &&
           (lVar10 = *plVar6, plVar7 = param_2, iVar3 = param_3, 0 < param_3)) {
          do {
            if (lVar10 == *plVar7) {
              (**(code **)((int)plVar6[2] + 0x1c))
                        ((int)plVar6 + (int)*(short *)((int)plVar6[2] + 0x18),param_4);
            }
            iVar3 = iVar3 + -1;
            plVar7 = plVar7 + 1;
          } while (iVar3 != 0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(DAT_0040f514 + 0x79a4));
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar5 = *(int *)(param_1 + 0x46);
    }
    else {
      iVar5 = 0;
      if (param_1[0x12] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x44));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x44)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x44)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x12]);
      }
      iVar5 = *(int *)(param_1 + 0x46);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x48);
    }
    else {
      iVar5 = 0;
      if (param_1[0x13] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x46));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x46)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x46)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x13]);
      }
      iVar5 = *(int *)(param_1 + 0x48);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x4a);
    }
    else {
      iVar5 = 0;
      if (param_1[0x14] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x48));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x48)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x48)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x14]);
      }
      iVar5 = *(int *)(param_1 + 0x4a);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar5 = 0;
      if (param_1[0x15] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x4a));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x4a)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x4a)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x15]);
      }
      iVar5 = *(int *)(param_1 + 0x4c);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x4e);
    }
    else {
      iVar5 = 0;
      if (param_1[0x16] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x4c));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x4c)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x4c)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x16]);
      }
      iVar5 = *(int *)(param_1 + 0x4e);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x50);
    }
    else {
      iVar5 = 0;
      if (param_1[0x17] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x4e));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x4e)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x4e)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x17]);
      }
      iVar5 = *(int *)(param_1 + 0x50);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x52);
    }
    else {
      iVar5 = 0;
      if (param_1[0x10] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x50));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x50)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x50)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x10]);
      }
      iVar5 = *(int *)(param_1 + 0x52);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x54);
    }
    else {
      iVar5 = 0;
      if (param_1[0x11] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x52));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x52)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x52)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x11]);
      }
      iVar5 = *(int *)(param_1 + 0x54);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x56);
    }
    else {
      iVar5 = 0;
      if (param_1[0x18] != 0) {
        iVar3 = 0;
        do {
          if (*(long **)(iVar3 + *(int *)(param_1 + 0x54)) == (long *)0x0) {
            uVar1 = param_1[0x18];
          }
          else {
            lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x54));
            plVar6 = param_2;
            iVar4 = param_3;
            if (0 < param_3) {
              do {
                if (lVar10 == *plVar6) {
                  iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x54)) + 0x10);
                  (**(code **)(iVar9 + 0x1c))
                            (*(int *)(iVar3 + *(int *)(param_1 + 0x54)) +
                             (int)*(short *)(iVar9 + 0x18),param_4);
                }
                iVar4 = iVar4 + -1;
                plVar6 = plVar6 + 1;
              } while (iVar4 != 0);
            }
            uVar1 = param_1[0x18];
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)uVar1);
      }
      iVar5 = *(int *)(param_1 + 0x56);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar5 = 0;
      if (param_1[0x19] != 0) {
        iVar3 = 0;
        do {
          if (*(long **)(iVar3 + *(int *)(param_1 + 0x56)) == (long *)0x0) {
            uVar1 = param_1[0x19];
          }
          else {
            lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x56));
            plVar6 = param_2;
            iVar4 = param_3;
            if (0 < param_3) {
              do {
                if (lVar10 == *plVar6) {
                  iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x56)) + 0x10);
                  (**(code **)(iVar9 + 0x1c))
                            (*(int *)(iVar3 + *(int *)(param_1 + 0x56)) +
                             (int)*(short *)(iVar9 + 0x18),param_4);
                }
                iVar4 = iVar4 + -1;
                plVar6 = plVar6 + 1;
              } while (iVar4 != 0);
            }
            uVar1 = param_1[0x19];
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)uVar1);
      }
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x5a);
    }
    else {
      iVar5 = 0;
      if (param_1[0x1a] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x58));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x58)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x58)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x1a]);
      }
      iVar5 = *(int *)(param_1 + 0x5a);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar5 = 0;
      if (param_1[0x1b] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x5a));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x5a)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x5a)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x1b]);
      }
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x5e);
    }
    else {
      iVar5 = 0;
      if (param_1[0x1c] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x5c));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x5c)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x5c)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x1c]);
      }
      iVar5 = *(int *)(param_1 + 0x5e);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x60);
    }
    else {
      iVar5 = 0;
      if (param_1[0x1d] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x5e));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x5e)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x5e)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x1d]);
      }
      iVar5 = *(int *)(param_1 + 0x60);
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x62);
    }
    else {
      iVar5 = 0;
      if (param_1[0x1e] != 0) {
        iVar3 = 0;
        do {
          lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x60));
          plVar6 = param_2;
          iVar4 = param_3;
          if (0 < param_3) {
            do {
              if (lVar10 == *plVar6) {
                iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x60)) + 0x10);
                (**(code **)(iVar9 + 0x1c))
                          (*(int *)(iVar3 + *(int *)(param_1 + 0x60)) +
                           (int)*(short *)(iVar9 + 0x18),param_4);
              }
              iVar4 = iVar4 + -1;
              plVar6 = plVar6 + 1;
            } while (iVar4 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar5 * 4;
        } while (iVar5 < (int)(uint)param_1[0x1e]);
      }
      iVar5 = *(int *)(param_1 + 0x62);
    }
    if ((iVar5 != 0) && (iVar5 = 0, param_1[0x1f] != 0)) {
      iVar3 = 0;
      do {
        lVar10 = **(long **)(iVar3 + *(int *)(param_1 + 0x62));
        plVar6 = param_2;
        iVar4 = param_3;
        if (0 < param_3) {
          do {
            if (lVar10 == *plVar6) {
              iVar9 = *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x62)) + 0x10);
              (**(code **)(iVar9 + 0x1c))
                        (*(int *)(iVar3 + *(int *)(param_1 + 0x62)) + (int)*(short *)(iVar9 + 0x18),
                         param_4);
            }
            iVar4 = iVar4 + -1;
            plVar6 = plVar6 + 1;
          } while (iVar4 != 0);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar5 * 4;
      } while (iVar5 < (int)(uint)param_1[0x1f]);
    }
    iVar5 = DAT_0040f4e4;
    iVar4 = DAT_0040f4e4 + 0x5804;
    iVar3 = 0;
    do {
      iVar9 = iVar3 + 1;
      if ((*(char *)(iVar4 + iVar3) != '\0') &&
         (lVar10 = *(long *)(iVar3 * 0x160 + iVar5), 0 < param_3)) {
        iVar8 = iVar3 * 0x160 + iVar5;
        plVar6 = param_2;
        iVar3 = param_3;
        do {
          if (lVar10 == *plVar6) {
            iVar2 = *(int *)(iVar8 + 0x10);
            (**(code **)(iVar2 + 0x1c))(iVar8 + *(short *)(iVar2 + 0x18),param_4);
          }
          iVar3 = iVar3 + -1;
          plVar6 = plVar6 + 1;
        } while (iVar3 != 0);
      }
      iVar3 = iVar9;
    } while (iVar9 < 0x40);
  }
  return;
}


// ==== FUN_00169898 @ 00169898 ====

long * FUN_00169898(ushort *param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x26);
  }
  else {
    iVar1 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = iVar1 + 1;
        if (param_2 == *(long *)*puVar2) {
          return (long *)*puVar2;
        }
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)(uint)*param_1);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x26);
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = 0;
    if (param_1[1] != 0) {
      do {
        iVar1 = iVar1 + 1;
        if (param_2 == *(long *)*puVar2) {
          return (long *)*puVar2;
        }
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)(uint)param_1[1]);
    }
  }
  return (long *)0x0;
}


// ==== FUN_00169920 @ 00169920 ====

long * FUN_00169920(int param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x70);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x74);
  }
  else {
    iVar1 = 0;
    if (*(ushort *)(param_1 + 0x14) != 0) {
      do {
        iVar1 = iVar1 + 1;
        if (param_2 == *(long *)*puVar2) {
          return (long *)*puVar2;
        }
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x14));
    }
    puVar2 = *(undefined4 **)(param_1 + 0x74);
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = 0;
    if (*(ushort *)(param_1 + 0x16) != 0) {
      do {
        iVar1 = iVar1 + 1;
        if (param_2 == *(long *)*puVar2) {
          return (long *)*puVar2;
        }
        puVar2 = puVar2 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x16));
    }
  }
  return (long *)0x0;
}


// ==== FUN_001699a8 @ 001699a8 ====

void FUN_001699a8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x380);
  uVar4 = 1 << (uVar1 & 0x1f);
  if ((*(int *)(param_1 + 0x70) != 0) && (iVar3 = 0, *(short *)(param_1 + 0x14) != 0)) {
    iVar2 = *(int *)(param_1 + 0x70);
    while( true ) {
      iVar2 = *(int *)(iVar3 * 4 + iVar2);
      if ((*(uint *)(iVar2 + 0x84) & uVar4) != 0) {
        FUN_00177ee8(iVar2 + 0x20,uVar1,0);
      }
      iVar3 = iVar3 + 1;
      if ((int)(uint)*(ushort *)(param_1 + 0x14) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0x70);
    }
  }
  if ((*(int *)(param_1 + 0x74) != 0) && (iVar3 = 0, *(short *)(param_1 + 0x16) != 0)) {
    iVar2 = *(int *)(param_1 + 0x74);
    while( true ) {
      iVar2 = *(int *)(iVar3 * 4 + iVar2);
      if ((*(uint *)(iVar2 + 0x84) & uVar4) != 0) {
        FUN_00177ee8(iVar2 + 0x20,uVar1,0);
      }
      iVar3 = iVar3 + 1;
      if ((int)(uint)*(ushort *)(param_1 + 0x16) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0x74);
    }
  }
  return;
}


// ==== FUN_00169aa0 @ 00169aa0 ====

void FUN_00169aa0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(short *)(param_1 + 0x14) != 0) {
    iVar2 = *(int *)(param_1 + 0x70);
    while( true ) {
      FUN_001626d0(*(undefined4 *)(uVar3 * 4 + iVar2));
      uVar3 = uVar3 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x14) <= uVar3) break;
      iVar2 = *(int *)(param_1 + 0x70);
    }
  }
  uVar3 = 0;
  if (*(short *)(param_1 + 0x16) != 0) {
    iVar2 = *(int *)(param_1 + 0x74);
    while( true ) {
      FUN_001626d0(*(undefined4 *)(uVar3 * 4 + iVar2));
      uVar3 = uVar3 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x16) <= uVar3) break;
      iVar2 = *(int *)(param_1 + 0x74);
    }
  }
  uVar3 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    while( true ) {
      iVar2 = *(int *)(uVar3 * 4 + iVar2);
      iVar1 = *(int *)(iVar2 + 0x10);
      (**(code **)(iVar1 + 0x2c))(iVar2 + *(short *)(iVar1 + 0x28));
      uVar3 = uVar3 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x38) <= uVar3) break;
      iVar2 = *(int *)(param_1 + 0xb8);
    }
  }
  return;
}


// ==== FUN_00169b88 @ 00169b88 ====

void FUN_00169b88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar2 = *(int *)(param_1 + 0xd0);
    while( true ) {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(*(int *)(iVar1 + iVar2) + 0x11c) = 0;
      if ((int)(uint)*(ushort *)(param_1 + 0x44) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0xd0);
    }
  }
  return;
}


