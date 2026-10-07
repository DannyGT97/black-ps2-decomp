// ==== FUN_001e6118 @ 001e6118 ====

undefined4 FUN_001e6118(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = 0;
  plVar2 = &DAT_003f9240;
  do {
    iVar1 = iVar1 + 1;
    if (param_2 == *plVar2) {
      return 1;
    }
    plVar2 = plVar2 + 1;
  } while (iVar1 < 6);
  return 0;
}


// ==== FUN_001e6150 @ 001e6150 ====

undefined4 FUN_001e6150(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)(&DAT_003f92c0 + param_3 * 8);
  lVar2 = FUN_001e6118(param_1,*puVar3);
  if (lVar2 == 0) {
    lVar2 = FUN_001e6c38((int)param_1 + 0x68,param_2,*puVar3);
    uVar1 = 1;
    if (lVar2 == 0) {
      uVar1 = 0;
    }
  }
  else {
    iVar4 = (int)param_1 + 0x68;
    iVar5 = 0;
    do {
      lVar2 = FUN_001e6c38(iVar4,param_2,*puVar3);
      iVar5 = iVar5 + 1;
      if (lVar2 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 0x38;
    } while (iVar5 < 2);
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001e6208 @ 001e6208 ====

void FUN_001e6208(int param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(param_1 + 0x844);
  uVar4 = 1;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    bVar2 = uVar4 < 2;
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x35) = param_3;
    }
    uVar4 = uVar4 + 1;
  } while (bVar2);
  return;
}


// ==== FUN_001e6240 @ 001e6240 ====

void FUN_001e6240(uint param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
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
  
  auVar1 = _pextlw(0,0);
  auVar1 = _pextlw(0,auVar1._0_8_);
  uVar2 = param_1 + 0x108;
  *(undefined4 *)(param_1 + 0x110) = uStack_70;
  *(undefined4 *)(param_1 + 0x114) = uStack_6c;
  *(undefined4 *)(param_1 + 0x118) = uStack_68;
  *(undefined4 *)(param_1 + 0x11c) = uStack_64;
  *(undefined4 *)(param_1 + 0x120) = uStack_60;
  *(undefined4 *)(param_1 + 0x124) = uStack_5c;
  *(undefined4 *)(param_1 + 0x128) = uStack_58;
  *(undefined4 *)(param_1 + 300) = uStack_54;
  *(undefined4 *)(param_1 + 0x130) = uStack_50;
  *(undefined4 *)(param_1 + 0x134) = uStack_4c;
  *(undefined4 *)(param_1 + 0x138) = uStack_48;
  *(undefined4 *)(param_1 + 0x13c) = uStack_44;
  *(undefined4 *)(param_1 + 0x140) = uStack_40;
  *(undefined4 *)(param_1 + 0x144) = uStack_3c;
  *(undefined4 *)(param_1 + 0x148) = uStack_38;
  *(undefined4 *)(param_1 + 0x14c) = uStack_34;
  *(int *)(param_1 + 0x150) = auVar1._0_4_;
  *(int *)(param_1 + 0x154) = auVar1._4_4_;
  *(int *)(param_1 + 0x158) = auVar1._8_4_;
  *(int *)(param_1 + 0x15c) = auVar1._12_4_;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  do {
    FUN_001e7150(param_1);
    param_1 = param_1 + 0x2c;
  } while (param_1 < uVar2);
  return;
}


// ==== FUN_001e62d0 @ 001e62d0 ====

void FUN_001e62d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  return;
}


// ==== FUN_001e62e0 @ 001e62e0 ====

void FUN_001e62e0(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(iVar1 + 0x70);
    uVar3 = *(undefined4 *)(iVar1 + 0x78);
    uVar4 = *(undefined4 *)(iVar1 + 0x7c);
    *(int *)(param_1 + 0x110) = (int)uVar2;
    *(int *)(param_1 + 0x114) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_1 + 0x118) = uVar3;
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    uVar6 = param_1 + 0x108;
    uVar2 = *(undefined8 *)(iVar1 + 0x80);
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    uVar4 = *(undefined4 *)(iVar1 + 0x8c);
    *(int *)(param_1 + 0x120) = (int)uVar2;
    *(int *)(param_1 + 0x124) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    *(undefined4 *)(param_1 + 300) = uVar4;
    uVar3 = *(undefined4 *)(iVar1 + 0x94);
    uVar4 = *(undefined4 *)(iVar1 + 0x98);
    uVar5 = *(undefined4 *)(iVar1 + 0x9c);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x134) = uVar3;
    *(undefined4 *)(param_1 + 0x138) = uVar4;
    *(undefined4 *)(param_1 + 0x13c) = uVar5;
    uVar2 = *(undefined8 *)(iVar1 + 0xa0);
    uVar3 = *(undefined4 *)(iVar1 + 0xa8);
    uVar4 = *(undefined4 *)(iVar1 + 0xac);
    *(int *)(param_1 + 0x140) = (int)uVar2;
    *(int *)(param_1 + 0x144) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_1 + 0x148) = uVar3;
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
    uVar2 = FUN_00136dc0();
    *(int *)(param_1 + 0x150) = (int)uVar2;
    *(int *)(param_1 + 0x154) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_1 + 0x158) = uVar3;
    *(undefined4 *)(param_1 + 0x15c) = uVar4;
    do {
      FUN_001e72c8(param_1);
      param_1 = param_1 + 0x2c;
    } while (param_1 < uVar6);
  }
  return;
}


// ==== FUN_001e6370 @ 001e6370 ====

void FUN_001e6370(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x108;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  do {
    FUN_001e7588(param_1);
    param_1 = param_1 + 0x2c;
  } while (param_1 < uVar1);
  return;
}


// ==== FUN_001e63b8 @ 001e63b8 ====

int * FUN_001e63b8(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  long alStack_70 [2];
  
  fVar8 = DAT_003f83c8;
  piVar7 = (int *)0x0;
  alStack_70[0] = param_2;
  lVar2 = FUN_001e51e0(param_1[0x5b],param_1 + 0x58,alStack_70);
  if (lVar2 != 0) {
    uVar5 = 0;
    piVar6 = param_1;
    do {
      if ((float)piVar6[10] < fVar8) {
        iVar1 = *piVar6;
        if (piVar6[2] == 0) {
          fVar8 = (float)piVar6[10];
          piVar7 = piVar6;
        }
      }
      else {
        iVar1 = *piVar6;
      }
      if (iVar1 < 2) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(long *)piVar6[7];
      }
      if (lVar2 == alStack_70[0]) {
        if (*piVar6 < 2) {
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = (ulong)*(byte *)(piVar6[8] + 4);
        }
        if ((uVar3 == param_3) && (piVar4 = param_1 + uVar5 * 0xb, piVar4[2] == 0)) {
          if (*piVar4 == 3) {
            return piVar6;
          }
          iVar1 = param_1[0x5b];
          goto LAB_001e6544;
        }
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0xb;
    } while (uVar5 < 6);
    lVar2 = FUN_001e69e0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
    uVar5 = 0;
    piVar4 = param_1;
    if (lVar2 == 0) {
      iVar1 = param_1[2];
      piVar7 = param_1;
      while( true ) {
        if (iVar1 == 0) {
          FUN_001e7448(piVar7);
        }
        if (param_1 + 0x42 <= piVar7 + 0xb) break;
        iVar1 = piVar7[0xd];
        piVar7 = piVar7 + 0xb;
      }
      return (int *)0x0;
    }
    do {
      uVar5 = uVar5 + 1;
      if (*piVar4 == 1) {
        iVar1 = param_1[0x5b];
        piVar6 = piVar4;
LAB_001e6544:
        lVar2 = FUN_001e7168(piVar4,iVar1,param_1,alStack_70[0],param_3);
        if (lVar2 != 0) {
          return piVar6;
        }
        return (int *)0x0;
      }
      piVar4 = piVar4 + 0xb;
    } while (uVar5 < 6);
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
    FUN_001e7448(piVar7);
  }
  return (int *)0x0;
}


// ==== FUN_001e65a0 @ 001e65a0 ====

undefined4 FUN_001e65a0(int *param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = param_1 + 0x42;
  iVar1 = *param_1;
  do {
    if (iVar1 < 2) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)param_1[7];
    }
    if (lVar3 == param_2) {
      if (*param_1 < 2) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (uint)*(byte *)(param_1[8] + 4);
      }
      if ((uVar2 == param_3) && (*param_1 == 3)) {
        return 1;
      }
    }
    param_1 = param_1 + 0xb;
    if (piVar4 <= param_1) {
      return 0;
    }
    iVar1 = *param_1;
  } while( true );
}


// ==== FUN_001e6610 @ 001e6610 ====

undefined4 FUN_001e6610(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x10000;
  if (*(char *)(param_1 + 0x184) == '\0') {
    while (*(int *)(param_1 + 8) == 0) {
      param_1 = param_1 + 0x2c;
      iVar1 = iVar2 >> 0x10;
      iVar2 = iVar2 + 0x10000;
      if (5 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}


// ==== FUN_001e6650 @ 001e6650 ====

undefined4 FUN_001e6650(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 auStack_50 [2];
  
  iVar3 = (int)param_1;
  if ((*(char *)(iVar3 + 0x184) == '\0') &&
     (auStack_50[0] = param_3,
     lVar2 = FUN_001e51e0(*(undefined4 *)(iVar3 + 0x16c),iVar3 + 0x160,auStack_50), lVar2 != 0)) {
    *(undefined4 *)(iVar3 + 0x168) = param_2;
    FUN_001e63b8(param_1,auStack_50[0],param_4);
    *(int *)(iVar3 + 0x180) = (int)param_4;
    *(undefined8 *)(iVar3 + 0x178) = auStack_50[0];
    uVar1 = 1;
    *(undefined1 *)(iVar3 + 0x184) = 1;
    *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== FUN_001e66f0 @ 001e66f0 ====

void FUN_001e66f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return;
}


// ==== FUN_001e6700 @ 001e6700 ====

void FUN_001e6700(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001d9700(*(undefined4 *)(DAT_0040f510 + 0xcbdc));
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar1 = FUN_001e69e8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}


// ==== FUN_001e67b8 @ 001e67b8 ====

void FUN_001e67b8(int param_1)

{
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_001e6a40(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),*(undefined4 *)(param_1 + 0xb0))
  ;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_001d9760(*(undefined4 *)(DAT_0040f510 + 0xcbdc),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}


// ==== FUN_001e6878 @ 001e6878 ====

void FUN_001e6878(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = 0;
  *(undefined1 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x19) = 9;
  iVar1 = *(char *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x19) + 6;
  *(short *)(param_1 + 0x18) = (short)iVar1;
  puVar3 = param_1;
  if (0 < iVar1 * 0x10000) {
    do {
      uVar2 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
      *puVar3 = uVar2;
      *(undefined1 *)((int)param_1 + (int)lVar4 + 0x48) = 0;
      lVar4 = (long)((int)lVar4 + 1);
      puVar3 = puVar3 + 1;
    } while (lVar4 < *(short *)(param_1 + 0x18));
  }
  param_1[0x17] = 0;
  *(undefined2 *)((int)param_1 + 0x62) = *(undefined2 *)(param_1 + 0x18);
  return;
}


// ==== FUN_001e6948 @ 001e6948 ====

void FUN_001e6948(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  puVar1 = param_1;
  if (0 < *(short *)(param_1 + 0x18)) {
    do {
      lVar2 = (long)((int)lVar2 + 1);
      FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*puVar1);
      puVar1 = puVar1 + 1;
    } while (lVar2 < *(short *)(param_1 + 0x18));
  }
  param_1[0x17] = 1;
  *(undefined2 *)((int)param_1 + 0x62) = *(undefined2 *)(param_1 + 0x18);
  return;
}


// ==== FUN_001e69e0 @ 001e69e0 ====

undefined2 FUN_001e69e0(int param_1)

{
  return *(undefined2 *)(param_1 + 0x62);
}


// ==== FUN_001e69e8 @ 001e69e8 ====

undefined4 FUN_001e69e8(undefined4 *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = 0;
  if (0 < *(short *)(param_1 + 0x18)) {
    pcVar1 = (char *)(param_1 + 0x12);
    puVar3 = param_1;
    do {
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
        *(short *)((int)param_1 + 0x62) = *(short *)((int)param_1 + 0x62) + -1;
        return *puVar3;
      }
      lVar2 = (long)((int)lVar2 + 1);
      puVar3 = puVar3 + 1;
      pcVar1 = pcVar1 + 1;
    } while (lVar2 < *(short *)(param_1 + 0x18));
  }
  return 0;
}


// ==== FUN_001e6a40 @ 001e6a40 ====

void FUN_001e6a40(int *param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = 0;
  piVar2 = param_1;
  if (0 < (short)param_1[0x18]) {
    do {
      if (*piVar2 == param_2) {
        *(undefined1 *)((int)param_1 + (int)lVar1 + 0x48) = 0;
        *(short *)((int)param_1 + 0x62) = *(short *)((int)param_1 + 0x62) + 1;
        return;
      }
      lVar1 = (long)((int)lVar1 + 1);
      piVar2 = piVar2 + 1;
    } while (lVar1 < (short)param_1[0x18]);
  }
  return;
}


// ==== FUN_001e6a98 @ 001e6a98 ====

void FUN_001e6a98(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4);
  param_1[5] = param_2;
  param_1[1] = uVar1;
  param_1[9] = 0xffffffff;
  param_1[0xb] = 0x3f000000;
  param_1[2] = 0;
  param_1[3] = 0;
  DAT_003bd4d0 = 0;
  *param_1 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


// ==== FUN_001e6af8 @ 001e6af8 ====

undefined8 FUN_001e6af8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)((int)param_2 + 0x38c) == 1) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_00135550(param_2);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      iVar1 = FUN_00135550(param_2);
      uVar3 = FUN_001848c0(iVar1 + 0x6f0);
      lVar2 = FUN_001e6b70(param_1,uVar3);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


// ==== FUN_001e6b70 @ 001e6b70 ====

bool FUN_001e6b70(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 != 0) {
    bVar1 = *(int *)((int)param_2 + 0x348) != 0;
  }
  return bVar1;
}


// ==== FUN_001e6b88 @ 001e6b88 ====

undefined4 FUN_001e6b88(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 == -0x7e0d285ac0000000) || (param_2 == -0x7de7e79c80000000)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001e6bd0 @ 001e6bd0 ====

undefined4 FUN_001e6bd0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_001e60a8(param_1[1],param_3);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\0') {
    if (*param_1 == 0) {
      return 1;
    }
  }
  else if (1 < *param_1 - 3U) {
    return 1;
  }
  return 0;
}


// ==== FUN_001e6c38 @ 001e6c38 ====

undefined8 FUN_001e6c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  
  lVar8 = 0;
  uStack_88 = param_3;
  lVar4 = FUN_001e6b88(param_1,param_3);
  if ((lVar4 != 0) && (*(float *)(DAT_0040f4d0 + 0x20) - DAT_003bd4d0 < DAT_003bd4b0)) {
    return 0;
  }
  puVar6 = (undefined4 *)param_1;
  lVar4 = FUN_001e60e0(puVar6[1],uStack_88);
  iVar7 = (int)param_2;
  if ((lVar4 == 0) || (lVar4 = FUN_001e65a0(*(undefined4 *)(iVar7 + 0x348),uStack_88,0), lVar4 != 0)
     ) {
    iVar3 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    auVar10 = _lqc2(*(undefined1 (*) [16])(iVar3 + 0x30));
    auVar12 = _vaddbc(in_vf0,in_vf0);
    auVar11 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0xa0));
    auVar10 = _vsub(auVar10,auVar11);
    auVar10 = _vmul(auVar10,auVar10);
    _vaddabc(auVar10,auVar10);
    auVar10 = _vmaddbc(auVar12,auVar10);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar10);
    auVar10 = _vaddbc(in_vf0,in_vf0);
    uVar13 = _vwaitq();
    auVar10 = _vmulq(auVar10,uVar13);
    auVar10 = _qmfc2(auVar10._0_4_);
    if (DAT_003bd4d8 < auVar10._0_4_) {
      return 0;
    }
    lVar4 = FUN_001e6bd0(param_1,param_2,uStack_88);
    if (lVar4 != 0) {
      uStack_90 = *(undefined8 *)(*(int *)(iVar7 + 0x348) + 0x160);
      lVar4 = FUN_001e51e0(puVar6[5],&uStack_90,&uStack_88);
      if (lVar4 == 0) {
        return 0;
      }
      fVar9 = (float)FUN_0012d058(DAT_0040f4d0);
      if (*(float *)((int)lVar4 + 8) < fVar9) {
        return 0;
      }
      lVar5 = FUN_001e6af8(param_1,param_2);
      if (lVar5 != 0) {
        auStack_80[0] = *(undefined8 *)(*(int *)((int)lVar5 + 0x348) + 0x160);
        lVar8 = FUN_001e51e0(puVar6[5],auStack_80,&uStack_88);
        if (lVar8 == 0) {
          lVar5 = 0;
        }
      }
      bVar1 = *(byte *)((int)lVar4 + 0xe);
      puVar6[10] = (uint)bVar1;
      if ((lVar5 != 0) && (bVar2 = *(byte *)((int)lVar8 + 0xe), bVar2 < bVar1)) {
        puVar6[10] = (uint)bVar2;
      }
      *puVar6 = 2;
      puVar6[2] = iVar7;
      puVar6[3] = (int)lVar5;
      *(undefined8 *)(puVar6 + 6) = uStack_88;
      puVar6[9] = 0;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001e6e50 @ 001e6e50 ====

void FUN_001e6e50(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  lVar3 = FUN_001e6b70(param_1,puVar4[2]);
  if (lVar3 == 0) {
    *puVar4 = 0;
  }
  switch(*puVar4) {
  case 0:
    FUN_001e5830(puVar4[1]);
    return;
  default:
    goto switchD_001e6e94_caseD_1;
  case 2:
    lVar3 = FUN_001e6650(*(undefined4 *)(puVar4[2] + 0x348),puVar4[2],*(undefined8 *)(puVar4 + 6),
                         puVar4[9]);
    if (lVar3 == 0) {
      return;
    }
    lVar3 = FUN_001e6b88(param_1,*(undefined8 *)(puVar4 + 6));
    if (lVar3 != 0) {
      DAT_003bd4d0 = *(undefined4 *)(DAT_0040f4d0 + 0x20);
    }
    bVar2 = false;
    DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
    DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
    if ((float)DAT_0040eb30 * 2.3283064e-10 <= *(float *)(puVar4[1] + 0x8b4)) {
      if ((int)puVar4[9] < (int)puVar4[10]) {
        lVar3 = FUN_001e6b70(param_1,puVar4[3]);
        if (lVar3 == 0) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      *puVar4 = 3;
      puVar4[9] = puVar4[9] + 1;
      goto switchD_001e6e94_caseD_3;
    }
    break;
  case 3:
switchD_001e6e94_caseD_3:
    lVar3 = FUN_001e6b70(param_1,puVar4[3]);
    if (lVar3 != 0) {
      FUN_001e63b8(*(undefined4 *)(puVar4[3] + 0x348),*(undefined8 *)(puVar4 + 6),puVar4[9]);
      lVar3 = FUN_001e6610(*(undefined4 *)(puVar4[2] + 0x348));
      if (lVar3 == 0) {
        uVar1 = puVar4[2];
        *puVar4 = 2;
        puVar4[2] = puVar4[3];
        puVar4[3] = uVar1;
        return;
      }
      return;
    }
    break;
  case 4:
    lVar3 = FUN_001e6610(*(undefined4 *)(puVar4[2] + 0x348));
    if (lVar3 != 0) {
      return;
    }
    if (*(char *)(puVar4 + 8) == '\0') {
      FUN_001e7078(param_1);
    }
    *puVar4 = 5;
  case 5:
    FUN_001e5830(puVar4[1]);
    lVar3 = FUN_001e7118(param_1);
    if (lVar3 != 0) {
      *puVar4 = 0;
    }
    goto switchD_001e6e94_caseD_1;
  }
  *puVar4 = 4;
switchD_001e6e94_caseD_1:
  return;
}


// ==== FUN_001e7078 @ 001e7078 ====

void FUN_001e7078(int param_1)

{
  DAT_0040eb30 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
  DAT_0040eb34 = DAT_0040eb34 + DAT_0040eb30;
  *(float *)(param_1 + 0x34) =
       *(float *)(*(int *)(param_1 + 4) + 0x8ac) +
       *(float *)(*(int *)(param_1 + 4) + 0x8b0) * (float)DAT_0040eb30 * 2.3283064e-10;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_0040f4d0 + 0x20);
  return;
}


// ==== FUN_001e7118 @ 001e7118 ====

bool FUN_001e7118(int param_1)

{
  return *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x34) < *(float *)(DAT_0040f4d0 + 0x20);
}


// ==== FUN_001e7150 @ 001e7150 ====

void FUN_001e7150(undefined4 *param_1)

{
  param_1[10] = 0;
  *param_1 = 1;
  param_1[9] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_001e7168 @ 001e7168 ====

undefined4
FUN_001e7168(int *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = *param_1;
  uStack_38 = param_4;
  if (iVar1 == 1) {
    param_1[3] = param_3;
    param_1[6] = (int)param_2;
    param_1[5] = *(int *)((int)param_2 + 0x4c);
    param_1[10] = *(int *)(DAT_0040f0e0 + 0x20140);
    uStack_40 = *(undefined8 *)(param_3 + 0x160);
    uVar3 = FUN_001e51e0(param_2,&uStack_40,(uint)&uStack_40 | 8);
    param_1[7] = (int)uVar3;
    iVar1 = FUN_0028bd80(uVar3,param_5);
    param_1[8] = iVar1;
    *(short *)(iVar1 + 2) = (short)DAT_003bd4e0;
    DAT_003bd4e0 = DAT_003bd4e0 + 1;
    param_1[4] = *(int *)(param_1[5] + 0x18) + (uint)*(ushort *)param_1[8] * 8;
    lVar4 = FUN_001e69e8(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
    param_1[9] = (int)lVar4;
    if (lVar4 != 0) {
      *param_1 = 2;
      goto LAB_001e7270;
    }
LAB_001e729c:
    uVar2 = 0;
  }
  else {
    if (iVar1 < 2) {
      return 1;
    }
    if (iVar1 == 2) {
LAB_001e7270:
      if ((param_1[4] != 0) &&
         (lVar4 = FUN_001d7c20(param_1[9],*(undefined8 *)param_1[5],param_1[4],0,9,1), lVar4 == 0))
      goto LAB_001e729c;
      *param_1 = 3;
    }
    else if (iVar1 != 3) {
      return 1;
    }
    param_1[1] = 0;
    uVar2 = 1;
  }
  return uVar2;
}


// ==== FUN_001e72c8 @ 001e72c8 ====

void FUN_001e72c8(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1;
  if (*piVar2 == 2) {
    FUN_001e7168(param_1,piVar2[6],piVar2[3],*(undefined8 *)piVar2[7],
                 *(undefined4 *)(piVar2[3] + 0x180));
    iVar3 = *piVar2;
  }
  else if (*piVar2 < 4) {
    iVar3 = *piVar2;
  }
  else {
    FUN_001e7448(param_1);
    iVar3 = *piVar2;
  }
  if (iVar3 == 3) {
    iVar3 = piVar2[1];
    if (iVar3 == 1) {
      iVar3 = piVar2[2];
      lVar1 = FUN_001dcf70(*(undefined4 *)(iVar3 + 0xb8),piVar2[9],iVar3 + 0xb0,2,iVar3 + 0xb4,1);
      if ((lVar1 != 0) && (lVar1 = FUN_00103870(DAT_0040f0e0), lVar1 == 0)) {
        *(undefined4 *)(piVar2[2] + 0xa4) = 0;
        FUN_001e7608(param_1,piVar2[2]);
        FUN_001dd7c0(*(undefined4 *)(piVar2[2] + 0xb8),1);
        FUN_001dd5d8(*(undefined4 *)(piVar2[2] + 0xb8));
        iVar3 = *(int *)(piVar2[2] + 0xb8);
        *(undefined4 *)(iVar3 + 0x34) = DAT_003bd4dc;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        piVar2[1] = 2;
      }
    }
    else if (1 < iVar3) {
      if (iVar3 == 2) {
        lVar1 = FUN_001dd728(*(undefined4 *)(piVar2[2] + 0xb8));
        if (lVar1 != 0) {
          *(undefined4 *)(piVar2[2] + 0xa4) = 0;
          FUN_001e7608(param_1,piVar2[2]);
          FUN_001dd158(*(undefined4 *)(piVar2[2] + 0xb8));
          return;
        }
        piVar2[1] = 3;
      }
      else if (iVar3 != 3) {
        return;
      }
      lVar1 = FUN_001e7448(param_1);
      if (lVar1 != 0) {
        piVar2[1] = 0;
      }
    }
  }
  return;
}


// ==== FUN_001e7448 @ 001e7448 ====

undefined8 FUN_001e7448(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  iVar4 = *piVar5;
  if (iVar4 == 2) {
    uVar1 = FUN_001e7168(param_1,piVar5[6],piVar5[3],*(undefined8 *)piVar5[7],
                         *(undefined4 *)(piVar5[3] + 0x180));
  }
  else {
    uVar1 = 1;
    if (2 < iVar4) {
      if (iVar4 == 3) {
        if (piVar5[2] != 0) {
          lVar2 = FUN_001dd728(*(undefined4 *)(piVar5[2] + 0xb8));
          iVar4 = piVar5[2];
          if (lVar2 != 0) {
            FUN_001dd6c0(*(undefined4 *)(iVar4 + 0xb8));
            iVar4 = piVar5[2];
          }
          lVar2 = FUN_001dd3e0(*(undefined4 *)(iVar4 + 0xb8));
          if (lVar2 == 0) {
            return 0;
          }
          iVar4 = 0;
          *(undefined1 *)(piVar5[2] + 0xbc) = 0;
          do {
            iVar3 = iVar4 * 4;
            iVar4 = iVar4 + 1;
            *(undefined4 *)(piVar5[2] + iVar3 + 0xb4) = 0;
          } while (iVar4 < 1);
          piVar5[2] = 0;
        }
        piVar5[3] = 0;
        *piVar5 = 4;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
      }
      else if (iVar4 != 4) {
        return 1;
      }
      lVar2 = FUN_001d7cc0(piVar5[9]);
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        FUN_001e6a40(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),piVar5[9]);
        piVar5[9] = 0;
        *piVar5 = 1;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


// ==== FUN_001e7588 @ 001e7588 ====

void FUN_001e7588(undefined4 *param_1)

{
  if (param_1[9] != 0) {
    FUN_001e6a40(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4));
    param_1[9] = 0;
  }
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


// ==== FUN_001e75f0 @ 001e75f0 ====

void FUN_001e75f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}


// ==== FUN_001e7608 @ 001e7608 ====

void FUN_001e7608(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  bVar3 = true;
  if (*(int *)(param_1 + 0xc) != 0) {
    bVar3 = false;
    if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x168) + 0x38c) == 1) {
      lVar7 = FUN_001e60e0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),
                           **(undefined8 **)(param_1 + 0x1c));
      bVar3 = false;
      if (lVar7 == 0) {
        bVar3 = true;
      }
    }
    if ((bVar3) || (bVar3 = false, *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x168) + 0x38c) == 2)
       ) {
      bVar3 = true;
    }
  }
  if (bVar3) {
    iVar6 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    uVar2 = *(undefined8 *)(iVar6 + 0x30);
    uVar5 = *(undefined4 *)(iVar6 + 0x38);
    uVar8 = *(undefined4 *)(iVar6 + 0x3c);
    *(undefined1 *)(param_2 + 0xa8) = 9;
    *(int *)(param_2 + 0x30) = (int)uVar2;
    *(int *)(param_2 + 0x34) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(param_2 + 0x38) = uVar5;
    *(undefined4 *)(param_2 + 0x3c) = uVar8;
    *(uint *)(param_2 + 0xa4) = *(uint *)(param_2 + 0xa4) | 0x809;
    *(undefined4 *)(param_2 + 0x54) = 0;
    goto LAB_001e7768;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_2 + 0xa4);
  uVar5 = *(undefined4 *)(iVar6 + 0x140);
  uVar8 = *(undefined4 *)(iVar6 + 0x144);
  uVar9 = *(undefined4 *)(iVar6 + 0x148);
  uVar10 = *(undefined4 *)(iVar6 + 0x14c);
  *(uint *)(param_2 + 0xa4) = uVar1 | 1;
  *(undefined4 *)(param_2 + 0x30) = uVar5;
  *(undefined4 *)(param_2 + 0x34) = uVar8;
  *(undefined4 *)(param_2 + 0x38) = uVar9;
  *(undefined4 *)(param_2 + 0x3c) = uVar10;
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x168) + 0x3a4);
  if (iVar6 == 0) {
    uVar4 = 9;
LAB_001e7710:
    *(undefined1 *)(param_2 + 0xa8) = uVar4;
    *(uint *)(param_2 + 0xa4) = uVar1 | 0x801;
    uVar1 = *(uint *)(param_2 + 0xa4);
  }
  else {
    if (iVar6 == 1) {
      uVar4 = 10;
      goto LAB_001e7710;
    }
    uVar1 = *(uint *)(param_2 + 0xa4);
  }
  *(undefined4 *)(param_2 + 0x54) = 0x3f800000;
  *(uint *)(param_2 + 0xa4) = uVar1 | 8;
