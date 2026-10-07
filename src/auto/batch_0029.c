// ==== FUN_002803f8 @ 002803f8 ====

void FUN_002803f8(void)

{
  return;
}


// ==== FUN_00280400 @ 00280400 ====

void FUN_00280400(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = (undefined4)param_2;
  auVar4 = _qmtc2(uVar1);
  iVar2 = (int)param_1;
  auVar3 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
  auVar3 = _vsub(auVar3,auVar4);
  auVar3 = _sqc2(auVar3);
  *(undefined1 (*) [16])(iVar2 + 0x50) = auVar3;
  if (param_3 != 0) {
    FUN_00280448(param_1,uVar1);
  }
  *(undefined4 *)(iVar2 + 0x30) = uVar1;
  *(int *)(iVar2 + 0x34) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(iVar2 + 0x38) = in_a1_udw;
  *(undefined4 *)(iVar2 + 0x3c) = in_register_0000005c;
  return;
}


// ==== FUN_00280448 @ 00280448 ====

void FUN_00280448(float param_1,float *param_2,undefined4 param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar1 = _qmtc2(param_3);
  auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xc));
  if (0x37800000 < ((uint)(param_1 - *param_2) & 0x7f800000)) {
    auVar2 = _vsub(auVar1,auVar2);
    auVar4 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
    auVar3 = _vaddbc(in_vf0,in_vf0);
    auVar1 = _qmtc2(1.0 / (param_1 - *param_2));
    auVar2 = _vmulbc(auVar2,auVar1);
    auVar1 = _vsub(auVar2,auVar4);
    auVar1 = _vmul(auVar1,auVar1);
    _vaddabc(auVar1,auVar1);
    auVar1 = _vmaddbc(auVar3,auVar1);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar1);
    auVar1 = _vaddbc(in_vf0,in_vf0);
    uVar5 = _vwaitq();
    auVar1 = _vmulq(auVar1,uVar5);
    auVar1 = _qmfc2(auVar1._0_4_);
    if (100.0 < auVar1._0_4_) {
      auVar2 = _vmove(auVar4);
    }
    auVar1 = _sqc2(auVar2);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar1;
  }
  return;
}


// ==== FUN_00280500 @ 00280500 ====

void FUN_00280500(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    *param_1 = 0;
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 1;
  } while (uVar1 < 2);
  return;
}


// ==== FUN_00280528 @ 00280528 ====

undefined4 FUN_00280528(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  param_1[2] = param_2;
  if (param_2 != 0) {
    iVar1 = *param_1;
    uVar2 = 0;
    while( true ) {
      param_1 = param_1 + 1;
      (**(code **)(*(int *)(iVar1 + 0x60) + 0xc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x60) + 8),uVar2);
      if (param_2 <= uVar2 + 1) break;
      iVar1 = *param_1;
      uVar2 = uVar2 + 1;
    }
  }
  return 1;
}


// ==== FUN_002805a0 @ 002805a0 ====

void FUN_002805a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2[2] != 0) {
    iVar1 = *param_2;
    piVar2 = param_2;
    while( true ) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
      (**(code **)(*(int *)(iVar1 + 0x60) + 0x1c))
                (param_1,iVar1 + *(short *)(*(int *)(iVar1 + 0x60) + 0x18));
      if ((uint)param_2[2] <= uVar3) break;
      iVar1 = *piVar2;
    }
  }
  return;
}


// ==== FUN_00280628 @ 00280628 ====

void FUN_00280628(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    if (*param_1 != 0) {
      FUN_00282c18(*param_1);
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  } while (uVar1 < 2);
  return;
}


// ==== FUN_00280680 @ 00280680 ====

undefined4 FUN_00280680(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}


// ==== FUN_00280748 @ 00280748 ====

void FUN_00280748(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_002855a8(iVar1 + 0xb308,param_2 + 4);
  FUN_0027fe70(param_1,param_2 + 0x34);
  FUN_00280d70(iVar1 + 0xcb94);
  *(undefined4 *)(iVar1 + 0xcb98) = 1;
  *(undefined1 *)(iVar1 + 0xcb9e) = 0;
  return;
}


// ==== FUN_002807b0 @ 002807b0 ====

void FUN_002807b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_00281620(param_4 + 0xb308);
  FUN_002805a0(param_3,param_4 + 0xcb7c);
  return;
}


// ==== FUN_00280848 @ 00280848 ====

void FUN_00280848(int param_1)

{
  FUN_00281948(param_1 + 0xb308,0);
  *(undefined1 *)(param_1 + 0xcb9e) = 0;
  return;
}


// ==== FUN_002808a0 @ 002808a0 ====

void FUN_002808a0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xcba0) + 0x24))
            (param_1 + *(short *)(*(int *)(param_1 + 0xcba0) + 0x20));
  FUN_002817c8(param_1 + 0xb308);
  (**(code **)(*(int *)(param_1 + 0xcba0) + 0x2c))
            (param_1 + *(short *)(*(int *)(param_1 + 0xcba0) + 0x28));
  return;
}


// ==== FUN_00280908 @ 00280908 ====

void FUN_00280908(int *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb);
  if (bVar1 == 1) {
    if (param_2 != 1) {
      *(undefined1 *)(param_1 + 0xb) = 3;
      *(char *)((int)param_1 + 0x2d) = '\x05' - *(char *)((int)param_1 + 0x2d);
    }
  }
  else if (bVar1 < 2) {
    if (((bVar1 == 0) &&
        (lVar2 = (**(code **)(*param_1 + 0x24))((int)param_1 + (int)*(short *)(*param_1 + 0x20)),
        lVar2 != 0)) && (param_2 == 1)) {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
  }
  else if (bVar1 == 2) {
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 3;
    }
  }
  else if ((bVar1 == 3) && (param_2 != 0)) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(char *)((int)param_1 + 0x2d) = '\x05' - *(char *)((int)param_1 + 0x2d);
  }
  return;
}


// ==== FUN_00280a08 @ 00280a08 ====

void FUN_00280a08(undefined4 *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  uVar2 = ZEXT48(param_1);
  *param_1 = 0;
  while( true ) {
    *(undefined1 *)((int)uVar2 + 8) = 0;
    puVar1 = (undefined4 *)((int)uVar2 + 0xc);
    uVar2 = (ulong)(int)puVar1;
    if ((long)(int)(param_1 + 0x90) <= (long)uVar2) break;
    *puVar1 = 0;
  }
  param_1[0x90] = 0;
  return;
}


// ==== FUN_00280a38 @ 00280a38 ====

undefined4 FUN_00280a38(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  param_1[0x90] = (int)param_3;
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < param_3) {
    do {
      iVar1 = *param_2;
      iVar3 = iVar3 + 1;
      piVar2[1] = 0;
      param_2 = param_2 + 1;
      *piVar2 = iVar1;
      *(undefined1 *)(iVar1 + 0x34) = 1;
      piVar2 = piVar2 + 3;
    } while (iVar3 < param_1[0x90]);
  }
  return 1;
}


// ==== FUN_00280a80 @ 00280a80 ====

void FUN_00280a80(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = param_1;
  if (0 < (int)param_1[0x90]) {
    do {
      if (*(char *)(puVar3 + 2) == '\0') {
        iVar1 = param_1[0x90];
      }
      else {
        puVar3[1] = puVar3[1] + 1;
        if (*(char *)(puVar3 + 2) == '\0') {
          iVar1 = param_1[0x90];
        }
        else {
          lVar2 = FUN_002842e8(*puVar3);
          if (lVar2 == 0) {
            *(undefined1 *)(puVar3 + 2) = 0;
            puVar3[1] = 0;
            iVar1 = param_1[0x90];
          }
          else {
            iVar1 = param_1[0x90];
          }
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 < iVar1);
  }
  return;
}


// ==== FUN_00280b10 @ 00280b10 ====

undefined4 FUN_00280b10(int *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1;
  if (0 < param_1[0x90]) {
    do {
      if (*piVar3 == 0) {
LAB_00280b64:
        FUN_00388e30(piVar3,0);
        bVar1 = true;
      }
      else {
        lVar2 = FUN_00284298();
        if (lVar2 != 0) {
          *piVar3 = 0;
          goto LAB_00280b64;
        }
        bVar1 = false;
      }
      if (!bVar1) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar4 < param_1[0x90]);
  }
  param_1[0x90] = 0;
  return 1;
}


// ==== FUN_00280bc0 @ 00280bc0 ====

int FUN_00280bc0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  uVar4 = 0;
  iVar3 = 0;
  piVar1 = param_1 + 0x90;
  piVar8 = (int *)0x0;
  piVar6 = (int *)0x0;
  if (0 < *piVar1) {
    do {
      if ((char)param_1[2] == '\0') {
        uVar5 = uVar4;
        piVar6 = param_1;
        piVar7 = piVar8;
        if (*param_1 != 0) break;
      }
      else {
        uVar2 = param_1[1];
        uVar5 = uVar2;
        piVar7 = param_1;
        if (((uVar2 <= uVar4) && (uVar5 = uVar4, piVar7 = piVar8, piVar8 == (int *)0x0)) &&
           (uVar2 == 0)) {
          uVar5 = 0;
          piVar7 = param_1;
        }
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 3;
      uVar4 = uVar5;
      piVar6 = (int *)0x0;
      piVar8 = piVar7;
    } while (iVar3 < *piVar1);
  }
  if (piVar6 == (int *)0x0) {
    iVar3 = 0;
    if (piVar8 != (int *)0x0) {
      FUN_00284298(*piVar8);
      iVar3 = *piVar8;
      *(undefined1 *)(piVar8 + 2) = 1;
      piVar8[1] = 0;
    }
  }
  else {
    iVar3 = *piVar6;
    *(undefined1 *)(piVar6 + 2) = 1;
    piVar6[1] = 0;
  }
  return iVar3;
}


// ==== FUN_00280c90 @ 00280c90 ====

void FUN_00280c90(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < param_1[0x90]) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined1 *)(*piVar1 + 0x35) = param_2;
      piVar1 = piVar1 + 3;
    } while (iVar2 < param_1[0x90]);
  }
  return;
}


// ==== FUN_00280cd0 @ 00280cd0 ====

void FUN_00280cd0(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar4 = param_1;
  if (0 < (int)param_1[0x90]) {
    do {
      uVar1 = *puVar4;
      lVar3 = FUN_00388e40(uVar1);
      if (lVar3 == 0) {
        iVar2 = param_1[0x90];
      }
      else if (*(long *)lVar3 == param_2) {
        FUN_00284298(uVar1);
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[1] = 0;
        iVar2 = param_1[0x90];
      }
      else {
        iVar2 = param_1[0x90];
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < iVar2);
  }
  return;
}


// ==== FUN_00280d70 @ 00280d70 ====

void FUN_00280d70(void)

{
  uint uVar1;
  undefined1 auStack_50 [4];
  ushort uStack_4c;
  ushort uStack_4a;
  ushort uStack_48;
  ushort uStack_46;
  
  FUN_0026f3c0(auStack_50);
  uVar1 = (uint)uStack_46 + (uint)uStack_48 * 0x3c + (uint)uStack_4a * 0xe10 +
          (uint)uStack_4c * 0x34bc0;
  FUN_00382348(0x40eb30,0x2b9d6f8);
  DAT_0040eb34 = uVar1;
  DAT_0040eb30 = ~uVar1;
  return;
}


// ==== FUN_00280e10 @ 00280e10 ====

undefined4 FUN_00280e10(char param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (iVar2 - 0x41U < 0x1a) {
    cVar1 = -0x37;
  }
  else {
    if (0x19 < iVar2 - 0x61U) {
      if ((iVar2 - 0x30U & 0xff) < 10) {
        *param_2 = (char)(iVar2 - 0x30U);
        return 1;
      }
      return 0;
    }
    cVar1 = -0x57;
  }
  *param_2 = param_1 + cVar1;
  return 1;
}


// ==== FUN_00280e78 @ 00280e78 ====

void FUN_00280e78(undefined8 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0035cbc0(param_2,param_1);
  uVar1 = FUN_0035ccd8(param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*param_2 == '/') {
        *param_2 = '\\';
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


// ==== FUN_00280ee0 @ 00280ee0 ====

void FUN_00280ee0(int *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0xb);
  if (bVar1 == 1) {
    if (param_2 != 1) {
      *(undefined1 *)(param_1 + 0xb) = 3;
      *(char *)((int)param_1 + 0x2d) = '\x05' - *(char *)((int)param_1 + 0x2d);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      iVar2 = *param_1;
      goto LAB_00280fb4;
    }
    lVar3 = (**(code **)(*param_1 + 0x24))((int)param_1 + (int)*(short *)(*param_1 + 0x20));
    if (lVar3 == 0) {
      iVar2 = *param_1;
      goto LAB_00280fb4;
    }
    if (param_2 == 0) {
      iVar2 = *param_1;
      goto LAB_00280fb4;
    }
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  else if (bVar1 == 2) {
    if (param_2 != 0) {
      iVar2 = *param_1;
      goto LAB_00280fb4;
    }
    *(undefined1 *)(param_1 + 0xb) = 3;
  }
  else {
    if (bVar1 != 3) {
      iVar2 = *param_1;
      goto LAB_00280fb4;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      *(char *)((int)param_1 + 0x2d) = '\x05' - *(char *)((int)param_1 + 0x2d);
    }
  }
  iVar2 = *param_1;
LAB_00280fb4:
  (**(code **)(iVar2 + 0x9c))((int)param_1 + (int)*(short *)(iVar2 + 0x98));
  return;
}


// ==== FUN_00280fe0 @ 00280fe0 ====

void FUN_00280fe0(int param_1,long param_2)

{
  *(int *)(param_1 + 8) = (int)param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)param_2 + 8);
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ==== FUN_00281010 @ 00281010 ====

int FUN_00281010(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
LAB_00281060:
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 8) + 8) == *(int *)(param_1 + 0xc)) {
      lVar2 = FUN_002851e0();
      iVar1 = 1;
      if (lVar2 != 0) goto LAB_00281068;
      goto LAB_00281060;
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar1 = 0;
LAB_00281068:
  if (iVar1 != 0) {
    FUN_00285258(*(undefined4 *)(param_1 + 8),param_2);
  }
  return iVar1;
}


// ==== FUN_002810a0 @ 002810a0 ====

int FUN_002810a0(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 8) == *(int *)(param_1 + 0xc)) {
    lVar2 = FUN_002851e0();
    iVar1 = 1;
    if (lVar2 != 0) goto LAB_002810f4;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar1 = 0;
LAB_002810f4:
  if (iVar1 != 0) {
    FUN_00285190(*(undefined4 *)(param_1 + 8));
  }
  return iVar1;
}


// ==== FUN_00281120 @ 00281120 ====

undefined8 FUN_00281120(int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 8) + 8) == *(int *)(param_1 + 0xc)) {
    lVar2 = FUN_002851e0();
    bVar1 = true;
    if (lVar2 != 0) goto LAB_00281170;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  bVar1 = false;
LAB_00281170:
  uVar3 = 0;
  if (bVar1) {
    uVar3 = FUN_002851e0(*(undefined4 *)(param_1 + 8));
  }
  return uVar3;
}


// ==== FUN_00281198 @ 00281198 ====

void FUN_00281198(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x46abe000;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  return;
}


// ==== FUN_002811e8 @ 002811e8 ====

int FUN_002811e8(int param_1)

{
  return param_1 * 8 + 0x49a858;
}


// ==== FUN_00281200 @ 00281200 ====

void FUN_00281200(float param_1,int param_2)

{
  if (0.0 < param_1) {
    *(float *)(param_2 + 0x1c) = param_1;
    *(float *)(param_2 + 0x20) = param_1;
    *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) | 4;
  }
  return;
}


// ==== FUN_00281238 @ 00281238 ====

undefined8 FUN_00281238(undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 in_vf0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (((((*(int *)(param_2 + 0xa4) >> 0xc & 1U) == 0) ||
       (uVar3 = 1, *(char *)(param_2 + 0xa9) == '\0')) &&
      ((uVar1 = *(int *)(param_2 + 0xa4) >> 3, (uVar1 & 1) == 0 ||
       (uVar3 = 0, 0x37800000 < (*(uint *)(param_2 + 0x54) & 0x7f800000))))) &&
     ((uVar3 = 1, param_3 != 0 && (uVar3 = 1, (uVar1 & 1) != 0)))) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x50) + 0x10);
    lVar4 = (**(code **)(iVar2 + 0xc))(*(int *)(param_2 + 0x50) + (int)*(short *)(iVar2 + 8));
    uVar3 = 1;
    if ((lVar4 != 0) && (uVar3 = 1, (*(byte *)(param_2 + 0xa4) & 1) != 0)) {
      iVar2 = *(int *)((int)param_3 + 0xc);
      auVar7 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
      auVar5 = _qmfc2(auVar7._0_4_);
      auVar7 = _sqc2(auVar7);
      iVar2 = (**(code **)(iVar2 + 0x34))((int)param_3 + (int)*(short *)(iVar2 + 0x30),auVar5._0_8_)
      ;
      auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
      auVar8 = _vaddbc(in_vf0,in_vf0);
      auVar7 = _lqc2(auVar7);
      auVar7 = _vsub(auVar7,auVar5);
      auVar7 = _vmul(auVar7,auVar7);
      _vaddabc(auVar7,auVar7);
      auVar7 = _vmaddbc(auVar8,auVar7);
      auVar7 = _qmfc2(auVar7._0_4_);
      fVar6 = DAT_004431f0;
      if ((*(int *)(param_2 + 0xa4) >> 9 & 1U) != 0) {
        fVar6 = *(float *)(param_2 + 0x70);
      }
      uVar3 = 0;
      if (auVar7._0_4_ <= fVar6 * fVar6) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// ==== FUN_00281388 @ 00281388 ====

void FUN_00281388(undefined4 *param_1)

{
  param_1[1] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}


// ==== FUN_002813a0 @ 002813a0 ====

void FUN_002813a0(int param_1)

{
  FUN_00281388();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ==== FUN_002813d0 @ 002813d0 ====

void FUN_002813d0(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  
  if (0.0 <= param_2[4]) {
    if (0.0 < param_2[3]) {
      pfVar1 = (float *)param_2[2];
      fVar3 = 1.0 - param_2[4] / param_2[3];
      *param_3 = *param_2 + (*pfVar1 - *param_2) * fVar3;
      param_3[1] = param_2[1] + (pfVar1[1] - param_2[1]) * fVar3;
      param_2[4] = param_2[4] - param_1;
      return;
    }
    puVar2 = (undefined8 *)param_2[2];
  }
  else {
    puVar2 = (undefined8 *)param_2[2];
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)param_3 = *puVar2;
  }
  return;
}


// ==== FUN_00281478 @ 00281478 ====

void FUN_00281478(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined4 *puVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uStack_100;
  undefined4 auStack_f8 [38];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  auVar12 = _pextlw(0,0);
  auVar8 = _pextlw(0,0x3f800000);
  auVar14 = _pextlw(0x3f800000,auVar12._0_8_);
  auVar9 = _pextlw(0,auVar8._0_8_);
  auVar8 = _pextlw(0x3f800000,0);
  auVar8 = _pextlw(0,auVar8._0_8_);
  auVar12 = _pextlw(0,auVar12._0_8_);
  auStack_f8[0x1a] = 0x42c80000;
  auStack_f8[0x15] = 0x46bb8000;
  auStack_f8[0x13] = 0x3e000000;
  uStack_100._0_4_ = auVar9._0_4_;
  uStack_100._4_4_ = auVar9._4_4_;
  auStack_f8[0] = auVar9._8_4_;
  auStack_f8[1] = auVar9._12_4_;
  auStack_f8[2] = auVar14._0_4_;
  auStack_f8[3] = auVar14._4_4_;
  auStack_f8[4] = auVar14._8_4_;
  auStack_f8[5] = auVar14._12_4_;
  auStack_f8[6] = auVar8._0_4_;
  auStack_f8[7] = auVar8._4_4_;
  auStack_f8[8] = auVar8._8_4_;
  auStack_f8[9] = auVar8._12_4_;
  auStack_f8[10] = auVar12._0_4_;
  auStack_f8[0xb] = auVar12._4_4_;
  auStack_f8[0xc] = auVar12._8_4_;
  auStack_f8[0xd] = auVar12._12_4_;
  auStack_f8[0x1f] = 0x3f000000;
  auStack_f8[0x22] = 0x3f800000;
  uStack_50 = auStack_f8[10];
  uStack_4c = auStack_f8[0xb];
  uStack_48 = auStack_f8[0xc];
  uStack_44 = auStack_f8[0xd];
  auStack_f8[0x1d] = 0;
  auStack_f8[0x1c] = 0;
  auStack_f8[0x17] = 0x3f800000;
  uStack_57 = 0;
  uStack_58 = 0;
  uStack_60._0_4_ = 0;
  auStack_f8[0x1b] = 0x3f800000;
  auStack_f8[0x19] = 0;
  auStack_f8[0x18] = 0;
  auStack_f8[0x16] = 0;
  auStack_f8[0x14] = 0x3f800000;
  auStack_f8[0x12] = 0;
  auStack_f8[0xe] = auStack_f8[10];
  auStack_f8[0xf] = auStack_f8[0xb];
  auStack_f8[0x10] = auStack_f8[0xc];
  auStack_f8[0x11] = auStack_f8[0xd];
  auStack_f8[0x1e] = 0x3f000000;
  uStack_56 = 0;
  auStack_f8[0x20] = 0x3f800000;
  auStack_f8[0x21] = 0x3f800000;
  auStack_f8[0x23] = 0;
  auStack_f8[0x24] = 0;
  auStack_f8[0x25] = 0;
  uStack_60._4_4_ = 0xffffff;
  uStack_55 = 0;
  uStack_53 = 0;
  uStack_54 = 0;
  puVar11 = &uStack_100;
  puVar6 = &DAT_00443180;
  do {
    puVar13 = puVar6;
    puVar10 = puVar11;
    uVar15 = *(undefined4 *)((int)puVar10 + 4);
    uVar16 = *(undefined4 *)(puVar10 + 1);
    uVar1 = *(undefined4 *)((int)puVar10 + 0xc);
    uVar2 = *(undefined4 *)(puVar10 + 2);
    uVar3 = *(undefined4 *)((int)puVar10 + 0x14);
    uVar4 = *(undefined4 *)(puVar10 + 3);
    uVar5 = *(undefined4 *)((int)puVar10 + 0x1c);
    *puVar13 = *(undefined4 *)puVar10;
    puVar13[1] = uVar15;
    puVar13[2] = uVar16;
    puVar13[3] = uVar1;
    puVar13[4] = uVar2;
    puVar13[5] = uVar3;
    puVar13[6] = uVar4;
    puVar13[7] = uVar5;
    puVar11 = puVar10 + 4;
    puVar6 = puVar13 + 8;
  } while (puVar11 != &uStack_60);
  uVar7 = *puVar11;
  uVar15 = *(undefined4 *)(puVar10 + 5);
  uVar16 = *(undefined4 *)((int)puVar10 + 0x2c);
  uVar17 = 0;
  puVar13[8] = (int)uVar7;
  puVar13[9] = (int)((ulong)uVar7 >> 0x20);
  puVar13[10] = uVar15;
  puVar13[0xb] = uVar16;
  do {
    uVar7 = FUN_002811e8(uVar17);
    uVar17 = uVar17 + 1;
    FUN_00281388(uVar7);
    iVar18 = param_1 + 0x1634;
  } while (uVar17 < 0x14);
  uVar17 = 0;
  do {
    uVar17 = uVar17 + 1;
    FUN_002813a0(iVar18);
    iVar18 = iVar18 + 0x14;
  } while (uVar17 < 0x14);
  *(undefined4 *)(param_1 + 0x1834) = 0;
  *(undefined4 *)(param_1 + 0x1828) = 0;
  return;
}


// ==== FUN_00281620 @ 00281620 ====

void FUN_00281620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = (int)param_6;
  DAT_003c0e0c = param_2;
  DAT_003c0e10 = param_1;
  *(undefined4 *)(iVar5 + 0x1830) = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar5 + iVar4 + 0xe00;
    FUN_00283670(param_1,param_2,param_3,param_4,param_5,iVar2,*(undefined4 *)(iVar5 + 0x1828));
    iVar4 = *(int *)(iVar4 + iVar5 + 0xe00);
    lVar1 = (**(code **)(iVar4 + 0x3c))(iVar2 + *(short *)(iVar4 + 0x38));
    if (lVar1 != 0) {
      iVar4 = *(int *)(iVar5 + 0x1830);
      *(char *)(iVar5 + 0x1804 + iVar4) = (char)uVar6;
      *(int *)(iVar5 + 0x1830) = iVar4 + 1;
    }
    uVar6 = uVar6 + 1 & 0xff;
    iVar4 = uVar6 * 0x3c;
  } while (uVar6 < 0x23);
  *(undefined4 *)(iVar5 + 0x182c) = 0;
  uVar6 = 0;
  iVar4 = 0;
  do {
    piVar3 = (int *)(iVar4 + iVar5);
    FUN_00284428(param_1,param_2,param_3,param_4,param_5,piVar3,*(undefined4 *)(iVar5 + 0x1828));
    lVar1 = (**(code **)(*piVar3 + 0x3c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x38));
    if (lVar1 != 0) {
      iVar4 = *(int *)(iVar5 + 0x182c);
      *(char *)(iVar5 + 0x17c4 + iVar4) = (char)uVar6;
      *(int *)(iVar5 + 0x182c) = iVar4 + 1;
    }
    uVar6 = uVar6 + 1 & 0xff;
    iVar4 = uVar6 * 0x38;
  } while (uVar6 < 0x40);
  FUN_00281ad8(param_4,param_6);
  return;
}


// ==== FUN_002817c8 @ 002817c8 ====

void FUN_002817c8(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xe00;
  do {
    FUN_00285190(param_1);
    param_1 = param_1 + 0x38;
  } while (param_1 < uVar1);
  return;
}


// ==== FUN_00281808 @ 00281808 ====

int * FUN_00281808(int param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)(param_1 + 0xe00);
  uVar3 = 0;
  do {
    lVar1 = (**(code **)(*piVar2 + 0x3c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x38));
    if (lVar1 != 0) {
      *(ushort *)(piVar2 + 0xc) = *(ushort *)(piVar2 + 0xc) | 1;
      return piVar2;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0xf;
  } while (uVar3 < 0x23);
  return (int *)0x0;
}


// ==== FUN_00281878 @ 00281878 ====

int FUN_00281878(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x182c) + -1;
  if (*(int *)(param_1 + 0x182c) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x182c) = iVar1;
  iVar1 = (uint)*(byte *)(param_1 + 0x17c4 + iVar1) * 0x38 + param_1;
  *(ushort *)(iVar1 + 0x30) = *(ushort *)(iVar1 + 0x30) | 1;
  return (uint)*(byte *)(param_1 + 0x17c4 + *(int *)(param_1 + 0x182c)) * 0x38 + param_1;
}


// ==== FUN_002818d0 @ 002818d0 ====

void FUN_002818d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00284298(param_2);
  *(ushort *)((int)param_2 + 0x30) = *(ushort *)((int)param_2 + 0x30) & 0xfffe;
  return;
}


// ==== FUN_00281908 @ 00281908 ====

void FUN_00281908(undefined8 param_1,undefined8 param_2)

{
  FUN_00285190(param_2);
  *(ushort *)((int)param_2 + 0x30) = *(ushort *)((int)param_2 + 0x30) & 0xfffe;
  return;
}


// ==== FUN_00281948 @ 00281948 ====

void FUN_00281948(undefined8 param_1,undefined8 param_2)

{
  FUN_002819e0();
  FUN_00281988(param_1,param_2);
  return;
}


// ==== FUN_00281988 @ 00281988 ====

void FUN_00281988(int param_1,undefined8 param_2)

{
  uint uVar1;
  
  param_1 = param_1 + 0xe00;
  uVar1 = 0;
  do {
    FUN_00280908(param_1,param_2);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x3c;
  } while (uVar1 < 0x23);
  return;
}


// ==== FUN_002819e0 @ 002819e0 ====

void FUN_002819e0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xe00;
  do {
    FUN_00280ee0(param_1,param_2);
    param_1 = param_1 + 0x38;
  } while (param_1 < uVar1);
  return;
}


// ==== FUN_00281a38 @ 00281a38 ====

void FUN_00281a38(undefined8 param_1,undefined8 param_2)

{
  FUN_002811e8(param_2);
  return;
}


// ==== FUN_00281a58 @ 00281a58 ====

void FUN_00281a58(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)FUN_00281a38();
  iVar2 = param_2 + param_3 * 0x14;
  *(undefined8 *)(param_3 * 0x14 + param_2 + 0x1634) = *puVar1;
  *(undefined4 *)(iVar2 + 0x163c) = param_4;
  *(undefined4 *)(iVar2 + 0x1640) = param_1;
  *(undefined4 *)(iVar2 + 0x1644) = param_1;
  return;
}


// ==== FUN_00281ad8 @ 00281ad8 ====

void FUN_00281ad8(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = (int)param_2 + 0x1634;
  do {
    uVar1 = FUN_00281a38(param_2,uVar3);
    uVar3 = uVar3 + 1;
    FUN_002813d0(param_1,iVar2,uVar1);
    iVar2 = iVar2 + 0x14;
  } while (uVar3 < 0x14);
  return;
}


// ==== FUN_00281b50 @ 00281b50 ====

int FUN_00281b50(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x182c) != 0) {
    iVar1 = *(int *)(param_1 + 0x182c) + -1;
    *(int *)(param_1 + 0x182c) = iVar1;
    iVar1 = (uint)*(byte *)(param_1 + iVar1 + 0x17c4) * 0x38 + param_1;
  }
  return iVar1;
}


// ==== FUN_00281b88 @ 00281b88 ====

void FUN_00281b88(undefined4 *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  uVar2 = ZEXT48(param_1);
  *param_1 = 0;
  while( true ) {
    *(undefined1 *)((int)uVar2 + 8) = 0;
    puVar1 = (undefined4 *)((int)uVar2 + 0xc);
    uVar2 = (ulong)(int)puVar1;
    if ((long)(int)(param_1 + 0x30) <= (long)uVar2) break;
    *puVar1 = 0;
  }
  param_1[0x30] = 0;
  return;
}


// ==== FUN_00281bb8 @ 00281bb8 ====

undefined4 FUN_00281bb8(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[0x30] = (int)param_3;
  iVar3 = 0;
  puVar2 = param_1;
  if (0 < param_3) {
    do {
      uVar1 = *param_2;
      iVar3 = iVar3 + 1;
      puVar2[1] = 0;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 3;
    } while (iVar3 < (int)param_1[0x30]);
  }
  return 1;
}


// ==== FUN_00281bf8 @ 00281bf8 ====

void FUN_00281bf8(int *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1;
  if (0 < param_1[0x30]) {
    do {
      if ((char)piVar3[2] == '\0') {
        iVar1 = param_1[0x30];
      }
      else {
        piVar3[1] = piVar3[1] + 1;
        if ((char)piVar3[2] == '\0') {
          iVar1 = param_1[0x30];
        }
        else {
          iVar1 = *(int *)*piVar3;
          lVar2 = (**(code **)(iVar1 + 0x24))(*piVar3 + (int)*(short *)(iVar1 + 0x20));
          if (lVar2 == 0) {
            *(undefined1 *)(piVar3 + 2) = 0;
            piVar3[1] = 0;
            iVar1 = param_1[0x30];
          }
          else {
            iVar1 = param_1[0x30];
          }
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar4 < iVar1);
  }
  return;
}


// ==== FUN_00281c98 @ 00281c98 ====

undefined4 FUN_00281c98(int *param_1)

{
  int *piVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x30]) {
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 == (int *)0x0) {
LAB_00281cf8:
        FUN_00388e48(piVar4,0);
        bVar2 = true;
      }
      else {
        lVar3 = (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18));
        if (lVar3 != 0) {
          *piVar4 = 0;
          goto LAB_00281cf8;
        }
        bVar2 = false;
      }
      if (!bVar2) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar5 < param_1[0x30]);
  }
  param_1[0x30] = 0;
  return 1;
}


// ==== FUN_00281d50 @ 00281d50 ====

int FUN_00281d50(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_1 + 0x30;
  piVar7 = (int *)0x0;
  uVar4 = 0;
  for (iVar2 = 0; piVar5 = (int *)0x0, iVar2 < *piVar1; iVar2 = iVar2 + 1) {
    if ((char)param_1[2] == '\x01') {
      piVar6 = param_1;
      uVar3 = param_1[1];
      if ((uint)param_1[1] < uVar4) {
        piVar6 = piVar7;
        uVar3 = uVar4;
      }
    }
    else {
      piVar5 = param_1;
      piVar6 = piVar7;
      uVar3 = uVar4;
      if (*param_1 != 0) break;
    }
    param_1 = param_1 + 3;
    piVar7 = piVar6;
    uVar4 = uVar3;
  }
  if (piVar5 == (int *)0x0) {
    if (piVar7 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)*piVar7;
      (**(code **)(iVar2 + 0x1c))(*piVar7 + (int)*(short *)(iVar2 + 0x18));
      iVar2 = *piVar7;
      *(undefined1 *)(piVar7 + 2) = 1;
      piVar7[1] = 0;
    }
  }
  else {
    iVar2 = *piVar5;
    *(undefined1 *)(piVar5 + 2) = 1;
    piVar5[1] = 0;
  }
  return iVar2;
}


// ==== FUN_00281e28 @ 00281e28 ====

void FUN_00281e28(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1;
  do {
    piVar1 = (int *)*piVar3;
    if ((piVar1 != (int *)0x0) &&
       ((**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18)),
       (char)piVar3[2] != '\0')) {
      *(undefined1 *)(piVar3 + 2) = 0;
      piVar3[1] = 0;
    }
    if (iVar4 < param_3) {
      iVar2 = *param_2;
      piVar3[1] = 0;
      *piVar3 = iVar2;
    }
    else {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    iVar4 = iVar4 + 1;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar4 < 0x10);
  param_1[0x30] = param_3;
  return;
}


// ==== FUN_00281ee0 @ 00281ee0 ====

void FUN_00281ee0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [10];
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_30;
  char acStack_2f [15];
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = uVar2;
  if (param_3 != 0) {
    FUN_002726d0(uVar2,auStack_40);
    lVar1 = FUN_00280e10(uStack_35,&uStack_30);
    if ((lVar1 == 0) || (lVar1 = FUN_00280e10(uStack_36,acStack_2f), lVar1 == 0)) {
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      *(undefined1 *)((int)param_1 + 0xc) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xc) = uStack_30;
      *(char *)((int)param_1 + 0xd) = acStack_2f[0] + -1;
    }
    uVar2 = FUN_00272580(*param_1,0,9);
    *param_1 = uVar2;
    return;
  }
  return;
}


// ==== FUN_00281f88 @ 00281f88 ====

void FUN_00281f88(undefined8 *param_1)

{
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 0;
  return;
}


// ==== FUN_00281fa0 @ 00281fa0 ====

float FUN_00281fa0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x34))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x30));
  fVar2 = (float)(**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
                           (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x28));
  return (float)iVar1 / fVar2;
}


// ==== FUN_00282008 @ 00282008 ====

void FUN_00282008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x1c;
  FUN_00274e40();
  iVar4 = iVar2 + 0x38;
  FUN_00274e40(iVar3);
  FUN_00274e40(iVar4);
  FUN_00274e68(param_1,param_2,param_3);
  FUN_00274f58(param_1,param_6);
  uVar1 = FUN_00274f80(param_1,param_4);
  FUN_00274e68(iVar3,uVar1,param_4);
  FUN_00274f58(iVar3,param_6);
  uVar1 = FUN_00274f80(param_1,param_5);
  FUN_00274e68(iVar4,uVar1,param_5);
  FUN_00274f58(iVar4,param_6);
  *(undefined4 *)(iVar2 + 0x54) = 0;
  return;
}


// ==== FUN_00282100 @ 00282100 ====

undefined4 FUN_00282100(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x54);
  if (iVar1 == 1) {
    FUN_00282170(param_1);
    *(undefined4 *)((int)param_1 + 0x54) = 1;
  }
  else if (iVar1 < 2) {
    if (iVar1 != 0) {
      return 0;
    }
  }
  else if (iVar1 != 2) {
    return 0;
  }
  return 1;
}


// ==== FUN_00282170 @ 00282170 ====

undefined4 FUN_00282170(int param_1)

{
  FUN_00274fc8(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = 2;
  return 1;
}


// ==== FUN_002821a8 @ 002821a8 ====

undefined8 FUN_002821a8(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_00274f80(param_1 + 0x1c);
  }
  else {
    uVar1 = 0;
    if (param_3 == 1) {
      uVar1 = FUN_00274f80(param_1 + 0x38);
    }
  }
  return uVar1;
}


// ==== FUN_002821f0 @ 002821f0 ====

void FUN_002821f0(int param_1)

{
  FUN_00274f60(param_1 + 0x38);
  return;
}


// ==== FUN_00282218 @ 00282218 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00282218(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined2 *)(param_1 + 0x486) = 0;
  *(undefined2 *)(param_1 + 0x400) = 0;
  param_1[0x485] = 0;
  puVar6 = param_1 + 0x401;
  iVar5 = 0x7f;
  puVar4 = param_1;
  do {
    uVar3 = DAT_0044323c;
    uVar2 = DAT_00443238;
    uVar1 = _DAT_00443230;
    iVar5 = iVar5 + -1;
    puVar4[4] = 0;
    *puVar4 = (int)uVar1;
    puVar4[1] = (int)((ulong)uVar1 >> 0x20);
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4[5] = 0xbf800000;
    *puVar6 = 0;
    puVar4 = puVar4 + 8;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar5);
  param_1 = param_1 + 0x484;
  iVar5 = 3;
  do {
    *param_1 = 0;
    iVar5 = iVar5 + -1;
    param_1 = param_1 + -1;
  } while (-1 < iVar5);
  return;
}


// ==== FUN_00282290 @ 00282290 ====

undefined4 FUN_00282290(int param_1,undefined4 *param_2,ushort param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x1204);
  for (uVar2 = (uint)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1214) = param_4;
  *(ushort *)(param_1 + 0x1218) = param_3;
  return 1;
}