LAB_001e7768:
  uVar5 = DAT_003bd4d4;
  uVar1 = *(uint *)(param_2 + 0xa4);
  *(uint *)(param_2 + 0xa4) = uVar1 | 0x100;
  *(undefined4 *)(param_2 + 0x74) = uVar5;
  uVar5 = DAT_003bd4d8;
  *(uint *)(param_2 + 0xa4) = uVar1 | 0x1310;
  *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x70) = uVar5;
  *(undefined1 *)(param_2 + 0xa9) = 0;
  uVar9 = DAT_003bd4bc;
  uVar8 = DAT_003bd4b8;
  uVar5 = DAT_003bd4b4;
  *(uint *)(param_2 + 0xa4) = uVar1 | 0x801310;
  *(undefined4 *)(param_2 + 0x90) = uVar5;
  *(undefined4 *)(param_2 + 0x94) = uVar8;
  *(undefined4 *)(param_2 + 0x9c) = uVar9;
  *(undefined1 *)(param_2 + 0xab) = uGpffff8237;
  *(undefined4 *)(param_2 + 0x88) = uVar5;
  *(undefined4 *)(param_2 + 0x8c) = uVar5;
  *(undefined4 *)(param_2 + 0x98) = uVar9;
  return;
}


// ==== FUN_001e7800 @ 001e7800 ====

void FUN_001e7800(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ==== FUN_001e7810 @ 001e7810 ====

/* Strings referenciadas:
     "Sound/Banks/Anim.awd" */

undefined4 FUN_001e7810(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  
  iVar4 = param_1[2];
  if (iVar4 != 1) {
    if (iVar4 < 2) {
      if (iVar4 != 0) {
        return 0;
      }
      param_1[2] = 3;
    }
    else {
      if (iVar4 == 2) goto LAB_001e7994;
      if (iVar4 != 3) {
        return 0;
      }
    }
    iVar4 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *param_1 = iVar4;
    param_1[2] = 1;
  }
  iVar4 = DAT_0040f510;
  sVar1 = *(short *)(*param_1 + 0x20);
  uVar2 = *(undefined4 *)(*param_1 + 8);
  iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x4f883991c1000000);
  uVar3 = *(undefined4 *)(iVar5 + 8);
  iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x4f883991c1000000);
  lVar7 = FUN_0027ff78(iVar4,PTR_s_Sound_Banks_Anim_awd_003bd4e4,0,uVar2,(int)sVar1 << 0xb,uVar3,
                       *(undefined4 *)(iVar5 + 0xc),0x3f8bf8);
  param_1[1] = (int)lVar7;
  if (lVar7 == 0) {
    return 0;
  }
  FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*param_1);
  *param_1 = 0;
  *(code **)(DAT_0040f50c + 0x948) = FUN_001e7e58;
  *(code **)(DAT_0040f50c + 0x964) = FUN_001e80c0;
  param_1[2] = 2;
LAB_001e7994:
  iVar4 = 0x3f;
  puVar6 = &DAT_003bd8e0;
  do {
    *puVar6 = 0;
    iVar4 = iVar4 + -1;
    puVar6 = puVar6 + -4;
  } while (-1 < iVar4);
  return 1;
}


// ==== FUN_001e79f0 @ 001e79f0 ====

undefined4 FUN_001e79f0(int param_1)

{
  if (*(int *)(param_1 + 8) != 3) {
    FUN_00280100(DAT_0040f510,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(DAT_0040f50c + 0x948) = 0;
    *(undefined4 *)(param_1 + 8) = 3;
  }
  return 1;
}


// ==== FUN_001e7a58 @ 001e7a58 ====

void FUN_001e7a58(undefined8 param_1,int *param_2)

{
  undefined1 auVar1 [12];
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_130 [48];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_85;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  auVar4 = _pextlw(0,0);
  auVar4 = _pextlw(0,auVar4._0_8_);
  uStack_8c = 0;
  uStack_80 = auVar4._0_4_;
  uStack_7c = auVar4._4_4_;
  uStack_78 = auVar4._8_4_;
  uStack_74 = auVar4._12_4_;
  uStack_68 = param_1;
  lVar3 = FUN_0027fcf8(*(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x18) + 4),
                       &uStack_68,0);
  if (lVar3 != 0) {
    iStack_e0 = (int)lVar3;
    if (*(int *)(*param_2 + 0xc4) == 2) {
      *(uint *)(*(int *)(iStack_e0 + 0x18) + 0x54) =
           *(uint *)(*(int *)(iStack_e0 + 0x18) + 0x54) & 0xfffffffd;
      uStack_d0 = 0;
      uStack_88 = 0xc;
      uStack_8c = 0x84c;
      if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
        uStack_a0 = DAT_003bd918;
        uStack_9c = DAT_003bd920;
        uStack_94 = DAT_003bd91c;
        uStack_85 = 1;
        uStack_8c = 0x80084c;
        uStack_a8 = DAT_003bd918;
        uStack_a4 = DAT_003bd918;
        uStack_98 = DAT_003bd91c;
      }
    }
    else {
      *(uint *)(*(int *)(iStack_e0 + 0x18) + 0x54) =
           *(uint *)(*(int *)(iStack_e0 + 0x18) + 0x54) | 2;
      auVar1 = *(undefined1 (*) [12])(*param_2 + 0xa0);
      uStack_f4 = *(undefined4 *)(*param_2 + 0xac);
      uStack_100 = auVar1._0_4_;
      uStack_fc = auVar1._4_4_;
      uStack_f8 = auVar1._8_4_;
      uStack_f0 = auVar4._0_4_;
      uStack_ec = auVar4._4_4_;
      uStack_e8 = auVar4._8_4_;
      uStack_e4 = auVar4._12_4_;
      uStack_88 = 0xd;
      uStack_bc = DAT_003bd8e8;
      uStack_8c = 0xb0f;
      uStack_c0 = DAT_003bd8ec;
      if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
        uStack_a0 = DAT_003bd90c;
        uStack_9c = DAT_003bd914;
        uStack_94 = DAT_003bd910;
        uStack_8c = 0x800b0f;
        uStack_a8 = DAT_003bd90c;
        uStack_a4 = DAT_003bd90c;
        uStack_98 = DAT_003bd910;
        uStack_85 = 0;
      }
    }
    uStack_d8 = 0x3f800000;
    uVar2 = DAT_0040eb30 * 0x10000 + ((int)DAT_0040eb30 >> 0x10) + DAT_0040eb34;
    DAT_0040eb30 = uVar2 * 0x10000 + ((int)uVar2 >> 0x10) + DAT_0040eb34 + uVar2;
    DAT_0040eb34 = DAT_0040eb34 + uVar2 + DAT_0040eb30;
    fStack_cc = DAT_003bd8f0 + (float)uVar2 * 2.3283064e-10 * (DAT_003bd8f4 - DAT_003bd8f0);
    uStack_8c = uStack_8c | 0x4018;
    puStack_70 = &DAT_003e26b0;
    fStack_dc = DAT_003bd8f8 + (float)DAT_0040eb30 * 2.3283064e-10 * (DAT_003bd8fc - DAT_003bd8f8);
    FUN_00285748(&uStack_80,DAT_0040f510 + 0xb308,auStack_130);
  }
  return;
}


// ==== FUN_001e7e08 @ 001e7e08 ====

undefined4 FUN_001e7e08(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0x6d936d37e6000000) || (param_1 == 0x6d936e1cc7c00000)) {
    uVar1 = 1;
  }
  return uVar1;
}


// ==== FUN_001e7e58 @ 001e7e58 ====

void FUN_001e7e58(long param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b0 [16];
  
  iVar5 = 0x3f;
  puVar6 = &DAT_003bd4e8;
  fVar8 = *(float *)(DAT_0040f4d0 + 0x20);
  do {
    if (*(int *)(puVar6 + 1) != 0) {
      lVar3 = FUN_001e7e08(*puVar6);
      fVar7 = DAT_003bd908;
      if ((lVar3 != 0) && (fVar7 = DAT_003bd900, *(int *)(*param_2 + 0xc4) == 2)) {
        fVar7 = DAT_003bd904;
      }
      if (fVar7 < fVar8 - *(float *)((int)puVar6 + 0xc)) {
        *(undefined4 *)(puVar6 + 1) = 0;
      }
    }
    iVar5 = iVar5 + -1;
    puVar6 = puVar6 + 2;
  } while (-1 < iVar5);
  iVar5 = 0;
  plVar4 = &DAT_003bd4e8;
  do {
    iVar5 = iVar5 + 1;
    if (((*(int **)(plVar4 + 1) != (int *)0x0) && (*plVar4 == param_1)) &&
       (*(int **)(plVar4 + 1) == param_2)) {
      return;
    }
    plVar4 = plVar4 + 2;
  } while (iVar5 < 0x40);
  if (((*(int *)(*param_2 + 0xc4) != 2) ||
      (lVar2 = FUN_001e7e08(param_1), lVar3 = DAT_003bd4e8, piVar1 = DAT_003bd4f0,
      fVar7 = DAT_003bd4f4, lVar2 != 0)) &&
     (lVar3 = param_1, piVar1 = param_2, fVar7 = fVar8, DAT_003bd4f0 != (int *)0x0)) {
    plVar4 = &DAT_003bd4e8;
    for (iVar5 = 1; lVar3 = DAT_003bd4e8, piVar1 = DAT_003bd4f0, fVar7 = DAT_003bd4f4, iVar5 < 0x40;
        iVar5 = iVar5 + 1) {
      if ((int)plVar4[3] == 0) {
        *(float *)((int)plVar4 + 0x1c) = fVar8;
        plVar4[2] = param_1;
        *(int **)(plVar4 + 3) = param_2;
        lVar3 = DAT_003bd4e8;
        piVar1 = DAT_003bd4f0;
        fVar7 = DAT_003bd4f4;
        break;
      }
      plVar4 = plVar4 + 2;
    }
  }
  DAT_003bd4f4 = fVar7;
  DAT_003bd4f0 = piVar1;
  DAT_003bd4e8 = lVar3;
  lVar3 = FUN_001e7e08(param_1);
  if (lVar3 == 0) {
    if (param_1 == 0x557b3a3466398000) {
      FUN_001dfed0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),*param_2,
                   *(undefined8 *)(*param_2 + 0xa0));
    }
    else if (param_1 == -0x725056a6a0000000) {
      FUN_001deeb8(auStack_b0,param_2,1,1);
    }
    else {
      FUN_001e7a58(param_1,param_2);
    }
  }
  else {
    FUN_001dfeb0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),param_2,
                 param_1 == 0x6d936d37e6000000);
  }
  return;
}


// ==== FUN_001e80c0 @ 001e80c0 ====

void FUN_001e80c0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0015bf38(*param_2 + 0x280);
  lVar2 = FUN_001d7bb8(uVar1,param_1);
  if (lVar2 != 0) {
    FUN_001d63a8(*(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc) + 0x1be0));
  }
  return;
}


// ==== FUN_001e8120 @ 001e8120 ====

void FUN_001e8120(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x2f;
  puVar1 = (undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x180) = param_2[4];
  *(undefined4 *)(param_1 + 0x184) = param_2[5];
  *(undefined4 *)(param_1 + 0x188) = param_2[6];
  *(undefined4 *)(param_1 + 0x170) = *param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_2[3];
  *(undefined4 *)(param_1 + 0x194) = param_2[9];
  *(undefined4 *)(param_1 + 400) = param_2[8];
  *(undefined4 *)(param_1 + 0x174) = param_2[1];
  *(undefined4 *)(param_1 + 0x178) = param_2[2];
  *(undefined4 *)(param_1 + 0x18c) = param_2[7];
  *(undefined4 *)(param_1 + 0x198) = param_2[10];
  *(undefined4 *)(param_1 + 0x19c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1a0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x1a4) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x1a8) = param_2[0xe];
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  return;
}


// ==== FUN_001e81c0 @ 001e81c0 ====

undefined4 FUN_001e81c0(int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      if (iVar1 == 2) {
        return 1;
      }
      if (iVar1 != 3) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1ac) = 1;
  }
  lVar2 = FUN_001efd30(DAT_0040f510);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1ac) = 2;
    return 1;
  }
  return 0;
}


// ==== FUN_001e8248 @ 001e8248 ====

undefined4 FUN_001e8248(void)

{
  return 1;
}


// ==== FUN_001e8250 @ 001e8250 ====

void FUN_001e8250(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x80);
  iVar3 = 0x2f;
  iVar1 = *piVar2;
  while( true ) {
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
    if (iVar1 != 0) {
      FUN_00284298(iVar1);
    }
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}


// ==== FUN_001e82a8 @ 001e82a8 ====

void FUN_001e82a8(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar2 = FUN_00107cf8(0xa0);
  param_1[2] = uVar2;
  uVar3 = FUN_00107cf8(0x8e0);
  uVar2 = FUN_00384668(uVar3);
  param_1[1] = uVar2;
  uVar2 = FUN_00107cf8(0x380);
  iVar4 = 2;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  param_1[7] = uVar2;
  iVar4 = FUN_00107cf8(0x1c50);
  iVar7 = 5;
  iVar6 = iVar4 + 0x428;
  do {
    *(undefined **)(iVar6 + 0x10) = &DAT_003e2898;
    iVar7 = iVar7 + -1;
    *(undefined **)(iVar6 + 0x60) = &DAT_003e0910;
    iVar6 = iVar6 + 0x430;
  } while (iVar7 != -1);
  param_1[3] = iVar4;
  iVar4 = FUN_00107cf8(0x2490);
  puVar5 = (undefined4 *)(iVar4 + 0x50);
  iVar6 = 7;
  do {
    *puVar5 = &DAT_003e26b0;
    iVar6 = iVar6 + -1;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5 = puVar5 + 4;
  } while (iVar6 != -1);
  iVar6 = iVar4 + 0xd0;
  iVar7 = 0x3f;
  puVar5 = (undefined4 *)(iVar4 + 0x14d0);
  do {
    *(undefined4 *)(iVar6 + 0x30) = 0;
    iVar7 = iVar7 + -1;
    *(undefined4 *)(iVar6 + 0x34) = 0;
    iVar6 = iVar6 + 0x50;
  } while (iVar7 != -1);
  iVar6 = 0x7f;
  do {
    *puVar5 = &DAT_003e26b0;
    iVar6 = iVar6 + -1;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5 = puVar5 + 7;
  } while (iVar6 != -1);
  param_1[4] = iVar4;
  *(undefined4 *)(iVar4 + 0x2418) = 0;
  iVar4 = FUN_00107cf8(0x290);
  param_1[5] = iVar4;
  *(undefined **)(iVar4 + 0x250) = &DAT_003e26b0;
  *(undefined1 *)(iVar4 + 0x254) = 0;
  uVar2 = FUN_00107cf8(0xc);
  param_1[6] = uVar2;
  iVar4 = FUN_00107cf8(0x19b0);
  puVar5 = (undefined4 *)(iVar4 + 0x58);
  iVar6 = 0;
  do {
    *puVar5 = &DAT_003e26b0;
    iVar6 = iVar6 + -1;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5 = puVar5 + 5;
  } while (iVar6 != -1);
  iVar6 = iVar4 + 0x80;
  iVar7 = 0x3f;
  do {
    *(undefined **)(iVar6 + 4) = &DAT_003e26b0;
    iVar7 = iVar7 + -1;
    *(undefined1 *)(iVar6 + 8) = 0;
    iVar6 = iVar6 + 0x60;
  } while (iVar7 != -1);
  param_1[8] = iVar4;
  uVar2 = FUN_00107cf8(0x1e60);
  iVar4 = 0;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  iVar4 = 0xe;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  iVar4 = 0x7e;
  do {
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  param_1[9] = uVar2;
  uVar2 = FUN_00107cf8(0x260);
  param_1[10] = uVar2;
  uVar2 = FUN_00107cf8(0x18);
  param_1[0xb] = uVar2;
  uVar2 = FUN_00107cf8(0x298);
  param_1[0xc] = uVar2;
  uVar2 = FUN_00107cf8(0x90);
  param_1[0xd] = uVar2;
  uVar2 = FUN_00107cf8(600);
  param_1[0xe] = uVar2;
  iVar4 = FUN_00107cf8(0x30);
  uVar2 = param_1[2];
  *(undefined **)(iVar4 + 0x2c) = &DAT_003e08d0;
  param_1[0xf] = iVar4;
  FUN_001e9d30(uVar2);
  FUN_001e5360(param_1[1]);
  FUN_001e36d0(param_1[7]);
  FUN_001d6488(param_1[3]);
  FUN_001dfe38(param_1[4]);
  FUN_001e1f38(param_1[5],0x20);
  FUN_001e7800(param_1[6]);
  FUN_001ea780(param_1[10]);
  FUN_001db4f0(param_1[8]);
  FUN_001eac18(param_1[9]);
  FUN_001ed578(param_1[0xb]);
  FUN_001ee888(param_1[0xc]);
  iVar4 = *(int *)(param_1[0xf] + 0x2c);
  (**(code **)(iVar4 + 0xc))(param_1[0xf] + (int)*(short *)(iVar4 + 8));
  FUN_001d8560(param_1[0xd]);
  FUN_001ef508(param_1[0xe]);
  uStack_5c = param_1[10];
  uStack_60 = param_1[9];
  uStack_7c = param_1[2];
  uStack_78 = param_1[3];
  uStack_64 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_54 = param_1[0xc];
  uStack_50 = param_1[0xe];
  uStack_48 = param_1[0xd];
  uStack_70 = param_1[5];
  uStack_68 = param_1[7];
  uStack_80 = param_1[1];
  uStack_74 = param_1[4];
  uStack_4c = param_1[0xf];
  uStack_6c = param_1[6];
  iVar4 = FUN_00107cf8(0x1b8);
  param_1[0x11] = iVar4;
  *(undefined **)(iVar4 + 0x1b0) = &DAT_003e0778;
  (*(code *)PTR_FUN_003e079c)(iVar4 + DAT_003e0798,&uStack_80);
  iVar4 = FUN_00107cf8(0x1b8);
  param_1[0x13] = iVar4;
  *(undefined **)(iVar4 + 0x1b0) = &DAT_003e0708;
  (*(code *)PTR_FUN_003e072c)(iVar4 + DAT_003e0728,&uStack_80);
  iVar4 = FUN_00107cf8(0x1bc);
  param_1[0x12] = iVar4;
  *(undefined **)(iVar4 + 0x1b0) = &DAT_003e0740;
  (*(code *)PTR_FUN_003e0764)(iVar4 + DAT_003e0760,&uStack_80);
  *param_1 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  return;
}


// ==== FUN_001e8710 @ 001e8710 ====

undefined4 FUN_001e8710(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 0;
      }
      FUN_001e8a30(param_1,0x3bda60,DAT_003f8cac,0);
    }
    else if (iVar1 != 2) {
      return 0;
    }
    *(int *)param_1 = 1;
  }
  return 1;
}


// ==== FUN_001e8798 @ 001e8798 ====

void FUN_001e8798(void)

{
  return;
}


// ==== FUN_001e87a0 @ 001e87a0 ====

void FUN_001e87a0(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if ((param_2 < 3) && (0 < param_2)) {
    if (0 < DAT_003f8cb4) {
      puVar1 = &DAT_003bdafc;
      iVar2 = DAT_003f8cb4;
      do {
        *puVar1 = 0;
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + 4;
      } while (iVar2 != 0);
    }
    DAT_003bdb7c = FUN_002821f0(*(undefined4 *)(DAT_0040f510 + 0xcbf4));
  }
  else {
    iVar2 = *(int *)(DAT_0040f4d0 + 0x5aec);
    DAT_003bdafc = *(undefined4 *)(iVar2 + 0x2f8);
    DAT_003bdb0c = *(undefined4 *)(iVar2 + 0x2fc);
    DAT_003bdb1c = *(undefined4 *)(iVar2 + 0x310);
    DAT_003bdb2c = *(undefined4 *)(iVar2 + 0x300);
    DAT_003bdb3c = *(undefined4 *)(iVar2 + 0x30c);
    DAT_003bdb4c = *(undefined4 *)(iVar2 + 0x304);
    DAT_003bdb5c = *(undefined4 *)(iVar2 + 0x318);
    DAT_003bdb6c = 0;
    DAT_003bdb7c = *(undefined4 *)(iVar2 + 0x308);
    DAT_003bdb8c = DAT_003f8cb0;
  }
  iVar2 = *(int *)(iVar3 + 0x44 + (int)param_2 * 4);
  if (*(int *)(iVar3 + 0x40) != iVar2) {
    *(int *)(iVar3 + 0x40) = iVar2;
    FUN_001e8a30(param_1,0x3bdaf0,DAT_003f8cb4,1);
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x40) + 0x1b0);
  (**(code **)(iVar2 + 0xc))(*(int *)(iVar3 + 0x40) + (int)*(short *)(iVar2 + 8));
  return;
}


// ==== FUN_001e8900 @ 001e8900 ====

undefined4 FUN_001e8900(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x40) != 0) {
    FUN_002808a0(DAT_0040f510);
    iVar1 = *(int *)(*(int *)(iVar3 + 0x40) + 0x1b0);
    lVar2 = (**(code **)(iVar1 + 0x1c))(*(int *)(iVar3 + 0x40) + (int)*(short *)(iVar1 + 0x18));
    if (lVar2 == 0) {
      return 0;
    }
    FUN_001e8af0(param_1);
    if (*(int *)(iVar3 + 0x40) == *(int *)(iVar3 + 0x44)) {
      FUN_001d8cf8(*(undefined4 *)(iVar3 + 0x34));
      *(undefined4 *)(iVar3 + 0x40) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x40) = 0;
    }
  }
  return 1;
}


// ==== FUN_001e8980 @ 001e8980 ====

void FUN_001e8980(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1b0);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x40) + (int)*(short *)(iVar1 + 0x10));
  return;
}


// ==== FUN_001e89b0 @ 001e89b0 ====

long * FUN_001e89b0(int param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x58);
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        iVar2 = iVar2 + 1;
        if (*plVar1 == param_2) {
          return plVar1;
        }
        plVar1 = plVar1 + 2;
      } while (iVar2 < *(int *)(param_1 + 0x54));
    }
    plVar1 = *(long **)(param_1 + 0x58);
  }
  if (plVar1 != (long *)0x0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x5c)) {
      do {
        iVar2 = iVar2 + 1;
        if (*plVar1 == param_2) {
          return plVar1;
        }
        plVar1 = plVar1 + 2;
      } while (iVar2 < *(int *)(param_1 + 0x5c));
    }
  }
  return (long *)0x0;
}


// ==== FUN_001e8a30 @ 001e8a30 ====