// ==== FUN_002822c8 @ 002822c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002822c8(float param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  ushort uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined1 in_vf0 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 auStack_130 [12];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  uint uStack_8c;
  undefined1 uStack_87;
  
  puVar7 = param_4;
  puVar11 = auStack_130;
  do {
    puVar9 = puVar11;
    puVar6 = puVar7;
    uVar3 = *puVar6;
    uVar13 = *(undefined4 *)(puVar6 + 1);
    uVar14 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar15 = *(undefined4 *)(puVar6 + 2);
    uVar16 = *(undefined4 *)((int)puVar6 + 0x14);
    uVar17 = *(undefined4 *)(puVar6 + 3);
    uVar18 = *(undefined4 *)((int)puVar6 + 0x1c);
    *puVar9 = (int)uVar3;
    puVar9[1] = (int)((ulong)uVar3 >> 0x20);
    puVar9[2] = uVar13;
    puVar9[3] = uVar14;
    puVar9[4] = uVar15;
    puVar9[5] = uVar16;
    puVar9[6] = uVar17;
    puVar9[7] = uVar18;
    puVar7 = puVar6 + 4;
    puVar11 = puVar9 + 8;
  } while (puVar7 != param_4 + 0x14);
  iVar21 = (int)param_2;
  sVar1 = *(short *)(iVar21 + 0x1000);
  uVar12 = 0;
  fVar23 = *(float *)((int)param_4 + 0x54);
  lVar20 = 0;
  uVar3 = *puVar7;
  uVar13 = *(undefined4 *)(puVar6 + 5);
  uVar14 = *(undefined4 *)((int)puVar6 + 0x2c);
  puVar9[8] = (int)uVar3;
  puVar9[9] = (int)((ulong)uVar3 >> 0x20);
  puVar9[10] = uVar13;
  puVar9[0xb] = uVar14;
  if (0 < sVar1) {
    piVar10 = (int *)(iVar21 + 0x1004);
    piVar19 = piVar10;
    do {
      iVar2 = *piVar10;
      if (*(float *)(iVar2 + 0x14) <= param_1) {
        *(undefined4 *)(iVar2 + 0x14) = 0xbf800000;
      }
      else {
        *piVar19 = iVar2;
        uVar12 = uVar12 + 1;
        piVar19 = piVar19 + 1;
      }
      lVar20 = (long)((int)lVar20 + 1);
      piVar10 = piVar10 + 1;
    } while (lVar20 < *(short *)(iVar21 + 0x1000));
  }
  *(ushort *)(iVar21 + 0x1000) = uVar12;
  lVar20 = 0;
  if (0 < (int)((uint)uVar12 << 0x10)) {
    auVar26 = _qmtc2(param_3);
    auVar25 = _vaddbc(in_vf0,in_vf0);
    puVar11 = (undefined4 *)(iVar21 + 0x1004);
    pauVar8 = (undefined1 (*) [16])*puVar11;
    while( true ) {
      lVar20 = (long)((int)lVar20 + 1);
      puVar11 = puVar11 + 1;
      auVar24 = _lqc2(*pauVar8);
      auVar24 = _vsub(auVar24,auVar26);
      auVar24 = _vmul(auVar24,auVar24);
      _vaddabc(auVar24,auVar24);
      auVar24 = _vmaddbc(auVar25,auVar24);
      _vnop();
      _vnop();
      _vnop();
      _vsqrt(auVar24);
      auVar24 = _vaddbc(in_vf0,in_vf0);
      uVar13 = _vwaitq();
      auVar24 = _vmulq(auVar24,uVar13);
      auVar24 = _qmfc2(auVar24._0_4_);
      *(int *)pauVar8[1] = auVar24._0_4_;
      if (*(short *)(iVar21 + 0x1000) <= lVar20) break;
      pauVar8 = (undefined1 (*) [16])*puVar11;
    }
  }
  lVar20 = 0;
  FUN_002825a0(param_2);
  if (0 < *(short *)(iVar21 + 0x1218)) {
    fVar22 = 1.0;
    piVar19 = (int *)(iVar21 + 0x1204);
    do {
      if (piVar19[-0x80] == 0) {
        piVar10 = (int *)*piVar19;
LAB_00282528:
        lVar5 = (**(code **)(*piVar10 + 0x24))((int)piVar10 + (int)*(short *)(*piVar10 + 0x20));
        if (lVar5 == 1) {
          iVar2 = *(int *)*piVar19;
          (**(code **)(iVar2 + 0x1c))(*piVar19 + (int)*(short *)(iVar2 + 0x18));
          lVar5 = (long)*(short *)(iVar21 + 0x1218);
        }
        else {
          lVar5 = (long)*(short *)(iVar21 + 0x1218);
        }
      }
      else {
        if (*(float *)(piVar19[-0x80] + 0x14) < 0.0) {
          piVar10 = (int *)*piVar19;
          goto LAB_00282528;
        }
        puVar11 = (undefined4 *)piVar19[-0x80];
        fStack_dc = (float)puVar11[5] - param_1;
        if (fVar22 <= fStack_dc) {
          fStack_dc = fVar22;
        }
        fStack_dc = fVar23 * fStack_dc;
        uStack_e0 = *(undefined4 *)(iVar21 + 0x1214);
        uStack_8c = uStack_8c | 0xf;
        uStack_100 = *puVar11;
        uStack_fc = puVar11[1];
        uStack_f8 = puVar11[2];
        uStack_f4 = puVar11[3];
        uStack_f0 = (undefined4)_DAT_00443230;
        uStack_ec = (undefined4)((ulong)_DAT_00443230 >> 0x20);
        uStack_e8 = DAT_00443238;
        uStack_e4 = DAT_0044323c;
        iVar2 = *(int *)*piVar19;
        lVar5 = (**(code **)(iVar2 + 0x24))(*piVar19 + (int)*(short *)(iVar2 + 0x20));
        if (lVar5 == 1) {
          piVar10 = (int *)*piVar19;
          sVar1 = *(short *)(*piVar10 + 8);
          pcVar4 = *(code **)(*piVar10 + 0xc);
        }
        else {
          uStack_87 = 1;
          piVar10 = (int *)*piVar19;
          uStack_8c = uStack_8c | 0x1000;
          sVar1 = *(short *)(*piVar10 + 0x10);
          pcVar4 = *(code **)(*piVar10 + 0x14);
        }
        (*pcVar4)((int)piVar10 + (int)sVar1,auStack_130);
        lVar5 = (long)*(short *)(iVar21 + 0x1218);
      }
      lVar20 = (long)((int)lVar20 + 1);
      piVar19 = piVar19 + 1;
    } while (lVar20 < lVar5);
  }
  return;
}


// ==== FUN_002825a0 @ 002825a0 ====

void FUN_002825a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1 + 0x1004;
  if (1 < *(short *)(param_1 + 0x1000)) {
    iVar2 = 4;
    lVar5 = 1;
    do {
      piVar4 = (int *)(iVar6 + iVar2);
      iVar7 = (int)lVar5 + 1;
      iVar1 = *piVar4;
      piVar3 = (int *)(iVar2 + -4 + iVar6);
      do {
        iVar2 = (int)lVar5;
        lVar5 = (long)(iVar2 + -1);
        if (*(float *)(*piVar3 + 0x10) <= *(float *)(iVar1 + 0x10)) break;
        *piVar4 = *piVar3;
        piVar4 = piVar4 + -1;
        piVar3 = piVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (0 < lVar5);
      *(int *)(iVar6 + iVar2 * 4) = iVar1;
      iVar2 = iVar7 * 4;
      lVar5 = (long)iVar7;
    } while ((long)iVar7 < (long)*(short *)(param_1 + 0x1000));
  }
  return;
}


// ==== FUN_00282628 @ 00282628 ====

undefined4 FUN_00282628(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00282710();
  iVar2 = 3;
  puVar1 = (undefined4 *)(param_1 + 0x1210);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)(param_1 + 0x1218) = 0;
  return 1;
}


// ==== FUN_00282678 @ 00282678 ====

int FUN_00282678(undefined4 param_1,int param_2,undefined8 param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  iVar4 = 0;
  iVar2 = 0x10000;
  pfVar1 = (float *)(param_2 + 0x14);
  do {
    if (0x7f < iVar4) {
      iVar2 = -0x20;
      iVar4 = -1;
LAB_002826dc:
      puVar3 = (undefined4 *)(iVar2 + param_2);
      *puVar3 = (int)param_3;
      puVar3[1] = (int)((ulong)param_3 >> 0x20);
      puVar3[2] = in_a1_udw;
      puVar3[3] = in_register_0000005c;
      puVar3[5] = param_1;
      puVar3[4] = 0;
      *(undefined4 **)(param_2 + *(short *)(param_2 + 0x1000) * 4 + 0x1004) = puVar3;
      *(short *)(param_2 + 0x1000) = *(short *)(param_2 + 0x1000) + 1;
      return iVar4;
    }
    if (*pfVar1 < 0.0) {
      iVar2 = iVar4 << 5;
      goto LAB_002826dc;
    }
    pfVar1 = pfVar1 + 8;
    iVar4 = iVar2 >> 0x10;
    iVar2 = iVar2 + 0x10000;
  } while( true );
}


// ==== FUN_00282710 @ 00282710 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00282710(undefined4 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = param_1 + 0x481;
  iVar8 = 3;
  do {
    piVar1 = (int *)*piVar7;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18));
    }
    iVar8 = iVar8 + -1;
    piVar7 = piVar7 + 1;
  } while (-1 < iVar8);
  puVar6 = param_1 + 0x401;
  iVar8 = 0x7f;
  puVar5 = param_1;
  do {
    uVar4 = DAT_0044323c;
    uVar3 = DAT_00443238;
    uVar2 = _DAT_00443230;
    iVar8 = iVar8 + -1;
    puVar5[4] = 0;
    *puVar5 = (int)uVar2;
    puVar5[1] = (int)((ulong)uVar2 >> 0x20);
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    puVar5[5] = 0xbf800000;
    *puVar6 = 0;
    puVar5 = puVar5 + 8;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar8);
  *(undefined2 *)(param_1 + 0x400) = 0;
  return;
}


// ==== FUN_002827b8 @ 002827b8 ====

void FUN_002827b8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_00443244 == '\0') {
    DAT_00443240 = FUN_00313bf0(0);
    DAT_00443244 = '\x01';
  }
  FUN_0027fbc0(param_1);
  puVar1 = (undefined4 *)param_1;
  *(undefined1 *)((int)puVar1 + 0x102e) = 0;
  puVar1[0x40f] = 1;
  *puVar1 = 0;
  puVar1[0x40e] = 0;
  return;
}


// ==== FUN_00282828 @ 00282828 ====

undefined8
FUN_00282828(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x102e) == '\0') {
    uVar1 = FUN_002828a8(param_1,param_2,DAT_00443240,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_00282888 @ 00282888 ====

undefined4 FUN_00282888(void)

{
  FUN_00282ad8();
  return 1;
}


// ==== FUN_002828a8 @ 002828a8 ====

undefined4
FUN_002828a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)param_1;
  iVar1 = puVar4[0x40f];
  puVar5 = (undefined4 *)param_3;
  if (iVar1 != 2) {
    if (2 < iVar1) {
      if (iVar1 != 0x10) {
        if (iVar1 == 0x100) {
          return 1;
        }
        return 0;
      }
      lVar3 = FUN_00313b18(param_3,param_5);
      if (lVar3 == 0x70) {
        return 0;
      }
      if (lVar3 < 0x71) {
        if (lVar3 == 0x30) {
          return 0;
        }
        if (lVar3 == 0x50) {
          return 0;
        }
        uVar2 = *puVar5;
      }
      else if (lVar3 == 0x1000) {
        uVar2 = *puVar5;
      }
      else if (lVar3 < 0x1001) {
        if (lVar3 == 0x100) {
          puVar4[0x40f] = 0x100;
        }
        uVar2 = *puVar5;
      }
      else {
        uVar2 = *puVar5;
      }
      puVar4[0x40e] = uVar2;
      FUN_00282a40(param_1,param_8);
      *(undefined1 *)((int)puVar4 + 0x102e) = 1;
      FUN_00313c48(param_3);
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined1 *)((int)puVar4 + 0x102e) = 0;
    FUN_00313e88(param_4);
  }
  FUN_003139a8(param_2,*puVar4,puVar4[1],param_6,param_7,0,0x20000,param_3);
  FUN_0035cbc0(puVar4 + 0x3fc,param_2);
  if (puVar5[0xb] == 2) {
    puVar4[0x40f] = 2;
  }
  else if (puVar5[0xb] != 1) {
    puVar4[0x40f] = 0x10;
  }
  return 0;
}


// ==== FUN_00282a40 @ 00282a40 ====

void FUN_00282a40(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  uVar2 = FUN_003144a8(*(undefined4 *)(iVar6 + 0x1038));
  if (uVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar6 + 0x1038);
    iVar5 = iVar6 + 0x10;
    uVar4 = 0;
    while( true ) {
      uVar3 = FUN_00314488(uVar1,uVar4);
      FUN_00285818(iVar5,uVar3,param_2);
      if (uVar2 <= uVar4 + 1) break;
      uVar1 = *(undefined4 *)(iVar6 + 0x1038);
      iVar5 = iVar5 + 0x20;
      uVar4 = uVar4 + 1;
    }
  }
  *(uint *)(iVar6 + 0x1028) = uVar2;
  FUN_0027fbd8(param_1);
  return;
}


// ==== FUN_00282ad8 @ 00282ad8 ====

void FUN_00282ad8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1038) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1028) != 0) {
      iVar1 = param_1 + 0x10;
      do {
        uVar2 = uVar2 + 1;
        FUN_00285880(iVar1);
        iVar1 = iVar1 + 0x20;
      } while (uVar2 < *(uint *)(param_1 + 0x1028));
    }
    FUN_00313fd0(*(undefined4 *)(param_1 + 0x1038));
    *(undefined4 *)(param_1 + 0x1038) = 0;
  }
  *(undefined1 *)(param_1 + 0x102e) = 0;
  *(undefined4 *)(param_1 + 0x103c) = 1;
  return;
}


// ==== FUN_00282b60 @ 00282b60 ====

void FUN_00282b60(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0031a9a0(0,4,0,0);
  *(undefined4 *)((int)param_1 + 0x70) = uVar1;
  FUN_00280358(param_1);
  return;
}


// ==== FUN_00282ba0 @ 00282ba0 ====

undefined4 FUN_00282ba0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  FUN_0035c6ec(&uStack_40,0,0xc);
  iVar1 = *(int *)((int)param_1 + 0x70);
  *(undefined8 *)(iVar1 + 0x54) = uStack_40;
  *(undefined4 *)(iVar1 + 0x5c) = uStack_38;
  iVar1 = *(int *)((int)param_1 + 0x70);
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 2;
  FUN_00280360(param_1,param_2);
  return 1;
}


// ==== FUN_00282c18 @ 00282c18 ====

void FUN_00282c18(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x70);
  if (iVar1 != 0) {
    FUN_003110b0(iVar1,0,0);
    *(undefined4 *)((int)param_1 + 0x70) = 0;
  }
  FUN_002803f8(param_1);
  return;
}


// ==== FUN_00282e70 @ 00282e70 ====

void FUN_00282e70(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0031b540(4,0,0);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  *(undefined4 *)(*param_2 + 0x1420) = uVar1;
  *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x7c) = 0x3c23d70a;
  *(uint *)(*(int *)(iVar2 + 0x14) + 0x88) = *(uint *)(*(int *)(iVar2 + 0x14) + 0x88) | 0x10;
  FUN_003178b8(3);
  *(int *)(iVar2 + 0x10) = *param_2;
  FUN_00280500(param_1);
  return;
}


// ==== FUN_00282ef8 @ 00282ef8 ====

undefined4 FUN_00282ef8(int param_1)

{
  FUN_00280528();
  if (*(int *)(param_1 + 8) == 1) {
    FUN_003178b8(2);
  }
  else {
    FUN_003178b8(3);
  }
  return 1;
}


// ==== FUN_00282f48 @ 00282f48 ====

void FUN_00282f48(int param_1)

{
  FUN_00280628();
  FUN_003110b0(*(undefined4 *)(param_1 + 0x14),0,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// ==== FUN_00282f80 @ 00282f80 ====

void FUN_00282f80(int param_1,long param_2,int param_3)

{
  *(int *)(param_1 + (int)param_2 * 4) = param_3;
  FUN_00317888(*(undefined4 *)(param_3 + 0x70));
  if (param_2 == 0) {
    FUN_003178c0(*(undefined4 *)(param_3 + 0x70));
  }
  return;
}


// ==== FUN_00282fd0 @ 00282fd0 ====

int FUN_00282fd0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float in_a1_udw;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_20;
  float fStack_1c;
  
  fVar6 = (float)((ulong)param_2 >> 0x20);
  iVar2 = *param_1;
  if (1 < (uint)param_1[2]) {
    uVar3 = *(undefined8 *)(*(int *)(iVar2 + 0x70) + 0x48);
    fStack_20 = (float)uVar3;
    fStack_1c = (float)((ulong)uVar3 >> 0x20);
    fVar7 = fStack_20 - (float)param_2;
    fVar5 = fStack_1c - fVar6;
    fVar4 = *(float *)(*(int *)(iVar2 + 0x70) + 0x50) - in_a1_udw;
    iVar1 = *(int *)(param_1[1] + 0x70);
    uVar3 = *(undefined8 *)(iVar1 + 0x48);
    fStack_20 = (float)uVar3;
    fStack_1c = (float)((ulong)uVar3 >> 0x20);
    fStack_20 = fStack_20 - (float)param_2;
    fStack_1c = fStack_1c - fVar6;
    fVar6 = *(float *)(iVar1 + 0x50) - in_a1_udw;
    if (fStack_20 * fStack_20 + fStack_1c * fStack_1c + fVar6 * fVar6 <
        fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4) {
      iVar2 = param_1[1];
    }
  }
  return iVar2;
}


// ==== FUN_00283108 @ 00283108 ====

void FUN_00283108(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_60 [4];
  
  iVar3 = (int)param_1;
  auStack_60[0] = *(undefined4 *)(iVar3 + 0xcba8);
  FUN_00282e70(iVar3 + 0xcb7c,auStack_60);
  uVar1 = *(undefined4 *)(iVar3 + 0xcba8);
  iVar2 = (int)param_2;
  *(int *)(iVar2 + 8) = iVar3 + 0xcb7c;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  *(undefined1 *)(iVar2 + 0x2c) = *(undefined1 *)(iVar3 + 0xcb9d);
  *(undefined4 *)(iVar3 + 0xcbb0) = 1;
  *(undefined4 *)(iVar3 + 0xcbac) = 1;
  FUN_00280748(param_1,param_2);
  return;
}


// ==== FUN_002831a0 @ 002831a0 ====

void FUN_002831a0(undefined8 param_1,undefined8 param_2)

{
  DAT_0040e14c = FUN_00312ee0(param_2,1);
  FUN_003130a0();
  FUN_003250d8();
  FUN_0031b530(0x2832a0,param_1);
  *(undefined1 *)((int)param_1 + 0xcbb4) = 1;
  return;
}


// ==== FUN_00283200 @ 00283200 ====

void FUN_00283200(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0xcbac) == 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0xcbac) = 1;
  }
  else {
    if (param_2 < 2) {
      if (param_2 != 0) goto LAB_00283280;
      iVar1 = 2;
    }
    else {
      if (param_2 != 3) goto LAB_00283280;
      iVar1 = 4;
    }
    if (*(int *)(param_1 + 0xcbac) == iVar1) {
      return;
    }
    *(int *)(param_1 + 0xcbac) = iVar1;
  }
LAB_00283280:
  *(undefined4 *)(*(int *)(param_1 + 0xcba8) + 0x6a4) = *(undefined4 *)(param_1 + 0xcbac);
  return;
}


// ==== FUN_002832a0 @ 002832a0 ====

void FUN_002832a0(undefined1 (*param_1) [12],int param_2,uint *param_3,uint *param_4,float *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 in_vuI;
  undefined4 uVar15;
  undefined1 auStack_90 [16];
  
  uVar4 = DAT_0044325c;
  uVar3 = DAT_00443258;
  uVar2 = DAT_00443254;
  uVar1 = DAT_00443250;
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar12 = _vmove(auVar8);
  auStack_90._0_12_ = *param_1;
  auVar10 = _lqc2(auStack_90);
  auVar7 = _vmul(auVar10,auVar10);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar8,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  auStack_90._4_4_ = *(undefined4 *)(param_2 + 0x28);
  auStack_90._0_4_ = *(undefined4 *)(param_2 + 0x24);
  auStack_90._8_4_ = *(undefined4 *)(param_2 + 0x2c);
  auVar8 = _lqc2(auStack_90);
  if (auVar7._0_4_ < 2.3283064e-10) {
    auVar10 = _vmove(auVar8);
  }
  auVar7 = _vmul(auVar10,auVar10);
  auVar9 = _vmul(auVar8,auVar8);
  _vaddabc(auVar9,auVar9);
  auVar9 = _vmaddbc(auVar12,auVar9);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar12,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar7);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar11 = _vmulq(auVar10,uVar15);
  _vmulq(auVar7,uVar15);
  auVar7 = _vmove(auVar8);
  _vnop();
  _vnop();
  _vnop();
  _vrsqrt(in_vf0,auVar9);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  uVar15 = _vwaitq();
  auVar7 = _vmulq(auVar7,uVar15);
  _vmulq(auVar8,uVar15);
  auVar7 = _sqc2(auVar7);
  auVar8 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _sqc2(auVar8);
  auVar10 = _lqc2(auVar7);
  auVar10 = _vmul(auVar11,auVar10);
  auVar9 = _lqc2(auVar8);
  auVar12 = _vsubbc(in_vf0,in_vf0);
  _vaddabc(auVar10,auVar10);
  auVar10 = _vmaddbc(auVar9,auVar10);
  auVar12 = _vmax(auVar10,auVar12);
  auVar10 = _sqc2(auVar11);
  auVar12 = _vminibc(auVar12,in_vf0);
  auVar12 = _qmfc2(auVar12._0_4_);
  fVar6 = (float)FUN_0029e0d8(auVar12._0_4_);
  auVar10 = _lqc2(auVar10);
  auVar7 = _lqc2(auVar7);
  _vopmula(auVar10,auVar7);
  auVar10 = _vopmsub(auVar7,auVar10);
  auVar7._4_4_ = uVar2;
  auVar7._0_4_ = uVar1;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar4;
  auVar7 = _lqc2(auVar7);
  auVar7 = _vmul(auVar10,auVar7);
  auVar8 = _lqc2(auVar8);
  _vaddabc(auVar7,auVar7);
  auVar7 = _vmaddbc(auVar8,auVar7);
  auVar7 = _qmfc2(auVar7._0_4_);
  fVar6 = fVar6 * 57.29578;
  if (0.0 < auVar7._0_4_) {
    fVar6 = -fVar6;
  }
  auVar8 = _vmaxbc(in_vf0,in_vf0);
  auVar7 = _qmtc2(fVar6 * 0.017453292);
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
  _vmsubai(auVar8,in_vuI);
  _vmaddai(auVar8,in_vuI);
  _ctc2(0xbe22f983);
  _vnop();
  _vmsubai(auVar7,in_vuI);
  _ctc2(0x3f000000);
  _vnop();
  auVar7 = _vmsubi(auVar8,in_vuI);
  auVar7 = _vabs(auVar7);
  _ctc2(0x3e800000);
  _vnop();
  auVar7 = _vsubi(auVar7,in_vuI);
  auVar10 = _vmul(auVar7,auVar7);
  _ctc2(0xc2992661);
  _vnop();
  auVar8 = _vmuli(auVar7,in_vuI);
  auVar14 = _vmul(auVar10,auVar10);
  _ctc2(0xc2255de0);
  _vnop();
  auVar13 = _vmuli(auVar7,in_vuI);
  _ctc2(0x42a33457);
  _vnop();
  auVar11 = _vmuli(auVar7,in_vuI);
  _ctc2(0x421ed7b7);
  _vnop();
  auVar9 = _vmuli(auVar7,in_vuI);
  auVar12 = _vmul(auVar14,auVar14);
  auVar8 = _vmul(auVar8,auVar10);
  _vmula(auVar13,auVar10);
  _vmadda(auVar8,auVar14);
  _ctc2(0x40c90fda);
  _vmadda(auVar11,auVar14);
  _vmaddai(auVar7,in_vuI);
  auVar8 = _vmadd(auVar9,auVar12);
  auVar7 = _sqc2(auVar8);
  auVar8 = _qmfc2(auVar8._0_4_);
  *param_5 = fVar6 * 0.017453292;
  auStack_90._4_4_ = auVar7._4_4_;
  fVar6 = 0.5 - auVar8._0_4_ * 0.5;
  fVar6 = (float)((int)fVar6 * (uint)(0.0 < fVar6));
  fVar5 = 0.5 - (float)auStack_90._4_4_ * 0.5;
  fVar5 = (float)((int)fVar5 * (uint)(0.0 < fVar5));
  *param_3 = (int)fVar6 * (uint)(fVar6 < 1.0) | (uint)(fVar6 >= 1.0) * 0x3f800000;
  *param_4 = (int)fVar5 * (uint)(fVar5 < 1.0) | (uint)(fVar5 >= 1.0) * 0x3f800000;
  return;
}


// ==== FUN_002835c8 @ 002835c8 ====

void FUN_002835c8(int param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 auStack_60 [4];
  
  FUN_00281198();
  auStack_60[0] = 0x16;
  if (param_4 == 0) {
    auStack_60[0] = 0x15;
  }
  *(undefined1 *)(param_1 + 0x32) = param_7;
  *(undefined1 *)(param_1 + 0x34) = 0;
  uVar1 = FUN_00327f20(param_3,auStack_60,0,0,0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}


// ==== FUN_00283648 @ 00283648 ====

void FUN_00283648(void)

{
  return;
}


// ==== FUN_00283650 @ 00283650 ====

void FUN_00283650(void)

{
  FUN_00283c38();
  return;
}


// ==== FUN_00283670 @ 00283670 ====

void FUN_00283670(float param_1,float param_2,undefined4 param_3,float param_4,undefined8 param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_80;
  float fStack_7c;
  
  iVar4 = (int)param_5;
  iVar3 = **(int **)(*(int *)(iVar4 + 0x38) + 0x30);
  if (*(char *)(iVar4 + 0x2c) != '\x02') {
    puVar2 = (undefined8 *)FUN_002811e8(*(undefined1 *)(iVar4 + 0x2e));
    fStack_80 = (float)*puVar2;
    fStack_7c = (float)((ulong)*puVar2 >> 0x20);
    fVar7 = *(float *)(iVar4 + 0x14) * fStack_80 * *(float *)(iVar4 + 0x18);
    fStack_7c = *(float *)(iVar4 + 0x10) * fStack_7c;
    if (*(char *)(iVar4 + 0x2c) != '\0') {
      fVar5 = (float)FUN_002838b8(param_5);
      fStack_7c = fStack_7c * fVar5;
    }
    uVar1 = *(ushort *)(iVar4 + 0x30);
    if ((uVar1 & 0x20) == 0) {
      fStack_7c = fStack_7c * param_1;
    }
    if ((uVar1 & 0x10) == 0) {
      fVar7 = fVar7 * param_2;
    }
    fStack_7c = (float)((int)fStack_7c * (uint)(0.0 < fStack_7c));
    fVar5 = (float)((int)fStack_7c * (uint)(fStack_7c < 1.0) | (uint)(fStack_7c >= 1.0) * 0x3f800000
                   );
    if ((uVar1 & 2) == 0) {
      uVar1 = *(ushort *)(iVar4 + 0x30);
    }
    else {
      fVar6 = *(float *)(iVar4 + 0x28) - param_4;
      *(float *)(iVar4 + 0x28) = fVar6;
      if (fVar6 < 0.0) {
        **(undefined4 **)(*(int *)(iVar4 + 0x38) + 0x30) = 2;
        *(ushort *)(iVar4 + 0x30) = *(ushort *)(iVar4 + 0x30) & 0xfffc;
      }
      uVar1 = *(ushort *)(iVar4 + 0x30);
    }
    if ((uVar1 & 4) == 0) {
      iVar3 = *(int *)(iVar4 + 0x38);
    }
    else {
      fVar6 = *(float *)(iVar4 + 0x1c);
      if (0.0 < fVar6) {
        if (iVar3 == 3 || iVar3 == 1) {
          *(ushort *)(iVar4 + 0x30) = uVar1 & 0xfffb;
        }
        else {
          *(float *)(iVar4 + 0x1c) = fVar6 - param_4;
          fVar5 = fVar5 * (fVar6 / *(float *)(iVar4 + 0x20));
        }
      }
      else {
        FUN_00284298(param_5);
        *(ushort *)(iVar4 + 0x30) = *(ushort *)(iVar4 + 0x30) & 0xfffb;
      }
      iVar3 = *(int *)(iVar4 + 0x38);
    }
    *(ushort *)(iVar3 + 0x5c) = *(ushort *)(iVar3 + 0x5c) | 2;
    *(float *)(*(int *)(iVar4 + 0x38) + 0xa0) = fVar5;
    *(ushort *)(*(int *)(iVar4 + 0x38) + 0x5c) = *(ushort *)(*(int *)(iVar4 + 0x38) + 0x5c) | 1;
    *(float *)(*(int *)(iVar4 + 0x38) + 0x98) = fVar7;
  }
  return;
}


// ==== FUN_00283858 @ 00283858 ====

void FUN_00283858(undefined8 param_1,undefined8 param_2)

{
  FUN_00283e78(param_1,param_2,0);
  return;
}


// ==== FUN_00283878 @ 00283878 ====

void FUN_00283878(void)

{
  FUN_00284298();
  return;
}


// ==== FUN_00283898 @ 00283898 ====

void FUN_00283898(void)

{
  FUN_002842e8();
  return;
}


// ==== FUN_002838b8 @ 002838b8 ====

float FUN_002838b8(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(iVar5 + 0x38);
  iVar3 = **(int **)(iVar2 + 0x30);
  bVar1 = *(byte *)(iVar5 + 0x2c);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return 1.0;
      }
    }
    else if ((bVar1 != 2) && (bVar1 == 3)) {
      if ((*(ushort *)(iVar5 + 0x30) & 8) != 0) {
        if (*(char *)(iVar5 + 0x2d) == '\0') {
          **(int **)(iVar2 + 0x30) = 2;
          *(ushort *)(*(int *)(iVar5 + 0x38) + 0x5c) =
               *(ushort *)(*(int *)(iVar5 + 0x38) + 0x5c) | 0x80;
          *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x38) + 0x30) + 0x18) =
               *(undefined4 *)(iVar5 + 0xc);
          bVar1 = *(byte *)(iVar5 + 0x2d);
        }
        else {
          bVar1 = *(byte *)(iVar5 + 0x2d);
        }
        if (bVar1 < 5) {
          lVar4 = FUN_002842e8(param_1);
          if (lVar4 != 0) {
            bVar1 = *(byte *)(iVar5 + 0x2d);
            *(byte *)(iVar5 + 0x2d) = bVar1 + 1;
            return (float)bVar1 / 5.0;
          }
          *(undefined1 *)(iVar5 + 0x2d) = 0;
        }
        else {
          *(undefined1 *)(iVar5 + 0x2d) = 0;
        }
        *(undefined1 *)(iVar5 + 0x2c) = 0;
        return 1.0;
      }
      *(undefined1 *)(iVar5 + 0x2c) = 0;
    }
    return 0.0;
  }
  if (4 < *(byte *)(iVar5 + 0x2d)) {
    *(ushort *)(iVar5 + 0x30) = *(ushort *)(iVar5 + 0x30) | 8;
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x14);
    **(undefined4 **)(iVar2 + 0x30) = 1;
    *(undefined1 *)(iVar5 + 0x2c) = 2;
    *(undefined1 *)(iVar5 + 0x2d) = 0;
    return 0.0;
  }
  if (iVar3 != 3 && iVar3 != 1) {
    bVar1 = *(byte *)(iVar5 + 0x2d);
    *(byte *)(iVar5 + 0x2d) = bVar1 + 1;
    return 1.0 - (float)bVar1 / 5.0;
  }
  *(undefined1 *)(iVar5 + 0x2d) = 0;
  **(undefined4 **)(iVar2 + 0x30) = 1;
  *(undefined1 *)(iVar5 + 0x2c) = 2;
  *(ushort *)(iVar5 + 0x30) = *(ushort *)(iVar5 + 0x30) & 0xfff7;
  return 0.0;
}


// ==== FUN_00283a78 @ 00283a78 ====

void FUN_00283a78(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined8 *)(iVar1 + 0x68) = param_2;
  *(undefined4 *)(iVar1 + 0x70) = in_a1_udw;
  return;
}


// ==== FUN_00283ac8 @ 00283ac8 ====

void FUN_00283ac8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined8 *)(iVar1 + 0x74) = param_2;
  *(undefined4 *)(iVar1 + 0x7c) = in_a1_udw;
  return;
}


// ==== FUN_00283b10 @ 00283b10 ====

void FUN_00283b10(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  FUN_00328140(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x18));
  return;
}


// ==== FUN_00283b38 @ 00283b38 ====

void FUN_00283b38(int param_1)

{
  if (*(char *)(param_1 + 0x35) == '\0') {
    FUN_003281b0(*(undefined4 *)(param_1 + 0x38));
  }
  return;
}


// ==== FUN_00283b60 @ 00283b60 ====

void FUN_00283b60(int param_1)

{
  FUN_00328180(*(undefined4 *)(param_1 + 0x38));
  return;
}


// ==== FUN_00283b80 @ 00283b80 ====

void FUN_00283b80(undefined4 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 0x38) + 0xb4) = param_1;
  return;
}


// ==== FUN_00283b90 @ 00283b90 ====

void FUN_00283b90(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  *(undefined4 *)(*(int *)(param_2 + 0x38) + 0xb8) = param_1;
  return;
}


// ==== FUN_00283ba0 @ 00283ba0 ====

void FUN_00283ba0(int param_1,undefined4 param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x38) + 0x5c) = *(ushort *)(*(int *)(param_1 + 0x38) + 0x5c) | 0x80
  ;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x30) + 0x18) = param_2;
  return;
}


// ==== FUN_00283bc0 @ 00283bc0 ====

void FUN_00283bc0(int param_1,long param_2)

{
  ushort uVar1;
  
  FUN_00328108(*(undefined4 *)(param_1 + 0x38),param_2 != 0);
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x30) & 0xff7f;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x30) | 0x80;
  }
  *(ushort *)(param_1 + 0x30) = uVar1;
  return;
}


// ==== FUN_00283c10 @ 00283c10 ====

void FUN_00283c10(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}


// ==== FUN_00283c18 @ 00283c18 ====

void FUN_00283c18(int param_1)

{
  FUN_00328180(*(undefined4 *)(param_1 + 0x38));
  return;
}


// ==== FUN_00283c38 @ 00283c38 ====

undefined4 FUN_00283c38(undefined8 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  lVar4 = FUN_002842e8();
  if (lVar4 == 0) {
    return 1;
  }
  piVar6 = (int *)param_1;
  if ((*(int *)(param_2 + 0xa4) >> 3 & 1U) == 0) {
    iVar3 = *(int *)(param_2 + 0xa4);
  }
  else {
    piVar6[4] = *(int *)(param_2 + 0x54);
    iVar3 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar3 >> 5 & 1U) == 0) {
    iVar3 = piVar6[1];
  }
  else {
    piVar6[5] = *(int *)(param_2 + 0x5c);
    iVar3 = piVar6[1];
  }
  lVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 8));
  if (lVar4 == 0) {
    if (*(char *)(param_2 + 0xa5) < '\0') {
      FUN_00283c10(*(undefined4 *)(param_2 + 0x7c),param_1);
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 0x10 & 1U) == 0) {
      if ((iVar3 >> 6 & 1U) == 0) {
        uVar5 = (ulong)*(byte *)(param_2 + 0xa6);
      }
      else {
        FUN_00283b60(*(undefined4 *)(param_2 + 0x60),param_1);
        uVar5 = (ulong)*(byte *)(param_2 + 0xa6);
      }
    }
    else {
      FUN_00283c18(*(undefined4 *)(param_2 + 0x78),param_1);
      uVar5 = (ulong)*(byte *)(param_2 + 0xa6);
    }
    if (uVar5 >> 7 != 0) {
      FUN_00283648(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90),
                   *(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x94),
                   *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c),param_1,
                   *(undefined1 *)(param_2 + 0xab));
    }
  }
  else {
    if ((*(byte *)(param_2 + 0xa4) & 1) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      (**(code **)(*piVar6 + 0x34))
                ((int)piVar6 + (int)*(short *)(*piVar6 + 0x30),*(undefined8 *)(param_2 + 0x30));
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 1 & 1U) == 0) {
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    else {
      FUN_00283ac8(param_1,*(undefined8 *)(param_2 + 0x40));
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    if ((bVar1 & 1) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      FUN_00283b80(*(undefined4 *)(param_2 + 0x74),param_1);
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 9 & 1U) == 0) {
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    else {
      FUN_00283b90(*(undefined4 *)(param_2 + 0x70),param_1);
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    if (cVar2 < '\0') {
      FUN_00283648(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90),
                   *(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x94),
                   *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c),param_1,
                   *(undefined1 *)(param_2 + 0xab));
      iVar3 = *(int *)(param_2 + 0xa4);
      goto LAB_00283e04;
    }
  }
  iVar3 = *(int *)(param_2 + 0xa4);
LAB_00283e04:
  if ((iVar3 >> 4 & 1U) == 0) {
    iVar3 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00283b38(*(undefined4 *)(param_2 + 0x58),param_1);
    iVar3 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar3 >> 0xe & 1U) == 0) {
    iVar3 = *(int *)(param_2 + 0xa4);
  }
  else {
    piVar6[6] = *(int *)(param_2 + 100);
    iVar3 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar3 >> 0xd & 1U) != 0) {
    FUN_00281200(*(undefined4 *)(param_2 + 0x6c),param_1);
  }
  return 1;
}