undefined4 FUN_001e8a30(int param_1,int param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  
  FUN_00282100(*(undefined4 *)(DAT_0040f510 + 0xcbf4));
  if (param_4 == 1) {
    *(int *)(param_1 + 0x5c) = param_3;
    *(int *)(param_1 + 0x58) = param_2;
  }
  else {
    *(int *)(param_1 + 0x54) = param_3;
    *(int *)(param_1 + 0x50) = param_2;
  }
  if (0 < param_3) {
    do {
      if (*(int *)(param_2 + 0xc) != 0) {
        uVar1 = FUN_002821a8(*(undefined4 *)(DAT_0040f510 + 0xcbf4),*(int *)(param_2 + 0xc),param_4)
        ;
        *(undefined4 *)(param_2 + 8) = uVar1;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 0x10;
    } while (param_3 != 0);
  }
  return 1;
}


// ==== FUN_001e8af0 @ 001e8af0 ====

undefined4 FUN_001e8af0(int param_1)

{
  FUN_00282170(*(undefined4 *)(DAT_0040f510 + 0xcbf4));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return 1;
}


// ==== FUN_001e8b38 @ 001e8b38 ====

void FUN_001e8b38(int param_1)

{
  FUN_001e8120();
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}


// ==== FUN_001e8b60 @ 001e8b60 ====

/* Strings referenciadas:
     "Sound\PAudio.awd" */

undefined4 FUN_001e8b60(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uStack_1b0;
  char *pcStack_1ac;
  undefined4 uStack_1a8;
  char *pcStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  
  iVar3 = *(int *)(DAT_0040f4d0 + 0x5aec);
  cVar1 = *(char *)(iVar3 + 0x1b);
  cVar2 = *(char *)(iVar3 + 0x1c);
  pcVar8 = (char *)param_1;
  *pcVar8 = *(char *)(iVar3 + 0x1a);
  pcVar8[1] = cVar1;
  pcVar8[2] = cVar2;
  switch(*(undefined4 *)(pcVar8 + 0x1b4)) {
  case 0:
  case 0x22:
    pcStack_a8 = pcVar8 + 0x78;
    pcStack_ac = pcVar8 + 0x150;
    pcStack_b0 = pcVar8 + 0x148;
    pcVar9 = pcVar8 + 0x160;
    pcVar10 = pcVar8 + 0x68;
    pcVar7 = pcVar8 + 0x44;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + -1;
      uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
      *(undefined4 *)pcVar7 = uVar4;
      pcVar7 = pcVar7 + 4;
    } while (-1 < iVar5);
    iVar5 = 3;
    do {
      iVar5 = iVar5 + -1;
      uVar4 = FUN_00281878(DAT_0040f510 + 0xb308);
      *(undefined4 *)pcVar9 = uVar4;
      pcVar9 = pcVar9 + 4;
    } while (-1 < iVar5);
    lVar6 = 0;
    pcVar7 = pcVar8;
    if ('\0' < *pcVar8) {
      do {
        lVar6 = (long)((int)lVar6 + 1);
        uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
        *(undefined4 *)(pcVar7 + 4) = uVar4;
        pcVar7 = pcVar7 + 4;
      } while (lVar6 < *pcVar8);
    }
    lVar6 = 0;
    if ('\0' < pcVar8[1]) {
      pcVar7 = pcVar8 + 0x48;
      do {
        lVar6 = (long)((int)lVar6 + 1);
        uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
        *(undefined4 *)pcVar7 = uVar4;
        pcVar7 = pcVar7 + 4;
      } while (lVar6 < pcVar8[1]);
    }
    iVar5 = 3;
    do {
      iVar5 = iVar5 + -1;
      uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
      *(undefined4 *)pcVar10 = uVar4;
      pcVar10 = pcVar10 + 4;
    } while (-1 < iVar5);
    iVar5 = 0;
    pcVar7 = pcStack_a8;
    do {
      iVar5 = iVar5 + -1;
      uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
      *(undefined4 *)pcVar7 = uVar4;
      pcVar7 = pcVar7 + 4;
    } while (-1 < iVar5);
    iVar5 = 3;
    pcVar7 = pcStack_ac;
    do {
      iVar5 = iVar5 + -1;
      uVar4 = FUN_00281878(DAT_0040f510 + 0xb308);
      *(undefined4 *)pcVar7 = uVar4;
      pcVar7 = pcVar7 + 4;
    } while (-1 < iVar5);
    lVar6 = 0;
    if ('\0' < pcVar8[2]) {
      pcVar7 = pcVar8 + 0x80;
      do {
        lVar6 = (long)((int)lVar6 + 1);
        uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
        *(undefined4 *)pcVar7 = uVar4;
        pcVar7 = pcVar7 + 4;
      } while (lVar6 < pcVar8[2]);
    }
    iVar5 = 1;
    pcVar7 = pcStack_b0;
    do {
      iVar5 = iVar5 + -1;
      uVar4 = FUN_00281808(DAT_0040f510 + 0xb308);
      *(undefined4 *)pcVar7 = uVar4;
      pcVar7 = pcVar7 + 4;
    } while (-1 < iVar5);
    break;
  case 1:
    goto switchD_001e8bd8_caseD_1;
  case 2:
    goto switchD_001e8bd8_caseD_2;
  case 3:
    goto switchD_001e8bd8_caseD_3;
  case 4:
    goto switchD_001e8bd8_caseD_4;
  case 5:
    goto switchD_001e8bd8_caseD_5;
  case 6:
    goto switchD_001e8bd8_caseD_6;
  case 7:
    goto switchD_001e8bd8_caseD_7;
  case 8:
    goto switchD_001e8bd8_caseD_8;
  case 9:
    goto switchD_001e8bd8_caseD_9;
  case 10:
    goto switchD_001e8bd8_caseD_a;
  case 0xb:
    goto switchD_001e8bd8_caseD_b;
  case 0xc:
    goto switchD_001e8bd8_caseD_c;
  case 0xd:
    goto switchD_001e8bd8_caseD_d;
  case 0xe:
    goto switchD_001e8bd8_caseD_e;
  case 0xf:
    goto switchD_001e8bd8_caseD_f;
  case 0x10:
    goto switchD_001e8bd8_caseD_10;
  case 0x11:
    break;
  default:
    goto switchD_001e8bd8_caseD_12;
  }
  pcVar8[0x1b4] = '\x01';
  pcVar8[0x1b5] = '\0';
  pcVar8[0x1b6] = '\0';
  pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_1:
  lVar6 = FUN_001e81c0(param_1);
  if (lVar6 != 0) {
    pcVar8[0x1b4] = '\x02';
    pcVar8[0x1b5] = '\0';
    pcVar8[0x1b6] = '\0';
    pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_2:
    lVar6 = FUN_001e9e08(*(undefined4 *)(pcVar8 + 0x174));
    if (lVar6 != 0) {
      pcVar8[0x1b4] = '\x03';
      pcVar8[0x1b5] = '\0';
      pcVar8[0x1b6] = '\0';
      pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_3:
      pcStack_1ac = pcVar8 + 0x44;
      pcStack_1a4 = pcVar8 + 0x160;
      uStack_1b0 = 2;
      uStack_1a8 = 1;
      uStack_1a0 = 4;
      lVar6 = FUN_001d65f8(*(undefined4 *)(pcVar8 + 0x178),&uStack_1b0);
      if (lVar6 == 0) {
        return 0;
      }
      pcVar8[0x1b4] = '\x04';
      pcVar8[0x1b5] = '\0';
      pcVar8[0x1b6] = '\0';
      pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_4:
      lVar6 = FUN_001e0028(*(undefined4 *)(pcVar8 + 0x17c));
      if (lVar6 != 0) {
        pcVar8[0x1b4] = '\x05';
        pcVar8[0x1b5] = '\0';
        pcVar8[0x1b6] = '\0';
        pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_5:
        lVar6 = FUN_001e2020(*(undefined4 *)(pcVar8 + 0x180),pcVar8 + 4,*pcVar8);
        if (lVar6 != 0) {
          pcVar8[0x1b4] = '\x06';
          pcVar8[0x1b5] = '\0';
          pcVar8[0x1b6] = '\0';
          pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_6:
          lVar6 = FUN_001e3758(*(undefined4 *)(pcVar8 + 0x188),pcVar8 + 0x48,pcVar8[1]);
          if (lVar6 != 0) {
            pcVar8[0x1b4] = '\a';
            pcVar8[0x1b5] = '\0';
            pcVar8[0x1b6] = '\0';
            pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_7:
            lVar6 = FUN_001db5f0(*(undefined4 *)(pcVar8 + 0x18c),pcVar8 + 0x68,4);
            if (lVar6 != 0) {
              pcVar8[0x1b4] = '\b';
              pcVar8[0x1b5] = '\0';
              pcVar8[0x1b6] = '\0';
              pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_8:
              uStack_188 = 1;
              uStack_184 = 0;
              iStack_120 = iVar3 + 0x28;
              uStack_190 = 0;
              iStack_11c = iVar3 + 0x20;
              uStack_18c = 0;
              iStack_150 = iVar3 + 0x30;
              iStack_110 = iVar3 + 0x38;
              iStack_140 = iVar3 + 0x40;
              uStack_114 = 0;
              iStack_e0 = iVar3 + 0x50;
              iStack_118 = (int)*(char *)(iVar3 + 0xd);
              iStack_f0 = iVar3 + 0x48;
              iStack_d0 = iVar3 + 0x58;
              iStack_130 = iVar3 + 0x60;
              iStack_100 = iVar3 + 0x68;
              iStack_170 = iVar3 + 0x78;
              uStack_144 = 0;
              iStack_160 = iVar3 + 0x70;
              iStack_148 = (int)*(char *)(iVar3 + 0xe);
              iStack_180 = iVar3 + 0x80;
              uStack_104 = 0;
              iStack_108 = (int)*(char *)(iVar3 + 0xf);
              uStack_134 = 0;
              iStack_138 = (int)*(char *)(iVar3 + 0x10);
              uStack_d4 = 0;
              iStack_d8 = (int)*(char *)(iVar3 + 0xc);
              uStack_e4 = 0;
              iStack_e8 = (int)*(char *)(iVar3 + 0x11);
              uStack_c4 = 0;
              iStack_c8 = (int)*(char *)(iVar3 + 0x12);
              uStack_124 = 0;
              iStack_128 = (int)*(char *)(iVar3 + 0x13);
              uStack_f4 = 0;
              iStack_f8 = (int)*(char *)(iVar3 + 0x14);
              uStack_164 = 0;
              iStack_168 = (int)*(char *)(iVar3 + 0x16);
              uStack_154 = 0;
              iStack_158 = (int)*(char *)(iVar3 + 0x15);
              uStack_174 = 0;
              iStack_178 = (int)*(char *)(iVar3 + 0x18);
              uStack_b4 = 0;
              iStack_b8 = (int)*(char *)(iVar3 + 0x17);
              uStack_c0 = 0;
              uStack_bc = 0;
              iStack_17c = iStack_180;
              iStack_16c = iStack_170;
              iStack_15c = iStack_160;
              iStack_14c = iStack_150;
              iStack_13c = iStack_140;
              iStack_12c = iStack_130;
              iStack_10c = iStack_110;
              iStack_fc = iStack_100;
              iStack_ec = iStack_f0;
              iStack_dc = iStack_e0;
              iStack_cc = iStack_d0;
              lVar6 = FUN_001ead48(*(undefined4 *)(pcVar8 + 400),1,pcVar8 + 0x78,1,pcVar8 + 0x150,4,
                                   &uStack_190);
              if (lVar6 == 0) {
                FUN_001eb4c0(*(undefined4 *)(pcVar8 + 400));
                return 0;
              }
              pcVar8[0x1b4] = '\t';
              pcVar8[0x1b5] = '\0';
              pcVar8[0x1b6] = '\0';
              pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_9:
              lVar6 = FUN_001e7810(*(undefined4 *)(pcVar8 + 0x184));
              if (lVar6 != 0) {
                pcVar8[0x1b4] = '\n';
                pcVar8[0x1b5] = '\0';
                pcVar8[0x1b6] = '\0';
                pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_a:
                lVar6 = FUN_001ea7c0(*(undefined4 *)(pcVar8 + 0x194));
                if (lVar6 != 0) {
                  pcVar8[0x1b4] = '\v';
                  pcVar8[0x1b5] = '\0';
                  pcVar8[0x1b6] = '\0';
                  pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_b:
                  lVar6 = FUN_001e5420(*(undefined4 *)(pcVar8 + 0x170));
                  if (lVar6 != 0) {
                    pcVar8[0x1b4] = '\f';
                    pcVar8[0x1b5] = '\0';
                    pcVar8[0x1b6] = '\0';
                    pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_c:
                    lVar6 = FUN_001ee8d8(*(undefined4 *)(pcVar8 + 0x19c),pcVar8 + 0x80,pcVar8[2]);
                    if (lVar6 != 0) {
                      pcVar8[0x1b4] = '\r';
                      pcVar8[0x1b5] = '\0';
                      pcVar8[0x1b6] = '\0';
                      pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_d:
                      lVar6 = FUN_001ef548(*(undefined4 *)(pcVar8 + 0x1a0),pcVar8 + 0x80,pcVar8[2],
                                           PTR_s_Sound_PAudio_awd_003bd924,0,0x3f8bf0);
                      if (lVar6 != 0) {
                        pcVar8[0x1b4] = '\x0e';
                        pcVar8[0x1b5] = '\0';
                        pcVar8[0x1b6] = '\0';
                        pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_e:
                        lVar6 = FUN_001d8600(*(undefined4 *)(pcVar8 + 0x1a8),pcVar8 + 0x148,2,
                                             *(undefined4 *)(iVar3 + 0x340));
                        if (lVar6 != 0) {
                          pcVar8[0x1b4] = '\x0f';
                          pcVar8[0x1b5] = '\0';
                          pcVar8[0x1b6] = '\0';
                          pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_f:
                          lVar6 = FUN_001ed640(*(undefined4 *)(pcVar8 + 0x198));
                          if (lVar6 != 0) {
                            pcVar8[0x1b4] = '\x10';
                            pcVar8[0x1b5] = '\0';
                            pcVar8[0x1b6] = '\0';
                            pcVar8[0x1b7] = '\0';
switchD_001e8bd8_caseD_10:
                            FUN_001ed6b0(*(undefined4 *)(pcVar8 + 0x198));
                            FUN_001dc5a8(*(undefined4 *)(pcVar8 + 0x18c));
                            FUN_001dc610(*(undefined4 *)(pcVar8 + 0x18c));
                            pcVar8[0x1b4] = '\x11';
                            pcVar8[0x1b5] = '\0';
                            pcVar8[0x1b6] = '\0';
                            pcVar8[0x1b7] = '\0';
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_001e8bd8_caseD_12:
  return 0;
}


// ==== FUN_001e9150 @ 001e9150 ====

void FUN_001e9150(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_zero_qw [16];
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar4 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
  uVar3 = *(undefined8 *)(iVar4 + 0x30);
  uVar10 = *(undefined4 *)(iVar4 + 0x38);
  uVar11 = *(undefined4 *)(iVar4 + 0x3c);
  iVar4 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
  uVar2 = *(undefined8 *)(iVar4 + 0x20);
  uVar8 = *(undefined4 *)(iVar4 + 0x28);
  uVar9 = *(undefined4 *)(iVar4 + 0x2c);
  lVar5 = FUN_00103870(DAT_0040f0e0);
  FUN_001e3b48(*(undefined4 *)(param_1 + 0x188));
  if (lVar5 == 0) {
    FUN_001e5900(*(undefined4 *)(param_1 + 0x170));
  }
  FUN_001d6c48(*(undefined4 *)(param_1 + 0x178));
  FUN_001dba00(*(undefined4 *)(DAT_0040f4d0 + 0x1c),*(undefined4 *)(param_1 + 0x18c));
  FUN_001ea7c8(*(undefined4 *)(param_1 + 0x194));
  FUN_001eb4c0(*(undefined4 *)(param_1 + 400));
  auVar6._8_4_ = uVar8;
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = uVar9;
  auVar7 = _por(in_zero_qw,auVar6);
  auVar1._8_4_ = uVar10;
  auVar1._0_8_ = uVar3;
  auVar1._12_4_ = uVar11;
  auVar6 = _por(in_zero_qw,auVar1);
  FUN_001e27d8(*(undefined4 *)(param_1 + 0x180),auVar6._0_8_,auVar7._0_8_);
  FUN_001e0440(*(undefined4 *)(param_1 + 0x17c));
  FUN_001ea200(*(undefined4 *)(param_1 + 0x174));
  FUN_001ed648(*(undefined4 *)(param_1 + 0x198));
  FUN_001eeb00(*(undefined4 *)(param_1 + 0x19c));
  FUN_001ef6f0(*(undefined4 *)(param_1 + 0x1a0));
  FUN_001d8728(*(undefined4 *)(param_1 + 0x1a8));
  return;
}


// ==== FUN_001e9250 @ 001e9250 ====

undefined4 FUN_001e9250(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  switch(piVar6[0x6d]) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x11:
  case 0x12:
    piVar6[0x6d] = 0x17;
    break;
  default:
    goto switchD_001e9294_caseD_1;
  case 0x13:
    goto switchD_001e9294_caseD_13;
  case 0x14:
    goto switchD_001e9294_caseD_14;
  case 0x15:
    goto switchD_001e9294_caseD_15;
  case 0x16:
    goto switchD_001e9294_caseD_16;
  case 0x17:
    break;
  case 0x18:
    goto switchD_001e9294_caseD_18;
  case 0x19:
    goto switchD_001e9294_caseD_19;
  case 0x1a:
    goto switchD_001e9294_caseD_1a;
  case 0x1b:
    goto switchD_001e9294_caseD_1b;
  case 0x1c:
    goto switchD_001e9294_caseD_1c;
  case 0x1d:
    goto switchD_001e9294_caseD_1d;
  case 0x1e:
    goto switchD_001e9294_caseD_1e;
  case 0x1f:
    goto switchD_001e9294_caseD_1f;
  case 0x20:
    goto switchD_001e9294_caseD_20;
  case 0x21:
    goto switchD_001e9294_caseD_21;
  case 0x22:
    goto switchD_001e9294_caseD_22;
  }
  lVar2 = FUN_001e5940(piVar6[0x5c]);
  if (lVar2 != 0) {
    piVar6[0x6d] = 0x13;
switchD_001e9294_caseD_13:
    lVar2 = FUN_001ed6b0(piVar6[0x66]);
    if (lVar2 != 0) {
      piVar6[0x6d] = 0x14;
switchD_001e9294_caseD_14:
      lVar2 = FUN_001d8ad0(piVar6[0x6a]);
      if (lVar2 != 0) {
        piVar3 = piVar6 + 0x52;
        iVar5 = 1;
        do {
          iVar5 = iVar5 + -1;
          FUN_002818d0(DAT_0040f510 + 0xb308,*piVar3);
          *piVar3 = 0;
          piVar3 = piVar3 + 1;
        } while (-1 < iVar5);
        piVar6[0x6d] = 0x15;
switchD_001e9294_caseD_15:
        lVar2 = FUN_001ef710(piVar6[0x68]);
        if (lVar2 != 0) {
          piVar6[0x6d] = 0x16;
switchD_001e9294_caseD_16:
          lVar2 = FUN_001eed58(piVar6[0x67]);
          if (lVar2 == 0) {
            return 0;
          }
          lVar2 = 0;
          if ('\0' < *(char *)((int)piVar6 + 2)) {
            piVar3 = piVar6 + 0x20;
            do {
              if (*piVar3 == 0) {
                cVar1 = *(char *)((int)piVar6 + 2);
              }
              else {
                FUN_002818d0(DAT_0040f510 + 0xb308);
                *piVar3 = 0;
                cVar1 = *(char *)((int)piVar6 + 2);
              }
              lVar2 = (long)((int)lVar2 + 1);
              piVar3 = piVar3 + 1;
            } while (lVar2 < cVar1);
          }
          piVar6[0x6d] = 0x18;
switchD_001e9294_caseD_18:
          lVar2 = FUN_001ea898(piVar6[0x65]);
          if (lVar2 != 0) {
            piVar6[0x6d] = 0x19;
switchD_001e9294_caseD_19:
            lVar2 = FUN_001e79f0(piVar6[0x61]);
            if (lVar2 != 0) {
              piVar6[0x6d] = 0x1a;
switchD_001e9294_caseD_1a:
              lVar2 = FUN_001ebc88(piVar6[100]);
              piVar3 = piVar6 + 0x54;
              if (lVar2 != 0) {
                piVar4 = piVar6 + 0x1e;
                iVar5 = 0;
                do {
                  if (*piVar4 != 0) {
                    FUN_002818d0(DAT_0040f510 + 0xb308);
                    *piVar4 = 0;
                  }
                  iVar5 = iVar5 + -1;
                  piVar4 = piVar4 + 1;
                } while (-1 < iVar5);
                iVar5 = 3;
                do {
                  if (*piVar3 != 0) {
                    FUN_00281908(DAT_0040f510 + 0xb308);
                    *piVar3 = 0;
                  }
                  iVar5 = iVar5 + -1;
                  piVar3 = piVar3 + 1;
                } while (-1 < iVar5);
                piVar6[0x6d] = 0x1b;
switchD_001e9294_caseD_1b:
                lVar2 = FUN_001dbdb8(piVar6[99]);
                if (lVar2 != 0) {
                  piVar3 = piVar6 + 0x1a;
                  iVar5 = 3;
                  do {
                    if (*piVar3 != 0) {
                      FUN_002818d0(DAT_0040f510 + 0xb308);
                      *piVar3 = 0;
                    }
                    iVar5 = iVar5 + -1;
                    piVar3 = piVar3 + 1;
                  } while (-1 < iVar5);
                  piVar6[0x6d] = 0x1c;
switchD_001e9294_caseD_1c:
                  lVar2 = FUN_001e3bb0(piVar6[0x62]);
                  if (lVar2 == 0) {
                    return 0;
                  }
                  lVar2 = 0;
                  if ('\0' < *(char *)((int)piVar6 + 1)) {
                    piVar3 = piVar6 + 0x12;
                    do {
                      if (*piVar3 == 0) {
                        cVar1 = *(char *)((int)piVar6 + 1);
                      }
                      else {
                        FUN_002818d0(DAT_0040f510 + 0xb308);
                        *piVar3 = 0;
                        cVar1 = *(char *)((int)piVar6 + 1);
                      }
                      lVar2 = (long)((int)lVar2 + 1);
                      piVar3 = piVar3 + 1;
                    } while (lVar2 < cVar1);
                  }
                  piVar6[0x6d] = 0x1d;
switchD_001e9294_caseD_1d:
                  lVar2 = FUN_001e2b48(piVar6[0x60]);
                  if (lVar2 == 0) {
                    return 0;
                  }
                  lVar2 = 0;
                  piVar3 = piVar6;
                  if ('\0' < (char)*piVar6) {
                    do {
                      piVar3 = piVar3 + 1;
                      if (*piVar3 == 0) {
                        cVar1 = (char)*piVar6;
                      }
                      else {
                        FUN_002818d0(DAT_0040f510 + 0xb308);
                        *piVar3 = 0;
                        cVar1 = (char)*piVar6;
                      }
                      lVar2 = (long)((int)lVar2 + 1);
                    } while (lVar2 < cVar1);
                  }
                  piVar6[0x6d] = 0x1e;
switchD_001e9294_caseD_1e:
                  lVar2 = FUN_001e0480(piVar6[0x5f]);
                  if (lVar2 != 0) {
                    piVar6[0x6d] = 0x1f;
switchD_001e9294_caseD_1f:
                    lVar2 = FUN_001d6cb8(piVar6[0x5e]);
                    piVar3 = piVar6 + 0x58;
                    if (lVar2 != 0) {
                      piVar4 = piVar6 + 0x11;
                      iVar5 = 0;
                      do {
                        if (*piVar4 != 0) {
                          FUN_002818d0(DAT_0040f510 + 0xb308);
                          *piVar4 = 0;
                        }
                        iVar5 = iVar5 + -1;
                        piVar4 = piVar4 + 1;
                      } while (-1 < iVar5);
                      iVar5 = 3;
                      do {
                        if (*piVar3 != 0) {
                          FUN_00281908(DAT_0040f510 + 0xb308);
                          *piVar3 = 0;
                        }
                        iVar5 = iVar5 + -1;
                        piVar3 = piVar3 + 1;
                      } while (-1 < iVar5);
                      piVar6[0x6d] = 0x20;
switchD_001e9294_caseD_20:
                      lVar2 = FUN_001ea4f0(piVar6[0x5d]);
                      if (lVar2 != 0) {
                        piVar6[0x6d] = 0x21;
switchD_001e9294_caseD_21:
                        lVar2 = FUN_001e8248(param_1);
                        if (lVar2 != 0) {
                          piVar6[0x6d] = 0x22;
switchD_001e9294_caseD_22:
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_001e9294_caseD_1:
  return 0;
}


// ==== FUN_001e9640 @ 001e9640 ====

void FUN_001e9640(int param_1)

{
  FUN_001ea510(*(undefined4 *)(param_1 + 0x174));
  return;
}


// ==== FUN_001e9660 @ 001e9660 ====

void FUN_001e9660(int param_1)

{
  FUN_001e8120();
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}


// ==== FUN_001e9688 @ 001e9688 ====

/* Strings referenciadas:
     "Sound\Streams\FEMusic.ssh"
     "Sound\FEAudio.awd" */

undefined4 FUN_001e9688(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  switch(*(undefined4 *)(iVar6 + 0x1b8)) {
  case 0:
  case 0xc:
    *(undefined4 *)(iVar6 + 0x1b8) = 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_001e96c8_caseD_2;
  case 3:
    goto switchD_001e96c8_caseD_3;
  case 4:
    goto switchD_001e96c8_caseD_4;
  case 5:
    goto switchD_001e96c8_caseD_5;
  case 6:
    goto switchD_001e96c8_caseD_6;
  case 7:
    goto switchD_001e96c8_caseD_7;
  case 8:
    goto switchD_001e96c8_caseD_8;
  default:
    goto switchD_001e96c8_caseD_9;
  }
  lVar3 = FUN_001e81c0(param_1);
  if (lVar3 != 0) {
    puVar5 = (undefined4 *)(iVar6 + 0x80);
    iVar4 = 0x1b;
    do {
      iVar4 = iVar4 + -1;
      uVar2 = FUN_00281808(DAT_0040f510 + 0xb308);
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar4);
    *(undefined4 *)(iVar6 + 0x1b8) = 2;
switchD_001e96c8_caseD_2:
    lVar3 = FUN_001ef548(*(undefined4 *)(iVar6 + 0x1a0),iVar6 + 0x80,0x1c,
                         PTR_s_Sound_FEAudio_awd_003bd92c,1,0x3f8c00);
    if (lVar3 != 0) {
      *(undefined4 *)(iVar6 + 0x1b8) = 3;
switchD_001e96c8_caseD_3:
      lVar3 = FUN_001ed640(*(undefined4 *)(iVar6 + 0x198));
      if (lVar3 != 0) {
        puVar5 = (undefined4 *)(iVar6 + 0x140);
        iVar4 = 1;
        do {
          iVar4 = iVar4 + -1;
          uVar2 = FUN_00281808(DAT_0040f510 + 0xb308);
          *puVar5 = uVar2;
          puVar5 = puVar5 + 1;
        } while (-1 < iVar4);
        *(undefined4 *)(iVar6 + 0x1b8) = 4;
switchD_001e96c8_caseD_4:
        if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
           (bVar1 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
          bVar1 = true;
        }
        if (bVar1) {
          return 0;
        }
        *(undefined4 *)(iVar6 + 0x1b4) = 0;
        FUN_001093c0(DAT_0040f4c4,PTR_s_Sound_Streams_FEMusic_ssh_003bd928,8,9,0x1e9ad0,param_1,0,
                     0x2000000);
        *(undefined4 *)(iVar6 + 0x1b8) = 5;
switchD_001e96c8_caseD_5:
        if (*(int *)(iVar6 + 0x1b4) != 0) {
          puVar5 = (undefined4 *)(iVar6 + 0x148);
          iVar4 = 1;
          do {
            iVar4 = iVar4 + -1;
            uVar2 = FUN_00281808(DAT_0040f510 + 0xb308);
            *puVar5 = uVar2;
            puVar5 = puVar5 + 1;
          } while (-1 < iVar4);
          *(undefined4 *)(iVar6 + 0x1b8) = 6;
switchD_001e96c8_caseD_6:
          lVar3 = FUN_001d8600(*(undefined4 *)(iVar6 + 0x1a8),iVar6 + 0x148,2,
                               *(undefined4 *)(iVar6 + 0x1b4));
          if (lVar3 != 0) {
            *(undefined4 *)(iVar6 + 0x1b8) = 7;
switchD_001e96c8_caseD_7:
            iVar4 = *(int *)(*(int *)(iVar6 + 0x1a4) + 0x2c);
            lVar3 = (**(code **)(iVar4 + 0x14))
                              (*(int *)(iVar6 + 0x1a4) + (int)*(short *)(iVar4 + 0x10),iVar6 + 0x140
                               ,2,0xb9360938b4dacec0);
            if (lVar3 != 0) {
              *(undefined4 *)(iVar6 + 0x1b8) = 8;
switchD_001e96c8_caseD_8:
              *(undefined4 *)(DAT_0040f510 + 0xcbc4) = *(undefined4 *)(DAT_0040f510 + 0xcbcc);
              *(undefined4 *)(*(int *)(iVar6 + 0x1a8) + 0x80) =
                   *(undefined4 *)(DAT_0040f510 + 0xcbd0);
              FUN_001ed6b0(*(undefined4 *)(iVar6 + 0x198));
switchD_001e96c8_caseD_9:
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


// ==== FUN_001e9908 @ 001e9908 ====

void FUN_001e9908(int param_1)

{
  int iVar1;
  undefined1 auStack_d0 [164];
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  FUN_001d8728(*(undefined4 *)(param_1 + 0x1a8));
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x2c);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x1a4) + (int)*(short *)(iVar1 + 0x18),auStack_d0);
  FUN_001ef6f0(*(undefined4 *)(param_1 + 0x1a0));
  return;
}


// ==== FUN_001e9958 @ 001e9958 ====

undefined4 FUN_001e9958(int param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x1b8)) {
  default:
    goto switchD_001e9998_caseD_0;
  case 8:
    *(undefined4 *)(param_1 + 0x1b8) = 9;
    break;
  case 9:
    break;
  case 10:
    goto switchD_001e9998_caseD_a;
  case 0xb:
    goto switchD_001e9998_caseD_b;
  }
  lVar1 = FUN_001d8ad0(*(undefined4 *)(param_1 + 0x1a8));
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x148);
    iVar4 = 1;
    do {
      iVar4 = iVar4 + -1;
      FUN_002818d0(DAT_0040f510 + 0xb308,*puVar2);
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (-1 < iVar4);
    *(undefined4 *)(param_1 + 0x1b8) = 10;
switchD_001e9998_caseD_a:
    iVar4 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x2c);
    lVar1 = (**(code **)(iVar4 + 0x24))(*(int *)(param_1 + 0x1a4) + (int)*(short *)(iVar4 + 0x20));
    if (lVar1 != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x140);
      iVar4 = 1;
      do {
        iVar4 = iVar4 + -1;
        FUN_002818d0(DAT_0040f510 + 0xb308,*puVar2);
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (-1 < iVar4);
      *(undefined4 *)(param_1 + 0x1b8) = 0xb;
switchD_001e9998_caseD_b:
      lVar1 = FUN_001ef710(*(undefined4 *)(param_1 + 0x1a0));
      if (lVar1 != 0) {
        piVar3 = (int *)(param_1 + 0x80);
        iVar4 = 0x1b;
        do {
          if (*piVar3 != 0) {
            FUN_002818d0(DAT_0040f510 + 0xb308);
            *piVar3 = 0;
          }
          iVar4 = iVar4 + -1;
          piVar3 = piVar3 + 1;
        } while (-1 < iVar4);
        *(undefined4 *)(param_1 + 0x1b8) = 0xc;
switchD_001e9998_caseD_0:
        return 1;
      }
    }
  }
  return 0;
}


// ==== FUN_001e9ad0 @ 001e9ad0 ====

void FUN_001e9ad0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x1b4) = uVar2;
  iVar1 = *(int *)(param_2 + 0x1b4);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + iVar1;
  if (0 < (long)*(short *)(iVar1 + 0x16)) {
    iVar4 = 0x10000;
    do {
      iVar3 = iVar4 >> 0x10;
      iVar4 = iVar4 + 0x10000;
    } while ((long)iVar3 < (long)*(short *)(iVar1 + 0x16));
  }
  return;
}


// ==== FUN_001e9b30 @ 001e9b30 ====

void FUN_001e9b30(int param_1)

{
  FUN_001e8120();
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}


// ==== FUN_001e9b58 @ 001e9b58 ====

/* Strings referenciadas:
     "Sound\FEAudio.awd" */

undefined4 FUN_001e9b58(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  switch(*(undefined4 *)(iVar5 + 0x1b4)) {
  case 0:
  case 5:
    *(undefined4 *)(iVar5 + 0x1b4) = 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_001e9b98_caseD_2;
  default:
    goto switchD_001e9b98_caseD_3;
  }
  lVar2 = FUN_001e81c0(param_1);
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)(iVar5 + 0x80);
    iVar4 = 0x1b;
    do {
      iVar4 = iVar4 + -1;
      uVar1 = FUN_00281808(DAT_0040f510 + 0xb308);
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar4);
    *(undefined4 *)(iVar5 + 0x1b4) = 2;
switchD_001e9b98_caseD_2:
    lVar2 = FUN_001ef548(*(undefined4 *)(iVar5 + 0x1a0),iVar5 + 0x80,0x1c,
                         PTR_s_Sound_FEAudio_awd_003bd92c,1,0x3f8c00);
    if (lVar2 != 0) {
      *(undefined4 *)(iVar5 + 0x1b4) = 3;
switchD_001e9b98_caseD_3:
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001e9c48 @ 001e9c48 ====

void FUN_001e9c48(int param_1)

{
  FUN_001ef6f0(*(undefined4 *)(param_1 + 0x1a0));
  return;
}


// ==== FUN_001e9c68 @ 001e9c68 ====

undefined4 FUN_001e9c68(int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1b4);
  if (iVar3 != 4) {
    if (4 < iVar3) {
      return 1;
    }
    if (iVar3 != 3) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x1b4) = 4;
  }
  lVar1 = FUN_001ef710(*(undefined4 *)(param_1 + 0x1a0));
  if (lVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x80);
    iVar3 = 0x1b;
    do {
      if (*piVar2 != 0) {
        FUN_002818d0(DAT_0040f510 + 0xb308);
        *piVar2 = 0;
      }
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + 1;
    } while (-1 < iVar3);
    *(undefined4 *)(param_1 + 0x1b4) = 5;
    return 1;
  }
  return 0;
}


// ==== FUN_001e9d30 @ 001e9d30 ====

void FUN_001e9d30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  iVar7 = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar7 * 8;
    iVar1 = iVar7 * 0x140;
    iVar7 = iVar7 + 1;
    iVar6 = 0x11;
    *(undefined8 *)(&DAT_0042a760 + iVar4) = *(undefined8 *)(&DAT_003f9410 + iVar2);
    puVar3 = (undefined4 *)(&DAT_0042a630 + iVar1);
    puVar5 = &DAT_0042a708 + iVar1;
    (&DAT_0042a71a)[iVar4] = 0;
    puVar8 = (undefined4 *)(&DAT_0042a6c0 + iVar1);
    (&DAT_0042a76c)[iVar4] = 0;
    (&DAT_0042a76d)[iVar4] = 0;
    *(undefined4 *)((int)&DAT_0042a768 + iVar4) = 0xbf800000;
    do {
      *puVar3 = 0x3f800000;
      iVar6 = iVar6 + -1;
      puVar3[1] = 0x3f800000;
      *puVar8 = 0x3e800000;
      puVar3 = puVar3 + 2;
      *puVar5 = 0;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar6);
    iVar4 = iVar7 * 0x140;
  } while (iVar7 < 0x11);
  return;
}


// ==== FUN_001e9e08 @ 001e9e08 ====

/* Strings referenciadas:
     "Normal_%.2i" */

undefined4 FUN_001e9e08(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  
  uVar2 = 0x9b61608e24019e00;
  if (*(byte *)(DAT_0040f0e0 + 0x2020c) < 10) {
    FUN_0035d728(auStack_30,0x3f8748,*(undefined1 *)(DAT_0040f0e0 + 0x2020c));
    uVar2 = FUN_002723b0(auStack_30);
  }
  iVar3 = (int)param_1;
  FUN_001ea728(param_1,uVar2,iVar3 + 0x98);
  *(undefined1 *)(iVar3 + 0x9c) = 0;
  *(undefined4 *)(iVar3 + 0x94) = 0;
  *(int *)(iVar3 + 0x90) = 1 << (*(uint *)(iVar3 + 0x98) & 0x1f);
  DAT_0042a76d = 0;
  puVar1 = &DAT_0042a630;
  while( true ) {
    *(undefined4 *)(puVar1 + 0x138) = 0xbf800000;
    if (0x42bb6f < (int)(puVar1 + 0x140)) break;
    puVar1[0x27d] = 0;
    puVar1 = puVar1 + 0x140;
  }
  FUN_001e9ee8(param_1,1);
  return 1;
}


// ==== FUN_001e9ee8 @ 001e9ee8 ====

/* Strings referenciadas:
     "VGGeneral"
     "VGPlayerWeapon"
     "../Export/ValueDB/Sound/ps2/DMMODE%s.CFG"
     "FrequencyScalar"
     "VolumeScalar"
     "AttackTime"
     "MixDominant" */

void FUN_001e9ee8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  int iStack_bc;
  
  if (param_2 == 1) {
    iVar10 = 0;
    do {
      iVar1 = iVar10 * 0x140;
      iStack_bc = iVar10 + 1;
      if ((&DAT_0042a76c)[iVar1] != '\x01') {
        iVar9 = 0;
        FUN_002726d0(*(undefined8 *)(&DAT_0042a760 + iVar1),auStack_d0);
        FUN_00369ff0(&DAT_0042a71a + iVar1,0x3f,0x3f8758,auStack_d0);
        iVar1 = iVar10 * 0x140;
        uVar12 = (ulong)(uint)(iVar1 >> 0x1f);
        ppuVar11 = &PTR_s_VGGeneral_003bd930;
        puVar5 = &DAT_0042a71a + iVar1;
        puStack_c0 = &DAT_0042a708 + iVar1;
        puVar7 = &DAT_0042a634 + iVar1;
        puVar6 = &DAT_0042a630 + iVar1;
        puVar4 = PTR_s_VGGeneral_003bd930;
        puVar8 = &DAT_0042a6c0 + iVar1;
        while( true ) {
          FUN_0027b950(0,0,DAT_003c09e8 + 4,puVar6,0x3f8788,puVar4,puVar5,0,0);
          puVar6 = puVar6 + 8;
          ppuVar11 = ppuVar11 + 1;
          FUN_0027b950(0,0,DAT_003c09e8 + 4,puVar7,0x3f8798,puVar4,puVar5,0,0);
          puVar7 = puVar7 + 8;
          FUN_0027b950(0,0,DAT_003c09e8 + 4,puVar8,0x3f87a8,puVar4,puVar5,0,0);
          puVar3 = puStack_c0 + iVar9;
          iVar9 = iVar9 + 1;
          FUN_0027b880(DAT_003c09e8 + 4,puVar3,0x3f87b8,puVar4,puVar5,0);
          if (0x11 < iVar9) break;
          puVar4 = *ppuVar11;
          puVar8 = puVar8 + 4;
        }
        *(undefined1 *)(((uint)uVar12 | 0x42a630) + iVar10 * 0x140 + 0x13c) = 1;
      }
      iVar10 = iStack_bc;
    } while (iStack_bc < 0x11);
  }
  else {
    iVar10 = 0;
    do {
      iStack_bc = iVar10 + 1;
      if ((&DAT_0042a76c)[iVar10 * 0x140] != '\0') {
        iVar1 = iVar10 * 0x140;
        iVar9 = 0;
        puVar4 = &DAT_0042a6c0 + iVar1;
        puVar8 = &DAT_0042a630 + iVar1;
        puVar5 = &DAT_0042a634 + iVar1;
        do {
          FUN_0027bb50(DAT_003c09e8 + 4,puVar8);
          FUN_0027bb50(DAT_003c09e8 + 4,puVar5);
          FUN_0027bb50(DAT_003c09e8 + 4,puVar4);
          iVar2 = iVar9 + iVar1;
          iVar9 = iVar9 + 1;
          FUN_0027bb50(DAT_003c09e8 + 4,&DAT_0042a708 + iVar2);
          puVar4 = puVar4 + 4;
          puVar8 = puVar8 + 8;
          puVar5 = puVar5 + 8;
        } while (iVar9 < 0x12);
        (&DAT_0042a76c)[iVar10 * 0x140] = 0;
      }
      iVar10 = iStack_bc;
    } while (iStack_bc < 0x11);
  }
  return;
}


// ==== FUN_001ea200 @ 001ea200 ====

void FUN_001ea200(undefined8 param_1)

{
  char cVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  pfVar2 = (float *)&DAT_0042a768;
  fVar6 = *(float *)(DAT_0040f4d0 + 0x20);
  uVar4 = 0;
  do {
    iVar5 = (int)param_1;
    uVar3 = 1 << (uVar4 & 0x1f);
    if ((((*(uint *)(iVar5 + 0x90) & uVar3) != 0) && (0.0 < *pfVar2)) && (*pfVar2 < fVar6)) {
      *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & ~uVar3;
    }
    uVar4 = uVar4 + 1;
    pfVar2 = pfVar2 + 0x50;
  } while ((int)uVar4 < 0x11);
  if ((*(int *)(iVar5 + 0x90) == *(int *)(iVar5 + 0x94)) && (*(char *)(iVar5 + 0x9c) != '\0')) {
    cVar1 = *(char *)(iVar5 + 0x9c);
  }
  else {
    FUN_001ea2d0(param_1);
    *(undefined4 *)(iVar5 + 0x94) = *(undefined4 *)(iVar5 + 0x90);
    cVar1 = *(char *)(iVar5 + 0x9c);
  }
  *(char *)(iVar5 + 0x9c) = cVar1 + -1;
  return;
}


// ==== FUN_001ea2d0 @ 001ea2d0 ====

void FUN_001ea2d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char acStack_c0 [32];
  
  uVar8 = 0;
  iVar13 = 0;
  iVar6 = 0x1000000;
  iVar5 = 0x1000000;
  uVar2 = *(uint *)(param_1 + 0x90);
  do {
    if ((uVar2 & 1 << (uVar8 & 0x1f)) != 0) {
      pcVar7 = acStack_c0 + iVar13;
      iVar13 = iVar5 >> 0x18;
      *pcVar7 = (char)uVar8;
      iVar5 = iVar5 + 0x1000000;
    }
    uVar8 = iVar6 >> 0x18;
    iVar6 = iVar6 + 0x1000000;
  } while ((int)uVar8 < 0x11);
  if (iVar13 != 0) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      bVar4 = false;
      iVar9 = 0;
      iVar10 = 0;
      iVar11 = iVar5 * 8;
      if (0 < iVar13) {
        iVar12 = 0x1000000;
        pcVar7 = acStack_c0;
        iVar6 = 0;
        do {
          iVar3 = *pcVar7 * 0x140;
          if ((&DAT_0042a708)[iVar5 + iVar3] == '\x01') {
            if (*(float *)(&DAT_0042a634 + acStack_c0[iVar6] * 0x140 + iVar11) <
                *(float *)(&DAT_0042a634 + iVar11 + iVar3)) {
              iVar6 = iVar9;
            }
            bVar4 = true;
          }
          else if (*(float *)(&DAT_0042a634 + iVar11 + iVar3) <
                   *(float *)(&DAT_0042a634 + acStack_c0[iVar10] * 0x140 + iVar11)) {
            iVar10 = iVar9;
          }
          pcVar7 = pcVar7 + 1;
          iVar9 = iVar12 >> 0x18;
          iVar12 = iVar12 + 0x1000000;
        } while (iVar9 < iVar13);
      }
      if (!bVar4) {
        iVar6 = iVar10;
      }
      cVar1 = acStack_c0[iVar6];
      *(undefined8 *)(iVar11 + param_1) = *(undefined8 *)(&DAT_0042a630 + cVar1 * 0x140 + iVar11);
      FUN_00281a58(*(undefined4 *)(&DAT_0042a6c0 + iVar5 * 4 + cVar1 * 0x140),DAT_0040f510 + 0xb308,
                   iVar5,param_1 + iVar11);
      iVar5 = (iVar5 + 1) * 0x1000000 >> 0x18;
    } while (iVar5 < 0x12);
  }
  return;
}


// ==== FUN_001ea4f0 @ 001ea4f0 ====

undefined4 FUN_001ea4f0(undefined8 param_1)

{
  FUN_001e9ee8(param_1,0);
  return 1;
}


// ==== FUN_001ea510 @ 001ea510 ====

void FUN_001ea510(void)

{
  return;
}


// ==== FUN_001ea518 @ 001ea518 ====

void FUN_001ea518(int param_1,uint param_2,long param_3)

{
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1 << (param_2 & 0x1f);
    (&DAT_0042a768)[param_2 * 0x50] = 0xbf800000;
    (&DAT_0042a76d)[param_2 * 0x140] = 0;
    return;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & ~(1 << (param_2 & 0x1f));
  return;
}


// ==== FUN_001ea580 @ 001ea580 ====

void FUN_001ea580(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint auStack_40 [4];
  
  lVar1 = FUN_001ea728(param_1,param_2,auStack_40);
  if (lVar1 != 0) {
    iVar2 = (int)param_1;
    if (param_3 == 0) {
      *(uint *)(iVar2 + 0x90) = *(uint *)(iVar2 + 0x90) & ~(1 << (auStack_40[0] & 0x1f));
    }
    else {
      *(uint *)(iVar2 + 0x90) = *(uint *)(iVar2 + 0x90) | 1 << (auStack_40[0] & 0x1f);
      (&DAT_0042a768)[auStack_40[0] * 0x50] = 0xbf800000;
      (&DAT_0042a76d)[auStack_40[0] * 0x140] = 0;
    }
  }
  return;
}


// ==== FUN_001ea628 @ 001ea628 ====

void FUN_001ea628(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint auStack_30 [4];
  
  iVar3 = (int)param_1;
  auStack_30[0] = 0;
  do {
    if (auStack_30[0] != *(uint *)(iVar3 + 0x98)) {
      uVar1 = 1 << (auStack_30[0] & 0x1f);
      if (((*(uint *)(iVar3 + 0x90) & uVar1) != 0) &&
         ((&DAT_0042a76d)[auStack_30[0] * 0x140] == '\x01')) {
        *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & ~uVar1;
      }
    }
    auStack_30[0] = auStack_30[0] + 1;
  } while ((int)auStack_30[0] < 0x11);
  lVar2 = *(long *)(param_3 + param_2 * 8 + 0x60);
  if ((lVar2 != -0x649e9f72ca800000) && (lVar2 = FUN_001ea728(param_1,lVar2,auStack_30), lVar2 != 0)
     ) {
    *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) | 1 << (auStack_30[0] & 0x1f);
    (&DAT_0042a768)[auStack_30[0] * 0x50] = 0xbf800000;
    (&DAT_0042a76d)[auStack_30[0] * 0x140] = 1;
  }
  return;
}


// ==== FUN_001ea728 @ 001ea728 ====

int FUN_001ea728(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 0;
  iVar2 = 0;
  iVar1 = *param_3;
  while( true ) {
    if (*(long *)(&DAT_003f9410 + iVar1 * 8) == param_2) {
      iVar2 = 1;
    }
    else {
      *param_3 = iVar1 + 1;
    }
    if ((iVar2 != 0) || (0x10 < *param_3)) break;
    iVar1 = *param_3;
  }
  return iVar2;
}


// ==== FUN_001ea780 @ 001ea780 ====

void FUN_001ea780(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x260;
  do {
    FUN_001eaaf8(param_1);
    param_1 = param_1 + 0x4c;
  } while (param_1 < iVar1);
  return;
}


// ==== FUN_001ea7c0 @ 001ea7c0 ====

undefined4 FUN_001ea7c0(void)

{
  return 1;
}


// ==== FUN_001ea7c8 @ 001ea7c8 ====

void FUN_001ea7c8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 in_zero_qw [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  
  auVar4 = _pextlw(0,0);
  auVar4 = _pextlw(0,auVar4._0_8_);
  iVar6 = param_1 + 0x260;
  do {
    FUN_001eab60(param_1);
    bVar2 = false;
    if (*(int *)(param_1 + 0x48) != 0) {
      bVar2 = *(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x44);
    }
    if (bVar2) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24);
      uVar3 = FUN_001ec768(uVar1);
      auVar5 = _por(in_zero_qw,auVar4);
      FUN_001ec970(uVar1,uVar3,*(undefined4 *)(param_1 + 0x40),auVar5._0_8_);
      FUN_001eaba0(param_1);
    }
    param_1 = param_1 + 0x4c;
  } while (param_1 < iVar6);
  return;
}


// ==== FUN_001ea898 @ 001ea898 ====

undefined4 FUN_001ea898(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x260;
  do {
    FUN_001eaba0(param_1);
    param_1 = param_1 + 0x4c;
  } while (param_1 < iVar1);
  return 1;
}


// ==== FUN_001ea8e0 @ 001ea8e0 ====

void FUN_001ea8e0(float param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_3 + 0x110);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != -1)) && (*(float *)(iVar1 + 8) <= param_1)) {
    FUN_001eaa20(param_2,*(int *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),param_3,
                 *(undefined2 *)(iVar1 + 0x1c));
  }
  return;
}


// ==== FUN_001ea930 @ 001ea930 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ea930(float param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar6 = _qmtc2(param_4);
  iVar1 = *(int *)((int)param_3 + 0x110);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar2 == -1) {
      if (*(int *)(iVar1 + 0x10) == -1) {
        return;
      }
      fVar3 = *(float *)(iVar1 + 8);
    }
    else {
      fVar3 = *(float *)(iVar1 + 8);
    }
    if (fVar3 <= param_1) {
      auVar5 = _vaddbc(in_vf0,in_vf0);
      auVar4 = _lqc2(_DAT_004432c0);
      auVar6 = _vmul(auVar6,auVar4);
      _vaddabc(auVar6,auVar6);
      auVar6 = _vmaddbc(auVar5,auVar6);
      auVar6 = _qmfc2(auVar6._0_4_);
      if (0.9 < ABS(auVar6._0_4_)) {
        if (iVar2 != -1) {
          FUN_001eaa20(param_2,iVar2,*(undefined4 *)(iVar1 + 0xc),param_3,
                       *(undefined2 *)(iVar1 + 0x1c));
        }
        iVar1 = *(int *)((int)param_3 + 0x110);
        if (*(int *)(iVar1 + 0x10) != -1) {
          FUN_001eaa20(param_2,*(int *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),param_3,
                       *(undefined2 *)(iVar1 + 0x1c));
        }
      }
    }
  }
  return;
}


// ==== FUN_001eaa20 @ 001eaa20 ====

void FUN_001eaa20(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined2 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = param_1;
  while( true ) {
    if (iVar1 == param_2) goto LAB_001eaa94;
    if (param_1 + 0x260 <= iVar2 + 0x4c) break;
    iVar1 = *(int *)(iVar2 + 0x8c);
    iVar2 = iVar2 + 0x4c;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = param_1;
  while (iVar1 != 0) {
    if (param_1 + 0x260 <= iVar2 + 0x4c) {
      return;
    }
    iVar1 = *(int *)(iVar2 + 0x90);
    iVar2 = iVar2 + 0x4c;
  }
  FUN_001eab30(iVar2,param_3,param_2);
LAB_001eaa94:
  FUN_001eabd8(iVar2,param_4,param_5);
  return;
}


// ==== FUN_001eaac8 @ 001eaac8 ====

void FUN_001eaac8(void)

{
  FUN_001ebfc0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24));
  return;
}


// ==== FUN_001eaaf8 @ 001eaaf8 ====

void FUN_001eaaf8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  FUN_0035c6ec(param_1,0,0x40);
  return;
}


// ==== FUN_001eab30 @ 001eab30 ====

undefined4 FUN_001eab30(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)param_1 + 0x40) = param_3;
  *(undefined4 *)((int)param_1 + 0x48) = param_2;
  FUN_0035c6ec(param_1,0,0x40);
  return 1;
}