// ==== FUN_00283e78 @ 00283e78 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00283e78(undefined8 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  lVar6 = FUN_00281238();
  if (lVar6 == 0) {
    return 0;
  }
  if ((*(int *)(param_2 + 0xa4) >> 2 & 1U) == 0) {
    FUN_00283b10(param_1,DAT_004431d0);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00283b10(param_1,*(undefined4 *)(param_2 + 0x50));
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  iVar9 = DAT_004431d4;
  if ((iVar8 >> 3 & 1U) != 0) {
    iVar9 = *(int *)(param_2 + 0x54);
  }
  piVar7 = (int *)param_1;
  piVar7[4] = iVar9;
  if ((*(int *)(param_2 + 0xa4) >> 5 & 1U) == 0) {
    iVar8 = *(int *)(piVar7[1] + 0x10);
    iVar8 = (**(code **)(iVar8 + 0x2c))(piVar7[1] + (int)*(short *)(iVar8 + 0x28));
  }
  else {
    iVar8 = *(int *)(param_2 + 0x5c);
  }
  piVar7[5] = iVar8;
  iVar8 = *(int *)(piVar7[1] + 0x10);
  lVar6 = (**(code **)(iVar8 + 0xc))(piVar7[1] + (int)*(short *)(iVar8 + 8));
  if (lVar6 == 0) {
    if ((*(int *)(param_2 + 0xa4) >> 6 & 1U) == 0) {
      FUN_00283b60(DAT_004431e0,param_1);
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    else {
      FUN_00283b60(*(undefined4 *)(param_2 + 0x60),param_1);
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    puVar5 = (undefined4 *)(param_2 + 0x88);
    if (cVar2 < '\0') {
      uVar3 = *(undefined1 *)(param_2 + 0xab);
    }
    else {
      puVar5 = &DAT_00443208;
      uVar3 = DAT_0044322b;
    }
    FUN_00283648(*puVar5,puVar5[2],puVar5[1],puVar5[3],puVar5[4],puVar5[5],param_1,uVar3);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  else {
    iVar8 = *piVar7;
    if ((*(byte *)(param_2 + 0xa4) & 1) == 0) {
      (**(code **)(iVar8 + 0x34))((int)piVar7 + (int)*(short *)(iVar8 + 0x30),_DAT_004431b0);
      iVar8 = *(int *)(param_2 + 0xa4);
    }
    else {
      (**(code **)(iVar8 + 0x34))
                ((int)piVar7 + (int)*(short *)(iVar8 + 0x30),*(undefined8 *)(param_2 + 0x30));
      iVar8 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar8 >> 1 & 1U) == 0) {
      FUN_00283ac8(param_1,_DAT_004431c0);
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    else {
      FUN_00283ac8(param_1,*(undefined8 *)(param_2 + 0x40));
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    if ((bVar1 & 1) == 0) {
      FUN_00283b80(DAT_004431f4,param_1);
      iVar8 = *(int *)(param_2 + 0xa4);
    }
    else {
      FUN_00283b80(*(undefined4 *)(param_2 + 0x74),param_1);
      iVar8 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar8 >> 9 & 1U) == 0) {
      FUN_00283b90(DAT_004431f0,param_1);
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    else {
      FUN_00283b90(*(undefined4 *)(param_2 + 0x70),param_1);
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    puVar5 = (undefined4 *)(param_2 + 0x88);
    if (cVar2 < '\0') {
      uVar3 = *(undefined1 *)(param_2 + 0xab);
    }
    else {
      puVar5 = &DAT_00443208;
      uVar3 = DAT_0044322b;
    }
    FUN_00283648(*puVar5,puVar5[2],puVar5[1],puVar5[3],puVar5[4],puVar5[5],param_1,uVar3);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar8 >> 4 & 1U) == 0) {
    FUN_00283b38(DAT_004431d8,param_1);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00283b38(*(undefined4 *)(param_2 + 0x58),param_1);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  iVar9 = DAT_004431e4;
  if ((iVar8 >> 0xe & 1U) != 0) {
    iVar9 = *(int *)(param_2 + 100);
  }
  piVar7[6] = iVar9;
  if ((*(int *)(param_2 + 0xa4) >> 0xc & 1U) == 0) {
    FUN_00283bc0(param_1,DAT_00443229);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00283bc0(param_1,*(undefined1 *)(param_2 + 0xa9));
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar8 >> 10 & 1U) == 0) {
    FUN_00283ba0(param_1,DAT_00443220);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00283ba0(param_1,*(undefined4 *)(param_2 + 0xa0));
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  uVar3 = DAT_00443228;
  if ((iVar8 >> 0xb & 1U) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0xa8);
  }
  *(undefined1 *)((int)piVar7 + 0x2e) = uVar3;
  if ((*(int *)(param_2 + 0xa4) >> 0xd & 1U) == 0) {
    FUN_00281200(DAT_004431ec,param_1);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00281200(*(undefined4 *)(param_2 + 0x6c),param_1);
    iVar8 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar8 >> 0x15 & 1U) == 0) {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (DAT_0044322d == '\0') {
LAB_002841fc:
      uVar4 = uVar4 & 0xffef;
    }
    else {
      uVar4 = uVar4 | 0x10;
    }
  }
  else {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (*(char *)(param_2 + 0xad) == '\0') goto LAB_002841fc;
    uVar4 = uVar4 | 0x10;
  }
  *(ushort *)(piVar7 + 0xc) = uVar4;
  if ((*(int *)(param_2 + 0xa4) >> 0x16 & 1U) == 0) {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (DAT_0044322c != '\0') {
      uVar4 = uVar4 | 0x20;
      goto LAB_00284240;
    }
  }
  else {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (*(char *)(param_2 + 0xac) != '\0') {
      uVar4 = uVar4 | 0x20;
      goto LAB_00284240;
    }
  }
  uVar4 = uVar4 & 0xffdf;
LAB_00284240:
  *(ushort *)(piVar7 + 0xc) = uVar4;
  *(ushort *)(piVar7 + 0xc) = *(ushort *)(piVar7 + 0xc) | 0x100;
  iVar8 = DAT_003c0e08 + 1;
  piVar7[2] = DAT_003c0e08;
  DAT_003c0e08 = iVar8;
  **(undefined4 **)(piVar7[0xe] + 0x30) = 2;
  return 1;
}


// ==== FUN_00284298 @ 00284298 ====

undefined4 FUN_00284298(int param_1)

{
  **(undefined4 **)(*(int *)(param_1 + 0x38) + 0x30) = 1;
  FUN_00328140(*(undefined4 *)(param_1 + 0x38),0);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 1;
  return 1;
}


// ==== FUN_002842e8 @ 002842e8 ====

ushort FUN_002842e8(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x2c);
  if (bVar1 == 2) {
    return (ushort)((*(ushort *)(param_1 + 0x30) & 8) != 0);
  }
  if (bVar1 < 3) {
    uVar3 = *(ushort *)(param_1 + 0x30);
  }
  else {
    if (bVar1 != 3) {
      return 0;
    }
    uVar3 = *(ushort *)(param_1 + 0x30);
  }
  if ((uVar3 & 0x80) != 0) {
    return uVar3 >> 8 & 1;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x38) + 0x30);
  uVar3 = 0;
  if (iVar2 != 3) {
    uVar3 = (ushort)(iVar2 != 1);
  }
  return uVar3;
}


// ==== FUN_00284378 @ 00284378 ====

undefined4 FUN_00284378(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_002842e8();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x30) + 0x14);
  }
  return uVar1;
}


// ==== FUN_002843b0 @ 002843b0 ====

void FUN_002843b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00281198();
  uVar1 = FUN_00319c70(0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x1c);
  return;
}


// ==== FUN_00284408 @ 00284408 ====

undefined4 FUN_00284408(void)

{
  FUN_00285258();
  return 1;
}


// ==== FUN_00284428 @ 00284428 ====

void FUN_00284428(float param_1,float param_2,undefined4 param_3,float param_4,undefined8 param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_60;
  float fStack_5c;
  
  piVar3 = (int *)param_5;
  if ((char)piVar3[0xb] != '\x02') {
    puVar2 = (undefined8 *)FUN_002811e8(*(undefined1 *)((int)piVar3 + 0x2e));
    fStack_60 = (float)*puVar2;
    fStack_5c = (float)((ulong)*puVar2 >> 0x20);
    fVar6 = (float)piVar3[5] * fStack_60 * (float)piVar3[6];
    fStack_5c = (float)piVar3[4] * fStack_5c;
    if ((char)piVar3[0xb] != '\0') {
      fVar4 = (float)(**(code **)(*piVar3 + 0x9c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x98));
      fStack_5c = fStack_5c * fVar4;
    }
    uVar1 = *(ushort *)(piVar3 + 0xc);
    if ((uVar1 & 0x20) == 0) {
      fStack_5c = fStack_5c * param_1;
    }
    if ((uVar1 & 0x10) == 0) {
      fVar6 = fVar6 * param_2;
    }
    fStack_5c = (float)((int)fStack_5c * (uint)(0.0 < fStack_5c));
    fVar4 = (float)((int)fStack_5c * (uint)(fStack_5c < 1.0) | (uint)(fStack_5c >= 1.0) * 0x3f800000
                   );
    if ((uVar1 & 2) == 0) {
      uVar1 = *(ushort *)(piVar3 + 0xc);
    }
    else {
      fVar5 = (float)piVar3[10];
      piVar3[10] = (int)(fVar5 - param_4);
      if (fVar5 - param_4 < 0.0) {
        FUN_00319de0(piVar3[0xd],1);
        *(ushort *)(piVar3 + 0xc) = *(ushort *)(piVar3 + 0xc) & 0xfffc;
      }
      uVar1 = *(ushort *)(piVar3 + 0xc);
    }
    if ((uVar1 & 4) != 0) {
      fVar5 = (float)piVar3[7];
      if (0.0 < fVar5) {
        if ((*(byte *)(piVar3[0xd] + 0x8a) & 2) == 0) {
          *(ushort *)(piVar3 + 0xc) = uVar1 & 0xfffb;
        }
        else {
          piVar3[7] = (int)(fVar5 - param_4);
          fVar4 = fVar4 * (fVar5 / (float)piVar3[8]);
        }
      }
      else {
        FUN_00285190(param_5);
        *(ushort *)(piVar3 + 0xc) = *(ushort *)(piVar3 + 0xc) & 0xfffb;
      }
    }
    *(char *)(piVar3[0xd] + 0x85) = (char)(int)(fVar4 * 255.0);
    if (*(int *)(piVar3[0xd] + 0x60) != 0) {
      FUN_003106f0(fVar4,*(int *)(piVar3[0xd] + 0x60),7,1);
    }
    *(float *)(piVar3[0xd] + 0x78) = fVar6;
    if (*(int *)(piVar3[0xd] + 0x60) != 0) {
      FUN_003106f0(fVar6,*(int *)(piVar3[0xd] + 0x60),6,1);
    }
  }
  return;
}


// ==== FUN_00284628 @ 00284628 ====

void FUN_00284628(undefined8 param_1,undefined8 param_2)

{
  FUN_00284bf0(param_1,param_2,0);
  return;
}


// ==== FUN_00284648 @ 00284648 ====

void FUN_00284648(void)

{
  FUN_00285190();
  return;
}


// ==== FUN_00284668 @ 00284668 ====

void FUN_00284668(void)

{
  FUN_002851e0();
  return;
}


// ==== FUN_00284688 @ 00284688 ====

float FUN_00284688(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  
  iVar7 = (int)param_1;
  bVar1 = *(byte *)(iVar7 + 0x2c);
  if (bVar1 == 1) {
    if (*(byte *)(iVar7 + 0x2d) < 5) {
      if ((*(ushort *)(iVar7 + 0x30) & 0x80) == 0) {
        bVar3 = (bool)(*(byte *)(*(int *)(iVar7 + 0x34) + 0x8a) >> 1 & 1);
      }
      else {
        bVar3 = (*(ushort *)(iVar7 + 0x30) & 0x100) != 0;
      }
      if (bVar3 != false) {
        bVar1 = *(byte *)(iVar7 + 0x2d);
        *(byte *)(iVar7 + 0x2d) = bVar1 + 1;
        return 1.0 - (float)bVar1 / 5.0;
      }
      *(undefined1 *)(iVar7 + 0x2c) = 2;
      *(undefined1 *)(iVar7 + 0x2d) = 0;
      *(ushort *)(iVar7 + 0x30) = *(ushort *)(iVar7 + 0x30) & 0xfff7;
      goto LAB_00284884;
    }
    iVar2 = *(int *)(iVar7 + 0x34);
    if (*(int *)(iVar2 + 100) != 0) {
      *(ushort *)(iVar7 + 0x30) = *(ushort *)(iVar7 + 0x30) | 8;
      if (*(int *)(iVar2 + 0x60) == 0) {
        iVar5 = *(int *)(iVar7 + 0x34);
LAB_002847a8:
        uVar4 = *(undefined4 *)(iVar5 + 0x6c);
        *(undefined4 *)(iVar2 + 0x6c) = uVar4;
      }
      else {
        if ((*(byte *)(iVar2 + 0x8a) & 2) == 0) {
          iVar5 = *(int *)(iVar7 + 0x34);
          goto LAB_002847a8;
        }
        uVar4 = FUN_003107e0(*(int *)(iVar2 + 0x60),9,2,0);
        *(undefined4 *)(iVar2 + 0x6c) = uVar4;
      }
      *(undefined4 *)(iVar7 + 0xc) = uVar4;
      FUN_00319de0(*(undefined4 *)(iVar7 + 0x34),0);
    }
    *(undefined1 *)(iVar7 + 0x2d) = 0;
    *(undefined1 *)(iVar7 + 0x2c) = 2;
LAB_002847cc:
    fVar8 = 0.0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) goto LAB_002847cc;
      if (bVar1 == 3) {
        if ((*(ushort *)(iVar7 + 0x30) & 8) != 0) {
          if (*(char *)(iVar7 + 0x2d) == '\0') {
            FUN_00319de0(*(undefined4 *)(iVar7 + 0x34),1);
            *(undefined4 *)(*(int *)(iVar7 + 0x34) + 0x6c) = *(undefined4 *)(iVar7 + 0xc);
            iVar2 = *(int *)(*(int *)(iVar7 + 0x34) + 0x60);
            if (iVar2 != 0) {
              FUN_00310640(iVar2,9,1,*(undefined4 *)(iVar7 + 0xc));
            }
            *(undefined4 *)(iVar7 + 0xc) = 0;
            bVar1 = *(byte *)(iVar7 + 0x2d);
          }
          else {
            bVar1 = *(byte *)(iVar7 + 0x2d);
          }
          if (bVar1 < 5) {
            lVar6 = FUN_002851e0(param_1);
            if (lVar6 != 0) {
              bVar1 = *(byte *)(iVar7 + 0x2d);
              *(byte *)(iVar7 + 0x2d) = bVar1 + 1;
              return (float)bVar1 / 5.0;
            }
            *(undefined1 *)(iVar7 + 0x2d) = 0;
          }
          else {
            *(undefined1 *)(iVar7 + 0x2d) = 0;
          }
          *(undefined1 *)(iVar7 + 0x2c) = 0;
          return 1.0;
        }
        *(undefined1 *)(iVar7 + 0x2c) = 0;
      }
    }
LAB_00284884:
    fVar8 = 1.0;
  }
  return fVar8;
}


// ==== FUN_002848a8 @ 002848a8 ====

void FUN_002848a8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = (undefined4)param_2;
  uStack_2c = (undefined4)((ulong)param_2 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined8 *)(iVar1 + 0x30) = param_2;
  *(undefined4 *)(iVar1 + 0x38) = in_a1_udw;
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x60);
  if (iVar1 != 0) {
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_00310590(iVar1,0,1,&uStack_30);
  }
  return;
}


// ==== FUN_00284920 @ 00284920 ====

void FUN_00284920(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_a1_udw;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = (undefined4)param_2;
  uStack_2c = (undefined4)((ulong)param_2 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined8 *)(iVar1 + 0x3c) = param_2;
  *(undefined4 *)(iVar1 + 0x44) = in_a1_udw;
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x60);
  if (iVar1 != 0) {
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_00310590(iVar1,1,1,&uStack_30);
  }
  return;
}


// ==== FUN_00284990 @ 00284990 ====

void FUN_00284990(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00319e28(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_2 + 0x18));
  return;
}


// ==== FUN_002849c0 @ 002849c0 ====

void FUN_002849c0(float param_1,int param_2)

{
  int iVar1;
  
  *(char *)(*(int *)(param_2 + 0x34) + 0x86) = (char)(int)(param_1 * 255.0);
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x60);
  if (iVar1 != 0) {
    FUN_003106f0(iVar1,0xd,1);
  }
  return;
}


// ==== FUN_00284a10 @ 00284a10 ====

void FUN_00284a10(float param_1,int param_2)

{
  int iVar1;
  
  *(char *)(*(int *)(param_2 + 0x34) + 0x8b) = (char)(int)(param_1 * 127.0);
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x60);
  if (iVar1 != 0) {
    FUN_003106f0(iVar1,0xc,1);
  }
  return;
}


// ==== FUN_00284a60 @ 00284a60 ====

void FUN_00284a60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_2 + 0x34) + 0x7c) = param_1;
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x60);
  if (iVar1 != 0) {
    FUN_003106f0(iVar1,4,1);
  }
  return;
}


// ==== FUN_00284a98 @ 00284a98 ====

void FUN_00284a98(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_2 + 0x34) + 0x80) = param_1;
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x60);
  if (iVar1 != 0) {
    FUN_003106f0(iVar1,5,1);
  }
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}


// ==== FUN_00284ae8 @ 00284ae8 ====

void FUN_00284ae8(int param_1,undefined8 param_2)

{
  int iVar1;
  
  *(int *)(*(int *)(param_1 + 0x34) + 0x6c) = (int)param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x60);
  if (iVar1 != 0) {
    FUN_00310640(iVar1,9,1,param_2);
  }
  return;
}


// ==== FUN_00284b28 @ 00284b28 ====

void FUN_00284b28(int param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    bVar1 = *(byte *)(iVar3 + 0x8a) & 0xfb;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x34);
    bVar1 = *(byte *)(iVar3 + 0x8a) | 4;
  }
  *(byte *)(iVar3 + 0x8a) = bVar1;
  iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0x60);
  if (iVar3 != 0) {
    FUN_003105e8(iVar3,10,1);
  }
  if (param_2 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x30) & 0xff7f;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x30) | 0x80;
  }
  *(ushort *)(param_1 + 0x30) = uVar2;
  return;
}