// ==== FUN_001eab60 @ 001eab60 ====

void FUN_001eab60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = (int *)(param_1 + 4);
  iVar3 = 7;
  do {
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      *piVar2 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 2;
  } while (-1 < iVar3);
  *(int *)(param_1 + 0x44) = iVar4;
  return;
}


// ==== FUN_001eaba0 @ 001eaba0 ====

undefined4 FUN_001eaba0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  FUN_0035c6ec(param_1,0,0x40);
  return 1;
}


// ==== FUN_001eabd8 @ 001eabd8 ====

void FUN_001eabd8(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)0x0;
  iVar2 = 0;
  while( true ) {
    if (param_1[1] == 0) {
      piVar1 = param_1;
    }
    if (*param_1 == param_2) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 2;
    if (7 < iVar2) {
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_2;
        piVar1[1] = param_3;
      }
      return;
    }
  }
  return;
}


// ==== FUN_001eac18 @ 001eac18 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001eac18(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  iVar5 = param_1;
  do {
    iVar6 = iVar6 + -1;
    FUN_001ec458(iVar5);
    iVar5 = iVar5 + 0x40;
  } while (-1 < iVar6);
  iVar5 = 0xf;
  FUN_00281b88(param_1 + 0x6e0);
  FUN_001ed3a0(param_1 + 0x7b0);
  FUN_0035c6ec(param_1 + 0x80,0,0x280);
  FUN_0035c6ec(param_1 + 0x300,0,0xe0);
  FUN_0035c6ec(param_1 + 0x1df8,0,0x10);
  puVar4 = (undefined1 *)(param_1 + 0x6d0);
  do {
    *puVar4 = 0;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + -0x30;
  } while (-1 < iVar5);
  *(undefined4 *)(param_1 + 0x1de8) = 0;
  *(undefined4 *)(param_1 + 0x1e08) = 0;
  *(undefined4 *)(param_1 + 0x1e0c) = 0;
  *(undefined8 *)(param_1 + 0x1e18) = 0;
  *(undefined4 *)(param_1 + 0x1e34) = 0;
  *(undefined4 *)(param_1 + 0x1e38) = 0;
  *(undefined4 *)(param_1 + 0x1e2c) = 0;
  *(undefined4 *)(param_1 + 0x1e3c) = 0;
  *(undefined4 *)(param_1 + 0x1e44) = 0;
  *(undefined4 *)(param_1 + 0x1e48) = 0;
  *(undefined1 *)(param_1 + 0x1e54) = 1;
  FUN_001ec9f0(param_1,0,0);
  *(undefined4 *)(param_1 + 0x1e50) = 0;
  *(undefined1 *)(param_1 + 0x1e55) = 0;
  *(undefined4 *)(param_1 + 0x1e4c) = DAT_003bd988;
  uVar3 = DAT_004432ac;
  uVar2 = DAT_004432a8;
  uVar1 = _DAT_004432a0;
  *(undefined4 *)(param_1 + 0x1de4) = 0xe;
  *(int *)(param_1 + 0x1dd0) = (int)uVar1;
  *(int *)(param_1 + 0x1dd4) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x1dd8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ddc) = uVar3;
  *(undefined4 *)(param_1 + 0x1e24) = 0;
  *(undefined4 *)(param_1 + 0x1de0) = 0xe;
  *(undefined1 *)(param_1 + 0x1e56) = 0;
  *(undefined1 *)(param_1 + 0x1e57) = 0;
  return;
}