// ==== FUN_00284bf0 @ 00284bf0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00284bf0(undefined8 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  long lVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  lVar5 = FUN_00281238();
  if (lVar5 == 0) {
    return 0;
  }
  piVar7 = (int *)param_1;
  if ((*(int *)(param_2 + 0xa4) >> 2 & 1U) == 0) {
    (**(code **)(*piVar7 + 0x54))((int)piVar7 + (int)*(short *)(*piVar7 + 0x50),DAT_004431d0);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    (**(code **)(*piVar7 + 0x54))
              ((int)piVar7 + (int)*(short *)(*piVar7 + 0x50),*(undefined4 *)(param_2 + 0x50));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  iVar8 = DAT_004431d4;
  if ((iVar9 >> 3 & 1U) != 0) {
    iVar8 = *(int *)(param_2 + 0x54);
  }
  piVar7[4] = iVar8;
  if ((*(int *)(param_2 + 0xa4) >> 5 & 1U) == 0) {
    iVar9 = *(int *)(piVar7[1] + 0x10);
    iVar9 = (**(code **)(iVar9 + 0x2c))(piVar7[1] + (int)*(short *)(iVar9 + 0x28));
  }
  else {
    iVar9 = *(int *)(param_2 + 0x5c);
  }
  piVar7[5] = iVar9;
  iVar9 = DAT_004431e4;
  if ((*(int *)(param_2 + 0xa4) >> 0xe & 1U) != 0) {
    iVar9 = *(int *)(param_2 + 100);
  }
  piVar7[6] = iVar9;
  iVar9 = *(int *)(piVar7[1] + 0x10);
  lVar5 = (**(code **)(iVar9 + 0xc))(piVar7[1] + (int)*(short *)(iVar9 + 8));
  if (lVar5 == 0) {
    iVar9 = *piVar7;
    if ((*(int *)(param_2 + 0xa4) >> 6 & 1U) == 0) {
      (**(code **)(iVar9 + 100))(DAT_004431e0,(int)piVar7 + (int)*(short *)(iVar9 + 0x60));
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    else {
      (**(code **)(iVar9 + 100))
                (*(undefined4 *)(param_2 + 0x60),(int)piVar7 + (int)*(short *)(iVar9 + 0x60));
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    puVar6 = (undefined4 *)(param_2 + 0x88);
    if (cVar2 < '\0') {
      uVar3 = *(undefined1 *)(param_2 + 0xab);
    }
    else {
      puVar6 = &DAT_00443208;
      uVar3 = DAT_0044322b;
    }
    (**(code **)(*piVar7 + 0x44))
              (*puVar6,puVar6[2],puVar6[1],puVar6[3],puVar6[4],puVar6[5],
               (int)piVar7 + (int)*(short *)(*piVar7 + 0x40),uVar3);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    iVar9 = *piVar7;
    if ((*(byte *)(param_2 + 0xa4) & 1) == 0) {
      (**(code **)(iVar9 + 0x34))((int)piVar7 + (int)*(short *)(iVar9 + 0x30),_DAT_004431b0);
      iVar9 = *(int *)(param_2 + 0xa4);
    }
    else {
      (**(code **)(iVar9 + 0x34))
                ((int)piVar7 + (int)*(short *)(iVar9 + 0x30),*(undefined8 *)(param_2 + 0x30));
      iVar9 = *(int *)(param_2 + 0xa4);
    }
    iVar8 = *piVar7;
    if ((iVar9 >> 1 & 1U) == 0) {
      (**(code **)(iVar8 + 0x4c))((int)piVar7 + (int)*(short *)(iVar8 + 0x48),_DAT_004431c0);
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    else {
      (**(code **)(iVar8 + 0x4c))
                ((int)piVar7 + (int)*(short *)(iVar8 + 0x48),*(undefined8 *)(param_2 + 0x40));
      bVar1 = *(byte *)(param_2 + 0xa5);
    }
    iVar9 = *piVar7;
    if ((bVar1 & 1) == 0) {
      (**(code **)(iVar9 + 0x6c))(DAT_004431f4,(int)piVar7 + (int)*(short *)(iVar9 + 0x68));
      iVar9 = *(int *)(param_2 + 0xa4);
    }
    else {
      (**(code **)(iVar9 + 0x6c))
                (*(undefined4 *)(param_2 + 0x74),(int)piVar7 + (int)*(short *)(iVar9 + 0x68));
      iVar9 = *(int *)(param_2 + 0xa4);
    }
    iVar8 = *piVar7;
    if ((iVar9 >> 9 & 1U) == 0) {
      (**(code **)(iVar8 + 0x74))(DAT_004431f0,(int)piVar7 + (int)*(short *)(iVar8 + 0x70));
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    else {
      (**(code **)(iVar8 + 0x74))
                (*(undefined4 *)(param_2 + 0x70),(int)piVar7 + (int)*(short *)(iVar8 + 0x70));
      cVar2 = *(char *)(param_2 + 0xa6);
    }
    puVar6 = (undefined4 *)(param_2 + 0x88);
    if (cVar2 < '\0') {
      uVar3 = *(undefined1 *)(param_2 + 0xab);
    }
    else {
      puVar6 = &DAT_00443208;
      uVar3 = DAT_0044322b;
    }
    (**(code **)(*piVar7 + 0x44))
              (*puVar6,puVar6[2],puVar6[1],puVar6[3],puVar6[4],puVar6[5],
               (int)piVar7 + (int)*(short *)(*piVar7 + 0x40),uVar3);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  iVar8 = *piVar7;
  if ((iVar9 >> 4 & 1U) == 0) {
    (**(code **)(iVar8 + 0x5c))(DAT_004431d8,(int)piVar7 + (int)*(short *)(iVar8 + 0x58));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    (**(code **)(iVar8 + 0x5c))
              (*(undefined4 *)(param_2 + 0x58),(int)piVar7 + (int)*(short *)(iVar8 + 0x58));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  iVar8 = *piVar7;
  if ((iVar9 >> 0xc & 1U) == 0) {
    (**(code **)(iVar8 + 0x84))((int)piVar7 + (int)*(short *)(iVar8 + 0x80),DAT_00443229);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    (**(code **)(iVar8 + 0x84))
              ((int)piVar7 + (int)*(short *)(iVar8 + 0x80),*(undefined1 *)(param_2 + 0xa9));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  iVar8 = *piVar7;
  if ((iVar9 >> 10 & 1U) == 0) {
    (**(code **)(iVar8 + 0x7c))((int)piVar7 + (int)*(short *)(iVar8 + 0x78),DAT_00443220);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    (**(code **)(iVar8 + 0x7c))
              ((int)piVar7 + (int)*(short *)(iVar8 + 0x78),*(undefined4 *)(param_2 + 0xa0));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  uVar3 = DAT_00443228;
  if ((iVar9 >> 0xb & 1U) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0xa8);
  }
  *(undefined1 *)((int)piVar7 + 0x2e) = uVar3;
  if ((*(int *)(param_2 + 0xa4) >> 0xd & 1U) == 0) {
    FUN_00281200(DAT_004431ec,param_1);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    FUN_00281200(*(undefined4 *)(param_2 + 0x6c),param_1);
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  iVar8 = *piVar7;
  if ((iVar9 >> 0x13 & 1U) == 0) {
    (**(code **)(iVar8 + 0x8c))(DAT_00443204,(int)piVar7 + (int)*(short *)(iVar8 + 0x88));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    (**(code **)(iVar8 + 0x8c))
              (*(undefined4 *)(param_2 + 0x84),(int)piVar7 + (int)*(short *)(iVar8 + 0x88));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  iVar8 = *piVar7;
  if ((iVar9 >> 0x12 & 1U) == 0) {
    (**(code **)(iVar8 + 0x8c))(DAT_00443200,(int)piVar7 + (int)*(short *)(iVar8 + 0x88));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  else {
    (**(code **)(iVar8 + 0x8c))
              (*(undefined4 *)(param_2 + 0x80),(int)piVar7 + (int)*(short *)(iVar8 + 0x88));
    iVar9 = *(int *)(param_2 + 0xa4);
  }
  if ((iVar9 >> 0x15 & 1U) == 0) {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (DAT_0044322d == '\0') {
LAB_002850b8:
      uVar4 = uVar4 & 0xffef;
    }
    else {
      uVar4 = uVar4 | 0x10;
    }
  }
  else {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (*(char *)(param_2 + 0xad) == '\0') goto LAB_002850b8;
    uVar4 = uVar4 | 0x10;
  }
  *(ushort *)(piVar7 + 0xc) = uVar4;
  if ((*(int *)(param_2 + 0xa4) >> 0x16 & 1U) == 0) {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (DAT_0044322c != '\0') {
      uVar4 = uVar4 | 0x20;
      goto LAB_002850fc;
    }
  }
  else {
    uVar4 = *(ushort *)(piVar7 + 0xc);
    if (*(char *)(param_2 + 0xac) != '\0') {
      uVar4 = uVar4 | 0x20;
      goto LAB_002850fc;
    }
  }
  uVar4 = uVar4 & 0xffdf;
LAB_002850fc:
  *(ushort *)(piVar7 + 0xc) = uVar4;
  if (*(char *)(param_2 + 0xa4) < '\0') {
    piVar7[10] = *(int *)(param_2 + 0x68);
    *(ushort *)(piVar7 + 0xc) = *(ushort *)(piVar7 + 0xc) | 3;
  }
  else {
    *(ushort *)(piVar7 + 0xc) = *(ushort *)(piVar7 + 0xc) & 0xfffd;
    piVar7[10] = DAT_004431e8;
  }
  *(ushort *)(piVar7 + 0xc) = *(ushort *)(piVar7 + 0xc) | 0x100;
  iVar9 = DAT_003c0e08 + 1;
  piVar7[2] = DAT_003c0e08;
  DAT_003c0e08 = iVar9;
  if (-1 < *(char *)(param_2 + 0xa4)) {
    FUN_00319de0(piVar7[0xd],1);
  }
  return 1;
}


// ==== FUN_00285190 @ 00285190 ====

undefined4 FUN_00285190(int param_1)

{
  FUN_00319de0(*(undefined4 *)(param_1 + 0x34),0);
  FUN_00319e28(*(undefined4 *)(param_1 + 0x34),0);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 1;
  return 1;
}


// ==== FUN_002851e0 @ 002851e0 ====

ushort FUN_002851e0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2c);
  if (bVar1 == 2) {
    return *(ushort *)(param_1 + 0x30) >> 3 & 1;
  }
  if (bVar1 < 3) {
    uVar2 = *(ushort *)(param_1 + 0x30);
  }
  else {
    if (bVar1 != 3) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x30);
  }
  if ((uVar2 & 0x80) != 0) {
    return uVar2 >> 8 & 1;
  }
  return *(byte *)(*(int *)(param_1 + 0x34) + 0x8a) >> 1 & 1;
}


// ==== FUN_00285258 @ 00285258 ====

undefined4 FUN_00285258(undefined8 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = FUN_002851e0();
  if (lVar4 != 0) {
    piVar5 = (int *)param_1;
    if ((*(int *)(param_2 + 0xa4) >> 3 & 1U) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      piVar5[4] = *(int *)(param_2 + 0x54);
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 5 & 1U) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      piVar5[5] = *(int *)(param_2 + 0x5c);
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 0xe & 1U) == 0) {
      iVar3 = piVar5[1];
    }
    else {
      piVar5[6] = *(int *)(param_2 + 100);
      iVar3 = piVar5[1];
    }
    lVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 8));
    if (lVar4 == 0) {
      if ((*(int *)(param_2 + 0xa4) >> 6 & 1U) == 0) {
        cVar2 = *(char *)(param_2 + 0xa6);
      }
      else {
        (**(code **)(*piVar5 + 100))
                  (*(undefined4 *)(param_2 + 0x60),(int)piVar5 + (int)*(short *)(*piVar5 + 0x60));
        cVar2 = *(char *)(param_2 + 0xa6);
      }
      if (cVar2 < '\0') {
        (**(code **)(*piVar5 + 0x44))
                  (*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90),
                   *(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x94),
                   *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c),
                   (int)piVar5 + (int)*(short *)(*piVar5 + 0x40),*(undefined1 *)(param_2 + 0xab));
        iVar3 = *(int *)(param_2 + 0xa4);
      }
      else {
        iVar3 = *(int *)(param_2 + 0xa4);
      }
    }
    else {
      if ((*(byte *)(param_2 + 0xa4) & 1) == 0) {
        iVar3 = *(int *)(param_2 + 0xa4);
      }
      else {
        (**(code **)(*piVar5 + 0x34))
                  ((int)piVar5 + (int)*(short *)(*piVar5 + 0x30),*(undefined8 *)(param_2 + 0x30));
        iVar3 = *(int *)(param_2 + 0xa4);
      }
      if ((iVar3 >> 1 & 1U) == 0) {
        bVar1 = *(byte *)(param_2 + 0xa5);
      }
      else {
        (**(code **)(*piVar5 + 0x4c))
                  ((int)piVar5 + (int)*(short *)(*piVar5 + 0x48),*(undefined8 *)(param_2 + 0x40));
        bVar1 = *(byte *)(param_2 + 0xa5);
      }
      if ((bVar1 & 1) == 0) {
        iVar3 = *(int *)(param_2 + 0xa4);
      }
      else {
        (**(code **)(*piVar5 + 0x6c))
                  (*(undefined4 *)(param_2 + 0x74),(int)piVar5 + (int)*(short *)(*piVar5 + 0x68));
        iVar3 = *(int *)(param_2 + 0xa4);
      }
      if ((iVar3 >> 9 & 1U) == 0) {
        cVar2 = *(char *)(param_2 + 0xa6);
      }
      else {
        (**(code **)(*piVar5 + 0x74))
                  (*(undefined4 *)(param_2 + 0x70),(int)piVar5 + (int)*(short *)(*piVar5 + 0x70));
        cVar2 = *(char *)(param_2 + 0xa6);
      }
      if (cVar2 < '\0') {
        (**(code **)(*piVar5 + 0x44))
                  (*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90),
                   *(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x94),
                   *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c),
                   (int)piVar5 + (int)*(short *)(*piVar5 + 0x40),*(undefined1 *)(param_2 + 0xab));
        iVar3 = *(int *)(param_2 + 0xa4);
      }
      else {
        iVar3 = *(int *)(param_2 + 0xa4);
      }
    }
    if ((iVar3 >> 4 & 1U) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      (**(code **)(*piVar5 + 0x5c))
                (*(undefined4 *)(param_2 + 0x58),(int)piVar5 + (int)*(short *)(*piVar5 + 0x58));
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 0xd & 1U) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      FUN_00281200(*(undefined4 *)(param_2 + 0x6c),param_1);
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 0x13 & 1U) == 0) {
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    else {
      (**(code **)(*piVar5 + 0x8c))
                (*(undefined4 *)(param_2 + 0x84),(int)piVar5 + (int)*(short *)(*piVar5 + 0x88));
      iVar3 = *(int *)(param_2 + 0xa4);
    }
    if ((iVar3 >> 0x12 & 1U) != 0) {
      (**(code **)(*piVar5 + 0x8c))
                (*(undefined4 *)(param_2 + 0x80),(int)piVar5 + (int)*(short *)(*piVar5 + 0x88));
    }
  }
  return 1;
}


// ==== FUN_00285510 @ 00285510 ====

uint FUN_00285510(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 + 0xe00;
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x35) != '\0') {
      uVar2 = uVar2 | 1 << (uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x3c;
  } while ((int)uVar1 < 0x18);
  return uVar2;
}


// ==== FUN_00285548 @ 00285548 ====

uint FUN_00285548(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 + 0x13a0;
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x35) != '\0') {
      uVar2 = uVar2 | 1 << (uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x3c;
  } while ((int)uVar1 < 0xb);
  for (; (int)uVar1 < 0x18; uVar1 = uVar1 + 1) {
    uVar2 = uVar2 | 1 << (uVar1 & 0x1f);
  }
  return uVar2;
}


// ==== FUN_002855a8 @ 002855a8 ====

void FUN_002855a8(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 auStack_b0 [4];
  undefined4 auStack_a0 [7];
  undefined1 uStack_84;
  
  uVar4 = 0;
  iVar2 = param_1 + 0xe00;
  *(undefined4 *)(param_1 + 0x1870) = *param_2;
  *(undefined4 *)(param_1 + 0x186c) = param_2[1];
  do {
    uVar4 = uVar4 + 1;
    FUN_002835c8(iVar2,0,*param_2,0,0,0,*(undefined1 *)(param_2 + 10));
    iVar2 = iVar2 + 0x3c;
  } while (uVar4 < 0x18);
  uVar4 = 0;
  iVar2 = param_1 + 0x13a0;
  do {
    uVar4 = uVar4 + 1;
    FUN_002835c8(iVar2,0,*param_2,1,0,0,*(undefined1 *)(param_2 + 10));
    iVar2 = iVar2 + 0x3c;
  } while (uVar4 < 0xb);
  uVar5 = 0;
  auStack_b0[0] = 0x16;
  uVar4 = 0xb;
  uVar1 = *param_2;
  puVar3 = (undefined4 *)(param_1 + 0x1838);
  while( true ) {
    uVar4 = uVar4 + 1;
    uVar1 = FUN_00327f20(uVar1,auStack_b0,0,0,0);
    uVar5 = uVar5 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    if ((0x17 < uVar4) || (0xc < uVar5)) break;
    uVar1 = *param_2;
  }
  FUN_00316c38(*param_2,(undefined4 *)(param_1 + 0x1838),0xd);
  uStack_84 = *(undefined1 *)(param_2 + 10);
  auStack_a0[0] = *param_2;
  uVar4 = param_1;
  do {
    FUN_002843b0(uVar4,auStack_a0);
    uVar4 = uVar4 + 0x38;
  } while (uVar4 < param_1 + 0xe00);
  FUN_00281478(param_1);
  FUN_00281620(0x3f800000,0x3f800000,0,0,0x3f800000,param_1);
  return;
}


// ==== FUN_00285748 @ 00285748 ====

undefined8 FUN_00285748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puStack_70 = &DAT_003e26b0;
  uStack_6c = 0;
  lVar1 = FUN_00281b50(param_2);
  if (lVar1 != 0) {
    iVar3 = (int)param_2;
    lVar2 = FUN_00284bf0(lVar1,param_3,*(undefined4 *)(iVar3 + 0x186c));
    if (lVar2 == 0) {
      lVar1 = 0;
      *(int *)(iVar3 + 0x182c) = *(int *)(iVar3 + 0x182c) + 1;
    }
  }
  FUN_00280fe0(&puStack_70,lVar1);
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_003e26b0;
  *(undefined1 *)(puVar4 + 1) = uStack_6c;
  puVar4[2] = uStack_68;
  puVar4[3] = uStack_64;
  return param_1;
}


// ==== FUN_00285818 @ 00285818 ====

void FUN_00285818(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 auStack_40 [2];
  
  *(int *)((int)param_1 + 0x18) = param_2;
  auStack_40[0] = FUN_002723b0(*(undefined4 *)(param_2 + 4));
  FUN_00281ee0(param_1,auStack_40,param_3);
  return;
}


// ==== FUN_00285880 @ 00285880 ====

void FUN_00285880(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00281f88();
  return;
}


// ==== FUN_002858e0 @ 002858e0 ====

void FUN_002858e0(int param_1)

{
  FUN_00291e90((float)(*(ulong *)(*(int *)(param_1 + 0x18) + 0x18) & 0xffffffff) * 1.75);
  return;
}


// ==== FUN_00285980 @ 00285980 ====

void FUN_00285980(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  DAT_0040ebb4 = param_4;
  DAT_0040ebb8 = param_5;
  DAT_0040ebbc = param_2;
  uGpffff93cd = param_3;
  return;
}


// ==== FUN_002859f8 @ 002859f8 ====

void FUN_002859f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  FUN_002831a0(param_1,param_5);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0xcbb8) = param_3;
  *(undefined1 *)(iVar2 + 0xcb9d) = 0;
  uStack_68 = 1;
  uStack_70 = 0x30;
  uStack_6c = 0;
  uStack_64 = param_3;
  uStack_60 = param_2;
  uStack_5c = param_4;
  uVar1 = FUN_00326538(&uStack_70,2,0,0);
  *(undefined4 *)(iVar2 + 0xcba8) = uVar1;
  FUN_00326858(0);
  return;
}


// ==== FUN_00285aa8 @ 00285aa8 ====

void FUN_00285aa8(int param_1)

{
  FUN_00325ad0(*(undefined4 *)(param_1 + 0xcba8));
  return;
}


// ==== FUN_00285ad0 @ 00285ad0 ====

void FUN_00285ad0(undefined8 param_1)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_30 = 1;
  uStack_2c = FUN_00285ca0(param_1,0);
  uStack_28 = FUN_00285ca0(param_1,0);
  uStack_24 = 0;
  iVar1 = (int)param_1;
  FUN_00286278(iVar1 + 0x1c0,&uStack_30);
  FUN_002860d0(0x3f800000,param_1);
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  return;
}


// ==== FUN_00285b60 @ 00285b60 ====

undefined4 FUN_00285b60(int param_1,undefined4 *param_2)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  uStack_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  uStack_38 = param_2[8];
  uStack_34 = param_2[9];
  uStack_30 = param_2[10];
  uStack_2c = param_2[0xb];
  uStack_28 = param_2[0xc];
  uStack_24 = param_2[0xd];
  uStack_14 = *(undefined1 *)(param_2 + 0xe);
  uStack_20 = 1;
  if (param_2[1] != 0) {
    uStack_20 = 2;
  }
  uStack_18 = param_2[1];
  uStack_1c = *param_2;
  FUN_00286468(param_1 + 0x1c0,&uStack_50);
  return 1;
}


// ==== FUN_00285c20 @ 00285c20 ====

void FUN_00285c20(int param_1)

{
  FUN_00286558(param_1 + 0x1c0);
  return;
}


// ==== FUN_00285c40 @ 00285c40 ====

void FUN_00285c40(int param_1)

{
  FUN_00286720(param_1 + 0x1c0);
  return;
}


// ==== FUN_00285c60 @ 00285c60 ====

void FUN_00285c60(int param_1)

{
  FUN_00286598(param_1 + 0x1c0);
  return;
}


// ==== FUN_00285c80 @ 00285c80 ====

void FUN_00285c80(int param_1)

{
  FUN_00286770(param_1 + 0x1c0);
  return;
}


// ==== FUN_00285ca0 @ 00285ca0 ====

uint FUN_00285ca0(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      uVar1 = uVar1 << 1 | 1;
    } while (param_2 != 0);
  }
  return uVar1;
}


// ==== FUN_00285cc8 @ 00285cc8 ====

float FUN_00285cc8(float param_1,float param_2,float param_3,undefined1 (*param_4) [16],
                  undefined4 *param_5,float *param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 in_zero_qw [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 in_t7_udw;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_s1_qw [16];
  undefined1 auVar32 [16];
  uint uVar33;
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float in_f1;
  float fVar47;
  float in_f0;
  float fVar48;
  float in_f3;
  float in_f2;
  float fVar49;
  float in_f5;
  float fVar50;
  float in_f4;
  float fVar51;
  float in_f7;
  float in_f6;
  float in_f9;
  float in_f8;
  float in_f11;
  float fVar52;
  float fVar53;
  float in_f10;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  
  param_6[10] = in_f0;
  param_6[0xb] = in_f1;
  param_6[0xc] = in_f2;
  param_6[0xd] = in_f3;
  param_6[0xe] = in_f4;
  param_6[0xf] = in_f5;
  param_6[0x10] = in_f6;
  param_6[0x11] = in_f7;
  param_6[0x12] = in_f8;
  param_6[0x13] = in_f9;
  param_6[0x14] = in_f10;
  param_6[0x15] = in_f11;
  param_6[0x16] = param_1;
  param_6[0x17] = param_2;
  param_6[0x18] = param_3;
  auVar30._8_8_ = in_t7_udw;
  auVar30._0_8_ = 0xffff;
  auVar30 = _pcpyld(in_zero_qw,auVar30);
  fVar48 = *param_6;
  fVar47 = param_6[1];
  fVar49 = param_6[2];
  fVar51 = param_6[4];
  fVar50 = param_6[5];
  fVar54 = param_6[6];
  fVar52 = param_6[7];
  fVar57 = param_6[8];
  fVar55 = param_6[9];
  auVar32._8_8_ = in_s1_qw._8_8_;
  auVar32._0_8_ = 0x10;
  auVar32 = _pcpyld(auVar32,auVar32);
  uVar33 = 0x100;
  do {
    auVar34 = *param_4;
    pauVar1 = param_4 + 1;
    pauVar8 = param_4 + 1;
    pauVar2 = param_4 + 2;
    pauVar9 = param_4 + 2;
    pauVar3 = param_4 + 3;
    pauVar10 = param_4 + 3;
    pauVar4 = param_4 + 4;
    pauVar11 = param_4 + 4;
    pauVar5 = param_4 + 5;
    pauVar12 = param_4 + 5;
    pauVar6 = param_4 + 6;
    pauVar13 = param_4 + 6;
    pauVar7 = param_4 + 7;
    pauVar14 = param_4 + 7;
    param_4 = param_4 + 8;
    uVar15 = *(undefined8 *)*pauVar7;
    uVar16 = *(undefined8 *)(*pauVar14 + 8);
    uVar17 = *(undefined8 *)*pauVar1;
    uVar18 = *(undefined8 *)(*pauVar8 + 8);
    uVar19 = *(undefined8 *)*pauVar2;
    uVar20 = *(undefined8 *)(*pauVar9 + 8);
    uVar21 = *(undefined8 *)*pauVar3;
    uVar22 = *(undefined8 *)(*pauVar10 + 8);
    uVar23 = *(undefined8 *)*pauVar4;
    uVar24 = *(undefined8 *)(*pauVar11 + 8);
    uVar25 = *(undefined8 *)*pauVar5;
    uVar26 = *(undefined8 *)(*pauVar12 + 8);
    uVar27 = *(undefined8 *)*pauVar6;
    uVar28 = *(undefined8 *)(*pauVar13 + 8);
    do {
      uVar46 = uVar28;
      uVar45 = uVar27;
      uVar44 = uVar26;
      uVar43 = uVar25;
      uVar42 = uVar24;
      uVar41 = uVar23;
      uVar40 = uVar22;
      uVar39 = uVar21;
      uVar38 = uVar20;
      uVar37 = uVar19;
      uVar36 = uVar18;
      uVar35 = uVar17;
      uVar28 = uVar16;
      uVar27 = uVar15;
      auVar29 = _pcpyld(in_zero_qw,in_zero_qw);
      fVar53 = fVar52;
      fVar56 = fVar55;
      do {
        fVar55 = fVar57;
        fVar52 = fVar54;
        auVar31 = _pextlh(auVar34._0_8_,0);
        auVar31 = _psravw(auVar31,auVar32);
        fVar54 = (float)auVar31._0_4_;
        fVar57 = (fVar53 * fVar49 + fVar52 * fVar47 + fVar54 * fVar48 + 0.0) -
                 (fVar56 * fVar50 + fVar55 * fVar51 + 0.0);
        auVar34 = _qfsrv(auVar34,auVar34);
        auVar31._0_8_ = (long)(int)fVar57;
        auVar31 = _pcpyld(auVar31,auVar31);
        auVar31 = _pcpyh(auVar31);
        auVar31 = _pand(auVar31,auVar30);
        auVar29 = _por(auVar29,auVar31);
        auVar30 = _qfsrv(auVar30,auVar30);
        fVar53 = fVar52;
        fVar56 = fVar55;
      } while (auVar30._0_8_ != 0xffff);
      auVar34._8_8_ = uVar36;
      auVar34._0_8_ = uVar35;
      uVar33 = uVar33 - 8;
      uVar15 = auVar29._0_8_;
      uVar16 = auVar29._8_8_;
      uVar17 = uVar37;
      uVar18 = uVar38;
      uVar19 = uVar39;
      uVar20 = uVar40;
      uVar21 = uVar41;
      uVar22 = uVar42;
      uVar23 = uVar43;
      uVar24 = uVar44;
      uVar25 = uVar45;
      uVar26 = uVar46;
    } while ((uVar33 & 0x3f) != 0);
    *param_5 = (int)uVar35;
    param_5[1] = (int)((ulong)uVar35 >> 0x20);
    param_5[2] = (int)uVar36;
    param_5[3] = (int)((ulong)uVar36 >> 0x20);
    param_5[4] = (int)uVar37;
    param_5[5] = (int)((ulong)uVar37 >> 0x20);
    param_5[6] = (int)uVar38;
    param_5[7] = (int)((ulong)uVar38 >> 0x20);
    param_5[8] = (int)uVar39;
    param_5[9] = (int)((ulong)uVar39 >> 0x20);
    param_5[10] = (int)uVar40;
    param_5[0xb] = (int)((ulong)uVar40 >> 0x20);
    param_5[0xc] = (int)uVar41;
    param_5[0xd] = (int)((ulong)uVar41 >> 0x20);
    param_5[0xe] = (int)uVar42;
    param_5[0xf] = (int)((ulong)uVar42 >> 0x20);
    param_5[0x10] = (int)uVar43;
    param_5[0x11] = (int)((ulong)uVar43 >> 0x20);
    param_5[0x12] = (int)uVar44;
    param_5[0x13] = (int)((ulong)uVar44 >> 0x20);
    param_5[0x14] = (int)uVar45;
    param_5[0x15] = (int)((ulong)uVar45 >> 0x20);
    param_5[0x16] = (int)uVar46;
    param_5[0x17] = (int)((ulong)uVar46 >> 0x20);
    param_5[0x18] = (int)uVar27;
    param_5[0x19] = (int)((ulong)uVar27 >> 0x20);
    param_5[0x1a] = (int)uVar28;
    param_5[0x1b] = (int)((ulong)uVar28 >> 0x20);
    param_5[0x1c] = auVar29._0_4_;
    param_5[0x1d] = auVar29._4_4_;
    param_5[0x1e] = auVar29._8_4_;
    param_5[0x1f] = auVar29._12_4_;
    param_5 = param_5 + 0x20;
  } while (uVar33 != 0);
  param_6[6] = fVar54;
  param_6[7] = fVar52;
  param_6[8] = fVar57;
  param_6[9] = fVar55;
  return param_6[10];
}


// ==== FUN_00285ee8 @ 00285ee8 ====

void FUN_00285ee8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined4 *param_3)

{
  int iVar1;
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
  
  iVar1 = 0x100;
  do {
    auVar8 = _psrah(*param_2,1);
    auVar9 = _psrah(param_2[1],1);
    auVar10 = _psrah(param_2[2],1);
    auVar11 = _psrah(param_2[3],1);
    auVar12 = _psrah(param_2[4],1);
    auVar13 = _psrah(param_2[5],1);
    auVar14 = _psrah(param_2[6],1);
    auVar15 = _psrah(param_2[7],1);
    auVar2 = _psrah(*param_1,1);
    auVar3 = _psrah(param_1[1],1);
    auVar4 = _psrah(param_1[2],1);
    auVar5 = _psrah(param_1[3],1);
    auVar6 = _psrah(param_1[4],1);
    auVar7 = _psrah(param_1[5],1);
    auVar16 = _psrah(param_1[6],1);
    auVar17 = _psrah(param_1[7],1);
    auVar2 = _paddh(auVar8,auVar2);
    auVar3 = _paddh(auVar9,auVar3);
    auVar4 = _paddh(auVar10,auVar4);
    auVar5 = _paddh(auVar11,auVar5);
    auVar6 = _paddh(auVar12,auVar6);
    auVar7 = _paddh(auVar13,auVar7);
    auVar8 = _paddh(auVar14,auVar16);
    auVar9 = _paddh(auVar15,auVar17);
    *param_3 = auVar2._0_4_;
    param_3[1] = auVar2._4_4_;
    param_3[2] = auVar2._8_4_;
    param_3[3] = auVar2._12_4_;
    param_3[4] = auVar3._0_4_;
    param_3[5] = auVar3._4_4_;
    param_3[6] = auVar3._8_4_;
    param_3[7] = auVar3._12_4_;
    param_3[8] = auVar4._0_4_;
    param_3[9] = auVar4._4_4_;
    param_3[10] = auVar4._8_4_;
    param_3[0xb] = auVar4._12_4_;
    param_3[0xc] = auVar5._0_4_;
    param_3[0xd] = auVar5._4_4_;
    param_3[0xe] = auVar5._8_4_;
    param_3[0xf] = auVar5._12_4_;
    param_3[0x10] = auVar6._0_4_;
    param_3[0x11] = auVar6._4_4_;
    param_3[0x12] = auVar6._8_4_;
    param_3[0x13] = auVar6._12_4_;
    param_3[0x14] = auVar7._0_4_;
    param_3[0x15] = auVar7._4_4_;
    param_3[0x16] = auVar7._8_4_;
    param_3[0x17] = auVar7._12_4_;
    param_3[0x18] = auVar8._0_4_;
    param_3[0x19] = auVar8._4_4_;
    param_3[0x1a] = auVar8._8_4_;
    param_3[0x1b] = auVar8._12_4_;
    param_3[0x1c] = auVar9._0_4_;
    param_3[0x1d] = auVar9._4_4_;
    param_3[0x1e] = auVar9._8_4_;
    param_3[0x1f] = auVar9._12_4_;
    auVar8 = _psrah(param_2[0x20],1);
    auVar9 = _psrah(param_2[0x21],1);
    auVar10 = _psrah(param_2[0x22],1);
    auVar11 = _psrah(param_2[0x23],1);
    auVar12 = _psrah(param_2[0x24],1);
    auVar13 = _psrah(param_2[0x25],1);
    auVar14 = _psrah(param_2[0x26],1);
    auVar15 = _psrah(param_2[0x27],1);
    auVar2 = _psrah(param_1[0x20],1);
    auVar3 = _psrah(param_1[0x21],1);
    auVar4 = _psrah(param_1[0x22],1);
    auVar5 = _psrah(param_1[0x23],1);
    auVar6 = _psrah(param_1[0x24],1);
    auVar7 = _psrah(param_1[0x25],1);
    auVar16 = _psrah(param_1[0x26],1);
    auVar17 = _psrah(param_1[0x27],1);
    auVar2 = _paddh(auVar8,auVar2);
    auVar3 = _paddh(auVar9,auVar3);
    auVar4 = _paddh(auVar10,auVar4);
    auVar5 = _paddh(auVar11,auVar5);
    auVar6 = _paddh(auVar12,auVar6);
    auVar7 = _paddh(auVar13,auVar7);
    auVar8 = _paddh(auVar14,auVar16);
    auVar9 = _paddh(auVar15,auVar17);
    param_3[0x80] = auVar2._0_4_;
    param_3[0x81] = auVar2._4_4_;
    param_3[0x82] = auVar2._8_4_;
    param_3[0x83] = auVar2._12_4_;
    param_3[0x84] = auVar3._0_4_;
    param_3[0x85] = auVar3._4_4_;
    param_3[0x86] = auVar3._8_4_;
    param_3[0x87] = auVar3._12_4_;
    param_3[0x88] = auVar4._0_4_;
    param_3[0x89] = auVar4._4_4_;
    param_3[0x8a] = auVar4._8_4_;
    param_3[0x8b] = auVar4._12_4_;
    param_3[0x8c] = auVar5._0_4_;
    param_3[0x8d] = auVar5._4_4_;
    param_3[0x8e] = auVar5._8_4_;
    param_3[0x8f] = auVar5._12_4_;
    param_3[0x90] = auVar6._0_4_;
    param_3[0x91] = auVar6._4_4_;
    param_3[0x92] = auVar6._8_4_;
    param_3[0x93] = auVar6._12_4_;
    param_3[0x94] = auVar7._0_4_;
    param_3[0x95] = auVar7._4_4_;
    param_3[0x96] = auVar7._8_4_;
    param_3[0x97] = auVar7._12_4_;
    param_3[0x98] = auVar8._0_4_;
    param_3[0x99] = auVar8._4_4_;
    param_3[0x9a] = auVar8._8_4_;
    param_3[0x9b] = auVar8._12_4_;
    param_3[0x9c] = auVar9._0_4_;
    param_3[0x9d] = auVar9._4_4_;
    param_3[0x9e] = auVar9._8_4_;
    param_3[0x9f] = auVar9._12_4_;
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    param_3 = param_3 + 0x20;
    iVar1 = iVar1 + -0x40;
  } while (iVar1 != 0);
  return;
}


// ==== FUN_002860d0 @ 002860d0 ====

void FUN_002860d0(undefined8 param_1)

{
  FUN_002860f0((int)param_1,param_1,(int)param_1 + 0x70);
  return;
}


// ==== FUN_002860f0 @ 002860f0 ====

void FUN_002860f0(undefined4 param_1)

{
  FUN_00286220(param_1,0,0,0x3f800000,0,0);
  return;
}


// ==== FUN_00286120 @ 00286120 ====

void FUN_00286120(undefined8 param_1)

{
  FUN_00286140((int)param_1,param_1,(int)param_1 + 0x70);
  return;
}


// ==== FUN_00286140 @ 00286140 ====

void FUN_00286140(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_1 * 6.2831855) / 48000.0;
  fVar1 = (float)FUN_0029dc18(fVar3);
  fVar3 = (float)FUN_0029da28(fVar3);
  fVar1 = fVar1 / (param_2 + param_2);
  fVar2 = (1.0 - fVar3) * 0.5;
  FUN_00286220(fVar2,1.0 - fVar3,fVar2,fVar1 + 1.0,fVar3 * -2.0,1.0 - fVar1,param_3,param_4,param_5)
  ;
  return;
}


// ==== FUN_00286220 @ 00286220 ====

void FUN_00286220(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,float *param_8,float *param_9)

{
  *param_8 = param_1 / param_4;
  param_8[1] = param_2 / param_4;
  param_8[2] = param_3 / param_4;
  param_8[5] = param_6 / param_4;
  param_8[4] = param_5 / param_4;
  param_8[3] = param_4 / param_4;
  param_9[5] = param_6 / param_4;
  *param_9 = param_1 / param_4;
  param_9[1] = param_2 / param_4;
  param_9[2] = param_3 / param_4;
  param_9[3] = param_4 / param_4;
  param_9[4] = param_5 / param_4;
  return;
}


// ==== FUN_00286278 @ 00286278 ====

void FUN_00286278(undefined8 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  
  FUN_0036a8d8(0);
  do {
    iVar8 = (int)param_1;
    FUN_0036af20(iVar8 + 0x2840,0x101079,0);
  } while (*(int *)(iVar8 + 0x2864) == 0);
  FUN_0036a460(6,0x286990,param_1);
  *(undefined4 *)(iVar8 + 0x287c) = 0;
  *(undefined4 *)(iVar8 + 0x2440) = 0;
  *(int *)(iVar8 + 0x286c) = iVar8 + 0x2444;
  *(int *)(iVar8 + 0x2868) = iVar8 + 0x2440;
  piVar1 = (int *)FUN_002867c0(param_1,0x8000,5);
  *piVar1 = iVar8;
  piVar1[1] = *param_2;
  piVar1[2] = param_2[1];
  piVar1[3] = param_2[2];
  piVar1[4] = (uint)*(byte *)(param_2 + 3);
  *(int *)(iVar8 + 0x2418) = *param_2;
  *(int *)(iVar8 + 0x2874) = param_2[1];
  *(int *)(iVar8 + 0x2878) = param_2[2];
  iVar5 = param_2[3];
  *(char *)(iVar8 + 0x288e) = (char)iVar5;
  if ((char)iVar5 == '\0') {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0x800;
  }
  *(undefined4 *)(iVar8 + 0x2434) = uVar2;
  *(undefined1 *)(iVar8 + 0x288c) = 1;
  FUN_00286598(0,0,0,param_1,0,0);
  FUN_002867f0(param_1,1);
  *(undefined4 *)(iVar8 + 0x2410) = 0;
  puVar7 = (undefined2 *)(iVar8 + 0x1c00);
  *(undefined4 *)(iVar8 + 0x242c) = 0;
  puVar6 = (undefined2 *)(iVar8 + 0x2000);
  *(undefined1 *)(iVar8 + 0x288c) = 0;
  puVar4 = (undefined2 *)(iVar8 + 0x1400);
  *(undefined1 *)(iVar8 + 0x288d) = 0;
  puVar3 = (undefined2 *)(iVar8 + 0xc00);
  *(undefined1 *)(iVar8 + 0x288f) = 0;
  iVar5 = 0x3ff;
  do {
    *puVar3 = 0;
    iVar5 = iVar5 + -1;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar5);
  iVar5 = 0x1ff;
  do {
    *puVar7 = 0;
    iVar5 = iVar5 + -1;
    *puVar6 = 0;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar5);
  *(undefined4 *)(iVar8 + 0x2870) = 1;
  return;
}


// ==== FUN_00286410 @ 00286410 ====

void FUN_00286410(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002867c0(param_1,0x70,2);
  puVar1[1] = param_3;
  *puVar1 = param_2;
  FUN_002867f0(param_1,1);
  return;
}


// ==== FUN_00286468 @ 00286468 ====

undefined4 FUN_00286468(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x2400) = *param_2;
  *(undefined4 *)(iVar3 + 0x241c) = param_2[1];
  *(undefined4 *)(iVar3 + 0x2404) = param_2[2];
  *(undefined4 *)(iVar3 + 0x2420) = param_2[3];
  *(undefined4 *)(iVar3 + 0x2408) = param_2[4];
  *(undefined4 *)(iVar3 + 0x2424) = param_2[5];
  *(undefined4 *)(iVar3 + 0x240c) = param_2[6];
  *(undefined4 *)(iVar3 + 0x2428) = param_2[7];
  *(undefined4 *)(iVar3 + 0x2414) = param_2[8];
  *(undefined4 *)(iVar3 + 0x2430) = param_2[9];
  *(undefined4 *)(iVar3 + 0x2410) = param_2[10];
  *(undefined4 *)(iVar3 + 0x242c) = param_2[0xb];
  if (*(int *)(iVar3 + 0x2870) == 3) {
    FUN_00286770(param_1);
  }
  *(undefined4 *)(iVar3 + 0x2870) = 2;
  cVar1 = *(char *)(param_2 + 0xf);
  *(char *)(iVar3 + 0x288e) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0x800;
  }
  *(undefined4 *)(iVar3 + 0x2434) = uVar2;
  FUN_00286698(param_1,param_2[0xc],param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf));
  return 1;
}


// ==== FUN_00286558 @ 00286558 ====

void FUN_00286558(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2870);
  if (((-1 < iVar1) && (1 < iVar1)) && (iVar1 < 4)) {
    FUN_002867f0(param_1,0);
  }
  return;
}


// ==== FUN_00286598 @ 00286598 ====

void FUN_00286598(float param_1,float param_2,float param_3,undefined8 param_4,ulong param_5,
                 ulong param_6)

{
  bool bVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (int)param_4;
  bVar1 = *(int *)(iVar4 + 0x2418) == 1;
  uVar3 = (undefined1)param_5;
  if (*(byte *)(iVar4 + 0x288c) == param_5) {
    if (*(byte *)(iVar4 + 0x288d) == param_6) {
      if (*(int *)(iVar4 + 0x2880) == (int)(param_1 * 32767.0)) {
        if (*(int *)(iVar4 + 0x2884) == (int)(param_2 * 32767.0)) {
          if (*(int *)(iVar4 + 0x2888) == (int)(param_3 * 32767.0)) {
            if ((bool)*(char *)(iVar4 + 0x288f) == bVar1) {
              return;
            }
            *(undefined1 *)(iVar4 + 0x288c) = uVar3;
          }
          else {
            *(undefined1 *)(iVar4 + 0x288c) = uVar3;
          }
        }
        else {
          *(undefined1 *)(iVar4 + 0x288c) = uVar3;
        }
      }
      else {
        *(undefined1 *)(iVar4 + 0x288c) = uVar3;
      }
    }
    else {
      *(undefined1 *)(iVar4 + 0x288c) = uVar3;
    }
  }
  else {
    *(undefined1 *)(iVar4 + 0x288c) = uVar3;
  }
  *(char *)(iVar4 + 0x288d) = (char)param_6;
  *(int *)(iVar4 + 0x2880) = (int)(param_1 * 32767.0);
  *(int *)(iVar4 + 0x2884) = (int)(param_2 * 32767.0);
  *(int *)(iVar4 + 0x2888) = (int)(param_3 * 32767.0);
  *(bool *)(iVar4 + 0x288f) = bVar1;
  puVar2 = (uint *)FUN_002867c0(param_4,0x60,6);
  *puVar2 = (uint)*(byte *)(iVar4 + 0x288c);
  puVar2[1] = (uint)*(byte *)(iVar4 + 0x288d);
  puVar2[2] = *(uint *)(iVar4 + 0x2880);
  puVar2[3] = *(uint *)(iVar4 + 0x2884);
  puVar2[4] = *(uint *)(iVar4 + 0x2888);
  puVar2[5] = (uint)*(byte *)(iVar4 + 0x288f);
  return;
}


// ==== FUN_00286698 @ 00286698 ====