// ==== FUN_001ead48 @ 001ead48 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/BaseMix.cfg"
     "levels\level_%02i\%s"
     "WorldAmbience"
     "../Export/ValueDB/Sound/ps2/Streams.cfg"
     "Destruct.ssh"
     "Destruction"
     "DistantThreshold"
     "Explosion Duck Duration"
     "Destruction Duck Duration"
     "Duck Time per Blow Out"
     "Max Blow Out Duck Time"
     "Min Time betwixt Blow Outs"
     ... */

undefined4
FUN_001ead48(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
            undefined8 *param_7)

{
  long lVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong in_hi;
  undefined1 auStack_120 [48];
  undefined8 uStack_f0;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined8 *puStack_d4;
  int iStack_d0;
  undefined4 *puStack_cc;
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  
  iStack_e8 = param_2;
  iStack_e4 = param_4;
  iStack_e0 = param_5;
  switch(*(undefined4 *)(param_1 + 0x1e24)) {
  case 0:
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd988,0x3f8800,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd98c,0x3f8818,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd980,0x3f8830,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd984,0x3f8848,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd990,0x3f8868,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd994,0x3f8880,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd998,0x3f8898,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd99c,0x3f88b8,0x3f8808,
                 PTR_s____Export_ValueDB_Sound_ps2_Stre_003bd978,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd9a0,0x3f88d8,0x3f7b58,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd9a4,0x3f88e8,0x3f7b58,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bd9a8,0x3f8900,0x3f7b58,
                 PTR_s____Export_ValueDB_Sound_ps2_Base_003bd2cc,0,0);
    *(undefined4 *)(param_1 + 0x1e24) = 7;
    break;
  case 1:
    goto switchD_001eadb4_caseD_1;
  case 2:
    goto switchD_001eadb4_caseD_2;
  case 3:
  case 4:
  case 5:
    goto switchD_001eadb4_caseD_3;
  default:
    goto switchD_001eadb4_caseD_6;
  case 7:
    break;
  }
  if ((*(char *)(DAT_0040f4c4 + 0xb38) != '\0') ||
     (bVar10 = false, *(char *)(DAT_0040f4c4 + 0xb39) != '\0')) {
    bVar10 = true;
  }
  if (!bVar10) {
    uStack_c4 = param_6 - 2;
    puStack_cc = (undefined4 *)(param_1 + 0x1df0);
    iStack_c8 = param_1 + 0x1df8;
    *(undefined4 *)(param_1 + 0x1e08) = 0;
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x1e0c) = 0;
    *(int *)(param_1 + 0x1e2c) = iStack_e4;
    iStack_dc = param_1 + 0x300;
    puStack_d4 = &uStack_f0;
    iStack_d0 = param_1 + 0x6e0;
    iStack_d8 = param_1 + 0x7b0;
    iStack_c0 = iStack_e0 + 8;
    puVar12 = puStack_cc;
    if (0 < iStack_e4) {
      do {
        uVar5 = *param_3;
        iVar9 = iVar9 + 1;
        param_3 = param_3 + 1;
        *puVar12 = uVar5;
        puVar12 = puVar12 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x1e2c));
    }
    *(undefined4 *)(param_1 + 0x1e30) = 0;
    iVar15 = 0xd;
    iVar9 = param_1;
    do {
      uVar7 = param_7[1];
      *(undefined8 *)(iVar9 + 0x300) = *param_7;
      *(undefined8 *)(iVar9 + 0x308) = uVar7;
      iVar15 = iVar15 + -1;
      param_7 = param_7 + 2;
      piVar8 = (int *)(iVar9 + 0x308);
      iVar9 = iVar9 + 0x10;
      *(int *)(param_1 + 0x1e30) = *(int *)(param_1 + 0x1e30) + *piVar8;
    } while (-1 < iVar15);
    iVar17 = 0;
    FUN_0035c6ec(iStack_c8,0,0x10);
    iVar15 = 0;
    iStack_bc = param_1 + 0x80;
    iVar9 = 0;
    do {
      iVar13 = 0;
      iVar14 = param_1 + iVar9 * 0x10 + 0x300;
      iVar16 = iVar9 + 1;
      if (0 < *(int *)(iVar14 + 8)) {
        lVar1 = ((long)iStack_bc | in_hi) + (long)(iVar17 * 0x28);
        iVar11 = (int)lVar1;
        in_hi = (ulong)(int)((ulong)lVar1 >> 0x20);
        puVar12 = (undefined4 *)(iVar15 * 4 + iStack_c8);
        do {
          FUN_001ed170(iVar11,iVar9);
          if (iVar9 == 0) {
            iVar15 = iVar15 + 1;
            *puVar12 = *(undefined4 *)(iVar11 + 0xc);
            puVar12 = puVar12 + 1;
            iVar4 = *(int *)(iVar14 + 8);
          }
          else {
            iVar4 = *(int *)(iVar14 + 8);
          }
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0x28;
        } while (iVar13 < iVar4);
      }
      iVar17 = iVar17 + *(int *)(iVar14 + 8);
      iVar9 = iVar16;
    } while (iVar16 < 0xe);
    *(int *)(param_1 + 0x1e38) = iVar15;
    *(int *)(param_1 + 0x1e28) = iStack_e8;
    iVar9 = iStack_e4 / iStack_e8;
    iVar15 = *(int *)(iStack_dc + 8) / iStack_e8;
    FUN_001ec470(param_1,0xb93639605b4f4e78,puStack_cc,iVar9,iStack_c8,iVar15);
    if (*(int *)(param_1 + 0x1e28) == 2) {
      FUN_001ec470(param_1 + 0x40,0xb93639605b4f4ea0,param_1 + iVar9 * 4 + 0x1df0,iVar9,
                   param_1 + iVar15 * 4 + 0x1df8,iVar15);
    }
    FUN_0035d728(auStack_120,0x3f7aa8,*(undefined1 *)(DAT_0040f0e0 + 0x2020c),
                 PTR_s_Destruct_ssh_003bd97c);
    FUN_001093c0(DAT_0040f4c4,auStack_120,8,9,0x1ec6f8,param_1,0,0x2000000);
    *(undefined4 *)(param_1 + 0x1e10) = 0;
    uVar5 = FUN_00280200(DAT_0040f510,*(int *)(DAT_0040f4d0 + 0x5aec) + 0x218,0);
    *(undefined4 *)(param_1 + 0x1de8) = uVar5;
    uStack_f0 = 0x684bbb088241b000;
    uVar5 = FUN_00280200(DAT_0040f510,puStack_d4,0);
    *(undefined4 *)(param_1 + 0x1dec) = uVar5;
    FUN_00281bb8(iStack_d0,iStack_e0,2);
    FUN_001ed3c0(iStack_d8,iStack_c0,uStack_c4 & 0xffff,*(undefined4 *)(param_1 + 0x1de8));
    *(undefined4 *)(param_1 + 0x1e24) = 1;
switchD_001eadb4_caseD_1:
    if (*(int *)(param_1 + 0x1e10) != 0) {
      *(undefined4 *)(param_1 + 0x1e24) = 2;
switchD_001eadb4_caseD_2:
      bVar10 = true;
      iVar9 = 1;
      piVar8 = (int *)(param_1 + 0x310);
      do {
        if (*(char *)(param_1 + 0x1e54) == '\0') {
          iVar15 = *piVar8;
        }
        else {
          iVar15 = piVar8[1];
        }
        if (iVar15 == 0) {
          sVar3 = 0;
        }
        else {
          sVar3 = *(short *)(iVar15 + 4);
        }
        iVar9 = iVar9 + 1;
        if ((sVar3 != 0) && (piVar8[3] < piVar8[2])) {
          bVar10 = false;
          break;
        }
        piVar8 = piVar8 + 4;
      } while (iVar9 < 0xe);
      if (bVar10) {
        FUN_001ec9f0(param_1,0,0);
        *(undefined4 *)(param_1 + 0x1e24) = 3;
switchD_001eadb4_caseD_3:
        *(undefined4 *)(param_1 + 0x1e44) = 0;
        iVar9 = 0xf;
        *(undefined4 *)(param_1 + 0x1e50) = 0;
        puVar6 = (undefined1 *)(param_1 + 0x6d0);
        *(undefined1 *)(param_1 + 0x1e55) = 0;
        do {
          *puVar6 = 0;
          uVar2 = DAT_004432ac;
          uVar5 = DAT_004432a8;
          uVar7 = _DAT_004432a0;
          iVar9 = iVar9 + -1;
          puVar6 = puVar6 + -0x30;
        } while (-1 < iVar9);
        *(undefined1 *)(param_1 + 0x1e56) = 0;
        *(undefined1 *)(param_1 + 0x1e57) = 0;
        *(int *)(param_1 + 0x1dd0) = (int)uVar7;
        *(int *)(param_1 + 0x1dd4) = (int)((ulong)uVar7 >> 0x20);
        *(undefined4 *)(param_1 + 0x1dd8) = uVar5;
        *(undefined4 *)(param_1 + 0x1ddc) = uVar2;
        *(undefined4 *)(param_1 + 0x1de4) = 0xe;
        *(undefined4 *)(param_1 + 0x1de0) = 0xe;
        FUN_001ebd88(param_1);
        return 1;
      }
    }
switchD_001eadb4_caseD_6:
  }
  return 0;
}


// ==== FUN_001eb490 @ 001eb490 ====

void FUN_001eb490(void)

{
  if (1 < (uint)(DAT_003c0e04 - DAT_003bd9d8)) {
    DAT_003bd9d0 = DAT_003c0e04;
  }
  DAT_003bd9d8 = DAT_003c0e04;
  return;
}


// ==== FUN_001eb4c0 @ 001eb4c0 ====

void FUN_001eb4c0(int param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_160 [84];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b5;
  
  uStack_bc = 0;
  FUN_001eb490();
  fVar8 = *(float *)(DAT_0040f4d0 + 0x20);
  switch(*(undefined4 *)(param_1 + 0x1e24)) {
  case 3:
  case 4:
  case 5:
    lVar3 = FUN_00103870(DAT_0040f0e0);
    if (lVar3 != 0) goto switchD_001eb52c_caseD_0;
    uStack_108 = *(undefined4 *)(param_1 + 0x1e40);
    iVar6 = 0;
    uStack_bc = 0x10;
    if (0 < *(int *)(param_1 + 0x1e28)) {
      uVar7 = 0x3f800000;
      iVar5 = param_1;
      iVar4 = param_1;
      do {
        lVar3 = FUN_001ec5c8(iVar4);
        if (lVar3 == 1) {
          uVar2 = uStack_bc | 0x800008;
          uStack_10c = uVar7;
          uStack_bc = uStack_bc | 8;
          if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
            uStack_cc = DAT_003bd9b0;
            uStack_d8 = DAT_003bd9ac;
            uStack_c8 = DAT_003bd9b4;
LAB_001eb63c:
            uStack_b5 = 1;
            uStack_d4 = uStack_d8;
            uStack_d0 = uStack_d8;
            uStack_c4 = uStack_c8;
            uStack_bc = uVar2;
          }
        }
        else {
          uStack_10c = *(undefined4 *)(param_1 + 0x1e4c);
          uStack_bc = uStack_bc | 8;
          if ((*(char *)(DAT_0040f510 + 0xcb9d) != '\0') && (lVar3 != 0)) {
            uStack_cc = FUN_001ed2e8(param_1);
            uVar2 = uStack_bc | 0x800000;
            uStack_d8 = DAT_003bd9b8;
            uStack_c8 = DAT_003bd9c0;
            goto LAB_001eb63c;
          }
        }
        FUN_001eb838(iVar5,auStack_160);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x40;
        iVar4 = iVar4 + 0x40;
      } while (iVar6 < *(int *)(param_1 + 0x1e28));
    }
    FUN_001ecaf8(param_1);
    if (0.0 < *(float *)(param_1 + 0x1e48)) {
      *(float *)(param_1 + 0x1e48) = *(float *)(param_1 + 0x1e48) - *(float *)(DAT_0040f4d0 + 0x1c);
    }
    if ((uint)(DAT_003bd9d0 + DAT_003bd9d4) <= DAT_003c0e04) {
      cVar1 = *(char *)(param_1 + 0x400);
      iVar6 = param_1;
      while( true ) {
        if ((cVar1 == '\x01') && (*(float *)(iVar6 + 0x3f8) <= fVar8)) {
          FUN_001ed4a0(*(undefined4 *)(iVar6 + 0x3fc),param_1 + 0x7b0,*(undefined8 *)(iVar6 + 0x3e0)
                       ,*(undefined4 *)(iVar6 + 0x3f0),*(undefined4 *)(iVar6 + 0x3f4));
          *(undefined1 *)(iVar6 + 0x400) = 0;
        }
        if (param_1 + 0x300 <= iVar6 + 0x30) break;
        cVar1 = *(char *)(iVar6 + 0x430);
        iVar6 = iVar6 + 0x30;
      }
    }
  case 1:
  case 2:
    FUN_001eb998(param_1);
  default:
switchD_001eb52c_caseD_0:
    FUN_00281bf8(param_1 + 0x6e0);
    uStack_b8 = 7;
    uStack_10c = DAT_003bd9a0;
    uStack_ec = DAT_003bd9a4;
    uStack_bc = 0xb08;
    uStack_f0 = DAT_003bd9a8;
    if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
      uStack_d0 = DAT_003bd9c4;
      uStack_cc = DAT_003bd9cc;
      uStack_c4 = DAT_003bd9c8;
      uStack_bc = 0x800b08;
      uStack_d8 = DAT_003bd9c4;
      uStack_d4 = DAT_003bd9c4;
      uStack_c8 = DAT_003bd9c8;
      uStack_b5 = 0;
    }
    FUN_001ed3e0(fVar8,param_1 + 0x7b0,*(undefined8 *)(DAT_0040f4d0 + 0xd0),auStack_160);
    FUN_001ecd50(param_1);
    return;
  }
}


// ==== FUN_001eb838 @ 001eb838 ====

void FUN_001eb838(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = *(int *)(iVar3 + 0x28);
  if (iVar4 == 2) {
LAB_001eb8bc:
    lVar2 = FUN_001dd3e0(*(undefined4 *)(iVar3 + 0x1c));
    if (lVar2 == 0) {
      return;
    }
    *(undefined4 *)(*(int *)(iVar3 + 0x20) + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 3;
    *(undefined4 *)(iVar3 + 0x20) = 0;
  }
  else {
    if (iVar4 < 3) {
      if (iVar4 != 1) {
        return;
      }
      lVar2 = FUN_001dd728(*(undefined4 *)(iVar3 + 0x1c));
      if (lVar2 != 0) {
        FUN_001dd158(*(undefined4 *)(iVar3 + 0x1c),param_2);
        return;
      }
      *(undefined4 *)(iVar3 + 0x28) = 2;
      goto LAB_001eb8bc;
    }
    if (iVar4 != 3) {
      if (iVar4 != 4) {
        return;
      }
      iVar4 = *(int *)(iVar3 + 0x20);
      goto LAB_001eb914;
    }
  }
  if (*(int *)(iVar3 + 0x24) == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 0x24) + 0x18);
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
  iVar4 = *(int *)(iVar3 + 0x24);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(int *)(iVar3 + 0x20) = iVar4;
  *(undefined4 *)(iVar4 + 0x14) = 6;
  *(undefined4 *)(iVar3 + 0x28) = 4;
  iVar4 = *(int *)(iVar3 + 0x20);
LAB_001eb914:
  lVar2 = FUN_001dcf70(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar4 + 0xc),iVar3 + 0x14,
                       *(int *)(iVar3 + 0x30) + 1,iVar3 + 0x10,*(undefined4 *)(iVar3 + 0x2c));
  if (lVar2 != 0) {
    uVar1 = FUN_001ed108(param_1);
    iVar4 = (int)param_2;
    *(undefined1 *)(iVar4 + 0xa8) = uVar1;
    *(undefined1 *)(iVar4 + 0xa9) = 0;
    *(uint *)(iVar4 + 0xa4) = *(uint *)(iVar4 + 0xa4) | 0x1800;
    iVar4 = *(int *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x34) = 0x3f800000;
    FUN_001dd5d8(*(undefined4 *)(iVar3 + 0x1c),param_2);
    *(undefined4 *)(iVar3 + 0x28) = 1;
  }
  return;
}


// ==== FUN_001eb998 @ 001eb998 ====

void FUN_001eb998(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  
  iVar10 = (int)param_1;
  switch(*(undefined4 *)(iVar10 + 0x1e24)) {
  default:
    goto LAB_001ebc70;
  case 2:
  case 4:
    if (*(int *)(iVar10 + 0x1e08) == 0) {
      iVar8 = 0;
      if (0 < *(int *)(iVar10 + 0x1e30)) {
        piVar7 = (int *)(iVar10 + 0x94);
        puVar4 = (undefined8 *)(iVar10 + 0x80);
        do {
          if (*piVar7 == 1) {
            iVar8 = *(int *)(puVar4 + 2);
            *(undefined8 **)(iVar10 + 0x1e08) = puVar4;
            *(int *)(iVar10 + 0x1e0c) = iVar10 + iVar8 * 0x10 + 0x300;
            *(undefined4 *)(iVar10 + 0x1e20) = *(undefined4 *)(puVar4 + 1);
            *(undefined8 *)(iVar10 + 0x1e18) = *puVar4;
            break;
          }
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 5;
          piVar7 = piVar7 + 10;
        } while (iVar8 < *(int *)(iVar10 + 0x1e30));
      }
      if (*(int *)(iVar10 + 0x1e08) == 0) {
        iVar8 = 0;
        piVar7 = (int *)(iVar10 + 0x300);
        do {
          if (*(char *)(iVar10 + 0x1e54) == '\0') {
            if (*piVar7 == 0) {
              sVar1 = 0;
            }
            else {
              sVar1 = *(short *)(*piVar7 + 4);
            }
          }
          else if (piVar7[1] == 0) {
            sVar1 = 0;
          }
          else {
            sVar1 = *(short *)(piVar7[1] + 4);
          }
          if ((sVar1 != 0) && (piVar7[3] < piVar7[2])) {
            lVar3 = FUN_001ebf68(param_1,iVar8);
            *(int *)(iVar10 + 0x1e08) = (int)lVar3;
            if (lVar3 != 0) {
              *(int **)(iVar10 + 0x1e0c) = piVar7;
              if (*(char *)(iVar10 + 0x1e54) == '\0') {
                iVar8 = *piVar7;
              }
              else {
                iVar8 = piVar7[1];
              }
              iVar6 = 0;
              if (iVar8 != 0) {
                iVar6 = (int)*(short *)(iVar8 + 4);
              }
              iVar8 = *(int *)(iVar10 + 0x1e3c);
              *(int *)(iVar10 + 0x1e3c) = iVar8 + 1;
              if (*(char *)(iVar10 + 0x1e54) == '\0') {
                if ((int *)*piVar7 != (int *)0x0) {
                  iVar5 = *(int *)*piVar7;
                  goto LAB_001ebb2c;
                }
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                if ((int *)piVar7[1] != (int *)0x0) {
                  iVar5 = *(int *)piVar7[1];
LAB_001ebb2c:
                  uVar9 = *(undefined2 *)((iVar8 % iVar6) * 2 + iVar5);
                }
              }
              uVar2 = FUN_001ec840(param_1,*(undefined8 *)(iVar10 + 0x1e18),uVar9);
              *(undefined4 *)(iVar10 + 0x1e20) = uVar2;
              break;
            }
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 4;
        } while (iVar8 < 0xe);
        if (*(int *)(iVar10 + 0x1e08) == 0) {
          if (*(int *)(iVar10 + 0x1e24) == 2) {
            return;
          }
          *(undefined4 *)(iVar10 + 0x1e24) = 5;
          return;
        }
        uVar2 = *(undefined4 *)(iVar10 + 0x1e08);
      }
      else {
        uVar2 = *(undefined4 *)(iVar10 + 0x1e08);
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar10 + 0x1e08);
    }
    lVar3 = FUN_001ed218(uVar2,*(undefined8 *)(iVar10 + 0x1e18),*(undefined4 *)(iVar10 + 0x1e20),
                         *(undefined4 *)(iVar10 + 0x1e0c),*(undefined1 *)(iVar10 + 0x1e54));
    if (lVar3 == 0) {
      return;
    }
    if (*(char *)(*(int *)(iVar10 + 0x1e08) + 0x20) == '\0') {
      *(int *)(*(int *)(iVar10 + 0x1e0c) + 0xc) = *(int *)(*(int *)(iVar10 + 0x1e0c) + 0xc) + 1;
      iVar8 = *(int *)(iVar10 + 0x1e24);
    }
    else {
      FUN_001ed270();
      iVar8 = *(int *)(iVar10 + 0x1e24);
    }
    *(undefined4 *)(iVar10 + 0x1e08) = 0;
    if (iVar8 == 2) {
      return;
    }
    uVar2 = 5;
    break;
  case 3:
    uVar2 = 5;
    break;
  case 5:
    iVar8 = *(int *)(iVar10 + 0x1e38);
    if (iVar8 < *(int *)(iVar10 + 0x1e30)) {
      iVar6 = iVar8 * 0x28 + 0x80 + iVar10;
      do {
        iVar8 = iVar8 + 1;
        if (((*(int *)(iVar6 + 0x10) != 0xd) && (*(int *)(iVar6 + 0x14) == 3)) &&
           (*(char *)(iVar6 + 0x21) != *(char *)(iVar10 + 0x1e54))) {
          *(int *)(*(int *)(iVar6 + 0x18) + 0xc) = *(int *)(*(int *)(iVar6 + 0x18) + 0xc) + -1;
          FUN_001ed270();
          uVar2 = 4;
          goto LAB_001ebc68;
        }
        iVar6 = iVar6 + 0x28;
      } while (iVar8 < *(int *)(iVar10 + 0x1e30));
    }
    uVar2 = 4;
  }
LAB_001ebc68:
  *(undefined4 *)(iVar10 + 0x1e24) = uVar2;
LAB_001ebc70:
  return;
}


// ==== FUN_001ebc88 @ 001ebc88 ====

undefined4 FUN_001ebc88(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1e28)) {
    do {
      lVar1 = FUN_001ec560(iVar4);
      iVar2 = iVar2 + 1;
      if (lVar1 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 0x40;
    } while (iVar2 < *(int *)(param_1 + 0x1e28));
  }
  iVar4 = *(int *)(param_1 + 0x1e30);
  iVar2 = 0;
  if (0 < iVar4) {
    iVar3 = param_1 + 0x80;
    do {
      lVar1 = FUN_001ed270(iVar3);
      if (lVar1 == 0) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0x1e30);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < iVar4);
  }
  iVar2 = 0;
  if (0 < iVar4) {
    iVar4 = param_1 + 0x80;
    do {
      iVar2 = iVar2 + 1;
      FUN_001ed1c8(iVar4);
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < *(int *)(param_1 + 0x1e30));
  }
  FUN_00281c98(param_1 + 0x6e0);
  FUN_001ed478(param_1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x1e24) = 7;
  return 1;
}


// ==== FUN_001ebd88 @ 001ebd88 ====

void FUN_001ebd88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x1e28)) {
    do {
      iVar2 = iVar2 + 1;
      FUN_001ec690(iVar3);
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < *(int *)(param_1 + 0x1e28));
  }
  iVar3 = *(int *)(param_1 + 0x1e38);
  if (iVar3 < *(int *)(param_1 + 0x1e30)) {
    iVar2 = iVar3 * 0x28 + 0x80 + param_1;
    do {
      if (*(int *)(iVar2 + 0x10) == 0xd) {
        iVar1 = *(int *)(iVar2 + 0x14);
        if (iVar1 == 2) {
          *(undefined1 *)(iVar2 + 0x20) = 1;
          iVar1 = *(int *)(param_1 + 0x1e30);
        }
        else if (iVar1 < 3) {
          if (iVar1 == 1) {
LAB_001ebe58:
            FUN_001ed270(iVar2);
            iVar1 = *(int *)(param_1 + 0x1e30);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x1e30);
          }
        }
        else {
          if (iVar1 < 5) {
            *(int *)(*(int *)(iVar2 + 0x18) + 0xc) = *(int *)(*(int *)(iVar2 + 0x18) + 0xc) + -1;
            goto LAB_001ebe58;
          }
          iVar1 = *(int *)(param_1 + 0x1e30);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1e30);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < iVar1);
  }
  FUN_00282710(param_1 + 0x7b0);
  return;
}


// ==== FUN_001ebeb8 @ 001ebeb8 ====

int FUN_001ebeb8(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  lVar6 = 0xe;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x1e28)) {
    do {
      lVar2 = FUN_001ec5c8(iVar3);
      if (lVar2 < lVar6) {
        lVar6 = FUN_001ec5c8(iVar3);
        iVar1 = *(int *)(param_1 + 0x1e28);
        iVar4 = iVar3;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1e28);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar5 < iVar1);
  }
  lVar6 = FUN_001ec5c8(iVar4);
  if (param_2 <= lVar6) {
    iVar4 = 0;
  }
  return iVar4;
}


// ==== FUN_001ebf68 @ 001ebf68 ====

int FUN_001ebf68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1e38);
  if (iVar1 < *(int *)(param_1 + 0x1e30)) {
    iVar2 = iVar1 * 0x28 + 0x80 + param_1;
    do {
      iVar1 = iVar1 + 1;
      if ((*(int *)(iVar2 + 0x14) == 0) && (*(int *)(iVar2 + 0x10) == param_2)) {
        return iVar2;
      }
      iVar2 = iVar2 + 0x28;
    } while (iVar1 < *(int *)(param_1 + 0x1e30));
  }
  return 0;
}


// ==== FUN_001ebfc0 @ 001ebfc0 ====

void FUN_001ebfc0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x1e48) <= 0.0) {
    FUN_001e32b8(*(undefined4 *)(param_1 + 0x1e4c),
                 *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14));
    uVar1 = FUN_0012d0d0(DAT_003bd998,DAT_003bd99c,DAT_0040f4d0);
    *(undefined4 *)(param_1 + 0x1e48) = uVar1;
  }
  fVar2 = *(float *)(param_1 + 0x1e44) + DAT_003bd990;
  *(float *)(param_1 + 0x1e44) = fVar2;
  if (DAT_003bd994 < fVar2) {
    *(float *)(param_1 + 0x1e44) = DAT_003bd994;
  }
  return;
}


// ==== FUN_001ec060 @ 001ec060 ====

void FUN_001ec060(float param_1,float param_2,int param_3,undefined8 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  cVar1 = *(char *)(param_3 + 0x400);
  iVar2 = param_3;
  while( true ) {
    if (cVar1 == '\0') {
      param_1 = *(float *)(DAT_0040f4d0 + 0x20) + param_1;
      *(undefined1 *)(iVar2 + 0x400) = 1;
      *(int *)(iVar2 + 0x3e0) = (int)param_4;
      *(int *)(iVar2 + 0x3e4) = (int)((ulong)param_4 >> 0x20);
      *(undefined4 *)(iVar2 + 1000) = in_a1_udw;
      *(undefined4 *)(iVar2 + 0x3ec) = in_register_0000005c;
      *(undefined4 *)(iVar2 + 0x3f0) = param_5;
      *(undefined4 *)(iVar2 + 0x3f4) = param_6;
      *(float *)(iVar2 + 0x3f8) = param_1;
      *(float *)(iVar2 + 0x3fc) = param_1 + param_2;
      return;
    }
    if (param_3 + 0x300 <= iVar2 + 0x30) break;
    cVar1 = *(char *)(iVar2 + 0x430);
    iVar2 = iVar2 + 0x30;
  }
  return;
}


// ==== FUN_001ec0b8 @ 001ec0b8 ====

void FUN_001ec0b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  long lVar2;
  undefined8 in_a1_udw;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = in_a1_udw;
  auVar6._0_8_ = param_2;
  auVar6 = _por(in_zero_qw,auVar6);
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0x1e38);
  iVar1 = *(int *)(iVar4 + 0x1e30);
  while( true ) {
    iVar5 = 0;
    if (iVar1 <= iVar3) break;
    iVar5 = iVar4 + iVar3 * 0x28 + 0x80;
    if (*(int *)(iVar5 + 0x14) == 3) {
      if (*(int *)(iVar5 + 0x10) == 1) break;
      iVar1 = *(int *)(iVar4 + 0x1e30);
    }
    else {
      iVar1 = *(int *)(iVar4 + 0x1e30);
    }
    iVar3 = iVar3 + 1;
  }
  if ((iVar5 != 0) && (lVar2 = FUN_001ebeb8(param_1,1), lVar2 != 0)) {
    auVar6 = _por(in_zero_qw,auVar6);
    FUN_001ec600(lVar2,iVar5,auVar6._0_8_);
  }
  return;
}


// ==== FUN_001ec158 @ 001ec158 ====

void FUN_001ec158(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  if (param_2 != 6) {
    iVar1 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar5._8_4_ = in_a2_udw;
    auVar5._0_8_ = param_3;
    auVar5._12_4_ = in_register_0000006c;
    auVar5 = _lqc2(auVar5);
    auVar5 = _vsub(auVar5,auVar3);
    auVar5 = _vmul(auVar5,auVar5);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar4,auVar5);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar6 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar6);
    auVar5 = _qmfc2(auVar5._0_4_);
    iVar1 = FUN_001ecef8(param_1,param_2,DAT_003bd98c < auVar5._0_4_);
    iVar2 = (int)param_1;
    if ((*(char *)(iVar2 + 0x1e56) == '\0') || (*(int *)(iVar2 + 0x1de0) < iVar1)) {
      *(int *)(iVar2 + 0x1de0) = iVar1;
      *(undefined1 *)(iVar2 + 0x1e56) = 1;
      *(int *)(iVar2 + 0x1dd0) = (int)param_3;
      *(int *)(iVar2 + 0x1dd4) = (int)((ulong)param_3 >> 0x20);
      *(undefined4 *)(iVar2 + 0x1dd8) = in_a2_udw;
      *(undefined4 *)(iVar2 + 0x1ddc) = in_register_0000006c;
    }
  }
  return;
}


// ==== FUN_001ec248 @ 001ec248 ====

void FUN_001ec248(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 in_a2_udw;
  undefined4 in_register_0000006c;
  int iVar2;
  undefined1 in_vf0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  if (param_2 != 6) {
    iVar1 = FUN_00280680(DAT_0040f510 + 0xcb7c,0);
    auVar3 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x30));
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar5._8_4_ = in_a2_udw;
    auVar5._0_8_ = param_3;
    auVar5._12_4_ = in_register_0000006c;
    auVar5 = _lqc2(auVar5);
    auVar5 = _vsub(auVar5,auVar3);
    auVar5 = _vmul(auVar5,auVar5);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(auVar4,auVar5);
    _vnop();
    _vnop();
    _vnop();
    _vsqrt(auVar5);
    auVar5 = _vaddbc(in_vf0,in_vf0);
    uVar6 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar6);
    auVar5 = _qmfc2(auVar5._0_4_);
    iVar1 = FUN_001ecef8(param_1,param_2,DAT_003bd98c < auVar5._0_4_);
    iVar2 = (int)param_1;
    if ((*(char *)(iVar2 + 0x1e57) == '\0') || (*(int *)(iVar2 + 0x1de4) < iVar1)) {
      *(int *)(iVar2 + 0x1de4) = iVar1;
      *(undefined1 *)(iVar2 + 0x1e57) = 1;
    }
  }
  return;
}


// ==== FUN_001ec330 @ 001ec330 ====

void FUN_001ec330(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_e0 [80];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_35;
  
  if (*(int *)(param_2 + 0x1dec) != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x1dec) + 0x18);
    *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffd;
    uStack_90 = *(undefined4 *)(param_2 + 0x1dec);
    uStack_3c = 0x80084c;
    uStack_38 = 8;
    uStack_50 = DAT_003bd9b8;
    uStack_4c = DAT_003bd9bc;
    uStack_44 = DAT_003bd9c0;
    uStack_35 = 1;
    uStack_80 = 0;
    uStack_58 = DAT_003bd9b8;
    uStack_54 = DAT_003bd9b8;
    uStack_48 = DAT_003bd9c0;
    uStack_8c = param_1;
    piVar2 = (int *)FUN_00281d50(param_2 + 0x6e0);
    (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10),auStack_e0);
    FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x684bbb0484a09400,1);
    *(undefined1 *)(param_2 + 0x1e55) = 1;
    fVar4 = *(float *)(DAT_0040f4d0 + 0x20);
    fVar3 = (float)FUN_00281fa0(*(undefined4 *)(param_2 + 0x1dec));
    *(float *)(param_2 + 0x1e50) = fVar4 + fVar3;
  }
  return;
}


// ==== FUN_001ec458 @ 001ec458 ====

void FUN_001ec458(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


// ==== FUN_001ec470 @ 001ec470 ====

undefined4
FUN_001ec470(int param_1,undefined8 param_2,undefined4 *param_3,long param_4,undefined4 *param_5,
            long param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_001d9700(*(undefined4 *)(DAT_0040f510 + 0xcbdc));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  iVar2 = 0;
  *(int *)(param_1 + 0x2c) = (int)param_4;
  if (0 < param_4) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    do {
      uVar1 = *param_3;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  *(int *)(param_1 + 0x30) = (int)param_6;
  iVar2 = 0;
  if (0 < param_6) {
    puVar3 = (undefined4 *)(param_1 + 0x14);
    do {
      uVar1 = *param_5;
      iVar2 = iVar2 + 1;
      param_5 = param_5 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 1;
}


// ==== FUN_001ec560 @ 001ec560 ====

undefined4 FUN_001ec560(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar2 = FUN_001dd3e0();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_001d9760(*(undefined4 *)(DAT_0040f510 + 0xcbdc),*(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ==== FUN_001ec5c8 @ 001ec5c8 ====

int FUN_001ec5c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x10), 0 < iVar1)) {
    iVar2 = iVar1;
  }
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x10), iVar2 < iVar1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ==== FUN_001ec600 @ 001ec600 ====

undefined4 FUN_001ec600(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 in_zero_qw [16];
  undefined1 in_a2_qw [16];
  undefined1 auVar2 [16];
  
  auVar2 = _por(in_zero_qw,in_a2_qw);
  iVar1 = param_1[10];
  if (iVar1 < 4) {
    if (1 < iVar1) goto LAB_001ec664;
    if (iVar1 != 1) {
      return 1;
    }
  }
  else if (iVar1 != 4) {
    return 1;
  }
  FUN_001dd6c0(param_1[7]);
  param_1[10] = 2;
LAB_001ec664:
  *param_1 = auVar2._0_4_;
  param_1[1] = auVar2._4_4_;
  param_1[2] = auVar2._8_4_;
  param_1[3] = auVar2._12_4_;
  param_1[9] = param_2;
  *(undefined4 *)(param_2 + 0x14) = 4;
  return 1;
}


// ==== FUN_001ec690 @ 001ec690 ====

void FUN_001ec690(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 4) {
    if (1 < iVar1) {
      return;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else if (iVar1 != 4) {
    return;
  }
  FUN_001dd6c0(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x28) = 2;
  return;
}


// ==== FUN_001ec6f8 @ 001ec6f8 ====

void FUN_001ec6f8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_001092f8();
  *(undefined4 *)(param_2 + 0x1e10) = uVar2;
  iVar1 = *(int *)(param_2 + 0x1e10);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + iVar1;
  if (0 < (long)*(short *)(iVar1 + 0x16)) {
    iVar4 = 0x10000;
    do {
      iVar3 = iVar4 >> 0x10;
      iVar4 = iVar4 + 0x10000;
    } while ((long)iVar3 < (long)*(short *)(iVar1 + 0x16));
  }
  *(undefined8 *)(param_2 + 0x1e18) = **(undefined8 **)(param_2 + 0x1e10);
  return;
}


// ==== FUN_001ec768 @ 001ec768 ====

undefined8 FUN_001ec768(int param_1)

{
  return **(undefined8 **)(param_1 + 0x1e10);
}


// ==== FUN_001ec778 @ 001ec778 ====

undefined8 FUN_001ec778(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
switchD_001ec7e8_caseD_1:
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_001ec8d8(param_1,param_2,param_3);
    if (lVar2 != 0) {
      switch(*(undefined4 *)((int)lVar2 + 0x14)) {
      case 0:
      case 4:
      case 5:
      case 7:
        break;
      case 1:
      case 2:
      case 3:
      case 6:
        goto switchD_001ec7e8_caseD_1;
      }
    }
    uVar1 = FUN_001ebf68(param_1,0xd);
    uVar3 = FUN_001ec840(param_1,param_2,param_3);
    FUN_001ed2c8(uVar1,param_2,uVar3);
  }
  return uVar1;
}


// ==== FUN_001ec840 @ 001ec840 ====

int FUN_001ec840(int param_1,undefined8 param_2,int param_3)

{
  return *(int *)(*(int *)(param_1 + 0x1e10) + 0x18) + param_3 * 8;
}


// ==== FUN_001ec858 @ 001ec858 ====

void FUN_001ec858(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_3 == -1) goto switchD_001ec89c_caseD_0;
  lVar1 = FUN_001ec8d8();
  if (lVar1 == 0) {
    return;
  }
  iVar2 = (int)lVar1;
  switch(*(undefined4 *)(iVar2 + 0x14)) {
  case 2:
    *(undefined1 *)(iVar2 + 0x20) = 1;
  case 0:
  case 4:
  case 5:
  case 6:
  case 7:
switchD_001ec89c_caseD_0:
    break;
  case 3:
    *(int *)(*(int *)(iVar2 + 0x18) + 0xc) = *(int *)(*(int *)(iVar2 + 0x18) + 0xc) + -1;
  case 1:
    FUN_001ed270(lVar1);
    break;
  default:
    break;
  }
  return;
}


// ==== FUN_001ec8d8 @ 001ec8d8 ====

long * FUN_001ec8d8(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = FUN_001ec840();
  iVar2 = *(int *)(param_1 + 0x1e38);
  if (iVar2 < *(int *)(param_1 + 0x1e30)) {
    plVar3 = (long *)(iVar2 * 0x28 + 0x80 + param_1);
    do {
      if ((((int)plVar3[2] == 0xd) && ((int)plVar3[1] == iVar1)) && (*plVar3 == param_2)) {
        return plVar3;
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 5;
    } while (iVar2 < *(int *)(param_1 + 0x1e30));
  }
  return (long *)0x0;
}


// ==== FUN_001ec970 @ 001ec970 ====

undefined8 FUN_001ec970(undefined8 param_1)

{
  undefined1 in_zero_qw [16];
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_a3_qw [16];
  undefined1 auVar4 [16];
  
  auVar4 = _por(in_zero_qw,in_a3_qw);
  lVar1 = FUN_001ec8d8();
  if (((lVar1 == 0) || (*(int *)((int)lVar1 + 0x14) != 3)) ||
     (lVar2 = FUN_001ebeb8(param_1,*(undefined4 *)((int)lVar1 + 0x10)), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    auVar4 = _por(in_zero_qw,auVar4);
    uVar3 = FUN_001ec600(lVar2,lVar1,auVar4._0_8_);
  }
  return uVar3;
}


// ==== FUN_001ec9f0 @ 001ec9f0 ====

void FUN_001ec9f0(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x1e40) = 0;
    if (0 < *(int *)(param_1 + 0x1e2c)) {
      piVar2 = (int *)(param_1 + 0x1df0);
      iVar1 = *piVar2;
      while( true ) {
        iVar3 = iVar3 + 1;
        *(undefined1 *)(iVar1 + 0x35) = 0;
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
        FUN_00283b38(*(undefined4 *)(param_1 + 0x1e40),iVar1);
        if (*(int *)(param_1 + 0x1e2c) <= iVar3) break;
        iVar1 = *piVar2;
      }
    }
  }
  else {
    iVar3 = 0;
    uVar4 = FUN_001ed820(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c));
    *(undefined4 *)(param_1 + 0x1e40) = uVar4;
    if (0 < *(int *)(param_1 + 0x1e2c)) {
      piVar2 = (int *)(param_1 + 0x1df0);
      do {
        iVar3 = iVar3 + 1;
        FUN_00283b38(*(undefined4 *)(param_1 + 0x1e40),*piVar2);
        *(undefined1 *)(*piVar2 + 0x35) = 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1e2c));
    }
  }
  return;
}


// ==== FUN_001ecad8 @ 001ecad8 ====

void FUN_001ecad8(int param_1)

{
  FUN_001ed4f0(param_1 + 0x7b0);
  return;
}


// ==== FUN_001ecaf8 @ 001ecaf8 ====

void FUN_001ecaf8(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = 0;
  FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x684bbb0484a09400,0);
  FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x5fb8cab604a05e40,0);
  iVar4 = param_1;
  if (*(int *)(param_1 + 0x1e28) < 1) {
    cVar1 = *(char *)(param_1 + 0x1e55);
  }
  else {
    do {
      if (*(int *)(iVar4 + 0x28) == 1) {
        fVar6 = (float)FUN_001dd748(*(undefined4 *)(iVar4 + 0x1c));
        lVar3 = FUN_001ec5c8(iVar4);
        if (lVar3 < 0xd) {
          if (lVar3 < 2) {
            iVar2 = *(int *)(param_1 + 0x1e28);
          }
          else {
            if (DAT_003bd980 <= fVar6) goto LAB_001ecca0;
            FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x684bbb0484a09400,1);
            iVar2 = *(int *)(param_1 + 0x1e28);
          }
        }
        else if (lVar3 == 0xd) {
          if (fVar6 < DAT_003bd984) {
            FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x5fb8cab604a05e40,1);
          }
LAB_001ecca0:
          iVar2 = *(int *)(param_1 + 0x1e28);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x1e28);
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x1e28);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar5 < iVar2);
    cVar1 = *(char *)(param_1 + 0x1e55);
  }
  if ((cVar1 == '\x01') &&
     (FUN_001ea580(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 8),0x684bbb0484a09400,1),
     *(float *)(param_1 + 0x1e50) < *(float *)(DAT_0040f4d0 + 0x20))) {
    *(undefined1 *)(param_1 + 0x1e55) = 0;
  }
  return;
}


// ==== FUN_001ecd50 @ 001ecd50 ====

void FUN_001ecd50(int param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x1e56) == '\0') goto LAB_001ececc;
  if (*(char *)(param_1 + 0x1e57) == '\x01') {
    bVar2 = true;
    if (*(int *)(param_1 + 0x1de4) <= *(int *)(param_1 + 0x1de0)) {
      iVar5 = *(int *)(param_1 + 0x1e30);
      goto LAB_001ecda4;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1e30);
LAB_001ecda4:
    bVar2 = true;
    iVar6 = *(int *)(param_1 + 0x1e38);
    while ((iVar4 = 0, iVar6 < iVar5 &&
           ((iVar4 = param_1 + iVar6 * 0x28 + 0x80, *(int *)(iVar4 + 0x14) != 3 ||
            (*(int *)(iVar4 + 0x10) != *(int *)(param_1 + 0x1de0)))))) {
      iVar6 = iVar6 + 1;
    }
    if (iVar4 == 0) {
      iVar6 = 0;
      iVar5 = param_1;
      if (0 < *(int *)(param_1 + 0x1e28)) {
        do {
          if (*(int *)(iVar5 + 0x24) == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = false;
            if (*(int *)(*(int *)(iVar5 + 0x24) + 0x14) == 4) {
              bVar1 = true;
            }
          }
          if (bVar1) {
LAB_001ecea0:
            bVar2 = false;
            iVar4 = *(int *)(param_1 + 0x1e28);
          }
          else if (*(int *)(iVar5 + 0x28) == 1) {
            fVar7 = (float)FUN_001dd748(*(undefined4 *)(iVar5 + 0x1c));
            if (fVar7 <= 0.15) goto LAB_001ecea0;
            iVar4 = *(int *)(param_1 + 0x1e28);
          }
          else {
            iVar4 = *(int *)(param_1 + 0x1e28);
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar6 < iVar4);
      }
    }
    else {
      lVar3 = FUN_001ebeb8(param_1,*(undefined4 *)(param_1 + 0x1de0));
      if (lVar3 != 0) {
        bVar2 = false;
        FUN_001ec600(lVar3,iVar4,*(undefined8 *)(param_1 + 0x1dd0));
      }
    }
  }
  if (bVar2) {
    FUN_001ec330(*(undefined4 *)(param_1 + 0x1e4c),param_1);
    *(undefined1 *)(param_1 + 0x1e56) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1e56) = 0;
  }
LAB_001ececc:
  *(undefined1 *)(param_1 + 0x1e57) = 0;
  return;
}


// ==== FUN_001ecef8 @ 001ecef8 ====

undefined8 FUN_001ecef8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x001ecf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_003f89d0)[(int)param_2])();
    return uVar1;
  }
  return 0xe;
}


// ==== FUN_001ecf80 @ 001ecf80 ====

void FUN_001ecf80(undefined8 param_1,int param_2,int param_3)

{
  undefined1 in_zero_qw [16];
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x18);
  if (lVar5 == 0) {
    return;
  }
  iVar2 = FUN_00290ac0(lVar5,0x28);
  if (iVar2 == 0x26) {
    uVar3 = FUN_002904f0(lVar5,0x28);
    iVar2 = FUN_00290ac0(uVar3,0x28);
    if (iVar2 == 0x26) {
      cVar1 = FUN_001ed068(param_1,lVar5);
      goto LAB_001ed014;
    }
  }
  iVar2 = FUN_001b23c0(DAT_0040f4d8,lVar5);
  cVar1 = *(char *)(iVar2 + 0x270);
LAB_001ed014:
  if ('\0' < cVar1) {
    auVar4 = _por(in_zero_qw,*(undefined1 (*) [16])(param_2 + 0xa0));
    FUN_001ec248(param_1,cVar1,auVar4._0_8_);
  }
  return;
}


// ==== FUN_001ed068 @ 001ed068 ====

undefined4 FUN_001ed068(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = 0;
  plVar1 = &DAT_003f9498;
  do {
    iVar2 = iVar2 + 1;
    if (*plVar1 == param_2) {
      return (int)plVar1[1];
    }
    plVar1 = plVar1 + 2;
  } while (iVar2 < 3);
  return 0;
}


// ==== FUN_001ed0a0 @ 001ed0a0 ====

void FUN_001ed0a0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 != 0) && (iVar1 = *(int *)((int)param_2 + 0x110), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) != -1)) {
    uVar2 = FUN_001ec768();
    FUN_001ec970(param_1,uVar2,*(undefined4 *)(iVar1 + 0x18),DAT_004432a0);
  }
  return;
}


// ==== FUN_001ed108 @ 001ed108 ====

undefined4 FUN_001ed108(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
    if (iVar1 < 0xd) {
      if (1 < iVar1) {
        return 8;
      }
      if (iVar1 == 1) {
        return 0xf;
      }
    }
    else if (iVar1 == 0xd) {
      return 0xb;
    }
  }
  return 0;
}


// ==== FUN_001ed170 @ 001ed170 ====

void FUN_001ed170(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ==== FUN_001ed1c8 @ 001ed1c8 ====

void FUN_001ed1c8(int param_1)

{
  FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x14) = 7;
  *(undefined4 *)(param_1 + 0x10) = 0xe;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ==== FUN_001ed218 @ 001ed218 ====

bool FUN_001ed218(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x21) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  lVar1 = FUN_001d7c20(*(undefined4 *)(param_1 + 0xc),param_2,param_3,0,9,1);
  uVar2 = 3;
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return lVar1 != 0;
}


// ==== FUN_001ed270 @ 001ed270 ====

bool FUN_001ed270(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_001d7cc0(*(undefined4 *)((int)param_1 + 0xc));
  if (lVar1 == 0) {
    *(undefined4 *)((int)param_1 + 0x14) = 5;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return lVar1 != 0;
}


// ==== FUN_001ed2c8 @ 001ed2c8 ====

void FUN_001ed2c8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)param_1 + 0x14) = 1;
  *param_1 = param_2;
  *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) + 1;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}


// ==== FUN_001ed2e8 @ 001ed2e8 ====

undefined4 FUN_001ed2e8(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 3:
    return DAT_003bd9dc;
  case 4:
    return DAT_003bd9e0;
  case 5:
    return DAT_003bd9e4;
  case 6:
    return DAT_003bd9f0;
  case 7:
    return DAT_003bd9e8;
  case 8:
    return DAT_003bd9ec;
  case 9:
    return DAT_003bd9f4;
  case 10:
    return DAT_003bd9f8;
  case 0xb:
    return DAT_003bd9fc;
  case 0xc:
    return DAT_003bda00;
  case 0xd:
    return DAT_003bda04;
  default:
    return 0;
  }
}


// ==== FUN_001ed3a0 @ 001ed3a0 ====

void FUN_001ed3a0(void)

{
  FUN_00282218();
  return;
}


// ==== FUN_001ed3c0 @ 001ed3c0 ====

undefined4 FUN_001ed3c0(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_00282290(param_1,param_2,param_3);
  return 1;
}


// ==== FUN_001ed3e0 @ 001ed3e0 ====

void FUN_001ed3e0(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  
  lVar8 = 0;
  if (0 < *(short *)(param_1 + 0x400)) {
    piVar7 = param_1 + 0x489;
    puVar6 = param_1;
    do {
      if (0.0 <= (float)puVar6[5]) {
        if (piVar7[-1] == 0) {
          lVar2 = (long)*(short *)(param_1 + 0x400);
        }
        else if (piVar7[-1] == 1) {
          iVar1 = *piVar7;
          uVar3 = *(undefined4 *)(iVar1 + 0xa4);
          uVar4 = *(undefined4 *)(iVar1 + 0xa8);
          uVar5 = *(undefined4 *)(iVar1 + 0xac);
          *puVar6 = *(undefined4 *)(iVar1 + 0xa0);
          puVar6[1] = uVar3;
          puVar6[2] = uVar4;
          puVar6[3] = uVar5;
          lVar2 = (long)*(short *)(param_1 + 0x400);
        }
        else {
          lVar2 = (long)*(short *)(param_1 + 0x400);
        }
      }
      else {
        lVar2 = (long)*(short *)(param_1 + 0x400);
      }
      lVar8 = (long)((int)lVar8 + 1);
      piVar7 = piVar7 + 2;
      puVar6 = puVar6 + 8;
    } while (lVar8 < lVar2);
  }
  FUN_002822c8();
  return;
}


// ==== FUN_001ed478 @ 001ed478 ====

undefined4 FUN_001ed478(void)

{
  FUN_00282628();
  return 1;
}


// ==== FUN_001ed4a0 @ 001ed4a0 ====

void FUN_001ed4a0(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00282678();
  param_1 = param_1 + iVar1 * 8;
  *(undefined4 *)(param_1 + 0x1220) = param_3;
  *(undefined4 *)(param_1 + 0x1224) = param_4;
  return;
}


// ==== FUN_001ed4f0 @ 001ed4f0 ====

void FUN_001ed4f0(int param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  int *piVar4;
  
  lVar2 = 0;
  if (0 < *(short *)(param_1 + 0x1000)) {
    piVar4 = (int *)(param_1 + 0x1220);
    pfVar3 = (float *)(param_1 + 0x14);
    do {
      if (0.0 <= *pfVar3) {
        if (*piVar4 == 1) {
          *(undefined4 *)((((int)lVar2 << 0x10) >> 0xb) + param_1 + 0x14) = 0xbf800000;
          lVar1 = (long)*(short *)(param_1 + 0x1000);
        }
        else {
          lVar1 = (long)*(short *)(param_1 + 0x1000);
        }
      }
      else {
        lVar1 = (long)*(short *)(param_1 + 0x1000);
      }
      lVar2 = (long)((int)lVar2 + 1);
      piVar4 = piVar4 + 2;
      pfVar3 = pfVar3 + 8;
    } while (lVar2 < lVar1);
  }
  return;
}