void FUN_00286698(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002867c0(param_1,0x8050,4);
  puVar1[3] = param_5;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x2418) = param_2;
  *(undefined4 *)(iVar2 + 0x2874) = param_3;
  *(undefined4 *)(iVar2 + 0x2878) = param_4;
  *(char *)(iVar2 + 0x288e) = (char)param_5;
  *(undefined1 *)(iVar2 + 0x288d) = 0;
  *(undefined1 *)(iVar2 + 0x288c) = 0;
  return;
}


// ==== FUN_00286720 @ 00286720 ====

void FUN_00286720(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x2870) == 2) {
    FUN_002867c0(param_1,0x8020,0);
    FUN_002867f0(param_1,1);
    *(undefined4 *)((int)param_1 + 0x2870) = 3;
  }
  return;
}


// ==== FUN_00286770 @ 00286770 ====

void FUN_00286770(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x2870) == 3) {
    FUN_002867c0(param_1,0x30,0);
    FUN_002867f0(param_1,1);
    *(undefined4 *)((int)param_1 + 0x2870) = 2;
  }
  return;
}


// ==== FUN_002867c0 @ 002867c0 ====

void FUN_002867c0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x286c);
  *puVar1 = param_2;
  *(undefined4 **)(param_1 + 0x286c) = puVar1 + param_3 + 1;
  **(int **)(param_1 + 0x2868) = **(int **)(param_1 + 0x2868) + 1;
  return;
}


// ==== FUN_002867f0 @ 002867f0 ====

void FUN_002867f0(int param_1,long param_2)

{
  if (**(int **)(param_1 + 0x2868) != 0) {
    FUN_0036b300(param_1 + 0x2840);
    FUN_0036b100(param_1 + 0x2840,0x101079,param_2 == 0,param_1 + 0x2440,0x400,0,0,0);
    **(undefined4 **)(param_1 + 0x2868) = 0;
    *(int *)(param_1 + 0x286c) = param_1 + 0x2444;
  }
  return;
}


// ==== FUN_00286878 @ 00286878 ====

uint FUN_00286878(float param_1,undefined8 param_2,undefined2 *param_3,int param_4,uint param_5)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 24000.0;
  fVar5 = 48000.0;
  if (param_1 <= 24000.0) {
    fVar4 = param_1;
  }
  if (0 < param_4) {
    do {
      uVar1 = (ulong)param_5;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
      uVar3 = FUN_00291f58((fVar4 * 6.2831855 * (float)uVar1) / fVar5);
      uVar3 = FUN_0029d5b0(uVar3);
      uVar3 = FUN_002914d0(uVar3,0x40d66639a0000000);
      uVar2 = FUN_00291b00(uVar3);
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return param_5;
}


// ==== FUN_00286990 @ 00286990 ====

void FUN_00286990(int param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  iVar3 = (int)param_2;
  uVar1 = iVar3 + 0x400U | 0x30000000;
  uVar8 = iVar3 + 0x200U | 0x30000000;
  uVar2 = iVar3 + 0x600U | 0x30000000;
  param_2 = param_2 | 0x30000000;
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = *(uint *)(param_1 + 0xc);
  if (*(int *)(iVar3 + 0x2418) != 1) {
    if (*(int *)(iVar3 + 0x2418) != 2) {
      uVar6 = 0;
      uVar4 = 0;
      uVar1 = 0;
      uVar2 = 0;
      goto LAB_00286b88;
    }
    if (*(code **)(iVar3 + 0x2414) == (code *)0x0) {
      if ((uVar7 & 1) == 1) {
        uVar4 = iVar3 + 0x1c00U | 0x30000000;
        uVar5 = iVar3 + 0x1e00U | 0x30000000;
        (**(code **)(iVar3 + 0x2408))(uVar1,uVar4,*(undefined4 *)(iVar3 + 0x2424));
        (**(code **)(iVar3 + 0x240c))(uVar2,uVar5,*(undefined4 *)(iVar3 + 0x2428));
      }
      else {
        uVar4 = iVar3 + 0x2000U | 0x30000000;
        uVar5 = iVar3 + 0x2200U | 0x30000000;
        (**(code **)(iVar3 + 0x2408))(uVar1,uVar4,*(undefined4 *)(iVar3 + 0x2424));
        (**(code **)(iVar3 + 0x240c))(uVar2,uVar5,*(undefined4 *)(iVar3 + 0x2428));
      }
    }
    else {
      (**(code **)(iVar3 + 0x2414))(param_2,uVar1,param_2,*(undefined4 *)(iVar3 + 0x2430));
    }
  }
  if ((uVar7 & 1) == 1) {
    uStack_b0 = iVar3 + 0x1400U | 0x30000000;
    uVar2 = iVar3 + 0xc00U | 0x30000000;
    uVar6 = iVar3 + 0xe00U | 0x30000000;
    (**(code **)(iVar3 + 0x2400))(param_2,uVar2,*(undefined4 *)(iVar3 + 0x241c));
    uVar7 = uVar7 - 1;
    (**(code **)(iVar3 + 0x2404))(uVar8,uVar6,*(undefined4 *)(iVar3 + 0x2420));
    uVar1 = iVar3 + 0x1000;
  }
  else {
    uStack_b0 = iVar3 + 0xc00U | 0x30000000;
    uVar2 = iVar3 + 0x1400U | 0x30000000;
    uVar6 = iVar3 + 0x1600U | 0x30000000;
    (**(code **)(iVar3 + 0x2400))(param_2,uVar2,*(undefined4 *)(iVar3 + 0x241c));
    (**(code **)(iVar3 + 0x2404))(uVar8,uVar6,*(undefined4 *)(iVar3 + 0x2420));
    uVar1 = iVar3 + 0x1800;
  }
  uVar1 = uVar1 | 0x30000000;
LAB_00286b88:
  if (*(code **)(iVar3 + 0x2410) != (code *)0x0) {
    (**(code **)(iVar3 + 0x2410))
              (0x100,uVar2,uVar6,uVar4,uVar5,uVar1,uVar2,*(undefined4 *)(iVar3 + 0x242c));
  }
  uStack_a8 = *(undefined4 *)(iVar3 + 0x2434);
  uStack_b0 = uStack_b0 & 0x2fffffff;
  uStack_a4 = 0;
  uStack_ac = uVar7;
  isceSifSetDma(&uStack_b0,1);
  SYNC(0);
  EI();
  return;
}


// ==== FUN_00286c10 @ 00286c10 ====

void FUN_00286c10(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    auVar1 = _pextlw(0,0);
    auVar2 = _pextlw(0,auVar1._0_8_);
    DAT_00443230 = auVar2._0_4_;
    DAT_00443234 = auVar2._4_4_;
    DAT_00443238 = auVar2._8_4_;
    DAT_0044323c = auVar2._12_4_;
    auVar1 = _pextlw(0x3f800000,auVar1._0_8_);
    DAT_00443250 = auVar1._0_4_;
    DAT_00443254 = auVar1._4_4_;
    DAT_00443258 = auVar1._8_4_;
    DAT_0044325c = auVar1._12_4_;
    DAT_00443224 = 0;
    DAT_00443240 = 0;
    DAT_00443244 = 0;
  }
  return;
}


// ==== FUN_00286c80 @ 00286c80 ====

void FUN_00286c80(void)

{
  FUN_00286c10(1,0xffff);
  return;
}


// ==== FUN_00286ca8 @ 00286ca8 ====

void FUN_00286ca8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 8);
    while( true ) {
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      piVar2 = (int *)(iVar3 + iVar1);
      *piVar2 = *piVar2 + param_1;
      FUN_0028eed8(*(undefined4 *)(iVar3 + *(int *)(param_1 + 8)));
      if (*(int *)(param_1 + 4) <= iVar4) break;
      iVar1 = *(int *)(param_1 + 8);
    }
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x18);
  }
  else {
    FUN_00272aa8(iVar4);
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 < 1) {
      iVar4 = *(int *)(param_1 + 0x18);
    }
    else {
      do {
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar4 = *(int *)(param_1 + 0x18);
    }
  }
  if (iVar4 != 0) {
    FUN_0027a738();
  }
  return;
}


// ==== FUN_00286db8 @ 00286db8 ====

void FUN_00286db8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00272730();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar3 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(iVar2 + iVar3);
      *piVar1 = *piVar1 + param_1;
      piVar1[1] = piVar1[1] + param_1;
      FUN_00286ca8();
      if (*(int *)(param_1 + 8) <= iVar4) break;
      iVar3 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}


// ==== FUN_00286e30 @ 00286e30 ====

void FUN_00286e30(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
  }
  uVar8 = 0;
  FUN_00272aa8(*(undefined4 *)(param_1 + 8));
  if (*(short *)(param_1 + 0x30) == 0) {
    sVar1 = *(short *)(param_1 + 0x32);
  }
  else {
    iVar7 = 0;
    do {
      FUN_00287100(*(int *)(param_1 + 0x10) + iVar7);
      uVar8 = uVar8 + 1 & 0xffff;
      iVar7 = uVar8 * 0x34;
    } while (uVar8 < *(ushort *)(param_1 + 0x30));
    sVar1 = *(short *)(param_1 + 0x32);
  }
  uVar8 = 0;
  if (sVar1 != 0) {
    iVar7 = *(int *)(param_1 + 0x18);
    while( true ) {
      piVar4 = (int *)(uVar8 * 4 + iVar7);
      iVar7 = *piVar4;
      if (iVar7 != 0) {
        *piVar4 = iVar7 + param_1;
      }
      piVar4 = (int *)(uVar8 * 4 + *(int *)(param_1 + 0x24));
      iVar7 = *piVar4;
      if (iVar7 != 0) {
        *piVar4 = iVar7 + param_1;
      }
      uVar8 = uVar8 + 1 & 0xffff;
      if (*(ushort *)(param_1 + 0x32) <= uVar8) break;
      iVar7 = *(int *)(param_1 + 0x18);
    }
  }
  uVar8 = 0;
  if (*(short *)(param_1 + 0x36) != 0) {
    iVar7 = 0;
    do {
      FUN_0028c028(*(int *)(param_1 + 0x28) + iVar7);
      uVar8 = uVar8 + 1 & 0xffff;
      iVar7 = uVar8 * 0xf0;
    } while (uVar8 < *(ushort *)(param_1 + 0x36));
  }
  uVar8 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar7 = 0;
    do {
      FUN_002870f8(*(int *)(param_1 + 0x2c) + iVar7);
      uVar8 = uVar8 + 1 & 0xffff;
      iVar7 = uVar8 * 0xc0;
    } while (uVar8 < *(ushort *)(param_1 + 0x38));
  }
  iVar7 = *(int *)(param_1 + 0x14);
  iVar5 = 0;
  FUN_00272aa8(iVar7);
  if (*(int *)(iVar7 + 8) < 1) {
    iVar7 = *(int *)(param_1 + 0xc);
  }
  else {
    do {
      uVar3 = FUN_003822e0(iVar7,iVar5);
      iVar5 = iVar5 + 1;
      FUN_0028eed8(uVar3);
    } while (iVar5 < *(int *)(iVar7 + 8));
    iVar7 = *(int *)(param_1 + 0xc);
  }
  if (iVar7 != 0) {
    uVar8 = 0;
    FUN_00272aa8();
    if (0 < *(int *)(*(int *)(param_1 + 0xc) + 8)) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      while( true ) {
        piVar4 = (int *)FUN_00388e58(uVar2,uVar8);
        if (0 < (short)*piVar4) {
          iVar7 = 0x10000;
          piVar6 = piVar4;
          do {
            piVar6 = piVar6 + 1;
            iVar5 = iVar7 >> 0x10;
            iVar7 = iVar7 + 0x10000;
            *piVar6 = *piVar6 + *(int *)(param_1 + 8);
          } while ((long)iVar5 < (long)(short)*piVar4);
        }
        uVar8 = uVar8 + 1 & 0xffff;
        if (*(int *)(*(int *)(param_1 + 0xc) + 8) <= (int)uVar8) break;
        uVar2 = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  return;
}


// ==== FUN_002870f8 @ 002870f8 ====

void FUN_002870f8(void)

{
  return;
}


// ==== FUN_00287100 @ 00287100 ====

void FUN_00287100(void)

{
  return;
}


// ==== FUN_00287118 @ 00287118 ====

void FUN_00287118(void)

{
  return;
}


// ==== FUN_00287120 @ 00287120 ====

void FUN_00287120(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + (int)param_1;
  }
  if (param_1[3] != 0) {
    param_1[3] = param_1[3] + (int)param_1;
  }
  if (param_1[5] != 0) {
    param_1[5] = param_1[5] + (int)param_1;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6] + (int)param_1;
  }
  iVar4 = 0;
  if (0 < *param_1) {
    iVar1 = param_1[1];
    while( true ) {
      iVar3 = iVar4 * 0x10;
      iVar4 = iVar4 + 1;
      FUN_00287218(iVar1 + iVar3);
      if (*param_1 <= iVar4) break;
      iVar1 = param_1[1];
    }
  }
  iVar4 = 0;
  FUN_00287600(param_1 + 8);
  if (0 < param_1[4]) {
    iVar1 = param_1[5];
    while( true ) {
      piVar2 = (int *)(iVar4 * 8 + iVar1);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        *piVar2 = iVar1 + (int)param_1;
      }
      iVar4 = iVar4 + 1;
      if (param_1[4] <= iVar4) break;
      iVar1 = param_1[5];
    }
  }
  return;
}


// ==== FUN_00287218 @ 00287218 ====

void FUN_00287218(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + (int)param_1;
  }
  switch(*param_1) {
  case 0:
    FUN_002876e0(param_1[1]);
    break;
  case 1:
    FUN_00287700(param_1[1]);
    break;
  case 2:
    FUN_00287720(param_1[1]);
    break;
  case 3:
    FUN_00287760(param_1[1]);
    break;
  case 4:
    FUN_00287780(param_1[1]);
    break;
  case 5:
    FUN_002877a0(param_1[1]);
    break;
  case 6:
    FUN_002877c0(param_1[1]);
    break;
  case 7:
    FUN_002877e0(param_1[1]);
    break;
  case 8:
    FUN_00287800(param_1[1]);
    break;
  case 9:
    FUN_00287820(param_1[1]);
    break;
  case 10:
    FUN_00287740(param_1[1]);
    break;
  case 0xb:
    FUN_002879f8(param_1[1]);
    break;
  case 0xc:
    FUN_00287a18(param_1[1]);
    break;
  case 0xf:
    FUN_00287a90(param_1[1]);
    break;
  case 0x10:
    FUN_00287ab0(param_1[1]);
    break;
  case 0x11:
    FUN_00287ad0(param_1[1]);
    break;
  case 0x12:
    FUN_00287a60(param_1[1]);
    break;
  case 0x13:
    FUN_00287af0(param_1[1]);
    break;
  case 0x14:
    FUN_00287b10(param_1[1]);
    break;
  case 0x15:
    FUN_00287b50(param_1[1]);
    break;
  case 0x16:
    FUN_00287b70(param_1[1]);
    break;
  case 0x17:
    FUN_00287b90(param_1[1]);
    break;
  case 0x18:
    FUN_00287bb0(param_1[1]);
    break;
  case 0x19:
    FUN_00287bd0(param_1[1]);
    break;
  case 0x1a:
    FUN_00287bf0(param_1[1]);
    break;
  case 0x1b:
    FUN_00287840(param_1[1]);
    break;
  case 0x1e:
    FUN_002879b0(param_1[1]);
    break;
  case 0x23:
    FUN_00287ce8(param_1[1]);
    break;
  case 0x25:
    FUN_00287940(param_1[1]);
    break;
  case 0x26:
    FUN_00287978(param_1[1]);
    break;
  case 0x27:
    FUN_00287878(param_1[1]);
    break;
  case 0x28:
    FUN_002878b0(param_1[1]);
    break;
  case 0x29:
    FUN_002878e8(param_1[1]);
    break;
  case 0x2a:
    FUN_00287920(param_1[1]);
    break;
  case 0x2b:
    FUN_00287c40(param_1[1]);
    break;
  case 0x2c:
  case 0x2f:
    FUN_00287c48(param_1[1]);
    break;
  case 0x2d:
    FUN_00287c10(param_1[1]);
    break;
  case 0x2e:
    FUN_00287c30(param_1[1]);
    break;
  case 0x30:
    FUN_00287ca8(param_1[1]);
    break;
  case 0x31:
    FUN_00287cc8(param_1[1]);
    break;
  case 0x32:
    FUN_00287c88(param_1[1]);
    break;
  case 0x33:
    FUN_00287c38(param_1[1]);
    break;
  case 0x34:
    FUN_00287b30(param_1[1]);
    break;
  case 0x35:
    FUN_00287e88(param_1[1]);
    break;
  case 0x36:
    FUN_00287c68(param_1[1]);
    break;
  case 0x37:
    FUN_00287d70(param_1[1]);
    break;
  case 0x38:
    FUN_00287d08(param_1[1]);
    break;
  case 0x39:
    FUN_00287df8(param_1[1]);
    break;
  case 0x3a:
    FUN_00287e30(param_1[1]);
    break;
  case 0x3b:
    FUN_00287ec8(param_1[1]);
    break;
  case 0x3c:
    FUN_00288020(param_1[1]);
    break;
  case 0x3d:
    FUN_00288078(param_1[1]);
    break;
  case 0x3e:
    FUN_002880c0(param_1[1]);
    break;
  case 0x3f:
    FUN_00288108(param_1[1]);
    break;
  case 0x40:
    FUN_00288150(param_1[1]);
    break;
  case 0x41:
    FUN_00287e68(param_1[1]);
    break;
  case 0x43:
    FUN_00287ea0(param_1[1]);
  default:
    break;
  case 0x44:
    FUN_00287ec0(param_1[1]);
  }
  return;
}


// ==== FUN_00287600 @ 00287600 ====

void FUN_00287600(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *param_1 + (int)param_1;
  }
  return;
}


// ==== FUN_00287618 @ 00287618 ====

void FUN_00287618(void)

{
  FUN_00287600();
  return;
}


// ==== FUN_00287638 @ 00287638 ====

void FUN_00287638(void)

{
  FUN_00287618();
  return;
}


// ==== FUN_00287658 @ 00287658 ====

void FUN_00287658(void)

{
  FUN_00287618();
  return;
}


// ==== FUN_00287678 @ 00287678 ====

void FUN_00287678(void)

{
  FUN_00287658();
  return;
}


// ==== FUN_00287698 @ 00287698 ====

void FUN_00287698(int param_1)

{
  FUN_00287658();
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_1;
  }
  return;
}


// ==== FUN_002876e0 @ 002876e0 ====

void FUN_002876e0(void)

{
  FUN_00287678();
  return;
}


// ==== FUN_00287700 @ 00287700 ====

void FUN_00287700(void)

{
  FUN_00287678();
  return;
}


// ==== FUN_00287720 @ 00287720 ====

void FUN_00287720(void)

{
  FUN_00287678();
  return;
}


// ==== FUN_00287740 @ 00287740 ====

void FUN_00287740(void)

{
  FUN_00287678();
  return;
}


// ==== FUN_00287760 @ 00287760 ====

void FUN_00287760(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_00287780 @ 00287780 ====

void FUN_00287780(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_002877a0 @ 002877a0 ====

void FUN_002877a0(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_002877c0 @ 002877c0 ====

void FUN_002877c0(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_002877e0 @ 002877e0 ====

void FUN_002877e0(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_00287800 @ 00287800 ====

void FUN_00287800(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_00287820 @ 00287820 ====

void FUN_00287820(void)

{
  FUN_00287698();
  return;
}


// ==== FUN_00287840 @ 00287840 ====

void FUN_00287840(int param_1)

{
  FUN_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


// ==== FUN_00287878 @ 00287878 ====

void FUN_00287878(int param_1)

{
  FUN_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


// ==== FUN_002878b0 @ 002878b0 ====

void FUN_002878b0(int param_1)

{
  FUN_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


// ==== FUN_002878e8 @ 002878e8 ====

void FUN_002878e8(int param_1)

{
  FUN_00287600();
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_1;
  }
  return;
}


// ==== FUN_00287920 @ 00287920 ====

void FUN_00287920(void)

{
  FUN_00287600();
  return;
}