// ==== FUN_001ed578 @ 001ed578 ====

void FUN_001ed578(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00107cf8(0x54);
  *param_1 = iVar1;
  *(undefined **)(iVar1 + 0x50) = &DAT_003e0840;
  (*(code *)PTR_FUN_003e084c)(iVar1 + DAT_003e0848);
  iVar1 = FUN_00107cf8(0x54);
  param_1[1] = iVar1;
  *(undefined **)(iVar1 + 0x50) = &DAT_003e0888;
  (*(code *)PTR_FUN_003e0894)(iVar1 + DAT_003e0890);
  iVar1 = FUN_00107cf8(0x58);
  param_1[2] = iVar1;
  *(undefined **)(iVar1 + 0x50) = &DAT_003e07f8;
  (*(code *)PTR_FUN_003e0804)(iVar1 + DAT_003e0800);
  iVar1 = FUN_00107cf8(0x54);
  param_1[3] = iVar1;
  *(undefined **)(iVar1 + 0x50) = &DAT_003e07b0;
  (*(code *)PTR_FUN_003e07bc)(iVar1 + DAT_003e07b8);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  return;
}


// ==== FUN_001ed640 @ 001ed640 ====

undefined4 FUN_001ed640(void)

{
  return 1;
}


// ==== FUN_001ed648 @ 001ed648 ====

void FUN_001ed648(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x50) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x50) + 0x18));
    piVar2 = *(int **)((int)param_1 + 0x10);
    if ((*piVar2 == 0) && (piVar2[6] != 0)) {
      FUN_001ed718(param_1,0,1);
    }
  }
  return;
}


// ==== FUN_001ed6b0 @ 001ed6b0 ====

undefined4 FUN_001ed6b0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x50) + 0x24))(iVar1 + *(short *)(*(int *)(iVar1 + 0x50) + 0x20));
    iVar1 = *param_1;
    param_1[4] = iVar1;
    (**(code **)(*(int *)(iVar1 + 0x50) + 0x14))
              (0,iVar1 + *(short *)(*(int *)(iVar1 + 0x50) + 0x10),0);
  }
  return 1;
}


// ==== FUN_001ed718 @ 001ed718 ====

void FUN_001ed718(int param_1,int param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + param_2 * 4);
  if (piVar2 == piVar1) {
    if (*(byte *)(param_1 + 0x14) == param_3) {
      return;
    }
    if (param_3 == 0) {
      (**(code **)(piVar2[0x14] + 0x2c))((int)piVar2 + (int)*(short *)(piVar2[0x14] + 0x28));
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else if ((piVar1 == (int *)0x0) || (piVar1[6] <= param_2)) {
    if (param_3 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    if (*piVar1 != 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *(char *)(param_1 + 0x14) = (char)param_3;
  if (iVar3 == 0) {
    uVar4 = 0x46bb8000;
    *(int **)(param_1 + 0x10) = piVar2;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 4);
    (**(code **)(*(int *)(iVar3 + 0x50) + 0x24))(iVar3 + *(short *)(*(int *)(iVar3 + 0x50) + 0x20));
    *(int **)(param_1 + 0x10) = piVar2;
  }
  (**(code **)(piVar2[0x14] + 0x14))(uVar4,(int)piVar2 + (int)*(short *)(piVar2[0x14] + 0x10),1);
  return;
}


// ==== FUN_001ed820 @ 001ed820 ====

undefined4 FUN_001ed820(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30);
}


// ==== FUN_001ed830 @ 001ed830 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ed830(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_003f8a84;
  param_1[8] = 0x46bb8000;
  param_1[9] = 0x44c80000;
  param_1[0xb] = 0x3e99999a;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3dcccccd;
  param_1[0xe] = uVar1;
  param_1[0xf] = 0x3f000000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *param_1 = 0;
  param_1[6] = 1;
  param_1[7] = 1;
  param_1[10] = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x4b) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  return;
}


// ==== FUN_001ed8d0 @ 001ed8d0 ====

void FUN_001ed8d0(undefined4 *param_1)

{
  param_1[6] = 2;
  param_1[8] = 0x46bb8000;
  param_1[9] = 0x43c80000;
  param_1[0xd] = 0x3f000000;
  param_1[0xe] = 0x40400000;
  param_1[0xf] = 0x3f400000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x15] = 0x3f800000;
  *param_1 = 0;
  param_1[7] = 1;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x4b) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  return;
}


// ==== FUN_001ed968 @ 001ed968 ====

void FUN_001ed968(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0xc] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  return;
}


// ==== FUN_001ed9c8 @ 001ed9c8 ====

/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/DSP.cfg"
     "End Frequency"
     "StartingQ"
     "FinalQ"
     "Attack Time"
     "Hold Time"
     "Release Time" */

void FUN_001ed9c8(int param_1,undefined8 param_2,long param_3)

{
  FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x20,0x3f8a88,param_2,
               PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x24,0x3f8a98,param_2,
               PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x28,0x3f8aa8,param_2,
               PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x2c,0x3f8ab8,param_2,
               PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x34,0x3f8ac0,param_2,
               PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  if (param_3 != 0) {
    FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x38,0x3f8ad0,param_2,
                 PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  }
  FUN_0027b950(0,0,DAT_003c09e8 + 4,param_1 + 0x3c,0x3f8ae0,param_2,
               PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}


// ==== FUN_001edb80 @ 001edb80 ====

undefined4 FUN_001edb80(int param_1)

{
  FUN_001e1690(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x46));
  FUN_001e2c68(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x47));
  FUN_001d7198(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x44));
  FUN_001dc498(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x45));
  FUN_001ec9f0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x4a));
  FUN_001e4260(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),
               *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x48));
  FUN_001e6208(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),*(undefined4 *)(param_1 + 0x18),
               *(undefined1 *)(param_1 + 0x49));
  return 1;
}


// ==== FUN_001edc80 @ 001edc80 ====

undefined4 FUN_001edc80(int param_1)

{
  FUN_001e1690(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x10),
               *(undefined4 *)(param_1 + 0x18),0);
  FUN_001e2c68(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x14),
               *(undefined4 *)(param_1 + 0x18),0);
  FUN_001d7198(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc),
               *(undefined4 *)(param_1 + 0x18),0);
  FUN_001dc498(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x20),
               *(undefined4 *)(param_1 + 0x18),0);
  FUN_001ec9f0(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x24),
               *(undefined4 *)(param_1 + 0x18),0);
  FUN_001e4260(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x1c),
               *(undefined4 *)(param_1 + 0x18),0);
  FUN_001e6208(*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 4),*(undefined4 *)(param_1 + 0x18),
               0);
  return 1;
}


// ==== FUN_001edd80 @ 001edd80 ====

void FUN_001edd80(undefined4 *param_1)

{
  float fVar1;
  
  *param_1 = 3;
  fVar1 = *(float *)(DAT_0040f4d0 + 0x20);
  param_1[2] = param_1[9];
  param_1[4] = (float)param_1[8] / (float)param_1[9];
  param_1[3] = fVar1 + (float)param_1[0xf];
  return;
}


// ==== FUN_001eddb8 @ 001eddb8 ====

void FUN_001eddb8(undefined4 *param_1)

{
  *param_1 = 2;
  param_1[3] = *(float *)(DAT_0040f4d0 + 0x20) + (float)param_1[0xe];
  return;
}


// ==== FUN_001edde0 @ 001edde0 ====

/* Strings referenciadas:
     "Destruction" */

undefined4 FUN_001edde0(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = (undefined4 *)param_2;
  if (*(char *)((int)puVar1 + 0x4d) == '\0') {
    FUN_001ed9c8(param_2,PTR_s_Destruction_003bda14,0);
  }
  if (param_3 == 0) {
    puVar1[2] = puVar1[8];
  }
  else {
    puVar1[2] = param_1;
  }
  *puVar1 = 1;
  fVar2 = *(float *)(DAT_0040f4d0 + 0x20);
  puVar1[4] = (float)puVar1[9] / (float)puVar1[2];
  puVar1[3] = fVar2 + (float)puVar1[0xd];
  FUN_001edb80(param_1,param_2,param_3);
  FUN_001efe70(param_2,1);
  return 1;
}


// ==== FUN_001ede98 @ 001ede98 ====

void FUN_001ede98(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = (int *)param_1;
  iVar1 = *piVar2;
  if (iVar1 == 1) {
    fVar3 = 1.0 - ((float)piVar2[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)piVar2[0xd];
    piVar2[5] = (int)fVar3;
    fVar3 = (float)FUN_0029e688(piVar2[4],
                                (int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000
                               );
    piVar2[1] = (int)((float)piVar2[2] * fVar3);
    FUN_00286120((float)piVar2[2] * fVar3,piVar2[10],*(undefined4 *)(DAT_0040f510 + 0xcbe0));
    FUN_001d7238(piVar2[1],piVar2[10],piVar2[0xc],
                 *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
    if ((float)piVar2[5] < 1.0) {
      return;
    }
    FUN_001eddb8(param_1);
  }
  else {
    if (iVar1 < 2) {
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      goto LAB_001ee004;
    }
  }
  piVar2[5] = (int)(1.0 - ((float)piVar2[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)piVar2[0xe])
  ;
  FUN_001d7238(piVar2[1],piVar2[10],piVar2[0xc],
               *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  if ((float)piVar2[5] < 1.0) {
    return;
  }
  (**(code **)(piVar2[0x14] + 0x2c))((int)piVar2 + (int)*(short *)(piVar2[0x14] + 0x28));
LAB_001ee004:
  fVar3 = 1.0 - ((float)piVar2[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)piVar2[0xf];
  piVar2[5] = (int)fVar3;
  fVar3 = (float)FUN_0029e688(piVar2[4],
                              (int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
  piVar2[1] = (int)((float)piVar2[2] * fVar3);
  FUN_00286120((float)piVar2[2] * fVar3,piVar2[10],*(undefined4 *)(DAT_0040f510 + 0xcbe0));
  FUN_001d7238(piVar2[1],piVar2[10],piVar2[0xc],
               *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  if (1.0 <= (float)piVar2[5]) {
    *piVar2 = 0;
  }
  return;
}


// ==== FUN_001ee0b0 @ 001ee0b0 ====

undefined4 FUN_001ee0b0(undefined8 param_1)

{
  *(undefined4 *)param_1 = 0;
  FUN_001edb80();
  FUN_001efe70(param_1,0);
  FUN_001d7258(0x3f800000,*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  FUN_002860d0(0x3f800000,*(undefined4 *)(DAT_0040f510 + 0xcbe0));
  ((undefined4 *)param_1)[1] = 0x46bb8000;
  return 1;
}


// ==== FUN_001ee158 @ 001ee158 ====

/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/DSP.cfg"
     "Tinnitus"
     "Whistle Gain" */

undefined4 FUN_001ee158(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = (undefined4 *)param_2;
  if (*(char *)((int)puVar1 + 0x4d) == '\0') {
    FUN_0027b950(0,0,DAT_003c09e8 + 4,0x3bda0c,0x3f8af0,PTR_s_Tinnitus_003bda10,
                 PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
    FUN_001ed9c8(param_2,PTR_s_Tinnitus_003bda10,1);
  }
  if (param_3 == 0) {
    puVar1[2] = puVar1[8];
  }
  else {
    puVar1[2] = param_1;
  }
  *puVar1 = 1;
  fVar2 = *(float *)(DAT_0040f4d0 + 0x20);
  puVar1[4] = (float)puVar1[9] / (float)puVar1[2];
  puVar1[3] = fVar2 + (float)puVar1[0xd];
  (**(code **)(puVar1[0x14] + 0x34))((int)puVar1 + (int)*(short *)(puVar1[0x14] + 0x30),0);
  FUN_001edb80(param_1,param_2,param_3);
  FUN_001efe70(param_2,1);
  return 1;
}


// ==== FUN_001ee298 @ 001ee298 ====

void FUN_001ee298(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = (int *)param_1;
  iVar1 = *piVar2;
  if (iVar1 == 1) {
    fVar3 = 1.0 - ((float)piVar2[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)piVar2[0xd];
    piVar2[5] = (int)fVar3;
    fVar3 = (float)FUN_0029e688(piVar2[4],
                                (int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000
                               );
    piVar2[1] = (int)((float)piVar2[2] * fVar3);
    FUN_00286120((float)piVar2[2] * fVar3,piVar2[10],*(undefined4 *)(DAT_0040f510 + 0xcbe0));
    FUN_001d7238(piVar2[1],piVar2[10],piVar2[0xc],
                 *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
    FUN_001f07b8((float)piVar2[5] * (float)piVar2[0x15] * DAT_003bda0c,
                 *(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc) + 0x1be0));
    if ((float)piVar2[5] < 1.0) {
      return;
    }
    FUN_001eddb8(param_1);
  }
  else {
    if (iVar1 < 2) {
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      goto LAB_001ee45c;
    }
  }
  piVar2[5] = (int)(1.0 - ((float)piVar2[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)piVar2[0xe])
  ;
  FUN_001d7238(piVar2[1],piVar2[10],piVar2[0xc],
               *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  FUN_001f07b8((float)piVar2[0x15] * DAT_003bda0c,
               *(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc) + 0x1be0));
  if ((float)piVar2[5] < 1.0) {
    return;
  }
  (**(code **)(piVar2[0x14] + 0x2c))((int)piVar2 + (int)*(short *)(piVar2[0x14] + 0x28));
LAB_001ee45c:
  fVar3 = 1.0 - ((float)piVar2[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)piVar2[0xf];
  piVar2[5] = (int)fVar3;
  fVar3 = (float)FUN_0029e688(piVar2[4],
                              (int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
  piVar2[1] = (int)((float)piVar2[2] * fVar3);
  FUN_00286120((float)piVar2[2] * fVar3,piVar2[10],*(undefined4 *)(DAT_0040f510 + 0xcbe0));
  FUN_001d7238(piVar2[1],piVar2[10],piVar2[0xc],
               *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
  FUN_001f07b8((1.0 - (float)piVar2[5]) * (float)piVar2[0x15] * DAT_003bda0c,
               *(undefined4 *)(*(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc) + 0x1be0));
  if (1.0 <= (float)piVar2[5]) {
    *piVar2 = 0;
  }
  return;
}


// ==== FUN_001ee540 @ 001ee540 ====

void FUN_001ee540(undefined4 *param_1)

{
  param_1[6] = 3;
  param_1[8] = 0x46bb8000;
  param_1[9] = 0x43480000;
  param_1[10] = 0x3f99999a;
  param_1[0xb] = 0x40000000;
  param_1[0xc] = 0x3f800000;
  param_1[0xf] = 0x3f400000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x10] = 0x3eaaaaab;
  *param_1 = 0;
  param_1[7] = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  return;
}


// ==== FUN_001ee5e0 @ 001ee5e0 ====

/* Strings referenciadas:
     "LowHealth" */

undefined4 FUN_001ee5e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_2;
  if (*(char *)((int)puVar1 + 0x4d) == '\0') {
    FUN_001ed9c8(param_2,PTR_s_LowHealth_003bda18,0);
  }
  puVar1[2] = puVar1[8];
  puVar1[4] = (float)puVar1[9] / (float)puVar1[8];
  FUN_001edb80(param_1,param_2,param_3);
  FUN_001efe70(param_2,1);
  *puVar1 = 1;
  return 1;
}


// ==== FUN_001ee678 @ 001ee678 ====

void FUN_001ee678(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    *param_1 = 2;
  }
  else {
    if (iVar1 < 2) {
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      fVar2 = 1.0 - ((float)param_1[3] - *(float *)(DAT_0040f4d0 + 0x20)) / (float)param_1[0xf];
      param_1[5] = (int)fVar2;
      fVar2 = (float)FUN_0029e688(param_1[4],
                                  (int)fVar2 * (uint)(fVar2 < 1.0) |
                                  (uint)(fVar2 >= 1.0) * 0x3f800000);
      param_1[1] = (int)((float)param_1[2] * fVar2);
      fVar4 = (float)param_1[0xb] + ((float)param_1[10] - (float)param_1[0xb]) * (float)param_1[5];
      FUN_00286120((float)param_1[2] * fVar2,fVar4,*(undefined4 *)(DAT_0040f510 + 0xcbe0));
      FUN_001d7238(param_1[1],fVar4,param_1[0xc],
                   *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc));
      if ((float)param_1[5] < 1.0) {
        return;
      }
      *param_1 = 0;
      return;
    }
  }
  if (1.0 <= (float)param_1[0x10]) {
    fVar2 = (float)param_1[10];
    param_1[1] = param_1[2];
  }
  else {
    fVar4 = (float)FUN_0029e688(param_1[4],1.0 - (float)param_1[0x10]);
    fVar3 = (float)param_1[2];
    fVar2 = (float)param_1[9];
    fVar4 = fVar3 * fVar4;
    fVar2 = (float)((int)fVar4 * (uint)(fVar2 < fVar4) | (int)fVar2 * (uint)(fVar2 >= fVar4));
    param_1[1] = (int)fVar2 * (uint)(fVar2 < fVar3) | (int)fVar3 * (uint)(fVar2 >= fVar3);
    fVar2 = (float)param_1[0xb] + ((float)param_1[10] - (float)param_1[0xb]) * (float)param_1[0x10];
  }
  FUN_00286120(param_1[1],fVar2,*(undefined4 *)(DAT_0040f510 + 0xcbe0));
  FUN_001d7238(param_1[1],fVar2,param_1[0xc],*(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc))
  ;
  return;
}


// ==== FUN_001ee850 @ 001ee850 ====

void FUN_001ee850(int param_1)

{
  FUN_001edd80();
  *(float *)(param_1 + 8) = *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x20) / *(float *)(param_1 + 4);
  return;
}


// ==== FUN_001ee888 @ 001ee888 ====

void FUN_001ee888(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00382348(iVar1 + 0x248,0x2b9d6f8);
  FUN_00280a08(param_1);
  *(undefined4 *)(iVar1 + 0x250) = 0;
  *(undefined1 *)(iVar1 + 0x290) = 1;
  *(undefined4 *)(iVar1 + 0x28c) = 0;
  *(undefined1 *)(iVar1 + 0x291) = 0;
  return;
}


// ==== FUN_001ee8d8 @ 001ee8d8 ====

/* Strings referenciadas:
     "../Export/ValueDB/Sound/ps2/DSP.cfg"
     "UpperThreshold"
     "Low Health"
     "Full Muff"
     "Smoothing"
     "HeartbeatThreshold" */

undefined4 FUN_001ee8d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x250);
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 1;
      }
    }
    else if (iVar1 != 2) {
      return 1;
    }
    *(undefined4 *)(iVar2 + 0x254) = *(undefined4 *)(param_3 * 4 + (int)param_2 + -4);
    FUN_00280a38(param_1,param_2,param_3 + -1);
    FUN_00280c90(param_1,0);
    *(undefined4 *)(iVar2 + 0x26c) = 0;
    *(undefined1 *)(iVar2 + 0x290) = 1;
    if (cGpffff8239 == '\0') {
      uVar3 = *(undefined4 *)(iVar2 + 0x26c);
      FUN_0027b950(uVar3,uVar3,DAT_003c09e8 + 4,0x3bda1c,0x3f8b00,0x3f8b10,
                   PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
      FUN_0027b950(uVar3,uVar3,DAT_003c09e8 + 4,0x3bda20,0x3f8b20,0x3f8b10,
                   PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
      FUN_0027b950(uVar3,uVar3,DAT_003c09e8 + 4,0x3bda24,0x3f8b30,0x3f8b10,
                   PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
      FUN_0027b950(uVar3,uVar3,DAT_003c09e8 + 4,0x3bda28,0x3f8b40,0x3f8b10,
                   PTR_s____Export_ValueDB_Sound_ps2_DSP__003bda08,0,0);
      cGpffff8239 = '\x01';
    }
    *(undefined4 *)(iVar2 + 0x264) = 0x3e99999a;
    *(undefined4 *)(iVar2 + 0x268) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0x274) = 0x40600000;
    *(undefined4 *)(iVar2 + 0x278) = 0x40000000;
    *(undefined4 *)(iVar2 + 0x27c) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x280) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0x250) = 1;
    *(undefined4 *)(iVar2 + 0x25c) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x260) = 0x3e99999a;
  }
  *(undefined4 *)(iVar2 + 0x28c) = 0xbf800000;
  *(undefined4 *)(iVar2 + 600) = 0x3f800000;
  *(undefined1 *)(iVar2 + 0x291) = 0;
  return 1;
}


// ==== FUN_001eeb00 @ 001eeb00 ====

void FUN_001eeb00(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  FUN_00280a80();
  FUN_001ef360(param_1);
  lVar3 = FUN_00103870(DAT_0040f0e0);
  iVar5 = (int)param_1;
  if (lVar3 != 0) {
    cVar4 = *(char *)(iVar5 + 0x291);
    goto LAB_001eed0c;
  }
  lVar3 = 0x6d6123044330fccf;
  if ((long *)*DAT_0040f4bc != (long *)0x0) {
    lVar3 = *(long *)*DAT_0040f4bc;
  }
  if (lVar3 != 0x594c3cc765b41051) {
    iVar1 = *(int *)(DAT_0040f0e0 + 0x2014c);
    if (iVar1 == 1) {
      fVar6 = *(float *)(DAT_0040f4d0 + 0x328);
LAB_001eebe4:
      fVar6 = fVar6 / 1200.0;
      fVar7 = *(float *)(iVar5 + 600);
    }
    else {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          fVar6 = *(float *)(DAT_0040f4d0 + 0x328);
          goto LAB_001eebe4;
        }
      }
      else if (iVar1 < 4) {
        fVar6 = *(float *)(DAT_0040f4d0 + 0x328) / 750.0;
        fVar7 = *(float *)(iVar5 + 600);
        goto LAB_001eec20;
      }
      fVar6 = 0.0;
      fVar7 = *(float *)(iVar5 + 600);
    }
LAB_001eec20:
    fVar7 = fVar7 + (fVar6 - fVar7) * DAT_003bda24;
    *(float *)(iVar5 + 600) = fVar7;
    if (fVar7 < DAT_003bda28) {
      FUN_001ef0c0(fVar7 * (1.0 / DAT_003bda28),param_1);
    }
    fVar6 = *(float *)(iVar5 + 600);
    iVar1 = *(int *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0x2c);
    if (fVar6 < DAT_003bda1c) {
      if (DAT_003bda20 < fVar6) {
        fVar6 = (fVar6 - DAT_003bda20) / (DAT_003bda1c - DAT_003bda20);
      }
      else {
        fVar6 = 0.0;
      }
      FUN_001ed718(iVar1,3,1);
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x50);
      (**(code **)(iVar2 + 0x3c))(fVar6,*(int *)(iVar1 + 0xc) + (int)*(short *)(iVar2 + 0x38));
      cVar4 = *(char *)(iVar5 + 0x291);
      goto LAB_001eed0c;
    }
    FUN_001ed718(iVar1,3,0);
  }
  cVar4 = *(char *)(iVar5 + 0x291);
LAB_001eed0c:
  if ((cVar4 == '\x01') && (lVar3 = FUN_00103870(DAT_0040f0e0), lVar3 == 1)) {
    FUN_001eed98(0,param_1,0);
    *(undefined1 *)(iVar5 + 0x291) = 0;
  }
  return;
}


// ==== FUN_001eed58 @ 001eed58 ====

undefined4 FUN_001eed58(int param_1)

{
  FUN_00280b10();
  *(undefined1 *)(param_1 + 0x291) = 0;
  *(undefined4 *)(param_1 + 0x250) = 2;
  return 1;
}


// ==== FUN_001eed98 @ 001eed98 ====

void FUN_001eed98(float param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_f0 [80];
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_45;
  long alStack_40 [2];
  
  bVar1 = false;
  uStack_4c = 0;
  iVar4 = (int)param_2;
  switch(param_3) {
  case 0:
    bVar1 = true;
    alStack_40[0] = 0x79477e49df1f0000;
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 1:
    alStack_40[0] = -0x5abfc000ad140000;
    break;
  case 2:
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x1f0);
    break;
  case 3:
    alStack_40[0] = -0x5abfbff68aa05000;
    break;
  case 4:
    alStack_40[0] = -0x5abfbfefdf3e6540;
    break;
  case 5:
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x200);
    break;
  case 6:
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 600);
    break;
  case 7:
  case 8:
  case 9:
    goto switchD_001eedd0_caseD_7;
  case 10:
  case 0xc:
  case 0x11:
  case 0x15:
    alStack_40[0] = 0;
    break;
  case 0xb:
    bVar1 = true;
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x250);
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 0xd:
    bVar1 = true;
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x250);
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 0xe:
    alStack_40[0] = 0;
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 0xf:
    bVar1 = true;
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x268);
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 0x10:
    bVar1 = true;
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x270);
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 0x12:
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x280);
    break;
  case 0x13:
    bVar1 = true;
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x288);
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
    goto LAB_001eefa0;
  case 0x14:
    bVar1 = true;
    alStack_40[0] = *(long *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x290);
    fVar5 = *(float *)(DAT_0040f4d0 + 0x20);
LAB_001eefa0:
    *(float *)(iVar4 + 0x28c) = fVar5 + param_1;
  }
  if (bVar1) {
    *(float *)(iVar4 + 0x28c) = *(float *)(iVar4 + 0x28c) - 0.25;
  }
  if ((alStack_40[0] != 0) && (lVar2 = FUN_00280200(DAT_0040f510,alStack_40,0), lVar2 != 0)) {
    iStack_a0 = (int)lVar2;
    *(uint *)(*(int *)(iStack_a0 + 0x18) + 0x54) =
         *(uint *)(*(int *)(iStack_a0 + 0x18) + 0x54) & 0xfffffffd;
    uStack_9c = 0x3f800000;
    uStack_48 = 0x10;
    uStack_4c = 0x85c;
    uStack_90 = 0;
    uStack_98 = 0;
    if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
      uStack_64 = DAT_003bda30;
      uStack_60 = DAT_003bda2c;
      uStack_5c = DAT_003bda34;
      uStack_54 = DAT_003bda38;
      uStack_45 = 1;
      uStack_4c = 0x80085c;
      uStack_68 = DAT_003bda2c;
      uStack_58 = DAT_003bda38;
    }
    uVar3 = FUN_00280bc0(param_2);
    FUN_00283e78(uVar3,auStack_f0,0);
  }
switchD_001eedd0_caseD_7:
  return;
}


// ==== FUN_001ef0c0 @ 001ef0c0 ====

void FUN_001ef0c0(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = (int)param_2;
  fVar4 = *(float *)(DAT_0040f4d0 + 0x1c);
  fVar2 = *(float *)(iVar1 + 0x26c) - fVar4;
  *(float *)(iVar1 + 0x26c) = fVar2;
  if (fVar2 < 0.0) {
    uVar3 = 0x3f800000;
    FUN_001ef260(0x3f800000,param_2,*(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2a0));
    if (param_1 < 0.5) {
      FUN_001c2760(uVar3,DAT_0040f4d8 + 0x83ca0,8);
      FUN_00107928(0x3f333333,DAT_0040f0e8,0);
    }
    *(float *)(iVar1 + 0x26c) =
         *(float *)(iVar1 + 0x260) +
         (*(float *)(iVar1 + 0x25c) - *(float *)(iVar1 + 0x260)) * param_1;
    *(float *)(iVar1 + 0x270) =
         *(float *)(iVar1 + 0x268) +
         (*(float *)(iVar1 + 0x264) - *(float *)(iVar1 + 0x268)) * param_1;
  }
  fVar2 = *(float *)(iVar1 + 0x270);
  fVar4 = fVar2 - fVar4;
  *(float *)(iVar1 + 0x270) = fVar4;
  if (((0.0 < fVar2) && (fVar4 <= 0.0)) &&
     (FUN_001ef260(0x3f800000,param_2,*(undefined8 *)(*(int *)(DAT_0040f4d0 + 0x5aec) + 0x2a8)),
     param_1 < 0.5)) {
    FUN_00107928(0x3ecccccd,DAT_0040f0e8,0);
  }
  return;
}


// ==== FUN_001ef260 @ 001ef260 ====

void FUN_001ef260(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_100 [80];
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_55;
  undefined8 auStack_50 [2];
  
  uStack_5c = 0;
  auStack_50[0] = param_3;
  uVar1 = FUN_00280bc0();
  lVar2 = FUN_00280200(DAT_0040f510,auStack_50,0);
  if (lVar2 != 0) {
    iStack_b0 = (int)lVar2;
    *(uint *)(*(int *)(iStack_b0 + 0x18) + 0x54) =
         *(uint *)(*(int *)(iStack_b0 + 0x18) + 0x54) & 0xfffffffd;
    uStack_58 = 0x10;
    uStack_5c = 0x81c;
    uStack_a8 = 0;
    if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
      uStack_74 = DAT_003bda40;
      uStack_70 = DAT_003bda3c;
      uStack_6c = DAT_003bda44;
      uStack_64 = DAT_003bda48;
      uStack_55 = 1;
      uStack_5c = 0x80081c;
      uStack_78 = DAT_003bda3c;
      uStack_68 = DAT_003bda48;
    }
    uStack_ac = param_1;
    FUN_00283e78(uVar1,auStack_100,0);
  }
  return;
}


// ==== FUN_001ef360 @ 001ef360 ====

void FUN_001ef360(int param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_100 [80];
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_55;
  
  uStack_5c = 0;
  fVar3 = *(float *)(DAT_0040f4d0 + 0x20);
  lVar1 = FUN_00103908(DAT_0040f0e0);
  fVar2 = *(float *)(param_1 + 0x28c);
  if (lVar1 == 3) {
    *(float *)(param_1 + 0x28c) = fVar2 - *(float *)(DAT_0040f4d0 + 0x1c);
    fVar2 = *(float *)(param_1 + 0x28c);
  }
  if (fVar3 < fVar2) {
    lVar1 = FUN_002842e8(*(undefined4 *)(param_1 + 0x254));
    if ((lVar1 == 0) && (lVar1 = FUN_00103870(DAT_0040f0e0), lVar1 == 0)) {
      iStack_b0 = FUN_00280200(DAT_0040f510,*(int *)(DAT_0040f4d0 + 0x5aec) + 0x298,0);
      *(uint *)(*(int *)(iStack_b0 + 0x18) + 0x54) =
           *(uint *)(*(int *)(iStack_b0 + 0x18) + 0x54) & 0xfffffffd;
      uStack_ac = 0x3f800000;
      uStack_58 = 0x10;
      uStack_5c = 0x185c;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_57 = 1;
      if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
        uStack_74 = DAT_003bda30;
        uStack_70 = DAT_003bda2c;
        uStack_6c = DAT_003bda34;
        uStack_64 = DAT_003bda38;
        uStack_55 = 1;
        uStack_5c = 0x80185c;
        uStack_78 = DAT_003bda2c;
        uStack_68 = DAT_003bda38;
      }
      FUN_00283e78(*(undefined4 *)(param_1 + 0x254),auStack_100,0);
    }
  }
  else {
    lVar1 = FUN_002842e8(*(undefined4 *)(param_1 + 0x254));
    if (lVar1 != 0) {
      FUN_00284298(*(undefined4 *)(param_1 + 0x254));
      *(undefined4 *)(param_1 + 0x28c) = 0xbf800000;
    }
  }
  return;
}


// ==== FUN_001ef508 @ 001ef508 ====

void FUN_001ef508(int param_1)

{
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  FUN_00280a08();
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}


// ==== FUN_001ef548 @ 001ef548 ====

undefined4
FUN_001ef548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5,undefined8 param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar2 = *(int *)(iVar7 + 0x244);
  if (iVar2 != 1) {
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        return 1;
      }
      *(undefined4 *)(iVar7 + 0x244) = 5;
    }
    else {
      if (iVar2 == 2) {
        return 1;
      }
      if (iVar2 != 5) {
        return 1;
      }
    }
    lVar6 = FUN_00280a38(param_1);
    if (lVar6 == 0) {
      return 0;
    }
    uVar4 = FUN_001d8478(*(undefined4 *)(DAT_0040f510 + 0xcbd4));
    *(undefined4 *)(iVar7 + 0x248) = uVar4;
    *(undefined4 *)(iVar7 + 0x244) = 1;
  }
  iVar2 = DAT_0040f510;
  sVar1 = *(short *)(*(int *)(iVar7 + 0x248) + 0x20);
  uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x248) + 8);
  iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x6c51001c37800000);
  uVar3 = *(undefined4 *)(iVar5 + 8);
  iVar5 = FUN_001e89b0(*(undefined4 *)(DAT_0040f510 + 0xcbd8),0x6c51001c37800000);
  lVar6 = FUN_0027ff78(iVar2,param_4,0,uVar4,(int)sVar1 << 0xb,uVar3,*(undefined4 *)(iVar5 + 0xc),
                       param_6);
  *(int *)(iVar7 + 0x24c) = (int)lVar6;
  if (lVar6 == 0) {
    return 0;
  }
  FUN_001d84c8(*(undefined4 *)(DAT_0040f510 + 0xcbd4),*(undefined4 *)(iVar7 + 0x248));
  *(undefined4 *)(iVar7 + 0x244) = 2;
  *(undefined1 *)(iVar7 + 0x254) = param_5;
  *(undefined4 *)(iVar7 + 0x248) = 0;
  return 1;
}


// ==== FUN_001ef6f0 @ 001ef6f0 ====

void FUN_001ef6f0(void)

{
  FUN_00280a80();
  return;
}


// ==== FUN_001ef710 @ 001ef710 ====

undefined4 FUN_001ef710(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(iVar3 + 0x244)) {
  case 0:
    goto switchD_001ef740_caseD_0;
  default:
switchD_001ef740_caseD_1:
    uVar1 = 1;
    break;
  case 2:
    *(undefined4 *)(iVar3 + 0x244) = 3;
  case 3:
    lVar2 = FUN_00280b10(param_1);
    if (lVar2 != 0) {
      *(undefined4 *)(iVar3 + 0x244) = 4;
switchD_001ef740_caseD_4:
      lVar2 = FUN_00280100(DAT_0040f510,*(undefined4 *)(iVar3 + 0x24c));
      if (lVar2 != 0) {
        *(undefined4 *)(iVar3 + 0x24c) = 0;
        *(undefined4 *)(iVar3 + 0x244) = 5;
switchD_001ef740_caseD_0:
        *(undefined4 *)(iVar3 + 0x244) = 5;
        goto switchD_001ef740_caseD_1;
      }
    }
    uVar1 = 0;
    break;
  case 4:
    goto switchD_001ef740_caseD_4;
  }
  return uVar1;
}


// ==== FUN_001ef7b0 @ 001ef7b0 ====

void FUN_001ef7b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_0035d728(auStack_30,0x3f8bd8,param_2);
  if (*(char *)((int)param_1 + 0x254) == '\0') {
    FUN_001ef8d0(param_1,auStack_30);
  }
  else {
    FUN_001ef9c0(param_1,auStack_30);
  }
  return;
}


// ==== FUN_001ef808 @ 001ef808 ====

void FUN_001ef808(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  FUN_0035d728(auStack_70,0x3f8bd8,param_2);
  if (*(char *)((int)param_1 + 0x254) == '\0') {
    uVar1 = FUN_002723b0(auStack_70);
    FUN_00280cd0(param_1,uVar1);
  }
  else {
    FUN_0035d728(auStack_60,0x3f8be0,auStack_70);
    FUN_0035d728(auStack_50,0x3f8be8,auStack_70);
    uVar1 = FUN_002723b0(auStack_60);
    uVar2 = FUN_002723b0(auStack_50);
    FUN_00280cd0(param_1,uVar1);
    FUN_00280cd0(param_1,uVar2);
  }
  return;
}


// ==== FUN_001ef8d0 @ 001ef8d0 ====

void FUN_001ef8d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_e0 [80];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_35;
  undefined8 auStack_30 [2];
  
  uStack_3c = 0;
  auStack_30[0] = FUN_002723b0(param_2);
  lVar1 = FUN_0027fcf8(*(undefined4 *)((int)param_1 + 0x24c),auStack_30,0);
  if (lVar1 != 0) {
    uStack_90 = (undefined4)lVar1;
    uStack_8c = 0x3f800000;
    uStack_38 = 0x10;
    uStack_3c = 0x85c;
    uStack_80 = 0;
    uStack_88 = 0;
    if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
      uStack_54 = DAT_003bda50;
      uStack_50 = DAT_003bda4c;
      uStack_4c = DAT_003bda54;
      uStack_44 = DAT_003bda58;
      uStack_35 = 1;
      uStack_3c = 0x80085c;
      uStack_58 = DAT_003bda4c;
      uStack_48 = DAT_003bda58;
    }
    uVar2 = FUN_00280bc0(param_1);
    FUN_00283e78(uVar2,auStack_e0,0);
  }
  return;
}


// ==== FUN_001ef9c0 @ 001ef9c0 ====

void FUN_001ef9c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_1e0 [80];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined1 uStack_135;
  undefined1 auStack_130 [80];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_85;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_13c = 0;
  uStack_8c = 0;
  FUN_0035d728(auStack_80,0x3f8be0,param_2);
  FUN_0035d728(auStack_70,0x3f8be8,param_2);
  uStack_60 = FUN_002723b0(auStack_80);
  uStack_58 = FUN_002723b0(auStack_70);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x24c) != 0) {
    uVar1 = FUN_0027fcf8(*(int *)(iVar4 + 0x24c),&uStack_60,0);
    uStack_e0 = FUN_0027fcf8(*(undefined4 *)(iVar4 + 0x24c),&uStack_58,0);
    uStack_18c = *(undefined4 *)(iVar4 + 0x250);
    uStack_138 = 0x10;
    uStack_180 = 0xbf800000;
    uStack_d0 = 0x3f800000;
    uStack_88 = 0x10;
    uStack_188 = 0;
    uStack_13c = 0x85c;
    uStack_8c = 0x85c;
    uStack_d8 = 0;
    if (*(char *)(DAT_0040f510 + 0xcb9d) != '\0') {
      uStack_13c = 0x80085c;
      uStack_a4 = DAT_003bda50;
      uStack_a0 = DAT_003bda4c;
      uStack_9c = DAT_003bda54;
      uStack_94 = DAT_003bda58;
      uStack_85 = 1;
      uStack_8c = 0x80085c;
      uStack_158 = DAT_003bda4c;
      uStack_154 = DAT_003bda50;
      uStack_150 = 0;
      uStack_14c = DAT_003bda54;
      uStack_148 = DAT_003bda58;
      uStack_144 = 0;
      uStack_135 = 1;
      uStack_a8 = 0;
      uStack_98 = 0;
    }
    uStack_190 = uVar1;
    uStack_dc = uStack_18c;
    uVar2 = FUN_00280bc0(param_1);
    uVar3 = FUN_00280bc0(param_1);
    FUN_00283e78(uVar2,auStack_1e0,0);
    FUN_00283e78(uVar3,auStack_130,0);
  }
  return;
}


// ==== FUN_001efba0 @ 001efba0 ====

void FUN_001efba0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_68;
  
  puStack_b8 = &LAB_001d5e40;
  puStack_b4 = &LAB_001d5e48;
  puStack_bc = &LAB_001d5e50;
  puStack_c0 = &LAB_001d5e10;
  FUN_002859f8(param_1,9,0xae00,0x3000,&puStack_c0);
  iVar3 = (int)param_1;
  FUN_00107fb8(DAT_0040f4c4);
  uVar2 = FUN_00324650();
  iVar1 = FUN_00108008(DAT_0040f4c4);
  ChangeThreadPriority(uVar2,iVar1 + 2);
  (**(code **)(*(int *)(iVar3 + 0xcba0) + 0x24))
            (iVar3 + *(short *)(*(int *)(iVar3 + 0xcba0) + 0x20));
  (**(code **)(*(int *)(iVar3 + 0xcba0) + 0x2c))
            (iVar3 + *(short *)(*(int *)(iVar3 + 0xcba0) + 0x28));
  FUN_00285ad0(*(undefined4 *)(iVar3 + 0xcbe0),0);
  FUN_00286410(*(int *)(DAT_0040f510 + 0xcbe0) + 0x1c0,
               *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbdc) + 0x14),
               *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbdc) + 0x10));
  uStack_9c = *(undefined4 *)(iVar3 + 0xcba8);
  iStack_98 = iVar3 + 0xcb7c;
  uStack_a0 = 0;
  uStack_68 = uStack_9c;
  FUN_00283108(param_1,&uStack_a0);
  puStack_b0 = &LAB_002859a0;
  puStack_a8 = &LAB_002859d0;
  puStack_ac = &LAB_002859b8;
  FUN_00328cc0(&puStack_b0);
  FUN_00282008(*(undefined4 *)(iVar3 + 0xcbf4),DAT_003bda5c,0x1efd80,0x70000,0x17fd80,0x40);
  return;
}


// ==== FUN_001efd30 @ 001efd30 ====

bool FUN_001efd30(int param_1)

{
  long lVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *pcStack_58;
  int iStack_54;
  code *pcStack_50;
  int iStack_4c;
  code *pcStack_48;
  int iStack_44;
  code *pcStack_40;
  int iStack_3c;
  code *pcStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  
  uStack_60 = 0;
  uStack_5c = 0;
  pcStack_58 = FUN_00285cc8;
  iStack_54 = *(int *)(param_1 + 0xcbe0);
  pcStack_38 = FUN_00285ee8;
  iStack_4c = iStack_54 + 0x70;
  iStack_44 = iStack_54 + 0xe0;
  iStack_3c = iStack_54 + 0x150;
  pcStack_40 = FUN_00285cc8;
  pcStack_50 = FUN_00285cc8;
  pcStack_48 = FUN_00285cc8;
  uStack_34 = 0;
  pcStack_30 = FUN_001d7100;
  uStack_2c = *(undefined4 *)(*(int *)(param_1 + 0xcbd8) + 0xc);
  uStack_28 = 1;
  lVar1 = FUN_00285b60(iStack_54,&uStack_60);
  if (lVar1 != 0) {
    FUN_00285c60(0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0xcbe0),1,0);
    FUN_00285c40(*(undefined4 *)(param_1 + 0xcbe0));
  }
  return lVar1 != 0;
}


// ==== FUN_001efe08 @ 001efe08 ====

void FUN_001efe08(undefined4 param_1,int param_2)

{
  FUN_00285aa8();
  FUN_00285c60(0x3f800000,0x3f800000,param_1,*(undefined4 *)(param_2 + 0xcbe0),1,0);
  return;
}


// ==== FUN_001efe60 @ 001efe60 ====

void FUN_001efe60(int param_1)

{
  *(undefined4 *)(param_1 + 0xcbf8) = 0;
  return;
}


// ==== FUN_001efe70 @ 001efe70 ====

undefined4 FUN_001efe70(undefined8 param_1,long param_2)

{
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined4 uStack_84;
  code *pcStack_80;
  int iStack_7c;
  code *pcStack_78;
  int iStack_74;
  code *pcStack_70;
  int iStack_6c;
  code *pcStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  FUN_00285c80(*(undefined4 *)(DAT_0040f510 + 0xcbe0));
  pcStack_88 = FUN_00285cc8;
  uStack_84 = *(undefined4 *)(DAT_0040f510 + 0xcbe0);
  pcStack_80 = FUN_00285cc8;
  pcStack_78 = FUN_00285cc8;
  iStack_7c = *(int *)(DAT_0040f510 + 0xcbe0) + 0x70;
  pcStack_70 = FUN_00285cc8;
  iStack_74 = *(int *)(DAT_0040f510 + 0xcbe0) + 0xe0;
  pcStack_68 = FUN_00285ee8;
  iStack_6c = *(int *)(DAT_0040f510 + 0xcbe0) + 0x150;
  pcStack_60 = FUN_001d7100;
  uStack_64 = 0;
  uStack_5c = *(undefined4 *)(*(int *)(DAT_0040f510 + 0xcbd8) + 0xc);
  uStack_58 = 1;
  if (param_2 == 0) {
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    uStack_90 = FUN_00285510(DAT_0040f510 + 0xb308);
    uStack_8c = FUN_00285548(DAT_0040f510 + 0xb308);
  }
  FUN_00285b60(*(undefined4 *)(DAT_0040f510 + 0xcbe0),&uStack_90);
  FUN_00285c60(0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(DAT_0040f510 + 0xcbe0),1,0);
  FUN_00285c40(*(undefined4 *)(DAT_0040f510 + 0xcbe0));
  return 1;
}


// ==== FUN_001effc8 @ 001effc8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001effc8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uStack_34;
  
  if ((param_2 == 0xffff) && (param_1 != 0)) {
    puVar2 = &DAT_0042a250;
    DAT_0042a208 = 0x4b400000;
    DAT_0042a20c = uStack_34;
    DAT_0042a218 = 0x3e800000;
    DAT_0042a21c = uStack_34;
    iVar1 = 1;
    DAT_0042a228 = 0x42a33457;
    DAT_0042a22c = uStack_34;
    DAT_0042a238 = 0;
    DAT_0042a23c = uStack_34;
    DAT_0042a200 = 0x3fc90fdb;
    DAT_0042a204 = 0xbe22f983;
    DAT_0042a210 = 0xbe22f983;
    DAT_0042a214 = 0x3f000000;
    DAT_0042a220 = 0xc2992661;
    DAT_0042a224 = 0xc2255de0;
    DAT_0042a230 = 0x421ed7b7;
    DAT_0042a234 = 0x40c90fda;
    DAT_0042a240 = 0x3f800000;
    DAT_0042a244 = 0x3faaaaab;
    do {
      *(undefined **)(puVar2 + 0x60) = &DAT_003e2810;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 0x80;
    } while (iVar1 != -1);
    _DAT_0042a350 = DAT_003f8c08;
    _DAT_0042a358 = DAT_003f8c08;
    DAT_0042a360 = DAT_003f8c08;
    DAT_0042a368 = DAT_003f8c08;
    DAT_0042a370 = DAT_003f8c08;
    DAT_0042a378 = DAT_003f8bf0;
    DAT_0042a3b8 = 0x4409ee8c;
    DAT_0042a3bc = 0x43968fcd;
    DAT_0042a380 = DAT_003f8bf8;
    DAT_0042a388 = DAT_003f8bf0;
    DAT_0042a390 = DAT_003f8bf8;
    DAT_0042a3c8 = 0x4b000000;
    DAT_0042a3cc = 0x4b000000;
    DAT_0042a398 = DAT_003f8c00;
    DAT_0042a3b0 = 0x43f59407;
    DAT_0042a3b4 = 0x44345569;
    DAT_0042a3a0 = DAT_003f8c00;
    DAT_0042a3c0 = 0x4b000000;
    DAT_0042a3c4 = 0x4b000000;
  }
  return;
}


// ==== FUN_001f02c8 @ 001f02c8 ====

void FUN_001f02c8(void)

{
  return;
}


// ==== FUN_001f0300 @ 001f0300 ====

void FUN_001f0300(void)

{
  FUN_001effc8(1,0xffff);
  return;
}


// ==== FUN_001f0320 @ 001f0320 ====

void FUN_001f0320(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x84) = 7;
  *(undefined4 *)(iVar1 + 0x414) = 0;
  FUN_0035c6ec(iVar1 + 0x1d0,0,0x30);
  FUN_001f0958(0x3f800000,param_1);
  FUN_001f0770(0x3f800000,param_1);
  *(undefined1 *)(iVar1 + 0x41c) = 0;
  FUN_001f1018(0x4580e800,param_1);
  FUN_001d5e58(param_1,param_2);
  return;
}


// ==== FUN_001f03c0 @ 001f03c0 ====

void FUN_001f03c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


// ==== FUN_001f03d0 @ 001f03d0 ====

undefined4
FUN_001f03d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_30;
  
  iVar4 = (int)param_1;
  switch(*(undefined4 *)(iVar4 + 0x84)) {
  default:
    break;
  case 2:
    goto switchD_001f0428_caseD_2;
  case 3:
    return 1;
  case 7:
    FUN_002726d0(param_3,iVar4 + 100);
    if (param_7 != '\0') {
      *(undefined1 *)(iVar4 + 100) = 0x53;
    }
    *(undefined4 *)(iVar4 + 0x410) = param_4;
    *(undefined4 *)(iVar4 + 0x1d0) = 0;
    for (iStack_30 = 0; iStack_30 < 2; iStack_30 = iStack_30 + 1) {
      *(undefined4 *)(iVar4 + 0x1ec + iStack_30 * 4) = 0;
    }
    *(undefined1 *)(iVar4 + 500) = 0;
    *(int *)(iVar4 + 0x414) = *(int *)(iVar4 + 0x410) + 0x2c;
    *(undefined4 *)(iVar4 + 0x1e4) = *(undefined4 *)(*(int *)(iVar4 + 0x410) + 0x28);
    iVar3 = *(int *)(iVar4 + 0x1e4);
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = iVar3 + 0x7f;
    }
    *(int *)(iVar4 + 0x1e4) = *(int *)(iVar4 + 0x1e4) - (iVar3 + (iVar2 >> 7) * -0x80);
    iVar3 = *(int *)(iVar4 + 0x414) + 0x7f;
    if (iVar3 < 0) {
      iVar3 = *(int *)(iVar4 + 0x414) + 0xfe;
    }
    *(int *)(iVar4 + 0x1e8) = (iVar3 >> 7) << 7;
    DAT_0040da30 = 1;
    *(undefined4 *)(iVar4 + 0x84) = 1;
  case 1:
    lVar1 = FUN_001d5ea8(param_1,param_2,param_3,param_5,param_6);
    if (lVar1 != 0) {
switchD_001f0428_caseD_2:
      FUN_001f0f28(param_1,0,0);
      *(undefined4 *)(iVar4 + 0x84) = 3;
      return 1;
    }
  }
  return 0;
}


// ==== FUN_001f05d0 @ 001f05d0 ====

undefined8 FUN_001f05d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001d5f58(param_1);
  return uVar1;
}


// ==== FUN_001f0620 @ 001f0620 ====

void FUN_001f0620(undefined8 param_1,undefined4 param_2)

{
  FUN_001f0770(*(undefined4 *)((int)param_1 + 0x74),param_1);
  FUN_001d6038(param_1,param_2);
  return;
}


// ==== FUN_001f0678 @ 001f0678 ====

void FUN_001f0678(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_30;
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x41c) == '\0') {
    if (*(int *)(iVar2 + 0x1d0) != 0) {
      iVar1 = *(int *)(iVar2 + 0x60);
      while (uStack_30 = iVar1 + -1, 0 < uStack_30) {
        *(undefined4 *)(iVar2 + 0x1ec + uStack_30 * 4) =
             *(undefined4 *)(iVar2 + 0x1ec + (iVar1 + -2) * 4);
        iVar1 = uStack_30;
      }
    }
    *(int *)(iVar2 + 0x1d0) = *(int *)(iVar2 + 0x1d0) + 1;
    if (*(int *)(iVar2 + 0x60) < *(int *)(iVar2 + 0x1d0)) {
      *(undefined4 *)(iVar2 + 0x1d0) = *(undefined4 *)(iVar2 + 0x60);
    }
    *(undefined4 *)(iVar2 + 0x1ec) = 0;
  }
  DAT_0040da30 = 1;
  FUN_001d60b8(param_1);
  return;
}


// ==== FUN_001f0770 @ 001f0770 ====

void FUN_001f0770(undefined4 param_1,undefined8 param_2)

{
  FUN_001f0810(param_1,param_2);
  FUN_00384800(param_1,param_2);
  return;
}


// ==== FUN_001f07b8 @ 001f07b8 ====

void FUN_001f07b8(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00384740(param_1,0,0x3f800000);
  uVar1 = FUN_003848a8(uVar1,param_2);
  *(undefined4 *)((int)param_2 + 0x1dc) = uVar1;
  return;
}


// ==== FUN_001f0810 @ 001f0810 ====

void FUN_001f0810(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00388e18(DAT_0040f510);
  fVar4 = (float)FUN_00384790(uVar1,1);
  fVar5 = (float)FUN_00384880(DAT_0040f510);
  iVar3 = (int)param_2;
  *(float *)(iVar3 + 0x424) = param_1 * 0.6886523 * *(float *)(iVar3 + 0x418) * fVar4 * fVar5;
  uVar2 = FUN_003848a8(*(undefined4 *)(iVar3 + 0x424),param_2);
  *(undefined4 *)(iVar3 + 0x1d4) = uVar2;
  uVar2 = FUN_003848a8(*(float *)(iVar3 + 0x424) * 0.5,param_2);
  *(undefined4 *)(iVar3 + 0x1d8) = uVar2;
  return;
}


// ==== FUN_001f08e8 @ 001f08e8 ====

void FUN_001f08e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00384858(DAT_0040f510);
  FUN_00286140(param_1,param_2,uVar1,0x48ff50,0x48ff50);
  *(undefined4 *)(param_4 + 0x418) = param_3;
  return;
}


